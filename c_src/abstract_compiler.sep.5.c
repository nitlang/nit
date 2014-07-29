#include "abstract_compiler.sep.0.h"
/* method abstract_compiler#AWhileExpr#stmt for (self: AWhileExpr, AbstractCompilerVisitor) */
void abstract_compiler__AWhileExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : FlatString */;
val* var4 /* : AExpr */;
val* var5 /* : RuntimeVariable */;
val* var_cond /* var cond: RuntimeVariable */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : FlatString */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : FlatString */;
val* var16 /* : Array[Object] */;
long var17 /* : Int */;
val* var18 /* : NativeArray[Object] */;
val* var19 /* : String */;
val* var20 /* : nullable AExpr */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : FlatString */;
val* var26 /* : nullable EscapeMark */;
val* var28 /* : nullable EscapeMark */;
val* var29 /* : String */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
long var33 /* : Int */;
val* var34 /* : FlatString */;
val* var35 /* : Array[Object] */;
long var36 /* : Int */;
val* var37 /* : NativeArray[Object] */;
val* var38 /* : String */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
long var42 /* : Int */;
val* var43 /* : FlatString */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
long var47 /* : Int */;
val* var48 /* : FlatString */;
val* var49 /* : nullable EscapeMark */;
val* var51 /* : nullable EscapeMark */;
val* var52 /* : String */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
long var56 /* : Int */;
val* var57 /* : FlatString */;
val* var58 /* : Array[Object] */;
long var59 /* : Int */;
val* var60 /* : NativeArray[Object] */;
val* var61 /* : String */;
var_v = p0;
if (varonce) {
var = varonce;
} else {
var1 = "for(;;) {";
var2 = 9;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
var4 = parser_nodes__AWhileExpr__n_expr(self);
}
{
var5 = abstract_compiler__AbstractCompilerVisitor__expr_bool(var_v, var4);
}
var_cond = var5;
if (varonce6) {
var7 = varonce6;
} else {
var8 = "if (!";
var9 = 5;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
if (varonce11) {
var12 = varonce11;
} else {
var13 = ") break;";
var14 = 8;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
var16 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var16 = array_instance Array[Object] */
var17 = 3;
var18 = NEW_array__NativeArray(var17, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var18)->values[0] = (val*) var7;
((struct instance_array__NativeArray*)var18)->values[1] = (val*) var_cond;
((struct instance_array__NativeArray*)var18)->values[2] = (val*) var12;
{
((void (*)(val*, val*, long))(var16->class->vft[COLOR_array__Array__with_native]))(var16, var18, var17) /* with_native on <var16:Array[Object]>*/;
}
}
{
var19 = ((val* (*)(val*))(var16->class->vft[COLOR_string__Object__to_s]))(var16) /* to_s on <var16:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var19); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
var20 = parser_nodes__AWhileExpr__n_block(self);
}
{
abstract_compiler__AbstractCompilerVisitor__stmt(var_v, var20); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
if (varonce21) {
var22 = varonce21;
} else {
var23 = "CONTINUE_";
var24 = 9;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
{
{ /* Inline scope#AWhileExpr#escapemark (self) on <self:AWhileExpr> */
var28 = self->attrs[COLOR_scope__AWhileExpr___escapemark].val; /* _escapemark on <self:AWhileExpr> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
var29 = abstract_compiler__AbstractCompilerVisitor__escapemark_name(var_v, var26);
}
if (varonce30) {
var31 = varonce30;
} else {
var32 = ": (void)0;";
var33 = 10;
var34 = string__NativeString__to_s_with_length(var32, var33);
var31 = var34;
varonce30 = var31;
}
var35 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var35 = array_instance Array[Object] */
var36 = 3;
var37 = NEW_array__NativeArray(var36, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var37)->values[0] = (val*) var22;
((struct instance_array__NativeArray*)var37)->values[1] = (val*) var29;
((struct instance_array__NativeArray*)var37)->values[2] = (val*) var31;
{
((void (*)(val*, val*, long))(var35->class->vft[COLOR_array__Array__with_native]))(var35, var37, var36) /* with_native on <var35:Array[Object]>*/;
}
}
{
var38 = ((val* (*)(val*))(var35->class->vft[COLOR_string__Object__to_s]))(var35) /* to_s on <var35:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var38); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce39) {
var40 = varonce39;
} else {
var41 = "}";
var42 = 1;
var43 = string__NativeString__to_s_with_length(var41, var42);
var40 = var43;
varonce39 = var40;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var40); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce44) {
var45 = varonce44;
} else {
var46 = "BREAK_";
var47 = 6;
var48 = string__NativeString__to_s_with_length(var46, var47);
var45 = var48;
varonce44 = var45;
}
{
{ /* Inline scope#AWhileExpr#escapemark (self) on <self:AWhileExpr> */
var51 = self->attrs[COLOR_scope__AWhileExpr___escapemark].val; /* _escapemark on <self:AWhileExpr> */
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
var52 = abstract_compiler__AbstractCompilerVisitor__escapemark_name(var_v, var49);
}
if (varonce53) {
var54 = varonce53;
} else {
var55 = ": (void)0;";
var56 = 10;
var57 = string__NativeString__to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
var58 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var58 = array_instance Array[Object] */
var59 = 3;
var60 = NEW_array__NativeArray(var59, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var60)->values[0] = (val*) var45;
((struct instance_array__NativeArray*)var60)->values[1] = (val*) var52;
((struct instance_array__NativeArray*)var60)->values[2] = (val*) var54;
{
((void (*)(val*, val*, long))(var58->class->vft[COLOR_array__Array__with_native]))(var58, var60, var59) /* with_native on <var58:Array[Object]>*/;
}
}
{
var61 = ((val* (*)(val*))(var58->class->vft[COLOR_string__Object__to_s]))(var58) /* to_s on <var58:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var61); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AWhileExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__AWhileExpr__stmt(val* self, val* p0) {
abstract_compiler__AWhileExpr__stmt(self, p0); /* Direct call abstract_compiler#AWhileExpr#stmt on <self:Object(AWhileExpr)>*/
RET_LABEL:;
}
/* method abstract_compiler#ALoopExpr#stmt for (self: ALoopExpr, AbstractCompilerVisitor) */
void abstract_compiler__ALoopExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : FlatString */;
val* var4 /* : nullable AExpr */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : FlatString */;
val* var10 /* : nullable EscapeMark */;
val* var12 /* : nullable EscapeMark */;
val* var13 /* : String */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : FlatString */;
val* var19 /* : Array[Object] */;
long var20 /* : Int */;
val* var21 /* : NativeArray[Object] */;
val* var22 /* : String */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : FlatString */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : FlatString */;
val* var33 /* : nullable EscapeMark */;
val* var35 /* : nullable EscapeMark */;
val* var36 /* : String */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
long var40 /* : Int */;
val* var41 /* : FlatString */;
val* var42 /* : Array[Object] */;
long var43 /* : Int */;
val* var44 /* : NativeArray[Object] */;
val* var45 /* : String */;
var_v = p0;
if (varonce) {
var = varonce;
} else {
var1 = "for(;;) {";
var2 = 9;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
var4 = parser_nodes__ALoopExpr__n_block(self);
}
{
abstract_compiler__AbstractCompilerVisitor__stmt(var_v, var4); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
if (varonce5) {
var6 = varonce5;
} else {
var7 = "CONTINUE_";
var8 = 9;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce5 = var6;
}
{
{ /* Inline scope#ALoopExpr#escapemark (self) on <self:ALoopExpr> */
var12 = self->attrs[COLOR_scope__ALoopExpr___escapemark].val; /* _escapemark on <self:ALoopExpr> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = abstract_compiler__AbstractCompilerVisitor__escapemark_name(var_v, var10);
}
if (varonce14) {
var15 = varonce14;
} else {
var16 = ": (void)0;";
var17 = 10;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
var19 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var19 = array_instance Array[Object] */
var20 = 3;
var21 = NEW_array__NativeArray(var20, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var21)->values[0] = (val*) var6;
((struct instance_array__NativeArray*)var21)->values[1] = (val*) var13;
((struct instance_array__NativeArray*)var21)->values[2] = (val*) var15;
{
((void (*)(val*, val*, long))(var19->class->vft[COLOR_array__Array__with_native]))(var19, var21, var20) /* with_native on <var19:Array[Object]>*/;
}
}
{
var22 = ((val* (*)(val*))(var19->class->vft[COLOR_string__Object__to_s]))(var19) /* to_s on <var19:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var22); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce23) {
var24 = varonce23;
} else {
var25 = "}";
var26 = 1;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var24); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce28) {
var29 = varonce28;
} else {
var30 = "BREAK_";
var31 = 6;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
{
{ /* Inline scope#ALoopExpr#escapemark (self) on <self:ALoopExpr> */
var35 = self->attrs[COLOR_scope__ALoopExpr___escapemark].val; /* _escapemark on <self:ALoopExpr> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
var36 = abstract_compiler__AbstractCompilerVisitor__escapemark_name(var_v, var33);
}
if (varonce37) {
var38 = varonce37;
} else {
var39 = ": (void)0;";
var40 = 10;
var41 = string__NativeString__to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
var42 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var42 = array_instance Array[Object] */
var43 = 3;
var44 = NEW_array__NativeArray(var43, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var44)->values[0] = (val*) var29;
((struct instance_array__NativeArray*)var44)->values[1] = (val*) var36;
((struct instance_array__NativeArray*)var44)->values[2] = (val*) var38;
{
((void (*)(val*, val*, long))(var42->class->vft[COLOR_array__Array__with_native]))(var42, var44, var43) /* with_native on <var42:Array[Object]>*/;
}
}
{
var45 = ((val* (*)(val*))(var42->class->vft[COLOR_string__Object__to_s]))(var42) /* to_s on <var42:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var45); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#ALoopExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__ALoopExpr__stmt(val* self, val* p0) {
abstract_compiler__ALoopExpr__stmt(self, p0); /* Direct call abstract_compiler#ALoopExpr#stmt on <self:Object(ALoopExpr)>*/
RET_LABEL:;
}
/* method abstract_compiler#AForExpr#stmt for (self: AForExpr, AbstractCompilerVisitor) */
void abstract_compiler__AForExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : AExpr */;
val* var_nexpr /* var nexpr: AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable Array[Variable] */;
val* var5 /* : nullable Array[Variable] */;
long var6 /* : Int */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var_ /* var : Bool */;
short int var12 /* : Bool */;
int cltype;
int idtype;
short int var_13 /* var : Bool */;
val* var14 /* : AbstractCompiler */;
val* var16 /* : AbstractCompiler */;
val* var17 /* : ModelBuilder */;
val* var19 /* : ModelBuilder */;
val* var20 /* : ToolContext */;
val* var22 /* : ToolContext */;
val* var23 /* : OptionBool */;
val* var25 /* : OptionBool */;
val* var26 /* : nullable Object */;
val* var28 /* : nullable Object */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
val* var31 /* : AExpr */;
val* var32 /* : null */;
val* var33 /* : RuntimeVariable */;
val* var_from /* var from: RuntimeVariable */;
val* var34 /* : AExpr */;
val* var35 /* : null */;
val* var36 /* : RuntimeVariable */;
val* var_to /* var to: RuntimeVariable */;
val* var37 /* : nullable Array[Variable] */;
val* var39 /* : nullable Array[Variable] */;
val* var40 /* : nullable Object */;
val* var41 /* : RuntimeVariable */;
val* var_variable /* var variable: RuntimeVariable */;
static val* varonce;
val* var42 /* : String */;
char* var43 /* : NativeString */;
long var44 /* : Int */;
val* var45 /* : FlatString */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
long var49 /* : Int */;
val* var50 /* : FlatString */;
val* var51 /* : MType */;
val* var53 /* : MType */;
val* var54 /* : MMethod */;
val* var55 /* : Array[RuntimeVariable] */;
long var56 /* : Int */;
val* var_57 /* var : Array[RuntimeVariable] */;
val* var58 /* : nullable RuntimeVariable */;
val* var_ok /* var ok: nullable RuntimeVariable */;
val* var59 /* : null */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
long var69 /* : Int */;
val* var70 /* : FlatString */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
long var74 /* : Int */;
val* var75 /* : FlatString */;
val* var76 /* : Array[Object] */;
long var77 /* : Int */;
val* var78 /* : NativeArray[Object] */;
val* var79 /* : String */;
val* var80 /* : nullable AExpr */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
long var84 /* : Int */;
val* var85 /* : FlatString */;
val* var86 /* : nullable EscapeMark */;
val* var88 /* : nullable EscapeMark */;
val* var89 /* : String */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : NativeString */;
long var93 /* : Int */;
val* var94 /* : FlatString */;
val* var95 /* : Array[Object] */;
long var96 /* : Int */;
val* var97 /* : NativeArray[Object] */;
val* var98 /* : String */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : NativeString */;
long var102 /* : Int */;
val* var103 /* : FlatString */;
val* var104 /* : MType */;
val* var106 /* : MType */;
val* var107 /* : MMethod */;
val* var108 /* : Array[RuntimeVariable] */;
long var109 /* : Int */;
val* var_110 /* var : Array[RuntimeVariable] */;
val* var111 /* : nullable RuntimeVariable */;
val* var_succ /* var succ: nullable RuntimeVariable */;
val* var112 /* : null */;
short int var113 /* : Bool */;
short int var114 /* : Bool */;
short int var116 /* : Bool */;
short int var117 /* : Bool */;
short int var118 /* : Bool */;
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : NativeString */;
long var122 /* : Int */;
val* var123 /* : FlatString */;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : NativeString */;
long var127 /* : Int */;
val* var128 /* : FlatString */;
val* var129 /* : nullable EscapeMark */;
val* var131 /* : nullable EscapeMark */;
val* var132 /* : String */;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : NativeString */;
long var136 /* : Int */;
val* var137 /* : FlatString */;
val* var138 /* : Array[Object] */;
long var139 /* : Int */;
val* var140 /* : NativeArray[Object] */;
val* var141 /* : String */;
val* var142 /* : AExpr */;
val* var143 /* : null */;
val* var144 /* : RuntimeVariable */;
val* var_cl /* var cl: RuntimeVariable */;
val* var145 /* : nullable CallSite */;
val* var147 /* : nullable CallSite */;
val* var_it_meth /* var it_meth: nullable CallSite */;
val* var148 /* : null */;
short int var149 /* : Bool */;
short int var150 /* : Bool */;
short int var152 /* : Bool */;
short int var153 /* : Bool */;
short int var154 /* : Bool */;
val* var155 /* : Array[RuntimeVariable] */;
long var156 /* : Int */;
val* var_157 /* var : Array[RuntimeVariable] */;
val* var158 /* : nullable RuntimeVariable */;
val* var_it /* var it: nullable RuntimeVariable */;
val* var159 /* : null */;
short int var160 /* : Bool */;
short int var161 /* : Bool */;
short int var163 /* : Bool */;
short int var164 /* : Bool */;
short int var165 /* : Bool */;
static val* varonce166;
val* var167 /* : String */;
char* var168 /* : NativeString */;
long var169 /* : Int */;
val* var170 /* : FlatString */;
val* var171 /* : nullable CallSite */;
val* var173 /* : nullable CallSite */;
val* var_isok_meth /* var isok_meth: nullable CallSite */;
val* var174 /* : null */;
short int var175 /* : Bool */;
short int var176 /* : Bool */;
short int var178 /* : Bool */;
short int var179 /* : Bool */;
short int var180 /* : Bool */;
val* var181 /* : Array[RuntimeVariable] */;
long var182 /* : Int */;
val* var_183 /* var : Array[RuntimeVariable] */;
val* var184 /* : nullable RuntimeVariable */;
val* var_ok185 /* var ok: nullable RuntimeVariable */;
val* var186 /* : null */;
short int var187 /* : Bool */;
short int var188 /* : Bool */;
short int var190 /* : Bool */;
short int var191 /* : Bool */;
short int var192 /* : Bool */;
static val* varonce193;
val* var194 /* : String */;
char* var195 /* : NativeString */;
long var196 /* : Int */;
val* var197 /* : FlatString */;
static val* varonce198;
val* var199 /* : String */;
char* var200 /* : NativeString */;
long var201 /* : Int */;
val* var202 /* : FlatString */;
val* var203 /* : Array[Object] */;
long var204 /* : Int */;
val* var205 /* : NativeArray[Object] */;
val* var206 /* : String */;
val* var207 /* : nullable Array[Variable] */;
val* var209 /* : nullable Array[Variable] */;
long var210 /* : Int */;
long var211 /* : Int */;
short int var212 /* : Bool */;
short int var213 /* : Bool */;
short int var215 /* : Bool */;
val* var216 /* : nullable CallSite */;
val* var218 /* : nullable CallSite */;
val* var_item_meth /* var item_meth: nullable CallSite */;
val* var219 /* : null */;
short int var220 /* : Bool */;
short int var221 /* : Bool */;
short int var223 /* : Bool */;
short int var224 /* : Bool */;
short int var225 /* : Bool */;
val* var226 /* : Array[RuntimeVariable] */;
long var227 /* : Int */;
val* var_228 /* var : Array[RuntimeVariable] */;
val* var229 /* : nullable RuntimeVariable */;
val* var_i /* var i: nullable RuntimeVariable */;
val* var230 /* : null */;
short int var231 /* : Bool */;
short int var232 /* : Bool */;
short int var234 /* : Bool */;
short int var235 /* : Bool */;
short int var236 /* : Bool */;
val* var237 /* : nullable Array[Variable] */;
val* var239 /* : nullable Array[Variable] */;
val* var240 /* : nullable Object */;
val* var241 /* : RuntimeVariable */;
val* var242 /* : nullable Array[Variable] */;
val* var244 /* : nullable Array[Variable] */;
long var245 /* : Int */;
long var246 /* : Int */;
short int var247 /* : Bool */;
short int var248 /* : Bool */;
short int var250 /* : Bool */;
val* var251 /* : nullable CallSite */;
val* var253 /* : nullable CallSite */;
val* var_key_meth /* var key_meth: nullable CallSite */;
val* var254 /* : null */;
short int var255 /* : Bool */;
short int var256 /* : Bool */;
short int var258 /* : Bool */;
short int var259 /* : Bool */;
short int var260 /* : Bool */;
val* var261 /* : Array[RuntimeVariable] */;
long var262 /* : Int */;
val* var_263 /* var : Array[RuntimeVariable] */;
val* var264 /* : nullable RuntimeVariable */;
val* var_i265 /* var i: nullable RuntimeVariable */;
val* var266 /* : null */;
short int var267 /* : Bool */;
short int var268 /* : Bool */;
short int var270 /* : Bool */;
short int var271 /* : Bool */;
short int var272 /* : Bool */;
val* var273 /* : nullable Array[Variable] */;
val* var275 /* : nullable Array[Variable] */;
long var276 /* : Int */;
val* var277 /* : nullable Object */;
val* var278 /* : RuntimeVariable */;
val* var279 /* : nullable CallSite */;
val* var281 /* : nullable CallSite */;
val* var_item_meth282 /* var item_meth: nullable CallSite */;
val* var283 /* : null */;
short int var284 /* : Bool */;
short int var285 /* : Bool */;
short int var287 /* : Bool */;
short int var288 /* : Bool */;
short int var289 /* : Bool */;
val* var290 /* : Array[RuntimeVariable] */;
long var291 /* : Int */;
val* var_292 /* var : Array[RuntimeVariable] */;
val* var293 /* : nullable RuntimeVariable */;
val* var294 /* : null */;
short int var295 /* : Bool */;
short int var296 /* : Bool */;
short int var298 /* : Bool */;
short int var299 /* : Bool */;
short int var300 /* : Bool */;
val* var301 /* : nullable Array[Variable] */;
val* var303 /* : nullable Array[Variable] */;
long var304 /* : Int */;
val* var305 /* : nullable Object */;
val* var306 /* : RuntimeVariable */;
val* var307 /* : nullable AExpr */;
static val* varonce308;
val* var309 /* : String */;
char* var310 /* : NativeString */;
long var311 /* : Int */;
val* var312 /* : FlatString */;
val* var313 /* : nullable EscapeMark */;
val* var315 /* : nullable EscapeMark */;
val* var316 /* : String */;
static val* varonce317;
val* var318 /* : String */;
char* var319 /* : NativeString */;
long var320 /* : Int */;
val* var321 /* : FlatString */;
val* var322 /* : Array[Object] */;
long var323 /* : Int */;
val* var324 /* : NativeArray[Object] */;
val* var325 /* : String */;
val* var326 /* : nullable CallSite */;
val* var328 /* : nullable CallSite */;
val* var_next_meth /* var next_meth: nullable CallSite */;
val* var329 /* : null */;
short int var330 /* : Bool */;
short int var331 /* : Bool */;
short int var333 /* : Bool */;
short int var334 /* : Bool */;
short int var335 /* : Bool */;
val* var336 /* : Array[RuntimeVariable] */;
long var337 /* : Int */;
val* var_338 /* var : Array[RuntimeVariable] */;
val* var339 /* : nullable RuntimeVariable */;
static val* varonce340;
val* var341 /* : String */;
char* var342 /* : NativeString */;
long var343 /* : Int */;
val* var344 /* : FlatString */;
static val* varonce345;
val* var346 /* : String */;
char* var347 /* : NativeString */;
long var348 /* : Int */;
val* var349 /* : FlatString */;
val* var350 /* : nullable EscapeMark */;
val* var352 /* : nullable EscapeMark */;
val* var353 /* : String */;
static val* varonce354;
val* var355 /* : String */;
char* var356 /* : NativeString */;
long var357 /* : Int */;
val* var358 /* : FlatString */;
val* var359 /* : Array[Object] */;
long var360 /* : Int */;
val* var361 /* : NativeArray[Object] */;
val* var362 /* : String */;
var_v = p0;
{
var = parser_nodes__AForExpr__n_expr(self);
}
var_nexpr = var;
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var5 = self->attrs[COLOR_scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
if (var3 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2427);
show_backtrace(1);
} else {
var6 = array__AbstractArrayRead__length(var3);
}
var7 = 1;
{
{ /* Inline kernel#Int#== (var6,var7) on <var6:Int> */
var11 = var6 == var7;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
var_ = var8;
if (var8){
/* <var_nexpr:AExpr> isa AOrangeExpr */
cltype = type_parser_nodes__AOrangeExpr.color;
idtype = type_parser_nodes__AOrangeExpr.id;
if(cltype >= var_nexpr->type->table_size) {
var12 = 0;
} else {
var12 = var_nexpr->type->type_table[cltype] == idtype;
}
var2 = var12;
} else {
var2 = var_;
}
var_13 = var2;
if (var2){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var16 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var14) on <var14:AbstractCompiler> */
var19 = var14->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var14:AbstractCompiler> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var17) on <var17:ModelBuilder> */
var22 = var17->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var17:ModelBuilder> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_shortcut_range (var20) on <var20:ToolContext> */
var25 = var20->attrs[COLOR_abstract_compiler__ToolContext___opt_no_shortcut_range].val; /* _opt_no_shortcut_range on <var20:ToolContext> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_shortcut_range");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 44);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline opts#Option#value (var23) on <var23:OptionBool> */
var28 = var23->attrs[COLOR_opts__Option___value].val; /* _value on <var23:OptionBool> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
var29 = ((struct instance_kernel__Bool*)var26)->value; /* autounbox from nullable Object to Bool */;
var30 = !var29;
var1 = var30;
} else {
var1 = var_13;
}
if (var1){
{
var31 = parser_nodes__ARangeExpr__n_expr(var_nexpr);
}
var32 = NULL;
{
var33 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var31, var32);
}
var_from = var33;
{
var34 = parser_nodes__ARangeExpr__n_expr2(var_nexpr);
}
var35 = NULL;
{
var36 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var34, var35);
}
var_to = var36;
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var39 = self->attrs[COLOR_scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var37 = var39;
RET_LABEL38:(void)0;
}
}
if (var37 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2430);
show_backtrace(1);
} else {
var40 = abstract_collection__SequenceRead__first(var37);
}
{
var41 = abstract_compiler__AbstractCompilerVisitor__variable(var_v, var40);
}
var_variable = var41;
{
abstract_compiler__AbstractCompilerVisitor__assign(var_v, var_variable, var_from); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
if (varonce) {
var42 = varonce;
} else {
var43 = "for(;;) { /* shortcut range */";
var44 = 30;
var45 = string__NativeString__to_s_with_length(var43, var44);
var42 = var45;
varonce = var42;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var42); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce46) {
var47 = varonce46;
} else {
var48 = "<";
var49 = 1;
var50 = string__NativeString__to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_variable) on <var_variable:RuntimeVariable> */
var53 = var_variable->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_variable:RuntimeVariable> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
var54 = abstract_compiler__AbstractCompilerVisitor__get_property(var_v, var47, var51);
}
var55 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var56 = 2;
{
array__Array__with_capacity(var55, var56); /* Direct call array#Array#with_capacity on <var55:Array[RuntimeVariable]>*/
}
var_57 = var55;
{
array__AbstractArray__push(var_57, var_variable); /* Direct call array#AbstractArray#push on <var_57:Array[RuntimeVariable]>*/
}
{
array__AbstractArray__push(var_57, var_to); /* Direct call array#AbstractArray#push on <var_57:Array[RuntimeVariable]>*/
}
{
var58 = separate_compiler__SeparateCompilerVisitor__send(var_v, var54, var_57);
}
var_ok = var58;
var59 = NULL;
if (var_ok == NULL) {
var60 = 0; /* is null */
} else {
var60 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ok,var59) on <var_ok:nullable RuntimeVariable> */
var_other = var59;
{
var64 = ((short int (*)(val*, val*))(var_ok->class->vft[COLOR_kernel__Object___61d_61d]))(var_ok, var_other) /* == on <var_ok:nullable RuntimeVariable(RuntimeVariable)>*/;
var63 = var64;
}
var65 = !var63;
var61 = var65;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
var60 = var61;
}
if (unlikely(!var60)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2436);
show_backtrace(1);
}
if (varonce66) {
var67 = varonce66;
} else {
var68 = "if(!";
var69 = 4;
var70 = string__NativeString__to_s_with_length(var68, var69);
var67 = var70;
varonce66 = var67;
}
if (varonce71) {
var72 = varonce71;
} else {
var73 = ") break;";
var74 = 8;
var75 = string__NativeString__to_s_with_length(var73, var74);
var72 = var75;
varonce71 = var72;
}
var76 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var76 = array_instance Array[Object] */
var77 = 3;
var78 = NEW_array__NativeArray(var77, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var78)->values[0] = (val*) var67;
((struct instance_array__NativeArray*)var78)->values[1] = (val*) var_ok;
((struct instance_array__NativeArray*)var78)->values[2] = (val*) var72;
{
((void (*)(val*, val*, long))(var76->class->vft[COLOR_array__Array__with_native]))(var76, var78, var77) /* with_native on <var76:Array[Object]>*/;
}
}
{
var79 = ((val* (*)(val*))(var76->class->vft[COLOR_string__Object__to_s]))(var76) /* to_s on <var76:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var79); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
var80 = parser_nodes__AForExpr__n_block(self);
}
{
abstract_compiler__AbstractCompilerVisitor__stmt(var_v, var80); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
if (varonce81) {
var82 = varonce81;
} else {
var83 = "CONTINUE_";
var84 = 9;
var85 = string__NativeString__to_s_with_length(var83, var84);
var82 = var85;
varonce81 = var82;
}
{
{ /* Inline scope#AForExpr#escapemark (self) on <self:AForExpr> */
var88 = self->attrs[COLOR_scope__AForExpr___escapemark].val; /* _escapemark on <self:AForExpr> */
var86 = var88;
RET_LABEL87:(void)0;
}
}
{
var89 = abstract_compiler__AbstractCompilerVisitor__escapemark_name(var_v, var86);
}
if (varonce90) {
var91 = varonce90;
} else {
var92 = ": (void)0;";
var93 = 10;
var94 = string__NativeString__to_s_with_length(var92, var93);
var91 = var94;
varonce90 = var91;
}
var95 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var95 = array_instance Array[Object] */
var96 = 3;
var97 = NEW_array__NativeArray(var96, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var97)->values[0] = (val*) var82;
((struct instance_array__NativeArray*)var97)->values[1] = (val*) var89;
((struct instance_array__NativeArray*)var97)->values[2] = (val*) var91;
{
((void (*)(val*, val*, long))(var95->class->vft[COLOR_array__Array__with_native]))(var95, var97, var96) /* with_native on <var95:Array[Object]>*/;
}
}
{
var98 = ((val* (*)(val*))(var95->class->vft[COLOR_string__Object__to_s]))(var95) /* to_s on <var95:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var98); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce99) {
var100 = varonce99;
} else {
var101 = "succ";
var102 = 4;
var103 = string__NativeString__to_s_with_length(var101, var102);
var100 = var103;
varonce99 = var100;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_variable) on <var_variable:RuntimeVariable> */
var106 = var_variable->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_variable:RuntimeVariable> */
if (unlikely(var106 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var104 = var106;
RET_LABEL105:(void)0;
}
}
{
var107 = abstract_compiler__AbstractCompilerVisitor__get_property(var_v, var100, var104);
}
var108 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var109 = 1;
{
array__Array__with_capacity(var108, var109); /* Direct call array#Array#with_capacity on <var108:Array[RuntimeVariable]>*/
}
var_110 = var108;
{
array__AbstractArray__push(var_110, var_variable); /* Direct call array#AbstractArray#push on <var_110:Array[RuntimeVariable]>*/
}
{
var111 = separate_compiler__SeparateCompilerVisitor__send(var_v, var107, var_110);
}
var_succ = var111;
var112 = NULL;
if (var_succ == NULL) {
var113 = 0; /* is null */
} else {
var113 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_succ,var112) on <var_succ:nullable RuntimeVariable> */
var_other = var112;
{
var117 = ((short int (*)(val*, val*))(var_succ->class->vft[COLOR_kernel__Object___61d_61d]))(var_succ, var_other) /* == on <var_succ:nullable RuntimeVariable(RuntimeVariable)>*/;
var116 = var117;
}
var118 = !var116;
var114 = var118;
goto RET_LABEL115;
RET_LABEL115:(void)0;
}
var113 = var114;
}
if (unlikely(!var113)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2443);
show_backtrace(1);
}
{
abstract_compiler__AbstractCompilerVisitor__assign(var_v, var_variable, var_succ); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
if (varonce119) {
var120 = varonce119;
} else {
var121 = "}";
var122 = 1;
var123 = string__NativeString__to_s_with_length(var121, var122);
var120 = var123;
varonce119 = var120;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var120); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce124) {
var125 = varonce124;
} else {
var126 = "BREAK_";
var127 = 6;
var128 = string__NativeString__to_s_with_length(var126, var127);
var125 = var128;
varonce124 = var125;
}
{
{ /* Inline scope#AForExpr#escapemark (self) on <self:AForExpr> */
var131 = self->attrs[COLOR_scope__AForExpr___escapemark].val; /* _escapemark on <self:AForExpr> */
var129 = var131;
RET_LABEL130:(void)0;
}
}
{
var132 = abstract_compiler__AbstractCompilerVisitor__escapemark_name(var_v, var129);
}
if (varonce133) {
var134 = varonce133;
} else {
var135 = ": (void)0;";
var136 = 10;
var137 = string__NativeString__to_s_with_length(var135, var136);
var134 = var137;
varonce133 = var134;
}
var138 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var138 = array_instance Array[Object] */
var139 = 3;
var140 = NEW_array__NativeArray(var139, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var140)->values[0] = (val*) var125;
((struct instance_array__NativeArray*)var140)->values[1] = (val*) var132;
((struct instance_array__NativeArray*)var140)->values[2] = (val*) var134;
{
((void (*)(val*, val*, long))(var138->class->vft[COLOR_array__Array__with_native]))(var138, var140, var139) /* with_native on <var138:Array[Object]>*/;
}
}
{
var141 = ((val* (*)(val*))(var138->class->vft[COLOR_string__Object__to_s]))(var138) /* to_s on <var138:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var141); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
}
{
var142 = parser_nodes__AForExpr__n_expr(self);
}
var143 = NULL;
{
var144 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var142, var143);
}
var_cl = var144;
{
{ /* Inline typing#AForExpr#method_iterator (self) on <self:AForExpr> */
var147 = self->attrs[COLOR_typing__AForExpr___method_iterator].val; /* _method_iterator on <self:AForExpr> */
var145 = var147;
RET_LABEL146:(void)0;
}
}
var_it_meth = var145;
var148 = NULL;
if (var_it_meth == NULL) {
var149 = 0; /* is null */
} else {
var149 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_it_meth,var148) on <var_it_meth:nullable CallSite> */
var_other = var148;
{
var153 = ((short int (*)(val*, val*))(var_it_meth->class->vft[COLOR_kernel__Object___61d_61d]))(var_it_meth, var_other) /* == on <var_it_meth:nullable CallSite(CallSite)>*/;
var152 = var153;
}
var154 = !var152;
var150 = var154;
goto RET_LABEL151;
RET_LABEL151:(void)0;
}
var149 = var150;
}
if (unlikely(!var149)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2452);
show_backtrace(1);
}
var155 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var156 = 1;
{
array__Array__with_capacity(var155, var156); /* Direct call array#Array#with_capacity on <var155:Array[RuntimeVariable]>*/
}
var_157 = var155;
{
array__AbstractArray__push(var_157, var_cl); /* Direct call array#AbstractArray#push on <var_157:Array[RuntimeVariable]>*/
}
{
var158 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_it_meth, var_157) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
var_it = var158;
var159 = NULL;
if (var_it == NULL) {
var160 = 0; /* is null */
} else {
var160 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_it,var159) on <var_it:nullable RuntimeVariable> */
var_other = var159;
{
var164 = ((short int (*)(val*, val*))(var_it->class->vft[COLOR_kernel__Object___61d_61d]))(var_it, var_other) /* == on <var_it:nullable RuntimeVariable(RuntimeVariable)>*/;
var163 = var164;
}
var165 = !var163;
var161 = var165;
goto RET_LABEL162;
RET_LABEL162:(void)0;
}
var160 = var161;
}
if (unlikely(!var160)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2454);
show_backtrace(1);
}
if (varonce166) {
var167 = varonce166;
} else {
var168 = "for(;;) {";
var169 = 9;
var170 = string__NativeString__to_s_with_length(var168, var169);
var167 = var170;
varonce166 = var167;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var167); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline typing#AForExpr#method_is_ok (self) on <self:AForExpr> */
var173 = self->attrs[COLOR_typing__AForExpr___method_is_ok].val; /* _method_is_ok on <self:AForExpr> */
var171 = var173;
RET_LABEL172:(void)0;
}
}
var_isok_meth = var171;
var174 = NULL;
if (var_isok_meth == NULL) {
var175 = 0; /* is null */
} else {
var175 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_isok_meth,var174) on <var_isok_meth:nullable CallSite> */
var_other = var174;
{
var179 = ((short int (*)(val*, val*))(var_isok_meth->class->vft[COLOR_kernel__Object___61d_61d]))(var_isok_meth, var_other) /* == on <var_isok_meth:nullable CallSite(CallSite)>*/;
var178 = var179;
}
var180 = !var178;
var176 = var180;
goto RET_LABEL177;
RET_LABEL177:(void)0;
}
var175 = var176;
}
if (unlikely(!var175)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2457);
show_backtrace(1);
}
var181 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var182 = 1;
{
array__Array__with_capacity(var181, var182); /* Direct call array#Array#with_capacity on <var181:Array[RuntimeVariable]>*/
}
var_183 = var181;
{
array__AbstractArray__push(var_183, var_it); /* Direct call array#AbstractArray#push on <var_183:Array[RuntimeVariable]>*/
}
{
var184 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_isok_meth, var_183) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
var_ok185 = var184;
var186 = NULL;
if (var_ok185 == NULL) {
var187 = 0; /* is null */
} else {
var187 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ok185,var186) on <var_ok185:nullable RuntimeVariable> */
var_other = var186;
{
var191 = ((short int (*)(val*, val*))(var_ok185->class->vft[COLOR_kernel__Object___61d_61d]))(var_ok185, var_other) /* == on <var_ok185:nullable RuntimeVariable(RuntimeVariable)>*/;
var190 = var191;
}
var192 = !var190;
var188 = var192;
goto RET_LABEL189;
RET_LABEL189:(void)0;
}
var187 = var188;
}
if (unlikely(!var187)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2459);
show_backtrace(1);
}
if (varonce193) {
var194 = varonce193;
} else {
var195 = "if(!";
var196 = 4;
var197 = string__NativeString__to_s_with_length(var195, var196);
var194 = var197;
varonce193 = var194;
}
if (varonce198) {
var199 = varonce198;
} else {
var200 = ") break;";
var201 = 8;
var202 = string__NativeString__to_s_with_length(var200, var201);
var199 = var202;
varonce198 = var199;
}
var203 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var203 = array_instance Array[Object] */
var204 = 3;
var205 = NEW_array__NativeArray(var204, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var205)->values[0] = (val*) var194;
((struct instance_array__NativeArray*)var205)->values[1] = (val*) var_ok185;
((struct instance_array__NativeArray*)var205)->values[2] = (val*) var199;
{
((void (*)(val*, val*, long))(var203->class->vft[COLOR_array__Array__with_native]))(var203, var205, var204) /* with_native on <var203:Array[Object]>*/;
}
}
{
var206 = ((val* (*)(val*))(var203->class->vft[COLOR_string__Object__to_s]))(var203) /* to_s on <var203:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var206); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var209 = self->attrs[COLOR_scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var207 = var209;
RET_LABEL208:(void)0;
}
}
if (var207 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2461);
show_backtrace(1);
} else {
var210 = array__AbstractArrayRead__length(var207);
}
var211 = 1;
{
{ /* Inline kernel#Int#== (var210,var211) on <var210:Int> */
var215 = var210 == var211;
var213 = var215;
goto RET_LABEL214;
RET_LABEL214:(void)0;
}
var212 = var213;
}
if (var212){
{
{ /* Inline typing#AForExpr#method_item (self) on <self:AForExpr> */
var218 = self->attrs[COLOR_typing__AForExpr___method_item].val; /* _method_item on <self:AForExpr> */
var216 = var218;
RET_LABEL217:(void)0;
}
}
var_item_meth = var216;
var219 = NULL;
if (var_item_meth == NULL) {
var220 = 0; /* is null */
} else {
var220 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_item_meth,var219) on <var_item_meth:nullable CallSite> */
var_other = var219;
{
var224 = ((short int (*)(val*, val*))(var_item_meth->class->vft[COLOR_kernel__Object___61d_61d]))(var_item_meth, var_other) /* == on <var_item_meth:nullable CallSite(CallSite)>*/;
var223 = var224;
}
var225 = !var223;
var221 = var225;
goto RET_LABEL222;
RET_LABEL222:(void)0;
}
var220 = var221;
}
if (unlikely(!var220)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2463);
show_backtrace(1);
}
var226 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var227 = 1;
{
array__Array__with_capacity(var226, var227); /* Direct call array#Array#with_capacity on <var226:Array[RuntimeVariable]>*/
}
var_228 = var226;
{
array__AbstractArray__push(var_228, var_it); /* Direct call array#AbstractArray#push on <var_228:Array[RuntimeVariable]>*/
}
{
var229 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_item_meth, var_228) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
var_i = var229;
var230 = NULL;
if (var_i == NULL) {
var231 = 0; /* is null */
} else {
var231 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_i,var230) on <var_i:nullable RuntimeVariable> */
var_other = var230;
{
var235 = ((short int (*)(val*, val*))(var_i->class->vft[COLOR_kernel__Object___61d_61d]))(var_i, var_other) /* == on <var_i:nullable RuntimeVariable(RuntimeVariable)>*/;
var234 = var235;
}
var236 = !var234;
var232 = var236;
goto RET_LABEL233;
RET_LABEL233:(void)0;
}
var231 = var232;
}
if (unlikely(!var231)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2465);
show_backtrace(1);
}
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var239 = self->attrs[COLOR_scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var237 = var239;
RET_LABEL238:(void)0;
}
}
if (var237 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2466);
show_backtrace(1);
} else {
var240 = abstract_collection__SequenceRead__first(var237);
}
{
var241 = abstract_compiler__AbstractCompilerVisitor__variable(var_v, var240);
}
{
abstract_compiler__AbstractCompilerVisitor__assign(var_v, var241, var_i); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
} else {
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var244 = self->attrs[COLOR_scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var242 = var244;
RET_LABEL243:(void)0;
}
}
if (var242 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2467);
show_backtrace(1);
} else {
var245 = array__AbstractArrayRead__length(var242);
}
var246 = 2;
{
{ /* Inline kernel#Int#== (var245,var246) on <var245:Int> */
var250 = var245 == var246;
var248 = var250;
goto RET_LABEL249;
RET_LABEL249:(void)0;
}
var247 = var248;
}
if (var247){
{
{ /* Inline typing#AForExpr#method_key (self) on <self:AForExpr> */
var253 = self->attrs[COLOR_typing__AForExpr___method_key].val; /* _method_key on <self:AForExpr> */
var251 = var253;
RET_LABEL252:(void)0;
}
}
var_key_meth = var251;
var254 = NULL;
if (var_key_meth == NULL) {
var255 = 0; /* is null */
} else {
var255 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_key_meth,var254) on <var_key_meth:nullable CallSite> */
var_other = var254;
{
var259 = ((short int (*)(val*, val*))(var_key_meth->class->vft[COLOR_kernel__Object___61d_61d]))(var_key_meth, var_other) /* == on <var_key_meth:nullable CallSite(CallSite)>*/;
var258 = var259;
}
var260 = !var258;
var256 = var260;
goto RET_LABEL257;
RET_LABEL257:(void)0;
}
var255 = var256;
}
if (unlikely(!var255)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2469);
show_backtrace(1);
}
var261 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var262 = 1;
{
array__Array__with_capacity(var261, var262); /* Direct call array#Array#with_capacity on <var261:Array[RuntimeVariable]>*/
}
var_263 = var261;
{
array__AbstractArray__push(var_263, var_it); /* Direct call array#AbstractArray#push on <var_263:Array[RuntimeVariable]>*/
}
{
var264 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_key_meth, var_263) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
var_i265 = var264;
var266 = NULL;
if (var_i265 == NULL) {
var267 = 0; /* is null */
} else {
var267 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_i265,var266) on <var_i265:nullable RuntimeVariable> */
var_other = var266;
{
var271 = ((short int (*)(val*, val*))(var_i265->class->vft[COLOR_kernel__Object___61d_61d]))(var_i265, var_other) /* == on <var_i265:nullable RuntimeVariable(RuntimeVariable)>*/;
var270 = var271;
}
var272 = !var270;
var268 = var272;
goto RET_LABEL269;
RET_LABEL269:(void)0;
}
var267 = var268;
}
if (unlikely(!var267)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2471);
show_backtrace(1);
}
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var275 = self->attrs[COLOR_scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var273 = var275;
RET_LABEL274:(void)0;
}
}
var276 = 0;
if (var273 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2472);
show_backtrace(1);
} else {
var277 = array__Array___91d_93d(var273, var276);
}
{
var278 = abstract_compiler__AbstractCompilerVisitor__variable(var_v, var277);
}
{
abstract_compiler__AbstractCompilerVisitor__assign(var_v, var278, var_i265); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline typing#AForExpr#method_item (self) on <self:AForExpr> */
var281 = self->attrs[COLOR_typing__AForExpr___method_item].val; /* _method_item on <self:AForExpr> */
var279 = var281;
RET_LABEL280:(void)0;
}
}
var_item_meth282 = var279;
var283 = NULL;
if (var_item_meth282 == NULL) {
var284 = 0; /* is null */
} else {
var284 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_item_meth282,var283) on <var_item_meth282:nullable CallSite> */
var_other = var283;
{
var288 = ((short int (*)(val*, val*))(var_item_meth282->class->vft[COLOR_kernel__Object___61d_61d]))(var_item_meth282, var_other) /* == on <var_item_meth282:nullable CallSite(CallSite)>*/;
var287 = var288;
}
var289 = !var287;
var285 = var289;
goto RET_LABEL286;
RET_LABEL286:(void)0;
}
var284 = var285;
}
if (unlikely(!var284)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2474);
show_backtrace(1);
}
var290 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var291 = 1;
{
array__Array__with_capacity(var290, var291); /* Direct call array#Array#with_capacity on <var290:Array[RuntimeVariable]>*/
}
var_292 = var290;
{
array__AbstractArray__push(var_292, var_it); /* Direct call array#AbstractArray#push on <var_292:Array[RuntimeVariable]>*/
}
{
var293 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_item_meth282, var_292) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
var_i265 = var293;
var294 = NULL;
if (var_i265 == NULL) {
var295 = 0; /* is null */
} else {
var295 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_i265,var294) on <var_i265:nullable RuntimeVariable> */
var_other = var294;
{
var299 = ((short int (*)(val*, val*))(var_i265->class->vft[COLOR_kernel__Object___61d_61d]))(var_i265, var_other) /* == on <var_i265:nullable RuntimeVariable(RuntimeVariable)>*/;
var298 = var299;
}
var300 = !var298;
var296 = var300;
goto RET_LABEL297;
RET_LABEL297:(void)0;
}
var295 = var296;
}
if (unlikely(!var295)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2476);
show_backtrace(1);
}
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var303 = self->attrs[COLOR_scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var301 = var303;
RET_LABEL302:(void)0;
}
}
var304 = 1;
if (var301 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2477);
show_backtrace(1);
} else {
var305 = array__Array___91d_93d(var301, var304);
}
{
var306 = abstract_compiler__AbstractCompilerVisitor__variable(var_v, var305);
}
{
abstract_compiler__AbstractCompilerVisitor__assign(var_v, var306, var_i265); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2479);
show_backtrace(1);
}
}
{
var307 = parser_nodes__AForExpr__n_block(self);
}
{
abstract_compiler__AbstractCompilerVisitor__stmt(var_v, var307); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
if (varonce308) {
var309 = varonce308;
} else {
var310 = "CONTINUE_";
var311 = 9;
var312 = string__NativeString__to_s_with_length(var310, var311);
var309 = var312;
varonce308 = var309;
}
{
{ /* Inline scope#AForExpr#escapemark (self) on <self:AForExpr> */
var315 = self->attrs[COLOR_scope__AForExpr___escapemark].val; /* _escapemark on <self:AForExpr> */
var313 = var315;
RET_LABEL314:(void)0;
}
}
{
var316 = abstract_compiler__AbstractCompilerVisitor__escapemark_name(var_v, var313);
}
if (varonce317) {
var318 = varonce317;
} else {
var319 = ": (void)0;";
var320 = 10;
var321 = string__NativeString__to_s_with_length(var319, var320);
var318 = var321;
varonce317 = var318;
}
var322 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var322 = array_instance Array[Object] */
var323 = 3;
var324 = NEW_array__NativeArray(var323, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var324)->values[0] = (val*) var309;
((struct instance_array__NativeArray*)var324)->values[1] = (val*) var316;
((struct instance_array__NativeArray*)var324)->values[2] = (val*) var318;
{
((void (*)(val*, val*, long))(var322->class->vft[COLOR_array__Array__with_native]))(var322, var324, var323) /* with_native on <var322:Array[Object]>*/;
}
}
{
var325 = ((val* (*)(val*))(var322->class->vft[COLOR_string__Object__to_s]))(var322) /* to_s on <var322:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var325); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline typing#AForExpr#method_next (self) on <self:AForExpr> */
var328 = self->attrs[COLOR_typing__AForExpr___method_next].val; /* _method_next on <self:AForExpr> */
var326 = var328;
RET_LABEL327:(void)0;
}
}
var_next_meth = var326;
var329 = NULL;
if (var_next_meth == NULL) {
var330 = 0; /* is null */
} else {
var330 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_next_meth,var329) on <var_next_meth:nullable CallSite> */
var_other = var329;
{
var334 = ((short int (*)(val*, val*))(var_next_meth->class->vft[COLOR_kernel__Object___61d_61d]))(var_next_meth, var_other) /* == on <var_next_meth:nullable CallSite(CallSite)>*/;
var333 = var334;
}
var335 = !var333;
var331 = var335;
goto RET_LABEL332;
RET_LABEL332:(void)0;
}
var330 = var331;
}
if (unlikely(!var330)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2484);
show_backtrace(1);
}
var336 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var337 = 1;
{
array__Array__with_capacity(var336, var337); /* Direct call array#Array#with_capacity on <var336:Array[RuntimeVariable]>*/
}
var_338 = var336;
{
array__AbstractArray__push(var_338, var_it); /* Direct call array#AbstractArray#push on <var_338:Array[RuntimeVariable]>*/
}
{
var339 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_next_meth, var_338) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
var339;
if (varonce340) {
var341 = varonce340;
} else {
var342 = "}";
var343 = 1;
var344 = string__NativeString__to_s_with_length(var342, var343);
var341 = var344;
varonce340 = var341;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var341); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce345) {
var346 = varonce345;
} else {
var347 = "BREAK_";
var348 = 6;
var349 = string__NativeString__to_s_with_length(var347, var348);
var346 = var349;
varonce345 = var346;
}
{
{ /* Inline scope#AForExpr#escapemark (self) on <self:AForExpr> */
var352 = self->attrs[COLOR_scope__AForExpr___escapemark].val; /* _escapemark on <self:AForExpr> */
var350 = var352;
RET_LABEL351:(void)0;
}
}
{
var353 = abstract_compiler__AbstractCompilerVisitor__escapemark_name(var_v, var350);
}
if (varonce354) {
var355 = varonce354;
} else {
var356 = ": (void)0;";
var357 = 10;
var358 = string__NativeString__to_s_with_length(var356, var357);
var355 = var358;
varonce354 = var355;
}
var359 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var359 = array_instance Array[Object] */
var360 = 3;
var361 = NEW_array__NativeArray(var360, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var361)->values[0] = (val*) var346;
((struct instance_array__NativeArray*)var361)->values[1] = (val*) var353;
((struct instance_array__NativeArray*)var361)->values[2] = (val*) var355;
{
((void (*)(val*, val*, long))(var359->class->vft[COLOR_array__Array__with_native]))(var359, var361, var360) /* with_native on <var359:Array[Object]>*/;
}
}
{
var362 = ((val* (*)(val*))(var359->class->vft[COLOR_string__Object__to_s]))(var359) /* to_s on <var359:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var362); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AForExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__AForExpr__stmt(val* self, val* p0) {
abstract_compiler__AForExpr__stmt(self, p0); /* Direct call abstract_compiler#AForExpr#stmt on <self:Object(AForExpr)>*/
RET_LABEL:;
}
/* method abstract_compiler#AAssertExpr#stmt for (self: AAssertExpr, AbstractCompilerVisitor) */
void abstract_compiler__AAssertExpr__stmt(val* self, val* p0) {
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
val* var17 /* : RuntimeVariable */;
val* var_cond /* var cond: RuntimeVariable */;
static val* varonce;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : FlatString */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : FlatString */;
val* var27 /* : Array[Object] */;
long var28 /* : Int */;
val* var29 /* : NativeArray[Object] */;
val* var30 /* : String */;
val* var31 /* : nullable AExpr */;
val* var32 /* : nullable TId */;
val* var_nid /* var nid: nullable TId */;
val* var33 /* : null */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : FlatString */;
val* var45 /* : String */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
long var49 /* : Int */;
val* var50 /* : FlatString */;
val* var51 /* : Array[Object] */;
long var52 /* : Int */;
val* var53 /* : NativeArray[Object] */;
val* var54 /* : String */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
long var58 /* : Int */;
val* var59 /* : FlatString */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
long var63 /* : Int */;
val* var64 /* : FlatString */;
var_v = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var2 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var) on <var:AbstractCompiler> */
var5 = var->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var:AbstractCompiler> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var3) on <var3:ModelBuilder> */
var8 = var3->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var3:ModelBuilder> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_assert (var6) on <var6:ToolContext> */
var11 = var6->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_assert].val; /* _opt_no_check_assert on <var6:ToolContext> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_assert");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 50);
show_backtrace(1);
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
var15 = ((struct instance_kernel__Bool*)var12)->value; /* autounbox from nullable Object to Bool */;
if (var15){
goto RET_LABEL;
} else {
}
{
var16 = parser_nodes__AAssertExpr__n_expr(self);
}
{
var17 = abstract_compiler__AbstractCompilerVisitor__expr_bool(var_v, var16);
}
var_cond = var17;
if (varonce) {
var18 = varonce;
} else {
var19 = "if (unlikely(!";
var20 = 14;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce = var18;
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = ")) {";
var25 = 4;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
var27 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var27 = array_instance Array[Object] */
var28 = 3;
var29 = NEW_array__NativeArray(var28, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var29)->values[0] = (val*) var18;
((struct instance_array__NativeArray*)var29)->values[1] = (val*) var_cond;
((struct instance_array__NativeArray*)var29)->values[2] = (val*) var23;
{
((void (*)(val*, val*, long))(var27->class->vft[COLOR_array__Array__with_native]))(var27, var29, var28) /* with_native on <var27:Array[Object]>*/;
}
}
{
var30 = ((val* (*)(val*))(var27->class->vft[COLOR_string__Object__to_s]))(var27) /* to_s on <var27:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var30); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
var31 = parser_nodes__AAssertExpr__n_else(self);
}
{
abstract_compiler__AbstractCompilerVisitor__stmt(var_v, var31); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
{
var32 = parser_nodes__AAssertExpr__n_id(self);
}
var_nid = var32;
var33 = NULL;
if (var_nid == NULL) {
var34 = 0; /* is null */
} else {
var34 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nid,var33) on <var_nid:nullable TId> */
var_other = var33;
{
var38 = ((short int (*)(val*, val*))(var_nid->class->vft[COLOR_kernel__Object___61d_61d]))(var_nid, var_other) /* == on <var_nid:nullable TId(TId)>*/;
var37 = var38;
}
var39 = !var37;
var35 = var39;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
var34 = var35;
}
if (var34){
if (varonce40) {
var41 = varonce40;
} else {
var42 = "Assert \'";
var43 = 8;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
{
var45 = lexer_work__Token__text(var_nid);
}
if (varonce46) {
var47 = varonce46;
} else {
var48 = "\' failed";
var49 = 8;
var50 = string__NativeString__to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
var51 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var51 = array_instance Array[Object] */
var52 = 3;
var53 = NEW_array__NativeArray(var52, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var53)->values[0] = (val*) var41;
((struct instance_array__NativeArray*)var53)->values[1] = (val*) var45;
((struct instance_array__NativeArray*)var53)->values[2] = (val*) var47;
{
((void (*)(val*, val*, long))(var51->class->vft[COLOR_array__Array__with_native]))(var51, var53, var52) /* with_native on <var51:Array[Object]>*/;
}
}
{
var54 = ((val* (*)(val*))(var51->class->vft[COLOR_string__Object__to_s]))(var51) /* to_s on <var51:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_abort(var_v, var54); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:AbstractCompilerVisitor>*/
}
} else {
if (varonce55) {
var56 = varonce55;
} else {
var57 = "Assert failed";
var58 = 13;
var59 = string__NativeString__to_s_with_length(var57, var58);
var56 = var59;
varonce55 = var56;
}
{
abstract_compiler__AbstractCompilerVisitor__add_abort(var_v, var56); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:AbstractCompilerVisitor>*/
}
}
if (varonce60) {
var61 = varonce60;
} else {
var62 = "}";
var63 = 1;
var64 = string__NativeString__to_s_with_length(var62, var63);
var61 = var64;
varonce60 = var61;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var61); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AAssertExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__AAssertExpr__stmt(val* self, val* p0) {
abstract_compiler__AAssertExpr__stmt(self, p0); /* Direct call abstract_compiler#AAssertExpr#stmt on <self:Object(AAssertExpr)>*/
RET_LABEL:;
}
/* method abstract_compiler#AOrExpr#expr for (self: AOrExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AOrExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
val* var4 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var5 /* : AExpr */;
val* var6 /* : RuntimeVariable */;
val* var_i1 /* var i1: RuntimeVariable */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : FlatString */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : FlatString */;
val* var16 /* : Array[Object] */;
long var17 /* : Int */;
val* var18 /* : NativeArray[Object] */;
val* var19 /* : String */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : FlatString */;
val* var25 /* : Array[Object] */;
long var26 /* : Int */;
val* var27 /* : NativeArray[Object] */;
val* var28 /* : String */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : FlatString */;
val* var34 /* : AExpr */;
val* var35 /* : RuntimeVariable */;
val* var_i2 /* var i2: RuntimeVariable */;
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
val* var46 /* : Array[Object] */;
long var47 /* : Int */;
val* var48 /* : NativeArray[Object] */;
val* var49 /* : String */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : FlatString */;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AOrExpr> */
var3 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:AOrExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2512);
show_backtrace(1);
}
{
var4 = abstract_compiler__AbstractCompilerVisitor__new_var(var_v, var1);
}
var_res = var4;
{
var5 = parser_nodes__AOrExpr__n_expr(self);
}
{
var6 = abstract_compiler__AbstractCompilerVisitor__expr_bool(var_v, var5);
}
var_i1 = var6;
if (varonce) {
var7 = varonce;
} else {
var8 = "if (";
var9 = 4;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
if (varonce11) {
var12 = varonce11;
} else {
var13 = ") {";
var14 = 3;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
var16 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var16 = array_instance Array[Object] */
var17 = 3;
var18 = NEW_array__NativeArray(var17, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var18)->values[0] = (val*) var7;
((struct instance_array__NativeArray*)var18)->values[1] = (val*) var_i1;
((struct instance_array__NativeArray*)var18)->values[2] = (val*) var12;
{
((void (*)(val*, val*, long))(var16->class->vft[COLOR_array__Array__with_native]))(var16, var18, var17) /* with_native on <var16:Array[Object]>*/;
}
}
{
var19 = ((val* (*)(val*))(var16->class->vft[COLOR_string__Object__to_s]))(var16) /* to_s on <var16:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var19); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce20) {
var21 = varonce20;
} else {
var22 = " = 1;";
var23 = 5;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
var25 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var25 = array_instance Array[Object] */
var26 = 2;
var27 = NEW_array__NativeArray(var26, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var27)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var27)->values[1] = (val*) var21;
{
((void (*)(val*, val*, long))(var25->class->vft[COLOR_array__Array__with_native]))(var25, var27, var26) /* with_native on <var25:Array[Object]>*/;
}
}
{
var28 = ((val* (*)(val*))(var25->class->vft[COLOR_string__Object__to_s]))(var25) /* to_s on <var25:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var28); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce29) {
var30 = varonce29;
} else {
var31 = "} else {";
var32 = 8;
var33 = string__NativeString__to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var30); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
var34 = parser_nodes__AOrExpr__n_expr2(self);
}
{
var35 = abstract_compiler__AbstractCompilerVisitor__expr_bool(var_v, var34);
}
var_i2 = var35;
if (varonce36) {
var37 = varonce36;
} else {
var38 = " = ";
var39 = 3;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
if (varonce41) {
var42 = varonce41;
} else {
var43 = ";";
var44 = 1;
var45 = string__NativeString__to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
var46 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var46 = array_instance Array[Object] */
var47 = 4;
var48 = NEW_array__NativeArray(var47, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var48)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var48)->values[1] = (val*) var37;
((struct instance_array__NativeArray*)var48)->values[2] = (val*) var_i2;
((struct instance_array__NativeArray*)var48)->values[3] = (val*) var42;
{
((void (*)(val*, val*, long))(var46->class->vft[COLOR_array__Array__with_native]))(var46, var48, var47) /* with_native on <var46:Array[Object]>*/;
}
}
{
var49 = ((val* (*)(val*))(var46->class->vft[COLOR_string__Object__to_s]))(var46) /* to_s on <var46:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var49); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce50) {
var51 = varonce50;
} else {
var52 = "}";
var53 = 1;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var51); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AOrExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AOrExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AOrExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AImpliesExpr#expr for (self: AImpliesExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AImpliesExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
val* var4 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var5 /* : AExpr */;
val* var6 /* : RuntimeVariable */;
val* var_i1 /* var i1: RuntimeVariable */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : FlatString */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : FlatString */;
val* var16 /* : Array[Object] */;
long var17 /* : Int */;
val* var18 /* : NativeArray[Object] */;
val* var19 /* : String */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : FlatString */;
val* var25 /* : Array[Object] */;
long var26 /* : Int */;
val* var27 /* : NativeArray[Object] */;
val* var28 /* : String */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : FlatString */;
val* var34 /* : AExpr */;
val* var35 /* : RuntimeVariable */;
val* var_i2 /* var i2: RuntimeVariable */;
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
val* var46 /* : Array[Object] */;
long var47 /* : Int */;
val* var48 /* : NativeArray[Object] */;
val* var49 /* : String */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : FlatString */;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AImpliesExpr> */
var3 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:AImpliesExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2527);
show_backtrace(1);
}
{
var4 = abstract_compiler__AbstractCompilerVisitor__new_var(var_v, var1);
}
var_res = var4;
{
var5 = parser_nodes__AImpliesExpr__n_expr(self);
}
{
var6 = abstract_compiler__AbstractCompilerVisitor__expr_bool(var_v, var5);
}
var_i1 = var6;
if (varonce) {
var7 = varonce;
} else {
var8 = "if (!";
var9 = 5;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
if (varonce11) {
var12 = varonce11;
} else {
var13 = ") {";
var14 = 3;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
var16 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var16 = array_instance Array[Object] */
var17 = 3;
var18 = NEW_array__NativeArray(var17, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var18)->values[0] = (val*) var7;
((struct instance_array__NativeArray*)var18)->values[1] = (val*) var_i1;
((struct instance_array__NativeArray*)var18)->values[2] = (val*) var12;
{
((void (*)(val*, val*, long))(var16->class->vft[COLOR_array__Array__with_native]))(var16, var18, var17) /* with_native on <var16:Array[Object]>*/;
}
}
{
var19 = ((val* (*)(val*))(var16->class->vft[COLOR_string__Object__to_s]))(var16) /* to_s on <var16:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var19); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce20) {
var21 = varonce20;
} else {
var22 = " = 1;";
var23 = 5;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
var25 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var25 = array_instance Array[Object] */
var26 = 2;
var27 = NEW_array__NativeArray(var26, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var27)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var27)->values[1] = (val*) var21;
{
((void (*)(val*, val*, long))(var25->class->vft[COLOR_array__Array__with_native]))(var25, var27, var26) /* with_native on <var25:Array[Object]>*/;
}
}
{
var28 = ((val* (*)(val*))(var25->class->vft[COLOR_string__Object__to_s]))(var25) /* to_s on <var25:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var28); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce29) {
var30 = varonce29;
} else {
var31 = "} else {";
var32 = 8;
var33 = string__NativeString__to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var30); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
var34 = parser_nodes__AImpliesExpr__n_expr2(self);
}
{
var35 = abstract_compiler__AbstractCompilerVisitor__expr_bool(var_v, var34);
}
var_i2 = var35;
if (varonce36) {
var37 = varonce36;
} else {
var38 = " = ";
var39 = 3;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
if (varonce41) {
var42 = varonce41;
} else {
var43 = ";";
var44 = 1;
var45 = string__NativeString__to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
var46 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var46 = array_instance Array[Object] */
var47 = 4;
var48 = NEW_array__NativeArray(var47, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var48)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var48)->values[1] = (val*) var37;
((struct instance_array__NativeArray*)var48)->values[2] = (val*) var_i2;
((struct instance_array__NativeArray*)var48)->values[3] = (val*) var42;
{
((void (*)(val*, val*, long))(var46->class->vft[COLOR_array__Array__with_native]))(var46, var48, var47) /* with_native on <var46:Array[Object]>*/;
}
}
{
var49 = ((val* (*)(val*))(var46->class->vft[COLOR_string__Object__to_s]))(var46) /* to_s on <var46:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var49); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce50) {
var51 = varonce50;
} else {
var52 = "}";
var53 = 1;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var51); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AImpliesExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AImpliesExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AImpliesExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAndExpr#expr for (self: AAndExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AAndExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
val* var4 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var5 /* : AExpr */;
val* var6 /* : RuntimeVariable */;
val* var_i1 /* var i1: RuntimeVariable */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : FlatString */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : FlatString */;
val* var16 /* : Array[Object] */;
long var17 /* : Int */;
val* var18 /* : NativeArray[Object] */;
val* var19 /* : String */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : FlatString */;
val* var25 /* : Array[Object] */;
long var26 /* : Int */;
val* var27 /* : NativeArray[Object] */;
val* var28 /* : String */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : FlatString */;
val* var34 /* : AExpr */;
val* var35 /* : RuntimeVariable */;
val* var_i2 /* var i2: RuntimeVariable */;
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
val* var46 /* : Array[Object] */;
long var47 /* : Int */;
val* var48 /* : NativeArray[Object] */;
val* var49 /* : String */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : FlatString */;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AAndExpr> */
var3 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:AAndExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2542);
show_backtrace(1);
}
{
var4 = abstract_compiler__AbstractCompilerVisitor__new_var(var_v, var1);
}
var_res = var4;
{
var5 = parser_nodes__AAndExpr__n_expr(self);
}
{
var6 = abstract_compiler__AbstractCompilerVisitor__expr_bool(var_v, var5);
}
var_i1 = var6;
if (varonce) {
var7 = varonce;
} else {
var8 = "if (!";
var9 = 5;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
if (varonce11) {
var12 = varonce11;
} else {
var13 = ") {";
var14 = 3;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
var16 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var16 = array_instance Array[Object] */
var17 = 3;
var18 = NEW_array__NativeArray(var17, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var18)->values[0] = (val*) var7;
((struct instance_array__NativeArray*)var18)->values[1] = (val*) var_i1;
((struct instance_array__NativeArray*)var18)->values[2] = (val*) var12;
{
((void (*)(val*, val*, long))(var16->class->vft[COLOR_array__Array__with_native]))(var16, var18, var17) /* with_native on <var16:Array[Object]>*/;
}
}
{
var19 = ((val* (*)(val*))(var16->class->vft[COLOR_string__Object__to_s]))(var16) /* to_s on <var16:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var19); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce20) {
var21 = varonce20;
} else {
var22 = " = 0;";
var23 = 5;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
var25 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var25 = array_instance Array[Object] */
var26 = 2;
var27 = NEW_array__NativeArray(var26, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var27)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var27)->values[1] = (val*) var21;
{
((void (*)(val*, val*, long))(var25->class->vft[COLOR_array__Array__with_native]))(var25, var27, var26) /* with_native on <var25:Array[Object]>*/;
}
}
{
var28 = ((val* (*)(val*))(var25->class->vft[COLOR_string__Object__to_s]))(var25) /* to_s on <var25:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var28); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce29) {
var30 = varonce29;
} else {
var31 = "} else {";
var32 = 8;
var33 = string__NativeString__to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var30); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
var34 = parser_nodes__AAndExpr__n_expr2(self);
}
{
var35 = abstract_compiler__AbstractCompilerVisitor__expr_bool(var_v, var34);
}
var_i2 = var35;
if (varonce36) {
var37 = varonce36;
} else {
var38 = " = ";
var39 = 3;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
if (varonce41) {
var42 = varonce41;
} else {
var43 = ";";
var44 = 1;
var45 = string__NativeString__to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
var46 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var46 = array_instance Array[Object] */
var47 = 4;
var48 = NEW_array__NativeArray(var47, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var48)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var48)->values[1] = (val*) var37;
((struct instance_array__NativeArray*)var48)->values[2] = (val*) var_i2;
((struct instance_array__NativeArray*)var48)->values[3] = (val*) var42;
{
((void (*)(val*, val*, long))(var46->class->vft[COLOR_array__Array__with_native]))(var46, var48, var47) /* with_native on <var46:Array[Object]>*/;
}
}
{
var49 = ((val* (*)(val*))(var46->class->vft[COLOR_string__Object__to_s]))(var46) /* to_s on <var46:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var49); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce50) {
var51 = varonce50;
} else {
var52 = "}";
var53 = 1;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var51); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAndExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AAndExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AAndExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ANotExpr#expr for (self: ANotExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__ANotExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var2 /* : RuntimeVariable */;
val* var_cond /* var cond: RuntimeVariable */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : FlatString */;
val* var7 /* : Array[Object] */;
long var8 /* : Int */;
val* var9 /* : NativeArray[Object] */;
val* var10 /* : String */;
val* var11 /* : nullable MType */;
val* var13 /* : nullable MType */;
val* var14 /* : RuntimeVariable */;
var_v = p0;
{
var1 = parser_nodes__ANotExpr__n_expr(self);
}
{
var2 = abstract_compiler__AbstractCompilerVisitor__expr_bool(var_v, var1);
}
var_cond = var2;
if (varonce) {
var3 = varonce;
} else {
var4 = "!";
var5 = 1;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var7 = array_instance Array[Object] */
var8 = 2;
var9 = NEW_array__NativeArray(var8, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var9)->values[0] = (val*) var3;
((struct instance_array__NativeArray*)var9)->values[1] = (val*) var_cond;
{
((void (*)(val*, val*, long))(var7->class->vft[COLOR_array__Array__with_native]))(var7, var9, var8) /* with_native on <var7:Array[Object]>*/;
}
}
{
var10 = ((val* (*)(val*))(var7->class->vft[COLOR_string__Object__to_s]))(var7) /* to_s on <var7:Array[Object]>*/;
}
{
{ /* Inline typing#AExpr#mtype (self) on <self:ANotExpr> */
var13 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:ANotExpr> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2558);
show_backtrace(1);
}
{
var14 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var10, var11);
}
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ANotExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__ANotExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__ANotExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AOrElseExpr#expr for (self: AOrElseExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AOrElseExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
val* var4 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var5 /* : AExpr */;
val* var6 /* : null */;
val* var7 /* : RuntimeVariable */;
val* var_i1 /* var i1: RuntimeVariable */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : FlatString */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : FlatString */;
val* var17 /* : Array[Object] */;
long var18 /* : Int */;
val* var19 /* : NativeArray[Object] */;
val* var20 /* : String */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : FlatString */;
val* var26 /* : AExpr */;
val* var27 /* : null */;
val* var28 /* : RuntimeVariable */;
val* var_i2 /* var i2: RuntimeVariable */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : FlatString */;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AOrElseExpr> */
var3 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:AOrElseExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2565);
show_backtrace(1);
}
{
var4 = abstract_compiler__AbstractCompilerVisitor__new_var(var_v, var1);
}
var_res = var4;
{
var5 = parser_nodes__AOrElseExpr__n_expr(self);
}
var6 = NULL;
{
var7 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var5, var6);
}
var_i1 = var7;
if (varonce) {
var8 = varonce;
} else {
var9 = "if (";
var10 = 4;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce = var8;
}
if (varonce12) {
var13 = varonce12;
} else {
var14 = "!=NULL) {";
var15 = 9;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
var17 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var17 = array_instance Array[Object] */
var18 = 3;
var19 = NEW_array__NativeArray(var18, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var19)->values[0] = (val*) var8;
((struct instance_array__NativeArray*)var19)->values[1] = (val*) var_i1;
((struct instance_array__NativeArray*)var19)->values[2] = (val*) var13;
{
((void (*)(val*, val*, long))(var17->class->vft[COLOR_array__Array__with_native]))(var17, var19, var18) /* with_native on <var17:Array[Object]>*/;
}
}
{
var20 = ((val* (*)(val*))(var17->class->vft[COLOR_string__Object__to_s]))(var17) /* to_s on <var17:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var20); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
abstract_compiler__AbstractCompilerVisitor__assign(var_v, var_res, var_i1); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
if (varonce21) {
var22 = varonce21;
} else {
var23 = "} else {";
var24 = 8;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var22); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
var26 = parser_nodes__AOrElseExpr__n_expr2(self);
}
var27 = NULL;
{
var28 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var26, var27);
}
var_i2 = var28;
{
abstract_compiler__AbstractCompilerVisitor__assign(var_v, var_res, var_i2); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
if (varonce29) {
var30 = varonce29;
} else {
var31 = "}";
var32 = 1;
var33 = string__NativeString__to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var30); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AOrElseExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AOrElseExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AOrElseExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AIntExpr#expr for (self: AIntExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AIntExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable Int */;
val* var3 /* : nullable Int */;
val* var4 /* : String */;
long var5 /* : Int */;
val* var6 /* : Array[Object] */;
long var7 /* : Int */;
val* var8 /* : NativeArray[Object] */;
val* var9 /* : String */;
val* var10 /* : nullable MType */;
val* var12 /* : nullable MType */;
val* var13 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline literal#AIntExpr#value (self) on <self:AIntExpr> */
var3 = self->attrs[COLOR_literal__AIntExpr___value].val; /* _value on <self:AIntExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2578);
show_backtrace(1);
} else {
var5 = ((struct instance_kernel__Int*)var1)->value; /* autounbox from nullable Int to Int */;
var4 = string__Int__to_s(var5);
}
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var6 = array_instance Array[Object] */
var7 = 1;
var8 = NEW_array__NativeArray(var7, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var8)->values[0] = (val*) var4;
{
((void (*)(val*, val*, long))(var6->class->vft[COLOR_array__Array__with_native]))(var6, var8, var7) /* with_native on <var6:Array[Object]>*/;
}
}
{
var9 = ((val* (*)(val*))(var6->class->vft[COLOR_string__Object__to_s]))(var6) /* to_s on <var6:Array[Object]>*/;
}
{
{ /* Inline typing#AExpr#mtype (self) on <self:AIntExpr> */
var12 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:AIntExpr> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2578);
show_backtrace(1);
}
{
var13 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var9, var10);
}
var = var13;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AIntExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AIntExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AIntExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AFloatExpr#expr for (self: AFloatExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AFloatExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : TFloat */;
val* var2 /* : String */;
val* var3 /* : Array[Object] */;
long var4 /* : Int */;
val* var5 /* : NativeArray[Object] */;
val* var6 /* : String */;
val* var7 /* : nullable MType */;
val* var9 /* : nullable MType */;
val* var10 /* : RuntimeVariable */;
var_v = p0;
{
var1 = parser_nodes__AFloatExpr__n_float(self);
}
{
var2 = lexer_work__Token__text(var1);
}
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var3 = array_instance Array[Object] */
var4 = 1;
var5 = NEW_array__NativeArray(var4, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var5)->values[0] = (val*) var2;
{
((void (*)(val*, val*, long))(var3->class->vft[COLOR_array__Array__with_native]))(var3, var5, var4) /* with_native on <var3:Array[Object]>*/;
}
}
{
var6 = ((val* (*)(val*))(var3->class->vft[COLOR_string__Object__to_s]))(var3) /* to_s on <var3:Array[Object]>*/;
}
{
{ /* Inline typing#AExpr#mtype (self) on <self:AFloatExpr> */
var9 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:AFloatExpr> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2582);
show_backtrace(1);
}
{
var10 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var6, var7);
}
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AFloatExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AFloatExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AFloatExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ACharExpr#expr for (self: ACharExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__ACharExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : nullable Char */;
val* var7 /* : nullable Char */;
val* var8 /* : String */;
char var9 /* : Char */;
val* var10 /* : String */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : FlatString */;
val* var16 /* : Array[Object] */;
long var17 /* : Int */;
val* var18 /* : NativeArray[Object] */;
val* var19 /* : String */;
val* var20 /* : nullable MType */;
val* var22 /* : nullable MType */;
val* var23 /* : RuntimeVariable */;
var_v = p0;
if (varonce) {
var1 = varonce;
} else {
var2 = "\'";
var3 = 1;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
{ /* Inline literal#ACharExpr#value (self) on <self:ACharExpr> */
var7 = self->attrs[COLOR_literal__ACharExpr___value].val; /* _value on <self:ACharExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (var5 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2586);
show_backtrace(1);
} else {
var9 = ((struct instance_kernel__Char*)var5)->value; /* autounbox from nullable Char to Char */;
var8 = string__Char__to_s(var9);
}
{
var10 = string__Text__escape_to_c(var8);
}
if (varonce11) {
var12 = varonce11;
} else {
var13 = "\'";
var14 = 1;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
var16 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var16 = array_instance Array[Object] */
var17 = 3;
var18 = NEW_array__NativeArray(var17, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var18)->values[0] = (val*) var1;
((struct instance_array__NativeArray*)var18)->values[1] = (val*) var10;
((struct instance_array__NativeArray*)var18)->values[2] = (val*) var12;
{
((void (*)(val*, val*, long))(var16->class->vft[COLOR_array__Array__with_native]))(var16, var18, var17) /* with_native on <var16:Array[Object]>*/;
}
}
{
var19 = ((val* (*)(val*))(var16->class->vft[COLOR_string__Object__to_s]))(var16) /* to_s on <var16:Array[Object]>*/;
}
{
{ /* Inline typing#AExpr#mtype (self) on <self:ACharExpr> */
var22 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:ACharExpr> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2586);
show_backtrace(1);
}
{
var23 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var19, var20);
}
var = var23;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ACharExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__ACharExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__ACharExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AArrayExpr#expr for (self: AArrayExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AArrayExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var5 /* : Array[MType] */;
val* var7 /* : Array[MType] */;
val* var8 /* : nullable Object */;
val* var_mtype /* var mtype: MType */;
val* var9 /* : Array[RuntimeVariable] */;
val* var_array /* var array: Array[RuntimeVariable] */;
val* var10 /* : AExprs */;
val* var11 /* : ANodes[AExpr] */;
val* var13 /* : ANodes[AExpr] */;
val* var14 /* : Iterator[ANode] */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
val* var_nexpr /* var nexpr: AExpr */;
val* var17 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var18 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AArrayExpr> */
var3 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:AArrayExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
/* <var1:nullable MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(var1 == NULL) {
var4 = 0;
} else {
if(cltype >= var1->type->table_size) {
var4 = 0;
} else {
var4 = var1->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2592);
show_backtrace(1);
}
{
{ /* Inline model#MClassType#arguments (var1) on <var1:nullable MType(MClassType)> */
var7 = var1->attrs[COLOR_model__MClassType___arguments].val; /* _arguments on <var1:nullable MType(MClassType)> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 979);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = abstract_collection__SequenceRead__first(var5);
}
var_mtype = var8;
var9 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{
array__Array__init(var9); /* Direct call array#Array#init on <var9:Array[RuntimeVariable]>*/
}
var_array = var9;
{
var10 = parser_nodes__AArrayExpr__n_exprs(self);
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
var14 = parser_nodes__ANodes__iterator(var11);
}
for(;;) {
{
var15 = ((short int (*)(val*))(var14->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var14) /* is_ok on <var14:Iterator[ANode]>*/;
}
if(!var15) break;
{
var16 = ((val* (*)(val*))(var14->class->vft[COLOR_abstract_collection__Iterator__item]))(var14) /* item on <var14:Iterator[ANode]>*/;
}
var_nexpr = var16;
{
var17 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var_nexpr, var_mtype);
}
var_i = var17;
{
array__Array__add(var_array, var_i); /* Direct call array#Array#add on <var_array:Array[RuntimeVariable]>*/
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var14->class->vft[COLOR_abstract_collection__Iterator__next]))(var14) /* next on <var14:Iterator[ANode]>*/;
}
}
BREAK_label: (void)0;
{
var18 = separate_compiler__SeparateCompilerVisitor__array_instance(var_v, var_array, var_mtype);
}
var = var18;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AArrayExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AArrayExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AArrayExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AStringFormExpr#expr for (self: AStringFormExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AStringFormExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable String */;
val* var3 /* : nullable String */;
val* var4 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline literal#AStringFormExpr#value (self) on <self:AStringFormExpr> */
var3 = self->attrs[COLOR_literal__AStringFormExpr___value].val; /* _value on <self:AStringFormExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2603);
show_backtrace(1);
}
{
var4 = abstract_compiler__AbstractCompilerVisitor__string_instance(var_v, var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AStringFormExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AStringFormExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AStringFormExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ASuperstringExpr#expr for (self: ASuperstringExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__ASuperstringExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : Array[RuntimeVariable] */;
val* var_array /* var array: Array[RuntimeVariable] */;
val* var2 /* : ANodes[AExpr] */;
val* var4 /* : ANodes[AExpr] */;
val* var5 /* : Iterator[ANode] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_ne /* var ne: AExpr */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var10 /* : nullable String */;
val* var12 /* : nullable String */;
static val* varonce;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : FlatString */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : null */;
val* var20 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var21 /* : MClassType */;
val* var22 /* : RuntimeVariable */;
val* var_a /* var a: RuntimeVariable */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : FlatString */;
val* var28 /* : MType */;
val* var30 /* : MType */;
val* var31 /* : MMethod */;
val* var32 /* : Array[RuntimeVariable] */;
long var33 /* : Int */;
val* var_34 /* var : Array[RuntimeVariable] */;
val* var35 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
var_v = p0;
var1 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{
array__Array__init(var1); /* Direct call array#Array#init on <var1:Array[RuntimeVariable]>*/
}
var_array = var1;
{
{ /* Inline parser_nodes#ASuperstringExpr#n_exprs (self) on <self:ASuperstringExpr> */
var4 = self->attrs[COLOR_parser_nodes__ASuperstringExpr___n_exprs].val; /* _n_exprs on <self:ASuperstringExpr> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2180);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = parser_nodes__ANodes__iterator(var2);
}
for(;;) {
{
var6 = ((short int (*)(val*))(var5->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var5) /* is_ok on <var5:Iterator[ANode]>*/;
}
if(!var6) break;
{
var7 = ((val* (*)(val*))(var5->class->vft[COLOR_abstract_collection__Iterator__item]))(var5) /* item on <var5:Iterator[ANode]>*/;
}
var_ne = var7;
/* <var_ne:AExpr> isa AStringFormExpr */
cltype = type_parser_nodes__AStringFormExpr.color;
idtype = type_parser_nodes__AStringFormExpr.id;
if(cltype >= var_ne->type->table_size) {
var9 = 0;
} else {
var9 = var_ne->type->type_table[cltype] == idtype;
}
var_ = var9;
if (var9){
{
{ /* Inline literal#AStringFormExpr#value (var_ne) on <var_ne:AExpr(AStringFormExpr)> */
var12 = var_ne->attrs[COLOR_literal__AStringFormExpr___value].val; /* _value on <var_ne:AExpr(AStringFormExpr)> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (varonce) {
var13 = varonce;
} else {
var14 = "";
var15 = 0;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce = var13;
}
if (var10 == NULL) {
var17 = 0; /* <var13:String> cannot be null */
} else {
var18 = string__FlatString___61d_61d(var10, var13);
var17 = var18;
}
var8 = var17;
} else {
var8 = var_;
}
if (var8){
goto CONTINUE_label;
} else {
}
var19 = NULL;
{
var20 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var_ne, var19);
}
var_i = var20;
{
array__Array__add(var_array, var_i); /* Direct call array#Array#add on <var_array:Array[RuntimeVariable]>*/
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var5->class->vft[COLOR_abstract_collection__Iterator__next]))(var5) /* next on <var5:Iterator[ANode]>*/;
}
}
BREAK_label: (void)0;
{
var21 = abstract_compiler__AbstractCompilerVisitor__object_type(var_v);
}
{
var22 = separate_compiler__SeparateCompilerVisitor__array_instance(var_v, var_array, var21);
}
var_a = var22;
if (varonce23) {
var24 = varonce23;
} else {
var25 = "to_s";
var26 = 4;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_a) on <var_a:RuntimeVariable> */
var30 = var_a->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_a:RuntimeVariable> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
var31 = abstract_compiler__AbstractCompilerVisitor__get_property(var_v, var24, var28);
}
var32 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var33 = 1;
{
array__Array__with_capacity(var32, var33); /* Direct call array#Array#with_capacity on <var32:Array[RuntimeVariable]>*/
}
var_34 = var32;
{
array__AbstractArray__push(var_34, var_a); /* Direct call array#AbstractArray#push on <var_34:Array[RuntimeVariable]>*/
}
{
var35 = separate_compiler__SeparateCompilerVisitor__send(var_v, var31, var_34);
}
var_res = var35;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ASuperstringExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__ASuperstringExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__ASuperstringExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ACrangeExpr#expr for (self: ACrangeExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__ACrangeExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var2 /* : null */;
val* var3 /* : RuntimeVariable */;
val* var_i1 /* var i1: RuntimeVariable */;
val* var4 /* : AExpr */;
val* var5 /* : null */;
val* var6 /* : RuntimeVariable */;
val* var_i2 /* var i2: RuntimeVariable */;
val* var7 /* : nullable MType */;
val* var9 /* : nullable MType */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_mtype /* var mtype: MClassType */;
val* var11 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var12 /* : nullable CallSite */;
val* var14 /* : nullable CallSite */;
val* var15 /* : Array[RuntimeVariable] */;
long var16 /* : Int */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var17 /* : nullable RuntimeVariable */;
val* var_it /* var it: nullable RuntimeVariable */;
var_v = p0;
{
var1 = parser_nodes__ARangeExpr__n_expr(self);
}
var2 = NULL;
{
var3 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var1, var2);
}
var_i1 = var3;
{
var4 = parser_nodes__ARangeExpr__n_expr2(self);
}
var5 = NULL;
{
var6 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var4, var5);
}
var_i2 = var6;
{
{ /* Inline typing#AExpr#mtype (self) on <self:ACrangeExpr> */
var9 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:ACrangeExpr> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
/* <var7:nullable MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(var7 == NULL) {
var10 = 0;
} else {
if(cltype >= var7->type->table_size) {
var10 = 0;
} else {
var10 = var7->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var10)) {
var_class_name = var7 == NULL ? "null" : var7->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2626);
show_backtrace(1);
}
var_mtype = var7;
{
var11 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__init_instance]))(var_v, var_mtype) /* init_instance on <var_v:AbstractCompilerVisitor>*/;
}
var_res = var11;
{
{ /* Inline typing#ARangeExpr#init_callsite (self) on <self:ACrangeExpr> */
var14 = self->attrs[COLOR_typing__ARangeExpr___init_callsite].val; /* _init_callsite on <self:ACrangeExpr> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2628);
show_backtrace(1);
}
var15 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var16 = 3;
{
array__Array__with_capacity(var15, var16); /* Direct call array#Array#with_capacity on <var15:Array[RuntimeVariable]>*/
}
var_ = var15;
{
array__AbstractArray__push(var_, var_res); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
array__AbstractArray__push(var_, var_i1); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
array__AbstractArray__push(var_, var_i2); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
var17 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var12, var_) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
var_it = var17;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ACrangeExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__ACrangeExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__ACrangeExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AOrangeExpr#expr for (self: AOrangeExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AOrangeExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var2 /* : null */;
val* var3 /* : RuntimeVariable */;
val* var_i1 /* var i1: RuntimeVariable */;
val* var4 /* : AExpr */;
val* var5 /* : null */;
val* var6 /* : RuntimeVariable */;
val* var_i2 /* var i2: RuntimeVariable */;
val* var7 /* : nullable MType */;
val* var9 /* : nullable MType */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_mtype /* var mtype: MClassType */;
val* var11 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var12 /* : nullable CallSite */;
val* var14 /* : nullable CallSite */;
val* var15 /* : Array[RuntimeVariable] */;
long var16 /* : Int */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var17 /* : nullable RuntimeVariable */;
val* var_it /* var it: nullable RuntimeVariable */;
var_v = p0;
{
var1 = parser_nodes__ARangeExpr__n_expr(self);
}
var2 = NULL;
{
var3 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var1, var2);
}
var_i1 = var3;
{
var4 = parser_nodes__ARangeExpr__n_expr2(self);
}
var5 = NULL;
{
var6 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var4, var5);
}
var_i2 = var6;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AOrangeExpr> */
var9 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:AOrangeExpr> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
/* <var7:nullable MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(var7 == NULL) {
var10 = 0;
} else {
if(cltype >= var7->type->table_size) {
var10 = 0;
} else {
var10 = var7->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var10)) {
var_class_name = var7 == NULL ? "null" : var7->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2638);
show_backtrace(1);
}
var_mtype = var7;
{
var11 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__init_instance]))(var_v, var_mtype) /* init_instance on <var_v:AbstractCompilerVisitor>*/;
}
var_res = var11;
{
{ /* Inline typing#ARangeExpr#init_callsite (self) on <self:AOrangeExpr> */
var14 = self->attrs[COLOR_typing__ARangeExpr___init_callsite].val; /* _init_callsite on <self:AOrangeExpr> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2640);
show_backtrace(1);
}
var15 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var16 = 3;
{
array__Array__with_capacity(var15, var16); /* Direct call array#Array#with_capacity on <var15:Array[RuntimeVariable]>*/
}
var_ = var15;
{
array__AbstractArray__push(var_, var_res); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
array__AbstractArray__push(var_, var_i1); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
array__AbstractArray__push(var_, var_i2); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
var17 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var12, var_) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
var_it = var17;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AOrangeExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AOrangeExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AOrangeExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ATrueExpr#expr for (self: ATrueExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__ATrueExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : nullable MType */;
val* var7 /* : nullable MType */;
val* var8 /* : RuntimeVariable */;
var_v = p0;
if (varonce) {
var1 = varonce;
} else {
var2 = "1";
var3 = 1;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
{ /* Inline typing#AExpr#mtype (self) on <self:ATrueExpr> */
var7 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:ATrueExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2646);
show_backtrace(1);
}
{
var8 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var1, var5);
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ATrueExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__ATrueExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__ATrueExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AFalseExpr#expr for (self: AFalseExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AFalseExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : nullable MType */;
val* var7 /* : nullable MType */;
val* var8 /* : RuntimeVariable */;
var_v = p0;
if (varonce) {
var1 = varonce;
} else {
var2 = "0";
var3 = 1;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
{ /* Inline typing#AExpr#mtype (self) on <self:AFalseExpr> */
var7 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:AFalseExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2650);
show_backtrace(1);
}
{
var8 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var1, var5);
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AFalseExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AFalseExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AFalseExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ANullExpr#expr for (self: ANullExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__ANullExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : nullable MType */;
val* var7 /* : nullable MType */;
val* var8 /* : RuntimeVariable */;
var_v = p0;
if (varonce) {
var1 = varonce;
} else {
var2 = "NULL";
var3 = 4;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
{ /* Inline typing#AExpr#mtype (self) on <self:ANullExpr> */
var7 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:ANullExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2654);
show_backtrace(1);
}
{
var8 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var1, var5);
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ANullExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__ANullExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__ANullExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AIsaExpr#expr for (self: AIsaExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AIsaExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var2 /* : null */;
val* var3 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var4 /* : nullable MType */;
val* var6 /* : nullable MType */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : FlatString */;
val* var11 /* : RuntimeVariable */;
var_v = p0;
{
var1 = parser_nodes__AIsaExpr__n_expr(self);
}
var2 = NULL;
{
var3 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var1, var2);
}
var_i = var3;
{
{ /* Inline typing#AIsaExpr#cast_type (self) on <self:AIsaExpr> */
var6 = self->attrs[COLOR_typing__AIsaExpr___cast_type].val; /* _cast_type on <self:AIsaExpr> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2661);
show_backtrace(1);
}
if (varonce) {
var7 = varonce;
} else {
var8 = "isa";
var9 = 3;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
{
var11 = ((val* (*)(val*, val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__type_test]))(var_v, var_i, var4, var7) /* type_test on <var_v:AbstractCompilerVisitor>*/;
}
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AIsaExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AIsaExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AIsaExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAsCastExpr#expr for (self: AAsCastExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AAsCastExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var2 /* : null */;
val* var3 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var4 /* : AbstractCompiler */;
val* var6 /* : AbstractCompiler */;
val* var7 /* : ModelBuilder */;
val* var9 /* : ModelBuilder */;
val* var10 /* : ToolContext */;
val* var12 /* : ToolContext */;
val* var13 /* : OptionBool */;
val* var15 /* : OptionBool */;
val* var16 /* : nullable Object */;
val* var18 /* : nullable Object */;
short int var19 /* : Bool */;
val* var20 /* : nullable MType */;
val* var22 /* : nullable MType */;
static val* varonce;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : FlatString */;
var_v = p0;
{
var1 = parser_nodes__AAsCastExpr__n_expr(self);
}
var2 = NULL;
{
var3 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var1, var2);
}
var_i = var3;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var6 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var4) on <var4:AbstractCompiler> */
var9 = var4->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var4:AbstractCompiler> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var7) on <var7:ModelBuilder> */
var12 = var7->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var7:ModelBuilder> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_assert (var10) on <var10:ToolContext> */
var15 = var10->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_assert].val; /* _opt_no_check_assert on <var10:ToolContext> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_assert");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 50);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline opts#Option#value (var13) on <var13:OptionBool> */
var18 = var13->attrs[COLOR_opts__Option___value].val; /* _value on <var13:OptionBool> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
var19 = ((struct instance_kernel__Bool*)var16)->value; /* autounbox from nullable Object to Bool */;
if (var19){
var = var_i;
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#AExpr#mtype (self) on <self:AAsCastExpr> */
var22 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:AAsCastExpr> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2671);
show_backtrace(1);
}
if (varonce) {
var23 = varonce;
} else {
var24 = "as";
var25 = 2;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce = var23;
}
{
abstract_compiler__AbstractCompilerVisitor__add_cast(var_v, var_i, var20, var23); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_cast on <var_v:AbstractCompilerVisitor>*/
}
var = var_i;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAsCastExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AAsCastExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AAsCastExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAsNotnullExpr#expr for (self: AAsNotnullExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AAsNotnullExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var2 /* : null */;
val* var3 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var4 /* : AbstractCompiler */;
val* var6 /* : AbstractCompiler */;
val* var7 /* : ModelBuilder */;
val* var9 /* : ModelBuilder */;
val* var10 /* : ToolContext */;
val* var12 /* : ToolContext */;
val* var13 /* : OptionBool */;
val* var15 /* : OptionBool */;
val* var16 /* : nullable Object */;
val* var18 /* : nullable Object */;
short int var19 /* : Bool */;
val* var20 /* : MType */;
val* var22 /* : MType */;
val* var23 /* : String */;
static val* varonce;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : FlatString */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : FlatString */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
long var42 /* : Int */;
val* var43 /* : FlatString */;
val* var44 /* : Array[Object] */;
long var45 /* : Int */;
val* var46 /* : NativeArray[Object] */;
val* var47 /* : String */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
long var51 /* : Int */;
val* var52 /* : FlatString */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
long var56 /* : Int */;
val* var57 /* : FlatString */;
var_v = p0;
{
var1 = parser_nodes__AAsNotnullExpr__n_expr(self);
}
var2 = NULL;
{
var3 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var1, var2);
}
var_i = var3;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var6 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var4) on <var4:AbstractCompiler> */
var9 = var4->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var4:AbstractCompiler> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var7) on <var7:ModelBuilder> */
var12 = var7->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var7:ModelBuilder> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_assert (var10) on <var10:ToolContext> */
var15 = var10->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_assert].val; /* _opt_no_check_assert on <var10:ToolContext> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_assert");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 50);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline opts#Option#value (var13) on <var13:OptionBool> */
var18 = var13->attrs[COLOR_opts__Option___value].val; /* _value on <var13:OptionBool> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
var19 = ((struct instance_kernel__Bool*)var16)->value; /* autounbox from nullable Object to Bool */;
if (var19){
var = var_i;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_i) on <var_i:RuntimeVariable> */
var22 = var_i->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_i:RuntimeVariable> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = ((val* (*)(val*))(var20->class->vft[COLOR_abstract_compiler__MType__ctype]))(var20) /* ctype on <var20:MType>*/;
}
if (varonce) {
var24 = varonce;
} else {
var25 = "val*";
var26 = 4;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce = var24;
}
{
{ /* Inline kernel#Object#!= (var23,var24) on <var23:String> */
var_other = var24;
{
var32 = ((short int (*)(val*, val*))(var23->class->vft[COLOR_kernel__Object___61d_61d]))(var23, var_other) /* == on <var23:String>*/;
var31 = var32;
}
var33 = !var31;
var29 = var33;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
var28 = var29;
}
if (var28){
var = var_i;
goto RET_LABEL;
} else {
}
if (varonce34) {
var35 = varonce34;
} else {
var36 = "if (unlikely(";
var37 = 13;
var38 = string__NativeString__to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
if (varonce39) {
var40 = varonce39;
} else {
var41 = " == NULL)) {";
var42 = 12;
var43 = string__NativeString__to_s_with_length(var41, var42);
var40 = var43;
varonce39 = var40;
}
var44 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var44 = array_instance Array[Object] */
var45 = 3;
var46 = NEW_array__NativeArray(var45, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var46)->values[0] = (val*) var35;
((struct instance_array__NativeArray*)var46)->values[1] = (val*) var_i;
((struct instance_array__NativeArray*)var46)->values[2] = (val*) var40;
{
((void (*)(val*, val*, long))(var44->class->vft[COLOR_array__Array__with_native]))(var44, var46, var45) /* with_native on <var44:Array[Object]>*/;
}
}
{
var47 = ((val* (*)(val*))(var44->class->vft[COLOR_string__Object__to_s]))(var44) /* to_s on <var44:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var47); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce48) {
var49 = varonce48;
} else {
var50 = "Cast failed";
var51 = 11;
var52 = string__NativeString__to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
{
abstract_compiler__AbstractCompilerVisitor__add_abort(var_v, var49); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:AbstractCompilerVisitor>*/
}
if (varonce53) {
var54 = varonce53;
} else {
var55 = "}";
var56 = 1;
var57 = string__NativeString__to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var54); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_i;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAsNotnullExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AAsNotnullExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AAsNotnullExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AParExpr#expr for (self: AParExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AParExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var2 /* : null */;
val* var3 /* : RuntimeVariable */;
var_v = p0;
{
var1 = parser_nodes__AProxyExpr__n_expr(self);
}
var2 = NULL;
{
var3 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var1, var2);
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AParExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AParExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AParExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AOnceExpr#expr for (self: AOnceExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AOnceExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
val* var_mtype /* var mtype: MType */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : FlatString */;
val* var8 /* : String */;
val* var_name /* var name: String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : FlatString */;
val* var14 /* : String */;
val* var15 /* : String */;
val* var_guard /* var guard: String */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : FlatString */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : FlatString */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : FlatString */;
val* var32 /* : Array[Object] */;
long var33 /* : Int */;
val* var34 /* : NativeArray[Object] */;
val* var35 /* : String */;
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
val* var46 /* : Array[Object] */;
long var47 /* : Int */;
val* var48 /* : NativeArray[Object] */;
val* var49 /* : String */;
val* var50 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
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
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
long var68 /* : Int */;
val* var69 /* : FlatString */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
long var73 /* : Int */;
val* var74 /* : FlatString */;
val* var75 /* : Array[Object] */;
long var76 /* : Int */;
val* var77 /* : NativeArray[Object] */;
val* var78 /* : String */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
long var82 /* : Int */;
val* var83 /* : FlatString */;
val* var84 /* : AExpr */;
val* var85 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
long var89 /* : Int */;
val* var90 /* : FlatString */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : NativeString */;
long var94 /* : Int */;
val* var95 /* : FlatString */;
val* var96 /* : Array[Object] */;
long var97 /* : Int */;
val* var98 /* : NativeArray[Object] */;
val* var99 /* : String */;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : NativeString */;
long var103 /* : Int */;
val* var104 /* : FlatString */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
long var108 /* : Int */;
val* var109 /* : FlatString */;
val* var110 /* : Array[Object] */;
long var111 /* : Int */;
val* var112 /* : NativeArray[Object] */;
val* var113 /* : String */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : NativeString */;
long var117 /* : Int */;
val* var118 /* : FlatString */;
val* var119 /* : Array[Object] */;
long var120 /* : Int */;
val* var121 /* : NativeArray[Object] */;
val* var122 /* : String */;
static val* varonce123;
val* var124 /* : String */;
char* var125 /* : NativeString */;
long var126 /* : Int */;
val* var127 /* : FlatString */;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AOnceExpr> */
var3 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:AOnceExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2698);
show_backtrace(1);
}
var_mtype = var1;
if (varonce) {
var4 = varonce;
} else {
var5 = "varonce";
var6 = 7;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
{
var8 = abstract_compiler__AbstractCompilerVisitor__get_name(var_v, var4);
}
var_name = var8;
if (varonce9) {
var10 = varonce9;
} else {
var11 = "_guard";
var12 = 6;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
{
var14 = string__FlatString___43d(var_name, var10);
}
{
var15 = abstract_compiler__AbstractCompilerVisitor__get_name(var_v, var14);
}
var_guard = var15;
if (varonce16) {
var17 = varonce16;
} else {
var18 = "static ";
var19 = 7;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
{
var21 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = " ";
var25 = 1;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
if (varonce27) {
var28 = varonce27;
} else {
var29 = ";";
var30 = 1;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
var32 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var32 = array_instance Array[Object] */
var33 = 5;
var34 = NEW_array__NativeArray(var33, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var34)->values[0] = (val*) var17;
((struct instance_array__NativeArray*)var34)->values[1] = (val*) var21;
((struct instance_array__NativeArray*)var34)->values[2] = (val*) var23;
((struct instance_array__NativeArray*)var34)->values[3] = (val*) var_name;
((struct instance_array__NativeArray*)var34)->values[4] = (val*) var28;
{
((void (*)(val*, val*, long))(var32->class->vft[COLOR_array__Array__with_native]))(var32, var34, var33) /* with_native on <var32:Array[Object]>*/;
}
}
{
var35 = ((val* (*)(val*))(var32->class->vft[COLOR_string__Object__to_s]))(var32) /* to_s on <var32:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var35); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce36) {
var37 = varonce36;
} else {
var38 = "static int ";
var39 = 11;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
if (varonce41) {
var42 = varonce41;
} else {
var43 = ";";
var44 = 1;
var45 = string__NativeString__to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
var46 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var46 = array_instance Array[Object] */
var47 = 3;
var48 = NEW_array__NativeArray(var47, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var48)->values[0] = (val*) var37;
((struct instance_array__NativeArray*)var48)->values[1] = (val*) var_guard;
((struct instance_array__NativeArray*)var48)->values[2] = (val*) var42;
{
((void (*)(val*, val*, long))(var46->class->vft[COLOR_array__Array__with_native]))(var46, var48, var47) /* with_native on <var46:Array[Object]>*/;
}
}
{
var49 = ((val* (*)(val*))(var46->class->vft[COLOR_string__Object__to_s]))(var46) /* to_s on <var46:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var49); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
var50 = abstract_compiler__AbstractCompilerVisitor__new_var(var_v, var_mtype);
}
var_res = var50;
if (varonce51) {
var52 = varonce51;
} else {
var53 = "if (";
var54 = 4;
var55 = string__NativeString__to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
if (varonce56) {
var57 = varonce56;
} else {
var58 = ") {";
var59 = 3;
var60 = string__NativeString__to_s_with_length(var58, var59);
var57 = var60;
varonce56 = var57;
}
var61 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var61 = array_instance Array[Object] */
var62 = 3;
var63 = NEW_array__NativeArray(var62, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var63)->values[0] = (val*) var52;
((struct instance_array__NativeArray*)var63)->values[1] = (val*) var_guard;
((struct instance_array__NativeArray*)var63)->values[2] = (val*) var57;
{
((void (*)(val*, val*, long))(var61->class->vft[COLOR_array__Array__with_native]))(var61, var63, var62) /* with_native on <var61:Array[Object]>*/;
}
}
{
var64 = ((val* (*)(val*))(var61->class->vft[COLOR_string__Object__to_s]))(var61) /* to_s on <var61:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var64); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce65) {
var66 = varonce65;
} else {
var67 = " = ";
var68 = 3;
var69 = string__NativeString__to_s_with_length(var67, var68);
var66 = var69;
varonce65 = var66;
}
if (varonce70) {
var71 = varonce70;
} else {
var72 = ";";
var73 = 1;
var74 = string__NativeString__to_s_with_length(var72, var73);
var71 = var74;
varonce70 = var71;
}
var75 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var75 = array_instance Array[Object] */
var76 = 4;
var77 = NEW_array__NativeArray(var76, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var77)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var77)->values[1] = (val*) var66;
((struct instance_array__NativeArray*)var77)->values[2] = (val*) var_name;
((struct instance_array__NativeArray*)var77)->values[3] = (val*) var71;
{
((void (*)(val*, val*, long))(var75->class->vft[COLOR_array__Array__with_native]))(var75, var77, var76) /* with_native on <var75:Array[Object]>*/;
}
}
{
var78 = ((val* (*)(val*))(var75->class->vft[COLOR_string__Object__to_s]))(var75) /* to_s on <var75:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var78); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce79) {
var80 = varonce79;
} else {
var81 = "} else {";
var82 = 8;
var83 = string__NativeString__to_s_with_length(var81, var82);
var80 = var83;
varonce79 = var80;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var80); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
var84 = parser_nodes__AProxyExpr__n_expr(self);
}
{
var85 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var84, var_mtype);
}
var_i = var85;
if (varonce86) {
var87 = varonce86;
} else {
var88 = " = ";
var89 = 3;
var90 = string__NativeString__to_s_with_length(var88, var89);
var87 = var90;
varonce86 = var87;
}
if (varonce91) {
var92 = varonce91;
} else {
var93 = ";";
var94 = 1;
var95 = string__NativeString__to_s_with_length(var93, var94);
var92 = var95;
varonce91 = var92;
}
var96 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var96 = array_instance Array[Object] */
var97 = 4;
var98 = NEW_array__NativeArray(var97, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var98)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var98)->values[1] = (val*) var87;
((struct instance_array__NativeArray*)var98)->values[2] = (val*) var_i;
((struct instance_array__NativeArray*)var98)->values[3] = (val*) var92;
{
((void (*)(val*, val*, long))(var96->class->vft[COLOR_array__Array__with_native]))(var96, var98, var97) /* with_native on <var96:Array[Object]>*/;
}
}
{
var99 = ((val* (*)(val*))(var96->class->vft[COLOR_string__Object__to_s]))(var96) /* to_s on <var96:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var99); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce100) {
var101 = varonce100;
} else {
var102 = " = ";
var103 = 3;
var104 = string__NativeString__to_s_with_length(var102, var103);
var101 = var104;
varonce100 = var101;
}
if (varonce105) {
var106 = varonce105;
} else {
var107 = ";";
var108 = 1;
var109 = string__NativeString__to_s_with_length(var107, var108);
var106 = var109;
varonce105 = var106;
}
var110 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var110 = array_instance Array[Object] */
var111 = 4;
var112 = NEW_array__NativeArray(var111, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var112)->values[0] = (val*) var_name;
((struct instance_array__NativeArray*)var112)->values[1] = (val*) var101;
((struct instance_array__NativeArray*)var112)->values[2] = (val*) var_res;
((struct instance_array__NativeArray*)var112)->values[3] = (val*) var106;
{
((void (*)(val*, val*, long))(var110->class->vft[COLOR_array__Array__with_native]))(var110, var112, var111) /* with_native on <var110:Array[Object]>*/;
}
}
{
var113 = ((val* (*)(val*))(var110->class->vft[COLOR_string__Object__to_s]))(var110) /* to_s on <var110:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var113); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce114) {
var115 = varonce114;
} else {
var116 = " = 1;";
var117 = 5;
var118 = string__NativeString__to_s_with_length(var116, var117);
var115 = var118;
varonce114 = var115;
}
var119 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var119 = array_instance Array[Object] */
var120 = 2;
var121 = NEW_array__NativeArray(var120, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var121)->values[0] = (val*) var_guard;
((struct instance_array__NativeArray*)var121)->values[1] = (val*) var115;
{
((void (*)(val*, val*, long))(var119->class->vft[COLOR_array__Array__with_native]))(var119, var121, var120) /* with_native on <var119:Array[Object]>*/;
}
}
{
var122 = ((val* (*)(val*))(var119->class->vft[COLOR_string__Object__to_s]))(var119) /* to_s on <var119:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var122); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce123) {
var124 = varonce123;
} else {
var125 = "}";
var126 = 1;
var127 = string__NativeString__to_s_with_length(var125, var126);
var124 = var127;
varonce123 = var124;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var124); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AOnceExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AOnceExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AOnceExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ASendExpr#expr for (self: ASendExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__ASendExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var2 /* : null */;
val* var3 /* : RuntimeVariable */;
val* var_recv /* var recv: RuntimeVariable */;
val* var4 /* : Array[RuntimeVariable] */;
long var5 /* : Int */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var6 /* : Array[AExpr] */;
val* var7 /* : ArrayIterator[nullable Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_a /* var a: AExpr */;
val* var10 /* : null */;
val* var11 /* : RuntimeVariable */;
val* var12 /* : nullable CallSite */;
val* var14 /* : nullable CallSite */;
val* var15 /* : nullable RuntimeVariable */;
var_v = p0;
{
var1 = parser_nodes__ASendExpr__n_expr(self);
}
var2 = NULL;
{
var3 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var1, var2);
}
var_recv = var3;
var4 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var5 = 1;
{
array__Array__with_capacity(var4, var5); /* Direct call array#Array#with_capacity on <var4:Array[RuntimeVariable]>*/
}
var_ = var4;
{
array__AbstractArray__push(var_, var_recv); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
var_args = var_;
{
var6 = typing__ASendExpr__raw_arguments(self);
}
{
var7 = array__AbstractArrayRead__iterator(var6);
}
for(;;) {
{
var8 = array__ArrayIterator__is_ok(var7);
}
if(!var8) break;
{
var9 = array__ArrayIterator__item(var7);
}
var_a = var9;
var10 = NULL;
{
var11 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var_a, var10);
}
{
array__Array__add(var_args, var11); /* Direct call array#Array#add on <var_args:Array[RuntimeVariable]>*/
}
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var7); /* Direct call array#ArrayIterator#next on <var7:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
{
{ /* Inline typing#ASendExpr#callsite (self) on <self:ASendExpr> */
var14 = self->attrs[COLOR_typing__ASendExpr___callsite].val; /* _callsite on <self:ASendExpr> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2724);
show_backtrace(1);
}
{
var15 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var12, var_args) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ASendExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__ASendExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__ASendExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ASendReassignFormExpr#stmt for (self: ASendReassignFormExpr, AbstractCompilerVisitor) */
void abstract_compiler__ASendReassignFormExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : AExpr */;
val* var1 /* : null */;
val* var2 /* : RuntimeVariable */;
val* var_recv /* var recv: RuntimeVariable */;
val* var3 /* : Array[RuntimeVariable] */;
long var4 /* : Int */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var5 /* : Array[AExpr] */;
val* var6 /* : ArrayIterator[nullable Object] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_a /* var a: AExpr */;
val* var9 /* : null */;
val* var10 /* : RuntimeVariable */;
val* var11 /* : AExpr */;
val* var12 /* : null */;
val* var13 /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var14 /* : nullable CallSite */;
val* var16 /* : nullable CallSite */;
val* var17 /* : nullable RuntimeVariable */;
val* var_left /* var left: nullable RuntimeVariable */;
val* var18 /* : null */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : nullable CallSite */;
val* var27 /* : nullable CallSite */;
val* var28 /* : Array[RuntimeVariable] */;
long var29 /* : Int */;
val* var_30 /* var : Array[RuntimeVariable] */;
val* var31 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var32 /* : null */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
val* var39 /* : nullable CallSite */;
val* var41 /* : nullable CallSite */;
val* var42 /* : nullable RuntimeVariable */;
var_v = p0;
{
var = parser_nodes__ASendExpr__n_expr(self);
}
var1 = NULL;
{
var2 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var, var1);
}
var_recv = var2;
var3 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var4 = 1;
{
array__Array__with_capacity(var3, var4); /* Direct call array#Array#with_capacity on <var3:Array[RuntimeVariable]>*/
}
var_ = var3;
{
array__AbstractArray__push(var_, var_recv); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
var_args = var_;
{
var5 = typing__ASendExpr__raw_arguments(self);
}
{
var6 = array__AbstractArrayRead__iterator(var5);
}
for(;;) {
{
var7 = array__ArrayIterator__is_ok(var6);
}
if(!var7) break;
{
var8 = array__ArrayIterator__item(var6);
}
var_a = var8;
var9 = NULL;
{
var10 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var_a, var9);
}
{
array__Array__add(var_args, var10); /* Direct call array#Array#add on <var_args:Array[RuntimeVariable]>*/
}
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var6); /* Direct call array#ArrayIterator#next on <var6:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
{
var11 = parser_nodes__AReassignFormExpr__n_value(self);
}
var12 = NULL;
{
var13 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var11, var12);
}
var_value = var13;
{
{ /* Inline typing#ASendExpr#callsite (self) on <self:ASendReassignFormExpr> */
var16 = self->attrs[COLOR_typing__ASendExpr___callsite].val; /* _callsite on <self:ASendReassignFormExpr> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2738);
show_backtrace(1);
}
{
var17 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var14, var_args) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
var_left = var17;
var18 = NULL;
if (var_left == NULL) {
var19 = 0; /* is null */
} else {
var19 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_left,var18) on <var_left:nullable RuntimeVariable> */
var_other = var18;
{
var23 = ((short int (*)(val*, val*))(var_left->class->vft[COLOR_kernel__Object___61d_61d]))(var_left, var_other) /* == on <var_left:nullable RuntimeVariable(RuntimeVariable)>*/;
var22 = var23;
}
var24 = !var22;
var20 = var24;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var19 = var20;
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2739);
show_backtrace(1);
}
{
{ /* Inline typing#AReassignFormExpr#reassign_callsite (self) on <self:ASendReassignFormExpr> */
var27 = self->attrs[COLOR_typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:ASendReassignFormExpr> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2741);
show_backtrace(1);
}
var28 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var29 = 2;
{
array__Array__with_capacity(var28, var29); /* Direct call array#Array#with_capacity on <var28:Array[RuntimeVariable]>*/
}
var_30 = var28;
{
array__AbstractArray__push(var_30, var_left); /* Direct call array#AbstractArray#push on <var_30:Array[RuntimeVariable]>*/
}
{
array__AbstractArray__push(var_30, var_value); /* Direct call array#AbstractArray#push on <var_30:Array[RuntimeVariable]>*/
}
{
var31 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var25, var_30) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
var_res = var31;
var32 = NULL;
if (var_res == NULL) {
var33 = 0; /* is null */
} else {
var33 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var32) on <var_res:nullable RuntimeVariable> */
var_other = var32;
{
var37 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/;
var36 = var37;
}
var38 = !var36;
var34 = var38;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
var33 = var34;
}
if (unlikely(!var33)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2742);
show_backtrace(1);
}
{
array__Array__add(var_args, var_res); /* Direct call array#Array#add on <var_args:Array[RuntimeVariable]>*/
}
{
{ /* Inline typing#ASendReassignFormExpr#write_callsite (self) on <self:ASendReassignFormExpr> */
var41 = self->attrs[COLOR_typing__ASendReassignFormExpr___write_callsite].val; /* _write_callsite on <self:ASendReassignFormExpr> */
var39 = var41;
RET_LABEL40:(void)0;
}
}
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2745);
show_backtrace(1);
}
{
var42 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var39, var_args) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
var42;
RET_LABEL:;
}
/* method abstract_compiler#ASendReassignFormExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__ASendReassignFormExpr__stmt(val* self, val* p0) {
abstract_compiler__ASendReassignFormExpr__stmt(self, p0); /* Direct call abstract_compiler#ASendReassignFormExpr#stmt on <self:Object(ASendReassignFormExpr)>*/
RET_LABEL:;
}
/* method abstract_compiler#ASuperExpr#expr for (self: ASuperExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__ASuperExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable Frame */;
val* var3 /* : nullable Frame */;
val* var4 /* : Array[RuntimeVariable] */;
val* var6 /* : Array[RuntimeVariable] */;
val* var7 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
val* var8 /* : Array[RuntimeVariable] */;
long var9 /* : Int */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var10 /* : AExprs */;
val* var11 /* : ANodes[AExpr] */;
val* var13 /* : ANodes[AExpr] */;
val* var14 /* : Iterator[ANode] */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
val* var_a /* var a: AExpr */;
val* var17 /* : null */;
val* var18 /* : RuntimeVariable */;
val* var19 /* : nullable CallSite */;
val* var21 /* : nullable CallSite */;
val* var_callsite /* var callsite: nullable CallSite */;
val* var22 /* : null */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
long var29 /* : Int */;
long var30 /* : Int */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
val* var35 /* : Range[Int] */;
long var36 /* : Int */;
val* var37 /* : MSignature */;
val* var39 /* : MSignature */;
long var40 /* : Int */;
val* var41 /* : Discrete */;
val* var42 /* : Discrete */;
val* var43 /* : Iterator[Discrete] */;
short int var44 /* : Bool */;
val* var45 /* : nullable Object */;
long var_i /* var i: Int */;
long var46 /* : Int */;
val* var47 /* : nullable Frame */;
val* var49 /* : nullable Frame */;
val* var50 /* : Array[RuntimeVariable] */;
val* var52 /* : Array[RuntimeVariable] */;
long var53 /* : Int */;
long var54 /* : Int */;
short int var56 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var57 /* : Int */;
val* var58 /* : nullable Object */;
val* var60 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
long var61 /* : Int */;
long var62 /* : Int */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
val* var67 /* : nullable Frame */;
val* var69 /* : nullable Frame */;
val* var70 /* : Array[RuntimeVariable] */;
val* var72 /* : Array[RuntimeVariable] */;
val* var73 /* : nullable MMethodDef */;
val* var75 /* : nullable MMethodDef */;
val* var76 /* : MType */;
val* var78 /* : MType */;
short int var79 /* : Bool */;
int cltype80;
int idtype81;
const char* var_class_name82;
val* var83 /* : nullable RuntimeVariable */;
var_v = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var3 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2752);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#arguments (var1) on <var1:nullable Frame> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1538);
show_backtrace(1);
}
var6 = var1->attrs[COLOR_abstract_compiler__Frame___arguments].val; /* _arguments on <var1:nullable Frame> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1538);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = abstract_collection__SequenceRead__first(var4);
}
var_recv = var7;
var8 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var9 = 1;
{
array__Array__with_capacity(var8, var9); /* Direct call array#Array#with_capacity on <var8:Array[RuntimeVariable]>*/
}
var_ = var8;
{
array__AbstractArray__push(var_, var_recv); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
var_args = var_;
{
var10 = parser_nodes__ASuperExpr__n_args(self);
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
var14 = parser_nodes__ANodes__iterator(var11);
}
for(;;) {
{
var15 = ((short int (*)(val*))(var14->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var14) /* is_ok on <var14:Iterator[ANode]>*/;
}
if(!var15) break;
{
var16 = ((val* (*)(val*))(var14->class->vft[COLOR_abstract_collection__Iterator__item]))(var14) /* item on <var14:Iterator[ANode]>*/;
}
var_a = var16;
var17 = NULL;
{
var18 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var_a, var17);
}
{
array__Array__add(var_args, var18); /* Direct call array#Array#add on <var_args:Array[RuntimeVariable]>*/
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var14->class->vft[COLOR_abstract_collection__Iterator__next]))(var14) /* next on <var14:Iterator[ANode]>*/;
}
}
BREAK_label: (void)0;
{
{ /* Inline typing#ASuperExpr#callsite (self) on <self:ASuperExpr> */
var21 = self->attrs[COLOR_typing__ASuperExpr___callsite].val; /* _callsite on <self:ASuperExpr> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
var_callsite = var19;
var22 = NULL;
if (var_callsite == NULL) {
var23 = 0; /* is null */
} else {
var23 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_callsite,var22) on <var_callsite:nullable CallSite> */
var_other = var22;
{
var27 = ((short int (*)(val*, val*))(var_callsite->class->vft[COLOR_kernel__Object___61d_61d]))(var_callsite, var_other) /* == on <var_callsite:nullable CallSite(CallSite)>*/;
var26 = var27;
}
var28 = !var26;
var24 = var28;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
var23 = var24;
}
if (var23){
{
var29 = array__AbstractArrayRead__length(var_args);
}
var30 = 1;
{
{ /* Inline kernel#Int#== (var29,var30) on <var29:Int> */
var34 = var29 == var30;
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
var31 = var32;
}
if (var31){
var35 = NEW_range__Range(&type_range__Rangekernel__Int);
var36 = 0;
{
{ /* Inline typing#CallSite#msignature (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var39 = var_callsite->attrs[COLOR_typing__CallSite___msignature].val; /* _msignature on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 429);
show_backtrace(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
var40 = model__MSignature__arity(var37);
}
{
var41 = BOX_kernel__Int(var36); /* autobox from Int to Discrete */
var42 = BOX_kernel__Int(var40); /* autobox from Int to Discrete */
range__Range__without_last(var35, var41, var42); /* Direct call range#Range#without_last on <var35:Range[Int]>*/
}
{
var43 = range__Range__iterator(var35);
}
for(;;) {
{
var44 = ((short int (*)(val*))(var43->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var43) /* is_ok on <var43:Iterator[Discrete]>*/;
}
if(!var44) break;
{
var45 = ((val* (*)(val*))(var43->class->vft[COLOR_abstract_collection__Iterator__item]))(var43) /* item on <var43:Iterator[Discrete]>*/;
}
var46 = ((struct instance_kernel__Int*)var45)->value; /* autounbox from nullable Object to Int */;
var_i = var46;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var49 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var47 = var49;
RET_LABEL48:(void)0;
}
}
if (var47 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2763);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#arguments (var47) on <var47:nullable Frame> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1538);
show_backtrace(1);
}
var52 = var47->attrs[COLOR_abstract_compiler__Frame___arguments].val; /* _arguments on <var47:nullable Frame> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1538);
show_backtrace(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
var53 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var53) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var53:Int> isa OTHER */
/* <var53:Int> isa OTHER */
var56 = 1; /* easy <var53:Int> isa OTHER*/
if (unlikely(!var56)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var57 = var_i + var53;
var54 = var57;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
{
var58 = array__Array___91d_93d(var50, var54);
}
{
array__Array__add(var_args, var58); /* Direct call array#Array#add on <var_args:Array[RuntimeVariable]>*/
}
CONTINUE_label59: (void)0;
{
((void (*)(val*))(var43->class->vft[COLOR_abstract_collection__Iterator__next]))(var43) /* next on <var43:Iterator[Discrete]>*/;
}
}
BREAK_label59: (void)0;
} else {
}
{
var60 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_callsite, var_args) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
var_res = var60;
var = var_res;
goto RET_LABEL;
} else {
}
{
var61 = array__AbstractArrayRead__length(var_args);
}
var62 = 1;
{
{ /* Inline kernel#Int#== (var61,var62) on <var61:Int> */
var66 = var61 == var62;
var64 = var66;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
var63 = var64;
}
if (var63){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var69 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var67 = var69;
RET_LABEL68:(void)0;
}
}
if (var67 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2772);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#arguments (var67) on <var67:nullable Frame> */
if (unlikely(var67 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1538);
show_backtrace(1);
}
var72 = var67->attrs[COLOR_abstract_compiler__Frame___arguments].val; /* _arguments on <var67:nullable Frame> */
if (unlikely(var72 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1538);
show_backtrace(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
var_args = var70;
} else {
}
{
{ /* Inline typing#ASuperExpr#mpropdef (self) on <self:ASuperExpr> */
var75 = self->attrs[COLOR_typing__ASuperExpr___mpropdef].val; /* _mpropdef on <self:ASuperExpr> */
var73 = var75;
RET_LABEL74:(void)0;
}
}
if (unlikely(var73 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2776);
show_backtrace(1);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_recv) on <var_recv:RuntimeVariable> */
var78 = var_recv->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_recv:RuntimeVariable> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
/* <var76:MType> isa MClassType */
cltype80 = type_model__MClassType.color;
idtype81 = type_model__MClassType.id;
if(cltype80 >= var76->type->table_size) {
var79 = 0;
} else {
var79 = var76->type->type_table[cltype80] == idtype81;
}
if (unlikely(!var79)) {
var_class_name82 = var76 == NULL ? "null" : var76->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name82);
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2776);
show_backtrace(1);
}
{
var83 = separate_compiler__SeparateCompilerVisitor__supercall(var_v, var73, var76, var_args);
}
var = var83;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ASuperExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__ASuperExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__ASuperExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ANewExpr#expr for (self: ANewExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__ANewExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_mtype /* var mtype: MClassType */;
val* var5 /* : String */;
val* var_ctype /* var ctype: String */;
val* var6 /* : MClass */;
val* var8 /* : MClass */;
val* var9 /* : String */;
val* var11 /* : String */;
static val* varonce;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : FlatString */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : AExprs */;
val* var19 /* : ANodes[AExpr] */;
val* var21 /* : ANodes[AExpr] */;
long var22 /* : Int */;
long var23 /* : Int */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : AExprs */;
val* var29 /* : ANodes[AExpr] */;
val* var31 /* : ANodes[AExpr] */;
val* var32 /* : nullable Object */;
val* var33 /* : null */;
val* var34 /* : RuntimeVariable */;
val* var_l /* var l: RuntimeVariable */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
val* var38 /* : Array[MType] */;
val* var40 /* : Array[MType] */;
val* var41 /* : nullable Object */;
val* var_elttype /* var elttype: MType */;
val* var42 /* : RuntimeVariable */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
long var46 /* : Int */;
val* var47 /* : FlatString */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
val* var50 /* : RuntimeVariable */;
val* var_recv /* var recv: nullable Object */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : FlatString */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
long var61 /* : Int */;
val* var62 /* : FlatString */;
val* var63 /* : RuntimeVariable */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
long var67 /* : Int */;
val* var68 /* : FlatString */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
long var72 /* : Int */;
val* var73 /* : FlatString */;
val* var74 /* : Array[Object] */;
long var75 /* : Int */;
val* var76 /* : NativeArray[Object] */;
val* var77 /* : String */;
val* var78 /* : RuntimeVariable */;
val* var79 /* : Array[RuntimeVariable] */;
long var80 /* : Int */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var81 /* : AExprs */;
val* var82 /* : ANodes[AExpr] */;
val* var84 /* : ANodes[AExpr] */;
val* var85 /* : Iterator[ANode] */;
short int var86 /* : Bool */;
val* var87 /* : nullable Object */;
val* var_a /* var a: AExpr */;
val* var88 /* : null */;
val* var89 /* : RuntimeVariable */;
val* var90 /* : nullable CallSite */;
val* var92 /* : nullable CallSite */;
val* var93 /* : nullable RuntimeVariable */;
val* var_res2 /* var res2: nullable RuntimeVariable */;
val* var94 /* : null */;
short int var95 /* : Bool */;
short int var96 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var98 /* : Bool */;
short int var99 /* : Bool */;
short int var100 /* : Bool */;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:ANewExpr> */
var3 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:ANewExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
/* <var1:nullable MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(var1 == NULL) {
var4 = 0;
} else {
if(cltype >= var1->type->table_size) {
var4 = 0;
} else {
var4 = var1->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2783);
show_backtrace(1);
}
var_mtype = var1;
{
var5 = abstract_compiler__MClassType__ctype(var_mtype);
}
var_ctype = var5;
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var8 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline model#MClass#name (var6) on <var6:MClass> */
var11 = var6->attrs[COLOR_model__MClass___name].val; /* _name on <var6:MClass> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 340);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
if (varonce) {
var12 = varonce;
} else {
var13 = "NativeArray";
var14 = 11;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce = var12;
}
{
var17 = string__FlatString___61d_61d(var9, var12);
var16 = var17;
}
if (var16){
{
var18 = parser_nodes__ANewExpr__n_args(self);
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var18) on <var18:AExprs> */
var21 = var18->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var18:AExprs> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2274);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = parser_nodes__ANodes__length(var19);
}
var23 = 1;
{
{ /* Inline kernel#Int#== (var22,var23) on <var22:Int> */
var27 = var22 == var23;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var24 = var25;
}
if (unlikely(!var24)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2787);
show_backtrace(1);
}
{
var28 = parser_nodes__ANewExpr__n_args(self);
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var28) on <var28:AExprs> */
var31 = var28->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var28:AExprs> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2274);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
var32 = abstract_collection__SequenceRead__first(var29);
}
var33 = NULL;
{
var34 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var32, var33);
}
var_l = var34;
/* <var_mtype:MClassType> isa MGenericType */
cltype36 = type_model__MGenericType.color;
idtype37 = type_model__MGenericType.id;
if(cltype36 >= var_mtype->type->table_size) {
var35 = 0;
} else {
var35 = var_mtype->type->type_table[cltype36] == idtype37;
}
if (unlikely(!var35)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2789);
show_backtrace(1);
}
{
{ /* Inline model#MClassType#arguments (var_mtype) on <var_mtype:MClassType(MGenericType)> */
var40 = var_mtype->attrs[COLOR_model__MClassType___arguments].val; /* _arguments on <var_mtype:MClassType(MGenericType)> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 979);
show_backtrace(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
var41 = abstract_collection__SequenceRead__first(var38);
}
var_elttype = var41;
{
var42 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__native_array_instance]))(var_v, var_elttype, var_l) /* native_array_instance on <var_v:AbstractCompilerVisitor>*/;
}
var = var42;
goto RET_LABEL;
} else {
if (varonce43) {
var44 = varonce43;
} else {
var45 = "val*";
var46 = 4;
var47 = string__NativeString__to_s_with_length(var45, var46);
var44 = var47;
varonce43 = var44;
}
{
var49 = string__FlatString___61d_61d(var_ctype, var44);
var48 = var49;
}
if (var48){
{
var50 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__init_instance]))(var_v, var_mtype) /* init_instance on <var_v:AbstractCompilerVisitor>*/;
}
var_recv = var50;
} else {
if (varonce51) {
var52 = varonce51;
} else {
var53 = "void*";
var54 = 5;
var55 = string__NativeString__to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
{
var57 = string__FlatString___61d_61d(var_ctype, var52);
var56 = var57;
}
if (var56){
if (varonce58) {
var59 = varonce58;
} else {
var60 = "NULL/*special!*/";
var61 = 16;
var62 = string__NativeString__to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
{
var63 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var59, var_mtype);
}
var_recv = var63;
} else {
if (varonce64) {
var65 = varonce64;
} else {
var66 = "(";
var67 = 1;
var68 = string__NativeString__to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
if (varonce69) {
var70 = varonce69;
} else {
var71 = ")0/*special!*/";
var72 = 14;
var73 = string__NativeString__to_s_with_length(var71, var72);
var70 = var73;
varonce69 = var70;
}
var74 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var74 = array_instance Array[Object] */
var75 = 3;
var76 = NEW_array__NativeArray(var75, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var76)->values[0] = (val*) var65;
((struct instance_array__NativeArray*)var76)->values[1] = (val*) var_ctype;
((struct instance_array__NativeArray*)var76)->values[2] = (val*) var70;
{
((void (*)(val*, val*, long))(var74->class->vft[COLOR_array__Array__with_native]))(var74, var76, var75) /* with_native on <var74:Array[Object]>*/;
}
}
{
var77 = ((val* (*)(val*))(var74->class->vft[COLOR_string__Object__to_s]))(var74) /* to_s on <var74:Array[Object]>*/;
}
{
var78 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var77, var_mtype);
}
var_recv = var78;
}
}
}
var79 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var80 = 1;
{
array__Array__with_capacity(var79, var80); /* Direct call array#Array#with_capacity on <var79:Array[RuntimeVariable]>*/
}
var_ = var79;
{
array__AbstractArray__push(var_, var_recv); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
var_args = var_;
{
var81 = parser_nodes__ANewExpr__n_args(self);
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var81) on <var81:AExprs> */
var84 = var81->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var81:AExprs> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2274);
show_backtrace(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
var85 = parser_nodes__ANodes__iterator(var82);
}
for(;;) {
{
var86 = ((short int (*)(val*))(var85->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var85) /* is_ok on <var85:Iterator[ANode]>*/;
}
if(!var86) break;
{
var87 = ((val* (*)(val*))(var85->class->vft[COLOR_abstract_collection__Iterator__item]))(var85) /* item on <var85:Iterator[ANode]>*/;
}
var_a = var87;
var88 = NULL;
{
var89 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var_a, var88);
}
{
array__Array__add(var_args, var89); /* Direct call array#Array#add on <var_args:Array[RuntimeVariable]>*/
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var85->class->vft[COLOR_abstract_collection__Iterator__next]))(var85) /* next on <var85:Iterator[ANode]>*/;
}
}
BREAK_label: (void)0;
{
{ /* Inline typing#ANewExpr#callsite (self) on <self:ANewExpr> */
var92 = self->attrs[COLOR_typing__ANewExpr___callsite].val; /* _callsite on <self:ANewExpr> */
var90 = var92;
RET_LABEL91:(void)0;
}
}
if (unlikely(var90 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2803);
show_backtrace(1);
}
{
var93 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var90, var_args) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
var_res2 = var93;
var94 = NULL;
if (var_res2 == NULL) {
var95 = 0; /* is null */
} else {
var95 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res2,var94) on <var_res2:nullable RuntimeVariable> */
var_other = var94;
{
var99 = ((short int (*)(val*, val*))(var_res2->class->vft[COLOR_kernel__Object___61d_61d]))(var_res2, var_other) /* == on <var_res2:nullable RuntimeVariable(RuntimeVariable)>*/;
var98 = var99;
}
var100 = !var98;
var96 = var100;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
var95 = var96;
}
if (var95){
var = var_res2;
goto RET_LABEL;
} else {
}
var = var_recv;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ANewExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__ANewExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__ANewExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAttrExpr#expr for (self: AAttrExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AAttrExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var2 /* : null */;
val* var3 /* : RuntimeVariable */;
val* var_recv /* var recv: RuntimeVariable */;
val* var4 /* : nullable MAttribute */;
val* var6 /* : nullable MAttribute */;
val* var_mproperty /* var mproperty: MAttribute */;
val* var7 /* : RuntimeVariable */;
var_v = p0;
{
var1 = parser_nodes__AAttrFormExpr__n_expr(self);
}
var2 = NULL;
{
var3 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var1, var2);
}
var_recv = var3;
{
{ /* Inline typing#AAttrFormExpr#mproperty (self) on <self:AAttrExpr> */
var6 = self->attrs[COLOR_typing__AAttrFormExpr___mproperty].val; /* _mproperty on <self:AAttrExpr> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2816);
show_backtrace(1);
}
var_mproperty = var4;
{
var7 = separate_compiler__SeparateCompilerVisitor__read_attribute(var_v, var_mproperty, var_recv);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAttrExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AAttrExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AAttrExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAttrAssignExpr#stmt for (self: AAttrAssignExpr, AbstractCompilerVisitor) */
void abstract_compiler__AAttrAssignExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : AExpr */;
val* var1 /* : null */;
val* var2 /* : RuntimeVariable */;
val* var_recv /* var recv: RuntimeVariable */;
val* var3 /* : AExpr */;
val* var4 /* : null */;
val* var5 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var6 /* : nullable MAttribute */;
val* var8 /* : nullable MAttribute */;
val* var_mproperty /* var mproperty: MAttribute */;
var_v = p0;
{
var = parser_nodes__AAttrFormExpr__n_expr(self);
}
var1 = NULL;
{
var2 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var, var1);
}
var_recv = var2;
{
var3 = parser_nodes__AAssignFormExpr__n_value(self);
}
var4 = NULL;
{
var5 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var3, var4);
}
var_i = var5;
{
{ /* Inline typing#AAttrFormExpr#mproperty (self) on <self:AAttrAssignExpr> */
var8 = self->attrs[COLOR_typing__AAttrFormExpr___mproperty].val; /* _mproperty on <self:AAttrAssignExpr> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2826);
show_backtrace(1);
}
var_mproperty = var6;
{
separate_compiler__SeparateCompilerVisitor__write_attribute(var_v, var_mproperty, var_recv, var_i); /* Direct call separate_compiler#SeparateCompilerVisitor#write_attribute on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AAttrAssignExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__AAttrAssignExpr__stmt(val* self, val* p0) {
abstract_compiler__AAttrAssignExpr__stmt(self, p0); /* Direct call abstract_compiler#AAttrAssignExpr#stmt on <self:Object(AAttrAssignExpr)>*/
RET_LABEL:;
}
/* method abstract_compiler#AAttrReassignExpr#stmt for (self: AAttrReassignExpr, AbstractCompilerVisitor) */
void abstract_compiler__AAttrReassignExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : AExpr */;
val* var1 /* : null */;
val* var2 /* : RuntimeVariable */;
val* var_recv /* var recv: RuntimeVariable */;
val* var3 /* : AExpr */;
val* var4 /* : null */;
val* var5 /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var6 /* : nullable MAttribute */;
val* var8 /* : nullable MAttribute */;
val* var_mproperty /* var mproperty: MAttribute */;
val* var9 /* : RuntimeVariable */;
val* var_attr /* var attr: RuntimeVariable */;
val* var10 /* : nullable CallSite */;
val* var12 /* : nullable CallSite */;
val* var13 /* : Array[RuntimeVariable] */;
long var14 /* : Int */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var15 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var16 /* : null */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
var_v = p0;
{
var = parser_nodes__AAttrFormExpr__n_expr(self);
}
var1 = NULL;
{
var2 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var, var1);
}
var_recv = var2;
{
var3 = parser_nodes__AReassignFormExpr__n_value(self);
}
var4 = NULL;
{
var5 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var3, var4);
}
var_value = var5;
{
{ /* Inline typing#AAttrFormExpr#mproperty (self) on <self:AAttrReassignExpr> */
var8 = self->attrs[COLOR_typing__AAttrFormExpr___mproperty].val; /* _mproperty on <self:AAttrReassignExpr> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2836);
show_backtrace(1);
}
var_mproperty = var6;
{
var9 = separate_compiler__SeparateCompilerVisitor__read_attribute(var_v, var_mproperty, var_recv);
}
var_attr = var9;
{
{ /* Inline typing#AReassignFormExpr#reassign_callsite (self) on <self:AAttrReassignExpr> */
var12 = self->attrs[COLOR_typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:AAttrReassignExpr> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2838);
show_backtrace(1);
}
var13 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var14 = 2;
{
array__Array__with_capacity(var13, var14); /* Direct call array#Array#with_capacity on <var13:Array[RuntimeVariable]>*/
}
var_ = var13;
{
array__AbstractArray__push(var_, var_attr); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
array__AbstractArray__push(var_, var_value); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
var15 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var10, var_) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
var_res = var15;
var16 = NULL;
if (var_res == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var16) on <var_res:nullable RuntimeVariable> */
var_other = var16;
{
var21 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/;
var20 = var21;
}
var22 = !var20;
var18 = var22;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
var17 = var18;
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2839);
show_backtrace(1);
}
{
separate_compiler__SeparateCompilerVisitor__write_attribute(var_v, var_mproperty, var_recv, var_res); /* Direct call separate_compiler#SeparateCompilerVisitor#write_attribute on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AAttrReassignExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__AAttrReassignExpr__stmt(val* self, val* p0) {
abstract_compiler__AAttrReassignExpr__stmt(self, p0); /* Direct call abstract_compiler#AAttrReassignExpr#stmt on <self:Object(AAttrReassignExpr)>*/
RET_LABEL:;
}
/* method abstract_compiler#AIssetAttrExpr#expr for (self: AIssetAttrExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AIssetAttrExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var2 /* : null */;
val* var3 /* : RuntimeVariable */;
val* var_recv /* var recv: RuntimeVariable */;
val* var4 /* : nullable MAttribute */;
val* var6 /* : nullable MAttribute */;
val* var_mproperty /* var mproperty: MAttribute */;
val* var7 /* : RuntimeVariable */;
var_v = p0;
{
var1 = parser_nodes__AAttrFormExpr__n_expr(self);
}
var2 = NULL;
{
var3 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var1, var2);
}
var_recv = var3;
{
{ /* Inline typing#AAttrFormExpr#mproperty (self) on <self:AIssetAttrExpr> */
var6 = self->attrs[COLOR_typing__AAttrFormExpr___mproperty].val; /* _mproperty on <self:AIssetAttrExpr> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2848);
show_backtrace(1);
}
var_mproperty = var4;
{
var7 = separate_compiler__SeparateCompilerVisitor__isset_attribute(var_v, var_mproperty, var_recv);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AIssetAttrExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AIssetAttrExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AIssetAttrExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ADebugTypeExpr#stmt for (self: ADebugTypeExpr, AbstractCompilerVisitor) */
void abstract_compiler__ADebugTypeExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method abstract_compiler#ADebugTypeExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__ADebugTypeExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
{ /* Inline abstract_compiler#ADebugTypeExpr#stmt (self,p0) on <self:Object(ADebugTypeExpr)> */
var_v = p0;
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_compiler#MModule#properties for (self: MModule, MClass): Set[MProperty] */
val* abstract_compiler__MModule__properties(val* self, val* p0) {
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
val* var11 /* : Collection[Object] */;
val* var12 /* : ArrayIterator[nullable Object] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_parent /* var parent: MClass */;
val* var15 /* : Set[MProperty] */;
val* var16 /* : Array[MClassDef] */;
val* var18 /* : Array[MClassDef] */;
val* var19 /* : ArrayIterator[nullable Object] */;
short int var20 /* : Bool */;
val* var21 /* : nullable Object */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var22 /* : POSetElement[MModule] */;
val* var24 /* : POSetElement[MModule] */;
val* var25 /* : MModule */;
val* var27 /* : MModule */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var31 /* : Array[MProperty] */;
val* var33 /* : Array[MProperty] */;
val* var34 /* : ArrayIterator[nullable Object] */;
short int var35 /* : Bool */;
val* var36 /* : nullable Object */;
val* var_mprop /* var mprop: MProperty */;
val* var38 /* : Map[MClass, Set[MProperty]] */;
val* var40 /* : Map[MClass, Set[MProperty]] */;
val* var41 /* : Map[MClass, Set[MProperty]] */;
val* var43 /* : Map[MClass, Set[MProperty]] */;
val* var44 /* : nullable Object */;
var_mclass = p0;
{
{ /* Inline abstract_compiler#MModule#properties_cache (self) on <self:MModule> */
var3 = self->attrs[COLOR_abstract_compiler__MModule___properties_cache].val; /* _properties_cache on <self:MModule> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _properties_cache");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2893);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = abstract_collection__MapRead__has_key(var1, var_mclass);
}
var5 = !var4;
if (var5){
var6 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MProperty);
{
hash_collection__HashSet__init(var6); /* Direct call hash_collection#HashSet#init on <var6:HashSet[MProperty]>*/
}
var_properties = var6;
var7 = NEW_array__Array(&type_array__Arraymodel__MClass);
{
array__Array__init(var7); /* Direct call array#Array#init on <var7:Array[MClass]>*/
}
var_parents = var7;
{
var8 = model__MModule__flatten_mclass_hierarchy(self);
}
{
var9 = poset__POSet__has(var8, var_mclass);
}
if (var9){
{
var10 = model__MClass__in_hierarchy(var_mclass, self);
}
{
var11 = poset__POSetElement__direct_greaters(var10);
}
{
abstract_collection__SimpleCollection__add_all(var_parents, var11); /* Direct call abstract_collection#SimpleCollection#add_all on <var_parents:Array[MClass]>*/
}
} else {
}
{
var12 = array__AbstractArrayRead__iterator(var_parents);
}
for(;;) {
{
var13 = array__ArrayIterator__is_ok(var12);
}
if(!var13) break;
{
var14 = array__ArrayIterator__item(var12);
}
var_parent = var14;
{
var15 = abstract_compiler__MModule__properties(self, var_parent);
}
{
abstract_collection__SimpleCollection__add_all(var_properties, var15); /* Direct call abstract_collection#SimpleCollection#add_all on <var_properties:HashSet[MProperty]>*/
}
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var12); /* Direct call array#ArrayIterator#next on <var12:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
{
{ /* Inline model#MClass#mclassdefs (var_mclass) on <var_mclass:MClass> */
var18 = var_mclass->attrs[COLOR_model__MClass___mclassdefs].val; /* _mclassdefs on <var_mclass:MClass> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdefs");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 392);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = array__AbstractArrayRead__iterator(var16);
}
for(;;) {
{
var20 = array__ArrayIterator__is_ok(var19);
}
if(!var20) break;
{
var21 = array__ArrayIterator__item(var19);
}
var_mclassdef = var21;
{
{ /* Inline mmodule#MModule#in_importation (self) on <self:MModule> */
var24 = self->attrs[COLOR_mmodule__MModule___in_importation].val; /* _in_importation on <self:MModule> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 101);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var27 = var_mclassdef->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 471);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
var28 = poset__POSetElement___60d_61d(var22, var25);
}
var29 = !var28;
if (var29){
goto CONTINUE_label30;
} else {
}
{
{ /* Inline model#MClassDef#intro_mproperties (var_mclassdef) on <var_mclassdef:MClassDef> */
var33 = var_mclassdef->attrs[COLOR_model__MClassDef___intro_mproperties].val; /* _intro_mproperties on <var_mclassdef:MClassDef> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mproperties");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 571);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
var34 = array__AbstractArrayRead__iterator(var31);
}
for(;;) {
{
var35 = array__ArrayIterator__is_ok(var34);
}
if(!var35) break;
{
var36 = array__ArrayIterator__item(var34);
}
var_mprop = var36;
{
hash_collection__HashSet__add(var_properties, var_mprop); /* Direct call hash_collection#HashSet#add on <var_properties:HashSet[MProperty]>*/
}
CONTINUE_label37: (void)0;
{
array__ArrayIterator__next(var34); /* Direct call array#ArrayIterator#next on <var34:ArrayIterator[nullable Object]>*/
}
}
BREAK_label37: (void)0;
CONTINUE_label30: (void)0;
{
array__ArrayIterator__next(var19); /* Direct call array#ArrayIterator#next on <var19:ArrayIterator[nullable Object]>*/
}
}
BREAK_label30: (void)0;
{
{ /* Inline abstract_compiler#MModule#properties_cache (self) on <self:MModule> */
var40 = self->attrs[COLOR_abstract_compiler__MModule___properties_cache].val; /* _properties_cache on <self:MModule> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _properties_cache");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2893);
show_backtrace(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
((void (*)(val*, val*, val*))(var38->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var38, var_mclass, var_properties) /* []= on <var38:Map[MClass, Set[MProperty]]>*/;
}
} else {
}
{
{ /* Inline abstract_compiler#MModule#properties_cache (self) on <self:MModule> */
var43 = self->attrs[COLOR_abstract_compiler__MModule___properties_cache].val; /* _properties_cache on <self:MModule> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _properties_cache");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2893);
show_backtrace(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
var44 = ((val* (*)(val*, val*))(var41->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var41, var_mclass) /* [] on <var41:Map[MClass, Set[MProperty]]>*/;
}
var = var44;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MModule#properties for (self: Object, MClass): Set[MProperty] */
val* VIRTUAL_abstract_compiler__MModule__properties(val* self, val* p0) {
val* var /* : Set[MProperty] */;
val* var1 /* : Set[MProperty] */;
var1 = abstract_compiler__MModule__properties(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MModule#properties_cache for (self: MModule): Map[MClass, Set[MProperty]] */
val* abstract_compiler__MModule__properties_cache(val* self) {
val* var /* : Map[MClass, Set[MProperty]] */;
val* var1 /* : Map[MClass, Set[MProperty]] */;
var1 = self->attrs[COLOR_abstract_compiler__MModule___properties_cache].val; /* _properties_cache on <self:MModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _properties_cache");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2893);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MModule#properties_cache for (self: Object): Map[MClass, Set[MProperty]] */
val* VIRTUAL_abstract_compiler__MModule__properties_cache(val* self) {
val* var /* : Map[MClass, Set[MProperty]] */;
val* var1 /* : Map[MClass, Set[MProperty]] */;
val* var3 /* : Map[MClass, Set[MProperty]] */;
{ /* Inline abstract_compiler#MModule#properties_cache (self) on <self:Object(MModule)> */
var3 = self->attrs[COLOR_abstract_compiler__MModule___properties_cache].val; /* _properties_cache on <self:Object(MModule)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _properties_cache");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2893);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MModule#finalize_ffi for (self: MModule, AbstractCompiler) */
void abstract_compiler__MModule__finalize_ffi(val* self, val* p0) {
val* var_c /* var c: AbstractCompiler */;
var_c = p0;
RET_LABEL:;
}
/* method abstract_compiler#MModule#finalize_ffi for (self: Object, AbstractCompiler) */
void VIRTUAL_abstract_compiler__MModule__finalize_ffi(val* self, val* p0) {
val* var_c /* var c: AbstractCompiler */;
{ /* Inline abstract_compiler#MModule#finalize_ffi (self,p0) on <self:Object(MModule)> */
var_c = p0;
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_compiler#MModule#collect_linker_libs for (self: MModule): nullable Set[String] */
val* abstract_compiler__MModule__collect_linker_libs(val* self) {
val* var /* : nullable Set[String] */;
val* var1 /* : null */;
var1 = NULL;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MModule#collect_linker_libs for (self: Object): nullable Set[String] */
val* VIRTUAL_abstract_compiler__MModule__collect_linker_libs(val* self) {
val* var /* : nullable Set[String] */;
val* var1 /* : nullable Set[String] */;
var1 = abstract_compiler__MModule__collect_linker_libs(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Sys#main for (self: Sys) */
void abstract_compiler__Sys__main(val* self) {
val* var /* : ToolContext */;
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var1 /* : OptionArray */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : FlatString */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : FlatString */;
val* var11 /* : Array[String] */;
long var12 /* : Int */;
val* var13 /* : NativeArray[String] */;
val* var_opt_mixins /* var opt_mixins: OptionArray */;
val* var14 /* : OptionContext */;
val* var16 /* : OptionContext */;
val* var17 /* : Array[Option] */;
long var18 /* : Int */;
val* var19 /* : NativeArray[Option] */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : FlatString */;
val* var26 /* : Sequence[String] */;
val* var27 /* : Model */;
val* var_model /* var model: Model */;
val* var29 /* : ModelBuilder */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var30 /* : OptionContext */;
val* var32 /* : OptionContext */;
val* var33 /* : Array[String] */;
val* var35 /* : Array[String] */;
val* var_arguments /* var arguments: Array[String] */;
short int var36 /* : Bool */;
long var37 /* : Int */;
long var38 /* : Int */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var42 /* : Bool */;
short int var_ /* var : Bool */;
val* var43 /* : OptionString */;
val* var45 /* : OptionString */;
val* var46 /* : nullable Object */;
val* var48 /* : nullable Object */;
val* var49 /* : null */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
long var59 /* : Int */;
val* var60 /* : FlatString */;
long var61 /* : Int */;
val* var63 /* : Array[MModule] */;
val* var_mmodules /* var mmodules: Array[MModule] */;
val* var64 /* : nullable Object */;
val* var66 /* : nullable Object */;
val* var67 /* : Array[MModule] */;
val* var_mixins /* var mixins: Array[MModule] */;
short int var68 /* : Bool */;
val* var69 /* : ArrayIterator[nullable Object] */;
short int var70 /* : Bool */;
val* var71 /* : nullable Object */;
val* var_mmodule /* var mmodule: MModule */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
long var75 /* : Int */;
val* var76 /* : FlatString */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
long var80 /* : Int */;
val* var81 /* : FlatString */;
val* var82 /* : Array[Object] */;
long var83 /* : Int */;
val* var84 /* : NativeArray[Object] */;
val* var85 /* : String */;
long var86 /* : Int */;
val* var87 /* : Array[MModule] */;
long var88 /* : Int */;
val* var_89 /* var : Array[MModule] */;
val* var_ms /* var ms: Array[MModule] */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
var = NEW_toolcontext__ToolContext(&type_toolcontext__ToolContext);
{
separate_erasure_compiler__ToolContext__init(var); /* Direct call separate_erasure_compiler#ToolContext#init on <var:ToolContext>*/
}
var_toolcontext = var;
var1 = NEW_opts__OptionArray(&type_opts__OptionArray);
if (varonce) {
var2 = varonce;
} else {
var3 = "Additionals module to min-in";
var4 = 28;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
if (varonce6) {
var7 = varonce6;
} else {
var8 = "-m";
var9 = 2;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
var11 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var11 = array_instance Array[String] */
var12 = 1;
var13 = NEW_array__NativeArray(var12, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var13)->values[0] = (val*) var7;
{
((void (*)(val*, val*, long))(var11->class->vft[COLOR_array__Array__with_native]))(var11, var13, var12) /* with_native on <var11:Array[String]>*/;
}
}
{
opts__OptionArray__init(var1, var2, var11); /* Direct call opts#OptionArray#init on <var1:OptionArray>*/
}
var_opt_mixins = var1;
{
{ /* Inline toolcontext#ToolContext#option_context (var_toolcontext) on <var_toolcontext:ToolContext> */
var16 = var_toolcontext->attrs[COLOR_toolcontext__ToolContext___option_context].val; /* _option_context on <var_toolcontext:ToolContext> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 166);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
var17 = NEW_array__Array(&type_array__Arrayopts__Option);
{ /* var17 = array_instance Array[Option] */
var18 = 1;
var19 = NEW_array__NativeArray(var18, &type_array__NativeArrayopts__Option);
((struct instance_array__NativeArray*)var19)->values[0] = (val*) var_opt_mixins;
{
((void (*)(val*, val*, long))(var17->class->vft[COLOR_array__Array__with_native]))(var17, var19, var18) /* with_native on <var17:Array[Option]>*/;
}
}
{
opts__OptionContext__add_option(var14, var17); /* Direct call opts#OptionContext#add_option on <var14:OptionContext>*/
}
if (varonce20) {
var21 = varonce20;
} else {
var22 = "Usage: nitg [OPTION]... file.nit...\nCompiles Nit programs.";
var23 = 58;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
{
{ /* Inline toolcontext#ToolContext#tooldescription= (var_toolcontext,var21) on <var_toolcontext:ToolContext> */
var_toolcontext->attrs[COLOR_toolcontext__ToolContext___tooldescription].val = var21; /* _tooldescription on <var_toolcontext:ToolContext> */
RET_LABEL25:(void)0;
}
}
{
var26 = string__Object__args(self);
}
{
nith__ToolContext__process_options(var_toolcontext, var26); /* Direct call nith#ToolContext#process_options on <var_toolcontext:ToolContext>*/
}
var27 = NEW_model_base__Model(&type_model_base__Model);
{
{ /* Inline model_base#Model#init (var27) on <var27:Model> */
RET_LABEL28:(void)0;
}
}
var_model = var27;
var29 = NEW_modelbuilder__ModelBuilder(&type_modelbuilder__ModelBuilder);
{
modelbuilder__ModelBuilder__init(var29, var_model, var_toolcontext); /* Direct call modelbuilder#ModelBuilder#init on <var29:ModelBuilder>*/
}
var_modelbuilder = var29;
{
{ /* Inline toolcontext#ToolContext#option_context (var_toolcontext) on <var_toolcontext:ToolContext> */
var32 = var_toolcontext->attrs[COLOR_toolcontext__ToolContext___option_context].val; /* _option_context on <var_toolcontext:ToolContext> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 166);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline opts#OptionContext#rest (var30) on <var30:OptionContext> */
var35 = var30->attrs[COLOR_opts__OptionContext___rest].val; /* _rest on <var30:OptionContext> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _rest");
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 250);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
var_arguments = var33;
{
var37 = array__AbstractArrayRead__length(var_arguments);
}
var38 = 1;
{
{ /* Inline kernel#Int#> (var37,var38) on <var37:Int> */
/* Covariant cast for argument 0 (i) <var38:Int> isa OTHER */
/* <var38:Int> isa OTHER */
var41 = 1; /* easy <var38:Int> isa OTHER*/
if (unlikely(!var41)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 327);
show_backtrace(1);
}
var42 = var37 > var38;
var39 = var42;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var_ = var39;
if (var39){
{
{ /* Inline abstract_compiler#ToolContext#opt_output (var_toolcontext) on <var_toolcontext:ToolContext> */
var45 = var_toolcontext->attrs[COLOR_abstract_compiler__ToolContext___opt_output].val; /* _opt_output on <var_toolcontext:ToolContext> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_output");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 28);
show_backtrace(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline opts#Option#value (var43) on <var43:OptionString> */
var48 = var43->attrs[COLOR_opts__Option___value].val; /* _value on <var43:OptionString> */
var46 = var48;
RET_LABEL47:(void)0;
}
}
var49 = NULL;
if (var46 == NULL) {
var50 = 0; /* is null */
} else {
var50 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var46,var49) on <var46:nullable Object(nullable String)> */
var_other = var49;
{
var54 = ((short int (*)(val*, val*))(var46->class->vft[COLOR_kernel__Object___61d_61d]))(var46, var_other) /* == on <var46:nullable String(String)>*/;
var53 = var54;
}
var55 = !var53;
var51 = var55;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
var50 = var51;
}
var36 = var50;
} else {
var36 = var_;
}
if (var36){
if (varonce56) {
var57 = varonce56;
} else {
var58 = "Error: --output needs a single source file. Do you prefer --dir?";
var59 = 64;
var60 = string__NativeString__to_s_with_length(var58, var59);
var57 = var60;
varonce56 = var57;
}
{
file__Object__print(self, var57); /* Direct call file#Object#print on <self:Sys>*/
}
var61 = 1;
{
{ /* Inline kernel#Object#exit (self,var61) on <self:Sys> */
exit(var61);
RET_LABEL62:(void)0;
}
}
} else {
}
{
var63 = modelbuilder__ModelBuilder__parse(var_modelbuilder, var_arguments);
}
var_mmodules = var63;
{
{ /* Inline opts#Option#value (var_opt_mixins) on <var_opt_mixins:OptionArray> */
var66 = var_opt_mixins->attrs[COLOR_opts__Option___value].val; /* _value on <var_opt_mixins:OptionArray> */
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
var67 = modelbuilder__ModelBuilder__parse(var_modelbuilder, var64);
}
var_mixins = var67;
{
var68 = array__AbstractArrayRead__is_empty(var_mmodules);
}
if (var68){
goto RET_LABEL;
} else {
}
{
modelbuilder__ModelBuilder__run_phases(var_modelbuilder); /* Direct call modelbuilder#ModelBuilder#run_phases on <var_modelbuilder:ModelBuilder>*/
}
{
var69 = array__AbstractArrayRead__iterator(var_mmodules);
}
for(;;) {
{
var70 = array__ArrayIterator__is_ok(var69);
}
if(!var70) break;
{
var71 = array__ArrayIterator__item(var69);
}
var_mmodule = var71;
if (varonce72) {
var73 = varonce72;
} else {
var74 = "*** PROCESS ";
var75 = 12;
var76 = string__NativeString__to_s_with_length(var74, var75);
var73 = var76;
varonce72 = var73;
}
if (varonce77) {
var78 = varonce77;
} else {
var79 = " ***";
var80 = 4;
var81 = string__NativeString__to_s_with_length(var79, var80);
var78 = var81;
varonce77 = var78;
}
var82 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var82 = array_instance Array[Object] */
var83 = 3;
var84 = NEW_array__NativeArray(var83, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var84)->values[0] = (val*) var73;
((struct instance_array__NativeArray*)var84)->values[1] = (val*) var_mmodule;
((struct instance_array__NativeArray*)var84)->values[2] = (val*) var78;
{
((void (*)(val*, val*, long))(var82->class->vft[COLOR_array__Array__with_native]))(var82, var84, var83) /* with_native on <var82:Array[Object]>*/;
}
}
{
var85 = ((val* (*)(val*))(var82->class->vft[COLOR_string__Object__to_s]))(var82) /* to_s on <var82:Array[Object]>*/;
}
var86 = 1;
{
toolcontext__ToolContext__info(var_toolcontext, var85, var86); /* Direct call toolcontext#ToolContext#info on <var_toolcontext:ToolContext>*/
}
var87 = NEW_array__Array(&type_array__Arraymmodule__MModule);
var88 = 1;
{
array__Array__with_capacity(var87, var88); /* Direct call array#Array#with_capacity on <var87:Array[MModule]>*/
}
var_89 = var87;
{
array__AbstractArray__push(var_89, var_mmodule); /* Direct call array#AbstractArray#push on <var_89:Array[MModule]>*/
}
var_ms = var_89;
{
var90 = array__AbstractArrayRead__is_empty(var_mixins);
}
var91 = !var90;
if (var91){
{
abstract_collection__SimpleCollection__add_all(var_ms, var_mixins); /* Direct call abstract_collection#SimpleCollection#add_all on <var_ms:Array[MModule]>*/
}
} else {
}
{
modelbuilder__ToolContext__run_global_phases(var_toolcontext, var_ms); /* Direct call modelbuilder#ToolContext#run_global_phases on <var_toolcontext:ToolContext>*/
}
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var69); /* Direct call array#ArrayIterator#next on <var69:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method abstract_compiler#Sys#main for (self: Object) */
void VIRTUAL_abstract_compiler__Sys__main(val* self) {
abstract_compiler__Sys__main(self); /* Direct call abstract_compiler#Sys#main on <self:Object(Sys)>*/
RET_LABEL:;
}
