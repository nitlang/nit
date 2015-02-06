#include "nit__astbuilder.sep.0.h"
/* method astbuilder#ASTBuilder#mmodule for (self: ASTBuilder): MModule */
val* nit___nit__ASTBuilder___mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_nit__astbuilder__ASTBuilder___mmodule].val; /* _mmodule on <self:ASTBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__astbuilder, 25);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#mmodule= for (self: ASTBuilder, MModule) */
void nit___nit__ASTBuilder___mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nit__astbuilder__ASTBuilder___mmodule].val = p0; /* _mmodule on <self:ASTBuilder> */
RET_LABEL:;
}
/* method astbuilder#ASTBuilder#anchor for (self: ASTBuilder): nullable MClassType */
val* nit___nit__ASTBuilder___anchor(val* self) {
val* var /* : nullable MClassType */;
val* var1 /* : nullable MClassType */;
var1 = self->attrs[COLOR_nit__astbuilder__ASTBuilder___anchor].val; /* _anchor on <self:ASTBuilder> */
var = var1;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#anchor= for (self: ASTBuilder, nullable MClassType) */
void nit___nit__ASTBuilder___anchor_61d(val* self, val* p0) {
self->attrs[COLOR_nit__astbuilder__ASTBuilder___anchor].val = p0; /* _anchor on <self:ASTBuilder> */
RET_LABEL:;
}
/* method astbuilder#ASTBuilder#make_int for (self: ASTBuilder, Int): AIntExpr */
val* nit___nit__ASTBuilder___make_int(val* self, long p0) {
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
var1 = NEW_nit__ADecIntExpr(&type_nit__ADecIntExpr);
{
{ /* Inline astbuilder#ASTBuilder#mmodule (self) on <self:ASTBuilder> */
var4 = self->attrs[COLOR_nit__astbuilder__ASTBuilder___mmodule].val; /* _mmodule on <self:ASTBuilder> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__astbuilder, 25);
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
var8 = standard___standard__NativeString___to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
{
var9 = nit__model___MModule___get_primitive_class(var2, var5);
}
{
{ /* Inline model#MClass#mclass_type (var9) on <var9:MClass> */
var12 = var9->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var9:MClass> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
nit__astbuilder___ADecIntExpr___make(var1, var_value, var10); /* Direct call astbuilder#ADecIntExpr#make on <var1:ADecIntExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_new for (self: ASTBuilder, CallSite, nullable Array[AExpr]): ANewExpr */
val* nit___nit__ASTBuilder___make_new(val* self, val* p0, val* p1) {
val* var /* : ANewExpr */;
val* var_callsite /* var callsite: CallSite */;
val* var_args /* var args: nullable Array[AExpr] */;
val* var1 /* : ANewExpr */;
var_callsite = p0;
var_args = p1;
var1 = NEW_nit__ANewExpr(&type_nit__ANewExpr);
{
nit__astbuilder___ANewExpr___make(var1, var_callsite, var_args); /* Direct call astbuilder#ANewExpr#make on <var1:ANewExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_call for (self: ASTBuilder, AExpr, CallSite, nullable Array[AExpr]): ACallExpr */
val* nit___nit__ASTBuilder___make_call(val* self, val* p0, val* p1, val* p2) {
val* var /* : ACallExpr */;
val* var_recv /* var recv: AExpr */;
val* var_callsite /* var callsite: CallSite */;
val* var_args /* var args: nullable Array[AExpr] */;
val* var1 /* : ACallExpr */;
var_recv = p0;
var_callsite = p1;
var_args = p2;
var1 = NEW_nit__ACallExpr(&type_nit__ACallExpr);
{
nit__astbuilder___ACallExpr___make(var1, var_recv, var_callsite, var_args); /* Direct call astbuilder#ACallExpr#make on <var1:ACallExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_block for (self: ASTBuilder): ABlockExpr */
val* nit___nit__ASTBuilder___make_block(val* self) {
val* var /* : ABlockExpr */;
val* var1 /* : ABlockExpr */;
var1 = NEW_nit__ABlockExpr(&type_nit__ABlockExpr);
{
nit__astbuilder___ABlockExpr___make(var1); /* Direct call astbuilder#ABlockExpr#make on <var1:ABlockExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_loop for (self: ASTBuilder): ALoopExpr */
val* nit___nit__ASTBuilder___make_loop(val* self) {
val* var /* : ALoopExpr */;
val* var1 /* : ALoopExpr */;
var1 = NEW_nit__ALoopExpr(&type_nit__ALoopExpr);
{
nit__astbuilder___ALoopExpr___make(var1); /* Direct call astbuilder#ALoopExpr#make on <var1:ALoopExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_var_read for (self: ASTBuilder, Variable, MType): AVarExpr */
val* nit___nit__ASTBuilder___make_var_read(val* self, val* p0, val* p1) {
val* var /* : AVarExpr */;
val* var_variable /* var variable: Variable */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : AVarExpr */;
var_variable = p0;
var_mtype = p1;
var1 = NEW_nit__AVarExpr(&type_nit__AVarExpr);
{
nit__astbuilder___AVarExpr___make(var1, var_variable, var_mtype); /* Direct call astbuilder#AVarExpr#make on <var1:AVarExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_var_assign for (self: ASTBuilder, Variable, AExpr): AVarAssignExpr */
val* nit___nit__ASTBuilder___make_var_assign(val* self, val* p0, val* p1) {
val* var /* : AVarAssignExpr */;
val* var_variable /* var variable: Variable */;
val* var_value /* var value: AExpr */;
val* var1 /* : AVarAssignExpr */;
var_variable = p0;
var_value = p1;
var1 = NEW_nit__AVarAssignExpr(&type_nit__AVarAssignExpr);
{
nit__astbuilder___AVarAssignExpr___make(var1, var_variable, var_value); /* Direct call astbuilder#AVarAssignExpr#make on <var1:AVarAssignExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_attr_read for (self: ASTBuilder, AExpr, MAttribute): AAttrExpr */
val* nit___nit__ASTBuilder___make_attr_read(val* self, val* p0, val* p1) {
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
var3 = var_attribute->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var_attribute:MAttribute> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1773);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MAttributeDef#static_mtype (var1) on <var1:MPropDef(MAttributeDef)> */
var6 = var1->attrs[COLOR_nit__model__MAttributeDef___static_mtype].val; /* _static_mtype on <var1:MPropDef(MAttributeDef)> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = ((val* (*)(val* self))(var_recv->class->vft[COLOR_nit__typing__AExpr__mtype]))(var_recv) /* mtype on <var_recv:AExpr>*/;
}
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__astbuilder, 77);
show_backtrace(1);
}
{
{ /* Inline astbuilder#ASTBuilder#anchor (self) on <self:ASTBuilder> */
var10 = self->attrs[COLOR_nit__astbuilder__ASTBuilder___anchor].val; /* _anchor on <self:ASTBuilder> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline astbuilder#ASTBuilder#mmodule (self) on <self:ASTBuilder> */
var13 = self->attrs[COLOR_nit__astbuilder__ASTBuilder___mmodule].val; /* _mmodule on <self:ASTBuilder> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__astbuilder, 25);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
var14 = 1;
if (var4 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__astbuilder, 77);
show_backtrace(1);
} else {
var15 = ((val* (*)(val* self, val* p0, val* p1, val* p2, short int p3))(var4->class->vft[COLOR_nit__model__MType__resolve_for]))(var4, var7, var8, var11, var14) /* resolve_for on <var4:nullable MType>*/;
}
var_mtype = var15;
var16 = NEW_nit__AAttrExpr(&type_nit__AAttrExpr);
{
nit__astbuilder___AAttrExpr___make(var16, var_recv, var_attribute, var_mtype); /* Direct call astbuilder#AAttrExpr#make on <var16:AAttrExpr>*/
}
var = var16;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_attr_assign for (self: ASTBuilder, AExpr, MAttribute, AExpr): AAttrAssignExpr */
val* nit___nit__ASTBuilder___make_attr_assign(val* self, val* p0, val* p1, val* p2) {
val* var /* : AAttrAssignExpr */;
val* var_recv /* var recv: AExpr */;
val* var_attribute /* var attribute: MAttribute */;
val* var_value /* var value: AExpr */;
val* var1 /* : AAttrAssignExpr */;
var_recv = p0;
var_attribute = p1;
var_value = p2;
var1 = NEW_nit__AAttrAssignExpr(&type_nit__AAttrAssignExpr);
{
nit__astbuilder___AAttrAssignExpr___make(var1, var_recv, var_attribute, var_value); /* Direct call astbuilder#AAttrAssignExpr#make on <var1:AAttrAssignExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_do for (self: ASTBuilder): ADoExpr */
val* nit___nit__ASTBuilder___make_do(val* self) {
val* var /* : ADoExpr */;
val* var1 /* : ADoExpr */;
var1 = NEW_nit__ADoExpr(&type_nit__ADoExpr);
{
nit__astbuilder___ADoExpr___make(var1); /* Direct call astbuilder#ADoExpr#make on <var1:ADoExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_break for (self: ASTBuilder, EscapeMark): ABreakExpr */
val* nit___nit__ASTBuilder___make_break(val* self, val* p0) {
val* var /* : ABreakExpr */;
val* var_escapemark /* var escapemark: EscapeMark */;
val* var1 /* : ABreakExpr */;
var_escapemark = p0;
var1 = NEW_nit__ABreakExpr(&type_nit__ABreakExpr);
{
nit__astbuilder___ABreakExpr___make(var1, var_escapemark); /* Direct call astbuilder#ABreakExpr#make on <var1:ABreakExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_if for (self: ASTBuilder, AExpr, nullable MType): AIfExpr */
val* nit___nit__ASTBuilder___make_if(val* self, val* p0, val* p1) {
val* var /* : AIfExpr */;
val* var_condition /* var condition: AExpr */;
val* var_mtype /* var mtype: nullable MType */;
val* var1 /* : AIfExpr */;
var_condition = p0;
var_mtype = p1;
var1 = NEW_nit__AIfExpr(&type_nit__AIfExpr);
{
nit__astbuilder___AIfExpr___make(var1, var_condition, var_mtype); /* Direct call astbuilder#AIfExpr#make on <var1:AIfExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#init for (self: ASTBuilder) */
void nit___nit__ASTBuilder___standard__kernel__Object__init(val* self) {
{
((void (*)(val* self))(self->class->vft[COLOR_nit___nit__ASTBuilder___standard__kernel__Object__init]))(self) /* init on <self:ASTBuilder>*/;
}
RET_LABEL:;
}
/* method astbuilder#AExpr#make_var_read for (self: AExpr): AVarExpr */
val* nit__astbuilder___AExpr___make_var_read(val* self) {
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
val* var21 /* : AExpr */;
val* var_place /* var place: AExpr */;
val* var22 /* : Variable */;
static val* varonce;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : FlatString */;
val* var27 /* : nullable MType */;
val* var29 /* : AVarAssignExpr */;
val* var_nvar /* var nvar: AVarAssignExpr */;
val* var31 /* : AVarExpr */;
val* var32 /* : nullable MType */;
val* var34 /* : nullable MType */;
{
{ /* Inline astbuilder#AExpr#variable_cache (self) on <self:AExpr> */
var3 = self->attrs[COLOR_nit__astbuilder__AExpr___variable_cache].val; /* _variable_cache on <self:AExpr> */
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
var13 = self->attrs[COLOR_nit__parser_nodes__ANode___parent].val; /* _parent on <self:AExpr> */
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
var19 = ((short int (*)(val* self, val* p0))(var11->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var11, var_other18) /* == on <var11:nullable ANode(ANode)>*/;
}
var20 = !var19;
var16 = var20;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var15 = var16;
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__astbuilder, 117);
show_backtrace(1);
}
{
var21 = nit__astbuilder___AExpr___detach_with_placeholder(self);
}
var_place = var21;
var22 = NEW_nit__Variable(&type_nit__Variable);
if (varonce) {
var23 = varonce;
} else {
var24 = "";
var25 = 0;
var26 = standard___standard__NativeString___to_s_with_length(var24, var25);
var23 = var26;
varonce = var23;
}
{
((void (*)(val* self, val* p0))(var22->class->vft[COLOR_nit__scope__Variable__name_61d]))(var22, var23) /* name= on <var22:Variable>*/;
}
{
((void (*)(val* self))(var22->class->vft[COLOR_standard__kernel__Object__init]))(var22) /* init on <var22:Variable>*/;
}
var_variable = var22;
{
var27 = ((val* (*)(val* self))(self->class->vft[COLOR_nit__typing__AExpr__mtype]))(self) /* mtype on <self:AExpr>*/;
}
{
{ /* Inline typing#Variable#declared_type= (var_variable,var27) on <var_variable:nullable Variable(Variable)> */
var_variable->attrs[COLOR_nit__typing__Variable___declared_type].val = var27; /* _declared_type on <var_variable:nullable Variable(Variable)> */
RET_LABEL28:(void)0;
}
}
var29 = NEW_nit__AVarAssignExpr(&type_nit__AVarAssignExpr);
{
nit__astbuilder___AVarAssignExpr___make(var29, var_variable, self); /* Direct call astbuilder#AVarAssignExpr#make on <var29:AVarAssignExpr>*/
}
var_nvar = var29;
{
nit___nit__Prod___ANode__replace_with(var_place, var_nvar); /* Direct call parser_nodes#Prod#replace_with on <var_place:AExpr>*/
}
{
{ /* Inline astbuilder#AExpr#variable_cache= (self,var_variable) on <self:AExpr> */
self->attrs[COLOR_nit__astbuilder__AExpr___variable_cache].val = var_variable; /* _variable_cache on <self:AExpr> */
RET_LABEL30:(void)0;
}
}
} else {
}
var31 = NEW_nit__AVarExpr(&type_nit__AVarExpr);
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:nullable Variable(Variable)> */
var34 = var_variable->attrs[COLOR_nit__typing__Variable___declared_type].val; /* _declared_type on <var_variable:nullable Variable(Variable)> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__astbuilder, 125);
show_backtrace(1);
}
{
nit__astbuilder___AVarExpr___make(var31, var_variable, var32); /* Direct call astbuilder#AVarExpr#make on <var31:AVarExpr>*/
}
var = var31;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#AExpr#variable_cache for (self: AExpr): nullable Variable */
val* nit__astbuilder___AExpr___variable_cache(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
var1 = self->attrs[COLOR_nit__astbuilder__AExpr___variable_cache].val; /* _variable_cache on <self:AExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method astbuilder#AExpr#variable_cache= for (self: AExpr, nullable Variable) */
void nit__astbuilder___AExpr___variable_cache_61d(val* self, val* p0) {
self->attrs[COLOR_nit__astbuilder__AExpr___variable_cache].val = p0; /* _variable_cache on <self:AExpr> */
RET_LABEL:;
}
/* method astbuilder#AExpr#detach_with_placeholder for (self: AExpr): AExpr */
val* nit__astbuilder___AExpr___detach_with_placeholder(val* self) {
val* var /* : AExpr */;
val* var1 /* : APlaceholderExpr */;
val* var_h /* var h: APlaceholderExpr */;
var1 = NEW_nit__APlaceholderExpr(&type_nit__APlaceholderExpr);
{
nit___nit__APlaceholderExpr___make(var1); /* Direct call astbuilder#APlaceholderExpr#make on <var1:APlaceholderExpr>*/
}
var_h = var1;
{
nit___nit__Prod___ANode__replace_with(self, var_h); /* Direct call parser_nodes#Prod#replace_with on <self:AExpr>*/
}
var = var_h;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#AExpr#add for (self: AExpr, AExpr) */
void nit__astbuilder___AExpr___add(val* self, val* p0) {
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
var3 = standard___standard__NativeString___to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
var4 = standard__string___Object___inspect(self);
}
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var5 = array_instance Array[Object] */
var6 = 2;
var7 = NEW_standard__NativeArray(var6, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var7)->values[0] = (val*) var;
((struct instance_standard__NativeArray*)var7)->values[1] = (val*) var4;
{
((void (*)(val* self, val* p0, long p1))(var5->class->vft[COLOR_standard__array__Array__with_native]))(var5, var7, var6) /* with_native on <var5:Array[Object]>*/;
}
}
{
var8 = ((val* (*)(val* self))(var5->class->vft[COLOR_standard__string__Object__to_s]))(var5) /* to_s on <var5:Array[Object]>*/;
}
{
standard__file___Object___print(self, var8); /* Direct call file#Object#print on <self:AExpr>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__astbuilder, 160);
show_backtrace(1);
RET_LABEL:;
}
/* method astbuilder#APlaceholderExpr#make for (self: APlaceholderExpr) */
void nit___nit__APlaceholderExpr___make(val* self) {
{
{ /* Inline kernel#Object#init (self) on <self:APlaceholderExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method astbuilder#ABlockExpr#make for (self: ABlockExpr) */
void nit__astbuilder___ABlockExpr___make(val* self) {
short int var /* : Bool */;
var = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var) on <self:ABlockExpr> */
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var; /* _is_typed on <self:ABlockExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method astbuilder#ABlockExpr#add for (self: ABlockExpr, AExpr) */
void nit__astbuilder___ABlockExpr___AExpr__add(val* self, val* p0) {
val* var_expr /* var expr: AExpr */;
val* var /* : ANodes[AExpr] */;
val* var2 /* : ANodes[AExpr] */;
var_expr = p0;
{
{ /* Inline parser_nodes#ABlockExpr#n_expr (self) on <self:ABlockExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1565);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
standard___standard__Sequence___SimpleCollection__add(var, var_expr); /* Direct call abstract_collection#Sequence#add on <var:ANodes[AExpr]>*/
}
RET_LABEL:;
}
/* method astbuilder#ALoopExpr#make for (self: ALoopExpr) */
void nit__astbuilder___ALoopExpr___make(val* self) {
val* var /* : TKwloop */;
short int var2 /* : Bool */;
val* var4 /* : ABlockExpr */;
val* var6 /* : nullable AExpr */;
val* var8 /* : nullable AExpr */;
short int var9 /* : Bool */;
var = NEW_nit__TKwloop(&type_nit__TKwloop);
{
{ /* Inline kernel#Object#init (var) on <var:TKwloop> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__ALoopExpr___n_kwloop].val = var; /* _n_kwloop on <self:ALoopExpr> */
var2 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var2) on <self:ALoopExpr> */
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var2; /* _is_typed on <self:ALoopExpr> */
RET_LABEL3:(void)0;
}
}
var4 = NEW_nit__ABlockExpr(&type_nit__ABlockExpr);
{
{ /* Inline kernel#Object#init (var4) on <var4:ABlockExpr> */
RET_LABEL5:(void)0;
}
}
{
nit__parser_prod___ALoopExpr___n_block_61d(self, var4); /* Direct call parser_prod#ALoopExpr#n_block= on <self:ALoopExpr>*/
}
{
{ /* Inline parser_nodes#ALoopExpr#n_block (self) on <self:ALoopExpr> */
var8 = self->attrs[COLOR_nit__parser_nodes__ALoopExpr___n_block].val; /* _n_block on <self:ALoopExpr> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
var9 = 1;
if (var6 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__astbuilder, 196);
show_backtrace(1);
} else {
{ /* Inline typing#AExpr#is_typed= (var6,var9) on <var6:nullable AExpr> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 627);
show_backtrace(1);
}
var6->attrs[COLOR_nit__typing__AExpr___is_typed].s = var9; /* _is_typed on <var6:nullable AExpr> */
RET_LABEL10:(void)0;
}
}
RET_LABEL:;
}
/* method astbuilder#ALoopExpr#add for (self: ALoopExpr, AExpr) */
void nit__astbuilder___ALoopExpr___AExpr__add(val* self, val* p0) {
val* var_expr /* var expr: AExpr */;
val* var /* : nullable AExpr */;
val* var2 /* : nullable AExpr */;
var_expr = p0;
{
{ /* Inline parser_nodes#ALoopExpr#n_block (self) on <self:ALoopExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__ALoopExpr___n_block].val; /* _n_block on <self:ALoopExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__astbuilder, 201);
show_backtrace(1);
} else {
((void (*)(val* self, val* p0))(var->class->vft[COLOR_nit__astbuilder__AExpr__add]))(var, var_expr) /* add on <var:nullable AExpr>*/;
}
RET_LABEL:;
}
/* method astbuilder#ADoExpr#make for (self: ADoExpr) */
void nit__astbuilder___ADoExpr___make(val* self) {
val* var /* : TKwdo */;
short int var2 /* : Bool */;
val* var4 /* : ABlockExpr */;
val* var6 /* : nullable AExpr */;
val* var8 /* : nullable AExpr */;
short int var9 /* : Bool */;
var = NEW_nit__TKwdo(&type_nit__TKwdo);
{
{ /* Inline kernel#Object#init (var) on <var:TKwdo> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__ADoExpr___n_kwdo].val = var; /* _n_kwdo on <self:ADoExpr> */
var2 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var2) on <self:ADoExpr> */
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var2; /* _is_typed on <self:ADoExpr> */
RET_LABEL3:(void)0;
}
}
var4 = NEW_nit__ABlockExpr(&type_nit__ABlockExpr);
{
{ /* Inline kernel#Object#init (var4) on <var4:ABlockExpr> */
RET_LABEL5:(void)0;
}
}
{
nit__parser_prod___ADoExpr___n_block_61d(self, var4); /* Direct call parser_prod#ADoExpr#n_block= on <self:ADoExpr>*/
}
{
{ /* Inline parser_nodes#ADoExpr#n_block (self) on <self:ADoExpr> */
var8 = self->attrs[COLOR_nit__parser_nodes__ADoExpr___n_block].val; /* _n_block on <self:ADoExpr> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
var9 = 1;
if (var6 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__astbuilder, 211);
show_backtrace(1);
} else {
{ /* Inline typing#AExpr#is_typed= (var6,var9) on <var6:nullable AExpr> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 627);
show_backtrace(1);
}
var6->attrs[COLOR_nit__typing__AExpr___is_typed].s = var9; /* _is_typed on <var6:nullable AExpr> */
RET_LABEL10:(void)0;
}
}
RET_LABEL:;
}
/* method astbuilder#ADoExpr#add for (self: ADoExpr, AExpr) */
void nit__astbuilder___ADoExpr___AExpr__add(val* self, val* p0) {
val* var_expr /* var expr: AExpr */;
val* var /* : nullable AExpr */;
val* var2 /* : nullable AExpr */;
var_expr = p0;
{
{ /* Inline parser_nodes#ADoExpr#n_block (self) on <self:ADoExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__ADoExpr___n_block].val; /* _n_block on <self:ADoExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__astbuilder, 227);
show_backtrace(1);
} else {
((void (*)(val* self, val* p0))(var->class->vft[COLOR_nit__astbuilder__AExpr__add]))(var, var_expr) /* add on <var:nullable AExpr>*/;
}
RET_LABEL:;
}
/* method astbuilder#ABreakExpr#make for (self: ABreakExpr, EscapeMark) */
void nit__astbuilder___ABreakExpr___make(val* self, val* p0) {
val* var_escapemark /* var escapemark: EscapeMark */;
val* var /* : TKwbreak */;
val* var3 /* : Array[AEscapeExpr] */;
val* var5 /* : Array[AEscapeExpr] */;
short int var6 /* : Bool */;
var_escapemark = p0;
var = NEW_nit__TKwbreak(&type_nit__TKwbreak);
{
{ /* Inline kernel#Object#init (var) on <var:TKwbreak> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__ABreakExpr___n_kwbreak].val = var; /* _n_kwbreak on <self:ABreakExpr> */
{
{ /* Inline scope#AEscapeExpr#escapemark= (self,var_escapemark) on <self:ABreakExpr> */
self->attrs[COLOR_nit__scope__AEscapeExpr___escapemark].val = var_escapemark; /* _escapemark on <self:ABreakExpr> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline scope#EscapeMark#escapes (var_escapemark) on <var_escapemark:EscapeMark> */
var5 = var_escapemark->attrs[COLOR_nit__scope__EscapeMark___escapes].val; /* _escapes on <var_escapemark:EscapeMark> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 58);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var3, self); /* Direct call array#Array#add on <var3:Array[AEscapeExpr]>*/
}
var6 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var6) on <self:ABreakExpr> */
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var6; /* _is_typed on <self:ABreakExpr> */
RET_LABEL7:(void)0;
}
}
RET_LABEL:;
}
/* method astbuilder#AIfExpr#make for (self: AIfExpr, AExpr, nullable MType) */
void nit__astbuilder___AIfExpr___make(val* self, val* p0, val* p1) {
val* var_condition /* var condition: AExpr */;
val* var_mtype /* var mtype: nullable MType */;
val* var /* : TKwif */;
val* var2 /* : AExpr */;
val* var4 /* : ABlockExpr */;
val* var5 /* : ABlockExpr */;
short int var7 /* : Bool */;
var_condition = p0;
var_mtype = p1;
var = NEW_nit__TKwif(&type_nit__TKwif);
{
{ /* Inline kernel#Object#init (var) on <var:TKwif> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_kwif].val = var; /* _n_kwif on <self:AIfExpr> */
self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_expr].val = var_condition; /* _n_expr on <self:AIfExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_expr].val; /* _n_expr on <self:AIfExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__astbuilder, 246);
show_backtrace(1);
}
{
{ /* Inline parser_nodes#ANode#parent= (var2,self) on <var2:AExpr> */
var2->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var2:AExpr> */
RET_LABEL3:(void)0;
}
}
var4 = NEW_nit__ABlockExpr(&type_nit__ABlockExpr);
{
nit__astbuilder___ABlockExpr___make(var4); /* Direct call astbuilder#ABlockExpr#make on <var4:ABlockExpr>*/
}
self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_then].val = var4; /* _n_then on <self:AIfExpr> */
var5 = NEW_nit__ABlockExpr(&type_nit__ABlockExpr);
{
nit__astbuilder___ABlockExpr___make(var5); /* Direct call astbuilder#ABlockExpr#make on <var5:ABlockExpr>*/
}
self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_else].val = var5; /* _n_else on <self:AIfExpr> */
{
{ /* Inline typing#AExpr#mtype= (self,var_mtype) on <self:AIfExpr> */
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var_mtype; /* _mtype on <self:AIfExpr> */
RET_LABEL6:(void)0;
}
}
var7 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var7) on <self:AIfExpr> */
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var7; /* _is_typed on <self:AIfExpr> */
RET_LABEL8:(void)0;
}
}
RET_LABEL:;
}
/* method astbuilder#AType#make for (self: AType) */
void nit__astbuilder___AType___make(val* self) {
val* var /* : TClassid */;
var = NEW_nit__TClassid(&type_nit__TClassid);
{
{ /* Inline kernel#Object#init (var) on <var:TClassid> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__AType___n_id].val = var; /* _n_id on <self:AType> */
RET_LABEL:;
}
/* method astbuilder#ADecIntExpr#make for (self: ADecIntExpr, Int, MType) */
void nit__astbuilder___ADecIntExpr___make(val* self, long p0, val* p1) {
long var_value /* var value: Int */;
val* var_t /* var t: MType */;
val* var /* : nullable Int */;
val* var2 /* : TNumber */;
var_value = p0;
var_t = p1;
{
{ /* Inline literal#AIntExpr#value= (self,var_value) on <self:ADecIntExpr> */
var = BOX_standard__Int(var_value); /* autobox from Int to nullable Int */
self->attrs[COLOR_nit__literal__AIntExpr___value].val = var; /* _value on <self:ADecIntExpr> */
RET_LABEL1:(void)0;
}
}
var2 = NEW_nit__TNumber(&type_nit__TNumber);
{
{ /* Inline kernel#Object#init (var2) on <var2:TNumber> */
RET_LABEL3:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__ADecIntExpr___n_number].val = var2; /* _n_number on <self:ADecIntExpr> */
{
{ /* Inline typing#AExpr#mtype= (self,var_t) on <self:ADecIntExpr> */
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var_t; /* _mtype on <self:ADecIntExpr> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method astbuilder#ANewExpr#make for (self: ANewExpr, CallSite, nullable Array[AExpr]) */
void nit__astbuilder___ANewExpr___make(val* self, val* p0, val* p1) {
val* var_callsite /* var callsite: CallSite */;
val* var_args /* var args: nullable Array[AExpr] */;
val* var /* : TKwnew */;
val* var2 /* : AType */;
val* var3 /* : AListExprs */;
val* var5 /* : null */;
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
short int var40 /* : Bool */;
var_callsite = p0;
var_args = p1;
var = NEW_nit__TKwnew(&type_nit__TKwnew);
{
{ /* Inline kernel#Object#init (var) on <var:TKwnew> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_kwnew].val = var; /* _n_kwnew on <self:ANewExpr> */
var2 = NEW_nit__AType(&type_nit__AType);
{
nit__astbuilder___AType___make(var2); /* Direct call astbuilder#AType#make on <var2:AType>*/
}
self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_type].val = var2; /* _n_type on <self:ANewExpr> */
var3 = NEW_nit__AListExprs(&type_nit__AListExprs);
{
{ /* Inline kernel#Object#init (var3) on <var3:AListExprs> */
RET_LABEL4:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_args].val = var3; /* _n_args on <self:ANewExpr> */
var5 = NULL;
if (var_args == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_args,var5) on <var_args:nullable Array[AExpr]> */
var_other = var5;
{
var9 = ((short int (*)(val* self, val* p0))(var_args->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_args, var_other) /* == on <var_args:nullable Array[AExpr](Array[AExpr])>*/;
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
{ /* Inline parser_nodes#ANewExpr#n_args (self) on <self:ANewExpr> */
var13 = self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_args].val; /* _n_args on <self:ANewExpr> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1968);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var11) on <var11:AExprs> */
var16 = var11->attrs[COLOR_nit__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var11:AExprs> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2408);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
standard___standard__SimpleCollection___add_all(var14, var_args); /* Direct call abstract_collection#SimpleCollection#add_all on <var14:ANodes[AExpr]>*/
}
} else {
}
{
{ /* Inline typing#ANewExpr#callsite= (self,var_callsite) on <self:ANewExpr> */
self->attrs[COLOR_nit__typing__ANewExpr___callsite].val = var_callsite; /* _callsite on <self:ANewExpr> */
RET_LABEL17:(void)0;
}
}
{
{ /* Inline typing#CallSite#recv (var_callsite) on <var_callsite:CallSite> */
var20 = var_callsite->attrs[COLOR_nit__typing__CallSite___recv].val; /* _recv on <var_callsite:CallSite> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 473);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
/* <var18:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var18->type->table_size) {
var21 = 0;
} else {
var21 = var18->type->type_table[cltype] == idtype;
}
if (unlikely(!var21)) {
var_class_name = var18 == NULL ? "null" : var18->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__astbuilder, 280);
show_backtrace(1);
}
{
{ /* Inline typing#ANewExpr#recvtype= (self,var18) on <self:ANewExpr> */
self->attrs[COLOR_nit__typing__ANewExpr___recvtype].val = var18; /* _recvtype on <self:ANewExpr> */
RET_LABEL22:(void)0;
}
}
{
{ /* Inline typing#CallSite#mproperty (var_callsite) on <var_callsite:CallSite> */
var25 = var_callsite->attrs[COLOR_nit__typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:CallSite> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 487);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline model#MMethod#is_new (var23) on <var23:MMethod> */
var28 = var23->attrs[COLOR_nit__model__MMethod___is_new].s; /* _is_new on <var23:MMethod> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
if (var26){
{
{ /* Inline typing#CallSite#msignature (var_callsite) on <var_callsite:CallSite> */
var31 = var_callsite->attrs[COLOR_nit__typing__CallSite___msignature].val; /* _msignature on <var_callsite:CallSite> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 494);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline model#MSignature#return_mtype (var29) on <var29:MSignature> */
var34 = var29->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var29:MSignature> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var32) on <self:ANewExpr> */
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var32; /* _mtype on <self:ANewExpr> */
RET_LABEL35:(void)0;
}
}
} else {
{
{ /* Inline typing#CallSite#recv (var_callsite) on <var_callsite:CallSite> */
var38 = var_callsite->attrs[COLOR_nit__typing__CallSite___recv].val; /* _recv on <var_callsite:CallSite> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 473);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var36) on <self:ANewExpr> */
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var36; /* _mtype on <self:ANewExpr> */
RET_LABEL39:(void)0;
}
}
}
var40 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var40) on <self:ANewExpr> */
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var40; /* _is_typed on <self:ANewExpr> */
RET_LABEL41:(void)0;
}
}
RET_LABEL:;
}
/* method astbuilder#ACallExpr#make for (self: ACallExpr, AExpr, CallSite, nullable Array[AExpr]) */
void nit__astbuilder___ACallExpr___make(val* self, val* p0, val* p1, val* p2) {
val* var_recv /* var recv: AExpr */;
val* var_callsite /* var callsite: CallSite */;
val* var_args /* var args: nullable Array[AExpr] */;
val* var /* : AListExprs */;
val* var2 /* : TId */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : AExprs */;
val* var12 /* : AExprs */;
val* var13 /* : ANodes[AExpr] */;
val* var15 /* : ANodes[AExpr] */;
val* var17 /* : MSignature */;
val* var19 /* : MSignature */;
val* var20 /* : nullable MType */;
val* var22 /* : nullable MType */;
short int var24 /* : Bool */;
var_recv = p0;
var_callsite = p1;
var_args = p2;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_recv; /* _n_expr on <self:ACallExpr> */
var = NEW_nit__AListExprs(&type_nit__AListExprs);
{
{ /* Inline kernel#Object#init (var) on <var:AListExprs> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_args].val = var; /* _n_args on <self:ACallExpr> */
var2 = NEW_nit__TId(&type_nit__TId);
{
{ /* Inline kernel#Object#init (var2) on <var2:TId> */
RET_LABEL3:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_id].val = var2; /* _n_id on <self:ACallExpr> */
var4 = NULL;
if (var_args == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_args,var4) on <var_args:nullable Array[AExpr]> */
var_other = var4;
{
var8 = ((short int (*)(val* self, val* p0))(var_args->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_args, var_other) /* == on <var_args:nullable Array[AExpr](Array[AExpr])>*/;
}
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
{
{ /* Inline parser_nodes#ACallFormExpr#n_args (self) on <self:ACallExpr> */
var12 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallExpr> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2002);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var10) on <var10:AExprs> */
var15 = var10->attrs[COLOR_nit__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var10:AExprs> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2408);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
standard___standard__SimpleCollection___add_all(var13, var_args); /* Direct call abstract_collection#SimpleCollection#add_all on <var13:ANodes[AExpr]>*/
}
} else {
}
{
{ /* Inline typing#ASendExpr#callsite= (self,var_callsite) on <self:ACallExpr> */
self->attrs[COLOR_nit__typing__ASendExpr___callsite].val = var_callsite; /* _callsite on <self:ACallExpr> */
RET_LABEL16:(void)0;
}
}
{
{ /* Inline typing#CallSite#msignature (var_callsite) on <var_callsite:CallSite> */
var19 = var_callsite->attrs[COLOR_nit__typing__CallSite___msignature].val; /* _msignature on <var_callsite:CallSite> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 494);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline model#MSignature#return_mtype (var17) on <var17:MSignature> */
var22 = var17->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var17:MSignature> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var20) on <self:ACallExpr> */
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var20; /* _mtype on <self:ACallExpr> */
RET_LABEL23:(void)0;
}
}
var24 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var24) on <self:ACallExpr> */
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var24; /* _is_typed on <self:ACallExpr> */
RET_LABEL25:(void)0;
}
}
RET_LABEL:;
}
/* method astbuilder#AAttrExpr#make for (self: AAttrExpr, AExpr, MAttribute, MType) */
void nit__astbuilder___AAttrExpr___make(val* self, val* p0, val* p1, val* p2) {
val* var_recv /* var recv: AExpr */;
val* var_attribute /* var attribute: MAttribute */;
val* var_t /* var t: MType */;
val* var /* : TAttrid */;
var_recv = p0;
var_attribute = p1;
var_t = p2;
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val = var_recv; /* _n_expr on <self:AAttrExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_recv,self) on <var_recv:AExpr> */
var_recv->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_recv:AExpr> */
RET_LABEL1:(void)0;
}
}
var = NEW_nit__TAttrid(&type_nit__TAttrid);
{
{ /* Inline kernel#Object#init (var) on <var:TAttrid> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val = var; /* _n_id on <self:AAttrExpr> */
{
{ /* Inline typing#AAttrFormExpr#mproperty= (self,var_attribute) on <self:AAttrExpr> */
self->attrs[COLOR_nit__typing__AAttrFormExpr___mproperty].val = var_attribute; /* _mproperty on <self:AAttrExpr> */
RET_LABEL3:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var_t) on <self:AAttrExpr> */
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var_t; /* _mtype on <self:AAttrExpr> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method astbuilder#AAttrAssignExpr#make for (self: AAttrAssignExpr, AExpr, MAttribute, AExpr) */
void nit__astbuilder___AAttrAssignExpr___make(val* self, val* p0, val* p1, val* p2) {
val* var_recv /* var recv: AExpr */;
val* var_attribute /* var attribute: MAttribute */;
val* var_value /* var value: AExpr */;
val* var /* : TAttrid */;
val* var4 /* : TAssign */;
val* var7 /* : nullable MType */;
var_recv = p0;
var_attribute = p1;
var_value = p2;
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val = var_recv; /* _n_expr on <self:AAttrAssignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_recv,self) on <var_recv:AExpr> */
var_recv->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_recv:AExpr> */
RET_LABEL1:(void)0;
}
}
var = NEW_nit__TAttrid(&type_nit__TAttrid);
{
{ /* Inline kernel#Object#init (var) on <var:TAttrid> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val = var; /* _n_id on <self:AAttrAssignExpr> */
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val = var_value; /* _n_value on <self:AAttrAssignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_value,self) on <var_value:AExpr> */
var_value->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_value:AExpr> */
RET_LABEL3:(void)0;
}
}
var4 = NEW_nit__TAssign(&type_nit__TAssign);
{
{ /* Inline kernel#Object#init (var4) on <var4:TAssign> */
RET_LABEL5:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_assign].val = var4; /* _n_assign on <self:AAttrAssignExpr> */
{
{ /* Inline typing#AAttrFormExpr#mproperty= (self,var_attribute) on <self:AAttrAssignExpr> */
self->attrs[COLOR_nit__typing__AAttrFormExpr___mproperty].val = var_attribute; /* _mproperty on <self:AAttrAssignExpr> */
RET_LABEL6:(void)0;
}
}
{
var7 = ((val* (*)(val* self))(var_value->class->vft[COLOR_nit__typing__AExpr__mtype]))(var_value) /* mtype on <var_value:AExpr>*/;
}
{
{ /* Inline typing#AExpr#mtype= (self,var7) on <self:AAttrAssignExpr> */
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var7; /* _mtype on <self:AAttrAssignExpr> */
RET_LABEL8:(void)0;
}
}
RET_LABEL:;
}
/* method astbuilder#AVarExpr#make for (self: AVarExpr, Variable, MType) */
void nit__astbuilder___AVarExpr___make(val* self, val* p0, val* p1) {
val* var_v /* var v: Variable */;
val* var_mtype /* var mtype: MType */;
val* var /* : TId */;
var_v = p0;
var_mtype = p1;
var = NEW_nit__TId(&type_nit__TId);
{
{ /* Inline kernel#Object#init (var) on <var:TId> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__AVarFormExpr___n_id].val = var; /* _n_id on <self:AVarExpr> */
{
{ /* Inline scope#AVarFormExpr#variable= (self,var_v) on <self:AVarExpr> */
self->attrs[COLOR_nit__scope__AVarFormExpr___variable].val = var_v; /* _variable on <self:AVarExpr> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var_mtype) on <self:AVarExpr> */
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var_mtype; /* _mtype on <self:AVarExpr> */
RET_LABEL3:(void)0;
}
}
RET_LABEL:;
}
/* method astbuilder#AVarAssignExpr#make for (self: AVarAssignExpr, Variable, AExpr) */
void nit__astbuilder___AVarAssignExpr___make(val* self, val* p0, val* p1) {
val* var_v /* var v: Variable */;
val* var_value /* var value: AExpr */;
val* var /* : TId */;
val* var3 /* : TAssign */;
val* var6 /* : nullable MType */;
var_v = p0;
var_value = p1;
var = NEW_nit__TId(&type_nit__TId);
{
{ /* Inline kernel#Object#init (var) on <var:TId> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__AVarFormExpr___n_id].val = var; /* _n_id on <self:AVarAssignExpr> */
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val = var_value; /* _n_value on <self:AVarAssignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_value,self) on <var_value:AExpr> */
var_value->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_value:AExpr> */
RET_LABEL2:(void)0;
}
}
var3 = NEW_nit__TAssign(&type_nit__TAssign);
{
{ /* Inline kernel#Object#init (var3) on <var3:TAssign> */
RET_LABEL4:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_assign].val = var3; /* _n_assign on <self:AVarAssignExpr> */
{
{ /* Inline scope#AVarFormExpr#variable= (self,var_v) on <self:AVarAssignExpr> */
self->attrs[COLOR_nit__scope__AVarFormExpr___variable].val = var_v; /* _variable on <self:AVarAssignExpr> */
RET_LABEL5:(void)0;
}
}
{
var6 = ((val* (*)(val* self))(var_value->class->vft[COLOR_nit__typing__AExpr__mtype]))(var_value) /* mtype on <var_value:AExpr>*/;
}
{
{ /* Inline typing#AExpr#mtype= (self,var6) on <self:AVarAssignExpr> */
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var6; /* _mtype on <self:AVarAssignExpr> */
RET_LABEL7:(void)0;
}
}
RET_LABEL:;
}
