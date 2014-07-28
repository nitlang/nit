#include "astbuilder.sep.0.h"
/* method astbuilder#ASTBuilder#mmodule for (self: ASTBuilder): MModule */
val* astbuilder__ASTBuilder__mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_astbuilder__ASTBuilder___mmodule].val; /* _mmodule on <self:ASTBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/astbuilder.nit", 25);
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
PRINT_ERROR(" (%s:%d)\n", "src/astbuilder.nit", 25);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
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
PRINT_ERROR(" (%s:%d)\n", "src/astbuilder.nit", 25);
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
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 417);
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
val* var2 /* : nullable MType */;
val* var4 /* : nullable MType */;
val* var5 /* : nullable MType */;
val* var6 /* : nullable MClassType */;
val* var8 /* : nullable MClassType */;
val* var9 /* : MModule */;
val* var11 /* : MModule */;
short int var12 /* : Bool */;
val* var13 /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var14 /* : AAttrExpr */;
var_recv = p0;
var_attribute = p1;
{
var1 = model__MProperty__intro(var_attribute);
}
{
{ /* Inline model#MAttributeDef#static_mtype (var1) on <var1:MPropDef(MAttributeDef)> */
var4 = var1->attrs[COLOR_model__MAttributeDef___static_mtype].val; /* _static_mtype on <var1:MPropDef(MAttributeDef)> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = ((val* (*)(val*))(var_recv->class->vft[COLOR_typing__AExpr__mtype]))(var_recv) /* mtype on <var_recv:AExpr>*/;
}
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/astbuilder.nit", 71);
show_backtrace(1);
}
{
{ /* Inline astbuilder#ASTBuilder#anchor (self) on <self:ASTBuilder> */
var8 = self->attrs[COLOR_astbuilder__ASTBuilder___anchor].val; /* _anchor on <self:ASTBuilder> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline astbuilder#ASTBuilder#mmodule (self) on <self:ASTBuilder> */
var11 = self->attrs[COLOR_astbuilder__ASTBuilder___mmodule].val; /* _mmodule on <self:ASTBuilder> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/astbuilder.nit", 25);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var12 = 1;
if (var2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/astbuilder.nit", 71);
show_backtrace(1);
} else {
var13 = ((val* (*)(val*, val*, val*, val*, short int))(var2->class->vft[COLOR_model__MType__resolve_for]))(var2, var5, var6, var9, var12) /* resolve_for on <var2:nullable MType>*/;
}
var_mtype = var13;
var14 = NEW_parser_nodes__AAttrExpr(&type_parser_nodes__AAttrExpr);
{
astbuilder__AAttrExpr__make(var14, var_recv, var_attribute, var_mtype); /* Direct call astbuilder#AAttrExpr#make on <var14:AAttrExpr>*/
}
var = var14;
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
/* method astbuilder#ASTBuilder#init for (self: ASTBuilder, MModule, nullable MClassType) */
void astbuilder__ASTBuilder__init(val* self, val* p0, val* p1) {
self->attrs[COLOR_astbuilder__ASTBuilder___mmodule].val = p0; /* _mmodule on <self:ASTBuilder> */
self->attrs[COLOR_astbuilder__ASTBuilder___anchor].val = p1; /* _anchor on <self:ASTBuilder> */
RET_LABEL:;
}
/* method astbuilder#ASTBuilder#init for (self: Object, MModule, nullable MClassType) */
void VIRTUAL_astbuilder__ASTBuilder__init(val* self, val* p0, val* p1) {
{ /* Inline astbuilder#ASTBuilder#init (self,p0,p1) on <self:Object(ASTBuilder)> */
self->attrs[COLOR_astbuilder__ASTBuilder___mmodule].val = p0; /* _mmodule on <self:Object(ASTBuilder)> */
self->attrs[COLOR_astbuilder__ASTBuilder___anchor].val = p1; /* _anchor on <self:Object(ASTBuilder)> */
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
val* var29 /* : nullable MType */;
val* var31 /* : AVarAssignExpr */;
val* var_nvar /* var nvar: AVarAssignExpr */;
val* var33 /* : AVarExpr */;
val* var34 /* : nullable MType */;
val* var36 /* : nullable MType */;
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
PRINT_ERROR(" (%s:%d)\n", "src/astbuilder.nit", 105);
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
{ /* Inline scope#Variable#init (var23,var24) on <var23:Variable> */
var23->attrs[COLOR_scope__Variable___name].val = var24; /* _name on <var23:Variable> */
RET_LABEL28:(void)0;
}
}
var_variable = var23;
{
var29 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:AExpr>*/;
}
{
{ /* Inline typing#Variable#declared_type= (var_variable,var29) on <var_variable:nullable Variable(Variable)> */
var_variable->attrs[COLOR_typing__Variable___declared_type].val = var29; /* _declared_type on <var_variable:nullable Variable(Variable)> */
RET_LABEL30:(void)0;
}
}
var31 = NEW_parser_nodes__AVarAssignExpr(&type_parser_nodes__AVarAssignExpr);
{
astbuilder__AVarAssignExpr__make(var31, var_variable, self); /* Direct call astbuilder#AVarAssignExpr#make on <var31:AVarAssignExpr>*/
}
var_nvar = var31;
{
parser_nodes__Prod__replace_with(var_place, var_nvar); /* Direct call parser_nodes#Prod#replace_with on <var_place:AExpr>*/
}
{
{ /* Inline astbuilder#AExpr#variable_cache= (self,var_variable) on <self:AExpr> */
self->attrs[COLOR_astbuilder__AExpr___variable_cache].val = var_variable; /* _variable_cache on <self:AExpr> */
RET_LABEL32:(void)0;
}
}
} else {
}
var33 = NEW_parser_nodes__AVarExpr(&type_parser_nodes__AVarExpr);
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:nullable Variable(Variable)> */
var36 = var_variable->attrs[COLOR_typing__Variable___declared_type].val; /* _declared_type on <var_variable:nullable Variable(Variable)> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/astbuilder.nit", 113);
show_backtrace(1);
}
{
astbuilder__AVarExpr__make(var33, var_variable, var34); /* Direct call astbuilder#AVarExpr#make on <var33:AVarExpr>*/
}
var = var33;
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
var_expr = p0;
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", "src/astbuilder.nit", 145);
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
{ /* Inline parser_nodes#ANode#init (self) on <self:APlaceholderExpr> */
RET_LABEL1:(void)0;
}
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1424);
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
/* method astbuilder#AIfExpr#make for (self: AIfExpr, AExpr, nullable MType) */
void astbuilder__AIfExpr__make(val* self, val* p0, val* p1) {
val* var_condition /* var condition: AExpr */;
val* var_mtype /* var mtype: nullable MType */;
val* var /* : TKwif */;
val* var2 /* : AExpr */;
val* var4 /* : ABlockExpr */;
val* var5 /* : ABlockExpr */;
short int var7 /* : Bool */;
var_condition = p0;
var_mtype = p1;
var = NEW_parser_nodes__TKwif(&type_parser_nodes__TKwif);
{
{ /* Inline parser_nodes#ANode#init (var) on <var:TKwif> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_parser_nodes__AIfExpr___n_kwif].val = var; /* _n_kwif on <self:AIfExpr> */
self->attrs[COLOR_parser_nodes__AIfExpr___n_expr].val = var_condition; /* _n_expr on <self:AIfExpr> */
var2 = self->attrs[COLOR_parser_nodes__AIfExpr___n_expr].val; /* _n_expr on <self:AIfExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/astbuilder.nit", 206);
show_backtrace(1);
}
{
{ /* Inline parser_nodes#ANode#parent= (var2,self) on <var2:AExpr> */
var2->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var2:AExpr> */
RET_LABEL3:(void)0;
}
}
var4 = NEW_parser_nodes__ABlockExpr(&type_parser_nodes__ABlockExpr);
{
astbuilder__ABlockExpr__make(var4); /* Direct call astbuilder#ABlockExpr#make on <var4:ABlockExpr>*/
}
self->attrs[COLOR_parser_nodes__AIfExpr___n_then].val = var4; /* _n_then on <self:AIfExpr> */
var5 = NEW_parser_nodes__ABlockExpr(&type_parser_nodes__ABlockExpr);
{
astbuilder__ABlockExpr__make(var5); /* Direct call astbuilder#ABlockExpr#make on <var5:ABlockExpr>*/
}
self->attrs[COLOR_parser_nodes__AIfExpr___n_else].val = var5; /* _n_else on <self:AIfExpr> */
{
{ /* Inline typing#AExpr#mtype= (self,var_mtype) on <self:AIfExpr> */
self->attrs[COLOR_typing__AExpr___mtype].val = var_mtype; /* _mtype on <self:AIfExpr> */
RET_LABEL6:(void)0;
}
}
var7 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var7) on <self:AIfExpr> */
self->attrs[COLOR_typing__AExpr___is_typed].s = var7; /* _is_typed on <self:AIfExpr> */
RET_LABEL8:(void)0;
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
{ /* Inline parser_nodes#ANode#init (var) on <var:TClassid> */
RET_LABEL1:(void)0;
}
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
{ /* Inline parser_nodes#ANode#init (var2) on <var2:TNumber> */
RET_LABEL3:(void)0;
}
}
self->attrs[COLOR_parser_nodes__ADecIntExpr___n_number].val = var2; /* _n_number on <self:ADecIntExpr> */
{
{ /* Inline typing#AExpr#mtype= (self,var_t) on <self:ADecIntExpr> */
self->attrs[COLOR_typing__AExpr___mtype].val = var_t; /* _mtype on <self:ADecIntExpr> */
RET_LABEL4:(void)0;
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
val* var2 /* : AType */;
val* var3 /* : AListExprs */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : AExprs */;
val* var12 /* : ANodes[AExpr] */;
val* var14 /* : ANodes[AExpr] */;
val* var16 /* : MType */;
val* var18 /* : MType */;
short int var20 /* : Bool */;
var_callsite = p0;
var_args = p1;
var = NEW_parser_nodes__TKwnew(&type_parser_nodes__TKwnew);
{
{ /* Inline parser_nodes#ANode#init (var) on <var:TKwnew> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_parser_nodes__ANewExpr___n_kwnew].val = var; /* _n_kwnew on <self:ANewExpr> */
var2 = NEW_parser_nodes__AType(&type_parser_nodes__AType);
{
astbuilder__AType__make(var2); /* Direct call astbuilder#AType#make on <var2:AType>*/
}
self->attrs[COLOR_parser_nodes__ANewExpr___n_type].val = var2; /* _n_type on <self:ANewExpr> */
var3 = NEW_parser_nodes__AListExprs(&type_parser_nodes__AListExprs);
{
parser_nodes__AExprs__init(var3); /* Direct call parser_nodes#AExprs#init on <var3:AListExprs>*/
}
self->attrs[COLOR_parser_nodes__ANewExpr___n_args].val = var3; /* _n_args on <self:ANewExpr> */
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
var9 = ((short int (*)(val*, val*))(var_args->class->vft[COLOR_kernel__Object___61d_61d]))(var_args, var_other) /* == on <var_args:nullable Array[AExpr](Array[AExpr])>*/;
var8 = var9;
}
var10 = !var8;
var6 = var10;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
{
var11 = parser_nodes__ANewExpr__n_args(self);
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var11) on <var11:AExprs> */
var14 = var11->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var11:AExprs> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2274);
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
{ /* Inline typing#ANewExpr#callsite= (self,var_callsite) on <self:ANewExpr> */
self->attrs[COLOR_typing__ANewExpr___callsite].val = var_callsite; /* _callsite on <self:ANewExpr> */
RET_LABEL15:(void)0;
}
}
{
{ /* Inline typing#CallSite#recv (var_callsite) on <var_callsite:CallSite> */
var18 = var_callsite->attrs[COLOR_typing__CallSite___recv].val; /* _recv on <var_callsite:CallSite> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 408);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var16) on <self:ANewExpr> */
self->attrs[COLOR_typing__AExpr___mtype].val = var16; /* _mtype on <self:ANewExpr> */
RET_LABEL19:(void)0;
}
}
var20 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var20) on <self:ANewExpr> */
self->attrs[COLOR_typing__AExpr___is_typed].s = var20; /* _is_typed on <self:ANewExpr> */
RET_LABEL21:(void)0;
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
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : AExprs */;
val* var11 /* : ANodes[AExpr] */;
val* var13 /* : ANodes[AExpr] */;
val* var14 /* : nullable MType */;
val* var_mtype /* var mtype: MType */;
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
parser_nodes__AExprs__init(var); /* Direct call parser_nodes#AExprs#init on <var:AListExprs>*/
}
self->attrs[COLOR_parser_nodes__ACallFormExpr___n_args].val = var; /* _n_args on <self:ACallExpr> */
var1 = NEW_parser_nodes__TId(&type_parser_nodes__TId);
{
{ /* Inline parser_nodes#ANode#init (var1) on <var1:TId> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_parser_nodes__ACallFormExpr___n_id].val = var1; /* _n_id on <self:ACallExpr> */
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
var10 = parser_nodes__ACallFormExpr__n_args(self);
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var10) on <var10:AExprs> */
var13 = var10->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var10:AExprs> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2274);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
abstract_collection__SimpleCollection__add_all(var11, var_args); /* Direct call abstract_collection#SimpleCollection#add_all on <var11:ANodes[AExpr]>*/
}
} else {
}
{
var14 = ((val* (*)(val*))(var_recv->class->vft[COLOR_typing__AExpr__mtype]))(var_recv) /* mtype on <var_recv:AExpr>*/;
}
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/astbuilder.nit", 254);
show_backtrace(1);
}
var_mtype = var14;
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
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 429);
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
{ /* Inline parser_nodes#ANode#init (var) on <var:TAttrid> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val = var; /* _n_id on <self:AAttrExpr> */
{
{ /* Inline typing#AAttrFormExpr#mproperty= (self,var_attribute) on <self:AAttrExpr> */
self->attrs[COLOR_typing__AAttrFormExpr___mproperty].val = var_attribute; /* _mproperty on <self:AAttrExpr> */
RET_LABEL3:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var_t) on <self:AAttrExpr> */
self->attrs[COLOR_typing__AExpr___mtype].val = var_t; /* _mtype on <self:AAttrExpr> */
RET_LABEL4:(void)0;
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
val* var4 /* : TAssign */;
val* var7 /* : nullable MType */;
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
{ /* Inline parser_nodes#ANode#init (var) on <var:TAttrid> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val = var; /* _n_id on <self:AAttrAssignExpr> */
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val = var_value; /* _n_value on <self:AAttrAssignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_value,self) on <var_value:AExpr> */
var_value->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_value:AExpr> */
RET_LABEL3:(void)0;
}
}
var4 = NEW_parser_nodes__TAssign(&type_parser_nodes__TAssign);
{
{ /* Inline parser_nodes#ANode#init (var4) on <var4:TAssign> */
RET_LABEL5:(void)0;
}
}
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val = var4; /* _n_assign on <self:AAttrAssignExpr> */
{
{ /* Inline typing#AAttrFormExpr#mproperty= (self,var_attribute) on <self:AAttrAssignExpr> */
self->attrs[COLOR_typing__AAttrFormExpr___mproperty].val = var_attribute; /* _mproperty on <self:AAttrAssignExpr> */
RET_LABEL6:(void)0;
}
}
{
var7 = ((val* (*)(val*))(var_value->class->vft[COLOR_typing__AExpr__mtype]))(var_value) /* mtype on <var_value:AExpr>*/;
}
{
{ /* Inline typing#AExpr#mtype= (self,var7) on <self:AAttrAssignExpr> */
self->attrs[COLOR_typing__AExpr___mtype].val = var7; /* _mtype on <self:AAttrAssignExpr> */
RET_LABEL8:(void)0;
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
{ /* Inline parser_nodes#ANode#init (var) on <var:TId> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_parser_nodes__AVarFormExpr___n_id].val = var; /* _n_id on <self:AVarExpr> */
{
{ /* Inline scope#AVarFormExpr#variable= (self,var_v) on <self:AVarExpr> */
self->attrs[COLOR_scope__AVarFormExpr___variable].val = var_v; /* _variable on <self:AVarExpr> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var_mtype) on <self:AVarExpr> */
self->attrs[COLOR_typing__AExpr___mtype].val = var_mtype; /* _mtype on <self:AVarExpr> */
RET_LABEL3:(void)0;
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
val* var3 /* : TAssign */;
val* var6 /* : nullable MType */;
var_v = p0;
var_value = p1;
var = NEW_parser_nodes__TId(&type_parser_nodes__TId);
{
{ /* Inline parser_nodes#ANode#init (var) on <var:TId> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_parser_nodes__AVarFormExpr___n_id].val = var; /* _n_id on <self:AVarAssignExpr> */
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val = var_value; /* _n_value on <self:AVarAssignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_value,self) on <var_value:AExpr> */
var_value->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_value:AExpr> */
RET_LABEL2:(void)0;
}
}
var3 = NEW_parser_nodes__TAssign(&type_parser_nodes__TAssign);
{
{ /* Inline parser_nodes#ANode#init (var3) on <var3:TAssign> */
RET_LABEL4:(void)0;
}
}
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val = var3; /* _n_assign on <self:AVarAssignExpr> */
{
{ /* Inline scope#AVarFormExpr#variable= (self,var_v) on <self:AVarAssignExpr> */
self->attrs[COLOR_scope__AVarFormExpr___variable].val = var_v; /* _variable on <self:AVarAssignExpr> */
RET_LABEL5:(void)0;
}
}
{
var6 = ((val* (*)(val*))(var_value->class->vft[COLOR_typing__AExpr__mtype]))(var_value) /* mtype on <var_value:AExpr>*/;
}
{
{ /* Inline typing#AExpr#mtype= (self,var6) on <self:AVarAssignExpr> */
self->attrs[COLOR_typing__AExpr___mtype].val = var6; /* _mtype on <self:AVarAssignExpr> */
RET_LABEL7:(void)0;
}
}
RET_LABEL:;
}
/* method astbuilder#AVarAssignExpr#make for (self: Object, Variable, AExpr) */
void VIRTUAL_astbuilder__AVarAssignExpr__make(val* self, val* p0, val* p1) {
astbuilder__AVarAssignExpr__make(self, p0, p1); /* Direct call astbuilder#AVarAssignExpr#make on <self:Object(AVarAssignExpr)>*/
RET_LABEL:;
}
