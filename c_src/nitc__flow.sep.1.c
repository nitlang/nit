#include "nitc__flow.sep.0.h"
/* method flow$ToolContext$flow_phase for (self: ToolContext): Phase */
val* nitc__flow___ToolContext___flow_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nitc__flow__ToolContext___flow_phase].val; /* _flow_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _flow_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 23);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flow$FlowPhase$process_npropdef for (self: FlowPhase, APropdef) */
void nitc__flow___nitc__flow__FlowPhase___nitc__phase__Phase__process_npropdef(val* self, val* p0) {
val* var_npropdef /* var npropdef: APropdef */;
val* var /* : ToolContext */;
val* var2 /* : ToolContext */;
var_npropdef = p0;
{
{ /* Inline phase$Phase$toolcontext (self) on <self:FlowPhase> */
var2 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:FlowPhase> */
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
nitc__flow___APropdef___do_flow(var_npropdef, var); /* Direct call flow$APropdef$do_flow on <var_npropdef:APropdef>*/
}
RET_LABEL:;
}
/* method flow$FlowVisitor$current_flow_context for (self: FlowVisitor): FlowContext */
val* nitc__flow___nitc__flow__FlowVisitor___current_flow_context(val* self) {
val* var /* : FlowContext */;
val* var1 /* : FlowContext */;
var1 = self->attrs[COLOR_nitc__flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <self:FlowVisitor> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 37);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flow$FlowVisitor$current_flow_context= for (self: FlowVisitor, FlowContext) */
void nitc__flow___nitc__flow__FlowVisitor___current_flow_context_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__flow__FlowVisitor___current_flow_context].val = p0; /* _current_flow_context on <self:FlowVisitor> */
RET_LABEL:;
}
/* method flow$FlowVisitor$toolcontext for (self: FlowVisitor): ToolContext */
val* nitc__flow___nitc__flow__FlowVisitor___toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_nitc__flow__FlowVisitor___toolcontext].val; /* _toolcontext on <self:FlowVisitor> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 39);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flow$FlowVisitor$toolcontext= for (self: FlowVisitor, ToolContext) */
void nitc__flow___nitc__flow__FlowVisitor___toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__flow__FlowVisitor___toolcontext].val = p0; /* _toolcontext on <self:FlowVisitor> */
RET_LABEL:;
}
/* method flow$FlowVisitor$init for (self: FlowVisitor) */
void nitc__flow___nitc__flow__FlowVisitor___core__kernel__Object__init(val* self) {
val* var /* : Array[FlowContext] */;
val* var2 /* : Array[FlowContext] */;
val* var3 /* : FlowContext */;
val* var5 /* : FlowContext */;
val* var6 /* : FlowContext */;
val* var8 /* : FlowContext */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc__flow___nitc__flow__FlowVisitor___core__kernel__Object__init]))(self); /* init on <self:FlowVisitor>*/
}
{
{ /* Inline flow$FlowVisitor$flows (self) on <self:FlowVisitor> */
var2 = self->attrs[COLOR_nitc__flow__FlowVisitor___flows].val; /* _flows on <self:FlowVisitor> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _flows");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 76);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline flow$FlowVisitor$current_flow_context (self) on <self:FlowVisitor> */
var5 = self->attrs[COLOR_nitc__flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <self:FlowVisitor> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 37);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var, var3); /* Direct call array$Array$add on <var:Array[FlowContext]>*/
}
{
{ /* Inline flow$FlowVisitor$current_flow_context (self) on <self:FlowVisitor> */
var8 = self->attrs[COLOR_nitc__flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <self:FlowVisitor> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 37);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline flow$FlowContext$is_start= (var6,1) on <var6:FlowContext> */
var6->attrs[COLOR_nitc__flow__FlowContext___is_start].s = 1; /* _is_start on <var6:FlowContext> */
RET_LABEL9:(void)0;
}
}
RET_LABEL:;
}
/* method flow$FlowVisitor$first for (self: FlowVisitor): nullable ANode */
val* nitc__flow___nitc__flow__FlowVisitor___first(val* self) {
val* var /* : nullable ANode */;
val* var1 /* : nullable ANode */;
var1 = self->attrs[COLOR_nitc__flow__FlowVisitor___first].val; /* _first on <self:FlowVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method flow$FlowVisitor$first= for (self: FlowVisitor, nullable ANode) */
void nitc__flow___nitc__flow__FlowVisitor___first_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__flow__FlowVisitor___first].val = p0; /* _first on <self:FlowVisitor> */
RET_LABEL:;
}
/* method flow$FlowVisitor$visit for (self: FlowVisitor, ANode) */
void nitc__flow___nitc__flow__FlowVisitor___nitc__parser_nodes__Visitor__visit(val* self, val* p0) {
val* var_node /* var node: ANode */;
val* var /* : nullable ANode */;
val* var2 /* : nullable ANode */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var10 /* : FlowContext */;
val* var12 /* : FlowContext */;
val* var13 /* : nullable ANode */;
val* var15 /* : nullable ANode */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : FlowContext */;
val* var24 /* : FlowContext */;
short int var26 /* : Bool */;
int cltype;
int idtype;
val* var27 /* : FlowContext */;
val* var29 /* : FlowContext */;
val* var_flow /* var flow: FlowContext */;
short int var31 /* : Bool */;
val* var32 /* : FlowContext */;
val* var34 /* : FlowContext */;
short int var35 /* : Bool */;
val* var_other37 /* var other: nullable Object */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var_ /* var : Bool */;
val* var40 /* : FlowContext */;
val* var42 /* : FlowContext */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
val* var47 /* : FlowContext */;
val* var48 /* : FlowContext */;
val* var50 /* : FlowContext */;
static val* varonce;
val* var51 /* : String */;
char* var52 /* : CString */;
val* var53 /* : String */;
val* var54 /* : nullable Int */;
val* var55 /* : nullable Int */;
val* var56 /* : nullable Bool */;
val* var57 /* : nullable Bool */;
val* var59 /* : nullable ANode */;
val* var61 /* : nullable ANode */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
short int var65 /* : Bool */;
short int var67 /* : Bool */;
var_node = p0;
{
{ /* Inline flow$FlowVisitor$first (self) on <self:FlowVisitor> */
var2 = self->attrs[COLOR_nitc__flow__FlowVisitor___first].val; /* _first on <self:FlowVisitor> */
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
{ /* Inline kernel$Object$== (var,((val*)NULL)) on <var:nullable ANode> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:nullable ANode(ANode)> */
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
{ /* Inline flow$FlowVisitor$first= (self,var_node) on <self:FlowVisitor> */
self->attrs[COLOR_nitc__flow__FlowVisitor___first].val = var_node; /* _first on <self:FlowVisitor> */
RET_LABEL9:(void)0;
}
}
} else {
}
{
{ /* Inline flow$FlowVisitor$current_flow_context (self) on <self:FlowVisitor> */
var12 = self->attrs[COLOR_nitc__flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <self:FlowVisitor> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 37);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline flow$FlowContext$node (var10) on <var10:FlowContext> */
var15 = var10->attrs[COLOR_nitc__flow__FlowContext___node].val; /* _node on <var10:FlowContext> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (var13 == NULL) {
var16 = 1; /* is null */
} else {
var16 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var13,((val*)NULL)) on <var13:nullable ANode> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var13,var_other) on <var13:nullable ANode(ANode)> */
var21 = var13 == var_other;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var16 = var17;
}
if (var16){
{
{ /* Inline flow$FlowVisitor$current_flow_context (self) on <self:FlowVisitor> */
var24 = self->attrs[COLOR_nitc__flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <self:FlowVisitor> */
if (unlikely(var24 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 37);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline flow$FlowContext$node= (var22,var_node) on <var22:FlowContext> */
var22->attrs[COLOR_nitc__flow__FlowContext___node].val = var_node; /* _node on <var22:FlowContext> */
RET_LABEL25:(void)0;
}
}
} else {
}
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nitc__flow__ANode__accept_flow_visitor]))(var_node, self); /* accept_flow_visitor on <var_node:ANode>*/
}
/* <var_node:ANode> isa AExpr */
cltype = type_nitc__AExpr.color;
idtype = type_nitc__AExpr.id;
if(cltype >= var_node->type->table_size) {
var26 = 0;
} else {
var26 = var_node->type->type_table[cltype] == idtype;
}
if (var26){
{
{ /* Inline flow$FlowVisitor$current_flow_context (self) on <self:FlowVisitor> */
var29 = self->attrs[COLOR_nitc__flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <self:FlowVisitor> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 37);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_flow = var27;
{
{ /* Inline flow$AExpr$after_flow_context= (var_node,var_flow) on <var_node:ANode(AExpr)> */
var_node->attrs[COLOR_nitc__flow__AExpr___after_flow_context].val = var_flow; /* _after_flow_context on <var_node:ANode(AExpr)> */
RET_LABEL30:(void)0;
}
}
{
{ /* Inline flow$FlowContext$when_true (var_flow) on <var_flow:FlowContext> */
var34 = var_flow->attrs[COLOR_nitc__flow__FlowContext___when_true].val; /* _when_true on <var_flow:FlowContext> */
if (unlikely(var34 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_true");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 225);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline kernel$Object$!= (var32,var_flow) on <var32:FlowContext> */
var_other37 = var_flow;
{
var38 = ((short int(*)(val* self, val* p0))(var32->class->vft[COLOR_core__kernel__Object___61d_61d]))(var32, var_other37); /* == on <var32:FlowContext>*/
}
var39 = !var38;
var35 = var39;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var_ = var35;
if (var35){
var31 = var_;
} else {
{
{ /* Inline flow$FlowContext$when_false (var_flow) on <var_flow:FlowContext> */
var42 = var_flow->attrs[COLOR_nitc__flow__FlowContext___when_false].val; /* _when_false on <var_flow:FlowContext> */
if (unlikely(var42 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_false");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 228);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline kernel$Object$!= (var40,var_flow) on <var40:FlowContext> */
var_other37 = var_flow;
{
var45 = ((short int(*)(val* self, val* p0))(var40->class->vft[COLOR_core__kernel__Object___61d_61d]))(var40, var_other37); /* == on <var40:FlowContext>*/
}
var46 = !var45;
var43 = var46;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
var31 = var43;
}
if (var31){
{
var47 = nitc__flow___nitc__flow__FlowVisitor___make_sub_flow(self);
}
{
{ /* Inline flow$FlowVisitor$current_flow_context (self) on <self:FlowVisitor> */
var50 = self->attrs[COLOR_nitc__flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <self:FlowVisitor> */
if (unlikely(var50 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 37);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
if (likely(varonce!=NULL)) {
var51 = varonce;
} else {
var52 = "AUTOSUB";
var54 = (val*)(7l<<2|1);
var55 = (val*)(7l<<2|1);
var56 = (val*)((long)(0)<<2|3);
var57 = (val*)((long)(0)<<2|3);
var53 = core__flat___CString___to_s_unsafe(var52, var54, var55, var56, var57);
var51 = var53;
varonce = var51;
}
{
{ /* Inline flow$FlowContext$name= (var48,var51) on <var48:FlowContext> */
var48->attrs[COLOR_nitc__flow__FlowContext___name].val = var51; /* _name on <var48:FlowContext> */
RET_LABEL58:(void)0;
}
}
} else {
}
} else {
}
{
{ /* Inline flow$FlowVisitor$first (self) on <self:FlowVisitor> */
var61 = self->attrs[COLOR_nitc__flow__FlowVisitor___first].val; /* _first on <self:FlowVisitor> */
var59 = var61;
RET_LABEL60:(void)0;
}
}
if (var59 == NULL) {
var62 = 0; /* <var_node:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var59,var_node) on <var59:nullable ANode> */
var_other = var_node;
{
{ /* Inline kernel$Object$is_same_instance (var59,var_other) on <var59:nullable ANode(ANode)> */
var67 = var59 == var_other;
var65 = var67;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
var63 = var65;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
var62 = var63;
}
if (var62){
} else {
}
RET_LABEL:;
}
/* method flow$FlowVisitor$visit_expr for (self: FlowVisitor, AExpr): FlowContext */
val* nitc__flow___nitc__flow__FlowVisitor___visit_expr(val* self, val* p0) {
val* var /* : FlowContext */;
val* var_node /* var node: AExpr */;
val* var1 /* : nullable FlowContext */;
val* var3 /* : nullable FlowContext */;
var_node = p0;
{
nitc___nitc__Visitor___enter_visit(self, var_node); /* Direct call parser_nodes$Visitor$enter_visit on <self:FlowVisitor>*/
}
{
{ /* Inline flow$AExpr$after_flow_context (var_node) on <var_node:AExpr> */
var3 = var_node->attrs[COLOR_nitc__flow__AExpr___after_flow_context].val; /* _after_flow_context on <var_node:AExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 73);
fatal_exit(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flow$FlowVisitor$flows for (self: FlowVisitor): Array[FlowContext] */
val* nitc__flow___nitc__flow__FlowVisitor___flows(val* self) {
val* var /* : Array[FlowContext] */;
val* var1 /* : Array[FlowContext] */;
var1 = self->attrs[COLOR_nitc__flow__FlowVisitor___flows].val; /* _flows on <self:FlowVisitor> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _flows");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 76);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flow$FlowVisitor$make_sub_flow for (self: FlowVisitor): FlowContext */
val* nitc__flow___nitc__flow__FlowVisitor___make_sub_flow(val* self) {
val* var /* : FlowContext */;
val* var1 /* : FlowContext */;
val* var_flow /* var flow: FlowContext */;
val* var3 /* : Array[FlowContext] */;
val* var5 /* : Array[FlowContext] */;
val* var6 /* : nullable ANode */;
val* var8 /* : nullable ANode */;
val* var10 /* : FlowContext */;
val* var12 /* : FlowContext */;
var1 = NEW_nitc__FlowContext(&type_nitc__FlowContext);
{
{ /* Inline kernel$Object$init (var1) on <var1:FlowContext> */
RET_LABEL2:(void)0;
}
}
var_flow = var1;
{
{ /* Inline flow$FlowVisitor$flows (self) on <self:FlowVisitor> */
var5 = self->attrs[COLOR_nitc__flow__FlowVisitor___flows].val; /* _flows on <self:FlowVisitor> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _flows");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 76);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var3, var_flow); /* Direct call array$Array$add on <var3:Array[FlowContext]>*/
}
{
{ /* Inline parser_nodes$Visitor$current_node (self) on <self:FlowVisitor> */
var8 = self->attrs[COLOR_nitc__parser_nodes__Visitor___current_node].val; /* _current_node on <self:FlowVisitor> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline flow$FlowContext$node= (var_flow,var6) on <var_flow:FlowContext> */
var_flow->attrs[COLOR_nitc__flow__FlowContext___node].val = var6; /* _node on <var_flow:FlowContext> */
RET_LABEL9:(void)0;
}
}
{
{ /* Inline flow$FlowVisitor$current_flow_context (self) on <self:FlowVisitor> */
var12 = self->attrs[COLOR_nitc__flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <self:FlowVisitor> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 37);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
nitc___nitc__FlowContext___add_previous(var_flow, var10); /* Direct call flow$FlowContext$add_previous on <var_flow:FlowContext>*/
}
{
{ /* Inline flow$FlowVisitor$current_flow_context= (self,var_flow) on <self:FlowVisitor> */
self->attrs[COLOR_nitc__flow__FlowVisitor___current_flow_context].val = var_flow; /* _current_flow_context on <self:FlowVisitor> */
RET_LABEL13:(void)0;
}
}
var = var_flow;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flow$FlowVisitor$make_merge_flow for (self: FlowVisitor, FlowContext, FlowContext): FlowContext */
val* nitc__flow___nitc__flow__FlowVisitor___make_merge_flow(val* self, val* p0, val* p1) {
val* var /* : FlowContext */;
val* var_flow1 /* var flow1: FlowContext */;
val* var_flow2 /* var flow2: FlowContext */;
val* var1 /* : FlowContext */;
val* var_flow /* var flow: FlowContext */;
val* var3 /* : Array[FlowContext] */;
val* var5 /* : Array[FlowContext] */;
val* var6 /* : nullable ANode */;
val* var8 /* : nullable ANode */;
var_flow1 = p0;
var_flow2 = p1;
var1 = NEW_nitc__FlowContext(&type_nitc__FlowContext);
{
{ /* Inline kernel$Object$init (var1) on <var1:FlowContext> */
RET_LABEL2:(void)0;
}
}
var_flow = var1;
{
{ /* Inline flow$FlowVisitor$flows (self) on <self:FlowVisitor> */
var5 = self->attrs[COLOR_nitc__flow__FlowVisitor___flows].val; /* _flows on <self:FlowVisitor> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _flows");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 76);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var3, var_flow); /* Direct call array$Array$add on <var3:Array[FlowContext]>*/
}
{
{ /* Inline parser_nodes$Visitor$current_node (self) on <self:FlowVisitor> */
var8 = self->attrs[COLOR_nitc__parser_nodes__Visitor___current_node].val; /* _current_node on <self:FlowVisitor> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline flow$FlowContext$node= (var_flow,var6) on <var_flow:FlowContext> */
var_flow->attrs[COLOR_nitc__flow__FlowContext___node].val = var6; /* _node on <var_flow:FlowContext> */
RET_LABEL9:(void)0;
}
}
{
nitc___nitc__FlowContext___add_previous(var_flow, var_flow1); /* Direct call flow$FlowContext$add_previous on <var_flow:FlowContext>*/
}
{
nitc___nitc__FlowContext___add_previous(var_flow, var_flow2); /* Direct call flow$FlowContext$add_previous on <var_flow:FlowContext>*/
}
{
{ /* Inline flow$FlowVisitor$current_flow_context= (self,var_flow) on <self:FlowVisitor> */
self->attrs[COLOR_nitc__flow__FlowVisitor___current_flow_context].val = var_flow; /* _current_flow_context on <self:FlowVisitor> */
RET_LABEL10:(void)0;
}
}
var = var_flow;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flow$FlowVisitor$make_true_false_flow for (self: FlowVisitor, FlowContext, FlowContext): FlowContext */
val* nitc__flow___nitc__flow__FlowVisitor___make_true_false_flow(val* self, val* p0, val* p1) {
val* var /* : FlowContext */;
val* var_true_flow /* var true_flow: FlowContext */;
val* var_false_flow /* var false_flow: FlowContext */;
val* var1 /* : FlowContext */;
val* var_flow /* var flow: FlowContext */;
val* var3 /* : Array[FlowContext] */;
val* var5 /* : Array[FlowContext] */;
val* var6 /* : nullable ANode */;
val* var8 /* : nullable ANode */;
var_true_flow = p0;
var_false_flow = p1;
var1 = NEW_nitc__FlowContext(&type_nitc__FlowContext);
{
{ /* Inline kernel$Object$init (var1) on <var1:FlowContext> */
RET_LABEL2:(void)0;
}
}
var_flow = var1;
{
{ /* Inline flow$FlowVisitor$flows (self) on <self:FlowVisitor> */
var5 = self->attrs[COLOR_nitc__flow__FlowVisitor___flows].val; /* _flows on <self:FlowVisitor> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _flows");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 76);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var3, var_flow); /* Direct call array$Array$add on <var3:Array[FlowContext]>*/
}
{
{ /* Inline parser_nodes$Visitor$current_node (self) on <self:FlowVisitor> */
var8 = self->attrs[COLOR_nitc__parser_nodes__Visitor___current_node].val; /* _current_node on <self:FlowVisitor> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline flow$FlowContext$node= (var_flow,var6) on <var_flow:FlowContext> */
var_flow->attrs[COLOR_nitc__flow__FlowContext___node].val = var6; /* _node on <var_flow:FlowContext> */
RET_LABEL9:(void)0;
}
}
{
nitc___nitc__FlowContext___add_previous(var_flow, var_true_flow); /* Direct call flow$FlowContext$add_previous on <var_flow:FlowContext>*/
}
{
nitc___nitc__FlowContext___add_previous(var_flow, var_false_flow); /* Direct call flow$FlowContext$add_previous on <var_flow:FlowContext>*/
}
{
{ /* Inline flow$FlowContext$when_true= (var_flow,var_true_flow) on <var_flow:FlowContext> */
var_flow->attrs[COLOR_nitc__flow__FlowContext___when_true].val = var_true_flow; /* _when_true on <var_flow:FlowContext> */
RET_LABEL10:(void)0;
}
}
{
{ /* Inline flow$FlowContext$when_false= (var_flow,var_false_flow) on <var_flow:FlowContext> */
var_flow->attrs[COLOR_nitc__flow__FlowContext___when_false].val = var_false_flow; /* _when_false on <var_flow:FlowContext> */
RET_LABEL11:(void)0;
}
}
{
{ /* Inline flow$FlowVisitor$current_flow_context= (self,var_flow) on <self:FlowVisitor> */
self->attrs[COLOR_nitc__flow__FlowVisitor___current_flow_context].val = var_flow; /* _current_flow_context on <self:FlowVisitor> */
RET_LABEL12:(void)0;
}
}
var = var_flow;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flow$FlowVisitor$make_sub_true_false_flow for (self: FlowVisitor): FlowContext */
val* nitc__flow___nitc__flow__FlowVisitor___make_sub_true_false_flow(val* self) {
val* var /* : FlowContext */;
val* var1 /* : FlowContext */;
val* var3 /* : FlowContext */;
val* var_orig_flow /* var orig_flow: FlowContext */;
val* var4 /* : FlowContext */;
val* var_true_flow /* var true_flow: FlowContext */;
val* var6 /* : Array[FlowContext] */;
val* var8 /* : Array[FlowContext] */;
val* var9 /* : nullable ANode */;
val* var11 /* : nullable ANode */;
static val* varonce;
val* var13 /* : String */;
char* var14 /* : CString */;
val* var15 /* : String */;
val* var16 /* : nullable Int */;
val* var17 /* : nullable Int */;
val* var18 /* : nullable Bool */;
val* var19 /* : nullable Bool */;
val* var21 /* : FlowContext */;
val* var_false_flow /* var false_flow: FlowContext */;
val* var23 /* : Array[FlowContext] */;
val* var25 /* : Array[FlowContext] */;
val* var26 /* : nullable ANode */;
val* var28 /* : nullable ANode */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : CString */;
val* var33 /* : String */;
val* var34 /* : nullable Int */;
val* var35 /* : nullable Int */;
val* var36 /* : nullable Bool */;
val* var37 /* : nullable Bool */;
val* var39 /* : FlowContext */;
{
{ /* Inline flow$FlowVisitor$current_flow_context (self) on <self:FlowVisitor> */
var3 = self->attrs[COLOR_nitc__flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <self:FlowVisitor> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 37);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_orig_flow = var1;
var4 = NEW_nitc__FlowContext(&type_nitc__FlowContext);
{
{ /* Inline kernel$Object$init (var4) on <var4:FlowContext> */
RET_LABEL5:(void)0;
}
}
var_true_flow = var4;
{
{ /* Inline flow$FlowVisitor$flows (self) on <self:FlowVisitor> */
var8 = self->attrs[COLOR_nitc__flow__FlowVisitor___flows].val; /* _flows on <self:FlowVisitor> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _flows");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 76);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var6, var_true_flow); /* Direct call array$Array$add on <var6:Array[FlowContext]>*/
}
{
{ /* Inline parser_nodes$Visitor$current_node (self) on <self:FlowVisitor> */
var11 = self->attrs[COLOR_nitc__parser_nodes__Visitor___current_node].val; /* _current_node on <self:FlowVisitor> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline flow$FlowContext$node= (var_true_flow,var9) on <var_true_flow:FlowContext> */
var_true_flow->attrs[COLOR_nitc__flow__FlowContext___node].val = var9; /* _node on <var_true_flow:FlowContext> */
RET_LABEL12:(void)0;
}
}
{
nitc___nitc__FlowContext___add_previous(var_true_flow, var_orig_flow); /* Direct call flow$FlowContext$add_previous on <var_true_flow:FlowContext>*/
}
if (likely(varonce!=NULL)) {
var13 = varonce;
} else {
var14 = "TRUE";
var16 = (val*)(4l<<2|1);
var17 = (val*)(4l<<2|1);
var18 = (val*)((long)(0)<<2|3);
var19 = (val*)((long)(0)<<2|3);
var15 = core__flat___CString___to_s_unsafe(var14, var16, var17, var18, var19);
var13 = var15;
varonce = var13;
}
{
{ /* Inline flow$FlowContext$name= (var_true_flow,var13) on <var_true_flow:FlowContext> */
var_true_flow->attrs[COLOR_nitc__flow__FlowContext___name].val = var13; /* _name on <var_true_flow:FlowContext> */
RET_LABEL20:(void)0;
}
}
var21 = NEW_nitc__FlowContext(&type_nitc__FlowContext);
{
{ /* Inline kernel$Object$init (var21) on <var21:FlowContext> */
RET_LABEL22:(void)0;
}
}
var_false_flow = var21;
{
{ /* Inline flow$FlowVisitor$flows (self) on <self:FlowVisitor> */
var25 = self->attrs[COLOR_nitc__flow__FlowVisitor___flows].val; /* _flows on <self:FlowVisitor> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _flows");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 76);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var23, var_false_flow); /* Direct call array$Array$add on <var23:Array[FlowContext]>*/
}
{
{ /* Inline parser_nodes$Visitor$current_node (self) on <self:FlowVisitor> */
var28 = self->attrs[COLOR_nitc__parser_nodes__Visitor___current_node].val; /* _current_node on <self:FlowVisitor> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline flow$FlowContext$node= (var_false_flow,var26) on <var_false_flow:FlowContext> */
var_false_flow->attrs[COLOR_nitc__flow__FlowContext___node].val = var26; /* _node on <var_false_flow:FlowContext> */
RET_LABEL29:(void)0;
}
}
{
nitc___nitc__FlowContext___add_previous(var_false_flow, var_orig_flow); /* Direct call flow$FlowContext$add_previous on <var_false_flow:FlowContext>*/
}
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "FALSE";
var34 = (val*)(5l<<2|1);
var35 = (val*)(5l<<2|1);
var36 = (val*)((long)(0)<<2|3);
var37 = (val*)((long)(0)<<2|3);
var33 = core__flat___CString___to_s_unsafe(var32, var34, var35, var36, var37);
var31 = var33;
varonce30 = var31;
}
{
{ /* Inline flow$FlowContext$name= (var_false_flow,var31) on <var_false_flow:FlowContext> */
var_false_flow->attrs[COLOR_nitc__flow__FlowContext___name].val = var31; /* _name on <var_false_flow:FlowContext> */
RET_LABEL38:(void)0;
}
}
{
var39 = nitc__flow___nitc__flow__FlowVisitor___make_true_false_flow(self, var_true_flow, var_false_flow);
}
var = var39;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flow$FlowVisitor$make_unreachable_flow for (self: FlowVisitor): FlowContext */
val* nitc__flow___nitc__flow__FlowVisitor___make_unreachable_flow(val* self) {
val* var /* : FlowContext */;
val* var1 /* : FlowContext */;
val* var_flow /* var flow: FlowContext */;
val* var3 /* : Array[FlowContext] */;
val* var5 /* : Array[FlowContext] */;
val* var6 /* : nullable ANode */;
val* var8 /* : nullable ANode */;
val* var10 /* : FlowContext */;
val* var12 /* : FlowContext */;
var1 = NEW_nitc__FlowContext(&type_nitc__FlowContext);
{
{ /* Inline kernel$Object$init (var1) on <var1:FlowContext> */
RET_LABEL2:(void)0;
}
}
var_flow = var1;
{
{ /* Inline flow$FlowVisitor$flows (self) on <self:FlowVisitor> */
var5 = self->attrs[COLOR_nitc__flow__FlowVisitor___flows].val; /* _flows on <self:FlowVisitor> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _flows");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 76);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var3, var_flow); /* Direct call array$Array$add on <var3:Array[FlowContext]>*/
}
{
{ /* Inline parser_nodes$Visitor$current_node (self) on <self:FlowVisitor> */
var8 = self->attrs[COLOR_nitc__parser_nodes__Visitor___current_node].val; /* _current_node on <self:FlowVisitor> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline flow$FlowContext$node= (var_flow,var6) on <var_flow:FlowContext> */
var_flow->attrs[COLOR_nitc__flow__FlowContext___node].val = var6; /* _node on <var_flow:FlowContext> */
RET_LABEL9:(void)0;
}
}
{
{ /* Inline flow$FlowVisitor$current_flow_context (self) on <self:FlowVisitor> */
var12 = self->attrs[COLOR_nitc__flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <self:FlowVisitor> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 37);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
nitc___nitc__FlowContext___add_previous(var_flow, var10); /* Direct call flow$FlowContext$add_previous on <var_flow:FlowContext>*/
}
{
{ /* Inline flow$FlowContext$is_marked_unreachable= (var_flow,1) on <var_flow:FlowContext> */
var_flow->attrs[COLOR_nitc__flow__FlowContext___is_marked_unreachable].s = 1; /* _is_marked_unreachable on <var_flow:FlowContext> */
RET_LABEL13:(void)0;
}
}
{
{ /* Inline flow$FlowVisitor$current_flow_context= (self,var_flow) on <self:FlowVisitor> */
self->attrs[COLOR_nitc__flow__FlowVisitor___current_flow_context].val = var_flow; /* _current_flow_context on <self:FlowVisitor> */
RET_LABEL14:(void)0;
}
}
var = var_flow;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flow$FlowVisitor$merge_continues_to for (self: FlowVisitor, FlowContext, nullable EscapeMark) */
void nitc__flow___nitc__flow__FlowVisitor___merge_continues_to(val* self, val* p0, val* p1) {
val* var_before_loop /* var before_loop: FlowContext */;
val* var_escapemark /* var escapemark: nullable EscapeMark */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : Array[AEscapeExpr] */;
val* var8 /* : Array[AEscapeExpr] */;
val* var_ /* var : Array[AEscapeExpr] */;
val* var9 /* : IndexedIterator[nullable Object] */;
val* var_10 /* var : IndexedIterator[AEscapeExpr] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_b /* var b: AEscapeExpr */;
val* var13 /* : nullable FlowContext */;
val* var_before /* var before: nullable FlowContext */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
var_before_loop = p0;
var_escapemark = p1;
if (var_escapemark == NULL) {
var = 1; /* is null */
} else {
var = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_escapemark,((val*)NULL)) on <var_escapemark:nullable EscapeMark> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_escapemark,var_other) on <var_escapemark:nullable EscapeMark(EscapeMark)> */
var5 = var_escapemark == var_other;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
}
if (var){
goto RET_LABEL;
} else {
}
{
{ /* Inline scope$EscapeMark$escapes (var_escapemark) on <var_escapemark:nullable EscapeMark(EscapeMark)> */
var8 = var_escapemark->attrs[COLOR_nitc__scope__EscapeMark___escapes].val; /* _escapes on <var_escapemark:nullable EscapeMark(EscapeMark)> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__scope, 59);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_ = var6;
{
var9 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_10 = var9;
for(;;) {
{
var11 = ((short int(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_10); /* is_ok on <var_10:IndexedIterator[AEscapeExpr]>*/
}
if (var11){
} else {
goto BREAK_label;
}
{
var12 = ((val*(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_10); /* item on <var_10:IndexedIterator[AEscapeExpr]>*/
}
var_b = var12;
{
var13 = nitc__flow___AEscapeExpr___before_flow_context(var_b);
}
var_before = var13;
if (var_before == NULL) {
var14 = 1; /* is null */
} else {
var14 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_before,((val*)NULL)) on <var_before:nullable FlowContext> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_before,var_other) on <var_before:nullable FlowContext(FlowContext)> */
var19 = var_before == var_other;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
if (var14){
goto BREAK_label20;
} else {
}
{
nitc___nitc__FlowContext___add_loop(var_before_loop, var_before); /* Direct call flow$FlowContext$add_loop on <var_before_loop:FlowContext>*/
}
BREAK_label20: (void)0;
{
((void(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_10); /* next on <var_10:IndexedIterator[AEscapeExpr]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_10); /* finish on <var_10:IndexedIterator[AEscapeExpr]>*/
}
RET_LABEL:;
}
/* method flow$FlowVisitor$merge_breaks for (self: FlowVisitor, nullable EscapeMark) */
void nitc__flow___nitc__flow__FlowVisitor___merge_breaks(val* self, val* p0) {
val* var_escapemark /* var escapemark: nullable EscapeMark */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : Array[AEscapeExpr] */;
val* var8 /* : Array[AEscapeExpr] */;
val* var_ /* var : Array[AEscapeExpr] */;
val* var9 /* : IndexedIterator[nullable Object] */;
val* var_10 /* var : IndexedIterator[AEscapeExpr] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_b /* var b: AEscapeExpr */;
val* var13 /* : nullable FlowContext */;
val* var_before /* var before: nullable FlowContext */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
val* var21 /* : FlowContext */;
val* var23 /* : FlowContext */;
val* var24 /* : FlowContext */;
var_escapemark = p0;
if (var_escapemark == NULL) {
var = 1; /* is null */
} else {
var = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_escapemark,((val*)NULL)) on <var_escapemark:nullable EscapeMark> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_escapemark,var_other) on <var_escapemark:nullable EscapeMark(EscapeMark)> */
var5 = var_escapemark == var_other;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
}
if (var){
goto RET_LABEL;
} else {
}
{
{ /* Inline scope$EscapeMark$escapes (var_escapemark) on <var_escapemark:nullable EscapeMark(EscapeMark)> */
var8 = var_escapemark->attrs[COLOR_nitc__scope__EscapeMark___escapes].val; /* _escapes on <var_escapemark:nullable EscapeMark(EscapeMark)> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__scope, 59);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_ = var6;
{
var9 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_10 = var9;
for(;;) {
{
var11 = ((short int(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_10); /* is_ok on <var_10:IndexedIterator[AEscapeExpr]>*/
}
if (var11){
} else {
goto BREAK_label;
}
{
var12 = ((val*(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_10); /* item on <var_10:IndexedIterator[AEscapeExpr]>*/
}
var_b = var12;
{
var13 = nitc__flow___AEscapeExpr___before_flow_context(var_b);
}
var_before = var13;
if (var_before == NULL) {
var14 = 1; /* is null */
} else {
var14 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_before,((val*)NULL)) on <var_before:nullable FlowContext> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_before,var_other) on <var_before:nullable FlowContext(FlowContext)> */
var19 = var_before == var_other;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
if (var14){
goto BREAK_label20;
} else {
}
{
{ /* Inline flow$FlowVisitor$current_flow_context (self) on <self:FlowVisitor> */
var23 = self->attrs[COLOR_nitc__flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <self:FlowVisitor> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 37);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = nitc__flow___nitc__flow__FlowVisitor___make_merge_flow(self, var21, var_before);
}
BREAK_label20: (void)0;
{
((void(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_10); /* next on <var_10:IndexedIterator[AEscapeExpr]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_10); /* finish on <var_10:IndexedIterator[AEscapeExpr]>*/
}
RET_LABEL:;
}
/* method flow$FlowContext$previous for (self: FlowContext): Array[FlowContext] */
val* nitc___nitc__FlowContext___previous(val* self) {
val* var /* : Array[FlowContext] */;
val* var1 /* : Array[FlowContext] */;
var1 = self->attrs[COLOR_nitc__flow__FlowContext___previous].val; /* _previous on <self:FlowContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _previous");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 189);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flow$FlowContext$loops for (self: FlowContext): Array[FlowContext] */
val* nitc___nitc__FlowContext___loops(val* self) {
val* var /* : Array[FlowContext] */;
val* var1 /* : Array[FlowContext] */;
var1 = self->attrs[COLOR_nitc__flow__FlowContext___loops].val; /* _loops on <self:FlowContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _loops");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 192);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flow$FlowContext$is_marked_unreachable for (self: FlowContext): Bool */
short int nitc___nitc__FlowContext___is_marked_unreachable(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__flow__FlowContext___is_marked_unreachable].s; /* _is_marked_unreachable on <self:FlowContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method flow$FlowContext$is_marked_unreachable= for (self: FlowContext, Bool) */
void nitc___nitc__FlowContext___is_marked_unreachable_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__flow__FlowContext___is_marked_unreachable].s = p0; /* _is_marked_unreachable on <self:FlowContext> */
RET_LABEL:;
}
/* method flow$FlowContext$is_unreachable for (self: FlowContext): Bool */
short int nitc___nitc__FlowContext___is_unreachable(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : Array[FlowContext] */;
val* var9 /* : Array[FlowContext] */;
long var10 /* : Int */;
long var12 /* : Int */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
{
{ /* Inline flow$FlowContext$is_marked_unreachable (self) on <self:FlowContext> */
var3 = self->attrs[COLOR_nitc__flow__FlowContext___is_marked_unreachable].s; /* _is_marked_unreachable on <self:FlowContext> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1){
var = 1;
goto RET_LABEL;
} else {
}
{
{ /* Inline flow$FlowContext$is_start (self) on <self:FlowContext> */
var6 = self->attrs[COLOR_nitc__flow__FlowContext___is_start].s; /* _is_start on <self:FlowContext> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (var4){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline flow$FlowContext$previous (self) on <self:FlowContext> */
var9 = self->attrs[COLOR_nitc__flow__FlowContext___previous].val; /* _previous on <self:FlowContext> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _previous");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 189);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline array$AbstractArrayRead$length (var7) on <var7:Array[FlowContext]> */
var12 = var7->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var7:Array[FlowContext]> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var10,0l) on <var10:Int> */
var15 = var10 == 0l;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (var13){
var = 1;
goto RET_LABEL;
} else {
}
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flow$FlowContext$is_already_unreachable for (self: FlowContext): Bool */
short int nitc___nitc__FlowContext___is_already_unreachable(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__flow__FlowContext___is_already_unreachable].s; /* _is_already_unreachable on <self:FlowContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method flow$FlowContext$is_already_unreachable= for (self: FlowContext, Bool) */
void nitc___nitc__FlowContext___is_already_unreachable_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__flow__FlowContext___is_already_unreachable].s = p0; /* _is_already_unreachable on <self:FlowContext> */
RET_LABEL:;
}
/* method flow$FlowContext$is_start for (self: FlowContext): Bool */
short int nitc___nitc__FlowContext___is_start(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__flow__FlowContext___is_start].s; /* _is_start on <self:FlowContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method flow$FlowContext$is_start= for (self: FlowContext, Bool) */
void nitc___nitc__FlowContext___is_start_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__flow__FlowContext___is_start].s = p0; /* _is_start on <self:FlowContext> */
RET_LABEL:;
}
/* method flow$FlowContext$node for (self: FlowContext): nullable ANode */
val* nitc___nitc__FlowContext___node(val* self) {
val* var /* : nullable ANode */;
val* var1 /* : nullable ANode */;
var1 = self->attrs[COLOR_nitc__flow__FlowContext___node].val; /* _node on <self:FlowContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method flow$FlowContext$node= for (self: FlowContext, nullable ANode) */
void nitc___nitc__FlowContext___node_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__flow__FlowContext___node].val = p0; /* _node on <self:FlowContext> */
RET_LABEL:;
}
/* method flow$FlowContext$name= for (self: FlowContext, String) */
void nitc___nitc__FlowContext___name_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__flow__FlowContext___name].val = p0; /* _name on <self:FlowContext> */
RET_LABEL:;
}
/* method flow$FlowContext$when_true for (self: FlowContext): FlowContext */
val* nitc___nitc__FlowContext___when_true(val* self) {
val* var /* : FlowContext */;
val* var1 /* : FlowContext */;
var1 = self->attrs[COLOR_nitc__flow__FlowContext___when_true].val; /* _when_true on <self:FlowContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_true");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 225);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flow$FlowContext$when_true= for (self: FlowContext, FlowContext) */
void nitc___nitc__FlowContext___when_true_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__flow__FlowContext___when_true].val = p0; /* _when_true on <self:FlowContext> */
RET_LABEL:;
}
/* method flow$FlowContext$when_false for (self: FlowContext): FlowContext */
val* nitc___nitc__FlowContext___when_false(val* self) {
val* var /* : FlowContext */;
val* var1 /* : FlowContext */;
var1 = self->attrs[COLOR_nitc__flow__FlowContext___when_false].val; /* _when_false on <self:FlowContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_false");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 228);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flow$FlowContext$when_false= for (self: FlowContext, FlowContext) */
void nitc___nitc__FlowContext___when_false_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__flow__FlowContext___when_false].val = p0; /* _when_false on <self:FlowContext> */
RET_LABEL:;
}
/* method flow$FlowContext$add_previous for (self: FlowContext, FlowContext) */
void nitc___nitc__FlowContext___add_previous(val* self, val* p0) {
val* var_flow /* var flow: FlowContext */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var_ /* var : Bool */;
val* var3 /* : Array[FlowContext] */;
val* var5 /* : Array[FlowContext] */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : Array[FlowContext] */;
val* var10 /* : Array[FlowContext] */;
var_flow = p0;
{
var1 = nitc___nitc__FlowContext___is_unreachable(var_flow);
}
var2 = !var1;
var_ = var2;
if (var2){
{
{ /* Inline flow$FlowContext$previous (self) on <self:FlowContext> */
var5 = self->attrs[COLOR_nitc__flow__FlowContext___previous].val; /* _previous on <self:FlowContext> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _previous");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 189);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var3, var_flow);
}
var7 = !var6;
var = var7;
} else {
var = var_;
}
if (var){
{
{ /* Inline flow$FlowContext$previous (self) on <self:FlowContext> */
var10 = self->attrs[COLOR_nitc__flow__FlowContext___previous].val; /* _previous on <self:FlowContext> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _previous");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 189);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var8, var_flow); /* Direct call array$Array$add on <var8:Array[FlowContext]>*/
}
} else {
}
RET_LABEL:;
}
/* method flow$FlowContext$add_loop for (self: FlowContext, FlowContext) */
void nitc___nitc__FlowContext___add_loop(val* self, val* p0) {
val* var_flow /* var flow: FlowContext */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var_ /* var : Bool */;
val* var3 /* : Array[FlowContext] */;
val* var5 /* : Array[FlowContext] */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : Array[FlowContext] */;
val* var10 /* : Array[FlowContext] */;
var_flow = p0;
{
var1 = nitc___nitc__FlowContext___is_unreachable(var_flow);
}
var2 = !var1;
var_ = var2;
if (var2){
{
{ /* Inline flow$FlowContext$previous (self) on <self:FlowContext> */
var5 = self->attrs[COLOR_nitc__flow__FlowContext___previous].val; /* _previous on <self:FlowContext> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _previous");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 189);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var3, var_flow);
}
var7 = !var6;
var = var7;
} else {
var = var_;
}
if (var){
{
{ /* Inline flow$FlowContext$loops (self) on <self:FlowContext> */
var10 = self->attrs[COLOR_nitc__flow__FlowContext___loops].val; /* _loops on <self:FlowContext> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _loops");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 192);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var8, var_flow); /* Direct call array$Array$add on <var8:Array[FlowContext]>*/
}
} else {
}
RET_LABEL:;
}
/* method flow$ANode$accept_flow_visitor for (self: ANode, FlowVisitor) */
void nitc__flow___ANode___accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__parser_nodes__ANode__visit_all]))(self, var_v); /* visit_all on <self:ANode>*/
}
RET_LABEL:;
}
/* method flow$APropdef$do_flow for (self: APropdef, ToolContext) */
void nitc__flow___APropdef___do_flow(val* self, val* p0) {
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var /* : FlowVisitor */;
val* var_v /* var v: FlowVisitor */;
var_toolcontext = p0;
var = NEW_nitc__flow__FlowVisitor(&type_nitc__flow__FlowVisitor);
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nitc__flow__FlowVisitor__toolcontext_61d]))(var, var_toolcontext); /* toolcontext= on <var:FlowVisitor>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__init]))(var); /* init on <var:FlowVisitor>*/
}
var_v = var;
{
nitc___nitc__Visitor___enter_visit(var_v, self); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:FlowVisitor>*/
}
RET_LABEL:;
}
/* method flow$APropdef$before_flow_context= for (self: APropdef, nullable FlowContext) */
void nitc__flow___APropdef___before_flow_context_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__flow__APropdef___before_flow_context].val = p0; /* _before_flow_context on <self:APropdef> */
RET_LABEL:;
}
/* method flow$APropdef$after_flow_context= for (self: APropdef, nullable FlowContext) */
void nitc__flow___APropdef___after_flow_context_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__flow__APropdef___after_flow_context].val = p0; /* _after_flow_context on <self:APropdef> */
RET_LABEL:;
}
/* method flow$APropdef$accept_flow_visitor for (self: APropdef, FlowVisitor) */
void nitc__flow___APropdef___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : FlowContext */;
val* var2 /* : FlowContext */;
val* var4 /* : FlowContext */;
val* var6 /* : FlowContext */;
var_v = p0;
{
{ /* Inline flow$FlowVisitor$current_flow_context (var_v) on <var_v:FlowVisitor> */
var2 = var_v->attrs[COLOR_nitc__flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <var_v:FlowVisitor> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 37);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline flow$APropdef$before_flow_context= (self,var) on <self:APropdef> */
self->attrs[COLOR_nitc__flow__APropdef___before_flow_context].val = var; /* _before_flow_context on <self:APropdef> */
RET_LABEL3:(void)0;
}
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__flow___APropdef___ANode__accept_flow_visitor]))(self, p0); /* accept_flow_visitor on <self:APropdef>*/
}
{
{ /* Inline flow$FlowVisitor$current_flow_context (var_v) on <var_v:FlowVisitor> */
var6 = var_v->attrs[COLOR_nitc__flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <var_v:FlowVisitor> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 37);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline flow$APropdef$after_flow_context= (self,var4) on <self:APropdef> */
self->attrs[COLOR_nitc__flow__APropdef___after_flow_context].val = var4; /* _after_flow_context on <self:APropdef> */
RET_LABEL7:(void)0;
}
}
RET_LABEL:;
}
/* method flow$AExpr$after_flow_context for (self: AExpr): nullable FlowContext */
val* nitc__flow___AExpr___after_flow_context(val* self) {
val* var /* : nullable FlowContext */;
val* var1 /* : nullable FlowContext */;
var1 = self->attrs[COLOR_nitc__flow__AExpr___after_flow_context].val; /* _after_flow_context on <self:AExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method flow$AExpr$after_flow_context= for (self: AExpr, nullable FlowContext) */
void nitc__flow___AExpr___after_flow_context_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__flow__AExpr___after_flow_context].val = p0; /* _after_flow_context on <self:AExpr> */
RET_LABEL:;
}
/* method flow$AVarAssignExpr$accept_flow_visitor for (self: AVarAssignExpr, FlowVisitor) */
void nitc__flow___AVarAssignExpr___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : FlowContext */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__flow___AVarAssignExpr___ANode__accept_flow_visitor]))(self, p0); /* accept_flow_visitor on <self:AVarAssignExpr>*/
}
{
var = nitc__flow___nitc__flow__FlowVisitor___make_sub_flow(var_v);
}
{
{ /* Inline flow$AExpr$after_flow_context= (self,var) on <self:AVarAssignExpr> */
self->attrs[COLOR_nitc__flow__AExpr___after_flow_context].val = var; /* _after_flow_context on <self:AVarAssignExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method flow$AReassignFormExpr$accept_flow_visitor for (self: AReassignFormExpr, FlowVisitor) */
void nitc__flow___AReassignFormExpr___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : FlowContext */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__flow___AReassignFormExpr___ANode__accept_flow_visitor]))(self, p0); /* accept_flow_visitor on <self:AReassignFormExpr>*/
}
{
var = nitc__flow___nitc__flow__FlowVisitor___make_sub_flow(var_v);
}
{
{ /* Inline flow$AExpr$after_flow_context= (self,var) on <self:AReassignFormExpr> */
self->attrs[COLOR_nitc__flow__AExpr___after_flow_context].val = var; /* _after_flow_context on <self:AReassignFormExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method flow$ABlockExpr$accept_flow_visitor for (self: ABlockExpr, FlowVisitor) */
void nitc__flow___ABlockExpr___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : ANodes[AExpr] */;
val* var2 /* : ANodes[AExpr] */;
val* var_ /* var : ANodes[AExpr] */;
val* var3 /* : Iterator[ANode] */;
val* var_4 /* var : Iterator[AExpr] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_e /* var e: AExpr */;
val* var7 /* : FlowContext */;
val* var9 /* : FlowContext */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : FlowContext */;
val* var14 /* : FlowContext */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : FlowContext */;
val* var21 /* : FlowContext */;
val* var23 /* : ToolContext */;
val* var25 /* : ToolContext */;
val* var26 /* : Location */;
static val* varonce;
val* var27 /* : String */;
char* var28 /* : CString */;
val* var29 /* : String */;
val* var30 /* : nullable Int */;
val* var31 /* : nullable Int */;
val* var32 /* : nullable Bool */;
val* var33 /* : nullable Bool */;
val* var34 /* : Message */;
var_v = p0;
{
{ /* Inline parser_nodes$ABlockExpr$n_expr (self) on <self:ABlockExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1811);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_ = var;
{
var3 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_);
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:Iterator[AExpr]>*/
}
if (var5){
} else {
goto BREAK_label;
}
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:Iterator[AExpr]>*/
}
var_e = var6;
{
{ /* Inline flow$FlowVisitor$current_flow_context (var_v) on <var_v:FlowVisitor> */
var9 = var_v->attrs[COLOR_nitc__flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <var_v:FlowVisitor> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 37);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = nitc___nitc__FlowContext___is_unreachable(var7);
}
var11 = !var10;
if (var11){
{
nitc___nitc__Visitor___enter_visit(var_v, var_e); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:FlowVisitor>*/
}
} else {
{
{ /* Inline flow$FlowVisitor$current_flow_context (var_v) on <var_v:FlowVisitor> */
var14 = var_v->attrs[COLOR_nitc__flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <var_v:FlowVisitor> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 37);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline flow$FlowContext$is_already_unreachable (var12) on <var12:FlowContext> */
var17 = var12->attrs[COLOR_nitc__flow__FlowContext___is_already_unreachable].s; /* _is_already_unreachable on <var12:FlowContext> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
var18 = !var15;
if (var18){
{
{ /* Inline flow$FlowVisitor$current_flow_context (var_v) on <var_v:FlowVisitor> */
var21 = var_v->attrs[COLOR_nitc__flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <var_v:FlowVisitor> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 37);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline flow$FlowContext$is_already_unreachable= (var19,1) on <var19:FlowContext> */
var19->attrs[COLOR_nitc__flow__FlowContext___is_already_unreachable].s = 1; /* _is_already_unreachable on <var19:FlowContext> */
RET_LABEL22:(void)0;
}
}
{
{ /* Inline flow$FlowVisitor$toolcontext (var_v) on <var_v:FlowVisitor> */
var25 = var_v->attrs[COLOR_nitc__flow__FlowVisitor___toolcontext].val; /* _toolcontext on <var_v:FlowVisitor> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 39);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = nitc___nitc__ANode___hot_location(var_e);
}
if (likely(varonce!=NULL)) {
var27 = varonce;
} else {
var28 = "Error: unreachable statement.";
var30 = (val*)(29l<<2|1);
var31 = (val*)(29l<<2|1);
var32 = (val*)((long)(0)<<2|3);
var33 = (val*)((long)(0)<<2|3);
var29 = core__flat___CString___to_s_unsafe(var28, var30, var31, var32, var33);
var27 = var29;
varonce = var27;
}
{
var34 = nitc___nitc__ToolContext___error(var23, var26, var27);
}
} else {
}
}
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:Iterator[AExpr]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:Iterator[AExpr]>*/
}
RET_LABEL:;
}
/* method flow$AReturnExpr$accept_flow_visitor for (self: AReturnExpr, FlowVisitor) */
void nitc__flow___AReturnExpr___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : FlowContext */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__flow___AReturnExpr___ANode__accept_flow_visitor]))(self, p0); /* accept_flow_visitor on <self:AReturnExpr>*/
}
{
var = nitc__flow___nitc__flow__FlowVisitor___make_unreachable_flow(var_v);
}
RET_LABEL:;
}
/* method flow$AEscapeExpr$before_flow_context for (self: AEscapeExpr): nullable FlowContext */
val* nitc__flow___AEscapeExpr___before_flow_context(val* self) {
val* var /* : nullable FlowContext */;
val* var1 /* : nullable FlowContext */;
val* var3 /* : nullable FlowContext */;
val* var_after /* var after: nullable FlowContext */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : Array[FlowContext] */;
val* var12 /* : Array[FlowContext] */;
val* var13 /* : nullable Object */;
{
{ /* Inline flow$AExpr$after_flow_context (self) on <self:AEscapeExpr> */
var3 = self->attrs[COLOR_nitc__flow__AExpr___after_flow_context].val; /* _after_flow_context on <self:AEscapeExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_after = var1;
if (var_after == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_after,((val*)NULL)) on <var_after:nullable FlowContext> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_after,var_other) on <var_after:nullable FlowContext(FlowContext)> */
var9 = var_after == var_other;
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
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline flow$FlowContext$previous (var_after) on <var_after:nullable FlowContext(FlowContext)> */
var12 = var_after->attrs[COLOR_nitc__flow__FlowContext___previous].val; /* _previous on <var_after:nullable FlowContext(FlowContext)> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _previous");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 189);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = core___core__SequenceRead___Collection__first(var10);
}
var = var13;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flow$AEscapeExpr$accept_flow_visitor for (self: AEscapeExpr, FlowVisitor) */
void nitc__flow___AEscapeExpr___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : FlowContext */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__flow___AEscapeExpr___ANode__accept_flow_visitor]))(self, p0); /* accept_flow_visitor on <self:AEscapeExpr>*/
}
{
var = nitc__flow___nitc__flow__FlowVisitor___make_unreachable_flow(var_v);
}
RET_LABEL:;
}
/* method flow$AAbortExpr$accept_flow_visitor for (self: AAbortExpr, FlowVisitor) */
void nitc__flow___AAbortExpr___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : FlowContext */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__flow___AAbortExpr___ANode__accept_flow_visitor]))(self, p0); /* accept_flow_visitor on <self:AAbortExpr>*/
}
{
var = nitc__flow___nitc__flow__FlowVisitor___make_unreachable_flow(var_v);
}
RET_LABEL:;
}
/* method flow$ADoExpr$accept_flow_visitor for (self: ADoExpr, FlowVisitor) */
void nitc__flow___ADoExpr___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : FlowContext */;
val* var_before_block /* var before_block: FlowContext */;
val* var1 /* : nullable AExpr */;
val* var3 /* : nullable AExpr */;
val* var4 /* : nullable EscapeMark */;
val* var6 /* : nullable EscapeMark */;
val* var7 /* : FlowContext */;
val* var9 /* : FlowContext */;
val* var_after_block /* var after_block: FlowContext */;
val* var10 /* : nullable AExpr */;
val* var12 /* : nullable AExpr */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : FlowContext */;
val* var_before_catch /* var before_catch: FlowContext */;
val* var19 /* : FlowContext */;
val* var20 /* : nullable AExpr */;
val* var22 /* : nullable AExpr */;
val* var23 /* : FlowContext */;
val* var25 /* : FlowContext */;
val* var_after_catch /* var after_catch: FlowContext */;
val* var26 /* : FlowContext */;
var_v = p0;
{
var = nitc__flow___nitc__flow__FlowVisitor___make_sub_flow(var_v);
}
var_before_block = var;
{
{ /* Inline parser_nodes$ADoExpr$n_block (self) on <self:ADoExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ADoExpr___n_block].val; /* _n_block on <self:ADoExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:FlowVisitor>*/
}
{
{ /* Inline scope$ADoExpr$break_mark (self) on <self:ADoExpr> */
var6 = self->attrs[COLOR_nitc__scope__ADoExpr___break_mark].val; /* _break_mark on <self:ADoExpr> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
nitc__flow___nitc__flow__FlowVisitor___merge_breaks(var_v, var4); /* Direct call flow$FlowVisitor$merge_breaks on <var_v:FlowVisitor>*/
}
{
{ /* Inline flow$FlowVisitor$current_flow_context (var_v) on <var_v:FlowVisitor> */
var9 = var_v->attrs[COLOR_nitc__flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <var_v:FlowVisitor> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 37);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_after_block = var7;
{
{ /* Inline parser_nodes$ADoExpr$n_catch (self) on <self:ADoExpr> */
var12 = self->attrs[COLOR_nitc__parser_nodes__ADoExpr___n_catch].val; /* _n_catch on <self:ADoExpr> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (var10 == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var10,((val*)NULL)) on <var10:nullable AExpr> */
var_other = ((val*)NULL);
{
var16 = ((short int(*)(val* self, val* p0))(var10->class->vft[COLOR_core__kernel__Object___61d_61d]))(var10, var_other); /* == on <var10:nullable AExpr(AExpr)>*/
}
var17 = !var16;
var14 = var17;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
if (var13){
{
var18 = nitc__flow___nitc__flow__FlowVisitor___make_sub_flow(var_v);
}
var_before_catch = var18;
{
var19 = nitc__flow___nitc__flow__FlowVisitor___make_merge_flow(var_v, var_before_block, var_after_block);
}
{
{ /* Inline parser_nodes$ADoExpr$n_catch (self) on <self:ADoExpr> */
var22 = self->attrs[COLOR_nitc__parser_nodes__ADoExpr___n_catch].val; /* _n_catch on <self:ADoExpr> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
nitc___nitc__Visitor___enter_visit(var_v, var20); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:FlowVisitor>*/
}
{
{ /* Inline flow$FlowVisitor$current_flow_context (var_v) on <var_v:FlowVisitor> */
var25 = var_v->attrs[COLOR_nitc__flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <var_v:FlowVisitor> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 37);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
var_after_catch = var23;
{
var26 = nitc__flow___nitc__flow__FlowVisitor___make_merge_flow(var_v, var_before_catch, var_after_catch);
}
} else {
}
RET_LABEL:;
}
/* method flow$AIfExpr$accept_flow_visitor for (self: AIfExpr, FlowVisitor) */
void nitc__flow___AIfExpr___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : FlowContext */;
val* var_after_expr /* var after_expr: FlowContext */;
val* var4 /* : FlowContext */;
val* var6 /* : FlowContext */;
val* var8 /* : nullable AExpr */;
val* var10 /* : nullable AExpr */;
val* var11 /* : FlowContext */;
val* var13 /* : FlowContext */;
val* var_after_then /* var after_then: FlowContext */;
val* var14 /* : FlowContext */;
val* var16 /* : FlowContext */;
val* var18 /* : nullable AExpr */;
val* var20 /* : nullable AExpr */;
val* var21 /* : FlowContext */;
val* var23 /* : FlowContext */;
val* var_after_else /* var after_else: FlowContext */;
val* var24 /* : FlowContext */;
var_v = p0;
{
{ /* Inline parser_nodes$AIfExpr$n_expr (self) on <self:AIfExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_expr].val; /* _n_expr on <self:AIfExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1924);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__flow___nitc__flow__FlowVisitor___visit_expr(var_v, var);
}
var_after_expr = var3;
{
{ /* Inline flow$FlowContext$when_true (var_after_expr) on <var_after_expr:FlowContext> */
var6 = var_after_expr->attrs[COLOR_nitc__flow__FlowContext___when_true].val; /* _when_true on <var_after_expr:FlowContext> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_true");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 225);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline flow$FlowVisitor$current_flow_context= (var_v,var4) on <var_v:FlowVisitor> */
var_v->attrs[COLOR_nitc__flow__FlowVisitor___current_flow_context].val = var4; /* _current_flow_context on <var_v:FlowVisitor> */
RET_LABEL7:(void)0;
}
}
{
{ /* Inline parser_nodes$AIfExpr$n_then (self) on <self:AIfExpr> */
var10 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_then].val; /* _n_then on <self:AIfExpr> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
nitc___nitc__Visitor___enter_visit(var_v, var8); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:FlowVisitor>*/
}
{
{ /* Inline flow$FlowVisitor$current_flow_context (var_v) on <var_v:FlowVisitor> */
var13 = var_v->attrs[COLOR_nitc__flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <var_v:FlowVisitor> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 37);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
var_after_then = var11;
{
{ /* Inline flow$FlowContext$when_false (var_after_expr) on <var_after_expr:FlowContext> */
var16 = var_after_expr->attrs[COLOR_nitc__flow__FlowContext___when_false].val; /* _when_false on <var_after_expr:FlowContext> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_false");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 228);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline flow$FlowVisitor$current_flow_context= (var_v,var14) on <var_v:FlowVisitor> */
var_v->attrs[COLOR_nitc__flow__FlowVisitor___current_flow_context].val = var14; /* _current_flow_context on <var_v:FlowVisitor> */
RET_LABEL17:(void)0;
}
}
{
{ /* Inline parser_nodes$AIfExpr$n_else (self) on <self:AIfExpr> */
var20 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_else].val; /* _n_else on <self:AIfExpr> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
nitc___nitc__Visitor___enter_visit(var_v, var18); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:FlowVisitor>*/
}
{
{ /* Inline flow$FlowVisitor$current_flow_context (var_v) on <var_v:FlowVisitor> */
var23 = var_v->attrs[COLOR_nitc__flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <var_v:FlowVisitor> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 37);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
var_after_else = var21;
{
var24 = nitc__flow___nitc__flow__FlowVisitor___make_merge_flow(var_v, var_after_then, var_after_else);
}
RET_LABEL:;
}
/* method flow$AIfexprExpr$accept_flow_visitor for (self: AIfexprExpr, FlowVisitor) */
void nitc__flow___AIfexprExpr___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : FlowContext */;
val* var_after_expr /* var after_expr: FlowContext */;
val* var4 /* : FlowContext */;
val* var6 /* : FlowContext */;
val* var8 /* : AExpr */;
val* var10 /* : AExpr */;
val* var11 /* : FlowContext */;
val* var13 /* : FlowContext */;
val* var_after_then /* var after_then: FlowContext */;
val* var14 /* : FlowContext */;
val* var16 /* : FlowContext */;
val* var18 /* : AExpr */;
val* var20 /* : AExpr */;
val* var21 /* : FlowContext */;
val* var23 /* : FlowContext */;
val* var_after_else /* var after_else: FlowContext */;
val* var24 /* : FlowContext */;
var_v = p0;
{
{ /* Inline parser_nodes$AIfexprExpr$n_expr (self) on <self:AIfexprExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_expr].val; /* _n_expr on <self:AIfexprExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1947);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__flow___nitc__flow__FlowVisitor___visit_expr(var_v, var);
}
var_after_expr = var3;
{
{ /* Inline flow$FlowContext$when_true (var_after_expr) on <var_after_expr:FlowContext> */
var6 = var_after_expr->attrs[COLOR_nitc__flow__FlowContext___when_true].val; /* _when_true on <var_after_expr:FlowContext> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_true");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 225);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline flow$FlowVisitor$current_flow_context= (var_v,var4) on <var_v:FlowVisitor> */
var_v->attrs[COLOR_nitc__flow__FlowVisitor___current_flow_context].val = var4; /* _current_flow_context on <var_v:FlowVisitor> */
RET_LABEL7:(void)0;
}
}
{
{ /* Inline parser_nodes$AIfexprExpr$n_then (self) on <self:AIfexprExpr> */
var10 = self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_then].val; /* _n_then on <self:AIfexprExpr> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_then");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1953);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
nitc___nitc__Visitor___enter_visit(var_v, var8); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:FlowVisitor>*/
}
{
{ /* Inline flow$FlowVisitor$current_flow_context (var_v) on <var_v:FlowVisitor> */
var13 = var_v->attrs[COLOR_nitc__flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <var_v:FlowVisitor> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 37);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
var_after_then = var11;
{
{ /* Inline flow$FlowContext$when_false (var_after_expr) on <var_after_expr:FlowContext> */
var16 = var_after_expr->attrs[COLOR_nitc__flow__FlowContext___when_false].val; /* _when_false on <var_after_expr:FlowContext> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_false");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 228);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline flow$FlowVisitor$current_flow_context= (var_v,var14) on <var_v:FlowVisitor> */
var_v->attrs[COLOR_nitc__flow__FlowVisitor___current_flow_context].val = var14; /* _current_flow_context on <var_v:FlowVisitor> */
RET_LABEL17:(void)0;
}
}
{
{ /* Inline parser_nodes$AIfexprExpr$n_else (self) on <self:AIfexprExpr> */
var20 = self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_else].val; /* _n_else on <self:AIfexprExpr> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_else");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1959);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
nitc___nitc__Visitor___enter_visit(var_v, var18); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:FlowVisitor>*/
}
{
{ /* Inline flow$FlowVisitor$current_flow_context (var_v) on <var_v:FlowVisitor> */
var23 = var_v->attrs[COLOR_nitc__flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <var_v:FlowVisitor> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 37);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
var_after_else = var21;
{
var24 = nitc__flow___nitc__flow__FlowVisitor___make_merge_flow(var_v, var_after_then, var_after_else);
}
RET_LABEL:;
}
/* method flow$AWhileExpr$accept_flow_visitor for (self: AWhileExpr, FlowVisitor) */
void nitc__flow___AWhileExpr___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : FlowContext */;
val* var_before_loop /* var before_loop: FlowContext */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : FlowContext */;
val* var_after_expr /* var after_expr: FlowContext */;
val* var5 /* : FlowContext */;
val* var7 /* : FlowContext */;
val* var9 /* : nullable AExpr */;
val* var11 /* : nullable AExpr */;
val* var12 /* : FlowContext */;
val* var14 /* : FlowContext */;
val* var_after_block /* var after_block: FlowContext */;
val* var15 /* : nullable EscapeMark */;
val* var17 /* : nullable EscapeMark */;
val* var18 /* : FlowContext */;
val* var20 /* : FlowContext */;
val* var22 /* : nullable EscapeMark */;
val* var24 /* : nullable EscapeMark */;
var_v = p0;
{
var = nitc__flow___nitc__flow__FlowVisitor___make_sub_flow(var_v);
}
var_before_loop = var;
{
{ /* Inline parser_nodes$AWhileExpr$n_expr (self) on <self:AWhileExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AWhileExpr___n_expr].val; /* _n_expr on <self:AWhileExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1971);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc__flow___nitc__flow__FlowVisitor___visit_expr(var_v, var1);
}
var_after_expr = var4;
{
{ /* Inline flow$FlowContext$when_true (var_after_expr) on <var_after_expr:FlowContext> */
var7 = var_after_expr->attrs[COLOR_nitc__flow__FlowContext___when_true].val; /* _when_true on <var_after_expr:FlowContext> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_true");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 225);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline flow$FlowVisitor$current_flow_context= (var_v,var5) on <var_v:FlowVisitor> */
var_v->attrs[COLOR_nitc__flow__FlowVisitor___current_flow_context].val = var5; /* _current_flow_context on <var_v:FlowVisitor> */
RET_LABEL8:(void)0;
}
}
{
{ /* Inline parser_nodes$AWhileExpr$n_block (self) on <self:AWhileExpr> */
var11 = self->attrs[COLOR_nitc__parser_nodes__AWhileExpr___n_block].val; /* _n_block on <self:AWhileExpr> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
nitc___nitc__Visitor___enter_visit(var_v, var9); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:FlowVisitor>*/
}
{
{ /* Inline flow$FlowVisitor$current_flow_context (var_v) on <var_v:FlowVisitor> */
var14 = var_v->attrs[COLOR_nitc__flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <var_v:FlowVisitor> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 37);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_after_block = var12;
{
nitc___nitc__FlowContext___add_loop(var_before_loop, var_after_block); /* Direct call flow$FlowContext$add_loop on <var_before_loop:FlowContext>*/
}
{
{ /* Inline scope$AWhileExpr$continue_mark (self) on <self:AWhileExpr> */
var17 = self->attrs[COLOR_nitc__scope__AWhileExpr___continue_mark].val; /* _continue_mark on <self:AWhileExpr> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
nitc__flow___nitc__flow__FlowVisitor___merge_continues_to(var_v, var_before_loop, var15); /* Direct call flow$FlowVisitor$merge_continues_to on <var_v:FlowVisitor>*/
}
{
{ /* Inline flow$FlowContext$when_false (var_after_expr) on <var_after_expr:FlowContext> */
var20 = var_after_expr->attrs[COLOR_nitc__flow__FlowContext___when_false].val; /* _when_false on <var_after_expr:FlowContext> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_false");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 228);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline flow$FlowVisitor$current_flow_context= (var_v,var18) on <var_v:FlowVisitor> */
var_v->attrs[COLOR_nitc__flow__FlowVisitor___current_flow_context].val = var18; /* _current_flow_context on <var_v:FlowVisitor> */
RET_LABEL21:(void)0;
}
}
{
{ /* Inline scope$AWhileExpr$break_mark (self) on <self:AWhileExpr> */
var24 = self->attrs[COLOR_nitc__scope__AWhileExpr___break_mark].val; /* _break_mark on <self:AWhileExpr> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
nitc__flow___nitc__flow__FlowVisitor___merge_breaks(var_v, var22); /* Direct call flow$FlowVisitor$merge_breaks on <var_v:FlowVisitor>*/
}
RET_LABEL:;
}
/* method flow$ALoopExpr$accept_flow_visitor for (self: ALoopExpr, FlowVisitor) */
void nitc__flow___ALoopExpr___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : FlowContext */;
val* var_before_loop /* var before_loop: FlowContext */;
val* var1 /* : nullable AExpr */;
val* var3 /* : nullable AExpr */;
val* var4 /* : FlowContext */;
val* var6 /* : FlowContext */;
val* var_after_block /* var after_block: FlowContext */;
val* var7 /* : nullable EscapeMark */;
val* var9 /* : nullable EscapeMark */;
val* var10 /* : FlowContext */;
val* var11 /* : nullable EscapeMark */;
val* var13 /* : nullable EscapeMark */;
var_v = p0;
{
var = nitc__flow___nitc__flow__FlowVisitor___make_sub_flow(var_v);
}
var_before_loop = var;
{
{ /* Inline parser_nodes$ALoopExpr$n_block (self) on <self:ALoopExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ALoopExpr___n_block].val; /* _n_block on <self:ALoopExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:FlowVisitor>*/
}
{
{ /* Inline flow$FlowVisitor$current_flow_context (var_v) on <var_v:FlowVisitor> */
var6 = var_v->attrs[COLOR_nitc__flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <var_v:FlowVisitor> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 37);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_after_block = var4;
{
nitc___nitc__FlowContext___add_loop(var_before_loop, var_after_block); /* Direct call flow$FlowContext$add_loop on <var_before_loop:FlowContext>*/
}
{
{ /* Inline scope$ALoopExpr$continue_mark (self) on <self:ALoopExpr> */
var9 = self->attrs[COLOR_nitc__scope__ALoopExpr___continue_mark].val; /* _continue_mark on <self:ALoopExpr> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
nitc__flow___nitc__flow__FlowVisitor___merge_continues_to(var_v, var_before_loop, var7); /* Direct call flow$FlowVisitor$merge_continues_to on <var_v:FlowVisitor>*/
}
{
var10 = nitc__flow___nitc__flow__FlowVisitor___make_unreachable_flow(var_v);
}
{
{ /* Inline scope$ALoopExpr$break_mark (self) on <self:ALoopExpr> */
var13 = self->attrs[COLOR_nitc__scope__ALoopExpr___break_mark].val; /* _break_mark on <self:ALoopExpr> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
nitc__flow___nitc__flow__FlowVisitor___merge_breaks(var_v, var11); /* Direct call flow$FlowVisitor$merge_breaks on <var_v:FlowVisitor>*/
}
RET_LABEL:;
}
/* method flow$AForExpr$accept_flow_visitor for (self: AForExpr, FlowVisitor) */
void nitc__flow___AForExpr___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : ANodes[AForGroup] */;
val* var2 /* : ANodes[AForGroup] */;
val* var_ /* var : ANodes[AForGroup] */;
val* var3 /* : Iterator[ANode] */;
val* var_4 /* var : Iterator[AForGroup] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_g /* var g: AForGroup */;
val* var7 /* : AExpr */;
val* var9 /* : AExpr */;
val* var10 /* : FlowContext */;
val* var_before_loop /* var before_loop: FlowContext */;
val* var11 /* : nullable AExpr */;
val* var13 /* : nullable AExpr */;
val* var14 /* : FlowContext */;
val* var16 /* : FlowContext */;
val* var_after_block /* var after_block: FlowContext */;
val* var17 /* : nullable EscapeMark */;
val* var19 /* : nullable EscapeMark */;
val* var20 /* : FlowContext */;
val* var22 /* : FlowContext */;
val* var23 /* : FlowContext */;
val* var24 /* : nullable EscapeMark */;
val* var26 /* : nullable EscapeMark */;
var_v = p0;
{
{ /* Inline parser_nodes$AForExpr$n_groups (self) on <self:AForExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_groups].val; /* _n_groups on <self:AForExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_groups");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2001);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_ = var;
{
var3 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_);
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:Iterator[AForGroup]>*/
}
if (var5){
} else {
goto BREAK_label;
}
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:Iterator[AForGroup]>*/
}
var_g = var6;
{
{ /* Inline parser_nodes$AForGroup$n_expr (var_g) on <var_g:AForGroup> */
var9 = var_g->attrs[COLOR_nitc__parser_nodes__AForGroup___n_expr].val; /* _n_expr on <var_g:AForGroup> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2024);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
nitc___nitc__Visitor___enter_visit(var_v, var7); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:FlowVisitor>*/
}
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:Iterator[AForGroup]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:Iterator[AForGroup]>*/
}
{
var10 = nitc__flow___nitc__flow__FlowVisitor___make_sub_flow(var_v);
}
var_before_loop = var10;
{
{ /* Inline parser_nodes$AForExpr$n_block (self) on <self:AForExpr> */
var13 = self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_block].val; /* _n_block on <self:AForExpr> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
nitc___nitc__Visitor___enter_visit(var_v, var11); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:FlowVisitor>*/
}
{
{ /* Inline flow$FlowVisitor$current_flow_context (var_v) on <var_v:FlowVisitor> */
var16 = var_v->attrs[COLOR_nitc__flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <var_v:FlowVisitor> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 37);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
var_after_block = var14;
{
nitc___nitc__FlowContext___add_loop(var_before_loop, var_after_block); /* Direct call flow$FlowContext$add_loop on <var_before_loop:FlowContext>*/
}
{
{ /* Inline scope$AForExpr$continue_mark (self) on <self:AForExpr> */
var19 = self->attrs[COLOR_nitc__scope__AForExpr___continue_mark].val; /* _continue_mark on <self:AForExpr> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
nitc__flow___nitc__flow__FlowVisitor___merge_continues_to(var_v, var_before_loop, var17); /* Direct call flow$FlowVisitor$merge_continues_to on <var_v:FlowVisitor>*/
}
{
{ /* Inline flow$FlowVisitor$current_flow_context (var_v) on <var_v:FlowVisitor> */
var22 = var_v->attrs[COLOR_nitc__flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <var_v:FlowVisitor> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 37);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = nitc__flow___nitc__flow__FlowVisitor___make_merge_flow(var_v, var20, var_before_loop);
}
{
{ /* Inline scope$AForExpr$break_mark (self) on <self:AForExpr> */
var26 = self->attrs[COLOR_nitc__scope__AForExpr___break_mark].val; /* _break_mark on <self:AForExpr> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
nitc__flow___nitc__flow__FlowVisitor___merge_breaks(var_v, var24); /* Direct call flow$FlowVisitor$merge_breaks on <var_v:FlowVisitor>*/
}
RET_LABEL:;
}
/* method flow$AWithExpr$accept_flow_visitor for (self: AWithExpr, FlowVisitor) */
void nitc__flow___AWithExpr___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : nullable EscapeMark */;
val* var2 /* : nullable EscapeMark */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__flow___AWithExpr___ANode__accept_flow_visitor]))(self, p0); /* accept_flow_visitor on <self:AWithExpr>*/
}
{
{ /* Inline scope$AWithExpr$break_mark (self) on <self:AWithExpr> */
var2 = self->attrs[COLOR_nitc__scope__AWithExpr___break_mark].val; /* _break_mark on <self:AWithExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc__flow___nitc__flow__FlowVisitor___merge_breaks(var_v, var); /* Direct call flow$FlowVisitor$merge_breaks on <var_v:FlowVisitor>*/
}
RET_LABEL:;
}
/* method flow$AAssertExpr$accept_flow_visitor for (self: AAssertExpr, FlowVisitor) */
void nitc__flow___AAssertExpr___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : FlowContext */;
val* var_after_expr /* var after_expr: FlowContext */;
val* var4 /* : FlowContext */;
val* var6 /* : FlowContext */;
val* var8 /* : nullable AExpr */;
val* var10 /* : nullable AExpr */;
val* var11 /* : FlowContext */;
val* var13 /* : FlowContext */;
var_v = p0;
{
{ /* Inline parser_nodes$AAssertExpr$n_expr (self) on <self:AAssertExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AAssertExpr___n_expr].val; /* _n_expr on <self:AAssertExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2056);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__flow___nitc__flow__FlowVisitor___visit_expr(var_v, var);
}
var_after_expr = var3;
{
{ /* Inline flow$FlowContext$when_false (var_after_expr) on <var_after_expr:FlowContext> */
var6 = var_after_expr->attrs[COLOR_nitc__flow__FlowContext___when_false].val; /* _when_false on <var_after_expr:FlowContext> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_false");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 228);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline flow$FlowVisitor$current_flow_context= (var_v,var4) on <var_v:FlowVisitor> */
var_v->attrs[COLOR_nitc__flow__FlowVisitor___current_flow_context].val = var4; /* _current_flow_context on <var_v:FlowVisitor> */
RET_LABEL7:(void)0;
}
}
{
{ /* Inline parser_nodes$AAssertExpr$n_else (self) on <self:AAssertExpr> */
var10 = self->attrs[COLOR_nitc__parser_nodes__AAssertExpr___n_else].val; /* _n_else on <self:AAssertExpr> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
nitc___nitc__Visitor___enter_visit(var_v, var8); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:FlowVisitor>*/
}
{
{ /* Inline flow$FlowContext$when_true (var_after_expr) on <var_after_expr:FlowContext> */
var13 = var_after_expr->attrs[COLOR_nitc__flow__FlowContext___when_true].val; /* _when_true on <var_after_expr:FlowContext> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_true");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 225);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline flow$FlowVisitor$current_flow_context= (var_v,var11) on <var_v:FlowVisitor> */
var_v->attrs[COLOR_nitc__flow__FlowVisitor___current_flow_context].val = var11; /* _current_flow_context on <var_v:FlowVisitor> */
RET_LABEL14:(void)0;
}
}
RET_LABEL:;
}
/* method flow$AOrExpr$accept_flow_visitor for (self: AOrExpr, FlowVisitor) */
void nitc__flow___AOrExpr___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : FlowContext */;
val* var_after_expr /* var after_expr: FlowContext */;
val* var4 /* : FlowContext */;
val* var6 /* : FlowContext */;
val* var8 /* : AExpr */;
val* var10 /* : AExpr */;
val* var11 /* : FlowContext */;
val* var_after_expr2 /* var after_expr2: FlowContext */;
val* var12 /* : FlowContext */;
val* var14 /* : FlowContext */;
val* var15 /* : FlowContext */;
val* var17 /* : FlowContext */;
val* var18 /* : FlowContext */;
val* var_merge_true /* var merge_true: FlowContext */;
static val* varonce;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Bool */;
val* var25 /* : nullable Bool */;
val* var27 /* : FlowContext */;
val* var29 /* : FlowContext */;
val* var30 /* : FlowContext */;
var_v = p0;
{
{ /* Inline parser_nodes$ABinBoolExpr$n_expr (self) on <self:AOrExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AOrExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2131);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__flow___nitc__flow__FlowVisitor___visit_expr(var_v, var);
}
var_after_expr = var3;
{
{ /* Inline flow$FlowContext$when_false (var_after_expr) on <var_after_expr:FlowContext> */
var6 = var_after_expr->attrs[COLOR_nitc__flow__FlowContext___when_false].val; /* _when_false on <var_after_expr:FlowContext> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_false");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 228);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline flow$FlowVisitor$current_flow_context= (var_v,var4) on <var_v:FlowVisitor> */
var_v->attrs[COLOR_nitc__flow__FlowVisitor___current_flow_context].val = var4; /* _current_flow_context on <var_v:FlowVisitor> */
RET_LABEL7:(void)0;
}
}
{
{ /* Inline parser_nodes$ABinBoolExpr$n_expr2 (self) on <self:AOrExpr> */
var10 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AOrExpr> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2137);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nitc__flow___nitc__flow__FlowVisitor___visit_expr(var_v, var8);
}
var_after_expr2 = var11;
{
{ /* Inline flow$FlowContext$when_true (var_after_expr) on <var_after_expr:FlowContext> */
var14 = var_after_expr->attrs[COLOR_nitc__flow__FlowContext___when_true].val; /* _when_true on <var_after_expr:FlowContext> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_true");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 225);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline flow$FlowContext$when_true (var_after_expr2) on <var_after_expr2:FlowContext> */
var17 = var_after_expr2->attrs[COLOR_nitc__flow__FlowContext___when_true].val; /* _when_true on <var_after_expr2:FlowContext> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_true");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 225);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = nitc__flow___nitc__flow__FlowVisitor___make_merge_flow(var_v, var12, var15);
}
var_merge_true = var18;
if (likely(varonce!=NULL)) {
var19 = varonce;
} else {
var20 = "OR TRUE";
var22 = (val*)(7l<<2|1);
var23 = (val*)(7l<<2|1);
var24 = (val*)((long)(0)<<2|3);
var25 = (val*)((long)(0)<<2|3);
var21 = core__flat___CString___to_s_unsafe(var20, var22, var23, var24, var25);
var19 = var21;
varonce = var19;
}
{
{ /* Inline flow$FlowContext$name= (var_merge_true,var19) on <var_merge_true:FlowContext> */
var_merge_true->attrs[COLOR_nitc__flow__FlowContext___name].val = var19; /* _name on <var_merge_true:FlowContext> */
RET_LABEL26:(void)0;
}
}
{
{ /* Inline flow$FlowContext$when_false (var_after_expr2) on <var_after_expr2:FlowContext> */
var29 = var_after_expr2->attrs[COLOR_nitc__flow__FlowContext___when_false].val; /* _when_false on <var_after_expr2:FlowContext> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_false");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 228);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
var30 = nitc__flow___nitc__flow__FlowVisitor___make_true_false_flow(var_v, var_merge_true, var27);
}
RET_LABEL:;
}
/* method flow$AImpliesExpr$accept_flow_visitor for (self: AImpliesExpr, FlowVisitor) */
void nitc__flow___AImpliesExpr___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : FlowContext */;
val* var_after_expr /* var after_expr: FlowContext */;
val* var4 /* : FlowContext */;
val* var6 /* : FlowContext */;
val* var8 /* : AExpr */;
val* var10 /* : AExpr */;
val* var11 /* : FlowContext */;
val* var_after_expr2 /* var after_expr2: FlowContext */;
val* var12 /* : FlowContext */;
val* var14 /* : FlowContext */;
val* var15 /* : FlowContext */;
val* var17 /* : FlowContext */;
val* var18 /* : FlowContext */;
val* var_merge_true /* var merge_true: FlowContext */;
static val* varonce;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Bool */;
val* var25 /* : nullable Bool */;
val* var27 /* : FlowContext */;
val* var29 /* : FlowContext */;
val* var30 /* : FlowContext */;
var_v = p0;
{
{ /* Inline parser_nodes$ABinBoolExpr$n_expr (self) on <self:AImpliesExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AImpliesExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2131);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__flow___nitc__flow__FlowVisitor___visit_expr(var_v, var);
}
var_after_expr = var3;
{
{ /* Inline flow$FlowContext$when_true (var_after_expr) on <var_after_expr:FlowContext> */
var6 = var_after_expr->attrs[COLOR_nitc__flow__FlowContext___when_true].val; /* _when_true on <var_after_expr:FlowContext> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_true");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 225);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline flow$FlowVisitor$current_flow_context= (var_v,var4) on <var_v:FlowVisitor> */
var_v->attrs[COLOR_nitc__flow__FlowVisitor___current_flow_context].val = var4; /* _current_flow_context on <var_v:FlowVisitor> */
RET_LABEL7:(void)0;
}
}
{
{ /* Inline parser_nodes$ABinBoolExpr$n_expr2 (self) on <self:AImpliesExpr> */
var10 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AImpliesExpr> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2137);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nitc__flow___nitc__flow__FlowVisitor___visit_expr(var_v, var8);
}
var_after_expr2 = var11;
{
{ /* Inline flow$FlowContext$when_false (var_after_expr) on <var_after_expr:FlowContext> */
var14 = var_after_expr->attrs[COLOR_nitc__flow__FlowContext___when_false].val; /* _when_false on <var_after_expr:FlowContext> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_false");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 228);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline flow$FlowContext$when_true (var_after_expr2) on <var_after_expr2:FlowContext> */
var17 = var_after_expr2->attrs[COLOR_nitc__flow__FlowContext___when_true].val; /* _when_true on <var_after_expr2:FlowContext> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_true");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 225);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = nitc__flow___nitc__flow__FlowVisitor___make_merge_flow(var_v, var12, var15);
}
var_merge_true = var18;
if (likely(varonce!=NULL)) {
var19 = varonce;
} else {
var20 = "OR TRUE";
var22 = (val*)(7l<<2|1);
var23 = (val*)(7l<<2|1);
var24 = (val*)((long)(0)<<2|3);
var25 = (val*)((long)(0)<<2|3);
var21 = core__flat___CString___to_s_unsafe(var20, var22, var23, var24, var25);
var19 = var21;
varonce = var19;
}
{
{ /* Inline flow$FlowContext$name= (var_merge_true,var19) on <var_merge_true:FlowContext> */
var_merge_true->attrs[COLOR_nitc__flow__FlowContext___name].val = var19; /* _name on <var_merge_true:FlowContext> */
RET_LABEL26:(void)0;
}
}
{
{ /* Inline flow$FlowContext$when_false (var_after_expr2) on <var_after_expr2:FlowContext> */
var29 = var_after_expr2->attrs[COLOR_nitc__flow__FlowContext___when_false].val; /* _when_false on <var_after_expr2:FlowContext> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_false");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 228);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
var30 = nitc__flow___nitc__flow__FlowVisitor___make_true_false_flow(var_v, var_merge_true, var27);
}
RET_LABEL:;
}
/* method flow$AAndExpr$accept_flow_visitor for (self: AAndExpr, FlowVisitor) */
void nitc__flow___AAndExpr___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : FlowContext */;
val* var_after_expr /* var after_expr: FlowContext */;
val* var4 /* : FlowContext */;
val* var6 /* : FlowContext */;
val* var8 /* : AExpr */;
val* var10 /* : AExpr */;
val* var11 /* : FlowContext */;
val* var_after_expr2 /* var after_expr2: FlowContext */;
val* var12 /* : FlowContext */;
val* var14 /* : FlowContext */;
val* var15 /* : FlowContext */;
val* var17 /* : FlowContext */;
val* var18 /* : FlowContext */;
val* var_merge_false /* var merge_false: FlowContext */;
static val* varonce;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Bool */;
val* var25 /* : nullable Bool */;
val* var27 /* : FlowContext */;
val* var29 /* : FlowContext */;
val* var30 /* : FlowContext */;
var_v = p0;
{
{ /* Inline parser_nodes$ABinBoolExpr$n_expr (self) on <self:AAndExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AAndExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2131);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__flow___nitc__flow__FlowVisitor___visit_expr(var_v, var);
}
var_after_expr = var3;
{
{ /* Inline flow$FlowContext$when_true (var_after_expr) on <var_after_expr:FlowContext> */
var6 = var_after_expr->attrs[COLOR_nitc__flow__FlowContext___when_true].val; /* _when_true on <var_after_expr:FlowContext> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_true");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 225);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline flow$FlowVisitor$current_flow_context= (var_v,var4) on <var_v:FlowVisitor> */
var_v->attrs[COLOR_nitc__flow__FlowVisitor___current_flow_context].val = var4; /* _current_flow_context on <var_v:FlowVisitor> */
RET_LABEL7:(void)0;
}
}
{
{ /* Inline parser_nodes$ABinBoolExpr$n_expr2 (self) on <self:AAndExpr> */
var10 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AAndExpr> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2137);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nitc__flow___nitc__flow__FlowVisitor___visit_expr(var_v, var8);
}
var_after_expr2 = var11;
{
{ /* Inline flow$FlowContext$when_false (var_after_expr) on <var_after_expr:FlowContext> */
var14 = var_after_expr->attrs[COLOR_nitc__flow__FlowContext___when_false].val; /* _when_false on <var_after_expr:FlowContext> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_false");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 228);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline flow$FlowContext$when_false (var_after_expr2) on <var_after_expr2:FlowContext> */
var17 = var_after_expr2->attrs[COLOR_nitc__flow__FlowContext___when_false].val; /* _when_false on <var_after_expr2:FlowContext> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_false");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 228);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = nitc__flow___nitc__flow__FlowVisitor___make_merge_flow(var_v, var12, var15);
}
var_merge_false = var18;
if (likely(varonce!=NULL)) {
var19 = varonce;
} else {
var20 = "AND FALSE";
var22 = (val*)(9l<<2|1);
var23 = (val*)(9l<<2|1);
var24 = (val*)((long)(0)<<2|3);
var25 = (val*)((long)(0)<<2|3);
var21 = core__flat___CString___to_s_unsafe(var20, var22, var23, var24, var25);
var19 = var21;
varonce = var19;
}
{
{ /* Inline flow$FlowContext$name= (var_merge_false,var19) on <var_merge_false:FlowContext> */
var_merge_false->attrs[COLOR_nitc__flow__FlowContext___name].val = var19; /* _name on <var_merge_false:FlowContext> */
RET_LABEL26:(void)0;
}
}
{
{ /* Inline flow$FlowContext$when_true (var_after_expr2) on <var_after_expr2:FlowContext> */
var29 = var_after_expr2->attrs[COLOR_nitc__flow__FlowContext___when_true].val; /* _when_true on <var_after_expr2:FlowContext> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_true");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 225);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
var30 = nitc__flow___nitc__flow__FlowVisitor___make_true_false_flow(var_v, var27, var_merge_false);
}
RET_LABEL:;
}
/* method flow$ANotExpr$accept_flow_visitor for (self: ANotExpr, FlowVisitor) */
void nitc__flow___ANotExpr___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : FlowContext */;
val* var_after_expr /* var after_expr: FlowContext */;
val* var4 /* : FlowContext */;
val* var6 /* : FlowContext */;
val* var7 /* : FlowContext */;
val* var9 /* : FlowContext */;
val* var10 /* : FlowContext */;
var_v = p0;
{
{ /* Inline parser_nodes$ANotExpr$n_expr (self) on <self:ANotExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ANotExpr___n_expr].val; /* _n_expr on <self:ANotExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2171);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__flow___nitc__flow__FlowVisitor___visit_expr(var_v, var);
}
var_after_expr = var3;
{
{ /* Inline flow$FlowContext$when_false (var_after_expr) on <var_after_expr:FlowContext> */
var6 = var_after_expr->attrs[COLOR_nitc__flow__FlowContext___when_false].val; /* _when_false on <var_after_expr:FlowContext> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_false");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 228);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline flow$FlowContext$when_true (var_after_expr) on <var_after_expr:FlowContext> */
var9 = var_after_expr->attrs[COLOR_nitc__flow__FlowContext___when_true].val; /* _when_true on <var_after_expr:FlowContext> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_true");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 225);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = nitc__flow___nitc__flow__FlowVisitor___make_true_false_flow(var_v, var4, var7);
}
RET_LABEL:;
}
/* method flow$AOrElseExpr$accept_flow_visitor for (self: AOrElseExpr, FlowVisitor) */
void nitc__flow___AOrElseExpr___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__flow___AOrElseExpr___ANode__accept_flow_visitor]))(self, p0); /* accept_flow_visitor on <self:AOrElseExpr>*/
}
RET_LABEL:;
}
/* method flow$AEqExpr$accept_flow_visitor for (self: AEqExpr, FlowVisitor) */
void nitc__flow___AEqExpr___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : FlowContext */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__flow___AEqExpr___ANode__accept_flow_visitor]))(self, p0); /* accept_flow_visitor on <self:AEqExpr>*/
}
{
var = nitc__flow___nitc__flow__FlowVisitor___make_sub_true_false_flow(var_v);
}
RET_LABEL:;
}
/* method flow$ANeExpr$accept_flow_visitor for (self: ANeExpr, FlowVisitor) */
void nitc__flow___ANeExpr___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : FlowContext */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__flow___ANeExpr___ANode__accept_flow_visitor]))(self, p0); /* accept_flow_visitor on <self:ANeExpr>*/
}
{
var = nitc__flow___nitc__flow__FlowVisitor___make_sub_true_false_flow(var_v);
}
RET_LABEL:;
}
/* method flow$AIsaExpr$accept_flow_visitor for (self: AIsaExpr, FlowVisitor) */
void nitc__flow___AIsaExpr___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : FlowContext */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__flow___AIsaExpr___ANode__accept_flow_visitor]))(self, p0); /* accept_flow_visitor on <self:AIsaExpr>*/
}
{
var = nitc__flow___nitc__flow__FlowVisitor___make_sub_true_false_flow(var_v);
}
RET_LABEL:;
}
/* method flow$AParExpr$accept_flow_visitor for (self: AParExpr, FlowVisitor) */
void nitc__flow___AParExpr___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : FlowContext */;
val* var_after_expr /* var after_expr: FlowContext */;
var_v = p0;
{
{ /* Inline parser_nodes$AParExpr$n_expr (self) on <self:AParExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AParExpr___n_expr].val; /* _n_expr on <self:AParExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2656);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__flow___nitc__flow__FlowVisitor___visit_expr(var_v, var);
}
var_after_expr = var3;
{
{ /* Inline flow$FlowVisitor$current_flow_context= (var_v,var_after_expr) on <var_v:FlowVisitor> */
var_v->attrs[COLOR_nitc__flow__FlowVisitor___current_flow_context].val = var_after_expr; /* _current_flow_context on <var_v:FlowVisitor> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method flow$AOnceExpr$accept_flow_visitor for (self: AOnceExpr, FlowVisitor) */
void nitc__flow___AOnceExpr___ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : FlowContext */;
val* var_after_expr /* var after_expr: FlowContext */;
var_v = p0;
{
{ /* Inline parser_nodes$AOnceExpr$n_expr (self) on <self:AOnceExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AOnceExpr___n_expr].val; /* _n_expr on <self:AOnceExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2095);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__flow___nitc__flow__FlowVisitor___visit_expr(var_v, var);
}
var_after_expr = var3;
{
{ /* Inline flow$FlowVisitor$current_flow_context= (var_v,var_after_expr) on <var_v:FlowVisitor> */
var_v->attrs[COLOR_nitc__flow__FlowVisitor___current_flow_context].val = var_after_expr; /* _current_flow_context on <var_v:FlowVisitor> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
