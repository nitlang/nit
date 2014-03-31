#include "astvalidation.sep.0.h"
/* method astvalidation#ASTValidationVisitor#visit for (self: ASTValidationVisitor, ANode) */
void astvalidation__ASTValidationVisitor__visit(val* self, val* p0) {
val* var_node /* var node: ANode */;
val* var /* : List[ANode] */;
val* var1 /* : List[ANode] */;
val* var2 /* : nullable Object */;
var_node = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_astvalidation__ASTValidationVisitor__path]))(self) /* path on <self:ASTValidationVisitor>*/;
((void (*)(val*, val*))(var->class->vft[COLOR_abstract_collection__Sequence__unshift]))(var, var_node) /* unshift on <var:List[ANode]>*/;
((void (*)(val*, val*))(var_node->class->vft[COLOR_astvalidation__ANode__accept_ast_validation]))(var_node, self) /* accept_ast_validation on <var_node:ANode>*/;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_astvalidation__ASTValidationVisitor__path]))(self) /* path on <self:ASTValidationVisitor>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Sequence__shift]))(var1) /* shift on <var1:List[ANode]>*/;
var2;
RET_LABEL:;
}
/* method astvalidation#ASTValidationVisitor#visit for (self: Object, ANode) */
void VIRTUAL_astvalidation__ASTValidationVisitor__visit(val* self, val* p0) {
astvalidation__ASTValidationVisitor__visit(self, p0);
RET_LABEL:;
}
/* method astvalidation#ASTValidationVisitor#path for (self: ASTValidationVisitor): List[ANode] */
val* astvalidation__ASTValidationVisitor__path(val* self) {
val* var /* : List[ANode] */;
val* var1 /* : List[ANode] */;
var1 = self->attrs[COLOR_astvalidation__ASTValidationVisitor___64dpath].val; /* @path on <self:ASTValidationVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @path");
fprintf(stderr, " (%s:%d)\n", "src/astvalidation.nit", 30);
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
var1 = astvalidation__ASTValidationVisitor__path(self);
var = var1;
RET_LABEL:;
return var;
}
/* method astvalidation#ASTValidationVisitor#path= for (self: ASTValidationVisitor, List[ANode]) */
void astvalidation__ASTValidationVisitor__path_61d(val* self, val* p0) {
self->attrs[COLOR_astvalidation__ASTValidationVisitor___64dpath].val = p0; /* @path on <self:ASTValidationVisitor> */
RET_LABEL:;
}
/* method astvalidation#ASTValidationVisitor#path= for (self: Object, List[ANode]) */
void VIRTUAL_astvalidation__ASTValidationVisitor__path_61d(val* self, val* p0) {
astvalidation__ASTValidationVisitor__path_61d(self, p0);
RET_LABEL:;
}
/* method astvalidation#ASTValidationVisitor#seen for (self: ASTValidationVisitor): HashSet[ANode] */
val* astvalidation__ASTValidationVisitor__seen(val* self) {
val* var /* : HashSet[ANode] */;
val* var1 /* : HashSet[ANode] */;
var1 = self->attrs[COLOR_astvalidation__ASTValidationVisitor___64dseen].val; /* @seen on <self:ASTValidationVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @seen");
fprintf(stderr, " (%s:%d)\n", "src/astvalidation.nit", 31);
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
var1 = astvalidation__ASTValidationVisitor__seen(self);
var = var1;
RET_LABEL:;
return var;
}
/* method astvalidation#ASTValidationVisitor#seen= for (self: ASTValidationVisitor, HashSet[ANode]) */
void astvalidation__ASTValidationVisitor__seen_61d(val* self, val* p0) {
self->attrs[COLOR_astvalidation__ASTValidationVisitor___64dseen].val = p0; /* @seen on <self:ASTValidationVisitor> */
RET_LABEL:;
}
/* method astvalidation#ASTValidationVisitor#seen= for (self: Object, HashSet[ANode]) */
void VIRTUAL_astvalidation__ASTValidationVisitor__seen_61d(val* self, val* p0) {
astvalidation__ASTValidationVisitor__seen_61d(self, p0);
RET_LABEL:;
}
/* method astvalidation#ASTValidationVisitor#init for (self: ASTValidationVisitor) */
void astvalidation__ASTValidationVisitor__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Visitor__init]))(self) /* init on <self:ASTValidationVisitor>*/;
RET_LABEL:;
}
/* method astvalidation#ASTValidationVisitor#init for (self: Object) */
void VIRTUAL_astvalidation__ASTValidationVisitor__init(val* self) {
astvalidation__ASTValidationVisitor__init(self);
RET_LABEL:;
}
/* method astvalidation#ANode#accept_ast_validation for (self: ANode, ASTValidationVisitor) */
void astvalidation__ANode__accept_ast_validation(val* self, val* p0) {
val* var_v /* var v: ASTValidationVisitor */;
val* var /* : nullable ANode */;
val* var_parent /* var parent: nullable ANode */;
val* var1 /* : List[ANode] */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
val* var8 /* : List[ANode] */;
long var9 /* : Int */;
val* var10 /* : nullable Object */;
val* var_path_parent /* var path_parent: ANode */;
val* var11 /* : null */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
static val* varonce;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : String */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : String */;
val* var23 /* : Array[Object] */;
long var24 /* : Int */;
val* var25 /* : NativeArray[Object] */;
val* var26 /* : String */;
val* var27 /* : HashSet[ANode] */;
short int var28 /* : Bool */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : String */;
val* var34 /* : HashSet[ANode] */;
val* var35 /* : nullable Location */;
val* var36 /* : null */;
short int var37 /* : Bool */;
val* var38 /* : nullable ANode */;
val* var39 /* : Location */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__parent]))(self) /* parent on <self:ANode>*/;
var_parent = var;
var1 = ((val* (*)(val*))(var_v->class->vft[COLOR_astvalidation__ASTValidationVisitor__path]))(var_v) /* path on <var_v:ASTValidationVisitor>*/;
var2 = ((long (*)(val*))(var1->class->vft[COLOR_abstract_collection__Collection__length]))(var1) /* length on <var1:List[ANode]>*/;
var3 = 1;
{ /* Inline kernel#Int#> (var2,var3) */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (!var6) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 263);
show_backtrace(1);
}
var7 = var2 > var3;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
if (var4){
var8 = ((val* (*)(val*))(var_v->class->vft[COLOR_astvalidation__ASTValidationVisitor__path]))(var_v) /* path on <var_v:ASTValidationVisitor>*/;
var9 = 1;
var10 = ((val* (*)(val*, long))(var8->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var8, var9) /* [] on <var8:List[ANode]>*/;
var_path_parent = var10;
var11 = NULL;
if (var_parent == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (var12){
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(self, var_path_parent) /* parent= on <self:ANode>*/;
} else {
var13 = ((short int (*)(val*, val*))(var_parent->class->vft[COLOR_kernel__Object___33d_61d]))(var_parent, var_path_parent) /* != on <var_parent:nullable ANode(ANode)>*/;
if (var13){
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(self, var_path_parent) /* parent= on <self:ANode>*/;
if (varonce) {
var14 = varonce;
} else {
var15 = "PARENT: expected parent: ";
var16 = 25;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce = var14;
}
if (varonce18) {
var19 = varonce18;
} else {
var20 = ", got ";
var21 = 6;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
var23 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var23 = array_instance Array[Object] */
var24 = 4;
var25 = NEW_array__NativeArray(var24, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var25)->values[0] = (val*) var14;
((struct instance_array__NativeArray*)var25)->values[1] = (val*) var_path_parent;
((struct instance_array__NativeArray*)var25)->values[2] = (val*) var19;
((struct instance_array__NativeArray*)var25)->values[3] = (val*) var_parent;
((void (*)(val*, val*, long))(var23->class->vft[COLOR_array__Array__with_native]))(var23, var25, var24) /* with_native on <var23:Array[Object]>*/;
}
var26 = ((val* (*)(val*))(var23->class->vft[COLOR_string__Object__to_s]))(var23) /* to_s on <var23:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__ANode__debug]))(self, var26) /* debug on <self:ANode>*/;
} else {
}
}
} else {
}
var27 = ((val* (*)(val*))(var_v->class->vft[COLOR_astvalidation__ASTValidationVisitor__seen]))(var_v) /* seen on <var_v:ASTValidationVisitor>*/;
var28 = ((short int (*)(val*, val*))(var27->class->vft[COLOR_abstract_collection__Collection__has]))(var27, self) /* has on <var27:HashSet[ANode]>*/;
if (var28){
if (varonce29) {
var30 = varonce29;
} else {
var31 = "DUPLICATE: already seen node. NOTATREE";
var32 = 38;
var33 = string__NativeString__to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__ANode__debug]))(self, var30) /* debug on <self:ANode>*/;
} else {
}
var34 = ((val* (*)(val*))(var_v->class->vft[COLOR_astvalidation__ASTValidationVisitor__seen]))(var_v) /* seen on <var_v:ASTValidationVisitor>*/;
((void (*)(val*, val*))(var34->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var34, self) /* add on <var34:HashSet[ANode]>*/;
var35 = self->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <self:ANode> */
var36 = NULL;
if (var35 == NULL) {
var37 = 1; /* is null */
} else {
var37 = 0; /* arg is null but recv is not */
}
if (var37){
var38 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__parent]))(self) /* parent on <self:ANode>*/;
if (var38 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/astvalidation.nit", 57);
show_backtrace(1);
} else {
var39 = ((val* (*)(val*))(var38->class->vft[COLOR_parser_nodes__ANode__location]))(var38) /* location on <var38:nullable ANode>*/;
}
self->attrs[COLOR_parser_nodes__ANode___location].val = var39; /* _location on <self:ANode> */
} else {
}
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__ANode__visit_all]))(self, var_v) /* visit_all on <self:ANode>*/;
RET_LABEL:;
}
/* method astvalidation#ANode#accept_ast_validation for (self: Object, ASTValidationVisitor) */
void VIRTUAL_astvalidation__ANode__accept_ast_validation(val* self, val* p0) {
astvalidation__ANode__accept_ast_validation(self, p0);
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
astvalidation__AAnnotations__accept_ast_validation(self, p0);
RET_LABEL:;
}
/* method astvalidation#AExpr#accept_ast_validation for (self: AExpr, ASTValidationVisitor) */
void astvalidation__AExpr__accept_ast_validation(val* self, val* p0) {
val* var_v /* var v: ASTValidationVisitor */;
short int var /* : Bool */;
val* var1 /* : nullable MType */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var_ /* var : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
var_v = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_astvalidation__AExpr__accept_ast_validation]))(self, p0) /* accept_ast_validation on <self:AExpr>*/;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:AExpr>*/;
var2 = NULL;
if (var1 == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
var_ = var3;
if (var3){
var4 = ((short int (*)(val*))(self->class->vft[COLOR_typing__AExpr__is_typed]))(self) /* is_typed on <self:AExpr>*/;
var5 = !var4;
var = var5;
} else {
var = var_;
}
if (var){
if (varonce) {
var6 = varonce;
} else {
var7 = "TYPING: untyped expression";
var8 = 26;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__ANode__debug]))(self, var6) /* debug on <self:AExpr>*/;
} else {
}
RET_LABEL:;
}
/* method astvalidation#AExpr#accept_ast_validation for (self: Object, ASTValidationVisitor) */
void VIRTUAL_astvalidation__AExpr__accept_ast_validation(val* self, val* p0) {
astvalidation__AExpr__accept_ast_validation(self, p0);
RET_LABEL:;
}
/* method astvalidation#APlaceholderExpr#accept_ast_validation for (self: APlaceholderExpr, ASTValidationVisitor) */
void astvalidation__APlaceholderExpr__accept_ast_validation(val* self, val* p0) {
val* var_v /* var v: ASTValidationVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : String */;
var_v = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_astvalidation__APlaceholderExpr__accept_ast_validation]))(self, p0) /* accept_ast_validation on <self:APlaceholderExpr>*/;
if (varonce) {
var = varonce;
} else {
var1 = "PARENT: remaining placeholder";
var2 = 29;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__ANode__debug]))(self, var) /* debug on <self:APlaceholderExpr>*/;
RET_LABEL:;
}
/* method astvalidation#APlaceholderExpr#accept_ast_validation for (self: Object, ASTValidationVisitor) */
void VIRTUAL_astvalidation__APlaceholderExpr__accept_ast_validation(val* self, val* p0) {
astvalidation__APlaceholderExpr__accept_ast_validation(self, p0);
RET_LABEL:;
}
