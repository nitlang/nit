#include "local_var_init.sep.0.h"
/* method local_var_init#ToolContext#local_var_init_phase for (self: ToolContext): Phase */
val* local_var_init__ToolContext__local_var_init_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_local_var_init__ToolContext___local_var_init_phase].val; /* _local_var_init_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _local_var_init_phase");
PRINT_ERROR(" (%s:%d)\n", "src/local_var_init.nit", 26);
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
PRINT_ERROR(" (%s:%d)\n", "src/local_var_init.nit", 26);
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
PRINT_ERROR(" (%s:%d)\n", "src/phase.nit", 145);
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
PRINT_ERROR(" (%s:%d)\n", "src/local_var_init.nit", 47);
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
PRINT_ERROR(" (%s:%d)\n", "src/local_var_init.nit", 47);
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
{ /* Inline parser_nodes#Visitor#init (self) on <self:LocalVarInitVisitor> */
RET_LABEL1:(void)0;
}
}
var_toolcontext = p0;
{
{ /* Inline local_var_init#LocalVarInitVisitor#toolcontext= (self,var_toolcontext) on <self:LocalVarInitVisitor> */
self->attrs[COLOR_local_var_init__LocalVarInitVisitor___toolcontext].val = var_toolcontext; /* _toolcontext on <self:LocalVarInitVisitor> */
RET_LABEL2:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", "src/local_var_init.nit", 54);
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
PRINT_ERROR(" (%s:%d)\n", "src/local_var_init.nit", 54);
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
PRINT_ERROR(" (%s:%d)\n", "src/local_var_init.nit", 59);
show_backtrace(1);
}
{
{ /* Inline local_var_init#LocalVarInitVisitor#maybe_unset_vars (self) on <self:LocalVarInitVisitor> */
var9 = self->attrs[COLOR_local_var_init__LocalVarInitVisitor___maybe_unset_vars].val; /* _maybe_unset_vars on <self:LocalVarInitVisitor> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _maybe_unset_vars");
PRINT_ERROR(" (%s:%d)\n", "src/local_var_init.nit", 54);
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
PRINT_ERROR(" (%s:%d)\n", "src/local_var_init.nit", 65);
show_backtrace(1);
}
{
{ /* Inline local_var_init#LocalVarInitVisitor#maybe_unset_vars (self) on <self:LocalVarInitVisitor> */
var9 = self->attrs[COLOR_local_var_init__LocalVarInitVisitor___maybe_unset_vars].val; /* _maybe_unset_vars on <self:LocalVarInitVisitor> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _maybe_unset_vars");
PRINT_ERROR(" (%s:%d)\n", "src/local_var_init.nit", 54);
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
PRINT_ERROR(" (%s:%d)\n", "src/local_var_init.nit", 68);
show_backtrace(1);
}
var_flow = var12;
{
{ /* Inline local_var_init#FlowContext#set_vars (var_flow) on <var_flow:FlowContext> */
var17 = var_flow->attrs[COLOR_local_var_init__FlowContext___set_vars].val; /* _set_vars on <var_flow:FlowContext> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _set_vars");
PRINT_ERROR(" (%s:%d)\n", "src/local_var_init.nit", 92);
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
PRINT_ERROR(" (%s:%d)\n", "src/local_var_init.nit", 74);
show_backtrace(1);
}
{
{ /* Inline local_var_init#LocalVarInitVisitor#maybe_unset_vars (self) on <self:LocalVarInitVisitor> */
var9 = self->attrs[COLOR_local_var_init__LocalVarInitVisitor___maybe_unset_vars].val; /* _maybe_unset_vars on <self:LocalVarInitVisitor> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _maybe_unset_vars");
PRINT_ERROR(" (%s:%d)\n", "src/local_var_init.nit", 54);
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
PRINT_ERROR(" (%s:%d)\n", "src/local_var_init.nit", 77);
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
PRINT_ERROR(" (%s:%d)\n", "src/local_var_init.nit", 47);
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
PRINT_ERROR(" (%s:%d)\n", "src/local_var_init.nit", 54);
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
PRINT_ERROR(" (%s:%d)\n", "src/local_var_init.nit", 92);
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
PRINT_ERROR(" (%s:%d)\n", "src/local_var_init.nit", 92);
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
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
long var16 /* : Int */;
long var17 /* : Int */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : nullable Object */;
short int var23 /* : Bool */;
val* var24 /* : Array[FlowContext] */;
val* var26 /* : Array[FlowContext] */;
val* var27 /* : ArrayIterator[nullable Object] */;
short int var28 /* : Bool */;
val* var29 /* : nullable Object */;
val* var_p /* var p: FlowContext */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : Set[Variable] */;
val* var35 /* : Set[Variable] */;
short int var36 /* : Bool */;
var_variable = p0;
{
{ /* Inline local_var_init#FlowContext#set_vars (self) on <self:FlowContext> */
var3 = self->attrs[COLOR_local_var_init__FlowContext___set_vars].val; /* _set_vars on <self:FlowContext> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _set_vars");
PRINT_ERROR(" (%s:%d)\n", "src/local_var_init.nit", 92);
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
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 192);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_previous = var6;
{
var9 = array__AbstractArrayRead__length(var_previous);
}
var10 = 0;
{
{ /* Inline kernel#Int#== (var9,var10) on <var9:Int> */
var14 = var9 == var10;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
if (var11){
var15 = 0;
var = var15;
goto RET_LABEL;
} else {
}
{
var16 = array__AbstractArrayRead__length(var_previous);
}
var17 = 1;
{
{ /* Inline kernel#Int#== (var16,var17) on <var16:Int> */
var21 = var16 == var17;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var18 = var19;
}
if (var18){
{
var22 = abstract_collection__SequenceRead__first(var_previous);
}
{
var23 = local_var_init__FlowContext__is_variable_set(var22, var_variable);
}
var = var23;
goto RET_LABEL;
} else {
}
{
{ /* Inline flow#FlowContext#previous (self) on <self:FlowContext> */
var26 = self->attrs[COLOR_flow__FlowContext___previous].val; /* _previous on <self:FlowContext> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _previous");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 192);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
var27 = array__AbstractArrayRead__iterator(var24);
}
for(;;) {
{
var28 = array__ArrayIterator__is_ok(var27);
}
if(!var28) break;
{
var29 = array__ArrayIterator__item(var27);
}
var_p = var29;
{
var30 = local_var_init__FlowContext__is_variable_set(var_p, var_variable);
}
var31 = !var30;
if (var31){
var32 = 0;
var = var32;
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var27); /* Direct call array#ArrayIterator#next on <var27:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
{
{ /* Inline local_var_init#FlowContext#set_vars (self) on <self:FlowContext> */
var35 = self->attrs[COLOR_local_var_init__FlowContext___set_vars].val; /* _set_vars on <self:FlowContext> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _set_vars");
PRINT_ERROR(" (%s:%d)\n", "src/local_var_init.nit", 92);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
((void (*)(val*, val*))(var33->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var33, var_variable) /* add on <var33:Set[Variable]>*/;
}
var36 = 1;
var = var36;
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
val* var1 /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable Variable */;
val* var10 /* : nullable Variable */;
var_v = p0;
{
((void (*)(val*, val*))(self->class->vft[COLOR_local_var_init__AVardeclExpr__accept_local_var_visitor]))(self, p0) /* accept_local_var_visitor on <self:AVardeclExpr>*/;
}
{
var = parser_nodes__AVardeclExpr__n_expr(self);
}
var1 = NULL;
if (var == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var,var1) on <var:nullable AExpr> */
var_other = var1;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:nullable AExpr(AExpr)> */
var7 = var == var_other;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
{
{ /* Inline scope#AVardeclExpr#variable (self) on <self:AVardeclExpr> */
var10 = self->attrs[COLOR_scope__AVardeclExpr___variable].val; /* _variable on <self:AVardeclExpr> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
local_var_init__LocalVarInitVisitor__mark_is_unset(var_v, self, var8); /* Direct call local_var_init#LocalVarInitVisitor#mark_is_unset on <var_v:LocalVarInitVisitor>*/
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
