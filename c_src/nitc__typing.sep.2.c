#include "nitc__typing.sep.0.h"
/* method typing#AVarAssignExpr#accept_typing for (self: AVarAssignExpr, TypeVisitor) */
void nitc__typing___AVarAssignExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable Variable */;
val* var2 /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : AExpr */;
val* var10 /* : AExpr */;
val* var11 /* : nullable MType */;
val* var13 /* : nullable MType */;
val* var14 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
var_v = p0;
{
{ /* Inline scope#AVarFormExpr#variable (self) on <self:AVarAssignExpr> */
var2 = self->attrs[COLOR_nitc__scope__AVarFormExpr___variable].val; /* _variable on <self:AVarAssignExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_variable = var;
if (var_variable == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_variable,((val*)NULL)) on <var_variable:nullable Variable> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_variable->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_variable, var_other); /* == on <var_variable:nullable Variable(Variable)>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 960);
fatal_exit(1);
}
{
{ /* Inline parser_nodes#AAssignFormExpr#n_value (self) on <self:AVarAssignExpr> */
var10 = self->attrs[COLOR_nitc__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AVarAssignExpr> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1992);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:nullable Variable(Variable)> */
var13 = var_variable->attrs[COLOR_nitc__typing__Variable___declared_type].val; /* _declared_type on <var_variable:nullable Variable(Variable)> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_subtype(var_v, var8, var11);
}
var_mtype = var14;
{
nitc__typing___nitc__typing__TypeVisitor___set_variable(var_v, self, var_variable, var_mtype); /* Direct call typing#TypeVisitor#set_variable on <var_v:TypeVisitor>*/
}
{
{ /* Inline typing#AExpr#is_typed= (self,1) on <self:AVarAssignExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = 1; /* _is_typed on <self:AVarAssignExpr> */
RET_LABEL15:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AReassignFormExpr#reassign_callsite for (self: AReassignFormExpr): nullable CallSite */
val* nitc__typing___AReassignFormExpr___reassign_callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nitc__typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:AReassignFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AReassignFormExpr#reassign_callsite= for (self: AReassignFormExpr, nullable CallSite) */
void nitc__typing___AReassignFormExpr___reassign_callsite_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__AReassignFormExpr___reassign_callsite].val = p0; /* _reassign_callsite on <self:AReassignFormExpr> */
RET_LABEL:;
}
/* method typing#AReassignFormExpr#read_type for (self: AReassignFormExpr): nullable MType */
val* nitc__typing___AReassignFormExpr___read_type(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nitc__typing__AReassignFormExpr___read_type].val; /* _read_type on <self:AReassignFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AReassignFormExpr#read_type= for (self: AReassignFormExpr, nullable MType) */
void nitc__typing___AReassignFormExpr___read_type_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__AReassignFormExpr___read_type].val = p0; /* _read_type on <self:AReassignFormExpr> */
RET_LABEL:;
}
/* method typing#AReassignFormExpr#resolve_reassignment for (self: AReassignFormExpr, TypeVisitor, MType, MType): nullable MType */
val* nitc__typing___AReassignFormExpr___resolve_reassignment(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MType */;
val* var_v /* var v: TypeVisitor */;
val* var_readtype /* var readtype: MType */;
val* var_writetype /* var writetype: MType */;
val* var1 /* : AAssignOp */;
val* var3 /* : AAssignOp */;
val* var4 /* : String */;
val* var_reassign_name /* var reassign_name: String */;
val* var6 /* : AAssignOp */;
val* var8 /* : AAssignOp */;
val* var9 /* : nullable CallSite */;
val* var_callsite /* var callsite: nullable CallSite */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
val* var17 /* : MSignature */;
val* var19 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var20 /* : nullable MType */;
val* var22 /* : nullable MType */;
val* var_rettype /* var rettype: nullable MType */;
short int var23 /* : Bool */;
long var24 /* : Int */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
short int var_ /* var : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var_other31 /* var other: nullable Object */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
val* var34 /* : AExpr */;
val* var36 /* : AExpr */;
val* var37 /* : Array[MParameter] */;
val* var39 /* : Array[MParameter] */;
val* var40 /* : nullable Object */;
val* var41 /* : MType */;
val* var43 /* : MType */;
val* var44 /* : nullable MType */;
val* var_value_type /* var value_type: nullable MType */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
val* var51 /* : nullable MType */;
var_v = p0;
var_readtype = p1;
var_writetype = p2;
{
{ /* Inline parser_nodes#AReassignFormExpr#n_assign_op (self) on <self:AReassignFormExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:AReassignFormExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2000);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val*(*)(val* self))(var1->class->vft[COLOR_nitc__parser_nodes__AAssignOp__operator]))(var1); /* operator on <var1:AAssignOp>*/
}
var_reassign_name = var4;
{
{ /* Inline typing#AReassignFormExpr#read_type= (self,var_readtype) on <self:AReassignFormExpr> */
self->attrs[COLOR_nitc__typing__AReassignFormExpr___read_type].val = var_readtype; /* _read_type on <self:AReassignFormExpr> */
RET_LABEL5:(void)0;
}
}
{
{ /* Inline parser_nodes#AReassignFormExpr#n_assign_op (self) on <self:AReassignFormExpr> */
var8 = self->attrs[COLOR_nitc__parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:AReassignFormExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2000);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = nitc__typing___nitc__typing__TypeVisitor___get_method(var_v, var6, var_readtype, var_reassign_name, 0);
}
var_callsite = var9;
if (var_callsite == NULL) {
var10 = 1; /* is null */
} else {
var10 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_callsite,((val*)NULL)) on <var_callsite:nullable CallSite> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_callsite,var_other) on <var_callsite:nullable CallSite(CallSite)> */
var15 = var_callsite == var_other;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
if (var10){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#AReassignFormExpr#reassign_callsite= (self,var_callsite) on <self:AReassignFormExpr> */
self->attrs[COLOR_nitc__typing__AReassignFormExpr___reassign_callsite].val = var_callsite; /* _reassign_callsite on <self:AReassignFormExpr> */
RET_LABEL16:(void)0;
}
}
{
{ /* Inline typing#CallSite#msignature (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var19 = var_callsite->attrs[COLOR_nitc__typing__CallSite___msignature].val; /* _msignature on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 660);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_msignature = var17;
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:MSignature> */
var22 = var_msignature->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:MSignature> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
var_rettype = var20;
{
var24 = nitc___nitc__MSignature___arity(var_msignature);
}
{
{ /* Inline kernel#Int#== (var24,1l) on <var24:Int> */
var27 = var24 == 1l;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var_ = var25;
if (var25){
if (var_rettype == NULL) {
var28 = 0; /* is null */
} else {
var28 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_rettype,((val*)NULL)) on <var_rettype:nullable MType> */
var_other31 = ((val*)NULL);
{
var32 = ((short int(*)(val* self, val* p0))(var_rettype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_rettype, var_other31); /* == on <var_rettype:nullable MType(MType)>*/
}
var33 = !var32;
var29 = var33;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
var28 = var29;
}
var23 = var28;
} else {
var23 = var_;
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 993);
fatal_exit(1);
}
{
{ /* Inline parser_nodes#AReassignFormExpr#n_value (self) on <self:AReassignFormExpr> */
var36 = self->attrs[COLOR_nitc__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AReassignFormExpr> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2003);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:MSignature> */
var39 = var_msignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1783);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
var40 = core___core__SequenceRead___Collection__first(var37);
}
{
{ /* Inline model#MParameter#mtype (var40) on <var40:nullable Object(MParameter)> */
var43 = var40->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var40:nullable Object(MParameter)> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1900);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
var44 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_subtype(var_v, var34, var41);
}
var_value_type = var44;
if (var_value_type == NULL) {
var45 = 1; /* is null */
} else {
var45 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_value_type,((val*)NULL)) on <var_value_type:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_value_type,var_other) on <var_value_type:nullable MType(MType)> */
var50 = var_value_type == var_other;
var48 = var50;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
var46 = var48;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
var45 = var46;
}
if (var45){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var51 = nitc__typing___nitc__typing__TypeVisitor___check_subtype(var_v, self, var_rettype, var_writetype, 0);
}
var = var_rettype;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AVarReassignExpr#accept_typing for (self: AVarReassignExpr, TypeVisitor) */
void nitc__typing___AVarReassignExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable Variable */;
val* var2 /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable MType */;
val* var_readtype /* var readtype: nullable MType */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var_other12 /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
val* var17 /* : nullable MType */;
val* var19 /* : nullable MType */;
val* var_writetype /* var writetype: nullable MType */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
val* var26 /* : nullable MType */;
val* var_rettype /* var rettype: nullable MType */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
var_v = p0;
{
{ /* Inline scope#AVarFormExpr#variable (self) on <self:AVarReassignExpr> */
var2 = self->attrs[COLOR_nitc__scope__AVarFormExpr___variable].val; /* _variable on <self:AVarReassignExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_variable = var;
if (var_variable == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_variable,((val*)NULL)) on <var_variable:nullable Variable> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_variable->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_variable, var_other); /* == on <var_variable:nullable Variable(Variable)>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1007);
fatal_exit(1);
}
{
var8 = nitc__typing___nitc__typing__TypeVisitor___get_variable(var_v, self, var_variable);
}
var_readtype = var8;
if (var_readtype == NULL) {
var9 = 1; /* is null */
} else {
var9 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_readtype,((val*)NULL)) on <var_readtype:nullable MType> */
var_other12 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_readtype,var_other12) on <var_readtype:nullable MType(MType)> */
var15 = var_readtype == var_other12;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#AReassignFormExpr#read_type= (self,var_readtype) on <self:AVarReassignExpr> */
self->attrs[COLOR_nitc__typing__AReassignFormExpr___read_type].val = var_readtype; /* _read_type on <self:AVarReassignExpr> */
RET_LABEL16:(void)0;
}
}
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:nullable Variable(Variable)> */
var19 = var_variable->attrs[COLOR_nitc__typing__Variable___declared_type].val; /* _declared_type on <var_variable:nullable Variable(Variable)> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_writetype = var17;
if (var_writetype == NULL) {
var20 = 1; /* is null */
} else {
var20 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_writetype,((val*)NULL)) on <var_writetype:nullable MType> */
var_other12 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_writetype,var_other12) on <var_writetype:nullable MType(MType)> */
var25 = var_writetype == var_other12;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (var20){
goto RET_LABEL;
} else {
}
{
var26 = nitc__typing___AReassignFormExpr___resolve_reassignment(self, var_v, var_readtype, var_writetype);
}
var_rettype = var26;
{
nitc__typing___nitc__typing__TypeVisitor___set_variable(var_v, self, var_variable, var_rettype); /* Direct call typing#TypeVisitor#set_variable on <var_v:TypeVisitor>*/
}
if (var_rettype == NULL) {
var27 = 0; /* is null */
} else {
var27 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_rettype,((val*)NULL)) on <var_rettype:nullable MType> */
var_other = ((val*)NULL);
{
var30 = ((short int(*)(val* self, val* p0))(var_rettype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_rettype, var_other); /* == on <var_rettype:nullable MType(MType)>*/
}
var31 = !var30;
var28 = var31;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
var27 = var28;
}
{
{ /* Inline typing#AExpr#is_typed= (self,var27) on <self:AVarReassignExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = var27; /* _is_typed on <self:AVarReassignExpr> */
RET_LABEL32:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AContinueExpr#accept_typing for (self: AContinueExpr, TypeVisitor) */
void nitc__typing___AContinueExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable AExpr */;
val* var2 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable MType */;
var_v = p0;
{
{ /* Inline parser_nodes#AEscapeExpr#n_expr (self) on <self:AContinueExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AEscapeExpr___n_expr].val; /* _n_expr on <self:AContinueExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_nexpr = var;
if (var_nexpr == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nexpr,((val*)NULL)) on <var_nexpr:nullable AExpr> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nexpr, var_other); /* == on <var_nexpr:nullable AExpr(AExpr)>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
{
var8 = nitc__typing___nitc__typing__TypeVisitor___visit_expr(var_v, var_nexpr);
}
} else {
}
{
{ /* Inline typing#AExpr#is_typed= (self,1) on <self:AContinueExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = 1; /* _is_typed on <self:AContinueExpr> */
RET_LABEL9:(void)0;
}
}
RET_LABEL:;
}
/* method typing#ABreakExpr#accept_typing for (self: ABreakExpr, TypeVisitor) */
void nitc__typing___ABreakExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable AExpr */;
val* var2 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable MType */;
var_v = p0;
{
{ /* Inline parser_nodes#AEscapeExpr#n_expr (self) on <self:ABreakExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AEscapeExpr___n_expr].val; /* _n_expr on <self:ABreakExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_nexpr = var;
if (var_nexpr == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nexpr,((val*)NULL)) on <var_nexpr:nullable AExpr> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nexpr, var_other); /* == on <var_nexpr:nullable AExpr(AExpr)>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
{
var8 = nitc__typing___nitc__typing__TypeVisitor___visit_expr(var_v, var_nexpr);
}
} else {
}
{
{ /* Inline typing#AExpr#is_typed= (self,1) on <self:ABreakExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = 1; /* _is_typed on <self:ABreakExpr> */
RET_LABEL9:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AReturnExpr#accept_typing for (self: AReturnExpr, TypeVisitor) */
void nitc__typing___AReturnExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable AExpr */;
val* var2 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
val* var3 /* : nullable MPropDef */;
val* var5 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MPropDef */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var7 /* : nullable MSignature */;
val* var9 /* : nullable MSignature */;
val* var10 /* : nullable MType */;
val* var12 /* : nullable MType */;
val* var_ret_type /* var ret_type: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : nullable MType */;
val* var18 /* : nullable MType */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : nullable MType */;
val* var30 /* : nullable MType */;
static val* varonce;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : String */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
val* var42 /* : String */;
var_v = p0;
{
{ /* Inline parser_nodes#AReturnExpr#n_expr (self) on <self:AReturnExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AReturnExpr___n_expr].val; /* _n_expr on <self:AReturnExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_nexpr = var;
{
{ /* Inline typing#TypeVisitor#mpropdef (var_v) on <var_v:TypeVisitor> */
var5 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___mpropdef].val; /* _mpropdef on <var_v:TypeVisitor> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_mpropdef = var3;
/* <var_mpropdef:nullable MPropDef> isa MMethodDef */
cltype = type_nitc__MMethodDef.color;
idtype = type_nitc__MMethodDef.id;
if(var_mpropdef == NULL) {
var6 = 0;
} else {
if(cltype >= var_mpropdef->type->table_size) {
var6 = 0;
} else {
var6 = var_mpropdef->type->type_table[cltype] == idtype;
}
}
if (var6){
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var9 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (var7 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1055);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#return_mtype (var7) on <var7:nullable MSignature> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1795);
fatal_exit(1);
}
var12 = var7->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var7:nullable MSignature> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_ret_type = var10;
} else {
/* <var_mpropdef:nullable MPropDef> isa MAttributeDef */
cltype14 = type_nitc__MAttributeDef.color;
idtype15 = type_nitc__MAttributeDef.id;
if(var_mpropdef == NULL) {
var13 = 0;
} else {
if(cltype14 >= var_mpropdef->type->table_size) {
var13 = 0;
} else {
var13 = var_mpropdef->type->type_table[cltype14] == idtype15;
}
}
if (var13){
{
{ /* Inline model#MAttributeDef#static_mtype (var_mpropdef) on <var_mpropdef:nullable MPropDef(MAttributeDef)> */
var18 = var_mpropdef->attrs[COLOR_nitc__model__MAttributeDef___static_mtype].val; /* _static_mtype on <var_mpropdef:nullable MPropDef(MAttributeDef)> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_ret_type = var16;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1059);
fatal_exit(1);
}
}
if (var_nexpr == NULL) {
var19 = 0; /* is null */
} else {
var19 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nexpr,((val*)NULL)) on <var_nexpr:nullable AExpr> */
var_other = ((val*)NULL);
{
var22 = ((short int(*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nexpr, var_other); /* == on <var_nexpr:nullable AExpr(AExpr)>*/
}
var23 = !var22;
var20 = var23;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var19 = var20;
}
if (var19){
if (var_ret_type == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret_type,((val*)NULL)) on <var_ret_type:nullable Object(nullable MType)> */
var_other = ((val*)NULL);
{
var27 = ((short int(*)(val* self, val* p0))(var_ret_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ret_type, var_other); /* == on <var_ret_type:nullable MType(MType)>*/
}
var28 = !var27;
var25 = var28;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var24 = var25;
}
if (var24){
{
var29 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_subtype(var_v, var_nexpr, var_ret_type);
}
} else {
{
var30 = nitc__typing___nitc__typing__TypeVisitor___visit_expr(var_v, var_nexpr);
}
if (likely(varonce!=NULL)) {
var31 = varonce;
} else {
var32 = "Error: `return` with value in a procedure.";
var33 = core__flat___NativeString___to_s_full(var32, 42l, 42l);
var31 = var33;
varonce = var31;
}
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, var_nexpr, var31); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
}
} else {
if (var_ret_type == NULL) {
var34 = 0; /* is null */
} else {
var34 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret_type,((val*)NULL)) on <var_ret_type:nullable Object(nullable MType)> */
var_other = ((val*)NULL);
{
var37 = ((short int(*)(val* self, val* p0))(var_ret_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ret_type, var_other); /* == on <var_ret_type:nullable MType(MType)>*/
}
var38 = !var37;
var35 = var38;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
var34 = var35;
}
if (var34){
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = "Error: `return` without value in a function.";
var42 = core__flat___NativeString___to_s_full(var41, 44l, 44l);
var40 = var42;
varonce39 = var40;
}
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var40); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
}
{
{ /* Inline typing#AExpr#is_typed= (self,1) on <self:AReturnExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = 1; /* _is_typed on <self:AReturnExpr> */
RET_LABEL43:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AAbortExpr#accept_typing for (self: AAbortExpr, TypeVisitor) */
void nitc__typing___AAbortExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
var_v = p0;
{
{ /* Inline typing#AExpr#is_typed= (self,1) on <self:AAbortExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = 1; /* _is_typed on <self:AAbortExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AIfExpr#accept_typing for (self: AIfExpr, TypeVisitor) */
void nitc__typing___AIfExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var4 /* : nullable AExpr */;
val* var6 /* : nullable AExpr */;
val* var7 /* : nullable AExpr */;
val* var9 /* : nullable AExpr */;
short int var11 /* : Bool */;
val* var12 /* : nullable AExpr */;
val* var14 /* : nullable AExpr */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var_ /* var : Bool */;
val* var20 /* : nullable AExpr */;
val* var22 /* : nullable AExpr */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var_other26 /* var other: nullable Object */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : nullable AExpr */;
val* var32 /* : nullable AExpr */;
val* var33 /* : nullable MType */;
var_v = p0;
{
{ /* Inline parser_nodes#AIfExpr#n_expr (self) on <self:AIfExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_expr].val; /* _n_expr on <self:AIfExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1843);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_bool(var_v, var);
}
{
{ /* Inline parser_nodes#AIfExpr#n_then (self) on <self:AIfExpr> */
var6 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_then].val; /* _n_then on <self:AIfExpr> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
nitc__typing___nitc__typing__TypeVisitor___visit_stmt(var_v, var4); /* Direct call typing#TypeVisitor#visit_stmt on <var_v:TypeVisitor>*/
}
{
{ /* Inline parser_nodes#AIfExpr#n_else (self) on <self:AIfExpr> */
var9 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_else].val; /* _n_else on <self:AIfExpr> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
nitc__typing___nitc__typing__TypeVisitor___visit_stmt(var_v, var7); /* Direct call typing#TypeVisitor#visit_stmt on <var_v:TypeVisitor>*/
}
{
{ /* Inline typing#AExpr#is_typed= (self,1) on <self:AIfExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = 1; /* _is_typed on <self:AIfExpr> */
RET_LABEL10:(void)0;
}
}
{
{ /* Inline parser_nodes#AIfExpr#n_then (self) on <self:AIfExpr> */
var14 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_then].val; /* _n_then on <self:AIfExpr> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
if (var12 == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var12,((val*)NULL)) on <var12:nullable AExpr> */
var_other = ((val*)NULL);
{
var18 = ((short int(*)(val* self, val* p0))(var12->class->vft[COLOR_core__kernel__Object___61d_61d]))(var12, var_other); /* == on <var12:nullable AExpr(AExpr)>*/
}
var19 = !var18;
var16 = var19;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var15 = var16;
}
var_ = var15;
if (var15){
{
{ /* Inline parser_nodes#AIfExpr#n_else (self) on <self:AIfExpr> */
var22 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_else].val; /* _n_else on <self:AIfExpr> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
if (var20 == NULL) {
var23 = 1; /* is null */
} else {
var23 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var20,((val*)NULL)) on <var20:nullable AExpr> */
var_other26 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var20,var_other26) on <var20:nullable AExpr(AExpr)> */
var29 = var20 == var_other26;
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var24 = var27;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
var23 = var24;
}
var11 = var23;
} else {
var11 = var_;
}
if (var11){
{
{ /* Inline parser_nodes#AIfExpr#n_then (self) on <self:AIfExpr> */
var32 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_then].val; /* _n_then on <self:AIfExpr> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
if (var30 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1095);
fatal_exit(1);
} else {
var33 = ((val*(*)(val* self))(var30->class->vft[COLOR_nitc__typing__AExpr__mtype]))(var30); /* mtype on <var30:nullable AExpr>*/
}
{
{ /* Inline typing#AExpr#mtype= (self,var33) on <self:AIfExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var33; /* _mtype on <self:AIfExpr> */
RET_LABEL34:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method typing#AIfexprExpr#accept_typing for (self: AIfexprExpr, TypeVisitor) */
void nitc__typing___AIfexprExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var4 /* : AExpr */;
val* var6 /* : AExpr */;
val* var7 /* : nullable MType */;
val* var_t1 /* var t1: nullable MType */;
val* var8 /* : AExpr */;
val* var10 /* : AExpr */;
val* var11 /* : nullable MType */;
val* var_t2 /* var t2: nullable MType */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var_ /* var : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : Array[MType] */;
val* var_26 /* var : Array[MType] */;
val* var27 /* : nullable MType */;
val* var_t /* var t: nullable MType */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
val* var34 /* : NativeArray[String] */;
static val* varonce;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
val* var38 /* : String */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
val* var42 /* : String */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
val* var46 /* : String */;
val* var47 /* : String */;
val* var48 /* : String */;
val* var49 /* : String */;
var_v = p0;
{
{ /* Inline parser_nodes#AIfexprExpr#n_expr (self) on <self:AIfexprExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_expr].val; /* _n_expr on <self:AIfexprExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1866);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_bool(var_v, var);
}
{
{ /* Inline parser_nodes#AIfexprExpr#n_then (self) on <self:AIfexprExpr> */
var6 = self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_then].val; /* _n_then on <self:AIfexprExpr> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_then");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1872);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nitc__typing___nitc__typing__TypeVisitor___visit_expr(var_v, var4);
}
var_t1 = var7;
{
{ /* Inline parser_nodes#AIfexprExpr#n_else (self) on <self:AIfexprExpr> */
var10 = self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_else].val; /* _n_else on <self:AIfexprExpr> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_else");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1878);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nitc__typing___nitc__typing__TypeVisitor___visit_expr(var_v, var8);
}
var_t2 = var11;
if (var_t1 == NULL) {
var13 = 1; /* is null */
} else {
var13 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t1,((val*)NULL)) on <var_t1:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_t1,var_other) on <var_t1:nullable MType(MType)> */
var18 = var_t1 == var_other;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
var_ = var13;
if (var13){
var12 = var_;
} else {
if (var_t2 == NULL) {
var19 = 1; /* is null */
} else {
var19 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t2,((val*)NULL)) on <var_t2:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_t2,var_other) on <var_t2:nullable MType(MType)> */
var24 = var_t2 == var_other;
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var19 = var20;
}
var12 = var19;
}
if (var12){
goto RET_LABEL;
} else {
}
var25 = NEW_core__Array(&type_core__Array__nitc__MType);
{
core___core__Array___with_capacity(var25, 2l); /* Direct call array#Array#with_capacity on <var25:Array[MType]>*/
}
var_26 = var25;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_26, var_t1); /* Direct call array#AbstractArray#push on <var_26:Array[MType]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_26, var_t2); /* Direct call array#AbstractArray#push on <var_26:Array[MType]>*/
}
{
var27 = nitc__typing___nitc__typing__TypeVisitor___merge_types(var_v, self, var_26);
}
var_t = var27;
if (var_t == NULL) {
var28 = 1; /* is null */
} else {
var28 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t,((val*)NULL)) on <var_t:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_t,var_other) on <var_t:nullable MType(MType)> */
var33 = var_t == var_other;
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
var28 = var29;
}
if (var28){
if (unlikely(varonce==NULL)) {
var34 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "Type Error: ambiguous type `";
var38 = core__flat___NativeString___to_s_full(var37, 28l, 28l);
var36 = var38;
varonce35 = var36;
}
((struct instance_core__NativeArray*)var34)->values[0]=var36;
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = "` vs `";
var42 = core__flat___NativeString___to_s_full(var41, 6l, 6l);
var40 = var42;
varonce39 = var40;
}
((struct instance_core__NativeArray*)var34)->values[2]=var40;
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "`.";
var46 = core__flat___NativeString___to_s_full(var45, 2l, 2l);
var44 = var46;
varonce43 = var44;
}
((struct instance_core__NativeArray*)var34)->values[4]=var44;
} else {
var34 = varonce;
varonce = NULL;
}
{
var47 = ((val*(*)(val* self))(var_t1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_t1); /* to_s on <var_t1:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var34)->values[1]=var47;
{
var48 = ((val*(*)(val* self))(var_t2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_t2); /* to_s on <var_t2:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var34)->values[3]=var48;
{
var49 = ((val*(*)(val* self))(var34->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var34); /* native_to_s on <var34:NativeArray[String]>*/
}
varonce = var34;
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var49); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
} else {
}
{
{ /* Inline typing#AExpr#mtype= (self,var_t) on <self:AIfexprExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var_t; /* _mtype on <self:AIfexprExpr> */
RET_LABEL50:(void)0;
}
}
RET_LABEL:;
}
/* method typing#ADoExpr#accept_typing for (self: ADoExpr, TypeVisitor) */
void nitc__typing___ADoExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable AExpr */;
val* var2 /* : nullable AExpr */;
var_v = p0;
{
{ /* Inline parser_nodes#ADoExpr#n_block (self) on <self:ADoExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ADoExpr___n_block].val; /* _n_block on <self:ADoExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc__typing___nitc__typing__TypeVisitor___visit_stmt(var_v, var); /* Direct call typing#TypeVisitor#visit_stmt on <var_v:TypeVisitor>*/
}
{
{ /* Inline typing#AExpr#is_typed= (self,1) on <self:ADoExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = 1; /* _is_typed on <self:ADoExpr> */
RET_LABEL3:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AWhileExpr#accept_typing for (self: AWhileExpr, TypeVisitor) */
void nitc__typing___AWhileExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : nullable MType */;
val* var5 /* : nullable AExpr */;
val* var7 /* : nullable AExpr */;
var_v = p0;
{
{ /* Inline typing#TypeVisitor#has_loop= (var_v,1) on <var_v:TypeVisitor> */
var_v->attrs[COLOR_nitc__typing__TypeVisitor___has_loop].s = 1; /* _has_loop on <var_v:TypeVisitor> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline parser_nodes#AWhileExpr#n_expr (self) on <self:AWhileExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AWhileExpr___n_expr].val; /* _n_expr on <self:AWhileExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1890);
fatal_exit(1);
}
var = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_bool(var_v, var);
}
{
{ /* Inline parser_nodes#AWhileExpr#n_block (self) on <self:AWhileExpr> */
var7 = self->attrs[COLOR_nitc__parser_nodes__AWhileExpr___n_block].val; /* _n_block on <self:AWhileExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
nitc__typing___nitc__typing__TypeVisitor___visit_stmt(var_v, var5); /* Direct call typing#TypeVisitor#visit_stmt on <var_v:TypeVisitor>*/
}
{
{ /* Inline typing#AExpr#is_typed= (self,1) on <self:AWhileExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = 1; /* _is_typed on <self:AWhileExpr> */
RET_LABEL8:(void)0;
}
}
RET_LABEL:;
}
/* method typing#ALoopExpr#accept_typing for (self: ALoopExpr, TypeVisitor) */
void nitc__typing___ALoopExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable AExpr */;
val* var3 /* : nullable AExpr */;
var_v = p0;
{
{ /* Inline typing#TypeVisitor#has_loop= (var_v,1) on <var_v:TypeVisitor> */
var_v->attrs[COLOR_nitc__typing__TypeVisitor___has_loop].s = 1; /* _has_loop on <var_v:TypeVisitor> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline parser_nodes#ALoopExpr#n_block (self) on <self:ALoopExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ALoopExpr___n_block].val; /* _n_block on <self:ALoopExpr> */
var = var3;
RET_LABEL2:(void)0;
}
}
{
nitc__typing___nitc__typing__TypeVisitor___visit_stmt(var_v, var); /* Direct call typing#TypeVisitor#visit_stmt on <var_v:TypeVisitor>*/
}
{
{ /* Inline typing#AExpr#is_typed= (self,1) on <self:ALoopExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = 1; /* _is_typed on <self:ALoopExpr> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AForExpr#accept_typing for (self: AForExpr, TypeVisitor) */
void nitc__typing___AForExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : ANodes[AForGroup] */;
val* var3 /* : ANodes[AForGroup] */;
val* var_ /* var : ANodes[AForGroup] */;
val* var4 /* : Iterator[ANode] */;
val* var_5 /* var : Iterator[AForGroup] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_g /* var g: AForGroup */;
val* var8 /* : AExpr */;
val* var10 /* : AExpr */;
val* var11 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
val* var22 /* : nullable AExpr */;
val* var24 /* : nullable AExpr */;
val* var25 /* : nullable AExpr */;
val* var27 /* : nullable AExpr */;
val* var28 /* : nullable MType */;
var_v = p0;
{
{ /* Inline typing#TypeVisitor#has_loop= (var_v,1) on <var_v:TypeVisitor> */
var_v->attrs[COLOR_nitc__typing__TypeVisitor___has_loop].s = 1; /* _has_loop on <var_v:TypeVisitor> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline parser_nodes#AForExpr#n_groups (self) on <self:AForExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_groups].val; /* _n_groups on <self:AForExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_groups");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1920);
fatal_exit(1);
}
var = var3;
RET_LABEL2:(void)0;
}
}
var_ = var;
{
var4 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_);
}
var_5 = var4;
for(;;) {
{
var6 = ((short int(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_5); /* is_ok on <var_5:Iterator[AForGroup]>*/
}
if (var6){
} else {
goto BREAK_label;
}
{
var7 = ((val*(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_5); /* item on <var_5:Iterator[AForGroup]>*/
}
var_g = var7;
{
{ /* Inline parser_nodes#AForGroup#n_expr (var_g) on <var_g:AForGroup> */
var10 = var_g->attrs[COLOR_nitc__parser_nodes__AForGroup___n_expr].val; /* _n_expr on <var_g:AForGroup> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1943);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nitc__typing___nitc__typing__TypeVisitor___visit_expr(var_v, var8);
}
var_mtype = var11;
if (var_mtype == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var17 = var_mtype == var_other;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (var12){
goto RET_LABEL;
} else {
}
{
nitc__typing___AForGroup___do_type_iterator(var_g, var_v, var_mtype); /* Direct call typing#AForGroup#do_type_iterator on <var_g:AForGroup>*/
}
{
{ /* Inline modelbuilder_base#ANode#is_broken (var_g) on <var_g:AForGroup> */
var20 = var_g->attrs[COLOR_nitc__modelbuilder_base__ANode___is_broken].s; /* _is_broken on <var_g:AForGroup> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (var18){
{
{ /* Inline modelbuilder_base#ANode#is_broken= (self,1) on <self:AForExpr> */
self->attrs[COLOR_nitc__modelbuilder_base__ANode___is_broken].s = 1; /* _is_broken on <self:AForExpr> */
RET_LABEL21:(void)0;
}
}
} else {
}
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_5); /* next on <var_5:Iterator[AForGroup]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_5); /* finish on <var_5:Iterator[AForGroup]>*/
}
{
{ /* Inline parser_nodes#AForExpr#n_block (self) on <self:AForExpr> */
var24 = self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_block].val; /* _n_block on <self:AForExpr> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
nitc__typing___nitc__typing__TypeVisitor___visit_stmt(var_v, var22); /* Direct call typing#TypeVisitor#visit_stmt on <var_v:TypeVisitor>*/
}
{
{ /* Inline parser_nodes#AForExpr#n_block (self) on <self:AForExpr> */
var27 = self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_block].val; /* _n_block on <self:AForExpr> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
if (var25 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1161);
fatal_exit(1);
} else {
var28 = ((val*(*)(val* self))(var25->class->vft[COLOR_nitc__typing__AExpr__mtype]))(var25); /* mtype on <var25:nullable AExpr>*/
}
{
{ /* Inline typing#AExpr#mtype= (self,var28) on <self:AForExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var28; /* _mtype on <self:AForExpr> */
RET_LABEL29:(void)0;
}
}
{
{ /* Inline typing#AExpr#is_typed= (self,1) on <self:AForExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = 1; /* _is_typed on <self:AForExpr> */
RET_LABEL30:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AForGroup#coltype= for (self: AForGroup, nullable MClassType) */
void nitc__typing___AForGroup___coltype_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__AForGroup___coltype].val = p0; /* _coltype on <self:AForGroup> */
RET_LABEL:;
}
/* method typing#AForGroup#method_iterator for (self: AForGroup): nullable CallSite */
val* nitc__typing___AForGroup___method_iterator(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nitc__typing__AForGroup___method_iterator].val; /* _method_iterator on <self:AForGroup> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AForGroup#method_iterator= for (self: AForGroup, nullable CallSite) */
void nitc__typing___AForGroup___method_iterator_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__AForGroup___method_iterator].val = p0; /* _method_iterator on <self:AForGroup> */
RET_LABEL:;
}
/* method typing#AForGroup#method_is_ok for (self: AForGroup): nullable CallSite */
val* nitc__typing___AForGroup___method_is_ok(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nitc__typing__AForGroup___method_is_ok].val; /* _method_is_ok on <self:AForGroup> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AForGroup#method_is_ok= for (self: AForGroup, nullable CallSite) */
void nitc__typing___AForGroup___method_is_ok_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__AForGroup___method_is_ok].val = p0; /* _method_is_ok on <self:AForGroup> */
RET_LABEL:;
}
/* method typing#AForGroup#method_item for (self: AForGroup): nullable CallSite */
val* nitc__typing___AForGroup___method_item(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nitc__typing__AForGroup___method_item].val; /* _method_item on <self:AForGroup> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AForGroup#method_item= for (self: AForGroup, nullable CallSite) */
void nitc__typing___AForGroup___method_item_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__AForGroup___method_item].val = p0; /* _method_item on <self:AForGroup> */
RET_LABEL:;
}
/* method typing#AForGroup#method_next for (self: AForGroup): nullable CallSite */
val* nitc__typing___AForGroup___method_next(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nitc__typing__AForGroup___method_next].val; /* _method_next on <self:AForGroup> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AForGroup#method_next= for (self: AForGroup, nullable CallSite) */
void nitc__typing___AForGroup___method_next_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__AForGroup___method_next].val = p0; /* _method_next on <self:AForGroup> */
RET_LABEL:;
}
/* method typing#AForGroup#method_key for (self: AForGroup): nullable CallSite */
val* nitc__typing___AForGroup___method_key(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nitc__typing__AForGroup___method_key].val; /* _method_key on <self:AForGroup> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AForGroup#method_key= for (self: AForGroup, nullable CallSite) */
void nitc__typing___AForGroup___method_key_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__AForGroup___method_key].val = p0; /* _method_key on <self:AForGroup> */
RET_LABEL:;
}
/* method typing#AForGroup#method_finish for (self: AForGroup): nullable CallSite */
val* nitc__typing___AForGroup___method_finish(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nitc__typing__AForGroup___method_finish].val; /* _method_finish on <self:AForGroup> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AForGroup#method_finish= for (self: AForGroup, nullable CallSite) */
void nitc__typing___AForGroup___method_finish_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__AForGroup___method_finish].val = p0; /* _method_finish on <self:AForGroup> */
RET_LABEL:;
}
/* method typing#AForGroup#method_lt for (self: AForGroup): nullable CallSite */
val* nitc__typing___AForGroup___method_lt(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nitc__typing__AForGroup___method_lt].val; /* _method_lt on <self:AForGroup> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AForGroup#method_lt= for (self: AForGroup, nullable CallSite) */
void nitc__typing___AForGroup___method_lt_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__AForGroup___method_lt].val = p0; /* _method_lt on <self:AForGroup> */
RET_LABEL:;
}
/* method typing#AForGroup#method_successor for (self: AForGroup): nullable CallSite */
val* nitc__typing___AForGroup___method_successor(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nitc__typing__AForGroup___method_successor].val; /* _method_successor on <self:AForGroup> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AForGroup#method_successor= for (self: AForGroup, nullable CallSite) */
void nitc__typing___AForGroup___method_successor_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__AForGroup___method_successor].val = p0; /* _method_successor on <self:AForGroup> */
RET_LABEL:;
}
/* method typing#AForGroup#do_type_iterator for (self: AForGroup, TypeVisitor, MType) */
void nitc__typing___AForGroup___do_type_iterator(val* self, val* p0, val* p1) {
val* var_v /* var v: TypeVisitor */;
val* var_mtype /* var mtype: MType */;
short int var /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : String */;
static val* varonce4;
val* var5 /* : String */;
char* var6 /* : NativeString */;
val* var7 /* : String */;
val* var8 /* : nullable MClass */;
val* var_objcla /* var objcla: nullable MClass */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : String */;
val* var19 /* : AExpr */;
val* var21 /* : AExpr */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var25 /* : nullable CallSite */;
val* var_itdef /* var itdef: nullable CallSite */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
val* var33 /* : NativeArray[String] */;
static val* varonce32;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : String */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : String */;
val* var42 /* : String */;
val* var43 /* : String */;
val* var45 /* : MSignature */;
val* var47 /* : MSignature */;
val* var48 /* : nullable MType */;
val* var50 /* : nullable MType */;
val* var_ittype /* var ittype: nullable MType */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
val* var60 /* : String */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
val* var64 /* : String */;
val* var65 /* : nullable MClass */;
val* var_colit_cla /* var colit_cla: nullable MClass */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
val* var69 /* : String */;
val* var70 /* : nullable MClass */;
val* var_mapit_cla /* var mapit_cla: nullable MClass */;
short int var_is_col /* var is_col: Bool */;
short int var_is_map /* var is_map: Bool */;
short int var71 /* : Bool */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
val* var_other75 /* var other: nullable Object */;
short int var76 /* : Bool */;
short int var77 /* : Bool */;
short int var_ /* var : Bool */;
val* var78 /* : Array[MType] */;
val* var_79 /* var : Array[MType] */;
val* var80 /* : MClassType */;
val* var82 /* : MClassType */;
val* var83 /* : MType */;
val* var84 /* : MClassType */;
short int var85 /* : Bool */;
val* var86 /* : MModule */;
val* var88 /* : MModule */;
val* var89 /* : nullable MClassType */;
val* var91 /* : nullable MClassType */;
val* var92 /* : MClassType */;
val* var_coltype /* var coltype: MClassType */;
val* var93 /* : nullable Array[Variable] */;
val* var95 /* : nullable Array[Variable] */;
val* var_variables /* var variables: nullable Array[Variable] */;
long var96 /* : Int */;
long var98 /* : Int */;
short int var99 /* : Bool */;
short int var101 /* : Bool */;
short int var102 /* : Bool */;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : NativeString */;
val* var106 /* : String */;
val* var107 /* : nullable Object */;
val* var108 /* : Array[MType] */;
val* var109 /* : nullable Object */;
short int var111 /* : Bool */;
short int var112 /* : Bool */;
short int var113 /* : Bool */;
short int var115 /* : Bool */;
short int var116 /* : Bool */;
short int var_117 /* var : Bool */;
val* var118 /* : Array[MType] */;
val* var_119 /* var : Array[MType] */;
val* var120 /* : MClassType */;
val* var122 /* : MClassType */;
val* var123 /* : MType */;
val* var124 /* : MClassType */;
val* var126 /* : MClassType */;
val* var127 /* : MType */;
val* var128 /* : MClassType */;
short int var129 /* : Bool */;
val* var130 /* : MModule */;
val* var132 /* : MModule */;
val* var133 /* : nullable MClassType */;
val* var135 /* : nullable MClassType */;
val* var136 /* : MClassType */;
val* var_coltype137 /* var coltype: MClassType */;
val* var138 /* : nullable Array[Variable] */;
val* var140 /* : nullable Array[Variable] */;
val* var_variables141 /* var variables: nullable Array[Variable] */;
long var142 /* : Int */;
long var144 /* : Int */;
short int var145 /* : Bool */;
short int var147 /* : Bool */;
short int var148 /* : Bool */;
static val* varonce149;
val* var150 /* : String */;
char* var151 /* : NativeString */;
val* var152 /* : String */;
val* var153 /* : nullable Object */;
val* var154 /* : Array[MType] */;
val* var155 /* : nullable Object */;
val* var157 /* : nullable Object */;
val* var158 /* : Array[MType] */;
val* var159 /* : nullable Object */;
short int var161 /* : Bool */;
short int var162 /* : Bool */;
short int var_163 /* var : Bool */;
short int var164 /* : Bool */;
static val* varonce165;
val* var166 /* : String */;
char* var167 /* : NativeString */;
val* var168 /* : String */;
short int var169 /* : Bool */;
val* var170 /* : MType */;
val* var171 /* : MType */;
short int var172 /* : Bool */;
int cltype173;
int idtype174;
const char* var_class_name;
static val* varonce176;
val* var177 /* : String */;
char* var178 /* : NativeString */;
val* var179 /* : String */;
val* var180 /* : nullable CallSite */;
val* var_ikdef /* var ikdef: nullable CallSite */;
short int var181 /* : Bool */;
short int var182 /* : Bool */;
short int var184 /* : Bool */;
short int var186 /* : Bool */;
val* var188 /* : NativeArray[String] */;
static val* varonce187;
static val* varonce189;
val* var190 /* : String */;
char* var191 /* : NativeString */;
val* var192 /* : String */;
static val* varonce193;
val* var194 /* : String */;
char* var195 /* : NativeString */;
val* var196 /* : String */;
val* var197 /* : String */;
val* var198 /* : String */;
static val* varonce200;
val* var201 /* : String */;
char* var202 /* : NativeString */;
val* var203 /* : String */;
val* var204 /* : nullable CallSite */;
val* var_itemdef /* var itemdef: nullable CallSite */;
short int var205 /* : Bool */;
short int var206 /* : Bool */;
short int var208 /* : Bool */;
short int var210 /* : Bool */;
val* var212 /* : NativeArray[String] */;
static val* varonce211;
static val* varonce213;
val* var214 /* : String */;
char* var215 /* : NativeString */;
val* var216 /* : String */;
static val* varonce217;
val* var218 /* : String */;
char* var219 /* : NativeString */;
val* var220 /* : String */;
val* var221 /* : String */;
val* var222 /* : String */;
static val* varonce224;
val* var225 /* : String */;
char* var226 /* : NativeString */;
val* var227 /* : String */;
val* var228 /* : nullable CallSite */;
val* var_nextdef /* var nextdef: nullable CallSite */;
short int var229 /* : Bool */;
short int var230 /* : Bool */;
short int var232 /* : Bool */;
short int var234 /* : Bool */;
val* var236 /* : NativeArray[String] */;
static val* varonce235;
static val* varonce237;
val* var238 /* : String */;
char* var239 /* : NativeString */;
val* var240 /* : String */;
static val* varonce241;
val* var242 /* : String */;
char* var243 /* : NativeString */;
val* var244 /* : String */;
val* var245 /* : String */;
val* var246 /* : String */;
static val* varonce248;
val* var249 /* : String */;
char* var250 /* : NativeString */;
val* var251 /* : String */;
val* var252 /* : nullable CallSite */;
static val* varonce254;
val* var255 /* : String */;
char* var256 /* : NativeString */;
val* var257 /* : String */;
val* var258 /* : nullable CallSite */;
val* var_keydef /* var keydef: nullable CallSite */;
short int var259 /* : Bool */;
short int var260 /* : Bool */;
short int var262 /* : Bool */;
short int var264 /* : Bool */;
val* var266 /* : NativeArray[String] */;
static val* varonce265;
static val* varonce267;
val* var268 /* : String */;
char* var269 /* : NativeString */;
val* var270 /* : String */;
static val* varonce271;
val* var272 /* : String */;
char* var273 /* : NativeString */;
val* var274 /* : String */;
val* var275 /* : String */;
val* var276 /* : String */;
short int var278 /* : Bool */;
val* var279 /* : nullable Array[Variable] */;
val* var281 /* : nullable Array[Variable] */;
long var282 /* : Int */;
long var284 /* : Int */;
short int var285 /* : Bool */;
short int var287 /* : Bool */;
short int var_288 /* var : Bool */;
val* var289 /* : AExpr */;
val* var291 /* : AExpr */;
short int var292 /* : Bool */;
int cltype293;
int idtype294;
val* var295 /* : nullable Array[Variable] */;
val* var297 /* : nullable Array[Variable] */;
val* var298 /* : nullable Object */;
val* var_variable /* var variable: Variable */;
val* var299 /* : nullable MType */;
val* var301 /* : nullable MType */;
val* var_vtype /* var vtype: MType */;
val* var302 /* : AExpr */;
val* var304 /* : AExpr */;
short int var305 /* : Bool */;
int cltype306;
int idtype307;
static val* varonce308;
val* var309 /* : String */;
char* var310 /* : NativeString */;
val* var311 /* : String */;
val* var312 /* : nullable CallSite */;
static val* varonce314;
val* var315 /* : String */;
char* var316 /* : NativeString */;
val* var317 /* : String */;
val* var318 /* : nullable CallSite */;
static val* varonce320;
val* var321 /* : String */;
char* var322 /* : NativeString */;
val* var323 /* : String */;
val* var324 /* : nullable CallSite */;
var_v = p0;
var_mtype = p1;
/* <var_mtype:MType> isa MNullType */
cltype = type_nitc__MNullType.color;
idtype = type_nitc__MNullType.id;
if(cltype >= var_mtype->type->table_size) {
var = 0;
} else {
var = var_mtype->type->type_table[cltype] == idtype;
}
if (var){
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "Type Error: `for` cannot iterate over `null`.";
var3 = core__flat___NativeString___to_s_full(var2, 45l, 45l);
var1 = var3;
varonce = var1;
}
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var1); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
if (likely(varonce4!=NULL)) {
var5 = varonce4;
} else {
var6 = "Object";
var7 = core__flat___NativeString___to_s_full(var6, 6l, 6l);
var5 = var7;
varonce4 = var5;
}
{
var8 = nitc__typing___nitc__typing__TypeVisitor___get_mclass(var_v, self, var5);
}
var_objcla = var8;
if (var_objcla == NULL) {
var9 = 1; /* is null */
} else {
var9 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_objcla,((val*)NULL)) on <var_objcla:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_objcla,var_other) on <var_objcla:nullable MClass(MClass)> */
var14 = var_objcla == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
goto RET_LABEL;
} else {
}
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "iterator";
var18 = core__flat___NativeString___to_s_full(var17, 8l, 8l);
var16 = var18;
varonce15 = var16;
}
{
{ /* Inline parser_nodes#AForGroup#n_expr (self) on <self:AForGroup> */
var21 = self->attrs[COLOR_nitc__parser_nodes__AForGroup___n_expr].val; /* _n_expr on <self:AForGroup> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1943);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
/* <var19:AExpr> isa ASelfExpr */
cltype23 = type_nitc__ASelfExpr.color;
idtype24 = type_nitc__ASelfExpr.id;
if(cltype23 >= var19->type->table_size) {
var22 = 0;
} else {
var22 = var19->type->type_table[cltype23] == idtype24;
}
{
var25 = nitc__typing___nitc__typing__TypeVisitor___get_method(var_v, self, var_mtype, var16, var22);
}
var_itdef = var25;
if (var_itdef == NULL) {
var26 = 1; /* is null */
} else {
var26 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_itdef,((val*)NULL)) on <var_itdef:nullable CallSite> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_itdef,var_other) on <var_itdef:nullable CallSite(CallSite)> */
var31 = var_itdef == var_other;
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
var26 = var27;
}
if (var26){
if (unlikely(varonce32==NULL)) {
var33 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "Type Error: `for` expects a type providing an `iterator` method, got `";
var37 = core__flat___NativeString___to_s_full(var36, 70l, 70l);
var35 = var37;
varonce34 = var35;
}
((struct instance_core__NativeArray*)var33)->values[0]=var35;
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "`.";
var41 = core__flat___NativeString___to_s_full(var40, 2l, 2l);
var39 = var41;
varonce38 = var39;
}
((struct instance_core__NativeArray*)var33)->values[2]=var39;
} else {
var33 = varonce32;
varonce32 = NULL;
}
{
var42 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var33)->values[1]=var42;
{
var43 = ((val*(*)(val* self))(var33->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var33); /* native_to_s on <var33:NativeArray[String]>*/
}
varonce32 = var33;
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var43); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#AForGroup#method_iterator= (self,var_itdef) on <self:AForGroup> */
self->attrs[COLOR_nitc__typing__AForGroup___method_iterator].val = var_itdef; /* _method_iterator on <self:AForGroup> */
RET_LABEL44:(void)0;
}
}
{
{ /* Inline typing#CallSite#msignature (var_itdef) on <var_itdef:nullable CallSite(CallSite)> */
var47 = var_itdef->attrs[COLOR_nitc__typing__CallSite___msignature].val; /* _msignature on <var_itdef:nullable CallSite(CallSite)> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 660);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
{ /* Inline model#MSignature#return_mtype (var45) on <var45:MSignature> */
var50 = var45->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var45:MSignature> */
var48 = var50;
RET_LABEL49:(void)0;
}
}
var_ittype = var48;
if (var_ittype == NULL) {
var51 = 1; /* is null */
} else {
var51 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ittype,((val*)NULL)) on <var_ittype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_ittype,var_other) on <var_ittype:nullable MType(MType)> */
var56 = var_ittype == var_other;
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
var52 = var54;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
var51 = var52;
}
if (var51){
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = "Type Error: `for` expects the method `iterator` to return an `Iterator` or `MapIterator` type.";
var60 = core__flat___NativeString___to_s_full(var59, 94l, 94l);
var58 = var60;
varonce57 = var58;
}
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var58); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
if (likely(varonce61!=NULL)) {
var62 = varonce61;
} else {
var63 = "Iterator";
var64 = core__flat___NativeString___to_s_full(var63, 8l, 8l);
var62 = var64;
varonce61 = var62;
}
{
var65 = nitc__typing___nitc__typing__TypeVisitor___try_get_mclass(var_v, self, var62);
}
var_colit_cla = var65;
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = "MapIterator";
var69 = core__flat___NativeString___to_s_full(var68, 11l, 11l);
var67 = var69;
varonce66 = var67;
}
{
var70 = nitc__typing___nitc__typing__TypeVisitor___try_get_mclass(var_v, self, var67);
}
var_mapit_cla = var70;
var_is_col = 0;
var_is_map = 0;
if (var_colit_cla == NULL) {
var72 = 0; /* is null */
} else {
var72 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_colit_cla,((val*)NULL)) on <var_colit_cla:nullable MClass> */
var_other75 = ((val*)NULL);
{
var76 = ((short int(*)(val* self, val* p0))(var_colit_cla->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_colit_cla, var_other75); /* == on <var_colit_cla:nullable MClass(MClass)>*/
}
var77 = !var76;
var73 = var77;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
var72 = var73;
}
var_ = var72;
if (var72){
var78 = NEW_core__Array(&type_core__Array__nitc__MType);
{
core___core__Array___with_capacity(var78, 1l); /* Direct call array#Array#with_capacity on <var78:Array[MType]>*/
}
var_79 = var78;
{
{ /* Inline model#MClass#mclass_type (var_objcla) on <var_objcla:nullable MClass(MClass)> */
var82 = var_objcla->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_objcla:nullable MClass(MClass)> */
if (unlikely(var82 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 507);
fatal_exit(1);
}
var80 = var82;
RET_LABEL81:(void)0;
}
}
{
var83 = nitc___nitc__MType___as_nullable(var80);
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_79, var83); /* Direct call array#AbstractArray#push on <var_79:Array[MType]>*/
}
{
var84 = nitc___nitc__MClass___get_mtype(var_colit_cla, var_79);
}
{
var85 = nitc__typing___nitc__typing__TypeVisitor___is_subtype(var_v, var_ittype, var84);
}
var71 = var85;
} else {
var71 = var_;
}
if (var71){
{
{ /* Inline typing#TypeVisitor#mmodule (var_v) on <var_v:TypeVisitor> */
var88 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___mmodule].val; /* _mmodule on <var_v:TypeVisitor> */
if (unlikely(var88 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 37);
fatal_exit(1);
}
var86 = var88;
RET_LABEL87:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#anchor (var_v) on <var_v:TypeVisitor> */
var91 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___anchor].val; /* _anchor on <var_v:TypeVisitor> */
var89 = var91;
RET_LABEL90:(void)0;
}
}
{
var92 = nitc___nitc__MType___supertype_to(var_ittype, var86, var89, var_colit_cla);
}
var_coltype = var92;
{
{ /* Inline scope#AForGroup#variables (self) on <self:AForGroup> */
var95 = self->attrs[COLOR_nitc__scope__AForGroup___variables].val; /* _variables on <self:AForGroup> */
var93 = var95;
RET_LABEL94:(void)0;
}
}
var_variables = var93;
if (var_variables == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1215);
fatal_exit(1);
} else {
{ /* Inline array#AbstractArrayRead#length (var_variables) on <var_variables:nullable Array[Variable]> */
if (unlikely(var_variables == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 26);
fatal_exit(1);
}
var98 = var_variables->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_variables:nullable Array[Variable]> */
var96 = var98;
RET_LABEL97:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var96,1l) on <var96:Int> */
var101 = var96 == 1l;
var102 = !var101;
var99 = var102;
goto RET_LABEL100;
RET_LABEL100:(void)0;
}
}
if (var99){
if (likely(varonce103!=NULL)) {
var104 = varonce103;
} else {
var105 = "Type Error: `for` expects only one variable when using `Iterator`.";
var106 = core__flat___NativeString___to_s_full(var105, 66l, 66l);
var104 = var106;
varonce103 = var104;
}
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var104); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
} else {
if (var_variables == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1218);
fatal_exit(1);
} else {
var107 = core___core__SequenceRead___Collection__first(var_variables);
}
{
var108 = ((val*(*)(val* self))(var_coltype->class->vft[COLOR_nitc__model__MClassType__arguments]))(var_coltype); /* arguments on <var_coltype:MClassType>*/
}
{
var109 = core___core__SequenceRead___Collection__first(var108);
}
{
{ /* Inline typing#Variable#declared_type= (var107,var109) on <var107:nullable Object(Variable)> */
var107->attrs[COLOR_nitc__typing__Variable___declared_type].val = var109; /* _declared_type on <var107:nullable Object(Variable)> */
RET_LABEL110:(void)0;
}
}
}
var_is_col = 1;
} else {
}
if (var_mapit_cla == NULL) {
var112 = 0; /* is null */
} else {
var112 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mapit_cla,((val*)NULL)) on <var_mapit_cla:nullable MClass> */
var_other75 = ((val*)NULL);
{
var115 = ((short int(*)(val* self, val* p0))(var_mapit_cla->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mapit_cla, var_other75); /* == on <var_mapit_cla:nullable MClass(MClass)>*/
}
var116 = !var115;
var113 = var116;
goto RET_LABEL114;
RET_LABEL114:(void)0;
}
var112 = var113;
}
var_117 = var112;
if (var112){
var118 = NEW_core__Array(&type_core__Array__nitc__MType);
{
core___core__Array___with_capacity(var118, 2l); /* Direct call array#Array#with_capacity on <var118:Array[MType]>*/
}
var_119 = var118;
{
{ /* Inline model#MClass#mclass_type (var_objcla) on <var_objcla:nullable MClass(MClass)> */
var122 = var_objcla->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_objcla:nullable MClass(MClass)> */
if (unlikely(var122 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 507);
fatal_exit(1);
}
var120 = var122;
RET_LABEL121:(void)0;
}
}
{
var123 = nitc___nitc__MType___as_nullable(var120);
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_119, var123); /* Direct call array#AbstractArray#push on <var_119:Array[MType]>*/
}
{
{ /* Inline model#MClass#mclass_type (var_objcla) on <var_objcla:nullable MClass(MClass)> */
var126 = var_objcla->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_objcla:nullable MClass(MClass)> */
if (unlikely(var126 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 507);
fatal_exit(1);
}
var124 = var126;
RET_LABEL125:(void)0;
}
}
{
var127 = nitc___nitc__MType___as_nullable(var124);
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_119, var127); /* Direct call array#AbstractArray#push on <var_119:Array[MType]>*/
}
{
var128 = nitc___nitc__MClass___get_mtype(var_mapit_cla, var_119);
}
{
var129 = nitc__typing___nitc__typing__TypeVisitor___is_subtype(var_v, var_ittype, var128);
}
var111 = var129;
} else {
var111 = var_117;
}
if (var111){
{
{ /* Inline typing#TypeVisitor#mmodule (var_v) on <var_v:TypeVisitor> */
var132 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___mmodule].val; /* _mmodule on <var_v:TypeVisitor> */
if (unlikely(var132 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 37);
fatal_exit(1);
}
var130 = var132;
RET_LABEL131:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#anchor (var_v) on <var_v:TypeVisitor> */
var135 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___anchor].val; /* _anchor on <var_v:TypeVisitor> */
var133 = var135;
RET_LABEL134:(void)0;
}
}
{
var136 = nitc___nitc__MType___supertype_to(var_ittype, var130, var133, var_mapit_cla);
}
var_coltype137 = var136;
{
{ /* Inline scope#AForGroup#variables (self) on <self:AForGroup> */
var140 = self->attrs[COLOR_nitc__scope__AForGroup___variables].val; /* _variables on <self:AForGroup> */
var138 = var140;
RET_LABEL139:(void)0;
}
}
var_variables141 = var138;
if (var_variables141 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1227);
fatal_exit(1);
} else {
{ /* Inline array#AbstractArrayRead#length (var_variables141) on <var_variables141:nullable Array[Variable]> */
if (unlikely(var_variables141 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 26);
fatal_exit(1);
}
var144 = var_variables141->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_variables141:nullable Array[Variable]> */
var142 = var144;
RET_LABEL143:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var142,2l) on <var142:Int> */
var147 = var142 == 2l;
var148 = !var147;
var145 = var148;
goto RET_LABEL146;
RET_LABEL146:(void)0;
}
}
if (var145){
if (likely(varonce149!=NULL)) {
var150 = varonce149;
} else {
var151 = "Type Error: `for` expects two variables when using `MapIterator`.";
var152 = core__flat___NativeString___to_s_full(var151, 65l, 65l);
var150 = var152;
varonce149 = var150;
}
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var150); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
} else {
if (var_variables141 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1230);
fatal_exit(1);
} else {
var153 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_variables141, 0l);
}
{
var154 = ((val*(*)(val* self))(var_coltype137->class->vft[COLOR_nitc__model__MClassType__arguments]))(var_coltype137); /* arguments on <var_coltype137:MClassType>*/
}
{
var155 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var154, 0l);
}
{
{ /* Inline typing#Variable#declared_type= (var153,var155) on <var153:nullable Object(Variable)> */
var153->attrs[COLOR_nitc__typing__Variable___declared_type].val = var155; /* _declared_type on <var153:nullable Object(Variable)> */
RET_LABEL156:(void)0;
}
}
if (var_variables141 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1231);
fatal_exit(1);
} else {
var157 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_variables141, 1l);
}
{
var158 = ((val*(*)(val* self))(var_coltype137->class->vft[COLOR_nitc__model__MClassType__arguments]))(var_coltype137); /* arguments on <var_coltype137:MClassType>*/
}
{
var159 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var158, 1l);
}
{
{ /* Inline typing#Variable#declared_type= (var157,var159) on <var157:nullable Object(Variable)> */
var157->attrs[COLOR_nitc__typing__Variable___declared_type].val = var159; /* _declared_type on <var157:nullable Object(Variable)> */
RET_LABEL160:(void)0;
}
}
}
var_is_map = 1;
} else {
}
var162 = !var_is_col;
var_163 = var162;
if (var162){
var164 = !var_is_map;
var161 = var164;
} else {
var161 = var_163;
}
if (var161){
if (likely(varonce165!=NULL)) {
var166 = varonce165;
} else {
var167 = "Type Error: `for` expects the method `iterator` to return an `Iterator` or `MapIterator` type.";
var168 = core__flat___NativeString___to_s_full(var167, 94l, 94l);
var166 = var168;
varonce165 = var166;
}
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var166); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
var169 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType>*/
}
if (var169){
{
var170 = nitc__typing___nitc__typing__TypeVisitor___anchor_to(var_v, var_mtype);
}
var_mtype = var170;
} else {
}
{
var171 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__undecorate]))(var_mtype); /* undecorate on <var_mtype:MType>*/
}
var_mtype = var171;
/* <var_mtype:MType> isa MClassType */
cltype173 = type_nitc__MClassType.color;
idtype174 = type_nitc__MClassType.id;
if(cltype173 >= var_mtype->type->table_size) {
var172 = 0;
} else {
var172 = var_mtype->type->type_table[cltype173] == idtype174;
}
if (unlikely(!var172)) {
var_class_name = var_mtype == NULL ? "null" : var_mtype->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1245);
fatal_exit(1);
}
{
{ /* Inline typing#AForGroup#coltype= (self,var_mtype) on <self:AForGroup> */
self->attrs[COLOR_nitc__typing__AForGroup___coltype].val = var_mtype; /* _coltype on <self:AForGroup> */
RET_LABEL175:(void)0;
}
}
if (likely(varonce176!=NULL)) {
var177 = varonce176;
} else {
var178 = "is_ok";
var179 = core__flat___NativeString___to_s_full(var178, 5l, 5l);
var177 = var179;
varonce176 = var177;
}
{
var180 = nitc__typing___nitc__typing__TypeVisitor___get_method(var_v, self, var_ittype, var177, 0);
}
var_ikdef = var180;
if (var_ikdef == NULL) {
var181 = 1; /* is null */
} else {
var181 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ikdef,((val*)NULL)) on <var_ikdef:nullable CallSite> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_ikdef,var_other) on <var_ikdef:nullable CallSite(CallSite)> */
var186 = var_ikdef == var_other;
var184 = var186;
goto RET_LABEL185;
RET_LABEL185:(void)0;
}
}
var182 = var184;
goto RET_LABEL183;
RET_LABEL183:(void)0;
}
var181 = var182;
}
if (var181){
if (unlikely(varonce187==NULL)) {
var188 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce189!=NULL)) {
var190 = varonce189;
} else {
var191 = "Type Error: `for` expects a method `is_ok` in type `";
var192 = core__flat___NativeString___to_s_full(var191, 52l, 52l);
var190 = var192;
varonce189 = var190;
}
((struct instance_core__NativeArray*)var188)->values[0]=var190;
if (likely(varonce193!=NULL)) {
var194 = varonce193;
} else {
var195 = "`.";
var196 = core__flat___NativeString___to_s_full(var195, 2l, 2l);
var194 = var196;
varonce193 = var194;
}
((struct instance_core__NativeArray*)var188)->values[2]=var194;
} else {
var188 = varonce187;
varonce187 = NULL;
}
{
var197 = ((val*(*)(val* self))(var_ittype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_ittype); /* to_s on <var_ittype:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var188)->values[1]=var197;
{
var198 = ((val*(*)(val* self))(var188->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var188); /* native_to_s on <var188:NativeArray[String]>*/
}
varonce187 = var188;
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var198); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#AForGroup#method_is_ok= (self,var_ikdef) on <self:AForGroup> */
self->attrs[COLOR_nitc__typing__AForGroup___method_is_ok].val = var_ikdef; /* _method_is_ok on <self:AForGroup> */
RET_LABEL199:(void)0;
}
}
if (likely(varonce200!=NULL)) {
var201 = varonce200;
} else {
var202 = "item";
var203 = core__flat___NativeString___to_s_full(var202, 4l, 4l);
var201 = var203;
varonce200 = var201;
}
{
var204 = nitc__typing___nitc__typing__TypeVisitor___get_method(var_v, self, var_ittype, var201, 0);
}
var_itemdef = var204;
if (var_itemdef == NULL) {
var205 = 1; /* is null */
} else {
var205 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_itemdef,((val*)NULL)) on <var_itemdef:nullable CallSite> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_itemdef,var_other) on <var_itemdef:nullable CallSite(CallSite)> */
var210 = var_itemdef == var_other;
var208 = var210;
goto RET_LABEL209;
RET_LABEL209:(void)0;
}
}
var206 = var208;
goto RET_LABEL207;
RET_LABEL207:(void)0;
}
var205 = var206;
}
if (var205){
if (unlikely(varonce211==NULL)) {
var212 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce213!=NULL)) {
var214 = varonce213;
} else {
var215 = "Type Error: `for` expects a method `item` in type `";
var216 = core__flat___NativeString___to_s_full(var215, 51l, 51l);
var214 = var216;
varonce213 = var214;
}
((struct instance_core__NativeArray*)var212)->values[0]=var214;
if (likely(varonce217!=NULL)) {
var218 = varonce217;
} else {
var219 = "`.";
var220 = core__flat___NativeString___to_s_full(var219, 2l, 2l);
var218 = var220;
varonce217 = var218;
}
((struct instance_core__NativeArray*)var212)->values[2]=var218;
} else {
var212 = varonce211;
varonce211 = NULL;
}
{
var221 = ((val*(*)(val* self))(var_ittype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_ittype); /* to_s on <var_ittype:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var212)->values[1]=var221;
{
var222 = ((val*(*)(val* self))(var212->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var212); /* native_to_s on <var212:NativeArray[String]>*/
}
varonce211 = var212;
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var222); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#AForGroup#method_item= (self,var_itemdef) on <self:AForGroup> */
self->attrs[COLOR_nitc__typing__AForGroup___method_item].val = var_itemdef; /* _method_item on <self:AForGroup> */
RET_LABEL223:(void)0;
}
}
if (likely(varonce224!=NULL)) {
var225 = varonce224;
} else {
var226 = "next";
var227 = core__flat___NativeString___to_s_full(var226, 4l, 4l);
var225 = var227;
varonce224 = var225;
}
{
var228 = nitc__typing___nitc__typing__TypeVisitor___get_method(var_v, self, var_ittype, var225, 0);
}
var_nextdef = var228;
if (var_nextdef == NULL) {
var229 = 1; /* is null */
} else {
var229 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nextdef,((val*)NULL)) on <var_nextdef:nullable CallSite> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_nextdef,var_other) on <var_nextdef:nullable CallSite(CallSite)> */
var234 = var_nextdef == var_other;
var232 = var234;
goto RET_LABEL233;
RET_LABEL233:(void)0;
}
}
var230 = var232;
goto RET_LABEL231;
RET_LABEL231:(void)0;
}
var229 = var230;
}
if (var229){
if (unlikely(varonce235==NULL)) {
var236 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce237!=NULL)) {
var238 = varonce237;
} else {
var239 = "Type Error: `for` expects a method `next` in type ";
var240 = core__flat___NativeString___to_s_full(var239, 50l, 50l);
var238 = var240;
varonce237 = var238;
}
((struct instance_core__NativeArray*)var236)->values[0]=var238;
if (likely(varonce241!=NULL)) {
var242 = varonce241;
} else {
var243 = ".";
var244 = core__flat___NativeString___to_s_full(var243, 1l, 1l);
var242 = var244;
varonce241 = var242;
}
((struct instance_core__NativeArray*)var236)->values[2]=var242;
} else {
var236 = varonce235;
varonce235 = NULL;
}
{
var245 = ((val*(*)(val* self))(var_ittype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_ittype); /* to_s on <var_ittype:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var236)->values[1]=var245;
{
var246 = ((val*(*)(val* self))(var236->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var236); /* native_to_s on <var236:NativeArray[String]>*/
}
varonce235 = var236;
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var246); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#AForGroup#method_next= (self,var_nextdef) on <self:AForGroup> */
self->attrs[COLOR_nitc__typing__AForGroup___method_next].val = var_nextdef; /* _method_next on <self:AForGroup> */
RET_LABEL247:(void)0;
}
}
if (likely(varonce248!=NULL)) {
var249 = varonce248;
} else {
var250 = "finish";
var251 = core__flat___NativeString___to_s_full(var250, 6l, 6l);
var249 = var251;
varonce248 = var249;
}
{
var252 = nitc__typing___nitc__typing__TypeVisitor___try_get_method(var_v, self, var_ittype, var249, 0);
}
{
{ /* Inline typing#AForGroup#method_finish= (self,var252) on <self:AForGroup> */
self->attrs[COLOR_nitc__typing__AForGroup___method_finish].val = var252; /* _method_finish on <self:AForGroup> */
RET_LABEL253:(void)0;
}
}
if (var_is_map){
if (likely(varonce254!=NULL)) {
var255 = varonce254;
} else {
var256 = "key";
var257 = core__flat___NativeString___to_s_full(var256, 3l, 3l);
var255 = var257;
varonce254 = var255;
}
{
var258 = nitc__typing___nitc__typing__TypeVisitor___get_method(var_v, self, var_ittype, var255, 0);
}
var_keydef = var258;
if (var_keydef == NULL) {
var259 = 1; /* is null */
} else {
var259 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_keydef,((val*)NULL)) on <var_keydef:nullable CallSite> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_keydef,var_other) on <var_keydef:nullable CallSite(CallSite)> */
var264 = var_keydef == var_other;
var262 = var264;
goto RET_LABEL263;
RET_LABEL263:(void)0;
}
}
var260 = var262;
goto RET_LABEL261;
RET_LABEL261:(void)0;
}
var259 = var260;
}
if (var259){
if (unlikely(varonce265==NULL)) {
var266 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce267!=NULL)) {
var268 = varonce267;
} else {
var269 = "Type Error: `for` expects a method `key` in type `";
var270 = core__flat___NativeString___to_s_full(var269, 50l, 50l);
var268 = var270;
varonce267 = var268;
}
((struct instance_core__NativeArray*)var266)->values[0]=var268;
if (likely(varonce271!=NULL)) {
var272 = varonce271;
} else {
var273 = "`.";
var274 = core__flat___NativeString___to_s_full(var273, 2l, 2l);
var272 = var274;
varonce271 = var272;
}
((struct instance_core__NativeArray*)var266)->values[2]=var272;
} else {
var266 = varonce265;
varonce265 = NULL;
}
{
var275 = ((val*(*)(val* self))(var_ittype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_ittype); /* to_s on <var_ittype:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var266)->values[1]=var275;
{
var276 = ((val*(*)(val* self))(var266->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var266); /* native_to_s on <var266:NativeArray[String]>*/
}
varonce265 = var266;
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var276); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#AForGroup#method_key= (self,var_keydef) on <self:AForGroup> */
self->attrs[COLOR_nitc__typing__AForGroup___method_key].val = var_keydef; /* _method_key on <self:AForGroup> */
RET_LABEL277:(void)0;
}
}
} else {
}
{
{ /* Inline scope#AForGroup#variables (self) on <self:AForGroup> */
var281 = self->attrs[COLOR_nitc__scope__AForGroup___variables].val; /* _variables on <self:AForGroup> */
var279 = var281;
RET_LABEL280:(void)0;
}
}
if (var279 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1280);
fatal_exit(1);
} else {
{ /* Inline array#AbstractArrayRead#length (var279) on <var279:nullable Array[Variable]> */
if (unlikely(var279 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 26);
fatal_exit(1);
}
var284 = var279->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var279:nullable Array[Variable]> */
var282 = var284;
RET_LABEL283:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var282,1l) on <var282:Int> */
var287 = var282 == 1l;
var285 = var287;
goto RET_LABEL286;
RET_LABEL286:(void)0;
}
}
var_288 = var285;
if (var285){
{
{ /* Inline parser_nodes#AForGroup#n_expr (self) on <self:AForGroup> */
var291 = self->attrs[COLOR_nitc__parser_nodes__AForGroup___n_expr].val; /* _n_expr on <self:AForGroup> */
if (unlikely(var291 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1943);
fatal_exit(1);
}
var289 = var291;
RET_LABEL290:(void)0;
}
}
/* <var289:AExpr> isa ARangeExpr */
cltype293 = type_nitc__ARangeExpr.color;
idtype294 = type_nitc__ARangeExpr.id;
if(cltype293 >= var289->type->table_size) {
var292 = 0;
} else {
var292 = var289->type->type_table[cltype293] == idtype294;
}
var278 = var292;
} else {
var278 = var_288;
}
if (var278){
{
{ /* Inline scope#AForGroup#variables (self) on <self:AForGroup> */
var297 = self->attrs[COLOR_nitc__scope__AForGroup___variables].val; /* _variables on <self:AForGroup> */
var295 = var297;
RET_LABEL296:(void)0;
}
}
if (var295 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1281);
fatal_exit(1);
} else {
var298 = core___core__SequenceRead___Collection__first(var295);
}
var_variable = var298;
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:Variable> */
var301 = var_variable->attrs[COLOR_nitc__typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var299 = var301;
RET_LABEL300:(void)0;
}
}
if (unlikely(var299 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1282);
fatal_exit(1);
}
var_vtype = var299;
{
{ /* Inline parser_nodes#AForGroup#n_expr (self) on <self:AForGroup> */
var304 = self->attrs[COLOR_nitc__parser_nodes__AForGroup___n_expr].val; /* _n_expr on <self:AForGroup> */
if (unlikely(var304 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1943);
fatal_exit(1);
}
var302 = var304;
RET_LABEL303:(void)0;
}
}
/* <var302:AExpr> isa AOrangeExpr */
cltype306 = type_nitc__AOrangeExpr.color;
idtype307 = type_nitc__AOrangeExpr.id;
if(cltype306 >= var302->type->table_size) {
var305 = 0;
} else {
var305 = var302->type->type_table[cltype306] == idtype307;
}
if (var305){
if (likely(varonce308!=NULL)) {
var309 = varonce308;
} else {
var310 = "<";
var311 = core__flat___NativeString___to_s_full(var310, 1l, 1l);
var309 = var311;
varonce308 = var309;
}
{
var312 = nitc__typing___nitc__typing__TypeVisitor___get_method(var_v, self, var_vtype, var309, 0);
}
{
{ /* Inline typing#AForGroup#method_lt= (self,var312) on <self:AForGroup> */
self->attrs[COLOR_nitc__typing__AForGroup___method_lt].val = var312; /* _method_lt on <self:AForGroup> */
RET_LABEL313:(void)0;
}
}
} else {
if (likely(varonce314!=NULL)) {
var315 = varonce314;
} else {
var316 = "<=";
var317 = core__flat___NativeString___to_s_full(var316, 2l, 2l);
var315 = var317;
varonce314 = var315;
}
{
var318 = nitc__typing___nitc__typing__TypeVisitor___get_method(var_v, self, var_vtype, var315, 0);
}
{
{ /* Inline typing#AForGroup#method_lt= (self,var318) on <self:AForGroup> */
self->attrs[COLOR_nitc__typing__AForGroup___method_lt].val = var318; /* _method_lt on <self:AForGroup> */
RET_LABEL319:(void)0;
}
}
}
if (likely(varonce320!=NULL)) {
var321 = varonce320;
} else {
var322 = "successor";
var323 = core__flat___NativeString___to_s_full(var322, 9l, 9l);
var321 = var323;
varonce320 = var321;
}
{
var324 = nitc__typing___nitc__typing__TypeVisitor___get_method(var_v, self, var_vtype, var321, 0);
}
{
{ /* Inline typing#AForGroup#method_successor= (self,var324) on <self:AForGroup> */
self->attrs[COLOR_nitc__typing__AForGroup___method_successor].val = var324; /* _method_successor on <self:AForGroup> */
RET_LABEL325:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method typing#AWithExpr#method_start for (self: AWithExpr): nullable CallSite */
val* nitc__typing___AWithExpr___method_start(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nitc__typing__AWithExpr___method_start].val; /* _method_start on <self:AWithExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AWithExpr#method_start= for (self: AWithExpr, nullable CallSite) */
void nitc__typing___AWithExpr___method_start_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__AWithExpr___method_start].val = p0; /* _method_start on <self:AWithExpr> */
RET_LABEL:;
}
/* method typing#AWithExpr#method_finish for (self: AWithExpr): nullable CallSite */
val* nitc__typing___AWithExpr___method_finish(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nitc__typing__AWithExpr___method_finish].val; /* _method_finish on <self:AWithExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AWithExpr#method_finish= for (self: AWithExpr, nullable CallSite) */
void nitc__typing___AWithExpr___method_finish_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__AWithExpr___method_finish].val = p0; /* _method_finish on <self:AWithExpr> */
RET_LABEL:;
}
/* method typing#AWithExpr#accept_typing for (self: AWithExpr, TypeVisitor) */
void nitc__typing___AWithExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : String */;
val* var13 /* : AExpr */;
val* var15 /* : AExpr */;
short int var16 /* : Bool */;
int cltype;
int idtype;
val* var17 /* : nullable CallSite */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
val* var22 /* : String */;
val* var23 /* : AExpr */;
val* var25 /* : AExpr */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : nullable CallSite */;
val* var31 /* : nullable AExpr */;
val* var33 /* : nullable AExpr */;
val* var34 /* : nullable AExpr */;
val* var36 /* : nullable AExpr */;
val* var37 /* : nullable MType */;
var_v = p0;
{
{ /* Inline parser_nodes#AWithExpr#n_expr (self) on <self:AWithExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AWithExpr___n_expr].val; /* _n_expr on <self:AWithExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1955);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__typing___nitc__typing__TypeVisitor___visit_expr(var_v, var);
}
var_mtype = var3;
if (var_mtype == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var9 = var_mtype == var_other;
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
goto RET_LABEL;
} else {
}
if (likely(varonce!=NULL)) {
var10 = varonce;
} else {
var11 = "start";
var12 = core__flat___NativeString___to_s_full(var11, 5l, 5l);
var10 = var12;
varonce = var10;
}
{
{ /* Inline parser_nodes#AWithExpr#n_expr (self) on <self:AWithExpr> */
var15 = self->attrs[COLOR_nitc__parser_nodes__AWithExpr___n_expr].val; /* _n_expr on <self:AWithExpr> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1955);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
/* <var13:AExpr> isa ASelfExpr */
cltype = type_nitc__ASelfExpr.color;
idtype = type_nitc__ASelfExpr.id;
if(cltype >= var13->type->table_size) {
var16 = 0;
} else {
var16 = var13->type->type_table[cltype] == idtype;
}
{
var17 = nitc__typing___nitc__typing__TypeVisitor___get_method(var_v, self, var_mtype, var10, var16);
}
{
{ /* Inline typing#AWithExpr#method_start= (self,var17) on <self:AWithExpr> */
self->attrs[COLOR_nitc__typing__AWithExpr___method_start].val = var17; /* _method_start on <self:AWithExpr> */
RET_LABEL18:(void)0;
}
}
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "finish";
var22 = core__flat___NativeString___to_s_full(var21, 6l, 6l);
var20 = var22;
varonce19 = var20;
}
{
{ /* Inline parser_nodes#AWithExpr#n_expr (self) on <self:AWithExpr> */
var25 = self->attrs[COLOR_nitc__parser_nodes__AWithExpr___n_expr].val; /* _n_expr on <self:AWithExpr> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1955);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
/* <var23:AExpr> isa ASelfExpr */
cltype27 = type_nitc__ASelfExpr.color;
idtype28 = type_nitc__ASelfExpr.id;
if(cltype27 >= var23->type->table_size) {
var26 = 0;
} else {
var26 = var23->type->type_table[cltype27] == idtype28;
}
{
var29 = nitc__typing___nitc__typing__TypeVisitor___get_method(var_v, self, var_mtype, var20, var26);
}
{
{ /* Inline typing#AWithExpr#method_finish= (self,var29) on <self:AWithExpr> */
self->attrs[COLOR_nitc__typing__AWithExpr___method_finish].val = var29; /* _method_finish on <self:AWithExpr> */
RET_LABEL30:(void)0;
}
}
{
{ /* Inline parser_nodes#AWithExpr#n_block (self) on <self:AWithExpr> */
var33 = self->attrs[COLOR_nitc__parser_nodes__AWithExpr___n_block].val; /* _n_block on <self:AWithExpr> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
nitc__typing___nitc__typing__TypeVisitor___visit_stmt(var_v, var31); /* Direct call typing#TypeVisitor#visit_stmt on <var_v:TypeVisitor>*/
}
{
{ /* Inline parser_nodes#AWithExpr#n_block (self) on <self:AWithExpr> */
var36 = self->attrs[COLOR_nitc__parser_nodes__AWithExpr___n_block].val; /* _n_block on <self:AWithExpr> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
if (var34 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1308);
fatal_exit(1);
} else {
var37 = ((val*(*)(val* self))(var34->class->vft[COLOR_nitc__typing__AExpr__mtype]))(var34); /* mtype on <var34:nullable AExpr>*/
}
{
{ /* Inline typing#AExpr#mtype= (self,var37) on <self:AWithExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var37; /* _mtype on <self:AWithExpr> */
RET_LABEL38:(void)0;
}
}
{
{ /* Inline typing#AExpr#is_typed= (self,1) on <self:AWithExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = 1; /* _is_typed on <self:AWithExpr> */
RET_LABEL39:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AAssertExpr#accept_typing for (self: AAssertExpr, TypeVisitor) */
void nitc__typing___AAssertExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var4 /* : nullable AExpr */;
val* var6 /* : nullable AExpr */;
var_v = p0;
{
{ /* Inline parser_nodes#AAssertExpr#n_expr (self) on <self:AAssertExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AAssertExpr___n_expr].val; /* _n_expr on <self:AAssertExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1975);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_bool(var_v, var);
}
{
{ /* Inline parser_nodes#AAssertExpr#n_else (self) on <self:AAssertExpr> */
var6 = self->attrs[COLOR_nitc__parser_nodes__AAssertExpr___n_else].val; /* _n_else on <self:AAssertExpr> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
nitc__typing___nitc__typing__TypeVisitor___visit_stmt(var_v, var4); /* Direct call typing#TypeVisitor#visit_stmt on <var_v:TypeVisitor>*/
}
{
{ /* Inline typing#AExpr#is_typed= (self,1) on <self:AAssertExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = 1; /* _is_typed on <self:AAssertExpr> */
RET_LABEL7:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AOrExpr#accept_typing for (self: AOrExpr, TypeVisitor) */
void nitc__typing___AOrExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var4 /* : AExpr */;
val* var6 /* : AExpr */;
val* var7 /* : nullable MType */;
val* var8 /* : nullable MType */;
var_v = p0;
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr (self) on <self:AOrExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AOrExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2050);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_bool(var_v, var);
}
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr2 (self) on <self:AOrExpr> */
var6 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AOrExpr> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2056);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_bool(var_v, var4);
}
{
var8 = nitc__typing___nitc__typing__TypeVisitor___type_bool(var_v, self);
}
{
{ /* Inline typing#AExpr#mtype= (self,var8) on <self:AOrExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var8; /* _mtype on <self:AOrExpr> */
RET_LABEL9:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AImpliesExpr#accept_typing for (self: AImpliesExpr, TypeVisitor) */
void nitc__typing___AImpliesExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var4 /* : AExpr */;
val* var6 /* : AExpr */;
val* var7 /* : nullable MType */;
val* var8 /* : nullable MType */;
var_v = p0;
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr (self) on <self:AImpliesExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AImpliesExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2050);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_bool(var_v, var);
}
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr2 (self) on <self:AImpliesExpr> */
var6 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AImpliesExpr> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2056);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_bool(var_v, var4);
}
{
var8 = nitc__typing___nitc__typing__TypeVisitor___type_bool(var_v, self);
}
{
{ /* Inline typing#AExpr#mtype= (self,var8) on <self:AImpliesExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var8; /* _mtype on <self:AImpliesExpr> */
RET_LABEL9:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AAndExpr#accept_typing for (self: AAndExpr, TypeVisitor) */
void nitc__typing___AAndExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var4 /* : AExpr */;
val* var6 /* : AExpr */;
val* var7 /* : nullable MType */;
val* var8 /* : nullable MType */;
var_v = p0;
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr (self) on <self:AAndExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AAndExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2050);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_bool(var_v, var);
}
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr2 (self) on <self:AAndExpr> */
var6 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AAndExpr> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2056);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_bool(var_v, var4);
}
{
var8 = nitc__typing___nitc__typing__TypeVisitor___type_bool(var_v, self);
}
{
{ /* Inline typing#AExpr#mtype= (self,var8) on <self:AAndExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var8; /* _mtype on <self:AAndExpr> */
RET_LABEL9:(void)0;
}
}
RET_LABEL:;
}
/* method typing#ANotExpr#accept_typing for (self: ANotExpr, TypeVisitor) */
void nitc__typing___ANotExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var4 /* : nullable MType */;
var_v = p0;
{
{ /* Inline parser_nodes#ANotExpr#n_expr (self) on <self:ANotExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ANotExpr___n_expr].val; /* _n_expr on <self:ANotExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2090);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_bool(var_v, var);
}
{
var4 = nitc__typing___nitc__typing__TypeVisitor___type_bool(var_v, self);
}
{
{ /* Inline typing#AExpr#mtype= (self,var4) on <self:ANotExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var4; /* _mtype on <self:ANotExpr> */
RET_LABEL5:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AOrElseExpr#accept_typing for (self: AOrElseExpr, TypeVisitor) */
void nitc__typing___AOrElseExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var_t1 /* var t1: nullable MType */;
val* var4 /* : AExpr */;
val* var6 /* : AExpr */;
val* var7 /* : nullable MType */;
val* var_t2 /* var t2: nullable MType */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var_ /* var : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
int cltype;
int idtype;
short int var23 /* : Bool */;
val* var24 /* : MType */;
val* var25 /* : Array[MType] */;
val* var_26 /* var : Array[MType] */;
val* var27 /* : nullable MType */;
val* var_t /* var t: nullable MType */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
static val* varonce;
val* var34 /* : String */;
char* var35 /* : NativeString */;
val* var36 /* : String */;
val* var37 /* : nullable MClass */;
val* var_c /* var c: nullable MClass */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
val* var44 /* : MClassType */;
val* var46 /* : MClassType */;
short int var47 /* : Bool */;
val* var48 /* : MType */;
var_v = p0;
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr (self) on <self:AOrElseExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AOrElseExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2050);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__typing___nitc__typing__TypeVisitor___visit_expr(var_v, var);
}
var_t1 = var3;
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr2 (self) on <self:AOrElseExpr> */
var6 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AOrElseExpr> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2056);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nitc__typing___nitc__typing__TypeVisitor___visit_expr(var_v, var4);
}
var_t2 = var7;
if (var_t1 == NULL) {
var9 = 1; /* is null */
} else {
var9 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t1,((val*)NULL)) on <var_t1:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_t1,var_other) on <var_t1:nullable MType(MType)> */
var14 = var_t1 == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
var_ = var9;
if (var9){
var8 = var_;
} else {
if (var_t2 == NULL) {
var15 = 1; /* is null */
} else {
var15 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t2,((val*)NULL)) on <var_t2:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_t2,var_other) on <var_t2:nullable MType(MType)> */
var20 = var_t2 == var_other;
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
var8 = var15;
}
if (var8){
goto RET_LABEL;
} else {
}
/* <var_t1:nullable MType(MType)> isa MNullType */
cltype = type_nitc__MNullType.color;
idtype = type_nitc__MNullType.id;
if(cltype >= var_t1->type->table_size) {
var21 = 0;
} else {
var21 = var_t1->type->type_table[cltype] == idtype;
}
if (var21){
{
{ /* Inline typing#AExpr#mtype= (self,var_t2) on <self:AOrElseExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var_t2; /* _mtype on <self:AOrElseExpr> */
RET_LABEL22:(void)0;
}
}
goto RET_LABEL;
} else {
{
var23 = nitc__typing___nitc__typing__TypeVisitor___can_be_null(var_v, var_t1);
}
if (var23){
{
var24 = ((val*(*)(val* self))(var_t1->class->vft[COLOR_nitc__model__MType__as_notnull]))(var_t1); /* as_notnull on <var_t1:nullable MType(MType)>*/
}
var_t1 = var24;
} else {
}
}
var25 = NEW_core__Array(&type_core__Array__nitc__MType);
{
core___core__Array___with_capacity(var25, 2l); /* Direct call array#Array#with_capacity on <var25:Array[MType]>*/
}
var_26 = var25;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_26, var_t1); /* Direct call array#AbstractArray#push on <var_26:Array[MType]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_26, var_t2); /* Direct call array#AbstractArray#push on <var_26:Array[MType]>*/
}
{
var27 = nitc__typing___nitc__typing__TypeVisitor___merge_types(var_v, self, var_26);
}
var_t = var27;
if (var_t == NULL) {
var28 = 1; /* is null */
} else {
var28 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t,((val*)NULL)) on <var_t:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_t,var_other) on <var_t:nullable MType(MType)> */
var33 = var_t == var_other;
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
var28 = var29;
}
if (var28){
if (likely(varonce!=NULL)) {
var34 = varonce;
} else {
var35 = "Object";
var36 = core__flat___NativeString___to_s_full(var35, 6l, 6l);
var34 = var36;
varonce = var34;
}
{
var37 = nitc__typing___nitc__typing__TypeVisitor___get_mclass(var_v, self, var34);
}
var_c = var37;
if (var_c == NULL) {
var38 = 1; /* is null */
} else {
var38 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_c,((val*)NULL)) on <var_c:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_c,var_other) on <var_c:nullable MClass(MClass)> */
var43 = var_c == var_other;
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
var38 = var39;
}
if (var38){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClass#mclass_type (var_c) on <var_c:nullable MClass(MClass)> */
var46 = var_c->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_c:nullable MClass(MClass)> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 507);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
var_t = var44;
{
var47 = nitc__typing___nitc__typing__TypeVisitor___can_be_null(var_v, var_t2);
}
if (var47){
{
var48 = nitc___nitc__MType___as_nullable(var_t);
}
var_t = var48;
} else {
}
} else {
}
{
{ /* Inline typing#AExpr#mtype= (self,var_t) on <self:AOrElseExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var_t; /* _mtype on <self:AOrElseExpr> */
RET_LABEL49:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AOrElseExpr#accept_post_typing for (self: AOrElseExpr, TypeVisitor) */
void nitc__typing___AOrElseExpr___ANode__accept_post_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var_t1 /* var t1: nullable MType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : AExpr */;
val* var12 /* : AExpr */;
short int var13 /* : Bool */;
var_v = p0;
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr (self) on <self:AOrElseExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AOrElseExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2050);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = ((val*(*)(val* self))(var->class->vft[COLOR_nitc__typing__AExpr__mtype]))(var); /* mtype on <var:AExpr>*/
}
var_t1 = var3;
if (var_t1 == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t1,((val*)NULL)) on <var_t1:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_t1,var_other) on <var_t1:nullable MType(MType)> */
var9 = var_t1 == var_other;
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
goto RET_LABEL;
} else {
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr (self) on <self:AOrElseExpr> */
var12 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AOrElseExpr> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2050);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = nitc__typing___nitc__typing__TypeVisitor___check_can_be_null(var_v, var10, var_t1);
}
}
RET_LABEL:;
}
/* method typing#ATrueExpr#accept_typing for (self: ATrueExpr, TypeVisitor) */
void nitc__typing___ATrueExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MType */;
var_v = p0;
{
var = nitc__typing___nitc__typing__TypeVisitor___type_bool(var_v, self);
}
{
{ /* Inline typing#AExpr#mtype= (self,var) on <self:ATrueExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var; /* _mtype on <self:ATrueExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AFalseExpr#accept_typing for (self: AFalseExpr, TypeVisitor) */
void nitc__typing___AFalseExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MType */;
var_v = p0;
{
var = nitc__typing___nitc__typing__TypeVisitor___type_bool(var_v, self);
}
{
{ /* Inline typing#AExpr#mtype= (self,var) on <self:AFalseExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var; /* _mtype on <self:AFalseExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AIntegerExpr#accept_typing for (self: AIntegerExpr, TypeVisitor) */
void nitc__typing___AIntegerExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var_mclass /* var mclass: nullable MClass */;
val* var /* : nullable Numeric */;
val* var2 /* : nullable Numeric */;
short int var3 /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : String */;
val* var7 /* : nullable MClass */;
val* var8 /* : nullable Numeric */;
val* var10 /* : nullable Numeric */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : String */;
val* var18 /* : nullable MClass */;
val* var19 /* : nullable Numeric */;
val* var21 /* : nullable Numeric */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
val* var28 /* : String */;
val* var29 /* : nullable MClass */;
val* var30 /* : nullable Numeric */;
val* var32 /* : nullable Numeric */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
val* var39 /* : String */;
val* var40 /* : nullable MClass */;
val* var41 /* : nullable Numeric */;
val* var43 /* : nullable Numeric */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
val* var50 /* : String */;
val* var51 /* : nullable MClass */;
val* var52 /* : nullable Numeric */;
val* var54 /* : nullable Numeric */;
short int var55 /* : Bool */;
int cltype56;
int idtype57;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
val* var61 /* : String */;
val* var62 /* : nullable MClass */;
val* var63 /* : nullable Numeric */;
val* var65 /* : nullable Numeric */;
short int var66 /* : Bool */;
int cltype67;
int idtype68;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
val* var72 /* : String */;
val* var73 /* : nullable MClass */;
short int var74 /* : Bool */;
short int var75 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var77 /* : Bool */;
short int var79 /* : Bool */;
val* var80 /* : MClassType */;
val* var82 /* : MClassType */;
var_v = p0;
var_mclass = ((val*)NULL);
{
{ /* Inline literal#AIntegerExpr#value (self) on <self:AIntegerExpr> */
var2 = self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <self:AIntegerExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
/* <var:nullable Numeric> isa Byte */
cltype = type_core__Byte.color;
idtype = type_core__Byte.id;
if(var == NULL) {
var3 = 0;
} else {
if(cltype >= (((long)var&3)?type_info[((long)var&3)]:var->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var&3)?type_info[((long)var&3)]:var->type)->type_table[cltype] == idtype;
}
}
if (var3){
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "Byte";
var6 = core__flat___NativeString___to_s_full(var5, 4l, 4l);
var4 = var6;
varonce = var4;
}
{
var7 = nitc__typing___nitc__typing__TypeVisitor___get_mclass(var_v, self, var4);
}
var_mclass = var7;
} else {
{
{ /* Inline literal#AIntegerExpr#value (self) on <self:AIntegerExpr> */
var10 = self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <self:AIntegerExpr> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
/* <var8:nullable Numeric> isa Int */
cltype12 = type_core__Int.color;
idtype13 = type_core__Int.id;
if(var8 == NULL) {
var11 = 0;
} else {
if(cltype12 >= (((long)var8&3)?type_info[((long)var8&3)]:var8->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var8&3)?type_info[((long)var8&3)]:var8->type)->type_table[cltype12] == idtype13;
}
}
if (var11){
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "Int";
var17 = core__flat___NativeString___to_s_full(var16, 3l, 3l);
var15 = var17;
varonce14 = var15;
}
{
var18 = nitc__typing___nitc__typing__TypeVisitor___get_mclass(var_v, self, var15);
}
var_mclass = var18;
} else {
{
{ /* Inline literal#AIntegerExpr#value (self) on <self:AIntegerExpr> */
var21 = self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <self:AIntegerExpr> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
/* <var19:nullable Numeric> isa Int8 */
cltype23 = type_core__Int8.color;
idtype24 = type_core__Int8.id;
if(var19 == NULL) {
var22 = 0;
} else {
if(cltype23 >= (((long)var19&3)?type_info[((long)var19&3)]:var19->type)->table_size) {
var22 = 0;
} else {
var22 = (((long)var19&3)?type_info[((long)var19&3)]:var19->type)->type_table[cltype23] == idtype24;
}
}
if (var22){
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "Int8";
var28 = core__flat___NativeString___to_s_full(var27, 4l, 4l);
var26 = var28;
varonce25 = var26;
}
{
var29 = nitc__typing___nitc__typing__TypeVisitor___get_mclass(var_v, self, var26);
}
var_mclass = var29;
} else {
{
{ /* Inline literal#AIntegerExpr#value (self) on <self:AIntegerExpr> */
var32 = self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <self:AIntegerExpr> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
/* <var30:nullable Numeric> isa Int16 */
cltype34 = type_core__Int16.color;
idtype35 = type_core__Int16.id;
if(var30 == NULL) {
var33 = 0;
} else {
if(cltype34 >= (((long)var30&3)?type_info[((long)var30&3)]:var30->type)->table_size) {
var33 = 0;
} else {
var33 = (((long)var30&3)?type_info[((long)var30&3)]:var30->type)->type_table[cltype34] == idtype35;
}
}
if (var33){
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "Int16";
var39 = core__flat___NativeString___to_s_full(var38, 5l, 5l);
var37 = var39;
varonce36 = var37;
}
{
var40 = nitc__typing___nitc__typing__TypeVisitor___get_mclass(var_v, self, var37);
}
var_mclass = var40;
} else {
{
{ /* Inline literal#AIntegerExpr#value (self) on <self:AIntegerExpr> */
var43 = self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <self:AIntegerExpr> */
var41 = var43;
RET_LABEL42:(void)0;
}
}
/* <var41:nullable Numeric> isa UInt16 */
cltype45 = type_core__UInt16.color;
idtype46 = type_core__UInt16.id;
if(var41 == NULL) {
var44 = 0;
} else {
if(cltype45 >= (((long)var41&3)?type_info[((long)var41&3)]:var41->type)->table_size) {
var44 = 0;
} else {
var44 = (((long)var41&3)?type_info[((long)var41&3)]:var41->type)->type_table[cltype45] == idtype46;
}
}
if (var44){
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "UInt16";
var50 = core__flat___NativeString___to_s_full(var49, 6l, 6l);
var48 = var50;
varonce47 = var48;
}
{
var51 = nitc__typing___nitc__typing__TypeVisitor___get_mclass(var_v, self, var48);
}
var_mclass = var51;
} else {
{
{ /* Inline literal#AIntegerExpr#value (self) on <self:AIntegerExpr> */
var54 = self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <self:AIntegerExpr> */
var52 = var54;
RET_LABEL53:(void)0;
}
}
/* <var52:nullable Numeric> isa Int32 */
cltype56 = type_core__Int32.color;
idtype57 = type_core__Int32.id;
if(var52 == NULL) {
var55 = 0;
} else {
if(cltype56 >= (((long)var52&3)?type_info[((long)var52&3)]:var52->type)->table_size) {
var55 = 0;
} else {
var55 = (((long)var52&3)?type_info[((long)var52&3)]:var52->type)->type_table[cltype56] == idtype57;
}
}
if (var55){
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "Int32";
var61 = core__flat___NativeString___to_s_full(var60, 5l, 5l);
var59 = var61;
varonce58 = var59;
}
{
var62 = nitc__typing___nitc__typing__TypeVisitor___get_mclass(var_v, self, var59);
}
var_mclass = var62;
} else {
{
{ /* Inline literal#AIntegerExpr#value (self) on <self:AIntegerExpr> */
var65 = self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <self:AIntegerExpr> */
var63 = var65;
RET_LABEL64:(void)0;
}
}
/* <var63:nullable Numeric> isa UInt32 */
cltype67 = type_core__UInt32.color;
idtype68 = type_core__UInt32.id;
if(var63 == NULL) {
var66 = 0;
} else {
if(cltype67 >= (((long)var63&3)?type_info[((long)var63&3)]:var63->type)->table_size) {
var66 = 0;
} else {
var66 = (((long)var63&3)?type_info[((long)var63&3)]:var63->type)->type_table[cltype67] == idtype68;
}
}
if (var66){
if (likely(varonce69!=NULL)) {
var70 = varonce69;
} else {
var71 = "UInt32";
var72 = core__flat___NativeString___to_s_full(var71, 6l, 6l);
var70 = var72;
varonce69 = var70;
}
{
var73 = nitc__typing___nitc__typing__TypeVisitor___get_mclass(var_v, self, var70);
}
var_mclass = var73;
} else {
}
}
}
}
}
}
}
if (var_mclass == NULL) {
var74 = 1; /* is null */
} else {
var74 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mclass,((val*)NULL)) on <var_mclass:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
var79 = var_mclass == var_other;
var77 = var79;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
}
var75 = var77;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
var74 = var75;
}
if (var74){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClass#mclass_type (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var82 = var_mclass->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var82 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 507);
fatal_exit(1);
}
var80 = var82;
RET_LABEL81:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var80) on <self:AIntegerExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var80; /* _mtype on <self:AIntegerExpr> */
RET_LABEL83:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AFloatExpr#accept_typing for (self: AFloatExpr, TypeVisitor) */
void nitc__typing___AFloatExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : String */;
val* var3 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : MClassType */;
val* var12 /* : MClassType */;
var_v = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "Float";
var2 = core__flat___NativeString___to_s_full(var1, 5l, 5l);
var = var2;
varonce = var;
}
{
var3 = nitc__typing___nitc__typing__TypeVisitor___get_mclass(var_v, self, var);
}
var_mclass = var3;
if (var_mclass == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mclass,((val*)NULL)) on <var_mclass:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
var9 = var_mclass == var_other;
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
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClass#mclass_type (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var12 = var_mclass->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 507);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var10) on <self:AFloatExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var10; /* _mtype on <self:AFloatExpr> */
RET_LABEL13:(void)0;
}
}
RET_LABEL:;
}
/* method typing#ACharExpr#accept_typing for (self: ACharExpr, TypeVisitor) */
void nitc__typing___ACharExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : String */;
val* var3 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : MClassType */;
val* var12 /* : MClassType */;
var_v = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "Char";
var2 = core__flat___NativeString___to_s_full(var1, 4l, 4l);
var = var2;
varonce = var;
}
{
var3 = nitc__typing___nitc__typing__TypeVisitor___get_mclass(var_v, self, var);
}
var_mclass = var3;
if (var_mclass == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mclass,((val*)NULL)) on <var_mclass:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
var9 = var_mclass == var_other;
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
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClass#mclass_type (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var12 = var_mclass->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 507);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var10) on <self:ACharExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var10; /* _mtype on <self:ACharExpr> */
RET_LABEL13:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AStringFormExpr#accept_typing for (self: AStringFormExpr, TypeVisitor) */
void nitc__typing___AStringFormExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : String */;
val* var3 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : MClassType */;
val* var12 /* : MClassType */;
var_v = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "String";
var2 = core__flat___NativeString___to_s_full(var1, 6l, 6l);
var = var2;
varonce = var;
}
{
var3 = nitc__typing___nitc__typing__TypeVisitor___get_mclass(var_v, self, var);
}
var_mclass = var3;
if (var_mclass == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mclass,((val*)NULL)) on <var_mclass:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
var9 = var_mclass == var_other;
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
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClass#mclass_type (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var12 = var_mclass->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 507);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var10) on <self:AStringFormExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var10; /* _mtype on <self:AStringFormExpr> */
RET_LABEL13:(void)0;
}
}
RET_LABEL:;
}
/* method typing#ASuperstringExpr#accept_typing for (self: ASuperstringExpr, TypeVisitor) */
void nitc__typing___ASuperstringExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : String */;
val* var3 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : MClassType */;
val* var12 /* : MClassType */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : String */;
val* var18 /* : nullable MClass */;
val* var_objclass /* var objclass: nullable MClass */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : MClassType */;
val* var27 /* : MClassType */;
val* var_objtype /* var objtype: MClassType */;
val* var28 /* : ANodes[AExpr] */;
val* var30 /* : ANodes[AExpr] */;
val* var_ /* var : ANodes[AExpr] */;
val* var31 /* : Iterator[ANode] */;
val* var_32 /* var : Iterator[AExpr] */;
short int var33 /* : Bool */;
val* var34 /* : nullable Object */;
val* var_nexpr /* var nexpr: AExpr */;
val* var35 /* : nullable MType */;
var_v = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "String";
var2 = core__flat___NativeString___to_s_full(var1, 6l, 6l);
var = var2;
varonce = var;
}
{
var3 = nitc__typing___nitc__typing__TypeVisitor___get_mclass(var_v, self, var);
}
var_mclass = var3;
if (var_mclass == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mclass,((val*)NULL)) on <var_mclass:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
var9 = var_mclass == var_other;
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
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClass#mclass_type (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var12 = var_mclass->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 507);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var10) on <self:ASuperstringExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var10; /* _mtype on <self:ASuperstringExpr> */
RET_LABEL13:(void)0;
}
}
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "Object";
var17 = core__flat___NativeString___to_s_full(var16, 6l, 6l);
var15 = var17;
varonce14 = var15;
}
{
var18 = nitc__typing___nitc__typing__TypeVisitor___get_mclass(var_v, self, var15);
}
var_objclass = var18;
if (var_objclass == NULL) {
var19 = 1; /* is null */
} else {
var19 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_objclass,((val*)NULL)) on <var_objclass:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_objclass,var_other) on <var_objclass:nullable MClass(MClass)> */
var24 = var_objclass == var_other;
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var19 = var20;
}
if (var19){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClass#mclass_type (var_objclass) on <var_objclass:nullable MClass(MClass)> */
var27 = var_objclass->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_objclass:nullable MClass(MClass)> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 507);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
var_objtype = var25;
{
{ /* Inline parser_nodes#ASuperstringExpr#n_exprs (self) on <self:ASuperstringExpr> */
var30 = self->attrs[COLOR_nitc__parser_nodes__ASuperstringExpr___n_exprs].val; /* _n_exprs on <self:ASuperstringExpr> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2564);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
var_ = var28;
{
var31 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_);
}
var_32 = var31;
for(;;) {
{
var33 = ((short int(*)(val* self))((((long)var_32&3)?class_info[((long)var_32&3)]:var_32->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_32); /* is_ok on <var_32:Iterator[AExpr]>*/
}
if (var33){
} else {
goto BREAK_label;
}
{
var34 = ((val*(*)(val* self))((((long)var_32&3)?class_info[((long)var_32&3)]:var_32->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_32); /* item on <var_32:Iterator[AExpr]>*/
}
var_nexpr = var34;
{
var35 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_subtype(var_v, var_nexpr, var_objtype);
}
{
((void(*)(val* self))((((long)var_32&3)?class_info[((long)var_32&3)]:var_32->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_32); /* next on <var_32:Iterator[AExpr]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_32&3)?class_info[((long)var_32&3)]:var_32->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_32); /* finish on <var_32:Iterator[AExpr]>*/
}
RET_LABEL:;
}
/* method typing#AArrayExpr#with_capacity_callsite for (self: AArrayExpr): nullable CallSite */
val* nitc__typing___AArrayExpr___with_capacity_callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nitc__typing__AArrayExpr___with_capacity_callsite].val; /* _with_capacity_callsite on <self:AArrayExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AArrayExpr#with_capacity_callsite= for (self: AArrayExpr, nullable CallSite) */
void nitc__typing___AArrayExpr___with_capacity_callsite_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__AArrayExpr___with_capacity_callsite].val = p0; /* _with_capacity_callsite on <self:AArrayExpr> */
RET_LABEL:;
}
/* method typing#AArrayExpr#push_callsite for (self: AArrayExpr): nullable CallSite */
val* nitc__typing___AArrayExpr___push_callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nitc__typing__AArrayExpr___push_callsite].val; /* _push_callsite on <self:AArrayExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AArrayExpr#push_callsite= for (self: AArrayExpr, nullable CallSite) */
void nitc__typing___AArrayExpr___push_callsite_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__AArrayExpr___push_callsite].val = p0; /* _push_callsite on <self:AArrayExpr> */
RET_LABEL:;
}
/* method typing#AArrayExpr#element_mtype for (self: AArrayExpr): nullable MType */
val* nitc__typing___AArrayExpr___element_mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nitc__typing__AArrayExpr___element_mtype].val; /* _element_mtype on <self:AArrayExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AArrayExpr#element_mtype= for (self: AArrayExpr, nullable MType) */
void nitc__typing___AArrayExpr___element_mtype_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__AArrayExpr___element_mtype].val = p0; /* _element_mtype on <self:AArrayExpr> */
RET_LABEL:;
}
/* method typing#AArrayExpr#set_comprehension for (self: AArrayExpr, nullable AExpr) */
void nitc__typing___AArrayExpr___set_comprehension(val* self, val* p0) {
val* var_n /* var n: nullable AExpr */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var7 /* : nullable AExpr */;
val* var9 /* : nullable AExpr */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : nullable AExpr */;
val* var15 /* : nullable AExpr */;
val* var16 /* : nullable AExpr */;
val* var18 /* : nullable AExpr */;
var_n = p0;
if (var_n == NULL) {
var = 1; /* is null */
} else {
var = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_n,((val*)NULL)) on <var_n:nullable AExpr> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_n,var_other) on <var_n:nullable AExpr(AExpr)> */
var5 = var_n == var_other;
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
/* <var_n:nullable AExpr(AExpr)> isa AForExpr */
cltype = type_nitc__AForExpr.color;
idtype = type_nitc__AForExpr.id;
if(cltype >= var_n->type->table_size) {
var6 = 0;
} else {
var6 = var_n->type->type_table[cltype] == idtype;
}
if (var6){
{
{ /* Inline parser_nodes#AForExpr#n_block (var_n) on <var_n:nullable AExpr(AForExpr)> */
var9 = var_n->attrs[COLOR_nitc__parser_nodes__AForExpr___n_block].val; /* _n_block on <var_n:nullable AExpr(AForExpr)> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
nitc__typing___AArrayExpr___set_comprehension(self, var7); /* Direct call typing#AArrayExpr#set_comprehension on <self:AArrayExpr>*/
}
} else {
/* <var_n:nullable AExpr(AExpr)> isa AIfExpr */
cltype11 = type_nitc__AIfExpr.color;
idtype12 = type_nitc__AIfExpr.id;
if(cltype11 >= var_n->type->table_size) {
var10 = 0;
} else {
var10 = var_n->type->type_table[cltype11] == idtype12;
}
if (var10){
{
{ /* Inline parser_nodes#AIfExpr#n_then (var_n) on <var_n:nullable AExpr(AIfExpr)> */
var15 = var_n->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_then].val; /* _n_then on <var_n:nullable AExpr(AIfExpr)> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
nitc__typing___AArrayExpr___set_comprehension(self, var13); /* Direct call typing#AArrayExpr#set_comprehension on <self:AArrayExpr>*/
}
{
{ /* Inline parser_nodes#AIfExpr#n_else (var_n) on <var_n:nullable AExpr(AIfExpr)> */
var18 = var_n->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_else].val; /* _n_else on <var_n:nullable AExpr(AIfExpr)> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
nitc__typing___AArrayExpr___set_comprehension(self, var16); /* Direct call typing#AArrayExpr#set_comprehension on <self:AArrayExpr>*/
}
} else {
{
{ /* Inline typing#AExpr#comprehension= (var_n,self) on <var_n:nullable AExpr(AExpr)> */
var_n->attrs[COLOR_nitc__typing__AExpr___comprehension].val = self; /* _comprehension on <var_n:nullable AExpr(AExpr)> */
RET_LABEL19:(void)0;
}
}
}
}
}
RET_LABEL:;
}
/* method typing#AArrayExpr#accept_typing for (self: AArrayExpr, TypeVisitor) */
void nitc__typing___AArrayExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var_mtype /* var mtype: nullable MType */;
val* var /* : nullable AType */;
val* var2 /* : nullable AType */;
val* var_ntype /* var ntype: nullable AType */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable MType */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var_other12 /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : Array[nullable MType] */;
val* var_mtypes /* var mtypes: Array[nullable MType] */;
short int var_useless /* var useless: Bool */;
val* var17 /* : ANodes[AExpr] */;
val* var19 /* : ANodes[AExpr] */;
val* var_ /* var : ANodes[AExpr] */;
val* var20 /* : Iterator[ANode] */;
val* var_21 /* var : Iterator[AExpr] */;
short int var22 /* : Bool */;
val* var23 /* : nullable Object */;
val* var_e /* var e: AExpr */;
val* var24 /* : nullable MType */;
val* var_t /* var t: nullable MType */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
val* var36 /* : nullable MType */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
val* var54 /* : nullable MType */;
val* var56 /* : nullable MType */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
val* var62 /* : nullable MType */;
val* var64 /* : nullable MType */;
val* var65 /* : nullable MType */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
short int var70 /* : Bool */;
short int var72 /* : Bool */;
short int var_73 /* var : Bool */;
short int var74 /* : Bool */;
int cltype;
int idtype;
val* var75 /* : NativeArray[String] */;
static val* varonce;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
val* var79 /* : String */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
val* var83 /* : String */;
val* var84 /* : String */;
val* var85 /* : String */;
short int var86 /* : Bool */;
short int var87 /* : Bool */;
short int var89 /* : Bool */;
short int var90 /* : Bool */;
val* var91 /* : ModelBuilder */;
val* var93 /* : ModelBuilder */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : NativeString */;
val* var97 /* : String */;
val* var99 /* : NativeArray[String] */;
static val* varonce98;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : NativeString */;
val* var103 /* : String */;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : NativeString */;
val* var107 /* : String */;
val* var108 /* : String */;
val* var109 /* : String */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : NativeString */;
val* var114 /* : String */;
val* var115 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
short int var116 /* : Bool */;
short int var117 /* : Bool */;
short int var119 /* : Bool */;
short int var121 /* : Bool */;
val* var122 /* : Array[MType] */;
val* var_123 /* var : Array[MType] */;
val* var124 /* : MClassType */;
val* var_array_mtype /* var array_mtype: MClassType */;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : NativeString */;
val* var128 /* : String */;
val* var129 /* : nullable CallSite */;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : NativeString */;
val* var134 /* : String */;
val* var135 /* : nullable CallSite */;
var_v = p0;
var_mtype = ((val*)NULL);
{
{ /* Inline parser_nodes#AArrayExpr#n_type (self) on <self:AArrayExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AArrayExpr___n_type].val; /* _n_type on <self:AArrayExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_ntype = var;
if (var_ntype == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ntype,((val*)NULL)) on <var_ntype:nullable AType> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_ntype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ntype, var_other); /* == on <var_ntype:nullable AType(AType)>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
{
var8 = nitc__typing___nitc__typing__TypeVisitor___resolve_mtype(var_v, var_ntype);
}
var_mtype = var8;
if (var_mtype == NULL) {
var9 = 1; /* is null */
} else {
var9 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other12 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other12) on <var_mtype:nullable MType(MType)> */
var15 = var_mtype == var_other12;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
goto RET_LABEL;
} else {
}
} else {
}
var16 = NEW_core__Array(&type_core__Array__nullable__nitc__MType);
{
core___core__Array___core__kernel__Object__init(var16); /* Direct call array#Array#init on <var16:Array[nullable MType]>*/
}
var_mtypes = var16;
var_useless = 0;
{
{ /* Inline parser_nodes#AArrayExpr#n_exprs (self) on <self:AArrayExpr> */
var19 = self->attrs[COLOR_nitc__parser_nodes__AArrayExpr___n_exprs].val; /* _n_exprs on <self:AArrayExpr> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2460);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_ = var17;
{
var20 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_);
}
var_21 = var20;
for(;;) {
{
var22 = ((short int(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_21); /* is_ok on <var_21:Iterator[AExpr]>*/
}
if (var22){
} else {
goto BREAK_label;
}
{
var23 = ((val*(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_21); /* item on <var_21:Iterator[AExpr]>*/
}
var_e = var23;
{
var24 = nitc__typing___nitc__typing__TypeVisitor___visit_expr(var_v, var_e);
}
var_t = var24;
if (var_t == NULL) {
var25 = 1; /* is null */
} else {
var25 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t,((val*)NULL)) on <var_t:nullable MType> */
var_other12 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_t,var_other12) on <var_t:nullable MType(MType)> */
var30 = var_t == var_other12;
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
var25 = var26;
}
if (var25){
goto RET_LABEL;
} else {
}
{
nitc__typing___AArrayExpr___set_comprehension(self, var_e); /* Direct call typing#AArrayExpr#set_comprehension on <self:AArrayExpr>*/
}
if (var_mtype == NULL) {
var31 = 0; /* is null */
} else {
var31 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
var34 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mtype, var_other); /* == on <var_mtype:nullable MType(MType)>*/
}
var35 = !var34;
var32 = var35;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
var31 = var32;
}
if (var31){
{
var36 = nitc__typing___nitc__typing__TypeVisitor___check_subtype(var_v, var_e, var_t, var_mtype, 0);
}
if (var36 == NULL) {
var37 = 1; /* is null */
} else {
var37 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var36,((val*)NULL)) on <var36:nullable MType> */
var_other12 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var36,var_other12) on <var36:nullable MType(MType)> */
var42 = var36 == var_other12;
var40 = var42;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
var37 = var38;
}
if (var37){
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Object#== (var_t,var_mtype) on <var_t:nullable MType(MType)> */
var_other12 = var_mtype;
{
{ /* Inline kernel#Object#is_same_instance (var_t,var_other12) on <var_t:nullable MType(MType)> */
var47 = var_t == var_other12;
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
if (var43){
var_useless = 1;
} else {
}
} else {
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_mtypes, var_t); /* Direct call array#Array#add on <var_mtypes:Array[nullable MType]>*/
}
}
{
((void(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_21); /* next on <var_21:Iterator[AExpr]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_21); /* finish on <var_21:Iterator[AExpr]>*/
}
if (var_mtype == NULL) {
var48 = 1; /* is null */
} else {
var48 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other12 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other12) on <var_mtype:nullable MType(MType)> */
var53 = var_mtype == var_other12;
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
var49 = var51;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
var48 = var49;
}
if (var48){
{
{ /* Inline typing#AArrayExpr#element_mtype (self) on <self:AArrayExpr> */
var56 = self->attrs[COLOR_nitc__typing__AArrayExpr___element_mtype].val; /* _element_mtype on <self:AArrayExpr> */
var54 = var56;
RET_LABEL55:(void)0;
}
}
if (var54 == NULL) {
var57 = 0; /* is null */
} else {
var57 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var54,((val*)NULL)) on <var54:nullable MType> */
var_other = ((val*)NULL);
{
var60 = ((short int(*)(val* self, val* p0))(var54->class->vft[COLOR_core__kernel__Object___61d_61d]))(var54, var_other); /* == on <var54:nullable MType(MType)>*/
}
var61 = !var60;
var58 = var61;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
var57 = var58;
}
if (var57){
{
{ /* Inline typing#AArrayExpr#element_mtype (self) on <self:AArrayExpr> */
var64 = self->attrs[COLOR_nitc__typing__AArrayExpr___element_mtype].val; /* _element_mtype on <self:AArrayExpr> */
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_mtypes, var62); /* Direct call array#Array#add on <var_mtypes:Array[nullable MType]>*/
}
} else {
}
{
var65 = nitc__typing___nitc__typing__TypeVisitor___merge_types(var_v, self, var_mtypes);
}
var_mtype = var65;
} else {
}
if (var_mtype == NULL) {
var67 = 1; /* is null */
} else {
var67 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other12 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other12) on <var_mtype:nullable MType(MType)> */
var72 = var_mtype == var_other12;
var70 = var72;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
var68 = var70;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
var67 = var68;
}
var_73 = var67;
if (var67){
var66 = var_73;
} else {
/* <var_mtype:nullable MType(MType)> isa MNullType */
cltype = type_nitc__MNullType.color;
idtype = type_nitc__MNullType.id;
if(cltype >= var_mtype->type->table_size) {
var74 = 0;
} else {
var74 = var_mtype->type->type_table[cltype] == idtype;
}
var66 = var74;
}
if (var66){
if (unlikely(varonce==NULL)) {
var75 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce76!=NULL)) {
var77 = varonce76;
} else {
var78 = "Type Error: ambiguous array type ";
var79 = core__flat___NativeString___to_s_full(var78, 33l, 33l);
var77 = var79;
varonce76 = var77;
}
((struct instance_core__NativeArray*)var75)->values[0]=var77;
} else {
var75 = varonce;
varonce = NULL;
}
if (likely(varonce80!=NULL)) {
var81 = varonce80;
} else {
var82 = " ";
var83 = core__flat___NativeString___to_s_full(var82, 1l, 1l);
var81 = var83;
varonce80 = var81;
}
{
var84 = core__abstract_text___Collection___join(var_mtypes, var81);
}
((struct instance_core__NativeArray*)var75)->values[1]=var84;
{
var85 = ((val*(*)(val* self))(var75->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var75); /* native_to_s on <var75:NativeArray[String]>*/
}
varonce = var75;
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var85); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
if (var_useless){
if (var_ntype == NULL) {
var86 = 0; /* is null */
} else {
var86 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ntype,((val*)NULL)) on <var_ntype:nullable AType> */
var_other = ((val*)NULL);
{
var89 = ((short int(*)(val* self, val* p0))(var_ntype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ntype, var_other); /* == on <var_ntype:nullable AType(AType)>*/
}
var90 = !var89;
var87 = var90;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
var86 = var87;
}
if (unlikely(!var86)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1539);
fatal_exit(1);
}
{
{ /* Inline typing#TypeVisitor#modelbuilder (var_v) on <var_v:TypeVisitor> */
var93 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <var_v:TypeVisitor> */
if (unlikely(var93 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var91 = var93;
RET_LABEL92:(void)0;
}
}
if (likely(varonce94!=NULL)) {
var95 = varonce94;
} else {
var96 = "useless-type";
var97 = core__flat___NativeString___to_s_full(var96, 12l, 12l);
var95 = var97;
varonce94 = var95;
}
if (unlikely(varonce98==NULL)) {
var99 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce100!=NULL)) {
var101 = varonce100;
} else {
var102 = "Warning: useless type declaration `";
var103 = core__flat___NativeString___to_s_full(var102, 35l, 35l);
var101 = var103;
varonce100 = var101;
}
((struct instance_core__NativeArray*)var99)->values[0]=var101;
if (likely(varonce104!=NULL)) {
var105 = varonce104;
} else {
var106 = "` in literal Array since it can be inferred from the elements type.";
var107 = core__flat___NativeString___to_s_full(var106, 67l, 67l);
var105 = var107;
varonce104 = var105;
}
((struct instance_core__NativeArray*)var99)->values[2]=var105;
} else {
var99 = varonce98;
varonce98 = NULL;
}
{
var108 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var99)->values[1]=var108;
{
var109 = ((val*(*)(val* self))(var99->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var99); /* native_to_s on <var99:NativeArray[String]>*/
}
varonce98 = var99;
{
nitc___nitc__ModelBuilder___warning(var91, var_ntype, var95, var109); /* Direct call modelbuilder_base#ModelBuilder#warning on <var91:ModelBuilder>*/
}
} else {
}
{
{ /* Inline typing#AArrayExpr#element_mtype= (self,var_mtype) on <self:AArrayExpr> */
self->attrs[COLOR_nitc__typing__AArrayExpr___element_mtype].val = var_mtype; /* _element_mtype on <self:AArrayExpr> */
RET_LABEL110:(void)0;
}
}
if (likely(varonce111!=NULL)) {
var112 = varonce111;
} else {
var113 = "Array";
var114 = core__flat___NativeString___to_s_full(var113, 5l, 5l);
var112 = var114;
varonce111 = var112;
}
{
var115 = nitc__typing___nitc__typing__TypeVisitor___get_mclass(var_v, self, var112);
}
var_mclass = var115;
if (var_mclass == NULL) {
var116 = 1; /* is null */
} else {
var116 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mclass,((val*)NULL)) on <var_mclass:nullable MClass> */
var_other12 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mclass,var_other12) on <var_mclass:nullable MClass(MClass)> */
var121 = var_mclass == var_other12;
var119 = var121;
goto RET_LABEL120;
RET_LABEL120:(void)0;
}
}
var117 = var119;
goto RET_LABEL118;
RET_LABEL118:(void)0;
}
var116 = var117;
}
if (var116){
goto RET_LABEL;
} else {
}
var122 = NEW_core__Array(&type_core__Array__nitc__MType);
{
core___core__Array___with_capacity(var122, 1l); /* Direct call array#Array#with_capacity on <var122:Array[MType]>*/
}
var_123 = var122;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_123, var_mtype); /* Direct call array#AbstractArray#push on <var_123:Array[MType]>*/
}
{
var124 = nitc___nitc__MClass___get_mtype(var_mclass, var_123);
}
var_array_mtype = var124;
if (likely(varonce125!=NULL)) {
var126 = varonce125;
} else {
var127 = "with_capacity";
var128 = core__flat___NativeString___to_s_full(var127, 13l, 13l);
var126 = var128;
varonce125 = var126;
}
{
var129 = nitc__typing___nitc__typing__TypeVisitor___get_method(var_v, self, var_array_mtype, var126, 0);
}
{
{ /* Inline typing#AArrayExpr#with_capacity_callsite= (self,var129) on <self:AArrayExpr> */
self->attrs[COLOR_nitc__typing__AArrayExpr___with_capacity_callsite].val = var129; /* _with_capacity_callsite on <self:AArrayExpr> */
RET_LABEL130:(void)0;
}
}
if (likely(varonce131!=NULL)) {
var132 = varonce131;
} else {
var133 = "push";
var134 = core__flat___NativeString___to_s_full(var133, 4l, 4l);
var132 = var134;
varonce131 = var132;
}
{
var135 = nitc__typing___nitc__typing__TypeVisitor___get_method(var_v, self, var_array_mtype, var132, 0);
}
{
{ /* Inline typing#AArrayExpr#push_callsite= (self,var135) on <self:AArrayExpr> */
self->attrs[COLOR_nitc__typing__AArrayExpr___push_callsite].val = var135; /* _push_callsite on <self:AArrayExpr> */
RET_LABEL136:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var_array_mtype) on <self:AArrayExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var_array_mtype; /* _mtype on <self:AArrayExpr> */
RET_LABEL137:(void)0;
}
}
RET_LABEL:;
}
/* method typing#ARangeExpr#init_callsite for (self: ARangeExpr): nullable CallSite */
val* nitc__typing___ARangeExpr___init_callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nitc__typing__ARangeExpr___init_callsite].val; /* _init_callsite on <self:ARangeExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ARangeExpr#init_callsite= for (self: ARangeExpr, nullable CallSite) */
void nitc__typing___ARangeExpr___init_callsite_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__ARangeExpr___init_callsite].val = p0; /* _init_callsite on <self:ARangeExpr> */
RET_LABEL:;
}
/* method typing#ARangeExpr#accept_typing for (self: ARangeExpr, TypeVisitor) */
void nitc__typing___ARangeExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : String */;
val* var3 /* : nullable MClass */;
val* var_discrete_class /* var discrete_class: nullable MClass */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : MClassDef */;
val* var12 /* : MClassDef */;
val* var13 /* : MClassType */;
val* var15 /* : MClassType */;
val* var_discrete_type /* var discrete_type: MClassType */;
val* var16 /* : AExpr */;
val* var18 /* : AExpr */;
val* var19 /* : nullable MType */;
val* var_t1 /* var t1: nullable MType */;
val* var20 /* : AExpr */;
val* var22 /* : AExpr */;
val* var23 /* : nullable MType */;
val* var_t2 /* var t2: nullable MType */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var_ /* var : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
val* var40 /* : String */;
val* var41 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
val* var49 /* : Array[MType] */;
val* var_50 /* var : Array[MType] */;
val* var51 /* : MClassType */;
val* var_mtype /* var mtype: nullable Object */;
short int var52 /* : Bool */;
val* var53 /* : Array[MType] */;
val* var_54 /* var : Array[MType] */;
val* var55 /* : MClassType */;
val* var57 /* : NativeArray[String] */;
static val* varonce56;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
val* var61 /* : String */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
val* var65 /* : String */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
val* var69 /* : String */;
val* var70 /* : String */;
val* var71 /* : String */;
val* var72 /* : String */;
short int var74 /* : Bool */;
int cltype;
int idtype;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : NativeString */;
val* var78 /* : String */;
val* var79 /* : nullable CallSite */;
val* var_callsite /* var callsite: nullable Object */;
short int var80 /* : Bool */;
int cltype81;
int idtype82;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : NativeString */;
val* var86 /* : String */;
val* var87 /* : nullable CallSite */;
var_v = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "Discrete";
var2 = core__flat___NativeString___to_s_full(var1, 8l, 8l);
var = var2;
varonce = var;
}
{
var3 = nitc__typing___nitc__typing__TypeVisitor___get_mclass(var_v, self, var);
}
var_discrete_class = var3;
if (var_discrete_class == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_discrete_class,((val*)NULL)) on <var_discrete_class:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_discrete_class,var_other) on <var_discrete_class:nullable MClass(MClass)> */
var9 = var_discrete_class == var_other;
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
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClass#intro (var_discrete_class) on <var_discrete_class:nullable MClass(MClass)> */
var12 = var_discrete_class->attrs[COLOR_nitc__model__MClass___intro].val; /* _intro on <var_discrete_class:nullable MClass(MClass)> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 483);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var10) on <var10:MClassDef> */
var15 = var10->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var10:MClassDef> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 579);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_discrete_type = var13;
{
{ /* Inline parser_nodes#ARangeExpr#n_expr (self) on <self:ARangeExpr> */
var18 = self->attrs[COLOR_nitc__parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:ARangeExpr> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2421);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_subtype(var_v, var16, var_discrete_type);
}
var_t1 = var19;
{
{ /* Inline parser_nodes#ARangeExpr#n_expr2 (self) on <self:ARangeExpr> */
var22 = self->attrs[COLOR_nitc__parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:ARangeExpr> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2427);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_subtype(var_v, var20, var_discrete_type);
}
var_t2 = var23;
if (var_t1 == NULL) {
var25 = 1; /* is null */
} else {
var25 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t1,((val*)NULL)) on <var_t1:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_t1,var_other) on <var_t1:nullable MType(MType)> */
var30 = var_t1 == var_other;
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
var25 = var26;
}
var_ = var25;
if (var25){
var24 = var_;
} else {
if (var_t2 == NULL) {
var31 = 1; /* is null */
} else {
var31 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t2,((val*)NULL)) on <var_t2:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_t2,var_other) on <var_t2:nullable MType(MType)> */
var36 = var_t2 == var_other;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
var31 = var32;
}
var24 = var31;
}
if (var24){
goto RET_LABEL;
} else {
}
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = "Range";
var40 = core__flat___NativeString___to_s_full(var39, 5l, 5l);
var38 = var40;
varonce37 = var38;
}
{
var41 = nitc__typing___nitc__typing__TypeVisitor___get_mclass(var_v, self, var38);
}
var_mclass = var41;
if (var_mclass == NULL) {
var42 = 1; /* is null */
} else {
var42 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mclass,((val*)NULL)) on <var_mclass:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
var47 = var_mclass == var_other;
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
var42 = var43;
}
if (var42){
goto RET_LABEL;
} else {
}
{
var48 = nitc__typing___nitc__typing__TypeVisitor___is_subtype(var_v, var_t1, var_t2);
}
if (var48){
var49 = NEW_core__Array(&type_core__Array__nitc__MType);
{
core___core__Array___with_capacity(var49, 1l); /* Direct call array#Array#with_capacity on <var49:Array[MType]>*/
}
var_50 = var49;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_50, var_t2); /* Direct call array#AbstractArray#push on <var_50:Array[MType]>*/
}
{
var51 = nitc___nitc__MClass___get_mtype(var_mclass, var_50);
}
var_mtype = var51;
} else {
{
var52 = nitc__typing___nitc__typing__TypeVisitor___is_subtype(var_v, var_t2, var_t1);
}
if (var52){
var53 = NEW_core__Array(&type_core__Array__nitc__MType);
{
core___core__Array___with_capacity(var53, 1l); /* Direct call array#Array#with_capacity on <var53:Array[MType]>*/
}
var_54 = var53;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_54, var_t1); /* Direct call array#AbstractArray#push on <var_54:Array[MType]>*/
}
{
var55 = nitc___nitc__MClass___get_mtype(var_mclass, var_54);
}
var_mtype = var55;
} else {
if (unlikely(varonce56==NULL)) {
var57 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "Type Error: cannot create range: `";
var61 = core__flat___NativeString___to_s_full(var60, 34l, 34l);
var59 = var61;
varonce58 = var59;
}
((struct instance_core__NativeArray*)var57)->values[0]=var59;
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = "` vs `";
var65 = core__flat___NativeString___to_s_full(var64, 6l, 6l);
var63 = var65;
varonce62 = var63;
}
((struct instance_core__NativeArray*)var57)->values[2]=var63;
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = "`.";
var69 = core__flat___NativeString___to_s_full(var68, 2l, 2l);
var67 = var69;
varonce66 = var67;
}
((struct instance_core__NativeArray*)var57)->values[4]=var67;
} else {
var57 = varonce56;
varonce56 = NULL;
}
{
var70 = ((val*(*)(val* self))(var_t1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_t1); /* to_s on <var_t1:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var57)->values[1]=var70;
{
var71 = ((val*(*)(val* self))(var_t2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_t2); /* to_s on <var_t2:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var57)->values[3]=var71;
{
var72 = ((val*(*)(val* self))(var57->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var57); /* native_to_s on <var57:NativeArray[String]>*/
}
varonce56 = var57;
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var72); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var_mtype) on <self:ARangeExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var_mtype; /* _mtype on <self:ARangeExpr> */
RET_LABEL73:(void)0;
}
}
/* <self:ARangeExpr> isa ACrangeExpr */
cltype = type_nitc__ACrangeExpr.color;
idtype = type_nitc__ACrangeExpr.id;
if(cltype >= self->type->table_size) {
var74 = 0;
} else {
var74 = self->type->type_table[cltype] == idtype;
}
if (var74){
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = "init";
var78 = core__flat___NativeString___to_s_full(var77, 4l, 4l);
var76 = var78;
varonce75 = var76;
}
{
var79 = nitc__typing___nitc__typing__TypeVisitor___get_method(var_v, self, var_mtype, var76, 0);
}
var_callsite = var79;
} else {
/* <self:ARangeExpr> isa AOrangeExpr */
cltype81 = type_nitc__AOrangeExpr.color;
idtype82 = type_nitc__AOrangeExpr.id;
if(cltype81 >= self->type->table_size) {
var80 = 0;
} else {
var80 = self->type->type_table[cltype81] == idtype82;
}
if (var80){
if (likely(varonce83!=NULL)) {
var84 = varonce83;
} else {
var85 = "without_last";
var86 = core__flat___NativeString___to_s_full(var85, 12l, 12l);
var84 = var86;
varonce83 = var84;
}
{
var87 = nitc__typing___nitc__typing__TypeVisitor___get_method(var_v, self, var_mtype, var84, 0);
}
var_callsite = var87;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1588);
fatal_exit(1);
}
}
{
{ /* Inline typing#ARangeExpr#init_callsite= (self,var_callsite) on <self:ARangeExpr> */
self->attrs[COLOR_nitc__typing__ARangeExpr___init_callsite].val = var_callsite; /* _init_callsite on <self:ARangeExpr> */
RET_LABEL88:(void)0;
}
}
RET_LABEL:;
}
/* method typing#ANullExpr#accept_typing for (self: ANullExpr, TypeVisitor) */
void nitc__typing___ANullExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : MModule */;
val* var2 /* : MModule */;
val* var3 /* : Model */;
val* var5 /* : Model */;
val* var6 /* : MNullType */;
val* var8 /* : MNullType */;
var_v = p0;
{
{ /* Inline typing#TypeVisitor#mmodule (var_v) on <var_v:TypeVisitor> */
var2 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___mmodule].val; /* _mmodule on <var_v:TypeVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 37);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline mmodule#MModule#model (var) on <var:MModule> */
var5 = var->attrs[COLOR_nitc__mmodule__MModule___model].val; /* _model on <var:MModule> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 78);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model#Model#null_type (var3) on <var3:Model> */
var8 = var3->attrs[COLOR_nitc__model__Model___null_type].val; /* _null_type on <var3:Model> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _null_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 94);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var6) on <self:ANullExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var6; /* _mtype on <self:ANullExpr> */
RET_LABEL9:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AIsaExpr#cast_type for (self: AIsaExpr): nullable MType */
val* nitc__typing___AIsaExpr___cast_type(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nitc__typing__AIsaExpr___cast_type].val; /* _cast_type on <self:AIsaExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AIsaExpr#cast_type= for (self: AIsaExpr, nullable MType) */
void nitc__typing___AIsaExpr___cast_type_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__AIsaExpr___cast_type].val = p0; /* _cast_type on <self:AIsaExpr> */
RET_LABEL:;
}
/* method typing#AIsaExpr#accept_typing for (self: AIsaExpr, TypeVisitor) */
void nitc__typing___AIsaExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var4 /* : AType */;
val* var6 /* : AType */;
val* var7 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var9 /* : AExpr */;
val* var11 /* : AExpr */;
val* var12 /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : nullable FlowContext */;
val* var20 /* : nullable FlowContext */;
val* var21 /* : FlowContext */;
val* var23 /* : FlowContext */;
val* var24 /* : nullable MType */;
var_v = p0;
{
{ /* Inline parser_nodes#AIsaExpr#n_expr (self) on <self:AIsaExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AIsaExpr___n_expr].val; /* _n_expr on <self:AIsaExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2153);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__typing___nitc__typing__TypeVisitor___visit_expr(var_v, var);
}
{
{ /* Inline parser_nodes#AIsaExpr#n_type (self) on <self:AIsaExpr> */
var6 = self->attrs[COLOR_nitc__parser_nodes__AIsaExpr___n_type].val; /* _n_type on <self:AIsaExpr> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2159);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nitc__typing___nitc__typing__TypeVisitor___resolve_mtype(var_v, var4);
}
var_mtype = var7;
{
{ /* Inline typing#AIsaExpr#cast_type= (self,var_mtype) on <self:AIsaExpr> */
self->attrs[COLOR_nitc__typing__AIsaExpr___cast_type].val = var_mtype; /* _cast_type on <self:AIsaExpr> */
RET_LABEL8:(void)0;
}
}
{
{ /* Inline parser_nodes#AIsaExpr#n_expr (self) on <self:AIsaExpr> */
var11 = self->attrs[COLOR_nitc__parser_nodes__AIsaExpr___n_expr].val; /* _n_expr on <self:AIsaExpr> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2153);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = ((val*(*)(val* self))(var9->class->vft[COLOR_nitc__typing__AExpr__its_variable]))(var9); /* its_variable on <var9:AExpr>*/
}
var_variable = var12;
if (var_variable == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_variable,((val*)NULL)) on <var_variable:nullable Variable> */
var_other = ((val*)NULL);
{
var16 = ((short int(*)(val* self, val* p0))(var_variable->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_variable, var_other); /* == on <var_variable:nullable Variable(Variable)>*/
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
{ /* Inline flow#AExpr#after_flow_context (self) on <self:AIsaExpr> */
var20 = self->attrs[COLOR_nitc__flow__AExpr___after_flow_context].val; /* _after_flow_context on <self:AIsaExpr> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (var18 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1619);
fatal_exit(1);
} else {
{ /* Inline flow#FlowContext#when_true (var18) on <var18:nullable FlowContext> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 225);
fatal_exit(1);
}
var23 = var18->attrs[COLOR_nitc__flow__FlowContext___when_true].val; /* _when_true on <var18:nullable FlowContext> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_true");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 225);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
nitc__typing___FlowContext___set_var(var21, var_v, var_variable, var_mtype); /* Direct call typing#FlowContext#set_var on <var21:FlowContext>*/
}
} else {
}
{
var24 = nitc__typing___nitc__typing__TypeVisitor___type_bool(var_v, self);
}
{
{ /* Inline typing#AExpr#mtype= (self,var24) on <self:AIsaExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var24; /* _mtype on <self:AIsaExpr> */
RET_LABEL25:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AIsaExpr#accept_post_typing for (self: AIsaExpr, TypeVisitor) */
void nitc__typing___AIsaExpr___ANode__accept_post_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : AType */;
val* var5 /* : AType */;
val* var6 /* : nullable MType */;
var_v = p0;
{
{ /* Inline parser_nodes#AIsaExpr#n_expr (self) on <self:AIsaExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AIsaExpr___n_expr].val; /* _n_expr on <self:AIsaExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2153);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline parser_nodes#AIsaExpr#n_type (self) on <self:AIsaExpr> */
var5 = self->attrs[COLOR_nitc__parser_nodes__AIsaExpr___n_type].val; /* _n_type on <self:AIsaExpr> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2159);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = nitc__typing___nitc__typing__TypeVisitor___check_expr_cast(var_v, self, var, var3);
}
RET_LABEL:;
}
/* method typing#AAsCastExpr#accept_typing for (self: AAsCastExpr, TypeVisitor) */
void nitc__typing___AAsCastExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var4 /* : AType */;
val* var6 /* : AType */;
val* var7 /* : nullable MType */;
var_v = p0;
{
{ /* Inline parser_nodes#AAsCastForm#n_expr (self) on <self:AAsCastExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_expr].val; /* _n_expr on <self:AAsCastExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2586);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__typing___nitc__typing__TypeVisitor___visit_expr(var_v, var);
}
{
{ /* Inline parser_nodes#AAsCastExpr#n_type (self) on <self:AAsCastExpr> */
var6 = self->attrs[COLOR_nitc__parser_nodes__AAsCastExpr___n_type].val; /* _n_type on <self:AAsCastExpr> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2603);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nitc__typing___nitc__typing__TypeVisitor___resolve_mtype(var_v, var4);
}
{
{ /* Inline typing#AExpr#mtype= (self,var7) on <self:AAsCastExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var7; /* _mtype on <self:AAsCastExpr> */
RET_LABEL8:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AAsCastExpr#accept_post_typing for (self: AAsCastExpr, TypeVisitor) */
void nitc__typing___AAsCastExpr___ANode__accept_post_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : AType */;
val* var5 /* : AType */;
val* var6 /* : nullable MType */;
var_v = p0;
{
{ /* Inline parser_nodes#AAsCastForm#n_expr (self) on <self:AAsCastExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_expr].val; /* _n_expr on <self:AAsCastExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2586);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline parser_nodes#AAsCastExpr#n_type (self) on <self:AAsCastExpr> */
var5 = self->attrs[COLOR_nitc__parser_nodes__AAsCastExpr___n_type].val; /* _n_type on <self:AAsCastExpr> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2603);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = nitc__typing___nitc__typing__TypeVisitor___check_expr_cast(var_v, self, var, var3);
}
RET_LABEL:;
}
/* method typing#AAsNotnullExpr#accept_typing for (self: AAsNotnullExpr, TypeVisitor) */
void nitc__typing___AAsNotnullExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : String */;
short int var14 /* : Bool */;
val* var15 /* : MType */;
var_v = p0;
{
{ /* Inline parser_nodes#AAsCastForm#n_expr (self) on <self:AAsNotnullExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_expr].val; /* _n_expr on <self:AAsNotnullExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2586);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__typing___nitc__typing__TypeVisitor___visit_expr(var_v, var);
}
var_mtype = var3;
if (var_mtype == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var9 = var_mtype == var_other;
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
goto RET_LABEL;
} else {
}
/* <var_mtype:nullable MType(MType)> isa MNullType */
cltype = type_nitc__MNullType.color;
idtype = type_nitc__MNullType.id;
if(cltype >= var_mtype->type->table_size) {
var10 = 0;
} else {
var10 = var_mtype->type->type_table[cltype] == idtype;
}
if (var10){
if (likely(varonce!=NULL)) {
var11 = varonce;
} else {
var12 = "Type Error: `as(not null)` on `null`.";
var13 = core__flat___NativeString___to_s_full(var12, 37l, 37l);
var11 = var13;
varonce = var11;
}
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var11); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
var14 = nitc__typing___nitc__typing__TypeVisitor___can_be_null(var_v, var_mtype);
}
if (var14){
{
var15 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__as_notnull]))(var_mtype); /* as_notnull on <var_mtype:nullable MType(MType)>*/
}
var_mtype = var15;
} else {
}
{
{ /* Inline typing#AExpr#mtype= (self,var_mtype) on <self:AAsNotnullExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var_mtype; /* _mtype on <self:AAsNotnullExpr> */
RET_LABEL16:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AAsNotnullExpr#accept_post_typing for (self: AAsNotnullExpr, TypeVisitor) */
void nitc__typing___AAsNotnullExpr___ANode__accept_post_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : AExpr */;
val* var12 /* : AExpr */;
short int var13 /* : Bool */;
var_v = p0;
{
{ /* Inline parser_nodes#AAsCastForm#n_expr (self) on <self:AAsNotnullExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_expr].val; /* _n_expr on <self:AAsNotnullExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2586);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = ((val*(*)(val* self))(var->class->vft[COLOR_nitc__typing__AExpr__mtype]))(var); /* mtype on <var:AExpr>*/
}
var_mtype = var3;
if (var_mtype == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var9 = var_mtype == var_other;
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
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AAsCastForm#n_expr (self) on <self:AAsNotnullExpr> */
var12 = self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_expr].val; /* _n_expr on <self:AAsNotnullExpr> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2586);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = nitc__typing___nitc__typing__TypeVisitor___check_can_be_null(var_v, var10, var_mtype);
}
RET_LABEL:;
}
/* method typing#AParExpr#accept_typing for (self: AParExpr, TypeVisitor) */
void nitc__typing___AParExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
var_v = p0;
{
{ /* Inline parser_nodes#AParExpr#n_expr (self) on <self:AParExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AParExpr___n_expr].val; /* _n_expr on <self:AParExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2575);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__typing___nitc__typing__TypeVisitor___visit_expr(var_v, var);
}
{
{ /* Inline typing#AExpr#mtype= (self,var3) on <self:AParExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var3; /* _mtype on <self:AParExpr> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AOnceExpr#accept_typing for (self: AOnceExpr, TypeVisitor) */
void nitc__typing___AOnceExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
var_v = p0;
{
{ /* Inline parser_nodes#AOnceExpr#n_expr (self) on <self:AOnceExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AOnceExpr___n_expr].val; /* _n_expr on <self:AOnceExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2014);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__typing___nitc__typing__TypeVisitor___visit_expr(var_v, var);
}
{
{ /* Inline typing#AExpr#mtype= (self,var3) on <self:AOnceExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var3; /* _mtype on <self:AOnceExpr> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method typing#ASelfExpr#its_variable for (self: ASelfExpr): nullable Variable */
val* nitc__typing___ASelfExpr___AExpr__its_variable(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
var1 = self->attrs[COLOR_nitc__typing__ASelfExpr___its_variable].val; /* _its_variable on <self:ASelfExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ASelfExpr#its_variable= for (self: ASelfExpr, nullable Variable) */
void nitc__typing___ASelfExpr___its_variable_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__ASelfExpr___its_variable].val = p0; /* _its_variable on <self:ASelfExpr> */
RET_LABEL:;
}
/* method typing#ASelfExpr#accept_typing for (self: ASelfExpr, TypeVisitor) */
void nitc__typing___ASelfExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var_ /* var : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
short int var5 /* : Bool */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : String */;
val* var9 /* : Variable */;
val* var11 /* : Variable */;
val* var_variable /* var variable: Variable */;
val* var13 /* : nullable MType */;
var_v = p0;
{
{ /* Inline typing#TypeVisitor#is_toplevel_context (var_v) on <var_v:TypeVisitor> */
var3 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___is_toplevel_context].s; /* _is_toplevel_context on <var_v:TypeVisitor> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_ = var1;
if (var1){
/* <self:ASelfExpr> isa AImplicitSelfExpr */
cltype = type_nitc__AImplicitSelfExpr.color;
idtype = type_nitc__AImplicitSelfExpr.id;
if(cltype >= self->type->table_size) {
var4 = 0;
} else {
var4 = self->type->type_table[cltype] == idtype;
}
var5 = !var4;
var = var5;
} else {
var = var_;
}
if (var){
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "Error: `self` cannot be used in top-level method.";
var8 = core__flat___NativeString___to_s_full(var7, 49l, 49l);
var6 = var8;
varonce = var6;
}
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var6); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
} else {
}
{
{ /* Inline typing#TypeVisitor#selfvariable (var_v) on <var_v:TypeVisitor> */
var11 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___selfvariable].val; /* _selfvariable on <var_v:TypeVisitor> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _selfvariable");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 51);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_variable = var9;
{
{ /* Inline typing#ASelfExpr#its_variable= (self,var_variable) on <self:ASelfExpr> */
self->attrs[COLOR_nitc__typing__ASelfExpr___its_variable].val = var_variable; /* _its_variable on <self:ASelfExpr> */
RET_LABEL12:(void)0;
}
}
{
var13 = nitc__typing___nitc__typing__TypeVisitor___get_variable(var_v, self, var_variable);
}
{
{ /* Inline typing#AExpr#mtype= (self,var13) on <self:ASelfExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var13; /* _mtype on <self:ASelfExpr> */
RET_LABEL14:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AImplicitSelfExpr#is_sys for (self: AImplicitSelfExpr): Bool */
short int nitc__typing___AImplicitSelfExpr___is_sys(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__typing__AImplicitSelfExpr___is_sys].s; /* _is_sys on <self:AImplicitSelfExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AImplicitSelfExpr#is_sys= for (self: AImplicitSelfExpr, Bool) */
void nitc__typing___AImplicitSelfExpr___is_sys_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__typing__AImplicitSelfExpr___is_sys].s = p0; /* _is_sys on <self:AImplicitSelfExpr> */
RET_LABEL:;
}
/* method typing#ASendExpr#callsite for (self: ASendExpr): nullable CallSite */
val* nitc__typing___ASendExpr___callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nitc__typing__ASendExpr___callsite].val; /* _callsite on <self:ASendExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ASendExpr#callsite= for (self: ASendExpr, nullable CallSite) */
void nitc__typing___ASendExpr___callsite_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__ASendExpr___callsite].val = p0; /* _callsite on <self:ASendExpr> */
RET_LABEL:;
}
/* method typing#ASendExpr#accept_typing for (self: ASendExpr, TypeVisitor) */
void nitc__typing___ASendExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var_nrecv /* var nrecv: AExpr */;
val* var3 /* : nullable MType */;
val* var_recvtype /* var recvtype: nullable MType */;
val* var4 /* : String */;
val* var_name /* var name: String */;
val* var5 /* : ANode */;
val* var_node /* var node: ANode */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
val* var_callsite /* var callsite: nullable Object */;
val* var12 /* : MType */;
val* var_unsafe_type /* var unsafe_type: MType */;
val* var13 /* : nullable MProperty */;
val* var_mproperty /* var mproperty: nullable MProperty */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var_ /* var : Bool */;
short int var21 /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var22 /* : String */;
char* var23 /* : NativeString */;
val* var24 /* : String */;
val* var25 /* : nullable MClass */;
val* var_sysclass /* var sysclass: nullable MClass */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
val* var_other29 /* var other: nullable Object */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var32 /* : MClassType */;
val* var34 /* : MClassType */;
val* var_systype /* var systype: MClassType */;
val* var35 /* : nullable MProperty */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
val* var41 /* : nullable CallSite */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
val* var60 /* : nullable CallSite */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
val* var68 /* : MSignature */;
val* var70 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var71 /* : Array[AExpr] */;
val* var_args /* var args: Array[AExpr] */;
short int var72 /* : Bool */;
val* var73 /* : MMethod */;
val* var75 /* : MMethod */;
short int var76 /* : Bool */;
short int var78 /* : Bool */;
val* var79 /* : nullable MPropDef */;
val* var81 /* : nullable MPropDef */;
val* var_vmpropdef /* var vmpropdef: nullable MPropDef */;
short int var82 /* : Bool */;
short int var83 /* : Bool */;
int cltype84;
int idtype85;
short int var_86 /* var : Bool */;
val* var87 /* : MProperty */;
val* var89 /* : MProperty */;
short int var90 /* : Bool */;
short int var92 /* : Bool */;
short int var93 /* : Bool */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : NativeString */;
val* var97 /* : String */;
short int var98 /* : Bool */;
short int var99 /* : Bool */;
short int var100 /* : Bool */;
int cltype101;
int idtype102;
short int var_103 /* var : Bool */;
val* var104 /* : MProperty */;
val* var106 /* : MProperty */;
short int var107 /* : Bool */;
short int var109 /* : Bool */;
short int var_110 /* var : Bool */;
val* var111 /* : MMethod */;
val* var113 /* : MMethod */;
short int var114 /* : Bool */;
short int var116 /* : Bool */;
short int var117 /* : Bool */;
val* var119 /* : NativeArray[String] */;
static val* varonce118;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : NativeString */;
val* var123 /* : String */;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : NativeString */;
val* var127 /* : String */;
static val* varonce128;
val* var129 /* : String */;
char* var130 /* : NativeString */;
val* var131 /* : String */;
val* var132 /* : String */;
val* var133 /* : MMethod */;
val* var135 /* : MMethod */;
val* var136 /* : String */;
val* var137 /* : String */;
val* var138 /* : nullable MType */;
val* var140 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
short int var141 /* : Bool */;
short int var142 /* : Bool */;
short int var144 /* : Bool */;
short int var145 /* : Bool */;
var_v = p0;
{
{ /* Inline parser_nodes#ASendExpr#n_expr (self) on <self:ASendExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASendExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2022);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_nrecv = var;
{
var3 = nitc__typing___nitc__typing__TypeVisitor___visit_expr(var_v, var_nrecv);
}
var_recvtype = var3;
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__typing__ASendExpr__property_name]))(self); /* property_name on <self:ASendExpr>*/
}
var_name = var4;
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__typing__ASendExpr__property_node]))(self); /* property_node on <self:ASendExpr>*/
}
var_node = var5;
if (var_recvtype == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_recvtype,((val*)NULL)) on <var_recvtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_recvtype,var_other) on <var_recvtype:nullable MType(MType)> */
var11 = var_recvtype == var_other;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (var6){
goto RET_LABEL;
} else {
}
var_callsite = ((val*)NULL);
{
var12 = nitc__typing___nitc__typing__TypeVisitor___anchor_to(var_v, var_recvtype);
}
var_unsafe_type = var12;
{
var13 = nitc__typing___nitc__typing__TypeVisitor___try_get_mproperty_by_name2(var_v, var_node, var_unsafe_type, var_name);
}
var_mproperty = var13;
if (var_mproperty == NULL) {
var15 = 1; /* is null */
} else {
var15 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mproperty,((val*)NULL)) on <var_mproperty:nullable MProperty> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mproperty,var_other) on <var_mproperty:nullable MProperty(MProperty)> */
var20 = var_mproperty == var_other;
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
var_ = var15;
if (var15){
/* <var_nrecv:AExpr> isa AImplicitSelfExpr */
cltype = type_nitc__AImplicitSelfExpr.color;
idtype = type_nitc__AImplicitSelfExpr.id;
if(cltype >= var_nrecv->type->table_size) {
var21 = 0;
} else {
var21 = var_nrecv->type->type_table[cltype] == idtype;
}
var14 = var21;
} else {
var14 = var_;
}
if (var14){
if (likely(varonce!=NULL)) {
var22 = varonce;
} else {
var23 = "Sys";
var24 = core__flat___NativeString___to_s_full(var23, 3l, 3l);
var22 = var24;
varonce = var22;
}
{
var25 = nitc__typing___nitc__typing__TypeVisitor___try_get_mclass(var_v, var_node, var22);
}
var_sysclass = var25;
if (var_sysclass == NULL) {
var26 = 0; /* is null */
} else {
var26 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_sysclass,((val*)NULL)) on <var_sysclass:nullable MClass> */
var_other29 = ((val*)NULL);
{
var30 = ((short int(*)(val* self, val* p0))(var_sysclass->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_sysclass, var_other29); /* == on <var_sysclass:nullable MClass(MClass)>*/
}
var31 = !var30;
var27 = var31;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
var26 = var27;
}
if (var26){
{
{ /* Inline model#MClass#mclass_type (var_sysclass) on <var_sysclass:nullable MClass(MClass)> */
var34 = var_sysclass->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_sysclass:nullable MClass(MClass)> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 507);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
var_systype = var32;
{
var35 = nitc__typing___nitc__typing__TypeVisitor___try_get_mproperty_by_name2(var_v, var_node, var_systype, var_name);
}
var_mproperty = var35;
if (var_mproperty == NULL) {
var36 = 0; /* is null */
} else {
var36 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mproperty,((val*)NULL)) on <var_mproperty:nullable MProperty> */
var_other29 = ((val*)NULL);
{
var39 = ((short int(*)(val* self, val* p0))(var_mproperty->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mproperty, var_other29); /* == on <var_mproperty:nullable MProperty(MProperty)>*/
}
var40 = !var39;
var37 = var40;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
var36 = var37;
}
if (var36){
{
var41 = nitc__typing___nitc__typing__TypeVisitor___get_method(var_v, var_node, var_systype, var_name, 0);
}
var_callsite = var41;
if (var_callsite == NULL) {
var42 = 1; /* is null */
} else {
var42 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_callsite,((val*)NULL)) on <var_callsite:nullable Object(nullable CallSite)> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_callsite,var_other) on <var_callsite:nullable CallSite(CallSite)> */
var47 = var_callsite == var_other;
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
var42 = var43;
}
if (var42){
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#AImplicitSelfExpr#is_sys= (var_nrecv,1) on <var_nrecv:AExpr(AImplicitSelfExpr)> */
var_nrecv->attrs[COLOR_nitc__typing__AImplicitSelfExpr___is_sys].s = 1; /* _is_sys on <var_nrecv:AExpr(AImplicitSelfExpr)> */
RET_LABEL48:(void)0;
}
}
{
{ /* Inline typing#ASelfExpr#its_variable= (var_nrecv,((val*)NULL)) on <var_nrecv:AExpr(AImplicitSelfExpr)> */
var_nrecv->attrs[COLOR_nitc__typing__ASelfExpr___its_variable].val = ((val*)NULL); /* _its_variable on <var_nrecv:AExpr(AImplicitSelfExpr)> */
RET_LABEL49:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype= (var_nrecv,var_systype) on <var_nrecv:AExpr(AImplicitSelfExpr)> */
var_nrecv->attrs[COLOR_nitc__typing__AExpr___mtype].val = var_systype; /* _mtype on <var_nrecv:AExpr(AImplicitSelfExpr)> */
RET_LABEL50:(void)0;
}
}
var_recvtype = var_systype;
} else {
}
} else {
}
} else {
}
if (var_callsite == NULL) {
var51 = 1; /* is null */
} else {
var51 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_callsite,((val*)NULL)) on <var_callsite:nullable Object(nullable CallSite)> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_callsite,var_other) on <var_callsite:nullable CallSite(CallSite)> */
var56 = var_callsite == var_other;
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
var52 = var54;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
var51 = var52;
}
if (var51){
/* <var_nrecv:AExpr> isa ASelfExpr */
cltype58 = type_nitc__ASelfExpr.color;
idtype59 = type_nitc__ASelfExpr.id;
if(cltype58 >= var_nrecv->type->table_size) {
var57 = 0;
} else {
var57 = var_nrecv->type->type_table[cltype58] == idtype59;
}
{
var60 = nitc__typing___nitc__typing__TypeVisitor___get_method(var_v, var_node, var_recvtype, var_name, var57);
}
var_callsite = var60;
if (var_callsite == NULL) {
var61 = 1; /* is null */
} else {
var61 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_callsite,((val*)NULL)) on <var_callsite:nullable Object(nullable CallSite)> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_callsite,var_other) on <var_callsite:nullable CallSite(CallSite)> */
var66 = var_callsite == var_other;
var64 = var66;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
var62 = var64;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
var61 = var62;
}
if (var61){
goto RET_LABEL;
} else {
}
} else {
}
{
{ /* Inline typing#ASendExpr#callsite= (self,var_callsite) on <self:ASendExpr> */
self->attrs[COLOR_nitc__typing__ASendExpr___callsite].val = var_callsite; /* _callsite on <self:ASendExpr> */
RET_LABEL67:(void)0;
}
}
{
{ /* Inline typing#CallSite#msignature (var_callsite) on <var_callsite:nullable Object(CallSite)> */
var70 = var_callsite->attrs[COLOR_nitc__typing__CallSite___msignature].val; /* _msignature on <var_callsite:nullable Object(CallSite)> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 660);
fatal_exit(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
var_msignature = var68;
{
var71 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__typing__ASendExpr__compute_raw_arguments]))(self); /* compute_raw_arguments on <self:ASendExpr>*/
}
var_args = var71;
{
var72 = nitc___nitc__CallSite___check_signature(var_callsite, var_v, var_node, var_args);
}
{
{ /* Inline typing#CallSite#mproperty (var_callsite) on <var_callsite:nullable Object(CallSite)> */
var75 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:nullable Object(CallSite)> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 653);
fatal_exit(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
{ /* Inline model#MMethod#is_init (var73) on <var73:MMethod> */
var78 = var73->attrs[COLOR_nitc__model__MMethod___is_init].s; /* _is_init on <var73:MMethod> */
var76 = var78;
RET_LABEL77:(void)0;
}
}
if (var76){
{
{ /* Inline typing#TypeVisitor#mpropdef (var_v) on <var_v:TypeVisitor> */
var81 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___mpropdef].val; /* _mpropdef on <var_v:TypeVisitor> */
var79 = var81;
RET_LABEL80:(void)0;
}
}
var_vmpropdef = var79;
/* <var_vmpropdef:nullable MPropDef> isa MMethodDef */
cltype84 = type_nitc__MMethodDef.color;
idtype85 = type_nitc__MMethodDef.id;
if(var_vmpropdef == NULL) {
var83 = 0;
} else {
if(cltype84 >= var_vmpropdef->type->table_size) {
var83 = 0;
} else {
var83 = var_vmpropdef->type->type_table[cltype84] == idtype85;
}
}
var_86 = var83;
if (var83){
{
{ /* Inline model#MPropDef#mproperty (var_vmpropdef) on <var_vmpropdef:nullable MPropDef(MMethodDef)> */
var89 = var_vmpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_vmpropdef:nullable MPropDef(MMethodDef)> */
if (unlikely(var89 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var87 = var89;
RET_LABEL88:(void)0;
}
}
{
{ /* Inline model#MMethod#is_init (var87) on <var87:MProperty(MMethod)> */
var92 = var87->attrs[COLOR_nitc__model__MMethod___is_init].s; /* _is_init on <var87:MProperty(MMethod)> */
var90 = var92;
RET_LABEL91:(void)0;
}
}
var82 = var90;
} else {
var82 = var_86;
}
var93 = !var82;
if (var93){
if (likely(varonce94!=NULL)) {
var95 = varonce94;
} else {
var96 = "Error: an `init` can only be called from another `init`.";
var97 = core__flat___NativeString___to_s_full(var96, 56l, 56l);
var95 = var97;
varonce94 = var95;
}
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, var_node, var95); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
} else {
}
/* <var_vmpropdef:nullable MPropDef> isa MMethodDef */
cltype101 = type_nitc__MMethodDef.color;
idtype102 = type_nitc__MMethodDef.id;
if(var_vmpropdef == NULL) {
var100 = 0;
} else {
if(cltype101 >= var_vmpropdef->type->table_size) {
var100 = 0;
} else {
var100 = var_vmpropdef->type->type_table[cltype101] == idtype102;
}
}
var_103 = var100;
if (var100){
{
{ /* Inline model#MPropDef#mproperty (var_vmpropdef) on <var_vmpropdef:nullable MPropDef(MMethodDef)> */
var106 = var_vmpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_vmpropdef:nullable MPropDef(MMethodDef)> */
if (unlikely(var106 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var104 = var106;
RET_LABEL105:(void)0;
}
}
{
{ /* Inline model#MMethod#is_root_init (var104) on <var104:MProperty(MMethod)> */
var109 = var104->attrs[COLOR_nitc__model__MMethod___is_root_init].s; /* _is_root_init on <var104:MProperty(MMethod)> */
var107 = var109;
RET_LABEL108:(void)0;
}
}
var99 = var107;
} else {
var99 = var_103;
}
var_110 = var99;
if (var99){
{
{ /* Inline typing#CallSite#mproperty (var_callsite) on <var_callsite:nullable Object(CallSite)> */
var113 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:nullable Object(CallSite)> */
if (unlikely(var113 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 653);
fatal_exit(1);
}
var111 = var113;
RET_LABEL112:(void)0;
}
}
{
{ /* Inline model#MMethod#is_root_init (var111) on <var111:MMethod> */
var116 = var111->attrs[COLOR_nitc__model__MMethod___is_root_init].s; /* _is_root_init on <var111:MMethod> */
var114 = var116;
RET_LABEL115:(void)0;
}
}
var117 = !var114;
var98 = var117;
} else {
var98 = var_110;
}
if (var98){
if (unlikely(varonce118==NULL)) {
var119 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce120!=NULL)) {
var121 = varonce120;
} else {
var122 = "Error: `";
var123 = core__flat___NativeString___to_s_full(var122, 8l, 8l);
var121 = var123;
varonce120 = var121;
}
((struct instance_core__NativeArray*)var119)->values[0]=var121;
if (likely(varonce124!=NULL)) {
var125 = varonce124;
} else {
var126 = "` cannot call a factory `";
var127 = core__flat___NativeString___to_s_full(var126, 25l, 25l);
var125 = var127;
varonce124 = var125;
}
((struct instance_core__NativeArray*)var119)->values[2]=var125;
if (likely(varonce128!=NULL)) {
var129 = varonce128;
} else {
var130 = "`.";
var131 = core__flat___NativeString___to_s_full(var130, 2l, 2l);
var129 = var131;
varonce128 = var129;
}
((struct instance_core__NativeArray*)var119)->values[4]=var129;
} else {
var119 = varonce118;
varonce118 = NULL;
}
{
var132 = ((val*(*)(val* self))(var_vmpropdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_vmpropdef); /* to_s on <var_vmpropdef:nullable MPropDef(MMethodDef)>*/
}
((struct instance_core__NativeArray*)var119)->values[1]=var132;
{
{ /* Inline typing#CallSite#mproperty (var_callsite) on <var_callsite:nullable Object(CallSite)> */
var135 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:nullable Object(CallSite)> */
if (unlikely(var135 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 653);
fatal_exit(1);
}
var133 = var135;
RET_LABEL134:(void)0;
}
}
{
var136 = ((val*(*)(val* self))(var133->class->vft[COLOR_core__abstract_text__Object__to_s]))(var133); /* to_s on <var133:MMethod>*/
}
((struct instance_core__NativeArray*)var119)->values[3]=var136;
{
var137 = ((val*(*)(val* self))(var119->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var119); /* native_to_s on <var119:NativeArray[String]>*/
}
varonce118 = var119;
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, var_node, var137); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
} else {
}
} else {
}
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:MSignature> */
var140 = var_msignature->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:MSignature> */
var138 = var140;
RET_LABEL139:(void)0;
}
}
var_ret = var138;
if (var_ret == NULL) {
var141 = 0; /* is null */
} else {
var141 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other29 = ((val*)NULL);
{
var144 = ((short int(*)(val* self, val* p0))(var_ret->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ret, var_other29); /* == on <var_ret:nullable MType(MType)>*/
}
var145 = !var144;
var142 = var145;
goto RET_LABEL143;
RET_LABEL143:(void)0;
}
var141 = var142;
}
if (var141){
{
{ /* Inline typing#AExpr#mtype= (self,var_ret) on <self:ASendExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var_ret; /* _mtype on <self:ASendExpr> */
RET_LABEL146:(void)0;
}
}
} else {
{
{ /* Inline typing#AExpr#is_typed= (self,1) on <self:ASendExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = 1; /* _is_typed on <self:ASendExpr> */
RET_LABEL147:(void)0;
}
}
}
RET_LABEL:;
}
/* method typing#ASendExpr#property_node for (self: ASendExpr): ANode */
val* nitc__typing___ASendExpr___property_node(val* self) {
val* var /* : ANode */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ASendExpr#raw_arguments for (self: ASendExpr): Array[AExpr] */
val* nitc__typing___ASendExpr___raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : Array[AExpr] */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__typing__ASendExpr__compute_raw_arguments]))(self); /* compute_raw_arguments on <self:ASendExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ABinopExpr#compute_raw_arguments for (self: ABinopExpr): Array[AExpr] */
val* nitc__typing___ABinopExpr___ASendExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : Array[AExpr] */;
val* var_ /* var : Array[AExpr] */;
val* var2 /* : AExpr */;
val* var4 /* : AExpr */;
var1 = NEW_core__Array(&type_core__Array__nitc__AExpr);
{
core___core__Array___with_capacity(var1, 1l); /* Direct call array#Array#with_capacity on <var1:Array[AExpr]>*/
}
var_ = var1;
{
{ /* Inline parser_nodes#ABinopExpr#n_expr2 (self) on <self:ABinopExpr> */
var4 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ABinopExpr> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2033);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var2); /* Direct call array#AbstractArray#push on <var_:Array[AExpr]>*/
}
var = var_;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ABinopExpr#property_name for (self: ABinopExpr): String */
val* nitc__typing___ABinopExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__parser_nodes__ABinopExpr__operator]))(self); /* operator on <self:ABinopExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ABinopExpr#property_node for (self: ABinopExpr): ANode */
val* nitc__typing___ABinopExpr___ASendExpr__property_node(val* self) {
val* var /* : ANode */;
val* var1 /* : Token */;
val* var3 /* : Token */;
{
{ /* Inline parser_nodes#ABinopExpr#n_op (self) on <self:ABinopExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:ABinopExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2030);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AEqFormExpr#accept_typing for (self: AEqFormExpr, TypeVisitor) */
void nitc__typing___AEqFormExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__typing___AEqFormExpr___AExpr__accept_typing]))(self, p0); /* accept_typing on <self:AEqFormExpr>*/
}
{
nitc__typing___nitc__typing__TypeVisitor___null_test(var_v, self); /* Direct call typing#TypeVisitor#null_test on <var_v:TypeVisitor>*/
}
RET_LABEL:;
}
/* method typing#AEqFormExpr#accept_post_typing for (self: AEqFormExpr, TypeVisitor) */
void nitc__typing___AEqFormExpr___ANode__accept_post_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var4 /* : AExpr */;
val* var6 /* : AExpr */;
val* var7 /* : nullable MType */;
val* var_mtype2 /* var mtype2: nullable MType */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var_ /* var : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
int cltype;
int idtype;
short int var22 /* : Bool */;
val* var23 /* : AExpr */;
val* var25 /* : AExpr */;
short int var26 /* : Bool */;
var_v = p0;
{
{ /* Inline parser_nodes#ASendExpr#n_expr (self) on <self:AEqFormExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AEqFormExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2022);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = ((val*(*)(val* self))(var->class->vft[COLOR_nitc__typing__AExpr__mtype]))(var); /* mtype on <var:AExpr>*/
}
var_mtype = var3;
{
{ /* Inline parser_nodes#ABinopExpr#n_expr2 (self) on <self:AEqFormExpr> */
var6 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AEqFormExpr> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2033);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = ((val*(*)(val* self))(var4->class->vft[COLOR_nitc__typing__AExpr__mtype]))(var4); /* mtype on <var4:AExpr>*/
}
var_mtype2 = var7;
if (var_mtype == NULL) {
var9 = 1; /* is null */
} else {
var9 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var14 = var_mtype == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
var_ = var9;
if (var9){
var8 = var_;
} else {
if (var_mtype2 == NULL) {
var15 = 1; /* is null */
} else {
var15 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype2,((val*)NULL)) on <var_mtype2:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype2,var_other) on <var_mtype2:nullable MType(MType)> */
var20 = var_mtype2 == var_other;
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
var8 = var15;
}
if (var8){
goto RET_LABEL;
} else {
}
/* <var_mtype2:nullable MType(MType)> isa MNullType */
cltype = type_nitc__MNullType.color;
idtype = type_nitc__MNullType.id;
if(cltype >= var_mtype2->type->table_size) {
var21 = 0;
} else {
var21 = var_mtype2->type->type_table[cltype] == idtype;
}
var22 = !var21;
if (var22){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ASendExpr#n_expr (self) on <self:AEqFormExpr> */
var25 = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AEqFormExpr> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2022);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = nitc__typing___nitc__typing__TypeVisitor___check_can_be_null(var_v, var23, var_mtype);
}
RET_LABEL:;
}
/* method typing#AUnaryopExpr#property_name for (self: AUnaryopExpr): String */
val* nitc__typing___AUnaryopExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : String */;
val* var6 /* : String */;
val* var7 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "unary ";
var5 = core__flat___NativeString___to_s_full(var4, 6l, 6l);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[0]=var3;
} else {
var1 = varonce;
varonce = NULL;
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__parser_nodes__AUnaryopExpr__operator]))(self); /* operator on <self:AUnaryopExpr>*/
}
((struct instance_core__NativeArray*)var1)->values[1]=var6;
{
var7 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AUnaryopExpr#compute_raw_arguments for (self: AUnaryopExpr): Array[AExpr] */
val* nitc__typing___AUnaryopExpr___ASendExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : Array[AExpr] */;
var1 = NEW_core__Array(&type_core__Array__nitc__AExpr);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[AExpr]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ACallExpr#property_name for (self: ACallExpr): String */
val* nitc__typing___ACallExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : AQid */;
val* var3 /* : AQid */;
val* var4 /* : TId */;
val* var6 /* : TId */;
val* var7 /* : String */;
{
{ /* Inline parser_nodes#ACallFormExpr#n_qid (self) on <self:ACallExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ACallFormExpr___n_qid].val; /* _n_qid on <self:ACallExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_qid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2296);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline parser_nodes#AQid#n_id (var1) on <var1:AQid> */
var6 = var1->attrs[COLOR_nitc__parser_nodes__AQid___n_id].val; /* _n_id on <var1:AQid> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1658);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nitc__lexer_work___Token___text(var4);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ACallExpr#property_node for (self: ACallExpr): ANode */
val* nitc__typing___ACallExpr___ASendExpr__property_node(val* self) {
val* var /* : ANode */;
val* var1 /* : AQid */;
val* var3 /* : AQid */;
{
{ /* Inline parser_nodes#ACallFormExpr#n_qid (self) on <self:ACallExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ACallFormExpr___n_qid].val; /* _n_qid on <self:ACallExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_qid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2296);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ACallExpr#compute_raw_arguments for (self: ACallExpr): Array[AExpr] */
val* nitc__typing___ACallExpr___ASendExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : AExprs */;
val* var3 /* : AExprs */;
val* var4 /* : Array[AExpr] */;
{
{ /* Inline parser_nodes#ACallFormExpr#n_args (self) on <self:ACallExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2299);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc__typing___AExprs___to_a(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ACallAssignExpr#property_name for (self: ACallAssignExpr): String */
val* nitc__typing___ACallAssignExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : AQid */;
val* var3 /* : AQid */;
val* var4 /* : TId */;
val* var6 /* : TId */;
val* var7 /* : String */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : String */;
val* var11 /* : String */;
{
{ /* Inline parser_nodes#ACallFormExpr#n_qid (self) on <self:ACallAssignExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ACallFormExpr___n_qid].val; /* _n_qid on <self:ACallAssignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_qid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2296);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline parser_nodes#AQid#n_id (var1) on <var1:AQid> */
var6 = var1->attrs[COLOR_nitc__parser_nodes__AQid___n_id].val; /* _n_id on <var1:AQid> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1658);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nitc__lexer_work___Token___text(var4);
}
if (likely(varonce!=NULL)) {
var8 = varonce;
} else {
var9 = "=";
var10 = core__flat___NativeString___to_s_full(var9, 1l, 1l);
var8 = var10;
varonce = var8;
}
{
var11 = ((val*(*)(val* self, val* p0))(var7->class->vft[COLOR_core__abstract_text__String___43d]))(var7, var8); /* + on <var7:String>*/
}
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ACallAssignExpr#property_node for (self: ACallAssignExpr): ANode */
val* nitc__typing___ACallAssignExpr___ASendExpr__property_node(val* self) {
val* var /* : ANode */;
val* var1 /* : AQid */;
val* var3 /* : AQid */;
{
{ /* Inline parser_nodes#ACallFormExpr#n_qid (self) on <self:ACallAssignExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ACallFormExpr___n_qid].val; /* _n_qid on <self:ACallAssignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_qid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2296);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ACallAssignExpr#compute_raw_arguments for (self: ACallAssignExpr): Array[AExpr] */
val* nitc__typing___ACallAssignExpr___ASendExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : AExprs */;
val* var3 /* : AExprs */;
val* var4 /* : Array[AExpr] */;
val* var_res /* var res: Array[AExpr] */;
val* var5 /* : AExpr */;
val* var7 /* : AExpr */;
{
{ /* Inline parser_nodes#ACallFormExpr#n_args (self) on <self:ACallAssignExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallAssignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2299);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc__typing___AExprs___to_a(var1);
}
var_res = var4;
{
{ /* Inline parser_nodes#AAssignFormExpr#n_value (self) on <self:ACallAssignExpr> */
var7 = self->attrs[COLOR_nitc__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:ACallAssignExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1992);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var5); /* Direct call array#Array#add on <var_res:Array[AExpr]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ABraExpr#property_name for (self: ABraExpr): String */
val* nitc__typing___ABraExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : String */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "[]";
var3 = core__flat___NativeString___to_s_full(var2, 2l, 2l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ABraExpr#compute_raw_arguments for (self: ABraExpr): Array[AExpr] */
val* nitc__typing___ABraExpr___ASendExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : AExprs */;
val* var3 /* : AExprs */;
val* var4 /* : Array[AExpr] */;
{
{ /* Inline parser_nodes#ABraFormExpr#n_args (self) on <self:ABraExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2368);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc__typing___AExprs___to_a(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ABraAssignExpr#property_name for (self: ABraAssignExpr): String */
val* nitc__typing___ABraAssignExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : String */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "[]=";
var3 = core__flat___NativeString___to_s_full(var2, 3l, 3l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ABraAssignExpr#compute_raw_arguments for (self: ABraAssignExpr): Array[AExpr] */
val* nitc__typing___ABraAssignExpr___ASendExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : AExprs */;
val* var3 /* : AExprs */;
val* var4 /* : Array[AExpr] */;
val* var_res /* var res: Array[AExpr] */;
val* var5 /* : AExpr */;
val* var7 /* : AExpr */;
{
{ /* Inline parser_nodes#ABraFormExpr#n_args (self) on <self:ABraAssignExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraAssignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2368);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc__typing___AExprs___to_a(var1);
}
var_res = var4;
{
{ /* Inline parser_nodes#AAssignFormExpr#n_value (self) on <self:ABraAssignExpr> */
var7 = self->attrs[COLOR_nitc__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:ABraAssignExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1992);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var5); /* Direct call array#Array#add on <var_res:Array[AExpr]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ASendReassignFormExpr#write_callsite for (self: ASendReassignFormExpr): nullable CallSite */
val* nitc__typing___ASendReassignFormExpr___write_callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nitc__typing__ASendReassignFormExpr___write_callsite].val; /* _write_callsite on <self:ASendReassignFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ASendReassignFormExpr#write_callsite= for (self: ASendReassignFormExpr, nullable CallSite) */
void nitc__typing___ASendReassignFormExpr___write_callsite_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__ASendReassignFormExpr___write_callsite].val = p0; /* _write_callsite on <self:ASendReassignFormExpr> */
RET_LABEL:;
}
/* method typing#ASendReassignFormExpr#accept_typing for (self: ASendReassignFormExpr, TypeVisitor) */
void nitc__typing___ASendReassignFormExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var_recvtype /* var recvtype: nullable MType */;
val* var4 /* : String */;
val* var_name /* var name: String */;
val* var5 /* : ANode */;
val* var_node /* var node: ANode */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : AExpr */;
val* var14 /* : AExpr */;
short int var15 /* : Bool */;
int cltype;
int idtype;
short int var_for_self /* var for_self: Bool */;
val* var16 /* : nullable CallSite */;
val* var_callsite /* var callsite: nullable CallSite */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
val* var24 /* : Array[AExpr] */;
val* var_args /* var args: Array[AExpr] */;
short int var25 /* : Bool */;
val* var26 /* : MSignature */;
val* var28 /* : MSignature */;
val* var29 /* : nullable MType */;
val* var31 /* : nullable MType */;
val* var_readtype /* var readtype: nullable MType */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
val* var38 /* : NativeArray[String] */;
static val* varonce;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
val* var42 /* : String */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
val* var46 /* : String */;
val* var47 /* : String */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
val* var51 /* : String */;
val* var52 /* : String */;
val* var53 /* : AExpr */;
val* var55 /* : AExpr */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
val* var59 /* : nullable CallSite */;
val* var_wcallsite /* var wcallsite: nullable CallSite */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
short int var63 /* : Bool */;
short int var65 /* : Bool */;
val* var67 /* : MSignature */;
val* var69 /* : MSignature */;
val* var70 /* : Array[MParameter] */;
val* var72 /* : Array[MParameter] */;
val* var73 /* : nullable Object */;
val* var74 /* : MType */;
val* var76 /* : MType */;
val* var77 /* : nullable MType */;
val* var_wtype /* var wtype: nullable MType */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
short int var81 /* : Bool */;
short int var83 /* : Bool */;
val* var84 /* : Array[nullable Object] */;
val* var85 /* : AExpr */;
val* var87 /* : AExpr */;
short int var88 /* : Bool */;
var_v = p0;
{
{ /* Inline parser_nodes#ASendExpr#n_expr (self) on <self:ASendReassignFormExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASendReassignFormExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2022);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__typing___nitc__typing__TypeVisitor___visit_expr(var_v, var);
}
var_recvtype = var3;
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__typing__ASendExpr__property_name]))(self); /* property_name on <self:ASendReassignFormExpr>*/
}
var_name = var4;
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__typing__ASendExpr__property_node]))(self); /* property_node on <self:ASendReassignFormExpr>*/
}
var_node = var5;
if (var_recvtype == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_recvtype,((val*)NULL)) on <var_recvtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_recvtype,var_other) on <var_recvtype:nullable MType(MType)> */
var11 = var_recvtype == var_other;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (var6){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ASendExpr#n_expr (self) on <self:ASendReassignFormExpr> */
var14 = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASendReassignFormExpr> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2022);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
/* <var12:AExpr> isa ASelfExpr */
cltype = type_nitc__ASelfExpr.color;
idtype = type_nitc__ASelfExpr.id;
if(cltype >= var12->type->table_size) {
var15 = 0;
} else {
var15 = var12->type->type_table[cltype] == idtype;
}
var_for_self = var15;
{
var16 = nitc__typing___nitc__typing__TypeVisitor___get_method(var_v, var_node, var_recvtype, var_name, var_for_self);
}
var_callsite = var16;
if (var_callsite == NULL) {
var17 = 1; /* is null */
} else {
var17 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_callsite,((val*)NULL)) on <var_callsite:nullable CallSite> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_callsite,var_other) on <var_callsite:nullable CallSite(CallSite)> */
var22 = var_callsite == var_other;
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
var17 = var18;
}
if (var17){
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#ASendExpr#callsite= (self,var_callsite) on <self:ASendReassignFormExpr> */
self->attrs[COLOR_nitc__typing__ASendExpr___callsite].val = var_callsite; /* _callsite on <self:ASendReassignFormExpr> */
RET_LABEL23:(void)0;
}
}
{
var24 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__typing__ASendExpr__compute_raw_arguments]))(self); /* compute_raw_arguments on <self:ASendReassignFormExpr>*/
}
var_args = var24;
{
var25 = nitc___nitc__CallSite___check_signature(var_callsite, var_v, var_node, var_args);
}
{
{ /* Inline typing#CallSite#msignature (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var28 = var_callsite->attrs[COLOR_nitc__typing__CallSite___msignature].val; /* _msignature on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 660);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline model#MSignature#return_mtype (var26) on <var26:MSignature> */
var31 = var26->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var26:MSignature> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
var_readtype = var29;
if (var_readtype == NULL) {
var32 = 1; /* is null */
} else {
var32 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_readtype,((val*)NULL)) on <var_readtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_readtype,var_other) on <var_readtype:nullable MType(MType)> */
var37 = var_readtype == var_other;
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
var32 = var33;
}
if (var32){
if (unlikely(varonce==NULL)) {
var38 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = "Error: `";
var42 = core__flat___NativeString___to_s_full(var41, 8l, 8l);
var40 = var42;
varonce39 = var40;
}
((struct instance_core__NativeArray*)var38)->values[0]=var40;
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "` is not a function.";
var46 = core__flat___NativeString___to_s_full(var45, 20l, 20l);
var44 = var46;
varonce43 = var44;
}
((struct instance_core__NativeArray*)var38)->values[2]=var44;
} else {
var38 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var38)->values[1]=var_name;
{
var47 = ((val*(*)(val* self))(var38->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var38); /* native_to_s on <var38:NativeArray[String]>*/
}
varonce = var38;
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, var_node, var47); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = "=";
var51 = core__flat___NativeString___to_s_full(var50, 1l, 1l);
var49 = var51;
varonce48 = var49;
}
{
var52 = ((val*(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__abstract_text__String___43d]))(var_name, var49); /* + on <var_name:String>*/
}
{
{ /* Inline parser_nodes#ASendExpr#n_expr (self) on <self:ASendReassignFormExpr> */
var55 = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASendReassignFormExpr> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2022);
fatal_exit(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
/* <var53:AExpr> isa ASelfExpr */
cltype57 = type_nitc__ASelfExpr.color;
idtype58 = type_nitc__ASelfExpr.id;
if(cltype57 >= var53->type->table_size) {
var56 = 0;
} else {
var56 = var53->type->type_table[cltype57] == idtype58;
}
{
var59 = nitc__typing___nitc__typing__TypeVisitor___get_method(var_v, var_node, var_recvtype, var52, var56);
}
var_wcallsite = var59;
if (var_wcallsite == NULL) {
var60 = 1; /* is null */
} else {
var60 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_wcallsite,((val*)NULL)) on <var_wcallsite:nullable CallSite> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_wcallsite,var_other) on <var_wcallsite:nullable CallSite(CallSite)> */
var65 = var_wcallsite == var_other;
var63 = var65;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
var61 = var63;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
var60 = var61;
}
if (var60){
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#ASendReassignFormExpr#write_callsite= (self,var_wcallsite) on <self:ASendReassignFormExpr> */
self->attrs[COLOR_nitc__typing__ASendReassignFormExpr___write_callsite].val = var_wcallsite; /* _write_callsite on <self:ASendReassignFormExpr> */
RET_LABEL66:(void)0;
}
}
{
{ /* Inline typing#CallSite#msignature (var_wcallsite) on <var_wcallsite:nullable CallSite(CallSite)> */
var69 = var_wcallsite->attrs[COLOR_nitc__typing__CallSite___msignature].val; /* _msignature on <var_wcallsite:nullable CallSite(CallSite)> */
if (unlikely(var69 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 660);
fatal_exit(1);
}
var67 = var69;
RET_LABEL68:(void)0;
}
}
{
{ /* Inline model#MSignature#mparameters (var67) on <var67:MSignature> */
var72 = var67->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var67:MSignature> */
if (unlikely(var72 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1783);
fatal_exit(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
{
var73 = core___core__SequenceRead___last(var70);
}
{
{ /* Inline model#MParameter#mtype (var73) on <var73:nullable Object(MParameter)> */
var76 = var73->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var73:nullable Object(MParameter)> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1900);
fatal_exit(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
var77 = nitc__typing___AReassignFormExpr___resolve_reassignment(self, var_v, var_readtype, var74);
}
var_wtype = var77;
if (var_wtype == NULL) {
var78 = 1; /* is null */
} else {
var78 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_wtype,((val*)NULL)) on <var_wtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_wtype,var_other) on <var_wtype:nullable MType(MType)> */
var83 = var_wtype == var_other;
var81 = var83;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
}
var79 = var81;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
var78 = var79;
}
if (var78){
goto RET_LABEL;
} else {
}
{
var84 = core__array___Collection___to_a(var_args);
}
var_args = var84;
{
{ /* Inline parser_nodes#AReassignFormExpr#n_value (self) on <self:ASendReassignFormExpr> */
var87 = self->attrs[COLOR_nitc__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:ASendReassignFormExpr> */
if (unlikely(var87 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2003);
fatal_exit(1);
}
var85 = var87;
RET_LABEL86:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_args, var85); /* Direct call array#Array#add on <var_args:Array[AExpr]>*/
}
{
var88 = nitc___nitc__CallSite___check_signature(var_wcallsite, var_v, var_node, var_args);
}
{
{ /* Inline typing#AExpr#is_typed= (self,1) on <self:ASendReassignFormExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = 1; /* _is_typed on <self:ASendReassignFormExpr> */
RET_LABEL89:(void)0;
}
}
RET_LABEL:;
}
/* method typing#ACallReassignExpr#property_name for (self: ACallReassignExpr): String */
val* nitc__typing___ACallReassignExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : AQid */;
val* var3 /* : AQid */;
val* var4 /* : TId */;
val* var6 /* : TId */;
val* var7 /* : String */;
{
{ /* Inline parser_nodes#ACallFormExpr#n_qid (self) on <self:ACallReassignExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ACallFormExpr___n_qid].val; /* _n_qid on <self:ACallReassignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_qid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2296);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline parser_nodes#AQid#n_id (var1) on <var1:AQid> */
var6 = var1->attrs[COLOR_nitc__parser_nodes__AQid___n_id].val; /* _n_id on <var1:AQid> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1658);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nitc__lexer_work___Token___text(var4);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ACallReassignExpr#property_node for (self: ACallReassignExpr): ANode */
val* nitc__typing___ACallReassignExpr___ASendExpr__property_node(val* self) {
val* var /* : ANode */;
val* var1 /* : AQid */;
val* var3 /* : AQid */;
val* var4 /* : TId */;
val* var6 /* : TId */;
{
{ /* Inline parser_nodes#ACallFormExpr#n_qid (self) on <self:ACallReassignExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ACallFormExpr___n_qid].val; /* _n_qid on <self:ACallReassignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_qid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2296);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline parser_nodes#AQid#n_id (var1) on <var1:AQid> */
var6 = var1->attrs[COLOR_nitc__parser_nodes__AQid___n_id].val; /* _n_id on <var1:AQid> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1658);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ACallReassignExpr#compute_raw_arguments for (self: ACallReassignExpr): Array[AExpr] */
val* nitc__typing___ACallReassignExpr___ASendExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : AExprs */;
val* var3 /* : AExprs */;
val* var4 /* : Array[AExpr] */;
{
{ /* Inline parser_nodes#ACallFormExpr#n_args (self) on <self:ACallReassignExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallReassignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2299);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc__typing___AExprs___to_a(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ABraReassignExpr#property_name for (self: ABraReassignExpr): String */
val* nitc__typing___ABraReassignExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : String */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "[]";
var3 = core__flat___NativeString___to_s_full(var2, 2l, 2l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ABraReassignExpr#compute_raw_arguments for (self: ABraReassignExpr): Array[AExpr] */
val* nitc__typing___ABraReassignExpr___ASendExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : AExprs */;
val* var3 /* : AExprs */;
val* var4 /* : Array[AExpr] */;
{
{ /* Inline parser_nodes#ABraFormExpr#n_args (self) on <self:ABraReassignExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraReassignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2368);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc__typing___AExprs___to_a(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AInitExpr#property_name for (self: AInitExpr): String */
val* nitc__typing___AInitExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : String */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "init";
var3 = core__flat___NativeString___to_s_full(var2, 4l, 4l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AInitExpr#property_node for (self: AInitExpr): ANode */
val* nitc__typing___AInitExpr___ASendExpr__property_node(val* self) {
val* var /* : ANode */;
val* var1 /* : TKwinit */;
val* var3 /* : TKwinit */;
{
{ /* Inline parser_nodes#AInitExpr#n_kwinit (self) on <self:AInitExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AInitExpr___n_kwinit].val; /* _n_kwinit on <self:AInitExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwinit");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2357);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AInitExpr#compute_raw_arguments for (self: AInitExpr): Array[AExpr] */
val* nitc__typing___AInitExpr___ASendExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : AExprs */;
val* var3 /* : AExprs */;
val* var4 /* : Array[AExpr] */;
{
{ /* Inline parser_nodes#AInitExpr#n_args (self) on <self:AInitExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AInitExpr___n_args].val; /* _n_args on <self:AInitExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2360);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc__typing___AExprs___to_a(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AExprs#to_a for (self: AExprs): Array[AExpr] */
val* nitc__typing___AExprs___to_a(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : ANodes[AExpr] */;
val* var3 /* : ANodes[AExpr] */;
val* var4 /* : Array[nullable Object] */;
{
{ /* Inline parser_nodes#AExprs#n_exprs (self) on <self:AExprs> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AExprs> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2709);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core__array___Collection___to_a(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ASuperExpr#callsite for (self: ASuperExpr): nullable CallSite */
val* nitc__typing___ASuperExpr___callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nitc__typing__ASuperExpr___callsite].val; /* _callsite on <self:ASuperExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ASuperExpr#callsite= for (self: ASuperExpr, nullable CallSite) */
void nitc__typing___ASuperExpr___callsite_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__ASuperExpr___callsite].val = p0; /* _callsite on <self:ASuperExpr> */
RET_LABEL:;
}
/* method typing#ASuperExpr#mpropdef for (self: ASuperExpr): nullable MMethodDef */
val* nitc__typing___ASuperExpr___mpropdef(val* self) {
val* var /* : nullable MMethodDef */;
val* var1 /* : nullable MMethodDef */;
var1 = self->attrs[COLOR_nitc__typing__ASuperExpr___mpropdef].val; /* _mpropdef on <self:ASuperExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ASuperExpr#mpropdef= for (self: ASuperExpr, nullable MMethodDef) */
void nitc__typing___ASuperExpr___mpropdef_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__ASuperExpr___mpropdef].val = p0; /* _mpropdef on <self:ASuperExpr> */
RET_LABEL:;
}
/* method typing#ASuperExpr#accept_typing for (self: ASuperExpr, TypeVisitor) */
void nitc__typing___ASuperExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MClassType */;
val* var2 /* : nullable MClassType */;
val* var_anchor /* var anchor: nullable MClassType */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : Variable */;
val* var10 /* : Variable */;
val* var11 /* : nullable MType */;
val* var_recvtype /* var recvtype: nullable MType */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : nullable MPropDef */;
val* var19 /* : nullable MPropDef */;
val* var20 /* : MProperty */;
val* var22 /* : MProperty */;
val* var_mproperty /* var mproperty: MProperty */;
short int var23 /* : Bool */;
int cltype;
int idtype;
short int var24 /* : Bool */;
static val* varonce;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : String */;
val* var28 /* : MModule */;
val* var30 /* : MModule */;
val* var31 /* : Array[MPropDef] */;
val* var_superprops /* var superprops: Array[MMethodDef] */;
long var32 /* : Int */;
long var34 /* : Int */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var_ /* var : Bool */;
val* var42 /* : nullable MPropDef */;
val* var44 /* : nullable MPropDef */;
short int var45 /* : Bool */;
val* var47 /* : NativeArray[String] */;
static val* varonce46;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
val* var51 /* : String */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
val* var55 /* : String */;
val* var56 /* : String */;
val* var57 /* : String */;
val* var58 /* : nullable Object */;
val* var_superprop /* var superprop: MMethodDef */;
val* var59 /* : nullable MSignature */;
val* var61 /* : nullable MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var62 /* : MType */;
short int var63 /* : Bool */;
int cltype64;
int idtype65;
const char* var_class_name;
val* var66 /* : AExprs */;
val* var68 /* : AExprs */;
val* var69 /* : Array[AExpr] */;
val* var_args /* var args: Array[AExpr] */;
long var70 /* : Int */;
long var72 /* : Int */;
short int var73 /* : Bool */;
short int var75 /* : Bool */;
int cltype76;
int idtype77;
const char* var_class_name78;
short int var79 /* : Bool */;
val* var80 /* : nullable SignatureMap */;
val* var82 /* : nullable MType */;
val* var84 /* : nullable MType */;
val* var87 /* : nullable MPropDef */;
val* var89 /* : nullable MPropDef */;
val* var91 /* : nullable MPropDef */;
val* var93 /* : nullable MPropDef */;
short int var94 /* : Bool */;
int cltype95;
int idtype96;
const char* var_class_name97;
var_v = p0;
{
{ /* Inline typing#TypeVisitor#anchor (var_v) on <var_v:TypeVisitor> */
var2 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___anchor].val; /* _anchor on <var_v:TypeVisitor> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_anchor = var;
if (var_anchor == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_anchor,((val*)NULL)) on <var_anchor:nullable MClassType> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_anchor->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_anchor, var_other); /* == on <var_anchor:nullable MClassType(MClassType)>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1930);
fatal_exit(1);
}
{
{ /* Inline typing#TypeVisitor#selfvariable (var_v) on <var_v:TypeVisitor> */
var10 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___selfvariable].val; /* _selfvariable on <var_v:TypeVisitor> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _selfvariable");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 51);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nitc__typing___nitc__typing__TypeVisitor___get_variable(var_v, self, var8);
}
var_recvtype = var11;
if (var_recvtype == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_recvtype,((val*)NULL)) on <var_recvtype:nullable MType> */
var_other = ((val*)NULL);
{
var15 = ((short int(*)(val* self, val* p0))(var_recvtype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_recvtype, var_other); /* == on <var_recvtype:nullable MType(MType)>*/
}
var16 = !var15;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1932);
fatal_exit(1);
}
{
{ /* Inline typing#TypeVisitor#mpropdef (var_v) on <var_v:TypeVisitor> */
var19 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___mpropdef].val; /* _mpropdef on <var_v:TypeVisitor> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
if (var17 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1933);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mproperty (var17) on <var17:nullable MPropDef> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var22 = var17->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var17:nullable MPropDef> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
var_mproperty = var20;
/* <var_mproperty:MProperty> isa MMethod */
cltype = type_nitc__MMethod.color;
idtype = type_nitc__MMethod.id;
if(cltype >= var_mproperty->type->table_size) {
var23 = 0;
} else {
var23 = var_mproperty->type->type_table[cltype] == idtype;
}
var24 = !var23;
if (var24){
if (likely(varonce!=NULL)) {
var25 = varonce;
} else {
var26 = "Error: `super` only usable in a `method`.";
var27 = core__flat___NativeString___to_s_full(var26, 41l, 41l);
var25 = var27;
varonce = var25;
}
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var25); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#TypeVisitor#mmodule (var_v) on <var_v:TypeVisitor> */
var30 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___mmodule].val; /* _mmodule on <var_v:TypeVisitor> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 37);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
var31 = nitc___nitc__MProperty___lookup_super_definitions(var_mproperty, var28, var_anchor);
}
var_superprops = var31;
{
{ /* Inline array#AbstractArrayRead#length (var_superprops) on <var_superprops:Array[MMethodDef]> */
var34 = var_superprops->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_superprops:Array[MMethodDef]> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var32,0l) on <var32:Int> */
var37 = var32 == 0l;
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
if (var35){
{
{ /* Inline model#MMethod#is_init (var_mproperty) on <var_mproperty:MProperty(MMethod)> */
var41 = var_mproperty->attrs[COLOR_nitc__model__MMethod___is_init].s; /* _is_init on <var_mproperty:MProperty(MMethod)> */
var39 = var41;
RET_LABEL40:(void)0;
}
}
var_ = var39;
if (var39){
{
{ /* Inline typing#TypeVisitor#mpropdef (var_v) on <var_v:TypeVisitor> */
var44 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___mpropdef].val; /* _mpropdef on <var_v:TypeVisitor> */
var42 = var44;
RET_LABEL43:(void)0;
}
}
if (var42 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1940);
fatal_exit(1);
} else {
var45 = nitc___nitc__MPropDef___is_intro(var42);
}
var38 = var45;
} else {
var38 = var_;
}
if (var38){
{
nitc__typing___ASuperExpr___process_superinit(self, var_v); /* Direct call typing#ASuperExpr#process_superinit on <self:ASuperExpr>*/
}
goto RET_LABEL;
} else {
}
if (unlikely(varonce46==NULL)) {
var47 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = "Error: no super method to call for `";
var51 = core__flat___NativeString___to_s_full(var50, 36l, 36l);
var49 = var51;
varonce48 = var49;
}
((struct instance_core__NativeArray*)var47)->values[0]=var49;
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = "`.";
var55 = core__flat___NativeString___to_s_full(var54, 2l, 2l);
var53 = var55;
varonce52 = var53;
}
((struct instance_core__NativeArray*)var47)->values[2]=var53;
} else {
var47 = varonce46;
varonce46 = NULL;
}
{
var56 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mproperty); /* to_s on <var_mproperty:MProperty(MMethod)>*/
}
((struct instance_core__NativeArray*)var47)->values[1]=var56;
{
var57 = ((val*(*)(val* self))(var47->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var47); /* native_to_s on <var47:NativeArray[String]>*/
}
varonce46 = var47;
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var57); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
var58 = core___core__SequenceRead___Collection__first(var_superprops);
}
var_superprop = var58;
{
{ /* Inline model#MMethodDef#msignature (var_superprop) on <var_superprop:MMethodDef> */
var61 = var_superprop->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_superprop:MMethodDef> */
var59 = var61;
RET_LABEL60:(void)0;
}
}
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1950);
fatal_exit(1);
}
var_msignature = var59;
{
var62 = nitc__typing___nitc__typing__TypeVisitor___resolve_for(var_v, var_msignature, var_recvtype, 1);
}
/* <var62:MType> isa MSignature */
cltype64 = type_nitc__MSignature.color;
idtype65 = type_nitc__MSignature.id;
if(cltype64 >= var62->type->table_size) {
var63 = 0;
} else {
var63 = var62->type->type_table[cltype64] == idtype65;
}
if (unlikely(!var63)) {
var_class_name = var62 == NULL ? "null" : var62->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MSignature", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1951);
fatal_exit(1);
}
var_msignature = var62;
{
{ /* Inline parser_nodes#ASuperExpr#n_args (self) on <self:ASuperExpr> */
var68 = self->attrs[COLOR_nitc__parser_nodes__ASuperExpr___n_args].val; /* _n_args on <self:ASuperExpr> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2348);
fatal_exit(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
var69 = nitc__typing___AExprs___to_a(var66);
}
var_args = var69;
{
{ /* Inline array#AbstractArrayRead#length (var_args) on <var_args:Array[AExpr]> */
var72 = var_args->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_args:Array[AExpr]> */
var70 = var72;
RET_LABEL71:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var70,0l) on <var70:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var75 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var75)) {
var_class_name78 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name78);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
fatal_exit(1);
}
var79 = var70 > 0l;
var73 = var79;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
}
if (var73){
{
var80 = nitc__typing___nitc__typing__TypeVisitor___check_signature(var_v, self, var_args, var_mproperty, var_msignature);
}
{
{ /* Inline typing#ASuperExpr#signaturemap= (self,var80) on <self:ASuperExpr> */
self->attrs[COLOR_nitc__typing__ASuperExpr___signaturemap].val = var80; /* _signaturemap on <self:ASuperExpr> */
RET_LABEL81:(void)0;
}
}
} else {
}
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:MSignature> */
var84 = var_msignature->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:MSignature> */
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var82) on <self:ASuperExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var82; /* _mtype on <self:ASuperExpr> */
RET_LABEL85:(void)0;
}
}
{
{ /* Inline typing#AExpr#is_typed= (self,1) on <self:ASuperExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = 1; /* _is_typed on <self:ASuperExpr> */
RET_LABEL86:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#mpropdef (var_v) on <var_v:TypeVisitor> */
var89 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___mpropdef].val; /* _mpropdef on <var_v:TypeVisitor> */
var87 = var89;
RET_LABEL88:(void)0;
}
}
if (var87 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1958);
fatal_exit(1);
} else {
{ /* Inline modelize_property#MPropDef#has_supercall= (var87,1) on <var87:nullable MPropDef> */
if (unlikely(var87 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 483);
fatal_exit(1);
}
var87->attrs[COLOR_nitc__modelize_property__MPropDef___has_supercall].s = 1; /* _has_supercall on <var87:nullable MPropDef> */
RET_LABEL90:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#mpropdef (var_v) on <var_v:TypeVisitor> */
var93 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___mpropdef].val; /* _mpropdef on <var_v:TypeVisitor> */
var91 = var93;
RET_LABEL92:(void)0;
}
}
/* <var91:nullable MPropDef> isa MMethodDef */
cltype95 = type_nitc__MMethodDef.color;
idtype96 = type_nitc__MMethodDef.id;
if(var91 == NULL) {
var94 = 0;
} else {
if(cltype95 >= var91->type->table_size) {
var94 = 0;
} else {
var94 = var91->type->type_table[cltype95] == idtype96;
}
}
if (unlikely(!var94)) {
var_class_name97 = var91 == NULL ? "null" : var91->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MMethodDef", var_class_name97);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1959);
fatal_exit(1);
}
{
{ /* Inline typing#ASuperExpr#mpropdef= (self,var91) on <self:ASuperExpr> */
self->attrs[COLOR_nitc__typing__ASuperExpr___mpropdef].val = var91; /* _mpropdef on <self:ASuperExpr> */
RET_LABEL98:(void)0;
}
}
RET_LABEL:;
}
/* method typing#ASuperExpr#signaturemap for (self: ASuperExpr): nullable SignatureMap */
val* nitc__typing___ASuperExpr___signaturemap(val* self) {
val* var /* : nullable SignatureMap */;
val* var1 /* : nullable SignatureMap */;
var1 = self->attrs[COLOR_nitc__typing__ASuperExpr___signaturemap].val; /* _signaturemap on <self:ASuperExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ASuperExpr#signaturemap= for (self: ASuperExpr, nullable SignatureMap) */
void nitc__typing___ASuperExpr___signaturemap_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__ASuperExpr___signaturemap].val = p0; /* _signaturemap on <self:ASuperExpr> */
RET_LABEL:;
}
