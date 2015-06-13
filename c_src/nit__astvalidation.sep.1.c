#include "nit__astvalidation.sep.0.h"
/* method astvalidation#ASTValidationVisitor#visit for (self: ASTValidationVisitor, ANode) */
void nit___nit__ASTValidationVisitor___nit__parser_nodes__Visitor__visit(val* self, val* p0) {
val* var_node /* var node: ANode */;
var_node = p0;
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__astvalidation__ANode__accept_ast_validation]))(var_node, self); /* accept_ast_validation on <var_node:ANode>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__astvalidation, 27);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__astvalidation, 28);
fatal_exit(1);
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
val* var_path /* var path: List[ANode] */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var10 /* : Bool */;
val* var11 /* : List[ANode] */;
val* var13 /* : List[ANode] */;
val* var14 /* : nullable Object */;
val* var_path_parent /* var path_parent: ANode */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
val* var22 /* : HashSet[ANode] */;
val* var24 /* : HashSet[ANode] */;
short int var25 /* : Bool */;
val* var_other27 /* var other: nullable Object */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var31 /* : HashSet[ANode] */;
val* var33 /* : HashSet[ANode] */;
short int var34 /* : Bool */;
val* var35 /* : NativeArray[String] */;
static val* varonce;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
val* var39 /* : FlatString */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
val* var43 /* : FlatString */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
val* var47 /* : FlatString */;
val* var48 /* : String */;
val* var49 /* : String */;
val* var50 /* : String */;
val* var51 /* : HashSet[ANode] */;
val* var53 /* : HashSet[ANode] */;
val* var55 /* : NativeArray[String] */;
static val* varonce54;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
val* var59 /* : FlatString */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
val* var63 /* : FlatString */;
val* var64 /* : String */;
val* var65 /* : String */;
val* var66 /* : String */;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
val* var69 /* : nullable ANode */;
val* var71 /* : nullable ANode */;
val* var72 /* : Location */;
val* var74 /* : Location */;
val* var75 /* : nullable Object */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__astvalidation, 27);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_path = var3;
{
var6 = standard___standard__List___standard__abstract_collection__Collection__length(var_path);
}
{
{ /* Inline kernel#Int#> (var6,0l) on <var6:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var9 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var10 = var6 > 0l;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
{
{ /* Inline astvalidation#ASTValidationVisitor#path (var_v) on <var_v:ASTValidationVisitor> */
var13 = var_v->attrs[COLOR_nit__astvalidation__ASTValidationVisitor___path].val; /* _path on <var_v:ASTValidationVisitor> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__astvalidation, 27);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = standard___standard__List___standard__abstract_collection__Collection__first(var11);
}
var_path_parent = var14;
if (var_parent == NULL) {
var15 = 1; /* is null */
} else {
var15 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_parent,((val*)NULL)) on <var_parent:nullable ANode> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_parent,var_other) on <var_parent:nullable ANode(ANode)> */
var20 = var_parent == var_other;
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
if (var15){
{
{ /* Inline parser_nodes#ANode#parent= (self,var_path_parent) on <self:ANode> */
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var_path_parent; /* _parent on <self:ANode> */
RET_LABEL21:(void)0;
}
}
{
{ /* Inline astvalidation#ASTValidationVisitor#seen (var_v) on <var_v:ASTValidationVisitor> */
var24 = var_v->attrs[COLOR_nit__astvalidation__ASTValidationVisitor___seen].val; /* _seen on <var_v:ASTValidationVisitor> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _seen");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__astvalidation, 28);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var22, self); /* Direct call hash_collection#HashSet#add on <var22:HashSet[ANode]>*/
}
} else {
{
{ /* Inline kernel#Object#!= (var_parent,var_path_parent) on <var_parent:nullable ANode(ANode)> */
var_other27 = var_path_parent;
{
var28 = ((short int(*)(val* self, val* p0))(var_parent->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_parent, var_other27); /* == on <var_parent:nullable ANode(ANode)>*/
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
{
{ /* Inline astvalidation#ASTValidationVisitor#seen (var_v) on <var_v:ASTValidationVisitor> */
var33 = var_v->attrs[COLOR_nit__astvalidation__ASTValidationVisitor___seen].val; /* _seen on <var_v:ASTValidationVisitor> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _seen");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__astvalidation, 28);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
var34 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var31, self);
}
if (var34){
if (unlikely(varonce==NULL)) {
var35 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "DUPLICATE (NOTATREE): already seen node with parent ";
var39 = standard___standard__NativeString___to_s_with_length(var38, 52l);
var37 = var39;
varonce36 = var37;
}
((struct instance_standard__NativeArray*)var35)->values[0]=var37;
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = " now with ";
var43 = standard___standard__NativeString___to_s_with_length(var42, 10l);
var41 = var43;
varonce40 = var41;
}
((struct instance_standard__NativeArray*)var35)->values[2]=var41;
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = ".";
var47 = standard___standard__NativeString___to_s_with_length(var46, 1l);
var45 = var47;
varonce44 = var45;
}
((struct instance_standard__NativeArray*)var35)->values[4]=var45;
} else {
var35 = varonce;
varonce = NULL;
}
{
var48 = ((val*(*)(val* self))(var_parent->class->vft[COLOR_standard__string__Object__to_s]))(var_parent); /* to_s on <var_parent:nullable ANode(ANode)>*/
}
((struct instance_standard__NativeArray*)var35)->values[1]=var48;
{
var49 = ((val*(*)(val* self))(var_path_parent->class->vft[COLOR_standard__string__Object__to_s]))(var_path_parent); /* to_s on <var_path_parent:ANode>*/
}
((struct instance_standard__NativeArray*)var35)->values[3]=var49;
{
var50 = ((val*(*)(val* self))(var35->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var35); /* native_to_s on <var35:NativeArray[String]>*/
}
varonce = var35;
{
nit___nit__ANode___debug(self, var50); /* Direct call parser_nodes#ANode#debug on <self:ANode>*/
}
} else {
{
{ /* Inline astvalidation#ASTValidationVisitor#seen (var_v) on <var_v:ASTValidationVisitor> */
var53 = var_v->attrs[COLOR_nit__astvalidation__ASTValidationVisitor___seen].val; /* _seen on <var_v:ASTValidationVisitor> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _seen");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__astvalidation, 28);
fatal_exit(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var51, self); /* Direct call hash_collection#HashSet#add on <var51:HashSet[ANode]>*/
}
if (unlikely(varonce54==NULL)) {
var55 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = "PARENT: expected parent: ";
var59 = standard___standard__NativeString___to_s_with_length(var58, 25l);
var57 = var59;
varonce56 = var57;
}
((struct instance_standard__NativeArray*)var55)->values[0]=var57;
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = ", got ";
var63 = standard___standard__NativeString___to_s_with_length(var62, 6l);
var61 = var63;
varonce60 = var61;
}
((struct instance_standard__NativeArray*)var55)->values[2]=var61;
} else {
var55 = varonce54;
varonce54 = NULL;
}
{
var64 = ((val*(*)(val* self))(var_path_parent->class->vft[COLOR_standard__string__Object__to_s]))(var_path_parent); /* to_s on <var_path_parent:ANode>*/
}
((struct instance_standard__NativeArray*)var55)->values[1]=var64;
{
var65 = ((val*(*)(val* self))(var_parent->class->vft[COLOR_standard__string__Object__to_s]))(var_parent); /* to_s on <var_parent:nullable ANode(ANode)>*/
}
((struct instance_standard__NativeArray*)var55)->values[3]=var65;
{
var66 = ((val*(*)(val* self))(var55->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var55); /* native_to_s on <var55:NativeArray[String]>*/
}
varonce54 = var55;
{
nit___nit__ANode___debug(self, var66); /* Direct call parser_nodes#ANode#debug on <self:ANode>*/
}
}
} else {
}
}
} else {
}
var67 = self->attrs[COLOR_nit__parser_nodes__ANode___location].val != NULL; /* _location on <self:ANode> */
var68 = !var67;
if (var68){
{
{ /* Inline parser_nodes#ANode#parent (self) on <self:ANode> */
var71 = self->attrs[COLOR_nit__parser_nodes__ANode___parent].val; /* _parent on <self:ANode> */
var69 = var71;
RET_LABEL70:(void)0;
}
}
if (var69 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__astvalidation, 56);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#location (var69) on <var69:nullable ANode> */
if (unlikely(var69 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var74 = var69->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var69:nullable ANode> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__ANode___location].val = var72; /* _location on <self:ANode> */
} else {
}
{
standard___standard__List___standard__abstract_collection__Sequence__unshift(var_path, self); /* Direct call list#List#unshift on <var_path:List[ANode]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ANode__visit_all]))(self, var_v); /* visit_all on <self:ANode>*/
}
{
var75 = standard___standard__List___standard__abstract_collection__Sequence__shift(var_path);
}
RET_LABEL:;
}
/* method astvalidation#AAnnotation#accept_ast_validation for (self: AAnnotation, ASTValidationVisitor) */
void nit__astvalidation___AAnnotation___ANode__accept_ast_validation(val* self, val* p0) {
val* var_v /* var v: ASTValidationVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method astvalidation#AExpr#accept_ast_validation for (self: AExpr, ASTValidationVisitor) */
void nit__astvalidation___AExpr___ANode__accept_ast_validation(val* self, val* p0) {
val* var_v /* var v: ASTValidationVisitor */;
short int var /* : Bool */;
val* var1 /* : nullable MType */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__astvalidation___AExpr___ANode__accept_ast_validation]))(self, p0); /* accept_ast_validation on <self:AExpr>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__AExpr__mtype]))(self); /* mtype on <self:AExpr>*/
}
if (var1 == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var1,((val*)NULL)) on <var1:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var1,var_other) on <var1:nullable MType(MType)> */
var7 = var1 == var_other;
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
var_ = var2;
if (var2){
{
{ /* Inline typing#AExpr#is_typed (self) on <self:AExpr> */
var10 = self->attrs[COLOR_nit__typing__AExpr___is_typed].s; /* _is_typed on <self:AExpr> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var11 = !var8;
var = var11;
} else {
var = var_;
}
if (var){
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
val* var2 /* : FlatString */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__astvalidation___APlaceholderExpr___ANode__accept_ast_validation]))(self, p0); /* accept_ast_validation on <self:APlaceholderExpr>*/
}
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "PARENT: remaining placeholder";
var2 = standard___standard__NativeString___to_s_with_length(var1, 29l);
var = var2;
varonce = var;
}
{
nit___nit__ANode___debug(self, var); /* Direct call parser_nodes#ANode#debug on <self:APlaceholderExpr>*/
}
RET_LABEL:;
}
