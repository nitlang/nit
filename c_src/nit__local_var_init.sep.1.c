#include "nit__local_var_init.sep.0.h"
/* method local_var_init#ToolContext#local_var_init_phase for (self: ToolContext): Phase */
val* nit__local_var_init___ToolContext___local_var_init_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nit__local_var_init__ToolContext___local_var_init_phase].val; /* _local_var_init_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _local_var_init_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__local_var_init, 24);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method local_var_init#LocalVarInitPhase#process_npropdef for (self: LocalVarInitPhase, APropdef) */
void nit__local_var_init___nit__local_var_init__LocalVarInitPhase___nit__phase__Phase__process_npropdef(val* self, val* p0) {
val* var_npropdef /* var npropdef: APropdef */;
val* var /* : ToolContext */;
val* var2 /* : ToolContext */;
var_npropdef = p0;
{
{ /* Inline phase#Phase#toolcontext (self) on <self:LocalVarInitPhase> */
var2 = self->attrs[COLOR_nit__phase__Phase___toolcontext].val; /* _toolcontext on <self:LocalVarInitPhase> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 201);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nit__local_var_init___APropdef___do_local_var_init(var_npropdef, var); /* Direct call local_var_init#APropdef#do_local_var_init on <var_npropdef:APropdef>*/
}
RET_LABEL:;
}
/* method local_var_init#APropdef#do_local_var_init for (self: APropdef, ToolContext) */
void nit__local_var_init___APropdef___do_local_var_init(val* self, val* p0) {
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var /* : LocalVarInitVisitor */;
val* var_v /* var v: LocalVarInitVisitor */;
var_toolcontext = p0;
var = NEW_nit__local_var_init__LocalVarInitVisitor(&type_nit__local_var_init__LocalVarInitVisitor);
{
((void (*)(val* self, val* p0))(var->class->vft[COLOR_nit__local_var_init__LocalVarInitVisitor__toolcontext_61d]))(var, var_toolcontext) /* toolcontext= on <var:LocalVarInitVisitor>*/;
}
{
((void (*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var) /* init on <var:LocalVarInitVisitor>*/;
}
var_v = var;
{
nit___nit__Visitor___enter_visit(var_v, self); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:LocalVarInitVisitor>*/
}
RET_LABEL:;
}
/* method local_var_init#LocalVarInitVisitor#toolcontext for (self: LocalVarInitVisitor): ToolContext */
val* nit__local_var_init___nit__local_var_init__LocalVarInitVisitor___toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_nit__local_var_init__LocalVarInitVisitor___toolcontext].val; /* _toolcontext on <self:LocalVarInitVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__local_var_init, 46);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method local_var_init#LocalVarInitVisitor#toolcontext= for (self: LocalVarInitVisitor, ToolContext) */
void nit__local_var_init___nit__local_var_init__LocalVarInitVisitor___toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_nit__local_var_init__LocalVarInitVisitor___toolcontext].val = p0; /* _toolcontext on <self:LocalVarInitVisitor> */
RET_LABEL:;
}
/* method local_var_init#LocalVarInitVisitor#maybe_unset_vars for (self: LocalVarInitVisitor): Set[Variable] */
val* nit__local_var_init___nit__local_var_init__LocalVarInitVisitor___maybe_unset_vars(val* self) {
val* var /* : Set[Variable] */;
val* var1 /* : Set[Variable] */;
var1 = self->attrs[COLOR_nit__local_var_init__LocalVarInitVisitor___maybe_unset_vars].val; /* _maybe_unset_vars on <self:LocalVarInitVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _maybe_unset_vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__local_var_init, 48);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method local_var_init#LocalVarInitVisitor#mark_is_unset for (self: LocalVarInitVisitor, AExpr, nullable Variable) */
void nit__local_var_init___nit__local_var_init__LocalVarInitVisitor___mark_is_unset(val* self, val* p0, val* p1) {
val* var_node /* var node: AExpr */;
val* var_variable /* var variable: nullable Variable */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : Set[Variable] */;
val* var8 /* : Set[Variable] */;
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
var4 = ((short int (*)(val* self, val* p0))(var_variable->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_variable, var_other) /* == on <var_variable:nullable Variable(Variable)>*/;
}
var5 = !var4;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__local_var_init, 53);
show_backtrace(1);
}
{
{ /* Inline local_var_init#LocalVarInitVisitor#maybe_unset_vars (self) on <self:LocalVarInitVisitor> */
var8 = self->attrs[COLOR_nit__local_var_init__LocalVarInitVisitor___maybe_unset_vars].val; /* _maybe_unset_vars on <self:LocalVarInitVisitor> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _maybe_unset_vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__local_var_init, 48);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
((void (*)(val* self, val* p0))(var6->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var6, var_variable) /* add on <var6:Set[Variable]>*/;
}
RET_LABEL:;
}
/* method local_var_init#LocalVarInitVisitor#mark_is_set for (self: LocalVarInitVisitor, AExpr, nullable Variable) */
void nit__local_var_init___nit__local_var_init__LocalVarInitVisitor___mark_is_set(val* self, val* p0, val* p1) {
val* var_node /* var node: AExpr */;
val* var_variable /* var variable: nullable Variable */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : Set[Variable] */;
val* var8 /* : Set[Variable] */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : nullable FlowContext */;
val* var13 /* : nullable FlowContext */;
val* var_flow /* var flow: FlowContext */;
val* var14 /* : Set[Variable] */;
val* var16 /* : Set[Variable] */;
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
var4 = ((short int (*)(val* self, val* p0))(var_variable->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_variable, var_other) /* == on <var_variable:nullable Variable(Variable)>*/;
}
var5 = !var4;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__local_var_init, 59);
show_backtrace(1);
}
{
{ /* Inline local_var_init#LocalVarInitVisitor#maybe_unset_vars (self) on <self:LocalVarInitVisitor> */
var8 = self->attrs[COLOR_nit__local_var_init__LocalVarInitVisitor___maybe_unset_vars].val; /* _maybe_unset_vars on <self:LocalVarInitVisitor> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _maybe_unset_vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__local_var_init, 48);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = ((short int (*)(val* self, val* p0))(var6->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var6, var_variable) /* has on <var6:Set[Variable]>*/;
}
var10 = !var9;
if (var10){
goto RET_LABEL;
} else {
}
{
{ /* Inline flow#AExpr#after_flow_context (var_node) on <var_node:AExpr> */
var13 = var_node->attrs[COLOR_nit__flow__AExpr___after_flow_context].val; /* _after_flow_context on <var_node:AExpr> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__local_var_init, 62);
show_backtrace(1);
}
var_flow = var11;
{
{ /* Inline local_var_init#FlowContext#set_vars (var_flow) on <var_flow:FlowContext> */
var16 = var_flow->attrs[COLOR_nit__local_var_init__FlowContext___set_vars].val; /* _set_vars on <var_flow:FlowContext> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _set_vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__local_var_init, 86);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
((void (*)(val* self, val* p0))(var14->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var14, var_variable) /* add on <var14:Set[Variable]>*/;
}
RET_LABEL:;
}
/* method local_var_init#LocalVarInitVisitor#check_is_set for (self: LocalVarInitVisitor, AExpr, nullable Variable) */
void nit__local_var_init___nit__local_var_init__LocalVarInitVisitor___check_is_set(val* self, val* p0, val* p1) {
val* var_node /* var node: AExpr */;
val* var_variable /* var variable: nullable Variable */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : Set[Variable] */;
val* var8 /* : Set[Variable] */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : nullable FlowContext */;
val* var13 /* : nullable FlowContext */;
val* var_flow /* var flow: FlowContext */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : ToolContext */;
val* var18 /* : ToolContext */;
val* var19 /* : Location */;
static val* varonce;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : FlatString */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : FlatString */;
val* var29 /* : Array[Object] */;
long var30 /* : Int */;
val* var31 /* : NativeArray[Object] */;
val* var32 /* : String */;
val* var33 /* : Set[Variable] */;
val* var35 /* : Set[Variable] */;
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
var4 = ((short int (*)(val* self, val* p0))(var_variable->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_variable, var_other) /* == on <var_variable:nullable Variable(Variable)>*/;
}
var5 = !var4;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__local_var_init, 68);
show_backtrace(1);
}
{
{ /* Inline local_var_init#LocalVarInitVisitor#maybe_unset_vars (self) on <self:LocalVarInitVisitor> */
var8 = self->attrs[COLOR_nit__local_var_init__LocalVarInitVisitor___maybe_unset_vars].val; /* _maybe_unset_vars on <self:LocalVarInitVisitor> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _maybe_unset_vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__local_var_init, 48);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = ((short int (*)(val* self, val* p0))(var6->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var6, var_variable) /* has on <var6:Set[Variable]>*/;
}
var10 = !var9;
if (var10){
goto RET_LABEL;
} else {
}
{
{ /* Inline flow#AExpr#after_flow_context (var_node) on <var_node:AExpr> */
var13 = var_node->attrs[COLOR_nit__flow__AExpr___after_flow_context].val; /* _after_flow_context on <var_node:AExpr> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__local_var_init, 71);
show_backtrace(1);
}
var_flow = var11;
{
var14 = nit__local_var_init___FlowContext___is_variable_set(var_flow, var_variable);
}
var15 = !var14;
if (var15){
{
{ /* Inline local_var_init#LocalVarInitVisitor#toolcontext (self) on <self:LocalVarInitVisitor> */
var18 = self->attrs[COLOR_nit__local_var_init__LocalVarInitVisitor___toolcontext].val; /* _toolcontext on <self:LocalVarInitVisitor> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__local_var_init, 46);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = nit___nit__ANode___hot_location(var_node);
}
if (varonce) {
var20 = varonce;
} else {
var21 = "Error: variable \'";
var22 = 17;
var23 = standard___standard__NativeString___to_s_with_length(var21, var22);
var20 = var23;
varonce = var20;
}
if (varonce24) {
var25 = varonce24;
} else {
var26 = "\' is possibly unset.";
var27 = 20;
var28 = standard___standard__NativeString___to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
var29 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var29 = array_instance Array[Object] */
var30 = 3;
var31 = NEW_standard__NativeArray(var30, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var31)->values[0] = (val*) var20;
((struct instance_standard__NativeArray*)var31)->values[1] = (val*) var_variable;
((struct instance_standard__NativeArray*)var31)->values[2] = (val*) var25;
{
((void (*)(val* self, val* p0, long p1))(var29->class->vft[COLOR_standard__array__Array__with_native]))(var29, var31, var30) /* with_native on <var29:Array[Object]>*/;
}
}
{
var32 = ((val* (*)(val* self))(var29->class->vft[COLOR_standard__string__Object__to_s]))(var29) /* to_s on <var29:Array[Object]>*/;
}
{
nit___nit__ToolContext___error(var16, var19, var32); /* Direct call toolcontext#ToolContext#error on <var16:ToolContext>*/
}
{
{ /* Inline local_var_init#LocalVarInitVisitor#maybe_unset_vars (self) on <self:LocalVarInitVisitor> */
var35 = self->attrs[COLOR_nit__local_var_init__LocalVarInitVisitor___maybe_unset_vars].val; /* _maybe_unset_vars on <self:LocalVarInitVisitor> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _maybe_unset_vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__local_var_init, 48);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
((void (*)(val* self, val* p0))(var33->class->vft[COLOR_standard__abstract_collection__RemovableCollection__remove]))(var33, var_variable) /* remove on <var33:Set[Variable]>*/;
}
} else {
}
RET_LABEL:;
}
/* method local_var_init#LocalVarInitVisitor#visit for (self: LocalVarInitVisitor, ANode) */
void nit__local_var_init___nit__local_var_init__LocalVarInitVisitor___nit__parser_nodes__Visitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
var_n = p0;
{
((void (*)(val* self, val* p0))(var_n->class->vft[COLOR_nit__local_var_init__ANode__accept_local_var_visitor]))(var_n, self) /* accept_local_var_visitor on <var_n:ANode>*/;
}
RET_LABEL:;
}
/* method local_var_init#LocalVarInitVisitor#init for (self: LocalVarInitVisitor) */
void nit__local_var_init___nit__local_var_init__LocalVarInitVisitor___standard__kernel__Object__init(val* self) {
{
((void (*)(val* self))(self->class->vft[COLOR_nit__local_var_init___nit__local_var_init__LocalVarInitVisitor___standard__kernel__Object__init]))(self) /* init on <self:LocalVarInitVisitor>*/;
}
RET_LABEL:;
}
/* method local_var_init#FlowContext#set_vars for (self: FlowContext): Set[Variable] */
val* nit__local_var_init___FlowContext___set_vars(val* self) {
val* var /* : Set[Variable] */;
val* var1 /* : Set[Variable] */;
var1 = self->attrs[COLOR_nit__local_var_init__FlowContext___set_vars].val; /* _set_vars on <self:FlowContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _set_vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__local_var_init, 86);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method local_var_init#FlowContext#is_variable_set for (self: FlowContext, Variable): Bool */
short int nit__local_var_init___FlowContext___is_variable_set(val* self, val* p0) {
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
short int var15 /* : Bool */;
short int var16 /* : Bool */;
long var17 /* : Int */;
long var19 /* : Int */;
long var20 /* : Int */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
val* var24 /* : nullable Object */;
short int var25 /* : Bool */;
val* var26 /* : Array[FlowContext] */;
val* var28 /* : Array[FlowContext] */;
val* var_ /* var : Array[FlowContext] */;
val* var29 /* : ArrayIterator[nullable Object] */;
val* var_30 /* var : ArrayIterator[FlowContext] */;
short int var31 /* : Bool */;
val* var32 /* : nullable Object */;
val* var_p /* var p: FlowContext */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
val* var37 /* : Set[Variable] */;
val* var39 /* : Set[Variable] */;
short int var40 /* : Bool */;
var_variable = p0;
{
{ /* Inline local_var_init#FlowContext#set_vars (self) on <self:FlowContext> */
var3 = self->attrs[COLOR_nit__local_var_init__FlowContext___set_vars].val; /* _set_vars on <self:FlowContext> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _set_vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__local_var_init, 86);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((short int (*)(val* self, val* p0))(var1->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var1, var_variable) /* has on <var1:Set[Variable]>*/;
}
if (var4){
var5 = 1;
var = var5;
goto RET_LABEL;
} else {
}
{
{ /* Inline flow#FlowContext#previous (self) on <self:FlowContext> */
var8 = self->attrs[COLOR_nit__flow__FlowContext___previous].val; /* _previous on <self:FlowContext> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _previous");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__flow, 188);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_previous = var6;
{
{ /* Inline array#AbstractArrayRead#length (var_previous) on <var_previous:Array[FlowContext]> */
var11 = var_previous->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_previous:Array[FlowContext]> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var12 = 0;
{
{ /* Inline kernel#Int#== (var9,var12) on <var9:Int> */
var15 = var9 == var12;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (var13){
var16 = 0;
var = var16;
goto RET_LABEL;
} else {
}
{
{ /* Inline array#AbstractArrayRead#length (var_previous) on <var_previous:Array[FlowContext]> */
var19 = var_previous->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_previous:Array[FlowContext]> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
var20 = 1;
{
{ /* Inline kernel#Int#== (var17,var20) on <var17:Int> */
var23 = var17 == var20;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (var21){
{
var24 = standard___standard__SequenceRead___Collection__first(var_previous);
}
{
var25 = nit__local_var_init___FlowContext___is_variable_set(var24, var_variable);
}
var = var25;
goto RET_LABEL;
} else {
}
{
{ /* Inline flow#FlowContext#previous (self) on <self:FlowContext> */
var28 = self->attrs[COLOR_nit__flow__FlowContext___previous].val; /* _previous on <self:FlowContext> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _previous");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__flow, 188);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
var_ = var26;
{
var29 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_30 = var29;
for(;;) {
{
var31 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_30);
}
if (var31){
{
var32 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_30);
}
var_p = var32;
{
var33 = nit__local_var_init___FlowContext___is_variable_set(var_p, var_variable);
}
var34 = !var33;
if (var34){
var35 = 0;
var = var35;
goto RET_LABEL;
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_30); /* Direct call array#ArrayIterator#next on <var_30:ArrayIterator[FlowContext]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_30) on <var_30:ArrayIterator[FlowContext]> */
RET_LABEL36:(void)0;
}
}
{
{ /* Inline local_var_init#FlowContext#set_vars (self) on <self:FlowContext> */
var39 = self->attrs[COLOR_nit__local_var_init__FlowContext___set_vars].val; /* _set_vars on <self:FlowContext> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _set_vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__local_var_init, 86);
show_backtrace(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
((void (*)(val* self, val* p0))(var37->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var37, var_variable) /* add on <var37:Set[Variable]>*/;
}
var40 = 1;
var = var40;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method local_var_init#ANode#accept_local_var_visitor for (self: ANode, LocalVarInitVisitor) */
void nit__local_var_init___ANode___accept_local_var_visitor(val* self, val* p0) {
val* var_v /* var v: LocalVarInitVisitor */;
var_v = p0;
{
((void (*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ANode__visit_all]))(self, var_v) /* visit_all on <self:ANode>*/;
}
RET_LABEL:;
}
/* method local_var_init#AVardeclExpr#accept_local_var_visitor for (self: AVardeclExpr, LocalVarInitVisitor) */
void nit__local_var_init___AVardeclExpr___ANode__accept_local_var_visitor(val* self, val* p0) {
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
((void (*)(val* self, val* p0))(self->class->vft[COLOR_nit__local_var_init___AVardeclExpr___ANode__accept_local_var_visitor]))(self, p0) /* accept_local_var_visitor on <self:AVardeclExpr>*/;
}
{
{ /* Inline parser_nodes#AVardeclExpr#n_expr (self) on <self:AVardeclExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_expr].val; /* _n_expr on <self:AVardeclExpr> */
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
var12 = self->attrs[COLOR_nit__scope__AVardeclExpr___variable].val; /* _variable on <self:AVardeclExpr> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
nit__local_var_init___nit__local_var_init__LocalVarInitVisitor___mark_is_unset(var_v, self, var10); /* Direct call local_var_init#LocalVarInitVisitor#mark_is_unset on <var_v:LocalVarInitVisitor>*/
}
} else {
}
RET_LABEL:;
}
/* method local_var_init#AVarExpr#accept_local_var_visitor for (self: AVarExpr, LocalVarInitVisitor) */
void nit__local_var_init___AVarExpr___ANode__accept_local_var_visitor(val* self, val* p0) {
val* var_v /* var v: LocalVarInitVisitor */;
val* var /* : nullable Variable */;
val* var2 /* : nullable Variable */;
var_v = p0;
{
((void (*)(val* self, val* p0))(self->class->vft[COLOR_nit__local_var_init___AVarExpr___ANode__accept_local_var_visitor]))(self, p0) /* accept_local_var_visitor on <self:AVarExpr>*/;
}
{
{ /* Inline scope#AVarFormExpr#variable (self) on <self:AVarExpr> */
var2 = self->attrs[COLOR_nit__scope__AVarFormExpr___variable].val; /* _variable on <self:AVarExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
nit__local_var_init___nit__local_var_init__LocalVarInitVisitor___check_is_set(var_v, self, var); /* Direct call local_var_init#LocalVarInitVisitor#check_is_set on <var_v:LocalVarInitVisitor>*/
}
RET_LABEL:;
}
/* method local_var_init#AVarAssignExpr#accept_local_var_visitor for (self: AVarAssignExpr, LocalVarInitVisitor) */
void nit__local_var_init___AVarAssignExpr___ANode__accept_local_var_visitor(val* self, val* p0) {
val* var_v /* var v: LocalVarInitVisitor */;
val* var /* : nullable Variable */;
val* var2 /* : nullable Variable */;
var_v = p0;
{
((void (*)(val* self, val* p0))(self->class->vft[COLOR_nit__local_var_init___AVarAssignExpr___ANode__accept_local_var_visitor]))(self, p0) /* accept_local_var_visitor on <self:AVarAssignExpr>*/;
}
{
{ /* Inline scope#AVarFormExpr#variable (self) on <self:AVarAssignExpr> */
var2 = self->attrs[COLOR_nit__scope__AVarFormExpr___variable].val; /* _variable on <self:AVarAssignExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
nit__local_var_init___nit__local_var_init__LocalVarInitVisitor___mark_is_set(var_v, self, var); /* Direct call local_var_init#LocalVarInitVisitor#mark_is_set on <var_v:LocalVarInitVisitor>*/
}
RET_LABEL:;
}
/* method local_var_init#AVarReassignExpr#accept_local_var_visitor for (self: AVarReassignExpr, LocalVarInitVisitor) */
void nit__local_var_init___AVarReassignExpr___ANode__accept_local_var_visitor(val* self, val* p0) {
val* var_v /* var v: LocalVarInitVisitor */;
val* var /* : nullable Variable */;
val* var2 /* : nullable Variable */;
var_v = p0;
{
((void (*)(val* self, val* p0))(self->class->vft[COLOR_nit__local_var_init___AVarReassignExpr___ANode__accept_local_var_visitor]))(self, p0) /* accept_local_var_visitor on <self:AVarReassignExpr>*/;
}
{
{ /* Inline scope#AVarFormExpr#variable (self) on <self:AVarReassignExpr> */
var2 = self->attrs[COLOR_nit__scope__AVarFormExpr___variable].val; /* _variable on <self:AVarReassignExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
nit__local_var_init___nit__local_var_init__LocalVarInitVisitor___check_is_set(var_v, self, var); /* Direct call local_var_init#LocalVarInitVisitor#check_is_set on <var_v:LocalVarInitVisitor>*/
}
RET_LABEL:;
}
