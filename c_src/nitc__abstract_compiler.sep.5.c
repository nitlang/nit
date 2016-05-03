#include "nitc__abstract_compiler.sep.0.h"
/* method abstract_compiler#AMethPropdef#compile_externmeth_to_c for (self: AMethPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]): Bool */
short int nitc__abstract_compiler___AMethPropdef___compile_externmeth_to_c(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : String */;
val* var4 /* : AbstractCompiler */;
val* var6 /* : AbstractCompiler */;
val* var7 /* : ModelBuilder */;
val* var9 /* : ModelBuilder */;
val* var10 /* : nullable AAnnotation */;
val* var_at /* var at: nullable AAnnotation */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var_ /* var : Bool */;
val* var17 /* : ANodes[AExpr] */;
val* var19 /* : ANodes[AExpr] */;
long var20 /* : Int */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
val* var24 /* : AbstractCompiler */;
val* var26 /* : AbstractCompiler */;
val* var27 /* : ModelBuilder */;
val* var29 /* : ModelBuilder */;
val* var30 /* : nullable String */;
val* var_externname /* var externname: nullable Object */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : MClassDef */;
val* var35 /* : MClassDef */;
val* var36 /* : MModule */;
val* var38 /* : MModule */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var39 /* : nullable MSignature */;
val* var41 /* : nullable MSignature */;
val* var42 /* : nullable MType */;
val* var44 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
val* var50 /* : nullable Object */;
val* var51 /* : MType */;
val* var52 /* : RuntimeVariable */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
val* var_other56 /* var other: nullable Object */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
val* var61 /* : NativeArray[String] */;
static val* varonce60;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
val* var65 /* : String */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
val* var69 /* : String */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
val* var73 /* : String */;
val* var74 /* : String */;
val* var75 /* : String */;
val* var77 /* : NativeArray[String] */;
static val* varonce76;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
val* var81 /* : String */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
val* var85 /* : String */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
val* var89 /* : String */;
val* var90 /* : String */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : NativeString */;
val* var94 /* : String */;
val* var95 /* : String */;
val* var96 /* : String */;
val* var97 /* : RuntimeVariable */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "extern";
var3 = core__flat___NativeString___to_s_full(var2, 6l, 6l);
var1 = var3;
varonce = var1;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var6 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1133);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var4) on <var4:AbstractCompiler> */
var9 = var4->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var4:AbstractCompiler> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = nitc__annotation___Prod___get_single_annotation(self, var1, var7);
}
var_at = var10;
if (var_at == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_at,((val*)NULL)) on <var_at:nullable AAnnotation> */
var_other = ((val*)NULL);
{
var15 = ((short int(*)(val* self, val* p0))(var_at->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_at, var_other); /* == on <var_at:nullable AAnnotation(AAnnotation)>*/
}
var16 = !var15;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
var_ = var12;
if (var12){
{
{ /* Inline parser_nodes#AAnnotation#n_args (var_at) on <var_at:nullable AAnnotation(AAnnotation)> */
var19 = var_at->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_args].val; /* _n_args on <var_at:nullable AAnnotation(AAnnotation)> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2926);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = nitc___nitc__ANodes___core__abstract_collection__Collection__length(var17);
}
{
{ /* Inline kernel#Int#== (var20,1l) on <var20:Int> */
var23 = var20 == 1l;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var11 = var21;
} else {
var11 = var_;
}
if (var11){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var26 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1133);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var24) on <var24:AbstractCompiler> */
var29 = var24->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var24:AbstractCompiler> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
var30 = nitc__annotation___AAnnotation___arg_as_string(var_at, var27);
}
var_externname = var30;
if (var_externname == NULL) {
var31 = 1; /* is null */
} else {
var31 = 0; /* arg is null but recv is not */
}
if (0) {
var32 = ((short int(*)(val* self, val* p0))(var_externname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_externname, ((val*)NULL)); /* == on <var_externname:nullable Object(nullable String)>*/
var31 = var32;
}
if (var31){
var = 0;
goto RET_LABEL;
} else {
}
} else {
var = 0;
goto RET_LABEL;
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var35 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2227);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var33) on <var33:MClassDef> */
var38 = var33->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var33:MClassDef> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 573);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___add_extern(var_v, var36); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_extern on <var_v:AbstractCompilerVisitor>*/
}
var_res = ((val*)NULL);
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var41 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:MMethodDef> */
var39 = var41;
RET_LABEL40:(void)0;
}
}
if (var39 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3013);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#return_mtype (var39) on <var39:nullable MSignature> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1795);
fatal_exit(1);
}
var44 = var39->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var39:nullable MSignature> */
var42 = var44;
RET_LABEL43:(void)0;
}
}
var_ret = var42;
if (var_ret == NULL) {
var45 = 0; /* is null */
} else {
var45 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other = ((val*)NULL);
{
var48 = ((short int(*)(val* self, val* p0))(var_ret->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ret, var_other); /* == on <var_ret:nullable MType(MType)>*/
}
var49 = !var48;
var46 = var49;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
var45 = var46;
}
if (var45){
{
var50 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var51 = nitc___nitc__AbstractCompilerVisitor___resolve_for(var_v, var_ret, var50);
}
var_ret = var51;
{
var52 = nitc___nitc__AbstractCompilerVisitor___new_var_extern(var_v, var_ret);
}
var_res = var52;
} else {
}
{
nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__adapt_signature(var_v, var_mpropdef, var_arguments); /* Direct call separate_compiler#SeparateCompilerVisitor#adapt_signature on <var_v:AbstractCompilerVisitor>*/
}
{
nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__unbox_signature_extern(var_v, var_mpropdef, var_arguments); /* Direct call separate_compiler#SeparateCompilerVisitor#unbox_signature_extern on <var_v:AbstractCompilerVisitor>*/
}
if (var_res == NULL) {
var53 = 1; /* is null */
} else {
var53 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res,((val*)NULL)) on <var_res:nullable RuntimeVariable> */
var_other56 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other56) on <var_res:nullable RuntimeVariable(RuntimeVariable)> */
var59 = var_res == var_other56;
var57 = var59;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
var54 = var57;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
var53 = var54;
}
if (var53){
if (unlikely(varonce60==NULL)) {
var61 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = "(";
var65 = core__flat___NativeString___to_s_full(var64, 1l, 1l);
var63 = var65;
varonce62 = var63;
}
((struct instance_core__NativeArray*)var61)->values[1]=var63;
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = ");";
var69 = core__flat___NativeString___to_s_full(var68, 2l, 2l);
var67 = var69;
varonce66 = var67;
}
((struct instance_core__NativeArray*)var61)->values[3]=var67;
} else {
var61 = varonce60;
varonce60 = NULL;
}
((struct instance_core__NativeArray*)var61)->values[0]=var_externname;
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = ", ";
var73 = core__flat___NativeString___to_s_full(var72, 2l, 2l);
var71 = var73;
varonce70 = var71;
}
{
var74 = core__abstract_text___Collection___join(var_arguments, var71);
}
((struct instance_core__NativeArray*)var61)->values[2]=var74;
{
var75 = ((val*(*)(val* self))(var61->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var61); /* native_to_s on <var61:NativeArray[String]>*/
}
varonce60 = var61;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var75); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
} else {
if (unlikely(varonce76==NULL)) {
var77 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = " = ";
var81 = core__flat___NativeString___to_s_full(var80, 3l, 3l);
var79 = var81;
varonce78 = var79;
}
((struct instance_core__NativeArray*)var77)->values[1]=var79;
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = "(";
var85 = core__flat___NativeString___to_s_full(var84, 1l, 1l);
var83 = var85;
varonce82 = var83;
}
((struct instance_core__NativeArray*)var77)->values[3]=var83;
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = ");";
var89 = core__flat___NativeString___to_s_full(var88, 2l, 2l);
var87 = var89;
varonce86 = var87;
}
((struct instance_core__NativeArray*)var77)->values[5]=var87;
} else {
var77 = varonce76;
varonce76 = NULL;
}
{
var90 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var77)->values[0]=var90;
((struct instance_core__NativeArray*)var77)->values[2]=var_externname;
if (likely(varonce91!=NULL)) {
var92 = varonce91;
} else {
var93 = ", ";
var94 = core__flat___NativeString___to_s_full(var93, 2l, 2l);
var92 = var94;
varonce91 = var92;
}
{
var95 = core__abstract_text___Collection___join(var_arguments, var92);
}
((struct instance_core__NativeArray*)var77)->values[4]=var95;
{
var96 = ((val*(*)(val* self))(var77->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var77); /* native_to_s on <var77:NativeArray[String]>*/
}
varonce76 = var77;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var96); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3025);
fatal_exit(1);
}
{
var97 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__box_extern]))(var_v, var_res, var_ret); /* box_extern on <var_v:AbstractCompilerVisitor>*/
}
var_res = var97;
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var_res); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AMethPropdef#compile_externinit_to_c for (self: AMethPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]): Bool */
short int nitc__abstract_compiler___AMethPropdef___compile_externinit_to_c(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : String */;
val* var4 /* : AbstractCompiler */;
val* var6 /* : AbstractCompiler */;
val* var7 /* : ModelBuilder */;
val* var9 /* : ModelBuilder */;
val* var10 /* : nullable AAnnotation */;
val* var_at /* var at: nullable AAnnotation */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : AbstractCompiler */;
val* var18 /* : AbstractCompiler */;
val* var19 /* : ModelBuilder */;
val* var21 /* : ModelBuilder */;
val* var22 /* : nullable String */;
val* var_externname /* var externname: nullable Object */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : MClassDef */;
val* var27 /* : MClassDef */;
val* var28 /* : MModule */;
val* var30 /* : MModule */;
val* var31 /* : nullable Object */;
val* var32 /* : MType */;
val* var34 /* : MType */;
val* var_ret /* var ret: MType */;
val* var35 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var36 /* : nullable Object */;
val* var38 /* : NativeArray[String] */;
static val* varonce37;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
val* var42 /* : String */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
val* var46 /* : String */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
val* var50 /* : String */;
val* var51 /* : String */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
val* var55 /* : String */;
val* var56 /* : String */;
val* var57 /* : String */;
val* var58 /* : RuntimeVariable */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "extern";
var3 = core__flat___NativeString___to_s_full(var2, 6l, 6l);
var1 = var3;
varonce = var1;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var6 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1133);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var4) on <var4:AbstractCompiler> */
var9 = var4->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var4:AbstractCompiler> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = nitc__annotation___Prod___get_single_annotation(self, var1, var7);
}
var_at = var10;
if (var_at == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_at,((val*)NULL)) on <var_at:nullable AAnnotation> */
var_other = ((val*)NULL);
{
var14 = ((short int(*)(val* self, val* p0))(var_at->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_at, var_other); /* == on <var_at:nullable AAnnotation(AAnnotation)>*/
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
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var18 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1133);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var16) on <var16:AbstractCompiler> */
var21 = var16->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var16:AbstractCompiler> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = nitc__annotation___AAnnotation___arg_as_string(var_at, var19);
}
var_externname = var22;
if (var_externname == NULL) {
var23 = 1; /* is null */
} else {
var23 = 0; /* arg is null but recv is not */
}
if (0) {
var24 = ((short int(*)(val* self, val* p0))(var_externname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_externname, ((val*)NULL)); /* == on <var_externname:nullable Object(nullable String)>*/
var23 = var24;
}
if (var23){
var = 0;
goto RET_LABEL;
} else {
}
} else {
var = 0;
goto RET_LABEL;
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var27 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2227);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var25) on <var25:MClassDef> */
var30 = var25->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var25:MClassDef> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 573);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___add_extern(var_v, var28); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_extern on <var_v:AbstractCompilerVisitor>*/
}
{
nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__adapt_signature(var_v, var_mpropdef, var_arguments); /* Direct call separate_compiler#SeparateCompilerVisitor#adapt_signature on <var_v:AbstractCompilerVisitor>*/
}
{
nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__unbox_signature_extern(var_v, var_mpropdef, var_arguments); /* Direct call separate_compiler#SeparateCompilerVisitor#unbox_signature_extern on <var_v:AbstractCompilerVisitor>*/
}
{
var31 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var31) on <var31:nullable Object(RuntimeVariable)> */
var34 = var31->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var31:nullable Object(RuntimeVariable)> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1870);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
var_ret = var32;
{
var35 = nitc___nitc__AbstractCompilerVisitor___new_var_extern(var_v, var_ret);
}
var_res = var35;
{
var36 = core___core__AbstractArray___core__abstract_collection__Sequence__shift(var_arguments);
}
if (unlikely(varonce37==NULL)) {
var38 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = " = ";
var42 = core__flat___NativeString___to_s_full(var41, 3l, 3l);
var40 = var42;
varonce39 = var40;
}
((struct instance_core__NativeArray*)var38)->values[1]=var40;
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "(";
var46 = core__flat___NativeString___to_s_full(var45, 1l, 1l);
var44 = var46;
varonce43 = var44;
}
((struct instance_core__NativeArray*)var38)->values[3]=var44;
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = ");";
var50 = core__flat___NativeString___to_s_full(var49, 2l, 2l);
var48 = var50;
varonce47 = var48;
}
((struct instance_core__NativeArray*)var38)->values[5]=var48;
} else {
var38 = varonce37;
varonce37 = NULL;
}
{
var51 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var38)->values[0]=var51;
((struct instance_core__NativeArray*)var38)->values[2]=var_externname;
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = ", ";
var55 = core__flat___NativeString___to_s_full(var54, 2l, 2l);
var53 = var55;
varonce52 = var53;
}
{
var56 = core__abstract_text___Collection___join(var_arguments, var53);
}
((struct instance_core__NativeArray*)var38)->values[4]=var56;
{
var57 = ((val*(*)(val* self))(var38->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var38); /* native_to_s on <var38:NativeArray[String]>*/
}
varonce37 = var38;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var57); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
var58 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__box_extern]))(var_v, var_res, var_ret); /* box_extern on <var_v:AbstractCompilerVisitor>*/
}
var_res = var58;
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var_res); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAttrPropdef#can_inline for (self: AAttrPropdef): Bool */
short int nitc__abstract_compiler___AAttrPropdef___APropdef__can_inline(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
{
{ /* Inline modelize_property#AAttrPropdef#is_lazy (self) on <self:AAttrPropdef> */
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
/* method abstract_compiler#AAttrPropdef#compile_to_c for (self: AAttrPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
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
char* var43 /* : NativeString */;
val* var44 /* : String */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
val* var48 /* : String */;
val* var49 /* : String */;
val* var50 /* : String */;
val* var51 /* : nullable MPropDef */;
val* var53 /* : nullable MPropDef */;
val* var54 /* : MProperty */;
val* var56 /* : MProperty */;
val* var57 /* : RuntimeVariable */;
val* var_res /* var res: nullable Object */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
val* var61 /* : String */;
val* var62 /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
short int var63 /* : Bool */;
val* var64 /* : RuntimeVariable */;
val* var_true_v /* var true_v: RuntimeVariable */;
val* var65 /* : nullable Object */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
val* var69 /* : String */;
val* var70 /* : nullable MPropDef */;
val* var72 /* : nullable MPropDef */;
val* var73 /* : MProperty */;
val* var75 /* : MProperty */;
val* var76 /* : nullable Object */;
val* var77 /* : RuntimeVariable */;
val* var78 /* : nullable StaticFrame */;
val* var80 /* : nullable StaticFrame */;
val* var81 /* : nullable RuntimeVariable */;
val* var83 /* : nullable RuntimeVariable */;
val* var84 /* : nullable MMethodDef */;
val* var86 /* : nullable MMethodDef */;
short int var87 /* : Bool */;
short int var89 /* : Bool */;
short int var91 /* : Bool */;
long var92 /* : Int */;
long var94 /* : Int */;
short int var95 /* : Bool */;
short int var97 /* : Bool */;
val* var98 /* : nullable MPropDef */;
val* var100 /* : nullable MPropDef */;
val* var101 /* : MProperty */;
val* var103 /* : MProperty */;
val* var104 /* : nullable Object */;
val* var105 /* : nullable Object */;
short int var106 /* : Bool */;
short int var108 /* : Bool */;
val* var109 /* : nullable MType */;
val* var111 /* : nullable MType */;
val* var_ret112 /* var ret: nullable MType */;
short int var113 /* : Bool */;
short int var114 /* : Bool */;
short int var115 /* : Bool */;
short int var_116 /* var : Bool */;
short int var117 /* : Bool */;
int cltype118;
int idtype119;
short int var120 /* : Bool */;
short int var_useiset121 /* var useiset: Bool */;
short int var122 /* : Bool */;
val* var123 /* : nullable MAttributeDef */;
val* var125 /* : nullable MAttributeDef */;
val* var126 /* : MProperty */;
val* var128 /* : MProperty */;
val* var129 /* : nullable Object */;
val* var130 /* : RuntimeVariable */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
{
{ /* Inline modelize_property#AAttrPropdef#mreadpropdef (self) on <self:AAttrPropdef> */
var2 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mreadpropdef].val; /* _mreadpropdef on <self:AAttrPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var_mpropdef,var) on <var_mpropdef:MMethodDef> */
var_other = var;
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other) on <var_mpropdef:MMethodDef> */
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
{ /* Inline array#AbstractArrayRead#length (var_arguments) on <var_arguments:Array[RuntimeVariable]> */
var10 = var_arguments->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var8,1l) on <var8:Int> */
var13 = var8 == 1l;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3064);
fatal_exit(1);
}
{
var14 = core___core__SequenceRead___Collection__first(var_arguments);
}
var_recv = var14;
{
{ /* Inline modelize_property#AAttrPropdef#is_lazy (self) on <self:AAttrPropdef> */
var17 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___is_lazy].s; /* _is_lazy on <self:AAttrPropdef> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (var15){
{
{ /* Inline modelize_property#AAttrPropdef#mtype (self) on <self:AAttrPropdef> */
var20 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mtype].val; /* _mtype on <self:AAttrPropdef> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
var_ret = var18;
if (var_ret == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3070);
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
{ /* Inline modelize_property#AAttrPropdef#mlazypropdef (self) on <self:AAttrPropdef> */
var28 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mlazypropdef].val; /* _mlazypropdef on <self:AAttrPropdef> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
if (var26 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3071);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mproperty (var26) on <var26:nullable MAttributeDef> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var31 = var26->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var26:nullable MAttributeDef> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
var_guard = var29;
if (var_useiset){
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var34 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
if (var32 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3073);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mproperty (var32) on <var32:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var37 = var32->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var32:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
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
var40 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "if(likely(";
var44 = core__flat___NativeString___to_s_full(var43, 10l, 10l);
var42 = var44;
varonce41 = var42;
}
((struct instance_core__NativeArray*)var40)->values[0]=var42;
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = ")) {";
var48 = core__flat___NativeString___to_s_full(var47, 4l, 4l);
var46 = var48;
varonce45 = var46;
}
((struct instance_core__NativeArray*)var40)->values[2]=var46;
} else {
var40 = varonce;
varonce = NULL;
}
{
var49 = ((val*(*)(val* self))(var_set->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_set); /* to_s on <var_set:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var40)->values[1]=var49;
{
var50 = ((val*(*)(val* self))(var40->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var40); /* native_to_s on <var40:NativeArray[String]>*/
}
varonce = var40;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var50); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var53 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var51 = var53;
RET_LABEL52:(void)0;
}
}
if (var51 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3078);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mproperty (var51) on <var51:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var56 = var51->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var51:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
var57 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__read_attribute(var_v, var54, var_recv);
}
var_res = var57;
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "} else {";
var61 = core__flat___NativeString___to_s_full(var60, 8l, 8l);
var59 = var61;
varonce58 = var59;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var59); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
var62 = nitc__abstract_compiler___AAttrPropdef___evaluate_expr(self, var_v, var_recv);
}
var_value = var62;
{
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var_res, var_value); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
var63 = !var_useiset;
if (var63){
{
var64 = nitc___nitc__AbstractCompilerVisitor___bool_instance(var_v, 1);
}
var_true_v = var64;
{
var65 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__write_attribute(var_v, var_guard, var65, var_true_v); /* Direct call separate_compiler#SeparateCompilerVisitor#write_attribute on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = "}";
var69 = core__flat___NativeString___to_s_full(var68, 1l, 1l);
var67 = var69;
varonce66 = var67;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var67); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
} else {
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var72 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var70 = var72;
RET_LABEL71:(void)0;
}
}
if (var70 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3090);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mproperty (var70) on <var70:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var75 = var70->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var70:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
var76 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var77 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__read_attribute(var_v, var73, var76);
}
var_res = var77;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var80 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var78 = var80;
RET_LABEL79:(void)0;
}
}
if (var78 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3092);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#returnvar (var78) on <var78:nullable StaticFrame> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1924);
fatal_exit(1);
}
var83 = var78->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnvar].val; /* _returnvar on <var78:nullable StaticFrame> */
var81 = var83;
RET_LABEL82:(void)0;
}
}
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3092);
fatal_exit(1);
}
{
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var81, var_res); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
} else {
{
{ /* Inline modelize_property#AAttrPropdef#mwritepropdef (self) on <self:AAttrPropdef> */
var86 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mwritepropdef].val; /* _mwritepropdef on <self:AAttrPropdef> */
var84 = var86;
RET_LABEL85:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var_mpropdef,var84) on <var_mpropdef:MMethodDef> */
var_other = var84;
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other) on <var_mpropdef:MMethodDef> */
var91 = var_mpropdef == var_other;
var89 = var91;
goto RET_LABEL90;
RET_LABEL90:(void)0;
}
}
var87 = var89;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
}
if (var87){
{
{ /* Inline array#AbstractArrayRead#length (var_arguments) on <var_arguments:Array[RuntimeVariable]> */
var94 = var_arguments->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var92 = var94;
RET_LABEL93:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var92,2l) on <var92:Int> */
var97 = var92 == 2l;
var95 = var97;
goto RET_LABEL96;
RET_LABEL96:(void)0;
}
}
if (unlikely(!var95)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3094);
fatal_exit(1);
}
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var100 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var98 = var100;
RET_LABEL99:(void)0;
}
}
if (var98 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3095);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mproperty (var98) on <var98:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var98 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var103 = var98->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var98:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var103 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var101 = var103;
RET_LABEL102:(void)0;
}
}
{
var104 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var105 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__write_attribute(var_v, var101, var104, var105); /* Direct call separate_compiler#SeparateCompilerVisitor#write_attribute on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline modelize_property#AAttrPropdef#is_lazy (self) on <self:AAttrPropdef> */
var108 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___is_lazy].s; /* _is_lazy on <self:AAttrPropdef> */
var106 = var108;
RET_LABEL107:(void)0;
}
}
if (var106){
{
{ /* Inline modelize_property#AAttrPropdef#mtype (self) on <self:AAttrPropdef> */
var111 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mtype].val; /* _mtype on <self:AAttrPropdef> */
var109 = var111;
RET_LABEL110:(void)0;
}
}
var_ret112 = var109;
if (var_ret112 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3098);
fatal_exit(1);
} else {
var114 = ((short int(*)(val* self))(var_ret112->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var_ret112); /* is_c_primitive on <var_ret112:nullable MType>*/
}
var115 = !var114;
var_116 = var115;
if (var115){
/* <var_ret112:nullable MType> isa MNullableType */
cltype118 = type_nitc__MNullableType.color;
idtype119 = type_nitc__MNullableType.id;
if(var_ret112 == NULL) {
var117 = 0;
} else {
if(cltype118 >= var_ret112->type->table_size) {
var117 = 0;
} else {
var117 = var_ret112->type->type_table[cltype118] == idtype119;
}
}
var120 = !var117;
var113 = var120;
} else {
var113 = var_116;
}
var_useiset121 = var113;
var122 = !var_useiset121;
if (var122){
{
{ /* Inline modelize_property#AAttrPropdef#mlazypropdef (self) on <self:AAttrPropdef> */
var125 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mlazypropdef].val; /* _mlazypropdef on <self:AAttrPropdef> */
var123 = var125;
RET_LABEL124:(void)0;
}
}
if (var123 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3100);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mproperty (var123) on <var123:nullable MAttributeDef> */
if (unlikely(var123 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var128 = var123->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var123:nullable MAttributeDef> */
if (unlikely(var128 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var126 = var128;
RET_LABEL127:(void)0;
}
}
{
var129 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var130 = nitc___nitc__AbstractCompilerVisitor___bool_instance(var_v, 1);
}
{
nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__write_attribute(var_v, var126, var129, var130); /* Direct call separate_compiler#SeparateCompilerVisitor#write_attribute on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
} else {
}
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3104);
fatal_exit(1);
}
}
RET_LABEL:;
}
/* method abstract_compiler#AAttrPropdef#init_expr for (self: AAttrPropdef, AbstractCompilerVisitor, RuntimeVariable) */
void nitc__abstract_compiler___AAttrPropdef___init_expr(val* self, val* p0, val* p1) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_recv /* var recv: RuntimeVariable */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
short int var_ /* var : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var_9 /* var : Bool */;
val* var10 /* : nullable AExpr */;
val* var12 /* : nullable AExpr */;
short int var13 /* : Bool */;
int cltype;
int idtype;
short int var14 /* : Bool */;
val* var15 /* : RuntimeVariable */;
var_v = p0;
var_recv = p1;
{
{ /* Inline modelize_property#AAttrPropdef#has_value (self) on <self:AAttrPropdef> */
var4 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <self:AAttrPropdef> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
var_ = var2;
if (var2){
{
{ /* Inline modelize_property#AAttrPropdef#is_lazy (self) on <self:AAttrPropdef> */
var7 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___is_lazy].s; /* _is_lazy on <self:AAttrPropdef> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
var8 = !var5;
var1 = var8;
} else {
var1 = var_;
}
var_9 = var1;
if (var1){
{
{ /* Inline parser_nodes#AAttrPropdef#n_expr (self) on <self:AAttrPropdef> */
var12 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <self:AAttrPropdef> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
/* <var10:nullable AExpr> isa ANullExpr */
cltype = type_nitc__ANullExpr.color;
idtype = type_nitc__ANullExpr.id;
if(var10 == NULL) {
var13 = 0;
} else {
if(cltype >= var10->type->table_size) {
var13 = 0;
} else {
var13 = var10->type->type_table[cltype] == idtype;
}
}
var14 = !var13;
var = var14;
} else {
var = var_9;
}
if (var){
{
var15 = nitc__abstract_compiler___AAttrPropdef___evaluate_expr(self, var_v, var_recv);
}
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#AAttrPropdef#evaluate_expr for (self: AAttrPropdef, AbstractCompilerVisitor, RuntimeVariable): RuntimeVariable */
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
char* var47 /* : NativeString */;
val* var48 /* : String */;
val* var49 /* : String */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
val* var54 /* : String */;
val* var56 /* : NativeArray[String] */;
static val* varonce55;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
val* var60 /* : String */;
val* var61 /* : nullable String */;
val* var63 /* : nullable String */;
val* var64 /* : String */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
val* var68 /* : String */;
val* var69 /* : nullable MPropDef */;
val* var71 /* : nullable MPropDef */;
val* var72 /* : MProperty */;
val* var74 /* : MProperty */;
var_v = p0;
var_recv = p1;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (var_v) on <var_v:AbstractCompilerVisitor> */
var3 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <var_v:AbstractCompilerVisitor> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_oldnode = var1;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node= (var_v,self) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val = self; /* _current_node on <var_v:AbstractCompilerVisitor> */
RET_LABEL4:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var7 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_old_frame = var5;
var8 = NEW_nitc__StaticFrame(&type_nitc__StaticFrame);
{
{ /* Inline modelize_property#AAttrPropdef#mreadpropdef (self) on <self:AAttrPropdef> */
var11 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mreadpropdef].val; /* _mreadpropdef on <self:AAttrPropdef> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3119);
fatal_exit(1);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_recv) on <var_recv:RuntimeVariable> */
var14 = var_recv->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_recv:RuntimeVariable> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1873);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3119);
fatal_exit(1);
}
var17 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var17, 1l); /* Direct call array#Array#with_capacity on <var17:Array[RuntimeVariable]>*/
}
var_ = var17;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_recv); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
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
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame= (var_v,var_frame) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val = var_frame; /* _frame on <var_v:AbstractCompilerVisitor> */
RET_LABEL18:(void)0;
}
}
{
{ /* Inline modelize_property#AAttrPropdef#mtype (self) on <self:AAttrPropdef> */
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
{ /* Inline kernel#Object#!= (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
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
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3124);
fatal_exit(1);
}
{
{ /* Inline parser_nodes#AAttrPropdef#n_expr (self) on <self:AAttrPropdef> */
var29 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <self:AAttrPropdef> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_nexpr = var27;
{
{ /* Inline parser_nodes#AAttrPropdef#n_block (self) on <self:AAttrPropdef> */
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
{ /* Inline kernel#Object#!= (var_nexpr,((val*)NULL)) on <var_nexpr:nullable AExpr> */
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
{ /* Inline kernel#Object#!= (var_nblock,((val*)NULL)) on <var_nblock:nullable AExpr> */
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
{ /* Inline abstract_compiler#StaticFrame#returnvar= (var_frame,var_value) on <var_frame:StaticFrame> */
var_frame->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnvar].val = var_value; /* _returnvar on <var_frame:StaticFrame> */
RET_LABEL45:(void)0;
}
}
if (likely(varonce!=NULL)) {
var46 = varonce;
} else {
var47 = "RET_LABEL";
var48 = core__flat___NativeString___to_s_full(var47, 9l, 9l);
var46 = var48;
varonce = var46;
}
{
var49 = nitc___nitc__AbstractCompilerVisitor___get_name(var_v, var46);
}
{
{ /* Inline abstract_compiler#StaticFrame#returnlabel= (var_frame,var49) on <var_frame:StaticFrame> */
var_frame->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnlabel].val = var49; /* _returnlabel on <var_frame:StaticFrame> */
RET_LABEL50:(void)0;
}
}
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "{";
var54 = core__flat___NativeString___to_s_full(var53, 1l, 1l);
var52 = var54;
varonce51 = var52;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var52); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
nitc___nitc__AbstractCompilerVisitor___stmt(var_v, var_nblock); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce55==NULL)) {
var56 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = ":(void)0;";
var60 = core__flat___NativeString___to_s_full(var59, 9l, 9l);
var58 = var60;
varonce57 = var58;
}
((struct instance_core__NativeArray*)var56)->values[1]=var58;
} else {
var56 = varonce55;
varonce55 = NULL;
}
{
{ /* Inline abstract_compiler#StaticFrame#returnlabel (var_frame) on <var_frame:StaticFrame> */
var63 = var_frame->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnlabel].val; /* _returnlabel on <var_frame:StaticFrame> */
var61 = var63;
RET_LABEL62:(void)0;
}
}
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3136);
fatal_exit(1);
}
((struct instance_core__NativeArray*)var56)->values[0]=var61;
{
var64 = ((val*(*)(val* self))(var56->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var56); /* native_to_s on <var56:NativeArray[String]>*/
}
varonce55 = var56;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var64); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = "}";
var68 = core__flat___NativeString___to_s_full(var67, 1l, 1l);
var66 = var68;
varonce65 = var66;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var66); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3139);
fatal_exit(1);
}
}
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var71 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var69 = var71;
RET_LABEL70:(void)0;
}
}
if (var69 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3142);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mproperty (var69) on <var69:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var69 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var74 = var69->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var69:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
{
nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__write_attribute(var_v, var72, var_recv, var_value); /* Direct call separate_compiler#SeparateCompilerVisitor#write_attribute on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame= (var_v,var_old_frame) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val = var_old_frame; /* _frame on <var_v:AbstractCompilerVisitor> */
RET_LABEL75:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node= (var_v,var_oldnode) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val = var_oldnode; /* _current_node on <var_v:AbstractCompilerVisitor> */
RET_LABEL76:(void)0;
}
}
var = var_value;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AClassdef#compile_to_c for (self: AClassdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void nitc__abstract_compiler___AClassdef___compile_to_c(val* self, val* p0, val* p1, val* p2) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var /* : nullable MMethodDef */;
val* var2 /* : nullable MMethodDef */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : MProperty */;
val* var10 /* : MProperty */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
long var14 /* : Int */;
long var16 /* : Int */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : nullable Object */;
val* var23 /* : MType */;
val* var25 /* : MType */;
short int var26 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var27 /* : nullable RuntimeVariable */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
{
{ /* Inline modelize_property#AClassdef#mfree_init (self) on <self:AClassdef> */
var2 = self->attrs[COLOR_nitc__modelize_property__AClassdef___mfree_init].val; /* _mfree_init on <self:AClassdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var_mpropdef,var) on <var_mpropdef:MMethodDef> */
var_other = var;
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other) on <var_mpropdef:MMethodDef> */
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
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var10 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline model#MMethod#is_root_init (var8) on <var8:MProperty(MMethod)> */
var13 = var8->attrs[COLOR_nitc__model__MMethod___is_root_init].s; /* _is_root_init on <var8:MProperty(MMethod)> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3171);
fatal_exit(1);
}
{
{ /* Inline array#AbstractArrayRead#length (var_arguments) on <var_arguments:Array[RuntimeVariable]> */
var16 = var_arguments->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var14,1l) on <var14:Int> */
var19 = var14 == 1l;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3172);
fatal_exit(1);
}
{
var20 = nitc___nitc__MPropDef___is_intro(var_mpropdef);
}
var21 = !var20;
if (var21){
{
var22 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var22) on <var22:nullable Object(RuntimeVariable)> */
var25 = var22->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var22:nullable Object(RuntimeVariable)> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1870);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
/* <var23:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var23->type->table_size) {
var26 = 0;
} else {
var26 = var23->type->type_table[cltype] == idtype;
}
if (unlikely(!var26)) {
var_class_name = var23 == NULL ? "null" : var23->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3174);
fatal_exit(1);
}
{
var27 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__supercall(var_v, var_mpropdef, var23, var_arguments);
}
} else {
}
goto RET_LABEL;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3178);
fatal_exit(1);
}
RET_LABEL:;
}
/* method abstract_compiler#AExpr#expr for (self: AExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AExpr___expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : String */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : String */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var15 /* : Location */;
val* var17 /* : Location */;
val* var18 /* : String */;
val* var19 /* : String */;
val* var20 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var29 /* : NativeArray[String] */;
static val* varonce28;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : String */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : String */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : String */;
val* var42 /* : String */;
val* var43 /* : String */;
val* var44 /* : String */;
var_v = p0;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "PRINT_ERROR(\"NOT YET IMPLEMENTED ";
var5 = core__flat___NativeString___to_s_full(var4, 33l, 33l);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = ":";
var9 = core__flat___NativeString___to_s_full(var8, 1l, 1l);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var1)->values[2]=var7;
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "\\n\");";
var13 = core__flat___NativeString___to_s_full(var12, 5l, 5l);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var1)->values[4]=var11;
} else {
var1 = varonce;
varonce = NULL;
}
{
var14 = core__abstract_text___Object___class_name(self);
}
((struct instance_core__NativeArray*)var1)->values[1]=var14;
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AExpr> */
var17 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <self:AExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 24);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = nitc___nitc__Location___core__abstract_text__Object__to_s(var15);
}
((struct instance_core__NativeArray*)var1)->values[3]=var18;
{
var19 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var19); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
var20 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__typing__AExpr__mtype]))(self); /* mtype on <self:AExpr>*/
}
var_mtype = var20;
if (var_mtype == NULL) {
var21 = 1; /* is null */
} else {
var21 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var26 = var_mtype == var_other;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
var21 = var22;
}
if (var21){
var = ((val*)NULL);
goto RET_LABEL;
} else {
{
var27 = nitc___nitc__AbstractCompilerVisitor___new_var(var_v, var_mtype);
}
var_res = var27;
if (unlikely(varonce28==NULL)) {
var29 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "/* ";
var33 = core__flat___NativeString___to_s_full(var32, 3l, 3l);
var31 = var33;
varonce30 = var31;
}
((struct instance_core__NativeArray*)var29)->values[0]=var31;
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = " = NOT YET ";
var37 = core__flat___NativeString___to_s_full(var36, 11l, 11l);
var35 = var37;
varonce34 = var35;
}
((struct instance_core__NativeArray*)var29)->values[2]=var35;
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = " */";
var41 = core__flat___NativeString___to_s_full(var40, 3l, 3l);
var39 = var41;
varonce38 = var39;
}
((struct instance_core__NativeArray*)var29)->values[4]=var39;
} else {
var29 = varonce28;
varonce28 = NULL;
}
{
var42 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var29)->values[1]=var42;
{
var43 = core__abstract_text___Object___class_name(self);
}
((struct instance_core__NativeArray*)var29)->values[3]=var43;
{
var44 = ((val*(*)(val* self))(var29->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var29); /* native_to_s on <var29:NativeArray[String]>*/
}
varonce28 = var29;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var44); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method abstract_compiler#AExpr#stmt for (self: AExpr, AbstractCompilerVisitor) */
void nitc__abstract_compiler___AExpr___stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : nullable RuntimeVariable */;
var_v = p0;
{
var = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__abstract_compiler__AExpr__expr]))(self, var_v); /* expr on <self:AExpr>*/
}
RET_LABEL:;
}
/* method abstract_compiler#ABlockExpr#stmt for (self: ABlockExpr, AbstractCompilerVisitor) */
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
{ /* Inline parser_nodes#ABlockExpr#n_expr (self) on <self:ABlockExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1744);
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
nitc___nitc__AbstractCompilerVisitor___stmt(var_v, var_e); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
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
/* method abstract_compiler#ABlockExpr#expr for (self: ABlockExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
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
{ /* Inline parser_nodes#ABlockExpr#n_expr (self) on <self:ABlockExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1744);
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
{ /* Inline parser_nodes#ABlockExpr#n_expr (self) on <self:ABlockExpr> */
var7 = self->attrs[COLOR_nitc__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1744);
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
{ /* Inline kernel#Object#== (var_e,var_last) on <var_e:AExpr> */
var_other = var_last;
{
{ /* Inline kernel#Object#is_same_instance (var_e,var_other) on <var_e:AExpr> */
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
nitc___nitc__AbstractCompilerVisitor___stmt(var_v, var_e); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
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
/* method abstract_compiler#AVardeclExpr#stmt for (self: AVardeclExpr, AbstractCompilerVisitor) */
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
{ /* Inline scope#AVardeclExpr#variable (self) on <self:AVardeclExpr> */
var2 = self->attrs[COLOR_nitc__scope__AVardeclExpr___variable].val; /* _variable on <self:AVardeclExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3226);
fatal_exit(1);
}
var_variable = var;
{
{ /* Inline parser_nodes#AVardeclExpr#n_expr (self) on <self:AVardeclExpr> */
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
{ /* Inline kernel#Object#!= (var_ne,((val*)NULL)) on <var_ne:nullable AExpr> */
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
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:Variable> */
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
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var15, var_i); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#AVarExpr#expr for (self: AVarExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
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
{ /* Inline scope#AVarFormExpr#variable (self) on <self:AVarExpr> */
var3 = self->attrs[COLOR_nitc__scope__AVarFormExpr___variable].val; /* _variable on <self:AVarExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3238);
fatal_exit(1);
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___variable(var_v, var1);
}
var_res = var4;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AVarExpr> */
var7 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:AVarExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3239);
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
/* method abstract_compiler#AVarAssignExpr#expr for (self: AVarAssignExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
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
{ /* Inline scope#AVarFormExpr#variable (self) on <self:AVarAssignExpr> */
var3 = self->attrs[COLOR_nitc__scope__AVarFormExpr___variable].val; /* _variable on <self:AVarAssignExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3247);
fatal_exit(1);
}
var_variable = var1;
{
{ /* Inline parser_nodes#AAssignFormExpr#n_value (self) on <self:AVarAssignExpr> */
var6 = self->attrs[COLOR_nitc__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AVarAssignExpr> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1992);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:Variable> */
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
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var11, var_i); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
var = var_i;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AVarReassignExpr#stmt for (self: AVarReassignExpr, AbstractCompilerVisitor) */
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
{ /* Inline scope#AVarFormExpr#variable (self) on <self:AVarReassignExpr> */
var2 = self->attrs[COLOR_nitc__scope__AVarFormExpr___variable].val; /* _variable on <self:AVarReassignExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3257);
fatal_exit(1);
}
var_variable = var;
{
var3 = nitc___nitc__AbstractCompilerVisitor___variable(var_v, var_variable);
}
var_vari = var3;
{
{ /* Inline parser_nodes#AReassignFormExpr#n_value (self) on <self:AVarReassignExpr> */
var6 = self->attrs[COLOR_nitc__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AVarReassignExpr> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2003);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:Variable> */
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
{ /* Inline typing#AReassignFormExpr#reassign_callsite (self) on <self:AVarReassignExpr> */
var13 = self->attrs[COLOR_nitc__typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:AVarReassignExpr> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3260);
fatal_exit(1);
}
var14 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var14, 2l); /* Direct call array#Array#with_capacity on <var14:Array[RuntimeVariable]>*/
}
var_ = var14;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_vari); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_value); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
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
{ /* Inline kernel#Object#!= (var_res,((val*)NULL)) on <var_res:nullable RuntimeVariable> */
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
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3261);
fatal_exit(1);
}
{
var21 = nitc___nitc__AbstractCompilerVisitor___variable(var_v, var_variable);
}
{
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var21, var_res); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#ASelfExpr#expr for (self: ASelfExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
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
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var3 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3267);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#arguments (var1) on <var1:nullable StaticFrame> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1921);
fatal_exit(1);
}
var6 = var1->attrs[COLOR_nitc__abstract_compiler__StaticFrame___arguments].val; /* _arguments on <var1:nullable StaticFrame> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1921);
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
/* method abstract_compiler#AImplicitSelfExpr#expr for (self: AImplicitSelfExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AImplicitSelfExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable RuntimeVariable */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : String */;
val* var9 /* : nullable MType */;
val* var11 /* : nullable MType */;
val* var12 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline typing#AImplicitSelfExpr#is_sys (self) on <self:AImplicitSelfExpr> */
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
var8 = core__flat___NativeString___to_s_full(var7, 8l, 8l);
var6 = var8;
varonce = var6;
}
{
{ /* Inline typing#AExpr#mtype (self) on <self:AImplicitSelfExpr> */
var11 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:AImplicitSelfExpr> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3273);
fatal_exit(1);
}
{
var12 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var6, var9);
}
var = var12;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AEscapeExpr#stmt for (self: AEscapeExpr, AbstractCompilerVisitor) */
void nitc__abstract_compiler___AEscapeExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : NativeArray[String] */;
static val* varonce;
static val* varonce1;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : String */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : String */;
val* var9 /* : nullable EscapeMark */;
val* var11 /* : nullable EscapeMark */;
val* var12 /* : String */;
val* var13 /* : String */;
var_v = p0;
if (unlikely(varonce==NULL)) {
var = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1!=NULL)) {
var2 = varonce1;
} else {
var3 = "goto BREAK_";
var4 = core__flat___NativeString___to_s_full(var3, 11l, 11l);
var2 = var4;
varonce1 = var2;
}
((struct instance_core__NativeArray*)var)->values[0]=var2;
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = ";";
var8 = core__flat___NativeString___to_s_full(var7, 1l, 1l);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var)->values[2]=var6;
} else {
var = varonce;
varonce = NULL;
}
{
{ /* Inline scope#AEscapeExpr#escapemark (self) on <self:AEscapeExpr> */
var11 = self->attrs[COLOR_nitc__scope__AEscapeExpr___escapemark].val; /* _escapemark on <self:AEscapeExpr> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = nitc___nitc__AbstractCompilerVisitor___escapemark_name(var_v, var9);
}
((struct instance_core__NativeArray*)var)->values[1]=var12;
{
var13 = ((val*(*)(val* self))(var->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var); /* native_to_s on <var:NativeArray[String]>*/
}
varonce = var;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var13); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AReturnExpr#stmt for (self: AReturnExpr, AbstractCompilerVisitor) */
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
char* var21 /* : NativeString */;
val* var22 /* : String */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
val* var26 /* : String */;
val* var27 /* : nullable StaticFrame */;
val* var29 /* : nullable StaticFrame */;
val* var30 /* : nullable String */;
val* var32 /* : nullable String */;
val* var33 /* : String */;
var_v = p0;
{
{ /* Inline parser_nodes#AReturnExpr#n_expr (self) on <self:AReturnExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AReturnExpr___n_expr].val; /* _n_expr on <self:AReturnExpr> */
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
{ /* Inline kernel#Object#!= (var_nexpr,((val*)NULL)) on <var_nexpr:nullable AExpr> */
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
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var10 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
if (var8 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3286);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#returnvar (var8) on <var8:nullable StaticFrame> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1924);
fatal_exit(1);
}
var13 = var8->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnvar].val; /* _returnvar on <var8:nullable StaticFrame> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3286);
fatal_exit(1);
}
var_returnvar = var11;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_returnvar) on <var_returnvar:RuntimeVariable> */
var16 = var_returnvar->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_returnvar:RuntimeVariable> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1870);
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
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var_returnvar, var_i); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (unlikely(varonce==NULL)) {
var18 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "goto ";
var22 = core__flat___NativeString___to_s_full(var21, 5l, 5l);
var20 = var22;
varonce19 = var20;
}
((struct instance_core__NativeArray*)var18)->values[0]=var20;
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = ";";
var26 = core__flat___NativeString___to_s_full(var25, 1l, 1l);
var24 = var26;
varonce23 = var24;
}
((struct instance_core__NativeArray*)var18)->values[2]=var24;
} else {
var18 = varonce;
varonce = NULL;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var29 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
if (var27 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3290);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#returnlabel (var27) on <var27:nullable StaticFrame> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1927);
fatal_exit(1);
}
var32 = var27->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnlabel].val; /* _returnlabel on <var27:nullable StaticFrame> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3290);
fatal_exit(1);
}
((struct instance_core__NativeArray*)var18)->values[1]=var30;
{
var33 = ((val*(*)(val* self))(var18->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var18); /* native_to_s on <var18:NativeArray[String]>*/
}
varonce = var18;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var33); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AAbortExpr#stmt for (self: AAbortExpr, AbstractCompilerVisitor) */
void nitc__abstract_compiler___AAbortExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : String */;
var_v = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "Aborted";
var2 = core__flat___NativeString___to_s_full(var1, 7l, 7l);
var = var2;
varonce = var;
}
{
nitc___nitc__AbstractCompilerVisitor___add_abort(var_v, var); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AIfExpr#stmt for (self: AIfExpr, AbstractCompilerVisitor) */
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
char* var7 /* : NativeString */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : String */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var15 /* : nullable AExpr */;
val* var17 /* : nullable AExpr */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
val* var21 /* : String */;
val* var22 /* : nullable AExpr */;
val* var24 /* : nullable AExpr */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
val* var28 /* : String */;
var_v = p0;
{
{ /* Inline parser_nodes#AIfExpr#n_expr (self) on <self:AIfExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_expr].val; /* _n_expr on <self:AIfExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1843);
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
var4 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "if (";
var8 = core__flat___NativeString___to_s_full(var7, 4l, 4l);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var4)->values[0]=var6;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "){";
var12 = core__flat___NativeString___to_s_full(var11, 2l, 2l);
var10 = var12;
varonce9 = var10;
}
((struct instance_core__NativeArray*)var4)->values[2]=var10;
} else {
var4 = varonce;
varonce = NULL;
}
{
var13 = ((val*(*)(val* self))(var_cond->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_cond); /* to_s on <var_cond:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var4)->values[1]=var13;
{
var14 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var14); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AIfExpr#n_then (self) on <self:AIfExpr> */
var17 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_then].val; /* _n_then on <self:AIfExpr> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___stmt(var_v, var15); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "} else {";
var21 = core__flat___NativeString___to_s_full(var20, 8l, 8l);
var19 = var21;
varonce18 = var19;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var19); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AIfExpr#n_else (self) on <self:AIfExpr> */
var24 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_else].val; /* _n_else on <self:AIfExpr> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___stmt(var_v, var22); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "}";
var28 = core__flat___NativeString___to_s_full(var27, 1l, 1l);
var26 = var28;
varonce25 = var26;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var26); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AIfExpr#expr for (self: AIfExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
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
char* var12 /* : NativeString */;
val* var13 /* : String */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : String */;
val* var18 /* : String */;
val* var19 /* : String */;
val* var20 /* : nullable AExpr */;
val* var22 /* : nullable AExpr */;
val* var23 /* : RuntimeVariable */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : String */;
val* var28 /* : nullable AExpr */;
val* var30 /* : nullable AExpr */;
val* var31 /* : RuntimeVariable */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
val* var35 /* : String */;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AIfExpr> */
var3 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:AIfExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3311);
fatal_exit(1);
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___new_var(var_v, var1);
}
var_res = var4;
{
{ /* Inline parser_nodes#AIfExpr#n_expr (self) on <self:AIfExpr> */
var7 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_expr].val; /* _n_expr on <self:AIfExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1843);
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
var9 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "if (";
var13 = core__flat___NativeString___to_s_full(var12, 4l, 4l);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var9)->values[0]=var11;
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "){";
var17 = core__flat___NativeString___to_s_full(var16, 2l, 2l);
var15 = var17;
varonce14 = var15;
}
((struct instance_core__NativeArray*)var9)->values[2]=var15;
} else {
var9 = varonce;
varonce = NULL;
}
{
var18 = ((val*(*)(val* self))(var_cond->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_cond); /* to_s on <var_cond:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var9)->values[1]=var18;
{
var19 = ((val*(*)(val* self))(var9->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var9); /* native_to_s on <var9:NativeArray[String]>*/
}
varonce = var9;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var19); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AIfExpr#n_then (self) on <self:AIfExpr> */
var22 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_then].val; /* _n_then on <self:AIfExpr> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3314);
fatal_exit(1);
}
{
var23 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var20, ((val*)NULL));
}
{
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var_res, var23); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "} else {";
var27 = core__flat___NativeString___to_s_full(var26, 8l, 8l);
var25 = var27;
varonce24 = var25;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var25); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AIfExpr#n_else (self) on <self:AIfExpr> */
var30 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_else].val; /* _n_else on <self:AIfExpr> */
var28 = var30;
RET_LABEL29:(void)0;
}
}
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3316);
fatal_exit(1);
}
{
var31 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var28, ((val*)NULL));
}
{
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var_res, var31); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "}";
var35 = core__flat___NativeString___to_s_full(var34, 1l, 1l);
var33 = var35;
varonce32 = var33;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var33); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AIfexprExpr#expr for (self: AIfexprExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
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
char* var12 /* : NativeString */;
val* var13 /* : String */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : String */;
val* var18 /* : String */;
val* var19 /* : String */;
val* var20 /* : AExpr */;
val* var22 /* : AExpr */;
val* var23 /* : RuntimeVariable */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : String */;
val* var28 /* : AExpr */;
val* var30 /* : AExpr */;
val* var31 /* : RuntimeVariable */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
val* var35 /* : String */;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AIfexprExpr> */
var3 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:AIfexprExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3325);
fatal_exit(1);
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___new_var(var_v, var1);
}
var_res = var4;
{
{ /* Inline parser_nodes#AIfexprExpr#n_expr (self) on <self:AIfexprExpr> */
var7 = self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_expr].val; /* _n_expr on <self:AIfexprExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1866);
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
var9 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "if (";
var13 = core__flat___NativeString___to_s_full(var12, 4l, 4l);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var9)->values[0]=var11;
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "){";
var17 = core__flat___NativeString___to_s_full(var16, 2l, 2l);
var15 = var17;
varonce14 = var15;
}
((struct instance_core__NativeArray*)var9)->values[2]=var15;
} else {
var9 = varonce;
varonce = NULL;
}
{
var18 = ((val*(*)(val* self))(var_cond->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_cond); /* to_s on <var_cond:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var9)->values[1]=var18;
{
var19 = ((val*(*)(val* self))(var9->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var9); /* native_to_s on <var9:NativeArray[String]>*/
}
varonce = var9;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var19); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AIfexprExpr#n_then (self) on <self:AIfexprExpr> */
var22 = self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_then].val; /* _n_then on <self:AIfexprExpr> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_then");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1872);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var20, ((val*)NULL));
}
{
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var_res, var23); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "} else {";
var27 = core__flat___NativeString___to_s_full(var26, 8l, 8l);
var25 = var27;
varonce24 = var25;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var25); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AIfexprExpr#n_else (self) on <self:AIfexprExpr> */
var30 = self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_else].val; /* _n_else on <self:AIfexprExpr> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_else");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1878);
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
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var_res, var31); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "}";
var35 = core__flat___NativeString___to_s_full(var34, 1l, 1l);
var33 = var35;
varonce32 = var33;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var33); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ADoExpr#stmt for (self: ADoExpr, AbstractCompilerVisitor) */
void nitc__abstract_compiler___ADoExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : nullable AExpr */;
val* var2 /* : nullable AExpr */;
val* var3 /* : nullable EscapeMark */;
val* var5 /* : nullable EscapeMark */;
var_v = p0;
{
{ /* Inline parser_nodes#ADoExpr#n_block (self) on <self:ADoExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ADoExpr___n_block].val; /* _n_block on <self:ADoExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___stmt(var_v, var); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline scope#ADoExpr#break_mark (self) on <self:ADoExpr> */
var5 = self->attrs[COLOR_nitc__scope__ADoExpr___break_mark].val; /* _break_mark on <self:ADoExpr> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___add_escape_label(var_v, var3); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_escape_label on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AWhileExpr#stmt for (self: AWhileExpr, AbstractCompilerVisitor) */
void nitc__abstract_compiler___AWhileExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : String */;
val* var3 /* : AExpr */;
val* var5 /* : AExpr */;
val* var6 /* : RuntimeVariable */;
val* var_cond /* var cond: RuntimeVariable */;
val* var8 /* : NativeArray[String] */;
static val* varonce7;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : String */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : String */;
val* var17 /* : String */;
val* var18 /* : String */;
val* var19 /* : nullable AExpr */;
val* var21 /* : nullable AExpr */;
val* var22 /* : nullable EscapeMark */;
val* var24 /* : nullable EscapeMark */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
val* var28 /* : String */;
val* var29 /* : nullable EscapeMark */;
val* var31 /* : nullable EscapeMark */;
var_v = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "for(;;) {";
var2 = core__flat___NativeString___to_s_full(var1, 9l, 9l);
var = var2;
varonce = var;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AWhileExpr#n_expr (self) on <self:AWhileExpr> */
var5 = self->attrs[COLOR_nitc__parser_nodes__AWhileExpr___n_expr].val; /* _n_expr on <self:AWhileExpr> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1890);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = nitc___nitc__AbstractCompilerVisitor___expr_bool(var_v, var3);
}
var_cond = var6;
if (unlikely(varonce7==NULL)) {
var8 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "if (!";
var12 = core__flat___NativeString___to_s_full(var11, 5l, 5l);
var10 = var12;
varonce9 = var10;
}
((struct instance_core__NativeArray*)var8)->values[0]=var10;
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = ") break;";
var16 = core__flat___NativeString___to_s_full(var15, 8l, 8l);
var14 = var16;
varonce13 = var14;
}
((struct instance_core__NativeArray*)var8)->values[2]=var14;
} else {
var8 = varonce7;
varonce7 = NULL;
}
{
var17 = ((val*(*)(val* self))(var_cond->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_cond); /* to_s on <var_cond:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var8)->values[1]=var17;
{
var18 = ((val*(*)(val* self))(var8->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var8); /* native_to_s on <var8:NativeArray[String]>*/
}
varonce7 = var8;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var18); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AWhileExpr#n_block (self) on <self:AWhileExpr> */
var21 = self->attrs[COLOR_nitc__parser_nodes__AWhileExpr___n_block].val; /* _n_block on <self:AWhileExpr> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___stmt(var_v, var19); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline scope#AWhileExpr#continue_mark (self) on <self:AWhileExpr> */
var24 = self->attrs[COLOR_nitc__scope__AWhileExpr___continue_mark].val; /* _continue_mark on <self:AWhileExpr> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___add_escape_label(var_v, var22); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_escape_label on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "}";
var28 = core__flat___NativeString___to_s_full(var27, 1l, 1l);
var26 = var28;
varonce25 = var26;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var26); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline scope#AWhileExpr#break_mark (self) on <self:AWhileExpr> */
var31 = self->attrs[COLOR_nitc__scope__AWhileExpr___break_mark].val; /* _break_mark on <self:AWhileExpr> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___add_escape_label(var_v, var29); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_escape_label on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#ALoopExpr#stmt for (self: ALoopExpr, AbstractCompilerVisitor) */
void nitc__abstract_compiler___ALoopExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : String */;
val* var3 /* : nullable AExpr */;
val* var5 /* : nullable AExpr */;
val* var6 /* : nullable EscapeMark */;
val* var8 /* : nullable EscapeMark */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : String */;
val* var13 /* : nullable EscapeMark */;
val* var15 /* : nullable EscapeMark */;
var_v = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "for(;;) {";
var2 = core__flat___NativeString___to_s_full(var1, 9l, 9l);
var = var2;
varonce = var;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#ALoopExpr#n_block (self) on <self:ALoopExpr> */
var5 = self->attrs[COLOR_nitc__parser_nodes__ALoopExpr___n_block].val; /* _n_block on <self:ALoopExpr> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___stmt(var_v, var3); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline scope#ALoopExpr#continue_mark (self) on <self:ALoopExpr> */
var8 = self->attrs[COLOR_nitc__scope__ALoopExpr___continue_mark].val; /* _continue_mark on <self:ALoopExpr> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___add_escape_label(var_v, var6); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_escape_label on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "}";
var12 = core__flat___NativeString___to_s_full(var11, 1l, 1l);
var10 = var12;
varonce9 = var10;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var10); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline scope#ALoopExpr#break_mark (self) on <self:ALoopExpr> */
var15 = self->attrs[COLOR_nitc__scope__ALoopExpr___break_mark].val; /* _break_mark on <self:ALoopExpr> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___add_escape_label(var_v, var13); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_escape_label on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AForExpr#stmt for (self: AForExpr, AbstractCompilerVisitor) */
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
char* var29 /* : NativeString */;
val* var30 /* : String */;
val* var31 /* : ANodes[AForGroup] */;
val* var33 /* : ANodes[AForGroup] */;
val* var_34 /* var : ANodes[AForGroup] */;
val* var35 /* : Iterator[ANode] */;
val* var_36 /* var : Iterator[AForGroup] */;
short int var37 /* : Bool */;
val* var39 /* : nullable Object */;
val* var_g40 /* var g: AForGroup */;
val* var41 /* : RuntimeVariable */;
val* var43 /* : RuntimeVariable */;
val* var_it44 /* var it: RuntimeVariable */;
val* var45 /* : nullable CallSite */;
val* var47 /* : nullable CallSite */;
val* var_isok_meth /* var isok_meth: nullable CallSite */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
val* var53 /* : Array[RuntimeVariable] */;
val* var_54 /* var : Array[RuntimeVariable] */;
val* var55 /* : nullable RuntimeVariable */;
val* var_ok /* var ok: nullable RuntimeVariable */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
val* var62 /* : NativeArray[String] */;
static val* varonce61;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
val* var66 /* : String */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
val* var70 /* : String */;
val* var71 /* : String */;
val* var72 /* : String */;
val* var73 /* : nullable Array[Variable] */;
val* var75 /* : nullable Array[Variable] */;
long var76 /* : Int */;
long var78 /* : Int */;
short int var79 /* : Bool */;
short int var81 /* : Bool */;
val* var82 /* : nullable CallSite */;
val* var84 /* : nullable CallSite */;
val* var_item_meth /* var item_meth: nullable CallSite */;
short int var85 /* : Bool */;
short int var86 /* : Bool */;
short int var88 /* : Bool */;
short int var89 /* : Bool */;
val* var90 /* : Array[RuntimeVariable] */;
val* var_91 /* var : Array[RuntimeVariable] */;
val* var92 /* : nullable RuntimeVariable */;
val* var_i /* var i: nullable RuntimeVariable */;
short int var93 /* : Bool */;
short int var94 /* : Bool */;
short int var96 /* : Bool */;
short int var97 /* : Bool */;
val* var98 /* : nullable Array[Variable] */;
val* var100 /* : nullable Array[Variable] */;
val* var101 /* : nullable Object */;
val* var102 /* : RuntimeVariable */;
val* var103 /* : nullable Array[Variable] */;
val* var105 /* : nullable Array[Variable] */;
long var106 /* : Int */;
long var108 /* : Int */;
short int var109 /* : Bool */;
short int var111 /* : Bool */;
val* var112 /* : nullable CallSite */;
val* var114 /* : nullable CallSite */;
val* var_key_meth /* var key_meth: nullable CallSite */;
short int var115 /* : Bool */;
short int var116 /* : Bool */;
short int var118 /* : Bool */;
short int var119 /* : Bool */;
val* var120 /* : Array[RuntimeVariable] */;
val* var_121 /* var : Array[RuntimeVariable] */;
val* var122 /* : nullable RuntimeVariable */;
val* var_i123 /* var i: nullable RuntimeVariable */;
short int var124 /* : Bool */;
short int var125 /* : Bool */;
short int var127 /* : Bool */;
short int var128 /* : Bool */;
val* var129 /* : nullable Array[Variable] */;
val* var131 /* : nullable Array[Variable] */;
val* var132 /* : nullable Object */;
val* var133 /* : RuntimeVariable */;
val* var134 /* : nullable CallSite */;
val* var136 /* : nullable CallSite */;
val* var_item_meth137 /* var item_meth: nullable CallSite */;
short int var138 /* : Bool */;
short int var139 /* : Bool */;
short int var141 /* : Bool */;
short int var142 /* : Bool */;
val* var143 /* : Array[RuntimeVariable] */;
val* var_144 /* var : Array[RuntimeVariable] */;
val* var145 /* : nullable RuntimeVariable */;
short int var146 /* : Bool */;
short int var147 /* : Bool */;
short int var149 /* : Bool */;
short int var150 /* : Bool */;
val* var151 /* : nullable Array[Variable] */;
val* var153 /* : nullable Array[Variable] */;
val* var154 /* : nullable Object */;
val* var155 /* : RuntimeVariable */;
val* var156 /* : nullable AExpr */;
val* var158 /* : nullable AExpr */;
val* var159 /* : nullable EscapeMark */;
val* var161 /* : nullable EscapeMark */;
val* var162 /* : ANodes[AForGroup] */;
val* var164 /* : ANodes[AForGroup] */;
val* var_165 /* var : ANodes[AForGroup] */;
val* var166 /* : Iterator[ANode] */;
val* var_167 /* var : Iterator[AForGroup] */;
short int var168 /* : Bool */;
val* var170 /* : nullable Object */;
val* var_g171 /* var g: AForGroup */;
val* var172 /* : nullable CallSite */;
val* var174 /* : nullable CallSite */;
val* var_next_meth /* var next_meth: nullable CallSite */;
short int var175 /* : Bool */;
short int var176 /* : Bool */;
short int var178 /* : Bool */;
short int var179 /* : Bool */;
val* var180 /* : Array[RuntimeVariable] */;
val* var_181 /* var : Array[RuntimeVariable] */;
val* var182 /* : RuntimeVariable */;
val* var184 /* : RuntimeVariable */;
val* var185 /* : nullable RuntimeVariable */;
static val* varonce186;
val* var187 /* : String */;
char* var188 /* : NativeString */;
val* var189 /* : String */;
val* var190 /* : nullable EscapeMark */;
val* var192 /* : nullable EscapeMark */;
val* var193 /* : ANodes[AForGroup] */;
val* var195 /* : ANodes[AForGroup] */;
val* var_196 /* var : ANodes[AForGroup] */;
val* var197 /* : Iterator[ANode] */;
val* var_198 /* var : Iterator[AForGroup] */;
short int var199 /* : Bool */;
val* var201 /* : nullable Object */;
val* var_g202 /* var g: AForGroup */;
val* var203 /* : nullable CallSite */;
val* var205 /* : nullable CallSite */;
val* var_method_finish /* var method_finish: nullable CallSite */;
short int var206 /* : Bool */;
short int var207 /* : Bool */;
short int var209 /* : Bool */;
short int var210 /* : Bool */;
val* var211 /* : Array[RuntimeVariable] */;
val* var_212 /* var : Array[RuntimeVariable] */;
val* var213 /* : RuntimeVariable */;
val* var215 /* : RuntimeVariable */;
val* var216 /* : nullable RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#AForExpr#n_groups (self) on <self:AForExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_groups].val; /* _n_groups on <self:AForExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_groups");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1920);
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
{ /* Inline parser_nodes#AForGroup#n_expr (var_g) on <var_g:AForGroup> */
var9 = var_g->attrs[COLOR_nitc__parser_nodes__AForGroup___n_expr].val; /* _n_expr on <var_g:AForGroup> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1943);
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
{ /* Inline typing#AForGroup#method_iterator (var_g) on <var_g:AForGroup> */
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
{ /* Inline kernel#Object#!= (var_it_meth,((val*)NULL)) on <var_it_meth:nullable CallSite> */
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
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3374);
fatal_exit(1);
}
var19 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var19, 1l); /* Direct call array#Array#with_capacity on <var19:Array[RuntimeVariable]>*/
}
var_20 = var19;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_20, var_cl); /* Direct call array#AbstractArray#push on <var_20:Array[RuntimeVariable]>*/
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
{ /* Inline kernel#Object#!= (var_it,((val*)NULL)) on <var_it:nullable RuntimeVariable> */
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
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3376);
fatal_exit(1);
}
{
{ /* Inline abstract_compiler#AForGroup#it= (var_g,var_it) on <var_g:AForGroup> */
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
var30 = core__flat___NativeString___to_s_full(var29, 9l, 9l);
var28 = var30;
varonce = var28;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var28); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AForExpr#n_groups (self) on <self:AForExpr> */
var33 = self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_groups].val; /* _n_groups on <self:AForExpr> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_groups");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1920);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
var_34 = var31;
{
var35 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_34);
}
var_36 = var35;
for(;;) {
{
var37 = ((short int(*)(val* self))((((long)var_36&3)?class_info[((long)var_36&3)]:var_36->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_36); /* is_ok on <var_36:Iterator[AForGroup]>*/
}
if (var37){
} else {
goto BREAK_label38;
}
{
var39 = ((val*(*)(val* self))((((long)var_36&3)?class_info[((long)var_36&3)]:var_36->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_36); /* item on <var_36:Iterator[AForGroup]>*/
}
var_g40 = var39;
{
{ /* Inline abstract_compiler#AForGroup#it (var_g40) on <var_g40:AForGroup> */
var43 = var_g40->attrs[COLOR_nitc__abstract_compiler__AForGroup___it].val; /* _it on <var_g40:AForGroup> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _it");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3429);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
var_it44 = var41;
{
{ /* Inline typing#AForGroup#method_is_ok (var_g40) on <var_g40:AForGroup> */
var47 = var_g40->attrs[COLOR_nitc__typing__AForGroup___method_is_ok].val; /* _method_is_ok on <var_g40:AForGroup> */
var45 = var47;
RET_LABEL46:(void)0;
}
}
var_isok_meth = var45;
if (var_isok_meth == NULL) {
var48 = 0; /* is null */
} else {
var48 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_isok_meth,((val*)NULL)) on <var_isok_meth:nullable CallSite> */
var_other = ((val*)NULL);
{
var51 = ((short int(*)(val* self, val* p0))(var_isok_meth->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_isok_meth, var_other); /* == on <var_isok_meth:nullable CallSite(CallSite)>*/
}
var52 = !var51;
var49 = var52;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
var48 = var49;
}
if (unlikely(!var48)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3383);
fatal_exit(1);
}
var53 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var53, 1l); /* Direct call array#Array#with_capacity on <var53:Array[RuntimeVariable]>*/
}
var_54 = var53;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_54, var_it44); /* Direct call array#AbstractArray#push on <var_54:Array[RuntimeVariable]>*/
}
{
var55 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_isok_meth, var_54); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var_ok = var55;
if (var_ok == NULL) {
var56 = 0; /* is null */
} else {
var56 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ok,((val*)NULL)) on <var_ok:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var59 = ((short int(*)(val* self, val* p0))(var_ok->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ok, var_other); /* == on <var_ok:nullable RuntimeVariable(RuntimeVariable)>*/
}
var60 = !var59;
var57 = var60;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
var56 = var57;
}
if (unlikely(!var56)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3385);
fatal_exit(1);
}
if (unlikely(varonce61==NULL)) {
var62 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "if(!";
var66 = core__flat___NativeString___to_s_full(var65, 4l, 4l);
var64 = var66;
varonce63 = var64;
}
((struct instance_core__NativeArray*)var62)->values[0]=var64;
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = ") break;";
var70 = core__flat___NativeString___to_s_full(var69, 8l, 8l);
var68 = var70;
varonce67 = var68;
}
((struct instance_core__NativeArray*)var62)->values[2]=var68;
} else {
var62 = varonce61;
varonce61 = NULL;
}
{
var71 = ((val*(*)(val* self))(var_ok->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_ok); /* to_s on <var_ok:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var62)->values[1]=var71;
{
var72 = ((val*(*)(val* self))(var62->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var62); /* native_to_s on <var62:NativeArray[String]>*/
}
varonce61 = var62;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var72); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline scope#AForGroup#variables (var_g40) on <var_g40:AForGroup> */
var75 = var_g40->attrs[COLOR_nitc__scope__AForGroup___variables].val; /* _variables on <var_g40:AForGroup> */
var73 = var75;
RET_LABEL74:(void)0;
}
}
if (var73 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3387);
fatal_exit(1);
} else {
{ /* Inline array#AbstractArrayRead#length (var73) on <var73:nullable Array[Variable]> */
if (unlikely(var73 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 26);
fatal_exit(1);
}
var78 = var73->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var73:nullable Array[Variable]> */
var76 = var78;
RET_LABEL77:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var76,1l) on <var76:Int> */
var81 = var76 == 1l;
var79 = var81;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
if (var79){
{
{ /* Inline typing#AForGroup#method_item (var_g40) on <var_g40:AForGroup> */
var84 = var_g40->attrs[COLOR_nitc__typing__AForGroup___method_item].val; /* _method_item on <var_g40:AForGroup> */
var82 = var84;
RET_LABEL83:(void)0;
}
}
var_item_meth = var82;
if (var_item_meth == NULL) {
var85 = 0; /* is null */
} else {
var85 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_item_meth,((val*)NULL)) on <var_item_meth:nullable CallSite> */
var_other = ((val*)NULL);
{
var88 = ((short int(*)(val* self, val* p0))(var_item_meth->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_item_meth, var_other); /* == on <var_item_meth:nullable CallSite(CallSite)>*/
}
var89 = !var88;
var86 = var89;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
var85 = var86;
}
if (unlikely(!var85)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3389);
fatal_exit(1);
}
var90 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var90, 1l); /* Direct call array#Array#with_capacity on <var90:Array[RuntimeVariable]>*/
}
var_91 = var90;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_91, var_it44); /* Direct call array#AbstractArray#push on <var_91:Array[RuntimeVariable]>*/
}
{
var92 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_item_meth, var_91); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var_i = var92;
if (var_i == NULL) {
var93 = 0; /* is null */
} else {
var93 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_i,((val*)NULL)) on <var_i:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var96 = ((short int(*)(val* self, val* p0))(var_i->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_i, var_other); /* == on <var_i:nullable RuntimeVariable(RuntimeVariable)>*/
}
var97 = !var96;
var94 = var97;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
var93 = var94;
}
if (unlikely(!var93)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3391);
fatal_exit(1);
}
{
{ /* Inline scope#AForGroup#variables (var_g40) on <var_g40:AForGroup> */
var100 = var_g40->attrs[COLOR_nitc__scope__AForGroup___variables].val; /* _variables on <var_g40:AForGroup> */
var98 = var100;
RET_LABEL99:(void)0;
}
}
if (var98 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3392);
fatal_exit(1);
} else {
var101 = core___core__SequenceRead___Collection__first(var98);
}
{
var102 = nitc___nitc__AbstractCompilerVisitor___variable(var_v, var101);
}
{
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var102, var_i); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
} else {
{
{ /* Inline scope#AForGroup#variables (var_g40) on <var_g40:AForGroup> */
var105 = var_g40->attrs[COLOR_nitc__scope__AForGroup___variables].val; /* _variables on <var_g40:AForGroup> */
var103 = var105;
RET_LABEL104:(void)0;
}
}
if (var103 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3393);
fatal_exit(1);
} else {
{ /* Inline array#AbstractArrayRead#length (var103) on <var103:nullable Array[Variable]> */
if (unlikely(var103 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 26);
fatal_exit(1);
}
var108 = var103->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var103:nullable Array[Variable]> */
var106 = var108;
RET_LABEL107:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var106,2l) on <var106:Int> */
var111 = var106 == 2l;
var109 = var111;
goto RET_LABEL110;
RET_LABEL110:(void)0;
}
}
if (var109){
{
{ /* Inline typing#AForGroup#method_key (var_g40) on <var_g40:AForGroup> */
var114 = var_g40->attrs[COLOR_nitc__typing__AForGroup___method_key].val; /* _method_key on <var_g40:AForGroup> */
var112 = var114;
RET_LABEL113:(void)0;
}
}
var_key_meth = var112;
if (var_key_meth == NULL) {
var115 = 0; /* is null */
} else {
var115 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_key_meth,((val*)NULL)) on <var_key_meth:nullable CallSite> */
var_other = ((val*)NULL);
{
var118 = ((short int(*)(val* self, val* p0))(var_key_meth->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_key_meth, var_other); /* == on <var_key_meth:nullable CallSite(CallSite)>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3395);
fatal_exit(1);
}
var120 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var120, 1l); /* Direct call array#Array#with_capacity on <var120:Array[RuntimeVariable]>*/
}
var_121 = var120;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_121, var_it44); /* Direct call array#AbstractArray#push on <var_121:Array[RuntimeVariable]>*/
}
{
var122 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_key_meth, var_121); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var_i123 = var122;
if (var_i123 == NULL) {
var124 = 0; /* is null */
} else {
var124 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_i123,((val*)NULL)) on <var_i123:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var127 = ((short int(*)(val* self, val* p0))(var_i123->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_i123, var_other); /* == on <var_i123:nullable RuntimeVariable(RuntimeVariable)>*/
}
var128 = !var127;
var125 = var128;
goto RET_LABEL126;
RET_LABEL126:(void)0;
}
var124 = var125;
}
if (unlikely(!var124)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3397);
fatal_exit(1);
}
{
{ /* Inline scope#AForGroup#variables (var_g40) on <var_g40:AForGroup> */
var131 = var_g40->attrs[COLOR_nitc__scope__AForGroup___variables].val; /* _variables on <var_g40:AForGroup> */
var129 = var131;
RET_LABEL130:(void)0;
}
}
if (var129 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3398);
fatal_exit(1);
} else {
var132 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var129, 0l);
}
{
var133 = nitc___nitc__AbstractCompilerVisitor___variable(var_v, var132);
}
{
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var133, var_i123); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline typing#AForGroup#method_item (var_g40) on <var_g40:AForGroup> */
var136 = var_g40->attrs[COLOR_nitc__typing__AForGroup___method_item].val; /* _method_item on <var_g40:AForGroup> */
var134 = var136;
RET_LABEL135:(void)0;
}
}
var_item_meth137 = var134;
if (var_item_meth137 == NULL) {
var138 = 0; /* is null */
} else {
var138 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_item_meth137,((val*)NULL)) on <var_item_meth137:nullable CallSite> */
var_other = ((val*)NULL);
{
var141 = ((short int(*)(val* self, val* p0))(var_item_meth137->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_item_meth137, var_other); /* == on <var_item_meth137:nullable CallSite(CallSite)>*/
}
var142 = !var141;
var139 = var142;
goto RET_LABEL140;
RET_LABEL140:(void)0;
}
var138 = var139;
}
if (unlikely(!var138)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3400);
fatal_exit(1);
}
var143 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var143, 1l); /* Direct call array#Array#with_capacity on <var143:Array[RuntimeVariable]>*/
}
var_144 = var143;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_144, var_it44); /* Direct call array#AbstractArray#push on <var_144:Array[RuntimeVariable]>*/
}
{
var145 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_item_meth137, var_144); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var_i123 = var145;
if (var_i123 == NULL) {
var146 = 0; /* is null */
} else {
var146 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_i123,((val*)NULL)) on <var_i123:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var149 = ((short int(*)(val* self, val* p0))(var_i123->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_i123, var_other); /* == on <var_i123:nullable RuntimeVariable(RuntimeVariable)>*/
}
var150 = !var149;
var147 = var150;
goto RET_LABEL148;
RET_LABEL148:(void)0;
}
var146 = var147;
}
if (unlikely(!var146)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3402);
fatal_exit(1);
}
{
{ /* Inline scope#AForGroup#variables (var_g40) on <var_g40:AForGroup> */
var153 = var_g40->attrs[COLOR_nitc__scope__AForGroup___variables].val; /* _variables on <var_g40:AForGroup> */
var151 = var153;
RET_LABEL152:(void)0;
}
}
if (var151 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3403);
fatal_exit(1);
} else {
var154 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var151, 1l);
}
{
var155 = nitc___nitc__AbstractCompilerVisitor___variable(var_v, var154);
}
{
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var155, var_i123); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3405);
fatal_exit(1);
}
}
{
((void(*)(val* self))((((long)var_36&3)?class_info[((long)var_36&3)]:var_36->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_36); /* next on <var_36:Iterator[AForGroup]>*/
}
}
BREAK_label38: (void)0;
{
((void(*)(val* self))((((long)var_36&3)?class_info[((long)var_36&3)]:var_36->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_36); /* finish on <var_36:Iterator[AForGroup]>*/
}
{
{ /* Inline parser_nodes#AForExpr#n_block (self) on <self:AForExpr> */
var158 = self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_block].val; /* _n_block on <self:AForExpr> */
var156 = var158;
RET_LABEL157:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___stmt(var_v, var156); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline scope#AForExpr#continue_mark (self) on <self:AForExpr> */
var161 = self->attrs[COLOR_nitc__scope__AForExpr___continue_mark].val; /* _continue_mark on <self:AForExpr> */
var159 = var161;
RET_LABEL160:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___add_escape_label(var_v, var159); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_escape_label on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AForExpr#n_groups (self) on <self:AForExpr> */
var164 = self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_groups].val; /* _n_groups on <self:AForExpr> */
if (unlikely(var164 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_groups");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1920);
fatal_exit(1);
}
var162 = var164;
RET_LABEL163:(void)0;
}
}
var_165 = var162;
{
var166 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_165);
}
var_167 = var166;
for(;;) {
{
var168 = ((short int(*)(val* self))((((long)var_167&3)?class_info[((long)var_167&3)]:var_167->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_167); /* is_ok on <var_167:Iterator[AForGroup]>*/
}
if (var168){
} else {
goto BREAK_label169;
}
{
var170 = ((val*(*)(val* self))((((long)var_167&3)?class_info[((long)var_167&3)]:var_167->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_167); /* item on <var_167:Iterator[AForGroup]>*/
}
var_g171 = var170;
{
{ /* Inline typing#AForGroup#method_next (var_g171) on <var_g171:AForGroup> */
var174 = var_g171->attrs[COLOR_nitc__typing__AForGroup___method_next].val; /* _method_next on <var_g171:AForGroup> */
var172 = var174;
RET_LABEL173:(void)0;
}
}
var_next_meth = var172;
if (var_next_meth == NULL) {
var175 = 0; /* is null */
} else {
var175 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_next_meth,((val*)NULL)) on <var_next_meth:nullable CallSite> */
var_other = ((val*)NULL);
{
var178 = ((short int(*)(val* self, val* p0))(var_next_meth->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_next_meth, var_other); /* == on <var_next_meth:nullable CallSite(CallSite)>*/
}
var179 = !var178;
var176 = var179;
goto RET_LABEL177;
RET_LABEL177:(void)0;
}
var175 = var176;
}
if (unlikely(!var175)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3412);
fatal_exit(1);
}
var180 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var180, 1l); /* Direct call array#Array#with_capacity on <var180:Array[RuntimeVariable]>*/
}
var_181 = var180;
{
{ /* Inline abstract_compiler#AForGroup#it (var_g171) on <var_g171:AForGroup> */
var184 = var_g171->attrs[COLOR_nitc__abstract_compiler__AForGroup___it].val; /* _it on <var_g171:AForGroup> */
if (unlikely(var184 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _it");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3429);
fatal_exit(1);
}
var182 = var184;
RET_LABEL183:(void)0;
}
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_181, var182); /* Direct call array#AbstractArray#push on <var_181:Array[RuntimeVariable]>*/
}
{
var185 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_next_meth, var_181); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
{
((void(*)(val* self))((((long)var_167&3)?class_info[((long)var_167&3)]:var_167->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_167); /* next on <var_167:Iterator[AForGroup]>*/
}
}
BREAK_label169: (void)0;
{
((void(*)(val* self))((((long)var_167&3)?class_info[((long)var_167&3)]:var_167->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_167); /* finish on <var_167:Iterator[AForGroup]>*/
}
if (likely(varonce186!=NULL)) {
var187 = varonce186;
} else {
var188 = "}";
var189 = core__flat___NativeString___to_s_full(var188, 1l, 1l);
var187 = var189;
varonce186 = var187;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var187); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline scope#AForExpr#break_mark (self) on <self:AForExpr> */
var192 = self->attrs[COLOR_nitc__scope__AForExpr___break_mark].val; /* _break_mark on <self:AForExpr> */
var190 = var192;
RET_LABEL191:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___add_escape_label(var_v, var190); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_escape_label on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AForExpr#n_groups (self) on <self:AForExpr> */
var195 = self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_groups].val; /* _n_groups on <self:AForExpr> */
if (unlikely(var195 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_groups");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1920);
fatal_exit(1);
}
var193 = var195;
RET_LABEL194:(void)0;
}
}
var_196 = var193;
{
var197 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_196);
}
var_198 = var197;
for(;;) {
{
var199 = ((short int(*)(val* self))((((long)var_198&3)?class_info[((long)var_198&3)]:var_198->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_198); /* is_ok on <var_198:Iterator[AForGroup]>*/
}
if (var199){
} else {
goto BREAK_label200;
}
{
var201 = ((val*(*)(val* self))((((long)var_198&3)?class_info[((long)var_198&3)]:var_198->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_198); /* item on <var_198:Iterator[AForGroup]>*/
}
var_g202 = var201;
{
{ /* Inline typing#AForGroup#method_finish (var_g202) on <var_g202:AForGroup> */
var205 = var_g202->attrs[COLOR_nitc__typing__AForGroup___method_finish].val; /* _method_finish on <var_g202:AForGroup> */
var203 = var205;
RET_LABEL204:(void)0;
}
}
var_method_finish = var203;
if (var_method_finish == NULL) {
var206 = 0; /* is null */
} else {
var206 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_method_finish,((val*)NULL)) on <var_method_finish:nullable CallSite> */
var_other = ((val*)NULL);
{
var209 = ((short int(*)(val* self, val* p0))(var_method_finish->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_method_finish, var_other); /* == on <var_method_finish:nullable CallSite(CallSite)>*/
}
var210 = !var209;
var207 = var210;
goto RET_LABEL208;
RET_LABEL208:(void)0;
}
var206 = var207;
}
if (var206){
var211 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var211, 1l); /* Direct call array#Array#with_capacity on <var211:Array[RuntimeVariable]>*/
}
var_212 = var211;
{
{ /* Inline abstract_compiler#AForGroup#it (var_g202) on <var_g202:AForGroup> */
var215 = var_g202->attrs[COLOR_nitc__abstract_compiler__AForGroup___it].val; /* _it on <var_g202:AForGroup> */
if (unlikely(var215 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _it");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3429);
fatal_exit(1);
}
var213 = var215;
RET_LABEL214:(void)0;
}
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_212, var213); /* Direct call array#AbstractArray#push on <var_212:Array[RuntimeVariable]>*/
}
{
var216 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_method_finish, var_212); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_198&3)?class_info[((long)var_198&3)]:var_198->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_198); /* next on <var_198:Iterator[AForGroup]>*/
}
}
BREAK_label200: (void)0;
{
((void(*)(val* self))((((long)var_198&3)?class_info[((long)var_198&3)]:var_198->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_198); /* finish on <var_198:Iterator[AForGroup]>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AForGroup#it for (self: AForGroup): RuntimeVariable */
val* nitc__abstract_compiler___AForGroup___it(val* self) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AForGroup___it].val; /* _it on <self:AForGroup> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _it");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3429);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AForGroup#it= for (self: AForGroup, RuntimeVariable) */
void nitc__abstract_compiler___AForGroup___it_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__AForGroup___it].val = p0; /* _it on <self:AForGroup> */
RET_LABEL:;
}
/* method abstract_compiler#AAssertExpr#stmt for (self: AAssertExpr, AbstractCompilerVisitor) */
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
char* var23 /* : NativeString */;
val* var24 /* : String */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
val* var28 /* : String */;
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
val* var47 /* : String */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
val* var51 /* : String */;
val* var52 /* : String */;
val* var53 /* : String */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
val* var57 /* : String */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
val* var61 /* : String */;
var_v = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var2 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1133);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var) on <var:AbstractCompiler> */
var5 = var->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var:AbstractCompiler> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var3) on <var3:ModelBuilder> */
var8 = var3->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var3:ModelBuilder> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_assert (var6) on <var6:ToolContext> */
var11 = var6->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_assert].val; /* _opt_no_check_assert on <var6:ToolContext> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_assert");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 52);
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
var18 = self->attrs[COLOR_nitc__parser_nodes__AAssertExpr___n_expr].val; /* _n_expr on <self:AAssertExpr> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1975);
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
var20 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = "if (unlikely(!";
var24 = core__flat___NativeString___to_s_full(var23, 14l, 14l);
var22 = var24;
varonce21 = var22;
}
((struct instance_core__NativeArray*)var20)->values[0]=var22;
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = ")) {";
var28 = core__flat___NativeString___to_s_full(var27, 4l, 4l);
var26 = var28;
varonce25 = var26;
}
((struct instance_core__NativeArray*)var20)->values[2]=var26;
} else {
var20 = varonce;
varonce = NULL;
}
{
var29 = ((val*(*)(val* self))(var_cond->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_cond); /* to_s on <var_cond:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var20)->values[1]=var29;
{
var30 = ((val*(*)(val* self))(var20->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var20); /* native_to_s on <var20:NativeArray[String]>*/
}
varonce = var20;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var30); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AAssertExpr#n_else (self) on <self:AAssertExpr> */
var33 = self->attrs[COLOR_nitc__parser_nodes__AAssertExpr___n_else].val; /* _n_else on <self:AAssertExpr> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___stmt(var_v, var31); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AAssertExpr#n_id (self) on <self:AAssertExpr> */
var36 = self->attrs[COLOR_nitc__parser_nodes__AAssertExpr___n_id].val; /* _n_id on <self:AAssertExpr> */
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
var40 = ((short int(*)(val* self, val* p0))(var_nid->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nid, var_other); /* == on <var_nid:nullable TId(TId)>*/
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
var43 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = "Assert \'";
var47 = core__flat___NativeString___to_s_full(var46, 8l, 8l);
var45 = var47;
varonce44 = var45;
}
((struct instance_core__NativeArray*)var43)->values[0]=var45;
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = "\' failed";
var51 = core__flat___NativeString___to_s_full(var50, 8l, 8l);
var49 = var51;
varonce48 = var49;
}
((struct instance_core__NativeArray*)var43)->values[2]=var49;
} else {
var43 = varonce42;
varonce42 = NULL;
}
{
var52 = nitc__lexer_work___Token___text(var_nid);
}
((struct instance_core__NativeArray*)var43)->values[1]=var52;
{
var53 = ((val*(*)(val* self))(var43->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var43); /* native_to_s on <var43:NativeArray[String]>*/
}
varonce42 = var43;
{
nitc___nitc__AbstractCompilerVisitor___add_abort(var_v, var53); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:AbstractCompilerVisitor>*/
}
} else {
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = "Assert failed";
var57 = core__flat___NativeString___to_s_full(var56, 13l, 13l);
var55 = var57;
varonce54 = var55;
}
{
nitc___nitc__AbstractCompilerVisitor___add_abort(var_v, var55); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:AbstractCompilerVisitor>*/
}
}
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "}";
var61 = core__flat___NativeString___to_s_full(var60, 1l, 1l);
var59 = var61;
varonce58 = var59;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var59); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AOrExpr#expr for (self: AOrExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
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
char* var12 /* : NativeString */;
val* var13 /* : String */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : String */;
val* var18 /* : String */;
val* var19 /* : String */;
val* var21 /* : NativeArray[String] */;
static val* varonce20;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
val* var25 /* : String */;
val* var26 /* : String */;
val* var27 /* : String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
val* var31 /* : String */;
val* var32 /* : AExpr */;
val* var34 /* : AExpr */;
val* var35 /* : RuntimeVariable */;
val* var_i2 /* var i2: RuntimeVariable */;
val* var37 /* : NativeArray[String] */;
static val* varonce36;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : String */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : String */;
val* var46 /* : String */;
val* var47 /* : String */;
val* var48 /* : String */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
val* var52 /* : String */;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AOrExpr> */
var3 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:AOrExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3454);
fatal_exit(1);
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___new_var(var_v, var1);
}
var_res = var4;
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr (self) on <self:AOrExpr> */
var7 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AOrExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2050);
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
var9 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "if (";
var13 = core__flat___NativeString___to_s_full(var12, 4l, 4l);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var9)->values[0]=var11;
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = ") {";
var17 = core__flat___NativeString___to_s_full(var16, 3l, 3l);
var15 = var17;
varonce14 = var15;
}
((struct instance_core__NativeArray*)var9)->values[2]=var15;
} else {
var9 = varonce;
varonce = NULL;
}
{
var18 = ((val*(*)(val* self))(var_i1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_i1); /* to_s on <var_i1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var9)->values[1]=var18;
{
var19 = ((val*(*)(val* self))(var9->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var9); /* native_to_s on <var9:NativeArray[String]>*/
}
varonce = var9;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var19); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce20==NULL)) {
var21 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = " = 1;";
var25 = core__flat___NativeString___to_s_full(var24, 5l, 5l);
var23 = var25;
varonce22 = var23;
}
((struct instance_core__NativeArray*)var21)->values[1]=var23;
} else {
var21 = varonce20;
varonce20 = NULL;
}
{
var26 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var21)->values[0]=var26;
{
var27 = ((val*(*)(val* self))(var21->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var21); /* native_to_s on <var21:NativeArray[String]>*/
}
varonce20 = var21;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var27); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "} else {";
var31 = core__flat___NativeString___to_s_full(var30, 8l, 8l);
var29 = var31;
varonce28 = var29;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var29); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr2 (self) on <self:AOrExpr> */
var34 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AOrExpr> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2056);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
var35 = nitc___nitc__AbstractCompilerVisitor___expr_bool(var_v, var32);
}
var_i2 = var35;
if (unlikely(varonce36==NULL)) {
var37 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = " = ";
var41 = core__flat___NativeString___to_s_full(var40, 3l, 3l);
var39 = var41;
varonce38 = var39;
}
((struct instance_core__NativeArray*)var37)->values[1]=var39;
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = ";";
var45 = core__flat___NativeString___to_s_full(var44, 1l, 1l);
var43 = var45;
varonce42 = var43;
}
((struct instance_core__NativeArray*)var37)->values[3]=var43;
} else {
var37 = varonce36;
varonce36 = NULL;
}
{
var46 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var37)->values[0]=var46;
{
var47 = ((val*(*)(val* self))(var_i2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_i2); /* to_s on <var_i2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var37)->values[2]=var47;
{
var48 = ((val*(*)(val* self))(var37->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var37); /* native_to_s on <var37:NativeArray[String]>*/
}
varonce36 = var37;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var48); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "}";
var52 = core__flat___NativeString___to_s_full(var51, 1l, 1l);
var50 = var52;
varonce49 = var50;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var50); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AImpliesExpr#expr for (self: AImpliesExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
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
char* var12 /* : NativeString */;
val* var13 /* : String */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : String */;
val* var18 /* : String */;
val* var19 /* : String */;
val* var21 /* : NativeArray[String] */;
static val* varonce20;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
val* var25 /* : String */;
val* var26 /* : String */;
val* var27 /* : String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
val* var31 /* : String */;
val* var32 /* : AExpr */;
val* var34 /* : AExpr */;
val* var35 /* : RuntimeVariable */;
val* var_i2 /* var i2: RuntimeVariable */;
val* var37 /* : NativeArray[String] */;
static val* varonce36;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : String */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : String */;
val* var46 /* : String */;
val* var47 /* : String */;
val* var48 /* : String */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
val* var52 /* : String */;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AImpliesExpr> */
var3 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:AImpliesExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3469);
fatal_exit(1);
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___new_var(var_v, var1);
}
var_res = var4;
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr (self) on <self:AImpliesExpr> */
var7 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AImpliesExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2050);
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
var9 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "if (!";
var13 = core__flat___NativeString___to_s_full(var12, 5l, 5l);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var9)->values[0]=var11;
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = ") {";
var17 = core__flat___NativeString___to_s_full(var16, 3l, 3l);
var15 = var17;
varonce14 = var15;
}
((struct instance_core__NativeArray*)var9)->values[2]=var15;
} else {
var9 = varonce;
varonce = NULL;
}
{
var18 = ((val*(*)(val* self))(var_i1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_i1); /* to_s on <var_i1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var9)->values[1]=var18;
{
var19 = ((val*(*)(val* self))(var9->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var9); /* native_to_s on <var9:NativeArray[String]>*/
}
varonce = var9;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var19); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce20==NULL)) {
var21 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = " = 1;";
var25 = core__flat___NativeString___to_s_full(var24, 5l, 5l);
var23 = var25;
varonce22 = var23;
}
((struct instance_core__NativeArray*)var21)->values[1]=var23;
} else {
var21 = varonce20;
varonce20 = NULL;
}
{
var26 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var21)->values[0]=var26;
{
var27 = ((val*(*)(val* self))(var21->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var21); /* native_to_s on <var21:NativeArray[String]>*/
}
varonce20 = var21;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var27); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "} else {";
var31 = core__flat___NativeString___to_s_full(var30, 8l, 8l);
var29 = var31;
varonce28 = var29;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var29); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr2 (self) on <self:AImpliesExpr> */
var34 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AImpliesExpr> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2056);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
var35 = nitc___nitc__AbstractCompilerVisitor___expr_bool(var_v, var32);
}
var_i2 = var35;
if (unlikely(varonce36==NULL)) {
var37 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = " = ";
var41 = core__flat___NativeString___to_s_full(var40, 3l, 3l);
var39 = var41;
varonce38 = var39;
}
((struct instance_core__NativeArray*)var37)->values[1]=var39;
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = ";";
var45 = core__flat___NativeString___to_s_full(var44, 1l, 1l);
var43 = var45;
varonce42 = var43;
}
((struct instance_core__NativeArray*)var37)->values[3]=var43;
} else {
var37 = varonce36;
varonce36 = NULL;
}
{
var46 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var37)->values[0]=var46;
{
var47 = ((val*(*)(val* self))(var_i2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_i2); /* to_s on <var_i2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var37)->values[2]=var47;
{
var48 = ((val*(*)(val* self))(var37->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var37); /* native_to_s on <var37:NativeArray[String]>*/
}
varonce36 = var37;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var48); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "}";
var52 = core__flat___NativeString___to_s_full(var51, 1l, 1l);
var50 = var52;
varonce49 = var50;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var50); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAndExpr#expr for (self: AAndExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
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
char* var12 /* : NativeString */;
val* var13 /* : String */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : String */;
val* var18 /* : String */;
val* var19 /* : String */;
val* var21 /* : NativeArray[String] */;
static val* varonce20;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
val* var25 /* : String */;
val* var26 /* : String */;
val* var27 /* : String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
val* var31 /* : String */;
val* var32 /* : AExpr */;
val* var34 /* : AExpr */;
val* var35 /* : RuntimeVariable */;
val* var_i2 /* var i2: RuntimeVariable */;
val* var37 /* : NativeArray[String] */;
static val* varonce36;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : String */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : String */;
val* var46 /* : String */;
val* var47 /* : String */;
val* var48 /* : String */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
val* var52 /* : String */;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AAndExpr> */
var3 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:AAndExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3484);
fatal_exit(1);
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___new_var(var_v, var1);
}
var_res = var4;
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr (self) on <self:AAndExpr> */
var7 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AAndExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2050);
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
var9 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "if (!";
var13 = core__flat___NativeString___to_s_full(var12, 5l, 5l);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var9)->values[0]=var11;
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = ") {";
var17 = core__flat___NativeString___to_s_full(var16, 3l, 3l);
var15 = var17;
varonce14 = var15;
}
((struct instance_core__NativeArray*)var9)->values[2]=var15;
} else {
var9 = varonce;
varonce = NULL;
}
{
var18 = ((val*(*)(val* self))(var_i1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_i1); /* to_s on <var_i1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var9)->values[1]=var18;
{
var19 = ((val*(*)(val* self))(var9->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var9); /* native_to_s on <var9:NativeArray[String]>*/
}
varonce = var9;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var19); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce20==NULL)) {
var21 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = " = 0;";
var25 = core__flat___NativeString___to_s_full(var24, 5l, 5l);
var23 = var25;
varonce22 = var23;
}
((struct instance_core__NativeArray*)var21)->values[1]=var23;
} else {
var21 = varonce20;
varonce20 = NULL;
}
{
var26 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var21)->values[0]=var26;
{
var27 = ((val*(*)(val* self))(var21->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var21); /* native_to_s on <var21:NativeArray[String]>*/
}
varonce20 = var21;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var27); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "} else {";
var31 = core__flat___NativeString___to_s_full(var30, 8l, 8l);
var29 = var31;
varonce28 = var29;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var29); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr2 (self) on <self:AAndExpr> */
var34 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AAndExpr> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2056);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
var35 = nitc___nitc__AbstractCompilerVisitor___expr_bool(var_v, var32);
}
var_i2 = var35;
if (unlikely(varonce36==NULL)) {
var37 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = " = ";
var41 = core__flat___NativeString___to_s_full(var40, 3l, 3l);
var39 = var41;
varonce38 = var39;
}
((struct instance_core__NativeArray*)var37)->values[1]=var39;
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = ";";
var45 = core__flat___NativeString___to_s_full(var44, 1l, 1l);
var43 = var45;
varonce42 = var43;
}
((struct instance_core__NativeArray*)var37)->values[3]=var43;
} else {
var37 = varonce36;
varonce36 = NULL;
}
{
var46 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var37)->values[0]=var46;
{
var47 = ((val*(*)(val* self))(var_i2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_i2); /* to_s on <var_i2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var37)->values[2]=var47;
{
var48 = ((val*(*)(val* self))(var37->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var37); /* native_to_s on <var37:NativeArray[String]>*/
}
varonce36 = var37;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var48); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "}";
var52 = core__flat___NativeString___to_s_full(var51, 1l, 1l);
var50 = var52;
varonce49 = var50;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var50); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ANotExpr#expr for (self: ANotExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
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
char* var8 /* : NativeString */;
val* var9 /* : String */;
val* var10 /* : String */;
val* var11 /* : String */;
val* var12 /* : nullable MType */;
val* var14 /* : nullable MType */;
val* var15 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#ANotExpr#n_expr (self) on <self:ANotExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ANotExpr___n_expr].val; /* _n_expr on <self:ANotExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2090);
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
var5 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "!";
var9 = core__flat___NativeString___to_s_full(var8, 1l, 1l);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var5)->values[0]=var7;
} else {
var5 = varonce;
varonce = NULL;
}
{
var10 = ((val*(*)(val* self))(var_cond->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_cond); /* to_s on <var_cond:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var5)->values[1]=var10;
{
var11 = ((val*(*)(val* self))(var5->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
{
{ /* Inline typing#AExpr#mtype (self) on <self:ANotExpr> */
var14 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:ANotExpr> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3500);
fatal_exit(1);
}
{
var15 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var11, var12);
}
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AOrElseExpr#expr for (self: AOrElseExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
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
val* var9 /* : NativeArray[String] */;
static val* varonce;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : String */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : String */;
val* var18 /* : String */;
val* var19 /* : String */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : String */;
val* var24 /* : AExpr */;
val* var26 /* : AExpr */;
val* var27 /* : RuntimeVariable */;
val* var_i2 /* var i2: RuntimeVariable */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
val* var31 /* : String */;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AOrElseExpr> */
var3 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:AOrElseExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3507);
fatal_exit(1);
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___new_var(var_v, var1);
}
var_res = var4;
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr (self) on <self:AOrElseExpr> */
var7 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AOrElseExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2050);
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
if (unlikely(varonce==NULL)) {
var9 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "if (";
var13 = core__flat___NativeString___to_s_full(var12, 4l, 4l);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var9)->values[0]=var11;
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "!=NULL) {";
var17 = core__flat___NativeString___to_s_full(var16, 9l, 9l);
var15 = var17;
varonce14 = var15;
}
((struct instance_core__NativeArray*)var9)->values[2]=var15;
} else {
var9 = varonce;
varonce = NULL;
}
{
var18 = ((val*(*)(val* self))(var_i1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_i1); /* to_s on <var_i1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var9)->values[1]=var18;
{
var19 = ((val*(*)(val* self))(var9->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var9); /* native_to_s on <var9:NativeArray[String]>*/
}
varonce = var9;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var19); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var_res, var_i1); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "} else {";
var23 = core__flat___NativeString___to_s_full(var22, 8l, 8l);
var21 = var23;
varonce20 = var21;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var21); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr2 (self) on <self:AOrElseExpr> */
var26 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AOrElseExpr> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2056);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
var27 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var24, ((val*)NULL));
}
var_i2 = var27;
{
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var_res, var_i2); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "}";
var31 = core__flat___NativeString___to_s_full(var30, 1l, 1l);
var29 = var31;
varonce28 = var29;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var29); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AIntegerExpr#expr for (self: AIntegerExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
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
{ /* Inline literal#AIntegerExpr#value (self) on <self:AIntegerExpr> */
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
{ /* Inline literal#AIntegerExpr#value (self) on <self:AIntegerExpr> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3521);
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
{ /* Inline literal#AIntegerExpr#value (self) on <self:AIntegerExpr> */
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
{ /* Inline literal#AIntegerExpr#value (self) on <self:AIntegerExpr> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3522);
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
{ /* Inline literal#AIntegerExpr#value (self) on <self:AIntegerExpr> */
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
{ /* Inline literal#AIntegerExpr#value (self) on <self:AIntegerExpr> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3523);
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
{ /* Inline literal#AIntegerExpr#value (self) on <self:AIntegerExpr> */
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
{ /* Inline literal#AIntegerExpr#value (self) on <self:AIntegerExpr> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3524);
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
{ /* Inline literal#AIntegerExpr#value (self) on <self:AIntegerExpr> */
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
{ /* Inline literal#AIntegerExpr#value (self) on <self:AIntegerExpr> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3525);
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
{ /* Inline literal#AIntegerExpr#value (self) on <self:AIntegerExpr> */
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
{ /* Inline literal#AIntegerExpr#value (self) on <self:AIntegerExpr> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3526);
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
{ /* Inline literal#AIntegerExpr#value (self) on <self:AIntegerExpr> */
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
{ /* Inline literal#AIntegerExpr#value (self) on <self:AIntegerExpr> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3527);
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
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3529);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_compiler#AFloatExpr#expr for (self: AFloatExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
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
var1 = NEW_core__NativeArray(1l, &type_core__NativeArray__core__String);
} else {
var1 = varonce;
varonce = NULL;
}
{
{ /* Inline parser_nodes#AFloatExpr#n_float (self) on <self:AFloatExpr> */
var4 = self->attrs[COLOR_nitc__parser_nodes__AFloatExpr___n_float].val; /* _n_float on <self:AFloatExpr> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_float");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2519);
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
/* method abstract_compiler#ACharExpr#expr for (self: ACharExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___ACharExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable Char */;
val* var3 /* : nullable Char */;
val* var4 /* : RuntimeVariable */;
uint32_t var5 /* : Char */;
var_v = p0;
{
{ /* Inline literal#ACharExpr#value (self) on <self:ACharExpr> */
var3 = self->attrs[COLOR_nitc__literal__ACharExpr___value].val; /* _value on <self:ACharExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3538);
fatal_exit(1);
}
{
var5 = (uint32_t)((long)(var1)>>2);
var4 = nitc___nitc__AbstractCompilerVisitor___char_instance(var_v, var5);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AArrayExpr#expr for (self: AArrayExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
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
{ /* Inline typing#AArrayExpr#element_mtype (self) on <self:AArrayExpr> */
var3 = self->attrs[COLOR_nitc__typing__AArrayExpr___element_mtype].val; /* _element_mtype on <self:AArrayExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3544);
fatal_exit(1);
}
var_mtype = var1;
var4 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___core__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[RuntimeVariable]>*/
}
var_array = var4;
{
var5 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__array_instance(var_v, var_array, var_mtype);
}
var_res = var5;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var8 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (var6 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3548);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#comprehension (var6) on <var6:nullable StaticFrame> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1934);
fatal_exit(1);
}
var11 = var6->attrs[COLOR_nitc__abstract_compiler__StaticFrame___comprehension].val; /* _comprehension on <var6:nullable StaticFrame> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_old_comprehension = var9;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var14 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
if (var12 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3549);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#comprehension= (var12,var_res) on <var12:nullable StaticFrame> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1934);
fatal_exit(1);
}
var12->attrs[COLOR_nitc__abstract_compiler__StaticFrame___comprehension].val = var_res; /* _comprehension on <var12:nullable StaticFrame> */
RET_LABEL15:(void)0;
}
}
{
{ /* Inline parser_nodes#AArrayExpr#n_exprs (self) on <self:AArrayExpr> */
var18 = self->attrs[COLOR_nitc__parser_nodes__AArrayExpr___n_exprs].val; /* _n_exprs on <self:AArrayExpr> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2460);
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
nitc___nitc__AbstractCompilerVisitor___stmt(var_v, var_nexpr); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
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
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var25 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
if (var23 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3553);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#comprehension= (var23,var_old_comprehension) on <var23:nullable StaticFrame> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1934);
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
/* method abstract_compiler#AStringFormExpr#expr for (self: AStringFormExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AStringFormExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable String */;
val* var3 /* : nullable String */;
val* var4 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline literal#AStringFormExpr#value (self) on <self:AStringFormExpr> */
var3 = self->attrs[COLOR_nitc__literal__AStringFormExpr___value].val; /* _value on <self:AStringFormExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3560);
fatal_exit(1);
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___string_instance(var_v, var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ASuperstringExpr#expr for (self: ASuperstringExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___ASuperstringExpr___AExpr__expr(val* self, val* p0) {
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
val* var20 /* : String */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : String */;
val* var28 /* : String */;
val* var_varonce /* var varonce: String */;
val* var30 /* : NativeArray[String] */;
static val* varonce29;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
val* var34 /* : String */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
val* var38 /* : String */;
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
val* var50 /* : String */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
val* var54 /* : String */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
val* var58 /* : String */;
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
val* var75 /* : nullable Object */;
val* var_ne76 /* var ne: AExpr */;
short int var77 /* : Bool */;
int cltype78;
int idtype79;
short int var80 /* : Bool */;
val* var82 /* : RuntimeVariable */;
val* var_e /* var e: RuntimeVariable */;
long var83 /* : Int */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : NativeString */;
val* var87 /* : String */;
val* var89 /* : NativeArray[String] */;
static val* varonce88;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : NativeString */;
val* var93 /* : String */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : NativeString */;
val* var97 /* : String */;
val* var98 /* : String */;
val* var99 /* : String */;
val* var101 /* : NativeArray[String] */;
static val* varonce100;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : NativeString */;
val* var105 /* : String */;
val* var106 /* : String */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
val* var110 /* : String */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : NativeString */;
val* var114 /* : String */;
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
val* var130 /* : nullable Object */;
val* var_ne131 /* var ne: AExpr */;
short int var132 /* : Bool */;
int cltype133;
int idtype134;
val* var136 /* : RuntimeVariable */;
val* var_e137 /* var e: RuntimeVariable */;
val* var138 /* : MType */;
val* var140 /* : MType */;
val* var141 /* : AbstractCompiler */;
val* var143 /* : AbstractCompiler */;
val* var144 /* : MModule */;
val* var146 /* : MModule */;
short int var147 /* : Bool */;
short int var148 /* : Bool */;
val* var149 /* : Array[RuntimeVariable] */;
val* var_150 /* var : Array[RuntimeVariable] */;
val* var151 /* : nullable RuntimeVariable */;
long var152 /* : Int */;
static val* varonce153;
val* var154 /* : String */;
char* var155 /* : NativeString */;
val* var156 /* : String */;
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
val* var169 /* : String */;
static val* varonce170;
val* var171 /* : String */;
char* var172 /* : NativeString */;
val* var173 /* : String */;
val* var174 /* : String */;
val* var175 /* : String */;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:ASuperstringExpr> */
var3 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:ASuperstringExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3566);
fatal_exit(1);
}
var_type_string = var1;
var4 = NEW_core__Array(&type_core__Array__nitc__AExpr);
{
core___core__Array___core__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[AExpr]>*/
}
var_array = var4;
{
{ /* Inline parser_nodes#ASuperstringExpr#n_exprs (self) on <self:ASuperstringExpr> */
var7 = self->attrs[COLOR_nitc__parser_nodes__ASuperstringExpr___n_exprs].val; /* _n_exprs on <self:ASuperstringExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2564);
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
var_ne = var11;
/* <var_ne:AExpr> isa AStringFormExpr */
cltype = type_nitc__AStringFormExpr.color;
idtype = type_nitc__AStringFormExpr.id;
if(cltype >= var_ne->type->table_size) {
var13 = 0;
} else {
var13 = var_ne->type->type_table[cltype] == idtype;
}
var_14 = var13;
if (var13){
{
{ /* Inline literal#AStringFormExpr#value (var_ne) on <var_ne:AExpr(AStringFormExpr)> */
var17 = var_ne->attrs[COLOR_nitc__literal__AStringFormExpr___value].val; /* _value on <var_ne:AExpr(AStringFormExpr)> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (likely(varonce!=NULL)) {
var18 = varonce;
} else {
var19 = "";
var20 = core__flat___NativeString___to_s_full(var19, 0l, 0l);
var18 = var20;
varonce = var18;
}
if (var15 == NULL) {
var21 = 0; /* <var18:String> cannot be null */
} else {
var22 = ((short int(*)(val* self, val* p0))(var15->class->vft[COLOR_core__kernel__Object___61d_61d]))(var15, var18); /* == on <var15:nullable String>*/
var21 = var22;
}
var12 = var21;
} else {
var12 = var_14;
}
if (var12){
goto BREAK_label23;
} else {
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_array, var_ne); /* Direct call array#Array#add on <var_array:Array[AExpr]>*/
}
BREAK_label23: (void)0;
{
((void(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_9); /* next on <var_9:Iterator[AExpr]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_9); /* finish on <var_9:Iterator[AExpr]>*/
}
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "varonce";
var27 = core__flat___NativeString___to_s_full(var26, 7l, 7l);
var25 = var27;
varonce24 = var25;
}
{
var28 = nitc___nitc__AbstractCompilerVisitor___get_name(var_v, var25);
}
var_varonce = var28;
if (unlikely(varonce29==NULL)) {
var30 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "if (unlikely(";
var34 = core__flat___NativeString___to_s_full(var33, 13l, 13l);
var32 = var34;
varonce31 = var32;
}
((struct instance_core__NativeArray*)var30)->values[0]=var32;
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "==NULL)) {";
var38 = core__flat___NativeString___to_s_full(var37, 10l, 10l);
var36 = var38;
varonce35 = var36;
}
((struct instance_core__NativeArray*)var30)->values[2]=var36;
} else {
var30 = varonce29;
varonce29 = NULL;
}
((struct instance_core__NativeArray*)var30)->values[1]=var_varonce;
{
var39 = ((val*(*)(val* self))(var30->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var30); /* native_to_s on <var30:NativeArray[String]>*/
}
varonce29 = var30;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var39); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline array#AbstractArrayRead#length (var_array) on <var_array:Array[AExpr]> */
var42 = var_array->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_array:Array[AExpr]> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
var43 = nitc___nitc__AbstractCompilerVisitor___int_instance(var_v, var40);
}
{
var44 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__native_array_instance]))(var_v, var_type_string, var43); /* native_array_instance on <var_v:AbstractCompilerVisitor>*/
}
var_a = var44;
if (unlikely(varonce45==NULL)) {
var46 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "static ";
var50 = core__flat___NativeString___to_s_full(var49, 7l, 7l);
var48 = var50;
varonce47 = var48;
}
((struct instance_core__NativeArray*)var46)->values[0]=var48;
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = " ";
var54 = core__flat___NativeString___to_s_full(var53, 1l, 1l);
var52 = var54;
varonce51 = var52;
}
((struct instance_core__NativeArray*)var46)->values[2]=var52;
if (likely(varonce55!=NULL)) {
var56 = varonce55;
} else {
var57 = ";";
var58 = core__flat___NativeString___to_s_full(var57, 1l, 1l);
var56 = var58;
varonce55 = var56;
}
((struct instance_core__NativeArray*)var46)->values[4]=var56;
} else {
var46 = varonce45;
varonce45 = NULL;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_a) on <var_a:RuntimeVariable> */
var61 = var_a->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_a:RuntimeVariable> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1870);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
var62 = ((val*(*)(val* self))(var59->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var59); /* ctype on <var59:MType>*/
}
((struct instance_core__NativeArray*)var46)->values[1]=var62;
((struct instance_core__NativeArray*)var46)->values[3]=var_varonce;
{
var63 = ((val*(*)(val* self))(var46->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var46); /* native_to_s on <var46:NativeArray[String]>*/
}
varonce45 = var46;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var63); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
var_i = 0l;
{
{ /* Inline array#AbstractArrayRead#length (var_array) on <var_array:Array[AExpr]> */
var66 = var_array->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_array:Array[AExpr]> */
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
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var73 = var_i < var_67;
var68 = var73;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
if (var68){
} else {
goto BREAK_label74;
}
{
var75 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_array, var_i);
}
var_ne76 = var75;
/* <var_ne76:AExpr> isa AStringFormExpr */
cltype78 = type_nitc__AStringFormExpr.color;
idtype79 = type_nitc__AStringFormExpr.id;
if(cltype78 >= var_ne76->type->table_size) {
var77 = 0;
} else {
var77 = var_ne76->type->type_table[cltype78] == idtype79;
}
var80 = !var77;
if (var80){
goto BREAK_label81;
} else {
}
{
var82 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var_ne76, ((val*)NULL));
}
var_e = var82;
{
nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__native_array_set(var_v, var_a, var_i, var_e); /* Direct call separate_compiler#SeparateCompilerVisitor#native_array_set on <var_v:AbstractCompilerVisitor>*/
}
BREAK_label81: (void)0;
{
var83 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var83;
}
BREAK_label74: (void)0;
if (likely(varonce84!=NULL)) {
var85 = varonce84;
} else {
var86 = "} else {";
var87 = core__flat___NativeString___to_s_full(var86, 8l, 8l);
var85 = var87;
varonce84 = var85;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var85); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce88==NULL)) {
var89 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = " = ";
var93 = core__flat___NativeString___to_s_full(var92, 3l, 3l);
var91 = var93;
varonce90 = var91;
}
((struct instance_core__NativeArray*)var89)->values[1]=var91;
if (likely(varonce94!=NULL)) {
var95 = varonce94;
} else {
var96 = ";";
var97 = core__flat___NativeString___to_s_full(var96, 1l, 1l);
var95 = var97;
varonce94 = var95;
}
((struct instance_core__NativeArray*)var89)->values[3]=var95;
} else {
var89 = varonce88;
varonce88 = NULL;
}
{
var98 = ((val*(*)(val* self))(var_a->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_a); /* to_s on <var_a:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var89)->values[0]=var98;
((struct instance_core__NativeArray*)var89)->values[2]=var_varonce;
{
var99 = ((val*(*)(val* self))(var89->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var89); /* native_to_s on <var89:NativeArray[String]>*/
}
varonce88 = var89;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var99); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce100==NULL)) {
var101 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce102!=NULL)) {
var103 = varonce102;
} else {
var104 = " = NULL;";
var105 = core__flat___NativeString___to_s_full(var104, 8l, 8l);
var103 = var105;
varonce102 = var103;
}
((struct instance_core__NativeArray*)var101)->values[1]=var103;
} else {
var101 = varonce100;
varonce100 = NULL;
}
((struct instance_core__NativeArray*)var101)->values[0]=var_varonce;
{
var106 = ((val*(*)(val* self))(var101->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var101); /* native_to_s on <var101:NativeArray[String]>*/
}
varonce100 = var101;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var106); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce107!=NULL)) {
var108 = varonce107;
} else {
var109 = "}";
var110 = core__flat___NativeString___to_s_full(var109, 1l, 1l);
var108 = var110;
varonce107 = var108;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var108); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce111!=NULL)) {
var112 = varonce111;
} else {
var113 = "to_s";
var114 = core__flat___NativeString___to_s_full(var113, 4l, 4l);
var112 = var114;
varonce111 = var112;
}
{
var115 = nitc___nitc__AbstractCompilerVisitor___object_type(var_v);
}
{
var116 = nitc___nitc__AbstractCompilerVisitor___get_property(var_v, var112, var115);
}
var_to_s_method = var116;
var_i117 = 0l;
{
{ /* Inline array#AbstractArrayRead#length (var_array) on <var_array:Array[AExpr]> */
var120 = var_array->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_array:Array[AExpr]> */
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
var_class_name127 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name127);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var128 = var_i117 < var_121;
var122 = var128;
goto RET_LABEL123;
RET_LABEL123:(void)0;
}
}
if (var122){
} else {
goto BREAK_label129;
}
{
var130 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_array, var_i117);
}
var_ne131 = var130;
/* <var_ne131:AExpr> isa AStringFormExpr */
cltype133 = type_nitc__AStringFormExpr.color;
idtype134 = type_nitc__AStringFormExpr.id;
if(cltype133 >= var_ne131->type->table_size) {
var132 = 0;
} else {
var132 = var_ne131->type->type_table[cltype133] == idtype134;
}
if (var132){
goto BREAK_label135;
} else {
}
{
var136 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var_ne131, ((val*)NULL));
}
var_e137 = var136;
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_e137) on <var_e137:RuntimeVariable> */
var140 = var_e137->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_e137:RuntimeVariable> */
if (unlikely(var140 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1873);
fatal_exit(1);
}
var138 = var140;
RET_LABEL139:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var143 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var143 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1133);
fatal_exit(1);
}
var141 = var143;
RET_LABEL142:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var141) on <var141:AbstractCompiler> */
var146 = var141->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var141:AbstractCompiler> */
if (unlikely(var146 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var144 = var146;
RET_LABEL145:(void)0;
}
}
{
var147 = nitc___nitc__MType___is_subtype(var138, var144, ((val*)NULL), var_type_string);
}
var148 = !var147;
if (var148){
var149 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var149, 1l); /* Direct call array#Array#with_capacity on <var149:Array[RuntimeVariable]>*/
}
var_150 = var149;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_150, var_e137); /* Direct call array#AbstractArray#push on <var_150:Array[RuntimeVariable]>*/
}
{
var151 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__send(var_v, var_to_s_method, var_150);
}
if (unlikely(var151 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3613);
fatal_exit(1);
}
var_e137 = var151;
} else {
}
{
nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__native_array_set(var_v, var_a, var_i117, var_e137); /* Direct call separate_compiler#SeparateCompilerVisitor#native_array_set on <var_v:AbstractCompilerVisitor>*/
}
BREAK_label135: (void)0;
{
var152 = core___core__Int___Discrete__successor(var_i117, 1l);
}
var_i117 = var152;
}
BREAK_label129: (void)0;
if (likely(varonce153!=NULL)) {
var154 = varonce153;
} else {
var155 = "native_to_s";
var156 = core__flat___NativeString___to_s_full(var155, 11l, 11l);
var154 = var156;
varonce153 = var154;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_a) on <var_a:RuntimeVariable> */
var159 = var_a->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_a:RuntimeVariable> */
if (unlikely(var159 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1870);
fatal_exit(1);
}
var157 = var159;
RET_LABEL158:(void)0;
}
}
{
var160 = nitc___nitc__AbstractCompilerVisitor___get_property(var_v, var154, var157);
}
var161 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var161, 1l); /* Direct call array#Array#with_capacity on <var161:Array[RuntimeVariable]>*/
}
var_162 = var161;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_162, var_a); /* Direct call array#AbstractArray#push on <var_162:Array[RuntimeVariable]>*/
}
{
var163 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__send(var_v, var160, var_162);
}
var_res = var163;
if (unlikely(varonce164==NULL)) {
var165 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce166!=NULL)) {
var167 = varonce166;
} else {
var168 = " = ";
var169 = core__flat___NativeString___to_s_full(var168, 3l, 3l);
var167 = var169;
varonce166 = var167;
}
((struct instance_core__NativeArray*)var165)->values[1]=var167;
if (likely(varonce170!=NULL)) {
var171 = varonce170;
} else {
var172 = ";";
var173 = core__flat___NativeString___to_s_full(var172, 1l, 1l);
var171 = var173;
varonce170 = var171;
}
((struct instance_core__NativeArray*)var165)->values[3]=var171;
} else {
var165 = varonce164;
varonce164 = NULL;
}
((struct instance_core__NativeArray*)var165)->values[0]=var_varonce;
{
var174 = ((val*(*)(val* self))(var_a->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_a); /* to_s on <var_a:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var165)->values[2]=var174;
{
var175 = ((val*(*)(val* self))(var165->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var165); /* native_to_s on <var165:NativeArray[String]>*/
}
varonce164 = var165;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var175); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ACrangeExpr#expr for (self: ACrangeExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
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
{ /* Inline parser_nodes#ARangeExpr#n_expr (self) on <self:ACrangeExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:ACrangeExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2421);
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
{ /* Inline parser_nodes#ARangeExpr#n_expr2 (self) on <self:ACrangeExpr> */
var7 = self->attrs[COLOR_nitc__parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:ACrangeExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2427);
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
{ /* Inline typing#AExpr#mtype (self) on <self:ACrangeExpr> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3633);
fatal_exit(1);
}
var_mtype = var9;
{
var13 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__init_instance]))(var_v, var_mtype); /* init_instance on <var_v:AbstractCompilerVisitor>*/
}
var_res = var13;
{
{ /* Inline typing#ARangeExpr#init_callsite (self) on <self:ACrangeExpr> */
var16 = self->attrs[COLOR_nitc__typing__ARangeExpr___init_callsite].val; /* _init_callsite on <self:ACrangeExpr> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3635);
fatal_exit(1);
}
var17 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var17, 3l); /* Direct call array#Array#with_capacity on <var17:Array[RuntimeVariable]>*/
}
var_ = var17;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_res); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_i1); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_i2); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
var18 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var14, var_); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AOrangeExpr#expr for (self: AOrangeExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
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
{ /* Inline parser_nodes#ARangeExpr#n_expr (self) on <self:AOrangeExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:AOrangeExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2421);
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
{ /* Inline parser_nodes#ARangeExpr#n_expr2 (self) on <self:AOrangeExpr> */
var7 = self->attrs[COLOR_nitc__parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:AOrangeExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2427);
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
{ /* Inline typing#AExpr#mtype (self) on <self:AOrangeExpr> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3645);
fatal_exit(1);
}
var_mtype = var9;
{
var13 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__init_instance]))(var_v, var_mtype); /* init_instance on <var_v:AbstractCompilerVisitor>*/
}
var_res = var13;
{
{ /* Inline typing#ARangeExpr#init_callsite (self) on <self:AOrangeExpr> */
var16 = self->attrs[COLOR_nitc__typing__ARangeExpr___init_callsite].val; /* _init_callsite on <self:AOrangeExpr> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3647);
fatal_exit(1);
}
var17 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var17, 3l); /* Direct call array#Array#with_capacity on <var17:Array[RuntimeVariable]>*/
}
var_ = var17;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_res); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_i1); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_i2); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
var18 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var14, var_); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ATrueExpr#expr for (self: ATrueExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
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
/* method abstract_compiler#AFalseExpr#expr for (self: AFalseExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
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
/* method abstract_compiler#ANullExpr#expr for (self: ANullExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
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
/* method abstract_compiler#AIsaExpr#expr for (self: AIsaExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
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
char* var15 /* : NativeString */;
val* var16 /* : String */;
val* var17 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#AIsaExpr#n_expr (self) on <self:AIsaExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AIsaExpr___n_expr].val; /* _n_expr on <self:AIsaExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2153);
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
{ /* Inline typing#AIsaExpr#cast_type (self) on <self:AIsaExpr> */
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
{ /* Inline kernel#Object#== (var_cast_type,((val*)NULL)) on <var_cast_type:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_cast_type,var_other) on <var_cast_type:nullable MType(MType)> */
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
var16 = core__flat___NativeString___to_s_full(var15, 3l, 3l);
var14 = var16;
varonce = var14;
}
{
var17 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__type_test]))(var_v, var_i, var_cast_type, var14); /* type_test on <var_v:AbstractCompilerVisitor>*/
}
var = var17;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAsCastExpr#expr for (self: AAsCastExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
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
char* var25 /* : NativeString */;
val* var26 /* : String */;
var_v = p0;
{
{ /* Inline parser_nodes#AAsCastForm#n_expr (self) on <self:AAsCastExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_expr].val; /* _n_expr on <self:AAsCastExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2586);
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
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var7 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1133);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var5) on <var5:AbstractCompiler> */
var10 = var5->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var5:AbstractCompiler> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var8) on <var8:ModelBuilder> */
var13 = var8->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var8:ModelBuilder> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_assert (var11) on <var11:ToolContext> */
var16 = var11->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_assert].val; /* _opt_no_check_assert on <var11:ToolContext> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_assert");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 52);
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
var23 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:AAsCastExpr> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3680);
fatal_exit(1);
}
if (likely(varonce!=NULL)) {
var24 = varonce;
} else {
var25 = "as";
var26 = core__flat___NativeString___to_s_full(var25, 2l, 2l);
var24 = var26;
varonce = var24;
}
{
nitc___nitc__AbstractCompilerVisitor___add_cast(var_v, var_i, var21, var24); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_cast on <var_v:AbstractCompilerVisitor>*/
}
var = var_i;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAsNotnullExpr#expr for (self: AAsNotnullExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
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
val* var21 /* : MType */;
val* var23 /* : MType */;
short int var24 /* : Bool */;
val* var25 /* : NativeArray[String] */;
static val* varonce;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
val* var29 /* : String */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : String */;
val* var34 /* : String */;
val* var35 /* : String */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
val* var39 /* : String */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
val* var43 /* : String */;
var_v = p0;
{
{ /* Inline parser_nodes#AAsCastForm#n_expr (self) on <self:AAsNotnullExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_expr].val; /* _n_expr on <self:AAsNotnullExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2586);
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
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var7 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1133);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var5) on <var5:AbstractCompiler> */
var10 = var5->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var5:AbstractCompiler> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var8) on <var8:ModelBuilder> */
var13 = var8->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var8:ModelBuilder> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_assert (var11) on <var11:ToolContext> */
var16 = var11->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_assert].val; /* _opt_no_check_assert on <var11:ToolContext> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_assert");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 52);
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
var23 = var_i->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_i:RuntimeVariable> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1870);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = ((short int(*)(val* self))(var21->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var21); /* is_c_primitive on <var21:MType>*/
}
if (var24){
var = var_i;
goto RET_LABEL;
} else {
}
if (unlikely(varonce==NULL)) {
var25 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "if (unlikely(";
var29 = core__flat___NativeString___to_s_full(var28, 13l, 13l);
var27 = var29;
varonce26 = var27;
}
((struct instance_core__NativeArray*)var25)->values[0]=var27;
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = " == NULL)) {";
var33 = core__flat___NativeString___to_s_full(var32, 12l, 12l);
var31 = var33;
varonce30 = var31;
}
((struct instance_core__NativeArray*)var25)->values[2]=var31;
} else {
var25 = varonce;
varonce = NULL;
}
{
var34 = ((val*(*)(val* self))(var_i->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_i); /* to_s on <var_i:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var25)->values[1]=var34;
{
var35 = ((val*(*)(val* self))(var25->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var25); /* native_to_s on <var25:NativeArray[String]>*/
}
varonce = var25;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var35); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "Cast failed";
var39 = core__flat___NativeString___to_s_full(var38, 11l, 11l);
var37 = var39;
varonce36 = var37;
}
{
nitc___nitc__AbstractCompilerVisitor___add_abort(var_v, var37); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "}";
var43 = core__flat___NativeString___to_s_full(var42, 1l, 1l);
var41 = var43;
varonce40 = var41;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var41); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_i;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AParExpr#expr for (self: AParExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AParExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#AParExpr#n_expr (self) on <self:AParExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AParExpr___n_expr].val; /* _n_expr on <self:AParExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2575);
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
/* method abstract_compiler#AOnceExpr#expr for (self: AOnceExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AOnceExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
val* var_mtype /* var mtype: MType */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : String */;
val* var7 /* : String */;
val* var_name /* var name: String */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : String */;
val* var12 /* : String */;
val* var13 /* : String */;
val* var_guard /* var guard: String */;
val* var15 /* : NativeArray[String] */;
static val* varonce14;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : String */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : String */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : String */;
val* var28 /* : String */;
val* var29 /* : String */;
val* var31 /* : NativeArray[String] */;
static val* varonce30;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
val* var35 /* : String */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
val* var39 /* : String */;
val* var40 /* : String */;
val* var41 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var43 /* : NativeArray[String] */;
static val* varonce42;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
val* var47 /* : String */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
val* var51 /* : String */;
val* var52 /* : String */;
val* var54 /* : NativeArray[String] */;
static val* varonce53;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
val* var58 /* : String */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
val* var62 /* : String */;
val* var63 /* : String */;
val* var64 /* : String */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
val* var68 /* : String */;
val* var69 /* : AExpr */;
val* var71 /* : AExpr */;
val* var72 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var74 /* : NativeArray[String] */;
static val* varonce73;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : NativeString */;
val* var78 /* : String */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
val* var82 /* : String */;
val* var83 /* : String */;
val* var84 /* : String */;
val* var85 /* : String */;
val* var87 /* : NativeArray[String] */;
static val* varonce86;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : NativeString */;
val* var91 /* : String */;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : NativeString */;
val* var95 /* : String */;
val* var96 /* : String */;
val* var97 /* : String */;
val* var99 /* : NativeArray[String] */;
static val* varonce98;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : NativeString */;
val* var103 /* : String */;
val* var104 /* : String */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
val* var108 /* : String */;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AOnceExpr> */
var3 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:AOnceExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3707);
fatal_exit(1);
}
var_mtype = var1;
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "varonce";
var6 = core__flat___NativeString___to_s_full(var5, 7l, 7l);
var4 = var6;
varonce = var4;
}
{
var7 = nitc___nitc__AbstractCompilerVisitor___get_name(var_v, var4);
}
var_name = var7;
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = "_guard";
var11 = core__flat___NativeString___to_s_full(var10, 6l, 6l);
var9 = var11;
varonce8 = var9;
}
{
var12 = ((val*(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__abstract_text__String___43d]))(var_name, var9); /* + on <var_name:String>*/
}
{
var13 = nitc___nitc__AbstractCompilerVisitor___get_name(var_v, var12);
}
var_guard = var13;
if (unlikely(varonce14==NULL)) {
var15 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "static ";
var19 = core__flat___NativeString___to_s_full(var18, 7l, 7l);
var17 = var19;
varonce16 = var17;
}
((struct instance_core__NativeArray*)var15)->values[0]=var17;
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = " ";
var23 = core__flat___NativeString___to_s_full(var22, 1l, 1l);
var21 = var23;
varonce20 = var21;
}
((struct instance_core__NativeArray*)var15)->values[2]=var21;
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = ";";
var27 = core__flat___NativeString___to_s_full(var26, 1l, 1l);
var25 = var27;
varonce24 = var25;
}
((struct instance_core__NativeArray*)var15)->values[4]=var25;
} else {
var15 = varonce14;
varonce14 = NULL;
}
{
var28 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var_mtype); /* ctype on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var15)->values[1]=var28;
((struct instance_core__NativeArray*)var15)->values[3]=var_name;
{
var29 = ((val*(*)(val* self))(var15->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var15); /* native_to_s on <var15:NativeArray[String]>*/
}
varonce14 = var15;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var29); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce30==NULL)) {
var31 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "static int ";
var35 = core__flat___NativeString___to_s_full(var34, 11l, 11l);
var33 = var35;
varonce32 = var33;
}
((struct instance_core__NativeArray*)var31)->values[0]=var33;
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = ";";
var39 = core__flat___NativeString___to_s_full(var38, 1l, 1l);
var37 = var39;
varonce36 = var37;
}
((struct instance_core__NativeArray*)var31)->values[2]=var37;
} else {
var31 = varonce30;
varonce30 = NULL;
}
((struct instance_core__NativeArray*)var31)->values[1]=var_guard;
{
var40 = ((val*(*)(val* self))(var31->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var31); /* native_to_s on <var31:NativeArray[String]>*/
}
varonce30 = var31;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var40); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
var41 = nitc___nitc__AbstractCompilerVisitor___new_var(var_v, var_mtype);
}
var_res = var41;
if (unlikely(varonce42==NULL)) {
var43 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = "if (likely(";
var47 = core__flat___NativeString___to_s_full(var46, 11l, 11l);
var45 = var47;
varonce44 = var45;
}
((struct instance_core__NativeArray*)var43)->values[0]=var45;
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = ")) {";
var51 = core__flat___NativeString___to_s_full(var50, 4l, 4l);
var49 = var51;
varonce48 = var49;
}
((struct instance_core__NativeArray*)var43)->values[2]=var49;
} else {
var43 = varonce42;
varonce42 = NULL;
}
((struct instance_core__NativeArray*)var43)->values[1]=var_guard;
{
var52 = ((val*(*)(val* self))(var43->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var43); /* native_to_s on <var43:NativeArray[String]>*/
}
varonce42 = var43;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var52); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce53==NULL)) {
var54 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce55!=NULL)) {
var56 = varonce55;
} else {
var57 = " = ";
var58 = core__flat___NativeString___to_s_full(var57, 3l, 3l);
var56 = var58;
varonce55 = var56;
}
((struct instance_core__NativeArray*)var54)->values[1]=var56;
if (likely(varonce59!=NULL)) {
var60 = varonce59;
} else {
var61 = ";";
var62 = core__flat___NativeString___to_s_full(var61, 1l, 1l);
var60 = var62;
varonce59 = var60;
}
((struct instance_core__NativeArray*)var54)->values[3]=var60;
} else {
var54 = varonce53;
varonce53 = NULL;
}
{
var63 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var54)->values[0]=var63;
((struct instance_core__NativeArray*)var54)->values[2]=var_name;
{
var64 = ((val*(*)(val* self))(var54->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var54); /* native_to_s on <var54:NativeArray[String]>*/
}
varonce53 = var54;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var64); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = "} else {";
var68 = core__flat___NativeString___to_s_full(var67, 8l, 8l);
var66 = var68;
varonce65 = var66;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var66); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AOnceExpr#n_expr (self) on <self:AOnceExpr> */
var71 = self->attrs[COLOR_nitc__parser_nodes__AOnceExpr___n_expr].val; /* _n_expr on <self:AOnceExpr> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2014);
fatal_exit(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
{
var72 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var69, var_mtype);
}
var_i = var72;
if (unlikely(varonce73==NULL)) {
var74 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = " = ";
var78 = core__flat___NativeString___to_s_full(var77, 3l, 3l);
var76 = var78;
varonce75 = var76;
}
((struct instance_core__NativeArray*)var74)->values[1]=var76;
if (likely(varonce79!=NULL)) {
var80 = varonce79;
} else {
var81 = ";";
var82 = core__flat___NativeString___to_s_full(var81, 1l, 1l);
var80 = var82;
varonce79 = var80;
}
((struct instance_core__NativeArray*)var74)->values[3]=var80;
} else {
var74 = varonce73;
varonce73 = NULL;
}
{
var83 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var74)->values[0]=var83;
{
var84 = ((val*(*)(val* self))(var_i->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_i); /* to_s on <var_i:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var74)->values[2]=var84;
{
var85 = ((val*(*)(val* self))(var74->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var74); /* native_to_s on <var74:NativeArray[String]>*/
}
varonce73 = var74;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var85); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce86==NULL)) {
var87 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce88!=NULL)) {
var89 = varonce88;
} else {
var90 = " = ";
var91 = core__flat___NativeString___to_s_full(var90, 3l, 3l);
var89 = var91;
varonce88 = var89;
}
((struct instance_core__NativeArray*)var87)->values[1]=var89;
if (likely(varonce92!=NULL)) {
var93 = varonce92;
} else {
var94 = ";";
var95 = core__flat___NativeString___to_s_full(var94, 1l, 1l);
var93 = var95;
varonce92 = var93;
}
((struct instance_core__NativeArray*)var87)->values[3]=var93;
} else {
var87 = varonce86;
varonce86 = NULL;
}
((struct instance_core__NativeArray*)var87)->values[0]=var_name;
{
var96 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var87)->values[2]=var96;
{
var97 = ((val*(*)(val* self))(var87->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var87); /* native_to_s on <var87:NativeArray[String]>*/
}
varonce86 = var87;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var97); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce98==NULL)) {
var99 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce100!=NULL)) {
var101 = varonce100;
} else {
var102 = " = 1;";
var103 = core__flat___NativeString___to_s_full(var102, 5l, 5l);
var101 = var103;
varonce100 = var101;
}
((struct instance_core__NativeArray*)var99)->values[1]=var101;
} else {
var99 = varonce98;
varonce98 = NULL;
}
((struct instance_core__NativeArray*)var99)->values[0]=var_guard;
{
var104 = ((val*(*)(val* self))(var99->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var99); /* native_to_s on <var99:NativeArray[String]>*/
}
varonce98 = var99;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var104); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce105!=NULL)) {
var106 = varonce105;
} else {
var107 = "}";
var108 = core__flat___NativeString___to_s_full(var107, 1l, 1l);
var106 = var108;
varonce105 = var106;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var106); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ASendExpr#expr for (self: ASendExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
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
{ /* Inline parser_nodes#ASendExpr#n_expr (self) on <self:ASendExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASendExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2022);
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
{ /* Inline typing#ASendExpr#callsite (self) on <self:ASendExpr> */
var7 = self->attrs[COLOR_nitc__typing__ASendExpr___callsite].val; /* _callsite on <self:ASendExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3729);
fatal_exit(1);
}
var_callsite = var5;
{
{ /* Inline model_base#MEntity#is_broken (var_callsite) on <var_callsite:CallSite> */
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
{ /* Inline typing#CallSite#mpropdef (var_callsite) on <var_callsite:CallSite> */
var13 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mpropdef].val; /* _mpropdef on <var_callsite:CallSite> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 656);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline typing#CallSite#signaturemap (var_callsite) on <var_callsite:CallSite> */
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
/* method abstract_compiler#ASendReassignFormExpr#stmt for (self: ASendReassignFormExpr, AbstractCompilerVisitor) */
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
{ /* Inline parser_nodes#ASendExpr#n_expr (self) on <self:ASendReassignFormExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASendReassignFormExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2022);
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
{ /* Inline typing#ASendExpr#callsite (self) on <self:ASendReassignFormExpr> */
var6 = self->attrs[COLOR_nitc__typing__ASendExpr___callsite].val; /* _callsite on <self:ASendReassignFormExpr> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3740);
fatal_exit(1);
}
var_callsite = var4;
{
{ /* Inline model_base#MEntity#is_broken (var_callsite) on <var_callsite:CallSite> */
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
{ /* Inline typing#CallSite#mpropdef (var_callsite) on <var_callsite:CallSite> */
var12 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mpropdef].val; /* _mpropdef on <var_callsite:CallSite> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 656);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline typing#CallSite#signaturemap (var_callsite) on <var_callsite:CallSite> */
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
{ /* Inline parser_nodes#AReassignFormExpr#n_value (self) on <self:ASendReassignFormExpr> */
var20 = self->attrs[COLOR_nitc__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:ASendReassignFormExpr> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2003);
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
{ /* Inline kernel#Object#!= (var_left,((val*)NULL)) on <var_left:nullable RuntimeVariable> */
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
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3747);
fatal_exit(1);
}
{
{ /* Inline typing#AReassignFormExpr#reassign_callsite (self) on <self:ASendReassignFormExpr> */
var30 = self->attrs[COLOR_nitc__typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:ASendReassignFormExpr> */
var28 = var30;
RET_LABEL29:(void)0;
}
}
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3749);
fatal_exit(1);
}
var31 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var31, 2l); /* Direct call array#Array#with_capacity on <var31:Array[RuntimeVariable]>*/
}
var_ = var31;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_left); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_value); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
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
{ /* Inline kernel#Object#!= (var_res,((val*)NULL)) on <var_res:nullable RuntimeVariable> */
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
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3750);
fatal_exit(1);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_args, var_res); /* Direct call array#Array#add on <var_args:Array[RuntimeVariable]>*/
}
{
{ /* Inline typing#ASendReassignFormExpr#write_callsite (self) on <self:ASendReassignFormExpr> */
var40 = self->attrs[COLOR_nitc__typing__ASendReassignFormExpr___write_callsite].val; /* _write_callsite on <self:ASendReassignFormExpr> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3753);
fatal_exit(1);
}
{
var41 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var38, var_args); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#ASuperExpr#expr for (self: ASuperExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
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
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var3 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3760);
fatal_exit(1);
}
var_frame = var1;
{
{ /* Inline abstract_compiler#StaticFrame#arguments (var_frame) on <var_frame:StaticFrame> */
var6 = var_frame->attrs[COLOR_nitc__abstract_compiler__StaticFrame___arguments].val; /* _arguments on <var_frame:StaticFrame> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1921);
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
{ /* Inline typing#ASuperExpr#callsite (self) on <self:ASuperExpr> */
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
{ /* Inline kernel#Object#!= (var_callsite,((val*)NULL)) on <var_callsite:nullable CallSite> */
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
{ /* Inline model_base#MEntity#is_broken (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
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
{ /* Inline parser_nodes#ASuperExpr#n_args (self) on <self:ASuperExpr> */
var21 = self->attrs[COLOR_nitc__parser_nodes__ASuperExpr___n_args].val; /* _n_args on <self:ASuperExpr> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2348);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var19) on <var19:AExprs> */
var24 = var19->attrs[COLOR_nitc__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var19:AExprs> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2709);
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
core___core__Array___with_capacity(var26, 1l); /* Direct call array#Array#with_capacity on <var26:Array[RuntimeVariable]>*/
}
var_ = var26;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_recv); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
var_args = var_;
var_i = 0l;
{
{ /* Inline typing#CallSite#msignature (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var29 = var_callsite->attrs[COLOR_nitc__typing__CallSite___msignature].val; /* _msignature on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 660);
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
{ /* Inline kernel#Int#< (var_i,var_31) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_31:Int> isa OTHER */
/* <var_31:Int> isa OTHER */
var34 = 1; /* easy <var_31:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
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
{ /* Inline abstract_compiler#StaticFrame#arguments (var_frame) on <var_frame:StaticFrame> */
var38 = var_frame->attrs[COLOR_nitc__abstract_compiler__StaticFrame___arguments].val; /* _arguments on <var_frame:StaticFrame> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1921);
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
var_class_name44 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name44);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
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
core___core__Array___core__abstract_collection__SimpleCollection__add(var_args, var46); /* Direct call array#Array#add on <var_args:nullable Object(Array[RuntimeVariable])>*/
}
{
var47 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var47;
}
BREAK_label: (void)0;
} else {
{
{ /* Inline typing#CallSite#mpropdef (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var50 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mpropdef].val; /* _mpropdef on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 656);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
{ /* Inline typing#CallSite#signaturemap (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var53 = var_callsite->attrs[COLOR_nitc__typing__CallSite___signaturemap].val; /* _signaturemap on <var_callsite:nullable CallSite(CallSite)> */
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline parser_nodes#ASuperExpr#n_args (self) on <self:ASuperExpr> */
var56 = self->attrs[COLOR_nitc__parser_nodes__ASuperExpr___n_args].val; /* _n_args on <self:ASuperExpr> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2348);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var54) on <var54:AExprs> */
var59 = var54->attrs[COLOR_nitc__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var54:AExprs> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2709);
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
{ /* Inline typing#ASuperExpr#mpropdef (self) on <self:ASuperExpr> */
var64 = self->attrs[COLOR_nitc__typing__ASuperExpr___mpropdef].val; /* _mpropdef on <self:ASuperExpr> */
var62 = var64;
RET_LABEL63:(void)0;
}
}
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3783);
fatal_exit(1);
}
var_mpropdef = var62;
{
{ /* Inline parser_nodes#ASuperExpr#n_args (self) on <self:ASuperExpr> */
var67 = self->attrs[COLOR_nitc__parser_nodes__ASuperExpr___n_args].val; /* _n_args on <self:ASuperExpr> */
if (unlikely(var67 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2348);
fatal_exit(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var65) on <var65:AExprs> */
var70 = var65->attrs[COLOR_nitc__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var65:AExprs> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2709);
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
{ /* Inline abstract_compiler#StaticFrame#arguments (var_frame) on <var_frame:StaticFrame> */
var74 = var_frame->attrs[COLOR_nitc__abstract_compiler__StaticFrame___arguments].val; /* _arguments on <var_frame:StaticFrame> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1921);
fatal_exit(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
var_args75 = var72;
} else {
{
{ /* Inline typing#ASuperExpr#signaturemap (self) on <self:ASuperExpr> */
var78 = self->attrs[COLOR_nitc__typing__ASuperExpr___signaturemap].val; /* _signaturemap on <self:ASuperExpr> */
var76 = var78;
RET_LABEL77:(void)0;
}
}
{
{ /* Inline parser_nodes#ASuperExpr#n_args (self) on <self:ASuperExpr> */
var81 = self->attrs[COLOR_nitc__parser_nodes__ASuperExpr___n_args].val; /* _n_args on <self:ASuperExpr> */
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2348);
fatal_exit(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var79) on <var79:AExprs> */
var84 = var79->attrs[COLOR_nitc__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var79:AExprs> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2709);
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
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_recv) on <var_recv:RuntimeVariable> */
var88 = var_recv->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_recv:RuntimeVariable> */
if (unlikely(var88 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1870);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3793);
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
/* method abstract_compiler#ANewExpr#expr for (self: ANewExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
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
char* var16 /* : NativeString */;
val* var17 /* : String */;
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
short int var54 /* : Bool */;
short int var56 /* : Bool */;
val* var57 /* : MMethodDef */;
val* var59 /* : MMethodDef */;
val* var60 /* : nullable SignatureMap */;
val* var62 /* : nullable SignatureMap */;
val* var63 /* : AExprs */;
val* var65 /* : AExprs */;
val* var66 /* : ANodes[AExpr] */;
val* var68 /* : ANodes[AExpr] */;
val* var69 /* : Array[RuntimeVariable] */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var70 /* : nullable RuntimeVariable */;
val* var_res2 /* var res2: nullable RuntimeVariable */;
short int var71 /* : Bool */;
short int var72 /* : Bool */;
short int var74 /* : Bool */;
short int var75 /* : Bool */;
var_v = p0;
{
{ /* Inline typing#ANewExpr#recvtype (self) on <self:ANewExpr> */
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
{ /* Inline kernel#Object#!= (var_mtype,((val*)NULL)) on <var_mtype:nullable MClassType> */
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
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3801);
fatal_exit(1);
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:nullable MClassType(MClassType)> */
var11 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:nullable MClassType(MClassType)> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1163);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline model#MClass#name (var9) on <var9:MClass> */
var14 = var9->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var9:MClass> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 385);
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
var17 = core__flat___NativeString___to_s_full(var16, 11l, 11l);
var15 = var17;
varonce = var15;
}
{
var18 = ((short int(*)(val* self, val* p0))(var12->class->vft[COLOR_core__kernel__Object___61d_61d]))(var12, var15); /* == on <var12:String>*/
}
if (var18){
{
{ /* Inline parser_nodes#ANewExpr#n_args (self) on <self:ANewExpr> */
var21 = self->attrs[COLOR_nitc__parser_nodes__ANewExpr___n_args].val; /* _n_args on <self:ANewExpr> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2265);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var19) on <var19:AExprs> */
var24 = var19->attrs[COLOR_nitc__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var19:AExprs> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2709);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
var25 = nitc___nitc__ANodes___core__abstract_collection__Collection__length(var22);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3804);
fatal_exit(1);
}
{
{ /* Inline parser_nodes#ANewExpr#n_args (self) on <self:ANewExpr> */
var31 = self->attrs[COLOR_nitc__parser_nodes__ANewExpr___n_args].val; /* _n_args on <self:ANewExpr> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2265);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var29) on <var29:AExprs> */
var34 = var29->attrs[COLOR_nitc__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var29:AExprs> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2709);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
var35 = core___core__SequenceRead___Collection__first(var32);
}
{
var36 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var35, ((val*)NULL));
}
var_l = var36;
/* <var_mtype:nullable MClassType(MClassType)> isa MGenericType */
cltype = type_nitc__MGenericType.color;
idtype = type_nitc__MGenericType.id;
if(cltype >= var_mtype->type->table_size) {
var37 = 0;
} else {
var37 = var_mtype->type->type_table[cltype] == idtype;
}
if (unlikely(!var37)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3806);
fatal_exit(1);
}
{
{ /* Inline model#MGenericType#arguments (var_mtype) on <var_mtype:nullable MClassType(MGenericType)> */
var40 = var_mtype->attrs[COLOR_nitc__model__MGenericType___arguments].val; /* _arguments on <var_mtype:nullable MClassType(MGenericType)> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1269);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
var41 = core___core__SequenceRead___Collection__first(var38);
}
var_elttype = var41;
{
var42 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__native_array_instance]))(var_v, var_elttype, var_l); /* native_array_instance on <var_v:AbstractCompilerVisitor>*/
}
var = var42;
goto RET_LABEL;
} else {
}
{
var43 = nitc___nitc__AbstractCompilerVisitor___init_instance_or_extern(var_v, var_mtype);
}
var_recv = var43;
{
{ /* Inline typing#ANewExpr#callsite (self) on <self:ANewExpr> */
var46 = self->attrs[COLOR_nitc__typing__ANewExpr___callsite].val; /* _callsite on <self:ANewExpr> */
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
{ /* Inline model_base#MEntity#is_broken (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var56 = var_callsite->attrs[COLOR_nitc__model_base__MEntity___is_broken].s; /* _is_broken on <var_callsite:nullable CallSite(CallSite)> */
var54 = var56;
RET_LABEL55:(void)0;
}
}
if (var54){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#CallSite#mpropdef (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var59 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mpropdef].val; /* _mpropdef on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 656);
fatal_exit(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
{ /* Inline typing#CallSite#signaturemap (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var62 = var_callsite->attrs[COLOR_nitc__typing__CallSite___signaturemap].val; /* _signaturemap on <var_callsite:nullable CallSite(CallSite)> */
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
{ /* Inline parser_nodes#ANewExpr#n_args (self) on <self:ANewExpr> */
var65 = self->attrs[COLOR_nitc__parser_nodes__ANewExpr___n_args].val; /* _n_args on <self:ANewExpr> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2265);
fatal_exit(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var63) on <var63:AExprs> */
var68 = var63->attrs[COLOR_nitc__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var63:AExprs> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2709);
fatal_exit(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
var69 = nitc___nitc__AbstractCompilerVisitor___varargize(var_v, var57, var60, var_recv, var66);
}
var_args = var69;
{
var70 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_callsite, var_args); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var_res2 = var70;
if (var_res2 == NULL) {
var71 = 0; /* is null */
} else {
var71 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res2,((val*)NULL)) on <var_res2:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var74 = ((short int(*)(val* self, val* p0))(var_res2->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res2, var_other); /* == on <var_res2:nullable RuntimeVariable(RuntimeVariable)>*/
}
var75 = !var74;
var72 = var75;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
var71 = var72;
}
if (var71){
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
{ /* Inline parser_nodes#AAttrFormExpr#n_expr (self) on <self:AAttrExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2273);
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
{ /* Inline typing#AAttrFormExpr#mproperty (self) on <self:AAttrExpr> */
var7 = self->attrs[COLOR_nitc__typing__AAttrFormExpr___mproperty].val; /* _mproperty on <self:AAttrExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3831);
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
/* method abstract_compiler#AAttrAssignExpr#expr for (self: AAttrAssignExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
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
{ /* Inline parser_nodes#AAttrFormExpr#n_expr (self) on <self:AAttrAssignExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrAssignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2273);
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
{ /* Inline parser_nodes#AAssignFormExpr#n_value (self) on <self:AAttrAssignExpr> */
var7 = self->attrs[COLOR_nitc__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AAttrAssignExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1992);
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
{ /* Inline typing#AAttrFormExpr#mproperty (self) on <self:AAttrAssignExpr> */
var11 = self->attrs[COLOR_nitc__typing__AAttrFormExpr___mproperty].val; /* _mproperty on <self:AAttrAssignExpr> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3841);
fatal_exit(1);
}
var_mproperty = var9;
{
nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__write_attribute(var_v, var_mproperty, var_recv, var_i); /* Direct call separate_compiler#SeparateCompilerVisitor#write_attribute on <var_v:AbstractCompilerVisitor>*/
}
var = var_i;
goto RET_LABEL;
RET_LABEL:;
return var;
}
