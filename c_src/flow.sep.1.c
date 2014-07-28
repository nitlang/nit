#include "flow.sep.0.h"
/* method flow#ToolContext#flow_phase for (self: ToolContext): Phase */
val* flow__ToolContext__flow_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_flow__ToolContext___flow_phase].val; /* _flow_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _flow_phase");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 26);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flow#ToolContext#flow_phase for (self: Object): Phase */
val* VIRTUAL_flow__ToolContext__flow_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
val* var3 /* : Phase */;
{ /* Inline flow#ToolContext#flow_phase (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_flow__ToolContext___flow_phase].val; /* _flow_phase on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _flow_phase");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 26);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowPhase#process_npropdef for (self: FlowPhase, APropdef) */
void flow__FlowPhase__process_npropdef(val* self, val* p0) {
val* var_npropdef /* var npropdef: APropdef */;
val* var /* : ToolContext */;
val* var2 /* : ToolContext */;
var_npropdef = p0;
{
{ /* Inline phase#Phase#toolcontext (self) on <self:FlowPhase> */
var2 = self->attrs[COLOR_phase__Phase___toolcontext].val; /* _toolcontext on <self:FlowPhase> */
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
flow__APropdef__do_flow(var_npropdef, var); /* Direct call flow#APropdef#do_flow on <var_npropdef:APropdef>*/
}
RET_LABEL:;
}
/* method flow#FlowPhase#process_npropdef for (self: Object, APropdef) */
void VIRTUAL_flow__FlowPhase__process_npropdef(val* self, val* p0) {
flow__FlowPhase__process_npropdef(self, p0); /* Direct call flow#FlowPhase#process_npropdef on <self:Object(FlowPhase)>*/
RET_LABEL:;
}
/* method flow#FlowVisitor#current_flow_context for (self: FlowVisitor): FlowContext */
val* flow__FlowVisitor__current_flow_context(val* self) {
val* var /* : FlowContext */;
val* var1 /* : FlowContext */;
var1 = self->attrs[COLOR_flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <self:FlowVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 39);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowVisitor#current_flow_context for (self: Object): FlowContext */
val* VIRTUAL_flow__FlowVisitor__current_flow_context(val* self) {
val* var /* : FlowContext */;
val* var1 /* : FlowContext */;
val* var3 /* : FlowContext */;
{ /* Inline flow#FlowVisitor#current_flow_context (self) on <self:Object(FlowVisitor)> */
var3 = self->attrs[COLOR_flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <self:Object(FlowVisitor)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 39);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowVisitor#current_flow_context= for (self: FlowVisitor, FlowContext) */
void flow__FlowVisitor__current_flow_context_61d(val* self, val* p0) {
self->attrs[COLOR_flow__FlowVisitor___current_flow_context].val = p0; /* _current_flow_context on <self:FlowVisitor> */
RET_LABEL:;
}
/* method flow#FlowVisitor#current_flow_context= for (self: Object, FlowContext) */
void VIRTUAL_flow__FlowVisitor__current_flow_context_61d(val* self, val* p0) {
{ /* Inline flow#FlowVisitor#current_flow_context= (self,p0) on <self:Object(FlowVisitor)> */
self->attrs[COLOR_flow__FlowVisitor___current_flow_context].val = p0; /* _current_flow_context on <self:Object(FlowVisitor)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method flow#FlowVisitor#toolcontext for (self: FlowVisitor): ToolContext */
val* flow__FlowVisitor__toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_flow__FlowVisitor___toolcontext].val; /* _toolcontext on <self:FlowVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 41);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowVisitor#toolcontext for (self: Object): ToolContext */
val* VIRTUAL_flow__FlowVisitor__toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
val* var3 /* : ToolContext */;
{ /* Inline flow#FlowVisitor#toolcontext (self) on <self:Object(FlowVisitor)> */
var3 = self->attrs[COLOR_flow__FlowVisitor___toolcontext].val; /* _toolcontext on <self:Object(FlowVisitor)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 41);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowVisitor#toolcontext= for (self: FlowVisitor, ToolContext) */
void flow__FlowVisitor__toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_flow__FlowVisitor___toolcontext].val = p0; /* _toolcontext on <self:FlowVisitor> */
RET_LABEL:;
}
/* method flow#FlowVisitor#toolcontext= for (self: Object, ToolContext) */
void VIRTUAL_flow__FlowVisitor__toolcontext_61d(val* self, val* p0) {
{ /* Inline flow#FlowVisitor#toolcontext= (self,p0) on <self:Object(FlowVisitor)> */
self->attrs[COLOR_flow__FlowVisitor___toolcontext].val = p0; /* _toolcontext on <self:Object(FlowVisitor)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method flow#FlowVisitor#init for (self: FlowVisitor, ToolContext) */
void flow__FlowVisitor__init(val* self, val* p0) {
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var /* : FlowContext */;
val* var5 /* : Array[FlowContext] */;
val* var7 /* : Array[FlowContext] */;
val* var8 /* : FlowContext */;
val* var10 /* : FlowContext */;
val* var11 /* : FlowContext */;
val* var13 /* : FlowContext */;
short int var14 /* : Bool */;
{
{ /* Inline parser_nodes#Visitor#init (self) on <self:FlowVisitor> */
RET_LABEL1:(void)0;
}
}
var_toolcontext = p0;
{
{ /* Inline flow#FlowVisitor#toolcontext= (self,var_toolcontext) on <self:FlowVisitor> */
self->attrs[COLOR_flow__FlowVisitor___toolcontext].val = var_toolcontext; /* _toolcontext on <self:FlowVisitor> */
RET_LABEL2:(void)0;
}
}
var = NEW_flow__FlowContext(&type_flow__FlowContext);
{
{ /* Inline flow#FlowContext#init (var) on <var:FlowContext> */
RET_LABEL3:(void)0;
}
}
{
{ /* Inline flow#FlowVisitor#current_flow_context= (self,var) on <self:FlowVisitor> */
self->attrs[COLOR_flow__FlowVisitor___current_flow_context].val = var; /* _current_flow_context on <self:FlowVisitor> */
RET_LABEL4:(void)0;
}
}
{
{ /* Inline flow#FlowVisitor#flows (self) on <self:FlowVisitor> */
var7 = self->attrs[COLOR_flow__FlowVisitor___flows].val; /* _flows on <self:FlowVisitor> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _flows");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 80);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline flow#FlowVisitor#current_flow_context (self) on <self:FlowVisitor> */
var10 = self->attrs[COLOR_flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <self:FlowVisitor> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 39);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
array__Array__add(var5, var8); /* Direct call array#Array#add on <var5:Array[FlowContext]>*/
}
{
{ /* Inline flow#FlowVisitor#current_flow_context (self) on <self:FlowVisitor> */
var13 = self->attrs[COLOR_flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <self:FlowVisitor> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 39);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
var14 = 1;
{
{ /* Inline flow#FlowContext#is_start= (var11,var14) on <var11:FlowContext> */
var11->attrs[COLOR_flow__FlowContext___is_start].s = var14; /* _is_start on <var11:FlowContext> */
RET_LABEL15:(void)0;
}
}
RET_LABEL:;
}
/* method flow#FlowVisitor#init for (self: Object, ToolContext) */
void VIRTUAL_flow__FlowVisitor__init(val* self, val* p0) {
flow__FlowVisitor__init(self, p0); /* Direct call flow#FlowVisitor#init on <self:Object(FlowVisitor)>*/
RET_LABEL:;
}
/* method flow#FlowVisitor#first for (self: FlowVisitor): nullable ANode */
val* flow__FlowVisitor__first(val* self) {
val* var /* : nullable ANode */;
val* var1 /* : nullable ANode */;
var1 = self->attrs[COLOR_flow__FlowVisitor___first].val; /* _first on <self:FlowVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowVisitor#first for (self: Object): nullable ANode */
val* VIRTUAL_flow__FlowVisitor__first(val* self) {
val* var /* : nullable ANode */;
val* var1 /* : nullable ANode */;
val* var3 /* : nullable ANode */;
{ /* Inline flow#FlowVisitor#first (self) on <self:Object(FlowVisitor)> */
var3 = self->attrs[COLOR_flow__FlowVisitor___first].val; /* _first on <self:Object(FlowVisitor)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowVisitor#first= for (self: FlowVisitor, nullable ANode) */
void flow__FlowVisitor__first_61d(val* self, val* p0) {
self->attrs[COLOR_flow__FlowVisitor___first].val = p0; /* _first on <self:FlowVisitor> */
RET_LABEL:;
}
/* method flow#FlowVisitor#first= for (self: Object, nullable ANode) */
void VIRTUAL_flow__FlowVisitor__first_61d(val* self, val* p0) {
{ /* Inline flow#FlowVisitor#first= (self,p0) on <self:Object(FlowVisitor)> */
self->attrs[COLOR_flow__FlowVisitor___first].val = p0; /* _first on <self:Object(FlowVisitor)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method flow#FlowVisitor#visit for (self: FlowVisitor, ANode) */
void flow__FlowVisitor__visit(val* self, val* p0) {
val* var_node /* var node: ANode */;
val* var /* : nullable ANode */;
val* var2 /* : nullable ANode */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var11 /* : FlowContext */;
val* var13 /* : FlowContext */;
val* var14 /* : nullable ANode */;
val* var16 /* : nullable ANode */;
val* var17 /* : null */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
val* var24 /* : FlowContext */;
val* var26 /* : FlowContext */;
short int var28 /* : Bool */;
int cltype;
int idtype;
val* var29 /* : FlowContext */;
val* var31 /* : FlowContext */;
val* var_flow /* var flow: FlowContext */;
short int var33 /* : Bool */;
val* var34 /* : FlowContext */;
val* var36 /* : FlowContext */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
val* var_other40 /* var other: nullable Object */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var_ /* var : Bool */;
val* var44 /* : FlowContext */;
val* var46 /* : FlowContext */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
val* var53 /* : FlowContext */;
val* var54 /* : FlowContext */;
val* var56 /* : FlowContext */;
static val* varonce;
val* var57 /* : String */;
char* var58 /* : NativeString */;
long var59 /* : Int */;
val* var60 /* : FlatString */;
val* var62 /* : nullable ANode */;
val* var64 /* : nullable ANode */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
short int var70 /* : Bool */;
var_node = p0;
{
{ /* Inline flow#FlowVisitor#first (self) on <self:FlowVisitor> */
var2 = self->attrs[COLOR_flow__FlowVisitor___first].val; /* _first on <self:FlowVisitor> */
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
{ /* Inline kernel#Object#== (var,var3) on <var:nullable ANode> */
var_other = var3;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:nullable ANode(ANode)> */
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
{ /* Inline flow#FlowVisitor#first= (self,var_node) on <self:FlowVisitor> */
self->attrs[COLOR_flow__FlowVisitor___first].val = var_node; /* _first on <self:FlowVisitor> */
RET_LABEL10:(void)0;
}
}
} else {
}
{
{ /* Inline flow#FlowVisitor#current_flow_context (self) on <self:FlowVisitor> */
var13 = self->attrs[COLOR_flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <self:FlowVisitor> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 39);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline flow#FlowContext#node (var11) on <var11:FlowContext> */
var16 = var11->attrs[COLOR_flow__FlowContext___node].val; /* _node on <var11:FlowContext> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
var17 = NULL;
if (var14 == NULL) {
var18 = 1; /* is null */
} else {
var18 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var14,var17) on <var14:nullable ANode> */
var_other = var17;
{
{ /* Inline kernel#Object#is_same_instance (var14,var_other) on <var14:nullable ANode(ANode)> */
var23 = var14 == var_other;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var18 = var19;
}
if (var18){
{
{ /* Inline flow#FlowVisitor#current_flow_context (self) on <self:FlowVisitor> */
var26 = self->attrs[COLOR_flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <self:FlowVisitor> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 39);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline flow#FlowContext#node= (var24,var_node) on <var24:FlowContext> */
var24->attrs[COLOR_flow__FlowContext___node].val = var_node; /* _node on <var24:FlowContext> */
RET_LABEL27:(void)0;
}
}
} else {
}
{
((void (*)(val*, val*))(var_node->class->vft[COLOR_flow__ANode__accept_flow_visitor]))(var_node, self) /* accept_flow_visitor on <var_node:ANode>*/;
}
/* <var_node:ANode> isa AExpr */
cltype = type_parser_nodes__AExpr.color;
idtype = type_parser_nodes__AExpr.id;
if(cltype >= var_node->type->table_size) {
var28 = 0;
} else {
var28 = var_node->type->type_table[cltype] == idtype;
}
if (var28){
{
{ /* Inline flow#FlowVisitor#current_flow_context (self) on <self:FlowVisitor> */
var31 = self->attrs[COLOR_flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <self:FlowVisitor> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 39);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
var_flow = var29;
{
{ /* Inline flow#AExpr#after_flow_context= (var_node,var_flow) on <var_node:ANode(AExpr)> */
var_node->attrs[COLOR_flow__AExpr___after_flow_context].val = var_flow; /* _after_flow_context on <var_node:ANode(AExpr)> */
RET_LABEL32:(void)0;
}
}
{
{ /* Inline flow#FlowContext#when_true (var_flow) on <var_flow:FlowContext> */
var36 = var_flow->attrs[COLOR_flow__FlowContext___when_true].val; /* _when_true on <var_flow:FlowContext> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_true");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 228);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var34,var_flow) on <var34:FlowContext> */
var_other40 = var_flow;
{
var42 = ((short int (*)(val*, val*))(var34->class->vft[COLOR_kernel__Object___61d_61d]))(var34, var_other40) /* == on <var34:FlowContext>*/;
var41 = var42;
}
var43 = !var41;
var38 = var43;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
var37 = var38;
}
var_ = var37;
if (var37){
var33 = var_;
} else {
{
{ /* Inline flow#FlowContext#when_false (var_flow) on <var_flow:FlowContext> */
var46 = var_flow->attrs[COLOR_flow__FlowContext___when_false].val; /* _when_false on <var_flow:FlowContext> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_false");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 231);
show_backtrace(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var44,var_flow) on <var44:FlowContext> */
var_other40 = var_flow;
{
var51 = ((short int (*)(val*, val*))(var44->class->vft[COLOR_kernel__Object___61d_61d]))(var44, var_other40) /* == on <var44:FlowContext>*/;
var50 = var51;
}
var52 = !var50;
var48 = var52;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
var47 = var48;
}
var33 = var47;
}
if (var33){
{
var53 = flow__FlowVisitor__make_sub_flow(self);
}
var53;
{
{ /* Inline flow#FlowVisitor#current_flow_context (self) on <self:FlowVisitor> */
var56 = self->attrs[COLOR_flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <self:FlowVisitor> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 39);
show_backtrace(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
if (varonce) {
var57 = varonce;
} else {
var58 = "AUTOSUB";
var59 = 7;
var60 = string__NativeString__to_s_with_length(var58, var59);
var57 = var60;
varonce = var57;
}
{
{ /* Inline flow#FlowContext#name= (var54,var57) on <var54:FlowContext> */
var54->attrs[COLOR_flow__FlowContext___name].val = var57; /* _name on <var54:FlowContext> */
RET_LABEL61:(void)0;
}
}
} else {
}
} else {
}
{
{ /* Inline flow#FlowVisitor#first (self) on <self:FlowVisitor> */
var64 = self->attrs[COLOR_flow__FlowVisitor___first].val; /* _first on <self:FlowVisitor> */
var62 = var64;
RET_LABEL63:(void)0;
}
}
if (var62 == NULL) {
var65 = 0; /* <var_node:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var62,var_node) on <var62:nullable ANode> */
var_other = var_node;
{
{ /* Inline kernel#Object#is_same_instance (var62,var_other) on <var62:nullable ANode(ANode)> */
var70 = var62 == var_other;
var68 = var70;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
var66 = var68;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
var65 = var66;
}
if (var65){
} else {
}
RET_LABEL:;
}
/* method flow#FlowVisitor#visit for (self: Object, ANode) */
void VIRTUAL_flow__FlowVisitor__visit(val* self, val* p0) {
flow__FlowVisitor__visit(self, p0); /* Direct call flow#FlowVisitor#visit on <self:Object(FlowVisitor)>*/
RET_LABEL:;
}
/* method flow#FlowVisitor#visit_expr for (self: FlowVisitor, AExpr): FlowContext */
val* flow__FlowVisitor__visit_expr(val* self, val* p0) {
val* var /* : FlowContext */;
val* var_node /* var node: AExpr */;
val* var1 /* : nullable FlowContext */;
val* var3 /* : nullable FlowContext */;
var_node = p0;
{
parser_nodes__Visitor__enter_visit(self, var_node); /* Direct call parser_nodes#Visitor#enter_visit on <self:FlowVisitor>*/
}
{
{ /* Inline flow#AExpr#after_flow_context (var_node) on <var_node:AExpr> */
var3 = var_node->attrs[COLOR_flow__AExpr___after_flow_context].val; /* _after_flow_context on <var_node:AExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 77);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flow#FlowVisitor#visit_expr for (self: Object, AExpr): FlowContext */
val* VIRTUAL_flow__FlowVisitor__visit_expr(val* self, val* p0) {
val* var /* : FlowContext */;
val* var1 /* : FlowContext */;
var1 = flow__FlowVisitor__visit_expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowVisitor#flows for (self: FlowVisitor): Array[FlowContext] */
val* flow__FlowVisitor__flows(val* self) {
val* var /* : Array[FlowContext] */;
val* var1 /* : Array[FlowContext] */;
var1 = self->attrs[COLOR_flow__FlowVisitor___flows].val; /* _flows on <self:FlowVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _flows");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 80);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowVisitor#flows for (self: Object): Array[FlowContext] */
val* VIRTUAL_flow__FlowVisitor__flows(val* self) {
val* var /* : Array[FlowContext] */;
val* var1 /* : Array[FlowContext] */;
val* var3 /* : Array[FlowContext] */;
{ /* Inline flow#FlowVisitor#flows (self) on <self:Object(FlowVisitor)> */
var3 = self->attrs[COLOR_flow__FlowVisitor___flows].val; /* _flows on <self:Object(FlowVisitor)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _flows");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 80);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowVisitor#make_sub_flow for (self: FlowVisitor): FlowContext */
val* flow__FlowVisitor__make_sub_flow(val* self) {
val* var /* : FlowContext */;
val* var1 /* : FlowContext */;
val* var_flow /* var flow: FlowContext */;
val* var3 /* : Array[FlowContext] */;
val* var5 /* : Array[FlowContext] */;
val* var6 /* : nullable ANode */;
val* var8 /* : FlowContext */;
val* var10 /* : FlowContext */;
var1 = NEW_flow__FlowContext(&type_flow__FlowContext);
{
{ /* Inline flow#FlowContext#init (var1) on <var1:FlowContext> */
RET_LABEL2:(void)0;
}
}
var_flow = var1;
{
{ /* Inline flow#FlowVisitor#flows (self) on <self:FlowVisitor> */
var5 = self->attrs[COLOR_flow__FlowVisitor___flows].val; /* _flows on <self:FlowVisitor> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _flows");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 80);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
array__Array__add(var3, var_flow); /* Direct call array#Array#add on <var3:Array[FlowContext]>*/
}
{
var6 = parser_nodes__Visitor__current_node(self);
}
{
{ /* Inline flow#FlowContext#node= (var_flow,var6) on <var_flow:FlowContext> */
var_flow->attrs[COLOR_flow__FlowContext___node].val = var6; /* _node on <var_flow:FlowContext> */
RET_LABEL7:(void)0;
}
}
{
{ /* Inline flow#FlowVisitor#current_flow_context (self) on <self:FlowVisitor> */
var10 = self->attrs[COLOR_flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <self:FlowVisitor> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 39);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
flow__FlowContext__add_previous(var_flow, var8); /* Direct call flow#FlowContext#add_previous on <var_flow:FlowContext>*/
}
{
{ /* Inline flow#FlowVisitor#current_flow_context= (self,var_flow) on <self:FlowVisitor> */
self->attrs[COLOR_flow__FlowVisitor___current_flow_context].val = var_flow; /* _current_flow_context on <self:FlowVisitor> */
RET_LABEL11:(void)0;
}
}
var = var_flow;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flow#FlowVisitor#make_sub_flow for (self: Object): FlowContext */
val* VIRTUAL_flow__FlowVisitor__make_sub_flow(val* self) {
val* var /* : FlowContext */;
val* var1 /* : FlowContext */;
var1 = flow__FlowVisitor__make_sub_flow(self);
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowVisitor#make_merge_flow for (self: FlowVisitor, FlowContext, FlowContext): FlowContext */
val* flow__FlowVisitor__make_merge_flow(val* self, val* p0, val* p1) {
val* var /* : FlowContext */;
val* var_flow1 /* var flow1: FlowContext */;
val* var_flow2 /* var flow2: FlowContext */;
val* var1 /* : FlowContext */;
val* var_flow /* var flow: FlowContext */;
val* var3 /* : Array[FlowContext] */;
val* var5 /* : Array[FlowContext] */;
val* var6 /* : nullable ANode */;
var_flow1 = p0;
var_flow2 = p1;
var1 = NEW_flow__FlowContext(&type_flow__FlowContext);
{
{ /* Inline flow#FlowContext#init (var1) on <var1:FlowContext> */
RET_LABEL2:(void)0;
}
}
var_flow = var1;
{
{ /* Inline flow#FlowVisitor#flows (self) on <self:FlowVisitor> */
var5 = self->attrs[COLOR_flow__FlowVisitor___flows].val; /* _flows on <self:FlowVisitor> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _flows");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 80);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
array__Array__add(var3, var_flow); /* Direct call array#Array#add on <var3:Array[FlowContext]>*/
}
{
var6 = parser_nodes__Visitor__current_node(self);
}
{
{ /* Inline flow#FlowContext#node= (var_flow,var6) on <var_flow:FlowContext> */
var_flow->attrs[COLOR_flow__FlowContext___node].val = var6; /* _node on <var_flow:FlowContext> */
RET_LABEL7:(void)0;
}
}
{
flow__FlowContext__add_previous(var_flow, var_flow1); /* Direct call flow#FlowContext#add_previous on <var_flow:FlowContext>*/
}
{
flow__FlowContext__add_previous(var_flow, var_flow2); /* Direct call flow#FlowContext#add_previous on <var_flow:FlowContext>*/
}
{
{ /* Inline flow#FlowVisitor#current_flow_context= (self,var_flow) on <self:FlowVisitor> */
self->attrs[COLOR_flow__FlowVisitor___current_flow_context].val = var_flow; /* _current_flow_context on <self:FlowVisitor> */
RET_LABEL8:(void)0;
}
}
var = var_flow;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flow#FlowVisitor#make_merge_flow for (self: Object, FlowContext, FlowContext): FlowContext */
val* VIRTUAL_flow__FlowVisitor__make_merge_flow(val* self, val* p0, val* p1) {
val* var /* : FlowContext */;
val* var1 /* : FlowContext */;
var1 = flow__FlowVisitor__make_merge_flow(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowVisitor#make_true_false_flow for (self: FlowVisitor, FlowContext, FlowContext): FlowContext */
val* flow__FlowVisitor__make_true_false_flow(val* self, val* p0, val* p1) {
val* var /* : FlowContext */;
val* var_true_flow /* var true_flow: FlowContext */;
val* var_false_flow /* var false_flow: FlowContext */;
val* var1 /* : FlowContext */;
val* var_flow /* var flow: FlowContext */;
val* var3 /* : Array[FlowContext] */;
val* var5 /* : Array[FlowContext] */;
val* var6 /* : nullable ANode */;
var_true_flow = p0;
var_false_flow = p1;
var1 = NEW_flow__FlowContext(&type_flow__FlowContext);
{
{ /* Inline flow#FlowContext#init (var1) on <var1:FlowContext> */
RET_LABEL2:(void)0;
}
}
var_flow = var1;
{
{ /* Inline flow#FlowVisitor#flows (self) on <self:FlowVisitor> */
var5 = self->attrs[COLOR_flow__FlowVisitor___flows].val; /* _flows on <self:FlowVisitor> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _flows");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 80);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
array__Array__add(var3, var_flow); /* Direct call array#Array#add on <var3:Array[FlowContext]>*/
}
{
var6 = parser_nodes__Visitor__current_node(self);
}
{
{ /* Inline flow#FlowContext#node= (var_flow,var6) on <var_flow:FlowContext> */
var_flow->attrs[COLOR_flow__FlowContext___node].val = var6; /* _node on <var_flow:FlowContext> */
RET_LABEL7:(void)0;
}
}
{
flow__FlowContext__add_previous(var_flow, var_true_flow); /* Direct call flow#FlowContext#add_previous on <var_flow:FlowContext>*/
}
{
flow__FlowContext__add_previous(var_flow, var_false_flow); /* Direct call flow#FlowContext#add_previous on <var_flow:FlowContext>*/
}
{
{ /* Inline flow#FlowContext#when_true= (var_flow,var_true_flow) on <var_flow:FlowContext> */
var_flow->attrs[COLOR_flow__FlowContext___when_true].val = var_true_flow; /* _when_true on <var_flow:FlowContext> */
RET_LABEL8:(void)0;
}
}
{
{ /* Inline flow#FlowContext#when_false= (var_flow,var_false_flow) on <var_flow:FlowContext> */
var_flow->attrs[COLOR_flow__FlowContext___when_false].val = var_false_flow; /* _when_false on <var_flow:FlowContext> */
RET_LABEL9:(void)0;
}
}
{
{ /* Inline flow#FlowVisitor#current_flow_context= (self,var_flow) on <self:FlowVisitor> */
self->attrs[COLOR_flow__FlowVisitor___current_flow_context].val = var_flow; /* _current_flow_context on <self:FlowVisitor> */
RET_LABEL10:(void)0;
}
}
var = var_flow;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flow#FlowVisitor#make_true_false_flow for (self: Object, FlowContext, FlowContext): FlowContext */
val* VIRTUAL_flow__FlowVisitor__make_true_false_flow(val* self, val* p0, val* p1) {
val* var /* : FlowContext */;
val* var1 /* : FlowContext */;
var1 = flow__FlowVisitor__make_true_false_flow(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowVisitor#make_sub_true_false_flow for (self: FlowVisitor): FlowContext */
val* flow__FlowVisitor__make_sub_true_false_flow(val* self) {
val* var /* : FlowContext */;
val* var1 /* : FlowContext */;
val* var3 /* : FlowContext */;
val* var_orig_flow /* var orig_flow: FlowContext */;
val* var4 /* : FlowContext */;
val* var_true_flow /* var true_flow: FlowContext */;
val* var6 /* : Array[FlowContext] */;
val* var8 /* : Array[FlowContext] */;
val* var9 /* : nullable ANode */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : FlatString */;
val* var16 /* : FlowContext */;
val* var_false_flow /* var false_flow: FlowContext */;
val* var18 /* : Array[FlowContext] */;
val* var20 /* : Array[FlowContext] */;
val* var21 /* : nullable ANode */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : FlatString */;
val* var29 /* : FlowContext */;
{
{ /* Inline flow#FlowVisitor#current_flow_context (self) on <self:FlowVisitor> */
var3 = self->attrs[COLOR_flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <self:FlowVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 39);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_orig_flow = var1;
var4 = NEW_flow__FlowContext(&type_flow__FlowContext);
{
{ /* Inline flow#FlowContext#init (var4) on <var4:FlowContext> */
RET_LABEL5:(void)0;
}
}
var_true_flow = var4;
{
{ /* Inline flow#FlowVisitor#flows (self) on <self:FlowVisitor> */
var8 = self->attrs[COLOR_flow__FlowVisitor___flows].val; /* _flows on <self:FlowVisitor> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _flows");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 80);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
array__Array__add(var6, var_true_flow); /* Direct call array#Array#add on <var6:Array[FlowContext]>*/
}
{
var9 = parser_nodes__Visitor__current_node(self);
}
{
{ /* Inline flow#FlowContext#node= (var_true_flow,var9) on <var_true_flow:FlowContext> */
var_true_flow->attrs[COLOR_flow__FlowContext___node].val = var9; /* _node on <var_true_flow:FlowContext> */
RET_LABEL10:(void)0;
}
}
{
flow__FlowContext__add_previous(var_true_flow, var_orig_flow); /* Direct call flow#FlowContext#add_previous on <var_true_flow:FlowContext>*/
}
if (varonce) {
var11 = varonce;
} else {
var12 = "TRUE";
var13 = 4;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce = var11;
}
{
{ /* Inline flow#FlowContext#name= (var_true_flow,var11) on <var_true_flow:FlowContext> */
var_true_flow->attrs[COLOR_flow__FlowContext___name].val = var11; /* _name on <var_true_flow:FlowContext> */
RET_LABEL15:(void)0;
}
}
var16 = NEW_flow__FlowContext(&type_flow__FlowContext);
{
{ /* Inline flow#FlowContext#init (var16) on <var16:FlowContext> */
RET_LABEL17:(void)0;
}
}
var_false_flow = var16;
{
{ /* Inline flow#FlowVisitor#flows (self) on <self:FlowVisitor> */
var20 = self->attrs[COLOR_flow__FlowVisitor___flows].val; /* _flows on <self:FlowVisitor> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _flows");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 80);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
array__Array__add(var18, var_false_flow); /* Direct call array#Array#add on <var18:Array[FlowContext]>*/
}
{
var21 = parser_nodes__Visitor__current_node(self);
}
{
{ /* Inline flow#FlowContext#node= (var_false_flow,var21) on <var_false_flow:FlowContext> */
var_false_flow->attrs[COLOR_flow__FlowContext___node].val = var21; /* _node on <var_false_flow:FlowContext> */
RET_LABEL22:(void)0;
}
}
{
flow__FlowContext__add_previous(var_false_flow, var_orig_flow); /* Direct call flow#FlowContext#add_previous on <var_false_flow:FlowContext>*/
}
if (varonce23) {
var24 = varonce23;
} else {
var25 = "FALSE";
var26 = 5;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
{
{ /* Inline flow#FlowContext#name= (var_false_flow,var24) on <var_false_flow:FlowContext> */
var_false_flow->attrs[COLOR_flow__FlowContext___name].val = var24; /* _name on <var_false_flow:FlowContext> */
RET_LABEL28:(void)0;
}
}
{
var29 = flow__FlowVisitor__make_true_false_flow(self, var_true_flow, var_false_flow);
}
var = var29;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flow#FlowVisitor#make_sub_true_false_flow for (self: Object): FlowContext */
val* VIRTUAL_flow__FlowVisitor__make_sub_true_false_flow(val* self) {
val* var /* : FlowContext */;
val* var1 /* : FlowContext */;
var1 = flow__FlowVisitor__make_sub_true_false_flow(self);
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowVisitor#make_unreachable_flow for (self: FlowVisitor): FlowContext */
val* flow__FlowVisitor__make_unreachable_flow(val* self) {
val* var /* : FlowContext */;
val* var1 /* : FlowContext */;
val* var_flow /* var flow: FlowContext */;
val* var3 /* : Array[FlowContext] */;
val* var5 /* : Array[FlowContext] */;
val* var6 /* : nullable ANode */;
val* var8 /* : FlowContext */;
val* var10 /* : FlowContext */;
short int var11 /* : Bool */;
var1 = NEW_flow__FlowContext(&type_flow__FlowContext);
{
{ /* Inline flow#FlowContext#init (var1) on <var1:FlowContext> */
RET_LABEL2:(void)0;
}
}
var_flow = var1;
{
{ /* Inline flow#FlowVisitor#flows (self) on <self:FlowVisitor> */
var5 = self->attrs[COLOR_flow__FlowVisitor___flows].val; /* _flows on <self:FlowVisitor> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _flows");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 80);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
array__Array__add(var3, var_flow); /* Direct call array#Array#add on <var3:Array[FlowContext]>*/
}
{
var6 = parser_nodes__Visitor__current_node(self);
}
{
{ /* Inline flow#FlowContext#node= (var_flow,var6) on <var_flow:FlowContext> */
var_flow->attrs[COLOR_flow__FlowContext___node].val = var6; /* _node on <var_flow:FlowContext> */
RET_LABEL7:(void)0;
}
}
{
{ /* Inline flow#FlowVisitor#current_flow_context (self) on <self:FlowVisitor> */
var10 = self->attrs[COLOR_flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <self:FlowVisitor> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 39);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
flow__FlowContext__add_previous(var_flow, var8); /* Direct call flow#FlowContext#add_previous on <var_flow:FlowContext>*/
}
var11 = 1;
{
{ /* Inline flow#FlowContext#is_marked_unreachable= (var_flow,var11) on <var_flow:FlowContext> */
var_flow->attrs[COLOR_flow__FlowContext___is_marked_unreachable].s = var11; /* _is_marked_unreachable on <var_flow:FlowContext> */
RET_LABEL12:(void)0;
}
}
{
{ /* Inline flow#FlowVisitor#current_flow_context= (self,var_flow) on <self:FlowVisitor> */
self->attrs[COLOR_flow__FlowVisitor___current_flow_context].val = var_flow; /* _current_flow_context on <self:FlowVisitor> */
RET_LABEL13:(void)0;
}
}
var = var_flow;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flow#FlowVisitor#make_unreachable_flow for (self: Object): FlowContext */
val* VIRTUAL_flow__FlowVisitor__make_unreachable_flow(val* self) {
val* var /* : FlowContext */;
val* var1 /* : FlowContext */;
var1 = flow__FlowVisitor__make_unreachable_flow(self);
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowVisitor#merge_continues_to for (self: FlowVisitor, FlowContext, nullable EscapeMark) */
void flow__FlowVisitor__merge_continues_to(val* self, val* p0, val* p1) {
val* var_before_loop /* var before_loop: FlowContext */;
val* var_escapemark /* var escapemark: nullable EscapeMark */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : Array[AContinueExpr] */;
val* var9 /* : Array[AContinueExpr] */;
val* var10 /* : ArrayIterator[nullable Object] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_b /* var b: AContinueExpr */;
val* var13 /* : nullable FlowContext */;
val* var_before /* var before: nullable FlowContext */;
val* var14 /* : null */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
var_before_loop = p0;
var_escapemark = p1;
var = NULL;
if (var_escapemark == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_escapemark,var) on <var_escapemark:nullable EscapeMark> */
var_other = var;
{
{ /* Inline kernel#Object#is_same_instance (var_escapemark,var_other) on <var_escapemark:nullable EscapeMark(EscapeMark)> */
var6 = var_escapemark == var_other;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
goto RET_LABEL;
} else {
}
{
{ /* Inline scope#EscapeMark#continues (var_escapemark) on <var_escapemark:nullable EscapeMark(EscapeMark)> */
var9 = var_escapemark->attrs[COLOR_scope__EscapeMark___continues].val; /* _continues on <var_escapemark:nullable EscapeMark(EscapeMark)> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _continues");
PRINT_ERROR(" (%s:%d)\n", "src/scope.nit", 53);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = array__AbstractArrayRead__iterator(var7);
}
for(;;) {
{
var11 = array__ArrayIterator__is_ok(var10);
}
if(!var11) break;
{
var12 = array__ArrayIterator__item(var10);
}
var_b = var12;
{
var13 = flow__AContinueExpr__before_flow_context(var_b);
}
var_before = var13;
var14 = NULL;
if (var_before == NULL) {
var15 = 1; /* is null */
} else {
var15 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_before,var14) on <var_before:nullable FlowContext> */
var_other = var14;
{
{ /* Inline kernel#Object#is_same_instance (var_before,var_other) on <var_before:nullable FlowContext(FlowContext)> */
var20 = var_before == var_other;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var15 = var16;
}
if (var15){
goto CONTINUE_label;
} else {
}
{
flow__FlowContext__add_loop(var_before_loop, var_before); /* Direct call flow#FlowContext#add_loop on <var_before_loop:FlowContext>*/
}
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var10); /* Direct call array#ArrayIterator#next on <var10:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method flow#FlowVisitor#merge_continues_to for (self: Object, FlowContext, nullable EscapeMark) */
void VIRTUAL_flow__FlowVisitor__merge_continues_to(val* self, val* p0, val* p1) {
flow__FlowVisitor__merge_continues_to(self, p0, p1); /* Direct call flow#FlowVisitor#merge_continues_to on <self:Object(FlowVisitor)>*/
RET_LABEL:;
}
/* method flow#FlowVisitor#merge_breaks for (self: FlowVisitor, nullable EscapeMark) */
void flow__FlowVisitor__merge_breaks(val* self, val* p0) {
val* var_escapemark /* var escapemark: nullable EscapeMark */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : Array[ABreakExpr] */;
val* var9 /* : Array[ABreakExpr] */;
val* var10 /* : ArrayIterator[nullable Object] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_b /* var b: ABreakExpr */;
val* var13 /* : nullable FlowContext */;
val* var_before /* var before: nullable FlowContext */;
val* var14 /* : null */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : FlowContext */;
val* var23 /* : FlowContext */;
val* var24 /* : FlowContext */;
var_escapemark = p0;
var = NULL;
if (var_escapemark == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_escapemark,var) on <var_escapemark:nullable EscapeMark> */
var_other = var;
{
{ /* Inline kernel#Object#is_same_instance (var_escapemark,var_other) on <var_escapemark:nullable EscapeMark(EscapeMark)> */
var6 = var_escapemark == var_other;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
goto RET_LABEL;
} else {
}
{
{ /* Inline scope#EscapeMark#breaks (var_escapemark) on <var_escapemark:nullable EscapeMark(EscapeMark)> */
var9 = var_escapemark->attrs[COLOR_scope__EscapeMark___breaks].val; /* _breaks on <var_escapemark:nullable EscapeMark(EscapeMark)> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _breaks");
PRINT_ERROR(" (%s:%d)\n", "src/scope.nit", 56);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = array__AbstractArrayRead__iterator(var7);
}
for(;;) {
{
var11 = array__ArrayIterator__is_ok(var10);
}
if(!var11) break;
{
var12 = array__ArrayIterator__item(var10);
}
var_b = var12;
{
var13 = flow__ABreakExpr__before_flow_context(var_b);
}
var_before = var13;
var14 = NULL;
if (var_before == NULL) {
var15 = 1; /* is null */
} else {
var15 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_before,var14) on <var_before:nullable FlowContext> */
var_other = var14;
{
{ /* Inline kernel#Object#is_same_instance (var_before,var_other) on <var_before:nullable FlowContext(FlowContext)> */
var20 = var_before == var_other;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var15 = var16;
}
if (var15){
goto CONTINUE_label;
} else {
}
{
{ /* Inline flow#FlowVisitor#current_flow_context (self) on <self:FlowVisitor> */
var23 = self->attrs[COLOR_flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <self:FlowVisitor> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 39);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = flow__FlowVisitor__make_merge_flow(self, var21, var_before);
}
var24;
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var10); /* Direct call array#ArrayIterator#next on <var10:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method flow#FlowVisitor#merge_breaks for (self: Object, nullable EscapeMark) */
void VIRTUAL_flow__FlowVisitor__merge_breaks(val* self, val* p0) {
flow__FlowVisitor__merge_breaks(self, p0); /* Direct call flow#FlowVisitor#merge_breaks on <self:Object(FlowVisitor)>*/
RET_LABEL:;
}
/* method flow#FlowContext#previous for (self: FlowContext): Array[FlowContext] */
val* flow__FlowContext__previous(val* self) {
val* var /* : Array[FlowContext] */;
val* var1 /* : Array[FlowContext] */;
var1 = self->attrs[COLOR_flow__FlowContext___previous].val; /* _previous on <self:FlowContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _previous");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 192);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowContext#previous for (self: Object): Array[FlowContext] */
val* VIRTUAL_flow__FlowContext__previous(val* self) {
val* var /* : Array[FlowContext] */;
val* var1 /* : Array[FlowContext] */;
val* var3 /* : Array[FlowContext] */;
{ /* Inline flow#FlowContext#previous (self) on <self:Object(FlowContext)> */
var3 = self->attrs[COLOR_flow__FlowContext___previous].val; /* _previous on <self:Object(FlowContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _previous");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 192);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowContext#loops for (self: FlowContext): Array[FlowContext] */
val* flow__FlowContext__loops(val* self) {
val* var /* : Array[FlowContext] */;
val* var1 /* : Array[FlowContext] */;
var1 = self->attrs[COLOR_flow__FlowContext___loops].val; /* _loops on <self:FlowContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _loops");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 195);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowContext#loops for (self: Object): Array[FlowContext] */
val* VIRTUAL_flow__FlowContext__loops(val* self) {
val* var /* : Array[FlowContext] */;
val* var1 /* : Array[FlowContext] */;
val* var3 /* : Array[FlowContext] */;
{ /* Inline flow#FlowContext#loops (self) on <self:Object(FlowContext)> */
var3 = self->attrs[COLOR_flow__FlowContext___loops].val; /* _loops on <self:Object(FlowContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _loops");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 195);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowContext#is_marked_unreachable for (self: FlowContext): Bool */
short int flow__FlowContext__is_marked_unreachable(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_flow__FlowContext___is_marked_unreachable].s; /* _is_marked_unreachable on <self:FlowContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowContext#is_marked_unreachable for (self: Object): Bool */
short int VIRTUAL_flow__FlowContext__is_marked_unreachable(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline flow#FlowContext#is_marked_unreachable (self) on <self:Object(FlowContext)> */
var3 = self->attrs[COLOR_flow__FlowContext___is_marked_unreachable].s; /* _is_marked_unreachable on <self:Object(FlowContext)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowContext#is_marked_unreachable= for (self: FlowContext, Bool) */
void flow__FlowContext__is_marked_unreachable_61d(val* self, short int p0) {
self->attrs[COLOR_flow__FlowContext___is_marked_unreachable].s = p0; /* _is_marked_unreachable on <self:FlowContext> */
RET_LABEL:;
}
/* method flow#FlowContext#is_marked_unreachable= for (self: Object, Bool) */
void VIRTUAL_flow__FlowContext__is_marked_unreachable_61d(val* self, short int p0) {
{ /* Inline flow#FlowContext#is_marked_unreachable= (self,p0) on <self:Object(FlowContext)> */
self->attrs[COLOR_flow__FlowContext___is_marked_unreachable].s = p0; /* _is_marked_unreachable on <self:Object(FlowContext)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method flow#FlowContext#is_unreachable for (self: FlowContext): Bool */
short int flow__FlowContext__is_unreachable(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : Array[FlowContext] */;
val* var11 /* : Array[FlowContext] */;
long var12 /* : Int */;
long var13 /* : Int */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
{
{ /* Inline flow#FlowContext#is_marked_unreachable (self) on <self:FlowContext> */
var3 = self->attrs[COLOR_flow__FlowContext___is_marked_unreachable].s; /* _is_marked_unreachable on <self:FlowContext> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1){
var4 = 1;
var = var4;
goto RET_LABEL;
} else {
}
{
{ /* Inline flow#FlowContext#is_start (self) on <self:FlowContext> */
var7 = self->attrs[COLOR_flow__FlowContext___is_start].s; /* _is_start on <self:FlowContext> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (var5){
var8 = 0;
var = var8;
goto RET_LABEL;
} else {
}
{
{ /* Inline flow#FlowContext#previous (self) on <self:FlowContext> */
var11 = self->attrs[COLOR_flow__FlowContext___previous].val; /* _previous on <self:FlowContext> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _previous");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 192);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = array__AbstractArrayRead__length(var9);
}
var13 = 0;
{
{ /* Inline kernel#Int#== (var12,var13) on <var12:Int> */
var17 = var12 == var13;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
if (var14){
var18 = 1;
var = var18;
goto RET_LABEL;
} else {
}
var19 = 0;
var = var19;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flow#FlowContext#is_unreachable for (self: Object): Bool */
short int VIRTUAL_flow__FlowContext__is_unreachable(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = flow__FlowContext__is_unreachable(self);
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowContext#is_already_unreachable for (self: FlowContext): Bool */
short int flow__FlowContext__is_already_unreachable(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_flow__FlowContext___is_already_unreachable].s; /* _is_already_unreachable on <self:FlowContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowContext#is_already_unreachable for (self: Object): Bool */
short int VIRTUAL_flow__FlowContext__is_already_unreachable(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline flow#FlowContext#is_already_unreachable (self) on <self:Object(FlowContext)> */
var3 = self->attrs[COLOR_flow__FlowContext___is_already_unreachable].s; /* _is_already_unreachable on <self:Object(FlowContext)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowContext#is_already_unreachable= for (self: FlowContext, Bool) */
void flow__FlowContext__is_already_unreachable_61d(val* self, short int p0) {
self->attrs[COLOR_flow__FlowContext___is_already_unreachable].s = p0; /* _is_already_unreachable on <self:FlowContext> */
RET_LABEL:;
}
/* method flow#FlowContext#is_already_unreachable= for (self: Object, Bool) */
void VIRTUAL_flow__FlowContext__is_already_unreachable_61d(val* self, short int p0) {
{ /* Inline flow#FlowContext#is_already_unreachable= (self,p0) on <self:Object(FlowContext)> */
self->attrs[COLOR_flow__FlowContext___is_already_unreachable].s = p0; /* _is_already_unreachable on <self:Object(FlowContext)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method flow#FlowContext#is_start for (self: FlowContext): Bool */
short int flow__FlowContext__is_start(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_flow__FlowContext___is_start].s; /* _is_start on <self:FlowContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowContext#is_start for (self: Object): Bool */
short int VIRTUAL_flow__FlowContext__is_start(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline flow#FlowContext#is_start (self) on <self:Object(FlowContext)> */
var3 = self->attrs[COLOR_flow__FlowContext___is_start].s; /* _is_start on <self:Object(FlowContext)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowContext#is_start= for (self: FlowContext, Bool) */
void flow__FlowContext__is_start_61d(val* self, short int p0) {
self->attrs[COLOR_flow__FlowContext___is_start].s = p0; /* _is_start on <self:FlowContext> */
RET_LABEL:;
}
/* method flow#FlowContext#is_start= for (self: Object, Bool) */
void VIRTUAL_flow__FlowContext__is_start_61d(val* self, short int p0) {
{ /* Inline flow#FlowContext#is_start= (self,p0) on <self:Object(FlowContext)> */
self->attrs[COLOR_flow__FlowContext___is_start].s = p0; /* _is_start on <self:Object(FlowContext)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method flow#FlowContext#node for (self: FlowContext): nullable ANode */
val* flow__FlowContext__node(val* self) {
val* var /* : nullable ANode */;
val* var1 /* : nullable ANode */;
var1 = self->attrs[COLOR_flow__FlowContext___node].val; /* _node on <self:FlowContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowContext#node for (self: Object): nullable ANode */
val* VIRTUAL_flow__FlowContext__node(val* self) {
val* var /* : nullable ANode */;
val* var1 /* : nullable ANode */;
val* var3 /* : nullable ANode */;
{ /* Inline flow#FlowContext#node (self) on <self:Object(FlowContext)> */
var3 = self->attrs[COLOR_flow__FlowContext___node].val; /* _node on <self:Object(FlowContext)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowContext#node= for (self: FlowContext, nullable ANode) */
void flow__FlowContext__node_61d(val* self, val* p0) {
self->attrs[COLOR_flow__FlowContext___node].val = p0; /* _node on <self:FlowContext> */
RET_LABEL:;
}
/* method flow#FlowContext#node= for (self: Object, nullable ANode) */
void VIRTUAL_flow__FlowContext__node_61d(val* self, val* p0) {
{ /* Inline flow#FlowContext#node= (self,p0) on <self:Object(FlowContext)> */
self->attrs[COLOR_flow__FlowContext___node].val = p0; /* _node on <self:Object(FlowContext)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method flow#FlowContext#name= for (self: FlowContext, String) */
void flow__FlowContext__name_61d(val* self, val* p0) {
self->attrs[COLOR_flow__FlowContext___name].val = p0; /* _name on <self:FlowContext> */
RET_LABEL:;
}
/* method flow#FlowContext#name= for (self: Object, String) */
void VIRTUAL_flow__FlowContext__name_61d(val* self, val* p0) {
{ /* Inline flow#FlowContext#name= (self,p0) on <self:Object(FlowContext)> */
self->attrs[COLOR_flow__FlowContext___name].val = p0; /* _name on <self:Object(FlowContext)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method flow#FlowContext#when_true for (self: FlowContext): FlowContext */
val* flow__FlowContext__when_true(val* self) {
val* var /* : FlowContext */;
val* var1 /* : FlowContext */;
var1 = self->attrs[COLOR_flow__FlowContext___when_true].val; /* _when_true on <self:FlowContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_true");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 228);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowContext#when_true for (self: Object): FlowContext */
val* VIRTUAL_flow__FlowContext__when_true(val* self) {
val* var /* : FlowContext */;
val* var1 /* : FlowContext */;
val* var3 /* : FlowContext */;
{ /* Inline flow#FlowContext#when_true (self) on <self:Object(FlowContext)> */
var3 = self->attrs[COLOR_flow__FlowContext___when_true].val; /* _when_true on <self:Object(FlowContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_true");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 228);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowContext#when_true= for (self: FlowContext, FlowContext) */
void flow__FlowContext__when_true_61d(val* self, val* p0) {
self->attrs[COLOR_flow__FlowContext___when_true].val = p0; /* _when_true on <self:FlowContext> */
RET_LABEL:;
}
/* method flow#FlowContext#when_true= for (self: Object, FlowContext) */
void VIRTUAL_flow__FlowContext__when_true_61d(val* self, val* p0) {
{ /* Inline flow#FlowContext#when_true= (self,p0) on <self:Object(FlowContext)> */
self->attrs[COLOR_flow__FlowContext___when_true].val = p0; /* _when_true on <self:Object(FlowContext)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method flow#FlowContext#when_false for (self: FlowContext): FlowContext */
val* flow__FlowContext__when_false(val* self) {
val* var /* : FlowContext */;
val* var1 /* : FlowContext */;
var1 = self->attrs[COLOR_flow__FlowContext___when_false].val; /* _when_false on <self:FlowContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_false");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 231);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowContext#when_false for (self: Object): FlowContext */
val* VIRTUAL_flow__FlowContext__when_false(val* self) {
val* var /* : FlowContext */;
val* var1 /* : FlowContext */;
val* var3 /* : FlowContext */;
{ /* Inline flow#FlowContext#when_false (self) on <self:Object(FlowContext)> */
var3 = self->attrs[COLOR_flow__FlowContext___when_false].val; /* _when_false on <self:Object(FlowContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_false");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 231);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowContext#when_false= for (self: FlowContext, FlowContext) */
void flow__FlowContext__when_false_61d(val* self, val* p0) {
self->attrs[COLOR_flow__FlowContext___when_false].val = p0; /* _when_false on <self:FlowContext> */
RET_LABEL:;
}
/* method flow#FlowContext#when_false= for (self: Object, FlowContext) */
void VIRTUAL_flow__FlowContext__when_false_61d(val* self, val* p0) {
{ /* Inline flow#FlowContext#when_false= (self,p0) on <self:Object(FlowContext)> */
self->attrs[COLOR_flow__FlowContext___when_false].val = p0; /* _when_false on <self:Object(FlowContext)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method flow#FlowContext#add_previous for (self: FlowContext, FlowContext) */
void flow__FlowContext__add_previous(val* self, val* p0) {
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
var1 = flow__FlowContext__is_unreachable(var_flow);
}
var2 = !var1;
var_ = var2;
if (var2){
{
{ /* Inline flow#FlowContext#previous (self) on <self:FlowContext> */
var5 = self->attrs[COLOR_flow__FlowContext___previous].val; /* _previous on <self:FlowContext> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _previous");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 192);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = array__AbstractArrayRead__has(var3, var_flow);
}
var7 = !var6;
var = var7;
} else {
var = var_;
}
if (var){
{
{ /* Inline flow#FlowContext#previous (self) on <self:FlowContext> */
var10 = self->attrs[COLOR_flow__FlowContext___previous].val; /* _previous on <self:FlowContext> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _previous");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 192);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
array__Array__add(var8, var_flow); /* Direct call array#Array#add on <var8:Array[FlowContext]>*/
}
} else {
}
RET_LABEL:;
}
/* method flow#FlowContext#add_previous for (self: Object, FlowContext) */
void VIRTUAL_flow__FlowContext__add_previous(val* self, val* p0) {
flow__FlowContext__add_previous(self, p0); /* Direct call flow#FlowContext#add_previous on <self:Object(FlowContext)>*/
RET_LABEL:;
}
/* method flow#FlowContext#add_loop for (self: FlowContext, FlowContext) */
void flow__FlowContext__add_loop(val* self, val* p0) {
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
var1 = flow__FlowContext__is_unreachable(var_flow);
}
var2 = !var1;
var_ = var2;
if (var2){
{
{ /* Inline flow#FlowContext#previous (self) on <self:FlowContext> */
var5 = self->attrs[COLOR_flow__FlowContext___previous].val; /* _previous on <self:FlowContext> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _previous");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 192);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = array__AbstractArrayRead__has(var3, var_flow);
}
var7 = !var6;
var = var7;
} else {
var = var_;
}
if (var){
{
{ /* Inline flow#FlowContext#loops (self) on <self:FlowContext> */
var10 = self->attrs[COLOR_flow__FlowContext___loops].val; /* _loops on <self:FlowContext> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _loops");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 195);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
array__Array__add(var8, var_flow); /* Direct call array#Array#add on <var8:Array[FlowContext]>*/
}
} else {
}
RET_LABEL:;
}
/* method flow#FlowContext#add_loop for (self: Object, FlowContext) */
void VIRTUAL_flow__FlowContext__add_loop(val* self, val* p0) {
flow__FlowContext__add_loop(self, p0); /* Direct call flow#FlowContext#add_loop on <self:Object(FlowContext)>*/
RET_LABEL:;
}
/* method flow#FlowContext#init for (self: FlowContext) */
void flow__FlowContext__init(val* self) {
RET_LABEL:;
}
/* method flow#FlowContext#init for (self: Object) */
void VIRTUAL_flow__FlowContext__init(val* self) {
{ /* Inline flow#FlowContext#init (self) on <self:Object(FlowContext)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method flow#ANode#accept_flow_visitor for (self: ANode, FlowVisitor) */
void flow__ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
var_v = p0;
{
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__ANode__visit_all]))(self, var_v) /* visit_all on <self:ANode>*/;
}
RET_LABEL:;
}
/* method flow#ANode#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__ANode__accept_flow_visitor(val* self, val* p0) {
flow__ANode__accept_flow_visitor(self, p0); /* Direct call flow#ANode#accept_flow_visitor on <self:Object(ANode)>*/
RET_LABEL:;
}
/* method flow#APropdef#do_flow for (self: APropdef, ToolContext) */
void flow__APropdef__do_flow(val* self, val* p0) {
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var /* : FlowVisitor */;
val* var_v /* var v: FlowVisitor */;
var_toolcontext = p0;
var = NEW_flow__FlowVisitor(&type_flow__FlowVisitor);
{
flow__FlowVisitor__init(var, var_toolcontext); /* Direct call flow#FlowVisitor#init on <var:FlowVisitor>*/
}
var_v = var;
{
parser_nodes__Visitor__enter_visit(var_v, self); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:FlowVisitor>*/
}
RET_LABEL:;
}
/* method flow#APropdef#do_flow for (self: Object, ToolContext) */
void VIRTUAL_flow__APropdef__do_flow(val* self, val* p0) {
flow__APropdef__do_flow(self, p0); /* Direct call flow#APropdef#do_flow on <self:Object(APropdef)>*/
RET_LABEL:;
}
/* method flow#APropdef#before_flow_context= for (self: APropdef, nullable FlowContext) */
void flow__APropdef__before_flow_context_61d(val* self, val* p0) {
self->attrs[COLOR_flow__APropdef___before_flow_context].val = p0; /* _before_flow_context on <self:APropdef> */
RET_LABEL:;
}
/* method flow#APropdef#before_flow_context= for (self: Object, nullable FlowContext) */
void VIRTUAL_flow__APropdef__before_flow_context_61d(val* self, val* p0) {
{ /* Inline flow#APropdef#before_flow_context= (self,p0) on <self:Object(APropdef)> */
self->attrs[COLOR_flow__APropdef___before_flow_context].val = p0; /* _before_flow_context on <self:Object(APropdef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method flow#APropdef#after_flow_context= for (self: APropdef, nullable FlowContext) */
void flow__APropdef__after_flow_context_61d(val* self, val* p0) {
self->attrs[COLOR_flow__APropdef___after_flow_context].val = p0; /* _after_flow_context on <self:APropdef> */
RET_LABEL:;
}
/* method flow#APropdef#after_flow_context= for (self: Object, nullable FlowContext) */
void VIRTUAL_flow__APropdef__after_flow_context_61d(val* self, val* p0) {
{ /* Inline flow#APropdef#after_flow_context= (self,p0) on <self:Object(APropdef)> */
self->attrs[COLOR_flow__APropdef___after_flow_context].val = p0; /* _after_flow_context on <self:Object(APropdef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method flow#APropdef#accept_flow_visitor for (self: APropdef, FlowVisitor) */
void flow__APropdef__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : FlowContext */;
val* var2 /* : FlowContext */;
val* var4 /* : FlowContext */;
val* var6 /* : FlowContext */;
var_v = p0;
{
{ /* Inline flow#FlowVisitor#current_flow_context (var_v) on <var_v:FlowVisitor> */
var2 = var_v->attrs[COLOR_flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <var_v:FlowVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 39);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline flow#APropdef#before_flow_context= (self,var) on <self:APropdef> */
self->attrs[COLOR_flow__APropdef___before_flow_context].val = var; /* _before_flow_context on <self:APropdef> */
RET_LABEL3:(void)0;
}
}
{
((void (*)(val*, val*))(self->class->vft[COLOR_flow__APropdef__accept_flow_visitor]))(self, p0) /* accept_flow_visitor on <self:APropdef>*/;
}
{
{ /* Inline flow#FlowVisitor#current_flow_context (var_v) on <var_v:FlowVisitor> */
var6 = var_v->attrs[COLOR_flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <var_v:FlowVisitor> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 39);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline flow#APropdef#after_flow_context= (self,var4) on <self:APropdef> */
self->attrs[COLOR_flow__APropdef___after_flow_context].val = var4; /* _after_flow_context on <self:APropdef> */
RET_LABEL7:(void)0;
}
}
RET_LABEL:;
}
/* method flow#APropdef#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__APropdef__accept_flow_visitor(val* self, val* p0) {
flow__APropdef__accept_flow_visitor(self, p0); /* Direct call flow#APropdef#accept_flow_visitor on <self:Object(APropdef)>*/
RET_LABEL:;
}
/* method flow#AExpr#after_flow_context for (self: AExpr): nullable FlowContext */
val* flow__AExpr__after_flow_context(val* self) {
val* var /* : nullable FlowContext */;
val* var1 /* : nullable FlowContext */;
var1 = self->attrs[COLOR_flow__AExpr___after_flow_context].val; /* _after_flow_context on <self:AExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method flow#AExpr#after_flow_context for (self: Object): nullable FlowContext */
val* VIRTUAL_flow__AExpr__after_flow_context(val* self) {
val* var /* : nullable FlowContext */;
val* var1 /* : nullable FlowContext */;
val* var3 /* : nullable FlowContext */;
{ /* Inline flow#AExpr#after_flow_context (self) on <self:Object(AExpr)> */
var3 = self->attrs[COLOR_flow__AExpr___after_flow_context].val; /* _after_flow_context on <self:Object(AExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method flow#AExpr#after_flow_context= for (self: AExpr, nullable FlowContext) */
void flow__AExpr__after_flow_context_61d(val* self, val* p0) {
self->attrs[COLOR_flow__AExpr___after_flow_context].val = p0; /* _after_flow_context on <self:AExpr> */
RET_LABEL:;
}
/* method flow#AExpr#after_flow_context= for (self: Object, nullable FlowContext) */
void VIRTUAL_flow__AExpr__after_flow_context_61d(val* self, val* p0) {
{ /* Inline flow#AExpr#after_flow_context= (self,p0) on <self:Object(AExpr)> */
self->attrs[COLOR_flow__AExpr___after_flow_context].val = p0; /* _after_flow_context on <self:Object(AExpr)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method flow#AVarAssignExpr#accept_flow_visitor for (self: AVarAssignExpr, FlowVisitor) */
void flow__AVarAssignExpr__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : FlowContext */;
var_v = p0;
{
((void (*)(val*, val*))(self->class->vft[COLOR_flow__AVarAssignExpr__accept_flow_visitor]))(self, p0) /* accept_flow_visitor on <self:AVarAssignExpr>*/;
}
{
var = flow__FlowVisitor__make_sub_flow(var_v);
}
{
{ /* Inline flow#AExpr#after_flow_context= (self,var) on <self:AVarAssignExpr> */
self->attrs[COLOR_flow__AExpr___after_flow_context].val = var; /* _after_flow_context on <self:AVarAssignExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method flow#AVarAssignExpr#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__AVarAssignExpr__accept_flow_visitor(val* self, val* p0) {
flow__AVarAssignExpr__accept_flow_visitor(self, p0); /* Direct call flow#AVarAssignExpr#accept_flow_visitor on <self:Object(AVarAssignExpr)>*/
RET_LABEL:;
}
/* method flow#AReassignFormExpr#accept_flow_visitor for (self: AReassignFormExpr, FlowVisitor) */
void flow__AReassignFormExpr__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : FlowContext */;
var_v = p0;
{
((void (*)(val*, val*))(self->class->vft[COLOR_flow__AReassignFormExpr__accept_flow_visitor]))(self, p0) /* accept_flow_visitor on <self:AReassignFormExpr>*/;
}
{
var = flow__FlowVisitor__make_sub_flow(var_v);
}
{
{ /* Inline flow#AExpr#after_flow_context= (self,var) on <self:AReassignFormExpr> */
self->attrs[COLOR_flow__AExpr___after_flow_context].val = var; /* _after_flow_context on <self:AReassignFormExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method flow#AReassignFormExpr#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__AReassignFormExpr__accept_flow_visitor(val* self, val* p0) {
flow__AReassignFormExpr__accept_flow_visitor(self, p0); /* Direct call flow#AReassignFormExpr#accept_flow_visitor on <self:Object(AReassignFormExpr)>*/
RET_LABEL:;
}
/* method flow#ABlockExpr#accept_flow_visitor for (self: ABlockExpr, FlowVisitor) */
void flow__ABlockExpr__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : ANodes[AExpr] */;
val* var2 /* : ANodes[AExpr] */;
val* var3 /* : Iterator[ANode] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_e /* var e: AExpr */;
val* var6 /* : FlowContext */;
val* var8 /* : FlowContext */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : FlowContext */;
val* var13 /* : FlowContext */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : FlowContext */;
val* var20 /* : FlowContext */;
short int var21 /* : Bool */;
val* var23 /* : ToolContext */;
val* var25 /* : ToolContext */;
val* var26 /* : Location */;
static val* varonce;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : FlatString */;
var_v = p0;
{
{ /* Inline parser_nodes#ABlockExpr#n_expr (self) on <self:ABlockExpr> */
var2 = self->attrs[COLOR_parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1424);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = parser_nodes__ANodes__iterator(var);
}
for(;;) {
{
var4 = ((short int (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var3) /* is_ok on <var3:Iterator[ANode]>*/;
}
if(!var4) break;
{
var5 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__item]))(var3) /* item on <var3:Iterator[ANode]>*/;
}
var_e = var5;
{
{ /* Inline flow#FlowVisitor#current_flow_context (var_v) on <var_v:FlowVisitor> */
var8 = var_v->attrs[COLOR_flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <var_v:FlowVisitor> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 39);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = flow__FlowContext__is_unreachable(var6);
}
var10 = !var9;
if (var10){
{
parser_nodes__Visitor__enter_visit(var_v, var_e); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:FlowVisitor>*/
}
} else {
{
{ /* Inline flow#FlowVisitor#current_flow_context (var_v) on <var_v:FlowVisitor> */
var13 = var_v->attrs[COLOR_flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <var_v:FlowVisitor> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 39);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline flow#FlowContext#is_already_unreachable (var11) on <var11:FlowContext> */
var16 = var11->attrs[COLOR_flow__FlowContext___is_already_unreachable].s; /* _is_already_unreachable on <var11:FlowContext> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
var17 = !var14;
if (var17){
{
{ /* Inline flow#FlowVisitor#current_flow_context (var_v) on <var_v:FlowVisitor> */
var20 = var_v->attrs[COLOR_flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <var_v:FlowVisitor> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 39);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
var21 = 1;
{
{ /* Inline flow#FlowContext#is_already_unreachable= (var18,var21) on <var18:FlowContext> */
var18->attrs[COLOR_flow__FlowContext___is_already_unreachable].s = var21; /* _is_already_unreachable on <var18:FlowContext> */
RET_LABEL22:(void)0;
}
}
{
{ /* Inline flow#FlowVisitor#toolcontext (var_v) on <var_v:FlowVisitor> */
var25 = var_v->attrs[COLOR_flow__FlowVisitor___toolcontext].val; /* _toolcontext on <var_v:FlowVisitor> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 41);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = parser_nodes__ANode__hot_location(var_e);
}
if (varonce) {
var27 = varonce;
} else {
var28 = "Error: unreachable statement.";
var29 = 29;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce = var27;
}
{
toolcontext__ToolContext__error(var23, var26, var27); /* Direct call toolcontext#ToolContext#error on <var23:ToolContext>*/
}
} else {
}
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__next]))(var3) /* next on <var3:Iterator[ANode]>*/;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method flow#ABlockExpr#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__ABlockExpr__accept_flow_visitor(val* self, val* p0) {
flow__ABlockExpr__accept_flow_visitor(self, p0); /* Direct call flow#ABlockExpr#accept_flow_visitor on <self:Object(ABlockExpr)>*/
RET_LABEL:;
}
/* method flow#AReturnExpr#accept_flow_visitor for (self: AReturnExpr, FlowVisitor) */
void flow__AReturnExpr__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : FlowContext */;
var_v = p0;
{
((void (*)(val*, val*))(self->class->vft[COLOR_flow__AReturnExpr__accept_flow_visitor]))(self, p0) /* accept_flow_visitor on <self:AReturnExpr>*/;
}
{
var = flow__FlowVisitor__make_unreachable_flow(var_v);
}
var;
RET_LABEL:;
}
/* method flow#AReturnExpr#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__AReturnExpr__accept_flow_visitor(val* self, val* p0) {
flow__AReturnExpr__accept_flow_visitor(self, p0); /* Direct call flow#AReturnExpr#accept_flow_visitor on <self:Object(AReturnExpr)>*/
RET_LABEL:;
}
/* method flow#AContinueExpr#before_flow_context for (self: AContinueExpr): nullable FlowContext */
val* flow__AContinueExpr__before_flow_context(val* self) {
val* var /* : nullable FlowContext */;
val* var1 /* : nullable FlowContext */;
val* var3 /* : nullable FlowContext */;
val* var_after /* var after: nullable FlowContext */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : null */;
val* var12 /* : Array[FlowContext] */;
val* var14 /* : Array[FlowContext] */;
val* var15 /* : nullable Object */;
{
{ /* Inline flow#AExpr#after_flow_context (self) on <self:AContinueExpr> */
var3 = self->attrs[COLOR_flow__AExpr___after_flow_context].val; /* _after_flow_context on <self:AContinueExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_after = var1;
var4 = NULL;
if (var_after == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_after,var4) on <var_after:nullable FlowContext> */
var_other = var4;
{
{ /* Inline kernel#Object#is_same_instance (var_after,var_other) on <var_after:nullable FlowContext(FlowContext)> */
var10 = var_after == var_other;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
var11 = NULL;
var = var11;
goto RET_LABEL;
} else {
}
{
{ /* Inline flow#FlowContext#previous (var_after) on <var_after:nullable FlowContext(FlowContext)> */
var14 = var_after->attrs[COLOR_flow__FlowContext___previous].val; /* _previous on <var_after:nullable FlowContext(FlowContext)> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _previous");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 192);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = abstract_collection__SequenceRead__first(var12);
}
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flow#AContinueExpr#before_flow_context for (self: Object): nullable FlowContext */
val* VIRTUAL_flow__AContinueExpr__before_flow_context(val* self) {
val* var /* : nullable FlowContext */;
val* var1 /* : nullable FlowContext */;
var1 = flow__AContinueExpr__before_flow_context(self);
var = var1;
RET_LABEL:;
return var;
}
/* method flow#AContinueExpr#accept_flow_visitor for (self: AContinueExpr, FlowVisitor) */
void flow__AContinueExpr__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : FlowContext */;
var_v = p0;
{
((void (*)(val*, val*))(self->class->vft[COLOR_flow__AContinueExpr__accept_flow_visitor]))(self, p0) /* accept_flow_visitor on <self:AContinueExpr>*/;
}
{
var = flow__FlowVisitor__make_unreachable_flow(var_v);
}
var;
RET_LABEL:;
}
/* method flow#AContinueExpr#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__AContinueExpr__accept_flow_visitor(val* self, val* p0) {
flow__AContinueExpr__accept_flow_visitor(self, p0); /* Direct call flow#AContinueExpr#accept_flow_visitor on <self:Object(AContinueExpr)>*/
RET_LABEL:;
}
/* method flow#ABreakExpr#before_flow_context for (self: ABreakExpr): nullable FlowContext */
val* flow__ABreakExpr__before_flow_context(val* self) {
val* var /* : nullable FlowContext */;
val* var1 /* : nullable FlowContext */;
val* var3 /* : nullable FlowContext */;
val* var_after /* var after: nullable FlowContext */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : null */;
val* var12 /* : Array[FlowContext] */;
val* var14 /* : Array[FlowContext] */;
val* var15 /* : nullable Object */;
{
{ /* Inline flow#AExpr#after_flow_context (self) on <self:ABreakExpr> */
var3 = self->attrs[COLOR_flow__AExpr___after_flow_context].val; /* _after_flow_context on <self:ABreakExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_after = var1;
var4 = NULL;
if (var_after == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_after,var4) on <var_after:nullable FlowContext> */
var_other = var4;
{
{ /* Inline kernel#Object#is_same_instance (var_after,var_other) on <var_after:nullable FlowContext(FlowContext)> */
var10 = var_after == var_other;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
var11 = NULL;
var = var11;
goto RET_LABEL;
} else {
}
{
{ /* Inline flow#FlowContext#previous (var_after) on <var_after:nullable FlowContext(FlowContext)> */
var14 = var_after->attrs[COLOR_flow__FlowContext___previous].val; /* _previous on <var_after:nullable FlowContext(FlowContext)> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _previous");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 192);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = abstract_collection__SequenceRead__first(var12);
}
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flow#ABreakExpr#before_flow_context for (self: Object): nullable FlowContext */
val* VIRTUAL_flow__ABreakExpr__before_flow_context(val* self) {
val* var /* : nullable FlowContext */;
val* var1 /* : nullable FlowContext */;
var1 = flow__ABreakExpr__before_flow_context(self);
var = var1;
RET_LABEL:;
return var;
}
/* method flow#ABreakExpr#accept_flow_visitor for (self: ABreakExpr, FlowVisitor) */
void flow__ABreakExpr__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : FlowContext */;
var_v = p0;
{
((void (*)(val*, val*))(self->class->vft[COLOR_flow__ABreakExpr__accept_flow_visitor]))(self, p0) /* accept_flow_visitor on <self:ABreakExpr>*/;
}
{
var = flow__FlowVisitor__make_unreachable_flow(var_v);
}
var;
RET_LABEL:;
}
/* method flow#ABreakExpr#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__ABreakExpr__accept_flow_visitor(val* self, val* p0) {
flow__ABreakExpr__accept_flow_visitor(self, p0); /* Direct call flow#ABreakExpr#accept_flow_visitor on <self:Object(ABreakExpr)>*/
RET_LABEL:;
}
/* method flow#AAbortExpr#accept_flow_visitor for (self: AAbortExpr, FlowVisitor) */
void flow__AAbortExpr__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : FlowContext */;
var_v = p0;
{
((void (*)(val*, val*))(self->class->vft[COLOR_flow__AAbortExpr__accept_flow_visitor]))(self, p0) /* accept_flow_visitor on <self:AAbortExpr>*/;
}
{
var = flow__FlowVisitor__make_unreachable_flow(var_v);
}
var;
RET_LABEL:;
}
/* method flow#AAbortExpr#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__AAbortExpr__accept_flow_visitor(val* self, val* p0) {
flow__AAbortExpr__accept_flow_visitor(self, p0); /* Direct call flow#AAbortExpr#accept_flow_visitor on <self:Object(AAbortExpr)>*/
RET_LABEL:;
}
/* method flow#ADoExpr#accept_flow_visitor for (self: ADoExpr, FlowVisitor) */
void flow__ADoExpr__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : nullable EscapeMark */;
val* var2 /* : nullable EscapeMark */;
var_v = p0;
{
((void (*)(val*, val*))(self->class->vft[COLOR_flow__ADoExpr__accept_flow_visitor]))(self, p0) /* accept_flow_visitor on <self:ADoExpr>*/;
}
{
{ /* Inline scope#ADoExpr#escapemark (self) on <self:ADoExpr> */
var2 = self->attrs[COLOR_scope__ADoExpr___escapemark].val; /* _escapemark on <self:ADoExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
flow__FlowVisitor__merge_breaks(var_v, var); /* Direct call flow#FlowVisitor#merge_breaks on <var_v:FlowVisitor>*/
}
RET_LABEL:;
}
/* method flow#ADoExpr#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__ADoExpr__accept_flow_visitor(val* self, val* p0) {
flow__ADoExpr__accept_flow_visitor(self, p0); /* Direct call flow#ADoExpr#accept_flow_visitor on <self:Object(ADoExpr)>*/
RET_LABEL:;
}
/* method flow#AIfExpr#accept_flow_visitor for (self: AIfExpr, FlowVisitor) */
void flow__AIfExpr__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : AExpr */;
val* var1 /* : FlowContext */;
val* var_after_expr /* var after_expr: FlowContext */;
val* var2 /* : FlowContext */;
val* var4 /* : FlowContext */;
val* var6 /* : nullable AExpr */;
val* var7 /* : FlowContext */;
val* var9 /* : FlowContext */;
val* var_after_then /* var after_then: FlowContext */;
val* var10 /* : FlowContext */;
val* var12 /* : FlowContext */;
val* var14 /* : nullable AExpr */;
val* var15 /* : FlowContext */;
val* var17 /* : FlowContext */;
val* var_after_else /* var after_else: FlowContext */;
val* var18 /* : FlowContext */;
var_v = p0;
{
var = parser_nodes__AIfExpr__n_expr(self);
}
{
var1 = flow__FlowVisitor__visit_expr(var_v, var);
}
var_after_expr = var1;
{
{ /* Inline flow#FlowContext#when_true (var_after_expr) on <var_after_expr:FlowContext> */
var4 = var_after_expr->attrs[COLOR_flow__FlowContext___when_true].val; /* _when_true on <var_after_expr:FlowContext> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_true");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 228);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline flow#FlowVisitor#current_flow_context= (var_v,var2) on <var_v:FlowVisitor> */
var_v->attrs[COLOR_flow__FlowVisitor___current_flow_context].val = var2; /* _current_flow_context on <var_v:FlowVisitor> */
RET_LABEL5:(void)0;
}
}
{
var6 = parser_nodes__AIfExpr__n_then(self);
}
{
parser_nodes__Visitor__enter_visit(var_v, var6); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:FlowVisitor>*/
}
{
{ /* Inline flow#FlowVisitor#current_flow_context (var_v) on <var_v:FlowVisitor> */
var9 = var_v->attrs[COLOR_flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <var_v:FlowVisitor> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 39);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_after_then = var7;
{
{ /* Inline flow#FlowContext#when_false (var_after_expr) on <var_after_expr:FlowContext> */
var12 = var_after_expr->attrs[COLOR_flow__FlowContext___when_false].val; /* _when_false on <var_after_expr:FlowContext> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_false");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 231);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline flow#FlowVisitor#current_flow_context= (var_v,var10) on <var_v:FlowVisitor> */
var_v->attrs[COLOR_flow__FlowVisitor___current_flow_context].val = var10; /* _current_flow_context on <var_v:FlowVisitor> */
RET_LABEL13:(void)0;
}
}
{
var14 = parser_nodes__AIfExpr__n_else(self);
}
{
parser_nodes__Visitor__enter_visit(var_v, var14); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:FlowVisitor>*/
}
{
{ /* Inline flow#FlowVisitor#current_flow_context (var_v) on <var_v:FlowVisitor> */
var17 = var_v->attrs[COLOR_flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <var_v:FlowVisitor> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 39);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_after_else = var15;
{
var18 = flow__FlowVisitor__make_merge_flow(var_v, var_after_then, var_after_else);
}
var18;
RET_LABEL:;
}
/* method flow#AIfExpr#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__AIfExpr__accept_flow_visitor(val* self, val* p0) {
flow__AIfExpr__accept_flow_visitor(self, p0); /* Direct call flow#AIfExpr#accept_flow_visitor on <self:Object(AIfExpr)>*/
RET_LABEL:;
}
/* method flow#AIfexprExpr#accept_flow_visitor for (self: AIfexprExpr, FlowVisitor) */
void flow__AIfexprExpr__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : AExpr */;
val* var1 /* : FlowContext */;
val* var_after_expr /* var after_expr: FlowContext */;
val* var2 /* : FlowContext */;
val* var4 /* : FlowContext */;
val* var6 /* : AExpr */;
val* var7 /* : FlowContext */;
val* var9 /* : FlowContext */;
val* var_after_then /* var after_then: FlowContext */;
val* var10 /* : FlowContext */;
val* var12 /* : FlowContext */;
val* var14 /* : AExpr */;
val* var15 /* : FlowContext */;
val* var17 /* : FlowContext */;
val* var_after_else /* var after_else: FlowContext */;
val* var18 /* : FlowContext */;
var_v = p0;
{
var = parser_nodes__AIfexprExpr__n_expr(self);
}
{
var1 = flow__FlowVisitor__visit_expr(var_v, var);
}
var_after_expr = var1;
{
{ /* Inline flow#FlowContext#when_true (var_after_expr) on <var_after_expr:FlowContext> */
var4 = var_after_expr->attrs[COLOR_flow__FlowContext___when_true].val; /* _when_true on <var_after_expr:FlowContext> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_true");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 228);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline flow#FlowVisitor#current_flow_context= (var_v,var2) on <var_v:FlowVisitor> */
var_v->attrs[COLOR_flow__FlowVisitor___current_flow_context].val = var2; /* _current_flow_context on <var_v:FlowVisitor> */
RET_LABEL5:(void)0;
}
}
{
var6 = parser_nodes__AIfexprExpr__n_then(self);
}
{
parser_nodes__Visitor__enter_visit(var_v, var6); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:FlowVisitor>*/
}
{
{ /* Inline flow#FlowVisitor#current_flow_context (var_v) on <var_v:FlowVisitor> */
var9 = var_v->attrs[COLOR_flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <var_v:FlowVisitor> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 39);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_after_then = var7;
{
{ /* Inline flow#FlowContext#when_false (var_after_expr) on <var_after_expr:FlowContext> */
var12 = var_after_expr->attrs[COLOR_flow__FlowContext___when_false].val; /* _when_false on <var_after_expr:FlowContext> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_false");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 231);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline flow#FlowVisitor#current_flow_context= (var_v,var10) on <var_v:FlowVisitor> */
var_v->attrs[COLOR_flow__FlowVisitor___current_flow_context].val = var10; /* _current_flow_context on <var_v:FlowVisitor> */
RET_LABEL13:(void)0;
}
}
{
var14 = parser_nodes__AIfexprExpr__n_else(self);
}
{
parser_nodes__Visitor__enter_visit(var_v, var14); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:FlowVisitor>*/
}
{
{ /* Inline flow#FlowVisitor#current_flow_context (var_v) on <var_v:FlowVisitor> */
var17 = var_v->attrs[COLOR_flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <var_v:FlowVisitor> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 39);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_after_else = var15;
{
var18 = flow__FlowVisitor__make_merge_flow(var_v, var_after_then, var_after_else);
}
var18;
RET_LABEL:;
}
/* method flow#AIfexprExpr#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__AIfexprExpr__accept_flow_visitor(val* self, val* p0) {
flow__AIfexprExpr__accept_flow_visitor(self, p0); /* Direct call flow#AIfexprExpr#accept_flow_visitor on <self:Object(AIfexprExpr)>*/
RET_LABEL:;
}
/* method flow#AWhileExpr#accept_flow_visitor for (self: AWhileExpr, FlowVisitor) */
void flow__AWhileExpr__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : FlowContext */;
val* var_before_loop /* var before_loop: FlowContext */;
val* var1 /* : AExpr */;
val* var2 /* : FlowContext */;
val* var_after_expr /* var after_expr: FlowContext */;
val* var3 /* : FlowContext */;
val* var5 /* : FlowContext */;
val* var7 /* : nullable AExpr */;
val* var8 /* : FlowContext */;
val* var10 /* : FlowContext */;
val* var_after_block /* var after_block: FlowContext */;
val* var11 /* : nullable EscapeMark */;
val* var13 /* : nullable EscapeMark */;
val* var14 /* : FlowContext */;
val* var16 /* : FlowContext */;
val* var18 /* : nullable EscapeMark */;
val* var20 /* : nullable EscapeMark */;
var_v = p0;
{
var = flow__FlowVisitor__make_sub_flow(var_v);
}
var_before_loop = var;
{
var1 = parser_nodes__AWhileExpr__n_expr(self);
}
{
var2 = flow__FlowVisitor__visit_expr(var_v, var1);
}
var_after_expr = var2;
{
{ /* Inline flow#FlowContext#when_true (var_after_expr) on <var_after_expr:FlowContext> */
var5 = var_after_expr->attrs[COLOR_flow__FlowContext___when_true].val; /* _when_true on <var_after_expr:FlowContext> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_true");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 228);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline flow#FlowVisitor#current_flow_context= (var_v,var3) on <var_v:FlowVisitor> */
var_v->attrs[COLOR_flow__FlowVisitor___current_flow_context].val = var3; /* _current_flow_context on <var_v:FlowVisitor> */
RET_LABEL6:(void)0;
}
}
{
var7 = parser_nodes__AWhileExpr__n_block(self);
}
{
parser_nodes__Visitor__enter_visit(var_v, var7); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:FlowVisitor>*/
}
{
{ /* Inline flow#FlowVisitor#current_flow_context (var_v) on <var_v:FlowVisitor> */
var10 = var_v->attrs[COLOR_flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <var_v:FlowVisitor> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 39);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_after_block = var8;
{
flow__FlowContext__add_loop(var_before_loop, var_after_block); /* Direct call flow#FlowContext#add_loop on <var_before_loop:FlowContext>*/
}
{
{ /* Inline scope#AWhileExpr#escapemark (self) on <self:AWhileExpr> */
var13 = self->attrs[COLOR_scope__AWhileExpr___escapemark].val; /* _escapemark on <self:AWhileExpr> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
flow__FlowVisitor__merge_continues_to(var_v, var_after_block, var11); /* Direct call flow#FlowVisitor#merge_continues_to on <var_v:FlowVisitor>*/
}
{
{ /* Inline flow#FlowContext#when_false (var_after_expr) on <var_after_expr:FlowContext> */
var16 = var_after_expr->attrs[COLOR_flow__FlowContext___when_false].val; /* _when_false on <var_after_expr:FlowContext> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_false");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 231);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline flow#FlowVisitor#current_flow_context= (var_v,var14) on <var_v:FlowVisitor> */
var_v->attrs[COLOR_flow__FlowVisitor___current_flow_context].val = var14; /* _current_flow_context on <var_v:FlowVisitor> */
RET_LABEL17:(void)0;
}
}
{
{ /* Inline scope#AWhileExpr#escapemark (self) on <self:AWhileExpr> */
var20 = self->attrs[COLOR_scope__AWhileExpr___escapemark].val; /* _escapemark on <self:AWhileExpr> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
flow__FlowVisitor__merge_breaks(var_v, var18); /* Direct call flow#FlowVisitor#merge_breaks on <var_v:FlowVisitor>*/
}
RET_LABEL:;
}
/* method flow#AWhileExpr#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__AWhileExpr__accept_flow_visitor(val* self, val* p0) {
flow__AWhileExpr__accept_flow_visitor(self, p0); /* Direct call flow#AWhileExpr#accept_flow_visitor on <self:Object(AWhileExpr)>*/
RET_LABEL:;
}
/* method flow#ALoopExpr#accept_flow_visitor for (self: ALoopExpr, FlowVisitor) */
void flow__ALoopExpr__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : FlowContext */;
val* var_before_loop /* var before_loop: FlowContext */;
val* var1 /* : nullable AExpr */;
val* var2 /* : FlowContext */;
val* var4 /* : FlowContext */;
val* var_after_block /* var after_block: FlowContext */;
val* var5 /* : nullable EscapeMark */;
val* var7 /* : nullable EscapeMark */;
val* var8 /* : FlowContext */;
val* var9 /* : nullable EscapeMark */;
val* var11 /* : nullable EscapeMark */;
var_v = p0;
{
var = flow__FlowVisitor__make_sub_flow(var_v);
}
var_before_loop = var;
{
var1 = parser_nodes__ALoopExpr__n_block(self);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:FlowVisitor>*/
}
{
{ /* Inline flow#FlowVisitor#current_flow_context (var_v) on <var_v:FlowVisitor> */
var4 = var_v->attrs[COLOR_flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <var_v:FlowVisitor> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 39);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
var_after_block = var2;
{
flow__FlowContext__add_loop(var_before_loop, var_after_block); /* Direct call flow#FlowContext#add_loop on <var_before_loop:FlowContext>*/
}
{
{ /* Inline scope#ALoopExpr#escapemark (self) on <self:ALoopExpr> */
var7 = self->attrs[COLOR_scope__ALoopExpr___escapemark].val; /* _escapemark on <self:ALoopExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
flow__FlowVisitor__merge_continues_to(var_v, var_after_block, var5); /* Direct call flow#FlowVisitor#merge_continues_to on <var_v:FlowVisitor>*/
}
{
var8 = flow__FlowVisitor__make_unreachable_flow(var_v);
}
var8;
{
{ /* Inline scope#ALoopExpr#escapemark (self) on <self:ALoopExpr> */
var11 = self->attrs[COLOR_scope__ALoopExpr___escapemark].val; /* _escapemark on <self:ALoopExpr> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
flow__FlowVisitor__merge_breaks(var_v, var9); /* Direct call flow#FlowVisitor#merge_breaks on <var_v:FlowVisitor>*/
}
RET_LABEL:;
}
/* method flow#ALoopExpr#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__ALoopExpr__accept_flow_visitor(val* self, val* p0) {
flow__ALoopExpr__accept_flow_visitor(self, p0); /* Direct call flow#ALoopExpr#accept_flow_visitor on <self:Object(ALoopExpr)>*/
RET_LABEL:;
}
/* method flow#AForExpr#accept_flow_visitor for (self: AForExpr, FlowVisitor) */
void flow__AForExpr__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : AExpr */;
val* var1 /* : FlowContext */;
val* var_before_loop /* var before_loop: FlowContext */;
val* var2 /* : nullable AExpr */;
val* var3 /* : FlowContext */;
val* var5 /* : FlowContext */;
val* var_after_block /* var after_block: FlowContext */;
val* var6 /* : nullable EscapeMark */;
val* var8 /* : nullable EscapeMark */;
val* var9 /* : FlowContext */;
val* var11 /* : FlowContext */;
val* var12 /* : FlowContext */;
val* var13 /* : nullable EscapeMark */;
val* var15 /* : nullable EscapeMark */;
var_v = p0;
{
var = parser_nodes__AForExpr__n_expr(self);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:FlowVisitor>*/
}
{
var1 = flow__FlowVisitor__make_sub_flow(var_v);
}
var_before_loop = var1;
{
var2 = parser_nodes__AForExpr__n_block(self);
}
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:FlowVisitor>*/
}
{
{ /* Inline flow#FlowVisitor#current_flow_context (var_v) on <var_v:FlowVisitor> */
var5 = var_v->attrs[COLOR_flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <var_v:FlowVisitor> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 39);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_after_block = var3;
{
flow__FlowContext__add_loop(var_before_loop, var_after_block); /* Direct call flow#FlowContext#add_loop on <var_before_loop:FlowContext>*/
}
{
{ /* Inline scope#AForExpr#escapemark (self) on <self:AForExpr> */
var8 = self->attrs[COLOR_scope__AForExpr___escapemark].val; /* _escapemark on <self:AForExpr> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
flow__FlowVisitor__merge_continues_to(var_v, var_after_block, var6); /* Direct call flow#FlowVisitor#merge_continues_to on <var_v:FlowVisitor>*/
}
{
{ /* Inline flow#FlowVisitor#current_flow_context (var_v) on <var_v:FlowVisitor> */
var11 = var_v->attrs[COLOR_flow__FlowVisitor___current_flow_context].val; /* _current_flow_context on <var_v:FlowVisitor> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _current_flow_context");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 39);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = flow__FlowVisitor__make_merge_flow(var_v, var9, var_before_loop);
}
var12;
{
{ /* Inline scope#AForExpr#escapemark (self) on <self:AForExpr> */
var15 = self->attrs[COLOR_scope__AForExpr___escapemark].val; /* _escapemark on <self:AForExpr> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
flow__FlowVisitor__merge_breaks(var_v, var13); /* Direct call flow#FlowVisitor#merge_breaks on <var_v:FlowVisitor>*/
}
RET_LABEL:;
}
/* method flow#AForExpr#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__AForExpr__accept_flow_visitor(val* self, val* p0) {
flow__AForExpr__accept_flow_visitor(self, p0); /* Direct call flow#AForExpr#accept_flow_visitor on <self:Object(AForExpr)>*/
RET_LABEL:;
}
/* method flow#AAssertExpr#accept_flow_visitor for (self: AAssertExpr, FlowVisitor) */
void flow__AAssertExpr__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : AExpr */;
val* var1 /* : FlowContext */;
val* var_after_expr /* var after_expr: FlowContext */;
val* var2 /* : FlowContext */;
val* var4 /* : FlowContext */;
val* var6 /* : nullable AExpr */;
val* var7 /* : FlowContext */;
val* var9 /* : FlowContext */;
var_v = p0;
{
var = parser_nodes__AAssertExpr__n_expr(self);
}
{
var1 = flow__FlowVisitor__visit_expr(var_v, var);
}
var_after_expr = var1;
{
{ /* Inline flow#FlowContext#when_false (var_after_expr) on <var_after_expr:FlowContext> */
var4 = var_after_expr->attrs[COLOR_flow__FlowContext___when_false].val; /* _when_false on <var_after_expr:FlowContext> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_false");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 231);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline flow#FlowVisitor#current_flow_context= (var_v,var2) on <var_v:FlowVisitor> */
var_v->attrs[COLOR_flow__FlowVisitor___current_flow_context].val = var2; /* _current_flow_context on <var_v:FlowVisitor> */
RET_LABEL5:(void)0;
}
}
{
var6 = parser_nodes__AAssertExpr__n_else(self);
}
{
parser_nodes__Visitor__enter_visit(var_v, var6); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:FlowVisitor>*/
}
{
{ /* Inline flow#FlowContext#when_true (var_after_expr) on <var_after_expr:FlowContext> */
var9 = var_after_expr->attrs[COLOR_flow__FlowContext___when_true].val; /* _when_true on <var_after_expr:FlowContext> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_true");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 228);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline flow#FlowVisitor#current_flow_context= (var_v,var7) on <var_v:FlowVisitor> */
var_v->attrs[COLOR_flow__FlowVisitor___current_flow_context].val = var7; /* _current_flow_context on <var_v:FlowVisitor> */
RET_LABEL10:(void)0;
}
}
RET_LABEL:;
}
/* method flow#AAssertExpr#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__AAssertExpr__accept_flow_visitor(val* self, val* p0) {
flow__AAssertExpr__accept_flow_visitor(self, p0); /* Direct call flow#AAssertExpr#accept_flow_visitor on <self:Object(AAssertExpr)>*/
RET_LABEL:;
}
/* method flow#AOrExpr#accept_flow_visitor for (self: AOrExpr, FlowVisitor) */
void flow__AOrExpr__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : AExpr */;
val* var1 /* : FlowContext */;
val* var_after_expr /* var after_expr: FlowContext */;
val* var2 /* : FlowContext */;
val* var4 /* : FlowContext */;
val* var6 /* : AExpr */;
val* var7 /* : FlowContext */;
val* var_after_expr2 /* var after_expr2: FlowContext */;
val* var8 /* : FlowContext */;
val* var10 /* : FlowContext */;
val* var11 /* : FlowContext */;
val* var13 /* : FlowContext */;
val* var14 /* : FlowContext */;
val* var_merge_true /* var merge_true: FlowContext */;
static val* varonce;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : FlatString */;
val* var20 /* : FlowContext */;
val* var22 /* : FlowContext */;
val* var23 /* : FlowContext */;
var_v = p0;
{
var = parser_nodes__AOrExpr__n_expr(self);
}
{
var1 = flow__FlowVisitor__visit_expr(var_v, var);
}
var_after_expr = var1;
{
{ /* Inline flow#FlowContext#when_false (var_after_expr) on <var_after_expr:FlowContext> */
var4 = var_after_expr->attrs[COLOR_flow__FlowContext___when_false].val; /* _when_false on <var_after_expr:FlowContext> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_false");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 231);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline flow#FlowVisitor#current_flow_context= (var_v,var2) on <var_v:FlowVisitor> */
var_v->attrs[COLOR_flow__FlowVisitor___current_flow_context].val = var2; /* _current_flow_context on <var_v:FlowVisitor> */
RET_LABEL5:(void)0;
}
}
{
var6 = parser_nodes__AOrExpr__n_expr2(self);
}
{
var7 = flow__FlowVisitor__visit_expr(var_v, var6);
}
var_after_expr2 = var7;
{
{ /* Inline flow#FlowContext#when_true (var_after_expr) on <var_after_expr:FlowContext> */
var10 = var_after_expr->attrs[COLOR_flow__FlowContext___when_true].val; /* _when_true on <var_after_expr:FlowContext> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_true");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 228);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline flow#FlowContext#when_true (var_after_expr2) on <var_after_expr2:FlowContext> */
var13 = var_after_expr2->attrs[COLOR_flow__FlowContext___when_true].val; /* _when_true on <var_after_expr2:FlowContext> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_true");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 228);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = flow__FlowVisitor__make_merge_flow(var_v, var8, var11);
}
var_merge_true = var14;
if (varonce) {
var15 = varonce;
} else {
var16 = "OR TRUE";
var17 = 7;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce = var15;
}
{
{ /* Inline flow#FlowContext#name= (var_merge_true,var15) on <var_merge_true:FlowContext> */
var_merge_true->attrs[COLOR_flow__FlowContext___name].val = var15; /* _name on <var_merge_true:FlowContext> */
RET_LABEL19:(void)0;
}
}
{
{ /* Inline flow#FlowContext#when_false (var_after_expr2) on <var_after_expr2:FlowContext> */
var22 = var_after_expr2->attrs[COLOR_flow__FlowContext___when_false].val; /* _when_false on <var_after_expr2:FlowContext> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_false");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 231);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = flow__FlowVisitor__make_true_false_flow(var_v, var_merge_true, var20);
}
var23;
RET_LABEL:;
}
/* method flow#AOrExpr#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__AOrExpr__accept_flow_visitor(val* self, val* p0) {
flow__AOrExpr__accept_flow_visitor(self, p0); /* Direct call flow#AOrExpr#accept_flow_visitor on <self:Object(AOrExpr)>*/
RET_LABEL:;
}
/* method flow#AImpliesExpr#accept_flow_visitor for (self: AImpliesExpr, FlowVisitor) */
void flow__AImpliesExpr__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : AExpr */;
val* var1 /* : FlowContext */;
val* var_after_expr /* var after_expr: FlowContext */;
val* var2 /* : FlowContext */;
val* var4 /* : FlowContext */;
val* var6 /* : AExpr */;
val* var7 /* : FlowContext */;
val* var_after_expr2 /* var after_expr2: FlowContext */;
val* var8 /* : FlowContext */;
val* var10 /* : FlowContext */;
val* var11 /* : FlowContext */;
val* var13 /* : FlowContext */;
val* var14 /* : FlowContext */;
val* var_merge_true /* var merge_true: FlowContext */;
static val* varonce;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : FlatString */;
val* var20 /* : FlowContext */;
val* var22 /* : FlowContext */;
val* var23 /* : FlowContext */;
var_v = p0;
{
var = parser_nodes__AImpliesExpr__n_expr(self);
}
{
var1 = flow__FlowVisitor__visit_expr(var_v, var);
}
var_after_expr = var1;
{
{ /* Inline flow#FlowContext#when_true (var_after_expr) on <var_after_expr:FlowContext> */
var4 = var_after_expr->attrs[COLOR_flow__FlowContext___when_true].val; /* _when_true on <var_after_expr:FlowContext> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_true");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 228);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline flow#FlowVisitor#current_flow_context= (var_v,var2) on <var_v:FlowVisitor> */
var_v->attrs[COLOR_flow__FlowVisitor___current_flow_context].val = var2; /* _current_flow_context on <var_v:FlowVisitor> */
RET_LABEL5:(void)0;
}
}
{
var6 = parser_nodes__AImpliesExpr__n_expr2(self);
}
{
var7 = flow__FlowVisitor__visit_expr(var_v, var6);
}
var_after_expr2 = var7;
{
{ /* Inline flow#FlowContext#when_false (var_after_expr) on <var_after_expr:FlowContext> */
var10 = var_after_expr->attrs[COLOR_flow__FlowContext___when_false].val; /* _when_false on <var_after_expr:FlowContext> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_false");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 231);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline flow#FlowContext#when_true (var_after_expr2) on <var_after_expr2:FlowContext> */
var13 = var_after_expr2->attrs[COLOR_flow__FlowContext___when_true].val; /* _when_true on <var_after_expr2:FlowContext> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_true");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 228);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = flow__FlowVisitor__make_merge_flow(var_v, var8, var11);
}
var_merge_true = var14;
if (varonce) {
var15 = varonce;
} else {
var16 = "OR TRUE";
var17 = 7;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce = var15;
}
{
{ /* Inline flow#FlowContext#name= (var_merge_true,var15) on <var_merge_true:FlowContext> */
var_merge_true->attrs[COLOR_flow__FlowContext___name].val = var15; /* _name on <var_merge_true:FlowContext> */
RET_LABEL19:(void)0;
}
}
{
{ /* Inline flow#FlowContext#when_false (var_after_expr2) on <var_after_expr2:FlowContext> */
var22 = var_after_expr2->attrs[COLOR_flow__FlowContext___when_false].val; /* _when_false on <var_after_expr2:FlowContext> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_false");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 231);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = flow__FlowVisitor__make_true_false_flow(var_v, var_merge_true, var20);
}
var23;
RET_LABEL:;
}
/* method flow#AImpliesExpr#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__AImpliesExpr__accept_flow_visitor(val* self, val* p0) {
flow__AImpliesExpr__accept_flow_visitor(self, p0); /* Direct call flow#AImpliesExpr#accept_flow_visitor on <self:Object(AImpliesExpr)>*/
RET_LABEL:;
}
/* method flow#AAndExpr#accept_flow_visitor for (self: AAndExpr, FlowVisitor) */
void flow__AAndExpr__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : AExpr */;
val* var1 /* : FlowContext */;
val* var_after_expr /* var after_expr: FlowContext */;
val* var2 /* : FlowContext */;
val* var4 /* : FlowContext */;
val* var6 /* : AExpr */;
val* var7 /* : FlowContext */;
val* var_after_expr2 /* var after_expr2: FlowContext */;
val* var8 /* : FlowContext */;
val* var10 /* : FlowContext */;
val* var11 /* : FlowContext */;
val* var13 /* : FlowContext */;
val* var14 /* : FlowContext */;
val* var_merge_false /* var merge_false: FlowContext */;
static val* varonce;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : FlatString */;
val* var20 /* : FlowContext */;
val* var22 /* : FlowContext */;
val* var23 /* : FlowContext */;
var_v = p0;
{
var = parser_nodes__AAndExpr__n_expr(self);
}
{
var1 = flow__FlowVisitor__visit_expr(var_v, var);
}
var_after_expr = var1;
{
{ /* Inline flow#FlowContext#when_true (var_after_expr) on <var_after_expr:FlowContext> */
var4 = var_after_expr->attrs[COLOR_flow__FlowContext___when_true].val; /* _when_true on <var_after_expr:FlowContext> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_true");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 228);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline flow#FlowVisitor#current_flow_context= (var_v,var2) on <var_v:FlowVisitor> */
var_v->attrs[COLOR_flow__FlowVisitor___current_flow_context].val = var2; /* _current_flow_context on <var_v:FlowVisitor> */
RET_LABEL5:(void)0;
}
}
{
var6 = parser_nodes__AAndExpr__n_expr2(self);
}
{
var7 = flow__FlowVisitor__visit_expr(var_v, var6);
}
var_after_expr2 = var7;
{
{ /* Inline flow#FlowContext#when_false (var_after_expr) on <var_after_expr:FlowContext> */
var10 = var_after_expr->attrs[COLOR_flow__FlowContext___when_false].val; /* _when_false on <var_after_expr:FlowContext> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_false");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 231);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline flow#FlowContext#when_false (var_after_expr2) on <var_after_expr2:FlowContext> */
var13 = var_after_expr2->attrs[COLOR_flow__FlowContext___when_false].val; /* _when_false on <var_after_expr2:FlowContext> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_false");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 231);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = flow__FlowVisitor__make_merge_flow(var_v, var8, var11);
}
var_merge_false = var14;
if (varonce) {
var15 = varonce;
} else {
var16 = "AND FALSE";
var17 = 9;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce = var15;
}
{
{ /* Inline flow#FlowContext#name= (var_merge_false,var15) on <var_merge_false:FlowContext> */
var_merge_false->attrs[COLOR_flow__FlowContext___name].val = var15; /* _name on <var_merge_false:FlowContext> */
RET_LABEL19:(void)0;
}
}
{
{ /* Inline flow#FlowContext#when_true (var_after_expr2) on <var_after_expr2:FlowContext> */
var22 = var_after_expr2->attrs[COLOR_flow__FlowContext___when_true].val; /* _when_true on <var_after_expr2:FlowContext> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_true");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 228);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = flow__FlowVisitor__make_true_false_flow(var_v, var20, var_merge_false);
}
var23;
RET_LABEL:;
}
/* method flow#AAndExpr#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__AAndExpr__accept_flow_visitor(val* self, val* p0) {
flow__AAndExpr__accept_flow_visitor(self, p0); /* Direct call flow#AAndExpr#accept_flow_visitor on <self:Object(AAndExpr)>*/
RET_LABEL:;
}
/* method flow#ANotExpr#accept_flow_visitor for (self: ANotExpr, FlowVisitor) */
void flow__ANotExpr__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : AExpr */;
val* var1 /* : FlowContext */;
val* var_after_expr /* var after_expr: FlowContext */;
val* var2 /* : FlowContext */;
val* var4 /* : FlowContext */;
val* var5 /* : FlowContext */;
val* var7 /* : FlowContext */;
val* var8 /* : FlowContext */;
var_v = p0;
{
var = parser_nodes__ANotExpr__n_expr(self);
}
{
var1 = flow__FlowVisitor__visit_expr(var_v, var);
}
var_after_expr = var1;
{
{ /* Inline flow#FlowContext#when_false (var_after_expr) on <var_after_expr:FlowContext> */
var4 = var_after_expr->attrs[COLOR_flow__FlowContext___when_false].val; /* _when_false on <var_after_expr:FlowContext> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_false");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 231);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline flow#FlowContext#when_true (var_after_expr) on <var_after_expr:FlowContext> */
var7 = var_after_expr->attrs[COLOR_flow__FlowContext___when_true].val; /* _when_true on <var_after_expr:FlowContext> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_true");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 228);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = flow__FlowVisitor__make_true_false_flow(var_v, var2, var5);
}
var8;
RET_LABEL:;
}
/* method flow#ANotExpr#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__ANotExpr__accept_flow_visitor(val* self, val* p0) {
flow__ANotExpr__accept_flow_visitor(self, p0); /* Direct call flow#ANotExpr#accept_flow_visitor on <self:Object(ANotExpr)>*/
RET_LABEL:;
}
/* method flow#AOrElseExpr#accept_flow_visitor for (self: AOrElseExpr, FlowVisitor) */
void flow__AOrElseExpr__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
var_v = p0;
{
((void (*)(val*, val*))(self->class->vft[COLOR_flow__AOrElseExpr__accept_flow_visitor]))(self, p0) /* accept_flow_visitor on <self:AOrElseExpr>*/;
}
RET_LABEL:;
}
/* method flow#AOrElseExpr#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__AOrElseExpr__accept_flow_visitor(val* self, val* p0) {
flow__AOrElseExpr__accept_flow_visitor(self, p0); /* Direct call flow#AOrElseExpr#accept_flow_visitor on <self:Object(AOrElseExpr)>*/
RET_LABEL:;
}
/* method flow#AEqExpr#accept_flow_visitor for (self: AEqExpr, FlowVisitor) */
void flow__AEqExpr__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : FlowContext */;
var_v = p0;
{
((void (*)(val*, val*))(self->class->vft[COLOR_flow__AEqExpr__accept_flow_visitor]))(self, p0) /* accept_flow_visitor on <self:AEqExpr>*/;
}
{
var = flow__FlowVisitor__make_sub_true_false_flow(var_v);
}
var;
RET_LABEL:;
}
/* method flow#AEqExpr#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__AEqExpr__accept_flow_visitor(val* self, val* p0) {
flow__AEqExpr__accept_flow_visitor(self, p0); /* Direct call flow#AEqExpr#accept_flow_visitor on <self:Object(AEqExpr)>*/
RET_LABEL:;
}
/* method flow#ANeExpr#accept_flow_visitor for (self: ANeExpr, FlowVisitor) */
void flow__ANeExpr__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : FlowContext */;
var_v = p0;
{
((void (*)(val*, val*))(self->class->vft[COLOR_flow__ANeExpr__accept_flow_visitor]))(self, p0) /* accept_flow_visitor on <self:ANeExpr>*/;
}
{
var = flow__FlowVisitor__make_sub_true_false_flow(var_v);
}
var;
RET_LABEL:;
}
/* method flow#ANeExpr#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__ANeExpr__accept_flow_visitor(val* self, val* p0) {
flow__ANeExpr__accept_flow_visitor(self, p0); /* Direct call flow#ANeExpr#accept_flow_visitor on <self:Object(ANeExpr)>*/
RET_LABEL:;
}
/* method flow#AIsaExpr#accept_flow_visitor for (self: AIsaExpr, FlowVisitor) */
void flow__AIsaExpr__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : FlowContext */;
var_v = p0;
{
((void (*)(val*, val*))(self->class->vft[COLOR_flow__AIsaExpr__accept_flow_visitor]))(self, p0) /* accept_flow_visitor on <self:AIsaExpr>*/;
}
{
var = flow__FlowVisitor__make_sub_true_false_flow(var_v);
}
var;
RET_LABEL:;
}
/* method flow#AIsaExpr#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__AIsaExpr__accept_flow_visitor(val* self, val* p0) {
flow__AIsaExpr__accept_flow_visitor(self, p0); /* Direct call flow#AIsaExpr#accept_flow_visitor on <self:Object(AIsaExpr)>*/
RET_LABEL:;
}
/* method flow#AProxyExpr#accept_flow_visitor for (self: AProxyExpr, FlowVisitor) */
void flow__AProxyExpr__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : AExpr */;
val* var1 /* : FlowContext */;
val* var_after_expr /* var after_expr: FlowContext */;
var_v = p0;
{
var = parser_nodes__AProxyExpr__n_expr(self);
}
{
var1 = flow__FlowVisitor__visit_expr(var_v, var);
}
var_after_expr = var1;
{
{ /* Inline flow#FlowVisitor#current_flow_context= (var_v,var_after_expr) on <var_v:FlowVisitor> */
var_v->attrs[COLOR_flow__FlowVisitor___current_flow_context].val = var_after_expr; /* _current_flow_context on <var_v:FlowVisitor> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method flow#AProxyExpr#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__AProxyExpr__accept_flow_visitor(val* self, val* p0) {
flow__AProxyExpr__accept_flow_visitor(self, p0); /* Direct call flow#AProxyExpr#accept_flow_visitor on <self:Object(AProxyExpr)>*/
RET_LABEL:;
}
