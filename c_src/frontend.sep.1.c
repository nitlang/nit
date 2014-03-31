#include "frontend.sep.0.h"
/* method frontend#ToolContext#dummy for (self: ToolContext): Bool */
short int frontend__ToolContext__dummy(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_frontend__ToolContext___64ddummy].s; /* @dummy on <self:ToolContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method frontend#ToolContext#dummy for (self: Object): Bool */
short int VIRTUAL_frontend__ToolContext__dummy(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = frontend__ToolContext__dummy(self);
var = var1;
RET_LABEL:;
return var;
}
/* method frontend#ToolContext#dummy= for (self: ToolContext, Bool) */
void frontend__ToolContext__dummy_61d(val* self, short int p0) {
self->attrs[COLOR_frontend__ToolContext___64ddummy].s = p0; /* @dummy on <self:ToolContext> */
RET_LABEL:;
}
/* method frontend#ToolContext#dummy= for (self: Object, Bool) */
void VIRTUAL_frontend__ToolContext__dummy_61d(val* self, short int p0) {
frontend__ToolContext__dummy_61d(self, p0);
RET_LABEL:;
}
/* method frontend#ToolContext#do_dummy for (self: ToolContext): Bool */
short int frontend__ToolContext__do_dummy(val* self) {
short int var /* : Bool */;
val* var1 /* : POSet[Phase] */;
val* var2 /* : Phase */;
val* var3 /* : Phase */;
val* var4 /* : POSet[Phase] */;
val* var5 /* : Phase */;
val* var6 /* : Phase */;
val* var7 /* : POSet[Phase] */;
val* var8 /* : Phase */;
val* var9 /* : Phase */;
short int var10 /* : Bool */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_phase__ToolContext__phases]))(self) /* phases on <self:ToolContext>*/;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_simple_misc_analysis__ToolContext__simple_misc_analysis_phase]))(self) /* simple_misc_analysis_phase on <self:ToolContext>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__ToolContext__modelize_property_phase]))(self) /* modelize_property_phase on <self:ToolContext>*/;
((void (*)(val*, val*, val*))(var1->class->vft[COLOR_poset__POSet__add_edge]))(var1, var2, var3) /* add_edge on <var1:POSet[Phase]>*/;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_phase__ToolContext__phases]))(self) /* phases on <self:ToolContext>*/;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_scope__ToolContext__scope_phase]))(self) /* scope_phase on <self:ToolContext>*/;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_simple_misc_analysis__ToolContext__simple_misc_analysis_phase]))(self) /* simple_misc_analysis_phase on <self:ToolContext>*/;
((void (*)(val*, val*, val*))(var4->class->vft[COLOR_poset__POSet__add_edge]))(var4, var5, var6) /* add_edge on <var4:POSet[Phase]>*/;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_phase__ToolContext__phases]))(self) /* phases on <self:ToolContext>*/;
var8 = ((val* (*)(val*))(self->class->vft[COLOR_literal__ToolContext__literal_phase]))(self) /* literal_phase on <self:ToolContext>*/;
var9 = ((val* (*)(val*))(self->class->vft[COLOR_serialization_phase__ToolContext__serialization_phase]))(self) /* serialization_phase on <self:ToolContext>*/;
((void (*)(val*, val*, val*))(var7->class->vft[COLOR_poset__POSet__add_edge]))(var7, var8, var9) /* add_edge on <var7:POSet[Phase]>*/;
var10 = 1;
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method frontend#ToolContext#do_dummy for (self: Object): Bool */
short int VIRTUAL_frontend__ToolContext__do_dummy(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = frontend__ToolContext__do_dummy(self);
var = var1;
RET_LABEL:;
return var;
}
