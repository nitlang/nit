#include "separate_compiler.sep.0.h"
/* method separate_compiler#ToolContext#opt_separate for (self: ToolContext): OptionBool */
val* separate_compiler__ToolContext__opt_separate(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_separate_compiler__ToolContext___64dopt_separate].val; /* @opt_separate on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @opt_separate");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 25);
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
var1 = separate_compiler__ToolContext__opt_separate(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#ToolContext#opt_separate= for (self: ToolContext, OptionBool) */
void separate_compiler__ToolContext__opt_separate_61d(val* self, val* p0) {
self->attrs[COLOR_separate_compiler__ToolContext___64dopt_separate].val = p0; /* @opt_separate on <self:ToolContext> */
RET_LABEL:;
}
/* method separate_compiler#ToolContext#opt_separate= for (self: Object, OptionBool) */
void VIRTUAL_separate_compiler__ToolContext__opt_separate_61d(val* self, val* p0) {
separate_compiler__ToolContext__opt_separate_61d(self, p0);
RET_LABEL:;
}
/* method separate_compiler#ToolContext#opt_no_inline_intern for (self: ToolContext): OptionBool */
val* separate_compiler__ToolContext__opt_no_inline_intern(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_separate_compiler__ToolContext___64dopt_no_inline_intern].val; /* @opt_no_inline_intern on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @opt_no_inline_intern");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 27);
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
var1 = separate_compiler__ToolContext__opt_no_inline_intern(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#ToolContext#opt_no_inline_intern= for (self: ToolContext, OptionBool) */
void separate_compiler__ToolContext__opt_no_inline_intern_61d(val* self, val* p0) {
self->attrs[COLOR_separate_compiler__ToolContext___64dopt_no_inline_intern].val = p0; /* @opt_no_inline_intern on <self:ToolContext> */
RET_LABEL:;
}
/* method separate_compiler#ToolContext#opt_no_inline_intern= for (self: Object, OptionBool) */
void VIRTUAL_separate_compiler__ToolContext__opt_no_inline_intern_61d(val* self, val* p0) {
separate_compiler__ToolContext__opt_no_inline_intern_61d(self, p0);
RET_LABEL:;
}
/* method separate_compiler#ToolContext#opt_no_union_attribute for (self: ToolContext): OptionBool */
val* separate_compiler__ToolContext__opt_no_union_attribute(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_separate_compiler__ToolContext___64dopt_no_union_attribute].val; /* @opt_no_union_attribute on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @opt_no_union_attribute");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 29);
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
var1 = separate_compiler__ToolContext__opt_no_union_attribute(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#ToolContext#opt_no_union_attribute= for (self: ToolContext, OptionBool) */
void separate_compiler__ToolContext__opt_no_union_attribute_61d(val* self, val* p0) {
self->attrs[COLOR_separate_compiler__ToolContext___64dopt_no_union_attribute].val = p0; /* @opt_no_union_attribute on <self:ToolContext> */
RET_LABEL:;
}
/* method separate_compiler#ToolContext#opt_no_union_attribute= for (self: Object, OptionBool) */
void VIRTUAL_separate_compiler__ToolContext__opt_no_union_attribute_61d(val* self, val* p0) {
separate_compiler__ToolContext__opt_no_union_attribute_61d(self, p0);
RET_LABEL:;
}
/* method separate_compiler#ToolContext#opt_no_shortcut_equate for (self: ToolContext): OptionBool */
val* separate_compiler__ToolContext__opt_no_shortcut_equate(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_separate_compiler__ToolContext___64dopt_no_shortcut_equate].val; /* @opt_no_shortcut_equate on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @opt_no_shortcut_equate");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 31);
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
var1 = separate_compiler__ToolContext__opt_no_shortcut_equate(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#ToolContext#opt_no_shortcut_equate= for (self: ToolContext, OptionBool) */
void separate_compiler__ToolContext__opt_no_shortcut_equate_61d(val* self, val* p0) {
self->attrs[COLOR_separate_compiler__ToolContext___64dopt_no_shortcut_equate].val = p0; /* @opt_no_shortcut_equate on <self:ToolContext> */
RET_LABEL:;
}
/* method separate_compiler#ToolContext#opt_no_shortcut_equate= for (self: Object, OptionBool) */
void VIRTUAL_separate_compiler__ToolContext__opt_no_shortcut_equate_61d(val* self, val* p0) {
separate_compiler__ToolContext__opt_no_shortcut_equate_61d(self, p0);
RET_LABEL:;
}
/* method separate_compiler#ToolContext#opt_inline_coloring_numbers for (self: ToolContext): OptionBool */
val* separate_compiler__ToolContext__opt_inline_coloring_numbers(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_separate_compiler__ToolContext___64dopt_inline_coloring_numbers].val; /* @opt_inline_coloring_numbers on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @opt_inline_coloring_numbers");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 33);
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
var1 = separate_compiler__ToolContext__opt_inline_coloring_numbers(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#ToolContext#opt_inline_coloring_numbers= for (self: ToolContext, OptionBool) */
void separate_compiler__ToolContext__opt_inline_coloring_numbers_61d(val* self, val* p0) {
self->attrs[COLOR_separate_compiler__ToolContext___64dopt_inline_coloring_numbers].val = p0; /* @opt_inline_coloring_numbers on <self:ToolContext> */
RET_LABEL:;
}
/* method separate_compiler#ToolContext#opt_inline_coloring_numbers= for (self: Object, OptionBool) */
void VIRTUAL_separate_compiler__ToolContext__opt_inline_coloring_numbers_61d(val* self, val* p0) {
separate_compiler__ToolContext__opt_inline_coloring_numbers_61d(self, p0);
RET_LABEL:;
}
/* method separate_compiler#ToolContext#opt_bm_typing for (self: ToolContext): OptionBool */
val* separate_compiler__ToolContext__opt_bm_typing(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_separate_compiler__ToolContext___64dopt_bm_typing].val; /* @opt_bm_typing on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @opt_bm_typing");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 35);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#ToolContext#opt_bm_typing for (self: Object): OptionBool */
val* VIRTUAL_separate_compiler__ToolContext__opt_bm_typing(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = separate_compiler__ToolContext__opt_bm_typing(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#ToolContext#opt_bm_typing= for (self: ToolContext, OptionBool) */
void separate_compiler__ToolContext__opt_bm_typing_61d(val* self, val* p0) {
self->attrs[COLOR_separate_compiler__ToolContext___64dopt_bm_typing].val = p0; /* @opt_bm_typing on <self:ToolContext> */
RET_LABEL:;
}
/* method separate_compiler#ToolContext#opt_bm_typing= for (self: Object, OptionBool) */
void VIRTUAL_separate_compiler__ToolContext__opt_bm_typing_61d(val* self, val* p0) {
separate_compiler__ToolContext__opt_bm_typing_61d(self, p0);
RET_LABEL:;
}
/* method separate_compiler#ToolContext#opt_phmod_typing for (self: ToolContext): OptionBool */
val* separate_compiler__ToolContext__opt_phmod_typing(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_separate_compiler__ToolContext___64dopt_phmod_typing].val; /* @opt_phmod_typing on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @opt_phmod_typing");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 37);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#ToolContext#opt_phmod_typing for (self: Object): OptionBool */
val* VIRTUAL_separate_compiler__ToolContext__opt_phmod_typing(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = separate_compiler__ToolContext__opt_phmod_typing(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#ToolContext#opt_phmod_typing= for (self: ToolContext, OptionBool) */
void separate_compiler__ToolContext__opt_phmod_typing_61d(val* self, val* p0) {
self->attrs[COLOR_separate_compiler__ToolContext___64dopt_phmod_typing].val = p0; /* @opt_phmod_typing on <self:ToolContext> */
RET_LABEL:;
}
/* method separate_compiler#ToolContext#opt_phmod_typing= for (self: Object, OptionBool) */
void VIRTUAL_separate_compiler__ToolContext__opt_phmod_typing_61d(val* self, val* p0) {
separate_compiler__ToolContext__opt_phmod_typing_61d(self, p0);
RET_LABEL:;
}
/* method separate_compiler#ToolContext#opt_phand_typing for (self: ToolContext): OptionBool */
val* separate_compiler__ToolContext__opt_phand_typing(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_separate_compiler__ToolContext___64dopt_phand_typing].val; /* @opt_phand_typing on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @opt_phand_typing");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 39);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#ToolContext#opt_phand_typing for (self: Object): OptionBool */
val* VIRTUAL_separate_compiler__ToolContext__opt_phand_typing(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = separate_compiler__ToolContext__opt_phand_typing(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#ToolContext#opt_phand_typing= for (self: ToolContext, OptionBool) */
void separate_compiler__ToolContext__opt_phand_typing_61d(val* self, val* p0) {
self->attrs[COLOR_separate_compiler__ToolContext___64dopt_phand_typing].val = p0; /* @opt_phand_typing on <self:ToolContext> */
RET_LABEL:;
}
/* method separate_compiler#ToolContext#opt_phand_typing= for (self: Object, OptionBool) */
void VIRTUAL_separate_compiler__ToolContext__opt_phand_typing_61d(val* self, val* p0) {
separate_compiler__ToolContext__opt_phand_typing_61d(self, p0);
RET_LABEL:;
}
/* method separate_compiler#ToolContext#opt_tables_metrics for (self: ToolContext): OptionBool */
val* separate_compiler__ToolContext__opt_tables_metrics(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_separate_compiler__ToolContext___64dopt_tables_metrics].val; /* @opt_tables_metrics on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @opt_tables_metrics");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 41);
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
var1 = separate_compiler__ToolContext__opt_tables_metrics(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#ToolContext#opt_tables_metrics= for (self: ToolContext, OptionBool) */
void separate_compiler__ToolContext__opt_tables_metrics_61d(val* self, val* p0) {
self->attrs[COLOR_separate_compiler__ToolContext___64dopt_tables_metrics].val = p0; /* @opt_tables_metrics on <self:ToolContext> */
RET_LABEL:;
}
/* method separate_compiler#ToolContext#opt_tables_metrics= for (self: Object, OptionBool) */
void VIRTUAL_separate_compiler__ToolContext__opt_tables_metrics_61d(val* self, val* p0) {
separate_compiler__ToolContext__opt_tables_metrics_61d(self, p0);
RET_LABEL:;
}
/* method separate_compiler#ToolContext#init for (self: ToolContext) */
void separate_compiler__ToolContext__init(val* self) {
val* var /* : OptionContext */;
val* var1 /* : OptionBool */;
val* var2 /* : Array[Option] */;
long var3 /* : Int */;
val* var4 /* : NativeArray[Option] */;
val* var5 /* : OptionContext */;
val* var6 /* : OptionBool */;
val* var7 /* : Array[Option] */;
long var8 /* : Int */;
val* var9 /* : NativeArray[Option] */;
val* var10 /* : OptionContext */;
val* var11 /* : OptionBool */;
val* var12 /* : Array[Option] */;
long var13 /* : Int */;
val* var14 /* : NativeArray[Option] */;
val* var15 /* : OptionContext */;
val* var16 /* : OptionBool */;
val* var17 /* : Array[Option] */;
long var18 /* : Int */;
val* var19 /* : NativeArray[Option] */;
val* var20 /* : OptionContext */;
val* var21 /* : OptionBool */;
val* var22 /* : Array[Option] */;
long var23 /* : Int */;
val* var24 /* : NativeArray[Option] */;
val* var25 /* : OptionContext */;
val* var26 /* : OptionBool */;
val* var27 /* : Array[Option] */;
long var28 /* : Int */;
val* var29 /* : NativeArray[Option] */;
val* var30 /* : OptionContext */;
val* var31 /* : OptionBool */;
val* var32 /* : Array[Option] */;
long var33 /* : Int */;
val* var34 /* : NativeArray[Option] */;
val* var35 /* : OptionContext */;
val* var36 /* : OptionBool */;
val* var37 /* : Array[Option] */;
long var38 /* : Int */;
val* var39 /* : NativeArray[Option] */;
val* var40 /* : OptionContext */;
val* var41 /* : OptionBool */;
val* var42 /* : Array[Option] */;
long var43 /* : Int */;
val* var44 /* : NativeArray[Option] */;
((void (*)(val*))(self->class->vft[COLOR_separate_compiler__ToolContext__init]))(self) /* init on <self:ToolContext>*/;
var = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__option_context]))(self) /* option_context on <self:ToolContext>*/;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__ToolContext__opt_separate]))(self) /* opt_separate on <self:ToolContext>*/;
var2 = NEW_array__Array(&type_array__Arrayopts__Option);
{ /* var2 = array_instance Array[Option] */
var3 = 1;
var4 = NEW_array__NativeArray(var3, &type_array__NativeArrayopts__Option);
((struct instance_array__NativeArray*)var4)->values[0] = (val*) var1;
((void (*)(val*, val*, long))(var2->class->vft[COLOR_array__Array__with_native]))(var2, var4, var3) /* with_native on <var2:Array[Option]>*/;
}
((void (*)(val*, val*))(var->class->vft[COLOR_opts__OptionContext__add_option]))(var, var2) /* add_option on <var:OptionContext>*/;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__option_context]))(self) /* option_context on <self:ToolContext>*/;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__ToolContext__opt_no_inline_intern]))(self) /* opt_no_inline_intern on <self:ToolContext>*/;
var7 = NEW_array__Array(&type_array__Arrayopts__Option);
{ /* var7 = array_instance Array[Option] */
var8 = 1;
var9 = NEW_array__NativeArray(var8, &type_array__NativeArrayopts__Option);
((struct instance_array__NativeArray*)var9)->values[0] = (val*) var6;
((void (*)(val*, val*, long))(var7->class->vft[COLOR_array__Array__with_native]))(var7, var9, var8) /* with_native on <var7:Array[Option]>*/;
}
((void (*)(val*, val*))(var5->class->vft[COLOR_opts__OptionContext__add_option]))(var5, var7) /* add_option on <var5:OptionContext>*/;
var10 = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__option_context]))(self) /* option_context on <self:ToolContext>*/;
var11 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__ToolContext__opt_no_union_attribute]))(self) /* opt_no_union_attribute on <self:ToolContext>*/;
var12 = NEW_array__Array(&type_array__Arrayopts__Option);
{ /* var12 = array_instance Array[Option] */
var13 = 1;
var14 = NEW_array__NativeArray(var13, &type_array__NativeArrayopts__Option);
((struct instance_array__NativeArray*)var14)->values[0] = (val*) var11;
((void (*)(val*, val*, long))(var12->class->vft[COLOR_array__Array__with_native]))(var12, var14, var13) /* with_native on <var12:Array[Option]>*/;
}
((void (*)(val*, val*))(var10->class->vft[COLOR_opts__OptionContext__add_option]))(var10, var12) /* add_option on <var10:OptionContext>*/;
var15 = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__option_context]))(self) /* option_context on <self:ToolContext>*/;
var16 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__ToolContext__opt_no_shortcut_equate]))(self) /* opt_no_shortcut_equate on <self:ToolContext>*/;
var17 = NEW_array__Array(&type_array__Arrayopts__Option);
{ /* var17 = array_instance Array[Option] */
var18 = 1;
var19 = NEW_array__NativeArray(var18, &type_array__NativeArrayopts__Option);
((struct instance_array__NativeArray*)var19)->values[0] = (val*) var16;
((void (*)(val*, val*, long))(var17->class->vft[COLOR_array__Array__with_native]))(var17, var19, var18) /* with_native on <var17:Array[Option]>*/;
}
((void (*)(val*, val*))(var15->class->vft[COLOR_opts__OptionContext__add_option]))(var15, var17) /* add_option on <var15:OptionContext>*/;
var20 = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__option_context]))(self) /* option_context on <self:ToolContext>*/;
var21 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__ToolContext__opt_inline_coloring_numbers]))(self) /* opt_inline_coloring_numbers on <self:ToolContext>*/;
var22 = NEW_array__Array(&type_array__Arrayopts__Option);
{ /* var22 = array_instance Array[Option] */
var23 = 1;
var24 = NEW_array__NativeArray(var23, &type_array__NativeArrayopts__Option);
((struct instance_array__NativeArray*)var24)->values[0] = (val*) var21;
((void (*)(val*, val*, long))(var22->class->vft[COLOR_array__Array__with_native]))(var22, var24, var23) /* with_native on <var22:Array[Option]>*/;
}
((void (*)(val*, val*))(var20->class->vft[COLOR_opts__OptionContext__add_option]))(var20, var22) /* add_option on <var20:OptionContext>*/;
var25 = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__option_context]))(self) /* option_context on <self:ToolContext>*/;
var26 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__ToolContext__opt_bm_typing]))(self) /* opt_bm_typing on <self:ToolContext>*/;
var27 = NEW_array__Array(&type_array__Arrayopts__Option);
{ /* var27 = array_instance Array[Option] */
var28 = 1;
var29 = NEW_array__NativeArray(var28, &type_array__NativeArrayopts__Option);
((struct instance_array__NativeArray*)var29)->values[0] = (val*) var26;
((void (*)(val*, val*, long))(var27->class->vft[COLOR_array__Array__with_native]))(var27, var29, var28) /* with_native on <var27:Array[Option]>*/;
}
((void (*)(val*, val*))(var25->class->vft[COLOR_opts__OptionContext__add_option]))(var25, var27) /* add_option on <var25:OptionContext>*/;
var30 = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__option_context]))(self) /* option_context on <self:ToolContext>*/;
var31 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__ToolContext__opt_phmod_typing]))(self) /* opt_phmod_typing on <self:ToolContext>*/;
var32 = NEW_array__Array(&type_array__Arrayopts__Option);
{ /* var32 = array_instance Array[Option] */
var33 = 1;
var34 = NEW_array__NativeArray(var33, &type_array__NativeArrayopts__Option);
((struct instance_array__NativeArray*)var34)->values[0] = (val*) var31;
((void (*)(val*, val*, long))(var32->class->vft[COLOR_array__Array__with_native]))(var32, var34, var33) /* with_native on <var32:Array[Option]>*/;
}
((void (*)(val*, val*))(var30->class->vft[COLOR_opts__OptionContext__add_option]))(var30, var32) /* add_option on <var30:OptionContext>*/;
var35 = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__option_context]))(self) /* option_context on <self:ToolContext>*/;
var36 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__ToolContext__opt_phand_typing]))(self) /* opt_phand_typing on <self:ToolContext>*/;
var37 = NEW_array__Array(&type_array__Arrayopts__Option);
{ /* var37 = array_instance Array[Option] */
var38 = 1;
var39 = NEW_array__NativeArray(var38, &type_array__NativeArrayopts__Option);
((struct instance_array__NativeArray*)var39)->values[0] = (val*) var36;
((void (*)(val*, val*, long))(var37->class->vft[COLOR_array__Array__with_native]))(var37, var39, var38) /* with_native on <var37:Array[Option]>*/;
}
((void (*)(val*, val*))(var35->class->vft[COLOR_opts__OptionContext__add_option]))(var35, var37) /* add_option on <var35:OptionContext>*/;
var40 = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__option_context]))(self) /* option_context on <self:ToolContext>*/;
var41 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__ToolContext__opt_tables_metrics]))(self) /* opt_tables_metrics on <self:ToolContext>*/;
var42 = NEW_array__Array(&type_array__Arrayopts__Option);
{ /* var42 = array_instance Array[Option] */
var43 = 1;
var44 = NEW_array__NativeArray(var43, &type_array__NativeArrayopts__Option);
((struct instance_array__NativeArray*)var44)->values[0] = (val*) var41;
((void (*)(val*, val*, long))(var42->class->vft[COLOR_array__Array__with_native]))(var42, var44, var43) /* with_native on <var42:Array[Option]>*/;
}
((void (*)(val*, val*))(var40->class->vft[COLOR_opts__OptionContext__add_option]))(var40, var42) /* add_option on <var40:OptionContext>*/;
RET_LABEL:;
}
/* method separate_compiler#ToolContext#init for (self: Object) */
void VIRTUAL_separate_compiler__ToolContext__init(val* self) {
separate_compiler__ToolContext__init(self);
RET_LABEL:;
}
/* method separate_compiler#ModelBuilder#run_separate_compiler for (self: ModelBuilder, MModule, nullable RapidTypeAnalysis) */
void separate_compiler__ModelBuilder__run_separate_compiler(val* self, val* p0, val* p1) {
val* var_mainmodule /* var mainmodule: MModule */;
val* var_runtime_type_analysis /* var runtime_type_analysis: nullable RapidTypeAnalysis */;
long var /* : Int */;
long var_time0 /* var time0: Int */;
val* var1 /* : ToolContext */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
long var6 /* : Int */;
val* var7 /* : SeparateCompiler */;
val* var_compiler /* var compiler: SeparateCompiler */;
val* var8 /* : ToolContext */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
long var14 /* : Int */;
val* var15 /* : String */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : String */;
val* var21 /* : Array[Object] */;
long var22 /* : Int */;
val* var23 /* : NativeArray[Object] */;
val* var24 /* : String */;
val* var25 /* : CodeFile */;
val* var26 /* : POSetElement[MModule] */;
val* var27 /* : Collection[Object] */;
val* var28 /* : Iterator[nullable Object] */;
short int var29 /* : Bool */;
val* var30 /* : nullable Object */;
val* var_m /* var m: MModule */;
val* var31 /* : Array[MClass] */;
val* var32 /* : Iterator[nullable Object] */;
short int var33 /* : Bool */;
val* var34 /* : nullable Object */;
val* var_mclass /* var mclass: MClass */;
short int var35 /* : Bool */;
val* var36 /* : MClassKind */;
val* var37 /* : MClassKind */;
short int var38 /* : Bool */;
short int var_ /* var : Bool */;
val* var39 /* : MClassKind */;
val* var40 /* : MClassKind */;
short int var41 /* : Bool */;
val* var43 /* : String */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
long var47 /* : Int */;
val* var48 /* : String */;
val* var49 /* : Array[Object] */;
long var50 /* : Int */;
val* var51 /* : NativeArray[Object] */;
val* var52 /* : String */;
val* var53 /* : CodeFile */;
val* var54 /* : POSetElement[MModule] */;
val* var55 /* : Collection[Object] */;
val* var56 /* : Iterator[nullable Object] */;
short int var57 /* : Bool */;
val* var58 /* : nullable Object */;
val* var_m59 /* var m: MModule */;
val* var60 /* : ToolContext */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
long var64 /* : Int */;
val* var65 /* : String */;
val* var66 /* : Array[Object] */;
long var67 /* : Int */;
val* var68 /* : NativeArray[Object] */;
val* var69 /* : String */;
long var70 /* : Int */;
val* var71 /* : String */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
long var75 /* : Int */;
val* var76 /* : String */;
val* var77 /* : Array[Object] */;
long var78 /* : Int */;
val* var79 /* : NativeArray[Object] */;
val* var80 /* : String */;
val* var81 /* : CodeFile */;
val* var83 /* : ToolContext */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : NativeString */;
long var87 /* : Int */;
val* var88 /* : String */;
long var89 /* : Int */;
val* var90 /* : String */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : NativeString */;
long var94 /* : Int */;
val* var95 /* : String */;
val* var96 /* : Array[Object] */;
long var97 /* : Int */;
val* var98 /* : NativeArray[Object] */;
val* var99 /* : String */;
val* var100 /* : CodeFile */;
val* var101 /* : POSet[MType] */;
val* var_mtypes /* var mtypes: POSet[MType] */;
val* var102 /* : Iterator[nullable Object] */;
short int var103 /* : Bool */;
val* var104 /* : nullable Object */;
val* var_t /* var t: MType */;
val* var106 /* : Set[MType] */;
val* var107 /* : Iterator[nullable Object] */;
short int var108 /* : Bool */;
val* var109 /* : nullable Object */;
val* var_t110 /* var t: MType */;
short int var111 /* : Bool */;
long var113 /* : Int */;
long var_time1 /* var time1: Int */;
val* var114 /* : ToolContext */;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : NativeString */;
long var118 /* : Int */;
val* var119 /* : String */;
long var120 /* : Int */;
long var122 /* : Int */;
static val* varonce123;
val* var124 /* : String */;
char* var125 /* : NativeString */;
long var126 /* : Int */;
val* var127 /* : String */;
val* var128 /* : Array[Object] */;
long var129 /* : Int */;
val* var130 /* : NativeArray[Object] */;
val* var131 /* : Object */;
val* var132 /* : String */;
long var133 /* : Int */;
var_mainmodule = p0;
var_runtime_type_analysis = p1;
var = ((long (*)(val*))(self->class->vft[COLOR_time__Object__get_time]))(self) /* get_time on <self:ModelBuilder>*/;
var_time0 = var;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
if (varonce) {
var2 = varonce;
} else {
var3 = "*** GENERATING C ***";
var4 = 20;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
var6 = 1;
((void (*)(val*, val*, long))(var1->class->vft[COLOR_toolcontext__ToolContext__info]))(var1, var2, var6) /* info on <var1:ToolContext>*/;
var7 = NEW_separate_compiler__SeparateCompiler(&type_separate_compiler__SeparateCompiler);
((void (*)(val*, val*, val*, val*))(var7->class->vft[COLOR_separate_compiler__SeparateCompiler__init]))(var7, var_mainmodule, self, var_runtime_type_analysis) /* init on <var7:SeparateCompiler>*/;
var_compiler = var7;
((void (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__compile_header]))(var_compiler) /* compile_header on <var_compiler:SeparateCompiler>*/;
var8 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
if (varonce9) {
var10 = varonce9;
} else {
var11 = "Property coloring";
var12 = 17;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
var14 = 2;
((void (*)(val*, val*, long))(var8->class->vft[COLOR_toolcontext__ToolContext__info]))(var8, var10, var14) /* info on <var8:ToolContext>*/;
var15 = ((val* (*)(val*))(var_mainmodule->class->vft[COLOR_mmodule__MModule__name]))(var_mainmodule) /* name on <var_mainmodule:MModule>*/;
if (varonce16) {
var17 = varonce16;
} else {
var18 = ".classes";
var19 = 8;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
var21 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var21 = array_instance Array[Object] */
var22 = 2;
var23 = NEW_array__NativeArray(var22, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var23)->values[0] = (val*) var15;
((struct instance_array__NativeArray*)var23)->values[1] = (val*) var17;
((void (*)(val*, val*, long))(var21->class->vft[COLOR_array__Array__with_native]))(var21, var23, var22) /* with_native on <var21:Array[Object]>*/;
}
var24 = ((val* (*)(val*))(var21->class->vft[COLOR_string__Object__to_s]))(var21) /* to_s on <var21:Array[Object]>*/;
var25 = ((val* (*)(val*, val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_file]))(var_compiler, var24) /* new_file on <var_compiler:SeparateCompiler>*/;
var25;
((void (*)(val*))(var_compiler->class->vft[COLOR_separate_compiler__SeparateCompiler__do_property_coloring]))(var_compiler) /* do_property_coloring on <var_compiler:SeparateCompiler>*/;
var26 = ((val* (*)(val*))(var_mainmodule->class->vft[COLOR_mmodule__MModule__in_importation]))(var_mainmodule) /* in_importation on <var_mainmodule:MModule>*/;
var27 = ((val* (*)(val*))(var26->class->vft[COLOR_poset__POSetElement__greaters]))(var26) /* greaters on <var26:POSetElement[MModule]>*/;
var28 = ((val* (*)(val*))(var27->class->vft[COLOR_abstract_collection__Collection__iterator]))(var27) /* iterator on <var27:Collection[Object](Collection[MModule])>*/;
for(;;) {
var29 = ((short int (*)(val*))(var28->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var28) /* is_ok on <var28:Iterator[nullable Object]>*/;
if(!var29) break;
var30 = ((val* (*)(val*))(var28->class->vft[COLOR_abstract_collection__Iterator__item]))(var28) /* item on <var28:Iterator[nullable Object]>*/;
var_m = var30;
var31 = ((val* (*)(val*))(var_m->class->vft[COLOR_model__MModule__intro_mclasses]))(var_m) /* intro_mclasses on <var_m:MModule>*/;
var32 = ((val* (*)(val*))(var31->class->vft[COLOR_abstract_collection__Collection__iterator]))(var31) /* iterator on <var31:Array[MClass]>*/;
for(;;) {
var33 = ((short int (*)(val*))(var32->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var32) /* is_ok on <var32:Iterator[nullable Object]>*/;
if(!var33) break;
var34 = ((val* (*)(val*))(var32->class->vft[COLOR_abstract_collection__Iterator__item]))(var32) /* item on <var32:Iterator[nullable Object]>*/;
var_mclass = var34;
var36 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__kind]))(var_mclass) /* kind on <var_mclass:MClass>*/;
var37 = ((val* (*)(val*))(self->class->vft[COLOR_model__Object__abstract_kind]))(self) /* abstract_kind on <self:ModelBuilder>*/;
var38 = ((short int (*)(val*, val*))(var36->class->vft[COLOR_kernel__Object___61d_61d]))(var36, var37) /* == on <var36:MClassKind>*/;
var_ = var38;
if (var38){
var35 = var_;
} else {
var39 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__kind]))(var_mclass) /* kind on <var_mclass:MClass>*/;
var40 = ((val* (*)(val*))(self->class->vft[COLOR_model__Object__interface_kind]))(self) /* interface_kind on <self:ModelBuilder>*/;
var41 = ((short int (*)(val*, val*))(var39->class->vft[COLOR_kernel__Object___61d_61d]))(var39, var40) /* == on <var39:MClassKind>*/;
var35 = var41;
}
if (var35){
goto CONTINUE_label;
} else {
}
((void (*)(val*, val*))(var_compiler->class->vft[COLOR_separate_compiler__SeparateCompiler__compile_class_to_c]))(var_compiler, var_mclass) /* compile_class_to_c on <var_compiler:SeparateCompiler>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var32->class->vft[COLOR_abstract_collection__Iterator__next]))(var32) /* next on <var32:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
CONTINUE_label42: (void)0;
((void (*)(val*))(var28->class->vft[COLOR_abstract_collection__Iterator__next]))(var28) /* next on <var28:Iterator[nullable Object]>*/;
}
BREAK_label42: (void)0;
var43 = ((val* (*)(val*))(var_mainmodule->class->vft[COLOR_mmodule__MModule__name]))(var_mainmodule) /* name on <var_mainmodule:MModule>*/;
if (varonce44) {
var45 = varonce44;
} else {
var46 = ".main";
var47 = 5;
var48 = string__NativeString__to_s_with_length(var46, var47);
var45 = var48;
varonce44 = var45;
}
var49 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var49 = array_instance Array[Object] */
var50 = 2;
var51 = NEW_array__NativeArray(var50, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var51)->values[0] = (val*) var43;
((struct instance_array__NativeArray*)var51)->values[1] = (val*) var45;
((void (*)(val*, val*, long))(var49->class->vft[COLOR_array__Array__with_native]))(var49, var51, var50) /* with_native on <var49:Array[Object]>*/;
}
var52 = ((val* (*)(val*))(var49->class->vft[COLOR_string__Object__to_s]))(var49) /* to_s on <var49:Array[Object]>*/;
var53 = ((val* (*)(val*, val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_file]))(var_compiler, var52) /* new_file on <var_compiler:SeparateCompiler>*/;
var53;
((void (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__compile_main_function]))(var_compiler) /* compile_main_function on <var_compiler:SeparateCompiler>*/;
var54 = ((val* (*)(val*))(var_mainmodule->class->vft[COLOR_mmodule__MModule__in_importation]))(var_mainmodule) /* in_importation on <var_mainmodule:MModule>*/;
var55 = ((val* (*)(val*))(var54->class->vft[COLOR_poset__POSetElement__greaters]))(var54) /* greaters on <var54:POSetElement[MModule]>*/;
var56 = ((val* (*)(val*))(var55->class->vft[COLOR_abstract_collection__Collection__iterator]))(var55) /* iterator on <var55:Collection[Object](Collection[MModule])>*/;
for(;;) {
var57 = ((short int (*)(val*))(var56->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var56) /* is_ok on <var56:Iterator[nullable Object]>*/;
if(!var57) break;
var58 = ((val* (*)(val*))(var56->class->vft[COLOR_abstract_collection__Iterator__item]))(var56) /* item on <var56:Iterator[nullable Object]>*/;
var_m59 = var58;
var60 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
if (varonce61) {
var62 = varonce61;
} else {
var63 = "Generate C for module ";
var64 = 22;
var65 = string__NativeString__to_s_with_length(var63, var64);
var62 = var65;
varonce61 = var62;
}
var66 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var66 = array_instance Array[Object] */
var67 = 2;
var68 = NEW_array__NativeArray(var67, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var68)->values[0] = (val*) var62;
((struct instance_array__NativeArray*)var68)->values[1] = (val*) var_m59;
((void (*)(val*, val*, long))(var66->class->vft[COLOR_array__Array__with_native]))(var66, var68, var67) /* with_native on <var66:Array[Object]>*/;
}
var69 = ((val* (*)(val*))(var66->class->vft[COLOR_string__Object__to_s]))(var66) /* to_s on <var66:Array[Object]>*/;
var70 = 2;
((void (*)(val*, val*, long))(var60->class->vft[COLOR_toolcontext__ToolContext__info]))(var60, var69, var70) /* info on <var60:ToolContext>*/;
var71 = ((val* (*)(val*))(var_m59->class->vft[COLOR_mmodule__MModule__name]))(var_m59) /* name on <var_m59:MModule>*/;
if (varonce72) {
var73 = varonce72;
} else {
var74 = ".sep";
var75 = 4;
var76 = string__NativeString__to_s_with_length(var74, var75);
var73 = var76;
varonce72 = var73;
}
var77 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var77 = array_instance Array[Object] */
var78 = 2;
var79 = NEW_array__NativeArray(var78, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var79)->values[0] = (val*) var71;
((struct instance_array__NativeArray*)var79)->values[1] = (val*) var73;
((void (*)(val*, val*, long))(var77->class->vft[COLOR_array__Array__with_native]))(var77, var79, var78) /* with_native on <var77:Array[Object]>*/;
}
var80 = ((val* (*)(val*))(var77->class->vft[COLOR_string__Object__to_s]))(var77) /* to_s on <var77:Array[Object]>*/;
var81 = ((val* (*)(val*, val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_file]))(var_compiler, var80) /* new_file on <var_compiler:SeparateCompiler>*/;
var81;
((void (*)(val*, val*))(var_compiler->class->vft[COLOR_separate_compiler__SeparateCompiler__compile_module_to_c]))(var_compiler, var_m59) /* compile_module_to_c on <var_compiler:SeparateCompiler>*/;
CONTINUE_label82: (void)0;
((void (*)(val*))(var56->class->vft[COLOR_abstract_collection__Iterator__next]))(var56) /* next on <var56:Iterator[nullable Object]>*/;
}
BREAK_label82: (void)0;
var83 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
if (varonce84) {
var85 = varonce84;
} else {
var86 = "Type coloring";
var87 = 13;
var88 = string__NativeString__to_s_with_length(var86, var87);
var85 = var88;
varonce84 = var85;
}
var89 = 2;
((void (*)(val*, val*, long))(var83->class->vft[COLOR_toolcontext__ToolContext__info]))(var83, var85, var89) /* info on <var83:ToolContext>*/;
var90 = ((val* (*)(val*))(var_mainmodule->class->vft[COLOR_mmodule__MModule__name]))(var_mainmodule) /* name on <var_mainmodule:MModule>*/;
if (varonce91) {
var92 = varonce91;
} else {
var93 = ".types";
var94 = 6;
var95 = string__NativeString__to_s_with_length(var93, var94);
var92 = var95;
varonce91 = var92;
}
var96 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var96 = array_instance Array[Object] */
var97 = 2;
var98 = NEW_array__NativeArray(var97, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var98)->values[0] = (val*) var90;
((struct instance_array__NativeArray*)var98)->values[1] = (val*) var92;
((void (*)(val*, val*, long))(var96->class->vft[COLOR_array__Array__with_native]))(var96, var98, var97) /* with_native on <var96:Array[Object]>*/;
}
var99 = ((val* (*)(val*))(var96->class->vft[COLOR_string__Object__to_s]))(var96) /* to_s on <var96:Array[Object]>*/;
var100 = ((val* (*)(val*, val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_file]))(var_compiler, var99) /* new_file on <var_compiler:SeparateCompiler>*/;
var100;
var101 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_separate_compiler__SeparateCompiler__do_type_coloring]))(var_compiler) /* do_type_coloring on <var_compiler:SeparateCompiler>*/;
var_mtypes = var101;
var102 = ((val* (*)(val*))(var_mtypes->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_mtypes) /* iterator on <var_mtypes:POSet[MType]>*/;
for(;;) {
var103 = ((short int (*)(val*))(var102->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var102) /* is_ok on <var102:Iterator[nullable Object]>*/;
if(!var103) break;
var104 = ((val* (*)(val*))(var102->class->vft[COLOR_abstract_collection__Iterator__item]))(var102) /* item on <var102:Iterator[nullable Object]>*/;
var_t = var104;
((void (*)(val*, val*))(var_compiler->class->vft[COLOR_separate_compiler__SeparateCompiler__compile_type_to_c]))(var_compiler, var_t) /* compile_type_to_c on <var_compiler:SeparateCompiler>*/;
CONTINUE_label105: (void)0;
((void (*)(val*))(var102->class->vft[COLOR_abstract_collection__Iterator__next]))(var102) /* next on <var102:Iterator[nullable Object]>*/;
}
BREAK_label105: (void)0;
var106 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_separate_compiler__SeparateCompiler__undead_types]))(var_compiler) /* undead_types on <var_compiler:SeparateCompiler>*/;
var107 = ((val* (*)(val*))(var106->class->vft[COLOR_abstract_collection__Collection__iterator]))(var106) /* iterator on <var106:Set[MType]>*/;
for(;;) {
var108 = ((short int (*)(val*))(var107->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var107) /* is_ok on <var107:Iterator[nullable Object]>*/;
if(!var108) break;
var109 = ((val* (*)(val*))(var107->class->vft[COLOR_abstract_collection__Iterator__item]))(var107) /* item on <var107:Iterator[nullable Object]>*/;
var_t110 = var109;
var111 = ((short int (*)(val*, val*))(var_mtypes->class->vft[COLOR_abstract_collection__Collection__has]))(var_mtypes, var_t110) /* has on <var_mtypes:POSet[MType]>*/;
if (var111){
goto CONTINUE_label112;
} else {
}
((void (*)(val*, val*))(var_compiler->class->vft[COLOR_separate_compiler__SeparateCompiler__compile_type_to_c]))(var_compiler, var_t110) /* compile_type_to_c on <var_compiler:SeparateCompiler>*/;
CONTINUE_label112: (void)0;
((void (*)(val*))(var107->class->vft[COLOR_abstract_collection__Iterator__next]))(var107) /* next on <var107:Iterator[nullable Object]>*/;
}
BREAK_label112: (void)0;
((void (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__display_stats]))(var_compiler) /* display_stats on <var_compiler:SeparateCompiler>*/;
var113 = ((long (*)(val*))(self->class->vft[COLOR_time__Object__get_time]))(self) /* get_time on <self:ModelBuilder>*/;
var_time1 = var113;
var114 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
if (varonce115) {
var116 = varonce115;
} else {
var117 = "*** END GENERATING C: ";
var118 = 22;
var119 = string__NativeString__to_s_with_length(var117, var118);
var116 = var119;
varonce115 = var116;
}
{ /* Inline kernel#Int#- (var_time1,var_time0) */
var122 = var_time1 - var_time0;
var120 = var122;
goto RET_LABEL121;
RET_LABEL121:(void)0;
}
if (varonce123) {
var124 = varonce123;
} else {
var125 = " ***";
var126 = 4;
var127 = string__NativeString__to_s_with_length(var125, var126);
var124 = var127;
varonce123 = var124;
}
var128 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var128 = array_instance Array[Object] */
var129 = 3;
var130 = NEW_array__NativeArray(var129, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var130)->values[0] = (val*) var116;
var131 = BOX_kernel__Int(var120); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var130)->values[1] = (val*) var131;
((struct instance_array__NativeArray*)var130)->values[2] = (val*) var124;
((void (*)(val*, val*, long))(var128->class->vft[COLOR_array__Array__with_native]))(var128, var130, var129) /* with_native on <var128:Array[Object]>*/;
}
var132 = ((val* (*)(val*))(var128->class->vft[COLOR_string__Object__to_s]))(var128) /* to_s on <var128:Array[Object]>*/;
var133 = 2;
((void (*)(val*, val*, long))(var114->class->vft[COLOR_toolcontext__ToolContext__info]))(var114, var132, var133) /* info on <var114:ToolContext>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__ModelBuilder__write_and_make]))(self, var_compiler) /* write_and_make on <self:ModelBuilder>*/;
RET_LABEL:;
}
/* method separate_compiler#ModelBuilder#run_separate_compiler for (self: Object, MModule, nullable RapidTypeAnalysis) */
void VIRTUAL_separate_compiler__ModelBuilder__run_separate_compiler(val* self, val* p0, val* p1) {
separate_compiler__ModelBuilder__run_separate_compiler(self, p0, p1);
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#runtime_type_analysis for (self: SeparateCompiler): nullable RapidTypeAnalysis */
val* separate_compiler__SeparateCompiler__runtime_type_analysis(val* self) {
val* var /* : nullable RapidTypeAnalysis */;
val* var1 /* : nullable RapidTypeAnalysis */;
var1 = self->attrs[COLOR_separate_compiler__SeparateCompiler___64druntime_type_analysis].val; /* @runtime_type_analysis on <self:SeparateCompiler> */
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#runtime_type_analysis for (self: Object): nullable RapidTypeAnalysis */
val* VIRTUAL_separate_compiler__SeparateCompiler__runtime_type_analysis(val* self) {
val* var /* : nullable RapidTypeAnalysis */;
val* var1 /* : nullable RapidTypeAnalysis */;
var1 = separate_compiler__SeparateCompiler__runtime_type_analysis(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#runtime_type_analysis= for (self: SeparateCompiler, nullable RapidTypeAnalysis) */
void separate_compiler__SeparateCompiler__runtime_type_analysis_61d(val* self, val* p0) {
self->attrs[COLOR_separate_compiler__SeparateCompiler___64druntime_type_analysis].val = p0; /* @runtime_type_analysis on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#runtime_type_analysis= for (self: Object, nullable RapidTypeAnalysis) */
void VIRTUAL_separate_compiler__SeparateCompiler__runtime_type_analysis_61d(val* self, val* p0) {
separate_compiler__SeparateCompiler__runtime_type_analysis_61d(self, p0);
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#undead_types for (self: SeparateCompiler): Set[MType] */
val* separate_compiler__SeparateCompiler__undead_types(val* self) {
val* var /* : Set[MType] */;
val* var1 /* : Set[MType] */;
var1 = self->attrs[COLOR_separate_compiler__SeparateCompiler___64dundead_types].val; /* @undead_types on <self:SeparateCompiler> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @undead_types");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 120);
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
var1 = separate_compiler__SeparateCompiler__undead_types(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#undead_types= for (self: SeparateCompiler, Set[MType]) */
void separate_compiler__SeparateCompiler__undead_types_61d(val* self, val* p0) {
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dundead_types].val = p0; /* @undead_types on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#undead_types= for (self: Object, Set[MType]) */
void VIRTUAL_separate_compiler__SeparateCompiler__undead_types_61d(val* self, val* p0) {
separate_compiler__SeparateCompiler__undead_types_61d(self, p0);
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#live_unresolved_types for (self: SeparateCompiler): Map[MClassDef, Set[MType]] */
val* separate_compiler__SeparateCompiler__live_unresolved_types(val* self) {
val* var /* : Map[MClassDef, Set[MType]] */;
val* var1 /* : Map[MClassDef, Set[MType]] */;
var1 = self->attrs[COLOR_separate_compiler__SeparateCompiler___64dlive_unresolved_types].val; /* @live_unresolved_types on <self:SeparateCompiler> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @live_unresolved_types");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 121);
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
var1 = separate_compiler__SeparateCompiler__live_unresolved_types(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#live_unresolved_types= for (self: SeparateCompiler, Map[MClassDef, Set[MType]]) */
void separate_compiler__SeparateCompiler__live_unresolved_types_61d(val* self, val* p0) {
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dlive_unresolved_types].val = p0; /* @live_unresolved_types on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#live_unresolved_types= for (self: Object, Map[MClassDef, Set[MType]]) */
void VIRTUAL_separate_compiler__SeparateCompiler__live_unresolved_types_61d(val* self, val* p0) {
separate_compiler__SeparateCompiler__live_unresolved_types_61d(self, p0);
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#type_layout for (self: SeparateCompiler): nullable Layout[MType] */
val* separate_compiler__SeparateCompiler__type_layout(val* self) {
val* var /* : nullable Layout[MType] */;
val* var1 /* : nullable Layout[MType] */;
var1 = self->attrs[COLOR_separate_compiler__SeparateCompiler___64dtype_layout].val; /* @type_layout on <self:SeparateCompiler> */
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#type_layout for (self: Object): nullable Layout[MType] */
val* VIRTUAL_separate_compiler__SeparateCompiler__type_layout(val* self) {
val* var /* : nullable Layout[MType] */;
val* var1 /* : nullable Layout[MType] */;
var1 = separate_compiler__SeparateCompiler__type_layout(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#type_layout= for (self: SeparateCompiler, nullable Layout[MType]) */
void separate_compiler__SeparateCompiler__type_layout_61d(val* self, val* p0) {
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dtype_layout].val = p0; /* @type_layout on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#type_layout= for (self: Object, nullable Layout[MType]) */
void VIRTUAL_separate_compiler__SeparateCompiler__type_layout_61d(val* self, val* p0) {
separate_compiler__SeparateCompiler__type_layout_61d(self, p0);
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#resolution_layout for (self: SeparateCompiler): nullable Layout[MType] */
val* separate_compiler__SeparateCompiler__resolution_layout(val* self) {
val* var /* : nullable Layout[MType] */;
val* var1 /* : nullable Layout[MType] */;
var1 = self->attrs[COLOR_separate_compiler__SeparateCompiler___64dresolution_layout].val; /* @resolution_layout on <self:SeparateCompiler> */
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#resolution_layout for (self: Object): nullable Layout[MType] */
val* VIRTUAL_separate_compiler__SeparateCompiler__resolution_layout(val* self) {
val* var /* : nullable Layout[MType] */;
val* var1 /* : nullable Layout[MType] */;
var1 = separate_compiler__SeparateCompiler__resolution_layout(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#resolution_layout= for (self: SeparateCompiler, nullable Layout[MType]) */
void separate_compiler__SeparateCompiler__resolution_layout_61d(val* self, val* p0) {
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dresolution_layout].val = p0; /* @resolution_layout on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#resolution_layout= for (self: Object, nullable Layout[MType]) */
void VIRTUAL_separate_compiler__SeparateCompiler__resolution_layout_61d(val* self, val* p0) {
separate_compiler__SeparateCompiler__resolution_layout_61d(self, p0);
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#method_layout for (self: SeparateCompiler): nullable Layout[PropertyLayoutElement] */
val* separate_compiler__SeparateCompiler__method_layout(val* self) {
val* var /* : nullable Layout[PropertyLayoutElement] */;
val* var1 /* : nullable Layout[PropertyLayoutElement] */;
var1 = self->attrs[COLOR_separate_compiler__SeparateCompiler___64dmethod_layout].val; /* @method_layout on <self:SeparateCompiler> */
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#method_layout for (self: Object): nullable Layout[PropertyLayoutElement] */
val* VIRTUAL_separate_compiler__SeparateCompiler__method_layout(val* self) {
val* var /* : nullable Layout[PropertyLayoutElement] */;
val* var1 /* : nullable Layout[PropertyLayoutElement] */;
var1 = separate_compiler__SeparateCompiler__method_layout(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#method_layout= for (self: SeparateCompiler, nullable Layout[PropertyLayoutElement]) */
void separate_compiler__SeparateCompiler__method_layout_61d(val* self, val* p0) {
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dmethod_layout].val = p0; /* @method_layout on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#method_layout= for (self: Object, nullable Layout[PropertyLayoutElement]) */
void VIRTUAL_separate_compiler__SeparateCompiler__method_layout_61d(val* self, val* p0) {
separate_compiler__SeparateCompiler__method_layout_61d(self, p0);
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#attr_layout for (self: SeparateCompiler): nullable Layout[MAttribute] */
val* separate_compiler__SeparateCompiler__attr_layout(val* self) {
val* var /* : nullable Layout[MAttribute] */;
val* var1 /* : nullable Layout[MAttribute] */;
var1 = self->attrs[COLOR_separate_compiler__SeparateCompiler___64dattr_layout].val; /* @attr_layout on <self:SeparateCompiler> */
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#attr_layout for (self: Object): nullable Layout[MAttribute] */
val* VIRTUAL_separate_compiler__SeparateCompiler__attr_layout(val* self) {
val* var /* : nullable Layout[MAttribute] */;
val* var1 /* : nullable Layout[MAttribute] */;
var1 = separate_compiler__SeparateCompiler__attr_layout(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#attr_layout= for (self: SeparateCompiler, nullable Layout[MAttribute]) */
void separate_compiler__SeparateCompiler__attr_layout_61d(val* self, val* p0) {
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dattr_layout].val = p0; /* @attr_layout on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#attr_layout= for (self: Object, nullable Layout[MAttribute]) */
void VIRTUAL_separate_compiler__SeparateCompiler__attr_layout_61d(val* self, val* p0) {
separate_compiler__SeparateCompiler__attr_layout_61d(self, p0);
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
val* var3 /* : String */;
val* var4 /* : CodeFile */;
val* var_file /* var file: CodeFile */;
val* var5 /* : CodeWriter */;
var_mainmodule = p0;
var_mmbuilder = p1;
var_runtime_type_analysis = p2;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__init]))(self, var_mainmodule, var_mmbuilder) /* init on <self:SeparateCompiler>*/;
if (varonce) {
var = varonce;
} else {
var1 = "nit.common";
var2 = 10;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
var4 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_file]))(self, var) /* new_file on <self:SeparateCompiler>*/;
var_file = var4;
var5 = NEW_abstract_compiler__CodeWriter(&type_abstract_compiler__CodeWriter);
((void (*)(val*, val*))(var5->class->vft[COLOR_abstract_compiler__CodeWriter__init]))(var5, var_file) /* init on <var5:CodeWriter>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header_61d]))(self, var5) /* header= on <self:SeparateCompiler>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__runtime_type_analysis_61d]))(self, var_runtime_type_analysis) /* runtime_type_analysis= on <self:SeparateCompiler>*/;
((void (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__compile_box_kinds]))(self) /* compile_box_kinds on <self:SeparateCompiler>*/;
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#init for (self: Object, MModule, ModelBuilder, nullable RapidTypeAnalysis) */
void VIRTUAL_separate_compiler__SeparateCompiler__init(val* self, val* p0, val* p1, val* p2) {
separate_compiler__SeparateCompiler__init(self, p0, p1, p2);
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#compile_header_structs for (self: SeparateCompiler) */
void separate_compiler__SeparateCompiler__compile_header_structs(val* self) {
val* var /* : CodeWriter */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
val* var5 /* : CodeWriter */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
val* var11 /* : CodeWriter */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
val* var17 /* : CodeWriter */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : String */;
short int var23 /* : Bool */;
val* var24 /* : ModelBuilder */;
val* var25 /* : ToolContext */;
val* var26 /* : OptionBool */;
val* var27 /* : nullable Object */;
short int var28 /* : Bool */;
short int var_ /* var : Bool */;
val* var29 /* : ModelBuilder */;
val* var30 /* : ToolContext */;
val* var31 /* : OptionBool */;
val* var32 /* : nullable Object */;
short int var33 /* : Bool */;
val* var34 /* : CodeWriter */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
long var38 /* : Int */;
val* var39 /* : String */;
val* var40 /* : CodeWriter */;
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
val* var51 /* : CodeWriter */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
long var55 /* : Int */;
val* var56 /* : String */;
val* var57 /* : ModelBuilder */;
val* var58 /* : ToolContext */;
val* var59 /* : OptionBool */;
val* var60 /* : nullable Object */;
short int var61 /* : Bool */;
val* var62 /* : CodeWriter */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
long var66 /* : Int */;
val* var67 /* : String */;
val* var68 /* : CodeWriter */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
long var72 /* : Int */;
val* var73 /* : String */;
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateCompiler>*/;
if (varonce) {
var1 = varonce;
} else {
var2 = "typedef void(*nitmethod_t)(void); /* general C type representing a Nit method. */";
var3 = 81;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
((void (*)(val*, val*))(var->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var, var1) /* add_decl on <var:CodeWriter>*/;
((void (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__compile_header_attribute_structs]))(self) /* compile_header_attribute_structs on <self:SeparateCompiler>*/;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateCompiler>*/;
if (varonce6) {
var7 = varonce6;
} else {
var8 = "struct class { int box_kind; nitmethod_t vft[]; }; /* general C type representing a Nit class. */";
var9 = 97;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
((void (*)(val*, val*))(var5->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var5, var7) /* add_decl on <var5:CodeWriter>*/;
var11 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateCompiler>*/;
if (varonce12) {
var13 = varonce12;
} else {
var14 = "struct type { int id; const char *name; int color; short int is_nullable; const struct types *resolution_table; int table_size; int type_table[]; }; /* general C type representing a Nit type. */";
var15 = 194;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
((void (*)(val*, val*))(var11->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var11, var13) /* add_decl on <var11:CodeWriter>*/;
var17 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateCompiler>*/;
if (varonce18) {
var19 = varonce18;
} else {
var20 = "struct instance { const struct type *type; const struct class *class; nitattribute_t attrs[]; }; /* general C type representing a Nit instance. */";
var21 = 146;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
((void (*)(val*, val*))(var17->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var17, var19) /* add_decl on <var17:CodeWriter>*/;
var24 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(self) /* modelbuilder on <self:SeparateCompiler>*/;
var25 = ((val* (*)(val*))(var24->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var24) /* toolcontext on <var24:ModelBuilder>*/;
var26 = ((val* (*)(val*))(var25->class->vft[COLOR_separate_compiler__ToolContext__opt_phmod_typing]))(var25) /* opt_phmod_typing on <var25:ToolContext>*/;
var27 = ((val* (*)(val*))(var26->class->vft[COLOR_opts__Option__value]))(var26) /* value on <var26:OptionBool>*/;
var28 = ((struct instance_kernel__Bool*)var27)->value; /* autounbox from nullable Object to Bool */;
var_ = var28;
if (var28){
var23 = var_;
} else {
var29 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(self) /* modelbuilder on <self:SeparateCompiler>*/;
var30 = ((val* (*)(val*))(var29->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var29) /* toolcontext on <var29:ModelBuilder>*/;
var31 = ((val* (*)(val*))(var30->class->vft[COLOR_separate_compiler__ToolContext__opt_phand_typing]))(var30) /* opt_phand_typing on <var30:ToolContext>*/;
var32 = ((val* (*)(val*))(var31->class->vft[COLOR_opts__Option__value]))(var31) /* value on <var31:OptionBool>*/;
var33 = ((struct instance_kernel__Bool*)var32)->value; /* autounbox from nullable Object to Bool */;
var23 = var33;
}
if (var23){
var34 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateCompiler>*/;
if (varonce35) {
var36 = varonce35;
} else {
var37 = "struct types { int mask; const struct type *types[]; }; /* a list types (used for vts, fts and unresolved lists). */";
var38 = 116;
var39 = string__NativeString__to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
((void (*)(val*, val*))(var34->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var34, var36) /* add_decl on <var34:CodeWriter>*/;
} else {
var40 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateCompiler>*/;
if (varonce41) {
var42 = varonce41;
} else {
var43 = "struct types { int dummy; const struct type *types[]; }; /* a list types (used for vts, fts and unresolved lists). */";
var44 = 117;
var45 = string__NativeString__to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
((void (*)(val*, val*))(var40->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var40, var42) /* add_decl on <var40:CodeWriter>*/;
}
var46 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(self) /* modelbuilder on <self:SeparateCompiler>*/;
var47 = ((val* (*)(val*))(var46->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var46) /* toolcontext on <var46:ModelBuilder>*/;
var48 = ((val* (*)(val*))(var47->class->vft[COLOR_separate_compiler__ToolContext__opt_phmod_typing]))(var47) /* opt_phmod_typing on <var47:ToolContext>*/;
var49 = ((val* (*)(val*))(var48->class->vft[COLOR_opts__Option__value]))(var48) /* value on <var48:OptionBool>*/;
var50 = ((struct instance_kernel__Bool*)var49)->value; /* autounbox from nullable Object to Bool */;
if (var50){
var51 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateCompiler>*/;
if (varonce52) {
var53 = varonce52;
} else {
var54 = "#define HASH(mask, id) ((mask)%(id))";
var55 = 36;
var56 = string__NativeString__to_s_with_length(var54, var55);
var53 = var56;
varonce52 = var53;
}
((void (*)(val*, val*))(var51->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var51, var53) /* add_decl on <var51:CodeWriter>*/;
} else {
var57 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(self) /* modelbuilder on <self:SeparateCompiler>*/;
var58 = ((val* (*)(val*))(var57->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var57) /* toolcontext on <var57:ModelBuilder>*/;
var59 = ((val* (*)(val*))(var58->class->vft[COLOR_separate_compiler__ToolContext__opt_phand_typing]))(var58) /* opt_phand_typing on <var58:ToolContext>*/;
var60 = ((val* (*)(val*))(var59->class->vft[COLOR_opts__Option__value]))(var59) /* value on <var59:OptionBool>*/;
var61 = ((struct instance_kernel__Bool*)var60)->value; /* autounbox from nullable Object to Bool */;
if (var61){
var62 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateCompiler>*/;
if (varonce63) {
var64 = varonce63;
} else {
var65 = "#define HASH(mask, id) ((mask)&(id))";
var66 = 36;
var67 = string__NativeString__to_s_with_length(var65, var66);
var64 = var67;
varonce63 = var64;
}
((void (*)(val*, val*))(var62->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var62, var64) /* add_decl on <var62:CodeWriter>*/;
} else {
}
}
var68 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateCompiler>*/;
if (varonce69) {
var70 = varonce69;
} else {
var71 = "typedef struct instance val; /* general C type representing a Nit instance. */";
var72 = 78;
var73 = string__NativeString__to_s_with_length(var71, var72);
var70 = var73;
varonce69 = var70;
}
((void (*)(val*, val*))(var68->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var68, var70) /* add_decl on <var68:CodeWriter>*/;
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#compile_header_structs for (self: Object) */
void VIRTUAL_separate_compiler__SeparateCompiler__compile_header_structs(val* self) {
separate_compiler__SeparateCompiler__compile_header_structs(self);
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#compile_header_attribute_structs for (self: SeparateCompiler) */
void separate_compiler__SeparateCompiler__compile_header_attribute_structs(val* self) {
val* var /* : ModelBuilder */;
val* var1 /* : ToolContext */;
val* var2 /* : OptionBool */;
val* var3 /* : nullable Object */;
short int var4 /* : Bool */;
val* var5 /* : CodeWriter */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
val* var10 /* : CodeWriter */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : String */;
val* var16 /* : CodeWriter */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : String */;
val* var22 /* : HashMap[MClass, Int] */;
val* var23 /* : MapIterator[Object, nullable Object] */;
short int var24 /* : Bool */;
val* var25 /* : Object */;
val* var_c /* var c: MClass */;
val* var26 /* : nullable Object */;
long var_v /* var v: Int */;
long var27 /* : Int */;
val* var28 /* : MClassType */;
val* var_t /* var t: MClassType */;
val* var29 /* : CodeWriter */;
val* var30 /* : String */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : String */;
val* var36 /* : String */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
long var40 /* : Int */;
val* var41 /* : String */;
val* var42 /* : Array[Object] */;
long var43 /* : Int */;
val* var44 /* : NativeArray[Object] */;
val* var45 /* : String */;
val* var46 /* : CodeWriter */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
long var50 /* : Int */;
val* var51 /* : String */;
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(self) /* modelbuilder on <self:SeparateCompiler>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var) /* toolcontext on <var:ModelBuilder>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_separate_compiler__ToolContext__opt_no_union_attribute]))(var1) /* opt_no_union_attribute on <var1:ToolContext>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_opts__Option__value]))(var2) /* value on <var2:OptionBool>*/;
var4 = ((struct instance_kernel__Bool*)var3)->value; /* autounbox from nullable Object to Bool */;
if (var4){
var5 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateCompiler>*/;
if (varonce) {
var6 = varonce;
} else {
var7 = "typedef void* nitattribute_t; /* general C type representing a Nit attribute. */";
var8 = 80;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
((void (*)(val*, val*))(var5->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var5, var6) /* add_decl on <var5:CodeWriter>*/;
} else {
var10 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateCompiler>*/;
if (varonce11) {
var12 = varonce11;
} else {
var13 = "typedef union {";
var14 = 15;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
((void (*)(val*, val*))(var10->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var10, var12) /* add_decl on <var10:CodeWriter>*/;
var16 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateCompiler>*/;
if (varonce17) {
var18 = varonce17;
} else {
var19 = "void* val;";
var20 = 10;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
((void (*)(val*, val*))(var16->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var16, var18) /* add_decl on <var16:CodeWriter>*/;
var22 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__box_kinds]))(self) /* box_kinds on <self:SeparateCompiler>*/;
var23 = ((val* (*)(val*))(var22->class->vft[COLOR_abstract_collection__MapRead__iterator]))(var22) /* iterator on <var22:HashMap[MClass, Int]>*/;
for(;;) {
var24 = ((short int (*)(val*))(var23->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var23) /* is_ok on <var23:MapIterator[Object, nullable Object]>*/;
if(!var24) break;
var25 = ((val* (*)(val*))(var23->class->vft[COLOR_abstract_collection__MapIterator__key]))(var23) /* key on <var23:MapIterator[Object, nullable Object]>*/;
var_c = var25;
var26 = ((val* (*)(val*))(var23->class->vft[COLOR_abstract_collection__MapIterator__item]))(var23) /* item on <var23:MapIterator[Object, nullable Object]>*/;
var27 = ((struct instance_kernel__Int*)var26)->value; /* autounbox from nullable Object to Int */;
var_v = var27;
var28 = ((val* (*)(val*))(var_c->class->vft[COLOR_model__MClass__mclass_type]))(var_c) /* mclass_type on <var_c:MClass>*/;
var_t = var28;
var29 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateCompiler>*/;
var30 = ((val* (*)(val*))(var_t->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_t) /* ctype on <var_t:MClassType>*/;
if (varonce31) {
var32 = varonce31;
} else {
var33 = " ";
var34 = 1;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
var36 = ((val* (*)(val*))(var_t->class->vft[COLOR_abstract_compiler__MType__ctypename]))(var_t) /* ctypename on <var_t:MClassType>*/;
if (varonce37) {
var38 = varonce37;
} else {
var39 = ";";
var40 = 1;
var41 = string__NativeString__to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
var42 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var42 = array_instance Array[Object] */
var43 = 4;
var44 = NEW_array__NativeArray(var43, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var44)->values[0] = (val*) var30;
((struct instance_array__NativeArray*)var44)->values[1] = (val*) var32;
((struct instance_array__NativeArray*)var44)->values[2] = (val*) var36;
((struct instance_array__NativeArray*)var44)->values[3] = (val*) var38;
((void (*)(val*, val*, long))(var42->class->vft[COLOR_array__Array__with_native]))(var42, var44, var43) /* with_native on <var42:Array[Object]>*/;
}
var45 = ((val* (*)(val*))(var42->class->vft[COLOR_string__Object__to_s]))(var42) /* to_s on <var42:Array[Object]>*/;
((void (*)(val*, val*))(var29->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var29, var45) /* add_decl on <var29:CodeWriter>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var23->class->vft[COLOR_abstract_collection__MapIterator__next]))(var23) /* next on <var23:MapIterator[Object, nullable Object]>*/;
}
BREAK_label: (void)0;
var46 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateCompiler>*/;
if (varonce47) {
var48 = varonce47;
} else {
var49 = "} nitattribute_t; /* general C type representing a Nit attribute. */";
var50 = 68;
var51 = string__NativeString__to_s_with_length(var49, var50);
var48 = var51;
varonce47 = var48;
}
((void (*)(val*, val*))(var46->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var46, var48) /* add_decl on <var46:CodeWriter>*/;
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#compile_header_attribute_structs for (self: Object) */
void VIRTUAL_separate_compiler__SeparateCompiler__compile_header_attribute_structs(val* self) {
separate_compiler__SeparateCompiler__compile_header_attribute_structs(self);
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
val* var5 /* : String */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : String */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : String */;
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
val* var31 /* : Iterator[nullable Object] */;
short int var32 /* : Bool */;
val* var33 /* : nullable Object */;
val* var_classname /* var classname: String */;
val* var34 /* : MModule */;
val* var35 /* : Model */;
val* var36 /* : nullable Array[MClass] */;
val* var_classes /* var classes: nullable Array[MClass] */;
val* var37 /* : null */;
short int var38 /* : Bool */;
long var39 /* : Int */;
long var40 /* : Int */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
long var47 /* : Int */;
val* var48 /* : String */;
val* var49 /* : String */;
val* var50 /* : HashMap[MClass, Int] */;
val* var51 /* : nullable Object */;
val* var52 /* : HashMap[MClass, Int] */;
long var53 /* : Int */;
long var54 /* : Int */;
long var55 /* : Int */;
long var57 /* : Int */;
val* var58 /* : nullable Object */;
var = NEW_array__Array(&type_array__Arraystring__String);
var1 = 6;
((void (*)(val*, long))(var->class->vft[COLOR_array__Array__with_capacity]))(var, var1) /* with_capacity on <var:Array[String]>*/;
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
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var2) /* push on <var_:Array[String]>*/;
if (varonce6) {
var7 = varonce6;
} else {
var8 = "Bool";
var9 = 4;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var7) /* push on <var_:Array[String]>*/;
if (varonce11) {
var12 = varonce11;
} else {
var13 = "Char";
var14 = 4;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var12) /* push on <var_:Array[String]>*/;
if (varonce16) {
var17 = varonce16;
} else {
var18 = "Float";
var19 = 5;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var17) /* push on <var_:Array[String]>*/;
if (varonce21) {
var22 = varonce21;
} else {
var23 = "NativeString";
var24 = 12;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var22) /* push on <var_:Array[String]>*/;
if (varonce26) {
var27 = varonce26;
} else {
var28 = "Pointer";
var29 = 7;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var27) /* push on <var_:Array[String]>*/;
var31 = ((val* (*)(val*))(var_->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Array[String]>*/;
for(;;) {
var32 = ((short int (*)(val*))(var31->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var31) /* is_ok on <var31:Iterator[nullable Object]>*/;
if(!var32) break;
var33 = ((val* (*)(val*))(var31->class->vft[COLOR_abstract_collection__Iterator__item]))(var31) /* item on <var31:Iterator[nullable Object]>*/;
var_classname = var33;
var34 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:SeparateCompiler>*/;
var35 = ((val* (*)(val*))(var34->class->vft[COLOR_mmodule__MModule__model]))(var34) /* model on <var34:MModule>*/;
var36 = ((val* (*)(val*, val*))(var35->class->vft[COLOR_model__Model__get_mclasses_by_name]))(var35, var_classname) /* get_mclasses_by_name on <var35:Model>*/;
var_classes = var36;
var37 = NULL;
if (var_classes == NULL) {
var38 = 1; /* is null */
} else {
var38 = 0; /* arg is null but recv is not */
}
if (var38){
goto CONTINUE_label;
} else {
}
var39 = ((long (*)(val*))(var_classes->class->vft[COLOR_abstract_collection__Collection__length]))(var_classes) /* length on <var_classes:nullable Array[MClass](Array[MClass])>*/;
var40 = 1;
{ /* Inline kernel#Int#== (var39,var40) */
var43 = var39 == var40;
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
if (!var41) {
if (varonce44) {
var45 = varonce44;
} else {
var46 = ", ";
var47 = 2;
var48 = string__NativeString__to_s_with_length(var46, var47);
var45 = var48;
varonce44 = var45;
}
var49 = ((val* (*)(val*, val*))(var_classes->class->vft[COLOR_string__Collection__join]))(var_classes, var45) /* join on <var_classes:nullable Array[MClass](Array[MClass])>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var49) /* print on <self:SeparateCompiler>*/;
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 182);
show_backtrace(1);
}
var50 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__box_kinds]))(self) /* box_kinds on <self:SeparateCompiler>*/;
var51 = ((val* (*)(val*))(var_classes->class->vft[COLOR_abstract_collection__Collection__first]))(var_classes) /* first on <var_classes:nullable Array[MClass](Array[MClass])>*/;
var52 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__box_kinds]))(self) /* box_kinds on <self:SeparateCompiler>*/;
var53 = ((long (*)(val*))(var52->class->vft[COLOR_abstract_collection__MapRead__length]))(var52) /* length on <var52:HashMap[MClass, Int]>*/;
var54 = 1;
{ /* Inline kernel#Int#+ (var53,var54) */
var57 = var53 + var54;
var55 = var57;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
var58 = BOX_kernel__Int(var55); /* autobox from Int to nullable Object */
((void (*)(val*, val*, val*))(var50->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var50, var51, var58) /* []= on <var50:HashMap[MClass, Int]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var31->class->vft[COLOR_abstract_collection__Iterator__next]))(var31) /* next on <var31:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#compile_box_kinds for (self: Object) */
void VIRTUAL_separate_compiler__SeparateCompiler__compile_box_kinds(val* self) {
separate_compiler__SeparateCompiler__compile_box_kinds(self);
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#box_kinds for (self: SeparateCompiler): HashMap[MClass, Int] */
val* separate_compiler__SeparateCompiler__box_kinds(val* self) {
val* var /* : HashMap[MClass, Int] */;
val* var1 /* : HashMap[MClass, Int] */;
var1 = self->attrs[COLOR_separate_compiler__SeparateCompiler___64dbox_kinds].val; /* @box_kinds on <self:SeparateCompiler> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @box_kinds");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 187);
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
var1 = separate_compiler__SeparateCompiler__box_kinds(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#box_kinds= for (self: SeparateCompiler, HashMap[MClass, Int]) */
void separate_compiler__SeparateCompiler__box_kinds_61d(val* self, val* p0) {
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dbox_kinds].val = p0; /* @box_kinds on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#box_kinds= for (self: Object, HashMap[MClass, Int]) */
void VIRTUAL_separate_compiler__SeparateCompiler__box_kinds_61d(val* self, val* p0) {
separate_compiler__SeparateCompiler__box_kinds_61d(self, p0);
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#box_kind_of for (self: SeparateCompiler, MClass): Int */
long separate_compiler__SeparateCompiler__box_kind_of(val* self, val* p0) {
long var /* : Int */;
val* var_mclass /* var mclass: MClass */;
val* var1 /* : MClassType */;
val* var2 /* : String */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
short int var7 /* : Bool */;
long var8 /* : Int */;
val* var9 /* : MClassKind */;
val* var10 /* : MClassKind */;
short int var11 /* : Bool */;
val* var12 /* : HashMap[MClass, Int] */;
val* var13 /* : MModule */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : String */;
val* var19 /* : MClass */;
val* var20 /* : nullable Object */;
long var21 /* : Int */;
val* var22 /* : HashMap[MClass, Int] */;
val* var23 /* : nullable Object */;
long var24 /* : Int */;
var_mclass = p0;
var1 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__mclass_type]))(var_mclass) /* mclass_type on <var_mclass:MClass>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_compiler__MType__ctype]))(var1) /* ctype on <var1:MClassType>*/;
if (varonce) {
var3 = varonce;
} else {
var4 = "val*";
var5 = 4;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
var7 = ((short int (*)(val*, val*))(var2->class->vft[COLOR_kernel__Object___61d_61d]))(var2, var3) /* == on <var2:String>*/;
if (var7){
var8 = 0;
var = var8;
goto RET_LABEL;
} else {
var9 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__kind]))(var_mclass) /* kind on <var_mclass:MClass>*/;
var10 = ((val* (*)(val*))(self->class->vft[COLOR_model__Object__extern_kind]))(self) /* extern_kind on <self:SeparateCompiler>*/;
var11 = ((short int (*)(val*, val*))(var9->class->vft[COLOR_kernel__Object___61d_61d]))(var9, var10) /* == on <var9:MClassKind>*/;
if (var11){
var12 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__box_kinds]))(self) /* box_kinds on <self:SeparateCompiler>*/;
var13 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:SeparateCompiler>*/;
if (varonce14) {
var15 = varonce14;
} else {
var16 = "Pointer";
var17 = 7;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
var19 = ((val* (*)(val*, val*))(var13->class->vft[COLOR_model__MModule__get_primitive_class]))(var13, var15) /* get_primitive_class on <var13:MModule>*/;
var20 = ((val* (*)(val*, val*))(var12->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var12, var19) /* [] on <var12:HashMap[MClass, Int]>*/;
var21 = ((struct instance_kernel__Int*)var20)->value; /* autounbox from nullable Object to Int */;
var = var21;
goto RET_LABEL;
} else {
var22 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__box_kinds]))(self) /* box_kinds on <self:SeparateCompiler>*/;
var23 = ((val* (*)(val*, val*))(var22->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var22, var_mclass) /* [] on <var22:HashMap[MClass, Int]>*/;
var24 = ((struct instance_kernel__Int*)var23)->value; /* autounbox from nullable Object to Int */;
var = var24;
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
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_visitor]))(self) /* new_visitor on <self:SeparateCompiler>*/;
var_v = var;
var1 = ((val* (*)(val*))(var_colors->class->vft[COLOR_abstract_collection__MapRead__iterator]))(var_colors) /* iterator on <var_colors:Map[Object, Int]>*/;
for(;;) {
var2 = ((short int (*)(val*))(var1->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var1) /* is_ok on <var1:MapIterator[Object, nullable Object]>*/;
if(!var2) break;
var3 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__MapIterator__key]))(var1) /* key on <var1:MapIterator[Object, nullable Object]>*/;
var_m = var3;
var4 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__MapIterator__item]))(var1) /* item on <var1:MapIterator[Object, nullable Object]>*/;
var5 = ((struct instance_kernel__Int*)var4)->value; /* autounbox from nullable Object to Int */;
var_c = var5;
((void (*)(val*, val*, val*, long))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__compile_color_const]))(self, var_v, var_m, var_c) /* compile_color_const on <self:SeparateCompiler>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var1->class->vft[COLOR_abstract_collection__MapIterator__next]))(var1) /* next on <var1:MapIterator[Object, nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#compile_color_consts for (self: Object, Map[Object, Int]) */
void VIRTUAL_separate_compiler__SeparateCompiler__compile_color_consts(val* self, val* p0) {
separate_compiler__SeparateCompiler__compile_color_consts(self, p0);
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#compile_color_const for (self: SeparateCompiler, SeparateCompilerVisitor, Object, Int) */
void separate_compiler__SeparateCompiler__compile_color_const(val* self, val* p0, val* p1, long p2) {
val* var_v /* var v: SeparateCompilerVisitor */;
val* var_m /* var m: Object */;
long var_color /* var color: Int */;
val* var /* : HashSet[Object] */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : ModelBuilder */;
val* var4 /* : ToolContext */;
val* var5 /* : OptionBool */;
val* var6 /* : nullable Object */;
short int var7 /* : Bool */;
val* var8 /* : String */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
val* var13 /* : String */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : String */;
val* var19 /* : Array[Object] */;
long var20 /* : Int */;
val* var21 /* : NativeArray[Object] */;
val* var22 /* : Object */;
val* var23 /* : String */;
val* var24 /* : String */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
long var28 /* : Int */;
val* var29 /* : String */;
val* var30 /* : String */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : String */;
val* var36 /* : Array[Object] */;
long var37 /* : Int */;
val* var38 /* : NativeArray[Object] */;
val* var39 /* : String */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : String */;
val* var45 /* : String */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
long var49 /* : Int */;
val* var50 /* : String */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : String */;
val* var56 /* : Array[Object] */;
long var57 /* : Int */;
val* var58 /* : NativeArray[Object] */;
val* var59 /* : Object */;
val* var60 /* : String */;
short int var61 /* : Bool */;
int cltype62;
int idtype63;
val* var64 /* : ModelBuilder */;
val* var65 /* : ToolContext */;
val* var66 /* : OptionBool */;
val* var67 /* : nullable Object */;
short int var68 /* : Bool */;
val* var69 /* : String */;
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
val* var81 /* : Array[Object] */;
long var82 /* : Int */;
val* var83 /* : NativeArray[Object] */;
val* var84 /* : Object */;
val* var85 /* : String */;
val* var86 /* : String */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : NativeString */;
long var90 /* : Int */;
val* var91 /* : String */;
val* var92 /* : String */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
long var96 /* : Int */;
val* var97 /* : String */;
val* var98 /* : Array[Object] */;
long var99 /* : Int */;
val* var100 /* : NativeArray[Object] */;
val* var101 /* : String */;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : NativeString */;
long var105 /* : Int */;
val* var106 /* : String */;
val* var107 /* : String */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : NativeString */;
long var111 /* : Int */;
val* var112 /* : String */;
static val* varonce113;
val* var114 /* : String */;
char* var115 /* : NativeString */;
long var116 /* : Int */;
val* var117 /* : String */;
val* var118 /* : Array[Object] */;
long var119 /* : Int */;
val* var120 /* : NativeArray[Object] */;
val* var121 /* : Object */;
val* var122 /* : String */;
short int var123 /* : Bool */;
int cltype124;
int idtype125;
val* var126 /* : ModelBuilder */;
val* var127 /* : ToolContext */;
val* var128 /* : OptionBool */;
val* var129 /* : nullable Object */;
short int var130 /* : Bool */;
val* var131 /* : String */;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : NativeString */;
long var135 /* : Int */;
val* var136 /* : String */;
val* var137 /* : String */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : NativeString */;
long var141 /* : Int */;
val* var142 /* : String */;
val* var143 /* : Array[Object] */;
long var144 /* : Int */;
val* var145 /* : NativeArray[Object] */;
val* var146 /* : Object */;
val* var147 /* : String */;
val* var148 /* : String */;
static val* varonce149;
val* var150 /* : String */;
char* var151 /* : NativeString */;
long var152 /* : Int */;
val* var153 /* : String */;
val* var154 /* : String */;
static val* varonce155;
val* var156 /* : String */;
char* var157 /* : NativeString */;
long var158 /* : Int */;
val* var159 /* : String */;
val* var160 /* : Array[Object] */;
long var161 /* : Int */;
val* var162 /* : NativeArray[Object] */;
val* var163 /* : String */;
static val* varonce164;
val* var165 /* : String */;
char* var166 /* : NativeString */;
long var167 /* : Int */;
val* var168 /* : String */;
val* var169 /* : String */;
static val* varonce170;
val* var171 /* : String */;
char* var172 /* : NativeString */;
long var173 /* : Int */;
val* var174 /* : String */;
static val* varonce175;
val* var176 /* : String */;
char* var177 /* : NativeString */;
long var178 /* : Int */;
val* var179 /* : String */;
val* var180 /* : Array[Object] */;
long var181 /* : Int */;
val* var182 /* : NativeArray[Object] */;
val* var183 /* : Object */;
val* var184 /* : String */;
val* var185 /* : HashSet[Object] */;
var_v = p0;
var_m = p1;
var_color = p2;
var = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__color_consts_done]))(self) /* color_consts_done on <self:SeparateCompiler>*/;
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_abstract_collection__Collection__has]))(var, var_m) /* has on <var:HashSet[Object]>*/;
if (var1){
goto RET_LABEL;
} else {
}
/* <var_m:Object> isa MProperty */
cltype = type_model__MProperty.color;
idtype = type_model__MProperty.id;
if(cltype >= var_m->type->table_size) {
var2 = 0;
} else {
var2 = var_m->type->type_table[cltype] == idtype;
}
if (var2){
var3 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(self) /* modelbuilder on <self:SeparateCompiler>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var3) /* toolcontext on <var3:ModelBuilder>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_separate_compiler__ToolContext__opt_inline_coloring_numbers]))(var4) /* opt_inline_coloring_numbers on <var4:ToolContext>*/;
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_opts__Option__value]))(var5) /* value on <var5:OptionBool>*/;
var7 = ((struct instance_kernel__Bool*)var6)->value; /* autounbox from nullable Object to Bool */;
if (var7){
var8 = ((val* (*)(val*))(var_m->class->vft[COLOR_separate_compiler__MProperty__const_color]))(var_m) /* const_color on <var_m:Object(MProperty)>*/;
if (varonce) {
var9 = varonce;
} else {
var10 = "#define ";
var11 = 8;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce = var9;
}
var13 = ((val* (*)(val*))(var_m->class->vft[COLOR_separate_compiler__MProperty__const_color]))(var_m) /* const_color on <var_m:Object(MProperty)>*/;
if (varonce14) {
var15 = varonce14;
} else {
var16 = " ";
var17 = 1;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
var19 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var19 = array_instance Array[Object] */
var20 = 4;
var21 = NEW_array__NativeArray(var20, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var21)->values[0] = (val*) var9;
((struct instance_array__NativeArray*)var21)->values[1] = (val*) var13;
((struct instance_array__NativeArray*)var21)->values[2] = (val*) var15;
var22 = BOX_kernel__Int(var_color); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var21)->values[3] = (val*) var22;
((void (*)(val*, val*, long))(var19->class->vft[COLOR_array__Array__with_native]))(var19, var21, var20) /* with_native on <var19:Array[Object]>*/;
}
var23 = ((val* (*)(val*))(var19->class->vft[COLOR_string__Object__to_s]))(var19) /* to_s on <var19:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__provide_declaration]))(self, var8, var23) /* provide_declaration on <self:SeparateCompiler>*/;
} else {
var24 = ((val* (*)(val*))(var_m->class->vft[COLOR_separate_compiler__MProperty__const_color]))(var_m) /* const_color on <var_m:Object(MProperty)>*/;
if (varonce25) {
var26 = varonce25;
} else {
var27 = "extern const int ";
var28 = 17;
var29 = string__NativeString__to_s_with_length(var27, var28);
var26 = var29;
varonce25 = var26;
}
var30 = ((val* (*)(val*))(var_m->class->vft[COLOR_separate_compiler__MProperty__const_color]))(var_m) /* const_color on <var_m:Object(MProperty)>*/;
if (varonce31) {
var32 = varonce31;
} else {
var33 = ";";
var34 = 1;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
var36 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var36 = array_instance Array[Object] */
var37 = 3;
var38 = NEW_array__NativeArray(var37, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var38)->values[0] = (val*) var26;
((struct instance_array__NativeArray*)var38)->values[1] = (val*) var30;
((struct instance_array__NativeArray*)var38)->values[2] = (val*) var32;
((void (*)(val*, val*, long))(var36->class->vft[COLOR_array__Array__with_native]))(var36, var38, var37) /* with_native on <var36:Array[Object]>*/;
}
var39 = ((val* (*)(val*))(var36->class->vft[COLOR_string__Object__to_s]))(var36) /* to_s on <var36:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__provide_declaration]))(self, var24, var39) /* provide_declaration on <self:SeparateCompiler>*/;
if (varonce40) {
var41 = varonce40;
} else {
var42 = "const int ";
var43 = 10;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
var45 = ((val* (*)(val*))(var_m->class->vft[COLOR_separate_compiler__MProperty__const_color]))(var_m) /* const_color on <var_m:Object(MProperty)>*/;
if (varonce46) {
var47 = varonce46;
} else {
var48 = " = ";
var49 = 3;
var50 = string__NativeString__to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
if (varonce51) {
var52 = varonce51;
} else {
var53 = ";";
var54 = 1;
var55 = string__NativeString__to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
var56 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var56 = array_instance Array[Object] */
var57 = 5;
var58 = NEW_array__NativeArray(var57, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var58)->values[0] = (val*) var41;
((struct instance_array__NativeArray*)var58)->values[1] = (val*) var45;
((struct instance_array__NativeArray*)var58)->values[2] = (val*) var47;
var59 = BOX_kernel__Int(var_color); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var58)->values[3] = (val*) var59;
((struct instance_array__NativeArray*)var58)->values[4] = (val*) var52;
((void (*)(val*, val*, long))(var56->class->vft[COLOR_array__Array__with_native]))(var56, var58, var57) /* with_native on <var56:Array[Object]>*/;
}
var60 = ((val* (*)(val*))(var56->class->vft[COLOR_string__Object__to_s]))(var56) /* to_s on <var56:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var60) /* add on <var_v:SeparateCompilerVisitor>*/;
}
} else {
/* <var_m:Object> isa MPropDef */
cltype62 = type_model__MPropDef.color;
idtype63 = type_model__MPropDef.id;
if(cltype62 >= var_m->type->table_size) {
var61 = 0;
} else {
var61 = var_m->type->type_table[cltype62] == idtype63;
}
if (var61){
var64 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(self) /* modelbuilder on <self:SeparateCompiler>*/;
var65 = ((val* (*)(val*))(var64->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var64) /* toolcontext on <var64:ModelBuilder>*/;
var66 = ((val* (*)(val*))(var65->class->vft[COLOR_separate_compiler__ToolContext__opt_inline_coloring_numbers]))(var65) /* opt_inline_coloring_numbers on <var65:ToolContext>*/;
var67 = ((val* (*)(val*))(var66->class->vft[COLOR_opts__Option__value]))(var66) /* value on <var66:OptionBool>*/;
var68 = ((struct instance_kernel__Bool*)var67)->value; /* autounbox from nullable Object to Bool */;
if (var68){
var69 = ((val* (*)(val*))(var_m->class->vft[COLOR_separate_compiler__MPropDef__const_color]))(var_m) /* const_color on <var_m:Object(MPropDef)>*/;
if (varonce70) {
var71 = varonce70;
} else {
var72 = "#define ";
var73 = 8;
var74 = string__NativeString__to_s_with_length(var72, var73);
var71 = var74;
varonce70 = var71;
}
var75 = ((val* (*)(val*))(var_m->class->vft[COLOR_separate_compiler__MPropDef__const_color]))(var_m) /* const_color on <var_m:Object(MPropDef)>*/;
if (varonce76) {
var77 = varonce76;
} else {
var78 = " ";
var79 = 1;
var80 = string__NativeString__to_s_with_length(var78, var79);
var77 = var80;
varonce76 = var77;
}
var81 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var81 = array_instance Array[Object] */
var82 = 4;
var83 = NEW_array__NativeArray(var82, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var83)->values[0] = (val*) var71;
((struct instance_array__NativeArray*)var83)->values[1] = (val*) var75;
((struct instance_array__NativeArray*)var83)->values[2] = (val*) var77;
var84 = BOX_kernel__Int(var_color); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var83)->values[3] = (val*) var84;
((void (*)(val*, val*, long))(var81->class->vft[COLOR_array__Array__with_native]))(var81, var83, var82) /* with_native on <var81:Array[Object]>*/;
}
var85 = ((val* (*)(val*))(var81->class->vft[COLOR_string__Object__to_s]))(var81) /* to_s on <var81:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__provide_declaration]))(self, var69, var85) /* provide_declaration on <self:SeparateCompiler>*/;
} else {
var86 = ((val* (*)(val*))(var_m->class->vft[COLOR_separate_compiler__MPropDef__const_color]))(var_m) /* const_color on <var_m:Object(MPropDef)>*/;
if (varonce87) {
var88 = varonce87;
} else {
var89 = "extern const int ";
var90 = 17;
var91 = string__NativeString__to_s_with_length(var89, var90);
var88 = var91;
varonce87 = var88;
}
var92 = ((val* (*)(val*))(var_m->class->vft[COLOR_separate_compiler__MPropDef__const_color]))(var_m) /* const_color on <var_m:Object(MPropDef)>*/;
if (varonce93) {
var94 = varonce93;
} else {
var95 = ";";
var96 = 1;
var97 = string__NativeString__to_s_with_length(var95, var96);
var94 = var97;
varonce93 = var94;
}
var98 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var98 = array_instance Array[Object] */
var99 = 3;
var100 = NEW_array__NativeArray(var99, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var100)->values[0] = (val*) var88;
((struct instance_array__NativeArray*)var100)->values[1] = (val*) var92;
((struct instance_array__NativeArray*)var100)->values[2] = (val*) var94;
((void (*)(val*, val*, long))(var98->class->vft[COLOR_array__Array__with_native]))(var98, var100, var99) /* with_native on <var98:Array[Object]>*/;
}
var101 = ((val* (*)(val*))(var98->class->vft[COLOR_string__Object__to_s]))(var98) /* to_s on <var98:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__provide_declaration]))(self, var86, var101) /* provide_declaration on <self:SeparateCompiler>*/;
if (varonce102) {
var103 = varonce102;
} else {
var104 = "const int ";
var105 = 10;
var106 = string__NativeString__to_s_with_length(var104, var105);
var103 = var106;
varonce102 = var103;
}
var107 = ((val* (*)(val*))(var_m->class->vft[COLOR_separate_compiler__MPropDef__const_color]))(var_m) /* const_color on <var_m:Object(MPropDef)>*/;
if (varonce108) {
var109 = varonce108;
} else {
var110 = " = ";
var111 = 3;
var112 = string__NativeString__to_s_with_length(var110, var111);
var109 = var112;
varonce108 = var109;
}
if (varonce113) {
var114 = varonce113;
} else {
var115 = ";";
var116 = 1;
var117 = string__NativeString__to_s_with_length(var115, var116);
var114 = var117;
varonce113 = var114;
}
var118 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var118 = array_instance Array[Object] */
var119 = 5;
var120 = NEW_array__NativeArray(var119, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var120)->values[0] = (val*) var103;
((struct instance_array__NativeArray*)var120)->values[1] = (val*) var107;
((struct instance_array__NativeArray*)var120)->values[2] = (val*) var109;
var121 = BOX_kernel__Int(var_color); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var120)->values[3] = (val*) var121;
((struct instance_array__NativeArray*)var120)->values[4] = (val*) var114;
((void (*)(val*, val*, long))(var118->class->vft[COLOR_array__Array__with_native]))(var118, var120, var119) /* with_native on <var118:Array[Object]>*/;
}
var122 = ((val* (*)(val*))(var118->class->vft[COLOR_string__Object__to_s]))(var118) /* to_s on <var118:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var122) /* add on <var_v:SeparateCompilerVisitor>*/;
}
} else {
/* <var_m:Object> isa MType */
cltype124 = type_model__MType.color;
idtype125 = type_model__MType.id;
if(cltype124 >= var_m->type->table_size) {
var123 = 0;
} else {
var123 = var_m->type->type_table[cltype124] == idtype125;
}
if (var123){
var126 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(self) /* modelbuilder on <self:SeparateCompiler>*/;
var127 = ((val* (*)(val*))(var126->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var126) /* toolcontext on <var126:ModelBuilder>*/;
var128 = ((val* (*)(val*))(var127->class->vft[COLOR_separate_compiler__ToolContext__opt_inline_coloring_numbers]))(var127) /* opt_inline_coloring_numbers on <var127:ToolContext>*/;
var129 = ((val* (*)(val*))(var128->class->vft[COLOR_opts__Option__value]))(var128) /* value on <var128:OptionBool>*/;
var130 = ((struct instance_kernel__Bool*)var129)->value; /* autounbox from nullable Object to Bool */;
if (var130){
var131 = ((val* (*)(val*))(var_m->class->vft[COLOR_separate_compiler__MType__const_color]))(var_m) /* const_color on <var_m:Object(MType)>*/;
if (varonce132) {
var133 = varonce132;
} else {
var134 = "#define ";
var135 = 8;
var136 = string__NativeString__to_s_with_length(var134, var135);
var133 = var136;
varonce132 = var133;
}
var137 = ((val* (*)(val*))(var_m->class->vft[COLOR_separate_compiler__MType__const_color]))(var_m) /* const_color on <var_m:Object(MType)>*/;
if (varonce138) {
var139 = varonce138;
} else {
var140 = " ";
var141 = 1;
var142 = string__NativeString__to_s_with_length(var140, var141);
var139 = var142;
varonce138 = var139;
}
var143 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var143 = array_instance Array[Object] */
var144 = 4;
var145 = NEW_array__NativeArray(var144, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var145)->values[0] = (val*) var133;
((struct instance_array__NativeArray*)var145)->values[1] = (val*) var137;
((struct instance_array__NativeArray*)var145)->values[2] = (val*) var139;
var146 = BOX_kernel__Int(var_color); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var145)->values[3] = (val*) var146;
((void (*)(val*, val*, long))(var143->class->vft[COLOR_array__Array__with_native]))(var143, var145, var144) /* with_native on <var143:Array[Object]>*/;
}
var147 = ((val* (*)(val*))(var143->class->vft[COLOR_string__Object__to_s]))(var143) /* to_s on <var143:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__provide_declaration]))(self, var131, var147) /* provide_declaration on <self:SeparateCompiler>*/;
} else {
var148 = ((val* (*)(val*))(var_m->class->vft[COLOR_separate_compiler__MType__const_color]))(var_m) /* const_color on <var_m:Object(MType)>*/;
if (varonce149) {
var150 = varonce149;
} else {
var151 = "extern const int ";
var152 = 17;
var153 = string__NativeString__to_s_with_length(var151, var152);
var150 = var153;
varonce149 = var150;
}
var154 = ((val* (*)(val*))(var_m->class->vft[COLOR_separate_compiler__MType__const_color]))(var_m) /* const_color on <var_m:Object(MType)>*/;
if (varonce155) {
var156 = varonce155;
} else {
var157 = ";";
var158 = 1;
var159 = string__NativeString__to_s_with_length(var157, var158);
var156 = var159;
varonce155 = var156;
}
var160 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var160 = array_instance Array[Object] */
var161 = 3;
var162 = NEW_array__NativeArray(var161, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var162)->values[0] = (val*) var150;
((struct instance_array__NativeArray*)var162)->values[1] = (val*) var154;
((struct instance_array__NativeArray*)var162)->values[2] = (val*) var156;
((void (*)(val*, val*, long))(var160->class->vft[COLOR_array__Array__with_native]))(var160, var162, var161) /* with_native on <var160:Array[Object]>*/;
}
var163 = ((val* (*)(val*))(var160->class->vft[COLOR_string__Object__to_s]))(var160) /* to_s on <var160:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__provide_declaration]))(self, var148, var163) /* provide_declaration on <self:SeparateCompiler>*/;
if (varonce164) {
var165 = varonce164;
} else {
var166 = "const int ";
var167 = 10;
var168 = string__NativeString__to_s_with_length(var166, var167);
var165 = var168;
varonce164 = var165;
}
var169 = ((val* (*)(val*))(var_m->class->vft[COLOR_separate_compiler__MType__const_color]))(var_m) /* const_color on <var_m:Object(MType)>*/;
if (varonce170) {
var171 = varonce170;
} else {
var172 = " = ";
var173 = 3;
var174 = string__NativeString__to_s_with_length(var172, var173);
var171 = var174;
varonce170 = var171;
}
if (varonce175) {
var176 = varonce175;
} else {
var177 = ";";
var178 = 1;
var179 = string__NativeString__to_s_with_length(var177, var178);
var176 = var179;
varonce175 = var176;
}
var180 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var180 = array_instance Array[Object] */
var181 = 5;
var182 = NEW_array__NativeArray(var181, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var182)->values[0] = (val*) var165;
((struct instance_array__NativeArray*)var182)->values[1] = (val*) var169;
((struct instance_array__NativeArray*)var182)->values[2] = (val*) var171;
var183 = BOX_kernel__Int(var_color); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var182)->values[3] = (val*) var183;
((struct instance_array__NativeArray*)var182)->values[4] = (val*) var176;
((void (*)(val*, val*, long))(var180->class->vft[COLOR_array__Array__with_native]))(var180, var182, var181) /* with_native on <var180:Array[Object]>*/;
}
var184 = ((val* (*)(val*))(var180->class->vft[COLOR_string__Object__to_s]))(var180) /* to_s on <var180:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var184) /* add on <var_v:SeparateCompilerVisitor>*/;
}
} else {
}
}
}
var185 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__color_consts_done]))(self) /* color_consts_done on <self:SeparateCompiler>*/;
((void (*)(val*, val*))(var185->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var185, var_m) /* add on <var185:HashSet[Object]>*/;
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#compile_color_const for (self: Object, SeparateCompilerVisitor, Object, Int) */
void VIRTUAL_separate_compiler__SeparateCompiler__compile_color_const(val* self, val* p0, val* p1, long p2) {
separate_compiler__SeparateCompiler__compile_color_const(self, p0, p1, p2);
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#color_consts_done for (self: SeparateCompiler): HashSet[Object] */
val* separate_compiler__SeparateCompiler__color_consts_done(val* self) {
val* var /* : HashSet[Object] */;
val* var1 /* : HashSet[Object] */;
var1 = self->attrs[COLOR_separate_compiler__SeparateCompiler___64dcolor_consts_done].val; /* @color_consts_done on <self:SeparateCompiler> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @color_consts_done");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 235);
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
var1 = separate_compiler__SeparateCompiler__color_consts_done(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#color_consts_done= for (self: SeparateCompiler, HashSet[Object]) */
void separate_compiler__SeparateCompiler__color_consts_done_61d(val* self, val* p0) {
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dcolor_consts_done].val = p0; /* @color_consts_done on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#color_consts_done= for (self: Object, HashSet[Object]) */
void VIRTUAL_separate_compiler__SeparateCompiler__color_consts_done_61d(val* self, val* p0) {
separate_compiler__SeparateCompiler__color_consts_done_61d(self, p0);
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#do_property_coloring for (self: SeparateCompiler) */
void separate_compiler__SeparateCompiler__do_property_coloring(val* self) {
val* var /* : HashSet[MClass] */;
val* var1 /* : ModelBuilder */;
val* var2 /* : Model */;
val* var3 /* : Array[MClass] */;
val* var_mclasses /* var mclasses: HashSet[MClass] */;
val* var4 /* : MClassColorer */;
val* var5 /* : MModule */;
val* var_class_layout_builder /* var class_layout_builder: MClassColorer */;
val* var6 /* : Layout[Object] */;
val* var7 /* : MPropertyColorer[PropertyLayoutElement] */;
val* var8 /* : MModule */;
val* var_method_layout_builder /* var method_layout_builder: PropertyLayoutBuilder[PropertyLayoutElement] */;
val* var9 /* : MPropertyColorer[MAttribute] */;
val* var10 /* : MModule */;
val* var_attribute_layout_builder /* var attribute_layout_builder: PropertyLayoutBuilder[MAttribute] */;
val* var11 /* : HashMap[MClass, Set[PropertyLayoutElement]] */;
val* var_mmethods /* var mmethods: HashMap[MClass, Set[PropertyLayoutElement]] */;
val* var12 /* : HashMap[MClass, Set[MAttribute]] */;
val* var_mattributes /* var mattributes: HashMap[MClass, Set[MAttribute]] */;
val* var13 /* : Iterator[nullable Object] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_mclass /* var mclass: MClass */;
val* var16 /* : HashSet[PropertyLayoutElement] */;
val* var17 /* : HashSet[MAttribute] */;
val* var18 /* : MModule */;
val* var19 /* : Set[MProperty] */;
val* var20 /* : Iterator[nullable Object] */;
short int var21 /* : Bool */;
val* var22 /* : nullable Object */;
val* var_mprop /* var mprop: MProperty */;
short int var23 /* : Bool */;
int cltype;
int idtype;
val* var24 /* : nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : nullable Object */;
val* var30 /* : HashSet[MMethodDef] */;
val* var_all_super_calls /* var all_super_calls: HashSet[MMethodDef] */;
val* var31 /* : MModule */;
val* var32 /* : POSetElement[MModule] */;
val* var33 /* : Collection[Object] */;
val* var34 /* : Iterator[nullable Object] */;
short int var35 /* : Bool */;
val* var36 /* : nullable Object */;
val* var_mmodule /* var mmodule: MModule */;
val* var37 /* : Array[MClassDef] */;
val* var38 /* : Iterator[nullable Object] */;
short int var39 /* : Bool */;
val* var40 /* : nullable Object */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var41 /* : Array[MPropDef] */;
val* var42 /* : Iterator[nullable Object] */;
short int var43 /* : Bool */;
val* var44 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: MPropDef */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
val* var53 /* : nullable RapidTypeAnalysis */;
val* var54 /* : null */;
short int var55 /* : Bool */;
val* var56 /* : nullable RapidTypeAnalysis */;
val* var57 /* : HashSet[MMethodDef] */;
val* var_super_calls /* var super_calls: nullable Object */;
val* var58 /* : Iterator[nullable Object] */;
short int var59 /* : Bool */;
val* var60 /* : nullable Object */;
val* var_mmethoddef /* var mmethoddef: MMethodDef */;
val* var61 /* : MClassDef */;
val* var62 /* : MClass */;
val* var_mclass63 /* var mclass: MClass */;
val* var64 /* : nullable Object */;
val* var65 /* : MModule */;
val* var66 /* : POSetElement[MClass] */;
val* var67 /* : Collection[Object] */;
val* var68 /* : Iterator[nullable Object] */;
short int var69 /* : Bool */;
val* var70 /* : nullable Object */;
val* var_descendant /* var descendant: MClass */;
val* var71 /* : nullable Object */;
val* var74 /* : Layout[PropertyLayoutElement] */;
val* var75 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var76 /* : nullable Layout[PropertyLayoutElement] */;
val* var77 /* : Map[Object, Int] */;
val* var78 /* : Iterator[nullable Object] */;
short int var79 /* : Bool */;
val* var80 /* : nullable Object */;
val* var_mpropdef81 /* var mpropdef: MMethodDef */;
short int var82 /* : Bool */;
val* var84 /* : AbstractCompilerVisitor */;
long var85 /* : Int */;
long var86 /* : Int */;
long var88 /* : Int */;
val* var89 /* : Layout[PropertyLayoutElement] */;
val* var90 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var91 /* : nullable Layout[MAttribute] */;
val* var92 /* : Map[Object, Int] */;
var = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MClass);
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(self) /* modelbuilder on <self:SeparateCompiler>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_modelbuilder__ModelBuilder__model]))(var1) /* model on <var1:ModelBuilder>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_model__Model__mclasses]))(var2) /* mclasses on <var2:Model>*/;
((void (*)(val*, val*))(var->class->vft[COLOR_hash_collection__HashSet__from]))(var, var3) /* from on <var:HashSet[MClass]>*/;
var_mclasses = var;
var4 = NEW_layout_builders__MClassColorer(&type_layout_builders__MClassColorer);
var5 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:SeparateCompiler>*/;
((void (*)(val*, val*))(var4->class->vft[COLOR_layout_builders__MClassColorer__init]))(var4, var5) /* init on <var4:MClassColorer>*/;
var_class_layout_builder = var4;
var6 = ((val* (*)(val*, val*))(var_class_layout_builder->class->vft[COLOR_layout_builders__TypingLayoutBuilder__build_layout]))(var_class_layout_builder, var_mclasses) /* build_layout on <var_class_layout_builder:MClassColorer>*/;
var6;
var7 = NEW_layout_builders__MPropertyColorer(&type_layout_builders__MPropertyColorerlayout_builders__PropertyLayoutElement);
var8 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:SeparateCompiler>*/;
((void (*)(val*, val*, val*))(var7->class->vft[COLOR_layout_builders__MPropertyColorer__init]))(var7, var8, var_class_layout_builder) /* init on <var7:MPropertyColorer[PropertyLayoutElement]>*/;
var_method_layout_builder = var7;
var9 = NEW_layout_builders__MPropertyColorer(&type_layout_builders__MPropertyColorermodel__MAttribute);
var10 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:SeparateCompiler>*/;
((void (*)(val*, val*, val*))(var9->class->vft[COLOR_layout_builders__MPropertyColorer__init]))(var9, var10, var_class_layout_builder) /* init on <var9:MPropertyColorer[MAttribute]>*/;
var_attribute_layout_builder = var9;
var11 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassabstract_collection__Setlayout_builders__PropertyLayoutElement);
((void (*)(val*))(var11->class->vft[COLOR_hash_collection__HashMap__init]))(var11) /* init on <var11:HashMap[MClass, Set[PropertyLayoutElement]]>*/;
var_mmethods = var11;
var12 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MAttribute);
((void (*)(val*))(var12->class->vft[COLOR_hash_collection__HashMap__init]))(var12) /* init on <var12:HashMap[MClass, Set[MAttribute]]>*/;
var_mattributes = var12;
var13 = ((val* (*)(val*))(var_mclasses->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_mclasses) /* iterator on <var_mclasses:HashSet[MClass]>*/;
for(;;) {
var14 = ((short int (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var13) /* is_ok on <var13:Iterator[nullable Object]>*/;
if(!var14) break;
var15 = ((val* (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__item]))(var13) /* item on <var13:Iterator[nullable Object]>*/;
var_mclass = var15;
var16 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetlayout_builders__PropertyLayoutElement);
((void (*)(val*))(var16->class->vft[COLOR_hash_collection__HashSet__init]))(var16) /* init on <var16:HashSet[PropertyLayoutElement]>*/;
((void (*)(val*, val*, val*))(var_mmethods->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var_mmethods, var_mclass, var16) /* []= on <var_mmethods:HashMap[MClass, Set[PropertyLayoutElement]]>*/;
var17 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MAttribute);
((void (*)(val*))(var17->class->vft[COLOR_hash_collection__HashSet__init]))(var17) /* init on <var17:HashSet[MAttribute]>*/;
((void (*)(val*, val*, val*))(var_mattributes->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var_mattributes, var_mclass, var17) /* []= on <var_mattributes:HashMap[MClass, Set[MAttribute]]>*/;
var18 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:SeparateCompiler>*/;
var19 = ((val* (*)(val*, val*))(var18->class->vft[COLOR_abstract_compiler__MModule__properties]))(var18, var_mclass) /* properties on <var18:MModule>*/;
var20 = ((val* (*)(val*))(var19->class->vft[COLOR_abstract_collection__Collection__iterator]))(var19) /* iterator on <var19:Set[MProperty]>*/;
for(;;) {
var21 = ((short int (*)(val*))(var20->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var20) /* is_ok on <var20:Iterator[nullable Object]>*/;
if(!var21) break;
var22 = ((val* (*)(val*))(var20->class->vft[COLOR_abstract_collection__Iterator__item]))(var20) /* item on <var20:Iterator[nullable Object]>*/;
var_mprop = var22;
/* <var_mprop:MProperty> isa MMethod */
cltype = type_model__MMethod.color;
idtype = type_model__MMethod.id;
if(cltype >= var_mprop->type->table_size) {
var23 = 0;
} else {
var23 = var_mprop->type->type_table[cltype] == idtype;
}
if (var23){
var24 = ((val* (*)(val*, val*))(var_mmethods->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_mmethods, var_mclass) /* [] on <var_mmethods:HashMap[MClass, Set[PropertyLayoutElement]]>*/;
((void (*)(val*, val*))(var24->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var24, var_mprop) /* add on <var24:nullable Object(Set[PropertyLayoutElement])>*/;
} else {
/* <var_mprop:MProperty> isa MAttribute */
cltype26 = type_model__MAttribute.color;
idtype27 = type_model__MAttribute.id;
if(cltype26 >= var_mprop->type->table_size) {
var25 = 0;
} else {
var25 = var_mprop->type->type_table[cltype26] == idtype27;
}
if (var25){
var28 = ((val* (*)(val*, val*))(var_mattributes->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_mattributes, var_mclass) /* [] on <var_mattributes:HashMap[MClass, Set[MAttribute]]>*/;
((void (*)(val*, val*))(var28->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var28, var_mprop) /* add on <var28:nullable Object(Set[MAttribute])>*/;
} else {
}
}
CONTINUE_label: (void)0;
((void (*)(val*))(var20->class->vft[COLOR_abstract_collection__Iterator__next]))(var20) /* next on <var20:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
CONTINUE_label29: (void)0;
((void (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__next]))(var13) /* next on <var13:Iterator[nullable Object]>*/;
}
BREAK_label29: (void)0;
var30 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MMethodDef);
((void (*)(val*))(var30->class->vft[COLOR_hash_collection__HashSet__init]))(var30) /* init on <var30:HashSet[MMethodDef]>*/;
var_all_super_calls = var30;
var31 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:SeparateCompiler>*/;
var32 = ((val* (*)(val*))(var31->class->vft[COLOR_mmodule__MModule__in_importation]))(var31) /* in_importation on <var31:MModule>*/;
var33 = ((val* (*)(val*))(var32->class->vft[COLOR_poset__POSetElement__greaters]))(var32) /* greaters on <var32:POSetElement[MModule]>*/;
var34 = ((val* (*)(val*))(var33->class->vft[COLOR_abstract_collection__Collection__iterator]))(var33) /* iterator on <var33:Collection[Object](Collection[MModule])>*/;
for(;;) {
var35 = ((short int (*)(val*))(var34->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var34) /* is_ok on <var34:Iterator[nullable Object]>*/;
if(!var35) break;
var36 = ((val* (*)(val*))(var34->class->vft[COLOR_abstract_collection__Iterator__item]))(var34) /* item on <var34:Iterator[nullable Object]>*/;
var_mmodule = var36;
var37 = ((val* (*)(val*))(var_mmodule->class->vft[COLOR_model__MModule__mclassdefs]))(var_mmodule) /* mclassdefs on <var_mmodule:MModule>*/;
var38 = ((val* (*)(val*))(var37->class->vft[COLOR_abstract_collection__Collection__iterator]))(var37) /* iterator on <var37:Array[MClassDef]>*/;
for(;;) {
var39 = ((short int (*)(val*))(var38->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var38) /* is_ok on <var38:Iterator[nullable Object]>*/;
if(!var39) break;
var40 = ((val* (*)(val*))(var38->class->vft[COLOR_abstract_collection__Iterator__item]))(var38) /* item on <var38:Iterator[nullable Object]>*/;
var_mclassdef = var40;
var41 = ((val* (*)(val*))(var_mclassdef->class->vft[COLOR_model__MClassDef__mpropdefs]))(var_mclassdef) /* mpropdefs on <var_mclassdef:MClassDef>*/;
var42 = ((val* (*)(val*))(var41->class->vft[COLOR_abstract_collection__Collection__iterator]))(var41) /* iterator on <var41:Array[MPropDef]>*/;
for(;;) {
var43 = ((short int (*)(val*))(var42->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var42) /* is_ok on <var42:Iterator[nullable Object]>*/;
if(!var43) break;
var44 = ((val* (*)(val*))(var42->class->vft[COLOR_abstract_collection__Iterator__item]))(var42) /* item on <var42:Iterator[nullable Object]>*/;
var_mpropdef = var44;
/* <var_mpropdef:MPropDef> isa MMethodDef */
cltype46 = type_model__MMethodDef.color;
idtype47 = type_model__MMethodDef.id;
if(cltype46 >= var_mpropdef->type->table_size) {
var45 = 0;
} else {
var45 = var_mpropdef->type->type_table[cltype46] == idtype47;
}
var48 = !var45;
if (var48){
goto CONTINUE_label49;
} else {
}
var50 = ((short int (*)(val*))(var_mpropdef->class->vft[COLOR_modelize_property__MPropDef__has_supercall]))(var_mpropdef) /* has_supercall on <var_mpropdef:MPropDef(MMethodDef)>*/;
if (var50){
((void (*)(val*, val*))(var_all_super_calls->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_all_super_calls, var_mpropdef) /* add on <var_all_super_calls:HashSet[MMethodDef]>*/;
} else {
}
CONTINUE_label49: (void)0;
((void (*)(val*))(var42->class->vft[COLOR_abstract_collection__Iterator__next]))(var42) /* next on <var42:Iterator[nullable Object]>*/;
}
BREAK_label49: (void)0;
CONTINUE_label51: (void)0;
((void (*)(val*))(var38->class->vft[COLOR_abstract_collection__Iterator__next]))(var38) /* next on <var38:Iterator[nullable Object]>*/;
}
BREAK_label51: (void)0;
CONTINUE_label52: (void)0;
((void (*)(val*))(var34->class->vft[COLOR_abstract_collection__Iterator__next]))(var34) /* next on <var34:Iterator[nullable Object]>*/;
}
BREAK_label52: (void)0;
var53 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__runtime_type_analysis]))(self) /* runtime_type_analysis on <self:SeparateCompiler>*/;
var54 = NULL;
if (var53 == NULL) {
var55 = 0; /* is null */
} else {
var55 = 1; /* arg is null and recv is not */
}
if (var55){
var56 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__runtime_type_analysis]))(self) /* runtime_type_analysis on <self:SeparateCompiler>*/;
if (var56 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 293);
show_backtrace(1);
} else {
var57 = ((val* (*)(val*))(var56->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_super_sends]))(var56) /* live_super_sends on <var56:nullable RapidTypeAnalysis>*/;
}
var_super_calls = var57;
} else {
var_super_calls = var_all_super_calls;
}
var58 = ((val* (*)(val*))(var_super_calls->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_super_calls) /* iterator on <var_super_calls:nullable Object(HashSet[MMethodDef])>*/;
for(;;) {
var59 = ((short int (*)(val*))(var58->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var58) /* is_ok on <var58:Iterator[nullable Object]>*/;
if(!var59) break;
var60 = ((val* (*)(val*))(var58->class->vft[COLOR_abstract_collection__Iterator__item]))(var58) /* item on <var58:Iterator[nullable Object]>*/;
var_mmethoddef = var60;
var61 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mmethoddef) /* mclassdef on <var_mmethoddef:MMethodDef>*/;
var62 = ((val* (*)(val*))(var61->class->vft[COLOR_model__MClassDef__mclass]))(var61) /* mclass on <var61:MClassDef>*/;
var_mclass63 = var62;
var64 = ((val* (*)(val*, val*))(var_mmethods->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_mmethods, var_mclass63) /* [] on <var_mmethods:HashMap[MClass, Set[PropertyLayoutElement]]>*/;
((void (*)(val*, val*))(var64->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var64, var_mmethoddef) /* add on <var64:nullable Object(Set[PropertyLayoutElement])>*/;
var65 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:SeparateCompiler>*/;
var66 = ((val* (*)(val*, val*))(var_mclass63->class->vft[COLOR_model__MClass__in_hierarchy]))(var_mclass63, var65) /* in_hierarchy on <var_mclass63:MClass>*/;
var67 = ((val* (*)(val*))(var66->class->vft[COLOR_poset__POSetElement__smallers]))(var66) /* smallers on <var66:POSetElement[MClass]>*/;
var68 = ((val* (*)(val*))(var67->class->vft[COLOR_abstract_collection__Collection__iterator]))(var67) /* iterator on <var67:Collection[Object](Collection[MClass])>*/;
for(;;) {
var69 = ((short int (*)(val*))(var68->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var68) /* is_ok on <var68:Iterator[nullable Object]>*/;
if(!var69) break;
var70 = ((val* (*)(val*))(var68->class->vft[COLOR_abstract_collection__Iterator__item]))(var68) /* item on <var68:Iterator[nullable Object]>*/;
var_descendant = var70;
var71 = ((val* (*)(val*, val*))(var_mmethods->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_mmethods, var_descendant) /* [] on <var_mmethods:HashMap[MClass, Set[PropertyLayoutElement]]>*/;
((void (*)(val*, val*))(var71->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var71, var_mmethoddef) /* add on <var71:nullable Object(Set[PropertyLayoutElement])>*/;
CONTINUE_label72: (void)0;
((void (*)(val*))(var68->class->vft[COLOR_abstract_collection__Iterator__next]))(var68) /* next on <var68:Iterator[nullable Object]>*/;
}
BREAK_label72: (void)0;
CONTINUE_label73: (void)0;
((void (*)(val*))(var58->class->vft[COLOR_abstract_collection__Iterator__next]))(var58) /* next on <var58:Iterator[nullable Object]>*/;
}
BREAK_label73: (void)0;
var74 = ((val* (*)(val*, val*))(var_method_layout_builder->class->vft[COLOR_layout_builders__PropertyLayoutBuilder__build_layout]))(var_method_layout_builder, var_mmethods) /* build_layout on <var_method_layout_builder:PropertyLayoutBuilder[PropertyLayoutElement](MPropertyColorer[PropertyLayoutElement])>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__method_layout_61d]))(self, var74) /* method_layout= on <self:SeparateCompiler>*/;
var75 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__build_method_tables]))(self, var_mclasses, var_super_calls) /* build_method_tables on <self:SeparateCompiler>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__method_tables_61d]))(self, var75) /* method_tables= on <self:SeparateCompiler>*/;
var76 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__method_layout]))(self) /* method_layout on <self:SeparateCompiler>*/;
if (var76 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 309);
show_backtrace(1);
} else {
var77 = ((val* (*)(val*))(var76->class->vft[COLOR_layout_builders__Layout__pos]))(var76) /* pos on <var76:nullable Layout[PropertyLayoutElement]>*/;
}
((void (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__compile_color_consts]))(self, var77) /* compile_color_consts on <self:SeparateCompiler>*/;
var78 = ((val* (*)(val*))(var_all_super_calls->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_all_super_calls) /* iterator on <var_all_super_calls:HashSet[MMethodDef]>*/;
for(;;) {
var79 = ((short int (*)(val*))(var78->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var78) /* is_ok on <var78:Iterator[nullable Object]>*/;
if(!var79) break;
var80 = ((val* (*)(val*))(var78->class->vft[COLOR_abstract_collection__Iterator__item]))(var78) /* item on <var78:Iterator[nullable Object]>*/;
var_mpropdef81 = var80;
var82 = ((short int (*)(val*, val*))(var_super_calls->class->vft[COLOR_abstract_collection__Collection__has]))(var_super_calls, var_mpropdef81) /* has on <var_super_calls:nullable Object(HashSet[MMethodDef])>*/;
if (var82){
goto CONTINUE_label83;
} else {
}
var84 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_visitor]))(self) /* new_visitor on <self:SeparateCompiler>*/;
var85 = 1;
{ /* Inline kernel#Int#unary - (var85) */
var88 = -var85;
var86 = var88;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
((void (*)(val*, val*, val*, long))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__compile_color_const]))(self, var84, var_mpropdef81, var86) /* compile_color_const on <self:SeparateCompiler>*/;
CONTINUE_label83: (void)0;
((void (*)(val*))(var78->class->vft[COLOR_abstract_collection__Iterator__next]))(var78) /* next on <var78:Iterator[nullable Object]>*/;
}
BREAK_label83: (void)0;
var89 = ((val* (*)(val*, val*))(var_attribute_layout_builder->class->vft[COLOR_layout_builders__PropertyLayoutBuilder__build_layout]))(var_attribute_layout_builder, var_mattributes) /* build_layout on <var_attribute_layout_builder:PropertyLayoutBuilder[MAttribute](MPropertyColorer[MAttribute])>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__attr_layout_61d]))(self, var89) /* attr_layout= on <self:SeparateCompiler>*/;
var90 = ((val* (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__build_attr_tables]))(self, var_mclasses) /* build_attr_tables on <self:SeparateCompiler>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__attr_tables_61d]))(self, var90) /* attr_tables= on <self:SeparateCompiler>*/;
var91 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__attr_layout]))(self) /* attr_layout on <self:SeparateCompiler>*/;
if (var91 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 320);
show_backtrace(1);
} else {
var92 = ((val* (*)(val*))(var91->class->vft[COLOR_layout_builders__Layout__pos]))(var91) /* pos on <var91:nullable Layout[MAttribute]>*/;
}
((void (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__compile_color_consts]))(self, var92) /* compile_color_consts on <self:SeparateCompiler>*/;
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#do_property_coloring for (self: Object) */
void VIRTUAL_separate_compiler__SeparateCompiler__do_property_coloring(val* self) {
separate_compiler__SeparateCompiler__do_property_coloring(self);
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#build_method_tables for (self: SeparateCompiler, Set[MClass], Set[MMethodDef]): Map[MClass, Array[nullable MPropDef]] */
val* separate_compiler__SeparateCompiler__build_method_tables(val* self, val* p0, val* p1) {
val* var /* : Map[MClass, Array[nullable MPropDef]] */;
val* var_mclasses /* var mclasses: Set[MClass] */;
val* var_super_calls /* var super_calls: Set[MMethodDef] */;
val* var1 /* : nullable Layout[PropertyLayoutElement] */;
val* var_layout /* var layout: nullable Layout[PropertyLayoutElement] */;
val* var2 /* : HashMap[MClass, Array[nullable MPropDef]] */;
val* var_tables /* var tables: HashMap[MClass, Array[nullable MPropDef]] */;
val* var3 /* : Iterator[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_mclass /* var mclass: MClass */;
val* var6 /* : Array[nullable MPropDef] */;
val* var_table /* var table: Array[nullable MPropDef] */;
val* var7 /* : List[MMethodDef] */;
val* var_supercalls /* var supercalls: List[MMethodDef] */;
val* var8 /* : Array[MClass] */;
val* var_parents /* var parents: Array[MClass] */;
val* var9 /* : MModule */;
val* var10 /* : POSet[MClass] */;
short int var11 /* : Bool */;
val* var12 /* : MModule */;
val* var13 /* : POSetElement[MClass] */;
val* var14 /* : Collection[Object] */;
val* var15 /* : Array[nullable Object] */;
val* var16 /* : MModule */;
val* var17 /* : Iterator[nullable Object] */;
short int var18 /* : Bool */;
val* var19 /* : nullable Object */;
val* var_parent /* var parent: MClass */;
short int var20 /* : Bool */;
val* var21 /* : MModule */;
val* var22 /* : Set[MProperty] */;
val* var23 /* : Iterator[nullable Object] */;
short int var24 /* : Bool */;
val* var25 /* : nullable Object */;
val* var_mproperty /* var mproperty: MProperty */;
short int var26 /* : Bool */;
int cltype;
int idtype;
short int var27 /* : Bool */;
val* var29 /* : Map[Object, Int] */;
val* var30 /* : nullable Object */;
long var31 /* : Int */;
long var_color /* var color: Int */;
long var32 /* : Int */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name;
short int var38 /* : Bool */;
val* var39 /* : Range[Int] */;
long var40 /* : Int */;
val* var41 /* : Discrete */;
val* var42 /* : Discrete */;
val* var43 /* : Iterator[nullable Object] */;
short int var44 /* : Bool */;
val* var45 /* : nullable Object */;
long var_i /* var i: Int */;
long var46 /* : Int */;
val* var47 /* : null */;
val* var49 /* : Array[MPropDef] */;
val* var50 /* : Iterator[nullable Object] */;
short int var51 /* : Bool */;
val* var52 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var53 /* : MClassDef */;
val* var54 /* : MClass */;
short int var55 /* : Bool */;
val* var57 /* : Iterator[nullable Object] */;
short int var58 /* : Bool */;
val* var59 /* : nullable Object */;
val* var_mmethoddef /* var mmethoddef: MMethodDef */;
val* var60 /* : Array[MClassDef] */;
val* var61 /* : Iterator[nullable Object] */;
short int var62 /* : Bool */;
val* var63 /* : nullable Object */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var64 /* : Array[MPropDef] */;
short int var65 /* : Bool */;
val* var68 /* : MModule */;
val* var69 /* : Set[MProperty] */;
val* var70 /* : Iterator[nullable Object] */;
short int var71 /* : Bool */;
val* var72 /* : nullable Object */;
val* var_mproperty73 /* var mproperty: MProperty */;
short int var74 /* : Bool */;
int cltype75;
int idtype76;
short int var77 /* : Bool */;
val* var79 /* : Map[Object, Int] */;
val* var80 /* : nullable Object */;
long var81 /* : Int */;
long var_color82 /* var color: Int */;
long var83 /* : Int */;
short int var84 /* : Bool */;
short int var86 /* : Bool */;
int cltype87;
int idtype88;
const char* var_class_name89;
short int var90 /* : Bool */;
val* var91 /* : Range[Int] */;
long var92 /* : Int */;
val* var93 /* : Discrete */;
val* var94 /* : Discrete */;
val* var95 /* : Iterator[nullable Object] */;
short int var96 /* : Bool */;
val* var97 /* : nullable Object */;
long var_i98 /* var i: Int */;
long var99 /* : Int */;
val* var100 /* : null */;
val* var102 /* : Array[MPropDef] */;
val* var103 /* : Iterator[nullable Object] */;
short int var104 /* : Bool */;
val* var105 /* : nullable Object */;
val* var_mpropdef106 /* var mpropdef: MMethodDef */;
val* var107 /* : MClassDef */;
val* var108 /* : MClass */;
short int var109 /* : Bool */;
val* var111 /* : Iterator[nullable Object] */;
short int var112 /* : Bool */;
val* var113 /* : nullable Object */;
val* var_mmethoddef114 /* var mmethoddef: MMethodDef */;
val* var115 /* : Array[MClassDef] */;
val* var116 /* : Iterator[nullable Object] */;
short int var117 /* : Bool */;
val* var118 /* : nullable Object */;
val* var_mclassdef119 /* var mclassdef: MClassDef */;
val* var120 /* : Array[MPropDef] */;
short int var121 /* : Bool */;
val* var124 /* : Iterator[nullable Object] */;
short int var125 /* : Bool */;
val* var126 /* : nullable Object */;
val* var_supercall /* var supercall: MMethodDef */;
val* var127 /* : Map[Object, Int] */;
val* var128 /* : nullable Object */;
long var129 /* : Int */;
long var_color130 /* var color: Int */;
long var131 /* : Int */;
short int var132 /* : Bool */;
short int var134 /* : Bool */;
int cltype135;
int idtype136;
const char* var_class_name137;
short int var138 /* : Bool */;
val* var139 /* : Range[Int] */;
long var140 /* : Int */;
val* var141 /* : Discrete */;
val* var142 /* : Discrete */;
val* var143 /* : Iterator[nullable Object] */;
short int var144 /* : Bool */;
val* var145 /* : nullable Object */;
long var_i146 /* var i: Int */;
long var147 /* : Int */;
val* var148 /* : null */;
val* var150 /* : MModule */;
val* var151 /* : MClassDef */;
val* var152 /* : MClassType */;
val* var153 /* : MPropDef */;
val* var_mmethoddef154 /* var mmethoddef: MMethodDef */;
var_mclasses = p0;
var_super_calls = p1;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__method_layout]))(self) /* method_layout on <self:SeparateCompiler>*/;
var_layout = var1;
var2 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassarray__Arraynullable_model__MPropDef);
((void (*)(val*))(var2->class->vft[COLOR_hash_collection__HashMap__init]))(var2) /* init on <var2:HashMap[MClass, Array[nullable MPropDef]]>*/;
var_tables = var2;
var3 = ((val* (*)(val*))(var_mclasses->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_mclasses) /* iterator on <var_mclasses:Set[MClass]>*/;
for(;;) {
var4 = ((short int (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var3) /* is_ok on <var3:Iterator[nullable Object]>*/;
if(!var4) break;
var5 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__item]))(var3) /* item on <var3:Iterator[nullable Object]>*/;
var_mclass = var5;
var6 = NEW_array__Array(&type_array__Arraynullable_model__MPropDef);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[nullable MPropDef]>*/;
var_table = var6;
var7 = NEW_list__List(&type_list__Listmodel__MMethodDef);
((void (*)(val*))(var7->class->vft[COLOR_list__List__init]))(var7) /* init on <var7:List[MMethodDef]>*/;
var_supercalls = var7;
var8 = NEW_array__Array(&type_array__Arraymodel__MClass);
((void (*)(val*))(var8->class->vft[COLOR_array__Array__init]))(var8) /* init on <var8:Array[MClass]>*/;
var_parents = var8;
var9 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:SeparateCompiler>*/;
var10 = ((val* (*)(val*))(var9->class->vft[COLOR_model__MModule__flatten_mclass_hierarchy]))(var9) /* flatten_mclass_hierarchy on <var9:MModule>*/;
var11 = ((short int (*)(val*, val*))(var10->class->vft[COLOR_abstract_collection__Collection__has]))(var10, var_mclass) /* has on <var10:POSet[MClass]>*/;
if (var11){
var12 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:SeparateCompiler>*/;
var13 = ((val* (*)(val*, val*))(var_mclass->class->vft[COLOR_model__MClass__in_hierarchy]))(var_mclass, var12) /* in_hierarchy on <var_mclass:MClass>*/;
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_poset__POSetElement__greaters]))(var13) /* greaters on <var13:POSetElement[MClass]>*/;
var15 = ((val* (*)(val*))(var14->class->vft[COLOR_array__Collection__to_a]))(var14) /* to_a on <var14:Collection[Object](Collection[MClass])>*/;
var_parents = var15;
var16 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:SeparateCompiler>*/;
((void (*)(val*, val*))(var16->class->vft[COLOR_model__MModule__linearize_mclasses]))(var16, var_parents) /* linearize_mclasses on <var16:MModule>*/;
} else {
}
var17 = ((val* (*)(val*))(var_parents->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_parents) /* iterator on <var_parents:Array[MClass]>*/;
for(;;) {
var18 = ((short int (*)(val*))(var17->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var17) /* is_ok on <var17:Iterator[nullable Object]>*/;
if(!var18) break;
var19 = ((val* (*)(val*))(var17->class->vft[COLOR_abstract_collection__Iterator__item]))(var17) /* item on <var17:Iterator[nullable Object]>*/;
var_parent = var19;
var20 = ((short int (*)(val*, val*))(var_parent->class->vft[COLOR_kernel__Object___61d_61d]))(var_parent, var_mclass) /* == on <var_parent:MClass>*/;
if (var20){
goto CONTINUE_label;
} else {
}
var21 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:SeparateCompiler>*/;
var22 = ((val* (*)(val*, val*))(var21->class->vft[COLOR_abstract_compiler__MModule__properties]))(var21, var_parent) /* properties on <var21:MModule>*/;
var23 = ((val* (*)(val*))(var22->class->vft[COLOR_abstract_collection__Collection__iterator]))(var22) /* iterator on <var22:Set[MProperty]>*/;
for(;;) {
var24 = ((short int (*)(val*))(var23->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var23) /* is_ok on <var23:Iterator[nullable Object]>*/;
if(!var24) break;
var25 = ((val* (*)(val*))(var23->class->vft[COLOR_abstract_collection__Iterator__item]))(var23) /* item on <var23:Iterator[nullable Object]>*/;
var_mproperty = var25;
/* <var_mproperty:MProperty> isa MMethod */
cltype = type_model__MMethod.color;
idtype = type_model__MMethod.id;
if(cltype >= var_mproperty->type->table_size) {
var26 = 0;
} else {
var26 = var_mproperty->type->type_table[cltype] == idtype;
}
var27 = !var26;
if (var27){
goto CONTINUE_label28;
} else {
}
if (var_layout == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 341);
show_backtrace(1);
} else {
var29 = ((val* (*)(val*))(var_layout->class->vft[COLOR_layout_builders__Layout__pos]))(var_layout) /* pos on <var_layout:nullable Layout[PropertyLayoutElement]>*/;
}
var30 = ((val* (*)(val*, val*))(var29->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var29, var_mproperty) /* [] on <var29:Map[Object, Int](Map[PropertyLayoutElement, Int])>*/;
var31 = ((struct instance_kernel__Int*)var30)->value; /* autounbox from nullable Object to Int */;
var_color = var31;
var32 = ((long (*)(val*))(var_table->class->vft[COLOR_abstract_collection__Collection__length]))(var_table) /* length on <var_table:Array[nullable MPropDef]>*/;
{ /* Inline kernel#Int#<= (var32,var_color) */
/* Covariant cast for argument 0 (i) <var_color:Int> isa OTHER */
/* <var_color:Int> isa OTHER */
var35 = 1; /* easy <var_color:Int> isa OTHER*/
if (!var35) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 264);
show_backtrace(1);
}
var38 = var32 <= var_color;
var33 = var38;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
if (var33){
var39 = NEW_range__Range(&type_range__Rangekernel__Int);
var40 = ((long (*)(val*))(var_table->class->vft[COLOR_abstract_collection__Collection__length]))(var_table) /* length on <var_table:Array[nullable MPropDef]>*/;
var41 = BOX_kernel__Int(var40); /* autobox from Int to Discrete */
var42 = BOX_kernel__Int(var_color); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var39->class->vft[COLOR_range__Range__without_last]))(var39, var41, var42) /* without_last on <var39:Range[Int]>*/;
var43 = ((val* (*)(val*))(var39->class->vft[COLOR_abstract_collection__Collection__iterator]))(var39) /* iterator on <var39:Range[Int]>*/;
for(;;) {
var44 = ((short int (*)(val*))(var43->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var43) /* is_ok on <var43:Iterator[nullable Object]>*/;
if(!var44) break;
var45 = ((val* (*)(val*))(var43->class->vft[COLOR_abstract_collection__Iterator__item]))(var43) /* item on <var43:Iterator[nullable Object]>*/;
var46 = ((struct instance_kernel__Int*)var45)->value; /* autounbox from nullable Object to Int */;
var_i = var46;
var47 = NULL;
((void (*)(val*, long, val*))(var_table->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var_table, var_i, var47) /* []= on <var_table:Array[nullable MPropDef]>*/;
CONTINUE_label48: (void)0;
((void (*)(val*))(var43->class->vft[COLOR_abstract_collection__Iterator__next]))(var43) /* next on <var43:Iterator[nullable Object]>*/;
}
BREAK_label48: (void)0;
} else {
}
var49 = ((val* (*)(val*))(var_mproperty->class->vft[COLOR_model__MProperty__mpropdefs]))(var_mproperty) /* mpropdefs on <var_mproperty:MProperty(MMethod)>*/;
var50 = ((val* (*)(val*))(var49->class->vft[COLOR_abstract_collection__Collection__iterator]))(var49) /* iterator on <var49:Array[MPropDef](Array[MMethodDef])>*/;
for(;;) {
var51 = ((short int (*)(val*))(var50->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var50) /* is_ok on <var50:Iterator[nullable Object]>*/;
if(!var51) break;
var52 = ((val* (*)(val*))(var50->class->vft[COLOR_abstract_collection__Iterator__item]))(var50) /* item on <var50:Iterator[nullable Object]>*/;
var_mpropdef = var52;
var53 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mpropdef) /* mclassdef on <var_mpropdef:MMethodDef>*/;
var54 = ((val* (*)(val*))(var53->class->vft[COLOR_model__MClassDef__mclass]))(var53) /* mclass on <var53:MClassDef>*/;
var55 = ((short int (*)(val*, val*))(var54->class->vft[COLOR_kernel__Object___61d_61d]))(var54, var_parent) /* == on <var54:MClass>*/;
if (var55){
((void (*)(val*, long, val*))(var_table->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var_table, var_color, var_mpropdef) /* []= on <var_table:Array[nullable MPropDef]>*/;
} else {
}
CONTINUE_label56: (void)0;
((void (*)(val*))(var50->class->vft[COLOR_abstract_collection__Iterator__next]))(var50) /* next on <var50:Iterator[nullable Object]>*/;
}
BREAK_label56: (void)0;
CONTINUE_label28: (void)0;
((void (*)(val*))(var23->class->vft[COLOR_abstract_collection__Iterator__next]))(var23) /* next on <var23:Iterator[nullable Object]>*/;
}
BREAK_label28: (void)0;
var57 = ((val* (*)(val*))(var_super_calls->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_super_calls) /* iterator on <var_super_calls:Set[MMethodDef]>*/;
for(;;) {
var58 = ((short int (*)(val*))(var57->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var57) /* is_ok on <var57:Iterator[nullable Object]>*/;
if(!var58) break;
var59 = ((val* (*)(val*))(var57->class->vft[COLOR_abstract_collection__Iterator__item]))(var57) /* item on <var57:Iterator[nullable Object]>*/;
var_mmethoddef = var59;
var60 = ((val* (*)(val*))(var_parent->class->vft[COLOR_model__MClass__mclassdefs]))(var_parent) /* mclassdefs on <var_parent:MClass>*/;
var61 = ((val* (*)(val*))(var60->class->vft[COLOR_abstract_collection__Collection__iterator]))(var60) /* iterator on <var60:Array[MClassDef]>*/;
for(;;) {
var62 = ((short int (*)(val*))(var61->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var61) /* is_ok on <var61:Iterator[nullable Object]>*/;
if(!var62) break;
var63 = ((val* (*)(val*))(var61->class->vft[COLOR_abstract_collection__Iterator__item]))(var61) /* item on <var61:Iterator[nullable Object]>*/;
var_mclassdef = var63;
var64 = ((val* (*)(val*))(var_mclassdef->class->vft[COLOR_model__MClassDef__mpropdefs]))(var_mclassdef) /* mpropdefs on <var_mclassdef:MClassDef>*/;
var65 = ((short int (*)(val*, val*))(var64->class->vft[COLOR_abstract_collection__Collection__has]))(var64, var_mmethoddef) /* has on <var64:Array[MPropDef]>*/;
if (var65){
((void (*)(val*, val*))(var_supercalls->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_supercalls, var_mmethoddef) /* add on <var_supercalls:List[MMethodDef]>*/;
} else {
}
CONTINUE_label66: (void)0;
((void (*)(val*))(var61->class->vft[COLOR_abstract_collection__Iterator__next]))(var61) /* next on <var61:Iterator[nullable Object]>*/;
}
BREAK_label66: (void)0;
CONTINUE_label67: (void)0;
((void (*)(val*))(var57->class->vft[COLOR_abstract_collection__Iterator__next]))(var57) /* next on <var57:Iterator[nullable Object]>*/;
}
BREAK_label67: (void)0;
CONTINUE_label: (void)0;
((void (*)(val*))(var17->class->vft[COLOR_abstract_collection__Iterator__next]))(var17) /* next on <var17:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var68 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:SeparateCompiler>*/;
var69 = ((val* (*)(val*, val*))(var68->class->vft[COLOR_abstract_compiler__MModule__properties]))(var68, var_mclass) /* properties on <var68:MModule>*/;
var70 = ((val* (*)(val*))(var69->class->vft[COLOR_abstract_collection__Collection__iterator]))(var69) /* iterator on <var69:Set[MProperty]>*/;
for(;;) {
var71 = ((short int (*)(val*))(var70->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var70) /* is_ok on <var70:Iterator[nullable Object]>*/;
if(!var71) break;
var72 = ((val* (*)(val*))(var70->class->vft[COLOR_abstract_collection__Iterator__item]))(var70) /* item on <var70:Iterator[nullable Object]>*/;
var_mproperty73 = var72;
/* <var_mproperty73:MProperty> isa MMethod */
cltype75 = type_model__MMethod.color;
idtype76 = type_model__MMethod.id;
if(cltype75 >= var_mproperty73->type->table_size) {
var74 = 0;
} else {
var74 = var_mproperty73->type->type_table[cltype75] == idtype76;
}
var77 = !var74;
if (var77){
goto CONTINUE_label78;
} else {
}
if (var_layout == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 367);
show_backtrace(1);
} else {
var79 = ((val* (*)(val*))(var_layout->class->vft[COLOR_layout_builders__Layout__pos]))(var_layout) /* pos on <var_layout:nullable Layout[PropertyLayoutElement]>*/;
}
var80 = ((val* (*)(val*, val*))(var79->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var79, var_mproperty73) /* [] on <var79:Map[Object, Int](Map[PropertyLayoutElement, Int])>*/;
var81 = ((struct instance_kernel__Int*)var80)->value; /* autounbox from nullable Object to Int */;
var_color82 = var81;
var83 = ((long (*)(val*))(var_table->class->vft[COLOR_abstract_collection__Collection__length]))(var_table) /* length on <var_table:Array[nullable MPropDef]>*/;
{ /* Inline kernel#Int#<= (var83,var_color82) */
/* Covariant cast for argument 0 (i) <var_color82:Int> isa OTHER */
/* <var_color82:Int> isa OTHER */
var86 = 1; /* easy <var_color82:Int> isa OTHER*/
if (!var86) {
var_class_name89 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name89);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 264);
show_backtrace(1);
}
var90 = var83 <= var_color82;
var84 = var90;
goto RET_LABEL85;
RET_LABEL85:(void)0;
}
if (var84){
var91 = NEW_range__Range(&type_range__Rangekernel__Int);
var92 = ((long (*)(val*))(var_table->class->vft[COLOR_abstract_collection__Collection__length]))(var_table) /* length on <var_table:Array[nullable MPropDef]>*/;
var93 = BOX_kernel__Int(var92); /* autobox from Int to Discrete */
var94 = BOX_kernel__Int(var_color82); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var91->class->vft[COLOR_range__Range__without_last]))(var91, var93, var94) /* without_last on <var91:Range[Int]>*/;
var95 = ((val* (*)(val*))(var91->class->vft[COLOR_abstract_collection__Collection__iterator]))(var91) /* iterator on <var91:Range[Int]>*/;
for(;;) {
var96 = ((short int (*)(val*))(var95->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var95) /* is_ok on <var95:Iterator[nullable Object]>*/;
if(!var96) break;
var97 = ((val* (*)(val*))(var95->class->vft[COLOR_abstract_collection__Iterator__item]))(var95) /* item on <var95:Iterator[nullable Object]>*/;
var99 = ((struct instance_kernel__Int*)var97)->value; /* autounbox from nullable Object to Int */;
var_i98 = var99;
var100 = NULL;
((void (*)(val*, long, val*))(var_table->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var_table, var_i98, var100) /* []= on <var_table:Array[nullable MPropDef]>*/;
CONTINUE_label101: (void)0;
((void (*)(val*))(var95->class->vft[COLOR_abstract_collection__Iterator__next]))(var95) /* next on <var95:Iterator[nullable Object]>*/;
}
BREAK_label101: (void)0;
} else {
}
var102 = ((val* (*)(val*))(var_mproperty73->class->vft[COLOR_model__MProperty__mpropdefs]))(var_mproperty73) /* mpropdefs on <var_mproperty73:MProperty(MMethod)>*/;
var103 = ((val* (*)(val*))(var102->class->vft[COLOR_abstract_collection__Collection__iterator]))(var102) /* iterator on <var102:Array[MPropDef](Array[MMethodDef])>*/;
for(;;) {
var104 = ((short int (*)(val*))(var103->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var103) /* is_ok on <var103:Iterator[nullable Object]>*/;
if(!var104) break;
var105 = ((val* (*)(val*))(var103->class->vft[COLOR_abstract_collection__Iterator__item]))(var103) /* item on <var103:Iterator[nullable Object]>*/;
var_mpropdef106 = var105;
var107 = ((val* (*)(val*))(var_mpropdef106->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mpropdef106) /* mclassdef on <var_mpropdef106:MMethodDef>*/;
var108 = ((val* (*)(val*))(var107->class->vft[COLOR_model__MClassDef__mclass]))(var107) /* mclass on <var107:MClassDef>*/;
var109 = ((short int (*)(val*, val*))(var108->class->vft[COLOR_kernel__Object___61d_61d]))(var108, var_mclass) /* == on <var108:MClass>*/;
if (var109){
((void (*)(val*, long, val*))(var_table->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var_table, var_color82, var_mpropdef106) /* []= on <var_table:Array[nullable MPropDef]>*/;
} else {
}
CONTINUE_label110: (void)0;
((void (*)(val*))(var103->class->vft[COLOR_abstract_collection__Iterator__next]))(var103) /* next on <var103:Iterator[nullable Object]>*/;
}
BREAK_label110: (void)0;
CONTINUE_label78: (void)0;
((void (*)(val*))(var70->class->vft[COLOR_abstract_collection__Iterator__next]))(var70) /* next on <var70:Iterator[nullable Object]>*/;
}
BREAK_label78: (void)0;
var111 = ((val* (*)(val*))(var_super_calls->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_super_calls) /* iterator on <var_super_calls:Set[MMethodDef]>*/;
for(;;) {
var112 = ((short int (*)(val*))(var111->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var111) /* is_ok on <var111:Iterator[nullable Object]>*/;
if(!var112) break;
var113 = ((val* (*)(val*))(var111->class->vft[COLOR_abstract_collection__Iterator__item]))(var111) /* item on <var111:Iterator[nullable Object]>*/;
var_mmethoddef114 = var113;
var115 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__mclassdefs]))(var_mclass) /* mclassdefs on <var_mclass:MClass>*/;
var116 = ((val* (*)(val*))(var115->class->vft[COLOR_abstract_collection__Collection__iterator]))(var115) /* iterator on <var115:Array[MClassDef]>*/;
for(;;) {
var117 = ((short int (*)(val*))(var116->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var116) /* is_ok on <var116:Iterator[nullable Object]>*/;
if(!var117) break;
var118 = ((val* (*)(val*))(var116->class->vft[COLOR_abstract_collection__Iterator__item]))(var116) /* item on <var116:Iterator[nullable Object]>*/;
var_mclassdef119 = var118;
var120 = ((val* (*)(val*))(var_mclassdef119->class->vft[COLOR_model__MClassDef__mpropdefs]))(var_mclassdef119) /* mpropdefs on <var_mclassdef119:MClassDef>*/;
var121 = ((short int (*)(val*, val*))(var120->class->vft[COLOR_abstract_collection__Collection__has]))(var120, var_mmethoddef114) /* has on <var120:Array[MPropDef]>*/;
if (var121){
((void (*)(val*, val*))(var_supercalls->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_supercalls, var_mmethoddef114) /* add on <var_supercalls:List[MMethodDef]>*/;
} else {
}
CONTINUE_label122: (void)0;
((void (*)(val*))(var116->class->vft[COLOR_abstract_collection__Iterator__next]))(var116) /* next on <var116:Iterator[nullable Object]>*/;
}
BREAK_label122: (void)0;
CONTINUE_label123: (void)0;
((void (*)(val*))(var111->class->vft[COLOR_abstract_collection__Iterator__next]))(var111) /* next on <var111:Iterator[nullable Object]>*/;
}
BREAK_label123: (void)0;
var124 = ((val* (*)(val*))(var_supercalls->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_supercalls) /* iterator on <var_supercalls:List[MMethodDef]>*/;
for(;;) {
var125 = ((short int (*)(val*))(var124->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var124) /* is_ok on <var124:Iterator[nullable Object]>*/;
if(!var125) break;
var126 = ((val* (*)(val*))(var124->class->vft[COLOR_abstract_collection__Iterator__item]))(var124) /* item on <var124:Iterator[nullable Object]>*/;
var_supercall = var126;
if (var_layout == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 390);
show_backtrace(1);
} else {
var127 = ((val* (*)(val*))(var_layout->class->vft[COLOR_layout_builders__Layout__pos]))(var_layout) /* pos on <var_layout:nullable Layout[PropertyLayoutElement]>*/;
}
var128 = ((val* (*)(val*, val*))(var127->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var127, var_supercall) /* [] on <var127:Map[Object, Int](Map[PropertyLayoutElement, Int])>*/;
var129 = ((struct instance_kernel__Int*)var128)->value; /* autounbox from nullable Object to Int */;
var_color130 = var129;
var131 = ((long (*)(val*))(var_table->class->vft[COLOR_abstract_collection__Collection__length]))(var_table) /* length on <var_table:Array[nullable MPropDef]>*/;
{ /* Inline kernel#Int#<= (var131,var_color130) */
/* Covariant cast for argument 0 (i) <var_color130:Int> isa OTHER */
/* <var_color130:Int> isa OTHER */
var134 = 1; /* easy <var_color130:Int> isa OTHER*/
if (!var134) {
var_class_name137 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name137);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 264);
show_backtrace(1);
}
var138 = var131 <= var_color130;
var132 = var138;
goto RET_LABEL133;
RET_LABEL133:(void)0;
}
if (var132){
var139 = NEW_range__Range(&type_range__Rangekernel__Int);
var140 = ((long (*)(val*))(var_table->class->vft[COLOR_abstract_collection__Collection__length]))(var_table) /* length on <var_table:Array[nullable MPropDef]>*/;
var141 = BOX_kernel__Int(var140); /* autobox from Int to Discrete */
var142 = BOX_kernel__Int(var_color130); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var139->class->vft[COLOR_range__Range__without_last]))(var139, var141, var142) /* without_last on <var139:Range[Int]>*/;
var143 = ((val* (*)(val*))(var139->class->vft[COLOR_abstract_collection__Collection__iterator]))(var139) /* iterator on <var139:Range[Int]>*/;
for(;;) {
var144 = ((short int (*)(val*))(var143->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var143) /* is_ok on <var143:Iterator[nullable Object]>*/;
if(!var144) break;
var145 = ((val* (*)(val*))(var143->class->vft[COLOR_abstract_collection__Iterator__item]))(var143) /* item on <var143:Iterator[nullable Object]>*/;
var147 = ((struct instance_kernel__Int*)var145)->value; /* autounbox from nullable Object to Int */;
var_i146 = var147;
var148 = NULL;
((void (*)(val*, long, val*))(var_table->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var_table, var_i146, var148) /* []= on <var_table:Array[nullable MPropDef]>*/;
CONTINUE_label149: (void)0;
((void (*)(val*))(var143->class->vft[COLOR_abstract_collection__Iterator__next]))(var143) /* next on <var143:Iterator[nullable Object]>*/;
}
BREAK_label149: (void)0;
} else {
}
var150 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:SeparateCompiler>*/;
var151 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__intro]))(var_mclass) /* intro on <var_mclass:MClass>*/;
var152 = ((val* (*)(val*))(var151->class->vft[COLOR_model__MClassDef__bound_mtype]))(var151) /* bound_mtype on <var151:MClassDef>*/;
var153 = ((val* (*)(val*, val*, val*))(var_supercall->class->vft[COLOR_model__MPropDef__lookup_next_definition]))(var_supercall, var150, var152) /* lookup_next_definition on <var_supercall:MMethodDef>*/;
var_mmethoddef154 = var153;
((void (*)(val*, long, val*))(var_table->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var_table, var_color130, var_mmethoddef154) /* []= on <var_table:Array[nullable MPropDef]>*/;
CONTINUE_label155: (void)0;
((void (*)(val*))(var124->class->vft[COLOR_abstract_collection__Iterator__next]))(var124) /* next on <var124:Iterator[nullable Object]>*/;
}
BREAK_label155: (void)0;
((void (*)(val*, val*, val*))(var_tables->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var_tables, var_mclass, var_table) /* []= on <var_tables:HashMap[MClass, Array[nullable MPropDef]]>*/;
CONTINUE_label156: (void)0;
((void (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__next]))(var3) /* next on <var3:Iterator[nullable Object]>*/;
}
BREAK_label156: (void)0;
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
val* var1 /* : nullable Layout[MAttribute] */;
val* var_layout /* var layout: nullable Layout[MAttribute] */;
val* var2 /* : HashMap[MClass, Array[nullable MPropDef]] */;
val* var_tables /* var tables: HashMap[MClass, Array[nullable MPropDef]] */;
val* var3 /* : Iterator[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_mclass /* var mclass: MClass */;
val* var6 /* : Array[nullable MPropDef] */;
val* var_table /* var table: Array[nullable MPropDef] */;
val* var7 /* : Array[MClass] */;
val* var_parents /* var parents: Array[MClass] */;
val* var8 /* : MModule */;
val* var9 /* : POSet[MClass] */;
short int var10 /* : Bool */;
val* var11 /* : MModule */;
val* var12 /* : POSetElement[MClass] */;
val* var13 /* : Collection[Object] */;
val* var14 /* : Array[nullable Object] */;
val* var15 /* : MModule */;
val* var16 /* : Iterator[nullable Object] */;
short int var17 /* : Bool */;
val* var18 /* : nullable Object */;
val* var_parent /* var parent: MClass */;
short int var19 /* : Bool */;
val* var20 /* : MModule */;
val* var21 /* : Set[MProperty] */;
val* var22 /* : Iterator[nullable Object] */;
short int var23 /* : Bool */;
val* var24 /* : nullable Object */;
val* var_mproperty /* var mproperty: MProperty */;
short int var25 /* : Bool */;
int cltype;
int idtype;
short int var26 /* : Bool */;
val* var28 /* : Map[Object, Int] */;
val* var29 /* : nullable Object */;
long var30 /* : Int */;
long var_color /* var color: Int */;
long var31 /* : Int */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name;
short int var37 /* : Bool */;
val* var38 /* : Range[Int] */;
long var39 /* : Int */;
val* var40 /* : Discrete */;
val* var41 /* : Discrete */;
val* var42 /* : Iterator[nullable Object] */;
short int var43 /* : Bool */;
val* var44 /* : nullable Object */;
long var_i /* var i: Int */;
long var45 /* : Int */;
val* var46 /* : null */;
val* var48 /* : Array[MPropDef] */;
val* var49 /* : Iterator[nullable Object] */;
short int var50 /* : Bool */;
val* var51 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: MAttributeDef */;
val* var52 /* : MClassDef */;
val* var53 /* : MClass */;
short int var54 /* : Bool */;
val* var56 /* : MModule */;
val* var57 /* : Set[MProperty] */;
val* var58 /* : Iterator[nullable Object] */;
short int var59 /* : Bool */;
val* var60 /* : nullable Object */;
val* var_mproperty61 /* var mproperty: MProperty */;
short int var62 /* : Bool */;
int cltype63;
int idtype64;
short int var65 /* : Bool */;
val* var67 /* : Map[Object, Int] */;
val* var68 /* : nullable Object */;
long var69 /* : Int */;
long var_color70 /* var color: Int */;
long var71 /* : Int */;
short int var72 /* : Bool */;
short int var74 /* : Bool */;
int cltype75;
int idtype76;
const char* var_class_name77;
short int var78 /* : Bool */;
val* var79 /* : Range[Int] */;
long var80 /* : Int */;
val* var81 /* : Discrete */;
val* var82 /* : Discrete */;
val* var83 /* : Iterator[nullable Object] */;
short int var84 /* : Bool */;
val* var85 /* : nullable Object */;
long var_i86 /* var i: Int */;
long var87 /* : Int */;
val* var88 /* : null */;
val* var90 /* : Array[MPropDef] */;
val* var91 /* : Iterator[nullable Object] */;
short int var92 /* : Bool */;
val* var93 /* : nullable Object */;
val* var_mpropdef94 /* var mpropdef: MAttributeDef */;
val* var95 /* : MClassDef */;
val* var96 /* : MClass */;
short int var97 /* : Bool */;
var_mclasses = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__attr_layout]))(self) /* attr_layout on <self:SeparateCompiler>*/;
var_layout = var1;
var2 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassarray__Arraynullable_model__MPropDef);
((void (*)(val*))(var2->class->vft[COLOR_hash_collection__HashMap__init]))(var2) /* init on <var2:HashMap[MClass, Array[nullable MPropDef]]>*/;
var_tables = var2;
var3 = ((val* (*)(val*))(var_mclasses->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_mclasses) /* iterator on <var_mclasses:Set[MClass]>*/;
for(;;) {
var4 = ((short int (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var3) /* is_ok on <var3:Iterator[nullable Object]>*/;
if(!var4) break;
var5 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__item]))(var3) /* item on <var3:Iterator[nullable Object]>*/;
var_mclass = var5;
var6 = NEW_array__Array(&type_array__Arraynullable_model__MPropDef);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[nullable MPropDef]>*/;
var_table = var6;
var7 = NEW_array__Array(&type_array__Arraymodel__MClass);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[MClass]>*/;
var_parents = var7;
var8 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:SeparateCompiler>*/;
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_model__MModule__flatten_mclass_hierarchy]))(var8) /* flatten_mclass_hierarchy on <var8:MModule>*/;
var10 = ((short int (*)(val*, val*))(var9->class->vft[COLOR_abstract_collection__Collection__has]))(var9, var_mclass) /* has on <var9:POSet[MClass]>*/;
if (var10){
var11 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:SeparateCompiler>*/;
var12 = ((val* (*)(val*, val*))(var_mclass->class->vft[COLOR_model__MClass__in_hierarchy]))(var_mclass, var11) /* in_hierarchy on <var_mclass:MClass>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_poset__POSetElement__greaters]))(var12) /* greaters on <var12:POSetElement[MClass]>*/;
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_array__Collection__to_a]))(var13) /* to_a on <var13:Collection[Object](Collection[MClass])>*/;
var_parents = var14;
var15 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:SeparateCompiler>*/;
((void (*)(val*, val*))(var15->class->vft[COLOR_model__MModule__linearize_mclasses]))(var15, var_parents) /* linearize_mclasses on <var15:MModule>*/;
} else {
}
var16 = ((val* (*)(val*))(var_parents->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_parents) /* iterator on <var_parents:Array[MClass]>*/;
for(;;) {
var17 = ((short int (*)(val*))(var16->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var16) /* is_ok on <var16:Iterator[nullable Object]>*/;
if(!var17) break;
var18 = ((val* (*)(val*))(var16->class->vft[COLOR_abstract_collection__Iterator__item]))(var16) /* item on <var16:Iterator[nullable Object]>*/;
var_parent = var18;
var19 = ((short int (*)(val*, val*))(var_parent->class->vft[COLOR_kernel__Object___61d_61d]))(var_parent, var_mclass) /* == on <var_parent:MClass>*/;
if (var19){
goto CONTINUE_label;
} else {
}
var20 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:SeparateCompiler>*/;
var21 = ((val* (*)(val*, val*))(var20->class->vft[COLOR_abstract_compiler__MModule__properties]))(var20, var_parent) /* properties on <var20:MModule>*/;
var22 = ((val* (*)(val*))(var21->class->vft[COLOR_abstract_collection__Collection__iterator]))(var21) /* iterator on <var21:Set[MProperty]>*/;
for(;;) {
var23 = ((short int (*)(val*))(var22->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var22) /* is_ok on <var22:Iterator[nullable Object]>*/;
if(!var23) break;
var24 = ((val* (*)(val*))(var22->class->vft[COLOR_abstract_collection__Iterator__item]))(var22) /* item on <var22:Iterator[nullable Object]>*/;
var_mproperty = var24;
/* <var_mproperty:MProperty> isa MAttribute */
cltype = type_model__MAttribute.color;
idtype = type_model__MAttribute.id;
if(cltype >= var_mproperty->type->table_size) {
var25 = 0;
} else {
var25 = var_mproperty->type->type_table[cltype] == idtype;
}
var26 = !var25;
if (var26){
goto CONTINUE_label27;
} else {
}
if (var_layout == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 419);
show_backtrace(1);
} else {
var28 = ((val* (*)(val*))(var_layout->class->vft[COLOR_layout_builders__Layout__pos]))(var_layout) /* pos on <var_layout:nullable Layout[MAttribute]>*/;
}
var29 = ((val* (*)(val*, val*))(var28->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var28, var_mproperty) /* [] on <var28:Map[Object, Int](Map[MAttribute, Int])>*/;
var30 = ((struct instance_kernel__Int*)var29)->value; /* autounbox from nullable Object to Int */;
var_color = var30;
var31 = ((long (*)(val*))(var_table->class->vft[COLOR_abstract_collection__Collection__length]))(var_table) /* length on <var_table:Array[nullable MPropDef]>*/;
{ /* Inline kernel#Int#<= (var31,var_color) */
/* Covariant cast for argument 0 (i) <var_color:Int> isa OTHER */
/* <var_color:Int> isa OTHER */
var34 = 1; /* easy <var_color:Int> isa OTHER*/
if (!var34) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 264);
show_backtrace(1);
}
var37 = var31 <= var_color;
var32 = var37;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
if (var32){
var38 = NEW_range__Range(&type_range__Rangekernel__Int);
var39 = ((long (*)(val*))(var_table->class->vft[COLOR_abstract_collection__Collection__length]))(var_table) /* length on <var_table:Array[nullable MPropDef]>*/;
var40 = BOX_kernel__Int(var39); /* autobox from Int to Discrete */
var41 = BOX_kernel__Int(var_color); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var38->class->vft[COLOR_range__Range__without_last]))(var38, var40, var41) /* without_last on <var38:Range[Int]>*/;
var42 = ((val* (*)(val*))(var38->class->vft[COLOR_abstract_collection__Collection__iterator]))(var38) /* iterator on <var38:Range[Int]>*/;
for(;;) {
var43 = ((short int (*)(val*))(var42->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var42) /* is_ok on <var42:Iterator[nullable Object]>*/;
if(!var43) break;
var44 = ((val* (*)(val*))(var42->class->vft[COLOR_abstract_collection__Iterator__item]))(var42) /* item on <var42:Iterator[nullable Object]>*/;
var45 = ((struct instance_kernel__Int*)var44)->value; /* autounbox from nullable Object to Int */;
var_i = var45;
var46 = NULL;
((void (*)(val*, long, val*))(var_table->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var_table, var_i, var46) /* []= on <var_table:Array[nullable MPropDef]>*/;
CONTINUE_label47: (void)0;
((void (*)(val*))(var42->class->vft[COLOR_abstract_collection__Iterator__next]))(var42) /* next on <var42:Iterator[nullable Object]>*/;
}
BREAK_label47: (void)0;
} else {
}
var48 = ((val* (*)(val*))(var_mproperty->class->vft[COLOR_model__MProperty__mpropdefs]))(var_mproperty) /* mpropdefs on <var_mproperty:MProperty(MAttribute)>*/;
var49 = ((val* (*)(val*))(var48->class->vft[COLOR_abstract_collection__Collection__iterator]))(var48) /* iterator on <var48:Array[MPropDef](Array[MAttributeDef])>*/;
for(;;) {
var50 = ((short int (*)(val*))(var49->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var49) /* is_ok on <var49:Iterator[nullable Object]>*/;
if(!var50) break;
var51 = ((val* (*)(val*))(var49->class->vft[COLOR_abstract_collection__Iterator__item]))(var49) /* item on <var49:Iterator[nullable Object]>*/;
var_mpropdef = var51;
var52 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mpropdef) /* mclassdef on <var_mpropdef:MAttributeDef>*/;
var53 = ((val* (*)(val*))(var52->class->vft[COLOR_model__MClassDef__mclass]))(var52) /* mclass on <var52:MClassDef>*/;
var54 = ((short int (*)(val*, val*))(var53->class->vft[COLOR_kernel__Object___61d_61d]))(var53, var_parent) /* == on <var53:MClass>*/;
if (var54){
((void (*)(val*, long, val*))(var_table->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var_table, var_color, var_mpropdef) /* []= on <var_table:Array[nullable MPropDef]>*/;
} else {
}
CONTINUE_label55: (void)0;
((void (*)(val*))(var49->class->vft[COLOR_abstract_collection__Iterator__next]))(var49) /* next on <var49:Iterator[nullable Object]>*/;
}
BREAK_label55: (void)0;
CONTINUE_label27: (void)0;
((void (*)(val*))(var22->class->vft[COLOR_abstract_collection__Iterator__next]))(var22) /* next on <var22:Iterator[nullable Object]>*/;
}
BREAK_label27: (void)0;
CONTINUE_label: (void)0;
((void (*)(val*))(var16->class->vft[COLOR_abstract_collection__Iterator__next]))(var16) /* next on <var16:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var56 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:SeparateCompiler>*/;
var57 = ((val* (*)(val*, val*))(var56->class->vft[COLOR_abstract_compiler__MModule__properties]))(var56, var_mclass) /* properties on <var56:MModule>*/;
var58 = ((val* (*)(val*))(var57->class->vft[COLOR_abstract_collection__Collection__iterator]))(var57) /* iterator on <var57:Set[MProperty]>*/;
for(;;) {
var59 = ((short int (*)(val*))(var58->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var58) /* is_ok on <var58:Iterator[nullable Object]>*/;
if(!var59) break;
var60 = ((val* (*)(val*))(var58->class->vft[COLOR_abstract_collection__Iterator__item]))(var58) /* item on <var58:Iterator[nullable Object]>*/;
var_mproperty61 = var60;
/* <var_mproperty61:MProperty> isa MAttribute */
cltype63 = type_model__MAttribute.color;
idtype64 = type_model__MAttribute.id;
if(cltype63 >= var_mproperty61->type->table_size) {
var62 = 0;
} else {
var62 = var_mproperty61->type->type_table[cltype63] == idtype64;
}
var65 = !var62;
if (var65){
goto CONTINUE_label66;
} else {
}
if (var_layout == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 436);
show_backtrace(1);
} else {
var67 = ((val* (*)(val*))(var_layout->class->vft[COLOR_layout_builders__Layout__pos]))(var_layout) /* pos on <var_layout:nullable Layout[MAttribute]>*/;
}
var68 = ((val* (*)(val*, val*))(var67->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var67, var_mproperty61) /* [] on <var67:Map[Object, Int](Map[MAttribute, Int])>*/;
var69 = ((struct instance_kernel__Int*)var68)->value; /* autounbox from nullable Object to Int */;
var_color70 = var69;
var71 = ((long (*)(val*))(var_table->class->vft[COLOR_abstract_collection__Collection__length]))(var_table) /* length on <var_table:Array[nullable MPropDef]>*/;
{ /* Inline kernel#Int#<= (var71,var_color70) */
/* Covariant cast for argument 0 (i) <var_color70:Int> isa OTHER */
/* <var_color70:Int> isa OTHER */
var74 = 1; /* easy <var_color70:Int> isa OTHER*/
if (!var74) {
var_class_name77 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name77);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 264);
show_backtrace(1);
}
var78 = var71 <= var_color70;
var72 = var78;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
if (var72){
var79 = NEW_range__Range(&type_range__Rangekernel__Int);
var80 = ((long (*)(val*))(var_table->class->vft[COLOR_abstract_collection__Collection__length]))(var_table) /* length on <var_table:Array[nullable MPropDef]>*/;
var81 = BOX_kernel__Int(var80); /* autobox from Int to Discrete */
var82 = BOX_kernel__Int(var_color70); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var79->class->vft[COLOR_range__Range__without_last]))(var79, var81, var82) /* without_last on <var79:Range[Int]>*/;
var83 = ((val* (*)(val*))(var79->class->vft[COLOR_abstract_collection__Collection__iterator]))(var79) /* iterator on <var79:Range[Int]>*/;
for(;;) {
var84 = ((short int (*)(val*))(var83->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var83) /* is_ok on <var83:Iterator[nullable Object]>*/;
if(!var84) break;
var85 = ((val* (*)(val*))(var83->class->vft[COLOR_abstract_collection__Iterator__item]))(var83) /* item on <var83:Iterator[nullable Object]>*/;
var87 = ((struct instance_kernel__Int*)var85)->value; /* autounbox from nullable Object to Int */;
var_i86 = var87;
var88 = NULL;
((void (*)(val*, long, val*))(var_table->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var_table, var_i86, var88) /* []= on <var_table:Array[nullable MPropDef]>*/;
CONTINUE_label89: (void)0;
((void (*)(val*))(var83->class->vft[COLOR_abstract_collection__Iterator__next]))(var83) /* next on <var83:Iterator[nullable Object]>*/;
}
BREAK_label89: (void)0;
} else {
}
var90 = ((val* (*)(val*))(var_mproperty61->class->vft[COLOR_model__MProperty__mpropdefs]))(var_mproperty61) /* mpropdefs on <var_mproperty61:MProperty(MAttribute)>*/;
var91 = ((val* (*)(val*))(var90->class->vft[COLOR_abstract_collection__Collection__iterator]))(var90) /* iterator on <var90:Array[MPropDef](Array[MAttributeDef])>*/;
for(;;) {
var92 = ((short int (*)(val*))(var91->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var91) /* is_ok on <var91:Iterator[nullable Object]>*/;
if(!var92) break;
var93 = ((val* (*)(val*))(var91->class->vft[COLOR_abstract_collection__Iterator__item]))(var91) /* item on <var91:Iterator[nullable Object]>*/;
var_mpropdef94 = var93;
var95 = ((val* (*)(val*))(var_mpropdef94->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mpropdef94) /* mclassdef on <var_mpropdef94:MAttributeDef>*/;
var96 = ((val* (*)(val*))(var95->class->vft[COLOR_model__MClassDef__mclass]))(var95) /* mclass on <var95:MClassDef>*/;
var97 = ((short int (*)(val*, val*))(var96->class->vft[COLOR_kernel__Object___61d_61d]))(var96, var_mclass) /* == on <var96:MClass>*/;
if (var97){
((void (*)(val*, long, val*))(var_table->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var_table, var_color70, var_mpropdef94) /* []= on <var_table:Array[nullable MPropDef]>*/;
} else {
}
CONTINUE_label98: (void)0;
((void (*)(val*))(var91->class->vft[COLOR_abstract_collection__Iterator__next]))(var91) /* next on <var91:Iterator[nullable Object]>*/;
}
BREAK_label98: (void)0;
CONTINUE_label66: (void)0;
((void (*)(val*))(var58->class->vft[COLOR_abstract_collection__Iterator__next]))(var58) /* next on <var58:Iterator[nullable Object]>*/;
}
BREAK_label66: (void)0;
((void (*)(val*, val*, val*))(var_tables->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var_tables, var_mclass, var_table) /* []= on <var_tables:HashMap[MClass, Array[nullable MPropDef]]>*/;
CONTINUE_label99: (void)0;
((void (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__next]))(var3) /* next on <var3:Iterator[nullable Object]>*/;
}
BREAK_label99: (void)0;
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
val* var1 /* : HashSet[MType] */;
val* var_mtypes /* var mtypes: HashSet[MType] */;
val* var2 /* : nullable RapidTypeAnalysis */;
val* var3 /* : HashSet[MClassType] */;
val* var4 /* : nullable RapidTypeAnalysis */;
val* var5 /* : HashSet[MType] */;
val* var6 /* : HashMap[MClass, Int] */;
val* var7 /* : Collection[Object] */;
val* var8 /* : Iterator[nullable Object] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_c /* var c: MClass */;
val* var11 /* : MClassType */;
val* var12 /* : ModelBuilder */;
val* var13 /* : ToolContext */;
val* var14 /* : OptionBool */;
val* var15 /* : nullable Object */;
short int var16 /* : Bool */;
val* var17 /* : MTypeBMizer */;
val* var18 /* : MModule */;
val* var_layout_builder /* var layout_builder: TypingLayoutBuilder[MType] */;
val* var19 /* : ModelBuilder */;
val* var20 /* : ToolContext */;
val* var21 /* : OptionBool */;
val* var22 /* : nullable Object */;
short int var23 /* : Bool */;
val* var24 /* : MTypeHasher */;
val* var25 /* : PHModOperator */;
val* var26 /* : MModule */;
val* var27 /* : ModelBuilder */;
val* var28 /* : ToolContext */;
val* var29 /* : OptionBool */;
val* var30 /* : nullable Object */;
short int var31 /* : Bool */;
val* var32 /* : MTypeHasher */;
val* var33 /* : PHAndOperator */;
val* var34 /* : MModule */;
val* var35 /* : MTypeColorer */;
val* var36 /* : MModule */;
val* var37 /* : Layout[Object] */;
val* var38 /* : nullable POSet[Object] */;
val* var_poset /* var poset: POSet[MType] */;
val* var39 /* : Map[MType, Array[nullable MType]] */;
var1 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MType);
((void (*)(val*))(var1->class->vft[COLOR_hash_collection__HashSet__init]))(var1) /* init on <var1:HashSet[MType]>*/;
var_mtypes = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__runtime_type_analysis]))(self) /* runtime_type_analysis on <self:SeparateCompiler>*/;
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 456);
show_backtrace(1);
} else {
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_types]))(var2) /* live_types on <var2:nullable RapidTypeAnalysis>*/;
}
((void (*)(val*, val*))(var_mtypes->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var_mtypes, var3) /* add_all on <var_mtypes:HashSet[MType]>*/;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__runtime_type_analysis]))(self) /* runtime_type_analysis on <self:SeparateCompiler>*/;
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 457);
show_backtrace(1);
} else {
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_cast_types]))(var4) /* live_cast_types on <var4:nullable RapidTypeAnalysis>*/;
}
((void (*)(val*, val*))(var_mtypes->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var_mtypes, var5) /* add_all on <var_mtypes:HashSet[MType]>*/;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__box_kinds]))(self) /* box_kinds on <self:SeparateCompiler>*/;
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_collection__MapRead__keys]))(var6) /* keys on <var6:HashMap[MClass, Int]>*/;
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_abstract_collection__Collection__iterator]))(var7) /* iterator on <var7:Collection[Object](HashMapKeys[MClass, Int])>*/;
for(;;) {
var9 = ((short int (*)(val*))(var8->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var8) /* is_ok on <var8:Iterator[nullable Object]>*/;
if(!var9) break;
var10 = ((val* (*)(val*))(var8->class->vft[COLOR_abstract_collection__Iterator__item]))(var8) /* item on <var8:Iterator[nullable Object]>*/;
var_c = var10;
var11 = ((val* (*)(val*))(var_c->class->vft[COLOR_model__MClass__mclass_type]))(var_c) /* mclass_type on <var_c:MClass>*/;
((void (*)(val*, val*))(var_mtypes->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_mtypes, var11) /* add on <var_mtypes:HashSet[MType]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var8->class->vft[COLOR_abstract_collection__Iterator__next]))(var8) /* next on <var8:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var12 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(self) /* modelbuilder on <self:SeparateCompiler>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var12) /* toolcontext on <var12:ModelBuilder>*/;
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_separate_compiler__ToolContext__opt_bm_typing]))(var13) /* opt_bm_typing on <var13:ToolContext>*/;
var15 = ((val* (*)(val*))(var14->class->vft[COLOR_opts__Option__value]))(var14) /* value on <var14:OptionBool>*/;
var16 = ((struct instance_kernel__Bool*)var15)->value; /* autounbox from nullable Object to Bool */;
if (var16){
var17 = NEW_layout_builders__MTypeBMizer(&type_layout_builders__MTypeBMizer);
var18 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:SeparateCompiler>*/;
((void (*)(val*, val*))(var17->class->vft[COLOR_layout_builders__MTypeBMizer__init]))(var17, var18) /* init on <var17:MTypeBMizer>*/;
var_layout_builder = var17;
} else {
var19 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(self) /* modelbuilder on <self:SeparateCompiler>*/;
var20 = ((val* (*)(val*))(var19->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var19) /* toolcontext on <var19:ModelBuilder>*/;
var21 = ((val* (*)(val*))(var20->class->vft[COLOR_separate_compiler__ToolContext__opt_phmod_typing]))(var20) /* opt_phmod_typing on <var20:ToolContext>*/;
var22 = ((val* (*)(val*))(var21->class->vft[COLOR_opts__Option__value]))(var21) /* value on <var21:OptionBool>*/;
var23 = ((struct instance_kernel__Bool*)var22)->value; /* autounbox from nullable Object to Bool */;
if (var23){
var24 = NEW_layout_builders__MTypeHasher(&type_layout_builders__MTypeHasher);
var25 = NEW_layout_builders__PHModOperator(&type_layout_builders__PHModOperator);
((void (*)(val*))(var25->class->vft[COLOR_layout_builders__PHModOperator__init]))(var25) /* init on <var25:PHModOperator>*/;
var26 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:SeparateCompiler>*/;
((void (*)(val*, val*, val*))(var24->class->vft[COLOR_layout_builders__MTypeHasher__init]))(var24, var25, var26) /* init on <var24:MTypeHasher>*/;
var_layout_builder = var24;
} else {
var27 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(self) /* modelbuilder on <self:SeparateCompiler>*/;
var28 = ((val* (*)(val*))(var27->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var27) /* toolcontext on <var27:ModelBuilder>*/;
var29 = ((val* (*)(val*))(var28->class->vft[COLOR_separate_compiler__ToolContext__opt_phand_typing]))(var28) /* opt_phand_typing on <var28:ToolContext>*/;
var30 = ((val* (*)(val*))(var29->class->vft[COLOR_opts__Option__value]))(var29) /* value on <var29:OptionBool>*/;
var31 = ((struct instance_kernel__Bool*)var30)->value; /* autounbox from nullable Object to Bool */;
if (var31){
var32 = NEW_layout_builders__MTypeHasher(&type_layout_builders__MTypeHasher);
var33 = NEW_layout_builders__PHAndOperator(&type_layout_builders__PHAndOperator);
((void (*)(val*))(var33->class->vft[COLOR_layout_builders__PHAndOperator__init]))(var33) /* init on <var33:PHAndOperator>*/;
var34 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:SeparateCompiler>*/;
((void (*)(val*, val*, val*))(var32->class->vft[COLOR_layout_builders__MTypeHasher__init]))(var32, var33, var34) /* init on <var32:MTypeHasher>*/;
var_layout_builder = var32;
} else {
var35 = NEW_layout_builders__MTypeColorer(&type_layout_builders__MTypeColorer);
var36 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:SeparateCompiler>*/;
((void (*)(val*, val*))(var35->class->vft[COLOR_layout_builders__MTypeColorer__init]))(var35, var36) /* init on <var35:MTypeColorer>*/;
var_layout_builder = var35;
}
}
}
var37 = ((val* (*)(val*, val*))(var_layout_builder->class->vft[COLOR_layout_builders__TypingLayoutBuilder__build_layout]))(var_layout_builder, var_mtypes) /* build_layout on <var_layout_builder:TypingLayoutBuilder[MType]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__type_layout_61d]))(self, var37) /* type_layout= on <self:SeparateCompiler>*/;
var38 = ((val* (*)(val*))(var_layout_builder->class->vft[COLOR_layout_builders__TypingLayoutBuilder__poset]))(var_layout_builder) /* poset on <var_layout_builder:TypingLayoutBuilder[MType]>*/;
if (var38 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 476);
show_backtrace(1);
}
var_poset = var38;
var39 = ((val* (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__build_type_tables]))(self, var_poset) /* build_type_tables on <self:SeparateCompiler>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__type_tables_61d]))(self, var39) /* type_tables= on <self:SeparateCompiler>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__compile_resolution_tables]))(self, var_mtypes) /* compile_resolution_tables on <self:SeparateCompiler>*/;
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
/* method separate_compiler#SeparateCompiler#build_type_tables for (self: SeparateCompiler, POSet[MType]): Map[MType, Array[nullable MType]] */
val* separate_compiler__SeparateCompiler__build_type_tables(val* self, val* p0) {
val* var /* : Map[MType, Array[nullable MType]] */;
val* var_mtypes /* var mtypes: POSet[MType] */;
val* var1 /* : HashMap[MType, Array[nullable MType]] */;
val* var_tables /* var tables: HashMap[MType, Array[nullable MType]] */;
val* var2 /* : nullable Layout[MType] */;
val* var_layout /* var layout: nullable Layout[MType] */;
val* var3 /* : Iterator[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_mtype /* var mtype: MType */;
val* var6 /* : Array[nullable MType] */;
val* var_table /* var table: Array[nullable MType] */;
val* var7 /* : POSetElement[Object] */;
val* var8 /* : Collection[Object] */;
val* var9 /* : Iterator[nullable Object] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_sup /* var sup: MType */;
short int var12 /* : Bool */;
int cltype;
int idtype;
val* var13 /* : Map[Object, Map[Object, Int]] */;
val* var14 /* : nullable Object */;
val* var15 /* : nullable Object */;
long var16 /* : Int */;
long var_color /* var color: Int */;
val* var17 /* : Map[Object, Int] */;
val* var18 /* : nullable Object */;
long var19 /* : Int */;
long var20 /* : Int */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name;
short int var26 /* : Bool */;
val* var27 /* : Range[Int] */;
long var28 /* : Int */;
val* var29 /* : Discrete */;
val* var30 /* : Discrete */;
val* var31 /* : Iterator[nullable Object] */;
short int var32 /* : Bool */;
val* var33 /* : nullable Object */;
long var_i /* var i: Int */;
long var34 /* : Int */;
val* var35 /* : null */;
var_mtypes = p0;
var1 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MTypearray__Arraynullable_model__MType);
((void (*)(val*))(var1->class->vft[COLOR_hash_collection__HashMap__init]))(var1) /* init on <var1:HashMap[MType, Array[nullable MType]]>*/;
var_tables = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__type_layout]))(self) /* type_layout on <self:SeparateCompiler>*/;
var_layout = var2;
var3 = ((val* (*)(val*))(var_mtypes->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_mtypes) /* iterator on <var_mtypes:POSet[MType]>*/;
for(;;) {
var4 = ((short int (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var3) /* is_ok on <var3:Iterator[nullable Object]>*/;
if(!var4) break;
var5 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__item]))(var3) /* item on <var3:Iterator[nullable Object]>*/;
var_mtype = var5;
var6 = NEW_array__Array(&type_array__Arraynullable_model__MType);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[nullable MType]>*/;
var_table = var6;
var7 = ((val* (*)(val*, val*))(var_mtypes->class->vft[COLOR_poset__POSet___91d_93d]))(var_mtypes, var_mtype) /* [] on <var_mtypes:POSet[MType]>*/;
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_poset__POSetElement__greaters]))(var7) /* greaters on <var7:POSetElement[Object](POSetElement[MType])>*/;
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_abstract_collection__Collection__iterator]))(var8) /* iterator on <var8:Collection[Object](Collection[MType])>*/;
for(;;) {
var10 = ((short int (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var9) /* is_ok on <var9:Iterator[nullable Object]>*/;
if(!var10) break;
var11 = ((val* (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__item]))(var9) /* item on <var9:Iterator[nullable Object]>*/;
var_sup = var11;
/* <var_layout:nullable Layout[MType]> isa PHLayout[MType, MType] */
cltype = type_layout_builders__PHLayoutmodel__MTypemodel__MType.color;
idtype = type_layout_builders__PHLayoutmodel__MTypemodel__MType.id;
if(var_layout == NULL) {
var12 = 0;
} else {
if(cltype >= var_layout->type->table_size) {
var12 = 0;
} else {
var12 = var_layout->type->type_table[cltype] == idtype;
}
}
if (var12){
var13 = ((val* (*)(val*))(var_layout->class->vft[COLOR_layout_builders__PHLayout__hashes]))(var_layout) /* hashes on <var_layout:nullable Layout[MType](PHLayout[MType, MType])>*/;
var14 = ((val* (*)(val*, val*))(var13->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var13, var_mtype) /* [] on <var13:Map[Object, Map[Object, Int]](Map[MType, Map[MType, Int]])>*/;
var15 = ((val* (*)(val*, val*))(var14->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var14, var_sup) /* [] on <var14:nullable Object(Map[MType, Int])>*/;
var16 = ((struct instance_kernel__Int*)var15)->value; /* autounbox from nullable Object to Int */;
var_color = var16;
} else {
if (var_layout == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 496);
show_backtrace(1);
} else {
var17 = ((val* (*)(val*))(var_layout->class->vft[COLOR_layout_builders__Layout__pos]))(var_layout) /* pos on <var_layout:nullable Layout[MType]>*/;
}
var18 = ((val* (*)(val*, val*))(var17->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var17, var_sup) /* [] on <var17:Map[Object, Int](Map[MType, Int])>*/;
var19 = ((struct instance_kernel__Int*)var18)->value; /* autounbox from nullable Object to Int */;
var_color = var19;
}
var20 = ((long (*)(val*))(var_table->class->vft[COLOR_abstract_collection__Collection__length]))(var_table) /* length on <var_table:Array[nullable MType]>*/;
{ /* Inline kernel#Int#<= (var20,var_color) */
/* Covariant cast for argument 0 (i) <var_color:Int> isa OTHER */
/* <var_color:Int> isa OTHER */
var23 = 1; /* easy <var_color:Int> isa OTHER*/
if (!var23) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 264);
show_backtrace(1);
}
var26 = var20 <= var_color;
var21 = var26;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
if (var21){
var27 = NEW_range__Range(&type_range__Rangekernel__Int);
var28 = ((long (*)(val*))(var_table->class->vft[COLOR_abstract_collection__Collection__length]))(var_table) /* length on <var_table:Array[nullable MType]>*/;
var29 = BOX_kernel__Int(var28); /* autobox from Int to Discrete */
var30 = BOX_kernel__Int(var_color); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var27->class->vft[COLOR_range__Range__without_last]))(var27, var29, var30) /* without_last on <var27:Range[Int]>*/;
var31 = ((val* (*)(val*))(var27->class->vft[COLOR_abstract_collection__Collection__iterator]))(var27) /* iterator on <var27:Range[Int]>*/;
for(;;) {
var32 = ((short int (*)(val*))(var31->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var31) /* is_ok on <var31:Iterator[nullable Object]>*/;
if(!var32) break;
var33 = ((val* (*)(val*))(var31->class->vft[COLOR_abstract_collection__Iterator__item]))(var31) /* item on <var31:Iterator[nullable Object]>*/;
var34 = ((struct instance_kernel__Int*)var33)->value; /* autounbox from nullable Object to Int */;
var_i = var34;
var35 = NULL;
((void (*)(val*, long, val*))(var_table->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var_table, var_i, var35) /* []= on <var_table:Array[nullable MType]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var31->class->vft[COLOR_abstract_collection__Iterator__next]))(var31) /* next on <var31:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
} else {
}
((void (*)(val*, long, val*))(var_table->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var_table, var_color, var_sup) /* []= on <var_table:Array[nullable MType]>*/;
CONTINUE_label36: (void)0;
((void (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__next]))(var9) /* next on <var9:Iterator[nullable Object]>*/;
}
BREAK_label36: (void)0;
((void (*)(val*, val*, val*))(var_tables->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var_tables, var_mtype, var_table) /* []= on <var_tables:HashMap[MType, Array[nullable MType]]>*/;
CONTINUE_label37: (void)0;
((void (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__next]))(var3) /* next on <var3:Iterator[nullable Object]>*/;
}
BREAK_label37: (void)0;
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
val* var2 /* : HashSet[MClassType] */;
val* var3 /* : Iterator[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_mtype /* var mtype: MClassType */;
val* var6 /* : HashSet[MType] */;
val* var_set /* var set: HashSet[MType] */;
val* var7 /* : MModule */;
val* var8 /* : Set[MClassDef] */;
val* var9 /* : Iterator[nullable Object] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_cd /* var cd: MClassDef */;
val* var12 /* : Map[MClassDef, Set[MType]] */;
short int var13 /* : Bool */;
val* var14 /* : Map[MClassDef, Set[MType]] */;
val* var15 /* : nullable Object */;
val* var17 /* : ModelBuilder */;
val* var18 /* : ToolContext */;
val* var19 /* : OptionBool */;
val* var20 /* : nullable Object */;
short int var21 /* : Bool */;
val* var22 /* : ResolutionBMizer */;
val* var_resolution_builder /* var resolution_builder: ResolutionLayoutBuilder */;
val* var23 /* : ModelBuilder */;
val* var24 /* : ToolContext */;
val* var25 /* : OptionBool */;
val* var26 /* : nullable Object */;
short int var27 /* : Bool */;
val* var28 /* : ResolutionHasher */;
val* var29 /* : PHModOperator */;
val* var30 /* : ModelBuilder */;
val* var31 /* : ToolContext */;
val* var32 /* : OptionBool */;
val* var33 /* : nullable Object */;
short int var34 /* : Bool */;
val* var35 /* : ResolutionHasher */;
val* var36 /* : PHAndOperator */;
val* var37 /* : ResolutionColorer */;
val* var38 /* : Layout[MType] */;
val* var39 /* : Map[MClassType, Array[nullable MType]] */;
val* var40 /* : HashSet[MType] */;
val* var_all_unresolved /* var all_unresolved: HashSet[MType] */;
val* var41 /* : Map[MClassDef, Set[MType]] */;
val* var42 /* : Collection[nullable Object] */;
val* var43 /* : Iterator[nullable Object] */;
short int var44 /* : Bool */;
val* var45 /* : nullable Object */;
val* var_t /* var t: Set[MType] */;
val* var47 /* : HashMap[MType, Int] */;
val* var_all_unresolved_types_colors /* var all_unresolved_types_colors: HashMap[MType, Int] */;
val* var48 /* : Iterator[nullable Object] */;
short int var49 /* : Bool */;
val* var50 /* : nullable Object */;
val* var_t51 /* var t: MType */;
val* var52 /* : nullable Layout[MType] */;
val* var53 /* : Map[Object, Int] */;
short int var54 /* : Bool */;
val* var55 /* : nullable Layout[MType] */;
val* var56 /* : Map[Object, Int] */;
val* var57 /* : nullable Object */;
long var58 /* : Int */;
long var59 /* : Int */;
long var61 /* : Int */;
val* var62 /* : nullable Object */;
var_mtypes = p0;
var = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassTypeabstract_collection__Setmodel__MType);
((void (*)(val*))(var->class->vft[COLOR_hash_collection__HashMap__init]))(var) /* init on <var:HashMap[MClassType, Set[MType]]>*/;
var_mtype2unresolved = var;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__runtime_type_analysis]))(self) /* runtime_type_analysis on <self:SeparateCompiler>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 519);
show_backtrace(1);
} else {
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_types]))(var1) /* live_types on <var1:nullable RapidTypeAnalysis>*/;
}
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__iterator]))(var2) /* iterator on <var2:HashSet[MClassType]>*/;
for(;;) {
var4 = ((short int (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var3) /* is_ok on <var3:Iterator[nullable Object]>*/;
if(!var4) break;
var5 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__item]))(var3) /* item on <var3:Iterator[nullable Object]>*/;
var_mtype = var5;
var6 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MType);
((void (*)(val*))(var6->class->vft[COLOR_hash_collection__HashSet__init]))(var6) /* init on <var6:HashSet[MType]>*/;
var_set = var6;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:SeparateCompiler>*/;
var8 = ((val* (*)(val*, val*))(var_mtype->class->vft[COLOR_model__MType__collect_mclassdefs]))(var_mtype, var7) /* collect_mclassdefs on <var_mtype:MClassType>*/;
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_abstract_collection__Collection__iterator]))(var8) /* iterator on <var8:Set[MClassDef]>*/;
for(;;) {
var10 = ((short int (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var9) /* is_ok on <var9:Iterator[nullable Object]>*/;
if(!var10) break;
var11 = ((val* (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__item]))(var9) /* item on <var9:Iterator[nullable Object]>*/;
var_cd = var11;
var12 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__live_unresolved_types]))(self) /* live_unresolved_types on <self:SeparateCompiler>*/;
var13 = ((short int (*)(val*, val*))(var12->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var12, var_cd) /* has_key on <var12:Map[MClassDef, Set[MType]]>*/;
if (var13){
var14 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__live_unresolved_types]))(self) /* live_unresolved_types on <self:SeparateCompiler>*/;
var15 = ((val* (*)(val*, val*))(var14->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var14, var_cd) /* [] on <var14:Map[MClassDef, Set[MType]]>*/;
((void (*)(val*, val*))(var_set->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var_set, var15) /* add_all on <var_set:HashSet[MType]>*/;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__next]))(var9) /* next on <var9:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
((void (*)(val*, val*, val*))(var_mtype2unresolved->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var_mtype2unresolved, var_mtype, var_set) /* []= on <var_mtype2unresolved:HashMap[MClassType, Set[MType]]>*/;
CONTINUE_label16: (void)0;
((void (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__next]))(var3) /* next on <var3:Iterator[nullable Object]>*/;
}
BREAK_label16: (void)0;
var17 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(self) /* modelbuilder on <self:SeparateCompiler>*/;
var18 = ((val* (*)(val*))(var17->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var17) /* toolcontext on <var17:ModelBuilder>*/;
var19 = ((val* (*)(val*))(var18->class->vft[COLOR_separate_compiler__ToolContext__opt_bm_typing]))(var18) /* opt_bm_typing on <var18:ToolContext>*/;
var20 = ((val* (*)(val*))(var19->class->vft[COLOR_opts__Option__value]))(var19) /* value on <var19:OptionBool>*/;
var21 = ((struct instance_kernel__Bool*)var20)->value; /* autounbox from nullable Object to Bool */;
if (var21){
var22 = NEW_layout_builders__ResolutionBMizer(&type_layout_builders__ResolutionBMizer);
((void (*)(val*))(var22->class->vft[COLOR_layout_builders__ResolutionBMizer__init]))(var22) /* init on <var22:ResolutionBMizer>*/;
var_resolution_builder = var22;
} else {
var23 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(self) /* modelbuilder on <self:SeparateCompiler>*/;
var24 = ((val* (*)(val*))(var23->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var23) /* toolcontext on <var23:ModelBuilder>*/;
var25 = ((val* (*)(val*))(var24->class->vft[COLOR_separate_compiler__ToolContext__opt_phmod_typing]))(var24) /* opt_phmod_typing on <var24:ToolContext>*/;
var26 = ((val* (*)(val*))(var25->class->vft[COLOR_opts__Option__value]))(var25) /* value on <var25:OptionBool>*/;
var27 = ((struct instance_kernel__Bool*)var26)->value; /* autounbox from nullable Object to Bool */;
if (var27){
var28 = NEW_layout_builders__ResolutionHasher(&type_layout_builders__ResolutionHasher);
var29 = NEW_layout_builders__PHModOperator(&type_layout_builders__PHModOperator);
((void (*)(val*))(var29->class->vft[COLOR_layout_builders__PHModOperator__init]))(var29) /* init on <var29:PHModOperator>*/;
((void (*)(val*, val*))(var28->class->vft[COLOR_layout_builders__ResolutionHasher__init]))(var28, var29) /* init on <var28:ResolutionHasher>*/;
var_resolution_builder = var28;
} else {
var30 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(self) /* modelbuilder on <self:SeparateCompiler>*/;
var31 = ((val* (*)(val*))(var30->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var30) /* toolcontext on <var30:ModelBuilder>*/;
var32 = ((val* (*)(val*))(var31->class->vft[COLOR_separate_compiler__ToolContext__opt_phand_typing]))(var31) /* opt_phand_typing on <var31:ToolContext>*/;
var33 = ((val* (*)(val*))(var32->class->vft[COLOR_opts__Option__value]))(var32) /* value on <var32:OptionBool>*/;
var34 = ((struct instance_kernel__Bool*)var33)->value; /* autounbox from nullable Object to Bool */;
if (var34){
var35 = NEW_layout_builders__ResolutionHasher(&type_layout_builders__ResolutionHasher);
var36 = NEW_layout_builders__PHAndOperator(&type_layout_builders__PHAndOperator);
((void (*)(val*))(var36->class->vft[COLOR_layout_builders__PHAndOperator__init]))(var36) /* init on <var36:PHAndOperator>*/;
((void (*)(val*, val*))(var35->class->vft[COLOR_layout_builders__ResolutionHasher__init]))(var35, var36) /* init on <var35:ResolutionHasher>*/;
var_resolution_builder = var35;
} else {
var37 = NEW_layout_builders__ResolutionColorer(&type_layout_builders__ResolutionColorer);
((void (*)(val*))(var37->class->vft[COLOR_layout_builders__ResolutionColorer__init]))(var37) /* init on <var37:ResolutionColorer>*/;
var_resolution_builder = var37;
}
}
}
var38 = ((val* (*)(val*, val*))(var_resolution_builder->class->vft[COLOR_layout_builders__ResolutionLayoutBuilder__build_layout]))(var_resolution_builder, var_mtype2unresolved) /* build_layout on <var_resolution_builder:ResolutionLayoutBuilder>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__resolution_layout_61d]))(self, var38) /* resolution_layout= on <self:SeparateCompiler>*/;
var39 = ((val* (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__build_resolution_tables]))(self, var_mtype2unresolved) /* build_resolution_tables on <self:SeparateCompiler>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__resolution_tables_61d]))(self, var39) /* resolution_tables= on <self:SeparateCompiler>*/;
var40 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MType);
((void (*)(val*))(var40->class->vft[COLOR_hash_collection__HashSet__init]))(var40) /* init on <var40:HashSet[MType]>*/;
var_all_unresolved = var40;
var41 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__live_unresolved_types]))(self) /* live_unresolved_types on <self:SeparateCompiler>*/;
var42 = ((val* (*)(val*))(var41->class->vft[COLOR_abstract_collection__MapRead__values]))(var41) /* values on <var41:Map[MClassDef, Set[MType]]>*/;
var43 = ((val* (*)(val*))(var42->class->vft[COLOR_abstract_collection__Collection__iterator]))(var42) /* iterator on <var42:Collection[nullable Object](RemovableCollection[Set[MType]])>*/;
for(;;) {
var44 = ((short int (*)(val*))(var43->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var43) /* is_ok on <var43:Iterator[nullable Object]>*/;
if(!var44) break;
var45 = ((val* (*)(val*))(var43->class->vft[COLOR_abstract_collection__Iterator__item]))(var43) /* item on <var43:Iterator[nullable Object]>*/;
var_t = var45;
((void (*)(val*, val*))(var_all_unresolved->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var_all_unresolved, var_t) /* add_all on <var_all_unresolved:HashSet[MType]>*/;
CONTINUE_label46: (void)0;
((void (*)(val*))(var43->class->vft[COLOR_abstract_collection__Iterator__next]))(var43) /* next on <var43:Iterator[nullable Object]>*/;
}
BREAK_label46: (void)0;
var47 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MTypekernel__Int);
((void (*)(val*))(var47->class->vft[COLOR_hash_collection__HashMap__init]))(var47) /* init on <var47:HashMap[MType, Int]>*/;
var_all_unresolved_types_colors = var47;
var48 = ((val* (*)(val*))(var_all_unresolved->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_all_unresolved) /* iterator on <var_all_unresolved:HashSet[MType]>*/;
for(;;) {
var49 = ((short int (*)(val*))(var48->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var48) /* is_ok on <var48:Iterator[nullable Object]>*/;
if(!var49) break;
var50 = ((val* (*)(val*))(var48->class->vft[COLOR_abstract_collection__Iterator__item]))(var48) /* item on <var48:Iterator[nullable Object]>*/;
var_t51 = var50;
var52 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__resolution_layout]))(self) /* resolution_layout on <self:SeparateCompiler>*/;
if (var52 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 551);
show_backtrace(1);
} else {
var53 = ((val* (*)(val*))(var52->class->vft[COLOR_layout_builders__Layout__pos]))(var52) /* pos on <var52:nullable Layout[MType]>*/;
}
var54 = ((short int (*)(val*, val*))(var53->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var53, var_t51) /* has_key on <var53:Map[Object, Int](Map[MType, Int])>*/;
if (var54){
var55 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__resolution_layout]))(self) /* resolution_layout on <self:SeparateCompiler>*/;
if (var55 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 552);
show_backtrace(1);
} else {
var56 = ((val* (*)(val*))(var55->class->vft[COLOR_layout_builders__Layout__pos]))(var55) /* pos on <var55:nullable Layout[MType]>*/;
}
var57 = ((val* (*)(val*, val*))(var56->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var56, var_t51) /* [] on <var56:Map[Object, Int](Map[MType, Int])>*/;
((void (*)(val*, val*, val*))(var_all_unresolved_types_colors->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var_all_unresolved_types_colors, var_t51, var57) /* []= on <var_all_unresolved_types_colors:HashMap[MType, Int]>*/;
} else {
var58 = 1;
{ /* Inline kernel#Int#unary - (var58) */
var61 = -var58;
var59 = var61;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
var62 = BOX_kernel__Int(var59); /* autobox from Int to nullable Object */
((void (*)(val*, val*, val*))(var_all_unresolved_types_colors->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var_all_unresolved_types_colors, var_t51, var62) /* []= on <var_all_unresolved_types_colors:HashMap[MType, Int]>*/;
}
CONTINUE_label63: (void)0;
((void (*)(val*))(var48->class->vft[COLOR_abstract_collection__Iterator__next]))(var48) /* next on <var48:Iterator[nullable Object]>*/;
}
BREAK_label63: (void)0;
((void (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__compile_color_consts]))(self, var_all_unresolved_types_colors) /* compile_color_consts on <self:SeparateCompiler>*/;
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#compile_resolution_tables for (self: Object, Set[MType]) */
void VIRTUAL_separate_compiler__SeparateCompiler__compile_resolution_tables(val* self, val* p0) {
separate_compiler__SeparateCompiler__compile_resolution_tables(self, p0);
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#build_resolution_tables for (self: SeparateCompiler, Map[MClassType, Set[MType]]): Map[MClassType, Array[nullable MType]] */
val* separate_compiler__SeparateCompiler__build_resolution_tables(val* self, val* p0) {
val* var /* : Map[MClassType, Array[nullable MType]] */;
val* var_elements /* var elements: Map[MClassType, Set[MType]] */;
val* var1 /* : HashMap[MClassType, Array[nullable MType]] */;
val* var_tables /* var tables: HashMap[MClassType, Array[nullable MType]] */;
val* var2 /* : nullable Layout[MType] */;
val* var_layout /* var layout: nullable Layout[MType] */;
val* var3 /* : MapIterator[Object, nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : Object */;
val* var_mclasstype /* var mclasstype: MClassType */;
val* var6 /* : nullable Object */;
val* var_mtypes /* var mtypes: Set[MType] */;
val* var7 /* : Array[nullable MType] */;
val* var_table /* var table: Array[nullable MType] */;
val* var8 /* : Iterator[nullable Object] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_mtype /* var mtype: MType */;
short int var11 /* : Bool */;
int cltype;
int idtype;
val* var12 /* : Map[Object, Map[Object, Int]] */;
val* var13 /* : nullable Object */;
val* var14 /* : nullable Object */;
long var15 /* : Int */;
long var_color /* var color: Int */;
val* var16 /* : Map[Object, Int] */;
val* var17 /* : nullable Object */;
long var18 /* : Int */;
long var19 /* : Int */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name;
short int var25 /* : Bool */;
val* var26 /* : Range[Int] */;
long var27 /* : Int */;
val* var28 /* : Discrete */;
val* var29 /* : Discrete */;
val* var30 /* : Iterator[nullable Object] */;
short int var31 /* : Bool */;
val* var32 /* : nullable Object */;
long var_i /* var i: Int */;
long var33 /* : Int */;
val* var34 /* : null */;
var_elements = p0;
var1 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassTypearray__Arraynullable_model__MType);
((void (*)(val*))(var1->class->vft[COLOR_hash_collection__HashMap__init]))(var1) /* init on <var1:HashMap[MClassType, Array[nullable MType]]>*/;
var_tables = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__resolution_layout]))(self) /* resolution_layout on <self:SeparateCompiler>*/;
var_layout = var2;
var3 = ((val* (*)(val*))(var_elements->class->vft[COLOR_abstract_collection__MapRead__iterator]))(var_elements) /* iterator on <var_elements:Map[MClassType, Set[MType]]>*/;
for(;;) {
var4 = ((short int (*)(val*))(var3->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var3) /* is_ok on <var3:MapIterator[Object, nullable Object]>*/;
if(!var4) break;
var5 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__MapIterator__key]))(var3) /* key on <var3:MapIterator[Object, nullable Object]>*/;
var_mclasstype = var5;
var6 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__MapIterator__item]))(var3) /* item on <var3:MapIterator[Object, nullable Object]>*/;
var_mtypes = var6;
var7 = NEW_array__Array(&type_array__Arraynullable_model__MType);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[nullable MType]>*/;
var_table = var7;
var8 = ((val* (*)(val*))(var_mtypes->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_mtypes) /* iterator on <var_mtypes:Set[MType]>*/;
for(;;) {
var9 = ((short int (*)(val*))(var8->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var8) /* is_ok on <var8:Iterator[nullable Object]>*/;
if(!var9) break;
var10 = ((val* (*)(val*))(var8->class->vft[COLOR_abstract_collection__Iterator__item]))(var8) /* item on <var8:Iterator[nullable Object]>*/;
var_mtype = var10;
/* <var_layout:nullable Layout[MType]> isa PHLayout[MClassType, MType] */
cltype = type_layout_builders__PHLayoutmodel__MClassTypemodel__MType.color;
idtype = type_layout_builders__PHLayoutmodel__MClassTypemodel__MType.id;
if(var_layout == NULL) {
var11 = 0;
} else {
if(cltype >= var_layout->type->table_size) {
var11 = 0;
} else {
var11 = var_layout->type->type_table[cltype] == idtype;
}
}
if (var11){
var12 = ((val* (*)(val*))(var_layout->class->vft[COLOR_layout_builders__PHLayout__hashes]))(var_layout) /* hashes on <var_layout:nullable Layout[MType](PHLayout[MClassType, MType])>*/;
var13 = ((val* (*)(val*, val*))(var12->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var12, var_mclasstype) /* [] on <var12:Map[Object, Map[Object, Int]](Map[MClassType, Map[MType, Int]])>*/;
var14 = ((val* (*)(val*, val*))(var13->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var13, var_mtype) /* [] on <var13:nullable Object(Map[MType, Int])>*/;
var15 = ((struct instance_kernel__Int*)var14)->value; /* autounbox from nullable Object to Int */;
var_color = var15;
} else {
if (var_layout == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 576);
show_backtrace(1);
} else {
var16 = ((val* (*)(val*))(var_layout->class->vft[COLOR_layout_builders__Layout__pos]))(var_layout) /* pos on <var_layout:nullable Layout[MType]>*/;
}
var17 = ((val* (*)(val*, val*))(var16->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var16, var_mtype) /* [] on <var16:Map[Object, Int](Map[MType, Int])>*/;
var18 = ((struct instance_kernel__Int*)var17)->value; /* autounbox from nullable Object to Int */;
var_color = var18;
}
var19 = ((long (*)(val*))(var_table->class->vft[COLOR_abstract_collection__Collection__length]))(var_table) /* length on <var_table:Array[nullable MType]>*/;
{ /* Inline kernel#Int#<= (var19,var_color) */
/* Covariant cast for argument 0 (i) <var_color:Int> isa OTHER */
/* <var_color:Int> isa OTHER */
var22 = 1; /* easy <var_color:Int> isa OTHER*/
if (!var22) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 264);
show_backtrace(1);
}
var25 = var19 <= var_color;
var20 = var25;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
if (var20){
var26 = NEW_range__Range(&type_range__Rangekernel__Int);
var27 = ((long (*)(val*))(var_table->class->vft[COLOR_abstract_collection__Collection__length]))(var_table) /* length on <var_table:Array[nullable MType]>*/;
var28 = BOX_kernel__Int(var27); /* autobox from Int to Discrete */
var29 = BOX_kernel__Int(var_color); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var26->class->vft[COLOR_range__Range__without_last]))(var26, var28, var29) /* without_last on <var26:Range[Int]>*/;
var30 = ((val* (*)(val*))(var26->class->vft[COLOR_abstract_collection__Collection__iterator]))(var26) /* iterator on <var26:Range[Int]>*/;
for(;;) {
var31 = ((short int (*)(val*))(var30->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var30) /* is_ok on <var30:Iterator[nullable Object]>*/;
if(!var31) break;
var32 = ((val* (*)(val*))(var30->class->vft[COLOR_abstract_collection__Iterator__item]))(var30) /* item on <var30:Iterator[nullable Object]>*/;
var33 = ((struct instance_kernel__Int*)var32)->value; /* autounbox from nullable Object to Int */;
var_i = var33;
var34 = NULL;
((void (*)(val*, long, val*))(var_table->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var_table, var_i, var34) /* []= on <var_table:Array[nullable MType]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var30->class->vft[COLOR_abstract_collection__Iterator__next]))(var30) /* next on <var30:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
} else {
}
((void (*)(val*, long, val*))(var_table->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var_table, var_color, var_mtype) /* []= on <var_table:Array[nullable MType]>*/;
CONTINUE_label35: (void)0;
((void (*)(val*))(var8->class->vft[COLOR_abstract_collection__Iterator__next]))(var8) /* next on <var8:Iterator[nullable Object]>*/;
}
BREAK_label35: (void)0;
((void (*)(val*, val*, val*))(var_tables->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var_tables, var_mclasstype, var_table) /* []= on <var_tables:HashMap[MClassType, Array[nullable MType]]>*/;
CONTINUE_label36: (void)0;
((void (*)(val*))(var3->class->vft[COLOR_abstract_collection__MapIterator__next]))(var3) /* next on <var3:MapIterator[Object, nullable Object]>*/;
}
BREAK_label36: (void)0;
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
val* var_old_module /* var old_module: MModule */;
val* var1 /* : Array[MClassDef] */;
val* var2 /* : Iterator[nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_cd /* var cd: MClassDef */;
val* var5 /* : Array[MPropDef] */;
val* var6 /* : Iterator[nullable Object] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_pd /* var pd: MPropDef */;
short int var9 /* : Bool */;
int cltype;
int idtype;
short int var10 /* : Bool */;
val* var11 /* : AbstractRuntimeFunction */;
val* var_r /* var r: AbstractRuntimeFunction */;
val* var12 /* : AbstractRuntimeFunction */;
val* var_r2 /* var r2: AbstractRuntimeFunction */;
var_mmodule = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:SeparateCompiler>*/;
var_old_module = var;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule_61d]))(self, var_mmodule) /* mainmodule= on <self:SeparateCompiler>*/;
var1 = ((val* (*)(val*))(var_mmodule->class->vft[COLOR_model__MModule__mclassdefs]))(var_mmodule) /* mclassdefs on <var_mmodule:MModule>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Collection__iterator]))(var1) /* iterator on <var1:Array[MClassDef]>*/;
for(;;) {
var3 = ((short int (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var2) /* is_ok on <var2:Iterator[nullable Object]>*/;
if(!var3) break;
var4 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__item]))(var2) /* item on <var2:Iterator[nullable Object]>*/;
var_cd = var4;
var5 = ((val* (*)(val*))(var_cd->class->vft[COLOR_model__MClassDef__mpropdefs]))(var_cd) /* mpropdefs on <var_cd:MClassDef>*/;
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_abstract_collection__Collection__iterator]))(var5) /* iterator on <var5:Array[MPropDef]>*/;
for(;;) {
var7 = ((short int (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var6) /* is_ok on <var6:Iterator[nullable Object]>*/;
if(!var7) break;
var8 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__item]))(var6) /* item on <var6:Iterator[nullable Object]>*/;
var_pd = var8;
/* <var_pd:MPropDef> isa MMethodDef */
cltype = type_model__MMethodDef.color;
idtype = type_model__MMethodDef.id;
if(cltype >= var_pd->type->table_size) {
var9 = 0;
} else {
var9 = var_pd->type->type_table[cltype] == idtype;
}
var10 = !var9;
if (var10){
goto CONTINUE_label;
} else {
}
var11 = ((val* (*)(val*))(var_pd->class->vft[COLOR_separate_compiler__MMethodDef__separate_runtime_function]))(var_pd) /* separate_runtime_function on <var_pd:MPropDef(MMethodDef)>*/;
var_r = var11;
((void (*)(val*, val*))(var_r->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__compile_to_c]))(var_r, self) /* compile_to_c on <var_r:AbstractRuntimeFunction>*/;
var12 = ((val* (*)(val*))(var_pd->class->vft[COLOR_separate_compiler__MMethodDef__virtual_runtime_function]))(var_pd) /* virtual_runtime_function on <var_pd:MPropDef(MMethodDef)>*/;
var_r2 = var12;
((void (*)(val*, val*))(var_r2->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__compile_to_c]))(var_r2, self) /* compile_to_c on <var_r2:AbstractRuntimeFunction>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__next]))(var6) /* next on <var6:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
CONTINUE_label13: (void)0;
((void (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__next]))(var2) /* next on <var2:Iterator[nullable Object]>*/;
}
BREAK_label13: (void)0;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule_61d]))(self, var_old_module) /* mainmodule= on <self:SeparateCompiler>*/;
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#compile_module_to_c for (self: Object, MModule) */
void VIRTUAL_separate_compiler__SeparateCompiler__compile_module_to_c(val* self, val* p0) {
separate_compiler__SeparateCompiler__compile_module_to_c(self, p0);
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#compile_type_to_c for (self: SeparateCompiler, MType) */
void separate_compiler__SeparateCompiler__compile_type_to_c(val* self, val* p0) {
val* var_mtype /* var mtype: MType */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : nullable Layout[MType] */;
val* var_layout /* var layout: nullable Layout[MType] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var5 /* : nullable RapidTypeAnalysis */;
val* var6 /* : HashSet[MClassType] */;
short int var7 /* : Bool */;
short int var_is_live /* var is_live: Bool */;
val* var8 /* : nullable RapidTypeAnalysis */;
val* var9 /* : HashSet[MType] */;
short int var10 /* : Bool */;
short int var_is_cast_live /* var is_cast_live: Bool */;
val* var11 /* : String */;
val* var_c_name /* var c_name: String */;
val* var12 /* : SeparateCompilerVisitor */;
val* var_v /* var v: SeparateCompilerVisitor */;
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
val* var31 /* : Array[Object] */;
long var32 /* : Int */;
val* var33 /* : NativeArray[Object] */;
val* var34 /* : String */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
long var38 /* : Int */;
val* var39 /* : String */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : String */;
val* var45 /* : Array[Object] */;
long var46 /* : Int */;
val* var47 /* : NativeArray[Object] */;
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
val* var59 /* : Array[Object] */;
long var60 /* : Int */;
val* var61 /* : NativeArray[Object] */;
val* var62 /* : String */;
val* var63 /* : Map[Object, Int] */;
val* var64 /* : nullable Object */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
long var68 /* : Int */;
val* var69 /* : String */;
val* var70 /* : Array[Object] */;
long var71 /* : Int */;
val* var72 /* : NativeArray[Object] */;
val* var73 /* : String */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
long var77 /* : Int */;
val* var78 /* : String */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
long var82 /* : Int */;
val* var83 /* : String */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : NativeString */;
long var87 /* : Int */;
val* var88 /* : String */;
val* var89 /* : Array[Object] */;
long var90 /* : Int */;
val* var91 /* : NativeArray[Object] */;
val* var92 /* : String */;
short int var93 /* : Bool */;
int cltype94;
int idtype95;
val* var96 /* : Map[Object, Int] */;
val* var97 /* : nullable Object */;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : NativeString */;
long var101 /* : Int */;
val* var102 /* : String */;
val* var103 /* : Array[Object] */;
long var104 /* : Int */;
val* var105 /* : NativeArray[Object] */;
val* var106 /* : String */;
val* var107 /* : Map[Object, Int] */;
val* var108 /* : nullable Object */;
static val* varonce109;
val* var110 /* : String */;
char* var111 /* : NativeString */;
long var112 /* : Int */;
val* var113 /* : String */;
val* var114 /* : Array[Object] */;
long var115 /* : Int */;
val* var116 /* : NativeArray[Object] */;
val* var117 /* : String */;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : NativeString */;
long var121 /* : Int */;
val* var122 /* : String */;
short int var123 /* : Bool */;
int cltype124;
int idtype125;
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
val* var_mclass_type /* var mclass_type: MType */;
short int var136 /* : Bool */;
int cltype137;
int idtype138;
val* var139 /* : MType */;
short int var140 /* : Bool */;
int cltype141;
int idtype142;
val* var143 /* : Map[MClassType, Array[nullable MType]] */;
val* var144 /* : nullable Object */;
short int var145 /* : Bool */;
static val* varonce146;
val* var147 /* : String */;
char* var148 /* : NativeString */;
long var149 /* : Int */;
val* var150 /* : String */;
static val* varonce151;
val* var152 /* : String */;
char* var153 /* : NativeString */;
long var154 /* : Int */;
val* var155 /* : String */;
val* var156 /* : Array[Object] */;
long var157 /* : Int */;
val* var158 /* : NativeArray[Object] */;
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
val* var170 /* : Array[Object] */;
long var171 /* : Int */;
val* var172 /* : NativeArray[Object] */;
val* var173 /* : String */;
static val* varonce174;
val* var175 /* : String */;
char* var176 /* : NativeString */;
long var177 /* : Int */;
val* var178 /* : String */;
val* var179 /* : Map[MType, Array[nullable MType]] */;
val* var180 /* : nullable Object */;
long var181 /* : Int */;
static val* varonce182;
val* var183 /* : String */;
char* var184 /* : NativeString */;
long var185 /* : Int */;
val* var186 /* : String */;
val* var187 /* : Array[Object] */;
long var188 /* : Int */;
val* var189 /* : NativeArray[Object] */;
val* var190 /* : Object */;
val* var191 /* : String */;
static val* varonce192;
val* var193 /* : String */;
char* var194 /* : NativeString */;
long var195 /* : Int */;
val* var196 /* : String */;
val* var197 /* : Map[MType, Array[nullable MType]] */;
val* var198 /* : nullable Object */;
val* var199 /* : Iterator[nullable Object] */;
short int var200 /* : Bool */;
val* var201 /* : nullable Object */;
val* var_stype /* var stype: nullable MType */;
val* var202 /* : null */;
short int var203 /* : Bool */;
static val* varonce204;
val* var205 /* : String */;
char* var206 /* : NativeString */;
long var207 /* : Int */;
val* var208 /* : String */;
val* var209 /* : Map[Object, Int] */;
val* var210 /* : nullable Object */;
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
val* var221 /* : Array[Object] */;
long var222 /* : Int */;
val* var223 /* : NativeArray[Object] */;
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
var_mtype = p0;
var = ((short int (*)(val*))(var_mtype->class->vft[COLOR_model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
var1 = !var;
if (!var1) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 611);
show_backtrace(1);
}
var2 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__type_layout]))(self) /* type_layout on <self:SeparateCompiler>*/;
var_layout = var2;
/* <var_mtype:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var4 = 0;
} else {
var4 = var_mtype->type->type_table[cltype] == idtype;
}
var_ = var4;
if (var4){
var5 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__runtime_type_analysis]))(self) /* runtime_type_analysis on <self:SeparateCompiler>*/;
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 613);
show_backtrace(1);
} else {
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_types]))(var5) /* live_types on <var5:nullable RapidTypeAnalysis>*/;
}
var7 = ((short int (*)(val*, val*))(var6->class->vft[COLOR_abstract_collection__Collection__has]))(var6, var_mtype) /* has on <var6:HashSet[MClassType]>*/;
var3 = var7;
} else {
var3 = var_;
}
var_is_live = var3;
var8 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__runtime_type_analysis]))(self) /* runtime_type_analysis on <self:SeparateCompiler>*/;
if (var8 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 614);
show_backtrace(1);
} else {
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_cast_types]))(var8) /* live_cast_types on <var8:nullable RapidTypeAnalysis>*/;
}
var10 = ((short int (*)(val*, val*))(var9->class->vft[COLOR_abstract_collection__Collection__has]))(var9, var_mtype) /* has on <var9:HashSet[MType]>*/;
var_is_cast_live = var10;
var11 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MType>*/;
var_c_name = var11;
var12 = NEW_separate_compiler__SeparateCompilerVisitor(&type_separate_compiler__SeparateCompilerVisitor);
((void (*)(val*, val*))(var12->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__init]))(var12, self) /* init on <var12:SeparateCompilerVisitor>*/;
var_v = var12;
if (varonce) {
var13 = varonce;
} else {
var14 = "/* runtime type ";
var15 = 16;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce = var13;
}
if (varonce17) {
var18 = varonce17;
} else {
var19 = " */";
var20 = 3;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
var22 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var22 = array_instance Array[Object] */
var23 = 3;
var24 = NEW_array__NativeArray(var23, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var24)->values[0] = (val*) var13;
((struct instance_array__NativeArray*)var24)->values[1] = (val*) var_mtype;
((struct instance_array__NativeArray*)var24)->values[2] = (val*) var18;
((void (*)(val*, val*, long))(var22->class->vft[COLOR_array__Array__with_native]))(var22, var24, var23) /* with_native on <var22:Array[Object]>*/;
}
var25 = ((val* (*)(val*))(var22->class->vft[COLOR_string__Object__to_s]))(var22) /* to_s on <var22:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var25) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
if (varonce26) {
var27 = varonce26;
} else {
var28 = "type_";
var29 = 5;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
var31 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var31 = array_instance Array[Object] */
var32 = 2;
var33 = NEW_array__NativeArray(var32, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var33)->values[0] = (val*) var27;
((struct instance_array__NativeArray*)var33)->values[1] = (val*) var_c_name;
((void (*)(val*, val*, long))(var31->class->vft[COLOR_array__Array__with_native]))(var31, var33, var32) /* with_native on <var31:Array[Object]>*/;
}
var34 = ((val* (*)(val*))(var31->class->vft[COLOR_string__Object__to_s]))(var31) /* to_s on <var31:Array[Object]>*/;
if (varonce35) {
var36 = varonce35;
} else {
var37 = "extern const struct type type_";
var38 = 30;
var39 = string__NativeString__to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
if (varonce40) {
var41 = varonce40;
} else {
var42 = ";";
var43 = 1;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
var45 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var45 = array_instance Array[Object] */
var46 = 3;
var47 = NEW_array__NativeArray(var46, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var47)->values[0] = (val*) var36;
((struct instance_array__NativeArray*)var47)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var47)->values[2] = (val*) var41;
((void (*)(val*, val*, long))(var45->class->vft[COLOR_array__Array__with_native]))(var45, var47, var46) /* with_native on <var45:Array[Object]>*/;
}
var48 = ((val* (*)(val*))(var45->class->vft[COLOR_string__Object__to_s]))(var45) /* to_s on <var45:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__provide_declaration]))(self, var34, var48) /* provide_declaration on <self:SeparateCompiler>*/;
if (varonce49) {
var50 = varonce49;
} else {
var51 = "const struct type type_";
var52 = 23;
var53 = string__NativeString__to_s_with_length(var51, var52);
var50 = var53;
varonce49 = var50;
}
if (varonce54) {
var55 = varonce54;
} else {
var56 = " = {";
var57 = 4;
var58 = string__NativeString__to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
var59 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var59 = array_instance Array[Object] */
var60 = 3;
var61 = NEW_array__NativeArray(var60, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var61)->values[0] = (val*) var50;
((struct instance_array__NativeArray*)var61)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var61)->values[2] = (val*) var55;
((void (*)(val*, val*, long))(var59->class->vft[COLOR_array__Array__with_native]))(var59, var61, var60) /* with_native on <var59:Array[Object]>*/;
}
var62 = ((val* (*)(val*))(var59->class->vft[COLOR_string__Object__to_s]))(var59) /* to_s on <var59:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var62) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
if (var_is_cast_live){
if (var_layout == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 627);
show_backtrace(1);
} else {
var63 = ((val* (*)(val*))(var_layout->class->vft[COLOR_layout_builders__Layout__ids]))(var_layout) /* ids on <var_layout:nullable Layout[MType]>*/;
}
var64 = ((val* (*)(val*, val*))(var63->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var63, var_mtype) /* [] on <var63:Map[Object, Int](Map[MType, Int])>*/;
if (varonce65) {
var66 = varonce65;
} else {
var67 = ",";
var68 = 1;
var69 = string__NativeString__to_s_with_length(var67, var68);
var66 = var69;
varonce65 = var66;
}
var70 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var70 = array_instance Array[Object] */
var71 = 2;
var72 = NEW_array__NativeArray(var71, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var72)->values[0] = (val*) var64;
((struct instance_array__NativeArray*)var72)->values[1] = (val*) var66;
((void (*)(val*, val*, long))(var70->class->vft[COLOR_array__Array__with_native]))(var70, var72, var71) /* with_native on <var70:Array[Object]>*/;
}
var73 = ((val* (*)(val*))(var70->class->vft[COLOR_string__Object__to_s]))(var70) /* to_s on <var70:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var73) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
} else {
if (varonce74) {
var75 = varonce74;
} else {
var76 = "-1, /*CAST DEAD*/";
var77 = 17;
var78 = string__NativeString__to_s_with_length(var76, var77);
var75 = var78;
varonce74 = var75;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var75) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
}
if (varonce79) {
var80 = varonce79;
} else {
var81 = "\"";
var82 = 1;
var83 = string__NativeString__to_s_with_length(var81, var82);
var80 = var83;
varonce79 = var80;
}
if (varonce84) {
var85 = varonce84;
} else {
var86 = "\", /* class_name_string */";
var87 = 26;
var88 = string__NativeString__to_s_with_length(var86, var87);
var85 = var88;
varonce84 = var85;
}
var89 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var89 = array_instance Array[Object] */
var90 = 3;
var91 = NEW_array__NativeArray(var90, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var91)->values[0] = (val*) var80;
((struct instance_array__NativeArray*)var91)->values[1] = (val*) var_mtype;
((struct instance_array__NativeArray*)var91)->values[2] = (val*) var85;
((void (*)(val*, val*, long))(var89->class->vft[COLOR_array__Array__with_native]))(var89, var91, var90) /* with_native on <var89:Array[Object]>*/;
}
var92 = ((val* (*)(val*))(var89->class->vft[COLOR_string__Object__to_s]))(var89) /* to_s on <var89:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var92) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
if (var_is_cast_live){
/* <var_layout:nullable Layout[MType]> isa PHLayout[MType, MType] */
cltype94 = type_layout_builders__PHLayoutmodel__MTypemodel__MType.color;
idtype95 = type_layout_builders__PHLayoutmodel__MTypemodel__MType.id;
if(var_layout == NULL) {
var93 = 0;
} else {
if(cltype94 >= var_layout->type->table_size) {
var93 = 0;
} else {
var93 = var_layout->type->type_table[cltype94] == idtype95;
}
}
if (var93){
var96 = ((val* (*)(val*))(var_layout->class->vft[COLOR_layout_builders__PHLayout__masks]))(var_layout) /* masks on <var_layout:nullable Layout[MType](PHLayout[MType, MType])>*/;
var97 = ((val* (*)(val*, val*))(var96->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var96, var_mtype) /* [] on <var96:Map[Object, Int](Map[MType, Int])>*/;
if (varonce98) {
var99 = varonce98;
} else {
var100 = ",";
var101 = 1;
var102 = string__NativeString__to_s_with_length(var100, var101);
var99 = var102;
varonce98 = var99;
}
var103 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var103 = array_instance Array[Object] */
var104 = 2;
var105 = NEW_array__NativeArray(var104, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var105)->values[0] = (val*) var97;
((struct instance_array__NativeArray*)var105)->values[1] = (val*) var99;
((void (*)(val*, val*, long))(var103->class->vft[COLOR_array__Array__with_native]))(var103, var105, var104) /* with_native on <var103:Array[Object]>*/;
}
var106 = ((val* (*)(val*))(var103->class->vft[COLOR_string__Object__to_s]))(var103) /* to_s on <var103:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var106) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
} else {
if (var_layout == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 640);
show_backtrace(1);
} else {
var107 = ((val* (*)(val*))(var_layout->class->vft[COLOR_layout_builders__Layout__pos]))(var_layout) /* pos on <var_layout:nullable Layout[MType]>*/;
}
var108 = ((val* (*)(val*, val*))(var107->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var107, var_mtype) /* [] on <var107:Map[Object, Int](Map[MType, Int])>*/;
if (varonce109) {
var110 = varonce109;
} else {
var111 = ",";
var112 = 1;
var113 = string__NativeString__to_s_with_length(var111, var112);
var110 = var113;
varonce109 = var110;
}
var114 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var114 = array_instance Array[Object] */
var115 = 2;
var116 = NEW_array__NativeArray(var115, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var116)->values[0] = (val*) var108;
((struct instance_array__NativeArray*)var116)->values[1] = (val*) var110;
((void (*)(val*, val*, long))(var114->class->vft[COLOR_array__Array__with_native]))(var114, var116, var115) /* with_native on <var114:Array[Object]>*/;
}
var117 = ((val* (*)(val*))(var114->class->vft[COLOR_string__Object__to_s]))(var114) /* to_s on <var114:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var117) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
}
} else {
if (varonce118) {
var119 = varonce118;
} else {
var120 = "-1, /*CAST DEAD*/";
var121 = 17;
var122 = string__NativeString__to_s_with_length(var120, var121);
var119 = var122;
varonce118 = var119;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var119) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
}
/* <var_mtype:MType> isa MNullableType */
cltype124 = type_model__MNullableType.color;
idtype125 = type_model__MNullableType.id;
if(cltype124 >= var_mtype->type->table_size) {
var123 = 0;
} else {
var123 = var_mtype->type->type_table[cltype124] == idtype125;
}
if (var123){
if (varonce126) {
var127 = varonce126;
} else {
var128 = "1,";
var129 = 2;
var130 = string__NativeString__to_s_with_length(var128, var129);
var127 = var130;
varonce126 = var127;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var127) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
} else {
if (varonce131) {
var132 = varonce131;
} else {
var133 = "0,";
var134 = 2;
var135 = string__NativeString__to_s_with_length(var133, var134);
var132 = var135;
varonce131 = var132;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var132) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
}
if (var_is_live){
var_mclass_type = var_mtype;
/* <var_mclass_type:MType> isa MNullableType */
cltype137 = type_model__MNullableType.color;
idtype138 = type_model__MNullableType.id;
if(cltype137 >= var_mclass_type->type->table_size) {
var136 = 0;
} else {
var136 = var_mclass_type->type->type_table[cltype137] == idtype138;
}
if (var136){
var139 = ((val* (*)(val*))(var_mclass_type->class->vft[COLOR_model__MNullableType__mtype]))(var_mclass_type) /* mtype on <var_mclass_type:MType(MNullableType)>*/;
var_mclass_type = var139;
} else {
}
/* <var_mclass_type:MType> isa MClassType */
cltype141 = type_model__MClassType.color;
idtype142 = type_model__MClassType.id;
if(cltype141 >= var_mclass_type->type->table_size) {
var140 = 0;
} else {
var140 = var_mclass_type->type->type_table[cltype141] == idtype142;
}
if (!var140) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 657);
show_backtrace(1);
}
var143 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__resolution_tables]))(self) /* resolution_tables on <self:SeparateCompiler>*/;
var144 = ((val* (*)(val*, val*))(var143->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var143, var_mclass_type) /* [] on <var143:Map[MClassType, Array[nullable MType]]>*/;
var145 = ((short int (*)(val*))(var144->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var144) /* is_empty on <var144:nullable Object(Array[nullable MType])>*/;
if (var145){
if (varonce146) {
var147 = varonce146;
} else {
var148 = "NULL, /*NO RESOLUTIONS*/";
var149 = 24;
var150 = string__NativeString__to_s_with_length(var148, var149);
var147 = var150;
varonce146 = var147;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var147) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
} else {
((void (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__compile_type_resolution_table]))(self, var_mtype) /* compile_type_resolution_table on <self:SeparateCompiler>*/;
if (varonce151) {
var152 = varonce151;
} else {
var153 = "resolution_table_";
var154 = 17;
var155 = string__NativeString__to_s_with_length(var153, var154);
var152 = var155;
varonce151 = var152;
}
var156 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var156 = array_instance Array[Object] */
var157 = 2;
var158 = NEW_array__NativeArray(var157, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var158)->values[0] = (val*) var152;
((struct instance_array__NativeArray*)var158)->values[1] = (val*) var_c_name;
((void (*)(val*, val*, long))(var156->class->vft[COLOR_array__Array__with_native]))(var156, var158, var157) /* with_native on <var156:Array[Object]>*/;
}
var159 = ((val* (*)(val*))(var156->class->vft[COLOR_string__Object__to_s]))(var156) /* to_s on <var156:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(var_v, var159) /* require_declaration on <var_v:SeparateCompilerVisitor>*/;
if (varonce160) {
var161 = varonce160;
} else {
var162 = "&resolution_table_";
var163 = 18;
var164 = string__NativeString__to_s_with_length(var162, var163);
var161 = var164;
varonce160 = var161;
}
if (varonce165) {
var166 = varonce165;
} else {
var167 = ",";
var168 = 1;
var169 = string__NativeString__to_s_with_length(var167, var168);
var166 = var169;
varonce165 = var166;
}
var170 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var170 = array_instance Array[Object] */
var171 = 3;
var172 = NEW_array__NativeArray(var171, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var172)->values[0] = (val*) var161;
((struct instance_array__NativeArray*)var172)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var172)->values[2] = (val*) var166;
((void (*)(val*, val*, long))(var170->class->vft[COLOR_array__Array__with_native]))(var170, var172, var171) /* with_native on <var170:Array[Object]>*/;
}
var173 = ((val* (*)(val*))(var170->class->vft[COLOR_string__Object__to_s]))(var170) /* to_s on <var170:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var173) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
}
} else {
if (varonce174) {
var175 = varonce174;
} else {
var176 = "NULL, /*DEAD*/";
var177 = 14;
var178 = string__NativeString__to_s_with_length(var176, var177);
var175 = var178;
varonce174 = var175;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var175) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
}
if (var_is_live){
var179 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__type_tables]))(self) /* type_tables on <self:SeparateCompiler>*/;
var180 = ((val* (*)(val*, val*))(var179->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var179, var_mtype) /* [] on <var179:Map[MType, Array[nullable MType]]>*/;
var181 = ((long (*)(val*))(var180->class->vft[COLOR_abstract_collection__Collection__length]))(var180) /* length on <var180:nullable Object(Array[nullable MType])>*/;
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
var190 = BOX_kernel__Int(var181); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var189)->values[0] = (val*) var190;
((struct instance_array__NativeArray*)var189)->values[1] = (val*) var183;
((void (*)(val*, val*, long))(var187->class->vft[COLOR_array__Array__with_native]))(var187, var189, var188) /* with_native on <var187:Array[Object]>*/;
}
var191 = ((val* (*)(val*))(var187->class->vft[COLOR_string__Object__to_s]))(var187) /* to_s on <var187:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var191) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
if (varonce192) {
var193 = varonce192;
} else {
var194 = "{";
var195 = 1;
var196 = string__NativeString__to_s_with_length(var194, var195);
var193 = var196;
varonce192 = var193;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var193) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
var197 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__type_tables]))(self) /* type_tables on <self:SeparateCompiler>*/;
var198 = ((val* (*)(val*, val*))(var197->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var197, var_mtype) /* [] on <var197:Map[MType, Array[nullable MType]]>*/;
var199 = ((val* (*)(val*))(var198->class->vft[COLOR_abstract_collection__Collection__iterator]))(var198) /* iterator on <var198:nullable Object(Array[nullable MType])>*/;
for(;;) {
var200 = ((short int (*)(val*))(var199->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var199) /* is_ok on <var199:Iterator[nullable Object]>*/;
if(!var200) break;
var201 = ((val* (*)(val*))(var199->class->vft[COLOR_abstract_collection__Iterator__item]))(var199) /* item on <var199:Iterator[nullable Object]>*/;
var_stype = var201;
var202 = NULL;
if (var_stype == NULL) {
var203 = 1; /* is null */
} else {
var203 = 0; /* arg is null but recv is not */
}
if (var203){
if (varonce204) {
var205 = varonce204;
} else {
var206 = "-1, /* empty */";
var207 = 15;
var208 = string__NativeString__to_s_with_length(var206, var207);
var205 = var208;
varonce204 = var205;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var205) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
} else {
if (var_layout == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 677);
show_backtrace(1);
} else {
var209 = ((val* (*)(val*))(var_layout->class->vft[COLOR_layout_builders__Layout__ids]))(var_layout) /* ids on <var_layout:nullable Layout[MType]>*/;
}
var210 = ((val* (*)(val*, val*))(var209->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var209, var_stype) /* [] on <var209:Map[Object, Int](Map[MType, Int])>*/;
if (varonce211) {
var212 = varonce211;
} else {
var213 = ", /* ";
var214 = 5;
var215 = string__NativeString__to_s_with_length(var213, var214);
var212 = var215;
varonce211 = var212;
}
if (varonce216) {
var217 = varonce216;
} else {
var218 = " */";
var219 = 3;
var220 = string__NativeString__to_s_with_length(var218, var219);
var217 = var220;
varonce216 = var217;
}
var221 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var221 = array_instance Array[Object] */
var222 = 4;
var223 = NEW_array__NativeArray(var222, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var223)->values[0] = (val*) var210;
((struct instance_array__NativeArray*)var223)->values[1] = (val*) var212;
((struct instance_array__NativeArray*)var223)->values[2] = (val*) var_stype;
((struct instance_array__NativeArray*)var223)->values[3] = (val*) var217;
((void (*)(val*, val*, long))(var221->class->vft[COLOR_array__Array__with_native]))(var221, var223, var222) /* with_native on <var221:Array[Object]>*/;
}
var224 = ((val* (*)(val*))(var221->class->vft[COLOR_string__Object__to_s]))(var221) /* to_s on <var221:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var224) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
}
CONTINUE_label: (void)0;
((void (*)(val*))(var199->class->vft[COLOR_abstract_collection__Iterator__next]))(var199) /* next on <var199:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
if (varonce225) {
var226 = varonce225;
} else {
var227 = "},";
var228 = 2;
var229 = string__NativeString__to_s_with_length(var227, var228);
var226 = var229;
varonce225 = var226;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var226) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
} else {
if (varonce230) {
var231 = varonce230;
} else {
var232 = "0, {}, /*DEAD TYPE*/";
var233 = 20;
var234 = string__NativeString__to_s_with_length(var232, var233);
var231 = var234;
varonce230 = var231;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var231) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
}
if (varonce235) {
var236 = varonce235;
} else {
var237 = "};";
var238 = 2;
var239 = string__NativeString__to_s_with_length(var237, var238);
var236 = var239;
varonce235 = var236;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var236) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#compile_type_to_c for (self: Object, MType) */
void VIRTUAL_separate_compiler__SeparateCompiler__compile_type_to_c(val* self, val* p0) {
separate_compiler__SeparateCompiler__compile_type_to_c(self, p0);
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#compile_type_resolution_table for (self: SeparateCompiler, MType) */
void separate_compiler__SeparateCompiler__compile_type_resolution_table(val* self, val* p0) {
val* var_mtype /* var mtype: MType */;
short int var /* : Bool */;
int cltype;
int idtype;
val* var1 /* : MType */;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const char* var_class_name;
val* var_mclass_type /* var mclass_type: MClassType */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
val* var9 /* : nullable Layout[MType] */;
val* var_layout /* var layout: nullable Layout[MType] */;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var15 /* : Array[Object] */;
long var16 /* : Int */;
val* var17 /* : NativeArray[Object] */;
val* var18 /* : String */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : String */;
val* var24 /* : String */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
long var28 /* : Int */;
val* var29 /* : String */;
val* var30 /* : Array[Object] */;
long var31 /* : Int */;
val* var32 /* : NativeArray[Object] */;
val* var33 /* : String */;
val* var34 /* : AbstractCompilerVisitor */;
val* var_v /* var v: SeparateCompilerVisitor */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
long var38 /* : Int */;
val* var39 /* : String */;
val* var40 /* : String */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
long var44 /* : Int */;
val* var45 /* : String */;
val* var46 /* : Array[Object] */;
long var47 /* : Int */;
val* var48 /* : NativeArray[Object] */;
val* var49 /* : String */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
val* var53 /* : Map[Object, Int] */;
val* var54 /* : nullable Object */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
long var58 /* : Int */;
val* var59 /* : String */;
val* var60 /* : Array[Object] */;
long var61 /* : Int */;
val* var62 /* : NativeArray[Object] */;
val* var63 /* : String */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
long var67 /* : Int */;
val* var68 /* : String */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
long var72 /* : Int */;
val* var73 /* : String */;
val* var74 /* : Map[MClassType, Array[nullable MType]] */;
val* var75 /* : nullable Object */;
val* var76 /* : Iterator[nullable Object] */;
short int var77 /* : Bool */;
val* var78 /* : nullable Object */;
val* var_t /* var t: nullable MType */;
val* var79 /* : null */;
short int var80 /* : Bool */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
long var84 /* : Int */;
val* var85 /* : String */;
val* var86 /* : MModule */;
short int var87 /* : Bool */;
val* var88 /* : MType */;
val* var_tv /* var tv: MType */;
val* var89 /* : nullable Layout[MType] */;
val* var90 /* : Map[Object, Int] */;
short int var91 /* : Bool */;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : NativeString */;
long var95 /* : Int */;
val* var96 /* : String */;
val* var97 /* : String */;
val* var98 /* : Array[Object] */;
long var99 /* : Int */;
val* var100 /* : NativeArray[Object] */;
val* var101 /* : String */;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : NativeString */;
long var105 /* : Int */;
val* var106 /* : String */;
val* var107 /* : String */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : NativeString */;
long var111 /* : Int */;
val* var112 /* : String */;
static val* varonce113;
val* var114 /* : String */;
char* var115 /* : NativeString */;
long var116 /* : Int */;
val* var117 /* : String */;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : NativeString */;
long var121 /* : Int */;
val* var122 /* : String */;
val* var123 /* : Array[Object] */;
long var124 /* : Int */;
val* var125 /* : NativeArray[Object] */;
val* var126 /* : String */;
static val* varonce127;
val* var128 /* : String */;
char* var129 /* : NativeString */;
long var130 /* : Int */;
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
static val* varonce146;
val* var147 /* : String */;
char* var148 /* : NativeString */;
long var149 /* : Int */;
val* var150 /* : String */;
static val* varonce151;
val* var152 /* : String */;
char* var153 /* : NativeString */;
long var154 /* : Int */;
val* var155 /* : String */;
var_mtype = p0;
/* <var_mtype:MType> isa MNullableType */
cltype = type_model__MNullableType.color;
idtype = type_model__MNullableType.id;
if(cltype >= var_mtype->type->table_size) {
var = 0;
} else {
var = var_mtype->type->type_table[cltype] == idtype;
}
if (var){
var1 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MNullableType__mtype]))(var_mtype) /* mtype on <var_mtype:MType(MNullableType)>*/;
/* <var1:MType> isa MClassType */
cltype3 = type_model__MClassType.color;
idtype4 = type_model__MClassType.id;
if(cltype3 >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype3] == idtype4;
}
if (!var2) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 691);
show_backtrace(1);
}
var_mclass_type = var1;
} else {
/* <var_mtype:MType> isa MClassType */
cltype6 = type_model__MClassType.color;
idtype7 = type_model__MClassType.id;
if(cltype6 >= var_mtype->type->table_size) {
var5 = 0;
} else {
var5 = var_mtype->type->type_table[cltype6] == idtype7;
}
if (!var5) {
var_class_name8 = var_mtype == NULL ? "null" : var_mtype->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name8);
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 693);
show_backtrace(1);
}
var_mclass_type = var_mtype;
}
var9 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__resolution_layout]))(self) /* resolution_layout on <self:SeparateCompiler>*/;
var_layout = var9;
if (varonce) {
var10 = varonce;
} else {
var11 = "resolution_table_";
var12 = 17;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce = var10;
}
var14 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MType>*/;
var15 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var15 = array_instance Array[Object] */
var16 = 2;
var17 = NEW_array__NativeArray(var16, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var17)->values[0] = (val*) var10;
((struct instance_array__NativeArray*)var17)->values[1] = (val*) var14;
((void (*)(val*, val*, long))(var15->class->vft[COLOR_array__Array__with_native]))(var15, var17, var16) /* with_native on <var15:Array[Object]>*/;
}
var18 = ((val* (*)(val*))(var15->class->vft[COLOR_string__Object__to_s]))(var15) /* to_s on <var15:Array[Object]>*/;
if (varonce19) {
var20 = varonce19;
} else {
var21 = "extern const struct types resolution_table_";
var22 = 43;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
var24 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MType>*/;
if (varonce25) {
var26 = varonce25;
} else {
var27 = ";";
var28 = 1;
var29 = string__NativeString__to_s_with_length(var27, var28);
var26 = var29;
varonce25 = var26;
}
var30 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var30 = array_instance Array[Object] */
var31 = 3;
var32 = NEW_array__NativeArray(var31, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var32)->values[0] = (val*) var20;
((struct instance_array__NativeArray*)var32)->values[1] = (val*) var24;
((struct instance_array__NativeArray*)var32)->values[2] = (val*) var26;
((void (*)(val*, val*, long))(var30->class->vft[COLOR_array__Array__with_native]))(var30, var32, var31) /* with_native on <var30:Array[Object]>*/;
}
var33 = ((val* (*)(val*))(var30->class->vft[COLOR_string__Object__to_s]))(var30) /* to_s on <var30:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__provide_declaration]))(self, var18, var33) /* provide_declaration on <self:SeparateCompiler>*/;
var34 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_visitor]))(self) /* new_visitor on <self:SeparateCompiler>*/;
var_v = var34;
if (varonce35) {
var36 = varonce35;
} else {
var37 = "const struct types resolution_table_";
var38 = 36;
var39 = string__NativeString__to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
var40 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MType>*/;
if (varonce41) {
var42 = varonce41;
} else {
var43 = " = {";
var44 = 4;
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
((void (*)(val*, val*, long))(var46->class->vft[COLOR_array__Array__with_native]))(var46, var48, var47) /* with_native on <var46:Array[Object]>*/;
}
var49 = ((val* (*)(val*))(var46->class->vft[COLOR_string__Object__to_s]))(var46) /* to_s on <var46:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var49) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
/* <var_layout:nullable Layout[MType]> isa PHLayout[MClassType, MType] */
cltype51 = type_layout_builders__PHLayoutmodel__MClassTypemodel__MType.color;
idtype52 = type_layout_builders__PHLayoutmodel__MClassTypemodel__MType.id;
if(var_layout == NULL) {
var50 = 0;
} else {
if(cltype51 >= var_layout->type->table_size) {
var50 = 0;
} else {
var50 = var_layout->type->type_table[cltype51] == idtype52;
}
}
if (var50){
var53 = ((val* (*)(val*))(var_layout->class->vft[COLOR_layout_builders__PHLayout__masks]))(var_layout) /* masks on <var_layout:nullable Layout[MType](PHLayout[MClassType, MType])>*/;
var54 = ((val* (*)(val*, val*))(var53->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var53, var_mclass_type) /* [] on <var53:Map[Object, Int](Map[MClassType, Int])>*/;
if (varonce55) {
var56 = varonce55;
} else {
var57 = ",";
var58 = 1;
var59 = string__NativeString__to_s_with_length(var57, var58);
var56 = var59;
varonce55 = var56;
}
var60 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var60 = array_instance Array[Object] */
var61 = 2;
var62 = NEW_array__NativeArray(var61, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var62)->values[0] = (val*) var54;
((struct instance_array__NativeArray*)var62)->values[1] = (val*) var56;
((void (*)(val*, val*, long))(var60->class->vft[COLOR_array__Array__with_native]))(var60, var62, var61) /* with_native on <var60:Array[Object]>*/;
}
var63 = ((val* (*)(val*))(var60->class->vft[COLOR_string__Object__to_s]))(var60) /* to_s on <var60:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var63) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
} else {
if (varonce64) {
var65 = varonce64;
} else {
var66 = "0, /* dummy */";
var67 = 14;
var68 = string__NativeString__to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var65) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
}
if (varonce69) {
var70 = varonce69;
} else {
var71 = "{";
var72 = 1;
var73 = string__NativeString__to_s_with_length(var71, var72);
var70 = var73;
varonce69 = var70;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var70) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
var74 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__resolution_tables]))(self) /* resolution_tables on <self:SeparateCompiler>*/;
var75 = ((val* (*)(val*, val*))(var74->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var74, var_mclass_type) /* [] on <var74:Map[MClassType, Array[nullable MType]]>*/;
var76 = ((val* (*)(val*))(var75->class->vft[COLOR_abstract_collection__Collection__iterator]))(var75) /* iterator on <var75:nullable Object(Array[nullable MType])>*/;
for(;;) {
var77 = ((short int (*)(val*))(var76->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var76) /* is_ok on <var76:Iterator[nullable Object]>*/;
if(!var77) break;
var78 = ((val* (*)(val*))(var76->class->vft[COLOR_abstract_collection__Iterator__item]))(var76) /* item on <var76:Iterator[nullable Object]>*/;
var_t = var78;
var79 = NULL;
if (var_t == NULL) {
var80 = 1; /* is null */
} else {
var80 = 0; /* arg is null but recv is not */
}
if (var80){
if (varonce81) {
var82 = varonce81;
} else {
var83 = "NULL, /* empty */";
var84 = 17;
var85 = string__NativeString__to_s_with_length(var83, var84);
var82 = var85;
varonce81 = var82;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var82) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
} else {
var86 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:SeparateCompiler>*/;
var87 = 1;
var88 = ((val* (*)(val*, val*, val*, val*, short int))(var_t->class->vft[COLOR_model__MType__resolve_for]))(var_t, var_mclass_type, var_mclass_type, var86, var87) /* resolve_for on <var_t:nullable MType(MType)>*/;
var_tv = var88;
var89 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__type_layout]))(self) /* type_layout on <self:SeparateCompiler>*/;
if (var89 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 719);
show_backtrace(1);
} else {
var90 = ((val* (*)(val*))(var89->class->vft[COLOR_layout_builders__Layout__ids]))(var89) /* ids on <var89:nullable Layout[MType]>*/;
}
var91 = ((short int (*)(val*, val*))(var90->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var90, var_tv) /* has_key on <var90:Map[Object, Int](Map[MType, Int])>*/;
if (var91){
if (varonce92) {
var93 = varonce92;
} else {
var94 = "type_";
var95 = 5;
var96 = string__NativeString__to_s_with_length(var94, var95);
var93 = var96;
varonce92 = var93;
}
var97 = ((val* (*)(val*))(var_tv->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_tv) /* c_name on <var_tv:MType>*/;
var98 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var98 = array_instance Array[Object] */
var99 = 2;
var100 = NEW_array__NativeArray(var99, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var100)->values[0] = (val*) var93;
((struct instance_array__NativeArray*)var100)->values[1] = (val*) var97;
((void (*)(val*, val*, long))(var98->class->vft[COLOR_array__Array__with_native]))(var98, var100, var99) /* with_native on <var98:Array[Object]>*/;
}
var101 = ((val* (*)(val*))(var98->class->vft[COLOR_string__Object__to_s]))(var98) /* to_s on <var98:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(var_v, var101) /* require_declaration on <var_v:SeparateCompilerVisitor>*/;
if (varonce102) {
var103 = varonce102;
} else {
var104 = "&type_";
var105 = 6;
var106 = string__NativeString__to_s_with_length(var104, var105);
var103 = var106;
varonce102 = var103;
}
var107 = ((val* (*)(val*))(var_tv->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_tv) /* c_name on <var_tv:MType>*/;
if (varonce108) {
var109 = varonce108;
} else {
var110 = ", /* ";
var111 = 5;
var112 = string__NativeString__to_s_with_length(var110, var111);
var109 = var112;
varonce108 = var109;
}
if (varonce113) {
var114 = varonce113;
} else {
var115 = ": ";
var116 = 2;
var117 = string__NativeString__to_s_with_length(var115, var116);
var114 = var117;
varonce113 = var114;
}
if (varonce118) {
var119 = varonce118;
} else {
var120 = " */";
var121 = 3;
var122 = string__NativeString__to_s_with_length(var120, var121);
var119 = var122;
varonce118 = var119;
}
var123 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var123 = array_instance Array[Object] */
var124 = 7;
var125 = NEW_array__NativeArray(var124, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var125)->values[0] = (val*) var103;
((struct instance_array__NativeArray*)var125)->values[1] = (val*) var107;
((struct instance_array__NativeArray*)var125)->values[2] = (val*) var109;
((struct instance_array__NativeArray*)var125)->values[3] = (val*) var_t;
((struct instance_array__NativeArray*)var125)->values[4] = (val*) var114;
((struct instance_array__NativeArray*)var125)->values[5] = (val*) var_tv;
((struct instance_array__NativeArray*)var125)->values[6] = (val*) var119;
((void (*)(val*, val*, long))(var123->class->vft[COLOR_array__Array__with_native]))(var123, var125, var124) /* with_native on <var123:Array[Object]>*/;
}
var126 = ((val* (*)(val*))(var123->class->vft[COLOR_string__Object__to_s]))(var123) /* to_s on <var123:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var126) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
} else {
if (varonce127) {
var128 = varonce127;
} else {
var129 = "NULL, /* empty (";
var130 = 16;
var131 = string__NativeString__to_s_with_length(var129, var130);
var128 = var131;
varonce127 = var128;
}
if (varonce132) {
var133 = varonce132;
} else {
var134 = ": ";
var135 = 2;
var136 = string__NativeString__to_s_with_length(var134, var135);
var133 = var136;
varonce132 = var133;
}
if (varonce137) {
var138 = varonce137;
} else {
var139 = " not a live type) */";
var140 = 20;
var141 = string__NativeString__to_s_with_length(var139, var140);
var138 = var141;
varonce137 = var138;
}
var142 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var142 = array_instance Array[Object] */
var143 = 5;
var144 = NEW_array__NativeArray(var143, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var144)->values[0] = (val*) var128;
((struct instance_array__NativeArray*)var144)->values[1] = (val*) var_t;
((struct instance_array__NativeArray*)var144)->values[2] = (val*) var133;
((struct instance_array__NativeArray*)var144)->values[3] = (val*) var_tv;
((struct instance_array__NativeArray*)var144)->values[4] = (val*) var138;
((void (*)(val*, val*, long))(var142->class->vft[COLOR_array__Array__with_native]))(var142, var144, var143) /* with_native on <var142:Array[Object]>*/;
}
var145 = ((val* (*)(val*))(var142->class->vft[COLOR_string__Object__to_s]))(var142) /* to_s on <var142:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var145) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
}
}
CONTINUE_label: (void)0;
((void (*)(val*))(var76->class->vft[COLOR_abstract_collection__Iterator__next]))(var76) /* next on <var76:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
if (varonce146) {
var147 = varonce146;
} else {
var148 = "}";
var149 = 1;
var150 = string__NativeString__to_s_with_length(var148, var149);
var147 = var150;
varonce146 = var147;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var147) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
if (varonce151) {
var152 = varonce151;
} else {
var153 = "};";
var154 = 2;
var155 = string__NativeString__to_s_with_length(var153, var154);
var152 = var155;
varonce151 = var152;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var152) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#compile_type_resolution_table for (self: Object, MType) */
void VIRTUAL_separate_compiler__SeparateCompiler__compile_type_resolution_table(val* self, val* p0) {
separate_compiler__SeparateCompiler__compile_type_resolution_table(self, p0);
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#compile_class_to_c for (self: SeparateCompiler, MClass) */
void separate_compiler__SeparateCompiler__compile_class_to_c(val* self, val* p0) {
val* var_mclass /* var mclass: MClass */;
val* var /* : MClassDef */;
val* var1 /* : MClassType */;
val* var_mtype /* var mtype: MClassType */;
val* var2 /* : String */;
val* var_c_name /* var c_name: String */;
val* var3 /* : String */;
val* var_c_instance_name /* var c_instance_name: String */;
val* var4 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var5 /* : nullable Object */;
val* var_vft /* var vft: Array[nullable MPropDef] */;
val* var6 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var7 /* : nullable Object */;
val* var_attrs /* var attrs: Array[nullable MPropDef] */;
val* var8 /* : AbstractCompilerVisitor */;
val* var_v /* var v: SeparateCompilerVisitor */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : nullable RapidTypeAnalysis */;
val* var13 /* : null */;
short int var14 /* : Bool */;
short int var_ /* var : Bool */;
val* var15 /* : nullable RapidTypeAnalysis */;
val* var16 /* : HashSet[MClass] */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var_19 /* var : Bool */;
val* var20 /* : String */;
static val* varonce;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : String */;
short int var25 /* : Bool */;
short int var_26 /* var : Bool */;
val* var27 /* : String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : String */;
short int var33 /* : Bool */;
short int var_is_dead /* var is_dead: Bool */;
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
short int var48 /* : Bool */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
long var52 /* : Int */;
val* var53 /* : String */;
val* var54 /* : Array[Object] */;
long var55 /* : Int */;
val* var56 /* : NativeArray[Object] */;
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
val* var68 /* : Array[Object] */;
long var69 /* : Int */;
val* var70 /* : NativeArray[Object] */;
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
val* var82 /* : Array[Object] */;
long var83 /* : Int */;
val* var84 /* : NativeArray[Object] */;
val* var85 /* : String */;
long var86 /* : Int */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : NativeString */;
long var90 /* : Int */;
val* var91 /* : String */;
val* var92 /* : Array[Object] */;
long var93 /* : Int */;
val* var94 /* : NativeArray[Object] */;
val* var95 /* : Object */;
val* var96 /* : String */;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : NativeString */;
long var100 /* : Int */;
val* var101 /* : String */;
val* var102 /* : Range[Int] */;
long var103 /* : Int */;
long var104 /* : Int */;
val* var105 /* : Discrete */;
val* var106 /* : Discrete */;
val* var107 /* : Iterator[nullable Object] */;
short int var108 /* : Bool */;
val* var109 /* : nullable Object */;
long var_i /* var i: Int */;
long var110 /* : Int */;
val* var111 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: nullable MPropDef */;
val* var112 /* : null */;
short int var113 /* : Bool */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : NativeString */;
long var117 /* : Int */;
val* var118 /* : String */;
short int var119 /* : Bool */;
int cltype;
int idtype;
val* var120 /* : AbstractRuntimeFunction */;
val* var_rf /* var rf: AbstractRuntimeFunction */;
val* var121 /* : String */;
static val* varonce122;
val* var123 /* : String */;
char* var124 /* : NativeString */;
long var125 /* : Int */;
val* var126 /* : String */;
val* var127 /* : String */;
static val* varonce128;
val* var129 /* : String */;
char* var130 /* : NativeString */;
long var131 /* : Int */;
val* var132 /* : String */;
val* var133 /* : MModule */;
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
static val* varonce144;
val* var145 /* : String */;
char* var146 /* : NativeString */;
long var147 /* : Int */;
val* var148 /* : String */;
val* var149 /* : Array[Object] */;
long var150 /* : Int */;
val* var151 /* : NativeArray[Object] */;
val* var152 /* : String */;
static val* varonce153;
val* var154 /* : String */;
char* var155 /* : NativeString */;
long var156 /* : Int */;
val* var157 /* : String */;
static val* varonce158;
val* var159 /* : String */;
char* var160 /* : NativeString */;
long var161 /* : Int */;
val* var162 /* : String */;
val* var163 /* : String */;
static val* varonce164;
val* var165 /* : String */;
char* var166 /* : NativeString */;
long var167 /* : Int */;
val* var168 /* : String */;
short int var169 /* : Bool */;
short int var170 /* : Bool */;
val* var171 /* : MClass */;
val* var172 /* : String */;
static val* varonce173;
val* var174 /* : String */;
char* var175 /* : NativeString */;
long var176 /* : Int */;
val* var177 /* : String */;
short int var178 /* : Bool */;
short int var_179 /* var : Bool */;
val* var180 /* : MClass */;
val* var181 /* : MClassKind */;
val* var182 /* : MClassKind */;
short int var183 /* : Bool */;
val* var184 /* : CodeWriter */;
static val* varonce185;
val* var186 /* : String */;
char* var187 /* : NativeString */;
long var188 /* : Int */;
val* var189 /* : String */;
static val* varonce190;
val* var191 /* : String */;
char* var192 /* : NativeString */;
long var193 /* : Int */;
val* var194 /* : String */;
val* var195 /* : Array[Object] */;
long var196 /* : Int */;
val* var197 /* : NativeArray[Object] */;
val* var198 /* : String */;
val* var199 /* : CodeWriter */;
static val* varonce200;
val* var201 /* : String */;
char* var202 /* : NativeString */;
long var203 /* : Int */;
val* var204 /* : String */;
val* var205 /* : CodeWriter */;
static val* varonce206;
val* var207 /* : String */;
char* var208 /* : NativeString */;
long var209 /* : Int */;
val* var210 /* : String */;
val* var211 /* : CodeWriter */;
val* var212 /* : String */;
static val* varonce213;
val* var214 /* : String */;
char* var215 /* : NativeString */;
long var216 /* : Int */;
val* var217 /* : String */;
val* var218 /* : Array[Object] */;
long var219 /* : Int */;
val* var220 /* : NativeArray[Object] */;
val* var221 /* : String */;
val* var222 /* : CodeWriter */;
static val* varonce223;
val* var224 /* : String */;
char* var225 /* : NativeString */;
long var226 /* : Int */;
val* var227 /* : String */;
val* var228 /* : nullable RapidTypeAnalysis */;
val* var229 /* : HashSet[MClassType] */;
short int var230 /* : Bool */;
short int var231 /* : Bool */;
static val* varonce232;
val* var233 /* : String */;
char* var234 /* : NativeString */;
long var235 /* : Int */;
val* var236 /* : String */;
val* var237 /* : Array[Object] */;
long var238 /* : Int */;
val* var239 /* : NativeArray[Object] */;
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
val* var251 /* : String */;
static val* varonce252;
val* var253 /* : String */;
char* var254 /* : NativeString */;
long var255 /* : Int */;
val* var256 /* : String */;
val* var257 /* : Array[Object] */;
long var258 /* : Int */;
val* var259 /* : NativeArray[Object] */;
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
val* var271 /* : Array[Object] */;
long var272 /* : Int */;
val* var273 /* : NativeArray[Object] */;
val* var274 /* : String */;
static val* varonce275;
val* var276 /* : String */;
char* var277 /* : NativeString */;
long var278 /* : Int */;
val* var279 /* : String */;
val* var280 /* : String */;
static val* varonce281;
val* var282 /* : String */;
char* var283 /* : NativeString */;
long var284 /* : Int */;
val* var285 /* : String */;
val* var286 /* : String */;
static val* varonce287;
val* var288 /* : String */;
char* var289 /* : NativeString */;
long var290 /* : Int */;
val* var291 /* : String */;
val* var292 /* : Array[Object] */;
long var293 /* : Int */;
val* var294 /* : NativeArray[Object] */;
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
val* var311 /* : Array[Object] */;
long var312 /* : Int */;
val* var313 /* : NativeArray[Object] */;
val* var314 /* : String */;
static val* varonce315;
val* var316 /* : String */;
char* var317 /* : NativeString */;
long var318 /* : Int */;
val* var319 /* : String */;
val* var320 /* : Array[Object] */;
long var321 /* : Int */;
val* var322 /* : NativeArray[Object] */;
val* var323 /* : String */;
static val* varonce324;
val* var325 /* : String */;
char* var326 /* : NativeString */;
long var327 /* : Int */;
val* var328 /* : String */;
static val* varonce329;
val* var330 /* : String */;
char* var331 /* : NativeString */;
long var332 /* : Int */;
val* var333 /* : String */;
val* var334 /* : Array[Object] */;
long var335 /* : Int */;
val* var336 /* : NativeArray[Object] */;
val* var337 /* : String */;
static val* varonce338;
val* var339 /* : String */;
char* var340 /* : NativeString */;
long var341 /* : Int */;
val* var342 /* : String */;
val* var343 /* : Array[Object] */;
long var344 /* : Int */;
val* var345 /* : NativeArray[Object] */;
val* var346 /* : String */;
static val* varonce347;
val* var348 /* : String */;
char* var349 /* : NativeString */;
long var350 /* : Int */;
val* var351 /* : String */;
static val* varonce352;
val* var353 /* : String */;
char* var354 /* : NativeString */;
long var355 /* : Int */;
val* var356 /* : String */;
val* var357 /* : Array[Object] */;
long var358 /* : Int */;
val* var359 /* : NativeArray[Object] */;
val* var360 /* : String */;
static val* varonce361;
val* var362 /* : String */;
char* var363 /* : NativeString */;
long var364 /* : Int */;
val* var365 /* : String */;
static val* varonce366;
val* var367 /* : String */;
char* var368 /* : NativeString */;
long var369 /* : Int */;
val* var370 /* : String */;
static val* varonce371;
val* var372 /* : String */;
char* var373 /* : NativeString */;
long var374 /* : Int */;
val* var375 /* : String */;
val* var376 /* : String */;
static val* varonce377;
val* var378 /* : String */;
char* var379 /* : NativeString */;
long var380 /* : Int */;
val* var381 /* : String */;
short int var382 /* : Bool */;
val* var383 /* : CodeWriter */;
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
val* var398 /* : CodeWriter */;
static val* varonce399;
val* var400 /* : String */;
char* var401 /* : NativeString */;
long var402 /* : Int */;
val* var403 /* : String */;
val* var404 /* : CodeWriter */;
static val* varonce405;
val* var406 /* : String */;
char* var407 /* : NativeString */;
long var408 /* : Int */;
val* var409 /* : String */;
val* var410 /* : CodeWriter */;
static val* varonce411;
val* var412 /* : String */;
char* var413 /* : NativeString */;
long var414 /* : Int */;
val* var415 /* : String */;
val* var416 /* : CodeWriter */;
static val* varonce417;
val* var418 /* : String */;
char* var419 /* : NativeString */;
long var420 /* : Int */;
val* var421 /* : String */;
static val* varonce422;
val* var423 /* : String */;
char* var424 /* : NativeString */;
long var425 /* : Int */;
val* var426 /* : String */;
val* var427 /* : Array[Object] */;
long var428 /* : Int */;
val* var429 /* : NativeArray[Object] */;
val* var430 /* : String */;
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
val* var442 /* : Array[Object] */;
long var443 /* : Int */;
val* var444 /* : NativeArray[Object] */;
val* var445 /* : String */;
static val* varonce446;
val* var447 /* : String */;
char* var448 /* : NativeString */;
long var449 /* : Int */;
val* var450 /* : String */;
static val* varonce451;
val* var452 /* : String */;
char* var453 /* : NativeString */;
long var454 /* : Int */;
val* var455 /* : String */;
val* var456 /* : Array[Object] */;
long var457 /* : Int */;
val* var458 /* : NativeArray[Object] */;
val* var459 /* : String */;
val* var460 /* : String */;
static val* varonce461;
val* var462 /* : String */;
char* var463 /* : NativeString */;
long var464 /* : Int */;
val* var465 /* : String */;
static val* varonce466;
val* var467 /* : String */;
char* var468 /* : NativeString */;
long var469 /* : Int */;
val* var470 /* : String */;
val* var471 /* : Array[Object] */;
long var472 /* : Int */;
val* var473 /* : NativeArray[Object] */;
val* var474 /* : String */;
static val* varonce475;
val* var476 /* : String */;
char* var477 /* : NativeString */;
long var478 /* : Int */;
val* var479 /* : String */;
val* var480 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
short int var481 /* : Bool */;
val* var482 /* : Array[MType] */;
val* var483 /* : nullable Object */;
val* var_mtype_elt /* var mtype_elt: MType */;
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
val* var509 /* : Array[Object] */;
long var510 /* : Int */;
val* var511 /* : NativeArray[Object] */;
val* var512 /* : String */;
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
val* var523 /* : Array[Object] */;
long var524 /* : Int */;
val* var525 /* : NativeArray[Object] */;
val* var526 /* : String */;
static val* varonce527;
val* var528 /* : String */;
char* var529 /* : NativeString */;
long var530 /* : Int */;
val* var531 /* : String */;
static val* varonce532;
val* var533 /* : String */;
char* var534 /* : NativeString */;
long var535 /* : Int */;
val* var536 /* : String */;
val* var537 /* : Array[Object] */;
long var538 /* : Int */;
val* var539 /* : NativeArray[Object] */;
val* var540 /* : String */;
static val* varonce541;
val* var542 /* : String */;
char* var543 /* : NativeString */;
long var544 /* : Int */;
val* var545 /* : String */;
static val* varonce546;
val* var547 /* : String */;
char* var548 /* : NativeString */;
long var549 /* : Int */;
val* var550 /* : String */;
val* var551 /* : Array[Object] */;
long var552 /* : Int */;
val* var553 /* : NativeArray[Object] */;
val* var554 /* : String */;
static val* varonce555;
val* var556 /* : String */;
char* var557 /* : NativeString */;
long var558 /* : Int */;
val* var559 /* : String */;
static val* varonce560;
val* var561 /* : String */;
char* var562 /* : NativeString */;
long var563 /* : Int */;
val* var564 /* : String */;
val* var565 /* : Array[Object] */;
long var566 /* : Int */;
val* var567 /* : NativeArray[Object] */;
val* var568 /* : String */;
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
val* var580 /* : Array[Object] */;
long var581 /* : Int */;
val* var582 /* : NativeArray[Object] */;
val* var583 /* : String */;
static val* varonce584;
val* var585 /* : String */;
char* var586 /* : NativeString */;
long var587 /* : Int */;
val* var588 /* : String */;
static val* varonce589;
val* var590 /* : String */;
char* var591 /* : NativeString */;
long var592 /* : Int */;
val* var593 /* : String */;
val* var594 /* : Array[Object] */;
long var595 /* : Int */;
val* var596 /* : NativeArray[Object] */;
val* var597 /* : String */;
val* var598 /* : String */;
static val* varonce599;
val* var600 /* : String */;
char* var601 /* : NativeString */;
long var602 /* : Int */;
val* var603 /* : String */;
static val* varonce604;
val* var605 /* : String */;
char* var606 /* : NativeString */;
long var607 /* : Int */;
val* var608 /* : String */;
val* var609 /* : Array[Object] */;
long var610 /* : Int */;
val* var611 /* : NativeArray[Object] */;
val* var612 /* : String */;
static val* varonce613;
val* var614 /* : String */;
char* var615 /* : NativeString */;
long var616 /* : Int */;
val* var617 /* : String */;
val* var618 /* : Array[Object] */;
long var619 /* : Int */;
val* var620 /* : NativeArray[Object] */;
val* var621 /* : String */;
static val* varonce622;
val* var623 /* : String */;
char* var624 /* : NativeString */;
long var625 /* : Int */;
val* var626 /* : String */;
val* var627 /* : RuntimeVariable */;
val* var_res628 /* var res: RuntimeVariable */;
short int var629 /* : Bool */;
static val* varonce630;
val* var631 /* : String */;
char* var632 /* : NativeString */;
long var633 /* : Int */;
val* var634 /* : String */;
long var635 /* : Int */;
static val* varonce636;
val* var637 /* : String */;
char* var638 /* : NativeString */;
long var639 /* : Int */;
val* var640 /* : String */;
val* var641 /* : Array[Object] */;
long var642 /* : Int */;
val* var643 /* : NativeArray[Object] */;
val* var644 /* : Object */;
val* var645 /* : String */;
static val* varonce646;
val* var647 /* : String */;
char* var648 /* : NativeString */;
long var649 /* : Int */;
val* var650 /* : String */;
val* var651 /* : Array[Object] */;
long var652 /* : Int */;
val* var653 /* : NativeArray[Object] */;
val* var654 /* : String */;
static val* varonce655;
val* var656 /* : String */;
char* var657 /* : NativeString */;
long var658 /* : Int */;
val* var659 /* : String */;
static val* varonce660;
val* var661 /* : String */;
char* var662 /* : NativeString */;
long var663 /* : Int */;
val* var664 /* : String */;
val* var665 /* : Array[Object] */;
long var666 /* : Int */;
val* var667 /* : NativeArray[Object] */;
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
static val* varonce697;
val* var698 /* : String */;
char* var699 /* : NativeString */;
long var700 /* : Int */;
val* var701 /* : String */;
var_mclass = p0;
var = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__intro]))(var_mclass) /* intro on <var_mclass:MClass>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_model__MClassDef__bound_mtype]))(var) /* bound_mtype on <var:MClassDef>*/;
var_mtype = var1;
var2 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_abstract_compiler__MClass__c_name]))(var_mclass) /* c_name on <var_mclass:MClass>*/;
var_c_name = var2;
var3 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_separate_compiler__MClass__c_instance_name]))(var_mclass) /* c_instance_name on <var_mclass:MClass>*/;
var_c_instance_name = var3;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__method_tables]))(self) /* method_tables on <self:SeparateCompiler>*/;
var5 = ((val* (*)(val*, val*))(var4->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var4, var_mclass) /* [] on <var4:Map[MClass, Array[nullable MPropDef]]>*/;
var_vft = var5;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__attr_tables]))(self) /* attr_tables on <self:SeparateCompiler>*/;
var7 = ((val* (*)(val*, val*))(var6->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var6, var_mclass) /* [] on <var6:Map[MClass, Array[nullable MPropDef]]>*/;
var_attrs = var7;
var8 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_visitor]))(self) /* new_visitor on <self:SeparateCompiler>*/;
var_v = var8;
var12 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__runtime_type_analysis]))(self) /* runtime_type_analysis on <self:SeparateCompiler>*/;
var13 = NULL;
if (var12 == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
var_ = var14;
if (var14){
var15 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__runtime_type_analysis]))(self) /* runtime_type_analysis on <self:SeparateCompiler>*/;
if (var15 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 744);
show_backtrace(1);
} else {
var16 = ((val* (*)(val*))(var15->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_classes]))(var15) /* live_classes on <var15:nullable RapidTypeAnalysis>*/;
}
var17 = ((short int (*)(val*, val*))(var16->class->vft[COLOR_abstract_collection__Collection__has]))(var16, var_mclass) /* has on <var16:HashSet[MClass]>*/;
var18 = !var17;
var11 = var18;
} else {
var11 = var_;
}
var_19 = var11;
if (var11){
var20 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MClassType>*/;
if (varonce) {
var21 = varonce;
} else {
var22 = "val*";
var23 = 4;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce = var21;
}
var25 = ((short int (*)(val*, val*))(var20->class->vft[COLOR_kernel__Object___61d_61d]))(var20, var21) /* == on <var20:String>*/;
var10 = var25;
} else {
var10 = var_19;
}
var_26 = var10;
if (var10){
var27 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__name]))(var_mclass) /* name on <var_mclass:MClass>*/;
if (varonce28) {
var29 = varonce28;
} else {
var30 = "NativeArray";
var31 = 11;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
var33 = ((short int (*)(val*, val*))(var27->class->vft[COLOR_kernel__Object___33d_61d]))(var27, var29) /* != on <var27:String>*/;
var9 = var33;
} else {
var9 = var_26;
}
var_is_dead = var9;
if (varonce34) {
var35 = varonce34;
} else {
var36 = "/* runtime class ";
var37 = 17;
var38 = string__NativeString__to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
if (varonce39) {
var40 = varonce39;
} else {
var41 = " */";
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
((struct instance_array__NativeArray*)var46)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var46)->values[2] = (val*) var40;
((void (*)(val*, val*, long))(var44->class->vft[COLOR_array__Array__with_native]))(var44, var46, var45) /* with_native on <var44:Array[Object]>*/;
}
var47 = ((val* (*)(val*))(var44->class->vft[COLOR_string__Object__to_s]))(var44) /* to_s on <var44:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var47) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
var48 = !var_is_dead;
if (var48){
if (varonce49) {
var50 = varonce49;
} else {
var51 = "class_";
var52 = 6;
var53 = string__NativeString__to_s_with_length(var51, var52);
var50 = var53;
varonce49 = var50;
}
var54 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var54 = array_instance Array[Object] */
var55 = 2;
var56 = NEW_array__NativeArray(var55, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var56)->values[0] = (val*) var50;
((struct instance_array__NativeArray*)var56)->values[1] = (val*) var_c_name;
((void (*)(val*, val*, long))(var54->class->vft[COLOR_array__Array__with_native]))(var54, var56, var55) /* with_native on <var54:Array[Object]>*/;
}
var57 = ((val* (*)(val*))(var54->class->vft[COLOR_string__Object__to_s]))(var54) /* to_s on <var54:Array[Object]>*/;
if (varonce58) {
var59 = varonce58;
} else {
var60 = "extern const struct class class_";
var61 = 32;
var62 = string__NativeString__to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
if (varonce63) {
var64 = varonce63;
} else {
var65 = ";";
var66 = 1;
var67 = string__NativeString__to_s_with_length(var65, var66);
var64 = var67;
varonce63 = var64;
}
var68 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var68 = array_instance Array[Object] */
var69 = 3;
var70 = NEW_array__NativeArray(var69, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var70)->values[0] = (val*) var59;
((struct instance_array__NativeArray*)var70)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var70)->values[2] = (val*) var64;
((void (*)(val*, val*, long))(var68->class->vft[COLOR_array__Array__with_native]))(var68, var70, var69) /* with_native on <var68:Array[Object]>*/;
}
var71 = ((val* (*)(val*))(var68->class->vft[COLOR_string__Object__to_s]))(var68) /* to_s on <var68:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__provide_declaration]))(self, var57, var71) /* provide_declaration on <self:SeparateCompiler>*/;
if (varonce72) {
var73 = varonce72;
} else {
var74 = "const struct class class_";
var75 = 25;
var76 = string__NativeString__to_s_with_length(var74, var75);
var73 = var76;
varonce72 = var73;
}
if (varonce77) {
var78 = varonce77;
} else {
var79 = " = {";
var80 = 4;
var81 = string__NativeString__to_s_with_length(var79, var80);
var78 = var81;
varonce77 = var78;
}
var82 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var82 = array_instance Array[Object] */
var83 = 3;
var84 = NEW_array__NativeArray(var83, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var84)->values[0] = (val*) var73;
((struct instance_array__NativeArray*)var84)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var84)->values[2] = (val*) var78;
((void (*)(val*, val*, long))(var82->class->vft[COLOR_array__Array__with_native]))(var82, var84, var83) /* with_native on <var82:Array[Object]>*/;
}
var85 = ((val* (*)(val*))(var82->class->vft[COLOR_string__Object__to_s]))(var82) /* to_s on <var82:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var85) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
var86 = ((long (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__box_kind_of]))(self, var_mclass) /* box_kind_of on <self:SeparateCompiler>*/;
if (varonce87) {
var88 = varonce87;
} else {
var89 = ", /* box_kind */";
var90 = 16;
var91 = string__NativeString__to_s_with_length(var89, var90);
var88 = var91;
varonce87 = var88;
}
var92 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var92 = array_instance Array[Object] */
var93 = 2;
var94 = NEW_array__NativeArray(var93, &type_array__NativeArraykernel__Object);
var95 = BOX_kernel__Int(var86); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var94)->values[0] = (val*) var95;
((struct instance_array__NativeArray*)var94)->values[1] = (val*) var88;
((void (*)(val*, val*, long))(var92->class->vft[COLOR_array__Array__with_native]))(var92, var94, var93) /* with_native on <var92:Array[Object]>*/;
}
var96 = ((val* (*)(val*))(var92->class->vft[COLOR_string__Object__to_s]))(var92) /* to_s on <var92:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var96) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
if (varonce97) {
var98 = varonce97;
} else {
var99 = "{";
var100 = 1;
var101 = string__NativeString__to_s_with_length(var99, var100);
var98 = var101;
varonce97 = var98;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var98) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
var102 = NEW_range__Range(&type_range__Rangekernel__Int);
var103 = 0;
var104 = ((long (*)(val*))(var_vft->class->vft[COLOR_abstract_collection__Collection__length]))(var_vft) /* length on <var_vft:Array[nullable MPropDef]>*/;
var105 = BOX_kernel__Int(var103); /* autobox from Int to Discrete */
var106 = BOX_kernel__Int(var104); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var102->class->vft[COLOR_range__Range__without_last]))(var102, var105, var106) /* without_last on <var102:Range[Int]>*/;
var107 = ((val* (*)(val*))(var102->class->vft[COLOR_abstract_collection__Collection__iterator]))(var102) /* iterator on <var102:Range[Int]>*/;
for(;;) {
var108 = ((short int (*)(val*))(var107->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var107) /* is_ok on <var107:Iterator[nullable Object]>*/;
if(!var108) break;
var109 = ((val* (*)(val*))(var107->class->vft[COLOR_abstract_collection__Iterator__item]))(var107) /* item on <var107:Iterator[nullable Object]>*/;
var110 = ((struct instance_kernel__Int*)var109)->value; /* autounbox from nullable Object to Int */;
var_i = var110;
var111 = ((val* (*)(val*, long))(var_vft->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_vft, var_i) /* [] on <var_vft:Array[nullable MPropDef]>*/;
var_mpropdef = var111;
var112 = NULL;
if (var_mpropdef == NULL) {
var113 = 1; /* is null */
} else {
var113 = 0; /* arg is null but recv is not */
}
if (var113){
if (varonce114) {
var115 = varonce114;
} else {
var116 = "NULL, /* empty */";
var117 = 17;
var118 = string__NativeString__to_s_with_length(var116, var117);
var115 = var118;
varonce114 = var115;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var115) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
} else {
/* <var_mpropdef:nullable MPropDef(MPropDef)> isa MMethodDef */
cltype = type_model__MMethodDef.color;
idtype = type_model__MMethodDef.id;
if(cltype >= var_mpropdef->type->table_size) {
var119 = 0;
} else {
var119 = var_mpropdef->type->type_table[cltype] == idtype;
}
if (!var119) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 759);
show_backtrace(1);
}
var120 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_separate_compiler__MMethodDef__virtual_runtime_function]))(var_mpropdef) /* virtual_runtime_function on <var_mpropdef:nullable MPropDef(MMethodDef)>*/;
var_rf = var120;
var121 = ((val* (*)(val*))(var_rf->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__c_name]))(var_rf) /* c_name on <var_rf:AbstractRuntimeFunction>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(var_v, var121) /* require_declaration on <var_v:SeparateCompilerVisitor>*/;
if (varonce122) {
var123 = varonce122;
} else {
var124 = "(nitmethod_t)";
var125 = 13;
var126 = string__NativeString__to_s_with_length(var124, var125);
var123 = var126;
varonce122 = var123;
}
var127 = ((val* (*)(val*))(var_rf->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__c_name]))(var_rf) /* c_name on <var_rf:AbstractRuntimeFunction>*/;
if (varonce128) {
var129 = varonce128;
} else {
var130 = ", /* pointer to ";
var131 = 16;
var132 = string__NativeString__to_s_with_length(var130, var131);
var129 = var132;
varonce128 = var129;
}
var133 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__intro_mmodule]))(var_mclass) /* intro_mmodule on <var_mclass:MClass>*/;
if (varonce134) {
var135 = varonce134;
} else {
var136 = ":";
var137 = 1;
var138 = string__NativeString__to_s_with_length(var136, var137);
var135 = var138;
varonce134 = var135;
}
if (varonce139) {
var140 = varonce139;
} else {
var141 = ":";
var142 = 1;
var143 = string__NativeString__to_s_with_length(var141, var142);
var140 = var143;
varonce139 = var140;
}
if (varonce144) {
var145 = varonce144;
} else {
var146 = " */";
var147 = 3;
var148 = string__NativeString__to_s_with_length(var146, var147);
var145 = var148;
varonce144 = var145;
}
var149 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var149 = array_instance Array[Object] */
var150 = 9;
var151 = NEW_array__NativeArray(var150, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var151)->values[0] = (val*) var123;
((struct instance_array__NativeArray*)var151)->values[1] = (val*) var127;
((struct instance_array__NativeArray*)var151)->values[2] = (val*) var129;
((struct instance_array__NativeArray*)var151)->values[3] = (val*) var133;
((struct instance_array__NativeArray*)var151)->values[4] = (val*) var135;
((struct instance_array__NativeArray*)var151)->values[5] = (val*) var_mclass;
((struct instance_array__NativeArray*)var151)->values[6] = (val*) var140;
((struct instance_array__NativeArray*)var151)->values[7] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var151)->values[8] = (val*) var145;
((void (*)(val*, val*, long))(var149->class->vft[COLOR_array__Array__with_native]))(var149, var151, var150) /* with_native on <var149:Array[Object]>*/;
}
var152 = ((val* (*)(val*))(var149->class->vft[COLOR_string__Object__to_s]))(var149) /* to_s on <var149:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var152) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
}
CONTINUE_label: (void)0;
((void (*)(val*))(var107->class->vft[COLOR_abstract_collection__Iterator__next]))(var107) /* next on <var107:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
if (varonce153) {
var154 = varonce153;
} else {
var155 = "}";
var156 = 1;
var157 = string__NativeString__to_s_with_length(var155, var156);
var154 = var157;
varonce153 = var154;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var154) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
if (varonce158) {
var159 = varonce158;
} else {
var160 = "};";
var161 = 2;
var162 = string__NativeString__to_s_with_length(var160, var161);
var159 = var162;
varonce158 = var159;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var159) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
} else {
}
var163 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MClassType>*/;
if (varonce164) {
var165 = varonce164;
} else {
var166 = "val*";
var167 = 4;
var168 = string__NativeString__to_s_with_length(var166, var167);
var165 = var168;
varonce164 = var165;
}
var169 = ((short int (*)(val*, val*))(var163->class->vft[COLOR_kernel__Object___33d_61d]))(var163, var165) /* != on <var163:String>*/;
if (var169){
var171 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MClassType__mclass]))(var_mtype) /* mclass on <var_mtype:MClassType>*/;
var172 = ((val* (*)(val*))(var171->class->vft[COLOR_model__MClass__name]))(var171) /* name on <var171:MClass>*/;
if (varonce173) {
var174 = varonce173;
} else {
var175 = "Pointer";
var176 = 7;
var177 = string__NativeString__to_s_with_length(var175, var176);
var174 = var177;
varonce173 = var174;
}
var178 = ((short int (*)(val*, val*))(var172->class->vft[COLOR_kernel__Object___61d_61d]))(var172, var174) /* == on <var172:String>*/;
var_179 = var178;
if (var178){
var170 = var_179;
} else {
var180 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MClassType__mclass]))(var_mtype) /* mclass on <var_mtype:MClassType>*/;
var181 = ((val* (*)(val*))(var180->class->vft[COLOR_model__MClass__kind]))(var180) /* kind on <var180:MClass>*/;
var182 = ((val* (*)(val*))(self->class->vft[COLOR_model__Object__extern_kind]))(self) /* extern_kind on <self:SeparateCompiler>*/;
var183 = ((short int (*)(val*, val*))(var181->class->vft[COLOR_kernel__Object___33d_61d]))(var181, var182) /* != on <var181:MClassKind>*/;
var170 = var183;
}
if (var170){
var184 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateCompiler>*/;
if (varonce185) {
var186 = varonce185;
} else {
var187 = "struct instance_";
var188 = 16;
var189 = string__NativeString__to_s_with_length(var187, var188);
var186 = var189;
varonce185 = var186;
}
if (varonce190) {
var191 = varonce190;
} else {
var192 = " {";
var193 = 2;
var194 = string__NativeString__to_s_with_length(var192, var193);
var191 = var194;
varonce190 = var191;
}
var195 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var195 = array_instance Array[Object] */
var196 = 3;
var197 = NEW_array__NativeArray(var196, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var197)->values[0] = (val*) var186;
((struct instance_array__NativeArray*)var197)->values[1] = (val*) var_c_instance_name;
((struct instance_array__NativeArray*)var197)->values[2] = (val*) var191;
((void (*)(val*, val*, long))(var195->class->vft[COLOR_array__Array__with_native]))(var195, var197, var196) /* with_native on <var195:Array[Object]>*/;
}
var198 = ((val* (*)(val*))(var195->class->vft[COLOR_string__Object__to_s]))(var195) /* to_s on <var195:Array[Object]>*/;
((void (*)(val*, val*))(var184->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var184, var198) /* add_decl on <var184:CodeWriter>*/;
var199 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateCompiler>*/;
if (varonce200) {
var201 = varonce200;
} else {
var202 = "const struct type *type;";
var203 = 24;
var204 = string__NativeString__to_s_with_length(var202, var203);
var201 = var204;
varonce200 = var201;
}
((void (*)(val*, val*))(var199->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var199, var201) /* add_decl on <var199:CodeWriter>*/;
var205 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateCompiler>*/;
if (varonce206) {
var207 = varonce206;
} else {
var208 = "const struct class *class;";
var209 = 26;
var210 = string__NativeString__to_s_with_length(var208, var209);
var207 = var210;
varonce206 = var207;
}
((void (*)(val*, val*))(var205->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var205, var207) /* add_decl on <var205:CodeWriter>*/;
var211 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateCompiler>*/;
var212 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MClassType>*/;
if (varonce213) {
var214 = varonce213;
} else {
var215 = " value;";
var216 = 7;
var217 = string__NativeString__to_s_with_length(var215, var216);
var214 = var217;
varonce213 = var214;
}
var218 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var218 = array_instance Array[Object] */
var219 = 2;
var220 = NEW_array__NativeArray(var219, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var220)->values[0] = (val*) var212;
((struct instance_array__NativeArray*)var220)->values[1] = (val*) var214;
((void (*)(val*, val*, long))(var218->class->vft[COLOR_array__Array__with_native]))(var218, var220, var219) /* with_native on <var218:Array[Object]>*/;
}
var221 = ((val* (*)(val*))(var218->class->vft[COLOR_string__Object__to_s]))(var218) /* to_s on <var218:Array[Object]>*/;
((void (*)(val*, val*))(var211->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var211, var221) /* add_decl on <var211:CodeWriter>*/;
var222 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateCompiler>*/;
if (varonce223) {
var224 = varonce223;
} else {
var225 = "};";
var226 = 2;
var227 = string__NativeString__to_s_with_length(var225, var226);
var224 = var227;
varonce223 = var224;
}
((void (*)(val*, val*))(var222->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var222, var224) /* add_decl on <var222:CodeWriter>*/;
} else {
}
var228 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__runtime_type_analysis]))(self) /* runtime_type_analysis on <self:SeparateCompiler>*/;
if (var228 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 779);
show_backtrace(1);
} else {
var229 = ((val* (*)(val*))(var228->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_types]))(var228) /* live_types on <var228:nullable RapidTypeAnalysis>*/;
}
var230 = ((short int (*)(val*, val*))(var229->class->vft[COLOR_abstract_collection__Collection__has]))(var229, var_mtype) /* has on <var229:HashSet[MClassType]>*/;
var231 = !var230;
if (var231){
goto RET_LABEL;
} else {
}
if (varonce232) {
var233 = varonce232;
} else {
var234 = "BOX_";
var235 = 4;
var236 = string__NativeString__to_s_with_length(var234, var235);
var233 = var236;
varonce232 = var233;
}
var237 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var237 = array_instance Array[Object] */
var238 = 2;
var239 = NEW_array__NativeArray(var238, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var239)->values[0] = (val*) var233;
((struct instance_array__NativeArray*)var239)->values[1] = (val*) var_c_name;
((void (*)(val*, val*, long))(var237->class->vft[COLOR_array__Array__with_native]))(var237, var239, var238) /* with_native on <var237:Array[Object]>*/;
}
var240 = ((val* (*)(val*))(var237->class->vft[COLOR_string__Object__to_s]))(var237) /* to_s on <var237:Array[Object]>*/;
if (varonce241) {
var242 = varonce241;
} else {
var243 = "val* BOX_";
var244 = 9;
var245 = string__NativeString__to_s_with_length(var243, var244);
var242 = var245;
varonce241 = var242;
}
if (varonce246) {
var247 = varonce246;
} else {
var248 = "(";
var249 = 1;
var250 = string__NativeString__to_s_with_length(var248, var249);
var247 = var250;
varonce246 = var247;
}
var251 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MClassType>*/;
if (varonce252) {
var253 = varonce252;
} else {
var254 = ");";
var255 = 2;
var256 = string__NativeString__to_s_with_length(var254, var255);
var253 = var256;
varonce252 = var253;
}
var257 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var257 = array_instance Array[Object] */
var258 = 5;
var259 = NEW_array__NativeArray(var258, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var259)->values[0] = (val*) var242;
((struct instance_array__NativeArray*)var259)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var259)->values[2] = (val*) var247;
((struct instance_array__NativeArray*)var259)->values[3] = (val*) var251;
((struct instance_array__NativeArray*)var259)->values[4] = (val*) var253;
((void (*)(val*, val*, long))(var257->class->vft[COLOR_array__Array__with_native]))(var257, var259, var258) /* with_native on <var257:Array[Object]>*/;
}
var260 = ((val* (*)(val*))(var257->class->vft[COLOR_string__Object__to_s]))(var257) /* to_s on <var257:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__provide_declaration]))(self, var240, var260) /* provide_declaration on <self:SeparateCompiler>*/;
if (varonce261) {
var262 = varonce261;
} else {
var263 = "/* allocate ";
var264 = 12;
var265 = string__NativeString__to_s_with_length(var263, var264);
var262 = var265;
varonce261 = var262;
}
if (varonce266) {
var267 = varonce266;
} else {
var268 = " */";
var269 = 3;
var270 = string__NativeString__to_s_with_length(var268, var269);
var267 = var270;
varonce266 = var267;
}
var271 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var271 = array_instance Array[Object] */
var272 = 3;
var273 = NEW_array__NativeArray(var272, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var273)->values[0] = (val*) var262;
((struct instance_array__NativeArray*)var273)->values[1] = (val*) var_mtype;
((struct instance_array__NativeArray*)var273)->values[2] = (val*) var267;
((void (*)(val*, val*, long))(var271->class->vft[COLOR_array__Array__with_native]))(var271, var273, var272) /* with_native on <var271:Array[Object]>*/;
}
var274 = ((val* (*)(val*))(var271->class->vft[COLOR_string__Object__to_s]))(var271) /* to_s on <var271:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var274) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
if (varonce275) {
var276 = varonce275;
} else {
var277 = "val* BOX_";
var278 = 9;
var279 = string__NativeString__to_s_with_length(var277, var278);
var276 = var279;
varonce275 = var276;
}
var280 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MClassType>*/;
if (varonce281) {
var282 = varonce281;
} else {
var283 = "(";
var284 = 1;
var285 = string__NativeString__to_s_with_length(var283, var284);
var282 = var285;
varonce281 = var282;
}
var286 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MClassType>*/;
if (varonce287) {
var288 = varonce287;
} else {
var289 = " value) {";
var290 = 9;
var291 = string__NativeString__to_s_with_length(var289, var290);
var288 = var291;
varonce287 = var288;
}
var292 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var292 = array_instance Array[Object] */
var293 = 5;
var294 = NEW_array__NativeArray(var293, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var294)->values[0] = (val*) var276;
((struct instance_array__NativeArray*)var294)->values[1] = (val*) var280;
((struct instance_array__NativeArray*)var294)->values[2] = (val*) var282;
((struct instance_array__NativeArray*)var294)->values[3] = (val*) var286;
((struct instance_array__NativeArray*)var294)->values[4] = (val*) var288;
((void (*)(val*, val*, long))(var292->class->vft[COLOR_array__Array__with_native]))(var292, var294, var293) /* with_native on <var292:Array[Object]>*/;
}
var295 = ((val* (*)(val*))(var292->class->vft[COLOR_string__Object__to_s]))(var292) /* to_s on <var292:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var295) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
if (varonce296) {
var297 = varonce296;
} else {
var298 = "struct instance_";
var299 = 16;
var300 = string__NativeString__to_s_with_length(var298, var299);
var297 = var300;
varonce296 = var297;
}
if (varonce301) {
var302 = varonce301;
} else {
var303 = "*res = nit_alloc(sizeof(struct instance_";
var304 = 40;
var305 = string__NativeString__to_s_with_length(var303, var304);
var302 = var305;
varonce301 = var302;
}
if (varonce306) {
var307 = varonce306;
} else {
var308 = "));";
var309 = 3;
var310 = string__NativeString__to_s_with_length(var308, var309);
var307 = var310;
varonce306 = var307;
}
var311 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var311 = array_instance Array[Object] */
var312 = 5;
var313 = NEW_array__NativeArray(var312, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var313)->values[0] = (val*) var297;
((struct instance_array__NativeArray*)var313)->values[1] = (val*) var_c_instance_name;
((struct instance_array__NativeArray*)var313)->values[2] = (val*) var302;
((struct instance_array__NativeArray*)var313)->values[3] = (val*) var_c_instance_name;
((struct instance_array__NativeArray*)var313)->values[4] = (val*) var307;
((void (*)(val*, val*, long))(var311->class->vft[COLOR_array__Array__with_native]))(var311, var313, var312) /* with_native on <var311:Array[Object]>*/;
}
var314 = ((val* (*)(val*))(var311->class->vft[COLOR_string__Object__to_s]))(var311) /* to_s on <var311:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var314) /* add on <var_v:SeparateCompilerVisitor>*/;
if (varonce315) {
var316 = varonce315;
} else {
var317 = "type_";
var318 = 5;
var319 = string__NativeString__to_s_with_length(var317, var318);
var316 = var319;
varonce315 = var316;
}
var320 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var320 = array_instance Array[Object] */
var321 = 2;
var322 = NEW_array__NativeArray(var321, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var322)->values[0] = (val*) var316;
((struct instance_array__NativeArray*)var322)->values[1] = (val*) var_c_name;
((void (*)(val*, val*, long))(var320->class->vft[COLOR_array__Array__with_native]))(var320, var322, var321) /* with_native on <var320:Array[Object]>*/;
}
var323 = ((val* (*)(val*))(var320->class->vft[COLOR_string__Object__to_s]))(var320) /* to_s on <var320:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(var_v, var323) /* require_declaration on <var_v:SeparateCompilerVisitor>*/;
if (varonce324) {
var325 = varonce324;
} else {
var326 = "res->type = &type_";
var327 = 18;
var328 = string__NativeString__to_s_with_length(var326, var327);
var325 = var328;
varonce324 = var325;
}
if (varonce329) {
var330 = varonce329;
} else {
var331 = ";";
var332 = 1;
var333 = string__NativeString__to_s_with_length(var331, var332);
var330 = var333;
varonce329 = var330;
}
var334 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var334 = array_instance Array[Object] */
var335 = 3;
var336 = NEW_array__NativeArray(var335, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var336)->values[0] = (val*) var325;
((struct instance_array__NativeArray*)var336)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var336)->values[2] = (val*) var330;
((void (*)(val*, val*, long))(var334->class->vft[COLOR_array__Array__with_native]))(var334, var336, var335) /* with_native on <var334:Array[Object]>*/;
}
var337 = ((val* (*)(val*))(var334->class->vft[COLOR_string__Object__to_s]))(var334) /* to_s on <var334:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var337) /* add on <var_v:SeparateCompilerVisitor>*/;
if (varonce338) {
var339 = varonce338;
} else {
var340 = "class_";
var341 = 6;
var342 = string__NativeString__to_s_with_length(var340, var341);
var339 = var342;
varonce338 = var339;
}
var343 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var343 = array_instance Array[Object] */
var344 = 2;
var345 = NEW_array__NativeArray(var344, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var345)->values[0] = (val*) var339;
((struct instance_array__NativeArray*)var345)->values[1] = (val*) var_c_name;
((void (*)(val*, val*, long))(var343->class->vft[COLOR_array__Array__with_native]))(var343, var345, var344) /* with_native on <var343:Array[Object]>*/;
}
var346 = ((val* (*)(val*))(var343->class->vft[COLOR_string__Object__to_s]))(var343) /* to_s on <var343:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(var_v, var346) /* require_declaration on <var_v:SeparateCompilerVisitor>*/;
if (varonce347) {
var348 = varonce347;
} else {
var349 = "res->class = &class_";
var350 = 20;
var351 = string__NativeString__to_s_with_length(var349, var350);
var348 = var351;
varonce347 = var348;
}
if (varonce352) {
var353 = varonce352;
} else {
var354 = ";";
var355 = 1;
var356 = string__NativeString__to_s_with_length(var354, var355);
var353 = var356;
varonce352 = var353;
}
var357 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var357 = array_instance Array[Object] */
var358 = 3;
var359 = NEW_array__NativeArray(var358, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var359)->values[0] = (val*) var348;
((struct instance_array__NativeArray*)var359)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var359)->values[2] = (val*) var353;
((void (*)(val*, val*, long))(var357->class->vft[COLOR_array__Array__with_native]))(var357, var359, var358) /* with_native on <var357:Array[Object]>*/;
}
var360 = ((val* (*)(val*))(var357->class->vft[COLOR_string__Object__to_s]))(var357) /* to_s on <var357:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var360) /* add on <var_v:SeparateCompilerVisitor>*/;
if (varonce361) {
var362 = varonce361;
} else {
var363 = "res->value = value;";
var364 = 19;
var365 = string__NativeString__to_s_with_length(var363, var364);
var362 = var365;
varonce361 = var362;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var362) /* add on <var_v:SeparateCompilerVisitor>*/;
if (varonce366) {
var367 = varonce366;
} else {
var368 = "return (val*)res;";
var369 = 17;
var370 = string__NativeString__to_s_with_length(var368, var369);
var367 = var370;
varonce366 = var367;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var367) /* add on <var_v:SeparateCompilerVisitor>*/;
if (varonce371) {
var372 = varonce371;
} else {
var373 = "}";
var374 = 1;
var375 = string__NativeString__to_s_with_length(var373, var374);
var372 = var375;
varonce371 = var372;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var372) /* add on <var_v:SeparateCompilerVisitor>*/;
goto RET_LABEL;
} else {
var376 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__name]))(var_mclass) /* name on <var_mclass:MClass>*/;
if (varonce377) {
var378 = varonce377;
} else {
var379 = "NativeArray";
var380 = 11;
var381 = string__NativeString__to_s_with_length(var379, var380);
var378 = var381;
varonce377 = var378;
}
var382 = ((short int (*)(val*, val*))(var376->class->vft[COLOR_kernel__Object___61d_61d]))(var376, var378) /* == on <var376:String>*/;
if (var382){
var383 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateCompiler>*/;
if (varonce384) {
var385 = varonce384;
} else {
var386 = "struct instance_";
var387 = 16;
var388 = string__NativeString__to_s_with_length(var386, var387);
var385 = var388;
varonce384 = var385;
}
if (varonce389) {
var390 = varonce389;
} else {
var391 = " {";
var392 = 2;
var393 = string__NativeString__to_s_with_length(var391, var392);
var390 = var393;
varonce389 = var390;
}
var394 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var394 = array_instance Array[Object] */
var395 = 3;
var396 = NEW_array__NativeArray(var395, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var396)->values[0] = (val*) var385;
((struct instance_array__NativeArray*)var396)->values[1] = (val*) var_c_instance_name;
((struct instance_array__NativeArray*)var396)->values[2] = (val*) var390;
((void (*)(val*, val*, long))(var394->class->vft[COLOR_array__Array__with_native]))(var394, var396, var395) /* with_native on <var394:Array[Object]>*/;
}
var397 = ((val* (*)(val*))(var394->class->vft[COLOR_string__Object__to_s]))(var394) /* to_s on <var394:Array[Object]>*/;
((void (*)(val*, val*))(var383->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var383, var397) /* add_decl on <var383:CodeWriter>*/;
var398 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateCompiler>*/;
if (varonce399) {
var400 = varonce399;
} else {
var401 = "const struct type *type;";
var402 = 24;
var403 = string__NativeString__to_s_with_length(var401, var402);
var400 = var403;
varonce399 = var400;
}
((void (*)(val*, val*))(var398->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var398, var400) /* add_decl on <var398:CodeWriter>*/;
var404 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateCompiler>*/;
if (varonce405) {
var406 = varonce405;
} else {
var407 = "const struct class *class;";
var408 = 26;
var409 = string__NativeString__to_s_with_length(var407, var408);
var406 = var409;
varonce405 = var406;
}
((void (*)(val*, val*))(var404->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var404, var406) /* add_decl on <var404:CodeWriter>*/;
var410 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateCompiler>*/;
if (varonce411) {
var412 = varonce411;
} else {
var413 = "val* values[0];";
var414 = 15;
var415 = string__NativeString__to_s_with_length(var413, var414);
var412 = var415;
varonce411 = var412;
}
((void (*)(val*, val*))(var410->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var410, var412) /* add_decl on <var410:CodeWriter>*/;
var416 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateCompiler>*/;
if (varonce417) {
var418 = varonce417;
} else {
var419 = "};";
var420 = 2;
var421 = string__NativeString__to_s_with_length(var419, var420);
var418 = var421;
varonce417 = var418;
}
((void (*)(val*, val*))(var416->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var416, var418) /* add_decl on <var416:CodeWriter>*/;
if (varonce422) {
var423 = varonce422;
} else {
var424 = "NEW_";
var425 = 4;
var426 = string__NativeString__to_s_with_length(var424, var425);
var423 = var426;
varonce422 = var423;
}
var427 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var427 = array_instance Array[Object] */
var428 = 2;
var429 = NEW_array__NativeArray(var428, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var429)->values[0] = (val*) var423;
((struct instance_array__NativeArray*)var429)->values[1] = (val*) var_c_name;
((void (*)(val*, val*, long))(var427->class->vft[COLOR_array__Array__with_native]))(var427, var429, var428) /* with_native on <var427:Array[Object]>*/;
}
var430 = ((val* (*)(val*))(var427->class->vft[COLOR_string__Object__to_s]))(var427) /* to_s on <var427:Array[Object]>*/;
var431 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MClassType>*/;
if (varonce432) {
var433 = varonce432;
} else {
var434 = " NEW_";
var435 = 5;
var436 = string__NativeString__to_s_with_length(var434, var435);
var433 = var436;
varonce432 = var433;
}
if (varonce437) {
var438 = varonce437;
} else {
var439 = "(int length, const struct type* type);";
var440 = 38;
var441 = string__NativeString__to_s_with_length(var439, var440);
var438 = var441;
varonce437 = var438;
}
var442 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var442 = array_instance Array[Object] */
var443 = 4;
var444 = NEW_array__NativeArray(var443, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var444)->values[0] = (val*) var431;
((struct instance_array__NativeArray*)var444)->values[1] = (val*) var433;
((struct instance_array__NativeArray*)var444)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var444)->values[3] = (val*) var438;
((void (*)(val*, val*, long))(var442->class->vft[COLOR_array__Array__with_native]))(var442, var444, var443) /* with_native on <var442:Array[Object]>*/;
}
var445 = ((val* (*)(val*))(var442->class->vft[COLOR_string__Object__to_s]))(var442) /* to_s on <var442:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__provide_declaration]))(self, var430, var445) /* provide_declaration on <self:SeparateCompiler>*/;
if (varonce446) {
var447 = varonce446;
} else {
var448 = "/* allocate ";
var449 = 12;
var450 = string__NativeString__to_s_with_length(var448, var449);
var447 = var450;
varonce446 = var447;
}
if (varonce451) {
var452 = varonce451;
} else {
var453 = " */";
var454 = 3;
var455 = string__NativeString__to_s_with_length(var453, var454);
var452 = var455;
varonce451 = var452;
}
var456 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var456 = array_instance Array[Object] */
var457 = 3;
var458 = NEW_array__NativeArray(var457, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var458)->values[0] = (val*) var447;
((struct instance_array__NativeArray*)var458)->values[1] = (val*) var_mtype;
((struct instance_array__NativeArray*)var458)->values[2] = (val*) var452;
((void (*)(val*, val*, long))(var456->class->vft[COLOR_array__Array__with_native]))(var456, var458, var457) /* with_native on <var456:Array[Object]>*/;
}
var459 = ((val* (*)(val*))(var456->class->vft[COLOR_string__Object__to_s]))(var456) /* to_s on <var456:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var459) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
var460 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MClassType>*/;
if (varonce461) {
var462 = varonce461;
} else {
var463 = " NEW_";
var464 = 5;
var465 = string__NativeString__to_s_with_length(var463, var464);
var462 = var465;
varonce461 = var462;
}
if (varonce466) {
var467 = varonce466;
} else {
var468 = "(int length, const struct type* type) {";
var469 = 39;
var470 = string__NativeString__to_s_with_length(var468, var469);
var467 = var470;
varonce466 = var467;
}
var471 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var471 = array_instance Array[Object] */
var472 = 4;
var473 = NEW_array__NativeArray(var472, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var473)->values[0] = (val*) var460;
((struct instance_array__NativeArray*)var473)->values[1] = (val*) var462;
((struct instance_array__NativeArray*)var473)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var473)->values[3] = (val*) var467;
((void (*)(val*, val*, long))(var471->class->vft[COLOR_array__Array__with_native]))(var471, var473, var472) /* with_native on <var471:Array[Object]>*/;
}
var474 = ((val* (*)(val*))(var471->class->vft[COLOR_string__Object__to_s]))(var471) /* to_s on <var471:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var474) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
if (varonce475) {
var476 = varonce475;
} else {
var477 = "self";
var478 = 4;
var479 = string__NativeString__to_s_with_length(var477, var478);
var476 = var479;
varonce475 = var476;
}
var480 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_named_var]))(var_v, var_mtype, var476) /* new_named_var on <var_v:SeparateCompilerVisitor>*/;
var_res = var480;
var481 = 1;
((void (*)(val*, short int))(var_res->class->vft[COLOR_abstract_compiler__RuntimeVariable__is_exact_61d]))(var_res, var481) /* is_exact= on <var_res:RuntimeVariable>*/;
var482 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MClassType__arguments]))(var_mtype) /* arguments on <var_mtype:MClassType>*/;
var483 = ((val* (*)(val*))(var482->class->vft[COLOR_abstract_collection__Collection__first]))(var482) /* first on <var482:Array[MType]>*/;
var_mtype_elt = var483;
if (varonce484) {
var485 = varonce484;
} else {
var486 = " = nit_alloc(sizeof(struct instance_";
var487 = 36;
var488 = string__NativeString__to_s_with_length(var486, var487);
var485 = var488;
varonce484 = var485;
}
if (varonce489) {
var490 = varonce489;
} else {
var491 = ") + length*sizeof(";
var492 = 18;
var493 = string__NativeString__to_s_with_length(var491, var492);
var490 = var493;
varonce489 = var490;
}
var494 = ((val* (*)(val*))(var_mtype_elt->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype_elt) /* ctype on <var_mtype_elt:MType>*/;
if (varonce495) {
var496 = varonce495;
} else {
var497 = "));";
var498 = 3;
var499 = string__NativeString__to_s_with_length(var497, var498);
var496 = var499;
varonce495 = var496;
}
var500 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var500 = array_instance Array[Object] */
var501 = 6;
var502 = NEW_array__NativeArray(var501, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var502)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var502)->values[1] = (val*) var485;
((struct instance_array__NativeArray*)var502)->values[2] = (val*) var_c_instance_name;
((struct instance_array__NativeArray*)var502)->values[3] = (val*) var490;
((struct instance_array__NativeArray*)var502)->values[4] = (val*) var494;
((struct instance_array__NativeArray*)var502)->values[5] = (val*) var496;
((void (*)(val*, val*, long))(var500->class->vft[COLOR_array__Array__with_native]))(var500, var502, var501) /* with_native on <var500:Array[Object]>*/;
}
var503 = ((val* (*)(val*))(var500->class->vft[COLOR_string__Object__to_s]))(var500) /* to_s on <var500:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var503) /* add on <var_v:SeparateCompilerVisitor>*/;
if (varonce504) {
var505 = varonce504;
} else {
var506 = "->type = type;";
var507 = 14;
var508 = string__NativeString__to_s_with_length(var506, var507);
var505 = var508;
varonce504 = var505;
}
var509 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var509 = array_instance Array[Object] */
var510 = 2;
var511 = NEW_array__NativeArray(var510, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var511)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var511)->values[1] = (val*) var505;
((void (*)(val*, val*, long))(var509->class->vft[COLOR_array__Array__with_native]))(var509, var511, var510) /* with_native on <var509:Array[Object]>*/;
}
var512 = ((val* (*)(val*))(var509->class->vft[COLOR_string__Object__to_s]))(var509) /* to_s on <var509:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var512) /* add on <var_v:SeparateCompilerVisitor>*/;
if (varonce513) {
var514 = varonce513;
} else {
var515 = "type";
var516 = 4;
var517 = string__NativeString__to_s_with_length(var515, var516);
var514 = var517;
varonce513 = var514;
}
((void (*)(val*, val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__hardening_live_type]))(self, var_v, var514) /* hardening_live_type on <self:SeparateCompiler>*/;
if (varonce518) {
var519 = varonce518;
} else {
var520 = "class_";
var521 = 6;
var522 = string__NativeString__to_s_with_length(var520, var521);
var519 = var522;
varonce518 = var519;
}
var523 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var523 = array_instance Array[Object] */
var524 = 2;
var525 = NEW_array__NativeArray(var524, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var525)->values[0] = (val*) var519;
((struct instance_array__NativeArray*)var525)->values[1] = (val*) var_c_name;
((void (*)(val*, val*, long))(var523->class->vft[COLOR_array__Array__with_native]))(var523, var525, var524) /* with_native on <var523:Array[Object]>*/;
}
var526 = ((val* (*)(val*))(var523->class->vft[COLOR_string__Object__to_s]))(var523) /* to_s on <var523:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(var_v, var526) /* require_declaration on <var_v:SeparateCompilerVisitor>*/;
if (varonce527) {
var528 = varonce527;
} else {
var529 = "->class = &class_";
var530 = 17;
var531 = string__NativeString__to_s_with_length(var529, var530);
var528 = var531;
varonce527 = var528;
}
if (varonce532) {
var533 = varonce532;
} else {
var534 = ";";
var535 = 1;
var536 = string__NativeString__to_s_with_length(var534, var535);
var533 = var536;
varonce532 = var533;
}
var537 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var537 = array_instance Array[Object] */
var538 = 4;
var539 = NEW_array__NativeArray(var538, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var539)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var539)->values[1] = (val*) var528;
((struct instance_array__NativeArray*)var539)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var539)->values[3] = (val*) var533;
((void (*)(val*, val*, long))(var537->class->vft[COLOR_array__Array__with_native]))(var537, var539, var538) /* with_native on <var537:Array[Object]>*/;
}
var540 = ((val* (*)(val*))(var537->class->vft[COLOR_string__Object__to_s]))(var537) /* to_s on <var537:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var540) /* add on <var_v:SeparateCompilerVisitor>*/;
if (varonce541) {
var542 = varonce541;
} else {
var543 = "return ";
var544 = 7;
var545 = string__NativeString__to_s_with_length(var543, var544);
var542 = var545;
varonce541 = var542;
}
if (varonce546) {
var547 = varonce546;
} else {
var548 = ";";
var549 = 1;
var550 = string__NativeString__to_s_with_length(var548, var549);
var547 = var550;
varonce546 = var547;
}
var551 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var551 = array_instance Array[Object] */
var552 = 3;
var553 = NEW_array__NativeArray(var552, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var553)->values[0] = (val*) var542;
((struct instance_array__NativeArray*)var553)->values[1] = (val*) var_res;
((struct instance_array__NativeArray*)var553)->values[2] = (val*) var547;
((void (*)(val*, val*, long))(var551->class->vft[COLOR_array__Array__with_native]))(var551, var553, var552) /* with_native on <var551:Array[Object]>*/;
}
var554 = ((val* (*)(val*))(var551->class->vft[COLOR_string__Object__to_s]))(var551) /* to_s on <var551:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var554) /* add on <var_v:SeparateCompilerVisitor>*/;
if (varonce555) {
var556 = varonce555;
} else {
var557 = "}";
var558 = 1;
var559 = string__NativeString__to_s_with_length(var557, var558);
var556 = var559;
varonce555 = var556;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var556) /* add on <var_v:SeparateCompilerVisitor>*/;
goto RET_LABEL;
} else {
}
}
if (varonce560) {
var561 = varonce560;
} else {
var562 = "NEW_";
var563 = 4;
var564 = string__NativeString__to_s_with_length(var562, var563);
var561 = var564;
varonce560 = var561;
}
var565 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var565 = array_instance Array[Object] */
var566 = 2;
var567 = NEW_array__NativeArray(var566, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var567)->values[0] = (val*) var561;
((struct instance_array__NativeArray*)var567)->values[1] = (val*) var_c_name;
((void (*)(val*, val*, long))(var565->class->vft[COLOR_array__Array__with_native]))(var565, var567, var566) /* with_native on <var565:Array[Object]>*/;
}
var568 = ((val* (*)(val*))(var565->class->vft[COLOR_string__Object__to_s]))(var565) /* to_s on <var565:Array[Object]>*/;
var569 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MClassType>*/;
if (varonce570) {
var571 = varonce570;
} else {
var572 = " NEW_";
var573 = 5;
var574 = string__NativeString__to_s_with_length(var572, var573);
var571 = var574;
varonce570 = var571;
}
if (varonce575) {
var576 = varonce575;
} else {
var577 = "(const struct type* type);";
var578 = 26;
var579 = string__NativeString__to_s_with_length(var577, var578);
var576 = var579;
varonce575 = var576;
}
var580 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var580 = array_instance Array[Object] */
var581 = 4;
var582 = NEW_array__NativeArray(var581, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var582)->values[0] = (val*) var569;
((struct instance_array__NativeArray*)var582)->values[1] = (val*) var571;
((struct instance_array__NativeArray*)var582)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var582)->values[3] = (val*) var576;
((void (*)(val*, val*, long))(var580->class->vft[COLOR_array__Array__with_native]))(var580, var582, var581) /* with_native on <var580:Array[Object]>*/;
}
var583 = ((val* (*)(val*))(var580->class->vft[COLOR_string__Object__to_s]))(var580) /* to_s on <var580:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__provide_declaration]))(self, var568, var583) /* provide_declaration on <self:SeparateCompiler>*/;
if (varonce584) {
var585 = varonce584;
} else {
var586 = "/* allocate ";
var587 = 12;
var588 = string__NativeString__to_s_with_length(var586, var587);
var585 = var588;
varonce584 = var585;
}
if (varonce589) {
var590 = varonce589;
} else {
var591 = " */";
var592 = 3;
var593 = string__NativeString__to_s_with_length(var591, var592);
var590 = var593;
varonce589 = var590;
}
var594 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var594 = array_instance Array[Object] */
var595 = 3;
var596 = NEW_array__NativeArray(var595, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var596)->values[0] = (val*) var585;
((struct instance_array__NativeArray*)var596)->values[1] = (val*) var_mtype;
((struct instance_array__NativeArray*)var596)->values[2] = (val*) var590;
((void (*)(val*, val*, long))(var594->class->vft[COLOR_array__Array__with_native]))(var594, var596, var595) /* with_native on <var594:Array[Object]>*/;
}
var597 = ((val* (*)(val*))(var594->class->vft[COLOR_string__Object__to_s]))(var594) /* to_s on <var594:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var597) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
var598 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MClassType>*/;
if (varonce599) {
var600 = varonce599;
} else {
var601 = " NEW_";
var602 = 5;
var603 = string__NativeString__to_s_with_length(var601, var602);
var600 = var603;
varonce599 = var600;
}
if (varonce604) {
var605 = varonce604;
} else {
var606 = "(const struct type* type) {";
var607 = 27;
var608 = string__NativeString__to_s_with_length(var606, var607);
var605 = var608;
varonce604 = var605;
}
var609 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var609 = array_instance Array[Object] */
var610 = 4;
var611 = NEW_array__NativeArray(var610, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var611)->values[0] = (val*) var598;
((struct instance_array__NativeArray*)var611)->values[1] = (val*) var600;
((struct instance_array__NativeArray*)var611)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var611)->values[3] = (val*) var605;
((void (*)(val*, val*, long))(var609->class->vft[COLOR_array__Array__with_native]))(var609, var611, var610) /* with_native on <var609:Array[Object]>*/;
}
var612 = ((val* (*)(val*))(var609->class->vft[COLOR_string__Object__to_s]))(var609) /* to_s on <var609:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var612) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
if (var_is_dead){
if (varonce613) {
var614 = varonce613;
} else {
var615 = " is DEAD";
var616 = 8;
var617 = string__NativeString__to_s_with_length(var615, var616);
var614 = var617;
varonce613 = var614;
}
var618 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var618 = array_instance Array[Object] */
var619 = 2;
var620 = NEW_array__NativeArray(var619, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var620)->values[0] = (val*) var_mclass;
((struct instance_array__NativeArray*)var620)->values[1] = (val*) var614;
((void (*)(val*, val*, long))(var618->class->vft[COLOR_array__Array__with_native]))(var618, var620, var619) /* with_native on <var618:Array[Object]>*/;
}
var621 = ((val* (*)(val*))(var618->class->vft[COLOR_string__Object__to_s]))(var618) /* to_s on <var618:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_abort]))(var_v, var621) /* add_abort on <var_v:SeparateCompilerVisitor>*/;
} else {
if (varonce622) {
var623 = varonce622;
} else {
var624 = "self";
var625 = 4;
var626 = string__NativeString__to_s_with_length(var624, var625);
var623 = var626;
varonce622 = var623;
}
var627 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_named_var]))(var_v, var_mtype, var623) /* new_named_var on <var_v:SeparateCompilerVisitor>*/;
var_res628 = var627;
var629 = 1;
((void (*)(val*, short int))(var_res628->class->vft[COLOR_abstract_compiler__RuntimeVariable__is_exact_61d]))(var_res628, var629) /* is_exact= on <var_res628:RuntimeVariable>*/;
if (varonce630) {
var631 = varonce630;
} else {
var632 = " = nit_alloc(sizeof(struct instance) + ";
var633 = 39;
var634 = string__NativeString__to_s_with_length(var632, var633);
var631 = var634;
varonce630 = var631;
}
var635 = ((long (*)(val*))(var_attrs->class->vft[COLOR_abstract_collection__Collection__length]))(var_attrs) /* length on <var_attrs:Array[nullable MPropDef]>*/;
if (varonce636) {
var637 = varonce636;
} else {
var638 = "*sizeof(nitattribute_t));";
var639 = 25;
var640 = string__NativeString__to_s_with_length(var638, var639);
var637 = var640;
varonce636 = var637;
}
var641 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var641 = array_instance Array[Object] */
var642 = 4;
var643 = NEW_array__NativeArray(var642, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var643)->values[0] = (val*) var_res628;
((struct instance_array__NativeArray*)var643)->values[1] = (val*) var631;
var644 = BOX_kernel__Int(var635); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var643)->values[2] = (val*) var644;
((struct instance_array__NativeArray*)var643)->values[3] = (val*) var637;
((void (*)(val*, val*, long))(var641->class->vft[COLOR_array__Array__with_native]))(var641, var643, var642) /* with_native on <var641:Array[Object]>*/;
}
var645 = ((val* (*)(val*))(var641->class->vft[COLOR_string__Object__to_s]))(var641) /* to_s on <var641:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var645) /* add on <var_v:SeparateCompilerVisitor>*/;
if (varonce646) {
var647 = varonce646;
} else {
var648 = "->type = type;";
var649 = 14;
var650 = string__NativeString__to_s_with_length(var648, var649);
var647 = var650;
varonce646 = var647;
}
var651 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var651 = array_instance Array[Object] */
var652 = 2;
var653 = NEW_array__NativeArray(var652, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var653)->values[0] = (val*) var_res628;
((struct instance_array__NativeArray*)var653)->values[1] = (val*) var647;
((void (*)(val*, val*, long))(var651->class->vft[COLOR_array__Array__with_native]))(var651, var653, var652) /* with_native on <var651:Array[Object]>*/;
}
var654 = ((val* (*)(val*))(var651->class->vft[COLOR_string__Object__to_s]))(var651) /* to_s on <var651:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var654) /* add on <var_v:SeparateCompilerVisitor>*/;
if (varonce655) {
var656 = varonce655;
} else {
var657 = "type";
var658 = 4;
var659 = string__NativeString__to_s_with_length(var657, var658);
var656 = var659;
varonce655 = var656;
}
((void (*)(val*, val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__hardening_live_type]))(self, var_v, var656) /* hardening_live_type on <self:SeparateCompiler>*/;
if (varonce660) {
var661 = varonce660;
} else {
var662 = "class_";
var663 = 6;
var664 = string__NativeString__to_s_with_length(var662, var663);
var661 = var664;
varonce660 = var661;
}
var665 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var665 = array_instance Array[Object] */
var666 = 2;
var667 = NEW_array__NativeArray(var666, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var667)->values[0] = (val*) var661;
((struct instance_array__NativeArray*)var667)->values[1] = (val*) var_c_name;
((void (*)(val*, val*, long))(var665->class->vft[COLOR_array__Array__with_native]))(var665, var667, var666) /* with_native on <var665:Array[Object]>*/;
}
var668 = ((val* (*)(val*))(var665->class->vft[COLOR_string__Object__to_s]))(var665) /* to_s on <var665:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(var_v, var668) /* require_declaration on <var_v:SeparateCompilerVisitor>*/;
if (varonce669) {
var670 = varonce669;
} else {
var671 = "->class = &class_";
var672 = 17;
var673 = string__NativeString__to_s_with_length(var671, var672);
var670 = var673;
varonce669 = var670;
}
if (varonce674) {
var675 = varonce674;
} else {
var676 = ";";
var677 = 1;
var678 = string__NativeString__to_s_with_length(var676, var677);
var675 = var678;
varonce674 = var675;
}
var679 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var679 = array_instance Array[Object] */
var680 = 4;
var681 = NEW_array__NativeArray(var680, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var681)->values[0] = (val*) var_res628;
((struct instance_array__NativeArray*)var681)->values[1] = (val*) var670;
((struct instance_array__NativeArray*)var681)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var681)->values[3] = (val*) var675;
((void (*)(val*, val*, long))(var679->class->vft[COLOR_array__Array__with_native]))(var679, var681, var680) /* with_native on <var679:Array[Object]>*/;
}
var682 = ((val* (*)(val*))(var679->class->vft[COLOR_string__Object__to_s]))(var679) /* to_s on <var679:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var682) /* add on <var_v:SeparateCompilerVisitor>*/;
((void (*)(val*, val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__generate_init_attr]))(self, var_v, var_res628, var_mtype) /* generate_init_attr on <self:SeparateCompiler>*/;
if (varonce683) {
var684 = varonce683;
} else {
var685 = "return ";
var686 = 7;
var687 = string__NativeString__to_s_with_length(var685, var686);
var684 = var687;
varonce683 = var684;
}
if (varonce688) {
var689 = varonce688;
} else {
var690 = ";";
var691 = 1;
var692 = string__NativeString__to_s_with_length(var690, var691);
var689 = var692;
varonce688 = var689;
}
var693 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var693 = array_instance Array[Object] */
var694 = 3;
var695 = NEW_array__NativeArray(var694, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var695)->values[0] = (val*) var684;
((struct instance_array__NativeArray*)var695)->values[1] = (val*) var_res628;
((struct instance_array__NativeArray*)var695)->values[2] = (val*) var689;
((void (*)(val*, val*, long))(var693->class->vft[COLOR_array__Array__with_native]))(var693, var695, var694) /* with_native on <var693:Array[Object]>*/;
}
var696 = ((val* (*)(val*))(var693->class->vft[COLOR_string__Object__to_s]))(var693) /* to_s on <var693:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var696) /* add on <var_v:SeparateCompilerVisitor>*/;
}
if (varonce697) {
var698 = varonce697;
} else {
var699 = "}";
var700 = 1;
var701 = string__NativeString__to_s_with_length(var699, var700);
var698 = var701;
varonce697 = var698;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var698) /* add on <var_v:SeparateCompilerVisitor>*/;
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#compile_class_to_c for (self: Object, MClass) */
void VIRTUAL_separate_compiler__SeparateCompiler__compile_class_to_c(val* self, val* p0) {
separate_compiler__SeparateCompiler__compile_class_to_c(self, p0);
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#hardening_live_type for (self: SeparateCompiler, SeparateCompilerVisitor, String) */
void separate_compiler__SeparateCompiler__hardening_live_type(val* self, val* p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_v /* var v: SeparateCompilerVisitor */;
val* var_t /* var t: String */;
val* var1 /* : AbstractCompiler */;
val* var2 /* : ModelBuilder */;
val* var3 /* : ToolContext */;
val* var4 /* : OptionBool */;
val* var5 /* : nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : String */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
val* var17 /* : Array[Object] */;
long var18 /* : Int */;
val* var19 /* : NativeArray[Object] */;
val* var20 /* : String */;
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
val* var41 /* : Array[Object] */;
long var42 /* : Int */;
val* var43 /* : NativeArray[Object] */;
val* var44 /* : String */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
long var48 /* : Int */;
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
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
long var62 /* : Int */;
val* var63 /* : String */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
long var67 /* : Int */;
val* var68 /* : String */;
/* Covariant cast for argument 0 (v) <p0:SeparateCompilerVisitor> isa VISITOR */
/* <p0:SeparateCompilerVisitor> isa VISITOR */
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
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 840);
show_backtrace(1);
}
var_v = p0;
var_t = p1;
var1 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:SeparateCompilerVisitor>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var1) /* modelbuilder on <var1:AbstractCompiler(SeparateCompiler)>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var2) /* toolcontext on <var2:ModelBuilder>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_compiler__ToolContext__opt_hardening]))(var3) /* opt_hardening on <var3:ToolContext>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_opts__Option__value]))(var4) /* value on <var4:OptionBool>*/;
var6 = ((struct instance_kernel__Bool*)var5)->value; /* autounbox from nullable Object to Bool */;
var7 = !var6;
if (var7){
goto RET_LABEL;
} else {
}
if (varonce) {
var8 = varonce;
} else {
var9 = "if(";
var10 = 3;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce = var8;
}
if (varonce12) {
var13 = varonce12;
} else {
var14 = " == NULL) {";
var15 = 11;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
var17 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var17 = array_instance Array[Object] */
var18 = 3;
var19 = NEW_array__NativeArray(var18, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var19)->values[0] = (val*) var8;
((struct instance_array__NativeArray*)var19)->values[1] = (val*) var_t;
((struct instance_array__NativeArray*)var19)->values[2] = (val*) var13;
((void (*)(val*, val*, long))(var17->class->vft[COLOR_array__Array__with_native]))(var17, var19, var18) /* with_native on <var17:Array[Object]>*/;
}
var20 = ((val* (*)(val*))(var17->class->vft[COLOR_string__Object__to_s]))(var17) /* to_s on <var17:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var20) /* add on <var_v:SeparateCompilerVisitor>*/;
if (varonce21) {
var22 = varonce21;
} else {
var23 = "type null";
var24 = 9;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_abort]))(var_v, var22) /* add_abort on <var_v:SeparateCompilerVisitor>*/;
if (varonce26) {
var27 = varonce26;
} else {
var28 = "}";
var29 = 1;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var27) /* add on <var_v:SeparateCompilerVisitor>*/;
if (varonce31) {
var32 = varonce31;
} else {
var33 = "if(";
var34 = 3;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
if (varonce36) {
var37 = varonce36;
} else {
var38 = "->table_size == 0) {";
var39 = 20;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
var41 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var41 = array_instance Array[Object] */
var42 = 3;
var43 = NEW_array__NativeArray(var42, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var43)->values[0] = (val*) var32;
((struct instance_array__NativeArray*)var43)->values[1] = (val*) var_t;
((struct instance_array__NativeArray*)var43)->values[2] = (val*) var37;
((void (*)(val*, val*, long))(var41->class->vft[COLOR_array__Array__with_native]))(var41, var43, var42) /* with_native on <var41:Array[Object]>*/;
}
var44 = ((val* (*)(val*))(var41->class->vft[COLOR_string__Object__to_s]))(var41) /* to_s on <var41:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var44) /* add on <var_v:SeparateCompilerVisitor>*/;
if (varonce45) {
var46 = varonce45;
} else {
var47 = "fprintf(stderr, \"Insantiation of a dead type: %s\\n\", ";
var48 = 53;
var49 = string__NativeString__to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
if (varonce50) {
var51 = varonce50;
} else {
var52 = "->name);";
var53 = 8;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
var55 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var55 = array_instance Array[Object] */
var56 = 3;
var57 = NEW_array__NativeArray(var56, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var57)->values[0] = (val*) var46;
((struct instance_array__NativeArray*)var57)->values[1] = (val*) var_t;
((struct instance_array__NativeArray*)var57)->values[2] = (val*) var51;
((void (*)(val*, val*, long))(var55->class->vft[COLOR_array__Array__with_native]))(var55, var57, var56) /* with_native on <var55:Array[Object]>*/;
}
var58 = ((val* (*)(val*))(var55->class->vft[COLOR_string__Object__to_s]))(var55) /* to_s on <var55:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var58) /* add on <var_v:SeparateCompilerVisitor>*/;
if (varonce59) {
var60 = varonce59;
} else {
var61 = "type dead";
var62 = 9;
var63 = string__NativeString__to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_abort]))(var_v, var60) /* add_abort on <var_v:SeparateCompilerVisitor>*/;
if (varonce64) {
var65 = varonce64;
} else {
var66 = "}";
var67 = 1;
var68 = string__NativeString__to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var65) /* add on <var_v:SeparateCompilerVisitor>*/;
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#hardening_live_type for (self: Object, SeparateCompilerVisitor, String) */
void VIRTUAL_separate_compiler__SeparateCompiler__hardening_live_type(val* self, val* p0, val* p1) {
separate_compiler__SeparateCompiler__hardening_live_type(self, p0, p1);
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#new_visitor for (self: SeparateCompiler): SeparateCompilerVisitor */
val* separate_compiler__SeparateCompiler__new_visitor(val* self) {
val* var /* : SeparateCompilerVisitor */;
val* var1 /* : SeparateCompilerVisitor */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var1 = NEW_separate_compiler__SeparateCompilerVisitor(&type_separate_compiler__SeparateCompilerVisitor);
((void (*)(val*, val*))(var1->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__init]))(var1, self) /* init on <var1:SeparateCompilerVisitor>*/;
/* <var1:SeparateCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_abstract_compiler__AbstractCompiler_VTVISITOR];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
if (!var2) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 853);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#new_visitor for (self: Object): AbstractCompilerVisitor */
val* VIRTUAL_separate_compiler__SeparateCompiler__new_visitor(val* self) {
val* var /* : AbstractCompilerVisitor */;
val* var1 /* : SeparateCompilerVisitor */;
var1 = separate_compiler__SeparateCompiler__new_visitor(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#type_tables for (self: SeparateCompiler): Map[MType, Array[nullable MType]] */
val* separate_compiler__SeparateCompiler__type_tables(val* self) {
val* var /* : Map[MType, Array[nullable MType]] */;
val* var1 /* : Map[MType, Array[nullable MType]] */;
var1 = self->attrs[COLOR_separate_compiler__SeparateCompiler___64dtype_tables].val; /* @type_tables on <self:SeparateCompiler> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @type_tables");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 857);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#type_tables for (self: Object): Map[MType, Array[nullable MType]] */
val* VIRTUAL_separate_compiler__SeparateCompiler__type_tables(val* self) {
val* var /* : Map[MType, Array[nullable MType]] */;
val* var1 /* : Map[MType, Array[nullable MType]] */;
var1 = separate_compiler__SeparateCompiler__type_tables(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#type_tables= for (self: SeparateCompiler, Map[MType, Array[nullable MType]]) */
void separate_compiler__SeparateCompiler__type_tables_61d(val* self, val* p0) {
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dtype_tables].val = p0; /* @type_tables on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#type_tables= for (self: Object, Map[MType, Array[nullable MType]]) */
void VIRTUAL_separate_compiler__SeparateCompiler__type_tables_61d(val* self, val* p0) {
separate_compiler__SeparateCompiler__type_tables_61d(self, p0);
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#resolution_tables for (self: SeparateCompiler): Map[MClassType, Array[nullable MType]] */
val* separate_compiler__SeparateCompiler__resolution_tables(val* self) {
val* var /* : Map[MClassType, Array[nullable MType]] */;
val* var1 /* : Map[MClassType, Array[nullable MType]] */;
var1 = self->attrs[COLOR_separate_compiler__SeparateCompiler___64dresolution_tables].val; /* @resolution_tables on <self:SeparateCompiler> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @resolution_tables");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 858);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#resolution_tables for (self: Object): Map[MClassType, Array[nullable MType]] */
val* VIRTUAL_separate_compiler__SeparateCompiler__resolution_tables(val* self) {
val* var /* : Map[MClassType, Array[nullable MType]] */;
val* var1 /* : Map[MClassType, Array[nullable MType]] */;
var1 = separate_compiler__SeparateCompiler__resolution_tables(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#resolution_tables= for (self: SeparateCompiler, Map[MClassType, Array[nullable MType]]) */
void separate_compiler__SeparateCompiler__resolution_tables_61d(val* self, val* p0) {
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dresolution_tables].val = p0; /* @resolution_tables on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#resolution_tables= for (self: Object, Map[MClassType, Array[nullable MType]]) */
void VIRTUAL_separate_compiler__SeparateCompiler__resolution_tables_61d(val* self, val* p0) {
separate_compiler__SeparateCompiler__resolution_tables_61d(self, p0);
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#method_tables for (self: SeparateCompiler): Map[MClass, Array[nullable MPropDef]] */
val* separate_compiler__SeparateCompiler__method_tables(val* self) {
val* var /* : Map[MClass, Array[nullable MPropDef]] */;
val* var1 /* : Map[MClass, Array[nullable MPropDef]] */;
var1 = self->attrs[COLOR_separate_compiler__SeparateCompiler___64dmethod_tables].val; /* @method_tables on <self:SeparateCompiler> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @method_tables");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 859);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#method_tables for (self: Object): Map[MClass, Array[nullable MPropDef]] */
val* VIRTUAL_separate_compiler__SeparateCompiler__method_tables(val* self) {
val* var /* : Map[MClass, Array[nullable MPropDef]] */;
val* var1 /* : Map[MClass, Array[nullable MPropDef]] */;
var1 = separate_compiler__SeparateCompiler__method_tables(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#method_tables= for (self: SeparateCompiler, Map[MClass, Array[nullable MPropDef]]) */
void separate_compiler__SeparateCompiler__method_tables_61d(val* self, val* p0) {
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dmethod_tables].val = p0; /* @method_tables on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#method_tables= for (self: Object, Map[MClass, Array[nullable MPropDef]]) */
void VIRTUAL_separate_compiler__SeparateCompiler__method_tables_61d(val* self, val* p0) {
separate_compiler__SeparateCompiler__method_tables_61d(self, p0);
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#attr_tables for (self: SeparateCompiler): Map[MClass, Array[nullable MPropDef]] */
val* separate_compiler__SeparateCompiler__attr_tables(val* self) {
val* var /* : Map[MClass, Array[nullable MPropDef]] */;
val* var1 /* : Map[MClass, Array[nullable MPropDef]] */;
var1 = self->attrs[COLOR_separate_compiler__SeparateCompiler___64dattr_tables].val; /* @attr_tables on <self:SeparateCompiler> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @attr_tables");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 860);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#attr_tables for (self: Object): Map[MClass, Array[nullable MPropDef]] */
val* VIRTUAL_separate_compiler__SeparateCompiler__attr_tables(val* self) {
val* var /* : Map[MClass, Array[nullable MPropDef]] */;
val* var1 /* : Map[MClass, Array[nullable MPropDef]] */;
var1 = separate_compiler__SeparateCompiler__attr_tables(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#attr_tables= for (self: SeparateCompiler, Map[MClass, Array[nullable MPropDef]]) */
void separate_compiler__SeparateCompiler__attr_tables_61d(val* self, val* p0) {
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dattr_tables].val = p0; /* @attr_tables on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#attr_tables= for (self: Object, Map[MClass, Array[nullable MPropDef]]) */
void VIRTUAL_separate_compiler__SeparateCompiler__attr_tables_61d(val* self, val* p0) {
separate_compiler__SeparateCompiler__attr_tables_61d(self, p0);
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#display_stats for (self: SeparateCompiler) */
void separate_compiler__SeparateCompiler__display_stats(val* self) {
val* var /* : ModelBuilder */;
val* var1 /* : ToolContext */;
val* var2 /* : OptionBool */;
val* var3 /* : nullable Object */;
short int var4 /* : Bool */;
((void (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__display_stats]))(self) /* display_stats on <self:SeparateCompiler>*/;
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(self) /* modelbuilder on <self:SeparateCompiler>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var) /* toolcontext on <var:ModelBuilder>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_separate_compiler__ToolContext__opt_tables_metrics]))(var1) /* opt_tables_metrics on <var1:ToolContext>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_opts__Option__value]))(var2) /* value on <var2:OptionBool>*/;
var4 = ((struct instance_kernel__Bool*)var3)->value; /* autounbox from nullable Object to Bool */;
if (var4){
((void (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__display_sizes]))(self) /* display_sizes on <self:SeparateCompiler>*/;
} else {
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#display_stats for (self: Object) */
void VIRTUAL_separate_compiler__SeparateCompiler__display_stats(val* self) {
separate_compiler__SeparateCompiler__display_stats(self);
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#display_sizes for (self: SeparateCompiler) */
void separate_compiler__SeparateCompiler__display_sizes(val* self) {
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : String */;
static val* varonce4;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : String */;
long var9 /* : Int */;
long var_total /* var total: Int */;
long var10 /* : Int */;
long var_holes /* var holes: Int */;
val* var11 /* : Map[MType, Array[nullable MType]] */;
val* var12 /* : MapIterator[Object, nullable Object] */;
short int var13 /* : Bool */;
val* var14 /* : Object */;
val* var_t /* var t: MType */;
val* var15 /* : nullable Object */;
val* var_table /* var table: Array[nullable MType] */;
long var16 /* : Int */;
long var17 /* : Int */;
long var19 /* : Int */;
val* var20 /* : Iterator[nullable Object] */;
short int var21 /* : Bool */;
val* var22 /* : nullable Object */;
val* var_e /* var e: nullable MType */;
val* var23 /* : null */;
short int var24 /* : Bool */;
long var25 /* : Int */;
long var26 /* : Int */;
long var28 /* : Int */;
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
val* var43 /* : Object */;
val* var44 /* : Object */;
val* var45 /* : String */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
long var49 /* : Int */;
val* var50 /* : String */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : String */;
long var56 /* : Int */;
long var57 /* : Int */;
val* var58 /* : Map[MClassType, Array[nullable MType]] */;
val* var59 /* : MapIterator[Object, nullable Object] */;
short int var60 /* : Bool */;
val* var61 /* : Object */;
val* var_t62 /* var t: MClassType */;
val* var63 /* : nullable Object */;
val* var_table64 /* var table: Array[nullable MType] */;
long var65 /* : Int */;
long var66 /* : Int */;
long var68 /* : Int */;
val* var69 /* : Iterator[nullable Object] */;
short int var70 /* : Bool */;
val* var71 /* : nullable Object */;
val* var_e72 /* var e: nullable MType */;
val* var73 /* : null */;
short int var74 /* : Bool */;
long var75 /* : Int */;
long var76 /* : Int */;
long var78 /* : Int */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
long var84 /* : Int */;
val* var85 /* : String */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
long var89 /* : Int */;
val* var90 /* : String */;
val* var91 /* : Array[Object] */;
long var92 /* : Int */;
val* var93 /* : NativeArray[Object] */;
val* var94 /* : Object */;
val* var95 /* : Object */;
val* var96 /* : String */;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : NativeString */;
long var100 /* : Int */;
val* var101 /* : String */;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : NativeString */;
long var105 /* : Int */;
val* var106 /* : String */;
long var107 /* : Int */;
long var108 /* : Int */;
val* var109 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var110 /* : MapIterator[Object, nullable Object] */;
short int var111 /* : Bool */;
val* var112 /* : Object */;
val* var_t113 /* var t: MClass */;
val* var114 /* : nullable Object */;
val* var_table115 /* var table: Array[nullable MPropDef] */;
long var116 /* : Int */;
long var117 /* : Int */;
long var119 /* : Int */;
val* var120 /* : Iterator[nullable Object] */;
short int var121 /* : Bool */;
val* var122 /* : nullable Object */;
val* var_e123 /* var e: nullable MPropDef */;
val* var124 /* : null */;
short int var125 /* : Bool */;
long var126 /* : Int */;
long var127 /* : Int */;
long var129 /* : Int */;
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
val* var145 /* : Object */;
val* var146 /* : Object */;
val* var147 /* : String */;
static val* varonce148;
val* var149 /* : String */;
char* var150 /* : NativeString */;
long var151 /* : Int */;
val* var152 /* : String */;
static val* varonce153;
val* var154 /* : String */;
char* var155 /* : NativeString */;
long var156 /* : Int */;
val* var157 /* : String */;
long var158 /* : Int */;
long var159 /* : Int */;
val* var160 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var161 /* : MapIterator[Object, nullable Object] */;
short int var162 /* : Bool */;
val* var163 /* : Object */;
val* var_t164 /* var t: MClass */;
val* var165 /* : nullable Object */;
val* var_table166 /* var table: Array[nullable MPropDef] */;
long var167 /* : Int */;
long var168 /* : Int */;
long var170 /* : Int */;
val* var171 /* : Iterator[nullable Object] */;
short int var172 /* : Bool */;
val* var173 /* : nullable Object */;
val* var_e174 /* var e: nullable MPropDef */;
val* var175 /* : null */;
short int var176 /* : Bool */;
long var177 /* : Int */;
long var178 /* : Int */;
long var180 /* : Int */;
static val* varonce183;
val* var184 /* : String */;
char* var185 /* : NativeString */;
long var186 /* : Int */;
val* var187 /* : String */;
static val* varonce188;
val* var189 /* : String */;
char* var190 /* : NativeString */;
long var191 /* : Int */;
val* var192 /* : String */;
val* var193 /* : Array[Object] */;
long var194 /* : Int */;
val* var195 /* : NativeArray[Object] */;
val* var196 /* : Object */;
val* var197 /* : Object */;
val* var198 /* : String */;
if (varonce) {
var = varonce;
} else {
var1 = "# size of subtyping tables";
var2 = 26;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var) /* print on <self:SeparateCompiler>*/;
if (varonce4) {
var5 = varonce4;
} else {
var6 = "\11total \11holes";
var7 = 13;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce4 = var5;
}
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var5) /* print on <self:SeparateCompiler>*/;
var9 = 0;
var_total = var9;
var10 = 0;
var_holes = var10;
var11 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__type_tables]))(self) /* type_tables on <self:SeparateCompiler>*/;
var12 = ((val* (*)(val*))(var11->class->vft[COLOR_abstract_collection__MapRead__iterator]))(var11) /* iterator on <var11:Map[MType, Array[nullable MType]]>*/;
for(;;) {
var13 = ((short int (*)(val*))(var12->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var12) /* is_ok on <var12:MapIterator[Object, nullable Object]>*/;
if(!var13) break;
var14 = ((val* (*)(val*))(var12->class->vft[COLOR_abstract_collection__MapIterator__key]))(var12) /* key on <var12:MapIterator[Object, nullable Object]>*/;
var_t = var14;
var15 = ((val* (*)(val*))(var12->class->vft[COLOR_abstract_collection__MapIterator__item]))(var12) /* item on <var12:MapIterator[Object, nullable Object]>*/;
var_table = var15;
var16 = ((long (*)(val*))(var_table->class->vft[COLOR_abstract_collection__Collection__length]))(var_table) /* length on <var_table:Array[nullable MType]>*/;
{ /* Inline kernel#Int#+ (var_total,var16) */
var19 = var_total + var16;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var_total = var17;
var20 = ((val* (*)(val*))(var_table->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_table) /* iterator on <var_table:Array[nullable MType]>*/;
for(;;) {
var21 = ((short int (*)(val*))(var20->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var20) /* is_ok on <var20:Iterator[nullable Object]>*/;
if(!var21) break;
var22 = ((val* (*)(val*))(var20->class->vft[COLOR_abstract_collection__Iterator__item]))(var20) /* item on <var20:Iterator[nullable Object]>*/;
var_e = var22;
var23 = NULL;
if (var_e == NULL) {
var24 = 1; /* is null */
} else {
var24 = 0; /* arg is null but recv is not */
}
if (var24){
var25 = 1;
{ /* Inline kernel#Int#+ (var_holes,var25) */
var28 = var_holes + var25;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
var_holes = var26;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var20->class->vft[COLOR_abstract_collection__Iterator__next]))(var20) /* next on <var20:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
CONTINUE_label29: (void)0;
((void (*)(val*))(var12->class->vft[COLOR_abstract_collection__MapIterator__next]))(var12) /* next on <var12:MapIterator[Object, nullable Object]>*/;
}
BREAK_label29: (void)0;
if (varonce30) {
var31 = varonce30;
} else {
var32 = "\11";
var33 = 1;
var34 = string__NativeString__to_s_with_length(var32, var33);
var31 = var34;
varonce30 = var31;
}
if (varonce35) {
var36 = varonce35;
} else {
var37 = "\11";
var38 = 1;
var39 = string__NativeString__to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
var40 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var40 = array_instance Array[Object] */
var41 = 4;
var42 = NEW_array__NativeArray(var41, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var42)->values[0] = (val*) var31;
var43 = BOX_kernel__Int(var_total); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var42)->values[1] = (val*) var43;
((struct instance_array__NativeArray*)var42)->values[2] = (val*) var36;
var44 = BOX_kernel__Int(var_holes); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var42)->values[3] = (val*) var44;
((void (*)(val*, val*, long))(var40->class->vft[COLOR_array__Array__with_native]))(var40, var42, var41) /* with_native on <var40:Array[Object]>*/;
}
var45 = ((val* (*)(val*))(var40->class->vft[COLOR_string__Object__to_s]))(var40) /* to_s on <var40:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var45) /* print on <self:SeparateCompiler>*/;
if (varonce46) {
var47 = varonce46;
} else {
var48 = "# size of resolution tables";
var49 = 27;
var50 = string__NativeString__to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var47) /* print on <self:SeparateCompiler>*/;
if (varonce51) {
var52 = varonce51;
} else {
var53 = "\11total \11holes";
var54 = 13;
var55 = string__NativeString__to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var52) /* print on <self:SeparateCompiler>*/;
var56 = 0;
var_total = var56;
var57 = 0;
var_holes = var57;
var58 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__resolution_tables]))(self) /* resolution_tables on <self:SeparateCompiler>*/;
var59 = ((val* (*)(val*))(var58->class->vft[COLOR_abstract_collection__MapRead__iterator]))(var58) /* iterator on <var58:Map[MClassType, Array[nullable MType]]>*/;
for(;;) {
var60 = ((short int (*)(val*))(var59->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var59) /* is_ok on <var59:MapIterator[Object, nullable Object]>*/;
if(!var60) break;
var61 = ((val* (*)(val*))(var59->class->vft[COLOR_abstract_collection__MapIterator__key]))(var59) /* key on <var59:MapIterator[Object, nullable Object]>*/;
var_t62 = var61;
var63 = ((val* (*)(val*))(var59->class->vft[COLOR_abstract_collection__MapIterator__item]))(var59) /* item on <var59:MapIterator[Object, nullable Object]>*/;
var_table64 = var63;
var65 = ((long (*)(val*))(var_table64->class->vft[COLOR_abstract_collection__Collection__length]))(var_table64) /* length on <var_table64:Array[nullable MType]>*/;
{ /* Inline kernel#Int#+ (var_total,var65) */
var68 = var_total + var65;
var66 = var68;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
var_total = var66;
var69 = ((val* (*)(val*))(var_table64->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_table64) /* iterator on <var_table64:Array[nullable MType]>*/;
for(;;) {
var70 = ((short int (*)(val*))(var69->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var69) /* is_ok on <var69:Iterator[nullable Object]>*/;
if(!var70) break;
var71 = ((val* (*)(val*))(var69->class->vft[COLOR_abstract_collection__Iterator__item]))(var69) /* item on <var69:Iterator[nullable Object]>*/;
var_e72 = var71;
var73 = NULL;
if (var_e72 == NULL) {
var74 = 1; /* is null */
} else {
var74 = 0; /* arg is null but recv is not */
}
if (var74){
var75 = 1;
{ /* Inline kernel#Int#+ (var_holes,var75) */
var78 = var_holes + var75;
var76 = var78;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
var_holes = var76;
} else {
}
CONTINUE_label79: (void)0;
((void (*)(val*))(var69->class->vft[COLOR_abstract_collection__Iterator__next]))(var69) /* next on <var69:Iterator[nullable Object]>*/;
}
BREAK_label79: (void)0;
CONTINUE_label80: (void)0;
((void (*)(val*))(var59->class->vft[COLOR_abstract_collection__MapIterator__next]))(var59) /* next on <var59:MapIterator[Object, nullable Object]>*/;
}
BREAK_label80: (void)0;
if (varonce81) {
var82 = varonce81;
} else {
var83 = "\11";
var84 = 1;
var85 = string__NativeString__to_s_with_length(var83, var84);
var82 = var85;
varonce81 = var82;
}
if (varonce86) {
var87 = varonce86;
} else {
var88 = "\11";
var89 = 1;
var90 = string__NativeString__to_s_with_length(var88, var89);
var87 = var90;
varonce86 = var87;
}
var91 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var91 = array_instance Array[Object] */
var92 = 4;
var93 = NEW_array__NativeArray(var92, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var93)->values[0] = (val*) var82;
var94 = BOX_kernel__Int(var_total); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var93)->values[1] = (val*) var94;
((struct instance_array__NativeArray*)var93)->values[2] = (val*) var87;
var95 = BOX_kernel__Int(var_holes); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var93)->values[3] = (val*) var95;
((void (*)(val*, val*, long))(var91->class->vft[COLOR_array__Array__with_native]))(var91, var93, var92) /* with_native on <var91:Array[Object]>*/;
}
var96 = ((val* (*)(val*))(var91->class->vft[COLOR_string__Object__to_s]))(var91) /* to_s on <var91:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var96) /* print on <self:SeparateCompiler>*/;
if (varonce97) {
var98 = varonce97;
} else {
var99 = "# size of methods tables";
var100 = 24;
var101 = string__NativeString__to_s_with_length(var99, var100);
var98 = var101;
varonce97 = var98;
}
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var98) /* print on <self:SeparateCompiler>*/;
if (varonce102) {
var103 = varonce102;
} else {
var104 = "\11total \11holes";
var105 = 13;
var106 = string__NativeString__to_s_with_length(var104, var105);
var103 = var106;
varonce102 = var103;
}
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var103) /* print on <self:SeparateCompiler>*/;
var107 = 0;
var_total = var107;
var108 = 0;
var_holes = var108;
var109 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__method_tables]))(self) /* method_tables on <self:SeparateCompiler>*/;
var110 = ((val* (*)(val*))(var109->class->vft[COLOR_abstract_collection__MapRead__iterator]))(var109) /* iterator on <var109:Map[MClass, Array[nullable MPropDef]]>*/;
for(;;) {
var111 = ((short int (*)(val*))(var110->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var110) /* is_ok on <var110:MapIterator[Object, nullable Object]>*/;
if(!var111) break;
var112 = ((val* (*)(val*))(var110->class->vft[COLOR_abstract_collection__MapIterator__key]))(var110) /* key on <var110:MapIterator[Object, nullable Object]>*/;
var_t113 = var112;
var114 = ((val* (*)(val*))(var110->class->vft[COLOR_abstract_collection__MapIterator__item]))(var110) /* item on <var110:MapIterator[Object, nullable Object]>*/;
var_table115 = var114;
var116 = ((long (*)(val*))(var_table115->class->vft[COLOR_abstract_collection__Collection__length]))(var_table115) /* length on <var_table115:Array[nullable MPropDef]>*/;
{ /* Inline kernel#Int#+ (var_total,var116) */
var119 = var_total + var116;
var117 = var119;
goto RET_LABEL118;
RET_LABEL118:(void)0;
}
var_total = var117;
var120 = ((val* (*)(val*))(var_table115->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_table115) /* iterator on <var_table115:Array[nullable MPropDef]>*/;
for(;;) {
var121 = ((short int (*)(val*))(var120->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var120) /* is_ok on <var120:Iterator[nullable Object]>*/;
if(!var121) break;
var122 = ((val* (*)(val*))(var120->class->vft[COLOR_abstract_collection__Iterator__item]))(var120) /* item on <var120:Iterator[nullable Object]>*/;
var_e123 = var122;
var124 = NULL;
if (var_e123 == NULL) {
var125 = 1; /* is null */
} else {
var125 = 0; /* arg is null but recv is not */
}
if (var125){
var126 = 1;
{ /* Inline kernel#Int#+ (var_holes,var126) */
var129 = var_holes + var126;
var127 = var129;
goto RET_LABEL128;
RET_LABEL128:(void)0;
}
var_holes = var127;
} else {
}
CONTINUE_label130: (void)0;
((void (*)(val*))(var120->class->vft[COLOR_abstract_collection__Iterator__next]))(var120) /* next on <var120:Iterator[nullable Object]>*/;
}
BREAK_label130: (void)0;
CONTINUE_label131: (void)0;
((void (*)(val*))(var110->class->vft[COLOR_abstract_collection__MapIterator__next]))(var110) /* next on <var110:MapIterator[Object, nullable Object]>*/;
}
BREAK_label131: (void)0;
if (varonce132) {
var133 = varonce132;
} else {
var134 = "\11";
var135 = 1;
var136 = string__NativeString__to_s_with_length(var134, var135);
var133 = var136;
varonce132 = var133;
}
if (varonce137) {
var138 = varonce137;
} else {
var139 = "\11";
var140 = 1;
var141 = string__NativeString__to_s_with_length(var139, var140);
var138 = var141;
varonce137 = var138;
}
var142 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var142 = array_instance Array[Object] */
var143 = 4;
var144 = NEW_array__NativeArray(var143, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var144)->values[0] = (val*) var133;
var145 = BOX_kernel__Int(var_total); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var144)->values[1] = (val*) var145;
((struct instance_array__NativeArray*)var144)->values[2] = (val*) var138;
var146 = BOX_kernel__Int(var_holes); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var144)->values[3] = (val*) var146;
((void (*)(val*, val*, long))(var142->class->vft[COLOR_array__Array__with_native]))(var142, var144, var143) /* with_native on <var142:Array[Object]>*/;
}
var147 = ((val* (*)(val*))(var142->class->vft[COLOR_string__Object__to_s]))(var142) /* to_s on <var142:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var147) /* print on <self:SeparateCompiler>*/;
if (varonce148) {
var149 = varonce148;
} else {
var150 = "# size of attributes tables";
var151 = 27;
var152 = string__NativeString__to_s_with_length(var150, var151);
var149 = var152;
varonce148 = var149;
}
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var149) /* print on <self:SeparateCompiler>*/;
if (varonce153) {
var154 = varonce153;
} else {
var155 = "\11total \11holes";
var156 = 13;
var157 = string__NativeString__to_s_with_length(var155, var156);
var154 = var157;
varonce153 = var154;
}
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var154) /* print on <self:SeparateCompiler>*/;
var158 = 0;
var_total = var158;
var159 = 0;
var_holes = var159;
var160 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__attr_tables]))(self) /* attr_tables on <self:SeparateCompiler>*/;
var161 = ((val* (*)(val*))(var160->class->vft[COLOR_abstract_collection__MapRead__iterator]))(var160) /* iterator on <var160:Map[MClass, Array[nullable MPropDef]]>*/;
for(;;) {
var162 = ((short int (*)(val*))(var161->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var161) /* is_ok on <var161:MapIterator[Object, nullable Object]>*/;
if(!var162) break;
var163 = ((val* (*)(val*))(var161->class->vft[COLOR_abstract_collection__MapIterator__key]))(var161) /* key on <var161:MapIterator[Object, nullable Object]>*/;
var_t164 = var163;
var165 = ((val* (*)(val*))(var161->class->vft[COLOR_abstract_collection__MapIterator__item]))(var161) /* item on <var161:MapIterator[Object, nullable Object]>*/;
var_table166 = var165;
var167 = ((long (*)(val*))(var_table166->class->vft[COLOR_abstract_collection__Collection__length]))(var_table166) /* length on <var_table166:Array[nullable MPropDef]>*/;
{ /* Inline kernel#Int#+ (var_total,var167) */
var170 = var_total + var167;
var168 = var170;
goto RET_LABEL169;
RET_LABEL169:(void)0;
}
var_total = var168;
var171 = ((val* (*)(val*))(var_table166->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_table166) /* iterator on <var_table166:Array[nullable MPropDef]>*/;
for(;;) {
var172 = ((short int (*)(val*))(var171->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var171) /* is_ok on <var171:Iterator[nullable Object]>*/;
if(!var172) break;
var173 = ((val* (*)(val*))(var171->class->vft[COLOR_abstract_collection__Iterator__item]))(var171) /* item on <var171:Iterator[nullable Object]>*/;
var_e174 = var173;
var175 = NULL;
if (var_e174 == NULL) {
var176 = 1; /* is null */
} else {
var176 = 0; /* arg is null but recv is not */
}
if (var176){
var177 = 1;
{ /* Inline kernel#Int#+ (var_holes,var177) */
var180 = var_holes + var177;
var178 = var180;
goto RET_LABEL179;
RET_LABEL179:(void)0;
}
var_holes = var178;
} else {
}
CONTINUE_label181: (void)0;
((void (*)(val*))(var171->class->vft[COLOR_abstract_collection__Iterator__next]))(var171) /* next on <var171:Iterator[nullable Object]>*/;
}
BREAK_label181: (void)0;
CONTINUE_label182: (void)0;
((void (*)(val*))(var161->class->vft[COLOR_abstract_collection__MapIterator__next]))(var161) /* next on <var161:MapIterator[Object, nullable Object]>*/;
}
BREAK_label182: (void)0;
if (varonce183) {
var184 = varonce183;
} else {
var185 = "\11";
var186 = 1;
var187 = string__NativeString__to_s_with_length(var185, var186);
var184 = var187;
varonce183 = var184;
}
if (varonce188) {
var189 = varonce188;
} else {
var190 = "\11";
var191 = 1;
var192 = string__NativeString__to_s_with_length(var190, var191);
var189 = var192;
varonce188 = var189;
}
var193 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var193 = array_instance Array[Object] */
var194 = 4;
var195 = NEW_array__NativeArray(var194, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var195)->values[0] = (val*) var184;
var196 = BOX_kernel__Int(var_total); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var195)->values[1] = (val*) var196;
((struct instance_array__NativeArray*)var195)->values[2] = (val*) var189;
var197 = BOX_kernel__Int(var_holes); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var195)->values[3] = (val*) var197;
((void (*)(val*, val*, long))(var193->class->vft[COLOR_array__Array__with_native]))(var193, var195, var194) /* with_native on <var193:Array[Object]>*/;
}
var198 = ((val* (*)(val*))(var193->class->vft[COLOR_string__Object__to_s]))(var193) /* to_s on <var193:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var198) /* print on <self:SeparateCompiler>*/;
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#display_sizes for (self: Object) */
void VIRTUAL_separate_compiler__SeparateCompiler__display_sizes(val* self) {
separate_compiler__SeparateCompiler__display_sizes(self);
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#compile_nitni_structs for (self: SeparateCompiler) */
void separate_compiler__SeparateCompiler__compile_nitni_structs(val* self) {
val* var /* : CodeWriter */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateCompiler>*/;
if (varonce) {
var1 = varonce;
} else {
var2 = "struct nitni_instance {struct instance *value;};";
var3 = 48;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
((void (*)(val*, val*))(var->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var, var1) /* add_decl on <var:CodeWriter>*/;
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#compile_nitni_structs for (self: Object) */
void VIRTUAL_separate_compiler__SeparateCompiler__compile_nitni_structs(val* self) {
separate_compiler__SeparateCompiler__compile_nitni_structs(self);
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#finalize_ffi_for_module for (self: SeparateCompiler, AModule) */
void separate_compiler__SeparateCompiler__finalize_ffi_for_module(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
val* var /* : MModule */;
val* var_old_module /* var old_module: MModule */;
val* var1 /* : nullable MModule */;
var_nmodule = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:SeparateCompiler>*/;
var_old_module = var;
var1 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_modelbuilder__AModule__mmodule]))(var_nmodule) /* mmodule on <var_nmodule:AModule>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 921);
show_backtrace(1);
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule_61d]))(self, var1) /* mainmodule= on <self:SeparateCompiler>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__finalize_ffi_for_module]))(self, p0) /* finalize_ffi_for_module on <self:SeparateCompiler>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule_61d]))(self, var_old_module) /* mainmodule= on <self:SeparateCompiler>*/;
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#finalize_ffi_for_module for (self: Object, AModule) */
void VIRTUAL_separate_compiler__SeparateCompiler__finalize_ffi_for_module(val* self, val* p0) {
separate_compiler__SeparateCompiler__finalize_ffi_for_module(self, p0);
RET_LABEL:;
}
/* method separate_compiler#SeparateCompilerVisitor#adapt_signature for (self: SeparateCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void separate_compiler__SeparateCompilerVisitor__adapt_signature(val* self, val* p0, val* p1) {
val* var_m /* var m: MMethodDef */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var /* : nullable MSignature */;
val* var1 /* : MClassDef */;
val* var2 /* : MClassType */;
val* var3 /* : MClassDef */;
val* var4 /* : MClassType */;
val* var5 /* : MClassDef */;
val* var6 /* : MModule */;
short int var7 /* : Bool */;
val* var8 /* : MType */;
val* var_msignature /* var msignature: MSignature */;
val* var9 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
val* var10 /* : MType */;
val* var11 /* : String */;
val* var12 /* : MClassDef */;
val* var13 /* : MClass */;
val* var14 /* : MClassType */;
val* var15 /* : String */;
short int var16 /* : Bool */;
val* var17 /* : nullable Object */;
val* var18 /* : MClassDef */;
val* var19 /* : MClass */;
val* var20 /* : MClassType */;
val* var21 /* : RuntimeVariable */;
val* var22 /* : Range[Int] */;
long var23 /* : Int */;
long var24 /* : Int */;
val* var25 /* : Discrete */;
val* var26 /* : Discrete */;
val* var27 /* : Iterator[nullable Object] */;
short int var28 /* : Bool */;
val* var29 /* : nullable Object */;
long var_i /* var i: Int */;
long var30 /* : Int */;
val* var31 /* : Array[MParameter] */;
val* var32 /* : nullable Object */;
val* var33 /* : MType */;
val* var_t /* var t: MType */;
long var34 /* : Int */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
long var38 /* : Int */;
long var39 /* : Int */;
long var41 /* : Int */;
val* var42 /* : nullable Object */;
val* var43 /* : MType */;
long var44 /* : Int */;
long var45 /* : Int */;
long var47 /* : Int */;
long var48 /* : Int */;
long var49 /* : Int */;
long var51 /* : Int */;
val* var52 /* : nullable Object */;
val* var53 /* : RuntimeVariable */;
var_m = p0;
var_args = p1;
var = ((val* (*)(val*))(var_m->class->vft[COLOR_model__MMethodDef__msignature]))(var_m) /* msignature on <var_m:MMethodDef>*/;
var1 = ((val* (*)(val*))(var_m->class->vft[COLOR_model__MPropDef__mclassdef]))(var_m) /* mclassdef on <var_m:MMethodDef>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_model__MClassDef__bound_mtype]))(var1) /* bound_mtype on <var1:MClassDef>*/;
var3 = ((val* (*)(val*))(var_m->class->vft[COLOR_model__MPropDef__mclassdef]))(var_m) /* mclassdef on <var_m:MMethodDef>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_model__MClassDef__bound_mtype]))(var3) /* bound_mtype on <var3:MClassDef>*/;
var5 = ((val* (*)(val*))(var_m->class->vft[COLOR_model__MPropDef__mclassdef]))(var_m) /* mclassdef on <var_m:MMethodDef>*/;
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_model__MClassDef__mmodule]))(var5) /* mmodule on <var5:MClassDef>*/;
var7 = 1;
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 935);
show_backtrace(1);
} else {
var8 = ((val* (*)(val*, val*, val*, val*, short int))(var->class->vft[COLOR_model__MType__resolve_for]))(var, var2, var4, var6, var7) /* resolve_for on <var:nullable MSignature>*/;
}
var_msignature = var8;
var9 = ((val* (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__first]))(var_args) /* first on <var_args:Array[RuntimeVariable]>*/;
var_recv = var9;
var10 = ((val* (*)(val*))(var_recv->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_recv) /* mtype on <var_recv:RuntimeVariable>*/;
var11 = ((val* (*)(val*))(var10->class->vft[COLOR_abstract_compiler__MType__ctype]))(var10) /* ctype on <var10:MType>*/;
var12 = ((val* (*)(val*))(var_m->class->vft[COLOR_model__MPropDef__mclassdef]))(var_m) /* mclassdef on <var_m:MMethodDef>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_model__MClassDef__mclass]))(var12) /* mclass on <var12:MClassDef>*/;
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_model__MClass__mclass_type]))(var13) /* mclass_type on <var13:MClass>*/;
var15 = ((val* (*)(val*))(var14->class->vft[COLOR_abstract_compiler__MType__ctype]))(var14) /* ctype on <var14:MClassType>*/;
var16 = ((short int (*)(val*, val*))(var11->class->vft[COLOR_kernel__Object___33d_61d]))(var11, var15) /* != on <var11:String>*/;
if (var16){
var17 = ((val* (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__first]))(var_args) /* first on <var_args:Array[RuntimeVariable]>*/;
var18 = ((val* (*)(val*))(var_m->class->vft[COLOR_model__MPropDef__mclassdef]))(var_m) /* mclassdef on <var_m:MMethodDef>*/;
var19 = ((val* (*)(val*))(var18->class->vft[COLOR_model__MClassDef__mclass]))(var18) /* mclass on <var18:MClassDef>*/;
var20 = ((val* (*)(val*))(var19->class->vft[COLOR_model__MClass__mclass_type]))(var19) /* mclass_type on <var19:MClass>*/;
var21 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__autobox]))(self, var17, var20) /* autobox on <self:SeparateCompilerVisitor>*/;
((void (*)(val*, val*))(var_args->class->vft[COLOR_abstract_collection__Sequence__first_61d]))(var_args, var21) /* first= on <var_args:Array[RuntimeVariable]>*/;
} else {
}
var22 = NEW_range__Range(&type_range__Rangekernel__Int);
var23 = 0;
var24 = ((long (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__arity]))(var_msignature) /* arity on <var_msignature:MSignature>*/;
var25 = BOX_kernel__Int(var23); /* autobox from Int to Discrete */
var26 = BOX_kernel__Int(var24); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var22->class->vft[COLOR_range__Range__without_last]))(var22, var25, var26) /* without_last on <var22:Range[Int]>*/;
var27 = ((val* (*)(val*))(var22->class->vft[COLOR_abstract_collection__Collection__iterator]))(var22) /* iterator on <var22:Range[Int]>*/;
for(;;) {
var28 = ((short int (*)(val*))(var27->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var27) /* is_ok on <var27:Iterator[nullable Object]>*/;
if(!var28) break;
var29 = ((val* (*)(val*))(var27->class->vft[COLOR_abstract_collection__Iterator__item]))(var27) /* item on <var27:Iterator[nullable Object]>*/;
var30 = ((struct instance_kernel__Int*)var29)->value; /* autounbox from nullable Object to Int */;
var_i = var30;
var31 = ((val* (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__mparameters]))(var_msignature) /* mparameters on <var_msignature:MSignature>*/;
var32 = ((val* (*)(val*, long))(var31->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var31, var_i) /* [] on <var31:Array[MParameter]>*/;
var33 = ((val* (*)(val*))(var32->class->vft[COLOR_model__MParameter__mtype]))(var32) /* mtype on <var32:nullable Object(MParameter)>*/;
var_t = var33;
var34 = ((long (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__vararg_rank]))(var_msignature) /* vararg_rank on <var_msignature:MSignature>*/;
{ /* Inline kernel#Int#== (var_i,var34) */
var37 = var_i == var34;
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
if (var35){
var38 = 1;
{ /* Inline kernel#Int#+ (var_i,var38) */
var41 = var_i + var38;
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
var42 = ((val* (*)(val*, long))(var_args->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_args, var39) /* [] on <var_args:Array[RuntimeVariable]>*/;
var43 = ((val* (*)(val*))(var42->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var42) /* mtype on <var42:nullable Object(RuntimeVariable)>*/;
var_t = var43;
} else {
}
var44 = 1;
{ /* Inline kernel#Int#+ (var_i,var44) */
var47 = var_i + var44;
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
var48 = 1;
{ /* Inline kernel#Int#+ (var_i,var48) */
var51 = var_i + var48;
var49 = var51;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
var52 = ((val* (*)(val*, long))(var_args->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_args, var49) /* [] on <var_args:Array[RuntimeVariable]>*/;
var53 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__autobox]))(self, var52, var_t) /* autobox on <self:SeparateCompilerVisitor>*/;
((void (*)(val*, long, val*))(var_args->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var_args, var45, var53) /* []= on <var_args:Array[RuntimeVariable]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var27->class->vft[COLOR_abstract_collection__Iterator__next]))(var27) /* next on <var27:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method separate_compiler#SeparateCompilerVisitor#adapt_signature for (self: Object, MMethodDef, Array[RuntimeVariable]) */
void VIRTUAL_separate_compiler__SeparateCompilerVisitor__adapt_signature(val* self, val* p0, val* p1) {
separate_compiler__SeparateCompilerVisitor__adapt_signature(self, p0, p1);
RET_LABEL:;
}
/* method separate_compiler#SeparateCompilerVisitor#autobox for (self: SeparateCompilerVisitor, RuntimeVariable, MType): RuntimeVariable */
val* separate_compiler__SeparateCompilerVisitor__autobox(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : MType */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : MType */;
val* var5 /* : String */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
short int var10 /* : Bool */;
short int var_ /* var : Bool */;
val* var11 /* : String */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
short int var17 /* : Bool */;
val* var18 /* : MType */;
val* var19 /* : String */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : String */;
short int var25 /* : Bool */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : String */;
val* var31 /* : String */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
long var35 /* : Int */;
val* var36 /* : String */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
long var40 /* : Int */;
val* var41 /* : String */;
val* var42 /* : MType */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
long var46 /* : Int */;
val* var47 /* : String */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
long var51 /* : Int */;
val* var52 /* : String */;
val* var53 /* : Array[Object] */;
long var54 /* : Int */;
val* var55 /* : NativeArray[Object] */;
val* var56 /* : String */;
val* var57 /* : RuntimeVariable */;
val* var58 /* : String */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
long var62 /* : Int */;
val* var63 /* : String */;
short int var64 /* : Bool */;
val* var65 /* : MType */;
short int var66 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_valtype /* var valtype: MClassType */;
val* var67 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
short int var68 /* : Bool */;
val* var69 /* : AbstractCompiler */;
val* var70 /* : nullable RapidTypeAnalysis */;
val* var71 /* : null */;
short int var72 /* : Bool */;
short int var_73 /* var : Bool */;
val* var74 /* : AbstractCompiler */;
val* var75 /* : nullable RapidTypeAnalysis */;
val* var76 /* : HashSet[MClassType] */;
short int var77 /* : Bool */;
short int var78 /* : Bool */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
long var82 /* : Int */;
val* var83 /* : String */;
val* var84 /* : MType */;
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
val* var95 /* : MType */;
static val* varonce96;
val* var97 /* : String */;
char* var98 /* : NativeString */;
long var99 /* : Int */;
val* var100 /* : String */;
val* var101 /* : Array[Object] */;
long var102 /* : Int */;
val* var103 /* : NativeArray[Object] */;
val* var104 /* : String */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
long var108 /* : Int */;
val* var109 /* : String */;
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : NativeString */;
long var113 /* : Int */;
val* var114 /* : String */;
val* var115 /* : String */;
val* var116 /* : Array[Object] */;
long var117 /* : Int */;
val* var118 /* : NativeArray[Object] */;
val* var119 /* : String */;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : NativeString */;
long var123 /* : Int */;
val* var124 /* : String */;
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
val* var136 /* : MType */;
static val* varonce137;
val* var138 /* : String */;
char* var139 /* : NativeString */;
long var140 /* : Int */;
val* var141 /* : String */;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : NativeString */;
long var145 /* : Int */;
val* var146 /* : String */;
val* var147 /* : Array[Object] */;
long var148 /* : Int */;
val* var149 /* : NativeArray[Object] */;
val* var150 /* : String */;
short int var151 /* : Bool */;
val* var152 /* : MType */;
val* var153 /* : String */;
static val* varonce154;
val* var155 /* : String */;
char* var156 /* : NativeString */;
long var157 /* : Int */;
val* var158 /* : String */;
short int var159 /* : Bool */;
short int var_160 /* var : Bool */;
val* var161 /* : String */;
static val* varonce162;
val* var163 /* : String */;
char* var164 /* : NativeString */;
long var165 /* : Int */;
val* var166 /* : String */;
short int var167 /* : Bool */;
val* var168 /* : RuntimeVariable */;
val* var_res169 /* var res: RuntimeVariable */;
static val* varonce170;
val* var171 /* : String */;
char* var172 /* : NativeString */;
long var173 /* : Int */;
val* var174 /* : String */;
static val* varonce175;
val* var176 /* : String */;
char* var177 /* : NativeString */;
long var178 /* : Int */;
val* var179 /* : String */;
val* var180 /* : MType */;
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
val* var191 /* : Array[Object] */;
long var192 /* : Int */;
val* var193 /* : NativeArray[Object] */;
val* var194 /* : String */;
static val* varonce195;
val* var196 /* : String */;
char* var197 /* : NativeString */;
long var198 /* : Int */;
val* var199 /* : String */;
val* var200 /* : MType */;
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
val* var211 /* : Array[Object] */;
long var212 /* : Int */;
val* var213 /* : NativeArray[Object] */;
val* var214 /* : String */;
var_value = p0;
var_mtype = p1;
var1 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value) /* mtype on <var_value:RuntimeVariable>*/;
var2 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_kernel__Object___61d_61d]))(var1, var_mtype) /* == on <var1:MType>*/;
if (var2){
var = var_value;
goto RET_LABEL;
} else {
var4 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value) /* mtype on <var_value:RuntimeVariable>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_compiler__MType__ctype]))(var4) /* ctype on <var4:MType>*/;
if (varonce) {
var6 = varonce;
} else {
var7 = "val*";
var8 = 4;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
var10 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var6) /* == on <var5:String>*/;
var_ = var10;
if (var10){
var11 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
if (varonce12) {
var13 = varonce12;
} else {
var14 = "val*";
var15 = 4;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
var17 = ((short int (*)(val*, val*))(var11->class->vft[COLOR_kernel__Object___61d_61d]))(var11, var13) /* == on <var11:String>*/;
var3 = var17;
} else {
var3 = var_;
}
if (var3){
var = var_value;
goto RET_LABEL;
} else {
var18 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value) /* mtype on <var_value:RuntimeVariable>*/;
var19 = ((val* (*)(val*))(var18->class->vft[COLOR_abstract_compiler__MType__ctype]))(var18) /* ctype on <var18:MType>*/;
if (varonce20) {
var21 = varonce20;
} else {
var22 = "val*";
var23 = 4;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
var25 = ((short int (*)(val*, val*))(var19->class->vft[COLOR_kernel__Object___61d_61d]))(var19, var21) /* == on <var19:String>*/;
if (var25){
if (varonce26) {
var27 = varonce26;
} else {
var28 = "((struct instance_";
var29 = 18;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
var31 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_separate_compiler__MType__c_instance_name]))(var_mtype) /* c_instance_name on <var_mtype:MType>*/;
if (varonce32) {
var33 = varonce32;
} else {
var34 = "*)";
var35 = 2;
var36 = string__NativeString__to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
if (varonce37) {
var38 = varonce37;
} else {
var39 = ")->value; /* autounbox from ";
var40 = 28;
var41 = string__NativeString__to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
var42 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value) /* mtype on <var_value:RuntimeVariable>*/;
if (varonce43) {
var44 = varonce43;
} else {
var45 = " to ";
var46 = 4;
var47 = string__NativeString__to_s_with_length(var45, var46);
var44 = var47;
varonce43 = var44;
}
if (varonce48) {
var49 = varonce48;
} else {
var50 = " */";
var51 = 3;
var52 = string__NativeString__to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
var53 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var53 = array_instance Array[Object] */
var54 = 9;
var55 = NEW_array__NativeArray(var54, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var55)->values[0] = (val*) var27;
((struct instance_array__NativeArray*)var55)->values[1] = (val*) var31;
((struct instance_array__NativeArray*)var55)->values[2] = (val*) var33;
((struct instance_array__NativeArray*)var55)->values[3] = (val*) var_value;
((struct instance_array__NativeArray*)var55)->values[4] = (val*) var38;
((struct instance_array__NativeArray*)var55)->values[5] = (val*) var42;
((struct instance_array__NativeArray*)var55)->values[6] = (val*) var44;
((struct instance_array__NativeArray*)var55)->values[7] = (val*) var_mtype;
((struct instance_array__NativeArray*)var55)->values[8] = (val*) var49;
((void (*)(val*, val*, long))(var53->class->vft[COLOR_array__Array__with_native]))(var53, var55, var54) /* with_native on <var53:Array[Object]>*/;
}
var56 = ((val* (*)(val*))(var53->class->vft[COLOR_string__Object__to_s]))(var53) /* to_s on <var53:Array[Object]>*/;
var57 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(self, var56, var_mtype) /* new_expr on <self:SeparateCompilerVisitor>*/;
var = var57;
goto RET_LABEL;
} else {
var58 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
if (varonce59) {
var60 = varonce59;
} else {
var61 = "val*";
var62 = 4;
var63 = string__NativeString__to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
var64 = ((short int (*)(val*, val*))(var58->class->vft[COLOR_kernel__Object___61d_61d]))(var58, var60) /* == on <var58:String>*/;
if (var64){
var65 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value) /* mtype on <var_value:RuntimeVariable>*/;
/* <var65:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var65->type->table_size) {
var66 = 0;
} else {
var66 = var65->type->type_table[cltype] == idtype;
}
if (!var66) {
var_class_name = var65 == NULL ? "null" : var65->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 958);
show_backtrace(1);
}
var_valtype = var65;
var67 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(self, var_mtype) /* new_var on <self:SeparateCompilerVisitor>*/;
var_res = var67;
var69 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:SeparateCompilerVisitor>*/;
var70 = ((val* (*)(val*))(var69->class->vft[COLOR_separate_compiler__SeparateCompiler__runtime_type_analysis]))(var69) /* runtime_type_analysis on <var69:AbstractCompiler(SeparateCompiler)>*/;
var71 = NULL;
if (var70 == NULL) {
var72 = 0; /* is null */
} else {
var72 = 1; /* arg is null and recv is not */
}
var_73 = var72;
if (var72){
var74 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:SeparateCompilerVisitor>*/;
var75 = ((val* (*)(val*))(var74->class->vft[COLOR_separate_compiler__SeparateCompiler__runtime_type_analysis]))(var74) /* runtime_type_analysis on <var74:AbstractCompiler(SeparateCompiler)>*/;
if (var75 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 960);
show_backtrace(1);
} else {
var76 = ((val* (*)(val*))(var75->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_types]))(var75) /* live_types on <var75:nullable RapidTypeAnalysis>*/;
}
var77 = ((short int (*)(val*, val*))(var76->class->vft[COLOR_abstract_collection__Collection__has]))(var76, var_valtype) /* has on <var76:HashSet[MClassType]>*/;
var78 = !var77;
var68 = var78;
} else {
var68 = var_73;
}
if (var68){
if (varonce79) {
var80 = varonce79;
} else {
var81 = "/*no autobox from ";
var82 = 18;
var83 = string__NativeString__to_s_with_length(var81, var82);
var80 = var83;
varonce79 = var80;
}
var84 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value) /* mtype on <var_value:RuntimeVariable>*/;
if (varonce85) {
var86 = varonce85;
} else {
var87 = " to ";
var88 = 4;
var89 = string__NativeString__to_s_with_length(var87, var88);
var86 = var89;
varonce85 = var86;
}
if (varonce90) {
var91 = varonce90;
} else {
var92 = ": ";
var93 = 2;
var94 = string__NativeString__to_s_with_length(var92, var93);
var91 = var94;
varonce90 = var91;
}
var95 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value) /* mtype on <var_value:RuntimeVariable>*/;
if (varonce96) {
var97 = varonce96;
} else {
var98 = " is not live! */";
var99 = 16;
var100 = string__NativeString__to_s_with_length(var98, var99);
var97 = var100;
varonce96 = var97;
}
var101 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var101 = array_instance Array[Object] */
var102 = 7;
var103 = NEW_array__NativeArray(var102, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var103)->values[0] = (val*) var80;
((struct instance_array__NativeArray*)var103)->values[1] = (val*) var84;
((struct instance_array__NativeArray*)var103)->values[2] = (val*) var86;
((struct instance_array__NativeArray*)var103)->values[3] = (val*) var_mtype;
((struct instance_array__NativeArray*)var103)->values[4] = (val*) var91;
((struct instance_array__NativeArray*)var103)->values[5] = (val*) var95;
((struct instance_array__NativeArray*)var103)->values[6] = (val*) var97;
((void (*)(val*, val*, long))(var101->class->vft[COLOR_array__Array__with_native]))(var101, var103, var102) /* with_native on <var101:Array[Object]>*/;
}
var104 = ((val* (*)(val*))(var101->class->vft[COLOR_string__Object__to_s]))(var101) /* to_s on <var101:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var104) /* add on <self:SeparateCompilerVisitor>*/;
if (varonce105) {
var106 = varonce105;
} else {
var107 = "printf(\"Dead code executed!\\n\"); show_backtrace(1);";
var108 = 51;
var109 = string__NativeString__to_s_with_length(var107, var108);
var106 = var109;
varonce105 = var106;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var106) /* add on <self:SeparateCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
} else {
}
if (varonce110) {
var111 = varonce110;
} else {
var112 = "BOX_";
var113 = 4;
var114 = string__NativeString__to_s_with_length(var112, var113);
var111 = var114;
varonce110 = var111;
}
var115 = ((val* (*)(val*))(var_valtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_valtype) /* c_name on <var_valtype:MClassType>*/;
var116 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var116 = array_instance Array[Object] */
var117 = 2;
var118 = NEW_array__NativeArray(var117, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var118)->values[0] = (val*) var111;
((struct instance_array__NativeArray*)var118)->values[1] = (val*) var115;
((void (*)(val*, val*, long))(var116->class->vft[COLOR_array__Array__with_native]))(var116, var118, var117) /* with_native on <var116:Array[Object]>*/;
}
var119 = ((val* (*)(val*))(var116->class->vft[COLOR_string__Object__to_s]))(var116) /* to_s on <var116:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(self, var119) /* require_declaration on <self:SeparateCompilerVisitor>*/;
if (varonce120) {
var121 = varonce120;
} else {
var122 = " = BOX_";
var123 = 7;
var124 = string__NativeString__to_s_with_length(var122, var123);
var121 = var124;
varonce120 = var121;
}
var125 = ((val* (*)(val*))(var_valtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_valtype) /* c_name on <var_valtype:MClassType>*/;
if (varonce126) {
var127 = varonce126;
} else {
var128 = "(";
var129 = 1;
var130 = string__NativeString__to_s_with_length(var128, var129);
var127 = var130;
varonce126 = var127;
}
if (varonce131) {
var132 = varonce131;
} else {
var133 = "); /* autobox from ";
var134 = 19;
var135 = string__NativeString__to_s_with_length(var133, var134);
var132 = var135;
varonce131 = var132;
}
var136 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value) /* mtype on <var_value:RuntimeVariable>*/;
if (varonce137) {
var138 = varonce137;
} else {
var139 = " to ";
var140 = 4;
var141 = string__NativeString__to_s_with_length(var139, var140);
var138 = var141;
varonce137 = var138;
}
if (varonce142) {
var143 = varonce142;
} else {
var144 = " */";
var145 = 3;
var146 = string__NativeString__to_s_with_length(var144, var145);
var143 = var146;
varonce142 = var143;
}
var147 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var147 = array_instance Array[Object] */
var148 = 10;
var149 = NEW_array__NativeArray(var148, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var149)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var149)->values[1] = (val*) var121;
((struct instance_array__NativeArray*)var149)->values[2] = (val*) var125;
((struct instance_array__NativeArray*)var149)->values[3] = (val*) var127;
((struct instance_array__NativeArray*)var149)->values[4] = (val*) var_value;
((struct instance_array__NativeArray*)var149)->values[5] = (val*) var132;
((struct instance_array__NativeArray*)var149)->values[6] = (val*) var136;
((struct instance_array__NativeArray*)var149)->values[7] = (val*) var138;
((struct instance_array__NativeArray*)var149)->values[8] = (val*) var_mtype;
((struct instance_array__NativeArray*)var149)->values[9] = (val*) var143;
((void (*)(val*, val*, long))(var147->class->vft[COLOR_array__Array__with_native]))(var147, var149, var148) /* with_native on <var147:Array[Object]>*/;
}
var150 = ((val* (*)(val*))(var147->class->vft[COLOR_string__Object__to_s]))(var147) /* to_s on <var147:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var150) /* add on <self:SeparateCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
} else {
var152 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value) /* mtype on <var_value:RuntimeVariable>*/;
var153 = ((val* (*)(val*))(var152->class->vft[COLOR_nitni_base__MType__cname_blind]))(var152) /* cname_blind on <var152:MType>*/;
if (varonce154) {
var155 = varonce154;
} else {
var156 = "void*";
var157 = 5;
var158 = string__NativeString__to_s_with_length(var156, var157);
var155 = var158;
varonce154 = var155;
}
var159 = ((short int (*)(val*, val*))(var153->class->vft[COLOR_kernel__Object___61d_61d]))(var153, var155) /* == on <var153:String>*/;
var_160 = var159;
if (var159){
var161 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_nitni_base__MType__cname_blind]))(var_mtype) /* cname_blind on <var_mtype:MType>*/;
if (varonce162) {
var163 = varonce162;
} else {
var164 = "void*";
var165 = 5;
var166 = string__NativeString__to_s_with_length(var164, var165);
var163 = var166;
varonce162 = var163;
}
var167 = ((short int (*)(val*, val*))(var161->class->vft[COLOR_kernel__Object___61d_61d]))(var161, var163) /* == on <var161:String>*/;
var151 = var167;
} else {
var151 = var_160;
}
if (var151){
var = var_value;
goto RET_LABEL;
} else {
var168 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(self, var_mtype) /* new_var on <self:SeparateCompilerVisitor>*/;
var_res169 = var168;
if (varonce170) {
var171 = varonce170;
} else {
var172 = "/* ";
var173 = 3;
var174 = string__NativeString__to_s_with_length(var172, var173);
var171 = var174;
varonce170 = var171;
}
if (varonce175) {
var176 = varonce175;
} else {
var177 = " left unintialized (cannot convert ";
var178 = 35;
var179 = string__NativeString__to_s_with_length(var177, var178);
var176 = var179;
varonce175 = var176;
}
var180 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value) /* mtype on <var_value:RuntimeVariable>*/;
if (varonce181) {
var182 = varonce181;
} else {
var183 = " to ";
var184 = 4;
var185 = string__NativeString__to_s_with_length(var183, var184);
var182 = var185;
varonce181 = var182;
}
if (varonce186) {
var187 = varonce186;
} else {
var188 = ") */";
var189 = 4;
var190 = string__NativeString__to_s_with_length(var188, var189);
var187 = var190;
varonce186 = var187;
}
var191 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var191 = array_instance Array[Object] */
var192 = 7;
var193 = NEW_array__NativeArray(var192, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var193)->values[0] = (val*) var171;
((struct instance_array__NativeArray*)var193)->values[1] = (val*) var_res169;
((struct instance_array__NativeArray*)var193)->values[2] = (val*) var176;
((struct instance_array__NativeArray*)var193)->values[3] = (val*) var180;
((struct instance_array__NativeArray*)var193)->values[4] = (val*) var182;
((struct instance_array__NativeArray*)var193)->values[5] = (val*) var_mtype;
((struct instance_array__NativeArray*)var193)->values[6] = (val*) var187;
((void (*)(val*, val*, long))(var191->class->vft[COLOR_array__Array__with_native]))(var191, var193, var192) /* with_native on <var191:Array[Object]>*/;
}
var194 = ((val* (*)(val*))(var191->class->vft[COLOR_string__Object__to_s]))(var191) /* to_s on <var191:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var194) /* add on <self:SeparateCompilerVisitor>*/;
if (varonce195) {
var196 = varonce195;
} else {
var197 = "printf(\"Cast error: Cannot cast %s to %s.\\n\", \"";
var198 = 47;
var199 = string__NativeString__to_s_with_length(var197, var198);
var196 = var199;
varonce195 = var196;
}
var200 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value) /* mtype on <var_value:RuntimeVariable>*/;
if (varonce201) {
var202 = varonce201;
} else {
var203 = "\", \"";
var204 = 4;
var205 = string__NativeString__to_s_with_length(var203, var204);
var202 = var205;
varonce201 = var202;
}
if (varonce206) {
var207 = varonce206;
} else {
var208 = "\"); show_backtrace(1);";
var209 = 22;
var210 = string__NativeString__to_s_with_length(var208, var209);
var207 = var210;
varonce206 = var207;
}
var211 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var211 = array_instance Array[Object] */
var212 = 5;
var213 = NEW_array__NativeArray(var212, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var213)->values[0] = (val*) var196;
((struct instance_array__NativeArray*)var213)->values[1] = (val*) var200;
((struct instance_array__NativeArray*)var213)->values[2] = (val*) var202;
((struct instance_array__NativeArray*)var213)->values[3] = (val*) var_mtype;
((struct instance_array__NativeArray*)var213)->values[4] = (val*) var207;
((void (*)(val*, val*, long))(var211->class->vft[COLOR_array__Array__with_native]))(var211, var213, var212) /* with_native on <var211:Array[Object]>*/;
}
var214 = ((val* (*)(val*))(var211->class->vft[COLOR_string__Object__to_s]))(var211) /* to_s on <var211:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var214) /* add on <self:SeparateCompilerVisitor>*/;
var = var_res169;
goto RET_LABEL;
}
}
}
}
}
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#autobox for (self: Object, RuntimeVariable, MType): RuntimeVariable */
val* VIRTUAL_separate_compiler__SeparateCompilerVisitor__autobox(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = separate_compiler__SeparateCompilerVisitor__autobox(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
