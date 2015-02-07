#include "nit__typing.sep.0.h"
/* method typing#ADebugTypeExpr#accept_typing for (self: ADebugTypeExpr, TypeVisitor) */
void nit__typing___ADebugTypeExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var_expr /* var expr: nullable MType */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : MType */;
val* var_unsafe /* var unsafe: MType */;
val* var12 /* : AType */;
val* var14 /* : AType */;
val* var_ntype /* var ntype: AType */;
val* var15 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var16 /* : Bool */;
val* var17 /* : null */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var_other21 /* var other: nullable Object */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var_ /* var : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : MType */;
val* var_umtype /* var umtype: MType */;
val* var29 /* : ModelBuilder */;
val* var31 /* : ModelBuilder */;
static val* varonce;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : FlatString */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
long var39 /* : Int */;
val* var40 /* : FlatString */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
long var44 /* : Int */;
val* var45 /* : FlatString */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
long var49 /* : Int */;
val* var50 /* : FlatString */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : FlatString */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
long var59 /* : Int */;
val* var60 /* : FlatString */;
val* var61 /* : Array[Object] */;
long var62 /* : Int */;
val* var63 /* : NativeArray[Object] */;
val* var64 /* : String */;
short int var65 /* : Bool */;
var_v = p0;
{
{ /* Inline parser_nodes#ADebugTypeExpr#n_expr (self) on <self:ADebugTypeExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_expr].val; /* _n_expr on <self:ADebugTypeExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2397);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit__typing___nit__typing__TypeVisitor___visit_expr(var_v, var);
}
var_expr = var3;
var4 = NULL;
if (var_expr == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_expr,var4) on <var_expr:nullable MType> */
var_other = var4;
{
{ /* Inline kernel#Object#is_same_instance (var_expr,var_other) on <var_expr:nullable MType(MType)> */
var10 = var_expr == var_other;
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
goto RET_LABEL;
} else {
}
{
var11 = nit__typing___nit__typing__TypeVisitor___anchor_to(var_v, var_expr);
}
var_unsafe = var11;
{
{ /* Inline parser_nodes#ADebugTypeExpr#n_type (self) on <self:ADebugTypeExpr> */
var14 = self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_type].val; /* _n_type on <self:ADebugTypeExpr> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2400);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_ntype = var12;
{
var15 = nit__typing___nit__typing__TypeVisitor___resolve_mtype(var_v, var_ntype);
}
var_mtype = var15;
var17 = NULL;
if (var_mtype == NULL) {
var18 = 0; /* is null */
} else {
var18 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mtype,var17) on <var_mtype:nullable MType> */
var_other21 = var17;
{
var22 = ((short int (*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype, var_other21) /* == on <var_mtype:nullable MType(MType)>*/;
}
var23 = !var22;
var19 = var23;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var18 = var19;
}
var_ = var18;
if (var18){
{
{ /* Inline kernel#Object#!= (var_mtype,var_expr) on <var_mtype:nullable MType(MType)> */
var_other21 = var_expr;
{
var26 = ((short int (*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype, var_other21) /* == on <var_mtype:nullable MType(MType)>*/;
}
var27 = !var26;
var24 = var27;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var16 = var24;
} else {
var16 = var_;
}
if (var16){
{
var28 = nit__typing___nit__typing__TypeVisitor___anchor_to(var_v, var_mtype);
}
var_umtype = var28;
{
{ /* Inline typing#TypeVisitor#modelbuilder (var_v) on <var_v:TypeVisitor> */
var31 = var_v->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <var_v:TypeVisitor> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
if (varonce) {
var32 = varonce;
} else {
var33 = "debug";
var34 = 5;
var35 = standard___standard__NativeString___to_s_with_length(var33, var34);
var32 = var35;
varonce = var32;
}
if (varonce36) {
var37 = varonce36;
} else {
var38 = "Found type ";
var39 = 11;
var40 = standard___standard__NativeString___to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
if (varonce41) {
var42 = varonce41;
} else {
var43 = " (-> ";
var44 = 5;
var45 = standard___standard__NativeString___to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
if (varonce46) {
var47 = varonce46;
} else {
var48 = "), expected ";
var49 = 12;
var50 = standard___standard__NativeString___to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
if (varonce51) {
var52 = varonce51;
} else {
var53 = " (-> ";
var54 = 5;
var55 = standard___standard__NativeString___to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
if (varonce56) {
var57 = varonce56;
} else {
var58 = ")";
var59 = 1;
var60 = standard___standard__NativeString___to_s_with_length(var58, var59);
var57 = var60;
varonce56 = var57;
}
var61 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var61 = array_instance Array[Object] */
var62 = 9;
var63 = NEW_standard__NativeArray(var62, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var63)->values[0] = (val*) var37;
((struct instance_standard__NativeArray*)var63)->values[1] = (val*) var_expr;
((struct instance_standard__NativeArray*)var63)->values[2] = (val*) var42;
((struct instance_standard__NativeArray*)var63)->values[3] = (val*) var_unsafe;
((struct instance_standard__NativeArray*)var63)->values[4] = (val*) var47;
((struct instance_standard__NativeArray*)var63)->values[5] = (val*) var_mtype;
((struct instance_standard__NativeArray*)var63)->values[6] = (val*) var52;
((struct instance_standard__NativeArray*)var63)->values[7] = (val*) var_umtype;
((struct instance_standard__NativeArray*)var63)->values[8] = (val*) var57;
{
((void (*)(val* self, val* p0, long p1))(var61->class->vft[COLOR_standard__array__Array__with_native]))(var61, var63, var62) /* with_native on <var61:Array[Object]>*/;
}
}
{
var64 = ((val* (*)(val* self))(var61->class->vft[COLOR_standard__string__Object__to_s]))(var61) /* to_s on <var61:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___warning(var29, self, var32, var64); /* Direct call modelbuilder_base#ModelBuilder#warning on <var29:ModelBuilder>*/
}
} else {
}
var65 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var65) on <self:ADebugTypeExpr> */
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var65; /* _is_typed on <self:ADebugTypeExpr> */
RET_LABEL66:(void)0;
}
}
RET_LABEL:;
}
