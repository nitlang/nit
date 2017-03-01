#include "nitc__local_var_init.sep.0.h"
/* method local_var_init$ToolContext$local_var_init_phase for (self: ToolContext): Phase */
val* nitc__local_var_init___ToolContext___local_var_init_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nitc__local_var_init__ToolContext___local_var_init_phase].val; /* _local_var_init_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _local_var_init_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__local_var_init, 24);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method local_var_init$LocalVarInitPhase$process_npropdef for (self: LocalVarInitPhase, APropdef) */
void nitc__local_var_init___nitc__local_var_init__LocalVarInitPhase___nitc__phase__Phase__process_npropdef(val* self, val* p0) {
val* var_npropdef /* var npropdef: APropdef */;
val* var /* : ToolContext */;
val* var2 /* : ToolContext */;
var_npropdef = p0;
{
{ /* Inline phase$Phase$toolcontext (self) on <self:LocalVarInitPhase> */
var2 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:LocalVarInitPhase> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 210);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc__local_var_init___APropdef___do_local_var_init(var_npropdef, var); /* Direct call local_var_init$APropdef$do_local_var_init on <var_npropdef:APropdef>*/
}
RET_LABEL:;
}
/* method local_var_init$APropdef$do_local_var_init for (self: APropdef, ToolContext) */
void nitc__local_var_init___APropdef___do_local_var_init(val* self, val* p0) {
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var /* : LocalVarInitVisitor */;
val* var_v /* var v: LocalVarInitVisitor */;
var_toolcontext = p0;
var = NEW_nitc__local_var_init__LocalVarInitVisitor(&type_nitc__local_var_init__LocalVarInitVisitor);
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nitc__local_var_init__LocalVarInitVisitor__toolcontext_61d]))(var, var_toolcontext); /* toolcontext= on <var:LocalVarInitVisitor>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__init]))(var); /* init on <var:LocalVarInitVisitor>*/
}
var_v = var;
{
nitc___nitc__Visitor___enter_visit(var_v, self); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:LocalVarInitVisitor>*/
}
RET_LABEL:;
}
/* method local_var_init$LocalVarInitVisitor$toolcontext for (self: LocalVarInitVisitor): ToolContext */
val* nitc__local_var_init___nitc__local_var_init__LocalVarInitVisitor___toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_nitc__local_var_init__LocalVarInitVisitor___toolcontext].val; /* _toolcontext on <self:LocalVarInitVisitor> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__local_var_init, 46);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method local_var_init$LocalVarInitVisitor$toolcontext= for (self: LocalVarInitVisitor, ToolContext) */
void nitc__local_var_init___nitc__local_var_init__LocalVarInitVisitor___toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__local_var_init__LocalVarInitVisitor___toolcontext].val = p0; /* _toolcontext on <self:LocalVarInitVisitor> */
RET_LABEL:;
}
/* method local_var_init$LocalVarInitVisitor$maybe_unset_vars for (self: LocalVarInitVisitor): Set[Variable] */
val* nitc__local_var_init___nitc__local_var_init__LocalVarInitVisitor___maybe_unset_vars(val* self) {
val* var /* : Set[Variable] */;
val* var1 /* : Set[Variable] */;
var1 = self->attrs[COLOR_nitc__local_var_init__LocalVarInitVisitor___maybe_unset_vars].val; /* _maybe_unset_vars on <self:LocalVarInitVisitor> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _maybe_unset_vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__local_var_init, 48);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method local_var_init$LocalVarInitVisitor$mark_is_unset for (self: LocalVarInitVisitor, AExpr, nullable Variable) */
void nitc__local_var_init___nitc__local_var_init__LocalVarInitVisitor___mark_is_unset(val* self, val* p0, val* p1) {
val* var_node /* var node: AExpr */;
val* var_variable /* var variable: nullable Variable */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : Set[Variable] */;
val* var7 /* : Set[Variable] */;
var_node = p0;
var_variable = p1;
if (var_variable == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_variable,((val*)NULL)) on <var_variable:nullable Variable> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_variable->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_variable, var_other); /* == on <var_variable:nullable Variable(Variable)>*/
}
var4 = !var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
}
if (unlikely(!var)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__local_var_init, 53);
fatal_exit(1);
}
{
{ /* Inline local_var_init$LocalVarInitVisitor$maybe_unset_vars (self) on <self:LocalVarInitVisitor> */
var7 = self->attrs[COLOR_nitc__local_var_init__LocalVarInitVisitor___maybe_unset_vars].val; /* _maybe_unset_vars on <self:LocalVarInitVisitor> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _maybe_unset_vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__local_var_init, 48);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
((void(*)(val* self, val* p0))((((long)var5&3)?class_info[((long)var5&3)]:var5->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var5, var_variable); /* add on <var5:Set[Variable]>*/
}
RET_LABEL:;
}
/* method local_var_init$LocalVarInitVisitor$mark_is_set for (self: LocalVarInitVisitor, AExpr, nullable Variable) */
void nitc__local_var_init___nitc__local_var_init__LocalVarInitVisitor___mark_is_set(val* self, val* p0, val* p1) {
val* var_node /* var node: AExpr */;
val* var_variable /* var variable: nullable Variable */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : Set[Variable] */;
val* var7 /* : Set[Variable] */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable FlowContext */;
val* var12 /* : nullable FlowContext */;
val* var_flow /* var flow: FlowContext */;
val* var13 /* : Set[Variable] */;
val* var15 /* : Set[Variable] */;
var_node = p0;
var_variable = p1;
if (var_variable == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_variable,((val*)NULL)) on <var_variable:nullable Variable> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_variable->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_variable, var_other); /* == on <var_variable:nullable Variable(Variable)>*/
}
var4 = !var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
}
if (unlikely(!var)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__local_var_init, 59);
fatal_exit(1);
}
{
{ /* Inline local_var_init$LocalVarInitVisitor$maybe_unset_vars (self) on <self:LocalVarInitVisitor> */
var7 = self->attrs[COLOR_nitc__local_var_init__LocalVarInitVisitor___maybe_unset_vars].val; /* _maybe_unset_vars on <self:LocalVarInitVisitor> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _maybe_unset_vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__local_var_init, 48);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = ((short int(*)(val* self, val* p0))((((long)var5&3)?class_info[((long)var5&3)]:var5->class)->vft[COLOR_core__abstract_collection__Collection__has]))(var5, var_variable); /* has on <var5:Set[Variable]>*/
}
var9 = !var8;
if (var9){
goto RET_LABEL;
} else {
}
{
{ /* Inline flow$AExpr$after_flow_context (var_node) on <var_node:AExpr> */
var12 = var_node->attrs[COLOR_nitc__flow__AExpr___after_flow_context].val; /* _after_flow_context on <var_node:AExpr> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__local_var_init, 62);
fatal_exit(1);
}
var_flow = var10;
{
{ /* Inline local_var_init$FlowContext$set_vars (var_flow) on <var_flow:FlowContext> */
var15 = var_flow->attrs[COLOR_nitc__local_var_init__FlowContext___set_vars].val; /* _set_vars on <var_flow:FlowContext> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _set_vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__local_var_init, 86);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
((void(*)(val* self, val* p0))((((long)var13&3)?class_info[((long)var13&3)]:var13->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var13, var_variable); /* add on <var13:Set[Variable]>*/
}
RET_LABEL:;
}
/* method local_var_init$LocalVarInitVisitor$check_is_set for (self: LocalVarInitVisitor, AExpr, nullable Variable) */
void nitc__local_var_init___nitc__local_var_init__LocalVarInitVisitor___check_is_set(val* self, val* p0, val* p1) {
val* var_node /* var node: AExpr */;
val* var_variable /* var variable: nullable Variable */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : Set[Variable] */;
val* var7 /* : Set[Variable] */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable FlowContext */;
val* var12 /* : nullable FlowContext */;
val* var_flow /* var flow: FlowContext */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : ToolContext */;
val* var17 /* : ToolContext */;
val* var18 /* : Location */;
val* var19 /* : NativeArray[String] */;
static val* varonce;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : CString */;
val* var23 /* : String */;
val* var24 /* : nullable Int */;
val* var25 /* : nullable Int */;
val* var26 /* : nullable Bool */;
val* var27 /* : nullable Bool */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : CString */;
val* var31 /* : String */;
val* var32 /* : nullable Int */;
val* var33 /* : nullable Int */;
val* var34 /* : nullable Bool */;
val* var35 /* : nullable Bool */;
val* var36 /* : String */;
val* var37 /* : String */;
val* var38 /* : Message */;
val* var39 /* : Set[Variable] */;
val* var41 /* : Set[Variable] */;
var_node = p0;
var_variable = p1;
if (var_variable == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_variable,((val*)NULL)) on <var_variable:nullable Variable> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_variable->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_variable, var_other); /* == on <var_variable:nullable Variable(Variable)>*/
}
var4 = !var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
}
if (unlikely(!var)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__local_var_init, 68);
fatal_exit(1);
}
{
{ /* Inline local_var_init$LocalVarInitVisitor$maybe_unset_vars (self) on <self:LocalVarInitVisitor> */
var7 = self->attrs[COLOR_nitc__local_var_init__LocalVarInitVisitor___maybe_unset_vars].val; /* _maybe_unset_vars on <self:LocalVarInitVisitor> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _maybe_unset_vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__local_var_init, 48);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = ((short int(*)(val* self, val* p0))((((long)var5&3)?class_info[((long)var5&3)]:var5->class)->vft[COLOR_core__abstract_collection__Collection__has]))(var5, var_variable); /* has on <var5:Set[Variable]>*/
}
var9 = !var8;
if (var9){
goto RET_LABEL;
} else {
}
{
{ /* Inline flow$AExpr$after_flow_context (var_node) on <var_node:AExpr> */
var12 = var_node->attrs[COLOR_nitc__flow__AExpr___after_flow_context].val; /* _after_flow_context on <var_node:AExpr> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__local_var_init, 71);
fatal_exit(1);
}
var_flow = var10;
{
var13 = nitc__local_var_init___FlowContext___is_variable_set(var_flow, var_variable);
}
var14 = !var13;
if (var14){
{
{ /* Inline local_var_init$LocalVarInitVisitor$toolcontext (self) on <self:LocalVarInitVisitor> */
var17 = self->attrs[COLOR_nitc__local_var_init__LocalVarInitVisitor___toolcontext].val; /* _toolcontext on <self:LocalVarInitVisitor> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__local_var_init, 46);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = nitc___nitc__ANode___hot_location(var_node);
}
if (unlikely(varonce==NULL)) {
var19 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "Error: possibly unset variable `";
var24 = (val*)(32l<<2|1);
var25 = (val*)(32l<<2|1);
var26 = (val*)((long)(0)<<2|3);
var27 = (val*)((long)(0)<<2|3);
var23 = core__flat___CString___to_s_unsafe(var22, var24, var25, var26, var27);
var21 = var23;
varonce20 = var21;
}
((struct instance_core__NativeArray*)var19)->values[0]=var21;
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "`.";
var32 = (val*)(2l<<2|1);
var33 = (val*)(2l<<2|1);
var34 = (val*)((long)(0)<<2|3);
var35 = (val*)((long)(0)<<2|3);
var31 = core__flat___CString___to_s_unsafe(var30, var32, var33, var34, var35);
var29 = var31;
varonce28 = var29;
}
((struct instance_core__NativeArray*)var19)->values[2]=var29;
} else {
var19 = varonce;
varonce = NULL;
}
{
var36 = ((val*(*)(val* self))(var_variable->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_variable); /* to_s on <var_variable:nullable Variable(Variable)>*/
}
((struct instance_core__NativeArray*)var19)->values[1]=var36;
{
var37 = ((val*(*)(val* self))(var19->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var19); /* native_to_s on <var19:NativeArray[String]>*/
}
varonce = var19;
{
var38 = nitc___nitc__ToolContext___error(var15, var18, var37);
}
{
{ /* Inline local_var_init$LocalVarInitVisitor$maybe_unset_vars (self) on <self:LocalVarInitVisitor> */
var41 = self->attrs[COLOR_nitc__local_var_init__LocalVarInitVisitor___maybe_unset_vars].val; /* _maybe_unset_vars on <self:LocalVarInitVisitor> */
if (unlikely(var41 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _maybe_unset_vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__local_var_init, 48);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
((void(*)(val* self, val* p0))((((long)var39&3)?class_info[((long)var39&3)]:var39->class)->vft[COLOR_core__abstract_collection__RemovableCollection__remove]))(var39, var_variable); /* remove on <var39:Set[Variable]>*/
}
} else {
}
RET_LABEL:;
}
/* method local_var_init$LocalVarInitVisitor$visit for (self: LocalVarInitVisitor, ANode) */
void nitc__local_var_init___nitc__local_var_init__LocalVarInitVisitor___nitc__parser_nodes__Visitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
var_n = p0;
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nitc__local_var_init__ANode__accept_local_var_visitor]))(var_n, self); /* accept_local_var_visitor on <var_n:ANode>*/
}
RET_LABEL:;
}
/* method local_var_init$LocalVarInitVisitor$init for (self: LocalVarInitVisitor) */
void nitc__local_var_init___nitc__local_var_init__LocalVarInitVisitor___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc__local_var_init___nitc__local_var_init__LocalVarInitVisitor___core__kernel__Object__init]))(self); /* init on <self:LocalVarInitVisitor>*/
}
RET_LABEL:;
}
/* method local_var_init$FlowContext$set_vars for (self: FlowContext): Set[Variable] */
val* nitc__local_var_init___FlowContext___set_vars(val* self) {
val* var /* : Set[Variable] */;
val* var1 /* : Set[Variable] */;
var1 = self->attrs[COLOR_nitc__local_var_init__FlowContext___set_vars].val; /* _set_vars on <self:FlowContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _set_vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__local_var_init, 86);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method local_var_init$FlowContext$is_variable_set for (self: FlowContext, Variable): Bool */
short int nitc__local_var_init___FlowContext___is_variable_set(val* self, val* p0) {
short int var /* : Bool */;
val* var_variable /* var variable: Variable */;
val* var1 /* : Set[Variable] */;
val* var3 /* : Set[Variable] */;
short int var4 /* : Bool */;
val* var5 /* : Array[FlowContext] */;
val* var7 /* : Array[FlowContext] */;
val* var_previous /* var previous: Array[FlowContext] */;
long var8 /* : Int */;
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
long var14 /* : Int */;
long var16 /* : Int */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : nullable Object */;
short int var21 /* : Bool */;
val* var22 /* : Array[FlowContext] */;
val* var24 /* : Array[FlowContext] */;
val* var_ /* var : Array[FlowContext] */;
val* var25 /* : IndexedIterator[nullable Object] */;
val* var_26 /* var : IndexedIterator[FlowContext] */;
short int var27 /* : Bool */;
val* var28 /* : nullable Object */;
val* var_p /* var p: FlowContext */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
val* var31 /* : Set[Variable] */;
val* var33 /* : Set[Variable] */;
var_variable = p0;
{
{ /* Inline local_var_init$FlowContext$set_vars (self) on <self:FlowContext> */
var3 = self->attrs[COLOR_nitc__local_var_init__FlowContext___set_vars].val; /* _set_vars on <self:FlowContext> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _set_vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__local_var_init, 86);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((short int(*)(val* self, val* p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__Collection__has]))(var1, var_variable); /* has on <var1:Set[Variable]>*/
}
if (var4){
var = 1;
goto RET_LABEL;
} else {
}
{
{ /* Inline flow$FlowContext$previous (self) on <self:FlowContext> */
var7 = self->attrs[COLOR_nitc__flow__FlowContext___previous].val; /* _previous on <self:FlowContext> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _previous");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 189);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_previous = var5;
{
{ /* Inline array$AbstractArrayRead$length (var_previous) on <var_previous:Array[FlowContext]> */
var10 = var_previous->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_previous:Array[FlowContext]> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var8,0l) on <var8:Int> */
var13 = var8 == 0l;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline array$AbstractArrayRead$length (var_previous) on <var_previous:Array[FlowContext]> */
var16 = var_previous->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_previous:Array[FlowContext]> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var14,1l) on <var14:Int> */
var19 = var14 == 1l;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
if (var17){
{
var20 = core___core__SequenceRead___Collection__first(var_previous);
}
{
var21 = nitc__local_var_init___FlowContext___is_variable_set(var20, var_variable);
}
var = var21;
goto RET_LABEL;
} else {
}
{
{ /* Inline flow$FlowContext$previous (self) on <self:FlowContext> */
var24 = self->attrs[COLOR_nitc__flow__FlowContext___previous].val; /* _previous on <self:FlowContext> */
if (unlikely(var24 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _previous");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 189);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
var_ = var22;
{
var25 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_26 = var25;
for(;;) {
{
var27 = ((short int(*)(val* self))((((long)var_26&3)?class_info[((long)var_26&3)]:var_26->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_26); /* is_ok on <var_26:IndexedIterator[FlowContext]>*/
}
if (var27){
} else {
goto BREAK_label;
}
{
var28 = ((val*(*)(val* self))((((long)var_26&3)?class_info[((long)var_26&3)]:var_26->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_26); /* item on <var_26:IndexedIterator[FlowContext]>*/
}
var_p = var28;
{
var29 = nitc__local_var_init___FlowContext___is_variable_set(var_p, var_variable);
}
var30 = !var29;
if (var30){
var = 0;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_26&3)?class_info[((long)var_26&3)]:var_26->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_26); /* next on <var_26:IndexedIterator[FlowContext]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_26&3)?class_info[((long)var_26&3)]:var_26->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_26); /* finish on <var_26:IndexedIterator[FlowContext]>*/
}
{
{ /* Inline local_var_init$FlowContext$set_vars (self) on <self:FlowContext> */
var33 = self->attrs[COLOR_nitc__local_var_init__FlowContext___set_vars].val; /* _set_vars on <self:FlowContext> */
if (unlikely(var33 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _set_vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__local_var_init, 86);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
((void(*)(val* self, val* p0))((((long)var31&3)?class_info[((long)var31&3)]:var31->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var31, var_variable); /* add on <var31:Set[Variable]>*/
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method local_var_init$ANode$accept_local_var_visitor for (self: ANode, LocalVarInitVisitor) */
void nitc__local_var_init___ANode___accept_local_var_visitor(val* self, val* p0) {
val* var_v /* var v: LocalVarInitVisitor */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__parser_nodes__ANode__visit_all]))(self, var_v); /* visit_all on <self:ANode>*/
}
RET_LABEL:;
}
/* method local_var_init$AVardeclExpr$accept_local_var_visitor for (self: AVardeclExpr, LocalVarInitVisitor) */
void nitc__local_var_init___AVardeclExpr___ANode__accept_local_var_visitor(val* self, val* p0) {
val* var_v /* var v: LocalVarInitVisitor */;
val* var /* : nullable AExpr */;
val* var2 /* : nullable AExpr */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable Variable */;
val* var11 /* : nullable Variable */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__local_var_init___AVardeclExpr___ANode__accept_local_var_visitor]))(self, p0); /* accept_local_var_visitor on <self:AVardeclExpr>*/
}
{
{ /* Inline parser_nodes$AVardeclExpr$n_expr (self) on <self:AVardeclExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AVardeclExpr___n_expr].val; /* _n_expr on <self:AVardeclExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var,((val*)NULL)) on <var:nullable AExpr> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:nullable AExpr(AExpr)> */
var8 = var == var_other;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
{
{ /* Inline scope$AVardeclExpr$variable (self) on <self:AVardeclExpr> */
var11 = self->attrs[COLOR_nitc__scope__AVardeclExpr___variable].val; /* _variable on <self:AVardeclExpr> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
nitc__local_var_init___nitc__local_var_init__LocalVarInitVisitor___mark_is_unset(var_v, self, var9); /* Direct call local_var_init$LocalVarInitVisitor$mark_is_unset on <var_v:LocalVarInitVisitor>*/
}
} else {
}
RET_LABEL:;
}
/* method local_var_init$AVarExpr$accept_local_var_visitor for (self: AVarExpr, LocalVarInitVisitor) */
void nitc__local_var_init___AVarExpr___ANode__accept_local_var_visitor(val* self, val* p0) {
val* var_v /* var v: LocalVarInitVisitor */;
val* var /* : nullable Variable */;
val* var2 /* : nullable Variable */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__local_var_init___AVarExpr___ANode__accept_local_var_visitor]))(self, p0); /* accept_local_var_visitor on <self:AVarExpr>*/
}
{
{ /* Inline scope$AVarFormExpr$variable (self) on <self:AVarExpr> */
var2 = self->attrs[COLOR_nitc__scope__AVarFormExpr___variable].val; /* _variable on <self:AVarExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc__local_var_init___nitc__local_var_init__LocalVarInitVisitor___check_is_set(var_v, self, var); /* Direct call local_var_init$LocalVarInitVisitor$check_is_set on <var_v:LocalVarInitVisitor>*/
}
RET_LABEL:;
}
/* method local_var_init$AVarAssignExpr$accept_local_var_visitor for (self: AVarAssignExpr, LocalVarInitVisitor) */
void nitc__local_var_init___AVarAssignExpr___ANode__accept_local_var_visitor(val* self, val* p0) {
val* var_v /* var v: LocalVarInitVisitor */;
val* var /* : nullable Variable */;
val* var2 /* : nullable Variable */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__local_var_init___AVarAssignExpr___ANode__accept_local_var_visitor]))(self, p0); /* accept_local_var_visitor on <self:AVarAssignExpr>*/
}
{
{ /* Inline scope$AVarFormExpr$variable (self) on <self:AVarAssignExpr> */
var2 = self->attrs[COLOR_nitc__scope__AVarFormExpr___variable].val; /* _variable on <self:AVarAssignExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc__local_var_init___nitc__local_var_init__LocalVarInitVisitor___mark_is_set(var_v, self, var); /* Direct call local_var_init$LocalVarInitVisitor$mark_is_set on <var_v:LocalVarInitVisitor>*/
}
RET_LABEL:;
}
/* method local_var_init$AVarReassignExpr$accept_local_var_visitor for (self: AVarReassignExpr, LocalVarInitVisitor) */
void nitc__local_var_init___AVarReassignExpr___ANode__accept_local_var_visitor(val* self, val* p0) {
val* var_v /* var v: LocalVarInitVisitor */;
val* var /* : nullable Variable */;
val* var2 /* : nullable Variable */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__local_var_init___AVarReassignExpr___ANode__accept_local_var_visitor]))(self, p0); /* accept_local_var_visitor on <self:AVarReassignExpr>*/
}
{
{ /* Inline scope$AVarFormExpr$variable (self) on <self:AVarReassignExpr> */
var2 = self->attrs[COLOR_nitc__scope__AVarFormExpr___variable].val; /* _variable on <self:AVarReassignExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc__local_var_init___nitc__local_var_init__LocalVarInitVisitor___check_is_set(var_v, self, var); /* Direct call local_var_init$LocalVarInitVisitor$check_is_set on <var_v:LocalVarInitVisitor>*/
}
RET_LABEL:;
}
