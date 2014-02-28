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
long var106 /* : Int */;
long var_time1 /* var time1: Int */;
val* var107 /* : ToolContext */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : NativeString */;
long var111 /* : Int */;
val* var112 /* : String */;
long var113 /* : Int */;
long var115 /* : Int */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : NativeString */;
long var119 /* : Int */;
val* var120 /* : String */;
val* var121 /* : Array[Object] */;
long var122 /* : Int */;
val* var123 /* : NativeArray[Object] */;
val* var124 /* : Object */;
val* var125 /* : String */;
long var126 /* : Int */;
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
((void (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__display_stats]))(var_compiler) /* display_stats on <var_compiler:SeparateCompiler>*/;
var106 = ((long (*)(val*))(self->class->vft[COLOR_time__Object__get_time]))(self) /* get_time on <self:ModelBuilder>*/;
var_time1 = var106;
var107 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
if (varonce108) {
var109 = varonce108;
} else {
var110 = "*** END GENERATING C: ";
var111 = 22;
var112 = string__NativeString__to_s_with_length(var110, var111);
var109 = var112;
varonce108 = var109;
}
{ /* Inline kernel#Int#- (var_time1,var_time0) */
var115 = var_time1 - var_time0;
var113 = var115;
goto RET_LABEL114;
RET_LABEL114:(void)0;
}
if (varonce116) {
var117 = varonce116;
} else {
var118 = " ***";
var119 = 4;
var120 = string__NativeString__to_s_with_length(var118, var119);
var117 = var120;
varonce116 = var117;
}
var121 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var121 = array_instance Array[Object] */
var122 = 3;
var123 = NEW_array__NativeArray(var122, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var123)->values[0] = (val*) var109;
var124 = BOX_kernel__Int(var113); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var123)->values[1] = (val*) var124;
((struct instance_array__NativeArray*)var123)->values[2] = (val*) var117;
((void (*)(val*, val*, long))(var121->class->vft[COLOR_array__Array__with_native]))(var121, var123, var122) /* with_native on <var121:Array[Object]>*/;
}
var125 = ((val* (*)(val*))(var121->class->vft[COLOR_string__Object__to_s]))(var121) /* to_s on <var121:Array[Object]>*/;
var126 = 2;
((void (*)(val*, val*, long))(var107->class->vft[COLOR_toolcontext__ToolContext__info]))(var107, var125, var126) /* info on <var107:ToolContext>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 115);
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
/* method separate_compiler#SeparateCompiler#partial_types for (self: SeparateCompiler): Set[MType] */
val* separate_compiler__SeparateCompiler__partial_types(val* self) {
val* var /* : Set[MType] */;
val* var1 /* : Set[MType] */;
var1 = self->attrs[COLOR_separate_compiler__SeparateCompiler___64dpartial_types].val; /* @partial_types on <self:SeparateCompiler> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @partial_types");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 116);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#partial_types for (self: Object): Set[MType] */
val* VIRTUAL_separate_compiler__SeparateCompiler__partial_types(val* self) {
val* var /* : Set[MType] */;
val* var1 /* : Set[MType] */;
var1 = separate_compiler__SeparateCompiler__partial_types(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#partial_types= for (self: SeparateCompiler, Set[MType]) */
void separate_compiler__SeparateCompiler__partial_types_61d(val* self, val* p0) {
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dpartial_types].val = p0; /* @partial_types on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#partial_types= for (self: Object, Set[MType]) */
void VIRTUAL_separate_compiler__SeparateCompiler__partial_types_61d(val* self, val* p0) {
separate_compiler__SeparateCompiler__partial_types_61d(self, p0);
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#live_unresolved_types for (self: SeparateCompiler): Map[MClassDef, Set[MType]] */
val* separate_compiler__SeparateCompiler__live_unresolved_types(val* self) {
val* var /* : Map[MClassDef, Set[MType]] */;
val* var1 /* : Map[MClassDef, Set[MType]] */;
var1 = self->attrs[COLOR_separate_compiler__SeparateCompiler___64dlive_unresolved_types].val; /* @live_unresolved_types on <self:SeparateCompiler> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @live_unresolved_types");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 117);
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
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 178);
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
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 183);
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
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 231);
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
val* var30 /* : nullable RapidTypeAnalysis */;
val* var31 /* : null */;
short int var32 /* : Bool */;
val* var33 /* : nullable RapidTypeAnalysis */;
val* var34 /* : HashSet[MMethodDef] */;
val* var_super_calls /* var super_calls: nullable Object */;
val* var35 /* : ModelBuilder */;
val* var36 /* : Set[MMethodDef] */;
val* var37 /* : Iterator[nullable Object] */;
short int var38 /* : Bool */;
val* var39 /* : nullable Object */;
val* var_mmethoddef /* var mmethoddef: MMethodDef */;
val* var40 /* : MClassDef */;
val* var41 /* : MClass */;
val* var_mclass42 /* var mclass: MClass */;
val* var43 /* : nullable Object */;
val* var44 /* : MModule */;
val* var45 /* : POSetElement[MClass] */;
val* var46 /* : Collection[Object] */;
val* var47 /* : Iterator[nullable Object] */;
short int var48 /* : Bool */;
val* var49 /* : nullable Object */;
val* var_descendant /* var descendant: MClass */;
val* var50 /* : nullable Object */;
val* var53 /* : Layout[PropertyLayoutElement] */;
val* var54 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var55 /* : nullable Layout[PropertyLayoutElement] */;
val* var56 /* : Map[Object, Int] */;
val* var57 /* : MModule */;
val* var58 /* : POSetElement[MModule] */;
val* var59 /* : Collection[Object] */;
val* var60 /* : Iterator[nullable Object] */;
short int var61 /* : Bool */;
val* var62 /* : nullable Object */;
val* var_mmodule /* var mmodule: MModule */;
val* var63 /* : Array[MClassDef] */;
val* var64 /* : Iterator[nullable Object] */;
short int var65 /* : Bool */;
val* var66 /* : nullable Object */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var67 /* : Array[MPropDef] */;
val* var68 /* : Iterator[nullable Object] */;
short int var69 /* : Bool */;
val* var70 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: MPropDef */;
short int var71 /* : Bool */;
val* var72 /* : AbstractCompilerVisitor */;
long var73 /* : Int */;
long var74 /* : Int */;
long var76 /* : Int */;
val* var80 /* : Layout[PropertyLayoutElement] */;
val* var81 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var82 /* : nullable Layout[MAttribute] */;
val* var83 /* : Map[Object, Int] */;
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
var30 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__runtime_type_analysis]))(self) /* runtime_type_analysis on <self:SeparateCompiler>*/;
var31 = NULL;
if (var30 == NULL) {
var32 = 0; /* is null */
} else {
var32 = 1; /* arg is null and recv is not */
}
if (var32){
var33 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__runtime_type_analysis]))(self) /* runtime_type_analysis on <self:SeparateCompiler>*/;
if (var33 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 276);
show_backtrace(1);
} else {
var34 = ((val* (*)(val*))(var33->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_super_sends]))(var33) /* live_super_sends on <var33:nullable RapidTypeAnalysis>*/;
}
var_super_calls = var34;
} else {
var35 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(self) /* modelbuilder on <self:SeparateCompiler>*/;
var36 = ((val* (*)(val*))(var35->class->vft[COLOR_collect_super_sends__ModelBuilder__collect_super_sends]))(var35) /* collect_super_sends on <var35:ModelBuilder>*/;
var_super_calls = var36;
}
var37 = ((val* (*)(val*))(var_super_calls->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_super_calls) /* iterator on <var_super_calls:nullable Object(Set[MMethodDef])>*/;
for(;;) {
var38 = ((short int (*)(val*))(var37->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var37) /* is_ok on <var37:Iterator[nullable Object]>*/;
if(!var38) break;
var39 = ((val* (*)(val*))(var37->class->vft[COLOR_abstract_collection__Iterator__item]))(var37) /* item on <var37:Iterator[nullable Object]>*/;
var_mmethoddef = var39;
var40 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mmethoddef) /* mclassdef on <var_mmethoddef:MMethodDef>*/;
var41 = ((val* (*)(val*))(var40->class->vft[COLOR_model__MClassDef__mclass]))(var40) /* mclass on <var40:MClassDef>*/;
var_mclass42 = var41;
var43 = ((val* (*)(val*, val*))(var_mmethods->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_mmethods, var_mclass42) /* [] on <var_mmethods:HashMap[MClass, Set[PropertyLayoutElement]]>*/;
((void (*)(val*, val*))(var43->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var43, var_mmethoddef) /* add on <var43:nullable Object(Set[PropertyLayoutElement])>*/;
var44 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:SeparateCompiler>*/;
var45 = ((val* (*)(val*, val*))(var_mclass42->class->vft[COLOR_model__MClass__in_hierarchy]))(var_mclass42, var44) /* in_hierarchy on <var_mclass42:MClass>*/;
var46 = ((val* (*)(val*))(var45->class->vft[COLOR_poset__POSetElement__smallers]))(var45) /* smallers on <var45:POSetElement[MClass]>*/;
var47 = ((val* (*)(val*))(var46->class->vft[COLOR_abstract_collection__Collection__iterator]))(var46) /* iterator on <var46:Collection[Object](Collection[MClass])>*/;
for(;;) {
var48 = ((short int (*)(val*))(var47->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var47) /* is_ok on <var47:Iterator[nullable Object]>*/;
if(!var48) break;
var49 = ((val* (*)(val*))(var47->class->vft[COLOR_abstract_collection__Iterator__item]))(var47) /* item on <var47:Iterator[nullable Object]>*/;
var_descendant = var49;
var50 = ((val* (*)(val*, val*))(var_mmethods->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_mmethods, var_descendant) /* [] on <var_mmethods:HashMap[MClass, Set[PropertyLayoutElement]]>*/;
((void (*)(val*, val*))(var50->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var50, var_mmethoddef) /* add on <var50:nullable Object(Set[PropertyLayoutElement])>*/;
CONTINUE_label51: (void)0;
((void (*)(val*))(var47->class->vft[COLOR_abstract_collection__Iterator__next]))(var47) /* next on <var47:Iterator[nullable Object]>*/;
}
BREAK_label51: (void)0;
CONTINUE_label52: (void)0;
((void (*)(val*))(var37->class->vft[COLOR_abstract_collection__Iterator__next]))(var37) /* next on <var37:Iterator[nullable Object]>*/;
}
BREAK_label52: (void)0;
var53 = ((val* (*)(val*, val*))(var_method_layout_builder->class->vft[COLOR_layout_builders__PropertyLayoutBuilder__build_layout]))(var_method_layout_builder, var_mmethods) /* build_layout on <var_method_layout_builder:PropertyLayoutBuilder[PropertyLayoutElement](MPropertyColorer[PropertyLayoutElement])>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__method_layout_61d]))(self, var53) /* method_layout= on <self:SeparateCompiler>*/;
var54 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__build_method_tables]))(self, var_mclasses, var_super_calls) /* build_method_tables on <self:SeparateCompiler>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__method_tables_61d]))(self, var54) /* method_tables= on <self:SeparateCompiler>*/;
var55 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__method_layout]))(self) /* method_layout on <self:SeparateCompiler>*/;
if (var55 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 291);
show_backtrace(1);
} else {
var56 = ((val* (*)(val*))(var55->class->vft[COLOR_layout_builders__Layout__pos]))(var55) /* pos on <var55:nullable Layout[PropertyLayoutElement]>*/;
}
((void (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__compile_color_consts]))(self, var56) /* compile_color_consts on <self:SeparateCompiler>*/;
var57 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:SeparateCompiler>*/;
var58 = ((val* (*)(val*))(var57->class->vft[COLOR_mmodule__MModule__in_importation]))(var57) /* in_importation on <var57:MModule>*/;
var59 = ((val* (*)(val*))(var58->class->vft[COLOR_poset__POSetElement__greaters]))(var58) /* greaters on <var58:POSetElement[MModule]>*/;
var60 = ((val* (*)(val*))(var59->class->vft[COLOR_abstract_collection__Collection__iterator]))(var59) /* iterator on <var59:Collection[Object](Collection[MModule])>*/;
for(;;) {
var61 = ((short int (*)(val*))(var60->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var60) /* is_ok on <var60:Iterator[nullable Object]>*/;
if(!var61) break;
var62 = ((val* (*)(val*))(var60->class->vft[COLOR_abstract_collection__Iterator__item]))(var60) /* item on <var60:Iterator[nullable Object]>*/;
var_mmodule = var62;
var63 = ((val* (*)(val*))(var_mmodule->class->vft[COLOR_model__MModule__mclassdefs]))(var_mmodule) /* mclassdefs on <var_mmodule:MModule>*/;
var64 = ((val* (*)(val*))(var63->class->vft[COLOR_abstract_collection__Collection__iterator]))(var63) /* iterator on <var63:Array[MClassDef]>*/;
for(;;) {
var65 = ((short int (*)(val*))(var64->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var64) /* is_ok on <var64:Iterator[nullable Object]>*/;
if(!var65) break;
var66 = ((val* (*)(val*))(var64->class->vft[COLOR_abstract_collection__Iterator__item]))(var64) /* item on <var64:Iterator[nullable Object]>*/;
var_mclassdef = var66;
var67 = ((val* (*)(val*))(var_mclassdef->class->vft[COLOR_model__MClassDef__mpropdefs]))(var_mclassdef) /* mpropdefs on <var_mclassdef:MClassDef>*/;
var68 = ((val* (*)(val*))(var67->class->vft[COLOR_abstract_collection__Collection__iterator]))(var67) /* iterator on <var67:Array[MPropDef]>*/;
for(;;) {
var69 = ((short int (*)(val*))(var68->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var68) /* is_ok on <var68:Iterator[nullable Object]>*/;
if(!var69) break;
var70 = ((val* (*)(val*))(var68->class->vft[COLOR_abstract_collection__Iterator__item]))(var68) /* item on <var68:Iterator[nullable Object]>*/;
var_mpropdef = var70;
var71 = ((short int (*)(val*))(var_mpropdef->class->vft[COLOR_typing__MPropDef__has_supercall]))(var_mpropdef) /* has_supercall on <var_mpropdef:MPropDef>*/;
if (var71){
var72 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_visitor]))(self) /* new_visitor on <self:SeparateCompiler>*/;
var73 = 1;
{ /* Inline kernel#Int#unary - (var73) */
var76 = -var73;
var74 = var76;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
((void (*)(val*, val*, val*, long))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__compile_color_const]))(self, var72, var_mpropdef, var74) /* compile_color_const on <self:SeparateCompiler>*/;
} else {
}
CONTINUE_label77: (void)0;
((void (*)(val*))(var68->class->vft[COLOR_abstract_collection__Iterator__next]))(var68) /* next on <var68:Iterator[nullable Object]>*/;
}
BREAK_label77: (void)0;
CONTINUE_label78: (void)0;
((void (*)(val*))(var64->class->vft[COLOR_abstract_collection__Iterator__next]))(var64) /* next on <var64:Iterator[nullable Object]>*/;
}
BREAK_label78: (void)0;
CONTINUE_label79: (void)0;
((void (*)(val*))(var60->class->vft[COLOR_abstract_collection__Iterator__next]))(var60) /* next on <var60:Iterator[nullable Object]>*/;
}
BREAK_label79: (void)0;
var80 = ((val* (*)(val*, val*))(var_attribute_layout_builder->class->vft[COLOR_layout_builders__PropertyLayoutBuilder__build_layout]))(var_attribute_layout_builder, var_mattributes) /* build_layout on <var_attribute_layout_builder:PropertyLayoutBuilder[MAttribute](MPropertyColorer[MAttribute])>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__attr_layout_61d]))(self, var80) /* attr_layout= on <self:SeparateCompiler>*/;
var81 = ((val* (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__build_attr_tables]))(self, var_mclasses) /* build_attr_tables on <self:SeparateCompiler>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__attr_tables_61d]))(self, var81) /* attr_tables= on <self:SeparateCompiler>*/;
var82 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__attr_layout]))(self) /* attr_layout on <self:SeparateCompiler>*/;
if (var82 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 307);
show_backtrace(1);
} else {
var83 = ((val* (*)(val*))(var82->class->vft[COLOR_layout_builders__Layout__pos]))(var82) /* pos on <var82:nullable Layout[MAttribute]>*/;
}
((void (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__compile_color_consts]))(self, var83) /* compile_color_consts on <self:SeparateCompiler>*/;
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
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 328);
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
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 260);
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
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 354);
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
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 260);
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
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 377);
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
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 260);
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
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 406);
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
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 260);
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
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 423);
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
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 260);
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
val* var5 /* : HashSet[MClassType] */;
val* var6 /* : Set[MType] */;
val* var7 /* : HashMap[MClass, Int] */;
val* var8 /* : Collection[Object] */;
val* var9 /* : Iterator[nullable Object] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_c /* var c: MClass */;
val* var12 /* : MClassType */;
val* var13 /* : Iterator[nullable Object] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_mtype /* var mtype: MType */;
val* var17 /* : Set[MType] */;
val* var18 /* : ModelBuilder */;
val* var19 /* : ToolContext */;
val* var20 /* : OptionBool */;
val* var21 /* : nullable Object */;
short int var22 /* : Bool */;
val* var23 /* : MTypeBMizer */;
val* var24 /* : MModule */;
val* var_layout_builder /* var layout_builder: TypingLayoutBuilder[MType] */;
val* var25 /* : ModelBuilder */;
val* var26 /* : ToolContext */;
val* var27 /* : OptionBool */;
val* var28 /* : nullable Object */;
short int var29 /* : Bool */;
val* var30 /* : MTypeHasher */;
val* var31 /* : PHModOperator */;
val* var32 /* : MModule */;
val* var33 /* : ModelBuilder */;
val* var34 /* : ToolContext */;
val* var35 /* : OptionBool */;
val* var36 /* : nullable Object */;
short int var37 /* : Bool */;
val* var38 /* : MTypeHasher */;
val* var39 /* : PHAndOperator */;
val* var40 /* : MModule */;
val* var41 /* : MTypeColorer */;
val* var42 /* : MModule */;
val* var43 /* : Layout[Object] */;
val* var44 /* : nullable POSet[Object] */;
val* var_poset /* var poset: POSet[MType] */;
val* var45 /* : Map[MType, Array[nullable MType]] */;
var1 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MType);
((void (*)(val*))(var1->class->vft[COLOR_hash_collection__HashSet__init]))(var1) /* init on <var1:HashSet[MType]>*/;
var_mtypes = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__runtime_type_analysis]))(self) /* runtime_type_analysis on <self:SeparateCompiler>*/;
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 443);
show_backtrace(1);
} else {
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_types]))(var2) /* live_types on <var2:nullable RapidTypeAnalysis>*/;
}
((void (*)(val*, val*))(var_mtypes->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var_mtypes, var3) /* add_all on <var_mtypes:HashSet[MType]>*/;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__runtime_type_analysis]))(self) /* runtime_type_analysis on <self:SeparateCompiler>*/;
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 444);
show_backtrace(1);
} else {
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_cast_types]))(var4) /* live_cast_types on <var4:nullable RapidTypeAnalysis>*/;
}
((void (*)(val*, val*))(var_mtypes->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var_mtypes, var5) /* add_all on <var_mtypes:HashSet[MType]>*/;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__undead_types]))(self) /* undead_types on <self:SeparateCompiler>*/;
((void (*)(val*, val*))(var_mtypes->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var_mtypes, var6) /* add_all on <var_mtypes:HashSet[MType]>*/;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__box_kinds]))(self) /* box_kinds on <self:SeparateCompiler>*/;
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_abstract_collection__MapRead__keys]))(var7) /* keys on <var7:HashMap[MClass, Int]>*/;
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_abstract_collection__Collection__iterator]))(var8) /* iterator on <var8:Collection[Object](HashMapKeys[MClass, Int])>*/;
for(;;) {
var10 = ((short int (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var9) /* is_ok on <var9:Iterator[nullable Object]>*/;
if(!var10) break;
var11 = ((val* (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__item]))(var9) /* item on <var9:Iterator[nullable Object]>*/;
var_c = var11;
var12 = ((val* (*)(val*))(var_c->class->vft[COLOR_model__MClass__mclass_type]))(var_c) /* mclass_type on <var_c:MClass>*/;
((void (*)(val*, val*))(var_mtypes->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_mtypes, var12) /* add on <var_mtypes:HashSet[MType]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__next]))(var9) /* next on <var9:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var13 = ((val* (*)(val*))(var_mtypes->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_mtypes) /* iterator on <var_mtypes:HashSet[MType]>*/;
for(;;) {
var14 = ((short int (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var13) /* is_ok on <var13:Iterator[nullable Object]>*/;
if(!var14) break;
var15 = ((val* (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__item]))(var13) /* item on <var13:Iterator[nullable Object]>*/;
var_mtype = var15;
((void (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__retrieve_partial_types]))(self, var_mtype) /* retrieve_partial_types on <self:SeparateCompiler>*/;
CONTINUE_label16: (void)0;
((void (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__next]))(var13) /* next on <var13:Iterator[nullable Object]>*/;
}
BREAK_label16: (void)0;
var17 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__partial_types]))(self) /* partial_types on <self:SeparateCompiler>*/;
((void (*)(val*, val*))(var_mtypes->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var_mtypes, var17) /* add_all on <var_mtypes:HashSet[MType]>*/;
var18 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(self) /* modelbuilder on <self:SeparateCompiler>*/;
var19 = ((val* (*)(val*))(var18->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var18) /* toolcontext on <var18:ModelBuilder>*/;
var20 = ((val* (*)(val*))(var19->class->vft[COLOR_separate_compiler__ToolContext__opt_bm_typing]))(var19) /* opt_bm_typing on <var19:ToolContext>*/;
var21 = ((val* (*)(val*))(var20->class->vft[COLOR_opts__Option__value]))(var20) /* value on <var20:OptionBool>*/;
var22 = ((struct instance_kernel__Bool*)var21)->value; /* autounbox from nullable Object to Bool */;
if (var22){
var23 = NEW_layout_builders__MTypeBMizer(&type_layout_builders__MTypeBMizer);
var24 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:SeparateCompiler>*/;
((void (*)(val*, val*))(var23->class->vft[COLOR_layout_builders__MTypeBMizer__init]))(var23, var24) /* init on <var23:MTypeBMizer>*/;
var_layout_builder = var23;
} else {
var25 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(self) /* modelbuilder on <self:SeparateCompiler>*/;
var26 = ((val* (*)(val*))(var25->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var25) /* toolcontext on <var25:ModelBuilder>*/;
var27 = ((val* (*)(val*))(var26->class->vft[COLOR_separate_compiler__ToolContext__opt_phmod_typing]))(var26) /* opt_phmod_typing on <var26:ToolContext>*/;
var28 = ((val* (*)(val*))(var27->class->vft[COLOR_opts__Option__value]))(var27) /* value on <var27:OptionBool>*/;
var29 = ((struct instance_kernel__Bool*)var28)->value; /* autounbox from nullable Object to Bool */;
if (var29){
var30 = NEW_layout_builders__MTypeHasher(&type_layout_builders__MTypeHasher);
var31 = NEW_layout_builders__PHModOperator(&type_layout_builders__PHModOperator);
((void (*)(val*))(var31->class->vft[COLOR_layout_builders__PHModOperator__init]))(var31) /* init on <var31:PHModOperator>*/;
var32 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:SeparateCompiler>*/;
((void (*)(val*, val*, val*))(var30->class->vft[COLOR_layout_builders__MTypeHasher__init]))(var30, var31, var32) /* init on <var30:MTypeHasher>*/;
var_layout_builder = var30;
} else {
var33 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(self) /* modelbuilder on <self:SeparateCompiler>*/;
var34 = ((val* (*)(val*))(var33->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var33) /* toolcontext on <var33:ModelBuilder>*/;
var35 = ((val* (*)(val*))(var34->class->vft[COLOR_separate_compiler__ToolContext__opt_phand_typing]))(var34) /* opt_phand_typing on <var34:ToolContext>*/;
var36 = ((val* (*)(val*))(var35->class->vft[COLOR_opts__Option__value]))(var35) /* value on <var35:OptionBool>*/;
var37 = ((struct instance_kernel__Bool*)var36)->value; /* autounbox from nullable Object to Bool */;
if (var37){
var38 = NEW_layout_builders__MTypeHasher(&type_layout_builders__MTypeHasher);
var39 = NEW_layout_builders__PHAndOperator(&type_layout_builders__PHAndOperator);
((void (*)(val*))(var39->class->vft[COLOR_layout_builders__PHAndOperator__init]))(var39) /* init on <var39:PHAndOperator>*/;
var40 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:SeparateCompiler>*/;
((void (*)(val*, val*, val*))(var38->class->vft[COLOR_layout_builders__MTypeHasher__init]))(var38, var39, var40) /* init on <var38:MTypeHasher>*/;
var_layout_builder = var38;
} else {
var41 = NEW_layout_builders__MTypeColorer(&type_layout_builders__MTypeColorer);
var42 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:SeparateCompiler>*/;
((void (*)(val*, val*))(var41->class->vft[COLOR_layout_builders__MTypeColorer__init]))(var41, var42) /* init on <var41:MTypeColorer>*/;
var_layout_builder = var41;
}
}
}
var43 = ((val* (*)(val*, val*))(var_layout_builder->class->vft[COLOR_layout_builders__TypingLayoutBuilder__build_layout]))(var_layout_builder, var_mtypes) /* build_layout on <var_layout_builder:TypingLayoutBuilder[MType]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__type_layout_61d]))(self, var43) /* type_layout= on <self:SeparateCompiler>*/;
var44 = ((val* (*)(val*))(var_layout_builder->class->vft[COLOR_layout_builders__TypingLayoutBuilder__poset]))(var_layout_builder) /* poset on <var_layout_builder:TypingLayoutBuilder[MType]>*/;
if (var44 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 469);
show_backtrace(1);
}
var_poset = var44;
var45 = ((val* (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__build_type_tables]))(self, var_poset) /* build_type_tables on <self:SeparateCompiler>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__type_tables_61d]))(self, var45) /* type_tables= on <self:SeparateCompiler>*/;
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
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 489);
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
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 260);
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
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 512);
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
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 544);
show_backtrace(1);
} else {
var53 = ((val* (*)(val*))(var52->class->vft[COLOR_layout_builders__Layout__pos]))(var52) /* pos on <var52:nullable Layout[MType]>*/;
}
var54 = ((short int (*)(val*, val*))(var53->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var53, var_t51) /* has_key on <var53:Map[Object, Int](Map[MType, Int])>*/;
if (var54){
var55 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__resolution_layout]))(self) /* resolution_layout on <self:SeparateCompiler>*/;
if (var55 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 545);
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
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 569);
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
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 260);
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
/* method separate_compiler#SeparateCompiler#retrieve_partial_types for (self: SeparateCompiler, MType) */
void separate_compiler__SeparateCompiler__retrieve_partial_types(val* self, val* p0) {
val* var_mtype /* var mtype: MType */;
short int var /* : Bool */;
int cltype;
int idtype;
val* var1 /* : Array[MType] */;
val* var2 /* : Iterator[nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_ft /* var ft: MType */;
short int var5 /* : Bool */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
val* var10 /* : Set[MType] */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : MType */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name;
val* var_mclass_type /* var mclass_type: MClassType */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
val* var22 /* : MModule */;
val* var23 /* : MClass */;
val* var24 /* : Set[MProperty] */;
val* var25 /* : Iterator[nullable Object] */;
short int var26 /* : Bool */;
val* var27 /* : nullable Object */;
val* var_vt /* var vt: MProperty */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var31 /* : MVirtualType */;
val* var32 /* : MModule */;
val* var33 /* : MType */;
val* var34 /* : MModule */;
val* var35 /* : MType */;
val* var_anchored /* var anchored: MType */;
val* var36 /* : Set[MType] */;
var_mtype = p0;
/* <var_mtype:MType> isa MGenericType */
cltype = type_model__MGenericType.color;
idtype = type_model__MGenericType.id;
if(cltype >= var_mtype->type->table_size) {
var = 0;
} else {
var = var_mtype->type->type_table[cltype] == idtype;
}
if (var){
var1 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MClassType__arguments]))(var_mtype) /* arguments on <var_mtype:MType(MGenericType)>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Collection__iterator]))(var1) /* iterator on <var1:Array[MType]>*/;
for(;;) {
var3 = ((short int (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var2) /* is_ok on <var2:Iterator[nullable Object]>*/;
if(!var3) break;
var4 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__item]))(var2) /* item on <var2:Iterator[nullable Object]>*/;
var_ft = var4;
var5 = ((short int (*)(val*))(var_ft->class->vft[COLOR_model__MType__need_anchor]))(var_ft) /* need_anchor on <var_ft:MType>*/;
if (var5){
if (varonce) {
var6 = varonce;
} else {
var7 = "Why do we need anchor here ?";
var8 = 28;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var6) /* print on <self:SeparateCompiler>*/;
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 589);
show_backtrace(1);
} else {
}
var10 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__partial_types]))(self) /* partial_types on <self:SeparateCompiler>*/;
((void (*)(val*, val*))(var10->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var10, var_ft) /* add on <var10:Set[MType]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__retrieve_partial_types]))(self, var_ft) /* retrieve_partial_types on <self:SeparateCompiler>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__next]))(var2) /* next on <var2:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
} else {
}
/* <var_mtype:MType> isa MNullableType */
cltype12 = type_model__MNullableType.color;
idtype13 = type_model__MNullableType.id;
if(cltype12 >= var_mtype->type->table_size) {
var11 = 0;
} else {
var11 = var_mtype->type->type_table[cltype12] == idtype13;
}
if (var11){
var14 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MNullableType__mtype]))(var_mtype) /* mtype on <var_mtype:MType(MNullableType)>*/;
/* <var14:MType> isa MClassType */
cltype16 = type_model__MClassType.color;
idtype17 = type_model__MClassType.id;
if(cltype16 >= var14->type->table_size) {
var15 = 0;
} else {
var15 = var14->type->type_table[cltype16] == idtype17;
}
if (!var15) {
var_class_name = var14 == NULL ? "null" : var14->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 597);
show_backtrace(1);
}
var_mclass_type = var14;
} else {
/* <var_mtype:MType> isa MClassType */
cltype19 = type_model__MClassType.color;
idtype20 = type_model__MClassType.id;
if(cltype19 >= var_mtype->type->table_size) {
var18 = 0;
} else {
var18 = var_mtype->type->type_table[cltype19] == idtype20;
}
if (!var18) {
var_class_name21 = var_mtype == NULL ? "null" : var_mtype->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name21);
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 599);
show_backtrace(1);
}
var_mclass_type = var_mtype;
}
var22 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:SeparateCompiler>*/;
var23 = ((val* (*)(val*))(var_mclass_type->class->vft[COLOR_model__MClassType__mclass]))(var_mclass_type) /* mclass on <var_mclass_type:MClassType>*/;
var24 = ((val* (*)(val*, val*))(var22->class->vft[COLOR_abstract_compiler__MModule__properties]))(var22, var23) /* properties on <var22:MModule>*/;
var25 = ((val* (*)(val*))(var24->class->vft[COLOR_abstract_collection__Collection__iterator]))(var24) /* iterator on <var24:Set[MProperty]>*/;
for(;;) {
var26 = ((short int (*)(val*))(var25->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var25) /* is_ok on <var25:Iterator[nullable Object]>*/;
if(!var26) break;
var27 = ((val* (*)(val*))(var25->class->vft[COLOR_abstract_collection__Iterator__item]))(var25) /* item on <var25:Iterator[nullable Object]>*/;
var_vt = var27;
/* <var_vt:MProperty> isa MVirtualTypeProp */
cltype29 = type_model__MVirtualTypeProp.color;
idtype30 = type_model__MVirtualTypeProp.id;
if(cltype29 >= var_vt->type->table_size) {
var28 = 0;
} else {
var28 = var_vt->type->type_table[cltype29] == idtype30;
}
if (var28){
var31 = ((val* (*)(val*))(var_vt->class->vft[COLOR_model__MVirtualTypeProp__mvirtualtype]))(var_vt) /* mvirtualtype on <var_vt:MProperty(MVirtualTypeProp)>*/;
var32 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:SeparateCompiler>*/;
var33 = ((val* (*)(val*, val*, val*))(var31->class->vft[COLOR_model__MVirtualType__lookup_bound]))(var31, var32, var_mclass_type) /* lookup_bound on <var31:MVirtualType>*/;
var34 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:SeparateCompiler>*/;
var35 = ((val* (*)(val*, val*, val*))(var33->class->vft[COLOR_model__MType__anchor_to]))(var33, var34, var_mclass_type) /* anchor_to on <var33:MType>*/;
var_anchored = var35;
var36 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__partial_types]))(self) /* partial_types on <self:SeparateCompiler>*/;
((void (*)(val*, val*))(var36->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var36, var_anchored) /* add on <var36:Set[MType]>*/;
} else {
}
CONTINUE_label37: (void)0;
((void (*)(val*))(var25->class->vft[COLOR_abstract_collection__Iterator__next]))(var25) /* next on <var25:Iterator[nullable Object]>*/;
}
BREAK_label37: (void)0;
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#retrieve_partial_types for (self: Object, MType) */
void VIRTUAL_separate_compiler__SeparateCompiler__retrieve_partial_types(val* self, val* p0) {
separate_compiler__SeparateCompiler__retrieve_partial_types(self, p0);
RET_LABEL:;
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
val* var /* : String */;
val* var_c_name /* var c_name: String */;
val* var1 /* : SeparateCompilerVisitor */;
val* var_v /* var v: SeparateCompilerVisitor */;
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
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : String */;
val* var20 /* : Array[Object] */;
long var21 /* : Int */;
val* var22 /* : NativeArray[Object] */;
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
val* var52 /* : nullable Layout[MType] */;
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
val* var74 /* : Array[Object] */;
long var75 /* : Int */;
val* var76 /* : NativeArray[Object] */;
val* var77 /* : String */;
val* var78 /* : nullable Layout[MType] */;
val* var_layout /* var layout: nullable Layout[MType] */;
short int var79 /* : Bool */;
int cltype;
int idtype;
val* var80 /* : Map[Object, Int] */;
val* var81 /* : nullable Object */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
long var85 /* : Int */;
val* var86 /* : String */;
val* var87 /* : Array[Object] */;
long var88 /* : Int */;
val* var89 /* : NativeArray[Object] */;
val* var90 /* : String */;
val* var91 /* : Map[Object, Int] */;
val* var92 /* : nullable Object */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
long var96 /* : Int */;
val* var97 /* : String */;
val* var98 /* : Array[Object] */;
long var99 /* : Int */;
val* var100 /* : NativeArray[Object] */;
val* var101 /* : String */;
short int var102 /* : Bool */;
int cltype103;
int idtype104;
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
short int var115 /* : Bool */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : NativeString */;
long var119 /* : Int */;
val* var120 /* : String */;
val* var121 /* : Array[Object] */;
long var122 /* : Int */;
val* var123 /* : NativeArray[Object] */;
val* var124 /* : String */;
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
val* var135 /* : Array[Object] */;
long var136 /* : Int */;
val* var137 /* : NativeArray[Object] */;
val* var138 /* : String */;
static val* varonce139;
val* var140 /* : String */;
char* var141 /* : NativeString */;
long var142 /* : Int */;
val* var143 /* : String */;
val* var144 /* : Map[MType, Array[nullable MType]] */;
val* var145 /* : nullable Object */;
long var146 /* : Int */;
static val* varonce147;
val* var148 /* : String */;
char* var149 /* : NativeString */;
long var150 /* : Int */;
val* var151 /* : String */;
val* var152 /* : Array[Object] */;
long var153 /* : Int */;
val* var154 /* : NativeArray[Object] */;
val* var155 /* : Object */;
val* var156 /* : String */;
static val* varonce157;
val* var158 /* : String */;
char* var159 /* : NativeString */;
long var160 /* : Int */;
val* var161 /* : String */;
val* var162 /* : Map[MType, Array[nullable MType]] */;
val* var163 /* : nullable Object */;
val* var164 /* : Iterator[nullable Object] */;
short int var165 /* : Bool */;
val* var166 /* : nullable Object */;
val* var_stype /* var stype: nullable MType */;
val* var167 /* : null */;
short int var168 /* : Bool */;
static val* varonce169;
val* var170 /* : String */;
char* var171 /* : NativeString */;
long var172 /* : Int */;
val* var173 /* : String */;
val* var174 /* : nullable Layout[MType] */;
val* var175 /* : Map[Object, Int] */;
val* var176 /* : nullable Object */;
static val* varonce177;
val* var178 /* : String */;
char* var179 /* : NativeString */;
long var180 /* : Int */;
val* var181 /* : String */;
static val* varonce182;
val* var183 /* : String */;
char* var184 /* : NativeString */;
long var185 /* : Int */;
val* var186 /* : String */;
val* var187 /* : Array[Object] */;
long var188 /* : Int */;
val* var189 /* : NativeArray[Object] */;
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
var_mtype = p0;
var = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MType>*/;
var_c_name = var;
var1 = NEW_separate_compiler__SeparateCompilerVisitor(&type_separate_compiler__SeparateCompilerVisitor);
((void (*)(val*, val*))(var1->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__init]))(var1, self) /* init on <var1:SeparateCompilerVisitor>*/;
var_v = var1;
if (varonce) {
var2 = varonce;
} else {
var3 = "/* runtime type ";
var4 = 16;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
if (varonce6) {
var7 = varonce6;
} else {
var8 = " */";
var9 = 3;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var11 = array_instance Array[Object] */
var12 = 3;
var13 = NEW_array__NativeArray(var12, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var13)->values[0] = (val*) var2;
((struct instance_array__NativeArray*)var13)->values[1] = (val*) var_mtype;
((struct instance_array__NativeArray*)var13)->values[2] = (val*) var7;
((void (*)(val*, val*, long))(var11->class->vft[COLOR_array__Array__with_native]))(var11, var13, var12) /* with_native on <var11:Array[Object]>*/;
}
var14 = ((val* (*)(val*))(var11->class->vft[COLOR_string__Object__to_s]))(var11) /* to_s on <var11:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var14) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
if (varonce15) {
var16 = varonce15;
} else {
var17 = "type_";
var18 = 5;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
var20 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var20 = array_instance Array[Object] */
var21 = 2;
var22 = NEW_array__NativeArray(var21, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var22)->values[0] = (val*) var16;
((struct instance_array__NativeArray*)var22)->values[1] = (val*) var_c_name;
((void (*)(val*, val*, long))(var20->class->vft[COLOR_array__Array__with_native]))(var20, var22, var21) /* with_native on <var20:Array[Object]>*/;
}
var23 = ((val* (*)(val*))(var20->class->vft[COLOR_string__Object__to_s]))(var20) /* to_s on <var20:Array[Object]>*/;
if (varonce24) {
var25 = varonce24;
} else {
var26 = "extern const struct type type_";
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
((struct instance_array__NativeArray*)var36)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var36)->values[2] = (val*) var30;
((void (*)(val*, val*, long))(var34->class->vft[COLOR_array__Array__with_native]))(var34, var36, var35) /* with_native on <var34:Array[Object]>*/;
}
var37 = ((val* (*)(val*))(var34->class->vft[COLOR_string__Object__to_s]))(var34) /* to_s on <var34:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__provide_declaration]))(self, var23, var37) /* provide_declaration on <self:SeparateCompiler>*/;
if (varonce38) {
var39 = varonce38;
} else {
var40 = "const struct type type_";
var41 = 23;
var42 = string__NativeString__to_s_with_length(var40, var41);
var39 = var42;
varonce38 = var39;
}
if (varonce43) {
var44 = varonce43;
} else {
var45 = " = {";
var46 = 4;
var47 = string__NativeString__to_s_with_length(var45, var46);
var44 = var47;
varonce43 = var44;
}
var48 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var48 = array_instance Array[Object] */
var49 = 3;
var50 = NEW_array__NativeArray(var49, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var50)->values[0] = (val*) var39;
((struct instance_array__NativeArray*)var50)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var50)->values[2] = (val*) var44;
((void (*)(val*, val*, long))(var48->class->vft[COLOR_array__Array__with_native]))(var48, var50, var49) /* with_native on <var48:Array[Object]>*/;
}
var51 = ((val* (*)(val*))(var48->class->vft[COLOR_string__Object__to_s]))(var48) /* to_s on <var48:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var51) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
var52 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__type_layout]))(self) /* type_layout on <self:SeparateCompiler>*/;
if (var52 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 641);
show_backtrace(1);
} else {
var53 = ((val* (*)(val*))(var52->class->vft[COLOR_layout_builders__Layout__ids]))(var52) /* ids on <var52:nullable Layout[MType]>*/;
}
var54 = ((val* (*)(val*, val*))(var53->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var53, var_mtype) /* [] on <var53:Map[Object, Int](Map[MType, Int])>*/;
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
if (varonce64) {
var65 = varonce64;
} else {
var66 = "\"";
var67 = 1;
var68 = string__NativeString__to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
if (varonce69) {
var70 = varonce69;
} else {
var71 = "\", /* class_name_string */";
var72 = 26;
var73 = string__NativeString__to_s_with_length(var71, var72);
var70 = var73;
varonce69 = var70;
}
var74 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var74 = array_instance Array[Object] */
var75 = 3;
var76 = NEW_array__NativeArray(var75, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var76)->values[0] = (val*) var65;
((struct instance_array__NativeArray*)var76)->values[1] = (val*) var_mtype;
((struct instance_array__NativeArray*)var76)->values[2] = (val*) var70;
((void (*)(val*, val*, long))(var74->class->vft[COLOR_array__Array__with_native]))(var74, var76, var75) /* with_native on <var74:Array[Object]>*/;
}
var77 = ((val* (*)(val*))(var74->class->vft[COLOR_string__Object__to_s]))(var74) /* to_s on <var74:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var77) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
var78 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__type_layout]))(self) /* type_layout on <self:SeparateCompiler>*/;
var_layout = var78;
/* <var_layout:nullable Layout[MType]> isa PHLayout[MType, MType] */
cltype = type_layout_builders__PHLayoutmodel__MTypemodel__MType.color;
idtype = type_layout_builders__PHLayoutmodel__MTypemodel__MType.id;
if(var_layout == NULL) {
var79 = 0;
} else {
if(cltype >= var_layout->type->table_size) {
var79 = 0;
} else {
var79 = var_layout->type->type_table[cltype] == idtype;
}
}
if (var79){
var80 = ((val* (*)(val*))(var_layout->class->vft[COLOR_layout_builders__PHLayout__masks]))(var_layout) /* masks on <var_layout:nullable Layout[MType](PHLayout[MType, MType])>*/;
var81 = ((val* (*)(val*, val*))(var80->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var80, var_mtype) /* [] on <var80:Map[Object, Int](Map[MType, Int])>*/;
if (varonce82) {
var83 = varonce82;
} else {
var84 = ",";
var85 = 1;
var86 = string__NativeString__to_s_with_length(var84, var85);
var83 = var86;
varonce82 = var83;
}
var87 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var87 = array_instance Array[Object] */
var88 = 2;
var89 = NEW_array__NativeArray(var88, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var89)->values[0] = (val*) var81;
((struct instance_array__NativeArray*)var89)->values[1] = (val*) var83;
((void (*)(val*, val*, long))(var87->class->vft[COLOR_array__Array__with_native]))(var87, var89, var88) /* with_native on <var87:Array[Object]>*/;
}
var90 = ((val* (*)(val*))(var87->class->vft[COLOR_string__Object__to_s]))(var87) /* to_s on <var87:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var90) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
} else {
if (var_layout == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 647);
show_backtrace(1);
} else {
var91 = ((val* (*)(val*))(var_layout->class->vft[COLOR_layout_builders__Layout__pos]))(var_layout) /* pos on <var_layout:nullable Layout[MType]>*/;
}
var92 = ((val* (*)(val*, val*))(var91->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var91, var_mtype) /* [] on <var91:Map[Object, Int](Map[MType, Int])>*/;
if (varonce93) {
var94 = varonce93;
} else {
var95 = ",";
var96 = 1;
var97 = string__NativeString__to_s_with_length(var95, var96);
var94 = var97;
varonce93 = var94;
}
var98 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var98 = array_instance Array[Object] */
var99 = 2;
var100 = NEW_array__NativeArray(var99, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var100)->values[0] = (val*) var92;
((struct instance_array__NativeArray*)var100)->values[1] = (val*) var94;
((void (*)(val*, val*, long))(var98->class->vft[COLOR_array__Array__with_native]))(var98, var100, var99) /* with_native on <var98:Array[Object]>*/;
}
var101 = ((val* (*)(val*))(var98->class->vft[COLOR_string__Object__to_s]))(var98) /* to_s on <var98:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var101) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
}
/* <var_mtype:MType> isa MNullableType */
cltype103 = type_model__MNullableType.color;
idtype104 = type_model__MNullableType.id;
if(cltype103 >= var_mtype->type->table_size) {
var102 = 0;
} else {
var102 = var_mtype->type->type_table[cltype103] == idtype104;
}
if (var102){
if (varonce105) {
var106 = varonce105;
} else {
var107 = "1,";
var108 = 2;
var109 = string__NativeString__to_s_with_length(var107, var108);
var106 = var109;
varonce105 = var106;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var106) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
} else {
if (varonce110) {
var111 = varonce110;
} else {
var112 = "0,";
var113 = 2;
var114 = string__NativeString__to_s_with_length(var112, var113);
var111 = var114;
varonce110 = var111;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var111) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
}
var115 = ((short int (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__compile_type_resolution_table]))(self, var_mtype) /* compile_type_resolution_table on <self:SeparateCompiler>*/;
if (var115){
if (varonce116) {
var117 = varonce116;
} else {
var118 = "resolution_table_";
var119 = 17;
var120 = string__NativeString__to_s_with_length(var118, var119);
var117 = var120;
varonce116 = var117;
}
var121 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var121 = array_instance Array[Object] */
var122 = 2;
var123 = NEW_array__NativeArray(var122, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var123)->values[0] = (val*) var117;
((struct instance_array__NativeArray*)var123)->values[1] = (val*) var_c_name;
((void (*)(val*, val*, long))(var121->class->vft[COLOR_array__Array__with_native]))(var121, var123, var122) /* with_native on <var121:Array[Object]>*/;
}
var124 = ((val* (*)(val*))(var121->class->vft[COLOR_string__Object__to_s]))(var121) /* to_s on <var121:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(var_v, var124) /* require_declaration on <var_v:SeparateCompilerVisitor>*/;
if (varonce125) {
var126 = varonce125;
} else {
var127 = "&resolution_table_";
var128 = 18;
var129 = string__NativeString__to_s_with_length(var127, var128);
var126 = var129;
varonce125 = var126;
}
if (varonce130) {
var131 = varonce130;
} else {
var132 = ",";
var133 = 1;
var134 = string__NativeString__to_s_with_length(var132, var133);
var131 = var134;
varonce130 = var131;
}
var135 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var135 = array_instance Array[Object] */
var136 = 3;
var137 = NEW_array__NativeArray(var136, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var137)->values[0] = (val*) var126;
((struct instance_array__NativeArray*)var137)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var137)->values[2] = (val*) var131;
((void (*)(val*, val*, long))(var135->class->vft[COLOR_array__Array__with_native]))(var135, var137, var136) /* with_native on <var135:Array[Object]>*/;
}
var138 = ((val* (*)(val*))(var135->class->vft[COLOR_string__Object__to_s]))(var135) /* to_s on <var135:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var138) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
} else {
if (varonce139) {
var140 = varonce139;
} else {
var141 = "NULL,";
var142 = 5;
var143 = string__NativeString__to_s_with_length(var141, var142);
var140 = var143;
varonce139 = var140;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var140) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
}
var144 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__type_tables]))(self) /* type_tables on <self:SeparateCompiler>*/;
var145 = ((val* (*)(val*, val*))(var144->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var144, var_mtype) /* [] on <var144:Map[MType, Array[nullable MType]]>*/;
var146 = ((long (*)(val*))(var145->class->vft[COLOR_abstract_collection__Collection__length]))(var145) /* length on <var145:nullable Object(Array[nullable MType])>*/;
if (varonce147) {
var148 = varonce147;
} else {
var149 = ",";
var150 = 1;
var151 = string__NativeString__to_s_with_length(var149, var150);
var148 = var151;
varonce147 = var148;
}
var152 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var152 = array_instance Array[Object] */
var153 = 2;
var154 = NEW_array__NativeArray(var153, &type_array__NativeArraykernel__Object);
var155 = BOX_kernel__Int(var146); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var154)->values[0] = (val*) var155;
((struct instance_array__NativeArray*)var154)->values[1] = (val*) var148;
((void (*)(val*, val*, long))(var152->class->vft[COLOR_array__Array__with_native]))(var152, var154, var153) /* with_native on <var152:Array[Object]>*/;
}
var156 = ((val* (*)(val*))(var152->class->vft[COLOR_string__Object__to_s]))(var152) /* to_s on <var152:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var156) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
if (varonce157) {
var158 = varonce157;
} else {
var159 = "{";
var160 = 1;
var161 = string__NativeString__to_s_with_length(var159, var160);
var158 = var161;
varonce157 = var158;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var158) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
var162 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__type_tables]))(self) /* type_tables on <self:SeparateCompiler>*/;
var163 = ((val* (*)(val*, val*))(var162->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var162, var_mtype) /* [] on <var162:Map[MType, Array[nullable MType]]>*/;
var164 = ((val* (*)(val*))(var163->class->vft[COLOR_abstract_collection__Collection__iterator]))(var163) /* iterator on <var163:nullable Object(Array[nullable MType])>*/;
for(;;) {
var165 = ((short int (*)(val*))(var164->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var164) /* is_ok on <var164:Iterator[nullable Object]>*/;
if(!var165) break;
var166 = ((val* (*)(val*))(var164->class->vft[COLOR_abstract_collection__Iterator__item]))(var164) /* item on <var164:Iterator[nullable Object]>*/;
var_stype = var166;
var167 = NULL;
if (var_stype == NULL) {
var168 = 1; /* is null */
} else {
var168 = 0; /* arg is null but recv is not */
}
if (var168){
if (varonce169) {
var170 = varonce169;
} else {
var171 = "-1, /* empty */";
var172 = 15;
var173 = string__NativeString__to_s_with_length(var171, var172);
var170 = var173;
varonce169 = var170;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var170) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
} else {
var174 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__type_layout]))(self) /* type_layout on <self:SeparateCompiler>*/;
if (var174 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 666);
show_backtrace(1);
} else {
var175 = ((val* (*)(val*))(var174->class->vft[COLOR_layout_builders__Layout__ids]))(var174) /* ids on <var174:nullable Layout[MType]>*/;
}
var176 = ((val* (*)(val*, val*))(var175->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var175, var_stype) /* [] on <var175:Map[Object, Int](Map[MType, Int])>*/;
if (varonce177) {
var178 = varonce177;
} else {
var179 = ", /* ";
var180 = 5;
var181 = string__NativeString__to_s_with_length(var179, var180);
var178 = var181;
varonce177 = var178;
}
if (varonce182) {
var183 = varonce182;
} else {
var184 = " */";
var185 = 3;
var186 = string__NativeString__to_s_with_length(var184, var185);
var183 = var186;
varonce182 = var183;
}
var187 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var187 = array_instance Array[Object] */
var188 = 4;
var189 = NEW_array__NativeArray(var188, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var189)->values[0] = (val*) var176;
((struct instance_array__NativeArray*)var189)->values[1] = (val*) var178;
((struct instance_array__NativeArray*)var189)->values[2] = (val*) var_stype;
((struct instance_array__NativeArray*)var189)->values[3] = (val*) var183;
((void (*)(val*, val*, long))(var187->class->vft[COLOR_array__Array__with_native]))(var187, var189, var188) /* with_native on <var187:Array[Object]>*/;
}
var190 = ((val* (*)(val*))(var187->class->vft[COLOR_string__Object__to_s]))(var187) /* to_s on <var187:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var190) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
}
CONTINUE_label: (void)0;
((void (*)(val*))(var164->class->vft[COLOR_abstract_collection__Iterator__next]))(var164) /* next on <var164:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
if (varonce191) {
var192 = varonce191;
} else {
var193 = "},";
var194 = 2;
var195 = string__NativeString__to_s_with_length(var193, var194);
var192 = var195;
varonce191 = var192;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var192) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
if (varonce196) {
var197 = varonce196;
} else {
var198 = "};";
var199 = 2;
var200 = string__NativeString__to_s_with_length(var198, var199);
var197 = var200;
varonce196 = var197;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var197) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#compile_type_to_c for (self: Object, MType) */
void VIRTUAL_separate_compiler__SeparateCompiler__compile_type_to_c(val* self, val* p0) {
separate_compiler__SeparateCompiler__compile_type_to_c(self, p0);
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#compile_type_resolution_table for (self: SeparateCompiler, MType): Bool */
short int separate_compiler__SeparateCompiler__compile_type_resolution_table(val* self, val* p0) {
short int var /* : Bool */;
val* var_mtype /* var mtype: MType */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : MType */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
const char* var_class_name;
val* var_mclass_type /* var mclass_type: MClassType */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name9;
val* var10 /* : Map[MClassType, Array[nullable MType]] */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : nullable Layout[MType] */;
val* var_layout /* var layout: nullable Layout[MType] */;
static val* varonce;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : String */;
val* var19 /* : String */;
val* var20 /* : Array[Object] */;
long var21 /* : Int */;
val* var22 /* : NativeArray[Object] */;
val* var23 /* : String */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : String */;
val* var29 /* : String */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
long var33 /* : Int */;
val* var34 /* : String */;
val* var35 /* : Array[Object] */;
long var36 /* : Int */;
val* var37 /* : NativeArray[Object] */;
val* var38 /* : String */;
val* var39 /* : AbstractCompilerVisitor */;
val* var_v /* var v: SeparateCompilerVisitor */;
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
val* var51 /* : Array[Object] */;
long var52 /* : Int */;
val* var53 /* : NativeArray[Object] */;
val* var54 /* : String */;
short int var55 /* : Bool */;
int cltype56;
int idtype57;
val* var58 /* : Map[Object, Int] */;
val* var59 /* : nullable Object */;
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
val* var79 /* : Map[MClassType, Array[nullable MType]] */;
val* var80 /* : nullable Object */;
val* var81 /* : Iterator[nullable Object] */;
short int var82 /* : Bool */;
val* var83 /* : nullable Object */;
val* var_t /* var t: nullable MType */;
val* var84 /* : null */;
short int var85 /* : Bool */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
long var89 /* : Int */;
val* var90 /* : String */;
val* var91 /* : MModule */;
short int var92 /* : Bool */;
val* var93 /* : MType */;
val* var_tv /* var tv: MType */;
val* var94 /* : nullable Layout[MType] */;
val* var95 /* : Map[Object, Int] */;
short int var96 /* : Bool */;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : NativeString */;
long var100 /* : Int */;
val* var101 /* : String */;
val* var102 /* : String */;
val* var103 /* : Array[Object] */;
long var104 /* : Int */;
val* var105 /* : NativeArray[Object] */;
val* var106 /* : String */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
long var110 /* : Int */;
val* var111 /* : String */;
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
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : NativeString */;
long var145 /* : Int */;
val* var146 /* : String */;
val* var147 /* : Array[Object] */;
long var148 /* : Int */;
val* var149 /* : NativeArray[Object] */;
val* var150 /* : String */;
static val* varonce151;
val* var152 /* : String */;
char* var153 /* : NativeString */;
long var154 /* : Int */;
val* var155 /* : String */;
static val* varonce156;
val* var157 /* : String */;
char* var158 /* : NativeString */;
long var159 /* : Int */;
val* var160 /* : String */;
short int var161 /* : Bool */;
var_mtype = p0;
/* <var_mtype:MType> isa MNullableType */
cltype = type_model__MNullableType.color;
idtype = type_model__MNullableType.id;
if(cltype >= var_mtype->type->table_size) {
var1 = 0;
} else {
var1 = var_mtype->type->type_table[cltype] == idtype;
}
if (var1){
var2 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MNullableType__mtype]))(var_mtype) /* mtype on <var_mtype:MType(MNullableType)>*/;
/* <var2:MType> isa MClassType */
cltype4 = type_model__MClassType.color;
idtype5 = type_model__MClassType.id;
if(cltype4 >= var2->type->table_size) {
var3 = 0;
} else {
var3 = var2->type->type_table[cltype4] == idtype5;
}
if (!var3) {
var_class_name = var2 == NULL ? "null" : var2->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 677);
show_backtrace(1);
}
var_mclass_type = var2;
} else {
/* <var_mtype:MType> isa MClassType */
cltype7 = type_model__MClassType.color;
idtype8 = type_model__MClassType.id;
if(cltype7 >= var_mtype->type->table_size) {
var6 = 0;
} else {
var6 = var_mtype->type->type_table[cltype7] == idtype8;
}
if (!var6) {
var_class_name9 = var_mtype == NULL ? "null" : var_mtype->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name9);
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 679);
show_backtrace(1);
}
var_mclass_type = var_mtype;
}
var10 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__resolution_tables]))(self) /* resolution_tables on <self:SeparateCompiler>*/;
var11 = ((short int (*)(val*, val*))(var10->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var10, var_mclass_type) /* has_key on <var10:Map[MClassType, Array[nullable MType]]>*/;
var12 = !var11;
if (var12){
var13 = 0;
var = var13;
goto RET_LABEL;
} else {
}
var14 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__resolution_layout]))(self) /* resolution_layout on <self:SeparateCompiler>*/;
var_layout = var14;
if (varonce) {
var15 = varonce;
} else {
var16 = "resolution_table_";
var17 = 17;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce = var15;
}
var19 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MType>*/;
var20 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var20 = array_instance Array[Object] */
var21 = 2;
var22 = NEW_array__NativeArray(var21, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var22)->values[0] = (val*) var15;
((struct instance_array__NativeArray*)var22)->values[1] = (val*) var19;
((void (*)(val*, val*, long))(var20->class->vft[COLOR_array__Array__with_native]))(var20, var22, var21) /* with_native on <var20:Array[Object]>*/;
}
var23 = ((val* (*)(val*))(var20->class->vft[COLOR_string__Object__to_s]))(var20) /* to_s on <var20:Array[Object]>*/;
if (varonce24) {
var25 = varonce24;
} else {
var26 = "extern const struct types resolution_table_";
var27 = 43;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
var29 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MType>*/;
if (varonce30) {
var31 = varonce30;
} else {
var32 = ";";
var33 = 1;
var34 = string__NativeString__to_s_with_length(var32, var33);
var31 = var34;
varonce30 = var31;
}
var35 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var35 = array_instance Array[Object] */
var36 = 3;
var37 = NEW_array__NativeArray(var36, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var37)->values[0] = (val*) var25;
((struct instance_array__NativeArray*)var37)->values[1] = (val*) var29;
((struct instance_array__NativeArray*)var37)->values[2] = (val*) var31;
((void (*)(val*, val*, long))(var35->class->vft[COLOR_array__Array__with_native]))(var35, var37, var36) /* with_native on <var35:Array[Object]>*/;
}
var38 = ((val* (*)(val*))(var35->class->vft[COLOR_string__Object__to_s]))(var35) /* to_s on <var35:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__provide_declaration]))(self, var23, var38) /* provide_declaration on <self:SeparateCompiler>*/;
var39 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_visitor]))(self) /* new_visitor on <self:SeparateCompiler>*/;
var_v = var39;
if (varonce40) {
var41 = varonce40;
} else {
var42 = "const struct types resolution_table_";
var43 = 36;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
var45 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MType>*/;
if (varonce46) {
var47 = varonce46;
} else {
var48 = " = {";
var49 = 4;
var50 = string__NativeString__to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
var51 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var51 = array_instance Array[Object] */
var52 = 3;
var53 = NEW_array__NativeArray(var52, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var53)->values[0] = (val*) var41;
((struct instance_array__NativeArray*)var53)->values[1] = (val*) var45;
((struct instance_array__NativeArray*)var53)->values[2] = (val*) var47;
((void (*)(val*, val*, long))(var51->class->vft[COLOR_array__Array__with_native]))(var51, var53, var52) /* with_native on <var51:Array[Object]>*/;
}
var54 = ((val* (*)(val*))(var51->class->vft[COLOR_string__Object__to_s]))(var51) /* to_s on <var51:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var54) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
/* <var_layout:nullable Layout[MType]> isa PHLayout[MClassType, MType] */
cltype56 = type_layout_builders__PHLayoutmodel__MClassTypemodel__MType.color;
idtype57 = type_layout_builders__PHLayoutmodel__MClassTypemodel__MType.id;
if(var_layout == NULL) {
var55 = 0;
} else {
if(cltype56 >= var_layout->type->table_size) {
var55 = 0;
} else {
var55 = var_layout->type->type_table[cltype56] == idtype57;
}
}
if (var55){
var58 = ((val* (*)(val*))(var_layout->class->vft[COLOR_layout_builders__PHLayout__masks]))(var_layout) /* masks on <var_layout:nullable Layout[MType](PHLayout[MClassType, MType])>*/;
var59 = ((val* (*)(val*, val*))(var58->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var58, var_mclass_type) /* [] on <var58:Map[Object, Int](Map[MClassType, Int])>*/;
if (varonce60) {
var61 = varonce60;
} else {
var62 = ",";
var63 = 1;
var64 = string__NativeString__to_s_with_length(var62, var63);
var61 = var64;
varonce60 = var61;
}
var65 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var65 = array_instance Array[Object] */
var66 = 2;
var67 = NEW_array__NativeArray(var66, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var67)->values[0] = (val*) var59;
((struct instance_array__NativeArray*)var67)->values[1] = (val*) var61;
((void (*)(val*, val*, long))(var65->class->vft[COLOR_array__Array__with_native]))(var65, var67, var66) /* with_native on <var65:Array[Object]>*/;
}
var68 = ((val* (*)(val*))(var65->class->vft[COLOR_string__Object__to_s]))(var65) /* to_s on <var65:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var68) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
} else {
if (varonce69) {
var70 = varonce69;
} else {
var71 = "0, /* dummy */";
var72 = 14;
var73 = string__NativeString__to_s_with_length(var71, var72);
var70 = var73;
varonce69 = var70;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var70) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
}
if (varonce74) {
var75 = varonce74;
} else {
var76 = "{";
var77 = 1;
var78 = string__NativeString__to_s_with_length(var76, var77);
var75 = var78;
varonce74 = var75;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var75) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
var79 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__resolution_tables]))(self) /* resolution_tables on <self:SeparateCompiler>*/;
var80 = ((val* (*)(val*, val*))(var79->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var79, var_mclass_type) /* [] on <var79:Map[MClassType, Array[nullable MType]]>*/;
var81 = ((val* (*)(val*))(var80->class->vft[COLOR_abstract_collection__Collection__iterator]))(var80) /* iterator on <var80:nullable Object(Array[nullable MType])>*/;
for(;;) {
var82 = ((short int (*)(val*))(var81->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var81) /* is_ok on <var81:Iterator[nullable Object]>*/;
if(!var82) break;
var83 = ((val* (*)(val*))(var81->class->vft[COLOR_abstract_collection__Iterator__item]))(var81) /* item on <var81:Iterator[nullable Object]>*/;
var_t = var83;
var84 = NULL;
if (var_t == NULL) {
var85 = 1; /* is null */
} else {
var85 = 0; /* arg is null but recv is not */
}
if (var85){
if (varonce86) {
var87 = varonce86;
} else {
var88 = "NULL, /* empty */";
var89 = 17;
var90 = string__NativeString__to_s_with_length(var88, var89);
var87 = var90;
varonce86 = var87;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var87) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
} else {
var91 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:SeparateCompiler>*/;
var92 = 1;
var93 = ((val* (*)(val*, val*, val*, val*, short int))(var_t->class->vft[COLOR_model__MType__resolve_for]))(var_t, var_mclass_type, var_mclass_type, var91, var92) /* resolve_for on <var_t:nullable MType(MType)>*/;
var_tv = var93;
var94 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__type_layout]))(self) /* type_layout on <self:SeparateCompiler>*/;
if (var94 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 706);
show_backtrace(1);
} else {
var95 = ((val* (*)(val*))(var94->class->vft[COLOR_layout_builders__Layout__ids]))(var94) /* ids on <var94:nullable Layout[MType]>*/;
}
var96 = ((short int (*)(val*, val*))(var95->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var95, var_tv) /* has_key on <var95:Map[Object, Int](Map[MType, Int])>*/;
if (var96){
if (varonce97) {
var98 = varonce97;
} else {
var99 = "type_";
var100 = 5;
var101 = string__NativeString__to_s_with_length(var99, var100);
var98 = var101;
varonce97 = var98;
}
var102 = ((val* (*)(val*))(var_tv->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_tv) /* c_name on <var_tv:MType>*/;
var103 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var103 = array_instance Array[Object] */
var104 = 2;
var105 = NEW_array__NativeArray(var104, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var105)->values[0] = (val*) var98;
((struct instance_array__NativeArray*)var105)->values[1] = (val*) var102;
((void (*)(val*, val*, long))(var103->class->vft[COLOR_array__Array__with_native]))(var103, var105, var104) /* with_native on <var103:Array[Object]>*/;
}
var106 = ((val* (*)(val*))(var103->class->vft[COLOR_string__Object__to_s]))(var103) /* to_s on <var103:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(var_v, var106) /* require_declaration on <var_v:SeparateCompilerVisitor>*/;
if (varonce107) {
var108 = varonce107;
} else {
var109 = "&type_";
var110 = 6;
var111 = string__NativeString__to_s_with_length(var109, var110);
var108 = var111;
varonce107 = var108;
}
var112 = ((val* (*)(val*))(var_tv->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_tv) /* c_name on <var_tv:MType>*/;
if (varonce113) {
var114 = varonce113;
} else {
var115 = ", /* ";
var116 = 5;
var117 = string__NativeString__to_s_with_length(var115, var116);
var114 = var117;
varonce113 = var114;
}
if (varonce118) {
var119 = varonce118;
} else {
var120 = ": ";
var121 = 2;
var122 = string__NativeString__to_s_with_length(var120, var121);
var119 = var122;
varonce118 = var119;
}
if (varonce123) {
var124 = varonce123;
} else {
var125 = " */";
var126 = 3;
var127 = string__NativeString__to_s_with_length(var125, var126);
var124 = var127;
varonce123 = var124;
}
var128 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var128 = array_instance Array[Object] */
var129 = 7;
var130 = NEW_array__NativeArray(var129, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var130)->values[0] = (val*) var108;
((struct instance_array__NativeArray*)var130)->values[1] = (val*) var112;
((struct instance_array__NativeArray*)var130)->values[2] = (val*) var114;
((struct instance_array__NativeArray*)var130)->values[3] = (val*) var_t;
((struct instance_array__NativeArray*)var130)->values[4] = (val*) var119;
((struct instance_array__NativeArray*)var130)->values[5] = (val*) var_tv;
((struct instance_array__NativeArray*)var130)->values[6] = (val*) var124;
((void (*)(val*, val*, long))(var128->class->vft[COLOR_array__Array__with_native]))(var128, var130, var129) /* with_native on <var128:Array[Object]>*/;
}
var131 = ((val* (*)(val*))(var128->class->vft[COLOR_string__Object__to_s]))(var128) /* to_s on <var128:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var131) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
} else {
if (varonce132) {
var133 = varonce132;
} else {
var134 = "NULL, /* empty (";
var135 = 16;
var136 = string__NativeString__to_s_with_length(var134, var135);
var133 = var136;
varonce132 = var133;
}
if (varonce137) {
var138 = varonce137;
} else {
var139 = ": ";
var140 = 2;
var141 = string__NativeString__to_s_with_length(var139, var140);
var138 = var141;
varonce137 = var138;
}
if (varonce142) {
var143 = varonce142;
} else {
var144 = " not a live type) */";
var145 = 20;
var146 = string__NativeString__to_s_with_length(var144, var145);
var143 = var146;
varonce142 = var143;
}
var147 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var147 = array_instance Array[Object] */
var148 = 5;
var149 = NEW_array__NativeArray(var148, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var149)->values[0] = (val*) var133;
((struct instance_array__NativeArray*)var149)->values[1] = (val*) var_t;
((struct instance_array__NativeArray*)var149)->values[2] = (val*) var138;
((struct instance_array__NativeArray*)var149)->values[3] = (val*) var_tv;
((struct instance_array__NativeArray*)var149)->values[4] = (val*) var143;
((void (*)(val*, val*, long))(var147->class->vft[COLOR_array__Array__with_native]))(var147, var149, var148) /* with_native on <var147:Array[Object]>*/;
}
var150 = ((val* (*)(val*))(var147->class->vft[COLOR_string__Object__to_s]))(var147) /* to_s on <var147:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var150) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
}
}
CONTINUE_label: (void)0;
((void (*)(val*))(var81->class->vft[COLOR_abstract_collection__Iterator__next]))(var81) /* next on <var81:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
if (varonce151) {
var152 = varonce151;
} else {
var153 = "}";
var154 = 1;
var155 = string__NativeString__to_s_with_length(var153, var154);
var152 = var155;
varonce151 = var152;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var152) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
if (varonce156) {
var157 = varonce156;
} else {
var158 = "};";
var159 = 2;
var160 = string__NativeString__to_s_with_length(var158, var159);
var157 = var160;
varonce156 = var157;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var157) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
var161 = 1;
var = var161;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#compile_type_resolution_table for (self: Object, MType): Bool */
short int VIRTUAL_separate_compiler__SeparateCompiler__compile_type_resolution_table(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = separate_compiler__SeparateCompiler__compile_type_resolution_table(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#compile_class_to_c for (self: SeparateCompiler, MClass) */
void separate_compiler__SeparateCompiler__compile_class_to_c(val* self, val* p0) {
val* var_mclass /* var mclass: MClass */;
val* var /* : MClassDef */;
val* var1 /* : MClassType */;
val* var_mtype /* var mtype: MClassType */;
val* var2 /* : String */;
val* var_c_name /* var c_name: String */;
val* var3 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var4 /* : nullable Object */;
val* var_vft /* var vft: Array[nullable MPropDef] */;
val* var5 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var6 /* : nullable Object */;
val* var_attrs /* var attrs: Array[nullable MPropDef] */;
val* var7 /* : AbstractCompilerVisitor */;
val* var_v /* var v: SeparateCompilerVisitor */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : nullable RapidTypeAnalysis */;
val* var12 /* : null */;
short int var13 /* : Bool */;
short int var_ /* var : Bool */;
val* var14 /* : nullable RapidTypeAnalysis */;
val* var15 /* : HashSet[MClass] */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var_18 /* var : Bool */;
val* var19 /* : String */;
static val* varonce;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : String */;
short int var24 /* : Bool */;
short int var_25 /* var : Bool */;
val* var26 /* : String */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : String */;
short int var32 /* : Bool */;
short int var_is_dead /* var is_dead: Bool */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
val* var37 /* : String */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
long var41 /* : Int */;
val* var42 /* : String */;
val* var43 /* : Array[Object] */;
long var44 /* : Int */;
val* var45 /* : NativeArray[Object] */;
val* var46 /* : String */;
short int var47 /* : Bool */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
long var51 /* : Int */;
val* var52 /* : String */;
val* var53 /* : Array[Object] */;
long var54 /* : Int */;
val* var55 /* : NativeArray[Object] */;
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
val* var67 /* : Array[Object] */;
long var68 /* : Int */;
val* var69 /* : NativeArray[Object] */;
val* var70 /* : String */;
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
val* var81 /* : Array[Object] */;
long var82 /* : Int */;
val* var83 /* : NativeArray[Object] */;
val* var84 /* : String */;
long var85 /* : Int */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
long var89 /* : Int */;
val* var90 /* : String */;
val* var91 /* : Array[Object] */;
long var92 /* : Int */;
val* var93 /* : NativeArray[Object] */;
val* var94 /* : Object */;
val* var95 /* : String */;
static val* varonce96;
val* var97 /* : String */;
char* var98 /* : NativeString */;
long var99 /* : Int */;
val* var100 /* : String */;
val* var101 /* : Range[Int] */;
long var102 /* : Int */;
long var103 /* : Int */;
val* var104 /* : Discrete */;
val* var105 /* : Discrete */;
val* var106 /* : Iterator[nullable Object] */;
short int var107 /* : Bool */;
val* var108 /* : nullable Object */;
long var_i /* var i: Int */;
long var109 /* : Int */;
val* var110 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: nullable MPropDef */;
val* var111 /* : null */;
short int var112 /* : Bool */;
static val* varonce113;
val* var114 /* : String */;
char* var115 /* : NativeString */;
long var116 /* : Int */;
val* var117 /* : String */;
short int var118 /* : Bool */;
int cltype;
int idtype;
val* var119 /* : AbstractRuntimeFunction */;
val* var_rf /* var rf: AbstractRuntimeFunction */;
val* var120 /* : String */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : NativeString */;
long var124 /* : Int */;
val* var125 /* : String */;
val* var126 /* : String */;
static val* varonce127;
val* var128 /* : String */;
char* var129 /* : NativeString */;
long var130 /* : Int */;
val* var131 /* : String */;
val* var132 /* : MModule */;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : NativeString */;
long var136 /* : Int */;
val* var137 /* : String */;
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
static val* varonce152;
val* var153 /* : String */;
char* var154 /* : NativeString */;
long var155 /* : Int */;
val* var156 /* : String */;
static val* varonce157;
val* var158 /* : String */;
char* var159 /* : NativeString */;
long var160 /* : Int */;
val* var161 /* : String */;
val* var162 /* : String */;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : NativeString */;
long var166 /* : Int */;
val* var167 /* : String */;
short int var168 /* : Bool */;
val* var169 /* : CodeWriter */;
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
val* var183 /* : String */;
val* var184 /* : CodeWriter */;
static val* varonce185;
val* var186 /* : String */;
char* var187 /* : NativeString */;
long var188 /* : Int */;
val* var189 /* : String */;
val* var190 /* : CodeWriter */;
static val* varonce191;
val* var192 /* : String */;
char* var193 /* : NativeString */;
long var194 /* : Int */;
val* var195 /* : String */;
val* var196 /* : CodeWriter */;
val* var197 /* : String */;
static val* varonce198;
val* var199 /* : String */;
char* var200 /* : NativeString */;
long var201 /* : Int */;
val* var202 /* : String */;
val* var203 /* : Array[Object] */;
long var204 /* : Int */;
val* var205 /* : NativeArray[Object] */;
val* var206 /* : String */;
val* var207 /* : CodeWriter */;
static val* varonce208;
val* var209 /* : String */;
char* var210 /* : NativeString */;
long var211 /* : Int */;
val* var212 /* : String */;
val* var213 /* : nullable RapidTypeAnalysis */;
val* var214 /* : HashSet[MClassType] */;
short int var215 /* : Bool */;
short int var216 /* : Bool */;
val* var217 /* : CodeWriter */;
static val* varonce218;
val* var219 /* : String */;
char* var220 /* : NativeString */;
long var221 /* : Int */;
val* var222 /* : String */;
static val* varonce223;
val* var224 /* : String */;
char* var225 /* : NativeString */;
long var226 /* : Int */;
val* var227 /* : String */;
val* var228 /* : String */;
static val* varonce229;
val* var230 /* : String */;
char* var231 /* : NativeString */;
long var232 /* : Int */;
val* var233 /* : String */;
val* var234 /* : Array[Object] */;
long var235 /* : Int */;
val* var236 /* : NativeArray[Object] */;
val* var237 /* : String */;
static val* varonce238;
val* var239 /* : String */;
char* var240 /* : NativeString */;
long var241 /* : Int */;
val* var242 /* : String */;
static val* varonce243;
val* var244 /* : String */;
char* var245 /* : NativeString */;
long var246 /* : Int */;
val* var247 /* : String */;
val* var248 /* : Array[Object] */;
long var249 /* : Int */;
val* var250 /* : NativeArray[Object] */;
val* var251 /* : String */;
static val* varonce252;
val* var253 /* : String */;
char* var254 /* : NativeString */;
long var255 /* : Int */;
val* var256 /* : String */;
val* var257 /* : String */;
static val* varonce258;
val* var259 /* : String */;
char* var260 /* : NativeString */;
long var261 /* : Int */;
val* var262 /* : String */;
val* var263 /* : String */;
static val* varonce264;
val* var265 /* : String */;
char* var266 /* : NativeString */;
long var267 /* : Int */;
val* var268 /* : String */;
val* var269 /* : Array[Object] */;
long var270 /* : Int */;
val* var271 /* : NativeArray[Object] */;
val* var272 /* : String */;
static val* varonce273;
val* var274 /* : String */;
char* var275 /* : NativeString */;
long var276 /* : Int */;
val* var277 /* : String */;
static val* varonce278;
val* var279 /* : String */;
char* var280 /* : NativeString */;
long var281 /* : Int */;
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
static val* varonce292;
val* var293 /* : String */;
char* var294 /* : NativeString */;
long var295 /* : Int */;
val* var296 /* : String */;
val* var297 /* : Array[Object] */;
long var298 /* : Int */;
val* var299 /* : NativeArray[Object] */;
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
val* var353 /* : String */;
static val* varonce354;
val* var355 /* : String */;
char* var356 /* : NativeString */;
long var357 /* : Int */;
val* var358 /* : String */;
short int var359 /* : Bool */;
val* var360 /* : CodeWriter */;
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
val* var371 /* : Array[Object] */;
long var372 /* : Int */;
val* var373 /* : NativeArray[Object] */;
val* var374 /* : String */;
val* var375 /* : CodeWriter */;
static val* varonce376;
val* var377 /* : String */;
char* var378 /* : NativeString */;
long var379 /* : Int */;
val* var380 /* : String */;
val* var381 /* : CodeWriter */;
static val* varonce382;
val* var383 /* : String */;
char* var384 /* : NativeString */;
long var385 /* : Int */;
val* var386 /* : String */;
val* var387 /* : CodeWriter */;
static val* varonce388;
val* var389 /* : String */;
char* var390 /* : NativeString */;
long var391 /* : Int */;
val* var392 /* : String */;
val* var393 /* : CodeWriter */;
static val* varonce394;
val* var395 /* : String */;
char* var396 /* : NativeString */;
long var397 /* : Int */;
val* var398 /* : String */;
static val* varonce399;
val* var400 /* : String */;
char* var401 /* : NativeString */;
long var402 /* : Int */;
val* var403 /* : String */;
val* var404 /* : Array[Object] */;
long var405 /* : Int */;
val* var406 /* : NativeArray[Object] */;
val* var407 /* : String */;
val* var408 /* : String */;
static val* varonce409;
val* var410 /* : String */;
char* var411 /* : NativeString */;
long var412 /* : Int */;
val* var413 /* : String */;
static val* varonce414;
val* var415 /* : String */;
char* var416 /* : NativeString */;
long var417 /* : Int */;
val* var418 /* : String */;
val* var419 /* : Array[Object] */;
long var420 /* : Int */;
val* var421 /* : NativeArray[Object] */;
val* var422 /* : String */;
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
val* var433 /* : Array[Object] */;
long var434 /* : Int */;
val* var435 /* : NativeArray[Object] */;
val* var436 /* : String */;
val* var437 /* : String */;
static val* varonce438;
val* var439 /* : String */;
char* var440 /* : NativeString */;
long var441 /* : Int */;
val* var442 /* : String */;
static val* varonce443;
val* var444 /* : String */;
char* var445 /* : NativeString */;
long var446 /* : Int */;
val* var447 /* : String */;
val* var448 /* : Array[Object] */;
long var449 /* : Int */;
val* var450 /* : NativeArray[Object] */;
val* var451 /* : String */;
static val* varonce452;
val* var453 /* : String */;
char* var454 /* : NativeString */;
long var455 /* : Int */;
val* var456 /* : String */;
val* var457 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
short int var458 /* : Bool */;
val* var459 /* : Array[MType] */;
val* var460 /* : nullable Object */;
val* var_mtype_elt /* var mtype_elt: MType */;
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
val* var471 /* : String */;
static val* varonce472;
val* var473 /* : String */;
char* var474 /* : NativeString */;
long var475 /* : Int */;
val* var476 /* : String */;
val* var477 /* : Array[Object] */;
long var478 /* : Int */;
val* var479 /* : NativeArray[Object] */;
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
val* var542 /* : Array[Object] */;
long var543 /* : Int */;
val* var544 /* : NativeArray[Object] */;
val* var545 /* : String */;
val* var546 /* : String */;
static val* varonce547;
val* var548 /* : String */;
char* var549 /* : NativeString */;
long var550 /* : Int */;
val* var551 /* : String */;
static val* varonce552;
val* var553 /* : String */;
char* var554 /* : NativeString */;
long var555 /* : Int */;
val* var556 /* : String */;
val* var557 /* : Array[Object] */;
long var558 /* : Int */;
val* var559 /* : NativeArray[Object] */;
val* var560 /* : String */;
static val* varonce561;
val* var562 /* : String */;
char* var563 /* : NativeString */;
long var564 /* : Int */;
val* var565 /* : String */;
static val* varonce566;
val* var567 /* : String */;
char* var568 /* : NativeString */;
long var569 /* : Int */;
val* var570 /* : String */;
val* var571 /* : Array[Object] */;
long var572 /* : Int */;
val* var573 /* : NativeArray[Object] */;
val* var574 /* : String */;
val* var575 /* : String */;
static val* varonce576;
val* var577 /* : String */;
char* var578 /* : NativeString */;
long var579 /* : Int */;
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
val* var595 /* : Array[Object] */;
long var596 /* : Int */;
val* var597 /* : NativeArray[Object] */;
val* var598 /* : String */;
static val* varonce599;
val* var600 /* : String */;
char* var601 /* : NativeString */;
long var602 /* : Int */;
val* var603 /* : String */;
val* var604 /* : RuntimeVariable */;
val* var_res605 /* var res: RuntimeVariable */;
short int var606 /* : Bool */;
static val* varonce607;
val* var608 /* : String */;
char* var609 /* : NativeString */;
long var610 /* : Int */;
val* var611 /* : String */;
long var612 /* : Int */;
static val* varonce613;
val* var614 /* : String */;
char* var615 /* : NativeString */;
long var616 /* : Int */;
val* var617 /* : String */;
val* var618 /* : Array[Object] */;
long var619 /* : Int */;
val* var620 /* : NativeArray[Object] */;
val* var621 /* : Object */;
val* var622 /* : String */;
static val* varonce623;
val* var624 /* : String */;
char* var625 /* : NativeString */;
long var626 /* : Int */;
val* var627 /* : String */;
val* var628 /* : Array[Object] */;
long var629 /* : Int */;
val* var630 /* : NativeArray[Object] */;
val* var631 /* : String */;
static val* varonce632;
val* var633 /* : String */;
char* var634 /* : NativeString */;
long var635 /* : Int */;
val* var636 /* : String */;
static val* varonce637;
val* var638 /* : String */;
char* var639 /* : NativeString */;
long var640 /* : Int */;
val* var641 /* : String */;
val* var642 /* : Array[Object] */;
long var643 /* : Int */;
val* var644 /* : NativeArray[Object] */;
val* var645 /* : String */;
static val* varonce646;
val* var647 /* : String */;
char* var648 /* : NativeString */;
long var649 /* : Int */;
val* var650 /* : String */;
static val* varonce651;
val* var652 /* : String */;
char* var653 /* : NativeString */;
long var654 /* : Int */;
val* var655 /* : String */;
val* var656 /* : Array[Object] */;
long var657 /* : Int */;
val* var658 /* : NativeArray[Object] */;
val* var659 /* : String */;
static val* varonce660;
val* var661 /* : String */;
char* var662 /* : NativeString */;
long var663 /* : Int */;
val* var664 /* : String */;
static val* varonce665;
val* var666 /* : String */;
char* var667 /* : NativeString */;
long var668 /* : Int */;
val* var669 /* : String */;
val* var670 /* : Array[Object] */;
long var671 /* : Int */;
val* var672 /* : NativeArray[Object] */;
val* var673 /* : String */;
static val* varonce674;
val* var675 /* : String */;
char* var676 /* : NativeString */;
long var677 /* : Int */;
val* var678 /* : String */;
var_mclass = p0;
var = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__intro]))(var_mclass) /* intro on <var_mclass:MClass>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_model__MClassDef__bound_mtype]))(var) /* bound_mtype on <var:MClassDef>*/;
var_mtype = var1;
var2 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_abstract_compiler__MClass__c_name]))(var_mclass) /* c_name on <var_mclass:MClass>*/;
var_c_name = var2;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__method_tables]))(self) /* method_tables on <self:SeparateCompiler>*/;
var4 = ((val* (*)(val*, val*))(var3->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var3, var_mclass) /* [] on <var3:Map[MClass, Array[nullable MPropDef]]>*/;
var_vft = var4;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__attr_tables]))(self) /* attr_tables on <self:SeparateCompiler>*/;
var6 = ((val* (*)(val*, val*))(var5->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var5, var_mclass) /* [] on <var5:Map[MClass, Array[nullable MPropDef]]>*/;
var_attrs = var6;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_visitor]))(self) /* new_visitor on <self:SeparateCompiler>*/;
var_v = var7;
var11 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__runtime_type_analysis]))(self) /* runtime_type_analysis on <self:SeparateCompiler>*/;
var12 = NULL;
if (var11 == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
var_ = var13;
if (var13){
var14 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__runtime_type_analysis]))(self) /* runtime_type_analysis on <self:SeparateCompiler>*/;
if (var14 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 731);
show_backtrace(1);
} else {
var15 = ((val* (*)(val*))(var14->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_classes]))(var14) /* live_classes on <var14:nullable RapidTypeAnalysis>*/;
}
var16 = ((short int (*)(val*, val*))(var15->class->vft[COLOR_abstract_collection__Collection__has]))(var15, var_mclass) /* has on <var15:HashSet[MClass]>*/;
var17 = !var16;
var10 = var17;
} else {
var10 = var_;
}
var_18 = var10;
if (var10){
var19 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MClassType>*/;
if (varonce) {
var20 = varonce;
} else {
var21 = "val*";
var22 = 4;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce = var20;
}
var24 = ((short int (*)(val*, val*))(var19->class->vft[COLOR_kernel__Object___61d_61d]))(var19, var20) /* == on <var19:String>*/;
var9 = var24;
} else {
var9 = var_18;
}
var_25 = var9;
if (var9){
var26 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__name]))(var_mclass) /* name on <var_mclass:MClass>*/;
if (varonce27) {
var28 = varonce27;
} else {
var29 = "NativeArray";
var30 = 11;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
var32 = ((short int (*)(val*, val*))(var26->class->vft[COLOR_kernel__Object___33d_61d]))(var26, var28) /* != on <var26:String>*/;
var8 = var32;
} else {
var8 = var_25;
}
var_is_dead = var8;
if (varonce33) {
var34 = varonce33;
} else {
var35 = "/* runtime class ";
var36 = 17;
var37 = string__NativeString__to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
if (varonce38) {
var39 = varonce38;
} else {
var40 = " */";
var41 = 3;
var42 = string__NativeString__to_s_with_length(var40, var41);
var39 = var42;
varonce38 = var39;
}
var43 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var43 = array_instance Array[Object] */
var44 = 3;
var45 = NEW_array__NativeArray(var44, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var45)->values[0] = (val*) var34;
((struct instance_array__NativeArray*)var45)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var45)->values[2] = (val*) var39;
((void (*)(val*, val*, long))(var43->class->vft[COLOR_array__Array__with_native]))(var43, var45, var44) /* with_native on <var43:Array[Object]>*/;
}
var46 = ((val* (*)(val*))(var43->class->vft[COLOR_string__Object__to_s]))(var43) /* to_s on <var43:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var46) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
var47 = !var_is_dead;
if (var47){
if (varonce48) {
var49 = varonce48;
} else {
var50 = "class_";
var51 = 6;
var52 = string__NativeString__to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
var53 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var53 = array_instance Array[Object] */
var54 = 2;
var55 = NEW_array__NativeArray(var54, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var55)->values[0] = (val*) var49;
((struct instance_array__NativeArray*)var55)->values[1] = (val*) var_c_name;
((void (*)(val*, val*, long))(var53->class->vft[COLOR_array__Array__with_native]))(var53, var55, var54) /* with_native on <var53:Array[Object]>*/;
}
var56 = ((val* (*)(val*))(var53->class->vft[COLOR_string__Object__to_s]))(var53) /* to_s on <var53:Array[Object]>*/;
if (varonce57) {
var58 = varonce57;
} else {
var59 = "extern const struct class class_";
var60 = 32;
var61 = string__NativeString__to_s_with_length(var59, var60);
var58 = var61;
varonce57 = var58;
}
if (varonce62) {
var63 = varonce62;
} else {
var64 = ";";
var65 = 1;
var66 = string__NativeString__to_s_with_length(var64, var65);
var63 = var66;
varonce62 = var63;
}
var67 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var67 = array_instance Array[Object] */
var68 = 3;
var69 = NEW_array__NativeArray(var68, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var69)->values[0] = (val*) var58;
((struct instance_array__NativeArray*)var69)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var69)->values[2] = (val*) var63;
((void (*)(val*, val*, long))(var67->class->vft[COLOR_array__Array__with_native]))(var67, var69, var68) /* with_native on <var67:Array[Object]>*/;
}
var70 = ((val* (*)(val*))(var67->class->vft[COLOR_string__Object__to_s]))(var67) /* to_s on <var67:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__provide_declaration]))(self, var56, var70) /* provide_declaration on <self:SeparateCompiler>*/;
if (varonce71) {
var72 = varonce71;
} else {
var73 = "const struct class class_";
var74 = 25;
var75 = string__NativeString__to_s_with_length(var73, var74);
var72 = var75;
varonce71 = var72;
}
if (varonce76) {
var77 = varonce76;
} else {
var78 = " = {";
var79 = 4;
var80 = string__NativeString__to_s_with_length(var78, var79);
var77 = var80;
varonce76 = var77;
}
var81 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var81 = array_instance Array[Object] */
var82 = 3;
var83 = NEW_array__NativeArray(var82, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var83)->values[0] = (val*) var72;
((struct instance_array__NativeArray*)var83)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var83)->values[2] = (val*) var77;
((void (*)(val*, val*, long))(var81->class->vft[COLOR_array__Array__with_native]))(var81, var83, var82) /* with_native on <var81:Array[Object]>*/;
}
var84 = ((val* (*)(val*))(var81->class->vft[COLOR_string__Object__to_s]))(var81) /* to_s on <var81:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var84) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
var85 = ((long (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__box_kind_of]))(self, var_mclass) /* box_kind_of on <self:SeparateCompiler>*/;
if (varonce86) {
var87 = varonce86;
} else {
var88 = ", /* box_kind */";
var89 = 16;
var90 = string__NativeString__to_s_with_length(var88, var89);
var87 = var90;
varonce86 = var87;
}
var91 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var91 = array_instance Array[Object] */
var92 = 2;
var93 = NEW_array__NativeArray(var92, &type_array__NativeArraykernel__Object);
var94 = BOX_kernel__Int(var85); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var93)->values[0] = (val*) var94;
((struct instance_array__NativeArray*)var93)->values[1] = (val*) var87;
((void (*)(val*, val*, long))(var91->class->vft[COLOR_array__Array__with_native]))(var91, var93, var92) /* with_native on <var91:Array[Object]>*/;
}
var95 = ((val* (*)(val*))(var91->class->vft[COLOR_string__Object__to_s]))(var91) /* to_s on <var91:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var95) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
if (varonce96) {
var97 = varonce96;
} else {
var98 = "{";
var99 = 1;
var100 = string__NativeString__to_s_with_length(var98, var99);
var97 = var100;
varonce96 = var97;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var97) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
var101 = NEW_range__Range(&type_range__Rangekernel__Int);
var102 = 0;
var103 = ((long (*)(val*))(var_vft->class->vft[COLOR_abstract_collection__Collection__length]))(var_vft) /* length on <var_vft:Array[nullable MPropDef]>*/;
var104 = BOX_kernel__Int(var102); /* autobox from Int to Discrete */
var105 = BOX_kernel__Int(var103); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var101->class->vft[COLOR_range__Range__without_last]))(var101, var104, var105) /* without_last on <var101:Range[Int]>*/;
var106 = ((val* (*)(val*))(var101->class->vft[COLOR_abstract_collection__Collection__iterator]))(var101) /* iterator on <var101:Range[Int]>*/;
for(;;) {
var107 = ((short int (*)(val*))(var106->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var106) /* is_ok on <var106:Iterator[nullable Object]>*/;
if(!var107) break;
var108 = ((val* (*)(val*))(var106->class->vft[COLOR_abstract_collection__Iterator__item]))(var106) /* item on <var106:Iterator[nullable Object]>*/;
var109 = ((struct instance_kernel__Int*)var108)->value; /* autounbox from nullable Object to Int */;
var_i = var109;
var110 = ((val* (*)(val*, long))(var_vft->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_vft, var_i) /* [] on <var_vft:Array[nullable MPropDef]>*/;
var_mpropdef = var110;
var111 = NULL;
if (var_mpropdef == NULL) {
var112 = 1; /* is null */
} else {
var112 = 0; /* arg is null but recv is not */
}
if (var112){
if (varonce113) {
var114 = varonce113;
} else {
var115 = "NULL, /* empty */";
var116 = 17;
var117 = string__NativeString__to_s_with_length(var115, var116);
var114 = var117;
varonce113 = var114;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var114) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
} else {
/* <var_mpropdef:nullable MPropDef(MPropDef)> isa MMethodDef */
cltype = type_model__MMethodDef.color;
idtype = type_model__MMethodDef.id;
if(cltype >= var_mpropdef->type->table_size) {
var118 = 0;
} else {
var118 = var_mpropdef->type->type_table[cltype] == idtype;
}
if (!var118) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 746);
show_backtrace(1);
}
var119 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_separate_compiler__MMethodDef__virtual_runtime_function]))(var_mpropdef) /* virtual_runtime_function on <var_mpropdef:nullable MPropDef(MMethodDef)>*/;
var_rf = var119;
var120 = ((val* (*)(val*))(var_rf->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__c_name]))(var_rf) /* c_name on <var_rf:AbstractRuntimeFunction>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(var_v, var120) /* require_declaration on <var_v:SeparateCompilerVisitor>*/;
if (varonce121) {
var122 = varonce121;
} else {
var123 = "(nitmethod_t)";
var124 = 13;
var125 = string__NativeString__to_s_with_length(var123, var124);
var122 = var125;
varonce121 = var122;
}
var126 = ((val* (*)(val*))(var_rf->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__c_name]))(var_rf) /* c_name on <var_rf:AbstractRuntimeFunction>*/;
if (varonce127) {
var128 = varonce127;
} else {
var129 = ", /* pointer to ";
var130 = 16;
var131 = string__NativeString__to_s_with_length(var129, var130);
var128 = var131;
varonce127 = var128;
}
var132 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__intro_mmodule]))(var_mclass) /* intro_mmodule on <var_mclass:MClass>*/;
if (varonce133) {
var134 = varonce133;
} else {
var135 = ":";
var136 = 1;
var137 = string__NativeString__to_s_with_length(var135, var136);
var134 = var137;
varonce133 = var134;
}
if (varonce138) {
var139 = varonce138;
} else {
var140 = ":";
var141 = 1;
var142 = string__NativeString__to_s_with_length(var140, var141);
var139 = var142;
varonce138 = var139;
}
if (varonce143) {
var144 = varonce143;
} else {
var145 = " */";
var146 = 3;
var147 = string__NativeString__to_s_with_length(var145, var146);
var144 = var147;
varonce143 = var144;
}
var148 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var148 = array_instance Array[Object] */
var149 = 9;
var150 = NEW_array__NativeArray(var149, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var150)->values[0] = (val*) var122;
((struct instance_array__NativeArray*)var150)->values[1] = (val*) var126;
((struct instance_array__NativeArray*)var150)->values[2] = (val*) var128;
((struct instance_array__NativeArray*)var150)->values[3] = (val*) var132;
((struct instance_array__NativeArray*)var150)->values[4] = (val*) var134;
((struct instance_array__NativeArray*)var150)->values[5] = (val*) var_mclass;
((struct instance_array__NativeArray*)var150)->values[6] = (val*) var139;
((struct instance_array__NativeArray*)var150)->values[7] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var150)->values[8] = (val*) var144;
((void (*)(val*, val*, long))(var148->class->vft[COLOR_array__Array__with_native]))(var148, var150, var149) /* with_native on <var148:Array[Object]>*/;
}
var151 = ((val* (*)(val*))(var148->class->vft[COLOR_string__Object__to_s]))(var148) /* to_s on <var148:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var151) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
}
CONTINUE_label: (void)0;
((void (*)(val*))(var106->class->vft[COLOR_abstract_collection__Iterator__next]))(var106) /* next on <var106:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
if (varonce152) {
var153 = varonce152;
} else {
var154 = "}";
var155 = 1;
var156 = string__NativeString__to_s_with_length(var154, var155);
var153 = var156;
varonce152 = var153;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var153) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
if (varonce157) {
var158 = varonce157;
} else {
var159 = "};";
var160 = 2;
var161 = string__NativeString__to_s_with_length(var159, var160);
var158 = var161;
varonce157 = var158;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var158) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
} else {
}
var162 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MClassType>*/;
if (varonce163) {
var164 = varonce163;
} else {
var165 = "val*";
var166 = 4;
var167 = string__NativeString__to_s_with_length(var165, var166);
var164 = var167;
varonce163 = var164;
}
var168 = ((short int (*)(val*, val*))(var162->class->vft[COLOR_kernel__Object___33d_61d]))(var162, var164) /* != on <var162:String>*/;
if (var168){
var169 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateCompiler>*/;
if (varonce170) {
var171 = varonce170;
} else {
var172 = "struct instance_";
var173 = 16;
var174 = string__NativeString__to_s_with_length(var172, var173);
var171 = var174;
varonce170 = var171;
}
if (varonce175) {
var176 = varonce175;
} else {
var177 = " {";
var178 = 2;
var179 = string__NativeString__to_s_with_length(var177, var178);
var176 = var179;
varonce175 = var176;
}
var180 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var180 = array_instance Array[Object] */
var181 = 3;
var182 = NEW_array__NativeArray(var181, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var182)->values[0] = (val*) var171;
((struct instance_array__NativeArray*)var182)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var182)->values[2] = (val*) var176;
((void (*)(val*, val*, long))(var180->class->vft[COLOR_array__Array__with_native]))(var180, var182, var181) /* with_native on <var180:Array[Object]>*/;
}
var183 = ((val* (*)(val*))(var180->class->vft[COLOR_string__Object__to_s]))(var180) /* to_s on <var180:Array[Object]>*/;
((void (*)(val*, val*))(var169->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var169, var183) /* add_decl on <var169:CodeWriter>*/;
var184 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateCompiler>*/;
if (varonce185) {
var186 = varonce185;
} else {
var187 = "const struct type *type;";
var188 = 24;
var189 = string__NativeString__to_s_with_length(var187, var188);
var186 = var189;
varonce185 = var186;
}
((void (*)(val*, val*))(var184->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var184, var186) /* add_decl on <var184:CodeWriter>*/;
var190 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateCompiler>*/;
if (varonce191) {
var192 = varonce191;
} else {
var193 = "const struct class *class;";
var194 = 26;
var195 = string__NativeString__to_s_with_length(var193, var194);
var192 = var195;
varonce191 = var192;
}
((void (*)(val*, val*))(var190->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var190, var192) /* add_decl on <var190:CodeWriter>*/;
var196 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateCompiler>*/;
var197 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MClassType>*/;
if (varonce198) {
var199 = varonce198;
} else {
var200 = " value;";
var201 = 7;
var202 = string__NativeString__to_s_with_length(var200, var201);
var199 = var202;
varonce198 = var199;
}
var203 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var203 = array_instance Array[Object] */
var204 = 2;
var205 = NEW_array__NativeArray(var204, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var205)->values[0] = (val*) var197;
((struct instance_array__NativeArray*)var205)->values[1] = (val*) var199;
((void (*)(val*, val*, long))(var203->class->vft[COLOR_array__Array__with_native]))(var203, var205, var204) /* with_native on <var203:Array[Object]>*/;
}
var206 = ((val* (*)(val*))(var203->class->vft[COLOR_string__Object__to_s]))(var203) /* to_s on <var203:Array[Object]>*/;
((void (*)(val*, val*))(var196->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var196, var206) /* add_decl on <var196:CodeWriter>*/;
var207 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateCompiler>*/;
if (varonce208) {
var209 = varonce208;
} else {
var210 = "};";
var211 = 2;
var212 = string__NativeString__to_s_with_length(var210, var211);
var209 = var212;
varonce208 = var209;
}
((void (*)(val*, val*))(var207->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var207, var209) /* add_decl on <var207:CodeWriter>*/;
var213 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__runtime_type_analysis]))(self) /* runtime_type_analysis on <self:SeparateCompiler>*/;
if (var213 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 764);
show_backtrace(1);
} else {
var214 = ((val* (*)(val*))(var213->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_types]))(var213) /* live_types on <var213:nullable RapidTypeAnalysis>*/;
}
var215 = ((short int (*)(val*, val*))(var214->class->vft[COLOR_abstract_collection__Collection__has]))(var214, var_mtype) /* has on <var214:HashSet[MClassType]>*/;
var216 = !var215;
if (var216){
goto RET_LABEL;
} else {
}
var217 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateCompiler>*/;
if (varonce218) {
var219 = varonce218;
} else {
var220 = "val* BOX_";
var221 = 9;
var222 = string__NativeString__to_s_with_length(var220, var221);
var219 = var222;
varonce218 = var219;
}
if (varonce223) {
var224 = varonce223;
} else {
var225 = "(";
var226 = 1;
var227 = string__NativeString__to_s_with_length(var225, var226);
var224 = var227;
varonce223 = var224;
}
var228 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MClassType>*/;
if (varonce229) {
var230 = varonce229;
} else {
var231 = ");";
var232 = 2;
var233 = string__NativeString__to_s_with_length(var231, var232);
var230 = var233;
varonce229 = var230;
}
var234 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var234 = array_instance Array[Object] */
var235 = 5;
var236 = NEW_array__NativeArray(var235, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var236)->values[0] = (val*) var219;
((struct instance_array__NativeArray*)var236)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var236)->values[2] = (val*) var224;
((struct instance_array__NativeArray*)var236)->values[3] = (val*) var228;
((struct instance_array__NativeArray*)var236)->values[4] = (val*) var230;
((void (*)(val*, val*, long))(var234->class->vft[COLOR_array__Array__with_native]))(var234, var236, var235) /* with_native on <var234:Array[Object]>*/;
}
var237 = ((val* (*)(val*))(var234->class->vft[COLOR_string__Object__to_s]))(var234) /* to_s on <var234:Array[Object]>*/;
((void (*)(val*, val*))(var217->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var217, var237) /* add_decl on <var217:CodeWriter>*/;
if (varonce238) {
var239 = varonce238;
} else {
var240 = "/* allocate ";
var241 = 12;
var242 = string__NativeString__to_s_with_length(var240, var241);
var239 = var242;
varonce238 = var239;
}
if (varonce243) {
var244 = varonce243;
} else {
var245 = " */";
var246 = 3;
var247 = string__NativeString__to_s_with_length(var245, var246);
var244 = var247;
varonce243 = var244;
}
var248 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var248 = array_instance Array[Object] */
var249 = 3;
var250 = NEW_array__NativeArray(var249, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var250)->values[0] = (val*) var239;
((struct instance_array__NativeArray*)var250)->values[1] = (val*) var_mtype;
((struct instance_array__NativeArray*)var250)->values[2] = (val*) var244;
((void (*)(val*, val*, long))(var248->class->vft[COLOR_array__Array__with_native]))(var248, var250, var249) /* with_native on <var248:Array[Object]>*/;
}
var251 = ((val* (*)(val*))(var248->class->vft[COLOR_string__Object__to_s]))(var248) /* to_s on <var248:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var251) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
if (varonce252) {
var253 = varonce252;
} else {
var254 = "val* BOX_";
var255 = 9;
var256 = string__NativeString__to_s_with_length(var254, var255);
var253 = var256;
varonce252 = var253;
}
var257 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MClassType>*/;
if (varonce258) {
var259 = varonce258;
} else {
var260 = "(";
var261 = 1;
var262 = string__NativeString__to_s_with_length(var260, var261);
var259 = var262;
varonce258 = var259;
}
var263 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MClassType>*/;
if (varonce264) {
var265 = varonce264;
} else {
var266 = " value) {";
var267 = 9;
var268 = string__NativeString__to_s_with_length(var266, var267);
var265 = var268;
varonce264 = var265;
}
var269 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var269 = array_instance Array[Object] */
var270 = 5;
var271 = NEW_array__NativeArray(var270, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var271)->values[0] = (val*) var253;
((struct instance_array__NativeArray*)var271)->values[1] = (val*) var257;
((struct instance_array__NativeArray*)var271)->values[2] = (val*) var259;
((struct instance_array__NativeArray*)var271)->values[3] = (val*) var263;
((struct instance_array__NativeArray*)var271)->values[4] = (val*) var265;
((void (*)(val*, val*, long))(var269->class->vft[COLOR_array__Array__with_native]))(var269, var271, var270) /* with_native on <var269:Array[Object]>*/;
}
var272 = ((val* (*)(val*))(var269->class->vft[COLOR_string__Object__to_s]))(var269) /* to_s on <var269:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var272) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
if (varonce273) {
var274 = varonce273;
} else {
var275 = "struct instance_";
var276 = 16;
var277 = string__NativeString__to_s_with_length(var275, var276);
var274 = var277;
varonce273 = var274;
}
if (varonce278) {
var279 = varonce278;
} else {
var280 = "*res = nit_alloc(sizeof(struct instance_";
var281 = 40;
var282 = string__NativeString__to_s_with_length(var280, var281);
var279 = var282;
varonce278 = var279;
}
if (varonce283) {
var284 = varonce283;
} else {
var285 = "));";
var286 = 3;
var287 = string__NativeString__to_s_with_length(var285, var286);
var284 = var287;
varonce283 = var284;
}
var288 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var288 = array_instance Array[Object] */
var289 = 5;
var290 = NEW_array__NativeArray(var289, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var290)->values[0] = (val*) var274;
((struct instance_array__NativeArray*)var290)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var290)->values[2] = (val*) var279;
((struct instance_array__NativeArray*)var290)->values[3] = (val*) var_c_name;
((struct instance_array__NativeArray*)var290)->values[4] = (val*) var284;
((void (*)(val*, val*, long))(var288->class->vft[COLOR_array__Array__with_native]))(var288, var290, var289) /* with_native on <var288:Array[Object]>*/;
}
var291 = ((val* (*)(val*))(var288->class->vft[COLOR_string__Object__to_s]))(var288) /* to_s on <var288:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var291) /* add on <var_v:SeparateCompilerVisitor>*/;
if (varonce292) {
var293 = varonce292;
} else {
var294 = "type_";
var295 = 5;
var296 = string__NativeString__to_s_with_length(var294, var295);
var293 = var296;
varonce292 = var293;
}
var297 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var297 = array_instance Array[Object] */
var298 = 2;
var299 = NEW_array__NativeArray(var298, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var299)->values[0] = (val*) var293;
((struct instance_array__NativeArray*)var299)->values[1] = (val*) var_c_name;
((void (*)(val*, val*, long))(var297->class->vft[COLOR_array__Array__with_native]))(var297, var299, var298) /* with_native on <var297:Array[Object]>*/;
}
var300 = ((val* (*)(val*))(var297->class->vft[COLOR_string__Object__to_s]))(var297) /* to_s on <var297:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(var_v, var300) /* require_declaration on <var_v:SeparateCompilerVisitor>*/;
if (varonce301) {
var302 = varonce301;
} else {
var303 = "res->type = &type_";
var304 = 18;
var305 = string__NativeString__to_s_with_length(var303, var304);
var302 = var305;
varonce301 = var302;
}
if (varonce306) {
var307 = varonce306;
} else {
var308 = ";";
var309 = 1;
var310 = string__NativeString__to_s_with_length(var308, var309);
var307 = var310;
varonce306 = var307;
}
var311 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var311 = array_instance Array[Object] */
var312 = 3;
var313 = NEW_array__NativeArray(var312, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var313)->values[0] = (val*) var302;
((struct instance_array__NativeArray*)var313)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var313)->values[2] = (val*) var307;
((void (*)(val*, val*, long))(var311->class->vft[COLOR_array__Array__with_native]))(var311, var313, var312) /* with_native on <var311:Array[Object]>*/;
}
var314 = ((val* (*)(val*))(var311->class->vft[COLOR_string__Object__to_s]))(var311) /* to_s on <var311:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var314) /* add on <var_v:SeparateCompilerVisitor>*/;
if (varonce315) {
var316 = varonce315;
} else {
var317 = "class_";
var318 = 6;
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
var326 = "res->class = &class_";
var327 = 20;
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
var340 = "res->value = value;";
var341 = 19;
var342 = string__NativeString__to_s_with_length(var340, var341);
var339 = var342;
varonce338 = var339;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var339) /* add on <var_v:SeparateCompilerVisitor>*/;
if (varonce343) {
var344 = varonce343;
} else {
var345 = "return (val*)res;";
var346 = 17;
var347 = string__NativeString__to_s_with_length(var345, var346);
var344 = var347;
varonce343 = var344;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var344) /* add on <var_v:SeparateCompilerVisitor>*/;
if (varonce348) {
var349 = varonce348;
} else {
var350 = "}";
var351 = 1;
var352 = string__NativeString__to_s_with_length(var350, var351);
var349 = var352;
varonce348 = var349;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var349) /* add on <var_v:SeparateCompilerVisitor>*/;
goto RET_LABEL;
} else {
var353 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__name]))(var_mclass) /* name on <var_mclass:MClass>*/;
if (varonce354) {
var355 = varonce354;
} else {
var356 = "NativeArray";
var357 = 11;
var358 = string__NativeString__to_s_with_length(var356, var357);
var355 = var358;
varonce354 = var355;
}
var359 = ((short int (*)(val*, val*))(var353->class->vft[COLOR_kernel__Object___61d_61d]))(var353, var355) /* == on <var353:String>*/;
if (var359){
var360 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateCompiler>*/;
if (varonce361) {
var362 = varonce361;
} else {
var363 = "struct instance_";
var364 = 16;
var365 = string__NativeString__to_s_with_length(var363, var364);
var362 = var365;
varonce361 = var362;
}
if (varonce366) {
var367 = varonce366;
} else {
var368 = " {";
var369 = 2;
var370 = string__NativeString__to_s_with_length(var368, var369);
var367 = var370;
varonce366 = var367;
}
var371 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var371 = array_instance Array[Object] */
var372 = 3;
var373 = NEW_array__NativeArray(var372, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var373)->values[0] = (val*) var362;
((struct instance_array__NativeArray*)var373)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var373)->values[2] = (val*) var367;
((void (*)(val*, val*, long))(var371->class->vft[COLOR_array__Array__with_native]))(var371, var373, var372) /* with_native on <var371:Array[Object]>*/;
}
var374 = ((val* (*)(val*))(var371->class->vft[COLOR_string__Object__to_s]))(var371) /* to_s on <var371:Array[Object]>*/;
((void (*)(val*, val*))(var360->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var360, var374) /* add_decl on <var360:CodeWriter>*/;
var375 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateCompiler>*/;
if (varonce376) {
var377 = varonce376;
} else {
var378 = "const struct type *type;";
var379 = 24;
var380 = string__NativeString__to_s_with_length(var378, var379);
var377 = var380;
varonce376 = var377;
}
((void (*)(val*, val*))(var375->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var375, var377) /* add_decl on <var375:CodeWriter>*/;
var381 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateCompiler>*/;
if (varonce382) {
var383 = varonce382;
} else {
var384 = "const struct class *class;";
var385 = 26;
var386 = string__NativeString__to_s_with_length(var384, var385);
var383 = var386;
varonce382 = var383;
}
((void (*)(val*, val*))(var381->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var381, var383) /* add_decl on <var381:CodeWriter>*/;
var387 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateCompiler>*/;
if (varonce388) {
var389 = varonce388;
} else {
var390 = "val* values[0];";
var391 = 15;
var392 = string__NativeString__to_s_with_length(var390, var391);
var389 = var392;
varonce388 = var389;
}
((void (*)(val*, val*))(var387->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var387, var389) /* add_decl on <var387:CodeWriter>*/;
var393 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateCompiler>*/;
if (varonce394) {
var395 = varonce394;
} else {
var396 = "};";
var397 = 2;
var398 = string__NativeString__to_s_with_length(var396, var397);
var395 = var398;
varonce394 = var395;
}
((void (*)(val*, val*))(var393->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var393, var395) /* add_decl on <var393:CodeWriter>*/;
if (varonce399) {
var400 = varonce399;
} else {
var401 = "NEW_";
var402 = 4;
var403 = string__NativeString__to_s_with_length(var401, var402);
var400 = var403;
varonce399 = var400;
}
var404 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var404 = array_instance Array[Object] */
var405 = 2;
var406 = NEW_array__NativeArray(var405, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var406)->values[0] = (val*) var400;
((struct instance_array__NativeArray*)var406)->values[1] = (val*) var_c_name;
((void (*)(val*, val*, long))(var404->class->vft[COLOR_array__Array__with_native]))(var404, var406, var405) /* with_native on <var404:Array[Object]>*/;
}
var407 = ((val* (*)(val*))(var404->class->vft[COLOR_string__Object__to_s]))(var404) /* to_s on <var404:Array[Object]>*/;
var408 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MClassType>*/;
if (varonce409) {
var410 = varonce409;
} else {
var411 = " NEW_";
var412 = 5;
var413 = string__NativeString__to_s_with_length(var411, var412);
var410 = var413;
varonce409 = var410;
}
if (varonce414) {
var415 = varonce414;
} else {
var416 = "(int length, const struct type* type);";
var417 = 38;
var418 = string__NativeString__to_s_with_length(var416, var417);
var415 = var418;
varonce414 = var415;
}
var419 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var419 = array_instance Array[Object] */
var420 = 4;
var421 = NEW_array__NativeArray(var420, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var421)->values[0] = (val*) var408;
((struct instance_array__NativeArray*)var421)->values[1] = (val*) var410;
((struct instance_array__NativeArray*)var421)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var421)->values[3] = (val*) var415;
((void (*)(val*, val*, long))(var419->class->vft[COLOR_array__Array__with_native]))(var419, var421, var420) /* with_native on <var419:Array[Object]>*/;
}
var422 = ((val* (*)(val*))(var419->class->vft[COLOR_string__Object__to_s]))(var419) /* to_s on <var419:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__provide_declaration]))(self, var407, var422) /* provide_declaration on <self:SeparateCompiler>*/;
if (varonce423) {
var424 = varonce423;
} else {
var425 = "/* allocate ";
var426 = 12;
var427 = string__NativeString__to_s_with_length(var425, var426);
var424 = var427;
varonce423 = var424;
}
if (varonce428) {
var429 = varonce428;
} else {
var430 = " */";
var431 = 3;
var432 = string__NativeString__to_s_with_length(var430, var431);
var429 = var432;
varonce428 = var429;
}
var433 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var433 = array_instance Array[Object] */
var434 = 3;
var435 = NEW_array__NativeArray(var434, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var435)->values[0] = (val*) var424;
((struct instance_array__NativeArray*)var435)->values[1] = (val*) var_mtype;
((struct instance_array__NativeArray*)var435)->values[2] = (val*) var429;
((void (*)(val*, val*, long))(var433->class->vft[COLOR_array__Array__with_native]))(var433, var435, var434) /* with_native on <var433:Array[Object]>*/;
}
var436 = ((val* (*)(val*))(var433->class->vft[COLOR_string__Object__to_s]))(var433) /* to_s on <var433:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var436) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
var437 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MClassType>*/;
if (varonce438) {
var439 = varonce438;
} else {
var440 = " NEW_";
var441 = 5;
var442 = string__NativeString__to_s_with_length(var440, var441);
var439 = var442;
varonce438 = var439;
}
if (varonce443) {
var444 = varonce443;
} else {
var445 = "(int length, const struct type* type) {";
var446 = 39;
var447 = string__NativeString__to_s_with_length(var445, var446);
var444 = var447;
varonce443 = var444;
}
var448 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var448 = array_instance Array[Object] */
var449 = 4;
var450 = NEW_array__NativeArray(var449, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var450)->values[0] = (val*) var437;
((struct instance_array__NativeArray*)var450)->values[1] = (val*) var439;
((struct instance_array__NativeArray*)var450)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var450)->values[3] = (val*) var444;
((void (*)(val*, val*, long))(var448->class->vft[COLOR_array__Array__with_native]))(var448, var450, var449) /* with_native on <var448:Array[Object]>*/;
}
var451 = ((val* (*)(val*))(var448->class->vft[COLOR_string__Object__to_s]))(var448) /* to_s on <var448:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var451) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
if (varonce452) {
var453 = varonce452;
} else {
var454 = "self";
var455 = 4;
var456 = string__NativeString__to_s_with_length(var454, var455);
var453 = var456;
varonce452 = var453;
}
var457 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_named_var]))(var_v, var_mtype, var453) /* new_named_var on <var_v:SeparateCompilerVisitor>*/;
var_res = var457;
var458 = 1;
((void (*)(val*, short int))(var_res->class->vft[COLOR_abstract_compiler__RuntimeVariable__is_exact_61d]))(var_res, var458) /* is_exact= on <var_res:RuntimeVariable>*/;
var459 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MClassType__arguments]))(var_mtype) /* arguments on <var_mtype:MClassType>*/;
var460 = ((val* (*)(val*))(var459->class->vft[COLOR_abstract_collection__Collection__first]))(var459) /* first on <var459:Array[MType]>*/;
var_mtype_elt = var460;
if (varonce461) {
var462 = varonce461;
} else {
var463 = " = nit_alloc(sizeof(struct instance_";
var464 = 36;
var465 = string__NativeString__to_s_with_length(var463, var464);
var462 = var465;
varonce461 = var462;
}
if (varonce466) {
var467 = varonce466;
} else {
var468 = ") + length*sizeof(";
var469 = 18;
var470 = string__NativeString__to_s_with_length(var468, var469);
var467 = var470;
varonce466 = var467;
}
var471 = ((val* (*)(val*))(var_mtype_elt->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype_elt) /* ctype on <var_mtype_elt:MType>*/;
if (varonce472) {
var473 = varonce472;
} else {
var474 = "));";
var475 = 3;
var476 = string__NativeString__to_s_with_length(var474, var475);
var473 = var476;
varonce472 = var473;
}
var477 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var477 = array_instance Array[Object] */
var478 = 6;
var479 = NEW_array__NativeArray(var478, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var479)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var479)->values[1] = (val*) var462;
((struct instance_array__NativeArray*)var479)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var479)->values[3] = (val*) var467;
((struct instance_array__NativeArray*)var479)->values[4] = (val*) var471;
((struct instance_array__NativeArray*)var479)->values[5] = (val*) var473;
((void (*)(val*, val*, long))(var477->class->vft[COLOR_array__Array__with_native]))(var477, var479, var478) /* with_native on <var477:Array[Object]>*/;
}
var480 = ((val* (*)(val*))(var477->class->vft[COLOR_string__Object__to_s]))(var477) /* to_s on <var477:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var480) /* add on <var_v:SeparateCompilerVisitor>*/;
if (varonce481) {
var482 = varonce481;
} else {
var483 = "->type = type;";
var484 = 14;
var485 = string__NativeString__to_s_with_length(var483, var484);
var482 = var485;
varonce481 = var482;
}
var486 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var486 = array_instance Array[Object] */
var487 = 2;
var488 = NEW_array__NativeArray(var487, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var488)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var488)->values[1] = (val*) var482;
((void (*)(val*, val*, long))(var486->class->vft[COLOR_array__Array__with_native]))(var486, var488, var487) /* with_native on <var486:Array[Object]>*/;
}
var489 = ((val* (*)(val*))(var486->class->vft[COLOR_string__Object__to_s]))(var486) /* to_s on <var486:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var489) /* add on <var_v:SeparateCompilerVisitor>*/;
if (varonce490) {
var491 = varonce490;
} else {
var492 = "type";
var493 = 4;
var494 = string__NativeString__to_s_with_length(var492, var493);
var491 = var494;
varonce490 = var491;
}
((void (*)(val*, val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__hardening_live_type]))(self, var_v, var491) /* hardening_live_type on <self:SeparateCompiler>*/;
if (varonce495) {
var496 = varonce495;
} else {
var497 = "class_";
var498 = 6;
var499 = string__NativeString__to_s_with_length(var497, var498);
var496 = var499;
varonce495 = var496;
}
var500 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var500 = array_instance Array[Object] */
var501 = 2;
var502 = NEW_array__NativeArray(var501, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var502)->values[0] = (val*) var496;
((struct instance_array__NativeArray*)var502)->values[1] = (val*) var_c_name;
((void (*)(val*, val*, long))(var500->class->vft[COLOR_array__Array__with_native]))(var500, var502, var501) /* with_native on <var500:Array[Object]>*/;
}
var503 = ((val* (*)(val*))(var500->class->vft[COLOR_string__Object__to_s]))(var500) /* to_s on <var500:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(var_v, var503) /* require_declaration on <var_v:SeparateCompilerVisitor>*/;
if (varonce504) {
var505 = varonce504;
} else {
var506 = "->class = &class_";
var507 = 17;
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
var515 = 4;
var516 = NEW_array__NativeArray(var515, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var516)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var516)->values[1] = (val*) var505;
((struct instance_array__NativeArray*)var516)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var516)->values[3] = (val*) var510;
((void (*)(val*, val*, long))(var514->class->vft[COLOR_array__Array__with_native]))(var514, var516, var515) /* with_native on <var514:Array[Object]>*/;
}
var517 = ((val* (*)(val*))(var514->class->vft[COLOR_string__Object__to_s]))(var514) /* to_s on <var514:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var517) /* add on <var_v:SeparateCompilerVisitor>*/;
if (varonce518) {
var519 = varonce518;
} else {
var520 = "return ";
var521 = 7;
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
((struct instance_array__NativeArray*)var530)->values[1] = (val*) var_res;
((struct instance_array__NativeArray*)var530)->values[2] = (val*) var524;
((void (*)(val*, val*, long))(var528->class->vft[COLOR_array__Array__with_native]))(var528, var530, var529) /* with_native on <var528:Array[Object]>*/;
}
var531 = ((val* (*)(val*))(var528->class->vft[COLOR_string__Object__to_s]))(var528) /* to_s on <var528:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var531) /* add on <var_v:SeparateCompilerVisitor>*/;
if (varonce532) {
var533 = varonce532;
} else {
var534 = "}";
var535 = 1;
var536 = string__NativeString__to_s_with_length(var534, var535);
var533 = var536;
varonce532 = var533;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var533) /* add on <var_v:SeparateCompilerVisitor>*/;
goto RET_LABEL;
} else {
}
}
if (varonce537) {
var538 = varonce537;
} else {
var539 = "NEW_";
var540 = 4;
var541 = string__NativeString__to_s_with_length(var539, var540);
var538 = var541;
varonce537 = var538;
}
var542 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var542 = array_instance Array[Object] */
var543 = 2;
var544 = NEW_array__NativeArray(var543, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var544)->values[0] = (val*) var538;
((struct instance_array__NativeArray*)var544)->values[1] = (val*) var_c_name;
((void (*)(val*, val*, long))(var542->class->vft[COLOR_array__Array__with_native]))(var542, var544, var543) /* with_native on <var542:Array[Object]>*/;
}
var545 = ((val* (*)(val*))(var542->class->vft[COLOR_string__Object__to_s]))(var542) /* to_s on <var542:Array[Object]>*/;
var546 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MClassType>*/;
if (varonce547) {
var548 = varonce547;
} else {
var549 = " NEW_";
var550 = 5;
var551 = string__NativeString__to_s_with_length(var549, var550);
var548 = var551;
varonce547 = var548;
}
if (varonce552) {
var553 = varonce552;
} else {
var554 = "(const struct type* type);";
var555 = 26;
var556 = string__NativeString__to_s_with_length(var554, var555);
var553 = var556;
varonce552 = var553;
}
var557 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var557 = array_instance Array[Object] */
var558 = 4;
var559 = NEW_array__NativeArray(var558, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var559)->values[0] = (val*) var546;
((struct instance_array__NativeArray*)var559)->values[1] = (val*) var548;
((struct instance_array__NativeArray*)var559)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var559)->values[3] = (val*) var553;
((void (*)(val*, val*, long))(var557->class->vft[COLOR_array__Array__with_native]))(var557, var559, var558) /* with_native on <var557:Array[Object]>*/;
}
var560 = ((val* (*)(val*))(var557->class->vft[COLOR_string__Object__to_s]))(var557) /* to_s on <var557:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__provide_declaration]))(self, var545, var560) /* provide_declaration on <self:SeparateCompiler>*/;
if (varonce561) {
var562 = varonce561;
} else {
var563 = "/* allocate ";
var564 = 12;
var565 = string__NativeString__to_s_with_length(var563, var564);
var562 = var565;
varonce561 = var562;
}
if (varonce566) {
var567 = varonce566;
} else {
var568 = " */";
var569 = 3;
var570 = string__NativeString__to_s_with_length(var568, var569);
var567 = var570;
varonce566 = var567;
}
var571 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var571 = array_instance Array[Object] */
var572 = 3;
var573 = NEW_array__NativeArray(var572, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var573)->values[0] = (val*) var562;
((struct instance_array__NativeArray*)var573)->values[1] = (val*) var_mtype;
((struct instance_array__NativeArray*)var573)->values[2] = (val*) var567;
((void (*)(val*, val*, long))(var571->class->vft[COLOR_array__Array__with_native]))(var571, var573, var572) /* with_native on <var571:Array[Object]>*/;
}
var574 = ((val* (*)(val*))(var571->class->vft[COLOR_string__Object__to_s]))(var571) /* to_s on <var571:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var574) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
var575 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MClassType>*/;
if (varonce576) {
var577 = varonce576;
} else {
var578 = " NEW_";
var579 = 5;
var580 = string__NativeString__to_s_with_length(var578, var579);
var577 = var580;
varonce576 = var577;
}
if (varonce581) {
var582 = varonce581;
} else {
var583 = "(const struct type* type) {";
var584 = 27;
var585 = string__NativeString__to_s_with_length(var583, var584);
var582 = var585;
varonce581 = var582;
}
var586 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var586 = array_instance Array[Object] */
var587 = 4;
var588 = NEW_array__NativeArray(var587, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var588)->values[0] = (val*) var575;
((struct instance_array__NativeArray*)var588)->values[1] = (val*) var577;
((struct instance_array__NativeArray*)var588)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var588)->values[3] = (val*) var582;
((void (*)(val*, val*, long))(var586->class->vft[COLOR_array__Array__with_native]))(var586, var588, var587) /* with_native on <var586:Array[Object]>*/;
}
var589 = ((val* (*)(val*))(var586->class->vft[COLOR_string__Object__to_s]))(var586) /* to_s on <var586:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var589) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
if (var_is_dead){
if (varonce590) {
var591 = varonce590;
} else {
var592 = " is DEAD";
var593 = 8;
var594 = string__NativeString__to_s_with_length(var592, var593);
var591 = var594;
varonce590 = var591;
}
var595 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var595 = array_instance Array[Object] */
var596 = 2;
var597 = NEW_array__NativeArray(var596, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var597)->values[0] = (val*) var_mclass;
((struct instance_array__NativeArray*)var597)->values[1] = (val*) var591;
((void (*)(val*, val*, long))(var595->class->vft[COLOR_array__Array__with_native]))(var595, var597, var596) /* with_native on <var595:Array[Object]>*/;
}
var598 = ((val* (*)(val*))(var595->class->vft[COLOR_string__Object__to_s]))(var595) /* to_s on <var595:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_abort]))(var_v, var598) /* add_abort on <var_v:SeparateCompilerVisitor>*/;
} else {
if (varonce599) {
var600 = varonce599;
} else {
var601 = "self";
var602 = 4;
var603 = string__NativeString__to_s_with_length(var601, var602);
var600 = var603;
varonce599 = var600;
}
var604 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_named_var]))(var_v, var_mtype, var600) /* new_named_var on <var_v:SeparateCompilerVisitor>*/;
var_res605 = var604;
var606 = 1;
((void (*)(val*, short int))(var_res605->class->vft[COLOR_abstract_compiler__RuntimeVariable__is_exact_61d]))(var_res605, var606) /* is_exact= on <var_res605:RuntimeVariable>*/;
if (varonce607) {
var608 = varonce607;
} else {
var609 = " = nit_alloc(sizeof(struct instance) + ";
var610 = 39;
var611 = string__NativeString__to_s_with_length(var609, var610);
var608 = var611;
varonce607 = var608;
}
var612 = ((long (*)(val*))(var_attrs->class->vft[COLOR_abstract_collection__Collection__length]))(var_attrs) /* length on <var_attrs:Array[nullable MPropDef]>*/;
if (varonce613) {
var614 = varonce613;
} else {
var615 = "*sizeof(nitattribute_t));";
var616 = 25;
var617 = string__NativeString__to_s_with_length(var615, var616);
var614 = var617;
varonce613 = var614;
}
var618 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var618 = array_instance Array[Object] */
var619 = 4;
var620 = NEW_array__NativeArray(var619, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var620)->values[0] = (val*) var_res605;
((struct instance_array__NativeArray*)var620)->values[1] = (val*) var608;
var621 = BOX_kernel__Int(var612); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var620)->values[2] = (val*) var621;
((struct instance_array__NativeArray*)var620)->values[3] = (val*) var614;
((void (*)(val*, val*, long))(var618->class->vft[COLOR_array__Array__with_native]))(var618, var620, var619) /* with_native on <var618:Array[Object]>*/;
}
var622 = ((val* (*)(val*))(var618->class->vft[COLOR_string__Object__to_s]))(var618) /* to_s on <var618:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var622) /* add on <var_v:SeparateCompilerVisitor>*/;
if (varonce623) {
var624 = varonce623;
} else {
var625 = "->type = type;";
var626 = 14;
var627 = string__NativeString__to_s_with_length(var625, var626);
var624 = var627;
varonce623 = var624;
}
var628 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var628 = array_instance Array[Object] */
var629 = 2;
var630 = NEW_array__NativeArray(var629, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var630)->values[0] = (val*) var_res605;
((struct instance_array__NativeArray*)var630)->values[1] = (val*) var624;
((void (*)(val*, val*, long))(var628->class->vft[COLOR_array__Array__with_native]))(var628, var630, var629) /* with_native on <var628:Array[Object]>*/;
}
var631 = ((val* (*)(val*))(var628->class->vft[COLOR_string__Object__to_s]))(var628) /* to_s on <var628:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var631) /* add on <var_v:SeparateCompilerVisitor>*/;
if (varonce632) {
var633 = varonce632;
} else {
var634 = "type";
var635 = 4;
var636 = string__NativeString__to_s_with_length(var634, var635);
var633 = var636;
varonce632 = var633;
}
((void (*)(val*, val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__hardening_live_type]))(self, var_v, var633) /* hardening_live_type on <self:SeparateCompiler>*/;
if (varonce637) {
var638 = varonce637;
} else {
var639 = "class_";
var640 = 6;
var641 = string__NativeString__to_s_with_length(var639, var640);
var638 = var641;
varonce637 = var638;
}
var642 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var642 = array_instance Array[Object] */
var643 = 2;
var644 = NEW_array__NativeArray(var643, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var644)->values[0] = (val*) var638;
((struct instance_array__NativeArray*)var644)->values[1] = (val*) var_c_name;
((void (*)(val*, val*, long))(var642->class->vft[COLOR_array__Array__with_native]))(var642, var644, var643) /* with_native on <var642:Array[Object]>*/;
}
var645 = ((val* (*)(val*))(var642->class->vft[COLOR_string__Object__to_s]))(var642) /* to_s on <var642:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(var_v, var645) /* require_declaration on <var_v:SeparateCompilerVisitor>*/;
if (varonce646) {
var647 = varonce646;
} else {
var648 = "->class = &class_";
var649 = 17;
var650 = string__NativeString__to_s_with_length(var648, var649);
var647 = var650;
varonce646 = var647;
}
if (varonce651) {
var652 = varonce651;
} else {
var653 = ";";
var654 = 1;
var655 = string__NativeString__to_s_with_length(var653, var654);
var652 = var655;
varonce651 = var652;
}
var656 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var656 = array_instance Array[Object] */
var657 = 4;
var658 = NEW_array__NativeArray(var657, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var658)->values[0] = (val*) var_res605;
((struct instance_array__NativeArray*)var658)->values[1] = (val*) var647;
((struct instance_array__NativeArray*)var658)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var658)->values[3] = (val*) var652;
((void (*)(val*, val*, long))(var656->class->vft[COLOR_array__Array__with_native]))(var656, var658, var657) /* with_native on <var656:Array[Object]>*/;
}
var659 = ((val* (*)(val*))(var656->class->vft[COLOR_string__Object__to_s]))(var656) /* to_s on <var656:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var659) /* add on <var_v:SeparateCompilerVisitor>*/;
((void (*)(val*, val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__generate_init_attr]))(self, var_v, var_res605, var_mtype) /* generate_init_attr on <self:SeparateCompiler>*/;
if (varonce660) {
var661 = varonce660;
} else {
var662 = "return ";
var663 = 7;
var664 = string__NativeString__to_s_with_length(var662, var663);
var661 = var664;
varonce660 = var661;
}
if (varonce665) {
var666 = varonce665;
} else {
var667 = ";";
var668 = 1;
var669 = string__NativeString__to_s_with_length(var667, var668);
var666 = var669;
varonce665 = var666;
}
var670 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var670 = array_instance Array[Object] */
var671 = 3;
var672 = NEW_array__NativeArray(var671, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var672)->values[0] = (val*) var661;
((struct instance_array__NativeArray*)var672)->values[1] = (val*) var_res605;
((struct instance_array__NativeArray*)var672)->values[2] = (val*) var666;
((void (*)(val*, val*, long))(var670->class->vft[COLOR_array__Array__with_native]))(var670, var672, var671) /* with_native on <var670:Array[Object]>*/;
}
var673 = ((val* (*)(val*))(var670->class->vft[COLOR_string__Object__to_s]))(var670) /* to_s on <var670:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var673) /* add on <var_v:SeparateCompilerVisitor>*/;
}
if (varonce674) {
var675 = varonce674;
} else {
var676 = "}";
var677 = 1;
var678 = string__NativeString__to_s_with_length(var676, var677);
var675 = var678;
varonce674 = var675;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var675) /* add on <var_v:SeparateCompilerVisitor>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 825);
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
var38 = "->resolution_table == NULL) {";
var39 = 29;
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
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 838);
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
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 842);
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
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 843);
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
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 844);
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
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 845);
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
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 907);
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
val* var126 /* : MType */;
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
val* var137 /* : Array[Object] */;
long var138 /* : Int */;
val* var139 /* : NativeArray[Object] */;
val* var140 /* : String */;
val* var141 /* : RuntimeVariable */;
val* var_res142 /* var res: RuntimeVariable */;
static val* varonce143;
val* var144 /* : String */;
char* var145 /* : NativeString */;
long var146 /* : Int */;
val* var147 /* : String */;
static val* varonce148;
val* var149 /* : String */;
char* var150 /* : NativeString */;
long var151 /* : Int */;
val* var152 /* : String */;
val* var153 /* : MType */;
static val* varonce154;
val* var155 /* : String */;
char* var156 /* : NativeString */;
long var157 /* : Int */;
val* var158 /* : String */;
static val* varonce159;
val* var160 /* : String */;
char* var161 /* : NativeString */;
long var162 /* : Int */;
val* var163 /* : String */;
val* var164 /* : Array[Object] */;
long var165 /* : Int */;
val* var166 /* : NativeArray[Object] */;
val* var167 /* : String */;
static val* varonce168;
val* var169 /* : String */;
char* var170 /* : NativeString */;
long var171 /* : Int */;
val* var172 /* : String */;
val* var173 /* : MType */;
static val* varonce174;
val* var175 /* : String */;
char* var176 /* : NativeString */;
long var177 /* : Int */;
val* var178 /* : String */;
static val* varonce179;
val* var180 /* : String */;
char* var181 /* : NativeString */;
long var182 /* : Int */;
val* var183 /* : String */;
val* var184 /* : Array[Object] */;
long var185 /* : Int */;
val* var186 /* : NativeArray[Object] */;
val* var187 /* : String */;
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
var31 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MType>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 930);
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
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 932);
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
var112 = " = BOX_";
var113 = 7;
var114 = string__NativeString__to_s_with_length(var112, var113);
var111 = var114;
varonce110 = var111;
}
var115 = ((val* (*)(val*))(var_valtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_valtype) /* c_name on <var_valtype:MClassType>*/;
if (varonce116) {
var117 = varonce116;
} else {
var118 = "(";
var119 = 1;
var120 = string__NativeString__to_s_with_length(var118, var119);
var117 = var120;
varonce116 = var117;
}
if (varonce121) {
var122 = varonce121;
} else {
var123 = "); /* autobox from ";
var124 = 19;
var125 = string__NativeString__to_s_with_length(var123, var124);
var122 = var125;
varonce121 = var122;
}
var126 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value) /* mtype on <var_value:RuntimeVariable>*/;
if (varonce127) {
var128 = varonce127;
} else {
var129 = " to ";
var130 = 4;
var131 = string__NativeString__to_s_with_length(var129, var130);
var128 = var131;
varonce127 = var128;
}
if (varonce132) {
var133 = varonce132;
} else {
var134 = " */";
var135 = 3;
var136 = string__NativeString__to_s_with_length(var134, var135);
var133 = var136;
varonce132 = var133;
}
var137 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var137 = array_instance Array[Object] */
var138 = 10;
var139 = NEW_array__NativeArray(var138, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var139)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var139)->values[1] = (val*) var111;
((struct instance_array__NativeArray*)var139)->values[2] = (val*) var115;
((struct instance_array__NativeArray*)var139)->values[3] = (val*) var117;
((struct instance_array__NativeArray*)var139)->values[4] = (val*) var_value;
((struct instance_array__NativeArray*)var139)->values[5] = (val*) var122;
((struct instance_array__NativeArray*)var139)->values[6] = (val*) var126;
((struct instance_array__NativeArray*)var139)->values[7] = (val*) var128;
((struct instance_array__NativeArray*)var139)->values[8] = (val*) var_mtype;
((struct instance_array__NativeArray*)var139)->values[9] = (val*) var133;
((void (*)(val*, val*, long))(var137->class->vft[COLOR_array__Array__with_native]))(var137, var139, var138) /* with_native on <var137:Array[Object]>*/;
}
var140 = ((val* (*)(val*))(var137->class->vft[COLOR_string__Object__to_s]))(var137) /* to_s on <var137:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var140) /* add on <self:SeparateCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
} else {
var141 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(self, var_mtype) /* new_var on <self:SeparateCompilerVisitor>*/;
var_res142 = var141;
if (varonce143) {
var144 = varonce143;
} else {
var145 = "/* ";
var146 = 3;
var147 = string__NativeString__to_s_with_length(var145, var146);
var144 = var147;
varonce143 = var144;
}
if (varonce148) {
var149 = varonce148;
} else {
var150 = " left unintialized (cannot convert ";
var151 = 35;
var152 = string__NativeString__to_s_with_length(var150, var151);
var149 = var152;
varonce148 = var149;
}
var153 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value) /* mtype on <var_value:RuntimeVariable>*/;
if (varonce154) {
var155 = varonce154;
} else {
var156 = " to ";
var157 = 4;
var158 = string__NativeString__to_s_with_length(var156, var157);
var155 = var158;
varonce154 = var155;
}
if (varonce159) {
var160 = varonce159;
} else {
var161 = ") */";
var162 = 4;
var163 = string__NativeString__to_s_with_length(var161, var162);
var160 = var163;
varonce159 = var160;
}
var164 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var164 = array_instance Array[Object] */
var165 = 7;
var166 = NEW_array__NativeArray(var165, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var166)->values[0] = (val*) var144;
((struct instance_array__NativeArray*)var166)->values[1] = (val*) var_res142;
((struct instance_array__NativeArray*)var166)->values[2] = (val*) var149;
((struct instance_array__NativeArray*)var166)->values[3] = (val*) var153;
((struct instance_array__NativeArray*)var166)->values[4] = (val*) var155;
((struct instance_array__NativeArray*)var166)->values[5] = (val*) var_mtype;
((struct instance_array__NativeArray*)var166)->values[6] = (val*) var160;
((void (*)(val*, val*, long))(var164->class->vft[COLOR_array__Array__with_native]))(var164, var166, var165) /* with_native on <var164:Array[Object]>*/;
}
var167 = ((val* (*)(val*))(var164->class->vft[COLOR_string__Object__to_s]))(var164) /* to_s on <var164:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var167) /* add on <self:SeparateCompilerVisitor>*/;
if (varonce168) {
var169 = varonce168;
} else {
var170 = "printf(\"Cast error: Cannot cast %s to %s.\\n\", \"";
var171 = 47;
var172 = string__NativeString__to_s_with_length(var170, var171);
var169 = var172;
varonce168 = var169;
}
var173 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value) /* mtype on <var_value:RuntimeVariable>*/;
if (varonce174) {
var175 = varonce174;
} else {
var176 = "\", \"";
var177 = 4;
var178 = string__NativeString__to_s_with_length(var176, var177);
var175 = var178;
varonce174 = var175;
}
if (varonce179) {
var180 = varonce179;
} else {
var181 = "\"); show_backtrace(1);";
var182 = 22;
var183 = string__NativeString__to_s_with_length(var181, var182);
var180 = var183;
varonce179 = var180;
}
var184 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var184 = array_instance Array[Object] */
var185 = 5;
var186 = NEW_array__NativeArray(var185, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var186)->values[0] = (val*) var169;
((struct instance_array__NativeArray*)var186)->values[1] = (val*) var173;
((struct instance_array__NativeArray*)var186)->values[2] = (val*) var175;
((struct instance_array__NativeArray*)var186)->values[3] = (val*) var_mtype;
((struct instance_array__NativeArray*)var186)->values[4] = (val*) var180;
((void (*)(val*, val*, long))(var184->class->vft[COLOR_array__Array__with_native]))(var184, var186, var185) /* with_native on <var184:Array[Object]>*/;
}
var187 = ((val* (*)(val*))(var184->class->vft[COLOR_string__Object__to_s]))(var184) /* to_s on <var184:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var187) /* add on <self:SeparateCompilerVisitor>*/;
var = var_res142;
goto RET_LABEL;
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
/* method separate_compiler#SeparateCompilerVisitor#type_info for (self: SeparateCompilerVisitor, RuntimeVariable): String */
val* separate_compiler__SeparateCompilerVisitor__type_info(val* self, val* p0) {
val* var /* : String */;
val* var_value /* var value: RuntimeVariable */;
val* var1 /* : MType */;
val* var2 /* : String */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
short int var7 /* : Bool */;
val* var8 /* : Array[Object] */;
long var9 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : String */;
val* var20 /* : String */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : String */;
val* var26 /* : MType */;
val* var27 /* : String */;
val* var28 /* : Array[Object] */;
long var29 /* : Int */;
val* var30 /* : NativeArray[Object] */;
val* var31 /* : String */;
val* var32 /* : Array[Object] */;
long var33 /* : Int */;
val* var_34 /* var : Array[Object] */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
long var38 /* : Int */;
val* var39 /* : String */;
val* var40 /* : MType */;
val* var41 /* : String */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
long var45 /* : Int */;
val* var46 /* : String */;
val* var47 /* : String */;
var_value = p0;
var1 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value) /* mtype on <var_value:RuntimeVariable>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_compiler__MType__ctype]))(var1) /* ctype on <var1:MType>*/;
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
var8 = NEW_array__Array(&type_array__Arraykernel__Object);
var9 = 3;
((void (*)(val*, long))(var8->class->vft[COLOR_array__Array__with_capacity]))(var8, var9) /* with_capacity on <var8:Array[Object]>*/;
var_ = var8;
if (varonce10) {
var11 = varonce10;
} else {
var12 = "";
var13 = 0;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce10 = var11;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var11) /* add on <var_:Array[Object]>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var_value) /* add on <var_:Array[Object]>*/;
if (varonce15) {
var16 = varonce15;
} else {
var17 = "->type";
var18 = 6;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var16) /* add on <var_:Array[Object]>*/;
var20 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var = var20;
goto RET_LABEL;
} else {
if (varonce21) {
var22 = varonce21;
} else {
var23 = "type_";
var24 = 5;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
var26 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value) /* mtype on <var_value:RuntimeVariable>*/;
var27 = ((val* (*)(val*))(var26->class->vft[COLOR_abstract_compiler__MType__c_name]))(var26) /* c_name on <var26:MType>*/;
var28 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var28 = array_instance Array[Object] */
var29 = 2;
var30 = NEW_array__NativeArray(var29, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var30)->values[0] = (val*) var22;
((struct instance_array__NativeArray*)var30)->values[1] = (val*) var27;
((void (*)(val*, val*, long))(var28->class->vft[COLOR_array__Array__with_native]))(var28, var30, var29) /* with_native on <var28:Array[Object]>*/;
}
var31 = ((val* (*)(val*))(var28->class->vft[COLOR_string__Object__to_s]))(var28) /* to_s on <var28:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(self, var31) /* require_declaration on <self:SeparateCompilerVisitor>*/;
var32 = NEW_array__Array(&type_array__Arraykernel__Object);
var33 = 3;
((void (*)(val*, long))(var32->class->vft[COLOR_array__Array__with_capacity]))(var32, var33) /* with_capacity on <var32:Array[Object]>*/;
var_34 = var32;
if (varonce35) {
var36 = varonce35;
} else {
var37 = "(&type_";
var38 = 7;
var39 = string__NativeString__to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
((void (*)(val*, val*))(var_34->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_34, var36) /* add on <var_34:Array[Object]>*/;
var40 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value) /* mtype on <var_value:RuntimeVariable>*/;
var41 = ((val* (*)(val*))(var40->class->vft[COLOR_abstract_compiler__MType__c_name]))(var40) /* c_name on <var40:MType>*/;
((void (*)(val*, val*))(var_34->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_34, var41) /* add on <var_34:Array[Object]>*/;
if (varonce42) {
var43 = varonce42;
} else {
var44 = ")";
var45 = 1;
var46 = string__NativeString__to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
((void (*)(val*, val*))(var_34->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_34, var43) /* add on <var_34:Array[Object]>*/;
var47 = ((val* (*)(val*))(var_34->class->vft[COLOR_string__Object__to_s]))(var_34) /* to_s on <var_34:Array[Object]>*/;
var = var47;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#type_info for (self: Object, RuntimeVariable): String */
val* VIRTUAL_separate_compiler__SeparateCompilerVisitor__type_info(val* self, val* p0) {
val* var /* : String */;
val* var1 /* : String */;
var1 = separate_compiler__SeparateCompilerVisitor__type_info(self, p0);
var = var1;
RET_LABEL:;
return var;
}
