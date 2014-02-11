#include "abstract_compiler.sep.0.h"
/* method abstract_compiler#ToolContext#opt_output for (self: ToolContext): OptionString */
val* abstract_compiler__ToolContext__opt_output(val* self) {
val* var /* : OptionString */;
val* var1 /* : OptionString */;
var1 = self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_output].val; /* @opt_output on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @opt_output");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 27);
exit(1);
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
exit(1);
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
exit(1);
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
exit(1);
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
exit(1);
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
exit(1);
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
exit(1);
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
exit(1);
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
exit(1);
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
exit(1);
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
exit(1);
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
exit(1);
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
exit(1);
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
CHECK_NEW_array__Array(var7);
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
CHECK_NEW_array__Array(var16);
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
CHECK_NEW_array__Array(var21);
}
((void (*)(val*, val*))(var19->class->vft[COLOR_opts__OptionContext__add_option]))(var19, var21) /* add_option on <var19:OptionContext>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 64);
exit(1);
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
val* var51 /* : Array[String] */;
val* var52 /* : OptionArray */;
val* var53 /* : nullable Object */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
long var57 /* : Int */;
val* var58 /* : String */;
val* var59 /* : String */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
val* var62 /* : Array[String] */;
char var63 /* : Char */;
val* var64 /* : Array[String] */;
val* var65 /* : Pattern */;
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
CHECK_NEW_array__Array(var7);
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
CHECK_NEW_array__Array(var22);
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
var51 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__ModelBuilder__cc_paths]))(self) /* cc_paths on <self:ModelBuilder>*/;
var52 = ((val* (*)(val*))(var_toolcontext->class->vft[COLOR_abstract_compiler__ToolContext__opt_cc_path]))(var_toolcontext) /* opt_cc_path on <var_toolcontext:ToolContext>*/;
var53 = ((val* (*)(val*))(var52->class->vft[COLOR_opts__Option__value]))(var52) /* value on <var52:OptionArray>*/;
((void (*)(val*, val*))(var51->class->vft[COLOR_abstract_collection__Sequence__append]))(var51, var53) /* append on <var51:Array[String]>*/;
if (varonce54) {
var55 = varonce54;
} else {
var56 = "NIT_CC_PATH";
var57 = 11;
var58 = string__NativeString__to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
var59 = ((val* (*)(val*))(var55->class->vft[COLOR_environ__String__environ]))(var55) /* environ on <var55:String>*/;
var_path_env = var59;
var60 = ((short int (*)(val*))(var_path_env->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var_path_env) /* is_empty on <var_path_env:String>*/;
var61 = !var60;
if (var61){
var62 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__ModelBuilder__cc_paths]))(self) /* cc_paths on <self:ModelBuilder>*/;
var63 = ':';
var65 = BOX_kernel__Char(var63); /* autobox from Char to Pattern */
var64 = ((val* (*)(val*, val*))(var_path_env->class->vft[COLOR_string_search__String__split_with]))(var_path_env, var65) /* split_with on <var_path_env:String>*/;
((void (*)(val*, val*))(var62->class->vft[COLOR_abstract_collection__Sequence__append]))(var62, var64) /* append on <var62:Array[String]>*/;
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
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : String */;
val* var_orig_dir /* var orig_dir: String */;
val* var23 /* : ToolContext */;
val* var24 /* : OptionString */;
val* var25 /* : nullable Object */;
val* var_outname /* var outname: nullable String */;
val* var26 /* : null */;
short int var27 /* : Bool */;
val* var28 /* : Array[Object] */;
long var29 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
long var33 /* : Int */;
val* var34 /* : String */;
val* var35 /* : String */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
long var39 /* : Int */;
val* var40 /* : String */;
val* var41 /* : String */;
val* var42 /* : String */;
val* var43 /* : String */;
val* var_outpath /* var outpath: String */;
val* var44 /* : CodeWriter */;
val* var45 /* : CodeFile */;
val* var46 /* : String */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
long var50 /* : Int */;
val* var51 /* : String */;
val* var52 /* : String */;
val* var_hfilename /* var hfilename: String */;
val* var53 /* : Array[Object] */;
long var54 /* : Int */;
val* var_55 /* var : Array[Object] */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
long var59 /* : Int */;
val* var60 /* : String */;
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
val* var71 /* : String */;
val* var_hfilepath /* var hfilepath: String */;
val* var72 /* : OFStream */;
val* var_h /* var h: OFStream */;
val* var73 /* : CodeWriter */;
val* var74 /* : List[String] */;
val* var75 /* : Iterator[nullable Object] */;
short int var76 /* : Bool */;
val* var77 /* : nullable Object */;
val* var_l /* var l: String */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
long var81 /* : Int */;
val* var82 /* : String */;
val* var83 /* : CodeWriter */;
val* var84 /* : List[String] */;
val* var85 /* : Iterator[nullable Object] */;
short int var86 /* : Bool */;
val* var87 /* : nullable Object */;
val* var_l88 /* var l: String */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
long var92 /* : Int */;
val* var93 /* : String */;
val* var95 /* : Array[String] */;
val* var_cfiles /* var cfiles: Array[String] */;
val* var96 /* : List[CodeFile] */;
val* var97 /* : Iterator[nullable Object] */;
short int var98 /* : Bool */;
val* var99 /* : nullable Object */;
val* var_f /* var f: CodeFile */;
long var100 /* : Int */;
long var_i /* var i: Int */;
val* var101 /* : null */;
val* var_hfile /* var hfile: nullable OFStream */;
long var102 /* : Int */;
long var_count /* var count: Int */;
val* var103 /* : Array[Object] */;
long var104 /* : Int */;
val* var_105 /* var : Array[Object] */;
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
val* var117 /* : String */;
val* var_cfilename /* var cfilename: String */;
val* var118 /* : Array[Object] */;
long var119 /* : Int */;
val* var_120 /* var : Array[Object] */;
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
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : NativeString */;
long var134 /* : Int */;
val* var135 /* : String */;
val* var136 /* : String */;
val* var_cfilepath /* var cfilepath: String */;
val* var137 /* : OFStream */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : NativeString */;
long var141 /* : Int */;
val* var142 /* : String */;
static val* varonce143;
val* var144 /* : String */;
char* var145 /* : NativeString */;
long var146 /* : Int */;
val* var147 /* : String */;
val* var148 /* : Array[Object] */;
long var149 /* : Int */;
val* var150 /* : NativeArray[Object] */;
val* var151 /* : String */;
val* var152 /* : HashSet[String] */;
val* var153 /* : Iterator[nullable Object] */;
short int var154 /* : Bool */;
val* var155 /* : nullable Object */;
val* var_key /* var key: String */;
val* var156 /* : HashMap[String, String] */;
short int var157 /* : Bool */;
short int var158 /* : Bool */;
static val* varonce159;
val* var160 /* : String */;
char* var161 /* : NativeString */;
long var162 /* : Int */;
val* var163 /* : String */;
val* var164 /* : Array[Object] */;
long var165 /* : Int */;
val* var166 /* : NativeArray[Object] */;
val* var167 /* : String */;
val* var168 /* : HashMap[String, String] */;
val* var169 /* : nullable Object */;
static val* varonce170;
val* var171 /* : String */;
char* var172 /* : NativeString */;
long var173 /* : Int */;
val* var174 /* : String */;
val* var176 /* : null */;
val* var_file /* var file: nullable OFStream */;
val* var177 /* : Array[CodeWriter] */;
val* var178 /* : Iterator[nullable Object] */;
short int var179 /* : Bool */;
val* var180 /* : nullable Object */;
val* var_vis /* var vis: CodeWriter */;
val* var181 /* : CodeWriter */;
short int var182 /* : Bool */;
val* var184 /* : List[String] */;
long var185 /* : Int */;
val* var186 /* : List[String] */;
long var187 /* : Int */;
long var188 /* : Int */;
long var190 /* : Int */;
long var_total_lines /* var total_lines: Int */;
long var191 /* : Int */;
short int var192 /* : Bool */;
short int var194 /* : Bool */;
long var195 /* : Int */;
long var197 /* : Int */;
short int var198 /* : Bool */;
val* var199 /* : null */;
short int var200 /* : Bool */;
short int var_201 /* var : Bool */;
long var202 /* : Int */;
short int var203 /* : Bool */;
short int var205 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var206 /* : Bool */;
long var207 /* : Int */;
long var208 /* : Int */;
long var210 /* : Int */;
val* var211 /* : null */;
short int var212 /* : Bool */;
val* var213 /* : Array[Object] */;
long var214 /* : Int */;
val* var_215 /* var : Array[Object] */;
static val* varonce216;
val* var217 /* : String */;
char* var218 /* : NativeString */;
long var219 /* : Int */;
val* var220 /* : String */;
val* var221 /* : String */;
static val* varonce222;
val* var223 /* : String */;
char* var224 /* : NativeString */;
long var225 /* : Int */;
val* var226 /* : String */;
val* var227 /* : nullable Object */;
static val* varonce228;
val* var229 /* : String */;
char* var230 /* : NativeString */;
long var231 /* : Int */;
val* var232 /* : String */;
val* var233 /* : String */;
val* var234 /* : Array[Object] */;
long var235 /* : Int */;
val* var_236 /* var : Array[Object] */;
static val* varonce237;
val* var238 /* : String */;
char* var239 /* : NativeString */;
long var240 /* : Int */;
val* var241 /* : String */;
static val* varonce242;
val* var243 /* : String */;
char* var244 /* : NativeString */;
long var245 /* : Int */;
val* var246 /* : String */;
static val* varonce247;
val* var248 /* : String */;
char* var249 /* : NativeString */;
long var250 /* : Int */;
val* var251 /* : String */;
val* var252 /* : String */;
val* var253 /* : ToolContext */;
static val* varonce254;
val* var255 /* : String */;
char* var256 /* : NativeString */;
long var257 /* : Int */;
val* var258 /* : String */;
val* var259 /* : Array[Object] */;
long var260 /* : Int */;
val* var261 /* : NativeArray[Object] */;
val* var262 /* : String */;
long var263 /* : Int */;
val* var264 /* : OFStream */;
static val* varonce265;
val* var266 /* : String */;
char* var267 /* : NativeString */;
long var268 /* : Int */;
val* var269 /* : String */;
val* var270 /* : String */;
static val* varonce271;
val* var272 /* : String */;
char* var273 /* : NativeString */;
long var274 /* : Int */;
val* var275 /* : String */;
val* var276 /* : Array[Object] */;
long var277 /* : Int */;
val* var278 /* : NativeArray[Object] */;
val* var279 /* : String */;
val* var280 /* : List[String] */;
val* var281 /* : Iterator[nullable Object] */;
short int var282 /* : Bool */;
val* var283 /* : nullable Object */;
val* var_l284 /* var l: String */;
static val* varonce285;
val* var286 /* : String */;
char* var287 /* : NativeString */;
long var288 /* : Int */;
val* var289 /* : String */;
val* var291 /* : List[String] */;
val* var292 /* : Iterator[nullable Object] */;
short int var293 /* : Bool */;
val* var294 /* : nullable Object */;
val* var_l295 /* var l: String */;
static val* varonce296;
val* var297 /* : String */;
char* var298 /* : NativeString */;
long var299 /* : Int */;
val* var300 /* : String */;
val* var302 /* : null */;
short int var303 /* : Bool */;
val* var305 /* : ToolContext */;
static val* varonce306;
val* var307 /* : String */;
char* var308 /* : NativeString */;
long var309 /* : Int */;
val* var310 /* : String */;
long var311 /* : Int */;
val* var312 /* : Array[Object] */;
long var313 /* : Int */;
val* var314 /* : NativeArray[Object] */;
val* var315 /* : Object */;
val* var316 /* : String */;
long var317 /* : Int */;
val* var318 /* : Array[Object] */;
long var319 /* : Int */;
val* var_320 /* var : Array[Object] */;
static val* varonce321;
val* var322 /* : String */;
char* var323 /* : NativeString */;
long var324 /* : Int */;
val* var325 /* : String */;
val* var326 /* : String */;
static val* varonce327;
val* var328 /* : String */;
char* var329 /* : NativeString */;
long var330 /* : Int */;
val* var331 /* : String */;
val* var332 /* : String */;
val* var_makename /* var makename: String */;
val* var333 /* : Array[Object] */;
long var334 /* : Int */;
val* var_335 /* var : Array[Object] */;
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
val* var351 /* : String */;
val* var_makepath /* var makepath: String */;
val* var352 /* : OFStream */;
val* var_makefile /* var makefile: OFStream */;
static val* varonce353;
val* var354 /* : String */;
char* var355 /* : NativeString */;
long var356 /* : Int */;
val* var357 /* : String */;
val* var_cc_includes /* var cc_includes: String */;
val* var358 /* : Array[String] */;
val* var359 /* : Iterator[nullable Object] */;
short int var360 /* : Bool */;
val* var361 /* : nullable Object */;
val* var_p /* var p: String */;
val* var362 /* : String */;
val* var363 /* : String */;
static val* varonce364;
val* var365 /* : String */;
char* var366 /* : NativeString */;
long var367 /* : Int */;
val* var368 /* : String */;
val* var369 /* : String */;
static val* varonce370;
val* var371 /* : String */;
char* var372 /* : NativeString */;
long var373 /* : Int */;
val* var374 /* : String */;
val* var375 /* : String */;
val* var376 /* : String */;
static val* varonce378;
val* var379 /* : String */;
char* var380 /* : NativeString */;
long var381 /* : Int */;
val* var382 /* : String */;
static val* varonce383;
val* var384 /* : String */;
char* var385 /* : NativeString */;
long var386 /* : Int */;
val* var387 /* : String */;
val* var388 /* : Array[Object] */;
long var389 /* : Int */;
val* var390 /* : NativeArray[Object] */;
val* var391 /* : String */;
static val* varonce392;
val* var393 /* : String */;
char* var394 /* : NativeString */;
long var395 /* : Int */;
val* var396 /* : String */;
static val* varonce397;
val* var398 /* : String */;
char* var399 /* : NativeString */;
long var400 /* : Int */;
val* var401 /* : String */;
val* var402 /* : Array[Object] */;
long var403 /* : Int */;
val* var404 /* : NativeArray[Object] */;
val* var405 /* : String */;
val* var406 /* : Array[String] */;
val* var_ofiles /* var ofiles: Array[String] */;
val* var407 /* : Iterator[nullable Object] */;
short int var408 /* : Bool */;
val* var409 /* : nullable Object */;
val* var_f410 /* var f: String */;
static val* varonce411;
val* var412 /* : String */;
char* var413 /* : NativeString */;
long var414 /* : Int */;
val* var415 /* : String */;
val* var416 /* : String */;
static val* varonce417;
val* var418 /* : String */;
char* var419 /* : NativeString */;
long var420 /* : Int */;
val* var421 /* : String */;
val* var422 /* : String */;
val* var_o /* var o: String */;
static val* varonce423;
val* var424 /* : String */;
char* var425 /* : NativeString */;
long var426 /* : Int */;
val* var427 /* : String */;
static val* varonce428;
val* var429 /* : String */;
char* var430 /* : NativeString */;
long var431 /* : Int */;
val* var432 /* : String */;
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
val* var448 /* : ExternCFile */;
val* var449 /* : Array[Object] */;
long var450 /* : Int */;
val* var_451 /* var : Array[Object] */;
static val* varonce452;
val* var453 /* : String */;
char* var454 /* : NativeString */;
long var455 /* : Int */;
val* var456 /* : String */;
val* var457 /* : Array[String] */;
val* var458 /* : nullable Object */;
static val* varonce459;
val* var460 /* : String */;
char* var461 /* : NativeString */;
long var462 /* : Int */;
val* var463 /* : String */;
val* var464 /* : String */;
static val* varonce465;
val* var466 /* : String */;
char* var467 /* : NativeString */;
long var468 /* : Int */;
val* var469 /* : String */;
val* var_gc_chooser /* var gc_chooser: ExternCFile */;
val* var470 /* : Array[ExternCFile] */;
val* var471 /* : Array[ExternCFile] */;
val* var472 /* : Iterator[nullable Object] */;
short int var473 /* : Bool */;
val* var474 /* : nullable Object */;
val* var_f475 /* var f: ExternCFile */;
val* var476 /* : String */;
static val* varonce477;
val* var478 /* : String */;
char* var479 /* : NativeString */;
long var480 /* : Int */;
val* var481 /* : String */;
val* var482 /* : String */;
val* var_basename /* var basename: String */;
val* var483 /* : Array[Object] */;
long var484 /* : Int */;
val* var_485 /* var : Array[Object] */;
static val* varonce486;
val* var487 /* : String */;
char* var488 /* : NativeString */;
long var489 /* : Int */;
val* var490 /* : String */;
static val* varonce491;
val* var492 /* : String */;
char* var493 /* : NativeString */;
long var494 /* : Int */;
val* var495 /* : String */;
val* var496 /* : String */;
val* var_o497 /* var o: String */;
val* var498 /* : String */;
val* var499 /* : String */;
val* var500 /* : String */;
val* var_ff /* var ff: String */;
static val* varonce501;
val* var502 /* : String */;
char* var503 /* : NativeString */;
long var504 /* : Int */;
val* var505 /* : String */;
static val* varonce506;
val* var507 /* : String */;
char* var508 /* : NativeString */;
long var509 /* : Int */;
val* var510 /* : String */;
val* var511 /* : String */;
static val* varonce512;
val* var513 /* : String */;
char* var514 /* : NativeString */;
long var515 /* : Int */;
val* var516 /* : String */;
static val* varonce517;
val* var518 /* : String */;
char* var519 /* : NativeString */;
long var520 /* : Int */;
val* var521 /* : String */;
static val* varonce522;
val* var523 /* : String */;
char* var524 /* : NativeString */;
long var525 /* : Int */;
val* var526 /* : String */;
val* var527 /* : Array[Object] */;
long var528 /* : Int */;
val* var529 /* : NativeArray[Object] */;
val* var530 /* : String */;
static val* varonce532;
val* var533 /* : String */;
char* var534 /* : NativeString */;
long var535 /* : Int */;
val* var536 /* : String */;
static val* varonce537;
val* var538 /* : String */;
char* var539 /* : NativeString */;
long var540 /* : Int */;
val* var541 /* : String */;
val* var542 /* : String */;
static val* varonce543;
val* var544 /* : String */;
char* var545 /* : NativeString */;
long var546 /* : Int */;
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
val* var578 /* : String */;
static val* varonce579;
val* var580 /* : String */;
char* var581 /* : NativeString */;
long var582 /* : Int */;
val* var583 /* : String */;
val* var584 /* : Array[Object] */;
long var585 /* : Int */;
val* var586 /* : NativeArray[Object] */;
val* var587 /* : String */;
val* var588 /* : ToolContext */;
static val* varonce589;
val* var590 /* : String */;
char* var591 /* : NativeString */;
long var592 /* : Int */;
val* var593 /* : String */;
val* var594 /* : Array[Object] */;
long var595 /* : Int */;
val* var596 /* : NativeArray[Object] */;
val* var597 /* : String */;
long var598 /* : Int */;
long var599 /* : Int */;
long var_time1 /* var time1: Int */;
val* var600 /* : ToolContext */;
static val* varonce601;
val* var602 /* : String */;
char* var603 /* : NativeString */;
long var604 /* : Int */;
val* var605 /* : String */;
long var606 /* : Int */;
long var608 /* : Int */;
static val* varonce609;
val* var610 /* : String */;
char* var611 /* : NativeString */;
long var612 /* : Int */;
val* var613 /* : String */;
val* var614 /* : Array[Object] */;
long var615 /* : Int */;
val* var616 /* : NativeArray[Object] */;
val* var617 /* : Object */;
val* var618 /* : String */;
long var619 /* : Int */;
val* var620 /* : ToolContext */;
val* var621 /* : OptionBool */;
val* var622 /* : nullable Object */;
short int var623 /* : Bool */;
val* var624 /* : ToolContext */;
static val* varonce625;
val* var626 /* : String */;
char* var627 /* : NativeString */;
long var628 /* : Int */;
val* var629 /* : String */;
long var630 /* : Int */;
val* var631 /* : ToolContext */;
val* var632 /* : OptionString */;
val* var633 /* : nullable Object */;
val* var_makeflags /* var makeflags: nullable String */;
val* var634 /* : null */;
short int var635 /* : Bool */;
static val* varonce636;
val* var637 /* : String */;
char* var638 /* : NativeString */;
long var639 /* : Int */;
val* var640 /* : String */;
val* var641 /* : ToolContext */;
static val* varonce642;
val* var643 /* : String */;
char* var644 /* : NativeString */;
long var645 /* : Int */;
val* var646 /* : String */;
static val* varonce647;
val* var648 /* : String */;
char* var649 /* : NativeString */;
long var650 /* : Int */;
val* var651 /* : String */;
static val* varonce652;
val* var653 /* : String */;
char* var654 /* : NativeString */;
long var655 /* : Int */;
val* var656 /* : String */;
val* var657 /* : Array[Object] */;
long var658 /* : Int */;
val* var659 /* : NativeArray[Object] */;
val* var660 /* : String */;
long var661 /* : Int */;
val* var662 /* : ToolContext */;
long var663 /* : Int */;
long var664 /* : Int */;
short int var665 /* : Bool */;
short int var667 /* : Bool */;
int cltype668;
int idtype669;
const char* var_class_name670;
short int var671 /* : Bool */;
val* var672 /* : Sys */;
static val* varonce673;
val* var674 /* : String */;
char* var675 /* : NativeString */;
long var676 /* : Int */;
val* var677 /* : String */;
static val* varonce678;
val* var679 /* : String */;
char* var680 /* : NativeString */;
long var681 /* : Int */;
val* var682 /* : String */;
static val* varonce683;
val* var684 /* : String */;
char* var685 /* : NativeString */;
long var686 /* : Int */;
val* var687 /* : String */;
static val* varonce688;
val* var689 /* : String */;
char* var690 /* : NativeString */;
long var691 /* : Int */;
val* var692 /* : String */;
val* var693 /* : Array[Object] */;
long var694 /* : Int */;
val* var695 /* : NativeArray[Object] */;
val* var696 /* : String */;
long var697 /* : Int */;
val* var698 /* : nullable Object */;
val* var_res /* var res: nullable Object */;
val* var699 /* : Sys */;
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
static val* varonce715;
val* var716 /* : String */;
char* var717 /* : NativeString */;
long var718 /* : Int */;
val* var719 /* : String */;
val* var720 /* : Array[Object] */;
long var721 /* : Int */;
val* var722 /* : NativeArray[Object] */;
val* var723 /* : String */;
long var724 /* : Int */;
val* var725 /* : nullable Object */;
long var726 /* : Int */;
short int var727 /* : Bool */;
short int var729 /* : Bool */;
long var730 /* : Int */;
short int var731 /* : Bool */;
val* var732 /* : ToolContext */;
val* var733 /* : null */;
static val* varonce734;
val* var735 /* : String */;
char* var736 /* : NativeString */;
long var737 /* : Int */;
val* var738 /* : String */;
static val* varonce739;
val* var740 /* : String */;
char* var741 /* : NativeString */;
long var742 /* : Int */;
val* var743 /* : String */;
val* var744 /* : Array[Object] */;
long var745 /* : Int */;
val* var746 /* : NativeArray[Object] */;
val* var747 /* : String */;
long var748 /* : Int */;
val* var749 /* : ToolContext */;
static val* varonce750;
val* var751 /* : String */;
char* var752 /* : NativeString */;
long var753 /* : Int */;
val* var754 /* : String */;
long var755 /* : Int */;
long var757 /* : Int */;
static val* varonce758;
val* var759 /* : String */;
char* var760 /* : NativeString */;
long var761 /* : Int */;
val* var762 /* : String */;
val* var763 /* : Array[Object] */;
long var764 /* : Int */;
val* var765 /* : NativeArray[Object] */;
val* var766 /* : Object */;
val* var767 /* : String */;
long var768 /* : Int */;
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
if (varonce18) {
var19 = varonce18;
} else {
var20 = "..";
var21 = 2;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
var_orig_dir = var19;
var23 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
var24 = ((val* (*)(val*))(var23->class->vft[COLOR_abstract_compiler__ToolContext__opt_output]))(var23) /* opt_output on <var23:ToolContext>*/;
var25 = ((val* (*)(val*))(var24->class->vft[COLOR_opts__Option__value]))(var24) /* value on <var24:OptionString>*/;
var_outname = var25;
var26 = NULL;
if (var_outname == NULL) {
var27 = 1; /* is null */
} else {
var27 = 0; /* arg is null but recv is not */
}
if (var27){
var28 = NEW_array__Array(&type_array__Arraykernel__Object);
var29 = 3;
((void (*)(val*, long))(var28->class->vft[COLOR_array__Array__with_capacity]))(var28, var29) /* with_capacity on <var28:Array[Object]>*/;
CHECK_NEW_array__Array(var28);
var_ = var28;
if (varonce30) {
var31 = varonce30;
} else {
var32 = "";
var33 = 0;
var34 = string__NativeString__to_s_with_length(var32, var33);
var31 = var34;
varonce30 = var31;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var31) /* add on <var_:Array[Object]>*/;
var35 = ((val* (*)(val*))(var_mainmodule->class->vft[COLOR_model_base__MModule__name]))(var_mainmodule) /* name on <var_mainmodule:MModule>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var35) /* add on <var_:Array[Object]>*/;
if (varonce36) {
var37 = varonce36;
} else {
var38 = "";
var39 = 0;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var37) /* add on <var_:Array[Object]>*/;
var41 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var_outname = var41;
} else {
}
var42 = ((val* (*)(val*, val*))(var_orig_dir->class->vft[COLOR_file__String__join_path]))(var_orig_dir, var_outname) /* join_path on <var_orig_dir:String>*/;
var43 = ((val* (*)(val*))(var42->class->vft[COLOR_file__String__simplify_path]))(var42) /* simplify_path on <var42:String>*/;
var_outpath = var43;
var44 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(var_compiler) /* header on <var_compiler:AbstractCompiler>*/;
var45 = ((val* (*)(val*))(var44->class->vft[COLOR_abstract_compiler__CodeWriter__file]))(var44) /* file on <var44:CodeWriter>*/;
var46 = ((val* (*)(val*))(var45->class->vft[COLOR_abstract_compiler__CodeFile__name]))(var45) /* name on <var45:CodeFile>*/;
if (varonce47) {
var48 = varonce47;
} else {
var49 = ".h";
var50 = 2;
var51 = string__NativeString__to_s_with_length(var49, var50);
var48 = var51;
varonce47 = var48;
}
var52 = ((val* (*)(val*, val*))(var46->class->vft[COLOR_string__String___43d]))(var46, var48) /* + on <var46:String>*/;
var_hfilename = var52;
var53 = NEW_array__Array(&type_array__Arraykernel__Object);
var54 = 5;
((void (*)(val*, long))(var53->class->vft[COLOR_array__Array__with_capacity]))(var53, var54) /* with_capacity on <var53:Array[Object]>*/;
CHECK_NEW_array__Array(var53);
var_55 = var53;
if (varonce56) {
var57 = varonce56;
} else {
var58 = "";
var59 = 0;
var60 = string__NativeString__to_s_with_length(var58, var59);
var57 = var60;
varonce56 = var57;
}
((void (*)(val*, val*))(var_55->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_55, var57) /* add on <var_55:Array[Object]>*/;
((void (*)(val*, val*))(var_55->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_55, var_compile_dir) /* add on <var_55:Array[Object]>*/;
if (varonce61) {
var62 = varonce61;
} else {
var63 = "/";
var64 = 1;
var65 = string__NativeString__to_s_with_length(var63, var64);
var62 = var65;
varonce61 = var62;
}
((void (*)(val*, val*))(var_55->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_55, var62) /* add on <var_55:Array[Object]>*/;
((void (*)(val*, val*))(var_55->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_55, var_hfilename) /* add on <var_55:Array[Object]>*/;
if (varonce66) {
var67 = varonce66;
} else {
var68 = "";
var69 = 0;
var70 = string__NativeString__to_s_with_length(var68, var69);
var67 = var70;
varonce66 = var67;
}
((void (*)(val*, val*))(var_55->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_55, var67) /* add on <var_55:Array[Object]>*/;
var71 = ((val* (*)(val*))(var_55->class->vft[COLOR_string__Object__to_s]))(var_55) /* to_s on <var_55:Array[Object]>*/;
var_hfilepath = var71;
var72 = NEW_file__OFStream(&type_file__OFStream);
((void (*)(val*, val*))(var72->class->vft[COLOR_file__OFStream__open]))(var72, var_hfilepath) /* open on <var72:OFStream>*/;
CHECK_NEW_file__OFStream(var72);
var_h = var72;
var73 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(var_compiler) /* header on <var_compiler:AbstractCompiler>*/;
var74 = ((val* (*)(val*))(var73->class->vft[COLOR_abstract_compiler__CodeWriter__decl_lines]))(var73) /* decl_lines on <var73:CodeWriter>*/;
var75 = ((val* (*)(val*))(var74->class->vft[COLOR_abstract_collection__Collection__iterator]))(var74) /* iterator on <var74:List[String]>*/;
for(;;) {
var76 = ((short int (*)(val*))(var75->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var75) /* is_ok on <var75:Iterator[nullable Object]>*/;
if(!var76) break;
var77 = ((val* (*)(val*))(var75->class->vft[COLOR_abstract_collection__Iterator__item]))(var75) /* item on <var75:Iterator[nullable Object]>*/;
var_l = var77;
((void (*)(val*, val*))(var_h->class->vft[COLOR_stream__OStream__write]))(var_h, var_l) /* write on <var_h:OFStream>*/;
if (varonce78) {
var79 = varonce78;
} else {
var80 = "\n";
var81 = 1;
var82 = string__NativeString__to_s_with_length(var80, var81);
var79 = var82;
varonce78 = var79;
}
((void (*)(val*, val*))(var_h->class->vft[COLOR_stream__OStream__write]))(var_h, var79) /* write on <var_h:OFStream>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var75->class->vft[COLOR_abstract_collection__Iterator__next]))(var75) /* next on <var75:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var83 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(var_compiler) /* header on <var_compiler:AbstractCompiler>*/;
var84 = ((val* (*)(val*))(var83->class->vft[COLOR_abstract_compiler__CodeWriter__lines]))(var83) /* lines on <var83:CodeWriter>*/;
var85 = ((val* (*)(val*))(var84->class->vft[COLOR_abstract_collection__Collection__iterator]))(var84) /* iterator on <var84:List[String]>*/;
for(;;) {
var86 = ((short int (*)(val*))(var85->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var85) /* is_ok on <var85:Iterator[nullable Object]>*/;
if(!var86) break;
var87 = ((val* (*)(val*))(var85->class->vft[COLOR_abstract_collection__Iterator__item]))(var85) /* item on <var85:Iterator[nullable Object]>*/;
var_l88 = var87;
((void (*)(val*, val*))(var_h->class->vft[COLOR_stream__OStream__write]))(var_h, var_l88) /* write on <var_h:OFStream>*/;
if (varonce89) {
var90 = varonce89;
} else {
var91 = "\n";
var92 = 1;
var93 = string__NativeString__to_s_with_length(var91, var92);
var90 = var93;
varonce89 = var90;
}
((void (*)(val*, val*))(var_h->class->vft[COLOR_stream__OStream__write]))(var_h, var90) /* write on <var_h:OFStream>*/;
CONTINUE_label94: (void)0;
((void (*)(val*))(var85->class->vft[COLOR_abstract_collection__Iterator__next]))(var85) /* next on <var85:Iterator[nullable Object]>*/;
}
BREAK_label94: (void)0;
((void (*)(val*))(var_h->class->vft[COLOR_stream__IOS__close]))(var_h) /* close on <var_h:OFStream>*/;
var95 = NEW_array__Array(&type_array__Arraystring__String);
((void (*)(val*))(var95->class->vft[COLOR_array__Array__init]))(var95) /* init on <var95:Array[String]>*/;
CHECK_NEW_array__Array(var95);
var_cfiles = var95;
var96 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__files]))(var_compiler) /* files on <var_compiler:AbstractCompiler>*/;
var97 = ((val* (*)(val*))(var96->class->vft[COLOR_abstract_collection__Collection__iterator]))(var96) /* iterator on <var96:List[CodeFile]>*/;
for(;;) {
var98 = ((short int (*)(val*))(var97->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var97) /* is_ok on <var97:Iterator[nullable Object]>*/;
if(!var98) break;
var99 = ((val* (*)(val*))(var97->class->vft[COLOR_abstract_collection__Iterator__item]))(var97) /* item on <var97:Iterator[nullable Object]>*/;
var_f = var99;
var100 = 0;
var_i = var100;
var101 = NULL;
var_hfile = var101;
var102 = 0;
var_count = var102;
var103 = NEW_array__Array(&type_array__Arraykernel__Object);
var104 = 3;
((void (*)(val*, long))(var103->class->vft[COLOR_array__Array__with_capacity]))(var103, var104) /* with_capacity on <var103:Array[Object]>*/;
CHECK_NEW_array__Array(var103);
var_105 = var103;
if (varonce106) {
var107 = varonce106;
} else {
var108 = "";
var109 = 0;
var110 = string__NativeString__to_s_with_length(var108, var109);
var107 = var110;
varonce106 = var107;
}
((void (*)(val*, val*))(var_105->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_105, var107) /* add on <var_105:Array[Object]>*/;
var111 = ((val* (*)(val*))(var_f->class->vft[COLOR_abstract_compiler__CodeFile__name]))(var_f) /* name on <var_f:CodeFile>*/;
((void (*)(val*, val*))(var_105->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_105, var111) /* add on <var_105:Array[Object]>*/;
if (varonce112) {
var113 = varonce112;
} else {
var114 = ".0.h";
var115 = 4;
var116 = string__NativeString__to_s_with_length(var114, var115);
var113 = var116;
varonce112 = var113;
}
((void (*)(val*, val*))(var_105->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_105, var113) /* add on <var_105:Array[Object]>*/;
var117 = ((val* (*)(val*))(var_105->class->vft[COLOR_string__Object__to_s]))(var_105) /* to_s on <var_105:Array[Object]>*/;
var_cfilename = var117;
var118 = NEW_array__Array(&type_array__Arraykernel__Object);
var119 = 5;
((void (*)(val*, long))(var118->class->vft[COLOR_array__Array__with_capacity]))(var118, var119) /* with_capacity on <var118:Array[Object]>*/;
CHECK_NEW_array__Array(var118);
var_120 = var118;
if (varonce121) {
var122 = varonce121;
} else {
var123 = "";
var124 = 0;
var125 = string__NativeString__to_s_with_length(var123, var124);
var122 = var125;
varonce121 = var122;
}
((void (*)(val*, val*))(var_120->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_120, var122) /* add on <var_120:Array[Object]>*/;
((void (*)(val*, val*))(var_120->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_120, var_compile_dir) /* add on <var_120:Array[Object]>*/;
if (varonce126) {
var127 = varonce126;
} else {
var128 = "/";
var129 = 1;
var130 = string__NativeString__to_s_with_length(var128, var129);
var127 = var130;
varonce126 = var127;
}
((void (*)(val*, val*))(var_120->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_120, var127) /* add on <var_120:Array[Object]>*/;
((void (*)(val*, val*))(var_120->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_120, var_cfilename) /* add on <var_120:Array[Object]>*/;
if (varonce131) {
var132 = varonce131;
} else {
var133 = "";
var134 = 0;
var135 = string__NativeString__to_s_with_length(var133, var134);
var132 = var135;
varonce131 = var132;
}
((void (*)(val*, val*))(var_120->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_120, var132) /* add on <var_120:Array[Object]>*/;
var136 = ((val* (*)(val*))(var_120->class->vft[COLOR_string__Object__to_s]))(var_120) /* to_s on <var_120:Array[Object]>*/;
var_cfilepath = var136;
var137 = NEW_file__OFStream(&type_file__OFStream);
((void (*)(val*, val*))(var137->class->vft[COLOR_file__OFStream__open]))(var137, var_cfilepath) /* open on <var137:OFStream>*/;
CHECK_NEW_file__OFStream(var137);
var_hfile = var137;
if (varonce138) {
var139 = varonce138;
} else {
var140 = "#include \"";
var141 = 10;
var142 = string__NativeString__to_s_with_length(var140, var141);
var139 = var142;
varonce138 = var139;
}
if (varonce143) {
var144 = varonce143;
} else {
var145 = "\"\n";
var146 = 2;
var147 = string__NativeString__to_s_with_length(var145, var146);
var144 = var147;
varonce143 = var144;
}
var148 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var148 = array_instance Array[Object] */
var149 = 3;
var150 = NEW_array__NativeArray(var149, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var150)->values[0] = (val*) var139;
((struct instance_array__NativeArray*)var150)->values[1] = (val*) var_hfilename;
((struct instance_array__NativeArray*)var150)->values[2] = (val*) var144;
((void (*)(val*, val*, long))(var148->class->vft[COLOR_array__Array__with_native]))(var148, var150, var149) /* with_native on <var148:Array[Object]>*/;
CHECK_NEW_array__Array(var148);
}
var151 = ((val* (*)(val*))(var148->class->vft[COLOR_string__Object__to_s]))(var148) /* to_s on <var148:Array[Object]>*/;
((void (*)(val*, val*))(var_hfile->class->vft[COLOR_stream__OStream__write]))(var_hfile, var151) /* write on <var_hfile:nullable OFStream(OFStream)>*/;
var152 = ((val* (*)(val*))(var_f->class->vft[COLOR_abstract_compiler__CodeFile__required_declarations]))(var_f) /* required_declarations on <var_f:CodeFile>*/;
var153 = ((val* (*)(val*))(var152->class->vft[COLOR_abstract_collection__Collection__iterator]))(var152) /* iterator on <var152:HashSet[String]>*/;
for(;;) {
var154 = ((short int (*)(val*))(var153->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var153) /* is_ok on <var153:Iterator[nullable Object]>*/;
if(!var154) break;
var155 = ((val* (*)(val*))(var153->class->vft[COLOR_abstract_collection__Iterator__item]))(var153) /* item on <var153:Iterator[nullable Object]>*/;
var_key = var155;
var156 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__provided_declarations]))(var_compiler) /* provided_declarations on <var_compiler:AbstractCompiler>*/;
var157 = ((short int (*)(val*, val*))(var156->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var156, var_key) /* has_key on <var156:HashMap[String, String]>*/;
var158 = !var157;
if (var158){
if (varonce159) {
var160 = varonce159;
} else {
var161 = "No provided declaration for ";
var162 = 28;
var163 = string__NativeString__to_s_with_length(var161, var162);
var160 = var163;
varonce159 = var160;
}
var164 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var164 = array_instance Array[Object] */
var165 = 2;
var166 = NEW_array__NativeArray(var165, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var166)->values[0] = (val*) var160;
((struct instance_array__NativeArray*)var166)->values[1] = (val*) var_key;
((void (*)(val*, val*, long))(var164->class->vft[COLOR_array__Array__with_native]))(var164, var166, var165) /* with_native on <var164:Array[Object]>*/;
CHECK_NEW_array__Array(var164);
}
var167 = ((val* (*)(val*))(var164->class->vft[COLOR_string__Object__to_s]))(var164) /* to_s on <var164:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var167) /* print on <self:ModelBuilder>*/;
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 148);
exit(1);
} else {
}
var168 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__provided_declarations]))(var_compiler) /* provided_declarations on <var_compiler:AbstractCompiler>*/;
var169 = ((val* (*)(val*, val*))(var168->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var168, var_key) /* [] on <var168:HashMap[String, String]>*/;
((void (*)(val*, val*))(var_hfile->class->vft[COLOR_stream__OStream__write]))(var_hfile, var169) /* write on <var_hfile:nullable OFStream(OFStream)>*/;
if (varonce170) {
var171 = varonce170;
} else {
var172 = "\n";
var173 = 1;
var174 = string__NativeString__to_s_with_length(var172, var173);
var171 = var174;
varonce170 = var171;
}
((void (*)(val*, val*))(var_hfile->class->vft[COLOR_stream__OStream__write]))(var_hfile, var171) /* write on <var_hfile:nullable OFStream(OFStream)>*/;
CONTINUE_label175: (void)0;
((void (*)(val*))(var153->class->vft[COLOR_abstract_collection__Iterator__next]))(var153) /* next on <var153:Iterator[nullable Object]>*/;
}
BREAK_label175: (void)0;
((void (*)(val*))(var_hfile->class->vft[COLOR_stream__IOS__close]))(var_hfile) /* close on <var_hfile:nullable OFStream(OFStream)>*/;
var176 = NULL;
var_file = var176;
var177 = ((val* (*)(val*))(var_f->class->vft[COLOR_abstract_compiler__CodeFile__writers]))(var_f) /* writers on <var_f:CodeFile>*/;
var178 = ((val* (*)(val*))(var177->class->vft[COLOR_abstract_collection__Collection__iterator]))(var177) /* iterator on <var177:Array[CodeWriter]>*/;
for(;;) {
var179 = ((short int (*)(val*))(var178->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var178) /* is_ok on <var178:Iterator[nullable Object]>*/;
if(!var179) break;
var180 = ((val* (*)(val*))(var178->class->vft[COLOR_abstract_collection__Iterator__item]))(var178) /* item on <var178:Iterator[nullable Object]>*/;
var_vis = var180;
var181 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(var_compiler) /* header on <var_compiler:AbstractCompiler>*/;
var182 = ((short int (*)(val*, val*))(var_vis->class->vft[COLOR_kernel__Object___61d_61d]))(var_vis, var181) /* == on <var_vis:CodeWriter>*/;
if (var182){
goto CONTINUE_label183;
} else {
}
var184 = ((val* (*)(val*))(var_vis->class->vft[COLOR_abstract_compiler__CodeWriter__lines]))(var_vis) /* lines on <var_vis:CodeWriter>*/;
var185 = ((long (*)(val*))(var184->class->vft[COLOR_abstract_collection__Collection__length]))(var184) /* length on <var184:List[String]>*/;
var186 = ((val* (*)(val*))(var_vis->class->vft[COLOR_abstract_compiler__CodeWriter__decl_lines]))(var_vis) /* decl_lines on <var_vis:CodeWriter>*/;
var187 = ((long (*)(val*))(var186->class->vft[COLOR_abstract_collection__Collection__length]))(var186) /* length on <var186:List[String]>*/;
{ /* Inline kernel#Int#+ (var185,var187) */
var190 = var185 + var187;
var188 = var190;
goto RET_LABEL189;
RET_LABEL189:(void)0;
}
var_total_lines = var188;
var191 = 0;
{ /* Inline kernel#Int#== (var_total_lines,var191) */
var194 = var_total_lines == var191;
var192 = var194;
goto RET_LABEL193;
RET_LABEL193:(void)0;
}
if (var192){
goto CONTINUE_label183;
} else {
}
{ /* Inline kernel#Int#+ (var_count,var_total_lines) */
var197 = var_count + var_total_lines;
var195 = var197;
goto RET_LABEL196;
RET_LABEL196:(void)0;
}
var_count = var195;
var199 = NULL;
if (var_file == NULL) {
var200 = 1; /* is null */
} else {
var200 = 0; /* arg is null but recv is not */
}
var_201 = var200;
if (var200){
var198 = var_201;
} else {
var202 = 10000;
{ /* Inline kernel#Int#> (var_count,var202) */
/* Covariant cast for argument 0 (i) <var202:Int> isa OTHER */
/* <var202:Int> isa OTHER */
var205 = 1; /* easy <var202:Int> isa OTHER*/
if (!var205) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 263);
exit(1);
}
var206 = var_count > var202;
var203 = var206;
goto RET_LABEL204;
RET_LABEL204:(void)0;
}
var198 = var203;
}
if (var198){
var207 = 1;
{ /* Inline kernel#Int#+ (var_i,var207) */
var210 = var_i + var207;
var208 = var210;
goto RET_LABEL209;
RET_LABEL209:(void)0;
}
var_i = var208;
var211 = NULL;
if (var_file == NULL) {
var212 = 0; /* is null */
} else {
var212 = 1; /* arg is null and recv is not */
}
if (var212){
((void (*)(val*))(var_file->class->vft[COLOR_stream__IOS__close]))(var_file) /* close on <var_file:nullable OFStream(OFStream)>*/;
} else {
}
var213 = NEW_array__Array(&type_array__Arraykernel__Object);
var214 = 5;
((void (*)(val*, long))(var213->class->vft[COLOR_array__Array__with_capacity]))(var213, var214) /* with_capacity on <var213:Array[Object]>*/;
CHECK_NEW_array__Array(var213);
var_215 = var213;
if (varonce216) {
var217 = varonce216;
} else {
var218 = "";
var219 = 0;
var220 = string__NativeString__to_s_with_length(var218, var219);
var217 = var220;
varonce216 = var217;
}
((void (*)(val*, val*))(var_215->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_215, var217) /* add on <var_215:Array[Object]>*/;
var221 = ((val* (*)(val*))(var_f->class->vft[COLOR_abstract_compiler__CodeFile__name]))(var_f) /* name on <var_f:CodeFile>*/;
((void (*)(val*, val*))(var_215->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_215, var221) /* add on <var_215:Array[Object]>*/;
if (varonce222) {
var223 = varonce222;
} else {
var224 = ".";
var225 = 1;
var226 = string__NativeString__to_s_with_length(var224, var225);
var223 = var226;
varonce222 = var223;
}
((void (*)(val*, val*))(var_215->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_215, var223) /* add on <var_215:Array[Object]>*/;
var227 = BOX_kernel__Int(var_i); /* autobox from Int to nullable Object */
((void (*)(val*, val*))(var_215->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_215, var227) /* add on <var_215:Array[Object]>*/;
if (varonce228) {
var229 = varonce228;
} else {
var230 = ".c";
var231 = 2;
var232 = string__NativeString__to_s_with_length(var230, var231);
var229 = var232;
varonce228 = var229;
}
((void (*)(val*, val*))(var_215->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_215, var229) /* add on <var_215:Array[Object]>*/;
var233 = ((val* (*)(val*))(var_215->class->vft[COLOR_string__Object__to_s]))(var_215) /* to_s on <var_215:Array[Object]>*/;
var_cfilename = var233;
var234 = NEW_array__Array(&type_array__Arraykernel__Object);
var235 = 5;
((void (*)(val*, long))(var234->class->vft[COLOR_array__Array__with_capacity]))(var234, var235) /* with_capacity on <var234:Array[Object]>*/;
CHECK_NEW_array__Array(var234);
var_236 = var234;
if (varonce237) {
var238 = varonce237;
} else {
var239 = "";
var240 = 0;
var241 = string__NativeString__to_s_with_length(var239, var240);
var238 = var241;
varonce237 = var238;
}
((void (*)(val*, val*))(var_236->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_236, var238) /* add on <var_236:Array[Object]>*/;
((void (*)(val*, val*))(var_236->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_236, var_compile_dir) /* add on <var_236:Array[Object]>*/;
if (varonce242) {
var243 = varonce242;
} else {
var244 = "/";
var245 = 1;
var246 = string__NativeString__to_s_with_length(var244, var245);
var243 = var246;
varonce242 = var243;
}
((void (*)(val*, val*))(var_236->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_236, var243) /* add on <var_236:Array[Object]>*/;
((void (*)(val*, val*))(var_236->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_236, var_cfilename) /* add on <var_236:Array[Object]>*/;
if (varonce247) {
var248 = varonce247;
} else {
var249 = "";
var250 = 0;
var251 = string__NativeString__to_s_with_length(var249, var250);
var248 = var251;
varonce247 = var248;
}
((void (*)(val*, val*))(var_236->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_236, var248) /* add on <var_236:Array[Object]>*/;
var252 = ((val* (*)(val*))(var_236->class->vft[COLOR_string__Object__to_s]))(var_236) /* to_s on <var_236:Array[Object]>*/;
var_cfilepath = var252;
var253 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
if (varonce254) {
var255 = varonce254;
} else {
var256 = "new C source files to compile: ";
var257 = 31;
var258 = string__NativeString__to_s_with_length(var256, var257);
var255 = var258;
varonce254 = var255;
}
var259 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var259 = array_instance Array[Object] */
var260 = 2;
var261 = NEW_array__NativeArray(var260, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var261)->values[0] = (val*) var255;
((struct instance_array__NativeArray*)var261)->values[1] = (val*) var_cfilepath;
((void (*)(val*, val*, long))(var259->class->vft[COLOR_array__Array__with_native]))(var259, var261, var260) /* with_native on <var259:Array[Object]>*/;
CHECK_NEW_array__Array(var259);
}
var262 = ((val* (*)(val*))(var259->class->vft[COLOR_string__Object__to_s]))(var259) /* to_s on <var259:Array[Object]>*/;
var263 = 3;
((void (*)(val*, val*, long))(var253->class->vft[COLOR_toolcontext__ToolContext__info]))(var253, var262, var263) /* info on <var253:ToolContext>*/;
((void (*)(val*, val*))(var_cfiles->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_cfiles, var_cfilename) /* add on <var_cfiles:Array[String]>*/;
var264 = NEW_file__OFStream(&type_file__OFStream);
((void (*)(val*, val*))(var264->class->vft[COLOR_file__OFStream__open]))(var264, var_cfilepath) /* open on <var264:OFStream>*/;
CHECK_NEW_file__OFStream(var264);
var_file = var264;
if (varonce265) {
var266 = varonce265;
} else {
var267 = "#include \"";
var268 = 10;
var269 = string__NativeString__to_s_with_length(var267, var268);
var266 = var269;
varonce265 = var266;
}
var270 = ((val* (*)(val*))(var_f->class->vft[COLOR_abstract_compiler__CodeFile__name]))(var_f) /* name on <var_f:CodeFile>*/;
if (varonce271) {
var272 = varonce271;
} else {
var273 = ".0.h\"\n";
var274 = 6;
var275 = string__NativeString__to_s_with_length(var273, var274);
var272 = var275;
varonce271 = var272;
}
var276 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var276 = array_instance Array[Object] */
var277 = 3;
var278 = NEW_array__NativeArray(var277, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var278)->values[0] = (val*) var266;
((struct instance_array__NativeArray*)var278)->values[1] = (val*) var270;
((struct instance_array__NativeArray*)var278)->values[2] = (val*) var272;
((void (*)(val*, val*, long))(var276->class->vft[COLOR_array__Array__with_native]))(var276, var278, var277) /* with_native on <var276:Array[Object]>*/;
CHECK_NEW_array__Array(var276);
}
var279 = ((val* (*)(val*))(var276->class->vft[COLOR_string__Object__to_s]))(var276) /* to_s on <var276:Array[Object]>*/;
((void (*)(val*, val*))(var_file->class->vft[COLOR_stream__OStream__write]))(var_file, var279) /* write on <var_file:nullable OFStream(OFStream)>*/;
var_count = var_total_lines;
} else {
}
var280 = ((val* (*)(val*))(var_vis->class->vft[COLOR_abstract_compiler__CodeWriter__decl_lines]))(var_vis) /* decl_lines on <var_vis:CodeWriter>*/;
var281 = ((val* (*)(val*))(var280->class->vft[COLOR_abstract_collection__Collection__iterator]))(var280) /* iterator on <var280:List[String]>*/;
for(;;) {
var282 = ((short int (*)(val*))(var281->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var281) /* is_ok on <var281:Iterator[nullable Object]>*/;
if(!var282) break;
var283 = ((val* (*)(val*))(var281->class->vft[COLOR_abstract_collection__Iterator__item]))(var281) /* item on <var281:Iterator[nullable Object]>*/;
var_l284 = var283;
((void (*)(val*, val*))(var_file->class->vft[COLOR_stream__OStream__write]))(var_file, var_l284) /* write on <var_file:nullable OFStream(OFStream)>*/;
if (varonce285) {
var286 = varonce285;
} else {
var287 = "\n";
var288 = 1;
var289 = string__NativeString__to_s_with_length(var287, var288);
var286 = var289;
varonce285 = var286;
}
((void (*)(val*, val*))(var_file->class->vft[COLOR_stream__OStream__write]))(var_file, var286) /* write on <var_file:nullable OFStream(OFStream)>*/;
CONTINUE_label290: (void)0;
((void (*)(val*))(var281->class->vft[COLOR_abstract_collection__Iterator__next]))(var281) /* next on <var281:Iterator[nullable Object]>*/;
}
BREAK_label290: (void)0;
var291 = ((val* (*)(val*))(var_vis->class->vft[COLOR_abstract_compiler__CodeWriter__lines]))(var_vis) /* lines on <var_vis:CodeWriter>*/;
var292 = ((val* (*)(val*))(var291->class->vft[COLOR_abstract_collection__Collection__iterator]))(var291) /* iterator on <var291:List[String]>*/;
for(;;) {
var293 = ((short int (*)(val*))(var292->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var292) /* is_ok on <var292:Iterator[nullable Object]>*/;
if(!var293) break;
var294 = ((val* (*)(val*))(var292->class->vft[COLOR_abstract_collection__Iterator__item]))(var292) /* item on <var292:Iterator[nullable Object]>*/;
var_l295 = var294;
((void (*)(val*, val*))(var_file->class->vft[COLOR_stream__OStream__write]))(var_file, var_l295) /* write on <var_file:nullable OFStream(OFStream)>*/;
if (varonce296) {
var297 = varonce296;
} else {
var298 = "\n";
var299 = 1;
var300 = string__NativeString__to_s_with_length(var298, var299);
var297 = var300;
varonce296 = var297;
}
((void (*)(val*, val*))(var_file->class->vft[COLOR_stream__OStream__write]))(var_file, var297) /* write on <var_file:nullable OFStream(OFStream)>*/;
CONTINUE_label301: (void)0;
((void (*)(val*))(var292->class->vft[COLOR_abstract_collection__Iterator__next]))(var292) /* next on <var292:Iterator[nullable Object]>*/;
}
BREAK_label301: (void)0;
CONTINUE_label183: (void)0;
((void (*)(val*))(var178->class->vft[COLOR_abstract_collection__Iterator__next]))(var178) /* next on <var178:Iterator[nullable Object]>*/;
}
BREAK_label183: (void)0;
var302 = NULL;
if (var_file == NULL) {
var303 = 0; /* is null */
} else {
var303 = 1; /* arg is null and recv is not */
}
if (var303){
((void (*)(val*))(var_file->class->vft[COLOR_stream__IOS__close]))(var_file) /* close on <var_file:nullable OFStream(OFStream)>*/;
} else {
}
CONTINUE_label304: (void)0;
((void (*)(val*))(var97->class->vft[COLOR_abstract_collection__Iterator__next]))(var97) /* next on <var97:Iterator[nullable Object]>*/;
}
BREAK_label304: (void)0;
var305 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
if (varonce306) {
var307 = varonce306;
} else {
var308 = "Total C source files to compile: ";
var309 = 33;
var310 = string__NativeString__to_s_with_length(var308, var309);
var307 = var310;
varonce306 = var307;
}
var311 = ((long (*)(val*))(var_cfiles->class->vft[COLOR_abstract_collection__Collection__length]))(var_cfiles) /* length on <var_cfiles:Array[String]>*/;
var312 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var312 = array_instance Array[Object] */
var313 = 2;
var314 = NEW_array__NativeArray(var313, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var314)->values[0] = (val*) var307;
var315 = BOX_kernel__Int(var311); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var314)->values[1] = (val*) var315;
((void (*)(val*, val*, long))(var312->class->vft[COLOR_array__Array__with_native]))(var312, var314, var313) /* with_native on <var312:Array[Object]>*/;
CHECK_NEW_array__Array(var312);
}
var316 = ((val* (*)(val*))(var312->class->vft[COLOR_string__Object__to_s]))(var312) /* to_s on <var312:Array[Object]>*/;
var317 = 2;
((void (*)(val*, val*, long))(var305->class->vft[COLOR_toolcontext__ToolContext__info]))(var305, var316, var317) /* info on <var305:ToolContext>*/;
var318 = NEW_array__Array(&type_array__Arraykernel__Object);
var319 = 3;
((void (*)(val*, long))(var318->class->vft[COLOR_array__Array__with_capacity]))(var318, var319) /* with_capacity on <var318:Array[Object]>*/;
CHECK_NEW_array__Array(var318);
var_320 = var318;
if (varonce321) {
var322 = varonce321;
} else {
var323 = "";
var324 = 0;
var325 = string__NativeString__to_s_with_length(var323, var324);
var322 = var325;
varonce321 = var322;
}
((void (*)(val*, val*))(var_320->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_320, var322) /* add on <var_320:Array[Object]>*/;
var326 = ((val* (*)(val*))(var_mainmodule->class->vft[COLOR_model_base__MModule__name]))(var_mainmodule) /* name on <var_mainmodule:MModule>*/;
((void (*)(val*, val*))(var_320->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_320, var326) /* add on <var_320:Array[Object]>*/;
if (varonce327) {
var328 = varonce327;
} else {
var329 = ".mk";
var330 = 3;
var331 = string__NativeString__to_s_with_length(var329, var330);
var328 = var331;
varonce327 = var328;
}
((void (*)(val*, val*))(var_320->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_320, var328) /* add on <var_320:Array[Object]>*/;
var332 = ((val* (*)(val*))(var_320->class->vft[COLOR_string__Object__to_s]))(var_320) /* to_s on <var_320:Array[Object]>*/;
var_makename = var332;
var333 = NEW_array__Array(&type_array__Arraykernel__Object);
var334 = 5;
((void (*)(val*, long))(var333->class->vft[COLOR_array__Array__with_capacity]))(var333, var334) /* with_capacity on <var333:Array[Object]>*/;
CHECK_NEW_array__Array(var333);
var_335 = var333;
if (varonce336) {
var337 = varonce336;
} else {
var338 = "";
var339 = 0;
var340 = string__NativeString__to_s_with_length(var338, var339);
var337 = var340;
varonce336 = var337;
}
((void (*)(val*, val*))(var_335->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_335, var337) /* add on <var_335:Array[Object]>*/;
((void (*)(val*, val*))(var_335->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_335, var_compile_dir) /* add on <var_335:Array[Object]>*/;
if (varonce341) {
var342 = varonce341;
} else {
var343 = "/";
var344 = 1;
var345 = string__NativeString__to_s_with_length(var343, var344);
var342 = var345;
varonce341 = var342;
}
((void (*)(val*, val*))(var_335->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_335, var342) /* add on <var_335:Array[Object]>*/;
((void (*)(val*, val*))(var_335->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_335, var_makename) /* add on <var_335:Array[Object]>*/;
if (varonce346) {
var347 = varonce346;
} else {
var348 = "";
var349 = 0;
var350 = string__NativeString__to_s_with_length(var348, var349);
var347 = var350;
varonce346 = var347;
}
((void (*)(val*, val*))(var_335->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_335, var347) /* add on <var_335:Array[Object]>*/;
var351 = ((val* (*)(val*))(var_335->class->vft[COLOR_string__Object__to_s]))(var_335) /* to_s on <var_335:Array[Object]>*/;
var_makepath = var351;
var352 = NEW_file__OFStream(&type_file__OFStream);
((void (*)(val*, val*))(var352->class->vft[COLOR_file__OFStream__open]))(var352, var_makepath) /* open on <var352:OFStream>*/;
CHECK_NEW_file__OFStream(var352);
var_makefile = var352;
if (varonce353) {
var354 = varonce353;
} else {
var355 = "";
var356 = 0;
var357 = string__NativeString__to_s_with_length(var355, var356);
var354 = var357;
varonce353 = var354;
}
var_cc_includes = var354;
var358 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__ModelBuilder__cc_paths]))(self) /* cc_paths on <self:ModelBuilder>*/;
var359 = ((val* (*)(val*))(var358->class->vft[COLOR_abstract_collection__Collection__iterator]))(var358) /* iterator on <var358:Array[String]>*/;
for(;;) {
var360 = ((short int (*)(val*))(var359->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var359) /* is_ok on <var359:Iterator[nullable Object]>*/;
if(!var360) break;
var361 = ((val* (*)(val*))(var359->class->vft[COLOR_abstract_collection__Iterator__item]))(var359) /* item on <var359:Iterator[nullable Object]>*/;
var_p = var361;
var362 = ((val* (*)(val*, val*))(var_orig_dir->class->vft[COLOR_file__String__join_path]))(var_orig_dir, var_p) /* join_path on <var_orig_dir:String>*/;
var363 = ((val* (*)(val*))(var362->class->vft[COLOR_file__String__simplify_path]))(var362) /* simplify_path on <var362:String>*/;
var_p = var363;
if (varonce364) {
var365 = varonce364;
} else {
var366 = " -I \"";
var367 = 5;
var368 = string__NativeString__to_s_with_length(var366, var367);
var365 = var368;
varonce364 = var365;
}
var369 = ((val* (*)(val*, val*))(var365->class->vft[COLOR_string__String___43d]))(var365, var_p) /* + on <var365:String>*/;
if (varonce370) {
var371 = varonce370;
} else {
var372 = "\"";
var373 = 1;
var374 = string__NativeString__to_s_with_length(var372, var373);
var371 = var374;
varonce370 = var371;
}
var375 = ((val* (*)(val*, val*))(var369->class->vft[COLOR_string__String___43d]))(var369, var371) /* + on <var369:String>*/;
var376 = ((val* (*)(val*, val*))(var_cc_includes->class->vft[COLOR_string__String___43d]))(var_cc_includes, var375) /* + on <var_cc_includes:String>*/;
var_cc_includes = var376;
CONTINUE_label377: (void)0;
((void (*)(val*))(var359->class->vft[COLOR_abstract_collection__Iterator__next]))(var359) /* next on <var359:Iterator[nullable Object]>*/;
}
BREAK_label377: (void)0;
if (varonce378) {
var379 = varonce378;
} else {
var380 = "CC = ccache cc\nCFLAGS = -g -O2\nCINCL = ";
var381 = 39;
var382 = string__NativeString__to_s_with_length(var380, var381);
var379 = var382;
varonce378 = var379;
}
if (varonce383) {
var384 = varonce383;
} else {
var385 = "\nLDFLAGS ?= \nLDLIBS  ?= -lm -lgc\n\n";
var386 = 34;
var387 = string__NativeString__to_s_with_length(var385, var386);
var384 = var387;
varonce383 = var384;
}
var388 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var388 = array_instance Array[Object] */
var389 = 3;
var390 = NEW_array__NativeArray(var389, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var390)->values[0] = (val*) var379;
((struct instance_array__NativeArray*)var390)->values[1] = (val*) var_cc_includes;
((struct instance_array__NativeArray*)var390)->values[2] = (val*) var384;
((void (*)(val*, val*, long))(var388->class->vft[COLOR_array__Array__with_native]))(var388, var390, var389) /* with_native on <var388:Array[Object]>*/;
CHECK_NEW_array__Array(var388);
}
var391 = ((val* (*)(val*))(var388->class->vft[COLOR_string__Object__to_s]))(var388) /* to_s on <var388:Array[Object]>*/;
((void (*)(val*, val*))(var_makefile->class->vft[COLOR_stream__OStream__write]))(var_makefile, var391) /* write on <var_makefile:OFStream>*/;
if (varonce392) {
var393 = varonce392;
} else {
var394 = "all: ";
var395 = 5;
var396 = string__NativeString__to_s_with_length(var394, var395);
var393 = var396;
varonce392 = var393;
}
if (varonce397) {
var398 = varonce397;
} else {
var399 = "\n\n";
var400 = 2;
var401 = string__NativeString__to_s_with_length(var399, var400);
var398 = var401;
varonce397 = var398;
}
var402 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var402 = array_instance Array[Object] */
var403 = 3;
var404 = NEW_array__NativeArray(var403, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var404)->values[0] = (val*) var393;
((struct instance_array__NativeArray*)var404)->values[1] = (val*) var_outpath;
((struct instance_array__NativeArray*)var404)->values[2] = (val*) var398;
((void (*)(val*, val*, long))(var402->class->vft[COLOR_array__Array__with_native]))(var402, var404, var403) /* with_native on <var402:Array[Object]>*/;
CHECK_NEW_array__Array(var402);
}
var405 = ((val* (*)(val*))(var402->class->vft[COLOR_string__Object__to_s]))(var402) /* to_s on <var402:Array[Object]>*/;
((void (*)(val*, val*))(var_makefile->class->vft[COLOR_stream__OStream__write]))(var_makefile, var405) /* write on <var_makefile:OFStream>*/;
var406 = NEW_array__Array(&type_array__Arraystring__String);
((void (*)(val*))(var406->class->vft[COLOR_array__Array__init]))(var406) /* init on <var406:Array[String]>*/;
CHECK_NEW_array__Array(var406);
var_ofiles = var406;
var407 = ((val* (*)(val*))(var_cfiles->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_cfiles) /* iterator on <var_cfiles:Array[String]>*/;
for(;;) {
var408 = ((short int (*)(val*))(var407->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var407) /* is_ok on <var407:Iterator[nullable Object]>*/;
if(!var408) break;
var409 = ((val* (*)(val*))(var407->class->vft[COLOR_abstract_collection__Iterator__item]))(var407) /* item on <var407:Iterator[nullable Object]>*/;
var_f410 = var409;
if (varonce411) {
var412 = varonce411;
} else {
var413 = ".c";
var414 = 2;
var415 = string__NativeString__to_s_with_length(var413, var414);
var412 = var415;
varonce411 = var412;
}
var416 = ((val* (*)(val*, val*))(var_f410->class->vft[COLOR_file__String__strip_extension]))(var_f410, var412) /* strip_extension on <var_f410:String>*/;
if (varonce417) {
var418 = varonce417;
} else {
var419 = ".o";
var420 = 2;
var421 = string__NativeString__to_s_with_length(var419, var420);
var418 = var421;
varonce417 = var418;
}
var422 = ((val* (*)(val*, val*))(var416->class->vft[COLOR_string__String___43d]))(var416, var418) /* + on <var416:String>*/;
var_o = var422;
if (varonce423) {
var424 = varonce423;
} else {
var425 = ": ";
var426 = 2;
var427 = string__NativeString__to_s_with_length(var425, var426);
var424 = var427;
varonce423 = var424;
}
if (varonce428) {
var429 = varonce428;
} else {
var430 = "\n\11$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o ";
var431 = 45;
var432 = string__NativeString__to_s_with_length(var430, var431);
var429 = var432;
varonce428 = var429;
}
if (varonce433) {
var434 = varonce433;
} else {
var435 = " ";
var436 = 1;
var437 = string__NativeString__to_s_with_length(var435, var436);
var434 = var437;
varonce433 = var434;
}
if (varonce438) {
var439 = varonce438;
} else {
var440 = "\n\n";
var441 = 2;
var442 = string__NativeString__to_s_with_length(var440, var441);
var439 = var442;
varonce438 = var439;
}
var443 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var443 = array_instance Array[Object] */
var444 = 8;
var445 = NEW_array__NativeArray(var444, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var445)->values[0] = (val*) var_o;
((struct instance_array__NativeArray*)var445)->values[1] = (val*) var424;
((struct instance_array__NativeArray*)var445)->values[2] = (val*) var_f410;
((struct instance_array__NativeArray*)var445)->values[3] = (val*) var429;
((struct instance_array__NativeArray*)var445)->values[4] = (val*) var_o;
((struct instance_array__NativeArray*)var445)->values[5] = (val*) var434;
((struct instance_array__NativeArray*)var445)->values[6] = (val*) var_f410;
((struct instance_array__NativeArray*)var445)->values[7] = (val*) var439;
((void (*)(val*, val*, long))(var443->class->vft[COLOR_array__Array__with_native]))(var443, var445, var444) /* with_native on <var443:Array[Object]>*/;
CHECK_NEW_array__Array(var443);
}
var446 = ((val* (*)(val*))(var443->class->vft[COLOR_string__Object__to_s]))(var443) /* to_s on <var443:Array[Object]>*/;
((void (*)(val*, val*))(var_makefile->class->vft[COLOR_stream__OStream__write]))(var_makefile, var446) /* write on <var_makefile:OFStream>*/;
((void (*)(val*, val*))(var_ofiles->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_ofiles, var_o) /* add on <var_ofiles:Array[String]>*/;
CONTINUE_label447: (void)0;
((void (*)(val*))(var407->class->vft[COLOR_abstract_collection__Iterator__next]))(var407) /* next on <var407:Iterator[nullable Object]>*/;
}
BREAK_label447: (void)0;
var448 = NEW_abstract_compiler__ExternCFile(&type_abstract_compiler__ExternCFile);
var449 = NEW_array__Array(&type_array__Arraykernel__Object);
var450 = 3;
((void (*)(val*, long))(var449->class->vft[COLOR_array__Array__with_capacity]))(var449, var450) /* with_capacity on <var449:Array[Object]>*/;
CHECK_NEW_array__Array(var449);
var_451 = var449;
if (varonce452) {
var453 = varonce452;
} else {
var454 = "";
var455 = 0;
var456 = string__NativeString__to_s_with_length(var454, var455);
var453 = var456;
varonce452 = var453;
}
((void (*)(val*, val*))(var_451->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_451, var453) /* add on <var_451:Array[Object]>*/;
var457 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__ModelBuilder__cc_paths]))(self) /* cc_paths on <self:ModelBuilder>*/;
var458 = ((val* (*)(val*))(var457->class->vft[COLOR_abstract_collection__Collection__first]))(var457) /* first on <var457:Array[String]>*/;
((void (*)(val*, val*))(var_451->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_451, var458) /* add on <var_451:Array[Object]>*/;
if (varonce459) {
var460 = varonce459;
} else {
var461 = "/gc_chooser.c";
var462 = 13;
var463 = string__NativeString__to_s_with_length(var461, var462);
var460 = var463;
varonce459 = var460;
}
((void (*)(val*, val*))(var_451->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_451, var460) /* add on <var_451:Array[Object]>*/;
var464 = ((val* (*)(val*))(var_451->class->vft[COLOR_string__Object__to_s]))(var_451) /* to_s on <var_451:Array[Object]>*/;
if (varonce465) {
var466 = varonce465;
} else {
var467 = "-DWITH_LIBGC";
var468 = 12;
var469 = string__NativeString__to_s_with_length(var467, var468);
var466 = var469;
varonce465 = var466;
}
((void (*)(val*, val*, val*))(var448->class->vft[COLOR_abstract_compiler__ExternCFile__init]))(var448, var464, var466) /* init on <var448:ExternCFile>*/;
CHECK_NEW_abstract_compiler__ExternCFile(var448);
var_gc_chooser = var448;
var470 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__extern_bodies]))(var_compiler) /* extern_bodies on <var_compiler:AbstractCompiler>*/;
((void (*)(val*, val*))(var470->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var470, var_gc_chooser) /* add on <var470:Array[ExternCFile]>*/;
var471 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__extern_bodies]))(var_compiler) /* extern_bodies on <var_compiler:AbstractCompiler>*/;
var472 = ((val* (*)(val*))(var471->class->vft[COLOR_abstract_collection__Collection__iterator]))(var471) /* iterator on <var471:Array[ExternCFile]>*/;
for(;;) {
var473 = ((short int (*)(val*))(var472->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var472) /* is_ok on <var472:Iterator[nullable Object]>*/;
if(!var473) break;
var474 = ((val* (*)(val*))(var472->class->vft[COLOR_abstract_collection__Iterator__item]))(var472) /* item on <var472:Iterator[nullable Object]>*/;
var_f475 = var474;
var476 = ((val* (*)(val*))(var_f475->class->vft[COLOR_abstract_compiler__ExternCFile__filename]))(var_f475) /* filename on <var_f475:ExternCFile>*/;
if (varonce477) {
var478 = varonce477;
} else {
var479 = ".c";
var480 = 2;
var481 = string__NativeString__to_s_with_length(var479, var480);
var478 = var481;
varonce477 = var478;
}
var482 = ((val* (*)(val*, val*))(var476->class->vft[COLOR_file__String__basename]))(var476, var478) /* basename on <var476:String>*/;
var_basename = var482;
var483 = NEW_array__Array(&type_array__Arraykernel__Object);
var484 = 3;
((void (*)(val*, long))(var483->class->vft[COLOR_array__Array__with_capacity]))(var483, var484) /* with_capacity on <var483:Array[Object]>*/;
CHECK_NEW_array__Array(var483);
var_485 = var483;
if (varonce486) {
var487 = varonce486;
} else {
var488 = "";
var489 = 0;
var490 = string__NativeString__to_s_with_length(var488, var489);
var487 = var490;
varonce486 = var487;
}
((void (*)(val*, val*))(var_485->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_485, var487) /* add on <var_485:Array[Object]>*/;
((void (*)(val*, val*))(var_485->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_485, var_basename) /* add on <var_485:Array[Object]>*/;
if (varonce491) {
var492 = varonce491;
} else {
var493 = ".extern.o";
var494 = 9;
var495 = string__NativeString__to_s_with_length(var493, var494);
var492 = var495;
varonce491 = var492;
}
((void (*)(val*, val*))(var_485->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_485, var492) /* add on <var_485:Array[Object]>*/;
var496 = ((val* (*)(val*))(var_485->class->vft[COLOR_string__Object__to_s]))(var_485) /* to_s on <var_485:Array[Object]>*/;
var_o497 = var496;
var498 = ((val* (*)(val*))(var_f475->class->vft[COLOR_abstract_compiler__ExternCFile__filename]))(var_f475) /* filename on <var_f475:ExternCFile>*/;
var499 = ((val* (*)(val*, val*))(var_orig_dir->class->vft[COLOR_file__String__join_path]))(var_orig_dir, var498) /* join_path on <var_orig_dir:String>*/;
var500 = ((val* (*)(val*))(var499->class->vft[COLOR_file__String__simplify_path]))(var499) /* simplify_path on <var499:String>*/;
var_ff = var500;
if (varonce501) {
var502 = varonce501;
} else {
var503 = ": ";
var504 = 2;
var505 = string__NativeString__to_s_with_length(var503, var504);
var502 = var505;
varonce501 = var502;
}
if (varonce506) {
var507 = varonce506;
} else {
var508 = "\n\11$(CC) $(CFLAGS) -D NONITCNI ";
var509 = 30;
var510 = string__NativeString__to_s_with_length(var508, var509);
var507 = var510;
varonce506 = var507;
}
var511 = ((val* (*)(val*))(var_f475->class->vft[COLOR_abstract_compiler__ExternCFile__cflags]))(var_f475) /* cflags on <var_f475:ExternCFile>*/;
if (varonce512) {
var513 = varonce512;
} else {
var514 = " -c -o ";
var515 = 7;
var516 = string__NativeString__to_s_with_length(var514, var515);
var513 = var516;
varonce512 = var513;
}
if (varonce517) {
var518 = varonce517;
} else {
var519 = " ";
var520 = 1;
var521 = string__NativeString__to_s_with_length(var519, var520);
var518 = var521;
varonce517 = var518;
}
if (varonce522) {
var523 = varonce522;
} else {
var524 = "\n\n";
var525 = 2;
var526 = string__NativeString__to_s_with_length(var524, var525);
var523 = var526;
varonce522 = var523;
}
var527 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var527 = array_instance Array[Object] */
var528 = 10;
var529 = NEW_array__NativeArray(var528, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var529)->values[0] = (val*) var_o497;
((struct instance_array__NativeArray*)var529)->values[1] = (val*) var502;
((struct instance_array__NativeArray*)var529)->values[2] = (val*) var_ff;
((struct instance_array__NativeArray*)var529)->values[3] = (val*) var507;
((struct instance_array__NativeArray*)var529)->values[4] = (val*) var511;
((struct instance_array__NativeArray*)var529)->values[5] = (val*) var513;
((struct instance_array__NativeArray*)var529)->values[6] = (val*) var_o497;
((struct instance_array__NativeArray*)var529)->values[7] = (val*) var518;
((struct instance_array__NativeArray*)var529)->values[8] = (val*) var_ff;
((struct instance_array__NativeArray*)var529)->values[9] = (val*) var523;
((void (*)(val*, val*, long))(var527->class->vft[COLOR_array__Array__with_native]))(var527, var529, var528) /* with_native on <var527:Array[Object]>*/;
CHECK_NEW_array__Array(var527);
}
var530 = ((val* (*)(val*))(var527->class->vft[COLOR_string__Object__to_s]))(var527) /* to_s on <var527:Array[Object]>*/;
((void (*)(val*, val*))(var_makefile->class->vft[COLOR_stream__OStream__write]))(var_makefile, var530) /* write on <var_makefile:OFStream>*/;
((void (*)(val*, val*))(var_ofiles->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_ofiles, var_o497) /* add on <var_ofiles:Array[String]>*/;
CONTINUE_label531: (void)0;
((void (*)(val*))(var472->class->vft[COLOR_abstract_collection__Iterator__next]))(var472) /* next on <var472:Iterator[nullable Object]>*/;
}
BREAK_label531: (void)0;
if (varonce532) {
var533 = varonce532;
} else {
var534 = ": ";
var535 = 2;
var536 = string__NativeString__to_s_with_length(var534, var535);
var533 = var536;
varonce532 = var533;
}
if (varonce537) {
var538 = varonce537;
} else {
var539 = " ";
var540 = 1;
var541 = string__NativeString__to_s_with_length(var539, var540);
var538 = var541;
varonce537 = var538;
}
var542 = ((val* (*)(val*, val*))(var_ofiles->class->vft[COLOR_string__Collection__join]))(var_ofiles, var538) /* join on <var_ofiles:Array[String]>*/;
if (varonce543) {
var544 = varonce543;
} else {
var545 = "\n\11$(CC) $(LDFLAGS) -o ";
var546 = 22;
var547 = string__NativeString__to_s_with_length(var545, var546);
var544 = var547;
varonce543 = var544;
}
if (varonce548) {
var549 = varonce548;
} else {
var550 = " ";
var551 = 1;
var552 = string__NativeString__to_s_with_length(var550, var551);
var549 = var552;
varonce548 = var549;
}
if (varonce553) {
var554 = varonce553;
} else {
var555 = " ";
var556 = 1;
var557 = string__NativeString__to_s_with_length(var555, var556);
var554 = var557;
varonce553 = var554;
}
var558 = ((val* (*)(val*, val*))(var_ofiles->class->vft[COLOR_string__Collection__join]))(var_ofiles, var554) /* join on <var_ofiles:Array[String]>*/;
if (varonce559) {
var560 = varonce559;
} else {
var561 = " $(LDLIBS)\n\n";
var562 = 12;
var563 = string__NativeString__to_s_with_length(var561, var562);
var560 = var563;
varonce559 = var560;
}
var564 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var564 = array_instance Array[Object] */
var565 = 8;
var566 = NEW_array__NativeArray(var565, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var566)->values[0] = (val*) var_outpath;
((struct instance_array__NativeArray*)var566)->values[1] = (val*) var533;
((struct instance_array__NativeArray*)var566)->values[2] = (val*) var542;
((struct instance_array__NativeArray*)var566)->values[3] = (val*) var544;
((struct instance_array__NativeArray*)var566)->values[4] = (val*) var_outpath;
((struct instance_array__NativeArray*)var566)->values[5] = (val*) var549;
((struct instance_array__NativeArray*)var566)->values[6] = (val*) var558;
((struct instance_array__NativeArray*)var566)->values[7] = (val*) var560;
((void (*)(val*, val*, long))(var564->class->vft[COLOR_array__Array__with_native]))(var564, var566, var565) /* with_native on <var564:Array[Object]>*/;
CHECK_NEW_array__Array(var564);
}
var567 = ((val* (*)(val*))(var564->class->vft[COLOR_string__Object__to_s]))(var564) /* to_s on <var564:Array[Object]>*/;
((void (*)(val*, val*))(var_makefile->class->vft[COLOR_stream__OStream__write]))(var_makefile, var567) /* write on <var_makefile:OFStream>*/;
if (varonce568) {
var569 = varonce568;
} else {
var570 = "clean:\n\11rm ";
var571 = 11;
var572 = string__NativeString__to_s_with_length(var570, var571);
var569 = var572;
varonce568 = var569;
}
if (varonce573) {
var574 = varonce573;
} else {
var575 = " ";
var576 = 1;
var577 = string__NativeString__to_s_with_length(var575, var576);
var574 = var577;
varonce573 = var574;
}
var578 = ((val* (*)(val*, val*))(var_ofiles->class->vft[COLOR_string__Collection__join]))(var_ofiles, var574) /* join on <var_ofiles:Array[String]>*/;
if (varonce579) {
var580 = varonce579;
} else {
var581 = " 2>/dev/null\n\n";
var582 = 14;
var583 = string__NativeString__to_s_with_length(var581, var582);
var580 = var583;
varonce579 = var580;
}
var584 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var584 = array_instance Array[Object] */
var585 = 3;
var586 = NEW_array__NativeArray(var585, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var586)->values[0] = (val*) var569;
((struct instance_array__NativeArray*)var586)->values[1] = (val*) var578;
((struct instance_array__NativeArray*)var586)->values[2] = (val*) var580;
((void (*)(val*, val*, long))(var584->class->vft[COLOR_array__Array__with_native]))(var584, var586, var585) /* with_native on <var584:Array[Object]>*/;
CHECK_NEW_array__Array(var584);
}
var587 = ((val* (*)(val*))(var584->class->vft[COLOR_string__Object__to_s]))(var584) /* to_s on <var584:Array[Object]>*/;
((void (*)(val*, val*))(var_makefile->class->vft[COLOR_stream__OStream__write]))(var_makefile, var587) /* write on <var_makefile:OFStream>*/;
((void (*)(val*))(var_makefile->class->vft[COLOR_stream__IOS__close]))(var_makefile) /* close on <var_makefile:OFStream>*/;
var588 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
if (varonce589) {
var590 = varonce589;
} else {
var591 = "Generated makefile: ";
var592 = 20;
var593 = string__NativeString__to_s_with_length(var591, var592);
var590 = var593;
varonce589 = var590;
}
var594 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var594 = array_instance Array[Object] */
var595 = 2;
var596 = NEW_array__NativeArray(var595, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var596)->values[0] = (val*) var590;
((struct instance_array__NativeArray*)var596)->values[1] = (val*) var_makepath;
((void (*)(val*, val*, long))(var594->class->vft[COLOR_array__Array__with_native]))(var594, var596, var595) /* with_native on <var594:Array[Object]>*/;
CHECK_NEW_array__Array(var594);
}
var597 = ((val* (*)(val*))(var594->class->vft[COLOR_string__Object__to_s]))(var594) /* to_s on <var594:Array[Object]>*/;
var598 = 2;
((void (*)(val*, val*, long))(var588->class->vft[COLOR_toolcontext__ToolContext__info]))(var588, var597, var598) /* info on <var588:ToolContext>*/;
var599 = ((long (*)(val*))(self->class->vft[COLOR_time__Object__get_time]))(self) /* get_time on <self:ModelBuilder>*/;
var_time1 = var599;
var600 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
if (varonce601) {
var602 = varonce601;
} else {
var603 = "*** END WRITING C: ";
var604 = 19;
var605 = string__NativeString__to_s_with_length(var603, var604);
var602 = var605;
varonce601 = var602;
}
{ /* Inline kernel#Int#- (var_time1,var_time0) */
var608 = var_time1 - var_time0;
var606 = var608;
goto RET_LABEL607;
RET_LABEL607:(void)0;
}
if (varonce609) {
var610 = varonce609;
} else {
var611 = " ***";
var612 = 4;
var613 = string__NativeString__to_s_with_length(var611, var612);
var610 = var613;
varonce609 = var610;
}
var614 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var614 = array_instance Array[Object] */
var615 = 3;
var616 = NEW_array__NativeArray(var615, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var616)->values[0] = (val*) var602;
var617 = BOX_kernel__Int(var606); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var616)->values[1] = (val*) var617;
((struct instance_array__NativeArray*)var616)->values[2] = (val*) var610;
((void (*)(val*, val*, long))(var614->class->vft[COLOR_array__Array__with_native]))(var614, var616, var615) /* with_native on <var614:Array[Object]>*/;
CHECK_NEW_array__Array(var614);
}
var618 = ((val* (*)(val*))(var614->class->vft[COLOR_string__Object__to_s]))(var614) /* to_s on <var614:Array[Object]>*/;
var619 = 2;
((void (*)(val*, val*, long))(var600->class->vft[COLOR_toolcontext__ToolContext__info]))(var600, var618, var619) /* info on <var600:ToolContext>*/;
var620 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
var621 = ((val* (*)(val*))(var620->class->vft[COLOR_abstract_compiler__ToolContext__opt_no_cc]))(var620) /* opt_no_cc on <var620:ToolContext>*/;
var622 = ((val* (*)(val*))(var621->class->vft[COLOR_opts__Option__value]))(var621) /* value on <var621:OptionBool>*/;
var623 = ((struct instance_kernel__Bool*)var622)->value; /* autounbox from nullable Object to Bool */;
if (var623){
goto RET_LABEL;
} else {
}
var_time0 = var_time1;
var624 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
if (varonce625) {
var626 = varonce625;
} else {
var627 = "*** COMPILING C ***";
var628 = 19;
var629 = string__NativeString__to_s_with_length(var627, var628);
var626 = var629;
varonce625 = var626;
}
var630 = 1;
((void (*)(val*, val*, long))(var624->class->vft[COLOR_toolcontext__ToolContext__info]))(var624, var626, var630) /* info on <var624:ToolContext>*/;
var631 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
var632 = ((val* (*)(val*))(var631->class->vft[COLOR_abstract_compiler__ToolContext__opt_make_flags]))(var631) /* opt_make_flags on <var631:ToolContext>*/;
var633 = ((val* (*)(val*))(var632->class->vft[COLOR_opts__Option__value]))(var632) /* value on <var632:OptionString>*/;
var_makeflags = var633;
var634 = NULL;
if (var_makeflags == NULL) {
var635 = 1; /* is null */
} else {
var635 = 0; /* arg is null but recv is not */
}
if (var635){
if (varonce636) {
var637 = varonce636;
} else {
var638 = "";
var639 = 0;
var640 = string__NativeString__to_s_with_length(var638, var639);
var637 = var640;
varonce636 = var637;
}
var_makeflags = var637;
} else {
}
var641 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
if (varonce642) {
var643 = varonce642;
} else {
var644 = "make -B -C ";
var645 = 11;
var646 = string__NativeString__to_s_with_length(var644, var645);
var643 = var646;
varonce642 = var643;
}
if (varonce647) {
var648 = varonce647;
} else {
var649 = " -f ";
var650 = 4;
var651 = string__NativeString__to_s_with_length(var649, var650);
var648 = var651;
varonce647 = var648;
}
if (varonce652) {
var653 = varonce652;
} else {
var654 = " -j 4 ";
var655 = 6;
var656 = string__NativeString__to_s_with_length(var654, var655);
var653 = var656;
varonce652 = var653;
}
var657 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var657 = array_instance Array[Object] */
var658 = 6;
var659 = NEW_array__NativeArray(var658, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var659)->values[0] = (val*) var643;
((struct instance_array__NativeArray*)var659)->values[1] = (val*) var_compile_dir;
((struct instance_array__NativeArray*)var659)->values[2] = (val*) var648;
((struct instance_array__NativeArray*)var659)->values[3] = (val*) var_makename;
((struct instance_array__NativeArray*)var659)->values[4] = (val*) var653;
((struct instance_array__NativeArray*)var659)->values[5] = (val*) var_makeflags;
((void (*)(val*, val*, long))(var657->class->vft[COLOR_array__Array__with_native]))(var657, var659, var658) /* with_native on <var657:Array[Object]>*/;
CHECK_NEW_array__Array(var657);
}
var660 = ((val* (*)(val*))(var657->class->vft[COLOR_string__Object__to_s]))(var657) /* to_s on <var657:Array[Object]>*/;
var661 = 2;
((void (*)(val*, val*, long))(var641->class->vft[COLOR_toolcontext__ToolContext__info]))(var641, var660, var661) /* info on <var641:ToolContext>*/;
var662 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
var663 = ((long (*)(val*))(var662->class->vft[COLOR_toolcontext__ToolContext__verbose_level]))(var662) /* verbose_level on <var662:ToolContext>*/;
var664 = 3;
{ /* Inline kernel#Int#>= (var663,var664) */
/* Covariant cast for argument 0 (i) <var664:Int> isa OTHER */
/* <var664:Int> isa OTHER */
var667 = 1; /* easy <var664:Int> isa OTHER*/
if (!var667) {
var_class_name670 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name670);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 262);
exit(1);
}
var671 = var663 >= var664;
var665 = var671;
goto RET_LABEL666;
RET_LABEL666:(void)0;
}
if (var665){
var672 = ((val* (*)(val*))(self->class->vft[COLOR_kernel__Object__sys]))(self) /* sys on <self:ModelBuilder>*/;
if (varonce673) {
var674 = varonce673;
} else {
var675 = "make -B -C ";
var676 = 11;
var677 = string__NativeString__to_s_with_length(var675, var676);
var674 = var677;
varonce673 = var674;
}
if (varonce678) {
var679 = varonce678;
} else {
var680 = " -f ";
var681 = 4;
var682 = string__NativeString__to_s_with_length(var680, var681);
var679 = var682;
varonce678 = var679;
}
if (varonce683) {
var684 = varonce683;
} else {
var685 = " -j 4 ";
var686 = 6;
var687 = string__NativeString__to_s_with_length(var685, var686);
var684 = var687;
varonce683 = var684;
}
if (varonce688) {
var689 = varonce688;
} else {
var690 = " 2>&1";
var691 = 5;
var692 = string__NativeString__to_s_with_length(var690, var691);
var689 = var692;
varonce688 = var689;
}
var693 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var693 = array_instance Array[Object] */
var694 = 7;
var695 = NEW_array__NativeArray(var694, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var695)->values[0] = (val*) var674;
((struct instance_array__NativeArray*)var695)->values[1] = (val*) var_compile_dir;
((struct instance_array__NativeArray*)var695)->values[2] = (val*) var679;
((struct instance_array__NativeArray*)var695)->values[3] = (val*) var_makename;
((struct instance_array__NativeArray*)var695)->values[4] = (val*) var684;
((struct instance_array__NativeArray*)var695)->values[5] = (val*) var_makeflags;
((struct instance_array__NativeArray*)var695)->values[6] = (val*) var689;
((void (*)(val*, val*, long))(var693->class->vft[COLOR_array__Array__with_native]))(var693, var695, var694) /* with_native on <var693:Array[Object]>*/;
CHECK_NEW_array__Array(var693);
}
var696 = ((val* (*)(val*))(var693->class->vft[COLOR_string__Object__to_s]))(var693) /* to_s on <var693:Array[Object]>*/;
var697 = ((long (*)(val*, val*))(var672->class->vft[COLOR_exec__Sys__system]))(var672, var696) /* system on <var672:Sys>*/;
var698 = BOX_kernel__Int(var697); /* autobox from Int to nullable Object */
var_res = var698;
} else {
var699 = ((val* (*)(val*))(self->class->vft[COLOR_kernel__Object__sys]))(self) /* sys on <self:ModelBuilder>*/;
if (varonce700) {
var701 = varonce700;
} else {
var702 = "make -B -C ";
var703 = 11;
var704 = string__NativeString__to_s_with_length(var702, var703);
var701 = var704;
varonce700 = var701;
}
if (varonce705) {
var706 = varonce705;
} else {
var707 = " -f ";
var708 = 4;
var709 = string__NativeString__to_s_with_length(var707, var708);
var706 = var709;
varonce705 = var706;
}
if (varonce710) {
var711 = varonce710;
} else {
var712 = " -j 4 ";
var713 = 6;
var714 = string__NativeString__to_s_with_length(var712, var713);
var711 = var714;
varonce710 = var711;
}
if (varonce715) {
var716 = varonce715;
} else {
var717 = " 2>&1 >/dev/null";
var718 = 16;
var719 = string__NativeString__to_s_with_length(var717, var718);
var716 = var719;
varonce715 = var716;
}
var720 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var720 = array_instance Array[Object] */
var721 = 7;
var722 = NEW_array__NativeArray(var721, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var722)->values[0] = (val*) var701;
((struct instance_array__NativeArray*)var722)->values[1] = (val*) var_compile_dir;
((struct instance_array__NativeArray*)var722)->values[2] = (val*) var706;
((struct instance_array__NativeArray*)var722)->values[3] = (val*) var_makename;
((struct instance_array__NativeArray*)var722)->values[4] = (val*) var711;
((struct instance_array__NativeArray*)var722)->values[5] = (val*) var_makeflags;
((struct instance_array__NativeArray*)var722)->values[6] = (val*) var716;
((void (*)(val*, val*, long))(var720->class->vft[COLOR_array__Array__with_native]))(var720, var722, var721) /* with_native on <var720:Array[Object]>*/;
CHECK_NEW_array__Array(var720);
}
var723 = ((val* (*)(val*))(var720->class->vft[COLOR_string__Object__to_s]))(var720) /* to_s on <var720:Array[Object]>*/;
var724 = ((long (*)(val*, val*))(var699->class->vft[COLOR_exec__Sys__system]))(var699, var723) /* system on <var699:Sys>*/;
var725 = BOX_kernel__Int(var724); /* autobox from Int to nullable Object */
var_res = var725;
}
var726 = 0;
{ /* Inline kernel#Int#!= (var_res,var726) */
var729 = (var_res != NULL) && (var_res->class == &class_kernel__Int);
if (var729) {
var730 = ((struct instance_kernel__Int*)var_res)->value; /* autounbox from nullable Object to Int */;
var729 = (var730 == var726);
}
var731 = !var729;
var727 = var731;
goto RET_LABEL728;
RET_LABEL728:(void)0;
}
if (var727){
var732 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
var733 = NULL;
if (varonce734) {
var735 = varonce734;
} else {
var736 = "make failed! Error code: ";
var737 = 25;
var738 = string__NativeString__to_s_with_length(var736, var737);
var735 = var738;
varonce734 = var735;
}
if (varonce739) {
var740 = varonce739;
} else {
var741 = ".";
var742 = 1;
var743 = string__NativeString__to_s_with_length(var741, var742);
var740 = var743;
varonce739 = var740;
}
var744 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var744 = array_instance Array[Object] */
var745 = 3;
var746 = NEW_array__NativeArray(var745, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var746)->values[0] = (val*) var735;
((struct instance_array__NativeArray*)var746)->values[1] = (val*) var_res;
((struct instance_array__NativeArray*)var746)->values[2] = (val*) var740;
((void (*)(val*, val*, long))(var744->class->vft[COLOR_array__Array__with_native]))(var744, var746, var745) /* with_native on <var744:Array[Object]>*/;
CHECK_NEW_array__Array(var744);
}
var747 = ((val* (*)(val*))(var744->class->vft[COLOR_string__Object__to_s]))(var744) /* to_s on <var744:Array[Object]>*/;
((void (*)(val*, val*, val*))(var732->class->vft[COLOR_toolcontext__ToolContext__error]))(var732, var733, var747) /* error on <var732:ToolContext>*/;
} else {
}
var748 = ((long (*)(val*))(self->class->vft[COLOR_time__Object__get_time]))(self) /* get_time on <self:ModelBuilder>*/;
var_time1 = var748;
var749 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
if (varonce750) {
var751 = varonce750;
} else {
var752 = "*** END COMPILING C: ";
var753 = 21;
var754 = string__NativeString__to_s_with_length(var752, var753);
var751 = var754;
varonce750 = var751;
}
{ /* Inline kernel#Int#- (var_time1,var_time0) */
var757 = var_time1 - var_time0;
var755 = var757;
goto RET_LABEL756;
RET_LABEL756:(void)0;
}
if (varonce758) {
var759 = varonce758;
} else {
var760 = " ***";
var761 = 4;
var762 = string__NativeString__to_s_with_length(var760, var761);
var759 = var762;
varonce758 = var759;
}
var763 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var763 = array_instance Array[Object] */
var764 = 3;
var765 = NEW_array__NativeArray(var764, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var765)->values[0] = (val*) var751;
var766 = BOX_kernel__Int(var755); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var765)->values[1] = (val*) var766;
((struct instance_array__NativeArray*)var765)->values[2] = (val*) var759;
((void (*)(val*, val*, long))(var763->class->vft[COLOR_array__Array__with_native]))(var763, var765, var764) /* with_native on <var763:Array[Object]>*/;
CHECK_NEW_array__Array(var763);
}
var767 = ((val* (*)(val*))(var763->class->vft[COLOR_string__Object__to_s]))(var763) /* to_s on <var763:Array[Object]>*/;
var768 = 2;
((void (*)(val*, val*, long))(var749->class->vft[COLOR_toolcontext__ToolContext__info]))(var749, var767, var768) /* info on <var749:ToolContext>*/;
RET_LABEL:;
}
/* method abstract_compiler#ModelBuilder#write_and_make for (self: Object, AbstractCompiler) */
void VIRTUAL_abstract_compiler__ModelBuilder__write_and_make(val* self, val* p0) {
abstract_compiler__ModelBuilder__write_and_make(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#mainmodule for (self: AbstractCompiler): MModule */
val* abstract_compiler__AbstractCompiler__mainmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dmainmodule].val; /* @mainmodule on <self:AbstractCompiler> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mainmodule");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 259);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 263);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 266);
exit(1);
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
CHECK_NEW_abstract_compiler__CodeFile(var1);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 288);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 292);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 295);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 302);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 307);
exit(1);
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
/* method abstract_compiler#AbstractCompiler#compile_header for (self: AbstractCompiler) */
void abstract_compiler__AbstractCompiler__compile_header(val* self) {
val* var /* : CodeWriter */;
val* var_v /* var v: CodeWriter */;
val* var1 /* : CodeWriter */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
val* var6 /* : CodeWriter */;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : String */;
val* var12 /* : CodeWriter */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : String */;
val* var18 /* : CodeWriter */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : String */;
val* var24 /* : CodeWriter */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
long var28 /* : Int */;
val* var29 /* : String */;
val* var30 /* : CodeWriter */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : String */;
val* var36 /* : CodeWriter */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
long var40 /* : Int */;
val* var41 /* : String */;
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:AbstractCompiler>*/;
var_v = var;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:AbstractCompiler>*/;
if (varonce) {
var2 = varonce;
} else {
var3 = "#include <stdlib.h>";
var4 = 19;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
((void (*)(val*, val*))(var1->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var1, var2) /* add_decl on <var1:CodeWriter>*/;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:AbstractCompiler>*/;
if (varonce7) {
var8 = varonce7;
} else {
var9 = "#include <stdio.h>";
var10 = 18;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce7 = var8;
}
((void (*)(val*, val*))(var6->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var6, var8) /* add_decl on <var6:CodeWriter>*/;
var12 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:AbstractCompiler>*/;
if (varonce13) {
var14 = varonce13;
} else {
var15 = "#include <string.h>";
var16 = 19;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
((void (*)(val*, val*))(var12->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var12, var14) /* add_decl on <var12:CodeWriter>*/;
var18 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:AbstractCompiler>*/;
if (varonce19) {
var20 = varonce19;
} else {
var21 = "#include <gc_chooser.h>";
var22 = 23;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
((void (*)(val*, val*))(var18->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var18, var20) /* add_decl on <var18:CodeWriter>*/;
((void (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__compile_header_structs]))(self) /* compile_header_structs on <self:AbstractCompiler>*/;
var24 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:AbstractCompiler>*/;
if (varonce25) {
var26 = varonce25;
} else {
var27 = "extern int glob_argc;";
var28 = 21;
var29 = string__NativeString__to_s_with_length(var27, var28);
var26 = var29;
varonce25 = var26;
}
((void (*)(val*, val*))(var24->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var24, var26) /* add_decl on <var24:CodeWriter>*/;
var30 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:AbstractCompiler>*/;
if (varonce31) {
var32 = varonce31;
} else {
var33 = "extern char **glob_argv;";
var34 = 24;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
((void (*)(val*, val*))(var30->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var30, var32) /* add_decl on <var30:CodeWriter>*/;
var36 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:AbstractCompiler>*/;
if (varonce37) {
var38 = varonce37;
} else {
var39 = "extern val *glob_sys;";
var40 = 21;
var41 = string__NativeString__to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
((void (*)(val*, val*))(var36->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var36, var38) /* add_decl on <var36:CodeWriter>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 326);
exit(1);
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
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
static val* varonce5;
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
val* var20 /* : Array[String] */;
val* var21 /* : Iterator[nullable Object] */;
short int var22 /* : Bool */;
val* var23 /* : nullable Object */;
val* var_tag /* var tag: String */;
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
val* var34 /* : Array[Object] */;
long var35 /* : Int */;
val* var36 /* : NativeArray[Object] */;
val* var37 /* : String */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
long var41 /* : Int */;
val* var42 /* : String */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
long var46 /* : Int */;
val* var47 /* : String */;
val* var48 /* : Array[Object] */;
long var49 /* : Int */;
val* var50 /* : NativeArray[Object] */;
val* var51 /* : String */;
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
val* var62 /* : Array[Object] */;
long var63 /* : Int */;
val* var64 /* : NativeArray[Object] */;
val* var65 /* : String */;
val* var66 /* : AbstractCompiler */;
val* var67 /* : CodeWriter */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : NativeString */;
long var71 /* : Int */;
val* var72 /* : String */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
long var76 /* : Int */;
val* var77 /* : String */;
val* var78 /* : Array[Object] */;
long var79 /* : Int */;
val* var80 /* : NativeArray[Object] */;
val* var81 /* : String */;
val* var82 /* : AbstractCompiler */;
val* var83 /* : CodeWriter */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : NativeString */;
long var87 /* : Int */;
val* var88 /* : String */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
long var92 /* : Int */;
val* var93 /* : String */;
val* var94 /* : Array[Object] */;
long var95 /* : Int */;
val* var96 /* : NativeArray[Object] */;
val* var97 /* : String */;
val* var98 /* : AbstractCompiler */;
val* var99 /* : CodeWriter */;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : NativeString */;
long var103 /* : Int */;
val* var104 /* : String */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
long var108 /* : Int */;
val* var109 /* : String */;
val* var110 /* : Array[Object] */;
long var111 /* : Int */;
val* var112 /* : NativeArray[Object] */;
val* var113 /* : String */;
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
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : NativeString */;
long var127 /* : Int */;
val* var128 /* : String */;
val* var129 /* : MModule */;
val* var130 /* : nullable MClassType */;
val* var_main_type /* var main_type: nullable MClassType */;
val* var131 /* : null */;
short int var132 /* : Bool */;
val* var133 /* : AbstractCompiler */;
val* var134 /* : MModule */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var135 /* : RuntimeVariable */;
val* var_glob_sys /* var glob_sys: RuntimeVariable */;
static val* varonce136;
val* var137 /* : String */;
char* var138 /* : NativeString */;
long var139 /* : Int */;
val* var140 /* : String */;
static val* varonce141;
val* var142 /* : String */;
char* var143 /* : NativeString */;
long var144 /* : Int */;
val* var145 /* : String */;
val* var146 /* : Array[Object] */;
long var147 /* : Int */;
val* var148 /* : NativeArray[Object] */;
val* var149 /* : String */;
static val* varonce150;
val* var151 /* : String */;
char* var152 /* : NativeString */;
long var153 /* : Int */;
val* var154 /* : String */;
val* var155 /* : MClass */;
val* var156 /* : nullable MMethod */;
val* var_main_init /* var main_init: nullable MMethod */;
val* var157 /* : null */;
short int var158 /* : Bool */;
val* var159 /* : Array[RuntimeVariable] */;
long var160 /* : Int */;
val* var161 /* : NativeArray[RuntimeVariable] */;
val* var162 /* : nullable RuntimeVariable */;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : NativeString */;
long var166 /* : Int */;
val* var167 /* : String */;
val* var168 /* : MClass */;
val* var169 /* : nullable MMethod */;
val* var_main_method /* var main_method: nullable MMethod */;
val* var170 /* : null */;
short int var171 /* : Bool */;
val* var172 /* : Array[RuntimeVariable] */;
long var173 /* : Int */;
val* var174 /* : NativeArray[RuntimeVariable] */;
val* var175 /* : nullable RuntimeVariable */;
val* var176 /* : ModelBuilder */;
val* var177 /* : ToolContext */;
val* var178 /* : OptionBool */;
val* var179 /* : nullable Object */;
short int var180 /* : Bool */;
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
val* var201 /* : Array[String] */;
val* var202 /* : Iterator[nullable Object] */;
short int var203 /* : Bool */;
val* var204 /* : nullable Object */;
val* var_tag205 /* var tag: String */;
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
val* var216 /* : Array[Object] */;
long var217 /* : Int */;
val* var218 /* : NativeArray[Object] */;
val* var219 /* : String */;
static val* varonce220;
val* var221 /* : String */;
char* var222 /* : NativeString */;
long var223 /* : Int */;
val* var224 /* : String */;
static val* varonce225;
val* var226 /* : String */;
char* var227 /* : NativeString */;
long var228 /* : Int */;
val* var229 /* : String */;
static val* varonce230;
val* var231 /* : String */;
char* var232 /* : NativeString */;
long var233 /* : Int */;
val* var234 /* : String */;
static val* varonce235;
val* var236 /* : String */;
char* var237 /* : NativeString */;
long var238 /* : Int */;
val* var239 /* : String */;
static val* varonce240;
val* var241 /* : String */;
char* var242 /* : NativeString */;
long var243 /* : Int */;
val* var244 /* : String */;
val* var245 /* : Array[Object] */;
long var246 /* : Int */;
val* var247 /* : NativeArray[Object] */;
val* var248 /* : String */;
static val* varonce249;
val* var250 /* : String */;
char* var251 /* : NativeString */;
long var252 /* : Int */;
val* var253 /* : String */;
static val* varonce254;
val* var255 /* : String */;
char* var256 /* : NativeString */;
long var257 /* : Int */;
val* var258 /* : String */;
val* var259 /* : Array[Object] */;
long var260 /* : Int */;
val* var261 /* : NativeArray[Object] */;
val* var262 /* : String */;
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
static val* varonce282;
val* var283 /* : String */;
char* var284 /* : NativeString */;
long var285 /* : Int */;
val* var286 /* : String */;
val* var287 /* : Array[Object] */;
long var288 /* : Int */;
val* var289 /* : NativeArray[Object] */;
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
val* var301 /* : Array[Object] */;
long var302 /* : Int */;
val* var303 /* : NativeArray[Object] */;
val* var304 /* : String */;
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
val* var316 /* : Array[String] */;
val* var317 /* : Array[nullable Object] */;
val* var_tags /* var tags: Array[String] */;
static val* varonce318;
val* var319 /* : String */;
char* var320 /* : NativeString */;
long var321 /* : Int */;
val* var322 /* : String */;
val* var323 /* : Iterator[nullable Object] */;
short int var324 /* : Bool */;
val* var325 /* : nullable Object */;
val* var_tag326 /* var tag: String */;
static val* varonce327;
val* var328 /* : String */;
char* var329 /* : NativeString */;
long var330 /* : Int */;
val* var331 /* : String */;
static val* varonce332;
val* var333 /* : String */;
char* var334 /* : NativeString */;
long var335 /* : Int */;
val* var336 /* : String */;
val* var337 /* : Array[Object] */;
long var338 /* : Int */;
val* var339 /* : NativeArray[Object] */;
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
val* var356 /* : Array[Object] */;
long var357 /* : Int */;
val* var358 /* : NativeArray[Object] */;
val* var359 /* : String */;
static val* varonce360;
val* var361 /* : String */;
char* var362 /* : NativeString */;
long var363 /* : Int */;
val* var364 /* : String */;
static val* varonce365;
val* var366 /* : String */;
char* var367 /* : NativeString */;
long var368 /* : Int */;
val* var369 /* : String */;
static val* varonce370;
val* var371 /* : String */;
char* var372 /* : NativeString */;
long var373 /* : Int */;
val* var374 /* : String */;
val* var375 /* : Array[Object] */;
long var376 /* : Int */;
val* var377 /* : NativeArray[Object] */;
val* var378 /* : String */;
static val* varonce379;
val* var380 /* : String */;
char* var381 /* : NativeString */;
long var382 /* : Int */;
val* var383 /* : String */;
static val* varonce384;
val* var385 /* : String */;
char* var386 /* : NativeString */;
long var387 /* : Int */;
val* var388 /* : String */;
static val* varonce389;
val* var390 /* : String */;
char* var391 /* : NativeString */;
long var392 /* : Int */;
val* var393 /* : String */;
val* var394 /* : Array[Object] */;
long var395 /* : Int */;
val* var396 /* : NativeArray[Object] */;
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
static val* varonce408;
val* var409 /* : String */;
char* var410 /* : NativeString */;
long var411 /* : Int */;
val* var412 /* : String */;
val* var413 /* : Array[Object] */;
long var414 /* : Int */;
val* var415 /* : NativeArray[Object] */;
val* var416 /* : String */;
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
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_visitor]))(self) /* new_visitor on <self:AbstractCompiler>*/;
var_v = var;
if (varonce) {
var1 = varonce;
} else {
var2 = "int glob_argc;";
var3 = 14;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var1) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce5) {
var6 = varonce5;
} else {
var7 = "char **glob_argv;";
var8 = 17;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce5 = var6;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var6) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce10) {
var11 = varonce10;
} else {
var12 = "val *glob_sys;";
var13 = 14;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce10 = var11;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var11) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
var15 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(self) /* modelbuilder on <self:AbstractCompiler>*/;
var16 = ((val* (*)(val*))(var15->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var15) /* toolcontext on <var15:ModelBuilder>*/;
var17 = ((val* (*)(val*))(var16->class->vft[COLOR_abstract_compiler__ToolContext__opt_typing_test_metrics]))(var16) /* opt_typing_test_metrics on <var16:ToolContext>*/;
var18 = ((val* (*)(val*))(var17->class->vft[COLOR_opts__Option__value]))(var17) /* value on <var17:OptionBool>*/;
var19 = ((struct instance_kernel__Bool*)var18)->value; /* autounbox from nullable Object to Bool */;
if (var19){
var20 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__count_type_test_tags]))(self) /* count_type_test_tags on <self:AbstractCompiler>*/;
var21 = ((val* (*)(val*))(var20->class->vft[COLOR_abstract_collection__Collection__iterator]))(var20) /* iterator on <var20:Array[String]>*/;
for(;;) {
var22 = ((short int (*)(val*))(var21->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var21) /* is_ok on <var21:Iterator[nullable Object]>*/;
if(!var22) break;
var23 = ((val* (*)(val*))(var21->class->vft[COLOR_abstract_collection__Iterator__item]))(var21) /* item on <var21:Iterator[nullable Object]>*/;
var_tag = var23;
if (varonce24) {
var25 = varonce24;
} else {
var26 = "long count_type_test_resolved_";
var27 = 30;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
if (varonce29) {
var30 = varonce29;
} else {
var31 = ";";
var32 = 1;
var33 = string__NativeString__to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
var34 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var34 = array_instance Array[Object] */
var35 = 3;
var36 = NEW_array__NativeArray(var35, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var36)->values[0] = (val*) var25;
((struct instance_array__NativeArray*)var36)->values[1] = (val*) var_tag;
((struct instance_array__NativeArray*)var36)->values[2] = (val*) var30;
((void (*)(val*, val*, long))(var34->class->vft[COLOR_array__Array__with_native]))(var34, var36, var35) /* with_native on <var34:Array[Object]>*/;
CHECK_NEW_array__Array(var34);
}
var37 = ((val* (*)(val*))(var34->class->vft[COLOR_string__Object__to_s]))(var34) /* to_s on <var34:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var37) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce38) {
var39 = varonce38;
} else {
var40 = "long count_type_test_unresolved_";
var41 = 32;
var42 = string__NativeString__to_s_with_length(var40, var41);
var39 = var42;
varonce38 = var39;
}
if (varonce43) {
var44 = varonce43;
} else {
var45 = ";";
var46 = 1;
var47 = string__NativeString__to_s_with_length(var45, var46);
var44 = var47;
varonce43 = var44;
}
var48 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var48 = array_instance Array[Object] */
var49 = 3;
var50 = NEW_array__NativeArray(var49, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var50)->values[0] = (val*) var39;
((struct instance_array__NativeArray*)var50)->values[1] = (val*) var_tag;
((struct instance_array__NativeArray*)var50)->values[2] = (val*) var44;
((void (*)(val*, val*, long))(var48->class->vft[COLOR_array__Array__with_native]))(var48, var50, var49) /* with_native on <var48:Array[Object]>*/;
CHECK_NEW_array__Array(var48);
}
var51 = ((val* (*)(val*))(var48->class->vft[COLOR_string__Object__to_s]))(var48) /* to_s on <var48:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var51) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce52) {
var53 = varonce52;
} else {
var54 = "long count_type_test_skipped_";
var55 = 29;
var56 = string__NativeString__to_s_with_length(var54, var55);
var53 = var56;
varonce52 = var53;
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
var63 = 3;
var64 = NEW_array__NativeArray(var63, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var64)->values[0] = (val*) var53;
((struct instance_array__NativeArray*)var64)->values[1] = (val*) var_tag;
((struct instance_array__NativeArray*)var64)->values[2] = (val*) var58;
((void (*)(val*, val*, long))(var62->class->vft[COLOR_array__Array__with_native]))(var62, var64, var63) /* with_native on <var62:Array[Object]>*/;
CHECK_NEW_array__Array(var62);
}
var65 = ((val* (*)(val*))(var62->class->vft[COLOR_string__Object__to_s]))(var62) /* to_s on <var62:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var65) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
var66 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var67 = ((val* (*)(val*))(var66->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(var66) /* header on <var66:AbstractCompiler>*/;
if (varonce68) {
var69 = varonce68;
} else {
var70 = "extern long count_type_test_resolved_";
var71 = 37;
var72 = string__NativeString__to_s_with_length(var70, var71);
var69 = var72;
varonce68 = var69;
}
if (varonce73) {
var74 = varonce73;
} else {
var75 = ";";
var76 = 1;
var77 = string__NativeString__to_s_with_length(var75, var76);
var74 = var77;
varonce73 = var74;
}
var78 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var78 = array_instance Array[Object] */
var79 = 3;
var80 = NEW_array__NativeArray(var79, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var80)->values[0] = (val*) var69;
((struct instance_array__NativeArray*)var80)->values[1] = (val*) var_tag;
((struct instance_array__NativeArray*)var80)->values[2] = (val*) var74;
((void (*)(val*, val*, long))(var78->class->vft[COLOR_array__Array__with_native]))(var78, var80, var79) /* with_native on <var78:Array[Object]>*/;
CHECK_NEW_array__Array(var78);
}
var81 = ((val* (*)(val*))(var78->class->vft[COLOR_string__Object__to_s]))(var78) /* to_s on <var78:Array[Object]>*/;
((void (*)(val*, val*))(var67->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var67, var81) /* add_decl on <var67:CodeWriter>*/;
var82 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var83 = ((val* (*)(val*))(var82->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(var82) /* header on <var82:AbstractCompiler>*/;
if (varonce84) {
var85 = varonce84;
} else {
var86 = "extern long count_type_test_unresolved_";
var87 = 39;
var88 = string__NativeString__to_s_with_length(var86, var87);
var85 = var88;
varonce84 = var85;
}
if (varonce89) {
var90 = varonce89;
} else {
var91 = ";";
var92 = 1;
var93 = string__NativeString__to_s_with_length(var91, var92);
var90 = var93;
varonce89 = var90;
}
var94 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var94 = array_instance Array[Object] */
var95 = 3;
var96 = NEW_array__NativeArray(var95, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var96)->values[0] = (val*) var85;
((struct instance_array__NativeArray*)var96)->values[1] = (val*) var_tag;
((struct instance_array__NativeArray*)var96)->values[2] = (val*) var90;
((void (*)(val*, val*, long))(var94->class->vft[COLOR_array__Array__with_native]))(var94, var96, var95) /* with_native on <var94:Array[Object]>*/;
CHECK_NEW_array__Array(var94);
}
var97 = ((val* (*)(val*))(var94->class->vft[COLOR_string__Object__to_s]))(var94) /* to_s on <var94:Array[Object]>*/;
((void (*)(val*, val*))(var83->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var83, var97) /* add_decl on <var83:CodeWriter>*/;
var98 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var99 = ((val* (*)(val*))(var98->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(var98) /* header on <var98:AbstractCompiler>*/;
if (varonce100) {
var101 = varonce100;
} else {
var102 = "extern long count_type_test_skipped_";
var103 = 36;
var104 = string__NativeString__to_s_with_length(var102, var103);
var101 = var104;
varonce100 = var101;
}
if (varonce105) {
var106 = varonce105;
} else {
var107 = ";";
var108 = 1;
var109 = string__NativeString__to_s_with_length(var107, var108);
var106 = var109;
varonce105 = var106;
}
var110 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var110 = array_instance Array[Object] */
var111 = 3;
var112 = NEW_array__NativeArray(var111, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var112)->values[0] = (val*) var101;
((struct instance_array__NativeArray*)var112)->values[1] = (val*) var_tag;
((struct instance_array__NativeArray*)var112)->values[2] = (val*) var106;
((void (*)(val*, val*, long))(var110->class->vft[COLOR_array__Array__with_native]))(var110, var112, var111) /* with_native on <var110:Array[Object]>*/;
CHECK_NEW_array__Array(var110);
}
var113 = ((val* (*)(val*))(var110->class->vft[COLOR_string__Object__to_s]))(var110) /* to_s on <var110:Array[Object]>*/;
((void (*)(val*, val*))(var99->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var99, var113) /* add_decl on <var99:CodeWriter>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var21->class->vft[COLOR_abstract_collection__Iterator__next]))(var21) /* next on <var21:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
} else {
}
if (varonce114) {
var115 = varonce114;
} else {
var116 = "int main(int argc, char** argv) {";
var117 = 33;
var118 = string__NativeString__to_s_with_length(var116, var117);
var115 = var118;
varonce114 = var115;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var115) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce119) {
var120 = varonce119;
} else {
var121 = "glob_argc = argc; glob_argv = argv;";
var122 = 35;
var123 = string__NativeString__to_s_with_length(var121, var122);
var120 = var123;
varonce119 = var120;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var120) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce124) {
var125 = varonce124;
} else {
var126 = "initialize_gc_option();";
var127 = 23;
var128 = string__NativeString__to_s_with_length(var126, var127);
var125 = var128;
varonce124 = var125;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var125) /* add on <var_v:AbstractCompilerVisitor>*/;
var129 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:AbstractCompiler>*/;
var130 = ((val* (*)(val*))(var129->class->vft[COLOR_model__MModule__sys_type]))(var129) /* sys_type on <var129:MModule>*/;
var_main_type = var130;
var131 = NULL;
if (var_main_type == NULL) {
var132 = 0; /* is null */
} else {
var132 = 1; /* arg is null and recv is not */
}
if (var132){
var133 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var134 = ((val* (*)(val*))(var133->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var133) /* mainmodule on <var133:AbstractCompiler>*/;
var_mainmodule = var134;
var135 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__init_instance]))(var_v, var_main_type) /* init_instance on <var_v:AbstractCompilerVisitor>*/;
var_glob_sys = var135;
if (varonce136) {
var137 = varonce136;
} else {
var138 = "glob_sys = ";
var139 = 11;
var140 = string__NativeString__to_s_with_length(var138, var139);
var137 = var140;
varonce136 = var137;
}
if (varonce141) {
var142 = varonce141;
} else {
var143 = ";";
var144 = 1;
var145 = string__NativeString__to_s_with_length(var143, var144);
var142 = var145;
varonce141 = var142;
}
var146 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var146 = array_instance Array[Object] */
var147 = 3;
var148 = NEW_array__NativeArray(var147, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var148)->values[0] = (val*) var137;
((struct instance_array__NativeArray*)var148)->values[1] = (val*) var_glob_sys;
((struct instance_array__NativeArray*)var148)->values[2] = (val*) var142;
((void (*)(val*, val*, long))(var146->class->vft[COLOR_array__Array__with_native]))(var146, var148, var147) /* with_native on <var146:Array[Object]>*/;
CHECK_NEW_array__Array(var146);
}
var149 = ((val* (*)(val*))(var146->class->vft[COLOR_string__Object__to_s]))(var146) /* to_s on <var146:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var149) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce150) {
var151 = varonce150;
} else {
var152 = "init";
var153 = 4;
var154 = string__NativeString__to_s_with_length(var152, var153);
var151 = var154;
varonce150 = var151;
}
var155 = ((val* (*)(val*))(var_main_type->class->vft[COLOR_model__MClassType__mclass]))(var_main_type) /* mclass on <var_main_type:nullable MClassType(MClassType)>*/;
var156 = ((val* (*)(val*, val*, val*))(var_mainmodule->class->vft[COLOR_model__MModule__try_get_primitive_method]))(var_mainmodule, var151, var155) /* try_get_primitive_method on <var_mainmodule:MModule>*/;
var_main_init = var156;
var157 = NULL;
if (var_main_init == NULL) {
var158 = 0; /* is null */
} else {
var158 = 1; /* arg is null and recv is not */
}
if (var158){
var159 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{ /* var159 = array_instance Array[RuntimeVariable] */
var160 = 1;
var161 = NEW_array__NativeArray(var160, &type_array__NativeArrayabstract_compiler__RuntimeVariable);
((struct instance_array__NativeArray*)var161)->values[0] = (val*) var_glob_sys;
((void (*)(val*, val*, long))(var159->class->vft[COLOR_array__Array__with_native]))(var159, var161, var160) /* with_native on <var159:Array[RuntimeVariable]>*/;
CHECK_NEW_array__Array(var159);
}
var162 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__send]))(var_v, var_main_init, var159) /* send on <var_v:AbstractCompilerVisitor>*/;
var162;
} else {
}
if (varonce163) {
var164 = varonce163;
} else {
var165 = "main";
var166 = 4;
var167 = string__NativeString__to_s_with_length(var165, var166);
var164 = var167;
varonce163 = var164;
}
var168 = ((val* (*)(val*))(var_main_type->class->vft[COLOR_model__MClassType__mclass]))(var_main_type) /* mclass on <var_main_type:nullable MClassType(MClassType)>*/;
var169 = ((val* (*)(val*, val*, val*))(var_mainmodule->class->vft[COLOR_model__MModule__try_get_primitive_method]))(var_mainmodule, var164, var168) /* try_get_primitive_method on <var_mainmodule:MModule>*/;
var_main_method = var169;
var170 = NULL;
if (var_main_method == NULL) {
var171 = 0; /* is null */
} else {
var171 = 1; /* arg is null and recv is not */
}
if (var171){
var172 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{ /* var172 = array_instance Array[RuntimeVariable] */
var173 = 1;
var174 = NEW_array__NativeArray(var173, &type_array__NativeArrayabstract_compiler__RuntimeVariable);
((struct instance_array__NativeArray*)var174)->values[0] = (val*) var_glob_sys;
((void (*)(val*, val*, long))(var172->class->vft[COLOR_array__Array__with_native]))(var172, var174, var173) /* with_native on <var172:Array[RuntimeVariable]>*/;
CHECK_NEW_array__Array(var172);
}
var175 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__send]))(var_v, var_main_method, var172) /* send on <var_v:AbstractCompilerVisitor>*/;
var175;
} else {
}
} else {
}
var176 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(self) /* modelbuilder on <self:AbstractCompiler>*/;
var177 = ((val* (*)(val*))(var176->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var176) /* toolcontext on <var176:ModelBuilder>*/;
var178 = ((val* (*)(val*))(var177->class->vft[COLOR_abstract_compiler__ToolContext__opt_typing_test_metrics]))(var177) /* opt_typing_test_metrics on <var177:ToolContext>*/;
var179 = ((val* (*)(val*))(var178->class->vft[COLOR_opts__Option__value]))(var178) /* value on <var178:OptionBool>*/;
var180 = ((struct instance_kernel__Bool*)var179)->value; /* autounbox from nullable Object to Bool */;
if (var180){
if (varonce181) {
var182 = varonce181;
} else {
var183 = "long count_type_test_resolved_total = 0;";
var184 = 40;
var185 = string__NativeString__to_s_with_length(var183, var184);
var182 = var185;
varonce181 = var182;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var182) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce186) {
var187 = varonce186;
} else {
var188 = "long count_type_test_unresolved_total = 0;";
var189 = 42;
var190 = string__NativeString__to_s_with_length(var188, var189);
var187 = var190;
varonce186 = var187;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var187) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce191) {
var192 = varonce191;
} else {
var193 = "long count_type_test_skipped_total = 0;";
var194 = 39;
var195 = string__NativeString__to_s_with_length(var193, var194);
var192 = var195;
varonce191 = var192;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var192) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce196) {
var197 = varonce196;
} else {
var198 = "long count_type_test_total_total = 0;";
var199 = 37;
var200 = string__NativeString__to_s_with_length(var198, var199);
var197 = var200;
varonce196 = var197;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var197) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
var201 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__count_type_test_tags]))(self) /* count_type_test_tags on <self:AbstractCompiler>*/;
var202 = ((val* (*)(val*))(var201->class->vft[COLOR_abstract_collection__Collection__iterator]))(var201) /* iterator on <var201:Array[String]>*/;
for(;;) {
var203 = ((short int (*)(val*))(var202->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var202) /* is_ok on <var202:Iterator[nullable Object]>*/;
if(!var203) break;
var204 = ((val* (*)(val*))(var202->class->vft[COLOR_abstract_collection__Iterator__item]))(var202) /* item on <var202:Iterator[nullable Object]>*/;
var_tag205 = var204;
if (varonce206) {
var207 = varonce206;
} else {
var208 = "long count_type_test_total_";
var209 = 27;
var210 = string__NativeString__to_s_with_length(var208, var209);
var207 = var210;
varonce206 = var207;
}
if (varonce211) {
var212 = varonce211;
} else {
var213 = ";";
var214 = 1;
var215 = string__NativeString__to_s_with_length(var213, var214);
var212 = var215;
varonce211 = var212;
}
var216 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var216 = array_instance Array[Object] */
var217 = 3;
var218 = NEW_array__NativeArray(var217, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var218)->values[0] = (val*) var207;
((struct instance_array__NativeArray*)var218)->values[1] = (val*) var_tag205;
((struct instance_array__NativeArray*)var218)->values[2] = (val*) var212;
((void (*)(val*, val*, long))(var216->class->vft[COLOR_array__Array__with_native]))(var216, var218, var217) /* with_native on <var216:Array[Object]>*/;
CHECK_NEW_array__Array(var216);
}
var219 = ((val* (*)(val*))(var216->class->vft[COLOR_string__Object__to_s]))(var216) /* to_s on <var216:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var219) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce220) {
var221 = varonce220;
} else {
var222 = "count_type_test_total_";
var223 = 22;
var224 = string__NativeString__to_s_with_length(var222, var223);
var221 = var224;
varonce220 = var221;
}
if (varonce225) {
var226 = varonce225;
} else {
var227 = " = count_type_test_resolved_";
var228 = 28;
var229 = string__NativeString__to_s_with_length(var227, var228);
var226 = var229;
varonce225 = var226;
}
if (varonce230) {
var231 = varonce230;
} else {
var232 = " + count_type_test_unresolved_";
var233 = 30;
var234 = string__NativeString__to_s_with_length(var232, var233);
var231 = var234;
varonce230 = var231;
}
if (varonce235) {
var236 = varonce235;
} else {
var237 = " + count_type_test_skipped_";
var238 = 27;
var239 = string__NativeString__to_s_with_length(var237, var238);
var236 = var239;
varonce235 = var236;
}
if (varonce240) {
var241 = varonce240;
} else {
var242 = ";";
var243 = 1;
var244 = string__NativeString__to_s_with_length(var242, var243);
var241 = var244;
varonce240 = var241;
}
var245 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var245 = array_instance Array[Object] */
var246 = 9;
var247 = NEW_array__NativeArray(var246, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var247)->values[0] = (val*) var221;
((struct instance_array__NativeArray*)var247)->values[1] = (val*) var_tag205;
((struct instance_array__NativeArray*)var247)->values[2] = (val*) var226;
((struct instance_array__NativeArray*)var247)->values[3] = (val*) var_tag205;
((struct instance_array__NativeArray*)var247)->values[4] = (val*) var231;
((struct instance_array__NativeArray*)var247)->values[5] = (val*) var_tag205;
((struct instance_array__NativeArray*)var247)->values[6] = (val*) var236;
((struct instance_array__NativeArray*)var247)->values[7] = (val*) var_tag205;
((struct instance_array__NativeArray*)var247)->values[8] = (val*) var241;
((void (*)(val*, val*, long))(var245->class->vft[COLOR_array__Array__with_native]))(var245, var247, var246) /* with_native on <var245:Array[Object]>*/;
CHECK_NEW_array__Array(var245);
}
var248 = ((val* (*)(val*))(var245->class->vft[COLOR_string__Object__to_s]))(var245) /* to_s on <var245:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var248) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce249) {
var250 = varonce249;
} else {
var251 = "count_type_test_resolved_total += count_type_test_resolved_";
var252 = 59;
var253 = string__NativeString__to_s_with_length(var251, var252);
var250 = var253;
varonce249 = var250;
}
if (varonce254) {
var255 = varonce254;
} else {
var256 = ";";
var257 = 1;
var258 = string__NativeString__to_s_with_length(var256, var257);
var255 = var258;
varonce254 = var255;
}
var259 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var259 = array_instance Array[Object] */
var260 = 3;
var261 = NEW_array__NativeArray(var260, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var261)->values[0] = (val*) var250;
((struct instance_array__NativeArray*)var261)->values[1] = (val*) var_tag205;
((struct instance_array__NativeArray*)var261)->values[2] = (val*) var255;
((void (*)(val*, val*, long))(var259->class->vft[COLOR_array__Array__with_native]))(var259, var261, var260) /* with_native on <var259:Array[Object]>*/;
CHECK_NEW_array__Array(var259);
}
var262 = ((val* (*)(val*))(var259->class->vft[COLOR_string__Object__to_s]))(var259) /* to_s on <var259:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var262) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce263) {
var264 = varonce263;
} else {
var265 = "count_type_test_unresolved_total += count_type_test_unresolved_";
var266 = 63;
var267 = string__NativeString__to_s_with_length(var265, var266);
var264 = var267;
varonce263 = var264;
}
if (varonce268) {
var269 = varonce268;
} else {
var270 = ";";
var271 = 1;
var272 = string__NativeString__to_s_with_length(var270, var271);
var269 = var272;
varonce268 = var269;
}
var273 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var273 = array_instance Array[Object] */
var274 = 3;
var275 = NEW_array__NativeArray(var274, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var275)->values[0] = (val*) var264;
((struct instance_array__NativeArray*)var275)->values[1] = (val*) var_tag205;
((struct instance_array__NativeArray*)var275)->values[2] = (val*) var269;
((void (*)(val*, val*, long))(var273->class->vft[COLOR_array__Array__with_native]))(var273, var275, var274) /* with_native on <var273:Array[Object]>*/;
CHECK_NEW_array__Array(var273);
}
var276 = ((val* (*)(val*))(var273->class->vft[COLOR_string__Object__to_s]))(var273) /* to_s on <var273:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var276) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce277) {
var278 = varonce277;
} else {
var279 = "count_type_test_skipped_total += count_type_test_skipped_";
var280 = 57;
var281 = string__NativeString__to_s_with_length(var279, var280);
var278 = var281;
varonce277 = var278;
}
if (varonce282) {
var283 = varonce282;
} else {
var284 = ";";
var285 = 1;
var286 = string__NativeString__to_s_with_length(var284, var285);
var283 = var286;
varonce282 = var283;
}
var287 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var287 = array_instance Array[Object] */
var288 = 3;
var289 = NEW_array__NativeArray(var288, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var289)->values[0] = (val*) var278;
((struct instance_array__NativeArray*)var289)->values[1] = (val*) var_tag205;
((struct instance_array__NativeArray*)var289)->values[2] = (val*) var283;
((void (*)(val*, val*, long))(var287->class->vft[COLOR_array__Array__with_native]))(var287, var289, var288) /* with_native on <var287:Array[Object]>*/;
CHECK_NEW_array__Array(var287);
}
var290 = ((val* (*)(val*))(var287->class->vft[COLOR_string__Object__to_s]))(var287) /* to_s on <var287:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var290) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce291) {
var292 = varonce291;
} else {
var293 = "count_type_test_total_total += count_type_test_total_";
var294 = 53;
var295 = string__NativeString__to_s_with_length(var293, var294);
var292 = var295;
varonce291 = var292;
}
if (varonce296) {
var297 = varonce296;
} else {
var298 = ";";
var299 = 1;
var300 = string__NativeString__to_s_with_length(var298, var299);
var297 = var300;
varonce296 = var297;
}
var301 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var301 = array_instance Array[Object] */
var302 = 3;
var303 = NEW_array__NativeArray(var302, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var303)->values[0] = (val*) var292;
((struct instance_array__NativeArray*)var303)->values[1] = (val*) var_tag205;
((struct instance_array__NativeArray*)var303)->values[2] = (val*) var297;
((void (*)(val*, val*, long))(var301->class->vft[COLOR_array__Array__with_native]))(var301, var303, var302) /* with_native on <var301:Array[Object]>*/;
CHECK_NEW_array__Array(var301);
}
var304 = ((val* (*)(val*))(var301->class->vft[COLOR_string__Object__to_s]))(var301) /* to_s on <var301:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var304) /* add on <var_v:AbstractCompilerVisitor>*/;
CONTINUE_label305: (void)0;
((void (*)(val*))(var202->class->vft[COLOR_abstract_collection__Iterator__next]))(var202) /* next on <var202:Iterator[nullable Object]>*/;
}
BREAK_label305: (void)0;
if (varonce306) {
var307 = varonce306;
} else {
var308 = "printf(\"# dynamic count_type_test: total %l\\n\");";
var309 = 48;
var310 = string__NativeString__to_s_with_length(var308, var309);
var307 = var310;
varonce306 = var307;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var307) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce311) {
var312 = varonce311;
} else {
var313 = "printf(\"\\tresolved\\tunresolved\\tskipped\\ttotal\\n\");";
var314 = 51;
var315 = string__NativeString__to_s_with_length(var313, var314);
var312 = var315;
varonce311 = var312;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var312) /* add on <var_v:AbstractCompilerVisitor>*/;
var316 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__count_type_test_tags]))(self) /* count_type_test_tags on <self:AbstractCompiler>*/;
var317 = ((val* (*)(val*))(var316->class->vft[COLOR_array__Collection__to_a]))(var316) /* to_a on <var316:Array[String]>*/;
var_tags = var317;
if (varonce318) {
var319 = varonce318;
} else {
var320 = "total";
var321 = 5;
var322 = string__NativeString__to_s_with_length(var320, var321);
var319 = var322;
varonce318 = var319;
}
((void (*)(val*, val*))(var_tags->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_tags, var319) /* add on <var_tags:Array[String]>*/;
var323 = ((val* (*)(val*))(var_tags->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_tags) /* iterator on <var_tags:Array[String]>*/;
for(;;) {
var324 = ((short int (*)(val*))(var323->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var323) /* is_ok on <var323:Iterator[nullable Object]>*/;
if(!var324) break;
var325 = ((val* (*)(val*))(var323->class->vft[COLOR_abstract_collection__Iterator__item]))(var323) /* item on <var323:Iterator[nullable Object]>*/;
var_tag326 = var325;
if (varonce327) {
var328 = varonce327;
} else {
var329 = "printf(\"";
var330 = 8;
var331 = string__NativeString__to_s_with_length(var329, var330);
var328 = var331;
varonce327 = var328;
}
if (varonce332) {
var333 = varonce332;
} else {
var334 = "\");";
var335 = 3;
var336 = string__NativeString__to_s_with_length(var334, var335);
var333 = var336;
varonce332 = var333;
}
var337 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var337 = array_instance Array[Object] */
var338 = 3;
var339 = NEW_array__NativeArray(var338, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var339)->values[0] = (val*) var328;
((struct instance_array__NativeArray*)var339)->values[1] = (val*) var_tag326;
((struct instance_array__NativeArray*)var339)->values[2] = (val*) var333;
((void (*)(val*, val*, long))(var337->class->vft[COLOR_array__Array__with_native]))(var337, var339, var338) /* with_native on <var337:Array[Object]>*/;
CHECK_NEW_array__Array(var337);
}
var340 = ((val* (*)(val*))(var337->class->vft[COLOR_string__Object__to_s]))(var337) /* to_s on <var337:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var340) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce341) {
var342 = varonce341;
} else {
var343 = "printf(\"\\t%ld (%.2f%%)\", count_type_test_resolved_";
var344 = 50;
var345 = string__NativeString__to_s_with_length(var343, var344);
var342 = var345;
varonce341 = var342;
}
if (varonce346) {
var347 = varonce346;
} else {
var348 = ", 100.0*count_type_test_resolved_";
var349 = 33;
var350 = string__NativeString__to_s_with_length(var348, var349);
var347 = var350;
varonce346 = var347;
}
if (varonce351) {
var352 = varonce351;
} else {
var353 = "/count_type_test_total_total);";
var354 = 30;
var355 = string__NativeString__to_s_with_length(var353, var354);
var352 = var355;
varonce351 = var352;
}
var356 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var356 = array_instance Array[Object] */
var357 = 5;
var358 = NEW_array__NativeArray(var357, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var358)->values[0] = (val*) var342;
((struct instance_array__NativeArray*)var358)->values[1] = (val*) var_tag326;
((struct instance_array__NativeArray*)var358)->values[2] = (val*) var347;
((struct instance_array__NativeArray*)var358)->values[3] = (val*) var_tag326;
((struct instance_array__NativeArray*)var358)->values[4] = (val*) var352;
((void (*)(val*, val*, long))(var356->class->vft[COLOR_array__Array__with_native]))(var356, var358, var357) /* with_native on <var356:Array[Object]>*/;
CHECK_NEW_array__Array(var356);
}
var359 = ((val* (*)(val*))(var356->class->vft[COLOR_string__Object__to_s]))(var356) /* to_s on <var356:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var359) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce360) {
var361 = varonce360;
} else {
var362 = "printf(\"\\t%ld (%.2f%%)\", count_type_test_unresolved_";
var363 = 52;
var364 = string__NativeString__to_s_with_length(var362, var363);
var361 = var364;
varonce360 = var361;
}
if (varonce365) {
var366 = varonce365;
} else {
var367 = ", 100.0*count_type_test_unresolved_";
var368 = 35;
var369 = string__NativeString__to_s_with_length(var367, var368);
var366 = var369;
varonce365 = var366;
}
if (varonce370) {
var371 = varonce370;
} else {
var372 = "/count_type_test_total_total);";
var373 = 30;
var374 = string__NativeString__to_s_with_length(var372, var373);
var371 = var374;
varonce370 = var371;
}
var375 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var375 = array_instance Array[Object] */
var376 = 5;
var377 = NEW_array__NativeArray(var376, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var377)->values[0] = (val*) var361;
((struct instance_array__NativeArray*)var377)->values[1] = (val*) var_tag326;
((struct instance_array__NativeArray*)var377)->values[2] = (val*) var366;
((struct instance_array__NativeArray*)var377)->values[3] = (val*) var_tag326;
((struct instance_array__NativeArray*)var377)->values[4] = (val*) var371;
((void (*)(val*, val*, long))(var375->class->vft[COLOR_array__Array__with_native]))(var375, var377, var376) /* with_native on <var375:Array[Object]>*/;
CHECK_NEW_array__Array(var375);
}
var378 = ((val* (*)(val*))(var375->class->vft[COLOR_string__Object__to_s]))(var375) /* to_s on <var375:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var378) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce379) {
var380 = varonce379;
} else {
var381 = "printf(\"\\t%ld (%.2f%%)\", count_type_test_skipped_";
var382 = 49;
var383 = string__NativeString__to_s_with_length(var381, var382);
var380 = var383;
varonce379 = var380;
}
if (varonce384) {
var385 = varonce384;
} else {
var386 = ", 100.0*count_type_test_skipped_";
var387 = 32;
var388 = string__NativeString__to_s_with_length(var386, var387);
var385 = var388;
varonce384 = var385;
}
if (varonce389) {
var390 = varonce389;
} else {
var391 = "/count_type_test_total_total);";
var392 = 30;
var393 = string__NativeString__to_s_with_length(var391, var392);
var390 = var393;
varonce389 = var390;
}
var394 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var394 = array_instance Array[Object] */
var395 = 5;
var396 = NEW_array__NativeArray(var395, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var396)->values[0] = (val*) var380;
((struct instance_array__NativeArray*)var396)->values[1] = (val*) var_tag326;
((struct instance_array__NativeArray*)var396)->values[2] = (val*) var385;
((struct instance_array__NativeArray*)var396)->values[3] = (val*) var_tag326;
((struct instance_array__NativeArray*)var396)->values[4] = (val*) var390;
((void (*)(val*, val*, long))(var394->class->vft[COLOR_array__Array__with_native]))(var394, var396, var395) /* with_native on <var394:Array[Object]>*/;
CHECK_NEW_array__Array(var394);
}
var397 = ((val* (*)(val*))(var394->class->vft[COLOR_string__Object__to_s]))(var394) /* to_s on <var394:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var397) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce398) {
var399 = varonce398;
} else {
var400 = "printf(\"\\t%ld (%.2f%%)\\n\", count_type_test_total_";
var401 = 49;
var402 = string__NativeString__to_s_with_length(var400, var401);
var399 = var402;
varonce398 = var399;
}
if (varonce403) {
var404 = varonce403;
} else {
var405 = ", 100.0*count_type_test_total_";
var406 = 30;
var407 = string__NativeString__to_s_with_length(var405, var406);
var404 = var407;
varonce403 = var404;
}
if (varonce408) {
var409 = varonce408;
} else {
var410 = "/count_type_test_total_total);";
var411 = 30;
var412 = string__NativeString__to_s_with_length(var410, var411);
var409 = var412;
varonce408 = var409;
}
var413 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var413 = array_instance Array[Object] */
var414 = 5;
var415 = NEW_array__NativeArray(var414, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var415)->values[0] = (val*) var399;
((struct instance_array__NativeArray*)var415)->values[1] = (val*) var_tag326;
((struct instance_array__NativeArray*)var415)->values[2] = (val*) var404;
((struct instance_array__NativeArray*)var415)->values[3] = (val*) var_tag326;
((struct instance_array__NativeArray*)var415)->values[4] = (val*) var409;
((void (*)(val*, val*, long))(var413->class->vft[COLOR_array__Array__with_native]))(var413, var415, var414) /* with_native on <var413:Array[Object]>*/;
CHECK_NEW_array__Array(var413);
}
var416 = ((val* (*)(val*))(var413->class->vft[COLOR_string__Object__to_s]))(var413) /* to_s on <var413:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var416) /* add on <var_v:AbstractCompilerVisitor>*/;
CONTINUE_label417: (void)0;
((void (*)(val*))(var323->class->vft[COLOR_abstract_collection__Iterator__next]))(var323) /* next on <var323:Iterator[nullable Object]>*/;
}
BREAK_label417: (void)0;
} else {
}
if (varonce418) {
var419 = varonce418;
} else {
var420 = "return 0;";
var421 = 9;
var422 = string__NativeString__to_s_with_length(var420, var421);
var419 = var422;
varonce418 = var419;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var419) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce423) {
var424 = varonce423;
} else {
var425 = "}";
var426 = 1;
var427 = string__NativeString__to_s_with_length(var425, var426);
var424 = var427;
varonce423 = var424;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var424) /* add on <var_v:AbstractCompilerVisitor>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 398);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 401);
exit(1);
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
/* method abstract_compiler#AbstractCompiler#generate_check_init_instance for (self: AbstractCompiler, MClassType) */
void abstract_compiler__AbstractCompiler__generate_check_init_instance(val* self, val* p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "generate_check_init_instance", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 404);
exit(1);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#generate_check_init_instance for (self: Object, MClassType) */
void VIRTUAL_abstract_compiler__AbstractCompiler__generate_check_init_instance(val* self, val* p0) {
abstract_compiler__AbstractCompiler__generate_check_init_instance(self, p0);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 407);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 422);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 439);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 440);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 441);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 442);
exit(1);
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
CHECK_NEW_hash_collection__HashMap(var1);
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
CHECK_NEW_array__Array(var149);
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
CHECK_NEW_array__Array(var173);
}
var176 = ((val* (*)(val*))(var173->class->vft[COLOR_string__Object__to_s]))(var173) /* to_s on <var173:Array[Object]>*/;
var177 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var177 = array_instance Array[Object] */
var178 = 1;
var179 = NEW_array__NativeArray(var178, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var179)->values[0] = (val*) var176;
((void (*)(val*, val*, long))(var177->class->vft[COLOR_array__Array__with_native]))(var177, var179, var178) /* with_native on <var177:Array[Object]>*/;
CHECK_NEW_array__Array(var177);
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
CHECK_NEW_array__Array(var201);
}
var204 = ((val* (*)(val*))(var201->class->vft[COLOR_string__Object__to_s]))(var201) /* to_s on <var201:Array[Object]>*/;
var205 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var205 = array_instance Array[Object] */
var206 = 1;
var207 = NEW_array__NativeArray(var206, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var207)->values[0] = (val*) var204;
((void (*)(val*, val*, long))(var205->class->vft[COLOR_array__Array__with_native]))(var205, var207, var206) /* with_native on <var205:Array[Object]>*/;
CHECK_NEW_array__Array(var205);
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
CHECK_NEW_array__Array(var229);
}
var232 = ((val* (*)(val*))(var229->class->vft[COLOR_string__Object__to_s]))(var229) /* to_s on <var229:Array[Object]>*/;
var233 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var233 = array_instance Array[Object] */
var234 = 1;
var235 = NEW_array__NativeArray(var234, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var235)->values[0] = (val*) var232;
((void (*)(val*, val*, long))(var233->class->vft[COLOR_array__Array__with_native]))(var233, var235, var234) /* with_native on <var233:Array[Object]>*/;
CHECK_NEW_array__Array(var233);
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
CHECK_NEW_array__Array(var255);
}
var258 = ((val* (*)(val*))(var255->class->vft[COLOR_string__Object__to_s]))(var255) /* to_s on <var255:Array[Object]>*/;
var259 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var259 = array_instance Array[Object] */
var260 = 1;
var261 = NEW_array__NativeArray(var260, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var261)->values[0] = (val*) var258;
((void (*)(val*, val*, long))(var259->class->vft[COLOR_array__Array__with_native]))(var259, var261, var260) /* with_native on <var259:Array[Object]>*/;
CHECK_NEW_array__Array(var259);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 503);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 504);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 505);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 510);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 511);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 512);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 533);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 533);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 548);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 550);
exit(1);
}
var_compiler = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler_61d]))(self, var_compiler) /* compiler= on <self:AbstractCompilerVisitor>*/;
var1 = NEW_abstract_compiler__CodeWriter(&type_abstract_compiler__CodeWriter);
var2 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__files]))(var_compiler) /* files on <var_compiler:AbstractCompiler>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__SequenceRead__last]))(var2) /* last on <var2:List[CodeFile]>*/;
((void (*)(val*, val*))(var1->class->vft[COLOR_abstract_compiler__CodeWriter__init]))(var1, var3) /* init on <var1:CodeWriter>*/;
CHECK_NEW_abstract_compiler__CodeWriter(var1);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 562);
exit(1);
}
var2 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:AbstractCompilerVisitor>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var2) /* modelbuilder on <var2:AbstractCompiler>*/;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node]))(self) /* current_node on <self:AbstractCompilerVisitor>*/;
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 563);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 571);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 573);
exit(1);
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
exit(1);
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
exit(1);
}
var19 = var7 >= var10;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 583);
exit(1);
}
var_rawargs = var_args;
var20 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
((void (*)(val*))(var20->class->vft[COLOR_array__Array__init]))(var20) /* init on <var20:Array[RuntimeVariable]>*/;
CHECK_NEW_array__Array(var20);
var_args = var20;
var21 = ((val* (*)(val*))(var_rawargs->class->vft[COLOR_abstract_collection__Collection__first]))(var_rawargs) /* first on <var_rawargs:Array[RuntimeVariable]>*/;
((void (*)(val*, val*))(var_args->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_args, var21) /* add on <var_args:Array[RuntimeVariable]>*/;
var22 = NEW_range__Range(&type_range__Rangekernel__Int);
var23 = 0;
var24 = BOX_kernel__Int(var23); /* autobox from Int to Discrete */
var25 = BOX_kernel__Int(var_vararg_rank); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var22->class->vft[COLOR_range__Range__without_last]))(var22, var24, var25) /* without_last on <var22:Range[Int]>*/;
CHECK_NEW_range__Range(var22);
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
CHECK_NEW_array__Array(var47);
var_vararg = var47;
var48 = NEW_range__Range(&type_range__Rangekernel__Int);
var49 = BOX_kernel__Int(var_vararg_rank); /* autobox from Int to Discrete */
var50 = BOX_kernel__Int(var_vararg_lastrank); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var48->class->vft[COLOR_range__Range__init]))(var48, var49, var50) /* init on <var48:Range[Int]>*/;
CHECK_NEW_range__Range(var48);
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
CHECK_NEW_range__Range(var66);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 616);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 622);
exit(1);
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
CHECK_NEW_abstract_compiler__RuntimeVariable(var14);
var_res = var14;
var = var_res;
goto RET_LABEL;
} else {
var17 = NEW_abstract_compiler__RuntimeVariable(&type_abstract_compiler__RuntimeVariable);
var18 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__name]))(var_value) /* name on <var_value:RuntimeVariable>*/;
((void (*)(val*, val*, val*, val*))(var17->class->vft[COLOR_abstract_compiler__RuntimeVariable__init]))(var17, var18, var_valmtype, var_mtype) /* init on <var17:RuntimeVariable>*/;
CHECK_NEW_abstract_compiler__RuntimeVariable(var17);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 646);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 649);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 651);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 655);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 658);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 661);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 666);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 669);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 675);
exit(1);
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
/* method abstract_compiler#AbstractCompilerVisitor#isset_attribute for (self: AbstractCompilerVisitor, MAttribute, RuntimeVariable): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__isset_attribute(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "isset_attribute", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 682);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 685);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 688);
exit(1);
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
CHECK_NEW_array__Array(var22);
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
/* method abstract_compiler#AbstractCompilerVisitor#check_init_instance for (self: AbstractCompilerVisitor, RuntimeVariable, MClassType) */
void abstract_compiler__AbstractCompilerVisitor__check_init_instance(val* self, val* p0, val* p1) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "check_init_instance", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 706);
exit(1);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#check_init_instance for (self: Object, RuntimeVariable, MClassType) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__check_init_instance(val* self, val* p0, val* p1) {
abstract_compiler__AbstractCompilerVisitor__check_init_instance(self, p0, p1);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#names for (self: AbstractCompilerVisitor): HashSet[String] */
val* abstract_compiler__AbstractCompilerVisitor__names(val* self) {
val* var /* : HashSet[String] */;
val* var1 /* : HashSet[String] */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dnames].val; /* @names on <self:AbstractCompilerVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @names");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 711);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 736);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 745);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 747);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 753);
exit(1);
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
CHECK_NEW_array__Array(var10);
}
var13 = ((val* (*)(val*))(var10->class->vft[COLOR_string__Object__to_s]))(var10) /* to_s on <var10:Array[Object]>*/;
var14 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_name]))(self, var13) /* get_name on <self:AbstractCompilerVisitor>*/;
var_name = var14;
var15 = ((val* (*)(val*))(var_variable->class->vft[COLOR_typing__Variable__declared_type]))(var_variable) /* declared_type on <var_variable:Variable>*/;
if (var15 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 762);
exit(1);
}
var_mtype = var15;
var16 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__anchor]))(self, var_mtype) /* anchor on <self:AbstractCompilerVisitor>*/;
var_mtype = var16;
var17 = NEW_abstract_compiler__RuntimeVariable(&type_abstract_compiler__RuntimeVariable);
((void (*)(val*, val*, val*, val*))(var17->class->vft[COLOR_abstract_compiler__RuntimeVariable__init]))(var17, var_name, var_mtype, var_mtype) /* init on <var17:RuntimeVariable>*/;
CHECK_NEW_abstract_compiler__RuntimeVariable(var17);
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
CHECK_NEW_array__Array(var39);
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
CHECK_NEW_abstract_compiler__RuntimeVariable(var7);
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
CHECK_NEW_array__Array(var24);
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
CHECK_NEW_abstract_compiler__RuntimeVariable(var2);
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
CHECK_NEW_array__Array(var18);
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
CHECK_NEW_array__Array(var11);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 800);
exit(1);
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
CHECK_NEW_array__Array(var18);
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
/* method abstract_compiler#AbstractCompilerVisitor#string_instance for (self: AbstractCompilerVisitor, String): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__string_instance(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_string /* var string: String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
val* var5 /* : MClass */;
val* var6 /* : MClassType */;
val* var_mtype /* var mtype: MClassType */;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : String */;
val* var12 /* : String */;
val* var_name /* var name: String */;
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
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : String */;
val* var29 /* : Array[Object] */;
long var30 /* : Int */;
val* var31 /* : NativeArray[Object] */;
val* var32 /* : String */;
val* var33 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
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
val* var44 /* : Array[Object] */;
long var45 /* : Int */;
val* var46 /* : NativeArray[Object] */;
val* var47 /* : String */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
long var51 /* : Int */;
val* var52 /* : String */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
long var56 /* : Int */;
val* var57 /* : String */;
val* var58 /* : Array[Object] */;
long var59 /* : Int */;
val* var60 /* : NativeArray[Object] */;
val* var61 /* : String */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
long var65 /* : Int */;
val* var66 /* : String */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
long var70 /* : Int */;
val* var71 /* : String */;
val* var72 /* : MClass */;
val* var73 /* : MClassType */;
val* var_native_mtype /* var native_mtype: MClassType */;
val* var74 /* : RuntimeVariable */;
val* var_nat /* var nat: RuntimeVariable */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : NativeString */;
long var78 /* : Int */;
val* var79 /* : String */;
val* var80 /* : String */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
long var84 /* : Int */;
val* var85 /* : String */;
val* var86 /* : Array[Object] */;
long var87 /* : Int */;
val* var88 /* : NativeArray[Object] */;
val* var89 /* : String */;
long var90 /* : Int */;
val* var91 /* : RuntimeVariable */;
val* var_length /* var length: RuntimeVariable */;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : NativeString */;
long var95 /* : Int */;
val* var96 /* : String */;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : NativeString */;
long var100 /* : Int */;
val* var101 /* : String */;
val* var102 /* : MMethod */;
val* var103 /* : Array[RuntimeVariable] */;
long var104 /* : Int */;
val* var105 /* : NativeArray[RuntimeVariable] */;
val* var106 /* : nullable RuntimeVariable */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
long var110 /* : Int */;
val* var111 /* : String */;
val* var112 /* : Array[Object] */;
long var113 /* : Int */;
val* var114 /* : NativeArray[Object] */;
val* var115 /* : String */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : NativeString */;
long var119 /* : Int */;
val* var120 /* : String */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : NativeString */;
long var124 /* : Int */;
val* var125 /* : String */;
val* var126 /* : Array[Object] */;
long var127 /* : Int */;
val* var128 /* : NativeArray[Object] */;
val* var129 /* : String */;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : NativeString */;
long var133 /* : Int */;
val* var134 /* : String */;
var_string = p0;
if (varonce) {
var1 = varonce;
} else {
var2 = "String";
var3 = 6;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var5 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_class]))(self, var1) /* get_class on <self:AbstractCompilerVisitor>*/;
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_model__MClass__mclass_type]))(var5) /* mclass_type on <var5:MClass>*/;
var_mtype = var6;
if (varonce7) {
var8 = varonce7;
} else {
var9 = "varonce";
var10 = 7;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce7 = var8;
}
var12 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_name]))(self, var8) /* get_name on <self:AbstractCompilerVisitor>*/;
var_name = var12;
if (varonce13) {
var14 = varonce13;
} else {
var15 = "static ";
var16 = 7;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
var18 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MClassType>*/;
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
var26 = ";";
var27 = 1;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
var29 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var29 = array_instance Array[Object] */
var30 = 5;
var31 = NEW_array__NativeArray(var30, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var31)->values[0] = (val*) var14;
((struct instance_array__NativeArray*)var31)->values[1] = (val*) var18;
((struct instance_array__NativeArray*)var31)->values[2] = (val*) var20;
((struct instance_array__NativeArray*)var31)->values[3] = (val*) var_name;
((struct instance_array__NativeArray*)var31)->values[4] = (val*) var25;
((void (*)(val*, val*, long))(var29->class->vft[COLOR_array__Array__with_native]))(var29, var31, var30) /* with_native on <var29:Array[Object]>*/;
CHECK_NEW_array__Array(var29);
}
var32 = ((val* (*)(val*))(var29->class->vft[COLOR_string__Object__to_s]))(var29) /* to_s on <var29:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(self, var32) /* add_decl on <self:AbstractCompilerVisitor>*/;
var33 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(self, var_mtype) /* new_var on <self:AbstractCompilerVisitor>*/;
var_res = var33;
if (varonce34) {
var35 = varonce34;
} else {
var36 = "if (";
var37 = 4;
var38 = string__NativeString__to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
if (varonce39) {
var40 = varonce39;
} else {
var41 = ") {";
var42 = 3;
var43 = string__NativeString__to_s_with_length(var41, var42);
var40 = var43;
varonce39 = var40;
}
var44 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var44 = array_instance Array[Object] */
var45 = 3;
var46 = NEW_array__NativeArray(var45, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var46)->values[0] = (val*) var35;
((struct instance_array__NativeArray*)var46)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var46)->values[2] = (val*) var40;
((void (*)(val*, val*, long))(var44->class->vft[COLOR_array__Array__with_native]))(var44, var46, var45) /* with_native on <var44:Array[Object]>*/;
CHECK_NEW_array__Array(var44);
}
var47 = ((val* (*)(val*))(var44->class->vft[COLOR_string__Object__to_s]))(var44) /* to_s on <var44:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var47) /* add on <self:AbstractCompilerVisitor>*/;
if (varonce48) {
var49 = varonce48;
} else {
var50 = " = ";
var51 = 3;
var52 = string__NativeString__to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
if (varonce53) {
var54 = varonce53;
} else {
var55 = ";";
var56 = 1;
var57 = string__NativeString__to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
var58 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var58 = array_instance Array[Object] */
var59 = 4;
var60 = NEW_array__NativeArray(var59, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var60)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var60)->values[1] = (val*) var49;
((struct instance_array__NativeArray*)var60)->values[2] = (val*) var_name;
((struct instance_array__NativeArray*)var60)->values[3] = (val*) var54;
((void (*)(val*, val*, long))(var58->class->vft[COLOR_array__Array__with_native]))(var58, var60, var59) /* with_native on <var58:Array[Object]>*/;
CHECK_NEW_array__Array(var58);
}
var61 = ((val* (*)(val*))(var58->class->vft[COLOR_string__Object__to_s]))(var58) /* to_s on <var58:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var61) /* add on <self:AbstractCompilerVisitor>*/;
if (varonce62) {
var63 = varonce62;
} else {
var64 = "} else {";
var65 = 8;
var66 = string__NativeString__to_s_with_length(var64, var65);
var63 = var66;
varonce62 = var63;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var63) /* add on <self:AbstractCompilerVisitor>*/;
if (varonce67) {
var68 = varonce67;
} else {
var69 = "NativeString";
var70 = 12;
var71 = string__NativeString__to_s_with_length(var69, var70);
var68 = var71;
varonce67 = var68;
}
var72 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_class]))(self, var68) /* get_class on <self:AbstractCompilerVisitor>*/;
var73 = ((val* (*)(val*))(var72->class->vft[COLOR_model__MClass__mclass_type]))(var72) /* mclass_type on <var72:MClass>*/;
var_native_mtype = var73;
var74 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(self, var_native_mtype) /* new_var on <self:AbstractCompilerVisitor>*/;
var_nat = var74;
if (varonce75) {
var76 = varonce75;
} else {
var77 = " = \"";
var78 = 4;
var79 = string__NativeString__to_s_with_length(var77, var78);
var76 = var79;
varonce75 = var76;
}
var80 = ((val* (*)(val*))(var_string->class->vft[COLOR_string__AbstractString__escape_to_c]))(var_string) /* escape_to_c on <var_string:String>*/;
if (varonce81) {
var82 = varonce81;
} else {
var83 = "\";";
var84 = 2;
var85 = string__NativeString__to_s_with_length(var83, var84);
var82 = var85;
varonce81 = var82;
}
var86 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var86 = array_instance Array[Object] */
var87 = 4;
var88 = NEW_array__NativeArray(var87, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var88)->values[0] = (val*) var_nat;
((struct instance_array__NativeArray*)var88)->values[1] = (val*) var76;
((struct instance_array__NativeArray*)var88)->values[2] = (val*) var80;
((struct instance_array__NativeArray*)var88)->values[3] = (val*) var82;
((void (*)(val*, val*, long))(var86->class->vft[COLOR_array__Array__with_native]))(var86, var88, var87) /* with_native on <var86:Array[Object]>*/;
CHECK_NEW_array__Array(var86);
}
var89 = ((val* (*)(val*))(var86->class->vft[COLOR_string__Object__to_s]))(var86) /* to_s on <var86:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var89) /* add on <self:AbstractCompilerVisitor>*/;
var90 = ((long (*)(val*))(var_string->class->vft[COLOR_abstract_collection__Collection__length]))(var_string) /* length on <var_string:String>*/;
var91 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__int_instance]))(self, var90) /* int_instance on <self:AbstractCompilerVisitor>*/;
var_length = var91;
if (varonce92) {
var93 = varonce92;
} else {
var94 = " = ";
var95 = 3;
var96 = string__NativeString__to_s_with_length(var94, var95);
var93 = var96;
varonce92 = var93;
}
if (varonce97) {
var98 = varonce97;
} else {
var99 = "to_s_with_length";
var100 = 16;
var101 = string__NativeString__to_s_with_length(var99, var100);
var98 = var101;
varonce97 = var98;
}
var102 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_property]))(self, var98, var_native_mtype) /* get_property on <self:AbstractCompilerVisitor>*/;
var103 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{ /* var103 = array_instance Array[RuntimeVariable] */
var104 = 2;
var105 = NEW_array__NativeArray(var104, &type_array__NativeArrayabstract_compiler__RuntimeVariable);
((struct instance_array__NativeArray*)var105)->values[0] = (val*) var_nat;
((struct instance_array__NativeArray*)var105)->values[1] = (val*) var_length;
((void (*)(val*, val*, long))(var103->class->vft[COLOR_array__Array__with_native]))(var103, var105, var104) /* with_native on <var103:Array[RuntimeVariable]>*/;
CHECK_NEW_array__Array(var103);
}
var106 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__send]))(self, var102, var103) /* send on <self:AbstractCompilerVisitor>*/;
if (var106 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 825);
exit(1);
}
if (varonce107) {
var108 = varonce107;
} else {
var109 = ";";
var110 = 1;
var111 = string__NativeString__to_s_with_length(var109, var110);
var108 = var111;
varonce107 = var108;
}
var112 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var112 = array_instance Array[Object] */
var113 = 4;
var114 = NEW_array__NativeArray(var113, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var114)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var114)->values[1] = (val*) var93;
((struct instance_array__NativeArray*)var114)->values[2] = (val*) var106;
((struct instance_array__NativeArray*)var114)->values[3] = (val*) var108;
((void (*)(val*, val*, long))(var112->class->vft[COLOR_array__Array__with_native]))(var112, var114, var113) /* with_native on <var112:Array[Object]>*/;
CHECK_NEW_array__Array(var112);
}
var115 = ((val* (*)(val*))(var112->class->vft[COLOR_string__Object__to_s]))(var112) /* to_s on <var112:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var115) /* add on <self:AbstractCompilerVisitor>*/;
if (varonce116) {
var117 = varonce116;
} else {
var118 = " = ";
var119 = 3;
var120 = string__NativeString__to_s_with_length(var118, var119);
var117 = var120;
varonce116 = var117;
}
if (varonce121) {
var122 = varonce121;
} else {
var123 = ";";
var124 = 1;
var125 = string__NativeString__to_s_with_length(var123, var124);
var122 = var125;
varonce121 = var122;
}
var126 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var126 = array_instance Array[Object] */
var127 = 4;
var128 = NEW_array__NativeArray(var127, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var128)->values[0] = (val*) var_name;
((struct instance_array__NativeArray*)var128)->values[1] = (val*) var117;
((struct instance_array__NativeArray*)var128)->values[2] = (val*) var_res;
((struct instance_array__NativeArray*)var128)->values[3] = (val*) var122;
((void (*)(val*, val*, long))(var126->class->vft[COLOR_array__Array__with_native]))(var126, var128, var127) /* with_native on <var126:Array[Object]>*/;
CHECK_NEW_array__Array(var126);
}
var129 = ((val* (*)(val*))(var126->class->vft[COLOR_string__Object__to_s]))(var126) /* to_s on <var126:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var129) /* add on <self:AbstractCompilerVisitor>*/;
if (varonce130) {
var131 = varonce130;
} else {
var132 = "}";
var133 = 1;
var134 = string__NativeString__to_s_with_length(var132, var133);
var131 = var134;
varonce130 = var131;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var131) /* add on <self:AbstractCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#string_instance for (self: Object, String): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__string_instance(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__string_instance(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#array_instance for (self: AbstractCompilerVisitor, Array[RuntimeVariable], MType): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__array_instance(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "array_instance", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 831);
exit(1);
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#array_instance for (self: Object, Array[RuntimeVariable], MType): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__array_instance(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__array_instance(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#vararg_instance for (self: AbstractCompilerVisitor, MPropDef, RuntimeVariable, Array[RuntimeVariable], MType): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__vararg_instance(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var /* : RuntimeVariable */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "vararg_instance", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 834);
exit(1);
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#vararg_instance for (self: Object, MPropDef, RuntimeVariable, Array[RuntimeVariable], MType): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__vararg_instance(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__vararg_instance(self, p0, p1, p2, p3);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#add for (self: AbstractCompilerVisitor, String) */
void abstract_compiler__AbstractCompilerVisitor__add(val* self, val* p0) {
val* var_s /* var s: String */;
val* var /* : CodeWriter */;
val* var1 /* : List[String] */;
var_s = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__writer]))(self) /* writer on <self:AbstractCompilerVisitor>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_compiler__CodeWriter__lines]))(var) /* lines on <var:CodeWriter>*/;
((void (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var1, var_s) /* add on <var1:List[String]>*/;
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add for (self: Object, String) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__add(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_decl for (self: AbstractCompilerVisitor, String) */
void abstract_compiler__AbstractCompilerVisitor__add_decl(val* self, val* p0) {
val* var_s /* var s: String */;
val* var /* : CodeWriter */;
val* var1 /* : List[String] */;
var_s = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__writer]))(self) /* writer on <self:AbstractCompilerVisitor>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_compiler__CodeWriter__decl_lines]))(var) /* decl_lines on <var:CodeWriter>*/;
((void (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var1, var_s) /* add on <var1:List[String]>*/;
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_decl for (self: Object, String) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_decl(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__add_decl(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#require_declaration for (self: AbstractCompilerVisitor, String) */
void abstract_compiler__AbstractCompilerVisitor__require_declaration(val* self, val* p0) {
val* var_key /* var key: String */;
val* var /* : CodeWriter */;
val* var1 /* : CodeFile */;
val* var2 /* : HashSet[String] */;
var_key = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__writer]))(self) /* writer on <self:AbstractCompilerVisitor>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_compiler__CodeWriter__file]))(var) /* file on <var:CodeWriter>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_compiler__CodeFile__required_declarations]))(var1) /* required_declarations on <var1:CodeFile>*/;
((void (*)(val*, val*))(var2->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var2, var_key) /* add on <var2:HashSet[String]>*/;
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#require_declaration for (self: Object, String) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__require_declaration(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#declare_once for (self: AbstractCompilerVisitor, String) */
void abstract_compiler__AbstractCompilerVisitor__declare_once(val* self, val* p0) {
val* var_s /* var s: String */;
val* var /* : AbstractCompiler */;
var_s = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:AbstractCompilerVisitor>*/;
((void (*)(val*, val*, val*))(var->class->vft[COLOR_abstract_compiler__AbstractCompiler__provide_declaration]))(var, var_s, var_s) /* provide_declaration on <var:AbstractCompiler>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(self, var_s) /* require_declaration on <self:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#declare_once for (self: Object, String) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__declare_once(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__declare_once(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_extern for (self: AbstractCompilerVisitor, String) */
void abstract_compiler__AbstractCompilerVisitor__add_extern(val* self, val* p0) {
val* var_file /* var file: String */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : String */;
val* var4 /* : String */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
val* var10 /* : String */;
val* var_tryfile /* var tryfile: String */;
short int var11 /* : Bool */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : String */;
val* var22 /* : String */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : String */;
val* var28 /* : Array[Object] */;
long var29 /* : Int */;
val* var30 /* : NativeArray[Object] */;
val* var31 /* : String */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
long var35 /* : Int */;
val* var36 /* : String */;
val* var37 /* : String */;
short int var38 /* : Bool */;
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
val* var49 /* : String */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : String */;
val* var55 /* : Array[Object] */;
long var56 /* : Int */;
val* var57 /* : NativeArray[Object] */;
val* var58 /* : String */;
val* var59 /* : AbstractCompiler */;
val* var60 /* : ArraySet[String] */;
short int var61 /* : Bool */;
val* var62 /* : AbstractCompiler */;
val* var63 /* : ArraySet[String] */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
long var67 /* : Int */;
val* var68 /* : String */;
val* var69 /* : String */;
short int var70 /* : Bool */;
short int var71 /* : Bool */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
long var75 /* : Int */;
val* var76 /* : String */;
val* var77 /* : String */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
val* var80 /* : ExternCFile */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
long var84 /* : Int */;
val* var85 /* : String */;
val* var_f /* var f: ExternCFile */;
val* var86 /* : AbstractCompiler */;
val* var87 /* : Array[ExternCFile] */;
var_file = p0;
if (varonce) {
var = varonce;
} else {
var1 = ".nit";
var2 = 4;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
var4 = ((val* (*)(val*, val*))(var_file->class->vft[COLOR_file__String__strip_extension]))(var_file, var) /* strip_extension on <var_file:String>*/;
var_file = var4;
if (varonce5) {
var6 = varonce5;
} else {
var7 = ".nit.h";
var8 = 6;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce5 = var6;
}
var10 = ((val* (*)(val*, val*))(var_file->class->vft[COLOR_string__String___43d]))(var_file, var6) /* + on <var_file:String>*/;
var_tryfile = var10;
var11 = ((short int (*)(val*))(var_tryfile->class->vft[COLOR_file__String__file_exists]))(var_tryfile) /* file_exists on <var_tryfile:String>*/;
if (var11){
if (varonce12) {
var13 = varonce12;
} else {
var14 = "#include \"";
var15 = 10;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
if (varonce17) {
var18 = varonce17;
} else {
var19 = "..";
var20 = 2;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
var22 = ((val* (*)(val*, val*))(var18->class->vft[COLOR_file__String__join_path]))(var18, var_tryfile) /* join_path on <var18:String>*/;
if (varonce23) {
var24 = varonce23;
} else {
var25 = "\"";
var26 = 1;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
var28 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var28 = array_instance Array[Object] */
var29 = 3;
var30 = NEW_array__NativeArray(var29, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var30)->values[0] = (val*) var13;
((struct instance_array__NativeArray*)var30)->values[1] = (val*) var22;
((struct instance_array__NativeArray*)var30)->values[2] = (val*) var24;
((void (*)(val*, val*, long))(var28->class->vft[COLOR_array__Array__with_native]))(var28, var30, var29) /* with_native on <var28:Array[Object]>*/;
CHECK_NEW_array__Array(var28);
}
var31 = ((val* (*)(val*))(var28->class->vft[COLOR_string__Object__to_s]))(var28) /* to_s on <var28:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__declare_once]))(self, var31) /* declare_once on <self:AbstractCompilerVisitor>*/;
} else {
}
if (varonce32) {
var33 = varonce32;
} else {
var34 = "_nit.h";
var35 = 6;
var36 = string__NativeString__to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
var37 = ((val* (*)(val*, val*))(var_file->class->vft[COLOR_string__String___43d]))(var_file, var33) /* + on <var_file:String>*/;
var_tryfile = var37;
var38 = ((short int (*)(val*))(var_tryfile->class->vft[COLOR_file__String__file_exists]))(var_tryfile) /* file_exists on <var_tryfile:String>*/;
if (var38){
if (varonce39) {
var40 = varonce39;
} else {
var41 = "#include \"";
var42 = 10;
var43 = string__NativeString__to_s_with_length(var41, var42);
var40 = var43;
varonce39 = var40;
}
if (varonce44) {
var45 = varonce44;
} else {
var46 = "..";
var47 = 2;
var48 = string__NativeString__to_s_with_length(var46, var47);
var45 = var48;
varonce44 = var45;
}
var49 = ((val* (*)(val*, val*))(var45->class->vft[COLOR_file__String__join_path]))(var45, var_tryfile) /* join_path on <var45:String>*/;
if (varonce50) {
var51 = varonce50;
} else {
var52 = "\"";
var53 = 1;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
var55 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var55 = array_instance Array[Object] */
var56 = 3;
var57 = NEW_array__NativeArray(var56, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var57)->values[0] = (val*) var40;
((struct instance_array__NativeArray*)var57)->values[1] = (val*) var49;
((struct instance_array__NativeArray*)var57)->values[2] = (val*) var51;
((void (*)(val*, val*, long))(var55->class->vft[COLOR_array__Array__with_native]))(var55, var57, var56) /* with_native on <var55:Array[Object]>*/;
CHECK_NEW_array__Array(var55);
}
var58 = ((val* (*)(val*))(var55->class->vft[COLOR_string__Object__to_s]))(var55) /* to_s on <var55:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__declare_once]))(self, var58) /* declare_once on <self:AbstractCompilerVisitor>*/;
} else {
}
var59 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:AbstractCompilerVisitor>*/;
var60 = ((val* (*)(val*))(var59->class->vft[COLOR_abstract_compiler__AbstractCompiler__seen_extern]))(var59) /* seen_extern on <var59:AbstractCompiler>*/;
var61 = ((short int (*)(val*, val*))(var60->class->vft[COLOR_abstract_collection__Collection__has]))(var60, var_file) /* has on <var60:ArraySet[String]>*/;
if (var61){
goto RET_LABEL;
} else {
}
var62 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:AbstractCompilerVisitor>*/;
var63 = ((val* (*)(val*))(var62->class->vft[COLOR_abstract_compiler__AbstractCompiler__seen_extern]))(var62) /* seen_extern on <var62:AbstractCompiler>*/;
((void (*)(val*, val*))(var63->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var63, var_file) /* add on <var63:ArraySet[String]>*/;
if (varonce64) {
var65 = varonce64;
} else {
var66 = ".nit.c";
var67 = 6;
var68 = string__NativeString__to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
var69 = ((val* (*)(val*, val*))(var_file->class->vft[COLOR_string__String___43d]))(var_file, var65) /* + on <var_file:String>*/;
var_tryfile = var69;
var70 = ((short int (*)(val*))(var_tryfile->class->vft[COLOR_file__String__file_exists]))(var_tryfile) /* file_exists on <var_tryfile:String>*/;
var71 = !var70;
if (var71){
if (varonce72) {
var73 = varonce72;
} else {
var74 = "_nit.c";
var75 = 6;
var76 = string__NativeString__to_s_with_length(var74, var75);
var73 = var76;
varonce72 = var73;
}
var77 = ((val* (*)(val*, val*))(var_file->class->vft[COLOR_string__String___43d]))(var_file, var73) /* + on <var_file:String>*/;
var_tryfile = var77;
var78 = ((short int (*)(val*))(var_tryfile->class->vft[COLOR_file__String__file_exists]))(var_tryfile) /* file_exists on <var_tryfile:String>*/;
var79 = !var78;
if (var79){
goto RET_LABEL;
} else {
}
} else {
}
var80 = NEW_abstract_compiler__ExternCFile(&type_abstract_compiler__ExternCFile);
if (varonce81) {
var82 = varonce81;
} else {
var83 = "";
var84 = 0;
var85 = string__NativeString__to_s_with_length(var83, var84);
var82 = var85;
varonce81 = var82;
}
((void (*)(val*, val*, val*))(var80->class->vft[COLOR_abstract_compiler__ExternCFile__init]))(var80, var_tryfile, var82) /* init on <var80:ExternCFile>*/;
CHECK_NEW_abstract_compiler__ExternCFile(var80);
var_f = var80;
var86 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:AbstractCompilerVisitor>*/;
var87 = ((val* (*)(val*))(var86->class->vft[COLOR_abstract_compiler__AbstractCompiler__extern_bodies]))(var86) /* extern_bodies on <var86:AbstractCompiler>*/;
((void (*)(val*, val*))(var87->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var87, var_f) /* add on <var87:Array[ExternCFile]>*/;
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_extern for (self: Object, String) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_extern(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__add_extern(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#new_expr for (self: AbstractCompilerVisitor, String, MType): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__new_expr(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_cexpr /* var cexpr: String */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
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
var_cexpr = p0;
var_mtype = p1;
var1 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(self, var_mtype) /* new_var on <self:AbstractCompilerVisitor>*/;
var_res = var1;
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
((struct instance_array__NativeArray*)var13)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var13)->values[1] = (val*) var2;
((struct instance_array__NativeArray*)var13)->values[2] = (val*) var_cexpr;
((struct instance_array__NativeArray*)var13)->values[3] = (val*) var7;
((void (*)(val*, val*, long))(var11->class->vft[COLOR_array__Array__with_native]))(var11, var13, var12) /* with_native on <var11:Array[Object]>*/;
CHECK_NEW_array__Array(var11);
}
var14 = ((val* (*)(val*))(var11->class->vft[COLOR_string__Object__to_s]))(var11) /* to_s on <var11:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var14) /* add on <self:AbstractCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#new_expr for (self: Object, String, MType): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__new_expr(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__new_expr(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_abort for (self: AbstractCompilerVisitor, String) */
void abstract_compiler__AbstractCompilerVisitor__add_abort(val* self, val* p0) {
val* var_message /* var message: String */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : String */;
val* var4 /* : String */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
val* var10 /* : Array[Object] */;
long var11 /* : Int */;
val* var12 /* : NativeArray[Object] */;
val* var13 /* : String */;
var_message = p0;
if (varonce) {
var = varonce;
} else {
var1 = "fprintf(stderr, \"Runtime error: %s\", \"";
var2 = 38;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
var4 = ((val* (*)(val*))(var_message->class->vft[COLOR_string__AbstractString__escape_to_c]))(var_message) /* escape_to_c on <var_message:String>*/;
if (varonce5) {
var6 = varonce5;
} else {
var7 = "\");";
var8 = 3;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce5 = var6;
}
var10 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var10 = array_instance Array[Object] */
var11 = 3;
var12 = NEW_array__NativeArray(var11, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var12)->values[0] = (val*) var;
((struct instance_array__NativeArray*)var12)->values[1] = (val*) var4;
((struct instance_array__NativeArray*)var12)->values[2] = (val*) var6;
((void (*)(val*, val*, long))(var10->class->vft[COLOR_array__Array__with_native]))(var10, var12, var11) /* with_native on <var10:Array[Object]>*/;
CHECK_NEW_array__Array(var10);
}
var13 = ((val* (*)(val*))(var10->class->vft[COLOR_string__Object__to_s]))(var10) /* to_s on <var10:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var13) /* add on <self:AbstractCompilerVisitor>*/;
((void (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_raw_abort]))(self) /* add_raw_abort on <self:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_abort for (self: Object, String) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_abort(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__add_abort(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_raw_abort for (self: AbstractCompilerVisitor) */
void abstract_compiler__AbstractCompilerVisitor__add_raw_abort(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable ANode */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var_ /* var : Bool */;
val* var4 /* : nullable ANode */;
val* var5 /* : Location */;
val* var6 /* : nullable SourceFile */;
val* var7 /* : null */;
short int var8 /* : Bool */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
val* var13 /* : nullable ANode */;
val* var14 /* : Location */;
val* var15 /* : nullable SourceFile */;
val* var16 /* : String */;
val* var17 /* : String */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : String */;
val* var23 /* : nullable ANode */;
val* var24 /* : Location */;
long var25 /* : Int */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : String */;
val* var31 /* : Array[Object] */;
long var32 /* : Int */;
val* var33 /* : NativeArray[Object] */;
val* var34 /* : Object */;
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
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node]))(self) /* current_node on <self:AbstractCompilerVisitor>*/;
var2 = NULL;
if (var1 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
var_ = var3;
if (var3){
var4 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node]))(self) /* current_node on <self:AbstractCompilerVisitor>*/;
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 903);
exit(1);
} else {
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_parser_nodes__ANode__location]))(var4) /* location on <var4:nullable ANode>*/;
}
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_location__Location__file]))(var5) /* file on <var5:Location>*/;
var7 = NULL;
if (var6 == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
var = var8;
} else {
var = var_;
}
if (var){
if (varonce) {
var9 = varonce;
} else {
var10 = "fprintf(stderr, \" (%s:%d)\\n\", \"";
var11 = 31;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce = var9;
}
var13 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node]))(self) /* current_node on <self:AbstractCompilerVisitor>*/;
if (var13 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 904);
exit(1);
} else {
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_parser_nodes__ANode__location]))(var13) /* location on <var13:nullable ANode>*/;
}
var15 = ((val* (*)(val*))(var14->class->vft[COLOR_location__Location__file]))(var14) /* file on <var14:Location>*/;
if (var15 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 904);
exit(1);
} else {
var16 = ((val* (*)(val*))(var15->class->vft[COLOR_location__SourceFile__filename]))(var15) /* filename on <var15:nullable SourceFile>*/;
}
var17 = ((val* (*)(val*))(var16->class->vft[COLOR_string__AbstractString__escape_to_c]))(var16) /* escape_to_c on <var16:String>*/;
if (varonce18) {
var19 = varonce18;
} else {
var20 = "\", ";
var21 = 3;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
var23 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node]))(self) /* current_node on <self:AbstractCompilerVisitor>*/;
if (var23 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 904);
exit(1);
} else {
var24 = ((val* (*)(val*))(var23->class->vft[COLOR_parser_nodes__ANode__location]))(var23) /* location on <var23:nullable ANode>*/;
}
var25 = ((long (*)(val*))(var24->class->vft[COLOR_location__Location__line_start]))(var24) /* line_start on <var24:Location>*/;
if (varonce26) {
var27 = varonce26;
} else {
var28 = ");";
var29 = 2;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
var31 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var31 = array_instance Array[Object] */
var32 = 5;
var33 = NEW_array__NativeArray(var32, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var33)->values[0] = (val*) var9;
((struct instance_array__NativeArray*)var33)->values[1] = (val*) var17;
((struct instance_array__NativeArray*)var33)->values[2] = (val*) var19;
var34 = BOX_kernel__Int(var25); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var33)->values[3] = (val*) var34;
((struct instance_array__NativeArray*)var33)->values[4] = (val*) var27;
((void (*)(val*, val*, long))(var31->class->vft[COLOR_array__Array__with_native]))(var31, var33, var32) /* with_native on <var31:Array[Object]>*/;
CHECK_NEW_array__Array(var31);
}
var35 = ((val* (*)(val*))(var31->class->vft[COLOR_string__Object__to_s]))(var31) /* to_s on <var31:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var35) /* add on <self:AbstractCompilerVisitor>*/;
} else {
if (varonce36) {
var37 = varonce36;
} else {
var38 = "fprintf(stderr, \"\\n\");";
var39 = 22;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var37) /* add on <self:AbstractCompilerVisitor>*/;
}
if (varonce41) {
var42 = varonce41;
} else {
var43 = "exit(1);";
var44 = 8;
var45 = string__NativeString__to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var42) /* add on <self:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_raw_abort for (self: Object) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_raw_abort(val* self) {
abstract_compiler__AbstractCompilerVisitor__add_raw_abort(self);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_cast for (self: AbstractCompilerVisitor, RuntimeVariable, MType, String) */
void abstract_compiler__AbstractCompilerVisitor__add_cast(val* self, val* p0, val* p1, val* p2) {
val* var_value /* var value: RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
val* var_tag /* var tag: String */;
val* var /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
val* var10 /* : Array[Object] */;
long var11 /* : Int */;
val* var12 /* : NativeArray[Object] */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var_cn /* var cn: String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : String */;
val* var20 /* : String */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : String */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : String */;
val* var32 /* : Array[Object] */;
long var33 /* : Int */;
val* var34 /* : NativeArray[Object] */;
val* var35 /* : String */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
long var39 /* : Int */;
val* var40 /* : String */;
var_value = p0;
var_mtype = p1;
var_tag = p2;
var = ((val* (*)(val*, val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__type_test]))(self, var_value, var_mtype, var_tag) /* type_test on <self:AbstractCompilerVisitor>*/;
var_res = var;
if (varonce) {
var1 = varonce;
} else {
var2 = "if (!";
var3 = 5;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
if (varonce5) {
var6 = varonce5;
} else {
var7 = ") {";
var8 = 3;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce5 = var6;
}
var10 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var10 = array_instance Array[Object] */
var11 = 3;
var12 = NEW_array__NativeArray(var11, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var12)->values[0] = (val*) var1;
((struct instance_array__NativeArray*)var12)->values[1] = (val*) var_res;
((struct instance_array__NativeArray*)var12)->values[2] = (val*) var6;
((void (*)(val*, val*, long))(var10->class->vft[COLOR_array__Array__with_native]))(var10, var12, var11) /* with_native on <var10:Array[Object]>*/;
CHECK_NEW_array__Array(var10);
}
var13 = ((val* (*)(val*))(var10->class->vft[COLOR_string__Object__to_s]))(var10) /* to_s on <var10:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var13) /* add on <self:AbstractCompilerVisitor>*/;
var14 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__class_name_string]))(self, var_value) /* class_name_string on <self:AbstractCompilerVisitor>*/;
var_cn = var14;
if (varonce15) {
var16 = varonce15;
} else {
var17 = "fprintf(stderr, \"Runtime error: Cast failed. Expected `%s`, got `%s`\", \"";
var18 = 72;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
var20 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_string__Object__to_s]))(var_mtype) /* to_s on <var_mtype:MType>*/;
var21 = ((val* (*)(val*))(var20->class->vft[COLOR_string__AbstractString__escape_to_c]))(var20) /* escape_to_c on <var20:String>*/;
if (varonce22) {
var23 = varonce22;
} else {
var24 = "\", ";
var25 = 3;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
if (varonce27) {
var28 = varonce27;
} else {
var29 = ");";
var30 = 2;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
var32 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var32 = array_instance Array[Object] */
var33 = 5;
var34 = NEW_array__NativeArray(var33, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var34)->values[0] = (val*) var16;
((struct instance_array__NativeArray*)var34)->values[1] = (val*) var21;
((struct instance_array__NativeArray*)var34)->values[2] = (val*) var23;
((struct instance_array__NativeArray*)var34)->values[3] = (val*) var_cn;
((struct instance_array__NativeArray*)var34)->values[4] = (val*) var28;
((void (*)(val*, val*, long))(var32->class->vft[COLOR_array__Array__with_native]))(var32, var34, var33) /* with_native on <var32:Array[Object]>*/;
CHECK_NEW_array__Array(var32);
}
var35 = ((val* (*)(val*))(var32->class->vft[COLOR_string__Object__to_s]))(var32) /* to_s on <var32:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var35) /* add on <self:AbstractCompilerVisitor>*/;
((void (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_raw_abort]))(self) /* add_raw_abort on <self:AbstractCompilerVisitor>*/;
if (varonce36) {
var37 = varonce36;
} else {
var38 = "}";
var39 = 1;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var37) /* add on <self:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_cast for (self: Object, RuntimeVariable, MType, String) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_cast(val* self, val* p0, val* p1, val* p2) {
abstract_compiler__AbstractCompilerVisitor__add_cast(self, p0, p1, p2);
RET_LABEL:;
}
