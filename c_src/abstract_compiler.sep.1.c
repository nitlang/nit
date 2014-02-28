#include "abstract_compiler.sep.0.h"
/* method abstract_compiler#ToolContext#opt_output for (self: ToolContext): OptionString */
val* abstract_compiler__ToolContext__opt_output(val* self) {
val* var /* : OptionString */;
val* var1 /* : OptionString */;
var1 = self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_output].val; /* @opt_output on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @opt_output");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 27);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 29);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 31);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 33);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 35);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 37);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 39);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 41);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 43);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 45);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 47);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 49);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 51);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 53);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 55);
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
/* method abstract_compiler#ModelBuilder#cc_paths for (self: ModelBuilder): Array[String] */
val* abstract_compiler__ModelBuilder__cc_paths(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_abstract_compiler__ModelBuilder___64dcc_paths].val; /* @cc_paths on <self:ModelBuilder> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @cc_paths");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 70);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ModelBuilder#cc_paths for (self: Object): Array[String] */
val* VIRTUAL_abstract_compiler__ModelBuilder__cc_paths(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = abstract_compiler__ModelBuilder__cc_paths(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ModelBuilder#cc_paths= for (self: ModelBuilder, Array[String]) */
void abstract_compiler__ModelBuilder__cc_paths_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__ModelBuilder___64dcc_paths].val = p0; /* @cc_paths on <self:ModelBuilder> */
RET_LABEL:;
}
/* method abstract_compiler#ModelBuilder#cc_paths= for (self: Object, Array[String]) */
void VIRTUAL_abstract_compiler__ModelBuilder__cc_paths_61d(val* self, val* p0) {
abstract_compiler__ModelBuilder__cc_paths_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#ModelBuilder#init for (self: ModelBuilder, Model, ToolContext) */
void abstract_compiler__ModelBuilder__init(val* self, val* p0, val* p1) {
val* var_model /* var model: Model */;
val* var_toolcontext /* var toolcontext: ToolContext */;
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
val* var45 /* : null */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
long var49 /* : Int */;
val* var50 /* : String */;
short int var51 /* : Bool */;
val* var52 /* : OptionBool */;
val* var53 /* : nullable Object */;
short int var54 /* : Bool */;
short int var_55 /* var : Bool */;
val* var56 /* : OptionBool */;
val* var57 /* : nullable Object */;
short int var58 /* : Bool */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
long var62 /* : Int */;
val* var63 /* : String */;
long var64 /* : Int */;
val* var65 /* : Array[String] */;
val* var66 /* : OptionArray */;
val* var67 /* : nullable Object */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : NativeString */;
long var71 /* : Int */;
val* var72 /* : String */;
val* var73 /* : String */;
short int var74 /* : Bool */;
short int var75 /* : Bool */;
val* var76 /* : Array[String] */;
char var77 /* : Char */;
val* var78 /* : Array[String] */;
val* var79 /* : Pattern */;
var_model = p0;
var_toolcontext = p1;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__ModelBuilder__init]))(self, p0, p1) /* init on <self:ModelBuilder>*/;
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
var21 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__ModelBuilder__cc_paths]))(self) /* cc_paths on <self:ModelBuilder>*/;
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
var30 = ((val* (*)(val*))(self->class->vft[COLOR_kernel__Object__sys]))(self) /* sys on <self:ModelBuilder>*/;
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
var41 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__ModelBuilder__cc_paths]))(self) /* cc_paths on <self:ModelBuilder>*/;
var42 = ((val* (*)(val*))(var_libname39->class->vft[COLOR_file__String__simplify_path]))(var_libname39) /* simplify_path on <var_libname39:String>*/;
((void (*)(val*, val*))(var41->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var41, var42) /* add on <var41:Array[String]>*/;
} else {
}
var43 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__ModelBuilder__cc_paths]))(self) /* cc_paths on <self:ModelBuilder>*/;
var44 = ((short int (*)(val*))(var43->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var43) /* is_empty on <var43:Array[String]>*/;
if (var44){
var45 = NULL;
if (varonce46) {
var47 = varonce46;
} else {
var48 = "Cannot determine the nit clib path. define envvar NIT_DIR.";
var49 = 58;
var50 = string__NativeString__to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
((void (*)(val*, val*, val*))(var_toolcontext->class->vft[COLOR_toolcontext__ToolContext__error]))(var_toolcontext, var45, var47) /* error on <var_toolcontext:ToolContext>*/;
} else {
}
var52 = ((val* (*)(val*))(var_toolcontext->class->vft[COLOR_abstract_compiler__ToolContext__opt_no_stacktrace]))(var_toolcontext) /* opt_no_stacktrace on <var_toolcontext:ToolContext>*/;
var53 = ((val* (*)(val*))(var52->class->vft[COLOR_opts__Option__value]))(var52) /* value on <var52:OptionBool>*/;
var54 = ((struct instance_kernel__Bool*)var53)->value; /* autounbox from nullable Object to Bool */;
var_55 = var54;
if (var54){
var56 = ((val* (*)(val*))(var_toolcontext->class->vft[COLOR_abstract_compiler__ToolContext__opt_stacktrace]))(var_toolcontext) /* opt_stacktrace on <var_toolcontext:ToolContext>*/;
var57 = ((val* (*)(val*))(var56->class->vft[COLOR_opts__Option__value]))(var56) /* value on <var56:OptionBool>*/;
var58 = ((struct instance_kernel__Bool*)var57)->value; /* autounbox from nullable Object to Bool */;
var51 = var58;
} else {
var51 = var_55;
}
if (var51){
if (varonce59) {
var60 = varonce59;
} else {
var61 = "Cannot use --nit-stacktrace when --no-stacktrace is activated";
var62 = 61;
var63 = string__NativeString__to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var60) /* print on <self:ModelBuilder>*/;
var64 = 1;
((void (*)(val*, long))(self->class->vft[COLOR_kernel__Object__exit]))(self, var64) /* exit on <self:ModelBuilder>*/;
} else {
}
var65 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__ModelBuilder__cc_paths]))(self) /* cc_paths on <self:ModelBuilder>*/;
var66 = ((val* (*)(val*))(var_toolcontext->class->vft[COLOR_abstract_compiler__ToolContext__opt_cc_path]))(var_toolcontext) /* opt_cc_path on <var_toolcontext:ToolContext>*/;
var67 = ((val* (*)(val*))(var66->class->vft[COLOR_opts__Option__value]))(var66) /* value on <var66:OptionArray>*/;
((void (*)(val*, val*))(var65->class->vft[COLOR_abstract_collection__Sequence__append]))(var65, var67) /* append on <var65:Array[String]>*/;
if (varonce68) {
var69 = varonce68;
} else {
var70 = "NIT_CC_PATH";
var71 = 11;
var72 = string__NativeString__to_s_with_length(var70, var71);
var69 = var72;
varonce68 = var69;
}
var73 = ((val* (*)(val*))(var69->class->vft[COLOR_environ__String__environ]))(var69) /* environ on <var69:String>*/;
var_path_env = var73;
var74 = ((short int (*)(val*))(var_path_env->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var_path_env) /* is_empty on <var_path_env:String>*/;
var75 = !var74;
if (var75){
var76 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__ModelBuilder__cc_paths]))(self) /* cc_paths on <self:ModelBuilder>*/;
var77 = ':';
var79 = BOX_kernel__Char(var77); /* autobox from Char to Pattern */
var78 = ((val* (*)(val*, val*))(var_path_env->class->vft[COLOR_string_search__String__split_with]))(var_path_env, var79) /* split_with on <var_path_env:String>*/;
((void (*)(val*, val*))(var76->class->vft[COLOR_abstract_collection__Sequence__append]))(var76, var78) /* append on <var76:Array[String]>*/;
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#ModelBuilder#init for (self: Object, Model, ToolContext) */
void VIRTUAL_abstract_compiler__ModelBuilder__init(val* self, val* p0, val* p1) {
abstract_compiler__ModelBuilder__init(self, p0, p1);
RET_LABEL:;
}
/* method abstract_compiler#ModelBuilder#write_and_make for (self: ModelBuilder, AbstractCompiler) */
void abstract_compiler__ModelBuilder__write_and_make(val* self, val* p0) {
val* var_compiler /* var compiler: AbstractCompiler */;
val* var /* : MModule */;
val* var_mainmodule /* var mainmodule: MModule */;
long var1 /* : Int */;
long var_time0 /* var time0: Int */;
val* var2 /* : ToolContext */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
long var7 /* : Int */;
val* var8 /* : ToolContext */;
val* var9 /* : OptionString */;
val* var10 /* : nullable Object */;
val* var_compile_dir /* var compile_dir: nullable String */;
val* var11 /* : null */;
short int var12 /* : Bool */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : String */;
val* var18 /* : ToolContext */;
val* var19 /* : OptionBool */;
val* var20 /* : nullable Object */;
short int var21 /* : Bool */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : String */;
val* var_orig_dir /* var orig_dir: String */;
val* var27 /* : ToolContext */;
val* var28 /* : OptionString */;
val* var29 /* : nullable Object */;
val* var_outname /* var outname: nullable String */;
val* var30 /* : null */;
short int var31 /* : Bool */;
val* var32 /* : Array[Object] */;
long var33 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : String */;
val* var39 /* : String */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : String */;
val* var45 /* : String */;
val* var46 /* : String */;
val* var47 /* : String */;
val* var_outpath /* var outpath: String */;
val* var48 /* : CodeWriter */;
val* var49 /* : CodeFile */;
val* var50 /* : String */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : String */;
val* var56 /* : String */;
val* var_hfilename /* var hfilename: String */;
val* var57 /* : Array[Object] */;
long var58 /* : Int */;
val* var_59 /* var : Array[Object] */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
long var63 /* : Int */;
val* var64 /* : String */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
long var68 /* : Int */;
val* var69 /* : String */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
long var73 /* : Int */;
val* var74 /* : String */;
val* var75 /* : String */;
val* var_hfilepath /* var hfilepath: String */;
val* var76 /* : OFStream */;
val* var_h /* var h: OFStream */;
val* var77 /* : CodeWriter */;
val* var78 /* : List[String] */;
val* var79 /* : Iterator[nullable Object] */;
short int var80 /* : Bool */;
val* var81 /* : nullable Object */;
val* var_l /* var l: String */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
long var85 /* : Int */;
val* var86 /* : String */;
val* var87 /* : CodeWriter */;
val* var88 /* : List[String] */;
val* var89 /* : Iterator[nullable Object] */;
short int var90 /* : Bool */;
val* var91 /* : nullable Object */;
val* var_l92 /* var l: String */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
long var96 /* : Int */;
val* var97 /* : String */;
val* var99 /* : Array[String] */;
val* var_cfiles /* var cfiles: Array[String] */;
val* var100 /* : List[CodeFile] */;
val* var101 /* : Iterator[nullable Object] */;
short int var102 /* : Bool */;
val* var103 /* : nullable Object */;
val* var_f /* var f: CodeFile */;
long var104 /* : Int */;
long var_i /* var i: Int */;
val* var105 /* : null */;
val* var_hfile /* var hfile: nullable OFStream */;
long var106 /* : Int */;
long var_count /* var count: Int */;
val* var107 /* : Array[Object] */;
long var108 /* : Int */;
val* var_109 /* var : Array[Object] */;
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : NativeString */;
long var113 /* : Int */;
val* var114 /* : String */;
val* var115 /* : String */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : NativeString */;
long var119 /* : Int */;
val* var120 /* : String */;
val* var121 /* : String */;
val* var_cfilename /* var cfilename: String */;
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
static val* varonce135;
val* var136 /* : String */;
char* var137 /* : NativeString */;
long var138 /* : Int */;
val* var139 /* : String */;
val* var140 /* : String */;
val* var_cfilepath /* var cfilepath: String */;
val* var141 /* : OFStream */;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : NativeString */;
long var145 /* : Int */;
val* var146 /* : String */;
static val* varonce147;
val* var148 /* : String */;
char* var149 /* : NativeString */;
long var150 /* : Int */;
val* var151 /* : String */;
val* var152 /* : Array[Object] */;
long var153 /* : Int */;
val* var154 /* : NativeArray[Object] */;
val* var155 /* : String */;
val* var156 /* : HashSet[String] */;
val* var157 /* : Iterator[nullable Object] */;
short int var158 /* : Bool */;
val* var159 /* : nullable Object */;
val* var_key /* var key: String */;
val* var160 /* : HashMap[String, String] */;
short int var161 /* : Bool */;
short int var162 /* : Bool */;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : NativeString */;
long var166 /* : Int */;
val* var167 /* : String */;
val* var168 /* : Array[Object] */;
long var169 /* : Int */;
val* var170 /* : NativeArray[Object] */;
val* var171 /* : String */;
val* var172 /* : HashMap[String, String] */;
val* var173 /* : nullable Object */;
static val* varonce174;
val* var175 /* : String */;
char* var176 /* : NativeString */;
long var177 /* : Int */;
val* var178 /* : String */;
val* var180 /* : null */;
val* var_file /* var file: nullable OFStream */;
val* var181 /* : Array[CodeWriter] */;
val* var182 /* : Iterator[nullable Object] */;
short int var183 /* : Bool */;
val* var184 /* : nullable Object */;
val* var_vis /* var vis: CodeWriter */;
val* var185 /* : CodeWriter */;
short int var186 /* : Bool */;
val* var188 /* : List[String] */;
long var189 /* : Int */;
val* var190 /* : List[String] */;
long var191 /* : Int */;
long var192 /* : Int */;
long var194 /* : Int */;
long var_total_lines /* var total_lines: Int */;
long var195 /* : Int */;
short int var196 /* : Bool */;
short int var198 /* : Bool */;
long var199 /* : Int */;
long var201 /* : Int */;
short int var202 /* : Bool */;
val* var203 /* : null */;
short int var204 /* : Bool */;
short int var_205 /* var : Bool */;
long var206 /* : Int */;
short int var207 /* : Bool */;
short int var209 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var210 /* : Bool */;
long var211 /* : Int */;
long var212 /* : Int */;
long var214 /* : Int */;
val* var215 /* : null */;
short int var216 /* : Bool */;
val* var217 /* : Array[Object] */;
long var218 /* : Int */;
val* var_219 /* var : Array[Object] */;
static val* varonce220;
val* var221 /* : String */;
char* var222 /* : NativeString */;
long var223 /* : Int */;
val* var224 /* : String */;
val* var225 /* : String */;
static val* varonce226;
val* var227 /* : String */;
char* var228 /* : NativeString */;
long var229 /* : Int */;
val* var230 /* : String */;
val* var231 /* : nullable Object */;
static val* varonce232;
val* var233 /* : String */;
char* var234 /* : NativeString */;
long var235 /* : Int */;
val* var236 /* : String */;
val* var237 /* : String */;
val* var238 /* : Array[Object] */;
long var239 /* : Int */;
val* var_240 /* var : Array[Object] */;
static val* varonce241;
val* var242 /* : String */;
char* var243 /* : NativeString */;
long var244 /* : Int */;
val* var245 /* : String */;
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
val* var256 /* : String */;
val* var257 /* : ToolContext */;
static val* varonce258;
val* var259 /* : String */;
char* var260 /* : NativeString */;
long var261 /* : Int */;
val* var262 /* : String */;
val* var263 /* : Array[Object] */;
long var264 /* : Int */;
val* var265 /* : NativeArray[Object] */;
val* var266 /* : String */;
long var267 /* : Int */;
val* var268 /* : OFStream */;
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
val* var280 /* : Array[Object] */;
long var281 /* : Int */;
val* var282 /* : NativeArray[Object] */;
val* var283 /* : String */;
val* var284 /* : List[String] */;
val* var285 /* : Iterator[nullable Object] */;
short int var286 /* : Bool */;
val* var287 /* : nullable Object */;
val* var_l288 /* var l: String */;
static val* varonce289;
val* var290 /* : String */;
char* var291 /* : NativeString */;
long var292 /* : Int */;
val* var293 /* : String */;
val* var295 /* : List[String] */;
val* var296 /* : Iterator[nullable Object] */;
short int var297 /* : Bool */;
val* var298 /* : nullable Object */;
val* var_l299 /* var l: String */;
static val* varonce300;
val* var301 /* : String */;
char* var302 /* : NativeString */;
long var303 /* : Int */;
val* var304 /* : String */;
val* var306 /* : null */;
short int var307 /* : Bool */;
val* var309 /* : ToolContext */;
static val* varonce310;
val* var311 /* : String */;
char* var312 /* : NativeString */;
long var313 /* : Int */;
val* var314 /* : String */;
long var315 /* : Int */;
val* var316 /* : Array[Object] */;
long var317 /* : Int */;
val* var318 /* : NativeArray[Object] */;
val* var319 /* : Object */;
val* var320 /* : String */;
long var321 /* : Int */;
val* var322 /* : Array[Object] */;
long var323 /* : Int */;
val* var_324 /* var : Array[Object] */;
static val* varonce325;
val* var326 /* : String */;
char* var327 /* : NativeString */;
long var328 /* : Int */;
val* var329 /* : String */;
val* var330 /* : String */;
static val* varonce331;
val* var332 /* : String */;
char* var333 /* : NativeString */;
long var334 /* : Int */;
val* var335 /* : String */;
val* var336 /* : String */;
val* var_makename /* var makename: String */;
val* var337 /* : Array[Object] */;
long var338 /* : Int */;
val* var_339 /* var : Array[Object] */;
static val* varonce340;
val* var341 /* : String */;
char* var342 /* : NativeString */;
long var343 /* : Int */;
val* var344 /* : String */;
static val* varonce345;
val* var346 /* : String */;
char* var347 /* : NativeString */;
long var348 /* : Int */;
val* var349 /* : String */;
static val* varonce350;
val* var351 /* : String */;
char* var352 /* : NativeString */;
long var353 /* : Int */;
val* var354 /* : String */;
val* var355 /* : String */;
val* var_makepath /* var makepath: String */;
val* var356 /* : OFStream */;
val* var_makefile /* var makefile: OFStream */;
static val* varonce357;
val* var358 /* : String */;
char* var359 /* : NativeString */;
long var360 /* : Int */;
val* var361 /* : String */;
val* var_cc_includes /* var cc_includes: String */;
val* var362 /* : Array[String] */;
val* var363 /* : Iterator[nullable Object] */;
short int var364 /* : Bool */;
val* var365 /* : nullable Object */;
val* var_p /* var p: String */;
val* var366 /* : String */;
val* var367 /* : String */;
static val* varonce368;
val* var369 /* : String */;
char* var370 /* : NativeString */;
long var371 /* : Int */;
val* var372 /* : String */;
val* var373 /* : String */;
static val* varonce374;
val* var375 /* : String */;
char* var376 /* : NativeString */;
long var377 /* : Int */;
val* var378 /* : String */;
val* var379 /* : String */;
val* var380 /* : String */;
val* var382 /* : ToolContext */;
val* var383 /* : OptionBool */;
val* var384 /* : nullable Object */;
short int var385 /* : Bool */;
static val* varonce386;
val* var387 /* : String */;
char* var388 /* : NativeString */;
long var389 /* : Int */;
val* var390 /* : String */;
static val* varonce391;
val* var392 /* : String */;
char* var393 /* : NativeString */;
long var394 /* : Int */;
val* var395 /* : String */;
val* var396 /* : Array[Object] */;
long var397 /* : Int */;
val* var398 /* : NativeArray[Object] */;
val* var399 /* : String */;
static val* varonce400;
val* var401 /* : String */;
char* var402 /* : NativeString */;
long var403 /* : Int */;
val* var404 /* : String */;
static val* varonce405;
val* var406 /* : String */;
char* var407 /* : NativeString */;
long var408 /* : Int */;
val* var409 /* : String */;
val* var410 /* : Array[Object] */;
long var411 /* : Int */;
val* var412 /* : NativeArray[Object] */;
val* var413 /* : String */;
static val* varonce414;
val* var415 /* : String */;
char* var416 /* : NativeString */;
long var417 /* : Int */;
val* var418 /* : String */;
static val* varonce419;
val* var420 /* : String */;
char* var421 /* : NativeString */;
long var422 /* : Int */;
val* var423 /* : String */;
val* var424 /* : Array[Object] */;
long var425 /* : Int */;
val* var426 /* : NativeArray[Object] */;
val* var427 /* : String */;
val* var428 /* : Array[String] */;
val* var_ofiles /* var ofiles: Array[String] */;
val* var429 /* : Iterator[nullable Object] */;
short int var430 /* : Bool */;
val* var431 /* : nullable Object */;
val* var_f432 /* var f: String */;
static val* varonce433;
val* var434 /* : String */;
char* var435 /* : NativeString */;
long var436 /* : Int */;
val* var437 /* : String */;
val* var438 /* : String */;
static val* varonce439;
val* var440 /* : String */;
char* var441 /* : NativeString */;
long var442 /* : Int */;
val* var443 /* : String */;
val* var444 /* : String */;
val* var_o /* var o: String */;
static val* varonce445;
val* var446 /* : String */;
char* var447 /* : NativeString */;
long var448 /* : Int */;
val* var449 /* : String */;
static val* varonce450;
val* var451 /* : String */;
char* var452 /* : NativeString */;
long var453 /* : Int */;
val* var454 /* : String */;
static val* varonce455;
val* var456 /* : String */;
char* var457 /* : NativeString */;
long var458 /* : Int */;
val* var459 /* : String */;
static val* varonce460;
val* var461 /* : String */;
char* var462 /* : NativeString */;
long var463 /* : Int */;
val* var464 /* : String */;
val* var465 /* : Array[Object] */;
long var466 /* : Int */;
val* var467 /* : NativeArray[Object] */;
val* var468 /* : String */;
val* var470 /* : ExternCFile */;
val* var471 /* : Array[Object] */;
long var472 /* : Int */;
val* var_473 /* var : Array[Object] */;
static val* varonce474;
val* var475 /* : String */;
char* var476 /* : NativeString */;
long var477 /* : Int */;
val* var478 /* : String */;
val* var479 /* : Array[String] */;
val* var480 /* : nullable Object */;
static val* varonce481;
val* var482 /* : String */;
char* var483 /* : NativeString */;
long var484 /* : Int */;
val* var485 /* : String */;
val* var486 /* : String */;
static val* varonce487;
val* var488 /* : String */;
char* var489 /* : NativeString */;
long var490 /* : Int */;
val* var491 /* : String */;
val* var_gc_chooser /* var gc_chooser: ExternCFile */;
val* var492 /* : Array[ExternCFile] */;
val* var493 /* : Array[ExternCFile] */;
val* var494 /* : Iterator[nullable Object] */;
short int var495 /* : Bool */;
val* var496 /* : nullable Object */;
val* var_f497 /* var f: ExternCFile */;
val* var498 /* : String */;
static val* varonce499;
val* var500 /* : String */;
char* var501 /* : NativeString */;
long var502 /* : Int */;
val* var503 /* : String */;
val* var504 /* : String */;
val* var_basename /* var basename: String */;
val* var505 /* : Array[Object] */;
long var506 /* : Int */;
val* var_507 /* var : Array[Object] */;
static val* varonce508;
val* var509 /* : String */;
char* var510 /* : NativeString */;
long var511 /* : Int */;
val* var512 /* : String */;
static val* varonce513;
val* var514 /* : String */;
char* var515 /* : NativeString */;
long var516 /* : Int */;
val* var517 /* : String */;
val* var518 /* : String */;
val* var_o519 /* var o: String */;
val* var520 /* : String */;
val* var521 /* : String */;
val* var522 /* : String */;
val* var_ff /* var ff: String */;
static val* varonce523;
val* var524 /* : String */;
char* var525 /* : NativeString */;
long var526 /* : Int */;
val* var527 /* : String */;
static val* varonce528;
val* var529 /* : String */;
char* var530 /* : NativeString */;
long var531 /* : Int */;
val* var532 /* : String */;
val* var533 /* : String */;
static val* varonce534;
val* var535 /* : String */;
char* var536 /* : NativeString */;
long var537 /* : Int */;
val* var538 /* : String */;
static val* varonce539;
val* var540 /* : String */;
char* var541 /* : NativeString */;
long var542 /* : Int */;
val* var543 /* : String */;
static val* varonce544;
val* var545 /* : String */;
char* var546 /* : NativeString */;
long var547 /* : Int */;
val* var548 /* : String */;
val* var549 /* : Array[Object] */;
long var550 /* : Int */;
val* var551 /* : NativeArray[Object] */;
val* var552 /* : String */;
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
val* var564 /* : String */;
static val* varonce565;
val* var566 /* : String */;
char* var567 /* : NativeString */;
long var568 /* : Int */;
val* var569 /* : String */;
static val* varonce570;
val* var571 /* : String */;
char* var572 /* : NativeString */;
long var573 /* : Int */;
val* var574 /* : String */;
static val* varonce575;
val* var576 /* : String */;
char* var577 /* : NativeString */;
long var578 /* : Int */;
val* var579 /* : String */;
val* var580 /* : String */;
static val* varonce581;
val* var582 /* : String */;
char* var583 /* : NativeString */;
long var584 /* : Int */;
val* var585 /* : String */;
val* var586 /* : Array[Object] */;
long var587 /* : Int */;
val* var588 /* : NativeArray[Object] */;
val* var589 /* : String */;
static val* varonce590;
val* var591 /* : String */;
char* var592 /* : NativeString */;
long var593 /* : Int */;
val* var594 /* : String */;
static val* varonce595;
val* var596 /* : String */;
char* var597 /* : NativeString */;
long var598 /* : Int */;
val* var599 /* : String */;
val* var600 /* : String */;
static val* varonce601;
val* var602 /* : String */;
char* var603 /* : NativeString */;
long var604 /* : Int */;
val* var605 /* : String */;
val* var606 /* : Array[Object] */;
long var607 /* : Int */;
val* var608 /* : NativeArray[Object] */;
val* var609 /* : String */;
val* var610 /* : ToolContext */;
static val* varonce611;
val* var612 /* : String */;
char* var613 /* : NativeString */;
long var614 /* : Int */;
val* var615 /* : String */;
val* var616 /* : Array[Object] */;
long var617 /* : Int */;
val* var618 /* : NativeArray[Object] */;
val* var619 /* : String */;
long var620 /* : Int */;
long var621 /* : Int */;
long var_time1 /* var time1: Int */;
val* var622 /* : ToolContext */;
static val* varonce623;
val* var624 /* : String */;
char* var625 /* : NativeString */;
long var626 /* : Int */;
val* var627 /* : String */;
long var628 /* : Int */;
long var630 /* : Int */;
static val* varonce631;
val* var632 /* : String */;
char* var633 /* : NativeString */;
long var634 /* : Int */;
val* var635 /* : String */;
val* var636 /* : Array[Object] */;
long var637 /* : Int */;
val* var638 /* : NativeArray[Object] */;
val* var639 /* : Object */;
val* var640 /* : String */;
long var641 /* : Int */;
val* var642 /* : ToolContext */;
val* var643 /* : OptionBool */;
val* var644 /* : nullable Object */;
short int var645 /* : Bool */;
val* var646 /* : ToolContext */;
static val* varonce647;
val* var648 /* : String */;
char* var649 /* : NativeString */;
long var650 /* : Int */;
val* var651 /* : String */;
long var652 /* : Int */;
val* var653 /* : ToolContext */;
val* var654 /* : OptionString */;
val* var655 /* : nullable Object */;
val* var_makeflags /* var makeflags: nullable String */;
val* var656 /* : null */;
short int var657 /* : Bool */;
static val* varonce658;
val* var659 /* : String */;
char* var660 /* : NativeString */;
long var661 /* : Int */;
val* var662 /* : String */;
val* var663 /* : ToolContext */;
static val* varonce664;
val* var665 /* : String */;
char* var666 /* : NativeString */;
long var667 /* : Int */;
val* var668 /* : String */;
static val* varonce669;
val* var670 /* : String */;
char* var671 /* : NativeString */;
long var672 /* : Int */;
val* var673 /* : String */;
static val* varonce674;
val* var675 /* : String */;
char* var676 /* : NativeString */;
long var677 /* : Int */;
val* var678 /* : String */;
val* var679 /* : Array[Object] */;
long var680 /* : Int */;
val* var681 /* : NativeArray[Object] */;
val* var682 /* : String */;
long var683 /* : Int */;
val* var684 /* : ToolContext */;
long var685 /* : Int */;
long var686 /* : Int */;
short int var687 /* : Bool */;
short int var689 /* : Bool */;
int cltype690;
int idtype691;
const char* var_class_name692;
short int var693 /* : Bool */;
val* var694 /* : Sys */;
static val* varonce695;
val* var696 /* : String */;
char* var697 /* : NativeString */;
long var698 /* : Int */;
val* var699 /* : String */;
static val* varonce700;
val* var701 /* : String */;
char* var702 /* : NativeString */;
long var703 /* : Int */;
val* var704 /* : String */;
static val* varonce705;
val* var706 /* : String */;
char* var707 /* : NativeString */;
long var708 /* : Int */;
val* var709 /* : String */;
static val* varonce710;
val* var711 /* : String */;
char* var712 /* : NativeString */;
long var713 /* : Int */;
val* var714 /* : String */;
val* var715 /* : Array[Object] */;
long var716 /* : Int */;
val* var717 /* : NativeArray[Object] */;
val* var718 /* : String */;
long var719 /* : Int */;
val* var720 /* : nullable Object */;
val* var_res /* var res: nullable Object */;
val* var721 /* : Sys */;
static val* varonce722;
val* var723 /* : String */;
char* var724 /* : NativeString */;
long var725 /* : Int */;
val* var726 /* : String */;
static val* varonce727;
val* var728 /* : String */;
char* var729 /* : NativeString */;
long var730 /* : Int */;
val* var731 /* : String */;
static val* varonce732;
val* var733 /* : String */;
char* var734 /* : NativeString */;
long var735 /* : Int */;
val* var736 /* : String */;
static val* varonce737;
val* var738 /* : String */;
char* var739 /* : NativeString */;
long var740 /* : Int */;
val* var741 /* : String */;
val* var742 /* : Array[Object] */;
long var743 /* : Int */;
val* var744 /* : NativeArray[Object] */;
val* var745 /* : String */;
long var746 /* : Int */;
val* var747 /* : nullable Object */;
long var748 /* : Int */;
short int var749 /* : Bool */;
short int var751 /* : Bool */;
long var752 /* : Int */;
short int var753 /* : Bool */;
val* var754 /* : ToolContext */;
val* var755 /* : null */;
static val* varonce756;
val* var757 /* : String */;
char* var758 /* : NativeString */;
long var759 /* : Int */;
val* var760 /* : String */;
static val* varonce761;
val* var762 /* : String */;
char* var763 /* : NativeString */;
long var764 /* : Int */;
val* var765 /* : String */;
val* var766 /* : Array[Object] */;
long var767 /* : Int */;
val* var768 /* : NativeArray[Object] */;
val* var769 /* : String */;
long var770 /* : Int */;
val* var771 /* : ToolContext */;
static val* varonce772;
val* var773 /* : String */;
char* var774 /* : NativeString */;
long var775 /* : Int */;
val* var776 /* : String */;
long var777 /* : Int */;
long var779 /* : Int */;
static val* varonce780;
val* var781 /* : String */;
char* var782 /* : NativeString */;
long var783 /* : Int */;
val* var784 /* : String */;
val* var785 /* : Array[Object] */;
long var786 /* : Int */;
val* var787 /* : NativeArray[Object] */;
val* var788 /* : Object */;
val* var789 /* : String */;
long var790 /* : Int */;
var_compiler = p0;
var = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var_compiler) /* mainmodule on <var_compiler:AbstractCompiler>*/;
var_mainmodule = var;
var1 = ((long (*)(val*))(self->class->vft[COLOR_time__Object__get_time]))(self) /* get_time on <self:ModelBuilder>*/;
var_time0 = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
if (varonce) {
var3 = varonce;
} else {
var4 = "*** WRITING C ***";
var5 = 17;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
var7 = 1;
((void (*)(val*, val*, long))(var2->class->vft[COLOR_toolcontext__ToolContext__info]))(var2, var3, var7) /* info on <var2:ToolContext>*/;
var8 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_abstract_compiler__ToolContext__opt_compile_dir]))(var8) /* opt_compile_dir on <var8:ToolContext>*/;
var10 = ((val* (*)(val*))(var9->class->vft[COLOR_opts__Option__value]))(var9) /* value on <var9:OptionString>*/;
var_compile_dir = var10;
var11 = NULL;
if (var_compile_dir == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (var12){
if (varonce13) {
var14 = varonce13;
} else {
var15 = ".nit_compile";
var16 = 12;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
var_compile_dir = var14;
} else {
}
((void (*)(val*))(var_compile_dir->class->vft[COLOR_file__String__mkdir]))(var_compile_dir) /* mkdir on <var_compile_dir:nullable String(String)>*/;
var18 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
var19 = ((val* (*)(val*))(var18->class->vft[COLOR_abstract_compiler__ToolContext__opt_stacktrace]))(var18) /* opt_stacktrace on <var18:ToolContext>*/;
var20 = ((val* (*)(val*))(var19->class->vft[COLOR_opts__Option__value]))(var19) /* value on <var19:OptionBool>*/;
var21 = ((struct instance_kernel__Bool*)var20)->value; /* autounbox from nullable Object to Bool */;
if (var21){
((void (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__build_c_to_nit_bindings]))(var_compiler) /* build_c_to_nit_bindings on <var_compiler:AbstractCompiler>*/;
} else {
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = "..";
var25 = 2;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
var_orig_dir = var23;
var27 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
var28 = ((val* (*)(val*))(var27->class->vft[COLOR_abstract_compiler__ToolContext__opt_output]))(var27) /* opt_output on <var27:ToolContext>*/;
var29 = ((val* (*)(val*))(var28->class->vft[COLOR_opts__Option__value]))(var28) /* value on <var28:OptionString>*/;
var_outname = var29;
var30 = NULL;
if (var_outname == NULL) {
var31 = 1; /* is null */
} else {
var31 = 0; /* arg is null but recv is not */
}
if (var31){
var32 = NEW_array__Array(&type_array__Arraykernel__Object);
var33 = 3;
((void (*)(val*, long))(var32->class->vft[COLOR_array__Array__with_capacity]))(var32, var33) /* with_capacity on <var32:Array[Object]>*/;
var_ = var32;
if (varonce34) {
var35 = varonce34;
} else {
var36 = "";
var37 = 0;
var38 = string__NativeString__to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var35) /* add on <var_:Array[Object]>*/;
var39 = ((val* (*)(val*))(var_mainmodule->class->vft[COLOR_mmodule__MModule__name]))(var_mainmodule) /* name on <var_mainmodule:MModule>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var39) /* add on <var_:Array[Object]>*/;
if (varonce40) {
var41 = varonce40;
} else {
var42 = "";
var43 = 0;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var41) /* add on <var_:Array[Object]>*/;
var45 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var_outname = var45;
} else {
}
var46 = ((val* (*)(val*, val*))(var_orig_dir->class->vft[COLOR_file__String__join_path]))(var_orig_dir, var_outname) /* join_path on <var_orig_dir:String>*/;
var47 = ((val* (*)(val*))(var46->class->vft[COLOR_file__String__simplify_path]))(var46) /* simplify_path on <var46:String>*/;
var_outpath = var47;
var48 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(var_compiler) /* header on <var_compiler:AbstractCompiler>*/;
var49 = ((val* (*)(val*))(var48->class->vft[COLOR_abstract_compiler__CodeWriter__file]))(var48) /* file on <var48:CodeWriter>*/;
var50 = ((val* (*)(val*))(var49->class->vft[COLOR_abstract_compiler__CodeFile__name]))(var49) /* name on <var49:CodeFile>*/;
if (varonce51) {
var52 = varonce51;
} else {
var53 = ".h";
var54 = 2;
var55 = string__NativeString__to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
var56 = ((val* (*)(val*, val*))(var50->class->vft[COLOR_string__String___43d]))(var50, var52) /* + on <var50:String>*/;
var_hfilename = var56;
var57 = NEW_array__Array(&type_array__Arraykernel__Object);
var58 = 5;
((void (*)(val*, long))(var57->class->vft[COLOR_array__Array__with_capacity]))(var57, var58) /* with_capacity on <var57:Array[Object]>*/;
var_59 = var57;
if (varonce60) {
var61 = varonce60;
} else {
var62 = "";
var63 = 0;
var64 = string__NativeString__to_s_with_length(var62, var63);
var61 = var64;
varonce60 = var61;
}
((void (*)(val*, val*))(var_59->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_59, var61) /* add on <var_59:Array[Object]>*/;
((void (*)(val*, val*))(var_59->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_59, var_compile_dir) /* add on <var_59:Array[Object]>*/;
if (varonce65) {
var66 = varonce65;
} else {
var67 = "/";
var68 = 1;
var69 = string__NativeString__to_s_with_length(var67, var68);
var66 = var69;
varonce65 = var66;
}
((void (*)(val*, val*))(var_59->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_59, var66) /* add on <var_59:Array[Object]>*/;
((void (*)(val*, val*))(var_59->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_59, var_hfilename) /* add on <var_59:Array[Object]>*/;
if (varonce70) {
var71 = varonce70;
} else {
var72 = "";
var73 = 0;
var74 = string__NativeString__to_s_with_length(var72, var73);
var71 = var74;
varonce70 = var71;
}
((void (*)(val*, val*))(var_59->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_59, var71) /* add on <var_59:Array[Object]>*/;
var75 = ((val* (*)(val*))(var_59->class->vft[COLOR_string__Object__to_s]))(var_59) /* to_s on <var_59:Array[Object]>*/;
var_hfilepath = var75;
var76 = NEW_file__OFStream(&type_file__OFStream);
((void (*)(val*, val*))(var76->class->vft[COLOR_file__OFStream__open]))(var76, var_hfilepath) /* open on <var76:OFStream>*/;
var_h = var76;
var77 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(var_compiler) /* header on <var_compiler:AbstractCompiler>*/;
var78 = ((val* (*)(val*))(var77->class->vft[COLOR_abstract_compiler__CodeWriter__decl_lines]))(var77) /* decl_lines on <var77:CodeWriter>*/;
var79 = ((val* (*)(val*))(var78->class->vft[COLOR_abstract_collection__Collection__iterator]))(var78) /* iterator on <var78:List[String]>*/;
for(;;) {
var80 = ((short int (*)(val*))(var79->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var79) /* is_ok on <var79:Iterator[nullable Object]>*/;
if(!var80) break;
var81 = ((val* (*)(val*))(var79->class->vft[COLOR_abstract_collection__Iterator__item]))(var79) /* item on <var79:Iterator[nullable Object]>*/;
var_l = var81;
((void (*)(val*, val*))(var_h->class->vft[COLOR_stream__OStream__write]))(var_h, var_l) /* write on <var_h:OFStream>*/;
if (varonce82) {
var83 = varonce82;
} else {
var84 = "\n";
var85 = 1;
var86 = string__NativeString__to_s_with_length(var84, var85);
var83 = var86;
varonce82 = var83;
}
((void (*)(val*, val*))(var_h->class->vft[COLOR_stream__OStream__write]))(var_h, var83) /* write on <var_h:OFStream>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var79->class->vft[COLOR_abstract_collection__Iterator__next]))(var79) /* next on <var79:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var87 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(var_compiler) /* header on <var_compiler:AbstractCompiler>*/;
var88 = ((val* (*)(val*))(var87->class->vft[COLOR_abstract_compiler__CodeWriter__lines]))(var87) /* lines on <var87:CodeWriter>*/;
var89 = ((val* (*)(val*))(var88->class->vft[COLOR_abstract_collection__Collection__iterator]))(var88) /* iterator on <var88:List[String]>*/;
for(;;) {
var90 = ((short int (*)(val*))(var89->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var89) /* is_ok on <var89:Iterator[nullable Object]>*/;
if(!var90) break;
var91 = ((val* (*)(val*))(var89->class->vft[COLOR_abstract_collection__Iterator__item]))(var89) /* item on <var89:Iterator[nullable Object]>*/;
var_l92 = var91;
((void (*)(val*, val*))(var_h->class->vft[COLOR_stream__OStream__write]))(var_h, var_l92) /* write on <var_h:OFStream>*/;
if (varonce93) {
var94 = varonce93;
} else {
var95 = "\n";
var96 = 1;
var97 = string__NativeString__to_s_with_length(var95, var96);
var94 = var97;
varonce93 = var94;
}
((void (*)(val*, val*))(var_h->class->vft[COLOR_stream__OStream__write]))(var_h, var94) /* write on <var_h:OFStream>*/;
CONTINUE_label98: (void)0;
((void (*)(val*))(var89->class->vft[COLOR_abstract_collection__Iterator__next]))(var89) /* next on <var89:Iterator[nullable Object]>*/;
}
BREAK_label98: (void)0;
((void (*)(val*))(var_h->class->vft[COLOR_stream__IOS__close]))(var_h) /* close on <var_h:OFStream>*/;
var99 = NEW_array__Array(&type_array__Arraystring__String);
((void (*)(val*))(var99->class->vft[COLOR_array__Array__init]))(var99) /* init on <var99:Array[String]>*/;
var_cfiles = var99;
var100 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__files]))(var_compiler) /* files on <var_compiler:AbstractCompiler>*/;
var101 = ((val* (*)(val*))(var100->class->vft[COLOR_abstract_collection__Collection__iterator]))(var100) /* iterator on <var100:List[CodeFile]>*/;
for(;;) {
var102 = ((short int (*)(val*))(var101->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var101) /* is_ok on <var101:Iterator[nullable Object]>*/;
if(!var102) break;
var103 = ((val* (*)(val*))(var101->class->vft[COLOR_abstract_collection__Iterator__item]))(var101) /* item on <var101:Iterator[nullable Object]>*/;
var_f = var103;
var104 = 0;
var_i = var104;
var105 = NULL;
var_hfile = var105;
var106 = 0;
var_count = var106;
var107 = NEW_array__Array(&type_array__Arraykernel__Object);
var108 = 3;
((void (*)(val*, long))(var107->class->vft[COLOR_array__Array__with_capacity]))(var107, var108) /* with_capacity on <var107:Array[Object]>*/;
var_109 = var107;
if (varonce110) {
var111 = varonce110;
} else {
var112 = "";
var113 = 0;
var114 = string__NativeString__to_s_with_length(var112, var113);
var111 = var114;
varonce110 = var111;
}
((void (*)(val*, val*))(var_109->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_109, var111) /* add on <var_109:Array[Object]>*/;
var115 = ((val* (*)(val*))(var_f->class->vft[COLOR_abstract_compiler__CodeFile__name]))(var_f) /* name on <var_f:CodeFile>*/;
((void (*)(val*, val*))(var_109->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_109, var115) /* add on <var_109:Array[Object]>*/;
if (varonce116) {
var117 = varonce116;
} else {
var118 = ".0.h";
var119 = 4;
var120 = string__NativeString__to_s_with_length(var118, var119);
var117 = var120;
varonce116 = var117;
}
((void (*)(val*, val*))(var_109->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_109, var117) /* add on <var_109:Array[Object]>*/;
var121 = ((val* (*)(val*))(var_109->class->vft[COLOR_string__Object__to_s]))(var_109) /* to_s on <var_109:Array[Object]>*/;
var_cfilename = var121;
var122 = NEW_array__Array(&type_array__Arraykernel__Object);
var123 = 5;
((void (*)(val*, long))(var122->class->vft[COLOR_array__Array__with_capacity]))(var122, var123) /* with_capacity on <var122:Array[Object]>*/;
var_124 = var122;
if (varonce125) {
var126 = varonce125;
} else {
var127 = "";
var128 = 0;
var129 = string__NativeString__to_s_with_length(var127, var128);
var126 = var129;
varonce125 = var126;
}
((void (*)(val*, val*))(var_124->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_124, var126) /* add on <var_124:Array[Object]>*/;
((void (*)(val*, val*))(var_124->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_124, var_compile_dir) /* add on <var_124:Array[Object]>*/;
if (varonce130) {
var131 = varonce130;
} else {
var132 = "/";
var133 = 1;
var134 = string__NativeString__to_s_with_length(var132, var133);
var131 = var134;
varonce130 = var131;
}
((void (*)(val*, val*))(var_124->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_124, var131) /* add on <var_124:Array[Object]>*/;
((void (*)(val*, val*))(var_124->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_124, var_cfilename) /* add on <var_124:Array[Object]>*/;
if (varonce135) {
var136 = varonce135;
} else {
var137 = "";
var138 = 0;
var139 = string__NativeString__to_s_with_length(var137, var138);
var136 = var139;
varonce135 = var136;
}
((void (*)(val*, val*))(var_124->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_124, var136) /* add on <var_124:Array[Object]>*/;
var140 = ((val* (*)(val*))(var_124->class->vft[COLOR_string__Object__to_s]))(var_124) /* to_s on <var_124:Array[Object]>*/;
var_cfilepath = var140;
var141 = NEW_file__OFStream(&type_file__OFStream);
((void (*)(val*, val*))(var141->class->vft[COLOR_file__OFStream__open]))(var141, var_cfilepath) /* open on <var141:OFStream>*/;
var_hfile = var141;
if (varonce142) {
var143 = varonce142;
} else {
var144 = "#include \"";
var145 = 10;
var146 = string__NativeString__to_s_with_length(var144, var145);
var143 = var146;
varonce142 = var143;
}
if (varonce147) {
var148 = varonce147;
} else {
var149 = "\"\n";
var150 = 2;
var151 = string__NativeString__to_s_with_length(var149, var150);
var148 = var151;
varonce147 = var148;
}
var152 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var152 = array_instance Array[Object] */
var153 = 3;
var154 = NEW_array__NativeArray(var153, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var154)->values[0] = (val*) var143;
((struct instance_array__NativeArray*)var154)->values[1] = (val*) var_hfilename;
((struct instance_array__NativeArray*)var154)->values[2] = (val*) var148;
((void (*)(val*, val*, long))(var152->class->vft[COLOR_array__Array__with_native]))(var152, var154, var153) /* with_native on <var152:Array[Object]>*/;
}
var155 = ((val* (*)(val*))(var152->class->vft[COLOR_string__Object__to_s]))(var152) /* to_s on <var152:Array[Object]>*/;
((void (*)(val*, val*))(var_hfile->class->vft[COLOR_stream__OStream__write]))(var_hfile, var155) /* write on <var_hfile:nullable OFStream(OFStream)>*/;
var156 = ((val* (*)(val*))(var_f->class->vft[COLOR_abstract_compiler__CodeFile__required_declarations]))(var_f) /* required_declarations on <var_f:CodeFile>*/;
var157 = ((val* (*)(val*))(var156->class->vft[COLOR_abstract_collection__Collection__iterator]))(var156) /* iterator on <var156:HashSet[String]>*/;
for(;;) {
var158 = ((short int (*)(val*))(var157->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var157) /* is_ok on <var157:Iterator[nullable Object]>*/;
if(!var158) break;
var159 = ((val* (*)(val*))(var157->class->vft[COLOR_abstract_collection__Iterator__item]))(var157) /* item on <var157:Iterator[nullable Object]>*/;
var_key = var159;
var160 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__provided_declarations]))(var_compiler) /* provided_declarations on <var_compiler:AbstractCompiler>*/;
var161 = ((short int (*)(val*, val*))(var160->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var160, var_key) /* has_key on <var160:HashMap[String, String]>*/;
var162 = !var161;
if (var162){
if (varonce163) {
var164 = varonce163;
} else {
var165 = "No provided declaration for ";
var166 = 28;
var167 = string__NativeString__to_s_with_length(var165, var166);
var164 = var167;
varonce163 = var164;
}
var168 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var168 = array_instance Array[Object] */
var169 = 2;
var170 = NEW_array__NativeArray(var169, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var170)->values[0] = (val*) var164;
((struct instance_array__NativeArray*)var170)->values[1] = (val*) var_key;
((void (*)(val*, val*, long))(var168->class->vft[COLOR_array__Array__with_native]))(var168, var170, var169) /* with_native on <var168:Array[Object]>*/;
}
var171 = ((val* (*)(val*))(var168->class->vft[COLOR_string__Object__to_s]))(var168) /* to_s on <var168:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var171) /* print on <self:ModelBuilder>*/;
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 162);
show_backtrace(1);
} else {
}
var172 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__provided_declarations]))(var_compiler) /* provided_declarations on <var_compiler:AbstractCompiler>*/;
var173 = ((val* (*)(val*, val*))(var172->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var172, var_key) /* [] on <var172:HashMap[String, String]>*/;
((void (*)(val*, val*))(var_hfile->class->vft[COLOR_stream__OStream__write]))(var_hfile, var173) /* write on <var_hfile:nullable OFStream(OFStream)>*/;
if (varonce174) {
var175 = varonce174;
} else {
var176 = "\n";
var177 = 1;
var178 = string__NativeString__to_s_with_length(var176, var177);
var175 = var178;
varonce174 = var175;
}
((void (*)(val*, val*))(var_hfile->class->vft[COLOR_stream__OStream__write]))(var_hfile, var175) /* write on <var_hfile:nullable OFStream(OFStream)>*/;
CONTINUE_label179: (void)0;
((void (*)(val*))(var157->class->vft[COLOR_abstract_collection__Iterator__next]))(var157) /* next on <var157:Iterator[nullable Object]>*/;
}
BREAK_label179: (void)0;
((void (*)(val*))(var_hfile->class->vft[COLOR_stream__IOS__close]))(var_hfile) /* close on <var_hfile:nullable OFStream(OFStream)>*/;
var180 = NULL;
var_file = var180;
var181 = ((val* (*)(val*))(var_f->class->vft[COLOR_abstract_compiler__CodeFile__writers]))(var_f) /* writers on <var_f:CodeFile>*/;
var182 = ((val* (*)(val*))(var181->class->vft[COLOR_abstract_collection__Collection__iterator]))(var181) /* iterator on <var181:Array[CodeWriter]>*/;
for(;;) {
var183 = ((short int (*)(val*))(var182->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var182) /* is_ok on <var182:Iterator[nullable Object]>*/;
if(!var183) break;
var184 = ((val* (*)(val*))(var182->class->vft[COLOR_abstract_collection__Iterator__item]))(var182) /* item on <var182:Iterator[nullable Object]>*/;
var_vis = var184;
var185 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(var_compiler) /* header on <var_compiler:AbstractCompiler>*/;
var186 = ((short int (*)(val*, val*))(var_vis->class->vft[COLOR_kernel__Object___61d_61d]))(var_vis, var185) /* == on <var_vis:CodeWriter>*/;
if (var186){
goto CONTINUE_label187;
} else {
}
var188 = ((val* (*)(val*))(var_vis->class->vft[COLOR_abstract_compiler__CodeWriter__lines]))(var_vis) /* lines on <var_vis:CodeWriter>*/;
var189 = ((long (*)(val*))(var188->class->vft[COLOR_abstract_collection__Collection__length]))(var188) /* length on <var188:List[String]>*/;
var190 = ((val* (*)(val*))(var_vis->class->vft[COLOR_abstract_compiler__CodeWriter__decl_lines]))(var_vis) /* decl_lines on <var_vis:CodeWriter>*/;
var191 = ((long (*)(val*))(var190->class->vft[COLOR_abstract_collection__Collection__length]))(var190) /* length on <var190:List[String]>*/;
{ /* Inline kernel#Int#+ (var189,var191) */
var194 = var189 + var191;
var192 = var194;
goto RET_LABEL193;
RET_LABEL193:(void)0;
}
var_total_lines = var192;
var195 = 0;
{ /* Inline kernel#Int#== (var_total_lines,var195) */
var198 = var_total_lines == var195;
var196 = var198;
goto RET_LABEL197;
RET_LABEL197:(void)0;
}
if (var196){
goto CONTINUE_label187;
} else {
}
{ /* Inline kernel#Int#+ (var_count,var_total_lines) */
var201 = var_count + var_total_lines;
var199 = var201;
goto RET_LABEL200;
RET_LABEL200:(void)0;
}
var_count = var199;
var203 = NULL;
if (var_file == NULL) {
var204 = 1; /* is null */
} else {
var204 = 0; /* arg is null but recv is not */
}
var_205 = var204;
if (var204){
var202 = var_205;
} else {
var206 = 10000;
{ /* Inline kernel#Int#> (var_count,var206) */
/* Covariant cast for argument 0 (i) <var206:Int> isa OTHER */
/* <var206:Int> isa OTHER */
var209 = 1; /* easy <var206:Int> isa OTHER*/
if (!var209) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 263);
show_backtrace(1);
}
var210 = var_count > var206;
var207 = var210;
goto RET_LABEL208;
RET_LABEL208:(void)0;
}
var202 = var207;
}
if (var202){
var211 = 1;
{ /* Inline kernel#Int#+ (var_i,var211) */
var214 = var_i + var211;
var212 = var214;
goto RET_LABEL213;
RET_LABEL213:(void)0;
}
var_i = var212;
var215 = NULL;
if (var_file == NULL) {
var216 = 0; /* is null */
} else {
var216 = 1; /* arg is null and recv is not */
}
if (var216){
((void (*)(val*))(var_file->class->vft[COLOR_stream__IOS__close]))(var_file) /* close on <var_file:nullable OFStream(OFStream)>*/;
} else {
}
var217 = NEW_array__Array(&type_array__Arraykernel__Object);
var218 = 5;
((void (*)(val*, long))(var217->class->vft[COLOR_array__Array__with_capacity]))(var217, var218) /* with_capacity on <var217:Array[Object]>*/;
var_219 = var217;
if (varonce220) {
var221 = varonce220;
} else {
var222 = "";
var223 = 0;
var224 = string__NativeString__to_s_with_length(var222, var223);
var221 = var224;
varonce220 = var221;
}
((void (*)(val*, val*))(var_219->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_219, var221) /* add on <var_219:Array[Object]>*/;
var225 = ((val* (*)(val*))(var_f->class->vft[COLOR_abstract_compiler__CodeFile__name]))(var_f) /* name on <var_f:CodeFile>*/;
((void (*)(val*, val*))(var_219->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_219, var225) /* add on <var_219:Array[Object]>*/;
if (varonce226) {
var227 = varonce226;
} else {
var228 = ".";
var229 = 1;
var230 = string__NativeString__to_s_with_length(var228, var229);
var227 = var230;
varonce226 = var227;
}
((void (*)(val*, val*))(var_219->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_219, var227) /* add on <var_219:Array[Object]>*/;
var231 = BOX_kernel__Int(var_i); /* autobox from Int to nullable Object */
((void (*)(val*, val*))(var_219->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_219, var231) /* add on <var_219:Array[Object]>*/;
if (varonce232) {
var233 = varonce232;
} else {
var234 = ".c";
var235 = 2;
var236 = string__NativeString__to_s_with_length(var234, var235);
var233 = var236;
varonce232 = var233;
}
((void (*)(val*, val*))(var_219->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_219, var233) /* add on <var_219:Array[Object]>*/;
var237 = ((val* (*)(val*))(var_219->class->vft[COLOR_string__Object__to_s]))(var_219) /* to_s on <var_219:Array[Object]>*/;
var_cfilename = var237;
var238 = NEW_array__Array(&type_array__Arraykernel__Object);
var239 = 5;
((void (*)(val*, long))(var238->class->vft[COLOR_array__Array__with_capacity]))(var238, var239) /* with_capacity on <var238:Array[Object]>*/;
var_240 = var238;
if (varonce241) {
var242 = varonce241;
} else {
var243 = "";
var244 = 0;
var245 = string__NativeString__to_s_with_length(var243, var244);
var242 = var245;
varonce241 = var242;
}
((void (*)(val*, val*))(var_240->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_240, var242) /* add on <var_240:Array[Object]>*/;
((void (*)(val*, val*))(var_240->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_240, var_compile_dir) /* add on <var_240:Array[Object]>*/;
if (varonce246) {
var247 = varonce246;
} else {
var248 = "/";
var249 = 1;
var250 = string__NativeString__to_s_with_length(var248, var249);
var247 = var250;
varonce246 = var247;
}
((void (*)(val*, val*))(var_240->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_240, var247) /* add on <var_240:Array[Object]>*/;
((void (*)(val*, val*))(var_240->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_240, var_cfilename) /* add on <var_240:Array[Object]>*/;
if (varonce251) {
var252 = varonce251;
} else {
var253 = "";
var254 = 0;
var255 = string__NativeString__to_s_with_length(var253, var254);
var252 = var255;
varonce251 = var252;
}
((void (*)(val*, val*))(var_240->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_240, var252) /* add on <var_240:Array[Object]>*/;
var256 = ((val* (*)(val*))(var_240->class->vft[COLOR_string__Object__to_s]))(var_240) /* to_s on <var_240:Array[Object]>*/;
var_cfilepath = var256;
var257 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
if (varonce258) {
var259 = varonce258;
} else {
var260 = "new C source files to compile: ";
var261 = 31;
var262 = string__NativeString__to_s_with_length(var260, var261);
var259 = var262;
varonce258 = var259;
}
var263 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var263 = array_instance Array[Object] */
var264 = 2;
var265 = NEW_array__NativeArray(var264, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var265)->values[0] = (val*) var259;
((struct instance_array__NativeArray*)var265)->values[1] = (val*) var_cfilepath;
((void (*)(val*, val*, long))(var263->class->vft[COLOR_array__Array__with_native]))(var263, var265, var264) /* with_native on <var263:Array[Object]>*/;
}
var266 = ((val* (*)(val*))(var263->class->vft[COLOR_string__Object__to_s]))(var263) /* to_s on <var263:Array[Object]>*/;
var267 = 3;
((void (*)(val*, val*, long))(var257->class->vft[COLOR_toolcontext__ToolContext__info]))(var257, var266, var267) /* info on <var257:ToolContext>*/;
((void (*)(val*, val*))(var_cfiles->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_cfiles, var_cfilename) /* add on <var_cfiles:Array[String]>*/;
var268 = NEW_file__OFStream(&type_file__OFStream);
((void (*)(val*, val*))(var268->class->vft[COLOR_file__OFStream__open]))(var268, var_cfilepath) /* open on <var268:OFStream>*/;
var_file = var268;
if (varonce269) {
var270 = varonce269;
} else {
var271 = "#include \"";
var272 = 10;
var273 = string__NativeString__to_s_with_length(var271, var272);
var270 = var273;
varonce269 = var270;
}
var274 = ((val* (*)(val*))(var_f->class->vft[COLOR_abstract_compiler__CodeFile__name]))(var_f) /* name on <var_f:CodeFile>*/;
if (varonce275) {
var276 = varonce275;
} else {
var277 = ".0.h\"\n";
var278 = 6;
var279 = string__NativeString__to_s_with_length(var277, var278);
var276 = var279;
varonce275 = var276;
}
var280 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var280 = array_instance Array[Object] */
var281 = 3;
var282 = NEW_array__NativeArray(var281, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var282)->values[0] = (val*) var270;
((struct instance_array__NativeArray*)var282)->values[1] = (val*) var274;
((struct instance_array__NativeArray*)var282)->values[2] = (val*) var276;
((void (*)(val*, val*, long))(var280->class->vft[COLOR_array__Array__with_native]))(var280, var282, var281) /* with_native on <var280:Array[Object]>*/;
}
var283 = ((val* (*)(val*))(var280->class->vft[COLOR_string__Object__to_s]))(var280) /* to_s on <var280:Array[Object]>*/;
((void (*)(val*, val*))(var_file->class->vft[COLOR_stream__OStream__write]))(var_file, var283) /* write on <var_file:nullable OFStream(OFStream)>*/;
var_count = var_total_lines;
} else {
}
var284 = ((val* (*)(val*))(var_vis->class->vft[COLOR_abstract_compiler__CodeWriter__decl_lines]))(var_vis) /* decl_lines on <var_vis:CodeWriter>*/;
var285 = ((val* (*)(val*))(var284->class->vft[COLOR_abstract_collection__Collection__iterator]))(var284) /* iterator on <var284:List[String]>*/;
for(;;) {
var286 = ((short int (*)(val*))(var285->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var285) /* is_ok on <var285:Iterator[nullable Object]>*/;
if(!var286) break;
var287 = ((val* (*)(val*))(var285->class->vft[COLOR_abstract_collection__Iterator__item]))(var285) /* item on <var285:Iterator[nullable Object]>*/;
var_l288 = var287;
((void (*)(val*, val*))(var_file->class->vft[COLOR_stream__OStream__write]))(var_file, var_l288) /* write on <var_file:nullable OFStream(OFStream)>*/;
if (varonce289) {
var290 = varonce289;
} else {
var291 = "\n";
var292 = 1;
var293 = string__NativeString__to_s_with_length(var291, var292);
var290 = var293;
varonce289 = var290;
}
((void (*)(val*, val*))(var_file->class->vft[COLOR_stream__OStream__write]))(var_file, var290) /* write on <var_file:nullable OFStream(OFStream)>*/;
CONTINUE_label294: (void)0;
((void (*)(val*))(var285->class->vft[COLOR_abstract_collection__Iterator__next]))(var285) /* next on <var285:Iterator[nullable Object]>*/;
}
BREAK_label294: (void)0;
var295 = ((val* (*)(val*))(var_vis->class->vft[COLOR_abstract_compiler__CodeWriter__lines]))(var_vis) /* lines on <var_vis:CodeWriter>*/;
var296 = ((val* (*)(val*))(var295->class->vft[COLOR_abstract_collection__Collection__iterator]))(var295) /* iterator on <var295:List[String]>*/;
for(;;) {
var297 = ((short int (*)(val*))(var296->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var296) /* is_ok on <var296:Iterator[nullable Object]>*/;
if(!var297) break;
var298 = ((val* (*)(val*))(var296->class->vft[COLOR_abstract_collection__Iterator__item]))(var296) /* item on <var296:Iterator[nullable Object]>*/;
var_l299 = var298;
((void (*)(val*, val*))(var_file->class->vft[COLOR_stream__OStream__write]))(var_file, var_l299) /* write on <var_file:nullable OFStream(OFStream)>*/;
if (varonce300) {
var301 = varonce300;
} else {
var302 = "\n";
var303 = 1;
var304 = string__NativeString__to_s_with_length(var302, var303);
var301 = var304;
varonce300 = var301;
}
((void (*)(val*, val*))(var_file->class->vft[COLOR_stream__OStream__write]))(var_file, var301) /* write on <var_file:nullable OFStream(OFStream)>*/;
CONTINUE_label305: (void)0;
((void (*)(val*))(var296->class->vft[COLOR_abstract_collection__Iterator__next]))(var296) /* next on <var296:Iterator[nullable Object]>*/;
}
BREAK_label305: (void)0;
CONTINUE_label187: (void)0;
((void (*)(val*))(var182->class->vft[COLOR_abstract_collection__Iterator__next]))(var182) /* next on <var182:Iterator[nullable Object]>*/;
}
BREAK_label187: (void)0;
var306 = NULL;
if (var_file == NULL) {
var307 = 0; /* is null */
} else {
var307 = 1; /* arg is null and recv is not */
}
if (var307){
((void (*)(val*))(var_file->class->vft[COLOR_stream__IOS__close]))(var_file) /* close on <var_file:nullable OFStream(OFStream)>*/;
} else {
}
CONTINUE_label308: (void)0;
((void (*)(val*))(var101->class->vft[COLOR_abstract_collection__Iterator__next]))(var101) /* next on <var101:Iterator[nullable Object]>*/;
}
BREAK_label308: (void)0;
var309 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
if (varonce310) {
var311 = varonce310;
} else {
var312 = "Total C source files to compile: ";
var313 = 33;
var314 = string__NativeString__to_s_with_length(var312, var313);
var311 = var314;
varonce310 = var311;
}
var315 = ((long (*)(val*))(var_cfiles->class->vft[COLOR_abstract_collection__Collection__length]))(var_cfiles) /* length on <var_cfiles:Array[String]>*/;
var316 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var316 = array_instance Array[Object] */
var317 = 2;
var318 = NEW_array__NativeArray(var317, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var318)->values[0] = (val*) var311;
var319 = BOX_kernel__Int(var315); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var318)->values[1] = (val*) var319;
((void (*)(val*, val*, long))(var316->class->vft[COLOR_array__Array__with_native]))(var316, var318, var317) /* with_native on <var316:Array[Object]>*/;
}
var320 = ((val* (*)(val*))(var316->class->vft[COLOR_string__Object__to_s]))(var316) /* to_s on <var316:Array[Object]>*/;
var321 = 2;
((void (*)(val*, val*, long))(var309->class->vft[COLOR_toolcontext__ToolContext__info]))(var309, var320, var321) /* info on <var309:ToolContext>*/;
var322 = NEW_array__Array(&type_array__Arraykernel__Object);
var323 = 3;
((void (*)(val*, long))(var322->class->vft[COLOR_array__Array__with_capacity]))(var322, var323) /* with_capacity on <var322:Array[Object]>*/;
var_324 = var322;
if (varonce325) {
var326 = varonce325;
} else {
var327 = "";
var328 = 0;
var329 = string__NativeString__to_s_with_length(var327, var328);
var326 = var329;
varonce325 = var326;
}
((void (*)(val*, val*))(var_324->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_324, var326) /* add on <var_324:Array[Object]>*/;
var330 = ((val* (*)(val*))(var_mainmodule->class->vft[COLOR_mmodule__MModule__name]))(var_mainmodule) /* name on <var_mainmodule:MModule>*/;
((void (*)(val*, val*))(var_324->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_324, var330) /* add on <var_324:Array[Object]>*/;
if (varonce331) {
var332 = varonce331;
} else {
var333 = ".mk";
var334 = 3;
var335 = string__NativeString__to_s_with_length(var333, var334);
var332 = var335;
varonce331 = var332;
}
((void (*)(val*, val*))(var_324->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_324, var332) /* add on <var_324:Array[Object]>*/;
var336 = ((val* (*)(val*))(var_324->class->vft[COLOR_string__Object__to_s]))(var_324) /* to_s on <var_324:Array[Object]>*/;
var_makename = var336;
var337 = NEW_array__Array(&type_array__Arraykernel__Object);
var338 = 5;
((void (*)(val*, long))(var337->class->vft[COLOR_array__Array__with_capacity]))(var337, var338) /* with_capacity on <var337:Array[Object]>*/;
var_339 = var337;
if (varonce340) {
var341 = varonce340;
} else {
var342 = "";
var343 = 0;
var344 = string__NativeString__to_s_with_length(var342, var343);
var341 = var344;
varonce340 = var341;
}
((void (*)(val*, val*))(var_339->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_339, var341) /* add on <var_339:Array[Object]>*/;
((void (*)(val*, val*))(var_339->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_339, var_compile_dir) /* add on <var_339:Array[Object]>*/;
if (varonce345) {
var346 = varonce345;
} else {
var347 = "/";
var348 = 1;
var349 = string__NativeString__to_s_with_length(var347, var348);
var346 = var349;
varonce345 = var346;
}
((void (*)(val*, val*))(var_339->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_339, var346) /* add on <var_339:Array[Object]>*/;
((void (*)(val*, val*))(var_339->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_339, var_makename) /* add on <var_339:Array[Object]>*/;
if (varonce350) {
var351 = varonce350;
} else {
var352 = "";
var353 = 0;
var354 = string__NativeString__to_s_with_length(var352, var353);
var351 = var354;
varonce350 = var351;
}
((void (*)(val*, val*))(var_339->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_339, var351) /* add on <var_339:Array[Object]>*/;
var355 = ((val* (*)(val*))(var_339->class->vft[COLOR_string__Object__to_s]))(var_339) /* to_s on <var_339:Array[Object]>*/;
var_makepath = var355;
var356 = NEW_file__OFStream(&type_file__OFStream);
((void (*)(val*, val*))(var356->class->vft[COLOR_file__OFStream__open]))(var356, var_makepath) /* open on <var356:OFStream>*/;
var_makefile = var356;
if (varonce357) {
var358 = varonce357;
} else {
var359 = "";
var360 = 0;
var361 = string__NativeString__to_s_with_length(var359, var360);
var358 = var361;
varonce357 = var358;
}
var_cc_includes = var358;
var362 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__ModelBuilder__cc_paths]))(self) /* cc_paths on <self:ModelBuilder>*/;
var363 = ((val* (*)(val*))(var362->class->vft[COLOR_abstract_collection__Collection__iterator]))(var362) /* iterator on <var362:Array[String]>*/;
for(;;) {
var364 = ((short int (*)(val*))(var363->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var363) /* is_ok on <var363:Iterator[nullable Object]>*/;
if(!var364) break;
var365 = ((val* (*)(val*))(var363->class->vft[COLOR_abstract_collection__Iterator__item]))(var363) /* item on <var363:Iterator[nullable Object]>*/;
var_p = var365;
var366 = ((val* (*)(val*, val*))(var_orig_dir->class->vft[COLOR_file__String__join_path]))(var_orig_dir, var_p) /* join_path on <var_orig_dir:String>*/;
var367 = ((val* (*)(val*))(var366->class->vft[COLOR_file__String__simplify_path]))(var366) /* simplify_path on <var366:String>*/;
var_p = var367;
if (varonce368) {
var369 = varonce368;
} else {
var370 = " -I \"";
var371 = 5;
var372 = string__NativeString__to_s_with_length(var370, var371);
var369 = var372;
varonce368 = var369;
}
var373 = ((val* (*)(val*, val*))(var369->class->vft[COLOR_string__String___43d]))(var369, var_p) /* + on <var369:String>*/;
if (varonce374) {
var375 = varonce374;
} else {
var376 = "\"";
var377 = 1;
var378 = string__NativeString__to_s_with_length(var376, var377);
var375 = var378;
varonce374 = var375;
}
var379 = ((val* (*)(val*, val*))(var373->class->vft[COLOR_string__String___43d]))(var373, var375) /* + on <var373:String>*/;
var380 = ((val* (*)(val*, val*))(var_cc_includes->class->vft[COLOR_string__String___43d]))(var_cc_includes, var379) /* + on <var_cc_includes:String>*/;
var_cc_includes = var380;
CONTINUE_label381: (void)0;
((void (*)(val*))(var363->class->vft[COLOR_abstract_collection__Iterator__next]))(var363) /* next on <var363:Iterator[nullable Object]>*/;
}
BREAK_label381: (void)0;
var382 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
var383 = ((val* (*)(val*))(var382->class->vft[COLOR_abstract_compiler__ToolContext__opt_no_stacktrace]))(var382) /* opt_no_stacktrace on <var382:ToolContext>*/;
var384 = ((val* (*)(val*))(var383->class->vft[COLOR_opts__Option__value]))(var383) /* value on <var383:OptionBool>*/;
var385 = ((struct instance_kernel__Bool*)var384)->value; /* autounbox from nullable Object to Bool */;
if (var385){
if (varonce386) {
var387 = varonce386;
} else {
var388 = "CC = ccache cc\nCFLAGS = -g -O2\nCINCL = ";
var389 = 39;
var390 = string__NativeString__to_s_with_length(var388, var389);
var387 = var390;
varonce386 = var387;
}
if (varonce391) {
var392 = varonce391;
} else {
var393 = "\nLDFLAGS ?= \nLDLIBS  ?= -lm -lgc\n\n";
var394 = 34;
var395 = string__NativeString__to_s_with_length(var393, var394);
var392 = var395;
varonce391 = var392;
}
var396 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var396 = array_instance Array[Object] */
var397 = 3;
var398 = NEW_array__NativeArray(var397, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var398)->values[0] = (val*) var387;
((struct instance_array__NativeArray*)var398)->values[1] = (val*) var_cc_includes;
((struct instance_array__NativeArray*)var398)->values[2] = (val*) var392;
((void (*)(val*, val*, long))(var396->class->vft[COLOR_array__Array__with_native]))(var396, var398, var397) /* with_native on <var396:Array[Object]>*/;
}
var399 = ((val* (*)(val*))(var396->class->vft[COLOR_string__Object__to_s]))(var396) /* to_s on <var396:Array[Object]>*/;
((void (*)(val*, val*))(var_makefile->class->vft[COLOR_stream__OStream__write]))(var_makefile, var399) /* write on <var_makefile:OFStream>*/;
} else {
if (varonce400) {
var401 = varonce400;
} else {
var402 = "CC = ccache cc\nCFLAGS = -g -O2\nCINCL = ";
var403 = 39;
var404 = string__NativeString__to_s_with_length(var402, var403);
var401 = var404;
varonce400 = var401;
}
if (varonce405) {
var406 = varonce405;
} else {
var407 = "\nLDFLAGS ?= \nLDLIBS  ?= -lunwind -lm -lgc\n\n";
var408 = 43;
var409 = string__NativeString__to_s_with_length(var407, var408);
var406 = var409;
varonce405 = var406;
}
var410 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var410 = array_instance Array[Object] */
var411 = 3;
var412 = NEW_array__NativeArray(var411, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var412)->values[0] = (val*) var401;
((struct instance_array__NativeArray*)var412)->values[1] = (val*) var_cc_includes;
((struct instance_array__NativeArray*)var412)->values[2] = (val*) var406;
((void (*)(val*, val*, long))(var410->class->vft[COLOR_array__Array__with_native]))(var410, var412, var411) /* with_native on <var410:Array[Object]>*/;
}
var413 = ((val* (*)(val*))(var410->class->vft[COLOR_string__Object__to_s]))(var410) /* to_s on <var410:Array[Object]>*/;
((void (*)(val*, val*))(var_makefile->class->vft[COLOR_stream__OStream__write]))(var_makefile, var413) /* write on <var_makefile:OFStream>*/;
}
if (varonce414) {
var415 = varonce414;
} else {
var416 = "all: ";
var417 = 5;
var418 = string__NativeString__to_s_with_length(var416, var417);
var415 = var418;
varonce414 = var415;
}
if (varonce419) {
var420 = varonce419;
} else {
var421 = "\n\n";
var422 = 2;
var423 = string__NativeString__to_s_with_length(var421, var422);
var420 = var423;
varonce419 = var420;
}
var424 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var424 = array_instance Array[Object] */
var425 = 3;
var426 = NEW_array__NativeArray(var425, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var426)->values[0] = (val*) var415;
((struct instance_array__NativeArray*)var426)->values[1] = (val*) var_outpath;
((struct instance_array__NativeArray*)var426)->values[2] = (val*) var420;
((void (*)(val*, val*, long))(var424->class->vft[COLOR_array__Array__with_native]))(var424, var426, var425) /* with_native on <var424:Array[Object]>*/;
}
var427 = ((val* (*)(val*))(var424->class->vft[COLOR_string__Object__to_s]))(var424) /* to_s on <var424:Array[Object]>*/;
((void (*)(val*, val*))(var_makefile->class->vft[COLOR_stream__OStream__write]))(var_makefile, var427) /* write on <var_makefile:OFStream>*/;
var428 = NEW_array__Array(&type_array__Arraystring__String);
((void (*)(val*))(var428->class->vft[COLOR_array__Array__init]))(var428) /* init on <var428:Array[String]>*/;
var_ofiles = var428;
var429 = ((val* (*)(val*))(var_cfiles->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_cfiles) /* iterator on <var_cfiles:Array[String]>*/;
for(;;) {
var430 = ((short int (*)(val*))(var429->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var429) /* is_ok on <var429:Iterator[nullable Object]>*/;
if(!var430) break;
var431 = ((val* (*)(val*))(var429->class->vft[COLOR_abstract_collection__Iterator__item]))(var429) /* item on <var429:Iterator[nullable Object]>*/;
var_f432 = var431;
if (varonce433) {
var434 = varonce433;
} else {
var435 = ".c";
var436 = 2;
var437 = string__NativeString__to_s_with_length(var435, var436);
var434 = var437;
varonce433 = var434;
}
var438 = ((val* (*)(val*, val*))(var_f432->class->vft[COLOR_file__String__strip_extension]))(var_f432, var434) /* strip_extension on <var_f432:String>*/;
if (varonce439) {
var440 = varonce439;
} else {
var441 = ".o";
var442 = 2;
var443 = string__NativeString__to_s_with_length(var441, var442);
var440 = var443;
varonce439 = var440;
}
var444 = ((val* (*)(val*, val*))(var438->class->vft[COLOR_string__String___43d]))(var438, var440) /* + on <var438:String>*/;
var_o = var444;
if (varonce445) {
var446 = varonce445;
} else {
var447 = ": ";
var448 = 2;
var449 = string__NativeString__to_s_with_length(var447, var448);
var446 = var449;
varonce445 = var446;
}
if (varonce450) {
var451 = varonce450;
} else {
var452 = "\n\11$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o ";
var453 = 45;
var454 = string__NativeString__to_s_with_length(var452, var453);
var451 = var454;
varonce450 = var451;
}
if (varonce455) {
var456 = varonce455;
} else {
var457 = " ";
var458 = 1;
var459 = string__NativeString__to_s_with_length(var457, var458);
var456 = var459;
varonce455 = var456;
}
if (varonce460) {
var461 = varonce460;
} else {
var462 = "\n\n";
var463 = 2;
var464 = string__NativeString__to_s_with_length(var462, var463);
var461 = var464;
varonce460 = var461;
}
var465 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var465 = array_instance Array[Object] */
var466 = 8;
var467 = NEW_array__NativeArray(var466, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var467)->values[0] = (val*) var_o;
((struct instance_array__NativeArray*)var467)->values[1] = (val*) var446;
((struct instance_array__NativeArray*)var467)->values[2] = (val*) var_f432;
((struct instance_array__NativeArray*)var467)->values[3] = (val*) var451;
((struct instance_array__NativeArray*)var467)->values[4] = (val*) var_o;
((struct instance_array__NativeArray*)var467)->values[5] = (val*) var456;
((struct instance_array__NativeArray*)var467)->values[6] = (val*) var_f432;
((struct instance_array__NativeArray*)var467)->values[7] = (val*) var461;
((void (*)(val*, val*, long))(var465->class->vft[COLOR_array__Array__with_native]))(var465, var467, var466) /* with_native on <var465:Array[Object]>*/;
}
var468 = ((val* (*)(val*))(var465->class->vft[COLOR_string__Object__to_s]))(var465) /* to_s on <var465:Array[Object]>*/;
((void (*)(val*, val*))(var_makefile->class->vft[COLOR_stream__OStream__write]))(var_makefile, var468) /* write on <var_makefile:OFStream>*/;
((void (*)(val*, val*))(var_ofiles->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_ofiles, var_o) /* add on <var_ofiles:Array[String]>*/;
CONTINUE_label469: (void)0;
((void (*)(val*))(var429->class->vft[COLOR_abstract_collection__Iterator__next]))(var429) /* next on <var429:Iterator[nullable Object]>*/;
}
BREAK_label469: (void)0;
var470 = NEW_abstract_compiler__ExternCFile(&type_abstract_compiler__ExternCFile);
var471 = NEW_array__Array(&type_array__Arraykernel__Object);
var472 = 3;
((void (*)(val*, long))(var471->class->vft[COLOR_array__Array__with_capacity]))(var471, var472) /* with_capacity on <var471:Array[Object]>*/;
var_473 = var471;
if (varonce474) {
var475 = varonce474;
} else {
var476 = "";
var477 = 0;
var478 = string__NativeString__to_s_with_length(var476, var477);
var475 = var478;
varonce474 = var475;
}
((void (*)(val*, val*))(var_473->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_473, var475) /* add on <var_473:Array[Object]>*/;
var479 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__ModelBuilder__cc_paths]))(self) /* cc_paths on <self:ModelBuilder>*/;
var480 = ((val* (*)(val*))(var479->class->vft[COLOR_abstract_collection__Collection__first]))(var479) /* first on <var479:Array[String]>*/;
((void (*)(val*, val*))(var_473->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_473, var480) /* add on <var_473:Array[Object]>*/;
if (varonce481) {
var482 = varonce481;
} else {
var483 = "/gc_chooser.c";
var484 = 13;
var485 = string__NativeString__to_s_with_length(var483, var484);
var482 = var485;
varonce481 = var482;
}
((void (*)(val*, val*))(var_473->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_473, var482) /* add on <var_473:Array[Object]>*/;
var486 = ((val* (*)(val*))(var_473->class->vft[COLOR_string__Object__to_s]))(var_473) /* to_s on <var_473:Array[Object]>*/;
if (varonce487) {
var488 = varonce487;
} else {
var489 = "-DWITH_LIBGC";
var490 = 12;
var491 = string__NativeString__to_s_with_length(var489, var490);
var488 = var491;
varonce487 = var488;
}
((void (*)(val*, val*, val*))(var470->class->vft[COLOR_abstract_compiler__ExternCFile__init]))(var470, var486, var488) /* init on <var470:ExternCFile>*/;
var_gc_chooser = var470;
var492 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__extern_bodies]))(var_compiler) /* extern_bodies on <var_compiler:AbstractCompiler>*/;
((void (*)(val*, val*))(var492->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var492, var_gc_chooser) /* add on <var492:Array[ExternCFile]>*/;
var493 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__extern_bodies]))(var_compiler) /* extern_bodies on <var_compiler:AbstractCompiler>*/;
var494 = ((val* (*)(val*))(var493->class->vft[COLOR_abstract_collection__Collection__iterator]))(var493) /* iterator on <var493:Array[ExternCFile]>*/;
for(;;) {
var495 = ((short int (*)(val*))(var494->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var494) /* is_ok on <var494:Iterator[nullable Object]>*/;
if(!var495) break;
var496 = ((val* (*)(val*))(var494->class->vft[COLOR_abstract_collection__Iterator__item]))(var494) /* item on <var494:Iterator[nullable Object]>*/;
var_f497 = var496;
var498 = ((val* (*)(val*))(var_f497->class->vft[COLOR_abstract_compiler__ExternCFile__filename]))(var_f497) /* filename on <var_f497:ExternCFile>*/;
if (varonce499) {
var500 = varonce499;
} else {
var501 = ".c";
var502 = 2;
var503 = string__NativeString__to_s_with_length(var501, var502);
var500 = var503;
varonce499 = var500;
}
var504 = ((val* (*)(val*, val*))(var498->class->vft[COLOR_file__String__basename]))(var498, var500) /* basename on <var498:String>*/;
var_basename = var504;
var505 = NEW_array__Array(&type_array__Arraykernel__Object);
var506 = 3;
((void (*)(val*, long))(var505->class->vft[COLOR_array__Array__with_capacity]))(var505, var506) /* with_capacity on <var505:Array[Object]>*/;
var_507 = var505;
if (varonce508) {
var509 = varonce508;
} else {
var510 = "";
var511 = 0;
var512 = string__NativeString__to_s_with_length(var510, var511);
var509 = var512;
varonce508 = var509;
}
((void (*)(val*, val*))(var_507->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_507, var509) /* add on <var_507:Array[Object]>*/;
((void (*)(val*, val*))(var_507->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_507, var_basename) /* add on <var_507:Array[Object]>*/;
if (varonce513) {
var514 = varonce513;
} else {
var515 = ".extern.o";
var516 = 9;
var517 = string__NativeString__to_s_with_length(var515, var516);
var514 = var517;
varonce513 = var514;
}
((void (*)(val*, val*))(var_507->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_507, var514) /* add on <var_507:Array[Object]>*/;
var518 = ((val* (*)(val*))(var_507->class->vft[COLOR_string__Object__to_s]))(var_507) /* to_s on <var_507:Array[Object]>*/;
var_o519 = var518;
var520 = ((val* (*)(val*))(var_f497->class->vft[COLOR_abstract_compiler__ExternCFile__filename]))(var_f497) /* filename on <var_f497:ExternCFile>*/;
var521 = ((val* (*)(val*, val*))(var_orig_dir->class->vft[COLOR_file__String__join_path]))(var_orig_dir, var520) /* join_path on <var_orig_dir:String>*/;
var522 = ((val* (*)(val*))(var521->class->vft[COLOR_file__String__simplify_path]))(var521) /* simplify_path on <var521:String>*/;
var_ff = var522;
if (varonce523) {
var524 = varonce523;
} else {
var525 = ": ";
var526 = 2;
var527 = string__NativeString__to_s_with_length(var525, var526);
var524 = var527;
varonce523 = var524;
}
if (varonce528) {
var529 = varonce528;
} else {
var530 = "\n\11$(CC) $(CFLAGS) -D NONITCNI ";
var531 = 30;
var532 = string__NativeString__to_s_with_length(var530, var531);
var529 = var532;
varonce528 = var529;
}
var533 = ((val* (*)(val*))(var_f497->class->vft[COLOR_abstract_compiler__ExternCFile__cflags]))(var_f497) /* cflags on <var_f497:ExternCFile>*/;
if (varonce534) {
var535 = varonce534;
} else {
var536 = " -c -o ";
var537 = 7;
var538 = string__NativeString__to_s_with_length(var536, var537);
var535 = var538;
varonce534 = var535;
}
if (varonce539) {
var540 = varonce539;
} else {
var541 = " ";
var542 = 1;
var543 = string__NativeString__to_s_with_length(var541, var542);
var540 = var543;
varonce539 = var540;
}
if (varonce544) {
var545 = varonce544;
} else {
var546 = "\n\n";
var547 = 2;
var548 = string__NativeString__to_s_with_length(var546, var547);
var545 = var548;
varonce544 = var545;
}
var549 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var549 = array_instance Array[Object] */
var550 = 10;
var551 = NEW_array__NativeArray(var550, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var551)->values[0] = (val*) var_o519;
((struct instance_array__NativeArray*)var551)->values[1] = (val*) var524;
((struct instance_array__NativeArray*)var551)->values[2] = (val*) var_ff;
((struct instance_array__NativeArray*)var551)->values[3] = (val*) var529;
((struct instance_array__NativeArray*)var551)->values[4] = (val*) var533;
((struct instance_array__NativeArray*)var551)->values[5] = (val*) var535;
((struct instance_array__NativeArray*)var551)->values[6] = (val*) var_o519;
((struct instance_array__NativeArray*)var551)->values[7] = (val*) var540;
((struct instance_array__NativeArray*)var551)->values[8] = (val*) var_ff;
((struct instance_array__NativeArray*)var551)->values[9] = (val*) var545;
((void (*)(val*, val*, long))(var549->class->vft[COLOR_array__Array__with_native]))(var549, var551, var550) /* with_native on <var549:Array[Object]>*/;
}
var552 = ((val* (*)(val*))(var549->class->vft[COLOR_string__Object__to_s]))(var549) /* to_s on <var549:Array[Object]>*/;
((void (*)(val*, val*))(var_makefile->class->vft[COLOR_stream__OStream__write]))(var_makefile, var552) /* write on <var_makefile:OFStream>*/;
((void (*)(val*, val*))(var_ofiles->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_ofiles, var_o519) /* add on <var_ofiles:Array[String]>*/;
CONTINUE_label553: (void)0;
((void (*)(val*))(var494->class->vft[COLOR_abstract_collection__Iterator__next]))(var494) /* next on <var494:Iterator[nullable Object]>*/;
}
BREAK_label553: (void)0;
if (varonce554) {
var555 = varonce554;
} else {
var556 = ": ";
var557 = 2;
var558 = string__NativeString__to_s_with_length(var556, var557);
var555 = var558;
varonce554 = var555;
}
if (varonce559) {
var560 = varonce559;
} else {
var561 = " ";
var562 = 1;
var563 = string__NativeString__to_s_with_length(var561, var562);
var560 = var563;
varonce559 = var560;
}
var564 = ((val* (*)(val*, val*))(var_ofiles->class->vft[COLOR_string__Collection__join]))(var_ofiles, var560) /* join on <var_ofiles:Array[String]>*/;
if (varonce565) {
var566 = varonce565;
} else {
var567 = "\n\11$(CC) $(LDFLAGS) -o ";
var568 = 22;
var569 = string__NativeString__to_s_with_length(var567, var568);
var566 = var569;
varonce565 = var566;
}
if (varonce570) {
var571 = varonce570;
} else {
var572 = " ";
var573 = 1;
var574 = string__NativeString__to_s_with_length(var572, var573);
var571 = var574;
varonce570 = var571;
}
if (varonce575) {
var576 = varonce575;
} else {
var577 = " ";
var578 = 1;
var579 = string__NativeString__to_s_with_length(var577, var578);
var576 = var579;
varonce575 = var576;
}
var580 = ((val* (*)(val*, val*))(var_ofiles->class->vft[COLOR_string__Collection__join]))(var_ofiles, var576) /* join on <var_ofiles:Array[String]>*/;
if (varonce581) {
var582 = varonce581;
} else {
var583 = " $(LDLIBS)\n\n";
var584 = 12;
var585 = string__NativeString__to_s_with_length(var583, var584);
var582 = var585;
varonce581 = var582;
}
var586 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var586 = array_instance Array[Object] */
var587 = 8;
var588 = NEW_array__NativeArray(var587, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var588)->values[0] = (val*) var_outpath;
((struct instance_array__NativeArray*)var588)->values[1] = (val*) var555;
((struct instance_array__NativeArray*)var588)->values[2] = (val*) var564;
((struct instance_array__NativeArray*)var588)->values[3] = (val*) var566;
((struct instance_array__NativeArray*)var588)->values[4] = (val*) var_outpath;
((struct instance_array__NativeArray*)var588)->values[5] = (val*) var571;
((struct instance_array__NativeArray*)var588)->values[6] = (val*) var580;
((struct instance_array__NativeArray*)var588)->values[7] = (val*) var582;
((void (*)(val*, val*, long))(var586->class->vft[COLOR_array__Array__with_native]))(var586, var588, var587) /* with_native on <var586:Array[Object]>*/;
}
var589 = ((val* (*)(val*))(var586->class->vft[COLOR_string__Object__to_s]))(var586) /* to_s on <var586:Array[Object]>*/;
((void (*)(val*, val*))(var_makefile->class->vft[COLOR_stream__OStream__write]))(var_makefile, var589) /* write on <var_makefile:OFStream>*/;
if (varonce590) {
var591 = varonce590;
} else {
var592 = "clean:\n\11rm ";
var593 = 11;
var594 = string__NativeString__to_s_with_length(var592, var593);
var591 = var594;
varonce590 = var591;
}
if (varonce595) {
var596 = varonce595;
} else {
var597 = " ";
var598 = 1;
var599 = string__NativeString__to_s_with_length(var597, var598);
var596 = var599;
varonce595 = var596;
}
var600 = ((val* (*)(val*, val*))(var_ofiles->class->vft[COLOR_string__Collection__join]))(var_ofiles, var596) /* join on <var_ofiles:Array[String]>*/;
if (varonce601) {
var602 = varonce601;
} else {
var603 = " 2>/dev/null\n\n";
var604 = 14;
var605 = string__NativeString__to_s_with_length(var603, var604);
var602 = var605;
varonce601 = var602;
}
var606 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var606 = array_instance Array[Object] */
var607 = 3;
var608 = NEW_array__NativeArray(var607, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var608)->values[0] = (val*) var591;
((struct instance_array__NativeArray*)var608)->values[1] = (val*) var600;
((struct instance_array__NativeArray*)var608)->values[2] = (val*) var602;
((void (*)(val*, val*, long))(var606->class->vft[COLOR_array__Array__with_native]))(var606, var608, var607) /* with_native on <var606:Array[Object]>*/;
}
var609 = ((val* (*)(val*))(var606->class->vft[COLOR_string__Object__to_s]))(var606) /* to_s on <var606:Array[Object]>*/;
((void (*)(val*, val*))(var_makefile->class->vft[COLOR_stream__OStream__write]))(var_makefile, var609) /* write on <var_makefile:OFStream>*/;
((void (*)(val*))(var_makefile->class->vft[COLOR_stream__IOS__close]))(var_makefile) /* close on <var_makefile:OFStream>*/;
var610 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
if (varonce611) {
var612 = varonce611;
} else {
var613 = "Generated makefile: ";
var614 = 20;
var615 = string__NativeString__to_s_with_length(var613, var614);
var612 = var615;
varonce611 = var612;
}
var616 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var616 = array_instance Array[Object] */
var617 = 2;
var618 = NEW_array__NativeArray(var617, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var618)->values[0] = (val*) var612;
((struct instance_array__NativeArray*)var618)->values[1] = (val*) var_makepath;
((void (*)(val*, val*, long))(var616->class->vft[COLOR_array__Array__with_native]))(var616, var618, var617) /* with_native on <var616:Array[Object]>*/;
}
var619 = ((val* (*)(val*))(var616->class->vft[COLOR_string__Object__to_s]))(var616) /* to_s on <var616:Array[Object]>*/;
var620 = 2;
((void (*)(val*, val*, long))(var610->class->vft[COLOR_toolcontext__ToolContext__info]))(var610, var619, var620) /* info on <var610:ToolContext>*/;
var621 = ((long (*)(val*))(self->class->vft[COLOR_time__Object__get_time]))(self) /* get_time on <self:ModelBuilder>*/;
var_time1 = var621;
var622 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
if (varonce623) {
var624 = varonce623;
} else {
var625 = "*** END WRITING C: ";
var626 = 19;
var627 = string__NativeString__to_s_with_length(var625, var626);
var624 = var627;
varonce623 = var624;
}
{ /* Inline kernel#Int#- (var_time1,var_time0) */
var630 = var_time1 - var_time0;
var628 = var630;
goto RET_LABEL629;
RET_LABEL629:(void)0;
}
if (varonce631) {
var632 = varonce631;
} else {
var633 = " ***";
var634 = 4;
var635 = string__NativeString__to_s_with_length(var633, var634);
var632 = var635;
varonce631 = var632;
}
var636 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var636 = array_instance Array[Object] */
var637 = 3;
var638 = NEW_array__NativeArray(var637, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var638)->values[0] = (val*) var624;
var639 = BOX_kernel__Int(var628); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var638)->values[1] = (val*) var639;
((struct instance_array__NativeArray*)var638)->values[2] = (val*) var632;
((void (*)(val*, val*, long))(var636->class->vft[COLOR_array__Array__with_native]))(var636, var638, var637) /* with_native on <var636:Array[Object]>*/;
}
var640 = ((val* (*)(val*))(var636->class->vft[COLOR_string__Object__to_s]))(var636) /* to_s on <var636:Array[Object]>*/;
var641 = 2;
((void (*)(val*, val*, long))(var622->class->vft[COLOR_toolcontext__ToolContext__info]))(var622, var640, var641) /* info on <var622:ToolContext>*/;
var642 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
var643 = ((val* (*)(val*))(var642->class->vft[COLOR_abstract_compiler__ToolContext__opt_no_cc]))(var642) /* opt_no_cc on <var642:ToolContext>*/;
var644 = ((val* (*)(val*))(var643->class->vft[COLOR_opts__Option__value]))(var643) /* value on <var643:OptionBool>*/;
var645 = ((struct instance_kernel__Bool*)var644)->value; /* autounbox from nullable Object to Bool */;
if (var645){
goto RET_LABEL;
} else {
}
var_time0 = var_time1;
var646 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
if (varonce647) {
var648 = varonce647;
} else {
var649 = "*** COMPILING C ***";
var650 = 19;
var651 = string__NativeString__to_s_with_length(var649, var650);
var648 = var651;
varonce647 = var648;
}
var652 = 1;
((void (*)(val*, val*, long))(var646->class->vft[COLOR_toolcontext__ToolContext__info]))(var646, var648, var652) /* info on <var646:ToolContext>*/;
var653 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
var654 = ((val* (*)(val*))(var653->class->vft[COLOR_abstract_compiler__ToolContext__opt_make_flags]))(var653) /* opt_make_flags on <var653:ToolContext>*/;
var655 = ((val* (*)(val*))(var654->class->vft[COLOR_opts__Option__value]))(var654) /* value on <var654:OptionString>*/;
var_makeflags = var655;
var656 = NULL;
if (var_makeflags == NULL) {
var657 = 1; /* is null */
} else {
var657 = 0; /* arg is null but recv is not */
}
if (var657){
if (varonce658) {
var659 = varonce658;
} else {
var660 = "";
var661 = 0;
var662 = string__NativeString__to_s_with_length(var660, var661);
var659 = var662;
varonce658 = var659;
}
var_makeflags = var659;
} else {
}
var663 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
if (varonce664) {
var665 = varonce664;
} else {
var666 = "make -B -C ";
var667 = 11;
var668 = string__NativeString__to_s_with_length(var666, var667);
var665 = var668;
varonce664 = var665;
}
if (varonce669) {
var670 = varonce669;
} else {
var671 = " -f ";
var672 = 4;
var673 = string__NativeString__to_s_with_length(var671, var672);
var670 = var673;
varonce669 = var670;
}
if (varonce674) {
var675 = varonce674;
} else {
var676 = " -j 4 ";
var677 = 6;
var678 = string__NativeString__to_s_with_length(var676, var677);
var675 = var678;
varonce674 = var675;
}
var679 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var679 = array_instance Array[Object] */
var680 = 6;
var681 = NEW_array__NativeArray(var680, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var681)->values[0] = (val*) var665;
((struct instance_array__NativeArray*)var681)->values[1] = (val*) var_compile_dir;
((struct instance_array__NativeArray*)var681)->values[2] = (val*) var670;
((struct instance_array__NativeArray*)var681)->values[3] = (val*) var_makename;
((struct instance_array__NativeArray*)var681)->values[4] = (val*) var675;
((struct instance_array__NativeArray*)var681)->values[5] = (val*) var_makeflags;
((void (*)(val*, val*, long))(var679->class->vft[COLOR_array__Array__with_native]))(var679, var681, var680) /* with_native on <var679:Array[Object]>*/;
}
var682 = ((val* (*)(val*))(var679->class->vft[COLOR_string__Object__to_s]))(var679) /* to_s on <var679:Array[Object]>*/;
var683 = 2;
((void (*)(val*, val*, long))(var663->class->vft[COLOR_toolcontext__ToolContext__info]))(var663, var682, var683) /* info on <var663:ToolContext>*/;
var684 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
var685 = ((long (*)(val*))(var684->class->vft[COLOR_toolcontext__ToolContext__verbose_level]))(var684) /* verbose_level on <var684:ToolContext>*/;
var686 = 3;
{ /* Inline kernel#Int#>= (var685,var686) */
/* Covariant cast for argument 0 (i) <var686:Int> isa OTHER */
/* <var686:Int> isa OTHER */
var689 = 1; /* easy <var686:Int> isa OTHER*/
if (!var689) {
var_class_name692 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name692);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 262);
show_backtrace(1);
}
var693 = var685 >= var686;
var687 = var693;
goto RET_LABEL688;
RET_LABEL688:(void)0;
}
if (var687){
var694 = ((val* (*)(val*))(self->class->vft[COLOR_kernel__Object__sys]))(self) /* sys on <self:ModelBuilder>*/;
if (varonce695) {
var696 = varonce695;
} else {
var697 = "make -B -C ";
var698 = 11;
var699 = string__NativeString__to_s_with_length(var697, var698);
var696 = var699;
varonce695 = var696;
}
if (varonce700) {
var701 = varonce700;
} else {
var702 = " -f ";
var703 = 4;
var704 = string__NativeString__to_s_with_length(var702, var703);
var701 = var704;
varonce700 = var701;
}
if (varonce705) {
var706 = varonce705;
} else {
var707 = " -j 4 ";
var708 = 6;
var709 = string__NativeString__to_s_with_length(var707, var708);
var706 = var709;
varonce705 = var706;
}
if (varonce710) {
var711 = varonce710;
} else {
var712 = " 2>&1";
var713 = 5;
var714 = string__NativeString__to_s_with_length(var712, var713);
var711 = var714;
varonce710 = var711;
}
var715 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var715 = array_instance Array[Object] */
var716 = 7;
var717 = NEW_array__NativeArray(var716, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var717)->values[0] = (val*) var696;
((struct instance_array__NativeArray*)var717)->values[1] = (val*) var_compile_dir;
((struct instance_array__NativeArray*)var717)->values[2] = (val*) var701;
((struct instance_array__NativeArray*)var717)->values[3] = (val*) var_makename;
((struct instance_array__NativeArray*)var717)->values[4] = (val*) var706;
((struct instance_array__NativeArray*)var717)->values[5] = (val*) var_makeflags;
((struct instance_array__NativeArray*)var717)->values[6] = (val*) var711;
((void (*)(val*, val*, long))(var715->class->vft[COLOR_array__Array__with_native]))(var715, var717, var716) /* with_native on <var715:Array[Object]>*/;
}
var718 = ((val* (*)(val*))(var715->class->vft[COLOR_string__Object__to_s]))(var715) /* to_s on <var715:Array[Object]>*/;
var719 = ((long (*)(val*, val*))(var694->class->vft[COLOR_exec__Sys__system]))(var694, var718) /* system on <var694:Sys>*/;
var720 = BOX_kernel__Int(var719); /* autobox from Int to nullable Object */
var_res = var720;
} else {
var721 = ((val* (*)(val*))(self->class->vft[COLOR_kernel__Object__sys]))(self) /* sys on <self:ModelBuilder>*/;
if (varonce722) {
var723 = varonce722;
} else {
var724 = "make -B -C ";
var725 = 11;
var726 = string__NativeString__to_s_with_length(var724, var725);
var723 = var726;
varonce722 = var723;
}
if (varonce727) {
var728 = varonce727;
} else {
var729 = " -f ";
var730 = 4;
var731 = string__NativeString__to_s_with_length(var729, var730);
var728 = var731;
varonce727 = var728;
}
if (varonce732) {
var733 = varonce732;
} else {
var734 = " -j 4 ";
var735 = 6;
var736 = string__NativeString__to_s_with_length(var734, var735);
var733 = var736;
varonce732 = var733;
}
if (varonce737) {
var738 = varonce737;
} else {
var739 = " 2>&1 >/dev/null";
var740 = 16;
var741 = string__NativeString__to_s_with_length(var739, var740);
var738 = var741;
varonce737 = var738;
}
var742 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var742 = array_instance Array[Object] */
var743 = 7;
var744 = NEW_array__NativeArray(var743, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var744)->values[0] = (val*) var723;
((struct instance_array__NativeArray*)var744)->values[1] = (val*) var_compile_dir;
((struct instance_array__NativeArray*)var744)->values[2] = (val*) var728;
((struct instance_array__NativeArray*)var744)->values[3] = (val*) var_makename;
((struct instance_array__NativeArray*)var744)->values[4] = (val*) var733;
((struct instance_array__NativeArray*)var744)->values[5] = (val*) var_makeflags;
((struct instance_array__NativeArray*)var744)->values[6] = (val*) var738;
((void (*)(val*, val*, long))(var742->class->vft[COLOR_array__Array__with_native]))(var742, var744, var743) /* with_native on <var742:Array[Object]>*/;
}
var745 = ((val* (*)(val*))(var742->class->vft[COLOR_string__Object__to_s]))(var742) /* to_s on <var742:Array[Object]>*/;
var746 = ((long (*)(val*, val*))(var721->class->vft[COLOR_exec__Sys__system]))(var721, var745) /* system on <var721:Sys>*/;
var747 = BOX_kernel__Int(var746); /* autobox from Int to nullable Object */
var_res = var747;
}
var748 = 0;
{ /* Inline kernel#Int#!= (var_res,var748) */
var751 = (var_res != NULL) && (var_res->class == &class_kernel__Int);
if (var751) {
var752 = ((struct instance_kernel__Int*)var_res)->value; /* autounbox from nullable Object to Int */;
var751 = (var752 == var748);
}
var753 = !var751;
var749 = var753;
goto RET_LABEL750;
RET_LABEL750:(void)0;
}
if (var749){
var754 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
var755 = NULL;
if (varonce756) {
var757 = varonce756;
} else {
var758 = "make failed! Error code: ";
var759 = 25;
var760 = string__NativeString__to_s_with_length(var758, var759);
var757 = var760;
varonce756 = var757;
}
if (varonce761) {
var762 = varonce761;
} else {
var763 = ".";
var764 = 1;
var765 = string__NativeString__to_s_with_length(var763, var764);
var762 = var765;
varonce761 = var762;
}
var766 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var766 = array_instance Array[Object] */
var767 = 3;
var768 = NEW_array__NativeArray(var767, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var768)->values[0] = (val*) var757;
((struct instance_array__NativeArray*)var768)->values[1] = (val*) var_res;
((struct instance_array__NativeArray*)var768)->values[2] = (val*) var762;
((void (*)(val*, val*, long))(var766->class->vft[COLOR_array__Array__with_native]))(var766, var768, var767) /* with_native on <var766:Array[Object]>*/;
}
var769 = ((val* (*)(val*))(var766->class->vft[COLOR_string__Object__to_s]))(var766) /* to_s on <var766:Array[Object]>*/;
((void (*)(val*, val*, val*))(var754->class->vft[COLOR_toolcontext__ToolContext__error]))(var754, var755, var769) /* error on <var754:ToolContext>*/;
} else {
}
var770 = ((long (*)(val*))(self->class->vft[COLOR_time__Object__get_time]))(self) /* get_time on <self:ModelBuilder>*/;
var_time1 = var770;
var771 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
if (varonce772) {
var773 = varonce772;
} else {
var774 = "*** END COMPILING C: ";
var775 = 21;
var776 = string__NativeString__to_s_with_length(var774, var775);
var773 = var776;
varonce772 = var773;
}
{ /* Inline kernel#Int#- (var_time1,var_time0) */
var779 = var_time1 - var_time0;
var777 = var779;
goto RET_LABEL778;
RET_LABEL778:(void)0;
}
if (varonce780) {
var781 = varonce780;
} else {
var782 = " ***";
var783 = 4;
var784 = string__NativeString__to_s_with_length(var782, var783);
var781 = var784;
varonce780 = var781;
}
var785 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var785 = array_instance Array[Object] */
var786 = 3;
var787 = NEW_array__NativeArray(var786, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var787)->values[0] = (val*) var773;
var788 = BOX_kernel__Int(var777); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var787)->values[1] = (val*) var788;
((struct instance_array__NativeArray*)var787)->values[2] = (val*) var781;
((void (*)(val*, val*, long))(var785->class->vft[COLOR_array__Array__with_native]))(var785, var787, var786) /* with_native on <var785:Array[Object]>*/;
}
var789 = ((val* (*)(val*))(var785->class->vft[COLOR_string__Object__to_s]))(var785) /* to_s on <var785:Array[Object]>*/;
var790 = 2;
((void (*)(val*, val*, long))(var771->class->vft[COLOR_toolcontext__ToolContext__info]))(var771, var789, var790) /* info on <var771:ToolContext>*/;
RET_LABEL:;
}
/* method abstract_compiler#ModelBuilder#write_and_make for (self: Object, AbstractCompiler) */
void VIRTUAL_abstract_compiler__ModelBuilder__write_and_make(val* self, val* p0) {
abstract_compiler__ModelBuilder__write_and_make(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#names for (self: AbstractCompiler): HashMap[String, String] */
val* abstract_compiler__AbstractCompiler__names(val* self) {
val* var /* : HashMap[String, String] */;
val* var1 /* : HashMap[String, String] */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dnames].val; /* @names on <self:AbstractCompiler> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @names");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 277);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 280);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 284);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 287);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 309);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 313);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 316);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 323);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 328);
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
/* method abstract_compiler#AbstractCompiler#build_c_to_nit_bindings for (self: AbstractCompiler) */
void abstract_compiler__AbstractCompiler__build_c_to_nit_bindings(val* self) {
val* var /* : ModelBuilder */;
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
val* var10 /* : OFStream */;
val* var11 /* : Array[Object] */;
long var12 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : String */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : String */;
val* var23 /* : String */;
val* var_stream /* var stream: OFStream */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : String */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : String */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : String */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
long var42 /* : Int */;
val* var43 /* : String */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
long var47 /* : Int */;
val* var48 /* : String */;
val* var49 /* : HashMap[String, String] */;
val* var50 /* : Collection[Object] */;
val* var51 /* : Iterator[nullable Object] */;
short int var52 /* : Bool */;
val* var53 /* : nullable Object */;
val* var_i /* var i: String */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
long var57 /* : Int */;
val* var58 /* : String */;
val* var59 /* : HashMap[String, String] */;
val* var60 /* : nullable Object */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
long var64 /* : Int */;
val* var65 /* : String */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
long var69 /* : Int */;
val* var70 /* : String */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
long var74 /* : Int */;
val* var75 /* : String */;
val* var76 /* : OFStream */;
val* var77 /* : Array[Object] */;
long var78 /* : Int */;
val* var_79 /* var : Array[Object] */;
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
val* var90 /* : String */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : NativeString */;
long var94 /* : Int */;
val* var95 /* : String */;
static val* varonce96;
val* var97 /* : String */;
char* var98 /* : NativeString */;
long var99 /* : Int */;
val* var100 /* : String */;
val* var101 /* : Process */;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : NativeString */;
long var105 /* : Int */;
val* var106 /* : String */;
val* var107 /* : Array[Object] */;
long var108 /* : Int */;
val* var_109 /* var : Array[Object] */;
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : NativeString */;
long var113 /* : Int */;
val* var114 /* : String */;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : NativeString */;
long var118 /* : Int */;
val* var119 /* : String */;
val* var120 /* : String */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : NativeString */;
long var124 /* : Int */;
val* var125 /* : String */;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : NativeString */;
long var129 /* : Int */;
val* var130 /* : String */;
val* var131 /* : Array[Object] */;
long var132 /* : Int */;
val* var_133 /* var : Array[Object] */;
static val* varonce134;
val* var135 /* : String */;
char* var136 /* : NativeString */;
long var137 /* : Int */;
val* var138 /* : String */;
static val* varonce139;
val* var140 /* : String */;
char* var141 /* : NativeString */;
long var142 /* : Int */;
val* var143 /* : String */;
val* var144 /* : String */;
static val* varonce145;
val* var146 /* : String */;
char* var147 /* : NativeString */;
long var148 /* : Int */;
val* var149 /* : String */;
val* var150 /* : Array[String] */;
long var151 /* : Int */;
val* var152 /* : NativeArray[String] */;
val* var_x /* var x: Process */;
val* var153 /* : Array[ExternCFile] */;
val* var154 /* : ExternCFile */;
val* var155 /* : Array[Object] */;
long var156 /* : Int */;
val* var_157 /* var : Array[Object] */;
static val* varonce158;
val* var159 /* : String */;
char* var160 /* : NativeString */;
long var161 /* : Int */;
val* var162 /* : String */;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : NativeString */;
long var166 /* : Int */;
val* var167 /* : String */;
val* var168 /* : String */;
static val* varonce169;
val* var170 /* : String */;
char* var171 /* : NativeString */;
long var172 /* : Int */;
val* var173 /* : String */;
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(self) /* modelbuilder on <self:AbstractCompiler>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var) /* toolcontext on <var:ModelBuilder>*/;
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
var10 = NEW_file__OFStream(&type_file__OFStream);
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
var12 = 3;
((void (*)(val*, long))(var11->class->vft[COLOR_array__Array__with_capacity]))(var11, var12) /* with_capacity on <var11:Array[Object]>*/;
var_ = var11;
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
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var_compile_dir) /* add on <var_:Array[Object]>*/;
if (varonce18) {
var19 = varonce18;
} else {
var20 = "/C_fun_names";
var21 = 12;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var19) /* add on <var_:Array[Object]>*/;
var23 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
((void (*)(val*, val*))(var10->class->vft[COLOR_file__OFStream__open]))(var10, var23) /* open on <var10:OFStream>*/;
var_stream = var10;
if (varonce24) {
var25 = varonce24;
} else {
var26 = "%{\n#include \"c_functions_hash.h\"\n%}\n";
var27 = 36;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
((void (*)(val*, val*))(var_stream->class->vft[COLOR_stream__OStream__write]))(var_stream, var25) /* write on <var_stream:OFStream>*/;
if (varonce29) {
var30 = varonce29;
} else {
var31 = "%define lookup-function-name get_nit_name\n";
var32 = 42;
var33 = string__NativeString__to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
((void (*)(val*, val*))(var_stream->class->vft[COLOR_stream__OStream__write]))(var_stream, var30) /* write on <var_stream:OFStream>*/;
if (varonce34) {
var35 = varonce34;
} else {
var36 = "struct C_Nit_Names;\n";
var37 = 20;
var38 = string__NativeString__to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
((void (*)(val*, val*))(var_stream->class->vft[COLOR_stream__OStream__write]))(var_stream, var35) /* write on <var_stream:OFStream>*/;
if (varonce39) {
var40 = varonce39;
} else {
var41 = "%%\n";
var42 = 3;
var43 = string__NativeString__to_s_with_length(var41, var42);
var40 = var43;
varonce39 = var40;
}
((void (*)(val*, val*))(var_stream->class->vft[COLOR_stream__OStream__write]))(var_stream, var40) /* write on <var_stream:OFStream>*/;
if (varonce44) {
var45 = varonce44;
} else {
var46 = "####\n";
var47 = 5;
var48 = string__NativeString__to_s_with_length(var46, var47);
var45 = var48;
varonce44 = var45;
}
((void (*)(val*, val*))(var_stream->class->vft[COLOR_stream__OStream__write]))(var_stream, var45) /* write on <var_stream:OFStream>*/;
var49 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__names]))(self) /* names on <self:AbstractCompiler>*/;
var50 = ((val* (*)(val*))(var49->class->vft[COLOR_abstract_collection__MapRead__keys]))(var49) /* keys on <var49:HashMap[String, String]>*/;
var51 = ((val* (*)(val*))(var50->class->vft[COLOR_abstract_collection__Collection__iterator]))(var50) /* iterator on <var50:Collection[Object](HashMapKeys[String, String])>*/;
for(;;) {
var52 = ((short int (*)(val*))(var51->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var51) /* is_ok on <var51:Iterator[nullable Object]>*/;
if(!var52) break;
var53 = ((val* (*)(val*))(var51->class->vft[COLOR_abstract_collection__Iterator__item]))(var51) /* item on <var51:Iterator[nullable Object]>*/;
var_i = var53;
((void (*)(val*, val*))(var_stream->class->vft[COLOR_stream__OStream__write]))(var_stream, var_i) /* write on <var_stream:OFStream>*/;
if (varonce54) {
var55 = varonce54;
} else {
var56 = ",\11\"";
var57 = 3;
var58 = string__NativeString__to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
((void (*)(val*, val*))(var_stream->class->vft[COLOR_stream__OStream__write]))(var_stream, var55) /* write on <var_stream:OFStream>*/;
var59 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__names]))(self) /* names on <self:AbstractCompiler>*/;
var60 = ((val* (*)(val*, val*))(var59->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var59, var_i) /* [] on <var59:HashMap[String, String]>*/;
((void (*)(val*, val*))(var_stream->class->vft[COLOR_stream__OStream__write]))(var_stream, var60) /* write on <var_stream:OFStream>*/;
if (varonce61) {
var62 = varonce61;
} else {
var63 = "\"\n";
var64 = 2;
var65 = string__NativeString__to_s_with_length(var63, var64);
var62 = var65;
varonce61 = var62;
}
((void (*)(val*, val*))(var_stream->class->vft[COLOR_stream__OStream__write]))(var_stream, var62) /* write on <var_stream:OFStream>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var51->class->vft[COLOR_abstract_collection__Iterator__next]))(var51) /* next on <var51:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
if (varonce66) {
var67 = varonce66;
} else {
var68 = "####\n";
var69 = 5;
var70 = string__NativeString__to_s_with_length(var68, var69);
var67 = var70;
varonce66 = var67;
}
((void (*)(val*, val*))(var_stream->class->vft[COLOR_stream__OStream__write]))(var_stream, var67) /* write on <var_stream:OFStream>*/;
if (varonce71) {
var72 = varonce71;
} else {
var73 = "%%\n";
var74 = 3;
var75 = string__NativeString__to_s_with_length(var73, var74);
var72 = var75;
varonce71 = var72;
}
((void (*)(val*, val*))(var_stream->class->vft[COLOR_stream__OStream__write]))(var_stream, var72) /* write on <var_stream:OFStream>*/;
((void (*)(val*))(var_stream->class->vft[COLOR_stream__IOS__close]))(var_stream) /* close on <var_stream:OFStream>*/;
var76 = NEW_file__OFStream(&type_file__OFStream);
var77 = NEW_array__Array(&type_array__Arraykernel__Object);
var78 = 3;
((void (*)(val*, long))(var77->class->vft[COLOR_array__Array__with_capacity]))(var77, var78) /* with_capacity on <var77:Array[Object]>*/;
var_79 = var77;
if (varonce80) {
var81 = varonce80;
} else {
var82 = "";
var83 = 0;
var84 = string__NativeString__to_s_with_length(var82, var83);
var81 = var84;
varonce80 = var81;
}
((void (*)(val*, val*))(var_79->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_79, var81) /* add on <var_79:Array[Object]>*/;
((void (*)(val*, val*))(var_79->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_79, var_compile_dir) /* add on <var_79:Array[Object]>*/;
if (varonce85) {
var86 = varonce85;
} else {
var87 = "/c_functions_hash.h";
var88 = 19;
var89 = string__NativeString__to_s_with_length(var87, var88);
var86 = var89;
varonce85 = var86;
}
((void (*)(val*, val*))(var_79->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_79, var86) /* add on <var_79:Array[Object]>*/;
var90 = ((val* (*)(val*))(var_79->class->vft[COLOR_string__Object__to_s]))(var_79) /* to_s on <var_79:Array[Object]>*/;
((void (*)(val*, val*))(var76->class->vft[COLOR_file__OFStream__open]))(var76, var90) /* open on <var76:OFStream>*/;
var_stream = var76;
if (varonce91) {
var92 = varonce91;
} else {
var93 = "typedef struct C_Nit_Names{char* name; char* nit_name;}C_Nit_Names;\n";
var94 = 68;
var95 = string__NativeString__to_s_with_length(var93, var94);
var92 = var95;
varonce91 = var92;
}
((void (*)(val*, val*))(var_stream->class->vft[COLOR_stream__OStream__write]))(var_stream, var92) /* write on <var_stream:OFStream>*/;
if (varonce96) {
var97 = varonce96;
} else {
var98 = "const struct C_Nit_Names* get_nit_name(register const char *str, register unsigned int len);\n";
var99 = 93;
var100 = string__NativeString__to_s_with_length(var98, var99);
var97 = var100;
varonce96 = var97;
}
((void (*)(val*, val*))(var_stream->class->vft[COLOR_stream__OStream__write]))(var_stream, var97) /* write on <var_stream:OFStream>*/;
((void (*)(val*))(var_stream->class->vft[COLOR_stream__IOS__close]))(var_stream) /* close on <var_stream:OFStream>*/;
var101 = NEW_exec__Process(&type_exec__Process);
if (varonce102) {
var103 = varonce102;
} else {
var104 = "gperf";
var105 = 5;
var106 = string__NativeString__to_s_with_length(var104, var105);
var103 = var106;
varonce102 = var103;
}
var107 = NEW_array__Array(&type_array__Arraykernel__Object);
var108 = 3;
((void (*)(val*, long))(var107->class->vft[COLOR_array__Array__with_capacity]))(var107, var108) /* with_capacity on <var107:Array[Object]>*/;
var_109 = var107;
if (varonce110) {
var111 = varonce110;
} else {
var112 = "";
var113 = 0;
var114 = string__NativeString__to_s_with_length(var112, var113);
var111 = var114;
varonce110 = var111;
}
((void (*)(val*, val*))(var_109->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_109, var111) /* add on <var_109:Array[Object]>*/;
((void (*)(val*, val*))(var_109->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_109, var_compile_dir) /* add on <var_109:Array[Object]>*/;
if (varonce115) {
var116 = varonce115;
} else {
var117 = "/C_fun_names";
var118 = 12;
var119 = string__NativeString__to_s_with_length(var117, var118);
var116 = var119;
varonce115 = var116;
}
((void (*)(val*, val*))(var_109->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_109, var116) /* add on <var_109:Array[Object]>*/;
var120 = ((val* (*)(val*))(var_109->class->vft[COLOR_string__Object__to_s]))(var_109) /* to_s on <var_109:Array[Object]>*/;
if (varonce121) {
var122 = varonce121;
} else {
var123 = "-t";
var124 = 2;
var125 = string__NativeString__to_s_with_length(var123, var124);
var122 = var125;
varonce121 = var122;
}
if (varonce126) {
var127 = varonce126;
} else {
var128 = "-7";
var129 = 2;
var130 = string__NativeString__to_s_with_length(var128, var129);
var127 = var130;
varonce126 = var127;
}
var131 = NEW_array__Array(&type_array__Arraykernel__Object);
var132 = 3;
((void (*)(val*, long))(var131->class->vft[COLOR_array__Array__with_capacity]))(var131, var132) /* with_capacity on <var131:Array[Object]>*/;
var_133 = var131;
if (varonce134) {
var135 = varonce134;
} else {
var136 = "--output-file=";
var137 = 14;
var138 = string__NativeString__to_s_with_length(var136, var137);
var135 = var138;
varonce134 = var135;
}
((void (*)(val*, val*))(var_133->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_133, var135) /* add on <var_133:Array[Object]>*/;
((void (*)(val*, val*))(var_133->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_133, var_compile_dir) /* add on <var_133:Array[Object]>*/;
if (varonce139) {
var140 = varonce139;
} else {
var141 = "/c_functions_hash.c";
var142 = 19;
var143 = string__NativeString__to_s_with_length(var141, var142);
var140 = var143;
varonce139 = var140;
}
((void (*)(val*, val*))(var_133->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_133, var140) /* add on <var_133:Array[Object]>*/;
var144 = ((val* (*)(val*))(var_133->class->vft[COLOR_string__Object__to_s]))(var_133) /* to_s on <var_133:Array[Object]>*/;
if (varonce145) {
var146 = varonce145;
} else {
var147 = "-C";
var148 = 2;
var149 = string__NativeString__to_s_with_length(var147, var148);
var146 = var149;
varonce145 = var146;
}
var150 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var150 = array_instance Array[String] */
var151 = 5;
var152 = NEW_array__NativeArray(var151, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var152)->values[0] = (val*) var120;
((struct instance_array__NativeArray*)var152)->values[1] = (val*) var122;
((struct instance_array__NativeArray*)var152)->values[2] = (val*) var127;
((struct instance_array__NativeArray*)var152)->values[3] = (val*) var144;
((struct instance_array__NativeArray*)var152)->values[4] = (val*) var146;
((void (*)(val*, val*, long))(var150->class->vft[COLOR_array__Array__with_native]))(var150, var152, var151) /* with_native on <var150:Array[String]>*/;
}
((void (*)(val*, val*, val*))(var101->class->vft[COLOR_exec__Process__init]))(var101, var103, var150) /* init on <var101:Process>*/;
var_x = var101;
((void (*)(val*))(var_x->class->vft[COLOR_exec__Process__wait]))(var_x) /* wait on <var_x:Process>*/;
var153 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__extern_bodies]))(self) /* extern_bodies on <self:AbstractCompiler>*/;
var154 = NEW_abstract_compiler__ExternCFile(&type_abstract_compiler__ExternCFile);
var155 = NEW_array__Array(&type_array__Arraykernel__Object);
var156 = 3;
((void (*)(val*, long))(var155->class->vft[COLOR_array__Array__with_capacity]))(var155, var156) /* with_capacity on <var155:Array[Object]>*/;
var_157 = var155;
if (varonce158) {
var159 = varonce158;
} else {
var160 = "";
var161 = 0;
var162 = string__NativeString__to_s_with_length(var160, var161);
var159 = var162;
varonce158 = var159;
}
((void (*)(val*, val*))(var_157->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_157, var159) /* add on <var_157:Array[Object]>*/;
((void (*)(val*, val*))(var_157->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_157, var_compile_dir) /* add on <var_157:Array[Object]>*/;
if (varonce163) {
var164 = varonce163;
} else {
var165 = "/c_functions_hash.c";
var166 = 19;
var167 = string__NativeString__to_s_with_length(var165, var166);
var164 = var167;
varonce163 = var164;
}
((void (*)(val*, val*))(var_157->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_157, var164) /* add on <var_157:Array[Object]>*/;
var168 = ((val* (*)(val*))(var_157->class->vft[COLOR_string__Object__to_s]))(var_157) /* to_s on <var_157:Array[Object]>*/;
if (varonce169) {
var170 = varonce169;
} else {
var171 = "";
var172 = 0;
var173 = string__NativeString__to_s_with_length(var171, var172);
var170 = var173;
varonce169 = var170;
}
((void (*)(val*, val*, val*))(var154->class->vft[COLOR_abstract_compiler__ExternCFile__init]))(var154, var168, var170) /* init on <var154:ExternCFile>*/;
((void (*)(val*, val*))(var153->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var153, var154) /* add on <var153:Array[ExternCFile]>*/;
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
var23 = "#include <gc_chooser.h>";
var24 = 23;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
((void (*)(val*, val*))(var20->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var20, var22) /* add_decl on <var20:CodeWriter>*/;
((void (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__compile_header_structs]))(self) /* compile_header_structs on <self:AbstractCompiler>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 385);
show_backtrace(1);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#compile_header_structs for (self: Object) */
void VIRTUAL_abstract_compiler__AbstractCompiler__compile_header_structs(val* self) {
abstract_compiler__AbstractCompiler__compile_header_structs(self);
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
val* var150 /* : ModelBuilder */;
val* var151 /* : ToolContext */;
val* var152 /* : OptionBool */;
val* var153 /* : nullable Object */;
short int var154 /* : Bool */;
short int var155 /* : Bool */;
static val* varonce156;
val* var157 /* : String */;
char* var158 /* : NativeString */;
long var159 /* : Int */;
val* var160 /* : String */;
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
val* var221 /* : ModelBuilder */;
val* var222 /* : ToolContext */;
val* var223 /* : OptionBool */;
val* var224 /* : nullable Object */;
short int var225 /* : Bool */;
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
static val* varonce241;
val* var242 /* : String */;
char* var243 /* : NativeString */;
long var244 /* : Int */;
val* var245 /* : String */;
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
val* var336 /* : MModule */;
val* var337 /* : nullable MClassType */;
val* var_main_type /* var main_type: nullable MClassType */;
val* var338 /* : null */;
short int var339 /* : Bool */;
val* var340 /* : AbstractCompiler */;
val* var341 /* : MModule */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var342 /* : RuntimeVariable */;
val* var_glob_sys /* var glob_sys: RuntimeVariable */;
static val* varonce343;
val* var344 /* : String */;
char* var345 /* : NativeString */;
long var346 /* : Int */;
val* var347 /* : String */;
static val* varonce348;
val* var349 /* : String */;
char* var350 /* : NativeString */;
long var351 /* : Int */;
val* var352 /* : String */;
val* var353 /* : Array[Object] */;
long var354 /* : Int */;
val* var355 /* : NativeArray[Object] */;
val* var356 /* : String */;
static val* varonce357;
val* var358 /* : String */;
char* var359 /* : NativeString */;
long var360 /* : Int */;
val* var361 /* : String */;
val* var362 /* : MClass */;
val* var363 /* : nullable MMethod */;
val* var_main_init /* var main_init: nullable MMethod */;
val* var364 /* : null */;
short int var365 /* : Bool */;
val* var366 /* : Array[RuntimeVariable] */;
long var367 /* : Int */;
val* var368 /* : NativeArray[RuntimeVariable] */;
val* var369 /* : nullable RuntimeVariable */;
static val* varonce370;
val* var371 /* : String */;
char* var372 /* : NativeString */;
long var373 /* : Int */;
val* var374 /* : String */;
val* var375 /* : MClass */;
val* var376 /* : nullable MMethod */;
val* var_main_method /* var main_method: nullable MMethod */;
val* var377 /* : null */;
short int var378 /* : Bool */;
val* var379 /* : Array[RuntimeVariable] */;
long var380 /* : Int */;
val* var381 /* : NativeArray[RuntimeVariable] */;
val* var382 /* : nullable RuntimeVariable */;
val* var383 /* : ModelBuilder */;
val* var384 /* : ToolContext */;
val* var385 /* : OptionBool */;
val* var386 /* : nullable Object */;
short int var387 /* : Bool */;
static val* varonce388;
val* var389 /* : String */;
char* var390 /* : NativeString */;
long var391 /* : Int */;
val* var392 /* : String */;
static val* varonce393;
val* var394 /* : String */;
char* var395 /* : NativeString */;
long var396 /* : Int */;
val* var397 /* : String */;
static val* varonce398;
val* var399 /* : String */;
char* var400 /* : NativeString */;
long var401 /* : Int */;
val* var402 /* : String */;
static val* varonce403;
val* var404 /* : String */;
char* var405 /* : NativeString */;
long var406 /* : Int */;
val* var407 /* : String */;
val* var408 /* : Array[String] */;
val* var409 /* : Iterator[nullable Object] */;
short int var410 /* : Bool */;
val* var411 /* : nullable Object */;
val* var_tag412 /* var tag: String */;
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
val* var423 /* : Array[Object] */;
long var424 /* : Int */;
val* var425 /* : NativeArray[Object] */;
val* var426 /* : String */;
static val* varonce427;
val* var428 /* : String */;
char* var429 /* : NativeString */;
long var430 /* : Int */;
val* var431 /* : String */;
static val* varonce432;
val* var433 /* : String */;
char* var434 /* : NativeString */;
long var435 /* : Int */;
val* var436 /* : String */;
static val* varonce437;
val* var438 /* : String */;
char* var439 /* : NativeString */;
long var440 /* : Int */;
val* var441 /* : String */;
static val* varonce442;
val* var443 /* : String */;
char* var444 /* : NativeString */;
long var445 /* : Int */;
val* var446 /* : String */;
static val* varonce447;
val* var448 /* : String */;
char* var449 /* : NativeString */;
long var450 /* : Int */;
val* var451 /* : String */;
val* var452 /* : Array[Object] */;
long var453 /* : Int */;
val* var454 /* : NativeArray[Object] */;
val* var455 /* : String */;
static val* varonce456;
val* var457 /* : String */;
char* var458 /* : NativeString */;
long var459 /* : Int */;
val* var460 /* : String */;
static val* varonce461;
val* var462 /* : String */;
char* var463 /* : NativeString */;
long var464 /* : Int */;
val* var465 /* : String */;
val* var466 /* : Array[Object] */;
long var467 /* : Int */;
val* var468 /* : NativeArray[Object] */;
val* var469 /* : String */;
static val* varonce470;
val* var471 /* : String */;
char* var472 /* : NativeString */;
long var473 /* : Int */;
val* var474 /* : String */;
static val* varonce475;
val* var476 /* : String */;
char* var477 /* : NativeString */;
long var478 /* : Int */;
val* var479 /* : String */;
val* var480 /* : Array[Object] */;
long var481 /* : Int */;
val* var482 /* : NativeArray[Object] */;
val* var483 /* : String */;
static val* varonce484;
val* var485 /* : String */;
char* var486 /* : NativeString */;
long var487 /* : Int */;
val* var488 /* : String */;
static val* varonce489;
val* var490 /* : String */;
char* var491 /* : NativeString */;
long var492 /* : Int */;
val* var493 /* : String */;
val* var494 /* : Array[Object] */;
long var495 /* : Int */;
val* var496 /* : NativeArray[Object] */;
val* var497 /* : String */;
static val* varonce498;
val* var499 /* : String */;
char* var500 /* : NativeString */;
long var501 /* : Int */;
val* var502 /* : String */;
static val* varonce503;
val* var504 /* : String */;
char* var505 /* : NativeString */;
long var506 /* : Int */;
val* var507 /* : String */;
val* var508 /* : Array[Object] */;
long var509 /* : Int */;
val* var510 /* : NativeArray[Object] */;
val* var511 /* : String */;
static val* varonce513;
val* var514 /* : String */;
char* var515 /* : NativeString */;
long var516 /* : Int */;
val* var517 /* : String */;
static val* varonce518;
val* var519 /* : String */;
char* var520 /* : NativeString */;
long var521 /* : Int */;
val* var522 /* : String */;
val* var523 /* : Array[String] */;
val* var524 /* : Array[nullable Object] */;
val* var_tags /* var tags: Array[String] */;
static val* varonce525;
val* var526 /* : String */;
char* var527 /* : NativeString */;
long var528 /* : Int */;
val* var529 /* : String */;
val* var530 /* : Iterator[nullable Object] */;
short int var531 /* : Bool */;
val* var532 /* : nullable Object */;
val* var_tag533 /* var tag: String */;
static val* varonce534;
val* var535 /* : String */;
char* var536 /* : NativeString */;
long var537 /* : Int */;
val* var538 /* : String */;
static val* varonce539;
val* var540 /* : String */;
char* var541 /* : NativeString */;
long var542 /* : Int */;
val* var543 /* : String */;
val* var544 /* : Array[Object] */;
long var545 /* : Int */;
val* var546 /* : NativeArray[Object] */;
val* var547 /* : String */;
static val* varonce548;
val* var549 /* : String */;
char* var550 /* : NativeString */;
long var551 /* : Int */;
val* var552 /* : String */;
static val* varonce553;
val* var554 /* : String */;
char* var555 /* : NativeString */;
long var556 /* : Int */;
val* var557 /* : String */;
static val* varonce558;
val* var559 /* : String */;
char* var560 /* : NativeString */;
long var561 /* : Int */;
val* var562 /* : String */;
val* var563 /* : Array[Object] */;
long var564 /* : Int */;
val* var565 /* : NativeArray[Object] */;
val* var566 /* : String */;
static val* varonce567;
val* var568 /* : String */;
char* var569 /* : NativeString */;
long var570 /* : Int */;
val* var571 /* : String */;
static val* varonce572;
val* var573 /* : String */;
char* var574 /* : NativeString */;
long var575 /* : Int */;
val* var576 /* : String */;
static val* varonce577;
val* var578 /* : String */;
char* var579 /* : NativeString */;
long var580 /* : Int */;
val* var581 /* : String */;
val* var582 /* : Array[Object] */;
long var583 /* : Int */;
val* var584 /* : NativeArray[Object] */;
val* var585 /* : String */;
static val* varonce586;
val* var587 /* : String */;
char* var588 /* : NativeString */;
long var589 /* : Int */;
val* var590 /* : String */;
static val* varonce591;
val* var592 /* : String */;
char* var593 /* : NativeString */;
long var594 /* : Int */;
val* var595 /* : String */;
static val* varonce596;
val* var597 /* : String */;
char* var598 /* : NativeString */;
long var599 /* : Int */;
val* var600 /* : String */;
val* var601 /* : Array[Object] */;
long var602 /* : Int */;
val* var603 /* : NativeArray[Object] */;
val* var604 /* : String */;
static val* varonce605;
val* var606 /* : String */;
char* var607 /* : NativeString */;
long var608 /* : Int */;
val* var609 /* : String */;
static val* varonce610;
val* var611 /* : String */;
char* var612 /* : NativeString */;
long var613 /* : Int */;
val* var614 /* : String */;
static val* varonce615;
val* var616 /* : String */;
char* var617 /* : NativeString */;
long var618 /* : Int */;
val* var619 /* : String */;
val* var620 /* : Array[Object] */;
long var621 /* : Int */;
val* var622 /* : NativeArray[Object] */;
val* var623 /* : String */;
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
var147 = "void show_backtrace (int signo) {";
var148 = 33;
var149 = string__NativeString__to_s_with_length(var147, var148);
var146 = var149;
varonce145 = var146;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var146) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
var150 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(self) /* modelbuilder on <self:AbstractCompiler>*/;
var151 = ((val* (*)(val*))(var150->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var150) /* toolcontext on <var150:ModelBuilder>*/;
var152 = ((val* (*)(val*))(var151->class->vft[COLOR_abstract_compiler__ToolContext__opt_no_stacktrace]))(var151) /* opt_no_stacktrace on <var151:ToolContext>*/;
var153 = ((val* (*)(val*))(var152->class->vft[COLOR_opts__Option__value]))(var152) /* value on <var152:OptionBool>*/;
var154 = ((struct instance_kernel__Bool*)var153)->value; /* autounbox from nullable Object to Bool */;
var155 = !var154;
if (var155){
if (varonce156) {
var157 = varonce156;
} else {
var158 = "char* opt = getenv(\"NIT_NO_STACK\");";
var159 = 35;
var160 = string__NativeString__to_s_with_length(var158, var159);
var157 = var160;
varonce156 = var157;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var157) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce161) {
var162 = varonce161;
} else {
var163 = "unw_cursor_t cursor;";
var164 = 20;
var165 = string__NativeString__to_s_with_length(var163, var164);
var162 = var165;
varonce161 = var162;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var162) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce166) {
var167 = varonce166;
} else {
var168 = "if(opt==NULL){";
var169 = 14;
var170 = string__NativeString__to_s_with_length(var168, var169);
var167 = var170;
varonce166 = var167;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var167) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce171) {
var172 = varonce171;
} else {
var173 = "unw_context_t uc;";
var174 = 17;
var175 = string__NativeString__to_s_with_length(var173, var174);
var172 = var175;
varonce171 = var172;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var172) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce176) {
var177 = varonce176;
} else {
var178 = "unw_word_t ip;";
var179 = 14;
var180 = string__NativeString__to_s_with_length(var178, var179);
var177 = var180;
varonce176 = var177;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var177) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce181) {
var182 = varonce181;
} else {
var183 = "char* procname = malloc(sizeof(char) * 100);";
var184 = 44;
var185 = string__NativeString__to_s_with_length(var183, var184);
var182 = var185;
varonce181 = var182;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var182) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce186) {
var187 = varonce186;
} else {
var188 = "unw_getcontext(&uc);";
var189 = 20;
var190 = string__NativeString__to_s_with_length(var188, var189);
var187 = var190;
varonce186 = var187;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var187) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce191) {
var192 = varonce191;
} else {
var193 = "unw_init_local(&cursor, &uc);";
var194 = 29;
var195 = string__NativeString__to_s_with_length(var193, var194);
var192 = var195;
varonce191 = var192;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var192) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce196) {
var197 = varonce196;
} else {
var198 = "printf(\"-------------------------------------------------\\n\");";
var199 = 62;
var200 = string__NativeString__to_s_with_length(var198, var199);
var197 = var200;
varonce196 = var197;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var197) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce201) {
var202 = varonce201;
} else {
var203 = "printf(\"--   Stack Trace   ------------------------------\\n\");";
var204 = 62;
var205 = string__NativeString__to_s_with_length(var203, var204);
var202 = var205;
varonce201 = var202;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var202) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce206) {
var207 = varonce206;
} else {
var208 = "printf(\"-------------------------------------------------\\n\");";
var209 = 62;
var210 = string__NativeString__to_s_with_length(var208, var209);
var207 = var210;
varonce206 = var207;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var207) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce211) {
var212 = varonce211;
} else {
var213 = "while (unw_step(&cursor) > 0) {";
var214 = 31;
var215 = string__NativeString__to_s_with_length(var213, var214);
var212 = var215;
varonce211 = var212;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var212) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce216) {
var217 = varonce216;
} else {
var218 = "\11unw_get_proc_name(&cursor, procname, 100, &ip);";
var219 = 48;
var220 = string__NativeString__to_s_with_length(var218, var219);
var217 = var220;
varonce216 = var217;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var217) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
var221 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(self) /* modelbuilder on <self:AbstractCompiler>*/;
var222 = ((val* (*)(val*))(var221->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var221) /* toolcontext on <var221:ModelBuilder>*/;
var223 = ((val* (*)(val*))(var222->class->vft[COLOR_abstract_compiler__ToolContext__opt_stacktrace]))(var222) /* opt_stacktrace on <var222:ToolContext>*/;
var224 = ((val* (*)(val*))(var223->class->vft[COLOR_opts__Option__value]))(var223) /* value on <var223:OptionBool>*/;
var225 = ((struct instance_kernel__Bool*)var224)->value; /* autounbox from nullable Object to Bool */;
if (var225){
if (varonce226) {
var227 = varonce226;
} else {
var228 = "\11const C_Nit_Names* recv = get_nit_name(procname, strlen(procname));";
var229 = 68;
var230 = string__NativeString__to_s_with_length(var228, var229);
var227 = var230;
varonce226 = var227;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var227) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce231) {
var232 = varonce231;
} else {
var233 = "\11if (recv != 0){";
var234 = 16;
var235 = string__NativeString__to_s_with_length(var233, var234);
var232 = var235;
varonce231 = var232;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var232) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce236) {
var237 = varonce236;
} else {
var238 = "\11\11printf(\"` %s\\n\", recv->nit_name);";
var239 = 35;
var240 = string__NativeString__to_s_with_length(var238, var239);
var237 = var240;
varonce236 = var237;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var237) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce241) {
var242 = varonce241;
} else {
var243 = "\11}else{";
var244 = 7;
var245 = string__NativeString__to_s_with_length(var243, var244);
var242 = var245;
varonce241 = var242;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var242) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce246) {
var247 = varonce246;
} else {
var248 = "\11\11printf(\"` %s\\n\", procname);";
var249 = 29;
var250 = string__NativeString__to_s_with_length(var248, var249);
var247 = var250;
varonce246 = var247;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var247) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce251) {
var252 = varonce251;
} else {
var253 = "\11}";
var254 = 2;
var255 = string__NativeString__to_s_with_length(var253, var254);
var252 = var255;
varonce251 = var252;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var252) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
} else {
if (varonce256) {
var257 = varonce256;
} else {
var258 = "\11printf(\"` %s \\n\",procname);";
var259 = 28;
var260 = string__NativeString__to_s_with_length(var258, var259);
var257 = var260;
varonce256 = var257;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var257) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
}
if (varonce261) {
var262 = varonce261;
} else {
var263 = "}";
var264 = 1;
var265 = string__NativeString__to_s_with_length(var263, var264);
var262 = var265;
varonce261 = var262;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var262) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce266) {
var267 = varonce266;
} else {
var268 = "printf(\"-------------------------------------------------\\n\");";
var269 = 62;
var270 = string__NativeString__to_s_with_length(var268, var269);
var267 = var270;
varonce266 = var267;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var267) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce271) {
var272 = varonce271;
} else {
var273 = "free(procname);";
var274 = 15;
var275 = string__NativeString__to_s_with_length(var273, var274);
var272 = var275;
varonce271 = var272;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var272) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce276) {
var277 = varonce276;
} else {
var278 = "}";
var279 = 1;
var280 = string__NativeString__to_s_with_length(var278, var279);
var277 = var280;
varonce276 = var277;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var277) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
} else {
}
if (varonce281) {
var282 = varonce281;
} else {
var283 = "exit(signo);";
var284 = 12;
var285 = string__NativeString__to_s_with_length(var283, var284);
var282 = var285;
varonce281 = var282;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var282) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce286) {
var287 = varonce286;
} else {
var288 = "}";
var289 = 1;
var290 = string__NativeString__to_s_with_length(var288, var289);
var287 = var290;
varonce286 = var287;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var287) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce291) {
var292 = varonce291;
} else {
var293 = "int main(int argc, char** argv) {";
var294 = 33;
var295 = string__NativeString__to_s_with_length(var293, var294);
var292 = var295;
varonce291 = var292;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var292) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce296) {
var297 = varonce296;
} else {
var298 = "signal(SIGABRT, show_backtrace);";
var299 = 32;
var300 = string__NativeString__to_s_with_length(var298, var299);
var297 = var300;
varonce296 = var297;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var297) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce301) {
var302 = varonce301;
} else {
var303 = "signal(SIGFPE, show_backtrace);";
var304 = 31;
var305 = string__NativeString__to_s_with_length(var303, var304);
var302 = var305;
varonce301 = var302;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var302) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce306) {
var307 = varonce306;
} else {
var308 = "signal(SIGILL, show_backtrace);";
var309 = 31;
var310 = string__NativeString__to_s_with_length(var308, var309);
var307 = var310;
varonce306 = var307;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var307) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce311) {
var312 = varonce311;
} else {
var313 = "signal(SIGINT, show_backtrace);";
var314 = 31;
var315 = string__NativeString__to_s_with_length(var313, var314);
var312 = var315;
varonce311 = var312;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var312) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce316) {
var317 = varonce316;
} else {
var318 = "signal(SIGTERM, show_backtrace);";
var319 = 32;
var320 = string__NativeString__to_s_with_length(var318, var319);
var317 = var320;
varonce316 = var317;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var317) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce321) {
var322 = varonce321;
} else {
var323 = "signal(SIGSEGV, show_backtrace);";
var324 = 32;
var325 = string__NativeString__to_s_with_length(var323, var324);
var322 = var325;
varonce321 = var322;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var322) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce326) {
var327 = varonce326;
} else {
var328 = "glob_argc = argc; glob_argv = argv;";
var329 = 35;
var330 = string__NativeString__to_s_with_length(var328, var329);
var327 = var330;
varonce326 = var327;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var327) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce331) {
var332 = varonce331;
} else {
var333 = "initialize_gc_option();";
var334 = 23;
var335 = string__NativeString__to_s_with_length(var333, var334);
var332 = var335;
varonce331 = var332;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var332) /* add on <var_v:AbstractCompilerVisitor>*/;
var336 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:AbstractCompiler>*/;
var337 = ((val* (*)(val*))(var336->class->vft[COLOR_model__MModule__sys_type]))(var336) /* sys_type on <var336:MModule>*/;
var_main_type = var337;
var338 = NULL;
if (var_main_type == NULL) {
var339 = 0; /* is null */
} else {
var339 = 1; /* arg is null and recv is not */
}
if (var339){
var340 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var341 = ((val* (*)(val*))(var340->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var340) /* mainmodule on <var340:AbstractCompiler>*/;
var_mainmodule = var341;
var342 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__init_instance]))(var_v, var_main_type) /* init_instance on <var_v:AbstractCompilerVisitor>*/;
var_glob_sys = var342;
if (varonce343) {
var344 = varonce343;
} else {
var345 = "glob_sys = ";
var346 = 11;
var347 = string__NativeString__to_s_with_length(var345, var346);
var344 = var347;
varonce343 = var344;
}
if (varonce348) {
var349 = varonce348;
} else {
var350 = ";";
var351 = 1;
var352 = string__NativeString__to_s_with_length(var350, var351);
var349 = var352;
varonce348 = var349;
}
var353 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var353 = array_instance Array[Object] */
var354 = 3;
var355 = NEW_array__NativeArray(var354, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var355)->values[0] = (val*) var344;
((struct instance_array__NativeArray*)var355)->values[1] = (val*) var_glob_sys;
((struct instance_array__NativeArray*)var355)->values[2] = (val*) var349;
((void (*)(val*, val*, long))(var353->class->vft[COLOR_array__Array__with_native]))(var353, var355, var354) /* with_native on <var353:Array[Object]>*/;
}
var356 = ((val* (*)(val*))(var353->class->vft[COLOR_string__Object__to_s]))(var353) /* to_s on <var353:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var356) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce357) {
var358 = varonce357;
} else {
var359 = "init";
var360 = 4;
var361 = string__NativeString__to_s_with_length(var359, var360);
var358 = var361;
varonce357 = var358;
}
var362 = ((val* (*)(val*))(var_main_type->class->vft[COLOR_model__MClassType__mclass]))(var_main_type) /* mclass on <var_main_type:nullable MClassType(MClassType)>*/;
var363 = ((val* (*)(val*, val*, val*))(var_mainmodule->class->vft[COLOR_model__MModule__try_get_primitive_method]))(var_mainmodule, var358, var362) /* try_get_primitive_method on <var_mainmodule:MModule>*/;
var_main_init = var363;
var364 = NULL;
if (var_main_init == NULL) {
var365 = 0; /* is null */
} else {
var365 = 1; /* arg is null and recv is not */
}
if (var365){
var366 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{ /* var366 = array_instance Array[RuntimeVariable] */
var367 = 1;
var368 = NEW_array__NativeArray(var367, &type_array__NativeArrayabstract_compiler__RuntimeVariable);
((struct instance_array__NativeArray*)var368)->values[0] = (val*) var_glob_sys;
((void (*)(val*, val*, long))(var366->class->vft[COLOR_array__Array__with_native]))(var366, var368, var367) /* with_native on <var366:Array[RuntimeVariable]>*/;
}
var369 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__send]))(var_v, var_main_init, var366) /* send on <var_v:AbstractCompilerVisitor>*/;
var369;
} else {
}
if (varonce370) {
var371 = varonce370;
} else {
var372 = "main";
var373 = 4;
var374 = string__NativeString__to_s_with_length(var372, var373);
var371 = var374;
varonce370 = var371;
}
var375 = ((val* (*)(val*))(var_main_type->class->vft[COLOR_model__MClassType__mclass]))(var_main_type) /* mclass on <var_main_type:nullable MClassType(MClassType)>*/;
var376 = ((val* (*)(val*, val*, val*))(var_mainmodule->class->vft[COLOR_model__MModule__try_get_primitive_method]))(var_mainmodule, var371, var375) /* try_get_primitive_method on <var_mainmodule:MModule>*/;
var_main_method = var376;
var377 = NULL;
if (var_main_method == NULL) {
var378 = 0; /* is null */
} else {
var378 = 1; /* arg is null and recv is not */
}
if (var378){
var379 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{ /* var379 = array_instance Array[RuntimeVariable] */
var380 = 1;
var381 = NEW_array__NativeArray(var380, &type_array__NativeArrayabstract_compiler__RuntimeVariable);
((struct instance_array__NativeArray*)var381)->values[0] = (val*) var_glob_sys;
((void (*)(val*, val*, long))(var379->class->vft[COLOR_array__Array__with_native]))(var379, var381, var380) /* with_native on <var379:Array[RuntimeVariable]>*/;
}
var382 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__send]))(var_v, var_main_method, var379) /* send on <var_v:AbstractCompilerVisitor>*/;
var382;
} else {
}
} else {
}
var383 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(self) /* modelbuilder on <self:AbstractCompiler>*/;
var384 = ((val* (*)(val*))(var383->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var383) /* toolcontext on <var383:ModelBuilder>*/;
var385 = ((val* (*)(val*))(var384->class->vft[COLOR_abstract_compiler__ToolContext__opt_typing_test_metrics]))(var384) /* opt_typing_test_metrics on <var384:ToolContext>*/;
var386 = ((val* (*)(val*))(var385->class->vft[COLOR_opts__Option__value]))(var385) /* value on <var385:OptionBool>*/;
var387 = ((struct instance_kernel__Bool*)var386)->value; /* autounbox from nullable Object to Bool */;
if (var387){
if (varonce388) {
var389 = varonce388;
} else {
var390 = "long count_type_test_resolved_total = 0;";
var391 = 40;
var392 = string__NativeString__to_s_with_length(var390, var391);
var389 = var392;
varonce388 = var389;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var389) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce393) {
var394 = varonce393;
} else {
var395 = "long count_type_test_unresolved_total = 0;";
var396 = 42;
var397 = string__NativeString__to_s_with_length(var395, var396);
var394 = var397;
varonce393 = var394;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var394) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce398) {
var399 = varonce398;
} else {
var400 = "long count_type_test_skipped_total = 0;";
var401 = 39;
var402 = string__NativeString__to_s_with_length(var400, var401);
var399 = var402;
varonce398 = var399;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var399) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce403) {
var404 = varonce403;
} else {
var405 = "long count_type_test_total_total = 0;";
var406 = 37;
var407 = string__NativeString__to_s_with_length(var405, var406);
var404 = var407;
varonce403 = var404;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var404) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
var408 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__count_type_test_tags]))(self) /* count_type_test_tags on <self:AbstractCompiler>*/;
var409 = ((val* (*)(val*))(var408->class->vft[COLOR_abstract_collection__Collection__iterator]))(var408) /* iterator on <var408:Array[String]>*/;
for(;;) {
var410 = ((short int (*)(val*))(var409->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var409) /* is_ok on <var409:Iterator[nullable Object]>*/;
if(!var410) break;
var411 = ((val* (*)(val*))(var409->class->vft[COLOR_abstract_collection__Iterator__item]))(var409) /* item on <var409:Iterator[nullable Object]>*/;
var_tag412 = var411;
if (varonce413) {
var414 = varonce413;
} else {
var415 = "long count_type_test_total_";
var416 = 27;
var417 = string__NativeString__to_s_with_length(var415, var416);
var414 = var417;
varonce413 = var414;
}
if (varonce418) {
var419 = varonce418;
} else {
var420 = ";";
var421 = 1;
var422 = string__NativeString__to_s_with_length(var420, var421);
var419 = var422;
varonce418 = var419;
}
var423 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var423 = array_instance Array[Object] */
var424 = 3;
var425 = NEW_array__NativeArray(var424, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var425)->values[0] = (val*) var414;
((struct instance_array__NativeArray*)var425)->values[1] = (val*) var_tag412;
((struct instance_array__NativeArray*)var425)->values[2] = (val*) var419;
((void (*)(val*, val*, long))(var423->class->vft[COLOR_array__Array__with_native]))(var423, var425, var424) /* with_native on <var423:Array[Object]>*/;
}
var426 = ((val* (*)(val*))(var423->class->vft[COLOR_string__Object__to_s]))(var423) /* to_s on <var423:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var426) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce427) {
var428 = varonce427;
} else {
var429 = "count_type_test_total_";
var430 = 22;
var431 = string__NativeString__to_s_with_length(var429, var430);
var428 = var431;
varonce427 = var428;
}
if (varonce432) {
var433 = varonce432;
} else {
var434 = " = count_type_test_resolved_";
var435 = 28;
var436 = string__NativeString__to_s_with_length(var434, var435);
var433 = var436;
varonce432 = var433;
}
if (varonce437) {
var438 = varonce437;
} else {
var439 = " + count_type_test_unresolved_";
var440 = 30;
var441 = string__NativeString__to_s_with_length(var439, var440);
var438 = var441;
varonce437 = var438;
}
if (varonce442) {
var443 = varonce442;
} else {
var444 = " + count_type_test_skipped_";
var445 = 27;
var446 = string__NativeString__to_s_with_length(var444, var445);
var443 = var446;
varonce442 = var443;
}
if (varonce447) {
var448 = varonce447;
} else {
var449 = ";";
var450 = 1;
var451 = string__NativeString__to_s_with_length(var449, var450);
var448 = var451;
varonce447 = var448;
}
var452 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var452 = array_instance Array[Object] */
var453 = 9;
var454 = NEW_array__NativeArray(var453, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var454)->values[0] = (val*) var428;
((struct instance_array__NativeArray*)var454)->values[1] = (val*) var_tag412;
((struct instance_array__NativeArray*)var454)->values[2] = (val*) var433;
((struct instance_array__NativeArray*)var454)->values[3] = (val*) var_tag412;
((struct instance_array__NativeArray*)var454)->values[4] = (val*) var438;
((struct instance_array__NativeArray*)var454)->values[5] = (val*) var_tag412;
((struct instance_array__NativeArray*)var454)->values[6] = (val*) var443;
((struct instance_array__NativeArray*)var454)->values[7] = (val*) var_tag412;
((struct instance_array__NativeArray*)var454)->values[8] = (val*) var448;
((void (*)(val*, val*, long))(var452->class->vft[COLOR_array__Array__with_native]))(var452, var454, var453) /* with_native on <var452:Array[Object]>*/;
}
var455 = ((val* (*)(val*))(var452->class->vft[COLOR_string__Object__to_s]))(var452) /* to_s on <var452:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var455) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce456) {
var457 = varonce456;
} else {
var458 = "count_type_test_resolved_total += count_type_test_resolved_";
var459 = 59;
var460 = string__NativeString__to_s_with_length(var458, var459);
var457 = var460;
varonce456 = var457;
}
if (varonce461) {
var462 = varonce461;
} else {
var463 = ";";
var464 = 1;
var465 = string__NativeString__to_s_with_length(var463, var464);
var462 = var465;
varonce461 = var462;
}
var466 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var466 = array_instance Array[Object] */
var467 = 3;
var468 = NEW_array__NativeArray(var467, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var468)->values[0] = (val*) var457;
((struct instance_array__NativeArray*)var468)->values[1] = (val*) var_tag412;
((struct instance_array__NativeArray*)var468)->values[2] = (val*) var462;
((void (*)(val*, val*, long))(var466->class->vft[COLOR_array__Array__with_native]))(var466, var468, var467) /* with_native on <var466:Array[Object]>*/;
}
var469 = ((val* (*)(val*))(var466->class->vft[COLOR_string__Object__to_s]))(var466) /* to_s on <var466:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var469) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce470) {
var471 = varonce470;
} else {
var472 = "count_type_test_unresolved_total += count_type_test_unresolved_";
var473 = 63;
var474 = string__NativeString__to_s_with_length(var472, var473);
var471 = var474;
varonce470 = var471;
}
if (varonce475) {
var476 = varonce475;
} else {
var477 = ";";
var478 = 1;
var479 = string__NativeString__to_s_with_length(var477, var478);
var476 = var479;
varonce475 = var476;
}
var480 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var480 = array_instance Array[Object] */
var481 = 3;
var482 = NEW_array__NativeArray(var481, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var482)->values[0] = (val*) var471;
((struct instance_array__NativeArray*)var482)->values[1] = (val*) var_tag412;
((struct instance_array__NativeArray*)var482)->values[2] = (val*) var476;
((void (*)(val*, val*, long))(var480->class->vft[COLOR_array__Array__with_native]))(var480, var482, var481) /* with_native on <var480:Array[Object]>*/;
}
var483 = ((val* (*)(val*))(var480->class->vft[COLOR_string__Object__to_s]))(var480) /* to_s on <var480:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var483) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce484) {
var485 = varonce484;
} else {
var486 = "count_type_test_skipped_total += count_type_test_skipped_";
var487 = 57;
var488 = string__NativeString__to_s_with_length(var486, var487);
var485 = var488;
varonce484 = var485;
}
if (varonce489) {
var490 = varonce489;
} else {
var491 = ";";
var492 = 1;
var493 = string__NativeString__to_s_with_length(var491, var492);
var490 = var493;
varonce489 = var490;
}
var494 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var494 = array_instance Array[Object] */
var495 = 3;
var496 = NEW_array__NativeArray(var495, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var496)->values[0] = (val*) var485;
((struct instance_array__NativeArray*)var496)->values[1] = (val*) var_tag412;
((struct instance_array__NativeArray*)var496)->values[2] = (val*) var490;
((void (*)(val*, val*, long))(var494->class->vft[COLOR_array__Array__with_native]))(var494, var496, var495) /* with_native on <var494:Array[Object]>*/;
}
var497 = ((val* (*)(val*))(var494->class->vft[COLOR_string__Object__to_s]))(var494) /* to_s on <var494:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var497) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce498) {
var499 = varonce498;
} else {
var500 = "count_type_test_total_total += count_type_test_total_";
var501 = 53;
var502 = string__NativeString__to_s_with_length(var500, var501);
var499 = var502;
varonce498 = var499;
}
if (varonce503) {
var504 = varonce503;
} else {
var505 = ";";
var506 = 1;
var507 = string__NativeString__to_s_with_length(var505, var506);
var504 = var507;
varonce503 = var504;
}
var508 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var508 = array_instance Array[Object] */
var509 = 3;
var510 = NEW_array__NativeArray(var509, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var510)->values[0] = (val*) var499;
((struct instance_array__NativeArray*)var510)->values[1] = (val*) var_tag412;
((struct instance_array__NativeArray*)var510)->values[2] = (val*) var504;
((void (*)(val*, val*, long))(var508->class->vft[COLOR_array__Array__with_native]))(var508, var510, var509) /* with_native on <var508:Array[Object]>*/;
}
var511 = ((val* (*)(val*))(var508->class->vft[COLOR_string__Object__to_s]))(var508) /* to_s on <var508:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var511) /* add on <var_v:AbstractCompilerVisitor>*/;
CONTINUE_label512: (void)0;
((void (*)(val*))(var409->class->vft[COLOR_abstract_collection__Iterator__next]))(var409) /* next on <var409:Iterator[nullable Object]>*/;
}
BREAK_label512: (void)0;
if (varonce513) {
var514 = varonce513;
} else {
var515 = "printf(\"# dynamic count_type_test: total %l\\n\");";
var516 = 48;
var517 = string__NativeString__to_s_with_length(var515, var516);
var514 = var517;
varonce513 = var514;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var514) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce518) {
var519 = varonce518;
} else {
var520 = "printf(\"\\tresolved\\tunresolved\\tskipped\\ttotal\\n\");";
var521 = 51;
var522 = string__NativeString__to_s_with_length(var520, var521);
var519 = var522;
varonce518 = var519;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var519) /* add on <var_v:AbstractCompilerVisitor>*/;
var523 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__count_type_test_tags]))(self) /* count_type_test_tags on <self:AbstractCompiler>*/;
var524 = ((val* (*)(val*))(var523->class->vft[COLOR_array__Collection__to_a]))(var523) /* to_a on <var523:Array[String]>*/;
var_tags = var524;
if (varonce525) {
var526 = varonce525;
} else {
var527 = "total";
var528 = 5;
var529 = string__NativeString__to_s_with_length(var527, var528);
var526 = var529;
varonce525 = var526;
}
((void (*)(val*, val*))(var_tags->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_tags, var526) /* add on <var_tags:Array[String]>*/;
var530 = ((val* (*)(val*))(var_tags->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_tags) /* iterator on <var_tags:Array[String]>*/;
for(;;) {
var531 = ((short int (*)(val*))(var530->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var530) /* is_ok on <var530:Iterator[nullable Object]>*/;
if(!var531) break;
var532 = ((val* (*)(val*))(var530->class->vft[COLOR_abstract_collection__Iterator__item]))(var530) /* item on <var530:Iterator[nullable Object]>*/;
var_tag533 = var532;
if (varonce534) {
var535 = varonce534;
} else {
var536 = "printf(\"";
var537 = 8;
var538 = string__NativeString__to_s_with_length(var536, var537);
var535 = var538;
varonce534 = var535;
}
if (varonce539) {
var540 = varonce539;
} else {
var541 = "\");";
var542 = 3;
var543 = string__NativeString__to_s_with_length(var541, var542);
var540 = var543;
varonce539 = var540;
}
var544 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var544 = array_instance Array[Object] */
var545 = 3;
var546 = NEW_array__NativeArray(var545, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var546)->values[0] = (val*) var535;
((struct instance_array__NativeArray*)var546)->values[1] = (val*) var_tag533;
((struct instance_array__NativeArray*)var546)->values[2] = (val*) var540;
((void (*)(val*, val*, long))(var544->class->vft[COLOR_array__Array__with_native]))(var544, var546, var545) /* with_native on <var544:Array[Object]>*/;
}
var547 = ((val* (*)(val*))(var544->class->vft[COLOR_string__Object__to_s]))(var544) /* to_s on <var544:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var547) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce548) {
var549 = varonce548;
} else {
var550 = "printf(\"\\t%ld (%.2f%%)\", count_type_test_resolved_";
var551 = 50;
var552 = string__NativeString__to_s_with_length(var550, var551);
var549 = var552;
varonce548 = var549;
}
if (varonce553) {
var554 = varonce553;
} else {
var555 = ", 100.0*count_type_test_resolved_";
var556 = 33;
var557 = string__NativeString__to_s_with_length(var555, var556);
var554 = var557;
varonce553 = var554;
}
if (varonce558) {
var559 = varonce558;
} else {
var560 = "/count_type_test_total_total);";
var561 = 30;
var562 = string__NativeString__to_s_with_length(var560, var561);
var559 = var562;
varonce558 = var559;
}
var563 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var563 = array_instance Array[Object] */
var564 = 5;
var565 = NEW_array__NativeArray(var564, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var565)->values[0] = (val*) var549;
((struct instance_array__NativeArray*)var565)->values[1] = (val*) var_tag533;
((struct instance_array__NativeArray*)var565)->values[2] = (val*) var554;
((struct instance_array__NativeArray*)var565)->values[3] = (val*) var_tag533;
((struct instance_array__NativeArray*)var565)->values[4] = (val*) var559;
((void (*)(val*, val*, long))(var563->class->vft[COLOR_array__Array__with_native]))(var563, var565, var564) /* with_native on <var563:Array[Object]>*/;
}
var566 = ((val* (*)(val*))(var563->class->vft[COLOR_string__Object__to_s]))(var563) /* to_s on <var563:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var566) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce567) {
var568 = varonce567;
} else {
var569 = "printf(\"\\t%ld (%.2f%%)\", count_type_test_unresolved_";
var570 = 52;
var571 = string__NativeString__to_s_with_length(var569, var570);
var568 = var571;
varonce567 = var568;
}
if (varonce572) {
var573 = varonce572;
} else {
var574 = ", 100.0*count_type_test_unresolved_";
var575 = 35;
var576 = string__NativeString__to_s_with_length(var574, var575);
var573 = var576;
varonce572 = var573;
}
if (varonce577) {
var578 = varonce577;
} else {
var579 = "/count_type_test_total_total);";
var580 = 30;
var581 = string__NativeString__to_s_with_length(var579, var580);
var578 = var581;
varonce577 = var578;
}
var582 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var582 = array_instance Array[Object] */
var583 = 5;
var584 = NEW_array__NativeArray(var583, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var584)->values[0] = (val*) var568;
((struct instance_array__NativeArray*)var584)->values[1] = (val*) var_tag533;
((struct instance_array__NativeArray*)var584)->values[2] = (val*) var573;
((struct instance_array__NativeArray*)var584)->values[3] = (val*) var_tag533;
((struct instance_array__NativeArray*)var584)->values[4] = (val*) var578;
((void (*)(val*, val*, long))(var582->class->vft[COLOR_array__Array__with_native]))(var582, var584, var583) /* with_native on <var582:Array[Object]>*/;
}
var585 = ((val* (*)(val*))(var582->class->vft[COLOR_string__Object__to_s]))(var582) /* to_s on <var582:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var585) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce586) {
var587 = varonce586;
} else {
var588 = "printf(\"\\t%ld (%.2f%%)\", count_type_test_skipped_";
var589 = 49;
var590 = string__NativeString__to_s_with_length(var588, var589);
var587 = var590;
varonce586 = var587;
}
if (varonce591) {
var592 = varonce591;
} else {
var593 = ", 100.0*count_type_test_skipped_";
var594 = 32;
var595 = string__NativeString__to_s_with_length(var593, var594);
var592 = var595;
varonce591 = var592;
}
if (varonce596) {
var597 = varonce596;
} else {
var598 = "/count_type_test_total_total);";
var599 = 30;
var600 = string__NativeString__to_s_with_length(var598, var599);
var597 = var600;
varonce596 = var597;
}
var601 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var601 = array_instance Array[Object] */
var602 = 5;
var603 = NEW_array__NativeArray(var602, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var603)->values[0] = (val*) var587;
((struct instance_array__NativeArray*)var603)->values[1] = (val*) var_tag533;
((struct instance_array__NativeArray*)var603)->values[2] = (val*) var592;
((struct instance_array__NativeArray*)var603)->values[3] = (val*) var_tag533;
((struct instance_array__NativeArray*)var603)->values[4] = (val*) var597;
((void (*)(val*, val*, long))(var601->class->vft[COLOR_array__Array__with_native]))(var601, var603, var602) /* with_native on <var601:Array[Object]>*/;
}
var604 = ((val* (*)(val*))(var601->class->vft[COLOR_string__Object__to_s]))(var601) /* to_s on <var601:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var604) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce605) {
var606 = varonce605;
} else {
var607 = "printf(\"\\t%ld (%.2f%%)\\n\", count_type_test_total_";
var608 = 49;
var609 = string__NativeString__to_s_with_length(var607, var608);
var606 = var609;
varonce605 = var606;
}
if (varonce610) {
var611 = varonce610;
} else {
var612 = ", 100.0*count_type_test_total_";
var613 = 30;
var614 = string__NativeString__to_s_with_length(var612, var613);
var611 = var614;
varonce610 = var611;
}
if (varonce615) {
var616 = varonce615;
} else {
var617 = "/count_type_test_total_total);";
var618 = 30;
var619 = string__NativeString__to_s_with_length(var617, var618);
var616 = var619;
varonce615 = var616;
}
var620 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var620 = array_instance Array[Object] */
var621 = 5;
var622 = NEW_array__NativeArray(var621, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var622)->values[0] = (val*) var606;
((struct instance_array__NativeArray*)var622)->values[1] = (val*) var_tag533;
((struct instance_array__NativeArray*)var622)->values[2] = (val*) var611;
((struct instance_array__NativeArray*)var622)->values[3] = (val*) var_tag533;
((struct instance_array__NativeArray*)var622)->values[4] = (val*) var616;
((void (*)(val*, val*, long))(var620->class->vft[COLOR_array__Array__with_native]))(var620, var622, var621) /* with_native on <var620:Array[Object]>*/;
}
var623 = ((val* (*)(val*))(var620->class->vft[COLOR_string__Object__to_s]))(var620) /* to_s on <var620:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var623) /* add on <var_v:AbstractCompilerVisitor>*/;
CONTINUE_label624: (void)0;
((void (*)(val*))(var530->class->vft[COLOR_abstract_collection__Iterator__next]))(var530) /* next on <var530:Iterator[nullable Object]>*/;
}
BREAK_label624: (void)0;
} else {
}
if (varonce625) {
var626 = varonce625;
} else {
var627 = "return 0;";
var628 = 9;
var629 = string__NativeString__to_s_with_length(var627, var628);
var626 = var629;
varonce625 = var626;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var626) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce630) {
var631 = varonce630;
} else {
var632 = "}";
var633 = 1;
var634 = string__NativeString__to_s_with_length(var632, var633);
var631 = var634;
varonce630 = var631;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var631) /* add on <var_v:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#compile_main_function for (self: Object) */
void VIRTUAL_abstract_compiler__AbstractCompiler__compile_main_function(val* self) {
abstract_compiler__AbstractCompiler__compile_main_function(self);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#extern_bodies for (self: AbstractCompiler): Array[ExternCFile] */
val* abstract_compiler__AbstractCompiler__extern_bodies(val* self) {
val* var /* : Array[ExternCFile] */;
val* var1 /* : Array[ExternCFile] */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dextern_bodies].val; /* @extern_bodies on <self:AbstractCompiler> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @extern_bodies");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 508);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#extern_bodies for (self: Object): Array[ExternCFile] */
val* VIRTUAL_abstract_compiler__AbstractCompiler__extern_bodies(val* self) {
val* var /* : Array[ExternCFile] */;
val* var1 /* : Array[ExternCFile] */;
var1 = abstract_compiler__AbstractCompiler__extern_bodies(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#extern_bodies= for (self: AbstractCompiler, Array[ExternCFile]) */
void abstract_compiler__AbstractCompiler__extern_bodies_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dextern_bodies].val = p0; /* @extern_bodies on <self:AbstractCompiler> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#extern_bodies= for (self: Object, Array[ExternCFile]) */
void VIRTUAL_abstract_compiler__AbstractCompiler__extern_bodies_61d(val* self, val* p0) {
abstract_compiler__AbstractCompiler__extern_bodies_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#seen_extern for (self: AbstractCompiler): ArraySet[String] */
val* abstract_compiler__AbstractCompiler__seen_extern(val* self) {
val* var /* : ArraySet[String] */;
val* var1 /* : ArraySet[String] */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dseen_extern].val; /* @seen_extern on <self:AbstractCompiler> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @seen_extern");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 511);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 514);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 529);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 546);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 547);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 548);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 549);
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
/* method abstract_compiler#CodeFile#name for (self: CodeFile): String */
val* abstract_compiler__CodeFile__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_abstract_compiler__CodeFile___64dname].val; /* @name on <self:CodeFile> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @name");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 610);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 611);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 612);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 617);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 618);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 619);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 640);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 640);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 655);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 657);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 669);
show_backtrace(1);
}
var2 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:AbstractCompilerVisitor>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var2) /* modelbuilder on <var2:AbstractCompiler>*/;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node]))(self) /* current_node on <self:AbstractCompilerVisitor>*/;
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 670);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 678);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 680);
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
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 262);
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
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 262);
show_backtrace(1);
}
var19 = var7 >= var10;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 690);
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
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 723);
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
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 729);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 753);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 756);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 758);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 762);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 765);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 768);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 773);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 776);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 782);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 790);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 797);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 800);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 803);
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
var28 = "Reciever is null";
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
/* method abstract_compiler#AbstractCompilerVisitor#names for (self: AbstractCompilerVisitor): HashSet[String] */
val* abstract_compiler__AbstractCompilerVisitor__names(val* self) {
val* var /* : HashSet[String] */;
val* var1 /* : HashSet[String] */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dnames].val; /* @names on <self:AbstractCompilerVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @names");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 823);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#names for (self: Object): HashSet[String] */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__names(val* self) {
val* var /* : HashSet[String] */;
val* var1 /* : HashSet[String] */;
var1 = abstract_compiler__AbstractCompilerVisitor__names(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#names= for (self: AbstractCompilerVisitor, HashSet[String]) */
void abstract_compiler__AbstractCompilerVisitor__names_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dnames].val = p0; /* @names on <self:AbstractCompilerVisitor> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#names= for (self: Object, HashSet[String]) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__names_61d(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__names_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#last for (self: AbstractCompilerVisitor): Int */
long abstract_compiler__AbstractCompilerVisitor__last(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dlast].l; /* @last on <self:AbstractCompilerVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#last for (self: Object): Int */
long VIRTUAL_abstract_compiler__AbstractCompilerVisitor__last(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = abstract_compiler__AbstractCompilerVisitor__last(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#last= for (self: AbstractCompilerVisitor, Int) */
void abstract_compiler__AbstractCompilerVisitor__last_61d(val* self, long p0) {
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dlast].l = p0; /* @last on <self:AbstractCompilerVisitor> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#last= for (self: Object, Int) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__last_61d(val* self, long p0) {
abstract_compiler__AbstractCompilerVisitor__last_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#get_name for (self: AbstractCompilerVisitor, String): String */
val* abstract_compiler__AbstractCompilerVisitor__get_name(val* self, val* p0) {
val* var /* : String */;
val* var_s /* var s: String */;
val* var1 /* : HashSet[String] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : HashSet[String] */;
long var5 /* : Int */;
long var6 /* : Int */;
long var7 /* : Int */;
long var9 /* : Int */;
long var_i /* var i: Int */;
val* var10 /* : String */;
val* var11 /* : String */;
val* var_s2 /* var s2: String */;
val* var12 /* : HashSet[String] */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : HashSet[String] */;
long var16 /* : Int */;
long var17 /* : Int */;
long var19 /* : Int */;
var_s = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__names]))(self) /* names on <self:AbstractCompilerVisitor>*/;
var2 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__Collection__has]))(var1, var_s) /* has on <var1:HashSet[String]>*/;
var3 = !var2;
if (var3){
var4 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__names]))(self) /* names on <self:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var4->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var4, var_s) /* add on <var4:HashSet[String]>*/;
var = var_s;
goto RET_LABEL;
} else {
}
var5 = ((long (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__last]))(self) /* last on <self:AbstractCompilerVisitor>*/;
var6 = 1;
{ /* Inline kernel#Int#+ (var5,var6) */
var9 = var5 + var6;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var_i = var7;
for(;;) {
var10 = string__Int__to_s(var_i);
var11 = ((val* (*)(val*, val*))(var_s->class->vft[COLOR_string__String___43d]))(var_s, var10) /* + on <var_s:String>*/;
var_s2 = var11;
var12 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__names]))(self) /* names on <self:AbstractCompilerVisitor>*/;
var13 = ((short int (*)(val*, val*))(var12->class->vft[COLOR_abstract_collection__Collection__has]))(var12, var_s2) /* has on <var12:HashSet[String]>*/;
var14 = !var13;
if (var14){
((void (*)(val*, long))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__last_61d]))(self, var_i) /* last= on <self:AbstractCompilerVisitor>*/;
var15 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__names]))(self) /* names on <self:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var15->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var15, var_s2) /* add on <var15:HashSet[String]>*/;
var = var_s2;
goto RET_LABEL;
} else {
}
var16 = 1;
{ /* Inline kernel#Int#+ (var_i,var16) */
var19 = var_i + var16;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var_i = var17;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#get_name for (self: Object, String): String */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__get_name(val* self, val* p0) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__AbstractCompilerVisitor__get_name(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#escapemark_name for (self: AbstractCompilerVisitor, nullable EscapeMark): String */
val* abstract_compiler__AbstractCompilerVisitor__escapemark_name(val* self, val* p0) {
val* var /* : String */;
val* var_e /* var e: nullable EscapeMark */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : HashMap[EscapeMark, String] */;
short int var4 /* : Bool */;
val* var5 /* : HashMap[EscapeMark, String] */;
val* var6 /* : nullable Object */;
val* var7 /* : nullable String */;
val* var_name /* var name: nullable String */;
val* var8 /* : null */;
short int var9 /* : Bool */;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var15 /* : HashMap[EscapeMark, String] */;
var_e = p0;
var1 = NULL;
if (var_e == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 848);
show_backtrace(1);
}
var3 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__escapemark_names]))(self) /* escapemark_names on <self:AbstractCompilerVisitor>*/;
var4 = ((short int (*)(val*, val*))(var3->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var3, var_e) /* has_key on <var3:HashMap[EscapeMark, String]>*/;
if (var4){
var5 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__escapemark_names]))(self) /* escapemark_names on <self:AbstractCompilerVisitor>*/;
var6 = ((val* (*)(val*, val*))(var5->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var5, var_e) /* [] on <var5:HashMap[EscapeMark, String]>*/;
var = var6;
goto RET_LABEL;
} else {
}
var7 = ((val* (*)(val*))(var_e->class->vft[COLOR_scope__EscapeMark__name]))(var_e) /* name on <var_e:nullable EscapeMark(EscapeMark)>*/;
var_name = var7;
var8 = NULL;
if (var_name == NULL) {
var9 = 1; /* is null */
} else {
var9 = 0; /* arg is null but recv is not */
}
if (var9){
if (varonce) {
var10 = varonce;
} else {
var11 = "label";
var12 = 5;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce = var10;
}
var_name = var10;
} else {
}
var14 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_name]))(self, var_name) /* get_name on <self:AbstractCompilerVisitor>*/;
var_name = var14;
var15 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__escapemark_names]))(self) /* escapemark_names on <self:AbstractCompilerVisitor>*/;
((void (*)(val*, val*, val*))(var15->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var15, var_e, var_name) /* []= on <var15:HashMap[EscapeMark, String]>*/;
var = var_name;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#escapemark_name for (self: Object, nullable EscapeMark): String */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__escapemark_name(val* self, val* p0) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__AbstractCompilerVisitor__escapemark_name(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#escapemark_names for (self: AbstractCompilerVisitor): HashMap[EscapeMark, String] */
val* abstract_compiler__AbstractCompilerVisitor__escapemark_names(val* self) {
val* var /* : HashMap[EscapeMark, String] */;
val* var1 /* : HashMap[EscapeMark, String] */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64descapemark_names].val; /* @escapemark_names on <self:AbstractCompilerVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @escapemark_names");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 857);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#escapemark_names for (self: Object): HashMap[EscapeMark, String] */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__escapemark_names(val* self) {
val* var /* : HashMap[EscapeMark, String] */;
val* var1 /* : HashMap[EscapeMark, String] */;
var1 = abstract_compiler__AbstractCompilerVisitor__escapemark_names(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#escapemark_names= for (self: AbstractCompilerVisitor, HashMap[EscapeMark, String]) */
void abstract_compiler__AbstractCompilerVisitor__escapemark_names_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64descapemark_names].val = p0; /* @escapemark_names on <self:AbstractCompilerVisitor> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#escapemark_names= for (self: Object, HashMap[EscapeMark, String]) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__escapemark_names_61d(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__escapemark_names_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#class_name_string for (self: AbstractCompilerVisitor, RuntimeVariable): String */
val* abstract_compiler__AbstractCompilerVisitor__class_name_string(val* self, val* p0) {
val* var /* : String */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "class_name_string", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 859);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#class_name_string for (self: Object, RuntimeVariable): String */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__class_name_string(val* self, val* p0) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__AbstractCompilerVisitor__class_name_string(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#variables for (self: AbstractCompilerVisitor): HashMap[Variable, RuntimeVariable] */
val* abstract_compiler__AbstractCompilerVisitor__variables(val* self) {
val* var /* : HashMap[Variable, RuntimeVariable] */;
val* var1 /* : HashMap[Variable, RuntimeVariable] */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dvariables].val; /* @variables on <self:AbstractCompilerVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @variables");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 865);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#variables for (self: Object): HashMap[Variable, RuntimeVariable] */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__variables(val* self) {
val* var /* : HashMap[Variable, RuntimeVariable] */;
val* var1 /* : HashMap[Variable, RuntimeVariable] */;
var1 = abstract_compiler__AbstractCompilerVisitor__variables(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#variables= for (self: AbstractCompilerVisitor, HashMap[Variable, RuntimeVariable]) */
void abstract_compiler__AbstractCompilerVisitor__variables_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dvariables].val = p0; /* @variables on <self:AbstractCompilerVisitor> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#variables= for (self: Object, HashMap[Variable, RuntimeVariable]) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__variables_61d(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__variables_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#variable for (self: AbstractCompilerVisitor, Variable): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__variable(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_variable /* var variable: Variable */;
val* var1 /* : HashMap[Variable, RuntimeVariable] */;
short int var2 /* : Bool */;
val* var3 /* : HashMap[Variable, RuntimeVariable] */;
val* var4 /* : nullable Object */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : String */;
val* var9 /* : String */;
val* var10 /* : Array[Object] */;
long var11 /* : Int */;
val* var12 /* : NativeArray[Object] */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var_name /* var name: String */;
val* var15 /* : nullable MType */;
val* var_mtype /* var mtype: MType */;
val* var16 /* : MType */;
val* var17 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var18 /* : String */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : String */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : String */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : String */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : String */;
val* var39 /* : Array[Object] */;
long var40 /* : Int */;
val* var41 /* : NativeArray[Object] */;
val* var42 /* : String */;
val* var43 /* : HashMap[Variable, RuntimeVariable] */;
var_variable = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__variables]))(self) /* variables on <self:AbstractCompilerVisitor>*/;
var2 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var1, var_variable) /* has_key on <var1:HashMap[Variable, RuntimeVariable]>*/;
if (var2){
var3 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__variables]))(self) /* variables on <self:AbstractCompilerVisitor>*/;
var4 = ((val* (*)(val*, val*))(var3->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var3, var_variable) /* [] on <var3:HashMap[Variable, RuntimeVariable]>*/;
var = var4;
goto RET_LABEL;
} else {
if (varonce) {
var5 = varonce;
} else {
var6 = "var_";
var7 = 4;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
var9 = ((val* (*)(val*))(var_variable->class->vft[COLOR_scope__Variable__name]))(var_variable) /* name on <var_variable:Variable>*/;
var10 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var10 = array_instance Array[Object] */
var11 = 2;
var12 = NEW_array__NativeArray(var11, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var12)->values[0] = (val*) var5;
((struct instance_array__NativeArray*)var12)->values[1] = (val*) var9;
((void (*)(val*, val*, long))(var10->class->vft[COLOR_array__Array__with_native]))(var10, var12, var11) /* with_native on <var10:Array[Object]>*/;
}
var13 = ((val* (*)(val*))(var10->class->vft[COLOR_string__Object__to_s]))(var10) /* to_s on <var10:Array[Object]>*/;
var14 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_name]))(self, var13) /* get_name on <self:AbstractCompilerVisitor>*/;
var_name = var14;
var15 = ((val* (*)(val*))(var_variable->class->vft[COLOR_typing__Variable__declared_type]))(var_variable) /* declared_type on <var_variable:Variable>*/;
if (var15 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 874);
show_backtrace(1);
}
var_mtype = var15;
var16 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__anchor]))(self, var_mtype) /* anchor on <self:AbstractCompilerVisitor>*/;
var_mtype = var16;
var17 = NEW_abstract_compiler__RuntimeVariable(&type_abstract_compiler__RuntimeVariable);
((void (*)(val*, val*, val*, val*))(var17->class->vft[COLOR_abstract_compiler__RuntimeVariable__init]))(var17, var_name, var_mtype, var_mtype) /* init on <var17:RuntimeVariable>*/;
var_res = var17;
var18 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
if (varonce19) {
var20 = varonce19;
} else {
var21 = " ";
var22 = 1;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
if (varonce24) {
var25 = varonce24;
} else {
var26 = " /* var ";
var27 = 8;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
if (varonce29) {
var30 = varonce29;
} else {
var31 = ": ";
var32 = 2;
var33 = string__NativeString__to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
if (varonce34) {
var35 = varonce34;
} else {
var36 = " */;";
var37 = 4;
var38 = string__NativeString__to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
var39 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var39 = array_instance Array[Object] */
var40 = 8;
var41 = NEW_array__NativeArray(var40, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var41)->values[0] = (val*) var18;
((struct instance_array__NativeArray*)var41)->values[1] = (val*) var20;
((struct instance_array__NativeArray*)var41)->values[2] = (val*) var_name;
((struct instance_array__NativeArray*)var41)->values[3] = (val*) var25;
((struct instance_array__NativeArray*)var41)->values[4] = (val*) var_variable;
((struct instance_array__NativeArray*)var41)->values[5] = (val*) var30;
((struct instance_array__NativeArray*)var41)->values[6] = (val*) var_mtype;
((struct instance_array__NativeArray*)var41)->values[7] = (val*) var35;
((void (*)(val*, val*, long))(var39->class->vft[COLOR_array__Array__with_native]))(var39, var41, var40) /* with_native on <var39:Array[Object]>*/;
}
var42 = ((val* (*)(val*))(var39->class->vft[COLOR_string__Object__to_s]))(var39) /* to_s on <var39:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(self, var42) /* add_decl on <self:AbstractCompilerVisitor>*/;
var43 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__variables]))(self) /* variables on <self:AbstractCompilerVisitor>*/;
((void (*)(val*, val*, val*))(var43->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var43, var_variable, var_res) /* []= on <var43:HashMap[Variable, RuntimeVariable]>*/;
var = var_res;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#variable for (self: Object, Variable): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__variable(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__variable(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#new_var for (self: AbstractCompilerVisitor, MType): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__new_var(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : MType */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
val* var6 /* : String */;
val* var_name /* var name: String */;
val* var7 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var8 /* : String */;
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
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : String */;
val* var24 /* : Array[Object] */;
long var25 /* : Int */;
val* var26 /* : NativeArray[Object] */;
val* var27 /* : String */;
var_mtype = p0;
var1 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__anchor]))(self, var_mtype) /* anchor on <self:AbstractCompilerVisitor>*/;
var_mtype = var1;
if (varonce) {
var2 = varonce;
} else {
var3 = "var";
var4 = 3;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
var6 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_name]))(self, var2) /* get_name on <self:AbstractCompilerVisitor>*/;
var_name = var6;
var7 = NEW_abstract_compiler__RuntimeVariable(&type_abstract_compiler__RuntimeVariable);
((void (*)(val*, val*, val*, val*))(var7->class->vft[COLOR_abstract_compiler__RuntimeVariable__init]))(var7, var_name, var_mtype, var_mtype) /* init on <var7:RuntimeVariable>*/;
var_res = var7;
var8 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
if (varonce9) {
var10 = varonce9;
} else {
var11 = " ";
var12 = 1;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
if (varonce14) {
var15 = varonce14;
} else {
var16 = " /* : ";
var17 = 6;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
if (varonce19) {
var20 = varonce19;
} else {
var21 = " */;";
var22 = 4;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
var24 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var24 = array_instance Array[Object] */
var25 = 6;
var26 = NEW_array__NativeArray(var25, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var26)->values[0] = (val*) var8;
((struct instance_array__NativeArray*)var26)->values[1] = (val*) var10;
((struct instance_array__NativeArray*)var26)->values[2] = (val*) var_name;
((struct instance_array__NativeArray*)var26)->values[3] = (val*) var15;
((struct instance_array__NativeArray*)var26)->values[4] = (val*) var_mtype;
((struct instance_array__NativeArray*)var26)->values[5] = (val*) var20;
((void (*)(val*, val*, long))(var24->class->vft[COLOR_array__Array__with_native]))(var24, var26, var25) /* with_native on <var24:Array[Object]>*/;
}
var27 = ((val* (*)(val*))(var24->class->vft[COLOR_string__Object__to_s]))(var24) /* to_s on <var24:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(self, var27) /* add_decl on <self:AbstractCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#new_var for (self: Object, MType): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__new_var(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__new_var(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#new_named_var for (self: AbstractCompilerVisitor, MType, String): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__new_named_var(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
val* var_name /* var name: String */;
val* var1 /* : MType */;
val* var2 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var3 /* : String */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : String */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : String */;
val* var18 /* : Array[Object] */;
long var19 /* : Int */;
val* var20 /* : NativeArray[Object] */;
val* var21 /* : String */;
var_mtype = p0;
var_name = p1;
var1 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__anchor]))(self, var_mtype) /* anchor on <self:AbstractCompilerVisitor>*/;
var_mtype = var1;
var2 = NEW_abstract_compiler__RuntimeVariable(&type_abstract_compiler__RuntimeVariable);
((void (*)(val*, val*, val*, val*))(var2->class->vft[COLOR_abstract_compiler__RuntimeVariable__init]))(var2, var_name, var_mtype, var_mtype) /* init on <var2:RuntimeVariable>*/;
var_res = var2;
var3 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
if (varonce) {
var4 = varonce;
} else {
var5 = " ";
var6 = 1;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
if (varonce8) {
var9 = varonce8;
} else {
var10 = " /* : ";
var11 = 6;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
if (varonce13) {
var14 = varonce13;
} else {
var15 = " */;";
var16 = 4;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
var18 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var18 = array_instance Array[Object] */
var19 = 6;
var20 = NEW_array__NativeArray(var19, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var20)->values[0] = (val*) var3;
((struct instance_array__NativeArray*)var20)->values[1] = (val*) var4;
((struct instance_array__NativeArray*)var20)->values[2] = (val*) var_name;
((struct instance_array__NativeArray*)var20)->values[3] = (val*) var9;
((struct instance_array__NativeArray*)var20)->values[4] = (val*) var_mtype;
((struct instance_array__NativeArray*)var20)->values[5] = (val*) var14;
((void (*)(val*, val*, long))(var18->class->vft[COLOR_array__Array__with_native]))(var18, var20, var19) /* with_native on <var18:Array[Object]>*/;
}
var21 = ((val* (*)(val*))(var18->class->vft[COLOR_string__Object__to_s]))(var18) /* to_s on <var18:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(self, var21) /* add_decl on <self:AbstractCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#new_named_var for (self: Object, MType, String): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__new_named_var(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__new_named_var(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#assign for (self: AbstractCompilerVisitor, RuntimeVariable, RuntimeVariable) */
void abstract_compiler__AbstractCompilerVisitor__assign(val* self, val* p0, val* p1) {
val* var_left /* var left: RuntimeVariable */;
val* var_right /* var right: RuntimeVariable */;
val* var /* : MType */;
val* var1 /* : RuntimeVariable */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
val* var11 /* : Array[Object] */;
long var12 /* : Int */;
val* var13 /* : NativeArray[Object] */;
val* var14 /* : String */;
var_left = p0;
var_right = p1;
var = ((val* (*)(val*))(var_left->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_left) /* mtype on <var_left:RuntimeVariable>*/;
var1 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__autobox]))(self, var_right, var) /* autobox on <self:AbstractCompilerVisitor>*/;
var_right = var1;
if (varonce) {
var2 = varonce;
} else {
var3 = " = ";
var4 = 3;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
if (varonce6) {
var7 = varonce6;
} else {
var8 = ";";
var9 = 1;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var11 = array_instance Array[Object] */
var12 = 4;
var13 = NEW_array__NativeArray(var12, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var13)->values[0] = (val*) var_left;
((struct instance_array__NativeArray*)var13)->values[1] = (val*) var2;
((struct instance_array__NativeArray*)var13)->values[2] = (val*) var_right;
((struct instance_array__NativeArray*)var13)->values[3] = (val*) var7;
((void (*)(val*, val*, long))(var11->class->vft[COLOR_array__Array__with_native]))(var11, var13, var12) /* with_native on <var11:Array[Object]>*/;
}
var14 = ((val* (*)(val*))(var11->class->vft[COLOR_string__Object__to_s]))(var11) /* to_s on <var11:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var14) /* add on <self:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#assign for (self: Object, RuntimeVariable, RuntimeVariable) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__assign(val* self, val* p0, val* p1) {
abstract_compiler__AbstractCompilerVisitor__assign(self, p0, p1);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#init_instance for (self: AbstractCompilerVisitor, MClassType): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__init_instance(val* self, val* p0) {
val* var /* : RuntimeVariable */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "init_instance", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 912);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#init_instance for (self: Object, MClassType): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__init_instance(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__init_instance(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#int_instance for (self: AbstractCompilerVisitor, Int): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__int_instance(val* self, long p0) {
val* var /* : RuntimeVariable */;
long var_value /* var value: Int */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
val* var5 /* : MClass */;
val* var6 /* : MClassType */;
val* var7 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : String */;
val* var18 /* : Array[Object] */;
long var19 /* : Int */;
val* var20 /* : NativeArray[Object] */;
val* var21 /* : Object */;
val* var22 /* : String */;
var_value = p0;
if (varonce) {
var1 = varonce;
} else {
var2 = "Int";
var3 = 3;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var5 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_class]))(self, var1) /* get_class on <self:AbstractCompilerVisitor>*/;
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_model__MClass__mclass_type]))(var5) /* mclass_type on <var5:MClass>*/;
var7 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(self, var6) /* new_var on <self:AbstractCompilerVisitor>*/;
var_res = var7;
if (varonce8) {
var9 = varonce8;
} else {
var10 = " = ";
var11 = 3;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
if (varonce13) {
var14 = varonce13;
} else {
var15 = ";";
var16 = 1;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
var18 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var18 = array_instance Array[Object] */
var19 = 4;
var20 = NEW_array__NativeArray(var19, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var20)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var20)->values[1] = (val*) var9;
var21 = BOX_kernel__Int(var_value); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var20)->values[2] = (val*) var21;
((struct instance_array__NativeArray*)var20)->values[3] = (val*) var14;
((void (*)(val*, val*, long))(var18->class->vft[COLOR_array__Array__with_native]))(var18, var20, var19) /* with_native on <var18:Array[Object]>*/;
}
var22 = ((val* (*)(val*))(var18->class->vft[COLOR_string__Object__to_s]))(var18) /* to_s on <var18:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var22) /* add on <self:AbstractCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#int_instance for (self: Object, Int): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__int_instance(val* self, long p0) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__int_instance(self, p0);
var = var1;
RET_LABEL:;
return var;
}
