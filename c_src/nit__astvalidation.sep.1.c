#include "nit__astvalidation.sep.0.h"
/* method astvalidation#ASTValidationVisitor#visit for (self: ASTValidationVisitor, ANode) */
void nit___nit__ASTValidationVisitor___nit__parser_nodes__Visitor__visit(val* self, val* p0) {
val* var_node /* var node: ANode */;
val* var /* : List[ANode] */;
val* var2 /* : List[ANode] */;
val* var3 /* : List[ANode] */;
val* var5 /* : List[ANode] */;
val* var6 /* : nullable Object */;
var_node = p0;
{
{ /* Inline astvalidation#ASTValidationVisitor#path (self) on <self:ASTValidationVisitor> */
var2 = self->attrs[COLOR_nit__astvalidation__ASTValidationVisitor___path].val; /* _path on <self:ASTValidationVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__astvalidation, 29);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
standard___standard__List___standard__abstract_collection__Sequence__unshift(var, var_node); /* Direct call list#List#unshift on <var:List[ANode]>*/
}
{
((void (*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__astvalidation__ANode__accept_ast_validation]))(var_node, self) /* accept_ast_validation on <var_node:ANode>*/;
}
{
{ /* Inline astvalidation#ASTValidationVisitor#path (self) on <self:ASTValidationVisitor> */
var5 = self->attrs[COLOR_nit__astvalidation__ASTValidationVisitor___path].val; /* _path on <self:ASTValidationVisitor> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__astvalidation, 29);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = standard___standard__List___standard__abstract_collection__Sequence__shift(var3);
}
RET_LABEL:;
}
/* method astvalidation#ASTValidationVisitor#path for (self: ASTValidationVisitor): List[ANode] */
val* nit___nit__ASTValidationVisitor___path(val* self) {
val* var /* : List[ANode] */;
val* var1 /* : List[ANode] */;
var1 = self->attrs[COLOR_nit__astvalidation__ASTValidationVisitor___path].val; /* _path on <self:ASTValidationVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__astvalidation, 29);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method astvalidation#ASTValidationVisitor#seen for (self: ASTValidationVisitor): HashSet[ANode] */
val* nit___nit__ASTValidationVisitor___seen(val* self) {
val* var /* : HashSet[ANode] */;
val* var1 /* : HashSet[ANode] */;
var1 = self->attrs[COLOR_nit__astvalidation__ASTValidationVisitor___seen].val; /* _seen on <self:ASTValidationVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _seen");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__astvalidation, 30);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method astvalidation#ANode#accept_ast_validation for (self: ANode, ASTValidationVisitor) */
void nit__astvalidation___ANode___accept_ast_validation(val* self, val* p0) {
val* var_v /* var v: ASTValidationVisitor */;
val* var /* : nullable ANode */;
val* var2 /* : nullable ANode */;
val* var_parent /* var parent: nullable ANode */;
val* var3 /* : List[ANode] */;
val* var5 /* : List[ANode] */;
long var6 /* : Int */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var11 /* : Bool */;
val* var12 /* : List[ANode] */;
val* var14 /* : List[ANode] */;
long var15 /* : Int */;
val* var16 /* : nullable Object */;
val* var_path_parent /* var path_parent: ANode */;
val* var17 /* : null */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
val* var_other27 /* var other: nullable Object */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
static val* varonce;
val* var31 /* : String */;
char* var32 /* : NativeString */;
long var33 /* : Int */;
val* var34 /* : FlatString */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
long var38 /* : Int */;
val* var39 /* : FlatString */;
val* var40 /* : Array[Object] */;
long var41 /* : Int */;
val* var42 /* : NativeArray[Object] */;
val* var43 /* : String */;
val* var44 /* : HashSet[ANode] */;
val* var46 /* : HashSet[ANode] */;
short int var47 /* : Bool */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
long var51 /* : Int */;
val* var52 /* : FlatString */;
val* var53 /* : HashSet[ANode] */;
val* var55 /* : HashSet[ANode] */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
val* var58 /* : nullable ANode */;
val* var60 /* : nullable ANode */;
val* var61 /* : Location */;
val* var63 /* : Location */;
var_v = p0;
{
{ /* Inline parser_nodes#ANode#parent (self) on <self:ANode> */
var2 = self->attrs[COLOR_nit__parser_nodes__ANode___parent].val; /* _parent on <self:ANode> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_parent = var;
{
{ /* Inline astvalidation#ASTValidationVisitor#path (var_v) on <var_v:ASTValidationVisitor> */
var5 = var_v->attrs[COLOR_nit__astvalidation__ASTValidationVisitor___path].val; /* _path on <var_v:ASTValidationVisitor> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__astvalidation, 29);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = standard___standard__List___standard__abstract_collection__Collection__length(var3);
}
var7 = 1;
{
{ /* Inline kernel#Int#> (var6,var7) on <var6:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var11 = var6 > var7;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
{
{ /* Inline astvalidation#ASTValidationVisitor#path (var_v) on <var_v:ASTValidationVisitor> */
var14 = var_v->attrs[COLOR_nit__astvalidation__ASTValidationVisitor___path].val; /* _path on <var_v:ASTValidationVisitor> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__astvalidation, 29);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var15 = 1;
{
var16 = standard___standard__List___standard__abstract_collection__SequenceRead___91d_93d(var12, var15);
}
var_path_parent = var16;
var17 = NULL;
if (var_parent == NULL) {
var18 = 1; /* is null */
} else {
var18 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_parent,var17) on <var_parent:nullable ANode> */
var_other = var17;
{
{ /* Inline kernel#Object#is_same_instance (var_parent,var_other) on <var_parent:nullable ANode(ANode)> */
var23 = var_parent == var_other;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var18 = var19;
}
if (var18){
{
{ /* Inline parser_nodes#ANode#parent= (self,var_path_parent) on <self:ANode> */
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var_path_parent; /* _parent on <self:ANode> */
RET_LABEL24:(void)0;
}
}
} else {
{
{ /* Inline kernel#Object#!= (var_parent,var_path_parent) on <var_parent:nullable ANode(ANode)> */
var_other27 = var_path_parent;
{
var28 = ((short int (*)(val* self, val* p0))(var_parent->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_parent, var_other27) /* == on <var_parent:nullable ANode(ANode)>*/;
}
var29 = !var28;
var25 = var29;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
if (var25){
{
{ /* Inline parser_nodes#ANode#parent= (self,var_path_parent) on <self:ANode> */
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var_path_parent; /* _parent on <self:ANode> */
RET_LABEL30:(void)0;
}
}
if (varonce) {
var31 = varonce;
} else {
var32 = "PARENT: expected parent: ";
var33 = 25;
var34 = standard___standard__NativeString___to_s_with_length(var32, var33);
var31 = var34;
varonce = var31;
}
if (varonce35) {
var36 = varonce35;
} else {
var37 = ", got ";
var38 = 6;
var39 = standard___standard__NativeString___to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
var40 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var40 = array_instance Array[Object] */
var41 = 4;
var42 = NEW_standard__NativeArray(var41, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var42)->values[0] = (val*) var31;
((struct instance_standard__NativeArray*)var42)->values[1] = (val*) var_path_parent;
((struct instance_standard__NativeArray*)var42)->values[2] = (val*) var36;
((struct instance_standard__NativeArray*)var42)->values[3] = (val*) var_parent;
{
((void (*)(val* self, val* p0, long p1))(var40->class->vft[COLOR_standard__array__Array__with_native]))(var40, var42, var41) /* with_native on <var40:Array[Object]>*/;
}
}
{
var43 = ((val* (*)(val* self))(var40->class->vft[COLOR_standard__string__Object__to_s]))(var40) /* to_s on <var40:Array[Object]>*/;
}
{
nit___nit__ANode___debug(self, var43); /* Direct call parser_nodes#ANode#debug on <self:ANode>*/
}
} else {
}
}
} else {
}
{
{ /* Inline astvalidation#ASTValidationVisitor#seen (var_v) on <var_v:ASTValidationVisitor> */
var46 = var_v->attrs[COLOR_nit__astvalidation__ASTValidationVisitor___seen].val; /* _seen on <var_v:ASTValidationVisitor> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _seen");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__astvalidation, 30);
show_backtrace(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
var47 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var44, self);
}
if (var47){
if (varonce48) {
var49 = varonce48;
} else {
var50 = "DUPLICATE: already seen node. NOTATREE";
var51 = 38;
var52 = standard___standard__NativeString___to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
{
nit___nit__ANode___debug(self, var49); /* Direct call parser_nodes#ANode#debug on <self:ANode>*/
}
} else {
}
{
{ /* Inline astvalidation#ASTValidationVisitor#seen (var_v) on <var_v:ASTValidationVisitor> */
var55 = var_v->attrs[COLOR_nit__astvalidation__ASTValidationVisitor___seen].val; /* _seen on <var_v:ASTValidationVisitor> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _seen");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__astvalidation, 30);
show_backtrace(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var53, self); /* Direct call hash_collection#HashSet#add on <var53:HashSet[ANode]>*/
}
var56 = self->attrs[COLOR_nit__parser_nodes__ANode___location].val != NULL; /* _location on <self:ANode> */
var57 = !var56;
if (var57){
{
{ /* Inline parser_nodes#ANode#parent (self) on <self:ANode> */
var60 = self->attrs[COLOR_nit__parser_nodes__ANode___parent].val; /* _parent on <self:ANode> */
var58 = var60;
RET_LABEL59:(void)0;
}
}
if (var58 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__astvalidation, 56);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#location (var58) on <var58:nullable ANode> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 23);
show_backtrace(1);
}
var63 = var58->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var58:nullable ANode> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 23);
show_backtrace(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__ANode___location].val = var61; /* _location on <self:ANode> */
} else {
}
{
((void (*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ANode__visit_all]))(self, var_v) /* visit_all on <self:ANode>*/;
}
RET_LABEL:;
}
/* method astvalidation#AAnnotations#accept_ast_validation for (self: AAnnotations, ASTValidationVisitor) */
void nit__astvalidation___AAnnotations___ANode__accept_ast_validation(val* self, val* p0) {
val* var_v /* var v: ASTValidationVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method astvalidation#AExpr#accept_ast_validation for (self: AExpr, ASTValidationVisitor) */
void nit__astvalidation___AExpr___ANode__accept_ast_validation(val* self, val* p0) {
val* var_v /* var v: ASTValidationVisitor */;
short int var /* : Bool */;
val* var1 /* : nullable MType */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
static val* varonce;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : FlatString */;
var_v = p0;
{
((void (*)(val* self, val* p0))(self->class->vft[COLOR_nit__astvalidation___AExpr___ANode__accept_ast_validation]))(self, p0) /* accept_ast_validation on <self:AExpr>*/;
}
{
var1 = ((val* (*)(val* self))(self->class->vft[COLOR_nit__typing__AExpr__mtype]))(self) /* mtype on <self:AExpr>*/;
}
var2 = NULL;
if (var1 == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var1,var2) on <var1:nullable MType> */
var_other = var2;
{
{ /* Inline kernel#Object#is_same_instance (var1,var_other) on <var1:nullable MType(MType)> */
var8 = var1 == var_other;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
var_ = var3;
if (var3){
{
{ /* Inline typing#AExpr#is_typed (self) on <self:AExpr> */
var11 = self->attrs[COLOR_nit__typing__AExpr___is_typed].s; /* _is_typed on <self:AExpr> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var12 = !var9;
var = var12;
} else {
var = var_;
}
if (var){
if (varonce) {
var13 = varonce;
} else {
var14 = "TYPING: untyped expression";
var15 = 26;
var16 = standard___standard__NativeString___to_s_with_length(var14, var15);
var13 = var16;
varonce = var13;
}
{
nit___nit__ANode___debug(self, var13); /* Direct call parser_nodes#ANode#debug on <self:AExpr>*/
}
} else {
}
RET_LABEL:;
}
/* method astvalidation#APlaceholderExpr#accept_ast_validation for (self: APlaceholderExpr, ASTValidationVisitor) */
void nit__astvalidation___APlaceholderExpr___ANode__accept_ast_validation(val* self, val* p0) {
val* var_v /* var v: ASTValidationVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : FlatString */;
var_v = p0;
{
((void (*)(val* self, val* p0))(self->class->vft[COLOR_nit__astvalidation___APlaceholderExpr___ANode__accept_ast_validation]))(self, p0) /* accept_ast_validation on <self:APlaceholderExpr>*/;
}
if (varonce) {
var = varonce;
} else {
var1 = "PARENT: remaining placeholder";
var2 = 29;
var3 = standard___standard__NativeString___to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
nit___nit__ANode___debug(self, var); /* Direct call parser_nodes#ANode#debug on <self:APlaceholderExpr>*/
}
RET_LABEL:;
}
