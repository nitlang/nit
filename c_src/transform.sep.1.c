#include "transform.sep.0.h"
/* method transform#TransformPhase#process_npropdef for (self: TransformPhase, APropdef) */
void transform__TransformPhase__process_npropdef(val* self, val* p0) {
val* var_npropdef /* var npropdef: APropdef */;
val* var /* : TransformVisitor */;
val* var_v /* var v: TransformVisitor */;
val* var1 /* : ASTValidationVisitor */;
val* var_val /* var val: nullable Object */;
var_npropdef = p0;
var = NEW_transform__TransformVisitor(&type_transform__TransformVisitor);
{
transform__TransformVisitor__init(var, self, var_npropdef); /* Direct call transform#TransformVisitor#init on <var:TransformVisitor>*/
}
var_v = var;
{
parser_nodes__Visitor__enter_visit(var_v, var_npropdef); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:TransformVisitor>*/
}
var1 = NEW_astvalidation__ASTValidationVisitor(&type_astvalidation__ASTValidationVisitor);
{
{ /* Inline parser_nodes#Visitor#init (var1) on <var1:ASTValidationVisitor> */
RET_LABEL2:(void)0;
}
}
var_val = var1;
{
parser_nodes__Visitor__enter_visit(var_val, var_npropdef); /* Direct call parser_nodes#Visitor#enter_visit on <var_val:nullable Object(ASTValidationVisitor)>*/
}
RET_LABEL:;
}
/* method transform#TransformPhase#process_npropdef for (self: Object, APropdef) */
void VIRTUAL_transform__TransformPhase__process_npropdef(val* self, val* p0) {
transform__TransformPhase__process_npropdef(self, p0); /* Direct call transform#TransformPhase#process_npropdef on <self:Object(TransformPhase)>*/
RET_LABEL:;
}
/* method transform#TransformVisitor#phase= for (self: TransformVisitor, TransformPhase) */
void transform__TransformVisitor__phase_61d(val* self, val* p0) {
self->attrs[COLOR_transform__TransformVisitor___phase].val = p0; /* _phase on <self:TransformVisitor> */
RET_LABEL:;
}
/* method transform#TransformVisitor#phase= for (self: Object, TransformPhase) */
void VIRTUAL_transform__TransformVisitor__phase_61d(val* self, val* p0) {
{ /* Inline transform#TransformVisitor#phase= (self,p0) on <self:Object(TransformVisitor)> */
self->attrs[COLOR_transform__TransformVisitor___phase].val = p0; /* _phase on <self:Object(TransformVisitor)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method transform#TransformVisitor#mmodule for (self: TransformVisitor): MModule */
val* transform__TransformVisitor__mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_transform__TransformVisitor___mmodule].val; /* _mmodule on <self:TransformVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 46);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method transform#TransformVisitor#mmodule for (self: Object): MModule */
val* VIRTUAL_transform__TransformVisitor__mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
val* var3 /* : MModule */;
{ /* Inline transform#TransformVisitor#mmodule (self) on <self:Object(TransformVisitor)> */
var3 = self->attrs[COLOR_transform__TransformVisitor___mmodule].val; /* _mmodule on <self:Object(TransformVisitor)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 46);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method transform#TransformVisitor#mmodule= for (self: TransformVisitor, MModule) */
void transform__TransformVisitor__mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_transform__TransformVisitor___mmodule].val = p0; /* _mmodule on <self:TransformVisitor> */
RET_LABEL:;
}
/* method transform#TransformVisitor#mmodule= for (self: Object, MModule) */
void VIRTUAL_transform__TransformVisitor__mmodule_61d(val* self, val* p0) {
{ /* Inline transform#TransformVisitor#mmodule= (self,p0) on <self:Object(TransformVisitor)> */
self->attrs[COLOR_transform__TransformVisitor___mmodule].val = p0; /* _mmodule on <self:Object(TransformVisitor)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method transform#TransformVisitor#mclassdef for (self: TransformVisitor): MClassDef */
val* transform__TransformVisitor__mclassdef(val* self) {
val* var /* : MClassDef */;
val* var1 /* : MClassDef */;
var1 = self->attrs[COLOR_transform__TransformVisitor___mclassdef].val; /* _mclassdef on <self:TransformVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 47);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method transform#TransformVisitor#mclassdef for (self: Object): MClassDef */
val* VIRTUAL_transform__TransformVisitor__mclassdef(val* self) {
val* var /* : MClassDef */;
val* var1 /* : MClassDef */;
val* var3 /* : MClassDef */;
{ /* Inline transform#TransformVisitor#mclassdef (self) on <self:Object(TransformVisitor)> */
var3 = self->attrs[COLOR_transform__TransformVisitor___mclassdef].val; /* _mclassdef on <self:Object(TransformVisitor)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 47);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method transform#TransformVisitor#mclassdef= for (self: TransformVisitor, MClassDef) */
void transform__TransformVisitor__mclassdef_61d(val* self, val* p0) {
self->attrs[COLOR_transform__TransformVisitor___mclassdef].val = p0; /* _mclassdef on <self:TransformVisitor> */
RET_LABEL:;
}
/* method transform#TransformVisitor#mclassdef= for (self: Object, MClassDef) */
void VIRTUAL_transform__TransformVisitor__mclassdef_61d(val* self, val* p0) {
{ /* Inline transform#TransformVisitor#mclassdef= (self,p0) on <self:Object(TransformVisitor)> */
self->attrs[COLOR_transform__TransformVisitor___mclassdef].val = p0; /* _mclassdef on <self:Object(TransformVisitor)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method transform#TransformVisitor#mpropdef for (self: TransformVisitor): MPropDef */
val* transform__TransformVisitor__mpropdef(val* self) {
val* var /* : MPropDef */;
val* var1 /* : MPropDef */;
var1 = self->attrs[COLOR_transform__TransformVisitor___mpropdef].val; /* _mpropdef on <self:TransformVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 48);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method transform#TransformVisitor#mpropdef for (self: Object): MPropDef */
val* VIRTUAL_transform__TransformVisitor__mpropdef(val* self) {
val* var /* : MPropDef */;
val* var1 /* : MPropDef */;
val* var3 /* : MPropDef */;
{ /* Inline transform#TransformVisitor#mpropdef (self) on <self:Object(TransformVisitor)> */
var3 = self->attrs[COLOR_transform__TransformVisitor___mpropdef].val; /* _mpropdef on <self:Object(TransformVisitor)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 48);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method transform#TransformVisitor#mpropdef= for (self: TransformVisitor, MPropDef) */
void transform__TransformVisitor__mpropdef_61d(val* self, val* p0) {
self->attrs[COLOR_transform__TransformVisitor___mpropdef].val = p0; /* _mpropdef on <self:TransformVisitor> */
RET_LABEL:;
}
/* method transform#TransformVisitor#mpropdef= for (self: Object, MPropDef) */
void VIRTUAL_transform__TransformVisitor__mpropdef_61d(val* self, val* p0) {
{ /* Inline transform#TransformVisitor#mpropdef= (self,p0) on <self:Object(TransformVisitor)> */
self->attrs[COLOR_transform__TransformVisitor___mpropdef].val = p0; /* _mpropdef on <self:Object(TransformVisitor)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method transform#TransformVisitor#builder for (self: TransformVisitor): ASTBuilder */
val* transform__TransformVisitor__builder(val* self) {
val* var /* : ASTBuilder */;
val* var1 /* : ASTBuilder */;
var1 = self->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <self:TransformVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 49);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method transform#TransformVisitor#builder for (self: Object): ASTBuilder */
val* VIRTUAL_transform__TransformVisitor__builder(val* self) {
val* var /* : ASTBuilder */;
val* var1 /* : ASTBuilder */;
val* var3 /* : ASTBuilder */;
{ /* Inline transform#TransformVisitor#builder (self) on <self:Object(TransformVisitor)> */
var3 = self->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <self:Object(TransformVisitor)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 49);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method transform#TransformVisitor#builder= for (self: TransformVisitor, ASTBuilder) */
void transform__TransformVisitor__builder_61d(val* self, val* p0) {
self->attrs[COLOR_transform__TransformVisitor___builder].val = p0; /* _builder on <self:TransformVisitor> */
RET_LABEL:;
}
/* method transform#TransformVisitor#builder= for (self: Object, ASTBuilder) */
void VIRTUAL_transform__TransformVisitor__builder_61d(val* self, val* p0) {
{ /* Inline transform#TransformVisitor#builder= (self,p0) on <self:Object(TransformVisitor)> */
self->attrs[COLOR_transform__TransformVisitor___builder].val = p0; /* _builder on <self:Object(TransformVisitor)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method transform#TransformVisitor#init for (self: TransformVisitor, TransformPhase, APropdef) */
void transform__TransformVisitor__init(val* self, val* p0, val* p1) {
val* var_phase /* var phase: TransformPhase */;
val* var_npropdef /* var npropdef: APropdef */;
val* var /* : nullable MPropDef */;
val* var4 /* : nullable MPropDef */;
val* var6 /* : MPropDef */;
val* var8 /* : MPropDef */;
val* var9 /* : MClassDef */;
val* var11 /* : MClassDef */;
val* var13 /* : MClassDef */;
val* var15 /* : MClassDef */;
val* var16 /* : MModule */;
val* var18 /* : MModule */;
val* var20 /* : ASTBuilder */;
val* var21 /* : MModule */;
val* var23 /* : MModule */;
val* var24 /* : MPropDef */;
val* var26 /* : MPropDef */;
val* var27 /* : MClassDef */;
val* var29 /* : MClassDef */;
val* var30 /* : MClassType */;
val* var32 /* : MClassType */;
{
{ /* Inline parser_nodes#Visitor#init (self) on <self:TransformVisitor> */
RET_LABEL1:(void)0;
}
}
var_phase = p0;
var_npropdef = p1;
{
{ /* Inline transform#TransformVisitor#phase= (self,var_phase) on <self:TransformVisitor> */
self->attrs[COLOR_transform__TransformVisitor___phase].val = var_phase; /* _phase on <self:TransformVisitor> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:APropdef> */
var4 = var_npropdef->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:APropdef> */
var = var4;
RET_LABEL3:(void)0;
}
}
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 54);
show_backtrace(1);
}
{
{ /* Inline transform#TransformVisitor#mpropdef= (self,var) on <self:TransformVisitor> */
self->attrs[COLOR_transform__TransformVisitor___mpropdef].val = var; /* _mpropdef on <self:TransformVisitor> */
RET_LABEL5:(void)0;
}
}
{
{ /* Inline transform#TransformVisitor#mpropdef (self) on <self:TransformVisitor> */
var8 = self->attrs[COLOR_transform__TransformVisitor___mpropdef].val; /* _mpropdef on <self:TransformVisitor> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 48);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var6) on <var6:MPropDef> */
var11 = var6->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var6:MPropDef> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline transform#TransformVisitor#mclassdef= (self,var9) on <self:TransformVisitor> */
self->attrs[COLOR_transform__TransformVisitor___mclassdef].val = var9; /* _mclassdef on <self:TransformVisitor> */
RET_LABEL12:(void)0;
}
}
{
{ /* Inline transform#TransformVisitor#mclassdef (self) on <self:TransformVisitor> */
var15 = self->attrs[COLOR_transform__TransformVisitor___mclassdef].val; /* _mclassdef on <self:TransformVisitor> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 47);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var13) on <var13:MClassDef> */
var18 = var13->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var13:MClassDef> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 471);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline transform#TransformVisitor#mmodule= (self,var16) on <self:TransformVisitor> */
self->attrs[COLOR_transform__TransformVisitor___mmodule].val = var16; /* _mmodule on <self:TransformVisitor> */
RET_LABEL19:(void)0;
}
}
var20 = NEW_astbuilder__ASTBuilder(&type_astbuilder__ASTBuilder);
{
{ /* Inline transform#TransformVisitor#mmodule (self) on <self:TransformVisitor> */
var23 = self->attrs[COLOR_transform__TransformVisitor___mmodule].val; /* _mmodule on <self:TransformVisitor> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 46);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline transform#TransformVisitor#mpropdef (self) on <self:TransformVisitor> */
var26 = self->attrs[COLOR_transform__TransformVisitor___mpropdef].val; /* _mpropdef on <self:TransformVisitor> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 48);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var24) on <var24:MPropDef> */
var29 = var24->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var24:MPropDef> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var27) on <var27:MClassDef> */
var32 = var27->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var27:MClassDef> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline astbuilder#ASTBuilder#init (var20,var21,var30) on <var20:ASTBuilder> */
var20->attrs[COLOR_astbuilder__ASTBuilder___mmodule].val = var21; /* _mmodule on <var20:ASTBuilder> */
var20->attrs[COLOR_astbuilder__ASTBuilder___anchor].val = var30; /* _anchor on <var20:ASTBuilder> */
RET_LABEL33:(void)0;
}
}
{
{ /* Inline transform#TransformVisitor#builder= (self,var20) on <self:TransformVisitor> */
self->attrs[COLOR_transform__TransformVisitor___builder].val = var20; /* _builder on <self:TransformVisitor> */
RET_LABEL34:(void)0;
}
}
RET_LABEL:;
}
/* method transform#TransformVisitor#init for (self: Object, TransformPhase, APropdef) */
void VIRTUAL_transform__TransformVisitor__init(val* self, val* p0, val* p1) {
transform__TransformVisitor__init(self, p0, p1); /* Direct call transform#TransformVisitor#init on <self:Object(TransformVisitor)>*/
RET_LABEL:;
}
/* method transform#TransformVisitor#visit for (self: TransformVisitor, ANode) */
void transform__TransformVisitor__visit(val* self, val* p0) {
val* var_node /* var node: ANode */;
short int var /* : Bool */;
int cltype;
int idtype;
var_node = p0;
/* <var_node:ANode> isa AAnnotations */
cltype = type_parser_nodes__AAnnotations.color;
idtype = type_parser_nodes__AAnnotations.id;
if(cltype >= var_node->type->table_size) {
var = 0;
} else {
var = var_node->type->type_table[cltype] == idtype;
}
if (var){
goto RET_LABEL;
} else {
}
{
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__visit_all]))(var_node, self) /* visit_all on <var_node:ANode>*/;
}
{
((void (*)(val*, val*))(var_node->class->vft[COLOR_transform__ANode__accept_transform_visitor]))(var_node, self) /* accept_transform_visitor on <var_node:ANode>*/;
}
RET_LABEL:;
}
/* method transform#TransformVisitor#visit for (self: Object, ANode) */
void VIRTUAL_transform__TransformVisitor__visit(val* self, val* p0) {
transform__TransformVisitor__visit(self, p0); /* Direct call transform#TransformVisitor#visit on <self:Object(TransformVisitor)>*/
RET_LABEL:;
}
/* method transform#ANode#accept_transform_visitor for (self: ANode, TransformVisitor) */
void transform__ANode__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method transform#ANode#accept_transform_visitor for (self: Object, TransformVisitor) */
void VIRTUAL_transform__ANode__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
{ /* Inline transform#ANode#accept_transform_visitor (self,p0) on <self:Object(ANode)> */
var_v = p0;
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method transform#AVardeclExpr#accept_transform_visitor for (self: AVardeclExpr, TransformVisitor) */
void transform__AVardeclExpr__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
val* var /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
val* var1 /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : ASTBuilder */;
val* var10 /* : ASTBuilder */;
val* var11 /* : nullable Variable */;
val* var13 /* : nullable Variable */;
val* var14 /* : AVarAssignExpr */;
val* var_nvar /* var nvar: AVarAssignExpr */;
var_v = p0;
{
var = parser_nodes__AVardeclExpr__n_expr(self);
}
var_nexpr = var;
var1 = NULL;
if (var_nexpr == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nexpr,var1) on <var_nexpr:nullable AExpr> */
var_other = var1;
{
{ /* Inline kernel#Object#is_same_instance (var_nexpr,var_other) on <var_nexpr:nullable AExpr(AExpr)> */
var7 = var_nexpr == var_other;
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
} else {
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var10 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 49);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline scope#AVardeclExpr#variable (self) on <self:AVardeclExpr> */
var13 = self->attrs[COLOR_scope__AVardeclExpr___variable].val; /* _variable on <self:AVardeclExpr> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 100);
show_backtrace(1);
}
{
var14 = astbuilder__ASTBuilder__make_var_assign(var8, var11, var_nexpr);
}
var_nvar = var14;
{
parser_nodes__Prod__replace_with(self, var_nvar); /* Direct call parser_nodes#Prod#replace_with on <self:AVardeclExpr>*/
}
}
RET_LABEL:;
}
/* method transform#AVardeclExpr#accept_transform_visitor for (self: Object, TransformVisitor) */
void VIRTUAL_transform__AVardeclExpr__accept_transform_visitor(val* self, val* p0) {
transform__AVardeclExpr__accept_transform_visitor(self, p0); /* Direct call transform#AVardeclExpr#accept_transform_visitor on <self:Object(AVardeclExpr)>*/
RET_LABEL:;
}
/* method transform#AIfexprExpr#accept_transform_visitor for (self: AIfexprExpr, TransformVisitor) */
void transform__AIfexprExpr__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
val* var /* : ASTBuilder */;
val* var2 /* : ASTBuilder */;
val* var3 /* : AExpr */;
val* var4 /* : nullable MType */;
val* var6 /* : nullable MType */;
val* var7 /* : AIfExpr */;
val* var_nif /* var nif: AIfExpr */;
val* var8 /* : nullable AExpr */;
val* var9 /* : AExpr */;
val* var10 /* : nullable AExpr */;
val* var11 /* : AExpr */;
var_v = p0;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var2 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 49);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = parser_nodes__AIfexprExpr__n_expr(self);
}
{
{ /* Inline typing#AExpr#mtype (self) on <self:AIfexprExpr> */
var6 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:AIfexprExpr> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = astbuilder__ASTBuilder__make_if(var, var3, var4);
}
var_nif = var7;
{
var8 = parser_nodes__AIfExpr__n_then(var_nif);
}
{
var9 = parser_nodes__AIfexprExpr__n_then(self);
}
if (var8 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 113);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var8->class->vft[COLOR_astbuilder__AExpr__add]))(var8, var9) /* add on <var8:nullable AExpr>*/;
}
{
var10 = parser_nodes__AIfExpr__n_else(var_nif);
}
{
var11 = parser_nodes__AIfexprExpr__n_else(self);
}
if (var10 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 114);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var10->class->vft[COLOR_astbuilder__AExpr__add]))(var10, var11) /* add on <var10:nullable AExpr>*/;
}
{
parser_nodes__Prod__replace_with(self, var_nif); /* Direct call parser_nodes#Prod#replace_with on <self:AIfexprExpr>*/
}
RET_LABEL:;
}
/* method transform#AIfexprExpr#accept_transform_visitor for (self: Object, TransformVisitor) */
void VIRTUAL_transform__AIfexprExpr__accept_transform_visitor(val* self, val* p0) {
transform__AIfexprExpr__accept_transform_visitor(self, p0); /* Direct call transform#AIfexprExpr#accept_transform_visitor on <self:Object(AIfexprExpr)>*/
RET_LABEL:;
}
/* method transform#AOrExpr#accept_transform_visitor for (self: AOrExpr, TransformVisitor) */
void transform__AOrExpr__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
val* var /* : ASTBuilder */;
val* var2 /* : ASTBuilder */;
val* var3 /* : AExpr */;
val* var4 /* : nullable MType */;
val* var6 /* : nullable MType */;
val* var7 /* : AIfExpr */;
val* var_nif /* var nif: AIfExpr */;
val* var8 /* : nullable AExpr */;
val* var9 /* : AExpr */;
val* var10 /* : AVarExpr */;
val* var11 /* : nullable AExpr */;
val* var12 /* : AExpr */;
var_v = p0;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var2 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 49);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = parser_nodes__AOrExpr__n_expr(self);
}
{
{ /* Inline typing#AExpr#mtype (self) on <self:AOrExpr> */
var6 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:AOrExpr> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = astbuilder__ASTBuilder__make_if(var, var3, var4);
}
var_nif = var7;
{
var8 = parser_nodes__AIfExpr__n_then(var_nif);
}
{
var9 = parser_nodes__AOrExpr__n_expr(self);
}
{
var10 = astbuilder__AExpr__make_var_read(var9);
}
if (var8 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 125);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var8->class->vft[COLOR_astbuilder__AExpr__add]))(var8, var10) /* add on <var8:nullable AExpr>*/;
}
{
var11 = parser_nodes__AIfExpr__n_else(var_nif);
}
{
var12 = parser_nodes__AOrExpr__n_expr2(self);
}
if (var11 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 126);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var11->class->vft[COLOR_astbuilder__AExpr__add]))(var11, var12) /* add on <var11:nullable AExpr>*/;
}
{
parser_nodes__Prod__replace_with(self, var_nif); /* Direct call parser_nodes#Prod#replace_with on <self:AOrExpr>*/
}
RET_LABEL:;
}
/* method transform#AOrExpr#accept_transform_visitor for (self: Object, TransformVisitor) */
void VIRTUAL_transform__AOrExpr__accept_transform_visitor(val* self, val* p0) {
transform__AOrExpr__accept_transform_visitor(self, p0); /* Direct call transform#AOrExpr#accept_transform_visitor on <self:Object(AOrExpr)>*/
RET_LABEL:;
}
/* method transform#AImpliesExpr#accept_transform_visitor for (self: AImpliesExpr, TransformVisitor) */
void transform__AImpliesExpr__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method transform#AImpliesExpr#accept_transform_visitor for (self: Object, TransformVisitor) */
void VIRTUAL_transform__AImpliesExpr__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
{ /* Inline transform#AImpliesExpr#accept_transform_visitor (self,p0) on <self:Object(AImpliesExpr)> */
var_v = p0;
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method transform#AAndExpr#accept_transform_visitor for (self: AAndExpr, TransformVisitor) */
void transform__AAndExpr__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
val* var /* : ASTBuilder */;
val* var2 /* : ASTBuilder */;
val* var3 /* : AExpr */;
val* var4 /* : nullable MType */;
val* var6 /* : nullable MType */;
val* var7 /* : AIfExpr */;
val* var_nif /* var nif: AIfExpr */;
val* var8 /* : nullable AExpr */;
val* var9 /* : AExpr */;
val* var10 /* : nullable AExpr */;
val* var11 /* : AExpr */;
val* var12 /* : AVarExpr */;
var_v = p0;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var2 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 49);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = parser_nodes__AAndExpr__n_expr(self);
}
{
{ /* Inline typing#AExpr#mtype (self) on <self:AAndExpr> */
var6 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:AAndExpr> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = astbuilder__ASTBuilder__make_if(var, var3, var4);
}
var_nif = var7;
{
var8 = parser_nodes__AIfExpr__n_then(var_nif);
}
{
var9 = parser_nodes__AAndExpr__n_expr2(self);
}
if (var8 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 144);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var8->class->vft[COLOR_astbuilder__AExpr__add]))(var8, var9) /* add on <var8:nullable AExpr>*/;
}
{
var10 = parser_nodes__AIfExpr__n_else(var_nif);
}
{
var11 = parser_nodes__AAndExpr__n_expr(self);
}
{
var12 = astbuilder__AExpr__make_var_read(var11);
}
if (var10 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 145);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var10->class->vft[COLOR_astbuilder__AExpr__add]))(var10, var12) /* add on <var10:nullable AExpr>*/;
}
{
parser_nodes__Prod__replace_with(self, var_nif); /* Direct call parser_nodes#Prod#replace_with on <self:AAndExpr>*/
}
RET_LABEL:;
}
/* method transform#AAndExpr#accept_transform_visitor for (self: Object, TransformVisitor) */
void VIRTUAL_transform__AAndExpr__accept_transform_visitor(val* self, val* p0) {
transform__AAndExpr__accept_transform_visitor(self, p0); /* Direct call transform#AAndExpr#accept_transform_visitor on <self:Object(AAndExpr)>*/
RET_LABEL:;
}
/* method transform#AWhileExpr#accept_transform_visitor for (self: AWhileExpr, TransformVisitor) */
void transform__AWhileExpr__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method transform#AWhileExpr#accept_transform_visitor for (self: Object, TransformVisitor) */
void VIRTUAL_transform__AWhileExpr__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
{ /* Inline transform#AWhileExpr#accept_transform_visitor (self,p0) on <self:Object(AWhileExpr)> */
var_v = p0;
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method transform#AForExpr#accept_transform_visitor for (self: AForExpr, TransformVisitor) */
void transform__AForExpr__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method transform#AForExpr#accept_transform_visitor for (self: Object, TransformVisitor) */
void VIRTUAL_transform__AForExpr__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
{ /* Inline transform#AForExpr#accept_transform_visitor (self,p0) on <self:Object(AForExpr)> */
var_v = p0;
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method transform#AArrayExpr#accept_transform_visitor for (self: AArrayExpr, TransformVisitor) */
void transform__AArrayExpr__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
val* var /* : ASTBuilder */;
val* var2 /* : ASTBuilder */;
val* var3 /* : ABlockExpr */;
val* var_nblock /* var nblock: ABlockExpr */;
val* var4 /* : ASTBuilder */;
val* var6 /* : ASTBuilder */;
val* var7 /* : nullable CallSite */;
val* var9 /* : nullable CallSite */;
val* var10 /* : Array[AIntExpr] */;
long var11 /* : Int */;
val* var_ /* var : Array[AIntExpr] */;
val* var12 /* : ASTBuilder */;
val* var14 /* : ASTBuilder */;
val* var15 /* : AExprs */;
val* var16 /* : ANodes[AExpr] */;
val* var18 /* : ANodes[AExpr] */;
long var19 /* : Int */;
val* var20 /* : AIntExpr */;
val* var21 /* : ANewExpr */;
val* var_nnew /* var nnew: ANewExpr */;
val* var22 /* : AExprs */;
val* var23 /* : ANodes[AExpr] */;
val* var25 /* : ANodes[AExpr] */;
val* var26 /* : Iterator[ANode] */;
short int var27 /* : Bool */;
val* var28 /* : nullable Object */;
val* var_nexpr /* var nexpr: AExpr */;
val* var29 /* : ASTBuilder */;
val* var31 /* : ASTBuilder */;
val* var32 /* : AVarExpr */;
val* var33 /* : nullable CallSite */;
val* var35 /* : nullable CallSite */;
val* var36 /* : Array[AExpr] */;
long var37 /* : Int */;
val* var_38 /* var : Array[AExpr] */;
val* var39 /* : ACallExpr */;
val* var_nadd /* var nadd: ACallExpr */;
val* var40 /* : AVarExpr */;
val* var_nres /* var nres: AVarExpr */;
var_v = p0;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var2 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 49);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = astbuilder__ASTBuilder__make_block(var);
}
var_nblock = var3;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var6 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 49);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline typing#AArrayExpr#with_capacity_callsite (self) on <self:AArrayExpr> */
var9 = self->attrs[COLOR_typing__AArrayExpr___with_capacity_callsite].val; /* _with_capacity_callsite on <self:AArrayExpr> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 176);
show_backtrace(1);
}
var10 = NEW_array__Array(&type_array__Arrayparser_nodes__AIntExpr);
var11 = 1;
{
array__Array__with_capacity(var10, var11); /* Direct call array#Array#with_capacity on <var10:Array[AIntExpr]>*/
}
var_ = var10;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var14 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 49);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = parser_nodes__AArrayExpr__n_exprs(self);
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var15) on <var15:AExprs> */
var18 = var15->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var15:AExprs> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2274);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = parser_nodes__ANodes__length(var16);
}
{
var20 = astbuilder__ASTBuilder__make_int(var12, var19);
}
{
array__AbstractArray__push(var_, var20); /* Direct call array#AbstractArray#push on <var_:Array[AIntExpr]>*/
}
{
var21 = astbuilder__ASTBuilder__make_new(var4, var7, var_);
}
var_nnew = var21;
{
astbuilder__ABlockExpr__add(var_nblock, var_nnew); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
{
var22 = parser_nodes__AArrayExpr__n_exprs(self);
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var22) on <var22:AExprs> */
var25 = var22->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var22:AExprs> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2274);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = parser_nodes__ANodes__iterator(var23);
}
for(;;) {
{
var27 = ((short int (*)(val*))(var26->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var26) /* is_ok on <var26:Iterator[ANode]>*/;
}
if(!var27) break;
{
var28 = ((val* (*)(val*))(var26->class->vft[COLOR_abstract_collection__Iterator__item]))(var26) /* item on <var26:Iterator[ANode]>*/;
}
var_nexpr = var28;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var31 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 49);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
var32 = astbuilder__AExpr__make_var_read(var_nnew);
}
{
{ /* Inline typing#AArrayExpr#push_callsite (self) on <self:AArrayExpr> */
var35 = self->attrs[COLOR_typing__AArrayExpr___push_callsite].val; /* _push_callsite on <self:AArrayExpr> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 180);
show_backtrace(1);
}
var36 = NEW_array__Array(&type_array__Arrayparser_nodes__AExpr);
var37 = 1;
{
array__Array__with_capacity(var36, var37); /* Direct call array#Array#with_capacity on <var36:Array[AExpr]>*/
}
var_38 = var36;
{
array__AbstractArray__push(var_38, var_nexpr); /* Direct call array#AbstractArray#push on <var_38:Array[AExpr]>*/
}
{
var39 = astbuilder__ASTBuilder__make_call(var29, var32, var33, var_38);
}
var_nadd = var39;
{
astbuilder__ABlockExpr__add(var_nblock, var_nadd); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var26->class->vft[COLOR_abstract_collection__Iterator__next]))(var26) /* next on <var26:Iterator[ANode]>*/;
}
}
BREAK_label: (void)0;
{
var40 = astbuilder__AExpr__make_var_read(var_nnew);
}
var_nres = var40;
{
astbuilder__ABlockExpr__add(var_nblock, var_nres); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
{
parser_nodes__Prod__replace_with(self, var_nblock); /* Direct call parser_nodes#Prod#replace_with on <self:AArrayExpr>*/
}
RET_LABEL:;
}
/* method transform#AArrayExpr#accept_transform_visitor for (self: Object, TransformVisitor) */
void VIRTUAL_transform__AArrayExpr__accept_transform_visitor(val* self, val* p0) {
transform__AArrayExpr__accept_transform_visitor(self, p0); /* Direct call transform#AArrayExpr#accept_transform_visitor on <self:Object(AArrayExpr)>*/
RET_LABEL:;
}
/* method transform#ACrangeExpr#accept_transform_visitor for (self: ACrangeExpr, TransformVisitor) */
void transform__ACrangeExpr__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
val* var /* : ASTBuilder */;
val* var2 /* : ASTBuilder */;
val* var3 /* : nullable CallSite */;
val* var5 /* : nullable CallSite */;
val* var6 /* : Array[AExpr] */;
long var7 /* : Int */;
val* var_ /* var : Array[AExpr] */;
val* var8 /* : AExpr */;
val* var9 /* : AExpr */;
val* var10 /* : ANewExpr */;
var_v = p0;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var2 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 49);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline typing#ARangeExpr#init_callsite (self) on <self:ACrangeExpr> */
var5 = self->attrs[COLOR_typing__ARangeExpr___init_callsite].val; /* _init_callsite on <self:ACrangeExpr> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 194);
show_backtrace(1);
}
var6 = NEW_array__Array(&type_array__Arrayparser_nodes__AExpr);
var7 = 2;
{
array__Array__with_capacity(var6, var7); /* Direct call array#Array#with_capacity on <var6:Array[AExpr]>*/
}
var_ = var6;
{
var8 = parser_nodes__ARangeExpr__n_expr(self);
}
{
array__AbstractArray__push(var_, var8); /* Direct call array#AbstractArray#push on <var_:Array[AExpr]>*/
}
{
var9 = parser_nodes__ARangeExpr__n_expr2(self);
}
{
array__AbstractArray__push(var_, var9); /* Direct call array#AbstractArray#push on <var_:Array[AExpr]>*/
}
{
var10 = astbuilder__ASTBuilder__make_new(var, var3, var_);
}
{
parser_nodes__Prod__replace_with(self, var10); /* Direct call parser_nodes#Prod#replace_with on <self:ACrangeExpr>*/
}
RET_LABEL:;
}
/* method transform#ACrangeExpr#accept_transform_visitor for (self: Object, TransformVisitor) */
void VIRTUAL_transform__ACrangeExpr__accept_transform_visitor(val* self, val* p0) {
transform__ACrangeExpr__accept_transform_visitor(self, p0); /* Direct call transform#ACrangeExpr#accept_transform_visitor on <self:Object(ACrangeExpr)>*/
RET_LABEL:;
}
/* method transform#AOrangeExpr#accept_transform_visitor for (self: AOrangeExpr, TransformVisitor) */
void transform__AOrangeExpr__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
val* var /* : ASTBuilder */;
val* var2 /* : ASTBuilder */;
val* var3 /* : nullable CallSite */;
val* var5 /* : nullable CallSite */;
val* var6 /* : Array[AExpr] */;
long var7 /* : Int */;
val* var_ /* var : Array[AExpr] */;
val* var8 /* : AExpr */;
val* var9 /* : AExpr */;
val* var10 /* : ANewExpr */;
var_v = p0;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var2 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 49);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline typing#ARangeExpr#init_callsite (self) on <self:AOrangeExpr> */
var5 = self->attrs[COLOR_typing__ARangeExpr___init_callsite].val; /* _init_callsite on <self:AOrangeExpr> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 202);
show_backtrace(1);
}
var6 = NEW_array__Array(&type_array__Arrayparser_nodes__AExpr);
var7 = 2;
{
array__Array__with_capacity(var6, var7); /* Direct call array#Array#with_capacity on <var6:Array[AExpr]>*/
}
var_ = var6;
{
var8 = parser_nodes__ARangeExpr__n_expr(self);
}
{
array__AbstractArray__push(var_, var8); /* Direct call array#AbstractArray#push on <var_:Array[AExpr]>*/
}
{
var9 = parser_nodes__ARangeExpr__n_expr2(self);
}
{
array__AbstractArray__push(var_, var9); /* Direct call array#AbstractArray#push on <var_:Array[AExpr]>*/
}
{
var10 = astbuilder__ASTBuilder__make_new(var, var3, var_);
}
{
parser_nodes__Prod__replace_with(self, var10); /* Direct call parser_nodes#Prod#replace_with on <self:AOrangeExpr>*/
}
RET_LABEL:;
}
/* method transform#AOrangeExpr#accept_transform_visitor for (self: Object, TransformVisitor) */
void VIRTUAL_transform__AOrangeExpr__accept_transform_visitor(val* self, val* p0) {
transform__AOrangeExpr__accept_transform_visitor(self, p0); /* Direct call transform#AOrangeExpr#accept_transform_visitor on <self:Object(AOrangeExpr)>*/
RET_LABEL:;
}
/* method transform#AParExpr#accept_transform_visitor for (self: AParExpr, TransformVisitor) */
void transform__AParExpr__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
val* var /* : AExpr */;
var_v = p0;
{
var = parser_nodes__AProxyExpr__n_expr(self);
}
{
parser_nodes__Prod__replace_with(self, var); /* Direct call parser_nodes#Prod#replace_with on <self:AParExpr>*/
}
RET_LABEL:;
}
/* method transform#AParExpr#accept_transform_visitor for (self: Object, TransformVisitor) */
void VIRTUAL_transform__AParExpr__accept_transform_visitor(val* self, val* p0) {
transform__AParExpr__accept_transform_visitor(self, p0); /* Direct call transform#AParExpr#accept_transform_visitor on <self:Object(AParExpr)>*/
RET_LABEL:;
}
/* method transform#ASendReassignFormExpr#accept_transform_visitor for (self: ASendReassignFormExpr, TransformVisitor) */
void transform__ASendReassignFormExpr__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
val* var /* : ASTBuilder */;
val* var2 /* : ASTBuilder */;
val* var3 /* : ABlockExpr */;
val* var_nblock /* var nblock: ABlockExpr */;
val* var4 /* : AExpr */;
val* var5 /* : Array[AExpr] */;
val* var_read_args /* var read_args: Array[AExpr] */;
val* var6 /* : Array[AExpr] */;
val* var_write_args /* var write_args: Array[AExpr] */;
val* var7 /* : Array[AExpr] */;
val* var8 /* : ArrayIterator[nullable Object] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_a /* var a: AExpr */;
val* var11 /* : AVarExpr */;
val* var12 /* : AVarExpr */;
val* var13 /* : ASTBuilder */;
val* var15 /* : ASTBuilder */;
val* var16 /* : AExpr */;
val* var17 /* : AVarExpr */;
val* var18 /* : nullable CallSite */;
val* var20 /* : nullable CallSite */;
val* var21 /* : ACallExpr */;
val* var_nread /* var nread: ACallExpr */;
val* var22 /* : ASTBuilder */;
val* var24 /* : ASTBuilder */;
val* var25 /* : nullable CallSite */;
val* var27 /* : nullable CallSite */;
val* var28 /* : Array[AExpr] */;
long var29 /* : Int */;
val* var_ /* var : Array[AExpr] */;
val* var30 /* : AExpr */;
val* var31 /* : ACallExpr */;
val* var_nnewvalue /* var nnewvalue: ACallExpr */;
val* var32 /* : ASTBuilder */;
val* var34 /* : ASTBuilder */;
val* var35 /* : AExpr */;
val* var36 /* : AVarExpr */;
val* var37 /* : nullable CallSite */;
val* var39 /* : nullable CallSite */;
val* var40 /* : ACallExpr */;
val* var_nwrite /* var nwrite: ACallExpr */;
var_v = p0;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var2 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 49);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = astbuilder__ASTBuilder__make_block(var);
}
var_nblock = var3;
{
var4 = parser_nodes__ASendExpr__n_expr(self);
}
{
astbuilder__ABlockExpr__add(var_nblock, var4); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
var5 = NEW_array__Array(&type_array__Arrayparser_nodes__AExpr);
{
array__Array__init(var5); /* Direct call array#Array#init on <var5:Array[AExpr]>*/
}
var_read_args = var5;
var6 = NEW_array__Array(&type_array__Arrayparser_nodes__AExpr);
{
array__Array__init(var6); /* Direct call array#Array#init on <var6:Array[AExpr]>*/
}
var_write_args = var6;
{
var7 = typing__ASendExpr__raw_arguments(self);
}
{
var8 = array__AbstractArrayRead__iterator(var7);
}
for(;;) {
{
var9 = array__ArrayIterator__is_ok(var8);
}
if(!var9) break;
{
var10 = array__ArrayIterator__item(var8);
}
var_a = var10;
{
astbuilder__ABlockExpr__add(var_nblock, var_a); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
{
var11 = astbuilder__AExpr__make_var_read(var_a);
}
{
array__Array__add(var_read_args, var11); /* Direct call array#Array#add on <var_read_args:Array[AExpr]>*/
}
{
var12 = astbuilder__AExpr__make_var_read(var_a);
}
{
array__Array__add(var_write_args, var12); /* Direct call array#Array#add on <var_write_args:Array[AExpr]>*/
}
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var8); /* Direct call array#ArrayIterator#next on <var8:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var15 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 49);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = parser_nodes__ASendExpr__n_expr(self);
}
{
var17 = astbuilder__AExpr__make_var_read(var16);
}
{
{ /* Inline typing#ASendExpr#callsite (self) on <self:ASendReassignFormExpr> */
var20 = self->attrs[COLOR_typing__ASendExpr___callsite].val; /* _callsite on <self:ASendReassignFormExpr> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 235);
show_backtrace(1);
}
{
var21 = astbuilder__ASTBuilder__make_call(var13, var17, var18, var_read_args);
}
var_nread = var21;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var24 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 49);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline typing#AReassignFormExpr#reassign_callsite (self) on <self:ASendReassignFormExpr> */
var27 = self->attrs[COLOR_typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:ASendReassignFormExpr> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 237);
show_backtrace(1);
}
var28 = NEW_array__Array(&type_array__Arrayparser_nodes__AExpr);
var29 = 1;
{
array__Array__with_capacity(var28, var29); /* Direct call array#Array#with_capacity on <var28:Array[AExpr]>*/
}
var_ = var28;
{
var30 = parser_nodes__AReassignFormExpr__n_value(self);
}
{
array__AbstractArray__push(var_, var30); /* Direct call array#AbstractArray#push on <var_:Array[AExpr]>*/
}
{
var31 = astbuilder__ASTBuilder__make_call(var22, var_nread, var25, var_);
}
var_nnewvalue = var31;
{
array__Array__add(var_write_args, var_nnewvalue); /* Direct call array#Array#add on <var_write_args:Array[AExpr]>*/
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var34 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 49);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
var35 = parser_nodes__ASendExpr__n_expr(self);
}
{
var36 = astbuilder__AExpr__make_var_read(var35);
}
{
{ /* Inline typing#ASendReassignFormExpr#write_callsite (self) on <self:ASendReassignFormExpr> */
var39 = self->attrs[COLOR_typing__ASendReassignFormExpr___write_callsite].val; /* _write_callsite on <self:ASendReassignFormExpr> */
var37 = var39;
RET_LABEL38:(void)0;
}
}
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 240);
show_backtrace(1);
}
{
var40 = astbuilder__ASTBuilder__make_call(var32, var36, var37, var_write_args);
}
var_nwrite = var40;
{
astbuilder__ABlockExpr__add(var_nblock, var_nwrite); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
{
parser_nodes__Prod__replace_with(self, var_nblock); /* Direct call parser_nodes#Prod#replace_with on <self:ASendReassignFormExpr>*/
}
RET_LABEL:;
}
/* method transform#ASendReassignFormExpr#accept_transform_visitor for (self: Object, TransformVisitor) */
void VIRTUAL_transform__ASendReassignFormExpr__accept_transform_visitor(val* self, val* p0) {
transform__ASendReassignFormExpr__accept_transform_visitor(self, p0); /* Direct call transform#ASendReassignFormExpr#accept_transform_visitor on <self:Object(ASendReassignFormExpr)>*/
RET_LABEL:;
}
/* method transform#AVarReassignExpr#accept_transform_visitor for (self: AVarReassignExpr, TransformVisitor) */
void transform__AVarReassignExpr__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
val* var /* : nullable Variable */;
val* var2 /* : nullable Variable */;
val* var_variable /* var variable: Variable */;
val* var3 /* : ASTBuilder */;
val* var5 /* : ASTBuilder */;
val* var6 /* : nullable MType */;
val* var8 /* : nullable MType */;
val* var9 /* : AVarExpr */;
val* var_nread /* var nread: AVarExpr */;
val* var10 /* : ASTBuilder */;
val* var12 /* : ASTBuilder */;
val* var13 /* : nullable CallSite */;
val* var15 /* : nullable CallSite */;
val* var16 /* : Array[AExpr] */;
long var17 /* : Int */;
val* var_ /* var : Array[AExpr] */;
val* var18 /* : AExpr */;
val* var19 /* : ACallExpr */;
val* var_nnewvalue /* var nnewvalue: ACallExpr */;
val* var20 /* : ASTBuilder */;
val* var22 /* : ASTBuilder */;
val* var23 /* : AVarAssignExpr */;
val* var_nwrite /* var nwrite: AVarAssignExpr */;
var_v = p0;
{
{ /* Inline scope#AVarFormExpr#variable (self) on <self:AVarReassignExpr> */
var2 = self->attrs[COLOR_scope__AVarFormExpr___variable].val; /* _variable on <self:AVarReassignExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 251);
show_backtrace(1);
}
var_variable = var;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var5 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 49);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline typing#AReassignFormExpr#read_type (self) on <self:AVarReassignExpr> */
var8 = self->attrs[COLOR_typing__AReassignFormExpr___read_type].val; /* _read_type on <self:AVarReassignExpr> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 253);
show_backtrace(1);
}
{
var9 = astbuilder__ASTBuilder__make_var_read(var3, var_variable, var6);
}
var_nread = var9;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var12 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 49);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline typing#AReassignFormExpr#reassign_callsite (self) on <self:AVarReassignExpr> */
var15 = self->attrs[COLOR_typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:AVarReassignExpr> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 255);
show_backtrace(1);
}
var16 = NEW_array__Array(&type_array__Arrayparser_nodes__AExpr);
var17 = 1;
{
array__Array__with_capacity(var16, var17); /* Direct call array#Array#with_capacity on <var16:Array[AExpr]>*/
}
var_ = var16;
{
var18 = parser_nodes__AReassignFormExpr__n_value(self);
}
{
array__AbstractArray__push(var_, var18); /* Direct call array#AbstractArray#push on <var_:Array[AExpr]>*/
}
{
var19 = astbuilder__ASTBuilder__make_call(var10, var_nread, var13, var_);
}
var_nnewvalue = var19;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var22 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 49);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = astbuilder__ASTBuilder__make_var_assign(var20, var_variable, var_nnewvalue);
}
var_nwrite = var23;
{
parser_nodes__Prod__replace_with(self, var_nwrite); /* Direct call parser_nodes#Prod#replace_with on <self:AVarReassignExpr>*/
}
RET_LABEL:;
}
/* method transform#AVarReassignExpr#accept_transform_visitor for (self: Object, TransformVisitor) */
void VIRTUAL_transform__AVarReassignExpr__accept_transform_visitor(val* self, val* p0) {
transform__AVarReassignExpr__accept_transform_visitor(self, p0); /* Direct call transform#AVarReassignExpr#accept_transform_visitor on <self:Object(AVarReassignExpr)>*/
RET_LABEL:;
}
/* method transform#AAttrReassignExpr#accept_transform_visitor for (self: AAttrReassignExpr, TransformVisitor) */
void transform__AAttrReassignExpr__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
val* var /* : ASTBuilder */;
val* var2 /* : ASTBuilder */;
val* var3 /* : ABlockExpr */;
val* var_nblock /* var nblock: ABlockExpr */;
val* var4 /* : AExpr */;
val* var5 /* : nullable MAttribute */;
val* var7 /* : nullable MAttribute */;
val* var_attribute /* var attribute: MAttribute */;
val* var8 /* : ASTBuilder */;
val* var10 /* : ASTBuilder */;
val* var11 /* : AExpr */;
val* var12 /* : AVarExpr */;
val* var13 /* : AAttrExpr */;
val* var_nread /* var nread: AAttrExpr */;
val* var14 /* : ASTBuilder */;
val* var16 /* : ASTBuilder */;
val* var17 /* : nullable CallSite */;
val* var19 /* : nullable CallSite */;
val* var20 /* : Array[AExpr] */;
long var21 /* : Int */;
val* var_ /* var : Array[AExpr] */;
val* var22 /* : AExpr */;
val* var23 /* : ACallExpr */;
val* var_nnewvalue /* var nnewvalue: ACallExpr */;
val* var24 /* : ASTBuilder */;
val* var26 /* : ASTBuilder */;
val* var27 /* : AExpr */;
val* var28 /* : AVarExpr */;
val* var29 /* : AAttrAssignExpr */;
val* var_nwrite /* var nwrite: AAttrAssignExpr */;
var_v = p0;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var2 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 49);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = astbuilder__ASTBuilder__make_block(var);
}
var_nblock = var3;
{
var4 = parser_nodes__AAttrFormExpr__n_expr(self);
}
{
astbuilder__ABlockExpr__add(var_nblock, var4); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
{
{ /* Inline typing#AAttrFormExpr#mproperty (self) on <self:AAttrReassignExpr> */
var7 = self->attrs[COLOR_typing__AAttrFormExpr___mproperty].val; /* _mproperty on <self:AAttrReassignExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 268);
show_backtrace(1);
}
var_attribute = var5;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var10 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 49);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = parser_nodes__AAttrFormExpr__n_expr(self);
}
{
var12 = astbuilder__AExpr__make_var_read(var11);
}
{
var13 = astbuilder__ASTBuilder__make_attr_read(var8, var12, var_attribute);
}
var_nread = var13;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var16 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 49);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline typing#AReassignFormExpr#reassign_callsite (self) on <self:AAttrReassignExpr> */
var19 = self->attrs[COLOR_typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:AAttrReassignExpr> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 271);
show_backtrace(1);
}
var20 = NEW_array__Array(&type_array__Arrayparser_nodes__AExpr);
var21 = 1;
{
array__Array__with_capacity(var20, var21); /* Direct call array#Array#with_capacity on <var20:Array[AExpr]>*/
}
var_ = var20;
{
var22 = parser_nodes__AReassignFormExpr__n_value(self);
}
{
array__AbstractArray__push(var_, var22); /* Direct call array#AbstractArray#push on <var_:Array[AExpr]>*/
}
{
var23 = astbuilder__ASTBuilder__make_call(var14, var_nread, var17, var_);
}
var_nnewvalue = var23;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var26 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "src/transform.nit", 49);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
var27 = parser_nodes__AAttrFormExpr__n_expr(self);
}
{
var28 = astbuilder__AExpr__make_var_read(var27);
}
{
var29 = astbuilder__ASTBuilder__make_attr_assign(var24, var28, var_attribute, var_nnewvalue);
}
var_nwrite = var29;
{
astbuilder__ABlockExpr__add(var_nblock, var_nwrite); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
{
parser_nodes__Prod__replace_with(self, var_nblock); /* Direct call parser_nodes#Prod#replace_with on <self:AAttrReassignExpr>*/
}
RET_LABEL:;
}
/* method transform#AAttrReassignExpr#accept_transform_visitor for (self: Object, TransformVisitor) */
void VIRTUAL_transform__AAttrReassignExpr__accept_transform_visitor(val* self, val* p0) {
transform__AAttrReassignExpr__accept_transform_visitor(self, p0); /* Direct call transform#AAttrReassignExpr#accept_transform_visitor on <self:Object(AAttrReassignExpr)>*/
RET_LABEL:;
}
