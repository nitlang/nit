#include "nitc__astvalidation.sep.0.h"
/* method astvalidation#ASTValidationVisitor#visit for (self: ASTValidationVisitor, ANode) */
void nitc___nitc__ASTValidationVisitor___nitc__parser_nodes__Visitor__visit(val* self, val* p0) {
val* var_node /* var node: ANode */;
var_node = p0;
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nitc__astvalidation__ANode__accept_ast_validation]))(var_node, self); /* accept_ast_validation on <var_node:ANode>*/
}
RET_LABEL:;
}
/* method astvalidation#ASTValidationVisitor#path for (self: ASTValidationVisitor): CircularArray[ANode] */
val* nitc___nitc__ASTValidationVisitor___path(val* self) {
val* var /* : CircularArray[ANode] */;
val* var1 /* : CircularArray[ANode] */;
var1 = self->attrs[COLOR_nitc__astvalidation__ASTValidationVisitor___path].val; /* _path on <self:ASTValidationVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__astvalidation, 27);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method astvalidation#ASTValidationVisitor#seen for (self: ASTValidationVisitor): HashSet[ANode] */
val* nitc___nitc__ASTValidationVisitor___seen(val* self) {
val* var /* : HashSet[ANode] */;
val* var1 /* : HashSet[ANode] */;
var1 = self->attrs[COLOR_nitc__astvalidation__ASTValidationVisitor___seen].val; /* _seen on <self:ASTValidationVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _seen");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__astvalidation, 28);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method astvalidation#ANode#accept_ast_validation for (self: ANode, ASTValidationVisitor) */
void nitc__astvalidation___ANode___accept_ast_validation(val* self, val* p0) {
val* var_v /* var v: ASTValidationVisitor */;
val* var /* : nullable ANode */;
val* var2 /* : nullable ANode */;
val* var_parent /* var parent: nullable ANode */;
val* var3 /* : CircularArray[ANode] */;
val* var5 /* : CircularArray[ANode] */;
val* var_path /* var path: CircularArray[ANode] */;
long var6 /* : Int */;
long var8 /* : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var12 /* : Bool */;
val* var13 /* : CircularArray[ANode] */;
val* var15 /* : CircularArray[ANode] */;
val* var16 /* : nullable Object */;
val* var_path_parent /* var path_parent: ANode */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
val* var24 /* : HashSet[ANode] */;
val* var26 /* : HashSet[ANode] */;
short int var27 /* : Bool */;
val* var_other29 /* var other: nullable Object */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var33 /* : HashSet[ANode] */;
val* var35 /* : HashSet[ANode] */;
short int var36 /* : Bool */;
val* var37 /* : NativeArray[String] */;
static val* varonce;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : String */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : String */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
val* var49 /* : String */;
val* var50 /* : String */;
val* var51 /* : String */;
val* var52 /* : String */;
val* var53 /* : HashSet[ANode] */;
val* var55 /* : HashSet[ANode] */;
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
val* var66 /* : String */;
val* var67 /* : String */;
val* var68 /* : String */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
val* var71 /* : nullable ANode */;
val* var73 /* : nullable ANode */;
val* var74 /* : Location */;
val* var76 /* : Location */;
val* var77 /* : nullable Object */;
var_v = p0;
{
{ /* Inline parser_nodes#ANode#parent (self) on <self:ANode> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ANode___parent].val; /* _parent on <self:ANode> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_parent = var;
{
{ /* Inline astvalidation#ASTValidationVisitor#path (var_v) on <var_v:ASTValidationVisitor> */
var5 = var_v->attrs[COLOR_nitc__astvalidation__ASTValidationVisitor___path].val; /* _path on <var_v:ASTValidationVisitor> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__astvalidation, 27);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_path = var3;
{
{ /* Inline circular_array#CircularArray#length (var_path) on <var_path:CircularArray[ANode]> */
var8 = var_path->attrs[COLOR_core__circular_array__CircularArray___length].l; /* _length on <var_path:CircularArray[ANode]> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var6,0l) on <var6:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var11 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
fatal_exit(1);
}
var12 = var6 > 0l;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
{
{ /* Inline astvalidation#ASTValidationVisitor#path (var_v) on <var_v:ASTValidationVisitor> */
var15 = var_v->attrs[COLOR_nitc__astvalidation__ASTValidationVisitor___path].val; /* _path on <var_v:ASTValidationVisitor> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__astvalidation, 27);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = core___core__SequenceRead___Collection__first(var13);
}
var_path_parent = var16;
if (var_parent == NULL) {
var17 = 1; /* is null */
} else {
var17 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_parent,((val*)NULL)) on <var_parent:nullable ANode> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_parent,var_other) on <var_parent:nullable ANode(ANode)> */
var22 = var_parent == var_other;
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
{
{ /* Inline parser_nodes#ANode#parent= (self,var_path_parent) on <self:ANode> */
self->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = var_path_parent; /* _parent on <self:ANode> */
RET_LABEL23:(void)0;
}
}
{
{ /* Inline astvalidation#ASTValidationVisitor#seen (var_v) on <var_v:ASTValidationVisitor> */
var26 = var_v->attrs[COLOR_nitc__astvalidation__ASTValidationVisitor___seen].val; /* _seen on <var_v:ASTValidationVisitor> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _seen");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__astvalidation, 28);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var24, self); /* Direct call hash_collection#HashSet#add on <var24:HashSet[ANode]>*/
}
} else {
{
{ /* Inline kernel#Object#!= (var_parent,var_path_parent) on <var_parent:nullable ANode(ANode)> */
var_other29 = var_path_parent;
{
var30 = ((short int(*)(val* self, val* p0))(var_parent->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_parent, var_other29); /* == on <var_parent:nullable ANode(ANode)>*/
}
var31 = !var30;
var27 = var31;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
if (var27){
{
{ /* Inline parser_nodes#ANode#parent= (self,var_path_parent) on <self:ANode> */
self->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = var_path_parent; /* _parent on <self:ANode> */
RET_LABEL32:(void)0;
}
}
{
{ /* Inline astvalidation#ASTValidationVisitor#seen (var_v) on <var_v:ASTValidationVisitor> */
var35 = var_v->attrs[COLOR_nitc__astvalidation__ASTValidationVisitor___seen].val; /* _seen on <var_v:ASTValidationVisitor> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _seen");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__astvalidation, 28);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
var36 = core___core__HashSet___core__abstract_collection__Collection__has(var33, self);
}
if (var36){
if (unlikely(varonce==NULL)) {
var37 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "DUPLICATE (NOTATREE): already seen node with parent ";
var41 = core__flat___NativeString___to_s_full(var40, 52l, 52l);
var39 = var41;
varonce38 = var39;
}
((struct instance_core__NativeArray*)var37)->values[0]=var39;
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = " now with ";
var45 = core__flat___NativeString___to_s_full(var44, 10l, 10l);
var43 = var45;
varonce42 = var43;
}
((struct instance_core__NativeArray*)var37)->values[2]=var43;
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = ".";
var49 = core__flat___NativeString___to_s_full(var48, 1l, 1l);
var47 = var49;
varonce46 = var47;
}
((struct instance_core__NativeArray*)var37)->values[4]=var47;
} else {
var37 = varonce;
varonce = NULL;
}
{
var50 = ((val*(*)(val* self))(var_parent->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_parent); /* to_s on <var_parent:nullable ANode(ANode)>*/
}
((struct instance_core__NativeArray*)var37)->values[1]=var50;
{
var51 = ((val*(*)(val* self))(var_path_parent->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_path_parent); /* to_s on <var_path_parent:ANode>*/
}
((struct instance_core__NativeArray*)var37)->values[3]=var51;
{
var52 = ((val*(*)(val* self))(var37->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var37); /* native_to_s on <var37:NativeArray[String]>*/
}
varonce = var37;
{
nitc___nitc__ANode___debug(self, var52); /* Direct call parser_nodes#ANode#debug on <self:ANode>*/
}
} else {
{
{ /* Inline astvalidation#ASTValidationVisitor#seen (var_v) on <var_v:ASTValidationVisitor> */
var55 = var_v->attrs[COLOR_nitc__astvalidation__ASTValidationVisitor___seen].val; /* _seen on <var_v:ASTValidationVisitor> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _seen");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__astvalidation, 28);
fatal_exit(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var53, self); /* Direct call hash_collection#HashSet#add on <var53:HashSet[ANode]>*/
}
if (unlikely(varonce56==NULL)) {
var57 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "PARENT: expected parent: ";
var61 = core__flat___NativeString___to_s_full(var60, 25l, 25l);
var59 = var61;
varonce58 = var59;
}
((struct instance_core__NativeArray*)var57)->values[0]=var59;
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = ", got ";
var65 = core__flat___NativeString___to_s_full(var64, 6l, 6l);
var63 = var65;
varonce62 = var63;
}
((struct instance_core__NativeArray*)var57)->values[2]=var63;
} else {
var57 = varonce56;
varonce56 = NULL;
}
{
var66 = ((val*(*)(val* self))(var_path_parent->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_path_parent); /* to_s on <var_path_parent:ANode>*/
}
((struct instance_core__NativeArray*)var57)->values[1]=var66;
{
var67 = ((val*(*)(val* self))(var_parent->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_parent); /* to_s on <var_parent:nullable ANode(ANode)>*/
}
((struct instance_core__NativeArray*)var57)->values[3]=var67;
{
var68 = ((val*(*)(val* self))(var57->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var57); /* native_to_s on <var57:NativeArray[String]>*/
}
varonce56 = var57;
{
nitc___nitc__ANode___debug(self, var68); /* Direct call parser_nodes#ANode#debug on <self:ANode>*/
}
}
} else {
}
}
} else {
}
var69 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val != NULL; /* _location on <self:ANode> */
var70 = !var69;
if (var70){
{
{ /* Inline parser_nodes#ANode#parent (self) on <self:ANode> */
var73 = self->attrs[COLOR_nitc__parser_nodes__ANode___parent].val; /* _parent on <self:ANode> */
var71 = var73;
RET_LABEL72:(void)0;
}
}
if (var71 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__astvalidation, 68);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#location (var71) on <var71:nullable ANode> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 24);
fatal_exit(1);
}
var76 = var71->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var71:nullable ANode> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 24);
fatal_exit(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__ANode___location].val = var74; /* _location on <self:ANode> */
} else {
}
{
core___core__CircularArray___core__abstract_collection__Sequence__unshift(var_path, self); /* Direct call circular_array#CircularArray#unshift on <var_path:CircularArray[ANode]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__parser_nodes__ANode__visit_all]))(self, var_v); /* visit_all on <self:ANode>*/
}
{
var77 = core___core__CircularArray___core__abstract_collection__Sequence__shift(var_path);
}
RET_LABEL:;
}
/* method astvalidation#AAnnotation#accept_ast_validation for (self: AAnnotation, ASTValidationVisitor) */
void nitc__astvalidation___AAnnotation___ANode__accept_ast_validation(val* self, val* p0) {
val* var_v /* var v: ASTValidationVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method astvalidation#AExpr#accept_ast_validation for (self: AExpr, ASTValidationVisitor) */
void nitc__astvalidation___AExpr___ANode__accept_ast_validation(val* self, val* p0) {
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
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__astvalidation___AExpr___ANode__accept_ast_validation]))(self, p0); /* accept_ast_validation on <self:AExpr>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__typing__AExpr__mtype]))(self); /* mtype on <self:AExpr>*/
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
var10 = self->attrs[COLOR_nitc__typing__AExpr___is_typed].s; /* _is_typed on <self:AExpr> */
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
void nitc__astvalidation___APlaceholderExpr___ANode__accept_ast_validation(val* self, val* p0) {
val* var_v /* var v: ASTValidationVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : String */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__astvalidation___APlaceholderExpr___ANode__accept_ast_validation]))(self, p0); /* accept_ast_validation on <self:APlaceholderExpr>*/
}
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "PARENT: remaining placeholder";
var2 = core__flat___NativeString___to_s_full(var1, 29l, 29l);
var = var2;
varonce = var;
}
{
nitc___nitc__ANode___debug(self, var); /* Direct call parser_nodes#ANode#debug on <self:APlaceholderExpr>*/
}
RET_LABEL:;
}
