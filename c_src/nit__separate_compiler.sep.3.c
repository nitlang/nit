#include "nit__separate_compiler.sep.0.h"
/* method separate_compiler#SeparateCompilerVisitor#autobox for (self: SeparateCompilerVisitor, RuntimeVariable, MType): RuntimeVariable */
val* nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__autobox(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : MType */;
val* var3 /* : MType */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : MType */;
val* var12 /* : MType */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var_ /* var : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : MType */;
val* var19 /* : MType */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : String */;
static val* varonce;
val* var26 /* : String */;
char* var27 /* : NativeString */;
val* var28 /* : FlatString */;
short int var29 /* : Bool */;
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
val* var41 /* : String */;
val* var42 /* : RuntimeVariable */;
val* var43 /* : String */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
val* var47 /* : FlatString */;
short int var48 /* : Bool */;
val* var50 /* : NativeArray[String] */;
static val* varonce49;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
val* var54 /* : FlatString */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
val* var58 /* : FlatString */;
val* var59 /* : String */;
val* var60 /* : String */;
val* var61 /* : RuntimeVariable */;
val* var62 /* : String */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
val* var66 /* : FlatString */;
short int var67 /* : Bool */;
val* var69 /* : NativeArray[String] */;
static val* varonce68;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
val* var73 /* : FlatString */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
val* var77 /* : FlatString */;
val* var78 /* : String */;
val* var79 /* : String */;
val* var80 /* : RuntimeVariable */;
val* var82 /* : NativeArray[String] */;
static val* varonce81;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : NativeString */;
val* var86 /* : FlatString */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : NativeString */;
val* var90 /* : FlatString */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : NativeString */;
val* var94 /* : FlatString */;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : NativeString */;
val* var98 /* : FlatString */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : NativeString */;
val* var102 /* : FlatString */;
val* var103 /* : String */;
val* var104 /* : String */;
val* var105 /* : MType */;
val* var107 /* : MType */;
val* var108 /* : String */;
val* var109 /* : String */;
val* var110 /* : String */;
val* var111 /* : RuntimeVariable */;
short int var112 /* : Bool */;
short int var113 /* : Bool */;
val* var114 /* : MType */;
val* var116 /* : MType */;
short int var117 /* : Bool */;
short int var119 /* : Bool */;
val* var120 /* : MType */;
val* var122 /* : MType */;
val* var123 /* : String */;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : NativeString */;
val* var127 /* : FlatString */;
short int var128 /* : Bool */;
val* var130 /* : NativeArray[String] */;
static val* varonce129;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : NativeString */;
val* var134 /* : FlatString */;
static val* varonce135;
val* var136 /* : String */;
char* var137 /* : NativeString */;
val* var138 /* : FlatString */;
val* var139 /* : String */;
val* var140 /* : String */;
val* var141 /* : RuntimeVariable */;
val* var142 /* : MType */;
val* var144 /* : MType */;
val* var145 /* : String */;
static val* varonce146;
val* var147 /* : String */;
char* var148 /* : NativeString */;
val* var149 /* : FlatString */;
short int var150 /* : Bool */;
val* var152 /* : NativeArray[String] */;
static val* varonce151;
static val* varonce153;
val* var154 /* : String */;
char* var155 /* : NativeString */;
val* var156 /* : FlatString */;
static val* varonce157;
val* var158 /* : String */;
char* var159 /* : NativeString */;
val* var160 /* : FlatString */;
val* var161 /* : String */;
val* var162 /* : String */;
val* var163 /* : RuntimeVariable */;
val* var164 /* : MType */;
val* var166 /* : MType */;
val* var167 /* : String */;
static val* varonce168;
val* var169 /* : String */;
char* var170 /* : NativeString */;
val* var171 /* : FlatString */;
short int var172 /* : Bool */;
val* var174 /* : NativeArray[String] */;
static val* varonce173;
static val* varonce175;
val* var176 /* : String */;
char* var177 /* : NativeString */;
val* var178 /* : FlatString */;
static val* varonce179;
val* var180 /* : String */;
char* var181 /* : NativeString */;
val* var182 /* : FlatString */;
val* var183 /* : String */;
val* var184 /* : String */;
val* var185 /* : RuntimeVariable */;
val* var186 /* : MType */;
val* var188 /* : MType */;
short int var189 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_valtype /* var valtype: MClassType */;
short int var190 /* : Bool */;
short int var191 /* : Bool */;
short int var192 /* : Bool */;
int cltype193;
int idtype194;
short int var_195 /* var : Bool */;
val* var196 /* : MClass */;
val* var198 /* : MClass */;
val* var199 /* : MClassKind */;
val* var201 /* : MClassKind */;
val* var202 /* : Sys */;
val* var203 /* : MClassKind */;
short int var204 /* : Bool */;
short int var206 /* : Bool */;
short int var208 /* : Bool */;
short int var_209 /* var : Bool */;
val* var210 /* : MClass */;
val* var212 /* : MClass */;
val* var213 /* : String */;
val* var215 /* : String */;
static val* varonce216;
val* var217 /* : String */;
char* var218 /* : NativeString */;
val* var219 /* : FlatString */;
short int var220 /* : Bool */;
val* var_other222 /* var other: nullable Object */;
short int var223 /* : Bool */;
short int var224 /* : Bool */;
val* var225 /* : AbstractCompiler */;
val* var227 /* : AbstractCompiler */;
val* var228 /* : MModule */;
val* var230 /* : MModule */;
val* var231 /* : MClassType */;
val* var232 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
short int var233 /* : Bool */;
val* var234 /* : AbstractCompiler */;
val* var236 /* : AbstractCompiler */;
val* var237 /* : nullable RapidTypeAnalysis */;
val* var239 /* : nullable RapidTypeAnalysis */;
short int var240 /* : Bool */;
short int var241 /* : Bool */;
short int var243 /* : Bool */;
short int var244 /* : Bool */;
short int var_245 /* var : Bool */;
val* var246 /* : AbstractCompiler */;
val* var248 /* : AbstractCompiler */;
val* var249 /* : nullable RapidTypeAnalysis */;
val* var251 /* : nullable RapidTypeAnalysis */;
val* var252 /* : HashSet[MClassType] */;
val* var254 /* : HashSet[MClassType] */;
short int var255 /* : Bool */;
short int var256 /* : Bool */;
val* var258 /* : NativeArray[String] */;
static val* varonce257;
static val* varonce259;
val* var260 /* : String */;
char* var261 /* : NativeString */;
val* var262 /* : FlatString */;
static val* varonce263;
val* var264 /* : String */;
char* var265 /* : NativeString */;
val* var266 /* : FlatString */;
static val* varonce267;
val* var268 /* : String */;
char* var269 /* : NativeString */;
val* var270 /* : FlatString */;
static val* varonce271;
val* var272 /* : String */;
char* var273 /* : NativeString */;
val* var274 /* : FlatString */;
val* var275 /* : MType */;
val* var277 /* : MType */;
val* var278 /* : String */;
val* var279 /* : String */;
val* var280 /* : MType */;
val* var282 /* : MType */;
val* var283 /* : String */;
val* var284 /* : String */;
static val* varonce285;
val* var286 /* : String */;
char* var287 /* : NativeString */;
val* var288 /* : FlatString */;
val* var290 /* : NativeArray[String] */;
static val* varonce289;
static val* varonce291;
val* var292 /* : String */;
char* var293 /* : NativeString */;
val* var294 /* : FlatString */;
val* var295 /* : String */;
val* var296 /* : String */;
val* var298 /* : NativeArray[String] */;
static val* varonce297;
static val* varonce299;
val* var300 /* : String */;
char* var301 /* : NativeString */;
val* var302 /* : FlatString */;
static val* varonce303;
val* var304 /* : String */;
char* var305 /* : NativeString */;
val* var306 /* : FlatString */;
static val* varonce307;
val* var308 /* : String */;
char* var309 /* : NativeString */;
val* var310 /* : FlatString */;
static val* varonce311;
val* var312 /* : String */;
char* var313 /* : NativeString */;
val* var314 /* : FlatString */;
static val* varonce315;
val* var316 /* : String */;
char* var317 /* : NativeString */;
val* var318 /* : FlatString */;
val* var319 /* : String */;
val* var320 /* : String */;
val* var321 /* : String */;
val* var322 /* : MType */;
val* var324 /* : MType */;
val* var325 /* : String */;
val* var326 /* : String */;
val* var327 /* : String */;
short int var328 /* : Bool */;
short int var329 /* : Bool */;
short int var330 /* : Bool */;
val* var331 /* : MType */;
val* var333 /* : MType */;
val* var334 /* : String */;
static val* varonce335;
val* var336 /* : String */;
char* var337 /* : NativeString */;
val* var338 /* : FlatString */;
short int var339 /* : Bool */;
short int var_340 /* var : Bool */;
val* var341 /* : String */;
static val* varonce342;
val* var343 /* : String */;
char* var344 /* : NativeString */;
val* var345 /* : FlatString */;
short int var346 /* : Bool */;
short int var_347 /* var : Bool */;
short int var348 /* : Bool */;
val* var349 /* : MType */;
val* var351 /* : MType */;
val* var352 /* : String */;
static val* varonce353;
val* var354 /* : String */;
char* var355 /* : NativeString */;
val* var356 /* : FlatString */;
short int var357 /* : Bool */;
short int var_358 /* var : Bool */;
val* var359 /* : String */;
static val* varonce360;
val* var361 /* : String */;
char* var362 /* : NativeString */;
val* var363 /* : FlatString */;
short int var364 /* : Bool */;
short int var_365 /* var : Bool */;
short int var366 /* : Bool */;
val* var367 /* : MType */;
val* var369 /* : MType */;
val* var370 /* : String */;
static val* varonce371;
val* var372 /* : String */;
char* var373 /* : NativeString */;
val* var374 /* : FlatString */;
short int var375 /* : Bool */;
short int var_376 /* var : Bool */;
val* var377 /* : String */;
static val* varonce378;
val* var379 /* : String */;
char* var380 /* : NativeString */;
val* var381 /* : FlatString */;
short int var382 /* : Bool */;
val* var383 /* : RuntimeVariable */;
val* var_res384 /* var res: RuntimeVariable */;
val* var386 /* : NativeArray[String] */;
static val* varonce385;
static val* varonce387;
val* var388 /* : String */;
char* var389 /* : NativeString */;
val* var390 /* : FlatString */;
static val* varonce391;
val* var392 /* : String */;
char* var393 /* : NativeString */;
val* var394 /* : FlatString */;
static val* varonce395;
val* var396 /* : String */;
char* var397 /* : NativeString */;
val* var398 /* : FlatString */;
static val* varonce399;
val* var400 /* : String */;
char* var401 /* : NativeString */;
val* var402 /* : FlatString */;
val* var403 /* : String */;
val* var404 /* : MType */;
val* var406 /* : MType */;
val* var407 /* : String */;
val* var408 /* : String */;
val* var409 /* : String */;
val* var411 /* : NativeArray[String] */;
static val* varonce410;
static val* varonce412;
val* var413 /* : String */;
char* var414 /* : NativeString */;
val* var415 /* : FlatString */;
static val* varonce416;
val* var417 /* : String */;
char* var418 /* : NativeString */;
val* var419 /* : FlatString */;
static val* varonce420;
val* var421 /* : String */;
char* var422 /* : NativeString */;
val* var423 /* : FlatString */;
val* var424 /* : MType */;
val* var426 /* : MType */;
val* var427 /* : String */;
val* var428 /* : String */;
val* var429 /* : String */;
var_value = p0;
var_mtype = p1;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var3 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var1,var_mtype) on <var1:MType> */
var_other = var_mtype;
{
{ /* Inline kernel#Object#is_same_instance (var1,var_other) on <var1:MType> */
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
}
if (var4){
var = var_value;
goto RET_LABEL;
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var12 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = ((short int(*)(val* self))(var10->class->vft[COLOR_nit__abstract_compiler__MType__is_c_primitive]))(var10); /* is_c_primitive on <var10:MType>*/
}
var14 = !var13;
var_ = var14;
if (var14){
{
var15 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nit__abstract_compiler__MType__is_c_primitive]))(var_mtype); /* is_c_primitive on <var_mtype:MType>*/
}
var16 = !var15;
var9 = var16;
} else {
var9 = var_;
}
if (var9){
var = var_value;
goto RET_LABEL;
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var19 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = ((short int(*)(val* self))(var17->class->vft[COLOR_nit__abstract_compiler__MType__is_c_primitive]))(var17); /* is_c_primitive on <var17:MType>*/
}
var21 = !var20;
if (var21){
{
{ /* Inline separate_compiler#MType#is_tagged (var_mtype) on <var_mtype:MType> */
var24 = var_mtype->attrs[COLOR_nit__separate_compiler__MType___is_tagged].s; /* _is_tagged on <var_mtype:MType> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
if (var22){
{
var25 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model_base__MEntity__name]))(var_mtype); /* name on <var_mtype:MType>*/
}
if (likely(varonce!=NULL)) {
var26 = varonce;
} else {
var27 = "Int";
var28 = standard___standard__NativeString___to_s_with_length(var27, 3l);
var26 = var28;
varonce = var26;
}
{
var29 = ((short int(*)(val* self, val* p0))(var25->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var25, var26); /* == on <var25:String>*/
}
if (var29){
if (unlikely(varonce30==NULL)) {
var31 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "(long)(";
var35 = standard___standard__NativeString___to_s_with_length(var34, 7l);
var33 = var35;
varonce32 = var33;
}
((struct instance_standard__NativeArray*)var31)->values[0]=var33;
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = ")>>2";
var39 = standard___standard__NativeString___to_s_with_length(var38, 4l);
var37 = var39;
varonce36 = var37;
}
((struct instance_standard__NativeArray*)var31)->values[2]=var37;
} else {
var31 = varonce30;
varonce30 = NULL;
}
{
var40 = ((val*(*)(val* self))(var_value->class->vft[COLOR_standard__string__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var31)->values[1]=var40;
{
var41 = ((val*(*)(val* self))(var31->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var31); /* native_to_s on <var31:NativeArray[String]>*/
}
varonce30 = var31;
{
var42 = nit___nit__AbstractCompilerVisitor___new_expr(self, var41, var_mtype);
}
var = var42;
goto RET_LABEL;
} else {
{
var43 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model_base__MEntity__name]))(var_mtype); /* name on <var_mtype:MType>*/
}
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = "Char";
var47 = standard___standard__NativeString___to_s_with_length(var46, 4l);
var45 = var47;
varonce44 = var45;
}
{
var48 = ((short int(*)(val* self, val* p0))(var43->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var43, var45); /* == on <var43:String>*/
}
if (var48){
if (unlikely(varonce49==NULL)) {
var50 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "(uint32_t)((long)(";
var54 = standard___standard__NativeString___to_s_with_length(var53, 18l);
var52 = var54;
varonce51 = var52;
}
((struct instance_standard__NativeArray*)var50)->values[0]=var52;
if (likely(varonce55!=NULL)) {
var56 = varonce55;
} else {
var57 = ")>>2)";
var58 = standard___standard__NativeString___to_s_with_length(var57, 5l);
var56 = var58;
varonce55 = var56;
}
((struct instance_standard__NativeArray*)var50)->values[2]=var56;
} else {
var50 = varonce49;
varonce49 = NULL;
}
{
var59 = ((val*(*)(val* self))(var_value->class->vft[COLOR_standard__string__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var50)->values[1]=var59;
{
var60 = ((val*(*)(val* self))(var50->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var50); /* native_to_s on <var50:NativeArray[String]>*/
}
varonce49 = var50;
{
var61 = nit___nit__AbstractCompilerVisitor___new_expr(self, var60, var_mtype);
}
var = var61;
goto RET_LABEL;
} else {
{
var62 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model_base__MEntity__name]))(var_mtype); /* name on <var_mtype:MType>*/
}
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "Bool";
var66 = standard___standard__NativeString___to_s_with_length(var65, 4l);
var64 = var66;
varonce63 = var64;
}
{
var67 = ((short int(*)(val* self, val* p0))(var62->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var62, var64); /* == on <var62:String>*/
}
if (var67){
if (unlikely(varonce68==NULL)) {
var69 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = "(short int)((long)(";
var73 = standard___standard__NativeString___to_s_with_length(var72, 19l);
var71 = var73;
varonce70 = var71;
}
((struct instance_standard__NativeArray*)var69)->values[0]=var71;
if (likely(varonce74!=NULL)) {
var75 = varonce74;
} else {
var76 = ")>>2)";
var77 = standard___standard__NativeString___to_s_with_length(var76, 5l);
var75 = var77;
varonce74 = var75;
}
((struct instance_standard__NativeArray*)var69)->values[2]=var75;
} else {
var69 = varonce68;
varonce68 = NULL;
}
{
var78 = ((val*(*)(val* self))(var_value->class->vft[COLOR_standard__string__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var69)->values[1]=var78;
{
var79 = ((val*(*)(val* self))(var69->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var69); /* native_to_s on <var69:NativeArray[String]>*/
}
varonce68 = var69;
{
var80 = nit___nit__AbstractCompilerVisitor___new_expr(self, var79, var_mtype);
}
var = var80;
goto RET_LABEL;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1201);
fatal_exit(1);
}
}
}
} else {
}
if (unlikely(varonce81==NULL)) {
var82 = NEW_standard__NativeArray(9l, &type_standard__NativeArray__standard__String);
if (likely(varonce83!=NULL)) {
var84 = varonce83;
} else {
var85 = "((struct instance_";
var86 = standard___standard__NativeString___to_s_with_length(var85, 18l);
var84 = var86;
varonce83 = var84;
}
((struct instance_standard__NativeArray*)var82)->values[0]=var84;
if (likely(varonce87!=NULL)) {
var88 = varonce87;
} else {
var89 = "*)";
var90 = standard___standard__NativeString___to_s_with_length(var89, 2l);
var88 = var90;
varonce87 = var88;
}
((struct instance_standard__NativeArray*)var82)->values[2]=var88;
if (likely(varonce91!=NULL)) {
var92 = varonce91;
} else {
var93 = ")->value; /* autounbox from ";
var94 = standard___standard__NativeString___to_s_with_length(var93, 28l);
var92 = var94;
varonce91 = var92;
}
((struct instance_standard__NativeArray*)var82)->values[4]=var92;
if (likely(varonce95!=NULL)) {
var96 = varonce95;
} else {
var97 = " to ";
var98 = standard___standard__NativeString___to_s_with_length(var97, 4l);
var96 = var98;
varonce95 = var96;
}
((struct instance_standard__NativeArray*)var82)->values[6]=var96;
if (likely(varonce99!=NULL)) {
var100 = varonce99;
} else {
var101 = " */";
var102 = standard___standard__NativeString___to_s_with_length(var101, 3l);
var100 = var102;
varonce99 = var100;
}
((struct instance_standard__NativeArray*)var82)->values[8]=var100;
} else {
var82 = varonce81;
varonce81 = NULL;
}
{
var103 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MType>*/
}
((struct instance_standard__NativeArray*)var82)->values[1]=var103;
{
var104 = ((val*(*)(val* self))(var_value->class->vft[COLOR_standard__string__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var82)->values[3]=var104;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var107 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var107 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var105 = var107;
RET_LABEL106:(void)0;
}
}
{
var108 = ((val*(*)(val* self))(var105->class->vft[COLOR_standard__string__Object__to_s]))(var105); /* to_s on <var105:MType>*/
}
((struct instance_standard__NativeArray*)var82)->values[5]=var108;
{
var109 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_standard__NativeArray*)var82)->values[7]=var109;
{
var110 = ((val*(*)(val* self))(var82->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var82); /* native_to_s on <var82:NativeArray[String]>*/
}
varonce81 = var82;
{
var111 = nit___nit__AbstractCompilerVisitor___new_expr(self, var110, var_mtype);
}
var = var111;
goto RET_LABEL;
} else {
{
var112 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nit__abstract_compiler__MType__is_c_primitive]))(var_mtype); /* is_c_primitive on <var_mtype:MType>*/
}
var113 = !var112;
if (var113){
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var116 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var116 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var114 = var116;
RET_LABEL115:(void)0;
}
}
{
{ /* Inline separate_compiler#MType#is_tagged (var114) on <var114:MType> */
var119 = var114->attrs[COLOR_nit__separate_compiler__MType___is_tagged].s; /* _is_tagged on <var114:MType> */
var117 = var119;
RET_LABEL118:(void)0;
}
}
if (var117){
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var122 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var122 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var120 = var122;
RET_LABEL121:(void)0;
}
}
{
var123 = ((val*(*)(val* self))(var120->class->vft[COLOR_nit__model_base__MEntity__name]))(var120); /* name on <var120:MType>*/
}
if (likely(varonce124!=NULL)) {
var125 = varonce124;
} else {
var126 = "Int";
var127 = standard___standard__NativeString___to_s_with_length(var126, 3l);
var125 = var127;
varonce124 = var125;
}
{
var128 = ((short int(*)(val* self, val* p0))(var123->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var123, var125); /* == on <var123:String>*/
}
if (var128){
if (unlikely(varonce129==NULL)) {
var130 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce131!=NULL)) {
var132 = varonce131;
} else {
var133 = "(val*)(";
var134 = standard___standard__NativeString___to_s_with_length(var133, 7l);
var132 = var134;
varonce131 = var132;
}
((struct instance_standard__NativeArray*)var130)->values[0]=var132;
if (likely(varonce135!=NULL)) {
var136 = varonce135;
} else {
var137 = "<<2|1)";
var138 = standard___standard__NativeString___to_s_with_length(var137, 6l);
var136 = var138;
varonce135 = var136;
}
((struct instance_standard__NativeArray*)var130)->values[2]=var136;
} else {
var130 = varonce129;
varonce129 = NULL;
}
{
var139 = ((val*(*)(val* self))(var_value->class->vft[COLOR_standard__string__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var130)->values[1]=var139;
{
var140 = ((val*(*)(val* self))(var130->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var130); /* native_to_s on <var130:NativeArray[String]>*/
}
varonce129 = var130;
{
var141 = nit___nit__AbstractCompilerVisitor___new_expr(self, var140, var_mtype);
}
var = var141;
goto RET_LABEL;
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var144 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var144 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var142 = var144;
RET_LABEL143:(void)0;
}
}
{
var145 = ((val*(*)(val* self))(var142->class->vft[COLOR_nit__model_base__MEntity__name]))(var142); /* name on <var142:MType>*/
}
if (likely(varonce146!=NULL)) {
var147 = varonce146;
} else {
var148 = "Char";
var149 = standard___standard__NativeString___to_s_with_length(var148, 4l);
var147 = var149;
varonce146 = var147;
}
{
var150 = ((short int(*)(val* self, val* p0))(var145->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var145, var147); /* == on <var145:String>*/
}
if (var150){
if (unlikely(varonce151==NULL)) {
var152 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce153!=NULL)) {
var154 = varonce153;
} else {
var155 = "(val*)((long)(";
var156 = standard___standard__NativeString___to_s_with_length(var155, 14l);
var154 = var156;
varonce153 = var154;
}
((struct instance_standard__NativeArray*)var152)->values[0]=var154;
if (likely(varonce157!=NULL)) {
var158 = varonce157;
} else {
var159 = ")<<2|2)";
var160 = standard___standard__NativeString___to_s_with_length(var159, 7l);
var158 = var160;
varonce157 = var158;
}
((struct instance_standard__NativeArray*)var152)->values[2]=var158;
} else {
var152 = varonce151;
varonce151 = NULL;
}
{
var161 = ((val*(*)(val* self))(var_value->class->vft[COLOR_standard__string__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var152)->values[1]=var161;
{
var162 = ((val*(*)(val* self))(var152->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var152); /* native_to_s on <var152:NativeArray[String]>*/
}
varonce151 = var152;
{
var163 = nit___nit__AbstractCompilerVisitor___new_expr(self, var162, var_mtype);
}
var = var163;
goto RET_LABEL;
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var166 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var166 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var164 = var166;
RET_LABEL165:(void)0;
}
}
{
var167 = ((val*(*)(val* self))(var164->class->vft[COLOR_nit__model_base__MEntity__name]))(var164); /* name on <var164:MType>*/
}
if (likely(varonce168!=NULL)) {
var169 = varonce168;
} else {
var170 = "Bool";
var171 = standard___standard__NativeString___to_s_with_length(var170, 4l);
var169 = var171;
varonce168 = var169;
}
{
var172 = ((short int(*)(val* self, val* p0))(var167->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var167, var169); /* == on <var167:String>*/
}
if (var172){
if (unlikely(varonce173==NULL)) {
var174 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce175!=NULL)) {
var176 = varonce175;
} else {
var177 = "(val*)((long)(";
var178 = standard___standard__NativeString___to_s_with_length(var177, 14l);
var176 = var178;
varonce175 = var176;
}
((struct instance_standard__NativeArray*)var174)->values[0]=var176;
if (likely(varonce179!=NULL)) {
var180 = varonce179;
} else {
var181 = ")<<2|3)";
var182 = standard___standard__NativeString___to_s_with_length(var181, 7l);
var180 = var182;
varonce179 = var180;
}
((struct instance_standard__NativeArray*)var174)->values[2]=var180;
} else {
var174 = varonce173;
varonce173 = NULL;
}
{
var183 = ((val*(*)(val* self))(var_value->class->vft[COLOR_standard__string__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var174)->values[1]=var183;
{
var184 = ((val*(*)(val* self))(var174->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var174); /* native_to_s on <var174:NativeArray[String]>*/
}
varonce173 = var174;
{
var185 = nit___nit__AbstractCompilerVisitor___new_expr(self, var184, var_mtype);
}
var = var185;
goto RET_LABEL;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1214);
fatal_exit(1);
}
}
}
} else {
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var188 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var188 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var186 = var188;
RET_LABEL187:(void)0;
}
}
/* <var186:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var186->type->table_size) {
var189 = 0;
} else {
var189 = var186->type->type_table[cltype] == idtype;
}
if (unlikely(!var189)) {
var_class_name = var186 == NULL ? "null" : var186->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1217);
fatal_exit(1);
}
var_valtype = var186;
/* <var_mtype:MType> isa MClassType */
cltype193 = type_nit__MClassType.color;
idtype194 = type_nit__MClassType.id;
if(cltype193 >= var_mtype->type->table_size) {
var192 = 0;
} else {
var192 = var_mtype->type->type_table[cltype193] == idtype194;
}
var_195 = var192;
if (var192){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var198 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var198 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var196 = var198;
RET_LABEL197:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var196) on <var196:MClass> */
var201 = var196->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var196:MClass> */
if (unlikely(var201 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 436);
fatal_exit(1);
}
var199 = var201;
RET_LABEL200:(void)0;
}
}
var202 = glob_sys;
{
var203 = nit__model___standard__Sys___extern_kind(var202);
}
{
{ /* Inline kernel#Object#== (var199,var203) on <var199:MClassKind> */
var_other = var203;
{
{ /* Inline kernel#Object#is_same_instance (var199,var_other) on <var199:MClassKind> */
var208 = var199 == var_other;
var206 = var208;
goto RET_LABEL207;
RET_LABEL207:(void)0;
}
}
var204 = var206;
goto RET_LABEL205;
RET_LABEL205:(void)0;
}
}
var191 = var204;
} else {
var191 = var_195;
}
var_209 = var191;
if (var191){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var212 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var212 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var210 = var212;
RET_LABEL211:(void)0;
}
}
{
{ /* Inline model#MClass#name (var210) on <var210:MClass> */
var215 = var210->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var210:MClass> */
if (unlikely(var215 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
fatal_exit(1);
}
var213 = var215;
RET_LABEL214:(void)0;
}
}
if (likely(varonce216!=NULL)) {
var217 = varonce216;
} else {
var218 = "NativeString";
var219 = standard___standard__NativeString___to_s_with_length(var218, 12l);
var217 = var219;
varonce216 = var217;
}
{
{ /* Inline kernel#Object#!= (var213,var217) on <var213:String> */
var_other222 = var217;
{
var223 = ((short int(*)(val* self, val* p0))(var213->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var213, var_other222); /* == on <var213:String>*/
}
var224 = !var223;
var220 = var224;
goto RET_LABEL221;
RET_LABEL221:(void)0;
}
}
var190 = var220;
} else {
var190 = var_209;
}
if (var190){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var227 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var227 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var225 = var227;
RET_LABEL226:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var225) on <var225:AbstractCompiler(SeparateCompiler)> */
var230 = var225->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var225:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var230 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 515);
fatal_exit(1);
}
var228 = var230;
RET_LABEL229:(void)0;
}
}
{
var231 = nit__model___MModule___pointer_type(var228);
}
var_valtype = var231;
} else {
}
{
var232 = nit___nit__AbstractCompilerVisitor___new_var(self, var_mtype);
}
var_res = var232;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var236 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var236 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var234 = var236;
RET_LABEL235:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#runtime_type_analysis (var234) on <var234:AbstractCompiler(SeparateCompiler)> */
var239 = var234->attrs[COLOR_nit__separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <var234:AbstractCompiler(SeparateCompiler)> */
var237 = var239;
RET_LABEL238:(void)0;
}
}
if (var237 == NULL) {
var240 = 0; /* is null */
} else {
var240 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var237,((val*)NULL)) on <var237:nullable RapidTypeAnalysis> */
var_other222 = ((val*)NULL);
{
var243 = ((short int(*)(val* self, val* p0))(var237->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var237, var_other222); /* == on <var237:nullable RapidTypeAnalysis(RapidTypeAnalysis)>*/
}
var244 = !var243;
var241 = var244;
goto RET_LABEL242;
RET_LABEL242:(void)0;
}
var240 = var241;
}
var_245 = var240;
if (var240){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var248 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var248 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var246 = var248;
RET_LABEL247:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#runtime_type_analysis (var246) on <var246:AbstractCompiler(SeparateCompiler)> */
var251 = var246->attrs[COLOR_nit__separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <var246:AbstractCompiler(SeparateCompiler)> */
var249 = var251;
RET_LABEL250:(void)0;
}
}
if (var249 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1222);
fatal_exit(1);
} else {
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (var249) on <var249:nullable RapidTypeAnalysis> */
if (unlikely(var249 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 60);
fatal_exit(1);
}
var254 = var249->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <var249:nullable RapidTypeAnalysis> */
if (unlikely(var254 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 60);
fatal_exit(1);
}
var252 = var254;
RET_LABEL253:(void)0;
}
}
{
var255 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var252, var_valtype);
}
var256 = !var255;
var233 = var256;
} else {
var233 = var_245;
}
if (var233){
if (unlikely(varonce257==NULL)) {
var258 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce259!=NULL)) {
var260 = varonce259;
} else {
var261 = "/*no autobox from ";
var262 = standard___standard__NativeString___to_s_with_length(var261, 18l);
var260 = var262;
varonce259 = var260;
}
((struct instance_standard__NativeArray*)var258)->values[0]=var260;
if (likely(varonce263!=NULL)) {
var264 = varonce263;
} else {
var265 = " to ";
var266 = standard___standard__NativeString___to_s_with_length(var265, 4l);
var264 = var266;
varonce263 = var264;
}
((struct instance_standard__NativeArray*)var258)->values[2]=var264;
if (likely(varonce267!=NULL)) {
var268 = varonce267;
} else {
var269 = ": ";
var270 = standard___standard__NativeString___to_s_with_length(var269, 2l);
var268 = var270;
varonce267 = var268;
}
((struct instance_standard__NativeArray*)var258)->values[4]=var268;
if (likely(varonce271!=NULL)) {
var272 = varonce271;
} else {
var273 = " is not live! */";
var274 = standard___standard__NativeString___to_s_with_length(var273, 16l);
var272 = var274;
varonce271 = var272;
}
((struct instance_standard__NativeArray*)var258)->values[6]=var272;
} else {
var258 = varonce257;
varonce257 = NULL;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var277 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var277 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var275 = var277;
RET_LABEL276:(void)0;
}
}
{
var278 = ((val*(*)(val* self))(var275->class->vft[COLOR_standard__string__Object__to_s]))(var275); /* to_s on <var275:MType>*/
}
((struct instance_standard__NativeArray*)var258)->values[1]=var278;
{
var279 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_standard__NativeArray*)var258)->values[3]=var279;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var282 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var282 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var280 = var282;
RET_LABEL281:(void)0;
}
}
{
var283 = ((val*(*)(val* self))(var280->class->vft[COLOR_standard__string__Object__to_s]))(var280); /* to_s on <var280:MType>*/
}
((struct instance_standard__NativeArray*)var258)->values[5]=var283;
{
var284 = ((val*(*)(val* self))(var258->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var258); /* native_to_s on <var258:NativeArray[String]>*/
}
varonce257 = var258;
{
nit___nit__AbstractCompilerVisitor___add(self, var284); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (likely(varonce285!=NULL)) {
var286 = varonce285;
} else {
var287 = "PRINT_ERROR(\"Dead code executed!\\n\"); fatal_exit(1);";
var288 = standard___standard__NativeString___to_s_with_length(var287, 52l);
var286 = var288;
varonce285 = var286;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var286); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
if (unlikely(varonce289==NULL)) {
var290 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce291!=NULL)) {
var292 = varonce291;
} else {
var293 = "BOX_";
var294 = standard___standard__NativeString___to_s_with_length(var293, 4l);
var292 = var294;
varonce291 = var292;
}
((struct instance_standard__NativeArray*)var290)->values[0]=var292;
} else {
var290 = varonce289;
varonce289 = NULL;
}
{
var295 = ((val*(*)(val* self))(var_valtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_valtype); /* c_name on <var_valtype:MClassType>*/
}
((struct instance_standard__NativeArray*)var290)->values[1]=var295;
{
var296 = ((val*(*)(val* self))(var290->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var290); /* native_to_s on <var290:NativeArray[String]>*/
}
varonce289 = var290;
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var296); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce297==NULL)) {
var298 = NEW_standard__NativeArray(10l, &type_standard__NativeArray__standard__String);
if (likely(varonce299!=NULL)) {
var300 = varonce299;
} else {
var301 = " = BOX_";
var302 = standard___standard__NativeString___to_s_with_length(var301, 7l);
var300 = var302;
varonce299 = var300;
}
((struct instance_standard__NativeArray*)var298)->values[1]=var300;
if (likely(varonce303!=NULL)) {
var304 = varonce303;
} else {
var305 = "(";
var306 = standard___standard__NativeString___to_s_with_length(var305, 1l);
var304 = var306;
varonce303 = var304;
}
((struct instance_standard__NativeArray*)var298)->values[3]=var304;
if (likely(varonce307!=NULL)) {
var308 = varonce307;
} else {
var309 = "); /* autobox from ";
var310 = standard___standard__NativeString___to_s_with_length(var309, 19l);
var308 = var310;
varonce307 = var308;
}
((struct instance_standard__NativeArray*)var298)->values[5]=var308;
if (likely(varonce311!=NULL)) {
var312 = varonce311;
} else {
var313 = " to ";
var314 = standard___standard__NativeString___to_s_with_length(var313, 4l);
var312 = var314;
varonce311 = var312;
}
((struct instance_standard__NativeArray*)var298)->values[7]=var312;
if (likely(varonce315!=NULL)) {
var316 = varonce315;
} else {
var317 = " */";
var318 = standard___standard__NativeString___to_s_with_length(var317, 3l);
var316 = var318;
varonce315 = var316;
}
((struct instance_standard__NativeArray*)var298)->values[9]=var316;
} else {
var298 = varonce297;
varonce297 = NULL;
}
{
var319 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var298)->values[0]=var319;
{
var320 = ((val*(*)(val* self))(var_valtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_valtype); /* c_name on <var_valtype:MClassType>*/
}
((struct instance_standard__NativeArray*)var298)->values[2]=var320;
{
var321 = ((val*(*)(val* self))(var_value->class->vft[COLOR_standard__string__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var298)->values[4]=var321;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var324 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var324 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var322 = var324;
RET_LABEL323:(void)0;
}
}
{
var325 = ((val*(*)(val* self))(var322->class->vft[COLOR_standard__string__Object__to_s]))(var322); /* to_s on <var322:MType>*/
}
((struct instance_standard__NativeArray*)var298)->values[6]=var325;
{
var326 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_standard__NativeArray*)var298)->values[8]=var326;
{
var327 = ((val*(*)(val* self))(var298->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var298); /* native_to_s on <var298:NativeArray[String]>*/
}
varonce297 = var298;
{
nit___nit__AbstractCompilerVisitor___add(self, var327); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var333 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var333 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var331 = var333;
RET_LABEL332:(void)0;
}
}
{
var334 = ((val*(*)(val* self))(var331->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var331); /* ctype on <var331:MType>*/
}
if (likely(varonce335!=NULL)) {
var336 = varonce335;
} else {
var337 = "void*";
var338 = standard___standard__NativeString___to_s_with_length(var337, 5l);
var336 = var338;
varonce335 = var336;
}
{
var339 = ((short int(*)(val* self, val* p0))(var334->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var334, var336); /* == on <var334:String>*/
}
var_340 = var339;
if (var339){
{
var341 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var_mtype); /* ctype on <var_mtype:MType>*/
}
if (likely(varonce342!=NULL)) {
var343 = varonce342;
} else {
var344 = "void*";
var345 = standard___standard__NativeString___to_s_with_length(var344, 5l);
var343 = var345;
varonce342 = var343;
}
{
var346 = ((short int(*)(val* self, val* p0))(var341->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var341, var343); /* == on <var341:String>*/
}
var330 = var346;
} else {
var330 = var_340;
}
var_347 = var330;
if (var330){
var329 = var_347;
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var351 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var351 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var349 = var351;
RET_LABEL350:(void)0;
}
}
{
var352 = ((val*(*)(val* self))(var349->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var349); /* ctype on <var349:MType>*/
}
if (likely(varonce353!=NULL)) {
var354 = varonce353;
} else {
var355 = "char*";
var356 = standard___standard__NativeString___to_s_with_length(var355, 5l);
var354 = var356;
varonce353 = var354;
}
{
var357 = ((short int(*)(val* self, val* p0))(var352->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var352, var354); /* == on <var352:String>*/
}
var_358 = var357;
if (var357){
{
var359 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var_mtype); /* ctype on <var_mtype:MType>*/
}
if (likely(varonce360!=NULL)) {
var361 = varonce360;
} else {
var362 = "void*";
var363 = standard___standard__NativeString___to_s_with_length(var362, 5l);
var361 = var363;
varonce360 = var361;
}
{
var364 = ((short int(*)(val* self, val* p0))(var359->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var359, var361); /* == on <var359:String>*/
}
var348 = var364;
} else {
var348 = var_358;
}
var329 = var348;
}
var_365 = var329;
if (var329){
var328 = var_365;
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var369 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var369 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var367 = var369;
RET_LABEL368:(void)0;
}
}
{
var370 = ((val*(*)(val* self))(var367->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var367); /* ctype on <var367:MType>*/
}
if (likely(varonce371!=NULL)) {
var372 = varonce371;
} else {
var373 = "void*";
var374 = standard___standard__NativeString___to_s_with_length(var373, 5l);
var372 = var374;
varonce371 = var372;
}
{
var375 = ((short int(*)(val* self, val* p0))(var370->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var370, var372); /* == on <var370:String>*/
}
var_376 = var375;
if (var375){
{
var377 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var_mtype); /* ctype on <var_mtype:MType>*/
}
if (likely(varonce378!=NULL)) {
var379 = varonce378;
} else {
var380 = "char*";
var381 = standard___standard__NativeString___to_s_with_length(var380, 5l);
var379 = var381;
varonce378 = var379;
}
{
var382 = ((short int(*)(val* self, val* p0))(var377->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var377, var379); /* == on <var377:String>*/
}
var366 = var382;
} else {
var366 = var_376;
}
var328 = var366;
}
if (var328){
var = var_value;
goto RET_LABEL;
} else {
{
var383 = nit___nit__AbstractCompilerVisitor___new_var(self, var_mtype);
}
var_res384 = var383;
if (unlikely(varonce385==NULL)) {
var386 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce387!=NULL)) {
var388 = varonce387;
} else {
var389 = "/* ";
var390 = standard___standard__NativeString___to_s_with_length(var389, 3l);
var388 = var390;
varonce387 = var388;
}
((struct instance_standard__NativeArray*)var386)->values[0]=var388;
if (likely(varonce391!=NULL)) {
var392 = varonce391;
} else {
var393 = " left unintialized (cannot convert ";
var394 = standard___standard__NativeString___to_s_with_length(var393, 35l);
var392 = var394;
varonce391 = var392;
}
((struct instance_standard__NativeArray*)var386)->values[2]=var392;
if (likely(varonce395!=NULL)) {
var396 = varonce395;
} else {
var397 = " to ";
var398 = standard___standard__NativeString___to_s_with_length(var397, 4l);
var396 = var398;
varonce395 = var396;
}
((struct instance_standard__NativeArray*)var386)->values[4]=var396;
if (likely(varonce399!=NULL)) {
var400 = varonce399;
} else {
var401 = ") */";
var402 = standard___standard__NativeString___to_s_with_length(var401, 4l);
var400 = var402;
varonce399 = var400;
}
((struct instance_standard__NativeArray*)var386)->values[6]=var400;
} else {
var386 = varonce385;
varonce385 = NULL;
}
{
var403 = ((val*(*)(val* self))(var_res384->class->vft[COLOR_standard__string__Object__to_s]))(var_res384); /* to_s on <var_res384:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var386)->values[1]=var403;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var406 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var406 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var404 = var406;
RET_LABEL405:(void)0;
}
}
{
var407 = ((val*(*)(val* self))(var404->class->vft[COLOR_standard__string__Object__to_s]))(var404); /* to_s on <var404:MType>*/
}
((struct instance_standard__NativeArray*)var386)->values[3]=var407;
{
var408 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_standard__NativeArray*)var386)->values[5]=var408;
{
var409 = ((val*(*)(val* self))(var386->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var386); /* native_to_s on <var386:NativeArray[String]>*/
}
varonce385 = var386;
{
nit___nit__AbstractCompilerVisitor___add(self, var409); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce410==NULL)) {
var411 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce412!=NULL)) {
var413 = varonce412;
} else {
var414 = "PRINT_ERROR(\"Cast error: Cannot cast %s to %s.\\n\", \"";
var415 = standard___standard__NativeString___to_s_with_length(var414, 52l);
var413 = var415;
varonce412 = var413;
}
((struct instance_standard__NativeArray*)var411)->values[0]=var413;
if (likely(varonce416!=NULL)) {
var417 = varonce416;
} else {
var418 = "\", \"";
var419 = standard___standard__NativeString___to_s_with_length(var418, 4l);
var417 = var419;
varonce416 = var417;
}
((struct instance_standard__NativeArray*)var411)->values[2]=var417;
if (likely(varonce420!=NULL)) {
var421 = varonce420;
} else {
var422 = "\"); fatal_exit(1);";
var423 = standard___standard__NativeString___to_s_with_length(var422, 18l);
var421 = var423;
varonce420 = var421;
}
((struct instance_standard__NativeArray*)var411)->values[4]=var421;
} else {
var411 = varonce410;
varonce410 = NULL;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var426 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var426 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var424 = var426;
RET_LABEL425:(void)0;
}
}
{
var427 = ((val*(*)(val* self))(var424->class->vft[COLOR_standard__string__Object__to_s]))(var424); /* to_s on <var424:MType>*/
}
((struct instance_standard__NativeArray*)var411)->values[1]=var427;
{
var428 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_standard__NativeArray*)var411)->values[3]=var428;
{
var429 = ((val*(*)(val* self))(var411->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var411); /* native_to_s on <var411:NativeArray[String]>*/
}
varonce410 = var411;
{
nit___nit__AbstractCompilerVisitor___add(self, var429); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res384;
goto RET_LABEL;
}
}
}
}
}
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#unbox_extern for (self: SeparateCompilerVisitor, RuntimeVariable, MType): RuntimeVariable */
val* nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__unbox_extern(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var4 /* : MClass */;
val* var6 /* : MClass */;
val* var7 /* : MClassKind */;
val* var9 /* : MClassKind */;
val* var10 /* : Sys */;
val* var11 /* : MClassKind */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var_17 /* var : Bool */;
val* var18 /* : MClass */;
val* var20 /* : MClass */;
val* var21 /* : String */;
val* var23 /* : String */;
static val* varonce;
val* var24 /* : String */;
char* var25 /* : NativeString */;
val* var26 /* : FlatString */;
short int var27 /* : Bool */;
val* var_other29 /* var other: nullable Object */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var32 /* : AbstractCompiler */;
val* var34 /* : AbstractCompiler */;
val* var35 /* : MModule */;
val* var37 /* : MModule */;
val* var38 /* : MClassType */;
val* var_pointer_type /* var pointer_type: MClassType */;
val* var39 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var41 /* : NativeArray[String] */;
static val* varonce40;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : FlatString */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
val* var49 /* : FlatString */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
val* var53 /* : FlatString */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
val* var57 /* : FlatString */;
val* var58 /* : String */;
val* var59 /* : String */;
val* var60 /* : String */;
val* var61 /* : MType */;
val* var63 /* : MType */;
val* var64 /* : String */;
val* var65 /* : String */;
var_value = p0;
var_mtype = p1;
/* <var_mtype:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var3 = 0;
} else {
var3 = var_mtype->type->type_table[cltype] == idtype;
}
var_ = var3;
if (var3){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var6 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var4) on <var4:MClass> */
var9 = var4->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var4:MClass> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 436);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var10 = glob_sys;
{
var11 = nit__model___standard__Sys___extern_kind(var10);
}
{
{ /* Inline kernel#Object#== (var7,var11) on <var7:MClassKind> */
var_other = var11;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:MClassKind> */
var16 = var7 == var_other;
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
var2 = var12;
} else {
var2 = var_;
}
var_17 = var2;
if (var2){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var20 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline model#MClass#name (var18) on <var18:MClass> */
var23 = var18->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var18:MClass> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (likely(varonce!=NULL)) {
var24 = varonce;
} else {
var25 = "NativeString";
var26 = standard___standard__NativeString___to_s_with_length(var25, 12l);
var24 = var26;
varonce = var24;
}
{
{ /* Inline kernel#Object#!= (var21,var24) on <var21:String> */
var_other29 = var24;
{
var30 = ((short int(*)(val* self, val* p0))(var21->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var21, var_other29); /* == on <var21:String>*/
}
var31 = !var30;
var27 = var31;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var1 = var27;
} else {
var1 = var_17;
}
if (var1){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var34 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var32) on <var32:AbstractCompiler(SeparateCompiler)> */
var37 = var32->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var32:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 515);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
var38 = nit__model___MModule___pointer_type(var35);
}
var_pointer_type = var38;
{
var39 = nit___nit__AbstractCompilerVisitor___new_var_extern(self, var_mtype);
}
var_res = var39;
if (unlikely(varonce40==NULL)) {
var41 = NEW_standard__NativeArray(8l, &type_standard__NativeArray__standard__String);
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = " = ((struct instance_";
var45 = standard___standard__NativeString___to_s_with_length(var44, 21l);
var43 = var45;
varonce42 = var43;
}
((struct instance_standard__NativeArray*)var41)->values[1]=var43;
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = "*)";
var49 = standard___standard__NativeString___to_s_with_length(var48, 2l);
var47 = var49;
varonce46 = var47;
}
((struct instance_standard__NativeArray*)var41)->values[3]=var47;
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = ")->value; /* unboxing ";
var53 = standard___standard__NativeString___to_s_with_length(var52, 22l);
var51 = var53;
varonce50 = var51;
}
((struct instance_standard__NativeArray*)var41)->values[5]=var51;
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = " */";
var57 = standard___standard__NativeString___to_s_with_length(var56, 3l);
var55 = var57;
varonce54 = var55;
}
((struct instance_standard__NativeArray*)var41)->values[7]=var55;
} else {
var41 = varonce40;
varonce40 = NULL;
}
{
var58 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var41)->values[0]=var58;
{
var59 = ((val*(*)(val* self))(var_pointer_type->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_pointer_type); /* c_name on <var_pointer_type:MClassType>*/
}
((struct instance_standard__NativeArray*)var41)->values[2]=var59;
{
var60 = ((val*(*)(val* self))(var_value->class->vft[COLOR_standard__string__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var41)->values[4]=var60;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var63 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
var64 = ((val*(*)(val* self))(var61->class->vft[COLOR_standard__string__Object__to_s]))(var61); /* to_s on <var61:MType>*/
}
((struct instance_standard__NativeArray*)var41)->values[6]=var64;
{
var65 = ((val*(*)(val* self))(var41->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var41); /* native_to_s on <var41:NativeArray[String]>*/
}
varonce40 = var41;
{
nit___nit__AbstractCompilerVisitor___add(self, var65); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
var = var_value;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#box_extern for (self: SeparateCompilerVisitor, RuntimeVariable, MType): RuntimeVariable */
val* nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__box_extern(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var4 /* : MClass */;
val* var6 /* : MClass */;
val* var7 /* : MClassKind */;
val* var9 /* : MClassKind */;
val* var10 /* : Sys */;
val* var11 /* : MClassKind */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var_17 /* var : Bool */;
val* var18 /* : MClass */;
val* var20 /* : MClass */;
val* var21 /* : String */;
val* var23 /* : String */;
static val* varonce;
val* var24 /* : String */;
char* var25 /* : NativeString */;
val* var26 /* : FlatString */;
short int var27 /* : Bool */;
val* var_other29 /* var other: nullable Object */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var32 /* : AbstractCompiler */;
val* var34 /* : AbstractCompiler */;
val* var35 /* : MModule */;
val* var37 /* : MModule */;
val* var38 /* : MClassType */;
val* var_valtype /* var valtype: MClassType */;
val* var39 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
short int var40 /* : Bool */;
val* var41 /* : AbstractCompiler */;
val* var43 /* : AbstractCompiler */;
val* var44 /* : nullable RapidTypeAnalysis */;
val* var46 /* : nullable RapidTypeAnalysis */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
short int var_52 /* var : Bool */;
val* var53 /* : AbstractCompiler */;
val* var55 /* : AbstractCompiler */;
val* var56 /* : nullable RapidTypeAnalysis */;
val* var58 /* : nullable RapidTypeAnalysis */;
val* var59 /* : HashSet[MClassType] */;
val* var61 /* : HashSet[MClassType] */;
val* var62 /* : MType */;
val* var64 /* : MType */;
short int var65 /* : Bool */;
int cltype66;
int idtype67;
const char* var_class_name;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
val* var71 /* : NativeArray[String] */;
static val* varonce70;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
val* var75 /* : FlatString */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
val* var79 /* : FlatString */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
val* var83 /* : FlatString */;
val* var84 /* : MType */;
val* var86 /* : MType */;
val* var87 /* : String */;
val* var88 /* : MType */;
val* var90 /* : MType */;
val* var91 /* : String */;
val* var92 /* : String */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
val* var96 /* : FlatString */;
val* var98 /* : NativeArray[String] */;
static val* varonce97;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : NativeString */;
val* var102 /* : FlatString */;
val* var103 /* : String */;
val* var104 /* : String */;
val* var106 /* : NativeArray[String] */;
static val* varonce105;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
val* var110 /* : FlatString */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : NativeString */;
val* var114 /* : FlatString */;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : NativeString */;
val* var118 /* : FlatString */;
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : NativeString */;
val* var122 /* : FlatString */;
val* var123 /* : String */;
val* var124 /* : String */;
val* var125 /* : String */;
val* var126 /* : MType */;
val* var128 /* : MType */;
val* var129 /* : String */;
val* var130 /* : String */;
val* var132 /* : NativeArray[String] */;
static val* varonce131;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : NativeString */;
val* var136 /* : FlatString */;
val* var137 /* : String */;
val* var138 /* : String */;
val* var140 /* : NativeArray[String] */;
static val* varonce139;
static val* varonce141;
val* var142 /* : String */;
char* var143 /* : NativeString */;
val* var144 /* : FlatString */;
static val* varonce145;
val* var146 /* : String */;
char* var147 /* : NativeString */;
val* var148 /* : FlatString */;
val* var149 /* : String */;
val* var150 /* : String */;
val* var151 /* : String */;
val* var153 /* : NativeArray[String] */;
static val* varonce152;
static val* varonce154;
val* var155 /* : String */;
char* var156 /* : NativeString */;
val* var157 /* : FlatString */;
val* var158 /* : String */;
val* var159 /* : String */;
val* var161 /* : NativeArray[String] */;
static val* varonce160;
static val* varonce162;
val* var163 /* : String */;
char* var164 /* : NativeString */;
val* var165 /* : FlatString */;
static val* varonce166;
val* var167 /* : String */;
char* var168 /* : NativeString */;
val* var169 /* : FlatString */;
val* var170 /* : String */;
val* var171 /* : String */;
val* var172 /* : String */;
var_value = p0;
var_mtype = p1;
/* <var_mtype:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var3 = 0;
} else {
var3 = var_mtype->type->type_table[cltype] == idtype;
}
var_ = var3;
if (var3){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var6 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var4) on <var4:MClass> */
var9 = var4->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var4:MClass> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 436);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var10 = glob_sys;
{
var11 = nit__model___standard__Sys___extern_kind(var10);
}
{
{ /* Inline kernel#Object#== (var7,var11) on <var7:MClassKind> */
var_other = var11;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:MClassKind> */
var16 = var7 == var_other;
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
var2 = var12;
} else {
var2 = var_;
}
var_17 = var2;
if (var2){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var20 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline model#MClass#name (var18) on <var18:MClass> */
var23 = var18->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var18:MClass> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (likely(varonce!=NULL)) {
var24 = varonce;
} else {
var25 = "NativeString";
var26 = standard___standard__NativeString___to_s_with_length(var25, 12l);
var24 = var26;
varonce = var24;
}
{
{ /* Inline kernel#Object#!= (var21,var24) on <var21:String> */
var_other29 = var24;
{
var30 = ((short int(*)(val* self, val* p0))(var21->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var21, var_other29); /* == on <var21:String>*/
}
var31 = !var30;
var27 = var31;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var1 = var27;
} else {
var1 = var_17;
}
if (var1){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var34 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var32) on <var32:AbstractCompiler(SeparateCompiler)> */
var37 = var32->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var32:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 515);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
var38 = nit__model___MModule___pointer_type(var35);
}
var_valtype = var38;
{
var39 = nit___nit__AbstractCompilerVisitor___new_var(self, var_mtype);
}
var_res = var39;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var43 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#runtime_type_analysis (var41) on <var41:AbstractCompiler(SeparateCompiler)> */
var46 = var41->attrs[COLOR_nit__separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <var41:AbstractCompiler(SeparateCompiler)> */
var44 = var46;
RET_LABEL45:(void)0;
}
}
if (var44 == NULL) {
var47 = 0; /* is null */
} else {
var47 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var44,((val*)NULL)) on <var44:nullable RapidTypeAnalysis> */
var_other29 = ((val*)NULL);
{
var50 = ((short int(*)(val* self, val* p0))(var44->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var44, var_other29); /* == on <var44:nullable RapidTypeAnalysis(RapidTypeAnalysis)>*/
}
var51 = !var50;
var48 = var51;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
var47 = var48;
}
var_52 = var47;
if (var47){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var55 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#runtime_type_analysis (var53) on <var53:AbstractCompiler(SeparateCompiler)> */
var58 = var53->attrs[COLOR_nit__separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <var53:AbstractCompiler(SeparateCompiler)> */
var56 = var58;
RET_LABEL57:(void)0;
}
}
if (var56 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1262);
fatal_exit(1);
} else {
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (var56) on <var56:nullable RapidTypeAnalysis> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 60);
fatal_exit(1);
}
var61 = var56->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <var56:nullable RapidTypeAnalysis> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 60);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var64 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
/* <var62:MType> isa MClassType */
cltype66 = type_nit__MClassType.color;
idtype67 = type_nit__MClassType.id;
if(cltype66 >= var62->type->table_size) {
var65 = 0;
} else {
var65 = var62->type->type_table[cltype66] == idtype67;
}
if (unlikely(!var65)) {
var_class_name = var62 == NULL ? "null" : var62->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1262);
fatal_exit(1);
}
{
var68 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var59, var62);
}
var69 = !var68;
var40 = var69;
} else {
var40 = var_52;
}
if (var40){
if (unlikely(varonce70==NULL)) {
var71 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce72!=NULL)) {
var73 = varonce72;
} else {
var74 = "/*no boxing of ";
var75 = standard___standard__NativeString___to_s_with_length(var74, 15l);
var73 = var75;
varonce72 = var73;
}
((struct instance_standard__NativeArray*)var71)->values[0]=var73;
if (likely(varonce76!=NULL)) {
var77 = varonce76;
} else {
var78 = ": ";
var79 = standard___standard__NativeString___to_s_with_length(var78, 2l);
var77 = var79;
varonce76 = var77;
}
((struct instance_standard__NativeArray*)var71)->values[2]=var77;
if (likely(varonce80!=NULL)) {
var81 = varonce80;
} else {
var82 = " is not live! */";
var83 = standard___standard__NativeString___to_s_with_length(var82, 16l);
var81 = var83;
varonce80 = var81;
}
((struct instance_standard__NativeArray*)var71)->values[4]=var81;
} else {
var71 = varonce70;
varonce70 = NULL;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var86 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var86 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var84 = var86;
RET_LABEL85:(void)0;
}
}
{
var87 = ((val*(*)(val* self))(var84->class->vft[COLOR_standard__string__Object__to_s]))(var84); /* to_s on <var84:MType>*/
}
((struct instance_standard__NativeArray*)var71)->values[1]=var87;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var90 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var90 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var88 = var90;
RET_LABEL89:(void)0;
}
}
{
var91 = ((val*(*)(val* self))(var88->class->vft[COLOR_standard__string__Object__to_s]))(var88); /* to_s on <var88:MType>*/
}
((struct instance_standard__NativeArray*)var71)->values[3]=var91;
{
var92 = ((val*(*)(val* self))(var71->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var71); /* native_to_s on <var71:NativeArray[String]>*/
}
varonce70 = var71;
{
nit___nit__AbstractCompilerVisitor___add(self, var92); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (likely(varonce93!=NULL)) {
var94 = varonce93;
} else {
var95 = "PRINT_ERROR(\"Dead code executed!\\n\"); fatal_exit(1);";
var96 = standard___standard__NativeString___to_s_with_length(var95, 52l);
var94 = var96;
varonce93 = var94;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var94); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
if (unlikely(varonce97==NULL)) {
var98 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce99!=NULL)) {
var100 = varonce99;
} else {
var101 = "BOX_";
var102 = standard___standard__NativeString___to_s_with_length(var101, 4l);
var100 = var102;
varonce99 = var100;
}
((struct instance_standard__NativeArray*)var98)->values[0]=var100;
} else {
var98 = varonce97;
varonce97 = NULL;
}
{
var103 = ((val*(*)(val* self))(var_valtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_valtype); /* c_name on <var_valtype:MClassType>*/
}
((struct instance_standard__NativeArray*)var98)->values[1]=var103;
{
var104 = ((val*(*)(val* self))(var98->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var98); /* native_to_s on <var98:NativeArray[String]>*/
}
varonce97 = var98;
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var104); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce105==NULL)) {
var106 = NEW_standard__NativeArray(8l, &type_standard__NativeArray__standard__String);
if (likely(varonce107!=NULL)) {
var108 = varonce107;
} else {
var109 = " = BOX_";
var110 = standard___standard__NativeString___to_s_with_length(var109, 7l);
var108 = var110;
varonce107 = var108;
}
((struct instance_standard__NativeArray*)var106)->values[1]=var108;
if (likely(varonce111!=NULL)) {
var112 = varonce111;
} else {
var113 = "(";
var114 = standard___standard__NativeString___to_s_with_length(var113, 1l);
var112 = var114;
varonce111 = var112;
}
((struct instance_standard__NativeArray*)var106)->values[3]=var112;
if (likely(varonce115!=NULL)) {
var116 = varonce115;
} else {
var117 = "); /* boxing ";
var118 = standard___standard__NativeString___to_s_with_length(var117, 13l);
var116 = var118;
varonce115 = var116;
}
((struct instance_standard__NativeArray*)var106)->values[5]=var116;
if (likely(varonce119!=NULL)) {
var120 = varonce119;
} else {
var121 = " */";
var122 = standard___standard__NativeString___to_s_with_length(var121, 3l);
var120 = var122;
varonce119 = var120;
}
((struct instance_standard__NativeArray*)var106)->values[7]=var120;
} else {
var106 = varonce105;
varonce105 = NULL;
}
{
var123 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var106)->values[0]=var123;
{
var124 = ((val*(*)(val* self))(var_valtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_valtype); /* c_name on <var_valtype:MClassType>*/
}
((struct instance_standard__NativeArray*)var106)->values[2]=var124;
{
var125 = ((val*(*)(val* self))(var_value->class->vft[COLOR_standard__string__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var106)->values[4]=var125;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var128 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var128 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var126 = var128;
RET_LABEL127:(void)0;
}
}
{
var129 = ((val*(*)(val* self))(var126->class->vft[COLOR_standard__string__Object__to_s]))(var126); /* to_s on <var126:MType>*/
}
((struct instance_standard__NativeArray*)var106)->values[6]=var129;
{
var130 = ((val*(*)(val* self))(var106->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var106); /* native_to_s on <var106:NativeArray[String]>*/
}
varonce105 = var106;
{
nit___nit__AbstractCompilerVisitor___add(self, var130); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce131==NULL)) {
var132 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce133!=NULL)) {
var134 = varonce133;
} else {
var135 = "type_";
var136 = standard___standard__NativeString___to_s_with_length(var135, 5l);
var134 = var136;
varonce133 = var134;
}
((struct instance_standard__NativeArray*)var132)->values[0]=var134;
} else {
var132 = varonce131;
varonce131 = NULL;
}
{
var137 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MType(MClassType)>*/
}
((struct instance_standard__NativeArray*)var132)->values[1]=var137;
{
var138 = ((val*(*)(val* self))(var132->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var132); /* native_to_s on <var132:NativeArray[String]>*/
}
varonce131 = var132;
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var138); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce139==NULL)) {
var140 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce141!=NULL)) {
var142 = varonce141;
} else {
var143 = "->type = &type_";
var144 = standard___standard__NativeString___to_s_with_length(var143, 15l);
var142 = var144;
varonce141 = var142;
}
((struct instance_standard__NativeArray*)var140)->values[1]=var142;
if (likely(varonce145!=NULL)) {
var146 = varonce145;
} else {
var147 = ";";
var148 = standard___standard__NativeString___to_s_with_length(var147, 1l);
var146 = var148;
varonce145 = var146;
}
((struct instance_standard__NativeArray*)var140)->values[3]=var146;
} else {
var140 = varonce139;
varonce139 = NULL;
}
{
var149 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var140)->values[0]=var149;
{
var150 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MType(MClassType)>*/
}
((struct instance_standard__NativeArray*)var140)->values[2]=var150;
{
var151 = ((val*(*)(val* self))(var140->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var140); /* native_to_s on <var140:NativeArray[String]>*/
}
varonce139 = var140;
{
nit___nit__AbstractCompilerVisitor___add(self, var151); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce152==NULL)) {
var153 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce154!=NULL)) {
var155 = varonce154;
} else {
var156 = "class_";
var157 = standard___standard__NativeString___to_s_with_length(var156, 6l);
var155 = var157;
varonce154 = var155;
}
((struct instance_standard__NativeArray*)var153)->values[0]=var155;
} else {
var153 = varonce152;
varonce152 = NULL;
}
{
var158 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MType(MClassType)>*/
}
((struct instance_standard__NativeArray*)var153)->values[1]=var158;
{
var159 = ((val*(*)(val* self))(var153->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var153); /* native_to_s on <var153:NativeArray[String]>*/
}
varonce152 = var153;
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var159); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce160==NULL)) {
var161 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce162!=NULL)) {
var163 = varonce162;
} else {
var164 = "->class = &class_";
var165 = standard___standard__NativeString___to_s_with_length(var164, 17l);
var163 = var165;
varonce162 = var163;
}
((struct instance_standard__NativeArray*)var161)->values[1]=var163;
if (likely(varonce166!=NULL)) {
var167 = varonce166;
} else {
var168 = ";";
var169 = standard___standard__NativeString___to_s_with_length(var168, 1l);
var167 = var169;
varonce166 = var167;
}
((struct instance_standard__NativeArray*)var161)->values[3]=var167;
} else {
var161 = varonce160;
varonce160 = NULL;
}
{
var170 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var161)->values[0]=var170;
{
var171 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MType(MClassType)>*/
}
((struct instance_standard__NativeArray*)var161)->values[2]=var171;
{
var172 = ((val*(*)(val* self))(var161->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var161); /* native_to_s on <var161:NativeArray[String]>*/
}
varonce160 = var161;
{
nit___nit__AbstractCompilerVisitor___add(self, var172); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
var = var_value;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#extract_tag for (self: SeparateCompilerVisitor, RuntimeVariable): String */
val* nit___nit__SeparateCompilerVisitor___extract_tag(val* self, val* p0) {
val* var /* : String */;
val* var_value /* var value: RuntimeVariable */;
val* var1 /* : MType */;
val* var3 /* : MType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : NativeArray[String] */;
static val* varonce;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : FlatString */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : FlatString */;
val* var15 /* : String */;
val* var16 /* : String */;
var_value = p0;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var3 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((short int(*)(val* self))(var1->class->vft[COLOR_nit__abstract_compiler__MType__is_c_primitive]))(var1); /* is_c_primitive on <var1:MType>*/
}
var5 = !var4;
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1285);
fatal_exit(1);
}
if (unlikely(varonce==NULL)) {
var6 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "((long)";
var10 = standard___standard__NativeString___to_s_with_length(var9, 7l);
var8 = var10;
varonce7 = var8;
}
((struct instance_standard__NativeArray*)var6)->values[0]=var8;
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "&3)";
var14 = standard___standard__NativeString___to_s_with_length(var13, 3l);
var12 = var14;
varonce11 = var12;
}
((struct instance_standard__NativeArray*)var6)->values[2]=var12;
} else {
var6 = varonce;
varonce = NULL;
}
{
var15 = ((val*(*)(val* self))(var_value->class->vft[COLOR_standard__string__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var6)->values[1]=var15;
{
var16 = ((val*(*)(val* self))(var6->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce = var6;
var = var16;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#class_info for (self: SeparateCompilerVisitor, RuntimeVariable): String */
val* nit___nit__SeparateCompilerVisitor___class_info(val* self, val* p0) {
val* var /* : String */;
val* var_value /* var value: RuntimeVariable */;
val* var1 /* : MType */;
val* var3 /* : MType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
val* var8 /* : AbstractCompiler */;
val* var10 /* : AbstractCompiler */;
val* var11 /* : ModelBuilder */;
val* var13 /* : ModelBuilder */;
val* var14 /* : ToolContext */;
val* var16 /* : ToolContext */;
val* var17 /* : OptionBool */;
val* var19 /* : OptionBool */;
val* var20 /* : nullable Object */;
val* var22 /* : nullable Object */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : String */;
val* var_tag /* var tag: String */;
val* var26 /* : NativeArray[String] */;
static val* varonce;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
val* var30 /* : FlatString */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
val* var34 /* : FlatString */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
val* var38 /* : FlatString */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
val* var42 /* : FlatString */;
val* var43 /* : String */;
val* var44 /* : String */;
val* var46 /* : NativeArray[String] */;
static val* varonce45;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
val* var50 /* : FlatString */;
val* var51 /* : String */;
val* var52 /* : String */;
val* var53 /* : AbstractCompiler */;
val* var55 /* : AbstractCompiler */;
val* var56 /* : Set[MType] */;
val* var58 /* : Set[MType] */;
val* var59 /* : MType */;
val* var61 /* : MType */;
val* var63 /* : NativeArray[String] */;
static val* varonce62;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
val* var67 /* : FlatString */;
val* var68 /* : MType */;
val* var70 /* : MType */;
val* var71 /* : String */;
val* var72 /* : String */;
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
val* var83 /* : MType */;
val* var85 /* : MType */;
val* var86 /* : String */;
val* var87 /* : String */;
var_value = p0;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var3 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((short int(*)(val* self))(var1->class->vft[COLOR_nit__abstract_compiler__MType__is_c_primitive]))(var1); /* is_c_primitive on <var1:MType>*/
}
var5 = !var4;
if (var5){
{
var7 = nit___nit__SeparateCompilerVisitor___can_be_primitive(self, var_value);
}
var_ = var7;
if (var7){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var10 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var8) on <var8:AbstractCompiler(SeparateCompiler)> */
var13 = var8->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var8:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var11) on <var11:ModelBuilder> */
var16 = var11->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var11:ModelBuilder> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_no_tag_primitives (var14) on <var14:ToolContext> */
var19 = var14->attrs[COLOR_nit__separate_compiler__ToolContext___opt_no_tag_primitives].val; /* _opt_no_tag_primitives on <var14:ToolContext> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_tag_primitives");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 32);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline opts#Option#value (var17) on <var17:OptionBool> */
var22 = var17->attrs[COLOR_opts__Option___value].val; /* _value on <var17:OptionBool> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
var23 = (short int)((long)(var20)>>2);
var24 = !var23;
var6 = var24;
} else {
var6 = var_;
}
if (var6){
{
var25 = nit___nit__SeparateCompilerVisitor___extract_tag(self, var_value);
}
var_tag = var25;
if (unlikely(varonce==NULL)) {
var26 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "(";
var30 = standard___standard__NativeString___to_s_with_length(var29, 1l);
var28 = var30;
varonce27 = var28;
}
((struct instance_standard__NativeArray*)var26)->values[0]=var28;
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "?class_info[";
var34 = standard___standard__NativeString___to_s_with_length(var33, 12l);
var32 = var34;
varonce31 = var32;
}
((struct instance_standard__NativeArray*)var26)->values[2]=var32;
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "]:";
var38 = standard___standard__NativeString___to_s_with_length(var37, 2l);
var36 = var38;
varonce35 = var36;
}
((struct instance_standard__NativeArray*)var26)->values[4]=var36;
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = "->class)";
var42 = standard___standard__NativeString___to_s_with_length(var41, 8l);
var40 = var42;
varonce39 = var40;
}
((struct instance_standard__NativeArray*)var26)->values[6]=var40;
} else {
var26 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var26)->values[1]=var_tag;
((struct instance_standard__NativeArray*)var26)->values[3]=var_tag;
{
var43 = ((val*(*)(val* self))(var_value->class->vft[COLOR_standard__string__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var26)->values[5]=var43;
{
var44 = ((val*(*)(val* self))(var26->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var26); /* native_to_s on <var26:NativeArray[String]>*/
}
varonce = var26;
var = var44;
goto RET_LABEL;
} else {
}
if (unlikely(varonce45==NULL)) {
var46 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "->class";
var50 = standard___standard__NativeString___to_s_with_length(var49, 7l);
var48 = var50;
varonce47 = var48;
}
((struct instance_standard__NativeArray*)var46)->values[1]=var48;
} else {
var46 = varonce45;
varonce45 = NULL;
}
{
var51 = ((val*(*)(val* self))(var_value->class->vft[COLOR_standard__string__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var46)->values[0]=var51;
{
var52 = ((val*(*)(val* self))(var46->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var46); /* native_to_s on <var46:NativeArray[String]>*/
}
varonce45 = var46;
var = var52;
goto RET_LABEL;
} else {
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var55 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#undead_types (var53) on <var53:AbstractCompiler(SeparateCompiler)> */
var58 = var53->attrs[COLOR_nit__separate_compiler__SeparateCompiler___undead_types].val; /* _undead_types on <var53:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _undead_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 146);
fatal_exit(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var61 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
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
((void(*)(val* self, val* p0))((((long)var56&3)?class_info[((long)var56&3)]:var56->class)->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var56, var59); /* add on <var56:Set[MType]>*/
}
if (unlikely(varonce62==NULL)) {
var63 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = "class_";
var67 = standard___standard__NativeString___to_s_with_length(var66, 6l);
var65 = var67;
varonce64 = var65;
}
((struct instance_standard__NativeArray*)var63)->values[0]=var65;
} else {
var63 = varonce62;
varonce62 = NULL;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var70 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
var71 = ((val*(*)(val* self))(var68->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var68); /* c_name on <var68:MType>*/
}
((struct instance_standard__NativeArray*)var63)->values[1]=var71;
{
var72 = ((val*(*)(val* self))(var63->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var63); /* native_to_s on <var63:NativeArray[String]>*/
}
varonce62 = var63;
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var72); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce73==NULL)) {
var74 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = "(&class_";
var78 = standard___standard__NativeString___to_s_with_length(var77, 8l);
var76 = var78;
varonce75 = var76;
}
((struct instance_standard__NativeArray*)var74)->values[0]=var76;
if (likely(varonce79!=NULL)) {
var80 = varonce79;
} else {
var81 = ")";
var82 = standard___standard__NativeString___to_s_with_length(var81, 1l);
var80 = var82;
varonce79 = var80;
}
((struct instance_standard__NativeArray*)var74)->values[2]=var80;
} else {
var74 = varonce73;
varonce73 = NULL;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var85 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var85 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var83 = var85;
RET_LABEL84:(void)0;
}
}
{
var86 = ((val*(*)(val* self))(var83->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var83); /* c_name on <var83:MType>*/
}
((struct instance_standard__NativeArray*)var74)->values[1]=var86;
{
var87 = ((val*(*)(val* self))(var74->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var74); /* native_to_s on <var74:NativeArray[String]>*/
}
varonce73 = var74;
var = var87;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#type_info for (self: SeparateCompilerVisitor, RuntimeVariable): String */
val* nit___nit__SeparateCompilerVisitor___type_info(val* self, val* p0) {
val* var /* : String */;
val* var_value /* var value: RuntimeVariable */;
val* var1 /* : MType */;
val* var3 /* : MType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
val* var8 /* : AbstractCompiler */;
val* var10 /* : AbstractCompiler */;
val* var11 /* : ModelBuilder */;
val* var13 /* : ModelBuilder */;
val* var14 /* : ToolContext */;
val* var16 /* : ToolContext */;
val* var17 /* : OptionBool */;
val* var19 /* : OptionBool */;
val* var20 /* : nullable Object */;
val* var22 /* : nullable Object */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : String */;
val* var_tag /* var tag: String */;
val* var26 /* : NativeArray[String] */;
static val* varonce;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
val* var30 /* : FlatString */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
val* var34 /* : FlatString */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
val* var38 /* : FlatString */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
val* var42 /* : FlatString */;
val* var43 /* : String */;
val* var44 /* : String */;
val* var46 /* : NativeArray[String] */;
static val* varonce45;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
val* var50 /* : FlatString */;
val* var51 /* : String */;
val* var52 /* : String */;
val* var53 /* : AbstractCompiler */;
val* var55 /* : AbstractCompiler */;
val* var56 /* : Set[MType] */;
val* var58 /* : Set[MType] */;
val* var59 /* : MType */;
val* var61 /* : MType */;
val* var63 /* : NativeArray[String] */;
static val* varonce62;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
val* var67 /* : FlatString */;
val* var68 /* : MType */;
val* var70 /* : MType */;
val* var71 /* : String */;
val* var72 /* : String */;
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
val* var83 /* : MType */;
val* var85 /* : MType */;
val* var86 /* : String */;
val* var87 /* : String */;
var_value = p0;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var3 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((short int(*)(val* self))(var1->class->vft[COLOR_nit__abstract_compiler__MType__is_c_primitive]))(var1); /* is_c_primitive on <var1:MType>*/
}
var5 = !var4;
if (var5){
{
var7 = nit___nit__SeparateCompilerVisitor___can_be_primitive(self, var_value);
}
var_ = var7;
if (var7){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var10 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var8) on <var8:AbstractCompiler(SeparateCompiler)> */
var13 = var8->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var8:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var11) on <var11:ModelBuilder> */
var16 = var11->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var11:ModelBuilder> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_no_tag_primitives (var14) on <var14:ToolContext> */
var19 = var14->attrs[COLOR_nit__separate_compiler__ToolContext___opt_no_tag_primitives].val; /* _opt_no_tag_primitives on <var14:ToolContext> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_tag_primitives");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 32);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline opts#Option#value (var17) on <var17:OptionBool> */
var22 = var17->attrs[COLOR_opts__Option___value].val; /* _value on <var17:OptionBool> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
var23 = (short int)((long)(var20)>>2);
var24 = !var23;
var6 = var24;
} else {
var6 = var_;
}
if (var6){
{
var25 = nit___nit__SeparateCompilerVisitor___extract_tag(self, var_value);
}
var_tag = var25;
if (unlikely(varonce==NULL)) {
var26 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "(";
var30 = standard___standard__NativeString___to_s_with_length(var29, 1l);
var28 = var30;
varonce27 = var28;
}
((struct instance_standard__NativeArray*)var26)->values[0]=var28;
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "?type_info[";
var34 = standard___standard__NativeString___to_s_with_length(var33, 11l);
var32 = var34;
varonce31 = var32;
}
((struct instance_standard__NativeArray*)var26)->values[2]=var32;
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "]:";
var38 = standard___standard__NativeString___to_s_with_length(var37, 2l);
var36 = var38;
varonce35 = var36;
}
((struct instance_standard__NativeArray*)var26)->values[4]=var36;
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = "->type)";
var42 = standard___standard__NativeString___to_s_with_length(var41, 7l);
var40 = var42;
varonce39 = var40;
}
((struct instance_standard__NativeArray*)var26)->values[6]=var40;
} else {
var26 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var26)->values[1]=var_tag;
((struct instance_standard__NativeArray*)var26)->values[3]=var_tag;
{
var43 = ((val*(*)(val* self))(var_value->class->vft[COLOR_standard__string__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var26)->values[5]=var43;
{
var44 = ((val*(*)(val* self))(var26->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var26); /* native_to_s on <var26:NativeArray[String]>*/
}
varonce = var26;
var = var44;
goto RET_LABEL;
} else {
}
if (unlikely(varonce45==NULL)) {
var46 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "->type";
var50 = standard___standard__NativeString___to_s_with_length(var49, 6l);
var48 = var50;
varonce47 = var48;
}
((struct instance_standard__NativeArray*)var46)->values[1]=var48;
} else {
var46 = varonce45;
varonce45 = NULL;
}
{
var51 = ((val*(*)(val* self))(var_value->class->vft[COLOR_standard__string__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var46)->values[0]=var51;
{
var52 = ((val*(*)(val* self))(var46->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var46); /* native_to_s on <var46:NativeArray[String]>*/
}
varonce45 = var46;
var = var52;
goto RET_LABEL;
} else {
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var55 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#undead_types (var53) on <var53:AbstractCompiler(SeparateCompiler)> */
var58 = var53->attrs[COLOR_nit__separate_compiler__SeparateCompiler___undead_types].val; /* _undead_types on <var53:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _undead_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 146);
fatal_exit(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var61 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
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
((void(*)(val* self, val* p0))((((long)var56&3)?class_info[((long)var56&3)]:var56->class)->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var56, var59); /* add on <var56:Set[MType]>*/
}
if (unlikely(varonce62==NULL)) {
var63 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = "type_";
var67 = standard___standard__NativeString___to_s_with_length(var66, 5l);
var65 = var67;
varonce64 = var65;
}
((struct instance_standard__NativeArray*)var63)->values[0]=var65;
} else {
var63 = varonce62;
varonce62 = NULL;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var70 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
var71 = ((val*(*)(val* self))(var68->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var68); /* c_name on <var68:MType>*/
}
((struct instance_standard__NativeArray*)var63)->values[1]=var71;
{
var72 = ((val*(*)(val* self))(var63->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var63); /* native_to_s on <var63:NativeArray[String]>*/
}
varonce62 = var63;
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var72); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce73==NULL)) {
var74 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = "(&type_";
var78 = standard___standard__NativeString___to_s_with_length(var77, 7l);
var76 = var78;
varonce75 = var76;
}
((struct instance_standard__NativeArray*)var74)->values[0]=var76;
if (likely(varonce79!=NULL)) {
var80 = varonce79;
} else {
var81 = ")";
var82 = standard___standard__NativeString___to_s_with_length(var81, 1l);
var80 = var82;
varonce79 = var80;
}
((struct instance_standard__NativeArray*)var74)->values[2]=var80;
} else {
var74 = varonce73;
varonce73 = NULL;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var85 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var85 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var83 = var85;
RET_LABEL84:(void)0;
}
}
{
var86 = ((val*(*)(val* self))(var83->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var83); /* c_name on <var83:MType>*/
}
((struct instance_standard__NativeArray*)var74)->values[1]=var86;
{
var87 = ((val*(*)(val* self))(var74->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var74); /* native_to_s on <var74:NativeArray[String]>*/
}
varonce73 = var74;
var = var87;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#compile_callsite for (self: SeparateCompilerVisitor, CallSite, Array[RuntimeVariable]): nullable RuntimeVariable */
val* nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var_callsite /* var callsite: CallSite */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : nullable RapidTypeAnalysis */;
val* var6 /* : nullable RapidTypeAnalysis */;
val* var_rta /* var rta: nullable RapidTypeAnalysis */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : AbstractCompiler */;
val* var11 /* : AbstractCompiler */;
val* var12 /* : ModelBuilder */;
val* var14 /* : ModelBuilder */;
val* var15 /* : ToolContext */;
val* var17 /* : ToolContext */;
val* var18 /* : OptionBool */;
val* var20 /* : OptionBool */;
val* var21 /* : nullable Object */;
val* var23 /* : nullable Object */;
short int var24 /* : Bool */;
short int var_ /* var : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var_30 /* var : Bool */;
val* var31 /* : MMethodDef */;
val* var33 /* : MMethodDef */;
val* var34 /* : Array[MProperty] */;
val* var36 /* : Array[MProperty] */;
short int var37 /* : Bool */;
val* var38 /* : Set[MMethodDef] */;
val* var_tgs /* var tgs: Set[MMethodDef] */;
long var39 /* : Int */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
val* var43 /* : nullable Object */;
val* var44 /* : nullable RuntimeVariable */;
short int var45 /* : Bool */;
val* var46 /* : MMethodDef */;
val* var48 /* : MMethodDef */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
short int var_52 /* var : Bool */;
val* var53 /* : MMethod */;
val* var55 /* : MMethod */;
val* var56 /* : String */;
val* var58 /* : String */;
static val* varonce;
val* var59 /* : String */;
char* var60 /* : NativeString */;
val* var61 /* : FlatString */;
short int var62 /* : Bool */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
val* var66 /* : MMethodDef */;
val* var68 /* : MMethodDef */;
val* var69 /* : nullable RuntimeVariable */;
val* var70 /* : nullable RuntimeVariable */;
var_callsite = p0;
var_args = p1;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var3 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#runtime_type_analysis (var1) on <var1:AbstractCompiler(SeparateCompiler)> */
var6 = var1->attrs[COLOR_nit__separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <var1:AbstractCompiler(SeparateCompiler)> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_rta = var4;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var11 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var9) on <var9:AbstractCompiler(SeparateCompiler)> */
var14 = var9->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var9:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var12) on <var12:ModelBuilder> */
var17 = var12->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var12:ModelBuilder> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_direct_call_monomorph (var15) on <var15:ToolContext> */
var20 = var15->attrs[COLOR_nit__separate_compiler__ToolContext___opt_direct_call_monomorph].val; /* _opt_direct_call_monomorph on <var15:ToolContext> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_direct_call_monomorph");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 50);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline opts#Option#value (var18) on <var18:OptionBool> */
var23 = var18->attrs[COLOR_opts__Option___value].val; /* _value on <var18:OptionBool> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
var24 = (short int)((long)(var21)>>2);
var_ = var24;
if (var24){
if (var_rta == NULL) {
var25 = 0; /* is null */
} else {
var25 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_rta,((val*)NULL)) on <var_rta:nullable RapidTypeAnalysis> */
var_other = ((val*)NULL);
{
var28 = ((short int(*)(val* self, val* p0))(var_rta->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_rta, var_other); /* == on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)>*/
}
var29 = !var28;
var26 = var29;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
var25 = var26;
}
var8 = var25;
} else {
var8 = var_;
}
var_30 = var8;
if (var8){
{
{ /* Inline typing#CallSite#mpropdef (var_callsite) on <var_callsite:CallSite> */
var33 = var_callsite->attrs[COLOR_nit__typing__CallSite___mpropdef].val; /* _mpropdef on <var_callsite:CallSite> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 627);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline model#MMethodDef#initializers (var31) on <var31:MMethodDef> */
var36 = var31->attrs[COLOR_nit__model__MMethodDef___initializers].val; /* _initializers on <var31:MMethodDef> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2345);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
var37 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var34);
}
var7 = var37;
} else {
var7 = var_30;
}
if (var7){
{
var38 = nit___nit__RapidTypeAnalysis___live_targets(var_rta, var_callsite);
}
var_tgs = var38;
{
var39 = ((long(*)(val* self))((((long)var_tgs&3)?class_info[((long)var_tgs&3)]:var_tgs->class)->vft[COLOR_standard__abstract_collection__Collection__length]))(var_tgs); /* length on <var_tgs:Set[MMethodDef]>*/
}
{
{ /* Inline kernel#Int#== (var39,1l) on <var39:Int> */
var42 = var39 == 1l;
var40 = var42;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
if (var40){
{
var43 = ((val*(*)(val* self))((((long)var_tgs&3)?class_info[((long)var_tgs&3)]:var_tgs->class)->vft[COLOR_standard__abstract_collection__Collection__first]))(var_tgs); /* first on <var_tgs:Set[MMethodDef]>*/
}
{
var44 = nit___nit__SeparateCompilerVisitor___direct_call(self, var43, var_args);
}
var = var44;
goto RET_LABEL;
} else {
}
} else {
}
{
{ /* Inline typing#CallSite#mpropdef (var_callsite) on <var_callsite:CallSite> */
var48 = var_callsite->attrs[COLOR_nit__typing__CallSite___mpropdef].val; /* _mpropdef on <var_callsite:CallSite> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 627);
fatal_exit(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
{ /* Inline model#MMethodDef#is_intern (var46) on <var46:MMethodDef> */
var51 = var46->attrs[COLOR_nit__model__MMethodDef___is_intern].s; /* _is_intern on <var46:MMethodDef> */
var49 = var51;
RET_LABEL50:(void)0;
}
}
var_52 = var49;
if (var49){
{
{ /* Inline typing#CallSite#mproperty (var_callsite) on <var_callsite:CallSite> */
var55 = var_callsite->attrs[COLOR_nit__typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:CallSite> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 624);
fatal_exit(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var53) on <var53:MMethod> */
var58 = var53->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var53:MMethod> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1933);
fatal_exit(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
if (likely(varonce!=NULL)) {
var59 = varonce;
} else {
var60 = "object_id";
var61 = standard___standard__NativeString___to_s_with_length(var60, 9l);
var59 = var61;
varonce = var59;
}
{
{ /* Inline kernel#Object#!= (var56,var59) on <var56:String> */
var_other = var59;
{
var64 = ((short int(*)(val* self, val* p0))(var56->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var56, var_other); /* == on <var56:String>*/
}
var65 = !var64;
var62 = var65;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
}
var45 = var62;
} else {
var45 = var_52;
}
if (var45){
{
{ /* Inline typing#CallSite#mpropdef (var_callsite) on <var_callsite:CallSite> */
var68 = var_callsite->attrs[COLOR_nit__typing__CallSite___mpropdef].val; /* _mpropdef on <var_callsite:CallSite> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 627);
fatal_exit(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
var69 = nit___nit__SeparateCompilerVisitor___direct_call(self, var66, var_args);
}
var = var69;
goto RET_LABEL;
} else {
}
{
var70 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(self, p0, p1); /* compile_callsite on <self:SeparateCompilerVisitor>*/
}
var = var70;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#direct_call for (self: SeparateCompilerVisitor, MMethodDef, Array[RuntimeVariable]): nullable RuntimeVariable */
val* nit___nit__SeparateCompilerVisitor___direct_call(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var1 /* : MProperty */;
val* var3 /* : MProperty */;
val* var4 /* : nullable RuntimeVariable */;
val* var_res0 /* var res0: nullable RuntimeVariable */;
val* var5 /* : MClassDef */;
val* var7 /* : MClassDef */;
val* var8 /* : MClassType */;
val* var10 /* : MClassType */;
val* var11 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
static val* varonce;
val* var22 /* : String */;
char* var23 /* : NativeString */;
val* var24 /* : FlatString */;
var_mpropdef = p0;
var_args = p1;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var3 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nit___nit__SeparateCompilerVisitor___before_send(self, var1, var_args);
}
var_res0 = var4;
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var7 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var5) on <var5:MClassDef> */
var10 = var5->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var5:MClassDef> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__call(self, var_mpropdef, var8, var_args);
}
var_res = var11;
if (var_res0 == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res0,((val*)NULL)) on <var_res0:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var15 = ((short int(*)(val* self, val* p0))(var_res0->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res0, var_other); /* == on <var_res0:nullable RuntimeVariable(RuntimeVariable)>*/
}
var16 = !var15;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (var12){
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1350);
fatal_exit(1);
}
{
nit___nit__AbstractCompilerVisitor___assign(self, var_res0, var_res); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <self:SeparateCompilerVisitor>*/
}
var_res = var_res0;
} else {
}
if (likely(varonce!=NULL)) {
var22 = varonce;
} else {
var23 = "}";
var24 = standard___standard__NativeString___to_s_with_length(var23, 1l);
var22 = var24;
varonce = var22;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var22); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#send for (self: SeparateCompilerVisitor, MMethod, Array[RuntimeVariable]): nullable RuntimeVariable */
val* nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__send(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var_mmethod /* var mmethod: MMethod */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var1 /* : nullable Object */;
val* var2 /* : MType */;
val* var4 /* : MType */;
short int var5 /* : Bool */;
val* var6 /* : AbstractCompiler */;
val* var8 /* : AbstractCompiler */;
val* var9 /* : MModule */;
val* var11 /* : MModule */;
val* var_m /* var m: MModule */;
val* var12 /* : AbstractCompiler */;
val* var14 /* : AbstractCompiler */;
val* var15 /* : AbstractCompiler */;
val* var17 /* : AbstractCompiler */;
val* var18 /* : MModule */;
val* var20 /* : MModule */;
val* var22 /* : nullable Object */;
val* var23 /* : MType */;
val* var25 /* : MType */;
val* var26 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var27 /* : AbstractCompiler */;
val* var29 /* : AbstractCompiler */;
val* var31 /* : nullable RuntimeVariable */;
var_mmethod = p0;
var_arguments = p1;
{
var1 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var1) on <var1:nullable Object(RuntimeVariable)> */
var4 = var1->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var1:nullable Object(RuntimeVariable)> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1787);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = ((short int(*)(val* self))(var2->class->vft[COLOR_nit__abstract_compiler__MType__is_c_primitive]))(var2); /* is_c_primitive on <var2:MType>*/
}
if (var5){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var8 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var6) on <var6:AbstractCompiler(SeparateCompiler)> */
var11 = var6->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var6:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 515);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_m = var9;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var14 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var17 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#realmainmodule (var15) on <var15:AbstractCompiler(SeparateCompiler)> */
var20 = var15->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___realmainmodule].val; /* _realmainmodule on <var15:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _realmainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 519);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule= (var12,var18) on <var12:AbstractCompiler(SeparateCompiler)> */
var12->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val = var18; /* _mainmodule on <var12:AbstractCompiler(SeparateCompiler)> */
RET_LABEL21:(void)0;
}
}
{
var22 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var22) on <var22:nullable Object(RuntimeVariable)> */
var25 = var22->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var22:nullable Object(RuntimeVariable)> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1787);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = nit___nit__AbstractCompilerVisitor___monomorphic_send(self, var_mmethod, var23, var_arguments);
}
var_res = var26;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var29 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule= (var27,var_m) on <var27:AbstractCompiler(SeparateCompiler)> */
var27->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val = var_m; /* _mainmodule on <var27:AbstractCompiler(SeparateCompiler)> */
RET_LABEL30:(void)0;
}
}
var = var_res;
goto RET_LABEL;
} else {
}
{
var31 = nit___nit__SeparateCompilerVisitor___table_send(self, var_mmethod, var_arguments, var_mmethod);
}
var = var31;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#before_send for (self: SeparateCompilerVisitor, MMethod, Array[RuntimeVariable]): nullable RuntimeVariable */
val* nit___nit__SeparateCompilerVisitor___before_send(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var_mmethod /* var mmethod: MMethod */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var1 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
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
short int var20 /* : Bool */;
short int var_ /* var : Bool */;
val* var21 /* : String */;
val* var23 /* : String */;
static val* varonce;
val* var24 /* : String */;
char* var25 /* : NativeString */;
val* var26 /* : FlatString */;
short int var27 /* : Bool */;
short int var_28 /* var : Bool */;
val* var29 /* : String */;
val* var31 /* : String */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
val* var35 /* : FlatString */;
short int var36 /* : Bool */;
short int var_consider_null /* var consider_null: Bool */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
val* var39 /* : MType */;
val* var41 /* : MType */;
short int var42 /* : Bool */;
int cltype;
int idtype;
short int var_43 /* var : Bool */;
val* var44 /* : MType */;
val* var46 /* : MType */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
short int var_50 /* var : Bool */;
short int var_maybenull /* var maybenull: Bool */;
val* var52 /* : NativeArray[String] */;
static val* varonce51;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
val* var56 /* : FlatString */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
val* var60 /* : FlatString */;
val* var61 /* : String */;
val* var62 /* : String */;
short int var63 /* : Bool */;
val* var64 /* : String */;
val* var66 /* : String */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
val* var70 /* : FlatString */;
short int var71 /* : Bool */;
short int var_72 /* var : Bool */;
val* var73 /* : String */;
val* var75 /* : String */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
val* var79 /* : FlatString */;
short int var80 /* : Bool */;
val* var81 /* : MClassType */;
val* var82 /* : RuntimeVariable */;
val* var83 /* : nullable Object */;
val* var_arg /* var arg: RuntimeVariable */;
val* var84 /* : MType */;
val* var86 /* : MType */;
short int var87 /* : Bool */;
int cltype88;
int idtype89;
val* var91 /* : NativeArray[String] */;
static val* varonce90;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : NativeString */;
val* var95 /* : FlatString */;
static val* varonce96;
val* var97 /* : String */;
char* var98 /* : NativeString */;
val* var99 /* : FlatString */;
val* var100 /* : String */;
val* var101 /* : String */;
val* var102 /* : String */;
val* var103 /* : MType */;
val* var105 /* : MType */;
short int var106 /* : Bool */;
int cltype107;
int idtype108;
val* var110 /* : NativeArray[String] */;
static val* varonce109;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : NativeString */;
val* var114 /* : FlatString */;
val* var115 /* : String */;
val* var116 /* : String */;
val* var118 /* : NativeArray[String] */;
static val* varonce117;
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : NativeString */;
val* var122 /* : FlatString */;
static val* varonce123;
val* var124 /* : String */;
char* var125 /* : NativeString */;
val* var126 /* : FlatString */;
val* var127 /* : String */;
val* var128 /* : String */;
val* var129 /* : String */;
val* var130 /* : String */;
val* var132 /* : String */;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : NativeString */;
val* var136 /* : FlatString */;
short int var137 /* : Bool */;
val* var138 /* : MClassType */;
val* var139 /* : RuntimeVariable */;
val* var140 /* : nullable Object */;
val* var_arg141 /* var arg: RuntimeVariable */;
val* var142 /* : MType */;
val* var144 /* : MType */;
short int var145 /* : Bool */;
int cltype146;
int idtype147;
val* var149 /* : NativeArray[String] */;
static val* varonce148;
static val* varonce150;
val* var151 /* : String */;
char* var152 /* : NativeString */;
val* var153 /* : FlatString */;
static val* varonce154;
val* var155 /* : String */;
char* var156 /* : NativeString */;
val* var157 /* : FlatString */;
val* var158 /* : String */;
val* var159 /* : String */;
val* var160 /* : String */;
val* var161 /* : MType */;
val* var163 /* : MType */;
short int var164 /* : Bool */;
int cltype165;
int idtype166;
val* var168 /* : NativeArray[String] */;
static val* varonce167;
static val* varonce169;
val* var170 /* : String */;
char* var171 /* : NativeString */;
val* var172 /* : FlatString */;
val* var173 /* : String */;
val* var174 /* : String */;
val* var176 /* : NativeArray[String] */;
static val* varonce175;
static val* varonce177;
val* var178 /* : String */;
char* var179 /* : NativeString */;
val* var180 /* : FlatString */;
static val* varonce181;
val* var182 /* : String */;
char* var183 /* : NativeString */;
val* var184 /* : FlatString */;
val* var185 /* : String */;
val* var186 /* : String */;
val* var187 /* : String */;
static val* varonce188;
val* var189 /* : String */;
char* var190 /* : NativeString */;
val* var191 /* : FlatString */;
static val* varonce192;
val* var193 /* : String */;
char* var194 /* : NativeString */;
val* var195 /* : FlatString */;
static val* varonce196;
val* var197 /* : String */;
char* var198 /* : NativeString */;
val* var199 /* : FlatString */;
short int var200 /* : Bool */;
val* var201 /* : AbstractCompiler */;
val* var203 /* : AbstractCompiler */;
val* var204 /* : ModelBuilder */;
val* var206 /* : ModelBuilder */;
val* var207 /* : ToolContext */;
val* var209 /* : ToolContext */;
val* var210 /* : OptionBool */;
val* var212 /* : OptionBool */;
val* var213 /* : nullable Object */;
val* var215 /* : nullable Object */;
short int var216 /* : Bool */;
short int var217 /* : Bool */;
short int var_218 /* var : Bool */;
short int var219 /* : Bool */;
short int var220 /* : Bool */;
val* var221 /* : String */;
val* var223 /* : String */;
static val* varonce224;
val* var225 /* : String */;
char* var226 /* : NativeString */;
val* var227 /* : FlatString */;
short int var228 /* : Bool */;
short int var_229 /* var : Bool */;
val* var230 /* : String */;
val* var232 /* : String */;
static val* varonce233;
val* var234 /* : String */;
char* var235 /* : NativeString */;
val* var236 /* : FlatString */;
short int var237 /* : Bool */;
short int var_238 /* var : Bool */;
val* var239 /* : String */;
val* var241 /* : String */;
static val* varonce242;
val* var243 /* : String */;
char* var244 /* : NativeString */;
val* var245 /* : FlatString */;
short int var246 /* : Bool */;
val* var247 /* : nullable Object */;
val* var_arg248 /* var arg: RuntimeVariable */;
val* var249 /* : MType */;
val* var251 /* : MType */;
short int var252 /* : Bool */;
int cltype253;
int idtype254;
short int var255 /* : Bool */;
short int var256 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var258 /* : Bool */;
short int var260 /* : Bool */;
val* var261 /* : MClassType */;
val* var262 /* : RuntimeVariable */;
val* var263 /* : String */;
val* var265 /* : String */;
static val* varonce266;
val* var267 /* : String */;
char* var268 /* : NativeString */;
val* var269 /* : FlatString */;
short int var270 /* : Bool */;
val* var272 /* : NativeArray[String] */;
static val* varonce271;
static val* varonce273;
val* var274 /* : String */;
char* var275 /* : NativeString */;
val* var276 /* : FlatString */;
val* var277 /* : String */;
val* var278 /* : String */;
val* var280 /* : NativeArray[String] */;
static val* varonce279;
static val* varonce281;
val* var282 /* : String */;
char* var283 /* : NativeString */;
val* var284 /* : FlatString */;
val* var285 /* : String */;
val* var286 /* : String */;
static val* varonce287;
val* var288 /* : String */;
char* var289 /* : NativeString */;
val* var290 /* : FlatString */;
static val* varonce291;
val* var292 /* : String */;
char* var293 /* : NativeString */;
val* var294 /* : FlatString */;
var_mmethod = p0;
var_arguments = p1;
var_res = ((val*)NULL);
{
var1 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
var_recv = var1;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var6 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var4) on <var4:AbstractCompiler(SeparateCompiler)> */
var9 = var4->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var4:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var7) on <var7:ModelBuilder> */
var12 = var7->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var7:ModelBuilder> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_null (var10) on <var10:ToolContext> */
var15 = var10->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_null].val; /* _opt_no_check_null on <var10:ToolContext> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 56);
fatal_exit(1);
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
var19 = (short int)((long)(var16)>>2);
var20 = !var19;
var_ = var20;
if (var20){
var3 = var_;
} else {
{
{ /* Inline model#MProperty#name (var_mmethod) on <var_mmethod:MMethod> */
var23 = var_mmethod->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1933);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (likely(varonce!=NULL)) {
var24 = varonce;
} else {
var25 = "==";
var26 = standard___standard__NativeString___to_s_with_length(var25, 2l);
var24 = var26;
varonce = var24;
}
{
var27 = ((short int(*)(val* self, val* p0))(var21->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var21, var24); /* == on <var21:String>*/
}
var3 = var27;
}
var_28 = var3;
if (var3){
var2 = var_28;
} else {
{
{ /* Inline model#MProperty#name (var_mmethod) on <var_mmethod:MMethod> */
var31 = var_mmethod->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1933);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "!=";
var35 = standard___standard__NativeString___to_s_with_length(var34, 2l);
var33 = var35;
varonce32 = var33;
}
{
var36 = ((short int(*)(val* self, val* p0))(var29->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var29, var33); /* == on <var29:String>*/
}
var2 = var36;
}
var_consider_null = var2;
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_recv) on <var_recv:RuntimeVariable> */
var41 = var_recv->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_recv:RuntimeVariable> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1787);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
/* <var39:MType> isa MNullableType */
cltype = type_nit__MNullableType.color;
idtype = type_nit__MNullableType.id;
if(cltype >= var39->type->table_size) {
var42 = 0;
} else {
var42 = var39->type->type_table[cltype] == idtype;
}
var_43 = var42;
if (var42){
var38 = var_43;
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_recv) on <var_recv:RuntimeVariable> */
var46 = var_recv->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_recv:RuntimeVariable> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1787);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
/* <var44:MType> isa MNullType */
cltype48 = type_nit__MNullType.color;
idtype49 = type_nit__MNullType.id;
if(cltype48 >= var44->type->table_size) {
var47 = 0;
} else {
var47 = var44->type->type_table[cltype48] == idtype49;
}
var38 = var47;
}
var_50 = var38;
if (var38){
var37 = var_consider_null;
} else {
var37 = var_50;
}
var_maybenull = var37;
if (var_maybenull){
if (unlikely(varonce51==NULL)) {
var52 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce53!=NULL)) {
var54 = varonce53;
} else {
var55 = "if (";
var56 = standard___standard__NativeString___to_s_with_length(var55, 4l);
var54 = var56;
varonce53 = var54;
}
((struct instance_standard__NativeArray*)var52)->values[0]=var54;
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = " == NULL) {";
var60 = standard___standard__NativeString___to_s_with_length(var59, 11l);
var58 = var60;
varonce57 = var58;
}
((struct instance_standard__NativeArray*)var52)->values[2]=var58;
} else {
var52 = varonce51;
varonce51 = NULL;
}
{
var61 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_standard__string__Object__to_s]))(var_recv); /* to_s on <var_recv:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var52)->values[1]=var61;
{
var62 = ((val*(*)(val* self))(var52->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var52); /* native_to_s on <var52:NativeArray[String]>*/
}
varonce51 = var52;
{
nit___nit__AbstractCompilerVisitor___add(self, var62); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline model#MProperty#name (var_mmethod) on <var_mmethod:MMethod> */
var66 = var_mmethod->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1933);
fatal_exit(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = "==";
var70 = standard___standard__NativeString___to_s_with_length(var69, 2l);
var68 = var70;
varonce67 = var68;
}
{
var71 = ((short int(*)(val* self, val* p0))(var64->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var64, var68); /* == on <var64:String>*/
}
var_72 = var71;
if (var71){
var63 = var_72;
} else {
{
{ /* Inline model#MProperty#name (var_mmethod) on <var_mmethod:MMethod> */
var75 = var_mmethod->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1933);
fatal_exit(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
if (likely(varonce76!=NULL)) {
var77 = varonce76;
} else {
var78 = "is_same_instance";
var79 = standard___standard__NativeString___to_s_with_length(var78, 16l);
var77 = var79;
varonce76 = var77;
}
{
var80 = ((short int(*)(val* self, val* p0))(var73->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var73, var77); /* == on <var73:String>*/
}
var63 = var80;
}
if (var63){
{
var81 = nit___nit__AbstractCompilerVisitor___bool_type(self);
}
{
var82 = nit___nit__AbstractCompilerVisitor___new_var(self, var81);
}
var_res = var82;
{
var83 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
var_arg = var83;
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_arg) on <var_arg:RuntimeVariable> */
var86 = var_arg->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_arg:RuntimeVariable> */
if (unlikely(var86 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1787);
fatal_exit(1);
}
var84 = var86;
RET_LABEL85:(void)0;
}
}
/* <var84:MType> isa MNullableType */
cltype88 = type_nit__MNullableType.color;
idtype89 = type_nit__MNullableType.id;
if(cltype88 >= var84->type->table_size) {
var87 = 0;
} else {
var87 = var84->type->type_table[cltype88] == idtype89;
}
if (var87){
if (unlikely(varonce90==NULL)) {
var91 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce92!=NULL)) {
var93 = varonce92;
} else {
var94 = " = (";
var95 = standard___standard__NativeString___to_s_with_length(var94, 4l);
var93 = var95;
varonce92 = var93;
}
((struct instance_standard__NativeArray*)var91)->values[1]=var93;
if (likely(varonce96!=NULL)) {
var97 = varonce96;
} else {
var98 = " == NULL);";
var99 = standard___standard__NativeString___to_s_with_length(var98, 10l);
var97 = var99;
varonce96 = var97;
}
((struct instance_standard__NativeArray*)var91)->values[3]=var97;
} else {
var91 = varonce90;
varonce90 = NULL;
}
{
var100 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var91)->values[0]=var100;
{
var101 = ((val*(*)(val* self))(var_arg->class->vft[COLOR_standard__string__Object__to_s]))(var_arg); /* to_s on <var_arg:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var91)->values[2]=var101;
{
var102 = ((val*(*)(val* self))(var91->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var91); /* native_to_s on <var91:NativeArray[String]>*/
}
varonce90 = var91;
{
nit___nit__AbstractCompilerVisitor___add(self, var102); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_arg) on <var_arg:RuntimeVariable> */
var105 = var_arg->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_arg:RuntimeVariable> */
if (unlikely(var105 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1787);
fatal_exit(1);
}
var103 = var105;
RET_LABEL104:(void)0;
}
}
/* <var103:MType> isa MNullType */
cltype107 = type_nit__MNullType.color;
idtype108 = type_nit__MNullType.id;
if(cltype107 >= var103->type->table_size) {
var106 = 0;
} else {
var106 = var103->type->type_table[cltype107] == idtype108;
}
if (var106){
if (unlikely(varonce109==NULL)) {
var110 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce111!=NULL)) {
var112 = varonce111;
} else {
var113 = " = 1; /* is null */";
var114 = standard___standard__NativeString___to_s_with_length(var113, 19l);
var112 = var114;
varonce111 = var112;
}
((struct instance_standard__NativeArray*)var110)->values[1]=var112;
} else {
var110 = varonce109;
varonce109 = NULL;
}
{
var115 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var110)->values[0]=var115;
{
var116 = ((val*(*)(val* self))(var110->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var110); /* native_to_s on <var110:NativeArray[String]>*/
}
varonce109 = var110;
{
nit___nit__AbstractCompilerVisitor___add(self, var116); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
if (unlikely(varonce117==NULL)) {
var118 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce119!=NULL)) {
var120 = varonce119;
} else {
var121 = " = 0; /* ";
var122 = standard___standard__NativeString___to_s_with_length(var121, 9l);
var120 = var122;
varonce119 = var120;
}
((struct instance_standard__NativeArray*)var118)->values[1]=var120;
if (likely(varonce123!=NULL)) {
var124 = varonce123;
} else {
var125 = " cannot be null */";
var126 = standard___standard__NativeString___to_s_with_length(var125, 18l);
var124 = var126;
varonce123 = var124;
}
((struct instance_standard__NativeArray*)var118)->values[3]=var124;
} else {
var118 = varonce117;
varonce117 = NULL;
}
{
var127 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var118)->values[0]=var127;
{
var128 = nit___nit__RuntimeVariable___standard__string__Object__inspect(var_arg);
}
((struct instance_standard__NativeArray*)var118)->values[2]=var128;
{
var129 = ((val*(*)(val* self))(var118->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var118); /* native_to_s on <var118:NativeArray[String]>*/
}
varonce117 = var118;
{
nit___nit__AbstractCompilerVisitor___add(self, var129); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
}
} else {
{
{ /* Inline model#MProperty#name (var_mmethod) on <var_mmethod:MMethod> */
var132 = var_mmethod->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var132 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1933);
fatal_exit(1);
}
var130 = var132;
RET_LABEL131:(void)0;
}
}
if (likely(varonce133!=NULL)) {
var134 = varonce133;
} else {
var135 = "!=";
var136 = standard___standard__NativeString___to_s_with_length(var135, 2l);
var134 = var136;
varonce133 = var134;
}
{
var137 = ((short int(*)(val* self, val* p0))(var130->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var130, var134); /* == on <var130:String>*/
}
if (var137){
{
var138 = nit___nit__AbstractCompilerVisitor___bool_type(self);
}
{
var139 = nit___nit__AbstractCompilerVisitor___new_var(self, var138);
}
var_res = var139;
{
var140 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
var_arg141 = var140;
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_arg141) on <var_arg141:RuntimeVariable> */
var144 = var_arg141->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_arg141:RuntimeVariable> */
if (unlikely(var144 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1787);
fatal_exit(1);
}
var142 = var144;
RET_LABEL143:(void)0;
}
}
/* <var142:MType> isa MNullableType */
cltype146 = type_nit__MNullableType.color;
idtype147 = type_nit__MNullableType.id;
if(cltype146 >= var142->type->table_size) {
var145 = 0;
} else {
var145 = var142->type->type_table[cltype146] == idtype147;
}
if (var145){
if (unlikely(varonce148==NULL)) {
var149 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce150!=NULL)) {
var151 = varonce150;
} else {
var152 = " = (";
var153 = standard___standard__NativeString___to_s_with_length(var152, 4l);
var151 = var153;
varonce150 = var151;
}
((struct instance_standard__NativeArray*)var149)->values[1]=var151;
if (likely(varonce154!=NULL)) {
var155 = varonce154;
} else {
var156 = " != NULL);";
var157 = standard___standard__NativeString___to_s_with_length(var156, 10l);
var155 = var157;
varonce154 = var155;
}
((struct instance_standard__NativeArray*)var149)->values[3]=var155;
} else {
var149 = varonce148;
varonce148 = NULL;
}
{
var158 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var149)->values[0]=var158;
{
var159 = ((val*(*)(val* self))(var_arg141->class->vft[COLOR_standard__string__Object__to_s]))(var_arg141); /* to_s on <var_arg141:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var149)->values[2]=var159;
{
var160 = ((val*(*)(val* self))(var149->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var149); /* native_to_s on <var149:NativeArray[String]>*/
}
varonce148 = var149;
{
nit___nit__AbstractCompilerVisitor___add(self, var160); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_arg141) on <var_arg141:RuntimeVariable> */
var163 = var_arg141->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_arg141:RuntimeVariable> */
if (unlikely(var163 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1787);
fatal_exit(1);
}
var161 = var163;
RET_LABEL162:(void)0;
}
}
/* <var161:MType> isa MNullType */
cltype165 = type_nit__MNullType.color;
idtype166 = type_nit__MNullType.id;
if(cltype165 >= var161->type->table_size) {
var164 = 0;
} else {
var164 = var161->type->type_table[cltype165] == idtype166;
}
if (var164){
if (unlikely(varonce167==NULL)) {
var168 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce169!=NULL)) {
var170 = varonce169;
} else {
var171 = " = 0; /* is null */";
var172 = standard___standard__NativeString___to_s_with_length(var171, 19l);
var170 = var172;
varonce169 = var170;
}
((struct instance_standard__NativeArray*)var168)->values[1]=var170;
} else {
var168 = varonce167;
varonce167 = NULL;
}
{
var173 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var168)->values[0]=var173;
{
var174 = ((val*(*)(val* self))(var168->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var168); /* native_to_s on <var168:NativeArray[String]>*/
}
varonce167 = var168;
{
nit___nit__AbstractCompilerVisitor___add(self, var174); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
if (unlikely(varonce175==NULL)) {
var176 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce177!=NULL)) {
var178 = varonce177;
} else {
var179 = " = 1; /* ";
var180 = standard___standard__NativeString___to_s_with_length(var179, 9l);
var178 = var180;
varonce177 = var178;
}
((struct instance_standard__NativeArray*)var176)->values[1]=var178;
if (likely(varonce181!=NULL)) {
var182 = varonce181;
} else {
var183 = " cannot be null */";
var184 = standard___standard__NativeString___to_s_with_length(var183, 18l);
var182 = var184;
varonce181 = var182;
}
((struct instance_standard__NativeArray*)var176)->values[3]=var182;
} else {
var176 = varonce175;
varonce175 = NULL;
}
{
var185 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var176)->values[0]=var185;
{
var186 = nit___nit__RuntimeVariable___standard__string__Object__inspect(var_arg141);
}
((struct instance_standard__NativeArray*)var176)->values[2]=var186;
{
var187 = ((val*(*)(val* self))(var176->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var176); /* native_to_s on <var176:NativeArray[String]>*/
}
varonce175 = var176;
{
nit___nit__AbstractCompilerVisitor___add(self, var187); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
}
} else {
if (likely(varonce188!=NULL)) {
var189 = varonce188;
} else {
var190 = "Receiver is null";
var191 = standard___standard__NativeString___to_s_with_length(var190, 16l);
var189 = var191;
varonce188 = var189;
}
{
nit___nit__AbstractCompilerVisitor___add_abort(self, var189); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <self:SeparateCompilerVisitor>*/
}
}
}
if (likely(varonce192!=NULL)) {
var193 = varonce192;
} else {
var194 = "} else {";
var195 = standard___standard__NativeString___to_s_with_length(var194, 8l);
var193 = var195;
varonce192 = var193;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var193); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
if (likely(varonce196!=NULL)) {
var197 = varonce196;
} else {
var198 = "{";
var199 = standard___standard__NativeString___to_s_with_length(var198, 1l);
var197 = var199;
varonce196 = var197;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var197); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var203 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var203 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var201 = var203;
RET_LABEL202:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var201) on <var201:AbstractCompiler(SeparateCompiler)> */
var206 = var201->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var201:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var206 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var204 = var206;
RET_LABEL205:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var204) on <var204:ModelBuilder> */
var209 = var204->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var204:ModelBuilder> */
if (unlikely(var209 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var207 = var209;
RET_LABEL208:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_no_shortcut_equate (var207) on <var207:ToolContext> */
var212 = var207->attrs[COLOR_nit__separate_compiler__ToolContext___opt_no_shortcut_equate].val; /* _opt_no_shortcut_equate on <var207:ToolContext> */
if (unlikely(var212 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_shortcut_equate");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 30);
fatal_exit(1);
}
var210 = var212;
RET_LABEL211:(void)0;
}
}
{
{ /* Inline opts#Option#value (var210) on <var210:OptionBool> */
var215 = var210->attrs[COLOR_opts__Option___value].val; /* _value on <var210:OptionBool> */
var213 = var215;
RET_LABEL214:(void)0;
}
}
var216 = (short int)((long)(var213)>>2);
var217 = !var216;
var_218 = var217;
if (var217){
{
{ /* Inline model#MProperty#name (var_mmethod) on <var_mmethod:MMethod> */
var223 = var_mmethod->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var223 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1933);
fatal_exit(1);
}
var221 = var223;
RET_LABEL222:(void)0;
}
}
if (likely(varonce224!=NULL)) {
var225 = varonce224;
} else {
var226 = "==";
var227 = standard___standard__NativeString___to_s_with_length(var226, 2l);
var225 = var227;
varonce224 = var225;
}
{
var228 = ((short int(*)(val* self, val* p0))(var221->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var221, var225); /* == on <var221:String>*/
}
var_229 = var228;
if (var228){
var220 = var_229;
} else {
{
{ /* Inline model#MProperty#name (var_mmethod) on <var_mmethod:MMethod> */
var232 = var_mmethod->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var232 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1933);
fatal_exit(1);
}
var230 = var232;
RET_LABEL231:(void)0;
}
}
if (likely(varonce233!=NULL)) {
var234 = varonce233;
} else {
var235 = "!=";
var236 = standard___standard__NativeString___to_s_with_length(var235, 2l);
var234 = var236;
varonce233 = var234;
}
{
var237 = ((short int(*)(val* self, val* p0))(var230->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var230, var234); /* == on <var230:String>*/
}
var220 = var237;
}
var_238 = var220;
if (var220){
var219 = var_238;
} else {
{
{ /* Inline model#MProperty#name (var_mmethod) on <var_mmethod:MMethod> */
var241 = var_mmethod->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var241 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1933);
fatal_exit(1);
}
var239 = var241;
RET_LABEL240:(void)0;
}
}
if (likely(varonce242!=NULL)) {
var243 = varonce242;
} else {
var244 = "is_same_instance";
var245 = standard___standard__NativeString___to_s_with_length(var244, 16l);
var243 = var245;
varonce242 = var243;
}
{
var246 = ((short int(*)(val* self, val* p0))(var239->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var239, var243); /* == on <var239:String>*/
}
var219 = var246;
}
var200 = var219;
} else {
var200 = var_218;
}
if (var200){
{
var247 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
var_arg248 = var247;
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_arg248) on <var_arg248:RuntimeVariable> */
var251 = var_arg248->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_arg248:RuntimeVariable> */
if (unlikely(var251 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1787);
fatal_exit(1);
}
var249 = var251;
RET_LABEL250:(void)0;
}
}
/* <var249:MType> isa MNullType */
cltype253 = type_nit__MNullType.color;
idtype254 = type_nit__MNullType.id;
if(cltype253 >= var249->type->table_size) {
var252 = 0;
} else {
var252 = var249->type->type_table[cltype253] == idtype254;
}
if (var252){
if (var_res == NULL) {
var255 = 1; /* is null */
} else {
var255 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res,((val*)NULL)) on <var_res:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other) on <var_res:nullable RuntimeVariable(RuntimeVariable)> */
var260 = var_res == var_other;
var258 = var260;
goto RET_LABEL259;
RET_LABEL259:(void)0;
}
}
var256 = var258;
goto RET_LABEL257;
RET_LABEL257:(void)0;
}
var255 = var256;
}
if (var255){
{
var261 = nit___nit__AbstractCompilerVisitor___bool_type(self);
}
{
var262 = nit___nit__AbstractCompilerVisitor___new_var(self, var261);
}
var_res = var262;
} else {
}
{
{ /* Inline model#MProperty#name (var_mmethod) on <var_mmethod:MMethod> */
var265 = var_mmethod->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var265 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1933);
fatal_exit(1);
}
var263 = var265;
RET_LABEL264:(void)0;
}
}
if (likely(varonce266!=NULL)) {
var267 = varonce266;
} else {
var268 = "!=";
var269 = standard___standard__NativeString___to_s_with_length(var268, 2l);
var267 = var269;
varonce266 = var267;
}
{
var270 = ((short int(*)(val* self, val* p0))(var263->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var263, var267); /* == on <var263:String>*/
}
if (var270){
if (unlikely(varonce271==NULL)) {
var272 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce273!=NULL)) {
var274 = varonce273;
} else {
var275 = " = 1; /* arg is null and recv is not */";
var276 = standard___standard__NativeString___to_s_with_length(var275, 39l);
var274 = var276;
varonce273 = var274;
}
((struct instance_standard__NativeArray*)var272)->values[1]=var274;
} else {
var272 = varonce271;
varonce271 = NULL;
}
{
var277 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var272)->values[0]=var277;
{
var278 = ((val*(*)(val* self))(var272->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var272); /* native_to_s on <var272:NativeArray[String]>*/
}
varonce271 = var272;
{
nit___nit__AbstractCompilerVisitor___add(self, var278); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
if (unlikely(varonce279==NULL)) {
var280 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce281!=NULL)) {
var282 = varonce281;
} else {
var283 = " = 0; /* arg is null but recv is not */";
var284 = standard___standard__NativeString___to_s_with_length(var283, 39l);
var282 = var284;
varonce281 = var282;
}
((struct instance_standard__NativeArray*)var280)->values[1]=var282;
} else {
var280 = varonce279;
varonce279 = NULL;
}
{
var285 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var280)->values[0]=var285;
{
var286 = ((val*(*)(val* self))(var280->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var280); /* native_to_s on <var280:NativeArray[String]>*/
}
varonce279 = var280;
{
nit___nit__AbstractCompilerVisitor___add(self, var286); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
if (likely(varonce287!=NULL)) {
var288 = varonce287;
} else {
var289 = "}";
var290 = standard___standard__NativeString___to_s_with_length(var289, 1l);
var288 = var290;
varonce287 = var288;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var288); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (likely(varonce291!=NULL)) {
var292 = varonce291;
} else {
var293 = "if (0) {";
var294 = standard___standard__NativeString___to_s_with_length(var293, 8l);
var292 = var294;
varonce291 = var292;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var292); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
}
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#table_send for (self: SeparateCompilerVisitor, MMethod, Array[RuntimeVariable], MEntity): nullable RuntimeVariable */
val* nit___nit__SeparateCompilerVisitor___table_send(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable RuntimeVariable */;
val* var_mmethod /* var mmethod: MMethod */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var_mentity /* var mentity: MEntity */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : ModelBuilder */;
val* var6 /* : ModelBuilder */;
val* var_ /* var : ModelBuilder */;
long var7 /* : Int */;
long var9 /* : Int */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var13 /* : Int */;
val* var15 /* : AbstractCompiler */;
val* var17 /* : AbstractCompiler */;
val* var18 /* : ModelBuilder */;
val* var20 /* : ModelBuilder */;
val* var21 /* : ToolContext */;
val* var23 /* : ToolContext */;
val* var24 /* : OptionBool */;
val* var26 /* : OptionBool */;
val* var27 /* : nullable Object */;
val* var29 /* : nullable Object */;
short int var30 /* : Bool */;
static val* varonce;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : FlatString */;
long var34 /* : Int */;
long var36 /* : Int */;
val* var37 /* : MPropDef */;
val* var39 /* : MPropDef */;
val* var40 /* : nullable MSignature */;
val* var42 /* : nullable MSignature */;
long var43 /* : Int */;
long var44 /* : Int */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
long var50 /* : Int */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
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
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
val* var67 /* : FlatString */;
val* var68 /* : String */;
long var69 /* : Int */;
long var71 /* : Int */;
val* var72 /* : String */;
val* var73 /* : String */;
val* var74 /* : nullable RuntimeVariable */;
val* var_res0 /* var res0: nullable RuntimeVariable */;
val* var75 /* : MPropDef */;
val* var77 /* : MPropDef */;
val* var78 /* : SeparateRuntimeFunction */;
val* var_runtime_function /* var runtime_function: SeparateRuntimeFunction */;
val* var79 /* : MSignature */;
val* var81 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var82 /* : MPropDef */;
val* var84 /* : MPropDef */;
val* var85 /* : nullable MType */;
val* var87 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
short int var88 /* : Bool */;
short int var89 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var91 /* : Bool */;
short int var93 /* : Bool */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var94 /* : RuntimeVariable */;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : NativeString */;
val* var98 /* : FlatString */;
val* var99 /* : String */;
val* var_ss /* var ss: String */;
val* var100 /* : String */;
val* var_const_color /* var const_color: String */;
short int var101 /* : Bool */;
short int var102 /* : Bool */;
val* var_other104 /* var other: nullable Object */;
short int var105 /* : Bool */;
short int var106 /* : Bool */;
val* var108 /* : NativeArray[String] */;
static val* varonce107;
static val* varonce109;
val* var110 /* : String */;
char* var111 /* : NativeString */;
val* var112 /* : FlatString */;
val* var113 /* : String */;
val* var114 /* : String */;
val* var_ress /* var ress: nullable Object */;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : NativeString */;
val* var118 /* : FlatString */;
short int var119 /* : Bool */;
short int var120 /* : Bool */;
int cltype121;
int idtype122;
short int var_123 /* var : Bool */;
val* var124 /* : AbstractCompiler */;
val* var126 /* : AbstractCompiler */;
val* var127 /* : ModelBuilder */;
val* var129 /* : ModelBuilder */;
val* var130 /* : ToolContext */;
val* var132 /* : ToolContext */;
val* var133 /* : OptionBool */;
val* var135 /* : OptionBool */;
val* var136 /* : nullable Object */;
val* var138 /* : nullable Object */;
short int var139 /* : Bool */;
val* var140 /* : AbstractCompiler */;
val* var142 /* : AbstractCompiler */;
val* var143 /* : nullable MMethodDef */;
val* var_md /* var md: nullable MMethodDef */;
short int var144 /* : Bool */;
short int var145 /* : Bool */;
short int var147 /* : Bool */;
short int var148 /* : Bool */;
val* var149 /* : SeparateRuntimeFunction */;
val* var150 /* : String */;
val* var_callsym /* var callsym: String */;
val* var152 /* : NativeArray[String] */;
static val* varonce151;
static val* varonce153;
val* var154 /* : String */;
char* var155 /* : NativeString */;
val* var156 /* : FlatString */;
static val* varonce157;
val* var158 /* : String */;
char* var159 /* : NativeString */;
val* var160 /* : FlatString */;
static val* varonce161;
val* var162 /* : String */;
char* var163 /* : NativeString */;
val* var164 /* : FlatString */;
static val* varonce165;
val* var166 /* : String */;
char* var167 /* : NativeString */;
val* var168 /* : FlatString */;
val* var169 /* : String */;
val* var170 /* : nullable Object */;
val* var171 /* : String */;
val* var172 /* : String */;
val* var174 /* : NativeArray[String] */;
static val* varonce173;
static val* varonce175;
val* var176 /* : String */;
char* var177 /* : NativeString */;
val* var178 /* : FlatString */;
static val* varonce179;
val* var180 /* : String */;
char* var181 /* : NativeString */;
val* var182 /* : FlatString */;
static val* varonce183;
val* var184 /* : String */;
char* var185 /* : NativeString */;
val* var186 /* : FlatString */;
static val* varonce187;
val* var188 /* : String */;
char* var189 /* : NativeString */;
val* var190 /* : FlatString */;
static val* varonce191;
val* var192 /* : String */;
char* var193 /* : NativeString */;
val* var194 /* : FlatString */;
static val* varonce195;
val* var196 /* : String */;
char* var197 /* : NativeString */;
val* var198 /* : FlatString */;
static val* varonce199;
val* var200 /* : String */;
char* var201 /* : NativeString */;
val* var202 /* : FlatString */;
val* var203 /* : String */;
val* var204 /* : nullable Object */;
val* var205 /* : String */;
val* var206 /* : String */;
val* var207 /* : nullable Object */;
val* var208 /* : String */;
val* var209 /* : String */;
short int var210 /* : Bool */;
short int var211 /* : Bool */;
int cltype212;
int idtype213;
short int var_214 /* var : Bool */;
val* var215 /* : AbstractCompiler */;
val* var217 /* : AbstractCompiler */;
val* var218 /* : ModelBuilder */;
val* var220 /* : ModelBuilder */;
val* var221 /* : ToolContext */;
val* var223 /* : ToolContext */;
val* var224 /* : OptionBool */;
val* var226 /* : OptionBool */;
val* var227 /* : nullable Object */;
val* var229 /* : nullable Object */;
short int var230 /* : Bool */;
static val* varonce231;
val* var232 /* : String */;
char* var233 /* : NativeString */;
val* var234 /* : FlatString */;
val* var235 /* : String */;
val* var_callsym236 /* var callsym: String */;
val* var238 /* : NativeArray[String] */;
static val* varonce237;
static val* varonce239;
val* var240 /* : String */;
char* var241 /* : NativeString */;
val* var242 /* : FlatString */;
static val* varonce243;
val* var244 /* : String */;
char* var245 /* : NativeString */;
val* var246 /* : FlatString */;
val* var247 /* : String */;
val* var249 /* : NativeArray[String] */;
static val* varonce248;
static val* varonce250;
val* var251 /* : String */;
char* var252 /* : NativeString */;
val* var253 /* : FlatString */;
static val* varonce254;
val* var255 /* : String */;
char* var256 /* : NativeString */;
val* var257 /* : FlatString */;
static val* varonce258;
val* var259 /* : String */;
char* var260 /* : NativeString */;
val* var261 /* : FlatString */;
static val* varonce262;
val* var263 /* : String */;
char* var264 /* : NativeString */;
val* var265 /* : FlatString */;
static val* varonce266;
val* var267 /* : String */;
char* var268 /* : NativeString */;
val* var269 /* : FlatString */;
static val* varonce270;
val* var271 /* : String */;
char* var272 /* : NativeString */;
val* var273 /* : FlatString */;
static val* varonce274;
val* var275 /* : String */;
char* var276 /* : NativeString */;
val* var277 /* : FlatString */;
val* var278 /* : String */;
val* var279 /* : nullable Object */;
val* var280 /* : String */;
val* var281 /* : String */;
val* var282 /* : nullable Object */;
val* var283 /* : String */;
val* var284 /* : String */;
static val* varonce285;
val* var286 /* : String */;
char* var287 /* : NativeString */;
val* var288 /* : FlatString */;
val* var290 /* : NativeArray[String] */;
static val* varonce289;
static val* varonce291;
val* var292 /* : String */;
char* var293 /* : NativeString */;
val* var294 /* : FlatString */;
static val* varonce295;
val* var296 /* : String */;
char* var297 /* : NativeString */;
val* var298 /* : FlatString */;
static val* varonce299;
val* var300 /* : String */;
char* var301 /* : NativeString */;
val* var302 /* : FlatString */;
static val* varonce303;
val* var304 /* : String */;
char* var305 /* : NativeString */;
val* var306 /* : FlatString */;
val* var307 /* : String */;
val* var308 /* : nullable Object */;
val* var309 /* : String */;
val* var310 /* : String */;
static val* varonce311;
val* var312 /* : String */;
char* var313 /* : NativeString */;
val* var314 /* : FlatString */;
short int var315 /* : Bool */;
short int var316 /* : Bool */;
int cltype317;
int idtype318;
short int var_319 /* var : Bool */;
val* var320 /* : AbstractCompiler */;
val* var322 /* : AbstractCompiler */;
val* var323 /* : ModelBuilder */;
val* var325 /* : ModelBuilder */;
val* var326 /* : ToolContext */;
val* var328 /* : ToolContext */;
val* var329 /* : OptionBool */;
val* var331 /* : OptionBool */;
val* var332 /* : nullable Object */;
val* var334 /* : nullable Object */;
short int var335 /* : Bool */;
static val* varonce336;
val* var337 /* : String */;
char* var338 /* : NativeString */;
val* var339 /* : FlatString */;
val* var340 /* : String */;
val* var_callsym341 /* var callsym: String */;
val* var343 /* : NativeArray[String] */;
static val* varonce342;
static val* varonce344;
val* var345 /* : String */;
char* var346 /* : NativeString */;
val* var347 /* : FlatString */;
static val* varonce348;
val* var349 /* : String */;
char* var350 /* : NativeString */;
val* var351 /* : FlatString */;
static val* varonce352;
val* var353 /* : String */;
char* var354 /* : NativeString */;
val* var355 /* : FlatString */;
static val* varonce356;
val* var357 /* : String */;
char* var358 /* : NativeString */;
val* var359 /* : FlatString */;
val* var360 /* : String */;
val* var361 /* : nullable Object */;
val* var362 /* : String */;
val* var363 /* : String */;
val* var365 /* : NativeArray[String] */;
static val* varonce364;
static val* varonce366;
val* var367 /* : String */;
char* var368 /* : NativeString */;
val* var369 /* : FlatString */;
static val* varonce370;
val* var371 /* : String */;
char* var372 /* : NativeString */;
val* var373 /* : FlatString */;
static val* varonce374;
val* var375 /* : String */;
char* var376 /* : NativeString */;
val* var377 /* : FlatString */;
static val* varonce378;
val* var379 /* : String */;
char* var380 /* : NativeString */;
val* var381 /* : FlatString */;
static val* varonce382;
val* var383 /* : String */;
char* var384 /* : NativeString */;
val* var385 /* : FlatString */;
static val* varonce386;
val* var387 /* : String */;
char* var388 /* : NativeString */;
val* var389 /* : FlatString */;
static val* varonce390;
val* var391 /* : String */;
char* var392 /* : NativeString */;
val* var393 /* : FlatString */;
val* var394 /* : String */;
val* var395 /* : nullable Object */;
val* var396 /* : String */;
val* var397 /* : String */;
val* var398 /* : nullable Object */;
val* var399 /* : String */;
val* var400 /* : String */;
short int var401 /* : Bool */;
short int var402 /* : Bool */;
short int var404 /* : Bool */;
short int var405 /* : Bool */;
short int var406 /* : Bool */;
short int var407 /* : Bool */;
short int var409 /* : Bool */;
short int var410 /* : Bool */;
static val* varonce411;
val* var412 /* : String */;
char* var413 /* : NativeString */;
val* var414 /* : FlatString */;
var_mmethod = p0;
var_arguments = p1;
var_mentity = p2;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var3 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var1) on <var1:AbstractCompiler(SeparateCompiler)> */
var6 = var1->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var1:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_ = var4;
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_tables (var_) on <var_:ModelBuilder> */
var9 = var_->attrs[COLOR_nit__separate_compiler__ModelBuilder___nb_invok_by_tables].l; /* _nb_invok_by_tables on <var_:ModelBuilder> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var7,1l) on <var7:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var12 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var13 = var7 + 1l;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_tables= (var_,var10) on <var_:ModelBuilder> */
var_->attrs[COLOR_nit__separate_compiler__ModelBuilder___nb_invok_by_tables].l = var10; /* _nb_invok_by_tables on <var_:ModelBuilder> */
RET_LABEL14:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var17 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var15) on <var15:AbstractCompiler(SeparateCompiler)> */
var20 = var15->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var15:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var18) on <var18:ModelBuilder> */
var23 = var18->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var18:ModelBuilder> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_invocation_metrics (var21) on <var21:ToolContext> */
var26 = var21->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_invocation_metrics].val; /* _opt_invocation_metrics on <var21:ToolContext> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_invocation_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 62);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline opts#Option#value (var24) on <var24:OptionBool> */
var29 = var24->attrs[COLOR_opts__Option___value].val; /* _value on <var24:OptionBool> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
var30 = (short int)((long)(var27)>>2);
if (var30){
if (likely(varonce!=NULL)) {
var31 = varonce;
} else {
var32 = "count_invoke_by_tables++;";
var33 = standard___standard__NativeString___to_s_with_length(var32, 25l);
var31 = var33;
varonce = var31;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var31); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
}
{
{ /* Inline array#AbstractArrayRead#length (var_arguments) on <var_arguments:Array[RuntimeVariable]> */
var36 = var_arguments->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var_mmethod) on <var_mmethod:MMethod> */
var39 = var_mmethod->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var_mmethod:MMethod> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1968);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var37) on <var37:MPropDef(MMethodDef)> */
var42 = var37->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var37:MPropDef(MMethodDef)> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
if (var40 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1440);
fatal_exit(1);
} else {
var43 = nit___nit__MSignature___arity(var40);
}
{
{ /* Inline kernel#Int#+ (var43,1l) on <var43:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var46 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var50 = var43 + 1l;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var34,var44) on <var34:Int> */
var53 = var34 == var44;
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
if (unlikely(!var51)) {
if (unlikely(varonce54==NULL)) {
var55 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = "Invalid arity for ";
var59 = standard___standard__NativeString___to_s_with_length(var58, 18l);
var57 = var59;
varonce56 = var57;
}
((struct instance_standard__NativeArray*)var55)->values[0]=var57;
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = ". ";
var63 = standard___standard__NativeString___to_s_with_length(var62, 2l);
var61 = var63;
varonce60 = var61;
}
((struct instance_standard__NativeArray*)var55)->values[2]=var61;
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = " arguments given.";
var67 = standard___standard__NativeString___to_s_with_length(var66, 17l);
var65 = var67;
varonce64 = var65;
}
((struct instance_standard__NativeArray*)var55)->values[4]=var65;
} else {
var55 = varonce54;
varonce54 = NULL;
}
{
var68 = ((val*(*)(val* self))(var_mmethod->class->vft[COLOR_standard__string__Object__to_s]))(var_mmethod); /* to_s on <var_mmethod:MMethod>*/
}
((struct instance_standard__NativeArray*)var55)->values[1]=var68;
{
{ /* Inline array#AbstractArrayRead#length (var_arguments) on <var_arguments:Array[RuntimeVariable]> */
var71 = var_arguments->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var69 = var71;
RET_LABEL70:(void)0;
}
}
var72 = standard__string___Int___Object__to_s(var69);
((struct instance_standard__NativeArray*)var55)->values[3]=var72;
{
var73 = ((val*(*)(val* self))(var55->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var55); /* native_to_s on <var55:NativeArray[String]>*/
}
varonce54 = var55;
{
nit___nit__AbstractCompilerVisitor___debug(self, var73); /* Direct call abstract_compiler#AbstractCompilerVisitor#debug on <self:SeparateCompilerVisitor>*/
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1440);
fatal_exit(1);
}
{
var74 = nit___nit__SeparateCompilerVisitor___before_send(self, var_mmethod, var_arguments);
}
var_res0 = var74;
{
{ /* Inline model#MProperty#intro (var_mmethod) on <var_mmethod:MMethod> */
var77 = var_mmethod->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var_mmethod:MMethod> */
if (unlikely(var77 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1968);
fatal_exit(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
{
var78 = nit__separate_compiler___MMethodDef___virtual_runtime_function(var75);
}
var_runtime_function = var78;
{
{ /* Inline separate_compiler#SeparateRuntimeFunction#called_signature (var_runtime_function) on <var_runtime_function:SeparateRuntimeFunction> */
var81 = var_runtime_function->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___called_signature].val; /* _called_signature on <var_runtime_function:SeparateRuntimeFunction> */
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_signature");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 2173);
fatal_exit(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
var_msignature = var79;
{
{ /* Inline model#MProperty#intro (var_mmethod) on <var_mmethod:MMethod> */
var84 = var_mmethod->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var_mmethod:MMethod> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1968);
fatal_exit(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__adapt_signature(self, var82, var_arguments); /* Direct call separate_compiler#SeparateCompilerVisitor#adapt_signature on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:MSignature> */
var87 = var_msignature->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:MSignature> */
var85 = var87;
RET_LABEL86:(void)0;
}
}
var_ret = var85;
if (var_ret == NULL) {
var88 = 1; /* is null */
} else {
var88 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_ret,var_other) on <var_ret:nullable MType(MType)> */
var93 = var_ret == var_other;
var91 = var93;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
}
var89 = var91;
goto RET_LABEL90;
RET_LABEL90:(void)0;
}
var88 = var89;
}
if (var88){
var_res = ((val*)NULL);
} else {
{
var94 = nit___nit__AbstractCompilerVisitor___new_var(self, var_ret);
}
var_res = var94;
}
if (likely(varonce95!=NULL)) {
var96 = varonce95;
} else {
var97 = ", ";
var98 = standard___standard__NativeString___to_s_with_length(var97, 2l);
var96 = var98;
varonce95 = var96;
}
{
var99 = standard__string___Collection___join(var_arguments, var96);
}
var_ss = var99;
{
var100 = nit__separate_compiler___MEntity___const_color(var_mentity);
}
var_const_color = var100;
if (var_res == NULL) {
var101 = 0; /* is null */
} else {
var101 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,((val*)NULL)) on <var_res:nullable RuntimeVariable> */
var_other104 = ((val*)NULL);
{
var105 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other104); /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
var106 = !var105;
var102 = var106;
goto RET_LABEL103;
RET_LABEL103:(void)0;
}
var101 = var102;
}
if (var101){
if (unlikely(varonce107==NULL)) {
var108 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce109!=NULL)) {
var110 = varonce109;
} else {
var111 = " = ";
var112 = standard___standard__NativeString___to_s_with_length(var111, 3l);
var110 = var112;
varonce109 = var110;
}
((struct instance_standard__NativeArray*)var108)->values[1]=var110;
} else {
var108 = varonce107;
varonce107 = NULL;
}
{
var113 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var108)->values[0]=var113;
{
var114 = ((val*(*)(val* self))(var108->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var108); /* native_to_s on <var108:NativeArray[String]>*/
}
varonce107 = var108;
var_ress = var114;
} else {
if (likely(varonce115!=NULL)) {
var116 = varonce115;
} else {
var117 = "";
var118 = standard___standard__NativeString___to_s_with_length(var117, 0l);
var116 = var118;
varonce115 = var116;
}
var_ress = var116;
}
/* <var_mentity:MEntity> isa MMethod */
cltype121 = type_nit__MMethod.color;
idtype122 = type_nit__MMethod.id;
if(cltype121 >= var_mentity->type->table_size) {
var120 = 0;
} else {
var120 = var_mentity->type->type_table[cltype121] == idtype122;
}
var_123 = var120;
if (var120){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var126 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var126 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var124 = var126;
RET_LABEL125:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var124) on <var124:AbstractCompiler(SeparateCompiler)> */
var129 = var124->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var124:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var129 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var127 = var129;
RET_LABEL128:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var127) on <var127:ModelBuilder> */
var132 = var127->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var127:ModelBuilder> */
if (unlikely(var132 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var130 = var132;
RET_LABEL131:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_direct_call_monomorph0 (var130) on <var130:ToolContext> */
var135 = var130->attrs[COLOR_nit__separate_compiler__ToolContext___opt_direct_call_monomorph0].val; /* _opt_direct_call_monomorph0 on <var130:ToolContext> */
if (unlikely(var135 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_direct_call_monomorph0");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 52);
fatal_exit(1);
}
var133 = var135;
RET_LABEL134:(void)0;
}
}
{
{ /* Inline opts#Option#value (var133) on <var133:OptionBool> */
var138 = var133->attrs[COLOR_opts__Option___value].val; /* _value on <var133:OptionBool> */
var136 = var138;
RET_LABEL137:(void)0;
}
}
var139 = (short int)((long)(var136)>>2);
var119 = var139;
} else {
var119 = var_123;
}
if (var119){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var142 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
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
var143 = nit___nit__SeparateCompiler___is_monomorphic(var140, var_mentity);
}
var_md = var143;
if (var_md == NULL) {
var144 = 0; /* is null */
} else {
var144 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_md,((val*)NULL)) on <var_md:nullable MMethodDef> */
var_other104 = ((val*)NULL);
{
var147 = ((short int(*)(val* self, val* p0))(var_md->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_md, var_other104); /* == on <var_md:nullable MMethodDef(MMethodDef)>*/
}
var148 = !var147;
var145 = var148;
goto RET_LABEL146;
RET_LABEL146:(void)0;
}
var144 = var145;
}
if (var144){
{
var149 = nit__separate_compiler___MMethodDef___virtual_runtime_function(var_md);
}
{
var150 = nit___nit__AbstractRuntimeFunction___c_name(var149);
}
var_callsym = var150;
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var_callsym); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce151==NULL)) {
var152 = NEW_standard__NativeArray(9l, &type_standard__NativeArray__standard__String);
if (likely(varonce153!=NULL)) {
var154 = varonce153;
} else {
var155 = "(";
var156 = standard___standard__NativeString___to_s_with_length(var155, 1l);
var154 = var156;
varonce153 = var154;
}
((struct instance_standard__NativeArray*)var152)->values[2]=var154;
if (likely(varonce157!=NULL)) {
var158 = varonce157;
} else {
var159 = "); /* ";
var160 = standard___standard__NativeString___to_s_with_length(var159, 6l);
var158 = var160;
varonce157 = var158;
}
((struct instance_standard__NativeArray*)var152)->values[4]=var158;
if (likely(varonce161!=NULL)) {
var162 = varonce161;
} else {
var163 = " on ";
var164 = standard___standard__NativeString___to_s_with_length(var163, 4l);
var162 = var164;
varonce161 = var162;
}
((struct instance_standard__NativeArray*)var152)->values[6]=var162;
if (likely(varonce165!=NULL)) {
var166 = varonce165;
} else {
var167 = "*/";
var168 = standard___standard__NativeString___to_s_with_length(var167, 2l);
var166 = var168;
varonce165 = var166;
}
((struct instance_standard__NativeArray*)var152)->values[8]=var166;
} else {
var152 = varonce151;
varonce151 = NULL;
}
((struct instance_standard__NativeArray*)var152)->values[0]=var_ress;
((struct instance_standard__NativeArray*)var152)->values[1]=var_callsym;
((struct instance_standard__NativeArray*)var152)->values[3]=var_ss;
{
var169 = ((val*(*)(val* self))(var_mmethod->class->vft[COLOR_standard__string__Object__to_s]))(var_mmethod); /* to_s on <var_mmethod:MMethod>*/
}
((struct instance_standard__NativeArray*)var152)->values[5]=var169;
{
var170 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
var171 = nit___nit__RuntimeVariable___standard__string__Object__inspect(var170);
}
((struct instance_standard__NativeArray*)var152)->values[7]=var171;
{
var172 = ((val*(*)(val* self))(var152->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var152); /* native_to_s on <var152:NativeArray[String]>*/
}
varonce151 = var152;
{
nit___nit__AbstractCompilerVisitor___add(self, var172); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var_const_color); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce173==NULL)) {
var174 = NEW_standard__NativeArray(14l, &type_standard__NativeArray__standard__String);
if (likely(varonce175!=NULL)) {
var176 = varonce175;
} else {
var177 = "((";
var178 = standard___standard__NativeString___to_s_with_length(var177, 2l);
var176 = var178;
varonce175 = var176;
}
((struct instance_standard__NativeArray*)var174)->values[1]=var176;
if (likely(varonce179!=NULL)) {
var180 = varonce179;
} else {
var181 = ")(";
var182 = standard___standard__NativeString___to_s_with_length(var181, 2l);
var180 = var182;
varonce179 = var180;
}
((struct instance_standard__NativeArray*)var174)->values[3]=var180;
if (likely(varonce183!=NULL)) {
var184 = varonce183;
} else {
var185 = "->vft[";
var186 = standard___standard__NativeString___to_s_with_length(var185, 6l);
var184 = var186;
varonce183 = var184;
}
((struct instance_standard__NativeArray*)var174)->values[5]=var184;
if (likely(varonce187!=NULL)) {
var188 = varonce187;
} else {
var189 = "]))(";
var190 = standard___standard__NativeString___to_s_with_length(var189, 4l);
var188 = var190;
varonce187 = var188;
}
((struct instance_standard__NativeArray*)var174)->values[7]=var188;
if (likely(varonce191!=NULL)) {
var192 = varonce191;
} else {
var193 = "); /* ";
var194 = standard___standard__NativeString___to_s_with_length(var193, 6l);
var192 = var194;
varonce191 = var192;
}
((struct instance_standard__NativeArray*)var174)->values[9]=var192;
if (likely(varonce195!=NULL)) {
var196 = varonce195;
} else {
var197 = " on ";
var198 = standard___standard__NativeString___to_s_with_length(var197, 4l);
var196 = var198;
varonce195 = var196;
}
((struct instance_standard__NativeArray*)var174)->values[11]=var196;
if (likely(varonce199!=NULL)) {
var200 = varonce199;
} else {
var201 = "*/";
var202 = standard___standard__NativeString___to_s_with_length(var201, 2l);
var200 = var202;
varonce199 = var200;
}
((struct instance_standard__NativeArray*)var174)->values[13]=var200;
} else {
var174 = varonce173;
varonce173 = NULL;
}
((struct instance_standard__NativeArray*)var174)->values[0]=var_ress;
{
var203 = nit___nit__SeparateRuntimeFunction___c_funptrtype(var_runtime_function);
}
((struct instance_standard__NativeArray*)var174)->values[2]=var203;
{
var204 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
var205 = nit___nit__SeparateCompilerVisitor___class_info(self, var204);
}
((struct instance_standard__NativeArray*)var174)->values[4]=var205;
((struct instance_standard__NativeArray*)var174)->values[6]=var_const_color;
((struct instance_standard__NativeArray*)var174)->values[8]=var_ss;
{
var206 = ((val*(*)(val* self))(var_mmethod->class->vft[COLOR_standard__string__Object__to_s]))(var_mmethod); /* to_s on <var_mmethod:MMethod>*/
}
((struct instance_standard__NativeArray*)var174)->values[10]=var206;
{
var207 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
var208 = nit___nit__RuntimeVariable___standard__string__Object__inspect(var207);
}
((struct instance_standard__NativeArray*)var174)->values[12]=var208;
{
var209 = ((val*(*)(val* self))(var174->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var174); /* native_to_s on <var174:NativeArray[String]>*/
}
varonce173 = var174;
{
nit___nit__AbstractCompilerVisitor___add(self, var209); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
} else {
/* <var_mentity:MEntity> isa MMethod */
cltype212 = type_nit__MMethod.color;
idtype213 = type_nit__MMethod.id;
if(cltype212 >= var_mentity->type->table_size) {
var211 = 0;
} else {
var211 = var_mentity->type->type_table[cltype212] == idtype213;
}
var_214 = var211;
if (var211){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var217 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var217 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var215 = var217;
RET_LABEL216:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var215) on <var215:AbstractCompiler(SeparateCompiler)> */
var220 = var215->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var215:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var220 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var218 = var220;
RET_LABEL219:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var218) on <var218:ModelBuilder> */
var223 = var218->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var218:ModelBuilder> */
if (unlikely(var223 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var221 = var223;
RET_LABEL222:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_guard_call (var221) on <var221:ToolContext> */
var226 = var221->attrs[COLOR_nit__separate_compiler__ToolContext___opt_guard_call].val; /* _opt_guard_call on <var221:ToolContext> */
if (unlikely(var226 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_guard_call");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 39);
fatal_exit(1);
}
var224 = var226;
RET_LABEL225:(void)0;
}
}
{
{ /* Inline opts#Option#value (var224) on <var224:OptionBool> */
var229 = var224->attrs[COLOR_opts__Option___value].val; /* _value on <var224:OptionBool> */
var227 = var229;
RET_LABEL228:(void)0;
}
}
var230 = (short int)((long)(var227)>>2);
var210 = var230;
} else {
var210 = var_214;
}
if (var210){
if (likely(varonce231!=NULL)) {
var232 = varonce231;
} else {
var233 = "CALL_";
var234 = standard___standard__NativeString___to_s_with_length(var233, 5l);
var232 = var234;
varonce231 = var232;
}
{
var235 = ((val*(*)(val* self, val* p0))(var232->class->vft[COLOR_standard__string__String___43d]))(var232, var_const_color); /* + on <var232:String>*/
}
var_callsym236 = var235;
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var_callsym236); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce237==NULL)) {
var238 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce239!=NULL)) {
var240 = varonce239;
} else {
var241 = "if (!";
var242 = standard___standard__NativeString___to_s_with_length(var241, 5l);
var240 = var242;
varonce239 = var240;
}
((struct instance_standard__NativeArray*)var238)->values[0]=var240;
if (likely(varonce243!=NULL)) {
var244 = varonce243;
} else {
var245 = ") {";
var246 = standard___standard__NativeString___to_s_with_length(var245, 3l);
var244 = var246;
varonce243 = var244;
}
((struct instance_standard__NativeArray*)var238)->values[2]=var244;
} else {
var238 = varonce237;
varonce237 = NULL;
}
((struct instance_standard__NativeArray*)var238)->values[1]=var_callsym236;
{
var247 = ((val*(*)(val* self))(var238->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var238); /* native_to_s on <var238:NativeArray[String]>*/
}
varonce237 = var238;
{
nit___nit__AbstractCompilerVisitor___add(self, var247); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var_const_color); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce248==NULL)) {
var249 = NEW_standard__NativeArray(14l, &type_standard__NativeArray__standard__String);
if (likely(varonce250!=NULL)) {
var251 = varonce250;
} else {
var252 = "((";
var253 = standard___standard__NativeString___to_s_with_length(var252, 2l);
var251 = var253;
varonce250 = var251;
}
((struct instance_standard__NativeArray*)var249)->values[1]=var251;
if (likely(varonce254!=NULL)) {
var255 = varonce254;
} else {
var256 = ")(";
var257 = standard___standard__NativeString___to_s_with_length(var256, 2l);
var255 = var257;
varonce254 = var255;
}
((struct instance_standard__NativeArray*)var249)->values[3]=var255;
if (likely(varonce258!=NULL)) {
var259 = varonce258;
} else {
var260 = "->vft[";
var261 = standard___standard__NativeString___to_s_with_length(var260, 6l);
var259 = var261;
varonce258 = var259;
}
((struct instance_standard__NativeArray*)var249)->values[5]=var259;
if (likely(varonce262!=NULL)) {
var263 = varonce262;
} else {
var264 = "]))(";
var265 = standard___standard__NativeString___to_s_with_length(var264, 4l);
var263 = var265;
varonce262 = var263;
}
((struct instance_standard__NativeArray*)var249)->values[7]=var263;
if (likely(varonce266!=NULL)) {
var267 = varonce266;
} else {
var268 = "); /* ";
var269 = standard___standard__NativeString___to_s_with_length(var268, 6l);
var267 = var269;
varonce266 = var267;
}
((struct instance_standard__NativeArray*)var249)->values[9]=var267;
if (likely(varonce270!=NULL)) {
var271 = varonce270;
} else {
var272 = " on ";
var273 = standard___standard__NativeString___to_s_with_length(var272, 4l);
var271 = var273;
varonce270 = var271;
}
((struct instance_standard__NativeArray*)var249)->values[11]=var271;
if (likely(varonce274!=NULL)) {
var275 = varonce274;
} else {
var276 = "*/";
var277 = standard___standard__NativeString___to_s_with_length(var276, 2l);
var275 = var277;
varonce274 = var275;
}
((struct instance_standard__NativeArray*)var249)->values[13]=var275;
} else {
var249 = varonce248;
varonce248 = NULL;
}
((struct instance_standard__NativeArray*)var249)->values[0]=var_ress;
{
var278 = nit___nit__SeparateRuntimeFunction___c_funptrtype(var_runtime_function);
}
((struct instance_standard__NativeArray*)var249)->values[2]=var278;
{
var279 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
var280 = nit___nit__SeparateCompilerVisitor___class_info(self, var279);
}
((struct instance_standard__NativeArray*)var249)->values[4]=var280;
((struct instance_standard__NativeArray*)var249)->values[6]=var_const_color;
((struct instance_standard__NativeArray*)var249)->values[8]=var_ss;
{
var281 = ((val*(*)(val* self))(var_mmethod->class->vft[COLOR_standard__string__Object__to_s]))(var_mmethod); /* to_s on <var_mmethod:MMethod>*/
}
((struct instance_standard__NativeArray*)var249)->values[10]=var281;
{
var282 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
var283 = nit___nit__RuntimeVariable___standard__string__Object__inspect(var282);
}
((struct instance_standard__NativeArray*)var249)->values[12]=var283;
{
var284 = ((val*(*)(val* self))(var249->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var249); /* native_to_s on <var249:NativeArray[String]>*/
}
varonce248 = var249;
{
nit___nit__AbstractCompilerVisitor___add(self, var284); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (likely(varonce285!=NULL)) {
var286 = varonce285;
} else {
var287 = "} else {";
var288 = standard___standard__NativeString___to_s_with_length(var287, 8l);
var286 = var288;
varonce285 = var286;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var286); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce289==NULL)) {
var290 = NEW_standard__NativeArray(9l, &type_standard__NativeArray__standard__String);
if (likely(varonce291!=NULL)) {
var292 = varonce291;
} else {
var293 = "(";
var294 = standard___standard__NativeString___to_s_with_length(var293, 1l);
var292 = var294;
varonce291 = var292;
}
((struct instance_standard__NativeArray*)var290)->values[2]=var292;
if (likely(varonce295!=NULL)) {
var296 = varonce295;
} else {
var297 = "); /* ";
var298 = standard___standard__NativeString___to_s_with_length(var297, 6l);
var296 = var298;
varonce295 = var296;
}
((struct instance_standard__NativeArray*)var290)->values[4]=var296;
if (likely(varonce299!=NULL)) {
var300 = varonce299;
} else {
var301 = " on ";
var302 = standard___standard__NativeString___to_s_with_length(var301, 4l);
var300 = var302;
varonce299 = var300;
}
((struct instance_standard__NativeArray*)var290)->values[6]=var300;
if (likely(varonce303!=NULL)) {
var304 = varonce303;
} else {
var305 = "*/";
var306 = standard___standard__NativeString___to_s_with_length(var305, 2l);
var304 = var306;
varonce303 = var304;
}
((struct instance_standard__NativeArray*)var290)->values[8]=var304;
} else {
var290 = varonce289;
varonce289 = NULL;
}
((struct instance_standard__NativeArray*)var290)->values[0]=var_ress;
((struct instance_standard__NativeArray*)var290)->values[1]=var_callsym236;
((struct instance_standard__NativeArray*)var290)->values[3]=var_ss;
{
var307 = ((val*(*)(val* self))(var_mmethod->class->vft[COLOR_standard__string__Object__to_s]))(var_mmethod); /* to_s on <var_mmethod:MMethod>*/
}
((struct instance_standard__NativeArray*)var290)->values[5]=var307;
{
var308 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
var309 = nit___nit__RuntimeVariable___standard__string__Object__inspect(var308);
}
((struct instance_standard__NativeArray*)var290)->values[7]=var309;
{
var310 = ((val*(*)(val* self))(var290->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var290); /* native_to_s on <var290:NativeArray[String]>*/
}
varonce289 = var290;
{
nit___nit__AbstractCompilerVisitor___add(self, var310); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (likely(varonce311!=NULL)) {
var312 = varonce311;
} else {
var313 = "}";
var314 = standard___standard__NativeString___to_s_with_length(var313, 1l);
var312 = var314;
varonce311 = var312;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var312); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
/* <var_mentity:MEntity> isa MMethod */
cltype317 = type_nit__MMethod.color;
idtype318 = type_nit__MMethod.id;
if(cltype317 >= var_mentity->type->table_size) {
var316 = 0;
} else {
var316 = var_mentity->type->type_table[cltype317] == idtype318;
}
var_319 = var316;
if (var316){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var322 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var322 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var320 = var322;
RET_LABEL321:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var320) on <var320:AbstractCompiler(SeparateCompiler)> */
var325 = var320->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var320:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var325 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var323 = var325;
RET_LABEL324:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var323) on <var323:ModelBuilder> */
var328 = var323->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var323:ModelBuilder> */
if (unlikely(var328 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var326 = var328;
RET_LABEL327:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_trampoline_call (var326) on <var326:ToolContext> */
var331 = var326->attrs[COLOR_nit__separate_compiler__ToolContext___opt_trampoline_call].val; /* _opt_trampoline_call on <var326:ToolContext> */
if (unlikely(var331 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_trampoline_call");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 37);
fatal_exit(1);
}
var329 = var331;
RET_LABEL330:(void)0;
}
}
{
{ /* Inline opts#Option#value (var329) on <var329:OptionBool> */
var334 = var329->attrs[COLOR_opts__Option___value].val; /* _value on <var329:OptionBool> */
var332 = var334;
RET_LABEL333:(void)0;
}
}
var335 = (short int)((long)(var332)>>2);
var315 = var335;
} else {
var315 = var_319;
}
if (var315){
if (likely(varonce336!=NULL)) {
var337 = varonce336;
} else {
var338 = "CALL_";
var339 = standard___standard__NativeString___to_s_with_length(var338, 5l);
var337 = var339;
varonce336 = var337;
}
{
var340 = ((val*(*)(val* self, val* p0))(var337->class->vft[COLOR_standard__string__String___43d]))(var337, var_const_color); /* + on <var337:String>*/
}
var_callsym341 = var340;
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var_callsym341); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce342==NULL)) {
var343 = NEW_standard__NativeArray(9l, &type_standard__NativeArray__standard__String);
if (likely(varonce344!=NULL)) {
var345 = varonce344;
} else {
var346 = "(";
var347 = standard___standard__NativeString___to_s_with_length(var346, 1l);
var345 = var347;
varonce344 = var345;
}
((struct instance_standard__NativeArray*)var343)->values[2]=var345;
if (likely(varonce348!=NULL)) {
var349 = varonce348;
} else {
var350 = "); /* ";
var351 = standard___standard__NativeString___to_s_with_length(var350, 6l);
var349 = var351;
varonce348 = var349;
}
((struct instance_standard__NativeArray*)var343)->values[4]=var349;
if (likely(varonce352!=NULL)) {
var353 = varonce352;
} else {
var354 = " on ";
var355 = standard___standard__NativeString___to_s_with_length(var354, 4l);
var353 = var355;
varonce352 = var353;
}
((struct instance_standard__NativeArray*)var343)->values[6]=var353;
if (likely(varonce356!=NULL)) {
var357 = varonce356;
} else {
var358 = "*/";
var359 = standard___standard__NativeString___to_s_with_length(var358, 2l);
var357 = var359;
varonce356 = var357;
}
((struct instance_standard__NativeArray*)var343)->values[8]=var357;
} else {
var343 = varonce342;
varonce342 = NULL;
}
((struct instance_standard__NativeArray*)var343)->values[0]=var_ress;
((struct instance_standard__NativeArray*)var343)->values[1]=var_callsym341;
((struct instance_standard__NativeArray*)var343)->values[3]=var_ss;
{
var360 = ((val*(*)(val* self))(var_mmethod->class->vft[COLOR_standard__string__Object__to_s]))(var_mmethod); /* to_s on <var_mmethod:MMethod>*/
}
((struct instance_standard__NativeArray*)var343)->values[5]=var360;
{
var361 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
var362 = nit___nit__RuntimeVariable___standard__string__Object__inspect(var361);
}
((struct instance_standard__NativeArray*)var343)->values[7]=var362;
{
var363 = ((val*(*)(val* self))(var343->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var343); /* native_to_s on <var343:NativeArray[String]>*/
}
varonce342 = var343;
{
nit___nit__AbstractCompilerVisitor___add(self, var363); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var_const_color); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce364==NULL)) {
var365 = NEW_standard__NativeArray(14l, &type_standard__NativeArray__standard__String);
if (likely(varonce366!=NULL)) {
var367 = varonce366;
} else {
var368 = "((";
var369 = standard___standard__NativeString___to_s_with_length(var368, 2l);
var367 = var369;
varonce366 = var367;
}
((struct instance_standard__NativeArray*)var365)->values[1]=var367;
if (likely(varonce370!=NULL)) {
var371 = varonce370;
} else {
var372 = ")(";
var373 = standard___standard__NativeString___to_s_with_length(var372, 2l);
var371 = var373;
varonce370 = var371;
}
((struct instance_standard__NativeArray*)var365)->values[3]=var371;
if (likely(varonce374!=NULL)) {
var375 = varonce374;
} else {
var376 = "->vft[";
var377 = standard___standard__NativeString___to_s_with_length(var376, 6l);
var375 = var377;
varonce374 = var375;
}
((struct instance_standard__NativeArray*)var365)->values[5]=var375;
if (likely(varonce378!=NULL)) {
var379 = varonce378;
} else {
var380 = "]))(";
var381 = standard___standard__NativeString___to_s_with_length(var380, 4l);
var379 = var381;
varonce378 = var379;
}
((struct instance_standard__NativeArray*)var365)->values[7]=var379;
if (likely(varonce382!=NULL)) {
var383 = varonce382;
} else {
var384 = "); /* ";
var385 = standard___standard__NativeString___to_s_with_length(var384, 6l);
var383 = var385;
varonce382 = var383;
}
((struct instance_standard__NativeArray*)var365)->values[9]=var383;
if (likely(varonce386!=NULL)) {
var387 = varonce386;
} else {
var388 = " on ";
var389 = standard___standard__NativeString___to_s_with_length(var388, 4l);
var387 = var389;
varonce386 = var387;
}
((struct instance_standard__NativeArray*)var365)->values[11]=var387;
if (likely(varonce390!=NULL)) {
var391 = varonce390;
} else {
var392 = "*/";
var393 = standard___standard__NativeString___to_s_with_length(var392, 2l);
var391 = var393;
varonce390 = var391;
}
((struct instance_standard__NativeArray*)var365)->values[13]=var391;
} else {
var365 = varonce364;
varonce364 = NULL;
}
((struct instance_standard__NativeArray*)var365)->values[0]=var_ress;
{
var394 = nit___nit__SeparateRuntimeFunction___c_funptrtype(var_runtime_function);
}
((struct instance_standard__NativeArray*)var365)->values[2]=var394;
{
var395 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
var396 = nit___nit__SeparateCompilerVisitor___class_info(self, var395);
}
((struct instance_standard__NativeArray*)var365)->values[4]=var396;
((struct instance_standard__NativeArray*)var365)->values[6]=var_const_color;
((struct instance_standard__NativeArray*)var365)->values[8]=var_ss;
{
var397 = ((val*(*)(val* self))(var_mmethod->class->vft[COLOR_standard__string__Object__to_s]))(var_mmethod); /* to_s on <var_mmethod:MMethod>*/
}
((struct instance_standard__NativeArray*)var365)->values[10]=var397;
{
var398 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
var399 = nit___nit__RuntimeVariable___standard__string__Object__inspect(var398);
}
((struct instance_standard__NativeArray*)var365)->values[12]=var399;
{
var400 = ((val*(*)(val* self))(var365->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var365); /* native_to_s on <var365:NativeArray[String]>*/
}
varonce364 = var365;
{
nit___nit__AbstractCompilerVisitor___add(self, var400); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
}
}
if (var_res0 == NULL) {
var401 = 0; /* is null */
} else {
var401 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res0,((val*)NULL)) on <var_res0:nullable RuntimeVariable> */
var_other104 = ((val*)NULL);
{
var404 = ((short int(*)(val* self, val* p0))(var_res0->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res0, var_other104); /* == on <var_res0:nullable RuntimeVariable(RuntimeVariable)>*/
}
var405 = !var404;
var402 = var405;
goto RET_LABEL403;
RET_LABEL403:(void)0;
}
var401 = var402;
}
if (var401){
if (var_res == NULL) {
var406 = 0; /* is null */
} else {
var406 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,((val*)NULL)) on <var_res:nullable RuntimeVariable> */
var_other104 = ((val*)NULL);
{
var409 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other104); /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
var410 = !var409;
var407 = var410;
goto RET_LABEL408;
RET_LABEL408:(void)0;
}
var406 = var407;
}
if (unlikely(!var406)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1498);
fatal_exit(1);
}
{
nit___nit__AbstractCompilerVisitor___assign(self, var_res0, var_res); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <self:SeparateCompilerVisitor>*/
}
var_res = var_res0;
} else {
}
if (likely(varonce411!=NULL)) {
var412 = varonce411;
} else {
var413 = "}";
var414 = standard___standard__NativeString___to_s_with_length(var413, 1l);
var412 = var414;
varonce411 = var412;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var412); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#call for (self: SeparateCompilerVisitor, MMethodDef, MClassType, Array[RuntimeVariable]): nullable RuntimeVariable */
val* nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__call(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable RuntimeVariable */;
val* var_mmethoddef /* var mmethoddef: MMethodDef */;
val* var_recvtype /* var recvtype: MClassType */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
long var1 /* : Int */;
long var3 /* : Int */;
val* var4 /* : nullable MSignature */;
val* var6 /* : nullable MSignature */;
long var7 /* : Int */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : NativeArray[String] */;
static val* varonce;
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
long var29 /* : Int */;
long var31 /* : Int */;
val* var32 /* : String */;
val* var33 /* : String */;
val* var34 /* : nullable MSignature */;
val* var36 /* : nullable MSignature */;
val* var37 /* : nullable MType */;
val* var39 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var46 /* : MClassDef */;
val* var48 /* : MClassDef */;
val* var49 /* : MClassType */;
val* var51 /* : MClassType */;
val* var52 /* : MClassDef */;
val* var54 /* : MClassDef */;
val* var55 /* : MClassType */;
val* var57 /* : MClassType */;
val* var58 /* : MClassDef */;
val* var60 /* : MClassDef */;
val* var61 /* : MModule */;
val* var63 /* : MModule */;
val* var64 /* : MType */;
val* var65 /* : RuntimeVariable */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
short int var70 /* : Bool */;
short int var_ /* var : Bool */;
val* var71 /* : AbstractCompiler */;
val* var73 /* : AbstractCompiler */;
val* var74 /* : ModelBuilder */;
val* var76 /* : ModelBuilder */;
val* var77 /* : ToolContext */;
val* var79 /* : ToolContext */;
val* var80 /* : OptionBool */;
val* var82 /* : OptionBool */;
val* var83 /* : nullable Object */;
val* var85 /* : nullable Object */;
short int var86 /* : Bool */;
short int var87 /* : Bool */;
short int var_88 /* var : Bool */;
short int var89 /* : Bool */;
val* var90 /* : AbstractCompiler */;
val* var92 /* : AbstractCompiler */;
val* var93 /* : ModelBuilder */;
val* var95 /* : ModelBuilder */;
val* var96 /* : ToolContext */;
val* var98 /* : ToolContext */;
val* var99 /* : OptionBool */;
val* var101 /* : OptionBool */;
val* var102 /* : nullable Object */;
val* var104 /* : nullable Object */;
short int var105 /* : Bool */;
short int var_106 /* var : Bool */;
short int var107 /* : Bool */;
val* var108 /* : AbstractCompiler */;
val* var110 /* : AbstractCompiler */;
val* var111 /* : ModelBuilder */;
val* var113 /* : ModelBuilder */;
val* var_114 /* var : ModelBuilder */;
long var115 /* : Int */;
long var117 /* : Int */;
long var118 /* : Int */;
short int var120 /* : Bool */;
int cltype121;
int idtype122;
const char* var_class_name123;
long var124 /* : Int */;
val* var126 /* : AbstractCompiler */;
val* var128 /* : AbstractCompiler */;
val* var129 /* : ModelBuilder */;
val* var131 /* : ModelBuilder */;
val* var132 /* : ToolContext */;
val* var134 /* : ToolContext */;
val* var135 /* : OptionBool */;
val* var137 /* : OptionBool */;
val* var138 /* : nullable Object */;
val* var140 /* : nullable Object */;
short int var141 /* : Bool */;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : NativeString */;
val* var145 /* : FlatString */;
val* var146 /* : StaticFrame */;
val* var_frame /* var frame: StaticFrame */;
static val* varonce147;
val* var148 /* : String */;
char* var149 /* : NativeString */;
val* var150 /* : FlatString */;
val* var151 /* : String */;
val* var154 /* : nullable StaticFrame */;
val* var156 /* : nullable StaticFrame */;
val* var_old_frame /* var old_frame: nullable StaticFrame */;
val* var159 /* : NativeArray[String] */;
static val* varonce158;
static val* varonce160;
val* var161 /* : String */;
char* var162 /* : NativeString */;
val* var163 /* : FlatString */;
static val* varonce164;
val* var165 /* : String */;
char* var166 /* : NativeString */;
val* var167 /* : FlatString */;
static val* varonce168;
val* var169 /* : String */;
char* var170 /* : NativeString */;
val* var171 /* : FlatString */;
static val* varonce172;
val* var173 /* : String */;
char* var174 /* : NativeString */;
val* var175 /* : FlatString */;
val* var176 /* : String */;
static val* varonce177;
val* var178 /* : String */;
char* var179 /* : NativeString */;
val* var180 /* : FlatString */;
val* var181 /* : String */;
val* var182 /* : nullable Object */;
val* var183 /* : String */;
val* var184 /* : String */;
val* var185 /* : nullable RuntimeVariable */;
val* var187 /* : NativeArray[String] */;
static val* varonce186;
static val* varonce188;
val* var189 /* : String */;
char* var190 /* : NativeString */;
val* var191 /* : FlatString */;
val* var192 /* : nullable String */;
val* var194 /* : nullable String */;
val* var195 /* : String */;
static val* varonce196;
val* var197 /* : String */;
char* var198 /* : NativeString */;
val* var199 /* : FlatString */;
val* var201 /* : AbstractCompiler */;
val* var203 /* : AbstractCompiler */;
val* var204 /* : ModelBuilder */;
val* var206 /* : ModelBuilder */;
val* var_207 /* var : ModelBuilder */;
long var208 /* : Int */;
long var210 /* : Int */;
long var211 /* : Int */;
short int var213 /* : Bool */;
int cltype214;
int idtype215;
const char* var_class_name216;
long var217 /* : Int */;
val* var219 /* : AbstractCompiler */;
val* var221 /* : AbstractCompiler */;
val* var222 /* : ModelBuilder */;
val* var224 /* : ModelBuilder */;
val* var225 /* : ToolContext */;
val* var227 /* : ToolContext */;
val* var228 /* : OptionBool */;
val* var230 /* : OptionBool */;
val* var231 /* : nullable Object */;
val* var233 /* : nullable Object */;
short int var234 /* : Bool */;
static val* varonce235;
val* var236 /* : String */;
char* var237 /* : NativeString */;
val* var238 /* : FlatString */;
val* var239 /* : String */;
short int var240 /* : Bool */;
short int var241 /* : Bool */;
short int var243 /* : Bool */;
short int var245 /* : Bool */;
val* var247 /* : NativeArray[String] */;
static val* varonce246;
static val* varonce248;
val* var249 /* : String */;
char* var250 /* : NativeString */;
val* var251 /* : FlatString */;
static val* varonce252;
val* var253 /* : String */;
char* var254 /* : NativeString */;
val* var255 /* : FlatString */;
static val* varonce256;
val* var257 /* : String */;
char* var258 /* : NativeString */;
val* var259 /* : FlatString */;
static val* varonce260;
val* var261 /* : String */;
char* var262 /* : NativeString */;
val* var263 /* : FlatString */;
val* var264 /* : String */;
static val* varonce265;
val* var266 /* : String */;
char* var267 /* : NativeString */;
val* var268 /* : FlatString */;
val* var269 /* : String */;
val* var270 /* : String */;
val* var271 /* : nullable Object */;
val* var272 /* : String */;
val* var273 /* : String */;
val* var275 /* : NativeArray[String] */;
static val* varonce274;
static val* varonce276;
val* var277 /* : String */;
char* var278 /* : NativeString */;
val* var279 /* : FlatString */;
static val* varonce280;
val* var281 /* : String */;
char* var282 /* : NativeString */;
val* var283 /* : FlatString */;
static val* varonce284;
val* var285 /* : String */;
char* var286 /* : NativeString */;
val* var287 /* : FlatString */;
val* var288 /* : String */;
val* var289 /* : String */;
static val* varonce290;
val* var291 /* : String */;
char* var292 /* : NativeString */;
val* var293 /* : FlatString */;
val* var294 /* : String */;
val* var295 /* : String */;
var_mmethoddef = p0;
var_recvtype = p1;
var_arguments = p2;
{
{ /* Inline array#AbstractArrayRead#length (var_arguments) on <var_arguments:Array[RuntimeVariable]> */
var3 = var_arguments->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var6 = var_mmethoddef->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (var4 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1510);
fatal_exit(1);
} else {
var7 = nit___nit__MSignature___arity(var4);
}
{
{ /* Inline kernel#Int#+ (var7,1l) on <var7:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var10 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var11 = var7 + 1l;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var1,var8) on <var1:Int> */
var14 = var1 == var8;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (unlikely(!var12)) {
if (unlikely(varonce==NULL)) {
var15 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "Invalid arity for ";
var19 = standard___standard__NativeString___to_s_with_length(var18, 18l);
var17 = var19;
varonce16 = var17;
}
((struct instance_standard__NativeArray*)var15)->values[0]=var17;
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = ". ";
var23 = standard___standard__NativeString___to_s_with_length(var22, 2l);
var21 = var23;
varonce20 = var21;
}
((struct instance_standard__NativeArray*)var15)->values[2]=var21;
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = " arguments given.";
var27 = standard___standard__NativeString___to_s_with_length(var26, 17l);
var25 = var27;
varonce24 = var25;
}
((struct instance_standard__NativeArray*)var15)->values[4]=var25;
} else {
var15 = varonce;
varonce = NULL;
}
{
var28 = ((val*(*)(val* self))(var_mmethoddef->class->vft[COLOR_standard__string__Object__to_s]))(var_mmethoddef); /* to_s on <var_mmethoddef:MMethodDef>*/
}
((struct instance_standard__NativeArray*)var15)->values[1]=var28;
{
{ /* Inline array#AbstractArrayRead#length (var_arguments) on <var_arguments:Array[RuntimeVariable]> */
var31 = var_arguments->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
var32 = standard__string___Int___Object__to_s(var29);
((struct instance_standard__NativeArray*)var15)->values[3]=var32;
{
var33 = ((val*(*)(val* self))(var15->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var15); /* native_to_s on <var15:NativeArray[String]>*/
}
varonce = var15;
{
nit___nit__AbstractCompilerVisitor___debug(self, var33); /* Direct call abstract_compiler#AbstractCompilerVisitor#debug on <self:SeparateCompilerVisitor>*/
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1510);
fatal_exit(1);
}
{
{ /* Inline model#MMethodDef#msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var36 = var_mmethoddef->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
if (var34 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1513);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#return_mtype (var34) on <var34:nullable MSignature> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1768);
fatal_exit(1);
}
var39 = var34->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var34:nullable MSignature> */
var37 = var39;
RET_LABEL38:(void)0;
}
}
var_ret = var37;
if (var_ret == NULL) {
var40 = 1; /* is null */
} else {
var40 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_ret,var_other) on <var_ret:nullable MType(MType)> */
var45 = var_ret == var_other;
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
var40 = var41;
}
if (var40){
var_res = ((val*)NULL);
} else {
{
{ /* Inline model#MPropDef#mclassdef (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var48 = var_mmethoddef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mmethoddef:MMethodDef> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var46) on <var46:MClassDef> */
var51 = var46->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var46:MClassDef> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var54 = var_mmethoddef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mmethoddef:MMethodDef> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var52) on <var52:MClassDef> */
var57 = var52->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var52:MClassDef> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var60 = var_mmethoddef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mmethoddef:MMethodDef> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var58) on <var58:MClassDef> */
var63 = var58->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var58:MClassDef> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
var64 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_ret->class->vft[COLOR_nit__model__MType__resolve_for]))(var_ret, var49, var55, var61, 1); /* resolve_for on <var_ret:nullable MType(MType)>*/
}
var_ret = var64;
{
var65 = nit___nit__AbstractCompilerVisitor___new_var(self, var_ret);
}
var_res = var65;
}
{
{ /* Inline model#MMethodDef#is_intern (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var70 = var_mmethoddef->attrs[COLOR_nit__model__MMethodDef___is_intern].s; /* _is_intern on <var_mmethoddef:MMethodDef> */
var68 = var70;
RET_LABEL69:(void)0;
}
}
var_ = var68;
if (var68){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var73 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var73 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var71 = var73;
RET_LABEL72:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var71) on <var71:AbstractCompiler(SeparateCompiler)> */
var76 = var71->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var71:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var74) on <var74:ModelBuilder> */
var79 = var74->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var74:ModelBuilder> */
if (unlikely(var79 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_no_inline_intern (var77) on <var77:ToolContext> */
var82 = var77->attrs[COLOR_nit__separate_compiler__ToolContext___opt_no_inline_intern].val; /* _opt_no_inline_intern on <var77:ToolContext> */
if (unlikely(var82 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_inline_intern");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 26);
fatal_exit(1);
}
var80 = var82;
RET_LABEL81:(void)0;
}
}
{
{ /* Inline opts#Option#value (var80) on <var80:OptionBool> */
var85 = var80->attrs[COLOR_opts__Option___value].val; /* _value on <var80:OptionBool> */
var83 = var85;
RET_LABEL84:(void)0;
}
}
var86 = (short int)((long)(var83)>>2);
var87 = !var86;
var67 = var87;
} else {
var67 = var_;
}
var_88 = var67;
if (var67){
var66 = var_88;
} else {
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var92 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var92 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var90) on <var90:AbstractCompiler(SeparateCompiler)> */
var95 = var90->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var90:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var95 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var93) on <var93:ModelBuilder> */
var98 = var93->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var93:ModelBuilder> */
if (unlikely(var98 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var96 = var98;
RET_LABEL97:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_inline_some_methods (var96) on <var96:ToolContext> */
var101 = var96->attrs[COLOR_nit__separate_compiler__ToolContext___opt_inline_some_methods].val; /* _opt_inline_some_methods on <var96:ToolContext> */
if (unlikely(var101 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_inline_some_methods");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 48);
fatal_exit(1);
}
var99 = var101;
RET_LABEL100:(void)0;
}
}
{
{ /* Inline opts#Option#value (var99) on <var99:OptionBool> */
var104 = var99->attrs[COLOR_opts__Option___value].val; /* _value on <var99:OptionBool> */
var102 = var104;
RET_LABEL103:(void)0;
}
}
var105 = (short int)((long)(var102)>>2);
var_106 = var105;
if (var105){
{
var107 = nit__abstract_compiler___MMethodDef___can_inline(var_mmethoddef, self);
}
var89 = var107;
} else {
var89 = var_106;
}
var66 = var89;
}
if (var66){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var110 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var110 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var108 = var110;
RET_LABEL109:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var108) on <var108:AbstractCompiler(SeparateCompiler)> */
var113 = var108->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var108:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var113 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var111 = var113;
RET_LABEL112:(void)0;
}
}
var_114 = var111;
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_inline (var_114) on <var_114:ModelBuilder> */
var117 = var_114->attrs[COLOR_nit__separate_compiler__ModelBuilder___nb_invok_by_inline].l; /* _nb_invok_by_inline on <var_114:ModelBuilder> */
var115 = var117;
RET_LABEL116:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var115,1l) on <var115:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var120 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var120)) {
var_class_name123 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name123);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var124 = var115 + 1l;
var118 = var124;
goto RET_LABEL119;
RET_LABEL119:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_inline= (var_114,var118) on <var_114:ModelBuilder> */
var_114->attrs[COLOR_nit__separate_compiler__ModelBuilder___nb_invok_by_inline].l = var118; /* _nb_invok_by_inline on <var_114:ModelBuilder> */
RET_LABEL125:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var128 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var128 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var126 = var128;
RET_LABEL127:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var126) on <var126:AbstractCompiler(SeparateCompiler)> */
var131 = var126->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var126:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var131 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var129 = var131;
RET_LABEL130:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var129) on <var129:ModelBuilder> */
var134 = var129->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var129:ModelBuilder> */
if (unlikely(var134 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var132 = var134;
RET_LABEL133:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_invocation_metrics (var132) on <var132:ToolContext> */
var137 = var132->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_invocation_metrics].val; /* _opt_invocation_metrics on <var132:ToolContext> */
if (unlikely(var137 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_invocation_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 62);
fatal_exit(1);
}
var135 = var137;
RET_LABEL136:(void)0;
}
}
{
{ /* Inline opts#Option#value (var135) on <var135:OptionBool> */
var140 = var135->attrs[COLOR_opts__Option___value].val; /* _value on <var135:OptionBool> */
var138 = var140;
RET_LABEL139:(void)0;
}
}
var141 = (short int)((long)(var138)>>2);
if (var141){
if (likely(varonce142!=NULL)) {
var143 = varonce142;
} else {
var144 = "count_invoke_by_inline++;";
var145 = standard___standard__NativeString___to_s_with_length(var144, 25l);
var143 = var145;
varonce142 = var143;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var143); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
}
var146 = NEW_nit__StaticFrame(&type_nit__StaticFrame);
{
((void(*)(val* self, val* p0))(var146->class->vft[COLOR_nit__abstract_compiler__StaticFrame__visitor_61d]))(var146, self); /* visitor= on <var146:StaticFrame>*/
}
{
((void(*)(val* self, val* p0))(var146->class->vft[COLOR_nit__abstract_compiler__StaticFrame__mpropdef_61d]))(var146, var_mmethoddef); /* mpropdef= on <var146:StaticFrame>*/
}
{
((void(*)(val* self, val* p0))(var146->class->vft[COLOR_nit__abstract_compiler__StaticFrame__receiver_61d]))(var146, var_recvtype); /* receiver= on <var146:StaticFrame>*/
}
{
((void(*)(val* self, val* p0))(var146->class->vft[COLOR_nit__abstract_compiler__StaticFrame__arguments_61d]))(var146, var_arguments); /* arguments= on <var146:StaticFrame>*/
}
{
((void(*)(val* self))(var146->class->vft[COLOR_standard__kernel__Object__init]))(var146); /* init on <var146:StaticFrame>*/
}
var_frame = var146;
if (likely(varonce147!=NULL)) {
var148 = varonce147;
} else {
var149 = "RET_LABEL";
var150 = standard___standard__NativeString___to_s_with_length(var149, 9l);
var148 = var150;
varonce147 = var148;
}
{
var151 = nit___nit__AbstractCompilerVisitor___get_name(self, var148);
}
{
{ /* Inline abstract_compiler#StaticFrame#returnlabel= (var_frame,var151) on <var_frame:StaticFrame> */
var_frame->attrs[COLOR_nit__abstract_compiler__StaticFrame___returnlabel].val = var151; /* _returnlabel on <var_frame:StaticFrame> */
RET_LABEL152:(void)0;
}
}
{
{ /* Inline abstract_compiler#StaticFrame#returnvar= (var_frame,var_res) on <var_frame:StaticFrame> */
var_frame->attrs[COLOR_nit__abstract_compiler__StaticFrame___returnvar].val = var_res; /* _returnvar on <var_frame:StaticFrame> */
RET_LABEL153:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateCompilerVisitor> */
var156 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var154 = var156;
RET_LABEL155:(void)0;
}
}
var_old_frame = var154;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame= (self,var_frame) on <self:SeparateCompilerVisitor> */
self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val = var_frame; /* _frame on <self:SeparateCompilerVisitor> */
RET_LABEL157:(void)0;
}
}
if (unlikely(varonce158==NULL)) {
var159 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce160!=NULL)) {
var161 = varonce160;
} else {
var162 = "{ /* Inline ";
var163 = standard___standard__NativeString___to_s_with_length(var162, 12l);
var161 = var163;
varonce160 = var161;
}
((struct instance_standard__NativeArray*)var159)->values[0]=var161;
if (likely(varonce164!=NULL)) {
var165 = varonce164;
} else {
var166 = " (";
var167 = standard___standard__NativeString___to_s_with_length(var166, 2l);
var165 = var167;
varonce164 = var165;
}
((struct instance_standard__NativeArray*)var159)->values[2]=var165;
if (likely(varonce168!=NULL)) {
var169 = varonce168;
} else {
var170 = ") on ";
var171 = standard___standard__NativeString___to_s_with_length(var170, 5l);
var169 = var171;
varonce168 = var169;
}
((struct instance_standard__NativeArray*)var159)->values[4]=var169;
if (likely(varonce172!=NULL)) {
var173 = varonce172;
} else {
var174 = " */";
var175 = standard___standard__NativeString___to_s_with_length(var174, 3l);
var173 = var175;
varonce172 = var173;
}
((struct instance_standard__NativeArray*)var159)->values[6]=var173;
} else {
var159 = varonce158;
varonce158 = NULL;
}
{
var176 = ((val*(*)(val* self))(var_mmethoddef->class->vft[COLOR_standard__string__Object__to_s]))(var_mmethoddef); /* to_s on <var_mmethoddef:MMethodDef>*/
}
((struct instance_standard__NativeArray*)var159)->values[1]=var176;
if (likely(varonce177!=NULL)) {
var178 = varonce177;
} else {
var179 = ",";
var180 = standard___standard__NativeString___to_s_with_length(var179, 1l);
var178 = var180;
varonce177 = var178;
}
{
var181 = standard__string___Collection___join(var_arguments, var178);
}
((struct instance_standard__NativeArray*)var159)->values[3]=var181;
{
var182 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
var183 = nit___nit__RuntimeVariable___standard__string__Object__inspect(var182);
}
((struct instance_standard__NativeArray*)var159)->values[5]=var183;
{
var184 = ((val*(*)(val* self))(var159->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var159); /* native_to_s on <var159:NativeArray[String]>*/
}
varonce158 = var159;
{
nit___nit__AbstractCompilerVisitor___add(self, var184); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
var185 = nit__abstract_compiler___MMethodDef___compile_inside_to_c(var_mmethoddef, self, var_arguments);
}
if (unlikely(varonce186==NULL)) {
var187 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce188!=NULL)) {
var189 = varonce188;
} else {
var190 = ":(void)0;";
var191 = standard___standard__NativeString___to_s_with_length(var190, 9l);
var189 = var191;
varonce188 = var189;
}
((struct instance_standard__NativeArray*)var187)->values[1]=var189;
} else {
var187 = varonce186;
varonce186 = NULL;
}
{
{ /* Inline abstract_compiler#StaticFrame#returnlabel (var_frame) on <var_frame:StaticFrame> */
var194 = var_frame->attrs[COLOR_nit__abstract_compiler__StaticFrame___returnlabel].val; /* _returnlabel on <var_frame:StaticFrame> */
var192 = var194;
RET_LABEL193:(void)0;
}
}
if (unlikely(var192 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1532);
fatal_exit(1);
}
((struct instance_standard__NativeArray*)var187)->values[0]=var192;
{
var195 = ((val*(*)(val* self))(var187->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var187); /* native_to_s on <var187:NativeArray[String]>*/
}
varonce186 = var187;
{
nit___nit__AbstractCompilerVisitor___add(self, var195); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (likely(varonce196!=NULL)) {
var197 = varonce196;
} else {
var198 = "}";
var199 = standard___standard__NativeString___to_s_with_length(var198, 1l);
var197 = var199;
varonce196 = var197;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var197); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame= (self,var_old_frame) on <self:SeparateCompilerVisitor> */
self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val = var_old_frame; /* _frame on <self:SeparateCompilerVisitor> */
RET_LABEL200:(void)0;
}
}
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var203 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var203 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var201 = var203;
RET_LABEL202:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var201) on <var201:AbstractCompiler(SeparateCompiler)> */
var206 = var201->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var201:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var206 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var204 = var206;
RET_LABEL205:(void)0;
}
}
var_207 = var204;
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_direct (var_207) on <var_207:ModelBuilder> */
var210 = var_207->attrs[COLOR_nit__separate_compiler__ModelBuilder___nb_invok_by_direct].l; /* _nb_invok_by_direct on <var_207:ModelBuilder> */
var208 = var210;
RET_LABEL209:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var208,1l) on <var208:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var213 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var213)) {
var_class_name216 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name216);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var217 = var208 + 1l;
var211 = var217;
goto RET_LABEL212;
RET_LABEL212:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_direct= (var_207,var211) on <var_207:ModelBuilder> */
var_207->attrs[COLOR_nit__separate_compiler__ModelBuilder___nb_invok_by_direct].l = var211; /* _nb_invok_by_direct on <var_207:ModelBuilder> */
RET_LABEL218:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var221 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var221 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var219 = var221;
RET_LABEL220:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var219) on <var219:AbstractCompiler(SeparateCompiler)> */
var224 = var219->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var219:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var224 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var222 = var224;
RET_LABEL223:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var222) on <var222:ModelBuilder> */
var227 = var222->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var222:ModelBuilder> */
if (unlikely(var227 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var225 = var227;
RET_LABEL226:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_invocation_metrics (var225) on <var225:ToolContext> */
var230 = var225->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_invocation_metrics].val; /* _opt_invocation_metrics on <var225:ToolContext> */
if (unlikely(var230 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_invocation_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 62);
fatal_exit(1);
}
var228 = var230;
RET_LABEL229:(void)0;
}
}
{
{ /* Inline opts#Option#value (var228) on <var228:OptionBool> */
var233 = var228->attrs[COLOR_opts__Option___value].val; /* _value on <var228:OptionBool> */
var231 = var233;
RET_LABEL232:(void)0;
}
}
var234 = (short int)((long)(var231)>>2);
if (var234){
if (likely(varonce235!=NULL)) {
var236 = varonce235;
} else {
var237 = "count_invoke_by_direct++;";
var238 = standard___standard__NativeString___to_s_with_length(var237, 25l);
var236 = var238;
varonce235 = var236;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var236); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
}
{
nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__adapt_signature(self, var_mmethoddef, var_arguments); /* Direct call separate_compiler#SeparateCompilerVisitor#adapt_signature on <self:SeparateCompilerVisitor>*/
}
{
var239 = nit___nit__MPropDef___nit__model_base__MEntity__c_name(var_mmethoddef);
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var239); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (var_res == NULL) {
var240 = 1; /* is null */
} else {
var240 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res,((val*)NULL)) on <var_res:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other) on <var_res:nullable RuntimeVariable(RuntimeVariable)> */
var245 = var_res == var_other;
var243 = var245;
goto RET_LABEL244;
RET_LABEL244:(void)0;
}
}
var241 = var243;
goto RET_LABEL242;
RET_LABEL242:(void)0;
}
var240 = var241;
}
if (var240){
if (unlikely(varonce246==NULL)) {
var247 = NEW_standard__NativeArray(8l, &type_standard__NativeArray__standard__String);
if (likely(varonce248!=NULL)) {
var249 = varonce248;
} else {
var250 = "(";
var251 = standard___standard__NativeString___to_s_with_length(var250, 1l);
var249 = var251;
varonce248 = var249;
}
((struct instance_standard__NativeArray*)var247)->values[1]=var249;
if (likely(varonce252!=NULL)) {
var253 = varonce252;
} else {
var254 = "); /* Direct call ";
var255 = standard___standard__NativeString___to_s_with_length(var254, 18l);
var253 = var255;
varonce252 = var253;
}
((struct instance_standard__NativeArray*)var247)->values[3]=var253;
if (likely(varonce256!=NULL)) {
var257 = varonce256;
} else {
var258 = " on ";
var259 = standard___standard__NativeString___to_s_with_length(var258, 4l);
var257 = var259;
varonce256 = var257;
}
((struct instance_standard__NativeArray*)var247)->values[5]=var257;
if (likely(varonce260!=NULL)) {
var261 = varonce260;
} else {
var262 = "*/";
var263 = standard___standard__NativeString___to_s_with_length(var262, 2l);
var261 = var263;
varonce260 = var261;
}
((struct instance_standard__NativeArray*)var247)->values[7]=var261;
} else {
var247 = varonce246;
varonce246 = NULL;
}
{
var264 = nit___nit__MPropDef___nit__model_base__MEntity__c_name(var_mmethoddef);
}
((struct instance_standard__NativeArray*)var247)->values[0]=var264;
if (likely(varonce265!=NULL)) {
var266 = varonce265;
} else {
var267 = ", ";
var268 = standard___standard__NativeString___to_s_with_length(var267, 2l);
var266 = var268;
varonce265 = var266;
}
{
var269 = standard__string___Collection___join(var_arguments, var266);
}
((struct instance_standard__NativeArray*)var247)->values[2]=var269;
{
var270 = ((val*(*)(val* self))(var_mmethoddef->class->vft[COLOR_standard__string__Object__to_s]))(var_mmethoddef); /* to_s on <var_mmethoddef:MMethodDef>*/
}
((struct instance_standard__NativeArray*)var247)->values[4]=var270;
{
var271 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
var272 = nit___nit__RuntimeVariable___standard__string__Object__inspect(var271);
}
((struct instance_standard__NativeArray*)var247)->values[6]=var272;
{
var273 = ((val*(*)(val* self))(var247->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var247); /* native_to_s on <var247:NativeArray[String]>*/
}
varonce246 = var247;
{
nit___nit__AbstractCompilerVisitor___add(self, var273); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
if (unlikely(varonce274==NULL)) {
var275 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce276!=NULL)) {
var277 = varonce276;
} else {
var278 = " = ";
var279 = standard___standard__NativeString___to_s_with_length(var278, 3l);
var277 = var279;
varonce276 = var277;
}
((struct instance_standard__NativeArray*)var275)->values[1]=var277;
if (likely(varonce280!=NULL)) {
var281 = varonce280;
} else {
var282 = "(";
var283 = standard___standard__NativeString___to_s_with_length(var282, 1l);
var281 = var283;
varonce280 = var281;
}
((struct instance_standard__NativeArray*)var275)->values[3]=var281;
if (likely(varonce284!=NULL)) {
var285 = varonce284;
} else {
var286 = ");";
var287 = standard___standard__NativeString___to_s_with_length(var286, 2l);
var285 = var287;
varonce284 = var285;
}
((struct instance_standard__NativeArray*)var275)->values[5]=var285;
} else {
var275 = varonce274;
varonce274 = NULL;
}
{
var288 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var275)->values[0]=var288;
{
var289 = nit___nit__MPropDef___nit__model_base__MEntity__c_name(var_mmethoddef);
}
((struct instance_standard__NativeArray*)var275)->values[2]=var289;
if (likely(varonce290!=NULL)) {
var291 = varonce290;
} else {
var292 = ", ";
var293 = standard___standard__NativeString___to_s_with_length(var292, 2l);
var291 = var293;
varonce290 = var291;
}
{
var294 = standard__string___Collection___join(var_arguments, var291);
}
((struct instance_standard__NativeArray*)var275)->values[4]=var294;
{
var295 = ((val*(*)(val* self))(var275->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var275); /* native_to_s on <var275:NativeArray[String]>*/
}
varonce274 = var275;
{
nit___nit__AbstractCompilerVisitor___add(self, var295); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#supercall for (self: SeparateCompilerVisitor, MMethodDef, MClassType, Array[RuntimeVariable]): nullable RuntimeVariable */
val* nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__supercall(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable RuntimeVariable */;
val* var_m /* var m: MMethodDef */;
val* var_recvtype /* var recvtype: MClassType */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var1 /* : nullable Object */;
val* var2 /* : MType */;
val* var4 /* : MType */;
short int var5 /* : Bool */;
val* var6 /* : AbstractCompiler */;
val* var8 /* : AbstractCompiler */;
val* var9 /* : MModule */;
val* var11 /* : MModule */;
val* var_main /* var main: MModule */;
val* var12 /* : AbstractCompiler */;
val* var14 /* : AbstractCompiler */;
val* var15 /* : AbstractCompiler */;
val* var17 /* : AbstractCompiler */;
val* var18 /* : MModule */;
val* var20 /* : MModule */;
val* var22 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var23 /* : AbstractCompiler */;
val* var25 /* : AbstractCompiler */;
val* var27 /* : MProperty */;
val* var29 /* : MProperty */;
val* var30 /* : nullable RuntimeVariable */;
var_m = p0;
var_recvtype = p1;
var_arguments = p2;
{
var1 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var1) on <var1:nullable Object(RuntimeVariable)> */
var4 = var1->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var1:nullable Object(RuntimeVariable)> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1787);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = ((short int(*)(val* self))(var2->class->vft[COLOR_nit__abstract_compiler__MType__is_c_primitive]))(var2); /* is_c_primitive on <var2:MType>*/
}
if (var5){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var8 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var6) on <var6:AbstractCompiler(SeparateCompiler)> */
var11 = var6->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var6:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 515);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_main = var9;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var14 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var17 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#realmainmodule (var15) on <var15:AbstractCompiler(SeparateCompiler)> */
var20 = var15->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___realmainmodule].val; /* _realmainmodule on <var15:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _realmainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 519);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule= (var12,var18) on <var12:AbstractCompiler(SeparateCompiler)> */
var12->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val = var18; /* _mainmodule on <var12:AbstractCompiler(SeparateCompiler)> */
RET_LABEL21:(void)0;
}
}
{
var22 = nit___nit__AbstractCompilerVisitor___monomorphic_super_send(self, var_m, var_recvtype, var_arguments);
}
var_res = var22;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var25 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule= (var23,var_main) on <var23:AbstractCompiler(SeparateCompiler)> */
var23->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val = var_main; /* _mainmodule on <var23:AbstractCompiler(SeparateCompiler)> */
RET_LABEL26:(void)0;
}
}
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MPropDef#mproperty (var_m) on <var_m:MMethodDef> */
var29 = var_m->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_m:MMethodDef> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
var30 = nit___nit__SeparateCompilerVisitor___table_send(self, var27, var_arguments, var_m);
}
var = var30;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#vararg_instance for (self: SeparateCompilerVisitor, MPropDef, RuntimeVariable, Array[RuntimeVariable], MType): RuntimeVariable */
val* nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__vararg_instance(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var /* : RuntimeVariable */;
val* var_mpropdef /* var mpropdef: MPropDef */;
val* var_recv /* var recv: RuntimeVariable */;
val* var_varargs /* var varargs: Array[RuntimeVariable] */;
val* var_elttype /* var elttype: MType */;
val* var1 /* : nullable StaticFrame */;
val* var3 /* : nullable StaticFrame */;
val* var_old_frame /* var old_frame: nullable StaticFrame */;
val* var4 /* : StaticFrame */;
val* var5 /* : MClassDef */;
val* var7 /* : MClassDef */;
val* var8 /* : MClassType */;
val* var10 /* : MClassType */;
val* var11 /* : Array[RuntimeVariable] */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var_frame /* var frame: StaticFrame */;
val* var13 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
var_mpropdef = p0;
var_recv = p1;
var_varargs = p2;
var_elttype = p3;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateCompilerVisitor> */
var3 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_old_frame = var1;
var4 = NEW_nit__StaticFrame(&type_nit__StaticFrame);
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MPropDef> */
var7 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MPropDef> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var5) on <var5:MClassDef> */
var10 = var5->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var5:MClassDef> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
var11 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
{
standard___standard__Array___with_capacity(var11, 1l); /* Direct call array#Array#with_capacity on <var11:Array[RuntimeVariable]>*/
}
var_ = var11;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_recv); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_nit__abstract_compiler__StaticFrame__visitor_61d]))(var4, self); /* visitor= on <var4:StaticFrame>*/
}
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_nit__abstract_compiler__StaticFrame__mpropdef_61d]))(var4, var_mpropdef); /* mpropdef= on <var4:StaticFrame>*/
}
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_nit__abstract_compiler__StaticFrame__receiver_61d]))(var4, var8); /* receiver= on <var4:StaticFrame>*/
}
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_nit__abstract_compiler__StaticFrame__arguments_61d]))(var4, var_); /* arguments= on <var4:StaticFrame>*/
}
{
((void(*)(val* self))(var4->class->vft[COLOR_standard__kernel__Object__init]))(var4); /* init on <var4:StaticFrame>*/
}
var_frame = var4;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame= (self,var_frame) on <self:SeparateCompilerVisitor> */
self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val = var_frame; /* _frame on <self:SeparateCompilerVisitor> */
RET_LABEL12:(void)0;
}
}
{
var13 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__array_instance(self, var_varargs, var_elttype);
}
var_res = var13;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame= (self,var_old_frame) on <self:SeparateCompilerVisitor> */
self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val = var_old_frame; /* _frame on <self:SeparateCompilerVisitor> */
RET_LABEL14:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#isset_attribute for (self: SeparateCompilerVisitor, MAttribute, RuntimeVariable): RuntimeVariable */
val* nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__isset_attribute(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_a /* var a: MAttribute */;
val* var_recv /* var recv: RuntimeVariable */;
val* var1 /* : MClassType */;
val* var2 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var3 /* : MPropDef */;
val* var5 /* : MPropDef */;
val* var6 /* : nullable MType */;
val* var8 /* : nullable MType */;
val* var_mtype /* var mtype: MType */;
val* var9 /* : MPropDef */;
val* var11 /* : MPropDef */;
val* var12 /* : MClassDef */;
val* var14 /* : MClassDef */;
val* var_intromclassdef /* var intromclassdef: MClassDef */;
val* var15 /* : MClassType */;
val* var17 /* : MClassType */;
val* var18 /* : MClassType */;
val* var20 /* : MClassType */;
val* var21 /* : MModule */;
val* var23 /* : MModule */;
val* var24 /* : MType */;
short int var25 /* : Bool */;
int cltype;
int idtype;
val* var26 /* : NativeArray[String] */;
static val* varonce;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
val* var30 /* : FlatString */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
val* var34 /* : FlatString */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
val* var38 /* : FlatString */;
val* var39 /* : String */;
val* var40 /* : String */;
val* var41 /* : String */;
val* var42 /* : String */;
val* var43 /* : String */;
val* var44 /* : AbstractCompiler */;
val* var46 /* : AbstractCompiler */;
val* var47 /* : ModelBuilder */;
val* var49 /* : ModelBuilder */;
val* var50 /* : ToolContext */;
val* var52 /* : ToolContext */;
val* var53 /* : OptionBool */;
val* var55 /* : OptionBool */;
val* var56 /* : nullable Object */;
val* var58 /* : nullable Object */;
short int var59 /* : Bool */;
val* var61 /* : NativeArray[String] */;
static val* varonce60;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
val* var65 /* : FlatString */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
val* var69 /* : FlatString */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
val* var73 /* : FlatString */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
val* var77 /* : FlatString */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
val* var81 /* : FlatString */;
val* var82 /* : String */;
val* var83 /* : String */;
val* var84 /* : String */;
val* var85 /* : String */;
val* var86 /* : String */;
val* var87 /* : String */;
short int var88 /* : Bool */;
short int var89 /* : Bool */;
short int var90 /* : Bool */;
short int var_ /* var : Bool */;
short int var91 /* : Bool */;
short int var93 /* : Bool */;
short int var94 /* : Bool */;
val* var96 /* : NativeArray[String] */;
static val* varonce95;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : NativeString */;
val* var100 /* : FlatString */;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : NativeString */;
val* var104 /* : FlatString */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
val* var108 /* : FlatString */;
static val* varonce109;
val* var110 /* : String */;
char* var111 /* : NativeString */;
val* var112 /* : FlatString */;
static val* varonce113;
val* var114 /* : String */;
char* var115 /* : NativeString */;
val* var116 /* : FlatString */;
val* var117 /* : String */;
val* var118 /* : String */;
val* var119 /* : String */;
val* var120 /* : String */;
val* var121 /* : String */;
val* var122 /* : String */;
val* var124 /* : NativeArray[String] */;
static val* varonce123;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : NativeString */;
val* var128 /* : FlatString */;
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : NativeString */;
val* var132 /* : FlatString */;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : NativeString */;
val* var136 /* : FlatString */;
val* var137 /* : String */;
val* var138 /* : String */;
val* var139 /* : String */;
val* var140 /* : String */;
var_a = p0;
var_recv = p1;
{
nit___nit__AbstractCompilerVisitor___check_recv_notnull(self, var_recv); /* Direct call abstract_compiler#AbstractCompilerVisitor#check_recv_notnull on <self:SeparateCompilerVisitor>*/
}
{
var1 = nit___nit__AbstractCompilerVisitor___bool_type(self);
}
{
var2 = nit___nit__AbstractCompilerVisitor___new_var(self, var1);
}
var_res = var2;
{
{ /* Inline model#MProperty#intro (var_a) on <var_a:MAttribute> */
var5 = var_a->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var_a:MAttribute> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1968);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model#MAttributeDef#static_mtype (var3) on <var3:MPropDef(MAttributeDef)> */
var8 = var3->attrs[COLOR_nit__model__MAttributeDef___static_mtype].val; /* _static_mtype on <var3:MPropDef(MAttributeDef)> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1593);
fatal_exit(1);
}
var_mtype = var6;
{
{ /* Inline model#MProperty#intro (var_a) on <var_a:MAttribute> */
var11 = var_a->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var_a:MAttribute> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1968);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var9) on <var9:MPropDef(MAttributeDef)> */
var14 = var9->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var9:MPropDef(MAttributeDef)> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_intromclassdef = var12;
{
{ /* Inline model#MClassDef#bound_mtype (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var17 = var_intromclassdef->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_intromclassdef:MClassDef> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var20 = var_intromclassdef->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_intromclassdef:MClassDef> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var23 = var_intromclassdef->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var_intromclassdef:MClassDef> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_mtype->class->vft[COLOR_nit__model__MType__resolve_for]))(var_mtype, var15, var18, var21, 1); /* resolve_for on <var_mtype:MType>*/
}
var_mtype = var24;
/* <var_mtype:MType> isa MNullableType */
cltype = type_nit__MNullableType.color;
idtype = type_nit__MNullableType.id;
if(cltype >= var_mtype->type->table_size) {
var25 = 0;
} else {
var25 = var_mtype->type->type_table[cltype] == idtype;
}
if (var25){
if (unlikely(varonce==NULL)) {
var26 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = " = 1; /* easy isset: ";
var30 = standard___standard__NativeString___to_s_with_length(var29, 21l);
var28 = var30;
varonce27 = var28;
}
((struct instance_standard__NativeArray*)var26)->values[1]=var28;
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = " on ";
var34 = standard___standard__NativeString___to_s_with_length(var33, 4l);
var32 = var34;
varonce31 = var32;
}
((struct instance_standard__NativeArray*)var26)->values[3]=var32;
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = " */";
var38 = standard___standard__NativeString___to_s_with_length(var37, 3l);
var36 = var38;
varonce35 = var36;
}
((struct instance_standard__NativeArray*)var26)->values[5]=var36;
} else {
var26 = varonce;
varonce = NULL;
}
{
var39 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var26)->values[0]=var39;
{
var40 = ((val*(*)(val* self))(var_a->class->vft[COLOR_standard__string__Object__to_s]))(var_a); /* to_s on <var_a:MAttribute>*/
}
((struct instance_standard__NativeArray*)var26)->values[2]=var40;
{
var41 = nit___nit__RuntimeVariable___standard__string__Object__inspect(var_recv);
}
((struct instance_standard__NativeArray*)var26)->values[4]=var41;
{
var42 = ((val*(*)(val* self))(var26->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var26); /* native_to_s on <var26:NativeArray[String]>*/
}
varonce = var26;
{
nit___nit__AbstractCompilerVisitor___add(self, var42); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
{
var43 = nit__separate_compiler___MEntity___const_color(var_a);
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var43); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var46 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var44) on <var44:AbstractCompiler(SeparateCompiler)> */
var49 = var44->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var44:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var47) on <var47:ModelBuilder> */
var52 = var47->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var47:ModelBuilder> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_no_union_attribute (var50) on <var50:ToolContext> */
var55 = var50->attrs[COLOR_nit__separate_compiler__ToolContext___opt_no_union_attribute].val; /* _opt_no_union_attribute on <var50:ToolContext> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_union_attribute");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 28);
fatal_exit(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
{ /* Inline opts#Option#value (var53) on <var53:OptionBool> */
var58 = var53->attrs[COLOR_opts__Option___value].val; /* _value on <var53:OptionBool> */
var56 = var58;
RET_LABEL57:(void)0;
}
}
var59 = (short int)((long)(var56)>>2);
if (var59){
if (unlikely(varonce60==NULL)) {
var61 = NEW_standard__NativeArray(10l, &type_standard__NativeArray__standard__String);
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = " = ";
var65 = standard___standard__NativeString___to_s_with_length(var64, 3l);
var63 = var65;
varonce62 = var63;
}
((struct instance_standard__NativeArray*)var61)->values[1]=var63;
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = "->attrs[";
var69 = standard___standard__NativeString___to_s_with_length(var68, 8l);
var67 = var69;
varonce66 = var67;
}
((struct instance_standard__NativeArray*)var61)->values[3]=var67;
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = "] != NULL; /* ";
var73 = standard___standard__NativeString___to_s_with_length(var72, 14l);
var71 = var73;
varonce70 = var71;
}
((struct instance_standard__NativeArray*)var61)->values[5]=var71;
if (likely(varonce74!=NULL)) {
var75 = varonce74;
} else {
var76 = " on ";
var77 = standard___standard__NativeString___to_s_with_length(var76, 4l);
var75 = var77;
varonce74 = var75;
}
((struct instance_standard__NativeArray*)var61)->values[7]=var75;
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = "*/";
var81 = standard___standard__NativeString___to_s_with_length(var80, 2l);
var79 = var81;
varonce78 = var79;
}
((struct instance_standard__NativeArray*)var61)->values[9]=var79;
} else {
var61 = varonce60;
varonce60 = NULL;
}
{
var82 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var61)->values[0]=var82;
{
var83 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_standard__string__Object__to_s]))(var_recv); /* to_s on <var_recv:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var61)->values[2]=var83;
{
var84 = nit__separate_compiler___MEntity___const_color(var_a);
}
((struct instance_standard__NativeArray*)var61)->values[4]=var84;
{
var85 = ((val*(*)(val* self))(var_a->class->vft[COLOR_standard__string__Object__to_s]))(var_a); /* to_s on <var_a:MAttribute>*/
}
((struct instance_standard__NativeArray*)var61)->values[6]=var85;
{
var86 = nit___nit__RuntimeVariable___standard__string__Object__inspect(var_recv);
}
((struct instance_standard__NativeArray*)var61)->values[8]=var86;
{
var87 = ((val*(*)(val* self))(var61->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var61); /* native_to_s on <var61:NativeArray[String]>*/
}
varonce60 = var61;
{
nit___nit__AbstractCompilerVisitor___add(self, var87); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
{
var89 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nit__abstract_compiler__MType__is_c_primitive]))(var_mtype); /* is_c_primitive on <var_mtype:MType>*/
}
var90 = !var89;
var_ = var90;
if (var90){
{
{ /* Inline separate_compiler#MType#is_tagged (var_mtype) on <var_mtype:MType> */
var93 = var_mtype->attrs[COLOR_nit__separate_compiler__MType___is_tagged].s; /* _is_tagged on <var_mtype:MType> */
var91 = var93;
RET_LABEL92:(void)0;
}
}
var94 = !var91;
var88 = var94;
} else {
var88 = var_;
}
if (var88){
if (unlikely(varonce95==NULL)) {
var96 = NEW_standard__NativeArray(10l, &type_standard__NativeArray__standard__String);
if (likely(varonce97!=NULL)) {
var98 = varonce97;
} else {
var99 = " = ";
var100 = standard___standard__NativeString___to_s_with_length(var99, 3l);
var98 = var100;
varonce97 = var98;
}
((struct instance_standard__NativeArray*)var96)->values[1]=var98;
if (likely(varonce101!=NULL)) {
var102 = varonce101;
} else {
var103 = "->attrs[";
var104 = standard___standard__NativeString___to_s_with_length(var103, 8l);
var102 = var104;
varonce101 = var102;
}
((struct instance_standard__NativeArray*)var96)->values[3]=var102;
if (likely(varonce105!=NULL)) {
var106 = varonce105;
} else {
var107 = "].val != NULL; /* ";
var108 = standard___standard__NativeString___to_s_with_length(var107, 18l);
var106 = var108;
varonce105 = var106;
}
((struct instance_standard__NativeArray*)var96)->values[5]=var106;
if (likely(varonce109!=NULL)) {
var110 = varonce109;
} else {
var111 = " on ";
var112 = standard___standard__NativeString___to_s_with_length(var111, 4l);
var110 = var112;
varonce109 = var110;
}
((struct instance_standard__NativeArray*)var96)->values[7]=var110;
if (likely(varonce113!=NULL)) {
var114 = varonce113;
} else {
var115 = " */";
var116 = standard___standard__NativeString___to_s_with_length(var115, 3l);
var114 = var116;
varonce113 = var114;
}
((struct instance_standard__NativeArray*)var96)->values[9]=var114;
} else {
var96 = varonce95;
varonce95 = NULL;
}
{
var117 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var96)->values[0]=var117;
{
var118 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_standard__string__Object__to_s]))(var_recv); /* to_s on <var_recv:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var96)->values[2]=var118;
{
var119 = nit__separate_compiler___MEntity___const_color(var_a);
}
((struct instance_standard__NativeArray*)var96)->values[4]=var119;
{
var120 = ((val*(*)(val* self))(var_a->class->vft[COLOR_standard__string__Object__to_s]))(var_a); /* to_s on <var_a:MAttribute>*/
}
((struct instance_standard__NativeArray*)var96)->values[6]=var120;
{
var121 = nit___nit__RuntimeVariable___standard__string__Object__inspect(var_recv);
}
((struct instance_standard__NativeArray*)var96)->values[8]=var121;
{
var122 = ((val*(*)(val* self))(var96->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var96); /* native_to_s on <var96:NativeArray[String]>*/
}
varonce95 = var96;
{
nit___nit__AbstractCompilerVisitor___add(self, var122); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
if (unlikely(varonce123==NULL)) {
var124 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce125!=NULL)) {
var126 = varonce125;
} else {
var127 = " = 1; /* NOT YET IMPLEMENTED: isset of primitives: ";
var128 = standard___standard__NativeString___to_s_with_length(var127, 51l);
var126 = var128;
varonce125 = var126;
}
((struct instance_standard__NativeArray*)var124)->values[1]=var126;
if (likely(varonce129!=NULL)) {
var130 = varonce129;
} else {
var131 = " on ";
var132 = standard___standard__NativeString___to_s_with_length(var131, 4l);
var130 = var132;
varonce129 = var130;
}
((struct instance_standard__NativeArray*)var124)->values[3]=var130;
if (likely(varonce133!=NULL)) {
var134 = varonce133;
} else {
var135 = " */";
var136 = standard___standard__NativeString___to_s_with_length(var135, 3l);
var134 = var136;
varonce133 = var134;
}
((struct instance_standard__NativeArray*)var124)->values[5]=var134;
} else {
var124 = varonce123;
varonce123 = NULL;
}
{
var137 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var124)->values[0]=var137;
{
var138 = ((val*(*)(val* self))(var_a->class->vft[COLOR_standard__string__Object__to_s]))(var_a); /* to_s on <var_a:MAttribute>*/
}
((struct instance_standard__NativeArray*)var124)->values[2]=var138;
{
var139 = nit___nit__RuntimeVariable___standard__string__Object__inspect(var_recv);
}
((struct instance_standard__NativeArray*)var124)->values[4]=var139;
{
var140 = ((val*(*)(val* self))(var124->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var124); /* native_to_s on <var124:NativeArray[String]>*/
}
varonce123 = var124;
{
nit___nit__AbstractCompilerVisitor___add(self, var140); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
