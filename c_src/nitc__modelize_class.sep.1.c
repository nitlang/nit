#include "nitc__modelize_class.sep.0.h"
/* method modelize_class#ToolContext#modelize_class_phase for (self: ToolContext): Phase */
val* nitc__modelize_class___ToolContext___modelize_class_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nitc__modelize_class__ToolContext___modelize_class_phase].val; /* _modelize_class_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelize_class_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 23);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#ModelizeClassPhase#process_nmodule for (self: ModelizeClassPhase, AModule) */
void nitc__modelize_class___nitc__modelize_class__ModelizeClassPhase___nitc__phase__Phase__process_nmodule(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
val* var /* : ToolContext */;
val* var2 /* : ToolContext */;
val* var3 /* : ModelBuilder */;
var_nmodule = p0;
{
{ /* Inline phase#Phase#toolcontext (self) on <self:ModelizeClassPhase> */
var2 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:ModelizeClassPhase> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 200);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__modelbuilder_base___ToolContext___modelbuilder(var);
}
{
nitc__modelize_class___ModelBuilder___build_classes(var3, var_nmodule); /* Direct call modelize_class#ModelBuilder#build_classes on <var3:ModelBuilder>*/
}
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#build_a_mclass for (self: ModelBuilder, AModule, AClassdef) */
void nitc__modelize_class___ModelBuilder___build_a_mclass(val* self, val* p0, val* p1) {
val* var_nmodule /* var nmodule: AModule */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var /* : nullable MModule */;
val* var2 /* : nullable MModule */;
val* var_mmodule /* var mmodule: MModule */;
long var_arity /* var arity: Int */;
val* var3 /* : Array[String] */;
val* var_names /* var names: Array[String] */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : nullable AQclassid */;
val* var7 /* : nullable AQclassid */;
val* var8 /* : TClassid */;
val* var10 /* : TClassid */;
val* var11 /* : String */;
val* var_name /* var name: String */;
val* var12 /* : AClasskind */;
val* var14 /* : AClasskind */;
val* var_nkind /* var nkind: nullable AClasskind */;
val* var15 /* : MClassKind */;
val* var_mkind /* var mkind: MClassKind */;
val* var16 /* : nullable AVisibility */;
val* var18 /* : nullable AVisibility */;
val* var_nvisibility /* var nvisibility: nullable AVisibility */;
val* var19 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: nullable MVisibility */;
val* var20 /* : ANodes[AFormaldef] */;
val* var22 /* : ANodes[AFormaldef] */;
long var23 /* : Int */;
val* var24 /* : Sys */;
val* var25 /* : MVisibility */;
short int var26 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
static val* varonce;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : String */;
val* var34 /* : Sys */;
val* var35 /* : MVisibility */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
val* var44 /* : String */;
long var_i /* var i: Int */;
long var_ /* var : Int */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
const char* var_class_name;
short int var50 /* : Bool */;
val* var51 /* : ANodes[AFormaldef] */;
val* var53 /* : ANodes[AFormaldef] */;
val* var54 /* : ANode */;
val* var_nfd /* var nfd: AFormaldef */;
val* var55 /* : TClassid */;
val* var57 /* : TClassid */;
val* var58 /* : String */;
val* var_ptname /* var ptname: String */;
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
val* var70 /* : String */;
val* var71 /* : SequenceRead[Char] */;
val* var_72 /* var : SequenceRead[Char] */;
val* var73 /* : Iterator[nullable Object] */;
val* var_74 /* var : IndexedIterator[Char] */;
short int var75 /* : Bool */;
val* var77 /* : nullable Object */;
uint32_t var78 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var79 /* : Bool */;
short int var80 /* : Bool */;
short int var82 /* : Bool */;
int cltype83;
int idtype84;
const char* var_class_name85;
short int var86 /* : Bool */;
short int var_87 /* var : Bool */;
short int var88 /* : Bool */;
short int var90 /* : Bool */;
int cltype91;
int idtype92;
const char* var_class_name93;
short int var94 /* : Bool */;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : NativeString */;
val* var98 /* : String */;
val* var100 /* : NativeArray[String] */;
static val* varonce99;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : NativeString */;
val* var104 /* : String */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
val* var108 /* : String */;
val* var109 /* : String */;
long var110 /* : Int */;
short int var111 /* : Bool */;
short int var112 /* : Bool */;
int cltype113;
int idtype114;
short int var_115 /* var : Bool */;
val* var116 /* : ANodes[APropdef] */;
val* var118 /* : ANodes[APropdef] */;
val* var119 /* : nullable Object */;
short int var120 /* : Bool */;
int cltype121;
int idtype122;
const char* var_class_name123;
val* var124 /* : nullable AMethid */;
val* var126 /* : nullable AMethid */;
val* var127 /* : String */;
static val* varonce128;
val* var129 /* : String */;
char* var130 /* : NativeString */;
val* var131 /* : String */;
short int var132 /* : Bool */;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : NativeString */;
val* var136 /* : String */;
val* var137 /* : Sys */;
val* var138 /* : MClassKind */;
val* var139 /* : Sys */;
val* var140 /* : MVisibility */;
static val* varonce141;
val* var142 /* : String */;
char* var143 /* : NativeString */;
val* var144 /* : String */;
val* var145 /* : Sys */;
val* var146 /* : MClassKind */;
val* var147 /* : Sys */;
val* var148 /* : MVisibility */;
val* var149 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
short int var150 /* : Bool */;
short int var151 /* : Bool */;
short int var153 /* : Bool */;
short int var155 /* : Bool */;
short int var156 /* : Bool */;
short int var157 /* : Bool */;
int cltype158;
int idtype159;
short int var_160 /* var : Bool */;
val* var161 /* : nullable TKwredef */;
val* var163 /* : nullable TKwredef */;
short int var164 /* : Bool */;
short int var165 /* : Bool */;
val* var_other167 /* var other: nullable Object */;
short int var168 /* : Bool */;
short int var169 /* : Bool */;
val* var171 /* : NativeArray[String] */;
static val* varonce170;
static val* varonce172;
val* var173 /* : String */;
char* var174 /* : NativeString */;
val* var175 /* : String */;
static val* varonce176;
val* var177 /* : String */;
char* var178 /* : NativeString */;
val* var179 /* : String */;
val* var180 /* : String */;
short int var181 /* : Bool */;
val* var182 /* : nullable MGroup */;
val* var184 /* : nullable MGroup */;
short int var185 /* : Bool */;
short int var186 /* : Bool */;
short int var188 /* : Bool */;
short int var189 /* : Bool */;
short int var_190 /* var : Bool */;
val* var191 /* : Sys */;
val* var192 /* : MVisibility */;
short int var193 /* : Bool */;
val* var194 /* : Model */;
val* var196 /* : Model */;
val* var197 /* : nullable Array[MClass] */;
val* var_mclasses /* var mclasses: nullable Array[MClass] */;
short int var198 /* : Bool */;
short int var199 /* : Bool */;
short int var201 /* : Bool */;
short int var202 /* : Bool */;
val* var_203 /* var : Array[MClass] */;
val* var204 /* : IndexedIterator[nullable Object] */;
val* var_205 /* var : IndexedIterator[MClass] */;
short int var206 /* : Bool */;
val* var208 /* : nullable Object */;
val* var_other209 /* var other: MClass */;
short int var210 /* : Bool */;
val* var211 /* : MModule */;
val* var213 /* : MModule */;
val* var214 /* : nullable MGroup */;
val* var216 /* : nullable MGroup */;
short int var217 /* : Bool */;
short int var218 /* : Bool */;
short int var220 /* : Bool */;
short int var221 /* : Bool */;
short int var_222 /* var : Bool */;
val* var223 /* : MModule */;
val* var225 /* : MModule */;
val* var226 /* : nullable MGroup */;
val* var228 /* : nullable MGroup */;
val* var229 /* : MPackage */;
val* var231 /* : MPackage */;
val* var232 /* : nullable MGroup */;
val* var234 /* : nullable MGroup */;
val* var235 /* : MPackage */;
val* var237 /* : MPackage */;
short int var238 /* : Bool */;
short int var240 /* : Bool */;
short int var242 /* : Bool */;
val* var243 /* : nullable MClassDef */;
short int var244 /* : Bool */;
short int var245 /* : Bool */;
short int var247 /* : Bool */;
short int var249 /* : Bool */;
static val* varonce251;
val* var252 /* : String */;
char* var253 /* : NativeString */;
val* var254 /* : String */;
val* var256 /* : NativeArray[String] */;
static val* varonce255;
static val* varonce257;
val* var258 /* : String */;
char* var259 /* : NativeString */;
val* var260 /* : String */;
static val* varonce261;
val* var262 /* : String */;
char* var263 /* : NativeString */;
val* var264 /* : String */;
static val* varonce265;
val* var266 /* : String */;
char* var267 /* : NativeString */;
val* var268 /* : String */;
static val* varonce269;
val* var270 /* : String */;
char* var271 /* : NativeString */;
val* var272 /* : String */;
val* var273 /* : String */;
val* var274 /* : MModule */;
val* var276 /* : MModule */;
val* var277 /* : String */;
val* var278 /* : MClassDef */;
val* var280 /* : MClassDef */;
val* var281 /* : Location */;
val* var283 /* : Location */;
val* var284 /* : String */;
val* var285 /* : String */;
val* var286 /* : MClass */;
short int var287 /* : Bool */;
short int var288 /* : Bool */;
int cltype289;
int idtype290;
short int var_291 /* var : Bool */;
val* var292 /* : Map[MClass, AClassdef] */;
val* var294 /* : Map[MClass, AClassdef] */;
short int var295 /* : Bool */;
val* var297 /* : NativeArray[String] */;
static val* varonce296;
static val* varonce298;
val* var299 /* : String */;
char* var300 /* : NativeString */;
val* var301 /* : String */;
static val* varonce302;
val* var303 /* : String */;
char* var304 /* : NativeString */;
val* var305 /* : String */;
static val* varonce306;
val* var307 /* : String */;
char* var308 /* : NativeString */;
val* var309 /* : String */;
val* var310 /* : Map[MClass, AClassdef] */;
val* var312 /* : Map[MClass, AClassdef] */;
val* var313 /* : nullable Object */;
val* var314 /* : Location */;
val* var316 /* : Location */;
long var317 /* : Int */;
long var319 /* : Int */;
val* var320 /* : String */;
val* var321 /* : String */;
short int var323 /* : Bool */;
short int var324 /* : Bool */;
int cltype325;
int idtype326;
short int var_327 /* var : Bool */;
val* var328 /* : nullable TKwredef */;
val* var330 /* : nullable TKwredef */;
short int var331 /* : Bool */;
short int var332 /* : Bool */;
short int var334 /* : Bool */;
short int var336 /* : Bool */;
val* var338 /* : NativeArray[String] */;
static val* varonce337;
static val* varonce339;
val* var340 /* : String */;
char* var341 /* : NativeString */;
val* var342 /* : String */;
static val* varonce343;
val* var344 /* : String */;
char* var345 /* : NativeString */;
val* var346 /* : String */;
val* var347 /* : String */;
short int var349 /* : Bool */;
short int var350 /* : Bool */;
short int var352 /* : Bool */;
short int var353 /* : Bool */;
short int var_354 /* var : Bool */;
long var355 /* : Int */;
long var357 /* : Int */;
short int var358 /* : Bool */;
short int var360 /* : Bool */;
short int var361 /* : Bool */;
val* var363 /* : NativeArray[String] */;
static val* varonce362;
static val* varonce364;
val* var365 /* : String */;
char* var366 /* : NativeString */;
val* var367 /* : String */;
static val* varonce368;
val* var369 /* : String */;
char* var370 /* : NativeString */;
val* var371 /* : String */;
static val* varonce372;
val* var373 /* : String */;
char* var374 /* : NativeString */;
val* var375 /* : String */;
static val* varonce376;
val* var377 /* : String */;
char* var378 /* : NativeString */;
val* var379 /* : String */;
long var380 /* : Int */;
long var382 /* : Int */;
val* var383 /* : String */;
val* var384 /* : String */;
val* var385 /* : String */;
val* var386 /* : String */;
short int var388 /* : Bool */;
short int var389 /* : Bool */;
short int var390 /* : Bool */;
short int var391 /* : Bool */;
short int var393 /* : Bool */;
short int var394 /* : Bool */;
short int var_395 /* var : Bool */;
val* var396 /* : Sys */;
val* var397 /* : MClassKind */;
short int var398 /* : Bool */;
short int var400 /* : Bool */;
short int var401 /* : Bool */;
short int var_402 /* var : Bool */;
val* var403 /* : MClassKind */;
val* var405 /* : MClassKind */;
short int var406 /* : Bool */;
short int var408 /* : Bool */;
short int var409 /* : Bool */;
val* var411 /* : NativeArray[String] */;
static val* varonce410;
static val* varonce412;
val* var413 /* : String */;
char* var414 /* : NativeString */;
val* var415 /* : String */;
static val* varonce416;
val* var417 /* : String */;
char* var418 /* : NativeString */;
val* var419 /* : String */;
static val* varonce420;
val* var421 /* : String */;
char* var422 /* : NativeString */;
val* var423 /* : String */;
val* var424 /* : MClassKind */;
val* var426 /* : MClassKind */;
val* var427 /* : String */;
val* var428 /* : String */;
val* var429 /* : String */;
short int var430 /* : Bool */;
short int var431 /* : Bool */;
short int var432 /* : Bool */;
short int var433 /* : Bool */;
short int var435 /* : Bool */;
short int var436 /* : Bool */;
short int var_437 /* var : Bool */;
val* var438 /* : Sys */;
val* var439 /* : MVisibility */;
short int var440 /* : Bool */;
short int var442 /* : Bool */;
short int var443 /* : Bool */;
short int var_444 /* var : Bool */;
val* var445 /* : MVisibility */;
val* var447 /* : MVisibility */;
short int var448 /* : Bool */;
short int var450 /* : Bool */;
short int var451 /* : Bool */;
val* var453 /* : NativeArray[String] */;
static val* varonce452;
static val* varonce454;
val* var455 /* : String */;
char* var456 /* : NativeString */;
val* var457 /* : String */;
static val* varonce458;
val* var459 /* : String */;
char* var460 /* : NativeString */;
val* var461 /* : String */;
static val* varonce462;
val* var463 /* : String */;
char* var464 /* : NativeString */;
val* var465 /* : String */;
val* var466 /* : MVisibility */;
val* var468 /* : MVisibility */;
val* var469 /* : String */;
val* var470 /* : String */;
val* var471 /* : String */;
val* var473 /* : Map[MClass, AClassdef] */;
val* var475 /* : Map[MClass, AClassdef] */;
short int var476 /* : Bool */;
short int var477 /* : Bool */;
val* var478 /* : Map[MClass, AClassdef] */;
val* var480 /* : Map[MClass, AClassdef] */;
val* var481 /* : Array[AClassdef] */;
val* var_482 /* var : Array[AClassdef] */;
val* var484 /* : Map[MClass, AClassdef] */;
val* var486 /* : Map[MClass, AClassdef] */;
val* var487 /* : nullable Object */;
val* var488 /* : nullable Array[AClassdef] */;
val* var490 /* : nullable Array[AClassdef] */;
var_nmodule = p0;
var_nclassdef = p1;
{
{ /* Inline loader#AModule#mmodule (var_nmodule) on <var_nmodule:AModule> */
var2 = var_nmodule->attrs[COLOR_nitc__loader__AModule___mmodule].val; /* _mmodule on <var_nmodule:AModule> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 40);
fatal_exit(1);
}
var_mmodule = var;
var_arity = 0l;
var3 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[String]>*/
}
var_names = var3;
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype = type_nitc__AStdClassdef.color;
idtype = type_nitc__AStdClassdef.id;
if(cltype >= var_nclassdef->type->table_size) {
var4 = 0;
} else {
var4 = var_nclassdef->type->type_table[cltype] == idtype;
}
if (var4){
{
{ /* Inline parser_nodes#AStdClassdef#n_qid (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var7 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_qid].val; /* _n_qid on <var_nclassdef:AClassdef(AStdClassdef)> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (var5 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 50);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#AQclassid#n_id (var5) on <var5:nullable AQclassid> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1668);
fatal_exit(1);
}
var10 = var5->attrs[COLOR_nitc__parser_nodes__AQclassid___n_id].val; /* _n_id on <var5:nullable AQclassid> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1668);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nitc__lexer_work___Token___text(var8);
}
var_name = var11;
{
{ /* Inline parser_nodes#AStdClassdef#n_classkind (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var14 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_classkind].val; /* _n_classkind on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classkind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1164);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_nkind = var12;
{
var15 = ((val*(*)(val* self))(var_nkind->class->vft[COLOR_nitc__modelize_class__AClasskind__mkind]))(var_nkind); /* mkind on <var_nkind:nullable AClasskind(AClasskind)>*/
}
var_mkind = var15;
{
{ /* Inline parser_nodes#ADefinition#n_visibility (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var18 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <var_nclassdef:AClassdef(AStdClassdef)> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_nvisibility = var16;
if (var_nvisibility == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 54);
fatal_exit(1);
} else {
var19 = ((val*(*)(val* self))(var_nvisibility->class->vft[COLOR_nitc__modelbuilder_base__AVisibility__mvisibility]))(var_nvisibility); /* mvisibility on <var_nvisibility:nullable AVisibility>*/
}
var_mvisibility = var19;
{
{ /* Inline parser_nodes#AStdClassdef#n_formaldefs (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var22 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_formaldefs].val; /* _n_formaldefs on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_formaldefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1173);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = nitc___nitc__ANodes___core__abstract_collection__Collection__length(var20);
}
var_arity = var23;
var24 = glob_sys;
{
var25 = nitc__model_base___core__Sys___protected_visibility(var24);
}
{
{ /* Inline kernel#Object#== (var_mvisibility,var25) on <var_mvisibility:nullable MVisibility(MVisibility)> */
var_other = var25;
{
{ /* Inline kernel#Object#is_same_instance (var_mvisibility,var_other) on <var_mvisibility:nullable MVisibility(MVisibility)> */
var30 = var_mvisibility == var_other;
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
if (var26){
if (likely(varonce!=NULL)) {
var31 = varonce;
} else {
var32 = "Error: only properties can be protected.";
var33 = core__flat___NativeString___to_s_full(var32, 40l, 40l);
var31 = var33;
varonce = var31;
}
{
nitc___nitc__ModelBuilder___error(self, var_nvisibility, var31); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
var34 = glob_sys;
{
var35 = nitc__model_base___core__Sys___intrude_visibility(var34);
}
{
{ /* Inline kernel#Object#== (var_mvisibility,var35) on <var_mvisibility:nullable MVisibility(MVisibility)> */
var_other = var35;
{
{ /* Inline kernel#Object#is_same_instance (var_mvisibility,var_other) on <var_mvisibility:nullable MVisibility(MVisibility)> */
var40 = var_mvisibility == var_other;
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
if (var36){
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "Error: intrude is not a legal visibility for classes.";
var44 = core__flat___NativeString___to_s_full(var43, 53l, 53l);
var42 = var44;
varonce41 = var42;
}
{
nitc___nitc__ModelBuilder___error(self, var_nvisibility, var42); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
}
var_i = 0l;
var_ = var_arity;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var47 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var47)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var50 = var_i < var_;
var45 = var50;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
if (var45){
} else {
goto BREAK_label;
}
{
{ /* Inline parser_nodes#AStdClassdef#n_formaldefs (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var53 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_formaldefs].val; /* _n_formaldefs on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_formaldefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1173);
fatal_exit(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
var54 = nitc___nitc__ANodes___core__abstract_collection__SequenceRead___91d_93d(var51, var_i);
}
var_nfd = var54;
{
{ /* Inline parser_nodes#AFormaldef#n_id (var_nfd) on <var_nfd:AFormaldef> */
var57 = var_nfd->attrs[COLOR_nitc__parser_nodes__AFormaldef___n_id].val; /* _n_id on <var_nfd:AFormaldef> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1257);
fatal_exit(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
var58 = nitc__lexer_work___Token___text(var55);
}
var_ptname = var58;
{
var59 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var_names, var_ptname);
}
if (var59){
if (unlikely(varonce60==NULL)) {
var61 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = "Error: a formal parameter type `";
var65 = core__flat___NativeString___to_s_full(var64, 32l, 32l);
var63 = var65;
varonce62 = var63;
}
((struct instance_core__NativeArray*)var61)->values[0]=var63;
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = "` already exists.";
var69 = core__flat___NativeString___to_s_full(var68, 17l, 17l);
var67 = var69;
varonce66 = var67;
}
((struct instance_core__NativeArray*)var61)->values[2]=var67;
} else {
var61 = varonce60;
varonce60 = NULL;
}
((struct instance_core__NativeArray*)var61)->values[1]=var_ptname;
{
var70 = ((val*(*)(val* self))(var61->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var61); /* native_to_s on <var61:NativeArray[String]>*/
}
varonce60 = var61;
{
nitc___nitc__ModelBuilder___error(self, var_nfd, var70); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
var71 = ((val*(*)(val* self))(var_ptname->class->vft[COLOR_core__abstract_text__Text__chars]))(var_ptname); /* chars on <var_ptname:String>*/
}
var_72 = var71;
{
var73 = ((val*(*)(val* self))((((long)var_72&3)?class_info[((long)var_72&3)]:var_72->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_72); /* iterator on <var_72:SequenceRead[Char]>*/
}
var_74 = var73;
for(;;) {
{
var75 = ((short int(*)(val* self))((((long)var_74&3)?class_info[((long)var_74&3)]:var_74->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_74); /* is_ok on <var_74:IndexedIterator[Char]>*/
}
if (var75){
} else {
goto BREAK_label76;
}
{
var77 = ((val*(*)(val* self))((((long)var_74&3)?class_info[((long)var_74&3)]:var_74->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_74); /* item on <var_74:IndexedIterator[Char]>*/
}
var78 = (uint32_t)((long)(var77)>>2);
var_c = var78;
{
{ /* Inline kernel#Char#>= (var_c,'a') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'a':Char> isa OTHER */
/* <'a':Char> isa OTHER */
var82 = 1; /* easy <'a':Char> isa OTHER*/
if (unlikely(!var82)) {
var_class_name85 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name85);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 924);
fatal_exit(1);
}
var86 = var_c >= 'a';
var80 = var86;
goto RET_LABEL81;
RET_LABEL81:(void)0;
}
}
var_87 = var80;
if (var80){
{
{ /* Inline kernel#Char#<= (var_c,'z') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'z':Char> isa OTHER */
/* <'z':Char> isa OTHER */
var90 = 1; /* easy <'z':Char> isa OTHER*/
if (unlikely(!var90)) {
var_class_name93 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name93);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 922);
fatal_exit(1);
}
var94 = var_c <= 'z';
var88 = var94;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
}
var79 = var88;
} else {
var79 = var_87;
}
if (var79){
if (likely(varonce95!=NULL)) {
var96 = varonce95;
} else {
var97 = "formal-type-name";
var98 = core__flat___NativeString___to_s_full(var97, 16l, 16l);
var96 = var98;
varonce95 = var96;
}
if (unlikely(varonce99==NULL)) {
var100 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce101!=NULL)) {
var102 = varonce101;
} else {
var103 = "Warning: lowercase in the formal parameter type `";
var104 = core__flat___NativeString___to_s_full(var103, 49l, 49l);
var102 = var104;
varonce101 = var102;
}
((struct instance_core__NativeArray*)var100)->values[0]=var102;
if (likely(varonce105!=NULL)) {
var106 = varonce105;
} else {
var107 = "`.";
var108 = core__flat___NativeString___to_s_full(var107, 2l, 2l);
var106 = var108;
varonce105 = var106;
}
((struct instance_core__NativeArray*)var100)->values[2]=var106;
} else {
var100 = varonce99;
varonce99 = NULL;
}
((struct instance_core__NativeArray*)var100)->values[1]=var_ptname;
{
var109 = ((val*(*)(val* self))(var100->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var100); /* native_to_s on <var100:NativeArray[String]>*/
}
varonce99 = var100;
{
nitc___nitc__ModelBuilder___warning(self, var_nfd, var96, var109); /* Direct call modelbuilder_base#ModelBuilder#warning on <self:ModelBuilder>*/
}
goto BREAK_label76;
} else {
}
{
((void(*)(val* self))((((long)var_74&3)?class_info[((long)var_74&3)]:var_74->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_74); /* next on <var_74:IndexedIterator[Char]>*/
}
}
BREAK_label76: (void)0;
{
((void(*)(val* self))((((long)var_74&3)?class_info[((long)var_74&3)]:var_74->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_74); /* finish on <var_74:IndexedIterator[Char]>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_names, var_ptname); /* Direct call array#Array#add on <var_names:Array[String]>*/
}
{
var110 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var110;
}
BREAK_label: (void)0;
} else {
/* <var_nclassdef:AClassdef> isa ATopClassdef */
cltype113 = type_nitc__ATopClassdef.color;
idtype114 = type_nitc__ATopClassdef.id;
if(cltype113 >= var_nclassdef->type->table_size) {
var112 = 0;
} else {
var112 = var_nclassdef->type->type_table[cltype113] == idtype114;
}
var_115 = var112;
if (var112){
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_nclassdef) on <var_nclassdef:AClassdef(ATopClassdef)> */
var118 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef:AClassdef(ATopClassdef)> */
if (unlikely(var118 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1155);
fatal_exit(1);
}
var116 = var118;
RET_LABEL117:(void)0;
}
}
{
var119 = core___core__SequenceRead___Collection__first(var116);
}
/* <var119:nullable Object(APropdef)> isa AMethPropdef */
cltype121 = type_nitc__AMethPropdef.color;
idtype122 = type_nitc__AMethPropdef.id;
if(cltype121 >= var119->type->table_size) {
var120 = 0;
} else {
var120 = var119->type->type_table[cltype121] == idtype122;
}
if (unlikely(!var120)) {
var_class_name123 = var119 == NULL ? "null" : var119->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AMethPropdef", var_class_name123);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 78);
fatal_exit(1);
}
{
{ /* Inline parser_nodes#AMethPropdef#n_methid (var119) on <var119:APropdef(AMethPropdef)> */
var126 = var119->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <var119:APropdef(AMethPropdef)> */
var124 = var126;
RET_LABEL125:(void)0;
}
}
if (var124 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 78);
fatal_exit(1);
} else {
var127 = nitc__parser_work___Prod___collect_text(var124);
}
if (likely(varonce128!=NULL)) {
var129 = varonce128;
} else {
var130 = "sys";
var131 = core__flat___NativeString___to_s_full(var130, 3l, 3l);
var129 = var131;
varonce128 = var129;
}
{
var132 = ((short int(*)(val* self, val* p0))(var127->class->vft[COLOR_core__kernel__Object___61d_61d]))(var127, var129); /* == on <var127:String>*/
}
var111 = var132;
} else {
var111 = var_115;
}
if (var111){
if (likely(varonce133!=NULL)) {
var134 = varonce133;
} else {
var135 = "Object";
var136 = core__flat___NativeString___to_s_full(var135, 6l, 6l);
var134 = var136;
varonce133 = var134;
}
var_name = var134;
var_nkind = ((val*)NULL);
var137 = glob_sys;
{
var138 = nitc__model___core__Sys___interface_kind(var137);
}
var_mkind = var138;
var_nvisibility = ((val*)NULL);
var139 = glob_sys;
{
var140 = nitc__model_base___core__Sys___public_visibility(var139);
}
var_mvisibility = var140;
} else {
if (likely(varonce141!=NULL)) {
var142 = varonce141;
} else {
var143 = "Sys";
var144 = core__flat___NativeString___to_s_full(var143, 3l, 3l);
var142 = var144;
varonce141 = var142;
}
var_name = var142;
var_nkind = ((val*)NULL);
var145 = glob_sys;
{
var146 = nitc__model___core__Sys___concrete_kind(var145);
}
var_mkind = var146;
var_nvisibility = ((val*)NULL);
var147 = glob_sys;
{
var148 = nitc__model_base___core__Sys___public_visibility(var147);
}
var_mvisibility = var148;
}
}
{
var149 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(self, var_nclassdef, var_mmodule, var_name);
}
var_mclass = var149;
if (var_mclass == NULL) {
var150 = 1; /* is null */
} else {
var150 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mclass,((val*)NULL)) on <var_mclass:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
var155 = var_mclass == var_other;
var153 = var155;
goto RET_LABEL154;
RET_LABEL154:(void)0;
}
}
var151 = var153;
goto RET_LABEL152;
RET_LABEL152:(void)0;
}
var150 = var151;
}
if (var150){
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype158 = type_nitc__AStdClassdef.color;
idtype159 = type_nitc__AStdClassdef.id;
if(cltype158 >= var_nclassdef->type->table_size) {
var157 = 0;
} else {
var157 = var_nclassdef->type->type_table[cltype158] == idtype159;
}
var_160 = var157;
if (var157){
{
{ /* Inline parser_nodes#ADefinition#n_kwredef (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var163 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <var_nclassdef:AClassdef(AStdClassdef)> */
var161 = var163;
RET_LABEL162:(void)0;
}
}
if (var161 == NULL) {
var164 = 0; /* is null */
} else {
var164 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var161,((val*)NULL)) on <var161:nullable TKwredef> */
var_other167 = ((val*)NULL);
{
var168 = ((short int(*)(val* self, val* p0))(var161->class->vft[COLOR_core__kernel__Object___61d_61d]))(var161, var_other167); /* == on <var161:nullable TKwredef(TKwredef)>*/
}
var169 = !var168;
var165 = var169;
goto RET_LABEL166;
RET_LABEL166:(void)0;
}
var164 = var165;
}
var156 = var164;
} else {
var156 = var_160;
}
if (var156){
if (unlikely(varonce170==NULL)) {
var171 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce172!=NULL)) {
var173 = varonce172;
} else {
var174 = "Redef Error: no imported class `";
var175 = core__flat___NativeString___to_s_full(var174, 32l, 32l);
var173 = var175;
varonce172 = var173;
}
((struct instance_core__NativeArray*)var171)->values[0]=var173;
if (likely(varonce176!=NULL)) {
var177 = varonce176;
} else {
var178 = "` to refine.";
var179 = core__flat___NativeString___to_s_full(var178, 12l, 12l);
var177 = var179;
varonce176 = var177;
}
((struct instance_core__NativeArray*)var171)->values[2]=var177;
} else {
var171 = varonce170;
varonce170 = NULL;
}
((struct instance_core__NativeArray*)var171)->values[1]=var_name;
{
var180 = ((val*(*)(val* self))(var171->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var171); /* native_to_s on <var171:NativeArray[String]>*/
}
varonce170 = var171;
{
nitc___nitc__ModelBuilder___error(self, var_nclassdef, var180); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline mmodule#MModule#mgroup (var_mmodule) on <var_mmodule:MModule> */
var184 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___mgroup].val; /* _mgroup on <var_mmodule:MModule> */
var182 = var184;
RET_LABEL183:(void)0;
}
}
if (var182 == NULL) {
var185 = 0; /* is null */
} else {
var185 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var182,((val*)NULL)) on <var182:nullable MGroup> */
var_other167 = ((val*)NULL);
{
var188 = ((short int(*)(val* self, val* p0))(var182->class->vft[COLOR_core__kernel__Object___61d_61d]))(var182, var_other167); /* == on <var182:nullable MGroup(MGroup)>*/
}
var189 = !var188;
var186 = var189;
goto RET_LABEL187;
RET_LABEL187:(void)0;
}
var185 = var186;
}
var_190 = var185;
if (var185){
var191 = glob_sys;
{
var192 = nitc__model_base___core__Sys___protected_visibility(var191);
}
{
var193 = core___core__Comparable____62d_61d(var_mvisibility, var192);
}
var181 = var193;
} else {
var181 = var_190;
}
if (var181){
{
{ /* Inline modelbuilder_base#ModelBuilder#model (self) on <self:ModelBuilder> */
var196 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var196 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 44);
fatal_exit(1);
}
var194 = var196;
RET_LABEL195:(void)0;
}
}
{
var197 = nitc__model___Model___get_mclasses_by_name(var194, var_name);
}
var_mclasses = var197;
if (var_mclasses == NULL) {
var198 = 0; /* is null */
} else {
var198 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mclasses,((val*)NULL)) on <var_mclasses:nullable Array[MClass]> */
var_other167 = ((val*)NULL);
{
var201 = ((short int(*)(val* self, val* p0))(var_mclasses->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mclasses, var_other167); /* == on <var_mclasses:nullable Array[MClass](Array[MClass])>*/
}
var202 = !var201;
var199 = var202;
goto RET_LABEL200;
RET_LABEL200:(void)0;
}
var198 = var199;
}
if (var198){
var_203 = var_mclasses;
{
var204 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_203);
}
var_205 = var204;
for(;;) {
{
var206 = ((short int(*)(val* self))((((long)var_205&3)?class_info[((long)var_205&3)]:var_205->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_205); /* is_ok on <var_205:IndexedIterator[MClass]>*/
}
if (var206){
} else {
goto BREAK_label207;
}
{
var208 = ((val*(*)(val* self))((((long)var_205&3)?class_info[((long)var_205&3)]:var_205->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_205); /* item on <var_205:IndexedIterator[MClass]>*/
}
var_other209 = var208;
{
{ /* Inline model#MClass#intro_mmodule (var_other209) on <var_other209:MClass> */
var213 = var_other209->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_other209:MClass> */
if (unlikely(var213 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 380);
fatal_exit(1);
}
var211 = var213;
RET_LABEL212:(void)0;
}
}
{
{ /* Inline mmodule#MModule#mgroup (var211) on <var211:MModule> */
var216 = var211->attrs[COLOR_nitc__mmodule__MModule___mgroup].val; /* _mgroup on <var211:MModule> */
var214 = var216;
RET_LABEL215:(void)0;
}
}
if (var214 == NULL) {
var217 = 0; /* is null */
} else {
var217 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var214,((val*)NULL)) on <var214:nullable MGroup> */
var_other167 = ((val*)NULL);
{
var220 = ((short int(*)(val* self, val* p0))(var214->class->vft[COLOR_core__kernel__Object___61d_61d]))(var214, var_other167); /* == on <var214:nullable MGroup(MGroup)>*/
}
var221 = !var220;
var218 = var221;
goto RET_LABEL219;
RET_LABEL219:(void)0;
}
var217 = var218;
}
var_222 = var217;
if (var217){
{
{ /* Inline model#MClass#intro_mmodule (var_other209) on <var_other209:MClass> */
var225 = var_other209->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_other209:MClass> */
if (unlikely(var225 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 380);
fatal_exit(1);
}
var223 = var225;
RET_LABEL224:(void)0;
}
}
{
{ /* Inline mmodule#MModule#mgroup (var223) on <var223:MModule> */
var228 = var223->attrs[COLOR_nitc__mmodule__MModule___mgroup].val; /* _mgroup on <var223:MModule> */
var226 = var228;
RET_LABEL227:(void)0;
}
}
if (var226 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 106);
fatal_exit(1);
} else {
{ /* Inline mpackage#MGroup#mpackage (var226) on <var226:nullable MGroup> */
if (unlikely(var226 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 69);
fatal_exit(1);
}
var231 = var226->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val; /* _mpackage on <var226:nullable MGroup> */
if (unlikely(var231 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 69);
fatal_exit(1);
}
var229 = var231;
RET_LABEL230:(void)0;
}
}
{
{ /* Inline mmodule#MModule#mgroup (var_mmodule) on <var_mmodule:MModule> */
var234 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___mgroup].val; /* _mgroup on <var_mmodule:MModule> */
var232 = var234;
RET_LABEL233:(void)0;
}
}
if (var232 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 106);
fatal_exit(1);
} else {
{ /* Inline mpackage#MGroup#mpackage (var232) on <var232:nullable MGroup> */
if (unlikely(var232 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 69);
fatal_exit(1);
}
var237 = var232->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val; /* _mpackage on <var232:nullable MGroup> */
if (unlikely(var237 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 69);
fatal_exit(1);
}
var235 = var237;
RET_LABEL236:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var229,var235) on <var229:MPackage> */
var_other = var235;
{
{ /* Inline kernel#Object#is_same_instance (var229,var_other) on <var229:MPackage> */
var242 = var229 == var_other;
var240 = var242;
goto RET_LABEL241;
RET_LABEL241:(void)0;
}
}
var238 = var240;
goto RET_LABEL239;
RET_LABEL239:(void)0;
}
}
var210 = var238;
} else {
var210 = var_222;
}
if (var210){
{
var243 = nitc___nitc__MClass___try_intro(var_other209);
}
if (var243 == NULL) {
var244 = 1; /* is null */
} else {
var244 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var243,((val*)NULL)) on <var243:nullable MClassDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var243,var_other) on <var243:nullable MClassDef(MClassDef)> */
var249 = var243 == var_other;
var247 = var249;
goto RET_LABEL248;
RET_LABEL248:(void)0;
}
}
var245 = var247;
goto RET_LABEL246;
RET_LABEL246:(void)0;
}
var244 = var245;
}
if (var244){
goto BREAK_label250;
} else {
}
if (likely(varonce251!=NULL)) {
var252 = varonce251;
} else {
var253 = "full-name-conflict";
var254 = core__flat___NativeString___to_s_full(var253, 18l, 18l);
var252 = var254;
varonce251 = var252;
}
if (unlikely(varonce255==NULL)) {
var256 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce257!=NULL)) {
var258 = varonce257;
} else {
var259 = "Error: a class named `";
var260 = core__flat___NativeString___to_s_full(var259, 22l, 22l);
var258 = var260;
varonce257 = var258;
}
((struct instance_core__NativeArray*)var256)->values[0]=var258;
if (likely(varonce261!=NULL)) {
var262 = varonce261;
} else {
var263 = "` is already defined in module `";
var264 = core__flat___NativeString___to_s_full(var263, 32l, 32l);
var262 = var264;
varonce261 = var262;
}
((struct instance_core__NativeArray*)var256)->values[2]=var262;
if (likely(varonce265!=NULL)) {
var266 = varonce265;
} else {
var267 = "` at ";
var268 = core__flat___NativeString___to_s_full(var267, 5l, 5l);
var266 = var268;
varonce265 = var266;
}
((struct instance_core__NativeArray*)var256)->values[4]=var266;
if (likely(varonce269!=NULL)) {
var270 = varonce269;
} else {
var271 = ".";
var272 = core__flat___NativeString___to_s_full(var271, 1l, 1l);
var270 = var272;
varonce269 = var270;
}
((struct instance_core__NativeArray*)var256)->values[6]=var270;
} else {
var256 = varonce255;
varonce255 = NULL;
}
{
var273 = nitc___nitc__MClass___nitc__model_base__MEntity__full_name(var_other209);
}
((struct instance_core__NativeArray*)var256)->values[1]=var273;
{
{ /* Inline model#MClass#intro_mmodule (var_other209) on <var_other209:MClass> */
var276 = var_other209->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_other209:MClass> */
if (unlikely(var276 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 380);
fatal_exit(1);
}
var274 = var276;
RET_LABEL275:(void)0;
}
}
{
var277 = ((val*(*)(val* self))(var274->class->vft[COLOR_core__abstract_text__Object__to_s]))(var274); /* to_s on <var274:MModule>*/
}
((struct instance_core__NativeArray*)var256)->values[3]=var277;
{
{ /* Inline model#MClass#intro (var_other209) on <var_other209:MClass> */
var280 = var_other209->attrs[COLOR_nitc__model__MClass___intro].val; /* _intro on <var_other209:MClass> */
if (unlikely(var280 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 483);
fatal_exit(1);
}
var278 = var280;
RET_LABEL279:(void)0;
}
}
{
{ /* Inline model#MClassDef#location (var278) on <var278:MClassDef> */
var283 = var278->attrs[COLOR_nitc__model__MClassDef___location].val; /* _location on <var278:MClassDef> */
if (unlikely(var283 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var281 = var283;
RET_LABEL282:(void)0;
}
}
{
var284 = ((val*(*)(val* self))(var281->class->vft[COLOR_core__abstract_text__Object__to_s]))(var281); /* to_s on <var281:Location>*/
}
((struct instance_core__NativeArray*)var256)->values[5]=var284;
{
var285 = ((val*(*)(val* self))(var256->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var256); /* native_to_s on <var256:NativeArray[String]>*/
}
varonce255 = var256;
{
nitc___nitc__ModelBuilder___warning(self, var_nclassdef, var252, var285); /* Direct call modelbuilder_base#ModelBuilder#warning on <self:ModelBuilder>*/
}
goto BREAK_label207;
} else {
}
BREAK_label250: (void)0;
{
((void(*)(val* self))((((long)var_205&3)?class_info[((long)var_205&3)]:var_205->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_205); /* next on <var_205:IndexedIterator[MClass]>*/
}
}
BREAK_label207: (void)0;
{
((void(*)(val* self))((((long)var_205&3)?class_info[((long)var_205&3)]:var_205->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_205); /* finish on <var_205:IndexedIterator[MClass]>*/
}
} else {
}
} else {
}
var286 = NEW_nitc__MClass(&type_nitc__MClass);
{
((void(*)(val* self, val* p0))(var286->class->vft[COLOR_nitc__model__MClass__intro_mmodule_61d]))(var286, var_mmodule); /* intro_mmodule= on <var286:MClass>*/
}
{
((void(*)(val* self, val* p0))(var286->class->vft[COLOR_nitc__model__MClass__name_61d]))(var286, var_name); /* name= on <var286:MClass>*/
}
{
((void(*)(val* self, val* p0))(var286->class->vft[COLOR_nitc__model__MClass__setup_parameter_names]))(var286, var_names); /* setup_parameter_names on <var286:MClass>*/
}
{
((void(*)(val* self, val* p0))(var286->class->vft[COLOR_nitc__model__MClass__kind_61d]))(var286, var_mkind); /* kind= on <var286:MClass>*/
}
{
((void(*)(val* self, val* p0))(var286->class->vft[COLOR_nitc__model__MClass__visibility_61d]))(var286, var_mvisibility); /* visibility= on <var286:MClass>*/
}
{
((void(*)(val* self))(var286->class->vft[COLOR_core__kernel__Object__init]))(var286); /* init on <var286:MClass>*/
}
var_mclass = var286;
} else {
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype289 = type_nitc__AStdClassdef.color;
idtype290 = type_nitc__AStdClassdef.id;
if(cltype289 >= var_nclassdef->type->table_size) {
var288 = 0;
} else {
var288 = var_nclassdef->type->type_table[cltype289] == idtype290;
}
var_291 = var288;
if (var288){
{
{ /* Inline modelize_class#AModule#mclass2nclassdef (var_nmodule) on <var_nmodule:AModule> */
var294 = var_nmodule->attrs[COLOR_nitc__modelize_class__AModule___mclass2nclassdef].val; /* _mclass2nclassdef on <var_nmodule:AModule> */
if (unlikely(var294 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 450);
fatal_exit(1);
}
var292 = var294;
RET_LABEL293:(void)0;
}
}
{
var295 = ((short int(*)(val* self, val* p0))((((long)var292&3)?class_info[((long)var292&3)]:var292->class)->vft[COLOR_core__abstract_collection__MapRead__has_key]))(var292, var_mclass); /* has_key on <var292:Map[MClass, AClassdef]>*/
}
var287 = var295;
} else {
var287 = var_291;
}
if (var287){
if (unlikely(varonce296==NULL)) {
var297 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce298!=NULL)) {
var299 = varonce298;
} else {
var300 = "Error: a class `";
var301 = core__flat___NativeString___to_s_full(var300, 16l, 16l);
var299 = var301;
varonce298 = var299;
}
((struct instance_core__NativeArray*)var297)->values[0]=var299;
if (likely(varonce302!=NULL)) {
var303 = varonce302;
} else {
var304 = "` is already defined at line ";
var305 = core__flat___NativeString___to_s_full(var304, 29l, 29l);
var303 = var305;
varonce302 = var303;
}
((struct instance_core__NativeArray*)var297)->values[2]=var303;
if (likely(varonce306!=NULL)) {
var307 = varonce306;
} else {
var308 = ".";
var309 = core__flat___NativeString___to_s_full(var308, 1l, 1l);
var307 = var309;
varonce306 = var307;
}
((struct instance_core__NativeArray*)var297)->values[4]=var307;
} else {
var297 = varonce296;
varonce296 = NULL;
}
((struct instance_core__NativeArray*)var297)->values[1]=var_name;
{
{ /* Inline modelize_class#AModule#mclass2nclassdef (var_nmodule) on <var_nmodule:AModule> */
var312 = var_nmodule->attrs[COLOR_nitc__modelize_class__AModule___mclass2nclassdef].val; /* _mclass2nclassdef on <var_nmodule:AModule> */
if (unlikely(var312 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 450);
fatal_exit(1);
}
var310 = var312;
RET_LABEL311:(void)0;
}
}
{
var313 = ((val*(*)(val* self, val* p0))((((long)var310&3)?class_info[((long)var310&3)]:var310->class)->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var310, var_mclass); /* [] on <var310:Map[MClass, AClassdef]>*/
}
{
{ /* Inline parser_nodes#ANode#location (var313) on <var313:nullable Object(AClassdef)> */
var316 = var313->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var313:nullable Object(AClassdef)> */
if (unlikely(var316 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 24);
fatal_exit(1);
}
var314 = var316;
RET_LABEL315:(void)0;
}
}
{
{ /* Inline location#Location#line_start (var314) on <var314:Location> */
var319 = var314->attrs[COLOR_nitc__location__Location___line_start].l; /* _line_start on <var314:Location> */
var317 = var319;
RET_LABEL318:(void)0;
}
}
var320 = core__flat___Int___core__abstract_text__Object__to_s(var317);
((struct instance_core__NativeArray*)var297)->values[3]=var320;
{
var321 = ((val*(*)(val* self))(var297->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var297); /* native_to_s on <var297:NativeArray[String]>*/
}
varonce296 = var297;
{
nitc___nitc__ModelBuilder___error(self, var_nclassdef, var321); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
{
{ /* Inline model_base#MEntity#is_broken= (var_mclass,1) on <var_mclass:nullable MClass(MClass)> */
var_mclass->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mclass:nullable MClass(MClass)> */
RET_LABEL322:(void)0;
}
}
goto RET_LABEL;
} else {
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype325 = type_nitc__AStdClassdef.color;
idtype326 = type_nitc__AStdClassdef.id;
if(cltype325 >= var_nclassdef->type->table_size) {
var324 = 0;
} else {
var324 = var_nclassdef->type->type_table[cltype325] == idtype326;
}
var_327 = var324;
if (var324){
{
{ /* Inline parser_nodes#ADefinition#n_kwredef (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var330 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <var_nclassdef:AClassdef(AStdClassdef)> */
var328 = var330;
RET_LABEL329:(void)0;
}
}
if (var328 == NULL) {
var331 = 1; /* is null */
} else {
var331 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var328,((val*)NULL)) on <var328:nullable TKwredef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var328,var_other) on <var328:nullable TKwredef(TKwredef)> */
var336 = var328 == var_other;
var334 = var336;
goto RET_LABEL335;
RET_LABEL335:(void)0;
}
}
var332 = var334;
goto RET_LABEL333;
RET_LABEL333:(void)0;
}
var331 = var332;
}
var323 = var331;
} else {
var323 = var_327;
}
if (var323){
if (unlikely(varonce337==NULL)) {
var338 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce339!=NULL)) {
var340 = varonce339;
} else {
var341 = "Redef Error: `";
var342 = core__flat___NativeString___to_s_full(var341, 14l, 14l);
var340 = var342;
varonce339 = var340;
}
((struct instance_core__NativeArray*)var338)->values[0]=var340;
if (likely(varonce343!=NULL)) {
var344 = varonce343;
} else {
var345 = "` is an imported class. Add the `redef` keyword to refine it.";
var346 = core__flat___NativeString___to_s_full(var345, 61l, 61l);
var344 = var346;
varonce343 = var344;
}
((struct instance_core__NativeArray*)var338)->values[2]=var344;
} else {
var338 = varonce337;
varonce337 = NULL;
}
((struct instance_core__NativeArray*)var338)->values[1]=var_name;
{
var347 = ((val*(*)(val* self))(var338->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var338); /* native_to_s on <var338:NativeArray[String]>*/
}
varonce337 = var338;
{
nitc___nitc__ModelBuilder___error(self, var_nclassdef, var347); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
{
{ /* Inline model_base#MEntity#is_broken= (var_mclass,1) on <var_mclass:nullable MClass(MClass)> */
var_mclass->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mclass:nullable MClass(MClass)> */
RET_LABEL348:(void)0;
}
}
goto RET_LABEL;
} else {
{
{ /* Inline kernel#Int#!= (var_arity,0l) on <var_arity:Int> */
var352 = var_arity == 0l;
var353 = !var352;
var350 = var353;
goto RET_LABEL351;
RET_LABEL351:(void)0;
}
}
var_354 = var350;
if (var350){
{
{ /* Inline model#MClass#arity (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var357 = var_mclass->attrs[COLOR_nitc__model__MClass___arity].l; /* _arity on <var_mclass:nullable MClass(MClass)> */
var355 = var357;
RET_LABEL356:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var355,var_arity) on <var355:Int> */
var360 = var355 == var_arity;
var361 = !var360;
var358 = var361;
goto RET_LABEL359;
RET_LABEL359:(void)0;
}
}
var349 = var358;
} else {
var349 = var_354;
}
if (var349){
if (unlikely(varonce362==NULL)) {
var363 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce364!=NULL)) {
var365 = varonce364;
} else {
var366 = "Redef Error: expected ";
var367 = core__flat___NativeString___to_s_full(var366, 22l, 22l);
var365 = var367;
varonce364 = var365;
}
((struct instance_core__NativeArray*)var363)->values[0]=var365;
if (likely(varonce368!=NULL)) {
var369 = varonce368;
} else {
var370 = " formal parameter(s) for ";
var371 = core__flat___NativeString___to_s_full(var370, 25l, 25l);
var369 = var371;
varonce368 = var369;
}
((struct instance_core__NativeArray*)var363)->values[2]=var369;
if (likely(varonce372!=NULL)) {
var373 = varonce372;
} else {
var374 = "; got ";
var375 = core__flat___NativeString___to_s_full(var374, 6l, 6l);
var373 = var375;
varonce372 = var373;
}
((struct instance_core__NativeArray*)var363)->values[4]=var373;
if (likely(varonce376!=NULL)) {
var377 = varonce376;
} else {
var378 = ".";
var379 = core__flat___NativeString___to_s_full(var378, 1l, 1l);
var377 = var379;
varonce376 = var377;
}
((struct instance_core__NativeArray*)var363)->values[6]=var377;
} else {
var363 = varonce362;
varonce362 = NULL;
}
{
{ /* Inline model#MClass#arity (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var382 = var_mclass->attrs[COLOR_nitc__model__MClass___arity].l; /* _arity on <var_mclass:nullable MClass(MClass)> */
var380 = var382;
RET_LABEL381:(void)0;
}
}
var383 = core__flat___Int___core__abstract_text__Object__to_s(var380);
((struct instance_core__NativeArray*)var363)->values[1]=var383;
{
var384 = nitc___nitc__MClass___signature_to_s(var_mclass);
}
((struct instance_core__NativeArray*)var363)->values[3]=var384;
var385 = core__flat___Int___core__abstract_text__Object__to_s(var_arity);
((struct instance_core__NativeArray*)var363)->values[5]=var385;
{
var386 = ((val*(*)(val* self))(var363->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var363); /* native_to_s on <var363:NativeArray[String]>*/
}
varonce362 = var363;
{
nitc___nitc__ModelBuilder___error(self, var_nclassdef, var386); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
{
{ /* Inline model_base#MEntity#is_broken= (var_mclass,1) on <var_mclass:nullable MClass(MClass)> */
var_mclass->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mclass:nullable MClass(MClass)> */
RET_LABEL387:(void)0;
}
}
goto RET_LABEL;
} else {
if (var_nkind == NULL) {
var390 = 0; /* is null */
} else {
var390 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nkind,((val*)NULL)) on <var_nkind:nullable AClasskind> */
var_other167 = ((val*)NULL);
{
var393 = ((short int(*)(val* self, val* p0))(var_nkind->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nkind, var_other167); /* == on <var_nkind:nullable AClasskind(AClasskind)>*/
}
var394 = !var393;
var391 = var394;
goto RET_LABEL392;
RET_LABEL392:(void)0;
}
var390 = var391;
}
var_395 = var390;
if (var390){
var396 = glob_sys;
{
var397 = nitc__model___core__Sys___concrete_kind(var396);
}
{
{ /* Inline kernel#Object#!= (var_mkind,var397) on <var_mkind:MClassKind> */
var_other167 = var397;
{
var400 = ((short int(*)(val* self, val* p0))(var_mkind->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mkind, var_other167); /* == on <var_mkind:MClassKind>*/
}
var401 = !var400;
var398 = var401;
goto RET_LABEL399;
RET_LABEL399:(void)0;
}
}
var389 = var398;
} else {
var389 = var_395;
}
var_402 = var389;
if (var389){
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var405 = var_mclass->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var405 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 459);
fatal_exit(1);
}
var403 = var405;
RET_LABEL404:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var403,var_mkind) on <var403:MClassKind> */
var_other167 = var_mkind;
{
var408 = ((short int(*)(val* self, val* p0))(var403->class->vft[COLOR_core__kernel__Object___61d_61d]))(var403, var_other167); /* == on <var403:MClassKind>*/
}
var409 = !var408;
var406 = var409;
goto RET_LABEL407;
RET_LABEL407:(void)0;
}
}
var388 = var406;
} else {
var388 = var_402;
}
if (var388){
if (unlikely(varonce410==NULL)) {
var411 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce412!=NULL)) {
var413 = varonce412;
} else {
var414 = "Redef Error: refinement changed the kind from `";
var415 = core__flat___NativeString___to_s_full(var414, 47l, 47l);
var413 = var415;
varonce412 = var413;
}
((struct instance_core__NativeArray*)var411)->values[0]=var413;
if (likely(varonce416!=NULL)) {
var417 = varonce416;
} else {
var418 = "` to `";
var419 = core__flat___NativeString___to_s_full(var418, 6l, 6l);
var417 = var419;
varonce416 = var417;
}
((struct instance_core__NativeArray*)var411)->values[2]=var417;
if (likely(varonce420!=NULL)) {
var421 = varonce420;
} else {
var422 = "`.";
var423 = core__flat___NativeString___to_s_full(var422, 2l, 2l);
var421 = var423;
varonce420 = var421;
}
((struct instance_core__NativeArray*)var411)->values[4]=var421;
} else {
var411 = varonce410;
varonce410 = NULL;
}
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var426 = var_mclass->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var426 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 459);
fatal_exit(1);
}
var424 = var426;
RET_LABEL425:(void)0;
}
}
{
var427 = ((val*(*)(val* self))(var424->class->vft[COLOR_core__abstract_text__Object__to_s]))(var424); /* to_s on <var424:MClassKind>*/
}
((struct instance_core__NativeArray*)var411)->values[1]=var427;
{
var428 = ((val*(*)(val* self))(var_mkind->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mkind); /* to_s on <var_mkind:MClassKind>*/
}
((struct instance_core__NativeArray*)var411)->values[3]=var428;
{
var429 = ((val*(*)(val* self))(var411->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var411); /* native_to_s on <var411:NativeArray[String]>*/
}
varonce410 = var411;
{
nitc___nitc__ModelBuilder___error(self, var_nkind, var429); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
if (var_nvisibility == NULL) {
var432 = 0; /* is null */
} else {
var432 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nvisibility,((val*)NULL)) on <var_nvisibility:nullable AVisibility> */
var_other167 = ((val*)NULL);
{
var435 = ((short int(*)(val* self, val* p0))(var_nvisibility->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nvisibility, var_other167); /* == on <var_nvisibility:nullable AVisibility(AVisibility)>*/
}
var436 = !var435;
var433 = var436;
goto RET_LABEL434;
RET_LABEL434:(void)0;
}
var432 = var433;
}
var_437 = var432;
if (var432){
var438 = glob_sys;
{
var439 = nitc__model_base___core__Sys___public_visibility(var438);
}
{
{ /* Inline kernel#Object#!= (var_mvisibility,var439) on <var_mvisibility:nullable MVisibility(MVisibility)> */
var_other167 = var439;
{
var442 = ((short int(*)(val* self, val* p0))(var_mvisibility->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mvisibility, var_other167); /* == on <var_mvisibility:nullable MVisibility(MVisibility)>*/
}
var443 = !var442;
var440 = var443;
goto RET_LABEL441;
RET_LABEL441:(void)0;
}
}
var431 = var440;
} else {
var431 = var_437;
}
var_444 = var431;
if (var431){
{
{ /* Inline model#MClass#visibility (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var447 = var_mclass->attrs[COLOR_nitc__model__MClass___visibility].val; /* _visibility on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var447 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 463);
fatal_exit(1);
}
var445 = var447;
RET_LABEL446:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var445,var_mvisibility) on <var445:MVisibility> */
var_other167 = var_mvisibility;
{
var450 = ((short int(*)(val* self, val* p0))(var445->class->vft[COLOR_core__kernel__Object___61d_61d]))(var445, var_other167); /* == on <var445:MVisibility>*/
}
var451 = !var450;
var448 = var451;
goto RET_LABEL449;
RET_LABEL449:(void)0;
}
}
var430 = var448;
} else {
var430 = var_444;
}
if (var430){
if (unlikely(varonce452==NULL)) {
var453 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce454!=NULL)) {
var455 = varonce454;
} else {
var456 = "Redef Error: refinement changed the visibility from `";
var457 = core__flat___NativeString___to_s_full(var456, 53l, 53l);
var455 = var457;
varonce454 = var455;
}
((struct instance_core__NativeArray*)var453)->values[0]=var455;
if (likely(varonce458!=NULL)) {
var459 = varonce458;
} else {
var460 = "` to `";
var461 = core__flat___NativeString___to_s_full(var460, 6l, 6l);
var459 = var461;
varonce458 = var459;
}
((struct instance_core__NativeArray*)var453)->values[2]=var459;
if (likely(varonce462!=NULL)) {
var463 = varonce462;
} else {
var464 = "`";
var465 = core__flat___NativeString___to_s_full(var464, 1l, 1l);
var463 = var465;
varonce462 = var463;
}
((struct instance_core__NativeArray*)var453)->values[4]=var463;
} else {
var453 = varonce452;
varonce452 = NULL;
}
{
{ /* Inline model#MClass#visibility (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var468 = var_mclass->attrs[COLOR_nitc__model__MClass___visibility].val; /* _visibility on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var468 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 463);
fatal_exit(1);
}
var466 = var468;
RET_LABEL467:(void)0;
}
}
{
var469 = ((val*(*)(val* self))(var466->class->vft[COLOR_core__abstract_text__Object__to_s]))(var466); /* to_s on <var466:MVisibility>*/
}
((struct instance_core__NativeArray*)var453)->values[1]=var469;
{
var470 = ((val*(*)(val* self))(var_mvisibility->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mvisibility); /* to_s on <var_mvisibility:nullable MVisibility(MVisibility)>*/
}
((struct instance_core__NativeArray*)var453)->values[3]=var470;
{
var471 = ((val*(*)(val* self))(var453->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var453); /* native_to_s on <var453:NativeArray[String]>*/
}
varonce452 = var453;
{
nitc___nitc__ModelBuilder___error(self, var_nvisibility, var471); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
}
}
}
}
}
{
{ /* Inline modelize_class#AClassdef#mclass= (var_nclassdef,var_mclass) on <var_nclassdef:AClassdef> */
var_nclassdef->attrs[COLOR_nitc__modelize_class__AClassdef___mclass].val = var_mclass; /* _mclass on <var_nclassdef:AClassdef> */
RET_LABEL472:(void)0;
}
}
{
{ /* Inline modelize_class#AModule#mclass2nclassdef (var_nmodule) on <var_nmodule:AModule> */
var475 = var_nmodule->attrs[COLOR_nitc__modelize_class__AModule___mclass2nclassdef].val; /* _mclass2nclassdef on <var_nmodule:AModule> */
if (unlikely(var475 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 450);
fatal_exit(1);
}
var473 = var475;
RET_LABEL474:(void)0;
}
}
{
var476 = ((short int(*)(val* self, val* p0))((((long)var473&3)?class_info[((long)var473&3)]:var473->class)->vft[COLOR_core__abstract_collection__MapRead__has_key]))(var473, var_mclass); /* has_key on <var473:Map[MClass, AClassdef]>*/
}
var477 = !var476;
if (var477){
{
{ /* Inline modelize_class#AModule#mclass2nclassdef (var_nmodule) on <var_nmodule:AModule> */
var480 = var_nmodule->attrs[COLOR_nitc__modelize_class__AModule___mclass2nclassdef].val; /* _mclass2nclassdef on <var_nmodule:AModule> */
if (unlikely(var480 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 450);
fatal_exit(1);
}
var478 = var480;
RET_LABEL479:(void)0;
}
}
{
((void(*)(val* self, val* p0, val* p1))((((long)var478&3)?class_info[((long)var478&3)]:var478->class)->vft[COLOR_core__abstract_collection__Map___91d_93d_61d]))(var478, var_mclass, var_nclassdef); /* []= on <var478:Map[MClass, AClassdef]>*/
}
var481 = NEW_core__Array(&type_core__Array__nitc__AClassdef);
{
core___core__Array___with_capacity(var481, 1l); /* Direct call array#Array#with_capacity on <var481:Array[AClassdef]>*/
}
var_482 = var481;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_482, var_nclassdef); /* Direct call array#AbstractArray#push on <var_482:Array[AClassdef]>*/
}
{
{ /* Inline modelize_class#AClassdef#all_defs= (var_nclassdef,var_482) on <var_nclassdef:AClassdef> */
var_nclassdef->attrs[COLOR_nitc__modelize_class__AClassdef___all_defs].val = var_482; /* _all_defs on <var_nclassdef:AClassdef> */
RET_LABEL483:(void)0;
}
}
} else {
{
{ /* Inline modelize_class#AModule#mclass2nclassdef (var_nmodule) on <var_nmodule:AModule> */
var486 = var_nmodule->attrs[COLOR_nitc__modelize_class__AModule___mclass2nclassdef].val; /* _mclass2nclassdef on <var_nmodule:AModule> */
if (unlikely(var486 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 450);
fatal_exit(1);
}
var484 = var486;
RET_LABEL485:(void)0;
}
}
{
var487 = ((val*(*)(val* self, val* p0))((((long)var484&3)?class_info[((long)var484&3)]:var484->class)->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var484, var_mclass); /* [] on <var484:Map[MClass, AClassdef]>*/
}
{
{ /* Inline modelize_class#AClassdef#all_defs (var487) on <var487:nullable Object(AClassdef)> */
var490 = var487->attrs[COLOR_nitc__modelize_class__AClassdef___all_defs].val; /* _all_defs on <var487:nullable Object(AClassdef)> */
var488 = var490;
RET_LABEL489:(void)0;
}
}
if (var488 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 139);
fatal_exit(1);
} else {
core___core__Array___core__abstract_collection__SimpleCollection__add(var488, var_nclassdef); /* Direct call array#Array#add on <var488:nullable Array[AClassdef]>*/
}
}
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#build_a_mclassdef for (self: ModelBuilder, AModule, AClassdef) */
void nitc__modelize_class___ModelBuilder___build_a_mclassdef(val* self, val* p0, val* p1) {
val* var_nmodule /* var nmodule: AModule */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var /* : nullable MModule */;
val* var2 /* : nullable MModule */;
val* var_mmodule /* var mmodule: MModule */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : String */;
val* var6 /* : nullable MClass */;
val* var_objectclass /* var objectclass: nullable MClass */;
val* var7 /* : nullable MClass */;
val* var9 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : Map[MClass, AClassdef] */;
val* var18 /* : Map[MClass, AClassdef] */;
val* var19 /* : nullable Object */;
val* var_other_nclassdef /* var other_nclassdef: AClassdef */;
short int var20 /* : Bool */;
val* var_other22 /* var other: nullable Object */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
int cltype;
int idtype;
short int var26 /* : Bool */;
val* var27 /* : nullable MClassDef */;
val* var29 /* : nullable MClassDef */;
val* var31 /* : Array[MType] */;
val* var_bounds /* var bounds: Array[MType] */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
short int var_ /* var : Bool */;
long var36 /* : Int */;
long var38 /* : Int */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
const char* var_class_name;
short int var44 /* : Bool */;
long var_i /* var i: Int */;
long var45 /* : Int */;
long var47 /* : Int */;
long var_48 /* var : Int */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
int cltype52;
int idtype53;
const char* var_class_name54;
short int var55 /* : Bool */;
val* var56 /* : ANodes[AFormaldef] */;
val* var58 /* : ANodes[AFormaldef] */;
short int var59 /* : Bool */;
val* var60 /* : MClassDef */;
val* var62 /* : MClassDef */;
val* var63 /* : MClassType */;
val* var65 /* : MClassType */;
val* var66 /* : Array[MType] */;
val* var67 /* : nullable Object */;
val* var_bound /* var bound: MType */;
val* var69 /* : ANodes[AFormaldef] */;
val* var71 /* : ANodes[AFormaldef] */;
val* var72 /* : ANode */;
val* var_nfd /* var nfd: AFormaldef */;
val* var73 /* : Array[MParameterType] */;
val* var75 /* : Array[MParameterType] */;
val* var76 /* : nullable Object */;
val* var77 /* : String */;
val* var79 /* : String */;
val* var_pname /* var pname: String */;
val* var80 /* : TClassid */;
val* var82 /* : TClassid */;
val* var83 /* : String */;
short int var84 /* : Bool */;
short int var86 /* : Bool */;
short int var87 /* : Bool */;
val* var88 /* : TClassid */;
val* var90 /* : TClassid */;
val* var92 /* : NativeArray[String] */;
static val* varonce91;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
val* var96 /* : String */;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : NativeString */;
val* var100 /* : String */;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : NativeString */;
val* var104 /* : String */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
val* var108 /* : String */;
static val* varonce109;
val* var110 /* : String */;
char* var111 /* : NativeString */;
val* var112 /* : String */;
val* var113 /* : String */;
val* var114 /* : TClassid */;
val* var116 /* : TClassid */;
val* var117 /* : String */;
val* var118 /* : MClassDef */;
val* var120 /* : MClassDef */;
val* var121 /* : MModule */;
val* var123 /* : MModule */;
val* var124 /* : String */;
val* var125 /* : String */;
val* var126 /* : nullable AType */;
val* var128 /* : nullable AType */;
val* var_nfdt /* var nfdt: nullable AType */;
short int var129 /* : Bool */;
short int var130 /* : Bool */;
short int var132 /* : Bool */;
short int var133 /* : Bool */;
val* var134 /* : nullable MType */;
val* var_bound135 /* var bound: nullable MType */;
short int var136 /* : Bool */;
short int var137 /* : Bool */;
short int var139 /* : Bool */;
short int var141 /* : Bool */;
short int var142 /* : Bool */;
val* var144 /* : NativeArray[String] */;
static val* varonce143;
static val* varonce145;
val* var146 /* : String */;
char* var147 /* : NativeString */;
val* var148 /* : String */;
static val* varonce149;
val* var150 /* : String */;
char* var151 /* : NativeString */;
val* var152 /* : String */;
val* var153 /* : String */;
short int var155 /* : Bool */;
short int var156 /* : Bool */;
int cltype157;
int idtype158;
short int var_159 /* var : Bool */;
val* var160 /* : MClass */;
val* var162 /* : MClass */;
val* var163 /* : MClassKind */;
val* var165 /* : MClassKind */;
val* var166 /* : Sys */;
val* var167 /* : MClassKind */;
short int var168 /* : Bool */;
short int var170 /* : Bool */;
short int var172 /* : Bool */;
static val* varonce173;
val* var174 /* : String */;
char* var175 /* : NativeString */;
val* var176 /* : String */;
val* var178 /* : NativeArray[String] */;
static val* varonce177;
static val* varonce179;
val* var180 /* : String */;
char* var181 /* : NativeString */;
val* var182 /* : String */;
static val* varonce183;
val* var184 /* : String */;
char* var185 /* : NativeString */;
val* var186 /* : String */;
val* var187 /* : String */;
val* var188 /* : String */;
val* var189 /* : Array[MClassDef] */;
val* var191 /* : Array[MClassDef] */;
short int var192 /* : Bool */;
short int var193 /* : Bool */;
short int var194 /* : Bool */;
short int var196 /* : Bool */;
short int var198 /* : Bool */;
val* var200 /* : NativeArray[String] */;
static val* varonce199;
static val* varonce201;
val* var202 /* : String */;
char* var203 /* : NativeString */;
val* var204 /* : String */;
static val* varonce205;
val* var206 /* : String */;
char* var207 /* : NativeString */;
val* var208 /* : String */;
val* var209 /* : String */;
val* var210 /* : MClassType */;
val* var212 /* : MClassType */;
val* var213 /* : MType */;
val* var_bound214 /* var bound: MType */;
val* var216 /* : MClassDef */;
val* var218 /* : MClassDef */;
val* var219 /* : MClassType */;
val* var221 /* : MClassType */;
val* var222 /* : Array[MType] */;
val* var223 /* : nullable Object */;
val* var_bound224 /* var bound: MType */;
long var226 /* : Int */;
val* var227 /* : MClassType */;
val* var_bound_mtype /* var bound_mtype: MClassType */;
val* var228 /* : MClassDef */;
val* var229 /* : Location */;
val* var231 /* : Location */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var233 /* : HashMap[MClassDef, AClassdef] */;
val* var235 /* : HashMap[MClassDef, AClassdef] */;
short int var236 /* : Bool */;
int cltype237;
int idtype238;
val* var239 /* : nullable ADoc */;
val* var241 /* : nullable ADoc */;
val* var_ndoc /* var ndoc: nullable ADoc */;
short int var242 /* : Bool */;
short int var243 /* : Bool */;
short int var245 /* : Bool */;
short int var246 /* : Bool */;
val* var247 /* : MDoc */;
val* var_mdoc /* var mdoc: MDoc */;
short int var250 /* : Bool */;
short int var251 /* : Bool */;
short int var_252 /* var : Bool */;
val* var253 /* : MVisibility */;
val* var255 /* : MVisibility */;
val* var256 /* : Sys */;
val* var257 /* : MVisibility */;
short int var258 /* : Bool */;
static val* varonce259;
val* var260 /* : String */;
char* var261 /* : NativeString */;
val* var262 /* : String */;
val* var264 /* : NativeArray[String] */;
static val* varonce263;
static val* varonce265;
val* var266 /* : String */;
char* var267 /* : NativeString */;
val* var268 /* : String */;
static val* varonce269;
val* var270 /* : String */;
char* var271 /* : NativeString */;
val* var272 /* : String */;
val* var273 /* : String */;
val* var274 /* : String */;
short int var275 /* : Bool */;
val* var276 /* : ToolContext */;
val* var278 /* : ToolContext */;
val* var280 /* : NativeArray[String] */;
static val* varonce279;
static val* varonce281;
val* var282 /* : String */;
char* var283 /* : NativeString */;
val* var284 /* : String */;
static val* varonce285;
val* var286 /* : String */;
char* var287 /* : NativeString */;
val* var288 /* : String */;
val* var289 /* : String */;
val* var290 /* : MClassKind */;
val* var292 /* : MClassKind */;
val* var293 /* : String */;
val* var294 /* : String */;
val* var295 /* : String */;
val* var296 /* : ToolContext */;
val* var298 /* : ToolContext */;
val* var300 /* : NativeArray[String] */;
static val* varonce299;
static val* varonce301;
val* var302 /* : String */;
char* var303 /* : NativeString */;
val* var304 /* : String */;
static val* varonce305;
val* var306 /* : String */;
char* var307 /* : NativeString */;
val* var308 /* : String */;
val* var309 /* : String */;
val* var310 /* : MClassKind */;
val* var312 /* : MClassKind */;
val* var313 /* : String */;
val* var314 /* : String */;
val* var315 /* : String */;
var_nmodule = p0;
var_nclassdef = p1;
{
{ /* Inline loader#AModule#mmodule (var_nmodule) on <var_nmodule:AModule> */
var2 = var_nmodule->attrs[COLOR_nitc__loader__AModule___mmodule].val; /* _mmodule on <var_nmodule:AModule> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 146);
fatal_exit(1);
}
var_mmodule = var;
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "Object";
var5 = core__flat___NativeString___to_s_full(var4, 6l, 6l);
var3 = var5;
varonce = var3;
}
{
var6 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(self, var_nmodule, var_mmodule, var3);
}
var_objectclass = var6;
{
{ /* Inline modelize_class#AClassdef#mclass (var_nclassdef) on <var_nclassdef:AClassdef> */
var9 = var_nclassdef->attrs[COLOR_nitc__modelize_class__AClassdef___mclass].val; /* _mclass on <var_nclassdef:AClassdef> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_mclass = var7;
if (var_mclass == NULL) {
var10 = 1; /* is null */
} else {
var10 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mclass,((val*)NULL)) on <var_mclass:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
var15 = var_mclass == var_other;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
if (var10){
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_class#AModule#mclass2nclassdef (var_nmodule) on <var_nmodule:AModule> */
var18 = var_nmodule->attrs[COLOR_nitc__modelize_class__AModule___mclass2nclassdef].val; /* _mclass2nclassdef on <var_nmodule:AModule> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 450);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = ((val*(*)(val* self, val* p0))((((long)var16&3)?class_info[((long)var16&3)]:var16->class)->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var16, var_mclass); /* [] on <var16:Map[MClass, AClassdef]>*/
}
var_other_nclassdef = var19;
{
{ /* Inline kernel#Object#!= (var_other_nclassdef,var_nclassdef) on <var_other_nclassdef:AClassdef> */
var_other22 = var_nclassdef;
{
var23 = ((short int(*)(val* self, val* p0))(var_other_nclassdef->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_other_nclassdef, var_other22); /* == on <var_other_nclassdef:AClassdef>*/
}
var24 = !var23;
var20 = var24;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
if (var20){
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype = type_nitc__AStdClassdef.color;
idtype = type_nitc__AStdClassdef.id;
if(cltype >= var_nclassdef->type->table_size) {
var25 = 0;
} else {
var25 = var_nclassdef->type->type_table[cltype] == idtype;
}
var26 = !var25;
if (unlikely(!var26)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 154);
fatal_exit(1);
}
{
{ /* Inline modelize_class#AClassdef#mclassdef (var_other_nclassdef) on <var_other_nclassdef:AClassdef> */
var29 = var_other_nclassdef->attrs[COLOR_nitc__modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_other_nclassdef:AClassdef> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline modelize_class#AClassdef#mclassdef= (var_nclassdef,var27) on <var_nclassdef:AClassdef> */
var_nclassdef->attrs[COLOR_nitc__modelize_class__AClassdef___mclassdef].val = var27; /* _mclassdef on <var_nclassdef:AClassdef> */
RET_LABEL30:(void)0;
}
}
goto RET_LABEL;
} else {
}
var31 = NEW_core__Array(&type_core__Array__nitc__MType);
{
core___core__Array___core__kernel__Object__init(var31); /* Direct call array#Array#init on <var31:Array[MType]>*/
}
var_bounds = var31;
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype34 = type_nitc__AStdClassdef.color;
idtype35 = type_nitc__AStdClassdef.id;
if(cltype34 >= var_nclassdef->type->table_size) {
var33 = 0;
} else {
var33 = var_nclassdef->type->type_table[cltype34] == idtype35;
}
var_ = var33;
if (var33){
{
{ /* Inline model#MClass#arity (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var38 = var_mclass->attrs[COLOR_nitc__model__MClass___arity].l; /* _arity on <var_mclass:nullable MClass(MClass)> */
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var36,0l) on <var36:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var41 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var41)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
fatal_exit(1);
}
var44 = var36 > 0l;
var39 = var44;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var32 = var39;
} else {
var32 = var_;
}
if (var32){
var_i = 0l;
{
{ /* Inline model#MClass#arity (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var47 = var_mclass->attrs[COLOR_nitc__model__MClass___arity].l; /* _arity on <var_mclass:nullable MClass(MClass)> */
var45 = var47;
RET_LABEL46:(void)0;
}
}
var_48 = var45;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_48) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_48:Int> isa OTHER */
/* <var_48:Int> isa OTHER */
var51 = 1; /* easy <var_48:Int> isa OTHER*/
if (unlikely(!var51)) {
var_class_name54 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name54);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var55 = var_i < var_48;
var49 = var55;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
if (var49){
} else {
goto BREAK_label;
}
{
{ /* Inline parser_nodes#AStdClassdef#n_formaldefs (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var58 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_formaldefs].val; /* _n_formaldefs on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_formaldefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1173);
fatal_exit(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
var59 = nitc___nitc__ANodes___core__abstract_collection__Collection__is_empty(var56);
}
if (var59){
{
{ /* Inline model#MClass#intro (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var62 = var_mclass->attrs[COLOR_nitc__model__MClass___intro].val; /* _intro on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 483);
fatal_exit(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var60) on <var60:MClassDef> */
var65 = var60->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var60:MClassDef> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 579);
fatal_exit(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
var66 = ((val*(*)(val* self))(var63->class->vft[COLOR_nitc__model__MClassType__arguments]))(var63); /* arguments on <var63:MClassType>*/
}
{
var67 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var66, var_i);
}
var_bound = var67;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_bounds, var_bound); /* Direct call array#Array#add on <var_bounds:Array[MType]>*/
}
goto BREAK_label68;
} else {
}
{
{ /* Inline parser_nodes#AStdClassdef#n_formaldefs (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var71 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_formaldefs].val; /* _n_formaldefs on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_formaldefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1173);
fatal_exit(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
{
var72 = nitc___nitc__ANodes___core__abstract_collection__SequenceRead___91d_93d(var69, var_i);
}
var_nfd = var72;
{
{ /* Inline model#MClass#mparameters (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var75 = var_mclass->attrs[COLOR_nitc__model__MClass___mparameters].val; /* _mparameters on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 405);
fatal_exit(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
var76 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var73, var_i);
}
{
{ /* Inline model#MParameterType#name (var76) on <var76:nullable Object(MParameterType)> */
var79 = var76->attrs[COLOR_nitc__model__MParameterType___name].val; /* _name on <var76:nullable Object(MParameterType)> */
if (unlikely(var79 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1507);
fatal_exit(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
var_pname = var77;
{
{ /* Inline parser_nodes#AFormaldef#n_id (var_nfd) on <var_nfd:AFormaldef> */
var82 = var_nfd->attrs[COLOR_nitc__parser_nodes__AFormaldef___n_id].val; /* _n_id on <var_nfd:AFormaldef> */
if (unlikely(var82 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1257);
fatal_exit(1);
}
var80 = var82;
RET_LABEL81:(void)0;
}
}
{
var83 = nitc__lexer_work___Token___text(var80);
}
{
{ /* Inline kernel#Object#!= (var83,var_pname) on <var83:String> */
var_other22 = var_pname;
{
var86 = ((short int(*)(val* self, val* p0))(var83->class->vft[COLOR_core__kernel__Object___61d_61d]))(var83, var_other22); /* == on <var83:String>*/
}
var87 = !var86;
var84 = var87;
goto RET_LABEL85;
RET_LABEL85:(void)0;
}
}
if (var84){
{
{ /* Inline parser_nodes#AFormaldef#n_id (var_nfd) on <var_nfd:AFormaldef> */
var90 = var_nfd->attrs[COLOR_nitc__parser_nodes__AFormaldef___n_id].val; /* _n_id on <var_nfd:AFormaldef> */
if (unlikely(var90 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1257);
fatal_exit(1);
}
var88 = var90;
RET_LABEL89:(void)0;
}
}
if (unlikely(varonce91==NULL)) {
var92 = NEW_core__NativeArray(9l, &type_core__NativeArray__core__String);
if (likely(varonce93!=NULL)) {
var94 = varonce93;
} else {
var95 = "Error: formal parameter type #";
var96 = core__flat___NativeString___to_s_full(var95, 30l, 30l);
var94 = var96;
varonce93 = var94;
}
((struct instance_core__NativeArray*)var92)->values[0]=var94;
if (likely(varonce97!=NULL)) {
var98 = varonce97;
} else {
var99 = " `";
var100 = core__flat___NativeString___to_s_full(var99, 2l, 2l);
var98 = var100;
varonce97 = var98;
}
((struct instance_core__NativeArray*)var92)->values[2]=var98;
if (likely(varonce101!=NULL)) {
var102 = varonce101;
} else {
var103 = "` must be named `";
var104 = core__flat___NativeString___to_s_full(var103, 17l, 17l);
var102 = var104;
varonce101 = var102;
}
((struct instance_core__NativeArray*)var92)->values[4]=var102;
if (likely(varonce105!=NULL)) {
var106 = varonce105;
} else {
var107 = "` as in the original definition in module `";
var108 = core__flat___NativeString___to_s_full(var107, 43l, 43l);
var106 = var108;
varonce105 = var106;
}
((struct instance_core__NativeArray*)var92)->values[6]=var106;
if (likely(varonce109!=NULL)) {
var110 = varonce109;
} else {
var111 = "`.";
var112 = core__flat___NativeString___to_s_full(var111, 2l, 2l);
var110 = var112;
varonce109 = var110;
}
((struct instance_core__NativeArray*)var92)->values[8]=var110;
} else {
var92 = varonce91;
varonce91 = NULL;
}
var113 = core__flat___Int___core__abstract_text__Object__to_s(var_i);
((struct instance_core__NativeArray*)var92)->values[1]=var113;
{
{ /* Inline parser_nodes#AFormaldef#n_id (var_nfd) on <var_nfd:AFormaldef> */
var116 = var_nfd->attrs[COLOR_nitc__parser_nodes__AFormaldef___n_id].val; /* _n_id on <var_nfd:AFormaldef> */
if (unlikely(var116 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1257);
fatal_exit(1);
}
var114 = var116;
RET_LABEL115:(void)0;
}
}
{
var117 = nitc__lexer_work___Token___text(var114);
}
((struct instance_core__NativeArray*)var92)->values[3]=var117;
((struct instance_core__NativeArray*)var92)->values[5]=var_pname;
{
{ /* Inline model#MClass#intro (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var120 = var_mclass->attrs[COLOR_nitc__model__MClass___intro].val; /* _intro on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var120 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 483);
fatal_exit(1);
}
var118 = var120;
RET_LABEL119:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var118) on <var118:MClassDef> */
var123 = var118->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var118:MClassDef> */
if (unlikely(var123 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 573);
fatal_exit(1);
}
var121 = var123;
RET_LABEL122:(void)0;
}
}
{
var124 = ((val*(*)(val* self))(var121->class->vft[COLOR_core__abstract_text__Object__to_s]))(var121); /* to_s on <var121:MModule>*/
}
((struct instance_core__NativeArray*)var92)->values[7]=var124;
{
var125 = ((val*(*)(val* self))(var92->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var92); /* native_to_s on <var92:NativeArray[String]>*/
}
varonce91 = var92;
{
nitc___nitc__ModelBuilder___error(self, var88, var125); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
{
{ /* Inline parser_nodes#AFormaldef#n_type (var_nfd) on <var_nfd:AFormaldef> */
var128 = var_nfd->attrs[COLOR_nitc__parser_nodes__AFormaldef___n_type].val; /* _n_type on <var_nfd:AFormaldef> */
var126 = var128;
RET_LABEL127:(void)0;
}
}
var_nfdt = var126;
if (var_nfdt == NULL) {
var129 = 0; /* is null */
} else {
var129 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nfdt,((val*)NULL)) on <var_nfdt:nullable AType> */
var_other22 = ((val*)NULL);
{
var132 = ((short int(*)(val* self, val* p0))(var_nfdt->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nfdt, var_other22); /* == on <var_nfdt:nullable AType(AType)>*/
}
var133 = !var132;
var130 = var133;
goto RET_LABEL131;
RET_LABEL131:(void)0;
}
var129 = var130;
}
if (var129){
{
var134 = nitc___nitc__ModelBuilder___resolve_mtype_unchecked(self, var_mmodule, ((val*)NULL), var_nfdt, 0);
}
var_bound135 = var134;
if (var_bound135 == NULL) {
var136 = 1; /* is null */
} else {
var136 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_bound135,((val*)NULL)) on <var_bound135:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_bound135,var_other) on <var_bound135:nullable MType(MType)> */
var141 = var_bound135 == var_other;
var139 = var141;
goto RET_LABEL140;
RET_LABEL140:(void)0;
}
}
var137 = var139;
goto RET_LABEL138;
RET_LABEL138:(void)0;
}
var136 = var137;
}
if (var136){
goto RET_LABEL;
} else {
}
{
var142 = ((short int(*)(val* self))(var_bound135->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_bound135); /* need_anchor on <var_bound135:nullable MType(MType)>*/
}
if (var142){
if (unlikely(varonce143==NULL)) {
var144 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce145!=NULL)) {
var146 = varonce145;
} else {
var147 = "Error: formal parameter type `";
var148 = core__flat___NativeString___to_s_full(var147, 30l, 30l);
var146 = var148;
varonce145 = var146;
}
((struct instance_core__NativeArray*)var144)->values[0]=var146;
if (likely(varonce149!=NULL)) {
var150 = varonce149;
} else {
var151 = "` bounded with a formal parameter type.";
var152 = core__flat___NativeString___to_s_full(var151, 39l, 39l);
var150 = var152;
varonce149 = var150;
}
((struct instance_core__NativeArray*)var144)->values[2]=var150;
} else {
var144 = varonce143;
varonce143 = NULL;
}
((struct instance_core__NativeArray*)var144)->values[1]=var_pname;
{
var153 = ((val*(*)(val* self))(var144->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var144); /* native_to_s on <var144:NativeArray[String]>*/
}
varonce143 = var144;
{
nitc___nitc__ModelBuilder___error(self, var_nfd, var153); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_bounds, var_bound135); /* Direct call array#Array#add on <var_bounds:Array[MType]>*/
}
{
{ /* Inline modelize_class#AFormaldef#bound= (var_nfd,var_bound135) on <var_nfd:AFormaldef> */
var_nfd->attrs[COLOR_nitc__modelize_class__AFormaldef___bound].val = var_bound135; /* _bound on <var_nfd:AFormaldef> */
RET_LABEL154:(void)0;
}
}
}
/* <var_bound135:nullable MType(MType)> isa MClassType */
cltype157 = type_nitc__MClassType.color;
idtype158 = type_nitc__MClassType.id;
if(cltype157 >= var_bound135->type->table_size) {
var156 = 0;
} else {
var156 = var_bound135->type->type_table[cltype157] == idtype158;
}
var_159 = var156;
if (var156){
{
{ /* Inline model#MClassType#mclass (var_bound135) on <var_bound135:nullable MType(MClassType)> */
var162 = var_bound135->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_bound135:nullable MType(MClassType)> */
if (unlikely(var162 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1163);
fatal_exit(1);
}
var160 = var162;
RET_LABEL161:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var160) on <var160:MClass> */
var165 = var160->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var160:MClass> */
if (unlikely(var165 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 459);
fatal_exit(1);
}
var163 = var165;
RET_LABEL164:(void)0;
}
}
var166 = glob_sys;
{
var167 = nitc__model___core__Sys___enum_kind(var166);
}
{
{ /* Inline kernel#Object#== (var163,var167) on <var163:MClassKind> */
var_other = var167;
{
{ /* Inline kernel#Object#is_same_instance (var163,var_other) on <var163:MClassKind> */
var172 = var163 == var_other;
var170 = var172;
goto RET_LABEL171;
RET_LABEL171:(void)0;
}
}
var168 = var170;
goto RET_LABEL169;
RET_LABEL169:(void)0;
}
}
var155 = var168;
} else {
var155 = var_159;
}
if (var155){
if (likely(varonce173!=NULL)) {
var174 = varonce173;
} else {
var175 = "useless-bound";
var176 = core__flat___NativeString___to_s_full(var175, 13l, 13l);
var174 = var176;
varonce173 = var174;
}
if (unlikely(varonce177==NULL)) {
var178 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce179!=NULL)) {
var180 = varonce179;
} else {
var181 = "Warning: useless formal parameter type since `";
var182 = core__flat___NativeString___to_s_full(var181, 46l, 46l);
var180 = var182;
varonce179 = var180;
}
((struct instance_core__NativeArray*)var178)->values[0]=var180;
if (likely(varonce183!=NULL)) {
var184 = varonce183;
} else {
var185 = "` cannot have subclasses.";
var186 = core__flat___NativeString___to_s_full(var185, 25l, 25l);
var184 = var186;
varonce183 = var184;
}
((struct instance_core__NativeArray*)var178)->values[2]=var184;
} else {
var178 = varonce177;
varonce177 = NULL;
}
{
var187 = ((val*(*)(val* self))(var_bound135->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_bound135); /* to_s on <var_bound135:nullable MType(MClassType)>*/
}
((struct instance_core__NativeArray*)var178)->values[1]=var187;
{
var188 = ((val*(*)(val* self))(var178->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var178); /* native_to_s on <var178:NativeArray[String]>*/
}
varonce177 = var178;
{
nitc___nitc__ModelBuilder___warning(self, var_nfdt, var174, var188); /* Direct call modelbuilder_base#ModelBuilder#warning on <self:ModelBuilder>*/
}
} else {
}
} else {
{
{ /* Inline model#MClass#mclassdefs (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var191 = var_mclass->attrs[COLOR_nitc__model__MClass___mclassdefs].val; /* _mclassdefs on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var191 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 477);
fatal_exit(1);
}
var189 = var191;
RET_LABEL190:(void)0;
}
}
{
var192 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var189);
}
if (var192){
if (var_objectclass == NULL) {
var193 = 1; /* is null */
} else {
var193 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_objectclass,((val*)NULL)) on <var_objectclass:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_objectclass,var_other) on <var_objectclass:nullable MClass(MClass)> */
var198 = var_objectclass == var_other;
var196 = var198;
goto RET_LABEL197;
RET_LABEL197:(void)0;
}
}
var194 = var196;
goto RET_LABEL195;
RET_LABEL195:(void)0;
}
var193 = var194;
}
if (var193){
if (unlikely(varonce199==NULL)) {
var200 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce201!=NULL)) {
var202 = varonce201;
} else {
var203 = "Error: formal parameter type `";
var204 = core__flat___NativeString___to_s_full(var203, 30l, 30l);
var202 = var204;
varonce201 = var202;
}
((struct instance_core__NativeArray*)var200)->values[0]=var202;
if (likely(varonce205!=NULL)) {
var206 = varonce205;
} else {
var207 = "` unbounded but no `Object` class exists.";
var208 = core__flat___NativeString___to_s_full(var207, 41l, 41l);
var206 = var208;
varonce205 = var206;
}
((struct instance_core__NativeArray*)var200)->values[2]=var206;
} else {
var200 = varonce199;
varonce199 = NULL;
}
((struct instance_core__NativeArray*)var200)->values[1]=var_pname;
{
var209 = ((val*(*)(val* self))(var200->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var200); /* native_to_s on <var200:NativeArray[String]>*/
}
varonce199 = var200;
{
nitc___nitc__ModelBuilder___error(self, var_nfd, var209); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClass#mclass_type (var_objectclass) on <var_objectclass:nullable MClass(MClass)> */
var212 = var_objectclass->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_objectclass:nullable MClass(MClass)> */
if (unlikely(var212 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 507);
fatal_exit(1);
}
var210 = var212;
RET_LABEL211:(void)0;
}
}
{
var213 = nitc___nitc__MType___as_nullable(var210);
}
var_bound214 = var213;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_bounds, var_bound214); /* Direct call array#Array#add on <var_bounds:Array[MType]>*/
}
{
{ /* Inline modelize_class#AFormaldef#bound= (var_nfd,var_bound214) on <var_nfd:AFormaldef> */
var_nfd->attrs[COLOR_nitc__modelize_class__AFormaldef___bound].val = var_bound214; /* _bound on <var_nfd:AFormaldef> */
RET_LABEL215:(void)0;
}
}
} else {
{
{ /* Inline model#MClass#intro (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var218 = var_mclass->attrs[COLOR_nitc__model__MClass___intro].val; /* _intro on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var218 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 483);
fatal_exit(1);
}
var216 = var218;
RET_LABEL217:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var216) on <var216:MClassDef> */
var221 = var216->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var216:MClassDef> */
if (unlikely(var221 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 579);
fatal_exit(1);
}
var219 = var221;
RET_LABEL220:(void)0;
}
}
{
var222 = ((val*(*)(val* self))(var219->class->vft[COLOR_nitc__model__MClassType__arguments]))(var219); /* arguments on <var219:MClassType>*/
}
{
var223 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var222, var_i);
}
var_bound224 = var223;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_bounds, var_bound224); /* Direct call array#Array#add on <var_bounds:Array[MType]>*/
}
{
{ /* Inline modelize_class#AFormaldef#bound= (var_nfd,var_bound224) on <var_nfd:AFormaldef> */
var_nfd->attrs[COLOR_nitc__modelize_class__AFormaldef___bound].val = var_bound224; /* _bound on <var_nfd:AFormaldef> */
RET_LABEL225:(void)0;
}
}
}
}
BREAK_label68: (void)0;
{
var226 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var226;
}
BREAK_label: (void)0;
} else {
}
{
var227 = nitc___nitc__MClass___get_mtype(var_mclass, var_bounds);
}
var_bound_mtype = var227;
var228 = NEW_nitc__MClassDef(&type_nitc__MClassDef);
{
{ /* Inline parser_nodes#ANode#location (var_nclassdef) on <var_nclassdef:AClassdef> */
var231 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_nclassdef:AClassdef> */
if (unlikely(var231 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 24);
fatal_exit(1);
}
var229 = var231;
RET_LABEL230:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var228->class->vft[COLOR_nitc__model__MClassDef__mmodule_61d]))(var228, var_mmodule); /* mmodule= on <var228:MClassDef>*/
}
{
((void(*)(val* self, val* p0))(var228->class->vft[COLOR_nitc__model__MClassDef__bound_mtype_61d]))(var228, var_bound_mtype); /* bound_mtype= on <var228:MClassDef>*/
}
{
((void(*)(val* self, val* p0))(var228->class->vft[COLOR_nitc__model__MClassDef__location_61d]))(var228, var229); /* location= on <var228:MClassDef>*/
}
{
((void(*)(val* self))(var228->class->vft[COLOR_core__kernel__Object__init]))(var228); /* init on <var228:MClassDef>*/
}
var_mclassdef = var228;
{
{ /* Inline modelize_class#AClassdef#mclassdef= (var_nclassdef,var_mclassdef) on <var_nclassdef:AClassdef> */
var_nclassdef->attrs[COLOR_nitc__modelize_class__AClassdef___mclassdef].val = var_mclassdef; /* _mclassdef on <var_nclassdef:AClassdef> */
RET_LABEL232:(void)0;
}
}
{
{ /* Inline modelize_class#ModelBuilder#mclassdef2nclassdef (self) on <self:ModelBuilder> */
var235 = self->attrs[COLOR_nitc__modelize_class__ModelBuilder___mclassdef2nclassdef].val; /* _mclassdef2nclassdef on <self:ModelBuilder> */
if (unlikely(var235 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 435);
fatal_exit(1);
}
var233 = var235;
RET_LABEL234:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var233, var_mclassdef, var_nclassdef); /* Direct call hash_collection#HashMap#[]= on <var233:HashMap[MClassDef, AClassdef]>*/
}
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype237 = type_nitc__AStdClassdef.color;
idtype238 = type_nitc__AStdClassdef.id;
if(cltype237 >= var_nclassdef->type->table_size) {
var236 = 0;
} else {
var236 = var_nclassdef->type->type_table[cltype237] == idtype238;
}
if (var236){
{
{ /* Inline parser_nodes#ADefinition#n_doc (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var241 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <var_nclassdef:AClassdef(AStdClassdef)> */
var239 = var241;
RET_LABEL240:(void)0;
}
}
var_ndoc = var239;
if (var_ndoc == NULL) {
var242 = 0; /* is null */
} else {
var242 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ndoc,((val*)NULL)) on <var_ndoc:nullable ADoc> */
var_other22 = ((val*)NULL);
{
var245 = ((short int(*)(val* self, val* p0))(var_ndoc->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ndoc, var_other22); /* == on <var_ndoc:nullable ADoc(ADoc)>*/
}
var246 = !var245;
var243 = var246;
goto RET_LABEL244;
RET_LABEL244:(void)0;
}
var242 = var243;
}
if (var242){
{
var247 = nitc__modelbuilder_base___ADoc___to_mdoc(var_ndoc);
}
var_mdoc = var247;
{
{ /* Inline mdoc#MEntity#mdoc= (var_mclassdef,var_mdoc) on <var_mclassdef:MClassDef> */
var_mclassdef->attrs[COLOR_nitc__mdoc__MEntity___mdoc].val = var_mdoc; /* _mdoc on <var_mclassdef:MClassDef> */
RET_LABEL248:(void)0;
}
}
{
{ /* Inline mdoc#MDoc#original_mentity= (var_mdoc,var_mclassdef) on <var_mdoc:MDoc> */
var_mdoc->attrs[COLOR_nitc__mdoc__MDoc___original_mentity].val = var_mclassdef; /* _original_mentity on <var_mdoc:MDoc> */
RET_LABEL249:(void)0;
}
}
} else {
{
var251 = nitc___nitc__MClassDef___is_intro(var_mclassdef);
}
var_252 = var251;
if (var251){
{
{ /* Inline model#MClass#visibility (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var255 = var_mclass->attrs[COLOR_nitc__model__MClass___visibility].val; /* _visibility on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var255 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 463);
fatal_exit(1);
}
var253 = var255;
RET_LABEL254:(void)0;
}
}
var256 = glob_sys;
{
var257 = nitc__model_base___core__Sys___public_visibility(var256);
}
{
var258 = core___core__Comparable____62d_61d(var253, var257);
}
var250 = var258;
} else {
var250 = var_252;
}
if (var250){
if (likely(varonce259!=NULL)) {
var260 = varonce259;
} else {
var261 = "missing-doc";
var262 = core__flat___NativeString___to_s_full(var261, 11l, 11l);
var260 = var262;
varonce259 = var260;
}
if (unlikely(varonce263==NULL)) {
var264 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce265!=NULL)) {
var266 = varonce265;
} else {
var267 = "Documentation warning: Undocumented public class `";
var268 = core__flat___NativeString___to_s_full(var267, 50l, 50l);
var266 = var268;
varonce265 = var266;
}
((struct instance_core__NativeArray*)var264)->values[0]=var266;
if (likely(varonce269!=NULL)) {
var270 = varonce269;
} else {
var271 = "`";
var272 = core__flat___NativeString___to_s_full(var271, 1l, 1l);
var270 = var272;
varonce269 = var270;
}
((struct instance_core__NativeArray*)var264)->values[2]=var270;
} else {
var264 = varonce263;
varonce263 = NULL;
}
{
var273 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclass); /* to_s on <var_mclass:nullable MClass(MClass)>*/
}
((struct instance_core__NativeArray*)var264)->values[1]=var273;
{
var274 = ((val*(*)(val* self))(var264->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var264); /* native_to_s on <var264:NativeArray[String]>*/
}
varonce263 = var264;
{
nitc___nitc__ModelBuilder___advice(self, var_nclassdef, var260, var274); /* Direct call modelbuilder_base#ModelBuilder#advice on <self:ModelBuilder>*/
}
} else {
}
}
} else {
}
{
var275 = nitc___nitc__MClassDef___is_intro(var_mclassdef);
}
if (var275){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var278 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var278 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var276 = var278;
RET_LABEL277:(void)0;
}
}
if (unlikely(varonce279==NULL)) {
var280 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce281!=NULL)) {
var282 = varonce281;
} else {
var283 = " introduces new ";
var284 = core__flat___NativeString___to_s_full(var283, 16l, 16l);
var282 = var284;
varonce281 = var282;
}
((struct instance_core__NativeArray*)var280)->values[1]=var282;
if (likely(varonce285!=NULL)) {
var286 = varonce285;
} else {
var287 = " ";
var288 = core__flat___NativeString___to_s_full(var287, 1l, 1l);
var286 = var288;
varonce285 = var286;
}
((struct instance_core__NativeArray*)var280)->values[3]=var286;
} else {
var280 = varonce279;
varonce279 = NULL;
}
{
var289 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:MClassDef>*/
}
((struct instance_core__NativeArray*)var280)->values[0]=var289;
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var292 = var_mclass->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var292 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 459);
fatal_exit(1);
}
var290 = var292;
RET_LABEL291:(void)0;
}
}
{
var293 = ((val*(*)(val* self))(var290->class->vft[COLOR_core__abstract_text__Object__to_s]))(var290); /* to_s on <var290:MClassKind>*/
}
((struct instance_core__NativeArray*)var280)->values[2]=var293;
{
var294 = nitc___nitc__MClass___nitc__model_base__MEntity__full_name(var_mclass);
}
((struct instance_core__NativeArray*)var280)->values[4]=var294;
{
var295 = ((val*(*)(val* self))(var280->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var280); /* native_to_s on <var280:NativeArray[String]>*/
}
varonce279 = var280;
{
nitc___nitc__ToolContext___info(var276, var295, 3l); /* Direct call toolcontext#ToolContext#info on <var276:ToolContext>*/
}
} else {
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var298 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var298 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var296 = var298;
RET_LABEL297:(void)0;
}
}
if (unlikely(varonce299==NULL)) {
var300 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce301!=NULL)) {
var302 = varonce301;
} else {
var303 = " refine ";
var304 = core__flat___NativeString___to_s_full(var303, 8l, 8l);
var302 = var304;
varonce301 = var302;
}
((struct instance_core__NativeArray*)var300)->values[1]=var302;
if (likely(varonce305!=NULL)) {
var306 = varonce305;
} else {
var307 = " ";
var308 = core__flat___NativeString___to_s_full(var307, 1l, 1l);
var306 = var308;
varonce305 = var306;
}
((struct instance_core__NativeArray*)var300)->values[3]=var306;
} else {
var300 = varonce299;
varonce299 = NULL;
}
{
var309 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:MClassDef>*/
}
((struct instance_core__NativeArray*)var300)->values[0]=var309;
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var312 = var_mclass->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var312 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 459);
fatal_exit(1);
}
var310 = var312;
RET_LABEL311:(void)0;
}
}
{
var313 = ((val*(*)(val* self))(var310->class->vft[COLOR_core__abstract_text__Object__to_s]))(var310); /* to_s on <var310:MClassKind>*/
}
((struct instance_core__NativeArray*)var300)->values[2]=var313;
{
var314 = nitc___nitc__MClass___nitc__model_base__MEntity__full_name(var_mclass);
}
((struct instance_core__NativeArray*)var300)->values[4]=var314;
{
var315 = ((val*(*)(val* self))(var300->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var300); /* native_to_s on <var300:NativeArray[String]>*/
}
varonce299 = var300;
{
nitc___nitc__ToolContext___info(var296, var315, 3l); /* Direct call toolcontext#ToolContext#info on <var296:ToolContext>*/
}
}
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#collect_a_mclassdef_inheritance for (self: ModelBuilder, AModule, AClassdef) */
void nitc__modelize_class___ModelBuilder___collect_a_mclassdef_inheritance(val* self, val* p0, val* p1) {
val* var_nmodule /* var nmodule: AModule */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var /* : nullable MModule */;
val* var2 /* : nullable MModule */;
val* var_mmodule /* var mmodule: nullable MModule */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : String */;
val* var12 /* : nullable MClass */;
val* var_objectclass /* var objectclass: nullable MClass */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : String */;
val* var17 /* : nullable MClass */;
val* var_pointerclass /* var pointerclass: nullable MClass */;
val* var18 /* : nullable MClass */;
val* var20 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : nullable MClassDef */;
val* var29 /* : nullable MClassDef */;
val* var_mclassdef /* var mclassdef: nullable MClassDef */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var_specobject /* var specobject: Bool */;
short int var_specpointer /* var specpointer: Bool */;
val* var36 /* : Array[MClassType] */;
val* var_supertypes /* var supertypes: Array[MClassType] */;
short int var37 /* : Bool */;
int cltype;
int idtype;
val* var38 /* : Array[ASuperPropdef] */;
val* var_ /* var : Array[ASuperPropdef] */;
val* var39 /* : IndexedIterator[nullable Object] */;
val* var_40 /* var : IndexedIterator[ASuperPropdef] */;
short int var41 /* : Bool */;
val* var42 /* : nullable Object */;
val* var_nsc /* var nsc: ASuperPropdef */;
val* var43 /* : AType */;
val* var45 /* : AType */;
val* var_ntype /* var ntype: AType */;
val* var46 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
int cltype55;
int idtype56;
short int var57 /* : Bool */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
val* var61 /* : String */;
val* var62 /* : MClassKind */;
val* var64 /* : MClassKind */;
val* var65 /* : MClass */;
val* var67 /* : MClass */;
val* var68 /* : MClassKind */;
val* var70 /* : MClassKind */;
short int var71 /* : Bool */;
short int var72 /* : Bool */;
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
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : NativeString */;
val* var86 /* : String */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : NativeString */;
val* var90 /* : String */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : NativeString */;
val* var94 /* : String */;
val* var95 /* : MClassKind */;
val* var97 /* : MClassKind */;
val* var98 /* : String */;
val* var99 /* : String */;
val* var100 /* : MClass */;
val* var102 /* : MClass */;
val* var103 /* : MClassKind */;
val* var105 /* : MClassKind */;
val* var106 /* : String */;
val* var107 /* : MClass */;
val* var109 /* : MClass */;
val* var110 /* : String */;
val* var111 /* : String */;
val* var112 /* : MClass */;
val* var114 /* : MClass */;
val* var115 /* : MClassKind */;
val* var117 /* : MClassKind */;
val* var118 /* : Sys */;
val* var119 /* : MClassKind */;
short int var120 /* : Bool */;
short int var122 /* : Bool */;
short int var124 /* : Bool */;
short int var125 /* : Bool */;
short int var126 /* : Bool */;
short int var_127 /* var : Bool */;
short int var128 /* : Bool */;
short int var129 /* : Bool */;
val* var_other131 /* var other: nullable Object */;
short int var132 /* : Bool */;
short int var133 /* : Bool */;
short int var134 /* : Bool */;
val* var135 /* : MClassKind */;
val* var137 /* : MClassKind */;
val* var138 /* : Sys */;
val* var139 /* : MClassKind */;
short int var140 /* : Bool */;
short int var142 /* : Bool */;
short int var144 /* : Bool */;
short int var_145 /* var : Bool */;
val* var146 /* : String */;
val* var148 /* : String */;
static val* varonce149;
val* var150 /* : String */;
char* var151 /* : NativeString */;
val* var152 /* : String */;
short int var153 /* : Bool */;
short int var155 /* : Bool */;
short int var156 /* : Bool */;
val* var157 /* : MClassType */;
val* var159 /* : MClassType */;
short int var160 /* : Bool */;
short int var_161 /* var : Bool */;
val* var162 /* : String */;
val* var164 /* : String */;
static val* varonce165;
val* var166 /* : String */;
char* var167 /* : NativeString */;
val* var168 /* : String */;
short int var169 /* : Bool */;
short int var171 /* : Bool */;
short int var172 /* : Bool */;
val* var173 /* : MClassType */;
val* var175 /* : MClassType */;
short int var176 /* : Bool */;
short int var177 /* : Bool */;
val* var178 /* : ToolContext */;
val* var180 /* : ToolContext */;
val* var182 /* : NativeArray[String] */;
static val* varonce181;
static val* varonce183;
val* var184 /* : String */;
char* var185 /* : NativeString */;
val* var186 /* : String */;
val* var187 /* : String */;
static val* varonce188;
val* var189 /* : String */;
char* var190 /* : NativeString */;
val* var191 /* : String */;
val* var192 /* : String */;
val* var193 /* : String */;
var_nmodule = p0;
var_nclassdef = p1;
{
{ /* Inline loader#AModule#mmodule (var_nmodule) on <var_nmodule:AModule> */
var2 = var_nmodule->attrs[COLOR_nitc__loader__AModule___mmodule].val; /* _mmodule on <var_nmodule:AModule> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mmodule = var;
if (var_mmodule == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mmodule,((val*)NULL)) on <var_mmodule:nullable MModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mmodule,var_other) on <var_mmodule:nullable MModule(MModule)> */
var8 = var_mmodule == var_other;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
goto RET_LABEL;
} else {
}
if (likely(varonce!=NULL)) {
var9 = varonce;
} else {
var10 = "Object";
var11 = core__flat___NativeString___to_s_full(var10, 6l, 6l);
var9 = var11;
varonce = var9;
}
{
var12 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(self, var_nmodule, var_mmodule, var9);
}
var_objectclass = var12;
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "Pointer";
var16 = core__flat___NativeString___to_s_full(var15, 7l, 7l);
var14 = var16;
varonce13 = var14;
}
{
var17 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(self, var_nmodule, var_mmodule, var14);
}
var_pointerclass = var17;
{
{ /* Inline modelize_class#AClassdef#mclass (var_nclassdef) on <var_nclassdef:AClassdef> */
var20 = var_nclassdef->attrs[COLOR_nitc__modelize_class__AClassdef___mclass].val; /* _mclass on <var_nclassdef:AClassdef> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
var_mclass = var18;
if (var_mclass == NULL) {
var21 = 1; /* is null */
} else {
var21 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mclass,((val*)NULL)) on <var_mclass:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
var26 = var_mclass == var_other;
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
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_class#AClassdef#mclassdef (var_nclassdef) on <var_nclassdef:AClassdef> */
var29 = var_nclassdef->attrs[COLOR_nitc__modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_nclassdef:AClassdef> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_mclassdef = var27;
if (var_mclassdef == NULL) {
var30 = 1; /* is null */
} else {
var30 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mclassdef,((val*)NULL)) on <var_mclassdef:nullable MClassDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mclassdef,var_other) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var35 = var_mclassdef == var_other;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
var30 = var31;
}
if (var30){
goto RET_LABEL;
} else {
}
var_specobject = 1;
var_specpointer = 1;
var36 = NEW_core__Array(&type_core__Array__nitc__MClassType);
{
core___core__Array___core__kernel__Object__init(var36); /* Direct call array#Array#init on <var36:Array[MClassType]>*/
}
var_supertypes = var36;
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype = type_nitc__AStdClassdef.color;
idtype = type_nitc__AStdClassdef.id;
if(cltype >= var_nclassdef->type->table_size) {
var37 = 0;
} else {
var37 = var_nclassdef->type->type_table[cltype] == idtype;
}
if (var37){
{
var38 = nitc___nitc__AStdClassdef___n_superclasses(var_nclassdef);
}
var_ = var38;
{
var39 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_40 = var39;
for(;;) {
{
var41 = ((short int(*)(val* self))((((long)var_40&3)?class_info[((long)var_40&3)]:var_40->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_40); /* is_ok on <var_40:IndexedIterator[ASuperPropdef]>*/
}
if (var41){
} else {
goto BREAK_label;
}
{
var42 = ((val*(*)(val* self))((((long)var_40&3)?class_info[((long)var_40&3)]:var_40->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_40); /* item on <var_40:IndexedIterator[ASuperPropdef]>*/
}
var_nsc = var42;
var_specobject = 0;
{
{ /* Inline parser_nodes#ASuperPropdef#n_type (var_nsc) on <var_nsc:ASuperPropdef> */
var45 = var_nsc->attrs[COLOR_nitc__parser_nodes__ASuperPropdef___n_type].val; /* _n_type on <var_nsc:ASuperPropdef> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1369);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
var_ntype = var43;
{
var46 = nitc___nitc__ModelBuilder___resolve_mtype_unchecked(self, var_mmodule, var_mclassdef, var_ntype, 0);
}
var_mtype = var46;
if (var_mtype == NULL) {
var47 = 1; /* is null */
} else {
var47 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var52 = var_mtype == var_other;
var50 = var52;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
var48 = var50;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
var47 = var48;
}
if (var47){
goto BREAK_label53;
} else {
}
/* <var_mtype:nullable MType(MType)> isa MClassType */
cltype55 = type_nitc__MClassType.color;
idtype56 = type_nitc__MClassType.id;
if(cltype55 >= var_mtype->type->table_size) {
var54 = 0;
} else {
var54 = var_mtype->type->type_table[cltype55] == idtype56;
}
var57 = !var54;
if (var57){
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "Error: supertypes cannot be a formal type.";
var61 = core__flat___NativeString___to_s_full(var60, 42l, 42l);
var59 = var61;
varonce58 = var59;
}
{
nitc___nitc__ModelBuilder___error(self, var_ntype, var59); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var64 = var_mclass->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 459);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:nullable MType(MClassType)> */
var67 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:nullable MType(MClassType)> */
if (unlikely(var67 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1163);
fatal_exit(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var65) on <var65:MClass> */
var70 = var65->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var65:MClass> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 459);
fatal_exit(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
var71 = nitc___nitc__MClassKind___can_specialize(var62, var68);
}
var72 = !var71;
if (var72){
if (unlikely(varonce73==NULL)) {
var74 = NEW_core__NativeArray(9l, &type_core__NativeArray__core__String);
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = "Error: ";
var78 = core__flat___NativeString___to_s_full(var77, 7l, 7l);
var76 = var78;
varonce75 = var76;
}
((struct instance_core__NativeArray*)var74)->values[0]=var76;
if (likely(varonce79!=NULL)) {
var80 = varonce79;
} else {
var81 = " `";
var82 = core__flat___NativeString___to_s_full(var81, 2l, 2l);
var80 = var82;
varonce79 = var80;
}
((struct instance_core__NativeArray*)var74)->values[2]=var80;
if (likely(varonce83!=NULL)) {
var84 = varonce83;
} else {
var85 = "` cannot specialize ";
var86 = core__flat___NativeString___to_s_full(var85, 20l, 20l);
var84 = var86;
varonce83 = var84;
}
((struct instance_core__NativeArray*)var74)->values[4]=var84;
if (likely(varonce87!=NULL)) {
var88 = varonce87;
} else {
var89 = " `";
var90 = core__flat___NativeString___to_s_full(var89, 2l, 2l);
var88 = var90;
varonce87 = var88;
}
((struct instance_core__NativeArray*)var74)->values[6]=var88;
if (likely(varonce91!=NULL)) {
var92 = varonce91;
} else {
var93 = "`.";
var94 = core__flat___NativeString___to_s_full(var93, 2l, 2l);
var92 = var94;
varonce91 = var92;
}
((struct instance_core__NativeArray*)var74)->values[8]=var92;
} else {
var74 = varonce73;
varonce73 = NULL;
}
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var97 = var_mclass->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var97 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 459);
fatal_exit(1);
}
var95 = var97;
RET_LABEL96:(void)0;
}
}
{
var98 = ((val*(*)(val* self))(var95->class->vft[COLOR_core__abstract_text__Object__to_s]))(var95); /* to_s on <var95:MClassKind>*/
}
((struct instance_core__NativeArray*)var74)->values[1]=var98;
{
var99 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclass); /* to_s on <var_mclass:nullable MClass(MClass)>*/
}
((struct instance_core__NativeArray*)var74)->values[3]=var99;
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:nullable MType(MClassType)> */
var102 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:nullable MType(MClassType)> */
if (unlikely(var102 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1163);
fatal_exit(1);
}
var100 = var102;
RET_LABEL101:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var100) on <var100:MClass> */
var105 = var100->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var100:MClass> */
if (unlikely(var105 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 459);
fatal_exit(1);
}
var103 = var105;
RET_LABEL104:(void)0;
}
}
{
var106 = ((val*(*)(val* self))(var103->class->vft[COLOR_core__abstract_text__Object__to_s]))(var103); /* to_s on <var103:MClassKind>*/
}
((struct instance_core__NativeArray*)var74)->values[5]=var106;
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:nullable MType(MClassType)> */
var109 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:nullable MType(MClassType)> */
if (unlikely(var109 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1163);
fatal_exit(1);
}
var107 = var109;
RET_LABEL108:(void)0;
}
}
{
var110 = ((val*(*)(val* self))(var107->class->vft[COLOR_core__abstract_text__Object__to_s]))(var107); /* to_s on <var107:MClass>*/
}
((struct instance_core__NativeArray*)var74)->values[7]=var110;
{
var111 = ((val*(*)(val* self))(var74->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var74); /* native_to_s on <var74:NativeArray[String]>*/
}
varonce73 = var74;
{
nitc___nitc__ModelBuilder___error(self, var_ntype, var111); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_supertypes, var_mtype); /* Direct call array#Array#add on <var_supertypes:Array[MClassType]>*/
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:nullable MType(MClassType)> */
var114 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:nullable MType(MClassType)> */
if (unlikely(var114 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1163);
fatal_exit(1);
}
var112 = var114;
RET_LABEL113:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var112) on <var112:MClass> */
var117 = var112->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var112:MClass> */
if (unlikely(var117 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 459);
fatal_exit(1);
}
var115 = var117;
RET_LABEL116:(void)0;
}
}
var118 = glob_sys;
{
var119 = nitc__model___core__Sys___extern_kind(var118);
}
{
{ /* Inline kernel#Object#== (var115,var119) on <var115:MClassKind> */
var_other = var119;
{
{ /* Inline kernel#Object#is_same_instance (var115,var_other) on <var115:MClassKind> */
var124 = var115 == var_other;
var122 = var124;
goto RET_LABEL123;
RET_LABEL123:(void)0;
}
}
var120 = var122;
goto RET_LABEL121;
RET_LABEL121:(void)0;
}
}
if (var120){
var_specpointer = 0;
} else {
}
BREAK_label53: (void)0;
{
((void(*)(val* self))((((long)var_40&3)?class_info[((long)var_40&3)]:var_40->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_40); /* next on <var_40:IndexedIterator[ASuperPropdef]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_40&3)?class_info[((long)var_40&3)]:var_40->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_40); /* finish on <var_40:IndexedIterator[ASuperPropdef]>*/
}
} else {
}
{
var126 = nitc___nitc__MClassDef___is_intro(var_mclassdef);
}
var_127 = var126;
if (var126){
if (var_objectclass == NULL) {
var128 = 0; /* is null */
} else {
var128 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_objectclass,((val*)NULL)) on <var_objectclass:nullable MClass> */
var_other131 = ((val*)NULL);
{
var132 = ((short int(*)(val* self, val* p0))(var_objectclass->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_objectclass, var_other131); /* == on <var_objectclass:nullable MClass(MClass)>*/
}
var133 = !var132;
var129 = var133;
goto RET_LABEL130;
RET_LABEL130:(void)0;
}
var128 = var129;
}
var125 = var128;
} else {
var125 = var_127;
}
if (var125){
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var137 = var_mclass->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var137 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 459);
fatal_exit(1);
}
var135 = var137;
RET_LABEL136:(void)0;
}
}
var138 = glob_sys;
{
var139 = nitc__model___core__Sys___extern_kind(var138);
}
{
{ /* Inline kernel#Object#== (var135,var139) on <var135:MClassKind> */
var_other = var139;
{
{ /* Inline kernel#Object#is_same_instance (var135,var_other) on <var135:MClassKind> */
var144 = var135 == var_other;
var142 = var144;
goto RET_LABEL143;
RET_LABEL143:(void)0;
}
}
var140 = var142;
goto RET_LABEL141;
RET_LABEL141:(void)0;
}
}
var_145 = var140;
if (var140){
{
{ /* Inline model#MClass#name (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var148 = var_mclass->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var148 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 385);
fatal_exit(1);
}
var146 = var148;
RET_LABEL147:(void)0;
}
}
if (likely(varonce149!=NULL)) {
var150 = varonce149;
} else {
var151 = "Pointer";
var152 = core__flat___NativeString___to_s_full(var151, 7l, 7l);
var150 = var152;
varonce149 = var150;
}
{
{ /* Inline kernel#Object#!= (var146,var150) on <var146:String> */
var_other131 = var150;
{
var155 = ((short int(*)(val* self, val* p0))(var146->class->vft[COLOR_core__kernel__Object___61d_61d]))(var146, var_other131); /* == on <var146:String>*/
}
var156 = !var155;
var153 = var156;
goto RET_LABEL154;
RET_LABEL154:(void)0;
}
}
var134 = var153;
} else {
var134 = var_145;
}
if (var134){
if (var_specpointer){
if (var_pointerclass == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 272);
fatal_exit(1);
} else {
{ /* Inline model#MClass#mclass_type (var_pointerclass) on <var_pointerclass:nullable MClass> */
if (unlikely(var_pointerclass == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 507);
fatal_exit(1);
}
var159 = var_pointerclass->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_pointerclass:nullable MClass> */
if (unlikely(var159 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 507);
fatal_exit(1);
}
var157 = var159;
RET_LABEL158:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_supertypes, var157); /* Direct call array#Array#add on <var_supertypes:Array[MClassType]>*/
}
} else {
}
} else {
var_161 = var_specobject;
if (var_specobject){
{
{ /* Inline model#MClass#name (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var164 = var_mclass->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var164 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 385);
fatal_exit(1);
}
var162 = var164;
RET_LABEL163:(void)0;
}
}
if (likely(varonce165!=NULL)) {
var166 = varonce165;
} else {
var167 = "Object";
var168 = core__flat___NativeString___to_s_full(var167, 6l, 6l);
var166 = var168;
varonce165 = var166;
}
{
{ /* Inline kernel#Object#!= (var162,var166) on <var162:String> */
var_other131 = var166;
{
var171 = ((short int(*)(val* self, val* p0))(var162->class->vft[COLOR_core__kernel__Object___61d_61d]))(var162, var_other131); /* == on <var162:String>*/
}
var172 = !var171;
var169 = var172;
goto RET_LABEL170;
RET_LABEL170:(void)0;
}
}
var160 = var169;
} else {
var160 = var_161;
}
if (var160){
{
{ /* Inline model#MClass#mclass_type (var_objectclass) on <var_objectclass:nullable MClass(MClass)> */
var175 = var_objectclass->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_objectclass:nullable MClass(MClass)> */
if (unlikely(var175 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 507);
fatal_exit(1);
}
var173 = var175;
RET_LABEL174:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_supertypes, var173); /* Direct call array#Array#add on <var_supertypes:Array[MClassType]>*/
}
} else {
}
}
} else {
}
{
nitc___nitc__MClassDef___set_supertypes(var_mclassdef, var_supertypes); /* Direct call model#MClassDef#set_supertypes on <var_mclassdef:nullable MClassDef(MClassDef)>*/
}
{
var176 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_supertypes);
}
var177 = !var176;
if (var177){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var180 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var180 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var178 = var180;
RET_LABEL179:(void)0;
}
}
if (unlikely(varonce181==NULL)) {
var182 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce183!=NULL)) {
var184 = varonce183;
} else {
var185 = " new super-types: ";
var186 = core__flat___NativeString___to_s_full(var185, 18l, 18l);
var184 = var186;
varonce183 = var184;
}
((struct instance_core__NativeArray*)var182)->values[1]=var184;
} else {
var182 = varonce181;
varonce181 = NULL;
}
{
var187 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:nullable MClassDef(MClassDef)>*/
}
((struct instance_core__NativeArray*)var182)->values[0]=var187;
if (likely(varonce188!=NULL)) {
var189 = varonce188;
} else {
var190 = ", ";
var191 = core__flat___NativeString___to_s_full(var190, 2l, 2l);
var189 = var191;
varonce188 = var189;
}
{
var192 = core__abstract_text___Collection___join(var_supertypes, var189);
}
((struct instance_core__NativeArray*)var182)->values[2]=var192;
{
var193 = ((val*(*)(val* self))(var182->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var182); /* native_to_s on <var182:NativeArray[String]>*/
}
varonce181 = var182;
{
nitc___nitc__ToolContext___info(var178, var193, 3l); /* Direct call toolcontext#ToolContext#info on <var178:ToolContext>*/
}
} else {
}
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#check_supertypes for (self: ModelBuilder, AModule, AClassdef) */
void nitc__modelize_class___ModelBuilder___check_supertypes(val* self, val* p0, val* p1) {
val* var_nmodule /* var nmodule: AModule */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var /* : nullable MModule */;
val* var2 /* : nullable MModule */;
val* var_mmodule /* var mmodule: nullable MModule */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable MClass */;
val* var11 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : nullable MClassDef */;
val* var20 /* : nullable MClassDef */;
val* var_mclassdef /* var mclassdef: nullable MClassDef */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : Array[MClassType] */;
val* var29 /* : Array[MClassType] */;
val* var_ /* var : Array[MClassType] */;
val* var30 /* : IndexedIterator[nullable Object] */;
val* var_31 /* var : IndexedIterator[MClassType] */;
short int var32 /* : Bool */;
val* var33 /* : nullable Object */;
val* var_s /* var s: MClassType */;
val* var34 /* : MClassType */;
val* var36 /* : MClassType */;
val* var37 /* : MClassType */;
val* var39 /* : MClassType */;
short int var40 /* : Bool */;
val* var41 /* : NativeArray[String] */;
static val* varonce;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : String */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
val* var49 /* : String */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
val* var53 /* : String */;
val* var54 /* : String */;
val* var55 /* : String */;
val* var56 /* : String */;
var_nmodule = p0;
var_nclassdef = p1;
{
{ /* Inline loader#AModule#mmodule (var_nmodule) on <var_nmodule:AModule> */
var2 = var_nmodule->attrs[COLOR_nitc__loader__AModule___mmodule].val; /* _mmodule on <var_nmodule:AModule> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mmodule = var;
if (var_mmodule == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mmodule,((val*)NULL)) on <var_mmodule:nullable MModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mmodule,var_other) on <var_mmodule:nullable MModule(MModule)> */
var8 = var_mmodule == var_other;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_class#AClassdef#mclass (var_nclassdef) on <var_nclassdef:AClassdef> */
var11 = var_nclassdef->attrs[COLOR_nitc__modelize_class__AClassdef___mclass].val; /* _mclass on <var_nclassdef:AClassdef> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_mclass = var9;
if (var_mclass == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mclass,((val*)NULL)) on <var_mclass:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
var17 = var_mclass == var_other;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (var12){
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_class#AClassdef#mclassdef (var_nclassdef) on <var_nclassdef:AClassdef> */
var20 = var_nclassdef->attrs[COLOR_nitc__modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_nclassdef:AClassdef> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
var_mclassdef = var18;
if (var_mclassdef == NULL) {
var21 = 1; /* is null */
} else {
var21 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mclassdef,((val*)NULL)) on <var_mclassdef:nullable MClassDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mclassdef,var_other) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var26 = var_mclassdef == var_other;
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
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassDef#supertypes (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var29 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___supertypes].val; /* _supertypes on <var_mclassdef:nullable MClassDef(MClassDef)> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supertypes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 650);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_ = var27;
{
var30 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_31 = var30;
for(;;) {
{
var32 = ((short int(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_31); /* is_ok on <var_31:IndexedIterator[MClassType]>*/
}
if (var32){
} else {
goto BREAK_label;
}
{
var33 = ((val*(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_31); /* item on <var_31:IndexedIterator[MClassType]>*/
}
var_s = var33;
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var36 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:nullable MClassDef(MClassDef)> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 579);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var39 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:nullable MClassDef(MClassDef)> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 579);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
var40 = nitc___nitc__MType___is_subtype(var_s, var_mmodule, var34, var37);
}
if (var40){
if (unlikely(varonce==NULL)) {
var41 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "Error: inheritance loop for class `";
var45 = core__flat___NativeString___to_s_full(var44, 35l, 35l);
var43 = var45;
varonce42 = var43;
}
((struct instance_core__NativeArray*)var41)->values[0]=var43;
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = "` with type `";
var49 = core__flat___NativeString___to_s_full(var48, 13l, 13l);
var47 = var49;
varonce46 = var47;
}
((struct instance_core__NativeArray*)var41)->values[2]=var47;
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = "`.";
var53 = core__flat___NativeString___to_s_full(var52, 2l, 2l);
var51 = var53;
varonce50 = var51;
}
((struct instance_core__NativeArray*)var41)->values[4]=var51;
} else {
var41 = varonce;
varonce = NULL;
}
{
var54 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclass); /* to_s on <var_mclass:nullable MClass(MClass)>*/
}
((struct instance_core__NativeArray*)var41)->values[1]=var54;
{
var55 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_s); /* to_s on <var_s:MClassType>*/
}
((struct instance_core__NativeArray*)var41)->values[3]=var55;
{
var56 = ((val*(*)(val* self))(var41->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var41); /* native_to_s on <var41:NativeArray[String]>*/
}
varonce = var41;
{
nitc___nitc__ModelBuilder___error(self, var_nclassdef, var56); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_31); /* next on <var_31:IndexedIterator[MClassType]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_31); /* finish on <var_31:IndexedIterator[MClassType]>*/
}
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#build_classes for (self: ModelBuilder, AModule) */
void nitc__modelize_class___ModelBuilder___build_classes(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
short int var /* : Bool */;
short int var2 /* : Bool */;
val* var4 /* : nullable MModule */;
val* var6 /* : nullable MModule */;
val* var_mmodule /* var mmodule: nullable MModule */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : POSetElement[MModule] */;
val* var15 /* : POSetElement[MModule] */;
val* var16 /* : Collection[nullable Object] */;
val* var_ /* var : Collection[MModule] */;
val* var17 /* : Iterator[nullable Object] */;
val* var_18 /* var : Iterator[MModule] */;
short int var19 /* : Bool */;
val* var20 /* : nullable Object */;
val* var_imp /* var imp: MModule */;
val* var21 /* : nullable AModule */;
val* var_nimp /* var nimp: nullable AModule */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var_other25 /* var other: nullable Object */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : ANodes[AClassdef] */;
val* var30 /* : ANodes[AClassdef] */;
val* var_31 /* var : ANodes[AClassdef] */;
val* var32 /* : Iterator[ANode] */;
val* var_33 /* var : Iterator[AClassdef] */;
short int var34 /* : Bool */;
val* var36 /* : nullable Object */;
val* var_nclassdef /* var nclassdef: AClassdef */;
short int var37 /* : Bool */;
int cltype;
int idtype;
short int var38 /* : Bool */;
val* var40 /* : ANodes[AClassdef] */;
val* var42 /* : ANodes[AClassdef] */;
val* var_43 /* var : ANodes[AClassdef] */;
val* var44 /* : Iterator[ANode] */;
val* var_45 /* var : Iterator[AClassdef] */;
short int var46 /* : Bool */;
val* var48 /* : nullable Object */;
val* var_nclassdef49 /* var nclassdef: AClassdef */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
val* var54 /* : ANodes[AClassdef] */;
val* var56 /* : ANodes[AClassdef] */;
val* var_57 /* var : ANodes[AClassdef] */;
val* var58 /* : Iterator[ANode] */;
val* var_59 /* var : Iterator[AClassdef] */;
short int var60 /* : Bool */;
val* var62 /* : nullable Object */;
val* var_nclassdef63 /* var nclassdef: AClassdef */;
short int var64 /* : Bool */;
int cltype65;
int idtype66;
short int var67 /* : Bool */;
val* var69 /* : ANodes[AClassdef] */;
val* var71 /* : ANodes[AClassdef] */;
val* var_72 /* var : ANodes[AClassdef] */;
val* var73 /* : Iterator[ANode] */;
val* var_74 /* var : Iterator[AClassdef] */;
short int var75 /* : Bool */;
val* var77 /* : nullable Object */;
val* var_nclassdef78 /* var nclassdef: AClassdef */;
short int var79 /* : Bool */;
int cltype80;
int idtype81;
val* var83 /* : ANodes[AClassdef] */;
val* var85 /* : ANodes[AClassdef] */;
val* var_86 /* var : ANodes[AClassdef] */;
val* var87 /* : Iterator[ANode] */;
val* var_88 /* var : Iterator[AClassdef] */;
short int var89 /* : Bool */;
val* var91 /* : nullable Object */;
val* var_nclassdef92 /* var nclassdef: AClassdef */;
val* var93 /* : Array[MClassDef] */;
val* var95 /* : Array[MClassDef] */;
val* var_96 /* var : Array[MClassDef] */;
val* var97 /* : IndexedIterator[nullable Object] */;
val* var_98 /* var : IndexedIterator[MClassDef] */;
short int var99 /* : Bool */;
val* var101 /* : nullable Object */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var102 /* : ANodes[AClassdef] */;
val* var104 /* : ANodes[AClassdef] */;
val* var_105 /* var : ANodes[AClassdef] */;
val* var106 /* : Iterator[ANode] */;
val* var_107 /* var : Iterator[AClassdef] */;
short int var108 /* : Bool */;
val* var110 /* : nullable Object */;
val* var_nclassdef111 /* var nclassdef: AClassdef */;
val* var112 /* : ANodes[AClassdef] */;
val* var114 /* : ANodes[AClassdef] */;
val* var_115 /* var : ANodes[AClassdef] */;
val* var116 /* : Iterator[ANode] */;
val* var_117 /* var : Iterator[AClassdef] */;
short int var118 /* : Bool */;
val* var120 /* : nullable Object */;
val* var_nclassdef121 /* var nclassdef: AClassdef */;
short int var122 /* : Bool */;
int cltype123;
int idtype124;
val* var125 /* : nullable MClassDef */;
val* var127 /* : nullable MClassDef */;
val* var_mclassdef128 /* var mclassdef: nullable MClassDef */;
val* var129 /* : ANodes[AFormaldef] */;
val* var131 /* : ANodes[AFormaldef] */;
val* var_132 /* var : ANodes[AFormaldef] */;
val* var133 /* : Iterator[ANode] */;
val* var_134 /* var : Iterator[AFormaldef] */;
short int var135 /* : Bool */;
val* var137 /* : nullable Object */;
val* var_nfd /* var nfd: AFormaldef */;
val* var138 /* : nullable AType */;
val* var140 /* : nullable AType */;
val* var_nfdt /* var nfdt: nullable AType */;
short int var141 /* : Bool */;
short int var142 /* : Bool */;
short int var143 /* : Bool */;
short int var145 /* : Bool */;
short int var146 /* : Bool */;
short int var_147 /* var : Bool */;
val* var148 /* : nullable MType */;
val* var150 /* : nullable MType */;
short int var151 /* : Bool */;
short int var152 /* : Bool */;
short int var154 /* : Bool */;
short int var155 /* : Bool */;
val* var156 /* : nullable MType */;
val* var_bound /* var bound: nullable MType */;
short int var157 /* : Bool */;
short int var158 /* : Bool */;
short int var160 /* : Bool */;
short int var162 /* : Bool */;
val* var163 /* : Array[ASuperPropdef] */;
val* var_164 /* var : Array[ASuperPropdef] */;
val* var165 /* : IndexedIterator[nullable Object] */;
val* var_166 /* var : IndexedIterator[ASuperPropdef] */;
short int var167 /* : Bool */;
val* var169 /* : nullable Object */;
val* var_nsc /* var nsc: ASuperPropdef */;
val* var170 /* : AType */;
val* var172 /* : AType */;
val* var_ntype /* var ntype: AType */;
val* var173 /* : nullable MType */;
val* var175 /* : nullable MType */;
short int var176 /* : Bool */;
short int var177 /* : Bool */;
short int var179 /* : Bool */;
short int var180 /* : Bool */;
val* var181 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var182 /* : Bool */;
short int var183 /* : Bool */;
short int var185 /* : Bool */;
short int var187 /* : Bool */;
val* var188 /* : ANodes[AClassdef] */;
val* var190 /* : ANodes[AClassdef] */;
val* var_191 /* var : ANodes[AClassdef] */;
val* var192 /* : Iterator[ANode] */;
val* var_193 /* var : Iterator[AClassdef] */;
short int var194 /* : Bool */;
val* var196 /* : nullable Object */;
val* var_nclassdef197 /* var nclassdef: AClassdef */;
val* var198 /* : nullable MClassDef */;
val* var200 /* : nullable MClassDef */;
val* var_mclassdef201 /* var mclassdef: nullable MClassDef */;
short int var202 /* : Bool */;
short int var203 /* : Bool */;
short int var205 /* : Bool */;
short int var207 /* : Bool */;
val* var209 /* : HashMap[MClass, MClassType] */;
val* var_superclasses /* var superclasses: HashMap[MClass, MClassType] */;
val* var210 /* : nullable POSetElement[MClassDef] */;
val* var212 /* : nullable POSetElement[MClassDef] */;
val* var213 /* : Collection[nullable Object] */;
val* var_214 /* var : Collection[MClassDef] */;
val* var215 /* : Iterator[nullable Object] */;
val* var_216 /* var : Iterator[MClassDef] */;
short int var217 /* : Bool */;
val* var219 /* : nullable Object */;
val* var_scd /* var scd: MClassDef */;
val* var220 /* : Array[MClassType] */;
val* var222 /* : Array[MClassType] */;
val* var_223 /* var : Array[MClassType] */;
val* var224 /* : IndexedIterator[nullable Object] */;
val* var_225 /* var : IndexedIterator[MClassType] */;
short int var226 /* : Bool */;
val* var228 /* : nullable Object */;
val* var_st /* var st: MClassType */;
val* var229 /* : MClass */;
val* var231 /* : MClass */;
short int var232 /* : Bool */;
short int var233 /* : Bool */;
val* var234 /* : MClass */;
val* var236 /* : MClass */;
val* var237 /* : MClass */;
val* var239 /* : MClass */;
val* var240 /* : nullable Object */;
short int var241 /* : Bool */;
short int var243 /* : Bool */;
short int var244 /* : Bool */;
val* var245 /* : MClass */;
val* var247 /* : MClass */;
val* var248 /* : nullable Object */;
val* var249 /* : MClass */;
val* var251 /* : MClass */;
val* var252 /* : MClassType */;
val* var254 /* : MClassType */;
val* var255 /* : MClassType */;
val* var257 /* : MClassType */;
val* var258 /* : MType */;
val* var_st1 /* var st1: MClassType */;
val* var259 /* : MClass */;
val* var261 /* : MClass */;
val* var262 /* : MClassType */;
val* var264 /* : MClassType */;
val* var265 /* : MClassType */;
val* var267 /* : MClassType */;
val* var268 /* : MType */;
val* var_st2 /* var st2: MClassType */;
short int var269 /* : Bool */;
short int var271 /* : Bool */;
short int var272 /* : Bool */;
val* var273 /* : NativeArray[String] */;
static val* varonce;
static val* varonce274;
val* var275 /* : String */;
char* var276 /* : NativeString */;
val* var277 /* : String */;
static val* varonce278;
val* var279 /* : String */;
char* var280 /* : NativeString */;
val* var281 /* : String */;
static val* varonce282;
val* var283 /* : String */;
char* var284 /* : NativeString */;
val* var285 /* : String */;
static val* varonce286;
val* var287 /* : String */;
char* var288 /* : NativeString */;
val* var289 /* : String */;
val* var290 /* : MClass */;
val* var292 /* : MClass */;
val* var293 /* : String */;
val* var294 /* : String */;
val* var295 /* : String */;
val* var296 /* : String */;
val* var297 /* : ANodes[AClassdef] */;
val* var299 /* : ANodes[AClassdef] */;
val* var_300 /* var : ANodes[AClassdef] */;
val* var301 /* : Iterator[ANode] */;
val* var_302 /* var : Iterator[AClassdef] */;
short int var303 /* : Bool */;
val* var305 /* : nullable Object */;
val* var_nclassdef306 /* var nclassdef: AClassdef */;
short int var307 /* : Bool */;
short int var308 /* : Bool */;
int cltype309;
int idtype310;
short int var311 /* : Bool */;
short int var_312 /* var : Bool */;
short int var313 /* : Bool */;
short int var315 /* : Bool */;
val* var317 /* : nullable MClassDef */;
val* var319 /* : nullable MClassDef */;
val* var_mclassdef320 /* var mclassdef: nullable MClassDef */;
short int var321 /* : Bool */;
short int var322 /* : Bool */;
short int var324 /* : Bool */;
short int var326 /* : Bool */;
val* var327 /* : Array[MClass] */;
val* var_parents /* var parents: Array[MClass] */;
val* var328 /* : nullable POSetElement[MClassDef] */;
val* var330 /* : nullable POSetElement[MClassDef] */;
val* var331 /* : Collection[nullable Object] */;
val* var_332 /* var : Collection[MClassDef] */;
val* var333 /* : Iterator[nullable Object] */;
val* var_334 /* var : Iterator[MClassDef] */;
short int var335 /* : Bool */;
val* var337 /* : nullable Object */;
val* var_sup /* var sup: MClassDef */;
val* var338 /* : MClass */;
val* var340 /* : MClass */;
val* var341 /* : ArrayMap[MClass, AType] */;
val* var_seen_parents /* var seen_parents: ArrayMap[MClass, AType] */;
static val* varonce343;
val* var344 /* : String */;
char* var345 /* : NativeString */;
val* var346 /* : String */;
val* var347 /* : nullable MClass */;
val* var_objectclass /* var objectclass: nullable MClass */;
val* var348 /* : Array[ASuperPropdef] */;
val* var_349 /* var : Array[ASuperPropdef] */;
val* var350 /* : IndexedIterator[nullable Object] */;
val* var_351 /* var : IndexedIterator[ASuperPropdef] */;
short int var352 /* : Bool */;
val* var354 /* : nullable Object */;
val* var_nsc355 /* var nsc: ASuperPropdef */;
val* var356 /* : AType */;
val* var358 /* : AType */;
val* var_ntype359 /* var ntype: AType */;
val* var360 /* : nullable MType */;
val* var362 /* : nullable MType */;
val* var_mtype363 /* var mtype: nullable MType */;
short int var364 /* : Bool */;
short int var365 /* : Bool */;
short int var367 /* : Bool */;
short int var369 /* : Bool */;
short int var371 /* : Bool */;
int cltype372;
int idtype373;
val* var374 /* : MClass */;
val* var376 /* : MClass */;
val* var_sc /* var sc: MClass */;
short int var377 /* : Bool */;
short int var378 /* : Bool */;
short int var379 /* : Bool */;
short int var_380 /* var : Bool */;
short int var381 /* : Bool */;
short int var383 /* : Bool */;
short int var385 /* : Bool */;
short int var386 /* : Bool */;
val* var387 /* : Location */;
val* var389 /* : Location */;
val* var390 /* : nullable SourceFile */;
val* var392 /* : nullable SourceFile */;
short int var393 /* : Bool */;
short int var394 /* : Bool */;
short int var396 /* : Bool */;
short int var397 /* : Bool */;
short int var_398 /* var : Bool */;
val* var399 /* : Location */;
val* var401 /* : Location */;
val* var402 /* : nullable SourceFile */;
val* var404 /* : nullable SourceFile */;
val* var405 /* : String */;
val* var407 /* : String */;
short int var408 /* : Bool */;
short int var409 /* : Bool */;
static val* varonce410;
val* var411 /* : String */;
char* var412 /* : NativeString */;
val* var413 /* : String */;
val* var415 /* : NativeArray[String] */;
static val* varonce414;
static val* varonce416;
val* var417 /* : String */;
char* var418 /* : NativeString */;
val* var419 /* : String */;
static val* varonce420;
val* var421 /* : String */;
char* var422 /* : NativeString */;
val* var423 /* : String */;
static val* varonce424;
val* var425 /* : String */;
char* var426 /* : NativeString */;
val* var427 /* : String */;
val* var428 /* : String */;
val* var429 /* : MClass */;
val* var431 /* : MClass */;
val* var432 /* : String */;
val* var433 /* : String */;
short int var434 /* : Bool */;
short int var435 /* : Bool */;
static val* varonce436;
val* var437 /* : String */;
char* var438 /* : NativeString */;
val* var439 /* : String */;
val* var441 /* : NativeArray[String] */;
static val* varonce440;
static val* varonce442;
val* var443 /* : String */;
char* var444 /* : NativeString */;
val* var445 /* : String */;
static val* varonce446;
val* var447 /* : String */;
char* var448 /* : NativeString */;
val* var449 /* : String */;
static val* varonce450;
val* var451 /* : String */;
char* var452 /* : NativeString */;
val* var453 /* : String */;
val* var454 /* : String */;
val* var455 /* : MClass */;
val* var457 /* : MClass */;
val* var458 /* : String */;
val* var459 /* : String */;
var_nmodule = p0;
{
{ /* Inline modelize_class#AModule#build_classes_is_done (var_nmodule) on <var_nmodule:AModule> */
var2 = var_nmodule->attrs[COLOR_nitc__modelize_class__AModule___build_classes_is_done].s; /* _build_classes_is_done on <var_nmodule:AModule> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var){
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_class#AModule#build_classes_is_done= (var_nmodule,1) on <var_nmodule:AModule> */
var_nmodule->attrs[COLOR_nitc__modelize_class__AModule___build_classes_is_done].s = 1; /* _build_classes_is_done on <var_nmodule:AModule> */
RET_LABEL3:(void)0;
}
}
{
{ /* Inline loader#AModule#mmodule (var_nmodule) on <var_nmodule:AModule> */
var6 = var_nmodule->attrs[COLOR_nitc__loader__AModule___mmodule].val; /* _mmodule on <var_nmodule:AModule> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_mmodule = var4;
if (var_mmodule == NULL) {
var7 = 1; /* is null */
} else {
var7 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mmodule,((val*)NULL)) on <var_mmodule:nullable MModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mmodule,var_other) on <var_mmodule:nullable MModule(MModule)> */
var12 = var_mmodule == var_other;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
if (var7){
goto RET_LABEL;
} else {
}
{
{ /* Inline mmodule#MModule#in_importation (var_mmodule) on <var_mmodule:nullable MModule(MModule)> */
var15 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:nullable MModule(MModule)> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 104);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = poset___poset__POSetElement___direct_greaters(var13);
}
var_ = var16;
{
var17 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[MModule]>*/
}
var_18 = var17;
for(;;) {
{
var19 = ((short int(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_18); /* is_ok on <var_18:Iterator[MModule]>*/
}
if (var19){
} else {
goto BREAK_label;
}
{
var20 = ((val*(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_18); /* item on <var_18:Iterator[MModule]>*/
}
var_imp = var20;
{
var21 = nitc__loader___ModelBuilder___mmodule2node(self, var_imp);
}
var_nimp = var21;
if (var_nimp == NULL) {
var22 = 0; /* is null */
} else {
var22 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nimp,((val*)NULL)) on <var_nimp:nullable AModule> */
var_other25 = ((val*)NULL);
{
var26 = ((short int(*)(val* self, val* p0))(var_nimp->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nimp, var_other25); /* == on <var_nimp:nullable AModule(AModule)>*/
}
var27 = !var26;
var23 = var27;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
var22 = var23;
}
if (var22){
{
nitc__modelize_class___ModelBuilder___build_classes(self, var_nimp); /* Direct call modelize_class#ModelBuilder#build_classes on <self:ModelBuilder>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_18); /* next on <var_18:Iterator[MModule]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_18); /* finish on <var_18:Iterator[MModule]>*/
}
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var30 = var_nmodule->attrs[COLOR_nitc__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1062);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
var_31 = var28;
{
var32 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_31);
}
var_33 = var32;
for(;;) {
{
var34 = ((short int(*)(val* self))((((long)var_33&3)?class_info[((long)var_33&3)]:var_33->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_33); /* is_ok on <var_33:Iterator[AClassdef]>*/
}
if (var34){
} else {
goto BREAK_label35;
}
{
var36 = ((val*(*)(val* self))((((long)var_33&3)?class_info[((long)var_33&3)]:var_33->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_33); /* item on <var_33:Iterator[AClassdef]>*/
}
var_nclassdef = var36;
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype = type_nitc__AStdClassdef.color;
idtype = type_nitc__AStdClassdef.id;
if(cltype >= var_nclassdef->type->table_size) {
var37 = 0;
} else {
var37 = var_nclassdef->type->type_table[cltype] == idtype;
}
var38 = !var37;
if (var38){
goto BREAK_label39;
} else {
}
{
nitc__modelize_class___ModelBuilder___build_a_mclass(self, var_nmodule, var_nclassdef); /* Direct call modelize_class#ModelBuilder#build_a_mclass on <self:ModelBuilder>*/
}
BREAK_label39: (void)0;
{
((void(*)(val* self))((((long)var_33&3)?class_info[((long)var_33&3)]:var_33->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_33); /* next on <var_33:Iterator[AClassdef]>*/
}
}
BREAK_label35: (void)0;
{
((void(*)(val* self))((((long)var_33&3)?class_info[((long)var_33&3)]:var_33->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_33); /* finish on <var_33:Iterator[AClassdef]>*/
}
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var42 = var_nmodule->attrs[COLOR_nitc__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1062);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
var_43 = var40;
{
var44 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_43);
}
var_45 = var44;
for(;;) {
{
var46 = ((short int(*)(val* self))((((long)var_45&3)?class_info[((long)var_45&3)]:var_45->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_45); /* is_ok on <var_45:Iterator[AClassdef]>*/
}
if (var46){
} else {
goto BREAK_label47;
}
{
var48 = ((val*(*)(val* self))((((long)var_45&3)?class_info[((long)var_45&3)]:var_45->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_45); /* item on <var_45:Iterator[AClassdef]>*/
}
var_nclassdef49 = var48;
/* <var_nclassdef49:AClassdef> isa AStdClassdef */
cltype51 = type_nitc__AStdClassdef.color;
idtype52 = type_nitc__AStdClassdef.id;
if(cltype51 >= var_nclassdef49->type->table_size) {
var50 = 0;
} else {
var50 = var_nclassdef49->type->type_table[cltype51] == idtype52;
}
if (var50){
goto BREAK_label53;
} else {
}
{
nitc__modelize_class___ModelBuilder___build_a_mclass(self, var_nmodule, var_nclassdef49); /* Direct call modelize_class#ModelBuilder#build_a_mclass on <self:ModelBuilder>*/
}
BREAK_label53: (void)0;
{
((void(*)(val* self))((((long)var_45&3)?class_info[((long)var_45&3)]:var_45->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_45); /* next on <var_45:Iterator[AClassdef]>*/
}
}
BREAK_label47: (void)0;
{
((void(*)(val* self))((((long)var_45&3)?class_info[((long)var_45&3)]:var_45->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_45); /* finish on <var_45:Iterator[AClassdef]>*/
}
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var56 = var_nmodule->attrs[COLOR_nitc__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1062);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
var_57 = var54;
{
var58 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_57);
}
var_59 = var58;
for(;;) {
{
var60 = ((short int(*)(val* self))((((long)var_59&3)?class_info[((long)var_59&3)]:var_59->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_59); /* is_ok on <var_59:Iterator[AClassdef]>*/
}
if (var60){
} else {
goto BREAK_label61;
}
{
var62 = ((val*(*)(val* self))((((long)var_59&3)?class_info[((long)var_59&3)]:var_59->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_59); /* item on <var_59:Iterator[AClassdef]>*/
}
var_nclassdef63 = var62;
/* <var_nclassdef63:AClassdef> isa AStdClassdef */
cltype65 = type_nitc__AStdClassdef.color;
idtype66 = type_nitc__AStdClassdef.id;
if(cltype65 >= var_nclassdef63->type->table_size) {
var64 = 0;
} else {
var64 = var_nclassdef63->type->type_table[cltype65] == idtype66;
}
var67 = !var64;
if (var67){
goto BREAK_label68;
} else {
}
{
nitc__modelize_class___ModelBuilder___build_a_mclassdef(self, var_nmodule, var_nclassdef63); /* Direct call modelize_class#ModelBuilder#build_a_mclassdef on <self:ModelBuilder>*/
}
BREAK_label68: (void)0;
{
((void(*)(val* self))((((long)var_59&3)?class_info[((long)var_59&3)]:var_59->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_59); /* next on <var_59:Iterator[AClassdef]>*/
}
}
BREAK_label61: (void)0;
{
((void(*)(val* self))((((long)var_59&3)?class_info[((long)var_59&3)]:var_59->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_59); /* finish on <var_59:Iterator[AClassdef]>*/
}
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var71 = var_nmodule->attrs[COLOR_nitc__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1062);
fatal_exit(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
var_72 = var69;
{
var73 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_72);
}
var_74 = var73;
for(;;) {
{
var75 = ((short int(*)(val* self))((((long)var_74&3)?class_info[((long)var_74&3)]:var_74->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_74); /* is_ok on <var_74:Iterator[AClassdef]>*/
}
if (var75){
} else {
goto BREAK_label76;
}
{
var77 = ((val*(*)(val* self))((((long)var_74&3)?class_info[((long)var_74&3)]:var_74->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_74); /* item on <var_74:Iterator[AClassdef]>*/
}
var_nclassdef78 = var77;
/* <var_nclassdef78:AClassdef> isa AStdClassdef */
cltype80 = type_nitc__AStdClassdef.color;
idtype81 = type_nitc__AStdClassdef.id;
if(cltype80 >= var_nclassdef78->type->table_size) {
var79 = 0;
} else {
var79 = var_nclassdef78->type->type_table[cltype80] == idtype81;
}
if (var79){
goto BREAK_label82;
} else {
}
{
nitc__modelize_class___ModelBuilder___build_a_mclassdef(self, var_nmodule, var_nclassdef78); /* Direct call modelize_class#ModelBuilder#build_a_mclassdef on <self:ModelBuilder>*/
}
BREAK_label82: (void)0;
{
((void(*)(val* self))((((long)var_74&3)?class_info[((long)var_74&3)]:var_74->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_74); /* next on <var_74:Iterator[AClassdef]>*/
}
}
BREAK_label76: (void)0;
{
((void(*)(val* self))((((long)var_74&3)?class_info[((long)var_74&3)]:var_74->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_74); /* finish on <var_74:Iterator[AClassdef]>*/
}
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var85 = var_nmodule->attrs[COLOR_nitc__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var85 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1062);
fatal_exit(1);
}
var83 = var85;
RET_LABEL84:(void)0;
}
}
var_86 = var83;
{
var87 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_86);
}
var_88 = var87;
for(;;) {
{
var89 = ((short int(*)(val* self))((((long)var_88&3)?class_info[((long)var_88&3)]:var_88->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_88); /* is_ok on <var_88:Iterator[AClassdef]>*/
}
if (var89){
} else {
goto BREAK_label90;
}
{
var91 = ((val*(*)(val* self))((((long)var_88&3)?class_info[((long)var_88&3)]:var_88->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_88); /* item on <var_88:Iterator[AClassdef]>*/
}
var_nclassdef92 = var91;
{
nitc__modelize_class___ModelBuilder___collect_a_mclassdef_inheritance(self, var_nmodule, var_nclassdef92); /* Direct call modelize_class#ModelBuilder#collect_a_mclassdef_inheritance on <self:ModelBuilder>*/
}
{
((void(*)(val* self))((((long)var_88&3)?class_info[((long)var_88&3)]:var_88->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_88); /* next on <var_88:Iterator[AClassdef]>*/
}
}
BREAK_label90: (void)0;
{
((void(*)(val* self))((((long)var_88&3)?class_info[((long)var_88&3)]:var_88->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_88); /* finish on <var_88:Iterator[AClassdef]>*/
}
{
{ /* Inline model#MModule#mclassdefs (var_mmodule) on <var_mmodule:nullable MModule(MModule)> */
var95 = var_mmodule->attrs[COLOR_nitc__model__MModule___mclassdefs].val; /* _mclassdefs on <var_mmodule:nullable MModule(MModule)> */
if (unlikely(var95 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 141);
fatal_exit(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
var_96 = var93;
{
var97 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_96);
}
var_98 = var97;
for(;;) {
{
var99 = ((short int(*)(val* self))((((long)var_98&3)?class_info[((long)var_98&3)]:var_98->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_98); /* is_ok on <var_98:IndexedIterator[MClassDef]>*/
}
if (var99){
} else {
goto BREAK_label100;
}
{
var101 = ((val*(*)(val* self))((((long)var_98&3)?class_info[((long)var_98&3)]:var_98->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_98); /* item on <var_98:IndexedIterator[MClassDef]>*/
}
var_mclassdef = var101;
{
nitc___nitc__MClassDef___add_in_hierarchy(var_mclassdef); /* Direct call model#MClassDef#add_in_hierarchy on <var_mclassdef:MClassDef>*/
}
{
((void(*)(val* self))((((long)var_98&3)?class_info[((long)var_98&3)]:var_98->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_98); /* next on <var_98:IndexedIterator[MClassDef]>*/
}
}
BREAK_label100: (void)0;
{
((void(*)(val* self))((((long)var_98&3)?class_info[((long)var_98&3)]:var_98->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_98); /* finish on <var_98:IndexedIterator[MClassDef]>*/
}
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var104 = var_nmodule->attrs[COLOR_nitc__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var104 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1062);
fatal_exit(1);
}
var102 = var104;
RET_LABEL103:(void)0;
}
}
var_105 = var102;
{
var106 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_105);
}
var_107 = var106;
for(;;) {
{
var108 = ((short int(*)(val* self))((((long)var_107&3)?class_info[((long)var_107&3)]:var_107->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_107); /* is_ok on <var_107:Iterator[AClassdef]>*/
}
if (var108){
} else {
goto BREAK_label109;
}
{
var110 = ((val*(*)(val* self))((((long)var_107&3)?class_info[((long)var_107&3)]:var_107->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_107); /* item on <var_107:Iterator[AClassdef]>*/
}
var_nclassdef111 = var110;
{
nitc__modelize_class___ModelBuilder___check_supertypes(self, var_nmodule, var_nclassdef111); /* Direct call modelize_class#ModelBuilder#check_supertypes on <self:ModelBuilder>*/
}
{
((void(*)(val* self))((((long)var_107&3)?class_info[((long)var_107&3)]:var_107->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_107); /* next on <var_107:Iterator[AClassdef]>*/
}
}
BREAK_label109: (void)0;
{
((void(*)(val* self))((((long)var_107&3)?class_info[((long)var_107&3)]:var_107->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_107); /* finish on <var_107:Iterator[AClassdef]>*/
}
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var114 = var_nmodule->attrs[COLOR_nitc__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var114 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1062);
fatal_exit(1);
}
var112 = var114;
RET_LABEL113:(void)0;
}
}
var_115 = var112;
{
var116 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_115);
}
var_117 = var116;
for(;;) {
{
var118 = ((short int(*)(val* self))((((long)var_117&3)?class_info[((long)var_117&3)]:var_117->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_117); /* is_ok on <var_117:Iterator[AClassdef]>*/
}
if (var118){
} else {
goto BREAK_label119;
}
{
var120 = ((val*(*)(val* self))((((long)var_117&3)?class_info[((long)var_117&3)]:var_117->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_117); /* item on <var_117:Iterator[AClassdef]>*/
}
var_nclassdef121 = var120;
/* <var_nclassdef121:AClassdef> isa AStdClassdef */
cltype123 = type_nitc__AStdClassdef.color;
idtype124 = type_nitc__AStdClassdef.id;
if(cltype123 >= var_nclassdef121->type->table_size) {
var122 = 0;
} else {
var122 = var_nclassdef121->type->type_table[cltype123] == idtype124;
}
if (var122){
{
{ /* Inline modelize_class#AClassdef#mclassdef (var_nclassdef121) on <var_nclassdef121:AClassdef(AStdClassdef)> */
var127 = var_nclassdef121->attrs[COLOR_nitc__modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_nclassdef121:AClassdef(AStdClassdef)> */
var125 = var127;
RET_LABEL126:(void)0;
}
}
var_mclassdef128 = var125;
{
{ /* Inline parser_nodes#AStdClassdef#n_formaldefs (var_nclassdef121) on <var_nclassdef121:AClassdef(AStdClassdef)> */
var131 = var_nclassdef121->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_formaldefs].val; /* _n_formaldefs on <var_nclassdef121:AClassdef(AStdClassdef)> */
if (unlikely(var131 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_formaldefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1173);
fatal_exit(1);
}
var129 = var131;
RET_LABEL130:(void)0;
}
}
var_132 = var129;
{
var133 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_132);
}
var_134 = var133;
for(;;) {
{
var135 = ((short int(*)(val* self))((((long)var_134&3)?class_info[((long)var_134&3)]:var_134->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_134); /* is_ok on <var_134:Iterator[AFormaldef]>*/
}
if (var135){
} else {
goto BREAK_label136;
}
{
var137 = ((val*(*)(val* self))((((long)var_134&3)?class_info[((long)var_134&3)]:var_134->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_134); /* item on <var_134:Iterator[AFormaldef]>*/
}
var_nfd = var137;
{
{ /* Inline parser_nodes#AFormaldef#n_type (var_nfd) on <var_nfd:AFormaldef> */
var140 = var_nfd->attrs[COLOR_nitc__parser_nodes__AFormaldef___n_type].val; /* _n_type on <var_nfd:AFormaldef> */
var138 = var140;
RET_LABEL139:(void)0;
}
}
var_nfdt = var138;
if (var_nfdt == NULL) {
var142 = 0; /* is null */
} else {
var142 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nfdt,((val*)NULL)) on <var_nfdt:nullable AType> */
var_other25 = ((val*)NULL);
{
var145 = ((short int(*)(val* self, val* p0))(var_nfdt->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nfdt, var_other25); /* == on <var_nfdt:nullable AType(AType)>*/
}
var146 = !var145;
var143 = var146;
goto RET_LABEL144;
RET_LABEL144:(void)0;
}
var142 = var143;
}
var_147 = var142;
if (var142){
{
{ /* Inline modelbuilder_base#AType#mtype (var_nfdt) on <var_nfdt:nullable AType(AType)> */
var150 = var_nfdt->attrs[COLOR_nitc__modelbuilder_base__AType___mtype].val; /* _mtype on <var_nfdt:nullable AType(AType)> */
var148 = var150;
RET_LABEL149:(void)0;
}
}
if (var148 == NULL) {
var151 = 0; /* is null */
} else {
var151 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var148,((val*)NULL)) on <var148:nullable MType> */
var_other25 = ((val*)NULL);
{
var154 = ((short int(*)(val* self, val* p0))(var148->class->vft[COLOR_core__kernel__Object___61d_61d]))(var148, var_other25); /* == on <var148:nullable MType(MType)>*/
}
var155 = !var154;
var152 = var155;
goto RET_LABEL153;
RET_LABEL153:(void)0;
}
var151 = var152;
}
var141 = var151;
} else {
var141 = var_147;
}
if (var141){
{
var156 = nitc___nitc__ModelBuilder___resolve_mtype(self, var_mmodule, var_mclassdef128, var_nfdt);
}
var_bound = var156;
if (var_bound == NULL) {
var157 = 1; /* is null */
} else {
var157 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_bound,((val*)NULL)) on <var_bound:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_bound,var_other) on <var_bound:nullable MType(MType)> */
var162 = var_bound == var_other;
var160 = var162;
goto RET_LABEL161;
RET_LABEL161:(void)0;
}
}
var158 = var160;
goto RET_LABEL159;
RET_LABEL159:(void)0;
}
var157 = var158;
}
if (var157){
goto RET_LABEL;
} else {
}
} else {
}
{
((void(*)(val* self))((((long)var_134&3)?class_info[((long)var_134&3)]:var_134->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_134); /* next on <var_134:Iterator[AFormaldef]>*/
}
}
BREAK_label136: (void)0;
{
((void(*)(val* self))((((long)var_134&3)?class_info[((long)var_134&3)]:var_134->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_134); /* finish on <var_134:Iterator[AFormaldef]>*/
}
{
var163 = nitc___nitc__AStdClassdef___n_superclasses(var_nclassdef121);
}
var_164 = var163;
{
var165 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_164);
}
var_166 = var165;
for(;;) {
{
var167 = ((short int(*)(val* self))((((long)var_166&3)?class_info[((long)var_166&3)]:var_166->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_166); /* is_ok on <var_166:IndexedIterator[ASuperPropdef]>*/
}
if (var167){
} else {
goto BREAK_label168;
}
{
var169 = ((val*(*)(val* self))((((long)var_166&3)?class_info[((long)var_166&3)]:var_166->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_166); /* item on <var_166:IndexedIterator[ASuperPropdef]>*/
}
var_nsc = var169;
{
{ /* Inline parser_nodes#ASuperPropdef#n_type (var_nsc) on <var_nsc:ASuperPropdef> */
var172 = var_nsc->attrs[COLOR_nitc__parser_nodes__ASuperPropdef___n_type].val; /* _n_type on <var_nsc:ASuperPropdef> */
if (unlikely(var172 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1369);
fatal_exit(1);
}
var170 = var172;
RET_LABEL171:(void)0;
}
}
var_ntype = var170;
{
{ /* Inline modelbuilder_base#AType#mtype (var_ntype) on <var_ntype:AType> */
var175 = var_ntype->attrs[COLOR_nitc__modelbuilder_base__AType___mtype].val; /* _mtype on <var_ntype:AType> */
var173 = var175;
RET_LABEL174:(void)0;
}
}
if (var173 == NULL) {
var176 = 0; /* is null */
} else {
var176 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var173,((val*)NULL)) on <var173:nullable MType> */
var_other25 = ((val*)NULL);
{
var179 = ((short int(*)(val* self, val* p0))(var173->class->vft[COLOR_core__kernel__Object___61d_61d]))(var173, var_other25); /* == on <var173:nullable MType(MType)>*/
}
var180 = !var179;
var177 = var180;
goto RET_LABEL178;
RET_LABEL178:(void)0;
}
var176 = var177;
}
if (var176){
{
var181 = nitc___nitc__ModelBuilder___resolve_mtype(self, var_mmodule, var_mclassdef128, var_ntype);
}
var_mtype = var181;
if (var_mtype == NULL) {
var182 = 1; /* is null */
} else {
var182 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var187 = var_mtype == var_other;
var185 = var187;
goto RET_LABEL186;
RET_LABEL186:(void)0;
}
}
var183 = var185;
goto RET_LABEL184;
RET_LABEL184:(void)0;
}
var182 = var183;
}
if (var182){
goto RET_LABEL;
} else {
}
} else {
}
{
((void(*)(val* self))((((long)var_166&3)?class_info[((long)var_166&3)]:var_166->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_166); /* next on <var_166:IndexedIterator[ASuperPropdef]>*/
}
}
BREAK_label168: (void)0;
{
((void(*)(val* self))((((long)var_166&3)?class_info[((long)var_166&3)]:var_166->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_166); /* finish on <var_166:IndexedIterator[ASuperPropdef]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_117&3)?class_info[((long)var_117&3)]:var_117->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_117); /* next on <var_117:Iterator[AClassdef]>*/
}
}
BREAK_label119: (void)0;
{
((void(*)(val* self))((((long)var_117&3)?class_info[((long)var_117&3)]:var_117->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_117); /* finish on <var_117:Iterator[AClassdef]>*/
}
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var190 = var_nmodule->attrs[COLOR_nitc__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var190 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1062);
fatal_exit(1);
}
var188 = var190;
RET_LABEL189:(void)0;
}
}
var_191 = var188;
{
var192 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_191);
}
var_193 = var192;
for(;;) {
{
var194 = ((short int(*)(val* self))((((long)var_193&3)?class_info[((long)var_193&3)]:var_193->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_193); /* is_ok on <var_193:Iterator[AClassdef]>*/
}
if (var194){
} else {
goto BREAK_label195;
}
{
var196 = ((val*(*)(val* self))((((long)var_193&3)?class_info[((long)var_193&3)]:var_193->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_193); /* item on <var_193:Iterator[AClassdef]>*/
}
var_nclassdef197 = var196;
{
{ /* Inline modelize_class#AClassdef#mclassdef (var_nclassdef197) on <var_nclassdef197:AClassdef> */
var200 = var_nclassdef197->attrs[COLOR_nitc__modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_nclassdef197:AClassdef> */
var198 = var200;
RET_LABEL199:(void)0;
}
}
var_mclassdef201 = var198;
if (var_mclassdef201 == NULL) {
var202 = 1; /* is null */
} else {
var202 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mclassdef201,((val*)NULL)) on <var_mclassdef201:nullable MClassDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mclassdef201,var_other) on <var_mclassdef201:nullable MClassDef(MClassDef)> */
var207 = var_mclassdef201 == var_other;
var205 = var207;
goto RET_LABEL206;
RET_LABEL206:(void)0;
}
}
var203 = var205;
goto RET_LABEL204;
RET_LABEL204:(void)0;
}
var202 = var203;
}
if (var202){
goto BREAK_label208;
} else {
}
var209 = NEW_core__HashMap(&type_core__HashMap__nitc__MClass__nitc__MClassType);
{
core___core__HashMap___core__kernel__Object__init(var209); /* Direct call hash_collection#HashMap#init on <var209:HashMap[MClass, MClassType]>*/
}
var_superclasses = var209;
{
{ /* Inline model#MClassDef#in_hierarchy (var_mclassdef201) on <var_mclassdef201:nullable MClassDef(MClassDef)> */
var212 = var_mclassdef201->attrs[COLOR_nitc__model__MClassDef___in_hierarchy].val; /* _in_hierarchy on <var_mclassdef201:nullable MClassDef(MClassDef)> */
var210 = var212;
RET_LABEL211:(void)0;
}
}
if (var210 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 378);
fatal_exit(1);
} else {
var213 = poset___poset__POSetElement___greaters(var210);
}
var_214 = var213;
{
var215 = ((val*(*)(val* self))((((long)var_214&3)?class_info[((long)var_214&3)]:var_214->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_214); /* iterator on <var_214:Collection[MClassDef]>*/
}
var_216 = var215;
for(;;) {
{
var217 = ((short int(*)(val* self))((((long)var_216&3)?class_info[((long)var_216&3)]:var_216->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_216); /* is_ok on <var_216:Iterator[MClassDef]>*/
}
if (var217){
} else {
goto BREAK_label218;
}
{
var219 = ((val*(*)(val* self))((((long)var_216&3)?class_info[((long)var_216&3)]:var_216->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_216); /* item on <var_216:Iterator[MClassDef]>*/
}
var_scd = var219;
{
{ /* Inline model#MClassDef#supertypes (var_scd) on <var_scd:MClassDef> */
var222 = var_scd->attrs[COLOR_nitc__model__MClassDef___supertypes].val; /* _supertypes on <var_scd:MClassDef> */
if (unlikely(var222 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supertypes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 650);
fatal_exit(1);
}
var220 = var222;
RET_LABEL221:(void)0;
}
}
var_223 = var220;
{
var224 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_223);
}
var_225 = var224;
for(;;) {
{
var226 = ((short int(*)(val* self))((((long)var_225&3)?class_info[((long)var_225&3)]:var_225->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_225); /* is_ok on <var_225:IndexedIterator[MClassType]>*/
}
if (var226){
} else {
goto BREAK_label227;
}
{
var228 = ((val*(*)(val* self))((((long)var_225&3)?class_info[((long)var_225&3)]:var_225->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_225); /* item on <var_225:IndexedIterator[MClassType]>*/
}
var_st = var228;
{
{ /* Inline model#MClassType#mclass (var_st) on <var_st:MClassType> */
var231 = var_st->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_st:MClassType> */
if (unlikely(var231 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1163);
fatal_exit(1);
}
var229 = var231;
RET_LABEL230:(void)0;
}
}
{
var232 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var_superclasses, var229);
}
var233 = !var232;
if (var233){
{
{ /* Inline model#MClassType#mclass (var_st) on <var_st:MClassType> */
var236 = var_st->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_st:MClassType> */
if (unlikely(var236 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1163);
fatal_exit(1);
}
var234 = var236;
RET_LABEL235:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_superclasses, var234, var_st); /* Direct call hash_collection#HashMap#[]= on <var_superclasses:HashMap[MClass, MClassType]>*/
}
} else {
{
{ /* Inline model#MClassType#mclass (var_st) on <var_st:MClassType> */
var239 = var_st->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_st:MClassType> */
if (unlikely(var239 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1163);
fatal_exit(1);
}
var237 = var239;
RET_LABEL238:(void)0;
}
}
{
var240 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var_superclasses, var237);
}
{
{ /* Inline kernel#Object#!= (var240,var_st) on <var240:nullable Object(MClassType)> */
var_other25 = var_st;
{
var243 = ((short int(*)(val* self, val* p0))(var240->class->vft[COLOR_core__kernel__Object___61d_61d]))(var240, var_other25); /* == on <var240:nullable Object(MClassType)>*/
}
var244 = !var243;
var241 = var244;
goto RET_LABEL242;
RET_LABEL242:(void)0;
}
}
if (var241){
{
{ /* Inline model#MClassType#mclass (var_st) on <var_st:MClassType> */
var247 = var_st->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_st:MClassType> */
if (unlikely(var247 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1163);
fatal_exit(1);
}
var245 = var247;
RET_LABEL246:(void)0;
}
}
{
var248 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var_superclasses, var245);
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef201) on <var_mclassdef201:nullable MClassDef(MClassDef)> */
var251 = var_mclassdef201->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef201:nullable MClassDef(MClassDef)> */
if (unlikely(var251 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 576);
fatal_exit(1);
}
var249 = var251;
RET_LABEL250:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var249) on <var249:MClass> */
var254 = var249->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var249:MClass> */
if (unlikely(var254 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 507);
fatal_exit(1);
}
var252 = var254;
RET_LABEL253:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef201) on <var_mclassdef201:nullable MClassDef(MClassDef)> */
var257 = var_mclassdef201->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef201:nullable MClassDef(MClassDef)> */
if (unlikely(var257 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 579);
fatal_exit(1);
}
var255 = var257;
RET_LABEL256:(void)0;
}
}
{
var258 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var248->class->vft[COLOR_nitc__model__MType__resolve_for]))(var248, var252, var255, var_mmodule, 0); /* resolve_for on <var248:nullable Object(MClassType)>*/
}
var_st1 = var258;
{
{ /* Inline model#MClassDef#mclass (var_mclassdef201) on <var_mclassdef201:nullable MClassDef(MClassDef)> */
var261 = var_mclassdef201->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef201:nullable MClassDef(MClassDef)> */
if (unlikely(var261 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 576);
fatal_exit(1);
}
var259 = var261;
RET_LABEL260:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var259) on <var259:MClass> */
var264 = var259->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var259:MClass> */
if (unlikely(var264 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 507);
fatal_exit(1);
}
var262 = var264;
RET_LABEL263:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef201) on <var_mclassdef201:nullable MClassDef(MClassDef)> */
var267 = var_mclassdef201->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef201:nullable MClassDef(MClassDef)> */
if (unlikely(var267 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 579);
fatal_exit(1);
}
var265 = var267;
RET_LABEL266:(void)0;
}
}
{
var268 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_st->class->vft[COLOR_nitc__model__MType__resolve_for]))(var_st, var262, var265, var_mmodule, 0); /* resolve_for on <var_st:MClassType>*/
}
var_st2 = var268;
{
{ /* Inline kernel#Object#!= (var_st1,var_st2) on <var_st1:MClassType> */
var_other25 = var_st2;
{
var271 = ((short int(*)(val* self, val* p0))(var_st1->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_st1, var_other25); /* == on <var_st1:MClassType>*/
}
var272 = !var271;
var269 = var272;
goto RET_LABEL270;
RET_LABEL270:(void)0;
}
}
if (var269){
if (unlikely(varonce==NULL)) {
var273 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce274!=NULL)) {
var275 = varonce274;
} else {
var276 = "Error: incompatible ancestors for `";
var277 = core__flat___NativeString___to_s_full(var276, 35l, 35l);
var275 = var277;
varonce274 = var275;
}
((struct instance_core__NativeArray*)var273)->values[0]=var275;
if (likely(varonce278!=NULL)) {
var279 = varonce278;
} else {
var280 = "`; conflict: `";
var281 = core__flat___NativeString___to_s_full(var280, 14l, 14l);
var279 = var281;
varonce278 = var279;
}
((struct instance_core__NativeArray*)var273)->values[2]=var279;
if (likely(varonce282!=NULL)) {
var283 = varonce282;
} else {
var284 = "` and `";
var285 = core__flat___NativeString___to_s_full(var284, 7l, 7l);
var283 = var285;
varonce282 = var283;
}
((struct instance_core__NativeArray*)var273)->values[4]=var283;
if (likely(varonce286!=NULL)) {
var287 = varonce286;
} else {
var288 = "`";
var289 = core__flat___NativeString___to_s_full(var288, 1l, 1l);
var287 = var289;
varonce286 = var287;
}
((struct instance_core__NativeArray*)var273)->values[6]=var287;
} else {
var273 = varonce;
varonce = NULL;
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef201) on <var_mclassdef201:nullable MClassDef(MClassDef)> */
var292 = var_mclassdef201->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef201:nullable MClassDef(MClassDef)> */
if (unlikely(var292 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 576);
fatal_exit(1);
}
var290 = var292;
RET_LABEL291:(void)0;
}
}
{
var293 = ((val*(*)(val* self))(var290->class->vft[COLOR_core__abstract_text__Object__to_s]))(var290); /* to_s on <var290:MClass>*/
}
((struct instance_core__NativeArray*)var273)->values[1]=var293;
{
var294 = ((val*(*)(val* self))(var_st1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_st1); /* to_s on <var_st1:MClassType>*/
}
((struct instance_core__NativeArray*)var273)->values[3]=var294;
{
var295 = ((val*(*)(val* self))(var_st2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_st2); /* to_s on <var_st2:MClassType>*/
}
((struct instance_core__NativeArray*)var273)->values[5]=var295;
{
var296 = ((val*(*)(val* self))(var273->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var273); /* native_to_s on <var273:NativeArray[String]>*/
}
varonce = var273;
{
nitc___nitc__ModelBuilder___error(self, var_nclassdef197, var296); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
} else {
}
}
{
((void(*)(val* self))((((long)var_225&3)?class_info[((long)var_225&3)]:var_225->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_225); /* next on <var_225:IndexedIterator[MClassType]>*/
}
}
BREAK_label227: (void)0;
{
((void(*)(val* self))((((long)var_225&3)?class_info[((long)var_225&3)]:var_225->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_225); /* finish on <var_225:IndexedIterator[MClassType]>*/
}
{
((void(*)(val* self))((((long)var_216&3)?class_info[((long)var_216&3)]:var_216->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_216); /* next on <var_216:Iterator[MClassDef]>*/
}
}
BREAK_label218: (void)0;
{
((void(*)(val* self))((((long)var_216&3)?class_info[((long)var_216&3)]:var_216->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_216); /* finish on <var_216:Iterator[MClassDef]>*/
}
BREAK_label208: (void)0;
{
((void(*)(val* self))((((long)var_193&3)?class_info[((long)var_193&3)]:var_193->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_193); /* next on <var_193:Iterator[AClassdef]>*/
}
}
BREAK_label195: (void)0;
{
((void(*)(val* self))((((long)var_193&3)?class_info[((long)var_193&3)]:var_193->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_193); /* finish on <var_193:Iterator[AClassdef]>*/
}
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var299 = var_nmodule->attrs[COLOR_nitc__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var299 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1062);
fatal_exit(1);
}
var297 = var299;
RET_LABEL298:(void)0;
}
}
var_300 = var297;
{
var301 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_300);
}
var_302 = var301;
for(;;) {
{
var303 = ((short int(*)(val* self))((((long)var_302&3)?class_info[((long)var_302&3)]:var_302->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_302); /* is_ok on <var_302:Iterator[AClassdef]>*/
}
if (var303){
} else {
goto BREAK_label304;
}
{
var305 = ((val*(*)(val* self))((((long)var_302&3)?class_info[((long)var_302&3)]:var_302->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_302); /* item on <var_302:Iterator[AClassdef]>*/
}
var_nclassdef306 = var305;
/* <var_nclassdef306:AClassdef> isa AStdClassdef */
cltype309 = type_nitc__AStdClassdef.color;
idtype310 = type_nitc__AStdClassdef.id;
if(cltype309 >= var_nclassdef306->type->table_size) {
var308 = 0;
} else {
var308 = var_nclassdef306->type->type_table[cltype309] == idtype310;
}
var311 = !var308;
var_312 = var311;
if (var311){
var307 = var_312;
} else {
{
{ /* Inline modelbuilder_base#ANode#is_broken (var_nclassdef306) on <var_nclassdef306:AClassdef(AStdClassdef)> */
var315 = var_nclassdef306->attrs[COLOR_nitc__modelbuilder_base__ANode___is_broken].s; /* _is_broken on <var_nclassdef306:AClassdef(AStdClassdef)> */
var313 = var315;
RET_LABEL314:(void)0;
}
}
var307 = var313;
}
if (var307){
goto BREAK_label316;
} else {
}
{
{ /* Inline modelize_class#AClassdef#mclassdef (var_nclassdef306) on <var_nclassdef306:AClassdef(AStdClassdef)> */
var319 = var_nclassdef306->attrs[COLOR_nitc__modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_nclassdef306:AClassdef(AStdClassdef)> */
var317 = var319;
RET_LABEL318:(void)0;
}
}
var_mclassdef320 = var317;
if (var_mclassdef320 == NULL) {
var321 = 1; /* is null */
} else {
var321 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mclassdef320,((val*)NULL)) on <var_mclassdef320:nullable MClassDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mclassdef320,var_other) on <var_mclassdef320:nullable MClassDef(MClassDef)> */
var326 = var_mclassdef320 == var_other;
var324 = var326;
goto RET_LABEL325;
RET_LABEL325:(void)0;
}
}
var322 = var324;
goto RET_LABEL323;
RET_LABEL323:(void)0;
}
var321 = var322;
}
if (var321){
goto BREAK_label316;
} else {
}
var327 = NEW_core__Array(&type_core__Array__nitc__MClass);
{
core___core__Array___core__kernel__Object__init(var327); /* Direct call array#Array#init on <var327:Array[MClass]>*/
}
var_parents = var327;
{
{ /* Inline model#MClassDef#in_hierarchy (var_mclassdef320) on <var_mclassdef320:nullable MClassDef(MClassDef)> */
var330 = var_mclassdef320->attrs[COLOR_nitc__model__MClassDef___in_hierarchy].val; /* _in_hierarchy on <var_mclassdef320:nullable MClassDef(MClassDef)> */
var328 = var330;
RET_LABEL329:(void)0;
}
}
if (var328 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 404);
fatal_exit(1);
} else {
var331 = poset___poset__POSetElement___direct_greaters(var328);
}
var_332 = var331;
{
var333 = ((val*(*)(val* self))((((long)var_332&3)?class_info[((long)var_332&3)]:var_332->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_332); /* iterator on <var_332:Collection[MClassDef]>*/
}
var_334 = var333;
for(;;) {
{
var335 = ((short int(*)(val* self))((((long)var_334&3)?class_info[((long)var_334&3)]:var_334->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_334); /* is_ok on <var_334:Iterator[MClassDef]>*/
}
if (var335){
} else {
goto BREAK_label336;
}
{
var337 = ((val*(*)(val* self))((((long)var_334&3)?class_info[((long)var_334&3)]:var_334->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_334); /* item on <var_334:Iterator[MClassDef]>*/
}
var_sup = var337;
{
{ /* Inline model#MClassDef#mclass (var_sup) on <var_sup:MClassDef> */
var340 = var_sup->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_sup:MClassDef> */
if (unlikely(var340 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 576);
fatal_exit(1);
}
var338 = var340;
RET_LABEL339:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_parents, var338); /* Direct call array#Array#add on <var_parents:Array[MClass]>*/
}
{
((void(*)(val* self))((((long)var_334&3)?class_info[((long)var_334&3)]:var_334->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_334); /* next on <var_334:Iterator[MClassDef]>*/
}
}
BREAK_label336: (void)0;
{
((void(*)(val* self))((((long)var_334&3)?class_info[((long)var_334&3)]:var_334->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_334); /* finish on <var_334:Iterator[MClassDef]>*/
}
var341 = NEW_core__ArrayMap(&type_core__ArrayMap__nitc__MClass__nitc__AType);
{
{ /* Inline kernel#Object#init (var341) on <var341:ArrayMap[MClass, AType]> */
RET_LABEL342:(void)0;
}
}
var_seen_parents = var341;
if (likely(varonce343!=NULL)) {
var344 = varonce343;
} else {
var345 = "Object";
var346 = core__flat___NativeString___to_s_full(var345, 6l, 6l);
var344 = var346;
varonce343 = var344;
}
{
var347 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(self, var_nmodule, var_mmodule, var344);
}
var_objectclass = var347;
{
var348 = nitc___nitc__AStdClassdef___n_superclasses(var_nclassdef306);
}
var_349 = var348;
{
var350 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_349);
}
var_351 = var350;
for(;;) {
{
var352 = ((short int(*)(val* self))((((long)var_351&3)?class_info[((long)var_351&3)]:var_351->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_351); /* is_ok on <var_351:IndexedIterator[ASuperPropdef]>*/
}
if (var352){
} else {
goto BREAK_label353;
}
{
var354 = ((val*(*)(val* self))((((long)var_351&3)?class_info[((long)var_351&3)]:var_351->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_351); /* item on <var_351:IndexedIterator[ASuperPropdef]>*/
}
var_nsc355 = var354;
{
{ /* Inline parser_nodes#ASuperPropdef#n_type (var_nsc355) on <var_nsc355:ASuperPropdef> */
var358 = var_nsc355->attrs[COLOR_nitc__parser_nodes__ASuperPropdef___n_type].val; /* _n_type on <var_nsc355:ASuperPropdef> */
if (unlikely(var358 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1369);
fatal_exit(1);
}
var356 = var358;
RET_LABEL357:(void)0;
}
}
var_ntype359 = var356;
{
{ /* Inline modelbuilder_base#AType#mtype (var_ntype359) on <var_ntype359:AType> */
var362 = var_ntype359->attrs[COLOR_nitc__modelbuilder_base__AType___mtype].val; /* _mtype on <var_ntype359:AType> */
var360 = var362;
RET_LABEL361:(void)0;
}
}
var_mtype363 = var360;
if (var_mtype363 == NULL) {
var364 = 1; /* is null */
} else {
var364 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype363,((val*)NULL)) on <var_mtype363:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype363,var_other) on <var_mtype363:nullable MType(MType)> */
var369 = var_mtype363 == var_other;
var367 = var369;
goto RET_LABEL368;
RET_LABEL368:(void)0;
}
}
var365 = var367;
goto RET_LABEL366;
RET_LABEL366:(void)0;
}
var364 = var365;
}
if (var364){
goto BREAK_label370;
} else {
}
/* <var_mtype363:nullable MType(MType)> isa MClassType */
cltype372 = type_nitc__MClassType.color;
idtype373 = type_nitc__MClassType.id;
if(cltype372 >= var_mtype363->type->table_size) {
var371 = 0;
} else {
var371 = var_mtype363->type->type_table[cltype372] == idtype373;
}
if (unlikely(!var371)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 419);
fatal_exit(1);
}
{
{ /* Inline model#MClassType#mclass (var_mtype363) on <var_mtype363:nullable MType(MClassType)> */
var376 = var_mtype363->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype363:nullable MType(MClassType)> */
if (unlikely(var376 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1163);
fatal_exit(1);
}
var374 = var376;
RET_LABEL375:(void)0;
}
}
var_sc = var374;
{
var378 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var_parents, var_sc);
}
var379 = !var378;
var_380 = var379;
if (var379){
var377 = var_380;
} else {
{
{ /* Inline kernel#Object#== (var_sc,var_objectclass) on <var_sc:MClass> */
var_other = var_objectclass;
{
{ /* Inline kernel#Object#is_same_instance (var_sc,var_other) on <var_sc:MClass> */
var385 = var_sc == var_other;
var383 = var385;
goto RET_LABEL384;
RET_LABEL384:(void)0;
}
}
var381 = var383;
goto RET_LABEL382;
RET_LABEL382:(void)0;
}
}
var377 = var381;
}
if (var377){
{
{ /* Inline parser_nodes#ANode#location (var_ntype359) on <var_ntype359:AType> */
var389 = var_ntype359->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_ntype359:AType> */
if (unlikely(var389 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 24);
fatal_exit(1);
}
var387 = var389;
RET_LABEL388:(void)0;
}
}
{
{ /* Inline location#Location#file (var387) on <var387:Location> */
var392 = var387->attrs[COLOR_nitc__location__Location___file].val; /* _file on <var387:Location> */
var390 = var392;
RET_LABEL391:(void)0;
}
}
if (var390 == NULL) {
var393 = 0; /* is null */
} else {
var393 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var390,((val*)NULL)) on <var390:nullable SourceFile> */
var_other25 = ((val*)NULL);
{
var396 = ((short int(*)(val* self, val* p0))(var390->class->vft[COLOR_core__kernel__Object___61d_61d]))(var390, var_other25); /* == on <var390:nullable SourceFile(SourceFile)>*/
}
var397 = !var396;
var394 = var397;
goto RET_LABEL395;
RET_LABEL395:(void)0;
}
var393 = var394;
}
var_398 = var393;
if (var393){
{
{ /* Inline parser_nodes#ANode#location (var_ntype359) on <var_ntype359:AType> */
var401 = var_ntype359->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_ntype359:AType> */
if (unlikely(var401 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 24);
fatal_exit(1);
}
var399 = var401;
RET_LABEL400:(void)0;
}
}
{
{ /* Inline location#Location#file (var399) on <var399:Location> */
var404 = var399->attrs[COLOR_nitc__location__Location___file].val; /* _file on <var399:Location> */
var402 = var404;
RET_LABEL403:(void)0;
}
}
if (var402 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 423);
fatal_exit(1);
} else {
{ /* Inline location#SourceFile#filename (var402) on <var402:nullable SourceFile> */
if (unlikely(var402 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 22);
fatal_exit(1);
}
var407 = var402->attrs[COLOR_nitc__location__SourceFile___filename].val; /* _filename on <var402:nullable SourceFile> */
if (unlikely(var407 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 22);
fatal_exit(1);
}
var405 = var407;
RET_LABEL406:(void)0;
}
}
{
var408 = ((short int(*)(val* self))(var405->class->vft[COLOR_core__abstract_text__Text__is_empty]))(var405); /* is_empty on <var405:String>*/
}
var409 = !var408;
var386 = var409;
} else {
var386 = var_398;
}
if (var386){
if (likely(varonce410!=NULL)) {
var411 = varonce410;
} else {
var412 = "useless-superclass";
var413 = core__flat___NativeString___to_s_full(var412, 18l, 18l);
var411 = var413;
varonce410 = var411;
}
if (unlikely(varonce414==NULL)) {
var415 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce416!=NULL)) {
var417 = varonce416;
} else {
var418 = "Warning: superfluous super-class `";
var419 = core__flat___NativeString___to_s_full(var418, 34l, 34l);
var417 = var419;
varonce416 = var417;
}
((struct instance_core__NativeArray*)var415)->values[0]=var417;
if (likely(varonce420!=NULL)) {
var421 = varonce420;
} else {
var422 = "` in class `";
var423 = core__flat___NativeString___to_s_full(var422, 12l, 12l);
var421 = var423;
varonce420 = var421;
}
((struct instance_core__NativeArray*)var415)->values[2]=var421;
if (likely(varonce424!=NULL)) {
var425 = varonce424;
} else {
var426 = "`.";
var427 = core__flat___NativeString___to_s_full(var426, 2l, 2l);
var425 = var427;
varonce424 = var425;
}
((struct instance_core__NativeArray*)var415)->values[4]=var425;
} else {
var415 = varonce414;
varonce414 = NULL;
}
{
var428 = ((val*(*)(val* self))(var_mtype363->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype363); /* to_s on <var_mtype363:nullable MType(MClassType)>*/
}
((struct instance_core__NativeArray*)var415)->values[1]=var428;
{
{ /* Inline model#MClassDef#mclass (var_mclassdef320) on <var_mclassdef320:nullable MClassDef(MClassDef)> */
var431 = var_mclassdef320->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef320:nullable MClassDef(MClassDef)> */
if (unlikely(var431 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 576);
fatal_exit(1);
}
var429 = var431;
RET_LABEL430:(void)0;
}
}
{
var432 = ((val*(*)(val* self))(var429->class->vft[COLOR_core__abstract_text__Object__to_s]))(var429); /* to_s on <var429:MClass>*/
}
((struct instance_core__NativeArray*)var415)->values[3]=var432;
{
var433 = ((val*(*)(val* self))(var415->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var415); /* native_to_s on <var415:NativeArray[String]>*/
}
varonce414 = var415;
{
nitc___nitc__ModelBuilder___warning(self, var_ntype359, var411, var433); /* Direct call modelbuilder_base#ModelBuilder#warning on <self:ModelBuilder>*/
}
} else {
}
} else {
{
var434 = core___core__CoupleMap___MapRead__has_key(var_seen_parents, var_sc);
}
var435 = !var434;
if (var435){
{
core___core__ArrayMap___core__abstract_collection__Map___91d_93d_61d(var_seen_parents, var_sc, var_ntype359); /* Direct call array#ArrayMap#[]= on <var_seen_parents:ArrayMap[MClass, AType]>*/
}
} else {
if (likely(varonce436!=NULL)) {
var437 = varonce436;
} else {
var438 = "useless-superclass";
var439 = core__flat___NativeString___to_s_full(var438, 18l, 18l);
var437 = var439;
varonce436 = var437;
}
if (unlikely(varonce440==NULL)) {
var441 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce442!=NULL)) {
var443 = varonce442;
} else {
var444 = "Warning: duplicated super-class `";
var445 = core__flat___NativeString___to_s_full(var444, 33l, 33l);
var443 = var445;
varonce442 = var443;
}
((struct instance_core__NativeArray*)var441)->values[0]=var443;
if (likely(varonce446!=NULL)) {
var447 = varonce446;
} else {
var448 = "` in class `";
var449 = core__flat___NativeString___to_s_full(var448, 12l, 12l);
var447 = var449;
varonce446 = var447;
}
((struct instance_core__NativeArray*)var441)->values[2]=var447;
if (likely(varonce450!=NULL)) {
var451 = varonce450;
} else {
var452 = "`.";
var453 = core__flat___NativeString___to_s_full(var452, 2l, 2l);
var451 = var453;
varonce450 = var451;
}
((struct instance_core__NativeArray*)var441)->values[4]=var451;
} else {
var441 = varonce440;
varonce440 = NULL;
}
{
var454 = ((val*(*)(val* self))(var_mtype363->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype363); /* to_s on <var_mtype363:nullable MType(MClassType)>*/
}
((struct instance_core__NativeArray*)var441)->values[1]=var454;
{
{ /* Inline model#MClassDef#mclass (var_mclassdef320) on <var_mclassdef320:nullable MClassDef(MClassDef)> */
var457 = var_mclassdef320->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef320:nullable MClassDef(MClassDef)> */
if (unlikely(var457 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 576);
fatal_exit(1);
}
var455 = var457;
RET_LABEL456:(void)0;
}
}
{
var458 = ((val*(*)(val* self))(var455->class->vft[COLOR_core__abstract_text__Object__to_s]))(var455); /* to_s on <var455:MClass>*/
}
((struct instance_core__NativeArray*)var441)->values[3]=var458;
{
var459 = ((val*(*)(val* self))(var441->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var441); /* native_to_s on <var441:NativeArray[String]>*/
}
varonce440 = var441;
{
nitc___nitc__ModelBuilder___warning(self, var_ntype359, var437, var459); /* Direct call modelbuilder_base#ModelBuilder#warning on <self:ModelBuilder>*/
}
}
}
BREAK_label370: (void)0;
{
((void(*)(val* self))((((long)var_351&3)?class_info[((long)var_351&3)]:var_351->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_351); /* next on <var_351:IndexedIterator[ASuperPropdef]>*/
}
}
BREAK_label353: (void)0;
{
((void(*)(val* self))((((long)var_351&3)?class_info[((long)var_351&3)]:var_351->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_351); /* finish on <var_351:IndexedIterator[ASuperPropdef]>*/
}
BREAK_label316: (void)0;
{
((void(*)(val* self))((((long)var_302&3)?class_info[((long)var_302&3)]:var_302->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_302); /* next on <var_302:Iterator[AClassdef]>*/
}
}
BREAK_label304: (void)0;
{
((void(*)(val* self))((((long)var_302&3)?class_info[((long)var_302&3)]:var_302->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_302); /* finish on <var_302:Iterator[AClassdef]>*/
}
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#mclassdef2nclassdef for (self: ModelBuilder): HashMap[MClassDef, AClassdef] */
val* nitc__modelize_class___ModelBuilder___mclassdef2nclassdef(val* self) {
val* var /* : HashMap[MClassDef, AClassdef] */;
val* var1 /* : HashMap[MClassDef, AClassdef] */;
var1 = self->attrs[COLOR_nitc__modelize_class__ModelBuilder___mclassdef2nclassdef].val; /* _mclassdef2nclassdef on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 435);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AModule#build_classes_is_done for (self: AModule): Bool */
short int nitc__modelize_class___AModule___build_classes_is_done(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__modelize_class__AModule___build_classes_is_done].s; /* _build_classes_is_done on <self:AModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AModule#build_classes_is_done= for (self: AModule, Bool) */
void nitc__modelize_class___AModule___build_classes_is_done_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__modelize_class__AModule___build_classes_is_done].s = p0; /* _build_classes_is_done on <self:AModule> */
RET_LABEL:;
}
/* method modelize_class#AModule#mclass2nclassdef for (self: AModule): Map[MClass, AClassdef] */
val* nitc__modelize_class___AModule___mclass2nclassdef(val* self) {
val* var /* : Map[MClass, AClassdef] */;
val* var1 /* : Map[MClass, AClassdef] */;
var1 = self->attrs[COLOR_nitc__modelize_class__AModule___mclass2nclassdef].val; /* _mclass2nclassdef on <self:AModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 450);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AClassdef#mclass for (self: AClassdef): nullable MClass */
val* nitc__modelize_class___AClassdef___mclass(val* self) {
val* var /* : nullable MClass */;
val* var1 /* : nullable MClass */;
var1 = self->attrs[COLOR_nitc__modelize_class__AClassdef___mclass].val; /* _mclass on <self:AClassdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AClassdef#mclass= for (self: AClassdef, nullable MClass) */
void nitc__modelize_class___AClassdef___mclass_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__modelize_class__AClassdef___mclass].val = p0; /* _mclass on <self:AClassdef> */
RET_LABEL:;
}
/* method modelize_class#AClassdef#mclassdef for (self: AClassdef): nullable MClassDef */
val* nitc__modelize_class___AClassdef___mclassdef(val* self) {
val* var /* : nullable MClassDef */;
val* var1 /* : nullable MClassDef */;
var1 = self->attrs[COLOR_nitc__modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <self:AClassdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AClassdef#mclassdef= for (self: AClassdef, nullable MClassDef) */
void nitc__modelize_class___AClassdef___mclassdef_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__modelize_class__AClassdef___mclassdef].val = p0; /* _mclassdef on <self:AClassdef> */
RET_LABEL:;
}
/* method modelize_class#AClassdef#all_defs for (self: AClassdef): nullable Array[AClassdef] */
val* nitc__modelize_class___AClassdef___all_defs(val* self) {
val* var /* : nullable Array[AClassdef] */;
val* var1 /* : nullable Array[AClassdef] */;
var1 = self->attrs[COLOR_nitc__modelize_class__AClassdef___all_defs].val; /* _all_defs on <self:AClassdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AClassdef#all_defs= for (self: AClassdef, nullable Array[AClassdef]) */
void nitc__modelize_class___AClassdef___all_defs_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__modelize_class__AClassdef___all_defs].val = p0; /* _all_defs on <self:AClassdef> */
RET_LABEL:;
}
/* method modelize_class#AConcreteClasskind#mkind for (self: AConcreteClasskind): MClassKind */
val* nitc__modelize_class___AConcreteClasskind___AClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : Sys */;
val* var2 /* : MClassKind */;
var1 = glob_sys;
{
var2 = nitc__model___core__Sys___concrete_kind(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_class#AAbstractClasskind#mkind for (self: AAbstractClasskind): MClassKind */
val* nitc__modelize_class___AAbstractClasskind___AClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : Sys */;
val* var2 /* : MClassKind */;
var1 = glob_sys;
{
var2 = nitc__model___core__Sys___abstract_kind(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_class#AInterfaceClasskind#mkind for (self: AInterfaceClasskind): MClassKind */
val* nitc__modelize_class___AInterfaceClasskind___AClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : Sys */;
val* var2 /* : MClassKind */;
var1 = glob_sys;
{
var2 = nitc__model___core__Sys___interface_kind(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_class#AEnumClasskind#mkind for (self: AEnumClasskind): MClassKind */
val* nitc__modelize_class___AEnumClasskind___AClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : Sys */;
val* var2 /* : MClassKind */;
var1 = glob_sys;
{
var2 = nitc__model___core__Sys___enum_kind(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_class#AExternClasskind#mkind for (self: AExternClasskind): MClassKind */
val* nitc__modelize_class___AExternClasskind___AClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : Sys */;
val* var2 /* : MClassKind */;
var1 = glob_sys;
{
var2 = nitc__model___core__Sys___extern_kind(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_class#AFormaldef#bound= for (self: AFormaldef, nullable MType) */
void nitc__modelize_class___AFormaldef___bound_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__modelize_class__AFormaldef___bound].val = p0; /* _bound on <self:AFormaldef> */
RET_LABEL:;
}
