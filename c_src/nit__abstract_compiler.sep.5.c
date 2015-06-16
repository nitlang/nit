#include "nit__abstract_compiler.sep.0.h"
/* method abstract_compiler#AIfExpr#expr for (self: AIfExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___AIfExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
val* var4 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var5 /* : AExpr */;
val* var7 /* : AExpr */;
val* var8 /* : RuntimeVariable */;
val* var_cond /* var cond: RuntimeVariable */;
val* var9 /* : NativeArray[String] */;
static val* varonce;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : FlatString */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : FlatString */;
val* var18 /* : String */;
val* var19 /* : String */;
val* var20 /* : nullable AExpr */;
val* var22 /* : nullable AExpr */;
val* var23 /* : RuntimeVariable */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : FlatString */;
val* var28 /* : nullable AExpr */;
val* var30 /* : nullable AExpr */;
val* var31 /* : RuntimeVariable */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
val* var35 /* : FlatString */;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AIfExpr> */
var3 = self->attrs[COLOR_nit__typing__AExpr___mtype].val; /* _mtype on <self:AIfExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2702);
fatal_exit(1);
}
{
var4 = nit___nit__AbstractCompilerVisitor___new_var(var_v, var1);
}
var_res = var4;
{
{ /* Inline parser_nodes#AIfExpr#n_expr (self) on <self:AIfExpr> */
var7 = self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_expr].val; /* _n_expr on <self:AIfExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1857);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nit___nit__AbstractCompilerVisitor___expr_bool(var_v, var5);
}
var_cond = var8;
if (unlikely(varonce==NULL)) {
var9 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "if (";
var13 = standard___standard__NativeString___to_s_with_length(var12, 4l);
var11 = var13;
varonce10 = var11;
}
((struct instance_standard__NativeArray*)var9)->values[0]=var11;
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "){";
var17 = standard___standard__NativeString___to_s_with_length(var16, 2l);
var15 = var17;
varonce14 = var15;
}
((struct instance_standard__NativeArray*)var9)->values[2]=var15;
} else {
var9 = varonce;
varonce = NULL;
}
{
var18 = ((val*(*)(val* self))(var_cond->class->vft[COLOR_standard__string__Object__to_s]))(var_cond); /* to_s on <var_cond:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var9)->values[1]=var18;
{
var19 = ((val*(*)(val* self))(var9->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var9); /* native_to_s on <var9:NativeArray[String]>*/
}
varonce = var9;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var19); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AIfExpr#n_then (self) on <self:AIfExpr> */
var22 = self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_then].val; /* _n_then on <self:AIfExpr> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2705);
fatal_exit(1);
}
{
var23 = nit___nit__AbstractCompilerVisitor___expr(var_v, var20, ((val*)NULL));
}
{
nit___nit__AbstractCompilerVisitor___assign(var_v, var_res, var23); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "} else {";
var27 = standard___standard__NativeString___to_s_with_length(var26, 8l);
var25 = var27;
varonce24 = var25;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var25); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AIfExpr#n_else (self) on <self:AIfExpr> */
var30 = self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_else].val; /* _n_else on <self:AIfExpr> */
var28 = var30;
RET_LABEL29:(void)0;
}
}
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2707);
fatal_exit(1);
}
{
var31 = nit___nit__AbstractCompilerVisitor___expr(var_v, var28, ((val*)NULL));
}
{
nit___nit__AbstractCompilerVisitor___assign(var_v, var_res, var31); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "}";
var35 = standard___standard__NativeString___to_s_with_length(var34, 1l);
var33 = var35;
varonce32 = var33;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var33); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AIfexprExpr#expr for (self: AIfexprExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___AIfexprExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
val* var4 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var5 /* : AExpr */;
val* var7 /* : AExpr */;
val* var8 /* : RuntimeVariable */;
val* var_cond /* var cond: RuntimeVariable */;
val* var9 /* : NativeArray[String] */;
static val* varonce;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : FlatString */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : FlatString */;
val* var18 /* : String */;
val* var19 /* : String */;
val* var20 /* : AExpr */;
val* var22 /* : AExpr */;
val* var23 /* : RuntimeVariable */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : FlatString */;
val* var28 /* : AExpr */;
val* var30 /* : AExpr */;
val* var31 /* : RuntimeVariable */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
val* var35 /* : FlatString */;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AIfexprExpr> */
var3 = self->attrs[COLOR_nit__typing__AExpr___mtype].val; /* _mtype on <self:AIfexprExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2716);
fatal_exit(1);
}
{
var4 = nit___nit__AbstractCompilerVisitor___new_var(var_v, var1);
}
var_res = var4;
{
{ /* Inline parser_nodes#AIfexprExpr#n_expr (self) on <self:AIfexprExpr> */
var7 = self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_expr].val; /* _n_expr on <self:AIfexprExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1880);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nit___nit__AbstractCompilerVisitor___expr_bool(var_v, var5);
}
var_cond = var8;
if (unlikely(varonce==NULL)) {
var9 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "if (";
var13 = standard___standard__NativeString___to_s_with_length(var12, 4l);
var11 = var13;
varonce10 = var11;
}
((struct instance_standard__NativeArray*)var9)->values[0]=var11;
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "){";
var17 = standard___standard__NativeString___to_s_with_length(var16, 2l);
var15 = var17;
varonce14 = var15;
}
((struct instance_standard__NativeArray*)var9)->values[2]=var15;
} else {
var9 = varonce;
varonce = NULL;
}
{
var18 = ((val*(*)(val* self))(var_cond->class->vft[COLOR_standard__string__Object__to_s]))(var_cond); /* to_s on <var_cond:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var9)->values[1]=var18;
{
var19 = ((val*(*)(val* self))(var9->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var9); /* native_to_s on <var9:NativeArray[String]>*/
}
varonce = var9;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var19); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AIfexprExpr#n_then (self) on <self:AIfexprExpr> */
var22 = self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_then].val; /* _n_then on <self:AIfexprExpr> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_then");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1886);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = nit___nit__AbstractCompilerVisitor___expr(var_v, var20, ((val*)NULL));
}
{
nit___nit__AbstractCompilerVisitor___assign(var_v, var_res, var23); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "} else {";
var27 = standard___standard__NativeString___to_s_with_length(var26, 8l);
var25 = var27;
varonce24 = var25;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var25); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AIfexprExpr#n_else (self) on <self:AIfexprExpr> */
var30 = self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_else].val; /* _n_else on <self:AIfexprExpr> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_else");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1892);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
var31 = nit___nit__AbstractCompilerVisitor___expr(var_v, var28, ((val*)NULL));
}
{
nit___nit__AbstractCompilerVisitor___assign(var_v, var_res, var31); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "}";
var35 = standard___standard__NativeString___to_s_with_length(var34, 1l);
var33 = var35;
varonce32 = var33;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var33); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ADoExpr#stmt for (self: ADoExpr, AbstractCompilerVisitor) */
void nit__abstract_compiler___ADoExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : nullable AExpr */;
val* var2 /* : nullable AExpr */;
val* var3 /* : nullable EscapeMark */;
val* var5 /* : nullable EscapeMark */;
var_v = p0;
{
{ /* Inline parser_nodes#ADoExpr#n_block (self) on <self:ADoExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__ADoExpr___n_block].val; /* _n_block on <self:ADoExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
nit___nit__AbstractCompilerVisitor___stmt(var_v, var); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline scope#ADoExpr#break_mark (self) on <self:ADoExpr> */
var5 = self->attrs[COLOR_nit__scope__ADoExpr___break_mark].val; /* _break_mark on <self:ADoExpr> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
nit___nit__AbstractCompilerVisitor___add_escape_label(var_v, var3); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_escape_label on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AWhileExpr#stmt for (self: AWhileExpr, AbstractCompilerVisitor) */
void nit__abstract_compiler___AWhileExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : FlatString */;
val* var3 /* : AExpr */;
val* var5 /* : AExpr */;
val* var6 /* : RuntimeVariable */;
val* var_cond /* var cond: RuntimeVariable */;
val* var8 /* : NativeArray[String] */;
static val* varonce7;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : FlatString */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : FlatString */;
val* var17 /* : String */;
val* var18 /* : String */;
val* var19 /* : nullable AExpr */;
val* var21 /* : nullable AExpr */;
val* var22 /* : nullable EscapeMark */;
val* var24 /* : nullable EscapeMark */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
val* var28 /* : FlatString */;
val* var29 /* : nullable EscapeMark */;
val* var31 /* : nullable EscapeMark */;
var_v = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "for(;;) {";
var2 = standard___standard__NativeString___to_s_with_length(var1, 9l);
var = var2;
varonce = var;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AWhileExpr#n_expr (self) on <self:AWhileExpr> */
var5 = self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_expr].val; /* _n_expr on <self:AWhileExpr> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1904);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = nit___nit__AbstractCompilerVisitor___expr_bool(var_v, var3);
}
var_cond = var6;
if (unlikely(varonce7==NULL)) {
var8 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "if (!";
var12 = standard___standard__NativeString___to_s_with_length(var11, 5l);
var10 = var12;
varonce9 = var10;
}
((struct instance_standard__NativeArray*)var8)->values[0]=var10;
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = ") break;";
var16 = standard___standard__NativeString___to_s_with_length(var15, 8l);
var14 = var16;
varonce13 = var14;
}
((struct instance_standard__NativeArray*)var8)->values[2]=var14;
} else {
var8 = varonce7;
varonce7 = NULL;
}
{
var17 = ((val*(*)(val* self))(var_cond->class->vft[COLOR_standard__string__Object__to_s]))(var_cond); /* to_s on <var_cond:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var8)->values[1]=var17;
{
var18 = ((val*(*)(val* self))(var8->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var8); /* native_to_s on <var8:NativeArray[String]>*/
}
varonce7 = var8;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var18); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AWhileExpr#n_block (self) on <self:AWhileExpr> */
var21 = self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_block].val; /* _n_block on <self:AWhileExpr> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
nit___nit__AbstractCompilerVisitor___stmt(var_v, var19); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline scope#AWhileExpr#continue_mark (self) on <self:AWhileExpr> */
var24 = self->attrs[COLOR_nit__scope__AWhileExpr___continue_mark].val; /* _continue_mark on <self:AWhileExpr> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
nit___nit__AbstractCompilerVisitor___add_escape_label(var_v, var22); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_escape_label on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "}";
var28 = standard___standard__NativeString___to_s_with_length(var27, 1l);
var26 = var28;
varonce25 = var26;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var26); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline scope#AWhileExpr#break_mark (self) on <self:AWhileExpr> */
var31 = self->attrs[COLOR_nit__scope__AWhileExpr___break_mark].val; /* _break_mark on <self:AWhileExpr> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
nit___nit__AbstractCompilerVisitor___add_escape_label(var_v, var29); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_escape_label on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#ALoopExpr#stmt for (self: ALoopExpr, AbstractCompilerVisitor) */
void nit__abstract_compiler___ALoopExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : FlatString */;
val* var3 /* : nullable AExpr */;
val* var5 /* : nullable AExpr */;
val* var6 /* : nullable EscapeMark */;
val* var8 /* : nullable EscapeMark */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : FlatString */;
val* var13 /* : nullable EscapeMark */;
val* var15 /* : nullable EscapeMark */;
var_v = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "for(;;) {";
var2 = standard___standard__NativeString___to_s_with_length(var1, 9l);
var = var2;
varonce = var;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#ALoopExpr#n_block (self) on <self:ALoopExpr> */
var5 = self->attrs[COLOR_nit__parser_nodes__ALoopExpr___n_block].val; /* _n_block on <self:ALoopExpr> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
nit___nit__AbstractCompilerVisitor___stmt(var_v, var3); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline scope#ALoopExpr#continue_mark (self) on <self:ALoopExpr> */
var8 = self->attrs[COLOR_nit__scope__ALoopExpr___continue_mark].val; /* _continue_mark on <self:ALoopExpr> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
nit___nit__AbstractCompilerVisitor___add_escape_label(var_v, var6); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_escape_label on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "}";
var12 = standard___standard__NativeString___to_s_with_length(var11, 1l);
var10 = var12;
varonce9 = var10;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var10); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline scope#ALoopExpr#break_mark (self) on <self:ALoopExpr> */
var15 = self->attrs[COLOR_nit__scope__ALoopExpr___break_mark].val; /* _break_mark on <self:ALoopExpr> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
nit___nit__AbstractCompilerVisitor___add_escape_label(var_v, var13); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_escape_label on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AForExpr#stmt for (self: AForExpr, AbstractCompilerVisitor) */
void nit__abstract_compiler___AForExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : RuntimeVariable */;
val* var_cl /* var cl: RuntimeVariable */;
val* var4 /* : nullable CallSite */;
val* var6 /* : nullable CallSite */;
val* var_it_meth /* var it_meth: nullable CallSite */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : Array[RuntimeVariable] */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var13 /* : nullable RuntimeVariable */;
val* var_it /* var it: nullable RuntimeVariable */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
static val* varonce;
val* var19 /* : String */;
char* var20 /* : NativeString */;
val* var21 /* : FlatString */;
val* var22 /* : nullable CallSite */;
val* var24 /* : nullable CallSite */;
val* var_isok_meth /* var isok_meth: nullable CallSite */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : Array[RuntimeVariable] */;
val* var_31 /* var : Array[RuntimeVariable] */;
val* var32 /* : nullable RuntimeVariable */;
val* var_ok /* var ok: nullable RuntimeVariable */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
val* var39 /* : NativeArray[String] */;
static val* varonce38;
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
val* var50 /* : nullable Array[Variable] */;
val* var52 /* : nullable Array[Variable] */;
long var53 /* : Int */;
long var55 /* : Int */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
val* var59 /* : nullable CallSite */;
val* var61 /* : nullable CallSite */;
val* var_item_meth /* var item_meth: nullable CallSite */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
val* var67 /* : Array[RuntimeVariable] */;
val* var_68 /* var : Array[RuntimeVariable] */;
val* var69 /* : nullable RuntimeVariable */;
val* var_i /* var i: nullable RuntimeVariable */;
short int var70 /* : Bool */;
short int var71 /* : Bool */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
val* var75 /* : nullable Array[Variable] */;
val* var77 /* : nullable Array[Variable] */;
val* var78 /* : nullable Object */;
val* var79 /* : RuntimeVariable */;
val* var80 /* : nullable Array[Variable] */;
val* var82 /* : nullable Array[Variable] */;
long var83 /* : Int */;
long var85 /* : Int */;
short int var86 /* : Bool */;
short int var88 /* : Bool */;
val* var89 /* : nullable CallSite */;
val* var91 /* : nullable CallSite */;
val* var_key_meth /* var key_meth: nullable CallSite */;
short int var92 /* : Bool */;
short int var93 /* : Bool */;
short int var95 /* : Bool */;
short int var96 /* : Bool */;
val* var97 /* : Array[RuntimeVariable] */;
val* var_98 /* var : Array[RuntimeVariable] */;
val* var99 /* : nullable RuntimeVariable */;
val* var_i100 /* var i: nullable RuntimeVariable */;
short int var101 /* : Bool */;
short int var102 /* : Bool */;
short int var104 /* : Bool */;
short int var105 /* : Bool */;
val* var106 /* : nullable Array[Variable] */;
val* var108 /* : nullable Array[Variable] */;
val* var109 /* : nullable Object */;
val* var110 /* : RuntimeVariable */;
val* var111 /* : nullable CallSite */;
val* var113 /* : nullable CallSite */;
val* var_item_meth114 /* var item_meth: nullable CallSite */;
short int var115 /* : Bool */;
short int var116 /* : Bool */;
short int var118 /* : Bool */;
short int var119 /* : Bool */;
val* var120 /* : Array[RuntimeVariable] */;
val* var_121 /* var : Array[RuntimeVariable] */;
val* var122 /* : nullable RuntimeVariable */;
short int var123 /* : Bool */;
short int var124 /* : Bool */;
short int var126 /* : Bool */;
short int var127 /* : Bool */;
val* var128 /* : nullable Array[Variable] */;
val* var130 /* : nullable Array[Variable] */;
val* var131 /* : nullable Object */;
val* var132 /* : RuntimeVariable */;
val* var133 /* : nullable AExpr */;
val* var135 /* : nullable AExpr */;
val* var136 /* : nullable EscapeMark */;
val* var138 /* : nullable EscapeMark */;
val* var139 /* : nullable CallSite */;
val* var141 /* : nullable CallSite */;
val* var_next_meth /* var next_meth: nullable CallSite */;
short int var142 /* : Bool */;
short int var143 /* : Bool */;
short int var145 /* : Bool */;
short int var146 /* : Bool */;
val* var147 /* : Array[RuntimeVariable] */;
val* var_148 /* var : Array[RuntimeVariable] */;
val* var149 /* : nullable RuntimeVariable */;
static val* varonce150;
val* var151 /* : String */;
char* var152 /* : NativeString */;
val* var153 /* : FlatString */;
val* var154 /* : nullable EscapeMark */;
val* var156 /* : nullable EscapeMark */;
val* var157 /* : nullable CallSite */;
val* var159 /* : nullable CallSite */;
val* var_method_finish /* var method_finish: nullable CallSite */;
short int var160 /* : Bool */;
short int var161 /* : Bool */;
short int var163 /* : Bool */;
short int var164 /* : Bool */;
val* var165 /* : Array[RuntimeVariable] */;
val* var_166 /* var : Array[RuntimeVariable] */;
val* var167 /* : nullable RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#AForExpr#n_expr (self) on <self:AForExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__AForExpr___n_expr].val; /* _n_expr on <self:AForExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1940);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit___nit__AbstractCompilerVisitor___expr(var_v, var, ((val*)NULL));
}
var_cl = var3;
{
{ /* Inline typing#AForExpr#method_iterator (self) on <self:AForExpr> */
var6 = self->attrs[COLOR_nit__typing__AForExpr___method_iterator].val; /* _method_iterator on <self:AForExpr> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_it_meth = var4;
if (var_it_meth == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_it_meth,((val*)NULL)) on <var_it_meth:nullable CallSite> */
var_other = ((val*)NULL);
{
var10 = ((short int(*)(val* self, val* p0))(var_it_meth->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_it_meth, var_other); /* == on <var_it_meth:nullable CallSite(CallSite)>*/
}
var11 = !var10;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2764);
fatal_exit(1);
}
var12 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
{
standard___standard__Array___with_capacity(var12, 1l); /* Direct call array#Array#with_capacity on <var12:Array[RuntimeVariable]>*/
}
var_ = var12;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_cl); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
var13 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_it_meth, var_); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var_it = var13;
if (var_it == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_it,((val*)NULL)) on <var_it:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var17 = ((short int(*)(val* self, val* p0))(var_it->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_it, var_other); /* == on <var_it:nullable RuntimeVariable(RuntimeVariable)>*/
}
var18 = !var17;
var15 = var18;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2766);
fatal_exit(1);
}
if (likely(varonce!=NULL)) {
var19 = varonce;
} else {
var20 = "for(;;) {";
var21 = standard___standard__NativeString___to_s_with_length(var20, 9l);
var19 = var21;
varonce = var19;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var19); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline typing#AForExpr#method_is_ok (self) on <self:AForExpr> */
var24 = self->attrs[COLOR_nit__typing__AForExpr___method_is_ok].val; /* _method_is_ok on <self:AForExpr> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
var_isok_meth = var22;
if (var_isok_meth == NULL) {
var25 = 0; /* is null */
} else {
var25 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_isok_meth,((val*)NULL)) on <var_isok_meth:nullable CallSite> */
var_other = ((val*)NULL);
{
var28 = ((short int(*)(val* self, val* p0))(var_isok_meth->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_isok_meth, var_other); /* == on <var_isok_meth:nullable CallSite(CallSite)>*/
}
var29 = !var28;
var26 = var29;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
var25 = var26;
}
if (unlikely(!var25)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2769);
fatal_exit(1);
}
var30 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
{
standard___standard__Array___with_capacity(var30, 1l); /* Direct call array#Array#with_capacity on <var30:Array[RuntimeVariable]>*/
}
var_31 = var30;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_31, var_it); /* Direct call array#AbstractArray#push on <var_31:Array[RuntimeVariable]>*/
}
{
var32 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_isok_meth, var_31); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var_ok = var32;
if (var_ok == NULL) {
var33 = 0; /* is null */
} else {
var33 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ok,((val*)NULL)) on <var_ok:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var36 = ((short int(*)(val* self, val* p0))(var_ok->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ok, var_other); /* == on <var_ok:nullable RuntimeVariable(RuntimeVariable)>*/
}
var37 = !var36;
var34 = var37;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
var33 = var34;
}
if (unlikely(!var33)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2771);
fatal_exit(1);
}
if (unlikely(varonce38==NULL)) {
var39 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "if(!";
var43 = standard___standard__NativeString___to_s_with_length(var42, 4l);
var41 = var43;
varonce40 = var41;
}
((struct instance_standard__NativeArray*)var39)->values[0]=var41;
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = ") break;";
var47 = standard___standard__NativeString___to_s_with_length(var46, 8l);
var45 = var47;
varonce44 = var45;
}
((struct instance_standard__NativeArray*)var39)->values[2]=var45;
} else {
var39 = varonce38;
varonce38 = NULL;
}
{
var48 = ((val*(*)(val* self))(var_ok->class->vft[COLOR_standard__string__Object__to_s]))(var_ok); /* to_s on <var_ok:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var39)->values[1]=var48;
{
var49 = ((val*(*)(val* self))(var39->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var39); /* native_to_s on <var39:NativeArray[String]>*/
}
varonce38 = var39;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var49); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var52 = self->attrs[COLOR_nit__scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var50 = var52;
RET_LABEL51:(void)0;
}
}
if (var50 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2773);
fatal_exit(1);
} else {
{ /* Inline array#AbstractArrayRead#length (var50) on <var50:nullable Array[Variable]> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__array, 26);
fatal_exit(1);
}
var55 = var50->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var50:nullable Array[Variable]> */
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var53,1l) on <var53:Int> */
var58 = var53 == 1l;
var56 = var58;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
if (var56){
{
{ /* Inline typing#AForExpr#method_item (self) on <self:AForExpr> */
var61 = self->attrs[COLOR_nit__typing__AForExpr___method_item].val; /* _method_item on <self:AForExpr> */
var59 = var61;
RET_LABEL60:(void)0;
}
}
var_item_meth = var59;
if (var_item_meth == NULL) {
var62 = 0; /* is null */
} else {
var62 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_item_meth,((val*)NULL)) on <var_item_meth:nullable CallSite> */
var_other = ((val*)NULL);
{
var65 = ((short int(*)(val* self, val* p0))(var_item_meth->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_item_meth, var_other); /* == on <var_item_meth:nullable CallSite(CallSite)>*/
}
var66 = !var65;
var63 = var66;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
var62 = var63;
}
if (unlikely(!var62)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2775);
fatal_exit(1);
}
var67 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
{
standard___standard__Array___with_capacity(var67, 1l); /* Direct call array#Array#with_capacity on <var67:Array[RuntimeVariable]>*/
}
var_68 = var67;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_68, var_it); /* Direct call array#AbstractArray#push on <var_68:Array[RuntimeVariable]>*/
}
{
var69 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_item_meth, var_68); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var_i = var69;
if (var_i == NULL) {
var70 = 0; /* is null */
} else {
var70 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_i,((val*)NULL)) on <var_i:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var73 = ((short int(*)(val* self, val* p0))(var_i->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_i, var_other); /* == on <var_i:nullable RuntimeVariable(RuntimeVariable)>*/
}
var74 = !var73;
var71 = var74;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
var70 = var71;
}
if (unlikely(!var70)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2777);
fatal_exit(1);
}
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var77 = self->attrs[COLOR_nit__scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var75 = var77;
RET_LABEL76:(void)0;
}
}
if (var75 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2778);
fatal_exit(1);
} else {
var78 = standard___standard__SequenceRead___Collection__first(var75);
}
{
var79 = nit___nit__AbstractCompilerVisitor___variable(var_v, var78);
}
{
nit___nit__AbstractCompilerVisitor___assign(var_v, var79, var_i); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
} else {
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var82 = self->attrs[COLOR_nit__scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var80 = var82;
RET_LABEL81:(void)0;
}
}
if (var80 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2779);
fatal_exit(1);
} else {
{ /* Inline array#AbstractArrayRead#length (var80) on <var80:nullable Array[Variable]> */
if (unlikely(var80 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__array, 26);
fatal_exit(1);
}
var85 = var80->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var80:nullable Array[Variable]> */
var83 = var85;
RET_LABEL84:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var83,2l) on <var83:Int> */
var88 = var83 == 2l;
var86 = var88;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
}
if (var86){
{
{ /* Inline typing#AForExpr#method_key (self) on <self:AForExpr> */
var91 = self->attrs[COLOR_nit__typing__AForExpr___method_key].val; /* _method_key on <self:AForExpr> */
var89 = var91;
RET_LABEL90:(void)0;
}
}
var_key_meth = var89;
if (var_key_meth == NULL) {
var92 = 0; /* is null */
} else {
var92 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_key_meth,((val*)NULL)) on <var_key_meth:nullable CallSite> */
var_other = ((val*)NULL);
{
var95 = ((short int(*)(val* self, val* p0))(var_key_meth->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_key_meth, var_other); /* == on <var_key_meth:nullable CallSite(CallSite)>*/
}
var96 = !var95;
var93 = var96;
goto RET_LABEL94;
RET_LABEL94:(void)0;
}
var92 = var93;
}
if (unlikely(!var92)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2781);
fatal_exit(1);
}
var97 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
{
standard___standard__Array___with_capacity(var97, 1l); /* Direct call array#Array#with_capacity on <var97:Array[RuntimeVariable]>*/
}
var_98 = var97;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_98, var_it); /* Direct call array#AbstractArray#push on <var_98:Array[RuntimeVariable]>*/
}
{
var99 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_key_meth, var_98); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var_i100 = var99;
if (var_i100 == NULL) {
var101 = 0; /* is null */
} else {
var101 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_i100,((val*)NULL)) on <var_i100:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var104 = ((short int(*)(val* self, val* p0))(var_i100->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_i100, var_other); /* == on <var_i100:nullable RuntimeVariable(RuntimeVariable)>*/
}
var105 = !var104;
var102 = var105;
goto RET_LABEL103;
RET_LABEL103:(void)0;
}
var101 = var102;
}
if (unlikely(!var101)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2783);
fatal_exit(1);
}
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var108 = self->attrs[COLOR_nit__scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var106 = var108;
RET_LABEL107:(void)0;
}
}
if (var106 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2784);
fatal_exit(1);
} else {
var109 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var106, 0l);
}
{
var110 = nit___nit__AbstractCompilerVisitor___variable(var_v, var109);
}
{
nit___nit__AbstractCompilerVisitor___assign(var_v, var110, var_i100); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline typing#AForExpr#method_item (self) on <self:AForExpr> */
var113 = self->attrs[COLOR_nit__typing__AForExpr___method_item].val; /* _method_item on <self:AForExpr> */
var111 = var113;
RET_LABEL112:(void)0;
}
}
var_item_meth114 = var111;
if (var_item_meth114 == NULL) {
var115 = 0; /* is null */
} else {
var115 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_item_meth114,((val*)NULL)) on <var_item_meth114:nullable CallSite> */
var_other = ((val*)NULL);
{
var118 = ((short int(*)(val* self, val* p0))(var_item_meth114->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_item_meth114, var_other); /* == on <var_item_meth114:nullable CallSite(CallSite)>*/
}
var119 = !var118;
var116 = var119;
goto RET_LABEL117;
RET_LABEL117:(void)0;
}
var115 = var116;
}
if (unlikely(!var115)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2786);
fatal_exit(1);
}
var120 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
{
standard___standard__Array___with_capacity(var120, 1l); /* Direct call array#Array#with_capacity on <var120:Array[RuntimeVariable]>*/
}
var_121 = var120;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_121, var_it); /* Direct call array#AbstractArray#push on <var_121:Array[RuntimeVariable]>*/
}
{
var122 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_item_meth114, var_121); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var_i100 = var122;
if (var_i100 == NULL) {
var123 = 0; /* is null */
} else {
var123 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_i100,((val*)NULL)) on <var_i100:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var126 = ((short int(*)(val* self, val* p0))(var_i100->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_i100, var_other); /* == on <var_i100:nullable RuntimeVariable(RuntimeVariable)>*/
}
var127 = !var126;
var124 = var127;
goto RET_LABEL125;
RET_LABEL125:(void)0;
}
var123 = var124;
}
if (unlikely(!var123)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2788);
fatal_exit(1);
}
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var130 = self->attrs[COLOR_nit__scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var128 = var130;
RET_LABEL129:(void)0;
}
}
if (var128 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2789);
fatal_exit(1);
} else {
var131 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var128, 1l);
}
{
var132 = nit___nit__AbstractCompilerVisitor___variable(var_v, var131);
}
{
nit___nit__AbstractCompilerVisitor___assign(var_v, var132, var_i100); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2791);
fatal_exit(1);
}
}
{
{ /* Inline parser_nodes#AForExpr#n_block (self) on <self:AForExpr> */
var135 = self->attrs[COLOR_nit__parser_nodes__AForExpr___n_block].val; /* _n_block on <self:AForExpr> */
var133 = var135;
RET_LABEL134:(void)0;
}
}
{
nit___nit__AbstractCompilerVisitor___stmt(var_v, var133); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline scope#AForExpr#continue_mark (self) on <self:AForExpr> */
var138 = self->attrs[COLOR_nit__scope__AForExpr___continue_mark].val; /* _continue_mark on <self:AForExpr> */
var136 = var138;
RET_LABEL137:(void)0;
}
}
{
nit___nit__AbstractCompilerVisitor___add_escape_label(var_v, var136); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_escape_label on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline typing#AForExpr#method_next (self) on <self:AForExpr> */
var141 = self->attrs[COLOR_nit__typing__AForExpr___method_next].val; /* _method_next on <self:AForExpr> */
var139 = var141;
RET_LABEL140:(void)0;
}
}
var_next_meth = var139;
if (var_next_meth == NULL) {
var142 = 0; /* is null */
} else {
var142 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_next_meth,((val*)NULL)) on <var_next_meth:nullable CallSite> */
var_other = ((val*)NULL);
{
var145 = ((short int(*)(val* self, val* p0))(var_next_meth->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_next_meth, var_other); /* == on <var_next_meth:nullable CallSite(CallSite)>*/
}
var146 = !var145;
var143 = var146;
goto RET_LABEL144;
RET_LABEL144:(void)0;
}
var142 = var143;
}
if (unlikely(!var142)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2796);
fatal_exit(1);
}
var147 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
{
standard___standard__Array___with_capacity(var147, 1l); /* Direct call array#Array#with_capacity on <var147:Array[RuntimeVariable]>*/
}
var_148 = var147;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_148, var_it); /* Direct call array#AbstractArray#push on <var_148:Array[RuntimeVariable]>*/
}
{
var149 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_next_meth, var_148); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce150!=NULL)) {
var151 = varonce150;
} else {
var152 = "}";
var153 = standard___standard__NativeString___to_s_with_length(var152, 1l);
var151 = var153;
varonce150 = var151;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var151); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline scope#AForExpr#break_mark (self) on <self:AForExpr> */
var156 = self->attrs[COLOR_nit__scope__AForExpr___break_mark].val; /* _break_mark on <self:AForExpr> */
var154 = var156;
RET_LABEL155:(void)0;
}
}
{
nit___nit__AbstractCompilerVisitor___add_escape_label(var_v, var154); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_escape_label on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline typing#AForExpr#method_finish (self) on <self:AForExpr> */
var159 = self->attrs[COLOR_nit__typing__AForExpr___method_finish].val; /* _method_finish on <self:AForExpr> */
var157 = var159;
RET_LABEL158:(void)0;
}
}
var_method_finish = var157;
if (var_method_finish == NULL) {
var160 = 0; /* is null */
} else {
var160 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_method_finish,((val*)NULL)) on <var_method_finish:nullable CallSite> */
var_other = ((val*)NULL);
{
var163 = ((short int(*)(val* self, val* p0))(var_method_finish->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_method_finish, var_other); /* == on <var_method_finish:nullable CallSite(CallSite)>*/
}
var164 = !var163;
var161 = var164;
goto RET_LABEL162;
RET_LABEL162:(void)0;
}
var160 = var161;
}
if (var160){
var165 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
{
standard___standard__Array___with_capacity(var165, 1l); /* Direct call array#Array#with_capacity on <var165:Array[RuntimeVariable]>*/
}
var_166 = var165;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_166, var_it); /* Direct call array#AbstractArray#push on <var_166:Array[RuntimeVariable]>*/
}
{
var167 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_method_finish, var_166); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#AAssertExpr#stmt for (self: AAssertExpr, AbstractCompilerVisitor) */
void nit__abstract_compiler___AAssertExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : AbstractCompiler */;
val* var2 /* : AbstractCompiler */;
val* var3 /* : ModelBuilder */;
val* var5 /* : ModelBuilder */;
val* var6 /* : ToolContext */;
val* var8 /* : ToolContext */;
val* var9 /* : OptionBool */;
val* var11 /* : OptionBool */;
val* var12 /* : nullable Object */;
val* var14 /* : nullable Object */;
short int var15 /* : Bool */;
val* var16 /* : AExpr */;
val* var18 /* : AExpr */;
val* var19 /* : RuntimeVariable */;
val* var_cond /* var cond: RuntimeVariable */;
val* var20 /* : NativeArray[String] */;
static val* varonce;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
val* var24 /* : FlatString */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
val* var28 /* : FlatString */;
val* var29 /* : String */;
val* var30 /* : String */;
val* var31 /* : nullable AExpr */;
val* var33 /* : nullable AExpr */;
val* var34 /* : nullable TId */;
val* var36 /* : nullable TId */;
val* var_nid /* var nid: nullable TId */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
val* var43 /* : NativeArray[String] */;
static val* varonce42;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
val* var47 /* : FlatString */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
val* var51 /* : FlatString */;
val* var52 /* : String */;
val* var53 /* : String */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
val* var57 /* : FlatString */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
val* var61 /* : FlatString */;
var_v = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var2 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var) on <var:AbstractCompiler> */
var5 = var->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var:AbstractCompiler> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var3) on <var3:ModelBuilder> */
var8 = var3->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var3:ModelBuilder> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_assert (var6) on <var6:ToolContext> */
var11 = var6->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_assert].val; /* _opt_no_check_assert on <var6:ToolContext> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_assert");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 52);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline opts#Option#value (var9) on <var9:OptionBool> */
var14 = var9->attrs[COLOR_opts__Option___value].val; /* _value on <var9:OptionBool> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
var15 = (short int)((long)(var12)>>2);
if (var15){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AAssertExpr#n_expr (self) on <self:AAssertExpr> */
var18 = self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_expr].val; /* _n_expr on <self:AAssertExpr> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1978);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = nit___nit__AbstractCompilerVisitor___expr_bool(var_v, var16);
}
var_cond = var19;
if (unlikely(varonce==NULL)) {
var20 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = "if (unlikely(!";
var24 = standard___standard__NativeString___to_s_with_length(var23, 14l);
var22 = var24;
varonce21 = var22;
}
((struct instance_standard__NativeArray*)var20)->values[0]=var22;
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = ")) {";
var28 = standard___standard__NativeString___to_s_with_length(var27, 4l);
var26 = var28;
varonce25 = var26;
}
((struct instance_standard__NativeArray*)var20)->values[2]=var26;
} else {
var20 = varonce;
varonce = NULL;
}
{
var29 = ((val*(*)(val* self))(var_cond->class->vft[COLOR_standard__string__Object__to_s]))(var_cond); /* to_s on <var_cond:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var20)->values[1]=var29;
{
var30 = ((val*(*)(val* self))(var20->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var20); /* native_to_s on <var20:NativeArray[String]>*/
}
varonce = var20;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var30); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AAssertExpr#n_else (self) on <self:AAssertExpr> */
var33 = self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_else].val; /* _n_else on <self:AAssertExpr> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
nit___nit__AbstractCompilerVisitor___stmt(var_v, var31); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AAssertExpr#n_id (self) on <self:AAssertExpr> */
var36 = self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_id].val; /* _n_id on <self:AAssertExpr> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
var_nid = var34;
if (var_nid == NULL) {
var37 = 0; /* is null */
} else {
var37 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nid,((val*)NULL)) on <var_nid:nullable TId> */
var_other = ((val*)NULL);
{
var40 = ((short int(*)(val* self, val* p0))(var_nid->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nid, var_other); /* == on <var_nid:nullable TId(TId)>*/
}
var41 = !var40;
var38 = var41;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
var37 = var38;
}
if (var37){
if (unlikely(varonce42==NULL)) {
var43 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = "Assert \'";
var47 = standard___standard__NativeString___to_s_with_length(var46, 8l);
var45 = var47;
varonce44 = var45;
}
((struct instance_standard__NativeArray*)var43)->values[0]=var45;
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = "\' failed";
var51 = standard___standard__NativeString___to_s_with_length(var50, 8l);
var49 = var51;
varonce48 = var49;
}
((struct instance_standard__NativeArray*)var43)->values[2]=var49;
} else {
var43 = varonce42;
varonce42 = NULL;
}
{
var52 = nit__lexer_work___Token___text(var_nid);
}
((struct instance_standard__NativeArray*)var43)->values[1]=var52;
{
var53 = ((val*(*)(val* self))(var43->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var43); /* native_to_s on <var43:NativeArray[String]>*/
}
varonce42 = var43;
{
nit___nit__AbstractCompilerVisitor___add_abort(var_v, var53); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:AbstractCompilerVisitor>*/
}
} else {
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = "Assert failed";
var57 = standard___standard__NativeString___to_s_with_length(var56, 13l);
var55 = var57;
varonce54 = var55;
}
{
nit___nit__AbstractCompilerVisitor___add_abort(var_v, var55); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:AbstractCompilerVisitor>*/
}
}
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "}";
var61 = standard___standard__NativeString___to_s_with_length(var60, 1l);
var59 = var61;
varonce58 = var59;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var59); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AOrExpr#expr for (self: AOrExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___AOrExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
val* var4 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var5 /* : AExpr */;
val* var7 /* : AExpr */;
val* var8 /* : RuntimeVariable */;
val* var_i1 /* var i1: RuntimeVariable */;
val* var9 /* : NativeArray[String] */;
static val* varonce;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : FlatString */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : FlatString */;
val* var18 /* : String */;
val* var19 /* : String */;
val* var21 /* : NativeArray[String] */;
static val* varonce20;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
val* var25 /* : FlatString */;
val* var26 /* : String */;
val* var27 /* : String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
val* var31 /* : FlatString */;
val* var32 /* : AExpr */;
val* var34 /* : AExpr */;
val* var35 /* : RuntimeVariable */;
val* var_i2 /* var i2: RuntimeVariable */;
val* var37 /* : NativeArray[String] */;
static val* varonce36;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : FlatString */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : FlatString */;
val* var46 /* : String */;
val* var47 /* : String */;
val* var48 /* : String */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
val* var52 /* : FlatString */;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AOrExpr> */
var3 = self->attrs[COLOR_nit__typing__AExpr___mtype].val; /* _mtype on <self:AOrExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2830);
fatal_exit(1);
}
{
var4 = nit___nit__AbstractCompilerVisitor___new_var(var_v, var1);
}
var_res = var4;
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr (self) on <self:AOrExpr> */
var7 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AOrExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2053);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nit___nit__AbstractCompilerVisitor___expr_bool(var_v, var5);
}
var_i1 = var8;
if (unlikely(varonce==NULL)) {
var9 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "if (";
var13 = standard___standard__NativeString___to_s_with_length(var12, 4l);
var11 = var13;
varonce10 = var11;
}
((struct instance_standard__NativeArray*)var9)->values[0]=var11;
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = ") {";
var17 = standard___standard__NativeString___to_s_with_length(var16, 3l);
var15 = var17;
varonce14 = var15;
}
((struct instance_standard__NativeArray*)var9)->values[2]=var15;
} else {
var9 = varonce;
varonce = NULL;
}
{
var18 = ((val*(*)(val* self))(var_i1->class->vft[COLOR_standard__string__Object__to_s]))(var_i1); /* to_s on <var_i1:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var9)->values[1]=var18;
{
var19 = ((val*(*)(val* self))(var9->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var9); /* native_to_s on <var9:NativeArray[String]>*/
}
varonce = var9;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var19); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce20==NULL)) {
var21 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = " = 1;";
var25 = standard___standard__NativeString___to_s_with_length(var24, 5l);
var23 = var25;
varonce22 = var23;
}
((struct instance_standard__NativeArray*)var21)->values[1]=var23;
} else {
var21 = varonce20;
varonce20 = NULL;
}
{
var26 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var21)->values[0]=var26;
{
var27 = ((val*(*)(val* self))(var21->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var21); /* native_to_s on <var21:NativeArray[String]>*/
}
varonce20 = var21;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var27); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "} else {";
var31 = standard___standard__NativeString___to_s_with_length(var30, 8l);
var29 = var31;
varonce28 = var29;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var29); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr2 (self) on <self:AOrExpr> */
var34 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AOrExpr> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2059);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
var35 = nit___nit__AbstractCompilerVisitor___expr_bool(var_v, var32);
}
var_i2 = var35;
if (unlikely(varonce36==NULL)) {
var37 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = " = ";
var41 = standard___standard__NativeString___to_s_with_length(var40, 3l);
var39 = var41;
varonce38 = var39;
}
((struct instance_standard__NativeArray*)var37)->values[1]=var39;
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = ";";
var45 = standard___standard__NativeString___to_s_with_length(var44, 1l);
var43 = var45;
varonce42 = var43;
}
((struct instance_standard__NativeArray*)var37)->values[3]=var43;
} else {
var37 = varonce36;
varonce36 = NULL;
}
{
var46 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var37)->values[0]=var46;
{
var47 = ((val*(*)(val* self))(var_i2->class->vft[COLOR_standard__string__Object__to_s]))(var_i2); /* to_s on <var_i2:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var37)->values[2]=var47;
{
var48 = ((val*(*)(val* self))(var37->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var37); /* native_to_s on <var37:NativeArray[String]>*/
}
varonce36 = var37;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var48); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "}";
var52 = standard___standard__NativeString___to_s_with_length(var51, 1l);
var50 = var52;
varonce49 = var50;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var50); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AImpliesExpr#expr for (self: AImpliesExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___AImpliesExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
val* var4 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var5 /* : AExpr */;
val* var7 /* : AExpr */;
val* var8 /* : RuntimeVariable */;
val* var_i1 /* var i1: RuntimeVariable */;
val* var9 /* : NativeArray[String] */;
static val* varonce;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : FlatString */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : FlatString */;
val* var18 /* : String */;
val* var19 /* : String */;
val* var21 /* : NativeArray[String] */;
static val* varonce20;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
val* var25 /* : FlatString */;
val* var26 /* : String */;
val* var27 /* : String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
val* var31 /* : FlatString */;
val* var32 /* : AExpr */;
val* var34 /* : AExpr */;
val* var35 /* : RuntimeVariable */;
val* var_i2 /* var i2: RuntimeVariable */;
val* var37 /* : NativeArray[String] */;
static val* varonce36;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : FlatString */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : FlatString */;
val* var46 /* : String */;
val* var47 /* : String */;
val* var48 /* : String */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
val* var52 /* : FlatString */;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AImpliesExpr> */
var3 = self->attrs[COLOR_nit__typing__AExpr___mtype].val; /* _mtype on <self:AImpliesExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2845);
fatal_exit(1);
}
{
var4 = nit___nit__AbstractCompilerVisitor___new_var(var_v, var1);
}
var_res = var4;
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr (self) on <self:AImpliesExpr> */
var7 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AImpliesExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2053);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nit___nit__AbstractCompilerVisitor___expr_bool(var_v, var5);
}
var_i1 = var8;
if (unlikely(varonce==NULL)) {
var9 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "if (!";
var13 = standard___standard__NativeString___to_s_with_length(var12, 5l);
var11 = var13;
varonce10 = var11;
}
((struct instance_standard__NativeArray*)var9)->values[0]=var11;
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = ") {";
var17 = standard___standard__NativeString___to_s_with_length(var16, 3l);
var15 = var17;
varonce14 = var15;
}
((struct instance_standard__NativeArray*)var9)->values[2]=var15;
} else {
var9 = varonce;
varonce = NULL;
}
{
var18 = ((val*(*)(val* self))(var_i1->class->vft[COLOR_standard__string__Object__to_s]))(var_i1); /* to_s on <var_i1:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var9)->values[1]=var18;
{
var19 = ((val*(*)(val* self))(var9->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var9); /* native_to_s on <var9:NativeArray[String]>*/
}
varonce = var9;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var19); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce20==NULL)) {
var21 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = " = 1;";
var25 = standard___standard__NativeString___to_s_with_length(var24, 5l);
var23 = var25;
varonce22 = var23;
}
((struct instance_standard__NativeArray*)var21)->values[1]=var23;
} else {
var21 = varonce20;
varonce20 = NULL;
}
{
var26 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var21)->values[0]=var26;
{
var27 = ((val*(*)(val* self))(var21->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var21); /* native_to_s on <var21:NativeArray[String]>*/
}
varonce20 = var21;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var27); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "} else {";
var31 = standard___standard__NativeString___to_s_with_length(var30, 8l);
var29 = var31;
varonce28 = var29;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var29); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr2 (self) on <self:AImpliesExpr> */
var34 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AImpliesExpr> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2059);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
var35 = nit___nit__AbstractCompilerVisitor___expr_bool(var_v, var32);
}
var_i2 = var35;
if (unlikely(varonce36==NULL)) {
var37 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = " = ";
var41 = standard___standard__NativeString___to_s_with_length(var40, 3l);
var39 = var41;
varonce38 = var39;
}
((struct instance_standard__NativeArray*)var37)->values[1]=var39;
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = ";";
var45 = standard___standard__NativeString___to_s_with_length(var44, 1l);
var43 = var45;
varonce42 = var43;
}
((struct instance_standard__NativeArray*)var37)->values[3]=var43;
} else {
var37 = varonce36;
varonce36 = NULL;
}
{
var46 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var37)->values[0]=var46;
{
var47 = ((val*(*)(val* self))(var_i2->class->vft[COLOR_standard__string__Object__to_s]))(var_i2); /* to_s on <var_i2:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var37)->values[2]=var47;
{
var48 = ((val*(*)(val* self))(var37->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var37); /* native_to_s on <var37:NativeArray[String]>*/
}
varonce36 = var37;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var48); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "}";
var52 = standard___standard__NativeString___to_s_with_length(var51, 1l);
var50 = var52;
varonce49 = var50;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var50); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAndExpr#expr for (self: AAndExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___AAndExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
val* var4 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var5 /* : AExpr */;
val* var7 /* : AExpr */;
val* var8 /* : RuntimeVariable */;
val* var_i1 /* var i1: RuntimeVariable */;
val* var9 /* : NativeArray[String] */;
static val* varonce;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : FlatString */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : FlatString */;
val* var18 /* : String */;
val* var19 /* : String */;
val* var21 /* : NativeArray[String] */;
static val* varonce20;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
val* var25 /* : FlatString */;
val* var26 /* : String */;
val* var27 /* : String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
val* var31 /* : FlatString */;
val* var32 /* : AExpr */;
val* var34 /* : AExpr */;
val* var35 /* : RuntimeVariable */;
val* var_i2 /* var i2: RuntimeVariable */;
val* var37 /* : NativeArray[String] */;
static val* varonce36;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : FlatString */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : FlatString */;
val* var46 /* : String */;
val* var47 /* : String */;
val* var48 /* : String */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
val* var52 /* : FlatString */;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AAndExpr> */
var3 = self->attrs[COLOR_nit__typing__AExpr___mtype].val; /* _mtype on <self:AAndExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2860);
fatal_exit(1);
}
{
var4 = nit___nit__AbstractCompilerVisitor___new_var(var_v, var1);
}
var_res = var4;
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr (self) on <self:AAndExpr> */
var7 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AAndExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2053);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nit___nit__AbstractCompilerVisitor___expr_bool(var_v, var5);
}
var_i1 = var8;
if (unlikely(varonce==NULL)) {
var9 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "if (!";
var13 = standard___standard__NativeString___to_s_with_length(var12, 5l);
var11 = var13;
varonce10 = var11;
}
((struct instance_standard__NativeArray*)var9)->values[0]=var11;
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = ") {";
var17 = standard___standard__NativeString___to_s_with_length(var16, 3l);
var15 = var17;
varonce14 = var15;
}
((struct instance_standard__NativeArray*)var9)->values[2]=var15;
} else {
var9 = varonce;
varonce = NULL;
}
{
var18 = ((val*(*)(val* self))(var_i1->class->vft[COLOR_standard__string__Object__to_s]))(var_i1); /* to_s on <var_i1:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var9)->values[1]=var18;
{
var19 = ((val*(*)(val* self))(var9->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var9); /* native_to_s on <var9:NativeArray[String]>*/
}
varonce = var9;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var19); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce20==NULL)) {
var21 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = " = 0;";
var25 = standard___standard__NativeString___to_s_with_length(var24, 5l);
var23 = var25;
varonce22 = var23;
}
((struct instance_standard__NativeArray*)var21)->values[1]=var23;
} else {
var21 = varonce20;
varonce20 = NULL;
}
{
var26 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var21)->values[0]=var26;
{
var27 = ((val*(*)(val* self))(var21->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var21); /* native_to_s on <var21:NativeArray[String]>*/
}
varonce20 = var21;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var27); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "} else {";
var31 = standard___standard__NativeString___to_s_with_length(var30, 8l);
var29 = var31;
varonce28 = var29;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var29); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr2 (self) on <self:AAndExpr> */
var34 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AAndExpr> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2059);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
var35 = nit___nit__AbstractCompilerVisitor___expr_bool(var_v, var32);
}
var_i2 = var35;
if (unlikely(varonce36==NULL)) {
var37 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = " = ";
var41 = standard___standard__NativeString___to_s_with_length(var40, 3l);
var39 = var41;
varonce38 = var39;
}
((struct instance_standard__NativeArray*)var37)->values[1]=var39;
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = ";";
var45 = standard___standard__NativeString___to_s_with_length(var44, 1l);
var43 = var45;
varonce42 = var43;
}
((struct instance_standard__NativeArray*)var37)->values[3]=var43;
} else {
var37 = varonce36;
varonce36 = NULL;
}
{
var46 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var37)->values[0]=var46;
{
var47 = ((val*(*)(val* self))(var_i2->class->vft[COLOR_standard__string__Object__to_s]))(var_i2); /* to_s on <var_i2:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var37)->values[2]=var47;
{
var48 = ((val*(*)(val* self))(var37->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var37); /* native_to_s on <var37:NativeArray[String]>*/
}
varonce36 = var37;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var48); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "}";
var52 = standard___standard__NativeString___to_s_with_length(var51, 1l);
var50 = var52;
varonce49 = var50;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var50); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ANotExpr#expr for (self: ANotExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___ANotExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : RuntimeVariable */;
val* var_cond /* var cond: RuntimeVariable */;
val* var5 /* : NativeArray[String] */;
static val* varonce;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var10 /* : String */;
val* var11 /* : String */;
val* var12 /* : nullable MType */;
val* var14 /* : nullable MType */;
val* var15 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#ANotExpr#n_expr (self) on <self:ANotExpr> */
var3 = self->attrs[COLOR_nit__parser_nodes__ANotExpr___n_expr].val; /* _n_expr on <self:ANotExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2093);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nit___nit__AbstractCompilerVisitor___expr_bool(var_v, var1);
}
var_cond = var4;
if (unlikely(varonce==NULL)) {
var5 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "!";
var9 = standard___standard__NativeString___to_s_with_length(var8, 1l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var5)->values[0]=var7;
} else {
var5 = varonce;
varonce = NULL;
}
{
var10 = ((val*(*)(val* self))(var_cond->class->vft[COLOR_standard__string__Object__to_s]))(var_cond); /* to_s on <var_cond:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var5)->values[1]=var10;
{
var11 = ((val*(*)(val* self))(var5->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
{
{ /* Inline typing#AExpr#mtype (self) on <self:ANotExpr> */
var14 = self->attrs[COLOR_nit__typing__AExpr___mtype].val; /* _mtype on <self:ANotExpr> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2876);
fatal_exit(1);
}
{
var15 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var11, var12);
}
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AOrElseExpr#expr for (self: AOrElseExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___AOrElseExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
val* var4 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var5 /* : AExpr */;
val* var7 /* : AExpr */;
val* var8 /* : RuntimeVariable */;
val* var_i1 /* var i1: RuntimeVariable */;
val* var9 /* : NativeArray[String] */;
static val* varonce;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : FlatString */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : FlatString */;
val* var18 /* : String */;
val* var19 /* : String */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : FlatString */;
val* var24 /* : AExpr */;
val* var26 /* : AExpr */;
val* var27 /* : RuntimeVariable */;
val* var_i2 /* var i2: RuntimeVariable */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
val* var31 /* : FlatString */;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AOrElseExpr> */
var3 = self->attrs[COLOR_nit__typing__AExpr___mtype].val; /* _mtype on <self:AOrElseExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2883);
fatal_exit(1);
}
{
var4 = nit___nit__AbstractCompilerVisitor___new_var(var_v, var1);
}
var_res = var4;
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr (self) on <self:AOrElseExpr> */
var7 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AOrElseExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2053);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nit___nit__AbstractCompilerVisitor___expr(var_v, var5, ((val*)NULL));
}
var_i1 = var8;
if (unlikely(varonce==NULL)) {
var9 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "if (";
var13 = standard___standard__NativeString___to_s_with_length(var12, 4l);
var11 = var13;
varonce10 = var11;
}
((struct instance_standard__NativeArray*)var9)->values[0]=var11;
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "!=NULL) {";
var17 = standard___standard__NativeString___to_s_with_length(var16, 9l);
var15 = var17;
varonce14 = var15;
}
((struct instance_standard__NativeArray*)var9)->values[2]=var15;
} else {
var9 = varonce;
varonce = NULL;
}
{
var18 = ((val*(*)(val* self))(var_i1->class->vft[COLOR_standard__string__Object__to_s]))(var_i1); /* to_s on <var_i1:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var9)->values[1]=var18;
{
var19 = ((val*(*)(val* self))(var9->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var9); /* native_to_s on <var9:NativeArray[String]>*/
}
varonce = var9;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var19); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
nit___nit__AbstractCompilerVisitor___assign(var_v, var_res, var_i1); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "} else {";
var23 = standard___standard__NativeString___to_s_with_length(var22, 8l);
var21 = var23;
varonce20 = var21;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var21); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr2 (self) on <self:AOrElseExpr> */
var26 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AOrElseExpr> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2059);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
var27 = nit___nit__AbstractCompilerVisitor___expr(var_v, var24, ((val*)NULL));
}
var_i2 = var27;
{
nit___nit__AbstractCompilerVisitor___assign(var_v, var_res, var_i2); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "}";
var31 = standard___standard__NativeString___to_s_with_length(var30, 1l);
var29 = var31;
varonce28 = var29;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var29); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AIntExpr#expr for (self: AIntExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___AIntExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable Int */;
val* var3 /* : nullable Int */;
val* var4 /* : RuntimeVariable */;
long var5 /* : Int */;
var_v = p0;
{
{ /* Inline literal#AIntExpr#value (self) on <self:AIntExpr> */
var3 = self->attrs[COLOR_nit__literal__AIntExpr___value].val; /* _value on <self:AIntExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2896);
fatal_exit(1);
}
{
var5 = (long)(var1)>>2;
var4 = nit___nit__AbstractCompilerVisitor___int_instance(var_v, var5);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AByteExpr#expr for (self: AByteExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___AByteExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable Byte */;
val* var3 /* : nullable Byte */;
val* var4 /* : RuntimeVariable */;
unsigned char var5 /* : Byte */;
var_v = p0;
{
{ /* Inline literal#AByteExpr#value (self) on <self:AByteExpr> */
var3 = self->attrs[COLOR_nit__literal__AByteExpr___value].val; /* _value on <self:AByteExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2900);
fatal_exit(1);
}
{
var5 = ((struct instance_standard__Byte*)var1)->value; /* autounbox from nullable Byte to Byte */;
var4 = nit___nit__AbstractCompilerVisitor___byte_instance(var_v, var5);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AFloatExpr#expr for (self: AFloatExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___AFloatExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
val* var2 /* : TFloat */;
val* var4 /* : TFloat */;
val* var5 /* : String */;
val* var6 /* : String */;
val* var7 /* : RuntimeVariable */;
var_v = p0;
if (unlikely(varonce==NULL)) {
var1 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
} else {
var1 = varonce;
varonce = NULL;
}
{
{ /* Inline parser_nodes#AFloatExpr#n_float (self) on <self:AFloatExpr> */
var4 = self->attrs[COLOR_nit__parser_nodes__AFloatExpr___n_float].val; /* _n_float on <self:AFloatExpr> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_float");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2581);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = nit__lexer_work___Token___text(var2);
}
((struct instance_standard__NativeArray*)var1)->values[0]=var5;
{
var6 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
{
var7 = nit___nit__AbstractCompilerVisitor___float_instance(var_v, var6);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ACharExpr#expr for (self: ACharExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___ACharExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable Char */;
val* var3 /* : nullable Char */;
val* var4 /* : RuntimeVariable */;
uint32_t var5 /* : Char */;
var_v = p0;
{
{ /* Inline literal#ACharExpr#value (self) on <self:ACharExpr> */
var3 = self->attrs[COLOR_nit__literal__ACharExpr___value].val; /* _value on <self:ACharExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2908);
fatal_exit(1);
}
{
var5 = (uint32_t)((long)(var1)>>2);
var4 = nit___nit__AbstractCompilerVisitor___char_instance(var_v, var5);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AArrayExpr#expr for (self: AArrayExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___AArrayExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
val* var_mtype /* var mtype: MType */;
val* var4 /* : Array[RuntimeVariable] */;
val* var_array /* var array: Array[RuntimeVariable] */;
val* var5 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var6 /* : nullable StaticFrame */;
val* var8 /* : nullable StaticFrame */;
val* var9 /* : nullable RuntimeVariable */;
val* var11 /* : nullable RuntimeVariable */;
val* var_old_comprehension /* var old_comprehension: nullable RuntimeVariable */;
val* var12 /* : nullable StaticFrame */;
val* var14 /* : nullable StaticFrame */;
val* var16 /* : ANodes[AExpr] */;
val* var18 /* : ANodes[AExpr] */;
val* var_ /* var : ANodes[AExpr] */;
val* var19 /* : Iterator[ANode] */;
val* var_20 /* var : Iterator[AExpr] */;
short int var21 /* : Bool */;
val* var22 /* : nullable Object */;
val* var_nexpr /* var nexpr: AExpr */;
val* var23 /* : nullable StaticFrame */;
val* var25 /* : nullable StaticFrame */;
var_v = p0;
{
{ /* Inline typing#AArrayExpr#element_mtype (self) on <self:AArrayExpr> */
var3 = self->attrs[COLOR_nit__typing__AArrayExpr___element_mtype].val; /* _element_mtype on <self:AArrayExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2914);
fatal_exit(1);
}
var_mtype = var1;
var4 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
{
standard___standard__Array___standard__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[RuntimeVariable]>*/
}
var_array = var4;
{
var5 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__array_instance(var_v, var_array, var_mtype);
}
var_res = var5;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var8 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (var6 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2918);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#comprehension (var6) on <var6:nullable StaticFrame> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1848);
fatal_exit(1);
}
var11 = var6->attrs[COLOR_nit__abstract_compiler__StaticFrame___comprehension].val; /* _comprehension on <var6:nullable StaticFrame> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_old_comprehension = var9;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var14 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
if (var12 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2919);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#comprehension= (var12,var_res) on <var12:nullable StaticFrame> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1848);
fatal_exit(1);
}
var12->attrs[COLOR_nit__abstract_compiler__StaticFrame___comprehension].val = var_res; /* _comprehension on <var12:nullable StaticFrame> */
RET_LABEL15:(void)0;
}
}
{
{ /* Inline parser_nodes#AArrayExpr#n_exprs (self) on <self:AArrayExpr> */
var18 = self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_exprs].val; /* _n_exprs on <self:AArrayExpr> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2456);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_ = var16;
{
var19 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_);
}
var_20 = var19;
for(;;) {
{
var21 = ((short int(*)(val* self))((((long)var_20&3)?class_info[((long)var_20&3)]:var_20->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_20); /* is_ok on <var_20:Iterator[AExpr]>*/
}
if (var21){
{
var22 = ((val*(*)(val* self))((((long)var_20&3)?class_info[((long)var_20&3)]:var_20->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_20); /* item on <var_20:Iterator[AExpr]>*/
}
var_nexpr = var22;
{
nit___nit__AbstractCompilerVisitor___stmt(var_v, var_nexpr); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
{
((void(*)(val* self))((((long)var_20&3)?class_info[((long)var_20&3)]:var_20->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_20); /* next on <var_20:Iterator[AExpr]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_20&3)?class_info[((long)var_20&3)]:var_20->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_20); /* finish on <var_20:Iterator[AExpr]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var25 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
if (var23 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2923);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#comprehension= (var23,var_old_comprehension) on <var23:nullable StaticFrame> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1848);
fatal_exit(1);
}
var23->attrs[COLOR_nit__abstract_compiler__StaticFrame___comprehension].val = var_old_comprehension; /* _comprehension on <var23:nullable StaticFrame> */
RET_LABEL26:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AStringFormExpr#expr for (self: AStringFormExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___AStringFormExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable String */;
val* var3 /* : nullable String */;
val* var4 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline literal#AStringFormExpr#value (self) on <self:AStringFormExpr> */
var3 = self->attrs[COLOR_nit__literal__AStringFormExpr___value].val; /* _value on <self:AStringFormExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2930);
fatal_exit(1);
}
{
var4 = nit___nit__AbstractCompilerVisitor___string_instance(var_v, var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ASuperstringExpr#expr for (self: ASuperstringExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___ASuperstringExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
val* var_type_string /* var type_string: MType */;
val* var4 /* : Array[AExpr] */;
val* var_array /* var array: Array[AExpr] */;
val* var5 /* : ANodes[AExpr] */;
val* var7 /* : ANodes[AExpr] */;
val* var_ /* var : ANodes[AExpr] */;
val* var8 /* : Iterator[ANode] */;
val* var_9 /* var : Iterator[AExpr] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_ne /* var ne: AExpr */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype;
int idtype;
short int var_14 /* var : Bool */;
val* var15 /* : nullable String */;
val* var17 /* : nullable String */;
static val* varonce;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : FlatString */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : FlatString */;
val* var28 /* : String */;
val* var_varonce /* var varonce: String */;
val* var30 /* : NativeArray[String] */;
static val* varonce29;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
val* var34 /* : FlatString */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
val* var38 /* : FlatString */;
val* var39 /* : String */;
long var40 /* : Int */;
long var42 /* : Int */;
val* var43 /* : RuntimeVariable */;
val* var44 /* : RuntimeVariable */;
val* var_a /* var a: RuntimeVariable */;
val* var46 /* : NativeArray[String] */;
static val* varonce45;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
val* var50 /* : FlatString */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
val* var54 /* : FlatString */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
val* var58 /* : FlatString */;
val* var59 /* : MType */;
val* var61 /* : MType */;
val* var62 /* : String */;
val* var63 /* : String */;
long var_i /* var i: Int */;
long var64 /* : Int */;
long var66 /* : Int */;
long var_67 /* var : Int */;
short int var68 /* : Bool */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const char* var_class_name;
short int var73 /* : Bool */;
val* var74 /* : nullable Object */;
val* var_ne75 /* var ne: AExpr */;
short int var76 /* : Bool */;
int cltype77;
int idtype78;
short int var79 /* : Bool */;
val* var81 /* : RuntimeVariable */;
val* var_e /* var e: RuntimeVariable */;
long var82 /* : Int */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : NativeString */;
val* var87 /* : FlatString */;
val* var89 /* : NativeArray[String] */;
static val* varonce88;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : NativeString */;
val* var93 /* : FlatString */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : NativeString */;
val* var97 /* : FlatString */;
val* var98 /* : String */;
val* var99 /* : String */;
val* var101 /* : NativeArray[String] */;
static val* varonce100;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : NativeString */;
val* var105 /* : FlatString */;
val* var106 /* : String */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
val* var110 /* : FlatString */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : NativeString */;
val* var114 /* : FlatString */;
val* var115 /* : MClassType */;
val* var116 /* : MMethod */;
val* var_to_s_method /* var to_s_method: MMethod */;
long var_i117 /* var i: Int */;
long var118 /* : Int */;
long var120 /* : Int */;
long var_121 /* var : Int */;
short int var122 /* : Bool */;
short int var124 /* : Bool */;
int cltype125;
int idtype126;
const char* var_class_name127;
short int var128 /* : Bool */;
val* var129 /* : nullable Object */;
val* var_ne130 /* var ne: AExpr */;
short int var131 /* : Bool */;
int cltype132;
int idtype133;
val* var135 /* : RuntimeVariable */;
val* var_e136 /* var e: RuntimeVariable */;
val* var137 /* : MType */;
val* var139 /* : MType */;
val* var140 /* : AbstractCompiler */;
val* var142 /* : AbstractCompiler */;
val* var143 /* : MModule */;
val* var145 /* : MModule */;
short int var146 /* : Bool */;
short int var147 /* : Bool */;
val* var148 /* : Array[RuntimeVariable] */;
val* var_149 /* var : Array[RuntimeVariable] */;
val* var150 /* : nullable RuntimeVariable */;
long var151 /* : Int */;
static val* varonce153;
val* var154 /* : String */;
char* var155 /* : NativeString */;
val* var156 /* : FlatString */;
val* var157 /* : MType */;
val* var159 /* : MType */;
val* var160 /* : MMethod */;
val* var161 /* : Array[RuntimeVariable] */;
val* var_162 /* var : Array[RuntimeVariable] */;
val* var163 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var165 /* : NativeArray[String] */;
static val* varonce164;
static val* varonce166;
val* var167 /* : String */;
char* var168 /* : NativeString */;
val* var169 /* : FlatString */;
static val* varonce170;
val* var171 /* : String */;
char* var172 /* : NativeString */;
val* var173 /* : FlatString */;
val* var174 /* : String */;
val* var175 /* : String */;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:ASuperstringExpr> */
var3 = self->attrs[COLOR_nit__typing__AExpr___mtype].val; /* _mtype on <self:ASuperstringExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2936);
fatal_exit(1);
}
var_type_string = var1;
var4 = NEW_standard__Array(&type_standard__Array__nit__AExpr);
{
standard___standard__Array___standard__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[AExpr]>*/
}
var_array = var4;
{
{ /* Inline parser_nodes#ASuperstringExpr#n_exprs (self) on <self:ASuperstringExpr> */
var7 = self->attrs[COLOR_nit__parser_nodes__ASuperstringExpr___n_exprs].val; /* _n_exprs on <self:ASuperstringExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2626);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_ = var5;
{
var8 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_);
}
var_9 = var8;
for(;;) {
{
var10 = ((short int(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_9); /* is_ok on <var_9:Iterator[AExpr]>*/
}
if (var10){
{
var11 = ((val*(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_9); /* item on <var_9:Iterator[AExpr]>*/
}
var_ne = var11;
/* <var_ne:AExpr> isa AStringFormExpr */
cltype = type_nit__AStringFormExpr.color;
idtype = type_nit__AStringFormExpr.id;
if(cltype >= var_ne->type->table_size) {
var13 = 0;
} else {
var13 = var_ne->type->type_table[cltype] == idtype;
}
var_14 = var13;
if (var13){
{
{ /* Inline literal#AStringFormExpr#value (var_ne) on <var_ne:AExpr(AStringFormExpr)> */
var17 = var_ne->attrs[COLOR_nit__literal__AStringFormExpr___value].val; /* _value on <var_ne:AExpr(AStringFormExpr)> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (likely(varonce!=NULL)) {
var18 = varonce;
} else {
var19 = "";
var20 = standard___standard__NativeString___to_s_with_length(var19, 0l);
var18 = var20;
varonce = var18;
}
if (var15 == NULL) {
var21 = 0; /* <var18:String> cannot be null */
} else {
var22 = ((short int(*)(val* self, val* p0))(var15->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var15, var18); /* == on <var15:nullable String>*/
var21 = var22;
}
var12 = var21;
} else {
var12 = var_14;
}
if (var12){
goto BREAK_label;
} else {
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_array, var_ne); /* Direct call array#Array#add on <var_array:Array[AExpr]>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_9); /* next on <var_9:Iterator[AExpr]>*/
}
} else {
goto BREAK_label23;
}
}
BREAK_label23: (void)0;
{
((void(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_9); /* finish on <var_9:Iterator[AExpr]>*/
}
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "varonce";
var27 = standard___standard__NativeString___to_s_with_length(var26, 7l);
var25 = var27;
varonce24 = var25;
}
{
var28 = nit___nit__AbstractCompilerVisitor___get_name(var_v, var25);
}
var_varonce = var28;
if (unlikely(varonce29==NULL)) {
var30 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "if (unlikely(";
var34 = standard___standard__NativeString___to_s_with_length(var33, 13l);
var32 = var34;
varonce31 = var32;
}
((struct instance_standard__NativeArray*)var30)->values[0]=var32;
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "==NULL)) {";
var38 = standard___standard__NativeString___to_s_with_length(var37, 10l);
var36 = var38;
varonce35 = var36;
}
((struct instance_standard__NativeArray*)var30)->values[2]=var36;
} else {
var30 = varonce29;
varonce29 = NULL;
}
((struct instance_standard__NativeArray*)var30)->values[1]=var_varonce;
{
var39 = ((val*(*)(val* self))(var30->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var30); /* native_to_s on <var30:NativeArray[String]>*/
}
varonce29 = var30;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var39); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline array#AbstractArrayRead#length (var_array) on <var_array:Array[AExpr]> */
var42 = var_array->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_array:Array[AExpr]> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
var43 = nit___nit__AbstractCompilerVisitor___int_instance(var_v, var40);
}
{
var44 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__native_array_instance]))(var_v, var_type_string, var43); /* native_array_instance on <var_v:AbstractCompilerVisitor>*/
}
var_a = var44;
if (unlikely(varonce45==NULL)) {
var46 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "static ";
var50 = standard___standard__NativeString___to_s_with_length(var49, 7l);
var48 = var50;
varonce47 = var48;
}
((struct instance_standard__NativeArray*)var46)->values[0]=var48;
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = " ";
var54 = standard___standard__NativeString___to_s_with_length(var53, 1l);
var52 = var54;
varonce51 = var52;
}
((struct instance_standard__NativeArray*)var46)->values[2]=var52;
if (likely(varonce55!=NULL)) {
var56 = varonce55;
} else {
var57 = ";";
var58 = standard___standard__NativeString___to_s_with_length(var57, 1l);
var56 = var58;
varonce55 = var56;
}
((struct instance_standard__NativeArray*)var46)->values[4]=var56;
} else {
var46 = varonce45;
varonce45 = NULL;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_a) on <var_a:RuntimeVariable> */
var61 = var_a->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_a:RuntimeVariable> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
var62 = ((val*(*)(val* self))(var59->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var59); /* ctype on <var59:MType>*/
}
((struct instance_standard__NativeArray*)var46)->values[1]=var62;
((struct instance_standard__NativeArray*)var46)->values[3]=var_varonce;
{
var63 = ((val*(*)(val* self))(var46->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var46); /* native_to_s on <var46:NativeArray[String]>*/
}
varonce45 = var46;
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var63); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
var_i = 0l;
{
{ /* Inline array#AbstractArrayRead#length (var_array) on <var_array:Array[AExpr]> */
var66 = var_array->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_array:Array[AExpr]> */
var64 = var66;
RET_LABEL65:(void)0;
}
}
var_67 = var64;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_67) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_67:Int> isa OTHER */
/* <var_67:Int> isa OTHER */
var70 = 1; /* easy <var_67:Int> isa OTHER*/
if (unlikely(!var70)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var73 = var_i < var_67;
var68 = var73;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
if (var68){
{
var74 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_array, var_i);
}
var_ne75 = var74;
/* <var_ne75:AExpr> isa AStringFormExpr */
cltype77 = type_nit__AStringFormExpr.color;
idtype78 = type_nit__AStringFormExpr.id;
if(cltype77 >= var_ne75->type->table_size) {
var76 = 0;
} else {
var76 = var_ne75->type->type_table[cltype77] == idtype78;
}
var79 = !var76;
if (var79){
goto BREAK_label80;
} else {
}
{
var81 = nit___nit__AbstractCompilerVisitor___expr(var_v, var_ne75, ((val*)NULL));
}
var_e = var81;
{
nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__native_array_set(var_v, var_a, var_i, var_e); /* Direct call separate_compiler#SeparateCompilerVisitor#native_array_set on <var_v:AbstractCompilerVisitor>*/
}
BREAK_label80: (void)0;
{
var82 = standard___standard__Int___Discrete__successor(var_i, 1l);
}
var_i = var82;
} else {
goto BREAK_label83;
}
}
BREAK_label83: (void)0;
if (likely(varonce84!=NULL)) {
var85 = varonce84;
} else {
var86 = "} else {";
var87 = standard___standard__NativeString___to_s_with_length(var86, 8l);
var85 = var87;
varonce84 = var85;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var85); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce88==NULL)) {
var89 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = " = ";
var93 = standard___standard__NativeString___to_s_with_length(var92, 3l);
var91 = var93;
varonce90 = var91;
}
((struct instance_standard__NativeArray*)var89)->values[1]=var91;
if (likely(varonce94!=NULL)) {
var95 = varonce94;
} else {
var96 = ";";
var97 = standard___standard__NativeString___to_s_with_length(var96, 1l);
var95 = var97;
varonce94 = var95;
}
((struct instance_standard__NativeArray*)var89)->values[3]=var95;
} else {
var89 = varonce88;
varonce88 = NULL;
}
{
var98 = ((val*(*)(val* self))(var_a->class->vft[COLOR_standard__string__Object__to_s]))(var_a); /* to_s on <var_a:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var89)->values[0]=var98;
((struct instance_standard__NativeArray*)var89)->values[2]=var_varonce;
{
var99 = ((val*(*)(val* self))(var89->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var89); /* native_to_s on <var89:NativeArray[String]>*/
}
varonce88 = var89;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var99); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce100==NULL)) {
var101 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce102!=NULL)) {
var103 = varonce102;
} else {
var104 = " = NULL;";
var105 = standard___standard__NativeString___to_s_with_length(var104, 8l);
var103 = var105;
varonce102 = var103;
}
((struct instance_standard__NativeArray*)var101)->values[1]=var103;
} else {
var101 = varonce100;
varonce100 = NULL;
}
((struct instance_standard__NativeArray*)var101)->values[0]=var_varonce;
{
var106 = ((val*(*)(val* self))(var101->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var101); /* native_to_s on <var101:NativeArray[String]>*/
}
varonce100 = var101;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var106); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce107!=NULL)) {
var108 = varonce107;
} else {
var109 = "}";
var110 = standard___standard__NativeString___to_s_with_length(var109, 1l);
var108 = var110;
varonce107 = var108;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var108); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce111!=NULL)) {
var112 = varonce111;
} else {
var113 = "to_s";
var114 = standard___standard__NativeString___to_s_with_length(var113, 4l);
var112 = var114;
varonce111 = var112;
}
{
var115 = nit___nit__AbstractCompilerVisitor___object_type(var_v);
}
{
var116 = nit___nit__AbstractCompilerVisitor___get_property(var_v, var112, var115);
}
var_to_s_method = var116;
var_i117 = 0l;
{
{ /* Inline array#AbstractArrayRead#length (var_array) on <var_array:Array[AExpr]> */
var120 = var_array->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_array:Array[AExpr]> */
var118 = var120;
RET_LABEL119:(void)0;
}
}
var_121 = var118;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i117,var_121) on <var_i117:Int> */
/* Covariant cast for argument 0 (i) <var_121:Int> isa OTHER */
/* <var_121:Int> isa OTHER */
var124 = 1; /* easy <var_121:Int> isa OTHER*/
if (unlikely(!var124)) {
var_class_name127 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name127);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var128 = var_i117 < var_121;
var122 = var128;
goto RET_LABEL123;
RET_LABEL123:(void)0;
}
}
if (var122){
{
var129 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_array, var_i117);
}
var_ne130 = var129;
/* <var_ne130:AExpr> isa AStringFormExpr */
cltype132 = type_nit__AStringFormExpr.color;
idtype133 = type_nit__AStringFormExpr.id;
if(cltype132 >= var_ne130->type->table_size) {
var131 = 0;
} else {
var131 = var_ne130->type->type_table[cltype132] == idtype133;
}
if (var131){
goto BREAK_label134;
} else {
}
{
var135 = nit___nit__AbstractCompilerVisitor___expr(var_v, var_ne130, ((val*)NULL));
}
var_e136 = var135;
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_e136) on <var_e136:RuntimeVariable> */
var139 = var_e136->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_e136:RuntimeVariable> */
if (unlikely(var139 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1787);
fatal_exit(1);
}
var137 = var139;
RET_LABEL138:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var142 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var142 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var140 = var142;
RET_LABEL141:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var140) on <var140:AbstractCompiler> */
var145 = var140->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var140:AbstractCompiler> */
if (unlikely(var145 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 515);
fatal_exit(1);
}
var143 = var145;
RET_LABEL144:(void)0;
}
}
{
var146 = nit___nit__MType___is_subtype(var137, var143, ((val*)NULL), var_type_string);
}
var147 = !var146;
if (var147){
var148 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
{
standard___standard__Array___with_capacity(var148, 1l); /* Direct call array#Array#with_capacity on <var148:Array[RuntimeVariable]>*/
}
var_149 = var148;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_149, var_e136); /* Direct call array#AbstractArray#push on <var_149:Array[RuntimeVariable]>*/
}
{
var150 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__send(var_v, var_to_s_method, var_149);
}
if (unlikely(var150 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2983);
fatal_exit(1);
}
var_e136 = var150;
} else {
}
{
nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__native_array_set(var_v, var_a, var_i117, var_e136); /* Direct call separate_compiler#SeparateCompilerVisitor#native_array_set on <var_v:AbstractCompilerVisitor>*/
}
BREAK_label134: (void)0;
{
var151 = standard___standard__Int___Discrete__successor(var_i117, 1l);
}
var_i117 = var151;
} else {
goto BREAK_label152;
}
}
BREAK_label152: (void)0;
if (likely(varonce153!=NULL)) {
var154 = varonce153;
} else {
var155 = "native_to_s";
var156 = standard___standard__NativeString___to_s_with_length(var155, 11l);
var154 = var156;
varonce153 = var154;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_a) on <var_a:RuntimeVariable> */
var159 = var_a->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_a:RuntimeVariable> */
if (unlikely(var159 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var157 = var159;
RET_LABEL158:(void)0;
}
}
{
var160 = nit___nit__AbstractCompilerVisitor___get_property(var_v, var154, var157);
}
var161 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
{
standard___standard__Array___with_capacity(var161, 1l); /* Direct call array#Array#with_capacity on <var161:Array[RuntimeVariable]>*/
}
var_162 = var161;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_162, var_a); /* Direct call array#AbstractArray#push on <var_162:Array[RuntimeVariable]>*/
}
{
var163 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__send(var_v, var160, var_162);
}
var_res = var163;
if (unlikely(varonce164==NULL)) {
var165 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce166!=NULL)) {
var167 = varonce166;
} else {
var168 = " = ";
var169 = standard___standard__NativeString___to_s_with_length(var168, 3l);
var167 = var169;
varonce166 = var167;
}
((struct instance_standard__NativeArray*)var165)->values[1]=var167;
if (likely(varonce170!=NULL)) {
var171 = varonce170;
} else {
var172 = ";";
var173 = standard___standard__NativeString___to_s_with_length(var172, 1l);
var171 = var173;
varonce170 = var171;
}
((struct instance_standard__NativeArray*)var165)->values[3]=var171;
} else {
var165 = varonce164;
varonce164 = NULL;
}
((struct instance_standard__NativeArray*)var165)->values[0]=var_varonce;
{
var174 = ((val*(*)(val* self))(var_a->class->vft[COLOR_standard__string__Object__to_s]))(var_a); /* to_s on <var_a:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var165)->values[2]=var174;
{
var175 = ((val*(*)(val* self))(var165->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var165); /* native_to_s on <var165:NativeArray[String]>*/
}
varonce164 = var165;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var175); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ACrangeExpr#expr for (self: ACrangeExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___ACrangeExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : RuntimeVariable */;
val* var_i1 /* var i1: RuntimeVariable */;
val* var5 /* : AExpr */;
val* var7 /* : AExpr */;
val* var8 /* : RuntimeVariable */;
val* var_i2 /* var i2: RuntimeVariable */;
val* var9 /* : nullable MType */;
val* var11 /* : nullable MType */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_mtype /* var mtype: MClassType */;
val* var13 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var14 /* : nullable CallSite */;
val* var16 /* : nullable CallSite */;
val* var17 /* : Array[RuntimeVariable] */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var18 /* : nullable RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#ARangeExpr#n_expr (self) on <self:ACrangeExpr> */
var3 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:ACrangeExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2417);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nit___nit__AbstractCompilerVisitor___expr(var_v, var1, ((val*)NULL));
}
var_i1 = var4;
{
{ /* Inline parser_nodes#ARangeExpr#n_expr2 (self) on <self:ACrangeExpr> */
var7 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:ACrangeExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2423);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nit___nit__AbstractCompilerVisitor___expr(var_v, var5, ((val*)NULL));
}
var_i2 = var8;
{
{ /* Inline typing#AExpr#mtype (self) on <self:ACrangeExpr> */
var11 = self->attrs[COLOR_nit__typing__AExpr___mtype].val; /* _mtype on <self:ACrangeExpr> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
/* <var9:nullable MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(var9 == NULL) {
var12 = 0;
} else {
if(cltype >= var9->type->table_size) {
var12 = 0;
} else {
var12 = var9->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var12)) {
var_class_name = var9 == NULL ? "null" : var9->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 3003);
fatal_exit(1);
}
var_mtype = var9;
{
var13 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__init_instance]))(var_v, var_mtype); /* init_instance on <var_v:AbstractCompilerVisitor>*/
}
var_res = var13;
{
{ /* Inline typing#ARangeExpr#init_callsite (self) on <self:ACrangeExpr> */
var16 = self->attrs[COLOR_nit__typing__ARangeExpr___init_callsite].val; /* _init_callsite on <self:ACrangeExpr> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 3005);
fatal_exit(1);
}
var17 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
{
standard___standard__Array___with_capacity(var17, 3l); /* Direct call array#Array#with_capacity on <var17:Array[RuntimeVariable]>*/
}
var_ = var17;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_res); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_i1); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_i2); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
var18 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var14, var_); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AOrangeExpr#expr for (self: AOrangeExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___AOrangeExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : RuntimeVariable */;
val* var_i1 /* var i1: RuntimeVariable */;
val* var5 /* : AExpr */;
val* var7 /* : AExpr */;
val* var8 /* : RuntimeVariable */;
val* var_i2 /* var i2: RuntimeVariable */;
val* var9 /* : nullable MType */;
val* var11 /* : nullable MType */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_mtype /* var mtype: MClassType */;
val* var13 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var14 /* : nullable CallSite */;
val* var16 /* : nullable CallSite */;
val* var17 /* : Array[RuntimeVariable] */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var18 /* : nullable RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#ARangeExpr#n_expr (self) on <self:AOrangeExpr> */
var3 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:AOrangeExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2417);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nit___nit__AbstractCompilerVisitor___expr(var_v, var1, ((val*)NULL));
}
var_i1 = var4;
{
{ /* Inline parser_nodes#ARangeExpr#n_expr2 (self) on <self:AOrangeExpr> */
var7 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:AOrangeExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2423);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nit___nit__AbstractCompilerVisitor___expr(var_v, var5, ((val*)NULL));
}
var_i2 = var8;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AOrangeExpr> */
var11 = self->attrs[COLOR_nit__typing__AExpr___mtype].val; /* _mtype on <self:AOrangeExpr> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
/* <var9:nullable MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(var9 == NULL) {
var12 = 0;
} else {
if(cltype >= var9->type->table_size) {
var12 = 0;
} else {
var12 = var9->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var12)) {
var_class_name = var9 == NULL ? "null" : var9->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 3015);
fatal_exit(1);
}
var_mtype = var9;
{
var13 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__init_instance]))(var_v, var_mtype); /* init_instance on <var_v:AbstractCompilerVisitor>*/
}
var_res = var13;
{
{ /* Inline typing#ARangeExpr#init_callsite (self) on <self:AOrangeExpr> */
var16 = self->attrs[COLOR_nit__typing__ARangeExpr___init_callsite].val; /* _init_callsite on <self:AOrangeExpr> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 3017);
fatal_exit(1);
}
var17 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
{
standard___standard__Array___with_capacity(var17, 3l); /* Direct call array#Array#with_capacity on <var17:Array[RuntimeVariable]>*/
}
var_ = var17;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_res); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_i1); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_i2); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
var18 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var14, var_); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ATrueExpr#expr for (self: ATrueExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___ATrueExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : RuntimeVariable */;
var_v = p0;
{
var1 = nit___nit__AbstractCompilerVisitor___bool_instance(var_v, 1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AFalseExpr#expr for (self: AFalseExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___AFalseExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : RuntimeVariable */;
var_v = p0;
{
var1 = nit___nit__AbstractCompilerVisitor___bool_instance(var_v, 0);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ANullExpr#expr for (self: ANullExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___ANullExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : RuntimeVariable */;
var_v = p0;
{
var1 = nit___nit__AbstractCompilerVisitor___null_instance(var_v);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AIsaExpr#expr for (self: AIsaExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___AIsaExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var5 /* : nullable MType */;
val* var7 /* : nullable MType */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : FlatString */;
val* var11 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#AIsaExpr#n_expr (self) on <self:AIsaExpr> */
var3 = self->attrs[COLOR_nit__parser_nodes__AIsaExpr___n_expr].val; /* _n_expr on <self:AIsaExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2149);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nit___nit__AbstractCompilerVisitor___expr(var_v, var1, ((val*)NULL));
}
var_i = var4;
{
{ /* Inline typing#AIsaExpr#cast_type (self) on <self:AIsaExpr> */
var7 = self->attrs[COLOR_nit__typing__AIsaExpr___cast_type].val; /* _cast_type on <self:AIsaExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 3038);
fatal_exit(1);
}
if (likely(varonce!=NULL)) {
var8 = varonce;
} else {
var9 = "isa";
var10 = standard___standard__NativeString___to_s_with_length(var9, 3l);
var8 = var10;
varonce = var8;
}
{
var11 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__type_test]))(var_v, var_i, var5, var8); /* type_test on <var_v:AbstractCompilerVisitor>*/
}
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAsCastExpr#expr for (self: AAsCastExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___AAsCastExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var5 /* : AbstractCompiler */;
val* var7 /* : AbstractCompiler */;
val* var8 /* : ModelBuilder */;
val* var10 /* : ModelBuilder */;
val* var11 /* : ToolContext */;
val* var13 /* : ToolContext */;
val* var14 /* : OptionBool */;
val* var16 /* : OptionBool */;
val* var17 /* : nullable Object */;
val* var19 /* : nullable Object */;
short int var20 /* : Bool */;
val* var21 /* : nullable MType */;
val* var23 /* : nullable MType */;
static val* varonce;
val* var24 /* : String */;
char* var25 /* : NativeString */;
val* var26 /* : FlatString */;
var_v = p0;
{
{ /* Inline parser_nodes#AAsCastForm#n_expr (self) on <self:AAsCastExpr> */
var3 = self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_expr].val; /* _n_expr on <self:AAsCastExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2648);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nit___nit__AbstractCompilerVisitor___expr(var_v, var1, ((val*)NULL));
}
var_i = var4;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var7 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var5) on <var5:AbstractCompiler> */
var10 = var5->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var5:AbstractCompiler> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var8) on <var8:ModelBuilder> */
var13 = var8->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var8:ModelBuilder> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_assert (var11) on <var11:ToolContext> */
var16 = var11->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_assert].val; /* _opt_no_check_assert on <var11:ToolContext> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_assert");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 52);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline opts#Option#value (var14) on <var14:OptionBool> */
var19 = var14->attrs[COLOR_opts__Option___value].val; /* _value on <var14:OptionBool> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
var20 = (short int)((long)(var17)>>2);
if (var20){
var = var_i;
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#AExpr#mtype (self) on <self:AAsCastExpr> */
var23 = self->attrs[COLOR_nit__typing__AExpr___mtype].val; /* _mtype on <self:AAsCastExpr> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 3048);
fatal_exit(1);
}
if (likely(varonce!=NULL)) {
var24 = varonce;
} else {
var25 = "as";
var26 = standard___standard__NativeString___to_s_with_length(var25, 2l);
var24 = var26;
varonce = var24;
}
{
nit___nit__AbstractCompilerVisitor___add_cast(var_v, var_i, var21, var24); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_cast on <var_v:AbstractCompilerVisitor>*/
}
var = var_i;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAsNotnullExpr#expr for (self: AAsNotnullExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___AAsNotnullExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var5 /* : AbstractCompiler */;
val* var7 /* : AbstractCompiler */;
val* var8 /* : ModelBuilder */;
val* var10 /* : ModelBuilder */;
val* var11 /* : ToolContext */;
val* var13 /* : ToolContext */;
val* var14 /* : OptionBool */;
val* var16 /* : OptionBool */;
val* var17 /* : nullable Object */;
val* var19 /* : nullable Object */;
short int var20 /* : Bool */;
val* var21 /* : MType */;
val* var23 /* : MType */;
short int var24 /* : Bool */;
val* var25 /* : NativeArray[String] */;
static val* varonce;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
val* var29 /* : FlatString */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : FlatString */;
val* var34 /* : String */;
val* var35 /* : String */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
val* var39 /* : FlatString */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
val* var43 /* : FlatString */;
var_v = p0;
{
{ /* Inline parser_nodes#AAsCastForm#n_expr (self) on <self:AAsNotnullExpr> */
var3 = self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_expr].val; /* _n_expr on <self:AAsNotnullExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2648);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nit___nit__AbstractCompilerVisitor___expr(var_v, var1, ((val*)NULL));
}
var_i = var4;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var7 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var5) on <var5:AbstractCompiler> */
var10 = var5->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var5:AbstractCompiler> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var8) on <var8:ModelBuilder> */
var13 = var8->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var8:ModelBuilder> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_assert (var11) on <var11:ToolContext> */
var16 = var11->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_assert].val; /* _opt_no_check_assert on <var11:ToolContext> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_assert");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 52);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline opts#Option#value (var14) on <var14:OptionBool> */
var19 = var14->attrs[COLOR_opts__Option___value].val; /* _value on <var14:OptionBool> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
var20 = (short int)((long)(var17)>>2);
if (var20){
var = var_i;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_i) on <var_i:RuntimeVariable> */
var23 = var_i->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_i:RuntimeVariable> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = ((short int(*)(val* self))(var21->class->vft[COLOR_nit__abstract_compiler__MType__is_c_primitive]))(var21); /* is_c_primitive on <var21:MType>*/
}
if (var24){
var = var_i;
goto RET_LABEL;
} else {
}
if (unlikely(varonce==NULL)) {
var25 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "if (unlikely(";
var29 = standard___standard__NativeString___to_s_with_length(var28, 13l);
var27 = var29;
varonce26 = var27;
}
((struct instance_standard__NativeArray*)var25)->values[0]=var27;
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = " == NULL)) {";
var33 = standard___standard__NativeString___to_s_with_length(var32, 12l);
var31 = var33;
varonce30 = var31;
}
((struct instance_standard__NativeArray*)var25)->values[2]=var31;
} else {
var25 = varonce;
varonce = NULL;
}
{
var34 = ((val*(*)(val* self))(var_i->class->vft[COLOR_standard__string__Object__to_s]))(var_i); /* to_s on <var_i:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var25)->values[1]=var34;
{
var35 = ((val*(*)(val* self))(var25->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var25); /* native_to_s on <var25:NativeArray[String]>*/
}
varonce = var25;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var35); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "Cast failed";
var39 = standard___standard__NativeString___to_s_with_length(var38, 11l);
var37 = var39;
varonce36 = var37;
}
{
nit___nit__AbstractCompilerVisitor___add_abort(var_v, var37); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "}";
var43 = standard___standard__NativeString___to_s_with_length(var42, 1l);
var41 = var43;
varonce40 = var41;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var41); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_i;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AParExpr#expr for (self: AParExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___AParExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#AParExpr#n_expr (self) on <self:AParExpr> */
var3 = self->attrs[COLOR_nit__parser_nodes__AParExpr___n_expr].val; /* _n_expr on <self:AParExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2637);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nit___nit__AbstractCompilerVisitor___expr(var_v, var1, ((val*)NULL));
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AOnceExpr#expr for (self: AOnceExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___AOnceExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
val* var_mtype /* var mtype: MType */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : FlatString */;
val* var7 /* : String */;
val* var_name /* var name: String */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : FlatString */;
val* var12 /* : String */;
val* var13 /* : String */;
val* var_guard /* var guard: String */;
val* var15 /* : NativeArray[String] */;
static val* varonce14;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : FlatString */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : FlatString */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : FlatString */;
val* var28 /* : String */;
val* var29 /* : String */;
val* var31 /* : NativeArray[String] */;
static val* varonce30;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
val* var35 /* : FlatString */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
val* var39 /* : FlatString */;
val* var40 /* : String */;
val* var41 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var43 /* : NativeArray[String] */;
static val* varonce42;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
val* var47 /* : FlatString */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
val* var51 /* : FlatString */;
val* var52 /* : String */;
val* var54 /* : NativeArray[String] */;
static val* varonce53;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
val* var58 /* : FlatString */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
val* var62 /* : FlatString */;
val* var63 /* : String */;
val* var64 /* : String */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
val* var68 /* : FlatString */;
val* var69 /* : AExpr */;
val* var71 /* : AExpr */;
val* var72 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var74 /* : NativeArray[String] */;
static val* varonce73;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : NativeString */;
val* var78 /* : FlatString */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
val* var82 /* : FlatString */;
val* var83 /* : String */;
val* var84 /* : String */;
val* var85 /* : String */;
val* var87 /* : NativeArray[String] */;
static val* varonce86;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : NativeString */;
val* var91 /* : FlatString */;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : NativeString */;
val* var95 /* : FlatString */;
val* var96 /* : String */;
val* var97 /* : String */;
val* var99 /* : NativeArray[String] */;
static val* varonce98;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : NativeString */;
val* var103 /* : FlatString */;
val* var104 /* : String */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
val* var108 /* : FlatString */;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AOnceExpr> */
var3 = self->attrs[COLOR_nit__typing__AExpr___mtype].val; /* _mtype on <self:AOnceExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 3075);
fatal_exit(1);
}
var_mtype = var1;
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "varonce";
var6 = standard___standard__NativeString___to_s_with_length(var5, 7l);
var4 = var6;
varonce = var4;
}
{
var7 = nit___nit__AbstractCompilerVisitor___get_name(var_v, var4);
}
var_name = var7;
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = "_guard";
var11 = standard___standard__NativeString___to_s_with_length(var10, 6l);
var9 = var11;
varonce8 = var9;
}
{
var12 = ((val*(*)(val* self, val* p0))(var_name->class->vft[COLOR_standard__string__String___43d]))(var_name, var9); /* + on <var_name:String>*/
}
{
var13 = nit___nit__AbstractCompilerVisitor___get_name(var_v, var12);
}
var_guard = var13;
if (unlikely(varonce14==NULL)) {
var15 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "static ";
var19 = standard___standard__NativeString___to_s_with_length(var18, 7l);
var17 = var19;
varonce16 = var17;
}
((struct instance_standard__NativeArray*)var15)->values[0]=var17;
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = " ";
var23 = standard___standard__NativeString___to_s_with_length(var22, 1l);
var21 = var23;
varonce20 = var21;
}
((struct instance_standard__NativeArray*)var15)->values[2]=var21;
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = ";";
var27 = standard___standard__NativeString___to_s_with_length(var26, 1l);
var25 = var27;
varonce24 = var25;
}
((struct instance_standard__NativeArray*)var15)->values[4]=var25;
} else {
var15 = varonce14;
varonce14 = NULL;
}
{
var28 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var_mtype); /* ctype on <var_mtype:MType>*/
}
((struct instance_standard__NativeArray*)var15)->values[1]=var28;
((struct instance_standard__NativeArray*)var15)->values[3]=var_name;
{
var29 = ((val*(*)(val* self))(var15->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var15); /* native_to_s on <var15:NativeArray[String]>*/
}
varonce14 = var15;
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var29); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce30==NULL)) {
var31 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "static int ";
var35 = standard___standard__NativeString___to_s_with_length(var34, 11l);
var33 = var35;
varonce32 = var33;
}
((struct instance_standard__NativeArray*)var31)->values[0]=var33;
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = ";";
var39 = standard___standard__NativeString___to_s_with_length(var38, 1l);
var37 = var39;
varonce36 = var37;
}
((struct instance_standard__NativeArray*)var31)->values[2]=var37;
} else {
var31 = varonce30;
varonce30 = NULL;
}
((struct instance_standard__NativeArray*)var31)->values[1]=var_guard;
{
var40 = ((val*(*)(val* self))(var31->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var31); /* native_to_s on <var31:NativeArray[String]>*/
}
varonce30 = var31;
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var40); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
var41 = nit___nit__AbstractCompilerVisitor___new_var(var_v, var_mtype);
}
var_res = var41;
if (unlikely(varonce42==NULL)) {
var43 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = "if (likely(";
var47 = standard___standard__NativeString___to_s_with_length(var46, 11l);
var45 = var47;
varonce44 = var45;
}
((struct instance_standard__NativeArray*)var43)->values[0]=var45;
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = ")) {";
var51 = standard___standard__NativeString___to_s_with_length(var50, 4l);
var49 = var51;
varonce48 = var49;
}
((struct instance_standard__NativeArray*)var43)->values[2]=var49;
} else {
var43 = varonce42;
varonce42 = NULL;
}
((struct instance_standard__NativeArray*)var43)->values[1]=var_guard;
{
var52 = ((val*(*)(val* self))(var43->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var43); /* native_to_s on <var43:NativeArray[String]>*/
}
varonce42 = var43;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var52); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce53==NULL)) {
var54 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce55!=NULL)) {
var56 = varonce55;
} else {
var57 = " = ";
var58 = standard___standard__NativeString___to_s_with_length(var57, 3l);
var56 = var58;
varonce55 = var56;
}
((struct instance_standard__NativeArray*)var54)->values[1]=var56;
if (likely(varonce59!=NULL)) {
var60 = varonce59;
} else {
var61 = ";";
var62 = standard___standard__NativeString___to_s_with_length(var61, 1l);
var60 = var62;
varonce59 = var60;
}
((struct instance_standard__NativeArray*)var54)->values[3]=var60;
} else {
var54 = varonce53;
varonce53 = NULL;
}
{
var63 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var54)->values[0]=var63;
((struct instance_standard__NativeArray*)var54)->values[2]=var_name;
{
var64 = ((val*(*)(val* self))(var54->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var54); /* native_to_s on <var54:NativeArray[String]>*/
}
varonce53 = var54;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var64); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = "} else {";
var68 = standard___standard__NativeString___to_s_with_length(var67, 8l);
var66 = var68;
varonce65 = var66;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var66); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AOnceExpr#n_expr (self) on <self:AOnceExpr> */
var71 = self->attrs[COLOR_nit__parser_nodes__AOnceExpr___n_expr].val; /* _n_expr on <self:AOnceExpr> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2017);
fatal_exit(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
{
var72 = nit___nit__AbstractCompilerVisitor___expr(var_v, var69, var_mtype);
}
var_i = var72;
if (unlikely(varonce73==NULL)) {
var74 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = " = ";
var78 = standard___standard__NativeString___to_s_with_length(var77, 3l);
var76 = var78;
varonce75 = var76;
}
((struct instance_standard__NativeArray*)var74)->values[1]=var76;
if (likely(varonce79!=NULL)) {
var80 = varonce79;
} else {
var81 = ";";
var82 = standard___standard__NativeString___to_s_with_length(var81, 1l);
var80 = var82;
varonce79 = var80;
}
((struct instance_standard__NativeArray*)var74)->values[3]=var80;
} else {
var74 = varonce73;
varonce73 = NULL;
}
{
var83 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var74)->values[0]=var83;
{
var84 = ((val*(*)(val* self))(var_i->class->vft[COLOR_standard__string__Object__to_s]))(var_i); /* to_s on <var_i:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var74)->values[2]=var84;
{
var85 = ((val*(*)(val* self))(var74->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var74); /* native_to_s on <var74:NativeArray[String]>*/
}
varonce73 = var74;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var85); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce86==NULL)) {
var87 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce88!=NULL)) {
var89 = varonce88;
} else {
var90 = " = ";
var91 = standard___standard__NativeString___to_s_with_length(var90, 3l);
var89 = var91;
varonce88 = var89;
}
((struct instance_standard__NativeArray*)var87)->values[1]=var89;
if (likely(varonce92!=NULL)) {
var93 = varonce92;
} else {
var94 = ";";
var95 = standard___standard__NativeString___to_s_with_length(var94, 1l);
var93 = var95;
varonce92 = var93;
}
((struct instance_standard__NativeArray*)var87)->values[3]=var93;
} else {
var87 = varonce86;
varonce86 = NULL;
}
((struct instance_standard__NativeArray*)var87)->values[0]=var_name;
{
var96 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var87)->values[2]=var96;
{
var97 = ((val*(*)(val* self))(var87->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var87); /* native_to_s on <var87:NativeArray[String]>*/
}
varonce86 = var87;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var97); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce98==NULL)) {
var99 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce100!=NULL)) {
var101 = varonce100;
} else {
var102 = " = 1;";
var103 = standard___standard__NativeString___to_s_with_length(var102, 5l);
var101 = var103;
varonce100 = var101;
}
((struct instance_standard__NativeArray*)var99)->values[1]=var101;
} else {
var99 = varonce98;
varonce98 = NULL;
}
((struct instance_standard__NativeArray*)var99)->values[0]=var_guard;
{
var104 = ((val*(*)(val* self))(var99->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var99); /* native_to_s on <var99:NativeArray[String]>*/
}
varonce98 = var99;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var104); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce105!=NULL)) {
var106 = varonce105;
} else {
var107 = "}";
var108 = standard___standard__NativeString___to_s_with_length(var107, 1l);
var106 = var108;
varonce105 = var106;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var106); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ASendExpr#expr for (self: ASendExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___ASendExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : RuntimeVariable */;
val* var_recv /* var recv: RuntimeVariable */;
val* var5 /* : nullable CallSite */;
val* var7 /* : nullable CallSite */;
val* var_callsite /* var callsite: CallSite */;
val* var8 /* : MMethodDef */;
val* var10 /* : MMethodDef */;
val* var11 /* : nullable SignatureMap */;
val* var13 /* : nullable SignatureMap */;
val* var14 /* : Array[AExpr] */;
val* var15 /* : Array[RuntimeVariable] */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var16 /* : nullable RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#ASendExpr#n_expr (self) on <self:ASendExpr> */
var3 = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASendExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2025);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nit___nit__AbstractCompilerVisitor___expr(var_v, var1, ((val*)NULL));
}
var_recv = var4;
{
{ /* Inline typing#ASendExpr#callsite (self) on <self:ASendExpr> */
var7 = self->attrs[COLOR_nit__typing__ASendExpr___callsite].val; /* _callsite on <self:ASendExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 3097);
fatal_exit(1);
}
var_callsite = var5;
{
{ /* Inline typing#CallSite#mpropdef (var_callsite) on <var_callsite:CallSite> */
var10 = var_callsite->attrs[COLOR_nit__typing__CallSite___mpropdef].val; /* _mpropdef on <var_callsite:CallSite> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 627);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline typing#CallSite#signaturemap (var_callsite) on <var_callsite:CallSite> */
var13 = var_callsite->attrs[COLOR_nit__typing__CallSite___signaturemap].val; /* _signaturemap on <var_callsite:CallSite> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = nit__typing___ASendExpr___raw_arguments(self);
}
{
var15 = nit___nit__AbstractCompilerVisitor___varargize(var_v, var8, var11, var_recv, var14);
}
var_args = var15;
{
var16 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_callsite, var_args); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var = var16;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ASendReassignFormExpr#stmt for (self: ASendReassignFormExpr, AbstractCompilerVisitor) */
void nit__abstract_compiler___ASendReassignFormExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : RuntimeVariable */;
val* var_recv /* var recv: RuntimeVariable */;
val* var4 /* : nullable CallSite */;
val* var6 /* : nullable CallSite */;
val* var_callsite /* var callsite: CallSite */;
val* var7 /* : MMethodDef */;
val* var9 /* : MMethodDef */;
val* var10 /* : nullable SignatureMap */;
val* var12 /* : nullable SignatureMap */;
val* var13 /* : Array[AExpr] */;
val* var14 /* : Array[RuntimeVariable] */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var15 /* : AExpr */;
val* var17 /* : AExpr */;
val* var18 /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var19 /* : nullable RuntimeVariable */;
val* var_left /* var left: nullable RuntimeVariable */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : nullable CallSite */;
val* var27 /* : nullable CallSite */;
val* var28 /* : Array[RuntimeVariable] */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var29 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
val* var35 /* : nullable CallSite */;
val* var37 /* : nullable CallSite */;
val* var38 /* : nullable RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#ASendExpr#n_expr (self) on <self:ASendReassignFormExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASendReassignFormExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2025);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit___nit__AbstractCompilerVisitor___expr(var_v, var, ((val*)NULL));
}
var_recv = var3;
{
{ /* Inline typing#ASendExpr#callsite (self) on <self:ASendReassignFormExpr> */
var6 = self->attrs[COLOR_nit__typing__ASendExpr___callsite].val; /* _callsite on <self:ASendReassignFormExpr> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 3107);
fatal_exit(1);
}
var_callsite = var4;
{
{ /* Inline typing#CallSite#mpropdef (var_callsite) on <var_callsite:CallSite> */
var9 = var_callsite->attrs[COLOR_nit__typing__CallSite___mpropdef].val; /* _mpropdef on <var_callsite:CallSite> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 627);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline typing#CallSite#signaturemap (var_callsite) on <var_callsite:CallSite> */
var12 = var_callsite->attrs[COLOR_nit__typing__CallSite___signaturemap].val; /* _signaturemap on <var_callsite:CallSite> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = nit__typing___ASendExpr___raw_arguments(self);
}
{
var14 = nit___nit__AbstractCompilerVisitor___varargize(var_v, var7, var10, var_recv, var13);
}
var_args = var14;
{
{ /* Inline parser_nodes#AReassignFormExpr#n_value (self) on <self:ASendReassignFormExpr> */
var17 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:ASendReassignFormExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2006);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = nit___nit__AbstractCompilerVisitor___expr(var_v, var15, ((val*)NULL));
}
var_value = var18;
{
var19 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_callsite, var_args); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var_left = var19;
if (var_left == NULL) {
var20 = 0; /* is null */
} else {
var20 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_left,((val*)NULL)) on <var_left:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var23 = ((short int(*)(val* self, val* p0))(var_left->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_left, var_other); /* == on <var_left:nullable RuntimeVariable(RuntimeVariable)>*/
}
var24 = !var23;
var21 = var24;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 3113);
fatal_exit(1);
}
{
{ /* Inline typing#AReassignFormExpr#reassign_callsite (self) on <self:ASendReassignFormExpr> */
var27 = self->attrs[COLOR_nit__typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:ASendReassignFormExpr> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 3115);
fatal_exit(1);
}
var28 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
{
standard___standard__Array___with_capacity(var28, 2l); /* Direct call array#Array#with_capacity on <var28:Array[RuntimeVariable]>*/
}
var_ = var28;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_left); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_value); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
var29 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var25, var_); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var_res = var29;
if (var_res == NULL) {
var30 = 0; /* is null */
} else {
var30 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,((val*)NULL)) on <var_res:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var33 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
var34 = !var33;
var31 = var34;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
var30 = var31;
}
if (unlikely(!var30)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 3116);
fatal_exit(1);
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_args, var_res); /* Direct call array#Array#add on <var_args:Array[RuntimeVariable]>*/
}
{
{ /* Inline typing#ASendReassignFormExpr#write_callsite (self) on <self:ASendReassignFormExpr> */
var37 = self->attrs[COLOR_nit__typing__ASendReassignFormExpr___write_callsite].val; /* _write_callsite on <self:ASendReassignFormExpr> */
var35 = var37;
RET_LABEL36:(void)0;
}
}
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 3119);
fatal_exit(1);
}
{
var38 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var35, var_args); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#ASuperExpr#expr for (self: ASuperExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___ASuperExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable StaticFrame */;
val* var3 /* : nullable StaticFrame */;
val* var4 /* : Array[RuntimeVariable] */;
val* var6 /* : Array[RuntimeVariable] */;
val* var7 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
val* var8 /* : nullable CallSite */;
val* var10 /* : nullable CallSite */;
val* var_callsite /* var callsite: nullable CallSite */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : AExprs */;
val* var18 /* : AExprs */;
val* var19 /* : ANodes[AExpr] */;
val* var21 /* : ANodes[AExpr] */;
short int var22 /* : Bool */;
val* var23 /* : Array[RuntimeVariable] */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var_args /* var args: nullable Object */;
long var_i /* var i: Int */;
val* var24 /* : MSignature */;
val* var26 /* : MSignature */;
long var27 /* : Int */;
long var_28 /* var : Int */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var32 /* : Bool */;
val* var33 /* : nullable StaticFrame */;
val* var35 /* : nullable StaticFrame */;
val* var36 /* : Array[RuntimeVariable] */;
val* var38 /* : Array[RuntimeVariable] */;
long var39 /* : Int */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
const char* var_class_name44;
long var45 /* : Int */;
val* var46 /* : nullable Object */;
long var47 /* : Int */;
val* var48 /* : MMethodDef */;
val* var50 /* : MMethodDef */;
val* var51 /* : nullable SignatureMap */;
val* var53 /* : nullable SignatureMap */;
val* var54 /* : AExprs */;
val* var56 /* : AExprs */;
val* var57 /* : ANodes[AExpr] */;
val* var59 /* : ANodes[AExpr] */;
val* var60 /* : Array[RuntimeVariable] */;
val* var61 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var62 /* : nullable MMethodDef */;
val* var64 /* : nullable MMethodDef */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var65 /* : AExprs */;
val* var67 /* : AExprs */;
val* var68 /* : ANodes[AExpr] */;
val* var70 /* : ANodes[AExpr] */;
short int var71 /* : Bool */;
val* var72 /* : nullable StaticFrame */;
val* var74 /* : nullable StaticFrame */;
val* var75 /* : Array[RuntimeVariable] */;
val* var77 /* : Array[RuntimeVariable] */;
val* var_args78 /* var args: nullable Object */;
val* var79 /* : nullable SignatureMap */;
val* var81 /* : nullable SignatureMap */;
val* var82 /* : AExprs */;
val* var84 /* : AExprs */;
val* var85 /* : ANodes[AExpr] */;
val* var87 /* : ANodes[AExpr] */;
val* var88 /* : Array[RuntimeVariable] */;
val* var89 /* : MType */;
val* var91 /* : MType */;
short int var92 /* : Bool */;
int cltype93;
int idtype94;
const char* var_class_name95;
val* var96 /* : nullable RuntimeVariable */;
var_v = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var3 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 3126);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#arguments (var1) on <var1:nullable StaticFrame> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1835);
fatal_exit(1);
}
var6 = var1->attrs[COLOR_nit__abstract_compiler__StaticFrame___arguments].val; /* _arguments on <var1:nullable StaticFrame> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1835);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = standard___standard__SequenceRead___Collection__first(var4);
}
var_recv = var7;
{
{ /* Inline typing#ASuperExpr#callsite (self) on <self:ASuperExpr> */
var10 = self->attrs[COLOR_nit__typing__ASuperExpr___callsite].val; /* _callsite on <self:ASuperExpr> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_callsite = var8;
if (var_callsite == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_callsite,((val*)NULL)) on <var_callsite:nullable CallSite> */
var_other = ((val*)NULL);
{
var14 = ((short int(*)(val* self, val* p0))(var_callsite->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_callsite, var_other); /* == on <var_callsite:nullable CallSite(CallSite)>*/
}
var15 = !var14;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
if (var11){
{
{ /* Inline parser_nodes#ASuperExpr#n_args (self) on <self:ASuperExpr> */
var18 = self->attrs[COLOR_nit__parser_nodes__ASuperExpr___n_args].val; /* _n_args on <self:ASuperExpr> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2344);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var16) on <var16:AExprs> */
var21 = var16->attrs[COLOR_nit__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var16:AExprs> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2771);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = nit___nit__ANodes___standard__abstract_collection__Collection__is_empty(var19);
}
if (var22){
var23 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
{
standard___standard__Array___with_capacity(var23, 1l); /* Direct call array#Array#with_capacity on <var23:Array[RuntimeVariable]>*/
}
var_ = var23;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_recv); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
var_args = var_;
var_i = 0l;
{
{ /* Inline typing#CallSite#msignature (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var26 = var_callsite->attrs[COLOR_nit__typing__CallSite___msignature].val; /* _msignature on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 631);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
var27 = nit___nit__MSignature___arity(var24);
}
var_28 = var27;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_28) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_28:Int> isa OTHER */
/* <var_28:Int> isa OTHER */
var31 = 1; /* easy <var_28:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var32 = var_i < var_28;
var29 = var32;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
if (var29){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var35 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
if (var33 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 3136);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#arguments (var33) on <var33:nullable StaticFrame> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1835);
fatal_exit(1);
}
var38 = var33->attrs[COLOR_nit__abstract_compiler__StaticFrame___arguments].val; /* _arguments on <var33:nullable StaticFrame> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1835);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var41 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var41)) {
var_class_name44 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name44);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var45 = var_i + 1l;
var39 = var45;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
{
var46 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var36, var39);
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_args, var46); /* Direct call array#Array#add on <var_args:nullable Object(Array[RuntimeVariable])>*/
}
{
var47 = standard___standard__Int___Discrete__successor(var_i, 1l);
}
var_i = var47;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
} else {
{
{ /* Inline typing#CallSite#mpropdef (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var50 = var_callsite->attrs[COLOR_nit__typing__CallSite___mpropdef].val; /* _mpropdef on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 627);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
{ /* Inline typing#CallSite#signaturemap (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var53 = var_callsite->attrs[COLOR_nit__typing__CallSite___signaturemap].val; /* _signaturemap on <var_callsite:nullable CallSite(CallSite)> */
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline parser_nodes#ASuperExpr#n_args (self) on <self:ASuperExpr> */
var56 = self->attrs[COLOR_nit__parser_nodes__ASuperExpr___n_args].val; /* _n_args on <self:ASuperExpr> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2344);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var54) on <var54:AExprs> */
var59 = var54->attrs[COLOR_nit__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var54:AExprs> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2771);
fatal_exit(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
var60 = nit___nit__AbstractCompilerVisitor___varargize(var_v, var48, var51, var_recv, var57);
}
var_args = var60;
}
{
var61 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_callsite, var_args); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var_res = var61;
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#ASuperExpr#mpropdef (self) on <self:ASuperExpr> */
var64 = self->attrs[COLOR_nit__typing__ASuperExpr___mpropdef].val; /* _mpropdef on <self:ASuperExpr> */
var62 = var64;
RET_LABEL63:(void)0;
}
}
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 3147);
fatal_exit(1);
}
var_mpropdef = var62;
{
{ /* Inline parser_nodes#ASuperExpr#n_args (self) on <self:ASuperExpr> */
var67 = self->attrs[COLOR_nit__parser_nodes__ASuperExpr___n_args].val; /* _n_args on <self:ASuperExpr> */
if (unlikely(var67 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2344);
fatal_exit(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var65) on <var65:AExprs> */
var70 = var65->attrs[COLOR_nit__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var65:AExprs> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2771);
fatal_exit(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
var71 = nit___nit__ANodes___standard__abstract_collection__Collection__is_empty(var68);
}
if (var71){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var74 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var72 = var74;
RET_LABEL73:(void)0;
}
}
if (var72 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 3151);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#arguments (var72) on <var72:nullable StaticFrame> */
if (unlikely(var72 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1835);
fatal_exit(1);
}
var77 = var72->attrs[COLOR_nit__abstract_compiler__StaticFrame___arguments].val; /* _arguments on <var72:nullable StaticFrame> */
if (unlikely(var77 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1835);
fatal_exit(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
var_args78 = var75;
} else {
{
{ /* Inline typing#ASuperExpr#signaturemap (self) on <self:ASuperExpr> */
var81 = self->attrs[COLOR_nit__typing__ASuperExpr___signaturemap].val; /* _signaturemap on <self:ASuperExpr> */
var79 = var81;
RET_LABEL80:(void)0;
}
}
{
{ /* Inline parser_nodes#ASuperExpr#n_args (self) on <self:ASuperExpr> */
var84 = self->attrs[COLOR_nit__parser_nodes__ASuperExpr___n_args].val; /* _n_args on <self:ASuperExpr> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2344);
fatal_exit(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var82) on <var82:AExprs> */
var87 = var82->attrs[COLOR_nit__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var82:AExprs> */
if (unlikely(var87 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2771);
fatal_exit(1);
}
var85 = var87;
RET_LABEL86:(void)0;
}
}
{
var88 = nit___nit__AbstractCompilerVisitor___varargize(var_v, var_mpropdef, var79, var_recv, var85);
}
var_args78 = var88;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_recv) on <var_recv:RuntimeVariable> */
var91 = var_recv->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_recv:RuntimeVariable> */
if (unlikely(var91 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var89 = var91;
RET_LABEL90:(void)0;
}
}
/* <var89:MType> isa MClassType */
cltype93 = type_nit__MClassType.color;
idtype94 = type_nit__MClassType.id;
if(cltype93 >= var89->type->table_size) {
var92 = 0;
} else {
var92 = var89->type->type_table[cltype93] == idtype94;
}
if (unlikely(!var92)) {
var_class_name95 = var89 == NULL ? "null" : var89->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name95);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 3157);
fatal_exit(1);
}
{
var96 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__supercall(var_v, var_mpropdef, var89, var_args78);
}
var = var96;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ANewExpr#expr for (self: ANewExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___ANewExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MClassType */;
val* var3 /* : nullable MClassType */;
val* var_mtype /* var mtype: nullable MClassType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : MClass */;
val* var11 /* : MClass */;
val* var12 /* : String */;
val* var14 /* : String */;
static val* varonce;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : FlatString */;
short int var18 /* : Bool */;
val* var19 /* : AExprs */;
val* var21 /* : AExprs */;
val* var22 /* : ANodes[AExpr] */;
val* var24 /* : ANodes[AExpr] */;
long var25 /* : Int */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : AExprs */;
val* var31 /* : AExprs */;
val* var32 /* : ANodes[AExpr] */;
val* var34 /* : ANodes[AExpr] */;
val* var35 /* : nullable Object */;
val* var36 /* : RuntimeVariable */;
val* var_l /* var l: RuntimeVariable */;
short int var37 /* : Bool */;
int cltype;
int idtype;
val* var38 /* : Array[MType] */;
val* var40 /* : Array[MType] */;
val* var41 /* : nullable Object */;
val* var_elttype /* var elttype: MType */;
val* var42 /* : RuntimeVariable */;
val* var43 /* : RuntimeVariable */;
val* var_recv /* var recv: RuntimeVariable */;
val* var44 /* : nullable CallSite */;
val* var46 /* : nullable CallSite */;
val* var_callsite /* var callsite: nullable CallSite */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
val* var_other50 /* var other: nullable Object */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
val* var54 /* : MMethodDef */;
val* var56 /* : MMethodDef */;
val* var57 /* : nullable SignatureMap */;
val* var59 /* : nullable SignatureMap */;
val* var60 /* : AExprs */;
val* var62 /* : AExprs */;
val* var63 /* : ANodes[AExpr] */;
val* var65 /* : ANodes[AExpr] */;
val* var66 /* : Array[RuntimeVariable] */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var67 /* : nullable RuntimeVariable */;
val* var_res2 /* var res2: nullable RuntimeVariable */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
short int var71 /* : Bool */;
short int var72 /* : Bool */;
var_v = p0;
{
{ /* Inline typing#ANewExpr#recvtype (self) on <self:ANewExpr> */
var3 = self->attrs[COLOR_nit__typing__ANewExpr___recvtype].val; /* _recvtype on <self:ANewExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_mtype = var1;
if (var_mtype == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mtype,((val*)NULL)) on <var_mtype:nullable MClassType> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype, var_other); /* == on <var_mtype:nullable MClassType(MClassType)>*/
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 3165);
fatal_exit(1);
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:nullable MClassType(MClassType)> */
var11 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:nullable MClassType(MClassType)> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline model#MClass#name (var9) on <var9:MClass> */
var14 = var9->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var9:MClass> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
if (likely(varonce!=NULL)) {
var15 = varonce;
} else {
var16 = "NativeArray";
var17 = standard___standard__NativeString___to_s_with_length(var16, 11l);
var15 = var17;
varonce = var15;
}
{
var18 = ((short int(*)(val* self, val* p0))(var12->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var12, var15); /* == on <var12:String>*/
}
if (var18){
{
{ /* Inline parser_nodes#ANewExpr#n_args (self) on <self:ANewExpr> */
var21 = self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_args].val; /* _n_args on <self:ANewExpr> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2261);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var19) on <var19:AExprs> */
var24 = var19->attrs[COLOR_nit__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var19:AExprs> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2771);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
var25 = nit___nit__ANodes___standard__abstract_collection__Collection__length(var22);
}
{
{ /* Inline kernel#Int#== (var25,1l) on <var25:Int> */
var28 = var25 == 1l;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
if (unlikely(!var26)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 3168);
fatal_exit(1);
}
{
{ /* Inline parser_nodes#ANewExpr#n_args (self) on <self:ANewExpr> */
var31 = self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_args].val; /* _n_args on <self:ANewExpr> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2261);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var29) on <var29:AExprs> */
var34 = var29->attrs[COLOR_nit__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var29:AExprs> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2771);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
var35 = standard___standard__SequenceRead___Collection__first(var32);
}
{
var36 = nit___nit__AbstractCompilerVisitor___expr(var_v, var35, ((val*)NULL));
}
var_l = var36;
/* <var_mtype:nullable MClassType(MClassType)> isa MGenericType */
cltype = type_nit__MGenericType.color;
idtype = type_nit__MGenericType.id;
if(cltype >= var_mtype->type->table_size) {
var37 = 0;
} else {
var37 = var_mtype->type->type_table[cltype] == idtype;
}
if (unlikely(!var37)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 3170);
fatal_exit(1);
}
{
{ /* Inline model#MGenericType#arguments (var_mtype) on <var_mtype:nullable MClassType(MGenericType)> */
var40 = var_mtype->attrs[COLOR_nit__model__MGenericType___arguments].val; /* _arguments on <var_mtype:nullable MClassType(MGenericType)> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1244);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
var41 = standard___standard__SequenceRead___Collection__first(var38);
}
var_elttype = var41;
{
var42 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__native_array_instance]))(var_v, var_elttype, var_l); /* native_array_instance on <var_v:AbstractCompilerVisitor>*/
}
var = var42;
goto RET_LABEL;
} else {
}
{
var43 = nit___nit__AbstractCompilerVisitor___init_instance_or_extern(var_v, var_mtype);
}
var_recv = var43;
{
{ /* Inline typing#ANewExpr#callsite (self) on <self:ANewExpr> */
var46 = self->attrs[COLOR_nit__typing__ANewExpr___callsite].val; /* _callsite on <self:ANewExpr> */
var44 = var46;
RET_LABEL45:(void)0;
}
}
var_callsite = var44;
if (var_callsite == NULL) {
var47 = 1; /* is null */
} else {
var47 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_callsite,((val*)NULL)) on <var_callsite:nullable CallSite> */
var_other50 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_callsite,var_other50) on <var_callsite:nullable CallSite(CallSite)> */
var53 = var_callsite == var_other50;
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
var48 = var51;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
var47 = var48;
}
if (var47){
var = var_recv;
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#CallSite#mpropdef (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var56 = var_callsite->attrs[COLOR_nit__typing__CallSite___mpropdef].val; /* _mpropdef on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 627);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline typing#CallSite#signaturemap (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var59 = var_callsite->attrs[COLOR_nit__typing__CallSite___signaturemap].val; /* _signaturemap on <var_callsite:nullable CallSite(CallSite)> */
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
{ /* Inline parser_nodes#ANewExpr#n_args (self) on <self:ANewExpr> */
var62 = self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_args].val; /* _n_args on <self:ANewExpr> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2261);
fatal_exit(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var60) on <var60:AExprs> */
var65 = var60->attrs[COLOR_nit__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var60:AExprs> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2771);
fatal_exit(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
var66 = nit___nit__AbstractCompilerVisitor___varargize(var_v, var54, var57, var_recv, var63);
}
var_args = var66;
{
var67 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_callsite, var_args); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var_res2 = var67;
if (var_res2 == NULL) {
var68 = 0; /* is null */
} else {
var68 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res2,((val*)NULL)) on <var_res2:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var71 = ((short int(*)(val* self, val* p0))(var_res2->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res2, var_other); /* == on <var_res2:nullable RuntimeVariable(RuntimeVariable)>*/
}
var72 = !var71;
var69 = var72;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
var68 = var69;
}
if (var68){
var = var_res2;
goto RET_LABEL;
} else {
}
var = var_recv;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAttrExpr#expr for (self: AAttrExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___AAttrExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : RuntimeVariable */;
val* var_recv /* var recv: RuntimeVariable */;
val* var5 /* : nullable MAttribute */;
val* var7 /* : nullable MAttribute */;
val* var_mproperty /* var mproperty: MAttribute */;
val* var8 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#AAttrFormExpr#n_expr (self) on <self:AAttrExpr> */
var3 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2269);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nit___nit__AbstractCompilerVisitor___expr(var_v, var1, ((val*)NULL));
}
var_recv = var4;
{
{ /* Inline typing#AAttrFormExpr#mproperty (self) on <self:AAttrExpr> */
var7 = self->attrs[COLOR_nit__typing__AAttrFormExpr___mproperty].val; /* _mproperty on <self:AAttrExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 3194);
fatal_exit(1);
}
var_mproperty = var5;
{
var8 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__read_attribute(var_v, var_mproperty, var_recv);
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAttrAssignExpr#expr for (self: AAttrAssignExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___AAttrAssignExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : RuntimeVariable */;
val* var_recv /* var recv: RuntimeVariable */;
val* var5 /* : AExpr */;
val* var7 /* : AExpr */;
val* var8 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var9 /* : nullable MAttribute */;
val* var11 /* : nullable MAttribute */;
val* var_mproperty /* var mproperty: MAttribute */;
var_v = p0;
{
{ /* Inline parser_nodes#AAttrFormExpr#n_expr (self) on <self:AAttrAssignExpr> */
var3 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrAssignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2269);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nit___nit__AbstractCompilerVisitor___expr(var_v, var1, ((val*)NULL));
}
var_recv = var4;
{
{ /* Inline parser_nodes#AAssignFormExpr#n_value (self) on <self:AAttrAssignExpr> */
var7 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AAttrAssignExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1995);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nit___nit__AbstractCompilerVisitor___expr(var_v, var5, ((val*)NULL));
}
var_i = var8;
{
{ /* Inline typing#AAttrFormExpr#mproperty (self) on <self:AAttrAssignExpr> */
var11 = self->attrs[COLOR_nit__typing__AAttrFormExpr___mproperty].val; /* _mproperty on <self:AAttrAssignExpr> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 3204);
fatal_exit(1);
}
var_mproperty = var9;
{
nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__write_attribute(var_v, var_mproperty, var_recv, var_i); /* Direct call separate_compiler#SeparateCompilerVisitor#write_attribute on <var_v:AbstractCompilerVisitor>*/
}
var = var_i;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAttrReassignExpr#stmt for (self: AAttrReassignExpr, AbstractCompilerVisitor) */
void nit__abstract_compiler___AAttrReassignExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : RuntimeVariable */;
val* var_recv /* var recv: RuntimeVariable */;
val* var4 /* : AExpr */;
val* var6 /* : AExpr */;
val* var7 /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var8 /* : nullable MAttribute */;
val* var10 /* : nullable MAttribute */;
val* var_mproperty /* var mproperty: MAttribute */;
val* var11 /* : RuntimeVariable */;
val* var_attr /* var attr: RuntimeVariable */;
val* var12 /* : nullable CallSite */;
val* var14 /* : nullable CallSite */;
val* var15 /* : Array[RuntimeVariable] */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var16 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
var_v = p0;
{
{ /* Inline parser_nodes#AAttrFormExpr#n_expr (self) on <self:AAttrReassignExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrReassignExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2269);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit___nit__AbstractCompilerVisitor___expr(var_v, var, ((val*)NULL));
}
var_recv = var3;
{
{ /* Inline parser_nodes#AReassignFormExpr#n_value (self) on <self:AAttrReassignExpr> */
var6 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AAttrReassignExpr> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2006);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nit___nit__AbstractCompilerVisitor___expr(var_v, var4, ((val*)NULL));
}
var_value = var7;
{
{ /* Inline typing#AAttrFormExpr#mproperty (self) on <self:AAttrReassignExpr> */
var10 = self->attrs[COLOR_nit__typing__AAttrFormExpr___mproperty].val; /* _mproperty on <self:AAttrReassignExpr> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 3215);
fatal_exit(1);
}
var_mproperty = var8;
{
var11 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__read_attribute(var_v, var_mproperty, var_recv);
}
var_attr = var11;
{
{ /* Inline typing#AReassignFormExpr#reassign_callsite (self) on <self:AAttrReassignExpr> */
var14 = self->attrs[COLOR_nit__typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:AAttrReassignExpr> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 3217);
fatal_exit(1);
}
var15 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
{
standard___standard__Array___with_capacity(var15, 2l); /* Direct call array#Array#with_capacity on <var15:Array[RuntimeVariable]>*/
}
var_ = var15;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_attr); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_value); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
var16 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var12, var_); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var_res = var16;
if (var_res == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,((val*)NULL)) on <var_res:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var20 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
var21 = !var20;
var18 = var21;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
var17 = var18;
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 3218);
fatal_exit(1);
}
{
nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__write_attribute(var_v, var_mproperty, var_recv, var_res); /* Direct call separate_compiler#SeparateCompilerVisitor#write_attribute on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AIssetAttrExpr#expr for (self: AIssetAttrExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___AIssetAttrExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : RuntimeVariable */;
val* var_recv /* var recv: RuntimeVariable */;
val* var5 /* : nullable MAttribute */;
val* var7 /* : nullable MAttribute */;
val* var_mproperty /* var mproperty: MAttribute */;
val* var8 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#AAttrFormExpr#n_expr (self) on <self:AIssetAttrExpr> */
var3 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AIssetAttrExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2269);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nit___nit__AbstractCompilerVisitor___expr(var_v, var1, ((val*)NULL));
}
var_recv = var4;
{
{ /* Inline typing#AAttrFormExpr#mproperty (self) on <self:AIssetAttrExpr> */
var7 = self->attrs[COLOR_nit__typing__AAttrFormExpr___mproperty].val; /* _mproperty on <self:AIssetAttrExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 3227);
fatal_exit(1);
}
var_mproperty = var5;
{
var8 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__isset_attribute(var_v, var_mproperty, var_recv);
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AVarargExpr#expr for (self: AVarargExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___AVarargExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#AVarargExpr#n_expr (self) on <self:AVarargExpr> */
var3 = self->attrs[COLOR_nit__parser_nodes__AVarargExpr___n_expr].val; /* _n_expr on <self:AVarargExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2692);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nit___nit__AbstractCompilerVisitor___expr(var_v, var1, ((val*)NULL));
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ANamedargExpr#expr for (self: ANamedargExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___ANamedargExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#ANamedargExpr#n_expr (self) on <self:ANamedargExpr> */
var3 = self->attrs[COLOR_nit__parser_nodes__ANamedargExpr___n_expr].val; /* _n_expr on <self:ANamedargExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2709);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nit___nit__AbstractCompilerVisitor___expr(var_v, var1, ((val*)NULL));
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ADebugTypeExpr#stmt for (self: ADebugTypeExpr, AbstractCompilerVisitor) */
void nit__abstract_compiler___ADebugTypeExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method abstract_compiler#MModule#properties for (self: MModule, MClass): Set[MProperty] */
val* nit__abstract_compiler___MModule___properties(val* self, val* p0) {
val* var /* : Set[MProperty] */;
val* var_mclass /* var mclass: MClass */;
val* var1 /* : Map[MClass, Set[MProperty]] */;
val* var3 /* : Map[MClass, Set[MProperty]] */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : HashSet[MProperty] */;
val* var_properties /* var properties: HashSet[MProperty] */;
val* var7 /* : Array[MClass] */;
val* var_parents /* var parents: Array[MClass] */;
val* var8 /* : POSet[MClass] */;
short int var9 /* : Bool */;
val* var10 /* : POSetElement[MClass] */;
val* var11 /* : Collection[nullable Object] */;
val* var_ /* var : Array[MClass] */;
val* var12 /* : ArrayIterator[nullable Object] */;
val* var_13 /* var : ArrayIterator[MClass] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_parent /* var parent: MClass */;
val* var16 /* : Set[MProperty] */;
val* var17 /* : Array[MClassDef] */;
val* var19 /* : Array[MClassDef] */;
val* var_20 /* var : Array[MClassDef] */;
val* var21 /* : ArrayIterator[nullable Object] */;
val* var_22 /* var : ArrayIterator[MClassDef] */;
short int var23 /* : Bool */;
val* var24 /* : nullable Object */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var25 /* : POSetElement[MModule] */;
val* var27 /* : POSetElement[MModule] */;
val* var28 /* : MModule */;
val* var30 /* : MModule */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
val* var34 /* : Array[MProperty] */;
val* var36 /* : Array[MProperty] */;
val* var_37 /* var : Array[MProperty] */;
val* var38 /* : ArrayIterator[nullable Object] */;
val* var_39 /* var : ArrayIterator[MProperty] */;
short int var40 /* : Bool */;
val* var41 /* : nullable Object */;
val* var_mprop /* var mprop: MProperty */;
val* var44 /* : Map[MClass, Set[MProperty]] */;
val* var46 /* : Map[MClass, Set[MProperty]] */;
val* var47 /* : Map[MClass, Set[MProperty]] */;
val* var49 /* : Map[MClass, Set[MProperty]] */;
val* var50 /* : nullable Object */;
var_mclass = p0;
{
{ /* Inline abstract_compiler#MModule#properties_cache (self) on <self:MModule> */
var3 = self->attrs[COLOR_nit__abstract_compiler__MModule___properties_cache].val; /* _properties_cache on <self:MModule> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _properties_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 3286);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((short int(*)(val* self, val* p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__abstract_collection__MapRead__has_key]))(var1, var_mclass); /* has_key on <var1:Map[MClass, Set[MProperty]]>*/
}
var5 = !var4;
if (var5){
var6 = NEW_standard__HashSet(&type_standard__HashSet__nit__MProperty);
{
standard___standard__HashSet___standard__kernel__Object__init(var6); /* Direct call hash_collection#HashSet#init on <var6:HashSet[MProperty]>*/
}
var_properties = var6;
var7 = NEW_standard__Array(&type_standard__Array__nit__MClass);
{
standard___standard__Array___standard__kernel__Object__init(var7); /* Direct call array#Array#init on <var7:Array[MClass]>*/
}
var_parents = var7;
{
var8 = nit__model___MModule___flatten_mclass_hierarchy(self);
}
{
var9 = poset___poset__POSet___standard__abstract_collection__Collection__has(var8, var_mclass);
}
if (var9){
{
var10 = nit___nit__MClass___in_hierarchy(var_mclass, self);
}
{
var11 = poset___poset__POSetElement___direct_greaters(var10);
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add_all(var_parents, var11); /* Direct call array#Array#add_all on <var_parents:Array[MClass]>*/
}
} else {
}
var_ = var_parents;
{
var12 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_13 = var12;
for(;;) {
{
var14 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_13);
}
if (var14){
{
var15 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_13);
}
var_parent = var15;
{
var16 = nit__abstract_compiler___MModule___properties(self, var_parent);
}
{
standard___standard__SimpleCollection___add_all(var_properties, var16); /* Direct call abstract_collection#SimpleCollection#add_all on <var_properties:HashSet[MProperty]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_13); /* Direct call array#ArrayIterator#next on <var_13:ArrayIterator[MClass]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_13); /* Direct call array#ArrayIterator#finish on <var_13:ArrayIterator[MClass]>*/
}
{
{ /* Inline model#MClass#mclassdefs (var_mclass) on <var_mclass:MClass> */
var19 = var_mclass->attrs[COLOR_nit__model__MClass___mclassdefs].val; /* _mclassdefs on <var_mclass:MClass> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 454);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_20 = var17;
{
var21 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_20);
}
var_22 = var21;
for(;;) {
{
var23 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_22);
}
if (var23){
{
var24 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_22);
}
var_mclassdef = var24;
{
{ /* Inline mmodule#MModule#in_importation (self) on <self:MModule> */
var27 = self->attrs[COLOR_nit__mmodule__MModule___in_importation].val; /* _in_importation on <self:MModule> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 96);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var30 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
var31 = poset___poset__POSetElement____60d_61d(var25, var28);
}
var32 = !var31;
if (var32){
goto BREAK_label33;
} else {
}
{
{ /* Inline model#MClassDef#intro_mproperties (var_mclassdef) on <var_mclassdef:MClassDef> */
var36 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___intro_mproperties].val; /* _intro_mproperties on <var_mclassdef:MClassDef> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mproperties");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 681);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
var_37 = var34;
{
var38 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_37);
}
var_39 = var38;
for(;;) {
{
var40 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_39);
}
if (var40){
{
var41 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_39);
}
var_mprop = var41;
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var_properties, var_mprop); /* Direct call hash_collection#HashSet#add on <var_properties:HashSet[MProperty]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_39); /* Direct call array#ArrayIterator#next on <var_39:ArrayIterator[MProperty]>*/
}
} else {
goto BREAK_label42;
}
}
BREAK_label42: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_39); /* Direct call array#ArrayIterator#finish on <var_39:ArrayIterator[MProperty]>*/
}
BREAK_label33: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_22); /* Direct call array#ArrayIterator#next on <var_22:ArrayIterator[MClassDef]>*/
}
} else {
goto BREAK_label43;
}
}
BREAK_label43: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_22); /* Direct call array#ArrayIterator#finish on <var_22:ArrayIterator[MClassDef]>*/
}
{
{ /* Inline abstract_compiler#MModule#properties_cache (self) on <self:MModule> */
var46 = self->attrs[COLOR_nit__abstract_compiler__MModule___properties_cache].val; /* _properties_cache on <self:MModule> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _properties_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 3286);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
((void(*)(val* self, val* p0, val* p1))((((long)var44&3)?class_info[((long)var44&3)]:var44->class)->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var44, var_mclass, var_properties); /* []= on <var44:Map[MClass, Set[MProperty]]>*/
}
} else {
}
{
{ /* Inline abstract_compiler#MModule#properties_cache (self) on <self:MModule> */
var49 = self->attrs[COLOR_nit__abstract_compiler__MModule___properties_cache].val; /* _properties_cache on <self:MModule> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _properties_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 3286);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
var50 = ((val*(*)(val* self, val* p0))((((long)var47&3)?class_info[((long)var47&3)]:var47->class)->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var47, var_mclass); /* [] on <var47:Map[MClass, Set[MProperty]]>*/
}
var = var50;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MModule#properties_cache for (self: MModule): Map[MClass, Set[MProperty]] */
val* nit__abstract_compiler___MModule___properties_cache(val* self) {
val* var /* : Map[MClass, Set[MProperty]] */;
val* var1 /* : Map[MClass, Set[MProperty]] */;
var1 = self->attrs[COLOR_nit__abstract_compiler__MModule___properties_cache].val; /* _properties_cache on <self:MModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _properties_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 3286);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Sys#main for (self: Sys) */
void nit__abstract_compiler___standard__Sys___main(val* self) {
val* var /* : ToolContext */;
val* var_toolcontext /* var toolcontext: ToolContext */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
val* var5 /* : Sequence[String] */;
val* var6 /* : Model */;
val* var_model /* var model: Model */;
val* var8 /* : ModelBuilder */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var9 /* : OptionContext */;
val* var11 /* : OptionContext */;
val* var12 /* : Array[String] */;
val* var14 /* : Array[String] */;
val* var_arguments /* var arguments: Array[String] */;
short int var15 /* : Bool */;
long var16 /* : Int */;
long var18 /* : Int */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var22 /* : Bool */;
short int var_ /* var : Bool */;
val* var23 /* : OptionString */;
val* var25 /* : OptionString */;
val* var26 /* : nullable Object */;
val* var28 /* : nullable Object */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : FlatString */;
val* var39 /* : Array[MModule] */;
val* var_mmodules /* var mmodules: Array[MModule] */;
short int var40 /* : Bool */;
val* var_41 /* var : Array[MModule] */;
val* var42 /* : ArrayIterator[nullable Object] */;
val* var_43 /* var : ArrayIterator[MModule] */;
short int var44 /* : Bool */;
val* var45 /* : nullable Object */;
val* var_mmodule /* var mmodule: MModule */;
val* var47 /* : NativeArray[String] */;
static val* varonce46;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
val* var51 /* : FlatString */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
val* var55 /* : FlatString */;
val* var56 /* : String */;
val* var57 /* : String */;
val* var58 /* : Array[MModule] */;
val* var_59 /* var : Array[MModule] */;
val* var_ms /* var ms: Array[MModule] */;
var = NEW_nit__ToolContext(&type_nit__ToolContext);
{
nit__separate_erasure_compiler___ToolContext___standard__kernel__Object__init(var); /* Direct call separate_erasure_compiler#ToolContext#init on <var:ToolContext>*/
}
var_toolcontext = var;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "Usage: nitc [OPTION]... file.nit...\nCompiles Nit programs.";
var3 = standard___standard__NativeString___to_s_with_length(var2, 58l);
var1 = var3;
varonce = var1;
}
{
{ /* Inline toolcontext#ToolContext#tooldescription= (var_toolcontext,var1) on <var_toolcontext:ToolContext> */
var_toolcontext->attrs[COLOR_nit__toolcontext__ToolContext___tooldescription].val = var1; /* _tooldescription on <var_toolcontext:ToolContext> */
RET_LABEL4:(void)0;
}
}
{
var5 = standard__string___Sys___args(self);
}
{
nit__nith___ToolContext___process_options(var_toolcontext, var5); /* Direct call nith#ToolContext#process_options on <var_toolcontext:ToolContext>*/
}
var6 = NEW_nit__Model(&type_nit__Model);
{
{ /* Inline kernel#Object#init (var6) on <var6:Model> */
RET_LABEL7:(void)0;
}
}
var_model = var6;
var8 = NEW_nit__ModelBuilder(&type_nit__ModelBuilder);
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__model_61d]))(var8, var_model); /* model= on <var8:ModelBuilder>*/
}
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext_61d]))(var8, var_toolcontext); /* toolcontext= on <var8:ModelBuilder>*/
}
{
((void(*)(val* self))(var8->class->vft[COLOR_standard__kernel__Object__init]))(var8); /* init on <var8:ModelBuilder>*/
}
var_modelbuilder = var8;
{
{ /* Inline toolcontext#ToolContext#option_context (var_toolcontext) on <var_toolcontext:ToolContext> */
var11 = var_toolcontext->attrs[COLOR_nit__toolcontext__ToolContext___option_context].val; /* _option_context on <var_toolcontext:ToolContext> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 332);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline opts#OptionContext#rest (var9) on <var9:OptionContext> */
var14 = var9->attrs[COLOR_opts__OptionContext___rest].val; /* _rest on <var9:OptionContext> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _rest");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 267);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_arguments = var12;
{
{ /* Inline array#AbstractArrayRead#length (var_arguments) on <var_arguments:Array[String]> */
var18 = var_arguments->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[String]> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var16,1l) on <var16:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var21 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var22 = var16 > 1l;
var19 = var22;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var_ = var19;
if (var19){
{
{ /* Inline abstract_compiler#ToolContext#opt_output (var_toolcontext) on <var_toolcontext:ToolContext> */
var25 = var_toolcontext->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_output].val; /* _opt_output on <var_toolcontext:ToolContext> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_output");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 30);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline opts#Option#value (var23) on <var23:OptionString> */
var28 = var23->attrs[COLOR_opts__Option___value].val; /* _value on <var23:OptionString> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
if (var26 == NULL) {
var29 = 0; /* is null */
} else {
var29 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var26,((val*)NULL)) on <var26:nullable Object(nullable String)> */
var_other = ((val*)NULL);
{
var32 = ((short int(*)(val* self, val* p0))(var26->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var26, var_other); /* == on <var26:nullable String(String)>*/
}
var33 = !var32;
var30 = var33;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
var29 = var30;
}
var15 = var29;
} else {
var15 = var_;
}
if (var15){
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "Option Error: --output needs a single source file. Do you prefer --dir?";
var37 = standard___standard__NativeString___to_s_with_length(var36, 71l);
var35 = var37;
varonce34 = var35;
}
{
standard__file___Sys___print(self, var35); /* Direct call file#Sys#print on <self:Sys>*/
}
{
{ /* Inline kernel#Sys#exit (self,1l) on <self:Sys> */
exit(1l);
RET_LABEL38:(void)0;
}
}
} else {
}
{
var39 = nit__loader___ModelBuilder___parse(var_modelbuilder, var_arguments);
}
var_mmodules = var39;
{
var40 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_mmodules);
}
if (var40){
goto RET_LABEL;
} else {
}
{
nit__modelbuilder___ModelBuilder___run_phases(var_modelbuilder); /* Direct call modelbuilder#ModelBuilder#run_phases on <var_modelbuilder:ModelBuilder>*/
}
var_41 = var_mmodules;
{
var42 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_41);
}
var_43 = var42;
for(;;) {
{
var44 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_43);
}
if (var44){
{
var45 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_43);
}
var_mmodule = var45;
if (unlikely(varonce46==NULL)) {
var47 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = "*** PROCESS ";
var51 = standard___standard__NativeString___to_s_with_length(var50, 12l);
var49 = var51;
varonce48 = var49;
}
((struct instance_standard__NativeArray*)var47)->values[0]=var49;
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = " ***";
var55 = standard___standard__NativeString___to_s_with_length(var54, 4l);
var53 = var55;
varonce52 = var53;
}
((struct instance_standard__NativeArray*)var47)->values[2]=var53;
} else {
var47 = varonce46;
varonce46 = NULL;
}
{
var56 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_standard__string__Object__to_s]))(var_mmodule); /* to_s on <var_mmodule:MModule>*/
}
((struct instance_standard__NativeArray*)var47)->values[1]=var56;
{
var57 = ((val*(*)(val* self))(var47->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var47); /* native_to_s on <var47:NativeArray[String]>*/
}
varonce46 = var47;
{
nit___nit__ToolContext___info(var_toolcontext, var57, 1l); /* Direct call toolcontext#ToolContext#info on <var_toolcontext:ToolContext>*/
}
var58 = NEW_standard__Array(&type_standard__Array__nit__MModule);
{
standard___standard__Array___with_capacity(var58, 1l); /* Direct call array#Array#with_capacity on <var58:Array[MModule]>*/
}
var_59 = var58;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_59, var_mmodule); /* Direct call array#AbstractArray#push on <var_59:Array[MModule]>*/
}
var_ms = var_59;
{
nit__modelbuilder___ToolContext___run_global_phases(var_toolcontext, var_ms); /* Direct call modelbuilder#ToolContext#run_global_phases on <var_toolcontext:ToolContext>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_43); /* Direct call array#ArrayIterator#next on <var_43:ArrayIterator[MModule]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_43); /* Direct call array#ArrayIterator#finish on <var_43:ArrayIterator[MModule]>*/
}
RET_LABEL:;
}
