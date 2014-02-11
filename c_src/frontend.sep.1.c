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
short int var7 /* : Bool */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_phase__ToolContext__phases]))(self) /* phases on <self:ToolContext>*/;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_simple_misc_analysis__ToolContext__simple_misc_analysis_phase]))(self) /* simple_misc_analysis_phase on <self:ToolContext>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__ToolContext__modelize_property_phase]))(self) /* modelize_property_phase on <self:ToolContext>*/;
((void (*)(val*, val*, val*))(var1->class->vft[COLOR_poset__POSet__add_edge]))(var1, var2, var3) /* add_edge on <var1:POSet[Phase]>*/;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_phase__ToolContext__phases]))(self) /* phases on <self:ToolContext>*/;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_scope__ToolContext__scope_phase]))(self) /* scope_phase on <self:ToolContext>*/;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_simple_misc_analysis__ToolContext__simple_misc_analysis_phase]))(self) /* simple_misc_analysis_phase on <self:ToolContext>*/;
((void (*)(val*, val*, val*))(var4->class->vft[COLOR_poset__POSet__add_edge]))(var4, var5, var6) /* add_edge on <var4:POSet[Phase]>*/;
var7 = 1;
var = var7;
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
/* method frontend#ToolContext#run_global_phases for (self: ToolContext, MModule) */
void frontend__ToolContext__run_global_phases(val* self, val* p0) {
val* var_mainmodule /* var mainmodule: MModule */;
val* var /* : Sequence[Phase] */;
val* var1 /* : Iterator[nullable Object] */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
val* var_phase /* var phase: Phase */;
var_mainmodule = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_phase__ToolContext__phases_list]))(self) /* phases_list on <self:ToolContext>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_collection__Collection__iterator]))(var) /* iterator on <var:Sequence[Phase]>*/;
for(;;) {
var2 = ((short int (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var1) /* is_ok on <var1:Iterator[nullable Object]>*/;
if(!var2) break;
var3 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__item]))(var1) /* item on <var1:Iterator[nullable Object]>*/;
var_phase = var3;
((void (*)(val*, val*))(var_phase->class->vft[COLOR_frontend__Phase__process_mainmodule]))(var_phase, var_mainmodule) /* process_mainmodule on <var_phase:Phase>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__next]))(var1) /* next on <var1:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method frontend#ToolContext#run_global_phases for (self: Object, MModule) */
void VIRTUAL_frontend__ToolContext__run_global_phases(val* self, val* p0) {
frontend__ToolContext__run_global_phases(self, p0);
RET_LABEL:;
}
/* method frontend#Phase#process_mainmodule for (self: Phase, MModule) */
void frontend__Phase__process_mainmodule(val* self, val* p0) {
val* var_mainmodule /* var mainmodule: MModule */;
var_mainmodule = p0;
RET_LABEL:;
}
/* method frontend#Phase#process_mainmodule for (self: Object, MModule) */
void VIRTUAL_frontend__Phase__process_mainmodule(val* self, val* p0) {
frontend__Phase__process_mainmodule(self, p0);
RET_LABEL:;
}
