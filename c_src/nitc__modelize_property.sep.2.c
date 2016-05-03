#include "nitc__modelize_property.sep.0.h"
/* method modelize_property#AMethPropdef#build_property for (self: AMethPropdef, ModelBuilder, MClassDef) */
void nitc__modelize_property___AMethPropdef___APropdef__build_property(val* self, val* p0, val* p1) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var /* : nullable TKwinit */;
val* var2 /* : nullable TKwinit */;
val* var_n_kwinit /* var n_kwinit: nullable TKwinit */;
val* var3 /* : nullable TKwnew */;
val* var5 /* : nullable TKwnew */;
val* var_n_kwnew /* var n_kwnew: nullable TKwnew */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var_ /* var : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var_is_init /* var is_init: Bool */;
val* var17 /* : nullable AMethid */;
val* var19 /* : nullable AMethid */;
val* var_amethodid /* var amethodid: nullable AMethid */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var_other23 /* var other: nullable Object */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
static val* varonce;
val* var28 /* : String */;
char* var29 /* : NativeString */;
val* var30 /* : String */;
val* var_name /* var name: String */;
val* var_name_node /* var name_node: ANode */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
val* var39 /* : String */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
val* var48 /* : String */;
short int var49 /* : Bool */;
int cltype;
int idtype;
val* var50 /* : TId */;
val* var52 /* : TId */;
val* var53 /* : String */;
val* var54 /* : String */;
val* var55 /* : nullable ASignature */;
val* var57 /* : nullable ASignature */;
val* var58 /* : ANodes[AParam] */;
val* var60 /* : ANodes[AParam] */;
long var61 /* : Int */;
long var_arity /* var arity: Int */;
short int var62 /* : Bool */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
val* var66 /* : String */;
short int var67 /* : Bool */;
short int var_68 /* var : Bool */;
short int var69 /* : Bool */;
short int var71 /* : Bool */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
val* var75 /* : String */;
short int var76 /* : Bool */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
val* var80 /* : String */;
short int var81 /* : Bool */;
short int var_82 /* var : Bool */;
short int var83 /* : Bool */;
short int var85 /* : Bool */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
val* var89 /* : String */;
short int var90 /* : Bool */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : NativeString */;
val* var94 /* : String */;
short int var95 /* : Bool */;
short int var_96 /* var : Bool */;
short int var97 /* : Bool */;
short int var99 /* : Bool */;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : NativeString */;
val* var103 /* : String */;
short int var104 /* : Bool */;
short int var105 /* : Bool */;
short int var_106 /* var : Bool */;
short int var107 /* : Bool */;
short int var109 /* : Bool */;
short int var110 /* : Bool */;
val* var111 /* : nullable ASignature */;
val* var113 /* : nullable ASignature */;
val* var115 /* : NativeArray[String] */;
static val* varonce114;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : NativeString */;
val* var119 /* : String */;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : NativeString */;
val* var123 /* : String */;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : NativeString */;
val* var127 /* : String */;
val* var128 /* : String */;
val* var129 /* : String */;
long var130 /* : Int */;
short int var131 /* : Bool */;
short int var133 /* : Bool */;
int cltype134;
int idtype135;
const char* var_class_name;
short int var136 /* : Bool */;
val* var137 /* : nullable ASignature */;
val* var139 /* : nullable ASignature */;
val* var141 /* : NativeArray[String] */;
static val* varonce140;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : NativeString */;
val* var145 /* : String */;
static val* varonce146;
val* var147 /* : String */;
char* var148 /* : NativeString */;
val* var149 /* : String */;
static val* varonce150;
val* var151 /* : String */;
char* var152 /* : NativeString */;
val* var153 /* : String */;
static val* varonce154;
val* var155 /* : String */;
char* var156 /* : NativeString */;
val* var157 /* : String */;
long var158 /* : Int */;
val* var159 /* : String */;
val* var160 /* : String */;
val* var161 /* : String */;
short int var162 /* : Bool */;
short int var_look_like_a_root_init /* var look_like_a_root_init: Bool */;
val* var_mprop /* var mprop: nullable MMethod */;
short int var163 /* : Bool */;
short int var164 /* : Bool */;
short int var_165 /* var : Bool */;
val* var166 /* : nullable TKwredef */;
val* var168 /* : nullable TKwredef */;
short int var169 /* : Bool */;
short int var170 /* : Bool */;
short int var172 /* : Bool */;
short int var173 /* : Bool */;
val* var174 /* : nullable MProperty */;
short int var175 /* : Bool */;
int cltype176;
int idtype177;
const char* var_class_name178;
short int var179 /* : Bool */;
short int var180 /* : Bool */;
short int var181 /* : Bool */;
short int var183 /* : Bool */;
short int var185 /* : Bool */;
short int var_186 /* var : Bool */;
val* var187 /* : nullable MMethod */;
val* var189 /* : nullable MMethod */;
val* var190 /* : nullable AExpr */;
val* var192 /* : nullable AExpr */;
val* var_nb /* var nb: nullable AExpr */;
short int var193 /* : Bool */;
short int var194 /* : Bool */;
short int var195 /* : Bool */;
int cltype196;
int idtype197;
short int var_198 /* var : Bool */;
val* var199 /* : ANodes[AExpr] */;
val* var201 /* : ANodes[AExpr] */;
short int var202 /* : Bool */;
short int var_203 /* var : Bool */;
val* var204 /* : nullable ADoc */;
val* var206 /* : nullable ADoc */;
short int var207 /* : Bool */;
short int var208 /* : Bool */;
short int var210 /* : Bool */;
short int var212 /* : Bool */;
static val* varonce213;
val* var214 /* : String */;
char* var215 /* : NativeString */;
val* var216 /* : String */;
val* var218 /* : NativeArray[String] */;
static val* varonce217;
static val* varonce219;
val* var220 /* : String */;
char* var221 /* : NativeString */;
val* var222 /* : String */;
val* var223 /* : String */;
val* var224 /* : String */;
short int var225 /* : Bool */;
short int var226 /* : Bool */;
short int var228 /* : Bool */;
short int var230 /* : Bool */;
val* var231 /* : nullable AVisibility */;
val* var233 /* : nullable AVisibility */;
val* var234 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: MVisibility */;
val* var235 /* : MMethod */;
short int var236 /* : Bool */;
short int var_237 /* var : Bool */;
val* var238 /* : nullable MMethod */;
val* var240 /* : nullable MMethod */;
short int var241 /* : Bool */;
short int var242 /* : Bool */;
short int var244 /* : Bool */;
short int var246 /* : Bool */;
short int var250 /* : Bool */;
short int var251 /* : Bool */;
short int var253 /* : Bool */;
short int var254 /* : Bool */;
short int var256 /* : Bool */;
short int var258 /* : Bool */;
val* var259 /* : MClass */;
val* var261 /* : MClass */;
static val* varonce263;
val* var264 /* : String */;
char* var265 /* : NativeString */;
val* var266 /* : String */;
short int var267 /* : Bool */;
val* var269 /* : nullable TKwredef */;
val* var271 /* : nullable TKwredef */;
short int var272 /* : Bool */;
short int var273 /* : Bool */;
short int var275 /* : Bool */;
short int var277 /* : Bool */;
val* var278 /* : nullable TKwredef */;
val* var280 /* : nullable TKwredef */;
short int var281 /* : Bool */;
int cltype282;
int idtype283;
short int var284 /* : Bool */;
short int var285 /* : Bool */;
short int var286 /* : Bool */;
val* var287 /* : nullable AVisibility */;
val* var289 /* : nullable AVisibility */;
val* var290 /* : Map[MProperty, APropdef] */;
val* var292 /* : Map[MProperty, APropdef] */;
val* var_293 /* var : Map[MProperty, APropdef] */;
val* var294 /* : MapIterator[nullable Object, nullable Object] */;
val* var_295 /* var : MapIterator[MProperty, APropdef] */;
short int var296 /* : Bool */;
val* var297 /* : nullable Object */;
val* var_p /* var p: MProperty */;
val* var298 /* : nullable Object */;
val* var_n /* var n: APropdef */;
short int var299 /* : Bool */;
short int var300 /* : Bool */;
short int var301 /* : Bool */;
short int var303 /* : Bool */;
short int var304 /* : Bool */;
short int var_305 /* var : Bool */;
short int var306 /* : Bool */;
int cltype307;
int idtype308;
short int var_309 /* var : Bool */;
val* var310 /* : String */;
val* var312 /* : String */;
short int var313 /* : Bool */;
val* var314 /* : nullable TKwredef */;
val* var316 /* : nullable TKwredef */;
short int var317 /* : Bool */;
short int var318 /* : Bool */;
val* var321 /* : Map[MProperty, APropdef] */;
val* var323 /* : Map[MProperty, APropdef] */;
val* var324 /* : MMethodDef */;
val* var325 /* : Location */;
val* var327 /* : Location */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
short int var328 /* : Bool */;
int cltype329;
int idtype330;
const struct type* type_struct;
const char* var_class_name331;
short int var333 /* : Bool */;
int cltype334;
int idtype335;
const struct type* type_struct336;
const char* var_class_name337;
val* var338 /* : HashMap[MPropDef, APropdef] */;
val* var340 /* : HashMap[MPropDef, APropdef] */;
short int var341 /* : Bool */;
val* var342 /* : ToolContext */;
val* var344 /* : ToolContext */;
val* var346 /* : NativeArray[String] */;
static val* varonce345;
static val* varonce347;
val* var348 /* : String */;
char* var349 /* : NativeString */;
val* var350 /* : String */;
val* var351 /* : String */;
val* var352 /* : String */;
val* var353 /* : String */;
val* var354 /* : ToolContext */;
val* var356 /* : ToolContext */;
val* var358 /* : NativeArray[String] */;
static val* varonce357;
static val* varonce359;
val* var360 /* : String */;
char* var361 /* : NativeString */;
val* var362 /* : String */;
val* var363 /* : String */;
val* var364 /* : String */;
val* var365 /* : String */;
var_modelbuilder = p0;
var_mclassdef = p1;
{
{ /* Inline parser_nodes#AMethPropdef#n_kwinit (self) on <self:AMethPropdef> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_kwinit].val; /* _n_kwinit on <self:AMethPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_n_kwinit = var;
{
{ /* Inline parser_nodes#AMethPropdef#n_kwnew (self) on <self:AMethPropdef> */
var5 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_kwnew].val; /* _n_kwnew on <self:AMethPropdef> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_n_kwnew = var3;
if (var_n_kwinit == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwinit,((val*)NULL)) on <var_n_kwinit:nullable TKwinit> */
var_other = ((val*)NULL);
{
var10 = ((short int(*)(val* self, val* p0))(var_n_kwinit->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_kwinit, var_other); /* == on <var_n_kwinit:nullable TKwinit(TKwinit)>*/
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
var6 = var_;
} else {
if (var_n_kwnew == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwnew,((val*)NULL)) on <var_n_kwnew:nullable TKwnew> */
var_other = ((val*)NULL);
{
var15 = ((short int(*)(val* self, val* p0))(var_n_kwnew->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_kwnew, var_other); /* == on <var_n_kwnew:nullable TKwnew(TKwnew)>*/
}
var16 = !var15;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
var6 = var12;
}
var_is_init = var6;
{
{ /* Inline parser_nodes#AMethPropdef#n_methid (self) on <self:AMethPropdef> */
var19 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_amethodid = var17;
if (var_amethodid == NULL) {
var20 = 1; /* is null */
} else {
var20 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_amethodid,((val*)NULL)) on <var_amethodid:nullable AMethid> */
var_other23 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_amethodid,var_other23) on <var_amethodid:nullable AMethid(AMethid)> */
var26 = var_amethodid == var_other23;
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
if (var20){
var27 = !var_is_init;
if (var27){
if (likely(varonce!=NULL)) {
var28 = varonce;
} else {
var29 = "main";
var30 = core__flat___NativeString___to_s_full(var29, 4l, 4l);
var28 = var30;
varonce = var28;
}
var_name = var28;
var_name_node = self;
} else {
if (var_n_kwinit == NULL) {
var31 = 0; /* is null */
} else {
var31 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwinit,((val*)NULL)) on <var_n_kwinit:nullable TKwinit> */
var_other = ((val*)NULL);
{
var34 = ((short int(*)(val* self, val* p0))(var_n_kwinit->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_kwinit, var_other); /* == on <var_n_kwinit:nullable TKwinit(TKwinit)>*/
}
var35 = !var34;
var32 = var35;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
var31 = var32;
}
if (var31){
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "init";
var39 = core__flat___NativeString___to_s_full(var38, 4l, 4l);
var37 = var39;
varonce36 = var37;
}
var_name = var37;
var_name_node = var_n_kwinit;
} else {
if (var_n_kwnew == NULL) {
var40 = 0; /* is null */
} else {
var40 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwnew,((val*)NULL)) on <var_n_kwnew:nullable TKwnew> */
var_other = ((val*)NULL);
{
var43 = ((short int(*)(val* self, val* p0))(var_n_kwnew->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_kwnew, var_other); /* == on <var_n_kwnew:nullable TKwnew(TKwnew)>*/
}
var44 = !var43;
var41 = var44;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
var40 = var41;
}
if (var40){
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = "new";
var48 = core__flat___NativeString___to_s_full(var47, 3l, 3l);
var46 = var48;
varonce45 = var46;
}
var_name = var46;
var_name_node = var_n_kwnew;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 790);
fatal_exit(1);
}
}
}
} else {
/* <var_amethodid:nullable AMethid(AMethid)> isa AIdMethid */
cltype = type_nitc__AIdMethid.color;
idtype = type_nitc__AIdMethid.id;
if(cltype >= var_amethodid->type->table_size) {
var49 = 0;
} else {
var49 = var_amethodid->type->type_table[cltype] == idtype;
}
if (var49){
{
{ /* Inline parser_nodes#AIdMethid#n_id (var_amethodid) on <var_amethodid:nullable AMethid(AIdMethid)> */
var52 = var_amethodid->attrs[COLOR_nitc__parser_nodes__AIdMethid___n_id].val; /* _n_id on <var_amethodid:nullable AMethid(AIdMethid)> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1510);
fatal_exit(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
var53 = nitc__lexer_work___Token___text(var50);
}
var_name = var53;
var_name_node = var_amethodid;
} else {
{
var54 = nitc__parser_work___Prod___collect_text(var_amethodid);
}
var_name = var54;
var_name_node = var_amethodid;
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (self) on <self:AMethPropdef> */
var57 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var55 = var57;
RET_LABEL56:(void)0;
}
}
if (var55 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 800);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var55) on <var55:nullable ASignature> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1679);
fatal_exit(1);
}
var60 = var55->attrs[COLOR_nitc__parser_nodes__ASignature___n_params].val; /* _n_params on <var55:nullable ASignature> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1679);
fatal_exit(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
var61 = nitc___nitc__ANodes___core__abstract_collection__Collection__length(var58);
}
var_arity = var61;
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "+";
var66 = core__flat___NativeString___to_s_full(var65, 1l, 1l);
var64 = var66;
varonce63 = var64;
}
{
var67 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var64); /* == on <var_name:String>*/
}
var_68 = var67;
if (var67){
{
{ /* Inline kernel#Int#== (var_arity,0l) on <var_arity:Int> */
var71 = var_arity == 0l;
var69 = var71;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
}
var62 = var69;
} else {
var62 = var_68;
}
if (var62){
if (likely(varonce72!=NULL)) {
var73 = varonce72;
} else {
var74 = "unary +";
var75 = core__flat___NativeString___to_s_full(var74, 7l, 7l);
var73 = var75;
varonce72 = var73;
}
var_name = var73;
} else {
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = "-";
var80 = core__flat___NativeString___to_s_full(var79, 1l, 1l);
var78 = var80;
varonce77 = var78;
}
{
var81 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var78); /* == on <var_name:String>*/
}
var_82 = var81;
if (var81){
{
{ /* Inline kernel#Int#== (var_arity,0l) on <var_arity:Int> */
var85 = var_arity == 0l;
var83 = var85;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
}
var76 = var83;
} else {
var76 = var_82;
}
if (var76){
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = "unary -";
var89 = core__flat___NativeString___to_s_full(var88, 7l, 7l);
var87 = var89;
varonce86 = var87;
}
var_name = var87;
} else {
if (likely(varonce91!=NULL)) {
var92 = varonce91;
} else {
var93 = "~";
var94 = core__flat___NativeString___to_s_full(var93, 1l, 1l);
var92 = var94;
varonce91 = var92;
}
{
var95 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var92); /* == on <var_name:String>*/
}
var_96 = var95;
if (var95){
{
{ /* Inline kernel#Int#== (var_arity,0l) on <var_arity:Int> */
var99 = var_arity == 0l;
var97 = var99;
goto RET_LABEL98;
RET_LABEL98:(void)0;
}
}
var90 = var97;
} else {
var90 = var_96;
}
if (var90){
if (likely(varonce100!=NULL)) {
var101 = varonce100;
} else {
var102 = "unary ~";
var103 = core__flat___NativeString___to_s_full(var102, 7l, 7l);
var101 = var103;
varonce100 = var101;
}
var_name = var101;
} else {
{
var105 = ((short int(*)(val* self))(var_amethodid->class->vft[COLOR_nitc__modelize_property__AMethid__is_binary]))(var_amethodid); /* is_binary on <var_amethodid:nullable AMethid(AMethid)>*/
}
var_106 = var105;
if (var105){
{
{ /* Inline kernel#Int#!= (var_arity,1l) on <var_arity:Int> */
var109 = var_arity == 1l;
var110 = !var109;
var107 = var110;
goto RET_LABEL108;
RET_LABEL108:(void)0;
}
}
var104 = var107;
} else {
var104 = var_106;
}
if (var104){
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (self) on <self:AMethPropdef> */
var113 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var111 = var113;
RET_LABEL112:(void)0;
}
}
if (unlikely(varonce114==NULL)) {
var115 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce116!=NULL)) {
var117 = varonce116;
} else {
var118 = "Syntax Error: binary operator `";
var119 = core__flat___NativeString___to_s_full(var118, 31l, 31l);
var117 = var119;
varonce116 = var117;
}
((struct instance_core__NativeArray*)var115)->values[0]=var117;
if (likely(varonce120!=NULL)) {
var121 = varonce120;
} else {
var122 = "` requires exactly one parameter; got ";
var123 = core__flat___NativeString___to_s_full(var122, 38l, 38l);
var121 = var123;
varonce120 = var121;
}
((struct instance_core__NativeArray*)var115)->values[2]=var121;
if (likely(varonce124!=NULL)) {
var125 = varonce124;
} else {
var126 = ".";
var127 = core__flat___NativeString___to_s_full(var126, 1l, 1l);
var125 = var127;
varonce124 = var125;
}
((struct instance_core__NativeArray*)var115)->values[4]=var125;
} else {
var115 = varonce114;
varonce114 = NULL;
}
((struct instance_core__NativeArray*)var115)->values[1]=var_name;
var128 = core__flat___Int___core__abstract_text__Object__to_s(var_arity);
((struct instance_core__NativeArray*)var115)->values[3]=var128;
{
var129 = ((val*(*)(val* self))(var115->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var115); /* native_to_s on <var115:NativeArray[String]>*/
}
varonce114 = var115;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var111, var129); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
{
var130 = ((long(*)(val* self))(var_amethodid->class->vft[COLOR_nitc__modelize_property__AMethid__min_arity]))(var_amethodid); /* min_arity on <var_amethodid:nullable AMethid(AMethid)>*/
}
{
{ /* Inline kernel#Int#> (var130,var_arity) on <var130:Int> */
/* Covariant cast for argument 0 (i) <var_arity:Int> isa OTHER */
/* <var_arity:Int> isa OTHER */
var133 = 1; /* easy <var_arity:Int> isa OTHER*/
if (unlikely(!var133)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
fatal_exit(1);
}
var136 = var130 > var_arity;
var131 = var136;
goto RET_LABEL132;
RET_LABEL132:(void)0;
}
}
if (var131){
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (self) on <self:AMethPropdef> */
var139 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var137 = var139;
RET_LABEL138:(void)0;
}
}
if (unlikely(varonce140==NULL)) {
var141 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce142!=NULL)) {
var143 = varonce142;
} else {
var144 = "Syntax Error: `";
var145 = core__flat___NativeString___to_s_full(var144, 15l, 15l);
var143 = var145;
varonce142 = var143;
}
((struct instance_core__NativeArray*)var141)->values[0]=var143;
if (likely(varonce146!=NULL)) {
var147 = varonce146;
} else {
var148 = "` requires at least ";
var149 = core__flat___NativeString___to_s_full(var148, 20l, 20l);
var147 = var149;
varonce146 = var147;
}
((struct instance_core__NativeArray*)var141)->values[2]=var147;
if (likely(varonce150!=NULL)) {
var151 = varonce150;
} else {
var152 = " parameter(s); got ";
var153 = core__flat___NativeString___to_s_full(var152, 19l, 19l);
var151 = var153;
varonce150 = var151;
}
((struct instance_core__NativeArray*)var141)->values[4]=var151;
if (likely(varonce154!=NULL)) {
var155 = varonce154;
} else {
var156 = ".";
var157 = core__flat___NativeString___to_s_full(var156, 1l, 1l);
var155 = var157;
varonce154 = var155;
}
((struct instance_core__NativeArray*)var141)->values[6]=var155;
} else {
var141 = varonce140;
varonce140 = NULL;
}
((struct instance_core__NativeArray*)var141)->values[1]=var_name;
{
var158 = ((long(*)(val* self))(var_amethodid->class->vft[COLOR_nitc__modelize_property__AMethid__min_arity]))(var_amethodid); /* min_arity on <var_amethodid:nullable AMethid(AMethid)>*/
}
var159 = core__flat___Int___core__abstract_text__Object__to_s(var158);
((struct instance_core__NativeArray*)var141)->values[3]=var159;
var160 = core__flat___Int___core__abstract_text__Object__to_s(var_arity);
((struct instance_core__NativeArray*)var141)->values[5]=var160;
{
var161 = ((val*(*)(val* self))(var141->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var141); /* native_to_s on <var141:NativeArray[String]>*/
}
varonce140 = var141;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var137, var161); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
}
}
}
}
}
}
{
var162 = nitc__modelize_property___AMethPropdef___look_like_a_root_init(self, var_modelbuilder, var_mclassdef);
}
var_look_like_a_root_init = var162;
var_mprop = ((val*)NULL);
var164 = !var_is_init;
var_165 = var164;
if (var164){
var163 = var_165;
} else {
{
{ /* Inline parser_nodes#ADefinition#n_kwredef (self) on <self:AMethPropdef> */
var168 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AMethPropdef> */
var166 = var168;
RET_LABEL167:(void)0;
}
}
if (var166 == NULL) {
var169 = 0; /* is null */
} else {
var169 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var166,((val*)NULL)) on <var166:nullable TKwredef> */
var_other = ((val*)NULL);
{
var172 = ((short int(*)(val* self, val* p0))(var166->class->vft[COLOR_core__kernel__Object___61d_61d]))(var166, var_other); /* == on <var166:nullable TKwredef(TKwredef)>*/
}
var173 = !var172;
var170 = var173;
goto RET_LABEL171;
RET_LABEL171:(void)0;
}
var169 = var170;
}
var163 = var169;
}
if (var163){
{
var174 = nitc___nitc__ModelBuilder___try_get_mproperty_by_name(var_modelbuilder, var_name_node, var_mclassdef, var_name);
}
/* <var174:nullable MProperty> isa nullable MMethod */
cltype176 = type_nullable__nitc__MMethod.color;
idtype177 = type_nullable__nitc__MMethod.id;
if(var174 == NULL) {
var175 = 1;
} else {
if(cltype176 >= var174->type->table_size) {
var175 = 0;
} else {
var175 = var174->type->type_table[cltype176] == idtype177;
}
}
if (unlikely(!var175)) {
var_class_name178 = var174 == NULL ? "null" : var174->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MMethod", var_class_name178);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 818);
fatal_exit(1);
}
var_mprop = var174;
} else {
}
if (var_mprop == NULL) {
var180 = 1; /* is null */
} else {
var180 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mprop,((val*)NULL)) on <var_mprop:nullable MMethod> */
var_other23 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mprop,var_other23) on <var_mprop:nullable MMethod(MMethod)> */
var185 = var_mprop == var_other23;
var183 = var185;
goto RET_LABEL184;
RET_LABEL184:(void)0;
}
}
var181 = var183;
goto RET_LABEL182;
RET_LABEL182:(void)0;
}
var180 = var181;
}
var_186 = var180;
if (var180){
var179 = var_look_like_a_root_init;
} else {
var179 = var_186;
}
if (var179){
{
{ /* Inline modelize_property#ModelBuilder#the_root_init_mmethod (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var189 = var_modelbuilder->attrs[COLOR_nitc__modelize_property__ModelBuilder___the_root_init_mmethod].val; /* _the_root_init_mmethod on <var_modelbuilder:ModelBuilder> */
var187 = var189;
RET_LABEL188:(void)0;
}
}
var_mprop = var187;
{
{ /* Inline parser_nodes#AMethPropdef#n_block (self) on <self:AMethPropdef> */
var192 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:AMethPropdef> */
var190 = var192;
RET_LABEL191:(void)0;
}
}
var_nb = var190;
/* <var_nb:nullable AExpr> isa ABlockExpr */
cltype196 = type_nitc__ABlockExpr.color;
idtype197 = type_nitc__ABlockExpr.id;
if(var_nb == NULL) {
var195 = 0;
} else {
if(cltype196 >= var_nb->type->table_size) {
var195 = 0;
} else {
var195 = var_nb->type->type_table[cltype196] == idtype197;
}
}
var_198 = var195;
if (var195){
{
{ /* Inline parser_nodes#ABlockExpr#n_expr (var_nb) on <var_nb:nullable AExpr(ABlockExpr)> */
var201 = var_nb->attrs[COLOR_nitc__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <var_nb:nullable AExpr(ABlockExpr)> */
if (unlikely(var201 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1744);
fatal_exit(1);
}
var199 = var201;
RET_LABEL200:(void)0;
}
}
{
var202 = nitc___nitc__ANodes___core__abstract_collection__Collection__is_empty(var199);
}
var194 = var202;
} else {
var194 = var_198;
}
var_203 = var194;
if (var194){
{
{ /* Inline parser_nodes#ADefinition#n_doc (self) on <self:AMethPropdef> */
var206 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:AMethPropdef> */
var204 = var206;
RET_LABEL205:(void)0;
}
}
if (var204 == NULL) {
var207 = 1; /* is null */
} else {
var207 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var204,((val*)NULL)) on <var204:nullable ADoc> */
var_other23 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var204,var_other23) on <var204:nullable ADoc(ADoc)> */
var212 = var204 == var_other23;
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
var193 = var207;
} else {
var193 = var_203;
}
if (var193){
if (likely(varonce213!=NULL)) {
var214 = varonce213;
} else {
var215 = "useless-init";
var216 = core__flat___NativeString___to_s_full(var215, 12l, 12l);
var214 = var216;
varonce213 = var214;
}
if (unlikely(varonce217==NULL)) {
var218 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce219!=NULL)) {
var220 = varonce219;
} else {
var221 = "Warning: useless empty init in ";
var222 = core__flat___NativeString___to_s_full(var221, 31l, 31l);
var220 = var222;
varonce219 = var220;
}
((struct instance_core__NativeArray*)var218)->values[0]=var220;
} else {
var218 = varonce217;
varonce217 = NULL;
}
{
var223 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:MClassDef>*/
}
((struct instance_core__NativeArray*)var218)->values[1]=var223;
{
var224 = ((val*(*)(val* self))(var218->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var218); /* native_to_s on <var218:NativeArray[String]>*/
}
varonce217 = var218;
{
nitc___nitc__ModelBuilder___advice(var_modelbuilder, self, var214, var224); /* Direct call modelbuilder_base#ModelBuilder#advice on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
} else {
}
if (var_mprop == NULL) {
var225 = 1; /* is null */
} else {
var225 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mprop,((val*)NULL)) on <var_mprop:nullable MMethod> */
var_other23 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mprop,var_other23) on <var_mprop:nullable MMethod(MMethod)> */
var230 = var_mprop == var_other23;
var228 = var230;
goto RET_LABEL229;
RET_LABEL229:(void)0;
}
}
var226 = var228;
goto RET_LABEL227;
RET_LABEL227:(void)0;
}
var225 = var226;
}
if (var225){
{
{ /* Inline parser_nodes#ADefinition#n_visibility (self) on <self:AMethPropdef> */
var233 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AMethPropdef> */
var231 = var233;
RET_LABEL232:(void)0;
}
}
{
var234 = nitc__modelize_property___APropdef___new_property_visibility(self, var_modelbuilder, var_mclassdef, var231);
}
var_mvisibility = var234;
var235 = NEW_nitc__MMethod(&type_nitc__MMethod);
{
((void(*)(val* self, val* p0))(var235->class->vft[COLOR_nitc__model__MProperty__intro_mclassdef_61d]))(var235, var_mclassdef); /* intro_mclassdef= on <var235:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var235->class->vft[COLOR_nitc__model__MProperty__name_61d]))(var235, var_name); /* name= on <var235:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var235->class->vft[COLOR_nitc__model__MProperty__visibility_61d]))(var235, var_mvisibility); /* visibility= on <var235:MMethod>*/
}
{
((void(*)(val* self))(var235->class->vft[COLOR_core__kernel__Object__init]))(var235); /* init on <var235:MMethod>*/
}
var_mprop = var235;
var_237 = var_look_like_a_root_init;
if (var_look_like_a_root_init){
{
{ /* Inline modelize_property#ModelBuilder#the_root_init_mmethod (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var240 = var_modelbuilder->attrs[COLOR_nitc__modelize_property__ModelBuilder___the_root_init_mmethod].val; /* _the_root_init_mmethod on <var_modelbuilder:ModelBuilder> */
var238 = var240;
RET_LABEL239:(void)0;
}
}
if (var238 == NULL) {
var241 = 1; /* is null */
} else {
var241 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var238,((val*)NULL)) on <var238:nullable MMethod> */
var_other23 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var238,var_other23) on <var238:nullable MMethod(MMethod)> */
var246 = var238 == var_other23;
var244 = var246;
goto RET_LABEL245;
RET_LABEL245:(void)0;
}
}
var242 = var244;
goto RET_LABEL243;
RET_LABEL243:(void)0;
}
var241 = var242;
}
var236 = var241;
} else {
var236 = var_237;
}
if (var236){
{
{ /* Inline modelize_property#ModelBuilder#the_root_init_mmethod= (var_modelbuilder,var_mprop) on <var_modelbuilder:ModelBuilder> */
var_modelbuilder->attrs[COLOR_nitc__modelize_property__ModelBuilder___the_root_init_mmethod].val = var_mprop; /* _the_root_init_mmethod on <var_modelbuilder:ModelBuilder> */
RET_LABEL247:(void)0;
}
}
{
{ /* Inline model#MMethod#is_root_init= (var_mprop,1) on <var_mprop:nullable MMethod(MMethod)> */
var_mprop->attrs[COLOR_nitc__model__MMethod___is_root_init].s = 1; /* _is_root_init on <var_mprop:nullable MMethod(MMethod)> */
RET_LABEL248:(void)0;
}
}
} else {
}
{
{ /* Inline model#MMethod#is_init= (var_mprop,var_is_init) on <var_mprop:nullable MMethod(MMethod)> */
var_mprop->attrs[COLOR_nitc__model__MMethod___is_init].s = var_is_init; /* _is_init on <var_mprop:nullable MMethod(MMethod)> */
RET_LABEL249:(void)0;
}
}
if (var_n_kwnew == NULL) {
var250 = 0; /* is null */
} else {
var250 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwnew,((val*)NULL)) on <var_n_kwnew:nullable TKwnew> */
var_other = ((val*)NULL);
{
var253 = ((short int(*)(val* self, val* p0))(var_n_kwnew->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_kwnew, var_other); /* == on <var_n_kwnew:nullable TKwnew(TKwnew)>*/
}
var254 = !var253;
var251 = var254;
goto RET_LABEL252;
RET_LABEL252:(void)0;
}
var250 = var251;
}
{
{ /* Inline model#MMethod#is_new= (var_mprop,var250) on <var_mprop:nullable MMethod(MMethod)> */
var_mprop->attrs[COLOR_nitc__model__MMethod___is_new].s = var250; /* _is_new on <var_mprop:nullable MMethod(MMethod)> */
RET_LABEL255:(void)0;
}
}
{
{ /* Inline model#MMethod#is_new (var_mprop) on <var_mprop:nullable MMethod(MMethod)> */
var258 = var_mprop->attrs[COLOR_nitc__model__MMethod___is_new].s; /* _is_new on <var_mprop:nullable MMethod(MMethod)> */
var256 = var258;
RET_LABEL257:(void)0;
}
}
if (var256){
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var261 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
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
{ /* Inline model#MClass#has_new_factory= (var259,1) on <var259:MClass> */
var259->attrs[COLOR_nitc__model__MClass___has_new_factory].s = 1; /* _has_new_factory on <var259:MClass> */
RET_LABEL262:(void)0;
}
}
} else {
}
if (likely(varonce263!=NULL)) {
var264 = varonce263;
} else {
var265 = "sys";
var266 = core__flat___NativeString___to_s_full(var265, 3l, 3l);
var264 = var266;
varonce263 = var264;
}
{
var267 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var264); /* == on <var_name:String>*/
}
if (var267){
{
{ /* Inline model#MMethod#is_toplevel= (var_mprop,1) on <var_mprop:nullable MMethod(MMethod)> */
var_mprop->attrs[COLOR_nitc__model__MMethod___is_toplevel].s = 1; /* _is_toplevel on <var_mprop:nullable MMethod(MMethod)> */
RET_LABEL268:(void)0;
}
}
} else {
}
{
{ /* Inline parser_nodes#ADefinition#n_kwredef (self) on <self:AMethPropdef> */
var271 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AMethPropdef> */
var269 = var271;
RET_LABEL270:(void)0;
}
}
{
var272 = nitc__modelize_property___APropdef___check_redef_keyword(self, var_modelbuilder, var_mclassdef, var269, 0, var_mprop);
}
var273 = !var272;
if (var273){
{
{ /* Inline model_base#MEntity#is_broken= (var_mprop,1) on <var_mprop:nullable MMethod(MMethod)> */
var_mprop->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mprop:nullable MMethod(MMethod)> */
RET_LABEL274:(void)0;
}
}
goto RET_LABEL;
} else {
}
} else {
{
{ /* Inline model_base#MEntity#is_broken (var_mprop) on <var_mprop:nullable MMethod(MMethod)> */
var277 = var_mprop->attrs[COLOR_nitc__model_base__MEntity___is_broken].s; /* _is_broken on <var_mprop:nullable MMethod(MMethod)> */
var275 = var277;
RET_LABEL276:(void)0;
}
}
if (var275){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ADefinition#n_kwredef (self) on <self:AMethPropdef> */
var280 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AMethPropdef> */
var278 = var280;
RET_LABEL279:(void)0;
}
}
/* <self:AMethPropdef> isa AMainMethPropdef */
cltype282 = type_nitc__AMainMethPropdef.color;
idtype283 = type_nitc__AMainMethPropdef.id;
if(cltype282 >= self->type->table_size) {
var281 = 0;
} else {
var281 = self->type->type_table[cltype282] == idtype283;
}
var284 = !var281;
{
var285 = nitc__modelize_property___APropdef___check_redef_keyword(self, var_modelbuilder, var_mclassdef, var278, var284, var_mprop);
}
var286 = !var285;
if (var286){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ADefinition#n_visibility (self) on <self:AMethPropdef> */
var289 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AMethPropdef> */
var287 = var289;
RET_LABEL288:(void)0;
}
}
{
nitc__modelize_property___APropdef___check_redef_property_visibility(self, var_modelbuilder, var287, var_mprop); /* Direct call modelize_property#APropdef#check_redef_property_visibility on <self:AMethPropdef>*/
}
}
if (var_is_init){
{
{ /* Inline modelize_property#MClassDef#mprop2npropdef (var_mclassdef) on <var_mclassdef:MClassDef> */
var292 = var_mclassdef->attrs[COLOR_nitc__modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <var_mclassdef:MClassDef> */
if (unlikely(var292 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 506);
fatal_exit(1);
}
var290 = var292;
RET_LABEL291:(void)0;
}
}
var_293 = var290;
{
var294 = ((val*(*)(val* self))((((long)var_293&3)?class_info[((long)var_293&3)]:var_293->class)->vft[COLOR_core__abstract_collection__MapRead__iterator]))(var_293); /* iterator on <var_293:Map[MProperty, APropdef]>*/
}
var_295 = var294;
for(;;) {
{
var296 = ((short int(*)(val* self))((((long)var_295&3)?class_info[((long)var_295&3)]:var_295->class)->vft[COLOR_core__abstract_collection__MapIterator__is_ok]))(var_295); /* is_ok on <var_295:MapIterator[MProperty, APropdef]>*/
}
if (var296){
} else {
goto BREAK_label;
}
{
var297 = ((val*(*)(val* self))((((long)var_295&3)?class_info[((long)var_295&3)]:var_295->class)->vft[COLOR_core__abstract_collection__MapIterator__key]))(var_295); /* key on <var_295:MapIterator[MProperty, APropdef]>*/
}
var_p = var297;
{
var298 = ((val*(*)(val* self))((((long)var_295&3)?class_info[((long)var_295&3)]:var_295->class)->vft[COLOR_core__abstract_collection__MapIterator__item]))(var_295); /* item on <var_295:MapIterator[MProperty, APropdef]>*/
}
var_n = var298;
{
{ /* Inline kernel#Object#!= (var_p,var_mprop) on <var_p:MProperty> */
var_other = var_mprop;
{
var303 = ((short int(*)(val* self, val* p0))(var_p->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_p, var_other); /* == on <var_p:MProperty>*/
}
var304 = !var303;
var301 = var304;
goto RET_LABEL302;
RET_LABEL302:(void)0;
}
}
var_305 = var301;
if (var301){
/* <var_p:MProperty> isa MMethod */
cltype307 = type_nitc__MMethod.color;
idtype308 = type_nitc__MMethod.id;
if(cltype307 >= var_p->type->table_size) {
var306 = 0;
} else {
var306 = var_p->type->type_table[cltype307] == idtype308;
}
var300 = var306;
} else {
var300 = var_305;
}
var_309 = var300;
if (var300){
{
{ /* Inline model#MProperty#name (var_p) on <var_p:MProperty(MMethod)> */
var312 = var_p->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var_p:MProperty(MMethod)> */
if (unlikely(var312 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1951);
fatal_exit(1);
}
var310 = var312;
RET_LABEL311:(void)0;
}
}
{
var313 = ((short int(*)(val* self, val* p0))(var310->class->vft[COLOR_core__kernel__Object___61d_61d]))(var310, var_name); /* == on <var310:String>*/
}
var299 = var313;
} else {
var299 = var_309;
}
if (var299){
{
{ /* Inline parser_nodes#ADefinition#n_kwredef (self) on <self:AMethPropdef> */
var316 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AMethPropdef> */
var314 = var316;
RET_LABEL315:(void)0;
}
}
{
var317 = nitc__modelize_property___APropdef___check_redef_keyword(self, var_modelbuilder, var_mclassdef, var314, 0, var_p);
}
var318 = !var317;
if (var318){
{
{ /* Inline model_base#MEntity#is_broken= (var_mprop,1) on <var_mprop:nullable MMethod(MMethod)> */
var_mprop->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mprop:nullable MMethod(MMethod)> */
RET_LABEL319:(void)0;
}
}
goto RET_LABEL;
} else {
}
goto BREAK_label;
} else {
}
{
((void(*)(val* self))((((long)var_295&3)?class_info[((long)var_295&3)]:var_295->class)->vft[COLOR_core__abstract_collection__MapIterator__next]))(var_295); /* next on <var_295:MapIterator[MProperty, APropdef]>*/
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#MapIterator#finish (var_295) on <var_295:MapIterator[MProperty, APropdef]> */
RET_LABEL320:(void)0;
}
}
} else {
}
{
{ /* Inline modelize_property#MClassDef#mprop2npropdef (var_mclassdef) on <var_mclassdef:MClassDef> */
var323 = var_mclassdef->attrs[COLOR_nitc__modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <var_mclassdef:MClassDef> */
if (unlikely(var323 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 506);
fatal_exit(1);
}
var321 = var323;
RET_LABEL322:(void)0;
}
}
{
((void(*)(val* self, val* p0, val* p1))((((long)var321&3)?class_info[((long)var321&3)]:var321->class)->vft[COLOR_core__abstract_collection__Map___91d_93d_61d]))(var321, var_mprop, self); /* []= on <var321:Map[MProperty, APropdef]>*/
}
var324 = NEW_nitc__MMethodDef(&type_nitc__MMethodDef);
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AMethPropdef> */
var327 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <self:AMethPropdef> */
if (unlikely(var327 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 24);
fatal_exit(1);
}
var325 = var327;
RET_LABEL326:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var324->class->vft[COLOR_nitc__model__MPropDef__mclassdef_61d]))(var324, var_mclassdef); /* mclassdef= on <var324:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var324->class->vft[COLOR_nitc__model__MPropDef__mproperty_61d]))(var324, var_mprop); /* mproperty= on <var324:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var324->class->vft[COLOR_nitc__model__MPropDef__location_61d]))(var324, var325); /* location= on <var324:MMethodDef>*/
}
{
((void(*)(val* self))(var324->class->vft[COLOR_core__kernel__Object__init]))(var324); /* init on <var324:MMethodDef>*/
}
var_mpropdef = var324;
{
nitc__modelize_property___APropdef___set_doc(self, var_mpropdef, var_modelbuilder); /* Direct call modelize_property#APropdef#set_doc on <self:AMethPropdef>*/
}
/* <var_mpropdef:MMethodDef> isa nullable MPROPDEF */
type_struct = self->type->resolution_table->types[COLOR_nullable__nitc__modelize_property__APropdef__MPROPDEF];
cltype329 = type_struct->color;
idtype330 = type_struct->id;
if(cltype329 >= var_mpropdef->type->table_size) {
var328 = 0;
} else {
var328 = var_mpropdef->type->type_table[cltype329] == idtype330;
}
if (unlikely(!var328)) {
var_class_name331 = var_mpropdef == NULL ? "null" : var_mpropdef->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name331);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 868);
fatal_exit(1);
}
{
{ /* Inline modelize_property#APropdef#mpropdef= (self,var_mpropdef) on <self:AMethPropdef> */
/* Covariant cast for argument 0 (mpropdef) <var_mpropdef:MMethodDef> isa nullable MPROPDEF */
/* <var_mpropdef:MMethodDef> isa nullable MPROPDEF */
type_struct336 = self->type->resolution_table->types[COLOR_nullable__nitc__modelize_property__APropdef__MPROPDEF];
cltype334 = type_struct336->color;
idtype335 = type_struct336->id;
if(cltype334 >= var_mpropdef->type->table_size) {
var333 = 0;
} else {
var333 = var_mpropdef->type->type_table[cltype334] == idtype335;
}
if (unlikely(!var333)) {
var_class_name337 = var_mpropdef == NULL ? "null" : var_mpropdef->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name337);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 559);
fatal_exit(1);
}
self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val = var_mpropdef; /* _mpropdef on <self:AMethPropdef> */
RET_LABEL332:(void)0;
}
}
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var340 = var_modelbuilder->attrs[COLOR_nitc__modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var340 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 40);
fatal_exit(1);
}
var338 = var340;
RET_LABEL339:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var338, var_mpropdef, self); /* Direct call hash_collection#HashMap#[]= on <var338:HashMap[MPropDef, APropdef]>*/
}
{
var341 = nitc___nitc__MPropDef___is_intro(var_mpropdef);
}
if (var341){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var344 = var_modelbuilder->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var_modelbuilder:ModelBuilder> */
if (unlikely(var344 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var342 = var344;
RET_LABEL343:(void)0;
}
}
if (unlikely(varonce345==NULL)) {
var346 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce347!=NULL)) {
var348 = varonce347;
} else {
var349 = " introduces new method ";
var350 = core__flat___NativeString___to_s_full(var349, 23l, 23l);
var348 = var350;
varonce347 = var348;
}
((struct instance_core__NativeArray*)var346)->values[1]=var348;
} else {
var346 = varonce345;
varonce345 = NULL;
}
{
var351 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:MMethodDef>*/
}
((struct instance_core__NativeArray*)var346)->values[0]=var351;
{
var352 = nitc___nitc__MProperty___nitc__model_base__MEntity__full_name(var_mprop);
}
((struct instance_core__NativeArray*)var346)->values[2]=var352;
{
var353 = ((val*(*)(val* self))(var346->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var346); /* native_to_s on <var346:NativeArray[String]>*/
}
varonce345 = var346;
{
nitc___nitc__ToolContext___info(var342, var353, 4l); /* Direct call toolcontext#ToolContext#info on <var342:ToolContext>*/
}
} else {
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var356 = var_modelbuilder->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var_modelbuilder:ModelBuilder> */
if (unlikely(var356 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var354 = var356;
RET_LABEL355:(void)0;
}
}
if (unlikely(varonce357==NULL)) {
var358 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce359!=NULL)) {
var360 = varonce359;
} else {
var361 = " redefines method ";
var362 = core__flat___NativeString___to_s_full(var361, 18l, 18l);
var360 = var362;
varonce359 = var360;
}
((struct instance_core__NativeArray*)var358)->values[1]=var360;
} else {
var358 = varonce357;
varonce357 = NULL;
}
{
var363 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:MMethodDef>*/
}
((struct instance_core__NativeArray*)var358)->values[0]=var363;
{
var364 = nitc___nitc__MProperty___nitc__model_base__MEntity__full_name(var_mprop);
}
((struct instance_core__NativeArray*)var358)->values[2]=var364;
{
var365 = ((val*(*)(val* self))(var358->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var358); /* native_to_s on <var358:NativeArray[String]>*/
}
varonce357 = var358;
{
nitc___nitc__ToolContext___info(var354, var365, 4l); /* Direct call toolcontext#ToolContext#info on <var354:ToolContext>*/
}
}
RET_LABEL:;
}
/* method modelize_property#AMethPropdef#build_signature for (self: AMethPropdef, ModelBuilder) */
void nitc__modelize_property___AMethPropdef___APropdef__build_signature(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var /* : nullable MPropDef */;
val* var2 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MMethodDef */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : MClassDef */;
val* var11 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var12 /* : MModule */;
val* var14 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var15 /* : nullable ASignature */;
val* var17 /* : nullable ASignature */;
val* var_nsig /* var nsig: nullable ASignature */;
short int var18 /* : Bool */;
val* var19 /* : MProperty */;
val* var21 /* : MProperty */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var_ /* var : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : MClass */;
val* var29 /* : MClass */;
val* var30 /* : nullable MMethodDef */;
val* var32 /* : nullable MMethodDef */;
val* var_root_init /* var root_init: nullable MMethodDef */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
val* var_other36 /* var other: nullable Object */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
val* var39 /* : nullable MSignature */;
val* var41 /* : nullable MSignature */;
val* var43 /* : Array[MProperty] */;
val* var45 /* : Array[MProperty] */;
short int var46 /* : Bool */;
val* var47 /* : Array[MProperty] */;
val* var49 /* : Array[MProperty] */;
val* var50 /* : Array[MProperty] */;
val* var52 /* : Array[MProperty] */;
short int var53 /* : Bool */;
val* var54 /* : nullable AMethid */;
val* var56 /* : nullable AMethid */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
short int var60 /* : Bool */;
short int var62 /* : Bool */;
short int var_63 /* var : Bool */;
val* var64 /* : nullable AMethid */;
val* var66 /* : nullable AMethid */;
short int var67 /* : Bool */;
short int var_accept_special_last_parameter /* var accept_special_last_parameter: Bool */;
short int var68 /* : Bool */;
val* var69 /* : nullable AMethid */;
val* var71 /* : nullable AMethid */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
short int var_77 /* var : Bool */;
val* var78 /* : nullable AMethid */;
val* var80 /* : nullable AMethid */;
short int var81 /* : Bool */;
short int var_return_is_mandatory /* var return_is_mandatory: Bool */;
val* var82 /* : Array[String] */;
val* var_param_names /* var param_names: Array[String] */;
val* var83 /* : Array[MType] */;
val* var_param_types /* var param_types: Array[MType] */;
long var84 /* : Int */;
long var86 /* : Int */;
long var_vararg_rank /* var vararg_rank: Int */;
val* var_ret_type /* var ret_type: nullable MType */;
short int var87 /* : Bool */;
short int var88 /* : Bool */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
short int var92 /* : Bool */;
short int var93 /* : Bool */;
val* var94 /* : Array[String] */;
val* var96 /* : Array[String] */;
val* var97 /* : Array[MType] */;
val* var99 /* : Array[MType] */;
long var100 /* : Int */;
long var102 /* : Int */;
val* var103 /* : nullable MType */;
val* var105 /* : nullable MType */;
val* var_msignature /* var msignature: nullable MSignature */;
short int var106 /* : Bool */;
short int var107 /* : Bool */;
val* var108 /* : MProperty */;
val* var110 /* : MProperty */;
val* var111 /* : MPropDef */;
val* var113 /* : MPropDef */;
val* var114 /* : nullable MSignature */;
val* var116 /* : nullable MSignature */;
short int var117 /* : Bool */;
short int var118 /* : Bool */;
short int var120 /* : Bool */;
short int var122 /* : Bool */;
val* var123 /* : MClass */;
val* var125 /* : MClass */;
val* var126 /* : MClassType */;
val* var128 /* : MClassType */;
val* var129 /* : MClassType */;
val* var131 /* : MClassType */;
val* var132 /* : MSignature */;
long var133 /* : Int */;
long var135 /* : Int */;
long var136 /* : Int */;
short int var137 /* : Bool */;
short int var139 /* : Bool */;
short int var140 /* : Bool */;
short int var141 /* : Bool */;
short int var142 /* : Bool */;
short int var144 /* : Bool */;
short int var145 /* : Bool */;
val* var_node /* var node: ANode */;
val* var146 /* : NativeArray[String] */;
static val* varonce;
static val* varonce147;
val* var148 /* : String */;
char* var149 /* : NativeString */;
val* var150 /* : String */;
static val* varonce151;
val* var152 /* : String */;
char* var153 /* : NativeString */;
val* var154 /* : String */;
static val* varonce155;
val* var156 /* : String */;
char* var157 /* : NativeString */;
val* var158 /* : String */;
static val* varonce159;
val* var160 /* : String */;
char* var161 /* : NativeString */;
val* var162 /* : String */;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : NativeString */;
val* var166 /* : String */;
long var167 /* : Int */;
val* var168 /* : String */;
val* var169 /* : MProperty */;
val* var171 /* : MProperty */;
val* var172 /* : String */;
val* var174 /* : String */;
val* var175 /* : String */;
long var176 /* : Int */;
long var178 /* : Int */;
val* var179 /* : String */;
val* var180 /* : MProperty */;
val* var182 /* : MProperty */;
val* var183 /* : String */;
val* var184 /* : String */;
short int var185 /* : Bool */;
val* var186 /* : MProperty */;
val* var188 /* : MProperty */;
short int var189 /* : Bool */;
short int var191 /* : Bool */;
short int var_192 /* var : Bool */;
val* var193 /* : MProperty */;
val* var195 /* : MProperty */;
short int var196 /* : Bool */;
short int var198 /* : Bool */;
short int var199 /* : Bool */;
val* var200 /* : Array[MClassType] */;
val* var202 /* : Array[MClassType] */;
val* var_203 /* var : Array[MClassType] */;
val* var204 /* : IndexedIterator[nullable Object] */;
val* var_205 /* var : IndexedIterator[MClassType] */;
short int var206 /* : Bool */;
val* var207 /* : nullable Object */;
val* var_msupertype /* var msupertype: MClassType */;
val* var208 /* : MClassType */;
val* var210 /* : MClassType */;
val* var211 /* : MClassType */;
val* var212 /* : MProperty */;
val* var214 /* : MProperty */;
val* var215 /* : String */;
val* var217 /* : String */;
val* var218 /* : nullable MProperty */;
val* var_candidate /* var candidate: nullable MProperty */;
short int var219 /* : Bool */;
short int var220 /* : Bool */;
short int var222 /* : Bool */;
short int var223 /* : Bool */;
short int var224 /* : Bool */;
short int var225 /* : Bool */;
short int var227 /* : Bool */;
short int var229 /* : Bool */;
val* var230 /* : MPropDef */;
val* var232 /* : MPropDef */;
short int var233 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var234 /* : nullable MSignature */;
val* var236 /* : nullable MSignature */;
short int var237 /* : Bool */;
short int var238 /* : Bool */;
short int var239 /* : Bool */;
short int var240 /* : Bool */;
short int var241 /* : Bool */;
short int var243 /* : Bool */;
short int var244 /* : Bool */;
short int var_245 /* var : Bool */;
long var246 /* : Int */;
long var248 /* : Int */;
long var249 /* : Int */;
long var251 /* : Int */;
short int var252 /* : Bool */;
short int var254 /* : Bool */;
short int var255 /* : Bool */;
short int var_256 /* var : Bool */;
long var257 /* : Int */;
long var259 /* : Int */;
long var260 /* : Int */;
short int var261 /* : Bool */;
short int var263 /* : Bool */;
short int var_264 /* var : Bool */;
long var265 /* : Int */;
long var267 /* : Int */;
short int var268 /* : Bool */;
short int var270 /* : Bool */;
val* var271 /* : Array[MType] */;
val* var272 /* : Array[MParameter] */;
val* var274 /* : Array[MParameter] */;
val* var_275 /* var : Array[MParameter] */;
val* var276 /* : IndexedIterator[nullable Object] */;
val* var_277 /* var : IndexedIterator[MParameter] */;
short int var278 /* : Bool */;
val* var280 /* : nullable Object */;
val* var_mparameter /* var mparameter: MParameter */;
val* var281 /* : MType */;
val* var283 /* : MType */;
long var284 /* : Int */;
long var286 /* : Int */;
short int var287 /* : Bool */;
short int var288 /* : Bool */;
short int var289 /* : Bool */;
short int var291 /* : Bool */;
short int var292 /* : Bool */;
short int var_293 /* var : Bool */;
short int var294 /* : Bool */;
short int var295 /* : Bool */;
short int var297 /* : Bool */;
short int var299 /* : Bool */;
val* var300 /* : nullable MType */;
val* var302 /* : nullable MType */;
long var303 /* : Int */;
long var305 /* : Int */;
long var306 /* : Int */;
long var308 /* : Int */;
short int var309 /* : Bool */;
short int var311 /* : Bool */;
short int var312 /* : Bool */;
val* var313 /* : ANodes[AParam] */;
val* var315 /* : ANodes[AParam] */;
long var316 /* : Int */;
long var318 /* : Int */;
val* var319 /* : ANode */;
val* var321 /* : NativeArray[String] */;
static val* varonce320;
static val* varonce322;
val* var323 /* : String */;
char* var324 /* : NativeString */;
val* var325 /* : String */;
static val* varonce326;
val* var327 /* : String */;
char* var328 /* : NativeString */;
val* var329 /* : String */;
long var330 /* : Int */;
long var332 /* : Int */;
val* var333 /* : nullable Object */;
val* var334 /* : String */;
val* var335 /* : Array[MParameter] */;
val* var_mparameters /* var mparameters: Array[MParameter] */;
long var_i /* var i: Int */;
long var336 /* : Int */;
long var338 /* : Int */;
long var_339 /* var : Int */;
short int var340 /* : Bool */;
short int var342 /* : Bool */;
int cltype343;
int idtype344;
const char* var_class_name345;
short int var346 /* : Bool */;
val* var348 /* : MParameter */;
val* var349 /* : nullable Object */;
val* var350 /* : nullable Object */;
short int var351 /* : Bool */;
short int var353 /* : Bool */;
val* var_mparameter354 /* var mparameter: MParameter */;
short int var355 /* : Bool */;
short int var356 /* : Bool */;
short int var358 /* : Bool */;
short int var359 /* : Bool */;
val* var360 /* : ANodes[AParam] */;
val* var362 /* : ANodes[AParam] */;
val* var363 /* : ANode */;
long var365 /* : Int */;
short int var366 /* : Bool */;
short int var367 /* : Bool */;
short int var368 /* : Bool */;
short int var370 /* : Bool */;
short int var372 /* : Bool */;
short int var_373 /* var : Bool */;
val* var374 /* : MProperty */;
val* var376 /* : MProperty */;
short int var377 /* : Bool */;
short int var379 /* : Bool */;
val* var380 /* : MClass */;
val* var382 /* : MClass */;
val* var383 /* : MClassType */;
val* var385 /* : MClassType */;
short int var386 /* : Bool */;
short int var387 /* : Bool */;
short int var388 /* : Bool */;
short int var_389 /* var : Bool */;
short int var390 /* : Bool */;
short int var_391 /* var : Bool */;
val* var392 /* : nullable Object */;
short int var393 /* : Bool */;
short int var395 /* : Bool */;
val* var396 /* : nullable ASignature */;
val* var398 /* : nullable ASignature */;
val* var399 /* : ANodes[AParam] */;
val* var401 /* : ANodes[AParam] */;
val* var402 /* : nullable Object */;
val* var404 /* : NativeArray[String] */;
static val* varonce403;
static val* varonce405;
val* var406 /* : String */;
char* var407 /* : NativeString */;
val* var408 /* : String */;
static val* varonce409;
val* var410 /* : String */;
char* var411 /* : NativeString */;
val* var412 /* : String */;
static val* varonce413;
val* var414 /* : String */;
char* var415 /* : NativeString */;
val* var416 /* : String */;
val* var417 /* : nullable Object */;
val* var418 /* : String */;
val* var419 /* : MProperty */;
val* var421 /* : MProperty */;
val* var422 /* : String */;
val* var424 /* : String */;
val* var425 /* : String */;
short int var426 /* : Bool */;
short int var427 /* : Bool */;
short int var428 /* : Bool */;
short int var430 /* : Bool */;
short int var432 /* : Bool */;
short int var_433 /* var : Bool */;
val* var434 /* : nullable AMethid */;
val* var436 /* : nullable AMethid */;
val* var438 /* : NativeArray[String] */;
static val* varonce437;
static val* varonce439;
val* var440 /* : String */;
char* var441 /* : NativeString */;
val* var442 /* : String */;
static val* varonce443;
val* var444 /* : String */;
char* var445 /* : NativeString */;
val* var446 /* : String */;
val* var447 /* : MProperty */;
val* var449 /* : MProperty */;
val* var450 /* : String */;
val* var452 /* : String */;
val* var453 /* : String */;
val* var454 /* : MSignature */;
static val* varonce456;
val* var457 /* : String */;
char* var458 /* : NativeString */;
val* var459 /* : String */;
val* var460 /* : nullable AAnnotation */;
short int var461 /* : Bool */;
short int var462 /* : Bool */;
short int var464 /* : Bool */;
short int var465 /* : Bool */;
static val* varonce467;
val* var468 /* : String */;
char* var469 /* : NativeString */;
val* var470 /* : String */;
val* var471 /* : nullable AAnnotation */;
short int var472 /* : Bool */;
short int var473 /* : Bool */;
short int var475 /* : Bool */;
short int var476 /* : Bool */;
short int var478 /* : Bool */;
val* var479 /* : nullable AExternCodeBlock */;
val* var481 /* : nullable AExternCodeBlock */;
short int var482 /* : Bool */;
short int var483 /* : Bool */;
short int var485 /* : Bool */;
short int var486 /* : Bool */;
short int var_487 /* var : Bool */;
static val* varonce488;
val* var489 /* : String */;
char* var490 /* : NativeString */;
val* var491 /* : String */;
val* var492 /* : nullable AAnnotation */;
short int var493 /* : Bool */;
short int var494 /* : Bool */;
short int var496 /* : Bool */;
short int var497 /* : Bool */;
static val* varonce499;
val* var500 /* : String */;
char* var501 /* : NativeString */;
val* var502 /* : String */;
val* var503 /* : nullable AAnnotation */;
val* var_at /* var at: nullable AAnnotation */;
short int var504 /* : Bool */;
short int var505 /* : Bool */;
short int var507 /* : Bool */;
short int var508 /* : Bool */;
static val* varonce509;
val* var510 /* : String */;
char* var511 /* : NativeString */;
val* var512 /* : String */;
static val* varonce513;
val* var514 /* : String */;
char* var515 /* : NativeString */;
val* var516 /* : String */;
val* var517 /* : nullable AAnnotation */;
val* var_atautoinit /* var atautoinit: nullable AAnnotation */;
short int var518 /* : Bool */;
short int var519 /* : Bool */;
short int var521 /* : Bool */;
short int var522 /* : Bool */;
short int var523 /* : Bool */;
short int var524 /* : Bool */;
static val* varonce525;
val* var526 /* : String */;
char* var527 /* : NativeString */;
val* var528 /* : String */;
short int var529 /* : Bool */;
short int var530 /* : Bool */;
static val* varonce531;
val* var532 /* : String */;
char* var533 /* : NativeString */;
val* var534 /* : String */;
var_modelbuilder = p0;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var2 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mpropdef = var;
if (var_mpropdef == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MMethodDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var8 = var_mpropdef == var_other;
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
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var11 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2227);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_mclassdef = var9;
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var14 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 573);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_mmodule = var12;
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (self) on <self:AMethPropdef> */
var17 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_nsig = var15;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var21 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline model#MMethod#is_root_init (var19) on <var19:MProperty(MMethod)> */
var24 = var19->attrs[COLOR_nitc__model__MMethod___is_root_init].s; /* _is_root_init on <var19:MProperty(MMethod)> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
var_ = var22;
if (var22){
{
var25 = nitc___nitc__MClassDef___is_intro(var_mclassdef);
}
var26 = !var25;
var18 = var26;
} else {
var18 = var_;
}
if (var18){
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var29 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 576);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline modelize_property#MClass#root_init (var27) on <var27:MClass> */
var32 = var27->attrs[COLOR_nitc__modelize_property__MClass___root_init].val; /* _root_init on <var27:MClass> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
var_root_init = var30;
if (var_root_init == NULL) {
var33 = 0; /* is null */
} else {
var33 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_root_init,((val*)NULL)) on <var_root_init:nullable MMethodDef> */
var_other36 = ((val*)NULL);
{
var37 = ((short int(*)(val* self, val* p0))(var_root_init->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_root_init, var_other36); /* == on <var_root_init:nullable MMethodDef(MMethodDef)>*/
}
var38 = !var37;
var34 = var38;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
var33 = var34;
}
if (var33){
{
{ /* Inline model#MMethodDef#new_msignature (var_root_init) on <var_root_init:nullable MMethodDef(MMethodDef)> */
var41 = var_root_init->attrs[COLOR_nitc__model__MMethodDef___new_msignature].val; /* _new_msignature on <var_root_init:nullable MMethodDef(MMethodDef)> */
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline model#MMethodDef#new_msignature= (var_mpropdef,var39) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___new_msignature].val = var39; /* _new_msignature on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL42:(void)0;
}
}
{
{ /* Inline model#MMethodDef#initializers (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var45 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2363);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
var46 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var43);
}
if (unlikely(!var46)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 890);
fatal_exit(1);
}
{
{ /* Inline model#MMethodDef#initializers (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var49 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2363);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline model#MMethodDef#initializers (var_root_init) on <var_root_init:nullable MMethodDef(MMethodDef)> */
var52 = var_root_init->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var_root_init:nullable MMethodDef(MMethodDef)> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2363);
fatal_exit(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var47, var50); /* Direct call array#Array#add_all on <var47:Array[MProperty]>*/
}
} else {
}
} else {
}
{
{ /* Inline parser_nodes#AMethPropdef#n_methid (self) on <self:AMethPropdef> */
var56 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
var54 = var56;
RET_LABEL55:(void)0;
}
}
if (var54 == NULL) {
var57 = 1; /* is null */
} else {
var57 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var54,((val*)NULL)) on <var54:nullable AMethid> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var54,var_other) on <var54:nullable AMethid(AMethid)> */
var62 = var54 == var_other;
var60 = var62;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
var58 = var60;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
var57 = var58;
}
var_63 = var57;
if (var57){
var53 = var_63;
} else {
{
{ /* Inline parser_nodes#AMethPropdef#n_methid (self) on <self:AMethPropdef> */
var66 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
var64 = var66;
RET_LABEL65:(void)0;
}
}
if (var64 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 895);
fatal_exit(1);
} else {
var67 = ((short int(*)(val* self))(var64->class->vft[COLOR_nitc__modelize_property__AMethid__accept_special_last_parameter]))(var64); /* accept_special_last_parameter on <var64:nullable AMethid>*/
}
var53 = var67;
}
var_accept_special_last_parameter = var53;
{
{ /* Inline parser_nodes#AMethPropdef#n_methid (self) on <self:AMethPropdef> */
var71 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
var69 = var71;
RET_LABEL70:(void)0;
}
}
if (var69 == NULL) {
var72 = 0; /* is null */
} else {
var72 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var69,((val*)NULL)) on <var69:nullable AMethid> */
var_other36 = ((val*)NULL);
{
var75 = ((short int(*)(val* self, val* p0))(var69->class->vft[COLOR_core__kernel__Object___61d_61d]))(var69, var_other36); /* == on <var69:nullable AMethid(AMethid)>*/
}
var76 = !var75;
var73 = var76;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
var72 = var73;
}
var_77 = var72;
if (var72){
{
{ /* Inline parser_nodes#AMethPropdef#n_methid (self) on <self:AMethPropdef> */
var80 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
var78 = var80;
RET_LABEL79:(void)0;
}
}
if (var78 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 896);
fatal_exit(1);
} else {
var81 = ((short int(*)(val* self))(var78->class->vft[COLOR_nitc__modelize_property__AMethid__return_is_mandatory]))(var78); /* return_is_mandatory on <var78:nullable AMethid>*/
}
var68 = var81;
} else {
var68 = var_77;
}
var_return_is_mandatory = var68;
var82 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var82); /* Direct call array#Array#init on <var82:Array[String]>*/
}
var_param_names = var82;
var83 = NEW_core__Array(&type_core__Array__nitc__MType);
{
core___core__Array___core__kernel__Object__init(var83); /* Direct call array#Array#init on <var83:Array[MType]>*/
}
var_param_types = var83;
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var86 = -1l;
var84 = var86;
goto RET_LABEL85;
RET_LABEL85:(void)0;
}
}
var_vararg_rank = var84;
var_ret_type = ((val*)NULL);
if (var_nsig == NULL) {
var87 = 0; /* is null */
} else {
var87 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nsig,((val*)NULL)) on <var_nsig:nullable ASignature> */
var_other36 = ((val*)NULL);
{
var90 = ((short int(*)(val* self, val* p0))(var_nsig->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nsig, var_other36); /* == on <var_nsig:nullable ASignature(ASignature)>*/
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
var92 = nitc__modelize_property___ASignature___visit_signature(var_nsig, var_modelbuilder, var_mclassdef);
}
var93 = !var92;
if (var93){
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property#ASignature#param_names (var_nsig) on <var_nsig:nullable ASignature(ASignature)> */
var96 = var_nsig->attrs[COLOR_nitc__modelize_property__ASignature___param_names].val; /* _param_names on <var_nsig:nullable ASignature(ASignature)> */
if (unlikely(var96 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _param_names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 661);
fatal_exit(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
var_param_names = var94;
{
{ /* Inline modelize_property#ASignature#param_types (var_nsig) on <var_nsig:nullable ASignature(ASignature)> */
var99 = var_nsig->attrs[COLOR_nitc__modelize_property__ASignature___param_types].val; /* _param_types on <var_nsig:nullable ASignature(ASignature)> */
if (unlikely(var99 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _param_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 664);
fatal_exit(1);
}
var97 = var99;
RET_LABEL98:(void)0;
}
}
var_param_types = var97;
{
{ /* Inline modelize_property#ASignature#vararg_rank (var_nsig) on <var_nsig:nullable ASignature(ASignature)> */
var102 = var_nsig->attrs[COLOR_nitc__modelize_property__ASignature___vararg_rank].l; /* _vararg_rank on <var_nsig:nullable ASignature(ASignature)> */
var100 = var102;
RET_LABEL101:(void)0;
}
}
var_vararg_rank = var100;
{
{ /* Inline modelize_property#ASignature#ret_type (var_nsig) on <var_nsig:nullable ASignature(ASignature)> */
var105 = var_nsig->attrs[COLOR_nitc__modelize_property__ASignature___ret_type].val; /* _ret_type on <var_nsig:nullable ASignature(ASignature)> */
var103 = var105;
RET_LABEL104:(void)0;
}
}
var_ret_type = var103;
} else {
}
var_msignature = ((val*)NULL);
{
var106 = nitc___nitc__MPropDef___is_intro(var_mpropdef);
}
var107 = !var106;
if (var107){
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var110 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var110 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var108 = var110;
RET_LABEL109:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var108) on <var108:MProperty(MMethod)> */
var113 = var108->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var108:MProperty(MMethod)> */
if (unlikely(var113 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1986);
fatal_exit(1);
}
var111 = var113;
RET_LABEL112:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var111) on <var111:MPropDef(MMethodDef)> */
var116 = var111->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var111:MPropDef(MMethodDef)> */
var114 = var116;
RET_LABEL115:(void)0;
}
}
var_msignature = var114;
if (var_msignature == NULL) {
var117 = 1; /* is null */
} else {
var117 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_msignature,((val*)NULL)) on <var_msignature:nullable MSignature> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_msignature,var_other) on <var_msignature:nullable MSignature(MSignature)> */
var122 = var_msignature == var_other;
var120 = var122;
goto RET_LABEL121;
RET_LABEL121:(void)0;
}
}
var118 = var120;
goto RET_LABEL119;
RET_LABEL119:(void)0;
}
var117 = var118;
}
if (var117){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var125 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var125 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 576);
fatal_exit(1);
}
var123 = var125;
RET_LABEL124:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var123) on <var123:MClass> */
var128 = var123->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var123:MClass> */
if (unlikely(var128 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 507);
fatal_exit(1);
}
var126 = var128;
RET_LABEL127:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var131 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var131 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 579);
fatal_exit(1);
}
var129 = var131;
RET_LABEL130:(void)0;
}
}
{
var132 = nitc___nitc__MSignature___MType__resolve_for(var_msignature, var126, var129, var_mmodule, 0);
}
var_msignature = var132;
{
{ /* Inline array#AbstractArrayRead#length (var_param_names) on <var_param_names:Array[String]> */
var135 = var_param_names->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_param_names:Array[String]> */
var133 = var135;
RET_LABEL134:(void)0;
}
}
{
var136 = nitc___nitc__MSignature___arity(var_msignature);
}
{
{ /* Inline kernel#Int#!= (var133,var136) on <var133:Int> */
var139 = var133 == var136;
var140 = !var139;
var137 = var140;
goto RET_LABEL138;
RET_LABEL138:(void)0;
}
}
if (var137){
if (var_nsig == NULL) {
var141 = 0; /* is null */
} else {
var141 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nsig,((val*)NULL)) on <var_nsig:nullable ASignature> */
var_other36 = ((val*)NULL);
{
var144 = ((short int(*)(val* self, val* p0))(var_nsig->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nsig, var_other36); /* == on <var_nsig:nullable ASignature(ASignature)>*/
}
var145 = !var144;
var142 = var145;
goto RET_LABEL143;
RET_LABEL143:(void)0;
}
var141 = var142;
}
if (var141){
var_node = var_nsig;
} else {
var_node = self;
}
if (unlikely(varonce==NULL)) {
var146 = NEW_core__NativeArray(10l, &type_core__NativeArray__core__String);
if (likely(varonce147!=NULL)) {
var148 = varonce147;
} else {
var149 = "Redef Error: expected ";
var150 = core__flat___NativeString___to_s_full(var149, 22l, 22l);
var148 = var150;
varonce147 = var148;
}
((struct instance_core__NativeArray*)var146)->values[0]=var148;
if (likely(varonce151!=NULL)) {
var152 = varonce151;
} else {
var153 = " parameter(s) for `";
var154 = core__flat___NativeString___to_s_full(var153, 19l, 19l);
var152 = var154;
varonce151 = var152;
}
((struct instance_core__NativeArray*)var146)->values[2]=var152;
if (likely(varonce155!=NULL)) {
var156 = varonce155;
} else {
var157 = "`; got ";
var158 = core__flat___NativeString___to_s_full(var157, 7l, 7l);
var156 = var158;
varonce155 = var156;
}
((struct instance_core__NativeArray*)var146)->values[5]=var156;
if (likely(varonce159!=NULL)) {
var160 = varonce159;
} else {
var161 = ". See introduction at `";
var162 = core__flat___NativeString___to_s_full(var161, 23l, 23l);
var160 = var162;
varonce159 = var160;
}
((struct instance_core__NativeArray*)var146)->values[7]=var160;
if (likely(varonce163!=NULL)) {
var164 = varonce163;
} else {
var165 = "`.";
var166 = core__flat___NativeString___to_s_full(var165, 2l, 2l);
var164 = var166;
varonce163 = var164;
}
((struct instance_core__NativeArray*)var146)->values[9]=var164;
} else {
var146 = varonce;
varonce = NULL;
}
{
var167 = nitc___nitc__MSignature___arity(var_msignature);
}
var168 = core__flat___Int___core__abstract_text__Object__to_s(var167);
((struct instance_core__NativeArray*)var146)->values[1]=var168;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var171 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var171 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var169 = var171;
RET_LABEL170:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var169) on <var169:MProperty(MMethod)> */
var174 = var169->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var169:MProperty(MMethod)> */
if (unlikely(var174 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1951);
fatal_exit(1);
}
var172 = var174;
RET_LABEL173:(void)0;
}
}
((struct instance_core__NativeArray*)var146)->values[3]=var172;
{
var175 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_msignature); /* to_s on <var_msignature:nullable MSignature(MSignature)>*/
}
((struct instance_core__NativeArray*)var146)->values[4]=var175;
{
{ /* Inline array#AbstractArrayRead#length (var_param_names) on <var_param_names:Array[String]> */
var178 = var_param_names->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_param_names:Array[String]> */
var176 = var178;
RET_LABEL177:(void)0;
}
}
var179 = core__flat___Int___core__abstract_text__Object__to_s(var176);
((struct instance_core__NativeArray*)var146)->values[6]=var179;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var182 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var182 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var180 = var182;
RET_LABEL181:(void)0;
}
}
{
var183 = nitc___nitc__MProperty___nitc__model_base__MEntity__full_name(var180);
}
((struct instance_core__NativeArray*)var146)->values[8]=var183;
{
var184 = ((val*(*)(val* self))(var146->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var146); /* native_to_s on <var146:NativeArray[String]>*/
}
varonce = var146;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_node, var184); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
} else {
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var188 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var188 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var186 = var188;
RET_LABEL187:(void)0;
}
}
{
{ /* Inline model#MMethod#is_init (var186) on <var186:MProperty(MMethod)> */
var191 = var186->attrs[COLOR_nitc__model__MMethod___is_init].s; /* _is_init on <var186:MProperty(MMethod)> */
var189 = var191;
RET_LABEL190:(void)0;
}
}
var_192 = var189;
if (var189){
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var195 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var195 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var193 = var195;
RET_LABEL194:(void)0;
}
}
{
{ /* Inline model#MMethod#is_new (var193) on <var193:MProperty(MMethod)> */
var198 = var193->attrs[COLOR_nitc__model__MMethod___is_new].s; /* _is_new on <var193:MProperty(MMethod)> */
var196 = var198;
RET_LABEL197:(void)0;
}
}
var199 = !var196;
var185 = var199;
} else {
var185 = var_192;
}
if (var185){
{
{ /* Inline model#MClassDef#supertypes (var_mclassdef) on <var_mclassdef:MClassDef> */
var202 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___supertypes].val; /* _supertypes on <var_mclassdef:MClassDef> */
if (unlikely(var202 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supertypes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 650);
fatal_exit(1);
}
var200 = var202;
RET_LABEL201:(void)0;
}
}
var_203 = var200;
{
var204 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_203);
}
var_205 = var204;
for(;;) {
{
var206 = ((short int(*)(val* self))((((long)var_205&3)?class_info[((long)var_205&3)]:var_205->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_205); /* is_ok on <var_205:IndexedIterator[MClassType]>*/
}
if (var206){
} else {
goto BREAK_label;
}
{
var207 = ((val*(*)(val* self))((((long)var_205&3)?class_info[((long)var_205&3)]:var_205->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_205); /* item on <var_205:IndexedIterator[MClassType]>*/
}
var_msupertype = var207;
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var210 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var210 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 579);
fatal_exit(1);
}
var208 = var210;
RET_LABEL209:(void)0;
}
}
{
var211 = nitc___nitc__MClassType___MType__anchor_to(var_msupertype, var_mmodule, var208);
}
var_msupertype = var211;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var214 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var214 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var212 = var214;
RET_LABEL213:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var212) on <var212:MProperty(MMethod)> */
var217 = var212->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var212:MProperty(MMethod)> */
if (unlikely(var217 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1951);
fatal_exit(1);
}
var215 = var217;
RET_LABEL216:(void)0;
}
}
{
var218 = nitc___nitc__ModelBuilder___try_get_mproperty_by_name2(var_modelbuilder, self, var_mmodule, var_msupertype, var215);
}
var_candidate = var218;
if (var_candidate == NULL) {
var219 = 0; /* is null */
} else {
var219 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_candidate,((val*)NULL)) on <var_candidate:nullable MProperty> */
var_other36 = ((val*)NULL);
{
var222 = ((short int(*)(val* self, val* p0))(var_candidate->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_candidate, var_other36); /* == on <var_candidate:nullable MProperty(MProperty)>*/
}
var223 = !var222;
var220 = var223;
goto RET_LABEL221;
RET_LABEL221:(void)0;
}
var219 = var220;
}
if (var219){
if (var_msignature == NULL) {
var224 = 1; /* is null */
} else {
var224 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_msignature,((val*)NULL)) on <var_msignature:nullable MSignature> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_msignature,var_other) on <var_msignature:nullable MSignature(MSignature)> */
var229 = var_msignature == var_other;
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
{
{ /* Inline model#MProperty#intro (var_candidate) on <var_candidate:nullable MProperty(MProperty)> */
var232 = var_candidate->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var_candidate:nullable MProperty(MProperty)> */
if (unlikely(var232 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1986);
fatal_exit(1);
}
var230 = var232;
RET_LABEL231:(void)0;
}
}
/* <var230:MPropDef> isa MMethodDef */
cltype = type_nitc__MMethodDef.color;
idtype = type_nitc__MMethodDef.id;
if(cltype >= var230->type->table_size) {
var233 = 0;
} else {
var233 = var230->type->type_table[cltype] == idtype;
}
if (unlikely(!var233)) {
var_class_name = var230 == NULL ? "null" : var230->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MMethodDef", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 935);
fatal_exit(1);
}
{
{ /* Inline model#MMethodDef#msignature (var230) on <var230:MPropDef(MMethodDef)> */
var236 = var230->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var230:MPropDef(MMethodDef)> */
var234 = var236;
RET_LABEL235:(void)0;
}
}
var_msignature = var234;
} else {
}
} else {
}
{
((void(*)(val* self))((((long)var_205&3)?class_info[((long)var_205&3)]:var_205->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_205); /* next on <var_205:IndexedIterator[MClassType]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_205&3)?class_info[((long)var_205&3)]:var_205->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_205); /* finish on <var_205:IndexedIterator[MClassType]>*/
}
} else {
}
}
if (var_msignature == NULL) {
var240 = 0; /* is null */
} else {
var240 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_msignature,((val*)NULL)) on <var_msignature:nullable MSignature> */
var_other36 = ((val*)NULL);
{
var243 = ((short int(*)(val* self, val* p0))(var_msignature->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_msignature, var_other36); /* == on <var_msignature:nullable MSignature(MSignature)>*/
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
{ /* Inline array#AbstractArrayRead#length (var_param_names) on <var_param_names:Array[String]> */
var248 = var_param_names->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_param_names:Array[String]> */
var246 = var248;
RET_LABEL247:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var_param_types) on <var_param_types:Array[MType]> */
var251 = var_param_types->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_param_types:Array[MType]> */
var249 = var251;
RET_LABEL250:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var246,var249) on <var246:Int> */
var254 = var246 == var249;
var255 = !var254;
var252 = var255;
goto RET_LABEL253;
RET_LABEL253:(void)0;
}
}
var239 = var252;
} else {
var239 = var_245;
}
var_256 = var239;
if (var239){
{
{ /* Inline array#AbstractArrayRead#length (var_param_names) on <var_param_names:Array[String]> */
var259 = var_param_names->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_param_names:Array[String]> */
var257 = var259;
RET_LABEL258:(void)0;
}
}
{
var260 = nitc___nitc__MSignature___arity(var_msignature);
}
{
{ /* Inline kernel#Int#== (var257,var260) on <var257:Int> */
var263 = var257 == var260;
var261 = var263;
goto RET_LABEL262;
RET_LABEL262:(void)0;
}
}
var238 = var261;
} else {
var238 = var_256;
}
var_264 = var238;
if (var238){
{
{ /* Inline array#AbstractArrayRead#length (var_param_types) on <var_param_types:Array[MType]> */
var267 = var_param_types->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_param_types:Array[MType]> */
var265 = var267;
RET_LABEL266:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var265,0l) on <var265:Int> */
var270 = var265 == 0l;
var268 = var270;
goto RET_LABEL269;
RET_LABEL269:(void)0;
}
}
var237 = var268;
} else {
var237 = var_264;
}
if (var237){
var271 = NEW_core__Array(&type_core__Array__nitc__MType);
{
core___core__Array___core__kernel__Object__init(var271); /* Direct call array#Array#init on <var271:Array[MType]>*/
}
var_param_types = var271;
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var274 = var_msignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:nullable MSignature(MSignature)> */
if (unlikely(var274 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1783);
fatal_exit(1);
}
var272 = var274;
RET_LABEL273:(void)0;
}
}
var_275 = var272;
{
var276 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_275);
}
var_277 = var276;
for(;;) {
{
var278 = ((short int(*)(val* self))((((long)var_277&3)?class_info[((long)var_277&3)]:var_277->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_277); /* is_ok on <var_277:IndexedIterator[MParameter]>*/
}
if (var278){
} else {
goto BREAK_label279;
}
{
var280 = ((val*(*)(val* self))((((long)var_277&3)?class_info[((long)var_277&3)]:var_277->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_277); /* item on <var_277:IndexedIterator[MParameter]>*/
}
var_mparameter = var280;
{
{ /* Inline model#MParameter#mtype (var_mparameter) on <var_mparameter:MParameter> */
var283 = var_mparameter->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_mparameter:MParameter> */
if (unlikely(var283 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1900);
fatal_exit(1);
}
var281 = var283;
RET_LABEL282:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_param_types, var281); /* Direct call array#Array#add on <var_param_types:Array[MType]>*/
}
{
((void(*)(val* self))((((long)var_277&3)?class_info[((long)var_277&3)]:var_277->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_277); /* next on <var_277:IndexedIterator[MParameter]>*/
}
}
BREAK_label279: (void)0;
{
((void(*)(val* self))((((long)var_277&3)?class_info[((long)var_277&3)]:var_277->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_277); /* finish on <var_277:IndexedIterator[MParameter]>*/
}
{
{ /* Inline model#MSignature#vararg_rank (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var286 = var_msignature->attrs[COLOR_nitc__model__MSignature___vararg_rank].l; /* _vararg_rank on <var_msignature:nullable MSignature(MSignature)> */
var284 = var286;
RET_LABEL285:(void)0;
}
}
var_vararg_rank = var284;
} else {
}
if (var_msignature == NULL) {
var288 = 0; /* is null */
} else {
var288 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_msignature,((val*)NULL)) on <var_msignature:nullable MSignature> */
var_other36 = ((val*)NULL);
{
var291 = ((short int(*)(val* self, val* p0))(var_msignature->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_msignature, var_other36); /* == on <var_msignature:nullable MSignature(MSignature)>*/
}
var292 = !var291;
var289 = var292;
goto RET_LABEL290;
RET_LABEL290:(void)0;
}
var288 = var289;
}
var_293 = var288;
if (var288){
if (var_ret_type == NULL) {
var294 = 1; /* is null */
} else {
var294 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ret_type,((val*)NULL)) on <var_ret_type:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_ret_type,var_other) on <var_ret_type:nullable MType(MType)> */
var299 = var_ret_type == var_other;
var297 = var299;
goto RET_LABEL298;
RET_LABEL298:(void)0;
}
}
var295 = var297;
goto RET_LABEL296;
RET_LABEL296:(void)0;
}
var294 = var295;
}
var287 = var294;
} else {
var287 = var_293;
}
if (var287){
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var302 = var_msignature->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:nullable MSignature(MSignature)> */
var300 = var302;
RET_LABEL301:(void)0;
}
}
var_ret_type = var300;
} else {
}
{
{ /* Inline array#AbstractArrayRead#length (var_param_names) on <var_param_names:Array[String]> */
var305 = var_param_names->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_param_names:Array[String]> */
var303 = var305;
RET_LABEL304:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var_param_types) on <var_param_types:Array[MType]> */
var308 = var_param_types->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_param_types:Array[MType]> */
var306 = var308;
RET_LABEL307:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var303,var306) on <var303:Int> */
var311 = var303 == var306;
var312 = !var311;
var309 = var312;
goto RET_LABEL310;
RET_LABEL310:(void)0;
}
}
if (var309){
if (var_nsig == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 957);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var_nsig) on <var_nsig:nullable ASignature> */
if (unlikely(var_nsig == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1679);
fatal_exit(1);
}
var315 = var_nsig->attrs[COLOR_nitc__parser_nodes__ASignature___n_params].val; /* _n_params on <var_nsig:nullable ASignature> */
if (unlikely(var315 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1679);
fatal_exit(1);
}
var313 = var315;
RET_LABEL314:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var_param_types) on <var_param_types:Array[MType]> */
var318 = var_param_types->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_param_types:Array[MType]> */
var316 = var318;
RET_LABEL317:(void)0;
}
}
{
var319 = nitc___nitc__ANodes___core__abstract_collection__SequenceRead___91d_93d(var313, var316);
}
if (unlikely(varonce320==NULL)) {
var321 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce322!=NULL)) {
var323 = varonce322;
} else {
var324 = "Error: untyped parameter `";
var325 = core__flat___NativeString___to_s_full(var324, 26l, 26l);
var323 = var325;
varonce322 = var323;
}
((struct instance_core__NativeArray*)var321)->values[0]=var323;
if (likely(varonce326!=NULL)) {
var327 = varonce326;
} else {
var328 = "\'.";
var329 = core__flat___NativeString___to_s_full(var328, 2l, 2l);
var327 = var329;
varonce326 = var327;
}
((struct instance_core__NativeArray*)var321)->values[2]=var327;
} else {
var321 = varonce320;
varonce320 = NULL;
}
{
{ /* Inline array#AbstractArrayRead#length (var_param_types) on <var_param_types:Array[MType]> */
var332 = var_param_types->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_param_types:Array[MType]> */
var330 = var332;
RET_LABEL331:(void)0;
}
}
{
var333 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_param_names, var330);
}
((struct instance_core__NativeArray*)var321)->values[1]=var333;
{
var334 = ((val*(*)(val* self))(var321->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var321); /* native_to_s on <var321:NativeArray[String]>*/
}
varonce320 = var321;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var319, var334); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
var335 = NEW_core__Array(&type_core__Array__nitc__MParameter);
{
core___core__Array___core__kernel__Object__init(var335); /* Direct call array#Array#init on <var335:Array[MParameter]>*/
}
var_mparameters = var335;
var_i = 0l;
{
{ /* Inline array#AbstractArrayRead#length (var_param_names) on <var_param_names:Array[String]> */
var338 = var_param_names->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_param_names:Array[String]> */
var336 = var338;
RET_LABEL337:(void)0;
}
}
var_339 = var336;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_339) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_339:Int> isa OTHER */
/* <var_339:Int> isa OTHER */
var342 = 1; /* easy <var_339:Int> isa OTHER*/
if (unlikely(!var342)) {
var_class_name345 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name345);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var346 = var_i < var_339;
var340 = var346;
goto RET_LABEL341;
RET_LABEL341:(void)0;
}
}
if (var340){
} else {
goto BREAK_label347;
}
var348 = NEW_nitc__MParameter(&type_nitc__MParameter);
{
var349 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_param_names, var_i);
}
{
var350 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_param_types, var_i);
}
{
{ /* Inline kernel#Int#== (var_i,var_vararg_rank) on <var_i:Int> */
var353 = var_i == var_vararg_rank;
var351 = var353;
goto RET_LABEL352;
RET_LABEL352:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var348->class->vft[COLOR_nitc__model__MParameter__name_61d]))(var348, var349); /* name= on <var348:MParameter>*/
}
{
((void(*)(val* self, val* p0))(var348->class->vft[COLOR_nitc__model__MParameter__mtype_61d]))(var348, var350); /* mtype= on <var348:MParameter>*/
}
{
((void(*)(val* self, short int p0))(var348->class->vft[COLOR_nitc__model__MParameter__is_vararg_61d]))(var348, var351); /* is_vararg= on <var348:MParameter>*/
}
{
((void(*)(val* self))(var348->class->vft[COLOR_core__kernel__Object__init]))(var348); /* init on <var348:MParameter>*/
}
var_mparameter354 = var348;
if (var_nsig == NULL) {
var355 = 0; /* is null */
} else {
var355 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nsig,((val*)NULL)) on <var_nsig:nullable ASignature> */
var_other36 = ((val*)NULL);
{
var358 = ((short int(*)(val* self, val* p0))(var_nsig->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nsig, var_other36); /* == on <var_nsig:nullable ASignature(ASignature)>*/
}
var359 = !var358;
var356 = var359;
goto RET_LABEL357;
RET_LABEL357:(void)0;
}
var355 = var356;
}
if (var355){
{
{ /* Inline parser_nodes#ASignature#n_params (var_nsig) on <var_nsig:nullable ASignature(ASignature)> */
var362 = var_nsig->attrs[COLOR_nitc__parser_nodes__ASignature___n_params].val; /* _n_params on <var_nsig:nullable ASignature(ASignature)> */
if (unlikely(var362 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1679);
fatal_exit(1);
}
var360 = var362;
RET_LABEL361:(void)0;
}
}
{
var363 = nitc___nitc__ANodes___core__abstract_collection__SequenceRead___91d_93d(var360, var_i);
}
{
{ /* Inline modelize_property#AParam#mparameter= (var363,var_mparameter354) on <var363:ANode(AParam)> */
var363->attrs[COLOR_nitc__modelize_property__AParam___mparameter].val = var_mparameter354; /* _mparameter on <var363:ANode(AParam)> */
RET_LABEL364:(void)0;
}
}
} else {
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_mparameters, var_mparameter354); /* Direct call array#Array#add on <var_mparameters:Array[MParameter]>*/
}
{
var365 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var365;
}
BREAK_label347: (void)0;
if (var_ret_type == NULL) {
var367 = 1; /* is null */
} else {
var367 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ret_type,((val*)NULL)) on <var_ret_type:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_ret_type,var_other) on <var_ret_type:nullable MType(MType)> */
var372 = var_ret_type == var_other;
var370 = var372;
goto RET_LABEL371;
RET_LABEL371:(void)0;
}
}
var368 = var370;
goto RET_LABEL369;
RET_LABEL369:(void)0;
}
var367 = var368;
}
var_373 = var367;
if (var367){
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var376 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var376 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var374 = var376;
RET_LABEL375:(void)0;
}
}
{
{ /* Inline model#MMethod#is_new (var374) on <var374:MProperty(MMethod)> */
var379 = var374->attrs[COLOR_nitc__model__MMethod___is_new].s; /* _is_new on <var374:MProperty(MMethod)> */
var377 = var379;
RET_LABEL378:(void)0;
}
}
var366 = var377;
} else {
var366 = var_373;
}
if (var366){
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var382 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var382 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 576);
fatal_exit(1);
}
var380 = var382;
RET_LABEL381:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var380) on <var380:MClass> */
var385 = var380->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var380:MClass> */
if (unlikely(var385 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 507);
fatal_exit(1);
}
var383 = var385;
RET_LABEL384:(void)0;
}
}
var_ret_type = var383;
} else {
}
var388 = !var_accept_special_last_parameter;
var_389 = var388;
if (var388){
{
var390 = core___core__Collection___not_empty(var_mparameters);
}
var387 = var390;
} else {
var387 = var_389;
}
var_391 = var387;
if (var387){
{
var392 = core___core__SequenceRead___last(var_mparameters);
}
{
{ /* Inline model#MParameter#is_vararg (var392) on <var392:nullable Object(MParameter)> */
var395 = var392->attrs[COLOR_nitc__model__MParameter___is_vararg].s; /* _is_vararg on <var392:nullable Object(MParameter)> */
var393 = var395;
RET_LABEL394:(void)0;
}
}
var386 = var393;
} else {
var386 = var_391;
}
if (var386){
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (self) on <self:AMethPropdef> */
var398 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var396 = var398;
RET_LABEL397:(void)0;
}
}
if (var396 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 973);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var396) on <var396:nullable ASignature> */
if (unlikely(var396 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1679);
fatal_exit(1);
}
var401 = var396->attrs[COLOR_nitc__parser_nodes__ASignature___n_params].val; /* _n_params on <var396:nullable ASignature> */
if (unlikely(var401 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1679);
fatal_exit(1);
}
var399 = var401;
RET_LABEL400:(void)0;
}
}
{
var402 = core___core__SequenceRead___last(var399);
}
if (unlikely(varonce403==NULL)) {
var404 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce405!=NULL)) {
var406 = varonce405;
} else {
var407 = "Error: illegal variadic parameter `";
var408 = core__flat___NativeString___to_s_full(var407, 35l, 35l);
var406 = var408;
varonce405 = var406;
}
((struct instance_core__NativeArray*)var404)->values[0]=var406;
if (likely(varonce409!=NULL)) {
var410 = varonce409;
} else {
var411 = "` for `";
var412 = core__flat___NativeString___to_s_full(var411, 7l, 7l);
var410 = var412;
varonce409 = var410;
}
((struct instance_core__NativeArray*)var404)->values[2]=var410;
if (likely(varonce413!=NULL)) {
var414 = varonce413;
} else {
var415 = "`.";
var416 = core__flat___NativeString___to_s_full(var415, 2l, 2l);
var414 = var416;
varonce413 = var414;
}
((struct instance_core__NativeArray*)var404)->values[4]=var414;
} else {
var404 = varonce403;
varonce403 = NULL;
}
{
var417 = core___core__SequenceRead___last(var_mparameters);
}
{
var418 = ((val*(*)(val* self))(var417->class->vft[COLOR_core__abstract_text__Object__to_s]))(var417); /* to_s on <var417:nullable Object(MParameter)>*/
}
((struct instance_core__NativeArray*)var404)->values[1]=var418;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var421 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var421 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var419 = var421;
RET_LABEL420:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var419) on <var419:MProperty(MMethod)> */
var424 = var419->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var419:MProperty(MMethod)> */
if (unlikely(var424 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1951);
fatal_exit(1);
}
var422 = var424;
RET_LABEL423:(void)0;
}
}
((struct instance_core__NativeArray*)var404)->values[3]=var422;
{
var425 = ((val*(*)(val* self))(var404->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var404); /* native_to_s on <var404:NativeArray[String]>*/
}
varonce403 = var404;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var402, var425); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
if (var_ret_type == NULL) {
var427 = 1; /* is null */
} else {
var427 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ret_type,((val*)NULL)) on <var_ret_type:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_ret_type,var_other) on <var_ret_type:nullable MType(MType)> */
var432 = var_ret_type == var_other;
var430 = var432;
goto RET_LABEL431;
RET_LABEL431:(void)0;
}
}
var428 = var430;
goto RET_LABEL429;
RET_LABEL429:(void)0;
}
var427 = var428;
}
var_433 = var427;
if (var427){
var426 = var_return_is_mandatory;
} else {
var426 = var_433;
}
if (var426){
{
{ /* Inline parser_nodes#AMethPropdef#n_methid (self) on <self:AMethPropdef> */
var436 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
var434 = var436;
RET_LABEL435:(void)0;
}
}
if (unlikely(varonce437==NULL)) {
var438 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce439!=NULL)) {
var440 = varonce439;
} else {
var441 = "Error: mandatory return type for `";
var442 = core__flat___NativeString___to_s_full(var441, 34l, 34l);
var440 = var442;
varonce439 = var440;
}
((struct instance_core__NativeArray*)var438)->values[0]=var440;
if (likely(varonce443!=NULL)) {
var444 = varonce443;
} else {
var445 = "`.";
var446 = core__flat___NativeString___to_s_full(var445, 2l, 2l);
var444 = var446;
varonce443 = var444;
}
((struct instance_core__NativeArray*)var438)->values[2]=var444;
} else {
var438 = varonce437;
varonce437 = NULL;
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var449 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var449 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var447 = var449;
RET_LABEL448:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var447) on <var447:MProperty(MMethod)> */
var452 = var447->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var447:MProperty(MMethod)> */
if (unlikely(var452 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1951);
fatal_exit(1);
}
var450 = var452;
RET_LABEL451:(void)0;
}
}
((struct instance_core__NativeArray*)var438)->values[1]=var450;
{
var453 = ((val*(*)(val* self))(var438->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var438); /* native_to_s on <var438:NativeArray[String]>*/
}
varonce437 = var438;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var434, var453); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
var454 = NEW_nitc__MSignature(&type_nitc__MSignature);
{
((void(*)(val* self, val* p0))(var454->class->vft[COLOR_nitc__model__MSignature__mparameters_61d]))(var454, var_mparameters); /* mparameters= on <var454:MSignature>*/
}
{
((void(*)(val* self, val* p0))(var454->class->vft[COLOR_nitc__model__MSignature__return_mtype_61d]))(var454, var_ret_type); /* return_mtype= on <var454:MSignature>*/
}
{
((void(*)(val* self))(var454->class->vft[COLOR_core__kernel__Object__init]))(var454); /* init on <var454:MSignature>*/
}
var_msignature = var454;
{
{ /* Inline model#MMethodDef#msignature= (var_mpropdef,var_msignature) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val = var_msignature; /* _msignature on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL455:(void)0;
}
}
if (likely(varonce456!=NULL)) {
var457 = varonce456;
} else {
var458 = "abstract";
var459 = core__flat___NativeString___to_s_full(var458, 8l, 8l);
var457 = var459;
varonce456 = var457;
}
{
var460 = nitc__annotation___Prod___get_single_annotation(self, var457, var_modelbuilder);
}
if (var460 == NULL) {
var461 = 0; /* is null */
} else {
var461 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var460,((val*)NULL)) on <var460:nullable AAnnotation> */
var_other36 = ((val*)NULL);
{
var464 = ((short int(*)(val* self, val* p0))(var460->class->vft[COLOR_core__kernel__Object___61d_61d]))(var460, var_other36); /* == on <var460:nullable AAnnotation(AAnnotation)>*/
}
var465 = !var464;
var462 = var465;
goto RET_LABEL463;
RET_LABEL463:(void)0;
}
var461 = var462;
}
{
{ /* Inline model#MMethodDef#is_abstract= (var_mpropdef,var461) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___is_abstract].s = var461; /* _is_abstract on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL466:(void)0;
}
}
if (likely(varonce467!=NULL)) {
var468 = varonce467;
} else {
var469 = "intern";
var470 = core__flat___NativeString___to_s_full(var469, 6l, 6l);
var468 = var470;
varonce467 = var468;
}
{
var471 = nitc__annotation___Prod___get_single_annotation(self, var468, var_modelbuilder);
}
if (var471 == NULL) {
var472 = 0; /* is null */
} else {
var472 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var471,((val*)NULL)) on <var471:nullable AAnnotation> */
var_other36 = ((val*)NULL);
{
var475 = ((short int(*)(val* self, val* p0))(var471->class->vft[COLOR_core__kernel__Object___61d_61d]))(var471, var_other36); /* == on <var471:nullable AAnnotation(AAnnotation)>*/
}
var476 = !var475;
var473 = var476;
goto RET_LABEL474;
RET_LABEL474:(void)0;
}
var472 = var473;
}
{
{ /* Inline model#MMethodDef#is_intern= (var_mpropdef,var472) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___is_intern].s = var472; /* _is_intern on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL477:(void)0;
}
}
{
{ /* Inline parser_nodes#AMethPropdef#n_extern_code_block (self) on <self:AMethPropdef> */
var481 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AMethPropdef> */
var479 = var481;
RET_LABEL480:(void)0;
}
}
if (var479 == NULL) {
var482 = 0; /* is null */
} else {
var482 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var479,((val*)NULL)) on <var479:nullable AExternCodeBlock> */
var_other36 = ((val*)NULL);
{
var485 = ((short int(*)(val* self, val* p0))(var479->class->vft[COLOR_core__kernel__Object___61d_61d]))(var479, var_other36); /* == on <var479:nullable AExternCodeBlock(AExternCodeBlock)>*/
}
var486 = !var485;
var483 = var486;
goto RET_LABEL484;
RET_LABEL484:(void)0;
}
var482 = var483;
}
var_487 = var482;
if (var482){
var478 = var_487;
} else {
if (likely(varonce488!=NULL)) {
var489 = varonce488;
} else {
var490 = "extern";
var491 = core__flat___NativeString___to_s_full(var490, 6l, 6l);
var489 = var491;
varonce488 = var489;
}
{
var492 = nitc__annotation___Prod___get_single_annotation(self, var489, var_modelbuilder);
}
if (var492 == NULL) {
var493 = 0; /* is null */
} else {
var493 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var492,((val*)NULL)) on <var492:nullable AAnnotation> */
var_other36 = ((val*)NULL);
{
var496 = ((short int(*)(val* self, val* p0))(var492->class->vft[COLOR_core__kernel__Object___61d_61d]))(var492, var_other36); /* == on <var492:nullable AAnnotation(AAnnotation)>*/
}
var497 = !var496;
var494 = var497;
goto RET_LABEL495;
RET_LABEL495:(void)0;
}
var493 = var494;
}
var478 = var493;
}
{
{ /* Inline model#MMethodDef#is_extern= (var_mpropdef,var478) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___is_extern].s = var478; /* _is_extern on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL498:(void)0;
}
}
if (likely(varonce499!=NULL)) {
var500 = varonce499;
} else {
var501 = "lazy";
var502 = core__flat___NativeString___to_s_full(var501, 4l, 4l);
var500 = var502;
varonce499 = var500;
}
{
var503 = nitc__annotation___Prod___get_single_annotation(self, var500, var_modelbuilder);
}
var_at = var503;
if (var_at == NULL) {
var504 = 0; /* is null */
} else {
var504 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_at,((val*)NULL)) on <var_at:nullable AAnnotation> */
var_other36 = ((val*)NULL);
{
var507 = ((short int(*)(val* self, val* p0))(var_at->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_at, var_other36); /* == on <var_at:nullable AAnnotation(AAnnotation)>*/
}
var508 = !var507;
var505 = var508;
goto RET_LABEL506;
RET_LABEL506:(void)0;
}
var504 = var505;
}
if (var504){
if (likely(varonce509!=NULL)) {
var510 = varonce509;
} else {
var511 = "Syntax Error: `lazy` must be used on attributes.";
var512 = core__flat___NativeString___to_s_full(var511, 48l, 48l);
var510 = var512;
varonce509 = var510;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_at, var510); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
if (likely(varonce513!=NULL)) {
var514 = varonce513;
} else {
var515 = "autoinit";
var516 = core__flat___NativeString___to_s_full(var515, 8l, 8l);
var514 = var516;
varonce513 = var514;
}
{
var517 = nitc__annotation___Prod___get_single_annotation(self, var514, var_modelbuilder);
}
var_atautoinit = var517;
if (var_atautoinit == NULL) {
var518 = 0; /* is null */
} else {
var518 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atautoinit,((val*)NULL)) on <var_atautoinit:nullable AAnnotation> */
var_other36 = ((val*)NULL);
{
var521 = ((short int(*)(val* self, val* p0))(var_atautoinit->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atautoinit, var_other36); /* == on <var_atautoinit:nullable AAnnotation(AAnnotation)>*/
}
var522 = !var521;
var519 = var522;
goto RET_LABEL520;
RET_LABEL520:(void)0;
}
var518 = var519;
}
if (var518){
{
var523 = nitc___nitc__MPropDef___is_intro(var_mpropdef);
}
var524 = !var523;
if (var524){
if (likely(varonce525!=NULL)) {
var526 = varonce525;
} else {
var527 = "Error: `autoinit` cannot be set on redefinitions.";
var528 = core__flat___NativeString___to_s_full(var527, 49l, 49l);
var526 = var528;
varonce525 = var526;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_atautoinit, var526); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
{
var529 = nitc___nitc__MClassDef___is_intro(var_mclassdef);
}
var530 = !var529;
if (var530){
if (likely(varonce531!=NULL)) {
var532 = varonce531;
} else {
var533 = "Error: `autoinit` cannot be used in class refinements.";
var534 = core__flat___NativeString___to_s_full(var533, 54l, 54l);
var532 = var534;
varonce531 = var532;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_atautoinit, var532); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
{
{ /* Inline modelize_property#AMethPropdef#is_autoinit= (self,1) on <self:AMethPropdef> */
self->attrs[COLOR_nitc__modelize_property__AMethPropdef___is_autoinit].s = 1; /* _is_autoinit on <self:AMethPropdef> */
RET_LABEL535:(void)0;
}
}
}
}
} else {
}
RET_LABEL:;
}
/* method modelize_property#AMethPropdef#check_signature for (self: AMethPropdef, ModelBuilder) */
void nitc__modelize_property___AMethPropdef___APropdef__check_signature(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var /* : nullable MPropDef */;
val* var2 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MMethodDef */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : MClassDef */;
val* var11 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var12 /* : MModule */;
val* var14 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var15 /* : nullable ASignature */;
val* var17 /* : nullable ASignature */;
val* var_nsig /* var nsig: nullable ASignature */;
val* var18 /* : nullable MSignature */;
val* var20 /* : nullable MSignature */;
val* var_mysignature /* var mysignature: nullable MSignature */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var_other30 /* var other: nullable Object */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
val* var39 /* : MProperty */;
val* var41 /* : MProperty */;
val* var42 /* : MPropDef */;
val* var44 /* : MPropDef */;
val* var45 /* : nullable MSignature */;
val* var47 /* : nullable MSignature */;
val* var_msignature /* var msignature: nullable MSignature */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
val* var54 /* : nullable MType */;
val* var56 /* : nullable MType */;
val* var_precursor_ret_type /* var precursor_ret_type: nullable MType */;
val* var57 /* : nullable MType */;
val* var59 /* : nullable MType */;
val* var_ret_type /* var ret_type: nullable MType */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
short int var_ /* var : Bool */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
short int var69 /* : Bool */;
short int var71 /* : Bool */;
val* var72 /* : nullable AType */;
val* var74 /* : nullable AType */;
val* var75 /* : NativeArray[String] */;
static val* varonce;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
val* var79 /* : String */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
val* var83 /* : String */;
val* var84 /* : MProperty */;
val* var86 /* : MProperty */;
val* var87 /* : String */;
val* var88 /* : String */;
long var91 /* : Int */;
short int var92 /* : Bool */;
short int var94 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var95 /* : Bool */;
long var_i /* var i: Int */;
long var96 /* : Int */;
long var_97 /* var : Int */;
short int var98 /* : Bool */;
short int var100 /* : Bool */;
int cltype101;
int idtype102;
const char* var_class_name103;
short int var104 /* : Bool */;
val* var105 /* : Array[MParameter] */;
val* var107 /* : Array[MParameter] */;
val* var108 /* : nullable Object */;
val* var109 /* : MType */;
val* var111 /* : MType */;
val* var_myt /* var myt: MType */;
val* var112 /* : Array[MParameter] */;
val* var114 /* : Array[MParameter] */;
val* var115 /* : nullable Object */;
val* var116 /* : MType */;
val* var118 /* : MType */;
val* var_prt /* var prt: MType */;
val* var119 /* : ANodes[AParam] */;
val* var121 /* : ANodes[AParam] */;
val* var122 /* : ANode */;
val* var_node /* var node: AParam */;
val* var123 /* : MClassType */;
val* var125 /* : MClassType */;
short int var126 /* : Bool */;
short int var127 /* : Bool */;
val* var129 /* : NativeArray[String] */;
static val* varonce128;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : NativeString */;
val* var133 /* : String */;
static val* varonce134;
val* var135 /* : String */;
char* var136 /* : NativeString */;
val* var137 /* : String */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : NativeString */;
val* var141 /* : String */;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : NativeString */;
val* var145 /* : String */;
val* var146 /* : String */;
val* var147 /* : Array[MParameter] */;
val* var149 /* : Array[MParameter] */;
val* var150 /* : nullable Object */;
val* var151 /* : String */;
val* var153 /* : String */;
val* var154 /* : String */;
val* var155 /* : String */;
long var158 /* : Int */;
short int var159 /* : Bool */;
short int var160 /* : Bool */;
short int var162 /* : Bool */;
short int var163 /* : Bool */;
val* var_node164 /* var node: nullable ANode */;
short int var165 /* : Bool */;
short int var166 /* : Bool */;
short int var168 /* : Bool */;
short int var169 /* : Bool */;
val* var170 /* : nullable AType */;
val* var172 /* : nullable AType */;
short int var173 /* : Bool */;
short int var174 /* : Bool */;
short int var176 /* : Bool */;
short int var178 /* : Bool */;
short int var179 /* : Bool */;
short int var180 /* : Bool */;
short int var182 /* : Bool */;
short int var184 /* : Bool */;
val* var185 /* : MClassType */;
val* var187 /* : MClassType */;
short int var188 /* : Bool */;
short int var189 /* : Bool */;
val* var191 /* : NativeArray[String] */;
static val* varonce190;
static val* varonce192;
val* var193 /* : String */;
char* var194 /* : NativeString */;
val* var195 /* : String */;
static val* varonce196;
val* var197 /* : String */;
char* var198 /* : NativeString */;
val* var199 /* : String */;
static val* varonce200;
val* var201 /* : String */;
char* var202 /* : NativeString */;
val* var203 /* : String */;
val* var204 /* : String */;
val* var205 /* : String */;
val* var206 /* : String */;
short int var209 /* : Bool */;
short int var210 /* : Bool */;
short int var212 /* : Bool */;
short int var213 /* : Bool */;
long var_i214 /* var i: Int */;
long var215 /* : Int */;
long var_216 /* var : Int */;
short int var217 /* : Bool */;
short int var219 /* : Bool */;
int cltype220;
int idtype221;
const char* var_class_name222;
short int var223 /* : Bool */;
val* var225 /* : ANodes[AParam] */;
val* var227 /* : ANodes[AParam] */;
val* var228 /* : ANode */;
val* var229 /* : nullable AType */;
val* var231 /* : nullable AType */;
val* var_nt /* var nt: nullable AType */;
short int var232 /* : Bool */;
short int var233 /* : Bool */;
short int var235 /* : Bool */;
short int var236 /* : Bool */;
val* var237 /* : nullable MType */;
val* var239 /* : nullable MType */;
long var240 /* : Int */;
val* var241 /* : nullable AType */;
val* var243 /* : nullable AType */;
val* var_nt244 /* var nt: nullable AType */;
short int var245 /* : Bool */;
short int var246 /* : Bool */;
short int var248 /* : Bool */;
short int var249 /* : Bool */;
val* var250 /* : nullable MType */;
val* var252 /* : nullable MType */;
var_modelbuilder = p0;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var2 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mpropdef = var;
if (var_mpropdef == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MMethodDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var8 = var_mpropdef == var_other;
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
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var11 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2227);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_mclassdef = var9;
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var14 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 573);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_mmodule = var12;
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (self) on <self:AMethPropdef> */
var17 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_nsig = var15;
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var20 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
var_mysignature = var18;
if (var_mysignature == NULL) {
var21 = 1; /* is null */
} else {
var21 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mysignature,((val*)NULL)) on <var_mysignature:nullable MSignature> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mysignature,var_other) on <var_mysignature:nullable MSignature(MSignature)> */
var26 = var_mysignature == var_other;
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
if (var_nsig == NULL) {
var27 = 0; /* is null */
} else {
var27 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nsig,((val*)NULL)) on <var_nsig:nullable ASignature> */
var_other30 = ((val*)NULL);
{
var31 = ((short int(*)(val* self, val* p0))(var_nsig->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nsig, var_other30); /* == on <var_nsig:nullable ASignature(ASignature)>*/
}
var32 = !var31;
var28 = var32;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
var27 = var28;
}
if (var27){
{
var33 = nitc__modelize_property___ASignature___check_signature(var_nsig, var_modelbuilder, var_mclassdef);
}
var34 = !var33;
if (var34){
{
{ /* Inline model#MMethodDef#msignature= (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val = ((val*)NULL); /* _msignature on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL35:(void)0;
}
}
{
{ /* Inline model_base#MEntity#is_broken= (var_mpropdef,1) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL36:(void)0;
}
}
goto RET_LABEL;
} else {
}
} else {
}
{
var37 = nitc___nitc__MPropDef___is_intro(var_mpropdef);
}
var38 = !var37;
if (var38){
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var41 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var39) on <var39:MProperty(MMethod)> */
var44 = var39->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var39:MProperty(MMethod)> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1986);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var42) on <var42:MPropDef(MMethodDef)> */
var47 = var42->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var42:MPropDef(MMethodDef)> */
var45 = var47;
RET_LABEL46:(void)0;
}
}
var_msignature = var45;
if (var_msignature == NULL) {
var48 = 1; /* is null */
} else {
var48 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_msignature,((val*)NULL)) on <var_msignature:nullable MSignature> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_msignature,var_other) on <var_msignature:nullable MSignature(MSignature)> */
var53 = var_msignature == var_other;
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
var49 = var51;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
var48 = var49;
}
if (var48){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var56 = var_msignature->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:nullable MSignature(MSignature)> */
var54 = var56;
RET_LABEL55:(void)0;
}
}
var_precursor_ret_type = var54;
{
{ /* Inline model#MSignature#return_mtype (var_mysignature) on <var_mysignature:nullable MSignature(MSignature)> */
var59 = var_mysignature->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_mysignature:nullable MSignature(MSignature)> */
var57 = var59;
RET_LABEL58:(void)0;
}
}
var_ret_type = var57;
if (var_ret_type == NULL) {
var61 = 0; /* is null */
} else {
var61 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret_type,((val*)NULL)) on <var_ret_type:nullable MType> */
var_other30 = ((val*)NULL);
{
var64 = ((short int(*)(val* self, val* p0))(var_ret_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ret_type, var_other30); /* == on <var_ret_type:nullable MType(MType)>*/
}
var65 = !var64;
var62 = var65;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
var61 = var62;
}
var_ = var61;
if (var61){
if (var_precursor_ret_type == NULL) {
var66 = 1; /* is null */
} else {
var66 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_precursor_ret_type,((val*)NULL)) on <var_precursor_ret_type:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_precursor_ret_type,var_other) on <var_precursor_ret_type:nullable MType(MType)> */
var71 = var_precursor_ret_type == var_other;
var69 = var71;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
}
var67 = var69;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
var66 = var67;
}
var60 = var66;
} else {
var60 = var_;
}
if (var60){
if (var_nsig == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1029);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ASignature#n_type (var_nsig) on <var_nsig:nullable ASignature> */
if (unlikely(var_nsig == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1685);
fatal_exit(1);
}
var74 = var_nsig->attrs[COLOR_nitc__parser_nodes__ASignature___n_type].val; /* _n_type on <var_nsig:nullable ASignature> */
var72 = var74;
RET_LABEL73:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var75 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce76!=NULL)) {
var77 = varonce76;
} else {
var78 = "Redef Error: `";
var79 = core__flat___NativeString___to_s_full(var78, 14l, 14l);
var77 = var79;
varonce76 = var77;
}
((struct instance_core__NativeArray*)var75)->values[0]=var77;
if (likely(varonce80!=NULL)) {
var81 = varonce80;
} else {
var82 = "` is a procedure, not a function.";
var83 = core__flat___NativeString___to_s_full(var82, 33l, 33l);
var81 = var83;
varonce80 = var81;
}
((struct instance_core__NativeArray*)var75)->values[2]=var81;
} else {
var75 = varonce;
varonce = NULL;
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var86 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var86 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var84 = var86;
RET_LABEL85:(void)0;
}
}
{
var87 = ((val*(*)(val* self))(var84->class->vft[COLOR_core__abstract_text__Object__to_s]))(var84); /* to_s on <var84:MProperty(MMethod)>*/
}
((struct instance_core__NativeArray*)var75)->values[1]=var87;
{
var88 = ((val*(*)(val* self))(var75->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var75); /* native_to_s on <var75:NativeArray[String]>*/
}
varonce = var75;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var72, var88); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
{
{ /* Inline model#MMethodDef#msignature= (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val = ((val*)NULL); /* _msignature on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL89:(void)0;
}
}
{
{ /* Inline model_base#MEntity#is_broken= (var_mpropdef,1) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL90:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
var91 = nitc___nitc__MSignature___arity(var_mysignature);
}
{
{ /* Inline kernel#Int#> (var91,0l) on <var91:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var94 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var94)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
fatal_exit(1);
}
var95 = var91 > 0l;
var92 = var95;
goto RET_LABEL93;
RET_LABEL93:(void)0;
}
}
if (var92){
var_i = 0l;
{
var96 = nitc___nitc__MSignature___arity(var_mysignature);
}
var_97 = var96;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_97) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_97:Int> isa OTHER */
/* <var_97:Int> isa OTHER */
var100 = 1; /* easy <var_97:Int> isa OTHER*/
if (unlikely(!var100)) {
var_class_name103 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name103);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var104 = var_i < var_97;
var98 = var104;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
}
if (var98){
} else {
goto BREAK_label;
}
{
{ /* Inline model#MSignature#mparameters (var_mysignature) on <var_mysignature:nullable MSignature(MSignature)> */
var107 = var_mysignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_mysignature:nullable MSignature(MSignature)> */
if (unlikely(var107 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1783);
fatal_exit(1);
}
var105 = var107;
RET_LABEL106:(void)0;
}
}
{
var108 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var105, var_i);
}
{
{ /* Inline model#MParameter#mtype (var108) on <var108:nullable Object(MParameter)> */
var111 = var108->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var108:nullable Object(MParameter)> */
if (unlikely(var111 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1900);
fatal_exit(1);
}
var109 = var111;
RET_LABEL110:(void)0;
}
}
var_myt = var109;
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var114 = var_msignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:nullable MSignature(MSignature)> */
if (unlikely(var114 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1783);
fatal_exit(1);
}
var112 = var114;
RET_LABEL113:(void)0;
}
}
{
var115 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var112, var_i);
}
{
{ /* Inline model#MParameter#mtype (var115) on <var115:nullable Object(MParameter)> */
var118 = var115->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var115:nullable Object(MParameter)> */
if (unlikely(var118 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1900);
fatal_exit(1);
}
var116 = var118;
RET_LABEL117:(void)0;
}
}
var_prt = var116;
if (var_nsig == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1040);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var_nsig) on <var_nsig:nullable ASignature> */
if (unlikely(var_nsig == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1679);
fatal_exit(1);
}
var121 = var_nsig->attrs[COLOR_nitc__parser_nodes__ASignature___n_params].val; /* _n_params on <var_nsig:nullable ASignature> */
if (unlikely(var121 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1679);
fatal_exit(1);
}
var119 = var121;
RET_LABEL120:(void)0;
}
}
{
var122 = nitc___nitc__ANodes___core__abstract_collection__SequenceRead___91d_93d(var119, var_i);
}
var_node = var122;
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var125 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var125 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 579);
fatal_exit(1);
}
var123 = var125;
RET_LABEL124:(void)0;
}
}
{
var126 = nitc___nitc__ModelBuilder___check_sametype(var_modelbuilder, var_node, var_mmodule, var123, var_myt, var_prt);
}
var127 = !var126;
if (var127){
if (unlikely(varonce128==NULL)) {
var129 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce130!=NULL)) {
var131 = varonce130;
} else {
var132 = "Redef Error: expected `";
var133 = core__flat___NativeString___to_s_full(var132, 23l, 23l);
var131 = var133;
varonce130 = var131;
}
((struct instance_core__NativeArray*)var129)->values[0]=var131;
if (likely(varonce134!=NULL)) {
var135 = varonce134;
} else {
var136 = "` for parameter `";
var137 = core__flat___NativeString___to_s_full(var136, 17l, 17l);
var135 = var137;
varonce134 = var135;
}
((struct instance_core__NativeArray*)var129)->values[2]=var135;
if (likely(varonce138!=NULL)) {
var139 = varonce138;
} else {
var140 = "\'; got `";
var141 = core__flat___NativeString___to_s_full(var140, 8l, 8l);
var139 = var141;
varonce138 = var139;
}
((struct instance_core__NativeArray*)var129)->values[4]=var139;
if (likely(varonce142!=NULL)) {
var143 = varonce142;
} else {
var144 = "`.";
var145 = core__flat___NativeString___to_s_full(var144, 2l, 2l);
var143 = var145;
varonce142 = var143;
}
((struct instance_core__NativeArray*)var129)->values[6]=var143;
} else {
var129 = varonce128;
varonce128 = NULL;
}
{
var146 = ((val*(*)(val* self))(var_prt->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_prt); /* to_s on <var_prt:MType>*/
}
((struct instance_core__NativeArray*)var129)->values[1]=var146;
{
{ /* Inline model#MSignature#mparameters (var_mysignature) on <var_mysignature:nullable MSignature(MSignature)> */
var149 = var_mysignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_mysignature:nullable MSignature(MSignature)> */
if (unlikely(var149 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1783);
fatal_exit(1);
}
var147 = var149;
RET_LABEL148:(void)0;
}
}
{
var150 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var147, var_i);
}
{
{ /* Inline model#MParameter#name (var150) on <var150:nullable Object(MParameter)> */
var153 = var150->attrs[COLOR_nitc__model__MParameter___name].val; /* _name on <var150:nullable Object(MParameter)> */
if (unlikely(var153 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1897);
fatal_exit(1);
}
var151 = var153;
RET_LABEL152:(void)0;
}
}
((struct instance_core__NativeArray*)var129)->values[3]=var151;
{
var154 = ((val*(*)(val* self))(var_myt->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_myt); /* to_s on <var_myt:MType>*/
}
((struct instance_core__NativeArray*)var129)->values[5]=var154;
{
var155 = ((val*(*)(val* self))(var129->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var129); /* native_to_s on <var129:NativeArray[String]>*/
}
varonce128 = var129;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_node, var155); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
{
{ /* Inline model#MMethodDef#msignature= (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val = ((val*)NULL); /* _msignature on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL156:(void)0;
}
}
{
{ /* Inline model_base#MEntity#is_broken= (var_mpropdef,1) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL157:(void)0;
}
}
} else {
}
{
var158 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var158;
}
BREAK_label: (void)0;
} else {
}
if (var_precursor_ret_type == NULL) {
var159 = 0; /* is null */
} else {
var159 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_precursor_ret_type,((val*)NULL)) on <var_precursor_ret_type:nullable MType> */
var_other30 = ((val*)NULL);
{
var162 = ((short int(*)(val* self, val* p0))(var_precursor_ret_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_precursor_ret_type, var_other30); /* == on <var_precursor_ret_type:nullable MType(MType)>*/
}
var163 = !var162;
var160 = var163;
goto RET_LABEL161;
RET_LABEL161:(void)0;
}
var159 = var160;
}
if (var159){
var_node164 = ((val*)NULL);
if (var_nsig == NULL) {
var165 = 0; /* is null */
} else {
var165 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nsig,((val*)NULL)) on <var_nsig:nullable ASignature> */
var_other30 = ((val*)NULL);
{
var168 = ((short int(*)(val* self, val* p0))(var_nsig->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nsig, var_other30); /* == on <var_nsig:nullable ASignature(ASignature)>*/
}
var169 = !var168;
var166 = var169;
goto RET_LABEL167;
RET_LABEL167:(void)0;
}
var165 = var166;
}
if (var165){
{
{ /* Inline parser_nodes#ASignature#n_type (var_nsig) on <var_nsig:nullable ASignature(ASignature)> */
var172 = var_nsig->attrs[COLOR_nitc__parser_nodes__ASignature___n_type].val; /* _n_type on <var_nsig:nullable ASignature(ASignature)> */
var170 = var172;
RET_LABEL171:(void)0;
}
}
var_node164 = var170;
} else {
}
if (var_node164 == NULL) {
var173 = 1; /* is null */
} else {
var173 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_node164,((val*)NULL)) on <var_node164:nullable ANode> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_node164,var_other) on <var_node164:nullable ANode(ANode)> */
var178 = var_node164 == var_other;
var176 = var178;
goto RET_LABEL177;
RET_LABEL177:(void)0;
}
}
var174 = var176;
goto RET_LABEL175;
RET_LABEL175:(void)0;
}
var173 = var174;
}
if (var173){
var_node164 = self;
} else {
}
if (var_ret_type == NULL) {
var179 = 1; /* is null */
} else {
var179 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ret_type,((val*)NULL)) on <var_ret_type:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_ret_type,var_other) on <var_ret_type:nullable MType(MType)> */
var184 = var_ret_type == var_other;
var182 = var184;
goto RET_LABEL183;
RET_LABEL183:(void)0;
}
}
var180 = var182;
goto RET_LABEL181;
RET_LABEL181:(void)0;
}
var179 = var180;
}
if (var179){
var_ret_type = var_precursor_ret_type;
} else {
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var187 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var187 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 579);
fatal_exit(1);
}
var185 = var187;
RET_LABEL186:(void)0;
}
}
{
var188 = nitc___nitc__ModelBuilder___check_subtype(var_modelbuilder, var_node164, var_mmodule, var185, var_ret_type, var_precursor_ret_type);
}
var189 = !var188;
if (var189){
if (unlikely(varonce190==NULL)) {
var191 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce192!=NULL)) {
var193 = varonce192;
} else {
var194 = "Redef Error: expected `";
var195 = core__flat___NativeString___to_s_full(var194, 23l, 23l);
var193 = var195;
varonce192 = var193;
}
((struct instance_core__NativeArray*)var191)->values[0]=var193;
if (likely(varonce196!=NULL)) {
var197 = varonce196;
} else {
var198 = "` for return type; got `";
var199 = core__flat___NativeString___to_s_full(var198, 24l, 24l);
var197 = var199;
varonce196 = var197;
}
((struct instance_core__NativeArray*)var191)->values[2]=var197;
if (likely(varonce200!=NULL)) {
var201 = varonce200;
} else {
var202 = "`.";
var203 = core__flat___NativeString___to_s_full(var202, 2l, 2l);
var201 = var203;
varonce200 = var201;
}
((struct instance_core__NativeArray*)var191)->values[4]=var201;
} else {
var191 = varonce190;
varonce190 = NULL;
}
{
var204 = ((val*(*)(val* self))(var_precursor_ret_type->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_precursor_ret_type); /* to_s on <var_precursor_ret_type:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var191)->values[1]=var204;
{
var205 = ((val*(*)(val* self))(var_ret_type->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_ret_type); /* to_s on <var_ret_type:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var191)->values[3]=var205;
{
var206 = ((val*(*)(val* self))(var191->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var191); /* native_to_s on <var191:NativeArray[String]>*/
}
varonce190 = var191;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_node164, var206); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
{
{ /* Inline model#MMethodDef#msignature= (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val = ((val*)NULL); /* _msignature on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL207:(void)0;
}
}
{
{ /* Inline model_base#MEntity#is_broken= (var_mpropdef,1) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL208:(void)0;
}
}
} else {
}
}
} else {
}
} else {
}
if (var_nsig == NULL) {
var209 = 0; /* is null */
} else {
var209 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nsig,((val*)NULL)) on <var_nsig:nullable ASignature> */
var_other30 = ((val*)NULL);
{
var212 = ((short int(*)(val* self, val* p0))(var_nsig->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nsig, var_other30); /* == on <var_nsig:nullable ASignature(ASignature)>*/
}
var213 = !var212;
var210 = var213;
goto RET_LABEL211;
RET_LABEL211:(void)0;
}
var209 = var210;
}
if (var209){
var_i214 = 0l;
{
var215 = nitc___nitc__MSignature___arity(var_mysignature);
}
var_216 = var215;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i214,var_216) on <var_i214:Int> */
/* Covariant cast for argument 0 (i) <var_216:Int> isa OTHER */
/* <var_216:Int> isa OTHER */
var219 = 1; /* easy <var_216:Int> isa OTHER*/
if (unlikely(!var219)) {
var_class_name222 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name222);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var223 = var_i214 < var_216;
var217 = var223;
goto RET_LABEL218;
RET_LABEL218:(void)0;
}
}
if (var217){
} else {
goto BREAK_label224;
}
{
{ /* Inline parser_nodes#ASignature#n_params (var_nsig) on <var_nsig:nullable ASignature(ASignature)> */
var227 = var_nsig->attrs[COLOR_nitc__parser_nodes__ASignature___n_params].val; /* _n_params on <var_nsig:nullable ASignature(ASignature)> */
if (unlikely(var227 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1679);
fatal_exit(1);
}
var225 = var227;
RET_LABEL226:(void)0;
}
}
{
var228 = nitc___nitc__ANodes___core__abstract_collection__SequenceRead___91d_93d(var225, var_i214);
}
{
{ /* Inline parser_nodes#AParam#n_type (var228) on <var228:ANode(AParam)> */
var231 = var228->attrs[COLOR_nitc__parser_nodes__AParam___n_type].val; /* _n_type on <var228:ANode(AParam)> */
var229 = var231;
RET_LABEL230:(void)0;
}
}
var_nt = var229;
if (var_nt == NULL) {
var232 = 0; /* is null */
} else {
var232 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nt,((val*)NULL)) on <var_nt:nullable AType> */
var_other30 = ((val*)NULL);
{
var235 = ((short int(*)(val* self, val* p0))(var_nt->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nt, var_other30); /* == on <var_nt:nullable AType(AType)>*/
}
var236 = !var235;
var233 = var236;
goto RET_LABEL234;
RET_LABEL234:(void)0;
}
var232 = var233;
}
if (var232){
{
{ /* Inline modelbuilder_base#AType#mtype (var_nt) on <var_nt:nullable AType(AType)> */
var239 = var_nt->attrs[COLOR_nitc__modelbuilder_base__AType___mtype].val; /* _mtype on <var_nt:nullable AType(AType)> */
var237 = var239;
RET_LABEL238:(void)0;
}
}
if (unlikely(var237 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1067);
fatal_exit(1);
}
{
nitc__modelize_property___ModelBuilder___check_visibility(var_modelbuilder, var_nt, var237, var_mpropdef); /* Direct call modelize_property#ModelBuilder#check_visibility on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
{
var240 = core___core__Int___Discrete__successor(var_i214, 1l);
}
var_i214 = var240;
}
BREAK_label224: (void)0;
{
{ /* Inline parser_nodes#ASignature#n_type (var_nsig) on <var_nsig:nullable ASignature(ASignature)> */
var243 = var_nsig->attrs[COLOR_nitc__parser_nodes__ASignature___n_type].val; /* _n_type on <var_nsig:nullable ASignature(ASignature)> */
var241 = var243;
RET_LABEL242:(void)0;
}
}
var_nt244 = var241;
if (var_nt244 == NULL) {
var245 = 0; /* is null */
} else {
var245 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nt244,((val*)NULL)) on <var_nt244:nullable AType> */
var_other30 = ((val*)NULL);
{
var248 = ((short int(*)(val* self, val* p0))(var_nt244->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nt244, var_other30); /* == on <var_nt244:nullable AType(AType)>*/
}
var249 = !var248;
var246 = var249;
goto RET_LABEL247;
RET_LABEL247:(void)0;
}
var245 = var246;
}
if (var245){
{
{ /* Inline modelbuilder_base#AType#mtype (var_nt244) on <var_nt244:nullable AType(AType)> */
var252 = var_nt244->attrs[COLOR_nitc__modelbuilder_base__AType___mtype].val; /* _mtype on <var_nt244:nullable AType(AType)> */
var250 = var252;
RET_LABEL251:(void)0;
}
}
if (unlikely(var250 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1070);
fatal_exit(1);
}
{
nitc__modelize_property___ModelBuilder___check_visibility(var_modelbuilder, var_nt244, var250, var_mpropdef); /* Direct call modelize_property#ModelBuilder#check_visibility on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
} else {
}
{
nitc__modelize_property___AMethPropdef___APropdef__check_repeated_types(self, var_modelbuilder); /* Direct call modelize_property#AMethPropdef#check_repeated_types on <self:AMethPropdef>*/
}
RET_LABEL:;
}
/* method modelize_property#AMethPropdef#check_repeated_types for (self: AMethPropdef, ModelBuilder) */
void nitc__modelize_property___AMethPropdef___APropdef__check_repeated_types(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var /* : nullable MPropDef */;
val* var2 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MMethodDef */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var_ /* var : Bool */;
val* var11 /* : nullable ASignature */;
val* var13 /* : nullable ASignature */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : nullable ASignature */;
val* var22 /* : nullable ASignature */;
val* var23 /* : ANodes[AParam] */;
val* var25 /* : ANodes[AParam] */;
val* var_26 /* var : ANodes[AParam] */;
val* var27 /* : Iterator[ANode] */;
val* var_28 /* var : Iterator[AParam] */;
short int var29 /* : Bool */;
val* var30 /* : nullable Object */;
val* var_param /* var param: AParam */;
val* var31 /* : nullable AType */;
val* var33 /* : nullable AType */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
val* var_other37 /* var other: nullable Object */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
val* var40 /* : nullable AType */;
val* var42 /* : nullable AType */;
static val* varonce;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : String */;
val* var47 /* : NativeArray[String] */;
static val* varonce46;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
val* var51 /* : String */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
val* var55 /* : String */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
val* var59 /* : String */;
val* var60 /* : TId */;
val* var62 /* : TId */;
val* var63 /* : String */;
val* var64 /* : String */;
val* var65 /* : String */;
val* var66 /* : MProperty */;
val* var68 /* : MProperty */;
val* var69 /* : MPropDef */;
val* var71 /* : MPropDef */;
val* var_intro /* var intro: MMethodDef */;
val* var72 /* : HashMap[MPropDef, APropdef] */;
val* var74 /* : HashMap[MPropDef, APropdef] */;
val* var75 /* : nullable Object */;
val* var_n_intro /* var n_intro: nullable APropdef */;
short int var76 /* : Bool */;
short int var77 /* : Bool */;
short int var78 /* : Bool */;
short int var80 /* : Bool */;
short int var82 /* : Bool */;
short int var_83 /* var : Bool */;
short int var84 /* : Bool */;
int cltype;
int idtype;
short int var85 /* : Bool */;
val* var86 /* : nullable ASignature */;
val* var88 /* : nullable ASignature */;
val* var89 /* : nullable MType */;
val* var91 /* : nullable MType */;
val* var_ret_type /* var ret_type: nullable MType */;
short int var92 /* : Bool */;
short int var93 /* : Bool */;
short int var94 /* : Bool */;
short int var96 /* : Bool */;
short int var97 /* : Bool */;
short int var_98 /* var : Bool */;
val* var99 /* : nullable ASignature */;
val* var101 /* : nullable ASignature */;
val* var102 /* : nullable MType */;
val* var104 /* : nullable MType */;
short int var105 /* : Bool */;
short int var107 /* : Bool */;
short int var109 /* : Bool */;
val* var110 /* : nullable ASignature */;
val* var112 /* : nullable ASignature */;
val* var113 /* : nullable AType */;
val* var115 /* : nullable AType */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : NativeString */;
val* var119 /* : String */;
val* var121 /* : NativeArray[String] */;
static val* varonce120;
static val* varonce122;
val* var123 /* : String */;
char* var124 /* : NativeString */;
val* var125 /* : String */;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : NativeString */;
val* var129 /* : String */;
val* var130 /* : String */;
val* var131 /* : String */;
var_modelbuilder = p0;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var2 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mpropdef = var;
if (var_mpropdef == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MMethodDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var8 = var_mpropdef == var_other;
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
var10 = nitc___nitc__MPropDef___is_intro(var_mpropdef);
}
var_ = var10;
if (var10){
var9 = var_;
} else {
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (self) on <self:AMethPropdef> */
var13 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
if (var11 == NULL) {
var14 = 1; /* is null */
} else {
var14 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var11,((val*)NULL)) on <var11:nullable ASignature> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var11,var_other) on <var11:nullable ASignature(ASignature)> */
var19 = var11 == var_other;
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
var9 = var14;
}
if (var9){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (self) on <self:AMethPropdef> */
var22 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
if (var20 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1082);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var20) on <var20:nullable ASignature> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1679);
fatal_exit(1);
}
var25 = var20->attrs[COLOR_nitc__parser_nodes__ASignature___n_params].val; /* _n_params on <var20:nullable ASignature> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1679);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
var_26 = var23;
{
var27 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_26);
}
var_28 = var27;
for(;;) {
{
var29 = ((short int(*)(val* self))((((long)var_28&3)?class_info[((long)var_28&3)]:var_28->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_28); /* is_ok on <var_28:Iterator[AParam]>*/
}
if (var29){
} else {
goto BREAK_label;
}
{
var30 = ((val*(*)(val* self))((((long)var_28&3)?class_info[((long)var_28&3)]:var_28->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_28); /* item on <var_28:Iterator[AParam]>*/
}
var_param = var30;
{
{ /* Inline parser_nodes#AParam#n_type (var_param) on <var_param:AParam> */
var33 = var_param->attrs[COLOR_nitc__parser_nodes__AParam___n_type].val; /* _n_type on <var_param:AParam> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
if (var31 == NULL) {
var34 = 0; /* is null */
} else {
var34 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var31,((val*)NULL)) on <var31:nullable AType> */
var_other37 = ((val*)NULL);
{
var38 = ((short int(*)(val* self, val* p0))(var31->class->vft[COLOR_core__kernel__Object___61d_61d]))(var31, var_other37); /* == on <var31:nullable AType(AType)>*/
}
var39 = !var38;
var35 = var39;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
var34 = var35;
}
if (var34){
{
{ /* Inline parser_nodes#AParam#n_type (var_param) on <var_param:AParam> */
var42 = var_param->attrs[COLOR_nitc__parser_nodes__AParam___n_type].val; /* _n_type on <var_param:AParam> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
if (likely(varonce!=NULL)) {
var43 = varonce;
} else {
var44 = "useless-signature";
var45 = core__flat___NativeString___to_s_full(var44, 17l, 17l);
var43 = var45;
varonce = var43;
}
if (unlikely(varonce46==NULL)) {
var47 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = "Warning: useless type repetition on parameter `";
var51 = core__flat___NativeString___to_s_full(var50, 47l, 47l);
var49 = var51;
varonce48 = var49;
}
((struct instance_core__NativeArray*)var47)->values[0]=var49;
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = "` for redefined method `";
var55 = core__flat___NativeString___to_s_full(var54, 24l, 24l);
var53 = var55;
varonce52 = var53;
}
((struct instance_core__NativeArray*)var47)->values[2]=var53;
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = "`";
var59 = core__flat___NativeString___to_s_full(var58, 1l, 1l);
var57 = var59;
varonce56 = var57;
}
((struct instance_core__NativeArray*)var47)->values[4]=var57;
} else {
var47 = varonce46;
varonce46 = NULL;
}
{
{ /* Inline parser_nodes#AParam#n_id (var_param) on <var_param:AParam> */
var62 = var_param->attrs[COLOR_nitc__parser_nodes__AParam___n_id].val; /* _n_id on <var_param:AParam> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1693);
fatal_exit(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
var63 = nitc__lexer_work___Token___text(var60);
}
((struct instance_core__NativeArray*)var47)->values[1]=var63;
{
var64 = nitc___nitc__MPropDef___nitc__model_base__MEntity__name(var_mpropdef);
}
((struct instance_core__NativeArray*)var47)->values[3]=var64;
{
var65 = ((val*(*)(val* self))(var47->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var47); /* native_to_s on <var47:NativeArray[String]>*/
}
varonce46 = var47;
{
nitc___nitc__ModelBuilder___advice(var_modelbuilder, var40, var43, var65); /* Direct call modelbuilder_base#ModelBuilder#advice on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_28&3)?class_info[((long)var_28&3)]:var_28->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_28); /* next on <var_28:Iterator[AParam]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_28&3)?class_info[((long)var_28&3)]:var_28->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_28); /* finish on <var_28:Iterator[AParam]>*/
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var68 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var66) on <var66:MProperty(MMethod)> */
var71 = var66->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var66:MProperty(MMethod)> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1986);
fatal_exit(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
var_intro = var69;
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var74 = var_modelbuilder->attrs[COLOR_nitc__modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 40);
fatal_exit(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
{
var75 = core___core__HashMap___core__abstract_collection__MapRead__get_or_null(var72, var_intro);
}
var_n_intro = var75;
if (var_n_intro == NULL) {
var77 = 1; /* is null */
} else {
var77 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_n_intro,((val*)NULL)) on <var_n_intro:nullable APropdef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_n_intro,var_other) on <var_n_intro:nullable APropdef(APropdef)> */
var82 = var_n_intro == var_other;
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
var_83 = var77;
if (var77){
var76 = var_83;
} else {
/* <var_n_intro:nullable APropdef(APropdef)> isa AMethPropdef */
cltype = type_nitc__AMethPropdef.color;
idtype = type_nitc__AMethPropdef.id;
if(cltype >= var_n_intro->type->table_size) {
var84 = 0;
} else {
var84 = var_n_intro->type->type_table[cltype] == idtype;
}
var85 = !var84;
var76 = var85;
}
if (var76){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (self) on <self:AMethPropdef> */
var88 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var86 = var88;
RET_LABEL87:(void)0;
}
}
if (var86 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1092);
fatal_exit(1);
} else {
{ /* Inline modelize_property#ASignature#ret_type (var86) on <var86:nullable ASignature> */
if (unlikely(var86 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 670);
fatal_exit(1);
}
var91 = var86->attrs[COLOR_nitc__modelize_property__ASignature___ret_type].val; /* _ret_type on <var86:nullable ASignature> */
var89 = var91;
RET_LABEL90:(void)0;
}
}
var_ret_type = var89;
if (var_ret_type == NULL) {
var93 = 0; /* is null */
} else {
var93 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret_type,((val*)NULL)) on <var_ret_type:nullable MType> */
var_other37 = ((val*)NULL);
{
var96 = ((short int(*)(val* self, val* p0))(var_ret_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ret_type, var_other37); /* == on <var_ret_type:nullable MType(MType)>*/
}
var97 = !var96;
var94 = var97;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
var93 = var94;
}
var_98 = var93;
if (var93){
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (var_n_intro) on <var_n_intro:nullable APropdef(AMethPropdef)> */
var101 = var_n_intro->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <var_n_intro:nullable APropdef(AMethPropdef)> */
var99 = var101;
RET_LABEL100:(void)0;
}
}
if (var99 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1093);
fatal_exit(1);
} else {
{ /* Inline modelize_property#ASignature#ret_type (var99) on <var99:nullable ASignature> */
if (unlikely(var99 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 670);
fatal_exit(1);
}
var104 = var99->attrs[COLOR_nitc__modelize_property__ASignature___ret_type].val; /* _ret_type on <var99:nullable ASignature> */
var102 = var104;
RET_LABEL103:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var_ret_type,var102) on <var_ret_type:nullable MType(MType)> */
var_other = var102;
{
{ /* Inline kernel#Object#is_same_instance (var_ret_type,var_other) on <var_ret_type:nullable MType(MType)> */
var109 = var_ret_type == var_other;
var107 = var109;
goto RET_LABEL108;
RET_LABEL108:(void)0;
}
}
var105 = var107;
goto RET_LABEL106;
RET_LABEL106:(void)0;
}
}
var92 = var105;
} else {
var92 = var_98;
}
if (var92){
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (self) on <self:AMethPropdef> */
var112 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var110 = var112;
RET_LABEL111:(void)0;
}
}
if (var110 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1094);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ASignature#n_type (var110) on <var110:nullable ASignature> */
if (unlikely(var110 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1685);
fatal_exit(1);
}
var115 = var110->attrs[COLOR_nitc__parser_nodes__ASignature___n_type].val; /* _n_type on <var110:nullable ASignature> */
var113 = var115;
RET_LABEL114:(void)0;
}
}
if (likely(varonce116!=NULL)) {
var117 = varonce116;
} else {
var118 = "useless-signature";
var119 = core__flat___NativeString___to_s_full(var118, 17l, 17l);
var117 = var119;
varonce116 = var117;
}
if (unlikely(varonce120==NULL)) {
var121 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce122!=NULL)) {
var123 = varonce122;
} else {
var124 = "Warning: useless return type repetition for redefined method `";
var125 = core__flat___NativeString___to_s_full(var124, 62l, 62l);
var123 = var125;
varonce122 = var123;
}
((struct instance_core__NativeArray*)var121)->values[0]=var123;
if (likely(varonce126!=NULL)) {
var127 = varonce126;
} else {
var128 = "`";
var129 = core__flat___NativeString___to_s_full(var128, 1l, 1l);
var127 = var129;
varonce126 = var127;
}
((struct instance_core__NativeArray*)var121)->values[2]=var127;
} else {
var121 = varonce120;
varonce120 = NULL;
}
{
var130 = nitc___nitc__MPropDef___nitc__model_base__MEntity__name(var_mpropdef);
}
((struct instance_core__NativeArray*)var121)->values[1]=var130;
{
var131 = ((val*(*)(val* self))(var121->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var121); /* native_to_s on <var121:NativeArray[String]>*/
}
varonce120 = var121;
{
nitc___nitc__ModelBuilder___advice(var_modelbuilder, var113, var117, var131); /* Direct call modelbuilder_base#ModelBuilder#advice on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
RET_LABEL:;
}
/* method modelize_property#AMethid#return_is_mandatory for (self: AMethid): Bool */
short int nitc__modelize_property___AMethid___return_is_mandatory(val* self) {
short int var /* : Bool */;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#AMethid#accept_special_last_parameter for (self: AMethid): Bool */
short int nitc__modelize_property___AMethid___accept_special_last_parameter(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#AMethid#min_arity for (self: AMethid): Int */
long nitc__modelize_property___AMethid___min_arity(val* self) {
long var /* : Int */;
var = 1l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#AMethid#is_binary for (self: AMethid): Bool */
short int nitc__modelize_property___AMethid___is_binary(val* self) {
short int var /* : Bool */;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#AIdMethid#return_is_mandatory for (self: AIdMethid): Bool */
short int nitc__modelize_property___AIdMethid___AMethid__return_is_mandatory(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#AIdMethid#accept_special_last_parameter for (self: AIdMethid): Bool */
short int nitc__modelize_property___AIdMethid___AMethid__accept_special_last_parameter(val* self) {
short int var /* : Bool */;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#AIdMethid#min_arity for (self: AIdMethid): Int */
long nitc__modelize_property___AIdMethid___AMethid__min_arity(val* self) {
long var /* : Int */;
var = 0l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#AIdMethid#is_binary for (self: AIdMethid): Bool */
short int nitc__modelize_property___AIdMethid___AMethid__is_binary(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#ABraMethid#accept_special_last_parameter for (self: ABraMethid): Bool */
short int nitc__modelize_property___ABraMethid___AMethid__accept_special_last_parameter(val* self) {
short int var /* : Bool */;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#ABraMethid#is_binary for (self: ABraMethid): Bool */
short int nitc__modelize_property___ABraMethid___AMethid__is_binary(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#ABraassignMethid#return_is_mandatory for (self: ABraassignMethid): Bool */
short int nitc__modelize_property___ABraassignMethid___AMethid__return_is_mandatory(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#ABraassignMethid#min_arity for (self: ABraassignMethid): Int */
long nitc__modelize_property___ABraassignMethid___AMethid__min_arity(val* self) {
long var /* : Int */;
var = 2l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#ABraassignMethid#is_binary for (self: ABraassignMethid): Bool */
short int nitc__modelize_property___ABraassignMethid___AMethid__is_binary(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#AAssignMethid#return_is_mandatory for (self: AAssignMethid): Bool */
short int nitc__modelize_property___AAssignMethid___AMethid__return_is_mandatory(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#AAssignMethid#is_binary for (self: AAssignMethid): Bool */
short int nitc__modelize_property___AAssignMethid___AMethid__is_binary(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#mtype for (self: AAttrPropdef): nullable MType */
val* nitc__modelize_property___AAttrPropdef___mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mtype].val; /* _mtype on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#mtype= for (self: AAttrPropdef, nullable MType) */
void nitc__modelize_property___AAttrPropdef___mtype_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mtype].val = p0; /* _mtype on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#noinit for (self: AAttrPropdef): Bool */
short int nitc__modelize_property___AAttrPropdef___noinit(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___noinit].s; /* _noinit on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#noinit= for (self: AAttrPropdef, Bool) */
void nitc__modelize_property___AAttrPropdef___noinit_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___noinit].s = p0; /* _noinit on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#is_lazy for (self: AAttrPropdef): Bool */
short int nitc__modelize_property___AAttrPropdef___is_lazy(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___is_lazy].s; /* _is_lazy on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#is_lazy= for (self: AAttrPropdef, Bool) */
void nitc__modelize_property___AAttrPropdef___is_lazy_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___is_lazy].s = p0; /* _is_lazy on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#has_value for (self: AAttrPropdef): Bool */
short int nitc__modelize_property___AAttrPropdef___has_value(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#has_value= for (self: AAttrPropdef, Bool) */
void nitc__modelize_property___AAttrPropdef___has_value_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___has_value].s = p0; /* _has_value on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#mlazypropdef for (self: AAttrPropdef): nullable MAttributeDef */
val* nitc__modelize_property___AAttrPropdef___mlazypropdef(val* self) {
val* var /* : nullable MAttributeDef */;
val* var1 /* : nullable MAttributeDef */;
var1 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mlazypropdef].val; /* _mlazypropdef on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#mlazypropdef= for (self: AAttrPropdef, nullable MAttributeDef) */
void nitc__modelize_property___AAttrPropdef___mlazypropdef_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mlazypropdef].val = p0; /* _mlazypropdef on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#mreadpropdef for (self: AAttrPropdef): nullable MMethodDef */
val* nitc__modelize_property___AAttrPropdef___mreadpropdef(val* self) {
val* var /* : nullable MMethodDef */;
val* var1 /* : nullable MMethodDef */;
var1 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mreadpropdef].val; /* _mreadpropdef on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#mreadpropdef= for (self: AAttrPropdef, nullable MMethodDef) */
void nitc__modelize_property___AAttrPropdef___mreadpropdef_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mreadpropdef].val = p0; /* _mreadpropdef on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#mwritepropdef for (self: AAttrPropdef): nullable MMethodDef */
val* nitc__modelize_property___AAttrPropdef___mwritepropdef(val* self) {
val* var /* : nullable MMethodDef */;
val* var1 /* : nullable MMethodDef */;
var1 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mwritepropdef].val; /* _mwritepropdef on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#mwritepropdef= for (self: AAttrPropdef, nullable MMethodDef) */
void nitc__modelize_property___AAttrPropdef___mwritepropdef_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mwritepropdef].val = p0; /* _mwritepropdef on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#build_property for (self: AAttrPropdef, ModelBuilder, MClassDef) */
void nitc__modelize_property___AAttrPropdef___APropdef__build_property(val* self, val* p0, val* p1) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var /* : MClass */;
val* var2 /* : MClass */;
val* var_mclass /* var mclass: MClass */;
val* var3 /* : TId */;
val* var5 /* : TId */;
val* var_nid2 /* var nid2: TId */;
val* var6 /* : String */;
val* var_name /* var name: String */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : String */;
val* var10 /* : nullable AAnnotation */;
val* var_atabstract /* var atabstract: nullable AAnnotation */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : MClassKind */;
val* var19 /* : MClassKind */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var25 /* : NativeArray[String] */;
static val* varonce24;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
val* var29 /* : String */;
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
val* var42 /* : MClassKind */;
val* var44 /* : MClassKind */;
val* var45 /* : String */;
val* var46 /* : String */;
val* var47 /* : String */;
val* var48 /* : MAttribute */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
val* var52 /* : String */;
val* var53 /* : String */;
val* var54 /* : Sys */;
val* var55 /* : MVisibility */;
val* var_mprop /* var mprop: MAttribute */;
val* var56 /* : MAttributeDef */;
val* var57 /* : Location */;
val* var59 /* : Location */;
val* var_mpropdef /* var mpropdef: MAttributeDef */;
short int var60 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var62 /* : Bool */;
int cltype63;
int idtype64;
const struct type* type_struct65;
const char* var_class_name66;
val* var67 /* : HashMap[MPropDef, APropdef] */;
val* var69 /* : HashMap[MPropDef, APropdef] */;
val* var_readname /* var readname: String */;
val* var70 /* : nullable MProperty */;
short int var71 /* : Bool */;
int cltype72;
int idtype73;
const char* var_class_name74;
val* var_mreadprop /* var mreadprop: nullable MMethod */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
short int var78 /* : Bool */;
short int var80 /* : Bool */;
val* var81 /* : nullable AVisibility */;
val* var83 /* : nullable AVisibility */;
val* var84 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: MVisibility */;
val* var85 /* : MMethod */;
val* var86 /* : nullable TKwredef */;
val* var88 /* : nullable TKwredef */;
short int var89 /* : Bool */;
short int var90 /* : Bool */;
val* var91 /* : nullable TKwredef */;
val* var93 /* : nullable TKwredef */;
short int var94 /* : Bool */;
short int var95 /* : Bool */;
val* var96 /* : nullable AVisibility */;
val* var98 /* : nullable AVisibility */;
val* var99 /* : Map[MProperty, APropdef] */;
val* var101 /* : Map[MProperty, APropdef] */;
val* var102 /* : MMethodDef */;
val* var103 /* : Location */;
val* var105 /* : Location */;
val* var_mreadpropdef /* var mreadpropdef: MMethodDef */;
val* var107 /* : HashMap[MPropDef, APropdef] */;
val* var109 /* : HashMap[MPropDef, APropdef] */;
val* var110 /* : nullable MPropDef */;
val* var112 /* : nullable MPropDef */;
short int var113 /* : Bool */;
short int var114 /* : Bool */;
val* var_other116 /* var other: nullable Object */;
short int var117 /* : Bool */;
short int var118 /* : Bool */;
val* var119 /* : nullable MPropDef */;
val* var121 /* : nullable MPropDef */;
val* var122 /* : nullable MDoc */;
val* var124 /* : nullable MDoc */;
short int var126 /* : Bool */;
short int var127 /* : Bool */;
short int var129 /* : Bool */;
short int var130 /* : Bool */;
short int var132 /* : Bool */;
val* var133 /* : nullable AExpr */;
val* var135 /* : nullable AExpr */;
short int var136 /* : Bool */;
short int var137 /* : Bool */;
short int var139 /* : Bool */;
short int var140 /* : Bool */;
short int var_ /* var : Bool */;
val* var141 /* : nullable AExpr */;
val* var143 /* : nullable AExpr */;
short int var144 /* : Bool */;
short int var145 /* : Bool */;
short int var147 /* : Bool */;
short int var148 /* : Bool */;
short int var150 /* : Bool */;
short int var151 /* : Bool */;
short int var152 /* : Bool */;
short int var154 /* : Bool */;
short int var155 /* : Bool */;
short int var_156 /* var : Bool */;
short int var157 /* : Bool */;
short int var159 /* : Bool */;
static val* varonce160;
val* var161 /* : String */;
char* var162 /* : NativeString */;
val* var163 /* : String */;
static val* varonce164;
val* var165 /* : String */;
char* var166 /* : NativeString */;
val* var167 /* : String */;
val* var168 /* : nullable AAnnotation */;
val* var_atnoinit /* var atnoinit: nullable AAnnotation */;
short int var169 /* : Bool */;
short int var170 /* : Bool */;
short int var172 /* : Bool */;
short int var174 /* : Bool */;
static val* varonce175;
val* var176 /* : String */;
char* var177 /* : NativeString */;
val* var178 /* : String */;
val* var179 /* : nullable AAnnotation */;
short int var180 /* : Bool */;
short int var181 /* : Bool */;
short int var183 /* : Bool */;
short int var184 /* : Bool */;
short int var186 /* : Bool */;
short int var188 /* : Bool */;
static val* varonce189;
val* var190 /* : String */;
char* var191 /* : NativeString */;
val* var192 /* : String */;
short int var193 /* : Bool */;
short int var194 /* : Bool */;
short int var196 /* : Bool */;
short int var197 /* : Bool */;
static val* varonce198;
val* var199 /* : String */;
char* var200 /* : NativeString */;
val* var201 /* : String */;
static val* varonce202;
val* var203 /* : String */;
char* var204 /* : NativeString */;
val* var205 /* : String */;
static val* varonce206;
val* var207 /* : String */;
char* var208 /* : NativeString */;
val* var209 /* : String */;
val* var210 /* : nullable AAnnotation */;
val* var_atlazy /* var atlazy: nullable AAnnotation */;
static val* varonce211;
val* var212 /* : String */;
char* var213 /* : NativeString */;
val* var214 /* : String */;
val* var215 /* : nullable AAnnotation */;
val* var_atlateinit /* var atlateinit: nullable AAnnotation */;
short int var216 /* : Bool */;
short int var217 /* : Bool */;
short int var218 /* : Bool */;
short int var220 /* : Bool */;
short int var221 /* : Bool */;
short int var_222 /* var : Bool */;
short int var223 /* : Bool */;
short int var224 /* : Bool */;
short int var226 /* : Bool */;
short int var227 /* : Bool */;
short int var228 /* : Bool */;
short int var229 /* : Bool */;
short int var230 /* : Bool */;
short int var232 /* : Bool */;
short int var233 /* : Bool */;
short int var_234 /* var : Bool */;
short int var235 /* : Bool */;
short int var236 /* : Bool */;
short int var238 /* : Bool */;
short int var239 /* : Bool */;
static val* varonce240;
val* var241 /* : String */;
char* var242 /* : NativeString */;
val* var243 /* : String */;
short int var244 /* : Bool */;
short int var246 /* : Bool */;
short int var247 /* : Bool */;
short int var248 /* : Bool */;
short int var249 /* : Bool */;
short int var251 /* : Bool */;
short int var252 /* : Bool */;
static val* varonce253;
val* var254 /* : String */;
char* var255 /* : NativeString */;
val* var256 /* : String */;
short int var257 /* : Bool */;
short int var258 /* : Bool */;
short int var260 /* : Bool */;
short int var261 /* : Bool */;
static val* varonce262;
val* var263 /* : String */;
char* var264 /* : NativeString */;
val* var265 /* : String */;
val* var268 /* : MAttribute */;
static val* varonce269;
val* var270 /* : String */;
char* var271 /* : NativeString */;
val* var272 /* : String */;
val* var273 /* : String */;
val* var274 /* : Sys */;
val* var275 /* : MVisibility */;
val* var_mlazyprop /* var mlazyprop: MAttribute */;
val* var277 /* : MAttributeDef */;
val* var278 /* : Location */;
val* var280 /* : Location */;
val* var_mlazypropdef /* var mlazypropdef: MAttributeDef */;
static val* varonce283;
val* var284 /* : String */;
char* var285 /* : NativeString */;
val* var286 /* : String */;
val* var287 /* : nullable AAnnotation */;
val* var_atreadonly /* var atreadonly: nullable AAnnotation */;
short int var288 /* : Bool */;
short int var289 /* : Bool */;
short int var291 /* : Bool */;
short int var292 /* : Bool */;
short int var293 /* : Bool */;
short int var295 /* : Bool */;
short int var296 /* : Bool */;
static val* varonce297;
val* var298 /* : String */;
char* var299 /* : NativeString */;
val* var300 /* : String */;
short int var301 /* : Bool */;
short int var302 /* : Bool */;
short int var303 /* : Bool */;
short int var304 /* : Bool */;
short int var_305 /* var : Bool */;
short int var306 /* : Bool */;
short int var308 /* : Bool */;
short int var309 /* : Bool */;
short int var_310 /* var : Bool */;
short int var311 /* : Bool */;
short int var313 /* : Bool */;
short int var314 /* : Bool */;
static val* varonce315;
val* var316 /* : String */;
char* var317 /* : NativeString */;
val* var318 /* : String */;
static val* varonce319;
val* var320 /* : String */;
char* var321 /* : NativeString */;
val* var322 /* : String */;
static val* varonce323;
val* var324 /* : String */;
char* var325 /* : NativeString */;
val* var326 /* : String */;
val* var327 /* : String */;
val* var_writename /* var writename: String */;
static val* varonce328;
val* var329 /* : String */;
char* var330 /* : NativeString */;
val* var331 /* : String */;
val* var332 /* : nullable AAnnotation */;
val* var_atwritable /* var atwritable: nullable AAnnotation */;
short int var333 /* : Bool */;
short int var334 /* : Bool */;
short int var336 /* : Bool */;
short int var337 /* : Bool */;
val* var338 /* : ANodes[AExpr] */;
val* var340 /* : ANodes[AExpr] */;
short int var341 /* : Bool */;
short int var342 /* : Bool */;
val* var343 /* : String */;
val* var344 /* : nullable String */;
val* var345 /* : nullable MProperty */;
short int var346 /* : Bool */;
int cltype347;
int idtype348;
const char* var_class_name349;
val* var_mwriteprop /* var mwriteprop: nullable MMethod */;
val* var_nwkwredef /* var nwkwredef: nullable Token */;
short int var350 /* : Bool */;
short int var351 /* : Bool */;
short int var353 /* : Bool */;
short int var354 /* : Bool */;
val* var355 /* : nullable TKwredef */;
val* var357 /* : nullable TKwredef */;
short int var358 /* : Bool */;
short int var359 /* : Bool */;
short int var361 /* : Bool */;
short int var363 /* : Bool */;
short int var364 /* : Bool */;
short int var365 /* : Bool */;
short int var367 /* : Bool */;
short int var368 /* : Bool */;
val* var369 /* : nullable AVisibility */;
val* var371 /* : nullable AVisibility */;
val* var372 /* : MVisibility */;
val* var_mvisibility373 /* var mvisibility: nullable Object */;
val* var374 /* : MVisibility */;
val* var376 /* : MVisibility */;
val* var377 /* : Sys */;
val* var378 /* : MVisibility */;
short int var379 /* : Bool */;
val* var380 /* : Sys */;
val* var381 /* : MVisibility */;
val* var382 /* : MMethod */;
short int var383 /* : Bool */;
short int var384 /* : Bool */;
val* var385 /* : nullable MDeprecationInfo */;
val* var387 /* : nullable MDeprecationInfo */;
val* var389 /* : nullable Token */;
val* var390 /* : nullable TKwredef */;
val* var392 /* : nullable TKwredef */;
short int var393 /* : Bool */;
short int var394 /* : Bool */;
short int var395 /* : Bool */;
short int var396 /* : Bool */;
short int var398 /* : Bool */;
short int var399 /* : Bool */;
val* var400 /* : nullable AVisibility */;
val* var402 /* : nullable AVisibility */;
val* var403 /* : Map[MProperty, APropdef] */;
val* var405 /* : Map[MProperty, APropdef] */;
val* var406 /* : MMethodDef */;
val* var407 /* : Location */;
val* var409 /* : Location */;
val* var_mwritepropdef /* var mwritepropdef: MMethodDef */;
val* var411 /* : HashMap[MPropDef, APropdef] */;
val* var413 /* : HashMap[MPropDef, APropdef] */;
val* var414 /* : nullable MDoc */;
val* var416 /* : nullable MDoc */;
short int var418 /* : Bool */;
short int var419 /* : Bool */;
short int var421 /* : Bool */;
short int var422 /* : Bool */;
static val* varonce424;
val* var425 /* : String */;
char* var426 /* : NativeString */;
val* var427 /* : String */;
val* var428 /* : nullable AAnnotation */;
val* var_atautoinit /* var atautoinit: nullable AAnnotation */;
short int var429 /* : Bool */;
short int var430 /* : Bool */;
short int var432 /* : Bool */;
short int var433 /* : Bool */;
short int var434 /* : Bool */;
short int var436 /* : Bool */;
static val* varonce437;
val* var438 /* : String */;
char* var439 /* : NativeString */;
val* var440 /* : String */;
short int var441 /* : Bool */;
short int var442 /* : Bool */;
static val* varonce443;
val* var444 /* : String */;
char* var445 /* : NativeString */;
val* var446 /* : String */;
short int var447 /* : Bool */;
short int var448 /* : Bool */;
static val* varonce449;
val* var450 /* : String */;
char* var451 /* : NativeString */;
val* var452 /* : String */;
short int var453 /* : Bool */;
short int var454 /* : Bool */;
short int var456 /* : Bool */;
short int var458 /* : Bool */;
static val* varonce459;
val* var460 /* : String */;
char* var461 /* : NativeString */;
val* var462 /* : String */;
static val* varonce463;
val* var464 /* : String */;
char* var465 /* : NativeString */;
val* var466 /* : String */;
short int var467 /* : Bool */;
short int var468 /* : Bool */;
short int var470 /* : Bool */;
short int var471 /* : Bool */;
var_modelbuilder = p0;
var_mclassdef = p1;
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var2 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 576);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_mclass = var;
{
{ /* Inline parser_nodes#AAttrPropdef#n_id2 (self) on <self:AAttrPropdef> */
var5 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_id2].val; /* _n_id2 on <self:AAttrPropdef> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1277);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_nid2 = var3;
{
var6 = nitc__lexer_work___Token___text(var_nid2);
}
var_name = var6;
if (likely(varonce!=NULL)) {
var7 = varonce;
} else {
var8 = "abstract";
var9 = core__flat___NativeString___to_s_full(var8, 8l, 8l);
var7 = var9;
varonce = var7;
}
{
var10 = nitc__annotation___Prod___get_single_annotation(self, var7, var_modelbuilder);
}
var_atabstract = var10;
if (var_atabstract == NULL) {
var11 = 1; /* is null */
} else {
var11 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_atabstract,((val*)NULL)) on <var_atabstract:nullable AAnnotation> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_atabstract,var_other) on <var_atabstract:nullable AAnnotation(AAnnotation)> */
var16 = var_atabstract == var_other;
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
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:MClass> */
var19 = var_mclass->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var_mclass:MClass> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 459);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline model#MClassKind#need_init (var17) on <var17:MClassKind> */
var22 = var17->attrs[COLOR_nitc__model__MClassKind___need_init].s; /* _need_init on <var17:MClassKind> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
var23 = !var20;
if (var23){
if (unlikely(varonce24==NULL)) {
var25 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "Error: attempt to define attribute `";
var29 = core__flat___NativeString___to_s_full(var28, 36l, 36l);
var27 = var29;
varonce26 = var27;
}
((struct instance_core__NativeArray*)var25)->values[0]=var27;
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "` in the ";
var33 = core__flat___NativeString___to_s_full(var32, 9l, 9l);
var31 = var33;
varonce30 = var31;
}
((struct instance_core__NativeArray*)var25)->values[2]=var31;
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = " `";
var37 = core__flat___NativeString___to_s_full(var36, 2l, 2l);
var35 = var37;
varonce34 = var35;
}
((struct instance_core__NativeArray*)var25)->values[4]=var35;
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "`.";
var41 = core__flat___NativeString___to_s_full(var40, 2l, 2l);
var39 = var41;
varonce38 = var39;
}
((struct instance_core__NativeArray*)var25)->values[6]=var39;
} else {
var25 = varonce24;
varonce24 = NULL;
}
((struct instance_core__NativeArray*)var25)->values[1]=var_name;
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:MClass> */
var44 = var_mclass->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var_mclass:MClass> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 459);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
var45 = ((val*(*)(val* self))(var42->class->vft[COLOR_core__abstract_text__Object__to_s]))(var42); /* to_s on <var42:MClassKind>*/
}
((struct instance_core__NativeArray*)var25)->values[3]=var45;
{
var46 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclass); /* to_s on <var_mclass:MClass>*/
}
((struct instance_core__NativeArray*)var25)->values[5]=var46;
{
var47 = ((val*(*)(val* self))(var25->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var25); /* native_to_s on <var25:NativeArray[String]>*/
}
varonce24 = var25;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, self, var47); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
var48 = NEW_nitc__MAttribute(&type_nitc__MAttribute);
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "_";
var52 = core__flat___NativeString___to_s_full(var51, 1l, 1l);
var50 = var52;
varonce49 = var50;
}
{
var53 = ((val*(*)(val* self, val* p0))(var50->class->vft[COLOR_core__abstract_text__String___43d]))(var50, var_name); /* + on <var50:String>*/
}
var54 = glob_sys;
{
var55 = nitc__model_base___core__Sys___private_visibility(var54);
}
{
((void(*)(val* self, val* p0))(var48->class->vft[COLOR_nitc__model__MProperty__intro_mclassdef_61d]))(var48, var_mclassdef); /* intro_mclassdef= on <var48:MAttribute>*/
}
{
((void(*)(val* self, val* p0))(var48->class->vft[COLOR_nitc__model__MProperty__name_61d]))(var48, var53); /* name= on <var48:MAttribute>*/
}
{
((void(*)(val* self, val* p0))(var48->class->vft[COLOR_nitc__model__MProperty__visibility_61d]))(var48, var55); /* visibility= on <var48:MAttribute>*/
}
{
((void(*)(val* self))(var48->class->vft[COLOR_core__kernel__Object__init]))(var48); /* init on <var48:MAttribute>*/
}
var_mprop = var48;
var56 = NEW_nitc__MAttributeDef(&type_nitc__MAttributeDef);
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AAttrPropdef> */
var59 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <self:AAttrPropdef> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 24);
fatal_exit(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var56->class->vft[COLOR_nitc__model__MPropDef__mclassdef_61d]))(var56, var_mclassdef); /* mclassdef= on <var56:MAttributeDef>*/
}
{
((void(*)(val* self, val* p0))(var56->class->vft[COLOR_nitc__model__MPropDef__mproperty_61d]))(var56, var_mprop); /* mproperty= on <var56:MAttributeDef>*/
}
{
((void(*)(val* self, val* p0))(var56->class->vft[COLOR_nitc__model__MPropDef__location_61d]))(var56, var57); /* location= on <var56:MAttributeDef>*/
}
{
((void(*)(val* self))(var56->class->vft[COLOR_core__kernel__Object__init]))(var56); /* init on <var56:MAttributeDef>*/
}
var_mpropdef = var56;
/* <var_mpropdef:MAttributeDef> isa nullable MPROPDEF */
type_struct = self->type->resolution_table->types[COLOR_nullable__nitc__modelize_property__APropdef__MPROPDEF];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var_mpropdef->type->table_size) {
var60 = 0;
} else {
var60 = var_mpropdef->type->type_table[cltype] == idtype;
}
if (unlikely(!var60)) {
var_class_name = var_mpropdef == NULL ? "null" : var_mpropdef->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1191);
fatal_exit(1);
}
{
{ /* Inline modelize_property#APropdef#mpropdef= (self,var_mpropdef) on <self:AAttrPropdef> */
/* Covariant cast for argument 0 (mpropdef) <var_mpropdef:MAttributeDef> isa nullable MPROPDEF */
/* <var_mpropdef:MAttributeDef> isa nullable MPROPDEF */
type_struct65 = self->type->resolution_table->types[COLOR_nullable__nitc__modelize_property__APropdef__MPROPDEF];
cltype63 = type_struct65->color;
idtype64 = type_struct65->id;
if(cltype63 >= var_mpropdef->type->table_size) {
var62 = 0;
} else {
var62 = var_mpropdef->type->type_table[cltype63] == idtype64;
}
if (unlikely(!var62)) {
var_class_name66 = var_mpropdef == NULL ? "null" : var_mpropdef->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name66);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 559);
fatal_exit(1);
}
self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val = var_mpropdef; /* _mpropdef on <self:AAttrPropdef> */
RET_LABEL61:(void)0;
}
}
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var69 = var_modelbuilder->attrs[COLOR_nitc__modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var69 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 40);
fatal_exit(1);
}
var67 = var69;
RET_LABEL68:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var67, var_mpropdef, self); /* Direct call hash_collection#HashMap#[]= on <var67:HashMap[MPropDef, APropdef]>*/
}
} else {
}
var_readname = var_name;
{
var70 = nitc___nitc__ModelBuilder___try_get_mproperty_by_name(var_modelbuilder, var_nid2, var_mclassdef, var_readname);
}
/* <var70:nullable MProperty> isa nullable MMethod */
cltype72 = type_nullable__nitc__MMethod.color;
idtype73 = type_nullable__nitc__MMethod.id;
if(var70 == NULL) {
var71 = 1;
} else {
if(cltype72 >= var70->type->table_size) {
var71 = 0;
} else {
var71 = var70->type->type_table[cltype72] == idtype73;
}
}
if (unlikely(!var71)) {
var_class_name74 = var70 == NULL ? "null" : var70->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MMethod", var_class_name74);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1196);
fatal_exit(1);
}
var_mreadprop = var70;
if (var_mreadprop == NULL) {
var75 = 1; /* is null */
} else {
var75 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mreadprop,((val*)NULL)) on <var_mreadprop:nullable MMethod> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mreadprop,var_other) on <var_mreadprop:nullable MMethod(MMethod)> */
var80 = var_mreadprop == var_other;
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
{
{ /* Inline parser_nodes#ADefinition#n_visibility (self) on <self:AAttrPropdef> */
var83 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AAttrPropdef> */
var81 = var83;
RET_LABEL82:(void)0;
}
}
{
var84 = nitc__modelize_property___APropdef___new_property_visibility(self, var_modelbuilder, var_mclassdef, var81);
}
var_mvisibility = var84;
var85 = NEW_nitc__MMethod(&type_nitc__MMethod);
{
((void(*)(val* self, val* p0))(var85->class->vft[COLOR_nitc__model__MProperty__intro_mclassdef_61d]))(var85, var_mclassdef); /* intro_mclassdef= on <var85:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var85->class->vft[COLOR_nitc__model__MProperty__name_61d]))(var85, var_readname); /* name= on <var85:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var85->class->vft[COLOR_nitc__model__MProperty__visibility_61d]))(var85, var_mvisibility); /* visibility= on <var85:MMethod>*/
}
{
((void(*)(val* self))(var85->class->vft[COLOR_core__kernel__Object__init]))(var85); /* init on <var85:MMethod>*/
}
var_mreadprop = var85;
{
{ /* Inline parser_nodes#ADefinition#n_kwredef (self) on <self:AAttrPropdef> */
var88 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AAttrPropdef> */
var86 = var88;
RET_LABEL87:(void)0;
}
}
{
var89 = nitc__modelize_property___APropdef___check_redef_keyword(self, var_modelbuilder, var_mclassdef, var86, 0, var_mreadprop);
}
var90 = !var89;
if (var90){
goto RET_LABEL;
} else {
}
} else {
{
{ /* Inline parser_nodes#ADefinition#n_kwredef (self) on <self:AAttrPropdef> */
var93 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AAttrPropdef> */
var91 = var93;
RET_LABEL92:(void)0;
}
}
{
var94 = nitc__modelize_property___APropdef___check_redef_keyword(self, var_modelbuilder, var_mclassdef, var91, 1, var_mreadprop);
}
var95 = !var94;
if (var95){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ADefinition#n_visibility (self) on <self:AAttrPropdef> */
var98 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AAttrPropdef> */
var96 = var98;
RET_LABEL97:(void)0;
}
}
{
nitc__modelize_property___APropdef___check_redef_property_visibility(self, var_modelbuilder, var96, var_mreadprop); /* Direct call modelize_property#APropdef#check_redef_property_visibility on <self:AAttrPropdef>*/
}
}
{
{ /* Inline modelize_property#MClassDef#mprop2npropdef (var_mclassdef) on <var_mclassdef:MClassDef> */
var101 = var_mclassdef->attrs[COLOR_nitc__modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <var_mclassdef:MClassDef> */
if (unlikely(var101 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 506);
fatal_exit(1);
}
var99 = var101;
RET_LABEL100:(void)0;
}
}
{
((void(*)(val* self, val* p0, val* p1))((((long)var99&3)?class_info[((long)var99&3)]:var99->class)->vft[COLOR_core__abstract_collection__Map___91d_93d_61d]))(var99, var_mreadprop, self); /* []= on <var99:Map[MProperty, APropdef]>*/
}
var102 = NEW_nitc__MMethodDef(&type_nitc__MMethodDef);
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AAttrPropdef> */
var105 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <self:AAttrPropdef> */
if (unlikely(var105 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 24);
fatal_exit(1);
}
var103 = var105;
RET_LABEL104:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var102->class->vft[COLOR_nitc__model__MPropDef__mclassdef_61d]))(var102, var_mclassdef); /* mclassdef= on <var102:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var102->class->vft[COLOR_nitc__model__MPropDef__mproperty_61d]))(var102, var_mreadprop); /* mproperty= on <var102:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var102->class->vft[COLOR_nitc__model__MPropDef__location_61d]))(var102, var103); /* location= on <var102:MMethodDef>*/
}
{
((void(*)(val* self))(var102->class->vft[COLOR_core__kernel__Object__init]))(var102); /* init on <var102:MMethodDef>*/
}
var_mreadpropdef = var102;
{
{ /* Inline modelize_property#AAttrPropdef#mreadpropdef= (self,var_mreadpropdef) on <self:AAttrPropdef> */
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mreadpropdef].val = var_mreadpropdef; /* _mreadpropdef on <self:AAttrPropdef> */
RET_LABEL106:(void)0;
}
}
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var109 = var_modelbuilder->attrs[COLOR_nitc__modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var109 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 40);
fatal_exit(1);
}
var107 = var109;
RET_LABEL108:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var107, var_mreadpropdef, self); /* Direct call hash_collection#HashMap#[]= on <var107:HashMap[MPropDef, APropdef]>*/
}
{
nitc__modelize_property___APropdef___set_doc(self, var_mreadpropdef, var_modelbuilder); /* Direct call modelize_property#APropdef#set_doc on <self:AAttrPropdef>*/
}
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var112 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var110 = var112;
RET_LABEL111:(void)0;
}
}
if (var110 == NULL) {
var113 = 0; /* is null */
} else {
var113 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var110,((val*)NULL)) on <var110:nullable MPropDef(nullable MAttributeDef)> */
var_other116 = ((val*)NULL);
{
var117 = ((short int(*)(val* self, val* p0))(var110->class->vft[COLOR_core__kernel__Object___61d_61d]))(var110, var_other116); /* == on <var110:nullable MAttributeDef(MAttributeDef)>*/
}
var118 = !var117;
var114 = var118;
goto RET_LABEL115;
RET_LABEL115:(void)0;
}
var113 = var114;
}
if (var113){
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var121 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var119 = var121;
RET_LABEL120:(void)0;
}
}
{
{ /* Inline mdoc#MEntity#mdoc (var_mreadpropdef) on <var_mreadpropdef:MMethodDef> */
var124 = var_mreadpropdef->attrs[COLOR_nitc__mdoc__MEntity___mdoc].val; /* _mdoc on <var_mreadpropdef:MMethodDef> */
var122 = var124;
RET_LABEL123:(void)0;
}
}
if (var119 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1211);
fatal_exit(1);
} else {
{ /* Inline mdoc#MEntity#mdoc= (var119,var122) on <var119:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var119 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mdoc, 37);
fatal_exit(1);
}
var119->attrs[COLOR_nitc__mdoc__MEntity___mdoc].val = var122; /* _mdoc on <var119:nullable MPropDef(nullable MAttributeDef)> */
RET_LABEL125:(void)0;
}
}
} else {
}
if (var_atabstract == NULL) {
var126 = 0; /* is null */
} else {
var126 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atabstract,((val*)NULL)) on <var_atabstract:nullable AAnnotation> */
var_other116 = ((val*)NULL);
{
var129 = ((short int(*)(val* self, val* p0))(var_atabstract->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atabstract, var_other116); /* == on <var_atabstract:nullable AAnnotation(AAnnotation)>*/
}
var130 = !var129;
var127 = var130;
goto RET_LABEL128;
RET_LABEL128:(void)0;
}
var126 = var127;
}
if (var126){
{
{ /* Inline model#MMethodDef#is_abstract= (var_mreadpropdef,1) on <var_mreadpropdef:MMethodDef> */
var_mreadpropdef->attrs[COLOR_nitc__model__MMethodDef___is_abstract].s = 1; /* _is_abstract on <var_mreadpropdef:MMethodDef> */
RET_LABEL131:(void)0;
}
}
} else {
}
{
{ /* Inline parser_nodes#AAttrPropdef#n_expr (self) on <self:AAttrPropdef> */
var135 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <self:AAttrPropdef> */
var133 = var135;
RET_LABEL134:(void)0;
}
}
if (var133 == NULL) {
var136 = 0; /* is null */
} else {
var136 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var133,((val*)NULL)) on <var133:nullable AExpr> */
var_other116 = ((val*)NULL);
{
var139 = ((short int(*)(val* self, val* p0))(var133->class->vft[COLOR_core__kernel__Object___61d_61d]))(var133, var_other116); /* == on <var133:nullable AExpr(AExpr)>*/
}
var140 = !var139;
var137 = var140;
goto RET_LABEL138;
RET_LABEL138:(void)0;
}
var136 = var137;
}
var_ = var136;
if (var136){
var132 = var_;
} else {
{
{ /* Inline parser_nodes#AAttrPropdef#n_block (self) on <self:AAttrPropdef> */
var143 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_block].val; /* _n_block on <self:AAttrPropdef> */
var141 = var143;
RET_LABEL142:(void)0;
}
}
if (var141 == NULL) {
var144 = 0; /* is null */
} else {
var144 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var141,((val*)NULL)) on <var141:nullable AExpr> */
var_other116 = ((val*)NULL);
{
var147 = ((short int(*)(val* self, val* p0))(var141->class->vft[COLOR_core__kernel__Object___61d_61d]))(var141, var_other116); /* == on <var141:nullable AExpr(AExpr)>*/
}
var148 = !var147;
var145 = var148;
goto RET_LABEL146;
RET_LABEL146:(void)0;
}
var144 = var145;
}
var132 = var144;
}
{
{ /* Inline modelize_property#AAttrPropdef#has_value= (self,var132) on <self:AAttrPropdef> */
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___has_value].s = var132; /* _has_value on <self:AAttrPropdef> */
RET_LABEL149:(void)0;
}
}
if (var_atabstract == NULL) {
var151 = 0; /* is null */
} else {
var151 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atabstract,((val*)NULL)) on <var_atabstract:nullable AAnnotation> */
var_other116 = ((val*)NULL);
{
var154 = ((short int(*)(val* self, val* p0))(var_atabstract->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atabstract, var_other116); /* == on <var_atabstract:nullable AAnnotation(AAnnotation)>*/
}
var155 = !var154;
var152 = var155;
goto RET_LABEL153;
RET_LABEL153:(void)0;
}
var151 = var152;
}
var_156 = var151;
if (var151){
{
{ /* Inline modelize_property#AAttrPropdef#has_value (self) on <self:AAttrPropdef> */
var159 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <self:AAttrPropdef> */
var157 = var159;
RET_LABEL158:(void)0;
}
}
var150 = var157;
} else {
var150 = var_156;
}
if (var150){
if (likely(varonce160!=NULL)) {
var161 = varonce160;
} else {
var162 = "Error: `abstract` attributes cannot have an initial value.";
var163 = core__flat___NativeString___to_s_full(var162, 58l, 58l);
var161 = var163;
varonce160 = var161;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_atabstract, var161); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
if (likely(varonce164!=NULL)) {
var165 = varonce164;
} else {
var166 = "noinit";
var167 = core__flat___NativeString___to_s_full(var166, 6l, 6l);
var165 = var167;
varonce164 = var165;
}
{
var168 = nitc__annotation___Prod___get_single_annotation(self, var165, var_modelbuilder);
}
var_atnoinit = var168;
if (var_atnoinit == NULL) {
var169 = 1; /* is null */
} else {
var169 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_atnoinit,((val*)NULL)) on <var_atnoinit:nullable AAnnotation> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_atnoinit,var_other) on <var_atnoinit:nullable AAnnotation(AAnnotation)> */
var174 = var_atnoinit == var_other;
var172 = var174;
goto RET_LABEL173;
RET_LABEL173:(void)0;
}
}
var170 = var172;
goto RET_LABEL171;
RET_LABEL171:(void)0;
}
var169 = var170;
}
if (var169){
if (likely(varonce175!=NULL)) {
var176 = varonce175;
} else {
var177 = "noautoinit";
var178 = core__flat___NativeString___to_s_full(var177, 10l, 10l);
var176 = var178;
varonce175 = var176;
}
{
var179 = nitc__annotation___Prod___get_single_annotation(self, var176, var_modelbuilder);
}
var_atnoinit = var179;
} else {
}
if (var_atnoinit == NULL) {
var180 = 0; /* is null */
} else {
var180 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atnoinit,((val*)NULL)) on <var_atnoinit:nullable AAnnotation> */
var_other116 = ((val*)NULL);
{
var183 = ((short int(*)(val* self, val* p0))(var_atnoinit->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atnoinit, var_other116); /* == on <var_atnoinit:nullable AAnnotation(AAnnotation)>*/
}
var184 = !var183;
var181 = var184;
goto RET_LABEL182;
RET_LABEL182:(void)0;
}
var180 = var181;
}
if (var180){
{
{ /* Inline modelize_property#AAttrPropdef#noinit= (self,1) on <self:AAttrPropdef> */
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___noinit].s = 1; /* _noinit on <self:AAttrPropdef> */
RET_LABEL185:(void)0;
}
}
{
{ /* Inline modelize_property#AAttrPropdef#has_value (self) on <self:AAttrPropdef> */
var188 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <self:AAttrPropdef> */
var186 = var188;
RET_LABEL187:(void)0;
}
}
if (var186){
if (likely(varonce189!=NULL)) {
var190 = varonce189;
} else {
var191 = "Error: `noautoinit` attributes cannot have an initial value.";
var192 = core__flat___NativeString___to_s_full(var191, 60l, 60l);
var190 = var192;
varonce189 = var190;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_atnoinit, var190); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
if (var_atabstract == NULL) {
var193 = 0; /* is null */
} else {
var193 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atabstract,((val*)NULL)) on <var_atabstract:nullable AAnnotation> */
var_other116 = ((val*)NULL);
{
var196 = ((short int(*)(val* self, val* p0))(var_atabstract->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atabstract, var_other116); /* == on <var_atabstract:nullable AAnnotation(AAnnotation)>*/
}
var197 = !var196;
var194 = var197;
goto RET_LABEL195;
RET_LABEL195:(void)0;
}
var193 = var194;
}
if (var193){
if (likely(varonce198!=NULL)) {
var199 = varonce198;
} else {
var200 = "useless-noautoinit";
var201 = core__flat___NativeString___to_s_full(var200, 18l, 18l);
var199 = var201;
varonce198 = var199;
}
if (likely(varonce202!=NULL)) {
var203 = varonce202;
} else {
var204 = "Warning: superfluous `noautoinit` on abstract attribute.";
var205 = core__flat___NativeString___to_s_full(var204, 56l, 56l);
var203 = var205;
varonce202 = var203;
}
{
nitc___nitc__ModelBuilder___warning(var_modelbuilder, var_atnoinit, var199, var203); /* Direct call modelbuilder_base#ModelBuilder#warning on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
} else {
}
if (likely(varonce206!=NULL)) {
var207 = varonce206;
} else {
var208 = "lazy";
var209 = core__flat___NativeString___to_s_full(var208, 4l, 4l);
var207 = var209;
varonce206 = var207;
}
{
var210 = nitc__annotation___Prod___get_single_annotation(self, var207, var_modelbuilder);
}
var_atlazy = var210;
if (likely(varonce211!=NULL)) {
var212 = varonce211;
} else {
var213 = "lateinit";
var214 = core__flat___NativeString___to_s_full(var213, 8l, 8l);
var212 = var214;
varonce211 = var212;
}
{
var215 = nitc__annotation___Prod___get_single_annotation(self, var212, var_modelbuilder);
}
var_atlateinit = var215;
if (var_atlazy == NULL) {
var217 = 0; /* is null */
} else {
var217 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atlazy,((val*)NULL)) on <var_atlazy:nullable AAnnotation> */
var_other116 = ((val*)NULL);
{
var220 = ((short int(*)(val* self, val* p0))(var_atlazy->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atlazy, var_other116); /* == on <var_atlazy:nullable AAnnotation(AAnnotation)>*/
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
var216 = var_222;
} else {
if (var_atlateinit == NULL) {
var223 = 0; /* is null */
} else {
var223 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atlateinit,((val*)NULL)) on <var_atlateinit:nullable AAnnotation> */
var_other116 = ((val*)NULL);
{
var226 = ((short int(*)(val* self, val* p0))(var_atlateinit->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atlateinit, var_other116); /* == on <var_atlateinit:nullable AAnnotation(AAnnotation)>*/
}
var227 = !var226;
var224 = var227;
goto RET_LABEL225;
RET_LABEL225:(void)0;
}
var223 = var224;
}
var216 = var223;
}
if (var216){
if (var_atlazy == NULL) {
var229 = 0; /* is null */
} else {
var229 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atlazy,((val*)NULL)) on <var_atlazy:nullable AAnnotation> */
var_other116 = ((val*)NULL);
{
var232 = ((short int(*)(val* self, val* p0))(var_atlazy->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atlazy, var_other116); /* == on <var_atlazy:nullable AAnnotation(AAnnotation)>*/
}
var233 = !var232;
var230 = var233;
goto RET_LABEL231;
RET_LABEL231:(void)0;
}
var229 = var230;
}
var_234 = var229;
if (var229){
if (var_atlateinit == NULL) {
var235 = 0; /* is null */
} else {
var235 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atlateinit,((val*)NULL)) on <var_atlateinit:nullable AAnnotation> */
var_other116 = ((val*)NULL);
{
var238 = ((short int(*)(val* self, val* p0))(var_atlateinit->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atlateinit, var_other116); /* == on <var_atlateinit:nullable AAnnotation(AAnnotation)>*/
}
var239 = !var238;
var236 = var239;
goto RET_LABEL237;
RET_LABEL237:(void)0;
}
var235 = var236;
}
var228 = var235;
} else {
var228 = var_234;
}
if (var228){
if (likely(varonce240!=NULL)) {
var241 = varonce240;
} else {
var242 = "Error: `lazy` incompatible with `lateinit`.";
var243 = core__flat___NativeString___to_s_full(var242, 43l, 43l);
var241 = var243;
varonce240 = var241;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_atlazy, var241); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property#AAttrPropdef#has_value (self) on <self:AAttrPropdef> */
var246 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <self:AAttrPropdef> */
var244 = var246;
RET_LABEL245:(void)0;
}
}
var247 = !var244;
if (var247){
if (var_atlazy == NULL) {
var248 = 0; /* is null */
} else {
var248 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atlazy,((val*)NULL)) on <var_atlazy:nullable AAnnotation> */
var_other116 = ((val*)NULL);
{
var251 = ((short int(*)(val* self, val* p0))(var_atlazy->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atlazy, var_other116); /* == on <var_atlazy:nullable AAnnotation(AAnnotation)>*/
}
var252 = !var251;
var249 = var252;
goto RET_LABEL250;
RET_LABEL250:(void)0;
}
var248 = var249;
}
if (var248){
if (likely(varonce253!=NULL)) {
var254 = varonce253;
} else {
var255 = "Error: `lazy` attributes need a value.";
var256 = core__flat___NativeString___to_s_full(var255, 38l, 38l);
var254 = var256;
varonce253 = var254;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_atlazy, var254); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
if (var_atlateinit == NULL) {
var257 = 0; /* is null */
} else {
var257 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atlateinit,((val*)NULL)) on <var_atlateinit:nullable AAnnotation> */
var_other116 = ((val*)NULL);
{
var260 = ((short int(*)(val* self, val* p0))(var_atlateinit->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atlateinit, var_other116); /* == on <var_atlateinit:nullable AAnnotation(AAnnotation)>*/
}
var261 = !var260;
var258 = var261;
goto RET_LABEL259;
RET_LABEL259:(void)0;
}
var257 = var258;
}
if (var257){
if (likely(varonce262!=NULL)) {
var263 = varonce262;
} else {
var264 = "Error: `lateinit` attributes need a value.";
var265 = core__flat___NativeString___to_s_full(var264, 42l, 42l);
var263 = var265;
varonce262 = var263;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_atlateinit, var263); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
}
{
{ /* Inline modelize_property#AAttrPropdef#has_value= (self,1) on <self:AAttrPropdef> */
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___has_value].s = 1; /* _has_value on <self:AAttrPropdef> */
RET_LABEL266:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property#AAttrPropdef#is_lazy= (self,1) on <self:AAttrPropdef> */
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___is_lazy].s = 1; /* _is_lazy on <self:AAttrPropdef> */
RET_LABEL267:(void)0;
}
}
var268 = NEW_nitc__MAttribute(&type_nitc__MAttribute);
if (likely(varonce269!=NULL)) {
var270 = varonce269;
} else {
var271 = "lazy _";
var272 = core__flat___NativeString___to_s_full(var271, 6l, 6l);
var270 = var272;
varonce269 = var270;
}
{
var273 = ((val*(*)(val* self, val* p0))(var270->class->vft[COLOR_core__abstract_text__String___43d]))(var270, var_name); /* + on <var270:String>*/
}
var274 = glob_sys;
{
var275 = nitc__model_base___core__Sys___none_visibility(var274);
}
{
((void(*)(val* self, val* p0))(var268->class->vft[COLOR_nitc__model__MProperty__intro_mclassdef_61d]))(var268, var_mclassdef); /* intro_mclassdef= on <var268:MAttribute>*/
}
{
((void(*)(val* self, val* p0))(var268->class->vft[COLOR_nitc__model__MProperty__name_61d]))(var268, var273); /* name= on <var268:MAttribute>*/
}
{
((void(*)(val* self, val* p0))(var268->class->vft[COLOR_nitc__model__MProperty__visibility_61d]))(var268, var275); /* visibility= on <var268:MAttribute>*/
}
{
((void(*)(val* self))(var268->class->vft[COLOR_core__kernel__Object__init]))(var268); /* init on <var268:MAttribute>*/
}
var_mlazyprop = var268;
{
{ /* Inline model_base#MEntity#is_fictive= (var_mlazyprop,1) on <var_mlazyprop:MAttribute> */
var_mlazyprop->attrs[COLOR_nitc__model_base__MEntity___is_fictive].s = 1; /* _is_fictive on <var_mlazyprop:MAttribute> */
RET_LABEL276:(void)0;
}
}
var277 = NEW_nitc__MAttributeDef(&type_nitc__MAttributeDef);
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AAttrPropdef> */
var280 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <self:AAttrPropdef> */
if (unlikely(var280 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 24);
fatal_exit(1);
}
var278 = var280;
RET_LABEL279:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var277->class->vft[COLOR_nitc__model__MPropDef__mclassdef_61d]))(var277, var_mclassdef); /* mclassdef= on <var277:MAttributeDef>*/
}
{
((void(*)(val* self, val* p0))(var277->class->vft[COLOR_nitc__model__MPropDef__mproperty_61d]))(var277, var_mlazyprop); /* mproperty= on <var277:MAttributeDef>*/
}
{
((void(*)(val* self, val* p0))(var277->class->vft[COLOR_nitc__model__MPropDef__location_61d]))(var277, var278); /* location= on <var277:MAttributeDef>*/
}
{
((void(*)(val* self))(var277->class->vft[COLOR_core__kernel__Object__init]))(var277); /* init on <var277:MAttributeDef>*/
}
var_mlazypropdef = var277;
{
{ /* Inline model_base#MEntity#is_fictive= (var_mlazypropdef,1) on <var_mlazypropdef:MAttributeDef> */
var_mlazypropdef->attrs[COLOR_nitc__model_base__MEntity___is_fictive].s = 1; /* _is_fictive on <var_mlazypropdef:MAttributeDef> */
RET_LABEL281:(void)0;
}
}
{
{ /* Inline modelize_property#AAttrPropdef#mlazypropdef= (self,var_mlazypropdef) on <self:AAttrPropdef> */
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mlazypropdef].val = var_mlazypropdef; /* _mlazypropdef on <self:AAttrPropdef> */
RET_LABEL282:(void)0;
}
}
} else {
}
if (likely(varonce283!=NULL)) {
var284 = varonce283;
} else {
var285 = "readonly";
var286 = core__flat___NativeString___to_s_full(var285, 8l, 8l);
var284 = var286;
varonce283 = var284;
}
{
var287 = nitc__annotation___Prod___get_single_annotation(self, var284, var_modelbuilder);
}
var_atreadonly = var287;
if (var_atreadonly == NULL) {
var288 = 0; /* is null */
} else {
var288 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atreadonly,((val*)NULL)) on <var_atreadonly:nullable AAnnotation> */
var_other116 = ((val*)NULL);
{
var291 = ((short int(*)(val* self, val* p0))(var_atreadonly->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atreadonly, var_other116); /* == on <var_atreadonly:nullable AAnnotation(AAnnotation)>*/
}
var292 = !var291;
var289 = var292;
goto RET_LABEL290;
RET_LABEL290:(void)0;
}
var288 = var289;
}
if (var288){
{
{ /* Inline modelize_property#AAttrPropdef#has_value (self) on <self:AAttrPropdef> */
var295 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <self:AAttrPropdef> */
var293 = var295;
RET_LABEL294:(void)0;
}
}
var296 = !var293;
if (var296){
if (likely(varonce297!=NULL)) {
var298 = varonce297;
} else {
var299 = "Error: `readonly` attributes need a value.";
var300 = core__flat___NativeString___to_s_full(var299, 42l, 42l);
var298 = var300;
varonce297 = var298;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_atreadonly, var298); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
goto RET_LABEL;
} else {
}
{
var303 = nitc___nitc__MClassDef___is_intro(var_mclassdef);
}
var304 = !var303;
var_305 = var304;
if (var304){
{
{ /* Inline modelize_property#AAttrPropdef#has_value (self) on <self:AAttrPropdef> */
var308 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <self:AAttrPropdef> */
var306 = var308;
RET_LABEL307:(void)0;
}
}
var309 = !var306;
var302 = var309;
} else {
var302 = var_305;
}
var_310 = var302;
if (var302){
{
{ /* Inline modelize_property#AAttrPropdef#noinit (self) on <self:AAttrPropdef> */
var313 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___noinit].s; /* _noinit on <self:AAttrPropdef> */
var311 = var313;
RET_LABEL312:(void)0;
}
}
var314 = !var311;
var301 = var314;
} else {
var301 = var_310;
}
if (var301){
if (likely(varonce315!=NULL)) {
var316 = varonce315;
} else {
var317 = "attr-in-refinement";
var318 = core__flat___NativeString___to_s_full(var317, 18l, 18l);
var316 = var318;
varonce315 = var316;
}
if (likely(varonce319!=NULL)) {
var320 = varonce319;
} else {
var321 = "Warning: attributes in refinement need a value or `noautoinit`.";
var322 = core__flat___NativeString___to_s_full(var321, 63l, 63l);
var320 = var322;
varonce319 = var320;
}
{
nitc___nitc__ModelBuilder___advice(var_modelbuilder, self, var316, var320); /* Direct call modelbuilder_base#ModelBuilder#advice on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
if (likely(varonce323!=NULL)) {
var324 = varonce323;
} else {
var325 = "=";
var326 = core__flat___NativeString___to_s_full(var325, 1l, 1l);
var324 = var326;
varonce323 = var324;
}
{
var327 = ((val*(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__abstract_text__String___43d]))(var_name, var324); /* + on <var_name:String>*/
}
var_writename = var327;
if (likely(varonce328!=NULL)) {
var329 = varonce328;
} else {
var330 = "writable";
var331 = core__flat___NativeString___to_s_full(var330, 8l, 8l);
var329 = var331;
varonce328 = var329;
}
{
var332 = nitc__annotation___Prod___get_single_annotation(self, var329, var_modelbuilder);
}
var_atwritable = var332;
if (var_atwritable == NULL) {
var333 = 0; /* is null */
} else {
var333 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atwritable,((val*)NULL)) on <var_atwritable:nullable AAnnotation> */
var_other116 = ((val*)NULL);
{
var336 = ((short int(*)(val* self, val* p0))(var_atwritable->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atwritable, var_other116); /* == on <var_atwritable:nullable AAnnotation(AAnnotation)>*/
}
var337 = !var336;
var334 = var337;
goto RET_LABEL335;
RET_LABEL335:(void)0;
}
var333 = var334;
}
if (var333){
{
{ /* Inline parser_nodes#AAnnotation#n_args (var_atwritable) on <var_atwritable:nullable AAnnotation(AAnnotation)> */
var340 = var_atwritable->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_args].val; /* _n_args on <var_atwritable:nullable AAnnotation(AAnnotation)> */
if (unlikely(var340 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2926);
fatal_exit(1);
}
var338 = var340;
RET_LABEL339:(void)0;
}
}
{
var341 = nitc___nitc__ANodes___core__abstract_collection__Collection__is_empty(var338);
}
var342 = !var341;
if (var342){
{
var344 = nitc__annotation___AAnnotation___arg_as_id(var_atwritable, var_modelbuilder);
}
if (var344!=NULL) {
var343 = var344;
} else {
var343 = var_writename;
}
var_writename = var343;
} else {
}
} else {
}
{
var345 = nitc___nitc__ModelBuilder___try_get_mproperty_by_name(var_modelbuilder, var_nid2, var_mclassdef, var_writename);
}
/* <var345:nullable MProperty> isa nullable MMethod */
cltype347 = type_nullable__nitc__MMethod.color;
idtype348 = type_nullable__nitc__MMethod.id;
if(var345 == NULL) {
var346 = 1;
} else {
if(cltype347 >= var345->type->table_size) {
var346 = 0;
} else {
var346 = var345->type->type_table[cltype347] == idtype348;
}
}
if (unlikely(!var346)) {
var_class_name349 = var345 == NULL ? "null" : var345->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MMethod", var_class_name349);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1278);
fatal_exit(1);
}
var_mwriteprop = var345;
var_nwkwredef = ((val*)NULL);
if (var_atwritable == NULL) {
var350 = 0; /* is null */
} else {
var350 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atwritable,((val*)NULL)) on <var_atwritable:nullable AAnnotation> */
var_other116 = ((val*)NULL);
{
var353 = ((short int(*)(val* self, val* p0))(var_atwritable->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atwritable, var_other116); /* == on <var_atwritable:nullable AAnnotation(AAnnotation)>*/
}
var354 = !var353;
var351 = var354;
goto RET_LABEL352;
RET_LABEL352:(void)0;
}
var350 = var351;
}
if (var350){
{
{ /* Inline parser_nodes#ADefinition#n_kwredef (var_atwritable) on <var_atwritable:nullable AAnnotation(AAnnotation)> */
var357 = var_atwritable->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <var_atwritable:nullable AAnnotation(AAnnotation)> */
var355 = var357;
RET_LABEL356:(void)0;
}
}
var_nwkwredef = var355;
} else {
}
if (var_mwriteprop == NULL) {
var358 = 1; /* is null */
} else {
var358 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mwriteprop,((val*)NULL)) on <var_mwriteprop:nullable MMethod> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mwriteprop,var_other) on <var_mwriteprop:nullable MMethod(MMethod)> */
var363 = var_mwriteprop == var_other;
var361 = var363;
goto RET_LABEL362;
RET_LABEL362:(void)0;
}
}
var359 = var361;
goto RET_LABEL360;
RET_LABEL360:(void)0;
}
var358 = var359;
}
if (var358){
if (var_atwritable == NULL) {
var364 = 0; /* is null */
} else {
var364 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atwritable,((val*)NULL)) on <var_atwritable:nullable AAnnotation> */
var_other116 = ((val*)NULL);
{
var367 = ((short int(*)(val* self, val* p0))(var_atwritable->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atwritable, var_other116); /* == on <var_atwritable:nullable AAnnotation(AAnnotation)>*/
}
var368 = !var367;
var365 = var368;
goto RET_LABEL366;
RET_LABEL366:(void)0;
}
var364 = var365;
}
if (var364){
{
{ /* Inline parser_nodes#ADefinition#n_visibility (var_atwritable) on <var_atwritable:nullable AAnnotation(AAnnotation)> */
var371 = var_atwritable->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <var_atwritable:nullable AAnnotation(AAnnotation)> */
var369 = var371;
RET_LABEL370:(void)0;
}
}
{
var372 = nitc__modelize_property___APropdef___new_property_visibility(self, var_modelbuilder, var_mclassdef, var369);
}
var_mvisibility373 = var372;
} else {
{
{ /* Inline model#MProperty#visibility (var_mreadprop) on <var_mreadprop:nullable MMethod(MMethod)> */
var376 = var_mreadprop->attrs[COLOR_nitc__model__MProperty___visibility].val; /* _visibility on <var_mreadprop:nullable MMethod(MMethod)> */
if (unlikely(var376 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1967);
fatal_exit(1);
}
var374 = var376;
RET_LABEL375:(void)0;
}
}
var_mvisibility373 = var374;
var377 = glob_sys;
{
var378 = nitc__model_base___core__Sys___protected_visibility(var377);
}
{
var379 = core___core__Comparable____62d(var_mvisibility373, var378);
}
if (var379){
var380 = glob_sys;
{
var381 = nitc__model_base___core__Sys___protected_visibility(var380);
}
var_mvisibility373 = var381;
} else {
}
}
var382 = NEW_nitc__MMethod(&type_nitc__MMethod);
{
((void(*)(val* self, val* p0))(var382->class->vft[COLOR_nitc__model__MProperty__intro_mclassdef_61d]))(var382, var_mclassdef); /* intro_mclassdef= on <var382:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var382->class->vft[COLOR_nitc__model__MProperty__name_61d]))(var382, var_writename); /* name= on <var382:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var382->class->vft[COLOR_nitc__model__MProperty__visibility_61d]))(var382, var_mvisibility373); /* visibility= on <var382:MMethod>*/
}
{
((void(*)(val* self))(var382->class->vft[COLOR_core__kernel__Object__init]))(var382); /* init on <var382:MMethod>*/
}
var_mwriteprop = var382;
{
var383 = nitc__modelize_property___APropdef___check_redef_keyword(self, var_modelbuilder, var_mclassdef, var_nwkwredef, 0, var_mwriteprop);
}
var384 = !var383;
if (var384){
goto RET_LABEL;
} else {
}
{
{ /* Inline mdoc#MEntity#deprecation (var_mreadprop) on <var_mreadprop:nullable MMethod(MMethod)> */
var387 = var_mreadprop->attrs[COLOR_nitc__mdoc__MEntity___deprecation].val; /* _deprecation on <var_mreadprop:nullable MMethod(MMethod)> */
var385 = var387;
RET_LABEL386:(void)0;
}
}
{
{ /* Inline mdoc#MEntity#deprecation= (var_mwriteprop,var385) on <var_mwriteprop:nullable MMethod(MMethod)> */
var_mwriteprop->attrs[COLOR_nitc__mdoc__MEntity___deprecation].val = var385; /* _deprecation on <var_mwriteprop:nullable MMethod(MMethod)> */
RET_LABEL388:(void)0;
}
}
} else {
if (var_nwkwredef!=NULL) {
var389 = var_nwkwredef;
} else {
{
{ /* Inline parser_nodes#ADefinition#n_kwredef (self) on <self:AAttrPropdef> */
var392 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AAttrPropdef> */
var390 = var392;
RET_LABEL391:(void)0;
}
}
var389 = var390;
}
{
var393 = nitc__modelize_property___APropdef___check_redef_keyword(self, var_modelbuilder, var_mclassdef, var389, 1, var_mwriteprop);
}
var394 = !var393;
if (var394){
goto RET_LABEL;
} else {
}
if (var_atwritable == NULL) {
var395 = 0; /* is null */
} else {
var395 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atwritable,((val*)NULL)) on <var_atwritable:nullable AAnnotation> */
var_other116 = ((val*)NULL);
{
var398 = ((short int(*)(val* self, val* p0))(var_atwritable->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atwritable, var_other116); /* == on <var_atwritable:nullable AAnnotation(AAnnotation)>*/
}
var399 = !var398;
var396 = var399;
goto RET_LABEL397;
RET_LABEL397:(void)0;
}
var395 = var396;
}
if (var395){
{
{ /* Inline parser_nodes#ADefinition#n_visibility (var_atwritable) on <var_atwritable:nullable AAnnotation(AAnnotation)> */
var402 = var_atwritable->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <var_atwritable:nullable AAnnotation(AAnnotation)> */
var400 = var402;
RET_LABEL401:(void)0;
}
}
{
nitc__modelize_property___APropdef___check_redef_property_visibility(self, var_modelbuilder, var400, var_mwriteprop); /* Direct call modelize_property#APropdef#check_redef_property_visibility on <self:AAttrPropdef>*/
}
} else {
}
}
{
{ /* Inline modelize_property#MClassDef#mprop2npropdef (var_mclassdef) on <var_mclassdef:MClassDef> */
var405 = var_mclassdef->attrs[COLOR_nitc__modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <var_mclassdef:MClassDef> */
if (unlikely(var405 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 506);
fatal_exit(1);
}
var403 = var405;
RET_LABEL404:(void)0;
}
}
{
((void(*)(val* self, val* p0, val* p1))((((long)var403&3)?class_info[((long)var403&3)]:var403->class)->vft[COLOR_core__abstract_collection__Map___91d_93d_61d]))(var403, var_mwriteprop, self); /* []= on <var403:Map[MProperty, APropdef]>*/
}
var406 = NEW_nitc__MMethodDef(&type_nitc__MMethodDef);
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AAttrPropdef> */
var409 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <self:AAttrPropdef> */
if (unlikely(var409 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 24);
fatal_exit(1);
}
var407 = var409;
RET_LABEL408:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var406->class->vft[COLOR_nitc__model__MPropDef__mclassdef_61d]))(var406, var_mclassdef); /* mclassdef= on <var406:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var406->class->vft[COLOR_nitc__model__MPropDef__mproperty_61d]))(var406, var_mwriteprop); /* mproperty= on <var406:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var406->class->vft[COLOR_nitc__model__MPropDef__location_61d]))(var406, var407); /* location= on <var406:MMethodDef>*/
}
{
((void(*)(val* self))(var406->class->vft[COLOR_core__kernel__Object__init]))(var406); /* init on <var406:MMethodDef>*/
}
var_mwritepropdef = var406;
{
{ /* Inline modelize_property#AAttrPropdef#mwritepropdef= (self,var_mwritepropdef) on <self:AAttrPropdef> */
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mwritepropdef].val = var_mwritepropdef; /* _mwritepropdef on <self:AAttrPropdef> */
RET_LABEL410:(void)0;
}
}
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var413 = var_modelbuilder->attrs[COLOR_nitc__modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var413 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 40);
fatal_exit(1);
}
var411 = var413;
RET_LABEL412:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var411, var_mwritepropdef, self); /* Direct call hash_collection#HashMap#[]= on <var411:HashMap[MPropDef, APropdef]>*/
}
{
{ /* Inline mdoc#MEntity#mdoc (var_mreadpropdef) on <var_mreadpropdef:MMethodDef> */
var416 = var_mreadpropdef->attrs[COLOR_nitc__mdoc__MEntity___mdoc].val; /* _mdoc on <var_mreadpropdef:MMethodDef> */
var414 = var416;
RET_LABEL415:(void)0;
}
}
{
{ /* Inline mdoc#MEntity#mdoc= (var_mwritepropdef,var414) on <var_mwritepropdef:MMethodDef> */
var_mwritepropdef->attrs[COLOR_nitc__mdoc__MEntity___mdoc].val = var414; /* _mdoc on <var_mwritepropdef:MMethodDef> */
RET_LABEL417:(void)0;
}
}
if (var_atabstract == NULL) {
var418 = 0; /* is null */
} else {
var418 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atabstract,((val*)NULL)) on <var_atabstract:nullable AAnnotation> */
var_other116 = ((val*)NULL);
{
var421 = ((short int(*)(val* self, val* p0))(var_atabstract->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atabstract, var_other116); /* == on <var_atabstract:nullable AAnnotation(AAnnotation)>*/
}
var422 = !var421;
var419 = var422;
goto RET_LABEL420;
RET_LABEL420:(void)0;
}
var418 = var419;
}
if (var418){
{
{ /* Inline model#MMethodDef#is_abstract= (var_mwritepropdef,1) on <var_mwritepropdef:MMethodDef> */
var_mwritepropdef->attrs[COLOR_nitc__model__MMethodDef___is_abstract].s = 1; /* _is_abstract on <var_mwritepropdef:MMethodDef> */
RET_LABEL423:(void)0;
}
}
} else {
}
if (likely(varonce424!=NULL)) {
var425 = varonce424;
} else {
var426 = "autoinit";
var427 = core__flat___NativeString___to_s_full(var426, 8l, 8l);
var425 = var427;
varonce424 = var425;
}
{
var428 = nitc__annotation___Prod___get_single_annotation(self, var425, var_modelbuilder);
}
var_atautoinit = var428;
if (var_atautoinit == NULL) {
var429 = 0; /* is null */
} else {
var429 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atautoinit,((val*)NULL)) on <var_atautoinit:nullable AAnnotation> */
var_other116 = ((val*)NULL);
{
var432 = ((short int(*)(val* self, val* p0))(var_atautoinit->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atautoinit, var_other116); /* == on <var_atautoinit:nullable AAnnotation(AAnnotation)>*/
}
var433 = !var432;
var430 = var433;
goto RET_LABEL431;
RET_LABEL431:(void)0;
}
var429 = var430;
}
if (var429){
{
{ /* Inline modelize_property#AAttrPropdef#has_value (self) on <self:AAttrPropdef> */
var436 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <self:AAttrPropdef> */
var434 = var436;
RET_LABEL435:(void)0;
}
}
if (var434){
if (likely(varonce437!=NULL)) {
var438 = varonce437;
} else {
var439 = "Error: `autoinit` attributes cannot have an initial value.";
var440 = core__flat___NativeString___to_s_full(var439, 58l, 58l);
var438 = var440;
varonce437 = var438;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_atautoinit, var438); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
{
var441 = nitc___nitc__MPropDef___is_intro(var_mwritepropdef);
}
var442 = !var441;
if (var442){
if (likely(varonce443!=NULL)) {
var444 = varonce443;
} else {
var445 = "Error: `autoinit` attributes cannot be set on redefinitions.";
var446 = core__flat___NativeString___to_s_full(var445, 60l, 60l);
var444 = var446;
varonce443 = var444;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_atautoinit, var444); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
{
var447 = nitc___nitc__MClassDef___is_intro(var_mclassdef);
}
var448 = !var447;
if (var448){
if (likely(varonce449!=NULL)) {
var450 = varonce449;
} else {
var451 = "Error: `autoinit` attributes cannot be used in class refinements.";
var452 = core__flat___NativeString___to_s_full(var451, 65l, 65l);
var450 = var452;
varonce449 = var450;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_atautoinit, var450); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
if (var_atabstract == NULL) {
var453 = 1; /* is null */
} else {
var453 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_atabstract,((val*)NULL)) on <var_atabstract:nullable AAnnotation> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_atabstract,var_other) on <var_atabstract:nullable AAnnotation(AAnnotation)> */
var458 = var_atabstract == var_other;
var456 = var458;
goto RET_LABEL457;
RET_LABEL457:(void)0;
}
}
var454 = var456;
goto RET_LABEL455;
RET_LABEL455:(void)0;
}
var453 = var454;
}
if (var453){
if (likely(varonce459!=NULL)) {
var460 = varonce459;
} else {
var461 = "useless-autoinit";
var462 = core__flat___NativeString___to_s_full(var461, 16l, 16l);
var460 = var462;
varonce459 = var460;
}
if (likely(varonce463!=NULL)) {
var464 = varonce463;
} else {
var465 = "Warning: superfluous `autoinit` on attribute.";
var466 = core__flat___NativeString___to_s_full(var465, 45l, 45l);
var464 = var466;
varonce463 = var464;
}
{
nitc___nitc__ModelBuilder___warning(var_modelbuilder, var_atautoinit, var460, var464); /* Direct call modelbuilder_base#ModelBuilder#warning on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
}
}
}
} else {
if (var_atabstract == NULL) {
var467 = 0; /* is null */
} else {
var467 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atabstract,((val*)NULL)) on <var_atabstract:nullable AAnnotation> */
var_other116 = ((val*)NULL);
{
var470 = ((short int(*)(val* self, val* p0))(var_atabstract->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atabstract, var_other116); /* == on <var_atabstract:nullable AAnnotation(AAnnotation)>*/
}
var471 = !var470;
var468 = var471;
goto RET_LABEL469;
RET_LABEL469:(void)0;
}
var467 = var468;
}
if (var467){
{
{ /* Inline modelize_property#AAttrPropdef#noinit= (self,1) on <self:AAttrPropdef> */
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___noinit].s = 1; /* _noinit on <self:AAttrPropdef> */
RET_LABEL472:(void)0;
}
}
} else {
}
}
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#build_signature for (self: AAttrPropdef, ModelBuilder) */
void nitc__modelize_property___AAttrPropdef___APropdef__build_signature(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var /* : nullable MMethodDef */;
val* var2 /* : nullable MMethodDef */;
val* var_mreadpropdef /* var mreadpropdef: nullable MMethodDef */;
val* var3 /* : nullable MPropDef */;
val* var5 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MAttributeDef */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : MClassDef */;
val* var14 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var15 /* : MModule */;
val* var17 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mtype /* var mtype: nullable MType */;
val* var18 /* : nullable AType */;
val* var20 /* : nullable AType */;
val* var_ntype /* var ntype: nullable AType */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var_other24 /* var other: nullable Object */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : nullable MType */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
val* var_inherited_type /* var inherited_type: nullable MType */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
val* var36 /* : MProperty */;
val* var38 /* : MProperty */;
val* var39 /* : MPropDef */;
val* var41 /* : MPropDef */;
val* var42 /* : nullable MSignature */;
val* var44 /* : nullable MSignature */;
val* var_msignature /* var msignature: nullable MSignature */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
val* var51 /* : nullable MType */;
val* var53 /* : nullable MType */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
val* var59 /* : MClass */;
val* var61 /* : MClass */;
val* var62 /* : MClassType */;
val* var64 /* : MClassType */;
val* var65 /* : MClassType */;
val* var67 /* : MClassType */;
val* var68 /* : MType */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
short int var72 /* : Bool */;
short int var74 /* : Bool */;
val* var75 /* : nullable AExpr */;
val* var77 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
short int var81 /* : Bool */;
short int var83 /* : Bool */;
short int var84 /* : Bool */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
short int var88 /* : Bool */;
short int var89 /* : Bool */;
int cltype;
int idtype;
val* var90 /* : AType */;
val* var92 /* : AType */;
val* var93 /* : nullable MType */;
short int var94 /* : Bool */;
int cltype95;
int idtype96;
val* var97 /* : AType */;
val* var99 /* : AType */;
val* var100 /* : nullable MType */;
short int var101 /* : Bool */;
int cltype102;
int idtype103;
val* var_cla /* var cla: nullable MClass */;
val* var104 /* : nullable Numeric */;
val* var106 /* : nullable Numeric */;
short int var107 /* : Bool */;
int cltype108;
int idtype109;
static val* varonce;
val* var110 /* : String */;
char* var111 /* : NativeString */;
val* var112 /* : String */;
val* var113 /* : nullable MClass */;
val* var114 /* : nullable Numeric */;
val* var116 /* : nullable Numeric */;
short int var117 /* : Bool */;
int cltype118;
int idtype119;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : NativeString */;
val* var123 /* : String */;
val* var124 /* : nullable MClass */;
val* var125 /* : nullable Numeric */;
val* var127 /* : nullable Numeric */;
short int var128 /* : Bool */;
int cltype129;
int idtype130;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : NativeString */;
val* var134 /* : String */;
val* var135 /* : nullable MClass */;
val* var136 /* : nullable Numeric */;
val* var138 /* : nullable Numeric */;
short int var139 /* : Bool */;
int cltype140;
int idtype141;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : NativeString */;
val* var145 /* : String */;
val* var146 /* : nullable MClass */;
val* var147 /* : nullable Numeric */;
val* var149 /* : nullable Numeric */;
short int var150 /* : Bool */;
int cltype151;
int idtype152;
static val* varonce153;
val* var154 /* : String */;
char* var155 /* : NativeString */;
val* var156 /* : String */;
val* var157 /* : nullable MClass */;
val* var158 /* : nullable Numeric */;
val* var160 /* : nullable Numeric */;
short int var161 /* : Bool */;
int cltype162;
int idtype163;
static val* varonce164;
val* var165 /* : String */;
char* var166 /* : NativeString */;
val* var167 /* : String */;
val* var168 /* : nullable MClass */;
val* var169 /* : nullable Numeric */;
val* var171 /* : nullable Numeric */;
short int var172 /* : Bool */;
int cltype173;
int idtype174;
static val* varonce175;
val* var176 /* : String */;
char* var177 /* : NativeString */;
val* var178 /* : String */;
val* var179 /* : nullable MClass */;
short int var180 /* : Bool */;
short int var181 /* : Bool */;
short int var183 /* : Bool */;
short int var184 /* : Bool */;
val* var185 /* : MClassType */;
val* var187 /* : MClassType */;
short int var188 /* : Bool */;
int cltype189;
int idtype190;
static val* varonce191;
val* var192 /* : String */;
char* var193 /* : NativeString */;
val* var194 /* : String */;
val* var195 /* : nullable MClass */;
val* var_cla196 /* var cla: nullable MClass */;
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
val* var211 /* : String */;
val* var212 /* : nullable MClass */;
val* var_cla213 /* var cla: nullable MClass */;
short int var214 /* : Bool */;
short int var215 /* : Bool */;
short int var217 /* : Bool */;
short int var218 /* : Bool */;
val* var219 /* : MClassType */;
val* var221 /* : MClassType */;
short int var222 /* : Bool */;
int cltype223;
int idtype224;
static val* varonce225;
val* var226 /* : String */;
char* var227 /* : NativeString */;
val* var228 /* : String */;
val* var229 /* : nullable MClass */;
val* var_cla230 /* var cla: nullable MClass */;
short int var231 /* : Bool */;
short int var232 /* : Bool */;
short int var234 /* : Bool */;
short int var235 /* : Bool */;
val* var236 /* : MClassType */;
val* var238 /* : MClassType */;
short int var239 /* : Bool */;
int cltype240;
int idtype241;
static val* varonce242;
val* var243 /* : String */;
char* var244 /* : NativeString */;
val* var245 /* : String */;
val* var246 /* : nullable MClass */;
val* var_cla247 /* var cla: nullable MClass */;
short int var248 /* : Bool */;
short int var249 /* : Bool */;
short int var251 /* : Bool */;
short int var252 /* : Bool */;
val* var253 /* : MClassType */;
val* var255 /* : MClassType */;
short int var256 /* : Bool */;
int cltype257;
int idtype258;
static val* varonce259;
val* var260 /* : String */;
char* var261 /* : NativeString */;
val* var262 /* : String */;
val* var263 /* : nullable MClass */;
val* var_cla264 /* var cla: nullable MClass */;
short int var265 /* : Bool */;
short int var266 /* : Bool */;
short int var268 /* : Bool */;
short int var269 /* : Bool */;
val* var270 /* : MClassType */;
val* var272 /* : MClassType */;
val* var274 /* : NativeArray[String] */;
static val* varonce273;
static val* varonce275;
val* var276 /* : String */;
char* var277 /* : NativeString */;
val* var278 /* : String */;
static val* varonce279;
val* var280 /* : String */;
char* var281 /* : NativeString */;
val* var282 /* : String */;
val* var283 /* : String */;
val* var284 /* : String */;
short int var285 /* : Bool */;
short int var286 /* : Bool */;
short int var288 /* : Bool */;
short int var290 /* : Bool */;
short int var291 /* : Bool */;
short int var292 /* : Bool */;
short int var293 /* : Bool */;
short int var295 /* : Bool */;
short int var296 /* : Bool */;
short int var_ /* var : Bool */;
short int var297 /* : Bool */;
short int var298 /* : Bool */;
short int var300 /* : Bool */;
short int var302 /* : Bool */;
short int var303 /* : Bool */;
int cltype304;
int idtype305;
val* var306 /* : AType */;
val* var308 /* : AType */;
val* var309 /* : nullable MType */;
val* var_xmtype /* var xmtype: nullable MType */;
short int var310 /* : Bool */;
short int var311 /* : Bool */;
short int var313 /* : Bool */;
short int var315 /* : Bool */;
static val* varonce316;
val* var317 /* : String */;
char* var318 /* : NativeString */;
val* var319 /* : String */;
static val* varonce320;
val* var321 /* : String */;
char* var322 /* : NativeString */;
val* var323 /* : String */;
short int var324 /* : Bool */;
short int var325 /* : Bool */;
short int var327 /* : Bool */;
short int var329 /* : Bool */;
val* var331 /* : NativeArray[String] */;
static val* varonce330;
static val* varonce332;
val* var333 /* : String */;
char* var334 /* : NativeString */;
val* var335 /* : String */;
static val* varonce336;
val* var337 /* : String */;
char* var338 /* : NativeString */;
val* var339 /* : String */;
val* var340 /* : String */;
val* var341 /* : String */;
short int var343 /* : Bool */;
short int var344 /* : Bool */;
short int var346 /* : Bool */;
short int var347 /* : Bool */;
val* var349 /* : MSignature */;
val* var350 /* : Array[MParameter] */;
val* var_msignature351 /* var msignature: MSignature */;
val* var353 /* : nullable MMethodDef */;
val* var355 /* : nullable MMethodDef */;
val* var_mwritepropdef /* var mwritepropdef: nullable MMethodDef */;
short int var356 /* : Bool */;
short int var357 /* : Bool */;
short int var359 /* : Bool */;
short int var360 /* : Bool */;
val* var361 /* : TId */;
val* var363 /* : TId */;
val* var364 /* : String */;
val* var_name /* var name: String */;
val* var365 /* : MParameter */;
val* var_mparameter /* var mparameter: MParameter */;
val* var366 /* : MSignature */;
val* var367 /* : Array[MParameter] */;
val* var_368 /* var : Array[MParameter] */;
val* var_msignature369 /* var msignature: MSignature */;
val* var371 /* : nullable MAttributeDef */;
val* var373 /* : nullable MAttributeDef */;
val* var_mlazypropdef /* var mlazypropdef: nullable MAttributeDef */;
short int var374 /* : Bool */;
short int var375 /* : Bool */;
short int var377 /* : Bool */;
short int var378 /* : Bool */;
val* var379 /* : Model */;
val* var381 /* : Model */;
static val* varonce382;
val* var383 /* : String */;
char* var384 /* : NativeString */;
val* var385 /* : String */;
val* var386 /* : nullable Array[MClass] */;
val* var387 /* : nullable Object */;
val* var388 /* : MClassType */;
val* var390 /* : MClassType */;
var_modelbuilder = p0;
{
{ /* Inline modelize_property#AAttrPropdef#mreadpropdef (self) on <self:AAttrPropdef> */
var2 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mreadpropdef].val; /* _mreadpropdef on <self:AAttrPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mreadpropdef = var;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var5 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_mpropdef = var3;
if (var_mreadpropdef == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mreadpropdef,((val*)NULL)) on <var_mreadpropdef:nullable MMethodDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mreadpropdef,var_other) on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var11 = var_mreadpropdef == var_other;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (var6){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MPropDef#mclassdef (var_mreadpropdef) on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var14 = var_mreadpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2227);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_mclassdef = var12;
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var17 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 573);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_mmodule = var15;
var_mtype = ((val*)NULL);
{
{ /* Inline parser_nodes#AAttrPropdef#n_type (self) on <self:AAttrPropdef> */
var20 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_type].val; /* _n_type on <self:AAttrPropdef> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
var_ntype = var18;
if (var_ntype == NULL) {
var21 = 0; /* is null */
} else {
var21 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ntype,((val*)NULL)) on <var_ntype:nullable AType> */
var_other24 = ((val*)NULL);
{
var25 = ((short int(*)(val* self, val* p0))(var_ntype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ntype, var_other24); /* == on <var_ntype:nullable AType(AType)>*/
}
var26 = !var25;
var22 = var26;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
var21 = var22;
}
if (var21){
{
var27 = nitc___nitc__ModelBuilder___resolve_mtype_unchecked(var_modelbuilder, var_mmodule, var_mclassdef, var_ntype, 1);
}
var_mtype = var27;
if (var_mtype == NULL) {
var28 = 1; /* is null */
} else {
var28 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var33 = var_mtype == var_other;
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
var28 = var29;
}
if (var28){
goto RET_LABEL;
} else {
}
} else {
}
var_inherited_type = ((val*)NULL);
{
var34 = nitc___nitc__MPropDef___is_intro(var_mreadpropdef);
}
var35 = !var34;
if (var35){
{
{ /* Inline model#MPropDef#mproperty (var_mreadpropdef) on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var38 = var_mreadpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var36) on <var36:MProperty(MMethod)> */
var41 = var36->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var36:MProperty(MMethod)> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1986);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var39) on <var39:MPropDef(MMethodDef)> */
var44 = var39->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var39:MPropDef(MMethodDef)> */
var42 = var44;
RET_LABEL43:(void)0;
}
}
var_msignature = var42;
if (var_msignature == NULL) {
var45 = 1; /* is null */
} else {
var45 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_msignature,((val*)NULL)) on <var_msignature:nullable MSignature> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_msignature,var_other) on <var_msignature:nullable MSignature(MSignature)> */
var50 = var_msignature == var_other;
var48 = var50;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
var46 = var48;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
var45 = var46;
}
if (var45){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var53 = var_msignature->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:nullable MSignature(MSignature)> */
var51 = var53;
RET_LABEL52:(void)0;
}
}
var_inherited_type = var51;
if (var_inherited_type == NULL) {
var54 = 0; /* is null */
} else {
var54 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_inherited_type,((val*)NULL)) on <var_inherited_type:nullable MType> */
var_other24 = ((val*)NULL);
{
var57 = ((short int(*)(val* self, val* p0))(var_inherited_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_inherited_type, var_other24); /* == on <var_inherited_type:nullable MType(MType)>*/
}
var58 = !var57;
var55 = var58;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
var54 = var55;
}
if (var54){
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var61 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 576);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var59) on <var59:MClass> */
var64 = var59->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var59:MClass> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 507);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var67 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var67 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 579);
fatal_exit(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
var68 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_inherited_type->class->vft[COLOR_nitc__model__MType__resolve_for]))(var_inherited_type, var62, var65, var_mmodule, 0); /* resolve_for on <var_inherited_type:nullable MType(MType)>*/
}
var_inherited_type = var68;
if (var_mtype == NULL) {
var69 = 1; /* is null */
} else {
var69 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var74 = var_mtype == var_other;
var72 = var74;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
}
var70 = var72;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
var69 = var70;
}
if (var69){
var_mtype = var_inherited_type;
} else {
}
} else {
}
} else {
}
{
{ /* Inline parser_nodes#AAttrPropdef#n_expr (self) on <self:AAttrPropdef> */
var77 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <self:AAttrPropdef> */
var75 = var77;
RET_LABEL76:(void)0;
}
}
var_nexpr = var75;
if (var_mtype == NULL) {
var78 = 1; /* is null */
} else {
var78 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var83 = var_mtype == var_other;
var81 = var83;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
}
var79 = var81;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
var78 = var79;
}
if (var78){
if (var_nexpr == NULL) {
var84 = 0; /* is null */
} else {
var84 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nexpr,((val*)NULL)) on <var_nexpr:nullable AExpr> */
var_other24 = ((val*)NULL);
{
var87 = ((short int(*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nexpr, var_other24); /* == on <var_nexpr:nullable AExpr(AExpr)>*/
}
var88 = !var87;
var85 = var88;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
var84 = var85;
}
if (var84){
/* <var_nexpr:nullable AExpr(AExpr)> isa ANewExpr */
cltype = type_nitc__ANewExpr.color;
idtype = type_nitc__ANewExpr.id;
if(cltype >= var_nexpr->type->table_size) {
var89 = 0;
} else {
var89 = var_nexpr->type->type_table[cltype] == idtype;
}
if (var89){
{
{ /* Inline parser_nodes#ANewExpr#n_type (var_nexpr) on <var_nexpr:nullable AExpr(ANewExpr)> */
var92 = var_nexpr->attrs[COLOR_nitc__parser_nodes__ANewExpr___n_type].val; /* _n_type on <var_nexpr:nullable AExpr(ANewExpr)> */
if (unlikely(var92 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2259);
fatal_exit(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
{
var93 = nitc___nitc__ModelBuilder___resolve_mtype_unchecked(var_modelbuilder, var_mmodule, var_mclassdef, var90, 1);
}
var_mtype = var93;
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa AAsCastExpr */
cltype95 = type_nitc__AAsCastExpr.color;
idtype96 = type_nitc__AAsCastExpr.id;
if(cltype95 >= var_nexpr->type->table_size) {
var94 = 0;
} else {
var94 = var_nexpr->type->type_table[cltype95] == idtype96;
}
if (var94){
{
{ /* Inline parser_nodes#AAsCastExpr#n_type (var_nexpr) on <var_nexpr:nullable AExpr(AAsCastExpr)> */
var99 = var_nexpr->attrs[COLOR_nitc__parser_nodes__AAsCastExpr___n_type].val; /* _n_type on <var_nexpr:nullable AExpr(AAsCastExpr)> */
if (unlikely(var99 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2603);
fatal_exit(1);
}
var97 = var99;
RET_LABEL98:(void)0;
}
}
{
var100 = nitc___nitc__ModelBuilder___resolve_mtype_unchecked(var_modelbuilder, var_mmodule, var_mclassdef, var97, 1);
}
var_mtype = var100;
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa AIntegerExpr */
cltype102 = type_nitc__AIntegerExpr.color;
idtype103 = type_nitc__AIntegerExpr.id;
if(cltype102 >= var_nexpr->type->table_size) {
var101 = 0;
} else {
var101 = var_nexpr->type->type_table[cltype102] == idtype103;
}
if (var101){
var_cla = ((val*)NULL);
{
{ /* Inline literal#AIntegerExpr#value (var_nexpr) on <var_nexpr:nullable AExpr(AIntegerExpr)> */
var106 = var_nexpr->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <var_nexpr:nullable AExpr(AIntegerExpr)> */
var104 = var106;
RET_LABEL105:(void)0;
}
}
/* <var104:nullable Numeric> isa Int */
cltype108 = type_core__Int.color;
idtype109 = type_core__Int.id;
if(var104 == NULL) {
var107 = 0;
} else {
if(cltype108 >= (((long)var104&3)?type_info[((long)var104&3)]:var104->type)->table_size) {
var107 = 0;
} else {
var107 = (((long)var104&3)?type_info[((long)var104&3)]:var104->type)->type_table[cltype108] == idtype109;
}
}
if (var107){
if (likely(varonce!=NULL)) {
var110 = varonce;
} else {
var111 = "Int";
var112 = core__flat___NativeString___to_s_full(var111, 3l, 3l);
var110 = var112;
varonce = var110;
}
{
var113 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var110);
}
var_cla = var113;
} else {
{
{ /* Inline literal#AIntegerExpr#value (var_nexpr) on <var_nexpr:nullable AExpr(AIntegerExpr)> */
var116 = var_nexpr->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <var_nexpr:nullable AExpr(AIntegerExpr)> */
var114 = var116;
RET_LABEL115:(void)0;
}
}
/* <var114:nullable Numeric> isa Byte */
cltype118 = type_core__Byte.color;
idtype119 = type_core__Byte.id;
if(var114 == NULL) {
var117 = 0;
} else {
if(cltype118 >= (((long)var114&3)?type_info[((long)var114&3)]:var114->type)->table_size) {
var117 = 0;
} else {
var117 = (((long)var114&3)?type_info[((long)var114&3)]:var114->type)->type_table[cltype118] == idtype119;
}
}
if (var117){
if (likely(varonce120!=NULL)) {
var121 = varonce120;
} else {
var122 = "Byte";
var123 = core__flat___NativeString___to_s_full(var122, 4l, 4l);
var121 = var123;
varonce120 = var121;
}
{
var124 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var121);
}
var_cla = var124;
} else {
{
{ /* Inline literal#AIntegerExpr#value (var_nexpr) on <var_nexpr:nullable AExpr(AIntegerExpr)> */
var127 = var_nexpr->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <var_nexpr:nullable AExpr(AIntegerExpr)> */
var125 = var127;
RET_LABEL126:(void)0;
}
}
/* <var125:nullable Numeric> isa Int8 */
cltype129 = type_core__Int8.color;
idtype130 = type_core__Int8.id;
if(var125 == NULL) {
var128 = 0;
} else {
if(cltype129 >= (((long)var125&3)?type_info[((long)var125&3)]:var125->type)->table_size) {
var128 = 0;
} else {
var128 = (((long)var125&3)?type_info[((long)var125&3)]:var125->type)->type_table[cltype129] == idtype130;
}
}
if (var128){
if (likely(varonce131!=NULL)) {
var132 = varonce131;
} else {
var133 = "Int8";
var134 = core__flat___NativeString___to_s_full(var133, 4l, 4l);
var132 = var134;
varonce131 = var132;
}
{
var135 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var132);
}
var_cla = var135;
} else {
{
{ /* Inline literal#AIntegerExpr#value (var_nexpr) on <var_nexpr:nullable AExpr(AIntegerExpr)> */
var138 = var_nexpr->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <var_nexpr:nullable AExpr(AIntegerExpr)> */
var136 = var138;
RET_LABEL137:(void)0;
}
}
/* <var136:nullable Numeric> isa Int16 */
cltype140 = type_core__Int16.color;
idtype141 = type_core__Int16.id;
if(var136 == NULL) {
var139 = 0;
} else {
if(cltype140 >= (((long)var136&3)?type_info[((long)var136&3)]:var136->type)->table_size) {
var139 = 0;
} else {
var139 = (((long)var136&3)?type_info[((long)var136&3)]:var136->type)->type_table[cltype140] == idtype141;
}
}
if (var139){
if (likely(varonce142!=NULL)) {
var143 = varonce142;
} else {
var144 = "Int16";
var145 = core__flat___NativeString___to_s_full(var144, 5l, 5l);
var143 = var145;
varonce142 = var143;
}
{
var146 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var143);
}
var_cla = var146;
} else {
{
{ /* Inline literal#AIntegerExpr#value (var_nexpr) on <var_nexpr:nullable AExpr(AIntegerExpr)> */
var149 = var_nexpr->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <var_nexpr:nullable AExpr(AIntegerExpr)> */
var147 = var149;
RET_LABEL148:(void)0;
}
}
/* <var147:nullable Numeric> isa UInt16 */
cltype151 = type_core__UInt16.color;
idtype152 = type_core__UInt16.id;
if(var147 == NULL) {
var150 = 0;
} else {
if(cltype151 >= (((long)var147&3)?type_info[((long)var147&3)]:var147->type)->table_size) {
var150 = 0;
} else {
var150 = (((long)var147&3)?type_info[((long)var147&3)]:var147->type)->type_table[cltype151] == idtype152;
}
}
if (var150){
if (likely(varonce153!=NULL)) {
var154 = varonce153;
} else {
var155 = "UInt16";
var156 = core__flat___NativeString___to_s_full(var155, 6l, 6l);
var154 = var156;
varonce153 = var154;
}
{
var157 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var154);
}
var_cla = var157;
} else {
{
{ /* Inline literal#AIntegerExpr#value (var_nexpr) on <var_nexpr:nullable AExpr(AIntegerExpr)> */
var160 = var_nexpr->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <var_nexpr:nullable AExpr(AIntegerExpr)> */
var158 = var160;
RET_LABEL159:(void)0;
}
}
/* <var158:nullable Numeric> isa Int32 */
cltype162 = type_core__Int32.color;
idtype163 = type_core__Int32.id;
if(var158 == NULL) {
var161 = 0;
} else {
if(cltype162 >= (((long)var158&3)?type_info[((long)var158&3)]:var158->type)->table_size) {
var161 = 0;
} else {
var161 = (((long)var158&3)?type_info[((long)var158&3)]:var158->type)->type_table[cltype162] == idtype163;
}
}
if (var161){
if (likely(varonce164!=NULL)) {
var165 = varonce164;
} else {
var166 = "Int32";
var167 = core__flat___NativeString___to_s_full(var166, 5l, 5l);
var165 = var167;
varonce164 = var165;
}
{
var168 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var165);
}
var_cla = var168;
} else {
{
{ /* Inline literal#AIntegerExpr#value (var_nexpr) on <var_nexpr:nullable AExpr(AIntegerExpr)> */
var171 = var_nexpr->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <var_nexpr:nullable AExpr(AIntegerExpr)> */
var169 = var171;
RET_LABEL170:(void)0;
}
}
/* <var169:nullable Numeric> isa UInt32 */
cltype173 = type_core__UInt32.color;
idtype174 = type_core__UInt32.id;
if(var169 == NULL) {
var172 = 0;
} else {
if(cltype173 >= (((long)var169&3)?type_info[((long)var169&3)]:var169->type)->table_size) {
var172 = 0;
} else {
var172 = (((long)var169&3)?type_info[((long)var169&3)]:var169->type)->type_table[cltype173] == idtype174;
}
}
if (var172){
if (likely(varonce175!=NULL)) {
var176 = varonce175;
} else {
var177 = "UInt32";
var178 = core__flat___NativeString___to_s_full(var177, 6l, 6l);
var176 = var178;
varonce175 = var176;
}
{
var179 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var176);
}
var_cla = var179;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1378);
fatal_exit(1);
}
}
}
}
}
}
}
if (var_cla == NULL) {
var180 = 0; /* is null */
} else {
var180 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_cla,((val*)NULL)) on <var_cla:nullable MClass> */
var_other24 = ((val*)NULL);
{
var183 = ((short int(*)(val* self, val* p0))(var_cla->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cla, var_other24); /* == on <var_cla:nullable MClass(MClass)>*/
}
var184 = !var183;
var181 = var184;
goto RET_LABEL182;
RET_LABEL182:(void)0;
}
var180 = var181;
}
if (var180){
{
{ /* Inline model#MClass#mclass_type (var_cla) on <var_cla:nullable MClass(MClass)> */
var187 = var_cla->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_cla:nullable MClass(MClass)> */
if (unlikely(var187 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 507);
fatal_exit(1);
}
var185 = var187;
RET_LABEL186:(void)0;
}
}
var_mtype = var185;
} else {
}
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa AFloatExpr */
cltype189 = type_nitc__AFloatExpr.color;
idtype190 = type_nitc__AFloatExpr.id;
if(cltype189 >= var_nexpr->type->table_size) {
var188 = 0;
} else {
var188 = var_nexpr->type->type_table[cltype189] == idtype190;
}
if (var188){
if (likely(varonce191!=NULL)) {
var192 = varonce191;
} else {
var193 = "Float";
var194 = core__flat___NativeString___to_s_full(var193, 5l, 5l);
var192 = var194;
varonce191 = var192;
}
{
var195 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var192);
}
var_cla196 = var195;
if (var_cla196 == NULL) {
var197 = 0; /* is null */
} else {
var197 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_cla196,((val*)NULL)) on <var_cla196:nullable MClass> */
var_other24 = ((val*)NULL);
{
var200 = ((short int(*)(val* self, val* p0))(var_cla196->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cla196, var_other24); /* == on <var_cla196:nullable MClass(MClass)>*/
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
{ /* Inline model#MClass#mclass_type (var_cla196) on <var_cla196:nullable MClass(MClass)> */
var204 = var_cla196->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_cla196:nullable MClass(MClass)> */
if (unlikely(var204 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 507);
fatal_exit(1);
}
var202 = var204;
RET_LABEL203:(void)0;
}
}
var_mtype = var202;
} else {
}
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa ACharExpr */
cltype206 = type_nitc__ACharExpr.color;
idtype207 = type_nitc__ACharExpr.id;
if(cltype206 >= var_nexpr->type->table_size) {
var205 = 0;
} else {
var205 = var_nexpr->type->type_table[cltype206] == idtype207;
}
if (var205){
if (likely(varonce208!=NULL)) {
var209 = varonce208;
} else {
var210 = "Char";
var211 = core__flat___NativeString___to_s_full(var210, 4l, 4l);
var209 = var211;
varonce208 = var209;
}
{
var212 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var209);
}
var_cla213 = var212;
if (var_cla213 == NULL) {
var214 = 0; /* is null */
} else {
var214 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_cla213,((val*)NULL)) on <var_cla213:nullable MClass> */
var_other24 = ((val*)NULL);
{
var217 = ((short int(*)(val* self, val* p0))(var_cla213->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cla213, var_other24); /* == on <var_cla213:nullable MClass(MClass)>*/
}
var218 = !var217;
var215 = var218;
goto RET_LABEL216;
RET_LABEL216:(void)0;
}
var214 = var215;
}
if (var214){
{
{ /* Inline model#MClass#mclass_type (var_cla213) on <var_cla213:nullable MClass(MClass)> */
var221 = var_cla213->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_cla213:nullable MClass(MClass)> */
if (unlikely(var221 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 507);
fatal_exit(1);
}
var219 = var221;
RET_LABEL220:(void)0;
}
}
var_mtype = var219;
} else {
}
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa ABoolExpr */
cltype223 = type_nitc__ABoolExpr.color;
idtype224 = type_nitc__ABoolExpr.id;
if(cltype223 >= var_nexpr->type->table_size) {
var222 = 0;
} else {
var222 = var_nexpr->type->type_table[cltype223] == idtype224;
}
if (var222){
if (likely(varonce225!=NULL)) {
var226 = varonce225;
} else {
var227 = "Bool";
var228 = core__flat___NativeString___to_s_full(var227, 4l, 4l);
var226 = var228;
varonce225 = var226;
}
{
var229 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var226);
}
var_cla230 = var229;
if (var_cla230 == NULL) {
var231 = 0; /* is null */
} else {
var231 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_cla230,((val*)NULL)) on <var_cla230:nullable MClass> */
var_other24 = ((val*)NULL);
{
var234 = ((short int(*)(val* self, val* p0))(var_cla230->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cla230, var_other24); /* == on <var_cla230:nullable MClass(MClass)>*/
}
var235 = !var234;
var232 = var235;
goto RET_LABEL233;
RET_LABEL233:(void)0;
}
var231 = var232;
}
if (var231){
{
{ /* Inline model#MClass#mclass_type (var_cla230) on <var_cla230:nullable MClass(MClass)> */
var238 = var_cla230->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_cla230:nullable MClass(MClass)> */
if (unlikely(var238 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 507);
fatal_exit(1);
}
var236 = var238;
RET_LABEL237:(void)0;
}
}
var_mtype = var236;
} else {
}
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa ASuperstringExpr */
cltype240 = type_nitc__ASuperstringExpr.color;
idtype241 = type_nitc__ASuperstringExpr.id;
if(cltype240 >= var_nexpr->type->table_size) {
var239 = 0;
} else {
var239 = var_nexpr->type->type_table[cltype240] == idtype241;
}
if (var239){
if (likely(varonce242!=NULL)) {
var243 = varonce242;
} else {
var244 = "String";
var245 = core__flat___NativeString___to_s_full(var244, 6l, 6l);
var243 = var245;
varonce242 = var243;
}
{
var246 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var243);
}
var_cla247 = var246;
if (var_cla247 == NULL) {
var248 = 0; /* is null */
} else {
var248 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_cla247,((val*)NULL)) on <var_cla247:nullable MClass> */
var_other24 = ((val*)NULL);
{
var251 = ((short int(*)(val* self, val* p0))(var_cla247->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cla247, var_other24); /* == on <var_cla247:nullable MClass(MClass)>*/
}
var252 = !var251;
var249 = var252;
goto RET_LABEL250;
RET_LABEL250:(void)0;
}
var248 = var249;
}
if (var248){
{
{ /* Inline model#MClass#mclass_type (var_cla247) on <var_cla247:nullable MClass(MClass)> */
var255 = var_cla247->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_cla247:nullable MClass(MClass)> */
if (unlikely(var255 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 507);
fatal_exit(1);
}
var253 = var255;
RET_LABEL254:(void)0;
}
}
var_mtype = var253;
} else {
}
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa AStringFormExpr */
cltype257 = type_nitc__AStringFormExpr.color;
idtype258 = type_nitc__AStringFormExpr.id;
if(cltype257 >= var_nexpr->type->table_size) {
var256 = 0;
} else {
var256 = var_nexpr->type->type_table[cltype257] == idtype258;
}
if (var256){
if (likely(varonce259!=NULL)) {
var260 = varonce259;
} else {
var261 = "String";
var262 = core__flat___NativeString___to_s_full(var261, 6l, 6l);
var260 = var262;
varonce259 = var260;
}
{
var263 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var260);
}
var_cla264 = var263;
if (var_cla264 == NULL) {
var265 = 0; /* is null */
} else {
var265 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_cla264,((val*)NULL)) on <var_cla264:nullable MClass> */
var_other24 = ((val*)NULL);
{
var268 = ((short int(*)(val* self, val* p0))(var_cla264->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cla264, var_other24); /* == on <var_cla264:nullable MClass(MClass)>*/
}
var269 = !var268;
var266 = var269;
goto RET_LABEL267;
RET_LABEL267:(void)0;
}
var265 = var266;
}
if (var265){
{
{ /* Inline model#MClass#mclass_type (var_cla264) on <var_cla264:nullable MClass(MClass)> */
var272 = var_cla264->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_cla264:nullable MClass(MClass)> */
if (unlikely(var272 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 507);
fatal_exit(1);
}
var270 = var272;
RET_LABEL271:(void)0;
}
}
var_mtype = var270;
} else {
}
} else {
if (unlikely(varonce273==NULL)) {
var274 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce275!=NULL)) {
var276 = varonce275;
} else {
var277 = "Error: untyped attribute `";
var278 = core__flat___NativeString___to_s_full(var277, 26l, 26l);
var276 = var278;
varonce275 = var276;
}
((struct instance_core__NativeArray*)var274)->values[0]=var276;
if (likely(varonce279!=NULL)) {
var280 = varonce279;
} else {
var281 = "`. Implicit typing allowed only for literals and new.";
var282 = core__flat___NativeString___to_s_full(var281, 53l, 53l);
var280 = var282;
varonce279 = var280;
}
((struct instance_core__NativeArray*)var274)->values[2]=var280;
} else {
var274 = varonce273;
varonce273 = NULL;
}
{
var283 = ((val*(*)(val* self))(var_mreadpropdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mreadpropdef); /* to_s on <var_mreadpropdef:nullable MMethodDef(MMethodDef)>*/
}
((struct instance_core__NativeArray*)var274)->values[1]=var283;
{
var284 = ((val*(*)(val* self))(var274->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var274); /* native_to_s on <var274:NativeArray[String]>*/
}
varonce273 = var274;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, self, var284); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
}
}
}
}
}
}
}
}
if (var_mtype == NULL) {
var285 = 1; /* is null */
} else {
var285 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var290 = var_mtype == var_other;
var288 = var290;
goto RET_LABEL289;
RET_LABEL289:(void)0;
}
}
var286 = var288;
goto RET_LABEL287;
RET_LABEL287:(void)0;
}
var285 = var286;
}
if (var285){
goto RET_LABEL;
} else {
}
} else {
}
} else {
if (var_ntype == NULL) {
var292 = 0; /* is null */
} else {
var292 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ntype,((val*)NULL)) on <var_ntype:nullable AType> */
var_other24 = ((val*)NULL);
{
var295 = ((short int(*)(val* self, val* p0))(var_ntype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ntype, var_other24); /* == on <var_ntype:nullable AType(AType)>*/
}
var296 = !var295;
var293 = var296;
goto RET_LABEL294;
RET_LABEL294:(void)0;
}
var292 = var293;
}
var_ = var292;
if (var292){
if (var_inherited_type == NULL) {
var297 = 0; /* <var_mtype:nullable MType(MType)> cannot be null */
} else {
{ /* Inline kernel#Object#== (var_inherited_type,var_mtype) on <var_inherited_type:nullable MType> */
var_other = var_mtype;
{
{ /* Inline kernel#Object#is_same_instance (var_inherited_type,var_other) on <var_inherited_type:nullable MType(MType)> */
var302 = var_inherited_type == var_other;
var300 = var302;
goto RET_LABEL301;
RET_LABEL301:(void)0;
}
}
var298 = var300;
goto RET_LABEL299;
RET_LABEL299:(void)0;
}
var297 = var298;
}
var291 = var297;
} else {
var291 = var_;
}
if (var291){
/* <var_nexpr:nullable AExpr> isa ANewExpr */
cltype304 = type_nitc__ANewExpr.color;
idtype305 = type_nitc__ANewExpr.id;
if(var_nexpr == NULL) {
var303 = 0;
} else {
if(cltype304 >= var_nexpr->type->table_size) {
var303 = 0;
} else {
var303 = var_nexpr->type->type_table[cltype304] == idtype305;
}
}
if (var303){
{
{ /* Inline parser_nodes#ANewExpr#n_type (var_nexpr) on <var_nexpr:nullable AExpr(ANewExpr)> */
var308 = var_nexpr->attrs[COLOR_nitc__parser_nodes__ANewExpr___n_type].val; /* _n_type on <var_nexpr:nullable AExpr(ANewExpr)> */
if (unlikely(var308 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2259);
fatal_exit(1);
}
var306 = var308;
RET_LABEL307:(void)0;
}
}
{
var309 = nitc___nitc__ModelBuilder___resolve_mtype_unchecked(var_modelbuilder, var_mmodule, var_mclassdef, var306, 1);
}
var_xmtype = var309;
if (var_xmtype == NULL) {
var310 = 0; /* <var_mtype:nullable MType(MType)> cannot be null */
} else {
{ /* Inline kernel#Object#== (var_xmtype,var_mtype) on <var_xmtype:nullable MType> */
var_other = var_mtype;
{
{ /* Inline kernel#Object#is_same_instance (var_xmtype,var_other) on <var_xmtype:nullable MType(MType)> */
var315 = var_xmtype == var_other;
var313 = var315;
goto RET_LABEL314;
RET_LABEL314:(void)0;
}
}
var311 = var313;
goto RET_LABEL312;
RET_LABEL312:(void)0;
}
var310 = var311;
}
if (var310){
if (likely(varonce316!=NULL)) {
var317 = varonce316;
} else {
var318 = "useless-type";
var319 = core__flat___NativeString___to_s_full(var318, 12l, 12l);
var317 = var319;
varonce316 = var317;
}
if (likely(varonce320!=NULL)) {
var321 = varonce320;
} else {
var322 = "Warning: useless type definition";
var323 = core__flat___NativeString___to_s_full(var322, 32l, 32l);
var321 = var323;
varonce320 = var321;
}
{
nitc___nitc__ModelBuilder___advice(var_modelbuilder, var_ntype, var317, var321); /* Direct call modelbuilder_base#ModelBuilder#advice on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
} else {
}
} else {
}
}
if (var_mtype == NULL) {
var324 = 1; /* is null */
} else {
var324 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var329 = var_mtype == var_other;
var327 = var329;
goto RET_LABEL328;
RET_LABEL328:(void)0;
}
}
var325 = var327;
goto RET_LABEL326;
RET_LABEL326:(void)0;
}
var324 = var325;
}
if (var324){
if (unlikely(varonce330==NULL)) {
var331 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce332!=NULL)) {
var333 = varonce332;
} else {
var334 = "Error: untyped attribute `";
var335 = core__flat___NativeString___to_s_full(var334, 26l, 26l);
var333 = var335;
varonce332 = var333;
}
((struct instance_core__NativeArray*)var331)->values[0]=var333;
if (likely(varonce336!=NULL)) {
var337 = varonce336;
} else {
var338 = "`.";
var339 = core__flat___NativeString___to_s_full(var338, 2l, 2l);
var337 = var339;
varonce336 = var337;
}
((struct instance_core__NativeArray*)var331)->values[2]=var337;
} else {
var331 = varonce330;
varonce330 = NULL;
}
{
var340 = ((val*(*)(val* self))(var_mreadpropdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mreadpropdef); /* to_s on <var_mreadpropdef:nullable MMethodDef(MMethodDef)>*/
}
((struct instance_core__NativeArray*)var331)->values[1]=var340;
{
var341 = ((val*(*)(val* self))(var331->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var331); /* native_to_s on <var331:NativeArray[String]>*/
}
varonce330 = var331;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, self, var341); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property#AAttrPropdef#mtype= (self,var_mtype) on <self:AAttrPropdef> */
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mtype].val = var_mtype; /* _mtype on <self:AAttrPropdef> */
RET_LABEL342:(void)0;
}
}
if (var_mpropdef == NULL) {
var343 = 0; /* is null */
} else {
var343 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MAttributeDef> */
var_other24 = ((val*)NULL);
{
var346 = ((short int(*)(val* self, val* p0))(var_mpropdef->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mpropdef, var_other24); /* == on <var_mpropdef:nullable MAttributeDef(MAttributeDef)>*/
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
{ /* Inline model#MAttributeDef#static_mtype= (var_mpropdef,var_mtype) on <var_mpropdef:nullable MAttributeDef(MAttributeDef)> */
var_mpropdef->attrs[COLOR_nitc__model__MAttributeDef___static_mtype].val = var_mtype; /* _static_mtype on <var_mpropdef:nullable MAttributeDef(MAttributeDef)> */
RET_LABEL348:(void)0;
}
}
} else {
}
var349 = NEW_nitc__MSignature(&type_nitc__MSignature);
var350 = NEW_core__Array(&type_core__Array__nitc__MParameter);
{
core___core__Array___core__kernel__Object__init(var350); /* Direct call array#Array#init on <var350:Array[MParameter]>*/
}
{
((void(*)(val* self, val* p0))(var349->class->vft[COLOR_nitc__model__MSignature__mparameters_61d]))(var349, var350); /* mparameters= on <var349:MSignature>*/
}
{
((void(*)(val* self, val* p0))(var349->class->vft[COLOR_nitc__model__MSignature__return_mtype_61d]))(var349, var_mtype); /* return_mtype= on <var349:MSignature>*/
}
{
((void(*)(val* self))(var349->class->vft[COLOR_core__kernel__Object__init]))(var349); /* init on <var349:MSignature>*/
}
var_msignature351 = var349;
{
{ /* Inline model#MMethodDef#msignature= (var_mreadpropdef,var_msignature351) on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var_mreadpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val = var_msignature351; /* _msignature on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL352:(void)0;
}
}
{
{ /* Inline modelize_property#AAttrPropdef#mwritepropdef (self) on <self:AAttrPropdef> */
var355 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mwritepropdef].val; /* _mwritepropdef on <self:AAttrPropdef> */
var353 = var355;
RET_LABEL354:(void)0;
}
}
var_mwritepropdef = var353;
if (var_mwritepropdef == NULL) {
var356 = 0; /* is null */
} else {
var356 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mwritepropdef,((val*)NULL)) on <var_mwritepropdef:nullable MMethodDef> */
var_other24 = ((val*)NULL);
{
var359 = ((short int(*)(val* self, val* p0))(var_mwritepropdef->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mwritepropdef, var_other24); /* == on <var_mwritepropdef:nullable MMethodDef(MMethodDef)>*/
}
var360 = !var359;
var357 = var360;
goto RET_LABEL358;
RET_LABEL358:(void)0;
}
var356 = var357;
}
if (var356){
{
{ /* Inline parser_nodes#AAttrPropdef#n_id2 (self) on <self:AAttrPropdef> */
var363 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_id2].val; /* _n_id2 on <self:AAttrPropdef> */
if (unlikely(var363 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1277);
fatal_exit(1);
}
var361 = var363;
RET_LABEL362:(void)0;
}
}
{
var364 = nitc__lexer_work___Token___text(var361);
}
var_name = var364;
var365 = NEW_nitc__MParameter(&type_nitc__MParameter);
{
((void(*)(val* self, val* p0))(var365->class->vft[COLOR_nitc__model__MParameter__name_61d]))(var365, var_name); /* name= on <var365:MParameter>*/
}
{
((void(*)(val* self, val* p0))(var365->class->vft[COLOR_nitc__model__MParameter__mtype_61d]))(var365, var_mtype); /* mtype= on <var365:MParameter>*/
}
{
((void(*)(val* self, short int p0))(var365->class->vft[COLOR_nitc__model__MParameter__is_vararg_61d]))(var365, 0); /* is_vararg= on <var365:MParameter>*/
}
{
((void(*)(val* self))(var365->class->vft[COLOR_core__kernel__Object__init]))(var365); /* init on <var365:MParameter>*/
}
var_mparameter = var365;
var366 = NEW_nitc__MSignature(&type_nitc__MSignature);
var367 = NEW_core__Array(&type_core__Array__nitc__MParameter);
{
core___core__Array___with_capacity(var367, 1l); /* Direct call array#Array#with_capacity on <var367:Array[MParameter]>*/
}
var_368 = var367;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_368, var_mparameter); /* Direct call array#AbstractArray#push on <var_368:Array[MParameter]>*/
}
{
((void(*)(val* self, val* p0))(var366->class->vft[COLOR_nitc__model__MSignature__mparameters_61d]))(var366, var_368); /* mparameters= on <var366:MSignature>*/
}
{
((void(*)(val* self, val* p0))(var366->class->vft[COLOR_nitc__model__MSignature__return_mtype_61d]))(var366, ((val*)NULL)); /* return_mtype= on <var366:MSignature>*/
}
{
((void(*)(val* self))(var366->class->vft[COLOR_core__kernel__Object__init]))(var366); /* init on <var366:MSignature>*/
}
var_msignature369 = var366;
{
{ /* Inline model#MMethodDef#msignature= (var_mwritepropdef,var_msignature369) on <var_mwritepropdef:nullable MMethodDef(MMethodDef)> */
var_mwritepropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val = var_msignature369; /* _msignature on <var_mwritepropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL370:(void)0;
}
}
} else {
}
{
{ /* Inline modelize_property#AAttrPropdef#mlazypropdef (self) on <self:AAttrPropdef> */
var373 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mlazypropdef].val; /* _mlazypropdef on <self:AAttrPropdef> */
var371 = var373;
RET_LABEL372:(void)0;
}
}
var_mlazypropdef = var371;
if (var_mlazypropdef == NULL) {
var374 = 0; /* is null */
} else {
var374 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mlazypropdef,((val*)NULL)) on <var_mlazypropdef:nullable MAttributeDef> */
var_other24 = ((val*)NULL);
{
var377 = ((short int(*)(val* self, val* p0))(var_mlazypropdef->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mlazypropdef, var_other24); /* == on <var_mlazypropdef:nullable MAttributeDef(MAttributeDef)>*/
}
var378 = !var377;
var375 = var378;
goto RET_LABEL376;
RET_LABEL376:(void)0;
}
var374 = var375;
}
if (var374){
{
{ /* Inline modelbuilder_base#ModelBuilder#model (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var381 = var_modelbuilder->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___model].val; /* _model on <var_modelbuilder:ModelBuilder> */
if (unlikely(var381 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 44);
fatal_exit(1);
}
var379 = var381;
RET_LABEL380:(void)0;
}
}
if (likely(varonce382!=NULL)) {
var383 = varonce382;
} else {
var384 = "Bool";
var385 = core__flat___NativeString___to_s_full(var384, 4l, 4l);
var383 = var385;
varonce382 = var383;
}
{
var386 = nitc__model___Model___get_mclasses_by_name(var379, var383);
}
if (var386 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1438);
fatal_exit(1);
} else {
var387 = core___core__SequenceRead___Collection__first(var386);
}
{
{ /* Inline model#MClass#mclass_type (var387) on <var387:nullable Object(MClass)> */
var390 = var387->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var387:nullable Object(MClass)> */
if (unlikely(var390 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 507);
fatal_exit(1);
}
var388 = var390;
RET_LABEL389:(void)0;
}
}
{
{ /* Inline model#MAttributeDef#static_mtype= (var_mlazypropdef,var388) on <var_mlazypropdef:nullable MAttributeDef(MAttributeDef)> */
var_mlazypropdef->attrs[COLOR_nitc__model__MAttributeDef___static_mtype].val = var388; /* _static_mtype on <var_mlazypropdef:nullable MAttributeDef(MAttributeDef)> */
RET_LABEL391:(void)0;
}
}
} else {
}
{
nitc__modelize_property___AAttrPropdef___APropdef__check_repeated_types(self, var_modelbuilder); /* Direct call modelize_property#AAttrPropdef#check_repeated_types on <self:AAttrPropdef>*/
}
RET_LABEL:;
}
