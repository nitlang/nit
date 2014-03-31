#include "simple_misc_analysis.sep.0.h"
/* method simple_misc_analysis#ToolContext#simple_misc_analysis_phase for (self: ToolContext): Phase */
val* simple_misc_analysis__ToolContext__simple_misc_analysis_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_simple_misc_analysis__ToolContext___64dsimple_misc_analysis_phase].val; /* @simple_misc_analysis_phase on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @simple_misc_analysis_phase");
fprintf(stderr, " (%s:%d)\n", "src/simple_misc_analysis.nit", 29);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method simple_misc_analysis#ToolContext#simple_misc_analysis_phase for (self: Object): Phase */
val* VIRTUAL_simple_misc_analysis__ToolContext__simple_misc_analysis_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = simple_misc_analysis__ToolContext__simple_misc_analysis_phase(self);
var = var1;
RET_LABEL:;
return var;
}
/* method simple_misc_analysis#ToolContext#simple_misc_analysis_phase= for (self: ToolContext, Phase) */
void simple_misc_analysis__ToolContext__simple_misc_analysis_phase_61d(val* self, val* p0) {
self->attrs[COLOR_simple_misc_analysis__ToolContext___64dsimple_misc_analysis_phase].val = p0; /* @simple_misc_analysis_phase on <self:ToolContext> */
RET_LABEL:;
}
/* method simple_misc_analysis#ToolContext#simple_misc_analysis_phase= for (self: Object, Phase) */
void VIRTUAL_simple_misc_analysis__ToolContext__simple_misc_analysis_phase_61d(val* self, val* p0) {
simple_misc_analysis__ToolContext__simple_misc_analysis_phase_61d(self, p0);
RET_LABEL:;
}
/* method simple_misc_analysis#SimpleMiscAnalysisPhase#process_nmodule for (self: SimpleMiscAnalysisPhase, AModule) */
void simple_misc_analysis__SimpleMiscAnalysisPhase__process_nmodule(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
val* var /* : ToolContext */;
var_nmodule = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_phase__Phase__toolcontext]))(self) /* toolcontext on <self:SimpleMiscAnalysisPhase>*/;
((void (*)(val*, val*))(var_nmodule->class->vft[COLOR_simple_misc_analysis__AModule__do_simple_misc_analysis]))(var_nmodule, var) /* do_simple_misc_analysis on <var_nmodule:AModule>*/;
RET_LABEL:;
}
/* method simple_misc_analysis#SimpleMiscAnalysisPhase#process_nmodule for (self: Object, AModule) */
void VIRTUAL_simple_misc_analysis__SimpleMiscAnalysisPhase__process_nmodule(val* self, val* p0) {
simple_misc_analysis__SimpleMiscAnalysisPhase__process_nmodule(self, p0);
RET_LABEL:;
}
/* method simple_misc_analysis#AModule#do_simple_misc_analysis for (self: AModule, ToolContext) */
void simple_misc_analysis__AModule__do_simple_misc_analysis(val* self, val* p0) {
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var /* : SimpleMiscVisitor */;
val* var_v /* var v: SimpleMiscVisitor */;
var_toolcontext = p0;
var = NEW_simple_misc_analysis__SimpleMiscVisitor(&type_simple_misc_analysis__SimpleMiscVisitor);
((void (*)(val*, val*))(var->class->vft[COLOR_simple_misc_analysis__SimpleMiscVisitor__init]))(var, var_toolcontext) /* init on <var:SimpleMiscVisitor>*/;
var_v = var;
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, self) /* enter_visit on <var_v:SimpleMiscVisitor>*/;
RET_LABEL:;
}
/* method simple_misc_analysis#AModule#do_simple_misc_analysis for (self: Object, ToolContext) */
void VIRTUAL_simple_misc_analysis__AModule__do_simple_misc_analysis(val* self, val* p0) {
simple_misc_analysis__AModule__do_simple_misc_analysis(self, p0);
RET_LABEL:;
}
/* method simple_misc_analysis#SimpleMiscVisitor#visit for (self: SimpleMiscVisitor, ANode) */
void simple_misc_analysis__SimpleMiscVisitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
var_n = p0;
((void (*)(val*, val*))(var_n->class->vft[COLOR_simple_misc_analysis__ANode__accept_simple_misc]))(var_n, self) /* accept_simple_misc on <var_n:ANode>*/;
RET_LABEL:;
}
/* method simple_misc_analysis#SimpleMiscVisitor#visit for (self: Object, ANode) */
void VIRTUAL_simple_misc_analysis__SimpleMiscVisitor__visit(val* self, val* p0) {
simple_misc_analysis__SimpleMiscVisitor__visit(self, p0);
RET_LABEL:;
}
/* method simple_misc_analysis#SimpleMiscVisitor#once_count for (self: SimpleMiscVisitor): Int */
long simple_misc_analysis__SimpleMiscVisitor__once_count(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_simple_misc_analysis__SimpleMiscVisitor___64donce_count].l; /* @once_count on <self:SimpleMiscVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method simple_misc_analysis#SimpleMiscVisitor#once_count for (self: Object): Int */
long VIRTUAL_simple_misc_analysis__SimpleMiscVisitor__once_count(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = simple_misc_analysis__SimpleMiscVisitor__once_count(self);
var = var1;
RET_LABEL:;
return var;
}
/* method simple_misc_analysis#SimpleMiscVisitor#once_count= for (self: SimpleMiscVisitor, Int) */
void simple_misc_analysis__SimpleMiscVisitor__once_count_61d(val* self, long p0) {
self->attrs[COLOR_simple_misc_analysis__SimpleMiscVisitor___64donce_count].l = p0; /* @once_count on <self:SimpleMiscVisitor> */
RET_LABEL:;
}
/* method simple_misc_analysis#SimpleMiscVisitor#once_count= for (self: Object, Int) */
void VIRTUAL_simple_misc_analysis__SimpleMiscVisitor__once_count_61d(val* self, long p0) {
simple_misc_analysis__SimpleMiscVisitor__once_count_61d(self, p0);
RET_LABEL:;
}
/* method simple_misc_analysis#SimpleMiscVisitor#toolcontext for (self: SimpleMiscVisitor): ToolContext */
val* simple_misc_analysis__SimpleMiscVisitor__toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_simple_misc_analysis__SimpleMiscVisitor___64dtoolcontext].val; /* @toolcontext on <self:SimpleMiscVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @toolcontext");
fprintf(stderr, " (%s:%d)\n", "src/simple_misc_analysis.nit", 57);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method simple_misc_analysis#SimpleMiscVisitor#toolcontext for (self: Object): ToolContext */
val* VIRTUAL_simple_misc_analysis__SimpleMiscVisitor__toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = simple_misc_analysis__SimpleMiscVisitor__toolcontext(self);
var = var1;
RET_LABEL:;
return var;
}
/* method simple_misc_analysis#SimpleMiscVisitor#toolcontext= for (self: SimpleMiscVisitor, ToolContext) */
void simple_misc_analysis__SimpleMiscVisitor__toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_simple_misc_analysis__SimpleMiscVisitor___64dtoolcontext].val = p0; /* @toolcontext on <self:SimpleMiscVisitor> */
RET_LABEL:;
}
/* method simple_misc_analysis#SimpleMiscVisitor#toolcontext= for (self: Object, ToolContext) */
void VIRTUAL_simple_misc_analysis__SimpleMiscVisitor__toolcontext_61d(val* self, val* p0) {
simple_misc_analysis__SimpleMiscVisitor__toolcontext_61d(self, p0);
RET_LABEL:;
}
/* method simple_misc_analysis#SimpleMiscVisitor#warning for (self: SimpleMiscVisitor, ANode, String) */
void simple_misc_analysis__SimpleMiscVisitor__warning(val* self, val* p0, val* p1) {
val* var_node /* var node: ANode */;
val* var_msg /* var msg: String */;
val* var /* : ToolContext */;
val* var1 /* : Location */;
var_node = p0;
var_msg = p1;
var = ((val* (*)(val*))(self->class->vft[COLOR_simple_misc_analysis__SimpleMiscVisitor__toolcontext]))(self) /* toolcontext on <self:SimpleMiscVisitor>*/;
var1 = ((val* (*)(val*))(var_node->class->vft[COLOR_parser_nodes__ANode__hot_location]))(var_node) /* hot_location on <var_node:ANode>*/;
((void (*)(val*, val*, val*))(var->class->vft[COLOR_toolcontext__ToolContext__warning]))(var, var1, var_msg) /* warning on <var:ToolContext>*/;
RET_LABEL:;
}
/* method simple_misc_analysis#SimpleMiscVisitor#warning for (self: Object, ANode, String) */
void VIRTUAL_simple_misc_analysis__SimpleMiscVisitor__warning(val* self, val* p0, val* p1) {
simple_misc_analysis__SimpleMiscVisitor__warning(self, p0, p1);
RET_LABEL:;
}
/* method simple_misc_analysis#SimpleMiscVisitor#init for (self: SimpleMiscVisitor, ToolContext) */
void simple_misc_analysis__SimpleMiscVisitor__init(val* self, val* p0) {
val* var_toolcontext /* var toolcontext: ToolContext */;
var_toolcontext = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Visitor__init]))(self) /* init on <self:SimpleMiscVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_simple_misc_analysis__SimpleMiscVisitor__toolcontext_61d]))(self, var_toolcontext) /* toolcontext= on <self:SimpleMiscVisitor>*/;
RET_LABEL:;
}
/* method simple_misc_analysis#SimpleMiscVisitor#init for (self: Object, ToolContext) */
void VIRTUAL_simple_misc_analysis__SimpleMiscVisitor__init(val* self, val* p0) {
simple_misc_analysis__SimpleMiscVisitor__init(self, p0);
RET_LABEL:;
}
/* method simple_misc_analysis#ANode#accept_simple_misc for (self: ANode, SimpleMiscVisitor) */
void simple_misc_analysis__ANode__accept_simple_misc(val* self, val* p0) {
val* var_v /* var v: SimpleMiscVisitor */;
var_v = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__ANode__visit_all]))(self, var_v) /* visit_all on <self:ANode>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_simple_misc_analysis__ANode__after_simple_misc]))(self, var_v) /* after_simple_misc on <self:ANode>*/;
RET_LABEL:;
}
/* method simple_misc_analysis#ANode#accept_simple_misc for (self: Object, SimpleMiscVisitor) */
void VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc(val* self, val* p0) {
simple_misc_analysis__ANode__accept_simple_misc(self, p0);
RET_LABEL:;
}
/* method simple_misc_analysis#ANode#after_simple_misc for (self: ANode, SimpleMiscVisitor) */
void simple_misc_analysis__ANode__after_simple_misc(val* self, val* p0) {
val* var_v /* var v: SimpleMiscVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method simple_misc_analysis#ANode#after_simple_misc for (self: Object, SimpleMiscVisitor) */
void VIRTUAL_simple_misc_analysis__ANode__after_simple_misc(val* self, val* p0) {
simple_misc_analysis__ANode__after_simple_misc(self, p0);
RET_LABEL:;
}
/* method simple_misc_analysis#ASignature#after_simple_misc for (self: ASignature, SimpleMiscVisitor) */
void simple_misc_analysis__ASignature__after_simple_misc(val* self, val* p0) {
val* var_v /* var v: SimpleMiscVisitor */;
short int var /* : Bool */;
val* var1 /* : nullable TOpar */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var_ /* var : Bool */;
val* var4 /* : ANodes[AParam] */;
short int var5 /* : Bool */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
var_v = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ASignature__n_opar]))(self) /* n_opar on <self:ASignature>*/;
var2 = NULL;
if (var1 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
var_ = var3;
if (var3){
var4 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ASignature__n_params]))(self) /* n_params on <self:ASignature>*/;
var5 = ((short int (*)(val*))(var4->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var4) /* is_empty on <var4:ANodes[AParam]>*/;
var = var5;
} else {
var = var_;
}
if (var){
if (varonce) {
var6 = varonce;
} else {
var7 = "Warning: superfluous parentheses.";
var8 = 33;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_simple_misc_analysis__SimpleMiscVisitor__warning]))(var_v, self, var6) /* warning on <var_v:SimpleMiscVisitor>*/;
} else {
}
RET_LABEL:;
}
/* method simple_misc_analysis#ASignature#after_simple_misc for (self: Object, SimpleMiscVisitor) */
void VIRTUAL_simple_misc_analysis__ASignature__after_simple_misc(val* self, val* p0) {
simple_misc_analysis__ASignature__after_simple_misc(self, p0);
RET_LABEL:;
}
/* method simple_misc_analysis#AExpr#warn_parentheses for (self: AExpr, SimpleMiscVisitor) */
void simple_misc_analysis__AExpr__warn_parentheses(val* self, val* p0) {
val* var_v /* var v: SimpleMiscVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method simple_misc_analysis#AExpr#warn_parentheses for (self: Object, SimpleMiscVisitor) */
void VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses(val* self, val* p0) {
simple_misc_analysis__AExpr__warn_parentheses(self, p0);
RET_LABEL:;
}
/* method simple_misc_analysis#AParExpr#warn_parentheses for (self: AParExpr, SimpleMiscVisitor) */
void simple_misc_analysis__AParExpr__warn_parentheses(val* self, val* p0) {
val* var_v /* var v: SimpleMiscVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : String */;
var_v = p0;
if (varonce) {
var = varonce;
} else {
var1 = "Warning: superfluous parentheses.";
var2 = 33;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_simple_misc_analysis__SimpleMiscVisitor__warning]))(var_v, self, var) /* warning on <var_v:SimpleMiscVisitor>*/;
RET_LABEL:;
}
/* method simple_misc_analysis#AParExpr#warn_parentheses for (self: Object, SimpleMiscVisitor) */
void VIRTUAL_simple_misc_analysis__AParExpr__warn_parentheses(val* self, val* p0) {
simple_misc_analysis__AParExpr__warn_parentheses(self, p0);
RET_LABEL:;
}
/* method simple_misc_analysis#AParExprs#after_simple_misc for (self: AParExprs, SimpleMiscVisitor) */
void simple_misc_analysis__AParExprs__after_simple_misc(val* self, val* p0) {
val* var_v /* var v: SimpleMiscVisitor */;
val* var /* : ANodes[AExpr] */;
short int var1 /* : Bool */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AExprs__n_exprs]))(self) /* n_exprs on <self:AParExprs>*/;
var1 = ((short int (*)(val*))(var->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var) /* is_empty on <var:ANodes[AExpr]>*/;
if (var1){
if (varonce) {
var2 = varonce;
} else {
var3 = "Warning: superfluous parentheses.";
var4 = 33;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_simple_misc_analysis__SimpleMiscVisitor__warning]))(var_v, self, var2) /* warning on <var_v:SimpleMiscVisitor>*/;
} else {
}
RET_LABEL:;
}
/* method simple_misc_analysis#AParExprs#after_simple_misc for (self: Object, SimpleMiscVisitor) */
void VIRTUAL_simple_misc_analysis__AParExprs__after_simple_misc(val* self, val* p0) {
simple_misc_analysis__AParExprs__after_simple_misc(self, p0);
RET_LABEL:;
}
/* method simple_misc_analysis#AReturnExpr#after_simple_misc for (self: AReturnExpr, SimpleMiscVisitor) */
void simple_misc_analysis__AReturnExpr__after_simple_misc(val* self, val* p0) {
val* var_v /* var v: SimpleMiscVisitor */;
val* var /* : nullable AExpr */;
val* var_e /* var e: nullable AExpr */;
val* var1 /* : null */;
short int var2 /* : Bool */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AReturnExpr__n_expr]))(self) /* n_expr on <self:AReturnExpr>*/;
var_e = var;
var1 = NULL;
if (var_e == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (var2){
((void (*)(val*, val*))(var_e->class->vft[COLOR_simple_misc_analysis__AExpr__warn_parentheses]))(var_e, var_v) /* warn_parentheses on <var_e:nullable AExpr(AExpr)>*/;
} else {
}
RET_LABEL:;
}
/* method simple_misc_analysis#AReturnExpr#after_simple_misc for (self: Object, SimpleMiscVisitor) */
void VIRTUAL_simple_misc_analysis__AReturnExpr__after_simple_misc(val* self, val* p0) {
simple_misc_analysis__AReturnExpr__after_simple_misc(self, p0);
RET_LABEL:;
}
/* method simple_misc_analysis#AContinueExpr#after_simple_misc for (self: AContinueExpr, SimpleMiscVisitor) */
void simple_misc_analysis__AContinueExpr__after_simple_misc(val* self, val* p0) {
val* var_v /* var v: SimpleMiscVisitor */;
val* var /* : nullable AExpr */;
val* var_e /* var e: nullable AExpr */;
val* var1 /* : null */;
short int var2 /* : Bool */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AContinueExpr__n_expr]))(self) /* n_expr on <self:AContinueExpr>*/;
var_e = var;
var1 = NULL;
if (var_e == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (var2){
((void (*)(val*, val*))(var_e->class->vft[COLOR_simple_misc_analysis__AExpr__warn_parentheses]))(var_e, var_v) /* warn_parentheses on <var_e:nullable AExpr(AExpr)>*/;
} else {
}
RET_LABEL:;
}
/* method simple_misc_analysis#AContinueExpr#after_simple_misc for (self: Object, SimpleMiscVisitor) */
void VIRTUAL_simple_misc_analysis__AContinueExpr__after_simple_misc(val* self, val* p0) {
simple_misc_analysis__AContinueExpr__after_simple_misc(self, p0);
RET_LABEL:;
}
/* method simple_misc_analysis#ABreakExpr#after_simple_misc for (self: ABreakExpr, SimpleMiscVisitor) */
void simple_misc_analysis__ABreakExpr__after_simple_misc(val* self, val* p0) {
val* var_v /* var v: SimpleMiscVisitor */;
val* var /* : nullable AExpr */;
val* var_e /* var e: nullable AExpr */;
val* var1 /* : null */;
short int var2 /* : Bool */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ABreakExpr__n_expr]))(self) /* n_expr on <self:ABreakExpr>*/;
var_e = var;
var1 = NULL;
if (var_e == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (var2){
((void (*)(val*, val*))(var_e->class->vft[COLOR_simple_misc_analysis__AExpr__warn_parentheses]))(var_e, var_v) /* warn_parentheses on <var_e:nullable AExpr(AExpr)>*/;
} else {
}
RET_LABEL:;
}
/* method simple_misc_analysis#ABreakExpr#after_simple_misc for (self: Object, SimpleMiscVisitor) */
void VIRTUAL_simple_misc_analysis__ABreakExpr__after_simple_misc(val* self, val* p0) {
simple_misc_analysis__ABreakExpr__after_simple_misc(self, p0);
RET_LABEL:;
}
/* method simple_misc_analysis#AWhileExpr#after_simple_misc for (self: AWhileExpr, SimpleMiscVisitor) */
void simple_misc_analysis__AWhileExpr__after_simple_misc(val* self, val* p0) {
val* var_v /* var v: SimpleMiscVisitor */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
val* var6 /* : AExpr */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AWhileExpr__n_expr]))(self) /* n_expr on <self:AWhileExpr>*/;
/* <var:AExpr> isa ATrueExpr */
cltype = type_parser_nodes__ATrueExpr.color;
idtype = type_parser_nodes__ATrueExpr.id;
if(cltype >= var->type->table_size) {
var1 = 0;
} else {
var1 = var->type->type_table[cltype] == idtype;
}
if (var1){
if (varonce) {
var2 = varonce;
} else {
var3 = "Warning: use \'loop\' instead of \'while true do\'.";
var4 = 47;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_simple_misc_analysis__SimpleMiscVisitor__warning]))(var_v, self, var2) /* warning on <var_v:SimpleMiscVisitor>*/;
} else {
var6 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AWhileExpr__n_expr]))(self) /* n_expr on <self:AWhileExpr>*/;
((void (*)(val*, val*))(var6->class->vft[COLOR_simple_misc_analysis__AExpr__warn_parentheses]))(var6, var_v) /* warn_parentheses on <var6:AExpr>*/;
}
RET_LABEL:;
}
/* method simple_misc_analysis#AWhileExpr#after_simple_misc for (self: Object, SimpleMiscVisitor) */
void VIRTUAL_simple_misc_analysis__AWhileExpr__after_simple_misc(val* self, val* p0) {
simple_misc_analysis__AWhileExpr__after_simple_misc(self, p0);
RET_LABEL:;
}
/* method simple_misc_analysis#AForExpr#after_simple_misc for (self: AForExpr, SimpleMiscVisitor) */
void simple_misc_analysis__AForExpr__after_simple_misc(val* self, val* p0) {
val* var_v /* var v: SimpleMiscVisitor */;
val* var /* : AExpr */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AForExpr__n_expr]))(self) /* n_expr on <self:AForExpr>*/;
((void (*)(val*, val*))(var->class->vft[COLOR_simple_misc_analysis__AExpr__warn_parentheses]))(var, var_v) /* warn_parentheses on <var:AExpr>*/;
RET_LABEL:;
}
/* method simple_misc_analysis#AForExpr#after_simple_misc for (self: Object, SimpleMiscVisitor) */
void VIRTUAL_simple_misc_analysis__AForExpr__after_simple_misc(val* self, val* p0) {
simple_misc_analysis__AForExpr__after_simple_misc(self, p0);
RET_LABEL:;
}
/* method simple_misc_analysis#AIfExpr#after_simple_misc for (self: AIfExpr, SimpleMiscVisitor) */
void simple_misc_analysis__AIfExpr__after_simple_misc(val* self, val* p0) {
val* var_v /* var v: SimpleMiscVisitor */;
val* var /* : AExpr */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AIfExpr__n_expr]))(self) /* n_expr on <self:AIfExpr>*/;
((void (*)(val*, val*))(var->class->vft[COLOR_simple_misc_analysis__AExpr__warn_parentheses]))(var, var_v) /* warn_parentheses on <var:AExpr>*/;
RET_LABEL:;
}
/* method simple_misc_analysis#AIfExpr#after_simple_misc for (self: Object, SimpleMiscVisitor) */
void VIRTUAL_simple_misc_analysis__AIfExpr__after_simple_misc(val* self, val* p0) {
simple_misc_analysis__AIfExpr__after_simple_misc(self, p0);
RET_LABEL:;
}
/* method simple_misc_analysis#AIfexprExpr#after_simple_misc for (self: AIfexprExpr, SimpleMiscVisitor) */
void simple_misc_analysis__AIfexprExpr__after_simple_misc(val* self, val* p0) {
val* var_v /* var v: SimpleMiscVisitor */;
val* var /* : AExpr */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AIfexprExpr__n_expr]))(self) /* n_expr on <self:AIfexprExpr>*/;
((void (*)(val*, val*))(var->class->vft[COLOR_simple_misc_analysis__AExpr__warn_parentheses]))(var, var_v) /* warn_parentheses on <var:AExpr>*/;
RET_LABEL:;
}
/* method simple_misc_analysis#AIfexprExpr#after_simple_misc for (self: Object, SimpleMiscVisitor) */
void VIRTUAL_simple_misc_analysis__AIfexprExpr__after_simple_misc(val* self, val* p0) {
simple_misc_analysis__AIfexprExpr__after_simple_misc(self, p0);
RET_LABEL:;
}
/* method simple_misc_analysis#AOnceExpr#accept_simple_misc for (self: AOnceExpr, SimpleMiscVisitor) */
void simple_misc_analysis__AOnceExpr__accept_simple_misc(val* self, val* p0) {
val* var_v /* var v: SimpleMiscVisitor */;
long var /* : Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
long var10 /* : Int */;
long var11 /* : Int */;
long var12 /* : Int */;
long var14 /* : Int */;
long var15 /* : Int */;
long var16 /* : Int */;
long var17 /* : Int */;
long var19 /* : Int */;
var_v = p0;
var = ((long (*)(val*))(var_v->class->vft[COLOR_simple_misc_analysis__SimpleMiscVisitor__once_count]))(var_v) /* once_count on <var_v:SimpleMiscVisitor>*/;
var1 = 0;
{ /* Inline kernel#Int#> (var,var1) */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (!var4) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 263);
show_backtrace(1);
}
var5 = var > var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
if (var2){
if (varonce) {
var6 = varonce;
} else {
var7 = "Useless once in a once expression.";
var8 = 34;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_simple_misc_analysis__SimpleMiscVisitor__warning]))(var_v, self, var6) /* warning on <var_v:SimpleMiscVisitor>*/;
} else {
}
var10 = ((long (*)(val*))(var_v->class->vft[COLOR_simple_misc_analysis__SimpleMiscVisitor__once_count]))(var_v) /* once_count on <var_v:SimpleMiscVisitor>*/;
var11 = 1;
{ /* Inline kernel#Int#+ (var10,var11) */
var14 = var10 + var11;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
((void (*)(val*, long))(var_v->class->vft[COLOR_simple_misc_analysis__SimpleMiscVisitor__once_count_61d]))(var_v, var12) /* once_count= on <var_v:SimpleMiscVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_simple_misc_analysis__AOnceExpr__accept_simple_misc]))(self, p0) /* accept_simple_misc on <self:AOnceExpr>*/;
var15 = ((long (*)(val*))(var_v->class->vft[COLOR_simple_misc_analysis__SimpleMiscVisitor__once_count]))(var_v) /* once_count on <var_v:SimpleMiscVisitor>*/;
var16 = 1;
{ /* Inline kernel#Int#- (var15,var16) */
var19 = var15 - var16;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
((void (*)(val*, long))(var_v->class->vft[COLOR_simple_misc_analysis__SimpleMiscVisitor__once_count_61d]))(var_v, var17) /* once_count= on <var_v:SimpleMiscVisitor>*/;
RET_LABEL:;
}
/* method simple_misc_analysis#AOnceExpr#accept_simple_misc for (self: Object, SimpleMiscVisitor) */
void VIRTUAL_simple_misc_analysis__AOnceExpr__accept_simple_misc(val* self, val* p0) {
simple_misc_analysis__AOnceExpr__accept_simple_misc(self, p0);
RET_LABEL:;
}
