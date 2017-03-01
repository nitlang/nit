#include "nitc__abstract_compiler.sep.0.h"
/* method abstract_compiler$AMethPropdef$compile_externmeth_to_c for (self: AMethPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]): Bool */
short int nitc__abstract_compiler___AMethPropdef___compile_externmeth_to_c(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Bool */;
val* var7 /* : nullable Bool */;
val* var8 /* : AbstractCompiler */;
val* var10 /* : AbstractCompiler */;
val* var11 /* : ModelBuilder */;
val* var13 /* : ModelBuilder */;
val* var14 /* : nullable AAnnotation */;
val* var_at /* var at: nullable AAnnotation */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var_ /* var : Bool */;
val* var21 /* : ANodes[AExpr] */;
val* var23 /* : ANodes[AExpr] */;
long var24 /* : Int */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : AbstractCompiler */;
val* var30 /* : AbstractCompiler */;
val* var31 /* : ModelBuilder */;
val* var33 /* : ModelBuilder */;
val* var34 /* : nullable String */;
val* var_externname /* var externname: nullable Object */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
val* var37 /* : MClassDef */;
val* var39 /* : MClassDef */;
val* var40 /* : MModule */;
val* var42 /* : MModule */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var43 /* : nullable MSignature */;
val* var45 /* : nullable MSignature */;
val* var46 /* : nullable MType */;
val* var48 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
val* var54 /* : nullable Object */;
val* var55 /* : MType */;
val* var56 /* : RuntimeVariable */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
val* var_other60 /* var other: nullable Object */;
short int var61 /* : Bool */;
short int var63 /* : Bool */;
val* var65 /* : NativeArray[String] */;
static val* varonce64;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : CString */;
val* var69 /* : String */;
val* var70 /* : nullable Int */;
val* var71 /* : nullable Int */;
val* var72 /* : nullable Bool */;
val* var73 /* : nullable Bool */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : CString */;
val* var77 /* : String */;
val* var78 /* : nullable Int */;
val* var79 /* : nullable Int */;
val* var80 /* : nullable Bool */;
val* var81 /* : nullable Bool */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : CString */;
val* var85 /* : String */;
val* var86 /* : nullable Int */;
val* var87 /* : nullable Int */;
val* var88 /* : nullable Bool */;
val* var89 /* : nullable Bool */;
val* var90 /* : String */;
val* var91 /* : String */;
val* var93 /* : NativeArray[String] */;
static val* varonce92;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : CString */;
val* var97 /* : String */;
val* var98 /* : nullable Int */;
val* var99 /* : nullable Int */;
val* var100 /* : nullable Bool */;
val* var101 /* : nullable Bool */;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : CString */;
val* var105 /* : String */;
val* var106 /* : nullable Int */;
val* var107 /* : nullable Int */;
val* var108 /* : nullable Bool */;
val* var109 /* : nullable Bool */;
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : CString */;
val* var113 /* : String */;
val* var114 /* : nullable Int */;
val* var115 /* : nullable Int */;
val* var116 /* : nullable Bool */;
val* var117 /* : nullable Bool */;
val* var118 /* : String */;
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : CString */;
val* var122 /* : String */;
val* var123 /* : nullable Int */;
val* var124 /* : nullable Int */;
val* var125 /* : nullable Bool */;
val* var126 /* : nullable Bool */;
val* var127 /* : String */;
val* var128 /* : String */;
val* var129 /* : RuntimeVariable */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "extern";
var4 = (val*)(6l<<2|1);
var5 = (val*)(6l<<2|1);
var6 = (val*)((long)(0)<<2|3);
var7 = (val*)((long)(0)<<2|3);
var3 = core__flat___CString___to_s_unsafe(var2, var4, var5, var6, var7);
var1 = var3;
varonce = var1;
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var10 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var8) on <var8:AbstractCompiler> */
var13 = var8->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var8:AbstractCompiler> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = nitc__annotation___Prod___get_single_annotation(self, var1, var11);
}
var_at = var14;
if (var_at == NULL) {
var16 = 0; /* is null */
} else {
var16 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_at,((val*)NULL)) on <var_at:nullable AAnnotation> */
var_other = ((val*)NULL);
{
var19 = ((short int(*)(val* self, val* p0))(var_at->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_at, var_other); /* == on <var_at:nullable AAnnotation(AAnnotation)>*/
}
var20 = !var19;
var17 = var20;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var16 = var17;
}
var_ = var16;
if (var16){
{
{ /* Inline parser_nodes$AAnnotation$n_args (var_at) on <var_at:nullable AAnnotation(AAnnotation)> */
var23 = var_at->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_args].val; /* _n_args on <var_at:nullable AAnnotation(AAnnotation)> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 3007);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = nitc___nitc__ANodes___core__abstract_collection__Collection__length(var21);
}
{
{ /* Inline kernel$Int$== (var24,1l) on <var24:Int> */
var27 = var24 == 1l;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var15 = var25;
} else {
var15 = var_;
}
if (var15){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var30 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var30 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var28) on <var28:AbstractCompiler> */
var33 = var28->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var28:AbstractCompiler> */
if (unlikely(var33 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
var34 = nitc__annotation___AAnnotation___arg_as_string(var_at, var31);
}
var_externname = var34;
if (var_externname == NULL) {
var35 = 1; /* is null */
} else {
var35 = 0; /* arg is null but recv is not */
}
if (0) {
var36 = ((short int(*)(val* self, val* p0))(var_externname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_externname, ((val*)NULL)); /* == on <var_externname:nullable Object(nullable String)>*/
var35 = var36;
}
if (var35){
var = 0;
goto RET_LABEL;
} else {
}
} else {
var = 0;
goto RET_LABEL;
}
{
{ /* Inline model$MPropDef$mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var39 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var39 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var37) on <var37:MClassDef> */
var42 = var37->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var37:MClassDef> */
if (unlikely(var42 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___add_extern(var_v, var40); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_extern on <var_v:AbstractCompilerVisitor>*/
}
var_res = ((val*)NULL);
{
{ /* Inline model$MMethodDef$msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var45 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:MMethodDef> */
var43 = var45;
RET_LABEL44:(void)0;
}
}
if (var43 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3123);
fatal_exit(1);
} else {
{ /* Inline model$MSignature$return_mtype (var43) on <var43:nullable MSignature> */
if (unlikely(var43 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1891);
fatal_exit(1);
}
var48 = var43->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var43:nullable MSignature> */
var46 = var48;
RET_LABEL47:(void)0;
}
}
var_ret = var46;
if (var_ret == NULL) {
var49 = 0; /* is null */
} else {
var49 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other = ((val*)NULL);
{
var52 = ((short int(*)(val* self, val* p0))(var_ret->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ret, var_other); /* == on <var_ret:nullable MType(MType)>*/
}
var53 = !var52;
var50 = var53;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
var49 = var50;
}
if (var49){
{
var54 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var55 = nitc___nitc__AbstractCompilerVisitor___resolve_for(var_v, var_ret, var54);
}
var_ret = var55;
{
var56 = nitc___nitc__AbstractCompilerVisitor___new_var_extern(var_v, var_ret);
}
var_res = var56;
} else {
}
{
nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__adapt_signature(var_v, var_mpropdef, var_arguments); /* Direct call separate_compiler$SeparateCompilerVisitor$adapt_signature on <var_v:AbstractCompilerVisitor>*/
}
{
nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__unbox_signature_extern(var_v, var_mpropdef, var_arguments); /* Direct call separate_compiler$SeparateCompilerVisitor$unbox_signature_extern on <var_v:AbstractCompilerVisitor>*/
}
if (var_res == NULL) {
var57 = 1; /* is null */
} else {
var57 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_res,((val*)NULL)) on <var_res:nullable RuntimeVariable> */
var_other60 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_res,var_other60) on <var_res:nullable RuntimeVariable(RuntimeVariable)> */
var63 = var_res == var_other60;
var61 = var63;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
var58 = var61;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
var57 = var58;
}
if (var57){
if (unlikely(varonce64==NULL)) {
var65 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = "(";
var70 = (val*)(1l<<2|1);
var71 = (val*)(1l<<2|1);
var72 = (val*)((long)(0)<<2|3);
var73 = (val*)((long)(0)<<2|3);
var69 = core__flat___CString___to_s_unsafe(var68, var70, var71, var72, var73);
var67 = var69;
varonce66 = var67;
}
((struct instance_core__NativeArray*)var65)->values[1]=var67;
if (likely(varonce74!=NULL)) {
var75 = varonce74;
} else {
var76 = ");";
var78 = (val*)(2l<<2|1);
var79 = (val*)(2l<<2|1);
var80 = (val*)((long)(0)<<2|3);
var81 = (val*)((long)(0)<<2|3);
var77 = core__flat___CString___to_s_unsafe(var76, var78, var79, var80, var81);
var75 = var77;
varonce74 = var75;
}
((struct instance_core__NativeArray*)var65)->values[3]=var75;
} else {
var65 = varonce64;
varonce64 = NULL;
}
((struct instance_core__NativeArray*)var65)->values[0]=var_externname;
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = ", ";
var86 = (val*)(2l<<2|1);
var87 = (val*)(2l<<2|1);
var88 = (val*)((long)(0)<<2|3);
var89 = (val*)((long)(0)<<2|3);
var85 = core__flat___CString___to_s_unsafe(var84, var86, var87, var88, var89);
var83 = var85;
varonce82 = var83;
}
{
var90 = core__abstract_text___Collection___join(var_arguments, var83, ((val*)NULL));
}
((struct instance_core__NativeArray*)var65)->values[2]=var90;
{
var91 = ((val*(*)(val* self))(var65->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var65); /* native_to_s on <var65:NativeArray[String]>*/
}
varonce64 = var65;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var91); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
} else {
if (unlikely(varonce92==NULL)) {
var93 = NEW_core__NativeArray((int)6l, &type_core__NativeArray__core__String);
if (likely(varonce94!=NULL)) {
var95 = varonce94;
} else {
var96 = " = ";
var98 = (val*)(3l<<2|1);
var99 = (val*)(3l<<2|1);
var100 = (val*)((long)(0)<<2|3);
var101 = (val*)((long)(0)<<2|3);
var97 = core__flat___CString___to_s_unsafe(var96, var98, var99, var100, var101);
var95 = var97;
varonce94 = var95;
}
((struct instance_core__NativeArray*)var93)->values[1]=var95;
if (likely(varonce102!=NULL)) {
var103 = varonce102;
} else {
var104 = "(";
var106 = (val*)(1l<<2|1);
var107 = (val*)(1l<<2|1);
var108 = (val*)((long)(0)<<2|3);
var109 = (val*)((long)(0)<<2|3);
var105 = core__flat___CString___to_s_unsafe(var104, var106, var107, var108, var109);
var103 = var105;
varonce102 = var103;
}
((struct instance_core__NativeArray*)var93)->values[3]=var103;
if (likely(varonce110!=NULL)) {
var111 = varonce110;
} else {
var112 = ");";
var114 = (val*)(2l<<2|1);
var115 = (val*)(2l<<2|1);
var116 = (val*)((long)(0)<<2|3);
var117 = (val*)((long)(0)<<2|3);
var113 = core__flat___CString___to_s_unsafe(var112, var114, var115, var116, var117);
var111 = var113;
varonce110 = var111;
}
((struct instance_core__NativeArray*)var93)->values[5]=var111;
} else {
var93 = varonce92;
varonce92 = NULL;
}
{
var118 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var93)->values[0]=var118;
((struct instance_core__NativeArray*)var93)->values[2]=var_externname;
if (likely(varonce119!=NULL)) {
var120 = varonce119;
} else {
var121 = ", ";
var123 = (val*)(2l<<2|1);
var124 = (val*)(2l<<2|1);
var125 = (val*)((long)(0)<<2|3);
var126 = (val*)((long)(0)<<2|3);
var122 = core__flat___CString___to_s_unsafe(var121, var123, var124, var125, var126);
var120 = var122;
varonce119 = var120;
}
{
var127 = core__abstract_text___Collection___join(var_arguments, var120, ((val*)NULL));
}
((struct instance_core__NativeArray*)var93)->values[4]=var127;
{
var128 = ((val*(*)(val* self))(var93->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var93); /* native_to_s on <var93:NativeArray[String]>*/
}
varonce92 = var93;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var128); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3135);
fatal_exit(1);
}
{
var129 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__box_extern]))(var_v, var_res, var_ret); /* box_extern on <var_v:AbstractCompilerVisitor>*/
}
var_res = var129;
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var_res); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AMethPropdef$compile_externinit_to_c for (self: AMethPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]): Bool */
short int nitc__abstract_compiler___AMethPropdef___compile_externinit_to_c(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Bool */;
val* var7 /* : nullable Bool */;
val* var8 /* : AbstractCompiler */;
val* var10 /* : AbstractCompiler */;
val* var11 /* : ModelBuilder */;
val* var13 /* : ModelBuilder */;
val* var14 /* : nullable AAnnotation */;
val* var_at /* var at: nullable AAnnotation */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : AbstractCompiler */;
val* var22 /* : AbstractCompiler */;
val* var23 /* : ModelBuilder */;
val* var25 /* : ModelBuilder */;
val* var26 /* : nullable String */;
val* var_externname /* var externname: nullable Object */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : MClassDef */;
val* var31 /* : MClassDef */;
val* var32 /* : MModule */;
val* var34 /* : MModule */;
val* var35 /* : nullable Object */;
val* var36 /* : MType */;
val* var38 /* : MType */;
val* var_ret /* var ret: MType */;
val* var39 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var40 /* : nullable Object */;
val* var42 /* : NativeArray[String] */;
static val* varonce41;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : CString */;
val* var46 /* : String */;
val* var47 /* : nullable Int */;
val* var48 /* : nullable Int */;
val* var49 /* : nullable Bool */;
val* var50 /* : nullable Bool */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : CString */;
val* var54 /* : String */;
val* var55 /* : nullable Int */;
val* var56 /* : nullable Int */;
val* var57 /* : nullable Bool */;
val* var58 /* : nullable Bool */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : CString */;
val* var62 /* : String */;
val* var63 /* : nullable Int */;
val* var64 /* : nullable Int */;
val* var65 /* : nullable Bool */;
val* var66 /* : nullable Bool */;
val* var67 /* : String */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : CString */;
val* var71 /* : String */;
val* var72 /* : nullable Int */;
val* var73 /* : nullable Int */;
val* var74 /* : nullable Bool */;
val* var75 /* : nullable Bool */;
val* var76 /* : String */;
val* var77 /* : String */;
val* var78 /* : RuntimeVariable */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "extern";
var4 = (val*)(6l<<2|1);
var5 = (val*)(6l<<2|1);
var6 = (val*)((long)(0)<<2|3);
var7 = (val*)((long)(0)<<2|3);
var3 = core__flat___CString___to_s_unsafe(var2, var4, var5, var6, var7);
var1 = var3;
varonce = var1;
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var10 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var8) on <var8:AbstractCompiler> */
var13 = var8->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var8:AbstractCompiler> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = nitc__annotation___Prod___get_single_annotation(self, var1, var11);
}
var_at = var14;
if (var_at == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_at,((val*)NULL)) on <var_at:nullable AAnnotation> */
var_other = ((val*)NULL);
{
var18 = ((short int(*)(val* self, val* p0))(var_at->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_at, var_other); /* == on <var_at:nullable AAnnotation(AAnnotation)>*/
}
var19 = !var18;
var16 = var19;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var15 = var16;
}
if (var15){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var22 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var20) on <var20:AbstractCompiler> */
var25 = var20->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var20:AbstractCompiler> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = nitc__annotation___AAnnotation___arg_as_string(var_at, var23);
}
var_externname = var26;
if (var_externname == NULL) {
var27 = 1; /* is null */
} else {
var27 = 0; /* arg is null but recv is not */
}
if (0) {
var28 = ((short int(*)(val* self, val* p0))(var_externname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_externname, ((val*)NULL)); /* == on <var_externname:nullable Object(nullable String)>*/
var27 = var28;
}
if (var27){
var = 0;
goto RET_LABEL;
} else {
}
} else {
var = 0;
goto RET_LABEL;
}
{
{ /* Inline model$MPropDef$mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var31 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var31 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var29) on <var29:MClassDef> */
var34 = var29->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var29:MClassDef> */
if (unlikely(var34 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___add_extern(var_v, var32); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_extern on <var_v:AbstractCompilerVisitor>*/
}
{
nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__adapt_signature(var_v, var_mpropdef, var_arguments); /* Direct call separate_compiler$SeparateCompilerVisitor$adapt_signature on <var_v:AbstractCompilerVisitor>*/
}
{
nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__unbox_signature_extern(var_v, var_mpropdef, var_arguments); /* Direct call separate_compiler$SeparateCompilerVisitor$unbox_signature_extern on <var_v:AbstractCompilerVisitor>*/
}
{
var35 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var35) on <var35:nullable Object(RuntimeVariable)> */
var38 = var35->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var35:nullable Object(RuntimeVariable)> */
if (unlikely(var38 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
var_ret = var36;
{
var39 = nitc___nitc__AbstractCompilerVisitor___new_var_extern(var_v, var_ret);
}
var_res = var39;
{
var40 = core___core__AbstractArray___core__abstract_collection__Sequence__shift(var_arguments);
}
if (unlikely(varonce41==NULL)) {
var42 = NEW_core__NativeArray((int)6l, &type_core__NativeArray__core__String);
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = " = ";
var47 = (val*)(3l<<2|1);
var48 = (val*)(3l<<2|1);
var49 = (val*)((long)(0)<<2|3);
var50 = (val*)((long)(0)<<2|3);
var46 = core__flat___CString___to_s_unsafe(var45, var47, var48, var49, var50);
var44 = var46;
varonce43 = var44;
}
((struct instance_core__NativeArray*)var42)->values[1]=var44;
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "(";
var55 = (val*)(1l<<2|1);
var56 = (val*)(1l<<2|1);
var57 = (val*)((long)(0)<<2|3);
var58 = (val*)((long)(0)<<2|3);
var54 = core__flat___CString___to_s_unsafe(var53, var55, var56, var57, var58);
var52 = var54;
varonce51 = var52;
}
((struct instance_core__NativeArray*)var42)->values[3]=var52;
if (likely(varonce59!=NULL)) {
var60 = varonce59;
} else {
var61 = ");";
var63 = (val*)(2l<<2|1);
var64 = (val*)(2l<<2|1);
var65 = (val*)((long)(0)<<2|3);
var66 = (val*)((long)(0)<<2|3);
var62 = core__flat___CString___to_s_unsafe(var61, var63, var64, var65, var66);
var60 = var62;
varonce59 = var60;
}
((struct instance_core__NativeArray*)var42)->values[5]=var60;
} else {
var42 = varonce41;
varonce41 = NULL;
}
{
var67 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var42)->values[0]=var67;
((struct instance_core__NativeArray*)var42)->values[2]=var_externname;
if (likely(varonce68!=NULL)) {
var69 = varonce68;
} else {
var70 = ", ";
var72 = (val*)(2l<<2|1);
var73 = (val*)(2l<<2|1);
var74 = (val*)((long)(0)<<2|3);
var75 = (val*)((long)(0)<<2|3);
var71 = core__flat___CString___to_s_unsafe(var70, var72, var73, var74, var75);
var69 = var71;
varonce68 = var69;
}
{
var76 = core__abstract_text___Collection___join(var_arguments, var69, ((val*)NULL));
}
((struct instance_core__NativeArray*)var42)->values[4]=var76;
{
var77 = ((val*(*)(val* self))(var42->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var42); /* native_to_s on <var42:NativeArray[String]>*/
}
varonce41 = var42;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var77); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
var78 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__box_extern]))(var_v, var_res, var_ret); /* box_extern on <var_v:AbstractCompilerVisitor>*/
}
var_res = var78;
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var_res); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AAttrPropdef$can_inline for (self: AAttrPropdef): Bool */
short int nitc__abstract_compiler___AAttrPropdef___APropdef__can_inline(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
{
{ /* Inline modelize_property$AAttrPropdef$is_lazy (self) on <self:AAttrPropdef> */
var3 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___is_lazy].s; /* _is_lazy on <self:AAttrPropdef> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = !var1;
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AAttrPropdef$compile_to_c for (self: AAttrPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void nitc__abstract_compiler___AAttrPropdef___APropdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var /* : nullable MMethodDef */;
val* var2 /* : nullable MMethodDef */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
long var8 /* : Int */;
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : nullable MType */;
val* var20 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var_ /* var : Bool */;
short int var24 /* : Bool */;
int cltype;
int idtype;
short int var25 /* : Bool */;
short int var_useiset /* var useiset: Bool */;
val* var26 /* : nullable MAttributeDef */;
val* var28 /* : nullable MAttributeDef */;
val* var29 /* : MProperty */;
val* var31 /* : MProperty */;
val* var_guard /* var guard: MAttribute */;
val* var32 /* : nullable MPropDef */;
val* var34 /* : nullable MPropDef */;
val* var35 /* : MProperty */;
val* var37 /* : MProperty */;
val* var38 /* : RuntimeVariable */;
val* var_set /* var set: nullable Object */;
val* var39 /* : RuntimeVariable */;
val* var40 /* : NativeArray[String] */;
static val* varonce;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : CString */;
val* var44 /* : String */;
val* var45 /* : nullable Int */;
val* var46 /* : nullable Int */;
val* var47 /* : nullable Bool */;
val* var48 /* : nullable Bool */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : CString */;
val* var52 /* : String */;
val* var53 /* : nullable Int */;
val* var54 /* : nullable Int */;
val* var55 /* : nullable Bool */;
val* var56 /* : nullable Bool */;
val* var57 /* : String */;
val* var58 /* : String */;
val* var59 /* : nullable MPropDef */;
val* var61 /* : nullable MPropDef */;
val* var62 /* : MProperty */;
val* var64 /* : MProperty */;
val* var65 /* : RuntimeVariable */;
val* var_res /* var res: nullable Object */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : CString */;
val* var69 /* : String */;
val* var70 /* : nullable Int */;
val* var71 /* : nullable Int */;
val* var72 /* : nullable Bool */;
val* var73 /* : nullable Bool */;
val* var74 /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
short int var75 /* : Bool */;
val* var76 /* : RuntimeVariable */;
val* var_true_v /* var true_v: RuntimeVariable */;
val* var77 /* : nullable Object */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : CString */;
val* var81 /* : String */;
val* var82 /* : nullable Int */;
val* var83 /* : nullable Int */;
val* var84 /* : nullable Bool */;
val* var85 /* : nullable Bool */;
val* var86 /* : nullable MPropDef */;
val* var88 /* : nullable MPropDef */;
val* var89 /* : MProperty */;
val* var91 /* : MProperty */;
val* var92 /* : nullable Object */;
val* var93 /* : RuntimeVariable */;
val* var94 /* : nullable StaticFrame */;
val* var96 /* : nullable StaticFrame */;
val* var97 /* : nullable RuntimeVariable */;
val* var99 /* : nullable RuntimeVariable */;
val* var100 /* : nullable MMethodDef */;
val* var102 /* : nullable MMethodDef */;
short int var103 /* : Bool */;
short int var105 /* : Bool */;
short int var107 /* : Bool */;
long var108 /* : Int */;
long var110 /* : Int */;
short int var111 /* : Bool */;
short int var113 /* : Bool */;
val* var114 /* : nullable Object */;
val* var_recv115 /* var recv: RuntimeVariable */;
val* var116 /* : nullable Object */;
val* var_arg /* var arg: RuntimeVariable */;
short int var117 /* : Bool */;
short int var118 /* : Bool */;
short int var120 /* : Bool */;
short int var_121 /* var : Bool */;
short int var122 /* : Bool */;
val* var123 /* : nullable MPropDef */;
val* var125 /* : nullable MPropDef */;
val* var126 /* : nullable MType */;
val* var128 /* : nullable MType */;
val* var129 /* : RuntimeVariable */;
val* var_value130 /* var value: RuntimeVariable */;
val* var132 /* : NativeArray[String] */;
static val* varonce131;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : CString */;
val* var136 /* : String */;
val* var137 /* : nullable Int */;
val* var138 /* : nullable Int */;
val* var139 /* : nullable Bool */;
val* var140 /* : nullable Bool */;
static val* varonce141;
val* var142 /* : String */;
char* var143 /* : CString */;
val* var144 /* : String */;
val* var145 /* : nullable Int */;
val* var146 /* : nullable Int */;
val* var147 /* : nullable Bool */;
val* var148 /* : nullable Bool */;
val* var149 /* : String */;
val* var150 /* : String */;
val* var151 /* : RuntimeVariable */;
static val* varonce152;
val* var153 /* : String */;
char* var154 /* : CString */;
val* var155 /* : String */;
val* var156 /* : nullable Int */;
val* var157 /* : nullable Int */;
val* var158 /* : nullable Bool */;
val* var159 /* : nullable Bool */;
static val* varonce160;
val* var161 /* : String */;
char* var162 /* : CString */;
val* var163 /* : String */;
val* var164 /* : nullable Int */;
val* var165 /* : nullable Int */;
val* var166 /* : nullable Bool */;
val* var167 /* : nullable Bool */;
val* var168 /* : nullable MPropDef */;
val* var170 /* : nullable MPropDef */;
val* var171 /* : MProperty */;
val* var173 /* : MProperty */;
val* var174 /* : nullable Object */;
short int var175 /* : Bool */;
short int var177 /* : Bool */;
val* var178 /* : nullable MType */;
val* var180 /* : nullable MType */;
val* var_ret181 /* var ret: nullable MType */;
short int var182 /* : Bool */;
short int var183 /* : Bool */;
short int var184 /* : Bool */;
short int var_185 /* var : Bool */;
short int var186 /* : Bool */;
int cltype187;
int idtype188;
short int var189 /* : Bool */;
short int var_useiset190 /* var useiset: Bool */;
short int var191 /* : Bool */;
val* var192 /* : nullable MAttributeDef */;
val* var194 /* : nullable MAttributeDef */;
val* var195 /* : MProperty */;
val* var197 /* : MProperty */;
val* var198 /* : nullable Object */;
val* var199 /* : RuntimeVariable */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
{
{ /* Inline modelize_property$AAttrPropdef$mreadpropdef (self) on <self:AAttrPropdef> */
var2 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mreadpropdef].val; /* _mreadpropdef on <self:AAttrPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var_mpropdef,var) on <var_mpropdef:MMethodDef> */
var_other = var;
{
{ /* Inline kernel$Object$is_same_instance (var_mpropdef,var_other) on <var_mpropdef:MMethodDef> */
var7 = var_mpropdef == var_other;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
{
{ /* Inline array$AbstractArrayRead$length (var_arguments) on <var_arguments:Array[RuntimeVariable]> */
var10 = var_arguments->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var8,1l) on <var8:Int> */
var13 = var8 == 1l;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (unlikely(!var11)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3174);
fatal_exit(1);
}
{
var14 = core___core__SequenceRead___Collection__first(var_arguments);
}
var_recv = var14;
{
{ /* Inline modelize_property$AAttrPropdef$is_lazy (self) on <self:AAttrPropdef> */
var17 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___is_lazy].s; /* _is_lazy on <self:AAttrPropdef> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (var15){
{
{ /* Inline modelize_property$AAttrPropdef$mtype (self) on <self:AAttrPropdef> */
var20 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mtype].val; /* _mtype on <self:AAttrPropdef> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
var_ret = var18;
if (var_ret == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3180);
fatal_exit(1);
} else {
var22 = ((short int(*)(val* self))(var_ret->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var_ret); /* is_c_primitive on <var_ret:nullable MType>*/
}
var23 = !var22;
var_ = var23;
if (var23){
/* <var_ret:nullable MType> isa MNullableType */
cltype = type_nitc__MNullableType.color;
idtype = type_nitc__MNullableType.id;
if(var_ret == NULL) {
var24 = 0;
} else {
if(cltype >= var_ret->type->table_size) {
var24 = 0;
} else {
var24 = var_ret->type->type_table[cltype] == idtype;
}
}
var25 = !var24;
var21 = var25;
} else {
var21 = var_;
}
var_useiset = var21;
{
{ /* Inline modelize_property$AAttrPropdef$mlazypropdef (self) on <self:AAttrPropdef> */
var28 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mlazypropdef].val; /* _mlazypropdef on <self:AAttrPropdef> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
if (var26 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3181);
fatal_exit(1);
} else {
{ /* Inline model$MPropDef$mproperty (var26) on <var26:nullable MAttributeDef> */
if (unlikely(var26 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var31 = var26->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var26:nullable MAttributeDef> */
if (unlikely(var31 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
var_guard = var29;
if (var_useiset){
{
{ /* Inline modelize_property$APropdef$mpropdef (self) on <self:AAttrPropdef> */
var34 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
if (var32 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3183);
fatal_exit(1);
} else {
{ /* Inline model$MPropDef$mproperty (var32) on <var32:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var32 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var37 = var32->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var32:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var37 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
var38 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__isset_attribute(var_v, var35, var_recv);
}
var_set = var38;
} else {
{
var39 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__read_attribute(var_v, var_guard, var_recv);
}
var_set = var39;
}
if (unlikely(varonce==NULL)) {
var40 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "if(likely(";
var45 = (val*)(10l<<2|1);
var46 = (val*)(10l<<2|1);
var47 = (val*)((long)(0)<<2|3);
var48 = (val*)((long)(0)<<2|3);
var44 = core__flat___CString___to_s_unsafe(var43, var45, var46, var47, var48);
var42 = var44;
varonce41 = var42;
}
((struct instance_core__NativeArray*)var40)->values[0]=var42;
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = ")) {";
var53 = (val*)(4l<<2|1);
var54 = (val*)(4l<<2|1);
var55 = (val*)((long)(0)<<2|3);
var56 = (val*)((long)(0)<<2|3);
var52 = core__flat___CString___to_s_unsafe(var51, var53, var54, var55, var56);
var50 = var52;
varonce49 = var50;
}
((struct instance_core__NativeArray*)var40)->values[2]=var50;
} else {
var40 = varonce;
varonce = NULL;
}
{
var57 = ((val*(*)(val* self))(var_set->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_set); /* to_s on <var_set:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var40)->values[1]=var57;
{
var58 = ((val*(*)(val* self))(var40->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var40); /* native_to_s on <var40:NativeArray[String]>*/
}
varonce = var40;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var58); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline modelize_property$APropdef$mpropdef (self) on <self:AAttrPropdef> */
var61 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var59 = var61;
RET_LABEL60:(void)0;
}
}
if (var59 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3188);
fatal_exit(1);
} else {
{ /* Inline model$MPropDef$mproperty (var59) on <var59:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var59 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var64 = var59->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var59:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var64 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
var65 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__read_attribute(var_v, var62, var_recv);
}
var_res = var65;
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = "} else {";
var70 = (val*)(8l<<2|1);
var71 = (val*)(8l<<2|1);
var72 = (val*)((long)(0)<<2|3);
var73 = (val*)((long)(0)<<2|3);
var69 = core__flat___CString___to_s_unsafe(var68, var70, var71, var72, var73);
var67 = var69;
varonce66 = var67;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var67); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
var74 = nitc__abstract_compiler___AAttrPropdef___evaluate_expr(self, var_v, var_recv);
}
var_value = var74;
{
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var_res, var_value); /* Direct call abstract_compiler$AbstractCompilerVisitor$assign on <var_v:AbstractCompilerVisitor>*/
}
var75 = !var_useiset;
if (var75){
{
var76 = nitc___nitc__AbstractCompilerVisitor___bool_instance(var_v, 1);
}
var_true_v = var76;
{
var77 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__write_attribute(var_v, var_guard, var77, var_true_v); /* Direct call separate_compiler$SeparateCompilerVisitor$write_attribute on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = "}";
var82 = (val*)(1l<<2|1);
var83 = (val*)(1l<<2|1);
var84 = (val*)((long)(0)<<2|3);
var85 = (val*)((long)(0)<<2|3);
var81 = core__flat___CString___to_s_unsafe(var80, var82, var83, var84, var85);
var79 = var81;
varonce78 = var79;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var79); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
} else {
{
{ /* Inline modelize_property$APropdef$mpropdef (self) on <self:AAttrPropdef> */
var88 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var86 = var88;
RET_LABEL87:(void)0;
}
}
if (var86 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3200);
fatal_exit(1);
} else {
{ /* Inline model$MPropDef$mproperty (var86) on <var86:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var86 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var91 = var86->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var86:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var91 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var89 = var91;
RET_LABEL90:(void)0;
}
}
{
var92 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var93 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__read_attribute(var_v, var89, var92);
}
var_res = var93;
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (var_v) on <var_v:AbstractCompilerVisitor> */
var96 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var94 = var96;
RET_LABEL95:(void)0;
}
}
if (var94 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3202);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler$StaticFrame$returnvar (var94) on <var94:nullable StaticFrame> */
if (unlikely(var94 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2037);
fatal_exit(1);
}
var99 = var94->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnvar].val; /* _returnvar on <var94:nullable StaticFrame> */
var97 = var99;
RET_LABEL98:(void)0;
}
}
if (unlikely(var97 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3202);
fatal_exit(1);
}
{
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var97, var_res); /* Direct call abstract_compiler$AbstractCompilerVisitor$assign on <var_v:AbstractCompilerVisitor>*/
}
} else {
{
{ /* Inline modelize_property$AAttrPropdef$mwritepropdef (self) on <self:AAttrPropdef> */
var102 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mwritepropdef].val; /* _mwritepropdef on <self:AAttrPropdef> */
var100 = var102;
RET_LABEL101:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var_mpropdef,var100) on <var_mpropdef:MMethodDef> */
var_other = var100;
{
{ /* Inline kernel$Object$is_same_instance (var_mpropdef,var_other) on <var_mpropdef:MMethodDef> */
var107 = var_mpropdef == var_other;
var105 = var107;
goto RET_LABEL106;
RET_LABEL106:(void)0;
}
}
var103 = var105;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
}
if (var103){
{
{ /* Inline array$AbstractArrayRead$length (var_arguments) on <var_arguments:Array[RuntimeVariable]> */
var110 = var_arguments->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var108 = var110;
RET_LABEL109:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var108,2l) on <var108:Int> */
var113 = var108 == 2l;
var111 = var113;
goto RET_LABEL112;
RET_LABEL112:(void)0;
}
}
if (unlikely(!var111)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3204);
fatal_exit(1);
}
{
var114 = core___core__SequenceRead___Collection__first(var_arguments);
}
var_recv115 = var114;
{
var116 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
var_arg = var116;
{
{ /* Inline modelize_property$AAttrPropdef$is_optional (self) on <self:AAttrPropdef> */
var120 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___is_optional].s; /* _is_optional on <self:AAttrPropdef> */
var118 = var120;
RET_LABEL119:(void)0;
}
}
var_121 = var118;
if (var118){
{
var122 = nitc___nitc__AbstractCompilerVisitor___maybenull(var_v, var_arg);
}
var117 = var122;
} else {
var117 = var_121;
}
if (var117){
{
{ /* Inline modelize_property$APropdef$mpropdef (self) on <self:AAttrPropdef> */
var125 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var123 = var125;
RET_LABEL124:(void)0;
}
}
if (var123 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3208);
fatal_exit(1);
} else {
{ /* Inline model$MAttributeDef$static_mtype (var123) on <var123:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var123 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2526);
fatal_exit(1);
}
var128 = var123->attrs[COLOR_nitc__model__MAttributeDef___static_mtype].val; /* _static_mtype on <var123:nullable MPropDef(nullable MAttributeDef)> */
var126 = var128;
RET_LABEL127:(void)0;
}
}
if (unlikely(var126 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3208);
fatal_exit(1);
}
{
var129 = nitc___nitc__AbstractCompilerVisitor___new_var(var_v, var126);
}
var_value130 = var129;
if (unlikely(varonce131==NULL)) {
var132 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce133!=NULL)) {
var134 = varonce133;
} else {
var135 = "if (";
var137 = (val*)(4l<<2|1);
var138 = (val*)(4l<<2|1);
var139 = (val*)((long)(0)<<2|3);
var140 = (val*)((long)(0)<<2|3);
var136 = core__flat___CString___to_s_unsafe(var135, var137, var138, var139, var140);
var134 = var136;
varonce133 = var134;
}
((struct instance_core__NativeArray*)var132)->values[0]=var134;
if (likely(varonce141!=NULL)) {
var142 = varonce141;
} else {
var143 = " == NULL) {";
var145 = (val*)(11l<<2|1);
var146 = (val*)(11l<<2|1);
var147 = (val*)((long)(0)<<2|3);
var148 = (val*)((long)(0)<<2|3);
var144 = core__flat___CString___to_s_unsafe(var143, var145, var146, var147, var148);
var142 = var144;
varonce141 = var142;
}
((struct instance_core__NativeArray*)var132)->values[2]=var142;
} else {
var132 = varonce131;
varonce131 = NULL;
}
{
var149 = ((val*(*)(val* self))(var_arg->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_arg); /* to_s on <var_arg:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var132)->values[1]=var149;
{
var150 = ((val*(*)(val* self))(var132->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var132); /* native_to_s on <var132:NativeArray[String]>*/
}
varonce131 = var132;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var150); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
var151 = nitc__abstract_compiler___AAttrPropdef___evaluate_expr(self, var_v, var_recv115);
}
{
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var_value130, var151); /* Direct call abstract_compiler$AbstractCompilerVisitor$assign on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce152!=NULL)) {
var153 = varonce152;
} else {
var154 = "} else {";
var156 = (val*)(8l<<2|1);
var157 = (val*)(8l<<2|1);
var158 = (val*)((long)(0)<<2|3);
var159 = (val*)((long)(0)<<2|3);
var155 = core__flat___CString___to_s_unsafe(var154, var156, var157, var158, var159);
var153 = var155;
varonce152 = var153;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var153); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var_value130, var_arg); /* Direct call abstract_compiler$AbstractCompilerVisitor$assign on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce160!=NULL)) {
var161 = varonce160;
} else {
var162 = "}";
var164 = (val*)(1l<<2|1);
var165 = (val*)(1l<<2|1);
var166 = (val*)((long)(0)<<2|3);
var167 = (val*)((long)(0)<<2|3);
var163 = core__flat___CString___to_s_unsafe(var162, var164, var165, var166, var167);
var161 = var163;
varonce160 = var161;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var161); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
var_arg = var_value130;
} else {
}
{
{ /* Inline modelize_property$APropdef$mpropdef (self) on <self:AAttrPropdef> */
var170 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var168 = var170;
RET_LABEL169:(void)0;
}
}
if (var168 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3216);
fatal_exit(1);
} else {
{ /* Inline model$MPropDef$mproperty (var168) on <var168:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var168 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var173 = var168->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var168:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var173 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var171 = var173;
RET_LABEL172:(void)0;
}
}
{
var174 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__write_attribute(var_v, var171, var174, var_arg); /* Direct call separate_compiler$SeparateCompilerVisitor$write_attribute on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline modelize_property$AAttrPropdef$is_lazy (self) on <self:AAttrPropdef> */
var177 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___is_lazy].s; /* _is_lazy on <self:AAttrPropdef> */
var175 = var177;
RET_LABEL176:(void)0;
}
}
if (var175){
{
{ /* Inline modelize_property$AAttrPropdef$mtype (self) on <self:AAttrPropdef> */
var180 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mtype].val; /* _mtype on <self:AAttrPropdef> */
var178 = var180;
RET_LABEL179:(void)0;
}
}
var_ret181 = var178;
if (var_ret181 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3219);
fatal_exit(1);
} else {
var183 = ((short int(*)(val* self))(var_ret181->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var_ret181); /* is_c_primitive on <var_ret181:nullable MType>*/
}
var184 = !var183;
var_185 = var184;
if (var184){
/* <var_ret181:nullable MType> isa MNullableType */
cltype187 = type_nitc__MNullableType.color;
idtype188 = type_nitc__MNullableType.id;
if(var_ret181 == NULL) {
var186 = 0;
} else {
if(cltype187 >= var_ret181->type->table_size) {
var186 = 0;
} else {
var186 = var_ret181->type->type_table[cltype187] == idtype188;
}
}
var189 = !var186;
var182 = var189;
} else {
var182 = var_185;
}
var_useiset190 = var182;
var191 = !var_useiset190;
if (var191){
{
{ /* Inline modelize_property$AAttrPropdef$mlazypropdef (self) on <self:AAttrPropdef> */
var194 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mlazypropdef].val; /* _mlazypropdef on <self:AAttrPropdef> */
var192 = var194;
RET_LABEL193:(void)0;
}
}
if (var192 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3221);
fatal_exit(1);
} else {
{ /* Inline model$MPropDef$mproperty (var192) on <var192:nullable MAttributeDef> */
if (unlikely(var192 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var197 = var192->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var192:nullable MAttributeDef> */
if (unlikely(var197 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var195 = var197;
RET_LABEL196:(void)0;
}
}
{
var198 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var199 = nitc___nitc__AbstractCompilerVisitor___bool_instance(var_v, 1);
}
{
nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__write_attribute(var_v, var195, var198, var199); /* Direct call separate_compiler$SeparateCompilerVisitor$write_attribute on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
} else {
}
} else {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3225);
fatal_exit(1);
}
}
RET_LABEL:;
}
/* method abstract_compiler$AAttrPropdef$init_expr for (self: AAttrPropdef, AbstractCompilerVisitor, RuntimeVariable) */
void nitc__abstract_compiler___AAttrPropdef___init_expr(val* self, val* p0, val* p1) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_recv /* var recv: RuntimeVariable */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var_10 /* var : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var_15 /* var : Bool */;
val* var16 /* : nullable AExpr */;
val* var18 /* : nullable AExpr */;
short int var19 /* : Bool */;
int cltype;
int idtype;
short int var20 /* : Bool */;
val* var21 /* : RuntimeVariable */;
var_v = p0;
var_recv = p1;
{
{ /* Inline modelize_property$AAttrPropdef$has_value (self) on <self:AAttrPropdef> */
var5 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <self:AAttrPropdef> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_ = var3;
if (var3){
{
{ /* Inline modelize_property$AAttrPropdef$is_lazy (self) on <self:AAttrPropdef> */
var8 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___is_lazy].s; /* _is_lazy on <self:AAttrPropdef> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
var9 = !var6;
var2 = var9;
} else {
var2 = var_;
}
var_10 = var2;
if (var2){
{
{ /* Inline modelize_property$AAttrPropdef$is_optional (self) on <self:AAttrPropdef> */
var13 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___is_optional].s; /* _is_optional on <self:AAttrPropdef> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
var14 = !var11;
var1 = var14;
} else {
var1 = var_10;
}
var_15 = var1;
if (var1){
{
{ /* Inline parser_nodes$AAttrPropdef$n_expr (self) on <self:AAttrPropdef> */
var18 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <self:AAttrPropdef> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
/* <var16:nullable AExpr> isa ANullExpr */
cltype = type_nitc__ANullExpr.color;
idtype = type_nitc__ANullExpr.id;
if(var16 == NULL) {
var19 = 0;
} else {
if(cltype >= var16->type->table_size) {
var19 = 0;
} else {
var19 = var16->type->type_table[cltype] == idtype;
}
}
var20 = !var19;
var = var20;
} else {
var = var_15;
}
if (var){
{
var21 = nitc__abstract_compiler___AAttrPropdef___evaluate_expr(self, var_v, var_recv);
}
} else {
}
RET_LABEL:;
}
/* method abstract_compiler$AAttrPropdef$evaluate_expr for (self: AAttrPropdef, AbstractCompilerVisitor, RuntimeVariable): RuntimeVariable */
val* nitc__abstract_compiler___AAttrPropdef___evaluate_expr(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_recv /* var recv: RuntimeVariable */;
val* var1 /* : nullable ANode */;
val* var3 /* : nullable ANode */;
val* var_oldnode /* var oldnode: nullable ANode */;
val* var5 /* : nullable StaticFrame */;
val* var7 /* : nullable StaticFrame */;
val* var_old_frame /* var old_frame: nullable StaticFrame */;
val* var8 /* : StaticFrame */;
val* var9 /* : nullable MMethodDef */;
val* var11 /* : nullable MMethodDef */;
val* var12 /* : MType */;
val* var14 /* : MType */;
val* var15 /* : MType */;
short int var16 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var17 /* : Array[RuntimeVariable] */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var_frame /* var frame: StaticFrame */;
val* var19 /* : nullable MType */;
val* var21 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : nullable AExpr */;
val* var29 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
val* var30 /* : nullable AExpr */;
val* var32 /* : nullable AExpr */;
val* var_nblock /* var nblock: nullable AExpr */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
val* var38 /* : RuntimeVariable */;
val* var_value /* var value: nullable Object */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
val* var44 /* : RuntimeVariable */;
static val* varonce;
val* var46 /* : String */;
char* var47 /* : CString */;
val* var48 /* : String */;
val* var49 /* : nullable Int */;
val* var50 /* : nullable Int */;
val* var51 /* : nullable Bool */;
val* var52 /* : nullable Bool */;
val* var53 /* : String */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : CString */;
val* var58 /* : String */;
val* var59 /* : nullable Int */;
val* var60 /* : nullable Int */;
val* var61 /* : nullable Bool */;
val* var62 /* : nullable Bool */;
val* var64 /* : NativeArray[String] */;
static val* varonce63;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : CString */;
val* var68 /* : String */;
val* var69 /* : nullable Int */;
val* var70 /* : nullable Int */;
val* var71 /* : nullable Bool */;
val* var72 /* : nullable Bool */;
val* var73 /* : nullable String */;
val* var75 /* : nullable String */;
val* var76 /* : String */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : CString */;
val* var80 /* : String */;
val* var81 /* : nullable Int */;
val* var82 /* : nullable Int */;
val* var83 /* : nullable Bool */;
val* var84 /* : nullable Bool */;
val* var85 /* : nullable MPropDef */;
val* var87 /* : nullable MPropDef */;
val* var88 /* : MProperty */;
val* var90 /* : MProperty */;
var_v = p0;
var_recv = p1;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$current_node (var_v) on <var_v:AbstractCompilerVisitor> */
var3 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <var_v:AbstractCompilerVisitor> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_oldnode = var1;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$current_node= (var_v,self) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val = self; /* _current_node on <var_v:AbstractCompilerVisitor> */
RET_LABEL4:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (var_v) on <var_v:AbstractCompilerVisitor> */
var7 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_old_frame = var5;
var8 = NEW_nitc__StaticFrame(&type_nitc__StaticFrame);
{
{ /* Inline modelize_property$AAttrPropdef$mreadpropdef (self) on <self:AAttrPropdef> */
var11 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mreadpropdef].val; /* _mreadpropdef on <self:AAttrPropdef> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3240);
fatal_exit(1);
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (var_recv) on <var_recv:RuntimeVariable> */
var14 = var_recv->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_recv:RuntimeVariable> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1986);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = ((val*(*)(val* self))(var12->class->vft[COLOR_nitc__model__MType__undecorate]))(var12); /* undecorate on <var12:MType>*/
}
/* <var15:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var15->type->table_size) {
var16 = 0;
} else {
var16 = var15->type->type_table[cltype] == idtype;
}
if (unlikely(!var16)) {
var_class_name = var15 == NULL ? "null" : var15->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3240);
fatal_exit(1);
}
var17 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var17, 1l); /* Direct call array$Array$with_capacity on <var17:Array[RuntimeVariable]>*/
}
var_ = var17;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_recv); /* Direct call array$AbstractArray$push on <var_:Array[RuntimeVariable]>*/
}
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_nitc__abstract_compiler__StaticFrame__visitor_61d]))(var8, var_v); /* visitor= on <var8:StaticFrame>*/
}
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_nitc__abstract_compiler__StaticFrame__mpropdef_61d]))(var8, var9); /* mpropdef= on <var8:StaticFrame>*/
}
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_nitc__abstract_compiler__StaticFrame__receiver_61d]))(var8, var15); /* receiver= on <var8:StaticFrame>*/
}
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_nitc__abstract_compiler__StaticFrame__arguments_61d]))(var8, var_); /* arguments= on <var8:StaticFrame>*/
}
{
((void(*)(val* self))(var8->class->vft[COLOR_core__kernel__Object__init]))(var8); /* init on <var8:StaticFrame>*/
}
var_frame = var8;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame= (var_v,var_frame) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val = var_frame; /* _frame on <var_v:AbstractCompilerVisitor> */
RET_LABEL18:(void)0;
}
}
{
{ /* Inline modelize_property$AAttrPropdef$mtype (self) on <self:AAttrPropdef> */
var21 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mtype].val; /* _mtype on <self:AAttrPropdef> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
var_mtype = var19;
if (var_mtype == NULL) {
var22 = 0; /* is null */
} else {
var22 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
var25 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mtype, var_other); /* == on <var_mtype:nullable MType(MType)>*/
}
var26 = !var25;
var23 = var26;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
var22 = var23;
}
if (unlikely(!var22)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3245);
fatal_exit(1);
}
{
{ /* Inline parser_nodes$AAttrPropdef$n_expr (self) on <self:AAttrPropdef> */
var29 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <self:AAttrPropdef> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_nexpr = var27;
{
{ /* Inline parser_nodes$AAttrPropdef$n_block (self) on <self:AAttrPropdef> */
var32 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_block].val; /* _n_block on <self:AAttrPropdef> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
var_nblock = var30;
if (var_nexpr == NULL) {
var33 = 0; /* is null */
} else {
var33 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_nexpr,((val*)NULL)) on <var_nexpr:nullable AExpr> */
var_other = ((val*)NULL);
{
var36 = ((short int(*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nexpr, var_other); /* == on <var_nexpr:nullable AExpr(AExpr)>*/
}
var37 = !var36;
var34 = var37;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
var33 = var34;
}
if (var33){
{
var38 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var_nexpr, var_mtype);
}
var_value = var38;
} else {
if (var_nblock == NULL) {
var39 = 0; /* is null */
} else {
var39 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_nblock,((val*)NULL)) on <var_nblock:nullable AExpr> */
var_other = ((val*)NULL);
{
var42 = ((short int(*)(val* self, val* p0))(var_nblock->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nblock, var_other); /* == on <var_nblock:nullable AExpr(AExpr)>*/
}
var43 = !var42;
var40 = var43;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
var39 = var40;
}
if (var39){
{
var44 = nitc___nitc__AbstractCompilerVisitor___new_var(var_v, var_mtype);
}
var_value = var44;
{
{ /* Inline abstract_compiler$StaticFrame$returnvar= (var_frame,var_value) on <var_frame:StaticFrame> */
var_frame->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnvar].val = var_value; /* _returnvar on <var_frame:StaticFrame> */
RET_LABEL45:(void)0;
}
}
if (likely(varonce!=NULL)) {
var46 = varonce;
} else {
var47 = "RET_LABEL";
var49 = (val*)(9l<<2|1);
var50 = (val*)(9l<<2|1);
var51 = (val*)((long)(0)<<2|3);
var52 = (val*)((long)(0)<<2|3);
var48 = core__flat___CString___to_s_unsafe(var47, var49, var50, var51, var52);
var46 = var48;
varonce = var46;
}
{
var53 = nitc___nitc__AbstractCompilerVisitor___get_name(var_v, var46);
}
{
{ /* Inline abstract_compiler$StaticFrame$returnlabel= (var_frame,var53) on <var_frame:StaticFrame> */
var_frame->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnlabel].val = var53; /* _returnlabel on <var_frame:StaticFrame> */
RET_LABEL54:(void)0;
}
}
if (likely(varonce55!=NULL)) {
var56 = varonce55;
} else {
var57 = "{";
var59 = (val*)(1l<<2|1);
var60 = (val*)(1l<<2|1);
var61 = (val*)((long)(0)<<2|3);
var62 = (val*)((long)(0)<<2|3);
var58 = core__flat___CString___to_s_unsafe(var57, var59, var60, var61, var62);
var56 = var58;
varonce55 = var56;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var56); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
nitc___nitc__AbstractCompilerVisitor___stmt(var_v, var_nblock); /* Direct call abstract_compiler$AbstractCompilerVisitor$stmt on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce63==NULL)) {
var64 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = ":(void)0;";
var69 = (val*)(9l<<2|1);
var70 = (val*)(9l<<2|1);
var71 = (val*)((long)(0)<<2|3);
var72 = (val*)((long)(0)<<2|3);
var68 = core__flat___CString___to_s_unsafe(var67, var69, var70, var71, var72);
var66 = var68;
varonce65 = var66;
}
((struct instance_core__NativeArray*)var64)->values[1]=var66;
} else {
var64 = varonce63;
varonce63 = NULL;
}
{
{ /* Inline abstract_compiler$StaticFrame$returnlabel (var_frame) on <var_frame:StaticFrame> */
var75 = var_frame->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnlabel].val; /* _returnlabel on <var_frame:StaticFrame> */
var73 = var75;
RET_LABEL74:(void)0;
}
}
if (unlikely(var73 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3257);
fatal_exit(1);
}
((struct instance_core__NativeArray*)var64)->values[0]=var73;
{
var76 = ((val*(*)(val* self))(var64->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var64); /* native_to_s on <var64:NativeArray[String]>*/
}
varonce63 = var64;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var76); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = "}";
var81 = (val*)(1l<<2|1);
var82 = (val*)(1l<<2|1);
var83 = (val*)((long)(0)<<2|3);
var84 = (val*)((long)(0)<<2|3);
var80 = core__flat___CString___to_s_unsafe(var79, var81, var82, var83, var84);
var78 = var80;
varonce77 = var78;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var78); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
} else {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3260);
fatal_exit(1);
}
}
{
{ /* Inline modelize_property$APropdef$mpropdef (self) on <self:AAttrPropdef> */
var87 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var85 = var87;
RET_LABEL86:(void)0;
}
}
if (var85 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3263);
fatal_exit(1);
} else {
{ /* Inline model$MPropDef$mproperty (var85) on <var85:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var85 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var90 = var85->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var85:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var90 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var88 = var90;
RET_LABEL89:(void)0;
}
}
{
nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__write_attribute(var_v, var88, var_recv, var_value); /* Direct call separate_compiler$SeparateCompilerVisitor$write_attribute on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame= (var_v,var_old_frame) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val = var_old_frame; /* _frame on <var_v:AbstractCompilerVisitor> */
RET_LABEL91:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$current_node= (var_v,var_oldnode) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val = var_oldnode; /* _current_node on <var_v:AbstractCompilerVisitor> */
RET_LABEL92:(void)0;
}
}
var = var_value;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AClassdef$compile_to_c for (self: AClassdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void nitc__abstract_compiler___AClassdef___compile_to_c(val* self, val* p0, val* p1, val* p2) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var /* : MProperty */;
val* var2 /* : MProperty */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
long var6 /* : Int */;
long var8 /* : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var15 /* : MType */;
val* var17 /* : MType */;
short int var18 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var19 /* : nullable RuntimeVariable */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
{
{ /* Inline model$MPropDef$mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var2 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model$MMethod$is_root_init (var) on <var:MProperty(MMethod)> */
var5 = var->attrs[COLOR_nitc__model__MMethod___is_root_init].s; /* _is_root_init on <var:MProperty(MMethod)> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
if (var3){
{
{ /* Inline array$AbstractArrayRead$length (var_arguments) on <var_arguments:Array[RuntimeVariable]> */
var8 = var_arguments->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var6,1l) on <var6:Int> */
var11 = var6 == 1l;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (unlikely(!var9)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3292);
fatal_exit(1);
}
{
var12 = nitc___nitc__MPropDef___is_intro(var_mpropdef);
}
var13 = !var12;
if (var13){
{
var14 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var14) on <var14:nullable Object(RuntimeVariable)> */
var17 = var14->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var14:nullable Object(RuntimeVariable)> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
/* <var15:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var15->type->table_size) {
var18 = 0;
} else {
var18 = var15->type->type_table[cltype] == idtype;
}
if (unlikely(!var18)) {
var_class_name = var15 == NULL ? "null" : var15->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3294);
fatal_exit(1);
}
{
var19 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__supercall(var_v, var_mpropdef, var15, var_arguments);
}
} else {
}
goto RET_LABEL;
} else {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3298);
fatal_exit(1);
}
RET_LABEL:;
}
/* method abstract_compiler$AExpr$expr for (self: AExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AExpr___expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : CString */;
val* var13 /* : String */;
val* var14 /* : nullable Int */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Bool */;
val* var17 /* : nullable Bool */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Bool */;
val* var25 /* : nullable Bool */;
val* var26 /* : String */;
val* var27 /* : Location */;
val* var29 /* : Location */;
val* var30 /* : String */;
val* var31 /* : String */;
val* var32 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
val* var39 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var41 /* : NativeArray[String] */;
static val* varonce40;
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
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : CString */;
val* var61 /* : String */;
val* var62 /* : nullable Int */;
val* var63 /* : nullable Int */;
val* var64 /* : nullable Bool */;
val* var65 /* : nullable Bool */;
val* var66 /* : String */;
val* var67 /* : String */;
val* var68 /* : String */;
var_v = p0;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "PRINT_ERROR(\"NOT YET IMPLEMENTED ";
var6 = (val*)(33l<<2|1);
var7 = (val*)(33l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[0]=var3;
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = ":";
var14 = (val*)(1l<<2|1);
var15 = (val*)(1l<<2|1);
var16 = (val*)((long)(0)<<2|3);
var17 = (val*)((long)(0)<<2|3);
var13 = core__flat___CString___to_s_unsafe(var12, var14, var15, var16, var17);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var1)->values[2]=var11;
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "\\n\");";
var22 = (val*)(5l<<2|1);
var23 = (val*)(5l<<2|1);
var24 = (val*)((long)(0)<<2|3);
var25 = (val*)((long)(0)<<2|3);
var21 = core__flat___CString___to_s_unsafe(var20, var22, var23, var24, var25);
var19 = var21;
varonce18 = var19;
}
((struct instance_core__NativeArray*)var1)->values[4]=var19;
} else {
var1 = varonce;
varonce = NULL;
}
{
var26 = core__abstract_text___Object___class_name(self);
}
((struct instance_core__NativeArray*)var1)->values[1]=var26;
{
{ /* Inline parser_nodes$ANode$location (self) on <self:AExpr> */
var29 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <self:AExpr> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
var30 = nitc___nitc__Location___core__abstract_text__Object__to_s(var27);
}
((struct instance_core__NativeArray*)var1)->values[3]=var30;
{
var31 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var31); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
var32 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__typing__AExpr__mtype]))(self); /* mtype on <self:AExpr>*/
}
var_mtype = var32;
if (var_mtype == NULL) {
var33 = 1; /* is null */
} else {
var33 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var38 = var_mtype == var_other;
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
var33 = var34;
}
if (var33){
var = ((val*)NULL);
goto RET_LABEL;
} else {
{
var39 = nitc___nitc__AbstractCompilerVisitor___new_var(var_v, var_mtype);
}
var_res = var39;
if (unlikely(varonce40==NULL)) {
var41 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "/* ";
var46 = (val*)(3l<<2|1);
var47 = (val*)(3l<<2|1);
var48 = (val*)((long)(0)<<2|3);
var49 = (val*)((long)(0)<<2|3);
var45 = core__flat___CString___to_s_unsafe(var44, var46, var47, var48, var49);
var43 = var45;
varonce42 = var43;
}
((struct instance_core__NativeArray*)var41)->values[0]=var43;
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = " = NOT YET ";
var54 = (val*)(11l<<2|1);
var55 = (val*)(11l<<2|1);
var56 = (val*)((long)(0)<<2|3);
var57 = (val*)((long)(0)<<2|3);
var53 = core__flat___CString___to_s_unsafe(var52, var54, var55, var56, var57);
var51 = var53;
varonce50 = var51;
}
((struct instance_core__NativeArray*)var41)->values[2]=var51;
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = " */";
var62 = (val*)(3l<<2|1);
var63 = (val*)(3l<<2|1);
var64 = (val*)((long)(0)<<2|3);
var65 = (val*)((long)(0)<<2|3);
var61 = core__flat___CString___to_s_unsafe(var60, var62, var63, var64, var65);
var59 = var61;
varonce58 = var59;
}
((struct instance_core__NativeArray*)var41)->values[4]=var59;
} else {
var41 = varonce40;
varonce40 = NULL;
}
{
var66 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var41)->values[1]=var66;
{
var67 = core__abstract_text___Object___class_name(self);
}
((struct instance_core__NativeArray*)var41)->values[3]=var67;
{
var68 = ((val*(*)(val* self))(var41->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var41); /* native_to_s on <var41:NativeArray[String]>*/
}
varonce40 = var41;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var68); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method abstract_compiler$AExpr$stmt for (self: AExpr, AbstractCompilerVisitor) */
void nitc__abstract_compiler___AExpr___stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : nullable RuntimeVariable */;
var_v = p0;
{
var = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__abstract_compiler__AExpr__expr]))(self, var_v); /* expr on <self:AExpr>*/
}
RET_LABEL:;
}
/* method abstract_compiler$ABlockExpr$stmt for (self: ABlockExpr, AbstractCompilerVisitor) */
void nitc__abstract_compiler___ABlockExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : ANodes[AExpr] */;
val* var2 /* : ANodes[AExpr] */;
val* var_ /* var : ANodes[AExpr] */;
val* var3 /* : Iterator[ANode] */;
val* var_4 /* var : Iterator[AExpr] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_e /* var e: AExpr */;
var_v = p0;
{
{ /* Inline parser_nodes$ABlockExpr$n_expr (self) on <self:ABlockExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1811);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_ = var;
{
var3 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_);
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:Iterator[AExpr]>*/
}
if (var5){
} else {
goto BREAK_label;
}
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:Iterator[AExpr]>*/
}
var_e = var6;
{
nitc___nitc__AbstractCompilerVisitor___stmt(var_v, var_e); /* Direct call abstract_compiler$AbstractCompilerVisitor$stmt on <var_v:AbstractCompilerVisitor>*/
}
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:Iterator[AExpr]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:Iterator[AExpr]>*/
}
RET_LABEL:;
}
/* method abstract_compiler$ABlockExpr$expr for (self: ABlockExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___ABlockExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : ANodes[AExpr] */;
val* var3 /* : ANodes[AExpr] */;
val* var4 /* : nullable Object */;
val* var_last /* var last: AExpr */;
val* var5 /* : ANodes[AExpr] */;
val* var7 /* : ANodes[AExpr] */;
val* var_ /* var : ANodes[AExpr] */;
val* var8 /* : Iterator[ANode] */;
val* var_9 /* var : Iterator[AExpr] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_e /* var e: AExpr */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes$ABlockExpr$n_expr (self) on <self:ABlockExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1811);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__SequenceRead___last(var1);
}
var_last = var4;
{
{ /* Inline parser_nodes$ABlockExpr$n_expr (self) on <self:ABlockExpr> */
var7 = self->attrs[COLOR_nitc__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1811);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_ = var5;
{
var8 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_);
}
var_9 = var8;
for(;;) {
{
var10 = ((short int(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_9); /* is_ok on <var_9:Iterator[AExpr]>*/
}
if (var10){
} else {
goto BREAK_label;
}
{
var11 = ((val*(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_9); /* item on <var_9:Iterator[AExpr]>*/
}
var_e = var11;
{
{ /* Inline kernel$Object$== (var_e,var_last) on <var_e:AExpr> */
var_other = var_last;
{
{ /* Inline kernel$Object$is_same_instance (var_e,var_other) on <var_e:AExpr> */
var16 = var_e == var_other;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
goto BREAK_label;
} else {
}
{
nitc___nitc__AbstractCompilerVisitor___stmt(var_v, var_e); /* Direct call abstract_compiler$AbstractCompilerVisitor$stmt on <var_v:AbstractCompilerVisitor>*/
}
{
((void(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_9); /* next on <var_9:Iterator[AExpr]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_9); /* finish on <var_9:Iterator[AExpr]>*/
}
{
var17 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var_last, ((val*)NULL));
}
var = var17;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AVardeclExpr$stmt for (self: AVardeclExpr, AbstractCompilerVisitor) */
void nitc__abstract_compiler___AVardeclExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : nullable Variable */;
val* var2 /* : nullable Variable */;
val* var_variable /* var variable: Variable */;
val* var3 /* : nullable AExpr */;
val* var5 /* : nullable AExpr */;
val* var_ne /* var ne: nullable AExpr */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : nullable MType */;
val* var13 /* : nullable MType */;
val* var14 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var15 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline scope$AVardeclExpr$variable (self) on <self:AVardeclExpr> */
var2 = self->attrs[COLOR_nitc__scope__AVardeclExpr___variable].val; /* _variable on <self:AVardeclExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3346);
fatal_exit(1);
}
var_variable = var;
{
{ /* Inline parser_nodes$AVardeclExpr$n_expr (self) on <self:AVardeclExpr> */
var5 = self->attrs[COLOR_nitc__parser_nodes__AVardeclExpr___n_expr].val; /* _n_expr on <self:AVardeclExpr> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_ne = var3;
if (var_ne == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_ne,((val*)NULL)) on <var_ne:nullable AExpr> */
var_other = ((val*)NULL);
{
var9 = ((short int(*)(val* self, val* p0))(var_ne->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ne, var_other); /* == on <var_ne:nullable AExpr(AExpr)>*/
}
var10 = !var9;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (var6){
{
{ /* Inline typing$Variable$declared_type (var_variable) on <var_variable:Variable> */
var13 = var_variable->attrs[COLOR_nitc__typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var_ne, var11);
}
var_i = var14;
{
var15 = nitc___nitc__AbstractCompilerVisitor___variable(var_v, var_variable);
}
{
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var15, var_i); /* Direct call abstract_compiler$AbstractCompilerVisitor$assign on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
RET_LABEL:;
}
/* method abstract_compiler$AVarExpr$expr for (self: AVarExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AVarExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable Variable */;
val* var3 /* : nullable Variable */;
val* var4 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var5 /* : nullable MType */;
val* var7 /* : nullable MType */;
val* var_mtype /* var mtype: MType */;
val* var8 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline scope$AVarFormExpr$variable (self) on <self:AVarExpr> */
var3 = self->attrs[COLOR_nitc__scope__AVarFormExpr___variable].val; /* _variable on <self:AVarExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3358);
fatal_exit(1);
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___variable(var_v, var1);
}
var_res = var4;
{
{ /* Inline typing$AExpr$mtype (self) on <self:AVarExpr> */
var7 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:AVarExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3359);
fatal_exit(1);
}
var_mtype = var5;
{
var8 = nitc___nitc__AbstractCompilerVisitor___autoadapt(var_v, var_res, var_mtype);
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AVarAssignExpr$expr for (self: AVarAssignExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AVarAssignExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable Variable */;
val* var3 /* : nullable Variable */;
val* var_variable /* var variable: Variable */;
val* var4 /* : AExpr */;
val* var6 /* : AExpr */;
val* var7 /* : nullable MType */;
val* var9 /* : nullable MType */;
val* var10 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var11 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline scope$AVarFormExpr$variable (self) on <self:AVarAssignExpr> */
var3 = self->attrs[COLOR_nitc__scope__AVarFormExpr___variable].val; /* _variable on <self:AVarAssignExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3367);
fatal_exit(1);
}
var_variable = var1;
{
{ /* Inline parser_nodes$AAssignFormExpr$n_value (self) on <self:AVarAssignExpr> */
var6 = self->attrs[COLOR_nitc__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AVarAssignExpr> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2073);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline typing$Variable$declared_type (var_variable) on <var_variable:Variable> */
var9 = var_variable->attrs[COLOR_nitc__typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var4, var7);
}
var_i = var10;
{
var11 = nitc___nitc__AbstractCompilerVisitor___variable(var_v, var_variable);
}
{
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var11, var_i); /* Direct call abstract_compiler$AbstractCompilerVisitor$assign on <var_v:AbstractCompilerVisitor>*/
}
var = var_i;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AVarReassignExpr$stmt for (self: AVarReassignExpr, AbstractCompilerVisitor) */
void nitc__abstract_compiler___AVarReassignExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : nullable Variable */;
val* var2 /* : nullable Variable */;
val* var_variable /* var variable: Variable */;
val* var3 /* : RuntimeVariable */;
val* var_vari /* var vari: RuntimeVariable */;
val* var4 /* : AExpr */;
val* var6 /* : AExpr */;
val* var7 /* : nullable MType */;
val* var9 /* : nullable MType */;
val* var10 /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var11 /* : nullable CallSite */;
val* var13 /* : nullable CallSite */;
val* var14 /* : Array[RuntimeVariable] */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var15 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline scope$AVarFormExpr$variable (self) on <self:AVarReassignExpr> */
var2 = self->attrs[COLOR_nitc__scope__AVarFormExpr___variable].val; /* _variable on <self:AVarReassignExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3377);
fatal_exit(1);
}
var_variable = var;
{
var3 = nitc___nitc__AbstractCompilerVisitor___variable(var_v, var_variable);
}
var_vari = var3;
{
{ /* Inline parser_nodes$AReassignFormExpr$n_value (self) on <self:AVarReassignExpr> */
var6 = self->attrs[COLOR_nitc__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AVarReassignExpr> */
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
{ /* Inline typing$Variable$declared_type (var_variable) on <var_variable:Variable> */
var9 = var_variable->attrs[COLOR_nitc__typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var4, var7);
}
var_value = var10;
{
{ /* Inline typing$AReassignFormExpr$reassign_callsite (self) on <self:AVarReassignExpr> */
var13 = self->attrs[COLOR_nitc__typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:AVarReassignExpr> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3380);
fatal_exit(1);
}
var14 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var14, 2l); /* Direct call array$Array$with_capacity on <var14:Array[RuntimeVariable]>*/
}
var_ = var14;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_vari); /* Direct call array$AbstractArray$push on <var_:Array[RuntimeVariable]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_value); /* Direct call array$AbstractArray$push on <var_:Array[RuntimeVariable]>*/
}
{
var15 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var11, var_); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var_res = var15;
if (var_res == NULL) {
var16 = 0; /* is null */
} else {
var16 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_res,((val*)NULL)) on <var_res:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var19 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
var20 = !var19;
var17 = var20;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var16 = var17;
}
if (unlikely(!var16)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3381);
fatal_exit(1);
}
{
var21 = nitc___nitc__AbstractCompilerVisitor___variable(var_v, var_variable);
}
{
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var21, var_res); /* Direct call abstract_compiler$AbstractCompilerVisitor$assign on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler$ASelfExpr$expr for (self: ASelfExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___ASelfExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable StaticFrame */;
val* var3 /* : nullable StaticFrame */;
val* var4 /* : Array[RuntimeVariable] */;
val* var6 /* : Array[RuntimeVariable] */;
val* var7 /* : nullable Object */;
var_v = p0;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (var_v) on <var_v:AbstractCompilerVisitor> */
var3 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3387);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler$StaticFrame$arguments (var1) on <var1:nullable StaticFrame> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2034);
fatal_exit(1);
}
var6 = var1->attrs[COLOR_nitc__abstract_compiler__StaticFrame___arguments].val; /* _arguments on <var1:nullable StaticFrame> */
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
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AImplicitSelfExpr$expr for (self: AImplicitSelfExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AImplicitSelfExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable RuntimeVariable */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
val* var9 /* : nullable Int */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Bool */;
val* var12 /* : nullable Bool */;
val* var13 /* : nullable MType */;
val* var15 /* : nullable MType */;
val* var16 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline typing$AImplicitSelfExpr$is_sys (self) on <self:AImplicitSelfExpr> */
var3 = self->attrs[COLOR_nitc__typing__AImplicitSelfExpr___is_sys].s; /* _is_sys on <self:AImplicitSelfExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = !var1;
if (var4){
{
var5 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__abstract_compiler___AImplicitSelfExpr___AExpr__expr]))(self, p0); /* expr on <self:AImplicitSelfExpr>*/
}
var = var5;
goto RET_LABEL;
} else {
}
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "glob_sys";
var9 = (val*)(8l<<2|1);
var10 = (val*)(8l<<2|1);
var11 = (val*)((long)(0)<<2|3);
var12 = (val*)((long)(0)<<2|3);
var8 = core__flat___CString___to_s_unsafe(var7, var9, var10, var11, var12);
var6 = var8;
varonce = var6;
}
{
{ /* Inline typing$AExpr$mtype (self) on <self:AImplicitSelfExpr> */
var15 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:AImplicitSelfExpr> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3393);
fatal_exit(1);
}
{
var16 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var6, var13);
}
var = var16;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AEscapeExpr$stmt for (self: AEscapeExpr, AbstractCompilerVisitor) */
void nitc__abstract_compiler___AEscapeExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : NativeArray[String] */;
static val* varonce;
static val* varonce1;
val* var2 /* : String */;
char* var3 /* : CString */;
val* var4 /* : String */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Bool */;
val* var8 /* : nullable Bool */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : CString */;
val* var12 /* : String */;
val* var13 /* : nullable Int */;
val* var14 /* : nullable Int */;
val* var15 /* : nullable Bool */;
val* var16 /* : nullable Bool */;
val* var17 /* : nullable EscapeMark */;
val* var19 /* : nullable EscapeMark */;
val* var20 /* : String */;
val* var21 /* : String */;
var_v = p0;
if (unlikely(varonce==NULL)) {
var = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce1!=NULL)) {
var2 = varonce1;
} else {
var3 = "goto BREAK_";
var5 = (val*)(11l<<2|1);
var6 = (val*)(11l<<2|1);
var7 = (val*)((long)(0)<<2|3);
var8 = (val*)((long)(0)<<2|3);
var4 = core__flat___CString___to_s_unsafe(var3, var5, var6, var7, var8);
var2 = var4;
varonce1 = var2;
}
((struct instance_core__NativeArray*)var)->values[0]=var2;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = ";";
var13 = (val*)(1l<<2|1);
var14 = (val*)(1l<<2|1);
var15 = (val*)((long)(0)<<2|3);
var16 = (val*)((long)(0)<<2|3);
var12 = core__flat___CString___to_s_unsafe(var11, var13, var14, var15, var16);
var10 = var12;
varonce9 = var10;
}
((struct instance_core__NativeArray*)var)->values[2]=var10;
} else {
var = varonce;
varonce = NULL;
}
{
{ /* Inline scope$AEscapeExpr$escapemark (self) on <self:AEscapeExpr> */
var19 = self->attrs[COLOR_nitc__scope__AEscapeExpr___escapemark].val; /* _escapemark on <self:AEscapeExpr> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = nitc___nitc__AbstractCompilerVisitor___escapemark_name(var_v, var17);
}
((struct instance_core__NativeArray*)var)->values[1]=var20;
{
var21 = ((val*(*)(val* self))(var->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var); /* native_to_s on <var:NativeArray[String]>*/
}
varonce = var;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var21); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AReturnExpr$stmt for (self: AReturnExpr, AbstractCompilerVisitor) */
void nitc__abstract_compiler___AReturnExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : nullable AExpr */;
val* var2 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable StaticFrame */;
val* var10 /* : nullable StaticFrame */;
val* var11 /* : nullable RuntimeVariable */;
val* var13 /* : nullable RuntimeVariable */;
val* var_returnvar /* var returnvar: RuntimeVariable */;
val* var14 /* : MType */;
val* var16 /* : MType */;
val* var17 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var18 /* : NativeArray[String] */;
static val* varonce;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : CString */;
val* var22 /* : String */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Int */;
val* var25 /* : nullable Bool */;
val* var26 /* : nullable Bool */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : CString */;
val* var30 /* : String */;
val* var31 /* : nullable Int */;
val* var32 /* : nullable Int */;
val* var33 /* : nullable Bool */;
val* var34 /* : nullable Bool */;
val* var35 /* : nullable StaticFrame */;
val* var37 /* : nullable StaticFrame */;
val* var38 /* : nullable String */;
val* var40 /* : nullable String */;
val* var41 /* : String */;
var_v = p0;
{
{ /* Inline parser_nodes$AEscapeExpr$n_expr (self) on <self:AReturnExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AEscapeExpr___n_expr].val; /* _n_expr on <self:AReturnExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_nexpr = var;
if (var_nexpr == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_nexpr,((val*)NULL)) on <var_nexpr:nullable AExpr> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nexpr, var_other); /* == on <var_nexpr:nullable AExpr(AExpr)>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (var_v) on <var_v:AbstractCompilerVisitor> */
var10 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
if (var8 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3406);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler$StaticFrame$returnvar (var8) on <var8:nullable StaticFrame> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2037);
fatal_exit(1);
}
var13 = var8->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnvar].val; /* _returnvar on <var8:nullable StaticFrame> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3406);
fatal_exit(1);
}
var_returnvar = var11;
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_returnvar) on <var_returnvar:RuntimeVariable> */
var16 = var_returnvar->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_returnvar:RuntimeVariable> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var_nexpr, var14);
}
var_i = var17;
{
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var_returnvar, var_i); /* Direct call abstract_compiler$AbstractCompilerVisitor$assign on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (unlikely(varonce==NULL)) {
var18 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "goto ";
var23 = (val*)(5l<<2|1);
var24 = (val*)(5l<<2|1);
var25 = (val*)((long)(0)<<2|3);
var26 = (val*)((long)(0)<<2|3);
var22 = core__flat___CString___to_s_unsafe(var21, var23, var24, var25, var26);
var20 = var22;
varonce19 = var20;
}
((struct instance_core__NativeArray*)var18)->values[0]=var20;
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = ";";
var31 = (val*)(1l<<2|1);
var32 = (val*)(1l<<2|1);
var33 = (val*)((long)(0)<<2|3);
var34 = (val*)((long)(0)<<2|3);
var30 = core__flat___CString___to_s_unsafe(var29, var31, var32, var33, var34);
var28 = var30;
varonce27 = var28;
}
((struct instance_core__NativeArray*)var18)->values[2]=var28;
} else {
var18 = varonce;
varonce = NULL;
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (var_v) on <var_v:AbstractCompilerVisitor> */
var37 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var35 = var37;
RET_LABEL36:(void)0;
}
}
if (var35 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3410);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler$StaticFrame$returnlabel (var35) on <var35:nullable StaticFrame> */
if (unlikely(var35 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2040);
fatal_exit(1);
}
var40 = var35->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnlabel].val; /* _returnlabel on <var35:nullable StaticFrame> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
if (unlikely(var38 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3410);
fatal_exit(1);
}
((struct instance_core__NativeArray*)var18)->values[1]=var38;
{
var41 = ((val*(*)(val* self))(var18->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var18); /* native_to_s on <var18:NativeArray[String]>*/
}
varonce = var18;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var41); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AAbortExpr$stmt for (self: AAbortExpr, AbstractCompilerVisitor) */
void nitc__abstract_compiler___AAbortExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : CString */;
val* var2 /* : String */;
val* var3 /* : nullable Int */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Bool */;
val* var6 /* : nullable Bool */;
var_v = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "Aborted";
var3 = (val*)(7l<<2|1);
var4 = (val*)(7l<<2|1);
var5 = (val*)((long)(0)<<2|3);
var6 = (val*)((long)(0)<<2|3);
var2 = core__flat___CString___to_s_unsafe(var1, var3, var4, var5, var6);
var = var2;
varonce = var;
}
{
nitc___nitc__AbstractCompilerVisitor___add_abort(var_v, var); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_abort on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AIfExpr$stmt for (self: AIfExpr, AbstractCompilerVisitor) */
void nitc__abstract_compiler___AIfExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : RuntimeVariable */;
val* var_cond /* var cond: RuntimeVariable */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
val* var9 /* : nullable Int */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Bool */;
val* var12 /* : nullable Bool */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : CString */;
val* var16 /* : String */;
val* var17 /* : nullable Int */;
val* var18 /* : nullable Int */;
val* var19 /* : nullable Bool */;
val* var20 /* : nullable Bool */;
val* var21 /* : String */;
val* var22 /* : String */;
val* var23 /* : nullable AExpr */;
val* var25 /* : nullable AExpr */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : CString */;
val* var29 /* : String */;
val* var30 /* : nullable Int */;
val* var31 /* : nullable Int */;
val* var32 /* : nullable Bool */;
val* var33 /* : nullable Bool */;
val* var34 /* : nullable AExpr */;
val* var36 /* : nullable AExpr */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : CString */;
val* var40 /* : String */;
val* var41 /* : nullable Int */;
val* var42 /* : nullable Int */;
val* var43 /* : nullable Bool */;
val* var44 /* : nullable Bool */;
var_v = p0;
{
{ /* Inline parser_nodes$AIfExpr$n_expr (self) on <self:AIfExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_expr].val; /* _n_expr on <self:AIfExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1924);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc___nitc__AbstractCompilerVisitor___expr_bool(var_v, var);
}
var_cond = var3;
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "if (";
var9 = (val*)(4l<<2|1);
var10 = (val*)(4l<<2|1);
var11 = (val*)((long)(0)<<2|3);
var12 = (val*)((long)(0)<<2|3);
var8 = core__flat___CString___to_s_unsafe(var7, var9, var10, var11, var12);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var4)->values[0]=var6;
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "){";
var17 = (val*)(2l<<2|1);
var18 = (val*)(2l<<2|1);
var19 = (val*)((long)(0)<<2|3);
var20 = (val*)((long)(0)<<2|3);
var16 = core__flat___CString___to_s_unsafe(var15, var17, var18, var19, var20);
var14 = var16;
varonce13 = var14;
}
((struct instance_core__NativeArray*)var4)->values[2]=var14;
} else {
var4 = varonce;
varonce = NULL;
}
{
var21 = ((val*(*)(val* self))(var_cond->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_cond); /* to_s on <var_cond:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var4)->values[1]=var21;
{
var22 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var22); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes$AIfExpr$n_then (self) on <self:AIfExpr> */
var25 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_then].val; /* _n_then on <self:AIfExpr> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___stmt(var_v, var23); /* Direct call abstract_compiler$AbstractCompilerVisitor$stmt on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "} else {";
var30 = (val*)(8l<<2|1);
var31 = (val*)(8l<<2|1);
var32 = (val*)((long)(0)<<2|3);
var33 = (val*)((long)(0)<<2|3);
var29 = core__flat___CString___to_s_unsafe(var28, var30, var31, var32, var33);
var27 = var29;
varonce26 = var27;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var27); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes$AIfExpr$n_else (self) on <self:AIfExpr> */
var36 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_else].val; /* _n_else on <self:AIfExpr> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___stmt(var_v, var34); /* Direct call abstract_compiler$AbstractCompilerVisitor$stmt on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = "}";
var41 = (val*)(1l<<2|1);
var42 = (val*)(1l<<2|1);
var43 = (val*)((long)(0)<<2|3);
var44 = (val*)((long)(0)<<2|3);
var40 = core__flat___CString___to_s_unsafe(var39, var41, var42, var43, var44);
var38 = var40;
varonce37 = var38;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var38); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AIfExpr$expr for (self: AIfExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AIfExpr___AExpr__expr(val* self, val* p0) {
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
char* var12 /* : CString */;
val* var13 /* : String */;
val* var14 /* : nullable Int */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Bool */;
val* var17 /* : nullable Bool */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Bool */;
val* var25 /* : nullable Bool */;
val* var26 /* : String */;
val* var27 /* : String */;
val* var28 /* : nullable AExpr */;
val* var30 /* : nullable AExpr */;
val* var31 /* : RuntimeVariable */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : CString */;
val* var35 /* : String */;
val* var36 /* : nullable Int */;
val* var37 /* : nullable Int */;
val* var38 /* : nullable Bool */;
val* var39 /* : nullable Bool */;
val* var40 /* : nullable AExpr */;
val* var42 /* : nullable AExpr */;
val* var43 /* : RuntimeVariable */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : CString */;
val* var47 /* : String */;
val* var48 /* : nullable Int */;
val* var49 /* : nullable Int */;
val* var50 /* : nullable Bool */;
val* var51 /* : nullable Bool */;
var_v = p0;
{
{ /* Inline typing$AExpr$mtype (self) on <self:AIfExpr> */
var3 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:AIfExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3431);
fatal_exit(1);
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___new_var(var_v, var1);
}
var_res = var4;
{
{ /* Inline parser_nodes$AIfExpr$n_expr (self) on <self:AIfExpr> */
var7 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_expr].val; /* _n_expr on <self:AIfExpr> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1924);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nitc___nitc__AbstractCompilerVisitor___expr_bool(var_v, var5);
}
var_cond = var8;
if (unlikely(varonce==NULL)) {
var9 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "if (";
var14 = (val*)(4l<<2|1);
var15 = (val*)(4l<<2|1);
var16 = (val*)((long)(0)<<2|3);
var17 = (val*)((long)(0)<<2|3);
var13 = core__flat___CString___to_s_unsafe(var12, var14, var15, var16, var17);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var9)->values[0]=var11;
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "){";
var22 = (val*)(2l<<2|1);
var23 = (val*)(2l<<2|1);
var24 = (val*)((long)(0)<<2|3);
var25 = (val*)((long)(0)<<2|3);
var21 = core__flat___CString___to_s_unsafe(var20, var22, var23, var24, var25);
var19 = var21;
varonce18 = var19;
}
((struct instance_core__NativeArray*)var9)->values[2]=var19;
} else {
var9 = varonce;
varonce = NULL;
}
{
var26 = ((val*(*)(val* self))(var_cond->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_cond); /* to_s on <var_cond:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var9)->values[1]=var26;
{
var27 = ((val*(*)(val* self))(var9->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var9); /* native_to_s on <var9:NativeArray[String]>*/
}
varonce = var9;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var27); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes$AIfExpr$n_then (self) on <self:AIfExpr> */
var30 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_then].val; /* _n_then on <self:AIfExpr> */
var28 = var30;
RET_LABEL29:(void)0;
}
}
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3434);
fatal_exit(1);
}
{
var31 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var28, ((val*)NULL));
}
{
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var_res, var31); /* Direct call abstract_compiler$AbstractCompilerVisitor$assign on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "} else {";
var36 = (val*)(8l<<2|1);
var37 = (val*)(8l<<2|1);
var38 = (val*)((long)(0)<<2|3);
var39 = (val*)((long)(0)<<2|3);
var35 = core__flat___CString___to_s_unsafe(var34, var36, var37, var38, var39);
var33 = var35;
varonce32 = var33;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var33); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes$AIfExpr$n_else (self) on <self:AIfExpr> */
var42 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_else].val; /* _n_else on <self:AIfExpr> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
if (unlikely(var40 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3436);
fatal_exit(1);
}
{
var43 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var40, ((val*)NULL));
}
{
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var_res, var43); /* Direct call abstract_compiler$AbstractCompilerVisitor$assign on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = "}";
var48 = (val*)(1l<<2|1);
var49 = (val*)(1l<<2|1);
var50 = (val*)((long)(0)<<2|3);
var51 = (val*)((long)(0)<<2|3);
var47 = core__flat___CString___to_s_unsafe(var46, var48, var49, var50, var51);
var45 = var47;
varonce44 = var45;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var45); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AIfexprExpr$expr for (self: AIfexprExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AIfexprExpr___AExpr__expr(val* self, val* p0) {
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
char* var12 /* : CString */;
val* var13 /* : String */;
val* var14 /* : nullable Int */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Bool */;
val* var17 /* : nullable Bool */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Bool */;
val* var25 /* : nullable Bool */;
val* var26 /* : String */;
val* var27 /* : String */;
val* var28 /* : AExpr */;
val* var30 /* : AExpr */;
val* var31 /* : RuntimeVariable */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : CString */;
val* var35 /* : String */;
val* var36 /* : nullable Int */;
val* var37 /* : nullable Int */;
val* var38 /* : nullable Bool */;
val* var39 /* : nullable Bool */;
val* var40 /* : AExpr */;
val* var42 /* : AExpr */;
val* var43 /* : RuntimeVariable */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : CString */;
val* var47 /* : String */;
val* var48 /* : nullable Int */;
val* var49 /* : nullable Int */;
val* var50 /* : nullable Bool */;
val* var51 /* : nullable Bool */;
var_v = p0;
{
{ /* Inline typing$AExpr$mtype (self) on <self:AIfexprExpr> */
var3 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:AIfexprExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3445);
fatal_exit(1);
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___new_var(var_v, var1);
}
var_res = var4;
{
{ /* Inline parser_nodes$AIfexprExpr$n_expr (self) on <self:AIfexprExpr> */
var7 = self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_expr].val; /* _n_expr on <self:AIfexprExpr> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1947);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nitc___nitc__AbstractCompilerVisitor___expr_bool(var_v, var5);
}
var_cond = var8;
if (unlikely(varonce==NULL)) {
var9 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "if (";
var14 = (val*)(4l<<2|1);
var15 = (val*)(4l<<2|1);
var16 = (val*)((long)(0)<<2|3);
var17 = (val*)((long)(0)<<2|3);
var13 = core__flat___CString___to_s_unsafe(var12, var14, var15, var16, var17);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var9)->values[0]=var11;
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "){";
var22 = (val*)(2l<<2|1);
var23 = (val*)(2l<<2|1);
var24 = (val*)((long)(0)<<2|3);
var25 = (val*)((long)(0)<<2|3);
var21 = core__flat___CString___to_s_unsafe(var20, var22, var23, var24, var25);
var19 = var21;
varonce18 = var19;
}
((struct instance_core__NativeArray*)var9)->values[2]=var19;
} else {
var9 = varonce;
varonce = NULL;
}
{
var26 = ((val*(*)(val* self))(var_cond->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_cond); /* to_s on <var_cond:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var9)->values[1]=var26;
{
var27 = ((val*(*)(val* self))(var9->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var9); /* native_to_s on <var9:NativeArray[String]>*/
}
varonce = var9;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var27); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes$AIfexprExpr$n_then (self) on <self:AIfexprExpr> */
var30 = self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_then].val; /* _n_then on <self:AIfexprExpr> */
if (unlikely(var30 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_then");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1953);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
var31 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var28, ((val*)NULL));
}
{
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var_res, var31); /* Direct call abstract_compiler$AbstractCompilerVisitor$assign on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "} else {";
var36 = (val*)(8l<<2|1);
var37 = (val*)(8l<<2|1);
var38 = (val*)((long)(0)<<2|3);
var39 = (val*)((long)(0)<<2|3);
var35 = core__flat___CString___to_s_unsafe(var34, var36, var37, var38, var39);
var33 = var35;
varonce32 = var33;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var33); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes$AIfexprExpr$n_else (self) on <self:AIfexprExpr> */
var42 = self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_else].val; /* _n_else on <self:AIfexprExpr> */
if (unlikely(var42 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_else");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1959);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
var43 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var40, ((val*)NULL));
}
{
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var_res, var43); /* Direct call abstract_compiler$AbstractCompilerVisitor$assign on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = "}";
var48 = (val*)(1l<<2|1);
var49 = (val*)(1l<<2|1);
var50 = (val*)((long)(0)<<2|3);
var51 = (val*)((long)(0)<<2|3);
var47 = core__flat___CString___to_s_unsafe(var46, var48, var49, var50, var51);
var45 = var47;
varonce44 = var45;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var45); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$ADoExpr$stmt for (self: ADoExpr, AbstractCompilerVisitor) */
void nitc__abstract_compiler___ADoExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : nullable AExpr */;
val* var2 /* : nullable AExpr */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : CString */;
val* var10 /* : String */;
val* var11 /* : nullable Int */;
val* var12 /* : nullable Int */;
val* var13 /* : nullable Bool */;
val* var14 /* : nullable Bool */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : CString */;
val* var18 /* : String */;
val* var19 /* : nullable Int */;
val* var20 /* : nullable Int */;
val* var21 /* : nullable Bool */;
val* var22 /* : nullable Bool */;
val* var23 /* : nullable AExpr */;
val* var25 /* : nullable AExpr */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : CString */;
val* var29 /* : String */;
val* var30 /* : nullable Int */;
val* var31 /* : nullable Int */;
val* var32 /* : nullable Bool */;
val* var33 /* : nullable Bool */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : CString */;
val* var37 /* : String */;
val* var38 /* : nullable Int */;
val* var39 /* : nullable Int */;
val* var40 /* : nullable Bool */;
val* var41 /* : nullable Bool */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : CString */;
val* var45 /* : String */;
val* var46 /* : nullable Int */;
val* var47 /* : nullable Int */;
val* var48 /* : nullable Bool */;
val* var49 /* : nullable Bool */;
val* var50 /* : nullable AExpr */;
val* var52 /* : nullable AExpr */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : CString */;
val* var56 /* : String */;
val* var57 /* : nullable Int */;
val* var58 /* : nullable Int */;
val* var59 /* : nullable Bool */;
val* var60 /* : nullable Bool */;
val* var61 /* : nullable AExpr */;
val* var63 /* : nullable AExpr */;
val* var64 /* : nullable EscapeMark */;
val* var66 /* : nullable EscapeMark */;
var_v = p0;
{
{ /* Inline parser_nodes$ADoExpr$n_catch (self) on <self:ADoExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ADoExpr___n_catch].val; /* _n_catch on <self:ADoExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var,((val*)NULL)) on <var:nullable AExpr> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_core__kernel__Object___61d_61d]))(var, var_other); /* == on <var:nullable AExpr(AExpr)>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
if (likely(varonce!=NULL)) {
var8 = varonce;
} else {
var9 = "catchStack.cursor += 1;";
var11 = (val*)(23l<<2|1);
var12 = (val*)(23l<<2|1);
var13 = (val*)((long)(0)<<2|3);
var14 = (val*)((long)(0)<<2|3);
var10 = core__flat___CString___to_s_unsafe(var9, var11, var12, var13, var14);
var8 = var10;
varonce = var8;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var8); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "if(!setjmp(catchStack.envs[catchStack.cursor])){";
var19 = (val*)(48l<<2|1);
var20 = (val*)(48l<<2|1);
var21 = (val*)((long)(0)<<2|3);
var22 = (val*)((long)(0)<<2|3);
var18 = core__flat___CString___to_s_unsafe(var17, var19, var20, var21, var22);
var16 = var18;
varonce15 = var16;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var16); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes$ADoExpr$n_block (self) on <self:ADoExpr> */
var25 = self->attrs[COLOR_nitc__parser_nodes__ADoExpr___n_block].val; /* _n_block on <self:ADoExpr> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___stmt(var_v, var23); /* Direct call abstract_compiler$AbstractCompilerVisitor$stmt on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "catchStack.cursor -= 1;";
var30 = (val*)(23l<<2|1);
var31 = (val*)(23l<<2|1);
var32 = (val*)((long)(0)<<2|3);
var33 = (val*)((long)(0)<<2|3);
var29 = core__flat___CString___to_s_unsafe(var28, var30, var31, var32, var33);
var27 = var29;
varonce26 = var27;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var27); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "}else {";
var38 = (val*)(7l<<2|1);
var39 = (val*)(7l<<2|1);
var40 = (val*)((long)(0)<<2|3);
var41 = (val*)((long)(0)<<2|3);
var37 = core__flat___CString___to_s_unsafe(var36, var38, var39, var40, var41);
var35 = var37;
varonce34 = var35;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var35); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "catchStack.cursor -= 1;";
var46 = (val*)(23l<<2|1);
var47 = (val*)(23l<<2|1);
var48 = (val*)((long)(0)<<2|3);
var49 = (val*)((long)(0)<<2|3);
var45 = core__flat___CString___to_s_unsafe(var44, var46, var47, var48, var49);
var43 = var45;
varonce42 = var43;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var43); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes$ADoExpr$n_catch (self) on <self:ADoExpr> */
var52 = self->attrs[COLOR_nitc__parser_nodes__ADoExpr___n_catch].val; /* _n_catch on <self:ADoExpr> */
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___stmt(var_v, var50); /* Direct call abstract_compiler$AbstractCompilerVisitor$stmt on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce53!=NULL)) {
var54 = varonce53;
} else {
var55 = "}";
var57 = (val*)(1l<<2|1);
var58 = (val*)(1l<<2|1);
var59 = (val*)((long)(0)<<2|3);
var60 = (val*)((long)(0)<<2|3);
var56 = core__flat___CString___to_s_unsafe(var55, var57, var58, var59, var60);
var54 = var56;
varonce53 = var54;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var54); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
} else {
{
{ /* Inline parser_nodes$ADoExpr$n_block (self) on <self:ADoExpr> */
var63 = self->attrs[COLOR_nitc__parser_nodes__ADoExpr___n_block].val; /* _n_block on <self:ADoExpr> */
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___stmt(var_v, var61); /* Direct call abstract_compiler$AbstractCompilerVisitor$stmt on <var_v:AbstractCompilerVisitor>*/
}
}
{
{ /* Inline scope$ADoExpr$break_mark (self) on <self:ADoExpr> */
var66 = self->attrs[COLOR_nitc__scope__ADoExpr___break_mark].val; /* _break_mark on <self:ADoExpr> */
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___add_escape_label(var_v, var64); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_escape_label on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AWhileExpr$stmt for (self: AWhileExpr, AbstractCompilerVisitor) */
void nitc__abstract_compiler___AWhileExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : CString */;
val* var2 /* : String */;
val* var3 /* : nullable Int */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Bool */;
val* var6 /* : nullable Bool */;
val* var7 /* : AExpr */;
val* var9 /* : AExpr */;
val* var10 /* : RuntimeVariable */;
val* var_cond /* var cond: RuntimeVariable */;
val* var12 /* : NativeArray[String] */;
static val* varonce11;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : CString */;
val* var16 /* : String */;
val* var17 /* : nullable Int */;
val* var18 /* : nullable Int */;
val* var19 /* : nullable Bool */;
val* var20 /* : nullable Bool */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : CString */;
val* var24 /* : String */;
val* var25 /* : nullable Int */;
val* var26 /* : nullable Int */;
val* var27 /* : nullable Bool */;
val* var28 /* : nullable Bool */;
val* var29 /* : String */;
val* var30 /* : String */;
val* var31 /* : nullable AExpr */;
val* var33 /* : nullable AExpr */;
val* var34 /* : nullable EscapeMark */;
val* var36 /* : nullable EscapeMark */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : CString */;
val* var40 /* : String */;
val* var41 /* : nullable Int */;
val* var42 /* : nullable Int */;
val* var43 /* : nullable Bool */;
val* var44 /* : nullable Bool */;
val* var45 /* : nullable EscapeMark */;
val* var47 /* : nullable EscapeMark */;
var_v = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "for(;;) {";
var3 = (val*)(9l<<2|1);
var4 = (val*)(9l<<2|1);
var5 = (val*)((long)(0)<<2|3);
var6 = (val*)((long)(0)<<2|3);
var2 = core__flat___CString___to_s_unsafe(var1, var3, var4, var5, var6);
var = var2;
varonce = var;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes$AWhileExpr$n_expr (self) on <self:AWhileExpr> */
var9 = self->attrs[COLOR_nitc__parser_nodes__AWhileExpr___n_expr].val; /* _n_expr on <self:AWhileExpr> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1971);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = nitc___nitc__AbstractCompilerVisitor___expr_bool(var_v, var7);
}
var_cond = var10;
if (unlikely(varonce11==NULL)) {
var12 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "if (!";
var17 = (val*)(5l<<2|1);
var18 = (val*)(5l<<2|1);
var19 = (val*)((long)(0)<<2|3);
var20 = (val*)((long)(0)<<2|3);
var16 = core__flat___CString___to_s_unsafe(var15, var17, var18, var19, var20);
var14 = var16;
varonce13 = var14;
}
((struct instance_core__NativeArray*)var12)->values[0]=var14;
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = ") break;";
var25 = (val*)(8l<<2|1);
var26 = (val*)(8l<<2|1);
var27 = (val*)((long)(0)<<2|3);
var28 = (val*)((long)(0)<<2|3);
var24 = core__flat___CString___to_s_unsafe(var23, var25, var26, var27, var28);
var22 = var24;
varonce21 = var22;
}
((struct instance_core__NativeArray*)var12)->values[2]=var22;
} else {
var12 = varonce11;
varonce11 = NULL;
}
{
var29 = ((val*(*)(val* self))(var_cond->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_cond); /* to_s on <var_cond:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var12)->values[1]=var29;
{
var30 = ((val*(*)(val* self))(var12->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var12); /* native_to_s on <var12:NativeArray[String]>*/
}
varonce11 = var12;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var30); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes$AWhileExpr$n_block (self) on <self:AWhileExpr> */
var33 = self->attrs[COLOR_nitc__parser_nodes__AWhileExpr___n_block].val; /* _n_block on <self:AWhileExpr> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___stmt(var_v, var31); /* Direct call abstract_compiler$AbstractCompilerVisitor$stmt on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline scope$AWhileExpr$continue_mark (self) on <self:AWhileExpr> */
var36 = self->attrs[COLOR_nitc__scope__AWhileExpr___continue_mark].val; /* _continue_mark on <self:AWhileExpr> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___add_escape_label(var_v, var34); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_escape_label on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = "}";
var41 = (val*)(1l<<2|1);
var42 = (val*)(1l<<2|1);
var43 = (val*)((long)(0)<<2|3);
var44 = (val*)((long)(0)<<2|3);
var40 = core__flat___CString___to_s_unsafe(var39, var41, var42, var43, var44);
var38 = var40;
varonce37 = var38;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var38); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline scope$AWhileExpr$break_mark (self) on <self:AWhileExpr> */
var47 = self->attrs[COLOR_nitc__scope__AWhileExpr___break_mark].val; /* _break_mark on <self:AWhileExpr> */
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___add_escape_label(var_v, var45); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_escape_label on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler$ALoopExpr$stmt for (self: ALoopExpr, AbstractCompilerVisitor) */
void nitc__abstract_compiler___ALoopExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : CString */;
val* var2 /* : String */;
val* var3 /* : nullable Int */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Bool */;
val* var6 /* : nullable Bool */;
val* var7 /* : nullable AExpr */;
val* var9 /* : nullable AExpr */;
val* var10 /* : nullable EscapeMark */;
val* var12 /* : nullable EscapeMark */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : CString */;
val* var16 /* : String */;
val* var17 /* : nullable Int */;
val* var18 /* : nullable Int */;
val* var19 /* : nullable Bool */;
val* var20 /* : nullable Bool */;
val* var21 /* : nullable EscapeMark */;
val* var23 /* : nullable EscapeMark */;
var_v = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "for(;;) {";
var3 = (val*)(9l<<2|1);
var4 = (val*)(9l<<2|1);
var5 = (val*)((long)(0)<<2|3);
var6 = (val*)((long)(0)<<2|3);
var2 = core__flat___CString___to_s_unsafe(var1, var3, var4, var5, var6);
var = var2;
varonce = var;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes$ALoopExpr$n_block (self) on <self:ALoopExpr> */
var9 = self->attrs[COLOR_nitc__parser_nodes__ALoopExpr___n_block].val; /* _n_block on <self:ALoopExpr> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___stmt(var_v, var7); /* Direct call abstract_compiler$AbstractCompilerVisitor$stmt on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline scope$ALoopExpr$continue_mark (self) on <self:ALoopExpr> */
var12 = self->attrs[COLOR_nitc__scope__ALoopExpr___continue_mark].val; /* _continue_mark on <self:ALoopExpr> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___add_escape_label(var_v, var10); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_escape_label on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "}";
var17 = (val*)(1l<<2|1);
var18 = (val*)(1l<<2|1);
var19 = (val*)((long)(0)<<2|3);
var20 = (val*)((long)(0)<<2|3);
var16 = core__flat___CString___to_s_unsafe(var15, var17, var18, var19, var20);
var14 = var16;
varonce13 = var14;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var14); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline scope$ALoopExpr$break_mark (self) on <self:ALoopExpr> */
var23 = self->attrs[COLOR_nitc__scope__ALoopExpr___break_mark].val; /* _break_mark on <self:ALoopExpr> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___add_escape_label(var_v, var21); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_escape_label on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AForExpr$stmt for (self: AForExpr, AbstractCompilerVisitor) */
void nitc__abstract_compiler___AForExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : ANodes[AForGroup] */;
val* var2 /* : ANodes[AForGroup] */;
val* var_ /* var : ANodes[AForGroup] */;
val* var3 /* : Iterator[ANode] */;
val* var_4 /* var : Iterator[AForGroup] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_g /* var g: AForGroup */;
val* var7 /* : AExpr */;
val* var9 /* : AExpr */;
val* var10 /* : RuntimeVariable */;
val* var_cl /* var cl: RuntimeVariable */;
val* var11 /* : nullable CallSite */;
val* var13 /* : nullable CallSite */;
val* var_it_meth /* var it_meth: nullable CallSite */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : Array[RuntimeVariable] */;
val* var_20 /* var : Array[RuntimeVariable] */;
val* var21 /* : nullable RuntimeVariable */;
val* var_it /* var it: nullable RuntimeVariable */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
static val* varonce;
val* var28 /* : String */;
char* var29 /* : CString */;
val* var30 /* : String */;
val* var31 /* : nullable Int */;
val* var32 /* : nullable Int */;
val* var33 /* : nullable Bool */;
val* var34 /* : nullable Bool */;
val* var35 /* : ANodes[AForGroup] */;
val* var37 /* : ANodes[AForGroup] */;
val* var_38 /* var : ANodes[AForGroup] */;
val* var39 /* : Iterator[ANode] */;
val* var_40 /* var : Iterator[AForGroup] */;
short int var41 /* : Bool */;
val* var43 /* : nullable Object */;
val* var_g44 /* var g: AForGroup */;
val* var45 /* : RuntimeVariable */;
val* var47 /* : RuntimeVariable */;
val* var_it48 /* var it: RuntimeVariable */;
val* var49 /* : nullable CallSite */;
val* var51 /* : nullable CallSite */;
val* var_isok_meth /* var isok_meth: nullable CallSite */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
val* var57 /* : Array[RuntimeVariable] */;
val* var_58 /* var : Array[RuntimeVariable] */;
val* var59 /* : nullable RuntimeVariable */;
val* var_ok /* var ok: nullable RuntimeVariable */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
val* var66 /* : NativeArray[String] */;
static val* varonce65;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : CString */;
val* var70 /* : String */;
val* var71 /* : nullable Int */;
val* var72 /* : nullable Int */;
val* var73 /* : nullable Bool */;
val* var74 /* : nullable Bool */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : CString */;
val* var78 /* : String */;
val* var79 /* : nullable Int */;
val* var80 /* : nullable Int */;
val* var81 /* : nullable Bool */;
val* var82 /* : nullable Bool */;
val* var83 /* : String */;
val* var84 /* : String */;
val* var85 /* : nullable Array[Variable] */;
val* var87 /* : nullable Array[Variable] */;
long var88 /* : Int */;
long var90 /* : Int */;
short int var91 /* : Bool */;
short int var93 /* : Bool */;
val* var94 /* : nullable CallSite */;
val* var96 /* : nullable CallSite */;
val* var_item_meth /* var item_meth: nullable CallSite */;
short int var97 /* : Bool */;
short int var98 /* : Bool */;
short int var100 /* : Bool */;
short int var101 /* : Bool */;
val* var102 /* : Array[RuntimeVariable] */;
val* var_103 /* var : Array[RuntimeVariable] */;
val* var104 /* : nullable RuntimeVariable */;
val* var_i /* var i: nullable RuntimeVariable */;
short int var105 /* : Bool */;
short int var106 /* : Bool */;
short int var108 /* : Bool */;
short int var109 /* : Bool */;
val* var110 /* : nullable Array[Variable] */;
val* var112 /* : nullable Array[Variable] */;
val* var113 /* : nullable Object */;
val* var114 /* : RuntimeVariable */;
val* var115 /* : nullable Array[Variable] */;
val* var117 /* : nullable Array[Variable] */;
long var118 /* : Int */;
long var120 /* : Int */;
short int var121 /* : Bool */;
short int var123 /* : Bool */;
val* var124 /* : nullable CallSite */;
val* var126 /* : nullable CallSite */;
val* var_key_meth /* var key_meth: nullable CallSite */;
short int var127 /* : Bool */;
short int var128 /* : Bool */;
short int var130 /* : Bool */;
short int var131 /* : Bool */;
val* var132 /* : Array[RuntimeVariable] */;
val* var_133 /* var : Array[RuntimeVariable] */;
val* var134 /* : nullable RuntimeVariable */;
val* var_i135 /* var i: nullable RuntimeVariable */;
short int var136 /* : Bool */;
short int var137 /* : Bool */;
short int var139 /* : Bool */;
short int var140 /* : Bool */;
val* var141 /* : nullable Array[Variable] */;
val* var143 /* : nullable Array[Variable] */;
val* var144 /* : nullable Object */;
val* var145 /* : RuntimeVariable */;
val* var146 /* : nullable CallSite */;
val* var148 /* : nullable CallSite */;
val* var_item_meth149 /* var item_meth: nullable CallSite */;
short int var150 /* : Bool */;
short int var151 /* : Bool */;
short int var153 /* : Bool */;
short int var154 /* : Bool */;
val* var155 /* : Array[RuntimeVariable] */;
val* var_156 /* var : Array[RuntimeVariable] */;
val* var157 /* : nullable RuntimeVariable */;
short int var158 /* : Bool */;
short int var159 /* : Bool */;
short int var161 /* : Bool */;
short int var162 /* : Bool */;
val* var163 /* : nullable Array[Variable] */;
val* var165 /* : nullable Array[Variable] */;
val* var166 /* : nullable Object */;
val* var167 /* : RuntimeVariable */;
val* var168 /* : nullable AExpr */;
val* var170 /* : nullable AExpr */;
val* var171 /* : nullable EscapeMark */;
val* var173 /* : nullable EscapeMark */;
val* var174 /* : ANodes[AForGroup] */;
val* var176 /* : ANodes[AForGroup] */;
val* var_177 /* var : ANodes[AForGroup] */;
val* var178 /* : Iterator[ANode] */;
val* var_179 /* var : Iterator[AForGroup] */;
short int var180 /* : Bool */;
val* var182 /* : nullable Object */;
val* var_g183 /* var g: AForGroup */;
val* var184 /* : nullable CallSite */;
val* var186 /* : nullable CallSite */;
val* var_next_meth /* var next_meth: nullable CallSite */;
short int var187 /* : Bool */;
short int var188 /* : Bool */;
short int var190 /* : Bool */;
short int var191 /* : Bool */;
val* var192 /* : Array[RuntimeVariable] */;
val* var_193 /* var : Array[RuntimeVariable] */;
val* var194 /* : RuntimeVariable */;
val* var196 /* : RuntimeVariable */;
val* var197 /* : nullable RuntimeVariable */;
static val* varonce198;
val* var199 /* : String */;
char* var200 /* : CString */;
val* var201 /* : String */;
val* var202 /* : nullable Int */;
val* var203 /* : nullable Int */;
val* var204 /* : nullable Bool */;
val* var205 /* : nullable Bool */;
val* var206 /* : nullable EscapeMark */;
val* var208 /* : nullable EscapeMark */;
val* var209 /* : ANodes[AForGroup] */;
val* var211 /* : ANodes[AForGroup] */;
val* var_212 /* var : ANodes[AForGroup] */;
val* var213 /* : Iterator[ANode] */;
val* var_214 /* var : Iterator[AForGroup] */;
short int var215 /* : Bool */;
val* var217 /* : nullable Object */;
val* var_g218 /* var g: AForGroup */;
val* var219 /* : nullable CallSite */;
val* var221 /* : nullable CallSite */;
val* var_method_finish /* var method_finish: nullable CallSite */;
short int var222 /* : Bool */;
short int var223 /* : Bool */;
short int var225 /* : Bool */;
short int var226 /* : Bool */;
val* var227 /* : Array[RuntimeVariable] */;
val* var_228 /* var : Array[RuntimeVariable] */;
val* var229 /* : RuntimeVariable */;
val* var231 /* : RuntimeVariable */;
val* var232 /* : nullable RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes$AForExpr$n_groups (self) on <self:AForExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_groups].val; /* _n_groups on <self:AForExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_groups");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2001);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_ = var;
{
var3 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_);
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:Iterator[AForGroup]>*/
}
if (var5){
} else {
goto BREAK_label;
}
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:Iterator[AForGroup]>*/
}
var_g = var6;
{
{ /* Inline parser_nodes$AForGroup$n_expr (var_g) on <var_g:AForGroup> */
var9 = var_g->attrs[COLOR_nitc__parser_nodes__AForGroup___n_expr].val; /* _n_expr on <var_g:AForGroup> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2024);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var7, ((val*)NULL));
}
var_cl = var10;
{
{ /* Inline typing$AForGroup$method_iterator (var_g) on <var_g:AForGroup> */
var13 = var_g->attrs[COLOR_nitc__typing__AForGroup___method_iterator].val; /* _method_iterator on <var_g:AForGroup> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
var_it_meth = var11;
if (var_it_meth == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_it_meth,((val*)NULL)) on <var_it_meth:nullable CallSite> */
var_other = ((val*)NULL);
{
var17 = ((short int(*)(val* self, val* p0))(var_it_meth->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_it_meth, var_other); /* == on <var_it_meth:nullable CallSite(CallSite)>*/
}
var18 = !var17;
var15 = var18;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
if (unlikely(!var14)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3505);
fatal_exit(1);
}
var19 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var19, 1l); /* Direct call array$Array$with_capacity on <var19:Array[RuntimeVariable]>*/
}
var_20 = var19;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_20, var_cl); /* Direct call array$AbstractArray$push on <var_20:Array[RuntimeVariable]>*/
}
{
var21 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_it_meth, var_20); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var_it = var21;
if (var_it == NULL) {
var22 = 0; /* is null */
} else {
var22 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_it,((val*)NULL)) on <var_it:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var25 = ((short int(*)(val* self, val* p0))(var_it->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_it, var_other); /* == on <var_it:nullable RuntimeVariable(RuntimeVariable)>*/
}
var26 = !var25;
var23 = var26;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
var22 = var23;
}
if (unlikely(!var22)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3507);
fatal_exit(1);
}
{
{ /* Inline abstract_compiler$AForGroup$it= (var_g,var_it) on <var_g:AForGroup> */
var_g->attrs[COLOR_nitc__abstract_compiler__AForGroup___it].val = var_it; /* _it on <var_g:AForGroup> */
RET_LABEL27:(void)0;
}
}
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:Iterator[AForGroup]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:Iterator[AForGroup]>*/
}
if (likely(varonce!=NULL)) {
var28 = varonce;
} else {
var29 = "for(;;) {";
var31 = (val*)(9l<<2|1);
var32 = (val*)(9l<<2|1);
var33 = (val*)((long)(0)<<2|3);
var34 = (val*)((long)(0)<<2|3);
var30 = core__flat___CString___to_s_unsafe(var29, var31, var32, var33, var34);
var28 = var30;
varonce = var28;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var28); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes$AForExpr$n_groups (self) on <self:AForExpr> */
var37 = self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_groups].val; /* _n_groups on <self:AForExpr> */
if (unlikely(var37 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_groups");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2001);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
var_38 = var35;
{
var39 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_38);
}
var_40 = var39;
for(;;) {
{
var41 = ((short int(*)(val* self))((((long)var_40&3)?class_info[((long)var_40&3)]:var_40->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_40); /* is_ok on <var_40:Iterator[AForGroup]>*/
}
if (var41){
} else {
goto BREAK_label42;
}
{
var43 = ((val*(*)(val* self))((((long)var_40&3)?class_info[((long)var_40&3)]:var_40->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_40); /* item on <var_40:Iterator[AForGroup]>*/
}
var_g44 = var43;
{
{ /* Inline abstract_compiler$AForGroup$it (var_g44) on <var_g44:AForGroup> */
var47 = var_g44->attrs[COLOR_nitc__abstract_compiler__AForGroup___it].val; /* _it on <var_g44:AForGroup> */
if (unlikely(var47 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _it");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3560);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
var_it48 = var45;
{
{ /* Inline typing$AForGroup$method_is_ok (var_g44) on <var_g44:AForGroup> */
var51 = var_g44->attrs[COLOR_nitc__typing__AForGroup___method_is_ok].val; /* _method_is_ok on <var_g44:AForGroup> */
var49 = var51;
RET_LABEL50:(void)0;
}
}
var_isok_meth = var49;
if (var_isok_meth == NULL) {
var52 = 0; /* is null */
} else {
var52 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_isok_meth,((val*)NULL)) on <var_isok_meth:nullable CallSite> */
var_other = ((val*)NULL);
{
var55 = ((short int(*)(val* self, val* p0))(var_isok_meth->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_isok_meth, var_other); /* == on <var_isok_meth:nullable CallSite(CallSite)>*/
}
var56 = !var55;
var53 = var56;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
var52 = var53;
}
if (unlikely(!var52)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3514);
fatal_exit(1);
}
var57 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var57, 1l); /* Direct call array$Array$with_capacity on <var57:Array[RuntimeVariable]>*/
}
var_58 = var57;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_58, var_it48); /* Direct call array$AbstractArray$push on <var_58:Array[RuntimeVariable]>*/
}
{
var59 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_isok_meth, var_58); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var_ok = var59;
if (var_ok == NULL) {
var60 = 0; /* is null */
} else {
var60 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_ok,((val*)NULL)) on <var_ok:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var63 = ((short int(*)(val* self, val* p0))(var_ok->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ok, var_other); /* == on <var_ok:nullable RuntimeVariable(RuntimeVariable)>*/
}
var64 = !var63;
var61 = var64;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
var60 = var61;
}
if (unlikely(!var60)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3516);
fatal_exit(1);
}
if (unlikely(varonce65==NULL)) {
var66 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = "if(!";
var71 = (val*)(4l<<2|1);
var72 = (val*)(4l<<2|1);
var73 = (val*)((long)(0)<<2|3);
var74 = (val*)((long)(0)<<2|3);
var70 = core__flat___CString___to_s_unsafe(var69, var71, var72, var73, var74);
var68 = var70;
varonce67 = var68;
}
((struct instance_core__NativeArray*)var66)->values[0]=var68;
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = ") break;";
var79 = (val*)(8l<<2|1);
var80 = (val*)(8l<<2|1);
var81 = (val*)((long)(0)<<2|3);
var82 = (val*)((long)(0)<<2|3);
var78 = core__flat___CString___to_s_unsafe(var77, var79, var80, var81, var82);
var76 = var78;
varonce75 = var76;
}
((struct instance_core__NativeArray*)var66)->values[2]=var76;
} else {
var66 = varonce65;
varonce65 = NULL;
}
{
var83 = ((val*(*)(val* self))(var_ok->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_ok); /* to_s on <var_ok:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var66)->values[1]=var83;
{
var84 = ((val*(*)(val* self))(var66->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var66); /* native_to_s on <var66:NativeArray[String]>*/
}
varonce65 = var66;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var84); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline scope$AForGroup$variables (var_g44) on <var_g44:AForGroup> */
var87 = var_g44->attrs[COLOR_nitc__scope__AForGroup___variables].val; /* _variables on <var_g44:AForGroup> */
var85 = var87;
RET_LABEL86:(void)0;
}
}
if (var85 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3518);
fatal_exit(1);
} else {
{ /* Inline array$AbstractArrayRead$length (var85) on <var85:nullable Array[Variable]> */
if (unlikely(var85 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 26);
fatal_exit(1);
}
var90 = var85->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var85:nullable Array[Variable]> */
var88 = var90;
RET_LABEL89:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var88,1l) on <var88:Int> */
var93 = var88 == 1l;
var91 = var93;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
}
if (var91){
{
{ /* Inline typing$AForGroup$method_item (var_g44) on <var_g44:AForGroup> */
var96 = var_g44->attrs[COLOR_nitc__typing__AForGroup___method_item].val; /* _method_item on <var_g44:AForGroup> */
var94 = var96;
RET_LABEL95:(void)0;
}
}
var_item_meth = var94;
if (var_item_meth == NULL) {
var97 = 0; /* is null */
} else {
var97 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_item_meth,((val*)NULL)) on <var_item_meth:nullable CallSite> */
var_other = ((val*)NULL);
{
var100 = ((short int(*)(val* self, val* p0))(var_item_meth->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_item_meth, var_other); /* == on <var_item_meth:nullable CallSite(CallSite)>*/
}
var101 = !var100;
var98 = var101;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
var97 = var98;
}
if (unlikely(!var97)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3520);
fatal_exit(1);
}
var102 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var102, 1l); /* Direct call array$Array$with_capacity on <var102:Array[RuntimeVariable]>*/
}
var_103 = var102;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_103, var_it48); /* Direct call array$AbstractArray$push on <var_103:Array[RuntimeVariable]>*/
}
{
var104 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_item_meth, var_103); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var_i = var104;
if (var_i == NULL) {
var105 = 0; /* is null */
} else {
var105 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_i,((val*)NULL)) on <var_i:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var108 = ((short int(*)(val* self, val* p0))(var_i->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_i, var_other); /* == on <var_i:nullable RuntimeVariable(RuntimeVariable)>*/
}
var109 = !var108;
var106 = var109;
goto RET_LABEL107;
RET_LABEL107:(void)0;
}
var105 = var106;
}
if (unlikely(!var105)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3522);
fatal_exit(1);
}
{
{ /* Inline scope$AForGroup$variables (var_g44) on <var_g44:AForGroup> */
var112 = var_g44->attrs[COLOR_nitc__scope__AForGroup___variables].val; /* _variables on <var_g44:AForGroup> */
var110 = var112;
RET_LABEL111:(void)0;
}
}
if (var110 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3523);
fatal_exit(1);
} else {
var113 = core___core__SequenceRead___Collection__first(var110);
}
{
var114 = nitc___nitc__AbstractCompilerVisitor___variable(var_v, var113);
}
{
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var114, var_i); /* Direct call abstract_compiler$AbstractCompilerVisitor$assign on <var_v:AbstractCompilerVisitor>*/
}
} else {
{
{ /* Inline scope$AForGroup$variables (var_g44) on <var_g44:AForGroup> */
var117 = var_g44->attrs[COLOR_nitc__scope__AForGroup___variables].val; /* _variables on <var_g44:AForGroup> */
var115 = var117;
RET_LABEL116:(void)0;
}
}
if (var115 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3524);
fatal_exit(1);
} else {
{ /* Inline array$AbstractArrayRead$length (var115) on <var115:nullable Array[Variable]> */
if (unlikely(var115 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 26);
fatal_exit(1);
}
var120 = var115->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var115:nullable Array[Variable]> */
var118 = var120;
RET_LABEL119:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var118,2l) on <var118:Int> */
var123 = var118 == 2l;
var121 = var123;
goto RET_LABEL122;
RET_LABEL122:(void)0;
}
}
if (var121){
{
{ /* Inline typing$AForGroup$method_key (var_g44) on <var_g44:AForGroup> */
var126 = var_g44->attrs[COLOR_nitc__typing__AForGroup___method_key].val; /* _method_key on <var_g44:AForGroup> */
var124 = var126;
RET_LABEL125:(void)0;
}
}
var_key_meth = var124;
if (var_key_meth == NULL) {
var127 = 0; /* is null */
} else {
var127 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_key_meth,((val*)NULL)) on <var_key_meth:nullable CallSite> */
var_other = ((val*)NULL);
{
var130 = ((short int(*)(val* self, val* p0))(var_key_meth->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_key_meth, var_other); /* == on <var_key_meth:nullable CallSite(CallSite)>*/
}
var131 = !var130;
var128 = var131;
goto RET_LABEL129;
RET_LABEL129:(void)0;
}
var127 = var128;
}
if (unlikely(!var127)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3526);
fatal_exit(1);
}
var132 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var132, 1l); /* Direct call array$Array$with_capacity on <var132:Array[RuntimeVariable]>*/
}
var_133 = var132;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_133, var_it48); /* Direct call array$AbstractArray$push on <var_133:Array[RuntimeVariable]>*/
}
{
var134 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_key_meth, var_133); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var_i135 = var134;
if (var_i135 == NULL) {
var136 = 0; /* is null */
} else {
var136 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_i135,((val*)NULL)) on <var_i135:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var139 = ((short int(*)(val* self, val* p0))(var_i135->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_i135, var_other); /* == on <var_i135:nullable RuntimeVariable(RuntimeVariable)>*/
}
var140 = !var139;
var137 = var140;
goto RET_LABEL138;
RET_LABEL138:(void)0;
}
var136 = var137;
}
if (unlikely(!var136)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3528);
fatal_exit(1);
}
{
{ /* Inline scope$AForGroup$variables (var_g44) on <var_g44:AForGroup> */
var143 = var_g44->attrs[COLOR_nitc__scope__AForGroup___variables].val; /* _variables on <var_g44:AForGroup> */
var141 = var143;
RET_LABEL142:(void)0;
}
}
if (var141 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3529);
fatal_exit(1);
} else {
var144 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var141, 0l);
}
{
var145 = nitc___nitc__AbstractCompilerVisitor___variable(var_v, var144);
}
{
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var145, var_i135); /* Direct call abstract_compiler$AbstractCompilerVisitor$assign on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline typing$AForGroup$method_item (var_g44) on <var_g44:AForGroup> */
var148 = var_g44->attrs[COLOR_nitc__typing__AForGroup___method_item].val; /* _method_item on <var_g44:AForGroup> */
var146 = var148;
RET_LABEL147:(void)0;
}
}
var_item_meth149 = var146;
if (var_item_meth149 == NULL) {
var150 = 0; /* is null */
} else {
var150 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_item_meth149,((val*)NULL)) on <var_item_meth149:nullable CallSite> */
var_other = ((val*)NULL);
{
var153 = ((short int(*)(val* self, val* p0))(var_item_meth149->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_item_meth149, var_other); /* == on <var_item_meth149:nullable CallSite(CallSite)>*/
}
var154 = !var153;
var151 = var154;
goto RET_LABEL152;
RET_LABEL152:(void)0;
}
var150 = var151;
}
if (unlikely(!var150)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3531);
fatal_exit(1);
}
var155 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var155, 1l); /* Direct call array$Array$with_capacity on <var155:Array[RuntimeVariable]>*/
}
var_156 = var155;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_156, var_it48); /* Direct call array$AbstractArray$push on <var_156:Array[RuntimeVariable]>*/
}
{
var157 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_item_meth149, var_156); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var_i135 = var157;
if (var_i135 == NULL) {
var158 = 0; /* is null */
} else {
var158 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_i135,((val*)NULL)) on <var_i135:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var161 = ((short int(*)(val* self, val* p0))(var_i135->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_i135, var_other); /* == on <var_i135:nullable RuntimeVariable(RuntimeVariable)>*/
}
var162 = !var161;
var159 = var162;
goto RET_LABEL160;
RET_LABEL160:(void)0;
}
var158 = var159;
}
if (unlikely(!var158)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3533);
fatal_exit(1);
}
{
{ /* Inline scope$AForGroup$variables (var_g44) on <var_g44:AForGroup> */
var165 = var_g44->attrs[COLOR_nitc__scope__AForGroup___variables].val; /* _variables on <var_g44:AForGroup> */
var163 = var165;
RET_LABEL164:(void)0;
}
}
if (var163 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3534);
fatal_exit(1);
} else {
var166 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var163, 1l);
}
{
var167 = nitc___nitc__AbstractCompilerVisitor___variable(var_v, var166);
}
{
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var167, var_i135); /* Direct call abstract_compiler$AbstractCompilerVisitor$assign on <var_v:AbstractCompilerVisitor>*/
}
} else {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3536);
fatal_exit(1);
}
}
{
((void(*)(val* self))((((long)var_40&3)?class_info[((long)var_40&3)]:var_40->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_40); /* next on <var_40:Iterator[AForGroup]>*/
}
}
BREAK_label42: (void)0;
{
((void(*)(val* self))((((long)var_40&3)?class_info[((long)var_40&3)]:var_40->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_40); /* finish on <var_40:Iterator[AForGroup]>*/
}
{
{ /* Inline parser_nodes$AForExpr$n_block (self) on <self:AForExpr> */
var170 = self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_block].val; /* _n_block on <self:AForExpr> */
var168 = var170;
RET_LABEL169:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___stmt(var_v, var168); /* Direct call abstract_compiler$AbstractCompilerVisitor$stmt on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline scope$AForExpr$continue_mark (self) on <self:AForExpr> */
var173 = self->attrs[COLOR_nitc__scope__AForExpr___continue_mark].val; /* _continue_mark on <self:AForExpr> */
var171 = var173;
RET_LABEL172:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___add_escape_label(var_v, var171); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_escape_label on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes$AForExpr$n_groups (self) on <self:AForExpr> */
var176 = self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_groups].val; /* _n_groups on <self:AForExpr> */
if (unlikely(var176 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_groups");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2001);
fatal_exit(1);
}
var174 = var176;
RET_LABEL175:(void)0;
}
}
var_177 = var174;
{
var178 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_177);
}
var_179 = var178;
for(;;) {
{
var180 = ((short int(*)(val* self))((((long)var_179&3)?class_info[((long)var_179&3)]:var_179->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_179); /* is_ok on <var_179:Iterator[AForGroup]>*/
}
if (var180){
} else {
goto BREAK_label181;
}
{
var182 = ((val*(*)(val* self))((((long)var_179&3)?class_info[((long)var_179&3)]:var_179->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_179); /* item on <var_179:Iterator[AForGroup]>*/
}
var_g183 = var182;
{
{ /* Inline typing$AForGroup$method_next (var_g183) on <var_g183:AForGroup> */
var186 = var_g183->attrs[COLOR_nitc__typing__AForGroup___method_next].val; /* _method_next on <var_g183:AForGroup> */
var184 = var186;
RET_LABEL185:(void)0;
}
}
var_next_meth = var184;
if (var_next_meth == NULL) {
var187 = 0; /* is null */
} else {
var187 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_next_meth,((val*)NULL)) on <var_next_meth:nullable CallSite> */
var_other = ((val*)NULL);
{
var190 = ((short int(*)(val* self, val* p0))(var_next_meth->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_next_meth, var_other); /* == on <var_next_meth:nullable CallSite(CallSite)>*/
}
var191 = !var190;
var188 = var191;
goto RET_LABEL189;
RET_LABEL189:(void)0;
}
var187 = var188;
}
if (unlikely(!var187)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3543);
fatal_exit(1);
}
var192 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var192, 1l); /* Direct call array$Array$with_capacity on <var192:Array[RuntimeVariable]>*/
}
var_193 = var192;
{
{ /* Inline abstract_compiler$AForGroup$it (var_g183) on <var_g183:AForGroup> */
var196 = var_g183->attrs[COLOR_nitc__abstract_compiler__AForGroup___it].val; /* _it on <var_g183:AForGroup> */
if (unlikely(var196 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _it");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3560);
fatal_exit(1);
}
var194 = var196;
RET_LABEL195:(void)0;
}
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_193, var194); /* Direct call array$AbstractArray$push on <var_193:Array[RuntimeVariable]>*/
}
{
var197 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_next_meth, var_193); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
{
((void(*)(val* self))((((long)var_179&3)?class_info[((long)var_179&3)]:var_179->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_179); /* next on <var_179:Iterator[AForGroup]>*/
}
}
BREAK_label181: (void)0;
{
((void(*)(val* self))((((long)var_179&3)?class_info[((long)var_179&3)]:var_179->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_179); /* finish on <var_179:Iterator[AForGroup]>*/
}
if (likely(varonce198!=NULL)) {
var199 = varonce198;
} else {
var200 = "}";
var202 = (val*)(1l<<2|1);
var203 = (val*)(1l<<2|1);
var204 = (val*)((long)(0)<<2|3);
var205 = (val*)((long)(0)<<2|3);
var201 = core__flat___CString___to_s_unsafe(var200, var202, var203, var204, var205);
var199 = var201;
varonce198 = var199;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var199); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline scope$AForExpr$break_mark (self) on <self:AForExpr> */
var208 = self->attrs[COLOR_nitc__scope__AForExpr___break_mark].val; /* _break_mark on <self:AForExpr> */
var206 = var208;
RET_LABEL207:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___add_escape_label(var_v, var206); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_escape_label on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes$AForExpr$n_groups (self) on <self:AForExpr> */
var211 = self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_groups].val; /* _n_groups on <self:AForExpr> */
if (unlikely(var211 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_groups");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2001);
fatal_exit(1);
}
var209 = var211;
RET_LABEL210:(void)0;
}
}
var_212 = var209;
{
var213 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_212);
}
var_214 = var213;
for(;;) {
{
var215 = ((short int(*)(val* self))((((long)var_214&3)?class_info[((long)var_214&3)]:var_214->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_214); /* is_ok on <var_214:Iterator[AForGroup]>*/
}
if (var215){
} else {
goto BREAK_label216;
}
{
var217 = ((val*(*)(val* self))((((long)var_214&3)?class_info[((long)var_214&3)]:var_214->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_214); /* item on <var_214:Iterator[AForGroup]>*/
}
var_g218 = var217;
{
{ /* Inline typing$AForGroup$method_finish (var_g218) on <var_g218:AForGroup> */
var221 = var_g218->attrs[COLOR_nitc__typing__AForGroup___method_finish].val; /* _method_finish on <var_g218:AForGroup> */
var219 = var221;
RET_LABEL220:(void)0;
}
}
var_method_finish = var219;
if (var_method_finish == NULL) {
var222 = 0; /* is null */
} else {
var222 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_method_finish,((val*)NULL)) on <var_method_finish:nullable CallSite> */
var_other = ((val*)NULL);
{
var225 = ((short int(*)(val* self, val* p0))(var_method_finish->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_method_finish, var_other); /* == on <var_method_finish:nullable CallSite(CallSite)>*/
}
var226 = !var225;
var223 = var226;
goto RET_LABEL224;
RET_LABEL224:(void)0;
}
var222 = var223;
}
if (var222){
var227 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var227, 1l); /* Direct call array$Array$with_capacity on <var227:Array[RuntimeVariable]>*/
}
var_228 = var227;
{
{ /* Inline abstract_compiler$AForGroup$it (var_g218) on <var_g218:AForGroup> */
var231 = var_g218->attrs[COLOR_nitc__abstract_compiler__AForGroup___it].val; /* _it on <var_g218:AForGroup> */
if (unlikely(var231 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _it");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3560);
fatal_exit(1);
}
var229 = var231;
RET_LABEL230:(void)0;
}
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_228, var229); /* Direct call array$AbstractArray$push on <var_228:Array[RuntimeVariable]>*/
}
{
var232 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_method_finish, var_228); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_214&3)?class_info[((long)var_214&3)]:var_214->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_214); /* next on <var_214:Iterator[AForGroup]>*/
}
}
BREAK_label216: (void)0;
{
((void(*)(val* self))((((long)var_214&3)?class_info[((long)var_214&3)]:var_214->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_214); /* finish on <var_214:Iterator[AForGroup]>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AForGroup$it for (self: AForGroup): RuntimeVariable */
val* nitc__abstract_compiler___AForGroup___it(val* self) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AForGroup___it].val; /* _it on <self:AForGroup> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _it");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3560);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AForGroup$it= for (self: AForGroup, RuntimeVariable) */
void nitc__abstract_compiler___AForGroup___it_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__AForGroup___it].val = p0; /* _it on <self:AForGroup> */
RET_LABEL:;
}
/* method abstract_compiler$AAssertExpr$stmt for (self: AAssertExpr, AbstractCompilerVisitor) */
void nitc__abstract_compiler___AAssertExpr___AExpr__stmt(val* self, val* p0) {
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
char* var23 /* : CString */;
val* var24 /* : String */;
val* var25 /* : nullable Int */;
val* var26 /* : nullable Int */;
val* var27 /* : nullable Bool */;
val* var28 /* : nullable Bool */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : CString */;
val* var32 /* : String */;
val* var33 /* : nullable Int */;
val* var34 /* : nullable Int */;
val* var35 /* : nullable Bool */;
val* var36 /* : nullable Bool */;
val* var37 /* : String */;
val* var38 /* : String */;
val* var39 /* : nullable AExpr */;
val* var41 /* : nullable AExpr */;
val* var42 /* : nullable TId */;
val* var44 /* : nullable TId */;
val* var_nid /* var nid: nullable TId */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
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
val* var69 /* : String */;
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
var_v = p0;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var2 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var) on <var:AbstractCompiler> */
var5 = var->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var:AbstractCompiler> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var3) on <var3:ModelBuilder> */
var8 = var3->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var3:ModelBuilder> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_no_check_assert (var6) on <var6:ToolContext> */
var11 = var6->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_assert].val; /* _opt_no_check_assert on <var6:ToolContext> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_assert");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 52);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline opts$Option$value (var9) on <var9:OptionBool> */
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
{ /* Inline parser_nodes$AAssertExpr$n_expr (self) on <self:AAssertExpr> */
var18 = self->attrs[COLOR_nitc__parser_nodes__AAssertExpr___n_expr].val; /* _n_expr on <self:AAssertExpr> */
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2056);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = nitc___nitc__AbstractCompilerVisitor___expr_bool(var_v, var16);
}
var_cond = var19;
if (unlikely(varonce==NULL)) {
var20 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = "if (unlikely(!";
var25 = (val*)(14l<<2|1);
var26 = (val*)(14l<<2|1);
var27 = (val*)((long)(0)<<2|3);
var28 = (val*)((long)(0)<<2|3);
var24 = core__flat___CString___to_s_unsafe(var23, var25, var26, var27, var28);
var22 = var24;
varonce21 = var22;
}
((struct instance_core__NativeArray*)var20)->values[0]=var22;
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = ")) {";
var33 = (val*)(4l<<2|1);
var34 = (val*)(4l<<2|1);
var35 = (val*)((long)(0)<<2|3);
var36 = (val*)((long)(0)<<2|3);
var32 = core__flat___CString___to_s_unsafe(var31, var33, var34, var35, var36);
var30 = var32;
varonce29 = var30;
}
((struct instance_core__NativeArray*)var20)->values[2]=var30;
} else {
var20 = varonce;
varonce = NULL;
}
{
var37 = ((val*(*)(val* self))(var_cond->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_cond); /* to_s on <var_cond:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var20)->values[1]=var37;
{
var38 = ((val*(*)(val* self))(var20->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var20); /* native_to_s on <var20:NativeArray[String]>*/
}
varonce = var20;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var38); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes$AAssertExpr$n_else (self) on <self:AAssertExpr> */
var41 = self->attrs[COLOR_nitc__parser_nodes__AAssertExpr___n_else].val; /* _n_else on <self:AAssertExpr> */
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___stmt(var_v, var39); /* Direct call abstract_compiler$AbstractCompilerVisitor$stmt on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes$AAssertExpr$n_id (self) on <self:AAssertExpr> */
var44 = self->attrs[COLOR_nitc__parser_nodes__AAssertExpr___n_id].val; /* _n_id on <self:AAssertExpr> */
var42 = var44;
RET_LABEL43:(void)0;
}
}
var_nid = var42;
if (var_nid == NULL) {
var45 = 0; /* is null */
} else {
var45 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_nid,((val*)NULL)) on <var_nid:nullable TId> */
var_other = ((val*)NULL);
{
var48 = ((short int(*)(val* self, val* p0))(var_nid->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nid, var_other); /* == on <var_nid:nullable TId(TId)>*/
}
var49 = !var48;
var46 = var49;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
var45 = var46;
}
if (var45){
if (unlikely(varonce50==NULL)) {
var51 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = "Assert \'";
var56 = (val*)(8l<<2|1);
var57 = (val*)(8l<<2|1);
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
var62 = "\' failed";
var64 = (val*)(8l<<2|1);
var65 = (val*)(8l<<2|1);
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
{
var68 = nitc__lexer_work___Token___text(var_nid);
}
((struct instance_core__NativeArray*)var51)->values[1]=var68;
{
var69 = ((val*(*)(val* self))(var51->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var51); /* native_to_s on <var51:NativeArray[String]>*/
}
varonce50 = var51;
{
nitc___nitc__AbstractCompilerVisitor___add_abort(var_v, var69); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_abort on <var_v:AbstractCompilerVisitor>*/
}
} else {
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = "Assert failed";
var74 = (val*)(13l<<2|1);
var75 = (val*)(13l<<2|1);
var76 = (val*)((long)(0)<<2|3);
var77 = (val*)((long)(0)<<2|3);
var73 = core__flat___CString___to_s_unsafe(var72, var74, var75, var76, var77);
var71 = var73;
varonce70 = var71;
}
{
nitc___nitc__AbstractCompilerVisitor___add_abort(var_v, var71); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_abort on <var_v:AbstractCompilerVisitor>*/
}
}
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = "}";
var82 = (val*)(1l<<2|1);
var83 = (val*)(1l<<2|1);
var84 = (val*)((long)(0)<<2|3);
var85 = (val*)((long)(0)<<2|3);
var81 = core__flat___CString___to_s_unsafe(var80, var82, var83, var84, var85);
var79 = var81;
varonce78 = var79;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var79); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AOrExpr$expr for (self: AOrExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AOrExpr___AExpr__expr(val* self, val* p0) {
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
char* var12 /* : CString */;
val* var13 /* : String */;
val* var14 /* : nullable Int */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Bool */;
val* var17 /* : nullable Bool */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Bool */;
val* var25 /* : nullable Bool */;
val* var26 /* : String */;
val* var27 /* : String */;
val* var29 /* : NativeArray[String] */;
static val* varonce28;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : CString */;
val* var33 /* : String */;
val* var34 /* : nullable Int */;
val* var35 /* : nullable Int */;
val* var36 /* : nullable Bool */;
val* var37 /* : nullable Bool */;
val* var38 /* : String */;
val* var39 /* : String */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : CString */;
val* var43 /* : String */;
val* var44 /* : nullable Int */;
val* var45 /* : nullable Int */;
val* var46 /* : nullable Bool */;
val* var47 /* : nullable Bool */;
val* var48 /* : AExpr */;
val* var50 /* : AExpr */;
val* var51 /* : RuntimeVariable */;
val* var_i2 /* var i2: RuntimeVariable */;
val* var53 /* : NativeArray[String] */;
static val* varonce52;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : CString */;
val* var57 /* : String */;
val* var58 /* : nullable Int */;
val* var59 /* : nullable Int */;
val* var60 /* : nullable Bool */;
val* var61 /* : nullable Bool */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : CString */;
val* var65 /* : String */;
val* var66 /* : nullable Int */;
val* var67 /* : nullable Int */;
val* var68 /* : nullable Bool */;
val* var69 /* : nullable Bool */;
val* var70 /* : String */;
val* var71 /* : String */;
val* var72 /* : String */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : CString */;
val* var76 /* : String */;
val* var77 /* : nullable Int */;
val* var78 /* : nullable Int */;
val* var79 /* : nullable Bool */;
val* var80 /* : nullable Bool */;
var_v = p0;
{
{ /* Inline typing$AExpr$mtype (self) on <self:AOrExpr> */
var3 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:AOrExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3585);
fatal_exit(1);
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___new_var(var_v, var1);
}
var_res = var4;
{
{ /* Inline parser_nodes$ABinBoolExpr$n_expr (self) on <self:AOrExpr> */
var7 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AOrExpr> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2131);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nitc___nitc__AbstractCompilerVisitor___expr_bool(var_v, var5);
}
var_i1 = var8;
if (unlikely(varonce==NULL)) {
var9 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "if (";
var14 = (val*)(4l<<2|1);
var15 = (val*)(4l<<2|1);
var16 = (val*)((long)(0)<<2|3);
var17 = (val*)((long)(0)<<2|3);
var13 = core__flat___CString___to_s_unsafe(var12, var14, var15, var16, var17);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var9)->values[0]=var11;
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = ") {";
var22 = (val*)(3l<<2|1);
var23 = (val*)(3l<<2|1);
var24 = (val*)((long)(0)<<2|3);
var25 = (val*)((long)(0)<<2|3);
var21 = core__flat___CString___to_s_unsafe(var20, var22, var23, var24, var25);
var19 = var21;
varonce18 = var19;
}
((struct instance_core__NativeArray*)var9)->values[2]=var19;
} else {
var9 = varonce;
varonce = NULL;
}
{
var26 = ((val*(*)(val* self))(var_i1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_i1); /* to_s on <var_i1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var9)->values[1]=var26;
{
var27 = ((val*(*)(val* self))(var9->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var9); /* native_to_s on <var9:NativeArray[String]>*/
}
varonce = var9;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var27); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce28==NULL)) {
var29 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = " = 1;";
var34 = (val*)(5l<<2|1);
var35 = (val*)(5l<<2|1);
var36 = (val*)((long)(0)<<2|3);
var37 = (val*)((long)(0)<<2|3);
var33 = core__flat___CString___to_s_unsafe(var32, var34, var35, var36, var37);
var31 = var33;
varonce30 = var31;
}
((struct instance_core__NativeArray*)var29)->values[1]=var31;
} else {
var29 = varonce28;
varonce28 = NULL;
}
{
var38 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var29)->values[0]=var38;
{
var39 = ((val*(*)(val* self))(var29->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var29); /* native_to_s on <var29:NativeArray[String]>*/
}
varonce28 = var29;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var39); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "} else {";
var44 = (val*)(8l<<2|1);
var45 = (val*)(8l<<2|1);
var46 = (val*)((long)(0)<<2|3);
var47 = (val*)((long)(0)<<2|3);
var43 = core__flat___CString___to_s_unsafe(var42, var44, var45, var46, var47);
var41 = var43;
varonce40 = var41;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var41); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes$ABinBoolExpr$n_expr2 (self) on <self:AOrExpr> */
var50 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AOrExpr> */
if (unlikely(var50 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2137);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
var51 = nitc___nitc__AbstractCompilerVisitor___expr_bool(var_v, var48);
}
var_i2 = var51;
if (unlikely(varonce52==NULL)) {
var53 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = " = ";
var58 = (val*)(3l<<2|1);
var59 = (val*)(3l<<2|1);
var60 = (val*)((long)(0)<<2|3);
var61 = (val*)((long)(0)<<2|3);
var57 = core__flat___CString___to_s_unsafe(var56, var58, var59, var60, var61);
var55 = var57;
varonce54 = var55;
}
((struct instance_core__NativeArray*)var53)->values[1]=var55;
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = ";";
var66 = (val*)(1l<<2|1);
var67 = (val*)(1l<<2|1);
var68 = (val*)((long)(0)<<2|3);
var69 = (val*)((long)(0)<<2|3);
var65 = core__flat___CString___to_s_unsafe(var64, var66, var67, var68, var69);
var63 = var65;
varonce62 = var63;
}
((struct instance_core__NativeArray*)var53)->values[3]=var63;
} else {
var53 = varonce52;
varonce52 = NULL;
}
{
var70 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var53)->values[0]=var70;
{
var71 = ((val*(*)(val* self))(var_i2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_i2); /* to_s on <var_i2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var53)->values[2]=var71;
{
var72 = ((val*(*)(val* self))(var53->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var53); /* native_to_s on <var53:NativeArray[String]>*/
}
varonce52 = var53;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var72); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = "}";
var77 = (val*)(1l<<2|1);
var78 = (val*)(1l<<2|1);
var79 = (val*)((long)(0)<<2|3);
var80 = (val*)((long)(0)<<2|3);
var76 = core__flat___CString___to_s_unsafe(var75, var77, var78, var79, var80);
var74 = var76;
varonce73 = var74;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var74); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AImpliesExpr$expr for (self: AImpliesExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AImpliesExpr___AExpr__expr(val* self, val* p0) {
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
char* var12 /* : CString */;
val* var13 /* : String */;
val* var14 /* : nullable Int */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Bool */;
val* var17 /* : nullable Bool */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Bool */;
val* var25 /* : nullable Bool */;
val* var26 /* : String */;
val* var27 /* : String */;
val* var29 /* : NativeArray[String] */;
static val* varonce28;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : CString */;
val* var33 /* : String */;
val* var34 /* : nullable Int */;
val* var35 /* : nullable Int */;
val* var36 /* : nullable Bool */;
val* var37 /* : nullable Bool */;
val* var38 /* : String */;
val* var39 /* : String */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : CString */;
val* var43 /* : String */;
val* var44 /* : nullable Int */;
val* var45 /* : nullable Int */;
val* var46 /* : nullable Bool */;
val* var47 /* : nullable Bool */;
val* var48 /* : AExpr */;
val* var50 /* : AExpr */;
val* var51 /* : RuntimeVariable */;
val* var_i2 /* var i2: RuntimeVariable */;
val* var53 /* : NativeArray[String] */;
static val* varonce52;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : CString */;
val* var57 /* : String */;
val* var58 /* : nullable Int */;
val* var59 /* : nullable Int */;
val* var60 /* : nullable Bool */;
val* var61 /* : nullable Bool */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : CString */;
val* var65 /* : String */;
val* var66 /* : nullable Int */;
val* var67 /* : nullable Int */;
val* var68 /* : nullable Bool */;
val* var69 /* : nullable Bool */;
val* var70 /* : String */;
val* var71 /* : String */;
val* var72 /* : String */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : CString */;
val* var76 /* : String */;
val* var77 /* : nullable Int */;
val* var78 /* : nullable Int */;
val* var79 /* : nullable Bool */;
val* var80 /* : nullable Bool */;
var_v = p0;
{
{ /* Inline typing$AExpr$mtype (self) on <self:AImpliesExpr> */
var3 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:AImpliesExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3600);
fatal_exit(1);
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___new_var(var_v, var1);
}
var_res = var4;
{
{ /* Inline parser_nodes$ABinBoolExpr$n_expr (self) on <self:AImpliesExpr> */
var7 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AImpliesExpr> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2131);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nitc___nitc__AbstractCompilerVisitor___expr_bool(var_v, var5);
}
var_i1 = var8;
if (unlikely(varonce==NULL)) {
var9 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "if (!";
var14 = (val*)(5l<<2|1);
var15 = (val*)(5l<<2|1);
var16 = (val*)((long)(0)<<2|3);
var17 = (val*)((long)(0)<<2|3);
var13 = core__flat___CString___to_s_unsafe(var12, var14, var15, var16, var17);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var9)->values[0]=var11;
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = ") {";
var22 = (val*)(3l<<2|1);
var23 = (val*)(3l<<2|1);
var24 = (val*)((long)(0)<<2|3);
var25 = (val*)((long)(0)<<2|3);
var21 = core__flat___CString___to_s_unsafe(var20, var22, var23, var24, var25);
var19 = var21;
varonce18 = var19;
}
((struct instance_core__NativeArray*)var9)->values[2]=var19;
} else {
var9 = varonce;
varonce = NULL;
}
{
var26 = ((val*(*)(val* self))(var_i1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_i1); /* to_s on <var_i1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var9)->values[1]=var26;
{
var27 = ((val*(*)(val* self))(var9->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var9); /* native_to_s on <var9:NativeArray[String]>*/
}
varonce = var9;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var27); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce28==NULL)) {
var29 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = " = 1;";
var34 = (val*)(5l<<2|1);
var35 = (val*)(5l<<2|1);
var36 = (val*)((long)(0)<<2|3);
var37 = (val*)((long)(0)<<2|3);
var33 = core__flat___CString___to_s_unsafe(var32, var34, var35, var36, var37);
var31 = var33;
varonce30 = var31;
}
((struct instance_core__NativeArray*)var29)->values[1]=var31;
} else {
var29 = varonce28;
varonce28 = NULL;
}
{
var38 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var29)->values[0]=var38;
{
var39 = ((val*(*)(val* self))(var29->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var29); /* native_to_s on <var29:NativeArray[String]>*/
}
varonce28 = var29;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var39); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "} else {";
var44 = (val*)(8l<<2|1);
var45 = (val*)(8l<<2|1);
var46 = (val*)((long)(0)<<2|3);
var47 = (val*)((long)(0)<<2|3);
var43 = core__flat___CString___to_s_unsafe(var42, var44, var45, var46, var47);
var41 = var43;
varonce40 = var41;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var41); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes$ABinBoolExpr$n_expr2 (self) on <self:AImpliesExpr> */
var50 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AImpliesExpr> */
if (unlikely(var50 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2137);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
var51 = nitc___nitc__AbstractCompilerVisitor___expr_bool(var_v, var48);
}
var_i2 = var51;
if (unlikely(varonce52==NULL)) {
var53 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = " = ";
var58 = (val*)(3l<<2|1);
var59 = (val*)(3l<<2|1);
var60 = (val*)((long)(0)<<2|3);
var61 = (val*)((long)(0)<<2|3);
var57 = core__flat___CString___to_s_unsafe(var56, var58, var59, var60, var61);
var55 = var57;
varonce54 = var55;
}
((struct instance_core__NativeArray*)var53)->values[1]=var55;
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = ";";
var66 = (val*)(1l<<2|1);
var67 = (val*)(1l<<2|1);
var68 = (val*)((long)(0)<<2|3);
var69 = (val*)((long)(0)<<2|3);
var65 = core__flat___CString___to_s_unsafe(var64, var66, var67, var68, var69);
var63 = var65;
varonce62 = var63;
}
((struct instance_core__NativeArray*)var53)->values[3]=var63;
} else {
var53 = varonce52;
varonce52 = NULL;
}
{
var70 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var53)->values[0]=var70;
{
var71 = ((val*(*)(val* self))(var_i2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_i2); /* to_s on <var_i2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var53)->values[2]=var71;
{
var72 = ((val*(*)(val* self))(var53->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var53); /* native_to_s on <var53:NativeArray[String]>*/
}
varonce52 = var53;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var72); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = "}";
var77 = (val*)(1l<<2|1);
var78 = (val*)(1l<<2|1);
var79 = (val*)((long)(0)<<2|3);
var80 = (val*)((long)(0)<<2|3);
var76 = core__flat___CString___to_s_unsafe(var75, var77, var78, var79, var80);
var74 = var76;
varonce73 = var74;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var74); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AAndExpr$expr for (self: AAndExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AAndExpr___AExpr__expr(val* self, val* p0) {
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
char* var12 /* : CString */;
val* var13 /* : String */;
val* var14 /* : nullable Int */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Bool */;
val* var17 /* : nullable Bool */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Bool */;
val* var25 /* : nullable Bool */;
val* var26 /* : String */;
val* var27 /* : String */;
val* var29 /* : NativeArray[String] */;
static val* varonce28;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : CString */;
val* var33 /* : String */;
val* var34 /* : nullable Int */;
val* var35 /* : nullable Int */;
val* var36 /* : nullable Bool */;
val* var37 /* : nullable Bool */;
val* var38 /* : String */;
val* var39 /* : String */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : CString */;
val* var43 /* : String */;
val* var44 /* : nullable Int */;
val* var45 /* : nullable Int */;
val* var46 /* : nullable Bool */;
val* var47 /* : nullable Bool */;
val* var48 /* : AExpr */;
val* var50 /* : AExpr */;
val* var51 /* : RuntimeVariable */;
val* var_i2 /* var i2: RuntimeVariable */;
val* var53 /* : NativeArray[String] */;
static val* varonce52;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : CString */;
val* var57 /* : String */;
val* var58 /* : nullable Int */;
val* var59 /* : nullable Int */;
val* var60 /* : nullable Bool */;
val* var61 /* : nullable Bool */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : CString */;
val* var65 /* : String */;
val* var66 /* : nullable Int */;
val* var67 /* : nullable Int */;
val* var68 /* : nullable Bool */;
val* var69 /* : nullable Bool */;
val* var70 /* : String */;
val* var71 /* : String */;
val* var72 /* : String */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : CString */;
val* var76 /* : String */;
val* var77 /* : nullable Int */;
val* var78 /* : nullable Int */;
val* var79 /* : nullable Bool */;
val* var80 /* : nullable Bool */;
var_v = p0;
{
{ /* Inline typing$AExpr$mtype (self) on <self:AAndExpr> */
var3 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:AAndExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3615);
fatal_exit(1);
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___new_var(var_v, var1);
}
var_res = var4;
{
{ /* Inline parser_nodes$ABinBoolExpr$n_expr (self) on <self:AAndExpr> */
var7 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AAndExpr> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2131);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nitc___nitc__AbstractCompilerVisitor___expr_bool(var_v, var5);
}
var_i1 = var8;
if (unlikely(varonce==NULL)) {
var9 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "if (!";
var14 = (val*)(5l<<2|1);
var15 = (val*)(5l<<2|1);
var16 = (val*)((long)(0)<<2|3);
var17 = (val*)((long)(0)<<2|3);
var13 = core__flat___CString___to_s_unsafe(var12, var14, var15, var16, var17);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var9)->values[0]=var11;
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = ") {";
var22 = (val*)(3l<<2|1);
var23 = (val*)(3l<<2|1);
var24 = (val*)((long)(0)<<2|3);
var25 = (val*)((long)(0)<<2|3);
var21 = core__flat___CString___to_s_unsafe(var20, var22, var23, var24, var25);
var19 = var21;
varonce18 = var19;
}
((struct instance_core__NativeArray*)var9)->values[2]=var19;
} else {
var9 = varonce;
varonce = NULL;
}
{
var26 = ((val*(*)(val* self))(var_i1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_i1); /* to_s on <var_i1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var9)->values[1]=var26;
{
var27 = ((val*(*)(val* self))(var9->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var9); /* native_to_s on <var9:NativeArray[String]>*/
}
varonce = var9;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var27); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce28==NULL)) {
var29 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = " = 0;";
var34 = (val*)(5l<<2|1);
var35 = (val*)(5l<<2|1);
var36 = (val*)((long)(0)<<2|3);
var37 = (val*)((long)(0)<<2|3);
var33 = core__flat___CString___to_s_unsafe(var32, var34, var35, var36, var37);
var31 = var33;
varonce30 = var31;
}
((struct instance_core__NativeArray*)var29)->values[1]=var31;
} else {
var29 = varonce28;
varonce28 = NULL;
}
{
var38 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var29)->values[0]=var38;
{
var39 = ((val*(*)(val* self))(var29->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var29); /* native_to_s on <var29:NativeArray[String]>*/
}
varonce28 = var29;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var39); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "} else {";
var44 = (val*)(8l<<2|1);
var45 = (val*)(8l<<2|1);
var46 = (val*)((long)(0)<<2|3);
var47 = (val*)((long)(0)<<2|3);
var43 = core__flat___CString___to_s_unsafe(var42, var44, var45, var46, var47);
var41 = var43;
varonce40 = var41;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var41); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes$ABinBoolExpr$n_expr2 (self) on <self:AAndExpr> */
var50 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AAndExpr> */
if (unlikely(var50 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2137);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
var51 = nitc___nitc__AbstractCompilerVisitor___expr_bool(var_v, var48);
}
var_i2 = var51;
if (unlikely(varonce52==NULL)) {
var53 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = " = ";
var58 = (val*)(3l<<2|1);
var59 = (val*)(3l<<2|1);
var60 = (val*)((long)(0)<<2|3);
var61 = (val*)((long)(0)<<2|3);
var57 = core__flat___CString___to_s_unsafe(var56, var58, var59, var60, var61);
var55 = var57;
varonce54 = var55;
}
((struct instance_core__NativeArray*)var53)->values[1]=var55;
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = ";";
var66 = (val*)(1l<<2|1);
var67 = (val*)(1l<<2|1);
var68 = (val*)((long)(0)<<2|3);
var69 = (val*)((long)(0)<<2|3);
var65 = core__flat___CString___to_s_unsafe(var64, var66, var67, var68, var69);
var63 = var65;
varonce62 = var63;
}
((struct instance_core__NativeArray*)var53)->values[3]=var63;
} else {
var53 = varonce52;
varonce52 = NULL;
}
{
var70 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var53)->values[0]=var70;
{
var71 = ((val*(*)(val* self))(var_i2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_i2); /* to_s on <var_i2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var53)->values[2]=var71;
{
var72 = ((val*(*)(val* self))(var53->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var53); /* native_to_s on <var53:NativeArray[String]>*/
}
varonce52 = var53;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var72); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = "}";
var77 = (val*)(1l<<2|1);
var78 = (val*)(1l<<2|1);
var79 = (val*)((long)(0)<<2|3);
var80 = (val*)((long)(0)<<2|3);
var76 = core__flat___CString___to_s_unsafe(var75, var77, var78, var79, var80);
var74 = var76;
varonce73 = var74;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var74); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$ANotExpr$expr for (self: ANotExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___ANotExpr___AExpr__expr(val* self, val* p0) {
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
char* var8 /* : CString */;
val* var9 /* : String */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Int */;
val* var12 /* : nullable Bool */;
val* var13 /* : nullable Bool */;
val* var14 /* : String */;
val* var15 /* : String */;
val* var16 /* : nullable MType */;
val* var18 /* : nullable MType */;
val* var19 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes$ANotExpr$n_expr (self) on <self:ANotExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ANotExpr___n_expr].val; /* _n_expr on <self:ANotExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2171);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___expr_bool(var_v, var1);
}
var_cond = var4;
if (unlikely(varonce==NULL)) {
var5 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "!";
var10 = (val*)(1l<<2|1);
var11 = (val*)(1l<<2|1);
var12 = (val*)((long)(0)<<2|3);
var13 = (val*)((long)(0)<<2|3);
var9 = core__flat___CString___to_s_unsafe(var8, var10, var11, var12, var13);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var5)->values[0]=var7;
} else {
var5 = varonce;
varonce = NULL;
}
{
var14 = ((val*(*)(val* self))(var_cond->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_cond); /* to_s on <var_cond:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var5)->values[1]=var14;
{
var15 = ((val*(*)(val* self))(var5->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
{
{ /* Inline typing$AExpr$mtype (self) on <self:ANotExpr> */
var18 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:ANotExpr> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3631);
fatal_exit(1);
}
{
var19 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var15, var16);
}
var = var19;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AOrElseExpr$expr for (self: AOrElseExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AOrElseExpr___AExpr__expr(val* self, val* p0) {
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
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : NativeArray[String] */;
static val* varonce;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : CString */;
val* var15 /* : String */;
val* var16 /* : nullable Int */;
val* var17 /* : nullable Int */;
val* var18 /* : nullable Bool */;
val* var19 /* : nullable Bool */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : CString */;
val* var23 /* : String */;
val* var24 /* : nullable Int */;
val* var25 /* : nullable Int */;
val* var26 /* : nullable Bool */;
val* var27 /* : nullable Bool */;
val* var28 /* : String */;
val* var29 /* : String */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : CString */;
val* var33 /* : String */;
val* var34 /* : nullable Int */;
val* var35 /* : nullable Int */;
val* var36 /* : nullable Bool */;
val* var37 /* : nullable Bool */;
val* var38 /* : AExpr */;
val* var40 /* : AExpr */;
val* var41 /* : RuntimeVariable */;
val* var_i2 /* var i2: RuntimeVariable */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : CString */;
val* var45 /* : String */;
val* var46 /* : nullable Int */;
val* var47 /* : nullable Int */;
val* var48 /* : nullable Bool */;
val* var49 /* : nullable Bool */;
var_v = p0;
{
{ /* Inline typing$AExpr$mtype (self) on <self:AOrElseExpr> */
var3 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:AOrElseExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3638);
fatal_exit(1);
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___new_var(var_v, var1);
}
var_res = var4;
{
{ /* Inline parser_nodes$ABinBoolExpr$n_expr (self) on <self:AOrElseExpr> */
var7 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AOrElseExpr> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2131);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var5, ((val*)NULL));
}
var_i1 = var8;
{
var9 = nitc___nitc__AbstractCompilerVisitor___maybenull(var_v, var_i1);
}
var10 = !var9;
if (var10){
var = var_i1;
goto RET_LABEL;
} else {
}
if (unlikely(varonce==NULL)) {
var11 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "if (";
var16 = (val*)(4l<<2|1);
var17 = (val*)(4l<<2|1);
var18 = (val*)((long)(0)<<2|3);
var19 = (val*)((long)(0)<<2|3);
var15 = core__flat___CString___to_s_unsafe(var14, var16, var17, var18, var19);
var13 = var15;
varonce12 = var13;
}
((struct instance_core__NativeArray*)var11)->values[0]=var13;
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "!=NULL) {";
var24 = (val*)(9l<<2|1);
var25 = (val*)(9l<<2|1);
var26 = (val*)((long)(0)<<2|3);
var27 = (val*)((long)(0)<<2|3);
var23 = core__flat___CString___to_s_unsafe(var22, var24, var25, var26, var27);
var21 = var23;
varonce20 = var21;
}
((struct instance_core__NativeArray*)var11)->values[2]=var21;
} else {
var11 = varonce;
varonce = NULL;
}
{
var28 = ((val*(*)(val* self))(var_i1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_i1); /* to_s on <var_i1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var11)->values[1]=var28;
{
var29 = ((val*(*)(val* self))(var11->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var11); /* native_to_s on <var11:NativeArray[String]>*/
}
varonce = var11;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var29); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var_res, var_i1); /* Direct call abstract_compiler$AbstractCompilerVisitor$assign on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "} else {";
var34 = (val*)(8l<<2|1);
var35 = (val*)(8l<<2|1);
var36 = (val*)((long)(0)<<2|3);
var37 = (val*)((long)(0)<<2|3);
var33 = core__flat___CString___to_s_unsafe(var32, var34, var35, var36, var37);
var31 = var33;
varonce30 = var31;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var31); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes$ABinBoolExpr$n_expr2 (self) on <self:AOrElseExpr> */
var40 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AOrElseExpr> */
if (unlikely(var40 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2137);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
var41 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var38, ((val*)NULL));
}
var_i2 = var41;
{
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var_res, var_i2); /* Direct call abstract_compiler$AbstractCompilerVisitor$assign on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "}";
var46 = (val*)(1l<<2|1);
var47 = (val*)(1l<<2|1);
var48 = (val*)((long)(0)<<2|3);
var49 = (val*)((long)(0)<<2|3);
var45 = core__flat___CString___to_s_unsafe(var44, var46, var47, var48, var49);
var43 = var45;
varonce42 = var43;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var43); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AIntegerExpr$expr for (self: AIntegerExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AIntegerExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable Numeric */;
val* var3 /* : nullable Numeric */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : nullable Numeric */;
val* var7 /* : nullable Numeric */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name;
val* var11 /* : RuntimeVariable */;
long var12 /* : Int */;
val* var13 /* : nullable Numeric */;
val* var15 /* : nullable Numeric */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : nullable Numeric */;
val* var21 /* : nullable Numeric */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
val* var26 /* : RuntimeVariable */;
unsigned char var27 /* : Byte */;
val* var28 /* : nullable Numeric */;
val* var30 /* : nullable Numeric */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var34 /* : nullable Numeric */;
val* var36 /* : nullable Numeric */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
val* var41 /* : RuntimeVariable */;
int8_t var42 /* : Int8 */;
val* var43 /* : nullable Numeric */;
val* var45 /* : nullable Numeric */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
val* var49 /* : nullable Numeric */;
val* var51 /* : nullable Numeric */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
const char* var_class_name55;
val* var56 /* : RuntimeVariable */;
int16_t var57 /* : Int16 */;
val* var58 /* : nullable Numeric */;
val* var60 /* : nullable Numeric */;
short int var61 /* : Bool */;
int cltype62;
int idtype63;
val* var64 /* : nullable Numeric */;
val* var66 /* : nullable Numeric */;
short int var67 /* : Bool */;
int cltype68;
int idtype69;
const char* var_class_name70;
val* var71 /* : RuntimeVariable */;
uint16_t var72 /* : UInt16 */;
val* var73 /* : nullable Numeric */;
val* var75 /* : nullable Numeric */;
short int var76 /* : Bool */;
int cltype77;
int idtype78;
val* var79 /* : nullable Numeric */;
val* var81 /* : nullable Numeric */;
short int var82 /* : Bool */;
int cltype83;
int idtype84;
const char* var_class_name85;
val* var86 /* : RuntimeVariable */;
int32_t var87 /* : Int32 */;
val* var88 /* : nullable Numeric */;
val* var90 /* : nullable Numeric */;
short int var91 /* : Bool */;
int cltype92;
int idtype93;
val* var94 /* : nullable Numeric */;
val* var96 /* : nullable Numeric */;
short int var97 /* : Bool */;
int cltype98;
int idtype99;
const char* var_class_name100;
val* var101 /* : RuntimeVariable */;
uint32_t var102 /* : UInt32 */;
var_v = p0;
{
{ /* Inline literal$AIntegerExpr$value (self) on <self:AIntegerExpr> */
var3 = self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <self:AIntegerExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
/* <var1:nullable Numeric> isa Int */
cltype = type_core__Int.color;
idtype = type_core__Int.id;
if(var1 == NULL) {
var4 = 0;
} else {
if(cltype >= (((long)var1&3)?type_info[((long)var1&3)]:var1->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var1&3)?type_info[((long)var1&3)]:var1->type)->type_table[cltype] == idtype;
}
}
if (var4){
{
{ /* Inline literal$AIntegerExpr$value (self) on <self:AIntegerExpr> */
var7 = self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <self:AIntegerExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
/* <var5:nullable Numeric> isa Int */
cltype9 = type_core__Int.color;
idtype10 = type_core__Int.id;
if(var5 == NULL) {
var8 = 0;
} else {
if(cltype9 >= (((long)var5&3)?type_info[((long)var5&3)]:var5->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var5&3)?type_info[((long)var5&3)]:var5->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
var_class_name = var5 == NULL ? "null" : (((long)var5&3)?type_info[((long)var5&3)]:var5->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Int", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3655);
fatal_exit(1);
}
{
var12 = (long)(var5)>>2;
var11 = nitc___nitc__AbstractCompilerVisitor___int_instance(var_v, var12);
}
var = var11;
goto RET_LABEL;
} else {
}
{
{ /* Inline literal$AIntegerExpr$value (self) on <self:AIntegerExpr> */
var15 = self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <self:AIntegerExpr> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
/* <var13:nullable Numeric> isa Byte */
cltype17 = type_core__Byte.color;
idtype18 = type_core__Byte.id;
if(var13 == NULL) {
var16 = 0;
} else {
if(cltype17 >= (((long)var13&3)?type_info[((long)var13&3)]:var13->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var13&3)?type_info[((long)var13&3)]:var13->type)->type_table[cltype17] == idtype18;
}
}
if (var16){
{
{ /* Inline literal$AIntegerExpr$value (self) on <self:AIntegerExpr> */
var21 = self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <self:AIntegerExpr> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
/* <var19:nullable Numeric> isa Byte */
cltype23 = type_core__Byte.color;
idtype24 = type_core__Byte.id;
if(var19 == NULL) {
var22 = 0;
} else {
if(cltype23 >= (((long)var19&3)?type_info[((long)var19&3)]:var19->type)->table_size) {
var22 = 0;
} else {
var22 = (((long)var19&3)?type_info[((long)var19&3)]:var19->type)->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
var_class_name25 = var19 == NULL ? "null" : (((long)var19&3)?type_info[((long)var19&3)]:var19->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Byte", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3656);
fatal_exit(1);
}
{
var27 = ((struct instance_core__Byte*)var19)->value; /* autounbox from nullable Numeric to Byte */;
var26 = nitc___nitc__AbstractCompilerVisitor___byte_instance(var_v, var27);
}
var = var26;
goto RET_LABEL;
} else {
}
{
{ /* Inline literal$AIntegerExpr$value (self) on <self:AIntegerExpr> */
var30 = self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <self:AIntegerExpr> */
var28 = var30;
RET_LABEL29:(void)0;
}
}
/* <var28:nullable Numeric> isa Int8 */
cltype32 = type_core__Int8.color;
idtype33 = type_core__Int8.id;
if(var28 == NULL) {
var31 = 0;
} else {
if(cltype32 >= (((long)var28&3)?type_info[((long)var28&3)]:var28->type)->table_size) {
var31 = 0;
} else {
var31 = (((long)var28&3)?type_info[((long)var28&3)]:var28->type)->type_table[cltype32] == idtype33;
}
}
if (var31){
{
{ /* Inline literal$AIntegerExpr$value (self) on <self:AIntegerExpr> */
var36 = self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <self:AIntegerExpr> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
/* <var34:nullable Numeric> isa Int8 */
cltype38 = type_core__Int8.color;
idtype39 = type_core__Int8.id;
if(var34 == NULL) {
var37 = 0;
} else {
if(cltype38 >= (((long)var34&3)?type_info[((long)var34&3)]:var34->type)->table_size) {
var37 = 0;
} else {
var37 = (((long)var34&3)?type_info[((long)var34&3)]:var34->type)->type_table[cltype38] == idtype39;
}
}
if (unlikely(!var37)) {
var_class_name40 = var34 == NULL ? "null" : (((long)var34&3)?type_info[((long)var34&3)]:var34->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Int8", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3657);
fatal_exit(1);
}
{
var42 = ((struct instance_core__Int8*)var34)->value; /* autounbox from nullable Numeric to Int8 */;
var41 = nitc___nitc__AbstractCompilerVisitor___int8_instance(var_v, var42);
}
var = var41;
goto RET_LABEL;
} else {
}
{
{ /* Inline literal$AIntegerExpr$value (self) on <self:AIntegerExpr> */
var45 = self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <self:AIntegerExpr> */
var43 = var45;
RET_LABEL44:(void)0;
}
}
/* <var43:nullable Numeric> isa Int16 */
cltype47 = type_core__Int16.color;
idtype48 = type_core__Int16.id;
if(var43 == NULL) {
var46 = 0;
} else {
if(cltype47 >= (((long)var43&3)?type_info[((long)var43&3)]:var43->type)->table_size) {
var46 = 0;
} else {
var46 = (((long)var43&3)?type_info[((long)var43&3)]:var43->type)->type_table[cltype47] == idtype48;
}
}
if (var46){
{
{ /* Inline literal$AIntegerExpr$value (self) on <self:AIntegerExpr> */
var51 = self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <self:AIntegerExpr> */
var49 = var51;
RET_LABEL50:(void)0;
}
}
/* <var49:nullable Numeric> isa Int16 */
cltype53 = type_core__Int16.color;
idtype54 = type_core__Int16.id;
if(var49 == NULL) {
var52 = 0;
} else {
if(cltype53 >= (((long)var49&3)?type_info[((long)var49&3)]:var49->type)->table_size) {
var52 = 0;
} else {
var52 = (((long)var49&3)?type_info[((long)var49&3)]:var49->type)->type_table[cltype53] == idtype54;
}
}
if (unlikely(!var52)) {
var_class_name55 = var49 == NULL ? "null" : (((long)var49&3)?type_info[((long)var49&3)]:var49->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Int16", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3658);
fatal_exit(1);
}
{
var57 = ((struct instance_core__Int16*)var49)->value; /* autounbox from nullable Numeric to Int16 */;
var56 = nitc___nitc__AbstractCompilerVisitor___int16_instance(var_v, var57);
}
var = var56;
goto RET_LABEL;
} else {
}
{
{ /* Inline literal$AIntegerExpr$value (self) on <self:AIntegerExpr> */
var60 = self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <self:AIntegerExpr> */
var58 = var60;
RET_LABEL59:(void)0;
}
}
/* <var58:nullable Numeric> isa UInt16 */
cltype62 = type_core__UInt16.color;
idtype63 = type_core__UInt16.id;
if(var58 == NULL) {
var61 = 0;
} else {
if(cltype62 >= (((long)var58&3)?type_info[((long)var58&3)]:var58->type)->table_size) {
var61 = 0;
} else {
var61 = (((long)var58&3)?type_info[((long)var58&3)]:var58->type)->type_table[cltype62] == idtype63;
}
}
if (var61){
{
{ /* Inline literal$AIntegerExpr$value (self) on <self:AIntegerExpr> */
var66 = self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <self:AIntegerExpr> */
var64 = var66;
RET_LABEL65:(void)0;
}
}
/* <var64:nullable Numeric> isa UInt16 */
cltype68 = type_core__UInt16.color;
idtype69 = type_core__UInt16.id;
if(var64 == NULL) {
var67 = 0;
} else {
if(cltype68 >= (((long)var64&3)?type_info[((long)var64&3)]:var64->type)->table_size) {
var67 = 0;
} else {
var67 = (((long)var64&3)?type_info[((long)var64&3)]:var64->type)->type_table[cltype68] == idtype69;
}
}
if (unlikely(!var67)) {
var_class_name70 = var64 == NULL ? "null" : (((long)var64&3)?type_info[((long)var64&3)]:var64->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "UInt16", var_class_name70);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3659);
fatal_exit(1);
}
{
var72 = ((struct instance_core__UInt16*)var64)->value; /* autounbox from nullable Numeric to UInt16 */;
var71 = nitc___nitc__AbstractCompilerVisitor___uint16_instance(var_v, var72);
}
var = var71;
goto RET_LABEL;
} else {
}
{
{ /* Inline literal$AIntegerExpr$value (self) on <self:AIntegerExpr> */
var75 = self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <self:AIntegerExpr> */
var73 = var75;
RET_LABEL74:(void)0;
}
}
/* <var73:nullable Numeric> isa Int32 */
cltype77 = type_core__Int32.color;
idtype78 = type_core__Int32.id;
if(var73 == NULL) {
var76 = 0;
} else {
if(cltype77 >= (((long)var73&3)?type_info[((long)var73&3)]:var73->type)->table_size) {
var76 = 0;
} else {
var76 = (((long)var73&3)?type_info[((long)var73&3)]:var73->type)->type_table[cltype77] == idtype78;
}
}
if (var76){
{
{ /* Inline literal$AIntegerExpr$value (self) on <self:AIntegerExpr> */
var81 = self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <self:AIntegerExpr> */
var79 = var81;
RET_LABEL80:(void)0;
}
}
/* <var79:nullable Numeric> isa Int32 */
cltype83 = type_core__Int32.color;
idtype84 = type_core__Int32.id;
if(var79 == NULL) {
var82 = 0;
} else {
if(cltype83 >= (((long)var79&3)?type_info[((long)var79&3)]:var79->type)->table_size) {
var82 = 0;
} else {
var82 = (((long)var79&3)?type_info[((long)var79&3)]:var79->type)->type_table[cltype83] == idtype84;
}
}
if (unlikely(!var82)) {
var_class_name85 = var79 == NULL ? "null" : (((long)var79&3)?type_info[((long)var79&3)]:var79->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Int32", var_class_name85);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3660);
fatal_exit(1);
}
{
var87 = ((struct instance_core__Int32*)var79)->value; /* autounbox from nullable Numeric to Int32 */;
var86 = nitc___nitc__AbstractCompilerVisitor___int32_instance(var_v, var87);
}
var = var86;
goto RET_LABEL;
} else {
}
{
{ /* Inline literal$AIntegerExpr$value (self) on <self:AIntegerExpr> */
var90 = self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <self:AIntegerExpr> */
var88 = var90;
RET_LABEL89:(void)0;
}
}
/* <var88:nullable Numeric> isa UInt32 */
cltype92 = type_core__UInt32.color;
idtype93 = type_core__UInt32.id;
if(var88 == NULL) {
var91 = 0;
} else {
if(cltype92 >= (((long)var88&3)?type_info[((long)var88&3)]:var88->type)->table_size) {
var91 = 0;
} else {
var91 = (((long)var88&3)?type_info[((long)var88&3)]:var88->type)->type_table[cltype92] == idtype93;
}
}
if (var91){
{
{ /* Inline literal$AIntegerExpr$value (self) on <self:AIntegerExpr> */
var96 = self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <self:AIntegerExpr> */
var94 = var96;
RET_LABEL95:(void)0;
}
}
/* <var94:nullable Numeric> isa UInt32 */
cltype98 = type_core__UInt32.color;
idtype99 = type_core__UInt32.id;
if(var94 == NULL) {
var97 = 0;
} else {
if(cltype98 >= (((long)var94&3)?type_info[((long)var94&3)]:var94->type)->table_size) {
var97 = 0;
} else {
var97 = (((long)var94&3)?type_info[((long)var94&3)]:var94->type)->type_table[cltype98] == idtype99;
}
}
if (unlikely(!var97)) {
var_class_name100 = var94 == NULL ? "null" : (((long)var94&3)?type_info[((long)var94&3)]:var94->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "UInt32", var_class_name100);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3661);
fatal_exit(1);
}
{
var102 = ((struct instance_core__UInt32*)var94)->value; /* autounbox from nullable Numeric to UInt32 */;
var101 = nitc___nitc__AbstractCompilerVisitor___uint32_instance(var_v, var102);
}
var = var101;
goto RET_LABEL;
} else {
}
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3663);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_compiler$AFloatExpr$expr for (self: AFloatExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AFloatExpr___AExpr__expr(val* self, val* p0) {
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
var1 = NEW_core__NativeArray((int)1l, &type_core__NativeArray__core__String);
} else {
var1 = varonce;
varonce = NULL;
}
{
{ /* Inline parser_nodes$AFloatExpr$n_float (self) on <self:AFloatExpr> */
var4 = self->attrs[COLOR_nitc__parser_nodes__AFloatExpr___n_float].val; /* _n_float on <self:AFloatExpr> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_float");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2600);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = nitc__lexer_work___Token___text(var2);
}
((struct instance_core__NativeArray*)var1)->values[0]=var5;
{
var6 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
{
var7 = nitc___nitc__AbstractCompilerVisitor___float_instance(var_v, var6);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$ACharExpr$expr for (self: ACharExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___ACharExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
short int var1 /* : Bool */;
val* var2 /* : nullable Char */;
val* var4 /* : nullable Char */;
unsigned char var5 /* : Byte */;
uint32_t var6 /* : Char */;
val* var7 /* : RuntimeVariable */;
short int var8 /* : Bool */;
val* var9 /* : nullable Char */;
val* var11 /* : nullable Char */;
long var12 /* : Int */;
uint32_t var14 /* : Char */;
long var15 /* : Int */;
val* var16 /* : RuntimeVariable */;
val* var17 /* : nullable Char */;
val* var19 /* : nullable Char */;
val* var20 /* : RuntimeVariable */;
uint32_t var21 /* : Char */;
var_v = p0;
{
var1 = nitc__literal___ACharExpr___is_ascii(self);
}
if (var1){
{
{ /* Inline literal$ACharExpr$value (self) on <self:ACharExpr> */
var4 = self->attrs[COLOR_nitc__literal__ACharExpr___value].val; /* _value on <self:ACharExpr> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3673);
fatal_exit(1);
}
{
var6 = (uint32_t)((long)(var2)>>2);
var5 = core___core__Char___ascii(var6);
}
{
var7 = nitc___nitc__AbstractCompilerVisitor___byte_instance(var_v, var5);
}
var = var7;
goto RET_LABEL;
} else {
}
{
var8 = nitc__literal___ACharExpr___is_code_point(self);
}
if (var8){
{
{ /* Inline literal$ACharExpr$value (self) on <self:ACharExpr> */
var11 = self->attrs[COLOR_nitc__literal__ACharExpr___value].val; /* _value on <self:ACharExpr> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3674);
fatal_exit(1);
}
{
{ /* Inline kernel$Char$code_point (var9) on <var9:nullable Char(Char)> */
var14 = (uint32_t)((long)(var9)>>2);
var15 = (long)var14;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
var16 = nitc___nitc__AbstractCompilerVisitor___int_instance(var_v, var12);
}
var = var16;
goto RET_LABEL;
} else {
}
{
{ /* Inline literal$ACharExpr$value (self) on <self:ACharExpr> */
var19 = self->attrs[COLOR_nitc__literal__ACharExpr___value].val; /* _value on <self:ACharExpr> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3675);
fatal_exit(1);
}
{
var21 = (uint32_t)((long)(var17)>>2);
var20 = nitc___nitc__AbstractCompilerVisitor___char_instance(var_v, var21);
}
var = var20;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AArrayExpr$expr for (self: AArrayExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AArrayExpr___AExpr__expr(val* self, val* p0) {
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
{ /* Inline typing$AArrayExpr$element_mtype (self) on <self:AArrayExpr> */
var3 = self->attrs[COLOR_nitc__typing__AArrayExpr___element_mtype].val; /* _element_mtype on <self:AArrayExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3682);
fatal_exit(1);
}
var_mtype = var1;
var4 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___core__kernel__Object__init(var4); /* Direct call array$Array$init on <var4:Array[RuntimeVariable]>*/
}
var_array = var4;
{
var5 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__array_instance(var_v, var_array, var_mtype);
}
var_res = var5;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (var_v) on <var_v:AbstractCompilerVisitor> */
var8 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (var6 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3686);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler$StaticFrame$comprehension (var6) on <var6:nullable StaticFrame> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2047);
fatal_exit(1);
}
var11 = var6->attrs[COLOR_nitc__abstract_compiler__StaticFrame___comprehension].val; /* _comprehension on <var6:nullable StaticFrame> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_old_comprehension = var9;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (var_v) on <var_v:AbstractCompilerVisitor> */
var14 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
if (var12 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3687);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler$StaticFrame$comprehension= (var12,var_res) on <var12:nullable StaticFrame> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2047);
fatal_exit(1);
}
var12->attrs[COLOR_nitc__abstract_compiler__StaticFrame___comprehension].val = var_res; /* _comprehension on <var12:nullable StaticFrame> */
RET_LABEL15:(void)0;
}
}
{
{ /* Inline parser_nodes$AArrayExpr$n_exprs (self) on <self:AArrayExpr> */
var18 = self->attrs[COLOR_nitc__parser_nodes__AArrayExpr___n_exprs].val; /* _n_exprs on <self:AArrayExpr> */
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2541);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_ = var16;
{
var19 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_);
}
var_20 = var19;
for(;;) {
{
var21 = ((short int(*)(val* self))((((long)var_20&3)?class_info[((long)var_20&3)]:var_20->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_20); /* is_ok on <var_20:Iterator[AExpr]>*/
}
if (var21){
} else {
goto BREAK_label;
}
{
var22 = ((val*(*)(val* self))((((long)var_20&3)?class_info[((long)var_20&3)]:var_20->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_20); /* item on <var_20:Iterator[AExpr]>*/
}
var_nexpr = var22;
{
nitc___nitc__AbstractCompilerVisitor___stmt(var_v, var_nexpr); /* Direct call abstract_compiler$AbstractCompilerVisitor$stmt on <var_v:AbstractCompilerVisitor>*/
}
{
((void(*)(val* self))((((long)var_20&3)?class_info[((long)var_20&3)]:var_20->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_20); /* next on <var_20:Iterator[AExpr]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_20&3)?class_info[((long)var_20&3)]:var_20->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_20); /* finish on <var_20:Iterator[AExpr]>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (var_v) on <var_v:AbstractCompilerVisitor> */
var25 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
if (var23 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3691);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler$StaticFrame$comprehension= (var23,var_old_comprehension) on <var23:nullable StaticFrame> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2047);
fatal_exit(1);
}
var23->attrs[COLOR_nitc__abstract_compiler__StaticFrame___comprehension].val = var_old_comprehension; /* _comprehension on <var23:nullable StaticFrame> */
RET_LABEL26:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AugmentedStringFormExpr$make_re for (self: AugmentedStringFormExpr, AbstractCompilerVisitor, RuntimeVariable): nullable RuntimeVariable */
val* nitc__abstract_compiler___AugmentedStringFormExpr___make_re(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_rs /* var rs: RuntimeVariable */;
val* var1 /* : nullable CallSite */;
val* var3 /* : nullable CallSite */;
val* var_re /* var re: nullable CallSite */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : Array[RuntimeVariable] */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var10 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_other14 /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : Sys */;
val* var19 /* : NativeArray[String] */;
static val* varonce;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : CString */;
val* var23 /* : String */;
val* var24 /* : nullable Int */;
val* var25 /* : nullable Int */;
val* var26 /* : nullable Bool */;
val* var27 /* : nullable Bool */;
val* var28 /* : String */;
val* var29 /* : String */;
val* var30 /* : String */;
val* var31 /* : SequenceRead[Char] */;
val* var_32 /* var : SequenceRead[Char] */;
val* var33 /* : Iterator[nullable Object] */;
val* var_34 /* var : IndexedIterator[Char] */;
short int var35 /* : Bool */;
val* var36 /* : nullable Object */;
uint32_t var37 /* : Char */;
uint32_t var_i /* var i: Char */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
val* var41 /* : nullable CallSite */;
val* var43 /* : nullable CallSite */;
val* var_ign /* var ign: nullable CallSite */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
val* var49 /* : Array[RuntimeVariable] */;
val* var_50 /* var : Array[RuntimeVariable] */;
val* var51 /* : RuntimeVariable */;
val* var52 /* : nullable RuntimeVariable */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
val* var57 /* : nullable CallSite */;
val* var59 /* : nullable CallSite */;
val* var_nl /* var nl: nullable CallSite */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
val* var65 /* : Array[RuntimeVariable] */;
val* var_66 /* var : Array[RuntimeVariable] */;
val* var67 /* : RuntimeVariable */;
val* var68 /* : nullable RuntimeVariable */;
short int var69 /* : Bool */;
short int var71 /* : Bool */;
val* var72 /* : nullable CallSite */;
val* var74 /* : nullable CallSite */;
val* var_ext /* var ext: nullable CallSite */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
val* var80 /* : Array[RuntimeVariable] */;
val* var_81 /* var : Array[RuntimeVariable] */;
val* var82 /* : RuntimeVariable */;
val* var83 /* : nullable RuntimeVariable */;
var_v = p0;
var_rs = p1;
{
{ /* Inline typing$AugmentedStringFormExpr$to_re (self) on <self:AugmentedStringFormExpr> */
var3 = self->attrs[COLOR_nitc__typing__AugmentedStringFormExpr___to_re].val; /* _to_re on <self:AugmentedStringFormExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_re = var1;
if (var_re == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_re,((val*)NULL)) on <var_re:nullable CallSite> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var_re->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_re, var_other); /* == on <var_re:nullable CallSite(CallSite)>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3701);
fatal_exit(1);
}
var9 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var9, 1l); /* Direct call array$Array$with_capacity on <var9:Array[RuntimeVariable]>*/
}
var_ = var9;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_rs); /* Direct call array$AbstractArray$push on <var_:Array[RuntimeVariable]>*/
}
{
var10 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_re, var_); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var_res = var10;
if (var_res == NULL) {
var11 = 1; /* is null */
} else {
var11 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_res,((val*)NULL)) on <var_res:nullable RuntimeVariable> */
var_other14 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_res,var_other14) on <var_res:nullable RuntimeVariable(RuntimeVariable)> */
var17 = var_res == var_other14;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
if (var11){
var18 = glob_sys;
if (unlikely(varonce==NULL)) {
var19 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "Cannot call property `to_re` on ";
var24 = (val*)(32l<<2|1);
var25 = (val*)(32l<<2|1);
var26 = (val*)((long)(0)<<2|3);
var27 = (val*)((long)(0)<<2|3);
var23 = core__flat___CString___to_s_unsafe(var22, var24, var25, var26, var27);
var21 = var23;
varonce20 = var21;
}
((struct instance_core__NativeArray*)var19)->values[0]=var21;
} else {
var19 = varonce;
varonce = NULL;
}
{
var28 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Object__to_s]))(self); /* to_s on <self:AugmentedStringFormExpr>*/
}
((struct instance_core__NativeArray*)var19)->values[1]=var28;
{
var29 = ((val*(*)(val* self))(var19->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var19); /* native_to_s on <var19:NativeArray[String]>*/
}
varonce = var19;
{
core__file___Sys___print(var18, var29); /* Direct call file$Sys$print on <var18:Sys>*/
}
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3705);
fatal_exit(1);
} else {
}
{
var30 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__literal__AAugmentedLiteral__suffix]))(self); /* suffix on <self:AugmentedStringFormExpr>*/
}
{
var31 = ((val*(*)(val* self))(var30->class->vft[COLOR_core__abstract_text__Text__chars]))(var30); /* chars on <var30:String>*/
}
var_32 = var31;
{
var33 = ((val*(*)(val* self))((((long)var_32&3)?class_info[((long)var_32&3)]:var_32->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_32); /* iterator on <var_32:SequenceRead[Char]>*/
}
var_34 = var33;
for(;;) {
{
var35 = ((short int(*)(val* self))((((long)var_34&3)?class_info[((long)var_34&3)]:var_34->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_34); /* is_ok on <var_34:IndexedIterator[Char]>*/
}
if (var35){
} else {
goto BREAK_label;
}
{
var36 = ((val*(*)(val* self))((((long)var_34&3)?class_info[((long)var_34&3)]:var_34->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_34); /* item on <var_34:IndexedIterator[Char]>*/
}
var37 = (uint32_t)((long)(var36)>>2);
var_i = var37;
{
{ /* Inline kernel$Char$== (var_i,'i') on <var_i:Char> */
var40 = var_i == 'i';
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
if (var38){
{
{ /* Inline typing$AugmentedStringFormExpr$ignore_case (self) on <self:AugmentedStringFormExpr> */
var43 = self->attrs[COLOR_nitc__typing__AugmentedStringFormExpr___ignore_case].val; /* _ignore_case on <self:AugmentedStringFormExpr> */
var41 = var43;
RET_LABEL42:(void)0;
}
}
var_ign = var41;
if (var_ign == NULL) {
var44 = 0; /* is null */
} else {
var44 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_ign,((val*)NULL)) on <var_ign:nullable CallSite> */
var_other = ((val*)NULL);
{
var47 = ((short int(*)(val* self, val* p0))(var_ign->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ign, var_other); /* == on <var_ign:nullable CallSite(CallSite)>*/
}
var48 = !var47;
var45 = var48;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
var44 = var45;
}
if (unlikely(!var44)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3710);
fatal_exit(1);
}
var49 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var49, 2l); /* Direct call array$Array$with_capacity on <var49:Array[RuntimeVariable]>*/
}
var_50 = var49;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_50, var_res); /* Direct call array$AbstractArray$push on <var_50:Array[RuntimeVariable]>*/
}
{
var51 = nitc___nitc__AbstractCompilerVisitor___bool_instance(var_v, 1);
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_50, var51); /* Direct call array$AbstractArray$push on <var_50:Array[RuntimeVariable]>*/
}
{
var52 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_ign, var_50); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
goto BREAK_label53;
} else {
}
{
{ /* Inline kernel$Char$== (var_i,'m') on <var_i:Char> */
var56 = var_i == 'm';
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
if (var54){
{
{ /* Inline typing$AugmentedStringFormExpr$newline (self) on <self:AugmentedStringFormExpr> */
var59 = self->attrs[COLOR_nitc__typing__AugmentedStringFormExpr___newline].val; /* _newline on <self:AugmentedStringFormExpr> */
var57 = var59;
RET_LABEL58:(void)0;
}
}
var_nl = var57;
if (var_nl == NULL) {
var60 = 0; /* is null */
} else {
var60 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_nl,((val*)NULL)) on <var_nl:nullable CallSite> */
var_other = ((val*)NULL);
{
var63 = ((short int(*)(val* self, val* p0))(var_nl->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nl, var_other); /* == on <var_nl:nullable CallSite(CallSite)>*/
}
var64 = !var63;
var61 = var64;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
var60 = var61;
}
if (unlikely(!var60)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3716);
fatal_exit(1);
}
var65 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var65, 2l); /* Direct call array$Array$with_capacity on <var65:Array[RuntimeVariable]>*/
}
var_66 = var65;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_66, var_res); /* Direct call array$AbstractArray$push on <var_66:Array[RuntimeVariable]>*/
}
{
var67 = nitc___nitc__AbstractCompilerVisitor___bool_instance(var_v, 1);
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_66, var67); /* Direct call array$AbstractArray$push on <var_66:Array[RuntimeVariable]>*/
}
{
var68 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_nl, var_66); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
goto BREAK_label53;
} else {
}
{
{ /* Inline kernel$Char$== (var_i,'b') on <var_i:Char> */
var71 = var_i == 'b';
var69 = var71;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
}
if (var69){
{
{ /* Inline typing$AugmentedStringFormExpr$extended (self) on <self:AugmentedStringFormExpr> */
var74 = self->attrs[COLOR_nitc__typing__AugmentedStringFormExpr___extended].val; /* _extended on <self:AugmentedStringFormExpr> */
var72 = var74;
RET_LABEL73:(void)0;
}
}
var_ext = var72;
if (var_ext == NULL) {
var75 = 0; /* is null */
} else {
var75 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_ext,((val*)NULL)) on <var_ext:nullable CallSite> */
var_other = ((val*)NULL);
{
var78 = ((short int(*)(val* self, val* p0))(var_ext->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ext, var_other); /* == on <var_ext:nullable CallSite(CallSite)>*/
}
var79 = !var78;
var76 = var79;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
var75 = var76;
}
if (unlikely(!var75)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3722);
fatal_exit(1);
}
var80 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var80, 2l); /* Direct call array$Array$with_capacity on <var80:Array[RuntimeVariable]>*/
}
var_81 = var80;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_81, var_res); /* Direct call array$AbstractArray$push on <var_81:Array[RuntimeVariable]>*/
}
{
var82 = nitc___nitc__AbstractCompilerVisitor___bool_instance(var_v, 0);
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_81, var82); /* Direct call array$AbstractArray$push on <var_81:Array[RuntimeVariable]>*/
}
{
var83 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_ext, var_81); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
goto BREAK_label53;
} else {
}
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3728);
fatal_exit(1);
BREAK_label53: (void)0;
{
((void(*)(val* self))((((long)var_34&3)?class_info[((long)var_34&3)]:var_34->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_34); /* next on <var_34:IndexedIterator[Char]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_34&3)?class_info[((long)var_34&3)]:var_34->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_34); /* finish on <var_34:IndexedIterator[Char]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AStringFormExpr$expr for (self: AStringFormExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AStringFormExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : String */;
val* var3 /* : String */;
val* var4 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline literal$AStringFormExpr$value (self) on <self:AStringFormExpr> */
var3 = self->attrs[COLOR_nitc__literal__AStringFormExpr___value].val; /* _value on <self:AStringFormExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__literal, 201);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___string_instance(var_v, var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AStringExpr$expr for (self: AStringExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AStringExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : String */;
val* var3 /* : String */;
val* var4 /* : RuntimeVariable */;
val* var_s /* var s: RuntimeVariable */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : Bytes */;
val* var9 /* : Bytes */;
char* var10 /* : CString */;
char* var12 /* : CString */;
val* var13 /* : Bytes */;
val* var15 /* : Bytes */;
long var16 /* : Int */;
long var18 /* : Int */;
val* var19 /* : RuntimeVariable */;
val* var_ns /* var ns: RuntimeVariable */;
val* var20 /* : Bytes */;
val* var22 /* : Bytes */;
long var23 /* : Int */;
long var25 /* : Int */;
val* var26 /* : RuntimeVariable */;
val* var_ln /* var ln: RuntimeVariable */;
val* var27 /* : nullable CallSite */;
val* var29 /* : nullable CallSite */;
val* var_cs /* var cs: nullable CallSite */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
val* var35 /* : Array[RuntimeVariable] */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var36 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
val* var43 /* : nullable RuntimeVariable */;
val* var_res44 /* var res: nullable RuntimeVariable */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
val* var50 /* : Sys */;
val* var51 /* : NativeArray[String] */;
static val* varonce;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : CString */;
val* var55 /* : String */;
val* var56 /* : nullable Int */;
val* var57 /* : nullable Int */;
val* var58 /* : nullable Bool */;
val* var59 /* : nullable Bool */;
val* var60 /* : String */;
val* var61 /* : String */;
var_v = p0;
{
{ /* Inline literal$AStringFormExpr$value (self) on <self:AStringExpr> */
var3 = self->attrs[COLOR_nitc__literal__AStringFormExpr___value].val; /* _value on <self:AStringExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__literal, 201);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___string_instance(var_v, var1);
}
var_s = var4;
{
var5 = nitc___nitc__AugmentedStringFormExpr___is_string(self);
}
if (var5){
var = var_s;
goto RET_LABEL;
} else {
}
{
var6 = nitc___nitc__AugmentedStringFormExpr___is_bytestring(self);
}
if (var6){
{
{ /* Inline literal$AStringFormExpr$bytes (self) on <self:AStringExpr> */
var9 = self->attrs[COLOR_nitc__literal__AStringFormExpr___bytes].val; /* _bytes on <self:AStringExpr> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bytes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__literal, 204);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline bytes$Bytes$items (var7) on <var7:Bytes> */
var12 = var7->attrs[COLOR_core__bytes__Bytes___items].str; /* _items on <var7:Bytes> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline literal$AStringFormExpr$bytes (self) on <self:AStringExpr> */
var15 = self->attrs[COLOR_nitc__literal__AStringFormExpr___bytes].val; /* _bytes on <self:AStringExpr> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bytes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__literal, 204);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline bytes$Bytes$length (var13) on <var13:Bytes> */
var18 = var13->attrs[COLOR_core__bytes__Bytes___length].l; /* _length on <var13:Bytes> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = nitc___nitc__AbstractCompilerVisitor___c_string_instance(var_v, var10, var16);
}
var_ns = var19;
{
{ /* Inline literal$AStringFormExpr$bytes (self) on <self:AStringExpr> */
var22 = self->attrs[COLOR_nitc__literal__AStringFormExpr___bytes].val; /* _bytes on <self:AStringExpr> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bytes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__literal, 204);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline bytes$Bytes$length (var20) on <var20:Bytes> */
var25 = var20->attrs[COLOR_core__bytes__Bytes___length].l; /* _length on <var20:Bytes> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = nitc___nitc__AbstractCompilerVisitor___int_instance(var_v, var23);
}
var_ln = var26;
{
{ /* Inline typing$AugmentedStringFormExpr$to_bytes_with_copy (self) on <self:AStringExpr> */
var29 = self->attrs[COLOR_nitc__typing__AugmentedStringFormExpr___to_bytes_with_copy].val; /* _to_bytes_with_copy on <self:AStringExpr> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_cs = var27;
if (var_cs == NULL) {
var30 = 0; /* is null */
} else {
var30 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_cs,((val*)NULL)) on <var_cs:nullable CallSite> */
var_other = ((val*)NULL);
{
var33 = ((short int(*)(val* self, val* p0))(var_cs->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cs, var_other); /* == on <var_cs:nullable CallSite(CallSite)>*/
}
var34 = !var33;
var31 = var34;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
var30 = var31;
}
if (unlikely(!var30)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3746);
fatal_exit(1);
}
var35 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var35, 2l); /* Direct call array$Array$with_capacity on <var35:Array[RuntimeVariable]>*/
}
var_ = var35;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_ns); /* Direct call array$AbstractArray$push on <var_:Array[RuntimeVariable]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_ln); /* Direct call array$AbstractArray$push on <var_:Array[RuntimeVariable]>*/
}
{
var36 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_cs, var_); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var_res = var36;
if (var_res == NULL) {
var37 = 0; /* is null */
} else {
var37 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_res,((val*)NULL)) on <var_res:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var40 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
var41 = !var40;
var38 = var41;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
var37 = var38;
}
if (unlikely(!var37)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3748);
fatal_exit(1);
}
var_s = var_res;
} else {
{
var42 = nitc___nitc__AugmentedStringFormExpr___is_re(self);
}
if (var42){
{
var43 = nitc__abstract_compiler___AugmentedStringFormExpr___make_re(self, var_v, var_s);
}
var_res44 = var43;
if (var_res44 == NULL) {
var45 = 0; /* is null */
} else {
var45 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_res44,((val*)NULL)) on <var_res44:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var48 = ((short int(*)(val* self, val* p0))(var_res44->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res44, var_other); /* == on <var_res44:nullable RuntimeVariable(RuntimeVariable)>*/
}
var49 = !var48;
var46 = var49;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
var45 = var46;
}
if (unlikely(!var45)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3752);
fatal_exit(1);
}
var_s = var_res44;
} else {
var50 = glob_sys;
if (unlikely(varonce==NULL)) {
var51 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = "Unimplemented prefix or suffix for ";
var56 = (val*)(35l<<2|1);
var57 = (val*)(35l<<2|1);
var58 = (val*)((long)(0)<<2|3);
var59 = (val*)((long)(0)<<2|3);
var55 = core__flat___CString___to_s_unsafe(var54, var56, var57, var58, var59);
var53 = var55;
varonce52 = var53;
}
((struct instance_core__NativeArray*)var51)->values[0]=var53;
} else {
var51 = varonce;
varonce = NULL;
}
{
var60 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Object__to_s]))(self); /* to_s on <self:AStringExpr>*/
}
((struct instance_core__NativeArray*)var51)->values[1]=var60;
{
var61 = ((val*(*)(val* self))(var51->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var51); /* native_to_s on <var51:NativeArray[String]>*/
}
varonce = var51;
{
core__file___Sys___print(var50, var61); /* Direct call file$Sys$print on <var50:Sys>*/
}
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3756);
fatal_exit(1);
}
}
var = var_s;
goto RET_LABEL;
RET_LABEL:;
return var;
}
