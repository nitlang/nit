#include "div_by_zero.sep.0.h"
/* method div_by_zero#ToolContext#div_by_zero_phase for (self: ToolContext): Phase */
val* div_by_zero__ToolContext__div_by_zero_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_div_by_zero__ToolContext___64ddiv_by_zero_phase].val; /* @div_by_zero_phase on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @div_by_zero_phase");
fprintf(stderr, " (%s:%d)\n", "src/div_by_zero.nit", 26);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method div_by_zero#ToolContext#div_by_zero_phase for (self: Object): Phase */
val* VIRTUAL_div_by_zero__ToolContext__div_by_zero_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = div_by_zero__ToolContext__div_by_zero_phase(self);
var = var1;
RET_LABEL:;
return var;
}
/* method div_by_zero#ToolContext#div_by_zero_phase= for (self: ToolContext, Phase) */
void div_by_zero__ToolContext__div_by_zero_phase_61d(val* self, val* p0) {
self->attrs[COLOR_div_by_zero__ToolContext___64ddiv_by_zero_phase].val = p0; /* @div_by_zero_phase on <self:ToolContext> */
RET_LABEL:;
}
/* method div_by_zero#ToolContext#div_by_zero_phase= for (self: Object, Phase) */
void VIRTUAL_div_by_zero__ToolContext__div_by_zero_phase_61d(val* self, val* p0) {
div_by_zero__ToolContext__div_by_zero_phase_61d(self, p0);
RET_LABEL:;
}
/* method div_by_zero#DivByZeroPhase#process_nmodule for (self: DivByZeroPhase, AModule) */
void div_by_zero__DivByZeroPhase__process_nmodule(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
val* var /* : nullable MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : DivByZeroVisitor */;
val* var2 /* : ToolContext */;
val* var_visitor /* var visitor: DivByZeroVisitor */;
var_nmodule = p0;
var = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_modelbuilder__AModule__mmodule]))(var_nmodule) /* mmodule on <var_nmodule:AModule>*/;
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/div_by_zero.nit", 41);
show_backtrace(1);
}
var_mmodule = var;
var1 = NEW_div_by_zero__DivByZeroVisitor(&type_div_by_zero__DivByZeroVisitor);
var2 = ((val* (*)(val*))(self->class->vft[COLOR_phase__Phase__toolcontext]))(self) /* toolcontext on <self:DivByZeroPhase>*/;
((void (*)(val*, val*, val*))(var1->class->vft[COLOR_div_by_zero__DivByZeroVisitor__init]))(var1, var2, var_mmodule) /* init on <var1:DivByZeroVisitor>*/;
var_visitor = var1;
((void (*)(val*, val*))(var_visitor->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_visitor, var_nmodule) /* enter_visit on <var_visitor:DivByZeroVisitor>*/;
RET_LABEL:;
}
/* method div_by_zero#DivByZeroPhase#process_nmodule for (self: Object, AModule) */
void VIRTUAL_div_by_zero__DivByZeroPhase__process_nmodule(val* self, val* p0) {
div_by_zero__DivByZeroPhase__process_nmodule(self, p0);
RET_LABEL:;
}
/* method div_by_zero#DivByZeroVisitor#toolcontext for (self: DivByZeroVisitor): ToolContext */
val* div_by_zero__DivByZeroVisitor__toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_div_by_zero__DivByZeroVisitor___64dtoolcontext].val; /* @toolcontext on <self:DivByZeroVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @toolcontext");
fprintf(stderr, " (%s:%d)\n", "src/div_by_zero.nit", 53);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method div_by_zero#DivByZeroVisitor#toolcontext for (self: Object): ToolContext */
val* VIRTUAL_div_by_zero__DivByZeroVisitor__toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = div_by_zero__DivByZeroVisitor__toolcontext(self);
var = var1;
RET_LABEL:;
return var;
}
/* method div_by_zero#DivByZeroVisitor#toolcontext= for (self: DivByZeroVisitor, ToolContext) */
void div_by_zero__DivByZeroVisitor__toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_div_by_zero__DivByZeroVisitor___64dtoolcontext].val = p0; /* @toolcontext on <self:DivByZeroVisitor> */
RET_LABEL:;
}
/* method div_by_zero#DivByZeroVisitor#toolcontext= for (self: Object, ToolContext) */
void VIRTUAL_div_by_zero__DivByZeroVisitor__toolcontext_61d(val* self, val* p0) {
div_by_zero__DivByZeroVisitor__toolcontext_61d(self, p0);
RET_LABEL:;
}
/* method div_by_zero#DivByZeroVisitor#mmodule for (self: DivByZeroVisitor): MModule */
val* div_by_zero__DivByZeroVisitor__mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_div_by_zero__DivByZeroVisitor___64dmmodule].val; /* @mmodule on <self:DivByZeroVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mmodule");
fprintf(stderr, " (%s:%d)\n", "src/div_by_zero.nit", 56);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method div_by_zero#DivByZeroVisitor#mmodule for (self: Object): MModule */
val* VIRTUAL_div_by_zero__DivByZeroVisitor__mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = div_by_zero__DivByZeroVisitor__mmodule(self);
var = var1;
RET_LABEL:;
return var;
}
/* method div_by_zero#DivByZeroVisitor#mmodule= for (self: DivByZeroVisitor, MModule) */
void div_by_zero__DivByZeroVisitor__mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_div_by_zero__DivByZeroVisitor___64dmmodule].val = p0; /* @mmodule on <self:DivByZeroVisitor> */
RET_LABEL:;
}
/* method div_by_zero#DivByZeroVisitor#mmodule= for (self: Object, MModule) */
void VIRTUAL_div_by_zero__DivByZeroVisitor__mmodule_61d(val* self, val* p0) {
div_by_zero__DivByZeroVisitor__mmodule_61d(self, p0);
RET_LABEL:;
}
/* method div_by_zero#DivByZeroVisitor#init for (self: DivByZeroVisitor, ToolContext, MModule) */
void div_by_zero__DivByZeroVisitor__init(val* self, val* p0, val* p1) {
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var_mmodule /* var mmodule: MModule */;
var_toolcontext = p0;
var_mmodule = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Visitor__init]))(self) /* init on <self:DivByZeroVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_div_by_zero__DivByZeroVisitor__toolcontext_61d]))(self, var_toolcontext) /* toolcontext= on <self:DivByZeroVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_div_by_zero__DivByZeroVisitor__mmodule_61d]))(self, var_mmodule) /* mmodule= on <self:DivByZeroVisitor>*/;
RET_LABEL:;
}
/* method div_by_zero#DivByZeroVisitor#init for (self: Object, ToolContext, MModule) */
void VIRTUAL_div_by_zero__DivByZeroVisitor__init(val* self, val* p0, val* p1) {
div_by_zero__DivByZeroVisitor__init(self, p0, p1);
RET_LABEL:;
}
/* method div_by_zero#DivByZeroVisitor#visit for (self: DivByZeroVisitor, ANode) */
void div_by_zero__DivByZeroVisitor__visit(val* self, val* p0) {
val* var_node /* var node: ANode */;
short int var /* : Bool */;
int cltype;
int idtype;
short int var1 /* : Bool */;
val* var2 /* : AExpr */;
val* var_op2 /* var op2: AExpr */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
short int var6 /* : Bool */;
val* var7 /* : nullable Int */;
long var8 /* : Int */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var11 /* : AExpr */;
val* var_op1 /* var op1: AExpr */;
val* var12 /* : MModule */;
static val* varonce;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
val* var17 /* : MClass */;
val* var18 /* : MClassType */;
val* var_int_type /* var int_type: MClassType */;
val* var19 /* : nullable MType */;
val* var20 /* : MModule */;
val* var21 /* : null */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var24 /* : ToolContext */;
val* var25 /* : Location */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : String */;
var_node = p0;
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__visit_all]))(var_node, self) /* visit_all on <var_node:ANode>*/;
/* <var_node:ANode> isa ASlashExpr */
cltype = type_parser_nodes__ASlashExpr.color;
idtype = type_parser_nodes__ASlashExpr.id;
if(cltype >= var_node->type->table_size) {
var = 0;
} else {
var = var_node->type->type_table[cltype] == idtype;
}
var1 = !var;
if (var1){
goto RET_LABEL;
} else {
}
var2 = ((val* (*)(val*))(var_node->class->vft[COLOR_parser_nodes__ABinopExpr__n_expr2]))(var_node) /* n_expr2 on <var_node:ANode(ASlashExpr)>*/;
var_op2 = var2;
/* <var_op2:AExpr> isa AIntExpr */
cltype4 = type_parser_nodes__AIntExpr.color;
idtype5 = type_parser_nodes__AIntExpr.id;
if(cltype4 >= var_op2->type->table_size) {
var3 = 0;
} else {
var3 = var_op2->type->type_table[cltype4] == idtype5;
}
var6 = !var3;
if (var6){
goto RET_LABEL;
} else {
}
var7 = ((val* (*)(val*))(var_op2->class->vft[COLOR_literal__AIntExpr__value]))(var_op2) /* value on <var_op2:AExpr(AIntExpr)>*/;
var8 = 0;
var10 = BOX_kernel__Int(var8); /* autobox from Int to nullable Object */
if (var7 == NULL) {
var9 = 1; /* <var8:Int> cannot be null */
} else {
var9 = ((short int (*)(val*, val*))(var7->class->vft[COLOR_kernel__Object___33d_61d]))(var7, var10) /* != on <var7:nullable Int>*/;
}
if (var9){
goto RET_LABEL;
} else {
}
var11 = ((val* (*)(val*))(var_node->class->vft[COLOR_parser_nodes__ASendExpr__n_expr]))(var_node) /* n_expr on <var_node:ANode(ASlashExpr)>*/;
var_op1 = var11;
var12 = ((val* (*)(val*))(self->class->vft[COLOR_div_by_zero__DivByZeroVisitor__mmodule]))(self) /* mmodule on <self:DivByZeroVisitor>*/;
if (varonce) {
var13 = varonce;
} else {
var14 = "Int";
var15 = 3;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce = var13;
}
var17 = ((val* (*)(val*, val*))(var12->class->vft[COLOR_model__MModule__get_primitive_class]))(var12, var13) /* get_primitive_class on <var12:MModule>*/;
var18 = ((val* (*)(val*))(var17->class->vft[COLOR_model__MClass__mclass_type]))(var17) /* mclass_type on <var17:MClass>*/;
var_int_type = var18;
var19 = ((val* (*)(val*))(var_op1->class->vft[COLOR_typing__AExpr__mtype]))(var_op1) /* mtype on <var_op1:AExpr>*/;
var20 = ((val* (*)(val*))(self->class->vft[COLOR_div_by_zero__DivByZeroVisitor__mmodule]))(self) /* mmodule on <self:DivByZeroVisitor>*/;
var21 = NULL;
if (var19 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/div_by_zero.nit", 86);
show_backtrace(1);
} else {
var22 = ((short int (*)(val*, val*, val*, val*))(var19->class->vft[COLOR_model__MType__is_subtype]))(var19, var20, var21, var_int_type) /* is_subtype on <var19:nullable MType>*/;
}
var23 = !var22;
if (var23){
goto RET_LABEL;
} else {
}
var24 = ((val* (*)(val*))(self->class->vft[COLOR_div_by_zero__DivByZeroVisitor__toolcontext]))(self) /* toolcontext on <self:DivByZeroVisitor>*/;
var25 = ((val* (*)(val*))(var_node->class->vft[COLOR_parser_nodes__ANode__location]))(var_node) /* location on <var_node:ANode(ASlashExpr)>*/;
if (varonce26) {
var27 = varonce26;
} else {
var28 = "Error: Definitely division by zero";
var29 = 34;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
((void (*)(val*, val*, val*))(var24->class->vft[COLOR_toolcontext__ToolContext__error]))(var24, var25, var27) /* error on <var24:ToolContext>*/;
RET_LABEL:;
}
/* method div_by_zero#DivByZeroVisitor#visit for (self: Object, ANode) */
void VIRTUAL_div_by_zero__DivByZeroVisitor__visit(val* self, val* p0) {
div_by_zero__DivByZeroVisitor__visit(self, p0);
RET_LABEL:;
}
