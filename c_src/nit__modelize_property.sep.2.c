#include "nit__modelize_property.sep.0.h"
/* method modelize_property#AMethPropdef#build_signature for (self: AMethPropdef, ModelBuilder) */
void nit__modelize_property___AMethPropdef___APropdef__build_signature(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var /* : nullable MPropDef */;
val* var2 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MMethodDef */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : MClassDef */;
val* var12 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var13 /* : MModule */;
val* var15 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var16 /* : nullable ASignature */;
val* var18 /* : nullable ASignature */;
val* var_nsig /* var nsig: nullable ASignature */;
short int var19 /* : Bool */;
val* var20 /* : MProperty */;
val* var22 /* : MProperty */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var_ /* var : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : MClass */;
val* var30 /* : MClass */;
val* var31 /* : nullable MMethodDef */;
val* var33 /* : nullable MMethodDef */;
val* var_root_init /* var root_init: nullable MMethodDef */;
val* var34 /* : null */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
val* var_other38 /* var other: nullable Object */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
val* var41 /* : nullable MSignature */;
val* var43 /* : nullable MSignature */;
val* var45 /* : Array[MProperty] */;
val* var47 /* : Array[MProperty] */;
short int var48 /* : Bool */;
val* var49 /* : Array[MProperty] */;
val* var51 /* : Array[MProperty] */;
val* var52 /* : Array[MProperty] */;
val* var54 /* : Array[MProperty] */;
val* var55 /* : Array[String] */;
val* var_param_names /* var param_names: Array[String] */;
val* var56 /* : Array[MType] */;
val* var_param_types /* var param_types: Array[MType] */;
long var57 /* : Int */;
long var58 /* : Int */;
long var60 /* : Int */;
long var_vararg_rank /* var vararg_rank: Int */;
val* var61 /* : null */;
val* var_ret_type /* var ret_type: nullable MType */;
val* var62 /* : null */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
val* var70 /* : Array[String] */;
val* var72 /* : Array[String] */;
val* var73 /* : Array[MType] */;
val* var75 /* : Array[MType] */;
long var76 /* : Int */;
long var78 /* : Int */;
val* var79 /* : nullable MType */;
val* var81 /* : nullable MType */;
val* var82 /* : null */;
val* var_msignature /* var msignature: nullable MSignature */;
short int var83 /* : Bool */;
short int var84 /* : Bool */;
val* var85 /* : MProperty */;
val* var87 /* : MProperty */;
val* var88 /* : MPropDef */;
val* var90 /* : MPropDef */;
val* var91 /* : nullable MSignature */;
val* var93 /* : nullable MSignature */;
val* var94 /* : null */;
short int var95 /* : Bool */;
short int var96 /* : Bool */;
short int var98 /* : Bool */;
short int var100 /* : Bool */;
val* var101 /* : MClass */;
val* var103 /* : MClass */;
val* var104 /* : MClassType */;
val* var106 /* : MClassType */;
val* var107 /* : MClassType */;
val* var109 /* : MClassType */;
short int var110 /* : Bool */;
val* var111 /* : MSignature */;
long var112 /* : Int */;
long var114 /* : Int */;
long var115 /* : Int */;
short int var116 /* : Bool */;
short int var118 /* : Bool */;
short int var119 /* : Bool */;
val* var120 /* : null */;
short int var121 /* : Bool */;
short int var122 /* : Bool */;
short int var124 /* : Bool */;
short int var125 /* : Bool */;
val* var_node /* var node: ANode */;
static val* varonce;
val* var126 /* : String */;
char* var127 /* : NativeString */;
long var128 /* : Int */;
val* var129 /* : FlatString */;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : NativeString */;
long var133 /* : Int */;
val* var134 /* : FlatString */;
val* var135 /* : MProperty */;
val* var137 /* : MProperty */;
val* var138 /* : MPropDef */;
val* var140 /* : MPropDef */;
static val* varonce141;
val* var142 /* : String */;
char* var143 /* : NativeString */;
long var144 /* : Int */;
val* var145 /* : FlatString */;
long var146 /* : Int */;
long var148 /* : Int */;
static val* varonce149;
val* var150 /* : String */;
char* var151 /* : NativeString */;
long var152 /* : Int */;
val* var153 /* : FlatString */;
long var154 /* : Int */;
static val* varonce155;
val* var156 /* : String */;
char* var157 /* : NativeString */;
long var158 /* : Int */;
val* var159 /* : FlatString */;
val* var160 /* : Array[Object] */;
long var161 /* : Int */;
val* var162 /* : NativeArray[Object] */;
val* var163 /* : Object */;
val* var164 /* : Object */;
val* var165 /* : String */;
short int var166 /* : Bool */;
val* var167 /* : MProperty */;
val* var169 /* : MProperty */;
short int var170 /* : Bool */;
short int var172 /* : Bool */;
short int var_173 /* var : Bool */;
val* var174 /* : MProperty */;
val* var176 /* : MProperty */;
short int var177 /* : Bool */;
short int var179 /* : Bool */;
short int var180 /* : Bool */;
val* var181 /* : Array[MClassType] */;
val* var183 /* : Array[MClassType] */;
val* var_184 /* var : Array[MClassType] */;
val* var185 /* : ArrayIterator[nullable Object] */;
val* var_186 /* var : ArrayIterator[MClassType] */;
short int var187 /* : Bool */;
val* var188 /* : nullable Object */;
val* var_msupertype /* var msupertype: MClassType */;
val* var189 /* : MClassType */;
val* var191 /* : MClassType */;
val* var192 /* : MClassType */;
val* var193 /* : MProperty */;
val* var195 /* : MProperty */;
val* var196 /* : String */;
val* var198 /* : String */;
val* var199 /* : nullable MProperty */;
val* var_candidate /* var candidate: nullable MProperty */;
val* var200 /* : null */;
short int var201 /* : Bool */;
short int var202 /* : Bool */;
short int var204 /* : Bool */;
short int var205 /* : Bool */;
val* var206 /* : null */;
short int var207 /* : Bool */;
short int var208 /* : Bool */;
short int var210 /* : Bool */;
short int var212 /* : Bool */;
val* var213 /* : MPropDef */;
val* var215 /* : MPropDef */;
short int var216 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var217 /* : nullable MSignature */;
val* var219 /* : nullable MSignature */;
short int var221 /* : Bool */;
short int var222 /* : Bool */;
short int var223 /* : Bool */;
val* var224 /* : null */;
short int var225 /* : Bool */;
short int var226 /* : Bool */;
short int var228 /* : Bool */;
short int var229 /* : Bool */;
short int var_230 /* var : Bool */;
long var231 /* : Int */;
long var233 /* : Int */;
long var234 /* : Int */;
long var236 /* : Int */;
short int var237 /* : Bool */;
short int var239 /* : Bool */;
short int var240 /* : Bool */;
short int var_241 /* var : Bool */;
long var242 /* : Int */;
long var244 /* : Int */;
long var245 /* : Int */;
short int var246 /* : Bool */;
short int var248 /* : Bool */;
short int var_249 /* var : Bool */;
long var250 /* : Int */;
long var252 /* : Int */;
long var253 /* : Int */;
short int var254 /* : Bool */;
short int var256 /* : Bool */;
val* var257 /* : Array[MType] */;
val* var258 /* : Array[MParameter] */;
val* var260 /* : Array[MParameter] */;
val* var_261 /* var : Array[MParameter] */;
val* var262 /* : ArrayIterator[nullable Object] */;
val* var_263 /* var : ArrayIterator[MParameter] */;
short int var264 /* : Bool */;
val* var265 /* : nullable Object */;
val* var_mparameter /* var mparameter: MParameter */;
val* var266 /* : MType */;
val* var268 /* : MType */;
long var271 /* : Int */;
long var273 /* : Int */;
short int var274 /* : Bool */;
val* var275 /* : null */;
short int var276 /* : Bool */;
short int var277 /* : Bool */;
short int var279 /* : Bool */;
short int var280 /* : Bool */;
short int var_281 /* var : Bool */;
val* var282 /* : null */;
short int var283 /* : Bool */;
short int var284 /* : Bool */;
short int var286 /* : Bool */;
short int var288 /* : Bool */;
val* var289 /* : nullable MType */;
val* var291 /* : nullable MType */;
long var292 /* : Int */;
long var294 /* : Int */;
long var295 /* : Int */;
long var297 /* : Int */;
short int var298 /* : Bool */;
short int var300 /* : Bool */;
short int var301 /* : Bool */;
val* var302 /* : ANodes[AParam] */;
val* var304 /* : ANodes[AParam] */;
long var305 /* : Int */;
long var307 /* : Int */;
val* var308 /* : ANode */;
static val* varonce309;
val* var310 /* : String */;
char* var311 /* : NativeString */;
long var312 /* : Int */;
val* var313 /* : FlatString */;
long var314 /* : Int */;
long var316 /* : Int */;
val* var317 /* : nullable Object */;
static val* varonce318;
val* var319 /* : String */;
char* var320 /* : NativeString */;
long var321 /* : Int */;
val* var322 /* : FlatString */;
val* var323 /* : Array[Object] */;
long var324 /* : Int */;
val* var325 /* : NativeArray[Object] */;
val* var326 /* : String */;
val* var327 /* : Array[MParameter] */;
val* var_mparameters /* var mparameters: Array[MParameter] */;
long var328 /* : Int */;
long var_i /* var i: Int */;
long var329 /* : Int */;
long var331 /* : Int */;
long var_332 /* var : Int */;
short int var333 /* : Bool */;
short int var335 /* : Bool */;
int cltype336;
int idtype337;
const char* var_class_name338;
short int var339 /* : Bool */;
val* var340 /* : MParameter */;
val* var341 /* : nullable Object */;
val* var342 /* : nullable Object */;
short int var343 /* : Bool */;
short int var345 /* : Bool */;
val* var_mparameter346 /* var mparameter: MParameter */;
val* var347 /* : null */;
short int var348 /* : Bool */;
short int var349 /* : Bool */;
short int var351 /* : Bool */;
short int var352 /* : Bool */;
val* var353 /* : ANodes[AParam] */;
val* var355 /* : ANodes[AParam] */;
val* var356 /* : ANode */;
long var358 /* : Int */;
long var359 /* : Int */;
short int var361 /* : Bool */;
val* var362 /* : null */;
short int var363 /* : Bool */;
short int var364 /* : Bool */;
short int var366 /* : Bool */;
short int var368 /* : Bool */;
short int var_369 /* var : Bool */;
val* var370 /* : MProperty */;
val* var372 /* : MProperty */;
short int var373 /* : Bool */;
short int var375 /* : Bool */;
val* var376 /* : MClass */;
val* var378 /* : MClass */;
val* var379 /* : MClassType */;
val* var381 /* : MClassType */;
val* var382 /* : MSignature */;
static val* varonce384;
val* var385 /* : String */;
char* var386 /* : NativeString */;
long var387 /* : Int */;
val* var388 /* : FlatString */;
val* var389 /* : nullable AAnnotation */;
val* var390 /* : null */;
short int var391 /* : Bool */;
short int var392 /* : Bool */;
short int var394 /* : Bool */;
short int var395 /* : Bool */;
static val* varonce397;
val* var398 /* : String */;
char* var399 /* : NativeString */;
long var400 /* : Int */;
val* var401 /* : FlatString */;
val* var402 /* : nullable AAnnotation */;
val* var403 /* : null */;
short int var404 /* : Bool */;
short int var405 /* : Bool */;
short int var407 /* : Bool */;
short int var408 /* : Bool */;
short int var410 /* : Bool */;
val* var411 /* : nullable AExternCodeBlock */;
val* var413 /* : nullable AExternCodeBlock */;
val* var414 /* : null */;
short int var415 /* : Bool */;
short int var416 /* : Bool */;
short int var418 /* : Bool */;
short int var419 /* : Bool */;
short int var_420 /* var : Bool */;
static val* varonce421;
val* var422 /* : String */;
char* var423 /* : NativeString */;
long var424 /* : Int */;
val* var425 /* : FlatString */;
val* var426 /* : nullable AAnnotation */;
val* var427 /* : null */;
short int var428 /* : Bool */;
short int var429 /* : Bool */;
short int var431 /* : Bool */;
short int var432 /* : Bool */;
var_modelbuilder = p0;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var2 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mpropdef = var;
var3 = NULL;
if (var_mpropdef == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mpropdef,var3) on <var_mpropdef:nullable MMethodDef> */
var_other = var3;
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var9 = var_mpropdef == var_other;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var12 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_mclassdef = var10;
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var15 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_mmodule = var13;
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (self) on <self:AMethPropdef> */
var18 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_nsig = var16;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var22 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline model#MMethod#is_root_init (var20) on <var20:MProperty(MMethod)> */
var25 = var20->attrs[COLOR_nit__model__MMethod___is_root_init].s; /* _is_root_init on <var20:MProperty(MMethod)> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
var_ = var23;
if (var23){
{
var26 = nit___nit__MClassDef___is_intro(var_mclassdef);
}
var27 = !var26;
var19 = var27;
} else {
var19 = var_;
}
if (var19){
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var30 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline modelize_property#MClass#root_init (var28) on <var28:MClass> */
var33 = var28->attrs[COLOR_nit__modelize_property__MClass___root_init].val; /* _root_init on <var28:MClass> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
var_root_init = var31;
var34 = NULL;
if (var_root_init == NULL) {
var35 = 0; /* is null */
} else {
var35 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_root_init,var34) on <var_root_init:nullable MMethodDef> */
var_other38 = var34;
{
var39 = ((short int (*)(val* self, val* p0))(var_root_init->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_root_init, var_other38) /* == on <var_root_init:nullable MMethodDef(MMethodDef)>*/;
}
var40 = !var39;
var36 = var40;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
var35 = var36;
}
if (var35){
{
{ /* Inline model#MMethodDef#new_msignature (var_root_init) on <var_root_init:nullable MMethodDef(MMethodDef)> */
var43 = var_root_init->attrs[COLOR_nit__model__MMethodDef___new_msignature].val; /* _new_msignature on <var_root_init:nullable MMethodDef(MMethodDef)> */
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline model#MMethodDef#new_msignature= (var_mpropdef,var41) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nit__model__MMethodDef___new_msignature].val = var41; /* _new_msignature on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL44:(void)0;
}
}
{
{ /* Inline model#MMethodDef#initializers (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var47 = var_mpropdef->attrs[COLOR_nit__model__MMethodDef___initializers].val; /* _initializers on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2146);
show_backtrace(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
var48 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var45);
}
if (unlikely(!var48)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 719);
show_backtrace(1);
}
{
{ /* Inline model#MMethodDef#initializers (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var51 = var_mpropdef->attrs[COLOR_nit__model__MMethodDef___initializers].val; /* _initializers on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2146);
show_backtrace(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
{ /* Inline model#MMethodDef#initializers (var_root_init) on <var_root_init:nullable MMethodDef(MMethodDef)> */
var54 = var_root_init->attrs[COLOR_nit__model__MMethodDef___initializers].val; /* _initializers on <var_root_init:nullable MMethodDef(MMethodDef)> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2146);
show_backtrace(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add_all(var49, var52); /* Direct call array#Array#add_all on <var49:Array[MProperty]>*/
}
} else {
}
} else {
}
var55 = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var55); /* Direct call array#Array#init on <var55:Array[String]>*/
}
var_param_names = var55;
var56 = NEW_standard__Array(&type_standard__Array__nit__MType);
{
standard___standard__Array___standard__kernel__Object__init(var56); /* Direct call array#Array#init on <var56:Array[MType]>*/
}
var_param_types = var56;
var57 = 1;
{
{ /* Inline kernel#Int#unary - (var57) on <var57:Int> */
var60 = -var57;
var58 = var60;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
}
var_vararg_rank = var58;
var61 = NULL;
var_ret_type = var61;
var62 = NULL;
if (var_nsig == NULL) {
var63 = 0; /* is null */
} else {
var63 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nsig,var62) on <var_nsig:nullable ASignature> */
var_other38 = var62;
{
var66 = ((short int (*)(val* self, val* p0))(var_nsig->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nsig, var_other38) /* == on <var_nsig:nullable ASignature(ASignature)>*/;
}
var67 = !var66;
var64 = var67;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
var63 = var64;
}
if (var63){
{
var68 = nit__modelize_property___ASignature___visit_signature(var_nsig, var_modelbuilder, var_mclassdef);
}
var69 = !var68;
if (var69){
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property#ASignature#param_names (var_nsig) on <var_nsig:nullable ASignature(ASignature)> */
var72 = var_nsig->attrs[COLOR_nit__modelize_property__ASignature___param_names].val; /* _param_names on <var_nsig:nullable ASignature(ASignature)> */
if (unlikely(var72 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _param_names");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 514);
show_backtrace(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
var_param_names = var70;
{
{ /* Inline modelize_property#ASignature#param_types (var_nsig) on <var_nsig:nullable ASignature(ASignature)> */
var75 = var_nsig->attrs[COLOR_nit__modelize_property__ASignature___param_types].val; /* _param_types on <var_nsig:nullable ASignature(ASignature)> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _param_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 517);
show_backtrace(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
var_param_types = var73;
{
{ /* Inline modelize_property#ASignature#vararg_rank (var_nsig) on <var_nsig:nullable ASignature(ASignature)> */
var78 = var_nsig->attrs[COLOR_nit__modelize_property__ASignature___vararg_rank].l; /* _vararg_rank on <var_nsig:nullable ASignature(ASignature)> */
var76 = var78;
RET_LABEL77:(void)0;
}
}
var_vararg_rank = var76;
{
{ /* Inline modelize_property#ASignature#ret_type (var_nsig) on <var_nsig:nullable ASignature(ASignature)> */
var81 = var_nsig->attrs[COLOR_nit__modelize_property__ASignature___ret_type].val; /* _ret_type on <var_nsig:nullable ASignature(ASignature)> */
var79 = var81;
RET_LABEL80:(void)0;
}
}
var_ret_type = var79;
} else {
}
var82 = NULL;
var_msignature = var82;
{
var83 = nit___nit__MPropDef___is_intro(var_mpropdef);
}
var84 = !var83;
if (var84){
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var87 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var87 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var85 = var87;
RET_LABEL86:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var85) on <var85:MProperty(MMethod)> */
var90 = var85->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var85:MProperty(MMethod)> */
if (unlikely(var90 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1773);
show_backtrace(1);
}
var88 = var90;
RET_LABEL89:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var88) on <var88:MPropDef(MMethodDef)> */
var93 = var88->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var88:MPropDef(MMethodDef)> */
var91 = var93;
RET_LABEL92:(void)0;
}
}
var_msignature = var91;
var94 = NULL;
if (var_msignature == NULL) {
var95 = 1; /* is null */
} else {
var95 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_msignature,var94) on <var_msignature:nullable MSignature> */
var_other = var94;
{
{ /* Inline kernel#Object#is_same_instance (var_msignature,var_other) on <var_msignature:nullable MSignature(MSignature)> */
var100 = var_msignature == var_other;
var98 = var100;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
}
var96 = var98;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
var95 = var96;
}
if (var95){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var103 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var103 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var101 = var103;
RET_LABEL102:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var101) on <var101:MClass> */
var106 = var101->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var101:MClass> */
if (unlikely(var106 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var104 = var106;
RET_LABEL105:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var109 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var109 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var107 = var109;
RET_LABEL108:(void)0;
}
}
var110 = 0;
{
var111 = nit___nit__MSignature___MType__resolve_for(var_msignature, var104, var107, var_mmodule, var110);
}
var_msignature = var111;
{
{ /* Inline array#AbstractArrayRead#length (var_param_names) on <var_param_names:Array[String]> */
var114 = var_param_names->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_param_names:Array[String]> */
var112 = var114;
RET_LABEL113:(void)0;
}
}
{
var115 = nit___nit__MSignature___arity(var_msignature);
}
{
{ /* Inline kernel#Int#!= (var112,var115) on <var112:Int> */
var118 = var112 == var115;
var119 = !var118;
var116 = var119;
goto RET_LABEL117;
RET_LABEL117:(void)0;
}
}
if (var116){
var120 = NULL;
if (var_nsig == NULL) {
var121 = 0; /* is null */
} else {
var121 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nsig,var120) on <var_nsig:nullable ASignature> */
var_other38 = var120;
{
var124 = ((short int (*)(val* self, val* p0))(var_nsig->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nsig, var_other38) /* == on <var_nsig:nullable ASignature(ASignature)>*/;
}
var125 = !var124;
var122 = var125;
goto RET_LABEL123;
RET_LABEL123:(void)0;
}
var121 = var122;
}
if (var121){
var_node = var_nsig;
} else {
var_node = self;
}
if (varonce) {
var126 = varonce;
} else {
var127 = "Redef error: ";
var128 = 13;
var129 = standard___standard__NativeString___to_s_with_length(var127, var128);
var126 = var129;
varonce = var126;
}
if (varonce130) {
var131 = varonce130;
} else {
var132 = " redefines ";
var133 = 11;
var134 = standard___standard__NativeString___to_s_with_length(var132, var133);
var131 = var134;
varonce130 = var131;
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var137 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var137 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var135 = var137;
RET_LABEL136:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var135) on <var135:MProperty(MMethod)> */
var140 = var135->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var135:MProperty(MMethod)> */
if (unlikely(var140 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1773);
show_backtrace(1);
}
var138 = var140;
RET_LABEL139:(void)0;
}
}
if (varonce141) {
var142 = varonce141;
} else {
var143 = " with ";
var144 = 6;
var145 = standard___standard__NativeString___to_s_with_length(var143, var144);
var142 = var145;
varonce141 = var142;
}
{
{ /* Inline array#AbstractArrayRead#length (var_param_names) on <var_param_names:Array[String]> */
var148 = var_param_names->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_param_names:Array[String]> */
var146 = var148;
RET_LABEL147:(void)0;
}
}
if (varonce149) {
var150 = varonce149;
} else {
var151 = " parameter(s), ";
var152 = 15;
var153 = standard___standard__NativeString___to_s_with_length(var151, var152);
var150 = var153;
varonce149 = var150;
}
{
var154 = nit___nit__MSignature___arity(var_msignature);
}
if (varonce155) {
var156 = varonce155;
} else {
var157 = " expected. Signature is ";
var158 = 24;
var159 = standard___standard__NativeString___to_s_with_length(var157, var158);
var156 = var159;
varonce155 = var156;
}
var160 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var160 = array_instance Array[Object] */
var161 = 11;
var162 = NEW_standard__NativeArray(var161, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var162)->values[0] = (val*) var126;
((struct instance_standard__NativeArray*)var162)->values[1] = (val*) var_mpropdef;
((struct instance_standard__NativeArray*)var162)->values[2] = (val*) var131;
((struct instance_standard__NativeArray*)var162)->values[3] = (val*) var138;
((struct instance_standard__NativeArray*)var162)->values[4] = (val*) var142;
var163 = BOX_standard__Int(var146); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var162)->values[5] = (val*) var163;
((struct instance_standard__NativeArray*)var162)->values[6] = (val*) var150;
var164 = BOX_standard__Int(var154); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var162)->values[7] = (val*) var164;
((struct instance_standard__NativeArray*)var162)->values[8] = (val*) var156;
((struct instance_standard__NativeArray*)var162)->values[9] = (val*) var_mpropdef;
((struct instance_standard__NativeArray*)var162)->values[10] = (val*) var_msignature;
{
((void (*)(val* self, val* p0, long p1))(var160->class->vft[COLOR_standard__array__Array__with_native]))(var160, var162, var161) /* with_native on <var160:Array[Object]>*/;
}
}
{
var165 = ((val* (*)(val* self))(var160->class->vft[COLOR_standard__string__Object__to_s]))(var160) /* to_s on <var160:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_node, var165); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
} else {
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var169 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var169 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var167 = var169;
RET_LABEL168:(void)0;
}
}
{
{ /* Inline model#MMethod#is_init (var167) on <var167:MProperty(MMethod)> */
var172 = var167->attrs[COLOR_nit__model__MMethod___is_init].s; /* _is_init on <var167:MProperty(MMethod)> */
var170 = var172;
RET_LABEL171:(void)0;
}
}
var_173 = var170;
if (var170){
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var176 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var176 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var174 = var176;
RET_LABEL175:(void)0;
}
}
{
{ /* Inline model#MMethod#is_new (var174) on <var174:MProperty(MMethod)> */
var179 = var174->attrs[COLOR_nit__model__MMethod___is_new].s; /* _is_new on <var174:MProperty(MMethod)> */
var177 = var179;
RET_LABEL178:(void)0;
}
}
var180 = !var177;
var166 = var180;
} else {
var166 = var_173;
}
if (var166){
{
{ /* Inline model#MClassDef#supertypes (var_mclassdef) on <var_mclassdef:MClassDef> */
var183 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___supertypes].val; /* _supertypes on <var_mclassdef:MClassDef> */
if (unlikely(var183 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supertypes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 566);
show_backtrace(1);
}
var181 = var183;
RET_LABEL182:(void)0;
}
}
var_184 = var181;
{
var185 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_184);
}
var_186 = var185;
for(;;) {
{
var187 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_186);
}
if (var187){
{
var188 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_186);
}
var_msupertype = var188;
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var191 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var191 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var189 = var191;
RET_LABEL190:(void)0;
}
}
{
var192 = nit___nit__MClassType___MType__anchor_to(var_msupertype, var_mmodule, var189);
}
var_msupertype = var192;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var195 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var195 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var193 = var195;
RET_LABEL194:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var193) on <var193:MProperty(MMethod)> */
var198 = var193->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var193:MProperty(MMethod)> */
if (unlikely(var198 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1741);
show_backtrace(1);
}
var196 = var198;
RET_LABEL197:(void)0;
}
}
{
var199 = nit___nit__ModelBuilder___try_get_mproperty_by_name2(var_modelbuilder, self, var_mmodule, var_msupertype, var196);
}
var_candidate = var199;
var200 = NULL;
if (var_candidate == NULL) {
var201 = 0; /* is null */
} else {
var201 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_candidate,var200) on <var_candidate:nullable MProperty> */
var_other38 = var200;
{
var204 = ((short int (*)(val* self, val* p0))(var_candidate->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_candidate, var_other38) /* == on <var_candidate:nullable MProperty(MProperty)>*/;
}
var205 = !var204;
var202 = var205;
goto RET_LABEL203;
RET_LABEL203:(void)0;
}
var201 = var202;
}
if (var201){
var206 = NULL;
if (var_msignature == NULL) {
var207 = 1; /* is null */
} else {
var207 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_msignature,var206) on <var_msignature:nullable MSignature> */
var_other = var206;
{
{ /* Inline kernel#Object#is_same_instance (var_msignature,var_other) on <var_msignature:nullable MSignature(MSignature)> */
var212 = var_msignature == var_other;
var210 = var212;
goto RET_LABEL211;
RET_LABEL211:(void)0;
}
}
var208 = var210;
goto RET_LABEL209;
RET_LABEL209:(void)0;
}
var207 = var208;
}
if (var207){
{
{ /* Inline model#MProperty#intro (var_candidate) on <var_candidate:nullable MProperty(MProperty)> */
var215 = var_candidate->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var_candidate:nullable MProperty(MProperty)> */
if (unlikely(var215 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1773);
show_backtrace(1);
}
var213 = var215;
RET_LABEL214:(void)0;
}
}
/* <var213:MPropDef> isa MMethodDef */
cltype = type_nit__MMethodDef.color;
idtype = type_nit__MMethodDef.id;
if(cltype >= var213->type->table_size) {
var216 = 0;
} else {
var216 = var213->type->type_table[cltype] == idtype;
}
if (unlikely(!var216)) {
var_class_name = var213 == NULL ? "null" : var213->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MMethodDef", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 761);
show_backtrace(1);
}
{
{ /* Inline model#MMethodDef#msignature (var213) on <var213:MPropDef(MMethodDef)> */
var219 = var213->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var213:MPropDef(MMethodDef)> */
var217 = var219;
RET_LABEL218:(void)0;
}
}
var_msignature = var217;
} else {
}
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_186); /* Direct call array#ArrayIterator#next on <var_186:ArrayIterator[MClassType]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_186) on <var_186:ArrayIterator[MClassType]> */
RET_LABEL220:(void)0;
}
}
} else {
}
}
var224 = NULL;
if (var_msignature == NULL) {
var225 = 0; /* is null */
} else {
var225 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_msignature,var224) on <var_msignature:nullable MSignature> */
var_other38 = var224;
{
var228 = ((short int (*)(val* self, val* p0))(var_msignature->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_msignature, var_other38) /* == on <var_msignature:nullable MSignature(MSignature)>*/;
}
var229 = !var228;
var226 = var229;
goto RET_LABEL227;
RET_LABEL227:(void)0;
}
var225 = var226;
}
var_230 = var225;
if (var225){
{
{ /* Inline array#AbstractArrayRead#length (var_param_names) on <var_param_names:Array[String]> */
var233 = var_param_names->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_param_names:Array[String]> */
var231 = var233;
RET_LABEL232:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var_param_types) on <var_param_types:Array[MType]> */
var236 = var_param_types->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_param_types:Array[MType]> */
var234 = var236;
RET_LABEL235:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var231,var234) on <var231:Int> */
var239 = var231 == var234;
var240 = !var239;
var237 = var240;
goto RET_LABEL238;
RET_LABEL238:(void)0;
}
}
var223 = var237;
} else {
var223 = var_230;
}
var_241 = var223;
if (var223){
{
{ /* Inline array#AbstractArrayRead#length (var_param_names) on <var_param_names:Array[String]> */
var244 = var_param_names->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_param_names:Array[String]> */
var242 = var244;
RET_LABEL243:(void)0;
}
}
{
var245 = nit___nit__MSignature___arity(var_msignature);
}
{
{ /* Inline kernel#Int#== (var242,var245) on <var242:Int> */
var248 = var242 == var245;
var246 = var248;
goto RET_LABEL247;
RET_LABEL247:(void)0;
}
}
var222 = var246;
} else {
var222 = var_241;
}
var_249 = var222;
if (var222){
{
{ /* Inline array#AbstractArrayRead#length (var_param_types) on <var_param_types:Array[MType]> */
var252 = var_param_types->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_param_types:Array[MType]> */
var250 = var252;
RET_LABEL251:(void)0;
}
}
var253 = 0;
{
{ /* Inline kernel#Int#== (var250,var253) on <var250:Int> */
var256 = var250 == var253;
var254 = var256;
goto RET_LABEL255;
RET_LABEL255:(void)0;
}
}
var221 = var254;
} else {
var221 = var_249;
}
if (var221){
var257 = NEW_standard__Array(&type_standard__Array__nit__MType);
{
standard___standard__Array___standard__kernel__Object__init(var257); /* Direct call array#Array#init on <var257:Array[MType]>*/
}
var_param_types = var257;
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var260 = var_msignature->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:nullable MSignature(MSignature)> */
if (unlikely(var260 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var258 = var260;
RET_LABEL259:(void)0;
}
}
var_261 = var258;
{
var262 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_261);
}
var_263 = var262;
for(;;) {
{
var264 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_263);
}
if (var264){
{
var265 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_263);
}
var_mparameter = var265;
{
{ /* Inline model#MParameter#mtype (var_mparameter) on <var_mparameter:MParameter> */
var268 = var_mparameter->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var_mparameter:MParameter> */
if (unlikely(var268 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1690);
show_backtrace(1);
}
var266 = var268;
RET_LABEL267:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_param_types, var266); /* Direct call array#Array#add on <var_param_types:Array[MType]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_263); /* Direct call array#ArrayIterator#next on <var_263:ArrayIterator[MParameter]>*/
}
} else {
goto BREAK_label269;
}
}
BREAK_label269: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_263) on <var_263:ArrayIterator[MParameter]> */
RET_LABEL270:(void)0;
}
}
{
{ /* Inline model#MSignature#vararg_rank (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var273 = var_msignature->attrs[COLOR_nit__model__MSignature___vararg_rank].l; /* _vararg_rank on <var_msignature:nullable MSignature(MSignature)> */
var271 = var273;
RET_LABEL272:(void)0;
}
}
var_vararg_rank = var271;
} else {
}
var275 = NULL;
if (var_msignature == NULL) {
var276 = 0; /* is null */
} else {
var276 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_msignature,var275) on <var_msignature:nullable MSignature> */
var_other38 = var275;
{
var279 = ((short int (*)(val* self, val* p0))(var_msignature->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_msignature, var_other38) /* == on <var_msignature:nullable MSignature(MSignature)>*/;
}
var280 = !var279;
var277 = var280;
goto RET_LABEL278;
RET_LABEL278:(void)0;
}
var276 = var277;
}
var_281 = var276;
if (var276){
var282 = NULL;
if (var_ret_type == NULL) {
var283 = 1; /* is null */
} else {
var283 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ret_type,var282) on <var_ret_type:nullable MType> */
var_other = var282;
{
{ /* Inline kernel#Object#is_same_instance (var_ret_type,var_other) on <var_ret_type:nullable MType(MType)> */
var288 = var_ret_type == var_other;
var286 = var288;
goto RET_LABEL287;
RET_LABEL287:(void)0;
}
}
var284 = var286;
goto RET_LABEL285;
RET_LABEL285:(void)0;
}
var283 = var284;
}
var274 = var283;
} else {
var274 = var_281;
}
if (var274){
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var291 = var_msignature->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:nullable MSignature(MSignature)> */
var289 = var291;
RET_LABEL290:(void)0;
}
}
var_ret_type = var289;
} else {
}
{
{ /* Inline array#AbstractArrayRead#length (var_param_names) on <var_param_names:Array[String]> */
var294 = var_param_names->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_param_names:Array[String]> */
var292 = var294;
RET_LABEL293:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var_param_types) on <var_param_types:Array[MType]> */
var297 = var_param_types->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_param_types:Array[MType]> */
var295 = var297;
RET_LABEL296:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var292,var295) on <var292:Int> */
var300 = var292 == var295;
var301 = !var300;
var298 = var301;
goto RET_LABEL299;
RET_LABEL299:(void)0;
}
}
if (var298){
if (var_nsig == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 783);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var_nsig) on <var_nsig:nullable ASignature> */
if (unlikely(var_nsig == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1506);
show_backtrace(1);
}
var304 = var_nsig->attrs[COLOR_nit__parser_nodes__ASignature___n_params].val; /* _n_params on <var_nsig:nullable ASignature> */
if (unlikely(var304 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1506);
show_backtrace(1);
}
var302 = var304;
RET_LABEL303:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var_param_types) on <var_param_types:Array[MType]> */
var307 = var_param_types->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_param_types:Array[MType]> */
var305 = var307;
RET_LABEL306:(void)0;
}
}
{
var308 = nit___nit__ANodes___standard__abstract_collection__SequenceRead___91d_93d(var302, var305);
}
if (varonce309) {
var310 = varonce309;
} else {
var311 = "Error: Untyped parameter `";
var312 = 26;
var313 = standard___standard__NativeString___to_s_with_length(var311, var312);
var310 = var313;
varonce309 = var310;
}
{
{ /* Inline array#AbstractArrayRead#length (var_param_types) on <var_param_types:Array[MType]> */
var316 = var_param_types->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_param_types:Array[MType]> */
var314 = var316;
RET_LABEL315:(void)0;
}
}
{
var317 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_param_names, var314);
}
if (varonce318) {
var319 = varonce318;
} else {
var320 = "\'.";
var321 = 2;
var322 = standard___standard__NativeString___to_s_with_length(var320, var321);
var319 = var322;
varonce318 = var319;
}
var323 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var323 = array_instance Array[Object] */
var324 = 3;
var325 = NEW_standard__NativeArray(var324, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var325)->values[0] = (val*) var310;
((struct instance_standard__NativeArray*)var325)->values[1] = (val*) var317;
((struct instance_standard__NativeArray*)var325)->values[2] = (val*) var319;
{
((void (*)(val* self, val* p0, long p1))(var323->class->vft[COLOR_standard__array__Array__with_native]))(var323, var325, var324) /* with_native on <var323:Array[Object]>*/;
}
}
{
var326 = ((val* (*)(val* self))(var323->class->vft[COLOR_standard__string__Object__to_s]))(var323) /* to_s on <var323:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, var308, var326); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
var327 = NEW_standard__Array(&type_standard__Array__nit__MParameter);
{
standard___standard__Array___standard__kernel__Object__init(var327); /* Direct call array#Array#init on <var327:Array[MParameter]>*/
}
var_mparameters = var327;
var328 = 0;
var_i = var328;
{
{ /* Inline array#AbstractArrayRead#length (var_param_names) on <var_param_names:Array[String]> */
var331 = var_param_names->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_param_names:Array[String]> */
var329 = var331;
RET_LABEL330:(void)0;
}
}
var_332 = var329;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_332) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_332:Int> isa OTHER */
/* <var_332:Int> isa OTHER */
var335 = 1; /* easy <var_332:Int> isa OTHER*/
if (unlikely(!var335)) {
var_class_name338 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name338);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var339 = var_i < var_332;
var333 = var339;
goto RET_LABEL334;
RET_LABEL334:(void)0;
}
}
if (var333){
var340 = NEW_nit__MParameter(&type_nit__MParameter);
{
var341 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_param_names, var_i);
}
{
var342 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_param_types, var_i);
}
{
{ /* Inline kernel#Int#== (var_i,var_vararg_rank) on <var_i:Int> */
var345 = var_i == var_vararg_rank;
var343 = var345;
goto RET_LABEL344;
RET_LABEL344:(void)0;
}
}
{
((void (*)(val* self, val* p0))(var340->class->vft[COLOR_nit__model__MParameter__name_61d]))(var340, var341) /* name= on <var340:MParameter>*/;
}
{
((void (*)(val* self, val* p0))(var340->class->vft[COLOR_nit__model__MParameter__mtype_61d]))(var340, var342) /* mtype= on <var340:MParameter>*/;
}
{
((void (*)(val* self, short int p0))(var340->class->vft[COLOR_nit__model__MParameter__is_vararg_61d]))(var340, var343) /* is_vararg= on <var340:MParameter>*/;
}
{
((void (*)(val* self))(var340->class->vft[COLOR_standard__kernel__Object__init]))(var340) /* init on <var340:MParameter>*/;
}
var_mparameter346 = var340;
var347 = NULL;
if (var_nsig == NULL) {
var348 = 0; /* is null */
} else {
var348 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nsig,var347) on <var_nsig:nullable ASignature> */
var_other38 = var347;
{
var351 = ((short int (*)(val* self, val* p0))(var_nsig->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nsig, var_other38) /* == on <var_nsig:nullable ASignature(ASignature)>*/;
}
var352 = !var351;
var349 = var352;
goto RET_LABEL350;
RET_LABEL350:(void)0;
}
var348 = var349;
}
if (var348){
{
{ /* Inline parser_nodes#ASignature#n_params (var_nsig) on <var_nsig:nullable ASignature(ASignature)> */
var355 = var_nsig->attrs[COLOR_nit__parser_nodes__ASignature___n_params].val; /* _n_params on <var_nsig:nullable ASignature(ASignature)> */
if (unlikely(var355 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1506);
show_backtrace(1);
}
var353 = var355;
RET_LABEL354:(void)0;
}
}
{
var356 = nit___nit__ANodes___standard__abstract_collection__SequenceRead___91d_93d(var353, var_i);
}
{
{ /* Inline modelize_property#AParam#mparameter= (var356,var_mparameter346) on <var356:ANode(AParam)> */
var356->attrs[COLOR_nit__modelize_property__AParam___mparameter].val = var_mparameter346; /* _mparameter on <var356:ANode(AParam)> */
RET_LABEL357:(void)0;
}
}
} else {
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_mparameters, var_mparameter346); /* Direct call array#Array#add on <var_mparameters:Array[MParameter]>*/
}
var358 = 1;
{
var359 = standard___standard__Int___Discrete__successor(var_i, var358);
}
var_i = var359;
} else {
goto BREAK_label360;
}
}
BREAK_label360: (void)0;
var362 = NULL;
if (var_ret_type == NULL) {
var363 = 1; /* is null */
} else {
var363 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ret_type,var362) on <var_ret_type:nullable MType> */
var_other = var362;
{
{ /* Inline kernel#Object#is_same_instance (var_ret_type,var_other) on <var_ret_type:nullable MType(MType)> */
var368 = var_ret_type == var_other;
var366 = var368;
goto RET_LABEL367;
RET_LABEL367:(void)0;
}
}
var364 = var366;
goto RET_LABEL365;
RET_LABEL365:(void)0;
}
var363 = var364;
}
var_369 = var363;
if (var363){
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var372 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var372 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var370 = var372;
RET_LABEL371:(void)0;
}
}
{
{ /* Inline model#MMethod#is_new (var370) on <var370:MProperty(MMethod)> */
var375 = var370->attrs[COLOR_nit__model__MMethod___is_new].s; /* _is_new on <var370:MProperty(MMethod)> */
var373 = var375;
RET_LABEL374:(void)0;
}
}
var361 = var373;
} else {
var361 = var_369;
}
if (var361){
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var378 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var378 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var376 = var378;
RET_LABEL377:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var376) on <var376:MClass> */
var381 = var376->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var376:MClass> */
if (unlikely(var381 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var379 = var381;
RET_LABEL380:(void)0;
}
}
var_ret_type = var379;
} else {
}
var382 = NEW_nit__MSignature(&type_nit__MSignature);
{
((void (*)(val* self, val* p0))(var382->class->vft[COLOR_nit__model__MSignature__mparameters_61d]))(var382, var_mparameters) /* mparameters= on <var382:MSignature>*/;
}
{
((void (*)(val* self, val* p0))(var382->class->vft[COLOR_nit__model__MSignature__return_mtype_61d]))(var382, var_ret_type) /* return_mtype= on <var382:MSignature>*/;
}
{
((void (*)(val* self))(var382->class->vft[COLOR_standard__kernel__Object__init]))(var382) /* init on <var382:MSignature>*/;
}
var_msignature = var382;
{
{ /* Inline model#MMethodDef#msignature= (var_mpropdef,var_msignature) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nit__model__MMethodDef___msignature].val = var_msignature; /* _msignature on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL383:(void)0;
}
}
if (varonce384) {
var385 = varonce384;
} else {
var386 = "abstract";
var387 = 8;
var388 = standard___standard__NativeString___to_s_with_length(var386, var387);
var385 = var388;
varonce384 = var385;
}
{
var389 = nit__annotation___Prod___get_single_annotation(self, var385, var_modelbuilder);
}
var390 = NULL;
if (var389 == NULL) {
var391 = 0; /* is null */
} else {
var391 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var389,var390) on <var389:nullable AAnnotation> */
var_other38 = var390;
{
var394 = ((short int (*)(val* self, val* p0))(var389->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var389, var_other38) /* == on <var389:nullable AAnnotation(AAnnotation)>*/;
}
var395 = !var394;
var392 = var395;
goto RET_LABEL393;
RET_LABEL393:(void)0;
}
var391 = var392;
}
{
{ /* Inline model#MMethodDef#is_abstract= (var_mpropdef,var391) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nit__model__MMethodDef___is_abstract].s = var391; /* _is_abstract on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL396:(void)0;
}
}
if (varonce397) {
var398 = varonce397;
} else {
var399 = "intern";
var400 = 6;
var401 = standard___standard__NativeString___to_s_with_length(var399, var400);
var398 = var401;
varonce397 = var398;
}
{
var402 = nit__annotation___Prod___get_single_annotation(self, var398, var_modelbuilder);
}
var403 = NULL;
if (var402 == NULL) {
var404 = 0; /* is null */
} else {
var404 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var402,var403) on <var402:nullable AAnnotation> */
var_other38 = var403;
{
var407 = ((short int (*)(val* self, val* p0))(var402->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var402, var_other38) /* == on <var402:nullable AAnnotation(AAnnotation)>*/;
}
var408 = !var407;
var405 = var408;
goto RET_LABEL406;
RET_LABEL406:(void)0;
}
var404 = var405;
}
{
{ /* Inline model#MMethodDef#is_intern= (var_mpropdef,var404) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nit__model__MMethodDef___is_intern].s = var404; /* _is_intern on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL409:(void)0;
}
}
{
{ /* Inline parser_nodes#AMethPropdef#n_extern_code_block (self) on <self:AMethPropdef> */
var413 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AMethPropdef> */
var411 = var413;
RET_LABEL412:(void)0;
}
}
var414 = NULL;
if (var411 == NULL) {
var415 = 0; /* is null */
} else {
var415 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var411,var414) on <var411:nullable AExternCodeBlock> */
var_other38 = var414;
{
var418 = ((short int (*)(val* self, val* p0))(var411->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var411, var_other38) /* == on <var411:nullable AExternCodeBlock(AExternCodeBlock)>*/;
}
var419 = !var418;
var416 = var419;
goto RET_LABEL417;
RET_LABEL417:(void)0;
}
var415 = var416;
}
var_420 = var415;
if (var415){
var410 = var_420;
} else {
if (varonce421) {
var422 = varonce421;
} else {
var423 = "extern";
var424 = 6;
var425 = standard___standard__NativeString___to_s_with_length(var423, var424);
var422 = var425;
varonce421 = var422;
}
{
var426 = nit__annotation___Prod___get_single_annotation(self, var422, var_modelbuilder);
}
var427 = NULL;
if (var426 == NULL) {
var428 = 0; /* is null */
} else {
var428 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var426,var427) on <var426:nullable AAnnotation> */
var_other38 = var427;
{
var431 = ((short int (*)(val* self, val* p0))(var426->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var426, var_other38) /* == on <var426:nullable AAnnotation(AAnnotation)>*/;
}
var432 = !var431;
var429 = var432;
goto RET_LABEL430;
RET_LABEL430:(void)0;
}
var428 = var429;
}
var410 = var428;
}
{
{ /* Inline model#MMethodDef#is_extern= (var_mpropdef,var410) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nit__model__MMethodDef___is_extern].s = var410; /* _is_extern on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL433:(void)0;
}
}
RET_LABEL:;
}
/* method modelize_property#AMethPropdef#check_signature for (self: AMethPropdef, ModelBuilder) */
void nit__modelize_property___AMethPropdef___APropdef__check_signature(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var /* : nullable MPropDef */;
val* var2 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MMethodDef */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : MClassDef */;
val* var12 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var13 /* : MModule */;
val* var15 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var16 /* : nullable ASignature */;
val* var18 /* : nullable ASignature */;
val* var_nsig /* var nsig: nullable ASignature */;
val* var19 /* : nullable MPropDef */;
val* var21 /* : nullable MPropDef */;
val* var22 /* : nullable MSignature */;
val* var24 /* : nullable MSignature */;
val* var_mysignature /* var mysignature: nullable MSignature */;
val* var25 /* : null */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
val* var34 /* : MProperty */;
val* var36 /* : MProperty */;
val* var37 /* : MPropDef */;
val* var39 /* : MPropDef */;
val* var40 /* : nullable MSignature */;
val* var42 /* : nullable MSignature */;
val* var_msignature /* var msignature: nullable MSignature */;
val* var43 /* : null */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
val* var50 /* : nullable MType */;
val* var52 /* : nullable MType */;
val* var_precursor_ret_type /* var precursor_ret_type: nullable MType */;
val* var53 /* : nullable MType */;
val* var55 /* : nullable MType */;
val* var_ret_type /* var ret_type: nullable MType */;
short int var56 /* : Bool */;
val* var57 /* : null */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
val* var_other61 /* var other: nullable Object */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
short int var_ /* var : Bool */;
val* var64 /* : null */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
short int var70 /* : Bool */;
val* var71 /* : nullable AType */;
val* var73 /* : nullable AType */;
static val* varonce;
val* var74 /* : String */;
char* var75 /* : NativeString */;
long var76 /* : Int */;
val* var77 /* : FlatString */;
val* var78 /* : MProperty */;
val* var80 /* : MProperty */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
long var84 /* : Int */;
val* var85 /* : FlatString */;
val* var86 /* : Array[Object] */;
long var87 /* : Int */;
val* var88 /* : NativeArray[Object] */;
val* var89 /* : String */;
long var90 /* : Int */;
long var91 /* : Int */;
short int var92 /* : Bool */;
short int var94 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var95 /* : Bool */;
long var96 /* : Int */;
long var_i /* var i: Int */;
long var97 /* : Int */;
long var_98 /* var : Int */;
short int var99 /* : Bool */;
short int var101 /* : Bool */;
int cltype102;
int idtype103;
const char* var_class_name104;
short int var105 /* : Bool */;
val* var106 /* : Array[MParameter] */;
val* var108 /* : Array[MParameter] */;
val* var109 /* : nullable Object */;
val* var110 /* : MType */;
val* var112 /* : MType */;
val* var_myt /* var myt: MType */;
val* var113 /* : Array[MParameter] */;
val* var115 /* : Array[MParameter] */;
val* var116 /* : nullable Object */;
val* var117 /* : MType */;
val* var119 /* : MType */;
val* var_prt /* var prt: MType */;
short int var120 /* : Bool */;
val* var121 /* : MClassType */;
val* var123 /* : MClassType */;
short int var124 /* : Bool */;
short int var125 /* : Bool */;
short int var_126 /* var : Bool */;
val* var127 /* : MClassType */;
val* var129 /* : MClassType */;
short int var130 /* : Bool */;
short int var131 /* : Bool */;
val* var132 /* : ANodes[AParam] */;
val* var134 /* : ANodes[AParam] */;
val* var135 /* : ANode */;
static val* varonce136;
val* var137 /* : String */;
char* var138 /* : NativeString */;
long var139 /* : Int */;
val* var140 /* : FlatString */;
val* var141 /* : Array[MParameter] */;
val* var143 /* : Array[MParameter] */;
val* var144 /* : nullable Object */;
val* var145 /* : String */;
val* var147 /* : String */;
static val* varonce148;
val* var149 /* : String */;
char* var150 /* : NativeString */;
long var151 /* : Int */;
val* var152 /* : FlatString */;
static val* varonce153;
val* var154 /* : String */;
char* var155 /* : NativeString */;
long var156 /* : Int */;
val* var157 /* : FlatString */;
static val* varonce158;
val* var159 /* : String */;
char* var160 /* : NativeString */;
long var161 /* : Int */;
val* var162 /* : FlatString */;
val* var163 /* : MProperty */;
val* var165 /* : MProperty */;
val* var166 /* : MPropDef */;
val* var168 /* : MPropDef */;
static val* varonce169;
val* var170 /* : String */;
char* var171 /* : NativeString */;
long var172 /* : Int */;
val* var173 /* : FlatString */;
val* var174 /* : Array[Object] */;
long var175 /* : Int */;
val* var176 /* : NativeArray[Object] */;
val* var177 /* : String */;
long var178 /* : Int */;
long var179 /* : Int */;
val* var180 /* : null */;
short int var181 /* : Bool */;
short int var182 /* : Bool */;
short int var184 /* : Bool */;
short int var185 /* : Bool */;
val* var186 /* : null */;
short int var187 /* : Bool */;
short int var188 /* : Bool */;
short int var190 /* : Bool */;
short int var192 /* : Bool */;
val* var193 /* : MClassType */;
val* var195 /* : MClassType */;
short int var196 /* : Bool */;
short int var197 /* : Bool */;
val* var198 /* : nullable AType */;
val* var200 /* : nullable AType */;
static val* varonce201;
val* var202 /* : String */;
char* var203 /* : NativeString */;
long var204 /* : Int */;
val* var205 /* : FlatString */;
static val* varonce206;
val* var207 /* : String */;
char* var208 /* : NativeString */;
long var209 /* : Int */;
val* var210 /* : FlatString */;
static val* varonce211;
val* var212 /* : String */;
char* var213 /* : NativeString */;
long var214 /* : Int */;
val* var215 /* : FlatString */;
val* var216 /* : MProperty */;
val* var218 /* : MProperty */;
val* var219 /* : MPropDef */;
val* var221 /* : MPropDef */;
static val* varonce222;
val* var223 /* : String */;
char* var224 /* : NativeString */;
long var225 /* : Int */;
val* var226 /* : FlatString */;
val* var227 /* : Array[Object] */;
long var228 /* : Int */;
val* var229 /* : NativeArray[Object] */;
val* var230 /* : String */;
long var231 /* : Int */;
long var232 /* : Int */;
short int var233 /* : Bool */;
short int var235 /* : Bool */;
int cltype236;
int idtype237;
const char* var_class_name238;
short int var239 /* : Bool */;
long var240 /* : Int */;
long var_i241 /* var i: Int */;
long var242 /* : Int */;
long var_243 /* var : Int */;
short int var244 /* : Bool */;
short int var246 /* : Bool */;
int cltype247;
int idtype248;
const char* var_class_name249;
short int var250 /* : Bool */;
val* var251 /* : ANodes[AParam] */;
val* var253 /* : ANodes[AParam] */;
val* var254 /* : ANode */;
val* var255 /* : nullable AType */;
val* var257 /* : nullable AType */;
val* var_nt /* var nt: nullable AType */;
val* var258 /* : null */;
short int var259 /* : Bool */;
short int var260 /* : Bool */;
short int var262 /* : Bool */;
short int var263 /* : Bool */;
val* var264 /* : nullable MType */;
val* var266 /* : nullable MType */;
long var267 /* : Int */;
long var268 /* : Int */;
val* var270 /* : nullable AType */;
val* var272 /* : nullable AType */;
val* var_nt273 /* var nt: nullable AType */;
val* var274 /* : null */;
short int var275 /* : Bool */;
short int var276 /* : Bool */;
short int var278 /* : Bool */;
short int var279 /* : Bool */;
val* var280 /* : nullable MType */;
val* var282 /* : nullable MType */;
var_modelbuilder = p0;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var2 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mpropdef = var;
var3 = NULL;
if (var_mpropdef == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mpropdef,var3) on <var_mpropdef:nullable MMethodDef> */
var_other = var3;
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var9 = var_mpropdef == var_other;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var12 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_mclassdef = var10;
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var15 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_mmodule = var13;
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (self) on <self:AMethPropdef> */
var18 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_nsig = var16;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var21 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
if (var19 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 811);
show_backtrace(1);
} else {
{ /* Inline model#MMethodDef#msignature (var19) on <var19:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2137);
show_backtrace(1);
}
var24 = var19->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var19:nullable MPropDef(nullable MMethodDef)> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
var_mysignature = var22;
var25 = NULL;
if (var_mysignature == NULL) {
var26 = 1; /* is null */
} else {
var26 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mysignature,var25) on <var_mysignature:nullable MSignature> */
var_other = var25;
{
{ /* Inline kernel#Object#is_same_instance (var_mysignature,var_other) on <var_mysignature:nullable MSignature(MSignature)> */
var31 = var_mysignature == var_other;
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
var26 = var27;
}
if (var26){
goto RET_LABEL;
} else {
}
{
var32 = nit___nit__MPropDef___is_intro(var_mpropdef);
}
var33 = !var32;
if (var33){
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var36 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var34) on <var34:MProperty(MMethod)> */
var39 = var34->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var34:MProperty(MMethod)> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1773);
show_backtrace(1);
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
var_msignature = var40;
var43 = NULL;
if (var_msignature == NULL) {
var44 = 1; /* is null */
} else {
var44 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_msignature,var43) on <var_msignature:nullable MSignature> */
var_other = var43;
{
{ /* Inline kernel#Object#is_same_instance (var_msignature,var_other) on <var_msignature:nullable MSignature(MSignature)> */
var49 = var_msignature == var_other;
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
var44 = var45;
}
if (var44){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var52 = var_msignature->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:nullable MSignature(MSignature)> */
var50 = var52;
RET_LABEL51:(void)0;
}
}
var_precursor_ret_type = var50;
{
{ /* Inline model#MSignature#return_mtype (var_mysignature) on <var_mysignature:nullable MSignature(MSignature)> */
var55 = var_mysignature->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var_mysignature:nullable MSignature(MSignature)> */
var53 = var55;
RET_LABEL54:(void)0;
}
}
var_ret_type = var53;
var57 = NULL;
if (var_ret_type == NULL) {
var58 = 0; /* is null */
} else {
var58 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret_type,var57) on <var_ret_type:nullable MType> */
var_other61 = var57;
{
var62 = ((short int (*)(val* self, val* p0))(var_ret_type->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ret_type, var_other61) /* == on <var_ret_type:nullable MType(MType)>*/;
}
var63 = !var62;
var59 = var63;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
var58 = var59;
}
var_ = var58;
if (var58){
var64 = NULL;
if (var_precursor_ret_type == NULL) {
var65 = 1; /* is null */
} else {
var65 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_precursor_ret_type,var64) on <var_precursor_ret_type:nullable MType> */
var_other = var64;
{
{ /* Inline kernel#Object#is_same_instance (var_precursor_ret_type,var_other) on <var_precursor_ret_type:nullable MType(MType)> */
var70 = var_precursor_ret_type == var_other;
var68 = var70;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
var66 = var68;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
var65 = var66;
}
var56 = var65;
} else {
var56 = var_;
}
if (var56){
if (var_nsig == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 823);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ASignature#n_type (var_nsig) on <var_nsig:nullable ASignature> */
if (unlikely(var_nsig == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1512);
show_backtrace(1);
}
var73 = var_nsig->attrs[COLOR_nit__parser_nodes__ASignature___n_type].val; /* _n_type on <var_nsig:nullable ASignature> */
var71 = var73;
RET_LABEL72:(void)0;
}
}
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 823);
show_backtrace(1);
}
if (varonce) {
var74 = varonce;
} else {
var75 = "Redef Error: ";
var76 = 13;
var77 = standard___standard__NativeString___to_s_with_length(var75, var76);
var74 = var77;
varonce = var74;
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var80 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var80 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
if (varonce81) {
var82 = varonce81;
} else {
var83 = " is a procedure, not a function.";
var84 = 32;
var85 = standard___standard__NativeString___to_s_with_length(var83, var84);
var82 = var85;
varonce81 = var82;
}
var86 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var86 = array_instance Array[Object] */
var87 = 3;
var88 = NEW_standard__NativeArray(var87, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var88)->values[0] = (val*) var74;
((struct instance_standard__NativeArray*)var88)->values[1] = (val*) var78;
((struct instance_standard__NativeArray*)var88)->values[2] = (val*) var82;
{
((void (*)(val* self, val* p0, long p1))(var86->class->vft[COLOR_standard__array__Array__with_native]))(var86, var88, var87) /* with_native on <var86:Array[Object]>*/;
}
}
{
var89 = ((val* (*)(val* self))(var86->class->vft[COLOR_standard__string__Object__to_s]))(var86) /* to_s on <var86:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, var71, var89); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
var90 = nit___nit__MSignature___arity(var_mysignature);
}
var91 = 0;
{
{ /* Inline kernel#Int#> (var90,var91) on <var90:Int> */
/* Covariant cast for argument 0 (i) <var91:Int> isa OTHER */
/* <var91:Int> isa OTHER */
var94 = 1; /* easy <var91:Int> isa OTHER*/
if (unlikely(!var94)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var95 = var90 > var91;
var92 = var95;
goto RET_LABEL93;
RET_LABEL93:(void)0;
}
}
if (var92){
var96 = 0;
var_i = var96;
{
var97 = nit___nit__MSignature___arity(var_mysignature);
}
var_98 = var97;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_98) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_98:Int> isa OTHER */
/* <var_98:Int> isa OTHER */
var101 = 1; /* easy <var_98:Int> isa OTHER*/
if (unlikely(!var101)) {
var_class_name104 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name104);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var105 = var_i < var_98;
var99 = var105;
goto RET_LABEL100;
RET_LABEL100:(void)0;
}
}
if (var99){
{
{ /* Inline model#MSignature#mparameters (var_mysignature) on <var_mysignature:nullable MSignature(MSignature)> */
var108 = var_mysignature->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var_mysignature:nullable MSignature(MSignature)> */
if (unlikely(var108 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var106 = var108;
RET_LABEL107:(void)0;
}
}
{
var109 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var106, var_i);
}
{
{ /* Inline model#MParameter#mtype (var109) on <var109:nullable Object(MParameter)> */
var112 = var109->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var109:nullable Object(MParameter)> */
if (unlikely(var112 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1690);
show_backtrace(1);
}
var110 = var112;
RET_LABEL111:(void)0;
}
}
var_myt = var110;
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var115 = var_msignature->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:nullable MSignature(MSignature)> */
if (unlikely(var115 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var113 = var115;
RET_LABEL114:(void)0;
}
}
{
var116 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var113, var_i);
}
{
{ /* Inline model#MParameter#mtype (var116) on <var116:nullable Object(MParameter)> */
var119 = var116->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var116:nullable Object(MParameter)> */
if (unlikely(var119 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1690);
show_backtrace(1);
}
var117 = var119;
RET_LABEL118:(void)0;
}
}
var_prt = var117;
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var123 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var123 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var121 = var123;
RET_LABEL122:(void)0;
}
}
{
var124 = nit___nit__MType___is_subtype(var_myt, var_mmodule, var121, var_prt);
}
var125 = !var124;
var_126 = var125;
if (var125){
var120 = var_126;
} else {
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var129 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var129 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var127 = var129;
RET_LABEL128:(void)0;
}
}
{
var130 = nit___nit__MType___is_subtype(var_prt, var_mmodule, var127, var_myt);
}
var131 = !var130;
var120 = var131;
}
if (var120){
if (var_nsig == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 834);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var_nsig) on <var_nsig:nullable ASignature> */
if (unlikely(var_nsig == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1506);
show_backtrace(1);
}
var134 = var_nsig->attrs[COLOR_nit__parser_nodes__ASignature___n_params].val; /* _n_params on <var_nsig:nullable ASignature> */
if (unlikely(var134 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1506);
show_backtrace(1);
}
var132 = var134;
RET_LABEL133:(void)0;
}
}
{
var135 = nit___nit__ANodes___standard__abstract_collection__SequenceRead___91d_93d(var132, var_i);
}
if (varonce136) {
var137 = varonce136;
} else {
var138 = "Redef Error: Wrong type for parameter `";
var139 = 39;
var140 = standard___standard__NativeString___to_s_with_length(var138, var139);
var137 = var140;
varonce136 = var137;
}
{
{ /* Inline model#MSignature#mparameters (var_mysignature) on <var_mysignature:nullable MSignature(MSignature)> */
var143 = var_mysignature->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var_mysignature:nullable MSignature(MSignature)> */
if (unlikely(var143 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var141 = var143;
RET_LABEL142:(void)0;
}
}
{
var144 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var141, var_i);
}
{
{ /* Inline model#MParameter#name (var144) on <var144:nullable Object(MParameter)> */
var147 = var144->attrs[COLOR_nit__model__MParameter___name].val; /* _name on <var144:nullable Object(MParameter)> */
if (unlikely(var147 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1687);
show_backtrace(1);
}
var145 = var147;
RET_LABEL146:(void)0;
}
}
if (varonce148) {
var149 = varonce148;
} else {
var150 = "\'. found ";
var151 = 9;
var152 = standard___standard__NativeString___to_s_with_length(var150, var151);
var149 = var152;
varonce148 = var149;
}
if (varonce153) {
var154 = varonce153;
} else {
var155 = ", expected ";
var156 = 11;
var157 = standard___standard__NativeString___to_s_with_length(var155, var156);
var154 = var157;
varonce153 = var154;
}
if (varonce158) {
var159 = varonce158;
} else {
var160 = " as in ";
var161 = 7;
var162 = standard___standard__NativeString___to_s_with_length(var160, var161);
var159 = var162;
varonce158 = var159;
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var165 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var165 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var163 = var165;
RET_LABEL164:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var163) on <var163:MProperty(MMethod)> */
var168 = var163->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var163:MProperty(MMethod)> */
if (unlikely(var168 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1773);
show_backtrace(1);
}
var166 = var168;
RET_LABEL167:(void)0;
}
}
if (varonce169) {
var170 = varonce169;
} else {
var171 = ".";
var172 = 1;
var173 = standard___standard__NativeString___to_s_with_length(var171, var172);
var170 = var173;
varonce169 = var170;
}
var174 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var174 = array_instance Array[Object] */
var175 = 9;
var176 = NEW_standard__NativeArray(var175, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var176)->values[0] = (val*) var137;
((struct instance_standard__NativeArray*)var176)->values[1] = (val*) var145;
((struct instance_standard__NativeArray*)var176)->values[2] = (val*) var149;
((struct instance_standard__NativeArray*)var176)->values[3] = (val*) var_myt;
((struct instance_standard__NativeArray*)var176)->values[4] = (val*) var154;
((struct instance_standard__NativeArray*)var176)->values[5] = (val*) var_prt;
((struct instance_standard__NativeArray*)var176)->values[6] = (val*) var159;
((struct instance_standard__NativeArray*)var176)->values[7] = (val*) var166;
((struct instance_standard__NativeArray*)var176)->values[8] = (val*) var170;
{
((void (*)(val* self, val* p0, long p1))(var174->class->vft[COLOR_standard__array__Array__with_native]))(var174, var176, var175) /* with_native on <var174:Array[Object]>*/;
}
}
{
var177 = ((val* (*)(val* self))(var174->class->vft[COLOR_standard__string__Object__to_s]))(var174) /* to_s on <var174:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, var135, var177); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
var178 = 1;
{
var179 = standard___standard__Int___Discrete__successor(var_i, var178);
}
var_i = var179;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
} else {
}
var180 = NULL;
if (var_precursor_ret_type == NULL) {
var181 = 0; /* is null */
} else {
var181 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_precursor_ret_type,var180) on <var_precursor_ret_type:nullable MType> */
var_other61 = var180;
{
var184 = ((short int (*)(val* self, val* p0))(var_precursor_ret_type->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_precursor_ret_type, var_other61) /* == on <var_precursor_ret_type:nullable MType(MType)>*/;
}
var185 = !var184;
var182 = var185;
goto RET_LABEL183;
RET_LABEL183:(void)0;
}
var181 = var182;
}
if (var181){
var186 = NULL;
if (var_ret_type == NULL) {
var187 = 1; /* is null */
} else {
var187 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ret_type,var186) on <var_ret_type:nullable MType> */
var_other = var186;
{
{ /* Inline kernel#Object#is_same_instance (var_ret_type,var_other) on <var_ret_type:nullable MType(MType)> */
var192 = var_ret_type == var_other;
var190 = var192;
goto RET_LABEL191;
RET_LABEL191:(void)0;
}
}
var188 = var190;
goto RET_LABEL189;
RET_LABEL189:(void)0;
}
var187 = var188;
}
if (var187){
var_ret_type = var_precursor_ret_type;
} else {
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var195 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var195 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var193 = var195;
RET_LABEL194:(void)0;
}
}
{
var196 = nit___nit__MType___is_subtype(var_ret_type, var_mmodule, var193, var_precursor_ret_type);
}
var197 = !var196;
if (var197){
if (var_nsig == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 843);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ASignature#n_type (var_nsig) on <var_nsig:nullable ASignature> */
if (unlikely(var_nsig == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1512);
show_backtrace(1);
}
var200 = var_nsig->attrs[COLOR_nit__parser_nodes__ASignature___n_type].val; /* _n_type on <var_nsig:nullable ASignature> */
var198 = var200;
RET_LABEL199:(void)0;
}
}
if (unlikely(var198 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 843);
show_backtrace(1);
}
if (varonce201) {
var202 = varonce201;
} else {
var203 = "Redef Error: Wrong return type. found ";
var204 = 38;
var205 = standard___standard__NativeString___to_s_with_length(var203, var204);
var202 = var205;
varonce201 = var202;
}
if (varonce206) {
var207 = varonce206;
} else {
var208 = ", expected ";
var209 = 11;
var210 = standard___standard__NativeString___to_s_with_length(var208, var209);
var207 = var210;
varonce206 = var207;
}
if (varonce211) {
var212 = varonce211;
} else {
var213 = " as in ";
var214 = 7;
var215 = standard___standard__NativeString___to_s_with_length(var213, var214);
var212 = var215;
varonce211 = var212;
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var218 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var218 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var216 = var218;
RET_LABEL217:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var216) on <var216:MProperty(MMethod)> */
var221 = var216->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var216:MProperty(MMethod)> */
if (unlikely(var221 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1773);
show_backtrace(1);
}
var219 = var221;
RET_LABEL220:(void)0;
}
}
if (varonce222) {
var223 = varonce222;
} else {
var224 = ".";
var225 = 1;
var226 = standard___standard__NativeString___to_s_with_length(var224, var225);
var223 = var226;
varonce222 = var223;
}
var227 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var227 = array_instance Array[Object] */
var228 = 7;
var229 = NEW_standard__NativeArray(var228, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var229)->values[0] = (val*) var202;
((struct instance_standard__NativeArray*)var229)->values[1] = (val*) var_ret_type;
((struct instance_standard__NativeArray*)var229)->values[2] = (val*) var207;
((struct instance_standard__NativeArray*)var229)->values[3] = (val*) var_precursor_ret_type;
((struct instance_standard__NativeArray*)var229)->values[4] = (val*) var212;
((struct instance_standard__NativeArray*)var229)->values[5] = (val*) var219;
((struct instance_standard__NativeArray*)var229)->values[6] = (val*) var223;
{
((void (*)(val* self, val* p0, long p1))(var227->class->vft[COLOR_standard__array__Array__with_native]))(var227, var229, var228) /* with_native on <var227:Array[Object]>*/;
}
}
{
var230 = ((val* (*)(val* self))(var227->class->vft[COLOR_standard__string__Object__to_s]))(var227) /* to_s on <var227:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, var198, var230); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
}
} else {
}
} else {
}
{
var231 = nit___nit__MSignature___arity(var_mysignature);
}
var232 = 0;
{
{ /* Inline kernel#Int#> (var231,var232) on <var231:Int> */
/* Covariant cast for argument 0 (i) <var232:Int> isa OTHER */
/* <var232:Int> isa OTHER */
var235 = 1; /* easy <var232:Int> isa OTHER*/
if (unlikely(!var235)) {
var_class_name238 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name238);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var239 = var231 > var232;
var233 = var239;
goto RET_LABEL234;
RET_LABEL234:(void)0;
}
}
if (var233){
var240 = 0;
var_i241 = var240;
{
var242 = nit___nit__MSignature___arity(var_mysignature);
}
var_243 = var242;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i241,var_243) on <var_i241:Int> */
/* Covariant cast for argument 0 (i) <var_243:Int> isa OTHER */
/* <var_243:Int> isa OTHER */
var246 = 1; /* easy <var_243:Int> isa OTHER*/
if (unlikely(!var246)) {
var_class_name249 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name249);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var250 = var_i241 < var_243;
var244 = var250;
goto RET_LABEL245;
RET_LABEL245:(void)0;
}
}
if (var244){
if (var_nsig == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 851);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var_nsig) on <var_nsig:nullable ASignature> */
if (unlikely(var_nsig == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1506);
show_backtrace(1);
}
var253 = var_nsig->attrs[COLOR_nit__parser_nodes__ASignature___n_params].val; /* _n_params on <var_nsig:nullable ASignature> */
if (unlikely(var253 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1506);
show_backtrace(1);
}
var251 = var253;
RET_LABEL252:(void)0;
}
}
{
var254 = nit___nit__ANodes___standard__abstract_collection__SequenceRead___91d_93d(var251, var_i241);
}
{
{ /* Inline parser_nodes#AParam#n_type (var254) on <var254:ANode(AParam)> */
var257 = var254->attrs[COLOR_nit__parser_nodes__AParam___n_type].val; /* _n_type on <var254:ANode(AParam)> */
var255 = var257;
RET_LABEL256:(void)0;
}
}
var_nt = var255;
var258 = NULL;
if (var_nt == NULL) {
var259 = 0; /* is null */
} else {
var259 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nt,var258) on <var_nt:nullable AType> */
var_other61 = var258;
{
var262 = ((short int (*)(val* self, val* p0))(var_nt->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nt, var_other61) /* == on <var_nt:nullable AType(AType)>*/;
}
var263 = !var262;
var260 = var263;
goto RET_LABEL261;
RET_LABEL261:(void)0;
}
var259 = var260;
}
if (var259){
{
{ /* Inline modelize_class#AType#mtype (var_nt) on <var_nt:nullable AType(AType)> */
var266 = var_nt->attrs[COLOR_nit__modelize_class__AType___mtype].val; /* _mtype on <var_nt:nullable AType(AType)> */
var264 = var266;
RET_LABEL265:(void)0;
}
}
if (unlikely(var264 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 852);
show_backtrace(1);
}
{
nit__modelize_property___ModelBuilder___check_visibility(var_modelbuilder, var_nt, var264, var_mpropdef); /* Direct call modelize_property#ModelBuilder#check_visibility on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
var267 = 1;
{
var268 = standard___standard__Int___Discrete__successor(var_i241, var267);
}
var_i241 = var268;
} else {
goto BREAK_label269;
}
}
BREAK_label269: (void)0;
if (var_nsig == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 854);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ASignature#n_type (var_nsig) on <var_nsig:nullable ASignature> */
if (unlikely(var_nsig == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1512);
show_backtrace(1);
}
var272 = var_nsig->attrs[COLOR_nit__parser_nodes__ASignature___n_type].val; /* _n_type on <var_nsig:nullable ASignature> */
var270 = var272;
RET_LABEL271:(void)0;
}
}
var_nt273 = var270;
var274 = NULL;
if (var_nt273 == NULL) {
var275 = 0; /* is null */
} else {
var275 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nt273,var274) on <var_nt273:nullable AType> */
var_other61 = var274;
{
var278 = ((short int (*)(val* self, val* p0))(var_nt273->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nt273, var_other61) /* == on <var_nt273:nullable AType(AType)>*/;
}
var279 = !var278;
var276 = var279;
goto RET_LABEL277;
RET_LABEL277:(void)0;
}
var275 = var276;
}
if (var275){
{
{ /* Inline modelize_class#AType#mtype (var_nt273) on <var_nt273:nullable AType(AType)> */
var282 = var_nt273->attrs[COLOR_nit__modelize_class__AType___mtype].val; /* _mtype on <var_nt273:nullable AType(AType)> */
var280 = var282;
RET_LABEL281:(void)0;
}
}
if (unlikely(var280 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 855);
show_backtrace(1);
}
{
nit__modelize_property___ModelBuilder___check_visibility(var_modelbuilder, var_nt273, var280, var_mpropdef); /* Direct call modelize_property#ModelBuilder#check_visibility on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
} else {
}
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#noinit for (self: AAttrPropdef): Bool */
short int nit__modelize_property___AAttrPropdef___noinit(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___noinit].s; /* _noinit on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#noinit= for (self: AAttrPropdef, Bool) */
void nit__modelize_property___AAttrPropdef___noinit_61d(val* self, short int p0) {
self->attrs[COLOR_nit__modelize_property__AAttrPropdef___noinit].s = p0; /* _noinit on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#is_lazy for (self: AAttrPropdef): Bool */
short int nit__modelize_property___AAttrPropdef___is_lazy(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___is_lazy].s; /* _is_lazy on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#is_lazy= for (self: AAttrPropdef, Bool) */
void nit__modelize_property___AAttrPropdef___is_lazy_61d(val* self, short int p0) {
self->attrs[COLOR_nit__modelize_property__AAttrPropdef___is_lazy].s = p0; /* _is_lazy on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#has_value for (self: AAttrPropdef): Bool */
short int nit__modelize_property___AAttrPropdef___has_value(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#has_value= for (self: AAttrPropdef, Bool) */
void nit__modelize_property___AAttrPropdef___has_value_61d(val* self, short int p0) {
self->attrs[COLOR_nit__modelize_property__AAttrPropdef___has_value].s = p0; /* _has_value on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#mlazypropdef for (self: AAttrPropdef): nullable MAttributeDef */
val* nit__modelize_property___AAttrPropdef___mlazypropdef(val* self) {
val* var /* : nullable MAttributeDef */;
val* var1 /* : nullable MAttributeDef */;
var1 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___mlazypropdef].val; /* _mlazypropdef on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#mlazypropdef= for (self: AAttrPropdef, nullable MAttributeDef) */
void nit__modelize_property___AAttrPropdef___mlazypropdef_61d(val* self, val* p0) {
self->attrs[COLOR_nit__modelize_property__AAttrPropdef___mlazypropdef].val = p0; /* _mlazypropdef on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#mreadpropdef for (self: AAttrPropdef): nullable MMethodDef */
val* nit__modelize_property___AAttrPropdef___mreadpropdef(val* self) {
val* var /* : nullable MMethodDef */;
val* var1 /* : nullable MMethodDef */;
var1 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___mreadpropdef].val; /* _mreadpropdef on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#mreadpropdef= for (self: AAttrPropdef, nullable MMethodDef) */
void nit__modelize_property___AAttrPropdef___mreadpropdef_61d(val* self, val* p0) {
self->attrs[COLOR_nit__modelize_property__AAttrPropdef___mreadpropdef].val = p0; /* _mreadpropdef on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#mwritepropdef for (self: AAttrPropdef): nullable MMethodDef */
val* nit__modelize_property___AAttrPropdef___mwritepropdef(val* self) {
val* var /* : nullable MMethodDef */;
val* var1 /* : nullable MMethodDef */;
var1 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___mwritepropdef].val; /* _mwritepropdef on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#mwritepropdef= for (self: AAttrPropdef, nullable MMethodDef) */
void nit__modelize_property___AAttrPropdef___mwritepropdef_61d(val* self, val* p0) {
self->attrs[COLOR_nit__modelize_property__AAttrPropdef___mwritepropdef].val = p0; /* _mwritepropdef on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#build_property for (self: AAttrPropdef, ModelBuilder, MClassDef) */
void nit__modelize_property___AAttrPropdef___APropdef__build_property(val* self, val* p0, val* p1) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var /* : MClass */;
val* var2 /* : MClass */;
val* var_mclass /* var mclass: MClass */;
val* var3 /* : TId */;
val* var5 /* : TId */;
val* var6 /* : String */;
val* var_name /* var name: String */;
short int var7 /* : Bool */;
val* var8 /* : MClassKind */;
val* var10 /* : MClassKind */;
val* var11 /* : MClassKind */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var_ /* var : Bool */;
val* var17 /* : MClass */;
val* var19 /* : MClass */;
val* var20 /* : MClassKind */;
val* var22 /* : MClassKind */;
val* var23 /* : MClassKind */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
static val* varonce;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : FlatString */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
val* var37 /* : FlatString */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
long var41 /* : Int */;
val* var42 /* : FlatString */;
val* var43 /* : Array[Object] */;
long var44 /* : Int */;
val* var45 /* : NativeArray[Object] */;
val* var46 /* : String */;
val* var47 /* : MClassKind */;
val* var49 /* : MClassKind */;
val* var50 /* : MClassKind */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
long var59 /* : Int */;
val* var60 /* : FlatString */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
long var64 /* : Int */;
val* var65 /* : FlatString */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
long var69 /* : Int */;
val* var70 /* : FlatString */;
val* var71 /* : Array[Object] */;
long var72 /* : Int */;
val* var73 /* : NativeArray[Object] */;
val* var74 /* : String */;
val* var75 /* : MClassKind */;
val* var77 /* : MClassKind */;
val* var78 /* : MClassKind */;
short int var79 /* : Bool */;
short int var81 /* : Bool */;
short int var83 /* : Bool */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : NativeString */;
long var87 /* : Int */;
val* var88 /* : FlatString */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
long var92 /* : Int */;
val* var93 /* : FlatString */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : NativeString */;
long var97 /* : Int */;
val* var98 /* : FlatString */;
val* var99 /* : Array[Object] */;
long var100 /* : Int */;
val* var101 /* : NativeArray[Object] */;
val* var102 /* : String */;
val* var103 /* : TId */;
val* var105 /* : TId */;
val* var_nid2 /* var nid2: TId */;
val* var106 /* : MAttribute */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
long var110 /* : Int */;
val* var111 /* : FlatString */;
val* var112 /* : String */;
val* var113 /* : MVisibility */;
val* var_mprop /* var mprop: MAttribute */;
val* var114 /* : MAttributeDef */;
val* var115 /* : Location */;
val* var117 /* : Location */;
val* var_mpropdef /* var mpropdef: MAttributeDef */;
short int var118 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var120 /* : Bool */;
int cltype121;
int idtype122;
const struct type* type_struct123;
const char* var_class_name124;
val* var125 /* : HashMap[MPropDef, APropdef] */;
val* var127 /* : HashMap[MPropDef, APropdef] */;
val* var_readname /* var readname: String */;
val* var128 /* : nullable MProperty */;
short int var129 /* : Bool */;
int cltype130;
int idtype131;
const char* var_class_name132;
val* var_mreadprop /* var mreadprop: nullable MMethod */;
val* var133 /* : null */;
short int var134 /* : Bool */;
short int var135 /* : Bool */;
short int var137 /* : Bool */;
short int var139 /* : Bool */;
val* var140 /* : nullable AVisibility */;
val* var142 /* : nullable AVisibility */;
val* var143 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: MVisibility */;
val* var144 /* : MMethod */;
val* var145 /* : nullable TKwredef */;
val* var147 /* : nullable TKwredef */;
short int var148 /* : Bool */;
short int var149 /* : Bool */;
short int var150 /* : Bool */;
val* var151 /* : nullable MDeprecationInfo */;
val* var153 /* : nullable MDeprecationInfo */;
val* var155 /* : nullable TKwredef */;
val* var157 /* : nullable TKwredef */;
short int var158 /* : Bool */;
short int var159 /* : Bool */;
short int var160 /* : Bool */;
val* var161 /* : nullable AVisibility */;
val* var163 /* : nullable AVisibility */;
val* var164 /* : Map[MProperty, APropdef] */;
val* var166 /* : Map[MProperty, APropdef] */;
val* var167 /* : MMethodDef */;
val* var168 /* : Location */;
val* var170 /* : Location */;
val* var_mreadpropdef /* var mreadpropdef: MMethodDef */;
val* var172 /* : HashMap[MPropDef, APropdef] */;
val* var174 /* : HashMap[MPropDef, APropdef] */;
val* var175 /* : nullable MDoc */;
val* var177 /* : nullable MDoc */;
short int var179 /* : Bool */;
val* var180 /* : nullable AExpr */;
val* var182 /* : nullable AExpr */;
val* var183 /* : null */;
short int var184 /* : Bool */;
short int var185 /* : Bool */;
val* var_other187 /* var other: nullable Object */;
short int var188 /* : Bool */;
short int var189 /* : Bool */;
short int var_190 /* var : Bool */;
val* var191 /* : nullable AExpr */;
val* var193 /* : nullable AExpr */;
val* var194 /* : null */;
short int var195 /* : Bool */;
short int var196 /* : Bool */;
short int var198 /* : Bool */;
short int var199 /* : Bool */;
static val* varonce201;
val* var202 /* : String */;
char* var203 /* : NativeString */;
long var204 /* : Int */;
val* var205 /* : FlatString */;
val* var206 /* : nullable AAnnotation */;
val* var_atnoinit /* var atnoinit: nullable AAnnotation */;
val* var207 /* : null */;
short int var208 /* : Bool */;
short int var209 /* : Bool */;
short int var211 /* : Bool */;
short int var212 /* : Bool */;
short int var213 /* : Bool */;
short int var215 /* : Bool */;
short int var217 /* : Bool */;
static val* varonce218;
val* var219 /* : String */;
char* var220 /* : NativeString */;
long var221 /* : Int */;
val* var222 /* : FlatString */;
static val* varonce223;
val* var224 /* : String */;
char* var225 /* : NativeString */;
long var226 /* : Int */;
val* var227 /* : FlatString */;
val* var228 /* : nullable AAnnotation */;
val* var_atlazy /* var atlazy: nullable AAnnotation */;
static val* varonce229;
val* var230 /* : String */;
char* var231 /* : NativeString */;
long var232 /* : Int */;
val* var233 /* : FlatString */;
val* var234 /* : nullable AAnnotation */;
val* var_atautoinit /* var atautoinit: nullable AAnnotation */;
short int var235 /* : Bool */;
val* var236 /* : null */;
short int var237 /* : Bool */;
short int var238 /* : Bool */;
short int var240 /* : Bool */;
short int var241 /* : Bool */;
short int var_242 /* var : Bool */;
val* var243 /* : null */;
short int var244 /* : Bool */;
short int var245 /* : Bool */;
short int var247 /* : Bool */;
short int var248 /* : Bool */;
short int var249 /* : Bool */;
val* var250 /* : null */;
short int var251 /* : Bool */;
short int var252 /* : Bool */;
short int var254 /* : Bool */;
short int var255 /* : Bool */;
short int var_256 /* var : Bool */;
val* var257 /* : null */;
short int var258 /* : Bool */;
short int var259 /* : Bool */;
short int var261 /* : Bool */;
short int var262 /* : Bool */;
static val* varonce263;
val* var264 /* : String */;
char* var265 /* : NativeString */;
long var266 /* : Int */;
val* var267 /* : FlatString */;
short int var268 /* : Bool */;
short int var270 /* : Bool */;
short int var271 /* : Bool */;
val* var272 /* : null */;
short int var273 /* : Bool */;
short int var274 /* : Bool */;
short int var276 /* : Bool */;
short int var277 /* : Bool */;
static val* varonce278;
val* var279 /* : String */;
char* var280 /* : NativeString */;
long var281 /* : Int */;
val* var282 /* : FlatString */;
val* var283 /* : null */;
short int var284 /* : Bool */;
short int var285 /* : Bool */;
short int var287 /* : Bool */;
short int var288 /* : Bool */;
static val* varonce289;
val* var290 /* : String */;
char* var291 /* : NativeString */;
long var292 /* : Int */;
val* var293 /* : FlatString */;
short int var294 /* : Bool */;
val* var296 /* : MAttribute */;
static val* varonce297;
val* var298 /* : String */;
char* var299 /* : NativeString */;
long var300 /* : Int */;
val* var301 /* : FlatString */;
val* var302 /* : String */;
val* var303 /* : MVisibility */;
val* var_mlazyprop /* var mlazyprop: MAttribute */;
val* var304 /* : MAttributeDef */;
val* var305 /* : Location */;
val* var307 /* : Location */;
val* var_mlazypropdef /* var mlazypropdef: MAttributeDef */;
static val* varonce309;
val* var310 /* : String */;
char* var311 /* : NativeString */;
long var312 /* : Int */;
val* var313 /* : FlatString */;
val* var314 /* : nullable AAnnotation */;
val* var_atreadonly /* var atreadonly: nullable AAnnotation */;
val* var315 /* : null */;
short int var316 /* : Bool */;
short int var317 /* : Bool */;
short int var319 /* : Bool */;
short int var320 /* : Bool */;
short int var321 /* : Bool */;
short int var323 /* : Bool */;
short int var324 /* : Bool */;
static val* varonce325;
val* var326 /* : String */;
char* var327 /* : NativeString */;
long var328 /* : Int */;
val* var329 /* : FlatString */;
static val* varonce330;
val* var331 /* : String */;
char* var332 /* : NativeString */;
long var333 /* : Int */;
val* var334 /* : FlatString */;
val* var335 /* : String */;
val* var_writename /* var writename: String */;
static val* varonce336;
val* var337 /* : String */;
char* var338 /* : NativeString */;
long var339 /* : Int */;
val* var340 /* : FlatString */;
val* var341 /* : nullable AAnnotation */;
val* var_atwritable /* var atwritable: nullable AAnnotation */;
val* var342 /* : null */;
short int var343 /* : Bool */;
short int var344 /* : Bool */;
short int var346 /* : Bool */;
short int var347 /* : Bool */;
val* var348 /* : ANodes[AExpr] */;
val* var350 /* : ANodes[AExpr] */;
short int var351 /* : Bool */;
short int var352 /* : Bool */;
val* var353 /* : String */;
val* var354 /* : nullable String */;
val* var355 /* : nullable MProperty */;
short int var356 /* : Bool */;
int cltype357;
int idtype358;
const char* var_class_name359;
val* var_mwriteprop /* var mwriteprop: nullable MMethod */;
val* var360 /* : null */;
val* var_nwkwredef /* var nwkwredef: nullable Token */;
val* var361 /* : null */;
short int var362 /* : Bool */;
short int var363 /* : Bool */;
short int var365 /* : Bool */;
short int var366 /* : Bool */;
val* var367 /* : nullable TKwredef */;
val* var369 /* : nullable TKwredef */;
val* var370 /* : null */;
short int var371 /* : Bool */;
short int var372 /* : Bool */;
short int var374 /* : Bool */;
short int var376 /* : Bool */;
val* var377 /* : null */;
short int var378 /* : Bool */;
short int var379 /* : Bool */;
short int var381 /* : Bool */;
short int var382 /* : Bool */;
val* var383 /* : nullable AVisibility */;
val* var385 /* : nullable AVisibility */;
val* var386 /* : MVisibility */;
val* var_mvisibility387 /* var mvisibility: nullable Object */;
val* var388 /* : MVisibility */;
val* var389 /* : MMethod */;
short int var390 /* : Bool */;
short int var391 /* : Bool */;
short int var392 /* : Bool */;
val* var393 /* : nullable MDeprecationInfo */;
val* var395 /* : nullable MDeprecationInfo */;
val* var397 /* : nullable Token */;
val* var398 /* : nullable TKwredef */;
val* var400 /* : nullable TKwredef */;
short int var401 /* : Bool */;
short int var402 /* : Bool */;
short int var403 /* : Bool */;
val* var404 /* : null */;
short int var405 /* : Bool */;
short int var406 /* : Bool */;
short int var408 /* : Bool */;
short int var409 /* : Bool */;
val* var410 /* : nullable AVisibility */;
val* var412 /* : nullable AVisibility */;
val* var413 /* : Map[MProperty, APropdef] */;
val* var415 /* : Map[MProperty, APropdef] */;
val* var416 /* : MMethodDef */;
val* var417 /* : Location */;
val* var419 /* : Location */;
val* var_mwritepropdef /* var mwritepropdef: MMethodDef */;
val* var421 /* : HashMap[MPropDef, APropdef] */;
val* var423 /* : HashMap[MPropDef, APropdef] */;
val* var424 /* : nullable MDoc */;
val* var426 /* : nullable MDoc */;
var_modelbuilder = p0;
var_mclassdef = p1;
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var2 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_mclass = var;
{
{ /* Inline parser_nodes#AAttrPropdef#n_id2 (self) on <self:AAttrPropdef> */
var5 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_id2].val; /* _n_id2 on <self:AAttrPropdef> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1138);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = nit__lexer_work___Token___text(var3);
}
var_name = var6;
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:MClass> */
var10 = var_mclass->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var_mclass:MClass> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 399);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nit__model___standard__Object___interface_kind(self);
}
{
{ /* Inline kernel#Object#== (var8,var11) on <var8:MClassKind> */
var_other = var11;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:MClassKind> */
var16 = var8 == var_other;
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
var_ = var12;
if (var12){
var7 = var_;
} else {
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var19 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var17) on <var17:MClass> */
var22 = var17->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var17:MClass> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 399);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = nit__model___standard__Object___enum_kind(self);
}
{
{ /* Inline kernel#Object#== (var20,var23) on <var20:MClassKind> */
var_other = var23;
{
{ /* Inline kernel#Object#is_same_instance (var20,var_other) on <var20:MClassKind> */
var28 = var20 == var_other;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var7 = var24;
}
if (var7){
if (varonce) {
var29 = varonce;
} else {
var30 = "Error: Attempt to define attribute ";
var31 = 35;
var32 = standard___standard__NativeString___to_s_with_length(var30, var31);
var29 = var32;
varonce = var29;
}
if (varonce33) {
var34 = varonce33;
} else {
var35 = " in the interface ";
var36 = 18;
var37 = standard___standard__NativeString___to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
if (varonce38) {
var39 = varonce38;
} else {
var40 = ".";
var41 = 1;
var42 = standard___standard__NativeString___to_s_with_length(var40, var41);
var39 = var42;
varonce38 = var39;
}
var43 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var43 = array_instance Array[Object] */
var44 = 5;
var45 = NEW_standard__NativeArray(var44, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var45)->values[0] = (val*) var29;
((struct instance_standard__NativeArray*)var45)->values[1] = (val*) var_name;
((struct instance_standard__NativeArray*)var45)->values[2] = (val*) var34;
((struct instance_standard__NativeArray*)var45)->values[3] = (val*) var_mclass;
((struct instance_standard__NativeArray*)var45)->values[4] = (val*) var39;
{
((void (*)(val* self, val* p0, long p1))(var43->class->vft[COLOR_standard__array__Array__with_native]))(var43, var45, var44) /* with_native on <var43:Array[Object]>*/;
}
}
{
var46 = ((val* (*)(val* self))(var43->class->vft[COLOR_standard__string__Object__to_s]))(var43) /* to_s on <var43:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, self, var46); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:MClass> */
var49 = var_mclass->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var_mclass:MClass> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 399);
show_backtrace(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
var50 = nit__model___standard__Object___enum_kind(self);
}
{
{ /* Inline kernel#Object#== (var47,var50) on <var47:MClassKind> */
var_other = var50;
{
{ /* Inline kernel#Object#is_same_instance (var47,var_other) on <var47:MClassKind> */
var55 = var47 == var_other;
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
if (var51){
if (varonce56) {
var57 = varonce56;
} else {
var58 = "Error: Attempt to define attribute ";
var59 = 35;
var60 = standard___standard__NativeString___to_s_with_length(var58, var59);
var57 = var60;
varonce56 = var57;
}
if (varonce61) {
var62 = varonce61;
} else {
var63 = " in the enum class ";
var64 = 19;
var65 = standard___standard__NativeString___to_s_with_length(var63, var64);
var62 = var65;
varonce61 = var62;
}
if (varonce66) {
var67 = varonce66;
} else {
var68 = ".";
var69 = 1;
var70 = standard___standard__NativeString___to_s_with_length(var68, var69);
var67 = var70;
varonce66 = var67;
}
var71 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var71 = array_instance Array[Object] */
var72 = 5;
var73 = NEW_standard__NativeArray(var72, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var73)->values[0] = (val*) var57;
((struct instance_standard__NativeArray*)var73)->values[1] = (val*) var_name;
((struct instance_standard__NativeArray*)var73)->values[2] = (val*) var62;
((struct instance_standard__NativeArray*)var73)->values[3] = (val*) var_mclass;
((struct instance_standard__NativeArray*)var73)->values[4] = (val*) var67;
{
((void (*)(val* self, val* p0, long p1))(var71->class->vft[COLOR_standard__array__Array__with_native]))(var71, var73, var72) /* with_native on <var71:Array[Object]>*/;
}
}
{
var74 = ((val* (*)(val* self))(var71->class->vft[COLOR_standard__string__Object__to_s]))(var71) /* to_s on <var71:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, self, var74); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:MClass> */
var77 = var_mclass->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var_mclass:MClass> */
if (unlikely(var77 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 399);
show_backtrace(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
{
var78 = nit__model___standard__Object___extern_kind(self);
}
{
{ /* Inline kernel#Object#== (var75,var78) on <var75:MClassKind> */
var_other = var78;
{
{ /* Inline kernel#Object#is_same_instance (var75,var_other) on <var75:MClassKind> */
var83 = var75 == var_other;
var81 = var83;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
}
var79 = var81;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
if (var79){
if (varonce84) {
var85 = varonce84;
} else {
var86 = "Error: Attempt to define attribute ";
var87 = 35;
var88 = standard___standard__NativeString___to_s_with_length(var86, var87);
var85 = var88;
varonce84 = var85;
}
if (varonce89) {
var90 = varonce89;
} else {
var91 = " in the extern class ";
var92 = 21;
var93 = standard___standard__NativeString___to_s_with_length(var91, var92);
var90 = var93;
varonce89 = var90;
}
if (varonce94) {
var95 = varonce94;
} else {
var96 = ".";
var97 = 1;
var98 = standard___standard__NativeString___to_s_with_length(var96, var97);
var95 = var98;
varonce94 = var95;
}
var99 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var99 = array_instance Array[Object] */
var100 = 5;
var101 = NEW_standard__NativeArray(var100, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var101)->values[0] = (val*) var85;
((struct instance_standard__NativeArray*)var101)->values[1] = (val*) var_name;
((struct instance_standard__NativeArray*)var101)->values[2] = (val*) var90;
((struct instance_standard__NativeArray*)var101)->values[3] = (val*) var_mclass;
((struct instance_standard__NativeArray*)var101)->values[4] = (val*) var95;
{
((void (*)(val* self, val* p0, long p1))(var99->class->vft[COLOR_standard__array__Array__with_native]))(var99, var101, var100) /* with_native on <var99:Array[Object]>*/;
}
}
{
var102 = ((val* (*)(val* self))(var99->class->vft[COLOR_standard__string__Object__to_s]))(var99) /* to_s on <var99:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, self, var102); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
}
}
{
{ /* Inline parser_nodes#AAttrPropdef#n_id2 (self) on <self:AAttrPropdef> */
var105 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_id2].val; /* _n_id2 on <self:AAttrPropdef> */
if (unlikely(var105 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1138);
show_backtrace(1);
}
var103 = var105;
RET_LABEL104:(void)0;
}
}
var_nid2 = var103;
var106 = NEW_nit__MAttribute(&type_nit__MAttribute);
if (varonce107) {
var108 = varonce107;
} else {
var109 = "_";
var110 = 1;
var111 = standard___standard__NativeString___to_s_with_length(var109, var110);
var108 = var111;
varonce107 = var108;
}
{
var112 = ((val* (*)(val* self, val* p0))(var108->class->vft[COLOR_standard__string__String___43d]))(var108, var_name) /* + on <var108:String>*/;
}
{
var113 = nit__model_base___standard__Object___private_visibility(self);
}
{
((void (*)(val* self, val* p0))(var106->class->vft[COLOR_nit__model__MProperty__intro_mclassdef_61d]))(var106, var_mclassdef) /* intro_mclassdef= on <var106:MAttribute>*/;
}
{
((void (*)(val* self, val* p0))(var106->class->vft[COLOR_nit__model__MProperty__name_61d]))(var106, var112) /* name= on <var106:MAttribute>*/;
}
{
((void (*)(val* self, val* p0))(var106->class->vft[COLOR_nit__model__MProperty__visibility_61d]))(var106, var113) /* visibility= on <var106:MAttribute>*/;
}
{
((void (*)(val* self))(var106->class->vft[COLOR_standard__kernel__Object__init]))(var106) /* init on <var106:MAttribute>*/;
}
var_mprop = var106;
var114 = NEW_nit__MAttributeDef(&type_nit__MAttributeDef);
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AAttrPropdef> */
var117 = self->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <self:AAttrPropdef> */
if (unlikely(var117 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 23);
show_backtrace(1);
}
var115 = var117;
RET_LABEL116:(void)0;
}
}
{
((void (*)(val* self, val* p0))(var114->class->vft[COLOR_nit__model__MPropDef__mclassdef_61d]))(var114, var_mclassdef) /* mclassdef= on <var114:MAttributeDef>*/;
}
{
((void (*)(val* self, val* p0))(var114->class->vft[COLOR_nit__model__MPropDef__mproperty_61d]))(var114, var_mprop) /* mproperty= on <var114:MAttributeDef>*/;
}
{
((void (*)(val* self, val* p0))(var114->class->vft[COLOR_nit__model__MPropDef__location_61d]))(var114, var115) /* location= on <var114:MAttributeDef>*/;
}
{
((void (*)(val* self))(var114->class->vft[COLOR_standard__kernel__Object__init]))(var114) /* init on <var114:MAttributeDef>*/;
}
var_mpropdef = var114;
/* <var_mpropdef:MAttributeDef> isa nullable MPROPDEF */
type_struct = self->type->resolution_table->types[COLOR_nullable__nit__modelize_property__APropdef__MPROPDEF];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var_mpropdef->type->table_size) {
var118 = 0;
} else {
var118 = var_mpropdef->type->type_table[cltype] == idtype;
}
if (unlikely(!var118)) {
var_class_name = var_mpropdef == NULL ? "null" : var_mpropdef->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 903);
show_backtrace(1);
}
{
{ /* Inline modelize_property#APropdef#mpropdef= (self,var_mpropdef) on <self:AAttrPropdef> */
/* Covariant cast for argument 0 (mpropdef) <var_mpropdef:MAttributeDef> isa nullable MPROPDEF */
/* <var_mpropdef:MAttributeDef> isa nullable MPROPDEF */
type_struct123 = self->type->resolution_table->types[COLOR_nullable__nit__modelize_property__APropdef__MPROPDEF];
cltype121 = type_struct123->color;
idtype122 = type_struct123->id;
if(cltype121 >= var_mpropdef->type->table_size) {
var120 = 0;
} else {
var120 = var_mpropdef->type->type_table[cltype121] == idtype122;
}
if (unlikely(!var120)) {
var_class_name124 = var_mpropdef == NULL ? "null" : var_mpropdef->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name124);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 405);
show_backtrace(1);
}
self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val = var_mpropdef; /* _mpropdef on <self:AAttrPropdef> */
RET_LABEL119:(void)0;
}
}
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var127 = var_modelbuilder->attrs[COLOR_nit__modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var127 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 40);
show_backtrace(1);
}
var125 = var127;
RET_LABEL126:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var125, var_mpropdef, self); /* Direct call hash_collection#HashMap#[]= on <var125:HashMap[MPropDef, APropdef]>*/
}
var_readname = var_name;
{
var128 = nit___nit__ModelBuilder___try_get_mproperty_by_name(var_modelbuilder, var_nid2, var_mclassdef, var_readname);
}
/* <var128:nullable MProperty> isa nullable MMethod */
cltype130 = type_nullable__nit__MMethod.color;
idtype131 = type_nullable__nit__MMethod.id;
if(var128 == NULL) {
var129 = 1;
} else {
if(cltype130 >= var128->type->table_size) {
var129 = 0;
} else {
var129 = var128->type->type_table[cltype130] == idtype131;
}
}
if (unlikely(!var129)) {
var_class_name132 = var128 == NULL ? "null" : var128->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MMethod", var_class_name132);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 907);
show_backtrace(1);
}
var_mreadprop = var128;
var133 = NULL;
if (var_mreadprop == NULL) {
var134 = 1; /* is null */
} else {
var134 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mreadprop,var133) on <var_mreadprop:nullable MMethod> */
var_other = var133;
{
{ /* Inline kernel#Object#is_same_instance (var_mreadprop,var_other) on <var_mreadprop:nullable MMethod(MMethod)> */
var139 = var_mreadprop == var_other;
var137 = var139;
goto RET_LABEL138;
RET_LABEL138:(void)0;
}
}
var135 = var137;
goto RET_LABEL136;
RET_LABEL136:(void)0;
}
var134 = var135;
}
if (var134){
{
{ /* Inline parser_nodes#ADefinition#n_visibility (self) on <self:AAttrPropdef> */
var142 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AAttrPropdef> */
var140 = var142;
RET_LABEL141:(void)0;
}
}
{
var143 = nit__modelize_property___APropdef___new_property_visibility(self, var_modelbuilder, var_mclassdef, var140);
}
var_mvisibility = var143;
var144 = NEW_nit__MMethod(&type_nit__MMethod);
{
((void (*)(val* self, val* p0))(var144->class->vft[COLOR_nit__model__MProperty__intro_mclassdef_61d]))(var144, var_mclassdef) /* intro_mclassdef= on <var144:MMethod>*/;
}
{
((void (*)(val* self, val* p0))(var144->class->vft[COLOR_nit__model__MProperty__name_61d]))(var144, var_readname) /* name= on <var144:MMethod>*/;
}
{
((void (*)(val* self, val* p0))(var144->class->vft[COLOR_nit__model__MProperty__visibility_61d]))(var144, var_mvisibility) /* visibility= on <var144:MMethod>*/;
}
{
((void (*)(val* self))(var144->class->vft[COLOR_standard__kernel__Object__init]))(var144) /* init on <var144:MMethod>*/;
}
var_mreadprop = var144;
{
{ /* Inline parser_nodes#ADefinition#n_kwredef (self) on <self:AAttrPropdef> */
var147 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AAttrPropdef> */
var145 = var147;
RET_LABEL146:(void)0;
}
}
var148 = 0;
{
var149 = nit__modelize_property___APropdef___check_redef_keyword(self, var_modelbuilder, var_mclassdef, var145, var148, var_mreadprop);
}
var150 = !var149;
if (var150){
goto RET_LABEL;
} else {
}
{
{ /* Inline mdoc#MEntity#deprecation (var_mprop) on <var_mprop:MAttribute> */
var153 = var_mprop->attrs[COLOR_nit__mdoc__MEntity___deprecation].val; /* _deprecation on <var_mprop:MAttribute> */
var151 = var153;
RET_LABEL152:(void)0;
}
}
{
{ /* Inline mdoc#MEntity#deprecation= (var_mreadprop,var151) on <var_mreadprop:nullable MMethod(MMethod)> */
var_mreadprop->attrs[COLOR_nit__mdoc__MEntity___deprecation].val = var151; /* _deprecation on <var_mreadprop:nullable MMethod(MMethod)> */
RET_LABEL154:(void)0;
}
}
} else {
{
{ /* Inline parser_nodes#ADefinition#n_kwredef (self) on <self:AAttrPropdef> */
var157 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AAttrPropdef> */
var155 = var157;
RET_LABEL156:(void)0;
}
}
var158 = 1;
{
var159 = nit__modelize_property___APropdef___check_redef_keyword(self, var_modelbuilder, var_mclassdef, var155, var158, var_mreadprop);
}
var160 = !var159;
if (var160){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ADefinition#n_visibility (self) on <self:AAttrPropdef> */
var163 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AAttrPropdef> */
var161 = var163;
RET_LABEL162:(void)0;
}
}
{
nit__modelize_property___APropdef___check_redef_property_visibility(self, var_modelbuilder, var161, var_mreadprop); /* Direct call modelize_property#APropdef#check_redef_property_visibility on <self:AAttrPropdef>*/
}
}
{
{ /* Inline modelize_property#MClassDef#mprop2npropdef (var_mclassdef) on <var_mclassdef:MClassDef> */
var166 = var_mclassdef->attrs[COLOR_nit__modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <var_mclassdef:MClassDef> */
if (unlikely(var166 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 352);
show_backtrace(1);
}
var164 = var166;
RET_LABEL165:(void)0;
}
}
{
((void (*)(val* self, val* p0, val* p1))(var164->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var164, var_mreadprop, self) /* []= on <var164:Map[MProperty, APropdef]>*/;
}
var167 = NEW_nit__MMethodDef(&type_nit__MMethodDef);
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AAttrPropdef> */
var170 = self->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <self:AAttrPropdef> */
if (unlikely(var170 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 23);
show_backtrace(1);
}
var168 = var170;
RET_LABEL169:(void)0;
}
}
{
((void (*)(val* self, val* p0))(var167->class->vft[COLOR_nit__model__MPropDef__mclassdef_61d]))(var167, var_mclassdef) /* mclassdef= on <var167:MMethodDef>*/;
}
{
((void (*)(val* self, val* p0))(var167->class->vft[COLOR_nit__model__MPropDef__mproperty_61d]))(var167, var_mreadprop) /* mproperty= on <var167:MMethodDef>*/;
}
{
((void (*)(val* self, val* p0))(var167->class->vft[COLOR_nit__model__MPropDef__location_61d]))(var167, var168) /* location= on <var167:MMethodDef>*/;
}
{
((void (*)(val* self))(var167->class->vft[COLOR_standard__kernel__Object__init]))(var167) /* init on <var167:MMethodDef>*/;
}
var_mreadpropdef = var167;
{
{ /* Inline modelize_property#AAttrPropdef#mreadpropdef= (self,var_mreadpropdef) on <self:AAttrPropdef> */
self->attrs[COLOR_nit__modelize_property__AAttrPropdef___mreadpropdef].val = var_mreadpropdef; /* _mreadpropdef on <self:AAttrPropdef> */
RET_LABEL171:(void)0;
}
}
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var174 = var_modelbuilder->attrs[COLOR_nit__modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var174 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 40);
show_backtrace(1);
}
var172 = var174;
RET_LABEL173:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var172, var_mreadpropdef, self); /* Direct call hash_collection#HashMap#[]= on <var172:HashMap[MPropDef, APropdef]>*/
}
{
nit__modelize_property___APropdef___set_doc(self, var_mreadpropdef, var_modelbuilder); /* Direct call modelize_property#APropdef#set_doc on <self:AAttrPropdef>*/
}
{
{ /* Inline mdoc#MEntity#mdoc (var_mreadpropdef) on <var_mreadpropdef:MMethodDef> */
var177 = var_mreadpropdef->attrs[COLOR_nit__mdoc__MEntity___mdoc].val; /* _mdoc on <var_mreadpropdef:MMethodDef> */
var175 = var177;
RET_LABEL176:(void)0;
}
}
{
{ /* Inline mdoc#MEntity#mdoc= (var_mpropdef,var175) on <var_mpropdef:MAttributeDef> */
var_mpropdef->attrs[COLOR_nit__mdoc__MEntity___mdoc].val = var175; /* _mdoc on <var_mpropdef:MAttributeDef> */
RET_LABEL178:(void)0;
}
}
{
{ /* Inline parser_nodes#AAttrPropdef#n_expr (self) on <self:AAttrPropdef> */
var182 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <self:AAttrPropdef> */
var180 = var182;
RET_LABEL181:(void)0;
}
}
var183 = NULL;
if (var180 == NULL) {
var184 = 0; /* is null */
} else {
var184 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var180,var183) on <var180:nullable AExpr> */
var_other187 = var183;
{
var188 = ((short int (*)(val* self, val* p0))(var180->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var180, var_other187) /* == on <var180:nullable AExpr(AExpr)>*/;
}
var189 = !var188;
var185 = var189;
goto RET_LABEL186;
RET_LABEL186:(void)0;
}
var184 = var185;
}
var_190 = var184;
if (var184){
var179 = var_190;
} else {
{
{ /* Inline parser_nodes#AAttrPropdef#n_block (self) on <self:AAttrPropdef> */
var193 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_block].val; /* _n_block on <self:AAttrPropdef> */
var191 = var193;
RET_LABEL192:(void)0;
}
}
var194 = NULL;
if (var191 == NULL) {
var195 = 0; /* is null */
} else {
var195 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var191,var194) on <var191:nullable AExpr> */
var_other187 = var194;
{
var198 = ((short int (*)(val* self, val* p0))(var191->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var191, var_other187) /* == on <var191:nullable AExpr(AExpr)>*/;
}
var199 = !var198;
var196 = var199;
goto RET_LABEL197;
RET_LABEL197:(void)0;
}
var195 = var196;
}
var179 = var195;
}
{
{ /* Inline modelize_property#AAttrPropdef#has_value= (self,var179) on <self:AAttrPropdef> */
self->attrs[COLOR_nit__modelize_property__AAttrPropdef___has_value].s = var179; /* _has_value on <self:AAttrPropdef> */
RET_LABEL200:(void)0;
}
}
if (varonce201) {
var202 = varonce201;
} else {
var203 = "noinit";
var204 = 6;
var205 = standard___standard__NativeString___to_s_with_length(var203, var204);
var202 = var205;
varonce201 = var202;
}
{
var206 = nit__annotation___Prod___get_single_annotation(self, var202, var_modelbuilder);
}
var_atnoinit = var206;
var207 = NULL;
if (var_atnoinit == NULL) {
var208 = 0; /* is null */
} else {
var208 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atnoinit,var207) on <var_atnoinit:nullable AAnnotation> */
var_other187 = var207;
{
var211 = ((short int (*)(val* self, val* p0))(var_atnoinit->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_atnoinit, var_other187) /* == on <var_atnoinit:nullable AAnnotation(AAnnotation)>*/;
}
var212 = !var211;
var209 = var212;
goto RET_LABEL210;
RET_LABEL210:(void)0;
}
var208 = var209;
}
if (var208){
var213 = 1;
{
{ /* Inline modelize_property#AAttrPropdef#noinit= (self,var213) on <self:AAttrPropdef> */
self->attrs[COLOR_nit__modelize_property__AAttrPropdef___noinit].s = var213; /* _noinit on <self:AAttrPropdef> */
RET_LABEL214:(void)0;
}
}
{
{ /* Inline modelize_property#AAttrPropdef#has_value (self) on <self:AAttrPropdef> */
var217 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <self:AAttrPropdef> */
var215 = var217;
RET_LABEL216:(void)0;
}
}
if (var215){
if (varonce218) {
var219 = varonce218;
} else {
var220 = "Error: `noinit` attributes cannot have an initial value";
var221 = 55;
var222 = standard___standard__NativeString___to_s_with_length(var220, var221);
var219 = var222;
varonce218 = var219;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_atnoinit, var219); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
} else {
}
if (varonce223) {
var224 = varonce223;
} else {
var225 = "lazy";
var226 = 4;
var227 = standard___standard__NativeString___to_s_with_length(var225, var226);
var224 = var227;
varonce223 = var224;
}
{
var228 = nit__annotation___Prod___get_single_annotation(self, var224, var_modelbuilder);
}
var_atlazy = var228;
if (varonce229) {
var230 = varonce229;
} else {
var231 = "autoinit";
var232 = 8;
var233 = standard___standard__NativeString___to_s_with_length(var231, var232);
var230 = var233;
varonce229 = var230;
}
{
var234 = nit__annotation___Prod___get_single_annotation(self, var230, var_modelbuilder);
}
var_atautoinit = var234;
var236 = NULL;
if (var_atlazy == NULL) {
var237 = 0; /* is null */
} else {
var237 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atlazy,var236) on <var_atlazy:nullable AAnnotation> */
var_other187 = var236;
{
var240 = ((short int (*)(val* self, val* p0))(var_atlazy->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_atlazy, var_other187) /* == on <var_atlazy:nullable AAnnotation(AAnnotation)>*/;
}
var241 = !var240;
var238 = var241;
goto RET_LABEL239;
RET_LABEL239:(void)0;
}
var237 = var238;
}
var_242 = var237;
if (var237){
var235 = var_242;
} else {
var243 = NULL;
if (var_atautoinit == NULL) {
var244 = 0; /* is null */
} else {
var244 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atautoinit,var243) on <var_atautoinit:nullable AAnnotation> */
var_other187 = var243;
{
var247 = ((short int (*)(val* self, val* p0))(var_atautoinit->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_atautoinit, var_other187) /* == on <var_atautoinit:nullable AAnnotation(AAnnotation)>*/;
}
var248 = !var247;
var245 = var248;
goto RET_LABEL246;
RET_LABEL246:(void)0;
}
var244 = var245;
}
var235 = var244;
}
if (var235){
var250 = NULL;
if (var_atlazy == NULL) {
var251 = 0; /* is null */
} else {
var251 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atlazy,var250) on <var_atlazy:nullable AAnnotation> */
var_other187 = var250;
{
var254 = ((short int (*)(val* self, val* p0))(var_atlazy->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_atlazy, var_other187) /* == on <var_atlazy:nullable AAnnotation(AAnnotation)>*/;
}
var255 = !var254;
var252 = var255;
goto RET_LABEL253;
RET_LABEL253:(void)0;
}
var251 = var252;
}
var_256 = var251;
if (var251){
var257 = NULL;
if (var_atautoinit == NULL) {
var258 = 0; /* is null */
} else {
var258 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atautoinit,var257) on <var_atautoinit:nullable AAnnotation> */
var_other187 = var257;
{
var261 = ((short int (*)(val* self, val* p0))(var_atautoinit->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_atautoinit, var_other187) /* == on <var_atautoinit:nullable AAnnotation(AAnnotation)>*/;
}
var262 = !var261;
var259 = var262;
goto RET_LABEL260;
RET_LABEL260:(void)0;
}
var258 = var259;
}
var249 = var258;
} else {
var249 = var_256;
}
if (var249){
if (varonce263) {
var264 = varonce263;
} else {
var265 = "Error: lazy incompatible with autoinit";
var266 = 38;
var267 = standard___standard__NativeString___to_s_with_length(var265, var266);
var264 = var267;
varonce263 = var264;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_atlazy, var264); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property#AAttrPropdef#has_value (self) on <self:AAttrPropdef> */
var270 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <self:AAttrPropdef> */
var268 = var270;
RET_LABEL269:(void)0;
}
}
var271 = !var268;
if (var271){
var272 = NULL;
if (var_atlazy == NULL) {
var273 = 0; /* is null */
} else {
var273 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atlazy,var272) on <var_atlazy:nullable AAnnotation> */
var_other187 = var272;
{
var276 = ((short int (*)(val* self, val* p0))(var_atlazy->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_atlazy, var_other187) /* == on <var_atlazy:nullable AAnnotation(AAnnotation)>*/;
}
var277 = !var276;
var274 = var277;
goto RET_LABEL275;
RET_LABEL275:(void)0;
}
var273 = var274;
}
if (var273){
if (varonce278) {
var279 = varonce278;
} else {
var280 = "Error: a lazy attribute needs a value";
var281 = 37;
var282 = standard___standard__NativeString___to_s_with_length(var280, var281);
var279 = var282;
varonce278 = var279;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_atlazy, var279); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
var283 = NULL;
if (var_atautoinit == NULL) {
var284 = 0; /* is null */
} else {
var284 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atautoinit,var283) on <var_atautoinit:nullable AAnnotation> */
var_other187 = var283;
{
var287 = ((short int (*)(val* self, val* p0))(var_atautoinit->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_atautoinit, var_other187) /* == on <var_atautoinit:nullable AAnnotation(AAnnotation)>*/;
}
var288 = !var287;
var285 = var288;
goto RET_LABEL286;
RET_LABEL286:(void)0;
}
var284 = var285;
}
if (var284){
if (varonce289) {
var290 = varonce289;
} else {
var291 = "Error: a autoinit attribute needs a value";
var292 = 41;
var293 = standard___standard__NativeString___to_s_with_length(var291, var292);
var290 = var293;
varonce289 = var290;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_atautoinit, var290); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
}
goto RET_LABEL;
} else {
}
var294 = 1;
{
{ /* Inline modelize_property#AAttrPropdef#is_lazy= (self,var294) on <self:AAttrPropdef> */
self->attrs[COLOR_nit__modelize_property__AAttrPropdef___is_lazy].s = var294; /* _is_lazy on <self:AAttrPropdef> */
RET_LABEL295:(void)0;
}
}
var296 = NEW_nit__MAttribute(&type_nit__MAttribute);
if (varonce297) {
var298 = varonce297;
} else {
var299 = "lazy _";
var300 = 6;
var301 = standard___standard__NativeString___to_s_with_length(var299, var300);
var298 = var301;
varonce297 = var298;
}
{
var302 = ((val* (*)(val* self, val* p0))(var298->class->vft[COLOR_standard__string__String___43d]))(var298, var_name) /* + on <var298:String>*/;
}
{
var303 = nit__model_base___standard__Object___none_visibility(self);
}
{
((void (*)(val* self, val* p0))(var296->class->vft[COLOR_nit__model__MProperty__intro_mclassdef_61d]))(var296, var_mclassdef) /* intro_mclassdef= on <var296:MAttribute>*/;
}
{
((void (*)(val* self, val* p0))(var296->class->vft[COLOR_nit__model__MProperty__name_61d]))(var296, var302) /* name= on <var296:MAttribute>*/;
}
{
((void (*)(val* self, val* p0))(var296->class->vft[COLOR_nit__model__MProperty__visibility_61d]))(var296, var303) /* visibility= on <var296:MAttribute>*/;
}
{
((void (*)(val* self))(var296->class->vft[COLOR_standard__kernel__Object__init]))(var296) /* init on <var296:MAttribute>*/;
}
var_mlazyprop = var296;
var304 = NEW_nit__MAttributeDef(&type_nit__MAttributeDef);
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AAttrPropdef> */
var307 = self->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <self:AAttrPropdef> */
if (unlikely(var307 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 23);
show_backtrace(1);
}
var305 = var307;
RET_LABEL306:(void)0;
}
}
{
((void (*)(val* self, val* p0))(var304->class->vft[COLOR_nit__model__MPropDef__mclassdef_61d]))(var304, var_mclassdef) /* mclassdef= on <var304:MAttributeDef>*/;
}
{
((void (*)(val* self, val* p0))(var304->class->vft[COLOR_nit__model__MPropDef__mproperty_61d]))(var304, var_mlazyprop) /* mproperty= on <var304:MAttributeDef>*/;
}
{
((void (*)(val* self, val* p0))(var304->class->vft[COLOR_nit__model__MPropDef__location_61d]))(var304, var305) /* location= on <var304:MAttributeDef>*/;
}
{
((void (*)(val* self))(var304->class->vft[COLOR_standard__kernel__Object__init]))(var304) /* init on <var304:MAttributeDef>*/;
}
var_mlazypropdef = var304;
{
{ /* Inline modelize_property#AAttrPropdef#mlazypropdef= (self,var_mlazypropdef) on <self:AAttrPropdef> */
self->attrs[COLOR_nit__modelize_property__AAttrPropdef___mlazypropdef].val = var_mlazypropdef; /* _mlazypropdef on <self:AAttrPropdef> */
RET_LABEL308:(void)0;
}
}
} else {
}
if (varonce309) {
var310 = varonce309;
} else {
var311 = "readonly";
var312 = 8;
var313 = standard___standard__NativeString___to_s_with_length(var311, var312);
var310 = var313;
varonce309 = var310;
}
{
var314 = nit__annotation___Prod___get_single_annotation(self, var310, var_modelbuilder);
}
var_atreadonly = var314;
var315 = NULL;
if (var_atreadonly == NULL) {
var316 = 0; /* is null */
} else {
var316 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atreadonly,var315) on <var_atreadonly:nullable AAnnotation> */
var_other187 = var315;
{
var319 = ((short int (*)(val* self, val* p0))(var_atreadonly->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_atreadonly, var_other187) /* == on <var_atreadonly:nullable AAnnotation(AAnnotation)>*/;
}
var320 = !var319;
var317 = var320;
goto RET_LABEL318;
RET_LABEL318:(void)0;
}
var316 = var317;
}
if (var316){
{
{ /* Inline modelize_property#AAttrPropdef#has_value (self) on <self:AAttrPropdef> */
var323 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <self:AAttrPropdef> */
var321 = var323;
RET_LABEL322:(void)0;
}
}
var324 = !var321;
if (var324){
if (varonce325) {
var326 = varonce325;
} else {
var327 = "Error: a readonly attribute needs a value";
var328 = 41;
var329 = standard___standard__NativeString___to_s_with_length(var327, var328);
var326 = var329;
varonce325 = var326;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_atreadonly, var326); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
goto RET_LABEL;
} else {
}
if (varonce330) {
var331 = varonce330;
} else {
var332 = "=";
var333 = 1;
var334 = standard___standard__NativeString___to_s_with_length(var332, var333);
var331 = var334;
varonce330 = var331;
}
{
var335 = ((val* (*)(val* self, val* p0))(var_name->class->vft[COLOR_standard__string__String___43d]))(var_name, var331) /* + on <var_name:String>*/;
}
var_writename = var335;
if (varonce336) {
var337 = varonce336;
} else {
var338 = "writable";
var339 = 8;
var340 = standard___standard__NativeString___to_s_with_length(var338, var339);
var337 = var340;
varonce336 = var337;
}
{
var341 = nit__annotation___Prod___get_single_annotation(self, var337, var_modelbuilder);
}
var_atwritable = var341;
var342 = NULL;
if (var_atwritable == NULL) {
var343 = 0; /* is null */
} else {
var343 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atwritable,var342) on <var_atwritable:nullable AAnnotation> */
var_other187 = var342;
{
var346 = ((short int (*)(val* self, val* p0))(var_atwritable->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_atwritable, var_other187) /* == on <var_atwritable:nullable AAnnotation(AAnnotation)>*/;
}
var347 = !var346;
var344 = var347;
goto RET_LABEL345;
RET_LABEL345:(void)0;
}
var343 = var344;
}
if (var343){
{
{ /* Inline parser_nodes#AAnnotation#n_args (var_atwritable) on <var_atwritable:nullable AAnnotation(AAnnotation)> */
var350 = var_atwritable->attrs[COLOR_nit__parser_nodes__AAnnotation___n_args].val; /* _n_args on <var_atwritable:nullable AAnnotation(AAnnotation)> */
if (unlikely(var350 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2552);
show_backtrace(1);
}
var348 = var350;
RET_LABEL349:(void)0;
}
}
{
var351 = nit___nit__ANodes___standard__abstract_collection__Collection__is_empty(var348);
}
var352 = !var351;
if (var352){
{
var354 = nit__annotation___AAnnotation___arg_as_id(var_atwritable, var_modelbuilder);
}
if (var354!=NULL) {
var353 = var354;
} else {
var353 = var_writename;
}
var_writename = var353;
} else {
}
} else {
}
{
var355 = nit___nit__ModelBuilder___try_get_mproperty_by_name(var_modelbuilder, var_nid2, var_mclassdef, var_writename);
}
/* <var355:nullable MProperty> isa nullable MMethod */
cltype357 = type_nullable__nit__MMethod.color;
idtype358 = type_nullable__nit__MMethod.id;
if(var355 == NULL) {
var356 = 1;
} else {
if(cltype357 >= var355->type->table_size) {
var356 = 0;
} else {
var356 = var355->type->type_table[cltype357] == idtype358;
}
}
if (unlikely(!var356)) {
var_class_name359 = var355 == NULL ? "null" : var355->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MMethod", var_class_name359);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 973);
show_backtrace(1);
}
var_mwriteprop = var355;
var360 = NULL;
var_nwkwredef = var360;
var361 = NULL;
if (var_atwritable == NULL) {
var362 = 0; /* is null */
} else {
var362 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atwritable,var361) on <var_atwritable:nullable AAnnotation> */
var_other187 = var361;
{
var365 = ((short int (*)(val* self, val* p0))(var_atwritable->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_atwritable, var_other187) /* == on <var_atwritable:nullable AAnnotation(AAnnotation)>*/;
}
var366 = !var365;
var363 = var366;
goto RET_LABEL364;
RET_LABEL364:(void)0;
}
var362 = var363;
}
if (var362){
{
{ /* Inline parser_nodes#ADefinition#n_kwredef (var_atwritable) on <var_atwritable:nullable AAnnotation(AAnnotation)> */
var369 = var_atwritable->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <var_atwritable:nullable AAnnotation(AAnnotation)> */
var367 = var369;
RET_LABEL368:(void)0;
}
}
var_nwkwredef = var367;
} else {
}
var370 = NULL;
if (var_mwriteprop == NULL) {
var371 = 1; /* is null */
} else {
var371 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mwriteprop,var370) on <var_mwriteprop:nullable MMethod> */
var_other = var370;
{
{ /* Inline kernel#Object#is_same_instance (var_mwriteprop,var_other) on <var_mwriteprop:nullable MMethod(MMethod)> */
var376 = var_mwriteprop == var_other;
var374 = var376;
goto RET_LABEL375;
RET_LABEL375:(void)0;
}
}
var372 = var374;
goto RET_LABEL373;
RET_LABEL373:(void)0;
}
var371 = var372;
}
if (var371){
var377 = NULL;
if (var_atwritable == NULL) {
var378 = 0; /* is null */
} else {
var378 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atwritable,var377) on <var_atwritable:nullable AAnnotation> */
var_other187 = var377;
{
var381 = ((short int (*)(val* self, val* p0))(var_atwritable->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_atwritable, var_other187) /* == on <var_atwritable:nullable AAnnotation(AAnnotation)>*/;
}
var382 = !var381;
var379 = var382;
goto RET_LABEL380;
RET_LABEL380:(void)0;
}
var378 = var379;
}
if (var378){
{
{ /* Inline parser_nodes#ADefinition#n_visibility (var_atwritable) on <var_atwritable:nullable AAnnotation(AAnnotation)> */
var385 = var_atwritable->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <var_atwritable:nullable AAnnotation(AAnnotation)> */
var383 = var385;
RET_LABEL384:(void)0;
}
}
{
var386 = nit__modelize_property___APropdef___new_property_visibility(self, var_modelbuilder, var_mclassdef, var383);
}
var_mvisibility387 = var386;
} else {
{
var388 = nit__model_base___standard__Object___private_visibility(self);
}
var_mvisibility387 = var388;
}
var389 = NEW_nit__MMethod(&type_nit__MMethod);
{
((void (*)(val* self, val* p0))(var389->class->vft[COLOR_nit__model__MProperty__intro_mclassdef_61d]))(var389, var_mclassdef) /* intro_mclassdef= on <var389:MMethod>*/;
}
{
((void (*)(val* self, val* p0))(var389->class->vft[COLOR_nit__model__MProperty__name_61d]))(var389, var_writename) /* name= on <var389:MMethod>*/;
}
{
((void (*)(val* self, val* p0))(var389->class->vft[COLOR_nit__model__MProperty__visibility_61d]))(var389, var_mvisibility387) /* visibility= on <var389:MMethod>*/;
}
{
((void (*)(val* self))(var389->class->vft[COLOR_standard__kernel__Object__init]))(var389) /* init on <var389:MMethod>*/;
}
var_mwriteprop = var389;
var390 = 0;
{
var391 = nit__modelize_property___APropdef___check_redef_keyword(self, var_modelbuilder, var_mclassdef, var_nwkwredef, var390, var_mwriteprop);
}
var392 = !var391;
if (var392){
goto RET_LABEL;
} else {
}
{
{ /* Inline mdoc#MEntity#deprecation (var_mprop) on <var_mprop:MAttribute> */
var395 = var_mprop->attrs[COLOR_nit__mdoc__MEntity___deprecation].val; /* _deprecation on <var_mprop:MAttribute> */
var393 = var395;
RET_LABEL394:(void)0;
}
}
{
{ /* Inline mdoc#MEntity#deprecation= (var_mwriteprop,var393) on <var_mwriteprop:nullable MMethod(MMethod)> */
var_mwriteprop->attrs[COLOR_nit__mdoc__MEntity___deprecation].val = var393; /* _deprecation on <var_mwriteprop:nullable MMethod(MMethod)> */
RET_LABEL396:(void)0;
}
}
} else {
if (var_nwkwredef!=NULL) {
var397 = var_nwkwredef;
} else {
{
{ /* Inline parser_nodes#ADefinition#n_kwredef (self) on <self:AAttrPropdef> */
var400 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AAttrPropdef> */
var398 = var400;
RET_LABEL399:(void)0;
}
}
var397 = var398;
}
var401 = 1;
{
var402 = nit__modelize_property___APropdef___check_redef_keyword(self, var_modelbuilder, var_mclassdef, var397, var401, var_mwriteprop);
}
var403 = !var402;
if (var403){
goto RET_LABEL;
} else {
}
var404 = NULL;
if (var_atwritable == NULL) {
var405 = 0; /* is null */
} else {
var405 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atwritable,var404) on <var_atwritable:nullable AAnnotation> */
var_other187 = var404;
{
var408 = ((short int (*)(val* self, val* p0))(var_atwritable->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_atwritable, var_other187) /* == on <var_atwritable:nullable AAnnotation(AAnnotation)>*/;
}
var409 = !var408;
var406 = var409;
goto RET_LABEL407;
RET_LABEL407:(void)0;
}
var405 = var406;
}
if (var405){
{
{ /* Inline parser_nodes#ADefinition#n_visibility (var_atwritable) on <var_atwritable:nullable AAnnotation(AAnnotation)> */
var412 = var_atwritable->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <var_atwritable:nullable AAnnotation(AAnnotation)> */
var410 = var412;
RET_LABEL411:(void)0;
}
}
{
nit__modelize_property___APropdef___check_redef_property_visibility(self, var_modelbuilder, var410, var_mwriteprop); /* Direct call modelize_property#APropdef#check_redef_property_visibility on <self:AAttrPropdef>*/
}
} else {
}
}
{
{ /* Inline modelize_property#MClassDef#mprop2npropdef (var_mclassdef) on <var_mclassdef:MClassDef> */
var415 = var_mclassdef->attrs[COLOR_nit__modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <var_mclassdef:MClassDef> */
if (unlikely(var415 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 352);
show_backtrace(1);
}
var413 = var415;
RET_LABEL414:(void)0;
}
}
{
((void (*)(val* self, val* p0, val* p1))(var413->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var413, var_mwriteprop, self) /* []= on <var413:Map[MProperty, APropdef]>*/;
}
var416 = NEW_nit__MMethodDef(&type_nit__MMethodDef);
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AAttrPropdef> */
var419 = self->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <self:AAttrPropdef> */
if (unlikely(var419 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 23);
show_backtrace(1);
}
var417 = var419;
RET_LABEL418:(void)0;
}
}
{
((void (*)(val* self, val* p0))(var416->class->vft[COLOR_nit__model__MPropDef__mclassdef_61d]))(var416, var_mclassdef) /* mclassdef= on <var416:MMethodDef>*/;
}
{
((void (*)(val* self, val* p0))(var416->class->vft[COLOR_nit__model__MPropDef__mproperty_61d]))(var416, var_mwriteprop) /* mproperty= on <var416:MMethodDef>*/;
}
{
((void (*)(val* self, val* p0))(var416->class->vft[COLOR_nit__model__MPropDef__location_61d]))(var416, var417) /* location= on <var416:MMethodDef>*/;
}
{
((void (*)(val* self))(var416->class->vft[COLOR_standard__kernel__Object__init]))(var416) /* init on <var416:MMethodDef>*/;
}
var_mwritepropdef = var416;
{
{ /* Inline modelize_property#AAttrPropdef#mwritepropdef= (self,var_mwritepropdef) on <self:AAttrPropdef> */
self->attrs[COLOR_nit__modelize_property__AAttrPropdef___mwritepropdef].val = var_mwritepropdef; /* _mwritepropdef on <self:AAttrPropdef> */
RET_LABEL420:(void)0;
}
}
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var423 = var_modelbuilder->attrs[COLOR_nit__modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var423 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 40);
show_backtrace(1);
}
var421 = var423;
RET_LABEL422:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var421, var_mwritepropdef, self); /* Direct call hash_collection#HashMap#[]= on <var421:HashMap[MPropDef, APropdef]>*/
}
{
{ /* Inline mdoc#MEntity#mdoc (var_mpropdef) on <var_mpropdef:MAttributeDef> */
var426 = var_mpropdef->attrs[COLOR_nit__mdoc__MEntity___mdoc].val; /* _mdoc on <var_mpropdef:MAttributeDef> */
var424 = var426;
RET_LABEL425:(void)0;
}
}
{
{ /* Inline mdoc#MEntity#mdoc= (var_mwritepropdef,var424) on <var_mwritepropdef:MMethodDef> */
var_mwritepropdef->attrs[COLOR_nit__mdoc__MEntity___mdoc].val = var424; /* _mdoc on <var_mwritepropdef:MMethodDef> */
RET_LABEL427:(void)0;
}
}
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#build_signature for (self: AAttrPropdef, ModelBuilder) */
void nit__modelize_property___AAttrPropdef___APropdef__build_signature(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var /* : nullable MPropDef */;
val* var2 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MAttributeDef */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : MClassDef */;
val* var12 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var13 /* : MModule */;
val* var15 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var16 /* : null */;
val* var_mtype /* var mtype: nullable MType */;
val* var17 /* : nullable MMethodDef */;
val* var19 /* : nullable MMethodDef */;
val* var_mreadpropdef /* var mreadpropdef: nullable MMethodDef */;
val* var20 /* : nullable AType */;
val* var22 /* : nullable AType */;
val* var_ntype /* var ntype: nullable AType */;
val* var23 /* : null */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var_other27 /* var other: nullable Object */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : nullable MType */;
val* var31 /* : null */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
val* var38 /* : null */;
val* var_inherited_type /* var inherited_type: nullable MType */;
short int var39 /* : Bool */;
val* var40 /* : null */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
short int var_ /* var : Bool */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
val* var48 /* : MProperty */;
val* var50 /* : MProperty */;
val* var51 /* : MPropDef */;
val* var53 /* : MPropDef */;
val* var54 /* : nullable MSignature */;
val* var56 /* : nullable MSignature */;
val* var_msignature /* var msignature: nullable MSignature */;
val* var57 /* : null */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
short int var61 /* : Bool */;
short int var63 /* : Bool */;
val* var64 /* : nullable MType */;
val* var66 /* : nullable MType */;
val* var67 /* : null */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
short int var71 /* : Bool */;
short int var72 /* : Bool */;
val* var73 /* : MClass */;
val* var75 /* : MClass */;
val* var76 /* : MClassType */;
val* var78 /* : MClassType */;
val* var79 /* : MClassType */;
val* var81 /* : MClassType */;
short int var82 /* : Bool */;
val* var83 /* : MType */;
val* var84 /* : null */;
short int var85 /* : Bool */;
short int var86 /* : Bool */;
short int var88 /* : Bool */;
short int var90 /* : Bool */;
val* var91 /* : nullable AExpr */;
val* var93 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
val* var94 /* : null */;
short int var95 /* : Bool */;
short int var96 /* : Bool */;
short int var98 /* : Bool */;
short int var100 /* : Bool */;
val* var101 /* : null */;
short int var102 /* : Bool */;
short int var103 /* : Bool */;
short int var105 /* : Bool */;
short int var106 /* : Bool */;
short int var107 /* : Bool */;
int cltype;
int idtype;
val* var108 /* : AType */;
val* var110 /* : AType */;
val* var111 /* : nullable MType */;
short int var112 /* : Bool */;
int cltype113;
int idtype114;
static val* varonce;
val* var115 /* : String */;
char* var116 /* : NativeString */;
long var117 /* : Int */;
val* var118 /* : FlatString */;
val* var119 /* : nullable MClass */;
val* var_cla /* var cla: nullable MClass */;
val* var120 /* : null */;
short int var121 /* : Bool */;
short int var122 /* : Bool */;
short int var124 /* : Bool */;
short int var125 /* : Bool */;
val* var126 /* : MClassType */;
val* var128 /* : MClassType */;
short int var129 /* : Bool */;
int cltype130;
int idtype131;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : NativeString */;
long var135 /* : Int */;
val* var136 /* : FlatString */;
val* var137 /* : nullable MClass */;
val* var_cla138 /* var cla: nullable MClass */;
val* var139 /* : null */;
short int var140 /* : Bool */;
short int var141 /* : Bool */;
short int var143 /* : Bool */;
short int var144 /* : Bool */;
val* var145 /* : MClassType */;
val* var147 /* : MClassType */;
short int var148 /* : Bool */;
int cltype149;
int idtype150;
static val* varonce151;
val* var152 /* : String */;
char* var153 /* : NativeString */;
long var154 /* : Int */;
val* var155 /* : FlatString */;
val* var156 /* : nullable MClass */;
val* var_cla157 /* var cla: nullable MClass */;
val* var158 /* : null */;
short int var159 /* : Bool */;
short int var160 /* : Bool */;
short int var162 /* : Bool */;
short int var163 /* : Bool */;
val* var164 /* : MClassType */;
val* var166 /* : MClassType */;
short int var167 /* : Bool */;
int cltype168;
int idtype169;
static val* varonce170;
val* var171 /* : String */;
char* var172 /* : NativeString */;
long var173 /* : Int */;
val* var174 /* : FlatString */;
val* var175 /* : nullable MClass */;
val* var_cla176 /* var cla: nullable MClass */;
val* var177 /* : null */;
short int var178 /* : Bool */;
short int var179 /* : Bool */;
short int var181 /* : Bool */;
short int var182 /* : Bool */;
val* var183 /* : MClassType */;
val* var185 /* : MClassType */;
short int var186 /* : Bool */;
int cltype187;
int idtype188;
static val* varonce189;
val* var190 /* : String */;
char* var191 /* : NativeString */;
long var192 /* : Int */;
val* var193 /* : FlatString */;
val* var194 /* : nullable MClass */;
val* var_cla195 /* var cla: nullable MClass */;
val* var196 /* : null */;
short int var197 /* : Bool */;
short int var198 /* : Bool */;
short int var200 /* : Bool */;
short int var201 /* : Bool */;
val* var202 /* : MClassType */;
val* var204 /* : MClassType */;
short int var205 /* : Bool */;
int cltype206;
int idtype207;
static val* varonce208;
val* var209 /* : String */;
char* var210 /* : NativeString */;
long var211 /* : Int */;
val* var212 /* : FlatString */;
val* var213 /* : nullable MClass */;
val* var_cla214 /* var cla: nullable MClass */;
val* var215 /* : null */;
short int var216 /* : Bool */;
short int var217 /* : Bool */;
short int var219 /* : Bool */;
short int var220 /* : Bool */;
val* var221 /* : MClassType */;
val* var223 /* : MClassType */;
static val* varonce224;
val* var225 /* : String */;
char* var226 /* : NativeString */;
long var227 /* : Int */;
val* var228 /* : FlatString */;
static val* varonce229;
val* var230 /* : String */;
char* var231 /* : NativeString */;
long var232 /* : Int */;
val* var233 /* : FlatString */;
val* var234 /* : Array[Object] */;
long var235 /* : Int */;
val* var236 /* : NativeArray[Object] */;
val* var237 /* : String */;
val* var238 /* : null */;
short int var239 /* : Bool */;
short int var240 /* : Bool */;
short int var242 /* : Bool */;
short int var244 /* : Bool */;
short int var245 /* : Bool */;
val* var246 /* : null */;
short int var247 /* : Bool */;
short int var248 /* : Bool */;
short int var250 /* : Bool */;
short int var251 /* : Bool */;
short int var_252 /* var : Bool */;
short int var253 /* : Bool */;
short int var254 /* : Bool */;
short int var256 /* : Bool */;
short int var258 /* : Bool */;
short int var259 /* : Bool */;
int cltype260;
int idtype261;
val* var262 /* : AType */;
val* var264 /* : AType */;
val* var265 /* : nullable MType */;
val* var_xmtype /* var xmtype: nullable MType */;
short int var266 /* : Bool */;
short int var267 /* : Bool */;
short int var269 /* : Bool */;
short int var271 /* : Bool */;
static val* varonce272;
val* var273 /* : String */;
char* var274 /* : NativeString */;
long var275 /* : Int */;
val* var276 /* : FlatString */;
static val* varonce277;
val* var278 /* : String */;
char* var279 /* : NativeString */;
long var280 /* : Int */;
val* var281 /* : FlatString */;
val* var282 /* : null */;
short int var283 /* : Bool */;
short int var284 /* : Bool */;
short int var286 /* : Bool */;
short int var288 /* : Bool */;
static val* varonce289;
val* var290 /* : String */;
char* var291 /* : NativeString */;
long var292 /* : Int */;
val* var293 /* : FlatString */;
val* var294 /* : Array[Object] */;
long var295 /* : Int */;
val* var296 /* : NativeArray[Object] */;
val* var297 /* : String */;
val* var299 /* : null */;
short int var300 /* : Bool */;
short int var301 /* : Bool */;
short int var303 /* : Bool */;
short int var304 /* : Bool */;
val* var305 /* : MSignature */;
val* var306 /* : Array[MParameter] */;
val* var_msignature307 /* var msignature: MSignature */;
val* var309 /* : nullable MMethodDef */;
val* var311 /* : nullable MMethodDef */;
val* var_mwritepropdef /* var mwritepropdef: nullable MMethodDef */;
val* var312 /* : null */;
short int var313 /* : Bool */;
short int var314 /* : Bool */;
short int var316 /* : Bool */;
short int var317 /* : Bool */;
val* var318 /* : TId */;
val* var320 /* : TId */;
val* var321 /* : String */;
val* var_name /* var name: String */;
val* var322 /* : MParameter */;
short int var323 /* : Bool */;
val* var_mparameter /* var mparameter: MParameter */;
val* var324 /* : MSignature */;
val* var325 /* : Array[MParameter] */;
long var326 /* : Int */;
val* var_327 /* var : Array[MParameter] */;
val* var328 /* : null */;
val* var_msignature329 /* var msignature: MSignature */;
val* var331 /* : nullable MAttributeDef */;
val* var333 /* : nullable MAttributeDef */;
val* var_mlazypropdef /* var mlazypropdef: nullable MAttributeDef */;
val* var334 /* : null */;
short int var335 /* : Bool */;
short int var336 /* : Bool */;
short int var338 /* : Bool */;
short int var339 /* : Bool */;
val* var340 /* : Model */;
val* var342 /* : Model */;
static val* varonce343;
val* var344 /* : String */;
char* var345 /* : NativeString */;
long var346 /* : Int */;
val* var347 /* : FlatString */;
val* var348 /* : nullable Array[MClass] */;
val* var349 /* : nullable Object */;
val* var350 /* : MClassType */;
val* var352 /* : MClassType */;
var_modelbuilder = p0;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var2 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mpropdef = var;
var3 = NULL;
if (var_mpropdef == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mpropdef,var3) on <var_mpropdef:nullable MAttributeDef> */
var_other = var3;
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other) on <var_mpropdef:nullable MAttributeDef(MAttributeDef)> */
var9 = var_mpropdef == var_other;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:nullable MAttributeDef(MAttributeDef)> */
var12 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MAttributeDef(MAttributeDef)> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_mclassdef = var10;
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var15 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_mmodule = var13;
var16 = NULL;
var_mtype = var16;
{
{ /* Inline modelize_property#AAttrPropdef#mreadpropdef (self) on <self:AAttrPropdef> */
var19 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___mreadpropdef].val; /* _mreadpropdef on <self:AAttrPropdef> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_mreadpropdef = var17;
{
{ /* Inline parser_nodes#AAttrPropdef#n_type (self) on <self:AAttrPropdef> */
var22 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_type].val; /* _n_type on <self:AAttrPropdef> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
var_ntype = var20;
var23 = NULL;
if (var_ntype == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ntype,var23) on <var_ntype:nullable AType> */
var_other27 = var23;
{
var28 = ((short int (*)(val* self, val* p0))(var_ntype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ntype, var_other27) /* == on <var_ntype:nullable AType(AType)>*/;
}
var29 = !var28;
var25 = var29;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var24 = var25;
}
if (var24){
{
var30 = nit__modelize_class___ModelBuilder___resolve_mtype(var_modelbuilder, var_mmodule, var_mclassdef, var_ntype);
}
var_mtype = var30;
var31 = NULL;
if (var_mtype == NULL) {
var32 = 1; /* is null */
} else {
var32 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var31) on <var_mtype:nullable MType> */
var_other = var31;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var37 = var_mtype == var_other;
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
var32 = var33;
}
if (var32){
goto RET_LABEL;
} else {
}
} else {
}
var38 = NULL;
var_inherited_type = var38;
var40 = NULL;
if (var_mreadpropdef == NULL) {
var41 = 0; /* is null */
} else {
var41 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mreadpropdef,var40) on <var_mreadpropdef:nullable MMethodDef> */
var_other27 = var40;
{
var44 = ((short int (*)(val* self, val* p0))(var_mreadpropdef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mreadpropdef, var_other27) /* == on <var_mreadpropdef:nullable MMethodDef(MMethodDef)>*/;
}
var45 = !var44;
var42 = var45;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
var41 = var42;
}
var_ = var41;
if (var41){
{
var46 = nit___nit__MPropDef___is_intro(var_mreadpropdef);
}
var47 = !var46;
var39 = var47;
} else {
var39 = var_;
}
if (var39){
{
{ /* Inline model#MPropDef#mproperty (var_mreadpropdef) on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var50 = var_mreadpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var48) on <var48:MProperty(MMethod)> */
var53 = var48->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var48:MProperty(MMethod)> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1773);
show_backtrace(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var51) on <var51:MPropDef(MMethodDef)> */
var56 = var51->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var51:MPropDef(MMethodDef)> */
var54 = var56;
RET_LABEL55:(void)0;
}
}
var_msignature = var54;
var57 = NULL;
if (var_msignature == NULL) {
var58 = 1; /* is null */
} else {
var58 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_msignature,var57) on <var_msignature:nullable MSignature> */
var_other = var57;
{
{ /* Inline kernel#Object#is_same_instance (var_msignature,var_other) on <var_msignature:nullable MSignature(MSignature)> */
var63 = var_msignature == var_other;
var61 = var63;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
var59 = var61;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
var58 = var59;
}
if (var58){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var66 = var_msignature->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:nullable MSignature(MSignature)> */
var64 = var66;
RET_LABEL65:(void)0;
}
}
var_inherited_type = var64;
var67 = NULL;
if (var_inherited_type == NULL) {
var68 = 0; /* is null */
} else {
var68 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_inherited_type,var67) on <var_inherited_type:nullable MType> */
var_other27 = var67;
{
var71 = ((short int (*)(val* self, val* p0))(var_inherited_type->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_inherited_type, var_other27) /* == on <var_inherited_type:nullable MType(MType)>*/;
}
var72 = !var71;
var69 = var72;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
var68 = var69;
}
if (var68){
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var75 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var73) on <var73:MClass> */
var78 = var73->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var73:MClass> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var81 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
var82 = 0;
{
var83 = ((val* (*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_inherited_type->class->vft[COLOR_nit__model__MType__resolve_for]))(var_inherited_type, var76, var79, var_mmodule, var82) /* resolve_for on <var_inherited_type:nullable MType(MType)>*/;
}
var_inherited_type = var83;
var84 = NULL;
if (var_mtype == NULL) {
var85 = 1; /* is null */
} else {
var85 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var84) on <var_mtype:nullable MType> */
var_other = var84;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var90 = var_mtype == var_other;
var88 = var90;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
}
var86 = var88;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
var85 = var86;
}
if (var85){
var_mtype = var_inherited_type;
} else {
}
} else {
}
} else {
}
{
{ /* Inline parser_nodes#AAttrPropdef#n_expr (self) on <self:AAttrPropdef> */
var93 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <self:AAttrPropdef> */
var91 = var93;
RET_LABEL92:(void)0;
}
}
var_nexpr = var91;
var94 = NULL;
if (var_mtype == NULL) {
var95 = 1; /* is null */
} else {
var95 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var94) on <var_mtype:nullable MType> */
var_other = var94;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var100 = var_mtype == var_other;
var98 = var100;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
}
var96 = var98;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
var95 = var96;
}
if (var95){
var101 = NULL;
if (var_nexpr == NULL) {
var102 = 0; /* is null */
} else {
var102 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nexpr,var101) on <var_nexpr:nullable AExpr> */
var_other27 = var101;
{
var105 = ((short int (*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nexpr, var_other27) /* == on <var_nexpr:nullable AExpr(AExpr)>*/;
}
var106 = !var105;
var103 = var106;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
var102 = var103;
}
if (var102){
/* <var_nexpr:nullable AExpr(AExpr)> isa ANewExpr */
cltype = type_nit__ANewExpr.color;
idtype = type_nit__ANewExpr.id;
if(cltype >= var_nexpr->type->table_size) {
var107 = 0;
} else {
var107 = var_nexpr->type->type_table[cltype] == idtype;
}
if (var107){
{
{ /* Inline parser_nodes#ANewExpr#n_type (var_nexpr) on <var_nexpr:nullable AExpr(ANewExpr)> */
var110 = var_nexpr->attrs[COLOR_nit__parser_nodes__ANewExpr___n_type].val; /* _n_type on <var_nexpr:nullable AExpr(ANewExpr)> */
if (unlikely(var110 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1962);
show_backtrace(1);
}
var108 = var110;
RET_LABEL109:(void)0;
}
}
{
var111 = nit__modelize_class___ModelBuilder___resolve_mtype(var_modelbuilder, var_mmodule, var_mclassdef, var108);
}
var_mtype = var111;
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa AIntExpr */
cltype113 = type_nit__AIntExpr.color;
idtype114 = type_nit__AIntExpr.id;
if(cltype113 >= var_nexpr->type->table_size) {
var112 = 0;
} else {
var112 = var_nexpr->type->type_table[cltype113] == idtype114;
}
if (var112){
if (varonce) {
var115 = varonce;
} else {
var116 = "Int";
var117 = 3;
var118 = standard___standard__NativeString___to_s_with_length(var116, var117);
var115 = var118;
varonce = var115;
}
{
var119 = nit___nit__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var115);
}
var_cla = var119;
var120 = NULL;
if (var_cla == NULL) {
var121 = 0; /* is null */
} else {
var121 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_cla,var120) on <var_cla:nullable MClass> */
var_other27 = var120;
{
var124 = ((short int (*)(val* self, val* p0))(var_cla->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cla, var_other27) /* == on <var_cla:nullable MClass(MClass)>*/;
}
var125 = !var124;
var122 = var125;
goto RET_LABEL123;
RET_LABEL123:(void)0;
}
var121 = var122;
}
if (var121){
{
{ /* Inline model#MClass#mclass_type (var_cla) on <var_cla:nullable MClass(MClass)> */
var128 = var_cla->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var_cla:nullable MClass(MClass)> */
if (unlikely(var128 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var126 = var128;
RET_LABEL127:(void)0;
}
}
var_mtype = var126;
} else {
}
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa AFloatExpr */
cltype130 = type_nit__AFloatExpr.color;
idtype131 = type_nit__AFloatExpr.id;
if(cltype130 >= var_nexpr->type->table_size) {
var129 = 0;
} else {
var129 = var_nexpr->type->type_table[cltype130] == idtype131;
}
if (var129){
if (varonce132) {
var133 = varonce132;
} else {
var134 = "Float";
var135 = 5;
var136 = standard___standard__NativeString___to_s_with_length(var134, var135);
var133 = var136;
varonce132 = var133;
}
{
var137 = nit___nit__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var133);
}
var_cla138 = var137;
var139 = NULL;
if (var_cla138 == NULL) {
var140 = 0; /* is null */
} else {
var140 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_cla138,var139) on <var_cla138:nullable MClass> */
var_other27 = var139;
{
var143 = ((short int (*)(val* self, val* p0))(var_cla138->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cla138, var_other27) /* == on <var_cla138:nullable MClass(MClass)>*/;
}
var144 = !var143;
var141 = var144;
goto RET_LABEL142;
RET_LABEL142:(void)0;
}
var140 = var141;
}
if (var140){
{
{ /* Inline model#MClass#mclass_type (var_cla138) on <var_cla138:nullable MClass(MClass)> */
var147 = var_cla138->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var_cla138:nullable MClass(MClass)> */
if (unlikely(var147 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var145 = var147;
RET_LABEL146:(void)0;
}
}
var_mtype = var145;
} else {
}
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa ACharExpr */
cltype149 = type_nit__ACharExpr.color;
idtype150 = type_nit__ACharExpr.id;
if(cltype149 >= var_nexpr->type->table_size) {
var148 = 0;
} else {
var148 = var_nexpr->type->type_table[cltype149] == idtype150;
}
if (var148){
if (varonce151) {
var152 = varonce151;
} else {
var153 = "Char";
var154 = 4;
var155 = standard___standard__NativeString___to_s_with_length(var153, var154);
var152 = var155;
varonce151 = var152;
}
{
var156 = nit___nit__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var152);
}
var_cla157 = var156;
var158 = NULL;
if (var_cla157 == NULL) {
var159 = 0; /* is null */
} else {
var159 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_cla157,var158) on <var_cla157:nullable MClass> */
var_other27 = var158;
{
var162 = ((short int (*)(val* self, val* p0))(var_cla157->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cla157, var_other27) /* == on <var_cla157:nullable MClass(MClass)>*/;
}
var163 = !var162;
var160 = var163;
goto RET_LABEL161;
RET_LABEL161:(void)0;
}
var159 = var160;
}
if (var159){
{
{ /* Inline model#MClass#mclass_type (var_cla157) on <var_cla157:nullable MClass(MClass)> */
var166 = var_cla157->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var_cla157:nullable MClass(MClass)> */
if (unlikely(var166 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var164 = var166;
RET_LABEL165:(void)0;
}
}
var_mtype = var164;
} else {
}
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa ABoolExpr */
cltype168 = type_nit__ABoolExpr.color;
idtype169 = type_nit__ABoolExpr.id;
if(cltype168 >= var_nexpr->type->table_size) {
var167 = 0;
} else {
var167 = var_nexpr->type->type_table[cltype168] == idtype169;
}
if (var167){
if (varonce170) {
var171 = varonce170;
} else {
var172 = "Bool";
var173 = 4;
var174 = standard___standard__NativeString___to_s_with_length(var172, var173);
var171 = var174;
varonce170 = var171;
}
{
var175 = nit___nit__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var171);
}
var_cla176 = var175;
var177 = NULL;
if (var_cla176 == NULL) {
var178 = 0; /* is null */
} else {
var178 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_cla176,var177) on <var_cla176:nullable MClass> */
var_other27 = var177;
{
var181 = ((short int (*)(val* self, val* p0))(var_cla176->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cla176, var_other27) /* == on <var_cla176:nullable MClass(MClass)>*/;
}
var182 = !var181;
var179 = var182;
goto RET_LABEL180;
RET_LABEL180:(void)0;
}
var178 = var179;
}
if (var178){
{
{ /* Inline model#MClass#mclass_type (var_cla176) on <var_cla176:nullable MClass(MClass)> */
var185 = var_cla176->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var_cla176:nullable MClass(MClass)> */
if (unlikely(var185 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var183 = var185;
RET_LABEL184:(void)0;
}
}
var_mtype = var183;
} else {
}
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa ASuperstringExpr */
cltype187 = type_nit__ASuperstringExpr.color;
idtype188 = type_nit__ASuperstringExpr.id;
if(cltype187 >= var_nexpr->type->table_size) {
var186 = 0;
} else {
var186 = var_nexpr->type->type_table[cltype187] == idtype188;
}
if (var186){
if (varonce189) {
var190 = varonce189;
} else {
var191 = "String";
var192 = 6;
var193 = standard___standard__NativeString___to_s_with_length(var191, var192);
var190 = var193;
varonce189 = var190;
}
{
var194 = nit___nit__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var190);
}
var_cla195 = var194;
var196 = NULL;
if (var_cla195 == NULL) {
var197 = 0; /* is null */
} else {
var197 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_cla195,var196) on <var_cla195:nullable MClass> */
var_other27 = var196;
{
var200 = ((short int (*)(val* self, val* p0))(var_cla195->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cla195, var_other27) /* == on <var_cla195:nullable MClass(MClass)>*/;
}
var201 = !var200;
var198 = var201;
goto RET_LABEL199;
RET_LABEL199:(void)0;
}
var197 = var198;
}
if (var197){
{
{ /* Inline model#MClass#mclass_type (var_cla195) on <var_cla195:nullable MClass(MClass)> */
var204 = var_cla195->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var_cla195:nullable MClass(MClass)> */
if (unlikely(var204 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var202 = var204;
RET_LABEL203:(void)0;
}
}
var_mtype = var202;
} else {
}
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa AStringFormExpr */
cltype206 = type_nit__AStringFormExpr.color;
idtype207 = type_nit__AStringFormExpr.id;
if(cltype206 >= var_nexpr->type->table_size) {
var205 = 0;
} else {
var205 = var_nexpr->type->type_table[cltype206] == idtype207;
}
if (var205){
if (varonce208) {
var209 = varonce208;
} else {
var210 = "String";
var211 = 6;
var212 = standard___standard__NativeString___to_s_with_length(var210, var211);
var209 = var212;
varonce208 = var209;
}
{
var213 = nit___nit__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var209);
}
var_cla214 = var213;
var215 = NULL;
if (var_cla214 == NULL) {
var216 = 0; /* is null */
} else {
var216 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_cla214,var215) on <var_cla214:nullable MClass> */
var_other27 = var215;
{
var219 = ((short int (*)(val* self, val* p0))(var_cla214->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cla214, var_other27) /* == on <var_cla214:nullable MClass(MClass)>*/;
}
var220 = !var219;
var217 = var220;
goto RET_LABEL218;
RET_LABEL218:(void)0;
}
var216 = var217;
}
if (var216){
{
{ /* Inline model#MClass#mclass_type (var_cla214) on <var_cla214:nullable MClass(MClass)> */
var223 = var_cla214->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var_cla214:nullable MClass(MClass)> */
if (unlikely(var223 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var221 = var223;
RET_LABEL222:(void)0;
}
}
var_mtype = var221;
} else {
}
} else {
if (varonce224) {
var225 = varonce224;
} else {
var226 = "Error: Untyped attribute ";
var227 = 25;
var228 = standard___standard__NativeString___to_s_with_length(var226, var227);
var225 = var228;
varonce224 = var225;
}
if (varonce229) {
var230 = varonce229;
} else {
var231 = ". Implicit typing allowed only for literals and new.";
var232 = 52;
var233 = standard___standard__NativeString___to_s_with_length(var231, var232);
var230 = var233;
varonce229 = var230;
}
var234 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var234 = array_instance Array[Object] */
var235 = 3;
var236 = NEW_standard__NativeArray(var235, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var236)->values[0] = (val*) var225;
((struct instance_standard__NativeArray*)var236)->values[1] = (val*) var_mpropdef;
((struct instance_standard__NativeArray*)var236)->values[2] = (val*) var230;
{
((void (*)(val* self, val* p0, long p1))(var234->class->vft[COLOR_standard__array__Array__with_native]))(var234, var236, var235) /* with_native on <var234:Array[Object]>*/;
}
}
{
var237 = ((val* (*)(val* self))(var234->class->vft[COLOR_standard__string__Object__to_s]))(var234) /* to_s on <var234:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, self, var237); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
}
}
}
}
}
}
}
var238 = NULL;
if (var_mtype == NULL) {
var239 = 1; /* is null */
} else {
var239 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var238) on <var_mtype:nullable MType> */
var_other = var238;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var244 = var_mtype == var_other;
var242 = var244;
goto RET_LABEL243;
RET_LABEL243:(void)0;
}
}
var240 = var242;
goto RET_LABEL241;
RET_LABEL241:(void)0;
}
var239 = var240;
}
if (var239){
goto RET_LABEL;
} else {
}
} else {
}
} else {
var246 = NULL;
if (var_ntype == NULL) {
var247 = 0; /* is null */
} else {
var247 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ntype,var246) on <var_ntype:nullable AType> */
var_other27 = var246;
{
var250 = ((short int (*)(val* self, val* p0))(var_ntype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ntype, var_other27) /* == on <var_ntype:nullable AType(AType)>*/;
}
var251 = !var250;
var248 = var251;
goto RET_LABEL249;
RET_LABEL249:(void)0;
}
var247 = var248;
}
var_252 = var247;
if (var247){
if (var_inherited_type == NULL) {
var253 = 0; /* <var_mtype:nullable MType(MType)> cannot be null */
} else {
{ /* Inline kernel#Object#== (var_inherited_type,var_mtype) on <var_inherited_type:nullable MType> */
var_other = var_mtype;
{
{ /* Inline kernel#Object#is_same_instance (var_inherited_type,var_other) on <var_inherited_type:nullable MType(MType)> */
var258 = var_inherited_type == var_other;
var256 = var258;
goto RET_LABEL257;
RET_LABEL257:(void)0;
}
}
var254 = var256;
goto RET_LABEL255;
RET_LABEL255:(void)0;
}
var253 = var254;
}
var245 = var253;
} else {
var245 = var_252;
}
if (var245){
/* <var_nexpr:nullable AExpr> isa ANewExpr */
cltype260 = type_nit__ANewExpr.color;
idtype261 = type_nit__ANewExpr.id;
if(var_nexpr == NULL) {
var259 = 0;
} else {
if(cltype260 >= var_nexpr->type->table_size) {
var259 = 0;
} else {
var259 = var_nexpr->type->type_table[cltype260] == idtype261;
}
}
if (var259){
{
{ /* Inline parser_nodes#ANewExpr#n_type (var_nexpr) on <var_nexpr:nullable AExpr(ANewExpr)> */
var264 = var_nexpr->attrs[COLOR_nit__parser_nodes__ANewExpr___n_type].val; /* _n_type on <var_nexpr:nullable AExpr(ANewExpr)> */
if (unlikely(var264 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1962);
show_backtrace(1);
}
var262 = var264;
RET_LABEL263:(void)0;
}
}
{
var265 = nit__modelize_class___ModelBuilder___resolve_mtype(var_modelbuilder, var_mmodule, var_mclassdef, var262);
}
var_xmtype = var265;
if (var_xmtype == NULL) {
var266 = 0; /* <var_mtype:nullable MType(MType)> cannot be null */
} else {
{ /* Inline kernel#Object#== (var_xmtype,var_mtype) on <var_xmtype:nullable MType> */
var_other = var_mtype;
{
{ /* Inline kernel#Object#is_same_instance (var_xmtype,var_other) on <var_xmtype:nullable MType(MType)> */
var271 = var_xmtype == var_other;
var269 = var271;
goto RET_LABEL270;
RET_LABEL270:(void)0;
}
}
var267 = var269;
goto RET_LABEL268;
RET_LABEL268:(void)0;
}
var266 = var267;
}
if (var266){
if (varonce272) {
var273 = varonce272;
} else {
var274 = "useless-type";
var275 = 12;
var276 = standard___standard__NativeString___to_s_with_length(var274, var275);
var273 = var276;
varonce272 = var273;
}
if (varonce277) {
var278 = varonce277;
} else {
var279 = "Warning: useless type definition";
var280 = 32;
var281 = standard___standard__NativeString___to_s_with_length(var279, var280);
var278 = var281;
varonce277 = var278;
}
{
nit___nit__ModelBuilder___advice(var_modelbuilder, var_ntype, var273, var278); /* Direct call modelbuilder_base#ModelBuilder#advice on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
} else {
}
} else {
}
}
var282 = NULL;
if (var_mtype == NULL) {
var283 = 1; /* is null */
} else {
var283 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var282) on <var_mtype:nullable MType> */
var_other = var282;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var288 = var_mtype == var_other;
var286 = var288;
goto RET_LABEL287;
RET_LABEL287:(void)0;
}
}
var284 = var286;
goto RET_LABEL285;
RET_LABEL285:(void)0;
}
var283 = var284;
}
if (var283){
if (varonce289) {
var290 = varonce289;
} else {
var291 = "Error: Untyped attribute ";
var292 = 25;
var293 = standard___standard__NativeString___to_s_with_length(var291, var292);
var290 = var293;
varonce289 = var290;
}
var294 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var294 = array_instance Array[Object] */
var295 = 2;
var296 = NEW_standard__NativeArray(var295, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var296)->values[0] = (val*) var290;
((struct instance_standard__NativeArray*)var296)->values[1] = (val*) var_mpropdef;
{
((void (*)(val* self, val* p0, long p1))(var294->class->vft[COLOR_standard__array__Array__with_native]))(var294, var296, var295) /* with_native on <var294:Array[Object]>*/;
}
}
{
var297 = ((val* (*)(val* self))(var294->class->vft[COLOR_standard__string__Object__to_s]))(var294) /* to_s on <var294:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, self, var297); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MAttributeDef#static_mtype= (var_mpropdef,var_mtype) on <var_mpropdef:nullable MAttributeDef(MAttributeDef)> */
var_mpropdef->attrs[COLOR_nit__model__MAttributeDef___static_mtype].val = var_mtype; /* _static_mtype on <var_mpropdef:nullable MAttributeDef(MAttributeDef)> */
RET_LABEL298:(void)0;
}
}
var299 = NULL;
if (var_mreadpropdef == NULL) {
var300 = 0; /* is null */
} else {
var300 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mreadpropdef,var299) on <var_mreadpropdef:nullable MMethodDef> */
var_other27 = var299;
{
var303 = ((short int (*)(val* self, val* p0))(var_mreadpropdef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mreadpropdef, var_other27) /* == on <var_mreadpropdef:nullable MMethodDef(MMethodDef)>*/;
}
var304 = !var303;
var301 = var304;
goto RET_LABEL302;
RET_LABEL302:(void)0;
}
var300 = var301;
}
if (var300){
var305 = NEW_nit__MSignature(&type_nit__MSignature);
var306 = NEW_standard__Array(&type_standard__Array__nit__MParameter);
{
standard___standard__Array___standard__kernel__Object__init(var306); /* Direct call array#Array#init on <var306:Array[MParameter]>*/
}
{
((void (*)(val* self, val* p0))(var305->class->vft[COLOR_nit__model__MSignature__mparameters_61d]))(var305, var306) /* mparameters= on <var305:MSignature>*/;
}
{
((void (*)(val* self, val* p0))(var305->class->vft[COLOR_nit__model__MSignature__return_mtype_61d]))(var305, var_mtype) /* return_mtype= on <var305:MSignature>*/;
}
{
((void (*)(val* self))(var305->class->vft[COLOR_standard__kernel__Object__init]))(var305) /* init on <var305:MSignature>*/;
}
var_msignature307 = var305;
{
{ /* Inline model#MMethodDef#msignature= (var_mreadpropdef,var_msignature307) on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var_mreadpropdef->attrs[COLOR_nit__model__MMethodDef___msignature].val = var_msignature307; /* _msignature on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL308:(void)0;
}
}
} else {
}
{
{ /* Inline modelize_property#AAttrPropdef#mwritepropdef (self) on <self:AAttrPropdef> */
var311 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___mwritepropdef].val; /* _mwritepropdef on <self:AAttrPropdef> */
var309 = var311;
RET_LABEL310:(void)0;
}
}
var_mwritepropdef = var309;
var312 = NULL;
if (var_mwritepropdef == NULL) {
var313 = 0; /* is null */
} else {
var313 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mwritepropdef,var312) on <var_mwritepropdef:nullable MMethodDef> */
var_other27 = var312;
{
var316 = ((short int (*)(val* self, val* p0))(var_mwritepropdef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mwritepropdef, var_other27) /* == on <var_mwritepropdef:nullable MMethodDef(MMethodDef)>*/;
}
var317 = !var316;
var314 = var317;
goto RET_LABEL315;
RET_LABEL315:(void)0;
}
var313 = var314;
}
if (var313){
{
{ /* Inline parser_nodes#AAttrPropdef#n_id2 (self) on <self:AAttrPropdef> */
var320 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_id2].val; /* _n_id2 on <self:AAttrPropdef> */
if (unlikely(var320 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1138);
show_backtrace(1);
}
var318 = var320;
RET_LABEL319:(void)0;
}
}
{
var321 = nit__lexer_work___Token___text(var318);
}
var_name = var321;
var322 = NEW_nit__MParameter(&type_nit__MParameter);
var323 = 0;
{
((void (*)(val* self, val* p0))(var322->class->vft[COLOR_nit__model__MParameter__name_61d]))(var322, var_name) /* name= on <var322:MParameter>*/;
}
{
((void (*)(val* self, val* p0))(var322->class->vft[COLOR_nit__model__MParameter__mtype_61d]))(var322, var_mtype) /* mtype= on <var322:MParameter>*/;
}
{
((void (*)(val* self, short int p0))(var322->class->vft[COLOR_nit__model__MParameter__is_vararg_61d]))(var322, var323) /* is_vararg= on <var322:MParameter>*/;
}
{
((void (*)(val* self))(var322->class->vft[COLOR_standard__kernel__Object__init]))(var322) /* init on <var322:MParameter>*/;
}
var_mparameter = var322;
var324 = NEW_nit__MSignature(&type_nit__MSignature);
var325 = NEW_standard__Array(&type_standard__Array__nit__MParameter);
var326 = 1;
{
standard___standard__Array___with_capacity(var325, var326); /* Direct call array#Array#with_capacity on <var325:Array[MParameter]>*/
}
var_327 = var325;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_327, var_mparameter); /* Direct call array#AbstractArray#push on <var_327:Array[MParameter]>*/
}
var328 = NULL;
{
((void (*)(val* self, val* p0))(var324->class->vft[COLOR_nit__model__MSignature__mparameters_61d]))(var324, var_327) /* mparameters= on <var324:MSignature>*/;
}
{
((void (*)(val* self, val* p0))(var324->class->vft[COLOR_nit__model__MSignature__return_mtype_61d]))(var324, var328) /* return_mtype= on <var324:MSignature>*/;
}
{
((void (*)(val* self))(var324->class->vft[COLOR_standard__kernel__Object__init]))(var324) /* init on <var324:MSignature>*/;
}
var_msignature329 = var324;
{
{ /* Inline model#MMethodDef#msignature= (var_mwritepropdef,var_msignature329) on <var_mwritepropdef:nullable MMethodDef(MMethodDef)> */
var_mwritepropdef->attrs[COLOR_nit__model__MMethodDef___msignature].val = var_msignature329; /* _msignature on <var_mwritepropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL330:(void)0;
}
}
} else {
}
{
{ /* Inline modelize_property#AAttrPropdef#mlazypropdef (self) on <self:AAttrPropdef> */
var333 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___mlazypropdef].val; /* _mlazypropdef on <self:AAttrPropdef> */
var331 = var333;
RET_LABEL332:(void)0;
}
}
var_mlazypropdef = var331;
var334 = NULL;
if (var_mlazypropdef == NULL) {
var335 = 0; /* is null */
} else {
var335 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mlazypropdef,var334) on <var_mlazypropdef:nullable MAttributeDef> */
var_other27 = var334;
{
var338 = ((short int (*)(val* self, val* p0))(var_mlazypropdef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mlazypropdef, var_other27) /* == on <var_mlazypropdef:nullable MAttributeDef(MAttributeDef)>*/;
}
var339 = !var338;
var336 = var339;
goto RET_LABEL337;
RET_LABEL337:(void)0;
}
var335 = var336;
}
if (var335){
{
{ /* Inline modelbuilder_base#ModelBuilder#model (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var342 = var_modelbuilder->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___model].val; /* _model on <var_modelbuilder:ModelBuilder> */
if (unlikely(var342 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 44);
show_backtrace(1);
}
var340 = var342;
RET_LABEL341:(void)0;
}
}
if (varonce343) {
var344 = varonce343;
} else {
var345 = "Bool";
var346 = 4;
var347 = standard___standard__NativeString___to_s_with_length(var345, var346);
var344 = var347;
varonce343 = var344;
}
{
var348 = nit__model___Model___get_mclasses_by_name(var340, var344);
}
if (var348 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1090);
show_backtrace(1);
} else {
var349 = standard___standard__SequenceRead___Collection__first(var348);
}
{
{ /* Inline model#MClass#mclass_type (var349) on <var349:nullable Object(MClass)> */
var352 = var349->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var349:nullable Object(MClass)> */
if (unlikely(var352 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var350 = var352;
RET_LABEL351:(void)0;
}
}
{
{ /* Inline model#MAttributeDef#static_mtype= (var_mlazypropdef,var350) on <var_mlazypropdef:nullable MAttributeDef(MAttributeDef)> */
var_mlazypropdef->attrs[COLOR_nit__model__MAttributeDef___static_mtype].val = var350; /* _static_mtype on <var_mlazypropdef:nullable MAttributeDef(MAttributeDef)> */
RET_LABEL353:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#check_signature for (self: AAttrPropdef, ModelBuilder) */
void nit__modelize_property___AAttrPropdef___APropdef__check_signature(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var /* : nullable MPropDef */;
val* var2 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MAttributeDef */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable AType */;
val* var12 /* : nullable AType */;
val* var_ntype /* var ntype: nullable AType */;
val* var13 /* : nullable MPropDef */;
val* var15 /* : nullable MPropDef */;
val* var16 /* : nullable MType */;
val* var18 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var19 /* : null */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : MProperty */;
val* var30 /* : MProperty */;
val* var31 /* : MPropDef */;
val* var33 /* : MPropDef */;
val* var34 /* : nullable MType */;
val* var36 /* : nullable MType */;
val* var_precursor_type /* var precursor_type: nullable MType */;
val* var37 /* : null */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
val* var_other46 /* var other: nullable Object */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
static val* varonce;
val* var49 /* : String */;
char* var50 /* : NativeString */;
long var51 /* : Int */;
val* var52 /* : FlatString */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
long var56 /* : Int */;
val* var57 /* : FlatString */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
long var61 /* : Int */;
val* var62 /* : FlatString */;
val* var63 /* : Array[Object] */;
long var64 /* : Int */;
val* var65 /* : NativeArray[Object] */;
val* var66 /* : String */;
val* var67 /* : nullable MMethodDef */;
val* var69 /* : nullable MMethodDef */;
val* var_meth /* var meth: nullable MMethodDef */;
val* var70 /* : null */;
short int var71 /* : Bool */;
short int var72 /* : Bool */;
short int var74 /* : Bool */;
short int var75 /* : Bool */;
val* var_node /* var node: nullable ANode */;
val* var76 /* : null */;
short int var77 /* : Bool */;
short int var78 /* : Bool */;
short int var80 /* : Bool */;
short int var82 /* : Bool */;
val* var83 /* : nullable MMethodDef */;
val* var85 /* : nullable MMethodDef */;
val* var86 /* : null */;
short int var87 /* : Bool */;
short int var88 /* : Bool */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
val* var_node92 /* var node: nullable ANode */;
val* var93 /* : null */;
short int var94 /* : Bool */;
short int var95 /* : Bool */;
short int var97 /* : Bool */;
short int var99 /* : Bool */;
var_modelbuilder = p0;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var2 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mpropdef = var;
var3 = NULL;
if (var_mpropdef == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mpropdef,var3) on <var_mpropdef:nullable MAttributeDef> */
var_other = var3;
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other) on <var_mpropdef:nullable MAttributeDef(MAttributeDef)> */
var9 = var_mpropdef == var_other;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AAttrPropdef#n_type (self) on <self:AAttrPropdef> */
var12 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_type].val; /* _n_type on <self:AAttrPropdef> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_ntype = var10;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var15 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (var13 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1099);
show_backtrace(1);
} else {
{ /* Inline model#MAttributeDef#static_mtype (var13) on <var13:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2180);
show_backtrace(1);
}
var18 = var13->attrs[COLOR_nit__model__MAttributeDef___static_mtype].val; /* _static_mtype on <var13:nullable MPropDef(nullable MAttributeDef)> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_mtype = var16;
var19 = NULL;
if (var_mtype == NULL) {
var20 = 1; /* is null */
} else {
var20 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var19) on <var_mtype:nullable MType> */
var_other = var19;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var25 = var_mtype == var_other;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (var20){
goto RET_LABEL;
} else {
}
{
var26 = nit___nit__MPropDef___is_intro(var_mpropdef);
}
var27 = !var26;
if (var27){
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MAttributeDef(MAttributeDef)> */
var30 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MAttributeDef(MAttributeDef)> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var28) on <var28:MProperty(MAttribute)> */
var33 = var28->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var28:MProperty(MAttribute)> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1773);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline model#MAttributeDef#static_mtype (var31) on <var31:MPropDef(MAttributeDef)> */
var36 = var31->attrs[COLOR_nit__model__MAttributeDef___static_mtype].val; /* _static_mtype on <var31:MPropDef(MAttributeDef)> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
var_precursor_type = var34;
var37 = NULL;
if (var_precursor_type == NULL) {
var38 = 1; /* is null */
} else {
var38 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_precursor_type,var37) on <var_precursor_type:nullable MType> */
var_other = var37;
{
{ /* Inline kernel#Object#is_same_instance (var_precursor_type,var_other) on <var_precursor_type:nullable MType(MType)> */
var43 = var_precursor_type == var_other;
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
var38 = var39;
}
if (var38){
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Object#!= (var_mtype,var_precursor_type) on <var_mtype:nullable MType(MType)> */
var_other46 = var_precursor_type;
{
var47 = ((short int (*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype, var_other46) /* == on <var_mtype:nullable MType(MType)>*/;
}
var48 = !var47;
var44 = var48;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
if (var44){
if (unlikely(var_ntype == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1109);
show_backtrace(1);
}
if (varonce) {
var49 = varonce;
} else {
var50 = "Redef Error: Wrong static type. found ";
var51 = 38;
var52 = standard___standard__NativeString___to_s_with_length(var50, var51);
var49 = var52;
varonce = var49;
}
if (varonce53) {
var54 = varonce53;
} else {
var55 = ", expected ";
var56 = 11;
var57 = standard___standard__NativeString___to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
if (varonce58) {
var59 = varonce58;
} else {
var60 = ".";
var61 = 1;
var62 = standard___standard__NativeString___to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
var63 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var63 = array_instance Array[Object] */
var64 = 5;
var65 = NEW_standard__NativeArray(var64, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var65)->values[0] = (val*) var49;
((struct instance_standard__NativeArray*)var65)->values[1] = (val*) var_mtype;
((struct instance_standard__NativeArray*)var65)->values[2] = (val*) var54;
((struct instance_standard__NativeArray*)var65)->values[3] = (val*) var_precursor_type;
((struct instance_standard__NativeArray*)var65)->values[4] = (val*) var59;
{
((void (*)(val* self, val* p0, long p1))(var63->class->vft[COLOR_standard__array__Array__with_native]))(var63, var65, var64) /* with_native on <var63:Array[Object]>*/;
}
}
{
var66 = ((val* (*)(val* self))(var63->class->vft[COLOR_standard__string__Object__to_s]))(var63) /* to_s on <var63:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_ntype, var66); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
} else {
}
{
{ /* Inline modelize_property#AAttrPropdef#mreadpropdef (self) on <self:AAttrPropdef> */
var69 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___mreadpropdef].val; /* _mreadpropdef on <self:AAttrPropdef> */
var67 = var69;
RET_LABEL68:(void)0;
}
}
var_meth = var67;
var70 = NULL;
if (var_meth == NULL) {
var71 = 0; /* is null */
} else {
var71 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_meth,var70) on <var_meth:nullable MMethodDef> */
var_other46 = var70;
{
var74 = ((short int (*)(val* self, val* p0))(var_meth->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_meth, var_other46) /* == on <var_meth:nullable MMethodDef(MMethodDef)>*/;
}
var75 = !var74;
var72 = var75;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
var71 = var72;
}
if (var71){
{
nit__modelize_property___AAttrPropdef___check_method_signature(self, var_modelbuilder, var_meth); /* Direct call modelize_property#AAttrPropdef#check_method_signature on <self:AAttrPropdef>*/
}
var_node = var_ntype;
var76 = NULL;
if (var_node == NULL) {
var77 = 1; /* is null */
} else {
var77 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_node,var76) on <var_node:nullable ANode> */
var_other = var76;
{
{ /* Inline kernel#Object#is_same_instance (var_node,var_other) on <var_node:nullable ANode(ANode)> */
var82 = var_node == var_other;
var80 = var82;
goto RET_LABEL81;
RET_LABEL81:(void)0;
}
}
var78 = var80;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
var77 = var78;
}
if (var77){
var_node = self;
} else {
}
{
nit__modelize_property___ModelBuilder___check_visibility(var_modelbuilder, var_node, var_mtype, var_meth); /* Direct call modelize_property#ModelBuilder#check_visibility on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
{
{ /* Inline modelize_property#AAttrPropdef#mwritepropdef (self) on <self:AAttrPropdef> */
var85 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___mwritepropdef].val; /* _mwritepropdef on <self:AAttrPropdef> */
var83 = var85;
RET_LABEL84:(void)0;
}
}
var_meth = var83;
var86 = NULL;
if (var_meth == NULL) {
var87 = 0; /* is null */
} else {
var87 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_meth,var86) on <var_meth:nullable MMethodDef> */
var_other46 = var86;
{
var90 = ((short int (*)(val* self, val* p0))(var_meth->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_meth, var_other46) /* == on <var_meth:nullable MMethodDef(MMethodDef)>*/;
}
var91 = !var90;
var88 = var91;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
var87 = var88;
}
if (var87){
{
nit__modelize_property___AAttrPropdef___check_method_signature(self, var_modelbuilder, var_meth); /* Direct call modelize_property#AAttrPropdef#check_method_signature on <self:AAttrPropdef>*/
}
var_node92 = var_ntype;
var93 = NULL;
if (var_node92 == NULL) {
var94 = 1; /* is null */
} else {
var94 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_node92,var93) on <var_node92:nullable ANode> */
var_other = var93;
{
{ /* Inline kernel#Object#is_same_instance (var_node92,var_other) on <var_node92:nullable ANode(ANode)> */
var99 = var_node92 == var_other;
var97 = var99;
goto RET_LABEL98;
RET_LABEL98:(void)0;
}
}
var95 = var97;
goto RET_LABEL96;
RET_LABEL96:(void)0;
}
var94 = var95;
}
if (var94){
var_node92 = self;
} else {
}
{
nit__modelize_property___ModelBuilder___check_visibility(var_modelbuilder, var_node92, var_mtype, var_meth); /* Direct call modelize_property#ModelBuilder#check_visibility on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#check_method_signature for (self: AAttrPropdef, ModelBuilder, MMethodDef) */
void nit__modelize_property___AAttrPropdef___check_method_signature(val* self, val* p0, val* p1) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var /* : MClassDef */;
val* var2 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var3 /* : MModule */;
val* var5 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var6 /* : nullable AType */;
val* var8 /* : nullable AType */;
val* var_nsig /* var nsig: nullable AType */;
val* var9 /* : nullable MSignature */;
val* var11 /* : nullable MSignature */;
val* var_mysignature /* var mysignature: nullable MSignature */;
val* var12 /* : null */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : MProperty */;
val* var23 /* : MProperty */;
val* var24 /* : MPropDef */;
val* var26 /* : MPropDef */;
val* var27 /* : nullable MSignature */;
val* var29 /* : nullable MSignature */;
val* var_msignature /* var msignature: nullable MSignature */;
val* var30 /* : null */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
long var37 /* : Int */;
long var38 /* : Int */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
val* var43 /* : null */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
val* var_other47 /* var other: nullable Object */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
val* var_node /* var node: ANode */;
static val* varonce;
val* var50 /* : String */;
char* var51 /* : NativeString */;
long var52 /* : Int */;
val* var53 /* : FlatString */;
long var54 /* : Int */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
long var58 /* : Int */;
val* var59 /* : FlatString */;
long var60 /* : Int */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
long var64 /* : Int */;
val* var65 /* : FlatString */;
val* var66 /* : Array[Object] */;
long var67 /* : Int */;
val* var68 /* : NativeArray[Object] */;
val* var69 /* : Object */;
val* var70 /* : Object */;
val* var71 /* : String */;
val* var72 /* : nullable MType */;
val* var74 /* : nullable MType */;
val* var_precursor_ret_type /* var precursor_ret_type: nullable MType */;
val* var75 /* : nullable MType */;
val* var77 /* : nullable MType */;
val* var_ret_type /* var ret_type: nullable MType */;
short int var78 /* : Bool */;
val* var79 /* : null */;
short int var80 /* : Bool */;
short int var81 /* : Bool */;
short int var83 /* : Bool */;
short int var84 /* : Bool */;
short int var_ /* var : Bool */;
val* var85 /* : null */;
short int var86 /* : Bool */;
short int var87 /* : Bool */;
short int var89 /* : Bool */;
short int var91 /* : Bool */;
val* var92 /* : null */;
short int var93 /* : Bool */;
short int var94 /* : Bool */;
short int var96 /* : Bool */;
short int var97 /* : Bool */;
val* var_node98 /* var node: ANode */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : NativeString */;
long var102 /* : Int */;
val* var103 /* : FlatString */;
val* var104 /* : MProperty */;
val* var106 /* : MProperty */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
long var110 /* : Int */;
val* var111 /* : FlatString */;
val* var112 /* : Array[Object] */;
long var113 /* : Int */;
val* var114 /* : NativeArray[Object] */;
val* var115 /* : String */;
long var116 /* : Int */;
long var117 /* : Int */;
short int var118 /* : Bool */;
short int var120 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var121 /* : Bool */;
long var122 /* : Int */;
long var_i /* var i: Int */;
long var123 /* : Int */;
long var_124 /* var : Int */;
short int var125 /* : Bool */;
short int var127 /* : Bool */;
int cltype128;
int idtype129;
const char* var_class_name130;
short int var131 /* : Bool */;
val* var132 /* : Array[MParameter] */;
val* var134 /* : Array[MParameter] */;
val* var135 /* : nullable Object */;
val* var136 /* : MType */;
val* var138 /* : MType */;
val* var_myt /* var myt: MType */;
val* var139 /* : Array[MParameter] */;
val* var141 /* : Array[MParameter] */;
val* var142 /* : nullable Object */;
val* var143 /* : MType */;
val* var145 /* : MType */;
val* var_prt /* var prt: MType */;
short int var146 /* : Bool */;
val* var147 /* : MClassType */;
val* var149 /* : MClassType */;
short int var150 /* : Bool */;
short int var151 /* : Bool */;
short int var_152 /* var : Bool */;
val* var153 /* : MClassType */;
val* var155 /* : MClassType */;
short int var156 /* : Bool */;
short int var157 /* : Bool */;
val* var158 /* : null */;
short int var159 /* : Bool */;
short int var160 /* : Bool */;
short int var162 /* : Bool */;
short int var163 /* : Bool */;
val* var_node164 /* var node: ANode */;
static val* varonce165;
val* var166 /* : String */;
char* var167 /* : NativeString */;
long var168 /* : Int */;
val* var169 /* : FlatString */;
val* var170 /* : Array[MParameter] */;
val* var172 /* : Array[MParameter] */;
val* var173 /* : nullable Object */;
val* var174 /* : String */;
val* var176 /* : String */;
static val* varonce177;
val* var178 /* : String */;
char* var179 /* : NativeString */;
long var180 /* : Int */;
val* var181 /* : FlatString */;
static val* varonce182;
val* var183 /* : String */;
char* var184 /* : NativeString */;
long var185 /* : Int */;
val* var186 /* : FlatString */;
static val* varonce187;
val* var188 /* : String */;
char* var189 /* : NativeString */;
long var190 /* : Int */;
val* var191 /* : FlatString */;
val* var192 /* : Array[Object] */;
long var193 /* : Int */;
val* var194 /* : NativeArray[Object] */;
val* var195 /* : String */;
long var196 /* : Int */;
long var197 /* : Int */;
val* var198 /* : null */;
short int var199 /* : Bool */;
short int var200 /* : Bool */;
short int var202 /* : Bool */;
short int var203 /* : Bool */;
val* var204 /* : null */;
short int var205 /* : Bool */;
short int var206 /* : Bool */;
short int var208 /* : Bool */;
short int var210 /* : Bool */;
val* var211 /* : MClassType */;
val* var213 /* : MClassType */;
short int var214 /* : Bool */;
short int var215 /* : Bool */;
val* var216 /* : null */;
short int var217 /* : Bool */;
short int var218 /* : Bool */;
short int var220 /* : Bool */;
short int var221 /* : Bool */;
val* var_node222 /* var node: ANode */;
static val* varonce223;
val* var224 /* : String */;
char* var225 /* : NativeString */;
long var226 /* : Int */;
val* var227 /* : FlatString */;
static val* varonce228;
val* var229 /* : String */;
char* var230 /* : NativeString */;
long var231 /* : Int */;
val* var232 /* : FlatString */;
static val* varonce233;
val* var234 /* : String */;
char* var235 /* : NativeString */;
long var236 /* : Int */;
val* var237 /* : FlatString */;
val* var238 /* : Array[Object] */;
long var239 /* : Int */;
val* var240 /* : NativeArray[Object] */;
val* var241 /* : String */;
var_modelbuilder = p0;
var_mpropdef = p1;
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var2 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_mclassdef = var;
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var5 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_mmodule = var3;
{
{ /* Inline parser_nodes#AAttrPropdef#n_type (self) on <self:AAttrPropdef> */
var8 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_type].val; /* _n_type on <self:AAttrPropdef> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_nsig = var6;
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var11 = var_mpropdef->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:MMethodDef> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_mysignature = var9;
var12 = NULL;
if (var_mysignature == NULL) {
var13 = 1; /* is null */
} else {
var13 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mysignature,var12) on <var_mysignature:nullable MSignature> */
var_other = var12;
{
{ /* Inline kernel#Object#is_same_instance (var_mysignature,var_other) on <var_mysignature:nullable MSignature(MSignature)> */
var18 = var_mysignature == var_other;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
if (var13){
goto RET_LABEL;
} else {
}
{
var19 = nit___nit__MPropDef___is_intro(var_mpropdef);
}
var20 = !var19;
if (var20){
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var23 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var21) on <var21:MProperty(MMethod)> */
var26 = var21->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var21:MProperty(MMethod)> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1773);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var24) on <var24:MPropDef(MMethodDef)> */
var29 = var24->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var24:MPropDef(MMethodDef)> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_msignature = var27;
var30 = NULL;
if (var_msignature == NULL) {
var31 = 1; /* is null */
} else {
var31 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_msignature,var30) on <var_msignature:nullable MSignature> */
var_other = var30;
{
{ /* Inline kernel#Object#is_same_instance (var_msignature,var_other) on <var_msignature:nullable MSignature(MSignature)> */
var36 = var_msignature == var_other;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
var31 = var32;
}
if (var31){
goto RET_LABEL;
} else {
}
{
var37 = nit___nit__MSignature___arity(var_mysignature);
}
{
var38 = nit___nit__MSignature___arity(var_msignature);
}
{
{ /* Inline kernel#Int#!= (var37,var38) on <var37:Int> */
var41 = var37 == var38;
var42 = !var41;
var39 = var42;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
if (var39){
var43 = NULL;
if (var_nsig == NULL) {
var44 = 0; /* is null */
} else {
var44 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nsig,var43) on <var_nsig:nullable AType> */
var_other47 = var43;
{
var48 = ((short int (*)(val* self, val* p0))(var_nsig->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nsig, var_other47) /* == on <var_nsig:nullable AType(AType)>*/;
}
var49 = !var48;
var45 = var49;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
var44 = var45;
}
if (var44){
var_node = var_nsig;
} else {
var_node = self;
}
if (varonce) {
var50 = varonce;
} else {
var51 = "Redef Error: ";
var52 = 13;
var53 = standard___standard__NativeString___to_s_with_length(var51, var52);
var50 = var53;
varonce = var50;
}
{
var54 = nit___nit__MSignature___arity(var_mysignature);
}
if (varonce55) {
var56 = varonce55;
} else {
var57 = " parameters found, ";
var58 = 19;
var59 = standard___standard__NativeString___to_s_with_length(var57, var58);
var56 = var59;
varonce55 = var56;
}
{
var60 = nit___nit__MSignature___arity(var_msignature);
}
if (varonce61) {
var62 = varonce61;
} else {
var63 = " expected. Signature is ";
var64 = 24;
var65 = standard___standard__NativeString___to_s_with_length(var63, var64);
var62 = var65;
varonce61 = var62;
}
var66 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var66 = array_instance Array[Object] */
var67 = 7;
var68 = NEW_standard__NativeArray(var67, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var68)->values[0] = (val*) var50;
var69 = BOX_standard__Int(var54); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var68)->values[1] = (val*) var69;
((struct instance_standard__NativeArray*)var68)->values[2] = (val*) var56;
var70 = BOX_standard__Int(var60); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var68)->values[3] = (val*) var70;
((struct instance_standard__NativeArray*)var68)->values[4] = (val*) var62;
((struct instance_standard__NativeArray*)var68)->values[5] = (val*) var_mpropdef;
((struct instance_standard__NativeArray*)var68)->values[6] = (val*) var_msignature;
{
((void (*)(val* self, val* p0, long p1))(var66->class->vft[COLOR_standard__array__Array__with_native]))(var66, var68, var67) /* with_native on <var66:Array[Object]>*/;
}
}
{
var71 = ((val* (*)(val* self))(var66->class->vft[COLOR_standard__string__Object__to_s]))(var66) /* to_s on <var66:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_node, var71); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var74 = var_msignature->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:nullable MSignature(MSignature)> */
var72 = var74;
RET_LABEL73:(void)0;
}
}
var_precursor_ret_type = var72;
{
{ /* Inline model#MSignature#return_mtype (var_mysignature) on <var_mysignature:nullable MSignature(MSignature)> */
var77 = var_mysignature->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var_mysignature:nullable MSignature(MSignature)> */
var75 = var77;
RET_LABEL76:(void)0;
}
}
var_ret_type = var75;
var79 = NULL;
if (var_ret_type == NULL) {
var80 = 0; /* is null */
} else {
var80 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret_type,var79) on <var_ret_type:nullable MType> */
var_other47 = var79;
{
var83 = ((short int (*)(val* self, val* p0))(var_ret_type->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ret_type, var_other47) /* == on <var_ret_type:nullable MType(MType)>*/;
}
var84 = !var83;
var81 = var84;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
var80 = var81;
}
var_ = var80;
if (var80){
var85 = NULL;
if (var_precursor_ret_type == NULL) {
var86 = 1; /* is null */
} else {
var86 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_precursor_ret_type,var85) on <var_precursor_ret_type:nullable MType> */
var_other = var85;
{
{ /* Inline kernel#Object#is_same_instance (var_precursor_ret_type,var_other) on <var_precursor_ret_type:nullable MType(MType)> */
var91 = var_precursor_ret_type == var_other;
var89 = var91;
goto RET_LABEL90;
RET_LABEL90:(void)0;
}
}
var87 = var89;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
var86 = var87;
}
var78 = var86;
} else {
var78 = var_;
}
if (var78){
var92 = NULL;
if (var_nsig == NULL) {
var93 = 0; /* is null */
} else {
var93 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nsig,var92) on <var_nsig:nullable AType> */
var_other47 = var92;
{
var96 = ((short int (*)(val* self, val* p0))(var_nsig->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nsig, var_other47) /* == on <var_nsig:nullable AType(AType)>*/;
}
var97 = !var96;
var94 = var97;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
var93 = var94;
}
if (var93){
var_node98 = var_nsig;
} else {
var_node98 = self;
}
if (varonce99) {
var100 = varonce99;
} else {
var101 = "Redef Error: ";
var102 = 13;
var103 = standard___standard__NativeString___to_s_with_length(var101, var102);
var100 = var103;
varonce99 = var100;
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var106 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var106 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var104 = var106;
RET_LABEL105:(void)0;
}
}
if (varonce107) {
var108 = varonce107;
} else {
var109 = " is a procedure, not a function.";
var110 = 32;
var111 = standard___standard__NativeString___to_s_with_length(var109, var110);
var108 = var111;
varonce107 = var108;
}
var112 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var112 = array_instance Array[Object] */
var113 = 3;
var114 = NEW_standard__NativeArray(var113, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var114)->values[0] = (val*) var100;
((struct instance_standard__NativeArray*)var114)->values[1] = (val*) var104;
((struct instance_standard__NativeArray*)var114)->values[2] = (val*) var108;
{
((void (*)(val* self, val* p0, long p1))(var112->class->vft[COLOR_standard__array__Array__with_native]))(var112, var114, var113) /* with_native on <var112:Array[Object]>*/;
}
}
{
var115 = ((val* (*)(val* self))(var112->class->vft[COLOR_standard__string__Object__to_s]))(var112) /* to_s on <var112:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_node98, var115); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
var116 = nit___nit__MSignature___arity(var_mysignature);
}
var117 = 0;
{
{ /* Inline kernel#Int#> (var116,var117) on <var116:Int> */
/* Covariant cast for argument 0 (i) <var117:Int> isa OTHER */
/* <var117:Int> isa OTHER */
var120 = 1; /* easy <var117:Int> isa OTHER*/
if (unlikely(!var120)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var121 = var116 > var117;
var118 = var121;
goto RET_LABEL119;
RET_LABEL119:(void)0;
}
}
if (var118){
var122 = 0;
var_i = var122;
{
var123 = nit___nit__MSignature___arity(var_mysignature);
}
var_124 = var123;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_124) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_124:Int> isa OTHER */
/* <var_124:Int> isa OTHER */
var127 = 1; /* easy <var_124:Int> isa OTHER*/
if (unlikely(!var127)) {
var_class_name130 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name130);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var131 = var_i < var_124;
var125 = var131;
goto RET_LABEL126;
RET_LABEL126:(void)0;
}
}
if (var125){
{
{ /* Inline model#MSignature#mparameters (var_mysignature) on <var_mysignature:nullable MSignature(MSignature)> */
var134 = var_mysignature->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var_mysignature:nullable MSignature(MSignature)> */
if (unlikely(var134 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var132 = var134;
RET_LABEL133:(void)0;
}
}
{
var135 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var132, var_i);
}
{
{ /* Inline model#MParameter#mtype (var135) on <var135:nullable Object(MParameter)> */
var138 = var135->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var135:nullable Object(MParameter)> */
if (unlikely(var138 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1690);
show_backtrace(1);
}
var136 = var138;
RET_LABEL137:(void)0;
}
}
var_myt = var136;
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var141 = var_msignature->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:nullable MSignature(MSignature)> */
if (unlikely(var141 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var139 = var141;
RET_LABEL140:(void)0;
}
}
{
var142 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var139, var_i);
}
{
{ /* Inline model#MParameter#mtype (var142) on <var142:nullable Object(MParameter)> */
var145 = var142->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var142:nullable Object(MParameter)> */
if (unlikely(var145 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1690);
show_backtrace(1);
}
var143 = var145;
RET_LABEL144:(void)0;
}
}
var_prt = var143;
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var149 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var149 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var147 = var149;
RET_LABEL148:(void)0;
}
}
{
var150 = nit___nit__MType___is_subtype(var_myt, var_mmodule, var147, var_prt);
}
var151 = !var150;
var_152 = var151;
if (var151){
var146 = var_152;
} else {
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var155 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var155 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var153 = var155;
RET_LABEL154:(void)0;
}
}
{
var156 = nit___nit__MType___is_subtype(var_prt, var_mmodule, var153, var_myt);
}
var157 = !var156;
var146 = var157;
}
if (var146){
var158 = NULL;
if (var_nsig == NULL) {
var159 = 0; /* is null */
} else {
var159 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nsig,var158) on <var_nsig:nullable AType> */
var_other47 = var158;
{
var162 = ((short int (*)(val* self, val* p0))(var_nsig->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nsig, var_other47) /* == on <var_nsig:nullable AType(AType)>*/;
}
var163 = !var162;
var160 = var163;
goto RET_LABEL161;
RET_LABEL161:(void)0;
}
var159 = var160;
}
if (var159){
var_node164 = var_nsig;
} else {
var_node164 = self;
}
if (varonce165) {
var166 = varonce165;
} else {
var167 = "Redef Error: Wrong type for parameter `";
var168 = 39;
var169 = standard___standard__NativeString___to_s_with_length(var167, var168);
var166 = var169;
varonce165 = var166;
}
{
{ /* Inline model#MSignature#mparameters (var_mysignature) on <var_mysignature:nullable MSignature(MSignature)> */
var172 = var_mysignature->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var_mysignature:nullable MSignature(MSignature)> */
if (unlikely(var172 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var170 = var172;
RET_LABEL171:(void)0;
}
}
{
var173 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var170, var_i);
}
{
{ /* Inline model#MParameter#name (var173) on <var173:nullable Object(MParameter)> */
var176 = var173->attrs[COLOR_nit__model__MParameter___name].val; /* _name on <var173:nullable Object(MParameter)> */
if (unlikely(var176 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1687);
show_backtrace(1);
}
var174 = var176;
RET_LABEL175:(void)0;
}
}
if (varonce177) {
var178 = varonce177;
} else {
var179 = "\'. found ";
var180 = 9;
var181 = standard___standard__NativeString___to_s_with_length(var179, var180);
var178 = var181;
varonce177 = var178;
}
if (varonce182) {
var183 = varonce182;
} else {
var184 = ", expected ";
var185 = 11;
var186 = standard___standard__NativeString___to_s_with_length(var184, var185);
var183 = var186;
varonce182 = var183;
}
if (varonce187) {
var188 = varonce187;
} else {
var189 = ".";
var190 = 1;
var191 = standard___standard__NativeString___to_s_with_length(var189, var190);
var188 = var191;
varonce187 = var188;
}
var192 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var192 = array_instance Array[Object] */
var193 = 7;
var194 = NEW_standard__NativeArray(var193, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var194)->values[0] = (val*) var166;
((struct instance_standard__NativeArray*)var194)->values[1] = (val*) var174;
((struct instance_standard__NativeArray*)var194)->values[2] = (val*) var178;
((struct instance_standard__NativeArray*)var194)->values[3] = (val*) var_myt;
((struct instance_standard__NativeArray*)var194)->values[4] = (val*) var183;
((struct instance_standard__NativeArray*)var194)->values[5] = (val*) var_prt;
((struct instance_standard__NativeArray*)var194)->values[6] = (val*) var188;
{
((void (*)(val* self, val* p0, long p1))(var192->class->vft[COLOR_standard__array__Array__with_native]))(var192, var194, var193) /* with_native on <var192:Array[Object]>*/;
}
}
{
var195 = ((val* (*)(val* self))(var192->class->vft[COLOR_standard__string__Object__to_s]))(var192) /* to_s on <var192:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_node164, var195); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
var196 = 1;
{
var197 = standard___standard__Int___Discrete__successor(var_i, var196);
}
var_i = var197;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
} else {
}
var198 = NULL;
if (var_precursor_ret_type == NULL) {
var199 = 0; /* is null */
} else {
var199 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_precursor_ret_type,var198) on <var_precursor_ret_type:nullable MType> */
var_other47 = var198;
{
var202 = ((short int (*)(val* self, val* p0))(var_precursor_ret_type->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_precursor_ret_type, var_other47) /* == on <var_precursor_ret_type:nullable MType(MType)>*/;
}
var203 = !var202;
var200 = var203;
goto RET_LABEL201;
RET_LABEL201:(void)0;
}
var199 = var200;
}
if (var199){
var204 = NULL;
if (var_ret_type == NULL) {
var205 = 1; /* is null */
} else {
var205 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ret_type,var204) on <var_ret_type:nullable MType> */
var_other = var204;
{
{ /* Inline kernel#Object#is_same_instance (var_ret_type,var_other) on <var_ret_type:nullable MType(MType)> */
var210 = var_ret_type == var_other;
var208 = var210;
goto RET_LABEL209;
RET_LABEL209:(void)0;
}
}
var206 = var208;
goto RET_LABEL207;
RET_LABEL207:(void)0;
}
var205 = var206;
}
if (var205){
var_ret_type = var_precursor_ret_type;
} else {
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var213 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var213 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var211 = var213;
RET_LABEL212:(void)0;
}
}
{
var214 = nit___nit__MType___is_subtype(var_ret_type, var_mmodule, var211, var_precursor_ret_type);
}
var215 = !var214;
if (var215){
var216 = NULL;
if (var_nsig == NULL) {
var217 = 0; /* is null */
} else {
var217 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nsig,var216) on <var_nsig:nullable AType> */
var_other47 = var216;
{
var220 = ((short int (*)(val* self, val* p0))(var_nsig->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nsig, var_other47) /* == on <var_nsig:nullable AType(AType)>*/;
}
var221 = !var220;
var218 = var221;
goto RET_LABEL219;
RET_LABEL219:(void)0;
}
var217 = var218;
}
if (var217){
var_node222 = var_nsig;
} else {
var_node222 = self;
}
if (varonce223) {
var224 = varonce223;
} else {
var225 = "Redef Error: Wrong return type. found ";
var226 = 38;
var227 = standard___standard__NativeString___to_s_with_length(var225, var226);
var224 = var227;
varonce223 = var224;
}
if (varonce228) {
var229 = varonce228;
} else {
var230 = ", expected ";
var231 = 11;
var232 = standard___standard__NativeString___to_s_with_length(var230, var231);
var229 = var232;
varonce228 = var229;
}
if (varonce233) {
var234 = varonce233;
} else {
var235 = ".";
var236 = 1;
var237 = standard___standard__NativeString___to_s_with_length(var235, var236);
var234 = var237;
varonce233 = var234;
}
var238 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var238 = array_instance Array[Object] */
var239 = 5;
var240 = NEW_standard__NativeArray(var239, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var240)->values[0] = (val*) var224;
((struct instance_standard__NativeArray*)var240)->values[1] = (val*) var_ret_type;
((struct instance_standard__NativeArray*)var240)->values[2] = (val*) var229;
((struct instance_standard__NativeArray*)var240)->values[3] = (val*) var_precursor_ret_type;
((struct instance_standard__NativeArray*)var240)->values[4] = (val*) var234;
{
((void (*)(val* self, val* p0, long p1))(var238->class->vft[COLOR_standard__array__Array__with_native]))(var238, var240, var239) /* with_native on <var238:Array[Object]>*/;
}
}
{
var241 = ((val* (*)(val* self))(var238->class->vft[COLOR_standard__string__Object__to_s]))(var238) /* to_s on <var238:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_node222, var241); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
}
} else {
}
} else {
}
RET_LABEL:;
}
/* method modelize_property#ATypePropdef#build_property for (self: ATypePropdef, ModelBuilder, MClassDef) */
void nit__modelize_property___ATypePropdef___APropdef__build_property(val* self, val* p0, val* p1) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var /* : TClassid */;
val* var2 /* : TClassid */;
val* var3 /* : String */;
val* var_name /* var name: String */;
val* var4 /* : TClassid */;
val* var6 /* : TClassid */;
val* var7 /* : nullable MProperty */;
val* var_mprop /* var mprop: nullable MProperty */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : nullable AVisibility */;
val* var17 /* : nullable AVisibility */;
val* var18 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: MVisibility */;
val* var19 /* : MVirtualTypeProp */;
val* var20 /* : SequenceRead[Char] */;
val* var_ /* var : SequenceRead[Char] */;
val* var21 /* : Iterator[nullable Object] */;
val* var_22 /* var : IndexedIterator[Char] */;
short int var23 /* : Bool */;
val* var24 /* : nullable Object */;
char var25 /* : Char */;
char var_c /* var c: Char */;
short int var26 /* : Bool */;
char var27 /* : Char */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var31 /* : Bool */;
short int var_32 /* var : Bool */;
char var33 /* : Char */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
short int var40 /* : Bool */;
val* var41 /* : TClassid */;
val* var43 /* : TClassid */;
static val* varonce;
val* var44 /* : String */;
char* var45 /* : NativeString */;
long var46 /* : Int */;
val* var47 /* : FlatString */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
long var51 /* : Int */;
val* var52 /* : FlatString */;
val* var53 /* : Array[Object] */;
long var54 /* : Int */;
val* var55 /* : NativeArray[Object] */;
val* var56 /* : String */;
val* var58 /* : nullable TKwredef */;
val* var60 /* : nullable TKwredef */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
val* var64 /* : nullable TKwredef */;
val* var66 /* : nullable TKwredef */;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
val* var73 /* : nullable AVisibility */;
val* var75 /* : nullable AVisibility */;
val* var76 /* : Map[MProperty, APropdef] */;
val* var78 /* : Map[MProperty, APropdef] */;
val* var79 /* : MVirtualTypeDef */;
val* var80 /* : Location */;
val* var82 /* : Location */;
val* var_mpropdef /* var mpropdef: MVirtualTypeDef */;
short int var83 /* : Bool */;
int cltype84;
int idtype85;
const struct type* type_struct;
const char* var_class_name86;
short int var88 /* : Bool */;
int cltype89;
int idtype90;
const struct type* type_struct91;
const char* var_class_name92;
val* var93 /* : HashMap[MPropDef, APropdef] */;
val* var95 /* : HashMap[MPropDef, APropdef] */;
short int var96 /* : Bool */;
val* var97 /* : ToolContext */;
val* var99 /* : ToolContext */;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : NativeString */;
long var103 /* : Int */;
val* var104 /* : FlatString */;
val* var105 /* : String */;
val* var106 /* : Array[Object] */;
long var107 /* : Int */;
val* var108 /* : NativeArray[Object] */;
val* var109 /* : String */;
long var110 /* : Int */;
val* var111 /* : ToolContext */;
val* var113 /* : ToolContext */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : NativeString */;
long var117 /* : Int */;
val* var118 /* : FlatString */;
val* var119 /* : String */;
val* var120 /* : Array[Object] */;
long var121 /* : Int */;
val* var122 /* : NativeArray[Object] */;
val* var123 /* : String */;
long var124 /* : Int */;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : NativeString */;
long var128 /* : Int */;
val* var129 /* : FlatString */;
val* var130 /* : nullable AAnnotation */;
val* var_atfixed /* var atfixed: nullable AAnnotation */;
val* var131 /* : null */;
short int var132 /* : Bool */;
short int var133 /* : Bool */;
val* var_other135 /* var other: nullable Object */;
short int var136 /* : Bool */;
short int var137 /* : Bool */;
short int var138 /* : Bool */;
var_modelbuilder = p0;
var_mclassdef = p1;
{
{ /* Inline parser_nodes#ATypePropdef#n_id (self) on <self:ATypePropdef> */
var2 = self->attrs[COLOR_nit__parser_nodes__ATypePropdef___n_id].val; /* _n_id on <self:ATypePropdef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1322);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit__lexer_work___Token___text(var);
}
var_name = var3;
{
{ /* Inline parser_nodes#ATypePropdef#n_id (self) on <self:ATypePropdef> */
var6 = self->attrs[COLOR_nit__parser_nodes__ATypePropdef___n_id].val; /* _n_id on <self:ATypePropdef> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1322);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nit___nit__ModelBuilder___try_get_mproperty_by_name(var_modelbuilder, var4, var_mclassdef, var_name);
}
var_mprop = var7;
var8 = NULL;
if (var_mprop == NULL) {
var9 = 1; /* is null */
} else {
var9 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mprop,var8) on <var_mprop:nullable MProperty> */
var_other = var8;
{
{ /* Inline kernel#Object#is_same_instance (var_mprop,var_other) on <var_mprop:nullable MProperty(MProperty)> */
var14 = var_mprop == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
{
{ /* Inline parser_nodes#ADefinition#n_visibility (self) on <self:ATypePropdef> */
var17 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:ATypePropdef> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = nit__modelize_property___APropdef___new_property_visibility(self, var_modelbuilder, var_mclassdef, var15);
}
var_mvisibility = var18;
var19 = NEW_nit__MVirtualTypeProp(&type_nit__MVirtualTypeProp);
{
((void (*)(val* self, val* p0))(var19->class->vft[COLOR_nit__model__MProperty__intro_mclassdef_61d]))(var19, var_mclassdef) /* intro_mclassdef= on <var19:MVirtualTypeProp>*/;
}
{
((void (*)(val* self, val* p0))(var19->class->vft[COLOR_nit__model__MProperty__name_61d]))(var19, var_name) /* name= on <var19:MVirtualTypeProp>*/;
}
{
((void (*)(val* self, val* p0))(var19->class->vft[COLOR_nit__model__MProperty__visibility_61d]))(var19, var_mvisibility) /* visibility= on <var19:MVirtualTypeProp>*/;
}
{
((void (*)(val* self))(var19->class->vft[COLOR_standard__kernel__Object__init]))(var19) /* init on <var19:MVirtualTypeProp>*/;
}
var_mprop = var19;
{
var20 = ((val* (*)(val* self))(var_name->class->vft[COLOR_standard__string__Text__chars]))(var_name) /* chars on <var_name:String>*/;
}
var_ = var20;
{
var21 = ((val* (*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:SequenceRead[Char]>*/;
}
var_22 = var21;
for(;;) {
{
var23 = ((short int (*)(val* self))(var_22->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_22) /* is_ok on <var_22:IndexedIterator[Char]>*/;
}
if (var23){
{
var24 = ((val* (*)(val* self))(var_22->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_22) /* item on <var_22:IndexedIterator[Char]>*/;
}
var25 = ((struct instance_standard__Char*)var24)->value; /* autounbox from nullable Object to Char */;
var_c = var25;
var27 = 'a';
{
{ /* Inline kernel#Char#>= (var_c,var27) on <var_c:Char> */
/* Covariant cast for argument 0 (i) <var27:Char> isa OTHER */
/* <var27:Char> isa OTHER */
var30 = 1; /* easy <var27:Char> isa OTHER*/
if (unlikely(!var30)) {
var_class_name = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 593);
show_backtrace(1);
}
var31 = var_c >= var27;
var28 = var31;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var_32 = var28;
if (var28){
var33 = 'z';
{
{ /* Inline kernel#Char#<= (var_c,var33) on <var_c:Char> */
/* Covariant cast for argument 0 (i) <var33:Char> isa OTHER */
/* <var33:Char> isa OTHER */
var36 = 1; /* easy <var33:Char> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 591);
show_backtrace(1);
}
var40 = var_c <= var33;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var26 = var34;
} else {
var26 = var_32;
}
if (var26){
{
{ /* Inline parser_nodes#ATypePropdef#n_id (self) on <self:ATypePropdef> */
var43 = self->attrs[COLOR_nit__parser_nodes__ATypePropdef___n_id].val; /* _n_id on <self:ATypePropdef> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1322);
show_backtrace(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
if (varonce) {
var44 = varonce;
} else {
var45 = "bad-type-name";
var46 = 13;
var47 = standard___standard__NativeString___to_s_with_length(var45, var46);
var44 = var47;
varonce = var44;
}
if (varonce48) {
var49 = varonce48;
} else {
var50 = "Warning: lowercase in the virtual type ";
var51 = 39;
var52 = standard___standard__NativeString___to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
var53 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var53 = array_instance Array[Object] */
var54 = 2;
var55 = NEW_standard__NativeArray(var54, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var55)->values[0] = (val*) var49;
((struct instance_standard__NativeArray*)var55)->values[1] = (val*) var_name;
{
((void (*)(val* self, val* p0, long p1))(var53->class->vft[COLOR_standard__array__Array__with_native]))(var53, var55, var54) /* with_native on <var53:Array[Object]>*/;
}
}
{
var56 = ((val* (*)(val* self))(var53->class->vft[COLOR_standard__string__Object__to_s]))(var53) /* to_s on <var53:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___warning(var_modelbuilder, var41, var44, var56); /* Direct call modelbuilder_base#ModelBuilder#warning on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label;
} else {
}
{
((void (*)(val* self))(var_22->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_22) /* next on <var_22:IndexedIterator[Char]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_22) on <var_22:IndexedIterator[Char]> */
RET_LABEL57:(void)0;
}
}
{
{ /* Inline parser_nodes#ADefinition#n_kwredef (self) on <self:ATypePropdef> */
var60 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:ATypePropdef> */
var58 = var60;
RET_LABEL59:(void)0;
}
}
var61 = 0;
{
var62 = nit__modelize_property___APropdef___check_redef_keyword(self, var_modelbuilder, var_mclassdef, var58, var61, var_mprop);
}
var63 = !var62;
if (var63){
goto RET_LABEL;
} else {
}
} else {
{
{ /* Inline parser_nodes#ADefinition#n_kwredef (self) on <self:ATypePropdef> */
var66 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:ATypePropdef> */
var64 = var66;
RET_LABEL65:(void)0;
}
}
var67 = 1;
{
var68 = nit__modelize_property___APropdef___check_redef_keyword(self, var_modelbuilder, var_mclassdef, var64, var67, var_mprop);
}
var69 = !var68;
if (var69){
goto RET_LABEL;
} else {
}
/* <var_mprop:nullable MProperty(MProperty)> isa MVirtualTypeProp */
cltype71 = type_nit__MVirtualTypeProp.color;
idtype72 = type_nit__MVirtualTypeProp.id;
if(cltype71 >= var_mprop->type->table_size) {
var70 = 0;
} else {
var70 = var_mprop->type->type_table[cltype71] == idtype72;
}
if (unlikely(!var70)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1204);
show_backtrace(1);
}
{
{ /* Inline parser_nodes#ADefinition#n_visibility (self) on <self:ATypePropdef> */
var75 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:ATypePropdef> */
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
nit__modelize_property___APropdef___check_redef_property_visibility(self, var_modelbuilder, var73, var_mprop); /* Direct call modelize_property#APropdef#check_redef_property_visibility on <self:ATypePropdef>*/
}
}
{
{ /* Inline modelize_property#MClassDef#mprop2npropdef (var_mclassdef) on <var_mclassdef:MClassDef> */
var78 = var_mclassdef->attrs[COLOR_nit__modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <var_mclassdef:MClassDef> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 352);
show_backtrace(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
{
((void (*)(val* self, val* p0, val* p1))(var76->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var76, var_mprop, self) /* []= on <var76:Map[MProperty, APropdef]>*/;
}
var79 = NEW_nit__MVirtualTypeDef(&type_nit__MVirtualTypeDef);
{
{ /* Inline parser_nodes#ANode#location (self) on <self:ATypePropdef> */
var82 = self->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <self:ATypePropdef> */
if (unlikely(var82 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 23);
show_backtrace(1);
}
var80 = var82;
RET_LABEL81:(void)0;
}
}
{
((void (*)(val* self, val* p0))(var79->class->vft[COLOR_nit__model__MPropDef__mclassdef_61d]))(var79, var_mclassdef) /* mclassdef= on <var79:MVirtualTypeDef>*/;
}
{
((void (*)(val* self, val* p0))(var79->class->vft[COLOR_nit__model__MPropDef__mproperty_61d]))(var79, var_mprop) /* mproperty= on <var79:MVirtualTypeDef>*/;
}
{
((void (*)(val* self, val* p0))(var79->class->vft[COLOR_nit__model__MPropDef__location_61d]))(var79, var80) /* location= on <var79:MVirtualTypeDef>*/;
}
{
((void (*)(val* self))(var79->class->vft[COLOR_standard__kernel__Object__init]))(var79) /* init on <var79:MVirtualTypeDef>*/;
}
var_mpropdef = var79;
/* <var_mpropdef:MVirtualTypeDef> isa nullable MPROPDEF */
type_struct = self->type->resolution_table->types[COLOR_nullable__nit__modelize_property__APropdef__MPROPDEF];
cltype84 = type_struct->color;
idtype85 = type_struct->id;
if(cltype84 >= var_mpropdef->type->table_size) {
var83 = 0;
} else {
var83 = var_mpropdef->type->type_table[cltype84] == idtype85;
}
if (unlikely(!var83)) {
var_class_name86 = var_mpropdef == NULL ? "null" : var_mpropdef->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name86);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1210);
show_backtrace(1);
}
{
{ /* Inline modelize_property#APropdef#mpropdef= (self,var_mpropdef) on <self:ATypePropdef> */
/* Covariant cast for argument 0 (mpropdef) <var_mpropdef:MVirtualTypeDef> isa nullable MPROPDEF */
/* <var_mpropdef:MVirtualTypeDef> isa nullable MPROPDEF */
type_struct91 = self->type->resolution_table->types[COLOR_nullable__nit__modelize_property__APropdef__MPROPDEF];
cltype89 = type_struct91->color;
idtype90 = type_struct91->id;
if(cltype89 >= var_mpropdef->type->table_size) {
var88 = 0;
} else {
var88 = var_mpropdef->type->type_table[cltype89] == idtype90;
}
if (unlikely(!var88)) {
var_class_name92 = var_mpropdef == NULL ? "null" : var_mpropdef->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name92);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 405);
show_backtrace(1);
}
self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val = var_mpropdef; /* _mpropdef on <self:ATypePropdef> */
RET_LABEL87:(void)0;
}
}
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var95 = var_modelbuilder->attrs[COLOR_nit__modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var95 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 40);
show_backtrace(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var93, var_mpropdef, self); /* Direct call hash_collection#HashMap#[]= on <var93:HashMap[MPropDef, APropdef]>*/
}
{
var96 = nit___nit__MPropDef___is_intro(var_mpropdef);
}
if (var96){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var99 = var_modelbuilder->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var_modelbuilder:ModelBuilder> */
if (unlikely(var99 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var97 = var99;
RET_LABEL98:(void)0;
}
}
if (varonce100) {
var101 = varonce100;
} else {
var102 = " introduces new type ";
var103 = 21;
var104 = standard___standard__NativeString___to_s_with_length(var102, var103);
var101 = var104;
varonce100 = var101;
}
{
var105 = nit___nit__MProperty___nit__model_base__MEntity__full_name(var_mprop);
}
var106 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var106 = array_instance Array[Object] */
var107 = 3;
var108 = NEW_standard__NativeArray(var107, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var108)->values[0] = (val*) var_mpropdef;
((struct instance_standard__NativeArray*)var108)->values[1] = (val*) var101;
((struct instance_standard__NativeArray*)var108)->values[2] = (val*) var105;
{
((void (*)(val* self, val* p0, long p1))(var106->class->vft[COLOR_standard__array__Array__with_native]))(var106, var108, var107) /* with_native on <var106:Array[Object]>*/;
}
}
{
var109 = ((val* (*)(val* self))(var106->class->vft[COLOR_standard__string__Object__to_s]))(var106) /* to_s on <var106:Array[Object]>*/;
}
var110 = 4;
{
nit___nit__ToolContext___info(var97, var109, var110); /* Direct call toolcontext#ToolContext#info on <var97:ToolContext>*/
}
} else {
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var113 = var_modelbuilder->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var_modelbuilder:ModelBuilder> */
if (unlikely(var113 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var111 = var113;
RET_LABEL112:(void)0;
}
}
if (varonce114) {
var115 = varonce114;
} else {
var116 = " redefines type ";
var117 = 16;
var118 = standard___standard__NativeString___to_s_with_length(var116, var117);
var115 = var118;
varonce114 = var115;
}
{
var119 = nit___nit__MProperty___nit__model_base__MEntity__full_name(var_mprop);
}
var120 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var120 = array_instance Array[Object] */
var121 = 3;
var122 = NEW_standard__NativeArray(var121, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var122)->values[0] = (val*) var_mpropdef;
((struct instance_standard__NativeArray*)var122)->values[1] = (val*) var115;
((struct instance_standard__NativeArray*)var122)->values[2] = (val*) var119;
{
((void (*)(val* self, val* p0, long p1))(var120->class->vft[COLOR_standard__array__Array__with_native]))(var120, var122, var121) /* with_native on <var120:Array[Object]>*/;
}
}
{
var123 = ((val* (*)(val* self))(var120->class->vft[COLOR_standard__string__Object__to_s]))(var120) /* to_s on <var120:Array[Object]>*/;
}
var124 = 4;
{
nit___nit__ToolContext___info(var111, var123, var124); /* Direct call toolcontext#ToolContext#info on <var111:ToolContext>*/
}
}
{
nit__modelize_property___APropdef___set_doc(self, var_mpropdef, var_modelbuilder); /* Direct call modelize_property#APropdef#set_doc on <self:ATypePropdef>*/
}
if (varonce125) {
var126 = varonce125;
} else {
var127 = "fixed";
var128 = 5;
var129 = standard___standard__NativeString___to_s_with_length(var127, var128);
var126 = var129;
varonce125 = var126;
}
{
var130 = nit__annotation___Prod___get_single_annotation(self, var126, var_modelbuilder);
}
var_atfixed = var130;
var131 = NULL;
if (var_atfixed == NULL) {
var132 = 0; /* is null */
} else {
var132 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atfixed,var131) on <var_atfixed:nullable AAnnotation> */
var_other135 = var131;
{
var136 = ((short int (*)(val* self, val* p0))(var_atfixed->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_atfixed, var_other135) /* == on <var_atfixed:nullable AAnnotation(AAnnotation)>*/;
}
var137 = !var136;
var133 = var137;
goto RET_LABEL134;
RET_LABEL134:(void)0;
}
var132 = var133;
}
if (var132){
var138 = 1;
{
{ /* Inline model#MVirtualTypeDef#is_fixed= (var_mpropdef,var138) on <var_mpropdef:MVirtualTypeDef> */
var_mpropdef->attrs[COLOR_nit__model__MVirtualTypeDef___is_fixed].s = var138; /* _is_fixed on <var_mpropdef:MVirtualTypeDef> */
RET_LABEL139:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method modelize_property#ATypePropdef#build_signature for (self: ATypePropdef, ModelBuilder) */
void nit__modelize_property___ATypePropdef___APropdef__build_signature(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var /* : nullable MPropDef */;
val* var2 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MVirtualTypeDef */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : MClassDef */;
val* var12 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var13 /* : MModule */;
val* var15 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var16 /* : null */;
val* var_mtype /* var mtype: nullable MType */;
val* var17 /* : AType */;
val* var19 /* : AType */;
val* var_ntype /* var ntype: AType */;
val* var20 /* : nullable MType */;
val* var21 /* : null */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
var_modelbuilder = p0;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:ATypePropdef> */
var2 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:ATypePropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mpropdef = var;
var3 = NULL;
if (var_mpropdef == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mpropdef,var3) on <var_mpropdef:nullable MVirtualTypeDef> */
var_other = var3;
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var9 = var_mpropdef == var_other;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var12 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_mclassdef = var10;
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var15 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_mmodule = var13;
var16 = NULL;
var_mtype = var16;
{
{ /* Inline parser_nodes#ATypePropdef#n_type (self) on <self:ATypePropdef> */
var19 = self->attrs[COLOR_nit__parser_nodes__ATypePropdef___n_type].val; /* _n_type on <self:ATypePropdef> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1325);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_ntype = var17;
{
var20 = nit__modelize_class___ModelBuilder___resolve_mtype(var_modelbuilder, var_mmodule, var_mclassdef, var_ntype);
}
var_mtype = var20;
var21 = NULL;
if (var_mtype == NULL) {
var22 = 1; /* is null */
} else {
var22 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var21) on <var_mtype:nullable MType> */
var_other = var21;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var27 = var_mtype == var_other;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
var22 = var23;
}
if (var22){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MVirtualTypeDef#bound= (var_mpropdef,var_mtype) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var_mpropdef->attrs[COLOR_nit__model__MVirtualTypeDef___bound].val = var_mtype; /* _bound on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
RET_LABEL28:(void)0;
}
}
RET_LABEL:;
}
/* method modelize_property#ATypePropdef#check_signature for (self: ATypePropdef, ModelBuilder) */
void nit__modelize_property___ATypePropdef___APropdef__check_signature(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var /* : nullable MPropDef */;
val* var2 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MVirtualTypeDef */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable MPropDef */;
val* var12 /* : nullable MPropDef */;
val* var13 /* : nullable MType */;
val* var15 /* : nullable MType */;
val* var_bound /* var bound: nullable MType */;
val* var16 /* : null */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
val* var23 /* : AType */;
val* var25 /* : AType */;
val* var26 /* : MClassDef */;
val* var28 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var29 /* : MModule */;
val* var31 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var32 /* : MClassType */;
val* var34 /* : MClassType */;
val* var_anchor /* var anchor: MClassType */;
short int var35 /* : Bool */;
int cltype;
int idtype;
val* var36 /* : Array[MVirtualType] */;
long var37 /* : Int */;
val* var_ /* var : Array[MVirtualType] */;
val* var38 /* : nullable MPropDef */;
val* var40 /* : nullable MPropDef */;
val* var41 /* : MProperty */;
val* var43 /* : MProperty */;
val* var44 /* : MVirtualType */;
val* var46 /* : MVirtualType */;
val* var_seen /* var seen: Array[MVirtualType] */;
short int var47 /* : Bool */;
static val* varonce;
val* var48 /* : String */;
char* var49 /* : NativeString */;
long var50 /* : Int */;
val* var51 /* : FlatString */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
long var55 /* : Int */;
val* var56 /* : FlatString */;
val* var57 /* : String */;
val* var58 /* : Array[Object] */;
long var59 /* : Int */;
val* var60 /* : NativeArray[Object] */;
val* var61 /* : String */;
val* var62 /* : MType */;
val* var_next /* var next: MType */;
short int var63 /* : Bool */;
int cltype64;
int idtype65;
short int var66 /* : Bool */;
val* var67 /* : nullable MType */;
val* var69 /* : nullable MType */;
val* var70 /* : MProperty */;
val* var72 /* : MProperty */;
val* var73 /* : Array[MPropDef] */;
val* var_74 /* var : Array[MVirtualTypeDef] */;
val* var75 /* : ArrayIterator[nullable Object] */;
val* var_76 /* var : ArrayIterator[MVirtualTypeDef] */;
short int var77 /* : Bool */;
val* var78 /* : nullable Object */;
val* var_p /* var p: MVirtualTypeDef */;
val* var79 /* : nullable MType */;
val* var81 /* : nullable MType */;
val* var_supbound /* var supbound: nullable MType */;
val* var82 /* : null */;
short int var83 /* : Bool */;
short int var84 /* : Bool */;
short int var86 /* : Bool */;
short int var88 /* : Bool */;
short int var90 /* : Bool */;
short int var92 /* : Bool */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
long var96 /* : Int */;
val* var97 /* : FlatString */;
val* var98 /* : MProperty */;
val* var100 /* : MProperty */;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : NativeString */;
long var104 /* : Int */;
val* var105 /* : FlatString */;
val* var106 /* : MClassDef */;
val* var108 /* : MClassDef */;
val* var109 /* : MClass */;
val* var111 /* : MClass */;
val* var112 /* : Array[Object] */;
long var113 /* : Int */;
val* var114 /* : NativeArray[Object] */;
val* var115 /* : String */;
val* var116 /* : MClassDef */;
val* var118 /* : MClassDef */;
val* var119 /* : MClass */;
val* var121 /* : MClass */;
val* var122 /* : MClass */;
val* var124 /* : MClass */;
short int var125 /* : Bool */;
short int var127 /* : Bool */;
short int var129 /* : Bool */;
val* var130 /* : AType */;
val* var132 /* : AType */;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : NativeString */;
long var136 /* : Int */;
val* var137 /* : FlatString */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : NativeString */;
long var141 /* : Int */;
val* var142 /* : FlatString */;
short int var143 /* : Bool */;
short int var144 /* : Bool */;
val* var145 /* : AType */;
val* var147 /* : AType */;
static val* varonce148;
val* var149 /* : String */;
char* var150 /* : NativeString */;
long var151 /* : Int */;
val* var152 /* : FlatString */;
static val* varonce153;
val* var154 /* : String */;
char* var155 /* : NativeString */;
long var156 /* : Int */;
val* var157 /* : FlatString */;
static val* varonce158;
val* var159 /* : String */;
char* var160 /* : NativeString */;
long var161 /* : Int */;
val* var162 /* : FlatString */;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : NativeString */;
long var166 /* : Int */;
val* var167 /* : FlatString */;
val* var168 /* : Array[Object] */;
long var169 /* : Int */;
val* var170 /* : NativeArray[Object] */;
val* var171 /* : String */;
var_modelbuilder = p0;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:ATypePropdef> */
var2 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:ATypePropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mpropdef = var;
var3 = NULL;
if (var_mpropdef == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mpropdef,var3) on <var_mpropdef:nullable MVirtualTypeDef> */
var_other = var3;
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var9 = var_mpropdef == var_other;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:ATypePropdef> */
var12 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:ATypePropdef> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (var10 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1246);
show_backtrace(1);
} else {
{ /* Inline model#MVirtualTypeDef#bound (var10) on <var10:nullable MPropDef(nullable MVirtualTypeDef)> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2191);
show_backtrace(1);
}
var15 = var10->attrs[COLOR_nit__model__MVirtualTypeDef___bound].val; /* _bound on <var10:nullable MPropDef(nullable MVirtualTypeDef)> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_bound = var13;
var16 = NULL;
if (var_bound == NULL) {
var17 = 1; /* is null */
} else {
var17 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_bound,var16) on <var_bound:nullable MType> */
var_other = var16;
{
{ /* Inline kernel#Object#is_same_instance (var_bound,var_other) on <var_bound:nullable MType(MType)> */
var22 = var_bound == var_other;
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
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ATypePropdef#n_type (self) on <self:ATypePropdef> */
var25 = self->attrs[COLOR_nit__parser_nodes__ATypePropdef___n_type].val; /* _n_type on <self:ATypePropdef> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1325);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
nit__modelize_property___ModelBuilder___check_visibility(var_modelbuilder, var23, var_bound, var_mpropdef); /* Direct call modelize_property#ModelBuilder#check_visibility on <var_modelbuilder:ModelBuilder>*/
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var28 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
var_mclassdef = var26;
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var31 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
var_mmodule = var29;
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var34 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
var_anchor = var32;
/* <var_bound:nullable MType(MType)> isa MVirtualType */
cltype = type_nit__MVirtualType.color;
idtype = type_nit__MVirtualType.id;
if(cltype >= var_bound->type->table_size) {
var35 = 0;
} else {
var35 = var_bound->type->type_table[cltype] == idtype;
}
if (var35){
var36 = NEW_standard__Array(&type_standard__Array__nit__MVirtualType);
var37 = 1;
{
standard___standard__Array___with_capacity(var36, var37); /* Direct call array#Array#with_capacity on <var36:Array[MVirtualType]>*/
}
var_ = var36;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:ATypePropdef> */
var40 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:ATypePropdef> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
if (var38 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1258);
show_backtrace(1);
} else {
{ /* Inline model#MPropDef#mproperty (var38) on <var38:nullable MPropDef(nullable MVirtualTypeDef)> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var43 = var38->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var38:nullable MPropDef(nullable MVirtualTypeDef)> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline model#MVirtualTypeProp#mvirtualtype (var41) on <var41:MProperty(MVirtualTypeProp)> */
var46 = var41->attrs[COLOR_nit__model__MVirtualTypeProp___mvirtualtype].val; /* _mvirtualtype on <var41:MProperty(MVirtualTypeProp)> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mvirtualtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1992);
show_backtrace(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var44); /* Direct call array#AbstractArray#push on <var_:Array[MVirtualType]>*/
}
var_seen = var_;
for(;;) {
{
var47 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__has(var_seen, var_bound);
}
if (var47){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_seen, var_bound); /* Direct call array#Array#add on <var_seen:Array[MVirtualType]>*/
}
if (varonce) {
var48 = varonce;
} else {
var49 = "Error: circularity of virtual type definition: ";
var50 = 47;
var51 = standard___standard__NativeString___to_s_with_length(var49, var50);
var48 = var51;
varonce = var48;
}
if (varonce52) {
var53 = varonce52;
} else {
var54 = " -> ";
var55 = 4;
var56 = standard___standard__NativeString___to_s_with_length(var54, var55);
var53 = var56;
varonce52 = var53;
}
{
var57 = standard__string___Collection___join(var_seen, var53);
}
var58 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var58 = array_instance Array[Object] */
var59 = 2;
var60 = NEW_standard__NativeArray(var59, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var60)->values[0] = (val*) var48;
((struct instance_standard__NativeArray*)var60)->values[1] = (val*) var57;
{
((void (*)(val* self, val* p0, long p1))(var58->class->vft[COLOR_standard__array__Array__with_native]))(var58, var60, var59) /* with_native on <var58:Array[Object]>*/;
}
}
{
var61 = ((val* (*)(val* self))(var58->class->vft[COLOR_standard__string__Object__to_s]))(var58) /* to_s on <var58:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, self, var61); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_seen, var_bound); /* Direct call array#Array#add on <var_seen:Array[MVirtualType]>*/
}
{
var62 = nit___nit__MVirtualType___MType__lookup_bound(var_bound, var_mmodule, var_anchor);
}
var_next = var62;
/* <var_next:MType> isa MVirtualType */
cltype64 = type_nit__MVirtualType.color;
idtype65 = type_nit__MVirtualType.id;
if(cltype64 >= var_next->type->table_size) {
var63 = 0;
} else {
var63 = var_next->type->type_table[cltype64] == idtype65;
}
var66 = !var63;
if (var66){
goto BREAK_label;
} else {
}
var_bound = var_next;
}
BREAK_label: (void)0;
} else {
}
{
{ /* Inline model#MVirtualTypeDef#bound (var_mpropdef) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var69 = var_mpropdef->attrs[COLOR_nit__model__MVirtualTypeDef___bound].val; /* _bound on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var67 = var69;
RET_LABEL68:(void)0;
}
}
if (unlikely(var67 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1273);
show_backtrace(1);
}
var_bound = var67;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var72 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
if (unlikely(var72 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
{
var73 = nit___nit__MProperty___lookup_super_definitions(var70, var_mmodule, var_anchor);
}
var_74 = var73;
{
var75 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_74);
}
var_76 = var75;
for(;;) {
{
var77 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_76);
}
if (var77){
{
var78 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_76);
}
var_p = var78;
{
{ /* Inline model#MVirtualTypeDef#bound (var_p) on <var_p:MVirtualTypeDef> */
var81 = var_p->attrs[COLOR_nit__model__MVirtualTypeDef___bound].val; /* _bound on <var_p:MVirtualTypeDef> */
var79 = var81;
RET_LABEL80:(void)0;
}
}
var_supbound = var79;
var82 = NULL;
if (var_supbound == NULL) {
var83 = 1; /* is null */
} else {
var83 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_supbound,var82) on <var_supbound:nullable MType> */
var_other = var82;
{
{ /* Inline kernel#Object#is_same_instance (var_supbound,var_other) on <var_supbound:nullable MType(MType)> */
var88 = var_supbound == var_other;
var86 = var88;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
}
var84 = var86;
goto RET_LABEL85;
RET_LABEL85:(void)0;
}
var83 = var84;
}
if (var83){
goto BREAK_label89;
} else {
}
{
{ /* Inline model#MVirtualTypeDef#is_fixed (var_p) on <var_p:MVirtualTypeDef> */
var92 = var_p->attrs[COLOR_nit__model__MVirtualTypeDef___is_fixed].s; /* _is_fixed on <var_p:MVirtualTypeDef> */
var90 = var92;
RET_LABEL91:(void)0;
}
}
if (var90){
if (varonce93) {
var94 = varonce93;
} else {
var95 = "Redef Error: Virtual type ";
var96 = 26;
var97 = standard___standard__NativeString___to_s_with_length(var95, var96);
var94 = var97;
varonce93 = var94;
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var100 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
if (unlikely(var100 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var98 = var100;
RET_LABEL99:(void)0;
}
}
if (varonce101) {
var102 = varonce101;
} else {
var103 = " is fixed in super-class ";
var104 = 25;
var105 = standard___standard__NativeString___to_s_with_length(var103, var104);
var102 = var105;
varonce101 = var102;
}
{
{ /* Inline model#MPropDef#mclassdef (var_p) on <var_p:MVirtualTypeDef> */
var108 = var_p->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_p:MVirtualTypeDef> */
if (unlikely(var108 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var106 = var108;
RET_LABEL107:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var106) on <var106:MClassDef> */
var111 = var106->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var106:MClassDef> */
if (unlikely(var111 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var109 = var111;
RET_LABEL110:(void)0;
}
}
var112 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var112 = array_instance Array[Object] */
var113 = 4;
var114 = NEW_standard__NativeArray(var113, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var114)->values[0] = (val*) var94;
((struct instance_standard__NativeArray*)var114)->values[1] = (val*) var98;
((struct instance_standard__NativeArray*)var114)->values[2] = (val*) var102;
((struct instance_standard__NativeArray*)var114)->values[3] = (val*) var109;
{
((void (*)(val* self, val* p0, long p1))(var112->class->vft[COLOR_standard__array__Array__with_native]))(var112, var114, var113) /* with_native on <var112:Array[Object]>*/;
}
}
{
var115 = ((val* (*)(val* self))(var112->class->vft[COLOR_standard__string__Object__to_s]))(var112) /* to_s on <var112:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, self, var115); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label89;
} else {
}
{
{ /* Inline model#MPropDef#mclassdef (var_p) on <var_p:MVirtualTypeDef> */
var118 = var_p->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_p:MVirtualTypeDef> */
if (unlikely(var118 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var116 = var118;
RET_LABEL117:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var116) on <var116:MClassDef> */
var121 = var116->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var116:MClassDef> */
if (unlikely(var121 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var119 = var121;
RET_LABEL120:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var124 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var124 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var122 = var124;
RET_LABEL123:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var119,var122) on <var119:MClass> */
var_other = var122;
{
{ /* Inline kernel#Object#is_same_instance (var119,var_other) on <var119:MClass> */
var129 = var119 == var_other;
var127 = var129;
goto RET_LABEL128;
RET_LABEL128:(void)0;
}
}
var125 = var127;
goto RET_LABEL126;
RET_LABEL126:(void)0;
}
}
if (var125){
{
{ /* Inline parser_nodes#ATypePropdef#n_type (self) on <self:ATypePropdef> */
var132 = self->attrs[COLOR_nit__parser_nodes__ATypePropdef___n_type].val; /* _n_type on <self:ATypePropdef> */
if (unlikely(var132 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1325);
show_backtrace(1);
}
var130 = var132;
RET_LABEL131:(void)0;
}
}
if (varonce133) {
var134 = varonce133;
} else {
var135 = "refine-type";
var136 = 11;
var137 = standard___standard__NativeString___to_s_with_length(var135, var136);
var134 = var137;
varonce133 = var134;
}
if (varonce138) {
var139 = varonce138;
} else {
var140 = "Redef Error: a virtual type cannot be refined.";
var141 = 46;
var142 = standard___standard__NativeString___to_s_with_length(var140, var141);
var139 = var142;
varonce138 = var139;
}
{
nit___nit__ModelBuilder___warning(var_modelbuilder, var130, var134, var139); /* Direct call modelbuilder_base#ModelBuilder#warning on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label89;
} else {
}
{
var143 = nit___nit__MType___is_subtype(var_bound, var_mmodule, var_anchor, var_supbound);
}
var144 = !var143;
if (var144){
{
{ /* Inline parser_nodes#ATypePropdef#n_type (self) on <self:ATypePropdef> */
var147 = self->attrs[COLOR_nit__parser_nodes__ATypePropdef___n_type].val; /* _n_type on <self:ATypePropdef> */
if (unlikely(var147 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1325);
show_backtrace(1);
}
var145 = var147;
RET_LABEL146:(void)0;
}
}
if (varonce148) {
var149 = varonce148;
} else {
var150 = "Redef Error: Wrong bound type. Found ";
var151 = 37;
var152 = standard___standard__NativeString___to_s_with_length(var150, var151);
var149 = var152;
varonce148 = var149;
}
if (varonce153) {
var154 = varonce153;
} else {
var155 = ", expected a subtype of ";
var156 = 24;
var157 = standard___standard__NativeString___to_s_with_length(var155, var156);
var154 = var157;
varonce153 = var154;
}
if (varonce158) {
var159 = varonce158;
} else {
var160 = ", as in ";
var161 = 8;
var162 = standard___standard__NativeString___to_s_with_length(var160, var161);
var159 = var162;
varonce158 = var159;
}
if (varonce163) {
var164 = varonce163;
} else {
var165 = ".";
var166 = 1;
var167 = standard___standard__NativeString___to_s_with_length(var165, var166);
var164 = var167;
varonce163 = var164;
}
var168 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var168 = array_instance Array[Object] */
var169 = 7;
var170 = NEW_standard__NativeArray(var169, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var170)->values[0] = (val*) var149;
((struct instance_standard__NativeArray*)var170)->values[1] = (val*) var_bound;
((struct instance_standard__NativeArray*)var170)->values[2] = (val*) var154;
((struct instance_standard__NativeArray*)var170)->values[3] = (val*) var_supbound;
((struct instance_standard__NativeArray*)var170)->values[4] = (val*) var159;
((struct instance_standard__NativeArray*)var170)->values[5] = (val*) var_p;
((struct instance_standard__NativeArray*)var170)->values[6] = (val*) var164;
{
((void (*)(val* self, val* p0, long p1))(var168->class->vft[COLOR_standard__array__Array__with_native]))(var168, var170, var169) /* with_native on <var168:Array[Object]>*/;
}
}
{
var171 = ((val* (*)(val* self))(var168->class->vft[COLOR_standard__string__Object__to_s]))(var168) /* to_s on <var168:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, var145, var171); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label89;
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_76); /* Direct call array#ArrayIterator#next on <var_76:ArrayIterator[MVirtualTypeDef]>*/
}
} else {
goto BREAK_label89;
}
}
BREAK_label89: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_76) on <var_76:ArrayIterator[MVirtualTypeDef]> */
RET_LABEL172:(void)0;
}
}
RET_LABEL:;
}
