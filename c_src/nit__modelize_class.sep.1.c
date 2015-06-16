#include "nit__modelize_class.sep.0.h"
/* method modelize_class#ToolContext#modelize_class_phase for (self: ToolContext): Phase */
val* nit__modelize_class___ToolContext___modelize_class_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nit__modelize_class__ToolContext___modelize_class_phase].val; /* _modelize_class_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelize_class_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 23);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#ModelizeClassPhase#process_nmodule for (self: ModelizeClassPhase, AModule) */
void nit__modelize_class___nit__modelize_class__ModelizeClassPhase___nit__phase__Phase__process_nmodule(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
val* var /* : ToolContext */;
val* var2 /* : ToolContext */;
val* var3 /* : ModelBuilder */;
var_nmodule = p0;
{
{ /* Inline phase#Phase#toolcontext (self) on <self:ModelizeClassPhase> */
var2 = self->attrs[COLOR_nit__phase__Phase___toolcontext].val; /* _toolcontext on <self:ModelizeClassPhase> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 200);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit__modelbuilder_base___ToolContext___modelbuilder(var);
}
{
nit__modelize_class___ModelBuilder___build_classes(var3, var_nmodule); /* Direct call modelize_class#ModelBuilder#build_classes on <var3:ModelBuilder>*/
}
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#build_a_mclass for (self: ModelBuilder, AModule, AClassdef) */
void nit__modelize_class___ModelBuilder___build_a_mclass(val* self, val* p0, val* p1) {
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
val* var5 /* : nullable TClassid */;
val* var7 /* : nullable TClassid */;
val* var8 /* : String */;
val* var_name /* var name: String */;
val* var9 /* : AClasskind */;
val* var11 /* : AClasskind */;
val* var_nkind /* var nkind: nullable AClasskind */;
val* var12 /* : MClassKind */;
val* var_mkind /* var mkind: MClassKind */;
val* var13 /* : nullable AVisibility */;
val* var15 /* : nullable AVisibility */;
val* var_nvisibility /* var nvisibility: nullable AVisibility */;
val* var16 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: nullable MVisibility */;
val* var17 /* : ANodes[AFormaldef] */;
val* var19 /* : ANodes[AFormaldef] */;
long var20 /* : Int */;
val* var21 /* : Sys */;
val* var22 /* : MVisibility */;
short int var23 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
static val* varonce;
val* var28 /* : String */;
char* var29 /* : NativeString */;
val* var30 /* : FlatString */;
val* var31 /* : Sys */;
val* var32 /* : MVisibility */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : FlatString */;
long var_i /* var i: Int */;
long var_ /* var : Int */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name;
short int var47 /* : Bool */;
val* var48 /* : ANodes[AFormaldef] */;
val* var50 /* : ANodes[AFormaldef] */;
val* var51 /* : ANode */;
val* var_nfd /* var nfd: AFormaldef */;
val* var52 /* : TClassid */;
val* var54 /* : TClassid */;
val* var55 /* : String */;
val* var_ptname /* var ptname: String */;
short int var56 /* : Bool */;
val* var58 /* : NativeArray[String] */;
static val* varonce57;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
val* var62 /* : FlatString */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
val* var66 /* : FlatString */;
val* var67 /* : String */;
val* var68 /* : SequenceRead[Char] */;
val* var_69 /* var : SequenceRead[Char] */;
val* var70 /* : Iterator[nullable Object] */;
val* var_71 /* var : IndexedIterator[Char] */;
short int var72 /* : Bool */;
val* var73 /* : nullable Object */;
uint32_t var74 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
short int var78 /* : Bool */;
int cltype79;
int idtype80;
const char* var_class_name81;
short int var82 /* : Bool */;
short int var_83 /* var : Bool */;
short int var84 /* : Bool */;
short int var86 /* : Bool */;
int cltype87;
int idtype88;
const char* var_class_name89;
short int var90 /* : Bool */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : NativeString */;
val* var94 /* : FlatString */;
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
val* var105 /* : String */;
long var106 /* : Int */;
short int var108 /* : Bool */;
short int var109 /* : Bool */;
int cltype110;
int idtype111;
short int var_112 /* var : Bool */;
val* var113 /* : ANodes[APropdef] */;
val* var115 /* : ANodes[APropdef] */;
val* var116 /* : nullable Object */;
short int var117 /* : Bool */;
int cltype118;
int idtype119;
const char* var_class_name120;
val* var121 /* : nullable AMethid */;
val* var123 /* : nullable AMethid */;
val* var124 /* : String */;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : NativeString */;
val* var128 /* : FlatString */;
short int var129 /* : Bool */;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : NativeString */;
val* var133 /* : FlatString */;
val* var134 /* : Sys */;
val* var135 /* : MClassKind */;
val* var136 /* : Sys */;
val* var137 /* : MVisibility */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : NativeString */;
val* var141 /* : FlatString */;
val* var142 /* : Sys */;
val* var143 /* : MClassKind */;
val* var144 /* : Sys */;
val* var145 /* : MVisibility */;
val* var146 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
short int var147 /* : Bool */;
short int var148 /* : Bool */;
short int var150 /* : Bool */;
short int var152 /* : Bool */;
short int var153 /* : Bool */;
short int var154 /* : Bool */;
int cltype155;
int idtype156;
short int var_157 /* var : Bool */;
val* var158 /* : nullable TKwredef */;
val* var160 /* : nullable TKwredef */;
short int var161 /* : Bool */;
short int var162 /* : Bool */;
val* var_other164 /* var other: nullable Object */;
short int var165 /* : Bool */;
short int var166 /* : Bool */;
val* var168 /* : NativeArray[String] */;
static val* varonce167;
static val* varonce169;
val* var170 /* : String */;
char* var171 /* : NativeString */;
val* var172 /* : FlatString */;
static val* varonce173;
val* var174 /* : String */;
char* var175 /* : NativeString */;
val* var176 /* : FlatString */;
val* var177 /* : String */;
short int var178 /* : Bool */;
val* var179 /* : nullable MGroup */;
val* var181 /* : nullable MGroup */;
short int var182 /* : Bool */;
short int var183 /* : Bool */;
short int var185 /* : Bool */;
short int var186 /* : Bool */;
short int var_187 /* var : Bool */;
val* var188 /* : Sys */;
val* var189 /* : MVisibility */;
short int var190 /* : Bool */;
val* var191 /* : Model */;
val* var193 /* : Model */;
val* var194 /* : nullable Array[MClass] */;
val* var_mclasses /* var mclasses: nullable Array[MClass] */;
short int var195 /* : Bool */;
short int var196 /* : Bool */;
short int var198 /* : Bool */;
short int var199 /* : Bool */;
val* var_200 /* var : Array[MClass] */;
val* var201 /* : ArrayIterator[nullable Object] */;
val* var_202 /* var : ArrayIterator[MClass] */;
short int var203 /* : Bool */;
val* var204 /* : nullable Object */;
val* var_other205 /* var other: MClass */;
short int var206 /* : Bool */;
val* var207 /* : MModule */;
val* var209 /* : MModule */;
val* var210 /* : nullable MGroup */;
val* var212 /* : nullable MGroup */;
short int var213 /* : Bool */;
short int var214 /* : Bool */;
short int var216 /* : Bool */;
short int var217 /* : Bool */;
short int var_218 /* var : Bool */;
val* var219 /* : MModule */;
val* var221 /* : MModule */;
val* var222 /* : nullable MGroup */;
val* var224 /* : nullable MGroup */;
val* var225 /* : MProject */;
val* var227 /* : MProject */;
val* var228 /* : nullable MGroup */;
val* var230 /* : nullable MGroup */;
val* var231 /* : MProject */;
val* var233 /* : MProject */;
short int var234 /* : Bool */;
short int var236 /* : Bool */;
short int var238 /* : Bool */;
val* var239 /* : nullable MClassDef */;
short int var240 /* : Bool */;
short int var241 /* : Bool */;
short int var243 /* : Bool */;
short int var245 /* : Bool */;
static val* varonce247;
val* var248 /* : String */;
char* var249 /* : NativeString */;
val* var250 /* : FlatString */;
val* var252 /* : NativeArray[String] */;
static val* varonce251;
static val* varonce253;
val* var254 /* : String */;
char* var255 /* : NativeString */;
val* var256 /* : FlatString */;
static val* varonce257;
val* var258 /* : String */;
char* var259 /* : NativeString */;
val* var260 /* : FlatString */;
static val* varonce261;
val* var262 /* : String */;
char* var263 /* : NativeString */;
val* var264 /* : FlatString */;
static val* varonce265;
val* var266 /* : String */;
char* var267 /* : NativeString */;
val* var268 /* : FlatString */;
val* var269 /* : String */;
val* var270 /* : MModule */;
val* var272 /* : MModule */;
val* var273 /* : String */;
val* var274 /* : MClassDef */;
val* var276 /* : MClassDef */;
val* var277 /* : Location */;
val* var279 /* : Location */;
val* var280 /* : String */;
val* var281 /* : String */;
val* var283 /* : MClass */;
short int var284 /* : Bool */;
short int var285 /* : Bool */;
int cltype286;
int idtype287;
short int var_288 /* var : Bool */;
val* var289 /* : Map[MClass, AClassdef] */;
val* var291 /* : Map[MClass, AClassdef] */;
short int var292 /* : Bool */;
val* var294 /* : NativeArray[String] */;
static val* varonce293;
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
val* var307 /* : Map[MClass, AClassdef] */;
val* var309 /* : Map[MClass, AClassdef] */;
val* var310 /* : nullable Object */;
val* var311 /* : Location */;
val* var313 /* : Location */;
long var314 /* : Int */;
long var316 /* : Int */;
val* var317 /* : String */;
val* var318 /* : String */;
short int var319 /* : Bool */;
short int var320 /* : Bool */;
int cltype321;
int idtype322;
short int var_323 /* var : Bool */;
val* var324 /* : nullable TKwredef */;
val* var326 /* : nullable TKwredef */;
short int var327 /* : Bool */;
short int var328 /* : Bool */;
short int var330 /* : Bool */;
short int var332 /* : Bool */;
val* var334 /* : NativeArray[String] */;
static val* varonce333;
static val* varonce335;
val* var336 /* : String */;
char* var337 /* : NativeString */;
val* var338 /* : FlatString */;
static val* varonce339;
val* var340 /* : String */;
char* var341 /* : NativeString */;
val* var342 /* : FlatString */;
val* var343 /* : String */;
short int var344 /* : Bool */;
short int var345 /* : Bool */;
short int var347 /* : Bool */;
short int var348 /* : Bool */;
short int var_349 /* var : Bool */;
long var350 /* : Int */;
long var352 /* : Int */;
short int var353 /* : Bool */;
short int var355 /* : Bool */;
short int var356 /* : Bool */;
val* var358 /* : NativeArray[String] */;
static val* varonce357;
static val* varonce359;
val* var360 /* : String */;
char* var361 /* : NativeString */;
val* var362 /* : FlatString */;
static val* varonce363;
val* var364 /* : String */;
char* var365 /* : NativeString */;
val* var366 /* : FlatString */;
static val* varonce367;
val* var368 /* : String */;
char* var369 /* : NativeString */;
val* var370 /* : FlatString */;
static val* varonce371;
val* var372 /* : String */;
char* var373 /* : NativeString */;
val* var374 /* : FlatString */;
long var375 /* : Int */;
long var377 /* : Int */;
val* var378 /* : String */;
val* var379 /* : String */;
val* var380 /* : String */;
val* var381 /* : String */;
short int var382 /* : Bool */;
short int var383 /* : Bool */;
short int var384 /* : Bool */;
short int var385 /* : Bool */;
short int var387 /* : Bool */;
short int var388 /* : Bool */;
short int var_389 /* var : Bool */;
val* var390 /* : Sys */;
val* var391 /* : MClassKind */;
short int var392 /* : Bool */;
short int var394 /* : Bool */;
short int var395 /* : Bool */;
short int var_396 /* var : Bool */;
val* var397 /* : MClassKind */;
val* var399 /* : MClassKind */;
short int var400 /* : Bool */;
short int var402 /* : Bool */;
short int var403 /* : Bool */;
val* var405 /* : NativeArray[String] */;
static val* varonce404;
static val* varonce406;
val* var407 /* : String */;
char* var408 /* : NativeString */;
val* var409 /* : FlatString */;
static val* varonce410;
val* var411 /* : String */;
char* var412 /* : NativeString */;
val* var413 /* : FlatString */;
static val* varonce414;
val* var415 /* : String */;
char* var416 /* : NativeString */;
val* var417 /* : FlatString */;
val* var418 /* : MClassKind */;
val* var420 /* : MClassKind */;
val* var421 /* : String */;
val* var422 /* : String */;
val* var423 /* : String */;
short int var424 /* : Bool */;
short int var425 /* : Bool */;
short int var426 /* : Bool */;
short int var427 /* : Bool */;
short int var429 /* : Bool */;
short int var430 /* : Bool */;
short int var_431 /* var : Bool */;
val* var432 /* : Sys */;
val* var433 /* : MVisibility */;
short int var434 /* : Bool */;
short int var436 /* : Bool */;
short int var437 /* : Bool */;
short int var_438 /* var : Bool */;
val* var439 /* : MVisibility */;
val* var441 /* : MVisibility */;
short int var442 /* : Bool */;
short int var444 /* : Bool */;
short int var445 /* : Bool */;
val* var447 /* : NativeArray[String] */;
static val* varonce446;
static val* varonce448;
val* var449 /* : String */;
char* var450 /* : NativeString */;
val* var451 /* : FlatString */;
static val* varonce452;
val* var453 /* : String */;
char* var454 /* : NativeString */;
val* var455 /* : FlatString */;
static val* varonce456;
val* var457 /* : String */;
char* var458 /* : NativeString */;
val* var459 /* : FlatString */;
val* var460 /* : MVisibility */;
val* var462 /* : MVisibility */;
val* var463 /* : String */;
val* var464 /* : String */;
val* var465 /* : String */;
val* var467 /* : Map[MClass, AClassdef] */;
val* var469 /* : Map[MClass, AClassdef] */;
short int var470 /* : Bool */;
short int var471 /* : Bool */;
val* var472 /* : Map[MClass, AClassdef] */;
val* var474 /* : Map[MClass, AClassdef] */;
val* var475 /* : Array[AClassdef] */;
val* var_476 /* var : Array[AClassdef] */;
val* var478 /* : Map[MClass, AClassdef] */;
val* var480 /* : Map[MClass, AClassdef] */;
val* var481 /* : nullable Object */;
val* var482 /* : nullable Array[AClassdef] */;
val* var484 /* : nullable Array[AClassdef] */;
var_nmodule = p0;
var_nclassdef = p1;
{
{ /* Inline loader#AModule#mmodule (var_nmodule) on <var_nmodule:AModule> */
var2 = var_nmodule->attrs[COLOR_nit__loader__AModule___mmodule].val; /* _mmodule on <var_nmodule:AModule> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 40);
fatal_exit(1);
}
var_mmodule = var;
var_arity = 0l;
var3 = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[String]>*/
}
var_names = var3;
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype = type_nit__AStdClassdef.color;
idtype = type_nit__AStdClassdef.id;
if(cltype >= var_nclassdef->type->table_size) {
var4 = 0;
} else {
var4 = var_nclassdef->type->type_table[cltype] == idtype;
}
if (var4){
{
{ /* Inline parser_nodes#AStdClassdef#n_id (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var7 = var_nclassdef->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_id].val; /* _n_id on <var_nclassdef:AClassdef(AStdClassdef)> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (var5 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 50);
fatal_exit(1);
} else {
var8 = nit__lexer_work___Token___text(var5);
}
var_name = var8;
{
{ /* Inline parser_nodes#AStdClassdef#n_classkind (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var11 = var_nclassdef->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_classkind].val; /* _n_classkind on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classkind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1198);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_nkind = var9;
{
var12 = ((val*(*)(val* self))(var_nkind->class->vft[COLOR_nit__modelize_class__AClasskind__mkind]))(var_nkind); /* mkind on <var_nkind:nullable AClasskind(AClasskind)>*/
}
var_mkind = var12;
{
{ /* Inline parser_nodes#ADefinition#n_visibility (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var15 = var_nclassdef->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <var_nclassdef:AClassdef(AStdClassdef)> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_nvisibility = var13;
if (var_nvisibility == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 54);
fatal_exit(1);
} else {
var16 = ((val*(*)(val* self))(var_nvisibility->class->vft[COLOR_nit__modelbuilder_base__AVisibility__mvisibility]))(var_nvisibility); /* mvisibility on <var_nvisibility:nullable AVisibility>*/
}
var_mvisibility = var16;
{
{ /* Inline parser_nodes#AStdClassdef#n_formaldefs (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var19 = var_nclassdef->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_formaldefs].val; /* _n_formaldefs on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_formaldefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1207);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = nit___nit__ANodes___standard__abstract_collection__Collection__length(var17);
}
var_arity = var20;
var21 = glob_sys;
{
var22 = nit__model_base___standard__Sys___protected_visibility(var21);
}
{
{ /* Inline kernel#Object#== (var_mvisibility,var22) on <var_mvisibility:nullable MVisibility(MVisibility)> */
var_other = var22;
{
{ /* Inline kernel#Object#is_same_instance (var_mvisibility,var_other) on <var_mvisibility:nullable MVisibility(MVisibility)> */
var27 = var_mvisibility == var_other;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
if (var23){
if (likely(varonce!=NULL)) {
var28 = varonce;
} else {
var29 = "Error: only properties can be protected.";
var30 = standard___standard__NativeString___to_s_with_length(var29, 40l);
var28 = var30;
varonce = var28;
}
{
nit___nit__ModelBuilder___error(self, var_nvisibility, var28); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
var31 = glob_sys;
{
var32 = nit__model_base___standard__Sys___intrude_visibility(var31);
}
{
{ /* Inline kernel#Object#== (var_mvisibility,var32) on <var_mvisibility:nullable MVisibility(MVisibility)> */
var_other = var32;
{
{ /* Inline kernel#Object#is_same_instance (var_mvisibility,var_other) on <var_mvisibility:nullable MVisibility(MVisibility)> */
var37 = var_mvisibility == var_other;
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
if (var33){
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "Error: intrude is not a legal visibility for classes.";
var41 = standard___standard__NativeString___to_s_with_length(var40, 53l);
var39 = var41;
varonce38 = var39;
}
{
nit___nit__ModelBuilder___error(self, var_nvisibility, var39); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
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
var44 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var44)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var47 = var_i < var_;
var42 = var47;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
if (var42){
{
{ /* Inline parser_nodes#AStdClassdef#n_formaldefs (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var50 = var_nclassdef->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_formaldefs].val; /* _n_formaldefs on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_formaldefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1207);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
var51 = nit___nit__ANodes___standard__abstract_collection__SequenceRead___91d_93d(var48, var_i);
}
var_nfd = var51;
{
{ /* Inline parser_nodes#AFormaldef#n_id (var_nfd) on <var_nfd:AFormaldef> */
var54 = var_nfd->attrs[COLOR_nit__parser_nodes__AFormaldef___n_id].val; /* _n_id on <var_nfd:AFormaldef> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1291);
fatal_exit(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
var55 = nit__lexer_work___Token___text(var52);
}
var_ptname = var55;
{
var56 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__has(var_names, var_ptname);
}
if (var56){
if (unlikely(varonce57==NULL)) {
var58 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce59!=NULL)) {
var60 = varonce59;
} else {
var61 = "Error: a formal parameter type `";
var62 = standard___standard__NativeString___to_s_with_length(var61, 32l);
var60 = var62;
varonce59 = var60;
}
((struct instance_standard__NativeArray*)var58)->values[0]=var60;
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "` already exists.";
var66 = standard___standard__NativeString___to_s_with_length(var65, 17l);
var64 = var66;
varonce63 = var64;
}
((struct instance_standard__NativeArray*)var58)->values[2]=var64;
} else {
var58 = varonce57;
varonce57 = NULL;
}
((struct instance_standard__NativeArray*)var58)->values[1]=var_ptname;
{
var67 = ((val*(*)(val* self))(var58->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var58); /* native_to_s on <var58:NativeArray[String]>*/
}
varonce57 = var58;
{
nit___nit__ModelBuilder___error(self, var_nfd, var67); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
var68 = ((val*(*)(val* self))(var_ptname->class->vft[COLOR_standard__string__Text__chars]))(var_ptname); /* chars on <var_ptname:String>*/
}
var_69 = var68;
{
var70 = ((val*(*)(val* self))((((long)var_69&3)?class_info[((long)var_69&3)]:var_69->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_69); /* iterator on <var_69:SequenceRead[Char]>*/
}
var_71 = var70;
for(;;) {
{
var72 = ((short int(*)(val* self))((((long)var_71&3)?class_info[((long)var_71&3)]:var_71->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_71); /* is_ok on <var_71:IndexedIterator[Char]>*/
}
if (var72){
{
var73 = ((val*(*)(val* self))((((long)var_71&3)?class_info[((long)var_71&3)]:var_71->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_71); /* item on <var_71:IndexedIterator[Char]>*/
}
var74 = (uint32_t)((long)(var73)>>2);
var_c = var74;
{
{ /* Inline kernel#Char#>= (var_c,'a') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'a':Char> isa OTHER */
/* <'a':Char> isa OTHER */
var78 = 1; /* easy <'a':Char> isa OTHER*/
if (unlikely(!var78)) {
var_class_name81 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name81);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 724);
fatal_exit(1);
}
var82 = var_c >= 'a';
var76 = var82;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
}
var_83 = var76;
if (var76){
{
{ /* Inline kernel#Char#<= (var_c,'z') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'z':Char> isa OTHER */
/* <'z':Char> isa OTHER */
var86 = 1; /* easy <'z':Char> isa OTHER*/
if (unlikely(!var86)) {
var_class_name89 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name89);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 722);
fatal_exit(1);
}
var90 = var_c <= 'z';
var84 = var90;
goto RET_LABEL85;
RET_LABEL85:(void)0;
}
}
var75 = var84;
} else {
var75 = var_83;
}
if (var75){
if (likely(varonce91!=NULL)) {
var92 = varonce91;
} else {
var93 = "formal-type-name";
var94 = standard___standard__NativeString___to_s_with_length(var93, 16l);
var92 = var94;
varonce91 = var92;
}
if (unlikely(varonce95==NULL)) {
var96 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce97!=NULL)) {
var98 = varonce97;
} else {
var99 = "Warning: lowercase in the formal parameter type `";
var100 = standard___standard__NativeString___to_s_with_length(var99, 49l);
var98 = var100;
varonce97 = var98;
}
((struct instance_standard__NativeArray*)var96)->values[0]=var98;
if (likely(varonce101!=NULL)) {
var102 = varonce101;
} else {
var103 = "`.";
var104 = standard___standard__NativeString___to_s_with_length(var103, 2l);
var102 = var104;
varonce101 = var102;
}
((struct instance_standard__NativeArray*)var96)->values[2]=var102;
} else {
var96 = varonce95;
varonce95 = NULL;
}
((struct instance_standard__NativeArray*)var96)->values[1]=var_ptname;
{
var105 = ((val*(*)(val* self))(var96->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var96); /* native_to_s on <var96:NativeArray[String]>*/
}
varonce95 = var96;
{
nit___nit__ModelBuilder___warning(self, var_nfd, var92, var105); /* Direct call modelbuilder_base#ModelBuilder#warning on <self:ModelBuilder>*/
}
goto BREAK_label;
} else {
}
{
((void(*)(val* self))((((long)var_71&3)?class_info[((long)var_71&3)]:var_71->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_71); /* next on <var_71:IndexedIterator[Char]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_71&3)?class_info[((long)var_71&3)]:var_71->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_71); /* finish on <var_71:IndexedIterator[Char]>*/
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_names, var_ptname); /* Direct call array#Array#add on <var_names:Array[String]>*/
}
{
var106 = standard___standard__Int___Discrete__successor(var_i, 1l);
}
var_i = var106;
} else {
goto BREAK_label107;
}
}
BREAK_label107: (void)0;
} else {
/* <var_nclassdef:AClassdef> isa ATopClassdef */
cltype110 = type_nit__ATopClassdef.color;
idtype111 = type_nit__ATopClassdef.id;
if(cltype110 >= var_nclassdef->type->table_size) {
var109 = 0;
} else {
var109 = var_nclassdef->type->type_table[cltype110] == idtype111;
}
var_112 = var109;
if (var109){
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_nclassdef) on <var_nclassdef:AClassdef(ATopClassdef)> */
var115 = var_nclassdef->attrs[COLOR_nit__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef:AClassdef(ATopClassdef)> */
if (unlikely(var115 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1189);
fatal_exit(1);
}
var113 = var115;
RET_LABEL114:(void)0;
}
}
{
var116 = standard___standard__SequenceRead___Collection__first(var113);
}
/* <var116:nullable Object(APropdef)> isa AMethPropdef */
cltype118 = type_nit__AMethPropdef.color;
idtype119 = type_nit__AMethPropdef.id;
if(cltype118 >= var116->type->table_size) {
var117 = 0;
} else {
var117 = var116->type->type_table[cltype118] == idtype119;
}
if (unlikely(!var117)) {
var_class_name120 = var116 == NULL ? "null" : var116->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AMethPropdef", var_class_name120);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 78);
fatal_exit(1);
}
{
{ /* Inline parser_nodes#AMethPropdef#n_methid (var116) on <var116:APropdef(AMethPropdef)> */
var123 = var116->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <var116:APropdef(AMethPropdef)> */
var121 = var123;
RET_LABEL122:(void)0;
}
}
if (var121 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 78);
fatal_exit(1);
} else {
var124 = nit__parser_work___Prod___collect_text(var121);
}
if (likely(varonce125!=NULL)) {
var126 = varonce125;
} else {
var127 = "sys";
var128 = standard___standard__NativeString___to_s_with_length(var127, 3l);
var126 = var128;
varonce125 = var126;
}
{
var129 = ((short int(*)(val* self, val* p0))(var124->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var124, var126); /* == on <var124:String>*/
}
var108 = var129;
} else {
var108 = var_112;
}
if (var108){
if (likely(varonce130!=NULL)) {
var131 = varonce130;
} else {
var132 = "Object";
var133 = standard___standard__NativeString___to_s_with_length(var132, 6l);
var131 = var133;
varonce130 = var131;
}
var_name = var131;
var_nkind = ((val*)NULL);
var134 = glob_sys;
{
var135 = nit__model___standard__Sys___interface_kind(var134);
}
var_mkind = var135;
var_nvisibility = ((val*)NULL);
var136 = glob_sys;
{
var137 = nit__model_base___standard__Sys___public_visibility(var136);
}
var_mvisibility = var137;
} else {
if (likely(varonce138!=NULL)) {
var139 = varonce138;
} else {
var140 = "Sys";
var141 = standard___standard__NativeString___to_s_with_length(var140, 3l);
var139 = var141;
varonce138 = var139;
}
var_name = var139;
var_nkind = ((val*)NULL);
var142 = glob_sys;
{
var143 = nit__model___standard__Sys___concrete_kind(var142);
}
var_mkind = var143;
var_nvisibility = ((val*)NULL);
var144 = glob_sys;
{
var145 = nit__model_base___standard__Sys___public_visibility(var144);
}
var_mvisibility = var145;
}
}
{
var146 = nit___nit__ModelBuilder___try_get_mclass_by_name(self, var_nclassdef, var_mmodule, var_name);
}
var_mclass = var146;
if (var_mclass == NULL) {
var147 = 1; /* is null */
} else {
var147 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mclass,((val*)NULL)) on <var_mclass:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
var152 = var_mclass == var_other;
var150 = var152;
goto RET_LABEL151;
RET_LABEL151:(void)0;
}
}
var148 = var150;
goto RET_LABEL149;
RET_LABEL149:(void)0;
}
var147 = var148;
}
if (var147){
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype155 = type_nit__AStdClassdef.color;
idtype156 = type_nit__AStdClassdef.id;
if(cltype155 >= var_nclassdef->type->table_size) {
var154 = 0;
} else {
var154 = var_nclassdef->type->type_table[cltype155] == idtype156;
}
var_157 = var154;
if (var154){
{
{ /* Inline parser_nodes#ADefinition#n_kwredef (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var160 = var_nclassdef->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <var_nclassdef:AClassdef(AStdClassdef)> */
var158 = var160;
RET_LABEL159:(void)0;
}
}
if (var158 == NULL) {
var161 = 0; /* is null */
} else {
var161 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var158,((val*)NULL)) on <var158:nullable TKwredef> */
var_other164 = ((val*)NULL);
{
var165 = ((short int(*)(val* self, val* p0))(var158->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var158, var_other164); /* == on <var158:nullable TKwredef(TKwredef)>*/
}
var166 = !var165;
var162 = var166;
goto RET_LABEL163;
RET_LABEL163:(void)0;
}
var161 = var162;
}
var153 = var161;
} else {
var153 = var_157;
}
if (var153){
if (unlikely(varonce167==NULL)) {
var168 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce169!=NULL)) {
var170 = varonce169;
} else {
var171 = "Redef Error: no imported class `";
var172 = standard___standard__NativeString___to_s_with_length(var171, 32l);
var170 = var172;
varonce169 = var170;
}
((struct instance_standard__NativeArray*)var168)->values[0]=var170;
if (likely(varonce173!=NULL)) {
var174 = varonce173;
} else {
var175 = "` to refine.";
var176 = standard___standard__NativeString___to_s_with_length(var175, 12l);
var174 = var176;
varonce173 = var174;
}
((struct instance_standard__NativeArray*)var168)->values[2]=var174;
} else {
var168 = varonce167;
varonce167 = NULL;
}
((struct instance_standard__NativeArray*)var168)->values[1]=var_name;
{
var177 = ((val*(*)(val* self))(var168->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var168); /* native_to_s on <var168:NativeArray[String]>*/
}
varonce167 = var168;
{
nit___nit__ModelBuilder___error(self, var_nclassdef, var177); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline mmodule#MModule#mgroup (var_mmodule) on <var_mmodule:MModule> */
var181 = var_mmodule->attrs[COLOR_nit__mmodule__MModule___mgroup].val; /* _mgroup on <var_mmodule:MModule> */
var179 = var181;
RET_LABEL180:(void)0;
}
}
if (var179 == NULL) {
var182 = 0; /* is null */
} else {
var182 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var179,((val*)NULL)) on <var179:nullable MGroup> */
var_other164 = ((val*)NULL);
{
var185 = ((short int(*)(val* self, val* p0))(var179->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var179, var_other164); /* == on <var179:nullable MGroup(MGroup)>*/
}
var186 = !var185;
var183 = var186;
goto RET_LABEL184;
RET_LABEL184:(void)0;
}
var182 = var183;
}
var_187 = var182;
if (var182){
var188 = glob_sys;
{
var189 = nit__model_base___standard__Sys___protected_visibility(var188);
}
{
var190 = standard___standard__Comparable____62d_61d(var_mvisibility, var189);
}
var178 = var190;
} else {
var178 = var_187;
}
if (var178){
{
{ /* Inline modelbuilder_base#ModelBuilder#model (self) on <self:ModelBuilder> */
var193 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var193 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 44);
fatal_exit(1);
}
var191 = var193;
RET_LABEL192:(void)0;
}
}
{
var194 = nit__model___Model___get_mclasses_by_name(var191, var_name);
}
var_mclasses = var194;
if (var_mclasses == NULL) {
var195 = 0; /* is null */
} else {
var195 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mclasses,((val*)NULL)) on <var_mclasses:nullable Array[MClass]> */
var_other164 = ((val*)NULL);
{
var198 = ((short int(*)(val* self, val* p0))(var_mclasses->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mclasses, var_other164); /* == on <var_mclasses:nullable Array[MClass](Array[MClass])>*/
}
var199 = !var198;
var196 = var199;
goto RET_LABEL197;
RET_LABEL197:(void)0;
}
var195 = var196;
}
if (var195){
var_200 = var_mclasses;
{
var201 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_200);
}
var_202 = var201;
for(;;) {
{
var203 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_202);
}
if (var203){
{
var204 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_202);
}
var_other205 = var204;
{
{ /* Inline model#MClass#intro_mmodule (var_other205) on <var_other205:MClass> */
var209 = var_other205->attrs[COLOR_nit__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_other205:MClass> */
if (unlikely(var209 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 357);
fatal_exit(1);
}
var207 = var209;
RET_LABEL208:(void)0;
}
}
{
{ /* Inline mmodule#MModule#mgroup (var207) on <var207:MModule> */
var212 = var207->attrs[COLOR_nit__mmodule__MModule___mgroup].val; /* _mgroup on <var207:MModule> */
var210 = var212;
RET_LABEL211:(void)0;
}
}
if (var210 == NULL) {
var213 = 0; /* is null */
} else {
var213 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var210,((val*)NULL)) on <var210:nullable MGroup> */
var_other164 = ((val*)NULL);
{
var216 = ((short int(*)(val* self, val* p0))(var210->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var210, var_other164); /* == on <var210:nullable MGroup(MGroup)>*/
}
var217 = !var216;
var214 = var217;
goto RET_LABEL215;
RET_LABEL215:(void)0;
}
var213 = var214;
}
var_218 = var213;
if (var213){
{
{ /* Inline model#MClass#intro_mmodule (var_other205) on <var_other205:MClass> */
var221 = var_other205->attrs[COLOR_nit__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_other205:MClass> */
if (unlikely(var221 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 357);
fatal_exit(1);
}
var219 = var221;
RET_LABEL220:(void)0;
}
}
{
{ /* Inline mmodule#MModule#mgroup (var219) on <var219:MModule> */
var224 = var219->attrs[COLOR_nit__mmodule__MModule___mgroup].val; /* _mgroup on <var219:MModule> */
var222 = var224;
RET_LABEL223:(void)0;
}
}
if (var222 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 106);
fatal_exit(1);
} else {
{ /* Inline mproject#MGroup#mproject (var222) on <var222:nullable MGroup> */
if (unlikely(var222 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 69);
fatal_exit(1);
}
var227 = var222->attrs[COLOR_nit__mproject__MGroup___mproject].val; /* _mproject on <var222:nullable MGroup> */
if (unlikely(var227 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproject");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 69);
fatal_exit(1);
}
var225 = var227;
RET_LABEL226:(void)0;
}
}
{
{ /* Inline mmodule#MModule#mgroup (var_mmodule) on <var_mmodule:MModule> */
var230 = var_mmodule->attrs[COLOR_nit__mmodule__MModule___mgroup].val; /* _mgroup on <var_mmodule:MModule> */
var228 = var230;
RET_LABEL229:(void)0;
}
}
if (var228 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 106);
fatal_exit(1);
} else {
{ /* Inline mproject#MGroup#mproject (var228) on <var228:nullable MGroup> */
if (unlikely(var228 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 69);
fatal_exit(1);
}
var233 = var228->attrs[COLOR_nit__mproject__MGroup___mproject].val; /* _mproject on <var228:nullable MGroup> */
if (unlikely(var233 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproject");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 69);
fatal_exit(1);
}
var231 = var233;
RET_LABEL232:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var225,var231) on <var225:MProject> */
var_other = var231;
{
{ /* Inline kernel#Object#is_same_instance (var225,var_other) on <var225:MProject> */
var238 = var225 == var_other;
var236 = var238;
goto RET_LABEL237;
RET_LABEL237:(void)0;
}
}
var234 = var236;
goto RET_LABEL235;
RET_LABEL235:(void)0;
}
}
var206 = var234;
} else {
var206 = var_218;
}
if (var206){
{
var239 = nit___nit__MClass___try_intro(var_other205);
}
if (var239 == NULL) {
var240 = 1; /* is null */
} else {
var240 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var239,((val*)NULL)) on <var239:nullable MClassDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var239,var_other) on <var239:nullable MClassDef(MClassDef)> */
var245 = var239 == var_other;
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
goto BREAK_label246;
} else {
}
if (likely(varonce247!=NULL)) {
var248 = varonce247;
} else {
var249 = "full-name-conflict";
var250 = standard___standard__NativeString___to_s_with_length(var249, 18l);
var248 = var250;
varonce247 = var248;
}
if (unlikely(varonce251==NULL)) {
var252 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce253!=NULL)) {
var254 = varonce253;
} else {
var255 = "Error: a class named `";
var256 = standard___standard__NativeString___to_s_with_length(var255, 22l);
var254 = var256;
varonce253 = var254;
}
((struct instance_standard__NativeArray*)var252)->values[0]=var254;
if (likely(varonce257!=NULL)) {
var258 = varonce257;
} else {
var259 = "` is already defined in module `";
var260 = standard___standard__NativeString___to_s_with_length(var259, 32l);
var258 = var260;
varonce257 = var258;
}
((struct instance_standard__NativeArray*)var252)->values[2]=var258;
if (likely(varonce261!=NULL)) {
var262 = varonce261;
} else {
var263 = "` at ";
var264 = standard___standard__NativeString___to_s_with_length(var263, 5l);
var262 = var264;
varonce261 = var262;
}
((struct instance_standard__NativeArray*)var252)->values[4]=var262;
if (likely(varonce265!=NULL)) {
var266 = varonce265;
} else {
var267 = ".";
var268 = standard___standard__NativeString___to_s_with_length(var267, 1l);
var266 = var268;
varonce265 = var266;
}
((struct instance_standard__NativeArray*)var252)->values[6]=var266;
} else {
var252 = varonce251;
varonce251 = NULL;
}
{
var269 = nit___nit__MClass___nit__model_base__MEntity__full_name(var_other205);
}
((struct instance_standard__NativeArray*)var252)->values[1]=var269;
{
{ /* Inline model#MClass#intro_mmodule (var_other205) on <var_other205:MClass> */
var272 = var_other205->attrs[COLOR_nit__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_other205:MClass> */
if (unlikely(var272 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 357);
fatal_exit(1);
}
var270 = var272;
RET_LABEL271:(void)0;
}
}
{
var273 = ((val*(*)(val* self))(var270->class->vft[COLOR_standard__string__Object__to_s]))(var270); /* to_s on <var270:MModule>*/
}
((struct instance_standard__NativeArray*)var252)->values[3]=var273;
{
{ /* Inline model#MClass#intro (var_other205) on <var_other205:MClass> */
var276 = var_other205->attrs[COLOR_nit__model__MClass___intro].val; /* _intro on <var_other205:MClass> */
if (unlikely(var276 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 460);
fatal_exit(1);
}
var274 = var276;
RET_LABEL275:(void)0;
}
}
{
{ /* Inline model#MClassDef#location (var274) on <var274:MClassDef> */
var279 = var274->attrs[COLOR_nit__model__MClassDef___location].val; /* _location on <var274:MClassDef> */
if (unlikely(var279 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 568);
fatal_exit(1);
}
var277 = var279;
RET_LABEL278:(void)0;
}
}
{
var280 = ((val*(*)(val* self))(var277->class->vft[COLOR_standard__string__Object__to_s]))(var277); /* to_s on <var277:Location>*/
}
((struct instance_standard__NativeArray*)var252)->values[5]=var280;
{
var281 = ((val*(*)(val* self))(var252->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var252); /* native_to_s on <var252:NativeArray[String]>*/
}
varonce251 = var252;
{
nit___nit__ModelBuilder___warning(self, var_nclassdef, var248, var281); /* Direct call modelbuilder_base#ModelBuilder#warning on <self:ModelBuilder>*/
}
goto BREAK_label282;
} else {
}
BREAK_label246: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_202); /* Direct call array#ArrayIterator#next on <var_202:ArrayIterator[MClass]>*/
}
} else {
goto BREAK_label282;
}
}
BREAK_label282: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_202); /* Direct call array#ArrayIterator#finish on <var_202:ArrayIterator[MClass]>*/
}
} else {
}
} else {
}
var283 = NEW_nit__MClass(&type_nit__MClass);
{
((void(*)(val* self, val* p0))(var283->class->vft[COLOR_nit__model__MClass__intro_mmodule_61d]))(var283, var_mmodule); /* intro_mmodule= on <var283:MClass>*/
}
{
((void(*)(val* self, val* p0))(var283->class->vft[COLOR_nit__model__MClass__name_61d]))(var283, var_name); /* name= on <var283:MClass>*/
}
{
((void(*)(val* self, val* p0))(var283->class->vft[COLOR_nit__model__MClass__setup_parameter_names]))(var283, var_names); /* setup_parameter_names on <var283:MClass>*/
}
{
((void(*)(val* self, val* p0))(var283->class->vft[COLOR_nit__model__MClass__kind_61d]))(var283, var_mkind); /* kind= on <var283:MClass>*/
}
{
((void(*)(val* self, val* p0))(var283->class->vft[COLOR_nit__model__MClass__visibility_61d]))(var283, var_mvisibility); /* visibility= on <var283:MClass>*/
}
{
((void(*)(val* self))(var283->class->vft[COLOR_standard__kernel__Object__init]))(var283); /* init on <var283:MClass>*/
}
var_mclass = var283;
} else {
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype286 = type_nit__AStdClassdef.color;
idtype287 = type_nit__AStdClassdef.id;
if(cltype286 >= var_nclassdef->type->table_size) {
var285 = 0;
} else {
var285 = var_nclassdef->type->type_table[cltype286] == idtype287;
}
var_288 = var285;
if (var285){
{
{ /* Inline modelize_class#AModule#mclass2nclassdef (var_nmodule) on <var_nmodule:AModule> */
var291 = var_nmodule->attrs[COLOR_nit__modelize_class__AModule___mclass2nclassdef].val; /* _mclass2nclassdef on <var_nmodule:AModule> */
if (unlikely(var291 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 464);
fatal_exit(1);
}
var289 = var291;
RET_LABEL290:(void)0;
}
}
{
var292 = ((short int(*)(val* self, val* p0))((((long)var289&3)?class_info[((long)var289&3)]:var289->class)->vft[COLOR_standard__abstract_collection__MapRead__has_key]))(var289, var_mclass); /* has_key on <var289:Map[MClass, AClassdef]>*/
}
var284 = var292;
} else {
var284 = var_288;
}
if (var284){
if (unlikely(varonce293==NULL)) {
var294 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce295!=NULL)) {
var296 = varonce295;
} else {
var297 = "Error: a class `";
var298 = standard___standard__NativeString___to_s_with_length(var297, 16l);
var296 = var298;
varonce295 = var296;
}
((struct instance_standard__NativeArray*)var294)->values[0]=var296;
if (likely(varonce299!=NULL)) {
var300 = varonce299;
} else {
var301 = "` is already defined at line ";
var302 = standard___standard__NativeString___to_s_with_length(var301, 29l);
var300 = var302;
varonce299 = var300;
}
((struct instance_standard__NativeArray*)var294)->values[2]=var300;
if (likely(varonce303!=NULL)) {
var304 = varonce303;
} else {
var305 = ".";
var306 = standard___standard__NativeString___to_s_with_length(var305, 1l);
var304 = var306;
varonce303 = var304;
}
((struct instance_standard__NativeArray*)var294)->values[4]=var304;
} else {
var294 = varonce293;
varonce293 = NULL;
}
((struct instance_standard__NativeArray*)var294)->values[1]=var_name;
{
{ /* Inline modelize_class#AModule#mclass2nclassdef (var_nmodule) on <var_nmodule:AModule> */
var309 = var_nmodule->attrs[COLOR_nit__modelize_class__AModule___mclass2nclassdef].val; /* _mclass2nclassdef on <var_nmodule:AModule> */
if (unlikely(var309 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 464);
fatal_exit(1);
}
var307 = var309;
RET_LABEL308:(void)0;
}
}
{
var310 = ((val*(*)(val* self, val* p0))((((long)var307&3)?class_info[((long)var307&3)]:var307->class)->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var307, var_mclass); /* [] on <var307:Map[MClass, AClassdef]>*/
}
{
{ /* Inline parser_nodes#ANode#location (var310) on <var310:nullable Object(AClassdef)> */
var313 = var310->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var310:nullable Object(AClassdef)> */
if (unlikely(var313 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var311 = var313;
RET_LABEL312:(void)0;
}
}
{
{ /* Inline location#Location#line_start (var311) on <var311:Location> */
var316 = var311->attrs[COLOR_nit__location__Location___line_start].l; /* _line_start on <var311:Location> */
var314 = var316;
RET_LABEL315:(void)0;
}
}
var317 = standard__string___Int___Object__to_s(var314);
((struct instance_standard__NativeArray*)var294)->values[3]=var317;
{
var318 = ((val*(*)(val* self))(var294->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var294); /* native_to_s on <var294:NativeArray[String]>*/
}
varonce293 = var294;
{
nit___nit__ModelBuilder___error(self, var_nclassdef, var318); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype321 = type_nit__AStdClassdef.color;
idtype322 = type_nit__AStdClassdef.id;
if(cltype321 >= var_nclassdef->type->table_size) {
var320 = 0;
} else {
var320 = var_nclassdef->type->type_table[cltype321] == idtype322;
}
var_323 = var320;
if (var320){
{
{ /* Inline parser_nodes#ADefinition#n_kwredef (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var326 = var_nclassdef->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <var_nclassdef:AClassdef(AStdClassdef)> */
var324 = var326;
RET_LABEL325:(void)0;
}
}
if (var324 == NULL) {
var327 = 1; /* is null */
} else {
var327 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var324,((val*)NULL)) on <var324:nullable TKwredef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var324,var_other) on <var324:nullable TKwredef(TKwredef)> */
var332 = var324 == var_other;
var330 = var332;
goto RET_LABEL331;
RET_LABEL331:(void)0;
}
}
var328 = var330;
goto RET_LABEL329;
RET_LABEL329:(void)0;
}
var327 = var328;
}
var319 = var327;
} else {
var319 = var_323;
}
if (var319){
if (unlikely(varonce333==NULL)) {
var334 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce335!=NULL)) {
var336 = varonce335;
} else {
var337 = "Redef Error: `";
var338 = standard___standard__NativeString___to_s_with_length(var337, 14l);
var336 = var338;
varonce335 = var336;
}
((struct instance_standard__NativeArray*)var334)->values[0]=var336;
if (likely(varonce339!=NULL)) {
var340 = varonce339;
} else {
var341 = "` is an imported class. Add the `redef` keyword to refine it.";
var342 = standard___standard__NativeString___to_s_with_length(var341, 61l);
var340 = var342;
varonce339 = var340;
}
((struct instance_standard__NativeArray*)var334)->values[2]=var340;
} else {
var334 = varonce333;
varonce333 = NULL;
}
((struct instance_standard__NativeArray*)var334)->values[1]=var_name;
{
var343 = ((val*(*)(val* self))(var334->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var334); /* native_to_s on <var334:NativeArray[String]>*/
}
varonce333 = var334;
{
nit___nit__ModelBuilder___error(self, var_nclassdef, var343); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
{
{ /* Inline kernel#Int#!= (var_arity,0l) on <var_arity:Int> */
var347 = var_arity == 0l;
var348 = !var347;
var345 = var348;
goto RET_LABEL346;
RET_LABEL346:(void)0;
}
}
var_349 = var345;
if (var345){
{
{ /* Inline model#MClass#arity (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var352 = var_mclass->attrs[COLOR_nit__model__MClass___arity].l; /* _arity on <var_mclass:nullable MClass(MClass)> */
var350 = var352;
RET_LABEL351:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var350,var_arity) on <var350:Int> */
var355 = var350 == var_arity;
var356 = !var355;
var353 = var356;
goto RET_LABEL354;
RET_LABEL354:(void)0;
}
}
var344 = var353;
} else {
var344 = var_349;
}
if (var344){
if (unlikely(varonce357==NULL)) {
var358 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce359!=NULL)) {
var360 = varonce359;
} else {
var361 = "Redef Error: expected ";
var362 = standard___standard__NativeString___to_s_with_length(var361, 22l);
var360 = var362;
varonce359 = var360;
}
((struct instance_standard__NativeArray*)var358)->values[0]=var360;
if (likely(varonce363!=NULL)) {
var364 = varonce363;
} else {
var365 = " formal parameter(s) for ";
var366 = standard___standard__NativeString___to_s_with_length(var365, 25l);
var364 = var366;
varonce363 = var364;
}
((struct instance_standard__NativeArray*)var358)->values[2]=var364;
if (likely(varonce367!=NULL)) {
var368 = varonce367;
} else {
var369 = "; got ";
var370 = standard___standard__NativeString___to_s_with_length(var369, 6l);
var368 = var370;
varonce367 = var368;
}
((struct instance_standard__NativeArray*)var358)->values[4]=var368;
if (likely(varonce371!=NULL)) {
var372 = varonce371;
} else {
var373 = ".";
var374 = standard___standard__NativeString___to_s_with_length(var373, 1l);
var372 = var374;
varonce371 = var372;
}
((struct instance_standard__NativeArray*)var358)->values[6]=var372;
} else {
var358 = varonce357;
varonce357 = NULL;
}
{
{ /* Inline model#MClass#arity (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var377 = var_mclass->attrs[COLOR_nit__model__MClass___arity].l; /* _arity on <var_mclass:nullable MClass(MClass)> */
var375 = var377;
RET_LABEL376:(void)0;
}
}
var378 = standard__string___Int___Object__to_s(var375);
((struct instance_standard__NativeArray*)var358)->values[1]=var378;
{
var379 = nit___nit__MClass___signature_to_s(var_mclass);
}
((struct instance_standard__NativeArray*)var358)->values[3]=var379;
var380 = standard__string___Int___Object__to_s(var_arity);
((struct instance_standard__NativeArray*)var358)->values[5]=var380;
{
var381 = ((val*(*)(val* self))(var358->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var358); /* native_to_s on <var358:NativeArray[String]>*/
}
varonce357 = var358;
{
nit___nit__ModelBuilder___error(self, var_nclassdef, var381); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
if (var_nkind == NULL) {
var384 = 0; /* is null */
} else {
var384 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nkind,((val*)NULL)) on <var_nkind:nullable AClasskind> */
var_other164 = ((val*)NULL);
{
var387 = ((short int(*)(val* self, val* p0))(var_nkind->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nkind, var_other164); /* == on <var_nkind:nullable AClasskind(AClasskind)>*/
}
var388 = !var387;
var385 = var388;
goto RET_LABEL386;
RET_LABEL386:(void)0;
}
var384 = var385;
}
var_389 = var384;
if (var384){
var390 = glob_sys;
{
var391 = nit__model___standard__Sys___concrete_kind(var390);
}
{
{ /* Inline kernel#Object#!= (var_mkind,var391) on <var_mkind:MClassKind> */
var_other164 = var391;
{
var394 = ((short int(*)(val* self, val* p0))(var_mkind->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mkind, var_other164); /* == on <var_mkind:MClassKind>*/
}
var395 = !var394;
var392 = var395;
goto RET_LABEL393;
RET_LABEL393:(void)0;
}
}
var383 = var392;
} else {
var383 = var_389;
}
var_396 = var383;
if (var383){
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var399 = var_mclass->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var399 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 436);
fatal_exit(1);
}
var397 = var399;
RET_LABEL398:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var397,var_mkind) on <var397:MClassKind> */
var_other164 = var_mkind;
{
var402 = ((short int(*)(val* self, val* p0))(var397->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var397, var_other164); /* == on <var397:MClassKind>*/
}
var403 = !var402;
var400 = var403;
goto RET_LABEL401;
RET_LABEL401:(void)0;
}
}
var382 = var400;
} else {
var382 = var_396;
}
if (var382){
if (unlikely(varonce404==NULL)) {
var405 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce406!=NULL)) {
var407 = varonce406;
} else {
var408 = "Redef Error: refinement changed the kind from `";
var409 = standard___standard__NativeString___to_s_with_length(var408, 47l);
var407 = var409;
varonce406 = var407;
}
((struct instance_standard__NativeArray*)var405)->values[0]=var407;
if (likely(varonce410!=NULL)) {
var411 = varonce410;
} else {
var412 = "` to `";
var413 = standard___standard__NativeString___to_s_with_length(var412, 6l);
var411 = var413;
varonce410 = var411;
}
((struct instance_standard__NativeArray*)var405)->values[2]=var411;
if (likely(varonce414!=NULL)) {
var415 = varonce414;
} else {
var416 = "`.";
var417 = standard___standard__NativeString___to_s_with_length(var416, 2l);
var415 = var417;
varonce414 = var415;
}
((struct instance_standard__NativeArray*)var405)->values[4]=var415;
} else {
var405 = varonce404;
varonce404 = NULL;
}
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var420 = var_mclass->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var420 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 436);
fatal_exit(1);
}
var418 = var420;
RET_LABEL419:(void)0;
}
}
{
var421 = ((val*(*)(val* self))(var418->class->vft[COLOR_standard__string__Object__to_s]))(var418); /* to_s on <var418:MClassKind>*/
}
((struct instance_standard__NativeArray*)var405)->values[1]=var421;
{
var422 = ((val*(*)(val* self))(var_mkind->class->vft[COLOR_standard__string__Object__to_s]))(var_mkind); /* to_s on <var_mkind:MClassKind>*/
}
((struct instance_standard__NativeArray*)var405)->values[3]=var422;
{
var423 = ((val*(*)(val* self))(var405->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var405); /* native_to_s on <var405:NativeArray[String]>*/
}
varonce404 = var405;
{
nit___nit__ModelBuilder___error(self, var_nkind, var423); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
if (var_nvisibility == NULL) {
var426 = 0; /* is null */
} else {
var426 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nvisibility,((val*)NULL)) on <var_nvisibility:nullable AVisibility> */
var_other164 = ((val*)NULL);
{
var429 = ((short int(*)(val* self, val* p0))(var_nvisibility->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nvisibility, var_other164); /* == on <var_nvisibility:nullable AVisibility(AVisibility)>*/
}
var430 = !var429;
var427 = var430;
goto RET_LABEL428;
RET_LABEL428:(void)0;
}
var426 = var427;
}
var_431 = var426;
if (var426){
var432 = glob_sys;
{
var433 = nit__model_base___standard__Sys___public_visibility(var432);
}
{
{ /* Inline kernel#Object#!= (var_mvisibility,var433) on <var_mvisibility:nullable MVisibility(MVisibility)> */
var_other164 = var433;
{
var436 = ((short int(*)(val* self, val* p0))(var_mvisibility->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mvisibility, var_other164); /* == on <var_mvisibility:nullable MVisibility(MVisibility)>*/
}
var437 = !var436;
var434 = var437;
goto RET_LABEL435;
RET_LABEL435:(void)0;
}
}
var425 = var434;
} else {
var425 = var_431;
}
var_438 = var425;
if (var425){
{
{ /* Inline model#MClass#visibility (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var441 = var_mclass->attrs[COLOR_nit__model__MClass___visibility].val; /* _visibility on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var441 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 440);
fatal_exit(1);
}
var439 = var441;
RET_LABEL440:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var439,var_mvisibility) on <var439:MVisibility> */
var_other164 = var_mvisibility;
{
var444 = ((short int(*)(val* self, val* p0))(var439->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var439, var_other164); /* == on <var439:MVisibility>*/
}
var445 = !var444;
var442 = var445;
goto RET_LABEL443;
RET_LABEL443:(void)0;
}
}
var424 = var442;
} else {
var424 = var_438;
}
if (var424){
if (unlikely(varonce446==NULL)) {
var447 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce448!=NULL)) {
var449 = varonce448;
} else {
var450 = "Redef Error: refinement changed the visibility from `";
var451 = standard___standard__NativeString___to_s_with_length(var450, 53l);
var449 = var451;
varonce448 = var449;
}
((struct instance_standard__NativeArray*)var447)->values[0]=var449;
if (likely(varonce452!=NULL)) {
var453 = varonce452;
} else {
var454 = "` to `";
var455 = standard___standard__NativeString___to_s_with_length(var454, 6l);
var453 = var455;
varonce452 = var453;
}
((struct instance_standard__NativeArray*)var447)->values[2]=var453;
if (likely(varonce456!=NULL)) {
var457 = varonce456;
} else {
var458 = "`";
var459 = standard___standard__NativeString___to_s_with_length(var458, 1l);
var457 = var459;
varonce456 = var457;
}
((struct instance_standard__NativeArray*)var447)->values[4]=var457;
} else {
var447 = varonce446;
varonce446 = NULL;
}
{
{ /* Inline model#MClass#visibility (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var462 = var_mclass->attrs[COLOR_nit__model__MClass___visibility].val; /* _visibility on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var462 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 440);
fatal_exit(1);
}
var460 = var462;
RET_LABEL461:(void)0;
}
}
{
var463 = ((val*(*)(val* self))(var460->class->vft[COLOR_standard__string__Object__to_s]))(var460); /* to_s on <var460:MVisibility>*/
}
((struct instance_standard__NativeArray*)var447)->values[1]=var463;
{
var464 = ((val*(*)(val* self))(var_mvisibility->class->vft[COLOR_standard__string__Object__to_s]))(var_mvisibility); /* to_s on <var_mvisibility:nullable MVisibility(MVisibility)>*/
}
((struct instance_standard__NativeArray*)var447)->values[3]=var464;
{
var465 = ((val*(*)(val* self))(var447->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var447); /* native_to_s on <var447:NativeArray[String]>*/
}
varonce446 = var447;
{
nit___nit__ModelBuilder___error(self, var_nvisibility, var465); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
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
var_nclassdef->attrs[COLOR_nit__modelize_class__AClassdef___mclass].val = var_mclass; /* _mclass on <var_nclassdef:AClassdef> */
RET_LABEL466:(void)0;
}
}
{
{ /* Inline modelize_class#AModule#mclass2nclassdef (var_nmodule) on <var_nmodule:AModule> */
var469 = var_nmodule->attrs[COLOR_nit__modelize_class__AModule___mclass2nclassdef].val; /* _mclass2nclassdef on <var_nmodule:AModule> */
if (unlikely(var469 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 464);
fatal_exit(1);
}
var467 = var469;
RET_LABEL468:(void)0;
}
}
{
var470 = ((short int(*)(val* self, val* p0))((((long)var467&3)?class_info[((long)var467&3)]:var467->class)->vft[COLOR_standard__abstract_collection__MapRead__has_key]))(var467, var_mclass); /* has_key on <var467:Map[MClass, AClassdef]>*/
}
var471 = !var470;
if (var471){
{
{ /* Inline modelize_class#AModule#mclass2nclassdef (var_nmodule) on <var_nmodule:AModule> */
var474 = var_nmodule->attrs[COLOR_nit__modelize_class__AModule___mclass2nclassdef].val; /* _mclass2nclassdef on <var_nmodule:AModule> */
if (unlikely(var474 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 464);
fatal_exit(1);
}
var472 = var474;
RET_LABEL473:(void)0;
}
}
{
((void(*)(val* self, val* p0, val* p1))((((long)var472&3)?class_info[((long)var472&3)]:var472->class)->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var472, var_mclass, var_nclassdef); /* []= on <var472:Map[MClass, AClassdef]>*/
}
var475 = NEW_standard__Array(&type_standard__Array__nit__AClassdef);
{
standard___standard__Array___with_capacity(var475, 1l); /* Direct call array#Array#with_capacity on <var475:Array[AClassdef]>*/
}
var_476 = var475;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_476, var_nclassdef); /* Direct call array#AbstractArray#push on <var_476:Array[AClassdef]>*/
}
{
{ /* Inline modelize_class#AClassdef#all_defs= (var_nclassdef,var_476) on <var_nclassdef:AClassdef> */
var_nclassdef->attrs[COLOR_nit__modelize_class__AClassdef___all_defs].val = var_476; /* _all_defs on <var_nclassdef:AClassdef> */
RET_LABEL477:(void)0;
}
}
} else {
{
{ /* Inline modelize_class#AModule#mclass2nclassdef (var_nmodule) on <var_nmodule:AModule> */
var480 = var_nmodule->attrs[COLOR_nit__modelize_class__AModule___mclass2nclassdef].val; /* _mclass2nclassdef on <var_nmodule:AModule> */
if (unlikely(var480 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 464);
fatal_exit(1);
}
var478 = var480;
RET_LABEL479:(void)0;
}
}
{
var481 = ((val*(*)(val* self, val* p0))((((long)var478&3)?class_info[((long)var478&3)]:var478->class)->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var478, var_mclass); /* [] on <var478:Map[MClass, AClassdef]>*/
}
{
{ /* Inline modelize_class#AClassdef#all_defs (var481) on <var481:nullable Object(AClassdef)> */
var484 = var481->attrs[COLOR_nit__modelize_class__AClassdef___all_defs].val; /* _all_defs on <var481:nullable Object(AClassdef)> */
var482 = var484;
RET_LABEL483:(void)0;
}
}
if (var482 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 136);
fatal_exit(1);
} else {
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var482, var_nclassdef); /* Direct call array#Array#add on <var482:nullable Array[AClassdef]>*/
}
}
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#build_a_mclassdef for (self: ModelBuilder, AModule, AClassdef) */
void nit__modelize_class___ModelBuilder___build_a_mclassdef(val* self, val* p0, val* p1) {
val* var_nmodule /* var nmodule: AModule */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var /* : nullable MModule */;
val* var2 /* : nullable MModule */;
val* var_mmodule /* var mmodule: MModule */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
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
val* var68 /* : ANodes[AFormaldef] */;
val* var70 /* : ANodes[AFormaldef] */;
val* var71 /* : ANode */;
val* var_nfd /* var nfd: AFormaldef */;
val* var72 /* : Array[MParameterType] */;
val* var74 /* : Array[MParameterType] */;
val* var75 /* : nullable Object */;
val* var76 /* : String */;
val* var78 /* : String */;
val* var_pname /* var pname: String */;
val* var79 /* : TClassid */;
val* var81 /* : TClassid */;
val* var82 /* : String */;
short int var83 /* : Bool */;
short int var85 /* : Bool */;
short int var86 /* : Bool */;
val* var87 /* : TClassid */;
val* var89 /* : TClassid */;
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
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : NativeString */;
val* var103 /* : FlatString */;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : NativeString */;
val* var107 /* : FlatString */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : NativeString */;
val* var111 /* : FlatString */;
val* var112 /* : String */;
val* var113 /* : TClassid */;
val* var115 /* : TClassid */;
val* var116 /* : String */;
val* var117 /* : MClassDef */;
val* var119 /* : MClassDef */;
val* var120 /* : MModule */;
val* var122 /* : MModule */;
val* var123 /* : String */;
val* var124 /* : String */;
val* var125 /* : nullable AType */;
val* var127 /* : nullable AType */;
val* var_nfdt /* var nfdt: nullable AType */;
short int var128 /* : Bool */;
short int var129 /* : Bool */;
short int var131 /* : Bool */;
short int var132 /* : Bool */;
val* var133 /* : nullable MType */;
val* var_bound134 /* var bound: nullable MType */;
short int var135 /* : Bool */;
short int var136 /* : Bool */;
short int var138 /* : Bool */;
short int var140 /* : Bool */;
short int var141 /* : Bool */;
val* var143 /* : NativeArray[String] */;
static val* varonce142;
static val* varonce144;
val* var145 /* : String */;
char* var146 /* : NativeString */;
val* var147 /* : FlatString */;
static val* varonce148;
val* var149 /* : String */;
char* var150 /* : NativeString */;
val* var151 /* : FlatString */;
val* var152 /* : String */;
short int var154 /* : Bool */;
short int var155 /* : Bool */;
int cltype156;
int idtype157;
short int var_158 /* var : Bool */;
val* var159 /* : MClass */;
val* var161 /* : MClass */;
val* var162 /* : MClassKind */;
val* var164 /* : MClassKind */;
val* var165 /* : Sys */;
val* var166 /* : MClassKind */;
short int var167 /* : Bool */;
short int var169 /* : Bool */;
short int var171 /* : Bool */;
static val* varonce172;
val* var173 /* : String */;
char* var174 /* : NativeString */;
val* var175 /* : FlatString */;
val* var177 /* : NativeArray[String] */;
static val* varonce176;
static val* varonce178;
val* var179 /* : String */;
char* var180 /* : NativeString */;
val* var181 /* : FlatString */;
static val* varonce182;
val* var183 /* : String */;
char* var184 /* : NativeString */;
val* var185 /* : FlatString */;
val* var186 /* : String */;
val* var187 /* : String */;
val* var188 /* : Array[MClassDef] */;
val* var190 /* : Array[MClassDef] */;
short int var191 /* : Bool */;
short int var192 /* : Bool */;
short int var193 /* : Bool */;
short int var195 /* : Bool */;
short int var197 /* : Bool */;
val* var199 /* : NativeArray[String] */;
static val* varonce198;
static val* varonce200;
val* var201 /* : String */;
char* var202 /* : NativeString */;
val* var203 /* : FlatString */;
static val* varonce204;
val* var205 /* : String */;
char* var206 /* : NativeString */;
val* var207 /* : FlatString */;
val* var208 /* : String */;
val* var209 /* : MClassType */;
val* var211 /* : MClassType */;
val* var212 /* : MType */;
val* var_bound213 /* var bound: MType */;
val* var215 /* : MClassDef */;
val* var217 /* : MClassDef */;
val* var218 /* : MClassType */;
val* var220 /* : MClassType */;
val* var221 /* : Array[MType] */;
val* var222 /* : nullable Object */;
val* var_bound223 /* var bound: MType */;
long var225 /* : Int */;
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
val* var262 /* : FlatString */;
val* var264 /* : NativeArray[String] */;
static val* varonce263;
static val* varonce265;
val* var266 /* : String */;
char* var267 /* : NativeString */;
val* var268 /* : FlatString */;
static val* varonce269;
val* var270 /* : String */;
char* var271 /* : NativeString */;
val* var272 /* : FlatString */;
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
val* var284 /* : FlatString */;
static val* varonce285;
val* var286 /* : String */;
char* var287 /* : NativeString */;
val* var288 /* : FlatString */;
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
val* var304 /* : FlatString */;
static val* varonce305;
val* var306 /* : String */;
char* var307 /* : NativeString */;
val* var308 /* : FlatString */;
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
var2 = var_nmodule->attrs[COLOR_nit__loader__AModule___mmodule].val; /* _mmodule on <var_nmodule:AModule> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 143);
fatal_exit(1);
}
var_mmodule = var;
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "Object";
var5 = standard___standard__NativeString___to_s_with_length(var4, 6l);
var3 = var5;
varonce = var3;
}
{
var6 = nit___nit__ModelBuilder___try_get_mclass_by_name(self, var_nmodule, var_mmodule, var3);
}
var_objectclass = var6;
{
{ /* Inline modelize_class#AClassdef#mclass (var_nclassdef) on <var_nclassdef:AClassdef> */
var9 = var_nclassdef->attrs[COLOR_nit__modelize_class__AClassdef___mclass].val; /* _mclass on <var_nclassdef:AClassdef> */
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
var18 = var_nmodule->attrs[COLOR_nit__modelize_class__AModule___mclass2nclassdef].val; /* _mclass2nclassdef on <var_nmodule:AModule> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 464);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = ((val*(*)(val* self, val* p0))((((long)var16&3)?class_info[((long)var16&3)]:var16->class)->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var16, var_mclass); /* [] on <var16:Map[MClass, AClassdef]>*/
}
var_other_nclassdef = var19;
{
{ /* Inline kernel#Object#!= (var_other_nclassdef,var_nclassdef) on <var_other_nclassdef:AClassdef> */
var_other22 = var_nclassdef;
{
var23 = ((short int(*)(val* self, val* p0))(var_other_nclassdef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_other_nclassdef, var_other22); /* == on <var_other_nclassdef:AClassdef>*/
}
var24 = !var23;
var20 = var24;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
if (var20){
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype = type_nit__AStdClassdef.color;
idtype = type_nit__AStdClassdef.id;
if(cltype >= var_nclassdef->type->table_size) {
var25 = 0;
} else {
var25 = var_nclassdef->type->type_table[cltype] == idtype;
}
var26 = !var25;
if (unlikely(!var26)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 151);
fatal_exit(1);
}
{
{ /* Inline modelize_class#AClassdef#mclassdef (var_other_nclassdef) on <var_other_nclassdef:AClassdef> */
var29 = var_other_nclassdef->attrs[COLOR_nit__modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_other_nclassdef:AClassdef> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline modelize_class#AClassdef#mclassdef= (var_nclassdef,var27) on <var_nclassdef:AClassdef> */
var_nclassdef->attrs[COLOR_nit__modelize_class__AClassdef___mclassdef].val = var27; /* _mclassdef on <var_nclassdef:AClassdef> */
RET_LABEL30:(void)0;
}
}
goto RET_LABEL;
} else {
}
var31 = NEW_standard__Array(&type_standard__Array__nit__MType);
{
standard___standard__Array___standard__kernel__Object__init(var31); /* Direct call array#Array#init on <var31:Array[MType]>*/
}
var_bounds = var31;
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype34 = type_nit__AStdClassdef.color;
idtype35 = type_nit__AStdClassdef.id;
if(cltype34 >= var_nclassdef->type->table_size) {
var33 = 0;
} else {
var33 = var_nclassdef->type->type_table[cltype34] == idtype35;
}
var_ = var33;
if (var33){
{
{ /* Inline model#MClass#arity (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var38 = var_mclass->attrs[COLOR_nit__model__MClass___arity].l; /* _arity on <var_mclass:nullable MClass(MClass)> */
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
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
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
var47 = var_mclass->attrs[COLOR_nit__model__MClass___arity].l; /* _arity on <var_mclass:nullable MClass(MClass)> */
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
var_class_name54 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name54);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var55 = var_i < var_48;
var49 = var55;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
if (var49){
{
{ /* Inline parser_nodes#AStdClassdef#n_formaldefs (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var58 = var_nclassdef->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_formaldefs].val; /* _n_formaldefs on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_formaldefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1207);
fatal_exit(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
var59 = nit___nit__ANodes___standard__abstract_collection__Collection__is_empty(var56);
}
if (var59){
{
{ /* Inline model#MClass#intro (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var62 = var_mclass->attrs[COLOR_nit__model__MClass___intro].val; /* _intro on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 460);
fatal_exit(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var60) on <var60:MClassDef> */
var65 = var60->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var60:MClassDef> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
var66 = ((val*(*)(val* self))(var63->class->vft[COLOR_nit__model__MClassType__arguments]))(var63); /* arguments on <var63:MClassType>*/
}
{
var67 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var66, var_i);
}
var_bound = var67;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_bounds, var_bound); /* Direct call array#Array#add on <var_bounds:Array[MType]>*/
}
goto BREAK_label;
} else {
}
{
{ /* Inline parser_nodes#AStdClassdef#n_formaldefs (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var70 = var_nclassdef->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_formaldefs].val; /* _n_formaldefs on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_formaldefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1207);
fatal_exit(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
var71 = nit___nit__ANodes___standard__abstract_collection__SequenceRead___91d_93d(var68, var_i);
}
var_nfd = var71;
{
{ /* Inline model#MClass#mparameters (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var74 = var_mclass->attrs[COLOR_nit__model__MClass___mparameters].val; /* _mparameters on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 382);
fatal_exit(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
{
var75 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var72, var_i);
}
{
{ /* Inline model#MParameterType#name (var75) on <var75:nullable Object(MParameterType)> */
var78 = var75->attrs[COLOR_nit__model__MParameterType___name].val; /* _name on <var75:nullable Object(MParameterType)> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1481);
fatal_exit(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
var_pname = var76;
{
{ /* Inline parser_nodes#AFormaldef#n_id (var_nfd) on <var_nfd:AFormaldef> */
var81 = var_nfd->attrs[COLOR_nit__parser_nodes__AFormaldef___n_id].val; /* _n_id on <var_nfd:AFormaldef> */
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1291);
fatal_exit(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
{
var82 = nit__lexer_work___Token___text(var79);
}
{
{ /* Inline kernel#Object#!= (var82,var_pname) on <var82:String> */
var_other22 = var_pname;
{
var85 = ((short int(*)(val* self, val* p0))(var82->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var82, var_other22); /* == on <var82:String>*/
}
var86 = !var85;
var83 = var86;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
}
if (var83){
{
{ /* Inline parser_nodes#AFormaldef#n_id (var_nfd) on <var_nfd:AFormaldef> */
var89 = var_nfd->attrs[COLOR_nit__parser_nodes__AFormaldef___n_id].val; /* _n_id on <var_nfd:AFormaldef> */
if (unlikely(var89 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1291);
fatal_exit(1);
}
var87 = var89;
RET_LABEL88:(void)0;
}
}
if (unlikely(varonce90==NULL)) {
var91 = NEW_standard__NativeArray(9l, &type_standard__NativeArray__standard__String);
if (likely(varonce92!=NULL)) {
var93 = varonce92;
} else {
var94 = "Error: formal parameter type #";
var95 = standard___standard__NativeString___to_s_with_length(var94, 30l);
var93 = var95;
varonce92 = var93;
}
((struct instance_standard__NativeArray*)var91)->values[0]=var93;
if (likely(varonce96!=NULL)) {
var97 = varonce96;
} else {
var98 = " `";
var99 = standard___standard__NativeString___to_s_with_length(var98, 2l);
var97 = var99;
varonce96 = var97;
}
((struct instance_standard__NativeArray*)var91)->values[2]=var97;
if (likely(varonce100!=NULL)) {
var101 = varonce100;
} else {
var102 = "` must be named `";
var103 = standard___standard__NativeString___to_s_with_length(var102, 17l);
var101 = var103;
varonce100 = var101;
}
((struct instance_standard__NativeArray*)var91)->values[4]=var101;
if (likely(varonce104!=NULL)) {
var105 = varonce104;
} else {
var106 = "` as in the original definition in module `";
var107 = standard___standard__NativeString___to_s_with_length(var106, 43l);
var105 = var107;
varonce104 = var105;
}
((struct instance_standard__NativeArray*)var91)->values[6]=var105;
if (likely(varonce108!=NULL)) {
var109 = varonce108;
} else {
var110 = "`.";
var111 = standard___standard__NativeString___to_s_with_length(var110, 2l);
var109 = var111;
varonce108 = var109;
}
((struct instance_standard__NativeArray*)var91)->values[8]=var109;
} else {
var91 = varonce90;
varonce90 = NULL;
}
var112 = standard__string___Int___Object__to_s(var_i);
((struct instance_standard__NativeArray*)var91)->values[1]=var112;
{
{ /* Inline parser_nodes#AFormaldef#n_id (var_nfd) on <var_nfd:AFormaldef> */
var115 = var_nfd->attrs[COLOR_nit__parser_nodes__AFormaldef___n_id].val; /* _n_id on <var_nfd:AFormaldef> */
if (unlikely(var115 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1291);
fatal_exit(1);
}
var113 = var115;
RET_LABEL114:(void)0;
}
}
{
var116 = nit__lexer_work___Token___text(var113);
}
((struct instance_standard__NativeArray*)var91)->values[3]=var116;
((struct instance_standard__NativeArray*)var91)->values[5]=var_pname;
{
{ /* Inline model#MClass#intro (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var119 = var_mclass->attrs[COLOR_nit__model__MClass___intro].val; /* _intro on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var119 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 460);
fatal_exit(1);
}
var117 = var119;
RET_LABEL118:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var117) on <var117:MClassDef> */
var122 = var117->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var117:MClassDef> */
if (unlikely(var122 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var120 = var122;
RET_LABEL121:(void)0;
}
}
{
var123 = ((val*(*)(val* self))(var120->class->vft[COLOR_standard__string__Object__to_s]))(var120); /* to_s on <var120:MModule>*/
}
((struct instance_standard__NativeArray*)var91)->values[7]=var123;
{
var124 = ((val*(*)(val* self))(var91->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var91); /* native_to_s on <var91:NativeArray[String]>*/
}
varonce90 = var91;
{
nit___nit__ModelBuilder___error(self, var87, var124); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
{
{ /* Inline parser_nodes#AFormaldef#n_type (var_nfd) on <var_nfd:AFormaldef> */
var127 = var_nfd->attrs[COLOR_nit__parser_nodes__AFormaldef___n_type].val; /* _n_type on <var_nfd:AFormaldef> */
var125 = var127;
RET_LABEL126:(void)0;
}
}
var_nfdt = var125;
if (var_nfdt == NULL) {
var128 = 0; /* is null */
} else {
var128 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nfdt,((val*)NULL)) on <var_nfdt:nullable AType> */
var_other22 = ((val*)NULL);
{
var131 = ((short int(*)(val* self, val* p0))(var_nfdt->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nfdt, var_other22); /* == on <var_nfdt:nullable AType(AType)>*/
}
var132 = !var131;
var129 = var132;
goto RET_LABEL130;
RET_LABEL130:(void)0;
}
var128 = var129;
}
if (var128){
{
var133 = nit___nit__ModelBuilder___resolve_mtype_unchecked(self, var_mmodule, ((val*)NULL), var_nfdt, 0);
}
var_bound134 = var133;
if (var_bound134 == NULL) {
var135 = 1; /* is null */
} else {
var135 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_bound134,((val*)NULL)) on <var_bound134:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_bound134,var_other) on <var_bound134:nullable MType(MType)> */
var140 = var_bound134 == var_other;
var138 = var140;
goto RET_LABEL139;
RET_LABEL139:(void)0;
}
}
var136 = var138;
goto RET_LABEL137;
RET_LABEL137:(void)0;
}
var135 = var136;
}
if (var135){
goto RET_LABEL;
} else {
}
{
var141 = ((short int(*)(val* self))(var_bound134->class->vft[COLOR_nit__model__MType__need_anchor]))(var_bound134); /* need_anchor on <var_bound134:nullable MType(MType)>*/
}
if (var141){
if (unlikely(varonce142==NULL)) {
var143 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce144!=NULL)) {
var145 = varonce144;
} else {
var146 = "Error: formal parameter type `";
var147 = standard___standard__NativeString___to_s_with_length(var146, 30l);
var145 = var147;
varonce144 = var145;
}
((struct instance_standard__NativeArray*)var143)->values[0]=var145;
if (likely(varonce148!=NULL)) {
var149 = varonce148;
} else {
var150 = "` bounded with a formal parameter type.";
var151 = standard___standard__NativeString___to_s_with_length(var150, 39l);
var149 = var151;
varonce148 = var149;
}
((struct instance_standard__NativeArray*)var143)->values[2]=var149;
} else {
var143 = varonce142;
varonce142 = NULL;
}
((struct instance_standard__NativeArray*)var143)->values[1]=var_pname;
{
var152 = ((val*(*)(val* self))(var143->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var143); /* native_to_s on <var143:NativeArray[String]>*/
}
varonce142 = var143;
{
nit___nit__ModelBuilder___error(self, var_nfd, var152); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_bounds, var_bound134); /* Direct call array#Array#add on <var_bounds:Array[MType]>*/
}
{
{ /* Inline modelize_class#AFormaldef#bound= (var_nfd,var_bound134) on <var_nfd:AFormaldef> */
var_nfd->attrs[COLOR_nit__modelize_class__AFormaldef___bound].val = var_bound134; /* _bound on <var_nfd:AFormaldef> */
RET_LABEL153:(void)0;
}
}
}
/* <var_bound134:nullable MType(MType)> isa MClassType */
cltype156 = type_nit__MClassType.color;
idtype157 = type_nit__MClassType.id;
if(cltype156 >= var_bound134->type->table_size) {
var155 = 0;
} else {
var155 = var_bound134->type->type_table[cltype156] == idtype157;
}
var_158 = var155;
if (var155){
{
{ /* Inline model#MClassType#mclass (var_bound134) on <var_bound134:nullable MType(MClassType)> */
var161 = var_bound134->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_bound134:nullable MType(MClassType)> */
if (unlikely(var161 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var159 = var161;
RET_LABEL160:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var159) on <var159:MClass> */
var164 = var159->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var159:MClass> */
if (unlikely(var164 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 436);
fatal_exit(1);
}
var162 = var164;
RET_LABEL163:(void)0;
}
}
var165 = glob_sys;
{
var166 = nit__model___standard__Sys___enum_kind(var165);
}
{
{ /* Inline kernel#Object#== (var162,var166) on <var162:MClassKind> */
var_other = var166;
{
{ /* Inline kernel#Object#is_same_instance (var162,var_other) on <var162:MClassKind> */
var171 = var162 == var_other;
var169 = var171;
goto RET_LABEL170;
RET_LABEL170:(void)0;
}
}
var167 = var169;
goto RET_LABEL168;
RET_LABEL168:(void)0;
}
}
var154 = var167;
} else {
var154 = var_158;
}
if (var154){
if (likely(varonce172!=NULL)) {
var173 = varonce172;
} else {
var174 = "useless-bound";
var175 = standard___standard__NativeString___to_s_with_length(var174, 13l);
var173 = var175;
varonce172 = var173;
}
if (unlikely(varonce176==NULL)) {
var177 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce178!=NULL)) {
var179 = varonce178;
} else {
var180 = "Warning: useless formal parameter type since `";
var181 = standard___standard__NativeString___to_s_with_length(var180, 46l);
var179 = var181;
varonce178 = var179;
}
((struct instance_standard__NativeArray*)var177)->values[0]=var179;
if (likely(varonce182!=NULL)) {
var183 = varonce182;
} else {
var184 = "` cannot have subclasses.";
var185 = standard___standard__NativeString___to_s_with_length(var184, 25l);
var183 = var185;
varonce182 = var183;
}
((struct instance_standard__NativeArray*)var177)->values[2]=var183;
} else {
var177 = varonce176;
varonce176 = NULL;
}
{
var186 = ((val*(*)(val* self))(var_bound134->class->vft[COLOR_standard__string__Object__to_s]))(var_bound134); /* to_s on <var_bound134:nullable MType(MClassType)>*/
}
((struct instance_standard__NativeArray*)var177)->values[1]=var186;
{
var187 = ((val*(*)(val* self))(var177->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var177); /* native_to_s on <var177:NativeArray[String]>*/
}
varonce176 = var177;
{
nit___nit__ModelBuilder___warning(self, var_nfdt, var173, var187); /* Direct call modelbuilder_base#ModelBuilder#warning on <self:ModelBuilder>*/
}
} else {
}
} else {
{
{ /* Inline model#MClass#mclassdefs (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var190 = var_mclass->attrs[COLOR_nit__model__MClass___mclassdefs].val; /* _mclassdefs on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var190 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 454);
fatal_exit(1);
}
var188 = var190;
RET_LABEL189:(void)0;
}
}
{
var191 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var188);
}
if (var191){
if (var_objectclass == NULL) {
var192 = 1; /* is null */
} else {
var192 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_objectclass,((val*)NULL)) on <var_objectclass:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_objectclass,var_other) on <var_objectclass:nullable MClass(MClass)> */
var197 = var_objectclass == var_other;
var195 = var197;
goto RET_LABEL196;
RET_LABEL196:(void)0;
}
}
var193 = var195;
goto RET_LABEL194;
RET_LABEL194:(void)0;
}
var192 = var193;
}
if (var192){
if (unlikely(varonce198==NULL)) {
var199 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce200!=NULL)) {
var201 = varonce200;
} else {
var202 = "Error: formal parameter type `";
var203 = standard___standard__NativeString___to_s_with_length(var202, 30l);
var201 = var203;
varonce200 = var201;
}
((struct instance_standard__NativeArray*)var199)->values[0]=var201;
if (likely(varonce204!=NULL)) {
var205 = varonce204;
} else {
var206 = "` unbounded but no `Object` class exists.";
var207 = standard___standard__NativeString___to_s_with_length(var206, 41l);
var205 = var207;
varonce204 = var205;
}
((struct instance_standard__NativeArray*)var199)->values[2]=var205;
} else {
var199 = varonce198;
varonce198 = NULL;
}
((struct instance_standard__NativeArray*)var199)->values[1]=var_pname;
{
var208 = ((val*(*)(val* self))(var199->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var199); /* native_to_s on <var199:NativeArray[String]>*/
}
varonce198 = var199;
{
nit___nit__ModelBuilder___error(self, var_nfd, var208); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClass#mclass_type (var_objectclass) on <var_objectclass:nullable MClass(MClass)> */
var211 = var_objectclass->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var_objectclass:nullable MClass(MClass)> */
if (unlikely(var211 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 484);
fatal_exit(1);
}
var209 = var211;
RET_LABEL210:(void)0;
}
}
{
var212 = nit___nit__MType___as_nullable(var209);
}
var_bound213 = var212;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_bounds, var_bound213); /* Direct call array#Array#add on <var_bounds:Array[MType]>*/
}
{
{ /* Inline modelize_class#AFormaldef#bound= (var_nfd,var_bound213) on <var_nfd:AFormaldef> */
var_nfd->attrs[COLOR_nit__modelize_class__AFormaldef___bound].val = var_bound213; /* _bound on <var_nfd:AFormaldef> */
RET_LABEL214:(void)0;
}
}
} else {
{
{ /* Inline model#MClass#intro (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var217 = var_mclass->attrs[COLOR_nit__model__MClass___intro].val; /* _intro on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var217 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 460);
fatal_exit(1);
}
var215 = var217;
RET_LABEL216:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var215) on <var215:MClassDef> */
var220 = var215->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var215:MClassDef> */
if (unlikely(var220 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var218 = var220;
RET_LABEL219:(void)0;
}
}
{
var221 = ((val*(*)(val* self))(var218->class->vft[COLOR_nit__model__MClassType__arguments]))(var218); /* arguments on <var218:MClassType>*/
}
{
var222 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var221, var_i);
}
var_bound223 = var222;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_bounds, var_bound223); /* Direct call array#Array#add on <var_bounds:Array[MType]>*/
}
{
{ /* Inline modelize_class#AFormaldef#bound= (var_nfd,var_bound223) on <var_nfd:AFormaldef> */
var_nfd->attrs[COLOR_nit__modelize_class__AFormaldef___bound].val = var_bound223; /* _bound on <var_nfd:AFormaldef> */
RET_LABEL224:(void)0;
}
}
}
}
BREAK_label: (void)0;
{
var225 = standard___standard__Int___Discrete__successor(var_i, 1l);
}
var_i = var225;
} else {
goto BREAK_label226;
}
}
BREAK_label226: (void)0;
} else {
}
{
var227 = nit___nit__MClass___get_mtype(var_mclass, var_bounds);
}
var_bound_mtype = var227;
var228 = NEW_nit__MClassDef(&type_nit__MClassDef);
{
{ /* Inline parser_nodes#ANode#location (var_nclassdef) on <var_nclassdef:AClassdef> */
var231 = var_nclassdef->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var_nclassdef:AClassdef> */
if (unlikely(var231 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var229 = var231;
RET_LABEL230:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var228->class->vft[COLOR_nit__model__MClassDef__mmodule_61d]))(var228, var_mmodule); /* mmodule= on <var228:MClassDef>*/
}
{
((void(*)(val* self, val* p0))(var228->class->vft[COLOR_nit__model__MClassDef__bound_mtype_61d]))(var228, var_bound_mtype); /* bound_mtype= on <var228:MClassDef>*/
}
{
((void(*)(val* self, val* p0))(var228->class->vft[COLOR_nit__model__MClassDef__location_61d]))(var228, var229); /* location= on <var228:MClassDef>*/
}
{
((void(*)(val* self))(var228->class->vft[COLOR_standard__kernel__Object__init]))(var228); /* init on <var228:MClassDef>*/
}
var_mclassdef = var228;
{
{ /* Inline modelize_class#AClassdef#mclassdef= (var_nclassdef,var_mclassdef) on <var_nclassdef:AClassdef> */
var_nclassdef->attrs[COLOR_nit__modelize_class__AClassdef___mclassdef].val = var_mclassdef; /* _mclassdef on <var_nclassdef:AClassdef> */
RET_LABEL232:(void)0;
}
}
{
{ /* Inline modelize_class#ModelBuilder#mclassdef2nclassdef (self) on <self:ModelBuilder> */
var235 = self->attrs[COLOR_nit__modelize_class__ModelBuilder___mclassdef2nclassdef].val; /* _mclassdef2nclassdef on <self:ModelBuilder> */
if (unlikely(var235 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 449);
fatal_exit(1);
}
var233 = var235;
RET_LABEL234:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var233, var_mclassdef, var_nclassdef); /* Direct call hash_collection#HashMap#[]= on <var233:HashMap[MClassDef, AClassdef]>*/
}
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype237 = type_nit__AStdClassdef.color;
idtype238 = type_nit__AStdClassdef.id;
if(cltype237 >= var_nclassdef->type->table_size) {
var236 = 0;
} else {
var236 = var_nclassdef->type->type_table[cltype237] == idtype238;
}
if (var236){
{
{ /* Inline parser_nodes#ADefinition#n_doc (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var241 = var_nclassdef->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <var_nclassdef:AClassdef(AStdClassdef)> */
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
var245 = ((short int(*)(val* self, val* p0))(var_ndoc->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ndoc, var_other22); /* == on <var_ndoc:nullable ADoc(ADoc)>*/
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
var247 = nit__modelbuilder_base___ADoc___to_mdoc(var_ndoc);
}
var_mdoc = var247;
{
{ /* Inline mdoc#MEntity#mdoc= (var_mclassdef,var_mdoc) on <var_mclassdef:MClassDef> */
var_mclassdef->attrs[COLOR_nit__mdoc__MEntity___mdoc].val = var_mdoc; /* _mdoc on <var_mclassdef:MClassDef> */
RET_LABEL248:(void)0;
}
}
{
{ /* Inline mdoc#MDoc#original_mentity= (var_mdoc,var_mclassdef) on <var_mdoc:MDoc> */
var_mdoc->attrs[COLOR_nit__mdoc__MDoc___original_mentity].val = var_mclassdef; /* _original_mentity on <var_mdoc:MDoc> */
RET_LABEL249:(void)0;
}
}
} else {
{
var251 = nit___nit__MClassDef___is_intro(var_mclassdef);
}
var_252 = var251;
if (var251){
{
{ /* Inline model#MClass#visibility (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var255 = var_mclass->attrs[COLOR_nit__model__MClass___visibility].val; /* _visibility on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var255 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 440);
fatal_exit(1);
}
var253 = var255;
RET_LABEL254:(void)0;
}
}
var256 = glob_sys;
{
var257 = nit__model_base___standard__Sys___public_visibility(var256);
}
{
var258 = standard___standard__Comparable____62d_61d(var253, var257);
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
var262 = standard___standard__NativeString___to_s_with_length(var261, 11l);
var260 = var262;
varonce259 = var260;
}
if (unlikely(varonce263==NULL)) {
var264 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce265!=NULL)) {
var266 = varonce265;
} else {
var267 = "Documentation warning: Undocumented public class `";
var268 = standard___standard__NativeString___to_s_with_length(var267, 50l);
var266 = var268;
varonce265 = var266;
}
((struct instance_standard__NativeArray*)var264)->values[0]=var266;
if (likely(varonce269!=NULL)) {
var270 = varonce269;
} else {
var271 = "`";
var272 = standard___standard__NativeString___to_s_with_length(var271, 1l);
var270 = var272;
varonce269 = var270;
}
((struct instance_standard__NativeArray*)var264)->values[2]=var270;
} else {
var264 = varonce263;
varonce263 = NULL;
}
{
var273 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_standard__string__Object__to_s]))(var_mclass); /* to_s on <var_mclass:nullable MClass(MClass)>*/
}
((struct instance_standard__NativeArray*)var264)->values[1]=var273;
{
var274 = ((val*(*)(val* self))(var264->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var264); /* native_to_s on <var264:NativeArray[String]>*/
}
varonce263 = var264;
{
nit___nit__ModelBuilder___advice(self, var_nclassdef, var260, var274); /* Direct call modelbuilder_base#ModelBuilder#advice on <self:ModelBuilder>*/
}
} else {
}
}
} else {
}
{
var275 = nit___nit__MClassDef___is_intro(var_mclassdef);
}
if (var275){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var278 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var278 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var276 = var278;
RET_LABEL277:(void)0;
}
}
if (unlikely(varonce279==NULL)) {
var280 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce281!=NULL)) {
var282 = varonce281;
} else {
var283 = " introduces new ";
var284 = standard___standard__NativeString___to_s_with_length(var283, 16l);
var282 = var284;
varonce281 = var282;
}
((struct instance_standard__NativeArray*)var280)->values[1]=var282;
if (likely(varonce285!=NULL)) {
var286 = varonce285;
} else {
var287 = " ";
var288 = standard___standard__NativeString___to_s_with_length(var287, 1l);
var286 = var288;
varonce285 = var286;
}
((struct instance_standard__NativeArray*)var280)->values[3]=var286;
} else {
var280 = varonce279;
varonce279 = NULL;
}
{
var289 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:MClassDef>*/
}
((struct instance_standard__NativeArray*)var280)->values[0]=var289;
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var292 = var_mclass->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var292 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 436);
fatal_exit(1);
}
var290 = var292;
RET_LABEL291:(void)0;
}
}
{
var293 = ((val*(*)(val* self))(var290->class->vft[COLOR_standard__string__Object__to_s]))(var290); /* to_s on <var290:MClassKind>*/
}
((struct instance_standard__NativeArray*)var280)->values[2]=var293;
{
var294 = nit___nit__MClass___nit__model_base__MEntity__full_name(var_mclass);
}
((struct instance_standard__NativeArray*)var280)->values[4]=var294;
{
var295 = ((val*(*)(val* self))(var280->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var280); /* native_to_s on <var280:NativeArray[String]>*/
}
varonce279 = var280;
{
nit___nit__ToolContext___info(var276, var295, 3l); /* Direct call toolcontext#ToolContext#info on <var276:ToolContext>*/
}
} else {
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var298 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var298 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var296 = var298;
RET_LABEL297:(void)0;
}
}
if (unlikely(varonce299==NULL)) {
var300 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce301!=NULL)) {
var302 = varonce301;
} else {
var303 = " refine ";
var304 = standard___standard__NativeString___to_s_with_length(var303, 8l);
var302 = var304;
varonce301 = var302;
}
((struct instance_standard__NativeArray*)var300)->values[1]=var302;
if (likely(varonce305!=NULL)) {
var306 = varonce305;
} else {
var307 = " ";
var308 = standard___standard__NativeString___to_s_with_length(var307, 1l);
var306 = var308;
varonce305 = var306;
}
((struct instance_standard__NativeArray*)var300)->values[3]=var306;
} else {
var300 = varonce299;
varonce299 = NULL;
}
{
var309 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:MClassDef>*/
}
((struct instance_standard__NativeArray*)var300)->values[0]=var309;
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var312 = var_mclass->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var312 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 436);
fatal_exit(1);
}
var310 = var312;
RET_LABEL311:(void)0;
}
}
{
var313 = ((val*(*)(val* self))(var310->class->vft[COLOR_standard__string__Object__to_s]))(var310); /* to_s on <var310:MClassKind>*/
}
((struct instance_standard__NativeArray*)var300)->values[2]=var313;
{
var314 = nit___nit__MClass___nit__model_base__MEntity__full_name(var_mclass);
}
((struct instance_standard__NativeArray*)var300)->values[4]=var314;
{
var315 = ((val*(*)(val* self))(var300->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var300); /* native_to_s on <var300:NativeArray[String]>*/
}
varonce299 = var300;
{
nit___nit__ToolContext___info(var296, var315, 3l); /* Direct call toolcontext#ToolContext#info on <var296:ToolContext>*/
}
}
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#collect_a_mclassdef_inheritance for (self: ModelBuilder, AModule, AClassdef) */
void nit__modelize_class___ModelBuilder___collect_a_mclassdef_inheritance(val* self, val* p0, val* p1) {
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
val* var11 /* : FlatString */;
val* var12 /* : nullable MClass */;
val* var_objectclass /* var objectclass: nullable MClass */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : FlatString */;
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
val* var39 /* : ArrayIterator[nullable Object] */;
val* var_40 /* var : ArrayIterator[ASuperPropdef] */;
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
short int var53 /* : Bool */;
int cltype54;
int idtype55;
short int var56 /* : Bool */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
val* var60 /* : FlatString */;
val* var61 /* : MClassKind */;
val* var63 /* : MClassKind */;
val* var64 /* : MClass */;
val* var66 /* : MClass */;
val* var67 /* : MClassKind */;
val* var69 /* : MClassKind */;
short int var70 /* : Bool */;
short int var71 /* : Bool */;
val* var73 /* : NativeArray[String] */;
static val* varonce72;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
val* var77 /* : FlatString */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
val* var81 /* : FlatString */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
val* var85 /* : FlatString */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
val* var89 /* : FlatString */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : NativeString */;
val* var93 /* : FlatString */;
val* var94 /* : MClassKind */;
val* var96 /* : MClassKind */;
val* var97 /* : String */;
val* var98 /* : String */;
val* var99 /* : MClass */;
val* var101 /* : MClass */;
val* var102 /* : MClassKind */;
val* var104 /* : MClassKind */;
val* var105 /* : String */;
val* var106 /* : MClass */;
val* var108 /* : MClass */;
val* var109 /* : String */;
val* var110 /* : String */;
val* var111 /* : MClass */;
val* var113 /* : MClass */;
val* var114 /* : MClassKind */;
val* var116 /* : MClassKind */;
val* var117 /* : Sys */;
val* var118 /* : MClassKind */;
short int var119 /* : Bool */;
short int var121 /* : Bool */;
short int var123 /* : Bool */;
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
val* var152 /* : FlatString */;
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
val* var168 /* : FlatString */;
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
val* var186 /* : FlatString */;
val* var187 /* : String */;
static val* varonce188;
val* var189 /* : String */;
char* var190 /* : NativeString */;
val* var191 /* : FlatString */;
val* var192 /* : String */;
val* var193 /* : String */;
var_nmodule = p0;
var_nclassdef = p1;
{
{ /* Inline loader#AModule#mmodule (var_nmodule) on <var_nmodule:AModule> */
var2 = var_nmodule->attrs[COLOR_nit__loader__AModule___mmodule].val; /* _mmodule on <var_nmodule:AModule> */
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
var11 = standard___standard__NativeString___to_s_with_length(var10, 6l);
var9 = var11;
varonce = var9;
}
{
var12 = nit___nit__ModelBuilder___try_get_mclass_by_name(self, var_nmodule, var_mmodule, var9);
}
var_objectclass = var12;
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "Pointer";
var16 = standard___standard__NativeString___to_s_with_length(var15, 7l);
var14 = var16;
varonce13 = var14;
}
{
var17 = nit___nit__ModelBuilder___try_get_mclass_by_name(self, var_nmodule, var_mmodule, var14);
}
var_pointerclass = var17;
{
{ /* Inline modelize_class#AClassdef#mclass (var_nclassdef) on <var_nclassdef:AClassdef> */
var20 = var_nclassdef->attrs[COLOR_nit__modelize_class__AClassdef___mclass].val; /* _mclass on <var_nclassdef:AClassdef> */
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
var29 = var_nclassdef->attrs[COLOR_nit__modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_nclassdef:AClassdef> */
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
var36 = NEW_standard__Array(&type_standard__Array__nit__MClassType);
{
standard___standard__Array___standard__kernel__Object__init(var36); /* Direct call array#Array#init on <var36:Array[MClassType]>*/
}
var_supertypes = var36;
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype = type_nit__AStdClassdef.color;
idtype = type_nit__AStdClassdef.id;
if(cltype >= var_nclassdef->type->table_size) {
var37 = 0;
} else {
var37 = var_nclassdef->type->type_table[cltype] == idtype;
}
if (var37){
{
var38 = nit___nit__AStdClassdef___n_superclasses(var_nclassdef);
}
var_ = var38;
{
var39 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_40 = var39;
for(;;) {
{
var41 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_40);
}
if (var41){
{
var42 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_40);
}
var_nsc = var42;
var_specobject = 0;
{
{ /* Inline parser_nodes#ASuperPropdef#n_type (var_nsc) on <var_nsc:ASuperPropdef> */
var45 = var_nsc->attrs[COLOR_nit__parser_nodes__ASuperPropdef___n_type].val; /* _n_type on <var_nsc:ASuperPropdef> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1403);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
var_ntype = var43;
{
var46 = nit___nit__ModelBuilder___resolve_mtype_unchecked(self, var_mmodule, var_mclassdef, var_ntype, 0);
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
goto BREAK_label;
} else {
}
/* <var_mtype:nullable MType(MType)> isa MClassType */
cltype54 = type_nit__MClassType.color;
idtype55 = type_nit__MClassType.id;
if(cltype54 >= var_mtype->type->table_size) {
var53 = 0;
} else {
var53 = var_mtype->type->type_table[cltype54] == idtype55;
}
var56 = !var53;
if (var56){
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = "Error: supertypes cannot be a formal type.";
var60 = standard___standard__NativeString___to_s_with_length(var59, 42l);
var58 = var60;
varonce57 = var58;
}
{
nit___nit__ModelBuilder___error(self, var_ntype, var58); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var63 = var_mclass->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 436);
fatal_exit(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:nullable MType(MClassType)> */
var66 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:nullable MType(MClassType)> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var64) on <var64:MClass> */
var69 = var64->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var64:MClass> */
if (unlikely(var69 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 436);
fatal_exit(1);
}
var67 = var69;
RET_LABEL68:(void)0;
}
}
{
var70 = nit___nit__MClassKind___can_specialize(var61, var67);
}
var71 = !var70;
if (var71){
if (unlikely(varonce72==NULL)) {
var73 = NEW_standard__NativeArray(9l, &type_standard__NativeArray__standard__String);
if (likely(varonce74!=NULL)) {
var75 = varonce74;
} else {
var76 = "Error: ";
var77 = standard___standard__NativeString___to_s_with_length(var76, 7l);
var75 = var77;
varonce74 = var75;
}
((struct instance_standard__NativeArray*)var73)->values[0]=var75;
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = " `";
var81 = standard___standard__NativeString___to_s_with_length(var80, 2l);
var79 = var81;
varonce78 = var79;
}
((struct instance_standard__NativeArray*)var73)->values[2]=var79;
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = "` cannot specialize ";
var85 = standard___standard__NativeString___to_s_with_length(var84, 20l);
var83 = var85;
varonce82 = var83;
}
((struct instance_standard__NativeArray*)var73)->values[4]=var83;
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = " `";
var89 = standard___standard__NativeString___to_s_with_length(var88, 2l);
var87 = var89;
varonce86 = var87;
}
((struct instance_standard__NativeArray*)var73)->values[6]=var87;
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = "`.";
var93 = standard___standard__NativeString___to_s_with_length(var92, 2l);
var91 = var93;
varonce90 = var91;
}
((struct instance_standard__NativeArray*)var73)->values[8]=var91;
} else {
var73 = varonce72;
varonce72 = NULL;
}
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var96 = var_mclass->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var96 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 436);
fatal_exit(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
{
var97 = ((val*(*)(val* self))(var94->class->vft[COLOR_standard__string__Object__to_s]))(var94); /* to_s on <var94:MClassKind>*/
}
((struct instance_standard__NativeArray*)var73)->values[1]=var97;
{
var98 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_standard__string__Object__to_s]))(var_mclass); /* to_s on <var_mclass:nullable MClass(MClass)>*/
}
((struct instance_standard__NativeArray*)var73)->values[3]=var98;
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:nullable MType(MClassType)> */
var101 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:nullable MType(MClassType)> */
if (unlikely(var101 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var99 = var101;
RET_LABEL100:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var99) on <var99:MClass> */
var104 = var99->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var99:MClass> */
if (unlikely(var104 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 436);
fatal_exit(1);
}
var102 = var104;
RET_LABEL103:(void)0;
}
}
{
var105 = ((val*(*)(val* self))(var102->class->vft[COLOR_standard__string__Object__to_s]))(var102); /* to_s on <var102:MClassKind>*/
}
((struct instance_standard__NativeArray*)var73)->values[5]=var105;
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:nullable MType(MClassType)> */
var108 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:nullable MType(MClassType)> */
if (unlikely(var108 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var106 = var108;
RET_LABEL107:(void)0;
}
}
{
var109 = ((val*(*)(val* self))(var106->class->vft[COLOR_standard__string__Object__to_s]))(var106); /* to_s on <var106:MClass>*/
}
((struct instance_standard__NativeArray*)var73)->values[7]=var109;
{
var110 = ((val*(*)(val* self))(var73->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var73); /* native_to_s on <var73:NativeArray[String]>*/
}
varonce72 = var73;
{
nit___nit__ModelBuilder___error(self, var_ntype, var110); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_supertypes, var_mtype); /* Direct call array#Array#add on <var_supertypes:Array[MClassType]>*/
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:nullable MType(MClassType)> */
var113 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:nullable MType(MClassType)> */
if (unlikely(var113 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var111 = var113;
RET_LABEL112:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var111) on <var111:MClass> */
var116 = var111->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var111:MClass> */
if (unlikely(var116 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 436);
fatal_exit(1);
}
var114 = var116;
RET_LABEL115:(void)0;
}
}
var117 = glob_sys;
{
var118 = nit__model___standard__Sys___extern_kind(var117);
}
{
{ /* Inline kernel#Object#== (var114,var118) on <var114:MClassKind> */
var_other = var118;
{
{ /* Inline kernel#Object#is_same_instance (var114,var_other) on <var114:MClassKind> */
var123 = var114 == var_other;
var121 = var123;
goto RET_LABEL122;
RET_LABEL122:(void)0;
}
}
var119 = var121;
goto RET_LABEL120;
RET_LABEL120:(void)0;
}
}
if (var119){
var_specpointer = 0;
} else {
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_40); /* Direct call array#ArrayIterator#next on <var_40:ArrayIterator[ASuperPropdef]>*/
}
} else {
goto BREAK_label124;
}
}
BREAK_label124: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_40); /* Direct call array#ArrayIterator#finish on <var_40:ArrayIterator[ASuperPropdef]>*/
}
} else {
}
{
var126 = nit___nit__MClassDef___is_intro(var_mclassdef);
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
var132 = ((short int(*)(val* self, val* p0))(var_objectclass->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_objectclass, var_other131); /* == on <var_objectclass:nullable MClass(MClass)>*/
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
var137 = var_mclass->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var137 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 436);
fatal_exit(1);
}
var135 = var137;
RET_LABEL136:(void)0;
}
}
var138 = glob_sys;
{
var139 = nit__model___standard__Sys___extern_kind(var138);
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
var148 = var_mclass->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var148 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
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
var152 = standard___standard__NativeString___to_s_with_length(var151, 7l);
var150 = var152;
varonce149 = var150;
}
{
{ /* Inline kernel#Object#!= (var146,var150) on <var146:String> */
var_other131 = var150;
{
var155 = ((short int(*)(val* self, val* p0))(var146->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var146, var_other131); /* == on <var146:String>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 269);
fatal_exit(1);
} else {
{ /* Inline model#MClass#mclass_type (var_pointerclass) on <var_pointerclass:nullable MClass> */
if (unlikely(var_pointerclass == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 484);
fatal_exit(1);
}
var159 = var_pointerclass->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var_pointerclass:nullable MClass> */
if (unlikely(var159 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 484);
fatal_exit(1);
}
var157 = var159;
RET_LABEL158:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_supertypes, var157); /* Direct call array#Array#add on <var_supertypes:Array[MClassType]>*/
}
} else {
}
} else {
var_161 = var_specobject;
if (var_specobject){
{
{ /* Inline model#MClass#name (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var164 = var_mclass->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var164 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
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
var168 = standard___standard__NativeString___to_s_with_length(var167, 6l);
var166 = var168;
varonce165 = var166;
}
{
{ /* Inline kernel#Object#!= (var162,var166) on <var162:String> */
var_other131 = var166;
{
var171 = ((short int(*)(val* self, val* p0))(var162->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var162, var_other131); /* == on <var162:String>*/
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
var175 = var_objectclass->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var_objectclass:nullable MClass(MClass)> */
if (unlikely(var175 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 484);
fatal_exit(1);
}
var173 = var175;
RET_LABEL174:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_supertypes, var173); /* Direct call array#Array#add on <var_supertypes:Array[MClassType]>*/
}
} else {
}
}
} else {
}
{
nit___nit__MClassDef___set_supertypes(var_mclassdef, var_supertypes); /* Direct call model#MClassDef#set_supertypes on <var_mclassdef:nullable MClassDef(MClassDef)>*/
}
{
var176 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_supertypes);
}
var177 = !var176;
if (var177){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var180 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var180 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var178 = var180;
RET_LABEL179:(void)0;
}
}
if (unlikely(varonce181==NULL)) {
var182 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce183!=NULL)) {
var184 = varonce183;
} else {
var185 = " new super-types: ";
var186 = standard___standard__NativeString___to_s_with_length(var185, 18l);
var184 = var186;
varonce183 = var184;
}
((struct instance_standard__NativeArray*)var182)->values[1]=var184;
} else {
var182 = varonce181;
varonce181 = NULL;
}
{
var187 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:nullable MClassDef(MClassDef)>*/
}
((struct instance_standard__NativeArray*)var182)->values[0]=var187;
if (likely(varonce188!=NULL)) {
var189 = varonce188;
} else {
var190 = ", ";
var191 = standard___standard__NativeString___to_s_with_length(var190, 2l);
var189 = var191;
varonce188 = var189;
}
{
var192 = standard__string___Collection___join(var_supertypes, var189);
}
((struct instance_standard__NativeArray*)var182)->values[2]=var192;
{
var193 = ((val*(*)(val* self))(var182->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var182); /* native_to_s on <var182:NativeArray[String]>*/
}
varonce181 = var182;
{
nit___nit__ToolContext___info(var178, var193, 3l); /* Direct call toolcontext#ToolContext#info on <var178:ToolContext>*/
}
} else {
}
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#check_supertypes for (self: ModelBuilder, AModule, AClassdef) */
void nit__modelize_class___ModelBuilder___check_supertypes(val* self, val* p0, val* p1) {
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
val* var30 /* : ArrayIterator[nullable Object] */;
val* var_31 /* var : ArrayIterator[MClassType] */;
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
val* var45 /* : FlatString */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
val* var49 /* : FlatString */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
val* var53 /* : FlatString */;
val* var54 /* : String */;
val* var55 /* : String */;
val* var56 /* : String */;
var_nmodule = p0;
var_nclassdef = p1;
{
{ /* Inline loader#AModule#mmodule (var_nmodule) on <var_nmodule:AModule> */
var2 = var_nmodule->attrs[COLOR_nit__loader__AModule___mmodule].val; /* _mmodule on <var_nmodule:AModule> */
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
var11 = var_nclassdef->attrs[COLOR_nit__modelize_class__AClassdef___mclass].val; /* _mclass on <var_nclassdef:AClassdef> */
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
var20 = var_nclassdef->attrs[COLOR_nit__modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_nclassdef:AClassdef> */
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
var29 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___supertypes].val; /* _supertypes on <var_mclassdef:nullable MClassDef(MClassDef)> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supertypes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 627);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_ = var27;
{
var30 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_31 = var30;
for(;;) {
{
var32 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_31);
}
if (var32){
{
var33 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_31);
}
var_s = var33;
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var36 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:nullable MClassDef(MClassDef)> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var39 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:nullable MClassDef(MClassDef)> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
var40 = nit___nit__MType___is_subtype(var_s, var_mmodule, var34, var37);
}
if (var40){
if (unlikely(varonce==NULL)) {
var41 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "Error: inheritance loop for class `";
var45 = standard___standard__NativeString___to_s_with_length(var44, 35l);
var43 = var45;
varonce42 = var43;
}
((struct instance_standard__NativeArray*)var41)->values[0]=var43;
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = "` with type `";
var49 = standard___standard__NativeString___to_s_with_length(var48, 13l);
var47 = var49;
varonce46 = var47;
}
((struct instance_standard__NativeArray*)var41)->values[2]=var47;
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = "`.";
var53 = standard___standard__NativeString___to_s_with_length(var52, 2l);
var51 = var53;
varonce50 = var51;
}
((struct instance_standard__NativeArray*)var41)->values[4]=var51;
} else {
var41 = varonce;
varonce = NULL;
}
{
var54 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_standard__string__Object__to_s]))(var_mclass); /* to_s on <var_mclass:nullable MClass(MClass)>*/
}
((struct instance_standard__NativeArray*)var41)->values[1]=var54;
{
var55 = ((val*(*)(val* self))(var_s->class->vft[COLOR_standard__string__Object__to_s]))(var_s); /* to_s on <var_s:MClassType>*/
}
((struct instance_standard__NativeArray*)var41)->values[3]=var55;
{
var56 = ((val*(*)(val* self))(var41->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var41); /* native_to_s on <var41:NativeArray[String]>*/
}
varonce = var41;
{
nit___nit__ModelBuilder___error(self, var_nclassdef, var56); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_31); /* Direct call array#ArrayIterator#next on <var_31:ArrayIterator[MClassType]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_31); /* Direct call array#ArrayIterator#finish on <var_31:ArrayIterator[MClassType]>*/
}
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#build_classes for (self: ModelBuilder, AModule) */
void nit__modelize_class___ModelBuilder___build_classes(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
val* var /* : ToolContext */;
val* var2 /* : ToolContext */;
long var3 /* : Int */;
long var5 /* : Int */;
long var_errcount /* var errcount: Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var10 /* : nullable MModule */;
val* var12 /* : nullable MModule */;
val* var_mmodule /* var mmodule: nullable MModule */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : POSetElement[MModule] */;
val* var21 /* : POSetElement[MModule] */;
val* var22 /* : Collection[nullable Object] */;
val* var_ /* var : Collection[MModule] */;
val* var23 /* : Iterator[nullable Object] */;
val* var_24 /* var : Iterator[MModule] */;
short int var25 /* : Bool */;
val* var26 /* : nullable Object */;
val* var_imp /* var imp: MModule */;
val* var27 /* : nullable AModule */;
val* var_nimp /* var nimp: nullable AModule */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var_other31 /* var other: nullable Object */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
val* var34 /* : ToolContext */;
val* var36 /* : ToolContext */;
long var37 /* : Int */;
long var39 /* : Int */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
val* var44 /* : ANodes[AClassdef] */;
val* var46 /* : ANodes[AClassdef] */;
val* var_47 /* var : ANodes[AClassdef] */;
val* var48 /* : Iterator[ANode] */;
val* var_49 /* var : Iterator[AClassdef] */;
short int var50 /* : Bool */;
val* var51 /* : nullable Object */;
val* var_nclassdef /* var nclassdef: AClassdef */;
short int var52 /* : Bool */;
int cltype;
int idtype;
short int var53 /* : Bool */;
val* var56 /* : ANodes[AClassdef] */;
val* var58 /* : ANodes[AClassdef] */;
val* var_59 /* var : ANodes[AClassdef] */;
val* var60 /* : Iterator[ANode] */;
val* var_61 /* var : Iterator[AClassdef] */;
short int var62 /* : Bool */;
val* var63 /* : nullable Object */;
val* var_nclassdef64 /* var nclassdef: AClassdef */;
short int var65 /* : Bool */;
int cltype66;
int idtype67;
val* var70 /* : ToolContext */;
val* var72 /* : ToolContext */;
long var73 /* : Int */;
long var75 /* : Int */;
short int var76 /* : Bool */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
val* var80 /* : ANodes[AClassdef] */;
val* var82 /* : ANodes[AClassdef] */;
val* var_83 /* var : ANodes[AClassdef] */;
val* var84 /* : Iterator[ANode] */;
val* var_85 /* var : Iterator[AClassdef] */;
short int var86 /* : Bool */;
val* var87 /* : nullable Object */;
val* var_nclassdef88 /* var nclassdef: AClassdef */;
short int var89 /* : Bool */;
int cltype90;
int idtype91;
short int var92 /* : Bool */;
val* var95 /* : ANodes[AClassdef] */;
val* var97 /* : ANodes[AClassdef] */;
val* var_98 /* var : ANodes[AClassdef] */;
val* var99 /* : Iterator[ANode] */;
val* var_100 /* var : Iterator[AClassdef] */;
short int var101 /* : Bool */;
val* var102 /* : nullable Object */;
val* var_nclassdef103 /* var nclassdef: AClassdef */;
short int var104 /* : Bool */;
int cltype105;
int idtype106;
val* var109 /* : ToolContext */;
val* var111 /* : ToolContext */;
long var112 /* : Int */;
long var114 /* : Int */;
short int var115 /* : Bool */;
short int var117 /* : Bool */;
short int var118 /* : Bool */;
val* var119 /* : ANodes[AClassdef] */;
val* var121 /* : ANodes[AClassdef] */;
val* var_122 /* var : ANodes[AClassdef] */;
val* var123 /* : Iterator[ANode] */;
val* var_124 /* var : Iterator[AClassdef] */;
short int var125 /* : Bool */;
val* var126 /* : nullable Object */;
val* var_nclassdef127 /* var nclassdef: AClassdef */;
val* var129 /* : ToolContext */;
val* var131 /* : ToolContext */;
long var132 /* : Int */;
long var134 /* : Int */;
short int var135 /* : Bool */;
short int var137 /* : Bool */;
short int var138 /* : Bool */;
val* var139 /* : Array[MClassDef] */;
val* var141 /* : Array[MClassDef] */;
val* var_142 /* var : Array[MClassDef] */;
val* var143 /* : ArrayIterator[nullable Object] */;
val* var_144 /* var : ArrayIterator[MClassDef] */;
short int var145 /* : Bool */;
val* var146 /* : nullable Object */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var148 /* : ToolContext */;
val* var150 /* : ToolContext */;
long var151 /* : Int */;
long var153 /* : Int */;
short int var154 /* : Bool */;
short int var156 /* : Bool */;
short int var157 /* : Bool */;
val* var158 /* : ANodes[AClassdef] */;
val* var160 /* : ANodes[AClassdef] */;
val* var_161 /* var : ANodes[AClassdef] */;
val* var162 /* : Iterator[ANode] */;
val* var_163 /* var : Iterator[AClassdef] */;
short int var164 /* : Bool */;
val* var165 /* : nullable Object */;
val* var_nclassdef166 /* var nclassdef: AClassdef */;
val* var168 /* : ToolContext */;
val* var170 /* : ToolContext */;
long var171 /* : Int */;
long var173 /* : Int */;
short int var174 /* : Bool */;
short int var176 /* : Bool */;
short int var177 /* : Bool */;
val* var178 /* : ANodes[AClassdef] */;
val* var180 /* : ANodes[AClassdef] */;
val* var_181 /* var : ANodes[AClassdef] */;
val* var182 /* : Iterator[ANode] */;
val* var_183 /* var : Iterator[AClassdef] */;
short int var184 /* : Bool */;
val* var185 /* : nullable Object */;
val* var_nclassdef186 /* var nclassdef: AClassdef */;
short int var187 /* : Bool */;
int cltype188;
int idtype189;
val* var190 /* : nullable MClassDef */;
val* var192 /* : nullable MClassDef */;
val* var_mclassdef193 /* var mclassdef: nullable MClassDef */;
val* var194 /* : ANodes[AFormaldef] */;
val* var196 /* : ANodes[AFormaldef] */;
val* var_197 /* var : ANodes[AFormaldef] */;
val* var198 /* : Iterator[ANode] */;
val* var_199 /* var : Iterator[AFormaldef] */;
short int var200 /* : Bool */;
val* var201 /* : nullable Object */;
val* var_nfd /* var nfd: AFormaldef */;
val* var202 /* : nullable AType */;
val* var204 /* : nullable AType */;
val* var_nfdt /* var nfdt: nullable AType */;
short int var205 /* : Bool */;
short int var206 /* : Bool */;
short int var207 /* : Bool */;
short int var209 /* : Bool */;
short int var210 /* : Bool */;
short int var_211 /* var : Bool */;
val* var212 /* : nullable MType */;
val* var214 /* : nullable MType */;
short int var215 /* : Bool */;
short int var216 /* : Bool */;
short int var218 /* : Bool */;
short int var219 /* : Bool */;
val* var220 /* : nullable MType */;
val* var_bound /* var bound: nullable MType */;
short int var221 /* : Bool */;
short int var222 /* : Bool */;
short int var224 /* : Bool */;
short int var226 /* : Bool */;
val* var228 /* : Array[ASuperPropdef] */;
val* var_229 /* var : Array[ASuperPropdef] */;
val* var230 /* : ArrayIterator[nullable Object] */;
val* var_231 /* var : ArrayIterator[ASuperPropdef] */;
short int var232 /* : Bool */;
val* var233 /* : nullable Object */;
val* var_nsc /* var nsc: ASuperPropdef */;
val* var234 /* : AType */;
val* var236 /* : AType */;
val* var_ntype /* var ntype: AType */;
val* var237 /* : nullable MType */;
val* var239 /* : nullable MType */;
short int var240 /* : Bool */;
short int var241 /* : Bool */;
short int var243 /* : Bool */;
short int var244 /* : Bool */;
val* var245 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var246 /* : Bool */;
short int var247 /* : Bool */;
short int var249 /* : Bool */;
short int var251 /* : Bool */;
val* var254 /* : ToolContext */;
val* var256 /* : ToolContext */;
long var257 /* : Int */;
long var259 /* : Int */;
short int var260 /* : Bool */;
short int var262 /* : Bool */;
short int var263 /* : Bool */;
val* var264 /* : ANodes[AClassdef] */;
val* var266 /* : ANodes[AClassdef] */;
val* var_267 /* var : ANodes[AClassdef] */;
val* var268 /* : Iterator[ANode] */;
val* var_269 /* var : Iterator[AClassdef] */;
short int var270 /* : Bool */;
val* var271 /* : nullable Object */;
val* var_nclassdef272 /* var nclassdef: AClassdef */;
val* var273 /* : nullable MClassDef */;
val* var275 /* : nullable MClassDef */;
val* var_mclassdef276 /* var mclassdef: nullable MClassDef */;
short int var277 /* : Bool */;
short int var278 /* : Bool */;
short int var280 /* : Bool */;
short int var282 /* : Bool */;
val* var284 /* : HashMap[MClass, MClassType] */;
val* var_superclasses /* var superclasses: HashMap[MClass, MClassType] */;
val* var285 /* : nullable POSetElement[MClassDef] */;
val* var287 /* : nullable POSetElement[MClassDef] */;
val* var288 /* : Collection[nullable Object] */;
val* var_289 /* var : Collection[MClassDef] */;
val* var290 /* : Iterator[nullable Object] */;
val* var_291 /* var : Iterator[MClassDef] */;
short int var292 /* : Bool */;
val* var293 /* : nullable Object */;
val* var_scd /* var scd: MClassDef */;
val* var294 /* : Array[MClassType] */;
val* var296 /* : Array[MClassType] */;
val* var_297 /* var : Array[MClassType] */;
val* var298 /* : ArrayIterator[nullable Object] */;
val* var_299 /* var : ArrayIterator[MClassType] */;
short int var300 /* : Bool */;
val* var301 /* : nullable Object */;
val* var_st /* var st: MClassType */;
val* var302 /* : MClass */;
val* var304 /* : MClass */;
short int var305 /* : Bool */;
short int var306 /* : Bool */;
val* var307 /* : MClass */;
val* var309 /* : MClass */;
val* var310 /* : MClass */;
val* var312 /* : MClass */;
val* var313 /* : nullable Object */;
short int var314 /* : Bool */;
short int var316 /* : Bool */;
short int var317 /* : Bool */;
val* var318 /* : MClass */;
val* var320 /* : MClass */;
val* var321 /* : nullable Object */;
val* var322 /* : MClass */;
val* var324 /* : MClass */;
val* var325 /* : MClassType */;
val* var327 /* : MClassType */;
val* var328 /* : MClassType */;
val* var330 /* : MClassType */;
val* var331 /* : MType */;
val* var_st1 /* var st1: MClassType */;
val* var332 /* : MClass */;
val* var334 /* : MClass */;
val* var335 /* : MClassType */;
val* var337 /* : MClassType */;
val* var338 /* : MClassType */;
val* var340 /* : MClassType */;
val* var341 /* : MType */;
val* var_st2 /* var st2: MClassType */;
short int var342 /* : Bool */;
short int var344 /* : Bool */;
short int var345 /* : Bool */;
val* var346 /* : NativeArray[String] */;
static val* varonce;
static val* varonce347;
val* var348 /* : String */;
char* var349 /* : NativeString */;
val* var350 /* : FlatString */;
static val* varonce351;
val* var352 /* : String */;
char* var353 /* : NativeString */;
val* var354 /* : FlatString */;
static val* varonce355;
val* var356 /* : String */;
char* var357 /* : NativeString */;
val* var358 /* : FlatString */;
static val* varonce359;
val* var360 /* : String */;
char* var361 /* : NativeString */;
val* var362 /* : FlatString */;
val* var363 /* : MClass */;
val* var365 /* : MClass */;
val* var366 /* : String */;
val* var367 /* : String */;
val* var368 /* : String */;
val* var369 /* : String */;
val* var373 /* : ToolContext */;
val* var375 /* : ToolContext */;
long var376 /* : Int */;
long var378 /* : Int */;
short int var379 /* : Bool */;
short int var381 /* : Bool */;
short int var382 /* : Bool */;
val* var383 /* : ANodes[AClassdef] */;
val* var385 /* : ANodes[AClassdef] */;
val* var_386 /* var : ANodes[AClassdef] */;
val* var387 /* : Iterator[ANode] */;
val* var_388 /* var : Iterator[AClassdef] */;
short int var389 /* : Bool */;
val* var390 /* : nullable Object */;
val* var_nclassdef391 /* var nclassdef: AClassdef */;
short int var392 /* : Bool */;
int cltype393;
int idtype394;
short int var395 /* : Bool */;
val* var397 /* : nullable MClassDef */;
val* var399 /* : nullable MClassDef */;
val* var_mclassdef400 /* var mclassdef: nullable MClassDef */;
short int var401 /* : Bool */;
short int var402 /* : Bool */;
short int var404 /* : Bool */;
short int var406 /* : Bool */;
val* var407 /* : Array[MClass] */;
val* var_parents /* var parents: Array[MClass] */;
val* var408 /* : nullable POSetElement[MClassDef] */;
val* var410 /* : nullable POSetElement[MClassDef] */;
val* var411 /* : Collection[nullable Object] */;
val* var_412 /* var : Collection[MClassDef] */;
val* var413 /* : Iterator[nullable Object] */;
val* var_414 /* var : Iterator[MClassDef] */;
short int var415 /* : Bool */;
val* var416 /* : nullable Object */;
val* var_sup /* var sup: MClassDef */;
val* var417 /* : MClass */;
val* var419 /* : MClass */;
val* var421 /* : ArrayMap[MClass, AType] */;
val* var_seen_parents /* var seen_parents: ArrayMap[MClass, AType] */;
static val* varonce423;
val* var424 /* : String */;
char* var425 /* : NativeString */;
val* var426 /* : FlatString */;
val* var427 /* : nullable MClass */;
val* var_objectclass /* var objectclass: nullable MClass */;
val* var428 /* : Array[ASuperPropdef] */;
val* var_429 /* var : Array[ASuperPropdef] */;
val* var430 /* : ArrayIterator[nullable Object] */;
val* var_431 /* var : ArrayIterator[ASuperPropdef] */;
short int var432 /* : Bool */;
val* var433 /* : nullable Object */;
val* var_nsc434 /* var nsc: ASuperPropdef */;
val* var435 /* : AType */;
val* var437 /* : AType */;
val* var_ntype438 /* var ntype: AType */;
val* var439 /* : nullable MType */;
val* var441 /* : nullable MType */;
val* var_mtype442 /* var mtype: nullable MType */;
short int var443 /* : Bool */;
short int var444 /* : Bool */;
short int var446 /* : Bool */;
short int var448 /* : Bool */;
short int var450 /* : Bool */;
int cltype451;
int idtype452;
val* var453 /* : MClass */;
val* var455 /* : MClass */;
val* var_sc /* var sc: MClass */;
short int var456 /* : Bool */;
short int var457 /* : Bool */;
short int var458 /* : Bool */;
short int var_459 /* var : Bool */;
short int var460 /* : Bool */;
short int var462 /* : Bool */;
short int var464 /* : Bool */;
short int var465 /* : Bool */;
val* var466 /* : Location */;
val* var468 /* : Location */;
val* var469 /* : nullable SourceFile */;
val* var471 /* : nullable SourceFile */;
short int var472 /* : Bool */;
short int var473 /* : Bool */;
short int var475 /* : Bool */;
short int var476 /* : Bool */;
short int var_477 /* var : Bool */;
val* var478 /* : Location */;
val* var480 /* : Location */;
val* var481 /* : nullable SourceFile */;
val* var483 /* : nullable SourceFile */;
val* var484 /* : String */;
val* var486 /* : String */;
short int var487 /* : Bool */;
short int var488 /* : Bool */;
static val* varonce489;
val* var490 /* : String */;
char* var491 /* : NativeString */;
val* var492 /* : FlatString */;
val* var494 /* : NativeArray[String] */;
static val* varonce493;
static val* varonce495;
val* var496 /* : String */;
char* var497 /* : NativeString */;
val* var498 /* : FlatString */;
static val* varonce499;
val* var500 /* : String */;
char* var501 /* : NativeString */;
val* var502 /* : FlatString */;
static val* varonce503;
val* var504 /* : String */;
char* var505 /* : NativeString */;
val* var506 /* : FlatString */;
val* var507 /* : String */;
val* var508 /* : MClass */;
val* var510 /* : MClass */;
val* var511 /* : String */;
val* var512 /* : String */;
short int var513 /* : Bool */;
short int var514 /* : Bool */;
static val* varonce515;
val* var516 /* : String */;
char* var517 /* : NativeString */;
val* var518 /* : FlatString */;
val* var520 /* : NativeArray[String] */;
static val* varonce519;
static val* varonce521;
val* var522 /* : String */;
char* var523 /* : NativeString */;
val* var524 /* : FlatString */;
static val* varonce525;
val* var526 /* : String */;
char* var527 /* : NativeString */;
val* var528 /* : FlatString */;
static val* varonce529;
val* var530 /* : String */;
char* var531 /* : NativeString */;
val* var532 /* : FlatString */;
val* var533 /* : String */;
val* var534 /* : MClass */;
val* var536 /* : MClass */;
val* var537 /* : String */;
val* var538 /* : String */;
var_nmodule = p0;
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var2 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count (var) on <var:ToolContext> */
var5 = var->attrs[COLOR_nit__toolcontext__ToolContext___error_count].l; /* _error_count on <var:ToolContext> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_errcount = var3;
{
{ /* Inline modelize_class#AModule#build_classes_is_done (var_nmodule) on <var_nmodule:AModule> */
var8 = var_nmodule->attrs[COLOR_nit__modelize_class__AModule___build_classes_is_done].s; /* _build_classes_is_done on <var_nmodule:AModule> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (var6){
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_class#AModule#build_classes_is_done= (var_nmodule,1) on <var_nmodule:AModule> */
var_nmodule->attrs[COLOR_nit__modelize_class__AModule___build_classes_is_done].s = 1; /* _build_classes_is_done on <var_nmodule:AModule> */
RET_LABEL9:(void)0;
}
}
{
{ /* Inline loader#AModule#mmodule (var_nmodule) on <var_nmodule:AModule> */
var12 = var_nmodule->attrs[COLOR_nit__loader__AModule___mmodule].val; /* _mmodule on <var_nmodule:AModule> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_mmodule = var10;
if (var_mmodule == NULL) {
var13 = 1; /* is null */
} else {
var13 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mmodule,((val*)NULL)) on <var_mmodule:nullable MModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mmodule,var_other) on <var_mmodule:nullable MModule(MModule)> */
var18 = var_mmodule == var_other;
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
{ /* Inline mmodule#MModule#in_importation (var_mmodule) on <var_mmodule:nullable MModule(MModule)> */
var21 = var_mmodule->attrs[COLOR_nit__mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:nullable MModule(MModule)> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 96);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = poset___poset__POSetElement___direct_greaters(var19);
}
var_ = var22;
{
var23 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[MModule]>*/
}
var_24 = var23;
for(;;) {
{
var25 = ((short int(*)(val* self))((((long)var_24&3)?class_info[((long)var_24&3)]:var_24->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_24); /* is_ok on <var_24:Iterator[MModule]>*/
}
if (var25){
{
var26 = ((val*(*)(val* self))((((long)var_24&3)?class_info[((long)var_24&3)]:var_24->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_24); /* item on <var_24:Iterator[MModule]>*/
}
var_imp = var26;
{
var27 = nit__loader___ModelBuilder___mmodule2node(self, var_imp);
}
var_nimp = var27;
if (var_nimp == NULL) {
var28 = 0; /* is null */
} else {
var28 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nimp,((val*)NULL)) on <var_nimp:nullable AModule> */
var_other31 = ((val*)NULL);
{
var32 = ((short int(*)(val* self, val* p0))(var_nimp->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nimp, var_other31); /* == on <var_nimp:nullable AModule(AModule)>*/
}
var33 = !var32;
var29 = var33;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
var28 = var29;
}
if (var28){
{
nit__modelize_class___ModelBuilder___build_classes(self, var_nimp); /* Direct call modelize_class#ModelBuilder#build_classes on <self:ModelBuilder>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_24&3)?class_info[((long)var_24&3)]:var_24->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_24); /* next on <var_24:Iterator[MModule]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_24&3)?class_info[((long)var_24&3)]:var_24->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_24); /* finish on <var_24:Iterator[MModule]>*/
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var36 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count (var34) on <var34:ToolContext> */
var39 = var34->attrs[COLOR_nit__toolcontext__ToolContext___error_count].l; /* _error_count on <var34:ToolContext> */
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var37) on <var_errcount:Int> */
var42 = var_errcount == var37;
var43 = !var42;
var40 = var43;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
if (var40){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var46 = var_nmodule->attrs[COLOR_nit__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1096);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
var_47 = var44;
{
var48 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_47);
}
var_49 = var48;
for(;;) {
{
var50 = ((short int(*)(val* self))((((long)var_49&3)?class_info[((long)var_49&3)]:var_49->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_49); /* is_ok on <var_49:Iterator[AClassdef]>*/
}
if (var50){
{
var51 = ((val*(*)(val* self))((((long)var_49&3)?class_info[((long)var_49&3)]:var_49->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_49); /* item on <var_49:Iterator[AClassdef]>*/
}
var_nclassdef = var51;
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype = type_nit__AStdClassdef.color;
idtype = type_nit__AStdClassdef.id;
if(cltype >= var_nclassdef->type->table_size) {
var52 = 0;
} else {
var52 = var_nclassdef->type->type_table[cltype] == idtype;
}
var53 = !var52;
if (var53){
goto BREAK_label54;
} else {
}
{
nit__modelize_class___ModelBuilder___build_a_mclass(self, var_nmodule, var_nclassdef); /* Direct call modelize_class#ModelBuilder#build_a_mclass on <self:ModelBuilder>*/
}
BREAK_label54: (void)0;
{
((void(*)(val* self))((((long)var_49&3)?class_info[((long)var_49&3)]:var_49->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_49); /* next on <var_49:Iterator[AClassdef]>*/
}
} else {
goto BREAK_label55;
}
}
BREAK_label55: (void)0;
{
((void(*)(val* self))((((long)var_49&3)?class_info[((long)var_49&3)]:var_49->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_49); /* finish on <var_49:Iterator[AClassdef]>*/
}
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var58 = var_nmodule->attrs[COLOR_nit__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1096);
fatal_exit(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
var_59 = var56;
{
var60 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_59);
}
var_61 = var60;
for(;;) {
{
var62 = ((short int(*)(val* self))((((long)var_61&3)?class_info[((long)var_61&3)]:var_61->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_61); /* is_ok on <var_61:Iterator[AClassdef]>*/
}
if (var62){
{
var63 = ((val*(*)(val* self))((((long)var_61&3)?class_info[((long)var_61&3)]:var_61->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_61); /* item on <var_61:Iterator[AClassdef]>*/
}
var_nclassdef64 = var63;
/* <var_nclassdef64:AClassdef> isa AStdClassdef */
cltype66 = type_nit__AStdClassdef.color;
idtype67 = type_nit__AStdClassdef.id;
if(cltype66 >= var_nclassdef64->type->table_size) {
var65 = 0;
} else {
var65 = var_nclassdef64->type->type_table[cltype66] == idtype67;
}
if (var65){
goto BREAK_label68;
} else {
}
{
nit__modelize_class___ModelBuilder___build_a_mclass(self, var_nmodule, var_nclassdef64); /* Direct call modelize_class#ModelBuilder#build_a_mclass on <self:ModelBuilder>*/
}
BREAK_label68: (void)0;
{
((void(*)(val* self))((((long)var_61&3)?class_info[((long)var_61&3)]:var_61->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_61); /* next on <var_61:Iterator[AClassdef]>*/
}
} else {
goto BREAK_label69;
}
}
BREAK_label69: (void)0;
{
((void(*)(val* self))((((long)var_61&3)?class_info[((long)var_61&3)]:var_61->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_61); /* finish on <var_61:Iterator[AClassdef]>*/
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var72 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var72 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count (var70) on <var70:ToolContext> */
var75 = var70->attrs[COLOR_nit__toolcontext__ToolContext___error_count].l; /* _error_count on <var70:ToolContext> */
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var73) on <var_errcount:Int> */
var78 = var_errcount == var73;
var79 = !var78;
var76 = var79;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
}
if (var76){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var82 = var_nmodule->attrs[COLOR_nit__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var82 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1096);
fatal_exit(1);
}
var80 = var82;
RET_LABEL81:(void)0;
}
}
var_83 = var80;
{
var84 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_83);
}
var_85 = var84;
for(;;) {
{
var86 = ((short int(*)(val* self))((((long)var_85&3)?class_info[((long)var_85&3)]:var_85->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_85); /* is_ok on <var_85:Iterator[AClassdef]>*/
}
if (var86){
{
var87 = ((val*(*)(val* self))((((long)var_85&3)?class_info[((long)var_85&3)]:var_85->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_85); /* item on <var_85:Iterator[AClassdef]>*/
}
var_nclassdef88 = var87;
/* <var_nclassdef88:AClassdef> isa AStdClassdef */
cltype90 = type_nit__AStdClassdef.color;
idtype91 = type_nit__AStdClassdef.id;
if(cltype90 >= var_nclassdef88->type->table_size) {
var89 = 0;
} else {
var89 = var_nclassdef88->type->type_table[cltype90] == idtype91;
}
var92 = !var89;
if (var92){
goto BREAK_label93;
} else {
}
{
nit__modelize_class___ModelBuilder___build_a_mclassdef(self, var_nmodule, var_nclassdef88); /* Direct call modelize_class#ModelBuilder#build_a_mclassdef on <self:ModelBuilder>*/
}
BREAK_label93: (void)0;
{
((void(*)(val* self))((((long)var_85&3)?class_info[((long)var_85&3)]:var_85->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_85); /* next on <var_85:Iterator[AClassdef]>*/
}
} else {
goto BREAK_label94;
}
}
BREAK_label94: (void)0;
{
((void(*)(val* self))((((long)var_85&3)?class_info[((long)var_85&3)]:var_85->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_85); /* finish on <var_85:Iterator[AClassdef]>*/
}
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var97 = var_nmodule->attrs[COLOR_nit__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var97 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1096);
fatal_exit(1);
}
var95 = var97;
RET_LABEL96:(void)0;
}
}
var_98 = var95;
{
var99 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_98);
}
var_100 = var99;
for(;;) {
{
var101 = ((short int(*)(val* self))((((long)var_100&3)?class_info[((long)var_100&3)]:var_100->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_100); /* is_ok on <var_100:Iterator[AClassdef]>*/
}
if (var101){
{
var102 = ((val*(*)(val* self))((((long)var_100&3)?class_info[((long)var_100&3)]:var_100->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_100); /* item on <var_100:Iterator[AClassdef]>*/
}
var_nclassdef103 = var102;
/* <var_nclassdef103:AClassdef> isa AStdClassdef */
cltype105 = type_nit__AStdClassdef.color;
idtype106 = type_nit__AStdClassdef.id;
if(cltype105 >= var_nclassdef103->type->table_size) {
var104 = 0;
} else {
var104 = var_nclassdef103->type->type_table[cltype105] == idtype106;
}
if (var104){
goto BREAK_label107;
} else {
}
{
nit__modelize_class___ModelBuilder___build_a_mclassdef(self, var_nmodule, var_nclassdef103); /* Direct call modelize_class#ModelBuilder#build_a_mclassdef on <self:ModelBuilder>*/
}
BREAK_label107: (void)0;
{
((void(*)(val* self))((((long)var_100&3)?class_info[((long)var_100&3)]:var_100->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_100); /* next on <var_100:Iterator[AClassdef]>*/
}
} else {
goto BREAK_label108;
}
}
BREAK_label108: (void)0;
{
((void(*)(val* self))((((long)var_100&3)?class_info[((long)var_100&3)]:var_100->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_100); /* finish on <var_100:Iterator[AClassdef]>*/
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var111 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var111 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var109 = var111;
RET_LABEL110:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count (var109) on <var109:ToolContext> */
var114 = var109->attrs[COLOR_nit__toolcontext__ToolContext___error_count].l; /* _error_count on <var109:ToolContext> */
var112 = var114;
RET_LABEL113:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var112) on <var_errcount:Int> */
var117 = var_errcount == var112;
var118 = !var117;
var115 = var118;
goto RET_LABEL116;
RET_LABEL116:(void)0;
}
}
if (var115){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var121 = var_nmodule->attrs[COLOR_nit__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var121 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1096);
fatal_exit(1);
}
var119 = var121;
RET_LABEL120:(void)0;
}
}
var_122 = var119;
{
var123 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_122);
}
var_124 = var123;
for(;;) {
{
var125 = ((short int(*)(val* self))((((long)var_124&3)?class_info[((long)var_124&3)]:var_124->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_124); /* is_ok on <var_124:Iterator[AClassdef]>*/
}
if (var125){
{
var126 = ((val*(*)(val* self))((((long)var_124&3)?class_info[((long)var_124&3)]:var_124->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_124); /* item on <var_124:Iterator[AClassdef]>*/
}
var_nclassdef127 = var126;
{
nit__modelize_class___ModelBuilder___collect_a_mclassdef_inheritance(self, var_nmodule, var_nclassdef127); /* Direct call modelize_class#ModelBuilder#collect_a_mclassdef_inheritance on <self:ModelBuilder>*/
}
{
((void(*)(val* self))((((long)var_124&3)?class_info[((long)var_124&3)]:var_124->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_124); /* next on <var_124:Iterator[AClassdef]>*/
}
} else {
goto BREAK_label128;
}
}
BREAK_label128: (void)0;
{
((void(*)(val* self))((((long)var_124&3)?class_info[((long)var_124&3)]:var_124->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_124); /* finish on <var_124:Iterator[AClassdef]>*/
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var131 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var131 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var129 = var131;
RET_LABEL130:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count (var129) on <var129:ToolContext> */
var134 = var129->attrs[COLOR_nit__toolcontext__ToolContext___error_count].l; /* _error_count on <var129:ToolContext> */
var132 = var134;
RET_LABEL133:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var132) on <var_errcount:Int> */
var137 = var_errcount == var132;
var138 = !var137;
var135 = var138;
goto RET_LABEL136;
RET_LABEL136:(void)0;
}
}
if (var135){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MModule#mclassdefs (var_mmodule) on <var_mmodule:nullable MModule(MModule)> */
var141 = var_mmodule->attrs[COLOR_nit__model__MModule___mclassdefs].val; /* _mclassdefs on <var_mmodule:nullable MModule(MModule)> */
if (unlikely(var141 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 131);
fatal_exit(1);
}
var139 = var141;
RET_LABEL140:(void)0;
}
}
var_142 = var139;
{
var143 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_142);
}
var_144 = var143;
for(;;) {
{
var145 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_144);
}
if (var145){
{
var146 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_144);
}
var_mclassdef = var146;
{
nit___nit__MClassDef___add_in_hierarchy(var_mclassdef); /* Direct call model#MClassDef#add_in_hierarchy on <var_mclassdef:MClassDef>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_144); /* Direct call array#ArrayIterator#next on <var_144:ArrayIterator[MClassDef]>*/
}
} else {
goto BREAK_label147;
}
}
BREAK_label147: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_144); /* Direct call array#ArrayIterator#finish on <var_144:ArrayIterator[MClassDef]>*/
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var150 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var150 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var148 = var150;
RET_LABEL149:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count (var148) on <var148:ToolContext> */
var153 = var148->attrs[COLOR_nit__toolcontext__ToolContext___error_count].l; /* _error_count on <var148:ToolContext> */
var151 = var153;
RET_LABEL152:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var151) on <var_errcount:Int> */
var156 = var_errcount == var151;
var157 = !var156;
var154 = var157;
goto RET_LABEL155;
RET_LABEL155:(void)0;
}
}
if (var154){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var160 = var_nmodule->attrs[COLOR_nit__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var160 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1096);
fatal_exit(1);
}
var158 = var160;
RET_LABEL159:(void)0;
}
}
var_161 = var158;
{
var162 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_161);
}
var_163 = var162;
for(;;) {
{
var164 = ((short int(*)(val* self))((((long)var_163&3)?class_info[((long)var_163&3)]:var_163->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_163); /* is_ok on <var_163:Iterator[AClassdef]>*/
}
if (var164){
{
var165 = ((val*(*)(val* self))((((long)var_163&3)?class_info[((long)var_163&3)]:var_163->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_163); /* item on <var_163:Iterator[AClassdef]>*/
}
var_nclassdef166 = var165;
{
nit__modelize_class___ModelBuilder___check_supertypes(self, var_nmodule, var_nclassdef166); /* Direct call modelize_class#ModelBuilder#check_supertypes on <self:ModelBuilder>*/
}
{
((void(*)(val* self))((((long)var_163&3)?class_info[((long)var_163&3)]:var_163->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_163); /* next on <var_163:Iterator[AClassdef]>*/
}
} else {
goto BREAK_label167;
}
}
BREAK_label167: (void)0;
{
((void(*)(val* self))((((long)var_163&3)?class_info[((long)var_163&3)]:var_163->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_163); /* finish on <var_163:Iterator[AClassdef]>*/
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var170 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var170 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var168 = var170;
RET_LABEL169:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count (var168) on <var168:ToolContext> */
var173 = var168->attrs[COLOR_nit__toolcontext__ToolContext___error_count].l; /* _error_count on <var168:ToolContext> */
var171 = var173;
RET_LABEL172:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var171) on <var_errcount:Int> */
var176 = var_errcount == var171;
var177 = !var176;
var174 = var177;
goto RET_LABEL175;
RET_LABEL175:(void)0;
}
}
if (var174){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var180 = var_nmodule->attrs[COLOR_nit__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var180 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1096);
fatal_exit(1);
}
var178 = var180;
RET_LABEL179:(void)0;
}
}
var_181 = var178;
{
var182 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_181);
}
var_183 = var182;
for(;;) {
{
var184 = ((short int(*)(val* self))((((long)var_183&3)?class_info[((long)var_183&3)]:var_183->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_183); /* is_ok on <var_183:Iterator[AClassdef]>*/
}
if (var184){
{
var185 = ((val*(*)(val* self))((((long)var_183&3)?class_info[((long)var_183&3)]:var_183->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_183); /* item on <var_183:Iterator[AClassdef]>*/
}
var_nclassdef186 = var185;
/* <var_nclassdef186:AClassdef> isa AStdClassdef */
cltype188 = type_nit__AStdClassdef.color;
idtype189 = type_nit__AStdClassdef.id;
if(cltype188 >= var_nclassdef186->type->table_size) {
var187 = 0;
} else {
var187 = var_nclassdef186->type->type_table[cltype188] == idtype189;
}
if (var187){
{
{ /* Inline modelize_class#AClassdef#mclassdef (var_nclassdef186) on <var_nclassdef186:AClassdef(AStdClassdef)> */
var192 = var_nclassdef186->attrs[COLOR_nit__modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_nclassdef186:AClassdef(AStdClassdef)> */
var190 = var192;
RET_LABEL191:(void)0;
}
}
var_mclassdef193 = var190;
{
{ /* Inline parser_nodes#AStdClassdef#n_formaldefs (var_nclassdef186) on <var_nclassdef186:AClassdef(AStdClassdef)> */
var196 = var_nclassdef186->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_formaldefs].val; /* _n_formaldefs on <var_nclassdef186:AClassdef(AStdClassdef)> */
if (unlikely(var196 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_formaldefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1207);
fatal_exit(1);
}
var194 = var196;
RET_LABEL195:(void)0;
}
}
var_197 = var194;
{
var198 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_197);
}
var_199 = var198;
for(;;) {
{
var200 = ((short int(*)(val* self))((((long)var_199&3)?class_info[((long)var_199&3)]:var_199->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_199); /* is_ok on <var_199:Iterator[AFormaldef]>*/
}
if (var200){
{
var201 = ((val*(*)(val* self))((((long)var_199&3)?class_info[((long)var_199&3)]:var_199->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_199); /* item on <var_199:Iterator[AFormaldef]>*/
}
var_nfd = var201;
{
{ /* Inline parser_nodes#AFormaldef#n_type (var_nfd) on <var_nfd:AFormaldef> */
var204 = var_nfd->attrs[COLOR_nit__parser_nodes__AFormaldef___n_type].val; /* _n_type on <var_nfd:AFormaldef> */
var202 = var204;
RET_LABEL203:(void)0;
}
}
var_nfdt = var202;
if (var_nfdt == NULL) {
var206 = 0; /* is null */
} else {
var206 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nfdt,((val*)NULL)) on <var_nfdt:nullable AType> */
var_other31 = ((val*)NULL);
{
var209 = ((short int(*)(val* self, val* p0))(var_nfdt->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nfdt, var_other31); /* == on <var_nfdt:nullable AType(AType)>*/
}
var210 = !var209;
var207 = var210;
goto RET_LABEL208;
RET_LABEL208:(void)0;
}
var206 = var207;
}
var_211 = var206;
if (var206){
{
{ /* Inline modelbuilder_base#AType#mtype (var_nfdt) on <var_nfdt:nullable AType(AType)> */
var214 = var_nfdt->attrs[COLOR_nit__modelbuilder_base__AType___mtype].val; /* _mtype on <var_nfdt:nullable AType(AType)> */
var212 = var214;
RET_LABEL213:(void)0;
}
}
if (var212 == NULL) {
var215 = 0; /* is null */
} else {
var215 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var212,((val*)NULL)) on <var212:nullable MType> */
var_other31 = ((val*)NULL);
{
var218 = ((short int(*)(val* self, val* p0))(var212->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var212, var_other31); /* == on <var212:nullable MType(MType)>*/
}
var219 = !var218;
var216 = var219;
goto RET_LABEL217;
RET_LABEL217:(void)0;
}
var215 = var216;
}
var205 = var215;
} else {
var205 = var_211;
}
if (var205){
{
var220 = nit___nit__ModelBuilder___resolve_mtype(self, var_mmodule, var_mclassdef193, var_nfdt);
}
var_bound = var220;
if (var_bound == NULL) {
var221 = 1; /* is null */
} else {
var221 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_bound,((val*)NULL)) on <var_bound:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_bound,var_other) on <var_bound:nullable MType(MType)> */
var226 = var_bound == var_other;
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
goto RET_LABEL;
} else {
}
} else {
}
{
((void(*)(val* self))((((long)var_199&3)?class_info[((long)var_199&3)]:var_199->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_199); /* next on <var_199:Iterator[AFormaldef]>*/
}
} else {
goto BREAK_label227;
}
}
BREAK_label227: (void)0;
{
((void(*)(val* self))((((long)var_199&3)?class_info[((long)var_199&3)]:var_199->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_199); /* finish on <var_199:Iterator[AFormaldef]>*/
}
{
var228 = nit___nit__AStdClassdef___n_superclasses(var_nclassdef186);
}
var_229 = var228;
{
var230 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_229);
}
var_231 = var230;
for(;;) {
{
var232 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_231);
}
if (var232){
{
var233 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_231);
}
var_nsc = var233;
{
{ /* Inline parser_nodes#ASuperPropdef#n_type (var_nsc) on <var_nsc:ASuperPropdef> */
var236 = var_nsc->attrs[COLOR_nit__parser_nodes__ASuperPropdef___n_type].val; /* _n_type on <var_nsc:ASuperPropdef> */
if (unlikely(var236 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1403);
fatal_exit(1);
}
var234 = var236;
RET_LABEL235:(void)0;
}
}
var_ntype = var234;
{
{ /* Inline modelbuilder_base#AType#mtype (var_ntype) on <var_ntype:AType> */
var239 = var_ntype->attrs[COLOR_nit__modelbuilder_base__AType___mtype].val; /* _mtype on <var_ntype:AType> */
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
{ /* Inline kernel#Object#!= (var237,((val*)NULL)) on <var237:nullable MType> */
var_other31 = ((val*)NULL);
{
var243 = ((short int(*)(val* self, val* p0))(var237->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var237, var_other31); /* == on <var237:nullable MType(MType)>*/
}
var244 = !var243;
var241 = var244;
goto RET_LABEL242;
RET_LABEL242:(void)0;
}
var240 = var241;
}
if (var240){
{
var245 = nit___nit__ModelBuilder___resolve_mtype(self, var_mmodule, var_mclassdef193, var_ntype);
}
var_mtype = var245;
if (var_mtype == NULL) {
var246 = 1; /* is null */
} else {
var246 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var251 = var_mtype == var_other;
var249 = var251;
goto RET_LABEL250;
RET_LABEL250:(void)0;
}
}
var247 = var249;
goto RET_LABEL248;
RET_LABEL248:(void)0;
}
var246 = var247;
}
if (var246){
goto RET_LABEL;
} else {
}
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_231); /* Direct call array#ArrayIterator#next on <var_231:ArrayIterator[ASuperPropdef]>*/
}
} else {
goto BREAK_label252;
}
}
BREAK_label252: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_231); /* Direct call array#ArrayIterator#finish on <var_231:ArrayIterator[ASuperPropdef]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_183&3)?class_info[((long)var_183&3)]:var_183->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_183); /* next on <var_183:Iterator[AClassdef]>*/
}
} else {
goto BREAK_label253;
}
}
BREAK_label253: (void)0;
{
((void(*)(val* self))((((long)var_183&3)?class_info[((long)var_183&3)]:var_183->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_183); /* finish on <var_183:Iterator[AClassdef]>*/
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var256 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var256 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var254 = var256;
RET_LABEL255:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count (var254) on <var254:ToolContext> */
var259 = var254->attrs[COLOR_nit__toolcontext__ToolContext___error_count].l; /* _error_count on <var254:ToolContext> */
var257 = var259;
RET_LABEL258:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var257) on <var_errcount:Int> */
var262 = var_errcount == var257;
var263 = !var262;
var260 = var263;
goto RET_LABEL261;
RET_LABEL261:(void)0;
}
}
if (var260){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var266 = var_nmodule->attrs[COLOR_nit__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var266 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1096);
fatal_exit(1);
}
var264 = var266;
RET_LABEL265:(void)0;
}
}
var_267 = var264;
{
var268 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_267);
}
var_269 = var268;
for(;;) {
{
var270 = ((short int(*)(val* self))((((long)var_269&3)?class_info[((long)var_269&3)]:var_269->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_269); /* is_ok on <var_269:Iterator[AClassdef]>*/
}
if (var270){
{
var271 = ((val*(*)(val* self))((((long)var_269&3)?class_info[((long)var_269&3)]:var_269->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_269); /* item on <var_269:Iterator[AClassdef]>*/
}
var_nclassdef272 = var271;
{
{ /* Inline modelize_class#AClassdef#mclassdef (var_nclassdef272) on <var_nclassdef272:AClassdef> */
var275 = var_nclassdef272->attrs[COLOR_nit__modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_nclassdef272:AClassdef> */
var273 = var275;
RET_LABEL274:(void)0;
}
}
var_mclassdef276 = var273;
if (var_mclassdef276 == NULL) {
var277 = 1; /* is null */
} else {
var277 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mclassdef276,((val*)NULL)) on <var_mclassdef276:nullable MClassDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mclassdef276,var_other) on <var_mclassdef276:nullable MClassDef(MClassDef)> */
var282 = var_mclassdef276 == var_other;
var280 = var282;
goto RET_LABEL281;
RET_LABEL281:(void)0;
}
}
var278 = var280;
goto RET_LABEL279;
RET_LABEL279:(void)0;
}
var277 = var278;
}
if (var277){
goto BREAK_label283;
} else {
}
var284 = NEW_standard__HashMap(&type_standard__HashMap__nit__MClass__nit__MClassType);
{
standard___standard__HashMap___standard__kernel__Object__init(var284); /* Direct call hash_collection#HashMap#init on <var284:HashMap[MClass, MClassType]>*/
}
var_superclasses = var284;
{
{ /* Inline model#MClassDef#in_hierarchy (var_mclassdef276) on <var_mclassdef276:nullable MClassDef(MClassDef)> */
var287 = var_mclassdef276->attrs[COLOR_nit__model__MClassDef___in_hierarchy].val; /* _in_hierarchy on <var_mclassdef276:nullable MClassDef(MClassDef)> */
var285 = var287;
RET_LABEL286:(void)0;
}
}
if (var285 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 390);
fatal_exit(1);
} else {
var288 = poset___poset__POSetElement___greaters(var285);
}
var_289 = var288;
{
var290 = ((val*(*)(val* self))((((long)var_289&3)?class_info[((long)var_289&3)]:var_289->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_289); /* iterator on <var_289:Collection[MClassDef]>*/
}
var_291 = var290;
for(;;) {
{
var292 = ((short int(*)(val* self))((((long)var_291&3)?class_info[((long)var_291&3)]:var_291->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_291); /* is_ok on <var_291:Iterator[MClassDef]>*/
}
if (var292){
{
var293 = ((val*(*)(val* self))((((long)var_291&3)?class_info[((long)var_291&3)]:var_291->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_291); /* item on <var_291:Iterator[MClassDef]>*/
}
var_scd = var293;
{
{ /* Inline model#MClassDef#supertypes (var_scd) on <var_scd:MClassDef> */
var296 = var_scd->attrs[COLOR_nit__model__MClassDef___supertypes].val; /* _supertypes on <var_scd:MClassDef> */
if (unlikely(var296 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supertypes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 627);
fatal_exit(1);
}
var294 = var296;
RET_LABEL295:(void)0;
}
}
var_297 = var294;
{
var298 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_297);
}
var_299 = var298;
for(;;) {
{
var300 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_299);
}
if (var300){
{
var301 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_299);
}
var_st = var301;
{
{ /* Inline model#MClassType#mclass (var_st) on <var_st:MClassType> */
var304 = var_st->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_st:MClassType> */
if (unlikely(var304 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var302 = var304;
RET_LABEL303:(void)0;
}
}
{
var305 = standard___standard__HashMap___standard__abstract_collection__MapRead__has_key(var_superclasses, var302);
}
var306 = !var305;
if (var306){
{
{ /* Inline model#MClassType#mclass (var_st) on <var_st:MClassType> */
var309 = var_st->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_st:MClassType> */
if (unlikely(var309 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var307 = var309;
RET_LABEL308:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var_superclasses, var307, var_st); /* Direct call hash_collection#HashMap#[]= on <var_superclasses:HashMap[MClass, MClassType]>*/
}
} else {
{
{ /* Inline model#MClassType#mclass (var_st) on <var_st:MClassType> */
var312 = var_st->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_st:MClassType> */
if (unlikely(var312 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var310 = var312;
RET_LABEL311:(void)0;
}
}
{
var313 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var_superclasses, var310);
}
{
{ /* Inline kernel#Object#!= (var313,var_st) on <var313:nullable Object(MClassType)> */
var_other31 = var_st;
{
var316 = ((short int(*)(val* self, val* p0))(var313->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var313, var_other31); /* == on <var313:nullable Object(MClassType)>*/
}
var317 = !var316;
var314 = var317;
goto RET_LABEL315;
RET_LABEL315:(void)0;
}
}
if (var314){
{
{ /* Inline model#MClassType#mclass (var_st) on <var_st:MClassType> */
var320 = var_st->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_st:MClassType> */
if (unlikely(var320 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var318 = var320;
RET_LABEL319:(void)0;
}
}
{
var321 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var_superclasses, var318);
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef276) on <var_mclassdef276:nullable MClassDef(MClassDef)> */
var324 = var_mclassdef276->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef276:nullable MClassDef(MClassDef)> */
if (unlikely(var324 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var322 = var324;
RET_LABEL323:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var322) on <var322:MClass> */
var327 = var322->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var322:MClass> */
if (unlikely(var327 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 484);
fatal_exit(1);
}
var325 = var327;
RET_LABEL326:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef276) on <var_mclassdef276:nullable MClassDef(MClassDef)> */
var330 = var_mclassdef276->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef276:nullable MClassDef(MClassDef)> */
if (unlikely(var330 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var328 = var330;
RET_LABEL329:(void)0;
}
}
{
var331 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var321->class->vft[COLOR_nit__model__MType__resolve_for]))(var321, var325, var328, var_mmodule, 0); /* resolve_for on <var321:nullable Object(MClassType)>*/
}
var_st1 = var331;
{
{ /* Inline model#MClassDef#mclass (var_mclassdef276) on <var_mclassdef276:nullable MClassDef(MClassDef)> */
var334 = var_mclassdef276->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef276:nullable MClassDef(MClassDef)> */
if (unlikely(var334 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var332 = var334;
RET_LABEL333:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var332) on <var332:MClass> */
var337 = var332->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var332:MClass> */
if (unlikely(var337 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 484);
fatal_exit(1);
}
var335 = var337;
RET_LABEL336:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef276) on <var_mclassdef276:nullable MClassDef(MClassDef)> */
var340 = var_mclassdef276->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef276:nullable MClassDef(MClassDef)> */
if (unlikely(var340 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var338 = var340;
RET_LABEL339:(void)0;
}
}
{
var341 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_st->class->vft[COLOR_nit__model__MType__resolve_for]))(var_st, var335, var338, var_mmodule, 0); /* resolve_for on <var_st:MClassType>*/
}
var_st2 = var341;
{
{ /* Inline kernel#Object#!= (var_st1,var_st2) on <var_st1:MClassType> */
var_other31 = var_st2;
{
var344 = ((short int(*)(val* self, val* p0))(var_st1->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_st1, var_other31); /* == on <var_st1:MClassType>*/
}
var345 = !var344;
var342 = var345;
goto RET_LABEL343;
RET_LABEL343:(void)0;
}
}
if (var342){
if (unlikely(varonce==NULL)) {
var346 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce347!=NULL)) {
var348 = varonce347;
} else {
var349 = "Error: incompatible ancestors for `";
var350 = standard___standard__NativeString___to_s_with_length(var349, 35l);
var348 = var350;
varonce347 = var348;
}
((struct instance_standard__NativeArray*)var346)->values[0]=var348;
if (likely(varonce351!=NULL)) {
var352 = varonce351;
} else {
var353 = "`; conflict: `";
var354 = standard___standard__NativeString___to_s_with_length(var353, 14l);
var352 = var354;
varonce351 = var352;
}
((struct instance_standard__NativeArray*)var346)->values[2]=var352;
if (likely(varonce355!=NULL)) {
var356 = varonce355;
} else {
var357 = "` and `";
var358 = standard___standard__NativeString___to_s_with_length(var357, 7l);
var356 = var358;
varonce355 = var356;
}
((struct instance_standard__NativeArray*)var346)->values[4]=var356;
if (likely(varonce359!=NULL)) {
var360 = varonce359;
} else {
var361 = "`";
var362 = standard___standard__NativeString___to_s_with_length(var361, 1l);
var360 = var362;
varonce359 = var360;
}
((struct instance_standard__NativeArray*)var346)->values[6]=var360;
} else {
var346 = varonce;
varonce = NULL;
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef276) on <var_mclassdef276:nullable MClassDef(MClassDef)> */
var365 = var_mclassdef276->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef276:nullable MClassDef(MClassDef)> */
if (unlikely(var365 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var363 = var365;
RET_LABEL364:(void)0;
}
}
{
var366 = ((val*(*)(val* self))(var363->class->vft[COLOR_standard__string__Object__to_s]))(var363); /* to_s on <var363:MClass>*/
}
((struct instance_standard__NativeArray*)var346)->values[1]=var366;
{
var367 = ((val*(*)(val* self))(var_st1->class->vft[COLOR_standard__string__Object__to_s]))(var_st1); /* to_s on <var_st1:MClassType>*/
}
((struct instance_standard__NativeArray*)var346)->values[3]=var367;
{
var368 = ((val*(*)(val* self))(var_st2->class->vft[COLOR_standard__string__Object__to_s]))(var_st2); /* to_s on <var_st2:MClassType>*/
}
((struct instance_standard__NativeArray*)var346)->values[5]=var368;
{
var369 = ((val*(*)(val* self))(var346->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var346); /* native_to_s on <var346:NativeArray[String]>*/
}
varonce = var346;
{
nit___nit__ModelBuilder___error(self, var_nclassdef272, var369); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
} else {
}
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_299); /* Direct call array#ArrayIterator#next on <var_299:ArrayIterator[MClassType]>*/
}
} else {
goto BREAK_label370;
}
}
BREAK_label370: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_299); /* Direct call array#ArrayIterator#finish on <var_299:ArrayIterator[MClassType]>*/
}
{
((void(*)(val* self))((((long)var_291&3)?class_info[((long)var_291&3)]:var_291->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_291); /* next on <var_291:Iterator[MClassDef]>*/
}
} else {
goto BREAK_label371;
}
}
BREAK_label371: (void)0;
{
((void(*)(val* self))((((long)var_291&3)?class_info[((long)var_291&3)]:var_291->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_291); /* finish on <var_291:Iterator[MClassDef]>*/
}
BREAK_label283: (void)0;
{
((void(*)(val* self))((((long)var_269&3)?class_info[((long)var_269&3)]:var_269->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_269); /* next on <var_269:Iterator[AClassdef]>*/
}
} else {
goto BREAK_label372;
}
}
BREAK_label372: (void)0;
{
((void(*)(val* self))((((long)var_269&3)?class_info[((long)var_269&3)]:var_269->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_269); /* finish on <var_269:Iterator[AClassdef]>*/
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var375 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var375 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var373 = var375;
RET_LABEL374:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count (var373) on <var373:ToolContext> */
var378 = var373->attrs[COLOR_nit__toolcontext__ToolContext___error_count].l; /* _error_count on <var373:ToolContext> */
var376 = var378;
RET_LABEL377:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var376) on <var_errcount:Int> */
var381 = var_errcount == var376;
var382 = !var381;
var379 = var382;
goto RET_LABEL380;
RET_LABEL380:(void)0;
}
}
if (var379){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var385 = var_nmodule->attrs[COLOR_nit__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var385 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1096);
fatal_exit(1);
}
var383 = var385;
RET_LABEL384:(void)0;
}
}
var_386 = var383;
{
var387 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_386);
}
var_388 = var387;
for(;;) {
{
var389 = ((short int(*)(val* self))((((long)var_388&3)?class_info[((long)var_388&3)]:var_388->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_388); /* is_ok on <var_388:Iterator[AClassdef]>*/
}
if (var389){
{
var390 = ((val*(*)(val* self))((((long)var_388&3)?class_info[((long)var_388&3)]:var_388->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_388); /* item on <var_388:Iterator[AClassdef]>*/
}
var_nclassdef391 = var390;
/* <var_nclassdef391:AClassdef> isa AStdClassdef */
cltype393 = type_nit__AStdClassdef.color;
idtype394 = type_nit__AStdClassdef.id;
if(cltype393 >= var_nclassdef391->type->table_size) {
var392 = 0;
} else {
var392 = var_nclassdef391->type->type_table[cltype393] == idtype394;
}
var395 = !var392;
if (var395){
goto BREAK_label396;
} else {
}
{
{ /* Inline modelize_class#AClassdef#mclassdef (var_nclassdef391) on <var_nclassdef391:AClassdef(AStdClassdef)> */
var399 = var_nclassdef391->attrs[COLOR_nit__modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_nclassdef391:AClassdef(AStdClassdef)> */
var397 = var399;
RET_LABEL398:(void)0;
}
}
var_mclassdef400 = var397;
if (var_mclassdef400 == NULL) {
var401 = 1; /* is null */
} else {
var401 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mclassdef400,((val*)NULL)) on <var_mclassdef400:nullable MClassDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mclassdef400,var_other) on <var_mclassdef400:nullable MClassDef(MClassDef)> */
var406 = var_mclassdef400 == var_other;
var404 = var406;
goto RET_LABEL405;
RET_LABEL405:(void)0;
}
}
var402 = var404;
goto RET_LABEL403;
RET_LABEL403:(void)0;
}
var401 = var402;
}
if (var401){
goto BREAK_label396;
} else {
}
var407 = NEW_standard__Array(&type_standard__Array__nit__MClass);
{
standard___standard__Array___standard__kernel__Object__init(var407); /* Direct call array#Array#init on <var407:Array[MClass]>*/
}
var_parents = var407;
{
{ /* Inline model#MClassDef#in_hierarchy (var_mclassdef400) on <var_mclassdef400:nullable MClassDef(MClassDef)> */
var410 = var_mclassdef400->attrs[COLOR_nit__model__MClassDef___in_hierarchy].val; /* _in_hierarchy on <var_mclassdef400:nullable MClassDef(MClassDef)> */
var408 = var410;
RET_LABEL409:(void)0;
}
}
if (var408 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 418);
fatal_exit(1);
} else {
var411 = poset___poset__POSetElement___direct_greaters(var408);
}
var_412 = var411;
{
var413 = ((val*(*)(val* self))((((long)var_412&3)?class_info[((long)var_412&3)]:var_412->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_412); /* iterator on <var_412:Collection[MClassDef]>*/
}
var_414 = var413;
for(;;) {
{
var415 = ((short int(*)(val* self))((((long)var_414&3)?class_info[((long)var_414&3)]:var_414->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_414); /* is_ok on <var_414:Iterator[MClassDef]>*/
}
if (var415){
{
var416 = ((val*(*)(val* self))((((long)var_414&3)?class_info[((long)var_414&3)]:var_414->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_414); /* item on <var_414:Iterator[MClassDef]>*/
}
var_sup = var416;
{
{ /* Inline model#MClassDef#mclass (var_sup) on <var_sup:MClassDef> */
var419 = var_sup->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_sup:MClassDef> */
if (unlikely(var419 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var417 = var419;
RET_LABEL418:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_parents, var417); /* Direct call array#Array#add on <var_parents:Array[MClass]>*/
}
{
((void(*)(val* self))((((long)var_414&3)?class_info[((long)var_414&3)]:var_414->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_414); /* next on <var_414:Iterator[MClassDef]>*/
}
} else {
goto BREAK_label420;
}
}
BREAK_label420: (void)0;
{
((void(*)(val* self))((((long)var_414&3)?class_info[((long)var_414&3)]:var_414->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_414); /* finish on <var_414:Iterator[MClassDef]>*/
}
var421 = NEW_standard__ArrayMap(&type_standard__ArrayMap__nit__MClass__nit__AType);
{
{ /* Inline kernel#Object#init (var421) on <var421:ArrayMap[MClass, AType]> */
RET_LABEL422:(void)0;
}
}
var_seen_parents = var421;
if (likely(varonce423!=NULL)) {
var424 = varonce423;
} else {
var425 = "Object";
var426 = standard___standard__NativeString___to_s_with_length(var425, 6l);
var424 = var426;
varonce423 = var424;
}
{
var427 = nit___nit__ModelBuilder___try_get_mclass_by_name(self, var_nmodule, var_mmodule, var424);
}
var_objectclass = var427;
{
var428 = nit___nit__AStdClassdef___n_superclasses(var_nclassdef391);
}
var_429 = var428;
{
var430 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_429);
}
var_431 = var430;
for(;;) {
{
var432 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_431);
}
if (var432){
{
var433 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_431);
}
var_nsc434 = var433;
{
{ /* Inline parser_nodes#ASuperPropdef#n_type (var_nsc434) on <var_nsc434:ASuperPropdef> */
var437 = var_nsc434->attrs[COLOR_nit__parser_nodes__ASuperPropdef___n_type].val; /* _n_type on <var_nsc434:ASuperPropdef> */
if (unlikely(var437 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1403);
fatal_exit(1);
}
var435 = var437;
RET_LABEL436:(void)0;
}
}
var_ntype438 = var435;
{
{ /* Inline modelbuilder_base#AType#mtype (var_ntype438) on <var_ntype438:AType> */
var441 = var_ntype438->attrs[COLOR_nit__modelbuilder_base__AType___mtype].val; /* _mtype on <var_ntype438:AType> */
var439 = var441;
RET_LABEL440:(void)0;
}
}
var_mtype442 = var439;
if (var_mtype442 == NULL) {
var443 = 1; /* is null */
} else {
var443 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype442,((val*)NULL)) on <var_mtype442:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype442,var_other) on <var_mtype442:nullable MType(MType)> */
var448 = var_mtype442 == var_other;
var446 = var448;
goto RET_LABEL447;
RET_LABEL447:(void)0;
}
}
var444 = var446;
goto RET_LABEL445;
RET_LABEL445:(void)0;
}
var443 = var444;
}
if (var443){
goto BREAK_label449;
} else {
}
/* <var_mtype442:nullable MType(MType)> isa MClassType */
cltype451 = type_nit__MClassType.color;
idtype452 = type_nit__MClassType.id;
if(cltype451 >= var_mtype442->type->table_size) {
var450 = 0;
} else {
var450 = var_mtype442->type->type_table[cltype451] == idtype452;
}
if (unlikely(!var450)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 433);
fatal_exit(1);
}
{
{ /* Inline model#MClassType#mclass (var_mtype442) on <var_mtype442:nullable MType(MClassType)> */
var455 = var_mtype442->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype442:nullable MType(MClassType)> */
if (unlikely(var455 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var453 = var455;
RET_LABEL454:(void)0;
}
}
var_sc = var453;
{
var457 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__has(var_parents, var_sc);
}
var458 = !var457;
var_459 = var458;
if (var458){
var456 = var_459;
} else {
{
{ /* Inline kernel#Object#== (var_sc,var_objectclass) on <var_sc:MClass> */
var_other = var_objectclass;
{
{ /* Inline kernel#Object#is_same_instance (var_sc,var_other) on <var_sc:MClass> */
var464 = var_sc == var_other;
var462 = var464;
goto RET_LABEL463;
RET_LABEL463:(void)0;
}
}
var460 = var462;
goto RET_LABEL461;
RET_LABEL461:(void)0;
}
}
var456 = var460;
}
if (var456){
{
{ /* Inline parser_nodes#ANode#location (var_ntype438) on <var_ntype438:AType> */
var468 = var_ntype438->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var_ntype438:AType> */
if (unlikely(var468 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var466 = var468;
RET_LABEL467:(void)0;
}
}
{
{ /* Inline location#Location#file (var466) on <var466:Location> */
var471 = var466->attrs[COLOR_nit__location__Location___file].val; /* _file on <var466:Location> */
var469 = var471;
RET_LABEL470:(void)0;
}
}
if (var469 == NULL) {
var472 = 0; /* is null */
} else {
var472 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var469,((val*)NULL)) on <var469:nullable SourceFile> */
var_other31 = ((val*)NULL);
{
var475 = ((short int(*)(val* self, val* p0))(var469->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var469, var_other31); /* == on <var469:nullable SourceFile(SourceFile)>*/
}
var476 = !var475;
var473 = var476;
goto RET_LABEL474;
RET_LABEL474:(void)0;
}
var472 = var473;
}
var_477 = var472;
if (var472){
{
{ /* Inline parser_nodes#ANode#location (var_ntype438) on <var_ntype438:AType> */
var480 = var_ntype438->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var_ntype438:AType> */
if (unlikely(var480 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var478 = var480;
RET_LABEL479:(void)0;
}
}
{
{ /* Inline location#Location#file (var478) on <var478:Location> */
var483 = var478->attrs[COLOR_nit__location__Location___file].val; /* _file on <var478:Location> */
var481 = var483;
RET_LABEL482:(void)0;
}
}
if (var481 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 437);
fatal_exit(1);
} else {
{ /* Inline location#SourceFile#filename (var481) on <var481:nullable SourceFile> */
if (unlikely(var481 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 22);
fatal_exit(1);
}
var486 = var481->attrs[COLOR_nit__location__SourceFile___filename].val; /* _filename on <var481:nullable SourceFile> */
if (unlikely(var486 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 22);
fatal_exit(1);
}
var484 = var486;
RET_LABEL485:(void)0;
}
}
{
var487 = standard___standard__Text___is_empty(var484);
}
var488 = !var487;
var465 = var488;
} else {
var465 = var_477;
}
if (var465){
if (likely(varonce489!=NULL)) {
var490 = varonce489;
} else {
var491 = "useless-superclass";
var492 = standard___standard__NativeString___to_s_with_length(var491, 18l);
var490 = var492;
varonce489 = var490;
}
if (unlikely(varonce493==NULL)) {
var494 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce495!=NULL)) {
var496 = varonce495;
} else {
var497 = "Warning: superfluous super-class `";
var498 = standard___standard__NativeString___to_s_with_length(var497, 34l);
var496 = var498;
varonce495 = var496;
}
((struct instance_standard__NativeArray*)var494)->values[0]=var496;
if (likely(varonce499!=NULL)) {
var500 = varonce499;
} else {
var501 = "` in class `";
var502 = standard___standard__NativeString___to_s_with_length(var501, 12l);
var500 = var502;
varonce499 = var500;
}
((struct instance_standard__NativeArray*)var494)->values[2]=var500;
if (likely(varonce503!=NULL)) {
var504 = varonce503;
} else {
var505 = "`.";
var506 = standard___standard__NativeString___to_s_with_length(var505, 2l);
var504 = var506;
varonce503 = var504;
}
((struct instance_standard__NativeArray*)var494)->values[4]=var504;
} else {
var494 = varonce493;
varonce493 = NULL;
}
{
var507 = ((val*(*)(val* self))(var_mtype442->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype442); /* to_s on <var_mtype442:nullable MType(MClassType)>*/
}
((struct instance_standard__NativeArray*)var494)->values[1]=var507;
{
{ /* Inline model#MClassDef#mclass (var_mclassdef400) on <var_mclassdef400:nullable MClassDef(MClassDef)> */
var510 = var_mclassdef400->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef400:nullable MClassDef(MClassDef)> */
if (unlikely(var510 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var508 = var510;
RET_LABEL509:(void)0;
}
}
{
var511 = ((val*(*)(val* self))(var508->class->vft[COLOR_standard__string__Object__to_s]))(var508); /* to_s on <var508:MClass>*/
}
((struct instance_standard__NativeArray*)var494)->values[3]=var511;
{
var512 = ((val*(*)(val* self))(var494->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var494); /* native_to_s on <var494:NativeArray[String]>*/
}
varonce493 = var494;
{
nit___nit__ModelBuilder___warning(self, var_ntype438, var490, var512); /* Direct call modelbuilder_base#ModelBuilder#warning on <self:ModelBuilder>*/
}
} else {
}
} else {
{
var513 = standard___standard__CoupleMap___MapRead__has_key(var_seen_parents, var_sc);
}
var514 = !var513;
if (var514){
{
standard___standard__ArrayMap___standard__abstract_collection__Map___91d_93d_61d(var_seen_parents, var_sc, var_ntype438); /* Direct call array#ArrayMap#[]= on <var_seen_parents:ArrayMap[MClass, AType]>*/
}
} else {
if (likely(varonce515!=NULL)) {
var516 = varonce515;
} else {
var517 = "useless-superclass";
var518 = standard___standard__NativeString___to_s_with_length(var517, 18l);
var516 = var518;
varonce515 = var516;
}
if (unlikely(varonce519==NULL)) {
var520 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce521!=NULL)) {
var522 = varonce521;
} else {
var523 = "Warning: duplicated super-class `";
var524 = standard___standard__NativeString___to_s_with_length(var523, 33l);
var522 = var524;
varonce521 = var522;
}
((struct instance_standard__NativeArray*)var520)->values[0]=var522;
if (likely(varonce525!=NULL)) {
var526 = varonce525;
} else {
var527 = "` in class `";
var528 = standard___standard__NativeString___to_s_with_length(var527, 12l);
var526 = var528;
varonce525 = var526;
}
((struct instance_standard__NativeArray*)var520)->values[2]=var526;
if (likely(varonce529!=NULL)) {
var530 = varonce529;
} else {
var531 = "`.";
var532 = standard___standard__NativeString___to_s_with_length(var531, 2l);
var530 = var532;
varonce529 = var530;
}
((struct instance_standard__NativeArray*)var520)->values[4]=var530;
} else {
var520 = varonce519;
varonce519 = NULL;
}
{
var533 = ((val*(*)(val* self))(var_mtype442->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype442); /* to_s on <var_mtype442:nullable MType(MClassType)>*/
}
((struct instance_standard__NativeArray*)var520)->values[1]=var533;
{
{ /* Inline model#MClassDef#mclass (var_mclassdef400) on <var_mclassdef400:nullable MClassDef(MClassDef)> */
var536 = var_mclassdef400->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef400:nullable MClassDef(MClassDef)> */
if (unlikely(var536 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var534 = var536;
RET_LABEL535:(void)0;
}
}
{
var537 = ((val*(*)(val* self))(var534->class->vft[COLOR_standard__string__Object__to_s]))(var534); /* to_s on <var534:MClass>*/
}
((struct instance_standard__NativeArray*)var520)->values[3]=var537;
{
var538 = ((val*(*)(val* self))(var520->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var520); /* native_to_s on <var520:NativeArray[String]>*/
}
varonce519 = var520;
{
nit___nit__ModelBuilder___warning(self, var_ntype438, var516, var538); /* Direct call modelbuilder_base#ModelBuilder#warning on <self:ModelBuilder>*/
}
}
}
BREAK_label449: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_431); /* Direct call array#ArrayIterator#next on <var_431:ArrayIterator[ASuperPropdef]>*/
}
} else {
goto BREAK_label539;
}
}
BREAK_label539: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_431); /* Direct call array#ArrayIterator#finish on <var_431:ArrayIterator[ASuperPropdef]>*/
}
BREAK_label396: (void)0;
{
((void(*)(val* self))((((long)var_388&3)?class_info[((long)var_388&3)]:var_388->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_388); /* next on <var_388:Iterator[AClassdef]>*/
}
} else {
goto BREAK_label540;
}
}
BREAK_label540: (void)0;
{
((void(*)(val* self))((((long)var_388&3)?class_info[((long)var_388&3)]:var_388->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_388); /* finish on <var_388:Iterator[AClassdef]>*/
}
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#mclassdef2nclassdef for (self: ModelBuilder): HashMap[MClassDef, AClassdef] */
val* nit__modelize_class___ModelBuilder___mclassdef2nclassdef(val* self) {
val* var /* : HashMap[MClassDef, AClassdef] */;
val* var1 /* : HashMap[MClassDef, AClassdef] */;
var1 = self->attrs[COLOR_nit__modelize_class__ModelBuilder___mclassdef2nclassdef].val; /* _mclassdef2nclassdef on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 449);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AModule#build_classes_is_done for (self: AModule): Bool */
short int nit__modelize_class___AModule___build_classes_is_done(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__modelize_class__AModule___build_classes_is_done].s; /* _build_classes_is_done on <self:AModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AModule#build_classes_is_done= for (self: AModule, Bool) */
void nit__modelize_class___AModule___build_classes_is_done_61d(val* self, short int p0) {
self->attrs[COLOR_nit__modelize_class__AModule___build_classes_is_done].s = p0; /* _build_classes_is_done on <self:AModule> */
RET_LABEL:;
}
/* method modelize_class#AModule#mclass2nclassdef for (self: AModule): Map[MClass, AClassdef] */
val* nit__modelize_class___AModule___mclass2nclassdef(val* self) {
val* var /* : Map[MClass, AClassdef] */;
val* var1 /* : Map[MClass, AClassdef] */;
var1 = self->attrs[COLOR_nit__modelize_class__AModule___mclass2nclassdef].val; /* _mclass2nclassdef on <self:AModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 464);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AClassdef#mclass for (self: AClassdef): nullable MClass */
val* nit__modelize_class___AClassdef___mclass(val* self) {
val* var /* : nullable MClass */;
val* var1 /* : nullable MClass */;
var1 = self->attrs[COLOR_nit__modelize_class__AClassdef___mclass].val; /* _mclass on <self:AClassdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AClassdef#mclass= for (self: AClassdef, nullable MClass) */
void nit__modelize_class___AClassdef___mclass_61d(val* self, val* p0) {
self->attrs[COLOR_nit__modelize_class__AClassdef___mclass].val = p0; /* _mclass on <self:AClassdef> */
RET_LABEL:;
}
/* method modelize_class#AClassdef#mclassdef for (self: AClassdef): nullable MClassDef */
val* nit__modelize_class___AClassdef___mclassdef(val* self) {
val* var /* : nullable MClassDef */;
val* var1 /* : nullable MClassDef */;
var1 = self->attrs[COLOR_nit__modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <self:AClassdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AClassdef#mclassdef= for (self: AClassdef, nullable MClassDef) */
void nit__modelize_class___AClassdef___mclassdef_61d(val* self, val* p0) {
self->attrs[COLOR_nit__modelize_class__AClassdef___mclassdef].val = p0; /* _mclassdef on <self:AClassdef> */
RET_LABEL:;
}
/* method modelize_class#AClassdef#all_defs for (self: AClassdef): nullable Array[AClassdef] */
val* nit__modelize_class___AClassdef___all_defs(val* self) {
val* var /* : nullable Array[AClassdef] */;
val* var1 /* : nullable Array[AClassdef] */;
var1 = self->attrs[COLOR_nit__modelize_class__AClassdef___all_defs].val; /* _all_defs on <self:AClassdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AClassdef#all_defs= for (self: AClassdef, nullable Array[AClassdef]) */
void nit__modelize_class___AClassdef___all_defs_61d(val* self, val* p0) {
self->attrs[COLOR_nit__modelize_class__AClassdef___all_defs].val = p0; /* _all_defs on <self:AClassdef> */
RET_LABEL:;
}
/* method modelize_class#AConcreteClasskind#mkind for (self: AConcreteClasskind): MClassKind */
val* nit__modelize_class___AConcreteClasskind___AClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : Sys */;
val* var2 /* : MClassKind */;
var1 = glob_sys;
{
var2 = nit__model___standard__Sys___concrete_kind(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_class#AAbstractClasskind#mkind for (self: AAbstractClasskind): MClassKind */
val* nit__modelize_class___AAbstractClasskind___AClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : Sys */;
val* var2 /* : MClassKind */;
var1 = glob_sys;
{
var2 = nit__model___standard__Sys___abstract_kind(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_class#AInterfaceClasskind#mkind for (self: AInterfaceClasskind): MClassKind */
val* nit__modelize_class___AInterfaceClasskind___AClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : Sys */;
val* var2 /* : MClassKind */;
var1 = glob_sys;
{
var2 = nit__model___standard__Sys___interface_kind(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_class#AEnumClasskind#mkind for (self: AEnumClasskind): MClassKind */
val* nit__modelize_class___AEnumClasskind___AClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : Sys */;
val* var2 /* : MClassKind */;
var1 = glob_sys;
{
var2 = nit__model___standard__Sys___enum_kind(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_class#AExternClasskind#mkind for (self: AExternClasskind): MClassKind */
val* nit__modelize_class___AExternClasskind___AClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : Sys */;
val* var2 /* : MClassKind */;
var1 = glob_sys;
{
var2 = nit__model___standard__Sys___extern_kind(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_class#AFormaldef#bound= for (self: AFormaldef, nullable MType) */
void nit__modelize_class___AFormaldef___bound_61d(val* self, val* p0) {
self->attrs[COLOR_nit__modelize_class__AFormaldef___bound].val = p0; /* _bound on <self:AFormaldef> */
RET_LABEL:;
}
