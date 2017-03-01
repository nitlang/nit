#include "nitc__astbuilder.sep.0.h"
/* method astbuilder$ASTBuilder$mmodule for (self: ASTBuilder): MModule */
val* nitc___nitc__ASTBuilder___mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_nitc__astbuilder__ASTBuilder___mmodule].val; /* _mmodule on <self:ASTBuilder> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__astbuilder, 25);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method astbuilder$ASTBuilder$mmodule= for (self: ASTBuilder, MModule) */
void nitc___nitc__ASTBuilder___mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__astbuilder__ASTBuilder___mmodule].val = p0; /* _mmodule on <self:ASTBuilder> */
RET_LABEL:;
}
/* method astbuilder$ASTBuilder$anchor for (self: ASTBuilder): nullable MClassType */
val* nitc___nitc__ASTBuilder___anchor(val* self) {
val* var /* : nullable MClassType */;
val* var1 /* : nullable MClassType */;
var1 = self->attrs[COLOR_nitc__astbuilder__ASTBuilder___anchor].val; /* _anchor on <self:ASTBuilder> */
var = var1;
RET_LABEL:;
return var;
}
/* method astbuilder$ASTBuilder$anchor= for (self: ASTBuilder, nullable MClassType) */
void nitc___nitc__ASTBuilder___anchor_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__astbuilder__ASTBuilder___anchor].val = p0; /* _anchor on <self:ASTBuilder> */
RET_LABEL:;
}
/* method astbuilder$ASTBuilder$make_int for (self: ASTBuilder, Int): AIntegerExpr */
val* nitc___nitc__ASTBuilder___make_int(val* self, long p0) {
val* var /* : AIntegerExpr */;
long var_value /* var value: Int */;
val* var1 /* : AIntegerExpr */;
val* var2 /* : MModule */;
val* var4 /* : MModule */;
val* var5 /* : MClassType */;
var_value = p0;
var1 = NEW_nitc__AIntegerExpr(&type_nitc__AIntegerExpr);
{
{ /* Inline astbuilder$ASTBuilder$mmodule (self) on <self:ASTBuilder> */
var4 = self->attrs[COLOR_nitc__astbuilder__ASTBuilder___mmodule].val; /* _mmodule on <self:ASTBuilder> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__astbuilder, 25);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = nitc__model___MModule___int_type(var2);
}
{
nitc__astbuilder___AIntegerExpr___make(var1, var_value, var5); /* Direct call astbuilder$AIntegerExpr$make on <var1:AIntegerExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder$ASTBuilder$make_new for (self: ASTBuilder, CallSite, nullable Array[AExpr]): ANewExpr */
val* nitc___nitc__ASTBuilder___make_new(val* self, val* p0, val* p1) {
val* var /* : ANewExpr */;
val* var_callsite /* var callsite: CallSite */;
val* var_args /* var args: nullable Array[AExpr] */;
val* var1 /* : ANewExpr */;
var_callsite = p0;
var_args = p1;
var1 = NEW_nitc__ANewExpr(&type_nitc__ANewExpr);
{
nitc__astbuilder___ANewExpr___make(var1, var_callsite, var_args); /* Direct call astbuilder$ANewExpr$make on <var1:ANewExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder$ASTBuilder$make_call for (self: ASTBuilder, AExpr, CallSite, nullable Array[AExpr]): ACallExpr */
val* nitc___nitc__ASTBuilder___make_call(val* self, val* p0, val* p1, val* p2) {
val* var /* : ACallExpr */;
val* var_recv /* var recv: AExpr */;
val* var_callsite /* var callsite: CallSite */;
val* var_args /* var args: nullable Array[AExpr] */;
val* var1 /* : ACallExpr */;
var_recv = p0;
var_callsite = p1;
var_args = p2;
var1 = NEW_nitc__ACallExpr(&type_nitc__ACallExpr);
{
nitc__astbuilder___ACallExpr___make(var1, var_recv, var_callsite, var_args); /* Direct call astbuilder$ACallExpr$make on <var1:ACallExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder$ASTBuilder$make_block for (self: ASTBuilder): ABlockExpr */
val* nitc___nitc__ASTBuilder___make_block(val* self) {
val* var /* : ABlockExpr */;
val* var1 /* : ABlockExpr */;
var1 = NEW_nitc__ABlockExpr(&type_nitc__ABlockExpr);
{
nitc__astbuilder___ABlockExpr___make(var1); /* Direct call astbuilder$ABlockExpr$make on <var1:ABlockExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder$ASTBuilder$make_loop for (self: ASTBuilder): ALoopExpr */
val* nitc___nitc__ASTBuilder___make_loop(val* self) {
val* var /* : ALoopExpr */;
val* var1 /* : ALoopExpr */;
var1 = NEW_nitc__ALoopExpr(&type_nitc__ALoopExpr);
{
nitc__astbuilder___ALoopExpr___make(var1); /* Direct call astbuilder$ALoopExpr$make on <var1:ALoopExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder$ASTBuilder$make_var_read for (self: ASTBuilder, Variable, MType): AVarExpr */
val* nitc___nitc__ASTBuilder___make_var_read(val* self, val* p0, val* p1) {
val* var /* : AVarExpr */;
val* var_variable /* var variable: Variable */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : AVarExpr */;
var_variable = p0;
var_mtype = p1;
var1 = NEW_nitc__AVarExpr(&type_nitc__AVarExpr);
{
nitc__astbuilder___AVarExpr___make(var1, var_variable, var_mtype); /* Direct call astbuilder$AVarExpr$make on <var1:AVarExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder$ASTBuilder$make_var_assign for (self: ASTBuilder, Variable, AExpr): AVarAssignExpr */
val* nitc___nitc__ASTBuilder___make_var_assign(val* self, val* p0, val* p1) {
val* var /* : AVarAssignExpr */;
val* var_variable /* var variable: Variable */;
val* var_value /* var value: AExpr */;
val* var1 /* : AVarAssignExpr */;
var_variable = p0;
var_value = p1;
var1 = NEW_nitc__AVarAssignExpr(&type_nitc__AVarAssignExpr);
{
nitc__astbuilder___AVarAssignExpr___make(var1, var_variable, var_value); /* Direct call astbuilder$AVarAssignExpr$make on <var1:AVarAssignExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder$ASTBuilder$make_attr_read for (self: ASTBuilder, AExpr, MAttribute): AAttrExpr */
val* nitc___nitc__ASTBuilder___make_attr_read(val* self, val* p0, val* p1) {
val* var /* : AAttrExpr */;
val* var_recv /* var recv: AExpr */;
val* var_attribute /* var attribute: MAttribute */;
val* var1 /* : MPropDef */;
val* var3 /* : MPropDef */;
val* var4 /* : nullable MType */;
val* var6 /* : nullable MType */;
val* var7 /* : nullable MType */;
val* var8 /* : nullable MClassType */;
val* var10 /* : nullable MClassType */;
val* var11 /* : MModule */;
val* var13 /* : MModule */;
val* var14 /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var15 /* : AAttrExpr */;
var_recv = p0;
var_attribute = p1;
{
{ /* Inline model$MProperty$intro (var_attribute) on <var_attribute:MAttribute> */
var3 = var_attribute->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var_attribute:MAttribute> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model$MAttributeDef$static_mtype (var1) on <var1:MPropDef(MAttributeDef)> */
var6 = var1->attrs[COLOR_nitc__model__MAttributeDef___static_mtype].val; /* _static_mtype on <var1:MPropDef(MAttributeDef)> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_nitc__typing__AExpr__mtype]))(var_recv); /* mtype on <var_recv:AExpr>*/
}
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__astbuilder, 77);
fatal_exit(1);
}
{
{ /* Inline astbuilder$ASTBuilder$anchor (self) on <self:ASTBuilder> */
var10 = self->attrs[COLOR_nitc__astbuilder__ASTBuilder___anchor].val; /* _anchor on <self:ASTBuilder> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline astbuilder$ASTBuilder$mmodule (self) on <self:ASTBuilder> */
var13 = self->attrs[COLOR_nitc__astbuilder__ASTBuilder___mmodule].val; /* _mmodule on <self:ASTBuilder> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__astbuilder, 25);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
if (var4 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__astbuilder, 77);
fatal_exit(1);
} else {
var14 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var4->class->vft[COLOR_nitc__model__MType__resolve_for]))(var4, var7, var8, var11, 1); /* resolve_for on <var4:nullable MType>*/
}
var_mtype = var14;
var15 = NEW_nitc__AAttrExpr(&type_nitc__AAttrExpr);
{
nitc__astbuilder___AAttrExpr___make(var15, var_recv, var_attribute, var_mtype); /* Direct call astbuilder$AAttrExpr$make on <var15:AAttrExpr>*/
}
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder$ASTBuilder$make_attr_assign for (self: ASTBuilder, AExpr, MAttribute, AExpr): AAttrAssignExpr */
val* nitc___nitc__ASTBuilder___make_attr_assign(val* self, val* p0, val* p1, val* p2) {
val* var /* : AAttrAssignExpr */;
val* var_recv /* var recv: AExpr */;
val* var_attribute /* var attribute: MAttribute */;
val* var_value /* var value: AExpr */;
val* var1 /* : AAttrAssignExpr */;
var_recv = p0;
var_attribute = p1;
var_value = p2;
var1 = NEW_nitc__AAttrAssignExpr(&type_nitc__AAttrAssignExpr);
{
nitc__astbuilder___AAttrAssignExpr___make(var1, var_recv, var_attribute, var_value); /* Direct call astbuilder$AAttrAssignExpr$make on <var1:AAttrAssignExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder$ASTBuilder$make_do for (self: ASTBuilder): ADoExpr */
val* nitc___nitc__ASTBuilder___make_do(val* self) {
val* var /* : ADoExpr */;
val* var1 /* : ADoExpr */;
var1 = NEW_nitc__ADoExpr(&type_nitc__ADoExpr);
{
nitc__astbuilder___ADoExpr___make(var1); /* Direct call astbuilder$ADoExpr$make on <var1:ADoExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder$ASTBuilder$make_break for (self: ASTBuilder, EscapeMark): ABreakExpr */
val* nitc___nitc__ASTBuilder___make_break(val* self, val* p0) {
val* var /* : ABreakExpr */;
val* var_escapemark /* var escapemark: EscapeMark */;
val* var1 /* : ABreakExpr */;
var_escapemark = p0;
var1 = NEW_nitc__ABreakExpr(&type_nitc__ABreakExpr);
{
nitc__astbuilder___ABreakExpr___make(var1, var_escapemark); /* Direct call astbuilder$ABreakExpr$make on <var1:ABreakExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder$ASTBuilder$make_if for (self: ASTBuilder, AExpr, nullable MType): AIfExpr */
val* nitc___nitc__ASTBuilder___make_if(val* self, val* p0, val* p1) {
val* var /* : AIfExpr */;
val* var_condition /* var condition: AExpr */;
val* var_mtype /* var mtype: nullable MType */;
val* var1 /* : AIfExpr */;
var_condition = p0;
var_mtype = p1;
var1 = NEW_nitc__AIfExpr(&type_nitc__AIfExpr);
{
nitc__astbuilder___AIfExpr___make(var1, var_condition, var_mtype); /* Direct call astbuilder$AIfExpr$make on <var1:AIfExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder$ASTBuilder$init for (self: ASTBuilder) */
void nitc___nitc__ASTBuilder___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__ASTBuilder___core__kernel__Object__init]))(self); /* init on <self:ASTBuilder>*/
}
RET_LABEL:;
}
/* method astbuilder$AExpr$make_var_read for (self: AExpr): AVarExpr */
val* nitc__astbuilder___AExpr___make_var_read(val* self) {
val* var /* : AVarExpr */;
val* var1 /* : nullable Variable */;
val* var3 /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable ANode */;
val* var12 /* : nullable ANode */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var_other16 /* var other: nullable Object */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : AExpr */;
val* var_place /* var place: AExpr */;
val* var20 /* : Variable */;
static val* varonce;
val* var21 /* : String */;
char* var22 /* : CString */;
val* var23 /* : String */;
val* var24 /* : nullable Int */;
val* var25 /* : nullable Int */;
val* var26 /* : nullable Bool */;
val* var27 /* : nullable Bool */;
val* var28 /* : nullable MType */;
val* var30 /* : AVarAssignExpr */;
val* var_nvar /* var nvar: AVarAssignExpr */;
val* var32 /* : AVarExpr */;
val* var33 /* : nullable MType */;
val* var35 /* : nullable MType */;
{
{ /* Inline astbuilder$AExpr$variable_cache (self) on <self:AExpr> */
var3 = self->attrs[COLOR_nitc__astbuilder__AExpr___variable_cache].val; /* _variable_cache on <self:AExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_variable = var1;
if (var_variable == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_variable,((val*)NULL)) on <var_variable:nullable Variable> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_variable,var_other) on <var_variable:nullable Variable(Variable)> */
var9 = var_variable == var_other;
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
{ /* Inline parser_nodes$ANode$parent (self) on <self:AExpr> */
var12 = self->attrs[COLOR_nitc__parser_nodes__ANode___parent].val; /* _parent on <self:AExpr> */
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
{ /* Inline kernel$Object$!= (var10,((val*)NULL)) on <var10:nullable ANode> */
var_other16 = ((val*)NULL);
{
var17 = ((short int(*)(val* self, val* p0))(var10->class->vft[COLOR_core__kernel__Object___61d_61d]))(var10, var_other16); /* == on <var10:nullable ANode(ANode)>*/
}
var18 = !var17;
var14 = var18;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
if (unlikely(!var13)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__astbuilder, 117);
fatal_exit(1);
}
{
var19 = nitc__astbuilder___AExpr___detach_with_placeholder(self);
}
var_place = var19;
var20 = NEW_nitc__Variable(&type_nitc__Variable);
if (likely(varonce!=NULL)) {
var21 = varonce;
} else {
var22 = "";
var24 = (val*)(0l<<2|1);
var25 = (val*)(0l<<2|1);
var26 = (val*)((long)(0)<<2|3);
var27 = (val*)((long)(0)<<2|3);
var23 = core__flat___CString___to_s_unsafe(var22, var24, var25, var26, var27);
var21 = var23;
varonce = var21;
}
{
((void(*)(val* self, val* p0))(var20->class->vft[COLOR_nitc__scope__Variable__name_61d]))(var20, var21); /* name= on <var20:Variable>*/
}
{
((void(*)(val* self))(var20->class->vft[COLOR_core__kernel__Object__init]))(var20); /* init on <var20:Variable>*/
}
var_variable = var20;
{
var28 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__typing__AExpr__mtype]))(self); /* mtype on <self:AExpr>*/
}
{
{ /* Inline typing$Variable$declared_type= (var_variable,var28) on <var_variable:nullable Variable(Variable)> */
var_variable->attrs[COLOR_nitc__typing__Variable___declared_type].val = var28; /* _declared_type on <var_variable:nullable Variable(Variable)> */
RET_LABEL29:(void)0;
}
}
var30 = NEW_nitc__AVarAssignExpr(&type_nitc__AVarAssignExpr);
{
nitc__astbuilder___AVarAssignExpr___make(var30, var_variable, self); /* Direct call astbuilder$AVarAssignExpr$make on <var30:AVarAssignExpr>*/
}
var_nvar = var30;
{
nitc__transform___AExpr___nitc__parser_nodes__ANode__replace_with(var_place, var_nvar); /* Direct call transform$AExpr$replace_with on <var_place:AExpr>*/
}
{
{ /* Inline astbuilder$AExpr$variable_cache= (self,var_variable) on <self:AExpr> */
self->attrs[COLOR_nitc__astbuilder__AExpr___variable_cache].val = var_variable; /* _variable_cache on <self:AExpr> */
RET_LABEL31:(void)0;
}
}
} else {
}
var32 = NEW_nitc__AVarExpr(&type_nitc__AVarExpr);
{
{ /* Inline typing$Variable$declared_type (var_variable) on <var_variable:nullable Variable(Variable)> */
var35 = var_variable->attrs[COLOR_nitc__typing__Variable___declared_type].val; /* _declared_type on <var_variable:nullable Variable(Variable)> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
if (unlikely(var33 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__astbuilder, 125);
fatal_exit(1);
}
{
nitc__astbuilder___AVarExpr___make(var32, var_variable, var33); /* Direct call astbuilder$AVarExpr$make on <var32:AVarExpr>*/
}
var = var32;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder$AExpr$variable_cache for (self: AExpr): nullable Variable */
val* nitc__astbuilder___AExpr___variable_cache(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
var1 = self->attrs[COLOR_nitc__astbuilder__AExpr___variable_cache].val; /* _variable_cache on <self:AExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method astbuilder$AExpr$variable_cache= for (self: AExpr, nullable Variable) */
void nitc__astbuilder___AExpr___variable_cache_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__astbuilder__AExpr___variable_cache].val = p0; /* _variable_cache on <self:AExpr> */
RET_LABEL:;
}
/* method astbuilder$AExpr$detach_with_placeholder for (self: AExpr): AExpr */
val* nitc__astbuilder___AExpr___detach_with_placeholder(val* self) {
val* var /* : AExpr */;
val* var1 /* : APlaceholderExpr */;
val* var_h /* var h: APlaceholderExpr */;
var1 = NEW_nitc__APlaceholderExpr(&type_nitc__APlaceholderExpr);
{
nitc___nitc__APlaceholderExpr___make(var1); /* Direct call astbuilder$APlaceholderExpr$make on <var1:APlaceholderExpr>*/
}
var_h = var1;
{
nitc__transform___AExpr___nitc__parser_nodes__ANode__replace_with(self, var_h); /* Direct call transform$AExpr$replace_with on <self:AExpr>*/
}
var = var_h;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder$AExpr$add for (self: AExpr, AExpr) */
void nitc__astbuilder___AExpr___add(val* self, val* p0) {
val* var_expr /* var expr: AExpr */;
val* var /* : Sys */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
val* var10 /* : String */;
val* var11 /* : String */;
var_expr = p0;
var = glob_sys;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "add not implemented in ";
var6 = (val*)(23l<<2|1);
var7 = (val*)(23l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[0]=var3;
} else {
var1 = varonce;
varonce = NULL;
}
{
var10 = core__abstract_text___Object___inspect(self);
}
((struct instance_core__NativeArray*)var1)->values[1]=var10;
{
var11 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
{
core__file___Sys___print(var, var11); /* Direct call file$Sys$print on <var:Sys>*/
}
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__astbuilder, 160);
fatal_exit(1);
RET_LABEL:;
}
/* method astbuilder$APlaceholderExpr$make for (self: APlaceholderExpr) */
void nitc___nitc__APlaceholderExpr___make(val* self) {
{
{ /* Inline kernel$Object$init (self) on <self:APlaceholderExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method astbuilder$ABlockExpr$make for (self: ABlockExpr) */
void nitc__astbuilder___ABlockExpr___make(val* self) {
{
{ /* Inline kernel$Object$init (self) on <self:ABlockExpr> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline typing$AExpr$is_typed= (self,1) on <self:ABlockExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = 1; /* _is_typed on <self:ABlockExpr> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method astbuilder$ABlockExpr$add for (self: ABlockExpr, AExpr) */
void nitc__astbuilder___ABlockExpr___AExpr__add(val* self, val* p0) {
val* var_expr /* var expr: AExpr */;
val* var /* : ANodes[AExpr] */;
val* var2 /* : ANodes[AExpr] */;
var_expr = p0;
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
{
core___core__Sequence___SimpleCollection__add(var, var_expr); /* Direct call abstract_collection$Sequence$add on <var:ANodes[AExpr]>*/
}
RET_LABEL:;
}
/* method astbuilder$ALoopExpr$make for (self: ALoopExpr) */
void nitc__astbuilder___ALoopExpr___make(val* self) {
val* var /* : TKwloop */;
val* var4 /* : ABlockExpr */;
val* var6 /* : nullable AExpr */;
val* var8 /* : nullable AExpr */;
{
{ /* Inline kernel$Object$init (self) on <self:ALoopExpr> */
RET_LABEL1:(void)0;
}
}
var = NEW_nitc__TKwloop(&type_nitc__TKwloop);
{
{ /* Inline kernel$Object$init (var) on <var:TKwloop> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__ALoopExpr___n_kwloop].val = var; /* _n_kwloop on <self:ALoopExpr> */
{
{ /* Inline typing$AExpr$is_typed= (self,1) on <self:ALoopExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = 1; /* _is_typed on <self:ALoopExpr> */
RET_LABEL3:(void)0;
}
}
var4 = NEW_nitc__ABlockExpr(&type_nitc__ABlockExpr);
{
{ /* Inline kernel$Object$init (var4) on <var4:ABlockExpr> */
RET_LABEL5:(void)0;
}
}
{
nitc__parser_prod___ALoopExpr___n_block_61d(self, var4); /* Direct call parser_prod$ALoopExpr$n_block= on <self:ALoopExpr>*/
}
{
{ /* Inline parser_nodes$ALoopExpr$n_block (self) on <self:ALoopExpr> */
var8 = self->attrs[COLOR_nitc__parser_nodes__ALoopExpr___n_block].val; /* _n_block on <self:ALoopExpr> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (var6 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__astbuilder, 196);
fatal_exit(1);
} else {
{ /* Inline typing$AExpr$is_typed= (var6,1) on <var6:nullable AExpr> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 855);
fatal_exit(1);
}
var6->attrs[COLOR_nitc__typing__AExpr___is_typed].s = 1; /* _is_typed on <var6:nullable AExpr> */
RET_LABEL9:(void)0;
}
}
RET_LABEL:;
}
/* method astbuilder$ALoopExpr$add for (self: ALoopExpr, AExpr) */
void nitc__astbuilder___ALoopExpr___AExpr__add(val* self, val* p0) {
val* var_expr /* var expr: AExpr */;
val* var /* : nullable AExpr */;
val* var2 /* : nullable AExpr */;
var_expr = p0;
{
{ /* Inline parser_nodes$ALoopExpr$n_block (self) on <self:ALoopExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ALoopExpr___n_block].val; /* _n_block on <self:ALoopExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__astbuilder, 201);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nitc__astbuilder__AExpr__add]))(var, var_expr); /* add on <var:nullable AExpr>*/
}
RET_LABEL:;
}
/* method astbuilder$ADoExpr$make for (self: ADoExpr) */
void nitc__astbuilder___ADoExpr___make(val* self) {
val* var /* : TKwdo */;
val* var4 /* : ABlockExpr */;
val* var6 /* : nullable AExpr */;
val* var8 /* : nullable AExpr */;
{
{ /* Inline kernel$Object$init (self) on <self:ADoExpr> */
RET_LABEL1:(void)0;
}
}
var = NEW_nitc__TKwdo(&type_nitc__TKwdo);
{
{ /* Inline kernel$Object$init (var) on <var:TKwdo> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__ADoExpr___n_kwdo].val = var; /* _n_kwdo on <self:ADoExpr> */
{
{ /* Inline typing$AExpr$is_typed= (self,1) on <self:ADoExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = 1; /* _is_typed on <self:ADoExpr> */
RET_LABEL3:(void)0;
}
}
var4 = NEW_nitc__ABlockExpr(&type_nitc__ABlockExpr);
{
{ /* Inline kernel$Object$init (var4) on <var4:ABlockExpr> */
RET_LABEL5:(void)0;
}
}
{
nitc__parser_prod___ADoExpr___n_block_61d(self, var4); /* Direct call parser_prod$ADoExpr$n_block= on <self:ADoExpr>*/
}
{
{ /* Inline parser_nodes$ADoExpr$n_block (self) on <self:ADoExpr> */
var8 = self->attrs[COLOR_nitc__parser_nodes__ADoExpr___n_block].val; /* _n_block on <self:ADoExpr> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (var6 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__astbuilder, 211);
fatal_exit(1);
} else {
{ /* Inline typing$AExpr$is_typed= (var6,1) on <var6:nullable AExpr> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 855);
fatal_exit(1);
}
var6->attrs[COLOR_nitc__typing__AExpr___is_typed].s = 1; /* _is_typed on <var6:nullable AExpr> */
RET_LABEL9:(void)0;
}
}
RET_LABEL:;
}
/* method astbuilder$ADoExpr$add for (self: ADoExpr, AExpr) */
void nitc__astbuilder___ADoExpr___AExpr__add(val* self, val* p0) {
val* var_expr /* var expr: AExpr */;
val* var /* : nullable AExpr */;
val* var2 /* : nullable AExpr */;
var_expr = p0;
{
{ /* Inline parser_nodes$ADoExpr$n_block (self) on <self:ADoExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ADoExpr___n_block].val; /* _n_block on <self:ADoExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__astbuilder, 227);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nitc__astbuilder__AExpr__add]))(var, var_expr); /* add on <var:nullable AExpr>*/
}
RET_LABEL:;
}
/* method astbuilder$ABreakExpr$make for (self: ABreakExpr, EscapeMark) */
void nitc__astbuilder___ABreakExpr___make(val* self, val* p0) {
val* var_escapemark /* var escapemark: EscapeMark */;
val* var /* : TKwbreak */;
val* var4 /* : Array[AEscapeExpr] */;
val* var6 /* : Array[AEscapeExpr] */;
{
{ /* Inline kernel$Object$init (self) on <self:ABreakExpr> */
RET_LABEL1:(void)0;
}
}
var_escapemark = p0;
var = NEW_nitc__TKwbreak(&type_nitc__TKwbreak);
{
{ /* Inline kernel$Object$init (var) on <var:TKwbreak> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__ABreakExpr___n_kwbreak].val = var; /* _n_kwbreak on <self:ABreakExpr> */
{
{ /* Inline scope$AEscapeExpr$escapemark= (self,var_escapemark) on <self:ABreakExpr> */
self->attrs[COLOR_nitc__scope__AEscapeExpr___escapemark].val = var_escapemark; /* _escapemark on <self:ABreakExpr> */
RET_LABEL3:(void)0;
}
}
{
{ /* Inline scope$EscapeMark$escapes (var_escapemark) on <var_escapemark:EscapeMark> */
var6 = var_escapemark->attrs[COLOR_nitc__scope__EscapeMark___escapes].val; /* _escapes on <var_escapemark:EscapeMark> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__scope, 59);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var4, self); /* Direct call array$Array$add on <var4:Array[AEscapeExpr]>*/
}
{
{ /* Inline typing$AExpr$is_typed= (self,1) on <self:ABreakExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = 1; /* _is_typed on <self:ABreakExpr> */
RET_LABEL7:(void)0;
}
}
RET_LABEL:;
}
/* method astbuilder$AIfExpr$make for (self: AIfExpr, AExpr, nullable MType) */
void nitc__astbuilder___AIfExpr___make(val* self, val* p0, val* p1) {
val* var_condition /* var condition: AExpr */;
val* var_mtype /* var mtype: nullable MType */;
val* var /* : TKwif */;
val* var3 /* : AExpr */;
val* var5 /* : TKwthen */;
val* var7 /* : ABlockExpr */;
val* var8 /* : TKwelse */;
val* var10 /* : ABlockExpr */;
{
{ /* Inline kernel$Object$init (self) on <self:AIfExpr> */
RET_LABEL1:(void)0;
}
}
var_condition = p0;
var_mtype = p1;
var = NEW_nitc__TKwif(&type_nitc__TKwif);
{
{ /* Inline kernel$Object$init (var) on <var:TKwif> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_kwif].val = var; /* _n_kwif on <self:AIfExpr> */
self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_expr].val = var_condition; /* _n_expr on <self:AIfExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_expr].val; /* _n_expr on <self:AIfExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__astbuilder, 246);
fatal_exit(1);
}
{
{ /* Inline parser_nodes$ANode$parent= (var3,self) on <var3:AExpr> */
var3->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var3:AExpr> */
RET_LABEL4:(void)0;
}
}
var5 = NEW_nitc__TKwthen(&type_nitc__TKwthen);
{
{ /* Inline kernel$Object$init (var5) on <var5:TKwthen> */
RET_LABEL6:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_kwthen].val = var5; /* _n_kwthen on <self:AIfExpr> */
var7 = NEW_nitc__ABlockExpr(&type_nitc__ABlockExpr);
{
nitc__astbuilder___ABlockExpr___make(var7); /* Direct call astbuilder$ABlockExpr$make on <var7:ABlockExpr>*/
}
self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_then].val = var7; /* _n_then on <self:AIfExpr> */
var8 = NEW_nitc__TKwelse(&type_nitc__TKwelse);
{
{ /* Inline kernel$Object$init (var8) on <var8:TKwelse> */
RET_LABEL9:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_kwelse].val = var8; /* _n_kwelse on <self:AIfExpr> */
var10 = NEW_nitc__ABlockExpr(&type_nitc__ABlockExpr);
{
nitc__astbuilder___ABlockExpr___make(var10); /* Direct call astbuilder$ABlockExpr$make on <var10:ABlockExpr>*/
}
self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_else].val = var10; /* _n_else on <self:AIfExpr> */
{
{ /* Inline typing$AExpr$mtype= (self,var_mtype) on <self:AIfExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var_mtype; /* _mtype on <self:AIfExpr> */
RET_LABEL11:(void)0;
}
}
{
{ /* Inline typing$AExpr$is_typed= (self,1) on <self:AIfExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = 1; /* _is_typed on <self:AIfExpr> */
RET_LABEL12:(void)0;
}
}
RET_LABEL:;
}
/* method astbuilder$AType$make for (self: AType) */
void nitc__astbuilder___AType___make(val* self) {
val* var /* : TClassid */;
val* var_n_id /* var n_id: TClassid */;
val* var3 /* : AQclassid */;
val* var_n_qid /* var n_qid: AQclassid */;
{
{ /* Inline kernel$Object$init (self) on <self:AType> */
RET_LABEL1:(void)0;
}
}
var = NEW_nitc__TClassid(&type_nitc__TClassid);
{
{ /* Inline kernel$Object$init (var) on <var:TClassid> */
RET_LABEL2:(void)0;
}
}
var_n_id = var;
var3 = NEW_nitc__AQclassid(&type_nitc__AQclassid);
{
{ /* Inline kernel$Object$init (var3) on <var3:AQclassid> */
RET_LABEL4:(void)0;
}
}
var_n_qid = var3;
{
nitc__parser_prod___AQclassid___n_id_61d(var_n_qid, var_n_id); /* Direct call parser_prod$AQclassid$n_id= on <var_n_qid:AQclassid>*/
}
self->attrs[COLOR_nitc__parser_nodes__AType___n_qid].val = var_n_qid; /* _n_qid on <self:AType> */
RET_LABEL:;
}
/* method astbuilder$AIntegerExpr$make for (self: AIntegerExpr, Int, MType) */
void nitc__astbuilder___AIntegerExpr___make(val* self, long p0, val* p1) {
long var_value /* var value: Int */;
val* var_t /* var t: MType */;
val* var /* : nullable Numeric */;
val* var3 /* : TInteger */;
{
{ /* Inline kernel$Object$init (self) on <self:AIntegerExpr> */
RET_LABEL1:(void)0;
}
}
var_value = p0;
var_t = p1;
{
{ /* Inline literal$AIntegerExpr$value= (self,var_value) on <self:AIntegerExpr> */
var = (val*)(var_value<<2|1);
self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val = var; /* _value on <self:AIntegerExpr> */
RET_LABEL2:(void)0;
}
}
var3 = NEW_nitc__TInteger(&type_nitc__TInteger);
{
{ /* Inline kernel$Object$init (var3) on <var3:TInteger> */
RET_LABEL4:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__AIntegerExpr___n_integer].val = var3; /* _n_integer on <self:AIntegerExpr> */
{
{ /* Inline typing$AExpr$mtype= (self,var_t) on <self:AIntegerExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var_t; /* _mtype on <self:AIntegerExpr> */
RET_LABEL5:(void)0;
}
}
RET_LABEL:;
}
/* method astbuilder$ANewExpr$make for (self: ANewExpr, CallSite, nullable Array[AExpr]) */
void nitc__astbuilder___ANewExpr___make(val* self, val* p0, val* p1) {
val* var_callsite /* var callsite: CallSite */;
val* var_args /* var args: nullable Array[AExpr] */;
val* var /* : TKwnew */;
val* var3 /* : AType */;
val* var4 /* : AListExprs */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : AExprs */;
val* var13 /* : AExprs */;
val* var14 /* : ANodes[AExpr] */;
val* var16 /* : ANodes[AExpr] */;
val* var18 /* : MType */;
val* var20 /* : MType */;
short int var21 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var23 /* : MMethod */;
val* var25 /* : MMethod */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : MSignature */;
val* var31 /* : MSignature */;
val* var32 /* : nullable MType */;
val* var34 /* : nullable MType */;
val* var36 /* : MType */;
val* var38 /* : MType */;
{
{ /* Inline kernel$Object$init (self) on <self:ANewExpr> */
RET_LABEL1:(void)0;
}
}
var_callsite = p0;
var_args = p1;
var = NEW_nitc__TKwnew(&type_nitc__TKwnew);
{
{ /* Inline kernel$Object$init (var) on <var:TKwnew> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__ANewExpr___n_kwnew].val = var; /* _n_kwnew on <self:ANewExpr> */
var3 = NEW_nitc__AType(&type_nitc__AType);
{
nitc__astbuilder___AType___make(var3); /* Direct call astbuilder$AType$make on <var3:AType>*/
}
self->attrs[COLOR_nitc__parser_nodes__ANewExpr___n_type].val = var3; /* _n_type on <self:ANewExpr> */
var4 = NEW_nitc__AListExprs(&type_nitc__AListExprs);
{
{ /* Inline kernel$Object$init (var4) on <var4:AListExprs> */
RET_LABEL5:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__ANewExpr___n_args].val = var4; /* _n_args on <self:ANewExpr> */
if (var_args == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_args,((val*)NULL)) on <var_args:nullable Array[AExpr]> */
var_other = ((val*)NULL);
{
var9 = ((short int(*)(val* self, val* p0))(var_args->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_args, var_other); /* == on <var_args:nullable Array[AExpr](Array[AExpr])>*/
}
var10 = !var9;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (var6){
{
{ /* Inline parser_nodes$ANewExpr$n_args (self) on <self:ANewExpr> */
var13 = self->attrs[COLOR_nitc__parser_nodes__ANewExpr___n_args].val; /* _n_args on <self:ANewExpr> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2346);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline parser_nodes$AExprs$n_exprs (var11) on <var11:AExprs> */
var16 = var11->attrs[COLOR_nitc__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var11:AExprs> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2790);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
core___core__SimpleCollection___add_all(var14, var_args); /* Direct call abstract_collection$SimpleCollection$add_all on <var14:ANodes[AExpr]>*/
}
} else {
}
{
{ /* Inline typing$ANewExpr$callsite= (self,var_callsite) on <self:ANewExpr> */
self->attrs[COLOR_nitc__typing__ANewExpr___callsite].val = var_callsite; /* _callsite on <self:ANewExpr> */
RET_LABEL17:(void)0;
}
}
{
{ /* Inline typing$CallSite$recv (var_callsite) on <var_callsite:CallSite> */
var20 = var_callsite->attrs[COLOR_nitc__typing__CallSite___recv].val; /* _recv on <var_callsite:CallSite> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 642);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
/* <var18:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var18->type->table_size) {
var21 = 0;
} else {
var21 = var18->type->type_table[cltype] == idtype;
}
if (unlikely(!var21)) {
var_class_name = var18 == NULL ? "null" : var18->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__astbuilder, 285);
fatal_exit(1);
}
{
{ /* Inline typing$ANewExpr$recvtype= (self,var18) on <self:ANewExpr> */
self->attrs[COLOR_nitc__typing__ANewExpr___recvtype].val = var18; /* _recvtype on <self:ANewExpr> */
RET_LABEL22:(void)0;
}
}
{
{ /* Inline typing$CallSite$mproperty (var_callsite) on <var_callsite:CallSite> */
var25 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:CallSite> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 656);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline model$MMethod$is_new (var23) on <var23:MMethod> */
var28 = var23->attrs[COLOR_nitc__model__MMethod___is_new].s; /* _is_new on <var23:MMethod> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
if (var26){
{
{ /* Inline typing$CallSite$msignature (var_callsite) on <var_callsite:CallSite> */
var31 = var_callsite->attrs[COLOR_nitc__typing__CallSite___msignature].val; /* _msignature on <var_callsite:CallSite> */
if (unlikely(var31 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 663);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline model$MSignature$return_mtype (var29) on <var29:MSignature> */
var34 = var29->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var29:MSignature> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline typing$AExpr$mtype= (self,var32) on <self:ANewExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var32; /* _mtype on <self:ANewExpr> */
RET_LABEL35:(void)0;
}
}
} else {
{
{ /* Inline typing$CallSite$recv (var_callsite) on <var_callsite:CallSite> */
var38 = var_callsite->attrs[COLOR_nitc__typing__CallSite___recv].val; /* _recv on <var_callsite:CallSite> */
if (unlikely(var38 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 642);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline typing$AExpr$mtype= (self,var36) on <self:ANewExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var36; /* _mtype on <self:ANewExpr> */
RET_LABEL39:(void)0;
}
}
}
{
{ /* Inline typing$AExpr$is_typed= (self,1) on <self:ANewExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = 1; /* _is_typed on <self:ANewExpr> */
RET_LABEL40:(void)0;
}
}
RET_LABEL:;
}
/* method astbuilder$ACallExpr$make for (self: ACallExpr, AExpr, CallSite, nullable Array[AExpr]) */
void nitc__astbuilder___ACallExpr___make(val* self, val* p0, val* p1, val* p2) {
val* var_recv /* var recv: AExpr */;
val* var_callsite /* var callsite: CallSite */;
val* var_args /* var args: nullable Array[AExpr] */;
val* var /* : AListExprs */;
val* var3 /* : AQid */;
val* var5 /* : AQid */;
val* var6 /* : TId */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : AExprs */;
val* var15 /* : AExprs */;
val* var16 /* : ANodes[AExpr] */;
val* var18 /* : ANodes[AExpr] */;
val* var20 /* : MSignature */;
val* var22 /* : MSignature */;
val* var23 /* : nullable MType */;
val* var25 /* : nullable MType */;
{
{ /* Inline kernel$Object$init (self) on <self:ACallExpr> */
RET_LABEL1:(void)0;
}
}
var_recv = p0;
var_callsite = p1;
var_args = p2;
self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val = var_recv; /* _n_expr on <self:ACallExpr> */
var = NEW_nitc__AListExprs(&type_nitc__AListExprs);
{
{ /* Inline kernel$Object$init (var) on <var:AListExprs> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__ACallFormExpr___n_args].val = var; /* _n_args on <self:ACallExpr> */
var3 = NEW_nitc__AQid(&type_nitc__AQid);
{
{ /* Inline kernel$Object$init (var3) on <var3:AQid> */
RET_LABEL4:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__ACallFormExpr___n_qid].val = var3; /* _n_qid on <self:ACallExpr> */
var5 = self->attrs[COLOR_nitc__parser_nodes__ACallFormExpr___n_qid].val; /* _n_qid on <self:ACallExpr> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_qid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__astbuilder, 301);
fatal_exit(1);
}
var6 = NEW_nitc__TId(&type_nitc__TId);
{
{ /* Inline kernel$Object$init (var6) on <var6:TId> */
RET_LABEL7:(void)0;
}
}
{
nitc__parser_prod___AQid___n_id_61d(var5, var6); /* Direct call parser_prod$AQid$n_id= on <var5:AQid>*/
}
if (var_args == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_args,((val*)NULL)) on <var_args:nullable Array[AExpr]> */
var_other = ((val*)NULL);
{
var11 = ((short int(*)(val* self, val* p0))(var_args->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_args, var_other); /* == on <var_args:nullable Array[AExpr](Array[AExpr])>*/
}
var12 = !var11;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
if (var8){
{
{ /* Inline parser_nodes$ACallFormExpr$n_args (self) on <self:ACallExpr> */
var15 = self->attrs[COLOR_nitc__parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallExpr> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2380);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline parser_nodes$AExprs$n_exprs (var13) on <var13:AExprs> */
var18 = var13->attrs[COLOR_nitc__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var13:AExprs> */
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2790);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
core___core__SimpleCollection___add_all(var16, var_args); /* Direct call abstract_collection$SimpleCollection$add_all on <var16:ANodes[AExpr]>*/
}
} else {
}
{
{ /* Inline typing$ASendExpr$callsite= (self,var_callsite) on <self:ACallExpr> */
self->attrs[COLOR_nitc__typing__ASendExpr___callsite].val = var_callsite; /* _callsite on <self:ACallExpr> */
RET_LABEL19:(void)0;
}
}
{
{ /* Inline typing$CallSite$msignature (var_callsite) on <var_callsite:CallSite> */
var22 = var_callsite->attrs[COLOR_nitc__typing__CallSite___msignature].val; /* _msignature on <var_callsite:CallSite> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 663);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline model$MSignature$return_mtype (var20) on <var20:MSignature> */
var25 = var20->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var20:MSignature> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline typing$AExpr$mtype= (self,var23) on <self:ACallExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var23; /* _mtype on <self:ACallExpr> */
RET_LABEL26:(void)0;
}
}
{
{ /* Inline typing$AExpr$is_typed= (self,1) on <self:ACallExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = 1; /* _is_typed on <self:ACallExpr> */
RET_LABEL27:(void)0;
}
}
RET_LABEL:;
}
/* method astbuilder$AAttrExpr$make for (self: AAttrExpr, AExpr, MAttribute, MType) */
void nitc__astbuilder___AAttrExpr___make(val* self, val* p0, val* p1, val* p2) {
val* var_recv /* var recv: AExpr */;
val* var_attribute /* var attribute: MAttribute */;
val* var_t /* var t: MType */;
val* var /* : TAttrid */;
{
{ /* Inline kernel$Object$init (self) on <self:AAttrExpr> */
RET_LABEL1:(void)0;
}
}
var_recv = p0;
var_attribute = p1;
var_t = p2;
self->attrs[COLOR_nitc__parser_nodes__AAttrFormExpr___n_expr].val = var_recv; /* _n_expr on <self:AAttrExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_recv,self) on <var_recv:AExpr> */
var_recv->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_recv:AExpr> */
RET_LABEL2:(void)0;
}
}
var = NEW_nitc__TAttrid(&type_nitc__TAttrid);
{
{ /* Inline kernel$Object$init (var) on <var:TAttrid> */
RET_LABEL3:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__AAttrFormExpr___n_id].val = var; /* _n_id on <self:AAttrExpr> */
{
{ /* Inline typing$AAttrFormExpr$mproperty= (self,var_attribute) on <self:AAttrExpr> */
self->attrs[COLOR_nitc__typing__AAttrFormExpr___mproperty].val = var_attribute; /* _mproperty on <self:AAttrExpr> */
RET_LABEL4:(void)0;
}
}
{
{ /* Inline typing$AExpr$mtype= (self,var_t) on <self:AAttrExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var_t; /* _mtype on <self:AAttrExpr> */
RET_LABEL5:(void)0;
}
}
RET_LABEL:;
}
/* method astbuilder$AAttrAssignExpr$make for (self: AAttrAssignExpr, AExpr, MAttribute, AExpr) */
void nitc__astbuilder___AAttrAssignExpr___make(val* self, val* p0, val* p1, val* p2) {
val* var_recv /* var recv: AExpr */;
val* var_attribute /* var attribute: MAttribute */;
val* var_value /* var value: AExpr */;
val* var /* : TAttrid */;
val* var5 /* : TAssign */;
val* var8 /* : nullable MType */;
{
{ /* Inline kernel$Object$init (self) on <self:AAttrAssignExpr> */
RET_LABEL1:(void)0;
}
}
var_recv = p0;
var_attribute = p1;
var_value = p2;
self->attrs[COLOR_nitc__parser_nodes__AAttrFormExpr___n_expr].val = var_recv; /* _n_expr on <self:AAttrAssignExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_recv,self) on <var_recv:AExpr> */
var_recv->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_recv:AExpr> */
RET_LABEL2:(void)0;
}
}
var = NEW_nitc__TAttrid(&type_nitc__TAttrid);
{
{ /* Inline kernel$Object$init (var) on <var:TAttrid> */
RET_LABEL3:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__AAttrFormExpr___n_id].val = var; /* _n_id on <self:AAttrAssignExpr> */
self->attrs[COLOR_nitc__parser_nodes__AAssignFormExpr___n_value].val = var_value; /* _n_value on <self:AAttrAssignExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_value,self) on <var_value:AExpr> */
var_value->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_value:AExpr> */
RET_LABEL4:(void)0;
}
}
var5 = NEW_nitc__TAssign(&type_nitc__TAssign);
{
{ /* Inline kernel$Object$init (var5) on <var5:TAssign> */
RET_LABEL6:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__AAssignFormExpr___n_assign].val = var5; /* _n_assign on <self:AAttrAssignExpr> */
{
{ /* Inline typing$AAttrFormExpr$mproperty= (self,var_attribute) on <self:AAttrAssignExpr> */
self->attrs[COLOR_nitc__typing__AAttrFormExpr___mproperty].val = var_attribute; /* _mproperty on <self:AAttrAssignExpr> */
RET_LABEL7:(void)0;
}
}
{
var8 = ((val*(*)(val* self))(var_value->class->vft[COLOR_nitc__typing__AExpr__mtype]))(var_value); /* mtype on <var_value:AExpr>*/
}
{
{ /* Inline typing$AExpr$mtype= (self,var8) on <self:AAttrAssignExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var8; /* _mtype on <self:AAttrAssignExpr> */
RET_LABEL9:(void)0;
}
}
RET_LABEL:;
}
/* method astbuilder$AVarExpr$make for (self: AVarExpr, Variable, MType) */
void nitc__astbuilder___AVarExpr___make(val* self, val* p0, val* p1) {
val* var_v /* var v: Variable */;
val* var_mtype /* var mtype: MType */;
val* var /* : TId */;
{
{ /* Inline kernel$Object$init (self) on <self:AVarExpr> */
RET_LABEL1:(void)0;
}
}
var_v = p0;
var_mtype = p1;
var = NEW_nitc__TId(&type_nitc__TId);
{
{ /* Inline kernel$Object$init (var) on <var:TId> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__AVarFormExpr___n_id].val = var; /* _n_id on <self:AVarExpr> */
{
{ /* Inline scope$AVarFormExpr$variable= (self,var_v) on <self:AVarExpr> */
self->attrs[COLOR_nitc__scope__AVarFormExpr___variable].val = var_v; /* _variable on <self:AVarExpr> */
RET_LABEL3:(void)0;
}
}
{
{ /* Inline typing$AExpr$mtype= (self,var_mtype) on <self:AVarExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var_mtype; /* _mtype on <self:AVarExpr> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method astbuilder$AVarAssignExpr$make for (self: AVarAssignExpr, Variable, AExpr) */
void nitc__astbuilder___AVarAssignExpr___make(val* self, val* p0, val* p1) {
val* var_v /* var v: Variable */;
val* var_value /* var value: AExpr */;
val* var /* : TId */;
val* var4 /* : TAssign */;
val* var7 /* : nullable MType */;
{
{ /* Inline kernel$Object$init (self) on <self:AVarAssignExpr> */
RET_LABEL1:(void)0;
}
}
var_v = p0;
var_value = p1;
var = NEW_nitc__TId(&type_nitc__TId);
{
{ /* Inline kernel$Object$init (var) on <var:TId> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__AVarFormExpr___n_id].val = var; /* _n_id on <self:AVarAssignExpr> */
self->attrs[COLOR_nitc__parser_nodes__AAssignFormExpr___n_value].val = var_value; /* _n_value on <self:AVarAssignExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_value,self) on <var_value:AExpr> */
var_value->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_value:AExpr> */
RET_LABEL3:(void)0;
}
}
var4 = NEW_nitc__TAssign(&type_nitc__TAssign);
{
{ /* Inline kernel$Object$init (var4) on <var4:TAssign> */
RET_LABEL5:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__AAssignFormExpr___n_assign].val = var4; /* _n_assign on <self:AVarAssignExpr> */
{
{ /* Inline scope$AVarFormExpr$variable= (self,var_v) on <self:AVarAssignExpr> */
self->attrs[COLOR_nitc__scope__AVarFormExpr___variable].val = var_v; /* _variable on <self:AVarAssignExpr> */
RET_LABEL6:(void)0;
}
}
{
var7 = ((val*(*)(val* self))(var_value->class->vft[COLOR_nitc__typing__AExpr__mtype]))(var_value); /* mtype on <var_value:AExpr>*/
}
{
{ /* Inline typing$AExpr$mtype= (self,var7) on <self:AVarAssignExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var7; /* _mtype on <self:AVarAssignExpr> */
RET_LABEL8:(void)0;
}
}
RET_LABEL:;
}
