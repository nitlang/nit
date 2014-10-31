#include "modelize_class.sep.0.h"
/* method modelize_class#ToolContext#modelize_class_phase for (self: ToolContext): Phase */
val* modelize_class__ToolContext__modelize_class_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_modelize_class__ToolContext___modelize_class_phase].val; /* _modelize_class_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelize_class_phase");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_class.nit", 23);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#ToolContext#modelize_class_phase for (self: Object): Phase */
val* VIRTUAL_modelize_class__ToolContext__modelize_class_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
val* var3 /* : Phase */;
{ /* Inline modelize_class#ToolContext#modelize_class_phase (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_modelize_class__ToolContext___modelize_class_phase].val; /* _modelize_class_phase on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelize_class_phase");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_class.nit", 23);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#ModelizeClassPhase#process_nmodule for (self: ModelizeClassPhase, AModule) */
void modelize_class__ModelizeClassPhase__process_nmodule(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
val* var /* : ToolContext */;
val* var2 /* : ToolContext */;
val* var3 /* : ModelBuilder */;
var_nmodule = p0;
{
{ /* Inline phase#Phase#toolcontext (self) on <self:ModelizeClassPhase> */
var2 = self->attrs[COLOR_phase__Phase___toolcontext].val; /* _toolcontext on <self:ModelizeClassPhase> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "phase.nit", 162);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = modelbuilder__ToolContext__modelbuilder(var);
}
{
modelize_class__ModelBuilder__build_classes(var3, var_nmodule); /* Direct call modelize_class#ModelBuilder#build_classes on <var3:ModelBuilder>*/
}
RET_LABEL:;
}
/* method modelize_class#ModelizeClassPhase#process_nmodule for (self: Object, AModule) */
void VIRTUAL_modelize_class__ModelizeClassPhase__process_nmodule(val* self, val* p0) {
modelize_class__ModelizeClassPhase__process_nmodule(self, p0); /* Direct call modelize_class#ModelizeClassPhase#process_nmodule on <self:Object(ModelizeClassPhase)>*/
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#build_a_mclass for (self: ModelBuilder, AModule, AClassdef) */
void modelize_class__ModelBuilder__build_a_mclass(val* self, val* p0, val* p1) {
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
val* var14 /* : AVisibility */;
val* var16 /* : AVisibility */;
val* var_nvisibility /* var nvisibility: nullable AVisibility */;
val* var17 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: nullable MVisibility */;
val* var18 /* : ANodes[AFormaldef] */;
val* var20 /* : ANodes[AFormaldef] */;
long var21 /* : Int */;
val* var22 /* : MVisibility */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
static val* varonce;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : FlatString */;
val* var33 /* : MVisibility */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : FlatString */;
long var45 /* : Int */;
long var_i /* var i: Int */;
long var_ /* var : Int */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
const char* var_class_name;
short int var51 /* : Bool */;
val* var52 /* : ANodes[AFormaldef] */;
val* var54 /* : ANodes[AFormaldef] */;
val* var55 /* : ANode */;
val* var_nfd /* var nfd: AFormaldef */;
val* var56 /* : TClassid */;
val* var58 /* : TClassid */;
val* var59 /* : String */;
val* var_ptname /* var ptname: String */;
short int var60 /* : Bool */;
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
val* var75 /* : SequenceRead[Char] */;
val* var77 /* : SequenceRead[Char] */;
val* var_78 /* var : SequenceRead[Char] */;
val* var79 /* : Iterator[nullable Object] */;
val* var_80 /* var : IndexedIterator[Char] */;
short int var81 /* : Bool */;
val* var82 /* : nullable Object */;
char var83 /* : Char */;
char var_c /* var c: Char */;
short int var84 /* : Bool */;
char var85 /* : Char */;
short int var86 /* : Bool */;
short int var88 /* : Bool */;
int cltype89;
int idtype90;
const char* var_class_name91;
short int var92 /* : Bool */;
short int var_93 /* var : Bool */;
char var94 /* : Char */;
short int var95 /* : Bool */;
short int var97 /* : Bool */;
int cltype98;
int idtype99;
const char* var_class_name100;
short int var101 /* : Bool */;
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
long var117 /* : Int */;
long var118 /* : Int */;
short int var120 /* : Bool */;
int cltype121;
int idtype122;
static val* varonce123;
val* var124 /* : String */;
char* var125 /* : NativeString */;
long var126 /* : Int */;
val* var127 /* : FlatString */;
val* var128 /* : null */;
val* var129 /* : MClassKind */;
val* var130 /* : null */;
val* var131 /* : MVisibility */;
short int var132 /* : Bool */;
int cltype133;
int idtype134;
static val* varonce135;
val* var136 /* : String */;
char* var137 /* : NativeString */;
long var138 /* : Int */;
val* var139 /* : FlatString */;
val* var140 /* : null */;
val* var141 /* : MClassKind */;
val* var142 /* : null */;
val* var143 /* : MVisibility */;
val* var144 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
val* var145 /* : null */;
short int var146 /* : Bool */;
short int var147 /* : Bool */;
short int var149 /* : Bool */;
short int var151 /* : Bool */;
short int var152 /* : Bool */;
short int var153 /* : Bool */;
int cltype154;
int idtype155;
short int var_156 /* var : Bool */;
val* var157 /* : nullable TKwredef */;
val* var159 /* : nullable TKwredef */;
val* var160 /* : null */;
short int var161 /* : Bool */;
short int var162 /* : Bool */;
val* var_other164 /* var other: nullable Object */;
short int var165 /* : Bool */;
short int var166 /* : Bool */;
short int var167 /* : Bool */;
static val* varonce168;
val* var169 /* : String */;
char* var170 /* : NativeString */;
long var171 /* : Int */;
val* var172 /* : FlatString */;
static val* varonce173;
val* var174 /* : String */;
char* var175 /* : NativeString */;
long var176 /* : Int */;
val* var177 /* : FlatString */;
val* var178 /* : Array[Object] */;
long var179 /* : Int */;
val* var180 /* : NativeArray[Object] */;
val* var181 /* : String */;
val* var182 /* : MClass */;
short int var183 /* : Bool */;
short int var184 /* : Bool */;
int cltype185;
int idtype186;
short int var_187 /* var : Bool */;
val* var188 /* : Map[MClass, AClassdef] */;
val* var190 /* : Map[MClass, AClassdef] */;
short int var191 /* : Bool */;
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
val* var202 /* : Map[MClass, AClassdef] */;
val* var204 /* : Map[MClass, AClassdef] */;
val* var205 /* : nullable Object */;
val* var206 /* : Location */;
val* var208 /* : Location */;
long var209 /* : Int */;
long var211 /* : Int */;
static val* varonce212;
val* var213 /* : String */;
char* var214 /* : NativeString */;
long var215 /* : Int */;
val* var216 /* : FlatString */;
val* var217 /* : Array[Object] */;
long var218 /* : Int */;
val* var219 /* : NativeArray[Object] */;
val* var220 /* : Object */;
val* var221 /* : String */;
short int var222 /* : Bool */;
short int var223 /* : Bool */;
int cltype224;
int idtype225;
short int var_226 /* var : Bool */;
val* var227 /* : nullable TKwredef */;
val* var229 /* : nullable TKwredef */;
val* var230 /* : null */;
short int var231 /* : Bool */;
short int var232 /* : Bool */;
short int var234 /* : Bool */;
short int var236 /* : Bool */;
static val* varonce237;
val* var238 /* : String */;
char* var239 /* : NativeString */;
long var240 /* : Int */;
val* var241 /* : FlatString */;
static val* varonce242;
val* var243 /* : String */;
char* var244 /* : NativeString */;
long var245 /* : Int */;
val* var246 /* : FlatString */;
val* var247 /* : Array[Object] */;
long var248 /* : Int */;
val* var249 /* : NativeArray[Object] */;
val* var250 /* : String */;
short int var251 /* : Bool */;
long var252 /* : Int */;
short int var253 /* : Bool */;
short int var254 /* : Bool */;
short int var256 /* : Bool */;
short int var257 /* : Bool */;
short int var_258 /* var : Bool */;
long var259 /* : Int */;
long var261 /* : Int */;
short int var262 /* : Bool */;
short int var263 /* : Bool */;
short int var265 /* : Bool */;
short int var266 /* : Bool */;
static val* varonce267;
val* var268 /* : String */;
char* var269 /* : NativeString */;
long var270 /* : Int */;
val* var271 /* : FlatString */;
static val* varonce272;
val* var273 /* : String */;
char* var274 /* : NativeString */;
long var275 /* : Int */;
val* var276 /* : FlatString */;
long var277 /* : Int */;
long var279 /* : Int */;
static val* varonce280;
val* var281 /* : String */;
char* var282 /* : NativeString */;
long var283 /* : Int */;
val* var284 /* : FlatString */;
val* var285 /* : Array[Object] */;
long var286 /* : Int */;
val* var287 /* : NativeArray[Object] */;
val* var288 /* : Object */;
val* var289 /* : Object */;
val* var290 /* : String */;
short int var291 /* : Bool */;
short int var292 /* : Bool */;
val* var293 /* : null */;
short int var294 /* : Bool */;
short int var295 /* : Bool */;
short int var297 /* : Bool */;
short int var298 /* : Bool */;
short int var299 /* : Bool */;
short int var_300 /* var : Bool */;
val* var301 /* : MClassKind */;
short int var302 /* : Bool */;
short int var303 /* : Bool */;
short int var305 /* : Bool */;
short int var306 /* : Bool */;
short int var307 /* : Bool */;
short int var_308 /* var : Bool */;
val* var309 /* : MClassKind */;
val* var311 /* : MClassKind */;
short int var312 /* : Bool */;
short int var313 /* : Bool */;
short int var315 /* : Bool */;
short int var316 /* : Bool */;
short int var317 /* : Bool */;
static val* varonce318;
val* var319 /* : String */;
char* var320 /* : NativeString */;
long var321 /* : Int */;
val* var322 /* : FlatString */;
val* var323 /* : MClassKind */;
val* var325 /* : MClassKind */;
static val* varonce326;
val* var327 /* : String */;
char* var328 /* : NativeString */;
long var329 /* : Int */;
val* var330 /* : FlatString */;
val* var331 /* : Array[Object] */;
long var332 /* : Int */;
val* var333 /* : NativeArray[Object] */;
val* var334 /* : String */;
short int var335 /* : Bool */;
short int var336 /* : Bool */;
val* var337 /* : null */;
short int var338 /* : Bool */;
short int var339 /* : Bool */;
short int var341 /* : Bool */;
short int var342 /* : Bool */;
short int var343 /* : Bool */;
short int var_344 /* var : Bool */;
val* var345 /* : MVisibility */;
short int var346 /* : Bool */;
short int var347 /* : Bool */;
short int var349 /* : Bool */;
short int var350 /* : Bool */;
short int var351 /* : Bool */;
short int var_352 /* var : Bool */;
val* var353 /* : MVisibility */;
val* var355 /* : MVisibility */;
short int var356 /* : Bool */;
short int var357 /* : Bool */;
short int var359 /* : Bool */;
short int var360 /* : Bool */;
short int var361 /* : Bool */;
static val* varonce362;
val* var363 /* : String */;
char* var364 /* : NativeString */;
long var365 /* : Int */;
val* var366 /* : FlatString */;
val* var367 /* : MVisibility */;
val* var369 /* : MVisibility */;
static val* varonce370;
val* var371 /* : String */;
char* var372 /* : NativeString */;
long var373 /* : Int */;
val* var374 /* : FlatString */;
val* var375 /* : Array[Object] */;
long var376 /* : Int */;
val* var377 /* : NativeArray[Object] */;
val* var378 /* : String */;
val* var380 /* : Map[MClass, AClassdef] */;
val* var382 /* : Map[MClass, AClassdef] */;
short int var383 /* : Bool */;
short int var384 /* : Bool */;
val* var385 /* : Map[MClass, AClassdef] */;
val* var387 /* : Map[MClass, AClassdef] */;
val* var388 /* : Array[AClassdef] */;
long var389 /* : Int */;
val* var_390 /* var : Array[AClassdef] */;
val* var392 /* : Map[MClass, AClassdef] */;
val* var394 /* : Map[MClass, AClassdef] */;
val* var395 /* : nullable Object */;
val* var396 /* : nullable Array[AClassdef] */;
val* var398 /* : nullable Array[AClassdef] */;
var_nmodule = p0;
var_nclassdef = p1;
{
{ /* Inline modelbuilder#AModule#mmodule (var_nmodule) on <var_nmodule:AModule> */
var2 = var_nmodule->attrs[COLOR_modelbuilder__AModule___mmodule].val; /* _mmodule on <var_nmodule:AModule> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_class.nit", 39);
show_backtrace(1);
}
var_mmodule = var;
var3 = 0;
var_arity = var3;
var4 = NEW_array__Array(&type_array__Arraystring__String);
{
((void (*)(val*))(var4->class->vft[COLOR_kernel__Object__init]))(var4) /* init on <var4:Array[String]>*/;
}
var_names = var4;
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype = type_parser_nodes__AStdClassdef.color;
idtype = type_parser_nodes__AStdClassdef.id;
if(cltype >= var_nclassdef->type->table_size) {
var5 = 0;
} else {
var5 = var_nclassdef->type->type_table[cltype] == idtype;
}
if (var5){
{
{ /* Inline parser_nodes#AStdClassdef#n_id (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var8 = var_nclassdef->attrs[COLOR_parser_nodes__AStdClassdef___n_id].val; /* _n_id on <var_nclassdef:AClassdef(AStdClassdef)> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (var6 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_class.nit", 49);
show_backtrace(1);
} else {
var9 = lexer_work__Token__text(var6);
}
var_name = var9;
{
{ /* Inline parser_nodes#AStdClassdef#n_classkind (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var12 = var_nclassdef->attrs[COLOR_parser_nodes__AStdClassdef___n_classkind].val; /* _n_classkind on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classkind");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 938);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_nkind = var10;
{
var13 = ((val* (*)(val*))(var_nkind->class->vft[COLOR_modelize_class__AClasskind__mkind]))(var_nkind) /* mkind on <var_nkind:nullable AClasskind(AClasskind)>*/;
}
var_mkind = var13;
{
{ /* Inline parser_nodes#AStdClassdef#n_visibility (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var16 = var_nclassdef->attrs[COLOR_parser_nodes__AStdClassdef___n_visibility].val; /* _n_visibility on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_visibility");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 937);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
var_nvisibility = var14;
{
var17 = ((val* (*)(val*))(var_nvisibility->class->vft[COLOR_modelbuilder__AVisibility__mvisibility]))(var_nvisibility) /* mvisibility on <var_nvisibility:nullable AVisibility(AVisibility)>*/;
}
var_mvisibility = var17;
{
{ /* Inline parser_nodes#AStdClassdef#n_formaldefs (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var20 = var_nclassdef->attrs[COLOR_parser_nodes__AStdClassdef___n_formaldefs].val; /* _n_formaldefs on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_formaldefs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 940);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = parser_nodes__ANodes__length(var18);
}
var_arity = var21;
{
var22 = model_base__Object__protected_visibility(self);
}
{
{ /* Inline kernel#Object#== (var_mvisibility,var22) on <var_mvisibility:nullable MVisibility(MVisibility)> */
var_other = var22;
{
{ /* Inline kernel#Object#is_same_instance (var_mvisibility,var_other) on <var_mvisibility:nullable MVisibility(MVisibility)> */
var28 = var_mvisibility == var_other;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
var23 = var24;
}
if (var23){
if (varonce) {
var29 = varonce;
} else {
var30 = "Error: only properties can be protected.";
var31 = 40;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce = var29;
}
{
modelbuilder__ModelBuilder__error(self, var_nvisibility, var29); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
{
var33 = model_base__Object__intrude_visibility(self);
}
{
{ /* Inline kernel#Object#== (var_mvisibility,var33) on <var_mvisibility:nullable MVisibility(MVisibility)> */
var_other = var33;
{
{ /* Inline kernel#Object#is_same_instance (var_mvisibility,var_other) on <var_mvisibility:nullable MVisibility(MVisibility)> */
var39 = var_mvisibility == var_other;
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
if (var34){
if (varonce40) {
var41 = varonce40;
} else {
var42 = "Error: intrude is not a legal visibility for classes.";
var43 = 53;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
{
modelbuilder__ModelBuilder__error(self, var_nvisibility, var41); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
}
var45 = 0;
var_i = var45;
var_ = var_arity;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var48 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var48)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var51 = var_i < var_;
var46 = var51;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
if (var46){
{
{ /* Inline parser_nodes#AStdClassdef#n_formaldefs (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var54 = var_nclassdef->attrs[COLOR_parser_nodes__AStdClassdef___n_formaldefs].val; /* _n_formaldefs on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_formaldefs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 940);
show_backtrace(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
var55 = parser_nodes__ANodes___91d_93d(var52, var_i);
}
var_nfd = var55;
{
{ /* Inline parser_nodes#AFormaldef#n_id (var_nfd) on <var_nfd:AFormaldef> */
var58 = var_nfd->attrs[COLOR_parser_nodes__AFormaldef___n_id].val; /* _n_id on <var_nfd:AFormaldef> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 997);
show_backtrace(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
var59 = lexer_work__Token__text(var56);
}
var_ptname = var59;
{
var60 = array__AbstractArrayRead__has(var_names, var_ptname);
}
if (var60){
if (varonce61) {
var62 = varonce61;
} else {
var63 = "Error: A formal parameter type `";
var64 = 32;
var65 = string__NativeString__to_s_with_length(var63, var64);
var62 = var65;
varonce61 = var62;
}
if (varonce66) {
var67 = varonce66;
} else {
var68 = "\' already exists";
var69 = 16;
var70 = string__NativeString__to_s_with_length(var68, var69);
var67 = var70;
varonce66 = var67;
}
var71 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var71 = array_instance Array[Object] */
var72 = 3;
var73 = NEW_array__NativeArray(var72, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var73)->values[0] = (val*) var62;
((struct instance_array__NativeArray*)var73)->values[1] = (val*) var_ptname;
((struct instance_array__NativeArray*)var73)->values[2] = (val*) var67;
{
((void (*)(val*, val*, long))(var71->class->vft[COLOR_array__Array__with_native]))(var71, var73, var72) /* with_native on <var71:Array[Object]>*/;
}
}
{
var74 = ((val* (*)(val*))(var71->class->vft[COLOR_string__Object__to_s]))(var71) /* to_s on <var71:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_nfd, var74); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline string#FlatString#chars (var_ptname) on <var_ptname:String> */
var77 = var_ptname->attrs[COLOR_string__FlatString___chars].val; /* _chars on <var_ptname:String> */
if (unlikely(var77 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 939);
show_backtrace(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
var_78 = var75;
{
var79 = ((val* (*)(val*))(var_78->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_78) /* iterator on <var_78:SequenceRead[Char]>*/;
}
var_80 = var79;
for(;;) {
{
var81 = ((short int (*)(val*))(var_80->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_80) /* is_ok on <var_80:IndexedIterator[Char]>*/;
}
if (var81){
{
var82 = ((val* (*)(val*))(var_80->class->vft[COLOR_abstract_collection__Iterator__item]))(var_80) /* item on <var_80:IndexedIterator[Char]>*/;
}
var83 = ((struct instance_kernel__Char*)var82)->value; /* autounbox from nullable Object to Char */;
var_c = var83;
var85 = 'a';
{
{ /* Inline kernel#Char#>= (var_c,var85) on <var_c:Char> */
/* Covariant cast for argument 0 (i) <var85:Char> isa OTHER */
/* <var85:Char> isa OTHER */
var88 = 1; /* easy <var85:Char> isa OTHER*/
if (unlikely(!var88)) {
var_class_name91 = type_kernel__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name91);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 547);
show_backtrace(1);
}
var92 = var_c >= var85;
var86 = var92;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
}
var_93 = var86;
if (var86){
var94 = 'z';
{
{ /* Inline kernel#Char#<= (var_c,var94) on <var_c:Char> */
/* Covariant cast for argument 0 (i) <var94:Char> isa OTHER */
/* <var94:Char> isa OTHER */
var97 = 1; /* easy <var94:Char> isa OTHER*/
if (unlikely(!var97)) {
var_class_name100 = type_kernel__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name100);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 545);
show_backtrace(1);
}
var101 = var_c <= var94;
var95 = var101;
goto RET_LABEL96;
RET_LABEL96:(void)0;
}
}
var84 = var95;
} else {
var84 = var_93;
}
if (var84){
if (varonce102) {
var103 = varonce102;
} else {
var104 = "formal-type-name";
var105 = 16;
var106 = string__NativeString__to_s_with_length(var104, var105);
var103 = var106;
varonce102 = var103;
}
if (varonce107) {
var108 = varonce107;
} else {
var109 = "Warning: lowercase in the formal parameter type ";
var110 = 48;
var111 = string__NativeString__to_s_with_length(var109, var110);
var108 = var111;
varonce107 = var108;
}
var112 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var112 = array_instance Array[Object] */
var113 = 2;
var114 = NEW_array__NativeArray(var113, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var114)->values[0] = (val*) var108;
((struct instance_array__NativeArray*)var114)->values[1] = (val*) var_ptname;
{
((void (*)(val*, val*, long))(var112->class->vft[COLOR_array__Array__with_native]))(var112, var114, var113) /* with_native on <var112:Array[Object]>*/;
}
}
{
var115 = ((val* (*)(val*))(var112->class->vft[COLOR_string__Object__to_s]))(var112) /* to_s on <var112:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__warning(self, var_nfd, var103, var115); /* Direct call modelbuilder#ModelBuilder#warning on <self:ModelBuilder>*/
}
goto BREAK_label;
} else {
}
{
((void (*)(val*))(var_80->class->vft[COLOR_abstract_collection__Iterator__next]))(var_80) /* next on <var_80:IndexedIterator[Char]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_80) on <var_80:IndexedIterator[Char]> */
RET_LABEL116:(void)0;
}
}
{
array__Array__add(var_names, var_ptname); /* Direct call array#Array#add on <var_names:Array[String]>*/
}
var117 = 1;
{
var118 = kernel__Int__successor(var_i, var117);
}
var_i = var118;
} else {
goto BREAK_label119;
}
}
BREAK_label119: (void)0;
} else {
/* <var_nclassdef:AClassdef> isa ATopClassdef */
cltype121 = type_parser_nodes__ATopClassdef.color;
idtype122 = type_parser_nodes__ATopClassdef.id;
if(cltype121 >= var_nclassdef->type->table_size) {
var120 = 0;
} else {
var120 = var_nclassdef->type->type_table[cltype121] == idtype122;
}
if (var120){
if (varonce123) {
var124 = varonce123;
} else {
var125 = "Object";
var126 = 6;
var127 = string__NativeString__to_s_with_length(var125, var126);
var124 = var127;
varonce123 = var124;
}
var_name = var124;
var128 = NULL;
var_nkind = var128;
{
var129 = model__Object__interface_kind(self);
}
var_mkind = var129;
var130 = NULL;
var_nvisibility = var130;
{
var131 = model_base__Object__public_visibility(self);
}
var_mvisibility = var131;
} else {
/* <var_nclassdef:AClassdef> isa AMainClassdef */
cltype133 = type_parser_nodes__AMainClassdef.color;
idtype134 = type_parser_nodes__AMainClassdef.id;
if(cltype133 >= var_nclassdef->type->table_size) {
var132 = 0;
} else {
var132 = var_nclassdef->type->type_table[cltype133] == idtype134;
}
if (var132){
if (varonce135) {
var136 = varonce135;
} else {
var137 = "Sys";
var138 = 3;
var139 = string__NativeString__to_s_with_length(var137, var138);
var136 = var139;
varonce135 = var136;
}
var_name = var136;
var140 = NULL;
var_nkind = var140;
{
var141 = model__Object__concrete_kind(self);
}
var_mkind = var141;
var142 = NULL;
var_nvisibility = var142;
{
var143 = model_base__Object__public_visibility(self);
}
var_mvisibility = var143;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_class.nit", 90);
show_backtrace(1);
}
}
}
{
var144 = modelbuilder__ModelBuilder__try_get_mclass_by_name(self, var_nclassdef, var_mmodule, var_name);
}
var_mclass = var144;
var145 = NULL;
if (var_mclass == NULL) {
var146 = 1; /* is null */
} else {
var146 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mclass,var145) on <var_mclass:nullable MClass> */
var_other = var145;
{
{ /* Inline kernel#Object#is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
var151 = var_mclass == var_other;
var149 = var151;
goto RET_LABEL150;
RET_LABEL150:(void)0;
}
}
var147 = var149;
goto RET_LABEL148;
RET_LABEL148:(void)0;
}
var146 = var147;
}
if (var146){
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype154 = type_parser_nodes__AStdClassdef.color;
idtype155 = type_parser_nodes__AStdClassdef.id;
if(cltype154 >= var_nclassdef->type->table_size) {
var153 = 0;
} else {
var153 = var_nclassdef->type->type_table[cltype154] == idtype155;
}
var_156 = var153;
if (var153){
{
{ /* Inline parser_nodes#AStdClassdef#n_kwredef (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var159 = var_nclassdef->attrs[COLOR_parser_nodes__AStdClassdef___n_kwredef].val; /* _n_kwredef on <var_nclassdef:AClassdef(AStdClassdef)> */
var157 = var159;
RET_LABEL158:(void)0;
}
}
var160 = NULL;
if (var157 == NULL) {
var161 = 0; /* is null */
} else {
var161 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var157,var160) on <var157:nullable TKwredef> */
var_other164 = var160;
{
var166 = ((short int (*)(val*, val*))(var157->class->vft[COLOR_kernel__Object___61d_61d]))(var157, var_other164) /* == on <var157:nullable TKwredef(TKwredef)>*/;
var165 = var166;
}
var167 = !var165;
var162 = var167;
goto RET_LABEL163;
RET_LABEL163:(void)0;
}
var161 = var162;
}
var152 = var161;
} else {
var152 = var_156;
}
if (var152){
if (varonce168) {
var169 = varonce168;
} else {
var170 = "Redef error: No imported class ";
var171 = 31;
var172 = string__NativeString__to_s_with_length(var170, var171);
var169 = var172;
varonce168 = var169;
}
if (varonce173) {
var174 = varonce173;
} else {
var175 = " to refine.";
var176 = 11;
var177 = string__NativeString__to_s_with_length(var175, var176);
var174 = var177;
varonce173 = var174;
}
var178 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var178 = array_instance Array[Object] */
var179 = 3;
var180 = NEW_array__NativeArray(var179, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var180)->values[0] = (val*) var169;
((struct instance_array__NativeArray*)var180)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var180)->values[2] = (val*) var174;
{
((void (*)(val*, val*, long))(var178->class->vft[COLOR_array__Array__with_native]))(var178, var180, var179) /* with_native on <var178:Array[Object]>*/;
}
}
{
var181 = ((val* (*)(val*))(var178->class->vft[COLOR_string__Object__to_s]))(var178) /* to_s on <var178:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_nclassdef, var181); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
var182 = NEW_model__MClass(&type_model__MClass);
{
model__MClass__init(var182, var_mmodule, var_name, var_names, var_mkind, var_mvisibility); /* Direct call model#MClass#init on <var182:MClass>*/
}
var_mclass = var182;
} else {
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype185 = type_parser_nodes__AStdClassdef.color;
idtype186 = type_parser_nodes__AStdClassdef.id;
if(cltype185 >= var_nclassdef->type->table_size) {
var184 = 0;
} else {
var184 = var_nclassdef->type->type_table[cltype185] == idtype186;
}
var_187 = var184;
if (var184){
{
{ /* Inline modelize_class#AModule#mclass2nclassdef (var_nmodule) on <var_nmodule:AModule> */
var190 = var_nmodule->attrs[COLOR_modelize_class__AModule___mclass2nclassdef].val; /* _mclass2nclassdef on <var_nmodule:AModule> */
if (unlikely(var190 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass2nclassdef");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_class.nit", 526);
show_backtrace(1);
}
var188 = var190;
RET_LABEL189:(void)0;
}
}
{
var191 = abstract_collection__MapRead__has_key(var188, var_mclass);
}
var183 = var191;
} else {
var183 = var_187;
}
if (var183){
if (varonce192) {
var193 = varonce192;
} else {
var194 = "Error: A class ";
var195 = 15;
var196 = string__NativeString__to_s_with_length(var194, var195);
var193 = var196;
varonce192 = var193;
}
if (varonce197) {
var198 = varonce197;
} else {
var199 = " is already defined at line ";
var200 = 28;
var201 = string__NativeString__to_s_with_length(var199, var200);
var198 = var201;
varonce197 = var198;
}
{
{ /* Inline modelize_class#AModule#mclass2nclassdef (var_nmodule) on <var_nmodule:AModule> */
var204 = var_nmodule->attrs[COLOR_modelize_class__AModule___mclass2nclassdef].val; /* _mclass2nclassdef on <var_nmodule:AModule> */
if (unlikely(var204 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass2nclassdef");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_class.nit", 526);
show_backtrace(1);
}
var202 = var204;
RET_LABEL203:(void)0;
}
}
{
var205 = ((val* (*)(val*, val*))(var202->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var202, var_mclass) /* [] on <var202:Map[MClass, AClassdef]>*/;
}
{
{ /* Inline parser_nodes#ANode#location (var205) on <var205:nullable Object(AClassdef)> */
var208 = var205->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <var205:nullable Object(AClassdef)> */
if (unlikely(var208 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 23);
show_backtrace(1);
}
var206 = var208;
RET_LABEL207:(void)0;
}
}
{
{ /* Inline location#Location#line_start (var206) on <var206:Location> */
var211 = var206->attrs[COLOR_location__Location___line_start].l; /* _line_start on <var206:Location> */
var209 = var211;
RET_LABEL210:(void)0;
}
}
if (varonce212) {
var213 = varonce212;
} else {
var214 = ".";
var215 = 1;
var216 = string__NativeString__to_s_with_length(var214, var215);
var213 = var216;
varonce212 = var213;
}
var217 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var217 = array_instance Array[Object] */
var218 = 5;
var219 = NEW_array__NativeArray(var218, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var219)->values[0] = (val*) var193;
((struct instance_array__NativeArray*)var219)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var219)->values[2] = (val*) var198;
var220 = BOX_kernel__Int(var209); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var219)->values[3] = (val*) var220;
((struct instance_array__NativeArray*)var219)->values[4] = (val*) var213;
{
((void (*)(val*, val*, long))(var217->class->vft[COLOR_array__Array__with_native]))(var217, var219, var218) /* with_native on <var217:Array[Object]>*/;
}
}
{
var221 = ((val* (*)(val*))(var217->class->vft[COLOR_string__Object__to_s]))(var217) /* to_s on <var217:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_nclassdef, var221); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype224 = type_parser_nodes__AStdClassdef.color;
idtype225 = type_parser_nodes__AStdClassdef.id;
if(cltype224 >= var_nclassdef->type->table_size) {
var223 = 0;
} else {
var223 = var_nclassdef->type->type_table[cltype224] == idtype225;
}
var_226 = var223;
if (var223){
{
{ /* Inline parser_nodes#AStdClassdef#n_kwredef (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var229 = var_nclassdef->attrs[COLOR_parser_nodes__AStdClassdef___n_kwredef].val; /* _n_kwredef on <var_nclassdef:AClassdef(AStdClassdef)> */
var227 = var229;
RET_LABEL228:(void)0;
}
}
var230 = NULL;
if (var227 == NULL) {
var231 = 1; /* is null */
} else {
var231 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var227,var230) on <var227:nullable TKwredef> */
var_other = var230;
{
{ /* Inline kernel#Object#is_same_instance (var227,var_other) on <var227:nullable TKwredef(TKwredef)> */
var236 = var227 == var_other;
var234 = var236;
goto RET_LABEL235;
RET_LABEL235:(void)0;
}
}
var232 = var234;
goto RET_LABEL233;
RET_LABEL233:(void)0;
}
var231 = var232;
}
var222 = var231;
} else {
var222 = var_226;
}
if (var222){
if (varonce237) {
var238 = varonce237;
} else {
var239 = "Redef error: ";
var240 = 13;
var241 = string__NativeString__to_s_with_length(var239, var240);
var238 = var241;
varonce237 = var238;
}
if (varonce242) {
var243 = varonce242;
} else {
var244 = " is an imported class. Add the redef keyword to refine it.";
var245 = 58;
var246 = string__NativeString__to_s_with_length(var244, var245);
var243 = var246;
varonce242 = var243;
}
var247 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var247 = array_instance Array[Object] */
var248 = 3;
var249 = NEW_array__NativeArray(var248, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var249)->values[0] = (val*) var238;
((struct instance_array__NativeArray*)var249)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var249)->values[2] = (val*) var243;
{
((void (*)(val*, val*, long))(var247->class->vft[COLOR_array__Array__with_native]))(var247, var249, var248) /* with_native on <var247:Array[Object]>*/;
}
}
{
var250 = ((val* (*)(val*))(var247->class->vft[COLOR_string__Object__to_s]))(var247) /* to_s on <var247:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_nclassdef, var250); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
var252 = 0;
{
{ /* Inline kernel#Int#!= (var_arity,var252) on <var_arity:Int> */
var256 = var_arity == var252;
var257 = !var256;
var254 = var257;
goto RET_LABEL255;
RET_LABEL255:(void)0;
}
var253 = var254;
}
var_258 = var253;
if (var253){
{
{ /* Inline model#MClass#arity (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var261 = var_mclass->attrs[COLOR_model__MClass___arity].l; /* _arity on <var_mclass:nullable MClass(MClass)> */
var259 = var261;
RET_LABEL260:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var259,var_arity) on <var259:Int> */
var265 = var259 == var_arity;
var266 = !var265;
var263 = var266;
goto RET_LABEL264;
RET_LABEL264:(void)0;
}
var262 = var263;
}
var251 = var262;
} else {
var251 = var_258;
}
if (var251){
if (varonce267) {
var268 = varonce267;
} else {
var269 = "Redef error: Formal parameter arity missmatch; got ";
var270 = 51;
var271 = string__NativeString__to_s_with_length(var269, var270);
var268 = var271;
varonce267 = var268;
}
if (varonce272) {
var273 = varonce272;
} else {
var274 = ", expected ";
var275 = 11;
var276 = string__NativeString__to_s_with_length(var274, var275);
var273 = var276;
varonce272 = var273;
}
{
{ /* Inline model#MClass#arity (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var279 = var_mclass->attrs[COLOR_model__MClass___arity].l; /* _arity on <var_mclass:nullable MClass(MClass)> */
var277 = var279;
RET_LABEL278:(void)0;
}
}
if (varonce280) {
var281 = varonce280;
} else {
var282 = ".";
var283 = 1;
var284 = string__NativeString__to_s_with_length(var282, var283);
var281 = var284;
varonce280 = var281;
}
var285 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var285 = array_instance Array[Object] */
var286 = 5;
var287 = NEW_array__NativeArray(var286, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var287)->values[0] = (val*) var268;
var288 = BOX_kernel__Int(var_arity); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var287)->values[1] = (val*) var288;
((struct instance_array__NativeArray*)var287)->values[2] = (val*) var273;
var289 = BOX_kernel__Int(var277); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var287)->values[3] = (val*) var289;
((struct instance_array__NativeArray*)var287)->values[4] = (val*) var281;
{
((void (*)(val*, val*, long))(var285->class->vft[COLOR_array__Array__with_native]))(var285, var287, var286) /* with_native on <var285:Array[Object]>*/;
}
}
{
var290 = ((val* (*)(val*))(var285->class->vft[COLOR_string__Object__to_s]))(var285) /* to_s on <var285:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_nclassdef, var290); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
var293 = NULL;
if (var_nkind == NULL) {
var294 = 0; /* is null */
} else {
var294 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nkind,var293) on <var_nkind:nullable AClasskind> */
var_other164 = var293;
{
var298 = ((short int (*)(val*, val*))(var_nkind->class->vft[COLOR_kernel__Object___61d_61d]))(var_nkind, var_other164) /* == on <var_nkind:nullable AClasskind(AClasskind)>*/;
var297 = var298;
}
var299 = !var297;
var295 = var299;
goto RET_LABEL296;
RET_LABEL296:(void)0;
}
var294 = var295;
}
var_300 = var294;
if (var294){
{
var301 = model__Object__concrete_kind(self);
}
{
{ /* Inline kernel#Object#!= (var_mkind,var301) on <var_mkind:MClassKind> */
var_other164 = var301;
{
var306 = ((short int (*)(val*, val*))(var_mkind->class->vft[COLOR_kernel__Object___61d_61d]))(var_mkind, var_other164) /* == on <var_mkind:MClassKind>*/;
var305 = var306;
}
var307 = !var305;
var303 = var307;
goto RET_LABEL304;
RET_LABEL304:(void)0;
}
var302 = var303;
}
var292 = var302;
} else {
var292 = var_300;
}
var_308 = var292;
if (var292){
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var311 = var_mclass->attrs[COLOR_model__MClass___kind].val; /* _kind on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var311 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 371);
show_backtrace(1);
}
var309 = var311;
RET_LABEL310:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var309,var_mkind) on <var309:MClassKind> */
var_other164 = var_mkind;
{
var316 = ((short int (*)(val*, val*))(var309->class->vft[COLOR_kernel__Object___61d_61d]))(var309, var_other164) /* == on <var309:MClassKind>*/;
var315 = var316;
}
var317 = !var315;
var313 = var317;
goto RET_LABEL314;
RET_LABEL314:(void)0;
}
var312 = var313;
}
var291 = var312;
} else {
var291 = var_308;
}
if (var291){
if (varonce318) {
var319 = varonce318;
} else {
var320 = "Error: refinement changed the kind from a ";
var321 = 42;
var322 = string__NativeString__to_s_with_length(var320, var321);
var319 = var322;
varonce318 = var319;
}
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var325 = var_mclass->attrs[COLOR_model__MClass___kind].val; /* _kind on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var325 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 371);
show_backtrace(1);
}
var323 = var325;
RET_LABEL324:(void)0;
}
}
if (varonce326) {
var327 = varonce326;
} else {
var328 = " to a ";
var329 = 6;
var330 = string__NativeString__to_s_with_length(var328, var329);
var327 = var330;
varonce326 = var327;
}
var331 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var331 = array_instance Array[Object] */
var332 = 4;
var333 = NEW_array__NativeArray(var332, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var333)->values[0] = (val*) var319;
((struct instance_array__NativeArray*)var333)->values[1] = (val*) var323;
((struct instance_array__NativeArray*)var333)->values[2] = (val*) var327;
((struct instance_array__NativeArray*)var333)->values[3] = (val*) var_mkind;
{
((void (*)(val*, val*, long))(var331->class->vft[COLOR_array__Array__with_native]))(var331, var333, var332) /* with_native on <var331:Array[Object]>*/;
}
}
{
var334 = ((val* (*)(val*))(var331->class->vft[COLOR_string__Object__to_s]))(var331) /* to_s on <var331:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_nkind, var334); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
var337 = NULL;
if (var_nvisibility == NULL) {
var338 = 0; /* is null */
} else {
var338 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nvisibility,var337) on <var_nvisibility:nullable AVisibility> */
var_other164 = var337;
{
var342 = ((short int (*)(val*, val*))(var_nvisibility->class->vft[COLOR_kernel__Object___61d_61d]))(var_nvisibility, var_other164) /* == on <var_nvisibility:nullable AVisibility(AVisibility)>*/;
var341 = var342;
}
var343 = !var341;
var339 = var343;
goto RET_LABEL340;
RET_LABEL340:(void)0;
}
var338 = var339;
}
var_344 = var338;
if (var338){
{
var345 = model_base__Object__public_visibility(self);
}
{
{ /* Inline kernel#Object#!= (var_mvisibility,var345) on <var_mvisibility:nullable MVisibility(MVisibility)> */
var_other164 = var345;
{
var350 = ((short int (*)(val*, val*))(var_mvisibility->class->vft[COLOR_kernel__Object___61d_61d]))(var_mvisibility, var_other164) /* == on <var_mvisibility:nullable MVisibility(MVisibility)>*/;
var349 = var350;
}
var351 = !var349;
var347 = var351;
goto RET_LABEL348;
RET_LABEL348:(void)0;
}
var346 = var347;
}
var336 = var346;
} else {
var336 = var_344;
}
var_352 = var336;
if (var336){
{
{ /* Inline model#MClass#visibility (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var355 = var_mclass->attrs[COLOR_model__MClass___visibility].val; /* _visibility on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var355 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 375);
show_backtrace(1);
}
var353 = var355;
RET_LABEL354:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var353,var_mvisibility) on <var353:MVisibility> */
var_other164 = var_mvisibility;
{
var360 = ((short int (*)(val*, val*))(var353->class->vft[COLOR_kernel__Object___61d_61d]))(var353, var_other164) /* == on <var353:MVisibility>*/;
var359 = var360;
}
var361 = !var359;
var357 = var361;
goto RET_LABEL358;
RET_LABEL358:(void)0;
}
var356 = var357;
}
var335 = var356;
} else {
var335 = var_352;
}
if (var335){
if (varonce362) {
var363 = varonce362;
} else {
var364 = "Error: refinement changed the visibility from a ";
var365 = 48;
var366 = string__NativeString__to_s_with_length(var364, var365);
var363 = var366;
varonce362 = var363;
}
{
{ /* Inline model#MClass#visibility (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var369 = var_mclass->attrs[COLOR_model__MClass___visibility].val; /* _visibility on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var369 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 375);
show_backtrace(1);
}
var367 = var369;
RET_LABEL368:(void)0;
}
}
if (varonce370) {
var371 = varonce370;
} else {
var372 = " to a ";
var373 = 6;
var374 = string__NativeString__to_s_with_length(var372, var373);
var371 = var374;
varonce370 = var371;
}
var375 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var375 = array_instance Array[Object] */
var376 = 4;
var377 = NEW_array__NativeArray(var376, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var377)->values[0] = (val*) var363;
((struct instance_array__NativeArray*)var377)->values[1] = (val*) var367;
((struct instance_array__NativeArray*)var377)->values[2] = (val*) var371;
((struct instance_array__NativeArray*)var377)->values[3] = (val*) var_mvisibility;
{
((void (*)(val*, val*, long))(var375->class->vft[COLOR_array__Array__with_native]))(var375, var377, var376) /* with_native on <var375:Array[Object]>*/;
}
}
{
var378 = ((val* (*)(val*))(var375->class->vft[COLOR_string__Object__to_s]))(var375) /* to_s on <var375:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_nvisibility, var378); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
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
var_nclassdef->attrs[COLOR_modelize_class__AClassdef___mclass].val = var_mclass; /* _mclass on <var_nclassdef:AClassdef> */
RET_LABEL379:(void)0;
}
}
{
{ /* Inline modelize_class#AModule#mclass2nclassdef (var_nmodule) on <var_nmodule:AModule> */
var382 = var_nmodule->attrs[COLOR_modelize_class__AModule___mclass2nclassdef].val; /* _mclass2nclassdef on <var_nmodule:AModule> */
if (unlikely(var382 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass2nclassdef");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_class.nit", 526);
show_backtrace(1);
}
var380 = var382;
RET_LABEL381:(void)0;
}
}
{
var383 = abstract_collection__MapRead__has_key(var380, var_mclass);
}
var384 = !var383;
if (var384){
{
{ /* Inline modelize_class#AModule#mclass2nclassdef (var_nmodule) on <var_nmodule:AModule> */
var387 = var_nmodule->attrs[COLOR_modelize_class__AModule___mclass2nclassdef].val; /* _mclass2nclassdef on <var_nmodule:AModule> */
if (unlikely(var387 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass2nclassdef");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_class.nit", 526);
show_backtrace(1);
}
var385 = var387;
RET_LABEL386:(void)0;
}
}
{
((void (*)(val*, val*, val*))(var385->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var385, var_mclass, var_nclassdef) /* []= on <var385:Map[MClass, AClassdef]>*/;
}
var388 = NEW_array__Array(&type_array__Arrayparser_nodes__AClassdef);
var389 = 1;
{
array__Array__with_capacity(var388, var389); /* Direct call array#Array#with_capacity on <var388:Array[AClassdef]>*/
}
var_390 = var388;
{
array__AbstractArray__push(var_390, var_nclassdef); /* Direct call array#AbstractArray#push on <var_390:Array[AClassdef]>*/
}
{
{ /* Inline modelize_class#AClassdef#all_defs= (var_nclassdef,var_390) on <var_nclassdef:AClassdef> */
var_nclassdef->attrs[COLOR_modelize_class__AClassdef___all_defs].val = var_390; /* _all_defs on <var_nclassdef:AClassdef> */
RET_LABEL391:(void)0;
}
}
} else {
{
{ /* Inline modelize_class#AModule#mclass2nclassdef (var_nmodule) on <var_nmodule:AModule> */
var394 = var_nmodule->attrs[COLOR_modelize_class__AModule___mclass2nclassdef].val; /* _mclass2nclassdef on <var_nmodule:AModule> */
if (unlikely(var394 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass2nclassdef");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_class.nit", 526);
show_backtrace(1);
}
var392 = var394;
RET_LABEL393:(void)0;
}
}
{
var395 = ((val* (*)(val*, val*))(var392->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var392, var_mclass) /* [] on <var392:Map[MClass, AClassdef]>*/;
}
{
{ /* Inline modelize_class#AClassdef#all_defs (var395) on <var395:nullable Object(AClassdef)> */
var398 = var395->attrs[COLOR_modelize_class__AClassdef___all_defs].val; /* _all_defs on <var395:nullable Object(AClassdef)> */
var396 = var398;
RET_LABEL397:(void)0;
}
}
if (var396 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_class.nit", 120);
show_backtrace(1);
} else {
array__Array__add(var396, var_nclassdef); /* Direct call array#Array#add on <var396:nullable Array[AClassdef]>*/
}
}
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#build_a_mclass for (self: Object, AModule, AClassdef) */
void VIRTUAL_modelize_class__ModelBuilder__build_a_mclass(val* self, val* p0, val* p1) {
modelize_class__ModelBuilder__build_a_mclass(self, p0, p1); /* Direct call modelize_class#ModelBuilder#build_a_mclass on <self:Object(ModelBuilder)>*/
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#build_a_mclassdef for (self: ModelBuilder, AModule, AClassdef) */
void modelize_class__ModelBuilder__build_a_mclassdef(val* self, val* p0, val* p1) {
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
short int var23 /* : Bool */;
val* var_other25 /* var other: nullable Object */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
int cltype;
int idtype;
short int var30 /* : Bool */;
val* var31 /* : nullable MClassDef */;
val* var33 /* : nullable MClassDef */;
val* var35 /* : Array[MType] */;
val* var_bounds /* var bounds: Array[MType] */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
short int var_ /* var : Bool */;
long var40 /* : Int */;
long var42 /* : Int */;
long var43 /* : Int */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name;
short int var49 /* : Bool */;
long var50 /* : Int */;
long var_i /* var i: Int */;
long var51 /* : Int */;
long var53 /* : Int */;
long var_54 /* var : Int */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
const char* var_class_name60;
short int var61 /* : Bool */;
val* var62 /* : ANodes[AFormaldef] */;
val* var64 /* : ANodes[AFormaldef] */;
short int var65 /* : Bool */;
val* var66 /* : MClassDef */;
val* var68 /* : MClassDef */;
val* var69 /* : MClassType */;
val* var71 /* : MClassType */;
val* var72 /* : Array[MType] */;
val* var74 /* : Array[MType] */;
val* var75 /* : nullable Object */;
val* var_bound /* var bound: MType */;
val* var76 /* : ANodes[AFormaldef] */;
val* var78 /* : ANodes[AFormaldef] */;
val* var79 /* : ANode */;
val* var_nfd /* var nfd: AFormaldef */;
val* var80 /* : Array[MParameterType] */;
val* var82 /* : Array[MParameterType] */;
val* var83 /* : nullable Object */;
val* var84 /* : String */;
val* var86 /* : String */;
val* var_pname /* var pname: String */;
val* var87 /* : TClassid */;
val* var89 /* : TClassid */;
val* var90 /* : String */;
short int var91 /* : Bool */;
short int var92 /* : Bool */;
short int var94 /* : Bool */;
short int var95 /* : Bool */;
short int var96 /* : Bool */;
val* var97 /* : TClassid */;
val* var99 /* : TClassid */;
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
val* var110 /* : TClassid */;
val* var112 /* : TClassid */;
val* var113 /* : String */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : NativeString */;
long var117 /* : Int */;
val* var118 /* : FlatString */;
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : NativeString */;
long var122 /* : Int */;
val* var123 /* : FlatString */;
val* var124 /* : MClassDef */;
val* var126 /* : MClassDef */;
val* var127 /* : MModule */;
val* var129 /* : MModule */;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : NativeString */;
long var133 /* : Int */;
val* var134 /* : FlatString */;
val* var135 /* : Array[Object] */;
long var136 /* : Int */;
val* var137 /* : NativeArray[Object] */;
val* var138 /* : Object */;
val* var139 /* : String */;
val* var140 /* : nullable AType */;
val* var142 /* : nullable AType */;
val* var_nfdt /* var nfdt: nullable AType */;
val* var143 /* : null */;
short int var144 /* : Bool */;
short int var145 /* : Bool */;
short int var147 /* : Bool */;
short int var148 /* : Bool */;
short int var149 /* : Bool */;
val* var150 /* : null */;
short int var151 /* : Bool */;
val* var152 /* : nullable MType */;
val* var_bound153 /* var bound: nullable MType */;
val* var154 /* : null */;
short int var155 /* : Bool */;
short int var156 /* : Bool */;
short int var158 /* : Bool */;
short int var160 /* : Bool */;
short int var161 /* : Bool */;
static val* varonce162;
val* var163 /* : String */;
char* var164 /* : NativeString */;
long var165 /* : Int */;
val* var166 /* : FlatString */;
static val* varonce167;
val* var168 /* : String */;
char* var169 /* : NativeString */;
long var170 /* : Int */;
val* var171 /* : FlatString */;
val* var172 /* : Array[Object] */;
long var173 /* : Int */;
val* var174 /* : NativeArray[Object] */;
val* var175 /* : String */;
short int var177 /* : Bool */;
short int var178 /* : Bool */;
int cltype179;
int idtype180;
short int var_181 /* var : Bool */;
val* var182 /* : MClass */;
val* var184 /* : MClass */;
val* var185 /* : MClassKind */;
val* var187 /* : MClassKind */;
val* var188 /* : MClassKind */;
short int var189 /* : Bool */;
short int var190 /* : Bool */;
short int var192 /* : Bool */;
short int var194 /* : Bool */;
static val* varonce195;
val* var196 /* : String */;
char* var197 /* : NativeString */;
long var198 /* : Int */;
val* var199 /* : FlatString */;
static val* varonce200;
val* var201 /* : String */;
char* var202 /* : NativeString */;
long var203 /* : Int */;
val* var204 /* : FlatString */;
static val* varonce205;
val* var206 /* : String */;
char* var207 /* : NativeString */;
long var208 /* : Int */;
val* var209 /* : FlatString */;
val* var210 /* : Array[Object] */;
long var211 /* : Int */;
val* var212 /* : NativeArray[Object] */;
val* var213 /* : String */;
val* var214 /* : Array[MClassDef] */;
val* var216 /* : Array[MClassDef] */;
short int var217 /* : Bool */;
val* var218 /* : MClassType */;
val* var220 /* : MClassType */;
val* var221 /* : MType */;
val* var_bound222 /* var bound: MType */;
val* var224 /* : MClassDef */;
val* var226 /* : MClassDef */;
val* var227 /* : MClassType */;
val* var229 /* : MClassType */;
val* var230 /* : Array[MType] */;
val* var232 /* : Array[MType] */;
val* var233 /* : nullable Object */;
val* var_bound234 /* var bound: MType */;
long var236 /* : Int */;
long var237 /* : Int */;
val* var239 /* : MClassType */;
val* var_bound_mtype /* var bound_mtype: MClassType */;
val* var240 /* : MClassDef */;
val* var241 /* : Location */;
val* var243 /* : Location */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var245 /* : HashMap[MClassDef, AClassdef] */;
val* var247 /* : HashMap[MClassDef, AClassdef] */;
short int var248 /* : Bool */;
int cltype249;
int idtype250;
val* var251 /* : nullable ADoc */;
val* var253 /* : nullable ADoc */;
val* var_ndoc /* var ndoc: nullable ADoc */;
val* var254 /* : null */;
short int var255 /* : Bool */;
short int var256 /* : Bool */;
short int var258 /* : Bool */;
short int var259 /* : Bool */;
short int var260 /* : Bool */;
val* var261 /* : MDoc */;
val* var_mdoc /* var mdoc: MDoc */;
short int var264 /* : Bool */;
short int var265 /* : Bool */;
short int var_266 /* var : Bool */;
val* var267 /* : MVisibility */;
val* var269 /* : MVisibility */;
val* var270 /* : MVisibility */;
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
static val* varonce282;
val* var283 /* : String */;
char* var284 /* : NativeString */;
long var285 /* : Int */;
val* var286 /* : FlatString */;
val* var287 /* : Array[Object] */;
long var288 /* : Int */;
val* var289 /* : NativeArray[Object] */;
val* var290 /* : String */;
short int var291 /* : Bool */;
val* var292 /* : ToolContext */;
val* var294 /* : ToolContext */;
static val* varonce295;
val* var296 /* : String */;
char* var297 /* : NativeString */;
long var298 /* : Int */;
val* var299 /* : FlatString */;
val* var300 /* : MClassKind */;
val* var302 /* : MClassKind */;
static val* varonce303;
val* var304 /* : String */;
char* var305 /* : NativeString */;
long var306 /* : Int */;
val* var307 /* : FlatString */;
val* var308 /* : String */;
val* var309 /* : Array[Object] */;
long var310 /* : Int */;
val* var311 /* : NativeArray[Object] */;
val* var312 /* : String */;
long var313 /* : Int */;
val* var314 /* : ToolContext */;
val* var316 /* : ToolContext */;
static val* varonce317;
val* var318 /* : String */;
char* var319 /* : NativeString */;
long var320 /* : Int */;
val* var321 /* : FlatString */;
val* var322 /* : MClassKind */;
val* var324 /* : MClassKind */;
static val* varonce325;
val* var326 /* : String */;
char* var327 /* : NativeString */;
long var328 /* : Int */;
val* var329 /* : FlatString */;
val* var330 /* : String */;
val* var331 /* : Array[Object] */;
long var332 /* : Int */;
val* var333 /* : NativeArray[Object] */;
val* var334 /* : String */;
long var335 /* : Int */;
var_nmodule = p0;
var_nclassdef = p1;
{
{ /* Inline modelbuilder#AModule#mmodule (var_nmodule) on <var_nmodule:AModule> */
var2 = var_nmodule->attrs[COLOR_modelbuilder__AModule___mmodule].val; /* _mmodule on <var_nmodule:AModule> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_class.nit", 127);
show_backtrace(1);
}
var_mmodule = var;
if (varonce) {
var3 = varonce;
} else {
var4 = "Object";
var5 = 6;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
{
var7 = modelbuilder__ModelBuilder__try_get_mclass_by_name(self, var_nmodule, var_mmodule, var3);
}
var_objectclass = var7;
{
{ /* Inline modelize_class#AClassdef#mclass (var_nclassdef) on <var_nclassdef:AClassdef> */
var10 = var_nclassdef->attrs[COLOR_modelize_class__AClassdef___mclass].val; /* _mclass on <var_nclassdef:AClassdef> */
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
var20 = var_nmodule->attrs[COLOR_modelize_class__AModule___mclass2nclassdef].val; /* _mclass2nclassdef on <var_nmodule:AModule> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass2nclassdef");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_class.nit", 526);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = ((val* (*)(val*, val*))(var18->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var18, var_mclass) /* [] on <var18:Map[MClass, AClassdef]>*/;
}
var_other_nclassdef = var21;
{
{ /* Inline kernel#Object#!= (var_other_nclassdef,var_nclassdef) on <var_other_nclassdef:AClassdef> */
var_other25 = var_nclassdef;
{
var27 = ((short int (*)(val*, val*))(var_other_nclassdef->class->vft[COLOR_kernel__Object___61d_61d]))(var_other_nclassdef, var_other25) /* == on <var_other_nclassdef:AClassdef>*/;
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
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype = type_parser_nodes__AStdClassdef.color;
idtype = type_parser_nodes__AStdClassdef.id;
if(cltype >= var_nclassdef->type->table_size) {
var29 = 0;
} else {
var29 = var_nclassdef->type->type_table[cltype] == idtype;
}
var30 = !var29;
if (unlikely(!var30)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_class.nit", 135);
show_backtrace(1);
}
{
{ /* Inline modelize_class#AClassdef#mclassdef (var_other_nclassdef) on <var_other_nclassdef:AClassdef> */
var33 = var_other_nclassdef->attrs[COLOR_modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_other_nclassdef:AClassdef> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline modelize_class#AClassdef#mclassdef= (var_nclassdef,var31) on <var_nclassdef:AClassdef> */
var_nclassdef->attrs[COLOR_modelize_class__AClassdef___mclassdef].val = var31; /* _mclassdef on <var_nclassdef:AClassdef> */
RET_LABEL34:(void)0;
}
}
goto RET_LABEL;
} else {
}
var35 = NEW_array__Array(&type_array__Arraymodel__MType);
{
((void (*)(val*))(var35->class->vft[COLOR_kernel__Object__init]))(var35) /* init on <var35:Array[MType]>*/;
}
var_bounds = var35;
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype38 = type_parser_nodes__AStdClassdef.color;
idtype39 = type_parser_nodes__AStdClassdef.id;
if(cltype38 >= var_nclassdef->type->table_size) {
var37 = 0;
} else {
var37 = var_nclassdef->type->type_table[cltype38] == idtype39;
}
var_ = var37;
if (var37){
{
{ /* Inline model#MClass#arity (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var42 = var_mclass->attrs[COLOR_model__MClass___arity].l; /* _arity on <var_mclass:nullable MClass(MClass)> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
var43 = 0;
{
{ /* Inline kernel#Int#> (var40,var43) on <var40:Int> */
/* Covariant cast for argument 0 (i) <var43:Int> isa OTHER */
/* <var43:Int> isa OTHER */
var46 = 1; /* easy <var43:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var49 = var40 > var43;
var44 = var49;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
var36 = var44;
} else {
var36 = var_;
}
if (var36){
var50 = 0;
var_i = var50;
{
{ /* Inline model#MClass#arity (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var53 = var_mclass->attrs[COLOR_model__MClass___arity].l; /* _arity on <var_mclass:nullable MClass(MClass)> */
var51 = var53;
RET_LABEL52:(void)0;
}
}
var_54 = var51;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_54) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_54:Int> isa OTHER */
/* <var_54:Int> isa OTHER */
var57 = 1; /* easy <var_54:Int> isa OTHER*/
if (unlikely(!var57)) {
var_class_name60 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name60);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var61 = var_i < var_54;
var55 = var61;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
if (var55){
{
{ /* Inline parser_nodes#AStdClassdef#n_formaldefs (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var64 = var_nclassdef->attrs[COLOR_parser_nodes__AStdClassdef___n_formaldefs].val; /* _n_formaldefs on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_formaldefs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 940);
show_backtrace(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
var65 = parser_nodes__ANodes__is_empty(var62);
}
if (var65){
{
{ /* Inline model#MClass#intro (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var68 = var_mclass->attrs[COLOR_model__MClass___intro].val; /* _intro on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 420);
show_backtrace(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var66) on <var66:MClassDef> */
var71 = var66->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var66:MClassDef> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
{
{ /* Inline model#MClassType#arguments (var69) on <var69:MClassType> */
var74 = var69->attrs[COLOR_model__MClassType___arguments].val; /* _arguments on <var69:MClassType> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 996);
show_backtrace(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
{
var75 = array__Array___91d_93d(var72, var_i);
}
var_bound = var75;
{
array__Array__add(var_bounds, var_bound); /* Direct call array#Array#add on <var_bounds:Array[MType]>*/
}
goto BREAK_label;
} else {
}
{
{ /* Inline parser_nodes#AStdClassdef#n_formaldefs (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var78 = var_nclassdef->attrs[COLOR_parser_nodes__AStdClassdef___n_formaldefs].val; /* _n_formaldefs on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_formaldefs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 940);
show_backtrace(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
{
var79 = parser_nodes__ANodes___91d_93d(var76, var_i);
}
var_nfd = var79;
{
{ /* Inline model#MClass#mparameters (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var82 = var_mclass->attrs[COLOR_model__MClass___mparameters].val; /* _mparameters on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var82 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 367);
show_backtrace(1);
}
var80 = var82;
RET_LABEL81:(void)0;
}
}
{
var83 = array__Array___91d_93d(var80, var_i);
}
{
{ /* Inline model#MParameterType#name (var83) on <var83:nullable Object(MParameterType)> */
var86 = var83->attrs[COLOR_model__MParameterType___name].val; /* _name on <var83:nullable Object(MParameterType)> */
if (unlikely(var86 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1289);
show_backtrace(1);
}
var84 = var86;
RET_LABEL85:(void)0;
}
}
var_pname = var84;
{
{ /* Inline parser_nodes#AFormaldef#n_id (var_nfd) on <var_nfd:AFormaldef> */
var89 = var_nfd->attrs[COLOR_parser_nodes__AFormaldef___n_id].val; /* _n_id on <var_nfd:AFormaldef> */
if (unlikely(var89 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 997);
show_backtrace(1);
}
var87 = var89;
RET_LABEL88:(void)0;
}
}
{
var90 = lexer_work__Token__text(var87);
}
{
{ /* Inline kernel#Object#!= (var90,var_pname) on <var90:String> */
var_other25 = var_pname;
{
var95 = ((short int (*)(val*, val*))(var90->class->vft[COLOR_kernel__Object___61d_61d]))(var90, var_other25) /* == on <var90:String>*/;
var94 = var95;
}
var96 = !var94;
var92 = var96;
goto RET_LABEL93;
RET_LABEL93:(void)0;
}
var91 = var92;
}
if (var91){
{
{ /* Inline parser_nodes#AFormaldef#n_id (var_nfd) on <var_nfd:AFormaldef> */
var99 = var_nfd->attrs[COLOR_parser_nodes__AFormaldef___n_id].val; /* _n_id on <var_nfd:AFormaldef> */
if (unlikely(var99 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 997);
show_backtrace(1);
}
var97 = var99;
RET_LABEL98:(void)0;
}
}
if (varonce100) {
var101 = varonce100;
} else {
var102 = "Error: Formal parameter type #";
var103 = 30;
var104 = string__NativeString__to_s_with_length(var102, var103);
var101 = var104;
varonce100 = var101;
}
if (varonce105) {
var106 = varonce105;
} else {
var107 = " `";
var108 = 2;
var109 = string__NativeString__to_s_with_length(var107, var108);
var106 = var109;
varonce105 = var106;
}
{
{ /* Inline parser_nodes#AFormaldef#n_id (var_nfd) on <var_nfd:AFormaldef> */
var112 = var_nfd->attrs[COLOR_parser_nodes__AFormaldef___n_id].val; /* _n_id on <var_nfd:AFormaldef> */
if (unlikely(var112 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 997);
show_backtrace(1);
}
var110 = var112;
RET_LABEL111:(void)0;
}
}
{
var113 = lexer_work__Token__text(var110);
}
if (varonce114) {
var115 = varonce114;
} else {
var116 = "` must be named `";
var117 = 17;
var118 = string__NativeString__to_s_with_length(var116, var117);
var115 = var118;
varonce114 = var115;
}
if (varonce119) {
var120 = varonce119;
} else {
var121 = "\' as in the original definition in module `";
var122 = 43;
var123 = string__NativeString__to_s_with_length(var121, var122);
var120 = var123;
varonce119 = var120;
}
{
{ /* Inline model#MClass#intro (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var126 = var_mclass->attrs[COLOR_model__MClass___intro].val; /* _intro on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var126 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 420);
show_backtrace(1);
}
var124 = var126;
RET_LABEL125:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var124) on <var124:MClassDef> */
var129 = var124->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var124:MClassDef> */
if (unlikely(var129 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
show_backtrace(1);
}
var127 = var129;
RET_LABEL128:(void)0;
}
}
if (varonce130) {
var131 = varonce130;
} else {
var132 = "`.";
var133 = 2;
var134 = string__NativeString__to_s_with_length(var132, var133);
var131 = var134;
varonce130 = var131;
}
var135 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var135 = array_instance Array[Object] */
var136 = 9;
var137 = NEW_array__NativeArray(var136, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var137)->values[0] = (val*) var101;
var138 = BOX_kernel__Int(var_i); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var137)->values[1] = (val*) var138;
((struct instance_array__NativeArray*)var137)->values[2] = (val*) var106;
((struct instance_array__NativeArray*)var137)->values[3] = (val*) var113;
((struct instance_array__NativeArray*)var137)->values[4] = (val*) var115;
((struct instance_array__NativeArray*)var137)->values[5] = (val*) var_pname;
((struct instance_array__NativeArray*)var137)->values[6] = (val*) var120;
((struct instance_array__NativeArray*)var137)->values[7] = (val*) var127;
((struct instance_array__NativeArray*)var137)->values[8] = (val*) var131;
{
((void (*)(val*, val*, long))(var135->class->vft[COLOR_array__Array__with_native]))(var135, var137, var136) /* with_native on <var135:Array[Object]>*/;
}
}
{
var139 = ((val* (*)(val*))(var135->class->vft[COLOR_string__Object__to_s]))(var135) /* to_s on <var135:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var97, var139); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
{
{ /* Inline parser_nodes#AFormaldef#n_type (var_nfd) on <var_nfd:AFormaldef> */
var142 = var_nfd->attrs[COLOR_parser_nodes__AFormaldef___n_type].val; /* _n_type on <var_nfd:AFormaldef> */
var140 = var142;
RET_LABEL141:(void)0;
}
}
var_nfdt = var140;
var143 = NULL;
if (var_nfdt == NULL) {
var144 = 0; /* is null */
} else {
var144 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nfdt,var143) on <var_nfdt:nullable AType> */
var_other25 = var143;
{
var148 = ((short int (*)(val*, val*))(var_nfdt->class->vft[COLOR_kernel__Object___61d_61d]))(var_nfdt, var_other25) /* == on <var_nfdt:nullable AType(AType)>*/;
var147 = var148;
}
var149 = !var147;
var145 = var149;
goto RET_LABEL146;
RET_LABEL146:(void)0;
}
var144 = var145;
}
if (var144){
var150 = NULL;
var151 = 0;
{
var152 = modelize_class__ModelBuilder__resolve_mtype_unchecked(self, var_mmodule, var150, var_nfdt, var151);
}
var_bound153 = var152;
var154 = NULL;
if (var_bound153 == NULL) {
var155 = 1; /* is null */
} else {
var155 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_bound153,var154) on <var_bound153:nullable MType> */
var_other = var154;
{
{ /* Inline kernel#Object#is_same_instance (var_bound153,var_other) on <var_bound153:nullable MType(MType)> */
var160 = var_bound153 == var_other;
var158 = var160;
goto RET_LABEL159;
RET_LABEL159:(void)0;
}
}
var156 = var158;
goto RET_LABEL157;
RET_LABEL157:(void)0;
}
var155 = var156;
}
if (var155){
goto RET_LABEL;
} else {
}
{
var161 = ((short int (*)(val*))(var_bound153->class->vft[COLOR_model__MType__need_anchor]))(var_bound153) /* need_anchor on <var_bound153:nullable MType(MType)>*/;
}
if (var161){
if (varonce162) {
var163 = varonce162;
} else {
var164 = "Error: Formal parameter type `";
var165 = 30;
var166 = string__NativeString__to_s_with_length(var164, var165);
var163 = var166;
varonce162 = var163;
}
if (varonce167) {
var168 = varonce167;
} else {
var169 = "\' bounded with a formal parameter type";
var170 = 38;
var171 = string__NativeString__to_s_with_length(var169, var170);
var168 = var171;
varonce167 = var168;
}
var172 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var172 = array_instance Array[Object] */
var173 = 3;
var174 = NEW_array__NativeArray(var173, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var174)->values[0] = (val*) var163;
((struct instance_array__NativeArray*)var174)->values[1] = (val*) var_pname;
((struct instance_array__NativeArray*)var174)->values[2] = (val*) var168;
{
((void (*)(val*, val*, long))(var172->class->vft[COLOR_array__Array__with_native]))(var172, var174, var173) /* with_native on <var172:Array[Object]>*/;
}
}
{
var175 = ((val* (*)(val*))(var172->class->vft[COLOR_string__Object__to_s]))(var172) /* to_s on <var172:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_nfd, var175); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
{
array__Array__add(var_bounds, var_bound153); /* Direct call array#Array#add on <var_bounds:Array[MType]>*/
}
{
{ /* Inline modelize_class#AFormaldef#bound= (var_nfd,var_bound153) on <var_nfd:AFormaldef> */
var_nfd->attrs[COLOR_modelize_class__AFormaldef___bound].val = var_bound153; /* _bound on <var_nfd:AFormaldef> */
RET_LABEL176:(void)0;
}
}
}
/* <var_bound153:nullable MType(MType)> isa MClassType */
cltype179 = type_model__MClassType.color;
idtype180 = type_model__MClassType.id;
if(cltype179 >= var_bound153->type->table_size) {
var178 = 0;
} else {
var178 = var_bound153->type->type_table[cltype179] == idtype180;
}
var_181 = var178;
if (var178){
{
{ /* Inline model#MClassType#mclass (var_bound153) on <var_bound153:nullable MType(MClassType)> */
var184 = var_bound153->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_bound153:nullable MType(MClassType)> */
if (unlikely(var184 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var182 = var184;
RET_LABEL183:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var182) on <var182:MClass> */
var187 = var182->attrs[COLOR_model__MClass___kind].val; /* _kind on <var182:MClass> */
if (unlikely(var187 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 371);
show_backtrace(1);
}
var185 = var187;
RET_LABEL186:(void)0;
}
}
{
var188 = model__Object__enum_kind(self);
}
{
{ /* Inline kernel#Object#== (var185,var188) on <var185:MClassKind> */
var_other = var188;
{
{ /* Inline kernel#Object#is_same_instance (var185,var_other) on <var185:MClassKind> */
var194 = var185 == var_other;
var192 = var194;
goto RET_LABEL193;
RET_LABEL193:(void)0;
}
}
var190 = var192;
goto RET_LABEL191;
RET_LABEL191:(void)0;
}
var189 = var190;
}
var177 = var189;
} else {
var177 = var_181;
}
if (var177){
if (varonce195) {
var196 = varonce195;
} else {
var197 = "useless-bound";
var198 = 13;
var199 = string__NativeString__to_s_with_length(var197, var198);
var196 = var199;
varonce195 = var196;
}
if (varonce200) {
var201 = varonce200;
} else {
var202 = "Warning: Useless formal parameter type since `";
var203 = 46;
var204 = string__NativeString__to_s_with_length(var202, var203);
var201 = var204;
varonce200 = var201;
}
if (varonce205) {
var206 = varonce205;
} else {
var207 = "` cannnot have subclasses.";
var208 = 26;
var209 = string__NativeString__to_s_with_length(var207, var208);
var206 = var209;
varonce205 = var206;
}
var210 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var210 = array_instance Array[Object] */
var211 = 3;
var212 = NEW_array__NativeArray(var211, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var212)->values[0] = (val*) var201;
((struct instance_array__NativeArray*)var212)->values[1] = (val*) var_bound153;
((struct instance_array__NativeArray*)var212)->values[2] = (val*) var206;
{
((void (*)(val*, val*, long))(var210->class->vft[COLOR_array__Array__with_native]))(var210, var212, var211) /* with_native on <var210:Array[Object]>*/;
}
}
{
var213 = ((val* (*)(val*))(var210->class->vft[COLOR_string__Object__to_s]))(var210) /* to_s on <var210:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__warning(self, var_nfdt, var196, var213); /* Direct call modelbuilder#ModelBuilder#warning on <self:ModelBuilder>*/
}
} else {
}
} else {
{
{ /* Inline model#MClass#mclassdefs (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var216 = var_mclass->attrs[COLOR_model__MClass___mclassdefs].val; /* _mclassdefs on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var216 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdefs");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 414);
show_backtrace(1);
}
var214 = var216;
RET_LABEL215:(void)0;
}
}
{
var217 = array__AbstractArrayRead__is_empty(var214);
}
if (var217){
if (var_objectclass == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_class.nit", 172);
show_backtrace(1);
} else {
{ /* Inline model#MClass#mclass_type (var_objectclass) on <var_objectclass:nullable MClass> */
if (unlikely(var_objectclass == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var220 = var_objectclass->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var_objectclass:nullable MClass> */
if (unlikely(var220 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var218 = var220;
RET_LABEL219:(void)0;
}
}
{
var221 = model__MType__as_nullable(var218);
}
var_bound222 = var221;
{
array__Array__add(var_bounds, var_bound222); /* Direct call array#Array#add on <var_bounds:Array[MType]>*/
}
{
{ /* Inline modelize_class#AFormaldef#bound= (var_nfd,var_bound222) on <var_nfd:AFormaldef> */
var_nfd->attrs[COLOR_modelize_class__AFormaldef___bound].val = var_bound222; /* _bound on <var_nfd:AFormaldef> */
RET_LABEL223:(void)0;
}
}
} else {
{
{ /* Inline model#MClass#intro (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var226 = var_mclass->attrs[COLOR_model__MClass___intro].val; /* _intro on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var226 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 420);
show_backtrace(1);
}
var224 = var226;
RET_LABEL225:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var224) on <var224:MClassDef> */
var229 = var224->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var224:MClassDef> */
if (unlikely(var229 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var227 = var229;
RET_LABEL228:(void)0;
}
}
{
{ /* Inline model#MClassType#arguments (var227) on <var227:MClassType> */
var232 = var227->attrs[COLOR_model__MClassType___arguments].val; /* _arguments on <var227:MClassType> */
if (unlikely(var232 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 996);
show_backtrace(1);
}
var230 = var232;
RET_LABEL231:(void)0;
}
}
{
var233 = array__Array___91d_93d(var230, var_i);
}
var_bound234 = var233;
{
array__Array__add(var_bounds, var_bound234); /* Direct call array#Array#add on <var_bounds:Array[MType]>*/
}
{
{ /* Inline modelize_class#AFormaldef#bound= (var_nfd,var_bound234) on <var_nfd:AFormaldef> */
var_nfd->attrs[COLOR_modelize_class__AFormaldef___bound].val = var_bound234; /* _bound on <var_nfd:AFormaldef> */
RET_LABEL235:(void)0;
}
}
}
}
BREAK_label: (void)0;
var236 = 1;
{
var237 = kernel__Int__successor(var_i, var236);
}
var_i = var237;
} else {
goto BREAK_label238;
}
}
BREAK_label238: (void)0;
} else {
}
{
var239 = model__MClass__get_mtype(var_mclass, var_bounds);
}
var_bound_mtype = var239;
var240 = NEW_model__MClassDef(&type_model__MClassDef);
{
{ /* Inline parser_nodes#ANode#location (var_nclassdef) on <var_nclassdef:AClassdef> */
var243 = var_nclassdef->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <var_nclassdef:AClassdef> */
if (unlikely(var243 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 23);
show_backtrace(1);
}
var241 = var243;
RET_LABEL242:(void)0;
}
}
{
model__MClassDef__init(var240, var_mmodule, var_bound_mtype, var241); /* Direct call model#MClassDef#init on <var240:MClassDef>*/
}
var_mclassdef = var240;
{
{ /* Inline modelize_class#AClassdef#mclassdef= (var_nclassdef,var_mclassdef) on <var_nclassdef:AClassdef> */
var_nclassdef->attrs[COLOR_modelize_class__AClassdef___mclassdef].val = var_mclassdef; /* _mclassdef on <var_nclassdef:AClassdef> */
RET_LABEL244:(void)0;
}
}
{
{ /* Inline modelize_class#ModelBuilder#mclassdef2nclassdef (self) on <self:ModelBuilder> */
var247 = self->attrs[COLOR_modelize_class__ModelBuilder___mclassdef2nclassdef].val; /* _mclassdef2nclassdef on <self:ModelBuilder> */
if (unlikely(var247 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef2nclassdef");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_class.nit", 410);
show_backtrace(1);
}
var245 = var247;
RET_LABEL246:(void)0;
}
}
{
hash_collection__HashMap___91d_93d_61d(var245, var_mclassdef, var_nclassdef); /* Direct call hash_collection#HashMap#[]= on <var245:HashMap[MClassDef, AClassdef]>*/
}
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype249 = type_parser_nodes__AStdClassdef.color;
idtype250 = type_parser_nodes__AStdClassdef.id;
if(cltype249 >= var_nclassdef->type->table_size) {
var248 = 0;
} else {
var248 = var_nclassdef->type->type_table[cltype249] == idtype250;
}
if (var248){
{
{ /* Inline parser_nodes#AStdClassdef#n_doc (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var253 = var_nclassdef->attrs[COLOR_parser_nodes__AStdClassdef___n_doc].val; /* _n_doc on <var_nclassdef:AClassdef(AStdClassdef)> */
var251 = var253;
RET_LABEL252:(void)0;
}
}
var_ndoc = var251;
var254 = NULL;
if (var_ndoc == NULL) {
var255 = 0; /* is null */
} else {
var255 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ndoc,var254) on <var_ndoc:nullable ADoc> */
var_other25 = var254;
{
var259 = ((short int (*)(val*, val*))(var_ndoc->class->vft[COLOR_kernel__Object___61d_61d]))(var_ndoc, var_other25) /* == on <var_ndoc:nullable ADoc(ADoc)>*/;
var258 = var259;
}
var260 = !var258;
var256 = var260;
goto RET_LABEL257;
RET_LABEL257:(void)0;
}
var255 = var256;
}
if (var255){
{
var261 = modelbuilder__ADoc__to_mdoc(var_ndoc);
}
var_mdoc = var261;
{
{ /* Inline mdoc#MEntity#mdoc= (var_mclassdef,var_mdoc) on <var_mclassdef:MClassDef> */
var_mclassdef->attrs[COLOR_mdoc__MEntity___mdoc].val = var_mdoc; /* _mdoc on <var_mclassdef:MClassDef> */
RET_LABEL262:(void)0;
}
}
{
{ /* Inline mdoc#MDoc#original_mentity= (var_mdoc,var_mclassdef) on <var_mdoc:MDoc> */
var_mdoc->attrs[COLOR_mdoc__MDoc___original_mentity].val = var_mclassdef; /* _original_mentity on <var_mdoc:MDoc> */
RET_LABEL263:(void)0;
}
}
} else {
{
var265 = model__MClassDef__is_intro(var_mclassdef);
}
var_266 = var265;
if (var265){
{
{ /* Inline model#MClass#visibility (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var269 = var_mclass->attrs[COLOR_model__MClass___visibility].val; /* _visibility on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var269 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 375);
show_backtrace(1);
}
var267 = var269;
RET_LABEL268:(void)0;
}
}
{
var270 = model_base__Object__public_visibility(self);
}
{
var271 = kernel__Comparable___62d_61d(var267, var270);
}
var264 = var271;
} else {
var264 = var_266;
}
if (var264){
if (varonce272) {
var273 = varonce272;
} else {
var274 = "missing-doc";
var275 = 11;
var276 = string__NativeString__to_s_with_length(var274, var275);
var273 = var276;
varonce272 = var273;
}
if (varonce277) {
var278 = varonce277;
} else {
var279 = "Documentation warning: Undocumented public class `";
var280 = 50;
var281 = string__NativeString__to_s_with_length(var279, var280);
var278 = var281;
varonce277 = var278;
}
if (varonce282) {
var283 = varonce282;
} else {
var284 = "`";
var285 = 1;
var286 = string__NativeString__to_s_with_length(var284, var285);
var283 = var286;
varonce282 = var283;
}
var287 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var287 = array_instance Array[Object] */
var288 = 3;
var289 = NEW_array__NativeArray(var288, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var289)->values[0] = (val*) var278;
((struct instance_array__NativeArray*)var289)->values[1] = (val*) var_mclass;
((struct instance_array__NativeArray*)var289)->values[2] = (val*) var283;
{
((void (*)(val*, val*, long))(var287->class->vft[COLOR_array__Array__with_native]))(var287, var289, var288) /* with_native on <var287:Array[Object]>*/;
}
}
{
var290 = ((val* (*)(val*))(var287->class->vft[COLOR_string__Object__to_s]))(var287) /* to_s on <var287:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__advice(self, var_nclassdef, var273, var290); /* Direct call modelbuilder#ModelBuilder#advice on <self:ModelBuilder>*/
}
} else {
}
}
} else {
}
{
var291 = model__MClassDef__is_intro(var_mclassdef);
}
if (var291){
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var294 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var294 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var292 = var294;
RET_LABEL293:(void)0;
}
}
if (varonce295) {
var296 = varonce295;
} else {
var297 = " introduces new ";
var298 = 16;
var299 = string__NativeString__to_s_with_length(var297, var298);
var296 = var299;
varonce295 = var296;
}
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var302 = var_mclass->attrs[COLOR_model__MClass___kind].val; /* _kind on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var302 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 371);
show_backtrace(1);
}
var300 = var302;
RET_LABEL301:(void)0;
}
}
if (varonce303) {
var304 = varonce303;
} else {
var305 = " ";
var306 = 1;
var307 = string__NativeString__to_s_with_length(var305, var306);
var304 = var307;
varonce303 = var304;
}
{
var308 = model__MClass__full_name(var_mclass);
}
var309 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var309 = array_instance Array[Object] */
var310 = 5;
var311 = NEW_array__NativeArray(var310, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var311)->values[0] = (val*) var_mclassdef;
((struct instance_array__NativeArray*)var311)->values[1] = (val*) var296;
((struct instance_array__NativeArray*)var311)->values[2] = (val*) var300;
((struct instance_array__NativeArray*)var311)->values[3] = (val*) var304;
((struct instance_array__NativeArray*)var311)->values[4] = (val*) var308;
{
((void (*)(val*, val*, long))(var309->class->vft[COLOR_array__Array__with_native]))(var309, var311, var310) /* with_native on <var309:Array[Object]>*/;
}
}
{
var312 = ((val* (*)(val*))(var309->class->vft[COLOR_string__Object__to_s]))(var309) /* to_s on <var309:Array[Object]>*/;
}
var313 = 3;
{
toolcontext__ToolContext__info(var292, var312, var313); /* Direct call toolcontext#ToolContext#info on <var292:ToolContext>*/
}
} else {
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var316 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var316 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var314 = var316;
RET_LABEL315:(void)0;
}
}
if (varonce317) {
var318 = varonce317;
} else {
var319 = " refine ";
var320 = 8;
var321 = string__NativeString__to_s_with_length(var319, var320);
var318 = var321;
varonce317 = var318;
}
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var324 = var_mclass->attrs[COLOR_model__MClass___kind].val; /* _kind on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var324 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 371);
show_backtrace(1);
}
var322 = var324;
RET_LABEL323:(void)0;
}
}
if (varonce325) {
var326 = varonce325;
} else {
var327 = " ";
var328 = 1;
var329 = string__NativeString__to_s_with_length(var327, var328);
var326 = var329;
varonce325 = var326;
}
{
var330 = model__MClass__full_name(var_mclass);
}
var331 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var331 = array_instance Array[Object] */
var332 = 5;
var333 = NEW_array__NativeArray(var332, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var333)->values[0] = (val*) var_mclassdef;
((struct instance_array__NativeArray*)var333)->values[1] = (val*) var318;
((struct instance_array__NativeArray*)var333)->values[2] = (val*) var322;
((struct instance_array__NativeArray*)var333)->values[3] = (val*) var326;
((struct instance_array__NativeArray*)var333)->values[4] = (val*) var330;
{
((void (*)(val*, val*, long))(var331->class->vft[COLOR_array__Array__with_native]))(var331, var333, var332) /* with_native on <var331:Array[Object]>*/;
}
}
{
var334 = ((val* (*)(val*))(var331->class->vft[COLOR_string__Object__to_s]))(var331) /* to_s on <var331:Array[Object]>*/;
}
var335 = 3;
{
toolcontext__ToolContext__info(var314, var334, var335); /* Direct call toolcontext#ToolContext#info on <var314:ToolContext>*/
}
}
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#build_a_mclassdef for (self: Object, AModule, AClassdef) */
void VIRTUAL_modelize_class__ModelBuilder__build_a_mclassdef(val* self, val* p0, val* p1) {
modelize_class__ModelBuilder__build_a_mclassdef(self, p0, p1); /* Direct call modelize_class#ModelBuilder#build_a_mclassdef on <self:Object(ModelBuilder)>*/
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#collect_a_mclassdef_inheritance for (self: ModelBuilder, AModule, AClassdef) */
void modelize_class__ModelBuilder__collect_a_mclassdef_inheritance(val* self, val* p0, val* p1) {
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
short int var108 /* : Bool */;
short int var110 /* : Bool */;
short int var112 /* : Bool */;
short int var113 /* : Bool */;
short int var116 /* : Bool */;
short int var117 /* : Bool */;
short int var_118 /* var : Bool */;
val* var119 /* : null */;
short int var120 /* : Bool */;
short int var121 /* : Bool */;
val* var_other123 /* var other: nullable Object */;
short int var124 /* : Bool */;
short int var125 /* : Bool */;
short int var126 /* : Bool */;
short int var127 /* : Bool */;
val* var128 /* : MClassKind */;
val* var130 /* : MClassKind */;
val* var131 /* : MClassKind */;
short int var132 /* : Bool */;
short int var133 /* : Bool */;
short int var135 /* : Bool */;
short int var137 /* : Bool */;
short int var_138 /* var : Bool */;
val* var139 /* : String */;
val* var141 /* : String */;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : NativeString */;
long var145 /* : Int */;
val* var146 /* : FlatString */;
short int var147 /* : Bool */;
short int var148 /* : Bool */;
short int var150 /* : Bool */;
short int var151 /* : Bool */;
short int var152 /* : Bool */;
val* var153 /* : MClassType */;
val* var155 /* : MClassType */;
short int var156 /* : Bool */;
short int var_157 /* var : Bool */;
val* var158 /* : String */;
val* var160 /* : String */;
static val* varonce161;
val* var162 /* : String */;
char* var163 /* : NativeString */;
long var164 /* : Int */;
val* var165 /* : FlatString */;
short int var166 /* : Bool */;
short int var167 /* : Bool */;
short int var169 /* : Bool */;
short int var170 /* : Bool */;
short int var171 /* : Bool */;
val* var172 /* : MClassType */;
val* var174 /* : MClassType */;
short int var175 /* : Bool */;
short int var176 /* : Bool */;
val* var177 /* : ToolContext */;
val* var179 /* : ToolContext */;
static val* varonce180;
val* var181 /* : String */;
char* var182 /* : NativeString */;
long var183 /* : Int */;
val* var184 /* : FlatString */;
static val* varonce185;
val* var186 /* : String */;
char* var187 /* : NativeString */;
long var188 /* : Int */;
val* var189 /* : FlatString */;
val* var190 /* : String */;
val* var191 /* : Array[Object] */;
long var192 /* : Int */;
val* var193 /* : NativeArray[Object] */;
val* var194 /* : String */;
long var195 /* : Int */;
var_nmodule = p0;
var_nclassdef = p1;
{
{ /* Inline modelbuilder#AModule#mmodule (var_nmodule) on <var_nmodule:AModule> */
var2 = var_nmodule->attrs[COLOR_modelbuilder__AModule___mmodule].val; /* _mmodule on <var_nmodule:AModule> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_class.nit", 210);
show_backtrace(1);
}
var_mmodule = var;
if (varonce) {
var3 = varonce;
} else {
var4 = "Object";
var5 = 6;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
{
var7 = modelbuilder__ModelBuilder__try_get_mclass_by_name(self, var_nmodule, var_mmodule, var3);
}
var_objectclass = var7;
if (varonce8) {
var9 = varonce8;
} else {
var10 = "Pointer";
var11 = 7;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
{
var13 = modelbuilder__ModelBuilder__try_get_mclass_by_name(self, var_nmodule, var_mmodule, var9);
}
var_pointerclass = var13;
{
{ /* Inline modelize_class#AClassdef#mclass (var_nclassdef) on <var_nclassdef:AClassdef> */
var16 = var_nclassdef->attrs[COLOR_modelize_class__AClassdef___mclass].val; /* _mclass on <var_nclassdef:AClassdef> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_class.nit", 213);
show_backtrace(1);
}
var_mclass = var14;
{
{ /* Inline modelize_class#AClassdef#mclassdef (var_nclassdef) on <var_nclassdef:AClassdef> */
var19 = var_nclassdef->attrs[COLOR_modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_nclassdef:AClassdef> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_class.nit", 214);
show_backtrace(1);
}
var_mclassdef = var17;
var20 = 1;
var_specobject = var20;
var21 = 1;
var_specpointer = var21;
var22 = NEW_array__Array(&type_array__Arraymodel__MClassType);
{
((void (*)(val*))(var22->class->vft[COLOR_kernel__Object__init]))(var22) /* init on <var22:Array[MClassType]>*/;
}
var_supertypes = var22;
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype = type_parser_nodes__AStdClassdef.color;
idtype = type_parser_nodes__AStdClassdef.id;
if(cltype >= var_nclassdef->type->table_size) {
var23 = 0;
} else {
var23 = var_nclassdef->type->type_table[cltype] == idtype;
}
if (var23){
{
{ /* Inline parser_nodes#AStdClassdef#n_superclasses (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var26 = var_nclassdef->attrs[COLOR_parser_nodes__AStdClassdef___n_superclasses].val; /* _n_superclasses on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_superclasses");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 942);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
var_ = var24;
{
var27 = parser_nodes__ANodes__iterator(var_);
}
var_28 = var27;
for(;;) {
{
var29 = ((short int (*)(val*))(var_28->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_28) /* is_ok on <var_28:Iterator[ASuperclass]>*/;
}
if (var29){
{
var30 = ((val* (*)(val*))(var_28->class->vft[COLOR_abstract_collection__Iterator__item]))(var_28) /* item on <var_28:Iterator[ASuperclass]>*/;
}
var_nsc = var30;
var31 = 0;
var_specobject = var31;
{
{ /* Inline parser_nodes#ASuperclass#n_type (var_nsc) on <var_nsc:ASuperclass> */
var34 = var_nsc->attrs[COLOR_parser_nodes__ASuperclass___n_type].val; /* _n_type on <var_nsc:ASuperclass> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1006);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
var_ntype = var32;
var35 = 0;
{
var36 = modelize_class__ModelBuilder__resolve_mtype_unchecked(self, var_mmodule, var_mclassdef, var_ntype, var35);
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
cltype45 = type_model__MClassType.color;
idtype46 = type_model__MClassType.id;
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
var52 = string__NativeString__to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
{
modelbuilder__ModelBuilder__error(self, var_ntype, var49); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:MClass> */
var55 = var_mclass->attrs[COLOR_model__MClass___kind].val; /* _kind on <var_mclass:MClass> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 371);
show_backtrace(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:nullable MType(MClassType)> */
var58 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:nullable MType(MClassType)> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var56) on <var56:MClass> */
var61 = var56->attrs[COLOR_model__MClass___kind].val; /* _kind on <var56:MClass> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 371);
show_backtrace(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
var62 = model__MClassKind__can_specialize(var53, var59);
}
var63 = !var62;
if (var63){
if (varonce64) {
var65 = varonce64;
} else {
var66 = "Error: ";
var67 = 7;
var68 = string__NativeString__to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:MClass> */
var71 = var_mclass->attrs[COLOR_model__MClass___kind].val; /* _kind on <var_mclass:MClass> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 371);
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
var76 = string__NativeString__to_s_with_length(var74, var75);
var73 = var76;
varonce72 = var73;
}
if (varonce77) {
var78 = varonce77;
} else {
var79 = " cannot specialize ";
var80 = 19;
var81 = string__NativeString__to_s_with_length(var79, var80);
var78 = var81;
varonce77 = var78;
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:nullable MType(MClassType)> */
var84 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:nullable MType(MClassType)> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var82) on <var82:MClass> */
var87 = var82->attrs[COLOR_model__MClass___kind].val; /* _kind on <var82:MClass> */
if (unlikely(var87 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 371);
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
var92 = string__NativeString__to_s_with_length(var90, var91);
var89 = var92;
varonce88 = var89;
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:nullable MType(MClassType)> */
var95 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:nullable MType(MClassType)> */
if (unlikely(var95 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
var96 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var96 = array_instance Array[Object] */
var97 = 8;
var98 = NEW_array__NativeArray(var97, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var98)->values[0] = (val*) var65;
((struct instance_array__NativeArray*)var98)->values[1] = (val*) var69;
((struct instance_array__NativeArray*)var98)->values[2] = (val*) var73;
((struct instance_array__NativeArray*)var98)->values[3] = (val*) var_mclass;
((struct instance_array__NativeArray*)var98)->values[4] = (val*) var78;
((struct instance_array__NativeArray*)var98)->values[5] = (val*) var85;
((struct instance_array__NativeArray*)var98)->values[6] = (val*) var89;
((struct instance_array__NativeArray*)var98)->values[7] = (val*) var93;
{
((void (*)(val*, val*, long))(var96->class->vft[COLOR_array__Array__with_native]))(var96, var98, var97) /* with_native on <var96:Array[Object]>*/;
}
}
{
var99 = ((val* (*)(val*))(var96->class->vft[COLOR_string__Object__to_s]))(var96) /* to_s on <var96:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_ntype, var99); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
{
array__Array__add(var_supertypes, var_mtype); /* Direct call array#Array#add on <var_supertypes:Array[MClassType]>*/
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:nullable MType(MClassType)> */
var102 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:nullable MType(MClassType)> */
if (unlikely(var102 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var100 = var102;
RET_LABEL101:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var100) on <var100:MClass> */
var105 = var100->attrs[COLOR_model__MClass___kind].val; /* _kind on <var100:MClass> */
if (unlikely(var105 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 371);
show_backtrace(1);
}
var103 = var105;
RET_LABEL104:(void)0;
}
}
{
var106 = model__Object__extern_kind(self);
}
{
{ /* Inline kernel#Object#== (var103,var106) on <var103:MClassKind> */
var_other = var106;
{
{ /* Inline kernel#Object#is_same_instance (var103,var_other) on <var103:MClassKind> */
var112 = var103 == var_other;
var110 = var112;
goto RET_LABEL111;
RET_LABEL111:(void)0;
}
}
var108 = var110;
goto RET_LABEL109;
RET_LABEL109:(void)0;
}
var107 = var108;
}
if (var107){
var113 = 0;
var_specpointer = var113;
} else {
}
BREAK_label: (void)0;
{
((void (*)(val*))(var_28->class->vft[COLOR_abstract_collection__Iterator__next]))(var_28) /* next on <var_28:Iterator[ASuperclass]>*/;
}
} else {
goto BREAK_label114;
}
}
BREAK_label114: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_28) on <var_28:Iterator[ASuperclass]> */
RET_LABEL115:(void)0;
}
}
} else {
}
{
var117 = model__MClassDef__is_intro(var_mclassdef);
}
var_118 = var117;
if (var117){
var119 = NULL;
if (var_objectclass == NULL) {
var120 = 0; /* is null */
} else {
var120 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_objectclass,var119) on <var_objectclass:nullable MClass> */
var_other123 = var119;
{
var125 = ((short int (*)(val*, val*))(var_objectclass->class->vft[COLOR_kernel__Object___61d_61d]))(var_objectclass, var_other123) /* == on <var_objectclass:nullable MClass(MClass)>*/;
var124 = var125;
}
var126 = !var124;
var121 = var126;
goto RET_LABEL122;
RET_LABEL122:(void)0;
}
var120 = var121;
}
var116 = var120;
} else {
var116 = var_118;
}
if (var116){
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:MClass> */
var130 = var_mclass->attrs[COLOR_model__MClass___kind].val; /* _kind on <var_mclass:MClass> */
if (unlikely(var130 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 371);
show_backtrace(1);
}
var128 = var130;
RET_LABEL129:(void)0;
}
}
{
var131 = model__Object__extern_kind(self);
}
{
{ /* Inline kernel#Object#== (var128,var131) on <var128:MClassKind> */
var_other = var131;
{
{ /* Inline kernel#Object#is_same_instance (var128,var_other) on <var128:MClassKind> */
var137 = var128 == var_other;
var135 = var137;
goto RET_LABEL136;
RET_LABEL136:(void)0;
}
}
var133 = var135;
goto RET_LABEL134;
RET_LABEL134:(void)0;
}
var132 = var133;
}
var_138 = var132;
if (var132){
{
{ /* Inline model#MClass#name (var_mclass) on <var_mclass:MClass> */
var141 = var_mclass->attrs[COLOR_model__MClass___name].val; /* _name on <var_mclass:MClass> */
if (unlikely(var141 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 352);
show_backtrace(1);
}
var139 = var141;
RET_LABEL140:(void)0;
}
}
if (varonce142) {
var143 = varonce142;
} else {
var144 = "Pointer";
var145 = 7;
var146 = string__NativeString__to_s_with_length(var144, var145);
var143 = var146;
varonce142 = var143;
}
{
{ /* Inline kernel#Object#!= (var139,var143) on <var139:String> */
var_other123 = var143;
{
var151 = ((short int (*)(val*, val*))(var139->class->vft[COLOR_kernel__Object___61d_61d]))(var139, var_other123) /* == on <var139:String>*/;
var150 = var151;
}
var152 = !var150;
var148 = var152;
goto RET_LABEL149;
RET_LABEL149:(void)0;
}
var147 = var148;
}
var127 = var147;
} else {
var127 = var_138;
}
if (var127){
if (var_specpointer){
if (var_pointerclass == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_class.nit", 246);
show_backtrace(1);
} else {
{ /* Inline model#MClass#mclass_type (var_pointerclass) on <var_pointerclass:nullable MClass> */
if (unlikely(var_pointerclass == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var155 = var_pointerclass->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var_pointerclass:nullable MClass> */
if (unlikely(var155 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var153 = var155;
RET_LABEL154:(void)0;
}
}
{
array__Array__add(var_supertypes, var153); /* Direct call array#Array#add on <var_supertypes:Array[MClassType]>*/
}
} else {
}
} else {
var_157 = var_specobject;
if (var_specobject){
{
{ /* Inline model#MClass#name (var_mclass) on <var_mclass:MClass> */
var160 = var_mclass->attrs[COLOR_model__MClass___name].val; /* _name on <var_mclass:MClass> */
if (unlikely(var160 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 352);
show_backtrace(1);
}
var158 = var160;
RET_LABEL159:(void)0;
}
}
if (varonce161) {
var162 = varonce161;
} else {
var163 = "Object";
var164 = 6;
var165 = string__NativeString__to_s_with_length(var163, var164);
var162 = var165;
varonce161 = var162;
}
{
{ /* Inline kernel#Object#!= (var158,var162) on <var158:String> */
var_other123 = var162;
{
var170 = ((short int (*)(val*, val*))(var158->class->vft[COLOR_kernel__Object___61d_61d]))(var158, var_other123) /* == on <var158:String>*/;
var169 = var170;
}
var171 = !var169;
var167 = var171;
goto RET_LABEL168;
RET_LABEL168:(void)0;
}
var166 = var167;
}
var156 = var166;
} else {
var156 = var_157;
}
if (var156){
{
{ /* Inline model#MClass#mclass_type (var_objectclass) on <var_objectclass:nullable MClass(MClass)> */
var174 = var_objectclass->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var_objectclass:nullable MClass(MClass)> */
if (unlikely(var174 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var172 = var174;
RET_LABEL173:(void)0;
}
}
{
array__Array__add(var_supertypes, var172); /* Direct call array#Array#add on <var_supertypes:Array[MClassType]>*/
}
} else {
}
}
} else {
}
{
model__MClassDef__set_supertypes(var_mclassdef, var_supertypes); /* Direct call model#MClassDef#set_supertypes on <var_mclassdef:MClassDef>*/
}
{
var175 = array__AbstractArrayRead__is_empty(var_supertypes);
}
var176 = !var175;
if (var176){
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var179 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var179 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var177 = var179;
RET_LABEL178:(void)0;
}
}
if (varonce180) {
var181 = varonce180;
} else {
var182 = " new super-types: ";
var183 = 18;
var184 = string__NativeString__to_s_with_length(var182, var183);
var181 = var184;
varonce180 = var181;
}
if (varonce185) {
var186 = varonce185;
} else {
var187 = ", ";
var188 = 2;
var189 = string__NativeString__to_s_with_length(var187, var188);
var186 = var189;
varonce185 = var186;
}
{
var190 = string__Collection__join(var_supertypes, var186);
}
var191 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var191 = array_instance Array[Object] */
var192 = 3;
var193 = NEW_array__NativeArray(var192, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var193)->values[0] = (val*) var_mclassdef;
((struct instance_array__NativeArray*)var193)->values[1] = (val*) var181;
((struct instance_array__NativeArray*)var193)->values[2] = (val*) var190;
{
((void (*)(val*, val*, long))(var191->class->vft[COLOR_array__Array__with_native]))(var191, var193, var192) /* with_native on <var191:Array[Object]>*/;
}
}
{
var194 = ((val* (*)(val*))(var191->class->vft[COLOR_string__Object__to_s]))(var191) /* to_s on <var191:Array[Object]>*/;
}
var195 = 3;
{
toolcontext__ToolContext__info(var177, var194, var195); /* Direct call toolcontext#ToolContext#info on <var177:ToolContext>*/
}
} else {
}
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#collect_a_mclassdef_inheritance for (self: Object, AModule, AClassdef) */
void VIRTUAL_modelize_class__ModelBuilder__collect_a_mclassdef_inheritance(val* self, val* p0, val* p1) {
modelize_class__ModelBuilder__collect_a_mclassdef_inheritance(self, p0, p1); /* Direct call modelize_class#ModelBuilder#collect_a_mclassdef_inheritance on <self:Object(ModelBuilder)>*/
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#check_supertypes for (self: ModelBuilder, AModule, AClassdef) */
void modelize_class__ModelBuilder__check_supertypes(val* self, val* p0, val* p1) {
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
{ /* Inline modelbuilder#AModule#mmodule (var_nmodule) on <var_nmodule:AModule> */
var2 = var_nmodule->attrs[COLOR_modelbuilder__AModule___mmodule].val; /* _mmodule on <var_nmodule:AModule> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_class.nit", 260);
show_backtrace(1);
}
var_mmodule = var;
{
{ /* Inline modelize_class#AClassdef#mclass (var_nclassdef) on <var_nclassdef:AClassdef> */
var5 = var_nclassdef->attrs[COLOR_modelize_class__AClassdef___mclass].val; /* _mclass on <var_nclassdef:AClassdef> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_class.nit", 261);
show_backtrace(1);
}
var_mclass = var3;
{
{ /* Inline modelize_class#AClassdef#mclassdef (var_nclassdef) on <var_nclassdef:AClassdef> */
var8 = var_nclassdef->attrs[COLOR_modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_nclassdef:AClassdef> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_class.nit", 262);
show_backtrace(1);
}
var_mclassdef = var6;
{
{ /* Inline model#MClassDef#supertypes (var_mclassdef) on <var_mclassdef:MClassDef> */
var11 = var_mclassdef->attrs[COLOR_model__MClassDef___supertypes].val; /* _supertypes on <var_mclassdef:MClassDef> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supertypes");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 534);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_ = var9;
{
var12 = array__AbstractArrayRead__iterator(var_);
}
var_13 = var12;
for(;;) {
{
var14 = array__ArrayIterator__is_ok(var_13);
}
if (var14){
{
var15 = array__ArrayIterator__item(var_13);
}
var_s = var15;
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var18 = var_mclassdef->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var21 = var_mclassdef->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = model__MType__is_subtype(var_s, var_mmodule, var16, var19);
}
if (var22){
if (varonce) {
var23 = varonce;
} else {
var24 = "Error: Inheritance loop for class ";
var25 = 34;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce = var23;
}
if (varonce27) {
var28 = varonce27;
} else {
var29 = " with type ";
var30 = 11;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
var32 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var32 = array_instance Array[Object] */
var33 = 4;
var34 = NEW_array__NativeArray(var33, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var34)->values[0] = (val*) var23;
((struct instance_array__NativeArray*)var34)->values[1] = (val*) var_mclass;
((struct instance_array__NativeArray*)var34)->values[2] = (val*) var28;
((struct instance_array__NativeArray*)var34)->values[3] = (val*) var_s;
{
((void (*)(val*, val*, long))(var32->class->vft[COLOR_array__Array__with_native]))(var32, var34, var33) /* with_native on <var32:Array[Object]>*/;
}
}
{
var35 = ((val* (*)(val*))(var32->class->vft[COLOR_string__Object__to_s]))(var32) /* to_s on <var32:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_nclassdef, var35); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
{
array__ArrayIterator__next(var_13); /* Direct call array#ArrayIterator#next on <var_13:ArrayIterator[MClassType]>*/
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
/* method modelize_class#ModelBuilder#check_supertypes for (self: Object, AModule, AClassdef) */
void VIRTUAL_modelize_class__ModelBuilder__check_supertypes(val* self, val* p0, val* p1) {
modelize_class__ModelBuilder__check_supertypes(self, p0, p1); /* Direct call modelize_class#ModelBuilder#check_supertypes on <self:Object(ModelBuilder)>*/
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#build_classes for (self: ModelBuilder, AModule) */
void modelize_class__ModelBuilder__build_classes(val* self, val* p0) {
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
val* var17 /* : Collection[Object] */;
val* var_ /* var : Collection[MModule] */;
val* var18 /* : Iterator[nullable Object] */;
val* var_19 /* var : Iterator[MModule] */;
short int var20 /* : Bool */;
val* var21 /* : nullable Object */;
val* var_imp /* var imp: MModule */;
val* var22 /* : HashMap[MModule, AModule] */;
val* var24 /* : HashMap[MModule, AModule] */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : HashMap[MModule, AModule] */;
val* var29 /* : HashMap[MModule, AModule] */;
val* var30 /* : nullable Object */;
val* var33 /* : ToolContext */;
val* var35 /* : ToolContext */;
long var36 /* : Int */;
long var38 /* : Int */;
short int var39 /* : Bool */;
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
val* var54 /* : ToolContext */;
val* var56 /* : ToolContext */;
long var57 /* : Int */;
long var59 /* : Int */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
val* var65 /* : ANodes[AClassdef] */;
val* var67 /* : ANodes[AClassdef] */;
val* var_68 /* var : ANodes[AClassdef] */;
val* var69 /* : Iterator[ANode] */;
val* var_70 /* var : Iterator[AClassdef] */;
short int var71 /* : Bool */;
val* var72 /* : nullable Object */;
val* var_nclassdef73 /* var nclassdef: AClassdef */;
val* var76 /* : ToolContext */;
val* var78 /* : ToolContext */;
long var79 /* : Int */;
long var81 /* : Int */;
short int var82 /* : Bool */;
short int var83 /* : Bool */;
short int var85 /* : Bool */;
short int var86 /* : Bool */;
val* var87 /* : ANodes[AClassdef] */;
val* var89 /* : ANodes[AClassdef] */;
val* var_90 /* var : ANodes[AClassdef] */;
val* var91 /* : Iterator[ANode] */;
val* var_92 /* var : Iterator[AClassdef] */;
short int var93 /* : Bool */;
val* var94 /* : nullable Object */;
val* var_nclassdef95 /* var nclassdef: AClassdef */;
val* var98 /* : ToolContext */;
val* var100 /* : ToolContext */;
long var101 /* : Int */;
long var103 /* : Int */;
short int var104 /* : Bool */;
short int var105 /* : Bool */;
short int var107 /* : Bool */;
short int var108 /* : Bool */;
val* var109 /* : Array[MClassDef] */;
val* var111 /* : Array[MClassDef] */;
val* var_112 /* var : Array[MClassDef] */;
val* var113 /* : ArrayIterator[nullable Object] */;
val* var_114 /* var : ArrayIterator[MClassDef] */;
short int var115 /* : Bool */;
val* var116 /* : nullable Object */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var119 /* : ToolContext */;
val* var121 /* : ToolContext */;
long var122 /* : Int */;
long var124 /* : Int */;
short int var125 /* : Bool */;
short int var126 /* : Bool */;
short int var128 /* : Bool */;
short int var129 /* : Bool */;
val* var130 /* : ANodes[AClassdef] */;
val* var132 /* : ANodes[AClassdef] */;
val* var_133 /* var : ANodes[AClassdef] */;
val* var134 /* : Iterator[ANode] */;
val* var_135 /* var : Iterator[AClassdef] */;
short int var136 /* : Bool */;
val* var137 /* : nullable Object */;
val* var_nclassdef138 /* var nclassdef: AClassdef */;
val* var141 /* : ToolContext */;
val* var143 /* : ToolContext */;
long var144 /* : Int */;
long var146 /* : Int */;
short int var147 /* : Bool */;
short int var148 /* : Bool */;
short int var150 /* : Bool */;
short int var151 /* : Bool */;
val* var152 /* : ANodes[AClassdef] */;
val* var154 /* : ANodes[AClassdef] */;
val* var_155 /* var : ANodes[AClassdef] */;
val* var156 /* : Iterator[ANode] */;
val* var_157 /* var : Iterator[AClassdef] */;
short int var158 /* : Bool */;
val* var159 /* : nullable Object */;
val* var_nclassdef160 /* var nclassdef: AClassdef */;
short int var161 /* : Bool */;
int cltype;
int idtype;
val* var162 /* : nullable MClassDef */;
val* var164 /* : nullable MClassDef */;
val* var_mclassdef165 /* var mclassdef: nullable MClassDef */;
val* var166 /* : ANodes[AFormaldef] */;
val* var168 /* : ANodes[AFormaldef] */;
val* var_169 /* var : ANodes[AFormaldef] */;
val* var170 /* : Iterator[ANode] */;
val* var_171 /* var : Iterator[AFormaldef] */;
short int var172 /* : Bool */;
val* var173 /* : nullable Object */;
val* var_nfd /* var nfd: AFormaldef */;
val* var174 /* : nullable AType */;
val* var176 /* : nullable AType */;
val* var_nfdt /* var nfdt: nullable AType */;
short int var177 /* : Bool */;
val* var178 /* : null */;
short int var179 /* : Bool */;
short int var180 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var182 /* : Bool */;
short int var183 /* : Bool */;
short int var184 /* : Bool */;
short int var_185 /* var : Bool */;
val* var186 /* : nullable MType */;
val* var188 /* : nullable MType */;
val* var189 /* : null */;
short int var190 /* : Bool */;
short int var191 /* : Bool */;
short int var193 /* : Bool */;
short int var194 /* : Bool */;
short int var195 /* : Bool */;
val* var196 /* : nullable MType */;
val* var_bound /* var bound: nullable MType */;
val* var197 /* : null */;
short int var198 /* : Bool */;
short int var199 /* : Bool */;
val* var_other201 /* var other: nullable Object */;
short int var202 /* : Bool */;
short int var204 /* : Bool */;
val* var207 /* : ANodes[ASuperclass] */;
val* var209 /* : ANodes[ASuperclass] */;
val* var_210 /* var : ANodes[ASuperclass] */;
val* var211 /* : Iterator[ANode] */;
val* var_212 /* var : Iterator[ASuperclass] */;
short int var213 /* : Bool */;
val* var214 /* : nullable Object */;
val* var_nsc /* var nsc: ASuperclass */;
val* var215 /* : AType */;
val* var217 /* : AType */;
val* var_ntype /* var ntype: AType */;
val* var218 /* : nullable MType */;
val* var220 /* : nullable MType */;
val* var221 /* : null */;
short int var222 /* : Bool */;
short int var223 /* : Bool */;
short int var225 /* : Bool */;
short int var226 /* : Bool */;
short int var227 /* : Bool */;
val* var228 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var229 /* : null */;
short int var230 /* : Bool */;
short int var231 /* : Bool */;
short int var233 /* : Bool */;
short int var235 /* : Bool */;
val* var240 /* : ToolContext */;
val* var242 /* : ToolContext */;
long var243 /* : Int */;
long var245 /* : Int */;
short int var246 /* : Bool */;
short int var247 /* : Bool */;
short int var249 /* : Bool */;
short int var250 /* : Bool */;
val* var251 /* : ANodes[AClassdef] */;
val* var253 /* : ANodes[AClassdef] */;
val* var_254 /* var : ANodes[AClassdef] */;
val* var255 /* : Iterator[ANode] */;
val* var_256 /* var : Iterator[AClassdef] */;
short int var257 /* : Bool */;
val* var258 /* : nullable Object */;
val* var_nclassdef259 /* var nclassdef: AClassdef */;
val* var260 /* : nullable MClassDef */;
val* var262 /* : nullable MClassDef */;
val* var_mclassdef263 /* var mclassdef: MClassDef */;
val* var264 /* : HashMap[MClass, MClassType] */;
val* var_superclasses /* var superclasses: HashMap[MClass, MClassType] */;
val* var265 /* : nullable POSetElement[MClassDef] */;
val* var267 /* : nullable POSetElement[MClassDef] */;
val* var268 /* : Collection[Object] */;
val* var_269 /* var : Collection[MClassDef] */;
val* var270 /* : Iterator[nullable Object] */;
val* var_271 /* var : Iterator[MClassDef] */;
short int var272 /* : Bool */;
val* var273 /* : nullable Object */;
val* var_scd /* var scd: MClassDef */;
val* var274 /* : Array[MClassType] */;
val* var276 /* : Array[MClassType] */;
val* var_277 /* var : Array[MClassType] */;
val* var278 /* : ArrayIterator[nullable Object] */;
val* var_279 /* var : ArrayIterator[MClassType] */;
short int var280 /* : Bool */;
val* var281 /* : nullable Object */;
val* var_st /* var st: MClassType */;
val* var282 /* : MClass */;
val* var284 /* : MClass */;
short int var285 /* : Bool */;
short int var286 /* : Bool */;
val* var287 /* : MClass */;
val* var289 /* : MClass */;
val* var290 /* : MClass */;
val* var292 /* : MClass */;
val* var293 /* : nullable Object */;
short int var294 /* : Bool */;
short int var295 /* : Bool */;
short int var297 /* : Bool */;
short int var298 /* : Bool */;
short int var299 /* : Bool */;
val* var300 /* : MClass */;
val* var302 /* : MClass */;
val* var303 /* : nullable Object */;
val* var304 /* : MClass */;
val* var306 /* : MClass */;
val* var307 /* : MClassType */;
val* var309 /* : MClassType */;
val* var310 /* : MClassType */;
val* var312 /* : MClassType */;
short int var313 /* : Bool */;
val* var314 /* : MType */;
val* var_st1 /* var st1: MClassType */;
val* var315 /* : MClass */;
val* var317 /* : MClass */;
val* var318 /* : MClassType */;
val* var320 /* : MClassType */;
val* var321 /* : MClassType */;
val* var323 /* : MClassType */;
short int var324 /* : Bool */;
val* var325 /* : MType */;
val* var_st2 /* var st2: MClassType */;
short int var326 /* : Bool */;
short int var327 /* : Bool */;
short int var329 /* : Bool */;
short int var330 /* : Bool */;
short int var331 /* : Bool */;
static val* varonce;
val* var332 /* : String */;
char* var333 /* : NativeString */;
long var334 /* : Int */;
val* var335 /* : FlatString */;
val* var336 /* : MClass */;
val* var338 /* : MClass */;
static val* varonce339;
val* var340 /* : String */;
char* var341 /* : NativeString */;
long var342 /* : Int */;
val* var343 /* : FlatString */;
static val* varonce344;
val* var345 /* : String */;
char* var346 /* : NativeString */;
long var347 /* : Int */;
val* var348 /* : FlatString */;
val* var349 /* : Array[Object] */;
long var350 /* : Int */;
val* var351 /* : NativeArray[Object] */;
val* var352 /* : String */;
val* var359 /* : ToolContext */;
val* var361 /* : ToolContext */;
long var362 /* : Int */;
long var364 /* : Int */;
short int var365 /* : Bool */;
short int var366 /* : Bool */;
short int var368 /* : Bool */;
short int var369 /* : Bool */;
val* var370 /* : ANodes[AClassdef] */;
val* var372 /* : ANodes[AClassdef] */;
val* var_373 /* var : ANodes[AClassdef] */;
val* var374 /* : Iterator[ANode] */;
val* var_375 /* var : Iterator[AClassdef] */;
short int var376 /* : Bool */;
val* var377 /* : nullable Object */;
val* var_nclassdef378 /* var nclassdef: AClassdef */;
short int var379 /* : Bool */;
int cltype380;
int idtype381;
short int var382 /* : Bool */;
val* var384 /* : nullable MClassDef */;
val* var386 /* : nullable MClassDef */;
val* var_mclassdef387 /* var mclassdef: MClassDef */;
val* var388 /* : Array[MClass] */;
val* var_parents /* var parents: Array[MClass] */;
val* var389 /* : nullable POSetElement[MClassDef] */;
val* var391 /* : nullable POSetElement[MClassDef] */;
val* var392 /* : Collection[Object] */;
val* var_393 /* var : Collection[MClassDef] */;
val* var394 /* : Iterator[nullable Object] */;
val* var_395 /* var : Iterator[MClassDef] */;
short int var396 /* : Bool */;
val* var397 /* : nullable Object */;
val* var_sup /* var sup: MClassDef */;
val* var398 /* : MClass */;
val* var400 /* : MClass */;
val* var403 /* : ArrayMap[MClass, AType] */;
val* var_seen_parents /* var seen_parents: ArrayMap[MClass, AType] */;
static val* varonce404;
val* var405 /* : String */;
char* var406 /* : NativeString */;
long var407 /* : Int */;
val* var408 /* : FlatString */;
val* var409 /* : nullable MClass */;
val* var_objectclass /* var objectclass: nullable MClass */;
val* var410 /* : ANodes[ASuperclass] */;
val* var412 /* : ANodes[ASuperclass] */;
val* var_413 /* var : ANodes[ASuperclass] */;
val* var414 /* : Iterator[ANode] */;
val* var_415 /* var : Iterator[ASuperclass] */;
short int var416 /* : Bool */;
val* var417 /* : nullable Object */;
val* var_nsc418 /* var nsc: ASuperclass */;
val* var419 /* : AType */;
val* var421 /* : AType */;
val* var_ntype422 /* var ntype: AType */;
val* var423 /* : nullable MType */;
val* var425 /* : nullable MType */;
val* var_mtype426 /* var mtype: nullable MType */;
val* var427 /* : null */;
short int var428 /* : Bool */;
short int var429 /* : Bool */;
short int var431 /* : Bool */;
short int var433 /* : Bool */;
short int var435 /* : Bool */;
int cltype436;
int idtype437;
val* var438 /* : MClass */;
val* var440 /* : MClass */;
val* var_sc /* var sc: MClass */;
short int var441 /* : Bool */;
short int var442 /* : Bool */;
short int var443 /* : Bool */;
short int var_444 /* var : Bool */;
short int var445 /* : Bool */;
short int var446 /* : Bool */;
short int var448 /* : Bool */;
short int var450 /* : Bool */;
short int var451 /* : Bool */;
val* var452 /* : Location */;
val* var454 /* : Location */;
val* var455 /* : nullable SourceFile */;
val* var457 /* : nullable SourceFile */;
val* var458 /* : null */;
short int var459 /* : Bool */;
short int var460 /* : Bool */;
short int var462 /* : Bool */;
short int var463 /* : Bool */;
short int var464 /* : Bool */;
short int var_465 /* var : Bool */;
val* var466 /* : Location */;
val* var468 /* : Location */;
val* var469 /* : nullable SourceFile */;
val* var471 /* : nullable SourceFile */;
val* var472 /* : String */;
val* var474 /* : String */;
short int var475 /* : Bool */;
short int var476 /* : Bool */;
static val* varonce477;
val* var478 /* : String */;
char* var479 /* : NativeString */;
long var480 /* : Int */;
val* var481 /* : FlatString */;
static val* varonce482;
val* var483 /* : String */;
char* var484 /* : NativeString */;
long var485 /* : Int */;
val* var486 /* : FlatString */;
static val* varonce487;
val* var488 /* : String */;
char* var489 /* : NativeString */;
long var490 /* : Int */;
val* var491 /* : FlatString */;
val* var492 /* : MClass */;
val* var494 /* : MClass */;
static val* varonce495;
val* var496 /* : String */;
char* var497 /* : NativeString */;
long var498 /* : Int */;
val* var499 /* : FlatString */;
val* var500 /* : Array[Object] */;
long var501 /* : Int */;
val* var502 /* : NativeArray[Object] */;
val* var503 /* : String */;
short int var504 /* : Bool */;
short int var505 /* : Bool */;
static val* varonce506;
val* var507 /* : String */;
char* var508 /* : NativeString */;
long var509 /* : Int */;
val* var510 /* : FlatString */;
static val* varonce511;
val* var512 /* : String */;
char* var513 /* : NativeString */;
long var514 /* : Int */;
val* var515 /* : FlatString */;
static val* varonce516;
val* var517 /* : String */;
char* var518 /* : NativeString */;
long var519 /* : Int */;
val* var520 /* : FlatString */;
val* var521 /* : MClass */;
val* var523 /* : MClass */;
static val* varonce524;
val* var525 /* : String */;
char* var526 /* : NativeString */;
long var527 /* : Int */;
val* var528 /* : FlatString */;
val* var529 /* : Array[Object] */;
long var530 /* : Int */;
val* var531 /* : NativeArray[Object] */;
val* var532 /* : String */;
var_nmodule = p0;
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var2 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count (var) on <var:ToolContext> */
var5 = var->attrs[COLOR_toolcontext__ToolContext___error_count].l; /* _error_count on <var:ToolContext> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_errcount = var3;
{
{ /* Inline modelize_class#AModule#build_classes_is_done (var_nmodule) on <var_nmodule:AModule> */
var8 = var_nmodule->attrs[COLOR_modelize_class__AModule___build_classes_is_done].s; /* _build_classes_is_done on <var_nmodule:AModule> */
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
var_nmodule->attrs[COLOR_modelize_class__AModule___build_classes_is_done].s = var9; /* _build_classes_is_done on <var_nmodule:AModule> */
RET_LABEL10:(void)0;
}
}
{
{ /* Inline modelbuilder#AModule#mmodule (var_nmodule) on <var_nmodule:AModule> */
var13 = var_nmodule->attrs[COLOR_modelbuilder__AModule___mmodule].val; /* _mmodule on <var_nmodule:AModule> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_class.nit", 279);
show_backtrace(1);
}
var_mmodule = var11;
{
{ /* Inline mmodule#MModule#in_importation (var_mmodule) on <var_mmodule:MModule> */
var16 = var_mmodule->attrs[COLOR_mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 93);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = poset__POSetElement__direct_greaters(var14);
}
var_ = var17;
{
var18 = ((val* (*)(val*))(var_->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Collection[MModule]>*/;
}
var_19 = var18;
for(;;) {
{
var20 = ((short int (*)(val*))(var_19->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_19) /* is_ok on <var_19:Iterator[MModule]>*/;
}
if (var20){
{
var21 = ((val* (*)(val*))(var_19->class->vft[COLOR_abstract_collection__Iterator__item]))(var_19) /* item on <var_19:Iterator[MModule]>*/;
}
var_imp = var21;
{
{ /* Inline modelbuilder#ModelBuilder#mmodule2nmodule (self) on <self:ModelBuilder> */
var24 = self->attrs[COLOR_modelbuilder__ModelBuilder___mmodule2nmodule].val; /* _mmodule2nmodule on <self:ModelBuilder> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule2nmodule");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 728);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
var25 = abstract_collection__MapRead__has_key(var22, var_imp);
}
var26 = !var25;
if (var26){
goto BREAK_label;
} else {
}
{
{ /* Inline modelbuilder#ModelBuilder#mmodule2nmodule (self) on <self:ModelBuilder> */
var29 = self->attrs[COLOR_modelbuilder__ModelBuilder___mmodule2nmodule].val; /* _mmodule2nmodule on <self:ModelBuilder> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule2nmodule");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 728);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
var30 = hash_collection__HashMap___91d_93d(var27, var_imp);
}
{
modelize_class__ModelBuilder__build_classes(self, var30); /* Direct call modelize_class#ModelBuilder#build_classes on <self:ModelBuilder>*/
}
BREAK_label: (void)0;
{
((void (*)(val*))(var_19->class->vft[COLOR_abstract_collection__Iterator__next]))(var_19) /* next on <var_19:Iterator[MModule]>*/;
}
} else {
goto BREAK_label31;
}
}
BREAK_label31: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_19) on <var_19:Iterator[MModule]> */
RET_LABEL32:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var35 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count (var33) on <var33:ToolContext> */
var38 = var33->attrs[COLOR_toolcontext__ToolContext___error_count].l; /* _error_count on <var33:ToolContext> */
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var36) on <var_errcount:Int> */
var42 = var_errcount == var36;
var43 = !var42;
var40 = var43;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
var39 = var40;
}
if (var39){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var46 = var_nmodule->attrs[COLOR_parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 859);
show_backtrace(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
var_47 = var44;
{
var48 = parser_nodes__ANodes__iterator(var_47);
}
var_49 = var48;
for(;;) {
{
var50 = ((short int (*)(val*))(var_49->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_49) /* is_ok on <var_49:Iterator[AClassdef]>*/;
}
if (var50){
{
var51 = ((val* (*)(val*))(var_49->class->vft[COLOR_abstract_collection__Iterator__item]))(var_49) /* item on <var_49:Iterator[AClassdef]>*/;
}
var_nclassdef = var51;
{
modelize_class__ModelBuilder__build_a_mclass(self, var_nmodule, var_nclassdef); /* Direct call modelize_class#ModelBuilder#build_a_mclass on <self:ModelBuilder>*/
}
{
((void (*)(val*))(var_49->class->vft[COLOR_abstract_collection__Iterator__next]))(var_49) /* next on <var_49:Iterator[AClassdef]>*/;
}
} else {
goto BREAK_label52;
}
}
BREAK_label52: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_49) on <var_49:Iterator[AClassdef]> */
RET_LABEL53:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var56 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count (var54) on <var54:ToolContext> */
var59 = var54->attrs[COLOR_toolcontext__ToolContext___error_count].l; /* _error_count on <var54:ToolContext> */
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var57) on <var_errcount:Int> */
var63 = var_errcount == var57;
var64 = !var63;
var61 = var64;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
var60 = var61;
}
if (var60){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var67 = var_nmodule->attrs[COLOR_parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var67 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 859);
show_backtrace(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
var_68 = var65;
{
var69 = parser_nodes__ANodes__iterator(var_68);
}
var_70 = var69;
for(;;) {
{
var71 = ((short int (*)(val*))(var_70->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_70) /* is_ok on <var_70:Iterator[AClassdef]>*/;
}
if (var71){
{
var72 = ((val* (*)(val*))(var_70->class->vft[COLOR_abstract_collection__Iterator__item]))(var_70) /* item on <var_70:Iterator[AClassdef]>*/;
}
var_nclassdef73 = var72;
{
modelize_class__ModelBuilder__build_a_mclassdef(self, var_nmodule, var_nclassdef73); /* Direct call modelize_class#ModelBuilder#build_a_mclassdef on <self:ModelBuilder>*/
}
{
((void (*)(val*))(var_70->class->vft[COLOR_abstract_collection__Iterator__next]))(var_70) /* next on <var_70:Iterator[AClassdef]>*/;
}
} else {
goto BREAK_label74;
}
}
BREAK_label74: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_70) on <var_70:Iterator[AClassdef]> */
RET_LABEL75:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var78 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count (var76) on <var76:ToolContext> */
var81 = var76->attrs[COLOR_toolcontext__ToolContext___error_count].l; /* _error_count on <var76:ToolContext> */
var79 = var81;
RET_LABEL80:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var79) on <var_errcount:Int> */
var85 = var_errcount == var79;
var86 = !var85;
var83 = var86;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
var82 = var83;
}
if (var82){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var89 = var_nmodule->attrs[COLOR_parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var89 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 859);
show_backtrace(1);
}
var87 = var89;
RET_LABEL88:(void)0;
}
}
var_90 = var87;
{
var91 = parser_nodes__ANodes__iterator(var_90);
}
var_92 = var91;
for(;;) {
{
var93 = ((short int (*)(val*))(var_92->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_92) /* is_ok on <var_92:Iterator[AClassdef]>*/;
}
if (var93){
{
var94 = ((val* (*)(val*))(var_92->class->vft[COLOR_abstract_collection__Iterator__item]))(var_92) /* item on <var_92:Iterator[AClassdef]>*/;
}
var_nclassdef95 = var94;
{
modelize_class__ModelBuilder__collect_a_mclassdef_inheritance(self, var_nmodule, var_nclassdef95); /* Direct call modelize_class#ModelBuilder#collect_a_mclassdef_inheritance on <self:ModelBuilder>*/
}
{
((void (*)(val*))(var_92->class->vft[COLOR_abstract_collection__Iterator__next]))(var_92) /* next on <var_92:Iterator[AClassdef]>*/;
}
} else {
goto BREAK_label96;
}
}
BREAK_label96: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_92) on <var_92:Iterator[AClassdef]> */
RET_LABEL97:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var100 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var100 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var98 = var100;
RET_LABEL99:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count (var98) on <var98:ToolContext> */
var103 = var98->attrs[COLOR_toolcontext__ToolContext___error_count].l; /* _error_count on <var98:ToolContext> */
var101 = var103;
RET_LABEL102:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var101) on <var_errcount:Int> */
var107 = var_errcount == var101;
var108 = !var107;
var105 = var108;
goto RET_LABEL106;
RET_LABEL106:(void)0;
}
var104 = var105;
}
if (var104){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MModule#mclassdefs (var_mmodule) on <var_mmodule:MModule> */
var111 = var_mmodule->attrs[COLOR_model__MModule___mclassdefs].val; /* _mclassdefs on <var_mmodule:MModule> */
if (unlikely(var111 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdefs");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 139);
show_backtrace(1);
}
var109 = var111;
RET_LABEL110:(void)0;
}
}
var_112 = var109;
{
var113 = array__AbstractArrayRead__iterator(var_112);
}
var_114 = var113;
for(;;) {
{
var115 = array__ArrayIterator__is_ok(var_114);
}
if (var115){
{
var116 = array__ArrayIterator__item(var_114);
}
var_mclassdef = var116;
{
model__MClassDef__add_in_hierarchy(var_mclassdef); /* Direct call model#MClassDef#add_in_hierarchy on <var_mclassdef:MClassDef>*/
}
{
array__ArrayIterator__next(var_114); /* Direct call array#ArrayIterator#next on <var_114:ArrayIterator[MClassDef]>*/
}
} else {
goto BREAK_label117;
}
}
BREAK_label117: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_114) on <var_114:ArrayIterator[MClassDef]> */
RET_LABEL118:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var121 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var121 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var119 = var121;
RET_LABEL120:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count (var119) on <var119:ToolContext> */
var124 = var119->attrs[COLOR_toolcontext__ToolContext___error_count].l; /* _error_count on <var119:ToolContext> */
var122 = var124;
RET_LABEL123:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var122) on <var_errcount:Int> */
var128 = var_errcount == var122;
var129 = !var128;
var126 = var129;
goto RET_LABEL127;
RET_LABEL127:(void)0;
}
var125 = var126;
}
if (var125){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var132 = var_nmodule->attrs[COLOR_parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var132 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 859);
show_backtrace(1);
}
var130 = var132;
RET_LABEL131:(void)0;
}
}
var_133 = var130;
{
var134 = parser_nodes__ANodes__iterator(var_133);
}
var_135 = var134;
for(;;) {
{
var136 = ((short int (*)(val*))(var_135->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_135) /* is_ok on <var_135:Iterator[AClassdef]>*/;
}
if (var136){
{
var137 = ((val* (*)(val*))(var_135->class->vft[COLOR_abstract_collection__Iterator__item]))(var_135) /* item on <var_135:Iterator[AClassdef]>*/;
}
var_nclassdef138 = var137;
{
modelize_class__ModelBuilder__check_supertypes(self, var_nmodule, var_nclassdef138); /* Direct call modelize_class#ModelBuilder#check_supertypes on <self:ModelBuilder>*/
}
{
((void (*)(val*))(var_135->class->vft[COLOR_abstract_collection__Iterator__next]))(var_135) /* next on <var_135:Iterator[AClassdef]>*/;
}
} else {
goto BREAK_label139;
}
}
BREAK_label139: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_135) on <var_135:Iterator[AClassdef]> */
RET_LABEL140:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var143 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var143 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var141 = var143;
RET_LABEL142:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count (var141) on <var141:ToolContext> */
var146 = var141->attrs[COLOR_toolcontext__ToolContext___error_count].l; /* _error_count on <var141:ToolContext> */
var144 = var146;
RET_LABEL145:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var144) on <var_errcount:Int> */
var150 = var_errcount == var144;
var151 = !var150;
var148 = var151;
goto RET_LABEL149;
RET_LABEL149:(void)0;
}
var147 = var148;
}
if (var147){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var154 = var_nmodule->attrs[COLOR_parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var154 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 859);
show_backtrace(1);
}
var152 = var154;
RET_LABEL153:(void)0;
}
}
var_155 = var152;
{
var156 = parser_nodes__ANodes__iterator(var_155);
}
var_157 = var156;
for(;;) {
{
var158 = ((short int (*)(val*))(var_157->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_157) /* is_ok on <var_157:Iterator[AClassdef]>*/;
}
if (var158){
{
var159 = ((val* (*)(val*))(var_157->class->vft[COLOR_abstract_collection__Iterator__item]))(var_157) /* item on <var_157:Iterator[AClassdef]>*/;
}
var_nclassdef160 = var159;
/* <var_nclassdef160:AClassdef> isa AStdClassdef */
cltype = type_parser_nodes__AStdClassdef.color;
idtype = type_parser_nodes__AStdClassdef.id;
if(cltype >= var_nclassdef160->type->table_size) {
var161 = 0;
} else {
var161 = var_nclassdef160->type->type_table[cltype] == idtype;
}
if (var161){
{
{ /* Inline modelize_class#AClassdef#mclassdef (var_nclassdef160) on <var_nclassdef160:AClassdef(AStdClassdef)> */
var164 = var_nclassdef160->attrs[COLOR_modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_nclassdef160:AClassdef(AStdClassdef)> */
var162 = var164;
RET_LABEL163:(void)0;
}
}
var_mclassdef165 = var162;
{
{ /* Inline parser_nodes#AStdClassdef#n_formaldefs (var_nclassdef160) on <var_nclassdef160:AClassdef(AStdClassdef)> */
var168 = var_nclassdef160->attrs[COLOR_parser_nodes__AStdClassdef___n_formaldefs].val; /* _n_formaldefs on <var_nclassdef160:AClassdef(AStdClassdef)> */
if (unlikely(var168 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_formaldefs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 940);
show_backtrace(1);
}
var166 = var168;
RET_LABEL167:(void)0;
}
}
var_169 = var166;
{
var170 = parser_nodes__ANodes__iterator(var_169);
}
var_171 = var170;
for(;;) {
{
var172 = ((short int (*)(val*))(var_171->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_171) /* is_ok on <var_171:Iterator[AFormaldef]>*/;
}
if (var172){
{
var173 = ((val* (*)(val*))(var_171->class->vft[COLOR_abstract_collection__Iterator__item]))(var_171) /* item on <var_171:Iterator[AFormaldef]>*/;
}
var_nfd = var173;
{
{ /* Inline parser_nodes#AFormaldef#n_type (var_nfd) on <var_nfd:AFormaldef> */
var176 = var_nfd->attrs[COLOR_parser_nodes__AFormaldef___n_type].val; /* _n_type on <var_nfd:AFormaldef> */
var174 = var176;
RET_LABEL175:(void)0;
}
}
var_nfdt = var174;
var178 = NULL;
if (var_nfdt == NULL) {
var179 = 0; /* is null */
} else {
var179 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nfdt,var178) on <var_nfdt:nullable AType> */
var_other = var178;
{
var183 = ((short int (*)(val*, val*))(var_nfdt->class->vft[COLOR_kernel__Object___61d_61d]))(var_nfdt, var_other) /* == on <var_nfdt:nullable AType(AType)>*/;
var182 = var183;
}
var184 = !var182;
var180 = var184;
goto RET_LABEL181;
RET_LABEL181:(void)0;
}
var179 = var180;
}
var_185 = var179;
if (var179){
{
{ /* Inline modelize_class#AType#mtype (var_nfdt) on <var_nfdt:nullable AType(AType)> */
var188 = var_nfdt->attrs[COLOR_modelize_class__AType___mtype].val; /* _mtype on <var_nfdt:nullable AType(AType)> */
var186 = var188;
RET_LABEL187:(void)0;
}
}
var189 = NULL;
if (var186 == NULL) {
var190 = 0; /* is null */
} else {
var190 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var186,var189) on <var186:nullable MType> */
var_other = var189;
{
var194 = ((short int (*)(val*, val*))(var186->class->vft[COLOR_kernel__Object___61d_61d]))(var186, var_other) /* == on <var186:nullable MType(MType)>*/;
var193 = var194;
}
var195 = !var193;
var191 = var195;
goto RET_LABEL192;
RET_LABEL192:(void)0;
}
var190 = var191;
}
var177 = var190;
} else {
var177 = var_185;
}
if (var177){
{
var196 = modelize_class__ModelBuilder__resolve_mtype(self, var_mmodule, var_mclassdef165, var_nfdt);
}
var_bound = var196;
var197 = NULL;
if (var_bound == NULL) {
var198 = 1; /* is null */
} else {
var198 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_bound,var197) on <var_bound:nullable MType> */
var_other201 = var197;
{
{ /* Inline kernel#Object#is_same_instance (var_bound,var_other201) on <var_bound:nullable MType(MType)> */
var204 = var_bound == var_other201;
var202 = var204;
goto RET_LABEL203;
RET_LABEL203:(void)0;
}
}
var199 = var202;
goto RET_LABEL200;
RET_LABEL200:(void)0;
}
var198 = var199;
}
if (var198){
goto RET_LABEL;
} else {
}
} else {
}
{
((void (*)(val*))(var_171->class->vft[COLOR_abstract_collection__Iterator__next]))(var_171) /* next on <var_171:Iterator[AFormaldef]>*/;
}
} else {
goto BREAK_label205;
}
}
BREAK_label205: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_171) on <var_171:Iterator[AFormaldef]> */
RET_LABEL206:(void)0;
}
}
{
{ /* Inline parser_nodes#AStdClassdef#n_superclasses (var_nclassdef160) on <var_nclassdef160:AClassdef(AStdClassdef)> */
var209 = var_nclassdef160->attrs[COLOR_parser_nodes__AStdClassdef___n_superclasses].val; /* _n_superclasses on <var_nclassdef160:AClassdef(AStdClassdef)> */
if (unlikely(var209 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_superclasses");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 942);
show_backtrace(1);
}
var207 = var209;
RET_LABEL208:(void)0;
}
}
var_210 = var207;
{
var211 = parser_nodes__ANodes__iterator(var_210);
}
var_212 = var211;
for(;;) {
{
var213 = ((short int (*)(val*))(var_212->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_212) /* is_ok on <var_212:Iterator[ASuperclass]>*/;
}
if (var213){
{
var214 = ((val* (*)(val*))(var_212->class->vft[COLOR_abstract_collection__Iterator__item]))(var_212) /* item on <var_212:Iterator[ASuperclass]>*/;
}
var_nsc = var214;
{
{ /* Inline parser_nodes#ASuperclass#n_type (var_nsc) on <var_nsc:ASuperclass> */
var217 = var_nsc->attrs[COLOR_parser_nodes__ASuperclass___n_type].val; /* _n_type on <var_nsc:ASuperclass> */
if (unlikely(var217 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1006);
show_backtrace(1);
}
var215 = var217;
RET_LABEL216:(void)0;
}
}
var_ntype = var215;
{
{ /* Inline modelize_class#AType#mtype (var_ntype) on <var_ntype:AType> */
var220 = var_ntype->attrs[COLOR_modelize_class__AType___mtype].val; /* _mtype on <var_ntype:AType> */
var218 = var220;
RET_LABEL219:(void)0;
}
}
var221 = NULL;
if (var218 == NULL) {
var222 = 0; /* is null */
} else {
var222 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var218,var221) on <var218:nullable MType> */
var_other = var221;
{
var226 = ((short int (*)(val*, val*))(var218->class->vft[COLOR_kernel__Object___61d_61d]))(var218, var_other) /* == on <var218:nullable MType(MType)>*/;
var225 = var226;
}
var227 = !var225;
var223 = var227;
goto RET_LABEL224;
RET_LABEL224:(void)0;
}
var222 = var223;
}
if (var222){
{
var228 = modelize_class__ModelBuilder__resolve_mtype(self, var_mmodule, var_mclassdef165, var_ntype);
}
var_mtype = var228;
var229 = NULL;
if (var_mtype == NULL) {
var230 = 1; /* is null */
} else {
var230 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var229) on <var_mtype:nullable MType> */
var_other201 = var229;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other201) on <var_mtype:nullable MType(MType)> */
var235 = var_mtype == var_other201;
var233 = var235;
goto RET_LABEL234;
RET_LABEL234:(void)0;
}
}
var231 = var233;
goto RET_LABEL232;
RET_LABEL232:(void)0;
}
var230 = var231;
}
if (var230){
goto RET_LABEL;
} else {
}
} else {
}
{
((void (*)(val*))(var_212->class->vft[COLOR_abstract_collection__Iterator__next]))(var_212) /* next on <var_212:Iterator[ASuperclass]>*/;
}
} else {
goto BREAK_label236;
}
}
BREAK_label236: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_212) on <var_212:Iterator[ASuperclass]> */
RET_LABEL237:(void)0;
}
}
} else {
}
{
((void (*)(val*))(var_157->class->vft[COLOR_abstract_collection__Iterator__next]))(var_157) /* next on <var_157:Iterator[AClassdef]>*/;
}
} else {
goto BREAK_label238;
}
}
BREAK_label238: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_157) on <var_157:Iterator[AClassdef]> */
RET_LABEL239:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var242 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var242 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var240 = var242;
RET_LABEL241:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count (var240) on <var240:ToolContext> */
var245 = var240->attrs[COLOR_toolcontext__ToolContext___error_count].l; /* _error_count on <var240:ToolContext> */
var243 = var245;
RET_LABEL244:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var243) on <var_errcount:Int> */
var249 = var_errcount == var243;
var250 = !var249;
var247 = var250;
goto RET_LABEL248;
RET_LABEL248:(void)0;
}
var246 = var247;
}
if (var246){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var253 = var_nmodule->attrs[COLOR_parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var253 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 859);
show_backtrace(1);
}
var251 = var253;
RET_LABEL252:(void)0;
}
}
var_254 = var251;
{
var255 = parser_nodes__ANodes__iterator(var_254);
}
var_256 = var255;
for(;;) {
{
var257 = ((short int (*)(val*))(var_256->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_256) /* is_ok on <var_256:Iterator[AClassdef]>*/;
}
if (var257){
{
var258 = ((val* (*)(val*))(var_256->class->vft[COLOR_abstract_collection__Iterator__item]))(var_256) /* item on <var_256:Iterator[AClassdef]>*/;
}
var_nclassdef259 = var258;
{
{ /* Inline modelize_class#AClassdef#mclassdef (var_nclassdef259) on <var_nclassdef259:AClassdef> */
var262 = var_nclassdef259->attrs[COLOR_modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_nclassdef259:AClassdef> */
var260 = var262;
RET_LABEL261:(void)0;
}
}
if (unlikely(var260 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_class.nit", 350);
show_backtrace(1);
}
var_mclassdef263 = var260;
var264 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassmodel__MClassType);
{
((void (*)(val*))(var264->class->vft[COLOR_kernel__Object__init]))(var264) /* init on <var264:HashMap[MClass, MClassType]>*/;
}
var_superclasses = var264;
{
{ /* Inline model#MClassDef#in_hierarchy (var_mclassdef263) on <var_mclassdef263:MClassDef> */
var267 = var_mclassdef263->attrs[COLOR_model__MClassDef___in_hierarchy].val; /* _in_hierarchy on <var_mclassdef263:MClassDef> */
var265 = var267;
RET_LABEL266:(void)0;
}
}
if (var265 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_class.nit", 352);
show_backtrace(1);
} else {
var268 = poset__POSetElement__greaters(var265);
}
var_269 = var268;
{
var270 = ((val* (*)(val*))(var_269->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_269) /* iterator on <var_269:Collection[MClassDef]>*/;
}
var_271 = var270;
for(;;) {
{
var272 = ((short int (*)(val*))(var_271->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_271) /* is_ok on <var_271:Iterator[MClassDef]>*/;
}
if (var272){
{
var273 = ((val* (*)(val*))(var_271->class->vft[COLOR_abstract_collection__Iterator__item]))(var_271) /* item on <var_271:Iterator[MClassDef]>*/;
}
var_scd = var273;
{
{ /* Inline model#MClassDef#supertypes (var_scd) on <var_scd:MClassDef> */
var276 = var_scd->attrs[COLOR_model__MClassDef___supertypes].val; /* _supertypes on <var_scd:MClassDef> */
if (unlikely(var276 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supertypes");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 534);
show_backtrace(1);
}
var274 = var276;
RET_LABEL275:(void)0;
}
}
var_277 = var274;
{
var278 = array__AbstractArrayRead__iterator(var_277);
}
var_279 = var278;
for(;;) {
{
var280 = array__ArrayIterator__is_ok(var_279);
}
if (var280){
{
var281 = array__ArrayIterator__item(var_279);
}
var_st = var281;
{
{ /* Inline model#MClassType#mclass (var_st) on <var_st:MClassType> */
var284 = var_st->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_st:MClassType> */
if (unlikely(var284 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var282 = var284;
RET_LABEL283:(void)0;
}
}
{
var285 = abstract_collection__MapRead__has_key(var_superclasses, var282);
}
var286 = !var285;
if (var286){
{
{ /* Inline model#MClassType#mclass (var_st) on <var_st:MClassType> */
var289 = var_st->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_st:MClassType> */
if (unlikely(var289 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var287 = var289;
RET_LABEL288:(void)0;
}
}
{
hash_collection__HashMap___91d_93d_61d(var_superclasses, var287, var_st); /* Direct call hash_collection#HashMap#[]= on <var_superclasses:HashMap[MClass, MClassType]>*/
}
} else {
{
{ /* Inline model#MClassType#mclass (var_st) on <var_st:MClassType> */
var292 = var_st->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_st:MClassType> */
if (unlikely(var292 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var290 = var292;
RET_LABEL291:(void)0;
}
}
{
var293 = hash_collection__HashMap___91d_93d(var_superclasses, var290);
}
{
{ /* Inline kernel#Object#!= (var293,var_st) on <var293:nullable Object(MClassType)> */
var_other = var_st;
{
var298 = ((short int (*)(val*, val*))(var293->class->vft[COLOR_kernel__Object___61d_61d]))(var293, var_other) /* == on <var293:nullable Object(MClassType)>*/;
var297 = var298;
}
var299 = !var297;
var295 = var299;
goto RET_LABEL296;
RET_LABEL296:(void)0;
}
var294 = var295;
}
if (var294){
{
{ /* Inline model#MClassType#mclass (var_st) on <var_st:MClassType> */
var302 = var_st->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_st:MClassType> */
if (unlikely(var302 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var300 = var302;
RET_LABEL301:(void)0;
}
}
{
var303 = hash_collection__HashMap___91d_93d(var_superclasses, var300);
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef263) on <var_mclassdef263:MClassDef> */
var306 = var_mclassdef263->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_mclassdef263:MClassDef> */
if (unlikely(var306 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var304 = var306;
RET_LABEL305:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var304) on <var304:MClass> */
var309 = var304->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var304:MClass> */
if (unlikely(var309 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var307 = var309;
RET_LABEL308:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef263) on <var_mclassdef263:MClassDef> */
var312 = var_mclassdef263->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef263:MClassDef> */
if (unlikely(var312 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var310 = var312;
RET_LABEL311:(void)0;
}
}
var313 = 0;
{
var314 = ((val* (*)(val*, val*, val*, val*, short int))(var303->class->vft[COLOR_model__MType__resolve_for]))(var303, var307, var310, var_mmodule, var313) /* resolve_for on <var303:nullable Object(MClassType)>*/;
}
var_st1 = var314;
{
{ /* Inline model#MClassDef#mclass (var_mclassdef263) on <var_mclassdef263:MClassDef> */
var317 = var_mclassdef263->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_mclassdef263:MClassDef> */
if (unlikely(var317 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var315 = var317;
RET_LABEL316:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var315) on <var315:MClass> */
var320 = var315->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var315:MClass> */
if (unlikely(var320 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var318 = var320;
RET_LABEL319:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef263) on <var_mclassdef263:MClassDef> */
var323 = var_mclassdef263->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef263:MClassDef> */
if (unlikely(var323 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var321 = var323;
RET_LABEL322:(void)0;
}
}
var324 = 0;
{
var325 = ((val* (*)(val*, val*, val*, val*, short int))(var_st->class->vft[COLOR_model__MType__resolve_for]))(var_st, var318, var321, var_mmodule, var324) /* resolve_for on <var_st:MClassType>*/;
}
var_st2 = var325;
{
{ /* Inline kernel#Object#!= (var_st1,var_st2) on <var_st1:MClassType> */
var_other = var_st2;
{
var330 = ((short int (*)(val*, val*))(var_st1->class->vft[COLOR_kernel__Object___61d_61d]))(var_st1, var_other) /* == on <var_st1:MClassType>*/;
var329 = var330;
}
var331 = !var329;
var327 = var331;
goto RET_LABEL328;
RET_LABEL328:(void)0;
}
var326 = var327;
}
if (var326){
if (varonce) {
var332 = varonce;
} else {
var333 = "Error: Incompatibles ancestors for ";
var334 = 35;
var335 = string__NativeString__to_s_with_length(var333, var334);
var332 = var335;
varonce = var332;
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef263) on <var_mclassdef263:MClassDef> */
var338 = var_mclassdef263->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_mclassdef263:MClassDef> */
if (unlikely(var338 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var336 = var338;
RET_LABEL337:(void)0;
}
}
if (varonce339) {
var340 = varonce339;
} else {
var341 = ": ";
var342 = 2;
var343 = string__NativeString__to_s_with_length(var341, var342);
var340 = var343;
varonce339 = var340;
}
if (varonce344) {
var345 = varonce344;
} else {
var346 = ", ";
var347 = 2;
var348 = string__NativeString__to_s_with_length(var346, var347);
var345 = var348;
varonce344 = var345;
}
var349 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var349 = array_instance Array[Object] */
var350 = 6;
var351 = NEW_array__NativeArray(var350, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var351)->values[0] = (val*) var332;
((struct instance_array__NativeArray*)var351)->values[1] = (val*) var336;
((struct instance_array__NativeArray*)var351)->values[2] = (val*) var340;
((struct instance_array__NativeArray*)var351)->values[3] = (val*) var_st1;
((struct instance_array__NativeArray*)var351)->values[4] = (val*) var345;
((struct instance_array__NativeArray*)var351)->values[5] = (val*) var_st2;
{
((void (*)(val*, val*, long))(var349->class->vft[COLOR_array__Array__with_native]))(var349, var351, var350) /* with_native on <var349:Array[Object]>*/;
}
}
{
var352 = ((val* (*)(val*))(var349->class->vft[COLOR_string__Object__to_s]))(var349) /* to_s on <var349:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_nclassdef259, var352); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
} else {
}
}
{
array__ArrayIterator__next(var_279); /* Direct call array#ArrayIterator#next on <var_279:ArrayIterator[MClassType]>*/
}
} else {
goto BREAK_label353;
}
}
BREAK_label353: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_279) on <var_279:ArrayIterator[MClassType]> */
RET_LABEL354:(void)0;
}
}
{
((void (*)(val*))(var_271->class->vft[COLOR_abstract_collection__Iterator__next]))(var_271) /* next on <var_271:Iterator[MClassDef]>*/;
}
} else {
goto BREAK_label355;
}
}
BREAK_label355: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_271) on <var_271:Iterator[MClassDef]> */
RET_LABEL356:(void)0;
}
}
{
((void (*)(val*))(var_256->class->vft[COLOR_abstract_collection__Iterator__next]))(var_256) /* next on <var_256:Iterator[AClassdef]>*/;
}
} else {
goto BREAK_label357;
}
}
BREAK_label357: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_256) on <var_256:Iterator[AClassdef]> */
RET_LABEL358:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var361 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var361 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var359 = var361;
RET_LABEL360:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count (var359) on <var359:ToolContext> */
var364 = var359->attrs[COLOR_toolcontext__ToolContext___error_count].l; /* _error_count on <var359:ToolContext> */
var362 = var364;
RET_LABEL363:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var362) on <var_errcount:Int> */
var368 = var_errcount == var362;
var369 = !var368;
var366 = var369;
goto RET_LABEL367;
RET_LABEL367:(void)0;
}
var365 = var366;
}
if (var365){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var372 = var_nmodule->attrs[COLOR_parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var372 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 859);
show_backtrace(1);
}
var370 = var372;
RET_LABEL371:(void)0;
}
}
var_373 = var370;
{
var374 = parser_nodes__ANodes__iterator(var_373);
}
var_375 = var374;
for(;;) {
{
var376 = ((short int (*)(val*))(var_375->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_375) /* is_ok on <var_375:Iterator[AClassdef]>*/;
}
if (var376){
{
var377 = ((val* (*)(val*))(var_375->class->vft[COLOR_abstract_collection__Iterator__item]))(var_375) /* item on <var_375:Iterator[AClassdef]>*/;
}
var_nclassdef378 = var377;
/* <var_nclassdef378:AClassdef> isa AStdClassdef */
cltype380 = type_parser_nodes__AStdClassdef.color;
idtype381 = type_parser_nodes__AStdClassdef.id;
if(cltype380 >= var_nclassdef378->type->table_size) {
var379 = 0;
} else {
var379 = var_nclassdef378->type->type_table[cltype380] == idtype381;
}
var382 = !var379;
if (var382){
goto BREAK_label383;
} else {
}
{
{ /* Inline modelize_class#AClassdef#mclassdef (var_nclassdef378) on <var_nclassdef378:AClassdef(AStdClassdef)> */
var386 = var_nclassdef378->attrs[COLOR_modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_nclassdef378:AClassdef(AStdClassdef)> */
var384 = var386;
RET_LABEL385:(void)0;
}
}
if (unlikely(var384 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_class.nit", 374);
show_backtrace(1);
}
var_mclassdef387 = var384;
var388 = NEW_array__Array(&type_array__Arraymodel__MClass);
{
((void (*)(val*))(var388->class->vft[COLOR_kernel__Object__init]))(var388) /* init on <var388:Array[MClass]>*/;
}
var_parents = var388;
{
{ /* Inline model#MClassDef#in_hierarchy (var_mclassdef387) on <var_mclassdef387:MClassDef> */
var391 = var_mclassdef387->attrs[COLOR_model__MClassDef___in_hierarchy].val; /* _in_hierarchy on <var_mclassdef387:MClassDef> */
var389 = var391;
RET_LABEL390:(void)0;
}
}
if (var389 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_class.nit", 379);
show_backtrace(1);
} else {
var392 = poset__POSetElement__direct_greaters(var389);
}
var_393 = var392;
{
var394 = ((val* (*)(val*))(var_393->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_393) /* iterator on <var_393:Collection[MClassDef]>*/;
}
var_395 = var394;
for(;;) {
{
var396 = ((short int (*)(val*))(var_395->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_395) /* is_ok on <var_395:Iterator[MClassDef]>*/;
}
if (var396){
{
var397 = ((val* (*)(val*))(var_395->class->vft[COLOR_abstract_collection__Iterator__item]))(var_395) /* item on <var_395:Iterator[MClassDef]>*/;
}
var_sup = var397;
{
{ /* Inline model#MClassDef#mclass (var_sup) on <var_sup:MClassDef> */
var400 = var_sup->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_sup:MClassDef> */
if (unlikely(var400 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var398 = var400;
RET_LABEL399:(void)0;
}
}
{
array__Array__add(var_parents, var398); /* Direct call array#Array#add on <var_parents:Array[MClass]>*/
}
{
((void (*)(val*))(var_395->class->vft[COLOR_abstract_collection__Iterator__next]))(var_395) /* next on <var_395:Iterator[MClassDef]>*/;
}
} else {
goto BREAK_label401;
}
}
BREAK_label401: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_395) on <var_395:Iterator[MClassDef]> */
RET_LABEL402:(void)0;
}
}
var403 = NEW_array__ArrayMap(&type_array__ArrayMapmodel__MClassparser_nodes__AType);
{
((void (*)(val*))(var403->class->vft[COLOR_kernel__Object__init]))(var403) /* init on <var403:ArrayMap[MClass, AType]>*/;
}
var_seen_parents = var403;
if (varonce404) {
var405 = varonce404;
} else {
var406 = "Object";
var407 = 6;
var408 = string__NativeString__to_s_with_length(var406, var407);
var405 = var408;
varonce404 = var405;
}
{
var409 = modelbuilder__ModelBuilder__try_get_mclass_by_name(self, var_nmodule, var_mmodule, var405);
}
var_objectclass = var409;
{
{ /* Inline parser_nodes#AStdClassdef#n_superclasses (var_nclassdef378) on <var_nclassdef378:AClassdef(AStdClassdef)> */
var412 = var_nclassdef378->attrs[COLOR_parser_nodes__AStdClassdef___n_superclasses].val; /* _n_superclasses on <var_nclassdef378:AClassdef(AStdClassdef)> */
if (unlikely(var412 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_superclasses");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 942);
show_backtrace(1);
}
var410 = var412;
RET_LABEL411:(void)0;
}
}
var_413 = var410;
{
var414 = parser_nodes__ANodes__iterator(var_413);
}
var_415 = var414;
for(;;) {
{
var416 = ((short int (*)(val*))(var_415->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_415) /* is_ok on <var_415:Iterator[ASuperclass]>*/;
}
if (var416){
{
var417 = ((val* (*)(val*))(var_415->class->vft[COLOR_abstract_collection__Iterator__item]))(var_415) /* item on <var_415:Iterator[ASuperclass]>*/;
}
var_nsc418 = var417;
{
{ /* Inline parser_nodes#ASuperclass#n_type (var_nsc418) on <var_nsc418:ASuperclass> */
var421 = var_nsc418->attrs[COLOR_parser_nodes__ASuperclass___n_type].val; /* _n_type on <var_nsc418:ASuperclass> */
if (unlikely(var421 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1006);
show_backtrace(1);
}
var419 = var421;
RET_LABEL420:(void)0;
}
}
var_ntype422 = var419;
{
{ /* Inline modelize_class#AType#mtype (var_ntype422) on <var_ntype422:AType> */
var425 = var_ntype422->attrs[COLOR_modelize_class__AType___mtype].val; /* _mtype on <var_ntype422:AType> */
var423 = var425;
RET_LABEL424:(void)0;
}
}
var_mtype426 = var423;
var427 = NULL;
if (var_mtype426 == NULL) {
var428 = 1; /* is null */
} else {
var428 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype426,var427) on <var_mtype426:nullable MType> */
var_other201 = var427;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype426,var_other201) on <var_mtype426:nullable MType(MType)> */
var433 = var_mtype426 == var_other201;
var431 = var433;
goto RET_LABEL432;
RET_LABEL432:(void)0;
}
}
var429 = var431;
goto RET_LABEL430;
RET_LABEL430:(void)0;
}
var428 = var429;
}
if (var428){
goto BREAK_label434;
} else {
}
/* <var_mtype426:nullable MType(MType)> isa MClassType */
cltype436 = type_model__MClassType.color;
idtype437 = type_model__MClassType.id;
if(cltype436 >= var_mtype426->type->table_size) {
var435 = 0;
} else {
var435 = var_mtype426->type->type_table[cltype436] == idtype437;
}
if (unlikely(!var435)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_class.nit", 394);
show_backtrace(1);
}
{
{ /* Inline model#MClassType#mclass (var_mtype426) on <var_mtype426:nullable MType(MClassType)> */
var440 = var_mtype426->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype426:nullable MType(MClassType)> */
if (unlikely(var440 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var438 = var440;
RET_LABEL439:(void)0;
}
}
var_sc = var438;
{
var442 = array__AbstractArrayRead__has(var_parents, var_sc);
}
var443 = !var442;
var_444 = var443;
if (var443){
var441 = var_444;
} else {
{
{ /* Inline kernel#Object#== (var_sc,var_objectclass) on <var_sc:MClass> */
var_other201 = var_objectclass;
{
{ /* Inline kernel#Object#is_same_instance (var_sc,var_other201) on <var_sc:MClass> */
var450 = var_sc == var_other201;
var448 = var450;
goto RET_LABEL449;
RET_LABEL449:(void)0;
}
}
var446 = var448;
goto RET_LABEL447;
RET_LABEL447:(void)0;
}
var445 = var446;
}
var441 = var445;
}
if (var441){
{
{ /* Inline parser_nodes#ANode#location (var_ntype422) on <var_ntype422:AType> */
var454 = var_ntype422->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <var_ntype422:AType> */
if (unlikely(var454 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 23);
show_backtrace(1);
}
var452 = var454;
RET_LABEL453:(void)0;
}
}
{
{ /* Inline location#Location#file (var452) on <var452:Location> */
var457 = var452->attrs[COLOR_location__Location___file].val; /* _file on <var452:Location> */
var455 = var457;
RET_LABEL456:(void)0;
}
}
var458 = NULL;
if (var455 == NULL) {
var459 = 0; /* is null */
} else {
var459 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var455,var458) on <var455:nullable SourceFile> */
var_other = var458;
{
var463 = ((short int (*)(val*, val*))(var455->class->vft[COLOR_kernel__Object___61d_61d]))(var455, var_other) /* == on <var455:nullable SourceFile(SourceFile)>*/;
var462 = var463;
}
var464 = !var462;
var460 = var464;
goto RET_LABEL461;
RET_LABEL461:(void)0;
}
var459 = var460;
}
var_465 = var459;
if (var459){
{
{ /* Inline parser_nodes#ANode#location (var_ntype422) on <var_ntype422:AType> */
var468 = var_ntype422->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <var_ntype422:AType> */
if (unlikely(var468 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 23);
show_backtrace(1);
}
var466 = var468;
RET_LABEL467:(void)0;
}
}
{
{ /* Inline location#Location#file (var466) on <var466:Location> */
var471 = var466->attrs[COLOR_location__Location___file].val; /* _file on <var466:Location> */
var469 = var471;
RET_LABEL470:(void)0;
}
}
if (var469 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_class.nit", 398);
show_backtrace(1);
} else {
{ /* Inline location#SourceFile#filename (var469) on <var469:nullable SourceFile> */
if (unlikely(var469 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "location.nit", 22);
show_backtrace(1);
}
var474 = var469->attrs[COLOR_location__SourceFile___filename].val; /* _filename on <var469:nullable SourceFile> */
if (unlikely(var474 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", "location.nit", 22);
show_backtrace(1);
}
var472 = var474;
RET_LABEL473:(void)0;
}
}
{
var475 = string__Text__is_empty(var472);
}
var476 = !var475;
var451 = var476;
} else {
var451 = var_465;
}
if (var451){
if (varonce477) {
var478 = varonce477;
} else {
var479 = "useless-superclass";
var480 = 18;
var481 = string__NativeString__to_s_with_length(var479, var480);
var478 = var481;
varonce477 = var478;
}
if (varonce482) {
var483 = varonce482;
} else {
var484 = "Warning: superfluous super-class ";
var485 = 33;
var486 = string__NativeString__to_s_with_length(var484, var485);
var483 = var486;
varonce482 = var483;
}
if (varonce487) {
var488 = varonce487;
} else {
var489 = " in class ";
var490 = 10;
var491 = string__NativeString__to_s_with_length(var489, var490);
var488 = var491;
varonce487 = var488;
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef387) on <var_mclassdef387:MClassDef> */
var494 = var_mclassdef387->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_mclassdef387:MClassDef> */
if (unlikely(var494 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var492 = var494;
RET_LABEL493:(void)0;
}
}
if (varonce495) {
var496 = varonce495;
} else {
var497 = ".";
var498 = 1;
var499 = string__NativeString__to_s_with_length(var497, var498);
var496 = var499;
varonce495 = var496;
}
var500 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var500 = array_instance Array[Object] */
var501 = 5;
var502 = NEW_array__NativeArray(var501, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var502)->values[0] = (val*) var483;
((struct instance_array__NativeArray*)var502)->values[1] = (val*) var_mtype426;
((struct instance_array__NativeArray*)var502)->values[2] = (val*) var488;
((struct instance_array__NativeArray*)var502)->values[3] = (val*) var492;
((struct instance_array__NativeArray*)var502)->values[4] = (val*) var496;
{
((void (*)(val*, val*, long))(var500->class->vft[COLOR_array__Array__with_native]))(var500, var502, var501) /* with_native on <var500:Array[Object]>*/;
}
}
{
var503 = ((val* (*)(val*))(var500->class->vft[COLOR_string__Object__to_s]))(var500) /* to_s on <var500:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__warning(self, var_ntype422, var478, var503); /* Direct call modelbuilder#ModelBuilder#warning on <self:ModelBuilder>*/
}
} else {
}
} else {
{
var504 = abstract_collection__MapRead__has_key(var_seen_parents, var_sc);
}
var505 = !var504;
if (var505){
{
array__ArrayMap___91d_93d_61d(var_seen_parents, var_sc, var_ntype422); /* Direct call array#ArrayMap#[]= on <var_seen_parents:ArrayMap[MClass, AType]>*/
}
} else {
if (varonce506) {
var507 = varonce506;
} else {
var508 = "useless-superclass";
var509 = 18;
var510 = string__NativeString__to_s_with_length(var508, var509);
var507 = var510;
varonce506 = var507;
}
if (varonce511) {
var512 = varonce511;
} else {
var513 = "Warning: duplicated super-class ";
var514 = 32;
var515 = string__NativeString__to_s_with_length(var513, var514);
var512 = var515;
varonce511 = var512;
}
if (varonce516) {
var517 = varonce516;
} else {
var518 = " in class ";
var519 = 10;
var520 = string__NativeString__to_s_with_length(var518, var519);
var517 = var520;
varonce516 = var517;
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef387) on <var_mclassdef387:MClassDef> */
var523 = var_mclassdef387->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_mclassdef387:MClassDef> */
if (unlikely(var523 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var521 = var523;
RET_LABEL522:(void)0;
}
}
if (varonce524) {
var525 = varonce524;
} else {
var526 = ".";
var527 = 1;
var528 = string__NativeString__to_s_with_length(var526, var527);
var525 = var528;
varonce524 = var525;
}
var529 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var529 = array_instance Array[Object] */
var530 = 5;
var531 = NEW_array__NativeArray(var530, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var531)->values[0] = (val*) var512;
((struct instance_array__NativeArray*)var531)->values[1] = (val*) var_mtype426;
((struct instance_array__NativeArray*)var531)->values[2] = (val*) var517;
((struct instance_array__NativeArray*)var531)->values[3] = (val*) var521;
((struct instance_array__NativeArray*)var531)->values[4] = (val*) var525;
{
((void (*)(val*, val*, long))(var529->class->vft[COLOR_array__Array__with_native]))(var529, var531, var530) /* with_native on <var529:Array[Object]>*/;
}
}
{
var532 = ((val* (*)(val*))(var529->class->vft[COLOR_string__Object__to_s]))(var529) /* to_s on <var529:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__warning(self, var_ntype422, var507, var532); /* Direct call modelbuilder#ModelBuilder#warning on <self:ModelBuilder>*/
}
}
}
BREAK_label434: (void)0;
{
((void (*)(val*))(var_415->class->vft[COLOR_abstract_collection__Iterator__next]))(var_415) /* next on <var_415:Iterator[ASuperclass]>*/;
}
} else {
goto BREAK_label533;
}
}
BREAK_label533: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_415) on <var_415:Iterator[ASuperclass]> */
RET_LABEL534:(void)0;
}
}
BREAK_label383: (void)0;
{
((void (*)(val*))(var_375->class->vft[COLOR_abstract_collection__Iterator__next]))(var_375) /* next on <var_375:Iterator[AClassdef]>*/;
}
} else {
goto BREAK_label535;
}
}
BREAK_label535: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_375) on <var_375:Iterator[AClassdef]> */
RET_LABEL536:(void)0;
}
}
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#build_classes for (self: Object, AModule) */
void VIRTUAL_modelize_class__ModelBuilder__build_classes(val* self, val* p0) {
modelize_class__ModelBuilder__build_classes(self, p0); /* Direct call modelize_class#ModelBuilder#build_classes on <self:Object(ModelBuilder)>*/
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#mclassdef2nclassdef for (self: ModelBuilder): HashMap[MClassDef, AClassdef] */
val* modelize_class__ModelBuilder__mclassdef2nclassdef(val* self) {
val* var /* : HashMap[MClassDef, AClassdef] */;
val* var1 /* : HashMap[MClassDef, AClassdef] */;
var1 = self->attrs[COLOR_modelize_class__ModelBuilder___mclassdef2nclassdef].val; /* _mclassdef2nclassdef on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef2nclassdef");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_class.nit", 410);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#ModelBuilder#mclassdef2nclassdef for (self: Object): HashMap[MClassDef, AClassdef] */
val* VIRTUAL_modelize_class__ModelBuilder__mclassdef2nclassdef(val* self) {
val* var /* : HashMap[MClassDef, AClassdef] */;
val* var1 /* : HashMap[MClassDef, AClassdef] */;
val* var3 /* : HashMap[MClassDef, AClassdef] */;
{ /* Inline modelize_class#ModelBuilder#mclassdef2nclassdef (self) on <self:Object(ModelBuilder)> */
var3 = self->attrs[COLOR_modelize_class__ModelBuilder___mclassdef2nclassdef].val; /* _mclassdef2nclassdef on <self:Object(ModelBuilder)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef2nclassdef");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_class.nit", 410);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#ModelBuilder#resolve_mtype_unchecked for (self: ModelBuilder, MModule, nullable MClassDef, AType, Bool): nullable MType */
val* modelize_class__ModelBuilder__resolve_mtype_unchecked(val* self, val* p0, val* p1, val* p2, short int p3) {
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
short int var12 /* : Bool */;
short int var_ /* var : Bool */;
val* var13 /* : nullable MProperty */;
short int var14 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_prop /* var prop: nullable MVirtualTypeProp */;
val* var15 /* : null */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : ANodes[AType] */;
val* var24 /* : ANodes[AType] */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
static val* varonce;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : FlatString */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : FlatString */;
val* var36 /* : Array[Object] */;
long var37 /* : Int */;
val* var38 /* : NativeArray[Object] */;
val* var39 /* : String */;
val* var40 /* : MVirtualType */;
val* var42 /* : MVirtualType */;
val* var_res /* var res: MType */;
val* var43 /* : nullable TKwnullable */;
val* var45 /* : nullable TKwnullable */;
val* var46 /* : null */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
val* var53 /* : MType */;
val* var55 /* : null */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
val* var62 /* : MClass */;
val* var64 /* : MClass */;
val* var65 /* : Array[MParameterType] */;
val* var67 /* : Array[MParameterType] */;
val* var_68 /* var : Array[MParameterType] */;
val* var69 /* : ArrayIterator[nullable Object] */;
val* var_70 /* var : ArrayIterator[MParameterType] */;
short int var71 /* : Bool */;
val* var72 /* : nullable Object */;
val* var_p /* var p: MParameterType */;
val* var73 /* : String */;
val* var75 /* : String */;
short int var76 /* : Bool */;
short int var77 /* : Bool */;
short int var79 /* : Bool */;
short int var80 /* : Bool */;
short int var81 /* : Bool */;
val* var82 /* : ANodes[AType] */;
val* var84 /* : ANodes[AType] */;
short int var85 /* : Bool */;
short int var86 /* : Bool */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : NativeString */;
long var90 /* : Int */;
val* var91 /* : FlatString */;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : NativeString */;
long var95 /* : Int */;
val* var96 /* : FlatString */;
val* var97 /* : Array[Object] */;
long var98 /* : Int */;
val* var99 /* : NativeArray[Object] */;
val* var100 /* : String */;
val* var101 /* : nullable TKwnullable */;
val* var103 /* : nullable TKwnullable */;
val* var104 /* : null */;
short int var105 /* : Bool */;
short int var106 /* : Bool */;
short int var108 /* : Bool */;
short int var109 /* : Bool */;
short int var110 /* : Bool */;
val* var111 /* : MType */;
val* var115 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
val* var116 /* : null */;
short int var117 /* : Bool */;
short int var118 /* : Bool */;
short int var120 /* : Bool */;
short int var121 /* : Bool */;
short int var122 /* : Bool */;
val* var123 /* : ANodes[AType] */;
val* var125 /* : ANodes[AType] */;
long var126 /* : Int */;
long var_arity /* var arity: Int */;
long var127 /* : Int */;
long var129 /* : Int */;
short int var130 /* : Bool */;
short int var131 /* : Bool */;
short int var133 /* : Bool */;
short int var134 /* : Bool */;
long var135 /* : Int */;
short int var136 /* : Bool */;
short int var137 /* : Bool */;
short int var139 /* : Bool */;
static val* varonce140;
val* var141 /* : String */;
char* var142 /* : NativeString */;
long var143 /* : Int */;
val* var144 /* : FlatString */;
static val* varonce145;
val* var146 /* : String */;
char* var147 /* : NativeString */;
long var148 /* : Int */;
val* var149 /* : FlatString */;
val* var150 /* : Array[Object] */;
long var151 /* : Int */;
val* var152 /* : NativeArray[Object] */;
val* var153 /* : String */;
long var154 /* : Int */;
long var156 /* : Int */;
long var157 /* : Int */;
short int var158 /* : Bool */;
short int var159 /* : Bool */;
short int var161 /* : Bool */;
static val* varonce162;
val* var163 /* : String */;
char* var164 /* : NativeString */;
long var165 /* : Int */;
val* var166 /* : FlatString */;
static val* varonce167;
val* var168 /* : String */;
char* var169 /* : NativeString */;
long var170 /* : Int */;
val* var171 /* : FlatString */;
val* var172 /* : Array[Object] */;
long var173 /* : Int */;
val* var174 /* : NativeArray[Object] */;
val* var175 /* : String */;
static val* varonce176;
val* var177 /* : String */;
char* var178 /* : NativeString */;
long var179 /* : Int */;
val* var180 /* : FlatString */;
static val* varonce181;
val* var182 /* : String */;
char* var183 /* : NativeString */;
long var184 /* : Int */;
val* var185 /* : FlatString */;
long var186 /* : Int */;
long var188 /* : Int */;
static val* varonce189;
val* var190 /* : String */;
char* var191 /* : NativeString */;
long var192 /* : Int */;
val* var193 /* : FlatString */;
static val* varonce194;
val* var195 /* : String */;
char* var196 /* : NativeString */;
long var197 /* : Int */;
val* var198 /* : FlatString */;
val* var199 /* : Array[Object] */;
long var200 /* : Int */;
val* var201 /* : NativeArray[Object] */;
val* var202 /* : Object */;
val* var203 /* : Object */;
val* var204 /* : String */;
val* var205 /* : null */;
long var206 /* : Int */;
short int var207 /* : Bool */;
short int var208 /* : Bool */;
short int var210 /* : Bool */;
val* var211 /* : MClassType */;
val* var213 /* : MClassType */;
val* var214 /* : nullable TKwnullable */;
val* var216 /* : nullable TKwnullable */;
val* var217 /* : null */;
short int var218 /* : Bool */;
short int var219 /* : Bool */;
short int var221 /* : Bool */;
short int var222 /* : Bool */;
short int var223 /* : Bool */;
val* var224 /* : MType */;
val* var226 /* : Array[MType] */;
val* var_mtypes /* var mtypes: Array[MType] */;
val* var227 /* : ANodes[AType] */;
val* var229 /* : ANodes[AType] */;
val* var_230 /* var : ANodes[AType] */;
val* var231 /* : Iterator[ANode] */;
val* var_232 /* var : Iterator[AType] */;
short int var233 /* : Bool */;
val* var234 /* : nullable Object */;
val* var_nt /* var nt: AType */;
val* var235 /* : nullable MType */;
val* var_mt /* var mt: nullable MType */;
val* var236 /* : null */;
short int var237 /* : Bool */;
short int var238 /* : Bool */;
val* var_other240 /* var other: nullable Object */;
short int var241 /* : Bool */;
short int var243 /* : Bool */;
val* var244 /* : null */;
val* var247 /* : MClassType */;
val* var248 /* : nullable TKwnullable */;
val* var250 /* : nullable TKwnullable */;
val* var251 /* : null */;
short int var252 /* : Bool */;
short int var253 /* : Bool */;
short int var255 /* : Bool */;
short int var256 /* : Bool */;
short int var257 /* : Bool */;
val* var258 /* : MType */;
static val* varonce260;
val* var261 /* : String */;
char* var262 /* : NativeString */;
long var263 /* : Int */;
val* var264 /* : FlatString */;
static val* varonce265;
val* var266 /* : String */;
char* var267 /* : NativeString */;
long var268 /* : Int */;
val* var269 /* : FlatString */;
static val* varonce270;
val* var271 /* : String */;
char* var272 /* : NativeString */;
long var273 /* : Int */;
val* var274 /* : FlatString */;
val* var275 /* : Array[Object] */;
long var276 /* : Int */;
val* var277 /* : NativeArray[Object] */;
val* var278 /* : String */;
val* var279 /* : null */;
var_mmodule = p0;
var_mclassdef = p1;
var_ntype = p2;
var_with_virtual = p3;
{
{ /* Inline parser_nodes#AType#n_id (var_ntype) on <var_ntype:AType> */
var3 = var_ntype->attrs[COLOR_parser_nodes__AType___n_id].val; /* _n_id on <var_ntype:AType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1297);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = lexer_work__Token__text(var1);
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
var11 = ((short int (*)(val*, val*))(var_mclassdef->class->vft[COLOR_kernel__Object___61d_61d]))(var_mclassdef, var_other) /* == on <var_mclassdef:nullable MClassDef(MClassDef)>*/;
var10 = var11;
}
var12 = !var10;
var8 = var12;
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
var13 = modelbuilder__ModelBuilder__try_get_mproperty_by_name(self, var_ntype, var_mclassdef, var_name);
}
/* <var13:nullable MProperty> isa nullable MVirtualTypeProp */
cltype = type_nullable_model__MVirtualTypeProp.color;
idtype = type_nullable_model__MVirtualTypeProp.id;
if(var13 == NULL) {
var14 = 1;
} else {
if(cltype >= var13->type->table_size) {
var14 = 0;
} else {
var14 = var13->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var14)) {
var_class_name = var13 == NULL ? "null" : var13->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MVirtualTypeProp", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_class.nit", 425);
show_backtrace(1);
}
var_prop = var13;
var15 = NULL;
if (var_prop == NULL) {
var16 = 0; /* is null */
} else {
var16 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_prop,var15) on <var_prop:nullable MVirtualTypeProp> */
var_other = var15;
{
var20 = ((short int (*)(val*, val*))(var_prop->class->vft[COLOR_kernel__Object___61d_61d]))(var_prop, var_other) /* == on <var_prop:nullable MVirtualTypeProp(MVirtualTypeProp)>*/;
var19 = var20;
}
var21 = !var19;
var17 = var21;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var16 = var17;
}
if (var16){
{
{ /* Inline parser_nodes#AType#n_types (var_ntype) on <var_ntype:AType> */
var24 = var_ntype->attrs[COLOR_parser_nodes__AType___n_types].val; /* _n_types on <var_ntype:AType> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1300);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
var25 = parser_nodes__ANodes__is_empty(var22);
}
var26 = !var25;
if (var26){
if (varonce) {
var27 = varonce;
} else {
var28 = "Type error: formal type ";
var29 = 24;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce = var27;
}
if (varonce31) {
var32 = varonce31;
} else {
var33 = " cannot have formal parameters.";
var34 = 31;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
var36 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var36 = array_instance Array[Object] */
var37 = 3;
var38 = NEW_array__NativeArray(var37, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var38)->values[0] = (val*) var27;
((struct instance_array__NativeArray*)var38)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var38)->values[2] = (val*) var32;
{
((void (*)(val*, val*, long))(var36->class->vft[COLOR_array__Array__with_native]))(var36, var38, var37) /* with_native on <var36:Array[Object]>*/;
}
}
{
var39 = ((val* (*)(val*))(var36->class->vft[COLOR_string__Object__to_s]))(var36) /* to_s on <var36:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_ntype, var39); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
{
{ /* Inline model#MVirtualTypeProp#mvirtualtype (var_prop) on <var_prop:nullable MVirtualTypeProp(MVirtualTypeProp)> */
var42 = var_prop->attrs[COLOR_model__MVirtualTypeProp___mvirtualtype].val; /* _mvirtualtype on <var_prop:nullable MVirtualTypeProp(MVirtualTypeProp)> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mvirtualtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1874);
show_backtrace(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
var_res = var40;
{
{ /* Inline parser_nodes#AType#n_kwnullable (var_ntype) on <var_ntype:AType> */
var45 = var_ntype->attrs[COLOR_parser_nodes__AType___n_kwnullable].val; /* _n_kwnullable on <var_ntype:AType> */
var43 = var45;
RET_LABEL44:(void)0;
}
}
var46 = NULL;
if (var43 == NULL) {
var47 = 0; /* is null */
} else {
var47 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var43,var46) on <var43:nullable TKwnullable> */
var_other = var46;
{
var51 = ((short int (*)(val*, val*))(var43->class->vft[COLOR_kernel__Object___61d_61d]))(var43, var_other) /* == on <var43:nullable TKwnullable(TKwnullable)>*/;
var50 = var51;
}
var52 = !var50;
var48 = var52;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
var47 = var48;
}
if (var47){
{
var53 = model__MType__as_nullable(var_res);
}
var_res = var53;
} else {
}
{
{ /* Inline modelize_class#AType#mtype= (var_ntype,var_res) on <var_ntype:AType> */
var_ntype->attrs[COLOR_modelize_class__AType___mtype].val = var_res; /* _mtype on <var_ntype:AType> */
RET_LABEL54:(void)0;
}
}
var = var_res;
goto RET_LABEL;
} else {
}
} else {
}
var55 = NULL;
if (var_mclassdef == NULL) {
var56 = 0; /* is null */
} else {
var56 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mclassdef,var55) on <var_mclassdef:nullable MClassDef> */
var_other = var55;
{
var60 = ((short int (*)(val*, val*))(var_mclassdef->class->vft[COLOR_kernel__Object___61d_61d]))(var_mclassdef, var_other) /* == on <var_mclassdef:nullable MClassDef(MClassDef)>*/;
var59 = var60;
}
var61 = !var59;
var57 = var61;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
var56 = var57;
}
if (var56){
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var64 = var_mclassdef->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:nullable MClassDef(MClassDef)> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
{ /* Inline model#MClass#mparameters (var62) on <var62:MClass> */
var67 = var62->attrs[COLOR_model__MClass___mparameters].val; /* _mparameters on <var62:MClass> */
if (unlikely(var67 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 367);
show_backtrace(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
var_68 = var65;
{
var69 = array__AbstractArrayRead__iterator(var_68);
}
var_70 = var69;
for(;;) {
{
var71 = array__ArrayIterator__is_ok(var_70);
}
if (var71){
{
var72 = array__ArrayIterator__item(var_70);
}
var_p = var72;
{
{ /* Inline model#MParameterType#name (var_p) on <var_p:MParameterType> */
var75 = var_p->attrs[COLOR_model__MParameterType___name].val; /* _name on <var_p:MParameterType> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1289);
show_backtrace(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var73,var_name) on <var73:String> */
var_other = var_name;
{
var80 = ((short int (*)(val*, val*))(var73->class->vft[COLOR_kernel__Object___61d_61d]))(var73, var_other) /* == on <var73:String>*/;
var79 = var80;
}
var81 = !var79;
var77 = var81;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
var76 = var77;
}
if (var76){
goto BREAK_label;
} else {
}
{
{ /* Inline parser_nodes#AType#n_types (var_ntype) on <var_ntype:AType> */
var84 = var_ntype->attrs[COLOR_parser_nodes__AType___n_types].val; /* _n_types on <var_ntype:AType> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1300);
show_backtrace(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
var85 = parser_nodes__ANodes__is_empty(var82);
}
var86 = !var85;
if (var86){
if (varonce87) {
var88 = varonce87;
} else {
var89 = "Type error: formal type ";
var90 = 24;
var91 = string__NativeString__to_s_with_length(var89, var90);
var88 = var91;
varonce87 = var88;
}
if (varonce92) {
var93 = varonce92;
} else {
var94 = " cannot have formal parameters.";
var95 = 31;
var96 = string__NativeString__to_s_with_length(var94, var95);
var93 = var96;
varonce92 = var93;
}
var97 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var97 = array_instance Array[Object] */
var98 = 3;
var99 = NEW_array__NativeArray(var98, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var99)->values[0] = (val*) var88;
((struct instance_array__NativeArray*)var99)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var99)->values[2] = (val*) var93;
{
((void (*)(val*, val*, long))(var97->class->vft[COLOR_array__Array__with_native]))(var97, var99, var98) /* with_native on <var97:Array[Object]>*/;
}
}
{
var100 = ((val* (*)(val*))(var97->class->vft[COLOR_string__Object__to_s]))(var97) /* to_s on <var97:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_ntype, var100); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
var_res = var_p;
{
{ /* Inline parser_nodes#AType#n_kwnullable (var_ntype) on <var_ntype:AType> */
var103 = var_ntype->attrs[COLOR_parser_nodes__AType___n_kwnullable].val; /* _n_kwnullable on <var_ntype:AType> */
var101 = var103;
RET_LABEL102:(void)0;
}
}
var104 = NULL;
if (var101 == NULL) {
var105 = 0; /* is null */
} else {
var105 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var101,var104) on <var101:nullable TKwnullable> */
var_other = var104;
{
var109 = ((short int (*)(val*, val*))(var101->class->vft[COLOR_kernel__Object___61d_61d]))(var101, var_other) /* == on <var101:nullable TKwnullable(TKwnullable)>*/;
var108 = var109;
}
var110 = !var108;
var106 = var110;
goto RET_LABEL107;
RET_LABEL107:(void)0;
}
var105 = var106;
}
if (var105){
{
var111 = model__MType__as_nullable(var_res);
}
var_res = var111;
} else {
}
{
{ /* Inline modelize_class#AType#mtype= (var_ntype,var_res) on <var_ntype:AType> */
var_ntype->attrs[COLOR_modelize_class__AType___mtype].val = var_res; /* _mtype on <var_ntype:AType> */
RET_LABEL112:(void)0;
}
}
var = var_res;
goto RET_LABEL;
BREAK_label: (void)0;
{
array__ArrayIterator__next(var_70); /* Direct call array#ArrayIterator#next on <var_70:ArrayIterator[MParameterType]>*/
}
} else {
goto BREAK_label113;
}
}
BREAK_label113: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_70) on <var_70:ArrayIterator[MParameterType]> */
RET_LABEL114:(void)0;
}
}
} else {
}
{
var115 = modelbuilder__ModelBuilder__try_get_mclass_by_name(self, var_ntype, var_mmodule, var_name);
}
var_mclass = var115;
var116 = NULL;
if (var_mclass == NULL) {
var117 = 0; /* is null */
} else {
var117 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mclass,var116) on <var_mclass:nullable MClass> */
var_other = var116;
{
var121 = ((short int (*)(val*, val*))(var_mclass->class->vft[COLOR_kernel__Object___61d_61d]))(var_mclass, var_other) /* == on <var_mclass:nullable MClass(MClass)>*/;
var120 = var121;
}
var122 = !var120;
var118 = var122;
goto RET_LABEL119;
RET_LABEL119:(void)0;
}
var117 = var118;
}
if (var117){
{
{ /* Inline parser_nodes#AType#n_types (var_ntype) on <var_ntype:AType> */
var125 = var_ntype->attrs[COLOR_parser_nodes__AType___n_types].val; /* _n_types on <var_ntype:AType> */
if (unlikely(var125 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1300);
show_backtrace(1);
}
var123 = var125;
RET_LABEL124:(void)0;
}
}
{
var126 = parser_nodes__ANodes__length(var123);
}
var_arity = var126;
{
{ /* Inline model#MClass#arity (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var129 = var_mclass->attrs[COLOR_model__MClass___arity].l; /* _arity on <var_mclass:nullable MClass(MClass)> */
var127 = var129;
RET_LABEL128:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_arity,var127) on <var_arity:Int> */
var133 = var_arity == var127;
var134 = !var133;
var131 = var134;
goto RET_LABEL132;
RET_LABEL132:(void)0;
}
var130 = var131;
}
if (var130){
var135 = 0;
{
{ /* Inline kernel#Int#== (var_arity,var135) on <var_arity:Int> */
var139 = var_arity == var135;
var137 = var139;
goto RET_LABEL138;
RET_LABEL138:(void)0;
}
var136 = var137;
}
if (var136){
if (varonce140) {
var141 = varonce140;
} else {
var142 = "Type error: \'";
var143 = 13;
var144 = string__NativeString__to_s_with_length(var142, var143);
var141 = var144;
varonce140 = var141;
}
if (varonce145) {
var146 = varonce145;
} else {
var147 = "\' is a generic class.";
var148 = 21;
var149 = string__NativeString__to_s_with_length(var147, var148);
var146 = var149;
varonce145 = var146;
}
var150 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var150 = array_instance Array[Object] */
var151 = 3;
var152 = NEW_array__NativeArray(var151, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var152)->values[0] = (val*) var141;
((struct instance_array__NativeArray*)var152)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var152)->values[2] = (val*) var146;
{
((void (*)(val*, val*, long))(var150->class->vft[COLOR_array__Array__with_native]))(var150, var152, var151) /* with_native on <var150:Array[Object]>*/;
}
}
{
var153 = ((val* (*)(val*))(var150->class->vft[COLOR_string__Object__to_s]))(var150) /* to_s on <var150:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_ntype, var153); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
{
{ /* Inline model#MClass#arity (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var156 = var_mclass->attrs[COLOR_model__MClass___arity].l; /* _arity on <var_mclass:nullable MClass(MClass)> */
var154 = var156;
RET_LABEL155:(void)0;
}
}
var157 = 0;
{
{ /* Inline kernel#Int#== (var154,var157) on <var154:Int> */
var161 = var154 == var157;
var159 = var161;
goto RET_LABEL160;
RET_LABEL160:(void)0;
}
var158 = var159;
}
if (var158){
if (varonce162) {
var163 = varonce162;
} else {
var164 = "Type error: \'";
var165 = 13;
var166 = string__NativeString__to_s_with_length(var164, var165);
var163 = var166;
varonce162 = var163;
}
if (varonce167) {
var168 = varonce167;
} else {
var169 = "\' is not a generic class.";
var170 = 25;
var171 = string__NativeString__to_s_with_length(var169, var170);
var168 = var171;
varonce167 = var168;
}
var172 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var172 = array_instance Array[Object] */
var173 = 3;
var174 = NEW_array__NativeArray(var173, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var174)->values[0] = (val*) var163;
((struct instance_array__NativeArray*)var174)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var174)->values[2] = (val*) var168;
{
((void (*)(val*, val*, long))(var172->class->vft[COLOR_array__Array__with_native]))(var172, var174, var173) /* with_native on <var172:Array[Object]>*/;
}
}
{
var175 = ((val* (*)(val*))(var172->class->vft[COLOR_string__Object__to_s]))(var172) /* to_s on <var172:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_ntype, var175); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
if (varonce176) {
var177 = varonce176;
} else {
var178 = "Type error: \'";
var179 = 13;
var180 = string__NativeString__to_s_with_length(var178, var179);
var177 = var180;
varonce176 = var177;
}
if (varonce181) {
var182 = varonce181;
} else {
var183 = "\' has ";
var184 = 6;
var185 = string__NativeString__to_s_with_length(var183, var184);
var182 = var185;
varonce181 = var182;
}
{
{ /* Inline model#MClass#arity (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var188 = var_mclass->attrs[COLOR_model__MClass___arity].l; /* _arity on <var_mclass:nullable MClass(MClass)> */
var186 = var188;
RET_LABEL187:(void)0;
}
}
if (varonce189) {
var190 = varonce189;
} else {
var191 = " parameters (";
var192 = 13;
var193 = string__NativeString__to_s_with_length(var191, var192);
var190 = var193;
varonce189 = var190;
}
if (varonce194) {
var195 = varonce194;
} else {
var196 = " are provided).";
var197 = 15;
var198 = string__NativeString__to_s_with_length(var196, var197);
var195 = var198;
varonce194 = var195;
}
var199 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var199 = array_instance Array[Object] */
var200 = 7;
var201 = NEW_array__NativeArray(var200, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var201)->values[0] = (val*) var177;
((struct instance_array__NativeArray*)var201)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var201)->values[2] = (val*) var182;
var202 = BOX_kernel__Int(var186); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var201)->values[3] = (val*) var202;
((struct instance_array__NativeArray*)var201)->values[4] = (val*) var190;
var203 = BOX_kernel__Int(var_arity); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var201)->values[5] = (val*) var203;
((struct instance_array__NativeArray*)var201)->values[6] = (val*) var195;
{
((void (*)(val*, val*, long))(var199->class->vft[COLOR_array__Array__with_native]))(var199, var201, var200) /* with_native on <var199:Array[Object]>*/;
}
}
{
var204 = ((val* (*)(val*))(var199->class->vft[COLOR_string__Object__to_s]))(var199) /* to_s on <var199:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_ntype, var204); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
}
}
var205 = NULL;
var = var205;
goto RET_LABEL;
} else {
}
var206 = 0;
{
{ /* Inline kernel#Int#== (var_arity,var206) on <var_arity:Int> */
var210 = var_arity == var206;
var208 = var210;
goto RET_LABEL209;
RET_LABEL209:(void)0;
}
var207 = var208;
}
if (var207){
{
{ /* Inline model#MClass#mclass_type (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var213 = var_mclass->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var213 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var211 = var213;
RET_LABEL212:(void)0;
}
}
var_res = var211;
{
{ /* Inline parser_nodes#AType#n_kwnullable (var_ntype) on <var_ntype:AType> */
var216 = var_ntype->attrs[COLOR_parser_nodes__AType___n_kwnullable].val; /* _n_kwnullable on <var_ntype:AType> */
var214 = var216;
RET_LABEL215:(void)0;
}
}
var217 = NULL;
if (var214 == NULL) {
var218 = 0; /* is null */
} else {
var218 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var214,var217) on <var214:nullable TKwnullable> */
var_other = var217;
{
var222 = ((short int (*)(val*, val*))(var214->class->vft[COLOR_kernel__Object___61d_61d]))(var214, var_other) /* == on <var214:nullable TKwnullable(TKwnullable)>*/;
var221 = var222;
}
var223 = !var221;
var219 = var223;
goto RET_LABEL220;
RET_LABEL220:(void)0;
}
var218 = var219;
}
if (var218){
{
var224 = model__MType__as_nullable(var_res);
}
var_res = var224;
} else {
}
{
{ /* Inline modelize_class#AType#mtype= (var_ntype,var_res) on <var_ntype:AType> */
var_ntype->attrs[COLOR_modelize_class__AType___mtype].val = var_res; /* _mtype on <var_ntype:AType> */
RET_LABEL225:(void)0;
}
}
var = var_res;
goto RET_LABEL;
} else {
var226 = NEW_array__Array(&type_array__Arraymodel__MType);
{
((void (*)(val*))(var226->class->vft[COLOR_kernel__Object__init]))(var226) /* init on <var226:Array[MType]>*/;
}
var_mtypes = var226;
{
{ /* Inline parser_nodes#AType#n_types (var_ntype) on <var_ntype:AType> */
var229 = var_ntype->attrs[COLOR_parser_nodes__AType___n_types].val; /* _n_types on <var_ntype:AType> */
if (unlikely(var229 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1300);
show_backtrace(1);
}
var227 = var229;
RET_LABEL228:(void)0;
}
}
var_230 = var227;
{
var231 = parser_nodes__ANodes__iterator(var_230);
}
var_232 = var231;
for(;;) {
{
var233 = ((short int (*)(val*))(var_232->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_232) /* is_ok on <var_232:Iterator[AType]>*/;
}
if (var233){
{
var234 = ((val* (*)(val*))(var_232->class->vft[COLOR_abstract_collection__Iterator__item]))(var_232) /* item on <var_232:Iterator[AType]>*/;
}
var_nt = var234;
{
var235 = modelize_class__ModelBuilder__resolve_mtype_unchecked(self, var_mmodule, var_mclassdef, var_nt, var_with_virtual);
}
var_mt = var235;
var236 = NULL;
if (var_mt == NULL) {
var237 = 1; /* is null */
} else {
var237 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mt,var236) on <var_mt:nullable MType> */
var_other240 = var236;
{
{ /* Inline kernel#Object#is_same_instance (var_mt,var_other240) on <var_mt:nullable MType(MType)> */
var243 = var_mt == var_other240;
var241 = var243;
goto RET_LABEL242;
RET_LABEL242:(void)0;
}
}
var238 = var241;
goto RET_LABEL239;
RET_LABEL239:(void)0;
}
var237 = var238;
}
if (var237){
var244 = NULL;
var = var244;
goto RET_LABEL;
} else {
}
{
array__Array__add(var_mtypes, var_mt); /* Direct call array#Array#add on <var_mtypes:Array[MType]>*/
}
{
((void (*)(val*))(var_232->class->vft[COLOR_abstract_collection__Iterator__next]))(var_232) /* next on <var_232:Iterator[AType]>*/;
}
} else {
goto BREAK_label245;
}
}
BREAK_label245: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_232) on <var_232:Iterator[AType]> */
RET_LABEL246:(void)0;
}
}
{
var247 = model__MClass__get_mtype(var_mclass, var_mtypes);
}
var_res = var247;
{
{ /* Inline parser_nodes#AType#n_kwnullable (var_ntype) on <var_ntype:AType> */
var250 = var_ntype->attrs[COLOR_parser_nodes__AType___n_kwnullable].val; /* _n_kwnullable on <var_ntype:AType> */
var248 = var250;
RET_LABEL249:(void)0;
}
}
var251 = NULL;
if (var248 == NULL) {
var252 = 0; /* is null */
} else {
var252 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var248,var251) on <var248:nullable TKwnullable> */
var_other = var251;
{
var256 = ((short int (*)(val*, val*))(var248->class->vft[COLOR_kernel__Object___61d_61d]))(var248, var_other) /* == on <var248:nullable TKwnullable(TKwnullable)>*/;
var255 = var256;
}
var257 = !var255;
var253 = var257;
goto RET_LABEL254;
RET_LABEL254:(void)0;
}
var252 = var253;
}
if (var252){
{
var258 = model__MType__as_nullable(var_res);
}
var_res = var258;
} else {
}
{
{ /* Inline modelize_class#AType#mtype= (var_ntype,var_res) on <var_ntype:AType> */
var_ntype->attrs[COLOR_modelize_class__AType___mtype].val = var_res; /* _mtype on <var_ntype:AType> */
RET_LABEL259:(void)0;
}
}
var = var_res;
goto RET_LABEL;
}
} else {
}
if (varonce260) {
var261 = varonce260;
} else {
var262 = "Type error: class ";
var263 = 18;
var264 = string__NativeString__to_s_with_length(var262, var263);
var261 = var264;
varonce260 = var261;
}
if (varonce265) {
var266 = varonce265;
} else {
var267 = " not found in module ";
var268 = 21;
var269 = string__NativeString__to_s_with_length(var267, var268);
var266 = var269;
varonce265 = var266;
}
if (varonce270) {
var271 = varonce270;
} else {
var272 = ".";
var273 = 1;
var274 = string__NativeString__to_s_with_length(var272, var273);
var271 = var274;
varonce270 = var271;
}
var275 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var275 = array_instance Array[Object] */
var276 = 5;
var277 = NEW_array__NativeArray(var276, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var277)->values[0] = (val*) var261;
((struct instance_array__NativeArray*)var277)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var277)->values[2] = (val*) var266;
((struct instance_array__NativeArray*)var277)->values[3] = (val*) var_mmodule;
((struct instance_array__NativeArray*)var277)->values[4] = (val*) var271;
{
((void (*)(val*, val*, long))(var275->class->vft[COLOR_array__Array__with_native]))(var275, var277, var276) /* with_native on <var275:Array[Object]>*/;
}
}
{
var278 = ((val* (*)(val*))(var275->class->vft[COLOR_string__Object__to_s]))(var275) /* to_s on <var275:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_ntype, var278); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
var279 = NULL;
var = var279;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_class#ModelBuilder#resolve_mtype_unchecked for (self: Object, MModule, nullable MClassDef, AType, Bool): nullable MType */
val* VIRTUAL_modelize_class__ModelBuilder__resolve_mtype_unchecked(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = modelize_class__ModelBuilder__resolve_mtype_unchecked(self, p0, p1, p2, p3);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#ModelBuilder#resolve_mtype for (self: ModelBuilder, MModule, nullable MClassDef, AType): nullable MType */
val* modelize_class__ModelBuilder__resolve_mtype(val* self, val* p0, val* p1, val* p2) {
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
val* var46 /* : Array[MType] */;
val* var47 /* : nullable Object */;
val* var_bound /* var bound: MType */;
val* var48 /* : ANodes[AType] */;
val* var50 /* : ANodes[AType] */;
val* var51 /* : ANode */;
val* var_nt /* var nt: AType */;
val* var52 /* : nullable MType */;
val* var_mt /* var mt: nullable MType */;
val* var53 /* : null */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
val* var60 /* : null */;
val* var61 /* : null */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
val* var_other65 /* var other: nullable Object */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
val* var69 /* : MClassType */;
val* var71 /* : MClassType */;
val* var_anchor /* var anchor: nullable Object */;
val* var72 /* : null */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
static val* varonce;
val* var75 /* : String */;
char* var76 /* : NativeString */;
long var77 /* : Int */;
val* var78 /* : FlatString */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
long var82 /* : Int */;
val* var83 /* : FlatString */;
val* var84 /* : Array[Object] */;
long var85 /* : Int */;
val* var86 /* : NativeArray[Object] */;
val* var87 /* : String */;
val* var88 /* : null */;
long var89 /* : Int */;
long var90 /* : Int */;
short int var91 /* : Bool */;
var_mmodule = p0;
var_mclassdef = p1;
var_ntype = p2;
{
{ /* Inline modelize_class#AType#mtype (var_ntype) on <var_ntype:AType> */
var3 = var_ntype->attrs[COLOR_modelize_class__AType___mtype].val; /* _mtype on <var_ntype:AType> */
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
var12 = modelize_class__ModelBuilder__resolve_mtype_unchecked(self, var_mmodule, var_mclassdef, var_ntype, var11);
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
var23 = var_ntype->attrs[COLOR_modelize_class__AType___checked_mtype].s; /* _checked_mtype on <var_ntype:AType> */
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
cltype = type_model__MGenericType.color;
idtype = type_model__MGenericType.id;
if(cltype >= var_mtype->type->table_size) {
var24 = 0;
} else {
var24 = var_mtype->type->type_table[cltype] == idtype;
}
if (var24){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:nullable MType(MGenericType)> */
var27 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:nullable MType(MGenericType)> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
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
var31 = var_mclass->attrs[COLOR_model__MClass___arity].l; /* _arity on <var_mclass:MClass> */
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
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
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
var40 = var_mclass->attrs[COLOR_model__MClass___intro].val; /* _intro on <var_mclass:MClass> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 420);
show_backtrace(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var38) on <var38:MClassDef> */
var43 = var38->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var38:MClassDef> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline model#MClassType#arguments (var41) on <var41:MClassType> */
var46 = var41->attrs[COLOR_model__MClassType___arguments].val; /* _arguments on <var41:MClassType> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 996);
show_backtrace(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
var47 = array__Array___91d_93d(var44, var_i);
}
var_bound = var47;
{
{ /* Inline parser_nodes#AType#n_types (var_ntype) on <var_ntype:AType> */
var50 = var_ntype->attrs[COLOR_parser_nodes__AType___n_types].val; /* _n_types on <var_ntype:AType> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1300);
show_backtrace(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
var51 = parser_nodes__ANodes___91d_93d(var48, var_i);
}
var_nt = var51;
{
var52 = modelize_class__ModelBuilder__resolve_mtype(self, var_mmodule, var_mclassdef, var_nt);
}
var_mt = var52;
var53 = NULL;
if (var_mt == NULL) {
var54 = 1; /* is null */
} else {
var54 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mt,var53) on <var_mt:nullable MType> */
var_other = var53;
{
{ /* Inline kernel#Object#is_same_instance (var_mt,var_other) on <var_mt:nullable MType(MType)> */
var59 = var_mt == var_other;
var57 = var59;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
var55 = var57;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
var54 = var55;
}
if (var54){
var60 = NULL;
var = var60;
goto RET_LABEL;
} else {
}
var61 = NULL;
if (var_mclassdef == NULL) {
var62 = 0; /* is null */
} else {
var62 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mclassdef,var61) on <var_mclassdef:nullable MClassDef> */
var_other65 = var61;
{
var67 = ((short int (*)(val*, val*))(var_mclassdef->class->vft[COLOR_kernel__Object___61d_61d]))(var_mclassdef, var_other65) /* == on <var_mclassdef:nullable MClassDef(MClassDef)>*/;
var66 = var67;
}
var68 = !var66;
var63 = var68;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
var62 = var63;
}
if (var62){
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var71 = var_mclassdef->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:nullable MClassDef(MClassDef)> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
var_anchor = var69;
} else {
var72 = NULL;
var_anchor = var72;
}
{
var73 = model__MType__is_subtype(var_mt, var_mmodule, var_anchor, var_bound);
}
var74 = !var73;
if (var74){
if (varonce) {
var75 = varonce;
} else {
var76 = "Type error: expected ";
var77 = 21;
var78 = string__NativeString__to_s_with_length(var76, var77);
var75 = var78;
varonce = var75;
}
if (varonce79) {
var80 = varonce79;
} else {
var81 = ", got ";
var82 = 6;
var83 = string__NativeString__to_s_with_length(var81, var82);
var80 = var83;
varonce79 = var80;
}
var84 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var84 = array_instance Array[Object] */
var85 = 4;
var86 = NEW_array__NativeArray(var85, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var86)->values[0] = (val*) var75;
((struct instance_array__NativeArray*)var86)->values[1] = (val*) var_bound;
((struct instance_array__NativeArray*)var86)->values[2] = (val*) var80;
((struct instance_array__NativeArray*)var86)->values[3] = (val*) var_mt;
{
((void (*)(val*, val*, long))(var84->class->vft[COLOR_array__Array__with_native]))(var84, var86, var85) /* with_native on <var84:Array[Object]>*/;
}
}
{
var87 = ((val* (*)(val*))(var84->class->vft[COLOR_string__Object__to_s]))(var84) /* to_s on <var84:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_nt, var87); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
var88 = NULL;
var = var88;
goto RET_LABEL;
} else {
}
var89 = 1;
{
var90 = kernel__Int__successor(var_i, var89);
}
var_i = var90;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
} else {
}
var91 = 1;
{
{ /* Inline modelize_class#AType#checked_mtype= (var_ntype,var91) on <var_ntype:AType> */
var_ntype->attrs[COLOR_modelize_class__AType___checked_mtype].s = var91; /* _checked_mtype on <var_ntype:AType> */
RET_LABEL92:(void)0;
}
}
var = var_mtype;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_class#ModelBuilder#resolve_mtype for (self: Object, MModule, nullable MClassDef, AType): nullable MType */
val* VIRTUAL_modelize_class__ModelBuilder__resolve_mtype(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = modelize_class__ModelBuilder__resolve_mtype(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AModule#build_classes_is_done for (self: AModule): Bool */
short int modelize_class__AModule__build_classes_is_done(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_modelize_class__AModule___build_classes_is_done].s; /* _build_classes_is_done on <self:AModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AModule#build_classes_is_done for (self: Object): Bool */
short int VIRTUAL_modelize_class__AModule__build_classes_is_done(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline modelize_class#AModule#build_classes_is_done (self) on <self:Object(AModule)> */
var3 = self->attrs[COLOR_modelize_class__AModule___build_classes_is_done].s; /* _build_classes_is_done on <self:Object(AModule)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AModule#build_classes_is_done= for (self: AModule, Bool) */
void modelize_class__AModule__build_classes_is_done_61d(val* self, short int p0) {
self->attrs[COLOR_modelize_class__AModule___build_classes_is_done].s = p0; /* _build_classes_is_done on <self:AModule> */
RET_LABEL:;
}
/* method modelize_class#AModule#build_classes_is_done= for (self: Object, Bool) */
void VIRTUAL_modelize_class__AModule__build_classes_is_done_61d(val* self, short int p0) {
{ /* Inline modelize_class#AModule#build_classes_is_done= (self,p0) on <self:Object(AModule)> */
self->attrs[COLOR_modelize_class__AModule___build_classes_is_done].s = p0; /* _build_classes_is_done on <self:Object(AModule)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method modelize_class#AModule#mclass2nclassdef for (self: AModule): Map[MClass, AClassdef] */
val* modelize_class__AModule__mclass2nclassdef(val* self) {
val* var /* : Map[MClass, AClassdef] */;
val* var1 /* : Map[MClass, AClassdef] */;
var1 = self->attrs[COLOR_modelize_class__AModule___mclass2nclassdef].val; /* _mclass2nclassdef on <self:AModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass2nclassdef");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_class.nit", 526);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AModule#mclass2nclassdef for (self: Object): Map[MClass, AClassdef] */
val* VIRTUAL_modelize_class__AModule__mclass2nclassdef(val* self) {
val* var /* : Map[MClass, AClassdef] */;
val* var1 /* : Map[MClass, AClassdef] */;
val* var3 /* : Map[MClass, AClassdef] */;
{ /* Inline modelize_class#AModule#mclass2nclassdef (self) on <self:Object(AModule)> */
var3 = self->attrs[COLOR_modelize_class__AModule___mclass2nclassdef].val; /* _mclass2nclassdef on <self:Object(AModule)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass2nclassdef");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_class.nit", 526);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AClassdef#mclass for (self: AClassdef): nullable MClass */
val* modelize_class__AClassdef__mclass(val* self) {
val* var /* : nullable MClass */;
val* var1 /* : nullable MClass */;
var1 = self->attrs[COLOR_modelize_class__AClassdef___mclass].val; /* _mclass on <self:AClassdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AClassdef#mclass for (self: Object): nullable MClass */
val* VIRTUAL_modelize_class__AClassdef__mclass(val* self) {
val* var /* : nullable MClass */;
val* var1 /* : nullable MClass */;
val* var3 /* : nullable MClass */;
{ /* Inline modelize_class#AClassdef#mclass (self) on <self:Object(AClassdef)> */
var3 = self->attrs[COLOR_modelize_class__AClassdef___mclass].val; /* _mclass on <self:Object(AClassdef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AClassdef#mclass= for (self: AClassdef, nullable MClass) */
void modelize_class__AClassdef__mclass_61d(val* self, val* p0) {
self->attrs[COLOR_modelize_class__AClassdef___mclass].val = p0; /* _mclass on <self:AClassdef> */
RET_LABEL:;
}
/* method modelize_class#AClassdef#mclass= for (self: Object, nullable MClass) */
void VIRTUAL_modelize_class__AClassdef__mclass_61d(val* self, val* p0) {
{ /* Inline modelize_class#AClassdef#mclass= (self,p0) on <self:Object(AClassdef)> */
self->attrs[COLOR_modelize_class__AClassdef___mclass].val = p0; /* _mclass on <self:Object(AClassdef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method modelize_class#AClassdef#mclassdef for (self: AClassdef): nullable MClassDef */
val* modelize_class__AClassdef__mclassdef(val* self) {
val* var /* : nullable MClassDef */;
val* var1 /* : nullable MClassDef */;
var1 = self->attrs[COLOR_modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <self:AClassdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AClassdef#mclassdef for (self: Object): nullable MClassDef */
val* VIRTUAL_modelize_class__AClassdef__mclassdef(val* self) {
val* var /* : nullable MClassDef */;
val* var1 /* : nullable MClassDef */;
val* var3 /* : nullable MClassDef */;
{ /* Inline modelize_class#AClassdef#mclassdef (self) on <self:Object(AClassdef)> */
var3 = self->attrs[COLOR_modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <self:Object(AClassdef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AClassdef#mclassdef= for (self: AClassdef, nullable MClassDef) */
void modelize_class__AClassdef__mclassdef_61d(val* self, val* p0) {
self->attrs[COLOR_modelize_class__AClassdef___mclassdef].val = p0; /* _mclassdef on <self:AClassdef> */
RET_LABEL:;
}
/* method modelize_class#AClassdef#mclassdef= for (self: Object, nullable MClassDef) */
void VIRTUAL_modelize_class__AClassdef__mclassdef_61d(val* self, val* p0) {
{ /* Inline modelize_class#AClassdef#mclassdef= (self,p0) on <self:Object(AClassdef)> */
self->attrs[COLOR_modelize_class__AClassdef___mclassdef].val = p0; /* _mclassdef on <self:Object(AClassdef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method modelize_class#AClassdef#all_defs for (self: AClassdef): nullable Array[AClassdef] */
val* modelize_class__AClassdef__all_defs(val* self) {
val* var /* : nullable Array[AClassdef] */;
val* var1 /* : nullable Array[AClassdef] */;
var1 = self->attrs[COLOR_modelize_class__AClassdef___all_defs].val; /* _all_defs on <self:AClassdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AClassdef#all_defs for (self: Object): nullable Array[AClassdef] */
val* VIRTUAL_modelize_class__AClassdef__all_defs(val* self) {
val* var /* : nullable Array[AClassdef] */;
val* var1 /* : nullable Array[AClassdef] */;
val* var3 /* : nullable Array[AClassdef] */;
{ /* Inline modelize_class#AClassdef#all_defs (self) on <self:Object(AClassdef)> */
var3 = self->attrs[COLOR_modelize_class__AClassdef___all_defs].val; /* _all_defs on <self:Object(AClassdef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AClassdef#all_defs= for (self: AClassdef, nullable Array[AClassdef]) */
void modelize_class__AClassdef__all_defs_61d(val* self, val* p0) {
self->attrs[COLOR_modelize_class__AClassdef___all_defs].val = p0; /* _all_defs on <self:AClassdef> */
RET_LABEL:;
}
/* method modelize_class#AClassdef#all_defs= for (self: Object, nullable Array[AClassdef]) */
void VIRTUAL_modelize_class__AClassdef__all_defs_61d(val* self, val* p0) {
{ /* Inline modelize_class#AClassdef#all_defs= (self,p0) on <self:Object(AClassdef)> */
self->attrs[COLOR_modelize_class__AClassdef___all_defs].val = p0; /* _all_defs on <self:Object(AClassdef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method modelize_class#AConcreteClasskind#mkind for (self: AConcreteClasskind): MClassKind */
val* modelize_class__AConcreteClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
{
var1 = model__Object__concrete_kind(self);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_class#AConcreteClasskind#mkind for (self: Object): MClassKind */
val* VIRTUAL_modelize_class__AConcreteClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
var1 = modelize_class__AConcreteClasskind__mkind(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AAbstractClasskind#mkind for (self: AAbstractClasskind): MClassKind */
val* modelize_class__AAbstractClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
{
var1 = model__Object__abstract_kind(self);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_class#AAbstractClasskind#mkind for (self: Object): MClassKind */
val* VIRTUAL_modelize_class__AAbstractClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
var1 = modelize_class__AAbstractClasskind__mkind(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AInterfaceClasskind#mkind for (self: AInterfaceClasskind): MClassKind */
val* modelize_class__AInterfaceClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
{
var1 = model__Object__interface_kind(self);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_class#AInterfaceClasskind#mkind for (self: Object): MClassKind */
val* VIRTUAL_modelize_class__AInterfaceClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
var1 = modelize_class__AInterfaceClasskind__mkind(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AEnumClasskind#mkind for (self: AEnumClasskind): MClassKind */
val* modelize_class__AEnumClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
{
var1 = model__Object__enum_kind(self);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_class#AEnumClasskind#mkind for (self: Object): MClassKind */
val* VIRTUAL_modelize_class__AEnumClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
var1 = modelize_class__AEnumClasskind__mkind(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AExternClasskind#mkind for (self: AExternClasskind): MClassKind */
val* modelize_class__AExternClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
{
var1 = model__Object__extern_kind(self);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_class#AExternClasskind#mkind for (self: Object): MClassKind */
val* VIRTUAL_modelize_class__AExternClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
var1 = modelize_class__AExternClasskind__mkind(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AFormaldef#bound= for (self: AFormaldef, nullable MType) */
void modelize_class__AFormaldef__bound_61d(val* self, val* p0) {
self->attrs[COLOR_modelize_class__AFormaldef___bound].val = p0; /* _bound on <self:AFormaldef> */
RET_LABEL:;
}
/* method modelize_class#AFormaldef#bound= for (self: Object, nullable MType) */
void VIRTUAL_modelize_class__AFormaldef__bound_61d(val* self, val* p0) {
{ /* Inline modelize_class#AFormaldef#bound= (self,p0) on <self:Object(AFormaldef)> */
self->attrs[COLOR_modelize_class__AFormaldef___bound].val = p0; /* _bound on <self:Object(AFormaldef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method modelize_class#AType#mtype for (self: AType): nullable MType */
val* modelize_class__AType__mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_modelize_class__AType___mtype].val; /* _mtype on <self:AType> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AType#mtype for (self: Object): nullable MType */
val* VIRTUAL_modelize_class__AType__mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
{ /* Inline modelize_class#AType#mtype (self) on <self:Object(AType)> */
var3 = self->attrs[COLOR_modelize_class__AType___mtype].val; /* _mtype on <self:Object(AType)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AType#mtype= for (self: AType, nullable MType) */
void modelize_class__AType__mtype_61d(val* self, val* p0) {
self->attrs[COLOR_modelize_class__AType___mtype].val = p0; /* _mtype on <self:AType> */
RET_LABEL:;
}
/* method modelize_class#AType#mtype= for (self: Object, nullable MType) */
void VIRTUAL_modelize_class__AType__mtype_61d(val* self, val* p0) {
{ /* Inline modelize_class#AType#mtype= (self,p0) on <self:Object(AType)> */
self->attrs[COLOR_modelize_class__AType___mtype].val = p0; /* _mtype on <self:Object(AType)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method modelize_class#AType#checked_mtype for (self: AType): Bool */
short int modelize_class__AType__checked_mtype(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_modelize_class__AType___checked_mtype].s; /* _checked_mtype on <self:AType> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AType#checked_mtype for (self: Object): Bool */
short int VIRTUAL_modelize_class__AType__checked_mtype(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline modelize_class#AType#checked_mtype (self) on <self:Object(AType)> */
var3 = self->attrs[COLOR_modelize_class__AType___checked_mtype].s; /* _checked_mtype on <self:Object(AType)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AType#checked_mtype= for (self: AType, Bool) */
void modelize_class__AType__checked_mtype_61d(val* self, short int p0) {
self->attrs[COLOR_modelize_class__AType___checked_mtype].s = p0; /* _checked_mtype on <self:AType> */
RET_LABEL:;
}
/* method modelize_class#AType#checked_mtype= for (self: Object, Bool) */
void VIRTUAL_modelize_class__AType__checked_mtype_61d(val* self, short int p0) {
{ /* Inline modelize_class#AType#checked_mtype= (self,p0) on <self:Object(AType)> */
self->attrs[COLOR_modelize_class__AType___checked_mtype].s = p0; /* _checked_mtype on <self:Object(AType)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
