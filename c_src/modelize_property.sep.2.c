#include "modelize_property.sep.0.h"
/* method modelize_property#AAttrPropdef#build_property for (self: AAttrPropdef, ModelBuilder, MClassDef) */
void modelize_property__AAttrPropdef__build_property(val* self, val* p0, val* p1) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var /* : MClass */;
val* var2 /* : MClass */;
val* var_mclass /* var mclass: MClass */;
val* var3 /* : nullable TAttrid */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : nullable TAttrid */;
val* var12 /* : String */;
val* var_name /* var name: String */;
val* var13 /* : nullable TId */;
val* var14 /* : String */;
short int var15 /* : Bool */;
val* var16 /* : MClassKind */;
val* var18 /* : MClassKind */;
val* var19 /* : MClassKind */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var_other23 /* var other: nullable Object */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var_ /* var : Bool */;
val* var27 /* : MClass */;
val* var29 /* : MClass */;
val* var30 /* : MClassKind */;
val* var32 /* : MClassKind */;
val* var33 /* : MClassKind */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
static val* varonce;
val* var40 /* : String */;
char* var41 /* : NativeString */;
long var42 /* : Int */;
val* var43 /* : FlatString */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
long var47 /* : Int */;
val* var48 /* : FlatString */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
long var52 /* : Int */;
val* var53 /* : FlatString */;
val* var54 /* : Array[Object] */;
long var55 /* : Int */;
val* var56 /* : NativeArray[Object] */;
val* var57 /* : String */;
val* var58 /* : MClassKind */;
val* var60 /* : MClassKind */;
val* var61 /* : MClassKind */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
short int var65 /* : Bool */;
short int var67 /* : Bool */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : NativeString */;
long var71 /* : Int */;
val* var72 /* : FlatString */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
long var76 /* : Int */;
val* var77 /* : FlatString */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
long var81 /* : Int */;
val* var82 /* : FlatString */;
val* var83 /* : Array[Object] */;
long var84 /* : Int */;
val* var85 /* : NativeArray[Object] */;
val* var86 /* : String */;
val* var87 /* : MClassKind */;
val* var89 /* : MClassKind */;
val* var90 /* : MClassKind */;
short int var91 /* : Bool */;
short int var92 /* : Bool */;
short int var94 /* : Bool */;
short int var96 /* : Bool */;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : NativeString */;
long var100 /* : Int */;
val* var101 /* : FlatString */;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : NativeString */;
long var105 /* : Int */;
val* var106 /* : FlatString */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
long var110 /* : Int */;
val* var111 /* : FlatString */;
val* var112 /* : Array[Object] */;
long var113 /* : Int */;
val* var114 /* : NativeArray[Object] */;
val* var115 /* : String */;
val* var116 /* : nullable TAttrid */;
val* var_nid /* var nid: nullable TAttrid */;
val* var117 /* : null */;
short int var118 /* : Bool */;
short int var119 /* : Bool */;
short int var121 /* : Bool */;
short int var122 /* : Bool */;
short int var123 /* : Bool */;
val* var124 /* : nullable MProperty */;
val* var_mprop /* var mprop: nullable MProperty */;
val* var125 /* : null */;
short int var126 /* : Bool */;
short int var127 /* : Bool */;
short int var129 /* : Bool */;
short int var131 /* : Bool */;
val* var132 /* : nullable AVisibility */;
val* var133 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: MVisibility */;
val* var134 /* : MAttribute */;
val* var135 /* : nullable TKwredef */;
short int var136 /* : Bool */;
short int var137 /* : Bool */;
short int var138 /* : Bool */;
short int var139 /* : Bool */;
int cltype;
int idtype;
val* var140 /* : nullable AVisibility */;
val* var141 /* : nullable TKwredef */;
short int var142 /* : Bool */;
short int var143 /* : Bool */;
short int var144 /* : Bool */;
val* var145 /* : Map[MProperty, APropdef] */;
val* var147 /* : Map[MProperty, APropdef] */;
val* var148 /* : MAttributeDef */;
val* var149 /* : Location */;
val* var_mpropdef /* var mpropdef: MAttributeDef */;
short int var150 /* : Bool */;
int cltype151;
int idtype152;
const struct type* type_struct;
const char* var_class_name;
short int var154 /* : Bool */;
int cltype155;
int idtype156;
const struct type* type_struct157;
const char* var_class_name158;
val* var159 /* : HashMap[MPropDef, APropdef] */;
val* var161 /* : HashMap[MPropDef, APropdef] */;
val* var162 /* : nullable AAble */;
val* var_nreadable /* var nreadable: nullable AAble */;
val* var163 /* : null */;
short int var164 /* : Bool */;
short int var165 /* : Bool */;
short int var167 /* : Bool */;
short int var168 /* : Bool */;
short int var169 /* : Bool */;
static val* varonce170;
val* var171 /* : String */;
char* var172 /* : NativeString */;
long var173 /* : Int */;
val* var174 /* : FlatString */;
val* var175 /* : nullable AAble */;
val* var_nwritable /* var nwritable: nullable AAble */;
val* var176 /* : null */;
short int var177 /* : Bool */;
short int var178 /* : Bool */;
short int var180 /* : Bool */;
short int var181 /* : Bool */;
short int var182 /* : Bool */;
static val* varonce183;
val* var184 /* : String */;
char* var185 /* : NativeString */;
long var186 /* : Int */;
val* var187 /* : FlatString */;
val* var188 /* : nullable TId */;
val* var_nid2 /* var nid2: TId */;
val* var189 /* : MAttribute */;
static val* varonce190;
val* var191 /* : String */;
char* var192 /* : NativeString */;
long var193 /* : Int */;
val* var194 /* : FlatString */;
val* var195 /* : String */;
val* var196 /* : MVisibility */;
val* var_mprop197 /* var mprop: MAttribute */;
val* var198 /* : MAttributeDef */;
val* var199 /* : Location */;
val* var_mpropdef200 /* var mpropdef: MAttributeDef */;
short int var201 /* : Bool */;
int cltype202;
int idtype203;
const struct type* type_struct204;
const char* var_class_name205;
short int var207 /* : Bool */;
int cltype208;
int idtype209;
const struct type* type_struct210;
const char* var_class_name211;
val* var212 /* : HashMap[MPropDef, APropdef] */;
val* var214 /* : HashMap[MPropDef, APropdef] */;
val* var_readname /* var readname: String */;
val* var215 /* : nullable MProperty */;
short int var216 /* : Bool */;
int cltype217;
int idtype218;
const char* var_class_name219;
val* var_mreadprop /* var mreadprop: nullable MMethod */;
val* var220 /* : null */;
short int var221 /* : Bool */;
short int var222 /* : Bool */;
short int var224 /* : Bool */;
short int var226 /* : Bool */;
val* var227 /* : nullable AVisibility */;
val* var228 /* : MVisibility */;
val* var_mvisibility229 /* var mvisibility: MVisibility */;
val* var230 /* : MMethod */;
val* var231 /* : nullable TKwredef */;
short int var232 /* : Bool */;
short int var233 /* : Bool */;
short int var234 /* : Bool */;
val* var235 /* : nullable TKwredef */;
short int var236 /* : Bool */;
short int var237 /* : Bool */;
short int var238 /* : Bool */;
val* var239 /* : nullable AVisibility */;
val* var240 /* : Map[MProperty, APropdef] */;
val* var242 /* : Map[MProperty, APropdef] */;
val* var243 /* : MMethodDef */;
val* var244 /* : Location */;
val* var_mreadpropdef /* var mreadpropdef: MMethodDef */;
val* var246 /* : HashMap[MPropDef, APropdef] */;
val* var248 /* : HashMap[MPropDef, APropdef] */;
val* var249 /* : nullable MDoc */;
val* var251 /* : nullable MDoc */;
static val* varonce253;
val* var254 /* : String */;
char* var255 /* : NativeString */;
long var256 /* : Int */;
val* var257 /* : FlatString */;
val* var258 /* : nullable AAnnotation */;
val* var_atlazy /* var atlazy: nullable AAnnotation */;
val* var259 /* : null */;
short int var260 /* : Bool */;
short int var261 /* : Bool */;
short int var263 /* : Bool */;
short int var264 /* : Bool */;
short int var265 /* : Bool */;
val* var266 /* : nullable AExpr */;
val* var267 /* : null */;
short int var268 /* : Bool */;
short int var269 /* : Bool */;
short int var271 /* : Bool */;
short int var273 /* : Bool */;
static val* varonce274;
val* var275 /* : String */;
char* var276 /* : NativeString */;
long var277 /* : Int */;
val* var278 /* : FlatString */;
short int var279 /* : Bool */;
val* var281 /* : MAttribute */;
static val* varonce282;
val* var283 /* : String */;
char* var284 /* : NativeString */;
long var285 /* : Int */;
val* var286 /* : FlatString */;
val* var287 /* : String */;
val* var288 /* : MVisibility */;
val* var_mlazyprop /* var mlazyprop: MAttribute */;
val* var289 /* : MAttributeDef */;
val* var290 /* : Location */;
val* var_mlazypropdef /* var mlazypropdef: MAttributeDef */;
static val* varonce292;
val* var293 /* : String */;
char* var294 /* : NativeString */;
long var295 /* : Int */;
val* var296 /* : FlatString */;
val* var297 /* : nullable AAnnotation */;
val* var_atreadonly /* var atreadonly: nullable AAnnotation */;
val* var298 /* : null */;
short int var299 /* : Bool */;
short int var300 /* : Bool */;
short int var302 /* : Bool */;
short int var303 /* : Bool */;
short int var304 /* : Bool */;
val* var305 /* : nullable AExpr */;
val* var306 /* : null */;
short int var307 /* : Bool */;
short int var308 /* : Bool */;
short int var310 /* : Bool */;
short int var312 /* : Bool */;
static val* varonce313;
val* var314 /* : String */;
char* var315 /* : NativeString */;
long var316 /* : Int */;
val* var317 /* : FlatString */;
static val* varonce318;
val* var319 /* : String */;
char* var320 /* : NativeString */;
long var321 /* : Int */;
val* var322 /* : FlatString */;
val* var323 /* : String */;
val* var_writename /* var writename: String */;
val* var324 /* : nullable AAble */;
val* var_nwritable325 /* var nwritable: nullable AAble */;
static val* varonce326;
val* var327 /* : String */;
char* var328 /* : NativeString */;
long var329 /* : Int */;
val* var330 /* : FlatString */;
val* var331 /* : nullable AAnnotation */;
val* var_atwritable /* var atwritable: nullable AAnnotation */;
val* var332 /* : null */;
short int var333 /* : Bool */;
short int var334 /* : Bool */;
short int var336 /* : Bool */;
short int var337 /* : Bool */;
short int var338 /* : Bool */;
val* var339 /* : ANodes[AAtArg] */;
val* var341 /* : ANodes[AAtArg] */;
short int var342 /* : Bool */;
short int var343 /* : Bool */;
val* var344 /* : String */;
val* var345 /* : nullable String */;
val* var346 /* : nullable MProperty */;
short int var347 /* : Bool */;
int cltype348;
int idtype349;
const char* var_class_name350;
val* var_mwriteprop /* var mwriteprop: nullable MMethod */;
val* var351 /* : null */;
val* var_nwkwredef /* var nwkwredef: nullable Token */;
val* var352 /* : null */;
short int var353 /* : Bool */;
short int var354 /* : Bool */;
short int var356 /* : Bool */;
short int var357 /* : Bool */;
short int var358 /* : Bool */;
val* var359 /* : nullable TKwredef */;
val* var360 /* : null */;
short int var361 /* : Bool */;
short int var362 /* : Bool */;
short int var364 /* : Bool */;
short int var365 /* : Bool */;
short int var366 /* : Bool */;
val* var367 /* : nullable TKwredef */;
val* var368 /* : null */;
short int var369 /* : Bool */;
short int var370 /* : Bool */;
short int var372 /* : Bool */;
short int var374 /* : Bool */;
val* var375 /* : null */;
short int var376 /* : Bool */;
short int var377 /* : Bool */;
short int var379 /* : Bool */;
short int var380 /* : Bool */;
short int var381 /* : Bool */;
val* var382 /* : nullable AVisibility */;
val* var383 /* : MVisibility */;
val* var_mvisibility384 /* var mvisibility: nullable Object */;
val* var385 /* : null */;
short int var386 /* : Bool */;
short int var387 /* : Bool */;
short int var389 /* : Bool */;
short int var390 /* : Bool */;
short int var391 /* : Bool */;
val* var392 /* : nullable AVisibility */;
val* var393 /* : MVisibility */;
val* var394 /* : MVisibility */;
val* var395 /* : MMethod */;
short int var396 /* : Bool */;
short int var397 /* : Bool */;
short int var398 /* : Bool */;
val* var399 /* : nullable Token */;
val* var400 /* : nullable TKwredef */;
short int var401 /* : Bool */;
short int var402 /* : Bool */;
short int var403 /* : Bool */;
val* var404 /* : null */;
short int var405 /* : Bool */;
short int var406 /* : Bool */;
short int var408 /* : Bool */;
short int var409 /* : Bool */;
short int var410 /* : Bool */;
val* var411 /* : nullable AVisibility */;
val* var412 /* : null */;
short int var413 /* : Bool */;
short int var414 /* : Bool */;
short int var416 /* : Bool */;
short int var417 /* : Bool */;
short int var418 /* : Bool */;
val* var419 /* : nullable AVisibility */;
val* var420 /* : Map[MProperty, APropdef] */;
val* var422 /* : Map[MProperty, APropdef] */;
val* var423 /* : MMethodDef */;
val* var424 /* : Location */;
val* var_mwritepropdef /* var mwritepropdef: MMethodDef */;
val* var426 /* : HashMap[MPropDef, APropdef] */;
val* var428 /* : HashMap[MPropDef, APropdef] */;
val* var429 /* : nullable MDoc */;
val* var431 /* : nullable MDoc */;
var_modelbuilder = p0;
var_mclassdef = p1;
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var2 = var_mclassdef->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 474);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_mclass = var;
{
var3 = parser_nodes__AAttrPropdef__n_id(self);
}
var4 = NULL;
if (var3 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var3,var4) on <var3:nullable TAttrid> */
var_other = var4;
{
var9 = ((short int (*)(val*, val*))(var3->class->vft[COLOR_kernel__Object___61d_61d]))(var3, var_other) /* == on <var3:nullable TAttrid(TAttrid)>*/;
var8 = var9;
}
var10 = !var8;
var6 = var10;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
{
var11 = parser_nodes__AAttrPropdef__n_id(self);
}
if (var11 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 668);
show_backtrace(1);
} else {
var12 = lexer_work__Token__text(var11);
}
var_name = var12;
} else {
{
var13 = parser_nodes__AAttrPropdef__n_id2(self);
}
if (var13 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 670);
show_backtrace(1);
} else {
var14 = lexer_work__Token__text(var13);
}
var_name = var14;
}
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:MClass> */
var18 = var_mclass->attrs[COLOR_model__MClass___kind].val; /* _kind on <var_mclass:MClass> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 355);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = model__Object__interface_kind(self);
}
{
{ /* Inline kernel#Object#== (var16,var19) on <var16:MClassKind> */
var_other23 = var19;
{
{ /* Inline kernel#Object#is_same_instance (var16,var_other23) on <var16:MClassKind> */
var26 = var16 == var_other23;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var21 = var24;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
var_ = var20;
if (var20){
var15 = var_;
} else {
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var29 = var_mclassdef->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 474);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var27) on <var27:MClass> */
var32 = var27->attrs[COLOR_model__MClass___kind].val; /* _kind on <var27:MClass> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 355);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
var33 = model__Object__enum_kind(self);
}
{
{ /* Inline kernel#Object#== (var30,var33) on <var30:MClassKind> */
var_other23 = var33;
{
{ /* Inline kernel#Object#is_same_instance (var30,var_other23) on <var30:MClassKind> */
var39 = var30 == var_other23;
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
var34 = var35;
}
var15 = var34;
}
if (var15){
if (varonce) {
var40 = varonce;
} else {
var41 = "Error: Attempt to define attribute ";
var42 = 35;
var43 = string__NativeString__to_s_with_length(var41, var42);
var40 = var43;
varonce = var40;
}
if (varonce44) {
var45 = varonce44;
} else {
var46 = " in the interface ";
var47 = 18;
var48 = string__NativeString__to_s_with_length(var46, var47);
var45 = var48;
varonce44 = var45;
}
if (varonce49) {
var50 = varonce49;
} else {
var51 = ".";
var52 = 1;
var53 = string__NativeString__to_s_with_length(var51, var52);
var50 = var53;
varonce49 = var50;
}
var54 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var54 = array_instance Array[Object] */
var55 = 5;
var56 = NEW_array__NativeArray(var55, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var56)->values[0] = (val*) var40;
((struct instance_array__NativeArray*)var56)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var56)->values[2] = (val*) var45;
((struct instance_array__NativeArray*)var56)->values[3] = (val*) var_mclass;
((struct instance_array__NativeArray*)var56)->values[4] = (val*) var50;
{
((void (*)(val*, val*, long))(var54->class->vft[COLOR_array__Array__with_native]))(var54, var56, var55) /* with_native on <var54:Array[Object]>*/;
}
}
{
var57 = ((val* (*)(val*))(var54->class->vft[COLOR_string__Object__to_s]))(var54) /* to_s on <var54:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, self, var57); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:MClass> */
var60 = var_mclass->attrs[COLOR_model__MClass___kind].val; /* _kind on <var_mclass:MClass> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 355);
show_backtrace(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
var61 = model__Object__enum_kind(self);
}
{
{ /* Inline kernel#Object#== (var58,var61) on <var58:MClassKind> */
var_other23 = var61;
{
{ /* Inline kernel#Object#is_same_instance (var58,var_other23) on <var58:MClassKind> */
var67 = var58 == var_other23;
var65 = var67;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
var63 = var65;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
var62 = var63;
}
if (var62){
if (varonce68) {
var69 = varonce68;
} else {
var70 = "Error: Attempt to define attribute ";
var71 = 35;
var72 = string__NativeString__to_s_with_length(var70, var71);
var69 = var72;
varonce68 = var69;
}
if (varonce73) {
var74 = varonce73;
} else {
var75 = " in the enum class ";
var76 = 19;
var77 = string__NativeString__to_s_with_length(var75, var76);
var74 = var77;
varonce73 = var74;
}
if (varonce78) {
var79 = varonce78;
} else {
var80 = ".";
var81 = 1;
var82 = string__NativeString__to_s_with_length(var80, var81);
var79 = var82;
varonce78 = var79;
}
var83 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var83 = array_instance Array[Object] */
var84 = 5;
var85 = NEW_array__NativeArray(var84, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var85)->values[0] = (val*) var69;
((struct instance_array__NativeArray*)var85)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var85)->values[2] = (val*) var74;
((struct instance_array__NativeArray*)var85)->values[3] = (val*) var_mclass;
((struct instance_array__NativeArray*)var85)->values[4] = (val*) var79;
{
((void (*)(val*, val*, long))(var83->class->vft[COLOR_array__Array__with_native]))(var83, var85, var84) /* with_native on <var83:Array[Object]>*/;
}
}
{
var86 = ((val* (*)(val*))(var83->class->vft[COLOR_string__Object__to_s]))(var83) /* to_s on <var83:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, self, var86); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:MClass> */
var89 = var_mclass->attrs[COLOR_model__MClass___kind].val; /* _kind on <var_mclass:MClass> */
if (unlikely(var89 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 355);
show_backtrace(1);
}
var87 = var89;
RET_LABEL88:(void)0;
}
}
{
var90 = model__Object__extern_kind(self);
}
{
{ /* Inline kernel#Object#== (var87,var90) on <var87:MClassKind> */
var_other23 = var90;
{
{ /* Inline kernel#Object#is_same_instance (var87,var_other23) on <var87:MClassKind> */
var96 = var87 == var_other23;
var94 = var96;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
}
var92 = var94;
goto RET_LABEL93;
RET_LABEL93:(void)0;
}
var91 = var92;
}
if (var91){
if (varonce97) {
var98 = varonce97;
} else {
var99 = "Error: Attempt to define attribute ";
var100 = 35;
var101 = string__NativeString__to_s_with_length(var99, var100);
var98 = var101;
varonce97 = var98;
}
if (varonce102) {
var103 = varonce102;
} else {
var104 = " in the extern class ";
var105 = 21;
var106 = string__NativeString__to_s_with_length(var104, var105);
var103 = var106;
varonce102 = var103;
}
if (varonce107) {
var108 = varonce107;
} else {
var109 = ".";
var110 = 1;
var111 = string__NativeString__to_s_with_length(var109, var110);
var108 = var111;
varonce107 = var108;
}
var112 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var112 = array_instance Array[Object] */
var113 = 5;
var114 = NEW_array__NativeArray(var113, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var114)->values[0] = (val*) var98;
((struct instance_array__NativeArray*)var114)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var114)->values[2] = (val*) var103;
((struct instance_array__NativeArray*)var114)->values[3] = (val*) var_mclass;
((struct instance_array__NativeArray*)var114)->values[4] = (val*) var108;
{
((void (*)(val*, val*, long))(var112->class->vft[COLOR_array__Array__with_native]))(var112, var114, var113) /* with_native on <var112:Array[Object]>*/;
}
}
{
var115 = ((val* (*)(val*))(var112->class->vft[COLOR_string__Object__to_s]))(var112) /* to_s on <var112:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, self, var115); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
}
}
{
var116 = parser_nodes__AAttrPropdef__n_id(self);
}
var_nid = var116;
var117 = NULL;
if (var_nid == NULL) {
var118 = 0; /* is null */
} else {
var118 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nid,var117) on <var_nid:nullable TAttrid> */
var_other = var117;
{
var122 = ((short int (*)(val*, val*))(var_nid->class->vft[COLOR_kernel__Object___61d_61d]))(var_nid, var_other) /* == on <var_nid:nullable TAttrid(TAttrid)>*/;
var121 = var122;
}
var123 = !var121;
var119 = var123;
goto RET_LABEL120;
RET_LABEL120:(void)0;
}
var118 = var119;
}
if (var118){
{
var124 = modelbuilder__ModelBuilder__try_get_mproperty_by_name(var_modelbuilder, var_nid, var_mclassdef, var_name);
}
var_mprop = var124;
var125 = NULL;
if (var_mprop == NULL) {
var126 = 1; /* is null */
} else {
var126 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mprop,var125) on <var_mprop:nullable MProperty> */
var_other23 = var125;
{
{ /* Inline kernel#Object#is_same_instance (var_mprop,var_other23) on <var_mprop:nullable MProperty(MProperty)> */
var131 = var_mprop == var_other23;
var129 = var131;
goto RET_LABEL130;
RET_LABEL130:(void)0;
}
}
var127 = var129;
goto RET_LABEL128;
RET_LABEL128:(void)0;
}
var126 = var127;
}
if (var126){
{
var132 = parser_nodes__APropdef__n_visibility(self);
}
{
var133 = modelize_property__APropdef__new_property_visibility(self, var_modelbuilder, var_mclassdef, var132);
}
var_mvisibility = var133;
var134 = NEW_model__MAttribute(&type_model__MAttribute);
{
model__MAttribute__init(var134, var_mclassdef, var_name, var_mvisibility); /* Direct call model#MAttribute#init on <var134:MAttribute>*/
}
var_mprop = var134;
{
var135 = parser_nodes__APropdef__n_kwredef(self);
}
var136 = 0;
{
var137 = modelize_property__APropdef__check_redef_keyword(self, var_modelbuilder, var_mclassdef, var135, var136, var_mprop);
}
var138 = !var137;
if (var138){
goto RET_LABEL;
} else {
}
} else {
/* <var_mprop:nullable MProperty(MProperty)> isa MAttribute */
cltype = type_model__MAttribute.color;
idtype = type_model__MAttribute.id;
if(cltype >= var_mprop->type->table_size) {
var139 = 0;
} else {
var139 = var_mprop->type->type_table[cltype] == idtype;
}
if (unlikely(!var139)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 690);
show_backtrace(1);
}
{
var140 = parser_nodes__APropdef__n_visibility(self);
}
{
modelize_property__APropdef__check_redef_property_visibility(self, var_modelbuilder, var140, var_mprop); /* Direct call modelize_property#APropdef#check_redef_property_visibility on <self:AAttrPropdef>*/
}
{
var141 = parser_nodes__APropdef__n_kwredef(self);
}
var142 = 1;
{
var143 = modelize_property__APropdef__check_redef_keyword(self, var_modelbuilder, var_mclassdef, var141, var142, var_mprop);
}
var144 = !var143;
if (var144){
goto RET_LABEL;
} else {
}
}
{
{ /* Inline modelize_property#MClassDef#mprop2npropdef (var_mclassdef) on <var_mclassdef:MClassDef> */
var147 = var_mclassdef->attrs[COLOR_modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <var_mclassdef:MClassDef> */
if (unlikely(var147 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 252);
show_backtrace(1);
}
var145 = var147;
RET_LABEL146:(void)0;
}
}
{
((void (*)(val*, val*, val*))(var145->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var145, var_mprop, self) /* []= on <var145:Map[MProperty, APropdef]>*/;
}
var148 = NEW_model__MAttributeDef(&type_model__MAttributeDef);
{
var149 = parser_nodes__ANode__location(self);
}
{
model__MAttributeDef__init(var148, var_mclassdef, var_mprop, var149); /* Direct call model#MAttributeDef#init on <var148:MAttributeDef>*/
}
var_mpropdef = var148;
/* <var_mpropdef:MAttributeDef> isa nullable MPROPDEF */
type_struct = self->type->resolution_table->types[COLOR_nullable_parser_nodes__APropdef_VTMPROPDEF];
cltype151 = type_struct->color;
idtype152 = type_struct->id;
if(cltype151 >= var_mpropdef->type->table_size) {
var150 = 0;
} else {
var150 = var_mpropdef->type->type_table[cltype151] == idtype152;
}
if (unlikely(!var150)) {
var_class_name = var_mpropdef == NULL ? "null" : var_mpropdef->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 697);
show_backtrace(1);
}
{
{ /* Inline modelize_property#APropdef#mpropdef= (self,var_mpropdef) on <self:AAttrPropdef> */
/* Covariant cast for argument 0 (mpropdef) <var_mpropdef:MAttributeDef> isa nullable MPROPDEF */
/* <var_mpropdef:MAttributeDef> isa nullable MPROPDEF */
type_struct157 = self->type->resolution_table->types[COLOR_nullable_parser_nodes__APropdef_VTMPROPDEF];
cltype155 = type_struct157->color;
idtype156 = type_struct157->id;
if(cltype155 >= var_mpropdef->type->table_size) {
var154 = 0;
} else {
var154 = var_mpropdef->type->type_table[cltype155] == idtype156;
}
if (unlikely(!var154)) {
var_class_name158 = var_mpropdef == NULL ? "null" : var_mpropdef->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name158);
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 283);
show_backtrace(1);
}
self->attrs[COLOR_modelize_property__APropdef___mpropdef].val = var_mpropdef; /* _mpropdef on <self:AAttrPropdef> */
RET_LABEL153:(void)0;
}
}
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var161 = var_modelbuilder->attrs[COLOR_modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var161 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 39);
show_backtrace(1);
}
var159 = var161;
RET_LABEL160:(void)0;
}
}
{
hash_collection__HashMap___91d_93d_61d(var159, var_mpropdef, self); /* Direct call hash_collection#HashMap#[]= on <var159:HashMap[MPropDef, APropdef]>*/
}
{
modelize_property__APropdef__set_doc(self, var_mpropdef); /* Direct call modelize_property#APropdef#set_doc on <self:AAttrPropdef>*/
}
{
var162 = parser_nodes__AAttrPropdef__n_readable(self);
}
var_nreadable = var162;
var163 = NULL;
if (var_nreadable == NULL) {
var164 = 0; /* is null */
} else {
var164 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nreadable,var163) on <var_nreadable:nullable AAble> */
var_other = var163;
{
var168 = ((short int (*)(val*, val*))(var_nreadable->class->vft[COLOR_kernel__Object___61d_61d]))(var_nreadable, var_other) /* == on <var_nreadable:nullable AAble(AAble)>*/;
var167 = var168;
}
var169 = !var167;
var165 = var169;
goto RET_LABEL166;
RET_LABEL166:(void)0;
}
var164 = var165;
}
if (var164){
if (varonce170) {
var171 = varonce170;
} else {
var172 = "Error: old-style getter no more supported";
var173 = 41;
var174 = string__NativeString__to_s_with_length(var172, var173);
var171 = var174;
varonce170 = var171;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, var_nreadable, var171); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
{
var175 = parser_nodes__AAttrPropdef__n_writable(self);
}
var_nwritable = var175;
var176 = NULL;
if (var_nwritable == NULL) {
var177 = 0; /* is null */
} else {
var177 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nwritable,var176) on <var_nwritable:nullable AAble> */
var_other = var176;
{
var181 = ((short int (*)(val*, val*))(var_nwritable->class->vft[COLOR_kernel__Object___61d_61d]))(var_nwritable, var_other) /* == on <var_nwritable:nullable AAble(AAble)>*/;
var180 = var181;
}
var182 = !var180;
var178 = var182;
goto RET_LABEL179;
RET_LABEL179:(void)0;
}
var177 = var178;
}
if (var177){
if (varonce183) {
var184 = varonce183;
} else {
var185 = "Error: old-style setter no more supported";
var186 = 41;
var187 = string__NativeString__to_s_with_length(var185, var186);
var184 = var187;
varonce183 = var184;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, var_nwritable, var184); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
} else {
{
var188 = parser_nodes__AAttrPropdef__n_id2(self);
}
if (unlikely(var188 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 707);
show_backtrace(1);
}
var_nid2 = var188;
var189 = NEW_model__MAttribute(&type_model__MAttribute);
if (varonce190) {
var191 = varonce190;
} else {
var192 = "_";
var193 = 1;
var194 = string__NativeString__to_s_with_length(var192, var193);
var191 = var194;
varonce190 = var191;
}
{
var195 = string__FlatString___43d(var191, var_name);
}
{
var196 = model_base__Object__private_visibility(self);
}
{
model__MAttribute__init(var189, var_mclassdef, var195, var196); /* Direct call model#MAttribute#init on <var189:MAttribute>*/
}
var_mprop197 = var189;
var198 = NEW_model__MAttributeDef(&type_model__MAttributeDef);
{
var199 = parser_nodes__ANode__location(self);
}
{
model__MAttributeDef__init(var198, var_mclassdef, var_mprop197, var199); /* Direct call model#MAttributeDef#init on <var198:MAttributeDef>*/
}
var_mpropdef200 = var198;
/* <var_mpropdef200:MAttributeDef> isa nullable MPROPDEF */
type_struct204 = self->type->resolution_table->types[COLOR_nullable_parser_nodes__APropdef_VTMPROPDEF];
cltype202 = type_struct204->color;
idtype203 = type_struct204->id;
if(cltype202 >= var_mpropdef200->type->table_size) {
var201 = 0;
} else {
var201 = var_mpropdef200->type->type_table[cltype202] == idtype203;
}
if (unlikely(!var201)) {
var_class_name205 = var_mpropdef200 == NULL ? "null" : var_mpropdef200->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name205);
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 710);
show_backtrace(1);
}
{
{ /* Inline modelize_property#APropdef#mpropdef= (self,var_mpropdef200) on <self:AAttrPropdef> */
/* Covariant cast for argument 0 (mpropdef) <var_mpropdef200:MAttributeDef> isa nullable MPROPDEF */
/* <var_mpropdef200:MAttributeDef> isa nullable MPROPDEF */
type_struct210 = self->type->resolution_table->types[COLOR_nullable_parser_nodes__APropdef_VTMPROPDEF];
cltype208 = type_struct210->color;
idtype209 = type_struct210->id;
if(cltype208 >= var_mpropdef200->type->table_size) {
var207 = 0;
} else {
var207 = var_mpropdef200->type->type_table[cltype208] == idtype209;
}
if (unlikely(!var207)) {
var_class_name211 = var_mpropdef200 == NULL ? "null" : var_mpropdef200->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name211);
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 283);
show_backtrace(1);
}
self->attrs[COLOR_modelize_property__APropdef___mpropdef].val = var_mpropdef200; /* _mpropdef on <self:AAttrPropdef> */
RET_LABEL206:(void)0;
}
}
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var214 = var_modelbuilder->attrs[COLOR_modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var214 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 39);
show_backtrace(1);
}
var212 = var214;
RET_LABEL213:(void)0;
}
}
{
hash_collection__HashMap___91d_93d_61d(var212, var_mpropdef200, self); /* Direct call hash_collection#HashMap#[]= on <var212:HashMap[MPropDef, APropdef]>*/
}
{
modelize_property__APropdef__set_doc(self, var_mpropdef200); /* Direct call modelize_property#APropdef#set_doc on <self:AAttrPropdef>*/
}
var_readname = var_name;
{
var215 = modelbuilder__ModelBuilder__try_get_mproperty_by_name(var_modelbuilder, var_nid2, var_mclassdef, var_readname);
}
/* <var215:nullable MProperty> isa nullable MMethod */
cltype217 = type_nullable_model__MMethod.color;
idtype218 = type_nullable_model__MMethod.id;
if(var215 == NULL) {
var216 = 1;
} else {
if(cltype217 >= var215->type->table_size) {
var216 = 0;
} else {
var216 = var215->type->type_table[cltype217] == idtype218;
}
}
if (unlikely(!var216)) {
var_class_name219 = var215 == NULL ? "null" : var215->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MMethod", var_class_name219);
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 715);
show_backtrace(1);
}
var_mreadprop = var215;
var220 = NULL;
if (var_mreadprop == NULL) {
var221 = 1; /* is null */
} else {
var221 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mreadprop,var220) on <var_mreadprop:nullable MMethod> */
var_other23 = var220;
{
{ /* Inline kernel#Object#is_same_instance (var_mreadprop,var_other23) on <var_mreadprop:nullable MMethod(MMethod)> */
var226 = var_mreadprop == var_other23;
var224 = var226;
goto RET_LABEL225;
RET_LABEL225:(void)0;
}
}
var222 = var224;
goto RET_LABEL223;
RET_LABEL223:(void)0;
}
var221 = var222;
}
if (var221){
{
var227 = parser_nodes__APropdef__n_visibility(self);
}
{
var228 = modelize_property__APropdef__new_property_visibility(self, var_modelbuilder, var_mclassdef, var227);
}
var_mvisibility229 = var228;
var230 = NEW_model__MMethod(&type_model__MMethod);
{
model__MMethod__init(var230, var_mclassdef, var_readname, var_mvisibility229); /* Direct call model#MMethod#init on <var230:MMethod>*/
}
var_mreadprop = var230;
{
var231 = parser_nodes__APropdef__n_kwredef(self);
}
var232 = 0;
{
var233 = modelize_property__APropdef__check_redef_keyword(self, var_modelbuilder, var_mclassdef, var231, var232, var_mreadprop);
}
var234 = !var233;
if (var234){
goto RET_LABEL;
} else {
}
} else {
{
var235 = parser_nodes__APropdef__n_kwredef(self);
}
var236 = 1;
{
var237 = modelize_property__APropdef__check_redef_keyword(self, var_modelbuilder, var_mclassdef, var235, var236, var_mreadprop);
}
var238 = !var237;
if (var238){
goto RET_LABEL;
} else {
}
{
var239 = parser_nodes__APropdef__n_visibility(self);
}
{
modelize_property__APropdef__check_redef_property_visibility(self, var_modelbuilder, var239, var_mreadprop); /* Direct call modelize_property#APropdef#check_redef_property_visibility on <self:AAttrPropdef>*/
}
}
{
{ /* Inline modelize_property#MClassDef#mprop2npropdef (var_mclassdef) on <var_mclassdef:MClassDef> */
var242 = var_mclassdef->attrs[COLOR_modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <var_mclassdef:MClassDef> */
if (unlikely(var242 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 252);
show_backtrace(1);
}
var240 = var242;
RET_LABEL241:(void)0;
}
}
{
((void (*)(val*, val*, val*))(var240->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var240, var_mreadprop, self) /* []= on <var240:Map[MProperty, APropdef]>*/;
}
var243 = NEW_model__MMethodDef(&type_model__MMethodDef);
{
var244 = parser_nodes__ANode__location(self);
}
{
model__MMethodDef__init(var243, var_mclassdef, var_mreadprop, var244); /* Direct call model#MMethodDef#init on <var243:MMethodDef>*/
}
var_mreadpropdef = var243;
{
{ /* Inline modelize_property#AAttrPropdef#mreadpropdef= (self,var_mreadpropdef) on <self:AAttrPropdef> */
self->attrs[COLOR_modelize_property__AAttrPropdef___mreadpropdef].val = var_mreadpropdef; /* _mreadpropdef on <self:AAttrPropdef> */
RET_LABEL245:(void)0;
}
}
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var248 = var_modelbuilder->attrs[COLOR_modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var248 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 39);
show_backtrace(1);
}
var246 = var248;
RET_LABEL247:(void)0;
}
}
{
hash_collection__HashMap___91d_93d_61d(var246, var_mreadpropdef, self); /* Direct call hash_collection#HashMap#[]= on <var246:HashMap[MPropDef, APropdef]>*/
}
{
{ /* Inline mdoc#MEntity#mdoc (var_mpropdef200) on <var_mpropdef200:MAttributeDef> */
var251 = var_mpropdef200->attrs[COLOR_mdoc__MEntity___mdoc].val; /* _mdoc on <var_mpropdef200:MAttributeDef> */
var249 = var251;
RET_LABEL250:(void)0;
}
}
{
{ /* Inline mdoc#MEntity#mdoc= (var_mreadpropdef,var249) on <var_mreadpropdef:MMethodDef> */
var_mreadpropdef->attrs[COLOR_mdoc__MEntity___mdoc].val = var249; /* _mdoc on <var_mreadpropdef:MMethodDef> */
RET_LABEL252:(void)0;
}
}
if (varonce253) {
var254 = varonce253;
} else {
var255 = "lazy";
var256 = 4;
var257 = string__NativeString__to_s_with_length(var255, var256);
var254 = var257;
varonce253 = var254;
}
{
var258 = annotation__Prod__get_single_annotation(self, var254, var_modelbuilder);
}
var_atlazy = var258;
var259 = NULL;
if (var_atlazy == NULL) {
var260 = 0; /* is null */
} else {
var260 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atlazy,var259) on <var_atlazy:nullable AAnnotation> */
var_other = var259;
{
var264 = ((short int (*)(val*, val*))(var_atlazy->class->vft[COLOR_kernel__Object___61d_61d]))(var_atlazy, var_other) /* == on <var_atlazy:nullable AAnnotation(AAnnotation)>*/;
var263 = var264;
}
var265 = !var263;
var261 = var265;
goto RET_LABEL262;
RET_LABEL262:(void)0;
}
var260 = var261;
}
if (var260){
{
var266 = parser_nodes__AAttrPropdef__n_expr(self);
}
var267 = NULL;
if (var266 == NULL) {
var268 = 1; /* is null */
} else {
var268 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var266,var267) on <var266:nullable AExpr> */
var_other23 = var267;
{
{ /* Inline kernel#Object#is_same_instance (var266,var_other23) on <var266:nullable AExpr(AExpr)> */
var273 = var266 == var_other23;
var271 = var273;
goto RET_LABEL272;
RET_LABEL272:(void)0;
}
}
var269 = var271;
goto RET_LABEL270;
RET_LABEL270:(void)0;
}
var268 = var269;
}
if (var268){
if (varonce274) {
var275 = varonce274;
} else {
var276 = "Error: a lazy attribute needs a value";
var277 = 37;
var278 = string__NativeString__to_s_with_length(var276, var277);
var275 = var278;
varonce274 = var275;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, var_atlazy, var275); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
var279 = 1;
{
{ /* Inline modelize_property#AAttrPropdef#is_lazy= (self,var279) on <self:AAttrPropdef> */
self->attrs[COLOR_modelize_property__AAttrPropdef___is_lazy].s = var279; /* _is_lazy on <self:AAttrPropdef> */
RET_LABEL280:(void)0;
}
}
var281 = NEW_model__MAttribute(&type_model__MAttribute);
if (varonce282) {
var283 = varonce282;
} else {
var284 = "lazy _";
var285 = 6;
var286 = string__NativeString__to_s_with_length(var284, var285);
var283 = var286;
varonce282 = var283;
}
{
var287 = string__FlatString___43d(var283, var_name);
}
{
var288 = model_base__Object__none_visibility(self);
}
{
model__MAttribute__init(var281, var_mclassdef, var287, var288); /* Direct call model#MAttribute#init on <var281:MAttribute>*/
}
var_mlazyprop = var281;
var289 = NEW_model__MAttributeDef(&type_model__MAttributeDef);
{
var290 = parser_nodes__ANode__location(self);
}
{
model__MAttributeDef__init(var289, var_mclassdef, var_mlazyprop, var290); /* Direct call model#MAttributeDef#init on <var289:MAttributeDef>*/
}
var_mlazypropdef = var289;
{
{ /* Inline modelize_property#AAttrPropdef#mlazypropdef= (self,var_mlazypropdef) on <self:AAttrPropdef> */
self->attrs[COLOR_modelize_property__AAttrPropdef___mlazypropdef].val = var_mlazypropdef; /* _mlazypropdef on <self:AAttrPropdef> */
RET_LABEL291:(void)0;
}
}
} else {
}
if (varonce292) {
var293 = varonce292;
} else {
var294 = "readonly";
var295 = 8;
var296 = string__NativeString__to_s_with_length(var294, var295);
var293 = var296;
varonce292 = var293;
}
{
var297 = annotation__Prod__get_single_annotation(self, var293, var_modelbuilder);
}
var_atreadonly = var297;
var298 = NULL;
if (var_atreadonly == NULL) {
var299 = 0; /* is null */
} else {
var299 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atreadonly,var298) on <var_atreadonly:nullable AAnnotation> */
var_other = var298;
{
var303 = ((short int (*)(val*, val*))(var_atreadonly->class->vft[COLOR_kernel__Object___61d_61d]))(var_atreadonly, var_other) /* == on <var_atreadonly:nullable AAnnotation(AAnnotation)>*/;
var302 = var303;
}
var304 = !var302;
var300 = var304;
goto RET_LABEL301;
RET_LABEL301:(void)0;
}
var299 = var300;
}
if (var299){
{
var305 = parser_nodes__AAttrPropdef__n_expr(self);
}
var306 = NULL;
if (var305 == NULL) {
var307 = 1; /* is null */
} else {
var307 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var305,var306) on <var305:nullable AExpr> */
var_other23 = var306;
{
{ /* Inline kernel#Object#is_same_instance (var305,var_other23) on <var305:nullable AExpr(AExpr)> */
var312 = var305 == var_other23;
var310 = var312;
goto RET_LABEL311;
RET_LABEL311:(void)0;
}
}
var308 = var310;
goto RET_LABEL309;
RET_LABEL309:(void)0;
}
var307 = var308;
}
if (var307){
if (varonce313) {
var314 = varonce313;
} else {
var315 = "Error: a readonly attribute needs a value";
var316 = 41;
var317 = string__NativeString__to_s_with_length(var315, var316);
var314 = var317;
varonce313 = var314;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, var_atreadonly, var314); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
goto RET_LABEL;
} else {
}
if (varonce318) {
var319 = varonce318;
} else {
var320 = "=";
var321 = 1;
var322 = string__NativeString__to_s_with_length(var320, var321);
var319 = var322;
varonce318 = var319;
}
{
var323 = string__FlatString___43d(var_name, var319);
}
var_writename = var323;
{
var324 = parser_nodes__AAttrPropdef__n_writable(self);
}
var_nwritable325 = var324;
if (varonce326) {
var327 = varonce326;
} else {
var328 = "writable";
var329 = 8;
var330 = string__NativeString__to_s_with_length(var328, var329);
var327 = var330;
varonce326 = var327;
}
{
var331 = annotation__Prod__get_single_annotation(self, var327, var_modelbuilder);
}
var_atwritable = var331;
var332 = NULL;
if (var_atwritable == NULL) {
var333 = 0; /* is null */
} else {
var333 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atwritable,var332) on <var_atwritable:nullable AAnnotation> */
var_other = var332;
{
var337 = ((short int (*)(val*, val*))(var_atwritable->class->vft[COLOR_kernel__Object___61d_61d]))(var_atwritable, var_other) /* == on <var_atwritable:nullable AAnnotation(AAnnotation)>*/;
var336 = var337;
}
var338 = !var336;
var334 = var338;
goto RET_LABEL335;
RET_LABEL335:(void)0;
}
var333 = var334;
}
if (var333){
{
{ /* Inline parser_nodes#AAnnotation#n_args (var_atwritable) on <var_atwritable:nullable AAnnotation(AAnnotation)> */
var341 = var_atwritable->attrs[COLOR_parser_nodes__AAnnotation___n_args].val; /* _n_args on <var_atwritable:nullable AAnnotation(AAnnotation)> */
if (unlikely(var341 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2426);
show_backtrace(1);
}
var339 = var341;
RET_LABEL340:(void)0;
}
}
{
var342 = parser_nodes__ANodes__is_empty(var339);
}
var343 = !var342;
if (var343){
{
var345 = annotation__AAnnotation__arg_as_id(var_atwritable, var_modelbuilder);
}
if (var345!=NULL) {
var344 = var345;
} else {
var344 = var_writename;
}
var_writename = var344;
} else {
}
} else {
}
{
var346 = modelbuilder__ModelBuilder__try_get_mproperty_by_name(var_modelbuilder, var_nid2, var_mclassdef, var_writename);
}
/* <var346:nullable MProperty> isa nullable MMethod */
cltype348 = type_nullable_model__MMethod.color;
idtype349 = type_nullable_model__MMethod.id;
if(var346 == NULL) {
var347 = 1;
} else {
if(cltype348 >= var346->type->table_size) {
var347 = 0;
} else {
var347 = var346->type->type_table[cltype348] == idtype349;
}
}
if (unlikely(!var347)) {
var_class_name350 = var346 == NULL ? "null" : var346->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MMethod", var_class_name350);
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 759);
show_backtrace(1);
}
var_mwriteprop = var346;
var351 = NULL;
var_nwkwredef = var351;
var352 = NULL;
if (var_nwritable325 == NULL) {
var353 = 0; /* is null */
} else {
var353 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nwritable325,var352) on <var_nwritable325:nullable AAble> */
var_other = var352;
{
var357 = ((short int (*)(val*, val*))(var_nwritable325->class->vft[COLOR_kernel__Object___61d_61d]))(var_nwritable325, var_other) /* == on <var_nwritable325:nullable AAble(AAble)>*/;
var356 = var357;
}
var358 = !var356;
var354 = var358;
goto RET_LABEL355;
RET_LABEL355:(void)0;
}
var353 = var354;
}
if (var353){
{
var359 = parser_nodes__AAble__n_kwredef(var_nwritable325);
}
var_nwkwredef = var359;
} else {
}
var360 = NULL;
if (var_atwritable == NULL) {
var361 = 0; /* is null */
} else {
var361 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atwritable,var360) on <var_atwritable:nullable AAnnotation> */
var_other = var360;
{
var365 = ((short int (*)(val*, val*))(var_atwritable->class->vft[COLOR_kernel__Object___61d_61d]))(var_atwritable, var_other) /* == on <var_atwritable:nullable AAnnotation(AAnnotation)>*/;
var364 = var365;
}
var366 = !var364;
var362 = var366;
goto RET_LABEL363;
RET_LABEL363:(void)0;
}
var361 = var362;
}
if (var361){
{
var367 = parser_nodes__AAnnotation__n_kwredef(var_atwritable);
}
var_nwkwredef = var367;
} else {
}
var368 = NULL;
if (var_mwriteprop == NULL) {
var369 = 1; /* is null */
} else {
var369 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mwriteprop,var368) on <var_mwriteprop:nullable MMethod> */
var_other23 = var368;
{
{ /* Inline kernel#Object#is_same_instance (var_mwriteprop,var_other23) on <var_mwriteprop:nullable MMethod(MMethod)> */
var374 = var_mwriteprop == var_other23;
var372 = var374;
goto RET_LABEL373;
RET_LABEL373:(void)0;
}
}
var370 = var372;
goto RET_LABEL371;
RET_LABEL371:(void)0;
}
var369 = var370;
}
if (var369){
var375 = NULL;
if (var_nwritable325 == NULL) {
var376 = 0; /* is null */
} else {
var376 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nwritable325,var375) on <var_nwritable325:nullable AAble> */
var_other = var375;
{
var380 = ((short int (*)(val*, val*))(var_nwritable325->class->vft[COLOR_kernel__Object___61d_61d]))(var_nwritable325, var_other) /* == on <var_nwritable325:nullable AAble(AAble)>*/;
var379 = var380;
}
var381 = !var379;
var377 = var381;
goto RET_LABEL378;
RET_LABEL378:(void)0;
}
var376 = var377;
}
if (var376){
{
var382 = parser_nodes__AAble__n_visibility(var_nwritable325);
}
{
var383 = modelize_property__APropdef__new_property_visibility(self, var_modelbuilder, var_mclassdef, var382);
}
var_mvisibility384 = var383;
} else {
var385 = NULL;
if (var_atwritable == NULL) {
var386 = 0; /* is null */
} else {
var386 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atwritable,var385) on <var_atwritable:nullable AAnnotation> */
var_other = var385;
{
var390 = ((short int (*)(val*, val*))(var_atwritable->class->vft[COLOR_kernel__Object___61d_61d]))(var_atwritable, var_other) /* == on <var_atwritable:nullable AAnnotation(AAnnotation)>*/;
var389 = var390;
}
var391 = !var389;
var387 = var391;
goto RET_LABEL388;
RET_LABEL388:(void)0;
}
var386 = var387;
}
if (var386){
{
var392 = parser_nodes__AAnnotation__n_visibility(var_atwritable);
}
{
var393 = modelize_property__APropdef__new_property_visibility(self, var_modelbuilder, var_mclassdef, var392);
}
var_mvisibility384 = var393;
} else {
{
var394 = model_base__Object__private_visibility(self);
}
var_mvisibility384 = var394;
}
}
var395 = NEW_model__MMethod(&type_model__MMethod);
{
model__MMethod__init(var395, var_mclassdef, var_writename, var_mvisibility384); /* Direct call model#MMethod#init on <var395:MMethod>*/
}
var_mwriteprop = var395;
var396 = 0;
{
var397 = modelize_property__APropdef__check_redef_keyword(self, var_modelbuilder, var_mclassdef, var_nwkwredef, var396, var_mwriteprop);
}
var398 = !var397;
if (var398){
goto RET_LABEL;
} else {
}
} else {
if (var_nwkwredef!=NULL) {
var399 = var_nwkwredef;
} else {
{
var400 = parser_nodes__APropdef__n_kwredef(self);
}
var399 = var400;
}
var401 = 1;
{
var402 = modelize_property__APropdef__check_redef_keyword(self, var_modelbuilder, var_mclassdef, var399, var401, var_mwriteprop);
}
var403 = !var402;
if (var403){
goto RET_LABEL;
} else {
}
var404 = NULL;
if (var_nwritable325 == NULL) {
var405 = 0; /* is null */
} else {
var405 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nwritable325,var404) on <var_nwritable325:nullable AAble> */
var_other = var404;
{
var409 = ((short int (*)(val*, val*))(var_nwritable325->class->vft[COLOR_kernel__Object___61d_61d]))(var_nwritable325, var_other) /* == on <var_nwritable325:nullable AAble(AAble)>*/;
var408 = var409;
}
var410 = !var408;
var406 = var410;
goto RET_LABEL407;
RET_LABEL407:(void)0;
}
var405 = var406;
}
if (var405){
{
var411 = parser_nodes__AAble__n_visibility(var_nwritable325);
}
{
modelize_property__APropdef__check_redef_property_visibility(self, var_modelbuilder, var411, var_mwriteprop); /* Direct call modelize_property#APropdef#check_redef_property_visibility on <self:AAttrPropdef>*/
}
} else {
var412 = NULL;
if (var_atwritable == NULL) {
var413 = 0; /* is null */
} else {
var413 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atwritable,var412) on <var_atwritable:nullable AAnnotation> */
var_other = var412;
{
var417 = ((short int (*)(val*, val*))(var_atwritable->class->vft[COLOR_kernel__Object___61d_61d]))(var_atwritable, var_other) /* == on <var_atwritable:nullable AAnnotation(AAnnotation)>*/;
var416 = var417;
}
var418 = !var416;
var414 = var418;
goto RET_LABEL415;
RET_LABEL415:(void)0;
}
var413 = var414;
}
if (var413){
{
var419 = parser_nodes__AAnnotation__n_visibility(var_atwritable);
}
{
modelize_property__APropdef__check_redef_property_visibility(self, var_modelbuilder, var419, var_mwriteprop); /* Direct call modelize_property#APropdef#check_redef_property_visibility on <self:AAttrPropdef>*/
}
} else {
}
}
}
{
{ /* Inline modelize_property#MClassDef#mprop2npropdef (var_mclassdef) on <var_mclassdef:MClassDef> */
var422 = var_mclassdef->attrs[COLOR_modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <var_mclassdef:MClassDef> */
if (unlikely(var422 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 252);
show_backtrace(1);
}
var420 = var422;
RET_LABEL421:(void)0;
}
}
{
((void (*)(val*, val*, val*))(var420->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var420, var_mwriteprop, self) /* []= on <var420:Map[MProperty, APropdef]>*/;
}
var423 = NEW_model__MMethodDef(&type_model__MMethodDef);
{
var424 = parser_nodes__ANode__location(self);
}
{
model__MMethodDef__init(var423, var_mclassdef, var_mwriteprop, var424); /* Direct call model#MMethodDef#init on <var423:MMethodDef>*/
}
var_mwritepropdef = var423;
{
{ /* Inline modelize_property#AAttrPropdef#mwritepropdef= (self,var_mwritepropdef) on <self:AAttrPropdef> */
self->attrs[COLOR_modelize_property__AAttrPropdef___mwritepropdef].val = var_mwritepropdef; /* _mwritepropdef on <self:AAttrPropdef> */
RET_LABEL425:(void)0;
}
}
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var428 = var_modelbuilder->attrs[COLOR_modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var428 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 39);
show_backtrace(1);
}
var426 = var428;
RET_LABEL427:(void)0;
}
}
{
hash_collection__HashMap___91d_93d_61d(var426, var_mwritepropdef, self); /* Direct call hash_collection#HashMap#[]= on <var426:HashMap[MPropDef, APropdef]>*/
}
{
{ /* Inline mdoc#MEntity#mdoc (var_mpropdef200) on <var_mpropdef200:MAttributeDef> */
var431 = var_mpropdef200->attrs[COLOR_mdoc__MEntity___mdoc].val; /* _mdoc on <var_mpropdef200:MAttributeDef> */
var429 = var431;
RET_LABEL430:(void)0;
}
}
{
{ /* Inline mdoc#MEntity#mdoc= (var_mwritepropdef,var429) on <var_mwritepropdef:MMethodDef> */
var_mwritepropdef->attrs[COLOR_mdoc__MEntity___mdoc].val = var429; /* _mdoc on <var_mwritepropdef:MMethodDef> */
RET_LABEL432:(void)0;
}
}
}
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#build_property for (self: Object, ModelBuilder, MClassDef) */
void VIRTUAL_modelize_property__AAttrPropdef__build_property(val* self, val* p0, val* p1) {
modelize_property__AAttrPropdef__build_property(self, p0, p1); /* Direct call modelize_property#AAttrPropdef#build_property on <self:Object(AAttrPropdef)>*/
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#build_signature for (self: AAttrPropdef, ModelBuilder) */
void modelize_property__AAttrPropdef__build_signature(val* self, val* p0) {
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
val* var_ntype /* var ntype: nullable AType */;
val* var21 /* : null */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var_other25 /* var other: nullable Object */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : nullable MType */;
val* var30 /* : null */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
val* var39 /* : null */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var_ /* var : Bool */;
val* var46 /* : null */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
short int var_53 /* var : Bool */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
val* var56 /* : MProperty */;
val* var58 /* : MProperty */;
val* var59 /* : MPropDef */;
val* var60 /* : nullable MSignature */;
val* var62 /* : nullable MSignature */;
val* var_msignature /* var msignature: nullable MSignature */;
val* var63 /* : null */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
short int var67 /* : Bool */;
short int var69 /* : Bool */;
val* var70 /* : nullable MType */;
val* var72 /* : nullable MType */;
val* var73 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
val* var74 /* : null */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
short int var78 /* : Bool */;
short int var80 /* : Bool */;
val* var81 /* : null */;
short int var82 /* : Bool */;
short int var83 /* : Bool */;
short int var85 /* : Bool */;
short int var86 /* : Bool */;
short int var87 /* : Bool */;
short int var88 /* : Bool */;
int cltype;
int idtype;
val* var89 /* : AType */;
val* var90 /* : nullable MType */;
short int var91 /* : Bool */;
int cltype92;
int idtype93;
static val* varonce;
val* var94 /* : String */;
char* var95 /* : NativeString */;
long var96 /* : Int */;
val* var97 /* : FlatString */;
val* var98 /* : nullable MClass */;
val* var_cla /* var cla: nullable MClass */;
val* var99 /* : null */;
short int var100 /* : Bool */;
short int var101 /* : Bool */;
short int var103 /* : Bool */;
short int var104 /* : Bool */;
short int var105 /* : Bool */;
val* var106 /* : MClassType */;
val* var108 /* : MClassType */;
short int var109 /* : Bool */;
int cltype110;
int idtype111;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : NativeString */;
long var115 /* : Int */;
val* var116 /* : FlatString */;
val* var117 /* : nullable MClass */;
val* var_cla118 /* var cla: nullable MClass */;
val* var119 /* : null */;
short int var120 /* : Bool */;
short int var121 /* : Bool */;
short int var123 /* : Bool */;
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
short int var145 /* : Bool */;
val* var146 /* : MClassType */;
val* var148 /* : MClassType */;
short int var149 /* : Bool */;
int cltype150;
int idtype151;
static val* varonce152;
val* var153 /* : String */;
char* var154 /* : NativeString */;
long var155 /* : Int */;
val* var156 /* : FlatString */;
val* var157 /* : nullable MClass */;
val* var_cla158 /* var cla: nullable MClass */;
val* var159 /* : null */;
short int var160 /* : Bool */;
short int var161 /* : Bool */;
short int var163 /* : Bool */;
short int var164 /* : Bool */;
short int var165 /* : Bool */;
val* var166 /* : MClassType */;
val* var168 /* : MClassType */;
short int var169 /* : Bool */;
int cltype170;
int idtype171;
static val* varonce172;
val* var173 /* : String */;
char* var174 /* : NativeString */;
long var175 /* : Int */;
val* var176 /* : FlatString */;
val* var177 /* : nullable MClass */;
val* var_cla178 /* var cla: nullable MClass */;
val* var179 /* : null */;
short int var180 /* : Bool */;
short int var181 /* : Bool */;
short int var183 /* : Bool */;
short int var184 /* : Bool */;
short int var185 /* : Bool */;
val* var186 /* : MClassType */;
val* var188 /* : MClassType */;
short int var189 /* : Bool */;
int cltype190;
int idtype191;
static val* varonce192;
val* var193 /* : String */;
char* var194 /* : NativeString */;
long var195 /* : Int */;
val* var196 /* : FlatString */;
val* var197 /* : nullable MClass */;
val* var_cla198 /* var cla: nullable MClass */;
val* var199 /* : null */;
short int var200 /* : Bool */;
short int var201 /* : Bool */;
short int var203 /* : Bool */;
short int var204 /* : Bool */;
short int var205 /* : Bool */;
val* var206 /* : MClassType */;
val* var208 /* : MClassType */;
static val* varonce209;
val* var210 /* : String */;
char* var211 /* : NativeString */;
long var212 /* : Int */;
val* var213 /* : FlatString */;
static val* varonce214;
val* var215 /* : String */;
char* var216 /* : NativeString */;
long var217 /* : Int */;
val* var218 /* : FlatString */;
val* var219 /* : Array[Object] */;
long var220 /* : Int */;
val* var221 /* : NativeArray[Object] */;
val* var222 /* : String */;
val* var223 /* : null */;
short int var224 /* : Bool */;
short int var225 /* : Bool */;
short int var227 /* : Bool */;
short int var229 /* : Bool */;
val* var230 /* : null */;
short int var231 /* : Bool */;
short int var232 /* : Bool */;
short int var234 /* : Bool */;
short int var235 /* : Bool */;
short int var236 /* : Bool */;
short int var237 /* : Bool */;
int cltype238;
int idtype239;
val* var240 /* : AType */;
val* var241 /* : nullable MType */;
val* var_xmtype /* var xmtype: nullable MType */;
short int var242 /* : Bool */;
short int var243 /* : Bool */;
short int var244 /* : Bool */;
short int var246 /* : Bool */;
short int var248 /* : Bool */;
short int var_249 /* var : Bool */;
val* var250 /* : ToolContext */;
val* var252 /* : ToolContext */;
val* var253 /* : OptionCount */;
val* var255 /* : OptionCount */;
val* var256 /* : nullable Object */;
val* var258 /* : nullable Object */;
long var259 /* : Int */;
short int var260 /* : Bool */;
short int var262 /* : Bool */;
int cltype263;
int idtype264;
const char* var_class_name;
long var265 /* : Int */;
short int var266 /* : Bool */;
static val* varonce267;
val* var268 /* : String */;
char* var269 /* : NativeString */;
long var270 /* : Int */;
val* var271 /* : FlatString */;
val* var272 /* : null */;
short int var273 /* : Bool */;
short int var274 /* : Bool */;
short int var276 /* : Bool */;
short int var278 /* : Bool */;
static val* varonce279;
val* var280 /* : String */;
char* var281 /* : NativeString */;
long var282 /* : Int */;
val* var283 /* : FlatString */;
val* var284 /* : Array[Object] */;
long var285 /* : Int */;
val* var286 /* : NativeArray[Object] */;
val* var287 /* : String */;
val* var289 /* : null */;
short int var290 /* : Bool */;
short int var291 /* : Bool */;
short int var293 /* : Bool */;
short int var294 /* : Bool */;
short int var295 /* : Bool */;
val* var296 /* : MSignature */;
val* var297 /* : Array[MParameter] */;
val* var_msignature298 /* var msignature: MSignature */;
val* var300 /* : nullable MMethodDef */;
val* var302 /* : nullable MMethodDef */;
val* var_mwritepropdef /* var mwritepropdef: nullable MMethodDef */;
val* var303 /* : null */;
short int var304 /* : Bool */;
short int var305 /* : Bool */;
short int var307 /* : Bool */;
short int var308 /* : Bool */;
short int var309 /* : Bool */;
val* var310 /* : nullable TAttrid */;
val* var311 /* : null */;
short int var312 /* : Bool */;
short int var313 /* : Bool */;
short int var315 /* : Bool */;
short int var316 /* : Bool */;
short int var317 /* : Bool */;
val* var318 /* : nullable TAttrid */;
val* var319 /* : String */;
long var320 /* : Int */;
val* var321 /* : Text */;
val* var_name /* var name: String */;
val* var322 /* : nullable TId */;
val* var323 /* : String */;
val* var324 /* : MParameter */;
short int var325 /* : Bool */;
val* var_mparameter /* var mparameter: MParameter */;
val* var326 /* : MSignature */;
val* var327 /* : Array[MParameter] */;
long var328 /* : Int */;
val* var_329 /* var : Array[MParameter] */;
val* var330 /* : null */;
val* var_msignature331 /* var msignature: MSignature */;
val* var333 /* : nullable MAttributeDef */;
val* var335 /* : nullable MAttributeDef */;
val* var_mlazypropdef /* var mlazypropdef: nullable MAttributeDef */;
val* var336 /* : null */;
short int var337 /* : Bool */;
short int var338 /* : Bool */;
short int var340 /* : Bool */;
short int var341 /* : Bool */;
short int var342 /* : Bool */;
val* var343 /* : Model */;
val* var345 /* : Model */;
static val* varonce346;
val* var347 /* : String */;
char* var348 /* : NativeString */;
long var349 /* : Int */;
val* var350 /* : FlatString */;
val* var351 /* : nullable Array[MClass] */;
val* var352 /* : nullable Object */;
val* var353 /* : MClassType */;
val* var355 /* : MClassType */;
var_modelbuilder = p0;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var2 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
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
var12 = var_mpropdef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MAttributeDef(MAttributeDef)> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_mclassdef = var10;
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var15 = var_mclassdef->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 471);
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
var19 = self->attrs[COLOR_modelize_property__AAttrPropdef___mreadpropdef].val; /* _mreadpropdef on <self:AAttrPropdef> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_mreadpropdef = var17;
{
var20 = parser_nodes__AAttrPropdef__n_type(self);
}
var_ntype = var20;
var21 = NULL;
if (var_ntype == NULL) {
var22 = 0; /* is null */
} else {
var22 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ntype,var21) on <var_ntype:nullable AType> */
var_other25 = var21;
{
var27 = ((short int (*)(val*, val*))(var_ntype->class->vft[COLOR_kernel__Object___61d_61d]))(var_ntype, var_other25) /* == on <var_ntype:nullable AType(AType)>*/;
var26 = var27;
}
var28 = !var26;
var23 = var28;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
var22 = var23;
}
if (var22){
{
var29 = modelize_class__ModelBuilder__resolve_mtype(var_modelbuilder, var_mmodule, var_mclassdef, var_ntype);
}
var_mtype = var29;
var30 = NULL;
if (var_mtype == NULL) {
var31 = 1; /* is null */
} else {
var31 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var30) on <var_mtype:nullable MType> */
var_other = var30;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var36 = var_mtype == var_other;
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
} else {
}
var39 = NULL;
if (var_mtype == NULL) {
var40 = 1; /* is null */
} else {
var40 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var39) on <var_mtype:nullable MType> */
var_other = var39;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var45 = var_mtype == var_other;
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
var_ = var40;
if (var40){
var46 = NULL;
if (var_mreadpropdef == NULL) {
var47 = 0; /* is null */
} else {
var47 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mreadpropdef,var46) on <var_mreadpropdef:nullable MMethodDef> */
var_other25 = var46;
{
var51 = ((short int (*)(val*, val*))(var_mreadpropdef->class->vft[COLOR_kernel__Object___61d_61d]))(var_mreadpropdef, var_other25) /* == on <var_mreadpropdef:nullable MMethodDef(MMethodDef)>*/;
var50 = var51;
}
var52 = !var50;
var48 = var52;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
var47 = var48;
}
var38 = var47;
} else {
var38 = var_;
}
var_53 = var38;
if (var38){
{
var54 = model__MPropDef__is_intro(var_mreadpropdef);
}
var55 = !var54;
var37 = var55;
} else {
var37 = var_53;
}
if (var37){
{
{ /* Inline model#MPropDef#mproperty (var_mreadpropdef) on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var58 = var_mreadpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
var59 = model__MProperty__intro(var56);
}
{
{ /* Inline model#MMethodDef#msignature (var59) on <var59:MPropDef(MMethodDef)> */
var62 = var59->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var59:MPropDef(MMethodDef)> */
var60 = var62;
RET_LABEL61:(void)0;
}
}
var_msignature = var60;
var63 = NULL;
if (var_msignature == NULL) {
var64 = 1; /* is null */
} else {
var64 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_msignature,var63) on <var_msignature:nullable MSignature> */
var_other = var63;
{
{ /* Inline kernel#Object#is_same_instance (var_msignature,var_other) on <var_msignature:nullable MSignature(MSignature)> */
var69 = var_msignature == var_other;
var67 = var69;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
var65 = var67;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
var64 = var65;
}
if (var64){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var72 = var_msignature->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:nullable MSignature(MSignature)> */
var70 = var72;
RET_LABEL71:(void)0;
}
}
var_mtype = var70;
} else {
}
{
var73 = parser_nodes__AAttrPropdef__n_expr(self);
}
var_nexpr = var73;
var74 = NULL;
if (var_mtype == NULL) {
var75 = 1; /* is null */
} else {
var75 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var74) on <var_mtype:nullable MType> */
var_other = var74;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var80 = var_mtype == var_other;
var78 = var80;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
}
var76 = var78;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
var75 = var76;
}
if (var75){
var81 = NULL;
if (var_nexpr == NULL) {
var82 = 0; /* is null */
} else {
var82 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nexpr,var81) on <var_nexpr:nullable AExpr> */
var_other25 = var81;
{
var86 = ((short int (*)(val*, val*))(var_nexpr->class->vft[COLOR_kernel__Object___61d_61d]))(var_nexpr, var_other25) /* == on <var_nexpr:nullable AExpr(AExpr)>*/;
var85 = var86;
}
var87 = !var85;
var83 = var87;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
var82 = var83;
}
if (var82){
/* <var_nexpr:nullable AExpr(AExpr)> isa ANewExpr */
cltype = type_parser_nodes__ANewExpr.color;
idtype = type_parser_nodes__ANewExpr.id;
if(cltype >= var_nexpr->type->table_size) {
var88 = 0;
} else {
var88 = var_nexpr->type->type_table[cltype] == idtype;
}
if (var88){
{
var89 = parser_nodes__ANewExpr__n_type(var_nexpr);
}
{
var90 = modelize_class__ModelBuilder__resolve_mtype(var_modelbuilder, var_mmodule, var_mclassdef, var89);
}
var_mtype = var90;
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa AIntExpr */
cltype92 = type_parser_nodes__AIntExpr.color;
idtype93 = type_parser_nodes__AIntExpr.id;
if(cltype92 >= var_nexpr->type->table_size) {
var91 = 0;
} else {
var91 = var_nexpr->type->type_table[cltype92] == idtype93;
}
if (var91){
if (varonce) {
var94 = varonce;
} else {
var95 = "Int";
var96 = 3;
var97 = string__NativeString__to_s_with_length(var95, var96);
var94 = var97;
varonce = var94;
}
{
var98 = modelbuilder__ModelBuilder__try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var94);
}
var_cla = var98;
var99 = NULL;
if (var_cla == NULL) {
var100 = 0; /* is null */
} else {
var100 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_cla,var99) on <var_cla:nullable MClass> */
var_other25 = var99;
{
var104 = ((short int (*)(val*, val*))(var_cla->class->vft[COLOR_kernel__Object___61d_61d]))(var_cla, var_other25) /* == on <var_cla:nullable MClass(MClass)>*/;
var103 = var104;
}
var105 = !var103;
var101 = var105;
goto RET_LABEL102;
RET_LABEL102:(void)0;
}
var100 = var101;
}
if (var100){
{
{ /* Inline model#MClass#mclass_type (var_cla) on <var_cla:nullable MClass(MClass)> */
var108 = var_cla->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var_cla:nullable MClass(MClass)> */
if (unlikely(var108 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 417);
show_backtrace(1);
}
var106 = var108;
RET_LABEL107:(void)0;
}
}
var_mtype = var106;
} else {
}
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa AFloatExpr */
cltype110 = type_parser_nodes__AFloatExpr.color;
idtype111 = type_parser_nodes__AFloatExpr.id;
if(cltype110 >= var_nexpr->type->table_size) {
var109 = 0;
} else {
var109 = var_nexpr->type->type_table[cltype110] == idtype111;
}
if (var109){
if (varonce112) {
var113 = varonce112;
} else {
var114 = "Float";
var115 = 5;
var116 = string__NativeString__to_s_with_length(var114, var115);
var113 = var116;
varonce112 = var113;
}
{
var117 = modelbuilder__ModelBuilder__try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var113);
}
var_cla118 = var117;
var119 = NULL;
if (var_cla118 == NULL) {
var120 = 0; /* is null */
} else {
var120 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_cla118,var119) on <var_cla118:nullable MClass> */
var_other25 = var119;
{
var124 = ((short int (*)(val*, val*))(var_cla118->class->vft[COLOR_kernel__Object___61d_61d]))(var_cla118, var_other25) /* == on <var_cla118:nullable MClass(MClass)>*/;
var123 = var124;
}
var125 = !var123;
var121 = var125;
goto RET_LABEL122;
RET_LABEL122:(void)0;
}
var120 = var121;
}
if (var120){
{
{ /* Inline model#MClass#mclass_type (var_cla118) on <var_cla118:nullable MClass(MClass)> */
var128 = var_cla118->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var_cla118:nullable MClass(MClass)> */
if (unlikely(var128 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 417);
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
/* <var_nexpr:nullable AExpr(AExpr)> isa ACharExpr */
cltype130 = type_parser_nodes__ACharExpr.color;
idtype131 = type_parser_nodes__ACharExpr.id;
if(cltype130 >= var_nexpr->type->table_size) {
var129 = 0;
} else {
var129 = var_nexpr->type->type_table[cltype130] == idtype131;
}
if (var129){
if (varonce132) {
var133 = varonce132;
} else {
var134 = "Char";
var135 = 4;
var136 = string__NativeString__to_s_with_length(var134, var135);
var133 = var136;
varonce132 = var133;
}
{
var137 = modelbuilder__ModelBuilder__try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var133);
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
var_other25 = var139;
{
var144 = ((short int (*)(val*, val*))(var_cla138->class->vft[COLOR_kernel__Object___61d_61d]))(var_cla138, var_other25) /* == on <var_cla138:nullable MClass(MClass)>*/;
var143 = var144;
}
var145 = !var143;
var141 = var145;
goto RET_LABEL142;
RET_LABEL142:(void)0;
}
var140 = var141;
}
if (var140){
{
{ /* Inline model#MClass#mclass_type (var_cla138) on <var_cla138:nullable MClass(MClass)> */
var148 = var_cla138->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var_cla138:nullable MClass(MClass)> */
if (unlikely(var148 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 417);
show_backtrace(1);
}
var146 = var148;
RET_LABEL147:(void)0;
}
}
var_mtype = var146;
} else {
}
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa ABoolExpr */
cltype150 = type_parser_nodes__ABoolExpr.color;
idtype151 = type_parser_nodes__ABoolExpr.id;
if(cltype150 >= var_nexpr->type->table_size) {
var149 = 0;
} else {
var149 = var_nexpr->type->type_table[cltype150] == idtype151;
}
if (var149){
if (varonce152) {
var153 = varonce152;
} else {
var154 = "Bool";
var155 = 4;
var156 = string__NativeString__to_s_with_length(var154, var155);
var153 = var156;
varonce152 = var153;
}
{
var157 = modelbuilder__ModelBuilder__try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var153);
}
var_cla158 = var157;
var159 = NULL;
if (var_cla158 == NULL) {
var160 = 0; /* is null */
} else {
var160 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_cla158,var159) on <var_cla158:nullable MClass> */
var_other25 = var159;
{
var164 = ((short int (*)(val*, val*))(var_cla158->class->vft[COLOR_kernel__Object___61d_61d]))(var_cla158, var_other25) /* == on <var_cla158:nullable MClass(MClass)>*/;
var163 = var164;
}
var165 = !var163;
var161 = var165;
goto RET_LABEL162;
RET_LABEL162:(void)0;
}
var160 = var161;
}
if (var160){
{
{ /* Inline model#MClass#mclass_type (var_cla158) on <var_cla158:nullable MClass(MClass)> */
var168 = var_cla158->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var_cla158:nullable MClass(MClass)> */
if (unlikely(var168 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 417);
show_backtrace(1);
}
var166 = var168;
RET_LABEL167:(void)0;
}
}
var_mtype = var166;
} else {
}
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa ASuperstringExpr */
cltype170 = type_parser_nodes__ASuperstringExpr.color;
idtype171 = type_parser_nodes__ASuperstringExpr.id;
if(cltype170 >= var_nexpr->type->table_size) {
var169 = 0;
} else {
var169 = var_nexpr->type->type_table[cltype170] == idtype171;
}
if (var169){
if (varonce172) {
var173 = varonce172;
} else {
var174 = "String";
var175 = 6;
var176 = string__NativeString__to_s_with_length(var174, var175);
var173 = var176;
varonce172 = var173;
}
{
var177 = modelbuilder__ModelBuilder__try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var173);
}
var_cla178 = var177;
var179 = NULL;
if (var_cla178 == NULL) {
var180 = 0; /* is null */
} else {
var180 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_cla178,var179) on <var_cla178:nullable MClass> */
var_other25 = var179;
{
var184 = ((short int (*)(val*, val*))(var_cla178->class->vft[COLOR_kernel__Object___61d_61d]))(var_cla178, var_other25) /* == on <var_cla178:nullable MClass(MClass)>*/;
var183 = var184;
}
var185 = !var183;
var181 = var185;
goto RET_LABEL182;
RET_LABEL182:(void)0;
}
var180 = var181;
}
if (var180){
{
{ /* Inline model#MClass#mclass_type (var_cla178) on <var_cla178:nullable MClass(MClass)> */
var188 = var_cla178->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var_cla178:nullable MClass(MClass)> */
if (unlikely(var188 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 417);
show_backtrace(1);
}
var186 = var188;
RET_LABEL187:(void)0;
}
}
var_mtype = var186;
} else {
}
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa AStringFormExpr */
cltype190 = type_parser_nodes__AStringFormExpr.color;
idtype191 = type_parser_nodes__AStringFormExpr.id;
if(cltype190 >= var_nexpr->type->table_size) {
var189 = 0;
} else {
var189 = var_nexpr->type->type_table[cltype190] == idtype191;
}
if (var189){
if (varonce192) {
var193 = varonce192;
} else {
var194 = "String";
var195 = 6;
var196 = string__NativeString__to_s_with_length(var194, var195);
var193 = var196;
varonce192 = var193;
}
{
var197 = modelbuilder__ModelBuilder__try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var193);
}
var_cla198 = var197;
var199 = NULL;
if (var_cla198 == NULL) {
var200 = 0; /* is null */
} else {
var200 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_cla198,var199) on <var_cla198:nullable MClass> */
var_other25 = var199;
{
var204 = ((short int (*)(val*, val*))(var_cla198->class->vft[COLOR_kernel__Object___61d_61d]))(var_cla198, var_other25) /* == on <var_cla198:nullable MClass(MClass)>*/;
var203 = var204;
}
var205 = !var203;
var201 = var205;
goto RET_LABEL202;
RET_LABEL202:(void)0;
}
var200 = var201;
}
if (var200){
{
{ /* Inline model#MClass#mclass_type (var_cla198) on <var_cla198:nullable MClass(MClass)> */
var208 = var_cla198->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var_cla198:nullable MClass(MClass)> */
if (unlikely(var208 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 417);
show_backtrace(1);
}
var206 = var208;
RET_LABEL207:(void)0;
}
}
var_mtype = var206;
} else {
}
} else {
if (varonce209) {
var210 = varonce209;
} else {
var211 = "Error: Untyped attribute ";
var212 = 25;
var213 = string__NativeString__to_s_with_length(var211, var212);
var210 = var213;
varonce209 = var210;
}
if (varonce214) {
var215 = varonce214;
} else {
var216 = ". Implicit typing allowed only for literals and new.";
var217 = 52;
var218 = string__NativeString__to_s_with_length(var216, var217);
var215 = var218;
varonce214 = var215;
}
var219 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var219 = array_instance Array[Object] */
var220 = 3;
var221 = NEW_array__NativeArray(var220, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var221)->values[0] = (val*) var210;
((struct instance_array__NativeArray*)var221)->values[1] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var221)->values[2] = (val*) var215;
{
((void (*)(val*, val*, long))(var219->class->vft[COLOR_array__Array__with_native]))(var219, var221, var220) /* with_native on <var219:Array[Object]>*/;
}
}
{
var222 = ((val* (*)(val*))(var219->class->vft[COLOR_string__Object__to_s]))(var219) /* to_s on <var219:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, self, var222); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
}
}
}
}
}
}
}
var223 = NULL;
if (var_mtype == NULL) {
var224 = 1; /* is null */
} else {
var224 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var223) on <var_mtype:nullable MType> */
var_other = var223;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var229 = var_mtype == var_other;
var227 = var229;
goto RET_LABEL228;
RET_LABEL228:(void)0;
}
}
var225 = var227;
goto RET_LABEL226;
RET_LABEL226:(void)0;
}
var224 = var225;
}
if (var224){
goto RET_LABEL;
} else {
}
} else {
}
} else {
var230 = NULL;
if (var_ntype == NULL) {
var231 = 0; /* is null */
} else {
var231 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ntype,var230) on <var_ntype:nullable AType> */
var_other25 = var230;
{
var235 = ((short int (*)(val*, val*))(var_ntype->class->vft[COLOR_kernel__Object___61d_61d]))(var_ntype, var_other25) /* == on <var_ntype:nullable AType(AType)>*/;
var234 = var235;
}
var236 = !var234;
var232 = var236;
goto RET_LABEL233;
RET_LABEL233:(void)0;
}
var231 = var232;
}
if (var231){
/* <var_nexpr:nullable AExpr> isa ANewExpr */
cltype238 = type_parser_nodes__ANewExpr.color;
idtype239 = type_parser_nodes__ANewExpr.id;
if(var_nexpr == NULL) {
var237 = 0;
} else {
if(cltype238 >= var_nexpr->type->table_size) {
var237 = 0;
} else {
var237 = var_nexpr->type->type_table[cltype238] == idtype239;
}
}
if (var237){
{
var240 = parser_nodes__ANewExpr__n_type(var_nexpr);
}
{
var241 = modelize_class__ModelBuilder__resolve_mtype(var_modelbuilder, var_mmodule, var_mclassdef, var240);
}
var_xmtype = var241;
if (var_xmtype == NULL) {
var243 = 0; /* <var_mtype:nullable MType(MType)> cannot be null */
} else {
{ /* Inline kernel#Object#== (var_xmtype,var_mtype) on <var_xmtype:nullable MType> */
var_other = var_mtype;
{
{ /* Inline kernel#Object#is_same_instance (var_xmtype,var_other) on <var_xmtype:nullable MType(MType)> */
var248 = var_xmtype == var_other;
var246 = var248;
goto RET_LABEL247;
RET_LABEL247:(void)0;
}
}
var244 = var246;
goto RET_LABEL245;
RET_LABEL245:(void)0;
}
var243 = var244;
}
var_249 = var243;
if (var243){
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var252 = var_modelbuilder->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var_modelbuilder:ModelBuilder> */
if (unlikely(var252 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var250 = var252;
RET_LABEL251:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_warn (var250) on <var250:ToolContext> */
var255 = var250->attrs[COLOR_toolcontext__ToolContext___opt_warn].val; /* _opt_warn on <var250:ToolContext> */
if (unlikely(var255 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warn");
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 169);
show_backtrace(1);
}
var253 = var255;
RET_LABEL254:(void)0;
}
}
{
{ /* Inline opts#Option#value (var253) on <var253:OptionCount> */
var258 = var253->attrs[COLOR_opts__Option___value].val; /* _value on <var253:OptionCount> */
var256 = var258;
RET_LABEL257:(void)0;
}
}
var259 = 2;
{
{ /* Inline kernel#Int#>= (var256,var259) on <var256:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var259:Int> isa OTHER */
/* <var259:Int> isa OTHER */
var262 = 1; /* easy <var259:Int> isa OTHER*/
if (unlikely(!var262)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 326);
show_backtrace(1);
}
var265 = ((struct instance_kernel__Int*)var256)->value; /* autounbox from nullable Object to Int */;
var266 = var265 >= var259;
var260 = var266;
goto RET_LABEL261;
RET_LABEL261:(void)0;
}
}
var242 = var260;
} else {
var242 = var_249;
}
if (var242){
if (varonce267) {
var268 = varonce267;
} else {
var269 = "Warning: useless type definition";
var270 = 32;
var271 = string__NativeString__to_s_with_length(var269, var270);
var268 = var271;
varonce267 = var268;
}
{
modelbuilder__ModelBuilder__warning(var_modelbuilder, var_ntype, var268); /* Direct call modelbuilder#ModelBuilder#warning on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
} else {
}
} else {
}
}
var272 = NULL;
if (var_mtype == NULL) {
var273 = 1; /* is null */
} else {
var273 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var272) on <var_mtype:nullable MType> */
var_other = var272;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var278 = var_mtype == var_other;
var276 = var278;
goto RET_LABEL277;
RET_LABEL277:(void)0;
}
}
var274 = var276;
goto RET_LABEL275;
RET_LABEL275:(void)0;
}
var273 = var274;
}
if (var273){
if (varonce279) {
var280 = varonce279;
} else {
var281 = "Error: Untyped attribute ";
var282 = 25;
var283 = string__NativeString__to_s_with_length(var281, var282);
var280 = var283;
varonce279 = var280;
}
var284 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var284 = array_instance Array[Object] */
var285 = 2;
var286 = NEW_array__NativeArray(var285, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var286)->values[0] = (val*) var280;
((struct instance_array__NativeArray*)var286)->values[1] = (val*) var_mpropdef;
{
((void (*)(val*, val*, long))(var284->class->vft[COLOR_array__Array__with_native]))(var284, var286, var285) /* with_native on <var284:Array[Object]>*/;
}
}
{
var287 = ((val* (*)(val*))(var284->class->vft[COLOR_string__Object__to_s]))(var284) /* to_s on <var284:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, self, var287); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MAttributeDef#static_mtype= (var_mpropdef,var_mtype) on <var_mpropdef:nullable MAttributeDef(MAttributeDef)> */
var_mpropdef->attrs[COLOR_model__MAttributeDef___static_mtype].val = var_mtype; /* _static_mtype on <var_mpropdef:nullable MAttributeDef(MAttributeDef)> */
RET_LABEL288:(void)0;
}
}
var289 = NULL;
if (var_mreadpropdef == NULL) {
var290 = 0; /* is null */
} else {
var290 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mreadpropdef,var289) on <var_mreadpropdef:nullable MMethodDef> */
var_other25 = var289;
{
var294 = ((short int (*)(val*, val*))(var_mreadpropdef->class->vft[COLOR_kernel__Object___61d_61d]))(var_mreadpropdef, var_other25) /* == on <var_mreadpropdef:nullable MMethodDef(MMethodDef)>*/;
var293 = var294;
}
var295 = !var293;
var291 = var295;
goto RET_LABEL292;
RET_LABEL292:(void)0;
}
var290 = var291;
}
if (var290){
var296 = NEW_model__MSignature(&type_model__MSignature);
var297 = NEW_array__Array(&type_array__Arraymodel__MParameter);
{
array__Array__init(var297); /* Direct call array#Array#init on <var297:Array[MParameter]>*/
}
{
model__MSignature__init(var296, var297, var_mtype); /* Direct call model#MSignature#init on <var296:MSignature>*/
}
var_msignature298 = var296;
{
{ /* Inline model#MMethodDef#msignature= (var_mreadpropdef,var_msignature298) on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var_mreadpropdef->attrs[COLOR_model__MMethodDef___msignature].val = var_msignature298; /* _msignature on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL299:(void)0;
}
}
} else {
}
{
{ /* Inline modelize_property#AAttrPropdef#mwritepropdef (self) on <self:AAttrPropdef> */
var302 = self->attrs[COLOR_modelize_property__AAttrPropdef___mwritepropdef].val; /* _mwritepropdef on <self:AAttrPropdef> */
var300 = var302;
RET_LABEL301:(void)0;
}
}
var_mwritepropdef = var300;
var303 = NULL;
if (var_mwritepropdef == NULL) {
var304 = 0; /* is null */
} else {
var304 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mwritepropdef,var303) on <var_mwritepropdef:nullable MMethodDef> */
var_other25 = var303;
{
var308 = ((short int (*)(val*, val*))(var_mwritepropdef->class->vft[COLOR_kernel__Object___61d_61d]))(var_mwritepropdef, var_other25) /* == on <var_mwritepropdef:nullable MMethodDef(MMethodDef)>*/;
var307 = var308;
}
var309 = !var307;
var305 = var309;
goto RET_LABEL306;
RET_LABEL306:(void)0;
}
var304 = var305;
}
if (var304){
{
var310 = parser_nodes__AAttrPropdef__n_id(self);
}
var311 = NULL;
if (var310 == NULL) {
var312 = 0; /* is null */
} else {
var312 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var310,var311) on <var310:nullable TAttrid> */
var_other25 = var311;
{
var316 = ((short int (*)(val*, val*))(var310->class->vft[COLOR_kernel__Object___61d_61d]))(var310, var_other25) /* == on <var310:nullable TAttrid(TAttrid)>*/;
var315 = var316;
}
var317 = !var315;
var313 = var317;
goto RET_LABEL314;
RET_LABEL314:(void)0;
}
var312 = var313;
}
if (var312){
{
var318 = parser_nodes__AAttrPropdef__n_id(self);
}
if (var318 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 868);
show_backtrace(1);
} else {
var319 = lexer_work__Token__text(var318);
}
var320 = 1;
{
var321 = string__Text__substring_from(var319, var320);
}
var_name = var321;
} else {
{
var322 = parser_nodes__AAttrPropdef__n_id2(self);
}
if (var322 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 870);
show_backtrace(1);
} else {
var323 = lexer_work__Token__text(var322);
}
var_name = var323;
}
var324 = NEW_model__MParameter(&type_model__MParameter);
var325 = 0;
{
model__MParameter__init(var324, var_name, var_mtype, var325); /* Direct call model#MParameter#init on <var324:MParameter>*/
}
var_mparameter = var324;
var326 = NEW_model__MSignature(&type_model__MSignature);
var327 = NEW_array__Array(&type_array__Arraymodel__MParameter);
var328 = 1;
{
array__Array__with_capacity(var327, var328); /* Direct call array#Array#with_capacity on <var327:Array[MParameter]>*/
}
var_329 = var327;
{
array__AbstractArray__push(var_329, var_mparameter); /* Direct call array#AbstractArray#push on <var_329:Array[MParameter]>*/
}
var330 = NULL;
{
model__MSignature__init(var326, var_329, var330); /* Direct call model#MSignature#init on <var326:MSignature>*/
}
var_msignature331 = var326;
{
{ /* Inline model#MMethodDef#msignature= (var_mwritepropdef,var_msignature331) on <var_mwritepropdef:nullable MMethodDef(MMethodDef)> */
var_mwritepropdef->attrs[COLOR_model__MMethodDef___msignature].val = var_msignature331; /* _msignature on <var_mwritepropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL332:(void)0;
}
}
} else {
}
{
{ /* Inline modelize_property#AAttrPropdef#mlazypropdef (self) on <self:AAttrPropdef> */
var335 = self->attrs[COLOR_modelize_property__AAttrPropdef___mlazypropdef].val; /* _mlazypropdef on <self:AAttrPropdef> */
var333 = var335;
RET_LABEL334:(void)0;
}
}
var_mlazypropdef = var333;
var336 = NULL;
if (var_mlazypropdef == NULL) {
var337 = 0; /* is null */
} else {
var337 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mlazypropdef,var336) on <var_mlazypropdef:nullable MAttributeDef> */
var_other25 = var336;
{
var341 = ((short int (*)(val*, val*))(var_mlazypropdef->class->vft[COLOR_kernel__Object___61d_61d]))(var_mlazypropdef, var_other25) /* == on <var_mlazypropdef:nullable MAttributeDef(MAttributeDef)>*/;
var340 = var341;
}
var342 = !var340;
var338 = var342;
goto RET_LABEL339;
RET_LABEL339:(void)0;
}
var337 = var338;
}
if (var337){
{
{ /* Inline modelbuilder#ModelBuilder#model (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var345 = var_modelbuilder->attrs[COLOR_modelbuilder__ModelBuilder___model].val; /* _model on <var_modelbuilder:ModelBuilder> */
if (unlikely(var345 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 98);
show_backtrace(1);
}
var343 = var345;
RET_LABEL344:(void)0;
}
}
if (varonce346) {
var347 = varonce346;
} else {
var348 = "Bool";
var349 = 4;
var350 = string__NativeString__to_s_with_length(var348, var349);
var347 = var350;
varonce346 = var347;
}
{
var351 = model__Model__get_mclasses_by_name(var343, var347);
}
if (var351 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 879);
show_backtrace(1);
} else {
var352 = abstract_collection__SequenceRead__first(var351);
}
{
{ /* Inline model#MClass#mclass_type (var352) on <var352:nullable Object(MClass)> */
var355 = var352->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var352:nullable Object(MClass)> */
if (unlikely(var355 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 417);
show_backtrace(1);
}
var353 = var355;
RET_LABEL354:(void)0;
}
}
{
{ /* Inline model#MAttributeDef#static_mtype= (var_mlazypropdef,var353) on <var_mlazypropdef:nullable MAttributeDef(MAttributeDef)> */
var_mlazypropdef->attrs[COLOR_model__MAttributeDef___static_mtype].val = var353; /* _static_mtype on <var_mlazypropdef:nullable MAttributeDef(MAttributeDef)> */
RET_LABEL356:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#build_signature for (self: Object, ModelBuilder) */
void VIRTUAL_modelize_property__AAttrPropdef__build_signature(val* self, val* p0) {
modelize_property__AAttrPropdef__build_signature(self, p0); /* Direct call modelize_property#AAttrPropdef#build_signature on <self:Object(AAttrPropdef)>*/
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#check_signature for (self: AAttrPropdef, ModelBuilder) */
void modelize_property__AAttrPropdef__check_signature(val* self, val* p0) {
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
val* var16 /* : nullable AType */;
val* var_ntype /* var ntype: nullable AType */;
val* var17 /* : nullable MPropDef */;
val* var19 /* : nullable MPropDef */;
val* var20 /* : nullable MType */;
val* var22 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var23 /* : null */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var32 /* : MProperty */;
val* var34 /* : MProperty */;
val* var35 /* : MPropDef */;
val* var36 /* : nullable MType */;
val* var38 /* : nullable MType */;
val* var_precursor_type /* var precursor_type: nullable MType */;
val* var39 /* : null */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
val* var_other49 /* var other: nullable Object */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
static val* varonce;
val* var53 /* : String */;
char* var54 /* : NativeString */;
long var55 /* : Int */;
val* var56 /* : FlatString */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
long var60 /* : Int */;
val* var61 /* : FlatString */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
long var65 /* : Int */;
val* var66 /* : FlatString */;
val* var67 /* : Array[Object] */;
long var68 /* : Int */;
val* var69 /* : NativeArray[Object] */;
val* var70 /* : String */;
val* var71 /* : nullable MMethodDef */;
val* var73 /* : nullable MMethodDef */;
val* var_meth /* var meth: nullable MMethodDef */;
val* var74 /* : null */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
short int var80 /* : Bool */;
val* var_node /* var node: nullable ANode */;
val* var81 /* : null */;
short int var82 /* : Bool */;
short int var83 /* : Bool */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
val* var88 /* : nullable MMethodDef */;
val* var90 /* : nullable MMethodDef */;
val* var91 /* : null */;
short int var92 /* : Bool */;
short int var93 /* : Bool */;
short int var95 /* : Bool */;
short int var96 /* : Bool */;
short int var97 /* : Bool */;
val* var_node98 /* var node: nullable ANode */;
val* var99 /* : null */;
short int var100 /* : Bool */;
short int var101 /* : Bool */;
short int var103 /* : Bool */;
short int var105 /* : Bool */;
var_modelbuilder = p0;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var2 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
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
var12 = var_mpropdef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MAttributeDef(MAttributeDef)> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_mclassdef = var10;
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var15 = var_mclassdef->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 471);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_mmodule = var13;
{
var16 = parser_nodes__AAttrPropdef__n_type(self);
}
var_ntype = var16;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var19 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
if (var17 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 890);
show_backtrace(1);
} else {
{ /* Inline model#MAttributeDef#static_mtype (var17) on <var17:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1963);
show_backtrace(1);
}
var22 = var17->attrs[COLOR_model__MAttributeDef___static_mtype].val; /* _static_mtype on <var17:nullable MPropDef(nullable MAttributeDef)> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
var_mtype = var20;
var23 = NULL;
if (var_mtype == NULL) {
var24 = 1; /* is null */
} else {
var24 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var23) on <var_mtype:nullable MType> */
var_other = var23;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var29 = var_mtype == var_other;
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var24 = var25;
}
if (var24){
goto RET_LABEL;
} else {
}
{
var30 = model__MPropDef__is_intro(var_mpropdef);
}
var31 = !var30;
if (var31){
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MAttributeDef(MAttributeDef)> */
var34 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MAttributeDef(MAttributeDef)> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
var35 = model__MProperty__intro(var32);
}
{
{ /* Inline model#MAttributeDef#static_mtype (var35) on <var35:MPropDef(MAttributeDef)> */
var38 = var35->attrs[COLOR_model__MAttributeDef___static_mtype].val; /* _static_mtype on <var35:MPropDef(MAttributeDef)> */
var36 = var38;
RET_LABEL37:(void)0;
}
}
var_precursor_type = var36;
var39 = NULL;
if (var_precursor_type == NULL) {
var40 = 1; /* is null */
} else {
var40 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_precursor_type,var39) on <var_precursor_type:nullable MType> */
var_other = var39;
{
{ /* Inline kernel#Object#is_same_instance (var_precursor_type,var_other) on <var_precursor_type:nullable MType(MType)> */
var45 = var_precursor_type == var_other;
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
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Object#!= (var_mtype,var_precursor_type) on <var_mtype:nullable MType(MType)> */
var_other49 = var_precursor_type;
{
var51 = ((short int (*)(val*, val*))(var_mtype->class->vft[COLOR_kernel__Object___61d_61d]))(var_mtype, var_other49) /* == on <var_mtype:nullable MType(MType)>*/;
var50 = var51;
}
var52 = !var50;
var47 = var52;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
var46 = var47;
}
if (var46){
if (unlikely(var_ntype == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 900);
show_backtrace(1);
}
if (varonce) {
var53 = varonce;
} else {
var54 = "Redef Error: Wrong static type. found ";
var55 = 38;
var56 = string__NativeString__to_s_with_length(var54, var55);
var53 = var56;
varonce = var53;
}
if (varonce57) {
var58 = varonce57;
} else {
var59 = ", expected ";
var60 = 11;
var61 = string__NativeString__to_s_with_length(var59, var60);
var58 = var61;
varonce57 = var58;
}
if (varonce62) {
var63 = varonce62;
} else {
var64 = ".";
var65 = 1;
var66 = string__NativeString__to_s_with_length(var64, var65);
var63 = var66;
varonce62 = var63;
}
var67 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var67 = array_instance Array[Object] */
var68 = 5;
var69 = NEW_array__NativeArray(var68, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var69)->values[0] = (val*) var53;
((struct instance_array__NativeArray*)var69)->values[1] = (val*) var_mtype;
((struct instance_array__NativeArray*)var69)->values[2] = (val*) var58;
((struct instance_array__NativeArray*)var69)->values[3] = (val*) var_precursor_type;
((struct instance_array__NativeArray*)var69)->values[4] = (val*) var63;
{
((void (*)(val*, val*, long))(var67->class->vft[COLOR_array__Array__with_native]))(var67, var69, var68) /* with_native on <var67:Array[Object]>*/;
}
}
{
var70 = ((val* (*)(val*))(var67->class->vft[COLOR_string__Object__to_s]))(var67) /* to_s on <var67:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, var_ntype, var70); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
} else {
}
{
{ /* Inline modelize_property#AAttrPropdef#mreadpropdef (self) on <self:AAttrPropdef> */
var73 = self->attrs[COLOR_modelize_property__AAttrPropdef___mreadpropdef].val; /* _mreadpropdef on <self:AAttrPropdef> */
var71 = var73;
RET_LABEL72:(void)0;
}
}
var_meth = var71;
var74 = NULL;
if (var_meth == NULL) {
var75 = 0; /* is null */
} else {
var75 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_meth,var74) on <var_meth:nullable MMethodDef> */
var_other49 = var74;
{
var79 = ((short int (*)(val*, val*))(var_meth->class->vft[COLOR_kernel__Object___61d_61d]))(var_meth, var_other49) /* == on <var_meth:nullable MMethodDef(MMethodDef)>*/;
var78 = var79;
}
var80 = !var78;
var76 = var80;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
var75 = var76;
}
if (var75){
{
modelize_property__AAttrPropdef__check_method_signature(self, var_modelbuilder, var_meth); /* Direct call modelize_property#AAttrPropdef#check_method_signature on <self:AAttrPropdef>*/
}
var_node = var_ntype;
var81 = NULL;
if (var_node == NULL) {
var82 = 1; /* is null */
} else {
var82 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_node,var81) on <var_node:nullable ANode> */
var_other = var81;
{
{ /* Inline kernel#Object#is_same_instance (var_node,var_other) on <var_node:nullable ANode(ANode)> */
var87 = var_node == var_other;
var85 = var87;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
var83 = var85;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
var82 = var83;
}
if (var82){
var_node = self;
} else {
}
{
modelize_property__ModelBuilder__check_visibility(var_modelbuilder, var_node, var_mtype, var_meth); /* Direct call modelize_property#ModelBuilder#check_visibility on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
{
{ /* Inline modelize_property#AAttrPropdef#mwritepropdef (self) on <self:AAttrPropdef> */
var90 = self->attrs[COLOR_modelize_property__AAttrPropdef___mwritepropdef].val; /* _mwritepropdef on <self:AAttrPropdef> */
var88 = var90;
RET_LABEL89:(void)0;
}
}
var_meth = var88;
var91 = NULL;
if (var_meth == NULL) {
var92 = 0; /* is null */
} else {
var92 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_meth,var91) on <var_meth:nullable MMethodDef> */
var_other49 = var91;
{
var96 = ((short int (*)(val*, val*))(var_meth->class->vft[COLOR_kernel__Object___61d_61d]))(var_meth, var_other49) /* == on <var_meth:nullable MMethodDef(MMethodDef)>*/;
var95 = var96;
}
var97 = !var95;
var93 = var97;
goto RET_LABEL94;
RET_LABEL94:(void)0;
}
var92 = var93;
}
if (var92){
{
modelize_property__AAttrPropdef__check_method_signature(self, var_modelbuilder, var_meth); /* Direct call modelize_property#AAttrPropdef#check_method_signature on <self:AAttrPropdef>*/
}
var_node98 = var_ntype;
var99 = NULL;
if (var_node98 == NULL) {
var100 = 1; /* is null */
} else {
var100 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_node98,var99) on <var_node98:nullable ANode> */
var_other = var99;
{
{ /* Inline kernel#Object#is_same_instance (var_node98,var_other) on <var_node98:nullable ANode(ANode)> */
var105 = var_node98 == var_other;
var103 = var105;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
}
var101 = var103;
goto RET_LABEL102;
RET_LABEL102:(void)0;
}
var100 = var101;
}
if (var100){
var_node98 = self;
} else {
}
{
modelize_property__ModelBuilder__check_visibility(var_modelbuilder, var_node98, var_mtype, var_meth); /* Direct call modelize_property#ModelBuilder#check_visibility on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#check_signature for (self: Object, ModelBuilder) */
void VIRTUAL_modelize_property__AAttrPropdef__check_signature(val* self, val* p0) {
modelize_property__AAttrPropdef__check_signature(self, p0); /* Direct call modelize_property#AAttrPropdef#check_signature on <self:Object(AAttrPropdef)>*/
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#check_method_signature for (self: AAttrPropdef, ModelBuilder, MMethodDef) */
void modelize_property__AAttrPropdef__check_method_signature(val* self, val* p0, val* p1) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var /* : MClassDef */;
val* var2 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var3 /* : MModule */;
val* var5 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var6 /* : nullable AType */;
val* var_nsig /* var nsig: nullable AType */;
val* var7 /* : nullable MSignature */;
val* var9 /* : nullable MSignature */;
val* var_mysignature /* var mysignature: nullable MSignature */;
val* var10 /* : null */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : MProperty */;
val* var21 /* : MProperty */;
val* var22 /* : MPropDef */;
val* var23 /* : nullable MSignature */;
val* var25 /* : nullable MSignature */;
val* var_msignature /* var msignature: nullable MSignature */;
val* var26 /* : null */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
long var33 /* : Int */;
long var34 /* : Int */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
val* var40 /* : null */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
val* var_other44 /* var other: nullable Object */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
val* var_node /* var node: ANode */;
static val* varonce;
val* var48 /* : String */;
char* var49 /* : NativeString */;
long var50 /* : Int */;
val* var51 /* : FlatString */;
long var52 /* : Int */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
long var56 /* : Int */;
val* var57 /* : FlatString */;
long var58 /* : Int */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
long var62 /* : Int */;
val* var63 /* : FlatString */;
val* var64 /* : Array[Object] */;
long var65 /* : Int */;
val* var66 /* : NativeArray[Object] */;
val* var67 /* : Object */;
val* var68 /* : Object */;
val* var69 /* : String */;
val* var70 /* : nullable MType */;
val* var72 /* : nullable MType */;
val* var_precursor_ret_type /* var precursor_ret_type: nullable MType */;
val* var73 /* : nullable MType */;
val* var75 /* : nullable MType */;
val* var_ret_type /* var ret_type: nullable MType */;
short int var76 /* : Bool */;
val* var77 /* : null */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
short int var81 /* : Bool */;
short int var82 /* : Bool */;
short int var83 /* : Bool */;
short int var_ /* var : Bool */;
val* var84 /* : null */;
short int var85 /* : Bool */;
short int var86 /* : Bool */;
short int var88 /* : Bool */;
short int var90 /* : Bool */;
val* var91 /* : null */;
short int var92 /* : Bool */;
short int var93 /* : Bool */;
short int var95 /* : Bool */;
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
val* var122 /* : Range[Int] */;
long var123 /* : Int */;
long var124 /* : Int */;
val* var125 /* : Discrete */;
val* var126 /* : Discrete */;
val* var127 /* : Iterator[Discrete] */;
short int var128 /* : Bool */;
val* var129 /* : nullable Object */;
long var_i /* var i: Int */;
long var130 /* : Int */;
val* var131 /* : Array[MParameter] */;
val* var133 /* : Array[MParameter] */;
val* var134 /* : nullable Object */;
val* var135 /* : MType */;
val* var137 /* : MType */;
val* var_myt /* var myt: MType */;
val* var138 /* : Array[MParameter] */;
val* var140 /* : Array[MParameter] */;
val* var141 /* : nullable Object */;
val* var142 /* : MType */;
val* var144 /* : MType */;
val* var_prt /* var prt: MType */;
short int var145 /* : Bool */;
val* var146 /* : MClassType */;
val* var148 /* : MClassType */;
short int var149 /* : Bool */;
short int var150 /* : Bool */;
short int var_151 /* var : Bool */;
val* var152 /* : MClassType */;
val* var154 /* : MClassType */;
short int var155 /* : Bool */;
short int var156 /* : Bool */;
val* var157 /* : null */;
short int var158 /* : Bool */;
short int var159 /* : Bool */;
short int var161 /* : Bool */;
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
val* var196 /* : null */;
short int var197 /* : Bool */;
short int var198 /* : Bool */;
short int var200 /* : Bool */;
short int var201 /* : Bool */;
short int var202 /* : Bool */;
val* var203 /* : null */;
short int var204 /* : Bool */;
short int var205 /* : Bool */;
short int var207 /* : Bool */;
short int var209 /* : Bool */;
val* var210 /* : MClassType */;
val* var212 /* : MClassType */;
short int var213 /* : Bool */;
short int var214 /* : Bool */;
val* var215 /* : null */;
short int var216 /* : Bool */;
short int var217 /* : Bool */;
short int var219 /* : Bool */;
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
var2 = var_mpropdef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_mclassdef = var;
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var5 = var_mclassdef->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 471);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_mmodule = var3;
{
var6 = parser_nodes__AAttrPropdef__n_type(self);
}
var_nsig = var6;
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var9 = var_mpropdef->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:MMethodDef> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_mysignature = var7;
var10 = NULL;
if (var_mysignature == NULL) {
var11 = 1; /* is null */
} else {
var11 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mysignature,var10) on <var_mysignature:nullable MSignature> */
var_other = var10;
{
{ /* Inline kernel#Object#is_same_instance (var_mysignature,var_other) on <var_mysignature:nullable MSignature(MSignature)> */
var16 = var_mysignature == var_other;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
if (var11){
goto RET_LABEL;
} else {
}
{
var17 = model__MPropDef__is_intro(var_mpropdef);
}
var18 = !var17;
if (var18){
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var21 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = model__MProperty__intro(var19);
}
{
{ /* Inline model#MMethodDef#msignature (var22) on <var22:MPropDef(MMethodDef)> */
var25 = var22->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var22:MPropDef(MMethodDef)> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
var_msignature = var23;
var26 = NULL;
if (var_msignature == NULL) {
var27 = 1; /* is null */
} else {
var27 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_msignature,var26) on <var_msignature:nullable MSignature> */
var_other = var26;
{
{ /* Inline kernel#Object#is_same_instance (var_msignature,var_other) on <var_msignature:nullable MSignature(MSignature)> */
var32 = var_msignature == var_other;
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
var27 = var28;
}
if (var27){
goto RET_LABEL;
} else {
}
{
var33 = model__MSignature__arity(var_mysignature);
}
{
var34 = model__MSignature__arity(var_msignature);
}
{
{ /* Inline kernel#Int#!= (var33,var34) on <var33:Int> */
var38 = var33 == var34;
var39 = !var38;
var36 = var39;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
var35 = var36;
}
if (var35){
var40 = NULL;
if (var_nsig == NULL) {
var41 = 0; /* is null */
} else {
var41 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nsig,var40) on <var_nsig:nullable AType> */
var_other44 = var40;
{
var46 = ((short int (*)(val*, val*))(var_nsig->class->vft[COLOR_kernel__Object___61d_61d]))(var_nsig, var_other44) /* == on <var_nsig:nullable AType(AType)>*/;
var45 = var46;
}
var47 = !var45;
var42 = var47;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
var41 = var42;
}
if (var41){
var_node = var_nsig;
} else {
var_node = self;
}
if (varonce) {
var48 = varonce;
} else {
var49 = "Redef Error: ";
var50 = 13;
var51 = string__NativeString__to_s_with_length(var49, var50);
var48 = var51;
varonce = var48;
}
{
var52 = model__MSignature__arity(var_mysignature);
}
if (varonce53) {
var54 = varonce53;
} else {
var55 = " parameters found, ";
var56 = 19;
var57 = string__NativeString__to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
{
var58 = model__MSignature__arity(var_msignature);
}
if (varonce59) {
var60 = varonce59;
} else {
var61 = " expected. Signature is ";
var62 = 24;
var63 = string__NativeString__to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
var64 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var64 = array_instance Array[Object] */
var65 = 7;
var66 = NEW_array__NativeArray(var65, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var66)->values[0] = (val*) var48;
var67 = BOX_kernel__Int(var52); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var66)->values[1] = (val*) var67;
((struct instance_array__NativeArray*)var66)->values[2] = (val*) var54;
var68 = BOX_kernel__Int(var58); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var66)->values[3] = (val*) var68;
((struct instance_array__NativeArray*)var66)->values[4] = (val*) var60;
((struct instance_array__NativeArray*)var66)->values[5] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var66)->values[6] = (val*) var_msignature;
{
((void (*)(val*, val*, long))(var64->class->vft[COLOR_array__Array__with_native]))(var64, var66, var65) /* with_native on <var64:Array[Object]>*/;
}
}
{
var69 = ((val* (*)(val*))(var64->class->vft[COLOR_string__Object__to_s]))(var64) /* to_s on <var64:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, var_node, var69); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var72 = var_msignature->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:nullable MSignature(MSignature)> */
var70 = var72;
RET_LABEL71:(void)0;
}
}
var_precursor_ret_type = var70;
{
{ /* Inline model#MSignature#return_mtype (var_mysignature) on <var_mysignature:nullable MSignature(MSignature)> */
var75 = var_mysignature->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <var_mysignature:nullable MSignature(MSignature)> */
var73 = var75;
RET_LABEL74:(void)0;
}
}
var_ret_type = var73;
var77 = NULL;
if (var_ret_type == NULL) {
var78 = 0; /* is null */
} else {
var78 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret_type,var77) on <var_ret_type:nullable MType> */
var_other44 = var77;
{
var82 = ((short int (*)(val*, val*))(var_ret_type->class->vft[COLOR_kernel__Object___61d_61d]))(var_ret_type, var_other44) /* == on <var_ret_type:nullable MType(MType)>*/;
var81 = var82;
}
var83 = !var81;
var79 = var83;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
var78 = var79;
}
var_ = var78;
if (var78){
var84 = NULL;
if (var_precursor_ret_type == NULL) {
var85 = 1; /* is null */
} else {
var85 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_precursor_ret_type,var84) on <var_precursor_ret_type:nullable MType> */
var_other = var84;
{
{ /* Inline kernel#Object#is_same_instance (var_precursor_ret_type,var_other) on <var_precursor_ret_type:nullable MType(MType)> */
var90 = var_precursor_ret_type == var_other;
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
var76 = var85;
} else {
var76 = var_;
}
if (var76){
var91 = NULL;
if (var_nsig == NULL) {
var92 = 0; /* is null */
} else {
var92 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nsig,var91) on <var_nsig:nullable AType> */
var_other44 = var91;
{
var96 = ((short int (*)(val*, val*))(var_nsig->class->vft[COLOR_kernel__Object___61d_61d]))(var_nsig, var_other44) /* == on <var_nsig:nullable AType(AType)>*/;
var95 = var96;
}
var97 = !var95;
var93 = var97;
goto RET_LABEL94;
RET_LABEL94:(void)0;
}
var92 = var93;
}
if (var92){
var_node98 = var_nsig;
} else {
var_node98 = self;
}
if (varonce99) {
var100 = varonce99;
} else {
var101 = "Redef Error: ";
var102 = 13;
var103 = string__NativeString__to_s_with_length(var101, var102);
var100 = var103;
varonce99 = var100;
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var106 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var106 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
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
var111 = string__NativeString__to_s_with_length(var109, var110);
var108 = var111;
varonce107 = var108;
}
var112 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var112 = array_instance Array[Object] */
var113 = 3;
var114 = NEW_array__NativeArray(var113, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var114)->values[0] = (val*) var100;
((struct instance_array__NativeArray*)var114)->values[1] = (val*) var104;
((struct instance_array__NativeArray*)var114)->values[2] = (val*) var108;
{
((void (*)(val*, val*, long))(var112->class->vft[COLOR_array__Array__with_native]))(var112, var114, var113) /* with_native on <var112:Array[Object]>*/;
}
}
{
var115 = ((val* (*)(val*))(var112->class->vft[COLOR_string__Object__to_s]))(var112) /* to_s on <var112:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, var_node98, var115); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
var116 = model__MSignature__arity(var_mysignature);
}
var117 = 0;
{
{ /* Inline kernel#Int#> (var116,var117) on <var116:Int> */
/* Covariant cast for argument 0 (i) <var117:Int> isa OTHER */
/* <var117:Int> isa OTHER */
var120 = 1; /* easy <var117:Int> isa OTHER*/
if (unlikely(!var120)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 327);
show_backtrace(1);
}
var121 = var116 > var117;
var118 = var121;
goto RET_LABEL119;
RET_LABEL119:(void)0;
}
}
if (var118){
var122 = NEW_range__Range(&type_range__Rangekernel__Int);
var123 = 0;
{
var124 = model__MSignature__arity(var_mysignature);
}
{
var125 = BOX_kernel__Int(var123); /* autobox from Int to Discrete */
var126 = BOX_kernel__Int(var124); /* autobox from Int to Discrete */
range__Range__without_last(var122, var125, var126); /* Direct call range#Range#without_last on <var122:Range[Int]>*/
}
{
var127 = range__Range__iterator(var122);
}
for(;;) {
{
var128 = ((short int (*)(val*))(var127->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var127) /* is_ok on <var127:Iterator[Discrete]>*/;
}
if(!var128) break;
{
var129 = ((val* (*)(val*))(var127->class->vft[COLOR_abstract_collection__Iterator__item]))(var127) /* item on <var127:Iterator[Discrete]>*/;
}
var130 = ((struct instance_kernel__Int*)var129)->value; /* autounbox from nullable Object to Int */;
var_i = var130;
{
{ /* Inline model#MSignature#mparameters (var_mysignature) on <var_mysignature:nullable MSignature(MSignature)> */
var133 = var_mysignature->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var_mysignature:nullable MSignature(MSignature)> */
if (unlikely(var133 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1452);
show_backtrace(1);
}
var131 = var133;
RET_LABEL132:(void)0;
}
}
{
var134 = array__Array___91d_93d(var131, var_i);
}
{
{ /* Inline model#MParameter#mtype (var134) on <var134:nullable Object(MParameter)> */
var137 = var134->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var134:nullable Object(MParameter)> */
if (unlikely(var137 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1552);
show_backtrace(1);
}
var135 = var137;
RET_LABEL136:(void)0;
}
}
var_myt = var135;
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var140 = var_msignature->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var_msignature:nullable MSignature(MSignature)> */
if (unlikely(var140 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1452);
show_backtrace(1);
}
var138 = var140;
RET_LABEL139:(void)0;
}
}
{
var141 = array__Array___91d_93d(var138, var_i);
}
{
{ /* Inline model#MParameter#mtype (var141) on <var141:nullable Object(MParameter)> */
var144 = var141->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var141:nullable Object(MParameter)> */
if (unlikely(var144 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1552);
show_backtrace(1);
}
var142 = var144;
RET_LABEL143:(void)0;
}
}
var_prt = var142;
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var148 = var_mclassdef->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var148 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var146 = var148;
RET_LABEL147:(void)0;
}
}
{
var149 = model__MType__is_subtype(var_myt, var_mmodule, var146, var_prt);
}
var150 = !var149;
var_151 = var150;
if (var150){
var145 = var_151;
} else {
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var154 = var_mclassdef->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var154 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var152 = var154;
RET_LABEL153:(void)0;
}
}
{
var155 = model__MType__is_subtype(var_prt, var_mmodule, var152, var_myt);
}
var156 = !var155;
var145 = var156;
}
if (var145){
var157 = NULL;
if (var_nsig == NULL) {
var158 = 0; /* is null */
} else {
var158 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nsig,var157) on <var_nsig:nullable AType> */
var_other44 = var157;
{
var162 = ((short int (*)(val*, val*))(var_nsig->class->vft[COLOR_kernel__Object___61d_61d]))(var_nsig, var_other44) /* == on <var_nsig:nullable AType(AType)>*/;
var161 = var162;
}
var163 = !var161;
var159 = var163;
goto RET_LABEL160;
RET_LABEL160:(void)0;
}
var158 = var159;
}
if (var158){
var_node164 = var_nsig;
} else {
var_node164 = self;
}
if (varonce165) {
var166 = varonce165;
} else {
var167 = "Redef Error: Wrong type for parameter `";
var168 = 39;
var169 = string__NativeString__to_s_with_length(var167, var168);
var166 = var169;
varonce165 = var166;
}
{
{ /* Inline model#MSignature#mparameters (var_mysignature) on <var_mysignature:nullable MSignature(MSignature)> */
var172 = var_mysignature->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var_mysignature:nullable MSignature(MSignature)> */
if (unlikely(var172 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1452);
show_backtrace(1);
}
var170 = var172;
RET_LABEL171:(void)0;
}
}
{
var173 = array__Array___91d_93d(var170, var_i);
}
{
{ /* Inline model#MParameter#name (var173) on <var173:nullable Object(MParameter)> */
var176 = var173->attrs[COLOR_model__MParameter___name].val; /* _name on <var173:nullable Object(MParameter)> */
if (unlikely(var176 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1549);
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
var181 = string__NativeString__to_s_with_length(var179, var180);
var178 = var181;
varonce177 = var178;
}
if (varonce182) {
var183 = varonce182;
} else {
var184 = ", expected ";
var185 = 11;
var186 = string__NativeString__to_s_with_length(var184, var185);
var183 = var186;
varonce182 = var183;
}
if (varonce187) {
var188 = varonce187;
} else {
var189 = ".";
var190 = 1;
var191 = string__NativeString__to_s_with_length(var189, var190);
var188 = var191;
varonce187 = var188;
}
var192 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var192 = array_instance Array[Object] */
var193 = 7;
var194 = NEW_array__NativeArray(var193, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var194)->values[0] = (val*) var166;
((struct instance_array__NativeArray*)var194)->values[1] = (val*) var174;
((struct instance_array__NativeArray*)var194)->values[2] = (val*) var178;
((struct instance_array__NativeArray*)var194)->values[3] = (val*) var_myt;
((struct instance_array__NativeArray*)var194)->values[4] = (val*) var183;
((struct instance_array__NativeArray*)var194)->values[5] = (val*) var_prt;
((struct instance_array__NativeArray*)var194)->values[6] = (val*) var188;
{
((void (*)(val*, val*, long))(var192->class->vft[COLOR_array__Array__with_native]))(var192, var194, var193) /* with_native on <var192:Array[Object]>*/;
}
}
{
var195 = ((val* (*)(val*))(var192->class->vft[COLOR_string__Object__to_s]))(var192) /* to_s on <var192:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, var_node164, var195); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var127->class->vft[COLOR_abstract_collection__Iterator__next]))(var127) /* next on <var127:Iterator[Discrete]>*/;
}
}
BREAK_label: (void)0;
} else {
}
var196 = NULL;
if (var_precursor_ret_type == NULL) {
var197 = 0; /* is null */
} else {
var197 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_precursor_ret_type,var196) on <var_precursor_ret_type:nullable MType> */
var_other44 = var196;
{
var201 = ((short int (*)(val*, val*))(var_precursor_ret_type->class->vft[COLOR_kernel__Object___61d_61d]))(var_precursor_ret_type, var_other44) /* == on <var_precursor_ret_type:nullable MType(MType)>*/;
var200 = var201;
}
var202 = !var200;
var198 = var202;
goto RET_LABEL199;
RET_LABEL199:(void)0;
}
var197 = var198;
}
if (var197){
var203 = NULL;
if (var_ret_type == NULL) {
var204 = 1; /* is null */
} else {
var204 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ret_type,var203) on <var_ret_type:nullable MType> */
var_other = var203;
{
{ /* Inline kernel#Object#is_same_instance (var_ret_type,var_other) on <var_ret_type:nullable MType(MType)> */
var209 = var_ret_type == var_other;
var207 = var209;
goto RET_LABEL208;
RET_LABEL208:(void)0;
}
}
var205 = var207;
goto RET_LABEL206;
RET_LABEL206:(void)0;
}
var204 = var205;
}
if (var204){
var_ret_type = var_precursor_ret_type;
} else {
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var212 = var_mclassdef->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var212 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var210 = var212;
RET_LABEL211:(void)0;
}
}
{
var213 = model__MType__is_subtype(var_ret_type, var_mmodule, var210, var_precursor_ret_type);
}
var214 = !var213;
if (var214){
var215 = NULL;
if (var_nsig == NULL) {
var216 = 0; /* is null */
} else {
var216 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nsig,var215) on <var_nsig:nullable AType> */
var_other44 = var215;
{
var220 = ((short int (*)(val*, val*))(var_nsig->class->vft[COLOR_kernel__Object___61d_61d]))(var_nsig, var_other44) /* == on <var_nsig:nullable AType(AType)>*/;
var219 = var220;
}
var221 = !var219;
var217 = var221;
goto RET_LABEL218;
RET_LABEL218:(void)0;
}
var216 = var217;
}
if (var216){
var_node222 = var_nsig;
} else {
var_node222 = self;
}
if (varonce223) {
var224 = varonce223;
} else {
var225 = "Redef Error: Wrong return type. found ";
var226 = 38;
var227 = string__NativeString__to_s_with_length(var225, var226);
var224 = var227;
varonce223 = var224;
}
if (varonce228) {
var229 = varonce228;
} else {
var230 = ", expected ";
var231 = 11;
var232 = string__NativeString__to_s_with_length(var230, var231);
var229 = var232;
varonce228 = var229;
}
if (varonce233) {
var234 = varonce233;
} else {
var235 = ".";
var236 = 1;
var237 = string__NativeString__to_s_with_length(var235, var236);
var234 = var237;
varonce233 = var234;
}
var238 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var238 = array_instance Array[Object] */
var239 = 5;
var240 = NEW_array__NativeArray(var239, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var240)->values[0] = (val*) var224;
((struct instance_array__NativeArray*)var240)->values[1] = (val*) var_ret_type;
((struct instance_array__NativeArray*)var240)->values[2] = (val*) var229;
((struct instance_array__NativeArray*)var240)->values[3] = (val*) var_precursor_ret_type;
((struct instance_array__NativeArray*)var240)->values[4] = (val*) var234;
{
((void (*)(val*, val*, long))(var238->class->vft[COLOR_array__Array__with_native]))(var238, var240, var239) /* with_native on <var238:Array[Object]>*/;
}
}
{
var241 = ((val* (*)(val*))(var238->class->vft[COLOR_string__Object__to_s]))(var238) /* to_s on <var238:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, var_node222, var241); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
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
/* method modelize_property#AAttrPropdef#check_method_signature for (self: Object, ModelBuilder, MMethodDef) */
void VIRTUAL_modelize_property__AAttrPropdef__check_method_signature(val* self, val* p0, val* p1) {
modelize_property__AAttrPropdef__check_method_signature(self, p0, p1); /* Direct call modelize_property#AAttrPropdef#check_method_signature on <self:Object(AAttrPropdef)>*/
RET_LABEL:;
}
/* method modelize_property#ATypePropdef#build_property for (self: ATypePropdef, ModelBuilder, MClassDef) */
void modelize_property__ATypePropdef__build_property(val* self, val* p0, val* p1) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var /* : TClassid */;
val* var1 /* : String */;
val* var_name /* var name: String */;
val* var2 /* : TClassid */;
val* var3 /* : nullable MProperty */;
val* var_mprop /* var mprop: nullable MProperty */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : nullable AVisibility */;
val* var12 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: MVisibility */;
val* var13 /* : MVirtualTypeProp */;
val* var14 /* : SequenceRead[Char] */;
val* var16 /* : SequenceRead[Char] */;
val* var17 /* : Iterator[nullable Object] */;
short int var18 /* : Bool */;
val* var19 /* : nullable Object */;
char var_c /* var c: Char */;
char var20 /* : Char */;
short int var21 /* : Bool */;
char var22 /* : Char */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var26 /* : Bool */;
short int var_ /* var : Bool */;
char var27 /* : Char */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
short int var34 /* : Bool */;
val* var35 /* : TClassid */;
static val* varonce;
val* var36 /* : String */;
char* var37 /* : NativeString */;
long var38 /* : Int */;
val* var39 /* : FlatString */;
val* var40 /* : Array[Object] */;
long var41 /* : Int */;
val* var42 /* : NativeArray[Object] */;
val* var43 /* : String */;
val* var44 /* : nullable TKwredef */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
val* var48 /* : nullable TKwredef */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
val* var55 /* : nullable AVisibility */;
val* var56 /* : Map[MProperty, APropdef] */;
val* var58 /* : Map[MProperty, APropdef] */;
val* var59 /* : MVirtualTypeDef */;
val* var60 /* : Location */;
val* var_mpropdef /* var mpropdef: MVirtualTypeDef */;
short int var61 /* : Bool */;
int cltype62;
int idtype63;
const struct type* type_struct;
const char* var_class_name64;
short int var66 /* : Bool */;
int cltype67;
int idtype68;
const struct type* type_struct69;
const char* var_class_name70;
val* var71 /* : HashMap[MPropDef, APropdef] */;
val* var73 /* : HashMap[MPropDef, APropdef] */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
long var77 /* : Int */;
val* var78 /* : FlatString */;
val* var79 /* : nullable AAnnotation */;
val* var_atfixed /* var atfixed: nullable AAnnotation */;
val* var80 /* : null */;
short int var81 /* : Bool */;
short int var82 /* : Bool */;
val* var_other84 /* var other: nullable Object */;
short int var85 /* : Bool */;
short int var86 /* : Bool */;
short int var87 /* : Bool */;
short int var88 /* : Bool */;
var_modelbuilder = p0;
var_mclassdef = p1;
{
var = parser_nodes__ATypePropdef__n_id(self);
}
{
var1 = lexer_work__Token__text(var);
}
var_name = var1;
{
var2 = parser_nodes__ATypePropdef__n_id(self);
}
{
var3 = modelbuilder__ModelBuilder__try_get_mproperty_by_name(var_modelbuilder, var2, var_mclassdef, var_name);
}
var_mprop = var3;
var4 = NULL;
if (var_mprop == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mprop,var4) on <var_mprop:nullable MProperty> */
var_other = var4;
{
{ /* Inline kernel#Object#is_same_instance (var_mprop,var_other) on <var_mprop:nullable MProperty(MProperty)> */
var10 = var_mprop == var_other;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
{
var11 = parser_nodes__APropdef__n_visibility(self);
}
{
var12 = modelize_property__APropdef__new_property_visibility(self, var_modelbuilder, var_mclassdef, var11);
}
var_mvisibility = var12;
var13 = NEW_model__MVirtualTypeProp(&type_model__MVirtualTypeProp);
{
model__MVirtualTypeProp__init(var13, var_mclassdef, var_name, var_mvisibility); /* Direct call model#MVirtualTypeProp#init on <var13:MVirtualTypeProp>*/
}
var_mprop = var13;
{
{ /* Inline string#FlatString#chars (var_name) on <var_name:String> */
var16 = var_name->attrs[COLOR_string__FlatString___chars].val; /* _chars on <var_name:String> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/string.nit", 746);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = ((val* (*)(val*))(var14->class->vft[COLOR_abstract_collection__Collection__iterator]))(var14) /* iterator on <var14:SequenceRead[Char]>*/;
}
for(;;) {
{
var18 = ((short int (*)(val*))(var17->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var17) /* is_ok on <var17:Iterator[nullable Object]>*/;
}
if(!var18) break;
{
var19 = ((val* (*)(val*))(var17->class->vft[COLOR_abstract_collection__Iterator__item]))(var17) /* item on <var17:Iterator[nullable Object]>*/;
}
var20 = ((struct instance_kernel__Char*)var19)->value; /* autounbox from nullable Object to Char */;
var_c = var20;
var22 = 'a';
{
{ /* Inline kernel#Char#>= (var_c,var22) on <var_c:Char> */
/* Covariant cast for argument 0 (i) <var22:Char> isa OTHER */
/* <var22:Char> isa OTHER */
var25 = 1; /* easy <var22:Char> isa OTHER*/
if (unlikely(!var25)) {
var_class_name = type_kernel__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 501);
show_backtrace(1);
}
var26 = var_c >= var22;
var23 = var26;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var_ = var23;
if (var23){
var27 = 'z';
{
{ /* Inline kernel#Char#<= (var_c,var27) on <var_c:Char> */
/* Covariant cast for argument 0 (i) <var27:Char> isa OTHER */
/* <var27:Char> isa OTHER */
var30 = 1; /* easy <var27:Char> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_kernel__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 499);
show_backtrace(1);
}
var34 = var_c <= var27;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var21 = var28;
} else {
var21 = var_;
}
if (var21){
{
var35 = parser_nodes__ATypePropdef__n_id(self);
}
if (varonce) {
var36 = varonce;
} else {
var37 = "Warning: lowercase in the virtual type ";
var38 = 39;
var39 = string__NativeString__to_s_with_length(var37, var38);
var36 = var39;
varonce = var36;
}
var40 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var40 = array_instance Array[Object] */
var41 = 2;
var42 = NEW_array__NativeArray(var41, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var42)->values[0] = (val*) var36;
((struct instance_array__NativeArray*)var42)->values[1] = (val*) var_name;
{
((void (*)(val*, val*, long))(var40->class->vft[COLOR_array__Array__with_native]))(var40, var42, var41) /* with_native on <var40:Array[Object]>*/;
}
}
{
var43 = ((val* (*)(val*))(var40->class->vft[COLOR_string__Object__to_s]))(var40) /* to_s on <var40:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__warning(var_modelbuilder, var35, var43); /* Direct call modelbuilder#ModelBuilder#warning on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label;
} else {
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var17->class->vft[COLOR_abstract_collection__Iterator__next]))(var17) /* next on <var17:Iterator[nullable Object]>*/;
}
}
BREAK_label: (void)0;
{
var44 = parser_nodes__APropdef__n_kwredef(self);
}
var45 = 0;
{
var46 = modelize_property__APropdef__check_redef_keyword(self, var_modelbuilder, var_mclassdef, var44, var45, var_mprop);
}
var47 = !var46;
if (var47){
goto RET_LABEL;
} else {
}
} else {
{
var48 = parser_nodes__APropdef__n_kwredef(self);
}
var49 = 1;
{
var50 = modelize_property__APropdef__check_redef_keyword(self, var_modelbuilder, var_mclassdef, var48, var49, var_mprop);
}
var51 = !var50;
if (var51){
goto RET_LABEL;
} else {
}
/* <var_mprop:nullable MProperty(MProperty)> isa MVirtualTypeProp */
cltype53 = type_model__MVirtualTypeProp.color;
idtype54 = type_model__MVirtualTypeProp.id;
if(cltype53 >= var_mprop->type->table_size) {
var52 = 0;
} else {
var52 = var_mprop->type->type_table[cltype53] == idtype54;
}
if (unlikely(!var52)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 995);
show_backtrace(1);
}
{
var55 = parser_nodes__APropdef__n_visibility(self);
}
{
modelize_property__APropdef__check_redef_property_visibility(self, var_modelbuilder, var55, var_mprop); /* Direct call modelize_property#APropdef#check_redef_property_visibility on <self:ATypePropdef>*/
}
}
{
{ /* Inline modelize_property#MClassDef#mprop2npropdef (var_mclassdef) on <var_mclassdef:MClassDef> */
var58 = var_mclassdef->attrs[COLOR_modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <var_mclassdef:MClassDef> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 252);
show_backtrace(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
((void (*)(val*, val*, val*))(var56->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var56, var_mprop, self) /* []= on <var56:Map[MProperty, APropdef]>*/;
}
var59 = NEW_model__MVirtualTypeDef(&type_model__MVirtualTypeDef);
{
var60 = parser_nodes__ANode__location(self);
}
{
model__MVirtualTypeDef__init(var59, var_mclassdef, var_mprop, var60); /* Direct call model#MVirtualTypeDef#init on <var59:MVirtualTypeDef>*/
}
var_mpropdef = var59;
/* <var_mpropdef:MVirtualTypeDef> isa nullable MPROPDEF */
type_struct = self->type->resolution_table->types[COLOR_nullable_parser_nodes__APropdef_VTMPROPDEF];
cltype62 = type_struct->color;
idtype63 = type_struct->id;
if(cltype62 >= var_mpropdef->type->table_size) {
var61 = 0;
} else {
var61 = var_mpropdef->type->type_table[cltype62] == idtype63;
}
if (unlikely(!var61)) {
var_class_name64 = var_mpropdef == NULL ? "null" : var_mpropdef->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name64);
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 1001);
show_backtrace(1);
}
{
{ /* Inline modelize_property#APropdef#mpropdef= (self,var_mpropdef) on <self:ATypePropdef> */
/* Covariant cast for argument 0 (mpropdef) <var_mpropdef:MVirtualTypeDef> isa nullable MPROPDEF */
/* <var_mpropdef:MVirtualTypeDef> isa nullable MPROPDEF */
type_struct69 = self->type->resolution_table->types[COLOR_nullable_parser_nodes__APropdef_VTMPROPDEF];
cltype67 = type_struct69->color;
idtype68 = type_struct69->id;
if(cltype67 >= var_mpropdef->type->table_size) {
var66 = 0;
} else {
var66 = var_mpropdef->type->type_table[cltype67] == idtype68;
}
if (unlikely(!var66)) {
var_class_name70 = var_mpropdef == NULL ? "null" : var_mpropdef->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name70);
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 283);
show_backtrace(1);
}
self->attrs[COLOR_modelize_property__APropdef___mpropdef].val = var_mpropdef; /* _mpropdef on <self:ATypePropdef> */
RET_LABEL65:(void)0;
}
}
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var73 = var_modelbuilder->attrs[COLOR_modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var73 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 39);
show_backtrace(1);
}
var71 = var73;
RET_LABEL72:(void)0;
}
}
{
hash_collection__HashMap___91d_93d_61d(var71, var_mpropdef, self); /* Direct call hash_collection#HashMap#[]= on <var71:HashMap[MPropDef, APropdef]>*/
}
{
modelize_property__APropdef__set_doc(self, var_mpropdef); /* Direct call modelize_property#APropdef#set_doc on <self:ATypePropdef>*/
}
if (varonce74) {
var75 = varonce74;
} else {
var76 = "fixed";
var77 = 5;
var78 = string__NativeString__to_s_with_length(var76, var77);
var75 = var78;
varonce74 = var75;
}
{
var79 = annotation__Prod__get_single_annotation(self, var75, var_modelbuilder);
}
var_atfixed = var79;
var80 = NULL;
if (var_atfixed == NULL) {
var81 = 0; /* is null */
} else {
var81 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atfixed,var80) on <var_atfixed:nullable AAnnotation> */
var_other84 = var80;
{
var86 = ((short int (*)(val*, val*))(var_atfixed->class->vft[COLOR_kernel__Object___61d_61d]))(var_atfixed, var_other84) /* == on <var_atfixed:nullable AAnnotation(AAnnotation)>*/;
var85 = var86;
}
var87 = !var85;
var82 = var87;
goto RET_LABEL83;
RET_LABEL83:(void)0;
}
var81 = var82;
}
if (var81){
var88 = 1;
{
{ /* Inline model#MVirtualTypeDef#is_fixed= (var_mpropdef,var88) on <var_mpropdef:MVirtualTypeDef> */
var_mpropdef->attrs[COLOR_model__MVirtualTypeDef___is_fixed].s = var88; /* _is_fixed on <var_mpropdef:MVirtualTypeDef> */
RET_LABEL89:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method modelize_property#ATypePropdef#build_property for (self: Object, ModelBuilder, MClassDef) */
void VIRTUAL_modelize_property__ATypePropdef__build_property(val* self, val* p0, val* p1) {
modelize_property__ATypePropdef__build_property(self, p0, p1); /* Direct call modelize_property#ATypePropdef#build_property on <self:Object(ATypePropdef)>*/
RET_LABEL:;
}
/* method modelize_property#ATypePropdef#build_signature for (self: ATypePropdef, ModelBuilder) */
void modelize_property__ATypePropdef__build_signature(val* self, val* p0) {
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
val* var_ntype /* var ntype: AType */;
val* var18 /* : nullable MType */;
val* var19 /* : null */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
var_modelbuilder = p0;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:ATypePropdef> */
var2 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:ATypePropdef> */
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
var12 = var_mpropdef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_mclassdef = var10;
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var15 = var_mclassdef->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 471);
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
var17 = parser_nodes__ATypePropdef__n_type(self);
}
var_ntype = var17;
{
var18 = modelize_class__ModelBuilder__resolve_mtype(var_modelbuilder, var_mmodule, var_mclassdef, var_ntype);
}
var_mtype = var18;
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
{ /* Inline model#MVirtualTypeDef#bound= (var_mpropdef,var_mtype) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var_mpropdef->attrs[COLOR_model__MVirtualTypeDef___bound].val = var_mtype; /* _bound on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
RET_LABEL26:(void)0;
}
}
RET_LABEL:;
}
/* method modelize_property#ATypePropdef#build_signature for (self: Object, ModelBuilder) */
void VIRTUAL_modelize_property__ATypePropdef__build_signature(val* self, val* p0) {
modelize_property__ATypePropdef__build_signature(self, p0); /* Direct call modelize_property#ATypePropdef#build_signature on <self:Object(ATypePropdef)>*/
RET_LABEL:;
}
/* method modelize_property#ATypePropdef#check_signature for (self: ATypePropdef, ModelBuilder) */
void modelize_property__ATypePropdef__check_signature(val* self, val* p0) {
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
val* var24 /* : MClassDef */;
val* var26 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var27 /* : MModule */;
val* var29 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var30 /* : MClassType */;
val* var32 /* : MClassType */;
val* var_anchor /* var anchor: MClassType */;
short int var33 /* : Bool */;
int cltype;
int idtype;
val* var34 /* : Array[MVirtualType] */;
long var35 /* : Int */;
val* var_ /* var : Array[MVirtualType] */;
val* var36 /* : nullable MPropDef */;
val* var38 /* : nullable MPropDef */;
val* var39 /* : MProperty */;
val* var41 /* : MProperty */;
val* var42 /* : MVirtualType */;
val* var44 /* : MVirtualType */;
val* var_seen /* var seen: Array[MVirtualType] */;
short int var45 /* : Bool */;
static val* varonce;
val* var46 /* : String */;
char* var47 /* : NativeString */;
long var48 /* : Int */;
val* var49 /* : FlatString */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : FlatString */;
val* var55 /* : String */;
val* var56 /* : Array[Object] */;
long var57 /* : Int */;
val* var58 /* : NativeArray[Object] */;
val* var59 /* : String */;
val* var60 /* : MType */;
val* var_next /* var next: MType */;
short int var61 /* : Bool */;
int cltype62;
int idtype63;
short int var64 /* : Bool */;
val* var65 /* : nullable MType */;
val* var67 /* : nullable MType */;
val* var68 /* : MProperty */;
val* var70 /* : MProperty */;
val* var71 /* : Array[MPropDef] */;
val* var72 /* : ArrayIterator[nullable Object] */;
short int var73 /* : Bool */;
val* var74 /* : nullable Object */;
val* var_p /* var p: MVirtualTypeDef */;
val* var75 /* : nullable MType */;
val* var77 /* : nullable MType */;
val* var_supbound /* var supbound: MType */;
short int var78 /* : Bool */;
short int var80 /* : Bool */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
long var84 /* : Int */;
val* var85 /* : FlatString */;
val* var86 /* : MProperty */;
val* var88 /* : MProperty */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
long var92 /* : Int */;
val* var93 /* : FlatString */;
val* var94 /* : MClassDef */;
val* var96 /* : MClassDef */;
val* var97 /* : MClass */;
val* var99 /* : MClass */;
val* var100 /* : Array[Object] */;
long var101 /* : Int */;
val* var102 /* : NativeArray[Object] */;
val* var103 /* : String */;
val* var105 /* : MClassDef */;
val* var107 /* : MClassDef */;
val* var108 /* : MClass */;
val* var110 /* : MClass */;
val* var111 /* : MClass */;
val* var113 /* : MClass */;
short int var114 /* : Bool */;
short int var115 /* : Bool */;
short int var117 /* : Bool */;
short int var119 /* : Bool */;
val* var120 /* : AType */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : NativeString */;
long var124 /* : Int */;
val* var125 /* : FlatString */;
short int var126 /* : Bool */;
short int var127 /* : Bool */;
val* var128 /* : AType */;
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : NativeString */;
long var132 /* : Int */;
val* var133 /* : FlatString */;
static val* varonce134;
val* var135 /* : String */;
char* var136 /* : NativeString */;
long var137 /* : Int */;
val* var138 /* : FlatString */;
static val* varonce139;
val* var140 /* : String */;
char* var141 /* : NativeString */;
long var142 /* : Int */;
val* var143 /* : FlatString */;
static val* varonce144;
val* var145 /* : String */;
char* var146 /* : NativeString */;
long var147 /* : Int */;
val* var148 /* : FlatString */;
val* var149 /* : Array[Object] */;
long var150 /* : Int */;
val* var151 /* : NativeArray[Object] */;
val* var152 /* : String */;
var_modelbuilder = p0;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:ATypePropdef> */
var2 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:ATypePropdef> */
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
var12 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:ATypePropdef> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (var10 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 1032);
show_backtrace(1);
} else {
{ /* Inline model#MVirtualTypeDef#bound (var10) on <var10:nullable MPropDef(nullable MVirtualTypeDef)> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1979);
show_backtrace(1);
}
var15 = var10->attrs[COLOR_model__MVirtualTypeDef___bound].val; /* _bound on <var10:nullable MPropDef(nullable MVirtualTypeDef)> */
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
var23 = parser_nodes__ATypePropdef__n_type(self);
}
{
modelize_property__ModelBuilder__check_visibility(var_modelbuilder, var23, var_bound, var_mpropdef); /* Direct call modelize_property#ModelBuilder#check_visibility on <var_modelbuilder:ModelBuilder>*/
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var26 = var_mpropdef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
var_mclassdef = var24;
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var29 = var_mclassdef->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 471);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_mmodule = var27;
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var32 = var_mclassdef->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
var_anchor = var30;
/* <var_bound:nullable MType(MType)> isa MVirtualType */
cltype = type_model__MVirtualType.color;
idtype = type_model__MVirtualType.id;
if(cltype >= var_bound->type->table_size) {
var33 = 0;
} else {
var33 = var_bound->type->type_table[cltype] == idtype;
}
if (var33){
var34 = NEW_array__Array(&type_array__Arraymodel__MVirtualType);
var35 = 1;
{
array__Array__with_capacity(var34, var35); /* Direct call array#Array#with_capacity on <var34:Array[MVirtualType]>*/
}
var_ = var34;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:ATypePropdef> */
var38 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:ATypePropdef> */
var36 = var38;
RET_LABEL37:(void)0;
}
}
if (var36 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 1044);
show_backtrace(1);
} else {
{ /* Inline model#MPropDef#mproperty (var36) on <var36:nullable MPropDef(nullable MVirtualTypeDef)> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var41 = var36->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var36:nullable MPropDef(nullable MVirtualTypeDef)> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline model#MVirtualTypeProp#mvirtualtype (var39) on <var39:MProperty(MVirtualTypeProp)> */
var44 = var39->attrs[COLOR_model__MVirtualTypeProp___mvirtualtype].val; /* _mvirtualtype on <var39:MProperty(MVirtualTypeProp)> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mvirtualtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1858);
show_backtrace(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
array__AbstractArray__push(var_, var42); /* Direct call array#AbstractArray#push on <var_:Array[MVirtualType]>*/
}
var_seen = var_;
for(;;) {
{
var45 = array__AbstractArrayRead__has(var_seen, var_bound);
}
if (var45){
{
array__Array__add(var_seen, var_bound); /* Direct call array#Array#add on <var_seen:Array[MVirtualType]>*/
}
if (varonce) {
var46 = varonce;
} else {
var47 = "Error: circularity of virtual type definition: ";
var48 = 47;
var49 = string__NativeString__to_s_with_length(var47, var48);
var46 = var49;
varonce = var46;
}
if (varonce50) {
var51 = varonce50;
} else {
var52 = " -> ";
var53 = 4;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
{
var55 = string__Collection__join(var_seen, var51);
}
var56 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var56 = array_instance Array[Object] */
var57 = 2;
var58 = NEW_array__NativeArray(var57, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var58)->values[0] = (val*) var46;
((struct instance_array__NativeArray*)var58)->values[1] = (val*) var55;
{
((void (*)(val*, val*, long))(var56->class->vft[COLOR_array__Array__with_native]))(var56, var58, var57) /* with_native on <var56:Array[Object]>*/;
}
}
{
var59 = ((val* (*)(val*))(var56->class->vft[COLOR_string__Object__to_s]))(var56) /* to_s on <var56:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, self, var59); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
array__Array__add(var_seen, var_bound); /* Direct call array#Array#add on <var_seen:Array[MVirtualType]>*/
}
{
var60 = model__MVirtualType__lookup_bound(var_bound, var_mmodule, var_anchor);
}
var_next = var60;
/* <var_next:MType> isa MVirtualType */
cltype62 = type_model__MVirtualType.color;
idtype63 = type_model__MVirtualType.id;
if(cltype62 >= var_next->type->table_size) {
var61 = 0;
} else {
var61 = var_next->type->type_table[cltype62] == idtype63;
}
var64 = !var61;
if (var64){
goto BREAK_label;
} else {
}
var_bound = var_next;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
} else {
}
{
{ /* Inline model#MVirtualTypeDef#bound (var_mpropdef) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var67 = var_mpropdef->attrs[COLOR_model__MVirtualTypeDef___bound].val; /* _bound on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var65 = var67;
RET_LABEL66:(void)0;
}
}
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 1059);
show_backtrace(1);
}
var_bound = var65;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var70 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
var71 = model__MProperty__lookup_super_definitions(var68, var_mmodule, var_anchor);
}
{
var72 = array__AbstractArrayRead__iterator(var71);
}
for(;;) {
{
var73 = array__ArrayIterator__is_ok(var72);
}
if(!var73) break;
{
var74 = array__ArrayIterator__item(var72);
}
var_p = var74;
{
{ /* Inline model#MVirtualTypeDef#bound (var_p) on <var_p:MVirtualTypeDef> */
var77 = var_p->attrs[COLOR_model__MVirtualTypeDef___bound].val; /* _bound on <var_p:MVirtualTypeDef> */
var75 = var77;
RET_LABEL76:(void)0;
}
}
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 1061);
show_backtrace(1);
}
var_supbound = var75;
{
{ /* Inline model#MVirtualTypeDef#is_fixed (var_p) on <var_p:MVirtualTypeDef> */
var80 = var_p->attrs[COLOR_model__MVirtualTypeDef___is_fixed].s; /* _is_fixed on <var_p:MVirtualTypeDef> */
var78 = var80;
RET_LABEL79:(void)0;
}
}
if (var78){
if (varonce81) {
var82 = varonce81;
} else {
var83 = "Redef Error: Virtual type ";
var84 = 26;
var85 = string__NativeString__to_s_with_length(var83, var84);
var82 = var85;
varonce81 = var82;
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var88 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
if (unlikely(var88 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var86 = var88;
RET_LABEL87:(void)0;
}
}
if (varonce89) {
var90 = varonce89;
} else {
var91 = " is fixed in super-class ";
var92 = 25;
var93 = string__NativeString__to_s_with_length(var91, var92);
var90 = var93;
varonce89 = var90;
}
{
{ /* Inline model#MPropDef#mclassdef (var_p) on <var_p:MVirtualTypeDef> */
var96 = var_p->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_p:MVirtualTypeDef> */
if (unlikely(var96 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var94) on <var94:MClassDef> */
var99 = var94->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var94:MClassDef> */
if (unlikely(var99 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 474);
show_backtrace(1);
}
var97 = var99;
RET_LABEL98:(void)0;
}
}
var100 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var100 = array_instance Array[Object] */
var101 = 4;
var102 = NEW_array__NativeArray(var101, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var102)->values[0] = (val*) var82;
((struct instance_array__NativeArray*)var102)->values[1] = (val*) var86;
((struct instance_array__NativeArray*)var102)->values[2] = (val*) var90;
((struct instance_array__NativeArray*)var102)->values[3] = (val*) var97;
{
((void (*)(val*, val*, long))(var100->class->vft[COLOR_array__Array__with_native]))(var100, var102, var101) /* with_native on <var100:Array[Object]>*/;
}
}
{
var103 = ((val* (*)(val*))(var100->class->vft[COLOR_string__Object__to_s]))(var100) /* to_s on <var100:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, self, var103); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label104;
} else {
}
{
{ /* Inline model#MPropDef#mclassdef (var_p) on <var_p:MVirtualTypeDef> */
var107 = var_p->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_p:MVirtualTypeDef> */
if (unlikely(var107 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var105 = var107;
RET_LABEL106:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var105) on <var105:MClassDef> */
var110 = var105->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var105:MClassDef> */
if (unlikely(var110 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 474);
show_backtrace(1);
}
var108 = var110;
RET_LABEL109:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var113 = var_mclassdef->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var113 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 474);
show_backtrace(1);
}
var111 = var113;
RET_LABEL112:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var108,var111) on <var108:MClass> */
var_other = var111;
{
{ /* Inline kernel#Object#is_same_instance (var108,var_other) on <var108:MClass> */
var119 = var108 == var_other;
var117 = var119;
goto RET_LABEL118;
RET_LABEL118:(void)0;
}
}
var115 = var117;
goto RET_LABEL116;
RET_LABEL116:(void)0;
}
var114 = var115;
}
if (var114){
{
var120 = parser_nodes__ATypePropdef__n_type(self);
}
if (varonce121) {
var122 = varonce121;
} else {
var123 = "Redef Error: a virtual type cannot be refined.";
var124 = 46;
var125 = string__NativeString__to_s_with_length(var123, var124);
var122 = var125;
varonce121 = var122;
}
{
modelbuilder__ModelBuilder__warning(var_modelbuilder, var120, var122); /* Direct call modelbuilder#ModelBuilder#warning on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label104;
} else {
}
{
var126 = model__MType__is_subtype(var_bound, var_mmodule, var_anchor, var_supbound);
}
var127 = !var126;
if (var127){
{
var128 = parser_nodes__ATypePropdef__n_type(self);
}
if (varonce129) {
var130 = varonce129;
} else {
var131 = "Redef Error: Wrong bound type. Found ";
var132 = 37;
var133 = string__NativeString__to_s_with_length(var131, var132);
var130 = var133;
varonce129 = var130;
}
if (varonce134) {
var135 = varonce134;
} else {
var136 = ", expected a subtype of ";
var137 = 24;
var138 = string__NativeString__to_s_with_length(var136, var137);
var135 = var138;
varonce134 = var135;
}
if (varonce139) {
var140 = varonce139;
} else {
var141 = ", as in ";
var142 = 8;
var143 = string__NativeString__to_s_with_length(var141, var142);
var140 = var143;
varonce139 = var140;
}
if (varonce144) {
var145 = varonce144;
} else {
var146 = ".";
var147 = 1;
var148 = string__NativeString__to_s_with_length(var146, var147);
var145 = var148;
varonce144 = var145;
}
var149 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var149 = array_instance Array[Object] */
var150 = 7;
var151 = NEW_array__NativeArray(var150, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var151)->values[0] = (val*) var130;
((struct instance_array__NativeArray*)var151)->values[1] = (val*) var_bound;
((struct instance_array__NativeArray*)var151)->values[2] = (val*) var135;
((struct instance_array__NativeArray*)var151)->values[3] = (val*) var_supbound;
((struct instance_array__NativeArray*)var151)->values[4] = (val*) var140;
((struct instance_array__NativeArray*)var151)->values[5] = (val*) var_p;
((struct instance_array__NativeArray*)var151)->values[6] = (val*) var145;
{
((void (*)(val*, val*, long))(var149->class->vft[COLOR_array__Array__with_native]))(var149, var151, var150) /* with_native on <var149:Array[Object]>*/;
}
}
{
var152 = ((val* (*)(val*))(var149->class->vft[COLOR_string__Object__to_s]))(var149) /* to_s on <var149:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, var128, var152); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label104;
} else {
}
CONTINUE_label104: (void)0;
{
array__ArrayIterator__next(var72); /* Direct call array#ArrayIterator#next on <var72:ArrayIterator[nullable Object]>*/
}
}
BREAK_label104: (void)0;
RET_LABEL:;
}
/* method modelize_property#ATypePropdef#check_signature for (self: Object, ModelBuilder) */
void VIRTUAL_modelize_property__ATypePropdef__check_signature(val* self, val* p0) {
modelize_property__ATypePropdef__check_signature(self, p0); /* Direct call modelize_property#ATypePropdef#check_signature on <self:Object(ATypePropdef)>*/
RET_LABEL:;
}
