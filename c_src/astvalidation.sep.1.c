#include "astvalidation.sep.0.h"
/* method astvalidation#ASTValidationVisitor#visit for (self: ASTValidationVisitor, ANode) */
void astvalidation__ASTValidationVisitor__visit(val* self, val* p0) {
val* var_node /* var node: ANode */;
val* var /* : List[ANode] */;
val* var2 /* : List[ANode] */;
val* var3 /* : List[ANode] */;
val* var5 /* : List[ANode] */;
val* var6 /* : nullable Object */;
var_node = p0;
{
{ /* Inline astvalidation#ASTValidationVisitor#path (self) on <self:ASTValidationVisitor> */
var2 = self->attrs[COLOR_astvalidation__ASTValidationVisitor___path].val; /* _path on <self:ASTValidationVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", "src/astvalidation.nit", 30);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
list__List__unshift(var, var_node); /* Direct call list#List#unshift on <var:List[ANode]>*/
}
{
((void (*)(val*, val*))(var_node->class->vft[COLOR_astvalidation__ANode__accept_ast_validation]))(var_node, self) /* accept_ast_validation on <var_node:ANode>*/;
}
{
{ /* Inline astvalidation#ASTValidationVisitor#path (self) on <self:ASTValidationVisitor> */
var5 = self->attrs[COLOR_astvalidation__ASTValidationVisitor___path].val; /* _path on <self:ASTValidationVisitor> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", "src/astvalidation.nit", 30);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = list__List__shift(var3);
}
var6;
RET_LABEL:;
}
/* method astvalidation#ASTValidationVisitor#visit for (self: Object, ANode) */
void VIRTUAL_astvalidation__ASTValidationVisitor__visit(val* self, val* p0) {
astvalidation__ASTValidationVisitor__visit(self, p0); /* Direct call astvalidation#ASTValidationVisitor#visit on <self:Object(ASTValidationVisitor)>*/
RET_LABEL:;
}
/* method astvalidation#ASTValidationVisitor#path for (self: ASTValidationVisitor): List[ANode] */
val* astvalidation__ASTValidationVisitor__path(val* self) {
val* var /* : List[ANode] */;
val* var1 /* : List[ANode] */;
var1 = self->attrs[COLOR_astvalidation__ASTValidationVisitor___path].val; /* _path on <self:ASTValidationVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", "src/astvalidation.nit", 30);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method astvalidation#ASTValidationVisitor#path for (self: Object): List[ANode] */
val* VIRTUAL_astvalidation__ASTValidationVisitor__path(val* self) {
val* var /* : List[ANode] */;
val* var1 /* : List[ANode] */;
val* var3 /* : List[ANode] */;
{ /* Inline astvalidation#ASTValidationVisitor#path (self) on <self:Object(ASTValidationVisitor)> */
var3 = self->attrs[COLOR_astvalidation__ASTValidationVisitor___path].val; /* _path on <self:Object(ASTValidationVisitor)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", "src/astvalidation.nit", 30);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method astvalidation#ASTValidationVisitor#seen for (self: ASTValidationVisitor): HashSet[ANode] */
val* astvalidation__ASTValidationVisitor__seen(val* self) {
val* var /* : HashSet[ANode] */;
val* var1 /* : HashSet[ANode] */;
var1 = self->attrs[COLOR_astvalidation__ASTValidationVisitor___seen].val; /* _seen on <self:ASTValidationVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _seen");
PRINT_ERROR(" (%s:%d)\n", "src/astvalidation.nit", 31);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method astvalidation#ASTValidationVisitor#seen for (self: Object): HashSet[ANode] */
val* VIRTUAL_astvalidation__ASTValidationVisitor__seen(val* self) {
val* var /* : HashSet[ANode] */;
val* var1 /* : HashSet[ANode] */;
val* var3 /* : HashSet[ANode] */;
{ /* Inline astvalidation#ASTValidationVisitor#seen (self) on <self:Object(ASTValidationVisitor)> */
var3 = self->attrs[COLOR_astvalidation__ASTValidationVisitor___seen].val; /* _seen on <self:Object(ASTValidationVisitor)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _seen");
PRINT_ERROR(" (%s:%d)\n", "src/astvalidation.nit", 31);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method astvalidation#ANode#accept_ast_validation for (self: ANode, ASTValidationVisitor) */
void astvalidation__ANode__accept_ast_validation(val* self, val* p0) {
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
short int var26 /* : Bool */;
val* var_other28 /* var other: nullable Object */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
static val* varonce;
val* var33 /* : String */;
char* var34 /* : NativeString */;
long var35 /* : Int */;
val* var36 /* : FlatString */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
long var40 /* : Int */;
val* var41 /* : FlatString */;
val* var42 /* : Array[Object] */;
long var43 /* : Int */;
val* var44 /* : NativeArray[Object] */;
val* var45 /* : String */;
val* var46 /* : HashSet[ANode] */;
val* var48 /* : HashSet[ANode] */;
short int var49 /* : Bool */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : FlatString */;
val* var55 /* : HashSet[ANode] */;
val* var57 /* : HashSet[ANode] */;
val* var58 /* : nullable Location */;
val* var59 /* : null */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
val* var62 /* : nullable ANode */;
val* var64 /* : nullable ANode */;
val* var65 /* : Location */;
var_v = p0;
{
{ /* Inline parser_nodes#ANode#parent (self) on <self:ANode> */
var2 = self->attrs[COLOR_parser_nodes__ANode___parent].val; /* _parent on <self:ANode> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_parent = var;
{
{ /* Inline astvalidation#ASTValidationVisitor#path (var_v) on <var_v:ASTValidationVisitor> */
var5 = var_v->attrs[COLOR_astvalidation__ASTValidationVisitor___path].val; /* _path on <var_v:ASTValidationVisitor> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", "src/astvalidation.nit", 30);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = list__List__length(var3);
}
var7 = 1;
{
{ /* Inline kernel#Int#> (var6,var7) on <var6:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 327);
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
var14 = var_v->attrs[COLOR_astvalidation__ASTValidationVisitor___path].val; /* _path on <var_v:ASTValidationVisitor> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", "src/astvalidation.nit", 30);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var15 = 1;
{
var16 = list__List___91d_93d(var12, var15);
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
self->attrs[COLOR_parser_nodes__ANode___parent].val = var_path_parent; /* _parent on <self:ANode> */
RET_LABEL24:(void)0;
}
}
} else {
{
{ /* Inline kernel#Object#!= (var_parent,var_path_parent) on <var_parent:nullable ANode(ANode)> */
var_other28 = var_path_parent;
{
var30 = ((short int (*)(val*, val*))(var_parent->class->vft[COLOR_kernel__Object___61d_61d]))(var_parent, var_other28) /* == on <var_parent:nullable ANode(ANode)>*/;
var29 = var30;
}
var31 = !var29;
var26 = var31;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
var25 = var26;
}
if (var25){
{
{ /* Inline parser_nodes#ANode#parent= (self,var_path_parent) on <self:ANode> */
self->attrs[COLOR_parser_nodes__ANode___parent].val = var_path_parent; /* _parent on <self:ANode> */
RET_LABEL32:(void)0;
}
}
if (varonce) {
var33 = varonce;
} else {
var34 = "PARENT: expected parent: ";
var35 = 25;
var36 = string__NativeString__to_s_with_length(var34, var35);
var33 = var36;
varonce = var33;
}
if (varonce37) {
var38 = varonce37;
} else {
var39 = ", got ";
var40 = 6;
var41 = string__NativeString__to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
var42 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var42 = array_instance Array[Object] */
var43 = 4;
var44 = NEW_array__NativeArray(var43, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var44)->values[0] = (val*) var33;
((struct instance_array__NativeArray*)var44)->values[1] = (val*) var_path_parent;
((struct instance_array__NativeArray*)var44)->values[2] = (val*) var38;
((struct instance_array__NativeArray*)var44)->values[3] = (val*) var_parent;
{
((void (*)(val*, val*, long))(var42->class->vft[COLOR_array__Array__with_native]))(var42, var44, var43) /* with_native on <var42:Array[Object]>*/;
}
}
{
var45 = ((val* (*)(val*))(var42->class->vft[COLOR_string__Object__to_s]))(var42) /* to_s on <var42:Array[Object]>*/;
}
{
parser_nodes__ANode__debug(self, var45); /* Direct call parser_nodes#ANode#debug on <self:ANode>*/
}
} else {
}
}
} else {
}
{
{ /* Inline astvalidation#ASTValidationVisitor#seen (var_v) on <var_v:ASTValidationVisitor> */
var48 = var_v->attrs[COLOR_astvalidation__ASTValidationVisitor___seen].val; /* _seen on <var_v:ASTValidationVisitor> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _seen");
PRINT_ERROR(" (%s:%d)\n", "src/astvalidation.nit", 31);
show_backtrace(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
var49 = hash_collection__HashSet__has(var46, self);
}
if (var49){
if (varonce50) {
var51 = varonce50;
} else {
var52 = "DUPLICATE: already seen node. NOTATREE";
var53 = 38;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
{
parser_nodes__ANode__debug(self, var51); /* Direct call parser_nodes#ANode#debug on <self:ANode>*/
}
} else {
}
{
{ /* Inline astvalidation#ASTValidationVisitor#seen (var_v) on <var_v:ASTValidationVisitor> */
var57 = var_v->attrs[COLOR_astvalidation__ASTValidationVisitor___seen].val; /* _seen on <var_v:ASTValidationVisitor> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _seen");
PRINT_ERROR(" (%s:%d)\n", "src/astvalidation.nit", 31);
show_backtrace(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
hash_collection__HashSet__add(var55, self); /* Direct call hash_collection#HashSet#add on <var55:HashSet[ANode]>*/
}
var58 = self->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <self:ANode> */
var59 = NULL;
if (var58 == NULL) {
var60 = 1; /* is null */
} else {
var60 = 0; /* arg is null but recv is not */
}
if (0) {
var61 = location__Location___61d_61d(var58, var59);
var60 = var61;
}
if (var60){
{
{ /* Inline parser_nodes#ANode#parent (self) on <self:ANode> */
var64 = self->attrs[COLOR_parser_nodes__ANode___parent].val; /* _parent on <self:ANode> */
var62 = var64;
RET_LABEL63:(void)0;
}
}
if (var62 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/astvalidation.nit", 57);
show_backtrace(1);
} else {
var65 = parser_nodes__ANode__location(var62);
}
self->attrs[COLOR_parser_nodes__ANode___location].val = var65; /* _location on <self:ANode> */
} else {
}
{
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__ANode__visit_all]))(self, var_v) /* visit_all on <self:ANode>*/;
}
RET_LABEL:;
}
/* method astvalidation#ANode#accept_ast_validation for (self: Object, ASTValidationVisitor) */
void VIRTUAL_astvalidation__ANode__accept_ast_validation(val* self, val* p0) {
astvalidation__ANode__accept_ast_validation(self, p0); /* Direct call astvalidation#ANode#accept_ast_validation on <self:Object(ANode)>*/
RET_LABEL:;
}
/* method astvalidation#AAnnotations#accept_ast_validation for (self: AAnnotations, ASTValidationVisitor) */
void astvalidation__AAnnotations__accept_ast_validation(val* self, val* p0) {
val* var_v /* var v: ASTValidationVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method astvalidation#AAnnotations#accept_ast_validation for (self: Object, ASTValidationVisitor) */
void VIRTUAL_astvalidation__AAnnotations__accept_ast_validation(val* self, val* p0) {
val* var_v /* var v: ASTValidationVisitor */;
{ /* Inline astvalidation#AAnnotations#accept_ast_validation (self,p0) on <self:Object(AAnnotations)> */
var_v = p0;
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method astvalidation#AExpr#accept_ast_validation for (self: AExpr, ASTValidationVisitor) */
void astvalidation__AExpr__accept_ast_validation(val* self, val* p0) {
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
((void (*)(val*, val*))(self->class->vft[COLOR_astvalidation__AExpr__accept_ast_validation]))(self, p0) /* accept_ast_validation on <self:AExpr>*/;
}
{
var1 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:AExpr>*/;
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
var11 = self->attrs[COLOR_typing__AExpr___is_typed].s; /* _is_typed on <self:AExpr> */
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
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce = var13;
}
{
parser_nodes__ANode__debug(self, var13); /* Direct call parser_nodes#ANode#debug on <self:AExpr>*/
}
} else {
}
RET_LABEL:;
}
/* method astvalidation#AExpr#accept_ast_validation for (self: Object, ASTValidationVisitor) */
void VIRTUAL_astvalidation__AExpr__accept_ast_validation(val* self, val* p0) {
astvalidation__AExpr__accept_ast_validation(self, p0); /* Direct call astvalidation#AExpr#accept_ast_validation on <self:Object(AExpr)>*/
RET_LABEL:;
}
/* method astvalidation#APlaceholderExpr#accept_ast_validation for (self: APlaceholderExpr, ASTValidationVisitor) */
void astvalidation__APlaceholderExpr__accept_ast_validation(val* self, val* p0) {
val* var_v /* var v: ASTValidationVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : FlatString */;
var_v = p0;
{
((void (*)(val*, val*))(self->class->vft[COLOR_astvalidation__APlaceholderExpr__accept_ast_validation]))(self, p0) /* accept_ast_validation on <self:APlaceholderExpr>*/;
}
if (varonce) {
var = varonce;
} else {
var1 = "PARENT: remaining placeholder";
var2 = 29;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
parser_nodes__ANode__debug(self, var); /* Direct call parser_nodes#ANode#debug on <self:APlaceholderExpr>*/
}
RET_LABEL:;
}
/* method astvalidation#APlaceholderExpr#accept_ast_validation for (self: Object, ASTValidationVisitor) */
void VIRTUAL_astvalidation__APlaceholderExpr__accept_ast_validation(val* self, val* p0) {
astvalidation__APlaceholderExpr__accept_ast_validation(self, p0); /* Direct call astvalidation#APlaceholderExpr#accept_ast_validation on <self:Object(APlaceholderExpr)>*/
RET_LABEL:;
}
