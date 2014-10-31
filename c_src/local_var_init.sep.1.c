#include "local_var_init.sep.0.h"
/* method local_var_init#ToolContext#local_var_init_phase for (self: ToolContext): Phase */
val* local_var_init__ToolContext__local_var_init_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_local_var_init__ToolContext___local_var_init_phase].val; /* _local_var_init_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _local_var_init_phase");
PRINT_ERROR(" (%s:%d)\n", "semantize/local_var_init.nit", 24);
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
val* var3 /* : Phase */;
{ /* Inline local_var_init#ToolContext#local_var_init_phase (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_local_var_init__ToolContext___local_var_init_phase].val; /* _local_var_init_phase on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _local_var_init_phase");
PRINT_ERROR(" (%s:%d)\n", "semantize/local_var_init.nit", 24);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method local_var_init#LocalVarInitPhase#process_npropdef for (self: LocalVarInitPhase, APropdef) */
void local_var_init__LocalVarInitPhase__process_npropdef(val* self, val* p0) {
val* var_npropdef /* var npropdef: APropdef */;
val* var /* : ToolContext */;
val* var2 /* : ToolContext */;
var_npropdef = p0;
{
{ /* Inline phase#Phase#toolcontext (self) on <self:LocalVarInitPhase> */
var2 = self->attrs[COLOR_phase__Phase___toolcontext].val; /* _toolcontext on <self:LocalVarInitPhase> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "phase.nit", 162);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
local_var_init__APropdef__do_local_var_init(var_npropdef, var); /* Direct call local_var_init#APropdef#do_local_var_init on <var_npropdef:APropdef>*/
}
RET_LABEL:;
}
/* method local_var_init#LocalVarInitPhase#process_npropdef for (self: Object, APropdef) */
void VIRTUAL_local_var_init__LocalVarInitPhase__process_npropdef(val* self, val* p0) {
local_var_init__LocalVarInitPhase__process_npropdef(self, p0); /* Direct call local_var_init#LocalVarInitPhase#process_npropdef on <self:Object(LocalVarInitPhase)>*/
RET_LABEL:;
}
/* method local_var_init#APropdef#do_local_var_init for (self: APropdef, ToolContext) */
void local_var_init__APropdef__do_local_var_init(val* self, val* p0) {
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var /* : LocalVarInitVisitor */;
val* var_v /* var v: LocalVarInitVisitor */;
var_toolcontext = p0;
var = NEW_local_var_init__LocalVarInitVisitor(&type_local_var_init__LocalVarInitVisitor);
{
local_var_init__LocalVarInitVisitor__init(var, var_toolcontext); /* Direct call local_var_init#LocalVarInitVisitor#init on <var:LocalVarInitVisitor>*/
}
var_v = var;
{
parser_nodes__Visitor__enter_visit(var_v, self); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:LocalVarInitVisitor>*/
}
RET_LABEL:;
}
/* method local_var_init#APropdef#do_local_var_init for (self: Object, ToolContext) */
void VIRTUAL_local_var_init__APropdef__do_local_var_init(val* self, val* p0) {
local_var_init__APropdef__do_local_var_init(self, p0); /* Direct call local_var_init#APropdef#do_local_var_init on <self:Object(APropdef)>*/
RET_LABEL:;
}
/* method local_var_init#LocalVarInitVisitor#toolcontext for (self: LocalVarInitVisitor): ToolContext */
val* local_var_init__LocalVarInitVisitor__toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_local_var_init__LocalVarInitVisitor___toolcontext].val; /* _toolcontext on <self:LocalVarInitVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "semantize/local_var_init.nit", 45);
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
val* var3 /* : ToolContext */;
{ /* Inline local_var_init#LocalVarInitVisitor#toolcontext (self) on <self:Object(LocalVarInitVisitor)> */
var3 = self->attrs[COLOR_local_var_init__LocalVarInitVisitor___toolcontext].val; /* _toolcontext on <self:Object(LocalVarInitVisitor)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "semantize/local_var_init.nit", 45);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method local_var_init#LocalVarInitVisitor#toolcontext= for (self: LocalVarInitVisitor, ToolContext) */
void local_var_init__LocalVarInitVisitor__toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_local_var_init__LocalVarInitVisitor___toolcontext].val = p0; /* _toolcontext on <self:LocalVarInitVisitor> */
RET_LABEL:;
}
/* method local_var_init#LocalVarInitVisitor#toolcontext= for (self: Object, ToolContext) */
void VIRTUAL_local_var_init__LocalVarInitVisitor__toolcontext_61d(val* self, val* p0) {
{ /* Inline local_var_init#LocalVarInitVisitor#toolcontext= (self,p0) on <self:Object(LocalVarInitVisitor)> */
self->attrs[COLOR_local_var_init__LocalVarInitVisitor___toolcontext].val = p0; /* _toolcontext on <self:Object(LocalVarInitVisitor)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method local_var_init#LocalVarInitVisitor#init for (self: LocalVarInitVisitor, ToolContext) */
void local_var_init__LocalVarInitVisitor__init(val* self, val* p0) {
val* var_toolcontext /* var toolcontext: ToolContext */;
{
((void (*)(val*))(self->class->vft[COLOR_kernel__Object__init]))(self) /* init on <self:LocalVarInitVisitor>*/;
}
var_toolcontext = p0;
{
{ /* Inline local_var_init#LocalVarInitVisitor#toolcontext= (self,var_toolcontext) on <self:LocalVarInitVisitor> */
self->attrs[COLOR_local_var_init__LocalVarInitVisitor___toolcontext].val = var_toolcontext; /* _toolcontext on <self:LocalVarInitVisitor> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method local_var_init#LocalVarInitVisitor#init for (self: Object, ToolContext) */
void VIRTUAL_local_var_init__LocalVarInitVisitor__init(val* self, val* p0) {
local_var_init__LocalVarInitVisitor__init(self, p0); /* Direct call local_var_init#LocalVarInitVisitor#init on <self:Object(LocalVarInitVisitor)>*/
RET_LABEL:;
}
/* method local_var_init#LocalVarInitVisitor#maybe_unset_vars for (self: LocalVarInitVisitor): Set[Variable] */
val* local_var_init__LocalVarInitVisitor__maybe_unset_vars(val* self) {
val* var /* : Set[Variable] */;
val* var1 /* : Set[Variable] */;
var1 = self->attrs[COLOR_local_var_init__LocalVarInitVisitor___maybe_unset_vars].val; /* _maybe_unset_vars on <self:LocalVarInitVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _maybe_unset_vars");
PRINT_ERROR(" (%s:%d)\n", "semantize/local_var_init.nit", 52);
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
val* var3 /* : Set[Variable] */;
{ /* Inline local_var_init#LocalVarInitVisitor#maybe_unset_vars (self) on <self:Object(LocalVarInitVisitor)> */
var3 = self->attrs[COLOR_local_var_init__LocalVarInitVisitor___maybe_unset_vars].val; /* _maybe_unset_vars on <self:Object(LocalVarInitVisitor)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _maybe_unset_vars");
PRINT_ERROR(" (%s:%d)\n", "semantize/local_var_init.nit", 52);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method local_var_init#LocalVarInitVisitor#mark_is_unset for (self: LocalVarInitVisitor, AExpr, nullable Variable) */
void local_var_init__LocalVarInitVisitor__mark_is_unset(val* self, val* p0, val* p1) {
val* var_node /* var node: AExpr */;
val* var_variable /* var variable: nullable Variable */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : Set[Variable] */;
val* var9 /* : Set[Variable] */;
var_node = p0;
var_variable = p1;
var = NULL;
if (var_variable == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_variable,var) on <var_variable:nullable Variable> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_variable->class->vft[COLOR_kernel__Object___61d_61d]))(var_variable, var_other) /* == on <var_variable:nullable Variable(Variable)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "semantize/local_var_init.nit", 57);
show_backtrace(1);
}
{
{ /* Inline local_var_init#LocalVarInitVisitor#maybe_unset_vars (self) on <self:LocalVarInitVisitor> */
var9 = self->attrs[COLOR_local_var_init__LocalVarInitVisitor___maybe_unset_vars].val; /* _maybe_unset_vars on <self:LocalVarInitVisitor> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _maybe_unset_vars");
PRINT_ERROR(" (%s:%d)\n", "semantize/local_var_init.nit", 52);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
((void (*)(val*, val*))(var7->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var7, var_variable) /* add on <var7:Set[Variable]>*/;
}
RET_LABEL:;
}
/* method local_var_init#LocalVarInitVisitor#mark_is_unset for (self: Object, AExpr, nullable Variable) */
void VIRTUAL_local_var_init__LocalVarInitVisitor__mark_is_unset(val* self, val* p0, val* p1) {
local_var_init__LocalVarInitVisitor__mark_is_unset(self, p0, p1); /* Direct call local_var_init#LocalVarInitVisitor#mark_is_unset on <self:Object(LocalVarInitVisitor)>*/
RET_LABEL:;
}
/* method local_var_init#LocalVarInitVisitor#mark_is_set for (self: LocalVarInitVisitor, AExpr, nullable Variable) */
void local_var_init__LocalVarInitVisitor__mark_is_set(val* self, val* p0, val* p1) {
val* var_node /* var node: AExpr */;
val* var_variable /* var variable: nullable Variable */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : Set[Variable] */;
val* var9 /* : Set[Variable] */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : nullable FlowContext */;
val* var14 /* : nullable FlowContext */;
val* var_flow /* var flow: FlowContext */;
val* var15 /* : Set[Variable] */;
val* var17 /* : Set[Variable] */;
var_node = p0;
var_variable = p1;
var = NULL;
if (var_variable == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_variable,var) on <var_variable:nullable Variable> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_variable->class->vft[COLOR_kernel__Object___61d_61d]))(var_variable, var_other) /* == on <var_variable:nullable Variable(Variable)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "semantize/local_var_init.nit", 63);
show_backtrace(1);
}
{
{ /* Inline local_var_init#LocalVarInitVisitor#maybe_unset_vars (self) on <self:LocalVarInitVisitor> */
var9 = self->attrs[COLOR_local_var_init__LocalVarInitVisitor___maybe_unset_vars].val; /* _maybe_unset_vars on <self:LocalVarInitVisitor> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _maybe_unset_vars");
PRINT_ERROR(" (%s:%d)\n", "semantize/local_var_init.nit", 52);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = ((short int (*)(val*, val*))(var7->class->vft[COLOR_abstract_collection__Collection__has]))(var7, var_variable) /* has on <var7:Set[Variable]>*/;
}
var11 = !var10;
if (var11){
goto RET_LABEL;
} else {
}
{
{ /* Inline flow#AExpr#after_flow_context (var_node) on <var_node:AExpr> */
var14 = var_node->attrs[COLOR_flow__AExpr___after_flow_context].val; /* _after_flow_context on <var_node:AExpr> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "semantize/local_var_init.nit", 66);
show_backtrace(1);
}
var_flow = var12;
{
{ /* Inline local_var_init#FlowContext#set_vars (var_flow) on <var_flow:FlowContext> */
var17 = var_flow->attrs[COLOR_local_var_init__FlowContext___set_vars].val; /* _set_vars on <var_flow:FlowContext> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _set_vars");
PRINT_ERROR(" (%s:%d)\n", "semantize/local_var_init.nit", 90);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
((void (*)(val*, val*))(var15->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var15, var_variable) /* add on <var15:Set[Variable]>*/;
}
RET_LABEL:;
}
/* method local_var_init#LocalVarInitVisitor#mark_is_set for (self: Object, AExpr, nullable Variable) */
void VIRTUAL_local_var_init__LocalVarInitVisitor__mark_is_set(val* self, val* p0, val* p1) {
local_var_init__LocalVarInitVisitor__mark_is_set(self, p0, p1); /* Direct call local_var_init#LocalVarInitVisitor#mark_is_set on <self:Object(LocalVarInitVisitor)>*/
RET_LABEL:;
}
/* method local_var_init#LocalVarInitVisitor#check_is_set for (self: LocalVarInitVisitor, AExpr, nullable Variable) */
void local_var_init__LocalVarInitVisitor__check_is_set(val* self, val* p0, val* p1) {
val* var_node /* var node: AExpr */;
val* var_variable /* var variable: nullable Variable */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : Set[Variable] */;
val* var9 /* : Set[Variable] */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : nullable FlowContext */;
val* var14 /* : nullable FlowContext */;
val* var_flow /* var flow: FlowContext */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : ToolContext */;
val* var19 /* : ToolContext */;
val* var20 /* : Location */;
static val* varonce;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : FlatString */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
long var28 /* : Int */;
val* var29 /* : FlatString */;
val* var30 /* : Array[Object] */;
long var31 /* : Int */;
val* var32 /* : NativeArray[Object] */;
val* var33 /* : String */;
val* var34 /* : Set[Variable] */;
val* var36 /* : Set[Variable] */;
var_node = p0;
var_variable = p1;
var = NULL;
if (var_variable == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_variable,var) on <var_variable:nullable Variable> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_variable->class->vft[COLOR_kernel__Object___61d_61d]))(var_variable, var_other) /* == on <var_variable:nullable Variable(Variable)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "semantize/local_var_init.nit", 72);
show_backtrace(1);
}
{
{ /* Inline local_var_init#LocalVarInitVisitor#maybe_unset_vars (self) on <self:LocalVarInitVisitor> */
var9 = self->attrs[COLOR_local_var_init__LocalVarInitVisitor___maybe_unset_vars].val; /* _maybe_unset_vars on <self:LocalVarInitVisitor> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _maybe_unset_vars");
PRINT_ERROR(" (%s:%d)\n", "semantize/local_var_init.nit", 52);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = ((short int (*)(val*, val*))(var7->class->vft[COLOR_abstract_collection__Collection__has]))(var7, var_variable) /* has on <var7:Set[Variable]>*/;
}
var11 = !var10;
if (var11){
goto RET_LABEL;
} else {
}
{
{ /* Inline flow#AExpr#after_flow_context (var_node) on <var_node:AExpr> */
var14 = var_node->attrs[COLOR_flow__AExpr___after_flow_context].val; /* _after_flow_context on <var_node:AExpr> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "semantize/local_var_init.nit", 75);
show_backtrace(1);
}
var_flow = var12;
{
var15 = local_var_init__FlowContext__is_variable_set(var_flow, var_variable);
}
var16 = !var15;
if (var16){
{
{ /* Inline local_var_init#LocalVarInitVisitor#toolcontext (self) on <self:LocalVarInitVisitor> */
var19 = self->attrs[COLOR_local_var_init__LocalVarInitVisitor___toolcontext].val; /* _toolcontext on <self:LocalVarInitVisitor> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "semantize/local_var_init.nit", 45);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = parser_nodes__ANode__hot_location(var_node);
}
if (varonce) {
var21 = varonce;
} else {
var22 = "Error: variable \'";
var23 = 17;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce = var21;
}
if (varonce25) {
var26 = varonce25;
} else {
var27 = "\' is possibly unset.";
var28 = 20;
var29 = string__NativeString__to_s_with_length(var27, var28);
var26 = var29;
varonce25 = var26;
}
var30 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var30 = array_instance Array[Object] */
var31 = 3;
var32 = NEW_array__NativeArray(var31, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var32)->values[0] = (val*) var21;
((struct instance_array__NativeArray*)var32)->values[1] = (val*) var_variable;
((struct instance_array__NativeArray*)var32)->values[2] = (val*) var26;
{
((void (*)(val*, val*, long))(var30->class->vft[COLOR_array__Array__with_native]))(var30, var32, var31) /* with_native on <var30:Array[Object]>*/;
}
}
{
var33 = ((val* (*)(val*))(var30->class->vft[COLOR_string__Object__to_s]))(var30) /* to_s on <var30:Array[Object]>*/;
}
{
toolcontext__ToolContext__error(var17, var20, var33); /* Direct call toolcontext#ToolContext#error on <var17:ToolContext>*/
}
{
{ /* Inline local_var_init#LocalVarInitVisitor#maybe_unset_vars (self) on <self:LocalVarInitVisitor> */
var36 = self->attrs[COLOR_local_var_init__LocalVarInitVisitor___maybe_unset_vars].val; /* _maybe_unset_vars on <self:LocalVarInitVisitor> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _maybe_unset_vars");
PRINT_ERROR(" (%s:%d)\n", "semantize/local_var_init.nit", 52);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
((void (*)(val*, val*))(var34->class->vft[COLOR_abstract_collection__RemovableCollection__remove]))(var34, var_variable) /* remove on <var34:Set[Variable]>*/;
}
} else {
}
RET_LABEL:;
}
/* method local_var_init#LocalVarInitVisitor#check_is_set for (self: Object, AExpr, nullable Variable) */
void VIRTUAL_local_var_init__LocalVarInitVisitor__check_is_set(val* self, val* p0, val* p1) {
local_var_init__LocalVarInitVisitor__check_is_set(self, p0, p1); /* Direct call local_var_init#LocalVarInitVisitor#check_is_set on <self:Object(LocalVarInitVisitor)>*/
RET_LABEL:;
}
/* method local_var_init#LocalVarInitVisitor#visit for (self: LocalVarInitVisitor, ANode) */
void local_var_init__LocalVarInitVisitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
var_n = p0;
{
((void (*)(val*, val*))(var_n->class->vft[COLOR_local_var_init__ANode__accept_local_var_visitor]))(var_n, self) /* accept_local_var_visitor on <var_n:ANode>*/;
}
RET_LABEL:;
}
/* method local_var_init#LocalVarInitVisitor#visit for (self: Object, ANode) */
void VIRTUAL_local_var_init__LocalVarInitVisitor__visit(val* self, val* p0) {
local_var_init__LocalVarInitVisitor__visit(self, p0); /* Direct call local_var_init#LocalVarInitVisitor#visit on <self:Object(LocalVarInitVisitor)>*/
RET_LABEL:;
}
/* method local_var_init#FlowContext#set_vars for (self: FlowContext): Set[Variable] */
val* local_var_init__FlowContext__set_vars(val* self) {
val* var /* : Set[Variable] */;
val* var1 /* : Set[Variable] */;
var1 = self->attrs[COLOR_local_var_init__FlowContext___set_vars].val; /* _set_vars on <self:FlowContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _set_vars");
PRINT_ERROR(" (%s:%d)\n", "semantize/local_var_init.nit", 90);
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
val* var3 /* : Set[Variable] */;
{ /* Inline local_var_init#FlowContext#set_vars (self) on <self:Object(FlowContext)> */
var3 = self->attrs[COLOR_local_var_init__FlowContext___set_vars].val; /* _set_vars on <self:Object(FlowContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _set_vars");
PRINT_ERROR(" (%s:%d)\n", "semantize/local_var_init.nit", 90);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method local_var_init#FlowContext#is_variable_set for (self: FlowContext, Variable): Bool */
short int local_var_init__FlowContext__is_variable_set(val* self, val* p0) {
short int var /* : Bool */;
val* var_variable /* var variable: Variable */;
val* var1 /* : Set[Variable] */;
val* var3 /* : Set[Variable] */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : Array[FlowContext] */;
val* var8 /* : Array[FlowContext] */;
val* var_previous /* var previous: Array[FlowContext] */;
long var9 /* : Int */;
long var11 /* : Int */;
long var12 /* : Int */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
long var18 /* : Int */;
long var20 /* : Int */;
long var21 /* : Int */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
val* var26 /* : nullable Object */;
short int var27 /* : Bool */;
val* var28 /* : Array[FlowContext] */;
val* var30 /* : Array[FlowContext] */;
val* var_ /* var : Array[FlowContext] */;
val* var31 /* : ArrayIterator[nullable Object] */;
val* var_32 /* var : ArrayIterator[FlowContext] */;
short int var33 /* : Bool */;
val* var34 /* : nullable Object */;
val* var_p /* var p: FlowContext */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
val* var39 /* : Set[Variable] */;
val* var41 /* : Set[Variable] */;
short int var42 /* : Bool */;
var_variable = p0;
{
{ /* Inline local_var_init#FlowContext#set_vars (self) on <self:FlowContext> */
var3 = self->attrs[COLOR_local_var_init__FlowContext___set_vars].val; /* _set_vars on <self:FlowContext> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _set_vars");
PRINT_ERROR(" (%s:%d)\n", "semantize/local_var_init.nit", 90);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__Collection__has]))(var1, var_variable) /* has on <var1:Set[Variable]>*/;
}
if (var4){
var5 = 1;
var = var5;
goto RET_LABEL;
} else {
}
{
{ /* Inline flow#FlowContext#previous (self) on <self:FlowContext> */
var8 = self->attrs[COLOR_flow__FlowContext___previous].val; /* _previous on <self:FlowContext> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _previous");
PRINT_ERROR(" (%s:%d)\n", "semantize/flow.nit", 189);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_previous = var6;
{
{ /* Inline array#AbstractArrayRead#length (var_previous) on <var_previous:Array[FlowContext]> */
var11 = var_previous->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_previous:Array[FlowContext]> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var12 = 0;
{
{ /* Inline kernel#Int#== (var9,var12) on <var9:Int> */
var16 = var9 == var12;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
if (var13){
var17 = 0;
var = var17;
goto RET_LABEL;
} else {
}
{
{ /* Inline array#AbstractArrayRead#length (var_previous) on <var_previous:Array[FlowContext]> */
var20 = var_previous->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_previous:Array[FlowContext]> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
var21 = 1;
{
{ /* Inline kernel#Int#== (var18,var21) on <var18:Int> */
var25 = var18 == var21;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
var22 = var23;
}
if (var22){
{
var26 = abstract_collection__SequenceRead__first(var_previous);
}
{
var27 = local_var_init__FlowContext__is_variable_set(var26, var_variable);
}
var = var27;
goto RET_LABEL;
} else {
}
{
{ /* Inline flow#FlowContext#previous (self) on <self:FlowContext> */
var30 = self->attrs[COLOR_flow__FlowContext___previous].val; /* _previous on <self:FlowContext> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _previous");
PRINT_ERROR(" (%s:%d)\n", "semantize/flow.nit", 189);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
var_ = var28;
{
var31 = array__AbstractArrayRead__iterator(var_);
}
var_32 = var31;
for(;;) {
{
var33 = array__ArrayIterator__is_ok(var_32);
}
if (var33){
{
var34 = array__ArrayIterator__item(var_32);
}
var_p = var34;
{
var35 = local_var_init__FlowContext__is_variable_set(var_p, var_variable);
}
var36 = !var35;
if (var36){
var37 = 0;
var = var37;
goto RET_LABEL;
} else {
}
{
array__ArrayIterator__next(var_32); /* Direct call array#ArrayIterator#next on <var_32:ArrayIterator[FlowContext]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_32) on <var_32:ArrayIterator[FlowContext]> */
RET_LABEL38:(void)0;
}
}
{
{ /* Inline local_var_init#FlowContext#set_vars (self) on <self:FlowContext> */
var41 = self->attrs[COLOR_local_var_init__FlowContext___set_vars].val; /* _set_vars on <self:FlowContext> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _set_vars");
PRINT_ERROR(" (%s:%d)\n", "semantize/local_var_init.nit", 90);
show_backtrace(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
((void (*)(val*, val*))(var39->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var39, var_variable) /* add on <var39:Set[Variable]>*/;
}
var42 = 1;
var = var42;
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
{
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__ANode__visit_all]))(self, var_v) /* visit_all on <self:ANode>*/;
}
RET_LABEL:;
}
/* method local_var_init#ANode#accept_local_var_visitor for (self: Object, LocalVarInitVisitor) */
void VIRTUAL_local_var_init__ANode__accept_local_var_visitor(val* self, val* p0) {
local_var_init__ANode__accept_local_var_visitor(self, p0); /* Direct call local_var_init#ANode#accept_local_var_visitor on <self:Object(ANode)>*/
RET_LABEL:;
}
/* method local_var_init#AVardeclExpr#accept_local_var_visitor for (self: AVardeclExpr, LocalVarInitVisitor) */
void local_var_init__AVardeclExpr__accept_local_var_visitor(val* self, val* p0) {
val* var_v /* var v: LocalVarInitVisitor */;
val* var /* : nullable AExpr */;
val* var2 /* : nullable AExpr */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable Variable */;
val* var12 /* : nullable Variable */;
var_v = p0;
{
((void (*)(val*, val*))(self->class->vft[COLOR_local_var_init__AVardeclExpr__accept_local_var_visitor]))(self, p0) /* accept_local_var_visitor on <self:AVardeclExpr>*/;
}
{
{ /* Inline parser_nodes#AVardeclExpr#n_expr (self) on <self:AVardeclExpr> */
var2 = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_expr].val; /* _n_expr on <self:AVardeclExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = NULL;
if (var == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var,var3) on <var:nullable AExpr> */
var_other = var3;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:nullable AExpr(AExpr)> */
var9 = var == var_other;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
{
{ /* Inline scope#AVardeclExpr#variable (self) on <self:AVardeclExpr> */
var12 = self->attrs[COLOR_scope__AVardeclExpr___variable].val; /* _variable on <self:AVardeclExpr> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
local_var_init__LocalVarInitVisitor__mark_is_unset(var_v, self, var10); /* Direct call local_var_init#LocalVarInitVisitor#mark_is_unset on <var_v:LocalVarInitVisitor>*/
}
} else {
}
RET_LABEL:;
}
/* method local_var_init#AVardeclExpr#accept_local_var_visitor for (self: Object, LocalVarInitVisitor) */
void VIRTUAL_local_var_init__AVardeclExpr__accept_local_var_visitor(val* self, val* p0) {
local_var_init__AVardeclExpr__accept_local_var_visitor(self, p0); /* Direct call local_var_init#AVardeclExpr#accept_local_var_visitor on <self:Object(AVardeclExpr)>*/
RET_LABEL:;
}
/* method local_var_init#AVarExpr#accept_local_var_visitor for (self: AVarExpr, LocalVarInitVisitor) */
void local_var_init__AVarExpr__accept_local_var_visitor(val* self, val* p0) {
val* var_v /* var v: LocalVarInitVisitor */;
val* var /* : nullable Variable */;
val* var2 /* : nullable Variable */;
var_v = p0;
{
((void (*)(val*, val*))(self->class->vft[COLOR_local_var_init__AVarExpr__accept_local_var_visitor]))(self, p0) /* accept_local_var_visitor on <self:AVarExpr>*/;
}
{
{ /* Inline scope#AVarFormExpr#variable (self) on <self:AVarExpr> */
var2 = self->attrs[COLOR_scope__AVarFormExpr___variable].val; /* _variable on <self:AVarExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
local_var_init__LocalVarInitVisitor__check_is_set(var_v, self, var); /* Direct call local_var_init#LocalVarInitVisitor#check_is_set on <var_v:LocalVarInitVisitor>*/
}
RET_LABEL:;
}
/* method local_var_init#AVarExpr#accept_local_var_visitor for (self: Object, LocalVarInitVisitor) */
void VIRTUAL_local_var_init__AVarExpr__accept_local_var_visitor(val* self, val* p0) {
local_var_init__AVarExpr__accept_local_var_visitor(self, p0); /* Direct call local_var_init#AVarExpr#accept_local_var_visitor on <self:Object(AVarExpr)>*/
RET_LABEL:;
}
/* method local_var_init#AVarAssignExpr#accept_local_var_visitor for (self: AVarAssignExpr, LocalVarInitVisitor) */
void local_var_init__AVarAssignExpr__accept_local_var_visitor(val* self, val* p0) {
val* var_v /* var v: LocalVarInitVisitor */;
val* var /* : nullable Variable */;
val* var2 /* : nullable Variable */;
var_v = p0;
{
((void (*)(val*, val*))(self->class->vft[COLOR_local_var_init__AVarAssignExpr__accept_local_var_visitor]))(self, p0) /* accept_local_var_visitor on <self:AVarAssignExpr>*/;
}
{
{ /* Inline scope#AVarFormExpr#variable (self) on <self:AVarAssignExpr> */
var2 = self->attrs[COLOR_scope__AVarFormExpr___variable].val; /* _variable on <self:AVarAssignExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
local_var_init__LocalVarInitVisitor__mark_is_set(var_v, self, var); /* Direct call local_var_init#LocalVarInitVisitor#mark_is_set on <var_v:LocalVarInitVisitor>*/
}
RET_LABEL:;
}
/* method local_var_init#AVarAssignExpr#accept_local_var_visitor for (self: Object, LocalVarInitVisitor) */
void VIRTUAL_local_var_init__AVarAssignExpr__accept_local_var_visitor(val* self, val* p0) {
local_var_init__AVarAssignExpr__accept_local_var_visitor(self, p0); /* Direct call local_var_init#AVarAssignExpr#accept_local_var_visitor on <self:Object(AVarAssignExpr)>*/
RET_LABEL:;
}
/* method local_var_init#AVarReassignExpr#accept_local_var_visitor for (self: AVarReassignExpr, LocalVarInitVisitor) */
void local_var_init__AVarReassignExpr__accept_local_var_visitor(val* self, val* p0) {
val* var_v /* var v: LocalVarInitVisitor */;
val* var /* : nullable Variable */;
val* var2 /* : nullable Variable */;
var_v = p0;
{
((void (*)(val*, val*))(self->class->vft[COLOR_local_var_init__AVarReassignExpr__accept_local_var_visitor]))(self, p0) /* accept_local_var_visitor on <self:AVarReassignExpr>*/;
}
{
{ /* Inline scope#AVarFormExpr#variable (self) on <self:AVarReassignExpr> */
var2 = self->attrs[COLOR_scope__AVarFormExpr___variable].val; /* _variable on <self:AVarReassignExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
local_var_init__LocalVarInitVisitor__check_is_set(var_v, self, var); /* Direct call local_var_init#LocalVarInitVisitor#check_is_set on <var_v:LocalVarInitVisitor>*/
}
RET_LABEL:;
}
/* method local_var_init#AVarReassignExpr#accept_local_var_visitor for (self: Object, LocalVarInitVisitor) */
void VIRTUAL_local_var_init__AVarReassignExpr__accept_local_var_visitor(val* self, val* p0) {
local_var_init__AVarReassignExpr__accept_local_var_visitor(self, p0); /* Direct call local_var_init#AVarReassignExpr#accept_local_var_visitor on <self:Object(AVarReassignExpr)>*/
RET_LABEL:;
}
