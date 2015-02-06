#include "nit__modelize_class.sep.0.h"
/* method modelize_class#ToolContext#modelize_class_phase for (self: ToolContext): Phase */
val* nit__modelize_class___ToolContext___modelize_class_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nit__modelize_class__ToolContext___modelize_class_phase].val; /* _modelize_class_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelize_class_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 23);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 201);
show_backtrace(1);
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
long var3 /* : Int */;
long var_arity /* var arity: Int */;
val* var4 /* : Array[String] */;
val* var_names /* var names: Array[String] */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var6 /* : nullable TClassid */;
val* var8 /* : nullable TClassid */;
val* var9 /* : String */;
val* var_name /* var name: String */;
val* var10 /* : AClasskind */;
val* var12 /* : AClasskind */;
val* var_nkind /* var nkind: nullable AClasskind */;
val* var13 /* : MClassKind */;
val* var_mkind /* var mkind: MClassKind */;
val* var14 /* : nullable AVisibility */;
val* var16 /* : nullable AVisibility */;
val* var_nvisibility /* var nvisibility: nullable AVisibility */;
val* var17 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: nullable MVisibility */;
val* var18 /* : ANodes[AFormaldef] */;
val* var20 /* : ANodes[AFormaldef] */;
long var21 /* : Int */;
val* var22 /* : MVisibility */;
short int var23 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
static val* varonce;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : FlatString */;
val* var32 /* : MVisibility */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
long var41 /* : Int */;
val* var42 /* : FlatString */;
long var43 /* : Int */;
long var_i /* var i: Int */;
long var_ /* var : Int */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name;
short int var49 /* : Bool */;
val* var50 /* : ANodes[AFormaldef] */;
val* var52 /* : ANodes[AFormaldef] */;
val* var53 /* : ANode */;
val* var_nfd /* var nfd: AFormaldef */;
val* var54 /* : TClassid */;
val* var56 /* : TClassid */;
val* var57 /* : String */;
val* var_ptname /* var ptname: String */;
short int var58 /* : Bool */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
long var62 /* : Int */;
val* var63 /* : FlatString */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
long var67 /* : Int */;
val* var68 /* : FlatString */;
val* var69 /* : Array[Object] */;
long var70 /* : Int */;
val* var71 /* : NativeArray[Object] */;
val* var72 /* : String */;
val* var73 /* : SequenceRead[Char] */;
val* var_74 /* var : SequenceRead[Char] */;
val* var75 /* : Iterator[nullable Object] */;
val* var_76 /* var : IndexedIterator[Char] */;
short int var77 /* : Bool */;
val* var78 /* : nullable Object */;
char var79 /* : Char */;
char var_c /* var c: Char */;
short int var80 /* : Bool */;
char var81 /* : Char */;
short int var82 /* : Bool */;
short int var84 /* : Bool */;
int cltype85;
int idtype86;
const char* var_class_name87;
short int var88 /* : Bool */;
short int var_89 /* var : Bool */;
char var90 /* : Char */;
short int var91 /* : Bool */;
short int var93 /* : Bool */;
int cltype94;
int idtype95;
const char* var_class_name96;
short int var97 /* : Bool */;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : NativeString */;
long var101 /* : Int */;
val* var102 /* : FlatString */;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : NativeString */;
long var106 /* : Int */;
val* var107 /* : FlatString */;
val* var108 /* : Array[Object] */;
long var109 /* : Int */;
val* var110 /* : NativeArray[Object] */;
val* var111 /* : String */;
long var113 /* : Int */;
long var114 /* : Int */;
short int var116 /* : Bool */;
int cltype117;
int idtype118;
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : NativeString */;
long var122 /* : Int */;
val* var123 /* : FlatString */;
val* var124 /* : null */;
val* var125 /* : MClassKind */;
val* var126 /* : null */;
val* var127 /* : MVisibility */;
short int var128 /* : Bool */;
int cltype129;
int idtype130;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : NativeString */;
long var134 /* : Int */;
val* var135 /* : FlatString */;
val* var136 /* : null */;
val* var137 /* : MClassKind */;
val* var138 /* : null */;
val* var139 /* : MVisibility */;
val* var140 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
val* var141 /* : null */;
short int var142 /* : Bool */;
short int var143 /* : Bool */;
short int var145 /* : Bool */;
short int var147 /* : Bool */;
short int var148 /* : Bool */;
short int var149 /* : Bool */;
int cltype150;
int idtype151;
short int var_152 /* var : Bool */;
val* var153 /* : nullable TKwredef */;
val* var155 /* : nullable TKwredef */;
val* var156 /* : null */;
short int var157 /* : Bool */;
short int var158 /* : Bool */;
val* var_other160 /* var other: nullable Object */;
short int var161 /* : Bool */;
short int var162 /* : Bool */;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : NativeString */;
long var166 /* : Int */;
val* var167 /* : FlatString */;
static val* varonce168;
val* var169 /* : String */;
char* var170 /* : NativeString */;
long var171 /* : Int */;
val* var172 /* : FlatString */;
val* var173 /* : Array[Object] */;
long var174 /* : Int */;
val* var175 /* : NativeArray[Object] */;
val* var176 /* : String */;
short int var177 /* : Bool */;
val* var178 /* : nullable MGroup */;
val* var180 /* : nullable MGroup */;
val* var181 /* : null */;
short int var182 /* : Bool */;
short int var183 /* : Bool */;
short int var185 /* : Bool */;
short int var186 /* : Bool */;
short int var_187 /* var : Bool */;
val* var188 /* : MVisibility */;
short int var189 /* : Bool */;
val* var190 /* : Model */;
val* var192 /* : Model */;
val* var193 /* : nullable Array[MClass] */;
val* var_mclasses /* var mclasses: nullable Array[MClass] */;
val* var194 /* : null */;
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
val* var213 /* : null */;
short int var214 /* : Bool */;
short int var215 /* : Bool */;
short int var217 /* : Bool */;
short int var218 /* : Bool */;
short int var_219 /* var : Bool */;
val* var220 /* : MModule */;
val* var222 /* : MModule */;
val* var223 /* : nullable MGroup */;
val* var225 /* : nullable MGroup */;
val* var226 /* : MProject */;
val* var228 /* : MProject */;
val* var229 /* : nullable MGroup */;
val* var231 /* : nullable MGroup */;
val* var232 /* : MProject */;
val* var234 /* : MProject */;
short int var235 /* : Bool */;
short int var237 /* : Bool */;
short int var239 /* : Bool */;
static val* varonce240;
val* var241 /* : String */;
char* var242 /* : NativeString */;
long var243 /* : Int */;
val* var244 /* : FlatString */;
val* var245 /* : String */;
static val* varonce246;
val* var247 /* : String */;
char* var248 /* : NativeString */;
long var249 /* : Int */;
val* var250 /* : FlatString */;
val* var251 /* : MModule */;
val* var253 /* : MModule */;
static val* varonce254;
val* var255 /* : String */;
char* var256 /* : NativeString */;
long var257 /* : Int */;
val* var258 /* : FlatString */;
val* var259 /* : MClassDef */;
val* var261 /* : MClassDef */;
val* var262 /* : Location */;
val* var264 /* : Location */;
static val* varonce265;
val* var266 /* : String */;
char* var267 /* : NativeString */;
long var268 /* : Int */;
val* var269 /* : FlatString */;
val* var270 /* : Array[Object] */;
long var271 /* : Int */;
val* var272 /* : NativeArray[Object] */;
val* var273 /* : String */;
val* var276 /* : MClass */;
short int var277 /* : Bool */;
short int var278 /* : Bool */;
int cltype279;
int idtype280;
short int var_281 /* var : Bool */;
val* var282 /* : Map[MClass, AClassdef] */;
val* var284 /* : Map[MClass, AClassdef] */;
short int var285 /* : Bool */;
static val* varonce286;
val* var287 /* : String */;
char* var288 /* : NativeString */;
long var289 /* : Int */;
val* var290 /* : FlatString */;
static val* varonce291;
val* var292 /* : String */;
char* var293 /* : NativeString */;
long var294 /* : Int */;
val* var295 /* : FlatString */;
val* var296 /* : Map[MClass, AClassdef] */;
val* var298 /* : Map[MClass, AClassdef] */;
val* var299 /* : nullable Object */;
val* var300 /* : Location */;
val* var302 /* : Location */;
long var303 /* : Int */;
long var305 /* : Int */;
static val* varonce306;
val* var307 /* : String */;
char* var308 /* : NativeString */;
long var309 /* : Int */;
val* var310 /* : FlatString */;
val* var311 /* : Array[Object] */;
long var312 /* : Int */;
val* var313 /* : NativeArray[Object] */;
val* var314 /* : Object */;
val* var315 /* : String */;
short int var316 /* : Bool */;
short int var317 /* : Bool */;
int cltype318;
int idtype319;
short int var_320 /* var : Bool */;
val* var321 /* : nullable TKwredef */;
val* var323 /* : nullable TKwredef */;
val* var324 /* : null */;
short int var325 /* : Bool */;
short int var326 /* : Bool */;
short int var328 /* : Bool */;
short int var330 /* : Bool */;
static val* varonce331;
val* var332 /* : String */;
char* var333 /* : NativeString */;
long var334 /* : Int */;
val* var335 /* : FlatString */;
static val* varonce336;
val* var337 /* : String */;
char* var338 /* : NativeString */;
long var339 /* : Int */;
val* var340 /* : FlatString */;
val* var341 /* : Array[Object] */;
long var342 /* : Int */;
val* var343 /* : NativeArray[Object] */;
val* var344 /* : String */;
short int var345 /* : Bool */;
long var346 /* : Int */;
short int var347 /* : Bool */;
short int var349 /* : Bool */;
short int var350 /* : Bool */;
short int var_351 /* var : Bool */;
long var352 /* : Int */;
long var354 /* : Int */;
short int var355 /* : Bool */;
short int var357 /* : Bool */;
short int var358 /* : Bool */;
static val* varonce359;
val* var360 /* : String */;
char* var361 /* : NativeString */;
long var362 /* : Int */;
val* var363 /* : FlatString */;
static val* varonce364;
val* var365 /* : String */;
char* var366 /* : NativeString */;
long var367 /* : Int */;
val* var368 /* : FlatString */;
long var369 /* : Int */;
long var371 /* : Int */;
static val* varonce372;
val* var373 /* : String */;
char* var374 /* : NativeString */;
long var375 /* : Int */;
val* var376 /* : FlatString */;
val* var377 /* : Array[Object] */;
long var378 /* : Int */;
val* var379 /* : NativeArray[Object] */;
val* var380 /* : Object */;
val* var381 /* : Object */;
val* var382 /* : String */;
short int var383 /* : Bool */;
short int var384 /* : Bool */;
val* var385 /* : null */;
short int var386 /* : Bool */;
short int var387 /* : Bool */;
short int var389 /* : Bool */;
short int var390 /* : Bool */;
short int var_391 /* var : Bool */;
val* var392 /* : MClassKind */;
short int var393 /* : Bool */;
short int var395 /* : Bool */;
short int var396 /* : Bool */;
short int var_397 /* var : Bool */;
val* var398 /* : MClassKind */;
val* var400 /* : MClassKind */;
short int var401 /* : Bool */;
short int var403 /* : Bool */;
short int var404 /* : Bool */;
static val* varonce405;
val* var406 /* : String */;
char* var407 /* : NativeString */;
long var408 /* : Int */;
val* var409 /* : FlatString */;
val* var410 /* : MClassKind */;
val* var412 /* : MClassKind */;
static val* varonce413;
val* var414 /* : String */;
char* var415 /* : NativeString */;
long var416 /* : Int */;
val* var417 /* : FlatString */;
val* var418 /* : Array[Object] */;
long var419 /* : Int */;
val* var420 /* : NativeArray[Object] */;
val* var421 /* : String */;
short int var422 /* : Bool */;
short int var423 /* : Bool */;
val* var424 /* : null */;
short int var425 /* : Bool */;
short int var426 /* : Bool */;
short int var428 /* : Bool */;
short int var429 /* : Bool */;
short int var_430 /* var : Bool */;
val* var431 /* : MVisibility */;
short int var432 /* : Bool */;
short int var434 /* : Bool */;
short int var435 /* : Bool */;
short int var_436 /* var : Bool */;
val* var437 /* : MVisibility */;
val* var439 /* : MVisibility */;
short int var440 /* : Bool */;
short int var442 /* : Bool */;
short int var443 /* : Bool */;
static val* varonce444;
val* var445 /* : String */;
char* var446 /* : NativeString */;
long var447 /* : Int */;
val* var448 /* : FlatString */;
val* var449 /* : MVisibility */;
val* var451 /* : MVisibility */;
static val* varonce452;
val* var453 /* : String */;
char* var454 /* : NativeString */;
long var455 /* : Int */;
val* var456 /* : FlatString */;
val* var457 /* : Array[Object] */;
long var458 /* : Int */;
val* var459 /* : NativeArray[Object] */;
val* var460 /* : String */;
val* var462 /* : Map[MClass, AClassdef] */;
val* var464 /* : Map[MClass, AClassdef] */;
short int var465 /* : Bool */;
short int var466 /* : Bool */;
val* var467 /* : Map[MClass, AClassdef] */;
val* var469 /* : Map[MClass, AClassdef] */;
val* var470 /* : Array[AClassdef] */;
long var471 /* : Int */;
val* var_472 /* var : Array[AClassdef] */;
val* var474 /* : Map[MClass, AClassdef] */;
val* var476 /* : Map[MClass, AClassdef] */;
val* var477 /* : nullable Object */;
val* var478 /* : nullable Array[AClassdef] */;
val* var480 /* : nullable Array[AClassdef] */;
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
show_backtrace(1);
}
var_mmodule = var;
var3 = 0;
var_arity = var3;
var4 = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[String]>*/
}
var_names = var4;
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype = type_nit__AStdClassdef.color;
idtype = type_nit__AStdClassdef.id;
if(cltype >= var_nclassdef->type->table_size) {
var5 = 0;
} else {
var5 = var_nclassdef->type->type_table[cltype] == idtype;
}
if (var5){
{
{ /* Inline parser_nodes#AStdClassdef#n_id (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var8 = var_nclassdef->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_id].val; /* _n_id on <var_nclassdef:AClassdef(AStdClassdef)> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (var6 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 50);
show_backtrace(1);
} else {
var9 = nit__lexer_work___Token___text(var6);
}
var_name = var9;
{
{ /* Inline parser_nodes#AStdClassdef#n_classkind (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var12 = var_nclassdef->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_classkind].val; /* _n_classkind on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classkind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1021);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_nkind = var10;
{
var13 = ((val* (*)(val* self))(var_nkind->class->vft[COLOR_nit__modelize_class__AClasskind__mkind]))(var_nkind) /* mkind on <var_nkind:nullable AClasskind(AClasskind)>*/;
}
var_mkind = var13;
{
{ /* Inline parser_nodes#ADefinition#n_visibility (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var16 = var_nclassdef->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <var_nclassdef:AClassdef(AStdClassdef)> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
var_nvisibility = var14;
if (var_nvisibility == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 54);
show_backtrace(1);
} else {
var17 = ((val* (*)(val* self))(var_nvisibility->class->vft[COLOR_nit__modelbuilder_base__AVisibility__mvisibility]))(var_nvisibility) /* mvisibility on <var_nvisibility:nullable AVisibility>*/;
}
var_mvisibility = var17;
{
{ /* Inline parser_nodes#AStdClassdef#n_formaldefs (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var20 = var_nclassdef->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_formaldefs].val; /* _n_formaldefs on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_formaldefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1027);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = nit___nit__ANodes___standard__abstract_collection__Collection__length(var18);
}
var_arity = var21;
{
var22 = nit__model_base___standard__Object___protected_visibility(self);
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
if (varonce) {
var28 = varonce;
} else {
var29 = "Error: only properties can be protected.";
var30 = 40;
var31 = standard___standard__NativeString___to_s_with_length(var29, var30);
var28 = var31;
varonce = var28;
}
{
nit___nit__ModelBuilder___error(self, var_nvisibility, var28); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
{
var32 = nit__model_base___standard__Object___intrude_visibility(self);
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
if (varonce38) {
var39 = varonce38;
} else {
var40 = "Error: intrude is not a legal visibility for classes.";
var41 = 53;
var42 = standard___standard__NativeString___to_s_with_length(var40, var41);
var39 = var42;
varonce38 = var39;
}
{
nit___nit__ModelBuilder___error(self, var_nvisibility, var39); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
}
var43 = 0;
var_i = var43;
var_ = var_arity;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var46 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var49 = var_i < var_;
var44 = var49;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
if (var44){
{
{ /* Inline parser_nodes#AStdClassdef#n_formaldefs (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var52 = var_nclassdef->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_formaldefs].val; /* _n_formaldefs on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_formaldefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1027);
show_backtrace(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
var53 = nit___nit__ANodes___standard__abstract_collection__SequenceRead___91d_93d(var50, var_i);
}
var_nfd = var53;
{
{ /* Inline parser_nodes#AFormaldef#n_id (var_nfd) on <var_nfd:AFormaldef> */
var56 = var_nfd->attrs[COLOR_nit__parser_nodes__AFormaldef___n_id].val; /* _n_id on <var_nfd:AFormaldef> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1107);
show_backtrace(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
var57 = nit__lexer_work___Token___text(var54);
}
var_ptname = var57;
{
var58 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__has(var_names, var_ptname);
}
if (var58){
if (varonce59) {
var60 = varonce59;
} else {
var61 = "Error: A formal parameter type `";
var62 = 32;
var63 = standard___standard__NativeString___to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
if (varonce64) {
var65 = varonce64;
} else {
var66 = "\' already exists";
var67 = 16;
var68 = standard___standard__NativeString___to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
var69 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var69 = array_instance Array[Object] */
var70 = 3;
var71 = NEW_standard__NativeArray(var70, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var71)->values[0] = (val*) var60;
((struct instance_standard__NativeArray*)var71)->values[1] = (val*) var_ptname;
((struct instance_standard__NativeArray*)var71)->values[2] = (val*) var65;
{
((void (*)(val* self, val* p0, long p1))(var69->class->vft[COLOR_standard__array__Array__with_native]))(var69, var71, var70) /* with_native on <var69:Array[Object]>*/;
}
}
{
var72 = ((val* (*)(val* self))(var69->class->vft[COLOR_standard__string__Object__to_s]))(var69) /* to_s on <var69:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(self, var_nfd, var72); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
var73 = ((val* (*)(val* self))(var_ptname->class->vft[COLOR_standard__string__Text__chars]))(var_ptname) /* chars on <var_ptname:String>*/;
}
var_74 = var73;
{
var75 = ((val* (*)(val* self))(var_74->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_74) /* iterator on <var_74:SequenceRead[Char]>*/;
}
var_76 = var75;
for(;;) {
{
var77 = ((short int (*)(val* self))(var_76->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_76) /* is_ok on <var_76:IndexedIterator[Char]>*/;
}
if (var77){
{
var78 = ((val* (*)(val* self))(var_76->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_76) /* item on <var_76:IndexedIterator[Char]>*/;
}
var79 = ((struct instance_standard__Char*)var78)->value; /* autounbox from nullable Object to Char */;
var_c = var79;
var81 = 'a';
{
{ /* Inline kernel#Char#>= (var_c,var81) on <var_c:Char> */
/* Covariant cast for argument 0 (i) <var81:Char> isa OTHER */
/* <var81:Char> isa OTHER */
var84 = 1; /* easy <var81:Char> isa OTHER*/
if (unlikely(!var84)) {
var_class_name87 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name87);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 593);
show_backtrace(1);
}
var88 = var_c >= var81;
var82 = var88;
goto RET_LABEL83;
RET_LABEL83:(void)0;
}
}
var_89 = var82;
if (var82){
var90 = 'z';
{
{ /* Inline kernel#Char#<= (var_c,var90) on <var_c:Char> */
/* Covariant cast for argument 0 (i) <var90:Char> isa OTHER */
/* <var90:Char> isa OTHER */
var93 = 1; /* easy <var90:Char> isa OTHER*/
if (unlikely(!var93)) {
var_class_name96 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name96);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 591);
show_backtrace(1);
}
var97 = var_c <= var90;
var91 = var97;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
}
var80 = var91;
} else {
var80 = var_89;
}
if (var80){
if (varonce98) {
var99 = varonce98;
} else {
var100 = "formal-type-name";
var101 = 16;
var102 = standard___standard__NativeString___to_s_with_length(var100, var101);
var99 = var102;
varonce98 = var99;
}
if (varonce103) {
var104 = varonce103;
} else {
var105 = "Warning: lowercase in the formal parameter type ";
var106 = 48;
var107 = standard___standard__NativeString___to_s_with_length(var105, var106);
var104 = var107;
varonce103 = var104;
}
var108 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var108 = array_instance Array[Object] */
var109 = 2;
var110 = NEW_standard__NativeArray(var109, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var110)->values[0] = (val*) var104;
((struct instance_standard__NativeArray*)var110)->values[1] = (val*) var_ptname;
{
((void (*)(val* self, val* p0, long p1))(var108->class->vft[COLOR_standard__array__Array__with_native]))(var108, var110, var109) /* with_native on <var108:Array[Object]>*/;
}
}
{
var111 = ((val* (*)(val* self))(var108->class->vft[COLOR_standard__string__Object__to_s]))(var108) /* to_s on <var108:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___warning(self, var_nfd, var99, var111); /* Direct call modelbuilder_base#ModelBuilder#warning on <self:ModelBuilder>*/
}
goto BREAK_label;
} else {
}
{
((void (*)(val* self))(var_76->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_76) /* next on <var_76:IndexedIterator[Char]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_76) on <var_76:IndexedIterator[Char]> */
RET_LABEL112:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_names, var_ptname); /* Direct call array#Array#add on <var_names:Array[String]>*/
}
var113 = 1;
{
var114 = standard___standard__Int___Discrete__successor(var_i, var113);
}
var_i = var114;
} else {
goto BREAK_label115;
}
}
BREAK_label115: (void)0;
} else {
/* <var_nclassdef:AClassdef> isa ATopClassdef */
cltype117 = type_nit__ATopClassdef.color;
idtype118 = type_nit__ATopClassdef.id;
if(cltype117 >= var_nclassdef->type->table_size) {
var116 = 0;
} else {
var116 = var_nclassdef->type->type_table[cltype117] == idtype118;
}
if (var116){
if (varonce119) {
var120 = varonce119;
} else {
var121 = "Object";
var122 = 6;
var123 = standard___standard__NativeString___to_s_with_length(var121, var122);
var120 = var123;
varonce119 = var120;
}
var_name = var120;
var124 = NULL;
var_nkind = var124;
{
var125 = nit__model___standard__Object___interface_kind(self);
}
var_mkind = var125;
var126 = NULL;
var_nvisibility = var126;
{
var127 = nit__model_base___standard__Object___public_visibility(self);
}
var_mvisibility = var127;
} else {
/* <var_nclassdef:AClassdef> isa AMainClassdef */
cltype129 = type_nit__AMainClassdef.color;
idtype130 = type_nit__AMainClassdef.id;
if(cltype129 >= var_nclassdef->type->table_size) {
var128 = 0;
} else {
var128 = var_nclassdef->type->type_table[cltype129] == idtype130;
}
if (var128){
if (varonce131) {
var132 = varonce131;
} else {
var133 = "Sys";
var134 = 3;
var135 = standard___standard__NativeString___to_s_with_length(var133, var134);
var132 = var135;
varonce131 = var132;
}
var_name = var132;
var136 = NULL;
var_nkind = var136;
{
var137 = nit__model___standard__Object___concrete_kind(self);
}
var_mkind = var137;
var138 = NULL;
var_nvisibility = var138;
{
var139 = nit__model_base___standard__Object___public_visibility(self);
}
var_mvisibility = var139;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 91);
show_backtrace(1);
}
}
}
{
var140 = nit___nit__ModelBuilder___try_get_mclass_by_name(self, var_nclassdef, var_mmodule, var_name);
}
var_mclass = var140;
var141 = NULL;
if (var_mclass == NULL) {
var142 = 1; /* is null */
} else {
var142 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mclass,var141) on <var_mclass:nullable MClass> */
var_other = var141;
{
{ /* Inline kernel#Object#is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
var147 = var_mclass == var_other;
var145 = var147;
goto RET_LABEL146;
RET_LABEL146:(void)0;
}
}
var143 = var145;
goto RET_LABEL144;
RET_LABEL144:(void)0;
}
var142 = var143;
}
if (var142){
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype150 = type_nit__AStdClassdef.color;
idtype151 = type_nit__AStdClassdef.id;
if(cltype150 >= var_nclassdef->type->table_size) {
var149 = 0;
} else {
var149 = var_nclassdef->type->type_table[cltype150] == idtype151;
}
var_152 = var149;
if (var149){
{
{ /* Inline parser_nodes#ADefinition#n_kwredef (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var155 = var_nclassdef->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <var_nclassdef:AClassdef(AStdClassdef)> */
var153 = var155;
RET_LABEL154:(void)0;
}
}
var156 = NULL;
if (var153 == NULL) {
var157 = 0; /* is null */
} else {
var157 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var153,var156) on <var153:nullable TKwredef> */
var_other160 = var156;
{
var161 = ((short int (*)(val* self, val* p0))(var153->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var153, var_other160) /* == on <var153:nullable TKwredef(TKwredef)>*/;
}
var162 = !var161;
var158 = var162;
goto RET_LABEL159;
RET_LABEL159:(void)0;
}
var157 = var158;
}
var148 = var157;
} else {
var148 = var_152;
}
if (var148){
if (varonce163) {
var164 = varonce163;
} else {
var165 = "Redef error: No imported class ";
var166 = 31;
var167 = standard___standard__NativeString___to_s_with_length(var165, var166);
var164 = var167;
varonce163 = var164;
}
if (varonce168) {
var169 = varonce168;
} else {
var170 = " to refine.";
var171 = 11;
var172 = standard___standard__NativeString___to_s_with_length(var170, var171);
var169 = var172;
varonce168 = var169;
}
var173 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var173 = array_instance Array[Object] */
var174 = 3;
var175 = NEW_standard__NativeArray(var174, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var175)->values[0] = (val*) var164;
((struct instance_standard__NativeArray*)var175)->values[1] = (val*) var_name;
((struct instance_standard__NativeArray*)var175)->values[2] = (val*) var169;
{
((void (*)(val* self, val* p0, long p1))(var173->class->vft[COLOR_standard__array__Array__with_native]))(var173, var175, var174) /* with_native on <var173:Array[Object]>*/;
}
}
{
var176 = ((val* (*)(val* self))(var173->class->vft[COLOR_standard__string__Object__to_s]))(var173) /* to_s on <var173:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(self, var_nclassdef, var176); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline mmodule#MModule#mgroup (var_mmodule) on <var_mmodule:MModule> */
var180 = var_mmodule->attrs[COLOR_nit__mmodule__MModule___mgroup].val; /* _mgroup on <var_mmodule:MModule> */
var178 = var180;
RET_LABEL179:(void)0;
}
}
var181 = NULL;
if (var178 == NULL) {
var182 = 0; /* is null */
} else {
var182 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var178,var181) on <var178:nullable MGroup> */
var_other160 = var181;
{
var185 = ((short int (*)(val* self, val* p0))(var178->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var178, var_other160) /* == on <var178:nullable MGroup(MGroup)>*/;
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
{
var188 = nit__model_base___standard__Object___protected_visibility(self);
}
{
var189 = standard___standard__Comparable____62d_61d(var_mvisibility, var188);
}
var177 = var189;
} else {
var177 = var_187;
}
if (var177){
{
{ /* Inline modelbuilder_base#ModelBuilder#model (self) on <self:ModelBuilder> */
var192 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var192 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 44);
show_backtrace(1);
}
var190 = var192;
RET_LABEL191:(void)0;
}
}
{
var193 = nit__model___Model___get_mclasses_by_name(var190, var_name);
}
var_mclasses = var193;
var194 = NULL;
if (var_mclasses == NULL) {
var195 = 0; /* is null */
} else {
var195 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mclasses,var194) on <var_mclasses:nullable Array[MClass]> */
var_other160 = var194;
{
var198 = ((short int (*)(val* self, val* p0))(var_mclasses->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mclasses, var_other160) /* == on <var_mclasses:nullable Array[MClass](Array[MClass])>*/;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 343);
show_backtrace(1);
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
var213 = NULL;
if (var210 == NULL) {
var214 = 0; /* is null */
} else {
var214 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var210,var213) on <var210:nullable MGroup> */
var_other160 = var213;
{
var217 = ((short int (*)(val* self, val* p0))(var210->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var210, var_other160) /* == on <var210:nullable MGroup(MGroup)>*/;
}
var218 = !var217;
var215 = var218;
goto RET_LABEL216;
RET_LABEL216:(void)0;
}
var214 = var215;
}
var_219 = var214;
if (var214){
{
{ /* Inline model#MClass#intro_mmodule (var_other205) on <var_other205:MClass> */
var222 = var_other205->attrs[COLOR_nit__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_other205:MClass> */
if (unlikely(var222 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 343);
show_backtrace(1);
}
var220 = var222;
RET_LABEL221:(void)0;
}
}
{
{ /* Inline mmodule#MModule#mgroup (var220) on <var220:MModule> */
var225 = var220->attrs[COLOR_nit__mmodule__MModule___mgroup].val; /* _mgroup on <var220:MModule> */
var223 = var225;
RET_LABEL224:(void)0;
}
}
if (var223 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 105);
show_backtrace(1);
} else {
{ /* Inline mproject#MGroup#mproject (var223) on <var223:nullable MGroup> */
if (unlikely(var223 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 69);
show_backtrace(1);
}
var228 = var223->attrs[COLOR_nit__mproject__MGroup___mproject].val; /* _mproject on <var223:nullable MGroup> */
if (unlikely(var228 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproject");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 69);
show_backtrace(1);
}
var226 = var228;
RET_LABEL227:(void)0;
}
}
{
{ /* Inline mmodule#MModule#mgroup (var_mmodule) on <var_mmodule:MModule> */
var231 = var_mmodule->attrs[COLOR_nit__mmodule__MModule___mgroup].val; /* _mgroup on <var_mmodule:MModule> */
var229 = var231;
RET_LABEL230:(void)0;
}
}
if (var229 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 105);
show_backtrace(1);
} else {
{ /* Inline mproject#MGroup#mproject (var229) on <var229:nullable MGroup> */
if (unlikely(var229 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 69);
show_backtrace(1);
}
var234 = var229->attrs[COLOR_nit__mproject__MGroup___mproject].val; /* _mproject on <var229:nullable MGroup> */
if (unlikely(var234 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproject");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 69);
show_backtrace(1);
}
var232 = var234;
RET_LABEL233:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var226,var232) on <var226:MProject> */
var_other = var232;
{
{ /* Inline kernel#Object#is_same_instance (var226,var_other) on <var226:MProject> */
var239 = var226 == var_other;
var237 = var239;
goto RET_LABEL238;
RET_LABEL238:(void)0;
}
}
var235 = var237;
goto RET_LABEL236;
RET_LABEL236:(void)0;
}
}
var206 = var235;
} else {
var206 = var_219;
}
if (var206){
if (varonce240) {
var241 = varonce240;
} else {
var242 = "Error: A class named `";
var243 = 22;
var244 = standard___standard__NativeString___to_s_with_length(var242, var243);
var241 = var244;
varonce240 = var241;
}
{
var245 = nit___nit__MClass___nit__model_base__MEntity__full_name(var_other205);
}
if (varonce246) {
var247 = varonce246;
} else {
var248 = "` is already defined in module `";
var249 = 32;
var250 = standard___standard__NativeString___to_s_with_length(var248, var249);
var247 = var250;
varonce246 = var247;
}
{
{ /* Inline model#MClass#intro_mmodule (var_other205) on <var_other205:MClass> */
var253 = var_other205->attrs[COLOR_nit__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_other205:MClass> */
if (unlikely(var253 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 343);
show_backtrace(1);
}
var251 = var253;
RET_LABEL252:(void)0;
}
}
if (varonce254) {
var255 = varonce254;
} else {
var256 = "` at ";
var257 = 5;
var258 = standard___standard__NativeString___to_s_with_length(var256, var257);
var255 = var258;
varonce254 = var255;
}
{
{ /* Inline model#MClass#intro (var_other205) on <var_other205:MClass> */
var261 = var_other205->attrs[COLOR_nit__model__MClass___intro].val; /* _intro on <var_other205:MClass> */
if (unlikely(var261 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 423);
show_backtrace(1);
}
var259 = var261;
RET_LABEL260:(void)0;
}
}
{
{ /* Inline model#MClassDef#location (var259) on <var259:MClassDef> */
var264 = var259->attrs[COLOR_nit__model__MClassDef___location].val; /* _location on <var259:MClassDef> */
if (unlikely(var264 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 507);
show_backtrace(1);
}
var262 = var264;
RET_LABEL263:(void)0;
}
}
if (varonce265) {
var266 = varonce265;
} else {
var267 = ".";
var268 = 1;
var269 = standard___standard__NativeString___to_s_with_length(var267, var268);
var266 = var269;
varonce265 = var266;
}
var270 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var270 = array_instance Array[Object] */
var271 = 7;
var272 = NEW_standard__NativeArray(var271, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var272)->values[0] = (val*) var241;
((struct instance_standard__NativeArray*)var272)->values[1] = (val*) var245;
((struct instance_standard__NativeArray*)var272)->values[2] = (val*) var247;
((struct instance_standard__NativeArray*)var272)->values[3] = (val*) var251;
((struct instance_standard__NativeArray*)var272)->values[4] = (val*) var255;
((struct instance_standard__NativeArray*)var272)->values[5] = (val*) var262;
((struct instance_standard__NativeArray*)var272)->values[6] = (val*) var266;
{
((void (*)(val* self, val* p0, long p1))(var270->class->vft[COLOR_standard__array__Array__with_native]))(var270, var272, var271) /* with_native on <var270:Array[Object]>*/;
}
}
{
var273 = ((val* (*)(val* self))(var270->class->vft[COLOR_standard__string__Object__to_s]))(var270) /* to_s on <var270:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(self, var_nclassdef, var273); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto BREAK_label274;
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_202); /* Direct call array#ArrayIterator#next on <var_202:ArrayIterator[MClass]>*/
}
} else {
goto BREAK_label274;
}
}
BREAK_label274: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_202) on <var_202:ArrayIterator[MClass]> */
RET_LABEL275:(void)0;
}
}
} else {
}
} else {
}
var276 = NEW_nit__MClass(&type_nit__MClass);
{
((void (*)(val* self, val* p0))(var276->class->vft[COLOR_nit__model__MClass__intro_mmodule_61d]))(var276, var_mmodule) /* intro_mmodule= on <var276:MClass>*/;
}
{
((void (*)(val* self, val* p0))(var276->class->vft[COLOR_nit__model__MClass__name_61d]))(var276, var_name) /* name= on <var276:MClass>*/;
}
{
((void (*)(val* self, val* p0))(var276->class->vft[COLOR_nit__model__MClass__setup_parameter_names]))(var276, var_names) /* setup_parameter_names on <var276:MClass>*/;
}
{
((void (*)(val* self, val* p0))(var276->class->vft[COLOR_nit__model__MClass__kind_61d]))(var276, var_mkind) /* kind= on <var276:MClass>*/;
}
{
((void (*)(val* self, val* p0))(var276->class->vft[COLOR_nit__model__MClass__visibility_61d]))(var276, var_mvisibility) /* visibility= on <var276:MClass>*/;
}
{
((void (*)(val* self))(var276->class->vft[COLOR_standard__kernel__Object__init]))(var276) /* init on <var276:MClass>*/;
}
var_mclass = var276;
} else {
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype279 = type_nit__AStdClassdef.color;
idtype280 = type_nit__AStdClassdef.id;
if(cltype279 >= var_nclassdef->type->table_size) {
var278 = 0;
} else {
var278 = var_nclassdef->type->type_table[cltype279] == idtype280;
}
var_281 = var278;
if (var278){
{
{ /* Inline modelize_class#AModule#mclass2nclassdef (var_nmodule) on <var_nmodule:AModule> */
var284 = var_nmodule->attrs[COLOR_nit__modelize_class__AModule___mclass2nclassdef].val; /* _mclass2nclassdef on <var_nmodule:AModule> */
if (unlikely(var284 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 541);
show_backtrace(1);
}
var282 = var284;
RET_LABEL283:(void)0;
}
}
{
var285 = standard___standard__MapRead___has_key(var282, var_mclass);
}
var277 = var285;
} else {
var277 = var_281;
}
if (var277){
if (varonce286) {
var287 = varonce286;
} else {
var288 = "Error: A class ";
var289 = 15;
var290 = standard___standard__NativeString___to_s_with_length(var288, var289);
var287 = var290;
varonce286 = var287;
}
if (varonce291) {
var292 = varonce291;
} else {
var293 = " is already defined at line ";
var294 = 28;
var295 = standard___standard__NativeString___to_s_with_length(var293, var294);
var292 = var295;
varonce291 = var292;
}
{
{ /* Inline modelize_class#AModule#mclass2nclassdef (var_nmodule) on <var_nmodule:AModule> */
var298 = var_nmodule->attrs[COLOR_nit__modelize_class__AModule___mclass2nclassdef].val; /* _mclass2nclassdef on <var_nmodule:AModule> */
if (unlikely(var298 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 541);
show_backtrace(1);
}
var296 = var298;
RET_LABEL297:(void)0;
}
}
{
var299 = ((val* (*)(val* self, val* p0))(var296->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var296, var_mclass) /* [] on <var296:Map[MClass, AClassdef]>*/;
}
{
{ /* Inline parser_nodes#ANode#location (var299) on <var299:nullable Object(AClassdef)> */
var302 = var299->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var299:nullable Object(AClassdef)> */
if (unlikely(var302 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 23);
show_backtrace(1);
}
var300 = var302;
RET_LABEL301:(void)0;
}
}
{
{ /* Inline location#Location#line_start (var300) on <var300:Location> */
var305 = var300->attrs[COLOR_nit__location__Location___line_start].l; /* _line_start on <var300:Location> */
var303 = var305;
RET_LABEL304:(void)0;
}
}
if (varonce306) {
var307 = varonce306;
} else {
var308 = ".";
var309 = 1;
var310 = standard___standard__NativeString___to_s_with_length(var308, var309);
var307 = var310;
varonce306 = var307;
}
var311 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var311 = array_instance Array[Object] */
var312 = 5;
var313 = NEW_standard__NativeArray(var312, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var313)->values[0] = (val*) var287;
((struct instance_standard__NativeArray*)var313)->values[1] = (val*) var_name;
((struct instance_standard__NativeArray*)var313)->values[2] = (val*) var292;
var314 = BOX_standard__Int(var303); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var313)->values[3] = (val*) var314;
((struct instance_standard__NativeArray*)var313)->values[4] = (val*) var307;
{
((void (*)(val* self, val* p0, long p1))(var311->class->vft[COLOR_standard__array__Array__with_native]))(var311, var313, var312) /* with_native on <var311:Array[Object]>*/;
}
}
{
var315 = ((val* (*)(val* self))(var311->class->vft[COLOR_standard__string__Object__to_s]))(var311) /* to_s on <var311:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(self, var_nclassdef, var315); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype318 = type_nit__AStdClassdef.color;
idtype319 = type_nit__AStdClassdef.id;
if(cltype318 >= var_nclassdef->type->table_size) {
var317 = 0;
} else {
var317 = var_nclassdef->type->type_table[cltype318] == idtype319;
}
var_320 = var317;
if (var317){
{
{ /* Inline parser_nodes#ADefinition#n_kwredef (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var323 = var_nclassdef->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <var_nclassdef:AClassdef(AStdClassdef)> */
var321 = var323;
RET_LABEL322:(void)0;
}
}
var324 = NULL;
if (var321 == NULL) {
var325 = 1; /* is null */
} else {
var325 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var321,var324) on <var321:nullable TKwredef> */
var_other = var324;
{
{ /* Inline kernel#Object#is_same_instance (var321,var_other) on <var321:nullable TKwredef(TKwredef)> */
var330 = var321 == var_other;
var328 = var330;
goto RET_LABEL329;
RET_LABEL329:(void)0;
}
}
var326 = var328;
goto RET_LABEL327;
RET_LABEL327:(void)0;
}
var325 = var326;
}
var316 = var325;
} else {
var316 = var_320;
}
if (var316){
if (varonce331) {
var332 = varonce331;
} else {
var333 = "Redef error: ";
var334 = 13;
var335 = standard___standard__NativeString___to_s_with_length(var333, var334);
var332 = var335;
varonce331 = var332;
}
if (varonce336) {
var337 = varonce336;
} else {
var338 = " is an imported class. Add the redef keyword to refine it.";
var339 = 58;
var340 = standard___standard__NativeString___to_s_with_length(var338, var339);
var337 = var340;
varonce336 = var337;
}
var341 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var341 = array_instance Array[Object] */
var342 = 3;
var343 = NEW_standard__NativeArray(var342, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var343)->values[0] = (val*) var332;
((struct instance_standard__NativeArray*)var343)->values[1] = (val*) var_name;
((struct instance_standard__NativeArray*)var343)->values[2] = (val*) var337;
{
((void (*)(val* self, val* p0, long p1))(var341->class->vft[COLOR_standard__array__Array__with_native]))(var341, var343, var342) /* with_native on <var341:Array[Object]>*/;
}
}
{
var344 = ((val* (*)(val* self))(var341->class->vft[COLOR_standard__string__Object__to_s]))(var341) /* to_s on <var341:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(self, var_nclassdef, var344); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
var346 = 0;
{
{ /* Inline kernel#Int#!= (var_arity,var346) on <var_arity:Int> */
var349 = var_arity == var346;
var350 = !var349;
var347 = var350;
goto RET_LABEL348;
RET_LABEL348:(void)0;
}
}
var_351 = var347;
if (var347){
{
{ /* Inline model#MClass#arity (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var354 = var_mclass->attrs[COLOR_nit__model__MClass___arity].l; /* _arity on <var_mclass:nullable MClass(MClass)> */
var352 = var354;
RET_LABEL353:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var352,var_arity) on <var352:Int> */
var357 = var352 == var_arity;
var358 = !var357;
var355 = var358;
goto RET_LABEL356;
RET_LABEL356:(void)0;
}
}
var345 = var355;
} else {
var345 = var_351;
}
if (var345){
if (varonce359) {
var360 = varonce359;
} else {
var361 = "Redef error: Formal parameter arity missmatch; got ";
var362 = 51;
var363 = standard___standard__NativeString___to_s_with_length(var361, var362);
var360 = var363;
varonce359 = var360;
}
if (varonce364) {
var365 = varonce364;
} else {
var366 = ", expected ";
var367 = 11;
var368 = standard___standard__NativeString___to_s_with_length(var366, var367);
var365 = var368;
varonce364 = var365;
}
{
{ /* Inline model#MClass#arity (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var371 = var_mclass->attrs[COLOR_nit__model__MClass___arity].l; /* _arity on <var_mclass:nullable MClass(MClass)> */
var369 = var371;
RET_LABEL370:(void)0;
}
}
if (varonce372) {
var373 = varonce372;
} else {
var374 = ".";
var375 = 1;
var376 = standard___standard__NativeString___to_s_with_length(var374, var375);
var373 = var376;
varonce372 = var373;
}
var377 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var377 = array_instance Array[Object] */
var378 = 5;
var379 = NEW_standard__NativeArray(var378, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var379)->values[0] = (val*) var360;
var380 = BOX_standard__Int(var_arity); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var379)->values[1] = (val*) var380;
((struct instance_standard__NativeArray*)var379)->values[2] = (val*) var365;
var381 = BOX_standard__Int(var369); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var379)->values[3] = (val*) var381;
((struct instance_standard__NativeArray*)var379)->values[4] = (val*) var373;
{
((void (*)(val* self, val* p0, long p1))(var377->class->vft[COLOR_standard__array__Array__with_native]))(var377, var379, var378) /* with_native on <var377:Array[Object]>*/;
}
}
{
var382 = ((val* (*)(val* self))(var377->class->vft[COLOR_standard__string__Object__to_s]))(var377) /* to_s on <var377:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(self, var_nclassdef, var382); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
var385 = NULL;
if (var_nkind == NULL) {
var386 = 0; /* is null */
} else {
var386 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nkind,var385) on <var_nkind:nullable AClasskind> */
var_other160 = var385;
{
var389 = ((short int (*)(val* self, val* p0))(var_nkind->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nkind, var_other160) /* == on <var_nkind:nullable AClasskind(AClasskind)>*/;
}
var390 = !var389;
var387 = var390;
goto RET_LABEL388;
RET_LABEL388:(void)0;
}
var386 = var387;
}
var_391 = var386;
if (var386){
{
var392 = nit__model___standard__Object___concrete_kind(self);
}
{
{ /* Inline kernel#Object#!= (var_mkind,var392) on <var_mkind:MClassKind> */
var_other160 = var392;
{
var395 = ((short int (*)(val* self, val* p0))(var_mkind->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mkind, var_other160) /* == on <var_mkind:MClassKind>*/;
}
var396 = !var395;
var393 = var396;
goto RET_LABEL394;
RET_LABEL394:(void)0;
}
}
var384 = var393;
} else {
var384 = var_391;
}
var_397 = var384;
if (var384){
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var400 = var_mclass->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var400 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 399);
show_backtrace(1);
}
var398 = var400;
RET_LABEL399:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var398,var_mkind) on <var398:MClassKind> */
var_other160 = var_mkind;
{
var403 = ((short int (*)(val* self, val* p0))(var398->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var398, var_other160) /* == on <var398:MClassKind>*/;
}
var404 = !var403;
var401 = var404;
goto RET_LABEL402;
RET_LABEL402:(void)0;
}
}
var383 = var401;
} else {
var383 = var_397;
}
if (var383){
if (varonce405) {
var406 = varonce405;
} else {
var407 = "Error: refinement changed the kind from a ";
var408 = 42;
var409 = standard___standard__NativeString___to_s_with_length(var407, var408);
var406 = var409;
varonce405 = var406;
}
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var412 = var_mclass->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var412 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 399);
show_backtrace(1);
}
var410 = var412;
RET_LABEL411:(void)0;
}
}
if (varonce413) {
var414 = varonce413;
} else {
var415 = " to a ";
var416 = 6;
var417 = standard___standard__NativeString___to_s_with_length(var415, var416);
var414 = var417;
varonce413 = var414;
}
var418 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var418 = array_instance Array[Object] */
var419 = 4;
var420 = NEW_standard__NativeArray(var419, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var420)->values[0] = (val*) var406;
((struct instance_standard__NativeArray*)var420)->values[1] = (val*) var410;
((struct instance_standard__NativeArray*)var420)->values[2] = (val*) var414;
((struct instance_standard__NativeArray*)var420)->values[3] = (val*) var_mkind;
{
((void (*)(val* self, val* p0, long p1))(var418->class->vft[COLOR_standard__array__Array__with_native]))(var418, var420, var419) /* with_native on <var418:Array[Object]>*/;
}
}
{
var421 = ((val* (*)(val* self))(var418->class->vft[COLOR_standard__string__Object__to_s]))(var418) /* to_s on <var418:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(self, var_nkind, var421); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
var424 = NULL;
if (var_nvisibility == NULL) {
var425 = 0; /* is null */
} else {
var425 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nvisibility,var424) on <var_nvisibility:nullable AVisibility> */
var_other160 = var424;
{
var428 = ((short int (*)(val* self, val* p0))(var_nvisibility->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nvisibility, var_other160) /* == on <var_nvisibility:nullable AVisibility(AVisibility)>*/;
}
var429 = !var428;
var426 = var429;
goto RET_LABEL427;
RET_LABEL427:(void)0;
}
var425 = var426;
}
var_430 = var425;
if (var425){
{
var431 = nit__model_base___standard__Object___public_visibility(self);
}
{
{ /* Inline kernel#Object#!= (var_mvisibility,var431) on <var_mvisibility:nullable MVisibility(MVisibility)> */
var_other160 = var431;
{
var434 = ((short int (*)(val* self, val* p0))(var_mvisibility->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mvisibility, var_other160) /* == on <var_mvisibility:nullable MVisibility(MVisibility)>*/;
}
var435 = !var434;
var432 = var435;
goto RET_LABEL433;
RET_LABEL433:(void)0;
}
}
var423 = var432;
} else {
var423 = var_430;
}
var_436 = var423;
if (var423){
{
{ /* Inline model#MClass#visibility (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var439 = var_mclass->attrs[COLOR_nit__model__MClass___visibility].val; /* _visibility on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var439 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 403);
show_backtrace(1);
}
var437 = var439;
RET_LABEL438:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var437,var_mvisibility) on <var437:MVisibility> */
var_other160 = var_mvisibility;
{
var442 = ((short int (*)(val* self, val* p0))(var437->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var437, var_other160) /* == on <var437:MVisibility>*/;
}
var443 = !var442;
var440 = var443;
goto RET_LABEL441;
RET_LABEL441:(void)0;
}
}
var422 = var440;
} else {
var422 = var_436;
}
if (var422){
if (varonce444) {
var445 = varonce444;
} else {
var446 = "Error: refinement changed the visibility from a ";
var447 = 48;
var448 = standard___standard__NativeString___to_s_with_length(var446, var447);
var445 = var448;
varonce444 = var445;
}
{
{ /* Inline model#MClass#visibility (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var451 = var_mclass->attrs[COLOR_nit__model__MClass___visibility].val; /* _visibility on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var451 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 403);
show_backtrace(1);
}
var449 = var451;
RET_LABEL450:(void)0;
}
}
if (varonce452) {
var453 = varonce452;
} else {
var454 = " to a ";
var455 = 6;
var456 = standard___standard__NativeString___to_s_with_length(var454, var455);
var453 = var456;
varonce452 = var453;
}
var457 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var457 = array_instance Array[Object] */
var458 = 4;
var459 = NEW_standard__NativeArray(var458, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var459)->values[0] = (val*) var445;
((struct instance_standard__NativeArray*)var459)->values[1] = (val*) var449;
((struct instance_standard__NativeArray*)var459)->values[2] = (val*) var453;
((struct instance_standard__NativeArray*)var459)->values[3] = (val*) var_mvisibility;
{
((void (*)(val* self, val* p0, long p1))(var457->class->vft[COLOR_standard__array__Array__with_native]))(var457, var459, var458) /* with_native on <var457:Array[Object]>*/;
}
}
{
var460 = ((val* (*)(val* self))(var457->class->vft[COLOR_standard__string__Object__to_s]))(var457) /* to_s on <var457:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(self, var_nvisibility, var460); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
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
RET_LABEL461:(void)0;
}
}
{
{ /* Inline modelize_class#AModule#mclass2nclassdef (var_nmodule) on <var_nmodule:AModule> */
var464 = var_nmodule->attrs[COLOR_nit__modelize_class__AModule___mclass2nclassdef].val; /* _mclass2nclassdef on <var_nmodule:AModule> */
if (unlikely(var464 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 541);
show_backtrace(1);
}
var462 = var464;
RET_LABEL463:(void)0;
}
}
{
var465 = standard___standard__MapRead___has_key(var462, var_mclass);
}
var466 = !var465;
if (var466){
{
{ /* Inline modelize_class#AModule#mclass2nclassdef (var_nmodule) on <var_nmodule:AModule> */
var469 = var_nmodule->attrs[COLOR_nit__modelize_class__AModule___mclass2nclassdef].val; /* _mclass2nclassdef on <var_nmodule:AModule> */
if (unlikely(var469 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 541);
show_backtrace(1);
}
var467 = var469;
RET_LABEL468:(void)0;
}
}
{
((void (*)(val* self, val* p0, val* p1))(var467->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var467, var_mclass, var_nclassdef) /* []= on <var467:Map[MClass, AClassdef]>*/;
}
var470 = NEW_standard__Array(&type_standard__Array__nit__AClassdef);
var471 = 1;
{
standard___standard__Array___with_capacity(var470, var471); /* Direct call array#Array#with_capacity on <var470:Array[AClassdef]>*/
}
var_472 = var470;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_472, var_nclassdef); /* Direct call array#AbstractArray#push on <var_472:Array[AClassdef]>*/
}
{
{ /* Inline modelize_class#AClassdef#all_defs= (var_nclassdef,var_472) on <var_nclassdef:AClassdef> */
var_nclassdef->attrs[COLOR_nit__modelize_class__AClassdef___all_defs].val = var_472; /* _all_defs on <var_nclassdef:AClassdef> */
RET_LABEL473:(void)0;
}
}
} else {
{
{ /* Inline modelize_class#AModule#mclass2nclassdef (var_nmodule) on <var_nmodule:AModule> */
var476 = var_nmodule->attrs[COLOR_nit__modelize_class__AModule___mclass2nclassdef].val; /* _mclass2nclassdef on <var_nmodule:AModule> */
if (unlikely(var476 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 541);
show_backtrace(1);
}
var474 = var476;
RET_LABEL475:(void)0;
}
}
{
var477 = ((val* (*)(val* self, val* p0))(var474->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var474, var_mclass) /* [] on <var474:Map[MClass, AClassdef]>*/;
}
{
{ /* Inline modelize_class#AClassdef#all_defs (var477) on <var477:nullable Object(AClassdef)> */
var480 = var477->attrs[COLOR_nit__modelize_class__AClassdef___all_defs].val; /* _all_defs on <var477:nullable Object(AClassdef)> */
var478 = var480;
RET_LABEL479:(void)0;
}
}
if (var478 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 133);
show_backtrace(1);
} else {
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var478, var_nclassdef); /* Direct call array#Array#add on <var478:nullable Array[AClassdef]>*/
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
long var5 /* : Int */;
val* var6 /* : FlatString */;
val* var7 /* : nullable MClass */;
val* var_objectclass /* var objectclass: nullable MClass */;
val* var8 /* : nullable MClass */;
val* var10 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
val* var11 /* : null */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : Map[MClass, AClassdef] */;
val* var20 /* : Map[MClass, AClassdef] */;
val* var21 /* : nullable Object */;
val* var_other_nclassdef /* var other_nclassdef: AClassdef */;
short int var22 /* : Bool */;
val* var_other24 /* var other: nullable Object */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
int cltype;
int idtype;
short int var28 /* : Bool */;
val* var29 /* : nullable MClassDef */;
val* var31 /* : nullable MClassDef */;
val* var33 /* : Array[MType] */;
val* var_bounds /* var bounds: Array[MType] */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
short int var_ /* var : Bool */;
long var38 /* : Int */;
long var40 /* : Int */;
long var41 /* : Int */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name;
short int var47 /* : Bool */;
long var48 /* : Int */;
long var_i /* var i: Int */;
long var49 /* : Int */;
long var51 /* : Int */;
long var_52 /* var : Int */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
int cltype56;
int idtype57;
const char* var_class_name58;
short int var59 /* : Bool */;
val* var60 /* : ANodes[AFormaldef] */;
val* var62 /* : ANodes[AFormaldef] */;
short int var63 /* : Bool */;
val* var64 /* : MClassDef */;
val* var66 /* : MClassDef */;
val* var67 /* : MClassType */;
val* var69 /* : MClassType */;
val* var70 /* : Array[MType] */;
val* var71 /* : nullable Object */;
val* var_bound /* var bound: MType */;
val* var72 /* : ANodes[AFormaldef] */;
val* var74 /* : ANodes[AFormaldef] */;
val* var75 /* : ANode */;
val* var_nfd /* var nfd: AFormaldef */;
val* var76 /* : Array[MParameterType] */;
val* var78 /* : Array[MParameterType] */;
val* var79 /* : nullable Object */;
val* var80 /* : String */;
val* var82 /* : String */;
val* var_pname /* var pname: String */;
val* var83 /* : TClassid */;
val* var85 /* : TClassid */;
val* var86 /* : String */;
short int var87 /* : Bool */;
short int var89 /* : Bool */;
short int var90 /* : Bool */;
val* var91 /* : TClassid */;
val* var93 /* : TClassid */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : NativeString */;
long var97 /* : Int */;
val* var98 /* : FlatString */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : NativeString */;
long var102 /* : Int */;
val* var103 /* : FlatString */;
val* var104 /* : TClassid */;
val* var106 /* : TClassid */;
val* var107 /* : String */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : NativeString */;
long var111 /* : Int */;
val* var112 /* : FlatString */;
static val* varonce113;
val* var114 /* : String */;
char* var115 /* : NativeString */;
long var116 /* : Int */;
val* var117 /* : FlatString */;
val* var118 /* : MClassDef */;
val* var120 /* : MClassDef */;
val* var121 /* : MModule */;
val* var123 /* : MModule */;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : NativeString */;
long var127 /* : Int */;
val* var128 /* : FlatString */;
val* var129 /* : Array[Object] */;
long var130 /* : Int */;
val* var131 /* : NativeArray[Object] */;
val* var132 /* : Object */;
val* var133 /* : String */;
val* var134 /* : nullable AType */;
val* var136 /* : nullable AType */;
val* var_nfdt /* var nfdt: nullable AType */;
val* var137 /* : null */;
short int var138 /* : Bool */;
short int var139 /* : Bool */;
short int var141 /* : Bool */;
short int var142 /* : Bool */;
val* var143 /* : null */;
short int var144 /* : Bool */;
val* var145 /* : nullable MType */;
val* var_bound146 /* var bound: nullable MType */;
val* var147 /* : null */;
short int var148 /* : Bool */;
short int var149 /* : Bool */;
short int var151 /* : Bool */;
short int var153 /* : Bool */;
short int var154 /* : Bool */;
static val* varonce155;
val* var156 /* : String */;
char* var157 /* : NativeString */;
long var158 /* : Int */;
val* var159 /* : FlatString */;
static val* varonce160;
val* var161 /* : String */;
char* var162 /* : NativeString */;
long var163 /* : Int */;
val* var164 /* : FlatString */;
val* var165 /* : Array[Object] */;
long var166 /* : Int */;
val* var167 /* : NativeArray[Object] */;
val* var168 /* : String */;
short int var170 /* : Bool */;
short int var171 /* : Bool */;
int cltype172;
int idtype173;
short int var_174 /* var : Bool */;
val* var175 /* : MClass */;
val* var177 /* : MClass */;
val* var178 /* : MClassKind */;
val* var180 /* : MClassKind */;
val* var181 /* : MClassKind */;
short int var182 /* : Bool */;
short int var184 /* : Bool */;
short int var186 /* : Bool */;
static val* varonce187;
val* var188 /* : String */;
char* var189 /* : NativeString */;
long var190 /* : Int */;
val* var191 /* : FlatString */;
static val* varonce192;
val* var193 /* : String */;
char* var194 /* : NativeString */;
long var195 /* : Int */;
val* var196 /* : FlatString */;
static val* varonce197;
val* var198 /* : String */;
char* var199 /* : NativeString */;
long var200 /* : Int */;
val* var201 /* : FlatString */;
val* var202 /* : Array[Object] */;
long var203 /* : Int */;
val* var204 /* : NativeArray[Object] */;
val* var205 /* : String */;
val* var206 /* : Array[MClassDef] */;
val* var208 /* : Array[MClassDef] */;
short int var209 /* : Bool */;
val* var210 /* : null */;
short int var211 /* : Bool */;
short int var212 /* : Bool */;
short int var214 /* : Bool */;
short int var216 /* : Bool */;
static val* varonce217;
val* var218 /* : String */;
char* var219 /* : NativeString */;
long var220 /* : Int */;
val* var221 /* : FlatString */;
static val* varonce222;
val* var223 /* : String */;
char* var224 /* : NativeString */;
long var225 /* : Int */;
val* var226 /* : FlatString */;
val* var227 /* : Array[Object] */;
long var228 /* : Int */;
val* var229 /* : NativeArray[Object] */;
val* var230 /* : String */;
val* var231 /* : MClassType */;
val* var233 /* : MClassType */;
val* var234 /* : MType */;
val* var_bound235 /* var bound: MType */;
val* var237 /* : MClassDef */;
val* var239 /* : MClassDef */;
val* var240 /* : MClassType */;
val* var242 /* : MClassType */;
val* var243 /* : Array[MType] */;
val* var244 /* : nullable Object */;
val* var_bound245 /* var bound: MType */;
long var247 /* : Int */;
long var248 /* : Int */;
val* var250 /* : MClassType */;
val* var_bound_mtype /* var bound_mtype: MClassType */;
val* var251 /* : MClassDef */;
val* var252 /* : Location */;
val* var254 /* : Location */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var256 /* : HashMap[MClassDef, AClassdef] */;
val* var258 /* : HashMap[MClassDef, AClassdef] */;
short int var259 /* : Bool */;
int cltype260;
int idtype261;
val* var262 /* : nullable ADoc */;
val* var264 /* : nullable ADoc */;
val* var_ndoc /* var ndoc: nullable ADoc */;
val* var265 /* : null */;
short int var266 /* : Bool */;
short int var267 /* : Bool */;
short int var269 /* : Bool */;
short int var270 /* : Bool */;
val* var271 /* : MDoc */;
val* var_mdoc /* var mdoc: MDoc */;
short int var274 /* : Bool */;
short int var275 /* : Bool */;
short int var_276 /* var : Bool */;
val* var277 /* : MVisibility */;
val* var279 /* : MVisibility */;
val* var280 /* : MVisibility */;
short int var281 /* : Bool */;
static val* varonce282;
val* var283 /* : String */;
char* var284 /* : NativeString */;
long var285 /* : Int */;
val* var286 /* : FlatString */;
static val* varonce287;
val* var288 /* : String */;
char* var289 /* : NativeString */;
long var290 /* : Int */;
val* var291 /* : FlatString */;
static val* varonce292;
val* var293 /* : String */;
char* var294 /* : NativeString */;
long var295 /* : Int */;
val* var296 /* : FlatString */;
val* var297 /* : Array[Object] */;
long var298 /* : Int */;
val* var299 /* : NativeArray[Object] */;
val* var300 /* : String */;
short int var301 /* : Bool */;
val* var302 /* : ToolContext */;
val* var304 /* : ToolContext */;
static val* varonce305;
val* var306 /* : String */;
char* var307 /* : NativeString */;
long var308 /* : Int */;
val* var309 /* : FlatString */;
val* var310 /* : MClassKind */;
val* var312 /* : MClassKind */;
static val* varonce313;
val* var314 /* : String */;
char* var315 /* : NativeString */;
long var316 /* : Int */;
val* var317 /* : FlatString */;
val* var318 /* : String */;
val* var319 /* : Array[Object] */;
long var320 /* : Int */;
val* var321 /* : NativeArray[Object] */;
val* var322 /* : String */;
long var323 /* : Int */;
val* var324 /* : ToolContext */;
val* var326 /* : ToolContext */;
static val* varonce327;
val* var328 /* : String */;
char* var329 /* : NativeString */;
long var330 /* : Int */;
val* var331 /* : FlatString */;
val* var332 /* : MClassKind */;
val* var334 /* : MClassKind */;
static val* varonce335;
val* var336 /* : String */;
char* var337 /* : NativeString */;
long var338 /* : Int */;
val* var339 /* : FlatString */;
val* var340 /* : String */;
val* var341 /* : Array[Object] */;
long var342 /* : Int */;
val* var343 /* : NativeArray[Object] */;
val* var344 /* : String */;
long var345 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 140);
show_backtrace(1);
}
var_mmodule = var;
if (varonce) {
var3 = varonce;
} else {
var4 = "Object";
var5 = 6;
var6 = standard___standard__NativeString___to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
{
var7 = nit___nit__ModelBuilder___try_get_mclass_by_name(self, var_nmodule, var_mmodule, var3);
}
var_objectclass = var7;
{
{ /* Inline modelize_class#AClassdef#mclass (var_nclassdef) on <var_nclassdef:AClassdef> */
var10 = var_nclassdef->attrs[COLOR_nit__modelize_class__AClassdef___mclass].val; /* _mclass on <var_nclassdef:AClassdef> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_mclass = var8;
var11 = NULL;
if (var_mclass == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mclass,var11) on <var_mclass:nullable MClass> */
var_other = var11;
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
{ /* Inline modelize_class#AModule#mclass2nclassdef (var_nmodule) on <var_nmodule:AModule> */
var20 = var_nmodule->attrs[COLOR_nit__modelize_class__AModule___mclass2nclassdef].val; /* _mclass2nclassdef on <var_nmodule:AModule> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 541);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = ((val* (*)(val* self, val* p0))(var18->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var18, var_mclass) /* [] on <var18:Map[MClass, AClassdef]>*/;
}
var_other_nclassdef = var21;
{
{ /* Inline kernel#Object#!= (var_other_nclassdef,var_nclassdef) on <var_other_nclassdef:AClassdef> */
var_other24 = var_nclassdef;
{
var25 = ((short int (*)(val* self, val* p0))(var_other_nclassdef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_other_nclassdef, var_other24) /* == on <var_other_nclassdef:AClassdef>*/;
}
var26 = !var25;
var22 = var26;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype = type_nit__AStdClassdef.color;
idtype = type_nit__AStdClassdef.id;
if(cltype >= var_nclassdef->type->table_size) {
var27 = 0;
} else {
var27 = var_nclassdef->type->type_table[cltype] == idtype;
}
var28 = !var27;
if (unlikely(!var28)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 148);
show_backtrace(1);
}
{
{ /* Inline modelize_class#AClassdef#mclassdef (var_other_nclassdef) on <var_other_nclassdef:AClassdef> */
var31 = var_other_nclassdef->attrs[COLOR_nit__modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_other_nclassdef:AClassdef> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline modelize_class#AClassdef#mclassdef= (var_nclassdef,var29) on <var_nclassdef:AClassdef> */
var_nclassdef->attrs[COLOR_nit__modelize_class__AClassdef___mclassdef].val = var29; /* _mclassdef on <var_nclassdef:AClassdef> */
RET_LABEL32:(void)0;
}
}
goto RET_LABEL;
} else {
}
var33 = NEW_standard__Array(&type_standard__Array__nit__MType);
{
standard___standard__Array___standard__kernel__Object__init(var33); /* Direct call array#Array#init on <var33:Array[MType]>*/
}
var_bounds = var33;
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype36 = type_nit__AStdClassdef.color;
idtype37 = type_nit__AStdClassdef.id;
if(cltype36 >= var_nclassdef->type->table_size) {
var35 = 0;
} else {
var35 = var_nclassdef->type->type_table[cltype36] == idtype37;
}
var_ = var35;
if (var35){
{
{ /* Inline model#MClass#arity (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var40 = var_mclass->attrs[COLOR_nit__model__MClass___arity].l; /* _arity on <var_mclass:nullable MClass(MClass)> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
var41 = 0;
{
{ /* Inline kernel#Int#> (var38,var41) on <var38:Int> */
/* Covariant cast for argument 0 (i) <var41:Int> isa OTHER */
/* <var41:Int> isa OTHER */
var44 = 1; /* easy <var41:Int> isa OTHER*/
if (unlikely(!var44)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var47 = var38 > var41;
var42 = var47;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
var34 = var42;
} else {
var34 = var_;
}
if (var34){
var48 = 0;
var_i = var48;
{
{ /* Inline model#MClass#arity (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var51 = var_mclass->attrs[COLOR_nit__model__MClass___arity].l; /* _arity on <var_mclass:nullable MClass(MClass)> */
var49 = var51;
RET_LABEL50:(void)0;
}
}
var_52 = var49;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_52) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_52:Int> isa OTHER */
/* <var_52:Int> isa OTHER */
var55 = 1; /* easy <var_52:Int> isa OTHER*/
if (unlikely(!var55)) {
var_class_name58 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name58);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var59 = var_i < var_52;
var53 = var59;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
if (var53){
{
{ /* Inline parser_nodes#AStdClassdef#n_formaldefs (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var62 = var_nclassdef->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_formaldefs].val; /* _n_formaldefs on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_formaldefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1027);
show_backtrace(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
var63 = nit___nit__ANodes___standard__abstract_collection__Collection__is_empty(var60);
}
if (var63){
{
{ /* Inline model#MClass#intro (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var66 = var_mclass->attrs[COLOR_nit__model__MClass___intro].val; /* _intro on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 423);
show_backtrace(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var64) on <var64:MClassDef> */
var69 = var64->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var64:MClassDef> */
if (unlikely(var69 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var67 = var69;
RET_LABEL68:(void)0;
}
}
{
var70 = ((val* (*)(val* self))(var67->class->vft[COLOR_nit__model__MClassType__arguments]))(var67) /* arguments on <var67:MClassType>*/;
}
{
var71 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var70, var_i);
}
var_bound = var71;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_bounds, var_bound); /* Direct call array#Array#add on <var_bounds:Array[MType]>*/
}
goto BREAK_label;
} else {
}
{
{ /* Inline parser_nodes#AStdClassdef#n_formaldefs (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var74 = var_nclassdef->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_formaldefs].val; /* _n_formaldefs on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_formaldefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1027);
show_backtrace(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
{
var75 = nit___nit__ANodes___standard__abstract_collection__SequenceRead___91d_93d(var72, var_i);
}
var_nfd = var75;
{
{ /* Inline model#MClass#mparameters (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var78 = var_mclass->attrs[COLOR_nit__model__MClass___mparameters].val; /* _mparameters on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 368);
show_backtrace(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
{
var79 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var76, var_i);
}
{
{ /* Inline model#MParameterType#name (var79) on <var79:nullable Object(MParameterType)> */
var82 = var79->attrs[COLOR_nit__model__MParameterType___name].val; /* _name on <var79:nullable Object(MParameterType)> */
if (unlikely(var82 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1391);
show_backtrace(1);
}
var80 = var82;
RET_LABEL81:(void)0;
}
}
var_pname = var80;
{
{ /* Inline parser_nodes#AFormaldef#n_id (var_nfd) on <var_nfd:AFormaldef> */
var85 = var_nfd->attrs[COLOR_nit__parser_nodes__AFormaldef___n_id].val; /* _n_id on <var_nfd:AFormaldef> */
if (unlikely(var85 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1107);
show_backtrace(1);
}
var83 = var85;
RET_LABEL84:(void)0;
}
}
{
var86 = nit__lexer_work___Token___text(var83);
}
{
{ /* Inline kernel#Object#!= (var86,var_pname) on <var86:String> */
var_other24 = var_pname;
{
var89 = ((short int (*)(val* self, val* p0))(var86->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var86, var_other24) /* == on <var86:String>*/;
}
var90 = !var89;
var87 = var90;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
}
if (var87){
{
{ /* Inline parser_nodes#AFormaldef#n_id (var_nfd) on <var_nfd:AFormaldef> */
var93 = var_nfd->attrs[COLOR_nit__parser_nodes__AFormaldef___n_id].val; /* _n_id on <var_nfd:AFormaldef> */
if (unlikely(var93 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1107);
show_backtrace(1);
}
var91 = var93;
RET_LABEL92:(void)0;
}
}
if (varonce94) {
var95 = varonce94;
} else {
var96 = "Error: Formal parameter type #";
var97 = 30;
var98 = standard___standard__NativeString___to_s_with_length(var96, var97);
var95 = var98;
varonce94 = var95;
}
if (varonce99) {
var100 = varonce99;
} else {
var101 = " `";
var102 = 2;
var103 = standard___standard__NativeString___to_s_with_length(var101, var102);
var100 = var103;
varonce99 = var100;
}
{
{ /* Inline parser_nodes#AFormaldef#n_id (var_nfd) on <var_nfd:AFormaldef> */
var106 = var_nfd->attrs[COLOR_nit__parser_nodes__AFormaldef___n_id].val; /* _n_id on <var_nfd:AFormaldef> */
if (unlikely(var106 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1107);
show_backtrace(1);
}
var104 = var106;
RET_LABEL105:(void)0;
}
}
{
var107 = nit__lexer_work___Token___text(var104);
}
if (varonce108) {
var109 = varonce108;
} else {
var110 = "` must be named `";
var111 = 17;
var112 = standard___standard__NativeString___to_s_with_length(var110, var111);
var109 = var112;
varonce108 = var109;
}
if (varonce113) {
var114 = varonce113;
} else {
var115 = "\' as in the original definition in module `";
var116 = 43;
var117 = standard___standard__NativeString___to_s_with_length(var115, var116);
var114 = var117;
varonce113 = var114;
}
{
{ /* Inline model#MClass#intro (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var120 = var_mclass->attrs[COLOR_nit__model__MClass___intro].val; /* _intro on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var120 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 423);
show_backtrace(1);
}
var118 = var120;
RET_LABEL119:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var118) on <var118:MClassDef> */
var123 = var118->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var118:MClassDef> */
if (unlikely(var123 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var121 = var123;
RET_LABEL122:(void)0;
}
}
if (varonce124) {
var125 = varonce124;
} else {
var126 = "`.";
var127 = 2;
var128 = standard___standard__NativeString___to_s_with_length(var126, var127);
var125 = var128;
varonce124 = var125;
}
var129 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var129 = array_instance Array[Object] */
var130 = 9;
var131 = NEW_standard__NativeArray(var130, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var131)->values[0] = (val*) var95;
var132 = BOX_standard__Int(var_i); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var131)->values[1] = (val*) var132;
((struct instance_standard__NativeArray*)var131)->values[2] = (val*) var100;
((struct instance_standard__NativeArray*)var131)->values[3] = (val*) var107;
((struct instance_standard__NativeArray*)var131)->values[4] = (val*) var109;
((struct instance_standard__NativeArray*)var131)->values[5] = (val*) var_pname;
((struct instance_standard__NativeArray*)var131)->values[6] = (val*) var114;
((struct instance_standard__NativeArray*)var131)->values[7] = (val*) var121;
((struct instance_standard__NativeArray*)var131)->values[8] = (val*) var125;
{
((void (*)(val* self, val* p0, long p1))(var129->class->vft[COLOR_standard__array__Array__with_native]))(var129, var131, var130) /* with_native on <var129:Array[Object]>*/;
}
}
{
var133 = ((val* (*)(val* self))(var129->class->vft[COLOR_standard__string__Object__to_s]))(var129) /* to_s on <var129:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(self, var91, var133); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
{
{ /* Inline parser_nodes#AFormaldef#n_type (var_nfd) on <var_nfd:AFormaldef> */
var136 = var_nfd->attrs[COLOR_nit__parser_nodes__AFormaldef___n_type].val; /* _n_type on <var_nfd:AFormaldef> */
var134 = var136;
RET_LABEL135:(void)0;
}
}
var_nfdt = var134;
var137 = NULL;
if (var_nfdt == NULL) {
var138 = 0; /* is null */
} else {
var138 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nfdt,var137) on <var_nfdt:nullable AType> */
var_other24 = var137;
{
var141 = ((short int (*)(val* self, val* p0))(var_nfdt->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nfdt, var_other24) /* == on <var_nfdt:nullable AType(AType)>*/;
}
var142 = !var141;
var139 = var142;
goto RET_LABEL140;
RET_LABEL140:(void)0;
}
var138 = var139;
}
if (var138){
var143 = NULL;
var144 = 0;
{
var145 = nit__modelize_class___ModelBuilder___resolve_mtype_unchecked(self, var_mmodule, var143, var_nfdt, var144);
}
var_bound146 = var145;
var147 = NULL;
if (var_bound146 == NULL) {
var148 = 1; /* is null */
} else {
var148 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_bound146,var147) on <var_bound146:nullable MType> */
var_other = var147;
{
{ /* Inline kernel#Object#is_same_instance (var_bound146,var_other) on <var_bound146:nullable MType(MType)> */
var153 = var_bound146 == var_other;
var151 = var153;
goto RET_LABEL152;
RET_LABEL152:(void)0;
}
}
var149 = var151;
goto RET_LABEL150;
RET_LABEL150:(void)0;
}
var148 = var149;
}
if (var148){
goto RET_LABEL;
} else {
}
{
var154 = ((short int (*)(val* self))(var_bound146->class->vft[COLOR_nit__model__MType__need_anchor]))(var_bound146) /* need_anchor on <var_bound146:nullable MType(MType)>*/;
}
if (var154){
if (varonce155) {
var156 = varonce155;
} else {
var157 = "Error: Formal parameter type `";
var158 = 30;
var159 = standard___standard__NativeString___to_s_with_length(var157, var158);
var156 = var159;
varonce155 = var156;
}
if (varonce160) {
var161 = varonce160;
} else {
var162 = "\' bounded with a formal parameter type";
var163 = 38;
var164 = standard___standard__NativeString___to_s_with_length(var162, var163);
var161 = var164;
varonce160 = var161;
}
var165 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var165 = array_instance Array[Object] */
var166 = 3;
var167 = NEW_standard__NativeArray(var166, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var167)->values[0] = (val*) var156;
((struct instance_standard__NativeArray*)var167)->values[1] = (val*) var_pname;
((struct instance_standard__NativeArray*)var167)->values[2] = (val*) var161;
{
((void (*)(val* self, val* p0, long p1))(var165->class->vft[COLOR_standard__array__Array__with_native]))(var165, var167, var166) /* with_native on <var165:Array[Object]>*/;
}
}
{
var168 = ((val* (*)(val* self))(var165->class->vft[COLOR_standard__string__Object__to_s]))(var165) /* to_s on <var165:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(self, var_nfd, var168); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_bounds, var_bound146); /* Direct call array#Array#add on <var_bounds:Array[MType]>*/
}
{
{ /* Inline modelize_class#AFormaldef#bound= (var_nfd,var_bound146) on <var_nfd:AFormaldef> */
var_nfd->attrs[COLOR_nit__modelize_class__AFormaldef___bound].val = var_bound146; /* _bound on <var_nfd:AFormaldef> */
RET_LABEL169:(void)0;
}
}
}
/* <var_bound146:nullable MType(MType)> isa MClassType */
cltype172 = type_nit__MClassType.color;
idtype173 = type_nit__MClassType.id;
if(cltype172 >= var_bound146->type->table_size) {
var171 = 0;
} else {
var171 = var_bound146->type->type_table[cltype172] == idtype173;
}
var_174 = var171;
if (var171){
{
{ /* Inline model#MClassType#mclass (var_bound146) on <var_bound146:nullable MType(MClassType)> */
var177 = var_bound146->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_bound146:nullable MType(MClassType)> */
if (unlikely(var177 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var175 = var177;
RET_LABEL176:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var175) on <var175:MClass> */
var180 = var175->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var175:MClass> */
if (unlikely(var180 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 399);
show_backtrace(1);
}
var178 = var180;
RET_LABEL179:(void)0;
}
}
{
var181 = nit__model___standard__Object___enum_kind(self);
}
{
{ /* Inline kernel#Object#== (var178,var181) on <var178:MClassKind> */
var_other = var181;
{
{ /* Inline kernel#Object#is_same_instance (var178,var_other) on <var178:MClassKind> */
var186 = var178 == var_other;
var184 = var186;
goto RET_LABEL185;
RET_LABEL185:(void)0;
}
}
var182 = var184;
goto RET_LABEL183;
RET_LABEL183:(void)0;
}
}
var170 = var182;
} else {
var170 = var_174;
}
if (var170){
if (varonce187) {
var188 = varonce187;
} else {
var189 = "useless-bound";
var190 = 13;
var191 = standard___standard__NativeString___to_s_with_length(var189, var190);
var188 = var191;
varonce187 = var188;
}
if (varonce192) {
var193 = varonce192;
} else {
var194 = "Warning: Useless formal parameter type since `";
var195 = 46;
var196 = standard___standard__NativeString___to_s_with_length(var194, var195);
var193 = var196;
varonce192 = var193;
}
if (varonce197) {
var198 = varonce197;
} else {
var199 = "` cannnot have subclasses.";
var200 = 26;
var201 = standard___standard__NativeString___to_s_with_length(var199, var200);
var198 = var201;
varonce197 = var198;
}
var202 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var202 = array_instance Array[Object] */
var203 = 3;
var204 = NEW_standard__NativeArray(var203, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var204)->values[0] = (val*) var193;
((struct instance_standard__NativeArray*)var204)->values[1] = (val*) var_bound146;
((struct instance_standard__NativeArray*)var204)->values[2] = (val*) var198;
{
((void (*)(val* self, val* p0, long p1))(var202->class->vft[COLOR_standard__array__Array__with_native]))(var202, var204, var203) /* with_native on <var202:Array[Object]>*/;
}
}
{
var205 = ((val* (*)(val* self))(var202->class->vft[COLOR_standard__string__Object__to_s]))(var202) /* to_s on <var202:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___warning(self, var_nfdt, var188, var205); /* Direct call modelbuilder_base#ModelBuilder#warning on <self:ModelBuilder>*/
}
} else {
}
} else {
{
{ /* Inline model#MClass#mclassdefs (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var208 = var_mclass->attrs[COLOR_nit__model__MClass___mclassdefs].val; /* _mclassdefs on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var208 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 417);
show_backtrace(1);
}
var206 = var208;
RET_LABEL207:(void)0;
}
}
{
var209 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var206);
}
if (var209){
var210 = NULL;
if (var_objectclass == NULL) {
var211 = 1; /* is null */
} else {
var211 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_objectclass,var210) on <var_objectclass:nullable MClass> */
var_other = var210;
{
{ /* Inline kernel#Object#is_same_instance (var_objectclass,var_other) on <var_objectclass:nullable MClass(MClass)> */
var216 = var_objectclass == var_other;
var214 = var216;
goto RET_LABEL215;
RET_LABEL215:(void)0;
}
}
var212 = var214;
goto RET_LABEL213;
RET_LABEL213:(void)0;
}
var211 = var212;
}
if (var211){
if (varonce217) {
var218 = varonce217;
} else {
var219 = "Error: Formal parameter type `";
var220 = 30;
var221 = standard___standard__NativeString___to_s_with_length(var219, var220);
var218 = var221;
varonce217 = var218;
}
if (varonce222) {
var223 = varonce222;
} else {
var224 = "\' unbounded but no Object class exist.";
var225 = 38;
var226 = standard___standard__NativeString___to_s_with_length(var224, var225);
var223 = var226;
varonce222 = var223;
}
var227 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var227 = array_instance Array[Object] */
var228 = 3;
var229 = NEW_standard__NativeArray(var228, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var229)->values[0] = (val*) var218;
((struct instance_standard__NativeArray*)var229)->values[1] = (val*) var_pname;
((struct instance_standard__NativeArray*)var229)->values[2] = (val*) var223;
{
((void (*)(val* self, val* p0, long p1))(var227->class->vft[COLOR_standard__array__Array__with_native]))(var227, var229, var228) /* with_native on <var227:Array[Object]>*/;
}
}
{
var230 = ((val* (*)(val* self))(var227->class->vft[COLOR_standard__string__Object__to_s]))(var227) /* to_s on <var227:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(self, var_nfd, var230); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClass#mclass_type (var_objectclass) on <var_objectclass:nullable MClass(MClass)> */
var233 = var_objectclass->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var_objectclass:nullable MClass(MClass)> */
if (unlikely(var233 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var231 = var233;
RET_LABEL232:(void)0;
}
}
{
var234 = nit___nit__MType___as_nullable(var231);
}
var_bound235 = var234;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_bounds, var_bound235); /* Direct call array#Array#add on <var_bounds:Array[MType]>*/
}
{
{ /* Inline modelize_class#AFormaldef#bound= (var_nfd,var_bound235) on <var_nfd:AFormaldef> */
var_nfd->attrs[COLOR_nit__modelize_class__AFormaldef___bound].val = var_bound235; /* _bound on <var_nfd:AFormaldef> */
RET_LABEL236:(void)0;
}
}
} else {
{
{ /* Inline model#MClass#intro (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var239 = var_mclass->attrs[COLOR_nit__model__MClass___intro].val; /* _intro on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var239 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 423);
show_backtrace(1);
}
var237 = var239;
RET_LABEL238:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var237) on <var237:MClassDef> */
var242 = var237->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var237:MClassDef> */
if (unlikely(var242 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var240 = var242;
RET_LABEL241:(void)0;
}
}
{
var243 = ((val* (*)(val* self))(var240->class->vft[COLOR_nit__model__MClassType__arguments]))(var240) /* arguments on <var240:MClassType>*/;
}
{
var244 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var243, var_i);
}
var_bound245 = var244;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_bounds, var_bound245); /* Direct call array#Array#add on <var_bounds:Array[MType]>*/
}
{
{ /* Inline modelize_class#AFormaldef#bound= (var_nfd,var_bound245) on <var_nfd:AFormaldef> */
var_nfd->attrs[COLOR_nit__modelize_class__AFormaldef___bound].val = var_bound245; /* _bound on <var_nfd:AFormaldef> */
RET_LABEL246:(void)0;
}
}
}
}
BREAK_label: (void)0;
var247 = 1;
{
var248 = standard___standard__Int___Discrete__successor(var_i, var247);
}
var_i = var248;
} else {
goto BREAK_label249;
}
}
BREAK_label249: (void)0;
} else {
}
{
var250 = nit___nit__MClass___get_mtype(var_mclass, var_bounds);
}
var_bound_mtype = var250;
var251 = NEW_nit__MClassDef(&type_nit__MClassDef);
{
{ /* Inline parser_nodes#ANode#location (var_nclassdef) on <var_nclassdef:AClassdef> */
var254 = var_nclassdef->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var_nclassdef:AClassdef> */
if (unlikely(var254 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 23);
show_backtrace(1);
}
var252 = var254;
RET_LABEL253:(void)0;
}
}
{
((void (*)(val* self, val* p0))(var251->class->vft[COLOR_nit__model__MClassDef__mmodule_61d]))(var251, var_mmodule) /* mmodule= on <var251:MClassDef>*/;
}
{
((void (*)(val* self, val* p0))(var251->class->vft[COLOR_nit__model__MClassDef__bound_mtype_61d]))(var251, var_bound_mtype) /* bound_mtype= on <var251:MClassDef>*/;
}
{
((void (*)(val* self, val* p0))(var251->class->vft[COLOR_nit__model__MClassDef__location_61d]))(var251, var252) /* location= on <var251:MClassDef>*/;
}
{
((void (*)(val* self))(var251->class->vft[COLOR_standard__kernel__Object__init]))(var251) /* init on <var251:MClassDef>*/;
}
var_mclassdef = var251;
{
{ /* Inline modelize_class#AClassdef#mclassdef= (var_nclassdef,var_mclassdef) on <var_nclassdef:AClassdef> */
var_nclassdef->attrs[COLOR_nit__modelize_class__AClassdef___mclassdef].val = var_mclassdef; /* _mclassdef on <var_nclassdef:AClassdef> */
RET_LABEL255:(void)0;
}
}
{
{ /* Inline modelize_class#ModelBuilder#mclassdef2nclassdef (self) on <self:ModelBuilder> */
var258 = self->attrs[COLOR_nit__modelize_class__ModelBuilder___mclassdef2nclassdef].val; /* _mclassdef2nclassdef on <self:ModelBuilder> */
if (unlikely(var258 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 426);
show_backtrace(1);
}
var256 = var258;
RET_LABEL257:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var256, var_mclassdef, var_nclassdef); /* Direct call hash_collection#HashMap#[]= on <var256:HashMap[MClassDef, AClassdef]>*/
}
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype260 = type_nit__AStdClassdef.color;
idtype261 = type_nit__AStdClassdef.id;
if(cltype260 >= var_nclassdef->type->table_size) {
var259 = 0;
} else {
var259 = var_nclassdef->type->type_table[cltype260] == idtype261;
}
if (var259){
{
{ /* Inline parser_nodes#ADefinition#n_doc (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var264 = var_nclassdef->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <var_nclassdef:AClassdef(AStdClassdef)> */
var262 = var264;
RET_LABEL263:(void)0;
}
}
var_ndoc = var262;
var265 = NULL;
if (var_ndoc == NULL) {
var266 = 0; /* is null */
} else {
var266 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ndoc,var265) on <var_ndoc:nullable ADoc> */
var_other24 = var265;
{
var269 = ((short int (*)(val* self, val* p0))(var_ndoc->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ndoc, var_other24) /* == on <var_ndoc:nullable ADoc(ADoc)>*/;
}
var270 = !var269;
var267 = var270;
goto RET_LABEL268;
RET_LABEL268:(void)0;
}
var266 = var267;
}
if (var266){
{
var271 = nit__modelbuilder_base___ADoc___to_mdoc(var_ndoc);
}
var_mdoc = var271;
{
{ /* Inline mdoc#MEntity#mdoc= (var_mclassdef,var_mdoc) on <var_mclassdef:MClassDef> */
var_mclassdef->attrs[COLOR_nit__mdoc__MEntity___mdoc].val = var_mdoc; /* _mdoc on <var_mclassdef:MClassDef> */
RET_LABEL272:(void)0;
}
}
{
{ /* Inline mdoc#MDoc#original_mentity= (var_mdoc,var_mclassdef) on <var_mdoc:MDoc> */
var_mdoc->attrs[COLOR_nit__mdoc__MDoc___original_mentity].val = var_mclassdef; /* _original_mentity on <var_mdoc:MDoc> */
RET_LABEL273:(void)0;
}
}
} else {
{
var275 = nit___nit__MClassDef___is_intro(var_mclassdef);
}
var_276 = var275;
if (var275){
{
{ /* Inline model#MClass#visibility (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var279 = var_mclass->attrs[COLOR_nit__model__MClass___visibility].val; /* _visibility on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var279 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 403);
show_backtrace(1);
}
var277 = var279;
RET_LABEL278:(void)0;
}
}
{
var280 = nit__model_base___standard__Object___public_visibility(self);
}
{
var281 = standard___standard__Comparable____62d_61d(var277, var280);
}
var274 = var281;
} else {
var274 = var_276;
}
if (var274){
if (varonce282) {
var283 = varonce282;
} else {
var284 = "missing-doc";
var285 = 11;
var286 = standard___standard__NativeString___to_s_with_length(var284, var285);
var283 = var286;
varonce282 = var283;
}
if (varonce287) {
var288 = varonce287;
} else {
var289 = "Documentation warning: Undocumented public class `";
var290 = 50;
var291 = standard___standard__NativeString___to_s_with_length(var289, var290);
var288 = var291;
varonce287 = var288;
}
if (varonce292) {
var293 = varonce292;
} else {
var294 = "`";
var295 = 1;
var296 = standard___standard__NativeString___to_s_with_length(var294, var295);
var293 = var296;
varonce292 = var293;
}
var297 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var297 = array_instance Array[Object] */
var298 = 3;
var299 = NEW_standard__NativeArray(var298, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var299)->values[0] = (val*) var288;
((struct instance_standard__NativeArray*)var299)->values[1] = (val*) var_mclass;
((struct instance_standard__NativeArray*)var299)->values[2] = (val*) var293;
{
((void (*)(val* self, val* p0, long p1))(var297->class->vft[COLOR_standard__array__Array__with_native]))(var297, var299, var298) /* with_native on <var297:Array[Object]>*/;
}
}
{
var300 = ((val* (*)(val* self))(var297->class->vft[COLOR_standard__string__Object__to_s]))(var297) /* to_s on <var297:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___advice(self, var_nclassdef, var283, var300); /* Direct call modelbuilder_base#ModelBuilder#advice on <self:ModelBuilder>*/
}
} else {
}
}
} else {
}
{
var301 = nit___nit__MClassDef___is_intro(var_mclassdef);
}
if (var301){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var304 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var304 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var302 = var304;
RET_LABEL303:(void)0;
}
}
if (varonce305) {
var306 = varonce305;
} else {
var307 = " introduces new ";
var308 = 16;
var309 = standard___standard__NativeString___to_s_with_length(var307, var308);
var306 = var309;
varonce305 = var306;
}
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var312 = var_mclass->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var312 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 399);
show_backtrace(1);
}
var310 = var312;
RET_LABEL311:(void)0;
}
}
if (varonce313) {
var314 = varonce313;
} else {
var315 = " ";
var316 = 1;
var317 = standard___standard__NativeString___to_s_with_length(var315, var316);
var314 = var317;
varonce313 = var314;
}
{
var318 = nit___nit__MClass___nit__model_base__MEntity__full_name(var_mclass);
}
var319 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var319 = array_instance Array[Object] */
var320 = 5;
var321 = NEW_standard__NativeArray(var320, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var321)->values[0] = (val*) var_mclassdef;
((struct instance_standard__NativeArray*)var321)->values[1] = (val*) var306;
((struct instance_standard__NativeArray*)var321)->values[2] = (val*) var310;
((struct instance_standard__NativeArray*)var321)->values[3] = (val*) var314;
((struct instance_standard__NativeArray*)var321)->values[4] = (val*) var318;
{
((void (*)(val* self, val* p0, long p1))(var319->class->vft[COLOR_standard__array__Array__with_native]))(var319, var321, var320) /* with_native on <var319:Array[Object]>*/;
}
}
{
var322 = ((val* (*)(val* self))(var319->class->vft[COLOR_standard__string__Object__to_s]))(var319) /* to_s on <var319:Array[Object]>*/;
}
var323 = 3;
{
nit___nit__ToolContext___info(var302, var322, var323); /* Direct call toolcontext#ToolContext#info on <var302:ToolContext>*/
}
} else {
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var326 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var326 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var324 = var326;
RET_LABEL325:(void)0;
}
}
if (varonce327) {
var328 = varonce327;
} else {
var329 = " refine ";
var330 = 8;
var331 = standard___standard__NativeString___to_s_with_length(var329, var330);
var328 = var331;
varonce327 = var328;
}
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var334 = var_mclass->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var334 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 399);
show_backtrace(1);
}
var332 = var334;
RET_LABEL333:(void)0;
}
}
if (varonce335) {
var336 = varonce335;
} else {
var337 = " ";
var338 = 1;
var339 = standard___standard__NativeString___to_s_with_length(var337, var338);
var336 = var339;
varonce335 = var336;
}
{
var340 = nit___nit__MClass___nit__model_base__MEntity__full_name(var_mclass);
}
var341 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var341 = array_instance Array[Object] */
var342 = 5;
var343 = NEW_standard__NativeArray(var342, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var343)->values[0] = (val*) var_mclassdef;
((struct instance_standard__NativeArray*)var343)->values[1] = (val*) var328;
((struct instance_standard__NativeArray*)var343)->values[2] = (val*) var332;
((struct instance_standard__NativeArray*)var343)->values[3] = (val*) var336;
((struct instance_standard__NativeArray*)var343)->values[4] = (val*) var340;
{
((void (*)(val* self, val* p0, long p1))(var341->class->vft[COLOR_standard__array__Array__with_native]))(var341, var343, var342) /* with_native on <var341:Array[Object]>*/;
}
}
{
var344 = ((val* (*)(val* self))(var341->class->vft[COLOR_standard__string__Object__to_s]))(var341) /* to_s on <var341:Array[Object]>*/;
}
var345 = 3;
{
nit___nit__ToolContext___info(var324, var344, var345); /* Direct call toolcontext#ToolContext#info on <var324:ToolContext>*/
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
val* var_mmodule /* var mmodule: MModule */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : FlatString */;
val* var7 /* : nullable MClass */;
val* var_objectclass /* var objectclass: nullable MClass */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : FlatString */;
val* var13 /* : nullable MClass */;
val* var_pointerclass /* var pointerclass: nullable MClass */;
val* var14 /* : nullable MClass */;
val* var16 /* : nullable MClass */;
val* var_mclass /* var mclass: MClass */;
val* var17 /* : nullable MClassDef */;
val* var19 /* : nullable MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
short int var20 /* : Bool */;
short int var_specobject /* var specobject: Bool */;
short int var21 /* : Bool */;
short int var_specpointer /* var specpointer: Bool */;
val* var22 /* : Array[MClassType] */;
val* var_supertypes /* var supertypes: Array[MClassType] */;
short int var23 /* : Bool */;
int cltype;
int idtype;
val* var24 /* : ANodes[ASuperclass] */;
val* var26 /* : ANodes[ASuperclass] */;
val* var_ /* var : ANodes[ASuperclass] */;
val* var27 /* : Iterator[ANode] */;
val* var_28 /* var : Iterator[ASuperclass] */;
short int var29 /* : Bool */;
val* var30 /* : nullable Object */;
val* var_nsc /* var nsc: ASuperclass */;
short int var31 /* : Bool */;
val* var32 /* : AType */;
val* var34 /* : AType */;
val* var_ntype /* var ntype: AType */;
short int var35 /* : Bool */;
val* var36 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var37 /* : null */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
short int var47 /* : Bool */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
long var51 /* : Int */;
val* var52 /* : FlatString */;
val* var53 /* : MClassKind */;
val* var55 /* : MClassKind */;
val* var56 /* : MClass */;
val* var58 /* : MClass */;
val* var59 /* : MClassKind */;
val* var61 /* : MClassKind */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
long var67 /* : Int */;
val* var68 /* : FlatString */;
val* var69 /* : MClassKind */;
val* var71 /* : MClassKind */;
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
val* var82 /* : MClass */;
val* var84 /* : MClass */;
val* var85 /* : MClassKind */;
val* var87 /* : MClassKind */;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : NativeString */;
long var91 /* : Int */;
val* var92 /* : FlatString */;
val* var93 /* : MClass */;
val* var95 /* : MClass */;
val* var96 /* : Array[Object] */;
long var97 /* : Int */;
val* var98 /* : NativeArray[Object] */;
val* var99 /* : String */;
val* var100 /* : MClass */;
val* var102 /* : MClass */;
val* var103 /* : MClassKind */;
val* var105 /* : MClassKind */;
val* var106 /* : MClassKind */;
short int var107 /* : Bool */;
short int var109 /* : Bool */;
short int var111 /* : Bool */;
short int var112 /* : Bool */;
short int var115 /* : Bool */;
short int var116 /* : Bool */;
short int var_117 /* var : Bool */;
val* var118 /* : null */;
short int var119 /* : Bool */;
short int var120 /* : Bool */;
val* var_other122 /* var other: nullable Object */;
short int var123 /* : Bool */;
short int var124 /* : Bool */;
short int var125 /* : Bool */;
val* var126 /* : MClassKind */;
val* var128 /* : MClassKind */;
val* var129 /* : MClassKind */;
short int var130 /* : Bool */;
short int var132 /* : Bool */;
short int var134 /* : Bool */;
short int var_135 /* var : Bool */;
val* var136 /* : String */;
val* var138 /* : String */;
static val* varonce139;
val* var140 /* : String */;
char* var141 /* : NativeString */;
long var142 /* : Int */;
val* var143 /* : FlatString */;
short int var144 /* : Bool */;
short int var146 /* : Bool */;
short int var147 /* : Bool */;
val* var148 /* : MClassType */;
val* var150 /* : MClassType */;
short int var151 /* : Bool */;
short int var_152 /* var : Bool */;
val* var153 /* : String */;
val* var155 /* : String */;
static val* varonce156;
val* var157 /* : String */;
char* var158 /* : NativeString */;
long var159 /* : Int */;
val* var160 /* : FlatString */;
short int var161 /* : Bool */;
short int var163 /* : Bool */;
short int var164 /* : Bool */;
val* var165 /* : MClassType */;
val* var167 /* : MClassType */;
short int var168 /* : Bool */;
short int var169 /* : Bool */;
val* var170 /* : ToolContext */;
val* var172 /* : ToolContext */;
static val* varonce173;
val* var174 /* : String */;
char* var175 /* : NativeString */;
long var176 /* : Int */;
val* var177 /* : FlatString */;
static val* varonce178;
val* var179 /* : String */;
char* var180 /* : NativeString */;
long var181 /* : Int */;
val* var182 /* : FlatString */;
val* var183 /* : String */;
val* var184 /* : Array[Object] */;
long var185 /* : Int */;
val* var186 /* : NativeArray[Object] */;
val* var187 /* : String */;
long var188 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 227);
show_backtrace(1);
}
var_mmodule = var;
if (varonce) {
var3 = varonce;
} else {
var4 = "Object";
var5 = 6;
var6 = standard___standard__NativeString___to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
{
var7 = nit___nit__ModelBuilder___try_get_mclass_by_name(self, var_nmodule, var_mmodule, var3);
}
var_objectclass = var7;
if (varonce8) {
var9 = varonce8;
} else {
var10 = "Pointer";
var11 = 7;
var12 = standard___standard__NativeString___to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
{
var13 = nit___nit__ModelBuilder___try_get_mclass_by_name(self, var_nmodule, var_mmodule, var9);
}
var_pointerclass = var13;
{
{ /* Inline modelize_class#AClassdef#mclass (var_nclassdef) on <var_nclassdef:AClassdef> */
var16 = var_nclassdef->attrs[COLOR_nit__modelize_class__AClassdef___mclass].val; /* _mclass on <var_nclassdef:AClassdef> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 230);
show_backtrace(1);
}
var_mclass = var14;
{
{ /* Inline modelize_class#AClassdef#mclassdef (var_nclassdef) on <var_nclassdef:AClassdef> */
var19 = var_nclassdef->attrs[COLOR_nit__modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_nclassdef:AClassdef> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 231);
show_backtrace(1);
}
var_mclassdef = var17;
var20 = 1;
var_specobject = var20;
var21 = 1;
var_specpointer = var21;
var22 = NEW_standard__Array(&type_standard__Array__nit__MClassType);
{
standard___standard__Array___standard__kernel__Object__init(var22); /* Direct call array#Array#init on <var22:Array[MClassType]>*/
}
var_supertypes = var22;
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype = type_nit__AStdClassdef.color;
idtype = type_nit__AStdClassdef.id;
if(cltype >= var_nclassdef->type->table_size) {
var23 = 0;
} else {
var23 = var_nclassdef->type->type_table[cltype] == idtype;
}
if (var23){
{
{ /* Inline parser_nodes#AStdClassdef#n_superclasses (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var26 = var_nclassdef->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_superclasses].val; /* _n_superclasses on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_superclasses");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1033);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
var_ = var24;
{
var27 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_);
}
var_28 = var27;
for(;;) {
{
var29 = ((short int (*)(val* self))(var_28->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_28) /* is_ok on <var_28:Iterator[ASuperclass]>*/;
}
if (var29){
{
var30 = ((val* (*)(val* self))(var_28->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_28) /* item on <var_28:Iterator[ASuperclass]>*/;
}
var_nsc = var30;
var31 = 0;
var_specobject = var31;
{
{ /* Inline parser_nodes#ASuperclass#n_type (var_nsc) on <var_nsc:ASuperclass> */
var34 = var_nsc->attrs[COLOR_nit__parser_nodes__ASuperclass___n_type].val; /* _n_type on <var_nsc:ASuperclass> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1121);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
var_ntype = var32;
var35 = 0;
{
var36 = nit__modelize_class___ModelBuilder___resolve_mtype_unchecked(self, var_mmodule, var_mclassdef, var_ntype, var35);
}
var_mtype = var36;
var37 = NULL;
if (var_mtype == NULL) {
var38 = 1; /* is null */
} else {
var38 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var37) on <var_mtype:nullable MType> */
var_other = var37;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var43 = var_mtype == var_other;
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
goto BREAK_label;
} else {
}
/* <var_mtype:nullable MType(MType)> isa MClassType */
cltype45 = type_nit__MClassType.color;
idtype46 = type_nit__MClassType.id;
if(cltype45 >= var_mtype->type->table_size) {
var44 = 0;
} else {
var44 = var_mtype->type->type_table[cltype45] == idtype46;
}
var47 = !var44;
if (var47){
if (varonce48) {
var49 = varonce48;
} else {
var50 = "Error: supertypes cannot be a formal type";
var51 = 41;
var52 = standard___standard__NativeString___to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
{
nit___nit__ModelBuilder___error(self, var_ntype, var49); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:MClass> */
var55 = var_mclass->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var_mclass:MClass> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 399);
show_backtrace(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:nullable MType(MClassType)> */
var58 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:nullable MType(MClassType)> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var56) on <var56:MClass> */
var61 = var56->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var56:MClass> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 399);
show_backtrace(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
var62 = nit___nit__MClassKind___can_specialize(var53, var59);
}
var63 = !var62;
if (var63){
if (varonce64) {
var65 = varonce64;
} else {
var66 = "Error: ";
var67 = 7;
var68 = standard___standard__NativeString___to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:MClass> */
var71 = var_mclass->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var_mclass:MClass> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 399);
show_backtrace(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
if (varonce72) {
var73 = varonce72;
} else {
var74 = " ";
var75 = 1;
var76 = standard___standard__NativeString___to_s_with_length(var74, var75);
var73 = var76;
varonce72 = var73;
}
if (varonce77) {
var78 = varonce77;
} else {
var79 = " cannot specialize ";
var80 = 19;
var81 = standard___standard__NativeString___to_s_with_length(var79, var80);
var78 = var81;
varonce77 = var78;
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:nullable MType(MClassType)> */
var84 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:nullable MType(MClassType)> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var82) on <var82:MClass> */
var87 = var82->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var82:MClass> */
if (unlikely(var87 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 399);
show_backtrace(1);
}
var85 = var87;
RET_LABEL86:(void)0;
}
}
if (varonce88) {
var89 = varonce88;
} else {
var90 = " ";
var91 = 1;
var92 = standard___standard__NativeString___to_s_with_length(var90, var91);
var89 = var92;
varonce88 = var89;
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:nullable MType(MClassType)> */
var95 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:nullable MType(MClassType)> */
if (unlikely(var95 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
var96 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var96 = array_instance Array[Object] */
var97 = 8;
var98 = NEW_standard__NativeArray(var97, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var98)->values[0] = (val*) var65;
((struct instance_standard__NativeArray*)var98)->values[1] = (val*) var69;
((struct instance_standard__NativeArray*)var98)->values[2] = (val*) var73;
((struct instance_standard__NativeArray*)var98)->values[3] = (val*) var_mclass;
((struct instance_standard__NativeArray*)var98)->values[4] = (val*) var78;
((struct instance_standard__NativeArray*)var98)->values[5] = (val*) var85;
((struct instance_standard__NativeArray*)var98)->values[6] = (val*) var89;
((struct instance_standard__NativeArray*)var98)->values[7] = (val*) var93;
{
((void (*)(val* self, val* p0, long p1))(var96->class->vft[COLOR_standard__array__Array__with_native]))(var96, var98, var97) /* with_native on <var96:Array[Object]>*/;
}
}
{
var99 = ((val* (*)(val* self))(var96->class->vft[COLOR_standard__string__Object__to_s]))(var96) /* to_s on <var96:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(self, var_ntype, var99); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_supertypes, var_mtype); /* Direct call array#Array#add on <var_supertypes:Array[MClassType]>*/
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:nullable MType(MClassType)> */
var102 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:nullable MType(MClassType)> */
if (unlikely(var102 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var100 = var102;
RET_LABEL101:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var100) on <var100:MClass> */
var105 = var100->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var100:MClass> */
if (unlikely(var105 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 399);
show_backtrace(1);
}
var103 = var105;
RET_LABEL104:(void)0;
}
}
{
var106 = nit__model___standard__Object___extern_kind(self);
}
{
{ /* Inline kernel#Object#== (var103,var106) on <var103:MClassKind> */
var_other = var106;
{
{ /* Inline kernel#Object#is_same_instance (var103,var_other) on <var103:MClassKind> */
var111 = var103 == var_other;
var109 = var111;
goto RET_LABEL110;
RET_LABEL110:(void)0;
}
}
var107 = var109;
goto RET_LABEL108;
RET_LABEL108:(void)0;
}
}
if (var107){
var112 = 0;
var_specpointer = var112;
} else {
}
BREAK_label: (void)0;
{
((void (*)(val* self))(var_28->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_28) /* next on <var_28:Iterator[ASuperclass]>*/;
}
} else {
goto BREAK_label113;
}
}
BREAK_label113: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_28) on <var_28:Iterator[ASuperclass]> */
RET_LABEL114:(void)0;
}
}
} else {
}
{
var116 = nit___nit__MClassDef___is_intro(var_mclassdef);
}
var_117 = var116;
if (var116){
var118 = NULL;
if (var_objectclass == NULL) {
var119 = 0; /* is null */
} else {
var119 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_objectclass,var118) on <var_objectclass:nullable MClass> */
var_other122 = var118;
{
var123 = ((short int (*)(val* self, val* p0))(var_objectclass->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_objectclass, var_other122) /* == on <var_objectclass:nullable MClass(MClass)>*/;
}
var124 = !var123;
var120 = var124;
goto RET_LABEL121;
RET_LABEL121:(void)0;
}
var119 = var120;
}
var115 = var119;
} else {
var115 = var_117;
}
if (var115){
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:MClass> */
var128 = var_mclass->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var_mclass:MClass> */
if (unlikely(var128 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 399);
show_backtrace(1);
}
var126 = var128;
RET_LABEL127:(void)0;
}
}
{
var129 = nit__model___standard__Object___extern_kind(self);
}
{
{ /* Inline kernel#Object#== (var126,var129) on <var126:MClassKind> */
var_other = var129;
{
{ /* Inline kernel#Object#is_same_instance (var126,var_other) on <var126:MClassKind> */
var134 = var126 == var_other;
var132 = var134;
goto RET_LABEL133;
RET_LABEL133:(void)0;
}
}
var130 = var132;
goto RET_LABEL131;
RET_LABEL131:(void)0;
}
}
var_135 = var130;
if (var130){
{
{ /* Inline model#MClass#name (var_mclass) on <var_mclass:MClass> */
var138 = var_mclass->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var_mclass:MClass> */
if (unlikely(var138 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var136 = var138;
RET_LABEL137:(void)0;
}
}
if (varonce139) {
var140 = varonce139;
} else {
var141 = "Pointer";
var142 = 7;
var143 = standard___standard__NativeString___to_s_with_length(var141, var142);
var140 = var143;
varonce139 = var140;
}
{
{ /* Inline kernel#Object#!= (var136,var140) on <var136:String> */
var_other122 = var140;
{
var146 = ((short int (*)(val* self, val* p0))(var136->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var136, var_other122) /* == on <var136:String>*/;
}
var147 = !var146;
var144 = var147;
goto RET_LABEL145;
RET_LABEL145:(void)0;
}
}
var125 = var144;
} else {
var125 = var_135;
}
if (var125){
if (var_specpointer){
if (var_pointerclass == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 263);
show_backtrace(1);
} else {
{ /* Inline model#MClass#mclass_type (var_pointerclass) on <var_pointerclass:nullable MClass> */
if (unlikely(var_pointerclass == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var150 = var_pointerclass->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var_pointerclass:nullable MClass> */
if (unlikely(var150 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var148 = var150;
RET_LABEL149:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_supertypes, var148); /* Direct call array#Array#add on <var_supertypes:Array[MClassType]>*/
}
} else {
}
} else {
var_152 = var_specobject;
if (var_specobject){
{
{ /* Inline model#MClass#name (var_mclass) on <var_mclass:MClass> */
var155 = var_mclass->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var_mclass:MClass> */
if (unlikely(var155 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var153 = var155;
RET_LABEL154:(void)0;
}
}
if (varonce156) {
var157 = varonce156;
} else {
var158 = "Object";
var159 = 6;
var160 = standard___standard__NativeString___to_s_with_length(var158, var159);
var157 = var160;
varonce156 = var157;
}
{
{ /* Inline kernel#Object#!= (var153,var157) on <var153:String> */
var_other122 = var157;
{
var163 = ((short int (*)(val* self, val* p0))(var153->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var153, var_other122) /* == on <var153:String>*/;
}
var164 = !var163;
var161 = var164;
goto RET_LABEL162;
RET_LABEL162:(void)0;
}
}
var151 = var161;
} else {
var151 = var_152;
}
if (var151){
{
{ /* Inline model#MClass#mclass_type (var_objectclass) on <var_objectclass:nullable MClass(MClass)> */
var167 = var_objectclass->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var_objectclass:nullable MClass(MClass)> */
if (unlikely(var167 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var165 = var167;
RET_LABEL166:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_supertypes, var165); /* Direct call array#Array#add on <var_supertypes:Array[MClassType]>*/
}
} else {
}
}
} else {
}
{
nit___nit__MClassDef___set_supertypes(var_mclassdef, var_supertypes); /* Direct call model#MClassDef#set_supertypes on <var_mclassdef:MClassDef>*/
}
{
var168 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_supertypes);
}
var169 = !var168;
if (var169){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var172 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var172 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var170 = var172;
RET_LABEL171:(void)0;
}
}
if (varonce173) {
var174 = varonce173;
} else {
var175 = " new super-types: ";
var176 = 18;
var177 = standard___standard__NativeString___to_s_with_length(var175, var176);
var174 = var177;
varonce173 = var174;
}
if (varonce178) {
var179 = varonce178;
} else {
var180 = ", ";
var181 = 2;
var182 = standard___standard__NativeString___to_s_with_length(var180, var181);
var179 = var182;
varonce178 = var179;
}
{
var183 = standard__string___Collection___join(var_supertypes, var179);
}
var184 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var184 = array_instance Array[Object] */
var185 = 3;
var186 = NEW_standard__NativeArray(var185, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var186)->values[0] = (val*) var_mclassdef;
((struct instance_standard__NativeArray*)var186)->values[1] = (val*) var174;
((struct instance_standard__NativeArray*)var186)->values[2] = (val*) var183;
{
((void (*)(val* self, val* p0, long p1))(var184->class->vft[COLOR_standard__array__Array__with_native]))(var184, var186, var185) /* with_native on <var184:Array[Object]>*/;
}
}
{
var187 = ((val* (*)(val* self))(var184->class->vft[COLOR_standard__string__Object__to_s]))(var184) /* to_s on <var184:Array[Object]>*/;
}
var188 = 3;
{
nit___nit__ToolContext___info(var170, var187, var188); /* Direct call toolcontext#ToolContext#info on <var170:ToolContext>*/
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
val* var_mmodule /* var mmodule: MModule */;
val* var3 /* : nullable MClass */;
val* var5 /* : nullable MClass */;
val* var_mclass /* var mclass: MClass */;
val* var6 /* : nullable MClassDef */;
val* var8 /* : nullable MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var9 /* : Array[MClassType] */;
val* var11 /* : Array[MClassType] */;
val* var_ /* var : Array[MClassType] */;
val* var12 /* : ArrayIterator[nullable Object] */;
val* var_13 /* var : ArrayIterator[MClassType] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_s /* var s: MClassType */;
val* var16 /* : MClassType */;
val* var18 /* : MClassType */;
val* var19 /* : MClassType */;
val* var21 /* : MClassType */;
short int var22 /* : Bool */;
static val* varonce;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 277);
show_backtrace(1);
}
var_mmodule = var;
{
{ /* Inline modelize_class#AClassdef#mclass (var_nclassdef) on <var_nclassdef:AClassdef> */
var5 = var_nclassdef->attrs[COLOR_nit__modelize_class__AClassdef___mclass].val; /* _mclass on <var_nclassdef:AClassdef> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 278);
show_backtrace(1);
}
var_mclass = var3;
{
{ /* Inline modelize_class#AClassdef#mclassdef (var_nclassdef) on <var_nclassdef:AClassdef> */
var8 = var_nclassdef->attrs[COLOR_nit__modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_nclassdef:AClassdef> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 279);
show_backtrace(1);
}
var_mclassdef = var6;
{
{ /* Inline model#MClassDef#supertypes (var_mclassdef) on <var_mclassdef:MClassDef> */
var11 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___supertypes].val; /* _supertypes on <var_mclassdef:MClassDef> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supertypes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 566);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_ = var9;
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
var_s = var15;
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var18 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var21 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = nit___nit__MType___is_subtype(var_s, var_mmodule, var16, var19);
}
if (var22){
if (varonce) {
var23 = varonce;
} else {
var24 = "Error: Inheritance loop for class ";
var25 = 34;
var26 = standard___standard__NativeString___to_s_with_length(var24, var25);
var23 = var26;
varonce = var23;
}
if (varonce27) {
var28 = varonce27;
} else {
var29 = " with type ";
var30 = 11;
var31 = standard___standard__NativeString___to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
var32 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var32 = array_instance Array[Object] */
var33 = 4;
var34 = NEW_standard__NativeArray(var33, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var34)->values[0] = (val*) var23;
((struct instance_standard__NativeArray*)var34)->values[1] = (val*) var_mclass;
((struct instance_standard__NativeArray*)var34)->values[2] = (val*) var28;
((struct instance_standard__NativeArray*)var34)->values[3] = (val*) var_s;
{
((void (*)(val* self, val* p0, long p1))(var32->class->vft[COLOR_standard__array__Array__with_native]))(var32, var34, var33) /* with_native on <var32:Array[Object]>*/;
}
}
{
var35 = ((val* (*)(val* self))(var32->class->vft[COLOR_standard__string__Object__to_s]))(var32) /* to_s on <var32:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(self, var_nclassdef, var35); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_13); /* Direct call array#ArrayIterator#next on <var_13:ArrayIterator[MClassType]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_13) on <var_13:ArrayIterator[MClassType]> */
RET_LABEL36:(void)0;
}
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
short int var9 /* : Bool */;
val* var11 /* : nullable MModule */;
val* var13 /* : nullable MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var14 /* : POSetElement[MModule] */;
val* var16 /* : POSetElement[MModule] */;
val* var17 /* : Collection[nullable Object] */;
val* var_ /* var : Collection[MModule] */;
val* var18 /* : Iterator[nullable Object] */;
val* var_19 /* var : Iterator[MModule] */;
short int var20 /* : Bool */;
val* var21 /* : nullable Object */;
val* var_imp /* var imp: MModule */;
val* var22 /* : nullable AModule */;
val* var_nimp /* var nimp: nullable AModule */;
val* var23 /* : null */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var30 /* : ToolContext */;
val* var32 /* : ToolContext */;
long var33 /* : Int */;
long var35 /* : Int */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
val* var40 /* : ANodes[AClassdef] */;
val* var42 /* : ANodes[AClassdef] */;
val* var_43 /* var : ANodes[AClassdef] */;
val* var44 /* : Iterator[ANode] */;
val* var_45 /* var : Iterator[AClassdef] */;
short int var46 /* : Bool */;
val* var47 /* : nullable Object */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var50 /* : ToolContext */;
val* var52 /* : ToolContext */;
long var53 /* : Int */;
long var55 /* : Int */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
val* var60 /* : ANodes[AClassdef] */;
val* var62 /* : ANodes[AClassdef] */;
val* var_63 /* var : ANodes[AClassdef] */;
val* var64 /* : Iterator[ANode] */;
val* var_65 /* var : Iterator[AClassdef] */;
short int var66 /* : Bool */;
val* var67 /* : nullable Object */;
val* var_nclassdef68 /* var nclassdef: AClassdef */;
val* var71 /* : ToolContext */;
val* var73 /* : ToolContext */;
long var74 /* : Int */;
long var76 /* : Int */;
short int var77 /* : Bool */;
short int var79 /* : Bool */;
short int var80 /* : Bool */;
val* var81 /* : ANodes[AClassdef] */;
val* var83 /* : ANodes[AClassdef] */;
val* var_84 /* var : ANodes[AClassdef] */;
val* var85 /* : Iterator[ANode] */;
val* var_86 /* var : Iterator[AClassdef] */;
short int var87 /* : Bool */;
val* var88 /* : nullable Object */;
val* var_nclassdef89 /* var nclassdef: AClassdef */;
val* var92 /* : ToolContext */;
val* var94 /* : ToolContext */;
long var95 /* : Int */;
long var97 /* : Int */;
short int var98 /* : Bool */;
short int var100 /* : Bool */;
short int var101 /* : Bool */;
val* var102 /* : Array[MClassDef] */;
val* var104 /* : Array[MClassDef] */;
val* var_105 /* var : Array[MClassDef] */;
val* var106 /* : ArrayIterator[nullable Object] */;
val* var_107 /* var : ArrayIterator[MClassDef] */;
short int var108 /* : Bool */;
val* var109 /* : nullable Object */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var112 /* : ToolContext */;
val* var114 /* : ToolContext */;
long var115 /* : Int */;
long var117 /* : Int */;
short int var118 /* : Bool */;
short int var120 /* : Bool */;
short int var121 /* : Bool */;
val* var122 /* : ANodes[AClassdef] */;
val* var124 /* : ANodes[AClassdef] */;
val* var_125 /* var : ANodes[AClassdef] */;
val* var126 /* : Iterator[ANode] */;
val* var_127 /* var : Iterator[AClassdef] */;
short int var128 /* : Bool */;
val* var129 /* : nullable Object */;
val* var_nclassdef130 /* var nclassdef: AClassdef */;
val* var133 /* : ToolContext */;
val* var135 /* : ToolContext */;
long var136 /* : Int */;
long var138 /* : Int */;
short int var139 /* : Bool */;
short int var141 /* : Bool */;
short int var142 /* : Bool */;
val* var143 /* : ANodes[AClassdef] */;
val* var145 /* : ANodes[AClassdef] */;
val* var_146 /* var : ANodes[AClassdef] */;
val* var147 /* : Iterator[ANode] */;
val* var_148 /* var : Iterator[AClassdef] */;
short int var149 /* : Bool */;
val* var150 /* : nullable Object */;
val* var_nclassdef151 /* var nclassdef: AClassdef */;
short int var152 /* : Bool */;
int cltype;
int idtype;
val* var153 /* : nullable MClassDef */;
val* var155 /* : nullable MClassDef */;
val* var_mclassdef156 /* var mclassdef: nullable MClassDef */;
val* var157 /* : ANodes[AFormaldef] */;
val* var159 /* : ANodes[AFormaldef] */;
val* var_160 /* var : ANodes[AFormaldef] */;
val* var161 /* : Iterator[ANode] */;
val* var_162 /* var : Iterator[AFormaldef] */;
short int var163 /* : Bool */;
val* var164 /* : nullable Object */;
val* var_nfd /* var nfd: AFormaldef */;
val* var165 /* : nullable AType */;
val* var167 /* : nullable AType */;
val* var_nfdt /* var nfdt: nullable AType */;
short int var168 /* : Bool */;
val* var169 /* : null */;
short int var170 /* : Bool */;
short int var171 /* : Bool */;
short int var173 /* : Bool */;
short int var174 /* : Bool */;
short int var_175 /* var : Bool */;
val* var176 /* : nullable MType */;
val* var178 /* : nullable MType */;
val* var179 /* : null */;
short int var180 /* : Bool */;
short int var181 /* : Bool */;
short int var183 /* : Bool */;
short int var184 /* : Bool */;
val* var185 /* : nullable MType */;
val* var_bound /* var bound: nullable MType */;
val* var186 /* : null */;
short int var187 /* : Bool */;
short int var188 /* : Bool */;
val* var_other190 /* var other: nullable Object */;
short int var191 /* : Bool */;
short int var193 /* : Bool */;
val* var196 /* : ANodes[ASuperclass] */;
val* var198 /* : ANodes[ASuperclass] */;
val* var_199 /* var : ANodes[ASuperclass] */;
val* var200 /* : Iterator[ANode] */;
val* var_201 /* var : Iterator[ASuperclass] */;
short int var202 /* : Bool */;
val* var203 /* : nullable Object */;
val* var_nsc /* var nsc: ASuperclass */;
val* var204 /* : AType */;
val* var206 /* : AType */;
val* var_ntype /* var ntype: AType */;
val* var207 /* : nullable MType */;
val* var209 /* : nullable MType */;
val* var210 /* : null */;
short int var211 /* : Bool */;
short int var212 /* : Bool */;
short int var214 /* : Bool */;
short int var215 /* : Bool */;
val* var216 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var217 /* : null */;
short int var218 /* : Bool */;
short int var219 /* : Bool */;
short int var221 /* : Bool */;
short int var223 /* : Bool */;
val* var228 /* : ToolContext */;
val* var230 /* : ToolContext */;
long var231 /* : Int */;
long var233 /* : Int */;
short int var234 /* : Bool */;
short int var236 /* : Bool */;
short int var237 /* : Bool */;
val* var238 /* : ANodes[AClassdef] */;
val* var240 /* : ANodes[AClassdef] */;
val* var_241 /* var : ANodes[AClassdef] */;
val* var242 /* : Iterator[ANode] */;
val* var_243 /* var : Iterator[AClassdef] */;
short int var244 /* : Bool */;
val* var245 /* : nullable Object */;
val* var_nclassdef246 /* var nclassdef: AClassdef */;
val* var247 /* : nullable MClassDef */;
val* var249 /* : nullable MClassDef */;
val* var_mclassdef250 /* var mclassdef: MClassDef */;
val* var251 /* : HashMap[MClass, MClassType] */;
val* var_superclasses /* var superclasses: HashMap[MClass, MClassType] */;
val* var252 /* : nullable POSetElement[MClassDef] */;
val* var254 /* : nullable POSetElement[MClassDef] */;
val* var255 /* : Collection[nullable Object] */;
val* var_256 /* var : Collection[MClassDef] */;
val* var257 /* : Iterator[nullable Object] */;
val* var_258 /* var : Iterator[MClassDef] */;
short int var259 /* : Bool */;
val* var260 /* : nullable Object */;
val* var_scd /* var scd: MClassDef */;
val* var261 /* : Array[MClassType] */;
val* var263 /* : Array[MClassType] */;
val* var_264 /* var : Array[MClassType] */;
val* var265 /* : ArrayIterator[nullable Object] */;
val* var_266 /* var : ArrayIterator[MClassType] */;
short int var267 /* : Bool */;
val* var268 /* : nullable Object */;
val* var_st /* var st: MClassType */;
val* var269 /* : MClass */;
val* var271 /* : MClass */;
short int var272 /* : Bool */;
short int var273 /* : Bool */;
val* var274 /* : MClass */;
val* var276 /* : MClass */;
val* var277 /* : MClass */;
val* var279 /* : MClass */;
val* var280 /* : nullable Object */;
short int var281 /* : Bool */;
short int var283 /* : Bool */;
short int var284 /* : Bool */;
val* var285 /* : MClass */;
val* var287 /* : MClass */;
val* var288 /* : nullable Object */;
val* var289 /* : MClass */;
val* var291 /* : MClass */;
val* var292 /* : MClassType */;
val* var294 /* : MClassType */;
val* var295 /* : MClassType */;
val* var297 /* : MClassType */;
short int var298 /* : Bool */;
val* var299 /* : MType */;
val* var_st1 /* var st1: MClassType */;
val* var300 /* : MClass */;
val* var302 /* : MClass */;
val* var303 /* : MClassType */;
val* var305 /* : MClassType */;
val* var306 /* : MClassType */;
val* var308 /* : MClassType */;
short int var309 /* : Bool */;
val* var310 /* : MType */;
val* var_st2 /* var st2: MClassType */;
short int var311 /* : Bool */;
short int var313 /* : Bool */;
short int var314 /* : Bool */;
static val* varonce;
val* var315 /* : String */;
char* var316 /* : NativeString */;
long var317 /* : Int */;
val* var318 /* : FlatString */;
val* var319 /* : MClass */;
val* var321 /* : MClass */;
static val* varonce322;
val* var323 /* : String */;
char* var324 /* : NativeString */;
long var325 /* : Int */;
val* var326 /* : FlatString */;
static val* varonce327;
val* var328 /* : String */;
char* var329 /* : NativeString */;
long var330 /* : Int */;
val* var331 /* : FlatString */;
val* var332 /* : Array[Object] */;
long var333 /* : Int */;
val* var334 /* : NativeArray[Object] */;
val* var335 /* : String */;
val* var342 /* : ToolContext */;
val* var344 /* : ToolContext */;
long var345 /* : Int */;
long var347 /* : Int */;
short int var348 /* : Bool */;
short int var350 /* : Bool */;
short int var351 /* : Bool */;
val* var352 /* : ANodes[AClassdef] */;
val* var354 /* : ANodes[AClassdef] */;
val* var_355 /* var : ANodes[AClassdef] */;
val* var356 /* : Iterator[ANode] */;
val* var_357 /* var : Iterator[AClassdef] */;
short int var358 /* : Bool */;
val* var359 /* : nullable Object */;
val* var_nclassdef360 /* var nclassdef: AClassdef */;
short int var361 /* : Bool */;
int cltype362;
int idtype363;
short int var364 /* : Bool */;
val* var366 /* : nullable MClassDef */;
val* var368 /* : nullable MClassDef */;
val* var_mclassdef369 /* var mclassdef: MClassDef */;
val* var370 /* : Array[MClass] */;
val* var_parents /* var parents: Array[MClass] */;
val* var371 /* : nullable POSetElement[MClassDef] */;
val* var373 /* : nullable POSetElement[MClassDef] */;
val* var374 /* : Collection[nullable Object] */;
val* var_375 /* var : Collection[MClassDef] */;
val* var376 /* : Iterator[nullable Object] */;
val* var_377 /* var : Iterator[MClassDef] */;
short int var378 /* : Bool */;
val* var379 /* : nullable Object */;
val* var_sup /* var sup: MClassDef */;
val* var380 /* : MClass */;
val* var382 /* : MClass */;
val* var385 /* : ArrayMap[MClass, AType] */;
val* var_seen_parents /* var seen_parents: ArrayMap[MClass, AType] */;
static val* varonce387;
val* var388 /* : String */;
char* var389 /* : NativeString */;
long var390 /* : Int */;
val* var391 /* : FlatString */;
val* var392 /* : nullable MClass */;
val* var_objectclass /* var objectclass: nullable MClass */;
val* var393 /* : ANodes[ASuperclass] */;
val* var395 /* : ANodes[ASuperclass] */;
val* var_396 /* var : ANodes[ASuperclass] */;
val* var397 /* : Iterator[ANode] */;
val* var_398 /* var : Iterator[ASuperclass] */;
short int var399 /* : Bool */;
val* var400 /* : nullable Object */;
val* var_nsc401 /* var nsc: ASuperclass */;
val* var402 /* : AType */;
val* var404 /* : AType */;
val* var_ntype405 /* var ntype: AType */;
val* var406 /* : nullable MType */;
val* var408 /* : nullable MType */;
val* var_mtype409 /* var mtype: nullable MType */;
val* var410 /* : null */;
short int var411 /* : Bool */;
short int var412 /* : Bool */;
short int var414 /* : Bool */;
short int var416 /* : Bool */;
short int var418 /* : Bool */;
int cltype419;
int idtype420;
val* var421 /* : MClass */;
val* var423 /* : MClass */;
val* var_sc /* var sc: MClass */;
short int var424 /* : Bool */;
short int var425 /* : Bool */;
short int var426 /* : Bool */;
short int var_427 /* var : Bool */;
short int var428 /* : Bool */;
short int var430 /* : Bool */;
short int var432 /* : Bool */;
short int var433 /* : Bool */;
val* var434 /* : Location */;
val* var436 /* : Location */;
val* var437 /* : nullable SourceFile */;
val* var439 /* : nullable SourceFile */;
val* var440 /* : null */;
short int var441 /* : Bool */;
short int var442 /* : Bool */;
short int var444 /* : Bool */;
short int var445 /* : Bool */;
short int var_446 /* var : Bool */;
val* var447 /* : Location */;
val* var449 /* : Location */;
val* var450 /* : nullable SourceFile */;
val* var452 /* : nullable SourceFile */;
val* var453 /* : String */;
val* var455 /* : String */;
short int var456 /* : Bool */;
short int var457 /* : Bool */;
static val* varonce458;
val* var459 /* : String */;
char* var460 /* : NativeString */;
long var461 /* : Int */;
val* var462 /* : FlatString */;
static val* varonce463;
val* var464 /* : String */;
char* var465 /* : NativeString */;
long var466 /* : Int */;
val* var467 /* : FlatString */;
static val* varonce468;
val* var469 /* : String */;
char* var470 /* : NativeString */;
long var471 /* : Int */;
val* var472 /* : FlatString */;
val* var473 /* : MClass */;
val* var475 /* : MClass */;
static val* varonce476;
val* var477 /* : String */;
char* var478 /* : NativeString */;
long var479 /* : Int */;
val* var480 /* : FlatString */;
val* var481 /* : Array[Object] */;
long var482 /* : Int */;
val* var483 /* : NativeArray[Object] */;
val* var484 /* : String */;
short int var485 /* : Bool */;
short int var486 /* : Bool */;
static val* varonce487;
val* var488 /* : String */;
char* var489 /* : NativeString */;
long var490 /* : Int */;
val* var491 /* : FlatString */;
static val* varonce492;
val* var493 /* : String */;
char* var494 /* : NativeString */;
long var495 /* : Int */;
val* var496 /* : FlatString */;
static val* varonce497;
val* var498 /* : String */;
char* var499 /* : NativeString */;
long var500 /* : Int */;
val* var501 /* : FlatString */;
val* var502 /* : MClass */;
val* var504 /* : MClass */;
static val* varonce505;
val* var506 /* : String */;
char* var507 /* : NativeString */;
long var508 /* : Int */;
val* var509 /* : FlatString */;
val* var510 /* : Array[Object] */;
long var511 /* : Int */;
val* var512 /* : NativeArray[Object] */;
val* var513 /* : String */;
var_nmodule = p0;
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var2 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
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
var9 = 1;
{
{ /* Inline modelize_class#AModule#build_classes_is_done= (var_nmodule,var9) on <var_nmodule:AModule> */
var_nmodule->attrs[COLOR_nit__modelize_class__AModule___build_classes_is_done].s = var9; /* _build_classes_is_done on <var_nmodule:AModule> */
RET_LABEL10:(void)0;
}
}
{
{ /* Inline loader#AModule#mmodule (var_nmodule) on <var_nmodule:AModule> */
var13 = var_nmodule->attrs[COLOR_nit__loader__AModule___mmodule].val; /* _mmodule on <var_nmodule:AModule> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 296);
show_backtrace(1);
}
var_mmodule = var11;
{
{ /* Inline mmodule#MModule#in_importation (var_mmodule) on <var_mmodule:MModule> */
var16 = var_mmodule->attrs[COLOR_nit__mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 96);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = poset___poset__POSetElement___direct_greaters(var14);
}
var_ = var17;
{
var18 = ((val* (*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Collection[MModule]>*/;
}
var_19 = var18;
for(;;) {
{
var20 = ((short int (*)(val* self))(var_19->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_19) /* is_ok on <var_19:Iterator[MModule]>*/;
}
if (var20){
{
var21 = ((val* (*)(val* self))(var_19->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_19) /* item on <var_19:Iterator[MModule]>*/;
}
var_imp = var21;
{
var22 = nit__loader___ModelBuilder___mmodule2node(self, var_imp);
}
var_nimp = var22;
var23 = NULL;
if (var_nimp == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nimp,var23) on <var_nimp:nullable AModule> */
var_other = var23;
{
var27 = ((short int (*)(val* self, val* p0))(var_nimp->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nimp, var_other) /* == on <var_nimp:nullable AModule(AModule)>*/;
}
var28 = !var27;
var25 = var28;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var24 = var25;
}
if (var24){
{
nit__modelize_class___ModelBuilder___build_classes(self, var_nimp); /* Direct call modelize_class#ModelBuilder#build_classes on <self:ModelBuilder>*/
}
} else {
}
{
((void (*)(val* self))(var_19->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_19) /* next on <var_19:Iterator[MModule]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_19) on <var_19:Iterator[MModule]> */
RET_LABEL29:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var32 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count (var30) on <var30:ToolContext> */
var35 = var30->attrs[COLOR_nit__toolcontext__ToolContext___error_count].l; /* _error_count on <var30:ToolContext> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var33) on <var_errcount:Int> */
var38 = var_errcount == var33;
var39 = !var38;
var36 = var39;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
if (var36){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var42 = var_nmodule->attrs[COLOR_nit__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 919);
show_backtrace(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
var_43 = var40;
{
var44 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_43);
}
var_45 = var44;
for(;;) {
{
var46 = ((short int (*)(val* self))(var_45->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_45) /* is_ok on <var_45:Iterator[AClassdef]>*/;
}
if (var46){
{
var47 = ((val* (*)(val* self))(var_45->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_45) /* item on <var_45:Iterator[AClassdef]>*/;
}
var_nclassdef = var47;
{
nit__modelize_class___ModelBuilder___build_a_mclass(self, var_nmodule, var_nclassdef); /* Direct call modelize_class#ModelBuilder#build_a_mclass on <self:ModelBuilder>*/
}
{
((void (*)(val* self))(var_45->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_45) /* next on <var_45:Iterator[AClassdef]>*/;
}
} else {
goto BREAK_label48;
}
}
BREAK_label48: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_45) on <var_45:Iterator[AClassdef]> */
RET_LABEL49:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var52 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count (var50) on <var50:ToolContext> */
var55 = var50->attrs[COLOR_nit__toolcontext__ToolContext___error_count].l; /* _error_count on <var50:ToolContext> */
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var53) on <var_errcount:Int> */
var58 = var_errcount == var53;
var59 = !var58;
var56 = var59;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
if (var56){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var62 = var_nmodule->attrs[COLOR_nit__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 919);
show_backtrace(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
var_63 = var60;
{
var64 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_63);
}
var_65 = var64;
for(;;) {
{
var66 = ((short int (*)(val* self))(var_65->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_65) /* is_ok on <var_65:Iterator[AClassdef]>*/;
}
if (var66){
{
var67 = ((val* (*)(val* self))(var_65->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_65) /* item on <var_65:Iterator[AClassdef]>*/;
}
var_nclassdef68 = var67;
{
nit__modelize_class___ModelBuilder___build_a_mclassdef(self, var_nmodule, var_nclassdef68); /* Direct call modelize_class#ModelBuilder#build_a_mclassdef on <self:ModelBuilder>*/
}
{
((void (*)(val* self))(var_65->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_65) /* next on <var_65:Iterator[AClassdef]>*/;
}
} else {
goto BREAK_label69;
}
}
BREAK_label69: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_65) on <var_65:Iterator[AClassdef]> */
RET_LABEL70:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var73 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var73 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var71 = var73;
RET_LABEL72:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count (var71) on <var71:ToolContext> */
var76 = var71->attrs[COLOR_nit__toolcontext__ToolContext___error_count].l; /* _error_count on <var71:ToolContext> */
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var74) on <var_errcount:Int> */
var79 = var_errcount == var74;
var80 = !var79;
var77 = var80;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
}
if (var77){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var83 = var_nmodule->attrs[COLOR_nit__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var83 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 919);
show_backtrace(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
var_84 = var81;
{
var85 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_84);
}
var_86 = var85;
for(;;) {
{
var87 = ((short int (*)(val* self))(var_86->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_86) /* is_ok on <var_86:Iterator[AClassdef]>*/;
}
if (var87){
{
var88 = ((val* (*)(val* self))(var_86->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_86) /* item on <var_86:Iterator[AClassdef]>*/;
}
var_nclassdef89 = var88;
{
nit__modelize_class___ModelBuilder___collect_a_mclassdef_inheritance(self, var_nmodule, var_nclassdef89); /* Direct call modelize_class#ModelBuilder#collect_a_mclassdef_inheritance on <self:ModelBuilder>*/
}
{
((void (*)(val* self))(var_86->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_86) /* next on <var_86:Iterator[AClassdef]>*/;
}
} else {
goto BREAK_label90;
}
}
BREAK_label90: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_86) on <var_86:Iterator[AClassdef]> */
RET_LABEL91:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var94 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var94 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var92 = var94;
RET_LABEL93:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count (var92) on <var92:ToolContext> */
var97 = var92->attrs[COLOR_nit__toolcontext__ToolContext___error_count].l; /* _error_count on <var92:ToolContext> */
var95 = var97;
RET_LABEL96:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var95) on <var_errcount:Int> */
var100 = var_errcount == var95;
var101 = !var100;
var98 = var101;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
}
if (var98){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MModule#mclassdefs (var_mmodule) on <var_mmodule:MModule> */
var104 = var_mmodule->attrs[COLOR_nit__model__MModule___mclassdefs].val; /* _mclassdefs on <var_mmodule:MModule> */
if (unlikely(var104 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 131);
show_backtrace(1);
}
var102 = var104;
RET_LABEL103:(void)0;
}
}
var_105 = var102;
{
var106 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_105);
}
var_107 = var106;
for(;;) {
{
var108 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_107);
}
if (var108){
{
var109 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_107);
}
var_mclassdef = var109;
{
nit___nit__MClassDef___add_in_hierarchy(var_mclassdef); /* Direct call model#MClassDef#add_in_hierarchy on <var_mclassdef:MClassDef>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_107); /* Direct call array#ArrayIterator#next on <var_107:ArrayIterator[MClassDef]>*/
}
} else {
goto BREAK_label110;
}
}
BREAK_label110: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_107) on <var_107:ArrayIterator[MClassDef]> */
RET_LABEL111:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var114 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var114 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var112 = var114;
RET_LABEL113:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count (var112) on <var112:ToolContext> */
var117 = var112->attrs[COLOR_nit__toolcontext__ToolContext___error_count].l; /* _error_count on <var112:ToolContext> */
var115 = var117;
RET_LABEL116:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var115) on <var_errcount:Int> */
var120 = var_errcount == var115;
var121 = !var120;
var118 = var121;
goto RET_LABEL119;
RET_LABEL119:(void)0;
}
}
if (var118){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var124 = var_nmodule->attrs[COLOR_nit__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var124 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 919);
show_backtrace(1);
}
var122 = var124;
RET_LABEL123:(void)0;
}
}
var_125 = var122;
{
var126 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_125);
}
var_127 = var126;
for(;;) {
{
var128 = ((short int (*)(val* self))(var_127->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_127) /* is_ok on <var_127:Iterator[AClassdef]>*/;
}
if (var128){
{
var129 = ((val* (*)(val* self))(var_127->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_127) /* item on <var_127:Iterator[AClassdef]>*/;
}
var_nclassdef130 = var129;
{
nit__modelize_class___ModelBuilder___check_supertypes(self, var_nmodule, var_nclassdef130); /* Direct call modelize_class#ModelBuilder#check_supertypes on <self:ModelBuilder>*/
}
{
((void (*)(val* self))(var_127->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_127) /* next on <var_127:Iterator[AClassdef]>*/;
}
} else {
goto BREAK_label131;
}
}
BREAK_label131: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_127) on <var_127:Iterator[AClassdef]> */
RET_LABEL132:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var135 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var135 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var133 = var135;
RET_LABEL134:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count (var133) on <var133:ToolContext> */
var138 = var133->attrs[COLOR_nit__toolcontext__ToolContext___error_count].l; /* _error_count on <var133:ToolContext> */
var136 = var138;
RET_LABEL137:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var136) on <var_errcount:Int> */
var141 = var_errcount == var136;
var142 = !var141;
var139 = var142;
goto RET_LABEL140;
RET_LABEL140:(void)0;
}
}
if (var139){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var145 = var_nmodule->attrs[COLOR_nit__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var145 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 919);
show_backtrace(1);
}
var143 = var145;
RET_LABEL144:(void)0;
}
}
var_146 = var143;
{
var147 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_146);
}
var_148 = var147;
for(;;) {
{
var149 = ((short int (*)(val* self))(var_148->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_148) /* is_ok on <var_148:Iterator[AClassdef]>*/;
}
if (var149){
{
var150 = ((val* (*)(val* self))(var_148->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_148) /* item on <var_148:Iterator[AClassdef]>*/;
}
var_nclassdef151 = var150;
/* <var_nclassdef151:AClassdef> isa AStdClassdef */
cltype = type_nit__AStdClassdef.color;
idtype = type_nit__AStdClassdef.id;
if(cltype >= var_nclassdef151->type->table_size) {
var152 = 0;
} else {
var152 = var_nclassdef151->type->type_table[cltype] == idtype;
}
if (var152){
{
{ /* Inline modelize_class#AClassdef#mclassdef (var_nclassdef151) on <var_nclassdef151:AClassdef(AStdClassdef)> */
var155 = var_nclassdef151->attrs[COLOR_nit__modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_nclassdef151:AClassdef(AStdClassdef)> */
var153 = var155;
RET_LABEL154:(void)0;
}
}
var_mclassdef156 = var153;
{
{ /* Inline parser_nodes#AStdClassdef#n_formaldefs (var_nclassdef151) on <var_nclassdef151:AClassdef(AStdClassdef)> */
var159 = var_nclassdef151->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_formaldefs].val; /* _n_formaldefs on <var_nclassdef151:AClassdef(AStdClassdef)> */
if (unlikely(var159 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_formaldefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1027);
show_backtrace(1);
}
var157 = var159;
RET_LABEL158:(void)0;
}
}
var_160 = var157;
{
var161 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_160);
}
var_162 = var161;
for(;;) {
{
var163 = ((short int (*)(val* self))(var_162->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_162) /* is_ok on <var_162:Iterator[AFormaldef]>*/;
}
if (var163){
{
var164 = ((val* (*)(val* self))(var_162->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_162) /* item on <var_162:Iterator[AFormaldef]>*/;
}
var_nfd = var164;
{
{ /* Inline parser_nodes#AFormaldef#n_type (var_nfd) on <var_nfd:AFormaldef> */
var167 = var_nfd->attrs[COLOR_nit__parser_nodes__AFormaldef___n_type].val; /* _n_type on <var_nfd:AFormaldef> */
var165 = var167;
RET_LABEL166:(void)0;
}
}
var_nfdt = var165;
var169 = NULL;
if (var_nfdt == NULL) {
var170 = 0; /* is null */
} else {
var170 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nfdt,var169) on <var_nfdt:nullable AType> */
var_other = var169;
{
var173 = ((short int (*)(val* self, val* p0))(var_nfdt->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nfdt, var_other) /* == on <var_nfdt:nullable AType(AType)>*/;
}
var174 = !var173;
var171 = var174;
goto RET_LABEL172;
RET_LABEL172:(void)0;
}
var170 = var171;
}
var_175 = var170;
if (var170){
{
{ /* Inline modelize_class#AType#mtype (var_nfdt) on <var_nfdt:nullable AType(AType)> */
var178 = var_nfdt->attrs[COLOR_nit__modelize_class__AType___mtype].val; /* _mtype on <var_nfdt:nullable AType(AType)> */
var176 = var178;
RET_LABEL177:(void)0;
}
}
var179 = NULL;
if (var176 == NULL) {
var180 = 0; /* is null */
} else {
var180 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var176,var179) on <var176:nullable MType> */
var_other = var179;
{
var183 = ((short int (*)(val* self, val* p0))(var176->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var176, var_other) /* == on <var176:nullable MType(MType)>*/;
}
var184 = !var183;
var181 = var184;
goto RET_LABEL182;
RET_LABEL182:(void)0;
}
var180 = var181;
}
var168 = var180;
} else {
var168 = var_175;
}
if (var168){
{
var185 = nit__modelize_class___ModelBuilder___resolve_mtype(self, var_mmodule, var_mclassdef156, var_nfdt);
}
var_bound = var185;
var186 = NULL;
if (var_bound == NULL) {
var187 = 1; /* is null */
} else {
var187 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_bound,var186) on <var_bound:nullable MType> */
var_other190 = var186;
{
{ /* Inline kernel#Object#is_same_instance (var_bound,var_other190) on <var_bound:nullable MType(MType)> */
var193 = var_bound == var_other190;
var191 = var193;
goto RET_LABEL192;
RET_LABEL192:(void)0;
}
}
var188 = var191;
goto RET_LABEL189;
RET_LABEL189:(void)0;
}
var187 = var188;
}
if (var187){
goto RET_LABEL;
} else {
}
} else {
}
{
((void (*)(val* self))(var_162->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_162) /* next on <var_162:Iterator[AFormaldef]>*/;
}
} else {
goto BREAK_label194;
}
}
BREAK_label194: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_162) on <var_162:Iterator[AFormaldef]> */
RET_LABEL195:(void)0;
}
}
{
{ /* Inline parser_nodes#AStdClassdef#n_superclasses (var_nclassdef151) on <var_nclassdef151:AClassdef(AStdClassdef)> */
var198 = var_nclassdef151->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_superclasses].val; /* _n_superclasses on <var_nclassdef151:AClassdef(AStdClassdef)> */
if (unlikely(var198 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_superclasses");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1033);
show_backtrace(1);
}
var196 = var198;
RET_LABEL197:(void)0;
}
}
var_199 = var196;
{
var200 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_199);
}
var_201 = var200;
for(;;) {
{
var202 = ((short int (*)(val* self))(var_201->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_201) /* is_ok on <var_201:Iterator[ASuperclass]>*/;
}
if (var202){
{
var203 = ((val* (*)(val* self))(var_201->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_201) /* item on <var_201:Iterator[ASuperclass]>*/;
}
var_nsc = var203;
{
{ /* Inline parser_nodes#ASuperclass#n_type (var_nsc) on <var_nsc:ASuperclass> */
var206 = var_nsc->attrs[COLOR_nit__parser_nodes__ASuperclass___n_type].val; /* _n_type on <var_nsc:ASuperclass> */
if (unlikely(var206 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1121);
show_backtrace(1);
}
var204 = var206;
RET_LABEL205:(void)0;
}
}
var_ntype = var204;
{
{ /* Inline modelize_class#AType#mtype (var_ntype) on <var_ntype:AType> */
var209 = var_ntype->attrs[COLOR_nit__modelize_class__AType___mtype].val; /* _mtype on <var_ntype:AType> */
var207 = var209;
RET_LABEL208:(void)0;
}
}
var210 = NULL;
if (var207 == NULL) {
var211 = 0; /* is null */
} else {
var211 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var207,var210) on <var207:nullable MType> */
var_other = var210;
{
var214 = ((short int (*)(val* self, val* p0))(var207->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var207, var_other) /* == on <var207:nullable MType(MType)>*/;
}
var215 = !var214;
var212 = var215;
goto RET_LABEL213;
RET_LABEL213:(void)0;
}
var211 = var212;
}
if (var211){
{
var216 = nit__modelize_class___ModelBuilder___resolve_mtype(self, var_mmodule, var_mclassdef156, var_ntype);
}
var_mtype = var216;
var217 = NULL;
if (var_mtype == NULL) {
var218 = 1; /* is null */
} else {
var218 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var217) on <var_mtype:nullable MType> */
var_other190 = var217;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other190) on <var_mtype:nullable MType(MType)> */
var223 = var_mtype == var_other190;
var221 = var223;
goto RET_LABEL222;
RET_LABEL222:(void)0;
}
}
var219 = var221;
goto RET_LABEL220;
RET_LABEL220:(void)0;
}
var218 = var219;
}
if (var218){
goto RET_LABEL;
} else {
}
} else {
}
{
((void (*)(val* self))(var_201->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_201) /* next on <var_201:Iterator[ASuperclass]>*/;
}
} else {
goto BREAK_label224;
}
}
BREAK_label224: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_201) on <var_201:Iterator[ASuperclass]> */
RET_LABEL225:(void)0;
}
}
} else {
}
{
((void (*)(val* self))(var_148->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_148) /* next on <var_148:Iterator[AClassdef]>*/;
}
} else {
goto BREAK_label226;
}
}
BREAK_label226: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_148) on <var_148:Iterator[AClassdef]> */
RET_LABEL227:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var230 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var230 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var228 = var230;
RET_LABEL229:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count (var228) on <var228:ToolContext> */
var233 = var228->attrs[COLOR_nit__toolcontext__ToolContext___error_count].l; /* _error_count on <var228:ToolContext> */
var231 = var233;
RET_LABEL232:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var231) on <var_errcount:Int> */
var236 = var_errcount == var231;
var237 = !var236;
var234 = var237;
goto RET_LABEL235;
RET_LABEL235:(void)0;
}
}
if (var234){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var240 = var_nmodule->attrs[COLOR_nit__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var240 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 919);
show_backtrace(1);
}
var238 = var240;
RET_LABEL239:(void)0;
}
}
var_241 = var238;
{
var242 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_241);
}
var_243 = var242;
for(;;) {
{
var244 = ((short int (*)(val* self))(var_243->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_243) /* is_ok on <var_243:Iterator[AClassdef]>*/;
}
if (var244){
{
var245 = ((val* (*)(val* self))(var_243->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_243) /* item on <var_243:Iterator[AClassdef]>*/;
}
var_nclassdef246 = var245;
{
{ /* Inline modelize_class#AClassdef#mclassdef (var_nclassdef246) on <var_nclassdef246:AClassdef> */
var249 = var_nclassdef246->attrs[COLOR_nit__modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_nclassdef246:AClassdef> */
var247 = var249;
RET_LABEL248:(void)0;
}
}
if (unlikely(var247 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 366);
show_backtrace(1);
}
var_mclassdef250 = var247;
var251 = NEW_standard__HashMap(&type_standard__HashMap__nit__MClass__nit__MClassType);
{
standard___standard__HashMap___standard__kernel__Object__init(var251); /* Direct call hash_collection#HashMap#init on <var251:HashMap[MClass, MClassType]>*/
}
var_superclasses = var251;
{
{ /* Inline model#MClassDef#in_hierarchy (var_mclassdef250) on <var_mclassdef250:MClassDef> */
var254 = var_mclassdef250->attrs[COLOR_nit__model__MClassDef___in_hierarchy].val; /* _in_hierarchy on <var_mclassdef250:MClassDef> */
var252 = var254;
RET_LABEL253:(void)0;
}
}
if (var252 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 368);
show_backtrace(1);
} else {
var255 = poset___poset__POSetElement___greaters(var252);
}
var_256 = var255;
{
var257 = ((val* (*)(val* self))(var_256->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_256) /* iterator on <var_256:Collection[MClassDef]>*/;
}
var_258 = var257;
for(;;) {
{
var259 = ((short int (*)(val* self))(var_258->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_258) /* is_ok on <var_258:Iterator[MClassDef]>*/;
}
if (var259){
{
var260 = ((val* (*)(val* self))(var_258->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_258) /* item on <var_258:Iterator[MClassDef]>*/;
}
var_scd = var260;
{
{ /* Inline model#MClassDef#supertypes (var_scd) on <var_scd:MClassDef> */
var263 = var_scd->attrs[COLOR_nit__model__MClassDef___supertypes].val; /* _supertypes on <var_scd:MClassDef> */
if (unlikely(var263 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supertypes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 566);
show_backtrace(1);
}
var261 = var263;
RET_LABEL262:(void)0;
}
}
var_264 = var261;
{
var265 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_264);
}
var_266 = var265;
for(;;) {
{
var267 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_266);
}
if (var267){
{
var268 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_266);
}
var_st = var268;
{
{ /* Inline model#MClassType#mclass (var_st) on <var_st:MClassType> */
var271 = var_st->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_st:MClassType> */
if (unlikely(var271 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var269 = var271;
RET_LABEL270:(void)0;
}
}
{
var272 = standard___standard__MapRead___has_key(var_superclasses, var269);
}
var273 = !var272;
if (var273){
{
{ /* Inline model#MClassType#mclass (var_st) on <var_st:MClassType> */
var276 = var_st->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_st:MClassType> */
if (unlikely(var276 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var274 = var276;
RET_LABEL275:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var_superclasses, var274, var_st); /* Direct call hash_collection#HashMap#[]= on <var_superclasses:HashMap[MClass, MClassType]>*/
}
} else {
{
{ /* Inline model#MClassType#mclass (var_st) on <var_st:MClassType> */
var279 = var_st->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_st:MClassType> */
if (unlikely(var279 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var277 = var279;
RET_LABEL278:(void)0;
}
}
{
var280 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var_superclasses, var277);
}
{
{ /* Inline kernel#Object#!= (var280,var_st) on <var280:nullable Object(MClassType)> */
var_other = var_st;
{
var283 = ((short int (*)(val* self, val* p0))(var280->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var280, var_other) /* == on <var280:nullable Object(MClassType)>*/;
}
var284 = !var283;
var281 = var284;
goto RET_LABEL282;
RET_LABEL282:(void)0;
}
}
if (var281){
{
{ /* Inline model#MClassType#mclass (var_st) on <var_st:MClassType> */
var287 = var_st->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_st:MClassType> */
if (unlikely(var287 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var285 = var287;
RET_LABEL286:(void)0;
}
}
{
var288 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var_superclasses, var285);
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef250) on <var_mclassdef250:MClassDef> */
var291 = var_mclassdef250->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef250:MClassDef> */
if (unlikely(var291 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var289 = var291;
RET_LABEL290:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var289) on <var289:MClass> */
var294 = var289->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var289:MClass> */
if (unlikely(var294 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var292 = var294;
RET_LABEL293:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef250) on <var_mclassdef250:MClassDef> */
var297 = var_mclassdef250->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef250:MClassDef> */
if (unlikely(var297 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var295 = var297;
RET_LABEL296:(void)0;
}
}
var298 = 0;
{
var299 = ((val* (*)(val* self, val* p0, val* p1, val* p2, short int p3))(var288->class->vft[COLOR_nit__model__MType__resolve_for]))(var288, var292, var295, var_mmodule, var298) /* resolve_for on <var288:nullable Object(MClassType)>*/;
}
var_st1 = var299;
{
{ /* Inline model#MClassDef#mclass (var_mclassdef250) on <var_mclassdef250:MClassDef> */
var302 = var_mclassdef250->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef250:MClassDef> */
if (unlikely(var302 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var300 = var302;
RET_LABEL301:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var300) on <var300:MClass> */
var305 = var300->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var300:MClass> */
if (unlikely(var305 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var303 = var305;
RET_LABEL304:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef250) on <var_mclassdef250:MClassDef> */
var308 = var_mclassdef250->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef250:MClassDef> */
if (unlikely(var308 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var306 = var308;
RET_LABEL307:(void)0;
}
}
var309 = 0;
{
var310 = ((val* (*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_st->class->vft[COLOR_nit__model__MType__resolve_for]))(var_st, var303, var306, var_mmodule, var309) /* resolve_for on <var_st:MClassType>*/;
}
var_st2 = var310;
{
{ /* Inline kernel#Object#!= (var_st1,var_st2) on <var_st1:MClassType> */
var_other = var_st2;
{
var313 = ((short int (*)(val* self, val* p0))(var_st1->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_st1, var_other) /* == on <var_st1:MClassType>*/;
}
var314 = !var313;
var311 = var314;
goto RET_LABEL312;
RET_LABEL312:(void)0;
}
}
if (var311){
if (varonce) {
var315 = varonce;
} else {
var316 = "Error: Incompatibles ancestors for ";
var317 = 35;
var318 = standard___standard__NativeString___to_s_with_length(var316, var317);
var315 = var318;
varonce = var315;
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef250) on <var_mclassdef250:MClassDef> */
var321 = var_mclassdef250->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef250:MClassDef> */
if (unlikely(var321 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var319 = var321;
RET_LABEL320:(void)0;
}
}
if (varonce322) {
var323 = varonce322;
} else {
var324 = ": ";
var325 = 2;
var326 = standard___standard__NativeString___to_s_with_length(var324, var325);
var323 = var326;
varonce322 = var323;
}
if (varonce327) {
var328 = varonce327;
} else {
var329 = ", ";
var330 = 2;
var331 = standard___standard__NativeString___to_s_with_length(var329, var330);
var328 = var331;
varonce327 = var328;
}
var332 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var332 = array_instance Array[Object] */
var333 = 6;
var334 = NEW_standard__NativeArray(var333, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var334)->values[0] = (val*) var315;
((struct instance_standard__NativeArray*)var334)->values[1] = (val*) var319;
((struct instance_standard__NativeArray*)var334)->values[2] = (val*) var323;
((struct instance_standard__NativeArray*)var334)->values[3] = (val*) var_st1;
((struct instance_standard__NativeArray*)var334)->values[4] = (val*) var328;
((struct instance_standard__NativeArray*)var334)->values[5] = (val*) var_st2;
{
((void (*)(val* self, val* p0, long p1))(var332->class->vft[COLOR_standard__array__Array__with_native]))(var332, var334, var333) /* with_native on <var332:Array[Object]>*/;
}
}
{
var335 = ((val* (*)(val* self))(var332->class->vft[COLOR_standard__string__Object__to_s]))(var332) /* to_s on <var332:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(self, var_nclassdef246, var335); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
} else {
}
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_266); /* Direct call array#ArrayIterator#next on <var_266:ArrayIterator[MClassType]>*/
}
} else {
goto BREAK_label336;
}
}
BREAK_label336: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_266) on <var_266:ArrayIterator[MClassType]> */
RET_LABEL337:(void)0;
}
}
{
((void (*)(val* self))(var_258->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_258) /* next on <var_258:Iterator[MClassDef]>*/;
}
} else {
goto BREAK_label338;
}
}
BREAK_label338: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_258) on <var_258:Iterator[MClassDef]> */
RET_LABEL339:(void)0;
}
}
{
((void (*)(val* self))(var_243->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_243) /* next on <var_243:Iterator[AClassdef]>*/;
}
} else {
goto BREAK_label340;
}
}
BREAK_label340: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_243) on <var_243:Iterator[AClassdef]> */
RET_LABEL341:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var344 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var344 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var342 = var344;
RET_LABEL343:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count (var342) on <var342:ToolContext> */
var347 = var342->attrs[COLOR_nit__toolcontext__ToolContext___error_count].l; /* _error_count on <var342:ToolContext> */
var345 = var347;
RET_LABEL346:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var345) on <var_errcount:Int> */
var350 = var_errcount == var345;
var351 = !var350;
var348 = var351;
goto RET_LABEL349;
RET_LABEL349:(void)0;
}
}
if (var348){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var354 = var_nmodule->attrs[COLOR_nit__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var354 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 919);
show_backtrace(1);
}
var352 = var354;
RET_LABEL353:(void)0;
}
}
var_355 = var352;
{
var356 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_355);
}
var_357 = var356;
for(;;) {
{
var358 = ((short int (*)(val* self))(var_357->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_357) /* is_ok on <var_357:Iterator[AClassdef]>*/;
}
if (var358){
{
var359 = ((val* (*)(val* self))(var_357->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_357) /* item on <var_357:Iterator[AClassdef]>*/;
}
var_nclassdef360 = var359;
/* <var_nclassdef360:AClassdef> isa AStdClassdef */
cltype362 = type_nit__AStdClassdef.color;
idtype363 = type_nit__AStdClassdef.id;
if(cltype362 >= var_nclassdef360->type->table_size) {
var361 = 0;
} else {
var361 = var_nclassdef360->type->type_table[cltype362] == idtype363;
}
var364 = !var361;
if (var364){
goto BREAK_label365;
} else {
}
{
{ /* Inline modelize_class#AClassdef#mclassdef (var_nclassdef360) on <var_nclassdef360:AClassdef(AStdClassdef)> */
var368 = var_nclassdef360->attrs[COLOR_nit__modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_nclassdef360:AClassdef(AStdClassdef)> */
var366 = var368;
RET_LABEL367:(void)0;
}
}
if (unlikely(var366 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 390);
show_backtrace(1);
}
var_mclassdef369 = var366;
var370 = NEW_standard__Array(&type_standard__Array__nit__MClass);
{
standard___standard__Array___standard__kernel__Object__init(var370); /* Direct call array#Array#init on <var370:Array[MClass]>*/
}
var_parents = var370;
{
{ /* Inline model#MClassDef#in_hierarchy (var_mclassdef369) on <var_mclassdef369:MClassDef> */
var373 = var_mclassdef369->attrs[COLOR_nit__model__MClassDef___in_hierarchy].val; /* _in_hierarchy on <var_mclassdef369:MClassDef> */
var371 = var373;
RET_LABEL372:(void)0;
}
}
if (var371 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 395);
show_backtrace(1);
} else {
var374 = poset___poset__POSetElement___direct_greaters(var371);
}
var_375 = var374;
{
var376 = ((val* (*)(val* self))(var_375->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_375) /* iterator on <var_375:Collection[MClassDef]>*/;
}
var_377 = var376;
for(;;) {
{
var378 = ((short int (*)(val* self))(var_377->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_377) /* is_ok on <var_377:Iterator[MClassDef]>*/;
}
if (var378){
{
var379 = ((val* (*)(val* self))(var_377->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_377) /* item on <var_377:Iterator[MClassDef]>*/;
}
var_sup = var379;
{
{ /* Inline model#MClassDef#mclass (var_sup) on <var_sup:MClassDef> */
var382 = var_sup->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_sup:MClassDef> */
if (unlikely(var382 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var380 = var382;
RET_LABEL381:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_parents, var380); /* Direct call array#Array#add on <var_parents:Array[MClass]>*/
}
{
((void (*)(val* self))(var_377->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_377) /* next on <var_377:Iterator[MClassDef]>*/;
}
} else {
goto BREAK_label383;
}
}
BREAK_label383: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_377) on <var_377:Iterator[MClassDef]> */
RET_LABEL384:(void)0;
}
}
var385 = NEW_standard__ArrayMap(&type_standard__ArrayMap__nit__MClass__nit__AType);
{
{ /* Inline kernel#Object#init (var385) on <var385:ArrayMap[MClass, AType]> */
RET_LABEL386:(void)0;
}
}
var_seen_parents = var385;
if (varonce387) {
var388 = varonce387;
} else {
var389 = "Object";
var390 = 6;
var391 = standard___standard__NativeString___to_s_with_length(var389, var390);
var388 = var391;
varonce387 = var388;
}
{
var392 = nit___nit__ModelBuilder___try_get_mclass_by_name(self, var_nmodule, var_mmodule, var388);
}
var_objectclass = var392;
{
{ /* Inline parser_nodes#AStdClassdef#n_superclasses (var_nclassdef360) on <var_nclassdef360:AClassdef(AStdClassdef)> */
var395 = var_nclassdef360->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_superclasses].val; /* _n_superclasses on <var_nclassdef360:AClassdef(AStdClassdef)> */
if (unlikely(var395 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_superclasses");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1033);
show_backtrace(1);
}
var393 = var395;
RET_LABEL394:(void)0;
}
}
var_396 = var393;
{
var397 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_396);
}
var_398 = var397;
for(;;) {
{
var399 = ((short int (*)(val* self))(var_398->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_398) /* is_ok on <var_398:Iterator[ASuperclass]>*/;
}
if (var399){
{
var400 = ((val* (*)(val* self))(var_398->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_398) /* item on <var_398:Iterator[ASuperclass]>*/;
}
var_nsc401 = var400;
{
{ /* Inline parser_nodes#ASuperclass#n_type (var_nsc401) on <var_nsc401:ASuperclass> */
var404 = var_nsc401->attrs[COLOR_nit__parser_nodes__ASuperclass___n_type].val; /* _n_type on <var_nsc401:ASuperclass> */
if (unlikely(var404 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1121);
show_backtrace(1);
}
var402 = var404;
RET_LABEL403:(void)0;
}
}
var_ntype405 = var402;
{
{ /* Inline modelize_class#AType#mtype (var_ntype405) on <var_ntype405:AType> */
var408 = var_ntype405->attrs[COLOR_nit__modelize_class__AType___mtype].val; /* _mtype on <var_ntype405:AType> */
var406 = var408;
RET_LABEL407:(void)0;
}
}
var_mtype409 = var406;
var410 = NULL;
if (var_mtype409 == NULL) {
var411 = 1; /* is null */
} else {
var411 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype409,var410) on <var_mtype409:nullable MType> */
var_other190 = var410;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype409,var_other190) on <var_mtype409:nullable MType(MType)> */
var416 = var_mtype409 == var_other190;
var414 = var416;
goto RET_LABEL415;
RET_LABEL415:(void)0;
}
}
var412 = var414;
goto RET_LABEL413;
RET_LABEL413:(void)0;
}
var411 = var412;
}
if (var411){
goto BREAK_label417;
} else {
}
/* <var_mtype409:nullable MType(MType)> isa MClassType */
cltype419 = type_nit__MClassType.color;
idtype420 = type_nit__MClassType.id;
if(cltype419 >= var_mtype409->type->table_size) {
var418 = 0;
} else {
var418 = var_mtype409->type->type_table[cltype419] == idtype420;
}
if (unlikely(!var418)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 410);
show_backtrace(1);
}
{
{ /* Inline model#MClassType#mclass (var_mtype409) on <var_mtype409:nullable MType(MClassType)> */
var423 = var_mtype409->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype409:nullable MType(MClassType)> */
if (unlikely(var423 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var421 = var423;
RET_LABEL422:(void)0;
}
}
var_sc = var421;
{
var425 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__has(var_parents, var_sc);
}
var426 = !var425;
var_427 = var426;
if (var426){
var424 = var_427;
} else {
{
{ /* Inline kernel#Object#== (var_sc,var_objectclass) on <var_sc:MClass> */
var_other190 = var_objectclass;
{
{ /* Inline kernel#Object#is_same_instance (var_sc,var_other190) on <var_sc:MClass> */
var432 = var_sc == var_other190;
var430 = var432;
goto RET_LABEL431;
RET_LABEL431:(void)0;
}
}
var428 = var430;
goto RET_LABEL429;
RET_LABEL429:(void)0;
}
}
var424 = var428;
}
if (var424){
{
{ /* Inline parser_nodes#ANode#location (var_ntype405) on <var_ntype405:AType> */
var436 = var_ntype405->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var_ntype405:AType> */
if (unlikely(var436 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 23);
show_backtrace(1);
}
var434 = var436;
RET_LABEL435:(void)0;
}
}
{
{ /* Inline location#Location#file (var434) on <var434:Location> */
var439 = var434->attrs[COLOR_nit__location__Location___file].val; /* _file on <var434:Location> */
var437 = var439;
RET_LABEL438:(void)0;
}
}
var440 = NULL;
if (var437 == NULL) {
var441 = 0; /* is null */
} else {
var441 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var437,var440) on <var437:nullable SourceFile> */
var_other = var440;
{
var444 = ((short int (*)(val* self, val* p0))(var437->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var437, var_other) /* == on <var437:nullable SourceFile(SourceFile)>*/;
}
var445 = !var444;
var442 = var445;
goto RET_LABEL443;
RET_LABEL443:(void)0;
}
var441 = var442;
}
var_446 = var441;
if (var441){
{
{ /* Inline parser_nodes#ANode#location (var_ntype405) on <var_ntype405:AType> */
var449 = var_ntype405->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var_ntype405:AType> */
if (unlikely(var449 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 23);
show_backtrace(1);
}
var447 = var449;
RET_LABEL448:(void)0;
}
}
{
{ /* Inline location#Location#file (var447) on <var447:Location> */
var452 = var447->attrs[COLOR_nit__location__Location___file].val; /* _file on <var447:Location> */
var450 = var452;
RET_LABEL451:(void)0;
}
}
if (var450 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 414);
show_backtrace(1);
} else {
{ /* Inline location#SourceFile#filename (var450) on <var450:nullable SourceFile> */
if (unlikely(var450 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 22);
show_backtrace(1);
}
var455 = var450->attrs[COLOR_nit__location__SourceFile___filename].val; /* _filename on <var450:nullable SourceFile> */
if (unlikely(var455 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 22);
show_backtrace(1);
}
var453 = var455;
RET_LABEL454:(void)0;
}
}
{
var456 = standard___standard__Text___is_empty(var453);
}
var457 = !var456;
var433 = var457;
} else {
var433 = var_446;
}
if (var433){
if (varonce458) {
var459 = varonce458;
} else {
var460 = "useless-superclass";
var461 = 18;
var462 = standard___standard__NativeString___to_s_with_length(var460, var461);
var459 = var462;
varonce458 = var459;
}
if (varonce463) {
var464 = varonce463;
} else {
var465 = "Warning: superfluous super-class ";
var466 = 33;
var467 = standard___standard__NativeString___to_s_with_length(var465, var466);
var464 = var467;
varonce463 = var464;
}
if (varonce468) {
var469 = varonce468;
} else {
var470 = " in class ";
var471 = 10;
var472 = standard___standard__NativeString___to_s_with_length(var470, var471);
var469 = var472;
varonce468 = var469;
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef369) on <var_mclassdef369:MClassDef> */
var475 = var_mclassdef369->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef369:MClassDef> */
if (unlikely(var475 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var473 = var475;
RET_LABEL474:(void)0;
}
}
if (varonce476) {
var477 = varonce476;
} else {
var478 = ".";
var479 = 1;
var480 = standard___standard__NativeString___to_s_with_length(var478, var479);
var477 = var480;
varonce476 = var477;
}
var481 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var481 = array_instance Array[Object] */
var482 = 5;
var483 = NEW_standard__NativeArray(var482, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var483)->values[0] = (val*) var464;
((struct instance_standard__NativeArray*)var483)->values[1] = (val*) var_mtype409;
((struct instance_standard__NativeArray*)var483)->values[2] = (val*) var469;
((struct instance_standard__NativeArray*)var483)->values[3] = (val*) var473;
((struct instance_standard__NativeArray*)var483)->values[4] = (val*) var477;
{
((void (*)(val* self, val* p0, long p1))(var481->class->vft[COLOR_standard__array__Array__with_native]))(var481, var483, var482) /* with_native on <var481:Array[Object]>*/;
}
}
{
var484 = ((val* (*)(val* self))(var481->class->vft[COLOR_standard__string__Object__to_s]))(var481) /* to_s on <var481:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___warning(self, var_ntype405, var459, var484); /* Direct call modelbuilder_base#ModelBuilder#warning on <self:ModelBuilder>*/
}
} else {
}
} else {
{
var485 = standard___standard__MapRead___has_key(var_seen_parents, var_sc);
}
var486 = !var485;
if (var486){
{
standard___standard__ArrayMap___standard__abstract_collection__Map___91d_93d_61d(var_seen_parents, var_sc, var_ntype405); /* Direct call array#ArrayMap#[]= on <var_seen_parents:ArrayMap[MClass, AType]>*/
}
} else {
if (varonce487) {
var488 = varonce487;
} else {
var489 = "useless-superclass";
var490 = 18;
var491 = standard___standard__NativeString___to_s_with_length(var489, var490);
var488 = var491;
varonce487 = var488;
}
if (varonce492) {
var493 = varonce492;
} else {
var494 = "Warning: duplicated super-class ";
var495 = 32;
var496 = standard___standard__NativeString___to_s_with_length(var494, var495);
var493 = var496;
varonce492 = var493;
}
if (varonce497) {
var498 = varonce497;
} else {
var499 = " in class ";
var500 = 10;
var501 = standard___standard__NativeString___to_s_with_length(var499, var500);
var498 = var501;
varonce497 = var498;
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef369) on <var_mclassdef369:MClassDef> */
var504 = var_mclassdef369->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef369:MClassDef> */
if (unlikely(var504 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var502 = var504;
RET_LABEL503:(void)0;
}
}
if (varonce505) {
var506 = varonce505;
} else {
var507 = ".";
var508 = 1;
var509 = standard___standard__NativeString___to_s_with_length(var507, var508);
var506 = var509;
varonce505 = var506;
}
var510 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var510 = array_instance Array[Object] */
var511 = 5;
var512 = NEW_standard__NativeArray(var511, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var512)->values[0] = (val*) var493;
((struct instance_standard__NativeArray*)var512)->values[1] = (val*) var_mtype409;
((struct instance_standard__NativeArray*)var512)->values[2] = (val*) var498;
((struct instance_standard__NativeArray*)var512)->values[3] = (val*) var502;
((struct instance_standard__NativeArray*)var512)->values[4] = (val*) var506;
{
((void (*)(val* self, val* p0, long p1))(var510->class->vft[COLOR_standard__array__Array__with_native]))(var510, var512, var511) /* with_native on <var510:Array[Object]>*/;
}
}
{
var513 = ((val* (*)(val* self))(var510->class->vft[COLOR_standard__string__Object__to_s]))(var510) /* to_s on <var510:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___warning(self, var_ntype405, var488, var513); /* Direct call modelbuilder_base#ModelBuilder#warning on <self:ModelBuilder>*/
}
}
}
BREAK_label417: (void)0;
{
((void (*)(val* self))(var_398->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_398) /* next on <var_398:Iterator[ASuperclass]>*/;
}
} else {
goto BREAK_label514;
}
}
BREAK_label514: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_398) on <var_398:Iterator[ASuperclass]> */
RET_LABEL515:(void)0;
}
}
BREAK_label365: (void)0;
{
((void (*)(val* self))(var_357->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_357) /* next on <var_357:Iterator[AClassdef]>*/;
}
} else {
goto BREAK_label516;
}
}
BREAK_label516: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_357) on <var_357:Iterator[AClassdef]> */
RET_LABEL517:(void)0;
}
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 426);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#ModelBuilder#resolve_mtype_unchecked for (self: ModelBuilder, MModule, nullable MClassDef, AType, Bool): nullable MType */
val* nit__modelize_class___ModelBuilder___resolve_mtype_unchecked(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : nullable MType */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mclassdef /* var mclassdef: nullable MClassDef */;
val* var_ntype /* var ntype: AType */;
short int var_with_virtual /* var with_virtual: Bool */;
val* var1 /* : TClassid */;
val* var3 /* : TClassid */;
val* var4 /* : String */;
val* var_name /* var name: String */;
short int var5 /* : Bool */;
val* var6 /* : null */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var_ /* var : Bool */;
val* var12 /* : nullable MProperty */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_prop /* var prop: nullable MVirtualTypeProp */;
val* var14 /* : null */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : ANodes[AType] */;
val* var22 /* : ANodes[AType] */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
static val* varonce;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : FlatString */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : FlatString */;
val* var34 /* : Array[Object] */;
long var35 /* : Int */;
val* var36 /* : NativeArray[Object] */;
val* var37 /* : String */;
val* var38 /* : MVirtualType */;
val* var40 /* : MVirtualType */;
val* var_res /* var res: MType */;
val* var41 /* : nullable TKwnullable */;
val* var43 /* : nullable TKwnullable */;
val* var44 /* : null */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
val* var50 /* : MType */;
val* var52 /* : null */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
val* var58 /* : MClass */;
val* var60 /* : MClass */;
val* var61 /* : Array[MParameterType] */;
val* var63 /* : Array[MParameterType] */;
val* var_64 /* var : Array[MParameterType] */;
val* var65 /* : ArrayIterator[nullable Object] */;
val* var_66 /* var : ArrayIterator[MParameterType] */;
short int var67 /* : Bool */;
val* var68 /* : nullable Object */;
val* var_p /* var p: MParameterType */;
val* var69 /* : String */;
val* var71 /* : String */;
short int var72 /* : Bool */;
short int var74 /* : Bool */;
short int var75 /* : Bool */;
val* var76 /* : ANodes[AType] */;
val* var78 /* : ANodes[AType] */;
short int var79 /* : Bool */;
short int var80 /* : Bool */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
long var84 /* : Int */;
val* var85 /* : FlatString */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
long var89 /* : Int */;
val* var90 /* : FlatString */;
val* var91 /* : Array[Object] */;
long var92 /* : Int */;
val* var93 /* : NativeArray[Object] */;
val* var94 /* : String */;
val* var95 /* : nullable TKwnullable */;
val* var97 /* : nullable TKwnullable */;
val* var98 /* : null */;
short int var99 /* : Bool */;
short int var100 /* : Bool */;
short int var102 /* : Bool */;
short int var103 /* : Bool */;
val* var104 /* : MType */;
val* var108 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
val* var109 /* : null */;
short int var110 /* : Bool */;
short int var111 /* : Bool */;
short int var113 /* : Bool */;
short int var114 /* : Bool */;
val* var115 /* : ANodes[AType] */;
val* var117 /* : ANodes[AType] */;
long var118 /* : Int */;
long var_arity /* var arity: Int */;
long var119 /* : Int */;
long var121 /* : Int */;
short int var122 /* : Bool */;
short int var124 /* : Bool */;
short int var125 /* : Bool */;
long var126 /* : Int */;
short int var127 /* : Bool */;
short int var129 /* : Bool */;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : NativeString */;
long var133 /* : Int */;
val* var134 /* : FlatString */;
static val* varonce135;
val* var136 /* : String */;
char* var137 /* : NativeString */;
long var138 /* : Int */;
val* var139 /* : FlatString */;
val* var140 /* : Array[Object] */;
long var141 /* : Int */;
val* var142 /* : NativeArray[Object] */;
val* var143 /* : String */;
long var144 /* : Int */;
long var146 /* : Int */;
long var147 /* : Int */;
short int var148 /* : Bool */;
short int var150 /* : Bool */;
static val* varonce151;
val* var152 /* : String */;
char* var153 /* : NativeString */;
long var154 /* : Int */;
val* var155 /* : FlatString */;
static val* varonce156;
val* var157 /* : String */;
char* var158 /* : NativeString */;
long var159 /* : Int */;
val* var160 /* : FlatString */;
val* var161 /* : Array[Object] */;
long var162 /* : Int */;
val* var163 /* : NativeArray[Object] */;
val* var164 /* : String */;
static val* varonce165;
val* var166 /* : String */;
char* var167 /* : NativeString */;
long var168 /* : Int */;
val* var169 /* : FlatString */;
static val* varonce170;
val* var171 /* : String */;
char* var172 /* : NativeString */;
long var173 /* : Int */;
val* var174 /* : FlatString */;
long var175 /* : Int */;
long var177 /* : Int */;
static val* varonce178;
val* var179 /* : String */;
char* var180 /* : NativeString */;
long var181 /* : Int */;
val* var182 /* : FlatString */;
static val* varonce183;
val* var184 /* : String */;
char* var185 /* : NativeString */;
long var186 /* : Int */;
val* var187 /* : FlatString */;
val* var188 /* : Array[Object] */;
long var189 /* : Int */;
val* var190 /* : NativeArray[Object] */;
val* var191 /* : Object */;
val* var192 /* : Object */;
val* var193 /* : String */;
val* var194 /* : null */;
long var195 /* : Int */;
short int var196 /* : Bool */;
short int var198 /* : Bool */;
val* var199 /* : MClassType */;
val* var201 /* : MClassType */;
val* var202 /* : nullable TKwnullable */;
val* var204 /* : nullable TKwnullable */;
val* var205 /* : null */;
short int var206 /* : Bool */;
short int var207 /* : Bool */;
short int var209 /* : Bool */;
short int var210 /* : Bool */;
val* var211 /* : MType */;
val* var213 /* : Array[MType] */;
val* var_mtypes /* var mtypes: Array[MType] */;
val* var214 /* : ANodes[AType] */;
val* var216 /* : ANodes[AType] */;
val* var_217 /* var : ANodes[AType] */;
val* var218 /* : Iterator[ANode] */;
val* var_219 /* var : Iterator[AType] */;
short int var220 /* : Bool */;
val* var221 /* : nullable Object */;
val* var_nt /* var nt: AType */;
val* var222 /* : nullable MType */;
val* var_mt /* var mt: nullable MType */;
val* var223 /* : null */;
short int var224 /* : Bool */;
short int var225 /* : Bool */;
val* var_other227 /* var other: nullable Object */;
short int var228 /* : Bool */;
short int var230 /* : Bool */;
val* var231 /* : null */;
val* var234 /* : MClassType */;
val* var235 /* : nullable TKwnullable */;
val* var237 /* : nullable TKwnullable */;
val* var238 /* : null */;
short int var239 /* : Bool */;
short int var240 /* : Bool */;
short int var242 /* : Bool */;
short int var243 /* : Bool */;
val* var244 /* : MType */;
static val* varonce246;
val* var247 /* : String */;
char* var248 /* : NativeString */;
long var249 /* : Int */;
val* var250 /* : FlatString */;
static val* varonce251;
val* var252 /* : String */;
char* var253 /* : NativeString */;
long var254 /* : Int */;
val* var255 /* : FlatString */;
static val* varonce256;
val* var257 /* : String */;
char* var258 /* : NativeString */;
long var259 /* : Int */;
val* var260 /* : FlatString */;
val* var261 /* : Array[Object] */;
long var262 /* : Int */;
val* var263 /* : NativeArray[Object] */;
val* var264 /* : String */;
val* var265 /* : null */;
var_mmodule = p0;
var_mclassdef = p1;
var_ntype = p2;
var_with_virtual = p3;
{
{ /* Inline parser_nodes#AType#n_id (var_ntype) on <var_ntype:AType> */
var3 = var_ntype->attrs[COLOR_nit__parser_nodes__AType___n_id].val; /* _n_id on <var_ntype:AType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1536);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nit__lexer_work___Token___text(var1);
}
var_name = var4;
var6 = NULL;
if (var_mclassdef == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mclassdef,var6) on <var_mclassdef:nullable MClassDef> */
var_other = var6;
{
var10 = ((short int (*)(val* self, val* p0))(var_mclassdef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mclassdef, var_other) /* == on <var_mclassdef:nullable MClassDef(MClassDef)>*/;
}
var11 = !var10;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
var_ = var7;
if (var7){
var5 = var_with_virtual;
} else {
var5 = var_;
}
if (var5){
{
var12 = nit___nit__ModelBuilder___try_get_mproperty_by_name(self, var_ntype, var_mclassdef, var_name);
}
/* <var12:nullable MProperty> isa nullable MVirtualTypeProp */
cltype = type_nullable__nit__MVirtualTypeProp.color;
idtype = type_nullable__nit__MVirtualTypeProp.id;
if(var12 == NULL) {
var13 = 1;
} else {
if(cltype >= var12->type->table_size) {
var13 = 0;
} else {
var13 = var12->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var13)) {
var_class_name = var12 == NULL ? "null" : var12->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MVirtualTypeProp", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 440);
show_backtrace(1);
}
var_prop = var12;
var14 = NULL;
if (var_prop == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_prop,var14) on <var_prop:nullable MVirtualTypeProp> */
var_other = var14;
{
var18 = ((short int (*)(val* self, val* p0))(var_prop->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_prop, var_other) /* == on <var_prop:nullable MVirtualTypeProp(MVirtualTypeProp)>*/;
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
{ /* Inline parser_nodes#AType#n_types (var_ntype) on <var_ntype:AType> */
var22 = var_ntype->attrs[COLOR_nit__parser_nodes__AType___n_types].val; /* _n_types on <var_ntype:AType> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1539);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = nit___nit__ANodes___standard__abstract_collection__Collection__is_empty(var20);
}
var24 = !var23;
if (var24){
if (varonce) {
var25 = varonce;
} else {
var26 = "Type error: formal type ";
var27 = 24;
var28 = standard___standard__NativeString___to_s_with_length(var26, var27);
var25 = var28;
varonce = var25;
}
if (varonce29) {
var30 = varonce29;
} else {
var31 = " cannot have formal parameters.";
var32 = 31;
var33 = standard___standard__NativeString___to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
var34 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var34 = array_instance Array[Object] */
var35 = 3;
var36 = NEW_standard__NativeArray(var35, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var36)->values[0] = (val*) var25;
((struct instance_standard__NativeArray*)var36)->values[1] = (val*) var_name;
((struct instance_standard__NativeArray*)var36)->values[2] = (val*) var30;
{
((void (*)(val* self, val* p0, long p1))(var34->class->vft[COLOR_standard__array__Array__with_native]))(var34, var36, var35) /* with_native on <var34:Array[Object]>*/;
}
}
{
var37 = ((val* (*)(val* self))(var34->class->vft[COLOR_standard__string__Object__to_s]))(var34) /* to_s on <var34:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(self, var_ntype, var37); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
{
{ /* Inline model#MVirtualTypeProp#mvirtualtype (var_prop) on <var_prop:nullable MVirtualTypeProp(MVirtualTypeProp)> */
var40 = var_prop->attrs[COLOR_nit__model__MVirtualTypeProp___mvirtualtype].val; /* _mvirtualtype on <var_prop:nullable MVirtualTypeProp(MVirtualTypeProp)> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mvirtualtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1992);
show_backtrace(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
var_res = var38;
{
{ /* Inline parser_nodes#AType#n_kwnullable (var_ntype) on <var_ntype:AType> */
var43 = var_ntype->attrs[COLOR_nit__parser_nodes__AType___n_kwnullable].val; /* _n_kwnullable on <var_ntype:AType> */
var41 = var43;
RET_LABEL42:(void)0;
}
}
var44 = NULL;
if (var41 == NULL) {
var45 = 0; /* is null */
} else {
var45 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var41,var44) on <var41:nullable TKwnullable> */
var_other = var44;
{
var48 = ((short int (*)(val* self, val* p0))(var41->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var41, var_other) /* == on <var41:nullable TKwnullable(TKwnullable)>*/;
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
var50 = nit___nit__MType___as_nullable(var_res);
}
var_res = var50;
} else {
}
{
{ /* Inline modelize_class#AType#mtype= (var_ntype,var_res) on <var_ntype:AType> */
var_ntype->attrs[COLOR_nit__modelize_class__AType___mtype].val = var_res; /* _mtype on <var_ntype:AType> */
RET_LABEL51:(void)0;
}
}
var = var_res;
goto RET_LABEL;
} else {
}
} else {
}
var52 = NULL;
if (var_mclassdef == NULL) {
var53 = 0; /* is null */
} else {
var53 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mclassdef,var52) on <var_mclassdef:nullable MClassDef> */
var_other = var52;
{
var56 = ((short int (*)(val* self, val* p0))(var_mclassdef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mclassdef, var_other) /* == on <var_mclassdef:nullable MClassDef(MClassDef)>*/;
}
var57 = !var56;
var54 = var57;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
var53 = var54;
}
if (var53){
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var60 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:nullable MClassDef(MClassDef)> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
{ /* Inline model#MClass#mparameters (var58) on <var58:MClass> */
var63 = var58->attrs[COLOR_nit__model__MClass___mparameters].val; /* _mparameters on <var58:MClass> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 368);
show_backtrace(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
var_64 = var61;
{
var65 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_64);
}
var_66 = var65;
for(;;) {
{
var67 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_66);
}
if (var67){
{
var68 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_66);
}
var_p = var68;
{
{ /* Inline model#MParameterType#name (var_p) on <var_p:MParameterType> */
var71 = var_p->attrs[COLOR_nit__model__MParameterType___name].val; /* _name on <var_p:MParameterType> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1391);
show_backtrace(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var69,var_name) on <var69:String> */
var_other = var_name;
{
var74 = ((short int (*)(val* self, val* p0))(var69->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var69, var_other) /* == on <var69:String>*/;
}
var75 = !var74;
var72 = var75;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
}
if (var72){
goto BREAK_label;
} else {
}
{
{ /* Inline parser_nodes#AType#n_types (var_ntype) on <var_ntype:AType> */
var78 = var_ntype->attrs[COLOR_nit__parser_nodes__AType___n_types].val; /* _n_types on <var_ntype:AType> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1539);
show_backtrace(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
{
var79 = nit___nit__ANodes___standard__abstract_collection__Collection__is_empty(var76);
}
var80 = !var79;
if (var80){
if (varonce81) {
var82 = varonce81;
} else {
var83 = "Type error: formal type ";
var84 = 24;
var85 = standard___standard__NativeString___to_s_with_length(var83, var84);
var82 = var85;
varonce81 = var82;
}
if (varonce86) {
var87 = varonce86;
} else {
var88 = " cannot have formal parameters.";
var89 = 31;
var90 = standard___standard__NativeString___to_s_with_length(var88, var89);
var87 = var90;
varonce86 = var87;
}
var91 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var91 = array_instance Array[Object] */
var92 = 3;
var93 = NEW_standard__NativeArray(var92, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var93)->values[0] = (val*) var82;
((struct instance_standard__NativeArray*)var93)->values[1] = (val*) var_name;
((struct instance_standard__NativeArray*)var93)->values[2] = (val*) var87;
{
((void (*)(val* self, val* p0, long p1))(var91->class->vft[COLOR_standard__array__Array__with_native]))(var91, var93, var92) /* with_native on <var91:Array[Object]>*/;
}
}
{
var94 = ((val* (*)(val* self))(var91->class->vft[COLOR_standard__string__Object__to_s]))(var91) /* to_s on <var91:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(self, var_ntype, var94); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
var_res = var_p;
{
{ /* Inline parser_nodes#AType#n_kwnullable (var_ntype) on <var_ntype:AType> */
var97 = var_ntype->attrs[COLOR_nit__parser_nodes__AType___n_kwnullable].val; /* _n_kwnullable on <var_ntype:AType> */
var95 = var97;
RET_LABEL96:(void)0;
}
}
var98 = NULL;
if (var95 == NULL) {
var99 = 0; /* is null */
} else {
var99 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var95,var98) on <var95:nullable TKwnullable> */
var_other = var98;
{
var102 = ((short int (*)(val* self, val* p0))(var95->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var95, var_other) /* == on <var95:nullable TKwnullable(TKwnullable)>*/;
}
var103 = !var102;
var100 = var103;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
var99 = var100;
}
if (var99){
{
var104 = nit___nit__MType___as_nullable(var_res);
}
var_res = var104;
} else {
}
{
{ /* Inline modelize_class#AType#mtype= (var_ntype,var_res) on <var_ntype:AType> */
var_ntype->attrs[COLOR_nit__modelize_class__AType___mtype].val = var_res; /* _mtype on <var_ntype:AType> */
RET_LABEL105:(void)0;
}
}
var = var_res;
goto RET_LABEL;
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_66); /* Direct call array#ArrayIterator#next on <var_66:ArrayIterator[MParameterType]>*/
}
} else {
goto BREAK_label106;
}
}
BREAK_label106: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_66) on <var_66:ArrayIterator[MParameterType]> */
RET_LABEL107:(void)0;
}
}
} else {
}
{
var108 = nit___nit__ModelBuilder___try_get_mclass_by_name(self, var_ntype, var_mmodule, var_name);
}
var_mclass = var108;
var109 = NULL;
if (var_mclass == NULL) {
var110 = 0; /* is null */
} else {
var110 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mclass,var109) on <var_mclass:nullable MClass> */
var_other = var109;
{
var113 = ((short int (*)(val* self, val* p0))(var_mclass->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mclass, var_other) /* == on <var_mclass:nullable MClass(MClass)>*/;
}
var114 = !var113;
var111 = var114;
goto RET_LABEL112;
RET_LABEL112:(void)0;
}
var110 = var111;
}
if (var110){
{
{ /* Inline parser_nodes#AType#n_types (var_ntype) on <var_ntype:AType> */
var117 = var_ntype->attrs[COLOR_nit__parser_nodes__AType___n_types].val; /* _n_types on <var_ntype:AType> */
if (unlikely(var117 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1539);
show_backtrace(1);
}
var115 = var117;
RET_LABEL116:(void)0;
}
}
{
var118 = nit___nit__ANodes___standard__abstract_collection__Collection__length(var115);
}
var_arity = var118;
{
{ /* Inline model#MClass#arity (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var121 = var_mclass->attrs[COLOR_nit__model__MClass___arity].l; /* _arity on <var_mclass:nullable MClass(MClass)> */
var119 = var121;
RET_LABEL120:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_arity,var119) on <var_arity:Int> */
var124 = var_arity == var119;
var125 = !var124;
var122 = var125;
goto RET_LABEL123;
RET_LABEL123:(void)0;
}
}
if (var122){
var126 = 0;
{
{ /* Inline kernel#Int#== (var_arity,var126) on <var_arity:Int> */
var129 = var_arity == var126;
var127 = var129;
goto RET_LABEL128;
RET_LABEL128:(void)0;
}
}
if (var127){
if (varonce130) {
var131 = varonce130;
} else {
var132 = "Type error: \'";
var133 = 13;
var134 = standard___standard__NativeString___to_s_with_length(var132, var133);
var131 = var134;
varonce130 = var131;
}
if (varonce135) {
var136 = varonce135;
} else {
var137 = "\' is a generic class.";
var138 = 21;
var139 = standard___standard__NativeString___to_s_with_length(var137, var138);
var136 = var139;
varonce135 = var136;
}
var140 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var140 = array_instance Array[Object] */
var141 = 3;
var142 = NEW_standard__NativeArray(var141, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var142)->values[0] = (val*) var131;
((struct instance_standard__NativeArray*)var142)->values[1] = (val*) var_name;
((struct instance_standard__NativeArray*)var142)->values[2] = (val*) var136;
{
((void (*)(val* self, val* p0, long p1))(var140->class->vft[COLOR_standard__array__Array__with_native]))(var140, var142, var141) /* with_native on <var140:Array[Object]>*/;
}
}
{
var143 = ((val* (*)(val* self))(var140->class->vft[COLOR_standard__string__Object__to_s]))(var140) /* to_s on <var140:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(self, var_ntype, var143); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
{
{ /* Inline model#MClass#arity (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var146 = var_mclass->attrs[COLOR_nit__model__MClass___arity].l; /* _arity on <var_mclass:nullable MClass(MClass)> */
var144 = var146;
RET_LABEL145:(void)0;
}
}
var147 = 0;
{
{ /* Inline kernel#Int#== (var144,var147) on <var144:Int> */
var150 = var144 == var147;
var148 = var150;
goto RET_LABEL149;
RET_LABEL149:(void)0;
}
}
if (var148){
if (varonce151) {
var152 = varonce151;
} else {
var153 = "Type error: \'";
var154 = 13;
var155 = standard___standard__NativeString___to_s_with_length(var153, var154);
var152 = var155;
varonce151 = var152;
}
if (varonce156) {
var157 = varonce156;
} else {
var158 = "\' is not a generic class.";
var159 = 25;
var160 = standard___standard__NativeString___to_s_with_length(var158, var159);
var157 = var160;
varonce156 = var157;
}
var161 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var161 = array_instance Array[Object] */
var162 = 3;
var163 = NEW_standard__NativeArray(var162, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var163)->values[0] = (val*) var152;
((struct instance_standard__NativeArray*)var163)->values[1] = (val*) var_name;
((struct instance_standard__NativeArray*)var163)->values[2] = (val*) var157;
{
((void (*)(val* self, val* p0, long p1))(var161->class->vft[COLOR_standard__array__Array__with_native]))(var161, var163, var162) /* with_native on <var161:Array[Object]>*/;
}
}
{
var164 = ((val* (*)(val* self))(var161->class->vft[COLOR_standard__string__Object__to_s]))(var161) /* to_s on <var161:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(self, var_ntype, var164); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
if (varonce165) {
var166 = varonce165;
} else {
var167 = "Type error: \'";
var168 = 13;
var169 = standard___standard__NativeString___to_s_with_length(var167, var168);
var166 = var169;
varonce165 = var166;
}
if (varonce170) {
var171 = varonce170;
} else {
var172 = "\' has ";
var173 = 6;
var174 = standard___standard__NativeString___to_s_with_length(var172, var173);
var171 = var174;
varonce170 = var171;
}
{
{ /* Inline model#MClass#arity (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var177 = var_mclass->attrs[COLOR_nit__model__MClass___arity].l; /* _arity on <var_mclass:nullable MClass(MClass)> */
var175 = var177;
RET_LABEL176:(void)0;
}
}
if (varonce178) {
var179 = varonce178;
} else {
var180 = " parameters (";
var181 = 13;
var182 = standard___standard__NativeString___to_s_with_length(var180, var181);
var179 = var182;
varonce178 = var179;
}
if (varonce183) {
var184 = varonce183;
} else {
var185 = " are provided).";
var186 = 15;
var187 = standard___standard__NativeString___to_s_with_length(var185, var186);
var184 = var187;
varonce183 = var184;
}
var188 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var188 = array_instance Array[Object] */
var189 = 7;
var190 = NEW_standard__NativeArray(var189, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var190)->values[0] = (val*) var166;
((struct instance_standard__NativeArray*)var190)->values[1] = (val*) var_name;
((struct instance_standard__NativeArray*)var190)->values[2] = (val*) var171;
var191 = BOX_standard__Int(var175); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var190)->values[3] = (val*) var191;
((struct instance_standard__NativeArray*)var190)->values[4] = (val*) var179;
var192 = BOX_standard__Int(var_arity); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var190)->values[5] = (val*) var192;
((struct instance_standard__NativeArray*)var190)->values[6] = (val*) var184;
{
((void (*)(val* self, val* p0, long p1))(var188->class->vft[COLOR_standard__array__Array__with_native]))(var188, var190, var189) /* with_native on <var188:Array[Object]>*/;
}
}
{
var193 = ((val* (*)(val* self))(var188->class->vft[COLOR_standard__string__Object__to_s]))(var188) /* to_s on <var188:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(self, var_ntype, var193); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
}
}
var194 = NULL;
var = var194;
goto RET_LABEL;
} else {
}
var195 = 0;
{
{ /* Inline kernel#Int#== (var_arity,var195) on <var_arity:Int> */
var198 = var_arity == var195;
var196 = var198;
goto RET_LABEL197;
RET_LABEL197:(void)0;
}
}
if (var196){
{
{ /* Inline model#MClass#mclass_type (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var201 = var_mclass->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var201 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var199 = var201;
RET_LABEL200:(void)0;
}
}
var_res = var199;
{
{ /* Inline parser_nodes#AType#n_kwnullable (var_ntype) on <var_ntype:AType> */
var204 = var_ntype->attrs[COLOR_nit__parser_nodes__AType___n_kwnullable].val; /* _n_kwnullable on <var_ntype:AType> */
var202 = var204;
RET_LABEL203:(void)0;
}
}
var205 = NULL;
if (var202 == NULL) {
var206 = 0; /* is null */
} else {
var206 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var202,var205) on <var202:nullable TKwnullable> */
var_other = var205;
{
var209 = ((short int (*)(val* self, val* p0))(var202->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var202, var_other) /* == on <var202:nullable TKwnullable(TKwnullable)>*/;
}
var210 = !var209;
var207 = var210;
goto RET_LABEL208;
RET_LABEL208:(void)0;
}
var206 = var207;
}
if (var206){
{
var211 = nit___nit__MType___as_nullable(var_res);
}
var_res = var211;
} else {
}
{
{ /* Inline modelize_class#AType#mtype= (var_ntype,var_res) on <var_ntype:AType> */
var_ntype->attrs[COLOR_nit__modelize_class__AType___mtype].val = var_res; /* _mtype on <var_ntype:AType> */
RET_LABEL212:(void)0;
}
}
var = var_res;
goto RET_LABEL;
} else {
var213 = NEW_standard__Array(&type_standard__Array__nit__MType);
{
standard___standard__Array___standard__kernel__Object__init(var213); /* Direct call array#Array#init on <var213:Array[MType]>*/
}
var_mtypes = var213;
{
{ /* Inline parser_nodes#AType#n_types (var_ntype) on <var_ntype:AType> */
var216 = var_ntype->attrs[COLOR_nit__parser_nodes__AType___n_types].val; /* _n_types on <var_ntype:AType> */
if (unlikely(var216 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1539);
show_backtrace(1);
}
var214 = var216;
RET_LABEL215:(void)0;
}
}
var_217 = var214;
{
var218 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_217);
}
var_219 = var218;
for(;;) {
{
var220 = ((short int (*)(val* self))(var_219->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_219) /* is_ok on <var_219:Iterator[AType]>*/;
}
if (var220){
{
var221 = ((val* (*)(val* self))(var_219->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_219) /* item on <var_219:Iterator[AType]>*/;
}
var_nt = var221;
{
var222 = nit__modelize_class___ModelBuilder___resolve_mtype_unchecked(self, var_mmodule, var_mclassdef, var_nt, var_with_virtual);
}
var_mt = var222;
var223 = NULL;
if (var_mt == NULL) {
var224 = 1; /* is null */
} else {
var224 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mt,var223) on <var_mt:nullable MType> */
var_other227 = var223;
{
{ /* Inline kernel#Object#is_same_instance (var_mt,var_other227) on <var_mt:nullable MType(MType)> */
var230 = var_mt == var_other227;
var228 = var230;
goto RET_LABEL229;
RET_LABEL229:(void)0;
}
}
var225 = var228;
goto RET_LABEL226;
RET_LABEL226:(void)0;
}
var224 = var225;
}
if (var224){
var231 = NULL;
var = var231;
goto RET_LABEL;
} else {
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_mtypes, var_mt); /* Direct call array#Array#add on <var_mtypes:Array[MType]>*/
}
{
((void (*)(val* self))(var_219->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_219) /* next on <var_219:Iterator[AType]>*/;
}
} else {
goto BREAK_label232;
}
}
BREAK_label232: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_219) on <var_219:Iterator[AType]> */
RET_LABEL233:(void)0;
}
}
{
var234 = nit___nit__MClass___get_mtype(var_mclass, var_mtypes);
}
var_res = var234;
{
{ /* Inline parser_nodes#AType#n_kwnullable (var_ntype) on <var_ntype:AType> */
var237 = var_ntype->attrs[COLOR_nit__parser_nodes__AType___n_kwnullable].val; /* _n_kwnullable on <var_ntype:AType> */
var235 = var237;
RET_LABEL236:(void)0;
}
}
var238 = NULL;
if (var235 == NULL) {
var239 = 0; /* is null */
} else {
var239 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var235,var238) on <var235:nullable TKwnullable> */
var_other = var238;
{
var242 = ((short int (*)(val* self, val* p0))(var235->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var235, var_other) /* == on <var235:nullable TKwnullable(TKwnullable)>*/;
}
var243 = !var242;
var240 = var243;
goto RET_LABEL241;
RET_LABEL241:(void)0;
}
var239 = var240;
}
if (var239){
{
var244 = nit___nit__MType___as_nullable(var_res);
}
var_res = var244;
} else {
}
{
{ /* Inline modelize_class#AType#mtype= (var_ntype,var_res) on <var_ntype:AType> */
var_ntype->attrs[COLOR_nit__modelize_class__AType___mtype].val = var_res; /* _mtype on <var_ntype:AType> */
RET_LABEL245:(void)0;
}
}
var = var_res;
goto RET_LABEL;
}
} else {
}
if (varonce246) {
var247 = varonce246;
} else {
var248 = "Type error: class ";
var249 = 18;
var250 = standard___standard__NativeString___to_s_with_length(var248, var249);
var247 = var250;
varonce246 = var247;
}
if (varonce251) {
var252 = varonce251;
} else {
var253 = " not found in module ";
var254 = 21;
var255 = standard___standard__NativeString___to_s_with_length(var253, var254);
var252 = var255;
varonce251 = var252;
}
if (varonce256) {
var257 = varonce256;
} else {
var258 = ".";
var259 = 1;
var260 = standard___standard__NativeString___to_s_with_length(var258, var259);
var257 = var260;
varonce256 = var257;
}
var261 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var261 = array_instance Array[Object] */
var262 = 5;
var263 = NEW_standard__NativeArray(var262, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var263)->values[0] = (val*) var247;
((struct instance_standard__NativeArray*)var263)->values[1] = (val*) var_name;
((struct instance_standard__NativeArray*)var263)->values[2] = (val*) var252;
((struct instance_standard__NativeArray*)var263)->values[3] = (val*) var_mmodule;
((struct instance_standard__NativeArray*)var263)->values[4] = (val*) var257;
{
((void (*)(val* self, val* p0, long p1))(var261->class->vft[COLOR_standard__array__Array__with_native]))(var261, var263, var262) /* with_native on <var261:Array[Object]>*/;
}
}
{
var264 = ((val* (*)(val* self))(var261->class->vft[COLOR_standard__string__Object__to_s]))(var261) /* to_s on <var261:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(self, var_ntype, var264); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
var265 = NULL;
var = var265;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_class#ModelBuilder#resolve_mtype for (self: ModelBuilder, MModule, nullable MClassDef, AType): nullable MType */
val* nit__modelize_class___ModelBuilder___resolve_mtype(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MType */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mclassdef /* var mclassdef: nullable MClassDef */;
val* var_ntype /* var ntype: AType */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : nullable MType */;
val* var13 /* : null */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : null */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
int cltype;
int idtype;
val* var25 /* : MClass */;
val* var27 /* : MClass */;
val* var_mclass /* var mclass: MClass */;
long var28 /* : Int */;
long var_i /* var i: Int */;
long var29 /* : Int */;
long var31 /* : Int */;
long var_ /* var : Int */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name;
short int var37 /* : Bool */;
val* var38 /* : MClassDef */;
val* var40 /* : MClassDef */;
val* var41 /* : MClassType */;
val* var43 /* : MClassType */;
val* var44 /* : Array[MType] */;
val* var45 /* : nullable Object */;
val* var_bound /* var bound: MType */;
val* var46 /* : ANodes[AType] */;
val* var48 /* : ANodes[AType] */;
val* var49 /* : ANode */;
val* var_nt /* var nt: AType */;
val* var50 /* : nullable MType */;
val* var_mt /* var mt: nullable MType */;
val* var51 /* : null */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
val* var58 /* : null */;
val* var59 /* : null */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
val* var_other63 /* var other: nullable Object */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
val* var66 /* : MClassType */;
val* var68 /* : MClassType */;
val* var_anchor /* var anchor: nullable Object */;
val* var69 /* : null */;
short int var70 /* : Bool */;
short int var71 /* : Bool */;
static val* varonce;
val* var72 /* : String */;
char* var73 /* : NativeString */;
long var74 /* : Int */;
val* var75 /* : FlatString */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
long var79 /* : Int */;
val* var80 /* : FlatString */;
val* var81 /* : Array[Object] */;
long var82 /* : Int */;
val* var83 /* : NativeArray[Object] */;
val* var84 /* : String */;
val* var85 /* : null */;
long var86 /* : Int */;
long var87 /* : Int */;
short int var88 /* : Bool */;
var_mmodule = p0;
var_mclassdef = p1;
var_ntype = p2;
{
{ /* Inline modelize_class#AType#mtype (var_ntype) on <var_ntype:AType> */
var3 = var_ntype->attrs[COLOR_nit__modelize_class__AType___mtype].val; /* _mtype on <var_ntype:AType> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_mtype = var1;
var4 = NULL;
if (var_mtype == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var4) on <var_mtype:nullable MType> */
var_other = var4;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var10 = var_mtype == var_other;
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
var11 = 1;
{
var12 = nit__modelize_class___ModelBuilder___resolve_mtype_unchecked(self, var_mmodule, var_mclassdef, var_ntype, var11);
}
var_mtype = var12;
} else {
}
var13 = NULL;
if (var_mtype == NULL) {
var14 = 1; /* is null */
} else {
var14 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var13) on <var_mtype:nullable MType> */
var_other = var13;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var19 = var_mtype == var_other;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
if (var14){
var20 = NULL;
var = var20;
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_class#AType#checked_mtype (var_ntype) on <var_ntype:AType> */
var23 = var_ntype->attrs[COLOR_nit__modelize_class__AType___checked_mtype].s; /* _checked_mtype on <var_ntype:AType> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (var21){
var = var_mtype;
goto RET_LABEL;
} else {
}
/* <var_mtype:nullable MType(MType)> isa MGenericType */
cltype = type_nit__MGenericType.color;
idtype = type_nit__MGenericType.id;
if(cltype >= var_mtype->type->table_size) {
var24 = 0;
} else {
var24 = var_mtype->type->type_table[cltype] == idtype;
}
if (var24){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:nullable MType(MGenericType)> */
var27 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:nullable MType(MGenericType)> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
var_mclass = var25;
var28 = 0;
var_i = var28;
{
{ /* Inline model#MClass#arity (var_mclass) on <var_mclass:MClass> */
var31 = var_mclass->attrs[COLOR_nit__model__MClass___arity].l; /* _arity on <var_mclass:MClass> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
var_ = var29;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var34 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var37 = var_i < var_;
var32 = var37;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
if (var32){
{
{ /* Inline model#MClass#intro (var_mclass) on <var_mclass:MClass> */
var40 = var_mclass->attrs[COLOR_nit__model__MClass___intro].val; /* _intro on <var_mclass:MClass> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 423);
show_backtrace(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var38) on <var38:MClassDef> */
var43 = var38->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var38:MClassDef> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
var44 = ((val* (*)(val* self))(var41->class->vft[COLOR_nit__model__MClassType__arguments]))(var41) /* arguments on <var41:MClassType>*/;
}
{
var45 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var44, var_i);
}
var_bound = var45;
{
{ /* Inline parser_nodes#AType#n_types (var_ntype) on <var_ntype:AType> */
var48 = var_ntype->attrs[COLOR_nit__parser_nodes__AType___n_types].val; /* _n_types on <var_ntype:AType> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1539);
show_backtrace(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
var49 = nit___nit__ANodes___standard__abstract_collection__SequenceRead___91d_93d(var46, var_i);
}
var_nt = var49;
{
var50 = nit__modelize_class___ModelBuilder___resolve_mtype(self, var_mmodule, var_mclassdef, var_nt);
}
var_mt = var50;
var51 = NULL;
if (var_mt == NULL) {
var52 = 1; /* is null */
} else {
var52 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mt,var51) on <var_mt:nullable MType> */
var_other = var51;
{
{ /* Inline kernel#Object#is_same_instance (var_mt,var_other) on <var_mt:nullable MType(MType)> */
var57 = var_mt == var_other;
var55 = var57;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
var52 = var53;
}
if (var52){
var58 = NULL;
var = var58;
goto RET_LABEL;
} else {
}
var59 = NULL;
if (var_mclassdef == NULL) {
var60 = 0; /* is null */
} else {
var60 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mclassdef,var59) on <var_mclassdef:nullable MClassDef> */
var_other63 = var59;
{
var64 = ((short int (*)(val* self, val* p0))(var_mclassdef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mclassdef, var_other63) /* == on <var_mclassdef:nullable MClassDef(MClassDef)>*/;
}
var65 = !var64;
var61 = var65;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
var60 = var61;
}
if (var60){
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var68 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:nullable MClassDef(MClassDef)> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
var_anchor = var66;
} else {
var69 = NULL;
var_anchor = var69;
}
{
var70 = nit___nit__MType___is_subtype(var_mt, var_mmodule, var_anchor, var_bound);
}
var71 = !var70;
if (var71){
if (varonce) {
var72 = varonce;
} else {
var73 = "Type error: expected ";
var74 = 21;
var75 = standard___standard__NativeString___to_s_with_length(var73, var74);
var72 = var75;
varonce = var72;
}
if (varonce76) {
var77 = varonce76;
} else {
var78 = ", got ";
var79 = 6;
var80 = standard___standard__NativeString___to_s_with_length(var78, var79);
var77 = var80;
varonce76 = var77;
}
var81 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var81 = array_instance Array[Object] */
var82 = 4;
var83 = NEW_standard__NativeArray(var82, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var83)->values[0] = (val*) var72;
((struct instance_standard__NativeArray*)var83)->values[1] = (val*) var_bound;
((struct instance_standard__NativeArray*)var83)->values[2] = (val*) var77;
((struct instance_standard__NativeArray*)var83)->values[3] = (val*) var_mt;
{
((void (*)(val* self, val* p0, long p1))(var81->class->vft[COLOR_standard__array__Array__with_native]))(var81, var83, var82) /* with_native on <var81:Array[Object]>*/;
}
}
{
var84 = ((val* (*)(val* self))(var81->class->vft[COLOR_standard__string__Object__to_s]))(var81) /* to_s on <var81:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(self, var_nt, var84); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
var85 = NULL;
var = var85;
goto RET_LABEL;
} else {
}
var86 = 1;
{
var87 = standard___standard__Int___Discrete__successor(var_i, var86);
}
var_i = var87;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
} else {
}
var88 = 1;
{
{ /* Inline modelize_class#AType#checked_mtype= (var_ntype,var88) on <var_ntype:AType> */
var_ntype->attrs[COLOR_nit__modelize_class__AType___checked_mtype].s = var88; /* _checked_mtype on <var_ntype:AType> */
RET_LABEL89:(void)0;
}
}
var = var_mtype;
goto RET_LABEL;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 541);
show_backtrace(1);
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
val* var1 /* : MClassKind */;
{
var1 = nit__model___standard__Object___concrete_kind(self);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_class#AAbstractClasskind#mkind for (self: AAbstractClasskind): MClassKind */
val* nit__modelize_class___AAbstractClasskind___AClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
{
var1 = nit__model___standard__Object___abstract_kind(self);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_class#AInterfaceClasskind#mkind for (self: AInterfaceClasskind): MClassKind */
val* nit__modelize_class___AInterfaceClasskind___AClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
{
var1 = nit__model___standard__Object___interface_kind(self);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_class#AEnumClasskind#mkind for (self: AEnumClasskind): MClassKind */
val* nit__modelize_class___AEnumClasskind___AClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
{
var1 = nit__model___standard__Object___enum_kind(self);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_class#AExternClasskind#mkind for (self: AExternClasskind): MClassKind */
val* nit__modelize_class___AExternClasskind___AClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
{
var1 = nit__model___standard__Object___extern_kind(self);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_class#AFormaldef#bound= for (self: AFormaldef, nullable MType) */
void nit__modelize_class___AFormaldef___bound_61d(val* self, val* p0) {
self->attrs[COLOR_nit__modelize_class__AFormaldef___bound].val = p0; /* _bound on <self:AFormaldef> */
RET_LABEL:;
}
/* method modelize_class#AType#mtype for (self: AType): nullable MType */
val* nit__modelize_class___AType___mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nit__modelize_class__AType___mtype].val; /* _mtype on <self:AType> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AType#mtype= for (self: AType, nullable MType) */
void nit__modelize_class___AType___mtype_61d(val* self, val* p0) {
self->attrs[COLOR_nit__modelize_class__AType___mtype].val = p0; /* _mtype on <self:AType> */
RET_LABEL:;
}
/* method modelize_class#AType#checked_mtype for (self: AType): Bool */
short int nit__modelize_class___AType___checked_mtype(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__modelize_class__AType___checked_mtype].s; /* _checked_mtype on <self:AType> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AType#checked_mtype= for (self: AType, Bool) */
void nit__modelize_class___AType___checked_mtype_61d(val* self, short int p0) {
self->attrs[COLOR_nit__modelize_class__AType___checked_mtype].s = p0; /* _checked_mtype on <self:AType> */
RET_LABEL:;
}
