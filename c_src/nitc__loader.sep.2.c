#include "nitc__loader.sep.0.h"
/* method loader$ModelBuilder$build_module_importation for (self: ModelBuilder, AModule) */
void nitc__loader___ModelBuilder___build_module_importation(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
short int var /* : Bool */;
short int var2 /* : Bool */;
val* var4 /* : nullable MModule */;
val* var6 /* : nullable MModule */;
val* var_mmodule /* var mmodule: MModule */;
short int var_stdimport /* var stdimport: Bool */;
val* var7 /* : Array[MModule] */;
val* var_imported_modules /* var imported_modules: Array[MModule] */;
val* var8 /* : ANodes[AImport] */;
val* var10 /* : ANodes[AImport] */;
val* var_ /* var : ANodes[AImport] */;
val* var11 /* : Iterator[ANode] */;
val* var_12 /* var : Iterator[AImport] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_aimport /* var aimport: AImport */;
static val* varonce;
val* var15 /* : String */;
char* var16 /* : CString */;
val* var17 /* : String */;
val* var18 /* : nullable Int */;
val* var19 /* : nullable Int */;
val* var20 /* : nullable Bool */;
val* var21 /* : nullable Bool */;
val* var22 /* : Array[AAnnotation] */;
val* var_atconditionals /* var atconditionals: Array[AAnnotation] */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
int cltype;
int idtype;
short int var26 /* : Bool */;
val* var27 /* : AModuleName */;
val* var29 /* : AModuleName */;
val* var30 /* : nullable MGroup */;
val* var32 /* : nullable MGroup */;
val* var33 /* : nullable MModule */;
val* var_sup /* var sup: nullable MModule */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
val* var42 /* : nullable AModule */;
val* var_ast /* var ast: nullable AModule */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
val* var52 /* : AVisibility */;
val* var54 /* : AVisibility */;
val* var55 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: MVisibility */;
val* var56 /* : Sys */;
val* var57 /* : MVisibility */;
short int var58 /* : Bool */;
short int var60 /* : Bool */;
short int var62 /* : Bool */;
val* var64 /* : AVisibility */;
val* var66 /* : AVisibility */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : CString */;
val* var70 /* : String */;
val* var71 /* : nullable Int */;
val* var72 /* : nullable Int */;
val* var73 /* : nullable Bool */;
val* var74 /* : nullable Bool */;
short int var77 /* : Bool */;
short int var79 /* : Bool */;
short int var81 /* : Bool */;
val* var82 /* : AModuleName */;
val* var84 /* : AModuleName */;
val* var86 /* : NativeArray[String] */;
static val* varonce85;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : CString */;
val* var90 /* : String */;
val* var91 /* : nullable Int */;
val* var92 /* : nullable Int */;
val* var93 /* : nullable Bool */;
val* var94 /* : nullable Bool */;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : CString */;
val* var98 /* : String */;
val* var99 /* : nullable Int */;
val* var100 /* : nullable Int */;
val* var101 /* : nullable Bool */;
val* var102 /* : nullable Bool */;
val* var103 /* : String */;
val* var104 /* : String */;
val* var107 /* : POSetElement[MModule] */;
val* var109 /* : POSetElement[MModule] */;
short int var110 /* : Bool */;
val* var111 /* : AModuleName */;
val* var113 /* : AModuleName */;
val* var115 /* : NativeArray[String] */;
static val* varonce114;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : CString */;
val* var119 /* : String */;
val* var120 /* : nullable Int */;
val* var121 /* : nullable Int */;
val* var122 /* : nullable Bool */;
val* var123 /* : nullable Bool */;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : CString */;
val* var127 /* : String */;
val* var128 /* : nullable Int */;
val* var129 /* : nullable Int */;
val* var130 /* : nullable Bool */;
val* var131 /* : nullable Bool */;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : CString */;
val* var135 /* : String */;
val* var136 /* : nullable Int */;
val* var137 /* : nullable Int */;
val* var138 /* : nullable Bool */;
val* var139 /* : nullable Bool */;
val* var140 /* : String */;
val* var141 /* : String */;
val* var142 /* : String */;
static val* varonce145;
val* var146 /* : String */;
char* var147 /* : CString */;
val* var148 /* : String */;
val* var149 /* : nullable Int */;
val* var150 /* : nullable Int */;
val* var151 /* : nullable Bool */;
val* var152 /* : nullable Bool */;
val* var_mod_name /* var mod_name: String */;
val* var153 /* : nullable MModule */;
val* var_sup154 /* var sup: nullable MModule */;
short int var155 /* : Bool */;
short int var156 /* : Bool */;
short int var158 /* : Bool */;
short int var160 /* : Bool */;
val* var163 /* : Sys */;
val* var164 /* : MVisibility */;
val* var165 /* : ANodes[AImport] */;
val* var167 /* : ANodes[AImport] */;
val* var_168 /* var : ANodes[AImport] */;
val* var169 /* : Iterator[ANode] */;
val* var_170 /* var : Iterator[AImport] */;
short int var171 /* : Bool */;
val* var173 /* : nullable Object */;
val* var_aimport174 /* var aimport: AImport */;
short int var175 /* : Bool */;
int cltype176;
int idtype177;
short int var178 /* : Bool */;
static val* varonce180;
val* var181 /* : String */;
char* var182 /* : CString */;
val* var183 /* : String */;
val* var184 /* : nullable Int */;
val* var185 /* : nullable Int */;
val* var186 /* : nullable Bool */;
val* var187 /* : nullable Bool */;
val* var188 /* : Array[AAnnotation] */;
val* var_atconditionals189 /* var atconditionals: Array[AAnnotation] */;
short int var190 /* : Bool */;
val* var191 /* : AModuleName */;
val* var193 /* : AModuleName */;
val* var194 /* : nullable MGroup */;
val* var196 /* : nullable MGroup */;
val* var197 /* : nullable MModule */;
val* var_suppath /* var suppath: nullable MModule */;
short int var198 /* : Bool */;
short int var199 /* : Bool */;
short int var201 /* : Bool */;
short int var203 /* : Bool */;
val* var_204 /* var : Array[AAnnotation] */;
val* var205 /* : IndexedIterator[nullable Object] */;
val* var_206 /* var : IndexedIterator[AAnnotation] */;
short int var207 /* : Bool */;
val* var209 /* : nullable Object */;
val* var_atconditional /* var atconditional: AAnnotation */;
val* var210 /* : ANodes[AExpr] */;
val* var212 /* : ANodes[AExpr] */;
val* var_nargs /* var nargs: ANodes[AExpr] */;
short int var213 /* : Bool */;
static val* varonce214;
val* var215 /* : String */;
char* var216 /* : CString */;
val* var217 /* : String */;
val* var218 /* : nullable Int */;
val* var219 /* : nullable Int */;
val* var220 /* : nullable Bool */;
val* var221 /* : nullable Bool */;
val* var223 /* : Array[MModule] */;
val* var_rule /* var rule: Array[MModule] */;
val* var_224 /* var : ANodes[AExpr] */;
val* var225 /* : Iterator[ANode] */;
val* var_226 /* var : Iterator[AExpr] */;
short int var227 /* : Bool */;
val* var229 /* : nullable Object */;
val* var_narg /* var narg: AExpr */;
val* var230 /* : nullable String */;
val* var_id /* var id: nullable String */;
short int var231 /* : Bool */;
short int var232 /* : Bool */;
static val* varonce233;
val* var234 /* : String */;
char* var235 /* : CString */;
val* var236 /* : String */;
val* var237 /* : nullable Int */;
val* var238 /* : nullable Int */;
val* var239 /* : nullable Bool */;
val* var240 /* : nullable Bool */;
val* var242 /* : nullable MGroup */;
val* var244 /* : nullable MGroup */;
val* var245 /* : nullable MModule */;
val* var_mp /* var mp: nullable MModule */;
short int var246 /* : Bool */;
short int var247 /* : Bool */;
short int var249 /* : Bool */;
short int var251 /* : Bool */;
val* var252 /* : Array[SequenceRead[MModule]] */;
val* var254 /* : Array[SequenceRead[MModule]] */;
val* var255 /* : ToolContext */;
val* var257 /* : ToolContext */;
val* var259 /* : NativeArray[String] */;
static val* varonce258;
static val* varonce260;
val* var261 /* : String */;
char* var262 /* : CString */;
val* var263 /* : String */;
val* var264 /* : nullable Int */;
val* var265 /* : nullable Int */;
val* var266 /* : nullable Bool */;
val* var267 /* : nullable Bool */;
val* var268 /* : String */;
val* var269 /* : POSetElement[MModule] */;
val* var271 /* : POSetElement[MModule] */;
val* var272 /* : Collection[nullable Object] */;
static val* varonce273;
val* var274 /* : String */;
char* var275 /* : CString */;
val* var276 /* : String */;
val* var277 /* : nullable Int */;
val* var278 /* : nullable Int */;
val* var279 /* : nullable Bool */;
val* var280 /* : nullable Bool */;
val* var281 /* : String */;
val* var282 /* : String */;
val* var283 /* : POSetElement[MModule] */;
val* var285 /* : POSetElement[MModule] */;
val* var286 /* : Collection[nullable Object] */;
val* var_287 /* var : Collection[MModule] */;
val* var288 /* : Iterator[nullable Object] */;
val* var_289 /* var : Iterator[MModule] */;
short int var290 /* : Bool */;
val* var292 /* : nullable Object */;
val* var_sup293 /* var sup: MModule */;
val* var294 /* : String */;
val* var296 /* : String */;
static val* varonce297;
val* var298 /* : String */;
char* var299 /* : CString */;
val* var300 /* : String */;
val* var301 /* : nullable Int */;
val* var302 /* : nullable Int */;
val* var303 /* : nullable Bool */;
val* var304 /* : nullable Bool */;
short int var305 /* : Bool */;
val* var306 /* : Sys */;
val* var307 /* : MVisibility */;
val* var308 /* : POSetElement[MModule] */;
val* var310 /* : POSetElement[MModule] */;
val* var311 /* : Collection[nullable Object] */;
val* var_directs /* var directs: Collection[MModule] */;
val* var312 /* : ANodes[AImport] */;
val* var314 /* : ANodes[AImport] */;
val* var_315 /* var : ANodes[AImport] */;
val* var316 /* : Iterator[ANode] */;
val* var_317 /* var : Iterator[AImport] */;
short int var318 /* : Bool */;
val* var320 /* : nullable Object */;
val* var_nim /* var nim: AImport */;
short int var321 /* : Bool */;
int cltype322;
int idtype323;
short int var324 /* : Bool */;
val* var326 /* : nullable MModule */;
val* var328 /* : nullable MModule */;
val* var_im /* var im: nullable MModule */;
short int var329 /* : Bool */;
short int var330 /* : Bool */;
short int var332 /* : Bool */;
short int var334 /* : Bool */;
short int var335 /* : Bool */;
var_nmodule = p0;
{
{ /* Inline loader$AModule$is_importation_done (var_nmodule) on <var_nmodule:AModule> */
var2 = var_nmodule->attrs[COLOR_nitc__loader__AModule___is_importation_done].s; /* _is_importation_done on <var_nmodule:AModule> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var){
goto RET_LABEL;
} else {
}
{
{ /* Inline loader$AModule$is_importation_done= (var_nmodule,1) on <var_nmodule:AModule> */
var_nmodule->attrs[COLOR_nitc__loader__AModule___is_importation_done].s = 1; /* _is_importation_done on <var_nmodule:AModule> */
RET_LABEL3:(void)0;
}
}
{
{ /* Inline loader$AModule$mmodule (var_nmodule) on <var_nmodule:AModule> */
var6 = var_nmodule->attrs[COLOR_nitc__loader__AModule___mmodule].val; /* _mmodule on <var_nmodule:AModule> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 909);
fatal_exit(1);
}
var_mmodule = var4;
var_stdimport = 1;
var7 = NEW_core__Array(&type_core__Array__nitc__MModule);
{
core___core__Array___core__kernel__Object__init(var7); /* Direct call array$Array$init on <var7:Array[MModule]>*/
}
var_imported_modules = var7;
{
{ /* Inline parser_nodes$AModule$n_imports (var_nmodule) on <var_nmodule:AModule> */
var10 = var_nmodule->attrs[COLOR_nitc__parser_nodes__AModule___n_imports].val; /* _n_imports on <var_nmodule:AModule> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_imports");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1119);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_ = var8;
{
var11 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_);
}
var_12 = var11;
for(;;) {
{
var13 = ((short int(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_12); /* is_ok on <var_12:Iterator[AImport]>*/
}
if (var13){
} else {
goto BREAK_label;
}
{
var14 = ((val*(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_12); /* item on <var_12:Iterator[AImport]>*/
}
var_aimport = var14;
if (likely(varonce!=NULL)) {
var15 = varonce;
} else {
var16 = "conditional";
var18 = (val*)(11l<<2|1);
var19 = (val*)(11l<<2|1);
var20 = (val*)((long)(0)<<2|3);
var21 = (val*)((long)(0)<<2|3);
var17 = core__flat___CString___to_s_unsafe(var16, var18, var19, var20, var21);
var15 = var17;
varonce = var15;
}
{
var22 = nitc___nitc__Prod___get_annotations(var_aimport, var15);
}
var_atconditionals = var22;
{
var23 = core___core__Collection___not_empty(var_atconditionals);
}
if (var23){
goto BREAK_label24;
} else {
}
var_stdimport = 0;
/* <var_aimport:AImport> isa AStdImport */
cltype = type_nitc__AStdImport.color;
idtype = type_nitc__AStdImport.id;
if(cltype >= var_aimport->type->table_size) {
var25 = 0;
} else {
var25 = var_aimport->type->type_table[cltype] == idtype;
}
var26 = !var25;
if (var26){
goto BREAK_label24;
} else {
}
{
{ /* Inline parser_nodes$AStdImport$n_name (var_aimport) on <var_aimport:AImport(AStdImport)> */
var29 = var_aimport->attrs[COLOR_nitc__parser_nodes__AStdImport___n_name].val; /* _n_name on <var_aimport:AImport(AStdImport)> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1167);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline mmodule$MModule$mgroup (var_mmodule) on <var_mmodule:MModule> */
var32 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___mgroup].val; /* _mgroup on <var_mmodule:MModule> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
var33 = nitc__loader___ModelBuilder___seach_module_by_amodule_name(self, var27, var30);
}
var_sup = var33;
if (var_sup == NULL) {
var34 = 1; /* is null */
} else {
var34 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_sup,((val*)NULL)) on <var_sup:nullable MModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_sup,var_other) on <var_sup:nullable MModule(MModule)> */
var39 = var_sup == var_other;
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
{
{ /* Inline model_base$MEntity$is_broken= (var_mmodule,1) on <var_mmodule:MModule> */
var_mmodule->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mmodule:MModule> */
RET_LABEL40:(void)0;
}
}
{
{ /* Inline loader$AModule$mmodule= (var_nmodule,((val*)NULL)) on <var_nmodule:AModule> */
var_nmodule->attrs[COLOR_nitc__loader__AModule___mmodule].val = ((val*)NULL); /* _mmodule on <var_nmodule:AModule> */
RET_LABEL41:(void)0;
}
}
goto BREAK_label24;
} else {
}
{
var42 = nitc__loader___MModule___load(var_sup, self);
}
var_ast = var42;
if (var_ast == NULL) {
var43 = 1; /* is null */
} else {
var43 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_ast,((val*)NULL)) on <var_ast:nullable AModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_ast,var_other) on <var_ast:nullable AModule(AModule)> */
var48 = var_ast == var_other;
var46 = var48;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
var44 = var46;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
var43 = var44;
}
if (var43){
{
{ /* Inline model_base$MEntity$is_broken= (var_mmodule,1) on <var_mmodule:MModule> */
var_mmodule->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mmodule:MModule> */
RET_LABEL49:(void)0;
}
}
{
{ /* Inline loader$AModule$mmodule= (var_nmodule,((val*)NULL)) on <var_nmodule:AModule> */
var_nmodule->attrs[COLOR_nitc__loader__AModule___mmodule].val = ((val*)NULL); /* _mmodule on <var_nmodule:AModule> */
RET_LABEL50:(void)0;
}
}
goto BREAK_label24;
} else {
}
{
{ /* Inline loader$AStdImport$mmodule= (var_aimport,var_sup) on <var_aimport:AImport(AStdImport)> */
var_aimport->attrs[COLOR_nitc__loader__AStdImport___mmodule].val = var_sup; /* _mmodule on <var_aimport:AImport(AStdImport)> */
RET_LABEL51:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_imported_modules, var_sup); /* Direct call array$Array$add on <var_imported_modules:Array[MModule]>*/
}
{
{ /* Inline parser_nodes$AImport$n_visibility (var_aimport) on <var_aimport:AImport(AStdImport)> */
var54 = var_aimport->attrs[COLOR_nitc__parser_nodes__AImport___n_visibility].val; /* _n_visibility on <var_aimport:AImport(AStdImport)> */
if (unlikely(var54 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1157);
fatal_exit(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
var55 = ((val*(*)(val* self))(var52->class->vft[COLOR_nitc__modelbuilder_base__AVisibility__mvisibility]))(var52); /* mvisibility on <var52:AVisibility>*/
}
var_mvisibility = var55;
var56 = glob_sys;
{
var57 = nitc__model_base___core__Sys___protected_visibility(var56);
}
{
{ /* Inline kernel$Object$== (var_mvisibility,var57) on <var_mvisibility:MVisibility> */
var_other = var57;
{
{ /* Inline kernel$Object$is_same_instance (var_mvisibility,var_other) on <var_mvisibility:MVisibility> */
var62 = var_mvisibility == var_other;
var60 = var62;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
var58 = var60;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
}
if (var58){
{
{ /* Inline model_base$MEntity$is_broken= (var_mmodule,1) on <var_mmodule:MModule> */
var_mmodule->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mmodule:MModule> */
RET_LABEL63:(void)0;
}
}
{
{ /* Inline parser_nodes$AImport$n_visibility (var_aimport) on <var_aimport:AImport(AStdImport)> */
var66 = var_aimport->attrs[COLOR_nitc__parser_nodes__AImport___n_visibility].val; /* _n_visibility on <var_aimport:AImport(AStdImport)> */
if (unlikely(var66 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1157);
fatal_exit(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = "Error: only properties can be protected.";
var71 = (val*)(40l<<2|1);
var72 = (val*)(40l<<2|1);
var73 = (val*)((long)(0)<<2|3);
var74 = (val*)((long)(0)<<2|3);
var70 = core__flat___CString___to_s_unsafe(var69, var71, var72, var73, var74);
var68 = var70;
varonce67 = var68;
}
{
nitc___nitc__ModelBuilder___error(self, var64, var68); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
{
{ /* Inline model_base$MEntity$is_broken= (var_mmodule,1) on <var_mmodule:MModule> */
var_mmodule->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mmodule:MModule> */
RET_LABEL75:(void)0;
}
}
{
{ /* Inline loader$AModule$mmodule= (var_nmodule,((val*)NULL)) on <var_nmodule:AModule> */
var_nmodule->attrs[COLOR_nitc__loader__AModule___mmodule].val = ((val*)NULL); /* _mmodule on <var_nmodule:AModule> */
RET_LABEL76:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Object$== (var_sup,var_mmodule) on <var_sup:nullable MModule(MModule)> */
var_other = var_mmodule;
{
{ /* Inline kernel$Object$is_same_instance (var_sup,var_other) on <var_sup:nullable MModule(MModule)> */
var81 = var_sup == var_other;
var79 = var81;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
var77 = var79;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
}
if (var77){
{
{ /* Inline parser_nodes$AStdImport$n_name (var_aimport) on <var_aimport:AImport(AStdImport)> */
var84 = var_aimport->attrs[COLOR_nitc__parser_nodes__AStdImport___n_name].val; /* _n_name on <var_aimport:AImport(AStdImport)> */
if (unlikely(var84 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1167);
fatal_exit(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
if (unlikely(varonce85==NULL)) {
var86 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce87!=NULL)) {
var88 = varonce87;
} else {
var89 = "Error: dependency loop in module ";
var91 = (val*)(33l<<2|1);
var92 = (val*)(33l<<2|1);
var93 = (val*)((long)(0)<<2|3);
var94 = (val*)((long)(0)<<2|3);
var90 = core__flat___CString___to_s_unsafe(var89, var91, var92, var93, var94);
var88 = var90;
varonce87 = var88;
}
((struct instance_core__NativeArray*)var86)->values[0]=var88;
if (likely(varonce95!=NULL)) {
var96 = varonce95;
} else {
var97 = ".";
var99 = (val*)(1l<<2|1);
var100 = (val*)(1l<<2|1);
var101 = (val*)((long)(0)<<2|3);
var102 = (val*)((long)(0)<<2|3);
var98 = core__flat___CString___to_s_unsafe(var97, var99, var100, var101, var102);
var96 = var98;
varonce95 = var96;
}
((struct instance_core__NativeArray*)var86)->values[2]=var96;
} else {
var86 = varonce85;
varonce85 = NULL;
}
{
var103 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmodule); /* to_s on <var_mmodule:MModule>*/
}
((struct instance_core__NativeArray*)var86)->values[1]=var103;
{
var104 = ((val*(*)(val* self))(var86->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var86); /* native_to_s on <var86:NativeArray[String]>*/
}
varonce85 = var86;
{
nitc___nitc__ModelBuilder___error(self, var82, var104); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
{
{ /* Inline model_base$MEntity$is_broken= (var_mmodule,1) on <var_mmodule:MModule> */
var_mmodule->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mmodule:MModule> */
RET_LABEL105:(void)0;
}
}
{
{ /* Inline loader$AModule$mmodule= (var_nmodule,((val*)NULL)) on <var_nmodule:AModule> */
var_nmodule->attrs[COLOR_nitc__loader__AModule___mmodule].val = ((val*)NULL); /* _mmodule on <var_nmodule:AModule> */
RET_LABEL106:(void)0;
}
}
} else {
}
{
{ /* Inline mmodule$MModule$in_importation (var_sup) on <var_sup:nullable MModule(MModule)> */
var109 = var_sup->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var_sup:nullable MModule(MModule)> */
if (unlikely(var109 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var107 = var109;
RET_LABEL108:(void)0;
}
}
{
var110 = poset___poset__POSetElement____60d(var107, var_mmodule);
}
if (var110){
{
{ /* Inline parser_nodes$AStdImport$n_name (var_aimport) on <var_aimport:AImport(AStdImport)> */
var113 = var_aimport->attrs[COLOR_nitc__parser_nodes__AStdImport___n_name].val; /* _n_name on <var_aimport:AImport(AStdImport)> */
if (unlikely(var113 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1167);
fatal_exit(1);
}
var111 = var113;
RET_LABEL112:(void)0;
}
}
if (unlikely(varonce114==NULL)) {
var115 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce116!=NULL)) {
var117 = varonce116;
} else {
var118 = "Error: dependency loop between modules ";
var120 = (val*)(39l<<2|1);
var121 = (val*)(39l<<2|1);
var122 = (val*)((long)(0)<<2|3);
var123 = (val*)((long)(0)<<2|3);
var119 = core__flat___CString___to_s_unsafe(var118, var120, var121, var122, var123);
var117 = var119;
varonce116 = var117;
}
((struct instance_core__NativeArray*)var115)->values[0]=var117;
if (likely(varonce124!=NULL)) {
var125 = varonce124;
} else {
var126 = " and ";
var128 = (val*)(5l<<2|1);
var129 = (val*)(5l<<2|1);
var130 = (val*)((long)(0)<<2|3);
var131 = (val*)((long)(0)<<2|3);
var127 = core__flat___CString___to_s_unsafe(var126, var128, var129, var130, var131);
var125 = var127;
varonce124 = var125;
}
((struct instance_core__NativeArray*)var115)->values[2]=var125;
if (likely(varonce132!=NULL)) {
var133 = varonce132;
} else {
var134 = ".";
var136 = (val*)(1l<<2|1);
var137 = (val*)(1l<<2|1);
var138 = (val*)((long)(0)<<2|3);
var139 = (val*)((long)(0)<<2|3);
var135 = core__flat___CString___to_s_unsafe(var134, var136, var137, var138, var139);
var133 = var135;
varonce132 = var133;
}
((struct instance_core__NativeArray*)var115)->values[4]=var133;
} else {
var115 = varonce114;
varonce114 = NULL;
}
{
var140 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmodule); /* to_s on <var_mmodule:MModule>*/
}
((struct instance_core__NativeArray*)var115)->values[1]=var140;
{
var141 = ((val*(*)(val* self))(var_sup->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_sup); /* to_s on <var_sup:nullable MModule(MModule)>*/
}
((struct instance_core__NativeArray*)var115)->values[3]=var141;
{
var142 = ((val*(*)(val* self))(var115->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var115); /* native_to_s on <var115:NativeArray[String]>*/
}
varonce114 = var115;
{
nitc___nitc__ModelBuilder___error(self, var111, var142); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
{
{ /* Inline model_base$MEntity$is_broken= (var_mmodule,1) on <var_mmodule:MModule> */
var_mmodule->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mmodule:MModule> */
RET_LABEL143:(void)0;
}
}
{
{ /* Inline loader$AModule$mmodule= (var_nmodule,((val*)NULL)) on <var_nmodule:AModule> */
var_nmodule->attrs[COLOR_nitc__loader__AModule___mmodule].val = ((val*)NULL); /* _mmodule on <var_nmodule:AModule> */
RET_LABEL144:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
nitc___nitc__MModule___set_visibility_for(var_mmodule, var_sup, var_mvisibility); /* Direct call mmodule$MModule$set_visibility_for on <var_mmodule:MModule>*/
}
BREAK_label24: (void)0;
{
((void(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_12); /* next on <var_12:Iterator[AImport]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_12); /* finish on <var_12:Iterator[AImport]>*/
}
if (var_stdimport){
if (likely(varonce145!=NULL)) {
var146 = varonce145;
} else {
var147 = "core";
var149 = (val*)(4l<<2|1);
var150 = (val*)(4l<<2|1);
var151 = (val*)((long)(0)<<2|3);
var152 = (val*)((long)(0)<<2|3);
var148 = core__flat___CString___to_s_unsafe(var147, var149, var150, var151, var152);
var146 = var148;
varonce145 = var146;
}
var_mod_name = var146;
{
var153 = nitc__loader___ModelBuilder___get_mmodule_by_name(self, var_nmodule, ((val*)NULL), var_mod_name);
}
var_sup154 = var153;
if (var_sup154 == NULL) {
var155 = 1; /* is null */
} else {
var155 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_sup154,((val*)NULL)) on <var_sup154:nullable MModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_sup154,var_other) on <var_sup154:nullable MModule(MModule)> */
var160 = var_sup154 == var_other;
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
{
{ /* Inline model_base$MEntity$is_broken= (var_mmodule,1) on <var_mmodule:MModule> */
var_mmodule->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mmodule:MModule> */
RET_LABEL161:(void)0;
}
}
{
{ /* Inline loader$AModule$mmodule= (var_nmodule,((val*)NULL)) on <var_nmodule:AModule> */
var_nmodule->attrs[COLOR_nitc__loader__AModule___mmodule].val = ((val*)NULL); /* _mmodule on <var_nmodule:AModule> */
RET_LABEL162:(void)0;
}
}
} else {
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_imported_modules, var_sup154); /* Direct call array$Array$add on <var_imported_modules:Array[MModule]>*/
}
var163 = glob_sys;
{
var164 = nitc__model_base___core__Sys___public_visibility(var163);
}
{
nitc___nitc__MModule___set_visibility_for(var_mmodule, var_sup154, var164); /* Direct call mmodule$MModule$set_visibility_for on <var_mmodule:MModule>*/
}
}
} else {
}
{
{ /* Inline parser_nodes$AModule$n_imports (var_nmodule) on <var_nmodule:AModule> */
var167 = var_nmodule->attrs[COLOR_nitc__parser_nodes__AModule___n_imports].val; /* _n_imports on <var_nmodule:AModule> */
if (unlikely(var167 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_imports");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1119);
fatal_exit(1);
}
var165 = var167;
RET_LABEL166:(void)0;
}
}
var_168 = var165;
{
var169 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_168);
}
var_170 = var169;
for(;;) {
{
var171 = ((short int(*)(val* self))((((long)var_170&3)?class_info[((long)var_170&3)]:var_170->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_170); /* is_ok on <var_170:Iterator[AImport]>*/
}
if (var171){
} else {
goto BREAK_label172;
}
{
var173 = ((val*(*)(val* self))((((long)var_170&3)?class_info[((long)var_170&3)]:var_170->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_170); /* item on <var_170:Iterator[AImport]>*/
}
var_aimport174 = var173;
/* <var_aimport174:AImport> isa AStdImport */
cltype176 = type_nitc__AStdImport.color;
idtype177 = type_nitc__AStdImport.id;
if(cltype176 >= var_aimport174->type->table_size) {
var175 = 0;
} else {
var175 = var_aimport174->type->type_table[cltype176] == idtype177;
}
var178 = !var175;
if (var178){
goto BREAK_label179;
} else {
}
if (likely(varonce180!=NULL)) {
var181 = varonce180;
} else {
var182 = "conditional";
var184 = (val*)(11l<<2|1);
var185 = (val*)(11l<<2|1);
var186 = (val*)((long)(0)<<2|3);
var187 = (val*)((long)(0)<<2|3);
var183 = core__flat___CString___to_s_unsafe(var182, var184, var185, var186, var187);
var181 = var183;
varonce180 = var181;
}
{
var188 = nitc___nitc__Prod___get_annotations(var_aimport174, var181);
}
var_atconditionals189 = var188;
{
var190 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_atconditionals189);
}
if (var190){
goto BREAK_label179;
} else {
}
{
{ /* Inline parser_nodes$AStdImport$n_name (var_aimport174) on <var_aimport174:AImport(AStdImport)> */
var193 = var_aimport174->attrs[COLOR_nitc__parser_nodes__AStdImport___n_name].val; /* _n_name on <var_aimport174:AImport(AStdImport)> */
if (unlikely(var193 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1167);
fatal_exit(1);
}
var191 = var193;
RET_LABEL192:(void)0;
}
}
{
{ /* Inline mmodule$MModule$mgroup (var_mmodule) on <var_mmodule:MModule> */
var196 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___mgroup].val; /* _mgroup on <var_mmodule:MModule> */
var194 = var196;
RET_LABEL195:(void)0;
}
}
{
var197 = nitc__loader___ModelBuilder___seach_module_by_amodule_name(self, var191, var194);
}
var_suppath = var197;
if (var_suppath == NULL) {
var198 = 1; /* is null */
} else {
var198 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_suppath,((val*)NULL)) on <var_suppath:nullable MModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_suppath,var_other) on <var_suppath:nullable MModule(MModule)> */
var203 = var_suppath == var_other;
var201 = var203;
goto RET_LABEL202;
RET_LABEL202:(void)0;
}
}
var199 = var201;
goto RET_LABEL200;
RET_LABEL200:(void)0;
}
var198 = var199;
}
if (var198){
goto BREAK_label179;
} else {
}
var_204 = var_atconditionals189;
{
var205 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_204);
}
var_206 = var205;
for(;;) {
{
var207 = ((short int(*)(val* self))((((long)var_206&3)?class_info[((long)var_206&3)]:var_206->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_206); /* is_ok on <var_206:IndexedIterator[AAnnotation]>*/
}
if (var207){
} else {
goto BREAK_label208;
}
{
var209 = ((val*(*)(val* self))((((long)var_206&3)?class_info[((long)var_206&3)]:var_206->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_206); /* item on <var_206:IndexedIterator[AAnnotation]>*/
}
var_atconditional = var209;
{
{ /* Inline parser_nodes$AAnnotation$n_args (var_atconditional) on <var_atconditional:AAnnotation> */
var212 = var_atconditional->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_args].val; /* _n_args on <var_atconditional:AAnnotation> */
if (unlikely(var212 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 3007);
fatal_exit(1);
}
var210 = var212;
RET_LABEL211:(void)0;
}
}
var_nargs = var210;
{
var213 = nitc___nitc__ANodes___core__abstract_collection__Collection__is_empty(var_nargs);
}
if (var213){
if (likely(varonce214!=NULL)) {
var215 = varonce214;
} else {
var216 = "Syntax Error: `conditional` expects module identifiers as arguments.";
var218 = (val*)(68l<<2|1);
var219 = (val*)(68l<<2|1);
var220 = (val*)((long)(0)<<2|3);
var221 = (val*)((long)(0)<<2|3);
var217 = core__flat___CString___to_s_unsafe(var216, var218, var219, var220, var221);
var215 = var217;
varonce214 = var215;
}
{
nitc___nitc__ModelBuilder___error(self, var_atconditional, var215); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
goto BREAK_label222;
} else {
}
var223 = NEW_core__Array(&type_core__Array__nitc__MModule);
{
core___core__Array___core__kernel__Object__init(var223); /* Direct call array$Array$init on <var223:Array[MModule]>*/
}
var_rule = var223;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_rule, var_suppath); /* Direct call array$Array$add on <var_rule:Array[MModule]>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_rule, var_mmodule); /* Direct call array$Array$add on <var_rule:Array[MModule]>*/
}
var_224 = var_nargs;
{
var225 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_224);
}
var_226 = var225;
for(;;) {
{
var227 = ((short int(*)(val* self))((((long)var_226&3)?class_info[((long)var_226&3)]:var_226->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_226); /* is_ok on <var_226:Iterator[AExpr]>*/
}
if (var227){
} else {
goto BREAK_label228;
}
{
var229 = ((val*(*)(val* self))((((long)var_226&3)?class_info[((long)var_226&3)]:var_226->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_226); /* item on <var_226:Iterator[AExpr]>*/
}
var_narg = var229;
{
var230 = nitc__parser_work___AExpr___as_id(var_narg);
}
var_id = var230;
if (var_id == NULL) {
var231 = 1; /* is null */
} else {
var231 = 0; /* arg is null but recv is not */
}
if (0) {
var232 = ((short int(*)(val* self, val* p0))(var_id->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_id, ((val*)NULL)); /* == on <var_id:nullable String>*/
var231 = var232;
}
if (var231){
if (likely(varonce233!=NULL)) {
var234 = varonce233;
} else {
var235 = "Syntax Error: `conditional` expects module identifier as arguments.";
var237 = (val*)(67l<<2|1);
var238 = (val*)(67l<<2|1);
var239 = (val*)((long)(0)<<2|3);
var240 = (val*)((long)(0)<<2|3);
var236 = core__flat___CString___to_s_unsafe(var235, var237, var238, var239, var240);
var234 = var236;
varonce233 = var234;
}
{
nitc___nitc__ModelBuilder___error(self, var_narg, var234); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
goto BREAK_label241;
} else {
}
{
{ /* Inline mmodule$MModule$mgroup (var_mmodule) on <var_mmodule:MModule> */
var244 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___mgroup].val; /* _mgroup on <var_mmodule:MModule> */
var242 = var244;
RET_LABEL243:(void)0;
}
}
{
var245 = nitc__loader___ModelBuilder___search_mmodule_by_name(self, var_narg, var242, var_id);
}
var_mp = var245;
if (var_mp == NULL) {
var246 = 1; /* is null */
} else {
var246 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mp,((val*)NULL)) on <var_mp:nullable MModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mp,var_other) on <var_mp:nullable MModule(MModule)> */
var251 = var_mp == var_other;
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
goto BREAK_label241;
} else {
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_rule, var_mp); /* Direct call array$Array$add on <var_rule:Array[MModule]>*/
}
BREAK_label241: (void)0;
{
((void(*)(val* self))((((long)var_226&3)?class_info[((long)var_226&3)]:var_226->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_226); /* next on <var_226:Iterator[AExpr]>*/
}
}
BREAK_label228: (void)0;
{
((void(*)(val* self))((((long)var_226&3)?class_info[((long)var_226&3)]:var_226->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_226); /* finish on <var_226:Iterator[AExpr]>*/
}
{
{ /* Inline loader$ModelBuilder$conditional_importations (self) on <self:ModelBuilder> */
var254 = self->attrs[COLOR_nitc__loader__ModelBuilder___conditional_importations].val; /* _conditional_importations on <self:ModelBuilder> */
if (unlikely(var254 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conditional_importations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 1040);
fatal_exit(1);
}
var252 = var254;
RET_LABEL253:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var252, var_rule); /* Direct call array$Array$add on <var252:Array[SequenceRead[MModule]]>*/
}
BREAK_label222: (void)0;
{
((void(*)(val* self))((((long)var_206&3)?class_info[((long)var_206&3)]:var_206->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_206); /* next on <var_206:IndexedIterator[AAnnotation]>*/
}
}
BREAK_label208: (void)0;
{
((void(*)(val* self))((((long)var_206&3)?class_info[((long)var_206&3)]:var_206->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_206); /* finish on <var_206:IndexedIterator[AAnnotation]>*/
}
BREAK_label179: (void)0;
{
((void(*)(val* self))((((long)var_170&3)?class_info[((long)var_170&3)]:var_170->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_170); /* next on <var_170:Iterator[AImport]>*/
}
}
BREAK_label172: (void)0;
{
((void(*)(val* self))((((long)var_170&3)?class_info[((long)var_170&3)]:var_170->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_170); /* finish on <var_170:Iterator[AImport]>*/
}
{
nitc___nitc__MModule___set_imported_mmodules(var_mmodule, var_imported_modules); /* Direct call mmodule$MModule$set_imported_mmodules on <var_mmodule:MModule>*/
}
{
nitc__loader___ModelBuilder___apply_conditional_importations(self, var_mmodule); /* Direct call loader$ModelBuilder$apply_conditional_importations on <self:ModelBuilder>*/
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var257 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var257 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var255 = var257;
RET_LABEL256:(void)0;
}
}
if (unlikely(varonce258==NULL)) {
var259 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce260!=NULL)) {
var261 = varonce260;
} else {
var262 = " imports ";
var264 = (val*)(9l<<2|1);
var265 = (val*)(9l<<2|1);
var266 = (val*)((long)(0)<<2|3);
var267 = (val*)((long)(0)<<2|3);
var263 = core__flat___CString___to_s_unsafe(var262, var264, var265, var266, var267);
var261 = var263;
varonce260 = var261;
}
((struct instance_core__NativeArray*)var259)->values[1]=var261;
} else {
var259 = varonce258;
varonce258 = NULL;
}
{
var268 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmodule); /* to_s on <var_mmodule:MModule>*/
}
((struct instance_core__NativeArray*)var259)->values[0]=var268;
{
{ /* Inline mmodule$MModule$in_importation (var_mmodule) on <var_mmodule:MModule> */
var271 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var271 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var269 = var271;
RET_LABEL270:(void)0;
}
}
{
var272 = poset___poset__POSetElement___direct_greaters(var269);
}
if (likely(varonce273!=NULL)) {
var274 = varonce273;
} else {
var275 = ", ";
var277 = (val*)(2l<<2|1);
var278 = (val*)(2l<<2|1);
var279 = (val*)((long)(0)<<2|3);
var280 = (val*)((long)(0)<<2|3);
var276 = core__flat___CString___to_s_unsafe(var275, var277, var278, var279, var280);
var274 = var276;
varonce273 = var274;
}
{
var281 = core__abstract_text___Collection___join(var272, var274, ((val*)NULL));
}
((struct instance_core__NativeArray*)var259)->values[2]=var281;
{
var282 = ((val*(*)(val* self))(var259->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var259); /* native_to_s on <var259:NativeArray[String]>*/
}
varonce258 = var259;
{
nitc___nitc__ToolContext___info(var255, var282, 3l); /* Direct call toolcontext$ToolContext$info on <var255:ToolContext>*/
}
{
{ /* Inline mmodule$MModule$in_importation (var_mmodule) on <var_mmodule:MModule> */
var285 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var285 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var283 = var285;
RET_LABEL284:(void)0;
}
}
{
var286 = poset___poset__POSetElement___greaters(var283);
}
var_287 = var286;
{
var288 = ((val*(*)(val* self))((((long)var_287&3)?class_info[((long)var_287&3)]:var_287->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_287); /* iterator on <var_287:Collection[MModule]>*/
}
var_289 = var288;
for(;;) {
{
var290 = ((short int(*)(val* self))((((long)var_289&3)?class_info[((long)var_289&3)]:var_289->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_289); /* is_ok on <var_289:Iterator[MModule]>*/
}
if (var290){
} else {
goto BREAK_label291;
}
{
var292 = ((val*(*)(val* self))((((long)var_289&3)?class_info[((long)var_289&3)]:var_289->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_289); /* item on <var_289:Iterator[MModule]>*/
}
var_sup293 = var292;
{
{ /* Inline mmodule$MModule$name (var_sup293) on <var_sup293:MModule> */
var296 = var_sup293->attrs[COLOR_nitc__mmodule__MModule___name].val; /* _name on <var_sup293:MModule> */
if (unlikely(var296 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 100);
fatal_exit(1);
}
var294 = var296;
RET_LABEL295:(void)0;
}
}
if (likely(varonce297!=NULL)) {
var298 = varonce297;
} else {
var299 = "core";
var301 = (val*)(4l<<2|1);
var302 = (val*)(4l<<2|1);
var303 = (val*)((long)(0)<<2|3);
var304 = (val*)((long)(0)<<2|3);
var300 = core__flat___CString___to_s_unsafe(var299, var301, var302, var303, var304);
var298 = var300;
varonce297 = var298;
}
{
var305 = ((short int(*)(val* self, val* p0))(var294->class->vft[COLOR_core__kernel__Object___61d_61d]))(var294, var298); /* == on <var294:String>*/
}
if (var305){
var306 = glob_sys;
{
var307 = nitc__model_base___core__Sys___public_visibility(var306);
}
{
nitc___nitc__MModule___set_visibility_for(var_mmodule, var_sup293, var307); /* Direct call mmodule$MModule$set_visibility_for on <var_mmodule:MModule>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_289&3)?class_info[((long)var_289&3)]:var_289->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_289); /* next on <var_289:Iterator[MModule]>*/
}
}
BREAK_label291: (void)0;
{
((void(*)(val* self))((((long)var_289&3)?class_info[((long)var_289&3)]:var_289->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_289); /* finish on <var_289:Iterator[MModule]>*/
}
{
{ /* Inline mmodule$MModule$in_importation (var_mmodule) on <var_mmodule:MModule> */
var310 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var310 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var308 = var310;
RET_LABEL309:(void)0;
}
}
{
var311 = poset___poset__POSetElement___direct_greaters(var308);
}
var_directs = var311;
{
{ /* Inline parser_nodes$AModule$n_imports (var_nmodule) on <var_nmodule:AModule> */
var314 = var_nmodule->attrs[COLOR_nitc__parser_nodes__AModule___n_imports].val; /* _n_imports on <var_nmodule:AModule> */
if (unlikely(var314 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_imports");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1119);
fatal_exit(1);
}
var312 = var314;
RET_LABEL313:(void)0;
}
}
var_315 = var312;
{
var316 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_315);
}
var_317 = var316;
for(;;) {
{
var318 = ((short int(*)(val* self))((((long)var_317&3)?class_info[((long)var_317&3)]:var_317->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_317); /* is_ok on <var_317:Iterator[AImport]>*/
}
if (var318){
} else {
goto BREAK_label319;
}
{
var320 = ((val*(*)(val* self))((((long)var_317&3)?class_info[((long)var_317&3)]:var_317->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_317); /* item on <var_317:Iterator[AImport]>*/
}
var_nim = var320;
/* <var_nim:AImport> isa AStdImport */
cltype322 = type_nitc__AStdImport.color;
idtype323 = type_nitc__AStdImport.id;
if(cltype322 >= var_nim->type->table_size) {
var321 = 0;
} else {
var321 = var_nim->type->type_table[cltype322] == idtype323;
}
var324 = !var321;
if (var324){
goto BREAK_label325;
} else {
}
{
{ /* Inline loader$AStdImport$mmodule (var_nim) on <var_nim:AImport(AStdImport)> */
var328 = var_nim->attrs[COLOR_nitc__loader__AStdImport___mmodule].val; /* _mmodule on <var_nim:AImport(AStdImport)> */
var326 = var328;
RET_LABEL327:(void)0;
}
}
var_im = var326;
if (var_im == NULL) {
var329 = 1; /* is null */
} else {
var329 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_im,((val*)NULL)) on <var_im:nullable MModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_im,var_other) on <var_im:nullable MModule(MModule)> */
var334 = var_im == var_other;
var332 = var334;
goto RET_LABEL333;
RET_LABEL333:(void)0;
}
}
var330 = var332;
goto RET_LABEL331;
RET_LABEL331:(void)0;
}
var329 = var330;
}
if (var329){
goto BREAK_label325;
} else {
}
{
var335 = ((short int(*)(val* self, val* p0))((((long)var_directs&3)?class_info[((long)var_directs&3)]:var_directs->class)->vft[COLOR_core__abstract_collection__Collection__has]))(var_directs, var_im); /* has on <var_directs:Collection[MModule]>*/
}
if (var335){
goto BREAK_label325;
} else {
}
BREAK_label325: (void)0;
{
((void(*)(val* self))((((long)var_317&3)?class_info[((long)var_317&3)]:var_317->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_317); /* next on <var_317:Iterator[AImport]>*/
}
}
BREAK_label319: (void)0;
{
((void(*)(val* self))((((long)var_317&3)?class_info[((long)var_317&3)]:var_317->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_317); /* finish on <var_317:Iterator[AImport]>*/
}
RET_LABEL:;
}
/* method loader$ModelBuilder$conditional_importations for (self: ModelBuilder): Array[SequenceRead[MModule]] */
val* nitc__loader___ModelBuilder___conditional_importations(val* self) {
val* var /* : Array[SequenceRead[MModule]] */;
val* var1 /* : Array[SequenceRead[MModule]] */;
var1 = self->attrs[COLOR_nitc__loader__ModelBuilder___conditional_importations].val; /* _conditional_importations on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conditional_importations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 1040);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader$ModelBuilder$apply_conditional_importations for (self: ModelBuilder, MModule) */
void nitc__loader___ModelBuilder___apply_conditional_importations(val* self, val* p0) {
val* var_mmodule /* var mmodule: MModule */;
short int var_check_conditional_importations /* var check_conditional_importations: Bool */;
val* var /* : Array[SequenceRead[MModule]] */;
val* var2 /* : Array[SequenceRead[MModule]] */;
val* var_ /* var : Array[SequenceRead[MModule]] */;
val* var3 /* : IndexedIterator[nullable Object] */;
val* var_4 /* var : IndexedIterator[SequenceRead[MModule]] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_ci /* var ci: SequenceRead[MModule] */;
long var_i /* var i: Int */;
long var7 /* : Int */;
long var_8 /* var : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_m /* var m: MModule */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
short int var_20 /* var : Bool */;
val* var21 /* : POSetElement[MModule] */;
val* var23 /* : POSetElement[MModule] */;
val* var24 /* : Collection[nullable Object] */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
long var28 /* : Int */;
val* var29 /* : nullable Object */;
val* var_sup /* var sup: MModule */;
val* var30 /* : nullable AModule */;
val* var_ast /* var ast: nullable AModule */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
val* var37 /* : POSetElement[MModule] */;
val* var39 /* : POSetElement[MModule] */;
val* var40 /* : Collection[nullable Object] */;
short int var41 /* : Bool */;
val* var42 /* : ToolContext */;
val* var44 /* : ToolContext */;
val* var45 /* : NativeArray[String] */;
static val* varonce;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : CString */;
val* var49 /* : String */;
val* var50 /* : nullable Int */;
val* var51 /* : nullable Int */;
val* var52 /* : nullable Bool */;
val* var53 /* : nullable Bool */;
val* var54 /* : String */;
val* var55 /* : String */;
val* var56 /* : String */;
val* var57 /* : Sys */;
val* var58 /* : MVisibility */;
val* var59 /* : Array[MModule] */;
val* var_60 /* var : Array[MModule] */;
var_mmodule = p0;
var_check_conditional_importations = 1;
for(;;) {
if (var_check_conditional_importations){
var_check_conditional_importations = 0;
{
{ /* Inline loader$ModelBuilder$conditional_importations (self) on <self:ModelBuilder> */
var2 = self->attrs[COLOR_nitc__loader__ModelBuilder___conditional_importations].val; /* _conditional_importations on <self:ModelBuilder> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conditional_importations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 1040);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_ = var;
{
var3 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:IndexedIterator[SequenceRead[MModule]]>*/
}
if (var5){
} else {
goto BREAK_;
}
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:IndexedIterator[SequenceRead[MModule]]>*/
}
var_ci = var6;
var_i = 1l;
{
var7 = ((long(*)(val* self))((((long)var_ci&3)?class_info[((long)var_ci&3)]:var_ci->class)->vft[COLOR_core__abstract_collection__Collection__length]))(var_ci); /* length on <var_ci:SequenceRead[MModule]>*/
}
var_8 = var7;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_8) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_8:Int> isa OTHER */
/* <var_8:Int> isa OTHER */
var11 = 1; /* easy <var_8:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var12 = var_i < var_8;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
} else {
goto BREAK_label;
}
{
var13 = ((val*(*)(val* self, long p0))((((long)var_ci&3)?class_info[((long)var_ci&3)]:var_ci->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var_ci, var_i); /* [] on <var_ci:SequenceRead[MModule]>*/
}
var_m = var13;
{
{ /* Inline kernel$Object$== (var_mmodule,var_m) on <var_mmodule:MModule> */
var_other = var_m;
{
{ /* Inline kernel$Object$is_same_instance (var_mmodule,var_other) on <var_mmodule:MModule> */
var19 = var_mmodule == var_other;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var_20 = var15;
if (var15){
var14 = var_20;
} else {
{
{ /* Inline mmodule$MModule$in_importation (var_mmodule) on <var_mmodule:MModule> */
var23 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = poset___poset__POSetElement___greaters(var21);
}
{
var25 = ((short int(*)(val* self, val* p0))((((long)var24&3)?class_info[((long)var24&3)]:var24->class)->vft[COLOR_core__abstract_collection__Collection__has]))(var24, var_m); /* has on <var24:Collection[nullable Object](Collection[MModule])>*/
}
var26 = !var25;
var14 = var26;
}
if (var14){
goto BREAK_27;
} else {
}
{
var28 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var28;
}
BREAK_label: (void)0;
{
var29 = ((val*(*)(val* self))((((long)var_ci&3)?class_info[((long)var_ci&3)]:var_ci->class)->vft[COLOR_core__abstract_collection__Collection__first]))(var_ci); /* first on <var_ci:SequenceRead[MModule]>*/
}
var_sup = var29;
{
var30 = nitc__loader___MModule___load(var_sup, self);
}
var_ast = var30;
if (var_ast == NULL) {
var31 = 1; /* is null */
} else {
var31 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_ast,((val*)NULL)) on <var_ast:nullable AModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_ast,var_other) on <var_ast:nullable AModule(AModule)> */
var36 = var_ast == var_other;
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
goto BREAK_27;
} else {
}
{
{ /* Inline mmodule$MModule$in_importation (var_mmodule) on <var_mmodule:MModule> */
var39 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var39 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
var40 = poset___poset__POSetElement___greaters(var37);
}
{
var41 = ((short int(*)(val* self, val* p0))((((long)var40&3)?class_info[((long)var40&3)]:var40->class)->vft[COLOR_core__abstract_collection__Collection__has]))(var40, var_sup); /* has on <var40:Collection[nullable Object](Collection[MModule])>*/
}
if (var41){
goto BREAK_27;
} else {
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var44 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var44 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var45 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = " conditionally imports ";
var50 = (val*)(23l<<2|1);
var51 = (val*)(23l<<2|1);
var52 = (val*)((long)(0)<<2|3);
var53 = (val*)((long)(0)<<2|3);
var49 = core__flat___CString___to_s_unsafe(var48, var50, var51, var52, var53);
var47 = var49;
varonce46 = var47;
}
((struct instance_core__NativeArray*)var45)->values[1]=var47;
} else {
var45 = varonce;
varonce = NULL;
}
{
var54 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmodule); /* to_s on <var_mmodule:MModule>*/
}
((struct instance_core__NativeArray*)var45)->values[0]=var54;
{
var55 = ((val*(*)(val* self))(var_sup->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_sup); /* to_s on <var_sup:MModule>*/
}
((struct instance_core__NativeArray*)var45)->values[2]=var55;
{
var56 = ((val*(*)(val* self))(var45->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var45); /* native_to_s on <var45:NativeArray[String]>*/
}
varonce = var45;
{
nitc___nitc__ToolContext___info(var42, var56, 3l); /* Direct call toolcontext$ToolContext$info on <var42:ToolContext>*/
}
var57 = glob_sys;
{
var58 = nitc__model_base___core__Sys___public_visibility(var57);
}
{
nitc___nitc__MModule___set_visibility_for(var_mmodule, var_sup, var58); /* Direct call mmodule$MModule$set_visibility_for on <var_mmodule:MModule>*/
}
var59 = NEW_core__Array(&type_core__Array__nitc__MModule);
{
core___core__Array___with_capacity(var59, 1l); /* Direct call array$Array$with_capacity on <var59:Array[MModule]>*/
}
var_60 = var59;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_60, var_sup); /* Direct call array$AbstractArray$push on <var_60:Array[MModule]>*/
}
{
nitc___nitc__MModule___set_imported_mmodules(var_mmodule, var_60); /* Direct call mmodule$MModule$set_imported_mmodules on <var_mmodule:MModule>*/
}
var_check_conditional_importations = 1;
BREAK_27: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:IndexedIterator[SequenceRead[MModule]]>*/
}
}
BREAK_: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:IndexedIterator[SequenceRead[MModule]]>*/
}
} else {
goto BREAK_label61;
}
}
BREAK_label61: (void)0;
RET_LABEL:;
}
/* method loader$ModelBuilder$nmodules for (self: ModelBuilder): Array[AModule] */
val* nitc__loader___ModelBuilder___nmodules(val* self) {
val* var /* : Array[AModule] */;
val* var1 /* : Array[AModule] */;
var1 = self->attrs[COLOR_nitc__loader__ModelBuilder___nmodules].val; /* _nmodules on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _nmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 1091);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader$ModelBuilder$mmodule2nmodule for (self: ModelBuilder): HashMap[MModule, AModule] */
val* nitc__loader___ModelBuilder___mmodule2nmodule(val* self) {
val* var /* : HashMap[MModule, AModule] */;
val* var1 /* : HashMap[MModule, AModule] */;
var1 = self->attrs[COLOR_nitc__loader__ModelBuilder___mmodule2nmodule].val; /* _mmodule2nmodule on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule2nmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 1094);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader$ModelBuilder$mmodule2node for (self: ModelBuilder, MModule): nullable AModule */
val* nitc__loader___ModelBuilder___mmodule2node(val* self, val* p0) {
val* var /* : nullable AModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : HashMap[MModule, AModule] */;
val* var3 /* : HashMap[MModule, AModule] */;
val* var4 /* : nullable Object */;
var_mmodule = p0;
{
{ /* Inline loader$ModelBuilder$mmodule2nmodule (self) on <self:ModelBuilder> */
var3 = self->attrs[COLOR_nitc__loader__ModelBuilder___mmodule2nmodule].val; /* _mmodule2nmodule on <self:ModelBuilder> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule2nmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 1094);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__HashMap___core__abstract_collection__MapRead__get_or_null(var1, var_mmodule);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader$MModule$parse for (self: MModule, ModelBuilder): nullable AModule */
val* nitc__loader___MModule___parse(val* self, val* p0) {
val* var /* : nullable AModule */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var1 /* : HashMap[MModule, AModule] */;
val* var3 /* : HashMap[MModule, AModule] */;
val* var4 /* : nullable Object */;
val* var_nmodule /* var nmodule: nullable AModule */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable String */;
val* var_filepath /* var filepath: nullable String */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : nullable AModule */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var_other20 /* var other: nullable Object */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
val* var25 /* : Location */;
val* var27 /* : Location */;
val* var29 /* : nullable MGroup */;
val* var31 /* : nullable MGroup */;
val* var32 /* : Array[MModule] */;
val* var34 /* : Array[MModule] */;
var_modelbuilder = p0;
{
{ /* Inline loader$ModelBuilder$mmodule2nmodule (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var3 = var_modelbuilder->attrs[COLOR_nitc__loader__ModelBuilder___mmodule2nmodule].val; /* _mmodule2nmodule on <var_modelbuilder:ModelBuilder> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule2nmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 1094);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__HashMap___core__abstract_collection__MapRead__get_or_null(var1, self);
}
var_nmodule = var4;
if (var_nmodule == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_nmodule,((val*)NULL)) on <var_nmodule:nullable AModule> */
var_other = ((val*)NULL);
{
var8 = ((short int(*)(val* self, val* p0))(var_nmodule->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nmodule, var_other); /* == on <var_nmodule:nullable AModule(AModule)>*/
}
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
var = var_nmodule;
goto RET_LABEL;
} else {
}
{
var10 = nitc___nitc__MModule___filepath(self);
}
var_filepath = var10;
if (var_filepath == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_filepath,((val*)NULL)) on <var_filepath:nullable String> */
var_other = ((val*)NULL);
{
var14 = ((short int(*)(val* self, val* p0))(var_filepath->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_filepath, var_other); /* == on <var_filepath:nullable String(String)>*/
}
var15 = !var14;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
if (unlikely(!var11)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 1126);
fatal_exit(1);
}
{
var16 = nitc__loader___ModelBuilder___load_module_ast(var_modelbuilder, var_filepath);
}
var_nmodule = var16;
if (var_nmodule == NULL) {
var17 = 1; /* is null */
} else {
var17 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_nmodule,((val*)NULL)) on <var_nmodule:nullable AModule> */
var_other20 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_nmodule,var_other20) on <var_nmodule:nullable AModule(AModule)> */
var23 = var_nmodule == var_other20;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var18 = var21;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
var17 = var18;
}
if (var17){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline loader$AModule$mmodule= (var_nmodule,self) on <var_nmodule:nullable AModule(AModule)> */
var_nmodule->attrs[COLOR_nitc__loader__AModule___mmodule].val = self; /* _mmodule on <var_nmodule:nullable AModule(AModule)> */
RET_LABEL24:(void)0;
}
}
{
{ /* Inline parser_nodes$ANode$location (var_nmodule) on <var_nmodule:nullable AModule(AModule)> */
var27 = var_nmodule->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_nmodule:nullable AModule(AModule)> */
if (unlikely(var27 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline mmodule$MModule$location= (self,var25) on <self:MModule> */
self->attrs[COLOR_nitc__mmodule__MModule___location].val = var25; /* _location on <self:MModule> */
RET_LABEL28:(void)0;
}
}
{
{ /* Inline mmodule$MModule$mgroup (self) on <self:MModule> */
var31 = self->attrs[COLOR_nitc__mmodule__MModule___mgroup].val; /* _mgroup on <self:MModule> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
nitc__loader___ModelBuilder___build_a_mmodule(var_modelbuilder, var29, var_nmodule); /* Direct call loader$ModelBuilder$build_a_mmodule on <var_modelbuilder:ModelBuilder>*/
}
{
{ /* Inline loader$ModelBuilder$parsed_modules (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var34 = var_modelbuilder->attrs[COLOR_nitc__loader__ModelBuilder___parsed_modules].val; /* _parsed_modules on <var_modelbuilder:ModelBuilder> */
if (unlikely(var34 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _parsed_modules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 325);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var32, self); /* Direct call array$Array$add on <var32:Array[MModule]>*/
}
var = var_nmodule;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader$MModule$load for (self: MModule, ModelBuilder): nullable AModule */
val* nitc__loader___MModule___load(val* self, val* p0) {
val* var /* : nullable AModule */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var1 /* : nullable AModule */;
val* var_nmodule /* var nmodule: nullable AModule */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
var_modelbuilder = p0;
{
var1 = nitc__loader___MModule___parse(self, var_modelbuilder);
}
var_nmodule = var1;
if (var_nmodule == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_nmodule,((val*)NULL)) on <var_nmodule:nullable AModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_nmodule,var_other) on <var_nmodule:nullable AModule(AModule)> */
var7 = var_nmodule == var_other;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
nitc__loader___ModelBuilder___build_module_importation(var_modelbuilder, var_nmodule); /* Direct call loader$ModelBuilder$build_module_importation on <var_modelbuilder:ModelBuilder>*/
}
var = var_nmodule;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader$MPackage$ini for (self: MPackage): nullable ConfigTree */
val* nitc__loader___MPackage___ini(val* self) {
val* var /* : nullable ConfigTree */;
val* var1 /* : nullable ConfigTree */;
var1 = self->attrs[COLOR_nitc__loader__MPackage___ini].val; /* _ini on <self:MPackage> */
var = var1;
RET_LABEL:;
return var;
}
/* method loader$MPackage$ini= for (self: MPackage, nullable ConfigTree) */
void nitc__loader___MPackage___ini_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__loader__MPackage___ini].val = p0; /* _ini on <self:MPackage> */
RET_LABEL:;
}
/* method loader$MPackage$excludes for (self: MPackage): nullable Array[String] */
val* nitc__loader___MPackage___excludes(val* self) {
val* var /* : nullable Array[String] */;
short int var1 /* : Bool */;
val* var2 /* : nullable Array[String] */;
val* var3 /* : nullable Array[String] */;
val* var5 /* : nullable ConfigTree */;
val* var7 /* : nullable ConfigTree */;
val* var_ini /* var ini: nullable ConfigTree */;
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
val* var21 /* : nullable String */;
val* var_exclude /* var exclude: nullable String */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : CString */;
val* var27 /* : String */;
val* var28 /* : nullable Int */;
val* var29 /* : nullable Int */;
val* var30 /* : nullable Bool */;
val* var31 /* : nullable Bool */;
val* var32 /* : Array[String] */;
val* var_excludes /* var excludes: Array[String] */;
var1 = self->attrs[COLOR_nitc__loader__MPackage__lazy_32d_excludes].s; /* lazy _excludes on <self:MPackage> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__loader__MPackage___excludes].val; /* _excludes on <self:MPackage> */
} else {
{
{
{ /* Inline loader$MPackage$ini (self) on <self:MPackage> */
var7 = self->attrs[COLOR_nitc__loader__MPackage___ini].val; /* _ini on <self:MPackage> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_ini = var5;
if (var_ini == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_ini,((val*)NULL)) on <var_ini:nullable ConfigTree> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_ini,var_other) on <var_ini:nullable ConfigTree(ConfigTree)> */
var13 = var_ini == var_other;
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
var3 = ((val*)NULL);
goto RET_LABEL4;
} else {
}
if (likely(varonce!=NULL)) {
var14 = varonce;
} else {
var15 = "source.exclude";
var17 = (val*)(14l<<2|1);
var18 = (val*)(14l<<2|1);
var19 = (val*)((long)(0)<<2|3);
var20 = (val*)((long)(0)<<2|3);
var16 = core__flat___CString___to_s_unsafe(var15, var17, var18, var19, var20);
var14 = var16;
varonce = var14;
}
{
var21 = ini___ini__ConfigTree____91d_93d(var_ini, var14);
}
var_exclude = var21;
if (var_exclude == NULL) {
var22 = 1; /* is null */
} else {
var22 = 0; /* arg is null but recv is not */
}
if (0) {
var23 = ((short int(*)(val* self, val* p0))(var_exclude->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_exclude, ((val*)NULL)); /* == on <var_exclude:nullable String>*/
var22 = var23;
}
if (var22){
var3 = ((val*)NULL);
goto RET_LABEL4;
} else {
}
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = ":";
var28 = (val*)(1l<<2|1);
var29 = (val*)(1l<<2|1);
var30 = (val*)((long)(0)<<2|3);
var31 = (val*)((long)(0)<<2|3);
var27 = core__flat___CString___to_s_unsafe(var26, var28, var29, var30, var31);
var25 = var27;
varonce24 = var25;
}
{
var32 = core__string_search___Text___split(var_exclude, var25);
}
var_excludes = var32;
var3 = var_excludes;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__loader__MPackage___excludes].val = var3; /* _excludes on <self:MPackage> */
var2 = var3;
self->attrs[COLOR_nitc__loader__MPackage__lazy_32d_excludes].s = 1; /* lazy _excludes on <self:MPackage> */
}
var = var2;
RET_LABEL:;
return var;
}
/* method loader$MPackage$accept for (self: MPackage, String): Bool */
short int nitc__loader___MPackage___accept(val* self, val* p0) {
short int var /* : Bool */;
val* var_filepath /* var filepath: String */;
val* var1 /* : nullable Array[String] */;
val* var_excludes /* var excludes: nullable Array[String] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : nullable MGroup */;
val* var9 /* : nullable MGroup */;
val* var10 /* : nullable String */;
val* var11 /* : String */;
val* var_relpath /* var relpath: String */;
short int var12 /* : Bool */;
var_filepath = p0;
{
var1 = nitc__loader___MPackage___excludes(self);
}
var_excludes = var1;
if (var_excludes == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_excludes,((val*)NULL)) on <var_excludes:nullable Array[String]> */
var_other = ((val*)NULL);
{
var5 = ((short int(*)(val* self, val* p0))(var_excludes->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_excludes, var_other); /* == on <var_excludes:nullable Array[String](Array[String])>*/
}
var6 = !var5;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
{
{ /* Inline mpackage$MPackage$root (self) on <self:MPackage> */
var9 = self->attrs[COLOR_nitc__mpackage__MPackage___root].val; /* _root on <self:MPackage> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (var7 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 1176);
fatal_exit(1);
} else {
var10 = nitc___nitc__MGroup___filepath(var7);
}
if (var10 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 1176);
fatal_exit(1);
} else {
var11 = core__file___String___relpath(var10, var_filepath);
}
var_relpath = var11;
{
var12 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var_excludes, var_relpath);
}
if (var12){
var = 0;
goto RET_LABEL;
} else {
}
} else {
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader$MGroup$scanned for (self: MGroup): Bool */
short int nitc__loader___MGroup___scanned(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__loader__MGroup___scanned].s; /* _scanned on <self:MGroup> */
var = var1;
RET_LABEL:;
return var;
}
/* method loader$MGroup$scanned= for (self: MGroup, Bool) */
void nitc__loader___MGroup___scanned_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__loader__MGroup___scanned].s = p0; /* _scanned on <self:MGroup> */
RET_LABEL:;
}
/* method loader$MGroup$mmodules_by_name for (self: MGroup, String): Array[MModule] */
val* nitc__loader___MGroup___mmodules_by_name(val* self, val* p0) {
val* var /* : Array[MModule] */;
val* var_name /* var name: String */;
val* var1 /* : Array[MModule] */;
val* var_res /* var res: Array[MModule] */;
val* var2 /* : POSetElement[MGroup] */;
val* var4 /* : POSetElement[MGroup] */;
val* var5 /* : Collection[nullable Object] */;
val* var_ /* var : Collection[MGroup] */;
val* var6 /* : Iterator[nullable Object] */;
val* var_7 /* var : Iterator[MGroup] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_g /* var g: MGroup */;
val* var10 /* : Array[MModule] */;
val* var12 /* : Array[MModule] */;
val* var_13 /* var : Array[MModule] */;
val* var14 /* : IndexedIterator[nullable Object] */;
val* var_15 /* var : IndexedIterator[MModule] */;
short int var16 /* : Bool */;
val* var18 /* : nullable Object */;
val* var_mp /* var mp: MModule */;
val* var19 /* : String */;
val* var21 /* : String */;
short int var22 /* : Bool */;
var_name = p0;
var1 = NEW_core__Array(&type_core__Array__nitc__MModule);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array$Array$init on <var1:Array[MModule]>*/
}
var_res = var1;
{
{ /* Inline mpackage$MGroup$in_nesting (self) on <self:MGroup> */
var4 = self->attrs[COLOR_nitc__mpackage__MGroup___in_nesting].val; /* _in_nesting on <self:MGroup> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_nesting");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 95);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = poset___poset__POSetElement___smallers(var2);
}
var_ = var5;
{
var6 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[MGroup]>*/
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:Iterator[MGroup]>*/
}
if (var8){
} else {
goto BREAK_label;
}
{
var9 = ((val*(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:Iterator[MGroup]>*/
}
var_g = var9;
{
{ /* Inline mmodule$MGroup$mmodules (var_g) on <var_g:MGroup> */
var12 = var_g->attrs[COLOR_nitc__mmodule__MGroup___mmodules].val; /* _mmodules on <var_g:MGroup> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 54);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_13 = var10;
{
var14 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_13);
}
var_15 = var14;
for(;;) {
{
var16 = ((short int(*)(val* self))((((long)var_15&3)?class_info[((long)var_15&3)]:var_15->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_15); /* is_ok on <var_15:IndexedIterator[MModule]>*/
}
if (var16){
} else {
goto BREAK_label17;
}
{
var18 = ((val*(*)(val* self))((((long)var_15&3)?class_info[((long)var_15&3)]:var_15->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_15); /* item on <var_15:IndexedIterator[MModule]>*/
}
var_mp = var18;
{
{ /* Inline mmodule$MModule$name (var_mp) on <var_mp:MModule> */
var21 = var_mp->attrs[COLOR_nitc__mmodule__MModule___name].val; /* _name on <var_mp:MModule> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 100);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = ((short int(*)(val* self, val* p0))(var19->class->vft[COLOR_core__kernel__Object___61d_61d]))(var19, var_name); /* == on <var19:String>*/
}
if (var22){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var_mp); /* Direct call array$Array$add on <var_res:Array[MModule]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_15&3)?class_info[((long)var_15&3)]:var_15->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_15); /* next on <var_15:IndexedIterator[MModule]>*/
}
}
BREAK_label17: (void)0;
{
((void(*)(val* self))((((long)var_15&3)?class_info[((long)var_15&3)]:var_15->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_15); /* finish on <var_15:IndexedIterator[MModule]>*/
}
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:Iterator[MGroup]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:Iterator[MGroup]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader$SourceFile$mmodule for (self: SourceFile): nullable MModule */
val* nitc__loader___SourceFile___mmodule(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
var1 = self->attrs[COLOR_nitc__loader__SourceFile___mmodule].val; /* _mmodule on <self:SourceFile> */
var = var1;
RET_LABEL:;
return var;
}
/* method loader$SourceFile$mmodule= for (self: SourceFile, nullable MModule) */
void nitc__loader___SourceFile___mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__loader__SourceFile___mmodule].val = p0; /* _mmodule on <self:SourceFile> */
RET_LABEL:;
}
/* method loader$AStdImport$mmodule for (self: AStdImport): nullable MModule */
val* nitc__loader___AStdImport___mmodule(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
var1 = self->attrs[COLOR_nitc__loader__AStdImport___mmodule].val; /* _mmodule on <self:AStdImport> */
var = var1;
RET_LABEL:;
return var;
}
/* method loader$AStdImport$mmodule= for (self: AStdImport, nullable MModule) */
void nitc__loader___AStdImport___mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__loader__AStdImport___mmodule].val = p0; /* _mmodule on <self:AStdImport> */
RET_LABEL:;
}
/* method loader$AModule$mmodule for (self: AModule): nullable MModule */
val* nitc__loader___AModule___mmodule(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
var1 = self->attrs[COLOR_nitc__loader__AModule___mmodule].val; /* _mmodule on <self:AModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method loader$AModule$mmodule= for (self: AModule, nullable MModule) */
void nitc__loader___AModule___mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__loader__AModule___mmodule].val = p0; /* _mmodule on <self:AModule> */
RET_LABEL:;
}
/* method loader$AModule$is_importation_done for (self: AModule): Bool */
short int nitc__loader___AModule___is_importation_done(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__loader__AModule___is_importation_done].s; /* _is_importation_done on <self:AModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method loader$AModule$is_importation_done= for (self: AModule, Bool) */
void nitc__loader___AModule___is_importation_done_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__loader__AModule___is_importation_done].s = p0; /* _is_importation_done on <self:AModule> */
RET_LABEL:;
}
