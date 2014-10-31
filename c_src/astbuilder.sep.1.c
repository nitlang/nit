#include "astbuilder.sep.0.h"
/* method astbuilder#ASTBuilder#mmodule for (self: ASTBuilder): MModule */
val* astbuilder__ASTBuilder__mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_astbuilder__ASTBuilder___mmodule].val; /* _mmodule on <self:ASTBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "astbuilder.nit", 25);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#mmodule for (self: Object): MModule */
val* VIRTUAL_astbuilder__ASTBuilder__mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
val* var3 /* : MModule */;
{ /* Inline astbuilder#ASTBuilder#mmodule (self) on <self:Object(ASTBuilder)> */
var3 = self->attrs[COLOR_astbuilder__ASTBuilder___mmodule].val; /* _mmodule on <self:Object(ASTBuilder)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "astbuilder.nit", 25);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#mmodule= for (self: ASTBuilder, MModule) */
void astbuilder__ASTBuilder__mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_astbuilder__ASTBuilder___mmodule].val = p0; /* _mmodule on <self:ASTBuilder> */
RET_LABEL:;
}
/* method astbuilder#ASTBuilder#mmodule= for (self: Object, MModule) */
void VIRTUAL_astbuilder__ASTBuilder__mmodule_61d(val* self, val* p0) {
{ /* Inline astbuilder#ASTBuilder#mmodule= (self,p0) on <self:Object(ASTBuilder)> */
self->attrs[COLOR_astbuilder__ASTBuilder___mmodule].val = p0; /* _mmodule on <self:Object(ASTBuilder)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method astbuilder#ASTBuilder#anchor for (self: ASTBuilder): nullable MClassType */
val* astbuilder__ASTBuilder__anchor(val* self) {
val* var /* : nullable MClassType */;
val* var1 /* : nullable MClassType */;
var1 = self->attrs[COLOR_astbuilder__ASTBuilder___anchor].val; /* _anchor on <self:ASTBuilder> */
var = var1;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#anchor for (self: Object): nullable MClassType */
val* VIRTUAL_astbuilder__ASTBuilder__anchor(val* self) {
val* var /* : nullable MClassType */;
val* var1 /* : nullable MClassType */;
val* var3 /* : nullable MClassType */;
{ /* Inline astbuilder#ASTBuilder#anchor (self) on <self:Object(ASTBuilder)> */
var3 = self->attrs[COLOR_astbuilder__ASTBuilder___anchor].val; /* _anchor on <self:Object(ASTBuilder)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#anchor= for (self: ASTBuilder, nullable MClassType) */
void astbuilder__ASTBuilder__anchor_61d(val* self, val* p0) {
self->attrs[COLOR_astbuilder__ASTBuilder___anchor].val = p0; /* _anchor on <self:ASTBuilder> */
RET_LABEL:;
}
/* method astbuilder#ASTBuilder#anchor= for (self: Object, nullable MClassType) */
void VIRTUAL_astbuilder__ASTBuilder__anchor_61d(val* self, val* p0) {
{ /* Inline astbuilder#ASTBuilder#anchor= (self,p0) on <self:Object(ASTBuilder)> */
self->attrs[COLOR_astbuilder__ASTBuilder___anchor].val = p0; /* _anchor on <self:Object(ASTBuilder)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method astbuilder#ASTBuilder#make_int for (self: ASTBuilder, Int): AIntExpr */
val* astbuilder__ASTBuilder__make_int(val* self, long p0) {
val* var /* : AIntExpr */;
long var_value /* var value: Int */;
val* var1 /* : ADecIntExpr */;
val* var2 /* : MModule */;
val* var4 /* : MModule */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : FlatString */;
val* var9 /* : MClass */;
val* var10 /* : MClassType */;
val* var12 /* : MClassType */;
var_value = p0;
var1 = NEW_parser_nodes__ADecIntExpr(&type_parser_nodes__ADecIntExpr);
{
{ /* Inline astbuilder#ASTBuilder#mmodule (self) on <self:ASTBuilder> */
var4 = self->attrs[COLOR_astbuilder__ASTBuilder___mmodule].val; /* _mmodule on <self:ASTBuilder> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "astbuilder.nit", 25);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
if (varonce) {
var5 = varonce;
} else {
var6 = "Int";
var7 = 3;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
{
var9 = model__MModule__get_primitive_class(var2, var5);
}
{
{ /* Inline model#MClass#mclass_type (var9) on <var9:MClass> */
var12 = var9->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var9:MClass> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
astbuilder__ADecIntExpr__make(var1, var_value, var10); /* Direct call astbuilder#ADecIntExpr#make on <var1:ADecIntExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_int for (self: Object, Int): AIntExpr */
val* VIRTUAL_astbuilder__ASTBuilder__make_int(val* self, long p0) {
val* var /* : AIntExpr */;
val* var1 /* : AIntExpr */;
var1 = astbuilder__ASTBuilder__make_int(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_new for (self: ASTBuilder, CallSite, nullable Array[AExpr]): ANewExpr */
val* astbuilder__ASTBuilder__make_new(val* self, val* p0, val* p1) {
val* var /* : ANewExpr */;
val* var_callsite /* var callsite: CallSite */;
val* var_args /* var args: nullable Array[AExpr] */;
val* var1 /* : ANewExpr */;
var_callsite = p0;
var_args = p1;
var1 = NEW_parser_nodes__ANewExpr(&type_parser_nodes__ANewExpr);
{
astbuilder__ANewExpr__make(var1, var_callsite, var_args); /* Direct call astbuilder#ANewExpr#make on <var1:ANewExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_new for (self: Object, CallSite, nullable Array[AExpr]): ANewExpr */
val* VIRTUAL_astbuilder__ASTBuilder__make_new(val* self, val* p0, val* p1) {
val* var /* : ANewExpr */;
val* var1 /* : ANewExpr */;
var1 = astbuilder__ASTBuilder__make_new(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_call for (self: ASTBuilder, AExpr, CallSite, nullable Array[AExpr]): ACallExpr */
val* astbuilder__ASTBuilder__make_call(val* self, val* p0, val* p1, val* p2) {
val* var /* : ACallExpr */;
val* var_recv /* var recv: AExpr */;
val* var_callsite /* var callsite: CallSite */;
val* var_args /* var args: nullable Array[AExpr] */;
val* var1 /* : ACallExpr */;
var_recv = p0;
var_callsite = p1;
var_args = p2;
var1 = NEW_parser_nodes__ACallExpr(&type_parser_nodes__ACallExpr);
{
astbuilder__ACallExpr__make(var1, var_recv, var_callsite, var_args); /* Direct call astbuilder#ACallExpr#make on <var1:ACallExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_call for (self: Object, AExpr, CallSite, nullable Array[AExpr]): ACallExpr */
val* VIRTUAL_astbuilder__ASTBuilder__make_call(val* self, val* p0, val* p1, val* p2) {
val* var /* : ACallExpr */;
val* var1 /* : ACallExpr */;
var1 = astbuilder__ASTBuilder__make_call(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_block for (self: ASTBuilder): ABlockExpr */
val* astbuilder__ASTBuilder__make_block(val* self) {
val* var /* : ABlockExpr */;
val* var1 /* : ABlockExpr */;
var1 = NEW_parser_nodes__ABlockExpr(&type_parser_nodes__ABlockExpr);
{
astbuilder__ABlockExpr__make(var1); /* Direct call astbuilder#ABlockExpr#make on <var1:ABlockExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_block for (self: Object): ABlockExpr */
val* VIRTUAL_astbuilder__ASTBuilder__make_block(val* self) {
val* var /* : ABlockExpr */;
val* var1 /* : ABlockExpr */;
var1 = astbuilder__ASTBuilder__make_block(self);
var = var1;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_loop for (self: ASTBuilder): ALoopExpr */
val* astbuilder__ASTBuilder__make_loop(val* self) {
val* var /* : ALoopExpr */;
val* var1 /* : ALoopExpr */;
var1 = NEW_parser_nodes__ALoopExpr(&type_parser_nodes__ALoopExpr);
{
astbuilder__ALoopExpr__make(var1); /* Direct call astbuilder#ALoopExpr#make on <var1:ALoopExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_loop for (self: Object): ALoopExpr */
val* VIRTUAL_astbuilder__ASTBuilder__make_loop(val* self) {
val* var /* : ALoopExpr */;
val* var1 /* : ALoopExpr */;
var1 = astbuilder__ASTBuilder__make_loop(self);
var = var1;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_var_read for (self: ASTBuilder, Variable, MType): AVarExpr */
val* astbuilder__ASTBuilder__make_var_read(val* self, val* p0, val* p1) {
val* var /* : AVarExpr */;
val* var_variable /* var variable: Variable */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : AVarExpr */;
var_variable = p0;
var_mtype = p1;
var1 = NEW_parser_nodes__AVarExpr(&type_parser_nodes__AVarExpr);
{
astbuilder__AVarExpr__make(var1, var_variable, var_mtype); /* Direct call astbuilder#AVarExpr#make on <var1:AVarExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_var_read for (self: Object, Variable, MType): AVarExpr */
val* VIRTUAL_astbuilder__ASTBuilder__make_var_read(val* self, val* p0, val* p1) {
val* var /* : AVarExpr */;
val* var1 /* : AVarExpr */;
var1 = astbuilder__ASTBuilder__make_var_read(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_var_assign for (self: ASTBuilder, Variable, AExpr): AVarAssignExpr */
val* astbuilder__ASTBuilder__make_var_assign(val* self, val* p0, val* p1) {
val* var /* : AVarAssignExpr */;
val* var_variable /* var variable: Variable */;
val* var_value /* var value: AExpr */;
val* var1 /* : AVarAssignExpr */;
var_variable = p0;
var_value = p1;
var1 = NEW_parser_nodes__AVarAssignExpr(&type_parser_nodes__AVarAssignExpr);
{
astbuilder__AVarAssignExpr__make(var1, var_variable, var_value); /* Direct call astbuilder#AVarAssignExpr#make on <var1:AVarAssignExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_var_assign for (self: Object, Variable, AExpr): AVarAssignExpr */
val* VIRTUAL_astbuilder__ASTBuilder__make_var_assign(val* self, val* p0, val* p1) {
val* var /* : AVarAssignExpr */;
val* var1 /* : AVarAssignExpr */;
var1 = astbuilder__ASTBuilder__make_var_assign(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_attr_read for (self: ASTBuilder, AExpr, MAttribute): AAttrExpr */
val* astbuilder__ASTBuilder__make_attr_read(val* self, val* p0, val* p1) {
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
short int var14 /* : Bool */;
val* var15 /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var16 /* : AAttrExpr */;
var_recv = p0;
var_attribute = p1;
{
{ /* Inline model#MProperty#intro (var_attribute) on <var_attribute:MAttribute> */
var3 = var_attribute->attrs[COLOR_model__MProperty___intro].val; /* _intro on <var_attribute:MAttribute> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1649);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MAttributeDef#static_mtype (var1) on <var1:MPropDef(MAttributeDef)> */
var6 = var1->attrs[COLOR_model__MAttributeDef___static_mtype].val; /* _static_mtype on <var1:MPropDef(MAttributeDef)> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = ((val* (*)(val*))(var_recv->class->vft[COLOR_typing__AExpr__mtype]))(var_recv) /* mtype on <var_recv:AExpr>*/;
}
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "astbuilder.nit", 77);
show_backtrace(1);
}
{
{ /* Inline astbuilder#ASTBuilder#anchor (self) on <self:ASTBuilder> */
var10 = self->attrs[COLOR_astbuilder__ASTBuilder___anchor].val; /* _anchor on <self:ASTBuilder> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline astbuilder#ASTBuilder#mmodule (self) on <self:ASTBuilder> */
var13 = self->attrs[COLOR_astbuilder__ASTBuilder___mmodule].val; /* _mmodule on <self:ASTBuilder> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "astbuilder.nit", 25);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
var14 = 1;
if (var4 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "astbuilder.nit", 77);
show_backtrace(1);
} else {
var15 = ((val* (*)(val*, val*, val*, val*, short int))(var4->class->vft[COLOR_model__MType__resolve_for]))(var4, var7, var8, var11, var14) /* resolve_for on <var4:nullable MType>*/;
}
var_mtype = var15;
var16 = NEW_parser_nodes__AAttrExpr(&type_parser_nodes__AAttrExpr);
{
astbuilder__AAttrExpr__make(var16, var_recv, var_attribute, var_mtype); /* Direct call astbuilder#AAttrExpr#make on <var16:AAttrExpr>*/
}
var = var16;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_attr_read for (self: Object, AExpr, MAttribute): AAttrExpr */
val* VIRTUAL_astbuilder__ASTBuilder__make_attr_read(val* self, val* p0, val* p1) {
val* var /* : AAttrExpr */;
val* var1 /* : AAttrExpr */;
var1 = astbuilder__ASTBuilder__make_attr_read(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_attr_assign for (self: ASTBuilder, AExpr, MAttribute, AExpr): AAttrAssignExpr */
val* astbuilder__ASTBuilder__make_attr_assign(val* self, val* p0, val* p1, val* p2) {
val* var /* : AAttrAssignExpr */;
val* var_recv /* var recv: AExpr */;
val* var_attribute /* var attribute: MAttribute */;
val* var_value /* var value: AExpr */;
val* var1 /* : AAttrAssignExpr */;
var_recv = p0;
var_attribute = p1;
var_value = p2;
var1 = NEW_parser_nodes__AAttrAssignExpr(&type_parser_nodes__AAttrAssignExpr);
{
astbuilder__AAttrAssignExpr__make(var1, var_recv, var_attribute, var_value); /* Direct call astbuilder#AAttrAssignExpr#make on <var1:AAttrAssignExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_attr_assign for (self: Object, AExpr, MAttribute, AExpr): AAttrAssignExpr */
val* VIRTUAL_astbuilder__ASTBuilder__make_attr_assign(val* self, val* p0, val* p1, val* p2) {
val* var /* : AAttrAssignExpr */;
val* var1 /* : AAttrAssignExpr */;
var1 = astbuilder__ASTBuilder__make_attr_assign(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_do for (self: ASTBuilder): ADoExpr */
val* astbuilder__ASTBuilder__make_do(val* self) {
val* var /* : ADoExpr */;
val* var1 /* : ADoExpr */;
var1 = NEW_parser_nodes__ADoExpr(&type_parser_nodes__ADoExpr);
{
astbuilder__ADoExpr__make(var1); /* Direct call astbuilder#ADoExpr#make on <var1:ADoExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_do for (self: Object): ADoExpr */
val* VIRTUAL_astbuilder__ASTBuilder__make_do(val* self) {
val* var /* : ADoExpr */;
val* var1 /* : ADoExpr */;
var1 = astbuilder__ASTBuilder__make_do(self);
var = var1;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_break for (self: ASTBuilder, EscapeMark): ABreakExpr */
val* astbuilder__ASTBuilder__make_break(val* self, val* p0) {
val* var /* : ABreakExpr */;
val* var_escapemark /* var escapemark: EscapeMark */;
val* var1 /* : ABreakExpr */;
var_escapemark = p0;
var1 = NEW_parser_nodes__ABreakExpr(&type_parser_nodes__ABreakExpr);
{
astbuilder__ABreakExpr__make(var1, var_escapemark); /* Direct call astbuilder#ABreakExpr#make on <var1:ABreakExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_break for (self: Object, EscapeMark): ABreakExpr */
val* VIRTUAL_astbuilder__ASTBuilder__make_break(val* self, val* p0) {
val* var /* : ABreakExpr */;
val* var1 /* : ABreakExpr */;
var1 = astbuilder__ASTBuilder__make_break(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_if for (self: ASTBuilder, AExpr, nullable MType): AIfExpr */
val* astbuilder__ASTBuilder__make_if(val* self, val* p0, val* p1) {
val* var /* : AIfExpr */;
val* var_condition /* var condition: AExpr */;
val* var_mtype /* var mtype: nullable MType */;
val* var1 /* : AIfExpr */;
var_condition = p0;
var_mtype = p1;
var1 = NEW_parser_nodes__AIfExpr(&type_parser_nodes__AIfExpr);
{
astbuilder__AIfExpr__make(var1, var_condition, var_mtype); /* Direct call astbuilder#AIfExpr#make on <var1:AIfExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_if for (self: Object, AExpr, nullable MType): AIfExpr */
val* VIRTUAL_astbuilder__ASTBuilder__make_if(val* self, val* p0, val* p1) {
val* var /* : AIfExpr */;
val* var1 /* : AIfExpr */;
var1 = astbuilder__ASTBuilder__make_if(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#init for (self: ASTBuilder) */
void astbuilder__ASTBuilder__init(val* self) {
{
((void (*)(val*))(self->class->vft[COLOR_astbuilder__ASTBuilder__init]))(self) /* init on <self:ASTBuilder>*/;
}
RET_LABEL:;
}
/* method astbuilder#ASTBuilder#init for (self: Object) */
void VIRTUAL_astbuilder__ASTBuilder__init(val* self) {
{ /* Inline astbuilder#ASTBuilder#init (self) on <self:Object(ASTBuilder)> */
{
((void (*)(val*))(self->class->vft[COLOR_astbuilder__ASTBuilder__init]))(self) /* init on <self:Object(ASTBuilder)>*/;
}
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method astbuilder#AExpr#make_var_read for (self: AExpr): AVarExpr */
val* astbuilder__AExpr__make_var_read(val* self) {
val* var /* : AVarExpr */;
val* var1 /* : nullable Variable */;
val* var3 /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : nullable ANode */;
val* var13 /* : nullable ANode */;
val* var14 /* : null */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var_other18 /* var other: nullable Object */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : AExpr */;
val* var_place /* var place: AExpr */;
val* var23 /* : Variable */;
static val* varonce;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : FlatString */;
val* var28 /* : nullable MType */;
val* var30 /* : AVarAssignExpr */;
val* var_nvar /* var nvar: AVarAssignExpr */;
val* var32 /* : AVarExpr */;
val* var33 /* : nullable MType */;
val* var35 /* : nullable MType */;
{
{ /* Inline astbuilder#AExpr#variable_cache (self) on <self:AExpr> */
var3 = self->attrs[COLOR_astbuilder__AExpr___variable_cache].val; /* _variable_cache on <self:AExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_variable = var1;
var4 = NULL;
if (var_variable == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_variable,var4) on <var_variable:nullable Variable> */
var_other = var4;
{
{ /* Inline kernel#Object#is_same_instance (var_variable,var_other) on <var_variable:nullable Variable(Variable)> */
var10 = var_variable == var_other;
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
{
{ /* Inline parser_nodes#ANode#parent (self) on <self:AExpr> */
var13 = self->attrs[COLOR_parser_nodes__ANode___parent].val; /* _parent on <self:AExpr> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
var14 = NULL;
if (var11 == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var11,var14) on <var11:nullable ANode> */
var_other18 = var14;
{
var20 = ((short int (*)(val*, val*))(var11->class->vft[COLOR_kernel__Object___61d_61d]))(var11, var_other18) /* == on <var11:nullable ANode(ANode)>*/;
var19 = var20;
}
var21 = !var19;
var16 = var21;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var15 = var16;
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "astbuilder.nit", 117);
show_backtrace(1);
}
{
var22 = astbuilder__AExpr__detach_with_placeholder(self);
}
var_place = var22;
var23 = NEW_scope__Variable(&type_scope__Variable);
if (varonce) {
var24 = varonce;
} else {
var25 = "";
var26 = 0;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce = var24;
}
{
((void (*)(val*, val*))(var23->class->vft[COLOR_scope__Variable__name_61d]))(var23, var24) /* name= on <var23:Variable>*/;
}
{
((void (*)(val*))(var23->class->vft[COLOR_kernel__Object__init]))(var23) /* init on <var23:Variable>*/;
}
var_variable = var23;
{
var28 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:AExpr>*/;
}
{
{ /* Inline typing#Variable#declared_type= (var_variable,var28) on <var_variable:nullable Variable(Variable)> */
var_variable->attrs[COLOR_typing__Variable___declared_type].val = var28; /* _declared_type on <var_variable:nullable Variable(Variable)> */
RET_LABEL29:(void)0;
}
}
var30 = NEW_parser_nodes__AVarAssignExpr(&type_parser_nodes__AVarAssignExpr);
{
astbuilder__AVarAssignExpr__make(var30, var_variable, self); /* Direct call astbuilder#AVarAssignExpr#make on <var30:AVarAssignExpr>*/
}
var_nvar = var30;
{
parser_nodes__Prod__replace_with(var_place, var_nvar); /* Direct call parser_nodes#Prod#replace_with on <var_place:AExpr>*/
}
{
{ /* Inline astbuilder#AExpr#variable_cache= (self,var_variable) on <self:AExpr> */
self->attrs[COLOR_astbuilder__AExpr___variable_cache].val = var_variable; /* _variable_cache on <self:AExpr> */
RET_LABEL31:(void)0;
}
}
} else {
}
var32 = NEW_parser_nodes__AVarExpr(&type_parser_nodes__AVarExpr);
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:nullable Variable(Variable)> */
var35 = var_variable->attrs[COLOR_typing__Variable___declared_type].val; /* _declared_type on <var_variable:nullable Variable(Variable)> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "astbuilder.nit", 125);
show_backtrace(1);
}
{
astbuilder__AVarExpr__make(var32, var_variable, var33); /* Direct call astbuilder#AVarExpr#make on <var32:AVarExpr>*/
}
var = var32;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#AExpr#make_var_read for (self: Object): AVarExpr */
val* VIRTUAL_astbuilder__AExpr__make_var_read(val* self) {
val* var /* : AVarExpr */;
val* var1 /* : AVarExpr */;
var1 = astbuilder__AExpr__make_var_read(self);
var = var1;
RET_LABEL:;
return var;
}
/* method astbuilder#AExpr#variable_cache for (self: AExpr): nullable Variable */
val* astbuilder__AExpr__variable_cache(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
var1 = self->attrs[COLOR_astbuilder__AExpr___variable_cache].val; /* _variable_cache on <self:AExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method astbuilder#AExpr#variable_cache for (self: Object): nullable Variable */
val* VIRTUAL_astbuilder__AExpr__variable_cache(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
val* var3 /* : nullable Variable */;
{ /* Inline astbuilder#AExpr#variable_cache (self) on <self:Object(AExpr)> */
var3 = self->attrs[COLOR_astbuilder__AExpr___variable_cache].val; /* _variable_cache on <self:Object(AExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method astbuilder#AExpr#variable_cache= for (self: AExpr, nullable Variable) */
void astbuilder__AExpr__variable_cache_61d(val* self, val* p0) {
self->attrs[COLOR_astbuilder__AExpr___variable_cache].val = p0; /* _variable_cache on <self:AExpr> */
RET_LABEL:;
}
/* method astbuilder#AExpr#variable_cache= for (self: Object, nullable Variable) */
void VIRTUAL_astbuilder__AExpr__variable_cache_61d(val* self, val* p0) {
{ /* Inline astbuilder#AExpr#variable_cache= (self,p0) on <self:Object(AExpr)> */
self->attrs[COLOR_astbuilder__AExpr___variable_cache].val = p0; /* _variable_cache on <self:Object(AExpr)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method astbuilder#AExpr#detach_with_placeholder for (self: AExpr): AExpr */
val* astbuilder__AExpr__detach_with_placeholder(val* self) {
val* var /* : AExpr */;
val* var1 /* : APlaceholderExpr */;
val* var_h /* var h: APlaceholderExpr */;
var1 = NEW_astbuilder__APlaceholderExpr(&type_astbuilder__APlaceholderExpr);
{
astbuilder__APlaceholderExpr__make(var1); /* Direct call astbuilder#APlaceholderExpr#make on <var1:APlaceholderExpr>*/
}
var_h = var1;
{
parser_nodes__Prod__replace_with(self, var_h); /* Direct call parser_nodes#Prod#replace_with on <self:AExpr>*/
}
var = var_h;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#AExpr#detach_with_placeholder for (self: Object): AExpr */
val* VIRTUAL_astbuilder__AExpr__detach_with_placeholder(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = astbuilder__AExpr__detach_with_placeholder(self);
var = var1;
RET_LABEL:;
return var;
}
/* method astbuilder#AExpr#add for (self: AExpr, AExpr) */
void astbuilder__AExpr__add(val* self, val* p0) {
val* var_expr /* var expr: AExpr */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : FlatString */;
val* var4 /* : String */;
val* var5 /* : Array[Object] */;
long var6 /* : Int */;
val* var7 /* : NativeArray[Object] */;
val* var8 /* : String */;
var_expr = p0;
if (varonce) {
var = varonce;
} else {
var1 = "add not implemented in ";
var2 = 23;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
var4 = string__Object__inspect(self);
}
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var5 = array_instance Array[Object] */
var6 = 2;
var7 = NEW_array__NativeArray(var6, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var7)->values[0] = (val*) var;
((struct instance_array__NativeArray*)var7)->values[1] = (val*) var4;
{
((void (*)(val*, val*, long))(var5->class->vft[COLOR_array__Array__with_native]))(var5, var7, var6) /* with_native on <var5:Array[Object]>*/;
}
}
{
var8 = ((val* (*)(val*))(var5->class->vft[COLOR_string__Object__to_s]))(var5) /* to_s on <var5:Array[Object]>*/;
}
{
file__Object__print(self, var8); /* Direct call file#Object#print on <self:AExpr>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", "astbuilder.nit", 158);
show_backtrace(1);
RET_LABEL:;
}
/* method astbuilder#AExpr#add for (self: Object, AExpr) */
void VIRTUAL_astbuilder__AExpr__add(val* self, val* p0) {
astbuilder__AExpr__add(self, p0); /* Direct call astbuilder#AExpr#add on <self:Object(AExpr)>*/
RET_LABEL:;
}
/* method astbuilder#APlaceholderExpr#make for (self: APlaceholderExpr) */
void astbuilder__APlaceholderExpr__make(val* self) {
{
((void (*)(val*))(self->class->vft[COLOR_kernel__Object__init]))(self) /* init on <self:APlaceholderExpr>*/;
}
RET_LABEL:;
}
/* method astbuilder#APlaceholderExpr#make for (self: Object) */
void VIRTUAL_astbuilder__APlaceholderExpr__make(val* self) {
astbuilder__APlaceholderExpr__make(self); /* Direct call astbuilder#APlaceholderExpr#make on <self:Object(APlaceholderExpr)>*/
RET_LABEL:;
}
/* method astbuilder#ABlockExpr#make for (self: ABlockExpr) */
void astbuilder__ABlockExpr__make(val* self) {
short int var /* : Bool */;
var = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var) on <self:ABlockExpr> */
self->attrs[COLOR_typing__AExpr___is_typed].s = var; /* _is_typed on <self:ABlockExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method astbuilder#ABlockExpr#make for (self: Object) */
void VIRTUAL_astbuilder__ABlockExpr__make(val* self) {
astbuilder__ABlockExpr__make(self); /* Direct call astbuilder#ABlockExpr#make on <self:Object(ABlockExpr)>*/
RET_LABEL:;
}
/* method astbuilder#ABlockExpr#add for (self: ABlockExpr, AExpr) */
void astbuilder__ABlockExpr__add(val* self, val* p0) {
val* var_expr /* var expr: AExpr */;
val* var /* : ANodes[AExpr] */;
val* var2 /* : ANodes[AExpr] */;
var_expr = p0;
{
{ /* Inline parser_nodes#ABlockExpr#n_expr (self) on <self:ABlockExpr> */
var2 = self->attrs[COLOR_parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1321);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
abstract_collection__Sequence__add(var, var_expr); /* Direct call abstract_collection#Sequence#add on <var:ANodes[AExpr]>*/
}
RET_LABEL:;
}
/* method astbuilder#ABlockExpr#add for (self: Object, AExpr) */
void VIRTUAL_astbuilder__ABlockExpr__add(val* self, val* p0) {
astbuilder__ABlockExpr__add(self, p0); /* Direct call astbuilder#ABlockExpr#add on <self:Object(ABlockExpr)>*/
RET_LABEL:;
}
/* method astbuilder#ALoopExpr#make for (self: ALoopExpr) */
void astbuilder__ALoopExpr__make(val* self) {
val* var /* : TKwloop */;
short int var1 /* : Bool */;
val* var3 /* : ABlockExpr */;
val* var4 /* : nullable AExpr */;
val* var6 /* : nullable AExpr */;
short int var7 /* : Bool */;
var = NEW_parser_nodes__TKwloop(&type_parser_nodes__TKwloop);
{
((void (*)(val*))(var->class->vft[COLOR_kernel__Object__init]))(var) /* init on <var:TKwloop>*/;
}
self->attrs[COLOR_parser_nodes__ALoopExpr___n_kwloop].val = var; /* _n_kwloop on <self:ALoopExpr> */
var1 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var1) on <self:ALoopExpr> */
self->attrs[COLOR_typing__AExpr___is_typed].s = var1; /* _is_typed on <self:ALoopExpr> */
RET_LABEL2:(void)0;
}
}
var3 = NEW_parser_nodes__ABlockExpr(&type_parser_nodes__ABlockExpr);
{
((void (*)(val*))(var3->class->vft[COLOR_kernel__Object__init]))(var3) /* init on <var3:ABlockExpr>*/;
}
{
parser_prod__ALoopExpr__n_block_61d(self, var3); /* Direct call parser_prod#ALoopExpr#n_block= on <self:ALoopExpr>*/
}
{
{ /* Inline parser_nodes#ALoopExpr#n_block (self) on <self:ALoopExpr> */
var6 = self->attrs[COLOR_parser_nodes__ALoopExpr___n_block].val; /* _n_block on <self:ALoopExpr> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var7 = 1;
if (var4 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "astbuilder.nit", 194);
show_backtrace(1);
} else {
{ /* Inline typing#AExpr#is_typed= (var4,var7) on <var4:nullable AExpr> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 619);
show_backtrace(1);
}
var4->attrs[COLOR_typing__AExpr___is_typed].s = var7; /* _is_typed on <var4:nullable AExpr> */
RET_LABEL8:(void)0;
}
}
RET_LABEL:;
}
/* method astbuilder#ALoopExpr#make for (self: Object) */
void VIRTUAL_astbuilder__ALoopExpr__make(val* self) {
astbuilder__ALoopExpr__make(self); /* Direct call astbuilder#ALoopExpr#make on <self:Object(ALoopExpr)>*/
RET_LABEL:;
}
/* method astbuilder#ALoopExpr#add for (self: ALoopExpr, AExpr) */
void astbuilder__ALoopExpr__add(val* self, val* p0) {
val* var_expr /* var expr: AExpr */;
val* var /* : nullable AExpr */;
val* var2 /* : nullable AExpr */;
var_expr = p0;
{
{ /* Inline parser_nodes#ALoopExpr#n_block (self) on <self:ALoopExpr> */
var2 = self->attrs[COLOR_parser_nodes__ALoopExpr___n_block].val; /* _n_block on <self:ALoopExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "astbuilder.nit", 199);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var->class->vft[COLOR_astbuilder__AExpr__add]))(var, var_expr) /* add on <var:nullable AExpr>*/;
}
RET_LABEL:;
}
/* method astbuilder#ALoopExpr#add for (self: Object, AExpr) */
void VIRTUAL_astbuilder__ALoopExpr__add(val* self, val* p0) {
astbuilder__ALoopExpr__add(self, p0); /* Direct call astbuilder#ALoopExpr#add on <self:Object(ALoopExpr)>*/
RET_LABEL:;
}
/* method astbuilder#ADoExpr#make for (self: ADoExpr) */
void astbuilder__ADoExpr__make(val* self) {
val* var /* : TKwdo */;
short int var1 /* : Bool */;
val* var3 /* : ABlockExpr */;
val* var4 /* : nullable AExpr */;
val* var6 /* : nullable AExpr */;
short int var7 /* : Bool */;
var = NEW_parser_nodes__TKwdo(&type_parser_nodes__TKwdo);
{
((void (*)(val*))(var->class->vft[COLOR_kernel__Object__init]))(var) /* init on <var:TKwdo>*/;
}
self->attrs[COLOR_parser_nodes__ADoExpr___n_kwdo].val = var; /* _n_kwdo on <self:ADoExpr> */
var1 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var1) on <self:ADoExpr> */
self->attrs[COLOR_typing__AExpr___is_typed].s = var1; /* _is_typed on <self:ADoExpr> */
RET_LABEL2:(void)0;
}
}
var3 = NEW_parser_nodes__ABlockExpr(&type_parser_nodes__ABlockExpr);
{
((void (*)(val*))(var3->class->vft[COLOR_kernel__Object__init]))(var3) /* init on <var3:ABlockExpr>*/;
}
{
parser_prod__ADoExpr__n_block_61d(self, var3); /* Direct call parser_prod#ADoExpr#n_block= on <self:ADoExpr>*/
}
{
{ /* Inline parser_nodes#ADoExpr#n_block (self) on <self:ADoExpr> */
var6 = self->attrs[COLOR_parser_nodes__ADoExpr___n_block].val; /* _n_block on <self:ADoExpr> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var7 = 1;
if (var4 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "astbuilder.nit", 209);
show_backtrace(1);
} else {
{ /* Inline typing#AExpr#is_typed= (var4,var7) on <var4:nullable AExpr> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 619);
show_backtrace(1);
}
var4->attrs[COLOR_typing__AExpr___is_typed].s = var7; /* _is_typed on <var4:nullable AExpr> */
RET_LABEL8:(void)0;
}
}
RET_LABEL:;
}
/* method astbuilder#ADoExpr#make for (self: Object) */
void VIRTUAL_astbuilder__ADoExpr__make(val* self) {
astbuilder__ADoExpr__make(self); /* Direct call astbuilder#ADoExpr#make on <self:Object(ADoExpr)>*/
RET_LABEL:;
}
/* method astbuilder#ADoExpr#add for (self: ADoExpr, AExpr) */
void astbuilder__ADoExpr__add(val* self, val* p0) {
val* var_expr /* var expr: AExpr */;
val* var /* : nullable AExpr */;
val* var2 /* : nullable AExpr */;
var_expr = p0;
{
{ /* Inline parser_nodes#ADoExpr#n_block (self) on <self:ADoExpr> */
var2 = self->attrs[COLOR_parser_nodes__ADoExpr___n_block].val; /* _n_block on <self:ADoExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "astbuilder.nit", 225);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var->class->vft[COLOR_astbuilder__AExpr__add]))(var, var_expr) /* add on <var:nullable AExpr>*/;
}
RET_LABEL:;
}
/* method astbuilder#ADoExpr#add for (self: Object, AExpr) */
void VIRTUAL_astbuilder__ADoExpr__add(val* self, val* p0) {
astbuilder__ADoExpr__add(self, p0); /* Direct call astbuilder#ADoExpr#add on <self:Object(ADoExpr)>*/
RET_LABEL:;
}
/* method astbuilder#ABreakExpr#make for (self: ABreakExpr, EscapeMark) */
void astbuilder__ABreakExpr__make(val* self, val* p0) {
val* var_escapemark /* var escapemark: EscapeMark */;
val* var /* : TKwbreak */;
val* var2 /* : Array[AEscapeExpr] */;
val* var4 /* : Array[AEscapeExpr] */;
short int var5 /* : Bool */;
var_escapemark = p0;
var = NEW_parser_nodes__TKwbreak(&type_parser_nodes__TKwbreak);
{
((void (*)(val*))(var->class->vft[COLOR_kernel__Object__init]))(var) /* init on <var:TKwbreak>*/;
}
self->attrs[COLOR_parser_nodes__ABreakExpr___n_kwbreak].val = var; /* _n_kwbreak on <self:ABreakExpr> */
{
{ /* Inline scope#AEscapeExpr#escapemark= (self,var_escapemark) on <self:ABreakExpr> */
self->attrs[COLOR_scope__AEscapeExpr___escapemark].val = var_escapemark; /* _escapemark on <self:ABreakExpr> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline scope#EscapeMark#escapes (var_escapemark) on <var_escapemark:EscapeMark> */
var4 = var_escapemark->attrs[COLOR_scope__EscapeMark___escapes].val; /* _escapes on <var_escapemark:EscapeMark> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapes");
PRINT_ERROR(" (%s:%d)\n", "semantize/scope.nit", 57);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
array__Array__add(var2, self); /* Direct call array#Array#add on <var2:Array[AEscapeExpr]>*/
}
var5 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var5) on <self:ABreakExpr> */
self->attrs[COLOR_typing__AExpr___is_typed].s = var5; /* _is_typed on <self:ABreakExpr> */
RET_LABEL6:(void)0;
}
}
RET_LABEL:;
}
/* method astbuilder#ABreakExpr#make for (self: Object, EscapeMark) */
void VIRTUAL_astbuilder__ABreakExpr__make(val* self, val* p0) {
astbuilder__ABreakExpr__make(self, p0); /* Direct call astbuilder#ABreakExpr#make on <self:Object(ABreakExpr)>*/
RET_LABEL:;
}
/* method astbuilder#AIfExpr#make for (self: AIfExpr, AExpr, nullable MType) */
void astbuilder__AIfExpr__make(val* self, val* p0, val* p1) {
val* var_condition /* var condition: AExpr */;
val* var_mtype /* var mtype: nullable MType */;
val* var /* : TKwif */;
val* var1 /* : AExpr */;
val* var3 /* : ABlockExpr */;
val* var4 /* : ABlockExpr */;
short int var6 /* : Bool */;
var_condition = p0;
var_mtype = p1;
var = NEW_parser_nodes__TKwif(&type_parser_nodes__TKwif);
{
((void (*)(val*))(var->class->vft[COLOR_kernel__Object__init]))(var) /* init on <var:TKwif>*/;
}
self->attrs[COLOR_parser_nodes__AIfExpr___n_kwif].val = var; /* _n_kwif on <self:AIfExpr> */
self->attrs[COLOR_parser_nodes__AIfExpr___n_expr].val = var_condition; /* _n_expr on <self:AIfExpr> */
var1 = self->attrs[COLOR_parser_nodes__AIfExpr___n_expr].val; /* _n_expr on <self:AIfExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "astbuilder.nit", 244);
show_backtrace(1);
}
{
{ /* Inline parser_nodes#ANode#parent= (var1,self) on <var1:AExpr> */
var1->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var1:AExpr> */
RET_LABEL2:(void)0;
}
}
var3 = NEW_parser_nodes__ABlockExpr(&type_parser_nodes__ABlockExpr);
{
astbuilder__ABlockExpr__make(var3); /* Direct call astbuilder#ABlockExpr#make on <var3:ABlockExpr>*/
}
self->attrs[COLOR_parser_nodes__AIfExpr___n_then].val = var3; /* _n_then on <self:AIfExpr> */
var4 = NEW_parser_nodes__ABlockExpr(&type_parser_nodes__ABlockExpr);
{
astbuilder__ABlockExpr__make(var4); /* Direct call astbuilder#ABlockExpr#make on <var4:ABlockExpr>*/
}
self->attrs[COLOR_parser_nodes__AIfExpr___n_else].val = var4; /* _n_else on <self:AIfExpr> */
{
{ /* Inline typing#AExpr#mtype= (self,var_mtype) on <self:AIfExpr> */
self->attrs[COLOR_typing__AExpr___mtype].val = var_mtype; /* _mtype on <self:AIfExpr> */
RET_LABEL5:(void)0;
}
}
var6 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var6) on <self:AIfExpr> */
self->attrs[COLOR_typing__AExpr___is_typed].s = var6; /* _is_typed on <self:AIfExpr> */
RET_LABEL7:(void)0;
}
}
RET_LABEL:;
}
/* method astbuilder#AIfExpr#make for (self: Object, AExpr, nullable MType) */
void VIRTUAL_astbuilder__AIfExpr__make(val* self, val* p0, val* p1) {
astbuilder__AIfExpr__make(self, p0, p1); /* Direct call astbuilder#AIfExpr#make on <self:Object(AIfExpr)>*/
RET_LABEL:;
}
/* method astbuilder#AType#make for (self: AType) */
void astbuilder__AType__make(val* self) {
val* var /* : TClassid */;
var = NEW_parser_nodes__TClassid(&type_parser_nodes__TClassid);
{
((void (*)(val*))(var->class->vft[COLOR_kernel__Object__init]))(var) /* init on <var:TClassid>*/;
}
self->attrs[COLOR_parser_nodes__AType___n_id].val = var; /* _n_id on <self:AType> */
RET_LABEL:;
}
/* method astbuilder#AType#make for (self: Object) */
void VIRTUAL_astbuilder__AType__make(val* self) {
astbuilder__AType__make(self); /* Direct call astbuilder#AType#make on <self:Object(AType)>*/
RET_LABEL:;
}
/* method astbuilder#ADecIntExpr#make for (self: ADecIntExpr, Int, MType) */
void astbuilder__ADecIntExpr__make(val* self, long p0, val* p1) {
long var_value /* var value: Int */;
val* var_t /* var t: MType */;
val* var /* : nullable Int */;
val* var2 /* : TNumber */;
var_value = p0;
var_t = p1;
{
{ /* Inline literal#AIntExpr#value= (self,var_value) on <self:ADecIntExpr> */
var = BOX_kernel__Int(var_value); /* autobox from Int to nullable Int */
self->attrs[COLOR_literal__AIntExpr___value].val = var; /* _value on <self:ADecIntExpr> */
RET_LABEL1:(void)0;
}
}
var2 = NEW_parser_nodes__TNumber(&type_parser_nodes__TNumber);
{
((void (*)(val*))(var2->class->vft[COLOR_kernel__Object__init]))(var2) /* init on <var2:TNumber>*/;
}
self->attrs[COLOR_parser_nodes__ADecIntExpr___n_number].val = var2; /* _n_number on <self:ADecIntExpr> */
{
{ /* Inline typing#AExpr#mtype= (self,var_t) on <self:ADecIntExpr> */
self->attrs[COLOR_typing__AExpr___mtype].val = var_t; /* _mtype on <self:ADecIntExpr> */
RET_LABEL3:(void)0;
}
}
RET_LABEL:;
}
/* method astbuilder#ADecIntExpr#make for (self: Object, Int, MType) */
void VIRTUAL_astbuilder__ADecIntExpr__make(val* self, long p0, val* p1) {
astbuilder__ADecIntExpr__make(self, p0, p1); /* Direct call astbuilder#ADecIntExpr#make on <self:Object(ADecIntExpr)>*/
RET_LABEL:;
}
/* method astbuilder#ANewExpr#make for (self: ANewExpr, CallSite, nullable Array[AExpr]) */
void astbuilder__ANewExpr__make(val* self, val* p0, val* p1) {
val* var_callsite /* var callsite: CallSite */;
val* var_args /* var args: nullable Array[AExpr] */;
val* var /* : TKwnew */;
val* var1 /* : AType */;
val* var2 /* : AListExprs */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : AExprs */;
val* var12 /* : AExprs */;
val* var13 /* : ANodes[AExpr] */;
val* var15 /* : ANodes[AExpr] */;
val* var17 /* : MType */;
val* var19 /* : MType */;
short int var20 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var22 /* : MMethod */;
val* var24 /* : MMethod */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : MSignature */;
val* var30 /* : MSignature */;
val* var31 /* : nullable MType */;
val* var33 /* : nullable MType */;
val* var35 /* : MType */;
val* var37 /* : MType */;
short int var39 /* : Bool */;
var_callsite = p0;
var_args = p1;
var = NEW_parser_nodes__TKwnew(&type_parser_nodes__TKwnew);
{
((void (*)(val*))(var->class->vft[COLOR_kernel__Object__init]))(var) /* init on <var:TKwnew>*/;
}
self->attrs[COLOR_parser_nodes__ANewExpr___n_kwnew].val = var; /* _n_kwnew on <self:ANewExpr> */
var1 = NEW_parser_nodes__AType(&type_parser_nodes__AType);
{
astbuilder__AType__make(var1); /* Direct call astbuilder#AType#make on <var1:AType>*/
}
self->attrs[COLOR_parser_nodes__ANewExpr___n_type].val = var1; /* _n_type on <self:ANewExpr> */
var2 = NEW_parser_nodes__AListExprs(&type_parser_nodes__AListExprs);
{
((void (*)(val*))(var2->class->vft[COLOR_kernel__Object__init]))(var2) /* init on <var2:AListExprs>*/;
}
self->attrs[COLOR_parser_nodes__ANewExpr___n_args].val = var2; /* _n_args on <self:ANewExpr> */
var3 = NULL;
if (var_args == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_args,var3) on <var_args:nullable Array[AExpr]> */
var_other = var3;
{
var8 = ((short int (*)(val*, val*))(var_args->class->vft[COLOR_kernel__Object___61d_61d]))(var_args, var_other) /* == on <var_args:nullable Array[AExpr](Array[AExpr])>*/;
var7 = var8;
}
var9 = !var7;
var5 = var9;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
{
{ /* Inline parser_nodes#ANewExpr#n_args (self) on <self:ANewExpr> */
var12 = self->attrs[COLOR_parser_nodes__ANewExpr___n_args].val; /* _n_args on <self:ANewExpr> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1614);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var10) on <var10:AExprs> */
var15 = var10->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var10:AExprs> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1946);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
abstract_collection__SimpleCollection__add_all(var13, var_args); /* Direct call abstract_collection#SimpleCollection#add_all on <var13:ANodes[AExpr]>*/
}
} else {
}
{
{ /* Inline typing#ANewExpr#callsite= (self,var_callsite) on <self:ANewExpr> */
self->attrs[COLOR_typing__ANewExpr___callsite].val = var_callsite; /* _callsite on <self:ANewExpr> */
RET_LABEL16:(void)0;
}
}
{
{ /* Inline typing#CallSite#recv (var_callsite) on <var_callsite:CallSite> */
var19 = var_callsite->attrs[COLOR_typing__CallSite___recv].val; /* _recv on <var_callsite:CallSite> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 469);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
/* <var17:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var17->type->table_size) {
var20 = 0;
} else {
var20 = var17->type->type_table[cltype] == idtype;
}
if (unlikely(!var20)) {
var_class_name = var17 == NULL ? "null" : var17->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "astbuilder.nit", 278);
show_backtrace(1);
}
{
{ /* Inline typing#ANewExpr#recvtype= (self,var17) on <self:ANewExpr> */
self->attrs[COLOR_typing__ANewExpr___recvtype].val = var17; /* _recvtype on <self:ANewExpr> */
RET_LABEL21:(void)0;
}
}
{
{ /* Inline typing#CallSite#mproperty (var_callsite) on <var_callsite:CallSite> */
var24 = var_callsite->attrs[COLOR_typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:CallSite> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 483);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline model#MMethod#is_new (var22) on <var22:MMethod> */
var27 = var22->attrs[COLOR_model__MMethod___is_new].s; /* _is_new on <var22:MMethod> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
if (var25){
{
{ /* Inline typing#CallSite#msignature (var_callsite) on <var_callsite:CallSite> */
var30 = var_callsite->attrs[COLOR_typing__CallSite___msignature].val; /* _msignature on <var_callsite:CallSite> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 490);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline model#MSignature#return_mtype (var28) on <var28:MSignature> */
var33 = var28->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <var28:MSignature> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var31) on <self:ANewExpr> */
self->attrs[COLOR_typing__AExpr___mtype].val = var31; /* _mtype on <self:ANewExpr> */
RET_LABEL34:(void)0;
}
}
} else {
{
{ /* Inline typing#CallSite#recv (var_callsite) on <var_callsite:CallSite> */
var37 = var_callsite->attrs[COLOR_typing__CallSite___recv].val; /* _recv on <var_callsite:CallSite> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 469);
show_backtrace(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var35) on <self:ANewExpr> */
self->attrs[COLOR_typing__AExpr___mtype].val = var35; /* _mtype on <self:ANewExpr> */
RET_LABEL38:(void)0;
}
}
}
var39 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var39) on <self:ANewExpr> */
self->attrs[COLOR_typing__AExpr___is_typed].s = var39; /* _is_typed on <self:ANewExpr> */
RET_LABEL40:(void)0;
}
}
RET_LABEL:;
}
/* method astbuilder#ANewExpr#make for (self: Object, CallSite, nullable Array[AExpr]) */
void VIRTUAL_astbuilder__ANewExpr__make(val* self, val* p0, val* p1) {
astbuilder__ANewExpr__make(self, p0, p1); /* Direct call astbuilder#ANewExpr#make on <self:Object(ANewExpr)>*/
RET_LABEL:;
}
/* method astbuilder#ACallExpr#make for (self: ACallExpr, AExpr, CallSite, nullable Array[AExpr]) */
void astbuilder__ACallExpr__make(val* self, val* p0, val* p1, val* p2) {
val* var_recv /* var recv: AExpr */;
val* var_callsite /* var callsite: CallSite */;
val* var_args /* var args: nullable Array[AExpr] */;
val* var /* : AListExprs */;
val* var1 /* : TId */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : AExprs */;
val* var11 /* : AExprs */;
val* var12 /* : ANodes[AExpr] */;
val* var14 /* : ANodes[AExpr] */;
val* var16 /* : MSignature */;
val* var18 /* : MSignature */;
val* var19 /* : nullable MType */;
val* var21 /* : nullable MType */;
short int var23 /* : Bool */;
var_recv = p0;
var_callsite = p1;
var_args = p2;
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_recv; /* _n_expr on <self:ACallExpr> */
var = NEW_parser_nodes__AListExprs(&type_parser_nodes__AListExprs);
{
((void (*)(val*))(var->class->vft[COLOR_kernel__Object__init]))(var) /* init on <var:AListExprs>*/;
}
self->attrs[COLOR_parser_nodes__ACallFormExpr___n_args].val = var; /* _n_args on <self:ACallExpr> */
var1 = NEW_parser_nodes__TId(&type_parser_nodes__TId);
{
((void (*)(val*))(var1->class->vft[COLOR_kernel__Object__init]))(var1) /* init on <var1:TId>*/;
}
self->attrs[COLOR_parser_nodes__ACallFormExpr___n_id].val = var1; /* _n_id on <self:ACallExpr> */
var2 = NULL;
if (var_args == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_args,var2) on <var_args:nullable Array[AExpr]> */
var_other = var2;
{
var7 = ((short int (*)(val*, val*))(var_args->class->vft[COLOR_kernel__Object___61d_61d]))(var_args, var_other) /* == on <var_args:nullable Array[AExpr](Array[AExpr])>*/;
var6 = var7;
}
var8 = !var6;
var4 = var8;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
{
{ /* Inline parser_nodes#ACallFormExpr#n_args (self) on <self:ACallExpr> */
var11 = self->attrs[COLOR_parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallExpr> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1647);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var9) on <var9:AExprs> */
var14 = var9->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var9:AExprs> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1946);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
abstract_collection__SimpleCollection__add_all(var12, var_args); /* Direct call abstract_collection#SimpleCollection#add_all on <var12:ANodes[AExpr]>*/
}
} else {
}
{
{ /* Inline typing#ASendExpr#callsite= (self,var_callsite) on <self:ACallExpr> */
self->attrs[COLOR_typing__ASendExpr___callsite].val = var_callsite; /* _callsite on <self:ACallExpr> */
RET_LABEL15:(void)0;
}
}
{
{ /* Inline typing#CallSite#msignature (var_callsite) on <var_callsite:CallSite> */
var18 = var_callsite->attrs[COLOR_typing__CallSite___msignature].val; /* _msignature on <var_callsite:CallSite> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 490);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline model#MSignature#return_mtype (var16) on <var16:MSignature> */
var21 = var16->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <var16:MSignature> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var19) on <self:ACallExpr> */
self->attrs[COLOR_typing__AExpr___mtype].val = var19; /* _mtype on <self:ACallExpr> */
RET_LABEL22:(void)0;
}
}
var23 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var23) on <self:ACallExpr> */
self->attrs[COLOR_typing__AExpr___is_typed].s = var23; /* _is_typed on <self:ACallExpr> */
RET_LABEL24:(void)0;
}
}
RET_LABEL:;
}
/* method astbuilder#ACallExpr#make for (self: Object, AExpr, CallSite, nullable Array[AExpr]) */
void VIRTUAL_astbuilder__ACallExpr__make(val* self, val* p0, val* p1, val* p2) {
astbuilder__ACallExpr__make(self, p0, p1, p2); /* Direct call astbuilder#ACallExpr#make on <self:Object(ACallExpr)>*/
RET_LABEL:;
}
/* method astbuilder#AAttrExpr#make for (self: AAttrExpr, AExpr, MAttribute, MType) */
void astbuilder__AAttrExpr__make(val* self, val* p0, val* p1, val* p2) {
val* var_recv /* var recv: AExpr */;
val* var_attribute /* var attribute: MAttribute */;
val* var_t /* var t: MType */;
val* var /* : TAttrid */;
var_recv = p0;
var_attribute = p1;
var_t = p2;
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val = var_recv; /* _n_expr on <self:AAttrExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_recv,self) on <var_recv:AExpr> */
var_recv->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_recv:AExpr> */
RET_LABEL1:(void)0;
}
}
var = NEW_parser_nodes__TAttrid(&type_parser_nodes__TAttrid);
{
((void (*)(val*))(var->class->vft[COLOR_kernel__Object__init]))(var) /* init on <var:TAttrid>*/;
}
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val = var; /* _n_id on <self:AAttrExpr> */
{
{ /* Inline typing#AAttrFormExpr#mproperty= (self,var_attribute) on <self:AAttrExpr> */
self->attrs[COLOR_typing__AAttrFormExpr___mproperty].val = var_attribute; /* _mproperty on <self:AAttrExpr> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var_t) on <self:AAttrExpr> */
self->attrs[COLOR_typing__AExpr___mtype].val = var_t; /* _mtype on <self:AAttrExpr> */
RET_LABEL3:(void)0;
}
}
RET_LABEL:;
}
/* method astbuilder#AAttrExpr#make for (self: Object, AExpr, MAttribute, MType) */
void VIRTUAL_astbuilder__AAttrExpr__make(val* self, val* p0, val* p1, val* p2) {
astbuilder__AAttrExpr__make(self, p0, p1, p2); /* Direct call astbuilder#AAttrExpr#make on <self:Object(AAttrExpr)>*/
RET_LABEL:;
}
/* method astbuilder#AAttrAssignExpr#make for (self: AAttrAssignExpr, AExpr, MAttribute, AExpr) */
void astbuilder__AAttrAssignExpr__make(val* self, val* p0, val* p1, val* p2) {
val* var_recv /* var recv: AExpr */;
val* var_attribute /* var attribute: MAttribute */;
val* var_value /* var value: AExpr */;
val* var /* : TAttrid */;
val* var3 /* : TAssign */;
val* var5 /* : nullable MType */;
var_recv = p0;
var_attribute = p1;
var_value = p2;
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val = var_recv; /* _n_expr on <self:AAttrAssignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_recv,self) on <var_recv:AExpr> */
var_recv->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_recv:AExpr> */
RET_LABEL1:(void)0;
}
}
var = NEW_parser_nodes__TAttrid(&type_parser_nodes__TAttrid);
{
((void (*)(val*))(var->class->vft[COLOR_kernel__Object__init]))(var) /* init on <var:TAttrid>*/;
}
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val = var; /* _n_id on <self:AAttrAssignExpr> */
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val = var_value; /* _n_value on <self:AAttrAssignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_value,self) on <var_value:AExpr> */
var_value->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_value:AExpr> */
RET_LABEL2:(void)0;
}
}
var3 = NEW_parser_nodes__TAssign(&type_parser_nodes__TAssign);
{
((void (*)(val*))(var3->class->vft[COLOR_kernel__Object__init]))(var3) /* init on <var3:TAssign>*/;
}
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val = var3; /* _n_assign on <self:AAttrAssignExpr> */
{
{ /* Inline typing#AAttrFormExpr#mproperty= (self,var_attribute) on <self:AAttrAssignExpr> */
self->attrs[COLOR_typing__AAttrFormExpr___mproperty].val = var_attribute; /* _mproperty on <self:AAttrAssignExpr> */
RET_LABEL4:(void)0;
}
}
{
var5 = ((val* (*)(val*))(var_value->class->vft[COLOR_typing__AExpr__mtype]))(var_value) /* mtype on <var_value:AExpr>*/;
}
{
{ /* Inline typing#AExpr#mtype= (self,var5) on <self:AAttrAssignExpr> */
self->attrs[COLOR_typing__AExpr___mtype].val = var5; /* _mtype on <self:AAttrAssignExpr> */
RET_LABEL6:(void)0;
}
}
RET_LABEL:;
}
/* method astbuilder#AAttrAssignExpr#make for (self: Object, AExpr, MAttribute, AExpr) */
void VIRTUAL_astbuilder__AAttrAssignExpr__make(val* self, val* p0, val* p1, val* p2) {
astbuilder__AAttrAssignExpr__make(self, p0, p1, p2); /* Direct call astbuilder#AAttrAssignExpr#make on <self:Object(AAttrAssignExpr)>*/
RET_LABEL:;
}
/* method astbuilder#AVarExpr#make for (self: AVarExpr, Variable, MType) */
void astbuilder__AVarExpr__make(val* self, val* p0, val* p1) {
val* var_v /* var v: Variable */;
val* var_mtype /* var mtype: MType */;
val* var /* : TId */;
var_v = p0;
var_mtype = p1;
var = NEW_parser_nodes__TId(&type_parser_nodes__TId);
{
((void (*)(val*))(var->class->vft[COLOR_kernel__Object__init]))(var) /* init on <var:TId>*/;
}
self->attrs[COLOR_parser_nodes__AVarFormExpr___n_id].val = var; /* _n_id on <self:AVarExpr> */
{
{ /* Inline scope#AVarFormExpr#variable= (self,var_v) on <self:AVarExpr> */
self->attrs[COLOR_scope__AVarFormExpr___variable].val = var_v; /* _variable on <self:AVarExpr> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var_mtype) on <self:AVarExpr> */
self->attrs[COLOR_typing__AExpr___mtype].val = var_mtype; /* _mtype on <self:AVarExpr> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method astbuilder#AVarExpr#make for (self: Object, Variable, MType) */
void VIRTUAL_astbuilder__AVarExpr__make(val* self, val* p0, val* p1) {
astbuilder__AVarExpr__make(self, p0, p1); /* Direct call astbuilder#AVarExpr#make on <self:Object(AVarExpr)>*/
RET_LABEL:;
}
/* method astbuilder#AVarAssignExpr#make for (self: AVarAssignExpr, Variable, AExpr) */
void astbuilder__AVarAssignExpr__make(val* self, val* p0, val* p1) {
val* var_v /* var v: Variable */;
val* var_value /* var value: AExpr */;
val* var /* : TId */;
val* var2 /* : TAssign */;
val* var4 /* : nullable MType */;
var_v = p0;
var_value = p1;
var = NEW_parser_nodes__TId(&type_parser_nodes__TId);
{
((void (*)(val*))(var->class->vft[COLOR_kernel__Object__init]))(var) /* init on <var:TId>*/;
}
self->attrs[COLOR_parser_nodes__AVarFormExpr___n_id].val = var; /* _n_id on <self:AVarAssignExpr> */
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val = var_value; /* _n_value on <self:AVarAssignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_value,self) on <var_value:AExpr> */
var_value->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_value:AExpr> */
RET_LABEL1:(void)0;
}
}
var2 = NEW_parser_nodes__TAssign(&type_parser_nodes__TAssign);
{
((void (*)(val*))(var2->class->vft[COLOR_kernel__Object__init]))(var2) /* init on <var2:TAssign>*/;
}
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val = var2; /* _n_assign on <self:AVarAssignExpr> */
{
{ /* Inline scope#AVarFormExpr#variable= (self,var_v) on <self:AVarAssignExpr> */
self->attrs[COLOR_scope__AVarFormExpr___variable].val = var_v; /* _variable on <self:AVarAssignExpr> */
RET_LABEL3:(void)0;
}
}
{
var4 = ((val* (*)(val*))(var_value->class->vft[COLOR_typing__AExpr__mtype]))(var_value) /* mtype on <var_value:AExpr>*/;
}
{
{ /* Inline typing#AExpr#mtype= (self,var4) on <self:AVarAssignExpr> */
self->attrs[COLOR_typing__AExpr___mtype].val = var4; /* _mtype on <self:AVarAssignExpr> */
RET_LABEL5:(void)0;
}
}
RET_LABEL:;
}
/* method astbuilder#AVarAssignExpr#make for (self: Object, Variable, AExpr) */
void VIRTUAL_astbuilder__AVarAssignExpr__make(val* self, val* p0, val* p1) {
astbuilder__AVarAssignExpr__make(self, p0, p1); /* Direct call astbuilder#AVarAssignExpr#make on <self:Object(AVarAssignExpr)>*/
RET_LABEL:;
}
