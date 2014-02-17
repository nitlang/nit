#include "local_var_init.sep.0.h"
/* method local_var_init#ToolContext#local_var_init_phase for (self: ToolContext): Phase */
val* local_var_init__ToolContext__local_var_init_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_local_var_init__ToolContext___64dlocal_var_init_phase].val; /* @local_var_init_phase on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @local_var_init_phase");
fprintf(stderr, " (%s:%d)\n", "src/local_var_init.nit", 26);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method local_var_init#ToolContext#local_var_init_phase for (self: Object): Phase */
val* VIRTUAL_local_var_init__ToolContext__local_var_init_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = local_var_init__ToolContext__local_var_init_phase(self);
var = var1;
RET_LABEL:;
return var;
}
/* method local_var_init#ToolContext#local_var_init_phase= for (self: ToolContext, Phase) */
void local_var_init__ToolContext__local_var_init_phase_61d(val* self, val* p0) {
self->attrs[COLOR_local_var_init__ToolContext___64dlocal_var_init_phase].val = p0; /* @local_var_init_phase on <self:ToolContext> */
RET_LABEL:;
}
/* method local_var_init#ToolContext#local_var_init_phase= for (self: Object, Phase) */
void VIRTUAL_local_var_init__ToolContext__local_var_init_phase_61d(val* self, val* p0) {
local_var_init__ToolContext__local_var_init_phase_61d(self, p0);
RET_LABEL:;
}
/* method local_var_init#LocalVarInitPhase#process_npropdef for (self: LocalVarInitPhase, APropdef) */
void local_var_init__LocalVarInitPhase__process_npropdef(val* self, val* p0) {
val* var_npropdef /* var npropdef: APropdef */;
val* var /* : ToolContext */;
var_npropdef = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_phase__Phase__toolcontext]))(self) /* toolcontext on <self:LocalVarInitPhase>*/;
((void (*)(val*, val*))(var_npropdef->class->vft[COLOR_local_var_init__APropdef__do_local_var_init]))(var_npropdef, var) /* do_local_var_init on <var_npropdef:APropdef>*/;
RET_LABEL:;
}
/* method local_var_init#LocalVarInitPhase#process_npropdef for (self: Object, APropdef) */
void VIRTUAL_local_var_init__LocalVarInitPhase__process_npropdef(val* self, val* p0) {
local_var_init__LocalVarInitPhase__process_npropdef(self, p0);
RET_LABEL:;
}
/* method local_var_init#APropdef#do_local_var_init for (self: APropdef, ToolContext) */
void local_var_init__APropdef__do_local_var_init(val* self, val* p0) {
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var /* : LocalVarInitVisitor */;
val* var_v /* var v: LocalVarInitVisitor */;
var_toolcontext = p0;
var = NEW_local_var_init__LocalVarInitVisitor(&type_local_var_init__LocalVarInitVisitor);
((void (*)(val*, val*))(var->class->vft[COLOR_local_var_init__LocalVarInitVisitor__init]))(var, var_toolcontext) /* init on <var:LocalVarInitVisitor>*/;
var_v = var;
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, self) /* enter_visit on <var_v:LocalVarInitVisitor>*/;
RET_LABEL:;
}
/* method local_var_init#APropdef#do_local_var_init for (self: Object, ToolContext) */
void VIRTUAL_local_var_init__APropdef__do_local_var_init(val* self, val* p0) {
local_var_init__APropdef__do_local_var_init(self, p0);
RET_LABEL:;
}
/* method local_var_init#LocalVarInitVisitor#toolcontext for (self: LocalVarInitVisitor): ToolContext */
val* local_var_init__LocalVarInitVisitor__toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_local_var_init__LocalVarInitVisitor___64dtoolcontext].val; /* @toolcontext on <self:LocalVarInitVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @toolcontext");
fprintf(stderr, " (%s:%d)\n", "src/local_var_init.nit", 47);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method local_var_init#LocalVarInitVisitor#toolcontext for (self: Object): ToolContext */
val* VIRTUAL_local_var_init__LocalVarInitVisitor__toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = local_var_init__LocalVarInitVisitor__toolcontext(self);
var = var1;
RET_LABEL:;
return var;
}
/* method local_var_init#LocalVarInitVisitor#toolcontext= for (self: LocalVarInitVisitor, ToolContext) */
void local_var_init__LocalVarInitVisitor__toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_local_var_init__LocalVarInitVisitor___64dtoolcontext].val = p0; /* @toolcontext on <self:LocalVarInitVisitor> */
RET_LABEL:;
}
/* method local_var_init#LocalVarInitVisitor#toolcontext= for (self: Object, ToolContext) */
void VIRTUAL_local_var_init__LocalVarInitVisitor__toolcontext_61d(val* self, val* p0) {
local_var_init__LocalVarInitVisitor__toolcontext_61d(self, p0);
RET_LABEL:;
}
/* method local_var_init#LocalVarInitVisitor#init for (self: LocalVarInitVisitor, ToolContext) */
void local_var_init__LocalVarInitVisitor__init(val* self, val* p0) {
val* var_toolcontext /* var toolcontext: ToolContext */;
var_toolcontext = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Visitor__init]))(self) /* init on <self:LocalVarInitVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_local_var_init__LocalVarInitVisitor__toolcontext_61d]))(self, var_toolcontext) /* toolcontext= on <self:LocalVarInitVisitor>*/;
RET_LABEL:;
}
/* method local_var_init#LocalVarInitVisitor#init for (self: Object, ToolContext) */
void VIRTUAL_local_var_init__LocalVarInitVisitor__init(val* self, val* p0) {
local_var_init__LocalVarInitVisitor__init(self, p0);
RET_LABEL:;
}
/* method local_var_init#LocalVarInitVisitor#maybe_unset_vars for (self: LocalVarInitVisitor): Set[Variable] */
val* local_var_init__LocalVarInitVisitor__maybe_unset_vars(val* self) {
val* var /* : Set[Variable] */;
val* var1 /* : Set[Variable] */;
var1 = self->attrs[COLOR_local_var_init__LocalVarInitVisitor___64dmaybe_unset_vars].val; /* @maybe_unset_vars on <self:LocalVarInitVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @maybe_unset_vars");
fprintf(stderr, " (%s:%d)\n", "src/local_var_init.nit", 54);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method local_var_init#LocalVarInitVisitor#maybe_unset_vars for (self: Object): Set[Variable] */
val* VIRTUAL_local_var_init__LocalVarInitVisitor__maybe_unset_vars(val* self) {
val* var /* : Set[Variable] */;
val* var1 /* : Set[Variable] */;
var1 = local_var_init__LocalVarInitVisitor__maybe_unset_vars(self);
var = var1;
RET_LABEL:;
return var;
}
/* method local_var_init#LocalVarInitVisitor#maybe_unset_vars= for (self: LocalVarInitVisitor, Set[Variable]) */
void local_var_init__LocalVarInitVisitor__maybe_unset_vars_61d(val* self, val* p0) {
self->attrs[COLOR_local_var_init__LocalVarInitVisitor___64dmaybe_unset_vars].val = p0; /* @maybe_unset_vars on <self:LocalVarInitVisitor> */
RET_LABEL:;
}
/* method local_var_init#LocalVarInitVisitor#maybe_unset_vars= for (self: Object, Set[Variable]) */
void VIRTUAL_local_var_init__LocalVarInitVisitor__maybe_unset_vars_61d(val* self, val* p0) {
local_var_init__LocalVarInitVisitor__maybe_unset_vars_61d(self, p0);
RET_LABEL:;
}
/* method local_var_init#LocalVarInitVisitor#mark_is_unset for (self: LocalVarInitVisitor, AExpr, nullable Variable) */
void local_var_init__LocalVarInitVisitor__mark_is_unset(val* self, val* p0, val* p1) {
val* var_node /* var node: AExpr */;
val* var_variable /* var variable: nullable Variable */;
val* var /* : null */;
short int var1 /* : Bool */;
val* var2 /* : Set[Variable] */;
var_node = p0;
var_variable = p1;
var = NULL;
if (var_variable == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (!var1) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/local_var_init.nit", 59);
show_backtrace(1);
}
var2 = ((val* (*)(val*))(self->class->vft[COLOR_local_var_init__LocalVarInitVisitor__maybe_unset_vars]))(self) /* maybe_unset_vars on <self:LocalVarInitVisitor>*/;
((void (*)(val*, val*))(var2->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var2, var_variable) /* add on <var2:Set[Variable]>*/;
RET_LABEL:;
}
/* method local_var_init#LocalVarInitVisitor#mark_is_unset for (self: Object, AExpr, nullable Variable) */
void VIRTUAL_local_var_init__LocalVarInitVisitor__mark_is_unset(val* self, val* p0, val* p1) {
local_var_init__LocalVarInitVisitor__mark_is_unset(self, p0, p1);
RET_LABEL:;
}
/* method local_var_init#LocalVarInitVisitor#mark_is_set for (self: LocalVarInitVisitor, AExpr, nullable Variable) */
void local_var_init__LocalVarInitVisitor__mark_is_set(val* self, val* p0, val* p1) {
val* var_node /* var node: AExpr */;
val* var_variable /* var variable: nullable Variable */;
val* var /* : null */;
short int var1 /* : Bool */;
val* var2 /* : Set[Variable] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable FlowContext */;
val* var_flow /* var flow: FlowContext */;
val* var6 /* : Set[Variable] */;
var_node = p0;
var_variable = p1;
var = NULL;
if (var_variable == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (!var1) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/local_var_init.nit", 65);
show_backtrace(1);
}
var2 = ((val* (*)(val*))(self->class->vft[COLOR_local_var_init__LocalVarInitVisitor__maybe_unset_vars]))(self) /* maybe_unset_vars on <self:LocalVarInitVisitor>*/;
var3 = ((short int (*)(val*, val*))(var2->class->vft[COLOR_abstract_collection__Collection__has]))(var2, var_variable) /* has on <var2:Set[Variable]>*/;
var4 = !var3;
if (var4){
goto RET_LABEL;
} else {
}
var5 = ((val* (*)(val*))(var_node->class->vft[COLOR_flow__AExpr__after_flow_context]))(var_node) /* after_flow_context on <var_node:AExpr>*/;
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/local_var_init.nit", 68);
show_backtrace(1);
}
var_flow = var5;
var6 = ((val* (*)(val*))(var_flow->class->vft[COLOR_local_var_init__FlowContext__set_vars]))(var_flow) /* set_vars on <var_flow:FlowContext>*/;
((void (*)(val*, val*))(var6->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var6, var_variable) /* add on <var6:Set[Variable]>*/;
RET_LABEL:;
}
/* method local_var_init#LocalVarInitVisitor#mark_is_set for (self: Object, AExpr, nullable Variable) */
void VIRTUAL_local_var_init__LocalVarInitVisitor__mark_is_set(val* self, val* p0, val* p1) {
local_var_init__LocalVarInitVisitor__mark_is_set(self, p0, p1);
RET_LABEL:;
}
/* method local_var_init#LocalVarInitVisitor#check_is_set for (self: LocalVarInitVisitor, AExpr, nullable Variable) */
void local_var_init__LocalVarInitVisitor__check_is_set(val* self, val* p0, val* p1) {
val* var_node /* var node: AExpr */;
val* var_variable /* var variable: nullable Variable */;
val* var /* : null */;
short int var1 /* : Bool */;
val* var2 /* : Set[Variable] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable FlowContext */;
val* var_flow /* var flow: FlowContext */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : ToolContext */;
val* var9 /* : Location */;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : String */;
val* var19 /* : Array[Object] */;
long var20 /* : Int */;
val* var21 /* : NativeArray[Object] */;
val* var22 /* : String */;
val* var23 /* : Set[Variable] */;
var_node = p0;
var_variable = p1;
var = NULL;
if (var_variable == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (!var1) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/local_var_init.nit", 74);
show_backtrace(1);
}
var2 = ((val* (*)(val*))(self->class->vft[COLOR_local_var_init__LocalVarInitVisitor__maybe_unset_vars]))(self) /* maybe_unset_vars on <self:LocalVarInitVisitor>*/;
var3 = ((short int (*)(val*, val*))(var2->class->vft[COLOR_abstract_collection__Collection__has]))(var2, var_variable) /* has on <var2:Set[Variable]>*/;
var4 = !var3;
if (var4){
goto RET_LABEL;
} else {
}
var5 = ((val* (*)(val*))(var_node->class->vft[COLOR_flow__AExpr__after_flow_context]))(var_node) /* after_flow_context on <var_node:AExpr>*/;
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/local_var_init.nit", 77);
show_backtrace(1);
}
var_flow = var5;
var6 = ((short int (*)(val*, val*))(var_flow->class->vft[COLOR_local_var_init__FlowContext__is_variable_set]))(var_flow, var_variable) /* is_variable_set on <var_flow:FlowContext>*/;
var7 = !var6;
if (var7){
var8 = ((val* (*)(val*))(self->class->vft[COLOR_local_var_init__LocalVarInitVisitor__toolcontext]))(self) /* toolcontext on <self:LocalVarInitVisitor>*/;
var9 = ((val* (*)(val*))(var_node->class->vft[COLOR_parser_nodes__ANode__hot_location]))(var_node) /* hot_location on <var_node:AExpr>*/;
if (varonce) {
var10 = varonce;
} else {
var11 = "Error: variable \'";
var12 = 17;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce = var10;
}
if (varonce14) {
var15 = varonce14;
} else {
var16 = "\' is possibly unset.";
var17 = 20;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
var19 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var19 = array_instance Array[Object] */
var20 = 3;
var21 = NEW_array__NativeArray(var20, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var21)->values[0] = (val*) var10;
((struct instance_array__NativeArray*)var21)->values[1] = (val*) var_variable;
((struct instance_array__NativeArray*)var21)->values[2] = (val*) var15;
((void (*)(val*, val*, long))(var19->class->vft[COLOR_array__Array__with_native]))(var19, var21, var20) /* with_native on <var19:Array[Object]>*/;
}
var22 = ((val* (*)(val*))(var19->class->vft[COLOR_string__Object__to_s]))(var19) /* to_s on <var19:Array[Object]>*/;
((void (*)(val*, val*, val*))(var8->class->vft[COLOR_toolcontext__ToolContext__error]))(var8, var9, var22) /* error on <var8:ToolContext>*/;
var23 = ((val* (*)(val*))(self->class->vft[COLOR_local_var_init__LocalVarInitVisitor__maybe_unset_vars]))(self) /* maybe_unset_vars on <self:LocalVarInitVisitor>*/;
((void (*)(val*, val*))(var23->class->vft[COLOR_abstract_collection__RemovableCollection__remove]))(var23, var_variable) /* remove on <var23:Set[Variable]>*/;
} else {
}
RET_LABEL:;
}
/* method local_var_init#LocalVarInitVisitor#check_is_set for (self: Object, AExpr, nullable Variable) */
void VIRTUAL_local_var_init__LocalVarInitVisitor__check_is_set(val* self, val* p0, val* p1) {
local_var_init__LocalVarInitVisitor__check_is_set(self, p0, p1);
RET_LABEL:;
}
/* method local_var_init#LocalVarInitVisitor#visit for (self: LocalVarInitVisitor, ANode) */
void local_var_init__LocalVarInitVisitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
var_n = p0;
((void (*)(val*, val*))(var_n->class->vft[COLOR_local_var_init__ANode__accept_local_var_visitor]))(var_n, self) /* accept_local_var_visitor on <var_n:ANode>*/;
RET_LABEL:;
}
/* method local_var_init#LocalVarInitVisitor#visit for (self: Object, ANode) */
void VIRTUAL_local_var_init__LocalVarInitVisitor__visit(val* self, val* p0) {
local_var_init__LocalVarInitVisitor__visit(self, p0);
RET_LABEL:;
}
/* method local_var_init#FlowContext#set_vars for (self: FlowContext): Set[Variable] */
val* local_var_init__FlowContext__set_vars(val* self) {
val* var /* : Set[Variable] */;
val* var1 /* : Set[Variable] */;
var1 = self->attrs[COLOR_local_var_init__FlowContext___64dset_vars].val; /* @set_vars on <self:FlowContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @set_vars");
fprintf(stderr, " (%s:%d)\n", "src/local_var_init.nit", 92);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method local_var_init#FlowContext#set_vars for (self: Object): Set[Variable] */
val* VIRTUAL_local_var_init__FlowContext__set_vars(val* self) {
val* var /* : Set[Variable] */;
val* var1 /* : Set[Variable] */;
var1 = local_var_init__FlowContext__set_vars(self);
var = var1;
RET_LABEL:;
return var;
}
/* method local_var_init#FlowContext#set_vars= for (self: FlowContext, Set[Variable]) */
void local_var_init__FlowContext__set_vars_61d(val* self, val* p0) {
self->attrs[COLOR_local_var_init__FlowContext___64dset_vars].val = p0; /* @set_vars on <self:FlowContext> */
RET_LABEL:;
}
/* method local_var_init#FlowContext#set_vars= for (self: Object, Set[Variable]) */
void VIRTUAL_local_var_init__FlowContext__set_vars_61d(val* self, val* p0) {
local_var_init__FlowContext__set_vars_61d(self, p0);
RET_LABEL:;
}
/* method local_var_init#FlowContext#is_variable_set for (self: FlowContext, Variable): Bool */
short int local_var_init__FlowContext__is_variable_set(val* self, val* p0) {
short int var /* : Bool */;
val* var_variable /* var variable: Variable */;
val* var1 /* : Set[Variable] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : Array[FlowContext] */;
val* var_previous /* var previous: Array[FlowContext] */;
long var5 /* : Int */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
long var11 /* : Int */;
long var12 /* : Int */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
short int var17 /* : Bool */;
val* var18 /* : Array[FlowContext] */;
val* var19 /* : Iterator[nullable Object] */;
short int var20 /* : Bool */;
val* var21 /* : nullable Object */;
val* var_p /* var p: FlowContext */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : Set[Variable] */;
short int var26 /* : Bool */;
var_variable = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_local_var_init__FlowContext__set_vars]))(self) /* set_vars on <self:FlowContext>*/;
var2 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__Collection__has]))(var1, var_variable) /* has on <var1:Set[Variable]>*/;
if (var2){
var3 = 1;
var = var3;
goto RET_LABEL;
} else {
}
var4 = ((val* (*)(val*))(self->class->vft[COLOR_flow__FlowContext__previous]))(self) /* previous on <self:FlowContext>*/;
var_previous = var4;
var5 = ((long (*)(val*))(var_previous->class->vft[COLOR_abstract_collection__Collection__length]))(var_previous) /* length on <var_previous:Array[FlowContext]>*/;
var6 = 0;
{ /* Inline kernel#Int#== (var5,var6) */
var9 = var5 == var6;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
if (var7){
var10 = 0;
var = var10;
goto RET_LABEL;
} else {
}
var11 = ((long (*)(val*))(var_previous->class->vft[COLOR_abstract_collection__Collection__length]))(var_previous) /* length on <var_previous:Array[FlowContext]>*/;
var12 = 1;
{ /* Inline kernel#Int#== (var11,var12) */
var15 = var11 == var12;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
if (var13){
var16 = ((val* (*)(val*))(var_previous->class->vft[COLOR_abstract_collection__Collection__first]))(var_previous) /* first on <var_previous:Array[FlowContext]>*/;
var17 = ((short int (*)(val*, val*))(var16->class->vft[COLOR_local_var_init__FlowContext__is_variable_set]))(var16, var_variable) /* is_variable_set on <var16:nullable Object(FlowContext)>*/;
var = var17;
goto RET_LABEL;
} else {
}
var18 = ((val* (*)(val*))(self->class->vft[COLOR_flow__FlowContext__previous]))(self) /* previous on <self:FlowContext>*/;
var19 = ((val* (*)(val*))(var18->class->vft[COLOR_abstract_collection__Collection__iterator]))(var18) /* iterator on <var18:Array[FlowContext]>*/;
for(;;) {
var20 = ((short int (*)(val*))(var19->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var19) /* is_ok on <var19:Iterator[nullable Object]>*/;
if(!var20) break;
var21 = ((val* (*)(val*))(var19->class->vft[COLOR_abstract_collection__Iterator__item]))(var19) /* item on <var19:Iterator[nullable Object]>*/;
var_p = var21;
var22 = ((short int (*)(val*, val*))(var_p->class->vft[COLOR_local_var_init__FlowContext__is_variable_set]))(var_p, var_variable) /* is_variable_set on <var_p:FlowContext>*/;
var23 = !var22;
if (var23){
var24 = 0;
var = var24;
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var19->class->vft[COLOR_abstract_collection__Iterator__next]))(var19) /* next on <var19:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var25 = ((val* (*)(val*))(self->class->vft[COLOR_local_var_init__FlowContext__set_vars]))(self) /* set_vars on <self:FlowContext>*/;
((void (*)(val*, val*))(var25->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var25, var_variable) /* add on <var25:Set[Variable]>*/;
var26 = 1;
var = var26;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method local_var_init#FlowContext#is_variable_set for (self: Object, Variable): Bool */
short int VIRTUAL_local_var_init__FlowContext__is_variable_set(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = local_var_init__FlowContext__is_variable_set(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method local_var_init#ANode#accept_local_var_visitor for (self: ANode, LocalVarInitVisitor) */
void local_var_init__ANode__accept_local_var_visitor(val* self, val* p0) {
val* var_v /* var v: LocalVarInitVisitor */;
var_v = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__ANode__visit_all]))(self, var_v) /* visit_all on <self:ANode>*/;
RET_LABEL:;
}
/* method local_var_init#ANode#accept_local_var_visitor for (self: Object, LocalVarInitVisitor) */
void VIRTUAL_local_var_init__ANode__accept_local_var_visitor(val* self, val* p0) {
local_var_init__ANode__accept_local_var_visitor(self, p0);
RET_LABEL:;
}
/* method local_var_init#AVardeclExpr#accept_local_var_visitor for (self: AVardeclExpr, LocalVarInitVisitor) */
void local_var_init__AVardeclExpr__accept_local_var_visitor(val* self, val* p0) {
val* var_v /* var v: LocalVarInitVisitor */;
val* var /* : nullable AExpr */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : nullable Variable */;
var_v = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_local_var_init__AVardeclExpr__accept_local_var_visitor]))(self, p0) /* accept_local_var_visitor on <self:AVardeclExpr>*/;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AVardeclExpr__n_expr]))(self) /* n_expr on <self:AVardeclExpr>*/;
var1 = NULL;
if (var == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (var2){
var3 = ((val* (*)(val*))(self->class->vft[COLOR_scope__AVardeclExpr__variable]))(self) /* variable on <self:AVardeclExpr>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_local_var_init__LocalVarInitVisitor__mark_is_unset]))(var_v, self, var3) /* mark_is_unset on <var_v:LocalVarInitVisitor>*/;
} else {
}
RET_LABEL:;
}
/* method local_var_init#AVardeclExpr#accept_local_var_visitor for (self: Object, LocalVarInitVisitor) */
void VIRTUAL_local_var_init__AVardeclExpr__accept_local_var_visitor(val* self, val* p0) {
local_var_init__AVardeclExpr__accept_local_var_visitor(self, p0);
RET_LABEL:;
}
/* method local_var_init#AVarExpr#accept_local_var_visitor for (self: AVarExpr, LocalVarInitVisitor) */
void local_var_init__AVarExpr__accept_local_var_visitor(val* self, val* p0) {
val* var_v /* var v: LocalVarInitVisitor */;
val* var /* : nullable Variable */;
var_v = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_local_var_init__AVarExpr__accept_local_var_visitor]))(self, p0) /* accept_local_var_visitor on <self:AVarExpr>*/;
var = ((val* (*)(val*))(self->class->vft[COLOR_scope__AVarFormExpr__variable]))(self) /* variable on <self:AVarExpr>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_local_var_init__LocalVarInitVisitor__check_is_set]))(var_v, self, var) /* check_is_set on <var_v:LocalVarInitVisitor>*/;
RET_LABEL:;
}
/* method local_var_init#AVarExpr#accept_local_var_visitor for (self: Object, LocalVarInitVisitor) */
void VIRTUAL_local_var_init__AVarExpr__accept_local_var_visitor(val* self, val* p0) {
local_var_init__AVarExpr__accept_local_var_visitor(self, p0);
RET_LABEL:;
}
/* method local_var_init#AVarAssignExpr#accept_local_var_visitor for (self: AVarAssignExpr, LocalVarInitVisitor) */
void local_var_init__AVarAssignExpr__accept_local_var_visitor(val* self, val* p0) {
val* var_v /* var v: LocalVarInitVisitor */;
val* var /* : nullable Variable */;
var_v = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_local_var_init__AVarAssignExpr__accept_local_var_visitor]))(self, p0) /* accept_local_var_visitor on <self:AVarAssignExpr>*/;
var = ((val* (*)(val*))(self->class->vft[COLOR_scope__AVarFormExpr__variable]))(self) /* variable on <self:AVarAssignExpr>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_local_var_init__LocalVarInitVisitor__mark_is_set]))(var_v, self, var) /* mark_is_set on <var_v:LocalVarInitVisitor>*/;
RET_LABEL:;
}
/* method local_var_init#AVarAssignExpr#accept_local_var_visitor for (self: Object, LocalVarInitVisitor) */
void VIRTUAL_local_var_init__AVarAssignExpr__accept_local_var_visitor(val* self, val* p0) {
local_var_init__AVarAssignExpr__accept_local_var_visitor(self, p0);
RET_LABEL:;
}
/* method local_var_init#AVarReassignExpr#accept_local_var_visitor for (self: AVarReassignExpr, LocalVarInitVisitor) */
void local_var_init__AVarReassignExpr__accept_local_var_visitor(val* self, val* p0) {
val* var_v /* var v: LocalVarInitVisitor */;
val* var /* : nullable Variable */;
var_v = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_local_var_init__AVarReassignExpr__accept_local_var_visitor]))(self, p0) /* accept_local_var_visitor on <self:AVarReassignExpr>*/;
var = ((val* (*)(val*))(self->class->vft[COLOR_scope__AVarFormExpr__variable]))(self) /* variable on <self:AVarReassignExpr>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_local_var_init__LocalVarInitVisitor__check_is_set]))(var_v, self, var) /* check_is_set on <var_v:LocalVarInitVisitor>*/;
RET_LABEL:;
}
/* method local_var_init#AVarReassignExpr#accept_local_var_visitor for (self: Object, LocalVarInitVisitor) */
void VIRTUAL_local_var_init__AVarReassignExpr__accept_local_var_visitor(val* self, val* p0) {
local_var_init__AVarReassignExpr__accept_local_var_visitor(self, p0);
RET_LABEL:;
}
