#include "nitc__abstract_compiler.sep.0.h"
/* method abstract_compiler$ASuperstringExpr$expr for (self: ASuperstringExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___ASuperstringExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_type_string /* var type_string: MClassType */;
val* var3 /* : Array[AExpr] */;
val* var_array /* var array: Array[AExpr] */;
val* var4 /* : ANodes[AExpr] */;
val* var6 /* : ANodes[AExpr] */;
val* var_ /* var : ANodes[AExpr] */;
val* var7 /* : Iterator[ANode] */;
val* var_8 /* var : Iterator[AExpr] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_ne /* var ne: AExpr */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
int cltype;
int idtype;
short int var_13 /* var : Bool */;
val* var14 /* : String */;
val* var16 /* : String */;
static val* varonce;
val* var17 /* : String */;
char* var18 /* : CString */;
val* var19 /* : String */;
val* var20 /* : nullable Int */;
val* var21 /* : nullable Int */;
val* var22 /* : nullable Bool */;
val* var23 /* : nullable Bool */;
short int var24 /* : Bool */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : CString */;
val* var29 /* : String */;
val* var30 /* : nullable Int */;
val* var31 /* : nullable Int */;
val* var32 /* : nullable Bool */;
val* var33 /* : nullable Bool */;
val* var34 /* : String */;
val* var_varonce /* var varonce: String */;
val* var36 /* : NativeArray[String] */;
static val* varonce35;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : CString */;
val* var40 /* : String */;
val* var41 /* : nullable Int */;
val* var42 /* : nullable Int */;
val* var43 /* : nullable Bool */;
val* var44 /* : nullable Bool */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : CString */;
val* var48 /* : String */;
val* var49 /* : nullable Int */;
val* var50 /* : nullable Int */;
val* var51 /* : nullable Bool */;
val* var52 /* : nullable Bool */;
val* var53 /* : String */;
long var54 /* : Int */;
long var56 /* : Int */;
val* var57 /* : RuntimeVariable */;
val* var58 /* : RuntimeVariable */;
val* var_a /* var a: RuntimeVariable */;
val* var60 /* : NativeArray[String] */;
static val* varonce59;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : CString */;
val* var64 /* : String */;
val* var65 /* : nullable Int */;
val* var66 /* : nullable Int */;
val* var67 /* : nullable Bool */;
val* var68 /* : nullable Bool */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : CString */;
val* var72 /* : String */;
val* var73 /* : nullable Int */;
val* var74 /* : nullable Int */;
val* var75 /* : nullable Bool */;
val* var76 /* : nullable Bool */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : CString */;
val* var80 /* : String */;
val* var81 /* : nullable Int */;
val* var82 /* : nullable Int */;
val* var83 /* : nullable Bool */;
val* var84 /* : nullable Bool */;
val* var85 /* : MType */;
val* var87 /* : MType */;
val* var88 /* : String */;
val* var89 /* : String */;
long var_i /* var i: Int */;
long var90 /* : Int */;
long var92 /* : Int */;
long var_93 /* var : Int */;
short int var94 /* : Bool */;
short int var96 /* : Bool */;
int cltype97;
int idtype98;
const char* var_class_name;
short int var99 /* : Bool */;
val* var101 /* : nullable Object */;
val* var_ne102 /* var ne: AExpr */;
short int var103 /* : Bool */;
int cltype104;
int idtype105;
short int var106 /* : Bool */;
val* var108 /* : RuntimeVariable */;
val* var_e /* var e: RuntimeVariable */;
long var109 /* : Int */;
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : CString */;
val* var113 /* : String */;
val* var114 /* : nullable Int */;
val* var115 /* : nullable Int */;
val* var116 /* : nullable Bool */;
val* var117 /* : nullable Bool */;
val* var119 /* : NativeArray[String] */;
static val* varonce118;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : CString */;
val* var123 /* : String */;
val* var124 /* : nullable Int */;
val* var125 /* : nullable Int */;
val* var126 /* : nullable Bool */;
val* var127 /* : nullable Bool */;
static val* varonce128;
val* var129 /* : String */;
char* var130 /* : CString */;
val* var131 /* : String */;
val* var132 /* : nullable Int */;
val* var133 /* : nullable Int */;
val* var134 /* : nullable Bool */;
val* var135 /* : nullable Bool */;
val* var136 /* : String */;
val* var137 /* : String */;
val* var139 /* : NativeArray[String] */;
static val* varonce138;
static val* varonce140;
val* var141 /* : String */;
char* var142 /* : CString */;
val* var143 /* : String */;
val* var144 /* : nullable Int */;
val* var145 /* : nullable Int */;
val* var146 /* : nullable Bool */;
val* var147 /* : nullable Bool */;
val* var148 /* : String */;
static val* varonce149;
val* var150 /* : String */;
char* var151 /* : CString */;
val* var152 /* : String */;
val* var153 /* : nullable Int */;
val* var154 /* : nullable Int */;
val* var155 /* : nullable Bool */;
val* var156 /* : nullable Bool */;
static val* varonce157;
val* var158 /* : String */;
char* var159 /* : CString */;
val* var160 /* : String */;
val* var161 /* : nullable Int */;
val* var162 /* : nullable Int */;
val* var163 /* : nullable Bool */;
val* var164 /* : nullable Bool */;
val* var165 /* : MClassType */;
val* var166 /* : MMethod */;
val* var_to_s_method /* var to_s_method: MMethod */;
long var_i167 /* var i: Int */;
long var168 /* : Int */;
long var170 /* : Int */;
long var_171 /* var : Int */;
short int var172 /* : Bool */;
short int var174 /* : Bool */;
int cltype175;
int idtype176;
const char* var_class_name177;
short int var178 /* : Bool */;
val* var180 /* : nullable Object */;
val* var_ne181 /* var ne: AExpr */;
short int var182 /* : Bool */;
int cltype183;
int idtype184;
val* var186 /* : RuntimeVariable */;
val* var_e187 /* var e: RuntimeVariable */;
val* var188 /* : MType */;
val* var190 /* : MType */;
val* var191 /* : AbstractCompiler */;
val* var193 /* : AbstractCompiler */;
val* var194 /* : MModule */;
val* var196 /* : MModule */;
short int var197 /* : Bool */;
short int var198 /* : Bool */;
val* var199 /* : Array[RuntimeVariable] */;
val* var_200 /* var : Array[RuntimeVariable] */;
val* var201 /* : nullable RuntimeVariable */;
long var202 /* : Int */;
static val* varonce203;
val* var204 /* : String */;
char* var205 /* : CString */;
val* var206 /* : String */;
val* var207 /* : nullable Int */;
val* var208 /* : nullable Int */;
val* var209 /* : nullable Bool */;
val* var210 /* : nullable Bool */;
val* var211 /* : MType */;
val* var213 /* : MType */;
val* var214 /* : MMethod */;
val* var215 /* : Array[RuntimeVariable] */;
val* var_216 /* var : Array[RuntimeVariable] */;
val* var217 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
short int var218 /* : Bool */;
short int var219 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var221 /* : Bool */;
short int var222 /* : Bool */;
short int var223 /* : Bool */;
val* var224 /* : nullable RuntimeVariable */;
val* var226 /* : NativeArray[String] */;
static val* varonce225;
static val* varonce227;
val* var228 /* : String */;
char* var229 /* : CString */;
val* var230 /* : String */;
val* var231 /* : nullable Int */;
val* var232 /* : nullable Int */;
val* var233 /* : nullable Bool */;
val* var234 /* : nullable Bool */;
static val* varonce235;
val* var236 /* : String */;
char* var237 /* : CString */;
val* var238 /* : String */;
val* var239 /* : nullable Int */;
val* var240 /* : nullable Int */;
val* var241 /* : nullable Bool */;
val* var242 /* : nullable Bool */;
val* var243 /* : String */;
val* var244 /* : String */;
var_v = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___mmodule(var_v);
}
{
var2 = nitc__model___MModule___string_type(var1);
}
var_type_string = var2;
var3 = NEW_core__Array(&type_core__Array__nitc__AExpr);
{
core___core__Array___core__kernel__Object__init(var3); /* Direct call array$Array$init on <var3:Array[AExpr]>*/
}
var_array = var3;
{
{ /* Inline parser_nodes$ASuperstringExpr$n_exprs (self) on <self:ASuperstringExpr> */
var6 = self->attrs[COLOR_nitc__parser_nodes__ASuperstringExpr___n_exprs].val; /* _n_exprs on <self:ASuperstringExpr> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2645);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_ = var4;
{
var7 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_);
}
var_8 = var7;
for(;;) {
{
var9 = ((short int(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_8); /* is_ok on <var_8:Iterator[AExpr]>*/
}
if (var9){
} else {
goto BREAK_label;
}
{
var10 = ((val*(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_8); /* item on <var_8:Iterator[AExpr]>*/
}
var_ne = var10;
/* <var_ne:AExpr> isa AStringFormExpr */
cltype = type_nitc__AStringFormExpr.color;
idtype = type_nitc__AStringFormExpr.id;
if(cltype >= var_ne->type->table_size) {
var12 = 0;
} else {
var12 = var_ne->type->type_table[cltype] == idtype;
}
var_13 = var12;
if (var12){
{
{ /* Inline literal$AStringFormExpr$value (var_ne) on <var_ne:AExpr(AStringFormExpr)> */
var16 = var_ne->attrs[COLOR_nitc__literal__AStringFormExpr___value].val; /* _value on <var_ne:AExpr(AStringFormExpr)> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__literal, 201);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
if (likely(varonce!=NULL)) {
var17 = varonce;
} else {
var18 = "";
var20 = (val*)(0l<<2|1);
var21 = (val*)(0l<<2|1);
var22 = (val*)((long)(0)<<2|3);
var23 = (val*)((long)(0)<<2|3);
var19 = core__flat___CString___to_s_unsafe(var18, var20, var21, var22, var23);
var17 = var19;
varonce = var17;
}
{
var24 = ((short int(*)(val* self, val* p0))(var14->class->vft[COLOR_core__kernel__Object___61d_61d]))(var14, var17); /* == on <var14:String>*/
}
var11 = var24;
} else {
var11 = var_13;
}
if (var11){
goto BREAK_label25;
} else {
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_array, var_ne); /* Direct call array$Array$add on <var_array:Array[AExpr]>*/
}
BREAK_label25: (void)0;
{
((void(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_8); /* next on <var_8:Iterator[AExpr]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_8); /* finish on <var_8:Iterator[AExpr]>*/
}
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "varonce";
var30 = (val*)(7l<<2|1);
var31 = (val*)(7l<<2|1);
var32 = (val*)((long)(0)<<2|3);
var33 = (val*)((long)(0)<<2|3);
var29 = core__flat___CString___to_s_unsafe(var28, var30, var31, var32, var33);
var27 = var29;
varonce26 = var27;
}
{
var34 = nitc___nitc__AbstractCompilerVisitor___get_name(var_v, var27);
}
var_varonce = var34;
if (unlikely(varonce35==NULL)) {
var36 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = "if (unlikely(";
var41 = (val*)(13l<<2|1);
var42 = (val*)(13l<<2|1);
var43 = (val*)((long)(0)<<2|3);
var44 = (val*)((long)(0)<<2|3);
var40 = core__flat___CString___to_s_unsafe(var39, var41, var42, var43, var44);
var38 = var40;
varonce37 = var38;
}
((struct instance_core__NativeArray*)var36)->values[0]=var38;
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = "==NULL)) {";
var49 = (val*)(10l<<2|1);
var50 = (val*)(10l<<2|1);
var51 = (val*)((long)(0)<<2|3);
var52 = (val*)((long)(0)<<2|3);
var48 = core__flat___CString___to_s_unsafe(var47, var49, var50, var51, var52);
var46 = var48;
varonce45 = var46;
}
((struct instance_core__NativeArray*)var36)->values[2]=var46;
} else {
var36 = varonce35;
varonce35 = NULL;
}
((struct instance_core__NativeArray*)var36)->values[1]=var_varonce;
{
var53 = ((val*(*)(val* self))(var36->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var36); /* native_to_s on <var36:NativeArray[String]>*/
}
varonce35 = var36;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var53); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline array$AbstractArrayRead$length (var_array) on <var_array:Array[AExpr]> */
var56 = var_array->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_array:Array[AExpr]> */
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
var57 = nitc___nitc__AbstractCompilerVisitor___int_instance(var_v, var54);
}
{
var58 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__native_array_instance]))(var_v, var_type_string, var57); /* native_array_instance on <var_v:AbstractCompilerVisitor>*/
}
var_a = var58;
if (unlikely(varonce59==NULL)) {
var60 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce61!=NULL)) {
var62 = varonce61;
} else {
var63 = "static ";
var65 = (val*)(7l<<2|1);
var66 = (val*)(7l<<2|1);
var67 = (val*)((long)(0)<<2|3);
var68 = (val*)((long)(0)<<2|3);
var64 = core__flat___CString___to_s_unsafe(var63, var65, var66, var67, var68);
var62 = var64;
varonce61 = var62;
}
((struct instance_core__NativeArray*)var60)->values[0]=var62;
if (likely(varonce69!=NULL)) {
var70 = varonce69;
} else {
var71 = " ";
var73 = (val*)(1l<<2|1);
var74 = (val*)(1l<<2|1);
var75 = (val*)((long)(0)<<2|3);
var76 = (val*)((long)(0)<<2|3);
var72 = core__flat___CString___to_s_unsafe(var71, var73, var74, var75, var76);
var70 = var72;
varonce69 = var70;
}
((struct instance_core__NativeArray*)var60)->values[2]=var70;
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = ";";
var81 = (val*)(1l<<2|1);
var82 = (val*)(1l<<2|1);
var83 = (val*)((long)(0)<<2|3);
var84 = (val*)((long)(0)<<2|3);
var80 = core__flat___CString___to_s_unsafe(var79, var81, var82, var83, var84);
var78 = var80;
varonce77 = var78;
}
((struct instance_core__NativeArray*)var60)->values[4]=var78;
} else {
var60 = varonce59;
varonce59 = NULL;
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_a) on <var_a:RuntimeVariable> */
var87 = var_a->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_a:RuntimeVariable> */
if (unlikely(var87 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var85 = var87;
RET_LABEL86:(void)0;
}
}
{
var88 = ((val*(*)(val* self))(var85->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var85); /* ctype on <var85:MType>*/
}
((struct instance_core__NativeArray*)var60)->values[1]=var88;
((struct instance_core__NativeArray*)var60)->values[3]=var_varonce;
{
var89 = ((val*(*)(val* self))(var60->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var60); /* native_to_s on <var60:NativeArray[String]>*/
}
varonce59 = var60;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var89); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
var_i = 0l;
{
{ /* Inline array$AbstractArrayRead$length (var_array) on <var_array:Array[AExpr]> */
var92 = var_array->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_array:Array[AExpr]> */
var90 = var92;
RET_LABEL91:(void)0;
}
}
var_93 = var90;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_93) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_93:Int> isa OTHER */
/* <var_93:Int> isa OTHER */
var96 = 1; /* easy <var_93:Int> isa OTHER*/
if (unlikely(!var96)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var99 = var_i < var_93;
var94 = var99;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
}
if (var94){
} else {
goto BREAK_label100;
}
{
var101 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_array, var_i);
}
var_ne102 = var101;
/* <var_ne102:AExpr> isa AStringFormExpr */
cltype104 = type_nitc__AStringFormExpr.color;
idtype105 = type_nitc__AStringFormExpr.id;
if(cltype104 >= var_ne102->type->table_size) {
var103 = 0;
} else {
var103 = var_ne102->type->type_table[cltype104] == idtype105;
}
var106 = !var103;
if (var106){
goto BREAK_label107;
} else {
}
{
var108 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var_ne102, ((val*)NULL));
}
var_e = var108;
{
nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__native_array_set(var_v, var_a, var_i, var_e); /* Direct call separate_compiler$SeparateCompilerVisitor$native_array_set on <var_v:AbstractCompilerVisitor>*/
}
BREAK_label107: (void)0;
{
var109 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var109;
}
BREAK_label100: (void)0;
if (likely(varonce110!=NULL)) {
var111 = varonce110;
} else {
var112 = "} else {";
var114 = (val*)(8l<<2|1);
var115 = (val*)(8l<<2|1);
var116 = (val*)((long)(0)<<2|3);
var117 = (val*)((long)(0)<<2|3);
var113 = core__flat___CString___to_s_unsafe(var112, var114, var115, var116, var117);
var111 = var113;
varonce110 = var111;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var111); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce118==NULL)) {
var119 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce120!=NULL)) {
var121 = varonce120;
} else {
var122 = " = ";
var124 = (val*)(3l<<2|1);
var125 = (val*)(3l<<2|1);
var126 = (val*)((long)(0)<<2|3);
var127 = (val*)((long)(0)<<2|3);
var123 = core__flat___CString___to_s_unsafe(var122, var124, var125, var126, var127);
var121 = var123;
varonce120 = var121;
}
((struct instance_core__NativeArray*)var119)->values[1]=var121;
if (likely(varonce128!=NULL)) {
var129 = varonce128;
} else {
var130 = ";";
var132 = (val*)(1l<<2|1);
var133 = (val*)(1l<<2|1);
var134 = (val*)((long)(0)<<2|3);
var135 = (val*)((long)(0)<<2|3);
var131 = core__flat___CString___to_s_unsafe(var130, var132, var133, var134, var135);
var129 = var131;
varonce128 = var129;
}
((struct instance_core__NativeArray*)var119)->values[3]=var129;
} else {
var119 = varonce118;
varonce118 = NULL;
}
{
var136 = ((val*(*)(val* self))(var_a->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_a); /* to_s on <var_a:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var119)->values[0]=var136;
((struct instance_core__NativeArray*)var119)->values[2]=var_varonce;
{
var137 = ((val*(*)(val* self))(var119->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var119); /* native_to_s on <var119:NativeArray[String]>*/
}
varonce118 = var119;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var137); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce138==NULL)) {
var139 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce140!=NULL)) {
var141 = varonce140;
} else {
var142 = " = NULL;";
var144 = (val*)(8l<<2|1);
var145 = (val*)(8l<<2|1);
var146 = (val*)((long)(0)<<2|3);
var147 = (val*)((long)(0)<<2|3);
var143 = core__flat___CString___to_s_unsafe(var142, var144, var145, var146, var147);
var141 = var143;
varonce140 = var141;
}
((struct instance_core__NativeArray*)var139)->values[1]=var141;
} else {
var139 = varonce138;
varonce138 = NULL;
}
((struct instance_core__NativeArray*)var139)->values[0]=var_varonce;
{
var148 = ((val*(*)(val* self))(var139->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var139); /* native_to_s on <var139:NativeArray[String]>*/
}
varonce138 = var139;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var148); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce149!=NULL)) {
var150 = varonce149;
} else {
var151 = "}";
var153 = (val*)(1l<<2|1);
var154 = (val*)(1l<<2|1);
var155 = (val*)((long)(0)<<2|3);
var156 = (val*)((long)(0)<<2|3);
var152 = core__flat___CString___to_s_unsafe(var151, var153, var154, var155, var156);
var150 = var152;
varonce149 = var150;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var150); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce157!=NULL)) {
var158 = varonce157;
} else {
var159 = "to_s";
var161 = (val*)(4l<<2|1);
var162 = (val*)(4l<<2|1);
var163 = (val*)((long)(0)<<2|3);
var164 = (val*)((long)(0)<<2|3);
var160 = core__flat___CString___to_s_unsafe(var159, var161, var162, var163, var164);
var158 = var160;
varonce157 = var158;
}
{
var165 = nitc___nitc__AbstractCompilerVisitor___object_type(var_v);
}
{
var166 = nitc___nitc__AbstractCompilerVisitor___get_property(var_v, var158, var165);
}
var_to_s_method = var166;
var_i167 = 0l;
{
{ /* Inline array$AbstractArrayRead$length (var_array) on <var_array:Array[AExpr]> */
var170 = var_array->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_array:Array[AExpr]> */
var168 = var170;
RET_LABEL169:(void)0;
}
}
var_171 = var168;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i167,var_171) on <var_i167:Int> */
/* Covariant cast for argument 0 (i) <var_171:Int> isa OTHER */
/* <var_171:Int> isa OTHER */
var174 = 1; /* easy <var_171:Int> isa OTHER*/
if (unlikely(!var174)) {
var_class_name177 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name177);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var178 = var_i167 < var_171;
var172 = var178;
goto RET_LABEL173;
RET_LABEL173:(void)0;
}
}
if (var172){
} else {
goto BREAK_label179;
}
{
var180 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_array, var_i167);
}
var_ne181 = var180;
/* <var_ne181:AExpr> isa AStringFormExpr */
cltype183 = type_nitc__AStringFormExpr.color;
idtype184 = type_nitc__AStringFormExpr.id;
if(cltype183 >= var_ne181->type->table_size) {
var182 = 0;
} else {
var182 = var_ne181->type->type_table[cltype183] == idtype184;
}
if (var182){
goto BREAK_label185;
} else {
}
{
var186 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var_ne181, ((val*)NULL));
}
var_e187 = var186;
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (var_e187) on <var_e187:RuntimeVariable> */
var190 = var_e187->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_e187:RuntimeVariable> */
if (unlikely(var190 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1986);
fatal_exit(1);
}
var188 = var190;
RET_LABEL189:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var193 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var193 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var191 = var193;
RET_LABEL192:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var191) on <var191:AbstractCompiler> */
var196 = var191->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var191:AbstractCompiler> */
if (unlikely(var196 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
fatal_exit(1);
}
var194 = var196;
RET_LABEL195:(void)0;
}
}
{
var197 = nitc___nitc__MType___is_subtype(var188, var194, ((val*)NULL), var_type_string);
}
var198 = !var197;
if (var198){
var199 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var199, 1l); /* Direct call array$Array$with_capacity on <var199:Array[RuntimeVariable]>*/
}
var_200 = var199;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_200, var_e187); /* Direct call array$AbstractArray$push on <var_200:Array[RuntimeVariable]>*/
}
{
var201 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__send(var_v, var_to_s_method, var_200);
}
if (unlikely(var201 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3812);
fatal_exit(1);
}
var_e187 = var201;
} else {
}
{
nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__native_array_set(var_v, var_a, var_i167, var_e187); /* Direct call separate_compiler$SeparateCompilerVisitor$native_array_set on <var_v:AbstractCompilerVisitor>*/
}
BREAK_label185: (void)0;
{
var202 = core___core__Int___Discrete__successor(var_i167, 1l);
}
var_i167 = var202;
}
BREAK_label179: (void)0;
if (likely(varonce203!=NULL)) {
var204 = varonce203;
} else {
var205 = "native_to_s";
var207 = (val*)(11l<<2|1);
var208 = (val*)(11l<<2|1);
var209 = (val*)((long)(0)<<2|3);
var210 = (val*)((long)(0)<<2|3);
var206 = core__flat___CString___to_s_unsafe(var205, var207, var208, var209, var210);
var204 = var206;
varonce203 = var204;
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_a) on <var_a:RuntimeVariable> */
var213 = var_a->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_a:RuntimeVariable> */
if (unlikely(var213 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var211 = var213;
RET_LABEL212:(void)0;
}
}
{
var214 = nitc___nitc__AbstractCompilerVisitor___get_property(var_v, var204, var211);
}
var215 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var215, 1l); /* Direct call array$Array$with_capacity on <var215:Array[RuntimeVariable]>*/
}
var_216 = var215;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_216, var_a); /* Direct call array$AbstractArray$push on <var_216:Array[RuntimeVariable]>*/
}
{
var217 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__send(var_v, var214, var_216);
}
var_res = var217;
if (var_res == NULL) {
var218 = 0; /* is null */
} else {
var218 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_res,((val*)NULL)) on <var_res:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var221 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
var222 = !var221;
var219 = var222;
goto RET_LABEL220;
RET_LABEL220:(void)0;
}
var218 = var219;
}
if (unlikely(!var218)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3819);
fatal_exit(1);
}
{
var223 = nitc___nitc__AugmentedStringFormExpr___is_re(self);
}
if (var223){
{
var224 = nitc__abstract_compiler___AugmentedStringFormExpr___make_re(self, var_v, var_res);
}
var_res = var224;
} else {
}
if (unlikely(varonce225==NULL)) {
var226 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce227!=NULL)) {
var228 = varonce227;
} else {
var229 = " = ";
var231 = (val*)(3l<<2|1);
var232 = (val*)(3l<<2|1);
var233 = (val*)((long)(0)<<2|3);
var234 = (val*)((long)(0)<<2|3);
var230 = core__flat___CString___to_s_unsafe(var229, var231, var232, var233, var234);
var228 = var230;
varonce227 = var228;
}
((struct instance_core__NativeArray*)var226)->values[1]=var228;
if (likely(varonce235!=NULL)) {
var236 = varonce235;
} else {
var237 = ";";
var239 = (val*)(1l<<2|1);
var240 = (val*)(1l<<2|1);
var241 = (val*)((long)(0)<<2|3);
var242 = (val*)((long)(0)<<2|3);
var238 = core__flat___CString___to_s_unsafe(var237, var239, var240, var241, var242);
var236 = var238;
varonce235 = var236;
}
((struct instance_core__NativeArray*)var226)->values[3]=var236;
} else {
var226 = varonce225;
varonce225 = NULL;
}
((struct instance_core__NativeArray*)var226)->values[0]=var_varonce;
{
var243 = ((val*(*)(val* self))(var_a->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_a); /* to_s on <var_a:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var226)->values[2]=var243;
{
var244 = ((val*(*)(val* self))(var226->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var226); /* native_to_s on <var226:NativeArray[String]>*/
}
varonce225 = var226;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var244); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$ACrangeExpr$expr for (self: ACrangeExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___ACrangeExpr___AExpr__expr(val* self, val* p0) {
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
{ /* Inline parser_nodes$ARangeExpr$n_expr (self) on <self:ACrangeExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:ACrangeExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2502);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var1, ((val*)NULL));
}
var_i1 = var4;
{
{ /* Inline parser_nodes$ARangeExpr$n_expr2 (self) on <self:ACrangeExpr> */
var7 = self->attrs[COLOR_nitc__parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:ACrangeExpr> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2508);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var5, ((val*)NULL));
}
var_i2 = var8;
{
{ /* Inline typing$AExpr$mtype (self) on <self:ACrangeExpr> */
var11 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:ACrangeExpr> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
/* <var9:nullable MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3836);
fatal_exit(1);
}
var_mtype = var9;
{
var13 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__init_instance]))(var_v, var_mtype); /* init_instance on <var_v:AbstractCompilerVisitor>*/
}
var_res = var13;
{
{ /* Inline typing$ARangeExpr$init_callsite (self) on <self:ACrangeExpr> */
var16 = self->attrs[COLOR_nitc__typing__ARangeExpr___init_callsite].val; /* _init_callsite on <self:ACrangeExpr> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3838);
fatal_exit(1);
}
var17 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var17, 3l); /* Direct call array$Array$with_capacity on <var17:Array[RuntimeVariable]>*/
}
var_ = var17;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_res); /* Direct call array$AbstractArray$push on <var_:Array[RuntimeVariable]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_i1); /* Direct call array$AbstractArray$push on <var_:Array[RuntimeVariable]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_i2); /* Direct call array$AbstractArray$push on <var_:Array[RuntimeVariable]>*/
}
{
var18 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var14, var_); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AOrangeExpr$expr for (self: AOrangeExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AOrangeExpr___AExpr__expr(val* self, val* p0) {
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
{ /* Inline parser_nodes$ARangeExpr$n_expr (self) on <self:AOrangeExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:AOrangeExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2502);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var1, ((val*)NULL));
}
var_i1 = var4;
{
{ /* Inline parser_nodes$ARangeExpr$n_expr2 (self) on <self:AOrangeExpr> */
var7 = self->attrs[COLOR_nitc__parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:AOrangeExpr> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2508);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var5, ((val*)NULL));
}
var_i2 = var8;
{
{ /* Inline typing$AExpr$mtype (self) on <self:AOrangeExpr> */
var11 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:AOrangeExpr> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
/* <var9:nullable MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3848);
fatal_exit(1);
}
var_mtype = var9;
{
var13 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__init_instance]))(var_v, var_mtype); /* init_instance on <var_v:AbstractCompilerVisitor>*/
}
var_res = var13;
{
{ /* Inline typing$ARangeExpr$init_callsite (self) on <self:AOrangeExpr> */
var16 = self->attrs[COLOR_nitc__typing__ARangeExpr___init_callsite].val; /* _init_callsite on <self:AOrangeExpr> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3850);
fatal_exit(1);
}
var17 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var17, 3l); /* Direct call array$Array$with_capacity on <var17:Array[RuntimeVariable]>*/
}
var_ = var17;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_res); /* Direct call array$AbstractArray$push on <var_:Array[RuntimeVariable]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_i1); /* Direct call array$AbstractArray$push on <var_:Array[RuntimeVariable]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_i2); /* Direct call array$AbstractArray$push on <var_:Array[RuntimeVariable]>*/
}
{
var18 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var14, var_); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$ATrueExpr$expr for (self: ATrueExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___ATrueExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : RuntimeVariable */;
var_v = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___bool_instance(var_v, 1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AFalseExpr$expr for (self: AFalseExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AFalseExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : RuntimeVariable */;
var_v = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___bool_instance(var_v, 0);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$ANullExpr$expr for (self: ANullExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___ANullExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : RuntimeVariable */;
var_v = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___null_instance(var_v);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AIsaExpr$expr for (self: AIsaExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AIsaExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var5 /* : nullable MType */;
val* var7 /* : nullable MType */;
val* var_cast_type /* var cast_type: nullable MType */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
static val* varonce;
val* var14 /* : String */;
char* var15 /* : CString */;
val* var16 /* : String */;
val* var17 /* : nullable Int */;
val* var18 /* : nullable Int */;
val* var19 /* : nullable Bool */;
val* var20 /* : nullable Bool */;
val* var21 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes$AIsaExpr$n_expr (self) on <self:AIsaExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AIsaExpr___n_expr].val; /* _n_expr on <self:AIsaExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2234);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var1, ((val*)NULL));
}
var_i = var4;
{
{ /* Inline typing$AIsaExpr$cast_type (self) on <self:AIsaExpr> */
var7 = self->attrs[COLOR_nitc__typing__AIsaExpr___cast_type].val; /* _cast_type on <self:AIsaExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_cast_type = var5;
if (var_cast_type == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_cast_type,((val*)NULL)) on <var_cast_type:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_cast_type,var_other) on <var_cast_type:nullable MType(MType)> */
var13 = var_cast_type == var_other;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
if (var8){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
if (likely(varonce!=NULL)) {
var14 = varonce;
} else {
var15 = "isa";
var17 = (val*)(3l<<2|1);
var18 = (val*)(3l<<2|1);
var19 = (val*)((long)(0)<<2|3);
var20 = (val*)((long)(0)<<2|3);
var16 = core__flat___CString___to_s_unsafe(var15, var17, var18, var19, var20);
var14 = var16;
varonce = var14;
}
{
var21 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__type_test]))(var_v, var_i, var_cast_type, var14); /* type_test on <var_v:AbstractCompilerVisitor>*/
}
var = var21;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AAsCastExpr$expr for (self: AAsCastExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AAsCastExpr___AExpr__expr(val* self, val* p0) {
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
char* var25 /* : CString */;
val* var26 /* : String */;
val* var27 /* : nullable Int */;
val* var28 /* : nullable Int */;
val* var29 /* : nullable Bool */;
val* var30 /* : nullable Bool */;
var_v = p0;
{
{ /* Inline parser_nodes$AAsCastForm$n_expr (self) on <self:AAsCastExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_expr].val; /* _n_expr on <self:AAsCastExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2667);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var1, ((val*)NULL));
}
var_i = var4;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var7 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var5) on <var5:AbstractCompiler> */
var10 = var5->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var5:AbstractCompiler> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var8) on <var8:ModelBuilder> */
var13 = var8->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var8:ModelBuilder> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_no_check_assert (var11) on <var11:ToolContext> */
var16 = var11->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_assert].val; /* _opt_no_check_assert on <var11:ToolContext> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_assert");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 52);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline opts$Option$value (var14) on <var14:OptionBool> */
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
{ /* Inline typing$AExpr$mtype (self) on <self:AAsCastExpr> */
var23 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:AAsCastExpr> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3883);
fatal_exit(1);
}
if (likely(varonce!=NULL)) {
var24 = varonce;
} else {
var25 = "as";
var27 = (val*)(2l<<2|1);
var28 = (val*)(2l<<2|1);
var29 = (val*)((long)(0)<<2|3);
var30 = (val*)((long)(0)<<2|3);
var26 = core__flat___CString___to_s_unsafe(var25, var27, var28, var29, var30);
var24 = var26;
varonce = var24;
}
{
nitc___nitc__AbstractCompilerVisitor___add_cast(var_v, var_i, var21, var24); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_cast on <var_v:AbstractCompilerVisitor>*/
}
var = var_i;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AAsNotnullExpr$expr for (self: AAsNotnullExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AAsNotnullExpr___AExpr__expr(val* self, val* p0) {
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
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var23 /* : NativeArray[String] */;
static val* varonce;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : CString */;
val* var27 /* : String */;
val* var28 /* : nullable Int */;
val* var29 /* : nullable Int */;
val* var30 /* : nullable Bool */;
val* var31 /* : nullable Bool */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : CString */;
val* var35 /* : String */;
val* var36 /* : nullable Int */;
val* var37 /* : nullable Int */;
val* var38 /* : nullable Bool */;
val* var39 /* : nullable Bool */;
val* var40 /* : String */;
val* var41 /* : String */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : CString */;
val* var45 /* : String */;
val* var46 /* : nullable Int */;
val* var47 /* : nullable Int */;
val* var48 /* : nullable Bool */;
val* var49 /* : nullable Bool */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : CString */;
val* var53 /* : String */;
val* var54 /* : nullable Int */;
val* var55 /* : nullable Int */;
val* var56 /* : nullable Bool */;
val* var57 /* : nullable Bool */;
var_v = p0;
{
{ /* Inline parser_nodes$AAsCastForm$n_expr (self) on <self:AAsNotnullExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_expr].val; /* _n_expr on <self:AAsNotnullExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2667);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var1, ((val*)NULL));
}
var_i = var4;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var7 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var5) on <var5:AbstractCompiler> */
var10 = var5->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var5:AbstractCompiler> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var8) on <var8:ModelBuilder> */
var13 = var8->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var8:ModelBuilder> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_no_check_assert (var11) on <var11:ToolContext> */
var16 = var11->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_assert].val; /* _opt_no_check_assert on <var11:ToolContext> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_assert");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 52);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline opts$Option$value (var14) on <var14:OptionBool> */
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
var21 = nitc___nitc__AbstractCompilerVisitor___maybenull(var_v, var_i);
}
var22 = !var21;
if (var22){
var = var_i;
goto RET_LABEL;
} else {
}
if (unlikely(varonce==NULL)) {
var23 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "if (unlikely(";
var28 = (val*)(13l<<2|1);
var29 = (val*)(13l<<2|1);
var30 = (val*)((long)(0)<<2|3);
var31 = (val*)((long)(0)<<2|3);
var27 = core__flat___CString___to_s_unsafe(var26, var28, var29, var30, var31);
var25 = var27;
varonce24 = var25;
}
((struct instance_core__NativeArray*)var23)->values[0]=var25;
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = " == NULL)) {";
var36 = (val*)(12l<<2|1);
var37 = (val*)(12l<<2|1);
var38 = (val*)((long)(0)<<2|3);
var39 = (val*)((long)(0)<<2|3);
var35 = core__flat___CString___to_s_unsafe(var34, var36, var37, var38, var39);
var33 = var35;
varonce32 = var33;
}
((struct instance_core__NativeArray*)var23)->values[2]=var33;
} else {
var23 = varonce;
varonce = NULL;
}
{
var40 = ((val*(*)(val* self))(var_i->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_i); /* to_s on <var_i:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var23)->values[1]=var40;
{
var41 = ((val*(*)(val* self))(var23->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var23); /* native_to_s on <var23:NativeArray[String]>*/
}
varonce = var23;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var41); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "Cast failed";
var46 = (val*)(11l<<2|1);
var47 = (val*)(11l<<2|1);
var48 = (val*)((long)(0)<<2|3);
var49 = (val*)((long)(0)<<2|3);
var45 = core__flat___CString___to_s_unsafe(var44, var46, var47, var48, var49);
var43 = var45;
varonce42 = var43;
}
{
nitc___nitc__AbstractCompilerVisitor___add_abort(var_v, var43); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_abort on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = "}";
var54 = (val*)(1l<<2|1);
var55 = (val*)(1l<<2|1);
var56 = (val*)((long)(0)<<2|3);
var57 = (val*)((long)(0)<<2|3);
var53 = core__flat___CString___to_s_unsafe(var52, var54, var55, var56, var57);
var51 = var53;
varonce50 = var51;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var51); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
var = var_i;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AParExpr$expr for (self: AParExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AParExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes$AParExpr$n_expr (self) on <self:AParExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AParExpr___n_expr].val; /* _n_expr on <self:AParExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2656);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var1, ((val*)NULL));
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AOnceExpr$expr for (self: AOnceExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AOnceExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
val* var_mtype /* var mtype: MType */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : CString */;
val* var6 /* : String */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Int */;
val* var9 /* : nullable Bool */;
val* var10 /* : nullable Bool */;
val* var11 /* : String */;
val* var_name /* var name: String */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : CString */;
val* var15 /* : String */;
val* var16 /* : nullable Int */;
val* var17 /* : nullable Int */;
val* var18 /* : nullable Bool */;
val* var19 /* : nullable Bool */;
val* var20 /* : Text */;
val* var21 /* : String */;
val* var_guard /* var guard: String */;
val* var23 /* : NativeArray[String] */;
static val* varonce22;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : CString */;
val* var27 /* : String */;
val* var28 /* : nullable Int */;
val* var29 /* : nullable Int */;
val* var30 /* : nullable Bool */;
val* var31 /* : nullable Bool */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : CString */;
val* var35 /* : String */;
val* var36 /* : nullable Int */;
val* var37 /* : nullable Int */;
val* var38 /* : nullable Bool */;
val* var39 /* : nullable Bool */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : CString */;
val* var43 /* : String */;
val* var44 /* : nullable Int */;
val* var45 /* : nullable Int */;
val* var46 /* : nullable Bool */;
val* var47 /* : nullable Bool */;
val* var48 /* : String */;
val* var49 /* : String */;
val* var51 /* : NativeArray[String] */;
static val* varonce50;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : CString */;
val* var55 /* : String */;
val* var56 /* : nullable Int */;
val* var57 /* : nullable Int */;
val* var58 /* : nullable Bool */;
val* var59 /* : nullable Bool */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : CString */;
val* var63 /* : String */;
val* var64 /* : nullable Int */;
val* var65 /* : nullable Int */;
val* var66 /* : nullable Bool */;
val* var67 /* : nullable Bool */;
val* var68 /* : String */;
val* var69 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var71 /* : NativeArray[String] */;
static val* varonce70;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : CString */;
val* var75 /* : String */;
val* var76 /* : nullable Int */;
val* var77 /* : nullable Int */;
val* var78 /* : nullable Bool */;
val* var79 /* : nullable Bool */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : CString */;
val* var83 /* : String */;
val* var84 /* : nullable Int */;
val* var85 /* : nullable Int */;
val* var86 /* : nullable Bool */;
val* var87 /* : nullable Bool */;
val* var88 /* : String */;
val* var90 /* : NativeArray[String] */;
static val* varonce89;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : CString */;
val* var94 /* : String */;
val* var95 /* : nullable Int */;
val* var96 /* : nullable Int */;
val* var97 /* : nullable Bool */;
val* var98 /* : nullable Bool */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : CString */;
val* var102 /* : String */;
val* var103 /* : nullable Int */;
val* var104 /* : nullable Int */;
val* var105 /* : nullable Bool */;
val* var106 /* : nullable Bool */;
val* var107 /* : String */;
val* var108 /* : String */;
static val* varonce109;
val* var110 /* : String */;
char* var111 /* : CString */;
val* var112 /* : String */;
val* var113 /* : nullable Int */;
val* var114 /* : nullable Int */;
val* var115 /* : nullable Bool */;
val* var116 /* : nullable Bool */;
val* var117 /* : AExpr */;
val* var119 /* : AExpr */;
val* var120 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var122 /* : NativeArray[String] */;
static val* varonce121;
static val* varonce123;
val* var124 /* : String */;
char* var125 /* : CString */;
val* var126 /* : String */;
val* var127 /* : nullable Int */;
val* var128 /* : nullable Int */;
val* var129 /* : nullable Bool */;
val* var130 /* : nullable Bool */;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : CString */;
val* var134 /* : String */;
val* var135 /* : nullable Int */;
val* var136 /* : nullable Int */;
val* var137 /* : nullable Bool */;
val* var138 /* : nullable Bool */;
val* var139 /* : String */;
val* var140 /* : String */;
val* var141 /* : String */;
val* var143 /* : NativeArray[String] */;
static val* varonce142;
static val* varonce144;
val* var145 /* : String */;
char* var146 /* : CString */;
val* var147 /* : String */;
val* var148 /* : nullable Int */;
val* var149 /* : nullable Int */;
val* var150 /* : nullable Bool */;
val* var151 /* : nullable Bool */;
static val* varonce152;
val* var153 /* : String */;
char* var154 /* : CString */;
val* var155 /* : String */;
val* var156 /* : nullable Int */;
val* var157 /* : nullable Int */;
val* var158 /* : nullable Bool */;
val* var159 /* : nullable Bool */;
val* var160 /* : String */;
val* var161 /* : String */;
val* var163 /* : NativeArray[String] */;
static val* varonce162;
static val* varonce164;
val* var165 /* : String */;
char* var166 /* : CString */;
val* var167 /* : String */;
val* var168 /* : nullable Int */;
val* var169 /* : nullable Int */;
val* var170 /* : nullable Bool */;
val* var171 /* : nullable Bool */;
val* var172 /* : String */;
static val* varonce173;
val* var174 /* : String */;
char* var175 /* : CString */;
val* var176 /* : String */;
val* var177 /* : nullable Int */;
val* var178 /* : nullable Int */;
val* var179 /* : nullable Bool */;
val* var180 /* : nullable Bool */;
var_v = p0;
{
{ /* Inline typing$AExpr$mtype (self) on <self:AOnceExpr> */
var3 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:AOnceExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3910);
fatal_exit(1);
}
var_mtype = var1;
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "varonce";
var7 = (val*)(7l<<2|1);
var8 = (val*)(7l<<2|1);
var9 = (val*)((long)(0)<<2|3);
var10 = (val*)((long)(0)<<2|3);
var6 = core__flat___CString___to_s_unsafe(var5, var7, var8, var9, var10);
var4 = var6;
varonce = var4;
}
{
var11 = nitc___nitc__AbstractCompilerVisitor___get_name(var_v, var4);
}
var_name = var11;
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "_guard";
var16 = (val*)(6l<<2|1);
var17 = (val*)(6l<<2|1);
var18 = (val*)((long)(0)<<2|3);
var19 = (val*)((long)(0)<<2|3);
var15 = core__flat___CString___to_s_unsafe(var14, var16, var17, var18, var19);
var13 = var15;
varonce12 = var13;
}
{
var20 = ((val*(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__abstract_text__Text___43d]))(var_name, var13); /* + on <var_name:String>*/
}
{
var21 = nitc___nitc__AbstractCompilerVisitor___get_name(var_v, var20);
}
var_guard = var21;
if (unlikely(varonce22==NULL)) {
var23 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "static ";
var28 = (val*)(7l<<2|1);
var29 = (val*)(7l<<2|1);
var30 = (val*)((long)(0)<<2|3);
var31 = (val*)((long)(0)<<2|3);
var27 = core__flat___CString___to_s_unsafe(var26, var28, var29, var30, var31);
var25 = var27;
varonce24 = var25;
}
((struct instance_core__NativeArray*)var23)->values[0]=var25;
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = " ";
var36 = (val*)(1l<<2|1);
var37 = (val*)(1l<<2|1);
var38 = (val*)((long)(0)<<2|3);
var39 = (val*)((long)(0)<<2|3);
var35 = core__flat___CString___to_s_unsafe(var34, var36, var37, var38, var39);
var33 = var35;
varonce32 = var33;
}
((struct instance_core__NativeArray*)var23)->values[2]=var33;
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = ";";
var44 = (val*)(1l<<2|1);
var45 = (val*)(1l<<2|1);
var46 = (val*)((long)(0)<<2|3);
var47 = (val*)((long)(0)<<2|3);
var43 = core__flat___CString___to_s_unsafe(var42, var44, var45, var46, var47);
var41 = var43;
varonce40 = var41;
}
((struct instance_core__NativeArray*)var23)->values[4]=var41;
} else {
var23 = varonce22;
varonce22 = NULL;
}
{
var48 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var_mtype); /* ctype on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var23)->values[1]=var48;
((struct instance_core__NativeArray*)var23)->values[3]=var_name;
{
var49 = ((val*(*)(val* self))(var23->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var23); /* native_to_s on <var23:NativeArray[String]>*/
}
varonce22 = var23;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var49); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce50==NULL)) {
var51 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = "static int ";
var56 = (val*)(11l<<2|1);
var57 = (val*)(11l<<2|1);
var58 = (val*)((long)(0)<<2|3);
var59 = (val*)((long)(0)<<2|3);
var55 = core__flat___CString___to_s_unsafe(var54, var56, var57, var58, var59);
var53 = var55;
varonce52 = var53;
}
((struct instance_core__NativeArray*)var51)->values[0]=var53;
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = ";";
var64 = (val*)(1l<<2|1);
var65 = (val*)(1l<<2|1);
var66 = (val*)((long)(0)<<2|3);
var67 = (val*)((long)(0)<<2|3);
var63 = core__flat___CString___to_s_unsafe(var62, var64, var65, var66, var67);
var61 = var63;
varonce60 = var61;
}
((struct instance_core__NativeArray*)var51)->values[2]=var61;
} else {
var51 = varonce50;
varonce50 = NULL;
}
((struct instance_core__NativeArray*)var51)->values[1]=var_guard;
{
var68 = ((val*(*)(val* self))(var51->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var51); /* native_to_s on <var51:NativeArray[String]>*/
}
varonce50 = var51;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var68); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
var69 = nitc___nitc__AbstractCompilerVisitor___new_var(var_v, var_mtype);
}
var_res = var69;
if (unlikely(varonce70==NULL)) {
var71 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce72!=NULL)) {
var73 = varonce72;
} else {
var74 = "if (likely(";
var76 = (val*)(11l<<2|1);
var77 = (val*)(11l<<2|1);
var78 = (val*)((long)(0)<<2|3);
var79 = (val*)((long)(0)<<2|3);
var75 = core__flat___CString___to_s_unsafe(var74, var76, var77, var78, var79);
var73 = var75;
varonce72 = var73;
}
((struct instance_core__NativeArray*)var71)->values[0]=var73;
if (likely(varonce80!=NULL)) {
var81 = varonce80;
} else {
var82 = ")) {";
var84 = (val*)(4l<<2|1);
var85 = (val*)(4l<<2|1);
var86 = (val*)((long)(0)<<2|3);
var87 = (val*)((long)(0)<<2|3);
var83 = core__flat___CString___to_s_unsafe(var82, var84, var85, var86, var87);
var81 = var83;
varonce80 = var81;
}
((struct instance_core__NativeArray*)var71)->values[2]=var81;
} else {
var71 = varonce70;
varonce70 = NULL;
}
((struct instance_core__NativeArray*)var71)->values[1]=var_guard;
{
var88 = ((val*(*)(val* self))(var71->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var71); /* native_to_s on <var71:NativeArray[String]>*/
}
varonce70 = var71;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var88); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce89==NULL)) {
var90 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce91!=NULL)) {
var92 = varonce91;
} else {
var93 = " = ";
var95 = (val*)(3l<<2|1);
var96 = (val*)(3l<<2|1);
var97 = (val*)((long)(0)<<2|3);
var98 = (val*)((long)(0)<<2|3);
var94 = core__flat___CString___to_s_unsafe(var93, var95, var96, var97, var98);
var92 = var94;
varonce91 = var92;
}
((struct instance_core__NativeArray*)var90)->values[1]=var92;
if (likely(varonce99!=NULL)) {
var100 = varonce99;
} else {
var101 = ";";
var103 = (val*)(1l<<2|1);
var104 = (val*)(1l<<2|1);
var105 = (val*)((long)(0)<<2|3);
var106 = (val*)((long)(0)<<2|3);
var102 = core__flat___CString___to_s_unsafe(var101, var103, var104, var105, var106);
var100 = var102;
varonce99 = var100;
}
((struct instance_core__NativeArray*)var90)->values[3]=var100;
} else {
var90 = varonce89;
varonce89 = NULL;
}
{
var107 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var90)->values[0]=var107;
((struct instance_core__NativeArray*)var90)->values[2]=var_name;
{
var108 = ((val*(*)(val* self))(var90->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var90); /* native_to_s on <var90:NativeArray[String]>*/
}
varonce89 = var90;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var108); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce109!=NULL)) {
var110 = varonce109;
} else {
var111 = "} else {";
var113 = (val*)(8l<<2|1);
var114 = (val*)(8l<<2|1);
var115 = (val*)((long)(0)<<2|3);
var116 = (val*)((long)(0)<<2|3);
var112 = core__flat___CString___to_s_unsafe(var111, var113, var114, var115, var116);
var110 = var112;
varonce109 = var110;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var110); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes$AOnceExpr$n_expr (self) on <self:AOnceExpr> */
var119 = self->attrs[COLOR_nitc__parser_nodes__AOnceExpr___n_expr].val; /* _n_expr on <self:AOnceExpr> */
if (unlikely(var119 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2095);
fatal_exit(1);
}
var117 = var119;
RET_LABEL118:(void)0;
}
}
{
var120 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var117, var_mtype);
}
var_i = var120;
if (unlikely(varonce121==NULL)) {
var122 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce123!=NULL)) {
var124 = varonce123;
} else {
var125 = " = ";
var127 = (val*)(3l<<2|1);
var128 = (val*)(3l<<2|1);
var129 = (val*)((long)(0)<<2|3);
var130 = (val*)((long)(0)<<2|3);
var126 = core__flat___CString___to_s_unsafe(var125, var127, var128, var129, var130);
var124 = var126;
varonce123 = var124;
}
((struct instance_core__NativeArray*)var122)->values[1]=var124;
if (likely(varonce131!=NULL)) {
var132 = varonce131;
} else {
var133 = ";";
var135 = (val*)(1l<<2|1);
var136 = (val*)(1l<<2|1);
var137 = (val*)((long)(0)<<2|3);
var138 = (val*)((long)(0)<<2|3);
var134 = core__flat___CString___to_s_unsafe(var133, var135, var136, var137, var138);
var132 = var134;
varonce131 = var132;
}
((struct instance_core__NativeArray*)var122)->values[3]=var132;
} else {
var122 = varonce121;
varonce121 = NULL;
}
{
var139 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var122)->values[0]=var139;
{
var140 = ((val*(*)(val* self))(var_i->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_i); /* to_s on <var_i:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var122)->values[2]=var140;
{
var141 = ((val*(*)(val* self))(var122->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var122); /* native_to_s on <var122:NativeArray[String]>*/
}
varonce121 = var122;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var141); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce142==NULL)) {
var143 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce144!=NULL)) {
var145 = varonce144;
} else {
var146 = " = ";
var148 = (val*)(3l<<2|1);
var149 = (val*)(3l<<2|1);
var150 = (val*)((long)(0)<<2|3);
var151 = (val*)((long)(0)<<2|3);
var147 = core__flat___CString___to_s_unsafe(var146, var148, var149, var150, var151);
var145 = var147;
varonce144 = var145;
}
((struct instance_core__NativeArray*)var143)->values[1]=var145;
if (likely(varonce152!=NULL)) {
var153 = varonce152;
} else {
var154 = ";";
var156 = (val*)(1l<<2|1);
var157 = (val*)(1l<<2|1);
var158 = (val*)((long)(0)<<2|3);
var159 = (val*)((long)(0)<<2|3);
var155 = core__flat___CString___to_s_unsafe(var154, var156, var157, var158, var159);
var153 = var155;
varonce152 = var153;
}
((struct instance_core__NativeArray*)var143)->values[3]=var153;
} else {
var143 = varonce142;
varonce142 = NULL;
}
((struct instance_core__NativeArray*)var143)->values[0]=var_name;
{
var160 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var143)->values[2]=var160;
{
var161 = ((val*(*)(val* self))(var143->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var143); /* native_to_s on <var143:NativeArray[String]>*/
}
varonce142 = var143;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var161); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce162==NULL)) {
var163 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce164!=NULL)) {
var165 = varonce164;
} else {
var166 = " = 1;";
var168 = (val*)(5l<<2|1);
var169 = (val*)(5l<<2|1);
var170 = (val*)((long)(0)<<2|3);
var171 = (val*)((long)(0)<<2|3);
var167 = core__flat___CString___to_s_unsafe(var166, var168, var169, var170, var171);
var165 = var167;
varonce164 = var165;
}
((struct instance_core__NativeArray*)var163)->values[1]=var165;
} else {
var163 = varonce162;
varonce162 = NULL;
}
((struct instance_core__NativeArray*)var163)->values[0]=var_guard;
{
var172 = ((val*(*)(val* self))(var163->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var163); /* native_to_s on <var163:NativeArray[String]>*/
}
varonce162 = var163;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var172); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce173!=NULL)) {
var174 = varonce173;
} else {
var175 = "}";
var177 = (val*)(1l<<2|1);
var178 = (val*)(1l<<2|1);
var179 = (val*)((long)(0)<<2|3);
var180 = (val*)((long)(0)<<2|3);
var176 = core__flat___CString___to_s_unsafe(var175, var177, var178, var179, var180);
var174 = var176;
varonce173 = var174;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var174); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$ASendExpr$expr for (self: ASendExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___ASendExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : RuntimeVariable */;
val* var_recv /* var recv: RuntimeVariable */;
val* var5 /* : nullable CallSite */;
val* var7 /* : nullable CallSite */;
val* var_callsite /* var callsite: CallSite */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : MMethodDef */;
val* var13 /* : MMethodDef */;
val* var14 /* : nullable SignatureMap */;
val* var16 /* : nullable SignatureMap */;
val* var17 /* : Array[AExpr] */;
val* var18 /* : Array[RuntimeVariable] */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var19 /* : nullable RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes$ASendExpr$n_expr (self) on <self:ASendExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASendExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2103);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var1, ((val*)NULL));
}
var_recv = var4;
{
{ /* Inline typing$ASendExpr$callsite (self) on <self:ASendExpr> */
var7 = self->attrs[COLOR_nitc__typing__ASendExpr___callsite].val; /* _callsite on <self:ASendExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3932);
fatal_exit(1);
}
var_callsite = var5;
{
{ /* Inline model_base$MEntity$is_broken (var_callsite) on <var_callsite:CallSite> */
var10 = var_callsite->attrs[COLOR_nitc__model_base__MEntity___is_broken].s; /* _is_broken on <var_callsite:CallSite> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
if (var8){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline typing$CallSite$mpropdef (var_callsite) on <var_callsite:CallSite> */
var13 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mpropdef].val; /* _mpropdef on <var_callsite:CallSite> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 659);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline typing$CallSite$signaturemap (var_callsite) on <var_callsite:CallSite> */
var16 = var_callsite->attrs[COLOR_nitc__typing__CallSite___signaturemap].val; /* _signaturemap on <var_callsite:CallSite> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = nitc__typing___ASendExpr___raw_arguments(self);
}
{
var18 = nitc___nitc__AbstractCompilerVisitor___varargize(var_v, var11, var14, var_recv, var17);
}
var_args = var18;
{
var19 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_callsite, var_args); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var = var19;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$ASendReassignFormExpr$stmt for (self: ASendReassignFormExpr, AbstractCompilerVisitor) */
void nitc__abstract_compiler___ASendReassignFormExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : RuntimeVariable */;
val* var_recv /* var recv: RuntimeVariable */;
val* var4 /* : nullable CallSite */;
val* var6 /* : nullable CallSite */;
val* var_callsite /* var callsite: CallSite */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : MMethodDef */;
val* var12 /* : MMethodDef */;
val* var13 /* : nullable SignatureMap */;
val* var15 /* : nullable SignatureMap */;
val* var16 /* : Array[AExpr] */;
val* var17 /* : Array[RuntimeVariable] */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var18 /* : AExpr */;
val* var20 /* : AExpr */;
val* var21 /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var22 /* : nullable RuntimeVariable */;
val* var_left /* var left: nullable RuntimeVariable */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : nullable CallSite */;
val* var30 /* : nullable CallSite */;
val* var31 /* : Array[RuntimeVariable] */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var32 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
val* var38 /* : nullable CallSite */;
val* var40 /* : nullable CallSite */;
val* var41 /* : nullable RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes$ASendExpr$n_expr (self) on <self:ASendReassignFormExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASendReassignFormExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2103);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var, ((val*)NULL));
}
var_recv = var3;
{
{ /* Inline typing$ASendExpr$callsite (self) on <self:ASendReassignFormExpr> */
var6 = self->attrs[COLOR_nitc__typing__ASendExpr___callsite].val; /* _callsite on <self:ASendReassignFormExpr> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3943);
fatal_exit(1);
}
var_callsite = var4;
{
{ /* Inline model_base$MEntity$is_broken (var_callsite) on <var_callsite:CallSite> */
var9 = var_callsite->attrs[COLOR_nitc__model_base__MEntity___is_broken].s; /* _is_broken on <var_callsite:CallSite> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (var7){
goto RET_LABEL;
} else {
}
{
{ /* Inline typing$CallSite$mpropdef (var_callsite) on <var_callsite:CallSite> */
var12 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mpropdef].val; /* _mpropdef on <var_callsite:CallSite> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 659);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline typing$CallSite$signaturemap (var_callsite) on <var_callsite:CallSite> */
var15 = var_callsite->attrs[COLOR_nitc__typing__CallSite___signaturemap].val; /* _signaturemap on <var_callsite:CallSite> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = nitc__typing___ASendExpr___raw_arguments(self);
}
{
var17 = nitc___nitc__AbstractCompilerVisitor___varargize(var_v, var10, var13, var_recv, var16);
}
var_args = var17;
{
{ /* Inline parser_nodes$AReassignFormExpr$n_value (self) on <self:ASendReassignFormExpr> */
var20 = self->attrs[COLOR_nitc__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:ASendReassignFormExpr> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2084);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var18, ((val*)NULL));
}
var_value = var21;
{
var22 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_callsite, var_args); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var_left = var22;
if (var_left == NULL) {
var23 = 0; /* is null */
} else {
var23 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_left,((val*)NULL)) on <var_left:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var26 = ((short int(*)(val* self, val* p0))(var_left->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_left, var_other); /* == on <var_left:nullable RuntimeVariable(RuntimeVariable)>*/
}
var27 = !var26;
var24 = var27;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
var23 = var24;
}
if (unlikely(!var23)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3950);
fatal_exit(1);
}
{
{ /* Inline typing$AReassignFormExpr$reassign_callsite (self) on <self:ASendReassignFormExpr> */
var30 = self->attrs[COLOR_nitc__typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:ASendReassignFormExpr> */
var28 = var30;
RET_LABEL29:(void)0;
}
}
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3952);
fatal_exit(1);
}
var31 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var31, 2l); /* Direct call array$Array$with_capacity on <var31:Array[RuntimeVariable]>*/
}
var_ = var31;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_left); /* Direct call array$AbstractArray$push on <var_:Array[RuntimeVariable]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_value); /* Direct call array$AbstractArray$push on <var_:Array[RuntimeVariable]>*/
}
{
var32 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var28, var_); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var_res = var32;
if (var_res == NULL) {
var33 = 0; /* is null */
} else {
var33 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_res,((val*)NULL)) on <var_res:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var36 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
var37 = !var36;
var34 = var37;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
var33 = var34;
}
if (unlikely(!var33)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3953);
fatal_exit(1);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_args, var_res); /* Direct call array$Array$add on <var_args:Array[RuntimeVariable]>*/
}
{
{ /* Inline typing$ASendReassignFormExpr$write_callsite (self) on <self:ASendReassignFormExpr> */
var40 = self->attrs[COLOR_nitc__typing__ASendReassignFormExpr___write_callsite].val; /* _write_callsite on <self:ASendReassignFormExpr> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
if (unlikely(var38 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3956);
fatal_exit(1);
}
{
var41 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var38, var_args); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler$ASuperExpr$expr for (self: ASuperExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___ASuperExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable StaticFrame */;
val* var3 /* : nullable StaticFrame */;
val* var_frame /* var frame: StaticFrame */;
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
short int var16 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : AExprs */;
val* var21 /* : AExprs */;
val* var22 /* : ANodes[AExpr] */;
val* var24 /* : ANodes[AExpr] */;
short int var25 /* : Bool */;
val* var26 /* : Array[RuntimeVariable] */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var_args /* var args: nullable Object */;
long var_i /* var i: Int */;
val* var27 /* : MSignature */;
val* var29 /* : MSignature */;
long var30 /* : Int */;
long var_31 /* var : Int */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var35 /* : Bool */;
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
val* var72 /* : Array[RuntimeVariable] */;
val* var74 /* : Array[RuntimeVariable] */;
val* var_args75 /* var args: nullable Object */;
val* var76 /* : nullable SignatureMap */;
val* var78 /* : nullable SignatureMap */;
val* var79 /* : AExprs */;
val* var81 /* : AExprs */;
val* var82 /* : ANodes[AExpr] */;
val* var84 /* : ANodes[AExpr] */;
val* var85 /* : Array[RuntimeVariable] */;
val* var86 /* : MType */;
val* var88 /* : MType */;
short int var89 /* : Bool */;
int cltype90;
int idtype91;
const char* var_class_name92;
val* var93 /* : nullable RuntimeVariable */;
var_v = p0;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (var_v) on <var_v:AbstractCompilerVisitor> */
var3 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3963);
fatal_exit(1);
}
var_frame = var1;
{
{ /* Inline abstract_compiler$StaticFrame$arguments (var_frame) on <var_frame:StaticFrame> */
var6 = var_frame->attrs[COLOR_nitc__abstract_compiler__StaticFrame___arguments].val; /* _arguments on <var_frame:StaticFrame> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2034);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = core___core__SequenceRead___Collection__first(var4);
}
var_recv = var7;
{
{ /* Inline typing$ASuperExpr$callsite (self) on <self:ASuperExpr> */
var10 = self->attrs[COLOR_nitc__typing__ASuperExpr___callsite].val; /* _callsite on <self:ASuperExpr> */
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
{ /* Inline kernel$Object$!= (var_callsite,((val*)NULL)) on <var_callsite:nullable CallSite> */
var_other = ((val*)NULL);
{
var14 = ((short int(*)(val* self, val* p0))(var_callsite->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_callsite, var_other); /* == on <var_callsite:nullable CallSite(CallSite)>*/
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
{ /* Inline model_base$MEntity$is_broken (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var18 = var_callsite->attrs[COLOR_nitc__model_base__MEntity___is_broken].s; /* _is_broken on <var_callsite:nullable CallSite(CallSite)> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
if (var16){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes$ASuperExpr$n_args (self) on <self:ASuperExpr> */
var21 = self->attrs[COLOR_nitc__parser_nodes__ASuperExpr___n_args].val; /* _n_args on <self:ASuperExpr> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2429);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline parser_nodes$AExprs$n_exprs (var19) on <var19:AExprs> */
var24 = var19->attrs[COLOR_nitc__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var19:AExprs> */
if (unlikely(var24 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2790);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
var25 = nitc___nitc__ANodes___core__abstract_collection__Collection__is_empty(var22);
}
if (var25){
var26 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var26, 1l); /* Direct call array$Array$with_capacity on <var26:Array[RuntimeVariable]>*/
}
var_ = var26;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_recv); /* Direct call array$AbstractArray$push on <var_:Array[RuntimeVariable]>*/
}
var_args = var_;
var_i = 0l;
{
{ /* Inline typing$CallSite$msignature (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var29 = var_callsite->attrs[COLOR_nitc__typing__CallSite___msignature].val; /* _msignature on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 663);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
var30 = nitc___nitc__MSignature___arity(var27);
}
var_31 = var30;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_31) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_31:Int> isa OTHER */
/* <var_31:Int> isa OTHER */
var34 = 1; /* easy <var_31:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var35 = var_i < var_31;
var32 = var35;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
if (var32){
} else {
goto BREAK_label;
}
{
{ /* Inline abstract_compiler$StaticFrame$arguments (var_frame) on <var_frame:StaticFrame> */
var38 = var_frame->attrs[COLOR_nitc__abstract_compiler__StaticFrame___arguments].val; /* _arguments on <var_frame:StaticFrame> */
if (unlikely(var38 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2034);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var41 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var41)) {
var_class_name44 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name44);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var45 = var_i + 1l;
var39 = var45;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
{
var46 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var36, var39);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_args, var46); /* Direct call array$Array$add on <var_args:nullable Object(Array[RuntimeVariable])>*/
}
{
var47 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var47;
}
BREAK_label: (void)0;
} else {
{
{ /* Inline typing$CallSite$mpropdef (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var50 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mpropdef].val; /* _mpropdef on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var50 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 659);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
{ /* Inline typing$CallSite$signaturemap (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var53 = var_callsite->attrs[COLOR_nitc__typing__CallSite___signaturemap].val; /* _signaturemap on <var_callsite:nullable CallSite(CallSite)> */
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline parser_nodes$ASuperExpr$n_args (self) on <self:ASuperExpr> */
var56 = self->attrs[COLOR_nitc__parser_nodes__ASuperExpr___n_args].val; /* _n_args on <self:ASuperExpr> */
if (unlikely(var56 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2429);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline parser_nodes$AExprs$n_exprs (var54) on <var54:AExprs> */
var59 = var54->attrs[COLOR_nitc__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var54:AExprs> */
if (unlikely(var59 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2790);
fatal_exit(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
var60 = nitc___nitc__AbstractCompilerVisitor___varargize(var_v, var48, var51, var_recv, var57);
}
var_args = var60;
}
{
var61 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_callsite, var_args); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var_res = var61;
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline typing$ASuperExpr$mpropdef (self) on <self:ASuperExpr> */
var64 = self->attrs[COLOR_nitc__typing__ASuperExpr___mpropdef].val; /* _mpropdef on <self:ASuperExpr> */
var62 = var64;
RET_LABEL63:(void)0;
}
}
if (unlikely(var62 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3986);
fatal_exit(1);
}
var_mpropdef = var62;
{
{ /* Inline parser_nodes$ASuperExpr$n_args (self) on <self:ASuperExpr> */
var67 = self->attrs[COLOR_nitc__parser_nodes__ASuperExpr___n_args].val; /* _n_args on <self:ASuperExpr> */
if (unlikely(var67 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2429);
fatal_exit(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
{ /* Inline parser_nodes$AExprs$n_exprs (var65) on <var65:AExprs> */
var70 = var65->attrs[COLOR_nitc__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var65:AExprs> */
if (unlikely(var70 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2790);
fatal_exit(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
var71 = nitc___nitc__ANodes___core__abstract_collection__Collection__is_empty(var68);
}
if (var71){
{
{ /* Inline abstract_compiler$StaticFrame$arguments (var_frame) on <var_frame:StaticFrame> */
var74 = var_frame->attrs[COLOR_nitc__abstract_compiler__StaticFrame___arguments].val; /* _arguments on <var_frame:StaticFrame> */
if (unlikely(var74 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2034);
fatal_exit(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
var_args75 = var72;
} else {
{
{ /* Inline typing$ASuperExpr$signaturemap (self) on <self:ASuperExpr> */
var78 = self->attrs[COLOR_nitc__typing__ASuperExpr___signaturemap].val; /* _signaturemap on <self:ASuperExpr> */
var76 = var78;
RET_LABEL77:(void)0;
}
}
{
{ /* Inline parser_nodes$ASuperExpr$n_args (self) on <self:ASuperExpr> */
var81 = self->attrs[COLOR_nitc__parser_nodes__ASuperExpr___n_args].val; /* _n_args on <self:ASuperExpr> */
if (unlikely(var81 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2429);
fatal_exit(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
{
{ /* Inline parser_nodes$AExprs$n_exprs (var79) on <var79:AExprs> */
var84 = var79->attrs[COLOR_nitc__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var79:AExprs> */
if (unlikely(var84 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2790);
fatal_exit(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
var85 = nitc___nitc__AbstractCompilerVisitor___varargize(var_v, var_mpropdef, var76, var_recv, var82);
}
var_args75 = var85;
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_recv) on <var_recv:RuntimeVariable> */
var88 = var_recv->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_recv:RuntimeVariable> */
if (unlikely(var88 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var86 = var88;
RET_LABEL87:(void)0;
}
}
/* <var86:MType> isa MClassType */
cltype90 = type_nitc__MClassType.color;
idtype91 = type_nitc__MClassType.id;
if(cltype90 >= var86->type->table_size) {
var89 = 0;
} else {
var89 = var86->type->type_table[cltype90] == idtype91;
}
if (unlikely(!var89)) {
var_class_name92 = var86 == NULL ? "null" : var86->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name92);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3996);
fatal_exit(1);
}
{
var93 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__supercall(var_v, var_mpropdef, var86, var_args75);
}
var = var93;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$ANewExpr$expr for (self: ANewExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___ANewExpr___AExpr__expr(val* self, val* p0) {
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
char* var16 /* : CString */;
val* var17 /* : String */;
val* var18 /* : nullable Int */;
val* var19 /* : nullable Int */;
val* var20 /* : nullable Bool */;
val* var21 /* : nullable Bool */;
short int var22 /* : Bool */;
val* var23 /* : AExprs */;
val* var25 /* : AExprs */;
val* var26 /* : ANodes[AExpr] */;
val* var28 /* : ANodes[AExpr] */;
long var29 /* : Int */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : AExprs */;
val* var35 /* : AExprs */;
val* var36 /* : ANodes[AExpr] */;
val* var38 /* : ANodes[AExpr] */;
val* var39 /* : nullable Object */;
val* var40 /* : RuntimeVariable */;
val* var_l /* var l: RuntimeVariable */;
short int var41 /* : Bool */;
int cltype;
int idtype;
val* var42 /* : Array[MType] */;
val* var44 /* : Array[MType] */;
val* var45 /* : nullable Object */;
val* var_elttype /* var elttype: MType */;
val* var46 /* : RuntimeVariable */;
val* var47 /* : nullable CallSite */;
val* var49 /* : nullable CallSite */;
val* var_callsite /* var callsite: nullable CallSite */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
val* var_other53 /* var other: nullable Object */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
val* var57 /* : RuntimeVariable */;
short int var58 /* : Bool */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
val* var62 /* : MMethod */;
val* var64 /* : MMethod */;
short int var65 /* : Bool */;
short int var67 /* : Bool */;
short int var_ /* var : Bool */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : CString */;
val* var73 /* : String */;
val* var74 /* : nullable Int */;
val* var75 /* : nullable Int */;
val* var76 /* : nullable Bool */;
val* var77 /* : nullable Bool */;
val* var78 /* : String */;
val* var_name /* var name: String */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : CString */;
val* var82 /* : String */;
val* var83 /* : nullable Int */;
val* var84 /* : nullable Int */;
val* var85 /* : nullable Bool */;
val* var86 /* : nullable Bool */;
val* var87 /* : Text */;
val* var88 /* : String */;
val* var_guard /* var guard: String */;
val* var90 /* : NativeArray[String] */;
static val* varonce89;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : CString */;
val* var94 /* : String */;
val* var95 /* : nullable Int */;
val* var96 /* : nullable Int */;
val* var97 /* : nullable Bool */;
val* var98 /* : nullable Bool */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : CString */;
val* var102 /* : String */;
val* var103 /* : nullable Int */;
val* var104 /* : nullable Int */;
val* var105 /* : nullable Bool */;
val* var106 /* : nullable Bool */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : CString */;
val* var110 /* : String */;
val* var111 /* : nullable Int */;
val* var112 /* : nullable Int */;
val* var113 /* : nullable Bool */;
val* var114 /* : nullable Bool */;
val* var115 /* : String */;
val* var116 /* : String */;
val* var118 /* : NativeArray[String] */;
static val* varonce117;
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : CString */;
val* var122 /* : String */;
val* var123 /* : nullable Int */;
val* var124 /* : nullable Int */;
val* var125 /* : nullable Bool */;
val* var126 /* : nullable Bool */;
static val* varonce127;
val* var128 /* : String */;
char* var129 /* : CString */;
val* var130 /* : String */;
val* var131 /* : nullable Int */;
val* var132 /* : nullable Int */;
val* var133 /* : nullable Bool */;
val* var134 /* : nullable Bool */;
val* var135 /* : String */;
val* var136 /* : RuntimeVariable */;
val* var_recv /* var recv: nullable Object */;
val* var138 /* : NativeArray[String] */;
static val* varonce137;
static val* varonce139;
val* var140 /* : String */;
char* var141 /* : CString */;
val* var142 /* : String */;
val* var143 /* : nullable Int */;
val* var144 /* : nullable Int */;
val* var145 /* : nullable Bool */;
val* var146 /* : nullable Bool */;
static val* varonce147;
val* var148 /* : String */;
char* var149 /* : CString */;
val* var150 /* : String */;
val* var151 /* : nullable Int */;
val* var152 /* : nullable Int */;
val* var153 /* : nullable Bool */;
val* var154 /* : nullable Bool */;
val* var155 /* : String */;
val* var157 /* : NativeArray[String] */;
static val* varonce156;
static val* varonce158;
val* var159 /* : String */;
char* var160 /* : CString */;
val* var161 /* : String */;
val* var162 /* : nullable Int */;
val* var163 /* : nullable Int */;
val* var164 /* : nullable Bool */;
val* var165 /* : nullable Bool */;
static val* varonce166;
val* var167 /* : String */;
char* var168 /* : CString */;
val* var169 /* : String */;
val* var170 /* : nullable Int */;
val* var171 /* : nullable Int */;
val* var172 /* : nullable Bool */;
val* var173 /* : nullable Bool */;
val* var174 /* : String */;
val* var175 /* : String */;
static val* varonce176;
val* var177 /* : String */;
char* var178 /* : CString */;
val* var179 /* : String */;
val* var180 /* : nullable Int */;
val* var181 /* : nullable Int */;
val* var182 /* : nullable Bool */;
val* var183 /* : nullable Bool */;
val* var184 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var186 /* : NativeArray[String] */;
static val* varonce185;
static val* varonce187;
val* var188 /* : String */;
char* var189 /* : CString */;
val* var190 /* : String */;
val* var191 /* : nullable Int */;
val* var192 /* : nullable Int */;
val* var193 /* : nullable Bool */;
val* var194 /* : nullable Bool */;
static val* varonce195;
val* var196 /* : String */;
char* var197 /* : CString */;
val* var198 /* : String */;
val* var199 /* : nullable Int */;
val* var200 /* : nullable Int */;
val* var201 /* : nullable Bool */;
val* var202 /* : nullable Bool */;
val* var203 /* : String */;
val* var204 /* : String */;
val* var205 /* : String */;
val* var207 /* : NativeArray[String] */;
static val* varonce206;
static val* varonce208;
val* var209 /* : String */;
char* var210 /* : CString */;
val* var211 /* : String */;
val* var212 /* : nullable Int */;
val* var213 /* : nullable Int */;
val* var214 /* : nullable Bool */;
val* var215 /* : nullable Bool */;
static val* varonce216;
val* var217 /* : String */;
char* var218 /* : CString */;
val* var219 /* : String */;
val* var220 /* : nullable Int */;
val* var221 /* : nullable Int */;
val* var222 /* : nullable Bool */;
val* var223 /* : nullable Bool */;
val* var224 /* : String */;
val* var225 /* : String */;
val* var227 /* : NativeArray[String] */;
static val* varonce226;
static val* varonce228;
val* var229 /* : String */;
char* var230 /* : CString */;
val* var231 /* : String */;
val* var232 /* : nullable Int */;
val* var233 /* : nullable Int */;
val* var234 /* : nullable Bool */;
val* var235 /* : nullable Bool */;
val* var236 /* : String */;
static val* varonce237;
val* var238 /* : String */;
char* var239 /* : CString */;
val* var240 /* : String */;
val* var241 /* : nullable Int */;
val* var242 /* : nullable Int */;
val* var243 /* : nullable Bool */;
val* var244 /* : nullable Bool */;
val* var245 /* : RuntimeVariable */;
val* var246 /* : MMethodDef */;
val* var248 /* : MMethodDef */;
val* var249 /* : nullable SignatureMap */;
val* var251 /* : nullable SignatureMap */;
val* var252 /* : AExprs */;
val* var254 /* : AExprs */;
val* var255 /* : ANodes[AExpr] */;
val* var257 /* : ANodes[AExpr] */;
val* var258 /* : Array[RuntimeVariable] */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var259 /* : nullable RuntimeVariable */;
val* var_res2 /* var res2: nullable RuntimeVariable */;
short int var260 /* : Bool */;
short int var261 /* : Bool */;
short int var263 /* : Bool */;
short int var264 /* : Bool */;
var_v = p0;
{
{ /* Inline typing$ANewExpr$recvtype (self) on <self:ANewExpr> */
var3 = self->attrs[COLOR_nitc__typing__ANewExpr___recvtype].val; /* _recvtype on <self:ANewExpr> */
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
{ /* Inline kernel$Object$!= (var_mtype,((val*)NULL)) on <var_mtype:nullable MClassType> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mtype, var_other); /* == on <var_mtype:nullable MClassType(MClassType)>*/
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (unlikely(!var4)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 4004);
fatal_exit(1);
}
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:nullable MClassType(MClassType)> */
var11 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:nullable MClassType(MClassType)> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline model$MClass$name (var9) on <var9:MClass> */
var14 = var9->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var9:MClass> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
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
var18 = (val*)(11l<<2|1);
var19 = (val*)(11l<<2|1);
var20 = (val*)((long)(0)<<2|3);
var21 = (val*)((long)(0)<<2|3);
var17 = core__flat___CString___to_s_unsafe(var16, var18, var19, var20, var21);
var15 = var17;
varonce = var15;
}
{
var22 = ((short int(*)(val* self, val* p0))(var12->class->vft[COLOR_core__kernel__Object___61d_61d]))(var12, var15); /* == on <var12:String>*/
}
if (var22){
{
{ /* Inline parser_nodes$ANewExpr$n_args (self) on <self:ANewExpr> */
var25 = self->attrs[COLOR_nitc__parser_nodes__ANewExpr___n_args].val; /* _n_args on <self:ANewExpr> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2346);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline parser_nodes$AExprs$n_exprs (var23) on <var23:AExprs> */
var28 = var23->attrs[COLOR_nitc__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var23:AExprs> */
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2790);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
var29 = nitc___nitc__ANodes___core__abstract_collection__Collection__length(var26);
}
{
{ /* Inline kernel$Int$== (var29,1l) on <var29:Int> */
var32 = var29 == 1l;
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
if (unlikely(!var30)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 4007);
fatal_exit(1);
}
{
{ /* Inline parser_nodes$ANewExpr$n_args (self) on <self:ANewExpr> */
var35 = self->attrs[COLOR_nitc__parser_nodes__ANewExpr___n_args].val; /* _n_args on <self:ANewExpr> */
if (unlikely(var35 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2346);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline parser_nodes$AExprs$n_exprs (var33) on <var33:AExprs> */
var38 = var33->attrs[COLOR_nitc__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var33:AExprs> */
if (unlikely(var38 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2790);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
var39 = core___core__SequenceRead___Collection__first(var36);
}
{
var40 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var39, ((val*)NULL));
}
var_l = var40;
/* <var_mtype:nullable MClassType(MClassType)> isa MGenericType */
cltype = type_nitc__MGenericType.color;
idtype = type_nitc__MGenericType.id;
if(cltype >= var_mtype->type->table_size) {
var41 = 0;
} else {
var41 = var_mtype->type->type_table[cltype] == idtype;
}
if (unlikely(!var41)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 4009);
fatal_exit(1);
}
{
{ /* Inline model$MGenericType$arguments (var_mtype) on <var_mtype:nullable MClassType(MGenericType)> */
var44 = var_mtype->attrs[COLOR_nitc__model__MGenericType___arguments].val; /* _arguments on <var_mtype:nullable MClassType(MGenericType)> */
if (unlikely(var44 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1305);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
var45 = core___core__SequenceRead___Collection__first(var42);
}
var_elttype = var45;
{
var46 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__native_array_instance]))(var_v, var_elttype, var_l); /* native_array_instance on <var_v:AbstractCompilerVisitor>*/
}
var = var46;
goto RET_LABEL;
} else {
}
{
{ /* Inline typing$ANewExpr$callsite (self) on <self:ANewExpr> */
var49 = self->attrs[COLOR_nitc__typing__ANewExpr___callsite].val; /* _callsite on <self:ANewExpr> */
var47 = var49;
RET_LABEL48:(void)0;
}
}
var_callsite = var47;
if (var_callsite == NULL) {
var50 = 1; /* is null */
} else {
var50 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_callsite,((val*)NULL)) on <var_callsite:nullable CallSite> */
var_other53 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_callsite,var_other53) on <var_callsite:nullable CallSite(CallSite)> */
var56 = var_callsite == var_other53;
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
var51 = var54;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
var50 = var51;
}
if (var50){
{
var57 = nitc___nitc__AbstractCompilerVisitor___init_instance_or_extern(var_v, var_mtype);
}
var = var57;
goto RET_LABEL;
} else {
}
{
{ /* Inline model_base$MEntity$is_broken (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var60 = var_callsite->attrs[COLOR_nitc__model_base__MEntity___is_broken].s; /* _is_broken on <var_callsite:nullable CallSite(CallSite)> */
var58 = var60;
RET_LABEL59:(void)0;
}
}
if (var58){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline typing$CallSite$mproperty (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var64 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var64 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 656);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
{ /* Inline model$MMethod$is_new (var62) on <var62:MMethod> */
var67 = var62->attrs[COLOR_nitc__model__MMethod___is_new].s; /* _is_new on <var62:MMethod> */
var65 = var67;
RET_LABEL66:(void)0;
}
}
var_ = var65;
if (var65){
{
var68 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:nullable MClassType(MClassType)>*/
}
var69 = !var68;
var61 = var69;
} else {
var61 = var_;
}
if (var61){
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = "varoncenew";
var74 = (val*)(10l<<2|1);
var75 = (val*)(10l<<2|1);
var76 = (val*)((long)(0)<<2|3);
var77 = (val*)((long)(0)<<2|3);
var73 = core__flat___CString___to_s_unsafe(var72, var74, var75, var76, var77);
var71 = var73;
varonce70 = var71;
}
{
var78 = nitc___nitc__AbstractCompilerVisitor___get_name(var_v, var71);
}
var_name = var78;
if (likely(varonce79!=NULL)) {
var80 = varonce79;
} else {
var81 = "_guard";
var83 = (val*)(6l<<2|1);
var84 = (val*)(6l<<2|1);
var85 = (val*)((long)(0)<<2|3);
var86 = (val*)((long)(0)<<2|3);
var82 = core__flat___CString___to_s_unsafe(var81, var83, var84, var85, var86);
var80 = var82;
varonce79 = var80;
}
{
var87 = ((val*(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__abstract_text__Text___43d]))(var_name, var80); /* + on <var_name:String>*/
}
{
var88 = nitc___nitc__AbstractCompilerVisitor___get_name(var_v, var87);
}
var_guard = var88;
if (unlikely(varonce89==NULL)) {
var90 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce91!=NULL)) {
var92 = varonce91;
} else {
var93 = "static ";
var95 = (val*)(7l<<2|1);
var96 = (val*)(7l<<2|1);
var97 = (val*)((long)(0)<<2|3);
var98 = (val*)((long)(0)<<2|3);
var94 = core__flat___CString___to_s_unsafe(var93, var95, var96, var97, var98);
var92 = var94;
varonce91 = var92;
}
((struct instance_core__NativeArray*)var90)->values[0]=var92;
if (likely(varonce99!=NULL)) {
var100 = varonce99;
} else {
var101 = " ";
var103 = (val*)(1l<<2|1);
var104 = (val*)(1l<<2|1);
var105 = (val*)((long)(0)<<2|3);
var106 = (val*)((long)(0)<<2|3);
var102 = core__flat___CString___to_s_unsafe(var101, var103, var104, var105, var106);
var100 = var102;
varonce99 = var100;
}
((struct instance_core__NativeArray*)var90)->values[2]=var100;
if (likely(varonce107!=NULL)) {
var108 = varonce107;
} else {
var109 = ";";
var111 = (val*)(1l<<2|1);
var112 = (val*)(1l<<2|1);
var113 = (val*)((long)(0)<<2|3);
var114 = (val*)((long)(0)<<2|3);
var110 = core__flat___CString___to_s_unsafe(var109, var111, var112, var113, var114);
var108 = var110;
varonce107 = var108;
}
((struct instance_core__NativeArray*)var90)->values[4]=var108;
} else {
var90 = varonce89;
varonce89 = NULL;
}
{
var115 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var90)->values[1]=var115;
((struct instance_core__NativeArray*)var90)->values[3]=var_name;
{
var116 = ((val*(*)(val* self))(var90->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var90); /* native_to_s on <var90:NativeArray[String]>*/
}
varonce89 = var90;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var116); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce117==NULL)) {
var118 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce119!=NULL)) {
var120 = varonce119;
} else {
var121 = "static int ";
var123 = (val*)(11l<<2|1);
var124 = (val*)(11l<<2|1);
var125 = (val*)((long)(0)<<2|3);
var126 = (val*)((long)(0)<<2|3);
var122 = core__flat___CString___to_s_unsafe(var121, var123, var124, var125, var126);
var120 = var122;
varonce119 = var120;
}
((struct instance_core__NativeArray*)var118)->values[0]=var120;
if (likely(varonce127!=NULL)) {
var128 = varonce127;
} else {
var129 = ";";
var131 = (val*)(1l<<2|1);
var132 = (val*)(1l<<2|1);
var133 = (val*)((long)(0)<<2|3);
var134 = (val*)((long)(0)<<2|3);
var130 = core__flat___CString___to_s_unsafe(var129, var131, var132, var133, var134);
var128 = var130;
varonce127 = var128;
}
((struct instance_core__NativeArray*)var118)->values[2]=var128;
} else {
var118 = varonce117;
varonce117 = NULL;
}
((struct instance_core__NativeArray*)var118)->values[1]=var_guard;
{
var135 = ((val*(*)(val* self))(var118->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var118); /* native_to_s on <var118:NativeArray[String]>*/
}
varonce117 = var118;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var135); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
var136 = nitc___nitc__AbstractCompilerVisitor___new_var(var_v, var_mtype);
}
var_recv = var136;
if (unlikely(varonce137==NULL)) {
var138 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce139!=NULL)) {
var140 = varonce139;
} else {
var141 = "if (likely(";
var143 = (val*)(11l<<2|1);
var144 = (val*)(11l<<2|1);
var145 = (val*)((long)(0)<<2|3);
var146 = (val*)((long)(0)<<2|3);
var142 = core__flat___CString___to_s_unsafe(var141, var143, var144, var145, var146);
var140 = var142;
varonce139 = var140;
}
((struct instance_core__NativeArray*)var138)->values[0]=var140;
if (likely(varonce147!=NULL)) {
var148 = varonce147;
} else {
var149 = ")) {";
var151 = (val*)(4l<<2|1);
var152 = (val*)(4l<<2|1);
var153 = (val*)((long)(0)<<2|3);
var154 = (val*)((long)(0)<<2|3);
var150 = core__flat___CString___to_s_unsafe(var149, var151, var152, var153, var154);
var148 = var150;
varonce147 = var148;
}
((struct instance_core__NativeArray*)var138)->values[2]=var148;
} else {
var138 = varonce137;
varonce137 = NULL;
}
((struct instance_core__NativeArray*)var138)->values[1]=var_guard;
{
var155 = ((val*(*)(val* self))(var138->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var138); /* native_to_s on <var138:NativeArray[String]>*/
}
varonce137 = var138;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var155); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce156==NULL)) {
var157 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce158!=NULL)) {
var159 = varonce158;
} else {
var160 = " = ";
var162 = (val*)(3l<<2|1);
var163 = (val*)(3l<<2|1);
var164 = (val*)((long)(0)<<2|3);
var165 = (val*)((long)(0)<<2|3);
var161 = core__flat___CString___to_s_unsafe(var160, var162, var163, var164, var165);
var159 = var161;
varonce158 = var159;
}
((struct instance_core__NativeArray*)var157)->values[1]=var159;
if (likely(varonce166!=NULL)) {
var167 = varonce166;
} else {
var168 = ";";
var170 = (val*)(1l<<2|1);
var171 = (val*)(1l<<2|1);
var172 = (val*)((long)(0)<<2|3);
var173 = (val*)((long)(0)<<2|3);
var169 = core__flat___CString___to_s_unsafe(var168, var170, var171, var172, var173);
var167 = var169;
varonce166 = var167;
}
((struct instance_core__NativeArray*)var157)->values[3]=var167;
} else {
var157 = varonce156;
varonce156 = NULL;
}
{
var174 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recv); /* to_s on <var_recv:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var157)->values[0]=var174;
((struct instance_core__NativeArray*)var157)->values[2]=var_name;
{
var175 = ((val*(*)(val* self))(var157->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var157); /* native_to_s on <var157:NativeArray[String]>*/
}
varonce156 = var157;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var175); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce176!=NULL)) {
var177 = varonce176;
} else {
var178 = "} else {";
var180 = (val*)(8l<<2|1);
var181 = (val*)(8l<<2|1);
var182 = (val*)((long)(0)<<2|3);
var183 = (val*)((long)(0)<<2|3);
var179 = core__flat___CString___to_s_unsafe(var178, var180, var181, var182, var183);
var177 = var179;
varonce176 = var177;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var177); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
var184 = nitc___nitc__AbstractCompilerVisitor___init_instance_or_extern(var_v, var_mtype);
}
var_i = var184;
if (unlikely(varonce185==NULL)) {
var186 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce187!=NULL)) {
var188 = varonce187;
} else {
var189 = " = ";
var191 = (val*)(3l<<2|1);
var192 = (val*)(3l<<2|1);
var193 = (val*)((long)(0)<<2|3);
var194 = (val*)((long)(0)<<2|3);
var190 = core__flat___CString___to_s_unsafe(var189, var191, var192, var193, var194);
var188 = var190;
varonce187 = var188;
}
((struct instance_core__NativeArray*)var186)->values[1]=var188;
if (likely(varonce195!=NULL)) {
var196 = varonce195;
} else {
var197 = ";";
var199 = (val*)(1l<<2|1);
var200 = (val*)(1l<<2|1);
var201 = (val*)((long)(0)<<2|3);
var202 = (val*)((long)(0)<<2|3);
var198 = core__flat___CString___to_s_unsafe(var197, var199, var200, var201, var202);
var196 = var198;
varonce195 = var196;
}
((struct instance_core__NativeArray*)var186)->values[3]=var196;
} else {
var186 = varonce185;
varonce185 = NULL;
}
{
var203 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recv); /* to_s on <var_recv:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var186)->values[0]=var203;
{
var204 = ((val*(*)(val* self))(var_i->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_i); /* to_s on <var_i:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var186)->values[2]=var204;
{
var205 = ((val*(*)(val* self))(var186->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var186); /* native_to_s on <var186:NativeArray[String]>*/
}
varonce185 = var186;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var205); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce206==NULL)) {
var207 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce208!=NULL)) {
var209 = varonce208;
} else {
var210 = " = ";
var212 = (val*)(3l<<2|1);
var213 = (val*)(3l<<2|1);
var214 = (val*)((long)(0)<<2|3);
var215 = (val*)((long)(0)<<2|3);
var211 = core__flat___CString___to_s_unsafe(var210, var212, var213, var214, var215);
var209 = var211;
varonce208 = var209;
}
((struct instance_core__NativeArray*)var207)->values[1]=var209;
if (likely(varonce216!=NULL)) {
var217 = varonce216;
} else {
var218 = ";";
var220 = (val*)(1l<<2|1);
var221 = (val*)(1l<<2|1);
var222 = (val*)((long)(0)<<2|3);
var223 = (val*)((long)(0)<<2|3);
var219 = core__flat___CString___to_s_unsafe(var218, var220, var221, var222, var223);
var217 = var219;
varonce216 = var217;
}
((struct instance_core__NativeArray*)var207)->values[3]=var217;
} else {
var207 = varonce206;
varonce206 = NULL;
}
((struct instance_core__NativeArray*)var207)->values[0]=var_name;
{
var224 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recv); /* to_s on <var_recv:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var207)->values[2]=var224;
{
var225 = ((val*(*)(val* self))(var207->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var207); /* native_to_s on <var207:NativeArray[String]>*/
}
varonce206 = var207;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var225); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce226==NULL)) {
var227 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce228!=NULL)) {
var229 = varonce228;
} else {
var230 = " = 1;";
var232 = (val*)(5l<<2|1);
var233 = (val*)(5l<<2|1);
var234 = (val*)((long)(0)<<2|3);
var235 = (val*)((long)(0)<<2|3);
var231 = core__flat___CString___to_s_unsafe(var230, var232, var233, var234, var235);
var229 = var231;
varonce228 = var229;
}
((struct instance_core__NativeArray*)var227)->values[1]=var229;
} else {
var227 = varonce226;
varonce226 = NULL;
}
((struct instance_core__NativeArray*)var227)->values[0]=var_guard;
{
var236 = ((val*(*)(val* self))(var227->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var227); /* native_to_s on <var227:NativeArray[String]>*/
}
varonce226 = var227;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var236); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce237!=NULL)) {
var238 = varonce237;
} else {
var239 = "}";
var241 = (val*)(1l<<2|1);
var242 = (val*)(1l<<2|1);
var243 = (val*)((long)(0)<<2|3);
var244 = (val*)((long)(0)<<2|3);
var240 = core__flat___CString___to_s_unsafe(var239, var241, var242, var243, var244);
var238 = var240;
varonce237 = var238;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var238); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
} else {
{
var245 = nitc___nitc__AbstractCompilerVisitor___init_instance_or_extern(var_v, var_mtype);
}
var_recv = var245;
}
{
{ /* Inline typing$CallSite$mpropdef (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var248 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mpropdef].val; /* _mpropdef on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var248 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 659);
fatal_exit(1);
}
var246 = var248;
RET_LABEL247:(void)0;
}
}
{
{ /* Inline typing$CallSite$signaturemap (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var251 = var_callsite->attrs[COLOR_nitc__typing__CallSite___signaturemap].val; /* _signaturemap on <var_callsite:nullable CallSite(CallSite)> */
var249 = var251;
RET_LABEL250:(void)0;
}
}
{
{ /* Inline parser_nodes$ANewExpr$n_args (self) on <self:ANewExpr> */
var254 = self->attrs[COLOR_nitc__parser_nodes__ANewExpr___n_args].val; /* _n_args on <self:ANewExpr> */
if (unlikely(var254 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2346);
fatal_exit(1);
}
var252 = var254;
RET_LABEL253:(void)0;
}
}
{
{ /* Inline parser_nodes$AExprs$n_exprs (var252) on <var252:AExprs> */
var257 = var252->attrs[COLOR_nitc__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var252:AExprs> */
if (unlikely(var257 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2790);
fatal_exit(1);
}
var255 = var257;
RET_LABEL256:(void)0;
}
}
{
var258 = nitc___nitc__AbstractCompilerVisitor___varargize(var_v, var246, var249, var_recv, var255);
}
var_args = var258;
{
var259 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_callsite, var_args); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var_res2 = var259;
if (var_res2 == NULL) {
var260 = 0; /* is null */
} else {
var260 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_res2,((val*)NULL)) on <var_res2:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var263 = ((short int(*)(val* self, val* p0))(var_res2->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res2, var_other); /* == on <var_res2:nullable RuntimeVariable(RuntimeVariable)>*/
}
var264 = !var263;
var261 = var264;
goto RET_LABEL262;
RET_LABEL262:(void)0;
}
var260 = var261;
}
if (var260){
var = var_res2;
goto RET_LABEL;
} else {
}
var = var_recv;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AAttrExpr$expr for (self: AAttrExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AAttrExpr___AExpr__expr(val* self, val* p0) {
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
{ /* Inline parser_nodes$AAttrFormExpr$n_expr (self) on <self:AAttrExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2354);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var1, ((val*)NULL));
}
var_recv = var4;
{
{ /* Inline typing$AAttrFormExpr$mproperty (self) on <self:AAttrExpr> */
var7 = self->attrs[COLOR_nitc__typing__AAttrFormExpr___mproperty].val; /* _mproperty on <self:AAttrExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 4058);
fatal_exit(1);
}
var_mproperty = var5;
{
var8 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__read_attribute(var_v, var_mproperty, var_recv);
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AAttrAssignExpr$expr for (self: AAttrAssignExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AAttrAssignExpr___AExpr__expr(val* self, val* p0) {
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
{ /* Inline parser_nodes$AAttrFormExpr$n_expr (self) on <self:AAttrAssignExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrAssignExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2354);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var1, ((val*)NULL));
}
var_recv = var4;
{
{ /* Inline parser_nodes$AAssignFormExpr$n_value (self) on <self:AAttrAssignExpr> */
var7 = self->attrs[COLOR_nitc__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AAttrAssignExpr> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2073);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var5, ((val*)NULL));
}
var_i = var8;
{
{ /* Inline typing$AAttrFormExpr$mproperty (self) on <self:AAttrAssignExpr> */
var11 = self->attrs[COLOR_nitc__typing__AAttrFormExpr___mproperty].val; /* _mproperty on <self:AAttrAssignExpr> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 4068);
fatal_exit(1);
}
var_mproperty = var9;
{
nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__write_attribute(var_v, var_mproperty, var_recv, var_i); /* Direct call separate_compiler$SeparateCompilerVisitor$write_attribute on <var_v:AbstractCompilerVisitor>*/
}
var = var_i;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AAttrReassignExpr$stmt for (self: AAttrReassignExpr, AbstractCompilerVisitor) */
void nitc__abstract_compiler___AAttrReassignExpr___AExpr__stmt(val* self, val* p0) {
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
{ /* Inline parser_nodes$AAttrFormExpr$n_expr (self) on <self:AAttrReassignExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrReassignExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2354);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var, ((val*)NULL));
}
var_recv = var3;
{
{ /* Inline parser_nodes$AReassignFormExpr$n_value (self) on <self:AAttrReassignExpr> */
var6 = self->attrs[COLOR_nitc__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AAttrReassignExpr> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2084);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var4, ((val*)NULL));
}
var_value = var7;
{
{ /* Inline typing$AAttrFormExpr$mproperty (self) on <self:AAttrReassignExpr> */
var10 = self->attrs[COLOR_nitc__typing__AAttrFormExpr___mproperty].val; /* _mproperty on <self:AAttrReassignExpr> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 4079);
fatal_exit(1);
}
var_mproperty = var8;
{
var11 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__read_attribute(var_v, var_mproperty, var_recv);
}
var_attr = var11;
{
{ /* Inline typing$AReassignFormExpr$reassign_callsite (self) on <self:AAttrReassignExpr> */
var14 = self->attrs[COLOR_nitc__typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:AAttrReassignExpr> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 4081);
fatal_exit(1);
}
var15 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var15, 2l); /* Direct call array$Array$with_capacity on <var15:Array[RuntimeVariable]>*/
}
var_ = var15;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_attr); /* Direct call array$AbstractArray$push on <var_:Array[RuntimeVariable]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_value); /* Direct call array$AbstractArray$push on <var_:Array[RuntimeVariable]>*/
}
{
var16 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var12, var_); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var_res = var16;
if (var_res == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_res,((val*)NULL)) on <var_res:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var20 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
var21 = !var20;
var18 = var21;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
var17 = var18;
}
if (unlikely(!var17)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 4082);
fatal_exit(1);
}
{
nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__write_attribute(var_v, var_mproperty, var_recv, var_res); /* Direct call separate_compiler$SeparateCompilerVisitor$write_attribute on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AIssetAttrExpr$expr for (self: AIssetAttrExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AIssetAttrExpr___AExpr__expr(val* self, val* p0) {
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
{ /* Inline parser_nodes$AAttrFormExpr$n_expr (self) on <self:AIssetAttrExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AIssetAttrExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2354);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var1, ((val*)NULL));
}
var_recv = var4;
{
{ /* Inline typing$AAttrFormExpr$mproperty (self) on <self:AIssetAttrExpr> */
var7 = self->attrs[COLOR_nitc__typing__AAttrFormExpr___mproperty].val; /* _mproperty on <self:AIssetAttrExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 4091);
fatal_exit(1);
}
var_mproperty = var5;
{
var8 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__isset_attribute(var_v, var_mproperty, var_recv);
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AVarargExpr$expr for (self: AVarargExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AVarargExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes$AVarargExpr$n_expr (self) on <self:AVarargExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AVarargExpr___n_expr].val; /* _n_expr on <self:AVarargExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2711);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var1, ((val*)NULL));
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$ANamedargExpr$expr for (self: ANamedargExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___ANamedargExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes$ANamedargExpr$n_expr (self) on <self:ANamedargExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ANamedargExpr___n_expr].val; /* _n_expr on <self:ANamedargExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2728);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var1, ((val*)NULL));
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$ADebugTypeExpr$stmt for (self: ADebugTypeExpr, AbstractCompilerVisitor) */
void nitc__abstract_compiler___ADebugTypeExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method abstract_compiler$MModule$properties for (self: MModule, MClass): Set[MProperty] */
val* nitc__abstract_compiler___MModule___properties(val* self, val* p0) {
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
val* var12 /* : IndexedIterator[nullable Object] */;
val* var_13 /* var : IndexedIterator[MClass] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_parent /* var parent: MClass */;
val* var16 /* : Set[MProperty] */;
val* var17 /* : Array[MClassDef] */;
val* var19 /* : Array[MClassDef] */;
val* var_20 /* var : Array[MClassDef] */;
val* var21 /* : IndexedIterator[nullable Object] */;
val* var_22 /* var : IndexedIterator[MClassDef] */;
short int var23 /* : Bool */;
val* var25 /* : nullable Object */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var26 /* : POSetElement[MModule] */;
val* var28 /* : POSetElement[MModule] */;
val* var29 /* : MModule */;
val* var31 /* : MModule */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
val* var35 /* : Array[MProperty] */;
val* var37 /* : Array[MProperty] */;
val* var_38 /* var : Array[MProperty] */;
val* var39 /* : IndexedIterator[nullable Object] */;
val* var_40 /* var : IndexedIterator[MProperty] */;
short int var41 /* : Bool */;
val* var43 /* : nullable Object */;
val* var_mprop /* var mprop: MProperty */;
val* var44 /* : Map[MClass, Set[MProperty]] */;
val* var46 /* : Map[MClass, Set[MProperty]] */;
val* var47 /* : Map[MClass, Set[MProperty]] */;
val* var49 /* : Map[MClass, Set[MProperty]] */;
val* var50 /* : nullable Object */;
var_mclass = p0;
{
{ /* Inline abstract_compiler$MModule$properties_cache (self) on <self:MModule> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__MModule___properties_cache].val; /* _properties_cache on <self:MModule> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _properties_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 4150);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((short int(*)(val* self, val* p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__MapRead__has_key]))(var1, var_mclass); /* has_key on <var1:Map[MClass, Set[MProperty]]>*/
}
var5 = !var4;
if (var5){
var6 = NEW_core__HashSet(&type_core__HashSet__nitc__MProperty);
{
core___core__HashSet___core__kernel__Object__init(var6); /* Direct call hash_collection$HashSet$init on <var6:HashSet[MProperty]>*/
}
var_properties = var6;
var7 = NEW_core__Array(&type_core__Array__nitc__MClass);
{
core___core__Array___core__kernel__Object__init(var7); /* Direct call array$Array$init on <var7:Array[MClass]>*/
}
var_parents = var7;
{
var8 = nitc__model___MModule___flatten_mclass_hierarchy(self);
}
{
var9 = poset___poset__POSet___core__abstract_collection__Collection__has(var8, var_mclass);
}
if (var9){
{
var10 = nitc___nitc__MClass___in_hierarchy(var_mclass, self);
}
{
var11 = poset___poset__POSetElement___direct_greaters(var10);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var_parents, var11); /* Direct call array$Array$add_all on <var_parents:Array[MClass]>*/
}
} else {
}
var_ = var_parents;
{
var12 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_13 = var12;
for(;;) {
{
var14 = ((short int(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_13); /* is_ok on <var_13:IndexedIterator[MClass]>*/
}
if (var14){
} else {
goto BREAK_label;
}
{
var15 = ((val*(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_13); /* item on <var_13:IndexedIterator[MClass]>*/
}
var_parent = var15;
{
var16 = nitc__abstract_compiler___MModule___properties(self, var_parent);
}
{
core___core__SimpleCollection___add_all(var_properties, var16); /* Direct call abstract_collection$SimpleCollection$add_all on <var_properties:HashSet[MProperty]>*/
}
{
((void(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_13); /* next on <var_13:IndexedIterator[MClass]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_13); /* finish on <var_13:IndexedIterator[MClass]>*/
}
{
{ /* Inline model$MClass$mclassdefs (var_mclass) on <var_mclass:MClass> */
var19 = var_mclass->attrs[COLOR_nitc__model__MClass___mclassdefs].val; /* _mclassdefs on <var_mclass:MClass> */
if (unlikely(var19 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 490);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_20 = var17;
{
var21 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_20);
}
var_22 = var21;
for(;;) {
{
var23 = ((short int(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_22); /* is_ok on <var_22:IndexedIterator[MClassDef]>*/
}
if (var23){
} else {
goto BREAK_label24;
}
{
var25 = ((val*(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_22); /* item on <var_22:IndexedIterator[MClassDef]>*/
}
var_mclassdef = var25;
{
{ /* Inline mmodule$MModule$in_importation (self) on <self:MModule> */
var28 = self->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <self:MModule> */
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var31 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var31 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
var32 = poset___poset__POSetElement____60d_61d(var26, var29);
}
var33 = !var32;
if (var33){
goto BREAK_label34;
} else {
}
{
{ /* Inline model$MClassDef$intro_mproperties (var_mclassdef) on <var_mclassdef:MClassDef> */
var37 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___intro_mproperties].val; /* _intro_mproperties on <var_mclassdef:MClassDef> */
if (unlikely(var37 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mproperties");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 720);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
var_38 = var35;
{
var39 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_38);
}
var_40 = var39;
for(;;) {
{
var41 = ((short int(*)(val* self))((((long)var_40&3)?class_info[((long)var_40&3)]:var_40->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_40); /* is_ok on <var_40:IndexedIterator[MProperty]>*/
}
if (var41){
} else {
goto BREAK_label42;
}
{
var43 = ((val*(*)(val* self))((((long)var_40&3)?class_info[((long)var_40&3)]:var_40->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_40); /* item on <var_40:IndexedIterator[MProperty]>*/
}
var_mprop = var43;
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var_properties, var_mprop); /* Direct call hash_collection$HashSet$add on <var_properties:HashSet[MProperty]>*/
}
{
((void(*)(val* self))((((long)var_40&3)?class_info[((long)var_40&3)]:var_40->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_40); /* next on <var_40:IndexedIterator[MProperty]>*/
}
}
BREAK_label42: (void)0;
{
((void(*)(val* self))((((long)var_40&3)?class_info[((long)var_40&3)]:var_40->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_40); /* finish on <var_40:IndexedIterator[MProperty]>*/
}
BREAK_label34: (void)0;
{
((void(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_22); /* next on <var_22:IndexedIterator[MClassDef]>*/
}
}
BREAK_label24: (void)0;
{
((void(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_22); /* finish on <var_22:IndexedIterator[MClassDef]>*/
}
{
{ /* Inline abstract_compiler$MModule$properties_cache (self) on <self:MModule> */
var46 = self->attrs[COLOR_nitc__abstract_compiler__MModule___properties_cache].val; /* _properties_cache on <self:MModule> */
if (unlikely(var46 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _properties_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 4150);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
((void(*)(val* self, val* p0, val* p1))((((long)var44&3)?class_info[((long)var44&3)]:var44->class)->vft[COLOR_core__abstract_collection__Map___91d_93d_61d]))(var44, var_mclass, var_properties); /* []= on <var44:Map[MClass, Set[MProperty]]>*/
}
} else {
}
{
{ /* Inline abstract_compiler$MModule$properties_cache (self) on <self:MModule> */
var49 = self->attrs[COLOR_nitc__abstract_compiler__MModule___properties_cache].val; /* _properties_cache on <self:MModule> */
if (unlikely(var49 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _properties_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 4150);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
var50 = ((val*(*)(val* self, val* p0))((((long)var47&3)?class_info[((long)var47&3)]:var47->class)->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var47, var_mclass); /* [] on <var47:Map[MClass, Set[MProperty]]>*/
}
var = var50;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$MModule$properties_cache for (self: MModule): Map[MClass, Set[MProperty]] */
val* nitc__abstract_compiler___MModule___properties_cache(val* self) {
val* var /* : Map[MClass, Set[MProperty]] */;
val* var1 /* : Map[MClass, Set[MProperty]] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__MModule___properties_cache].val; /* _properties_cache on <self:MModule> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _properties_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 4150);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$Sys$main for (self: Sys) */
void nitc__abstract_compiler___core__Sys___main(val* self) {
val* var /* : ToolContext */;
val* var_toolcontext /* var toolcontext: ToolContext */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Bool */;
val* var7 /* : nullable Bool */;
val* var9 /* : Sequence[String] */;
val* var10 /* : Model */;
val* var_model /* var model: Model */;
val* var12 /* : ModelBuilder */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var13 /* : OptionContext */;
val* var15 /* : OptionContext */;
val* var16 /* : Array[String] */;
val* var18 /* : Array[String] */;
val* var_arguments /* var arguments: Array[String] */;
short int var19 /* : Bool */;
long var20 /* : Int */;
long var22 /* : Int */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var26 /* : Bool */;
short int var_ /* var : Bool */;
val* var27 /* : OptionString */;
val* var29 /* : OptionString */;
val* var30 /* : nullable Object */;
val* var32 /* : nullable Object */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : CString */;
val* var41 /* : String */;
val* var42 /* : nullable Int */;
val* var43 /* : nullable Int */;
val* var44 /* : nullable Bool */;
val* var45 /* : nullable Bool */;
val* var47 /* : Array[MModule] */;
val* var_mmodules /* var mmodules: Array[MModule] */;
short int var48 /* : Bool */;
val* var_49 /* var : Array[MModule] */;
val* var50 /* : IndexedIterator[nullable Object] */;
val* var_51 /* var : IndexedIterator[MModule] */;
short int var52 /* : Bool */;
val* var53 /* : nullable Object */;
val* var_mmodule /* var mmodule: MModule */;
val* var55 /* : NativeArray[String] */;
static val* varonce54;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : CString */;
val* var59 /* : String */;
val* var60 /* : nullable Int */;
val* var61 /* : nullable Int */;
val* var62 /* : nullable Bool */;
val* var63 /* : nullable Bool */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : CString */;
val* var67 /* : String */;
val* var68 /* : nullable Int */;
val* var69 /* : nullable Int */;
val* var70 /* : nullable Bool */;
val* var71 /* : nullable Bool */;
val* var72 /* : String */;
val* var73 /* : String */;
val* var74 /* : Array[MModule] */;
val* var_75 /* var : Array[MModule] */;
val* var_ms /* var ms: Array[MModule] */;
var = NEW_nitc__ToolContext(&type_nitc__ToolContext);
{
nitc__separate_erasure_compiler___ToolContext___core__kernel__Object__init(var); /* Direct call separate_erasure_compiler$ToolContext$init on <var:ToolContext>*/
}
var_toolcontext = var;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "Usage: nitc [OPTION]... file.nit...\nCompiles Nit programs.";
var4 = (val*)(58l<<2|1);
var5 = (val*)(58l<<2|1);
var6 = (val*)((long)(0)<<2|3);
var7 = (val*)((long)(0)<<2|3);
var3 = core__flat___CString___to_s_unsafe(var2, var4, var5, var6, var7);
var1 = var3;
varonce = var1;
}
{
{ /* Inline toolcontext$ToolContext$tooldescription= (var_toolcontext,var1) on <var_toolcontext:ToolContext> */
var_toolcontext->attrs[COLOR_nitc__toolcontext__ToolContext___tooldescription].val = var1; /* _tooldescription on <var_toolcontext:ToolContext> */
RET_LABEL8:(void)0;
}
}
{
var9 = core__abstract_text___Sys___args(self);
}
{
nitc__nith___ToolContext___process_options(var_toolcontext, var9); /* Direct call nith$ToolContext$process_options on <var_toolcontext:ToolContext>*/
}
var10 = NEW_nitc__Model(&type_nitc__Model);
{
{ /* Inline kernel$Object$init (var10) on <var10:Model> */
RET_LABEL11:(void)0;
}
}
var_model = var10;
var12 = NEW_nitc__ModelBuilder(&type_nitc__ModelBuilder);
{
((void(*)(val* self, val* p0))(var12->class->vft[COLOR_nitc__modelbuilder_base__ModelBuilder__model_61d]))(var12, var_model); /* model= on <var12:ModelBuilder>*/
}
{
((void(*)(val* self, val* p0))(var12->class->vft[COLOR_nitc__modelbuilder_base__ModelBuilder__toolcontext_61d]))(var12, var_toolcontext); /* toolcontext= on <var12:ModelBuilder>*/
}
{
((void(*)(val* self))(var12->class->vft[COLOR_core__kernel__Object__init]))(var12); /* init on <var12:ModelBuilder>*/
}
var_modelbuilder = var12;
{
{ /* Inline toolcontext$ToolContext$option_context (var_toolcontext) on <var_toolcontext:ToolContext> */
var15 = var_toolcontext->attrs[COLOR_nitc__toolcontext__ToolContext___option_context].val; /* _option_context on <var_toolcontext:ToolContext> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 357);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline opts$OptionContext$rest (var13) on <var13:OptionContext> */
var18 = var13->attrs[COLOR_opts__OptionContext___rest].val; /* _rest on <var13:OptionContext> */
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _rest");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 286);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_arguments = var16;
{
{ /* Inline array$AbstractArrayRead$length (var_arguments) on <var_arguments:Array[String]> */
var22 = var_arguments->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[String]> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var20,1l) on <var20:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var25 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var26 = var20 > 1l;
var23 = var26;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var_ = var23;
if (var23){
{
{ /* Inline abstract_compiler$ToolContext$opt_output (var_toolcontext) on <var_toolcontext:ToolContext> */
var29 = var_toolcontext->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_output].val; /* _opt_output on <var_toolcontext:ToolContext> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_output");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 30);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline opts$Option$value (var27) on <var27:OptionString> */
var32 = var27->attrs[COLOR_opts__Option___value].val; /* _value on <var27:OptionString> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
if (var30 == NULL) {
var33 = 0; /* is null */
} else {
var33 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var30,((val*)NULL)) on <var30:nullable Object(nullable String)> */
var_other = ((val*)NULL);
{
var36 = ((short int(*)(val* self, val* p0))(var30->class->vft[COLOR_core__kernel__Object___61d_61d]))(var30, var_other); /* == on <var30:nullable Object(String)>*/
}
var37 = !var36;
var34 = var37;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
var33 = var34;
}
var19 = var33;
} else {
var19 = var_;
}
if (var19){
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "Option Error: --output needs a single source file. Do you prefer --dir?";
var42 = (val*)(71l<<2|1);
var43 = (val*)(71l<<2|1);
var44 = (val*)((long)(0)<<2|3);
var45 = (val*)((long)(0)<<2|3);
var41 = core__flat___CString___to_s_unsafe(var40, var42, var43, var44, var45);
var39 = var41;
varonce38 = var39;
}
{
core__file___Sys___print(self, var39); /* Direct call file$Sys$print on <self:Sys>*/
}
{
{ /* Inline kernel$Sys$exit (self,1l) on <self:Sys> */
exit((int)1l);
RET_LABEL46:(void)0;
}
}
} else {
}
{
var47 = nitc__loader___ModelBuilder___parse(var_modelbuilder, var_arguments);
}
var_mmodules = var47;
{
var48 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_mmodules);
}
if (var48){
{
nitc___nitc__ToolContext___quit(var_toolcontext); /* Direct call toolcontext$ToolContext$quit on <var_toolcontext:ToolContext>*/
}
} else {
}
{
nitc__modelbuilder___ModelBuilder___run_phases(var_modelbuilder); /* Direct call modelbuilder$ModelBuilder$run_phases on <var_modelbuilder:ModelBuilder>*/
}
var_49 = var_mmodules;
{
var50 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_49);
}
var_51 = var50;
for(;;) {
{
var52 = ((short int(*)(val* self))((((long)var_51&3)?class_info[((long)var_51&3)]:var_51->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_51); /* is_ok on <var_51:IndexedIterator[MModule]>*/
}
if (var52){
} else {
goto BREAK_label;
}
{
var53 = ((val*(*)(val* self))((((long)var_51&3)?class_info[((long)var_51&3)]:var_51->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_51); /* item on <var_51:IndexedIterator[MModule]>*/
}
var_mmodule = var53;
if (unlikely(varonce54==NULL)) {
var55 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = "*** PROCESS ";
var60 = (val*)(12l<<2|1);
var61 = (val*)(12l<<2|1);
var62 = (val*)((long)(0)<<2|3);
var63 = (val*)((long)(0)<<2|3);
var59 = core__flat___CString___to_s_unsafe(var58, var60, var61, var62, var63);
var57 = var59;
varonce56 = var57;
}
((struct instance_core__NativeArray*)var55)->values[0]=var57;
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = " ***";
var68 = (val*)(4l<<2|1);
var69 = (val*)(4l<<2|1);
var70 = (val*)((long)(0)<<2|3);
var71 = (val*)((long)(0)<<2|3);
var67 = core__flat___CString___to_s_unsafe(var66, var68, var69, var70, var71);
var65 = var67;
varonce64 = var65;
}
((struct instance_core__NativeArray*)var55)->values[2]=var65;
} else {
var55 = varonce54;
varonce54 = NULL;
}
{
var72 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmodule); /* to_s on <var_mmodule:MModule>*/
}
((struct instance_core__NativeArray*)var55)->values[1]=var72;
{
var73 = ((val*(*)(val* self))(var55->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var55); /* native_to_s on <var55:NativeArray[String]>*/
}
varonce54 = var55;
{
nitc___nitc__ToolContext___info(var_toolcontext, var73, 1l); /* Direct call toolcontext$ToolContext$info on <var_toolcontext:ToolContext>*/
}
var74 = NEW_core__Array(&type_core__Array__nitc__MModule);
{
core___core__Array___with_capacity(var74, 1l); /* Direct call array$Array$with_capacity on <var74:Array[MModule]>*/
}
var_75 = var74;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_75, var_mmodule); /* Direct call array$AbstractArray$push on <var_75:Array[MModule]>*/
}
var_ms = var_75;
{
nitc__modelbuilder___ToolContext___run_global_phases(var_toolcontext, var_ms); /* Direct call modelbuilder$ToolContext$run_global_phases on <var_toolcontext:ToolContext>*/
}
{
((void(*)(val* self))((((long)var_51&3)?class_info[((long)var_51&3)]:var_51->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_51); /* next on <var_51:IndexedIterator[MModule]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_51&3)?class_info[((long)var_51&3)]:var_51->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_51); /* finish on <var_51:IndexedIterator[MModule]>*/
}
RET_LABEL:;
}
