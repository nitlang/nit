#include "nitc__astvalidation.sep.0.h"
/* method astvalidation$ASTValidationVisitor$visit for (self: ASTValidationVisitor, ANode) */
void nitc___nitc__ASTValidationVisitor___nitc__parser_nodes__Visitor__visit(val* self, val* p0) {
val* var_node /* var node: ANode */;
var_node = p0;
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nitc__astvalidation__ANode__accept_ast_validation]))(var_node, self); /* accept_ast_validation on <var_node:ANode>*/
}
RET_LABEL:;
}
/* method astvalidation$ASTValidationVisitor$path for (self: ASTValidationVisitor): CircularArray[ANode] */
val* nitc___nitc__ASTValidationVisitor___path(val* self) {
val* var /* : CircularArray[ANode] */;
val* var1 /* : CircularArray[ANode] */;
var1 = self->attrs[COLOR_nitc__astvalidation__ASTValidationVisitor___path].val; /* _path on <self:ASTValidationVisitor> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__astvalidation, 27);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method astvalidation$ASTValidationVisitor$seen for (self: ASTValidationVisitor): HashSet[ANode] */
val* nitc___nitc__ASTValidationVisitor___seen(val* self) {
val* var /* : HashSet[ANode] */;
val* var1 /* : HashSet[ANode] */;
var1 = self->attrs[COLOR_nitc__astvalidation__ASTValidationVisitor___seen].val; /* _seen on <self:ASTValidationVisitor> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _seen");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__astvalidation, 28);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method astvalidation$ANode$accept_ast_validation for (self: ANode, ASTValidationVisitor) */
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
char* var40 /* : CString */;
val* var41 /* : String */;
val* var42 /* : nullable Int */;
val* var43 /* : nullable Int */;
val* var44 /* : nullable Bool */;
val* var45 /* : nullable Bool */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : CString */;
val* var49 /* : String */;
val* var50 /* : nullable Int */;
val* var51 /* : nullable Int */;
val* var52 /* : nullable Bool */;
val* var53 /* : nullable Bool */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : CString */;
val* var57 /* : String */;
val* var58 /* : nullable Int */;
val* var59 /* : nullable Int */;
val* var60 /* : nullable Bool */;
val* var61 /* : nullable Bool */;
val* var62 /* : String */;
val* var63 /* : String */;
val* var64 /* : String */;
val* var65 /* : HashSet[ANode] */;
val* var67 /* : HashSet[ANode] */;
val* var69 /* : NativeArray[String] */;
static val* varonce68;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : CString */;
val* var73 /* : String */;
val* var74 /* : nullable Int */;
val* var75 /* : nullable Int */;
val* var76 /* : nullable Bool */;
val* var77 /* : nullable Bool */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : CString */;
val* var81 /* : String */;
val* var82 /* : nullable Int */;
val* var83 /* : nullable Int */;
val* var84 /* : nullable Bool */;
val* var85 /* : nullable Bool */;
val* var86 /* : String */;
val* var87 /* : String */;
val* var88 /* : String */;
short int var89 /* : Bool */;
short int var90 /* : Bool */;
val* var91 /* : nullable ANode */;
val* var93 /* : nullable ANode */;
val* var94 /* : Location */;
val* var96 /* : Location */;
val* var97 /* : nullable Object */;
var_v = p0;
{
{ /* Inline parser_nodes$ANode$parent (self) on <self:ANode> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ANode___parent].val; /* _parent on <self:ANode> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_parent = var;
{
{ /* Inline astvalidation$ASTValidationVisitor$path (var_v) on <var_v:ASTValidationVisitor> */
var5 = var_v->attrs[COLOR_nitc__astvalidation__ASTValidationVisitor___path].val; /* _path on <var_v:ASTValidationVisitor> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
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
{ /* Inline circular_array$CircularArray$length (var_path) on <var_path:CircularArray[ANode]> */
var8 = var_path->attrs[COLOR_core__circular_array__CircularArray___length].l; /* _length on <var_path:CircularArray[ANode]> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var6,0l) on <var6:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var11 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
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
{ /* Inline astvalidation$ASTValidationVisitor$path (var_v) on <var_v:ASTValidationVisitor> */
var15 = var_v->attrs[COLOR_nitc__astvalidation__ASTValidationVisitor___path].val; /* _path on <var_v:ASTValidationVisitor> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
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
{ /* Inline kernel$Object$== (var_parent,((val*)NULL)) on <var_parent:nullable ANode> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_parent,var_other) on <var_parent:nullable ANode(ANode)> */
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
{ /* Inline parser_nodes$ANode$parent= (self,var_path_parent) on <self:ANode> */
self->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = var_path_parent; /* _parent on <self:ANode> */
RET_LABEL23:(void)0;
}
}
{
{ /* Inline astvalidation$ASTValidationVisitor$seen (var_v) on <var_v:ASTValidationVisitor> */
var26 = var_v->attrs[COLOR_nitc__astvalidation__ASTValidationVisitor___seen].val; /* _seen on <var_v:ASTValidationVisitor> */
if (unlikely(var26 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _seen");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__astvalidation, 28);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var24, self); /* Direct call hash_collection$HashSet$add on <var24:HashSet[ANode]>*/
}
} else {
{
{ /* Inline kernel$Object$!= (var_parent,var_path_parent) on <var_parent:nullable ANode(ANode)> */
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
{ /* Inline parser_nodes$ANode$parent= (self,var_path_parent) on <self:ANode> */
self->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = var_path_parent; /* _parent on <self:ANode> */
RET_LABEL32:(void)0;
}
}
{
{ /* Inline astvalidation$ASTValidationVisitor$seen (var_v) on <var_v:ASTValidationVisitor> */
var35 = var_v->attrs[COLOR_nitc__astvalidation__ASTValidationVisitor___seen].val; /* _seen on <var_v:ASTValidationVisitor> */
if (unlikely(var35 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
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
var37 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "DUPLICATE (NOTATREE): already seen node with parent ";
var42 = (val*)(52l<<2|1);
var43 = (val*)(52l<<2|1);
var44 = (val*)((long)(0)<<2|3);
var45 = (val*)((long)(0)<<2|3);
var41 = core__flat___CString___to_s_unsafe(var40, var42, var43, var44, var45);
var39 = var41;
varonce38 = var39;
}
((struct instance_core__NativeArray*)var37)->values[0]=var39;
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = " now with ";
var50 = (val*)(10l<<2|1);
var51 = (val*)(10l<<2|1);
var52 = (val*)((long)(0)<<2|3);
var53 = (val*)((long)(0)<<2|3);
var49 = core__flat___CString___to_s_unsafe(var48, var50, var51, var52, var53);
var47 = var49;
varonce46 = var47;
}
((struct instance_core__NativeArray*)var37)->values[2]=var47;
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = ".";
var58 = (val*)(1l<<2|1);
var59 = (val*)(1l<<2|1);
var60 = (val*)((long)(0)<<2|3);
var61 = (val*)((long)(0)<<2|3);
var57 = core__flat___CString___to_s_unsafe(var56, var58, var59, var60, var61);
var55 = var57;
varonce54 = var55;
}
((struct instance_core__NativeArray*)var37)->values[4]=var55;
} else {
var37 = varonce;
varonce = NULL;
}
{
var62 = ((val*(*)(val* self))(var_parent->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_parent); /* to_s on <var_parent:nullable ANode(ANode)>*/
}
((struct instance_core__NativeArray*)var37)->values[1]=var62;
{
var63 = ((val*(*)(val* self))(var_path_parent->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_path_parent); /* to_s on <var_path_parent:ANode>*/
}
((struct instance_core__NativeArray*)var37)->values[3]=var63;
{
var64 = ((val*(*)(val* self))(var37->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var37); /* native_to_s on <var37:NativeArray[String]>*/
}
varonce = var37;
{
nitc___nitc__ANode___debug(self, var64); /* Direct call parser_nodes$ANode$debug on <self:ANode>*/
}
} else {
{
{ /* Inline astvalidation$ASTValidationVisitor$seen (var_v) on <var_v:ASTValidationVisitor> */
var67 = var_v->attrs[COLOR_nitc__astvalidation__ASTValidationVisitor___seen].val; /* _seen on <var_v:ASTValidationVisitor> */
if (unlikely(var67 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _seen");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__astvalidation, 28);
fatal_exit(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var65, self); /* Direct call hash_collection$HashSet$add on <var65:HashSet[ANode]>*/
}
if (unlikely(varonce68==NULL)) {
var69 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = "PARENT: expected parent: ";
var74 = (val*)(25l<<2|1);
var75 = (val*)(25l<<2|1);
var76 = (val*)((long)(0)<<2|3);
var77 = (val*)((long)(0)<<2|3);
var73 = core__flat___CString___to_s_unsafe(var72, var74, var75, var76, var77);
var71 = var73;
varonce70 = var71;
}
((struct instance_core__NativeArray*)var69)->values[0]=var71;
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = ", got ";
var82 = (val*)(6l<<2|1);
var83 = (val*)(6l<<2|1);
var84 = (val*)((long)(0)<<2|3);
var85 = (val*)((long)(0)<<2|3);
var81 = core__flat___CString___to_s_unsafe(var80, var82, var83, var84, var85);
var79 = var81;
varonce78 = var79;
}
((struct instance_core__NativeArray*)var69)->values[2]=var79;
} else {
var69 = varonce68;
varonce68 = NULL;
}
{
var86 = ((val*(*)(val* self))(var_path_parent->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_path_parent); /* to_s on <var_path_parent:ANode>*/
}
((struct instance_core__NativeArray*)var69)->values[1]=var86;
{
var87 = ((val*(*)(val* self))(var_parent->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_parent); /* to_s on <var_parent:nullable ANode(ANode)>*/
}
((struct instance_core__NativeArray*)var69)->values[3]=var87;
{
var88 = ((val*(*)(val* self))(var69->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var69); /* native_to_s on <var69:NativeArray[String]>*/
}
varonce68 = var69;
{
nitc___nitc__ANode___debug(self, var88); /* Direct call parser_nodes$ANode$debug on <self:ANode>*/
}
}
} else {
}
}
} else {
}
var89 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val != NULL; /* _location on <self:ANode> */
var90 = !var89;
if (var90){
{
{ /* Inline parser_nodes$ANode$parent (self) on <self:ANode> */
var93 = self->attrs[COLOR_nitc__parser_nodes__ANode___parent].val; /* _parent on <self:ANode> */
var91 = var93;
RET_LABEL92:(void)0;
}
}
if (var91 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__astvalidation, 68);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$location (var91) on <var91:nullable ANode> */
if (unlikely(var91 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var96 = var91->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var91:nullable ANode> */
if (unlikely(var96 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__ANode___location].val = var94; /* _location on <self:ANode> */
} else {
}
{
core___core__CircularArray___core__abstract_collection__Sequence__unshift(var_path, self); /* Direct call circular_array$CircularArray$unshift on <var_path:CircularArray[ANode]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__parser_nodes__ANode__visit_all]))(self, var_v); /* visit_all on <self:ANode>*/
}
{
var97 = core___core__CircularArray___core__abstract_collection__Sequence__shift(var_path);
}
RET_LABEL:;
}
/* method astvalidation$AAnnotation$accept_ast_validation for (self: AAnnotation, ASTValidationVisitor) */
void nitc__astvalidation___AAnnotation___ANode__accept_ast_validation(val* self, val* p0) {
val* var_v /* var v: ASTValidationVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method astvalidation$AExpr$accept_ast_validation for (self: AExpr, ASTValidationVisitor) */
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
{ /* Inline kernel$Object$== (var1,((val*)NULL)) on <var1:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var1,var_other) on <var1:nullable MType(MType)> */
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
{ /* Inline typing$AExpr$is_typed (self) on <self:AExpr> */
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
/* method astvalidation$APlaceholderExpr$accept_ast_validation for (self: APlaceholderExpr, ASTValidationVisitor) */
void nitc__astvalidation___APlaceholderExpr___ANode__accept_ast_validation(val* self, val* p0) {
val* var_v /* var v: ASTValidationVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : CString */;
val* var2 /* : String */;
val* var3 /* : nullable Int */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Bool */;
val* var6 /* : nullable Bool */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__astvalidation___APlaceholderExpr___ANode__accept_ast_validation]))(self, p0); /* accept_ast_validation on <self:APlaceholderExpr>*/
}
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "PARENT: remaining placeholder";
var3 = (val*)(29l<<2|1);
var4 = (val*)(29l<<2|1);
var5 = (val*)((long)(0)<<2|3);
var6 = (val*)((long)(0)<<2|3);
var2 = core__flat___CString___to_s_unsafe(var1, var3, var4, var5, var6);
var = var2;
varonce = var;
}
{
nitc___nitc__ANode___debug(self, var); /* Direct call parser_nodes$ANode$debug on <self:APlaceholderExpr>*/
}
RET_LABEL:;
}
