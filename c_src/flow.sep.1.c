#include "flow.sep.0.h"
/* method flow#ToolContext#flow_phase for (self: ToolContext): Phase */
val* flow__ToolContext__flow_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_flow__ToolContext___64dflow_phase].val; /* @flow_phase on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @flow_phase");
fprintf(stderr, " (%s:%d)\n", "src/flow.nit", 26);
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
var1 = flow__ToolContext__flow_phase(self);
var = var1;
RET_LABEL:;
return var;
}
/* method flow#ToolContext#flow_phase= for (self: ToolContext, Phase) */
void flow__ToolContext__flow_phase_61d(val* self, val* p0) {
self->attrs[COLOR_flow__ToolContext___64dflow_phase].val = p0; /* @flow_phase on <self:ToolContext> */
RET_LABEL:;
}
/* method flow#ToolContext#flow_phase= for (self: Object, Phase) */
void VIRTUAL_flow__ToolContext__flow_phase_61d(val* self, val* p0) {
flow__ToolContext__flow_phase_61d(self, p0);
RET_LABEL:;
}
/* method flow#FlowPhase#process_npropdef for (self: FlowPhase, APropdef) */
void flow__FlowPhase__process_npropdef(val* self, val* p0) {
val* var_npropdef /* var npropdef: APropdef */;
val* var /* : ToolContext */;
var_npropdef = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_phase__Phase__toolcontext]))(self) /* toolcontext on <self:FlowPhase>*/;
((void (*)(val*, val*))(var_npropdef->class->vft[COLOR_flow__APropdef__do_flow]))(var_npropdef, var) /* do_flow on <var_npropdef:APropdef>*/;
RET_LABEL:;
}
/* method flow#FlowPhase#process_npropdef for (self: Object, APropdef) */
void VIRTUAL_flow__FlowPhase__process_npropdef(val* self, val* p0) {
flow__FlowPhase__process_npropdef(self, p0);
RET_LABEL:;
}
/* method flow#FlowVisitor#current_flow_context for (self: FlowVisitor): FlowContext */
val* flow__FlowVisitor__current_flow_context(val* self) {
val* var /* : FlowContext */;
val* var1 /* : FlowContext */;
var1 = self->attrs[COLOR_flow__FlowVisitor___64dcurrent_flow_context].val; /* @current_flow_context on <self:FlowVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @current_flow_context");
fprintf(stderr, " (%s:%d)\n", "src/flow.nit", 39);
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
var1 = flow__FlowVisitor__current_flow_context(self);
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowVisitor#current_flow_context= for (self: FlowVisitor, FlowContext) */
void flow__FlowVisitor__current_flow_context_61d(val* self, val* p0) {
self->attrs[COLOR_flow__FlowVisitor___64dcurrent_flow_context].val = p0; /* @current_flow_context on <self:FlowVisitor> */
RET_LABEL:;
}
/* method flow#FlowVisitor#current_flow_context= for (self: Object, FlowContext) */
void VIRTUAL_flow__FlowVisitor__current_flow_context_61d(val* self, val* p0) {
flow__FlowVisitor__current_flow_context_61d(self, p0);
RET_LABEL:;
}
/* method flow#FlowVisitor#toolcontext for (self: FlowVisitor): ToolContext */
val* flow__FlowVisitor__toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_flow__FlowVisitor___64dtoolcontext].val; /* @toolcontext on <self:FlowVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @toolcontext");
fprintf(stderr, " (%s:%d)\n", "src/flow.nit", 41);
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
var1 = flow__FlowVisitor__toolcontext(self);
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowVisitor#toolcontext= for (self: FlowVisitor, ToolContext) */
void flow__FlowVisitor__toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_flow__FlowVisitor___64dtoolcontext].val = p0; /* @toolcontext on <self:FlowVisitor> */
RET_LABEL:;
}
/* method flow#FlowVisitor#toolcontext= for (self: Object, ToolContext) */
void VIRTUAL_flow__FlowVisitor__toolcontext_61d(val* self, val* p0) {
flow__FlowVisitor__toolcontext_61d(self, p0);
RET_LABEL:;
}
/* method flow#FlowVisitor#init for (self: FlowVisitor, ToolContext) */
void flow__FlowVisitor__init(val* self, val* p0) {
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var /* : FlowContext */;
val* var1 /* : Array[FlowContext] */;
val* var2 /* : FlowContext */;
val* var3 /* : FlowContext */;
short int var4 /* : Bool */;
var_toolcontext = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Visitor__init]))(self) /* init on <self:FlowVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_flow__FlowVisitor__toolcontext_61d]))(self, var_toolcontext) /* toolcontext= on <self:FlowVisitor>*/;
var = NEW_flow__FlowContext(&type_flow__FlowContext);
((void (*)(val*))(var->class->vft[COLOR_flow__FlowContext__init]))(var) /* init on <var:FlowContext>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_flow__FlowVisitor__current_flow_context_61d]))(self, var) /* current_flow_context= on <self:FlowVisitor>*/;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_flow__FlowVisitor__flows]))(self) /* flows on <self:FlowVisitor>*/;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_flow__FlowVisitor__current_flow_context]))(self) /* current_flow_context on <self:FlowVisitor>*/;
((void (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var1, var2) /* add on <var1:Array[FlowContext]>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_flow__FlowVisitor__current_flow_context]))(self) /* current_flow_context on <self:FlowVisitor>*/;
var4 = 1;
((void (*)(val*, short int))(var3->class->vft[COLOR_flow__FlowContext__is_start_61d]))(var3, var4) /* is_start= on <var3:FlowContext>*/;
RET_LABEL:;
}
/* method flow#FlowVisitor#init for (self: Object, ToolContext) */
void VIRTUAL_flow__FlowVisitor__init(val* self, val* p0) {
flow__FlowVisitor__init(self, p0);
RET_LABEL:;
}
/* method flow#FlowVisitor#first for (self: FlowVisitor): nullable ANode */
val* flow__FlowVisitor__first(val* self) {
val* var /* : nullable ANode */;
val* var1 /* : nullable ANode */;
var1 = self->attrs[COLOR_flow__FlowVisitor___64dfirst].val; /* @first on <self:FlowVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowVisitor#first for (self: Object): nullable ANode */
val* VIRTUAL_flow__FlowVisitor__first(val* self) {
val* var /* : nullable ANode */;
val* var1 /* : nullable ANode */;
var1 = flow__FlowVisitor__first(self);
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowVisitor#first= for (self: FlowVisitor, nullable ANode) */
void flow__FlowVisitor__first_61d(val* self, val* p0) {
self->attrs[COLOR_flow__FlowVisitor___64dfirst].val = p0; /* @first on <self:FlowVisitor> */
RET_LABEL:;
}
/* method flow#FlowVisitor#first= for (self: Object, nullable ANode) */
void VIRTUAL_flow__FlowVisitor__first_61d(val* self, val* p0) {
flow__FlowVisitor__first_61d(self, p0);
RET_LABEL:;
}
/* method flow#FlowVisitor#visit for (self: FlowVisitor, ANode) */
void flow__FlowVisitor__visit(val* self, val* p0) {
val* var_node /* var node: ANode */;
val* var /* : nullable ANode */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : FlowContext */;
val* var4 /* : nullable ANode */;
val* var5 /* : null */;
short int var6 /* : Bool */;
val* var7 /* : FlowContext */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var9 /* : FlowContext */;
val* var_flow /* var flow: FlowContext */;
short int var10 /* : Bool */;
val* var11 /* : FlowContext */;
short int var12 /* : Bool */;
short int var_ /* var : Bool */;
val* var13 /* : FlowContext */;
short int var14 /* : Bool */;
val* var15 /* : FlowContext */;
val* var16 /* : FlowContext */;
static val* varonce;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : String */;
val* var21 /* : nullable ANode */;
short int var22 /* : Bool */;
var_node = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_flow__FlowVisitor__first]))(self) /* first on <self:FlowVisitor>*/;
var1 = NULL;
if (var == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (var2){
((void (*)(val*, val*))(self->class->vft[COLOR_flow__FlowVisitor__first_61d]))(self, var_node) /* first= on <self:FlowVisitor>*/;
} else {
}
var3 = ((val* (*)(val*))(self->class->vft[COLOR_flow__FlowVisitor__current_flow_context]))(self) /* current_flow_context on <self:FlowVisitor>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_flow__FlowContext__node]))(var3) /* node on <var3:FlowContext>*/;
var5 = NULL;
if (var4 == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (var6){
var7 = ((val* (*)(val*))(self->class->vft[COLOR_flow__FlowVisitor__current_flow_context]))(self) /* current_flow_context on <self:FlowVisitor>*/;
((void (*)(val*, val*))(var7->class->vft[COLOR_flow__FlowContext__node_61d]))(var7, var_node) /* node= on <var7:FlowContext>*/;
} else {
}
((void (*)(val*, val*))(var_node->class->vft[COLOR_flow__ANode__accept_flow_visitor]))(var_node, self) /* accept_flow_visitor on <var_node:ANode>*/;
/* <var_node:ANode> isa AExpr */
cltype = type_parser_nodes__AExpr.color;
idtype = type_parser_nodes__AExpr.id;
if(cltype >= var_node->type->table_size) {
var8 = 0;
} else {
var8 = var_node->type->type_table[cltype] == idtype;
}
if (var8){
var9 = ((val* (*)(val*))(self->class->vft[COLOR_flow__FlowVisitor__current_flow_context]))(self) /* current_flow_context on <self:FlowVisitor>*/;
var_flow = var9;
((void (*)(val*, val*))(var_node->class->vft[COLOR_flow__AExpr__after_flow_context_61d]))(var_node, var_flow) /* after_flow_context= on <var_node:ANode(AExpr)>*/;
var11 = ((val* (*)(val*))(var_flow->class->vft[COLOR_flow__FlowContext__when_true]))(var_flow) /* when_true on <var_flow:FlowContext>*/;
var12 = ((short int (*)(val*, val*))(var11->class->vft[COLOR_kernel__Object___33d_61d]))(var11, var_flow) /* != on <var11:FlowContext>*/;
var_ = var12;
if (var12){
var10 = var_;
} else {
var13 = ((val* (*)(val*))(var_flow->class->vft[COLOR_flow__FlowContext__when_false]))(var_flow) /* when_false on <var_flow:FlowContext>*/;
var14 = ((short int (*)(val*, val*))(var13->class->vft[COLOR_kernel__Object___33d_61d]))(var13, var_flow) /* != on <var13:FlowContext>*/;
var10 = var14;
}
if (var10){
var15 = ((val* (*)(val*))(self->class->vft[COLOR_flow__FlowVisitor__make_sub_flow]))(self) /* make_sub_flow on <self:FlowVisitor>*/;
var15;
var16 = ((val* (*)(val*))(self->class->vft[COLOR_flow__FlowVisitor__current_flow_context]))(self) /* current_flow_context on <self:FlowVisitor>*/;
if (varonce) {
var17 = varonce;
} else {
var18 = "AUTOSUB";
var19 = 7;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce = var17;
}
((void (*)(val*, val*))(var16->class->vft[COLOR_flow__FlowContext__name_61d]))(var16, var17) /* name= on <var16:FlowContext>*/;
} else {
}
} else {
}
var21 = ((val* (*)(val*))(self->class->vft[COLOR_flow__FlowVisitor__first]))(self) /* first on <self:FlowVisitor>*/;
if (var21 == NULL) {
var22 = 0; /* <var_node:ANode> cannot be null */
} else {
var22 = ((short int (*)(val*, val*))(var21->class->vft[COLOR_kernel__Object___61d_61d]))(var21, var_node) /* == on <var21:nullable ANode>*/;
}
if (var22){
} else {
}
RET_LABEL:;
}
/* method flow#FlowVisitor#visit for (self: Object, ANode) */
void VIRTUAL_flow__FlowVisitor__visit(val* self, val* p0) {
flow__FlowVisitor__visit(self, p0);
RET_LABEL:;
}
/* method flow#FlowVisitor#visit_expr for (self: FlowVisitor, AExpr): FlowContext */
val* flow__FlowVisitor__visit_expr(val* self, val* p0) {
val* var /* : FlowContext */;
val* var_node /* var node: AExpr */;
val* var1 /* : nullable FlowContext */;
var_node = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(self, var_node) /* enter_visit on <self:FlowVisitor>*/;
var1 = ((val* (*)(val*))(var_node->class->vft[COLOR_flow__AExpr__after_flow_context]))(var_node) /* after_flow_context on <var_node:AExpr>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/flow.nit", 77);
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
var1 = self->attrs[COLOR_flow__FlowVisitor___64dflows].val; /* @flows on <self:FlowVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @flows");
fprintf(stderr, " (%s:%d)\n", "src/flow.nit", 80);
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
var1 = flow__FlowVisitor__flows(self);
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowVisitor#flows= for (self: FlowVisitor, Array[FlowContext]) */
void flow__FlowVisitor__flows_61d(val* self, val* p0) {
self->attrs[COLOR_flow__FlowVisitor___64dflows].val = p0; /* @flows on <self:FlowVisitor> */
RET_LABEL:;
}
/* method flow#FlowVisitor#flows= for (self: Object, Array[FlowContext]) */
void VIRTUAL_flow__FlowVisitor__flows_61d(val* self, val* p0) {
flow__FlowVisitor__flows_61d(self, p0);
RET_LABEL:;
}
/* method flow#FlowVisitor#printflow for (self: FlowVisitor) */
void flow__FlowVisitor__printflow(val* self) {
val* var /* : OFStream */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
val* var_file /* var file: OFStream */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
val* var10 /* : Array[FlowContext] */;
val* var11 /* : Iterator[nullable Object] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_f /* var f: FlowContext */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : String */;
val* var_s /* var s: String */;
val* var19 /* : nullable ANode */;
short int var20 /* : Bool */;
int cltype;
int idtype;
val* var21 /* : Array[Object] */;
long var22 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : String */;
val* var28 /* : nullable ANode */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name;
val* var32 /* : nullable FlowContext */;
long var33 /* : Int */;
val* var34 /* : nullable Object */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
long var38 /* : Int */;
val* var39 /* : String */;
val* var40 /* : String */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
long var44 /* : Int */;
val* var45 /* : String */;
long var46 /* : Int */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
long var50 /* : Int */;
val* var51 /* : String */;
long var52 /* : Int */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
long var56 /* : Int */;
val* var57 /* : String */;
val* var58 /* : nullable ANode */;
val* var59 /* : Location */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
long var63 /* : Int */;
val* var64 /* : String */;
val* var65 /* : nullable ANode */;
val* var66 /* : String */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
long var70 /* : Int */;
val* var71 /* : String */;
val* var72 /* : String */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
long var76 /* : Int */;
val* var77 /* : String */;
val* var78 /* : Array[Object] */;
long var79 /* : Int */;
val* var80 /* : NativeArray[Object] */;
val* var81 /* : Object */;
val* var82 /* : Object */;
val* var83 /* : String */;
val* var84 /* : Array[FlowContext] */;
val* var85 /* : Iterator[nullable Object] */;
short int var86 /* : Bool */;
val* var87 /* : nullable Object */;
val* var_p /* var p: FlowContext */;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : NativeString */;
long var91 /* : Int */;
val* var92 /* : String */;
long var93 /* : Int */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : NativeString */;
long var97 /* : Int */;
val* var98 /* : String */;
long var99 /* : Int */;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : NativeString */;
long var103 /* : Int */;
val* var104 /* : String */;
val* var105 /* : Array[Object] */;
long var106 /* : Int */;
val* var107 /* : NativeArray[Object] */;
val* var108 /* : Object */;
val* var109 /* : Object */;
val* var110 /* : String */;
val* var111 /* : FlowContext */;
short int var112 /* : Bool */;
static val* varonce113;
val* var114 /* : String */;
char* var115 /* : NativeString */;
long var116 /* : Int */;
val* var117 /* : String */;
long var118 /* : Int */;
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : NativeString */;
long var122 /* : Int */;
val* var123 /* : String */;
val* var124 /* : FlowContext */;
long var125 /* : Int */;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : NativeString */;
long var129 /* : Int */;
val* var130 /* : String */;
val* var131 /* : Array[Object] */;
long var132 /* : Int */;
val* var133 /* : NativeArray[Object] */;
val* var134 /* : Object */;
val* var135 /* : Object */;
val* var136 /* : String */;
val* var137 /* : FlowContext */;
short int var138 /* : Bool */;
static val* varonce139;
val* var140 /* : String */;
char* var141 /* : NativeString */;
long var142 /* : Int */;
val* var143 /* : String */;
long var144 /* : Int */;
static val* varonce145;
val* var146 /* : String */;
char* var147 /* : NativeString */;
long var148 /* : Int */;
val* var149 /* : String */;
val* var150 /* : FlowContext */;
long var151 /* : Int */;
static val* varonce152;
val* var153 /* : String */;
char* var154 /* : NativeString */;
long var155 /* : Int */;
val* var156 /* : String */;
val* var157 /* : Array[Object] */;
long var158 /* : Int */;
val* var159 /* : NativeArray[Object] */;
val* var160 /* : Object */;
val* var161 /* : Object */;
val* var162 /* : String */;
static val* varonce164;
val* var165 /* : String */;
char* var166 /* : NativeString */;
long var167 /* : Int */;
val* var168 /* : String */;
var = NEW_file__OFStream(&type_file__OFStream);
if (varonce) {
var1 = varonce;
} else {
var2 = "flow.dot";
var3 = 8;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
((void (*)(val*, val*))(var->class->vft[COLOR_file__OFStream__open]))(var, var1) /* open on <var:OFStream>*/;
var_file = var;
if (varonce5) {
var6 = varonce5;
} else {
var7 = "digraph {\n";
var8 = 10;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce5 = var6;
}
((void (*)(val*, val*))(var_file->class->vft[COLOR_stream__OStream__write]))(var_file, var6) /* write on <var_file:OFStream>*/;
var10 = ((val* (*)(val*))(self->class->vft[COLOR_flow__FlowVisitor__flows]))(self) /* flows on <self:FlowVisitor>*/;
var11 = ((val* (*)(val*))(var10->class->vft[COLOR_abstract_collection__Collection__iterator]))(var10) /* iterator on <var10:Array[FlowContext]>*/;
for(;;) {
var12 = ((short int (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var11) /* is_ok on <var11:Iterator[nullable Object]>*/;
if(!var12) break;
var13 = ((val* (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__item]))(var11) /* item on <var11:Iterator[nullable Object]>*/;
var_f = var13;
if (varonce14) {
var15 = varonce14;
} else {
var16 = "";
var17 = 0;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
var_s = var15;
var19 = ((val* (*)(val*))(var_f->class->vft[COLOR_flow__FlowContext__node]))(var_f) /* node on <var_f:FlowContext>*/;
/* <var19:nullable ANode> isa AExpr */
cltype = type_parser_nodes__AExpr.color;
idtype = type_parser_nodes__AExpr.id;
if(var19 == NULL) {
var20 = 0;
} else {
if(cltype >= var19->type->table_size) {
var20 = 0;
} else {
var20 = var19->type->type_table[cltype] == idtype;
}
}
if (var20){
var21 = NEW_array__Array(&type_array__Arraykernel__Object);
var22 = 3;
((void (*)(val*, long))(var21->class->vft[COLOR_array__Array__with_capacity]))(var21, var22) /* with_capacity on <var21:Array[Object]>*/;
var_ = var21;
if (varonce23) {
var24 = varonce23;
} else {
var25 = "\\nmain=";
var26 = 7;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var24) /* add on <var_:Array[Object]>*/;
var28 = ((val* (*)(val*))(var_f->class->vft[COLOR_flow__FlowContext__node]))(var_f) /* node on <var_f:FlowContext>*/;
/* <var28:nullable ANode> isa AExpr */
cltype30 = type_parser_nodes__AExpr.color;
idtype31 = type_parser_nodes__AExpr.id;
if(var28 == NULL) {
var29 = 0;
} else {
if(cltype30 >= var28->type->table_size) {
var29 = 0;
} else {
var29 = var28->type->type_table[cltype30] == idtype31;
}
}
if (!var29) {
var_class_name = var28 == NULL ? "null" : var28->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/flow.nit", 89);
show_backtrace(1);
}
var32 = ((val* (*)(val*))(var28->class->vft[COLOR_flow__AExpr__after_flow_context]))(var28) /* after_flow_context on <var28:nullable ANode(AExpr)>*/;
if (var32 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/flow.nit", 89);
show_backtrace(1);
} else {
var33 = ((long (*)(val*))(var32->class->vft[COLOR_kernel__Object__object_id]))(var32) /* object_id on <var32:nullable FlowContext>*/;
}
var34 = BOX_kernel__Int(var33); /* autobox from Int to nullable Object */
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var34) /* add on <var_:Array[Object]>*/;
if (varonce35) {
var36 = varonce35;
} else {
var37 = "";
var38 = 0;
var39 = string__NativeString__to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var36) /* add on <var_:Array[Object]>*/;
var40 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var_s = var40;
} else {
}
if (varonce41) {
var42 = varonce41;
} else {
var43 = "F";
var44 = 1;
var45 = string__NativeString__to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
var46 = ((long (*)(val*))(var_f->class->vft[COLOR_kernel__Object__object_id]))(var_f) /* object_id on <var_f:FlowContext>*/;
if (varonce47) {
var48 = varonce47;
} else {
var49 = " [label=\"";
var50 = 9;
var51 = string__NativeString__to_s_with_length(var49, var50);
var48 = var51;
varonce47 = var48;
}
var52 = ((long (*)(val*))(var_f->class->vft[COLOR_kernel__Object__object_id]))(var_f) /* object_id on <var_f:FlowContext>*/;
if (varonce53) {
var54 = varonce53;
} else {
var55 = "\\n";
var56 = 2;
var57 = string__NativeString__to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
var58 = ((val* (*)(val*))(var_f->class->vft[COLOR_flow__FlowContext__node]))(var_f) /* node on <var_f:FlowContext>*/;
if (var58 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/flow.nit", 91);
show_backtrace(1);
} else {
var59 = ((val* (*)(val*))(var58->class->vft[COLOR_parser_nodes__ANode__location]))(var58) /* location on <var58:nullable ANode>*/;
}
if (varonce60) {
var61 = varonce60;
} else {
var62 = "\\n";
var63 = 2;
var64 = string__NativeString__to_s_with_length(var62, var63);
var61 = var64;
varonce60 = var61;
}
var65 = ((val* (*)(val*))(var_f->class->vft[COLOR_flow__FlowContext__node]))(var_f) /* node on <var_f:FlowContext>*/;
if (var65 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/flow.nit", 91);
show_backtrace(1);
} else {
var66 = ((val* (*)(val*))(var65->class->vft[COLOR_string__Object__class_name]))(var65) /* class_name on <var65:nullable ANode>*/;
}
if (varonce67) {
var68 = varonce67;
} else {
var69 = "\\n";
var70 = 2;
var71 = string__NativeString__to_s_with_length(var69, var70);
var68 = var71;
varonce67 = var68;
}
var72 = ((val* (*)(val*))(var_f->class->vft[COLOR_flow__FlowContext__name]))(var_f) /* name on <var_f:FlowContext>*/;
if (varonce73) {
var74 = varonce73;
} else {
var75 = "\"];\n";
var76 = 4;
var77 = string__NativeString__to_s_with_length(var75, var76);
var74 = var77;
varonce73 = var74;
}
var78 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var78 = array_instance Array[Object] */
var79 = 12;
var80 = NEW_array__NativeArray(var79, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var80)->values[0] = (val*) var42;
var81 = BOX_kernel__Int(var46); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var80)->values[1] = (val*) var81;
((struct instance_array__NativeArray*)var80)->values[2] = (val*) var48;
var82 = BOX_kernel__Int(var52); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var80)->values[3] = (val*) var82;
((struct instance_array__NativeArray*)var80)->values[4] = (val*) var54;
((struct instance_array__NativeArray*)var80)->values[5] = (val*) var59;
((struct instance_array__NativeArray*)var80)->values[6] = (val*) var61;
((struct instance_array__NativeArray*)var80)->values[7] = (val*) var66;
((struct instance_array__NativeArray*)var80)->values[8] = (val*) var68;
((struct instance_array__NativeArray*)var80)->values[9] = (val*) var72;
((struct instance_array__NativeArray*)var80)->values[10] = (val*) var_s;
((struct instance_array__NativeArray*)var80)->values[11] = (val*) var74;
((void (*)(val*, val*, long))(var78->class->vft[COLOR_array__Array__with_native]))(var78, var80, var79) /* with_native on <var78:Array[Object]>*/;
}
var83 = ((val* (*)(val*))(var78->class->vft[COLOR_string__Object__to_s]))(var78) /* to_s on <var78:Array[Object]>*/;
((void (*)(val*, val*))(var_file->class->vft[COLOR_stream__OStream__write]))(var_file, var83) /* write on <var_file:OFStream>*/;
var84 = ((val* (*)(val*))(var_f->class->vft[COLOR_flow__FlowContext__previous]))(var_f) /* previous on <var_f:FlowContext>*/;
var85 = ((val* (*)(val*))(var84->class->vft[COLOR_abstract_collection__Collection__iterator]))(var84) /* iterator on <var84:Array[FlowContext]>*/;
for(;;) {
var86 = ((short int (*)(val*))(var85->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var85) /* is_ok on <var85:Iterator[nullable Object]>*/;
if(!var86) break;
var87 = ((val* (*)(val*))(var85->class->vft[COLOR_abstract_collection__Iterator__item]))(var85) /* item on <var85:Iterator[nullable Object]>*/;
var_p = var87;
if (varonce88) {
var89 = varonce88;
} else {
var90 = "F";
var91 = 1;
var92 = string__NativeString__to_s_with_length(var90, var91);
var89 = var92;
varonce88 = var89;
}
var93 = ((long (*)(val*))(var_p->class->vft[COLOR_kernel__Object__object_id]))(var_p) /* object_id on <var_p:FlowContext>*/;
if (varonce94) {
var95 = varonce94;
} else {
var96 = " -> F";
var97 = 5;
var98 = string__NativeString__to_s_with_length(var96, var97);
var95 = var98;
varonce94 = var95;
}
var99 = ((long (*)(val*))(var_f->class->vft[COLOR_kernel__Object__object_id]))(var_f) /* object_id on <var_f:FlowContext>*/;
if (varonce100) {
var101 = varonce100;
} else {
var102 = ";\n";
var103 = 2;
var104 = string__NativeString__to_s_with_length(var102, var103);
var101 = var104;
varonce100 = var101;
}
var105 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var105 = array_instance Array[Object] */
var106 = 5;
var107 = NEW_array__NativeArray(var106, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var107)->values[0] = (val*) var89;
var108 = BOX_kernel__Int(var93); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var107)->values[1] = (val*) var108;
((struct instance_array__NativeArray*)var107)->values[2] = (val*) var95;
var109 = BOX_kernel__Int(var99); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var107)->values[3] = (val*) var109;
((struct instance_array__NativeArray*)var107)->values[4] = (val*) var101;
((void (*)(val*, val*, long))(var105->class->vft[COLOR_array__Array__with_native]))(var105, var107, var106) /* with_native on <var105:Array[Object]>*/;
}
var110 = ((val* (*)(val*))(var105->class->vft[COLOR_string__Object__to_s]))(var105) /* to_s on <var105:Array[Object]>*/;
((void (*)(val*, val*))(var_file->class->vft[COLOR_stream__OStream__write]))(var_file, var110) /* write on <var_file:OFStream>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var85->class->vft[COLOR_abstract_collection__Iterator__next]))(var85) /* next on <var85:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var111 = ((val* (*)(val*))(var_f->class->vft[COLOR_flow__FlowContext__when_true]))(var_f) /* when_true on <var_f:FlowContext>*/;
var112 = ((short int (*)(val*, val*))(var111->class->vft[COLOR_kernel__Object___33d_61d]))(var111, var_f) /* != on <var111:FlowContext>*/;
if (var112){
if (varonce113) {
var114 = varonce113;
} else {
var115 = "F";
var116 = 1;
var117 = string__NativeString__to_s_with_length(var115, var116);
var114 = var117;
varonce113 = var114;
}
var118 = ((long (*)(val*))(var_f->class->vft[COLOR_kernel__Object__object_id]))(var_f) /* object_id on <var_f:FlowContext>*/;
if (varonce119) {
var120 = varonce119;
} else {
var121 = " -> F";
var122 = 5;
var123 = string__NativeString__to_s_with_length(var121, var122);
var120 = var123;
varonce119 = var120;
}
var124 = ((val* (*)(val*))(var_f->class->vft[COLOR_flow__FlowContext__when_true]))(var_f) /* when_true on <var_f:FlowContext>*/;
var125 = ((long (*)(val*))(var124->class->vft[COLOR_kernel__Object__object_id]))(var124) /* object_id on <var124:FlowContext>*/;
if (varonce126) {
var127 = varonce126;
} else {
var128 = "[label=TRUE, style=dotted];\n";
var129 = 28;
var130 = string__NativeString__to_s_with_length(var128, var129);
var127 = var130;
varonce126 = var127;
}
var131 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var131 = array_instance Array[Object] */
var132 = 5;
var133 = NEW_array__NativeArray(var132, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var133)->values[0] = (val*) var114;
var134 = BOX_kernel__Int(var118); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var133)->values[1] = (val*) var134;
((struct instance_array__NativeArray*)var133)->values[2] = (val*) var120;
var135 = BOX_kernel__Int(var125); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var133)->values[3] = (val*) var135;
((struct instance_array__NativeArray*)var133)->values[4] = (val*) var127;
((void (*)(val*, val*, long))(var131->class->vft[COLOR_array__Array__with_native]))(var131, var133, var132) /* with_native on <var131:Array[Object]>*/;
}
var136 = ((val* (*)(val*))(var131->class->vft[COLOR_string__Object__to_s]))(var131) /* to_s on <var131:Array[Object]>*/;
((void (*)(val*, val*))(var_file->class->vft[COLOR_stream__OStream__write]))(var_file, var136) /* write on <var_file:OFStream>*/;
} else {
}
var137 = ((val* (*)(val*))(var_f->class->vft[COLOR_flow__FlowContext__when_false]))(var_f) /* when_false on <var_f:FlowContext>*/;
var138 = ((short int (*)(val*, val*))(var137->class->vft[COLOR_kernel__Object___33d_61d]))(var137, var_f) /* != on <var137:FlowContext>*/;
if (var138){
if (varonce139) {
var140 = varonce139;
} else {
var141 = "F";
var142 = 1;
var143 = string__NativeString__to_s_with_length(var141, var142);
var140 = var143;
varonce139 = var140;
}
var144 = ((long (*)(val*))(var_f->class->vft[COLOR_kernel__Object__object_id]))(var_f) /* object_id on <var_f:FlowContext>*/;
if (varonce145) {
var146 = varonce145;
} else {
var147 = " -> F";
var148 = 5;
var149 = string__NativeString__to_s_with_length(var147, var148);
var146 = var149;
varonce145 = var146;
}
var150 = ((val* (*)(val*))(var_f->class->vft[COLOR_flow__FlowContext__when_false]))(var_f) /* when_false on <var_f:FlowContext>*/;
var151 = ((long (*)(val*))(var150->class->vft[COLOR_kernel__Object__object_id]))(var150) /* object_id on <var150:FlowContext>*/;
if (varonce152) {
var153 = varonce152;
} else {
var154 = "[label=FALSE,style=dotted];\n";
var155 = 28;
var156 = string__NativeString__to_s_with_length(var154, var155);
var153 = var156;
varonce152 = var153;
}
var157 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var157 = array_instance Array[Object] */
var158 = 5;
var159 = NEW_array__NativeArray(var158, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var159)->values[0] = (val*) var140;
var160 = BOX_kernel__Int(var144); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var159)->values[1] = (val*) var160;
((struct instance_array__NativeArray*)var159)->values[2] = (val*) var146;
var161 = BOX_kernel__Int(var151); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var159)->values[3] = (val*) var161;
((struct instance_array__NativeArray*)var159)->values[4] = (val*) var153;
((void (*)(val*, val*, long))(var157->class->vft[COLOR_array__Array__with_native]))(var157, var159, var158) /* with_native on <var157:Array[Object]>*/;
}
var162 = ((val* (*)(val*))(var157->class->vft[COLOR_string__Object__to_s]))(var157) /* to_s on <var157:Array[Object]>*/;
((void (*)(val*, val*))(var_file->class->vft[COLOR_stream__OStream__write]))(var_file, var162) /* write on <var_file:OFStream>*/;
} else {
}
CONTINUE_label163: (void)0;
((void (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__next]))(var11) /* next on <var11:Iterator[nullable Object]>*/;
}
BREAK_label163: (void)0;
if (varonce164) {
var165 = varonce164;
} else {
var166 = "}\n";
var167 = 2;
var168 = string__NativeString__to_s_with_length(var166, var167);
var165 = var168;
varonce164 = var165;
}
((void (*)(val*, val*))(var_file->class->vft[COLOR_stream__OStream__write]))(var_file, var165) /* write on <var_file:OFStream>*/;
((void (*)(val*))(var_file->class->vft[COLOR_stream__IOS__close]))(var_file) /* close on <var_file:OFStream>*/;
RET_LABEL:;
}
/* method flow#FlowVisitor#printflow for (self: Object) */
void VIRTUAL_flow__FlowVisitor__printflow(val* self) {
flow__FlowVisitor__printflow(self);
RET_LABEL:;
}
/* method flow#FlowVisitor#make_sub_flow for (self: FlowVisitor): FlowContext */
val* flow__FlowVisitor__make_sub_flow(val* self) {
val* var /* : FlowContext */;
val* var1 /* : FlowContext */;
val* var_flow /* var flow: FlowContext */;
val* var2 /* : Array[FlowContext] */;
val* var3 /* : nullable ANode */;
val* var4 /* : FlowContext */;
var1 = NEW_flow__FlowContext(&type_flow__FlowContext);
((void (*)(val*))(var1->class->vft[COLOR_flow__FlowContext__init]))(var1) /* init on <var1:FlowContext>*/;
var_flow = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_flow__FlowVisitor__flows]))(self) /* flows on <self:FlowVisitor>*/;
((void (*)(val*, val*))(var2->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var2, var_flow) /* add on <var2:Array[FlowContext]>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__Visitor__current_node]))(self) /* current_node on <self:FlowVisitor>*/;
((void (*)(val*, val*))(var_flow->class->vft[COLOR_flow__FlowContext__node_61d]))(var_flow, var3) /* node= on <var_flow:FlowContext>*/;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_flow__FlowVisitor__current_flow_context]))(self) /* current_flow_context on <self:FlowVisitor>*/;
((void (*)(val*, val*))(var_flow->class->vft[COLOR_flow__FlowContext__add_previous]))(var_flow, var4) /* add_previous on <var_flow:FlowContext>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_flow__FlowVisitor__current_flow_context_61d]))(self, var_flow) /* current_flow_context= on <self:FlowVisitor>*/;
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
val* var2 /* : Array[FlowContext] */;
val* var3 /* : nullable ANode */;
var_flow1 = p0;
var_flow2 = p1;
var1 = NEW_flow__FlowContext(&type_flow__FlowContext);
((void (*)(val*))(var1->class->vft[COLOR_flow__FlowContext__init]))(var1) /* init on <var1:FlowContext>*/;
var_flow = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_flow__FlowVisitor__flows]))(self) /* flows on <self:FlowVisitor>*/;
((void (*)(val*, val*))(var2->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var2, var_flow) /* add on <var2:Array[FlowContext]>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__Visitor__current_node]))(self) /* current_node on <self:FlowVisitor>*/;
((void (*)(val*, val*))(var_flow->class->vft[COLOR_flow__FlowContext__node_61d]))(var_flow, var3) /* node= on <var_flow:FlowContext>*/;
((void (*)(val*, val*))(var_flow->class->vft[COLOR_flow__FlowContext__add_previous]))(var_flow, var_flow1) /* add_previous on <var_flow:FlowContext>*/;
((void (*)(val*, val*))(var_flow->class->vft[COLOR_flow__FlowContext__add_previous]))(var_flow, var_flow2) /* add_previous on <var_flow:FlowContext>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_flow__FlowVisitor__current_flow_context_61d]))(self, var_flow) /* current_flow_context= on <self:FlowVisitor>*/;
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
val* var2 /* : Array[FlowContext] */;
val* var3 /* : nullable ANode */;
var_true_flow = p0;
var_false_flow = p1;
var1 = NEW_flow__FlowContext(&type_flow__FlowContext);
((void (*)(val*))(var1->class->vft[COLOR_flow__FlowContext__init]))(var1) /* init on <var1:FlowContext>*/;
var_flow = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_flow__FlowVisitor__flows]))(self) /* flows on <self:FlowVisitor>*/;
((void (*)(val*, val*))(var2->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var2, var_flow) /* add on <var2:Array[FlowContext]>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__Visitor__current_node]))(self) /* current_node on <self:FlowVisitor>*/;
((void (*)(val*, val*))(var_flow->class->vft[COLOR_flow__FlowContext__node_61d]))(var_flow, var3) /* node= on <var_flow:FlowContext>*/;
((void (*)(val*, val*))(var_flow->class->vft[COLOR_flow__FlowContext__add_previous]))(var_flow, var_true_flow) /* add_previous on <var_flow:FlowContext>*/;
((void (*)(val*, val*))(var_flow->class->vft[COLOR_flow__FlowContext__add_previous]))(var_flow, var_false_flow) /* add_previous on <var_flow:FlowContext>*/;
((void (*)(val*, val*))(var_flow->class->vft[COLOR_flow__FlowContext__when_true_61d]))(var_flow, var_true_flow) /* when_true= on <var_flow:FlowContext>*/;
((void (*)(val*, val*))(var_flow->class->vft[COLOR_flow__FlowContext__when_false_61d]))(var_flow, var_false_flow) /* when_false= on <var_flow:FlowContext>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_flow__FlowVisitor__current_flow_context_61d]))(self, var_flow) /* current_flow_context= on <self:FlowVisitor>*/;
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
val* var_orig_flow /* var orig_flow: FlowContext */;
val* var2 /* : FlowContext */;
val* var_true_flow /* var true_flow: FlowContext */;
val* var3 /* : Array[FlowContext] */;
val* var4 /* : nullable ANode */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : String */;
val* var9 /* : FlowContext */;
val* var_false_flow /* var false_flow: FlowContext */;
val* var10 /* : Array[FlowContext] */;
val* var11 /* : nullable ANode */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
val* var17 /* : FlowContext */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_flow__FlowVisitor__current_flow_context]))(self) /* current_flow_context on <self:FlowVisitor>*/;
var_orig_flow = var1;
var2 = NEW_flow__FlowContext(&type_flow__FlowContext);
((void (*)(val*))(var2->class->vft[COLOR_flow__FlowContext__init]))(var2) /* init on <var2:FlowContext>*/;
var_true_flow = var2;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_flow__FlowVisitor__flows]))(self) /* flows on <self:FlowVisitor>*/;
((void (*)(val*, val*))(var3->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var3, var_true_flow) /* add on <var3:Array[FlowContext]>*/;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__Visitor__current_node]))(self) /* current_node on <self:FlowVisitor>*/;
((void (*)(val*, val*))(var_true_flow->class->vft[COLOR_flow__FlowContext__node_61d]))(var_true_flow, var4) /* node= on <var_true_flow:FlowContext>*/;
((void (*)(val*, val*))(var_true_flow->class->vft[COLOR_flow__FlowContext__add_previous]))(var_true_flow, var_orig_flow) /* add_previous on <var_true_flow:FlowContext>*/;
if (varonce) {
var5 = varonce;
} else {
var6 = "TRUE";
var7 = 4;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
((void (*)(val*, val*))(var_true_flow->class->vft[COLOR_flow__FlowContext__name_61d]))(var_true_flow, var5) /* name= on <var_true_flow:FlowContext>*/;
var9 = NEW_flow__FlowContext(&type_flow__FlowContext);
((void (*)(val*))(var9->class->vft[COLOR_flow__FlowContext__init]))(var9) /* init on <var9:FlowContext>*/;
var_false_flow = var9;
var10 = ((val* (*)(val*))(self->class->vft[COLOR_flow__FlowVisitor__flows]))(self) /* flows on <self:FlowVisitor>*/;
((void (*)(val*, val*))(var10->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var10, var_false_flow) /* add on <var10:Array[FlowContext]>*/;
var11 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__Visitor__current_node]))(self) /* current_node on <self:FlowVisitor>*/;
((void (*)(val*, val*))(var_false_flow->class->vft[COLOR_flow__FlowContext__node_61d]))(var_false_flow, var11) /* node= on <var_false_flow:FlowContext>*/;
((void (*)(val*, val*))(var_false_flow->class->vft[COLOR_flow__FlowContext__add_previous]))(var_false_flow, var_orig_flow) /* add_previous on <var_false_flow:FlowContext>*/;
if (varonce12) {
var13 = varonce12;
} else {
var14 = "FALSE";
var15 = 5;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
((void (*)(val*, val*))(var_false_flow->class->vft[COLOR_flow__FlowContext__name_61d]))(var_false_flow, var13) /* name= on <var_false_flow:FlowContext>*/;
var17 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_flow__FlowVisitor__make_true_false_flow]))(self, var_true_flow, var_false_flow) /* make_true_false_flow on <self:FlowVisitor>*/;
var = var17;
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
val* var2 /* : Array[FlowContext] */;
val* var3 /* : nullable ANode */;
val* var4 /* : FlowContext */;
short int var5 /* : Bool */;
var1 = NEW_flow__FlowContext(&type_flow__FlowContext);
((void (*)(val*))(var1->class->vft[COLOR_flow__FlowContext__init]))(var1) /* init on <var1:FlowContext>*/;
var_flow = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_flow__FlowVisitor__flows]))(self) /* flows on <self:FlowVisitor>*/;
((void (*)(val*, val*))(var2->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var2, var_flow) /* add on <var2:Array[FlowContext]>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__Visitor__current_node]))(self) /* current_node on <self:FlowVisitor>*/;
((void (*)(val*, val*))(var_flow->class->vft[COLOR_flow__FlowContext__node_61d]))(var_flow, var3) /* node= on <var_flow:FlowContext>*/;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_flow__FlowVisitor__current_flow_context]))(self) /* current_flow_context on <self:FlowVisitor>*/;
((void (*)(val*, val*))(var_flow->class->vft[COLOR_flow__FlowContext__add_previous]))(var_flow, var4) /* add_previous on <var_flow:FlowContext>*/;
var5 = 1;
((void (*)(val*, short int))(var_flow->class->vft[COLOR_flow__FlowContext__is_marked_unreachable_61d]))(var_flow, var5) /* is_marked_unreachable= on <var_flow:FlowContext>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_flow__FlowVisitor__current_flow_context_61d]))(self, var_flow) /* current_flow_context= on <self:FlowVisitor>*/;
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
val* var2 /* : Array[AContinueExpr] */;
val* var3 /* : Iterator[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_b /* var b: AContinueExpr */;
val* var6 /* : nullable FlowContext */;
val* var_before /* var before: nullable FlowContext */;
val* var7 /* : null */;
short int var8 /* : Bool */;
var_before_loop = p0;
var_escapemark = p1;
var = NULL;
if (var_escapemark == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (var1){
goto RET_LABEL;
} else {
}
var2 = ((val* (*)(val*))(var_escapemark->class->vft[COLOR_scope__EscapeMark__continues]))(var_escapemark) /* continues on <var_escapemark:nullable EscapeMark(EscapeMark)>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__iterator]))(var2) /* iterator on <var2:Array[AContinueExpr]>*/;
for(;;) {
var4 = ((short int (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var3) /* is_ok on <var3:Iterator[nullable Object]>*/;
if(!var4) break;
var5 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__item]))(var3) /* item on <var3:Iterator[nullable Object]>*/;
var_b = var5;
var6 = ((val* (*)(val*))(var_b->class->vft[COLOR_flow__AContinueExpr__before_flow_context]))(var_b) /* before_flow_context on <var_b:AContinueExpr>*/;
var_before = var6;
var7 = NULL;
if (var_before == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (var8){
goto CONTINUE_label;
} else {
}
((void (*)(val*, val*))(var_before_loop->class->vft[COLOR_flow__FlowContext__add_loop]))(var_before_loop, var_before) /* add_loop on <var_before_loop:FlowContext>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__next]))(var3) /* next on <var3:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method flow#FlowVisitor#merge_continues_to for (self: Object, FlowContext, nullable EscapeMark) */
void VIRTUAL_flow__FlowVisitor__merge_continues_to(val* self, val* p0, val* p1) {
flow__FlowVisitor__merge_continues_to(self, p0, p1);
RET_LABEL:;
}
/* method flow#FlowVisitor#merge_breaks for (self: FlowVisitor, nullable EscapeMark) */
void flow__FlowVisitor__merge_breaks(val* self, val* p0) {
val* var_escapemark /* var escapemark: nullable EscapeMark */;
val* var /* : null */;
short int var1 /* : Bool */;
val* var2 /* : Array[ABreakExpr] */;
val* var3 /* : Iterator[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_b /* var b: ABreakExpr */;
val* var6 /* : nullable FlowContext */;
val* var_before /* var before: nullable FlowContext */;
val* var7 /* : null */;
short int var8 /* : Bool */;
val* var9 /* : FlowContext */;
val* var10 /* : FlowContext */;
var_escapemark = p0;
var = NULL;
if (var_escapemark == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (var1){
goto RET_LABEL;
} else {
}
var2 = ((val* (*)(val*))(var_escapemark->class->vft[COLOR_scope__EscapeMark__breaks]))(var_escapemark) /* breaks on <var_escapemark:nullable EscapeMark(EscapeMark)>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__iterator]))(var2) /* iterator on <var2:Array[ABreakExpr]>*/;
for(;;) {
var4 = ((short int (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var3) /* is_ok on <var3:Iterator[nullable Object]>*/;
if(!var4) break;
var5 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__item]))(var3) /* item on <var3:Iterator[nullable Object]>*/;
var_b = var5;
var6 = ((val* (*)(val*))(var_b->class->vft[COLOR_flow__ABreakExpr__before_flow_context]))(var_b) /* before_flow_context on <var_b:ABreakExpr>*/;
var_before = var6;
var7 = NULL;
if (var_before == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (var8){
goto CONTINUE_label;
} else {
}
var9 = ((val* (*)(val*))(self->class->vft[COLOR_flow__FlowVisitor__current_flow_context]))(self) /* current_flow_context on <self:FlowVisitor>*/;
var10 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_flow__FlowVisitor__make_merge_flow]))(self, var9, var_before) /* make_merge_flow on <self:FlowVisitor>*/;
var10;
CONTINUE_label: (void)0;
((void (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__next]))(var3) /* next on <var3:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method flow#FlowVisitor#merge_breaks for (self: Object, nullable EscapeMark) */
void VIRTUAL_flow__FlowVisitor__merge_breaks(val* self, val* p0) {
flow__FlowVisitor__merge_breaks(self, p0);
RET_LABEL:;
}
/* method flow#FlowContext#previous for (self: FlowContext): Array[FlowContext] */
val* flow__FlowContext__previous(val* self) {
val* var /* : Array[FlowContext] */;
val* var1 /* : Array[FlowContext] */;
var1 = self->attrs[COLOR_flow__FlowContext___64dprevious].val; /* @previous on <self:FlowContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @previous");
fprintf(stderr, " (%s:%d)\n", "src/flow.nit", 192);
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
var1 = flow__FlowContext__previous(self);
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowContext#previous= for (self: FlowContext, Array[FlowContext]) */
void flow__FlowContext__previous_61d(val* self, val* p0) {
self->attrs[COLOR_flow__FlowContext___64dprevious].val = p0; /* @previous on <self:FlowContext> */
RET_LABEL:;
}
/* method flow#FlowContext#previous= for (self: Object, Array[FlowContext]) */
void VIRTUAL_flow__FlowContext__previous_61d(val* self, val* p0) {
flow__FlowContext__previous_61d(self, p0);
RET_LABEL:;
}
/* method flow#FlowContext#loops for (self: FlowContext): Array[FlowContext] */
val* flow__FlowContext__loops(val* self) {
val* var /* : Array[FlowContext] */;
val* var1 /* : Array[FlowContext] */;
var1 = self->attrs[COLOR_flow__FlowContext___64dloops].val; /* @loops on <self:FlowContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @loops");
fprintf(stderr, " (%s:%d)\n", "src/flow.nit", 195);
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
var1 = flow__FlowContext__loops(self);
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowContext#loops= for (self: FlowContext, Array[FlowContext]) */
void flow__FlowContext__loops_61d(val* self, val* p0) {
self->attrs[COLOR_flow__FlowContext___64dloops].val = p0; /* @loops on <self:FlowContext> */
RET_LABEL:;
}
/* method flow#FlowContext#loops= for (self: Object, Array[FlowContext]) */
void VIRTUAL_flow__FlowContext__loops_61d(val* self, val* p0) {
flow__FlowContext__loops_61d(self, p0);
RET_LABEL:;
}
/* method flow#FlowContext#is_marked_unreachable for (self: FlowContext): Bool */
short int flow__FlowContext__is_marked_unreachable(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_flow__FlowContext___64dis_marked_unreachable].s; /* @is_marked_unreachable on <self:FlowContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowContext#is_marked_unreachable for (self: Object): Bool */
short int VIRTUAL_flow__FlowContext__is_marked_unreachable(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = flow__FlowContext__is_marked_unreachable(self);
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowContext#is_marked_unreachable= for (self: FlowContext, Bool) */
void flow__FlowContext__is_marked_unreachable_61d(val* self, short int p0) {
self->attrs[COLOR_flow__FlowContext___64dis_marked_unreachable].s = p0; /* @is_marked_unreachable on <self:FlowContext> */
RET_LABEL:;
}
/* method flow#FlowContext#is_marked_unreachable= for (self: Object, Bool) */
void VIRTUAL_flow__FlowContext__is_marked_unreachable_61d(val* self, short int p0) {
flow__FlowContext__is_marked_unreachable_61d(self, p0);
RET_LABEL:;
}
/* method flow#FlowContext#is_unreachable for (self: FlowContext): Bool */
short int flow__FlowContext__is_unreachable(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : Array[FlowContext] */;
long var6 /* : Int */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
var1 = ((short int (*)(val*))(self->class->vft[COLOR_flow__FlowContext__is_marked_unreachable]))(self) /* is_marked_unreachable on <self:FlowContext>*/;
if (var1){
var2 = 1;
var = var2;
goto RET_LABEL;
} else {
}
var3 = ((short int (*)(val*))(self->class->vft[COLOR_flow__FlowContext__is_start]))(self) /* is_start on <self:FlowContext>*/;
if (var3){
var4 = 0;
var = var4;
goto RET_LABEL;
} else {
}
var5 = ((val* (*)(val*))(self->class->vft[COLOR_flow__FlowContext__previous]))(self) /* previous on <self:FlowContext>*/;
var6 = ((long (*)(val*))(var5->class->vft[COLOR_abstract_collection__Collection__length]))(var5) /* length on <var5:Array[FlowContext]>*/;
var7 = 0;
{ /* Inline kernel#Int#== (var6,var7) */
var10 = var6 == var7;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
if (var8){
var11 = 1;
var = var11;
goto RET_LABEL;
} else {
}
var12 = 0;
var = var12;
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
var1 = self->attrs[COLOR_flow__FlowContext___64dis_already_unreachable].s; /* @is_already_unreachable on <self:FlowContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowContext#is_already_unreachable for (self: Object): Bool */
short int VIRTUAL_flow__FlowContext__is_already_unreachable(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = flow__FlowContext__is_already_unreachable(self);
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowContext#is_already_unreachable= for (self: FlowContext, Bool) */
void flow__FlowContext__is_already_unreachable_61d(val* self, short int p0) {
self->attrs[COLOR_flow__FlowContext___64dis_already_unreachable].s = p0; /* @is_already_unreachable on <self:FlowContext> */
RET_LABEL:;
}
/* method flow#FlowContext#is_already_unreachable= for (self: Object, Bool) */
void VIRTUAL_flow__FlowContext__is_already_unreachable_61d(val* self, short int p0) {
flow__FlowContext__is_already_unreachable_61d(self, p0);
RET_LABEL:;
}
/* method flow#FlowContext#is_start for (self: FlowContext): Bool */
short int flow__FlowContext__is_start(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_flow__FlowContext___64dis_start].s; /* @is_start on <self:FlowContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowContext#is_start for (self: Object): Bool */
short int VIRTUAL_flow__FlowContext__is_start(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = flow__FlowContext__is_start(self);
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowContext#is_start= for (self: FlowContext, Bool) */
void flow__FlowContext__is_start_61d(val* self, short int p0) {
self->attrs[COLOR_flow__FlowContext___64dis_start].s = p0; /* @is_start on <self:FlowContext> */
RET_LABEL:;
}
/* method flow#FlowContext#is_start= for (self: Object, Bool) */
void VIRTUAL_flow__FlowContext__is_start_61d(val* self, short int p0) {
flow__FlowContext__is_start_61d(self, p0);
RET_LABEL:;
}
/* method flow#FlowContext#node for (self: FlowContext): nullable ANode */
val* flow__FlowContext__node(val* self) {
val* var /* : nullable ANode */;
val* var1 /* : nullable ANode */;
var1 = self->attrs[COLOR_flow__FlowContext___64dnode].val; /* @node on <self:FlowContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowContext#node for (self: Object): nullable ANode */
val* VIRTUAL_flow__FlowContext__node(val* self) {
val* var /* : nullable ANode */;
val* var1 /* : nullable ANode */;
var1 = flow__FlowContext__node(self);
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowContext#node= for (self: FlowContext, nullable ANode) */
void flow__FlowContext__node_61d(val* self, val* p0) {
self->attrs[COLOR_flow__FlowContext___64dnode].val = p0; /* @node on <self:FlowContext> */
RET_LABEL:;
}
/* method flow#FlowContext#node= for (self: Object, nullable ANode) */
void VIRTUAL_flow__FlowContext__node_61d(val* self, val* p0) {
flow__FlowContext__node_61d(self, p0);
RET_LABEL:;
}
/* method flow#FlowContext#name for (self: FlowContext): String */
val* flow__FlowContext__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_flow__FlowContext___64dname].val; /* @name on <self:FlowContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @name");
fprintf(stderr, " (%s:%d)\n", "src/flow.nit", 225);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowContext#name for (self: Object): String */
val* VIRTUAL_flow__FlowContext__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = flow__FlowContext__name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowContext#name= for (self: FlowContext, String) */
void flow__FlowContext__name_61d(val* self, val* p0) {
self->attrs[COLOR_flow__FlowContext___64dname].val = p0; /* @name on <self:FlowContext> */
RET_LABEL:;
}
/* method flow#FlowContext#name= for (self: Object, String) */
void VIRTUAL_flow__FlowContext__name_61d(val* self, val* p0) {
flow__FlowContext__name_61d(self, p0);
RET_LABEL:;
}
/* method flow#FlowContext#when_true for (self: FlowContext): FlowContext */
val* flow__FlowContext__when_true(val* self) {
val* var /* : FlowContext */;
val* var1 /* : FlowContext */;
var1 = self->attrs[COLOR_flow__FlowContext___64dwhen_true].val; /* @when_true on <self:FlowContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @when_true");
fprintf(stderr, " (%s:%d)\n", "src/flow.nit", 228);
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
var1 = flow__FlowContext__when_true(self);
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowContext#when_true= for (self: FlowContext, FlowContext) */
void flow__FlowContext__when_true_61d(val* self, val* p0) {
self->attrs[COLOR_flow__FlowContext___64dwhen_true].val = p0; /* @when_true on <self:FlowContext> */
RET_LABEL:;
}
/* method flow#FlowContext#when_true= for (self: Object, FlowContext) */
void VIRTUAL_flow__FlowContext__when_true_61d(val* self, val* p0) {
flow__FlowContext__when_true_61d(self, p0);
RET_LABEL:;
}
/* method flow#FlowContext#when_false for (self: FlowContext): FlowContext */
val* flow__FlowContext__when_false(val* self) {
val* var /* : FlowContext */;
val* var1 /* : FlowContext */;
var1 = self->attrs[COLOR_flow__FlowContext___64dwhen_false].val; /* @when_false on <self:FlowContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @when_false");
fprintf(stderr, " (%s:%d)\n", "src/flow.nit", 231);
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
var1 = flow__FlowContext__when_false(self);
var = var1;
RET_LABEL:;
return var;
}
/* method flow#FlowContext#when_false= for (self: FlowContext, FlowContext) */
void flow__FlowContext__when_false_61d(val* self, val* p0) {
self->attrs[COLOR_flow__FlowContext___64dwhen_false].val = p0; /* @when_false on <self:FlowContext> */
RET_LABEL:;
}
/* method flow#FlowContext#when_false= for (self: Object, FlowContext) */
void VIRTUAL_flow__FlowContext__when_false_61d(val* self, val* p0) {
flow__FlowContext__when_false_61d(self, p0);
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
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : Array[FlowContext] */;
var_flow = p0;
var1 = ((short int (*)(val*))(var_flow->class->vft[COLOR_flow__FlowContext__is_unreachable]))(var_flow) /* is_unreachable on <var_flow:FlowContext>*/;
var2 = !var1;
var_ = var2;
if (var2){
var3 = ((val* (*)(val*))(self->class->vft[COLOR_flow__FlowContext__previous]))(self) /* previous on <self:FlowContext>*/;
var4 = ((short int (*)(val*, val*))(var3->class->vft[COLOR_abstract_collection__Collection__has]))(var3, var_flow) /* has on <var3:Array[FlowContext]>*/;
var5 = !var4;
var = var5;
} else {
var = var_;
}
if (var){
var6 = ((val* (*)(val*))(self->class->vft[COLOR_flow__FlowContext__previous]))(self) /* previous on <self:FlowContext>*/;
((void (*)(val*, val*))(var6->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var6, var_flow) /* add on <var6:Array[FlowContext]>*/;
} else {
}
RET_LABEL:;
}
/* method flow#FlowContext#add_previous for (self: Object, FlowContext) */
void VIRTUAL_flow__FlowContext__add_previous(val* self, val* p0) {
flow__FlowContext__add_previous(self, p0);
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
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : Array[FlowContext] */;
var_flow = p0;
var1 = ((short int (*)(val*))(var_flow->class->vft[COLOR_flow__FlowContext__is_unreachable]))(var_flow) /* is_unreachable on <var_flow:FlowContext>*/;
var2 = !var1;
var_ = var2;
if (var2){
var3 = ((val* (*)(val*))(self->class->vft[COLOR_flow__FlowContext__previous]))(self) /* previous on <self:FlowContext>*/;
var4 = ((short int (*)(val*, val*))(var3->class->vft[COLOR_abstract_collection__Collection__has]))(var3, var_flow) /* has on <var3:Array[FlowContext]>*/;
var5 = !var4;
var = var5;
} else {
var = var_;
}
if (var){
var6 = ((val* (*)(val*))(self->class->vft[COLOR_flow__FlowContext__loops]))(self) /* loops on <self:FlowContext>*/;
((void (*)(val*, val*))(var6->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var6, var_flow) /* add on <var6:Array[FlowContext]>*/;
} else {
}
RET_LABEL:;
}
/* method flow#FlowContext#add_loop for (self: Object, FlowContext) */
void VIRTUAL_flow__FlowContext__add_loop(val* self, val* p0) {
flow__FlowContext__add_loop(self, p0);
RET_LABEL:;
}
/* method flow#FlowContext#init for (self: FlowContext) */
void flow__FlowContext__init(val* self) {
RET_LABEL:;
}
/* method flow#FlowContext#init for (self: Object) */
void VIRTUAL_flow__FlowContext__init(val* self) {
flow__FlowContext__init(self);
RET_LABEL:;
}
/* method flow#ANode#accept_flow_visitor for (self: ANode, FlowVisitor) */
void flow__ANode__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
var_v = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__ANode__visit_all]))(self, var_v) /* visit_all on <self:ANode>*/;
RET_LABEL:;
}
/* method flow#ANode#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__ANode__accept_flow_visitor(val* self, val* p0) {
flow__ANode__accept_flow_visitor(self, p0);
RET_LABEL:;
}
/* method flow#APropdef#do_flow for (self: APropdef, ToolContext) */
void flow__APropdef__do_flow(val* self, val* p0) {
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var /* : FlowVisitor */;
val* var_v /* var v: FlowVisitor */;
var_toolcontext = p0;
var = NEW_flow__FlowVisitor(&type_flow__FlowVisitor);
((void (*)(val*, val*))(var->class->vft[COLOR_flow__FlowVisitor__init]))(var, var_toolcontext) /* init on <var:FlowVisitor>*/;
var_v = var;
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, self) /* enter_visit on <var_v:FlowVisitor>*/;
RET_LABEL:;
}
/* method flow#APropdef#do_flow for (self: Object, ToolContext) */
void VIRTUAL_flow__APropdef__do_flow(val* self, val* p0) {
flow__APropdef__do_flow(self, p0);
RET_LABEL:;
}
/* method flow#APropdef#before_flow_context for (self: APropdef): nullable FlowContext */
val* flow__APropdef__before_flow_context(val* self) {
val* var /* : nullable FlowContext */;
val* var1 /* : nullable FlowContext */;
var1 = self->attrs[COLOR_flow__APropdef___64dbefore_flow_context].val; /* @before_flow_context on <self:APropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method flow#APropdef#before_flow_context for (self: Object): nullable FlowContext */
val* VIRTUAL_flow__APropdef__before_flow_context(val* self) {
val* var /* : nullable FlowContext */;
val* var1 /* : nullable FlowContext */;
var1 = flow__APropdef__before_flow_context(self);
var = var1;
RET_LABEL:;
return var;
}
/* method flow#APropdef#before_flow_context= for (self: APropdef, nullable FlowContext) */
void flow__APropdef__before_flow_context_61d(val* self, val* p0) {
self->attrs[COLOR_flow__APropdef___64dbefore_flow_context].val = p0; /* @before_flow_context on <self:APropdef> */
RET_LABEL:;
}
/* method flow#APropdef#before_flow_context= for (self: Object, nullable FlowContext) */
void VIRTUAL_flow__APropdef__before_flow_context_61d(val* self, val* p0) {
flow__APropdef__before_flow_context_61d(self, p0);
RET_LABEL:;
}
/* method flow#APropdef#after_flow_context for (self: APropdef): nullable FlowContext */
val* flow__APropdef__after_flow_context(val* self) {
val* var /* : nullable FlowContext */;
val* var1 /* : nullable FlowContext */;
var1 = self->attrs[COLOR_flow__APropdef___64dafter_flow_context].val; /* @after_flow_context on <self:APropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method flow#APropdef#after_flow_context for (self: Object): nullable FlowContext */
val* VIRTUAL_flow__APropdef__after_flow_context(val* self) {
val* var /* : nullable FlowContext */;
val* var1 /* : nullable FlowContext */;
var1 = flow__APropdef__after_flow_context(self);
var = var1;
RET_LABEL:;
return var;
}
/* method flow#APropdef#after_flow_context= for (self: APropdef, nullable FlowContext) */
void flow__APropdef__after_flow_context_61d(val* self, val* p0) {
self->attrs[COLOR_flow__APropdef___64dafter_flow_context].val = p0; /* @after_flow_context on <self:APropdef> */
RET_LABEL:;
}
/* method flow#APropdef#after_flow_context= for (self: Object, nullable FlowContext) */
void VIRTUAL_flow__APropdef__after_flow_context_61d(val* self, val* p0) {
flow__APropdef__after_flow_context_61d(self, p0);
RET_LABEL:;
}
/* method flow#APropdef#accept_flow_visitor for (self: APropdef, FlowVisitor) */
void flow__APropdef__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : FlowContext */;
val* var1 /* : FlowContext */;
var_v = p0;
var = ((val* (*)(val*))(var_v->class->vft[COLOR_flow__FlowVisitor__current_flow_context]))(var_v) /* current_flow_context on <var_v:FlowVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_flow__APropdef__before_flow_context_61d]))(self, var) /* before_flow_context= on <self:APropdef>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_flow__APropdef__accept_flow_visitor]))(self, p0) /* accept_flow_visitor on <self:APropdef>*/;
var1 = ((val* (*)(val*))(var_v->class->vft[COLOR_flow__FlowVisitor__current_flow_context]))(var_v) /* current_flow_context on <var_v:FlowVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_flow__APropdef__after_flow_context_61d]))(self, var1) /* after_flow_context= on <self:APropdef>*/;
RET_LABEL:;
}
/* method flow#APropdef#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__APropdef__accept_flow_visitor(val* self, val* p0) {
flow__APropdef__accept_flow_visitor(self, p0);
RET_LABEL:;
}
/* method flow#AExpr#after_flow_context for (self: AExpr): nullable FlowContext */
val* flow__AExpr__after_flow_context(val* self) {
val* var /* : nullable FlowContext */;
val* var1 /* : nullable FlowContext */;
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method flow#AExpr#after_flow_context for (self: Object): nullable FlowContext */
val* VIRTUAL_flow__AExpr__after_flow_context(val* self) {
val* var /* : nullable FlowContext */;
val* var1 /* : nullable FlowContext */;
var1 = flow__AExpr__after_flow_context(self);
var = var1;
RET_LABEL:;
return var;
}
/* method flow#AExpr#after_flow_context= for (self: AExpr, nullable FlowContext) */
void flow__AExpr__after_flow_context_61d(val* self, val* p0) {
self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val = p0; /* @after_flow_context on <self:AExpr> */
RET_LABEL:;
}
/* method flow#AExpr#after_flow_context= for (self: Object, nullable FlowContext) */
void VIRTUAL_flow__AExpr__after_flow_context_61d(val* self, val* p0) {
flow__AExpr__after_flow_context_61d(self, p0);
RET_LABEL:;
}
/* method flow#AVarAssignExpr#accept_flow_visitor for (self: AVarAssignExpr, FlowVisitor) */
void flow__AVarAssignExpr__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : FlowContext */;
var_v = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_flow__AVarAssignExpr__accept_flow_visitor]))(self, p0) /* accept_flow_visitor on <self:AVarAssignExpr>*/;
var = ((val* (*)(val*))(var_v->class->vft[COLOR_flow__FlowVisitor__make_sub_flow]))(var_v) /* make_sub_flow on <var_v:FlowVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_flow__AExpr__after_flow_context_61d]))(self, var) /* after_flow_context= on <self:AVarAssignExpr>*/;
RET_LABEL:;
}
/* method flow#AVarAssignExpr#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__AVarAssignExpr__accept_flow_visitor(val* self, val* p0) {
flow__AVarAssignExpr__accept_flow_visitor(self, p0);
RET_LABEL:;
}
/* method flow#AReassignFormExpr#accept_flow_visitor for (self: AReassignFormExpr, FlowVisitor) */
void flow__AReassignFormExpr__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : FlowContext */;
var_v = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_flow__AReassignFormExpr__accept_flow_visitor]))(self, p0) /* accept_flow_visitor on <self:AReassignFormExpr>*/;
var = ((val* (*)(val*))(var_v->class->vft[COLOR_flow__FlowVisitor__make_sub_flow]))(var_v) /* make_sub_flow on <var_v:FlowVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_flow__AExpr__after_flow_context_61d]))(self, var) /* after_flow_context= on <self:AReassignFormExpr>*/;
RET_LABEL:;
}
/* method flow#AReassignFormExpr#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__AReassignFormExpr__accept_flow_visitor(val* self, val* p0) {
flow__AReassignFormExpr__accept_flow_visitor(self, p0);
RET_LABEL:;
}
/* method flow#ABlockExpr#accept_flow_visitor for (self: ABlockExpr, FlowVisitor) */
void flow__ABlockExpr__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : ANodes[AExpr] */;
val* var1 /* : Iterator[nullable Object] */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
val* var_e /* var e: AExpr */;
val* var4 /* : FlowContext */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : FlowContext */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : FlowContext */;
short int var11 /* : Bool */;
val* var12 /* : ToolContext */;
val* var13 /* : Location */;
static val* varonce;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : String */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ABlockExpr__n_expr]))(self) /* n_expr on <self:ABlockExpr>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_collection__Collection__iterator]))(var) /* iterator on <var:ANodes[AExpr]>*/;
for(;;) {
var2 = ((short int (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var1) /* is_ok on <var1:Iterator[nullable Object]>*/;
if(!var2) break;
var3 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__item]))(var1) /* item on <var1:Iterator[nullable Object]>*/;
var_e = var3;
var4 = ((val* (*)(val*))(var_v->class->vft[COLOR_flow__FlowVisitor__current_flow_context]))(var_v) /* current_flow_context on <var_v:FlowVisitor>*/;
var5 = ((short int (*)(val*))(var4->class->vft[COLOR_flow__FlowContext__is_unreachable]))(var4) /* is_unreachable on <var4:FlowContext>*/;
var6 = !var5;
if (var6){
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var_e) /* enter_visit on <var_v:FlowVisitor>*/;
} else {
var7 = ((val* (*)(val*))(var_v->class->vft[COLOR_flow__FlowVisitor__current_flow_context]))(var_v) /* current_flow_context on <var_v:FlowVisitor>*/;
var8 = ((short int (*)(val*))(var7->class->vft[COLOR_flow__FlowContext__is_already_unreachable]))(var7) /* is_already_unreachable on <var7:FlowContext>*/;
var9 = !var8;
if (var9){
var10 = ((val* (*)(val*))(var_v->class->vft[COLOR_flow__FlowVisitor__current_flow_context]))(var_v) /* current_flow_context on <var_v:FlowVisitor>*/;
var11 = 1;
((void (*)(val*, short int))(var10->class->vft[COLOR_flow__FlowContext__is_already_unreachable_61d]))(var10, var11) /* is_already_unreachable= on <var10:FlowContext>*/;
var12 = ((val* (*)(val*))(var_v->class->vft[COLOR_flow__FlowVisitor__toolcontext]))(var_v) /* toolcontext on <var_v:FlowVisitor>*/;
var13 = ((val* (*)(val*))(var_e->class->vft[COLOR_parser_nodes__ANode__hot_location]))(var_e) /* hot_location on <var_e:AExpr>*/;
if (varonce) {
var14 = varonce;
} else {
var15 = "Error: unreachable statement.";
var16 = 29;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce = var14;
}
((void (*)(val*, val*, val*))(var12->class->vft[COLOR_toolcontext__ToolContext__error]))(var12, var13, var14) /* error on <var12:ToolContext>*/;
} else {
}
}
CONTINUE_label: (void)0;
((void (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__next]))(var1) /* next on <var1:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method flow#ABlockExpr#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__ABlockExpr__accept_flow_visitor(val* self, val* p0) {
flow__ABlockExpr__accept_flow_visitor(self, p0);
RET_LABEL:;
}
/* method flow#AReturnExpr#accept_flow_visitor for (self: AReturnExpr, FlowVisitor) */
void flow__AReturnExpr__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : FlowContext */;
var_v = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_flow__AReturnExpr__accept_flow_visitor]))(self, p0) /* accept_flow_visitor on <self:AReturnExpr>*/;
var = ((val* (*)(val*))(var_v->class->vft[COLOR_flow__FlowVisitor__make_unreachable_flow]))(var_v) /* make_unreachable_flow on <var_v:FlowVisitor>*/;
var;
RET_LABEL:;
}
/* method flow#AReturnExpr#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__AReturnExpr__accept_flow_visitor(val* self, val* p0) {
flow__AReturnExpr__accept_flow_visitor(self, p0);
RET_LABEL:;
}
/* method flow#AContinueExpr#before_flow_context for (self: AContinueExpr): nullable FlowContext */
val* flow__AContinueExpr__before_flow_context(val* self) {
val* var /* : nullable FlowContext */;
val* var1 /* : nullable FlowContext */;
val* var_after /* var after: nullable FlowContext */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : Array[FlowContext] */;
val* var6 /* : nullable Object */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_flow__AExpr__after_flow_context]))(self) /* after_flow_context on <self:AContinueExpr>*/;
var_after = var1;
var2 = NULL;
if (var_after == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (var3){
var4 = NULL;
var = var4;
goto RET_LABEL;
} else {
}
var5 = ((val* (*)(val*))(var_after->class->vft[COLOR_flow__FlowContext__previous]))(var_after) /* previous on <var_after:nullable FlowContext(FlowContext)>*/;
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_abstract_collection__Collection__first]))(var5) /* first on <var5:Array[FlowContext]>*/;
var = var6;
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
((void (*)(val*, val*))(self->class->vft[COLOR_flow__AContinueExpr__accept_flow_visitor]))(self, p0) /* accept_flow_visitor on <self:AContinueExpr>*/;
var = ((val* (*)(val*))(var_v->class->vft[COLOR_flow__FlowVisitor__make_unreachable_flow]))(var_v) /* make_unreachable_flow on <var_v:FlowVisitor>*/;
var;
RET_LABEL:;
}
/* method flow#AContinueExpr#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__AContinueExpr__accept_flow_visitor(val* self, val* p0) {
flow__AContinueExpr__accept_flow_visitor(self, p0);
RET_LABEL:;
}
/* method flow#ABreakExpr#before_flow_context for (self: ABreakExpr): nullable FlowContext */
val* flow__ABreakExpr__before_flow_context(val* self) {
val* var /* : nullable FlowContext */;
val* var1 /* : nullable FlowContext */;
val* var_after /* var after: nullable FlowContext */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : Array[FlowContext] */;
val* var6 /* : nullable Object */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_flow__AExpr__after_flow_context]))(self) /* after_flow_context on <self:ABreakExpr>*/;
var_after = var1;
var2 = NULL;
if (var_after == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (var3){
var4 = NULL;
var = var4;
goto RET_LABEL;
} else {
}
var5 = ((val* (*)(val*))(var_after->class->vft[COLOR_flow__FlowContext__previous]))(var_after) /* previous on <var_after:nullable FlowContext(FlowContext)>*/;
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_abstract_collection__Collection__first]))(var5) /* first on <var5:Array[FlowContext]>*/;
var = var6;
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
((void (*)(val*, val*))(self->class->vft[COLOR_flow__ABreakExpr__accept_flow_visitor]))(self, p0) /* accept_flow_visitor on <self:ABreakExpr>*/;
var = ((val* (*)(val*))(var_v->class->vft[COLOR_flow__FlowVisitor__make_unreachable_flow]))(var_v) /* make_unreachable_flow on <var_v:FlowVisitor>*/;
var;
RET_LABEL:;
}
/* method flow#ABreakExpr#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__ABreakExpr__accept_flow_visitor(val* self, val* p0) {
flow__ABreakExpr__accept_flow_visitor(self, p0);
RET_LABEL:;
}
/* method flow#AAbortExpr#accept_flow_visitor for (self: AAbortExpr, FlowVisitor) */
void flow__AAbortExpr__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : FlowContext */;
var_v = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_flow__AAbortExpr__accept_flow_visitor]))(self, p0) /* accept_flow_visitor on <self:AAbortExpr>*/;
var = ((val* (*)(val*))(var_v->class->vft[COLOR_flow__FlowVisitor__make_unreachable_flow]))(var_v) /* make_unreachable_flow on <var_v:FlowVisitor>*/;
var;
RET_LABEL:;
}
/* method flow#AAbortExpr#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__AAbortExpr__accept_flow_visitor(val* self, val* p0) {
flow__AAbortExpr__accept_flow_visitor(self, p0);
RET_LABEL:;
}
/* method flow#ADoExpr#accept_flow_visitor for (self: ADoExpr, FlowVisitor) */
void flow__ADoExpr__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : nullable EscapeMark */;
var_v = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_flow__ADoExpr__accept_flow_visitor]))(self, p0) /* accept_flow_visitor on <self:ADoExpr>*/;
var = ((val* (*)(val*))(self->class->vft[COLOR_scope__ADoExpr__escapemark]))(self) /* escapemark on <self:ADoExpr>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_flow__FlowVisitor__merge_breaks]))(var_v, var) /* merge_breaks on <var_v:FlowVisitor>*/;
RET_LABEL:;
}
/* method flow#ADoExpr#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__ADoExpr__accept_flow_visitor(val* self, val* p0) {
flow__ADoExpr__accept_flow_visitor(self, p0);
RET_LABEL:;
}
/* method flow#AIfExpr#accept_flow_visitor for (self: AIfExpr, FlowVisitor) */
void flow__AIfExpr__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : AExpr */;
val* var1 /* : FlowContext */;
val* var_after_expr /* var after_expr: FlowContext */;
val* var2 /* : FlowContext */;
val* var3 /* : nullable AExpr */;
val* var4 /* : FlowContext */;
val* var_after_then /* var after_then: FlowContext */;
val* var5 /* : FlowContext */;
val* var6 /* : nullable AExpr */;
val* var7 /* : FlowContext */;
val* var_after_else /* var after_else: FlowContext */;
val* var8 /* : FlowContext */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AIfExpr__n_expr]))(self) /* n_expr on <self:AIfExpr>*/;
var1 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_flow__FlowVisitor__visit_expr]))(var_v, var) /* visit_expr on <var_v:FlowVisitor>*/;
var_after_expr = var1;
var2 = ((val* (*)(val*))(var_after_expr->class->vft[COLOR_flow__FlowContext__when_true]))(var_after_expr) /* when_true on <var_after_expr:FlowContext>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_flow__FlowVisitor__current_flow_context_61d]))(var_v, var2) /* current_flow_context= on <var_v:FlowVisitor>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AIfExpr__n_then]))(self) /* n_then on <self:AIfExpr>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var3) /* enter_visit on <var_v:FlowVisitor>*/;
var4 = ((val* (*)(val*))(var_v->class->vft[COLOR_flow__FlowVisitor__current_flow_context]))(var_v) /* current_flow_context on <var_v:FlowVisitor>*/;
var_after_then = var4;
var5 = ((val* (*)(val*))(var_after_expr->class->vft[COLOR_flow__FlowContext__when_false]))(var_after_expr) /* when_false on <var_after_expr:FlowContext>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_flow__FlowVisitor__current_flow_context_61d]))(var_v, var5) /* current_flow_context= on <var_v:FlowVisitor>*/;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AIfExpr__n_else]))(self) /* n_else on <self:AIfExpr>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var6) /* enter_visit on <var_v:FlowVisitor>*/;
var7 = ((val* (*)(val*))(var_v->class->vft[COLOR_flow__FlowVisitor__current_flow_context]))(var_v) /* current_flow_context on <var_v:FlowVisitor>*/;
var_after_else = var7;
var8 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_flow__FlowVisitor__make_merge_flow]))(var_v, var_after_then, var_after_else) /* make_merge_flow on <var_v:FlowVisitor>*/;
var8;
RET_LABEL:;
}
/* method flow#AIfExpr#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__AIfExpr__accept_flow_visitor(val* self, val* p0) {
flow__AIfExpr__accept_flow_visitor(self, p0);
RET_LABEL:;
}
/* method flow#AIfexprExpr#accept_flow_visitor for (self: AIfexprExpr, FlowVisitor) */
void flow__AIfexprExpr__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : AExpr */;
val* var1 /* : FlowContext */;
val* var_after_expr /* var after_expr: FlowContext */;
val* var2 /* : FlowContext */;
val* var3 /* : AExpr */;
val* var4 /* : FlowContext */;
val* var_after_then /* var after_then: FlowContext */;
val* var5 /* : FlowContext */;
val* var6 /* : AExpr */;
val* var7 /* : FlowContext */;
val* var_after_else /* var after_else: FlowContext */;
val* var8 /* : FlowContext */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AIfexprExpr__n_expr]))(self) /* n_expr on <self:AIfexprExpr>*/;
var1 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_flow__FlowVisitor__visit_expr]))(var_v, var) /* visit_expr on <var_v:FlowVisitor>*/;
var_after_expr = var1;
var2 = ((val* (*)(val*))(var_after_expr->class->vft[COLOR_flow__FlowContext__when_true]))(var_after_expr) /* when_true on <var_after_expr:FlowContext>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_flow__FlowVisitor__current_flow_context_61d]))(var_v, var2) /* current_flow_context= on <var_v:FlowVisitor>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AIfexprExpr__n_then]))(self) /* n_then on <self:AIfexprExpr>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var3) /* enter_visit on <var_v:FlowVisitor>*/;
var4 = ((val* (*)(val*))(var_v->class->vft[COLOR_flow__FlowVisitor__current_flow_context]))(var_v) /* current_flow_context on <var_v:FlowVisitor>*/;
var_after_then = var4;
var5 = ((val* (*)(val*))(var_after_expr->class->vft[COLOR_flow__FlowContext__when_false]))(var_after_expr) /* when_false on <var_after_expr:FlowContext>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_flow__FlowVisitor__current_flow_context_61d]))(var_v, var5) /* current_flow_context= on <var_v:FlowVisitor>*/;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AIfexprExpr__n_else]))(self) /* n_else on <self:AIfexprExpr>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var6) /* enter_visit on <var_v:FlowVisitor>*/;
var7 = ((val* (*)(val*))(var_v->class->vft[COLOR_flow__FlowVisitor__current_flow_context]))(var_v) /* current_flow_context on <var_v:FlowVisitor>*/;
var_after_else = var7;
var8 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_flow__FlowVisitor__make_merge_flow]))(var_v, var_after_then, var_after_else) /* make_merge_flow on <var_v:FlowVisitor>*/;
var8;
RET_LABEL:;
}
/* method flow#AIfexprExpr#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__AIfexprExpr__accept_flow_visitor(val* self, val* p0) {
flow__AIfexprExpr__accept_flow_visitor(self, p0);
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
val* var4 /* : nullable AExpr */;
val* var5 /* : FlowContext */;
val* var_after_block /* var after_block: FlowContext */;
val* var6 /* : nullable EscapeMark */;
val* var7 /* : FlowContext */;
val* var8 /* : nullable EscapeMark */;
var_v = p0;
var = ((val* (*)(val*))(var_v->class->vft[COLOR_flow__FlowVisitor__make_sub_flow]))(var_v) /* make_sub_flow on <var_v:FlowVisitor>*/;
var_before_loop = var;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AWhileExpr__n_expr]))(self) /* n_expr on <self:AWhileExpr>*/;
var2 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_flow__FlowVisitor__visit_expr]))(var_v, var1) /* visit_expr on <var_v:FlowVisitor>*/;
var_after_expr = var2;
var3 = ((val* (*)(val*))(var_after_expr->class->vft[COLOR_flow__FlowContext__when_true]))(var_after_expr) /* when_true on <var_after_expr:FlowContext>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_flow__FlowVisitor__current_flow_context_61d]))(var_v, var3) /* current_flow_context= on <var_v:FlowVisitor>*/;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AWhileExpr__n_block]))(self) /* n_block on <self:AWhileExpr>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var4) /* enter_visit on <var_v:FlowVisitor>*/;
var5 = ((val* (*)(val*))(var_v->class->vft[COLOR_flow__FlowVisitor__current_flow_context]))(var_v) /* current_flow_context on <var_v:FlowVisitor>*/;
var_after_block = var5;
((void (*)(val*, val*))(var_before_loop->class->vft[COLOR_flow__FlowContext__add_loop]))(var_before_loop, var_after_block) /* add_loop on <var_before_loop:FlowContext>*/;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_scope__AWhileExpr__escapemark]))(self) /* escapemark on <self:AWhileExpr>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_flow__FlowVisitor__merge_continues_to]))(var_v, var_after_block, var6) /* merge_continues_to on <var_v:FlowVisitor>*/;
var7 = ((val* (*)(val*))(var_after_expr->class->vft[COLOR_flow__FlowContext__when_false]))(var_after_expr) /* when_false on <var_after_expr:FlowContext>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_flow__FlowVisitor__current_flow_context_61d]))(var_v, var7) /* current_flow_context= on <var_v:FlowVisitor>*/;
var8 = ((val* (*)(val*))(self->class->vft[COLOR_scope__AWhileExpr__escapemark]))(self) /* escapemark on <self:AWhileExpr>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_flow__FlowVisitor__merge_breaks]))(var_v, var8) /* merge_breaks on <var_v:FlowVisitor>*/;
RET_LABEL:;
}
/* method flow#AWhileExpr#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__AWhileExpr__accept_flow_visitor(val* self, val* p0) {
flow__AWhileExpr__accept_flow_visitor(self, p0);
RET_LABEL:;
}
/* method flow#ALoopExpr#accept_flow_visitor for (self: ALoopExpr, FlowVisitor) */
void flow__ALoopExpr__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : FlowContext */;
val* var_before_loop /* var before_loop: FlowContext */;
val* var1 /* : nullable AExpr */;
val* var2 /* : FlowContext */;
val* var_after_block /* var after_block: FlowContext */;
val* var3 /* : nullable EscapeMark */;
val* var4 /* : FlowContext */;
val* var5 /* : nullable EscapeMark */;
var_v = p0;
var = ((val* (*)(val*))(var_v->class->vft[COLOR_flow__FlowVisitor__make_sub_flow]))(var_v) /* make_sub_flow on <var_v:FlowVisitor>*/;
var_before_loop = var;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ALoopExpr__n_block]))(self) /* n_block on <self:ALoopExpr>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:FlowVisitor>*/;
var2 = ((val* (*)(val*))(var_v->class->vft[COLOR_flow__FlowVisitor__current_flow_context]))(var_v) /* current_flow_context on <var_v:FlowVisitor>*/;
var_after_block = var2;
((void (*)(val*, val*))(var_before_loop->class->vft[COLOR_flow__FlowContext__add_loop]))(var_before_loop, var_after_block) /* add_loop on <var_before_loop:FlowContext>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_scope__ALoopExpr__escapemark]))(self) /* escapemark on <self:ALoopExpr>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_flow__FlowVisitor__merge_continues_to]))(var_v, var_after_block, var3) /* merge_continues_to on <var_v:FlowVisitor>*/;
var4 = ((val* (*)(val*))(var_v->class->vft[COLOR_flow__FlowVisitor__make_unreachable_flow]))(var_v) /* make_unreachable_flow on <var_v:FlowVisitor>*/;
var4;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_scope__ALoopExpr__escapemark]))(self) /* escapemark on <self:ALoopExpr>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_flow__FlowVisitor__merge_breaks]))(var_v, var5) /* merge_breaks on <var_v:FlowVisitor>*/;
RET_LABEL:;
}
/* method flow#ALoopExpr#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__ALoopExpr__accept_flow_visitor(val* self, val* p0) {
flow__ALoopExpr__accept_flow_visitor(self, p0);
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
val* var_after_block /* var after_block: FlowContext */;
val* var4 /* : nullable EscapeMark */;
val* var5 /* : FlowContext */;
val* var6 /* : FlowContext */;
val* var7 /* : nullable EscapeMark */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AForExpr__n_expr]))(self) /* n_expr on <self:AForExpr>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:FlowVisitor>*/;
var1 = ((val* (*)(val*))(var_v->class->vft[COLOR_flow__FlowVisitor__make_sub_flow]))(var_v) /* make_sub_flow on <var_v:FlowVisitor>*/;
var_before_loop = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AForExpr__n_block]))(self) /* n_block on <self:AForExpr>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var2) /* enter_visit on <var_v:FlowVisitor>*/;
var3 = ((val* (*)(val*))(var_v->class->vft[COLOR_flow__FlowVisitor__current_flow_context]))(var_v) /* current_flow_context on <var_v:FlowVisitor>*/;
var_after_block = var3;
((void (*)(val*, val*))(var_before_loop->class->vft[COLOR_flow__FlowContext__add_loop]))(var_before_loop, var_after_block) /* add_loop on <var_before_loop:FlowContext>*/;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_scope__AForExpr__escapemark]))(self) /* escapemark on <self:AForExpr>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_flow__FlowVisitor__merge_continues_to]))(var_v, var_after_block, var4) /* merge_continues_to on <var_v:FlowVisitor>*/;
var5 = ((val* (*)(val*))(var_v->class->vft[COLOR_flow__FlowVisitor__current_flow_context]))(var_v) /* current_flow_context on <var_v:FlowVisitor>*/;
var6 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_flow__FlowVisitor__make_merge_flow]))(var_v, var5, var_before_loop) /* make_merge_flow on <var_v:FlowVisitor>*/;
var6;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_scope__AForExpr__escapemark]))(self) /* escapemark on <self:AForExpr>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_flow__FlowVisitor__merge_breaks]))(var_v, var7) /* merge_breaks on <var_v:FlowVisitor>*/;
RET_LABEL:;
}
/* method flow#AForExpr#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__AForExpr__accept_flow_visitor(val* self, val* p0) {
flow__AForExpr__accept_flow_visitor(self, p0);
RET_LABEL:;
}
/* method flow#AAssertExpr#accept_flow_visitor for (self: AAssertExpr, FlowVisitor) */
void flow__AAssertExpr__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : AExpr */;
val* var1 /* : FlowContext */;
val* var_after_expr /* var after_expr: FlowContext */;
val* var2 /* : FlowContext */;
val* var3 /* : nullable AExpr */;
val* var4 /* : FlowContext */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAssertExpr__n_expr]))(self) /* n_expr on <self:AAssertExpr>*/;
var1 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_flow__FlowVisitor__visit_expr]))(var_v, var) /* visit_expr on <var_v:FlowVisitor>*/;
var_after_expr = var1;
var2 = ((val* (*)(val*))(var_after_expr->class->vft[COLOR_flow__FlowContext__when_false]))(var_after_expr) /* when_false on <var_after_expr:FlowContext>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_flow__FlowVisitor__current_flow_context_61d]))(var_v, var2) /* current_flow_context= on <var_v:FlowVisitor>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAssertExpr__n_else]))(self) /* n_else on <self:AAssertExpr>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var3) /* enter_visit on <var_v:FlowVisitor>*/;
var4 = ((val* (*)(val*))(var_after_expr->class->vft[COLOR_flow__FlowContext__when_true]))(var_after_expr) /* when_true on <var_after_expr:FlowContext>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_flow__FlowVisitor__current_flow_context_61d]))(var_v, var4) /* current_flow_context= on <var_v:FlowVisitor>*/;
RET_LABEL:;
}
/* method flow#AAssertExpr#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__AAssertExpr__accept_flow_visitor(val* self, val* p0) {
flow__AAssertExpr__accept_flow_visitor(self, p0);
RET_LABEL:;
}
/* method flow#AOrExpr#accept_flow_visitor for (self: AOrExpr, FlowVisitor) */
void flow__AOrExpr__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : AExpr */;
val* var1 /* : FlowContext */;
val* var_after_expr /* var after_expr: FlowContext */;
val* var2 /* : FlowContext */;
val* var3 /* : AExpr */;
val* var4 /* : FlowContext */;
val* var_after_expr2 /* var after_expr2: FlowContext */;
val* var5 /* : FlowContext */;
val* var6 /* : FlowContext */;
val* var7 /* : FlowContext */;
val* var_merge_true /* var merge_true: FlowContext */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : String */;
val* var12 /* : FlowContext */;
val* var13 /* : FlowContext */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AOrExpr__n_expr]))(self) /* n_expr on <self:AOrExpr>*/;
var1 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_flow__FlowVisitor__visit_expr]))(var_v, var) /* visit_expr on <var_v:FlowVisitor>*/;
var_after_expr = var1;
var2 = ((val* (*)(val*))(var_after_expr->class->vft[COLOR_flow__FlowContext__when_false]))(var_after_expr) /* when_false on <var_after_expr:FlowContext>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_flow__FlowVisitor__current_flow_context_61d]))(var_v, var2) /* current_flow_context= on <var_v:FlowVisitor>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AOrExpr__n_expr2]))(self) /* n_expr2 on <self:AOrExpr>*/;
var4 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_flow__FlowVisitor__visit_expr]))(var_v, var3) /* visit_expr on <var_v:FlowVisitor>*/;
var_after_expr2 = var4;
var5 = ((val* (*)(val*))(var_after_expr->class->vft[COLOR_flow__FlowContext__when_true]))(var_after_expr) /* when_true on <var_after_expr:FlowContext>*/;
var6 = ((val* (*)(val*))(var_after_expr2->class->vft[COLOR_flow__FlowContext__when_true]))(var_after_expr2) /* when_true on <var_after_expr2:FlowContext>*/;
var7 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_flow__FlowVisitor__make_merge_flow]))(var_v, var5, var6) /* make_merge_flow on <var_v:FlowVisitor>*/;
var_merge_true = var7;
if (varonce) {
var8 = varonce;
} else {
var9 = "OR TRUE";
var10 = 7;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce = var8;
}
((void (*)(val*, val*))(var_merge_true->class->vft[COLOR_flow__FlowContext__name_61d]))(var_merge_true, var8) /* name= on <var_merge_true:FlowContext>*/;
var12 = ((val* (*)(val*))(var_after_expr2->class->vft[COLOR_flow__FlowContext__when_false]))(var_after_expr2) /* when_false on <var_after_expr2:FlowContext>*/;
var13 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_flow__FlowVisitor__make_true_false_flow]))(var_v, var_merge_true, var12) /* make_true_false_flow on <var_v:FlowVisitor>*/;
var13;
RET_LABEL:;
}
/* method flow#AOrExpr#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__AOrExpr__accept_flow_visitor(val* self, val* p0) {
flow__AOrExpr__accept_flow_visitor(self, p0);
RET_LABEL:;
}
/* method flow#AImpliesExpr#accept_flow_visitor for (self: AImpliesExpr, FlowVisitor) */
void flow__AImpliesExpr__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : AExpr */;
val* var1 /* : FlowContext */;
val* var_after_expr /* var after_expr: FlowContext */;
val* var2 /* : FlowContext */;
val* var3 /* : AExpr */;
val* var4 /* : FlowContext */;
val* var_after_expr2 /* var after_expr2: FlowContext */;
val* var5 /* : FlowContext */;
val* var6 /* : FlowContext */;
val* var7 /* : FlowContext */;
val* var_merge_true /* var merge_true: FlowContext */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : String */;
val* var12 /* : FlowContext */;
val* var13 /* : FlowContext */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AImpliesExpr__n_expr]))(self) /* n_expr on <self:AImpliesExpr>*/;
var1 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_flow__FlowVisitor__visit_expr]))(var_v, var) /* visit_expr on <var_v:FlowVisitor>*/;
var_after_expr = var1;
var2 = ((val* (*)(val*))(var_after_expr->class->vft[COLOR_flow__FlowContext__when_true]))(var_after_expr) /* when_true on <var_after_expr:FlowContext>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_flow__FlowVisitor__current_flow_context_61d]))(var_v, var2) /* current_flow_context= on <var_v:FlowVisitor>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AImpliesExpr__n_expr2]))(self) /* n_expr2 on <self:AImpliesExpr>*/;
var4 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_flow__FlowVisitor__visit_expr]))(var_v, var3) /* visit_expr on <var_v:FlowVisitor>*/;
var_after_expr2 = var4;
var5 = ((val* (*)(val*))(var_after_expr->class->vft[COLOR_flow__FlowContext__when_false]))(var_after_expr) /* when_false on <var_after_expr:FlowContext>*/;
var6 = ((val* (*)(val*))(var_after_expr2->class->vft[COLOR_flow__FlowContext__when_true]))(var_after_expr2) /* when_true on <var_after_expr2:FlowContext>*/;
var7 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_flow__FlowVisitor__make_merge_flow]))(var_v, var5, var6) /* make_merge_flow on <var_v:FlowVisitor>*/;
var_merge_true = var7;
if (varonce) {
var8 = varonce;
} else {
var9 = "OR TRUE";
var10 = 7;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce = var8;
}
((void (*)(val*, val*))(var_merge_true->class->vft[COLOR_flow__FlowContext__name_61d]))(var_merge_true, var8) /* name= on <var_merge_true:FlowContext>*/;
var12 = ((val* (*)(val*))(var_after_expr2->class->vft[COLOR_flow__FlowContext__when_false]))(var_after_expr2) /* when_false on <var_after_expr2:FlowContext>*/;
var13 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_flow__FlowVisitor__make_true_false_flow]))(var_v, var_merge_true, var12) /* make_true_false_flow on <var_v:FlowVisitor>*/;
var13;
RET_LABEL:;
}
/* method flow#AImpliesExpr#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__AImpliesExpr__accept_flow_visitor(val* self, val* p0) {
flow__AImpliesExpr__accept_flow_visitor(self, p0);
RET_LABEL:;
}
/* method flow#AAndExpr#accept_flow_visitor for (self: AAndExpr, FlowVisitor) */
void flow__AAndExpr__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : AExpr */;
val* var1 /* : FlowContext */;
val* var_after_expr /* var after_expr: FlowContext */;
val* var2 /* : FlowContext */;
val* var3 /* : AExpr */;
val* var4 /* : FlowContext */;
val* var_after_expr2 /* var after_expr2: FlowContext */;
val* var5 /* : FlowContext */;
val* var6 /* : FlowContext */;
val* var7 /* : FlowContext */;
val* var_merge_false /* var merge_false: FlowContext */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : String */;
val* var12 /* : FlowContext */;
val* var13 /* : FlowContext */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAndExpr__n_expr]))(self) /* n_expr on <self:AAndExpr>*/;
var1 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_flow__FlowVisitor__visit_expr]))(var_v, var) /* visit_expr on <var_v:FlowVisitor>*/;
var_after_expr = var1;
var2 = ((val* (*)(val*))(var_after_expr->class->vft[COLOR_flow__FlowContext__when_true]))(var_after_expr) /* when_true on <var_after_expr:FlowContext>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_flow__FlowVisitor__current_flow_context_61d]))(var_v, var2) /* current_flow_context= on <var_v:FlowVisitor>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAndExpr__n_expr2]))(self) /* n_expr2 on <self:AAndExpr>*/;
var4 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_flow__FlowVisitor__visit_expr]))(var_v, var3) /* visit_expr on <var_v:FlowVisitor>*/;
var_after_expr2 = var4;
var5 = ((val* (*)(val*))(var_after_expr->class->vft[COLOR_flow__FlowContext__when_false]))(var_after_expr) /* when_false on <var_after_expr:FlowContext>*/;
var6 = ((val* (*)(val*))(var_after_expr2->class->vft[COLOR_flow__FlowContext__when_false]))(var_after_expr2) /* when_false on <var_after_expr2:FlowContext>*/;
var7 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_flow__FlowVisitor__make_merge_flow]))(var_v, var5, var6) /* make_merge_flow on <var_v:FlowVisitor>*/;
var_merge_false = var7;
if (varonce) {
var8 = varonce;
} else {
var9 = "AND FALSE";
var10 = 9;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce = var8;
}
((void (*)(val*, val*))(var_merge_false->class->vft[COLOR_flow__FlowContext__name_61d]))(var_merge_false, var8) /* name= on <var_merge_false:FlowContext>*/;
var12 = ((val* (*)(val*))(var_after_expr2->class->vft[COLOR_flow__FlowContext__when_true]))(var_after_expr2) /* when_true on <var_after_expr2:FlowContext>*/;
var13 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_flow__FlowVisitor__make_true_false_flow]))(var_v, var12, var_merge_false) /* make_true_false_flow on <var_v:FlowVisitor>*/;
var13;
RET_LABEL:;
}
/* method flow#AAndExpr#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__AAndExpr__accept_flow_visitor(val* self, val* p0) {
flow__AAndExpr__accept_flow_visitor(self, p0);
RET_LABEL:;
}
/* method flow#ANotExpr#accept_flow_visitor for (self: ANotExpr, FlowVisitor) */
void flow__ANotExpr__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : AExpr */;
val* var1 /* : FlowContext */;
val* var_after_expr /* var after_expr: FlowContext */;
val* var2 /* : FlowContext */;
val* var3 /* : FlowContext */;
val* var4 /* : FlowContext */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANotExpr__n_expr]))(self) /* n_expr on <self:ANotExpr>*/;
var1 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_flow__FlowVisitor__visit_expr]))(var_v, var) /* visit_expr on <var_v:FlowVisitor>*/;
var_after_expr = var1;
var2 = ((val* (*)(val*))(var_after_expr->class->vft[COLOR_flow__FlowContext__when_false]))(var_after_expr) /* when_false on <var_after_expr:FlowContext>*/;
var3 = ((val* (*)(val*))(var_after_expr->class->vft[COLOR_flow__FlowContext__when_true]))(var_after_expr) /* when_true on <var_after_expr:FlowContext>*/;
var4 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_flow__FlowVisitor__make_true_false_flow]))(var_v, var2, var3) /* make_true_false_flow on <var_v:FlowVisitor>*/;
var4;
RET_LABEL:;
}
/* method flow#ANotExpr#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__ANotExpr__accept_flow_visitor(val* self, val* p0) {
flow__ANotExpr__accept_flow_visitor(self, p0);
RET_LABEL:;
}
/* method flow#AOrElseExpr#accept_flow_visitor for (self: AOrElseExpr, FlowVisitor) */
void flow__AOrElseExpr__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
var_v = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_flow__AOrElseExpr__accept_flow_visitor]))(self, p0) /* accept_flow_visitor on <self:AOrElseExpr>*/;
RET_LABEL:;
}
/* method flow#AOrElseExpr#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__AOrElseExpr__accept_flow_visitor(val* self, val* p0) {
flow__AOrElseExpr__accept_flow_visitor(self, p0);
RET_LABEL:;
}
/* method flow#AEqExpr#accept_flow_visitor for (self: AEqExpr, FlowVisitor) */
void flow__AEqExpr__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : FlowContext */;
var_v = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_flow__AEqExpr__accept_flow_visitor]))(self, p0) /* accept_flow_visitor on <self:AEqExpr>*/;
var = ((val* (*)(val*))(var_v->class->vft[COLOR_flow__FlowVisitor__make_sub_true_false_flow]))(var_v) /* make_sub_true_false_flow on <var_v:FlowVisitor>*/;
var;
RET_LABEL:;
}
/* method flow#AEqExpr#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__AEqExpr__accept_flow_visitor(val* self, val* p0) {
flow__AEqExpr__accept_flow_visitor(self, p0);
RET_LABEL:;
}
/* method flow#ANeExpr#accept_flow_visitor for (self: ANeExpr, FlowVisitor) */
void flow__ANeExpr__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : FlowContext */;
var_v = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_flow__ANeExpr__accept_flow_visitor]))(self, p0) /* accept_flow_visitor on <self:ANeExpr>*/;
var = ((val* (*)(val*))(var_v->class->vft[COLOR_flow__FlowVisitor__make_sub_true_false_flow]))(var_v) /* make_sub_true_false_flow on <var_v:FlowVisitor>*/;
var;
RET_LABEL:;
}
/* method flow#ANeExpr#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__ANeExpr__accept_flow_visitor(val* self, val* p0) {
flow__ANeExpr__accept_flow_visitor(self, p0);
RET_LABEL:;
}
/* method flow#AIsaExpr#accept_flow_visitor for (self: AIsaExpr, FlowVisitor) */
void flow__AIsaExpr__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : FlowContext */;
var_v = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_flow__AIsaExpr__accept_flow_visitor]))(self, p0) /* accept_flow_visitor on <self:AIsaExpr>*/;
var = ((val* (*)(val*))(var_v->class->vft[COLOR_flow__FlowVisitor__make_sub_true_false_flow]))(var_v) /* make_sub_true_false_flow on <var_v:FlowVisitor>*/;
var;
RET_LABEL:;
}
/* method flow#AIsaExpr#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__AIsaExpr__accept_flow_visitor(val* self, val* p0) {
flow__AIsaExpr__accept_flow_visitor(self, p0);
RET_LABEL:;
}
/* method flow#AProxyExpr#accept_flow_visitor for (self: AProxyExpr, FlowVisitor) */
void flow__AProxyExpr__accept_flow_visitor(val* self, val* p0) {
val* var_v /* var v: FlowVisitor */;
val* var /* : AExpr */;
val* var1 /* : FlowContext */;
val* var_after_expr /* var after_expr: FlowContext */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AProxyExpr__n_expr]))(self) /* n_expr on <self:AProxyExpr>*/;
var1 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_flow__FlowVisitor__visit_expr]))(var_v, var) /* visit_expr on <var_v:FlowVisitor>*/;
var_after_expr = var1;
((void (*)(val*, val*))(var_v->class->vft[COLOR_flow__FlowVisitor__current_flow_context_61d]))(var_v, var_after_expr) /* current_flow_context= on <var_v:FlowVisitor>*/;
RET_LABEL:;
}
/* method flow#AProxyExpr#accept_flow_visitor for (self: Object, FlowVisitor) */
void VIRTUAL_flow__AProxyExpr__accept_flow_visitor(val* self, val* p0) {
flow__AProxyExpr__accept_flow_visitor(self, p0);
RET_LABEL:;
}
