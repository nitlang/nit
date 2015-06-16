#include "nit__modelize_property.sep.0.h"
/* method modelize_property#AMethPropdef#build_property for (self: AMethPropdef, ModelBuilder, MClassDef) */
void nit__modelize_property___AMethPropdef___APropdef__build_property(val* self, val* p0, val* p1) {
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
val* var30 /* : FlatString */;
val* var_name /* var name: String */;
val* var_name_node /* var name_node: ANode */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
val* var39 /* : FlatString */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
val* var48 /* : FlatString */;
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
val* var66 /* : FlatString */;
short int var67 /* : Bool */;
short int var_68 /* var : Bool */;
short int var69 /* : Bool */;
short int var71 /* : Bool */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
val* var75 /* : FlatString */;
short int var76 /* : Bool */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
val* var80 /* : FlatString */;
short int var81 /* : Bool */;
short int var_82 /* var : Bool */;
short int var83 /* : Bool */;
short int var85 /* : Bool */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
val* var89 /* : FlatString */;
short int var90 /* : Bool */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : NativeString */;
val* var94 /* : FlatString */;
short int var95 /* : Bool */;
short int var_96 /* var : Bool */;
short int var97 /* : Bool */;
short int var99 /* : Bool */;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : NativeString */;
val* var103 /* : FlatString */;
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
val* var119 /* : FlatString */;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : NativeString */;
val* var123 /* : FlatString */;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : NativeString */;
val* var127 /* : FlatString */;
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
val* var145 /* : FlatString */;
static val* varonce146;
val* var147 /* : String */;
char* var148 /* : NativeString */;
val* var149 /* : FlatString */;
static val* varonce150;
val* var151 /* : String */;
char* var152 /* : NativeString */;
val* var153 /* : FlatString */;
static val* varonce154;
val* var155 /* : String */;
char* var156 /* : NativeString */;
val* var157 /* : FlatString */;
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
val* var216 /* : FlatString */;
val* var218 /* : NativeArray[String] */;
static val* varonce217;
static val* varonce219;
val* var220 /* : String */;
char* var221 /* : NativeString */;
val* var222 /* : FlatString */;
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
val* var266 /* : FlatString */;
short int var267 /* : Bool */;
val* var269 /* : nullable TKwredef */;
val* var271 /* : nullable TKwredef */;
short int var272 /* : Bool */;
val* var273 /* : nullable TKwredef */;
val* var275 /* : nullable TKwredef */;
short int var276 /* : Bool */;
int cltype277;
int idtype278;
short int var279 /* : Bool */;
short int var280 /* : Bool */;
short int var281 /* : Bool */;
val* var282 /* : nullable AVisibility */;
val* var284 /* : nullable AVisibility */;
val* var285 /* : Map[MProperty, APropdef] */;
val* var287 /* : Map[MProperty, APropdef] */;
val* var_288 /* var : Map[MProperty, APropdef] */;
val* var289 /* : MapIterator[nullable Object, nullable Object] */;
val* var_290 /* var : MapIterator[MProperty, APropdef] */;
short int var291 /* : Bool */;
val* var292 /* : nullable Object */;
val* var_p /* var p: MProperty */;
val* var293 /* : nullable Object */;
val* var_n /* var n: APropdef */;
short int var294 /* : Bool */;
short int var295 /* : Bool */;
short int var296 /* : Bool */;
short int var298 /* : Bool */;
short int var299 /* : Bool */;
short int var_300 /* var : Bool */;
short int var301 /* : Bool */;
int cltype302;
int idtype303;
short int var_304 /* var : Bool */;
val* var305 /* : String */;
val* var307 /* : String */;
short int var308 /* : Bool */;
val* var309 /* : nullable TKwredef */;
val* var311 /* : nullable TKwredef */;
short int var312 /* : Bool */;
val* var314 /* : Map[MProperty, APropdef] */;
val* var316 /* : Map[MProperty, APropdef] */;
val* var317 /* : MMethodDef */;
val* var318 /* : Location */;
val* var320 /* : Location */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
short int var321 /* : Bool */;
int cltype322;
int idtype323;
const struct type* type_struct;
const char* var_class_name324;
short int var326 /* : Bool */;
int cltype327;
int idtype328;
const struct type* type_struct329;
const char* var_class_name330;
val* var331 /* : HashMap[MPropDef, APropdef] */;
val* var333 /* : HashMap[MPropDef, APropdef] */;
short int var334 /* : Bool */;
val* var335 /* : ToolContext */;
val* var337 /* : ToolContext */;
val* var339 /* : NativeArray[String] */;
static val* varonce338;
static val* varonce340;
val* var341 /* : String */;
char* var342 /* : NativeString */;
val* var343 /* : FlatString */;
val* var344 /* : String */;
val* var345 /* : String */;
val* var346 /* : String */;
val* var347 /* : ToolContext */;
val* var349 /* : ToolContext */;
val* var351 /* : NativeArray[String] */;
static val* varonce350;
static val* varonce352;
val* var353 /* : String */;
char* var354 /* : NativeString */;
val* var355 /* : FlatString */;
val* var356 /* : String */;
val* var357 /* : String */;
val* var358 /* : String */;
var_modelbuilder = p0;
var_mclassdef = p1;
{
{ /* Inline parser_nodes#AMethPropdef#n_kwinit (self) on <self:AMethPropdef> */
var2 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwinit].val; /* _n_kwinit on <self:AMethPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_n_kwinit = var;
{
{ /* Inline parser_nodes#AMethPropdef#n_kwnew (self) on <self:AMethPropdef> */
var5 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwnew].val; /* _n_kwnew on <self:AMethPropdef> */
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
var10 = ((short int(*)(val* self, val* p0))(var_n_kwinit->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_kwinit, var_other); /* == on <var_n_kwinit:nullable TKwinit(TKwinit)>*/
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
var15 = ((short int(*)(val* self, val* p0))(var_n_kwnew->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_kwnew, var_other); /* == on <var_n_kwnew:nullable TKwnew(TKwnew)>*/
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
var19 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
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
var30 = standard___standard__NativeString___to_s_with_length(var29, 4l);
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
var34 = ((short int(*)(val* self, val* p0))(var_n_kwinit->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_kwinit, var_other); /* == on <var_n_kwinit:nullable TKwinit(TKwinit)>*/
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
var39 = standard___standard__NativeString___to_s_with_length(var38, 4l);
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
var43 = ((short int(*)(val* self, val* p0))(var_n_kwnew->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_kwnew, var_other); /* == on <var_n_kwnew:nullable TKwnew(TKwnew)>*/
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
var48 = standard___standard__NativeString___to_s_with_length(var47, 3l);
var46 = var48;
varonce45 = var46;
}
var_name = var46;
var_name_node = var_n_kwnew;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 788);
fatal_exit(1);
}
}
}
} else {
/* <var_amethodid:nullable AMethid(AMethid)> isa AIdMethid */
cltype = type_nit__AIdMethid.color;
idtype = type_nit__AIdMethid.id;
if(cltype >= var_amethodid->type->table_size) {
var49 = 0;
} else {
var49 = var_amethodid->type->type_table[cltype] == idtype;
}
if (var49){
{
{ /* Inline parser_nodes#AIdMethid#n_id (var_amethodid) on <var_amethodid:nullable AMethid(AIdMethid)> */
var52 = var_amethodid->attrs[COLOR_nit__parser_nodes__AIdMethid___n_id].val; /* _n_id on <var_amethodid:nullable AMethid(AIdMethid)> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1544);
fatal_exit(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
var53 = nit__lexer_work___Token___text(var50);
}
var_name = var53;
var_name_node = var_amethodid;
} else {
{
var54 = nit__parser_work___Prod___collect_text(var_amethodid);
}
var_name = var54;
var_name_node = var_amethodid;
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (self) on <self:AMethPropdef> */
var57 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var55 = var57;
RET_LABEL56:(void)0;
}
}
if (var55 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 798);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var55) on <var55:nullable ASignature> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1693);
fatal_exit(1);
}
var60 = var55->attrs[COLOR_nit__parser_nodes__ASignature___n_params].val; /* _n_params on <var55:nullable ASignature> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1693);
fatal_exit(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
var61 = nit___nit__ANodes___standard__abstract_collection__Collection__length(var58);
}
var_arity = var61;
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "+";
var66 = standard___standard__NativeString___to_s_with_length(var65, 1l);
var64 = var66;
varonce63 = var64;
}
{
var67 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_name, var64); /* == on <var_name:String>*/
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
var75 = standard___standard__NativeString___to_s_with_length(var74, 7l);
var73 = var75;
varonce72 = var73;
}
var_name = var73;
} else {
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = "-";
var80 = standard___standard__NativeString___to_s_with_length(var79, 1l);
var78 = var80;
varonce77 = var78;
}
{
var81 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_name, var78); /* == on <var_name:String>*/
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
var89 = standard___standard__NativeString___to_s_with_length(var88, 7l);
var87 = var89;
varonce86 = var87;
}
var_name = var87;
} else {
if (likely(varonce91!=NULL)) {
var92 = varonce91;
} else {
var93 = "~";
var94 = standard___standard__NativeString___to_s_with_length(var93, 1l);
var92 = var94;
varonce91 = var92;
}
{
var95 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_name, var92); /* == on <var_name:String>*/
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
var103 = standard___standard__NativeString___to_s_with_length(var102, 7l);
var101 = var103;
varonce100 = var101;
}
var_name = var101;
} else {
{
var105 = ((short int(*)(val* self))(var_amethodid->class->vft[COLOR_nit__modelize_property__AMethid__is_binary]))(var_amethodid); /* is_binary on <var_amethodid:nullable AMethid(AMethid)>*/
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
var113 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var111 = var113;
RET_LABEL112:(void)0;
}
}
if (unlikely(varonce114==NULL)) {
var115 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce116!=NULL)) {
var117 = varonce116;
} else {
var118 = "Syntax Error: binary operator `";
var119 = standard___standard__NativeString___to_s_with_length(var118, 31l);
var117 = var119;
varonce116 = var117;
}
((struct instance_standard__NativeArray*)var115)->values[0]=var117;
if (likely(varonce120!=NULL)) {
var121 = varonce120;
} else {
var122 = "` requires exactly one parameter; got ";
var123 = standard___standard__NativeString___to_s_with_length(var122, 38l);
var121 = var123;
varonce120 = var121;
}
((struct instance_standard__NativeArray*)var115)->values[2]=var121;
if (likely(varonce124!=NULL)) {
var125 = varonce124;
} else {
var126 = ".";
var127 = standard___standard__NativeString___to_s_with_length(var126, 1l);
var125 = var127;
varonce124 = var125;
}
((struct instance_standard__NativeArray*)var115)->values[4]=var125;
} else {
var115 = varonce114;
varonce114 = NULL;
}
((struct instance_standard__NativeArray*)var115)->values[1]=var_name;
var128 = standard__string___Int___Object__to_s(var_arity);
((struct instance_standard__NativeArray*)var115)->values[3]=var128;
{
var129 = ((val*(*)(val* self))(var115->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var115); /* native_to_s on <var115:NativeArray[String]>*/
}
varonce114 = var115;
{
nit___nit__ModelBuilder___error(var_modelbuilder, var111, var129); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
{
var130 = ((long(*)(val* self))(var_amethodid->class->vft[COLOR_nit__modelize_property__AMethid__min_arity]))(var_amethodid); /* min_arity on <var_amethodid:nullable AMethid(AMethid)>*/
}
{
{ /* Inline kernel#Int#> (var130,var_arity) on <var130:Int> */
/* Covariant cast for argument 0 (i) <var_arity:Int> isa OTHER */
/* <var_arity:Int> isa OTHER */
var133 = 1; /* easy <var_arity:Int> isa OTHER*/
if (unlikely(!var133)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
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
var139 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var137 = var139;
RET_LABEL138:(void)0;
}
}
if (unlikely(varonce140==NULL)) {
var141 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce142!=NULL)) {
var143 = varonce142;
} else {
var144 = "Syntax Error: `";
var145 = standard___standard__NativeString___to_s_with_length(var144, 15l);
var143 = var145;
varonce142 = var143;
}
((struct instance_standard__NativeArray*)var141)->values[0]=var143;
if (likely(varonce146!=NULL)) {
var147 = varonce146;
} else {
var148 = "` requires at least ";
var149 = standard___standard__NativeString___to_s_with_length(var148, 20l);
var147 = var149;
varonce146 = var147;
}
((struct instance_standard__NativeArray*)var141)->values[2]=var147;
if (likely(varonce150!=NULL)) {
var151 = varonce150;
} else {
var152 = " parameter(s); got ";
var153 = standard___standard__NativeString___to_s_with_length(var152, 19l);
var151 = var153;
varonce150 = var151;
}
((struct instance_standard__NativeArray*)var141)->values[4]=var151;
if (likely(varonce154!=NULL)) {
var155 = varonce154;
} else {
var156 = ".";
var157 = standard___standard__NativeString___to_s_with_length(var156, 1l);
var155 = var157;
varonce154 = var155;
}
((struct instance_standard__NativeArray*)var141)->values[6]=var155;
} else {
var141 = varonce140;
varonce140 = NULL;
}
((struct instance_standard__NativeArray*)var141)->values[1]=var_name;
{
var158 = ((long(*)(val* self))(var_amethodid->class->vft[COLOR_nit__modelize_property__AMethid__min_arity]))(var_amethodid); /* min_arity on <var_amethodid:nullable AMethid(AMethid)>*/
}
var159 = standard__string___Int___Object__to_s(var158);
((struct instance_standard__NativeArray*)var141)->values[3]=var159;
var160 = standard__string___Int___Object__to_s(var_arity);
((struct instance_standard__NativeArray*)var141)->values[5]=var160;
{
var161 = ((val*(*)(val* self))(var141->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var141); /* native_to_s on <var141:NativeArray[String]>*/
}
varonce140 = var141;
{
nit___nit__ModelBuilder___error(var_modelbuilder, var137, var161); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
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
var162 = nit__modelize_property___AMethPropdef___look_like_a_root_init(self, var_modelbuilder, var_mclassdef);
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
var168 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AMethPropdef> */
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
var172 = ((short int(*)(val* self, val* p0))(var166->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var166, var_other); /* == on <var166:nullable TKwredef(TKwredef)>*/
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
var174 = nit___nit__ModelBuilder___try_get_mproperty_by_name(var_modelbuilder, var_name_node, var_mclassdef, var_name);
}
/* <var174:nullable MProperty> isa nullable MMethod */
cltype176 = type_nullable__nit__MMethod.color;
idtype177 = type_nullable__nit__MMethod.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 816);
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
var189 = var_modelbuilder->attrs[COLOR_nit__modelize_property__ModelBuilder___the_root_init_mmethod].val; /* _the_root_init_mmethod on <var_modelbuilder:ModelBuilder> */
var187 = var189;
RET_LABEL188:(void)0;
}
}
var_mprop = var187;
{
{ /* Inline parser_nodes#AMethPropdef#n_block (self) on <self:AMethPropdef> */
var192 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:AMethPropdef> */
var190 = var192;
RET_LABEL191:(void)0;
}
}
var_nb = var190;
/* <var_nb:nullable AExpr> isa ABlockExpr */
cltype196 = type_nit__ABlockExpr.color;
idtype197 = type_nit__ABlockExpr.id;
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
var201 = var_nb->attrs[COLOR_nit__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <var_nb:nullable AExpr(ABlockExpr)> */
if (unlikely(var201 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1758);
fatal_exit(1);
}
var199 = var201;
RET_LABEL200:(void)0;
}
}
{
var202 = nit___nit__ANodes___standard__abstract_collection__Collection__is_empty(var199);
}
var194 = var202;
} else {
var194 = var_198;
}
var_203 = var194;
if (var194){
{
{ /* Inline parser_nodes#ADefinition#n_doc (self) on <self:AMethPropdef> */
var206 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:AMethPropdef> */
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
var216 = standard___standard__NativeString___to_s_with_length(var215, 12l);
var214 = var216;
varonce213 = var214;
}
if (unlikely(varonce217==NULL)) {
var218 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce219!=NULL)) {
var220 = varonce219;
} else {
var221 = "Warning: useless empty init in ";
var222 = standard___standard__NativeString___to_s_with_length(var221, 31l);
var220 = var222;
varonce219 = var220;
}
((struct instance_standard__NativeArray*)var218)->values[0]=var220;
} else {
var218 = varonce217;
varonce217 = NULL;
}
{
var223 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:MClassDef>*/
}
((struct instance_standard__NativeArray*)var218)->values[1]=var223;
{
var224 = ((val*(*)(val* self))(var218->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var218); /* native_to_s on <var218:NativeArray[String]>*/
}
varonce217 = var218;
{
nit___nit__ModelBuilder___advice(var_modelbuilder, self, var214, var224); /* Direct call modelbuilder_base#ModelBuilder#advice on <var_modelbuilder:ModelBuilder>*/
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
var233 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AMethPropdef> */
var231 = var233;
RET_LABEL232:(void)0;
}
}
{
var234 = nit__modelize_property___APropdef___new_property_visibility(self, var_modelbuilder, var_mclassdef, var231);
}
var_mvisibility = var234;
var235 = NEW_nit__MMethod(&type_nit__MMethod);
{
((void(*)(val* self, val* p0))(var235->class->vft[COLOR_nit__model__MProperty__intro_mclassdef_61d]))(var235, var_mclassdef); /* intro_mclassdef= on <var235:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var235->class->vft[COLOR_nit__model__MProperty__name_61d]))(var235, var_name); /* name= on <var235:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var235->class->vft[COLOR_nit__model__MProperty__visibility_61d]))(var235, var_mvisibility); /* visibility= on <var235:MMethod>*/
}
{
((void(*)(val* self))(var235->class->vft[COLOR_standard__kernel__Object__init]))(var235); /* init on <var235:MMethod>*/
}
var_mprop = var235;
var_237 = var_look_like_a_root_init;
if (var_look_like_a_root_init){
{
{ /* Inline modelize_property#ModelBuilder#the_root_init_mmethod (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var240 = var_modelbuilder->attrs[COLOR_nit__modelize_property__ModelBuilder___the_root_init_mmethod].val; /* _the_root_init_mmethod on <var_modelbuilder:ModelBuilder> */
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
var_modelbuilder->attrs[COLOR_nit__modelize_property__ModelBuilder___the_root_init_mmethod].val = var_mprop; /* _the_root_init_mmethod on <var_modelbuilder:ModelBuilder> */
RET_LABEL247:(void)0;
}
}
{
{ /* Inline model#MMethod#is_root_init= (var_mprop,1) on <var_mprop:nullable MMethod(MMethod)> */
var_mprop->attrs[COLOR_nit__model__MMethod___is_root_init].s = 1; /* _is_root_init on <var_mprop:nullable MMethod(MMethod)> */
RET_LABEL248:(void)0;
}
}
} else {
}
{
{ /* Inline model#MMethod#is_init= (var_mprop,var_is_init) on <var_mprop:nullable MMethod(MMethod)> */
var_mprop->attrs[COLOR_nit__model__MMethod___is_init].s = var_is_init; /* _is_init on <var_mprop:nullable MMethod(MMethod)> */
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
var253 = ((short int(*)(val* self, val* p0))(var_n_kwnew->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_kwnew, var_other); /* == on <var_n_kwnew:nullable TKwnew(TKwnew)>*/
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
var_mprop->attrs[COLOR_nit__model__MMethod___is_new].s = var250; /* _is_new on <var_mprop:nullable MMethod(MMethod)> */
RET_LABEL255:(void)0;
}
}
{
{ /* Inline model#MMethod#is_new (var_mprop) on <var_mprop:nullable MMethod(MMethod)> */
var258 = var_mprop->attrs[COLOR_nit__model__MMethod___is_new].s; /* _is_new on <var_mprop:nullable MMethod(MMethod)> */
var256 = var258;
RET_LABEL257:(void)0;
}
}
if (var256){
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var261 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var261 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var259 = var261;
RET_LABEL260:(void)0;
}
}
{
{ /* Inline model#MClass#has_new_factory= (var259,1) on <var259:MClass> */
var259->attrs[COLOR_nit__model__MClass___has_new_factory].s = 1; /* _has_new_factory on <var259:MClass> */
RET_LABEL262:(void)0;
}
}
} else {
}
if (likely(varonce263!=NULL)) {
var264 = varonce263;
} else {
var265 = "sys";
var266 = standard___standard__NativeString___to_s_with_length(var265, 3l);
var264 = var266;
varonce263 = var264;
}
{
var267 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_name, var264); /* == on <var_name:String>*/
}
if (var267){
{
{ /* Inline model#MMethod#is_toplevel= (var_mprop,1) on <var_mprop:nullable MMethod(MMethod)> */
var_mprop->attrs[COLOR_nit__model__MMethod___is_toplevel].s = 1; /* _is_toplevel on <var_mprop:nullable MMethod(MMethod)> */
RET_LABEL268:(void)0;
}
}
} else {
}
{
{ /* Inline parser_nodes#ADefinition#n_kwredef (self) on <self:AMethPropdef> */
var271 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AMethPropdef> */
var269 = var271;
RET_LABEL270:(void)0;
}
}
{
var272 = nit__modelize_property___APropdef___check_redef_keyword(self, var_modelbuilder, var_mclassdef, var269, 0, var_mprop);
}
} else {
{
{ /* Inline parser_nodes#ADefinition#n_kwredef (self) on <self:AMethPropdef> */
var275 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AMethPropdef> */
var273 = var275;
RET_LABEL274:(void)0;
}
}
/* <self:AMethPropdef> isa AMainMethPropdef */
cltype277 = type_nit__AMainMethPropdef.color;
idtype278 = type_nit__AMainMethPropdef.id;
if(cltype277 >= self->type->table_size) {
var276 = 0;
} else {
var276 = self->type->type_table[cltype277] == idtype278;
}
var279 = !var276;
{
var280 = nit__modelize_property___APropdef___check_redef_keyword(self, var_modelbuilder, var_mclassdef, var273, var279, var_mprop);
}
var281 = !var280;
if (var281){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ADefinition#n_visibility (self) on <self:AMethPropdef> */
var284 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AMethPropdef> */
var282 = var284;
RET_LABEL283:(void)0;
}
}
{
nit__modelize_property___APropdef___check_redef_property_visibility(self, var_modelbuilder, var282, var_mprop); /* Direct call modelize_property#APropdef#check_redef_property_visibility on <self:AMethPropdef>*/
}
}
if (var_is_init){
{
{ /* Inline modelize_property#MClassDef#mprop2npropdef (var_mclassdef) on <var_mclassdef:MClassDef> */
var287 = var_mclassdef->attrs[COLOR_nit__modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <var_mclassdef:MClassDef> */
if (unlikely(var287 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 505);
fatal_exit(1);
}
var285 = var287;
RET_LABEL286:(void)0;
}
}
var_288 = var285;
{
var289 = ((val*(*)(val* self))((((long)var_288&3)?class_info[((long)var_288&3)]:var_288->class)->vft[COLOR_standard__abstract_collection__MapRead__iterator]))(var_288); /* iterator on <var_288:Map[MProperty, APropdef]>*/
}
var_290 = var289;
for(;;) {
{
var291 = ((short int(*)(val* self))((((long)var_290&3)?class_info[((long)var_290&3)]:var_290->class)->vft[COLOR_standard__abstract_collection__MapIterator__is_ok]))(var_290); /* is_ok on <var_290:MapIterator[MProperty, APropdef]>*/
}
if (var291){
{
var292 = ((val*(*)(val* self))((((long)var_290&3)?class_info[((long)var_290&3)]:var_290->class)->vft[COLOR_standard__abstract_collection__MapIterator__key]))(var_290); /* key on <var_290:MapIterator[MProperty, APropdef]>*/
}
var_p = var292;
{
var293 = ((val*(*)(val* self))((((long)var_290&3)?class_info[((long)var_290&3)]:var_290->class)->vft[COLOR_standard__abstract_collection__MapIterator__item]))(var_290); /* item on <var_290:MapIterator[MProperty, APropdef]>*/
}
var_n = var293;
{
{ /* Inline kernel#Object#!= (var_p,var_mprop) on <var_p:MProperty> */
var_other = var_mprop;
{
var298 = ((short int(*)(val* self, val* p0))(var_p->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_p, var_other); /* == on <var_p:MProperty>*/
}
var299 = !var298;
var296 = var299;
goto RET_LABEL297;
RET_LABEL297:(void)0;
}
}
var_300 = var296;
if (var296){
/* <var_p:MProperty> isa MMethod */
cltype302 = type_nit__MMethod.color;
idtype303 = type_nit__MMethod.id;
if(cltype302 >= var_p->type->table_size) {
var301 = 0;
} else {
var301 = var_p->type->type_table[cltype302] == idtype303;
}
var295 = var301;
} else {
var295 = var_300;
}
var_304 = var295;
if (var295){
{
{ /* Inline model#MProperty#name (var_p) on <var_p:MProperty(MMethod)> */
var307 = var_p->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var_p:MProperty(MMethod)> */
if (unlikely(var307 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1933);
fatal_exit(1);
}
var305 = var307;
RET_LABEL306:(void)0;
}
}
{
var308 = ((short int(*)(val* self, val* p0))(var305->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var305, var_name); /* == on <var305:String>*/
}
var294 = var308;
} else {
var294 = var_304;
}
if (var294){
{
{ /* Inline parser_nodes#ADefinition#n_kwredef (self) on <self:AMethPropdef> */
var311 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AMethPropdef> */
var309 = var311;
RET_LABEL310:(void)0;
}
}
{
var312 = nit__modelize_property___APropdef___check_redef_keyword(self, var_modelbuilder, var_mclassdef, var309, 0, var_p);
}
goto BREAK_label;
} else {
}
{
((void(*)(val* self))((((long)var_290&3)?class_info[((long)var_290&3)]:var_290->class)->vft[COLOR_standard__abstract_collection__MapIterator__next]))(var_290); /* next on <var_290:MapIterator[MProperty, APropdef]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#MapIterator#finish (var_290) on <var_290:MapIterator[MProperty, APropdef]> */
RET_LABEL313:(void)0;
}
}
} else {
}
{
{ /* Inline modelize_property#MClassDef#mprop2npropdef (var_mclassdef) on <var_mclassdef:MClassDef> */
var316 = var_mclassdef->attrs[COLOR_nit__modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <var_mclassdef:MClassDef> */
if (unlikely(var316 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 505);
fatal_exit(1);
}
var314 = var316;
RET_LABEL315:(void)0;
}
}
{
((void(*)(val* self, val* p0, val* p1))((((long)var314&3)?class_info[((long)var314&3)]:var314->class)->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var314, var_mprop, self); /* []= on <var314:Map[MProperty, APropdef]>*/
}
var317 = NEW_nit__MMethodDef(&type_nit__MMethodDef);
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AMethPropdef> */
var320 = self->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <self:AMethPropdef> */
if (unlikely(var320 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var318 = var320;
RET_LABEL319:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var317->class->vft[COLOR_nit__model__MPropDef__mclassdef_61d]))(var317, var_mclassdef); /* mclassdef= on <var317:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var317->class->vft[COLOR_nit__model__MPropDef__mproperty_61d]))(var317, var_mprop); /* mproperty= on <var317:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var317->class->vft[COLOR_nit__model__MPropDef__location_61d]))(var317, var318); /* location= on <var317:MMethodDef>*/
}
{
((void(*)(val* self))(var317->class->vft[COLOR_standard__kernel__Object__init]))(var317); /* init on <var317:MMethodDef>*/
}
var_mpropdef = var317;
{
nit__modelize_property___APropdef___set_doc(self, var_mpropdef, var_modelbuilder); /* Direct call modelize_property#APropdef#set_doc on <self:AMethPropdef>*/
}
/* <var_mpropdef:MMethodDef> isa nullable MPROPDEF */
type_struct = self->type->resolution_table->types[COLOR_nullable__nit__modelize_property__APropdef__MPROPDEF];
cltype322 = type_struct->color;
idtype323 = type_struct->id;
if(cltype322 >= var_mpropdef->type->table_size) {
var321 = 0;
} else {
var321 = var_mpropdef->type->type_table[cltype322] == idtype323;
}
if (unlikely(!var321)) {
var_class_name324 = var_mpropdef == NULL ? "null" : var_mpropdef->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name324);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 857);
fatal_exit(1);
}
{
{ /* Inline modelize_property#APropdef#mpropdef= (self,var_mpropdef) on <self:AMethPropdef> */
/* Covariant cast for argument 0 (mpropdef) <var_mpropdef:MMethodDef> isa nullable MPROPDEF */
/* <var_mpropdef:MMethodDef> isa nullable MPROPDEF */
type_struct329 = self->type->resolution_table->types[COLOR_nullable__nit__modelize_property__APropdef__MPROPDEF];
cltype327 = type_struct329->color;
idtype328 = type_struct329->id;
if(cltype327 >= var_mpropdef->type->table_size) {
var326 = 0;
} else {
var326 = var_mpropdef->type->type_table[cltype327] == idtype328;
}
if (unlikely(!var326)) {
var_class_name330 = var_mpropdef == NULL ? "null" : var_mpropdef->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name330);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 558);
fatal_exit(1);
}
self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val = var_mpropdef; /* _mpropdef on <self:AMethPropdef> */
RET_LABEL325:(void)0;
}
}
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var333 = var_modelbuilder->attrs[COLOR_nit__modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var333 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 40);
fatal_exit(1);
}
var331 = var333;
RET_LABEL332:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var331, var_mpropdef, self); /* Direct call hash_collection#HashMap#[]= on <var331:HashMap[MPropDef, APropdef]>*/
}
{
var334 = nit___nit__MPropDef___is_intro(var_mpropdef);
}
if (var334){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var337 = var_modelbuilder->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var_modelbuilder:ModelBuilder> */
if (unlikely(var337 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var335 = var337;
RET_LABEL336:(void)0;
}
}
if (unlikely(varonce338==NULL)) {
var339 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce340!=NULL)) {
var341 = varonce340;
} else {
var342 = " introduces new method ";
var343 = standard___standard__NativeString___to_s_with_length(var342, 23l);
var341 = var343;
varonce340 = var341;
}
((struct instance_standard__NativeArray*)var339)->values[1]=var341;
} else {
var339 = varonce338;
varonce338 = NULL;
}
{
var344 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:MMethodDef>*/
}
((struct instance_standard__NativeArray*)var339)->values[0]=var344;
{
var345 = nit___nit__MProperty___nit__model_base__MEntity__full_name(var_mprop);
}
((struct instance_standard__NativeArray*)var339)->values[2]=var345;
{
var346 = ((val*(*)(val* self))(var339->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var339); /* native_to_s on <var339:NativeArray[String]>*/
}
varonce338 = var339;
{
nit___nit__ToolContext___info(var335, var346, 4l); /* Direct call toolcontext#ToolContext#info on <var335:ToolContext>*/
}
} else {
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var349 = var_modelbuilder->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var_modelbuilder:ModelBuilder> */
if (unlikely(var349 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var347 = var349;
RET_LABEL348:(void)0;
}
}
if (unlikely(varonce350==NULL)) {
var351 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce352!=NULL)) {
var353 = varonce352;
} else {
var354 = " redefines method ";
var355 = standard___standard__NativeString___to_s_with_length(var354, 18l);
var353 = var355;
varonce352 = var353;
}
((struct instance_standard__NativeArray*)var351)->values[1]=var353;
} else {
var351 = varonce350;
varonce350 = NULL;
}
{
var356 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:MMethodDef>*/
}
((struct instance_standard__NativeArray*)var351)->values[0]=var356;
{
var357 = nit___nit__MProperty___nit__model_base__MEntity__full_name(var_mprop);
}
((struct instance_standard__NativeArray*)var351)->values[2]=var357;
{
var358 = ((val*(*)(val* self))(var351->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var351); /* native_to_s on <var351:NativeArray[String]>*/
}
varonce350 = var351;
{
nit___nit__ToolContext___info(var347, var358, 4l); /* Direct call toolcontext#ToolContext#info on <var347:ToolContext>*/
}
}
RET_LABEL:;
}
/* method modelize_property#AMethPropdef#build_signature for (self: AMethPropdef, ModelBuilder) */
void nit__modelize_property___AMethPropdef___APropdef__build_signature(val* self, val* p0) {
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
val* var150 /* : FlatString */;
static val* varonce151;
val* var152 /* : String */;
char* var153 /* : NativeString */;
val* var154 /* : FlatString */;
static val* varonce155;
val* var156 /* : String */;
char* var157 /* : NativeString */;
val* var158 /* : FlatString */;
static val* varonce159;
val* var160 /* : String */;
char* var161 /* : NativeString */;
val* var162 /* : FlatString */;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : NativeString */;
val* var166 /* : FlatString */;
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
val* var204 /* : ArrayIterator[nullable Object] */;
val* var_205 /* var : ArrayIterator[MClassType] */;
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
val* var276 /* : ArrayIterator[nullable Object] */;
val* var_277 /* var : ArrayIterator[MParameter] */;
short int var278 /* : Bool */;
val* var279 /* : nullable Object */;
val* var_mparameter /* var mparameter: MParameter */;
val* var280 /* : MType */;
val* var282 /* : MType */;
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
val* var325 /* : FlatString */;
static val* varonce326;
val* var327 /* : String */;
char* var328 /* : NativeString */;
val* var329 /* : FlatString */;
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
short int var_is_default /* var is_default: Bool */;
short int var347 /* : Bool */;
long var348 /* : Int */;
long var350 /* : Int */;
short int var351 /* : Bool */;
short int var353 /* : Bool */;
short int var_354 /* var : Bool */;
val* var355 /* : nullable Object */;
short int var356 /* : Bool */;
int cltype357;
int idtype358;
short int var359 /* : Bool */;
long var360 /* : Int */;
long var362 /* : Int */;
long var363 /* : Int */;
short int var365 /* : Bool */;
int cltype366;
int idtype367;
const char* var_class_name368;
long var369 /* : Int */;
short int var370 /* : Bool */;
short int var372 /* : Bool */;
int cltype373;
int idtype374;
const char* var_class_name375;
short int var376 /* : Bool */;
short int var_377 /* var : Bool */;
val* var378 /* : MParameter */;
val* var379 /* : nullable Object */;
val* var380 /* : nullable Object */;
short int var381 /* : Bool */;
short int var383 /* : Bool */;
val* var_mparameter384 /* var mparameter: MParameter */;
short int var385 /* : Bool */;
short int var386 /* : Bool */;
short int var388 /* : Bool */;
short int var389 /* : Bool */;
val* var390 /* : ANodes[AParam] */;
val* var392 /* : ANodes[AParam] */;
val* var393 /* : ANode */;
long var395 /* : Int */;
short int var397 /* : Bool */;
short int var398 /* : Bool */;
short int var399 /* : Bool */;
short int var401 /* : Bool */;
short int var403 /* : Bool */;
short int var_404 /* var : Bool */;
val* var405 /* : MProperty */;
val* var407 /* : MProperty */;
short int var408 /* : Bool */;
short int var410 /* : Bool */;
val* var411 /* : MClass */;
val* var413 /* : MClass */;
val* var414 /* : MClassType */;
val* var416 /* : MClassType */;
short int var417 /* : Bool */;
short int var418 /* : Bool */;
short int var419 /* : Bool */;
short int var_420 /* var : Bool */;
short int var421 /* : Bool */;
short int var_422 /* var : Bool */;
val* var423 /* : nullable Object */;
short int var424 /* : Bool */;
short int var426 /* : Bool */;
val* var427 /* : nullable ASignature */;
val* var429 /* : nullable ASignature */;
val* var430 /* : ANodes[AParam] */;
val* var432 /* : ANodes[AParam] */;
val* var433 /* : nullable Object */;
val* var435 /* : NativeArray[String] */;
static val* varonce434;
static val* varonce436;
val* var437 /* : String */;
char* var438 /* : NativeString */;
val* var439 /* : FlatString */;
static val* varonce440;
val* var441 /* : String */;
char* var442 /* : NativeString */;
val* var443 /* : FlatString */;
static val* varonce444;
val* var445 /* : String */;
char* var446 /* : NativeString */;
val* var447 /* : FlatString */;
val* var448 /* : nullable Object */;
val* var449 /* : String */;
val* var450 /* : MProperty */;
val* var452 /* : MProperty */;
val* var453 /* : String */;
val* var455 /* : String */;
val* var456 /* : String */;
short int var457 /* : Bool */;
short int var458 /* : Bool */;
short int var459 /* : Bool */;
short int var461 /* : Bool */;
short int var463 /* : Bool */;
short int var_464 /* var : Bool */;
val* var465 /* : nullable AMethid */;
val* var467 /* : nullable AMethid */;
val* var469 /* : NativeArray[String] */;
static val* varonce468;
static val* varonce470;
val* var471 /* : String */;
char* var472 /* : NativeString */;
val* var473 /* : FlatString */;
static val* varonce474;
val* var475 /* : String */;
char* var476 /* : NativeString */;
val* var477 /* : FlatString */;
val* var478 /* : MProperty */;
val* var480 /* : MProperty */;
val* var481 /* : String */;
val* var483 /* : String */;
val* var484 /* : String */;
val* var485 /* : MSignature */;
static val* varonce487;
val* var488 /* : String */;
char* var489 /* : NativeString */;
val* var490 /* : FlatString */;
val* var491 /* : nullable AAnnotation */;
short int var492 /* : Bool */;
short int var493 /* : Bool */;
short int var495 /* : Bool */;
short int var496 /* : Bool */;
static val* varonce498;
val* var499 /* : String */;
char* var500 /* : NativeString */;
val* var501 /* : FlatString */;
val* var502 /* : nullable AAnnotation */;
short int var503 /* : Bool */;
short int var504 /* : Bool */;
short int var506 /* : Bool */;
short int var507 /* : Bool */;
short int var509 /* : Bool */;
val* var510 /* : nullable AExternCodeBlock */;
val* var512 /* : nullable AExternCodeBlock */;
short int var513 /* : Bool */;
short int var514 /* : Bool */;
short int var516 /* : Bool */;
short int var517 /* : Bool */;
short int var_518 /* var : Bool */;
static val* varonce519;
val* var520 /* : String */;
char* var521 /* : NativeString */;
val* var522 /* : FlatString */;
val* var523 /* : nullable AAnnotation */;
short int var524 /* : Bool */;
short int var525 /* : Bool */;
short int var527 /* : Bool */;
short int var528 /* : Bool */;
static val* varonce530;
val* var531 /* : String */;
char* var532 /* : NativeString */;
val* var533 /* : FlatString */;
val* var534 /* : nullable AAnnotation */;
val* var_at /* var at: nullable AAnnotation */;
short int var535 /* : Bool */;
short int var536 /* : Bool */;
short int var538 /* : Bool */;
short int var539 /* : Bool */;
static val* varonce540;
val* var541 /* : String */;
char* var542 /* : NativeString */;
val* var543 /* : FlatString */;
static val* varonce544;
val* var545 /* : String */;
char* var546 /* : NativeString */;
val* var547 /* : FlatString */;
val* var548 /* : nullable AAnnotation */;
val* var_atautoinit /* var atautoinit: nullable AAnnotation */;
short int var549 /* : Bool */;
short int var550 /* : Bool */;
short int var552 /* : Bool */;
short int var553 /* : Bool */;
short int var554 /* : Bool */;
short int var555 /* : Bool */;
static val* varonce556;
val* var557 /* : String */;
char* var558 /* : NativeString */;
val* var559 /* : FlatString */;
short int var560 /* : Bool */;
short int var561 /* : Bool */;
static val* varonce562;
val* var563 /* : String */;
char* var564 /* : NativeString */;
val* var565 /* : FlatString */;
var_modelbuilder = p0;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var2 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
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
var11 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_mclassdef = var9;
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var14 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_mmodule = var12;
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (self) on <self:AMethPropdef> */
var17 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_nsig = var15;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var21 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline model#MMethod#is_root_init (var19) on <var19:MProperty(MMethod)> */
var24 = var19->attrs[COLOR_nit__model__MMethod___is_root_init].s; /* _is_root_init on <var19:MProperty(MMethod)> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
var_ = var22;
if (var22){
{
var25 = nit___nit__MClassDef___is_intro(var_mclassdef);
}
var26 = !var25;
var18 = var26;
} else {
var18 = var_;
}
if (var18){
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var29 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline modelize_property#MClass#root_init (var27) on <var27:MClass> */
var32 = var27->attrs[COLOR_nit__modelize_property__MClass___root_init].val; /* _root_init on <var27:MClass> */
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
var37 = ((short int(*)(val* self, val* p0))(var_root_init->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_root_init, var_other36); /* == on <var_root_init:nullable MMethodDef(MMethodDef)>*/
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
var41 = var_root_init->attrs[COLOR_nit__model__MMethodDef___new_msignature].val; /* _new_msignature on <var_root_init:nullable MMethodDef(MMethodDef)> */
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline model#MMethodDef#new_msignature= (var_mpropdef,var39) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nit__model__MMethodDef___new_msignature].val = var39; /* _new_msignature on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL42:(void)0;
}
}
{
{ /* Inline model#MMethodDef#initializers (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var45 = var_mpropdef->attrs[COLOR_nit__model__MMethodDef___initializers].val; /* _initializers on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2345);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
var46 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var43);
}
if (unlikely(!var46)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 879);
fatal_exit(1);
}
{
{ /* Inline model#MMethodDef#initializers (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var49 = var_mpropdef->attrs[COLOR_nit__model__MMethodDef___initializers].val; /* _initializers on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2345);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline model#MMethodDef#initializers (var_root_init) on <var_root_init:nullable MMethodDef(MMethodDef)> */
var52 = var_root_init->attrs[COLOR_nit__model__MMethodDef___initializers].val; /* _initializers on <var_root_init:nullable MMethodDef(MMethodDef)> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2345);
fatal_exit(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add_all(var47, var50); /* Direct call array#Array#add_all on <var47:Array[MProperty]>*/
}
} else {
}
} else {
}
{
{ /* Inline parser_nodes#AMethPropdef#n_methid (self) on <self:AMethPropdef> */
var56 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
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
var66 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
var64 = var66;
RET_LABEL65:(void)0;
}
}
if (var64 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 884);
fatal_exit(1);
} else {
var67 = ((short int(*)(val* self))(var64->class->vft[COLOR_nit__modelize_property__AMethid__accept_special_last_parameter]))(var64); /* accept_special_last_parameter on <var64:nullable AMethid>*/
}
var53 = var67;
}
var_accept_special_last_parameter = var53;
{
{ /* Inline parser_nodes#AMethPropdef#n_methid (self) on <self:AMethPropdef> */
var71 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
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
var75 = ((short int(*)(val* self, val* p0))(var69->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var69, var_other36); /* == on <var69:nullable AMethid(AMethid)>*/
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
var80 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
var78 = var80;
RET_LABEL79:(void)0;
}
}
if (var78 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 885);
fatal_exit(1);
} else {
var81 = ((short int(*)(val* self))(var78->class->vft[COLOR_nit__modelize_property__AMethid__return_is_mandatory]))(var78); /* return_is_mandatory on <var78:nullable AMethid>*/
}
var68 = var81;
} else {
var68 = var_77;
}
var_return_is_mandatory = var68;
var82 = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var82); /* Direct call array#Array#init on <var82:Array[String]>*/
}
var_param_names = var82;
var83 = NEW_standard__Array(&type_standard__Array__nit__MType);
{
standard___standard__Array___standard__kernel__Object__init(var83); /* Direct call array#Array#init on <var83:Array[MType]>*/
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
var90 = ((short int(*)(val* self, val* p0))(var_nsig->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nsig, var_other36); /* == on <var_nsig:nullable ASignature(ASignature)>*/
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
var92 = nit__modelize_property___ASignature___visit_signature(var_nsig, var_modelbuilder, var_mclassdef);
}
var93 = !var92;
if (var93){
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property#ASignature#param_names (var_nsig) on <var_nsig:nullable ASignature(ASignature)> */
var96 = var_nsig->attrs[COLOR_nit__modelize_property__ASignature___param_names].val; /* _param_names on <var_nsig:nullable ASignature(ASignature)> */
if (unlikely(var96 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _param_names");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 660);
fatal_exit(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
var_param_names = var94;
{
{ /* Inline modelize_property#ASignature#param_types (var_nsig) on <var_nsig:nullable ASignature(ASignature)> */
var99 = var_nsig->attrs[COLOR_nit__modelize_property__ASignature___param_types].val; /* _param_types on <var_nsig:nullable ASignature(ASignature)> */
if (unlikely(var99 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _param_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 663);
fatal_exit(1);
}
var97 = var99;
RET_LABEL98:(void)0;
}
}
var_param_types = var97;
{
{ /* Inline modelize_property#ASignature#vararg_rank (var_nsig) on <var_nsig:nullable ASignature(ASignature)> */
var102 = var_nsig->attrs[COLOR_nit__modelize_property__ASignature___vararg_rank].l; /* _vararg_rank on <var_nsig:nullable ASignature(ASignature)> */
var100 = var102;
RET_LABEL101:(void)0;
}
}
var_vararg_rank = var100;
{
{ /* Inline modelize_property#ASignature#ret_type (var_nsig) on <var_nsig:nullable ASignature(ASignature)> */
var105 = var_nsig->attrs[COLOR_nit__modelize_property__ASignature___ret_type].val; /* _ret_type on <var_nsig:nullable ASignature(ASignature)> */
var103 = var105;
RET_LABEL104:(void)0;
}
}
var_ret_type = var103;
} else {
}
var_msignature = ((val*)NULL);
{
var106 = nit___nit__MPropDef___is_intro(var_mpropdef);
}
var107 = !var106;
if (var107){
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var110 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var110 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var108 = var110;
RET_LABEL109:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var108) on <var108:MProperty(MMethod)> */
var113 = var108->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var108:MProperty(MMethod)> */
if (unlikely(var113 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1968);
fatal_exit(1);
}
var111 = var113;
RET_LABEL112:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var111) on <var111:MPropDef(MMethodDef)> */
var116 = var111->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var111:MPropDef(MMethodDef)> */
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
var125 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var125 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var123 = var125;
RET_LABEL124:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var123) on <var123:MClass> */
var128 = var123->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var123:MClass> */
if (unlikely(var128 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 484);
fatal_exit(1);
}
var126 = var128;
RET_LABEL127:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var131 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var131 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var129 = var131;
RET_LABEL130:(void)0;
}
}
{
var132 = nit___nit__MSignature___MType__resolve_for(var_msignature, var126, var129, var_mmodule, 0);
}
var_msignature = var132;
{
{ /* Inline array#AbstractArrayRead#length (var_param_names) on <var_param_names:Array[String]> */
var135 = var_param_names->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_param_names:Array[String]> */
var133 = var135;
RET_LABEL134:(void)0;
}
}
{
var136 = nit___nit__MSignature___arity(var_msignature);
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
var144 = ((short int(*)(val* self, val* p0))(var_nsig->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nsig, var_other36); /* == on <var_nsig:nullable ASignature(ASignature)>*/
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
var146 = NEW_standard__NativeArray(10l, &type_standard__NativeArray__standard__String);
if (likely(varonce147!=NULL)) {
var148 = varonce147;
} else {
var149 = "Redef Error: expected ";
var150 = standard___standard__NativeString___to_s_with_length(var149, 22l);
var148 = var150;
varonce147 = var148;
}
((struct instance_standard__NativeArray*)var146)->values[0]=var148;
if (likely(varonce151!=NULL)) {
var152 = varonce151;
} else {
var153 = " parameter(s) for `";
var154 = standard___standard__NativeString___to_s_with_length(var153, 19l);
var152 = var154;
varonce151 = var152;
}
((struct instance_standard__NativeArray*)var146)->values[2]=var152;
if (likely(varonce155!=NULL)) {
var156 = varonce155;
} else {
var157 = "`; got ";
var158 = standard___standard__NativeString___to_s_with_length(var157, 7l);
var156 = var158;
varonce155 = var156;
}
((struct instance_standard__NativeArray*)var146)->values[5]=var156;
if (likely(varonce159!=NULL)) {
var160 = varonce159;
} else {
var161 = ". See introduction at `";
var162 = standard___standard__NativeString___to_s_with_length(var161, 23l);
var160 = var162;
varonce159 = var160;
}
((struct instance_standard__NativeArray*)var146)->values[7]=var160;
if (likely(varonce163!=NULL)) {
var164 = varonce163;
} else {
var165 = "`.";
var166 = standard___standard__NativeString___to_s_with_length(var165, 2l);
var164 = var166;
varonce163 = var164;
}
((struct instance_standard__NativeArray*)var146)->values[9]=var164;
} else {
var146 = varonce;
varonce = NULL;
}
{
var167 = nit___nit__MSignature___arity(var_msignature);
}
var168 = standard__string___Int___Object__to_s(var167);
((struct instance_standard__NativeArray*)var146)->values[1]=var168;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var171 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var171 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var169 = var171;
RET_LABEL170:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var169) on <var169:MProperty(MMethod)> */
var174 = var169->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var169:MProperty(MMethod)> */
if (unlikely(var174 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1933);
fatal_exit(1);
}
var172 = var174;
RET_LABEL173:(void)0;
}
}
((struct instance_standard__NativeArray*)var146)->values[3]=var172;
{
var175 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_standard__string__Object__to_s]))(var_msignature); /* to_s on <var_msignature:nullable MSignature(MSignature)>*/
}
((struct instance_standard__NativeArray*)var146)->values[4]=var175;
{
{ /* Inline array#AbstractArrayRead#length (var_param_names) on <var_param_names:Array[String]> */
var178 = var_param_names->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_param_names:Array[String]> */
var176 = var178;
RET_LABEL177:(void)0;
}
}
var179 = standard__string___Int___Object__to_s(var176);
((struct instance_standard__NativeArray*)var146)->values[6]=var179;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var182 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var182 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var180 = var182;
RET_LABEL181:(void)0;
}
}
{
var183 = nit___nit__MProperty___nit__model_base__MEntity__full_name(var180);
}
((struct instance_standard__NativeArray*)var146)->values[8]=var183;
{
var184 = ((val*(*)(val* self))(var146->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var146); /* native_to_s on <var146:NativeArray[String]>*/
}
varonce = var146;
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_node, var184); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
} else {
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var188 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var188 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var186 = var188;
RET_LABEL187:(void)0;
}
}
{
{ /* Inline model#MMethod#is_init (var186) on <var186:MProperty(MMethod)> */
var191 = var186->attrs[COLOR_nit__model__MMethod___is_init].s; /* _is_init on <var186:MProperty(MMethod)> */
var189 = var191;
RET_LABEL190:(void)0;
}
}
var_192 = var189;
if (var189){
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var195 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var195 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var193 = var195;
RET_LABEL194:(void)0;
}
}
{
{ /* Inline model#MMethod#is_new (var193) on <var193:MProperty(MMethod)> */
var198 = var193->attrs[COLOR_nit__model__MMethod___is_new].s; /* _is_new on <var193:MProperty(MMethod)> */
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
var202 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___supertypes].val; /* _supertypes on <var_mclassdef:MClassDef> */
if (unlikely(var202 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supertypes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 627);
fatal_exit(1);
}
var200 = var202;
RET_LABEL201:(void)0;
}
}
var_203 = var200;
{
var204 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_203);
}
var_205 = var204;
for(;;) {
{
var206 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_205);
}
if (var206){
{
var207 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_205);
}
var_msupertype = var207;
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var210 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var210 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var208 = var210;
RET_LABEL209:(void)0;
}
}
{
var211 = nit___nit__MClassType___MType__anchor_to(var_msupertype, var_mmodule, var208);
}
var_msupertype = var211;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var214 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var214 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var212 = var214;
RET_LABEL213:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var212) on <var212:MProperty(MMethod)> */
var217 = var212->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var212:MProperty(MMethod)> */
if (unlikely(var217 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1933);
fatal_exit(1);
}
var215 = var217;
RET_LABEL216:(void)0;
}
}
{
var218 = nit___nit__ModelBuilder___try_get_mproperty_by_name2(var_modelbuilder, self, var_mmodule, var_msupertype, var215);
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
var222 = ((short int(*)(val* self, val* p0))(var_candidate->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_candidate, var_other36); /* == on <var_candidate:nullable MProperty(MProperty)>*/
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
var232 = var_candidate->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var_candidate:nullable MProperty(MProperty)> */
if (unlikely(var232 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1968);
fatal_exit(1);
}
var230 = var232;
RET_LABEL231:(void)0;
}
}
/* <var230:MPropDef> isa MMethodDef */
cltype = type_nit__MMethodDef.color;
idtype = type_nit__MMethodDef.id;
if(cltype >= var230->type->table_size) {
var233 = 0;
} else {
var233 = var230->type->type_table[cltype] == idtype;
}
if (unlikely(!var233)) {
var_class_name = var230 == NULL ? "null" : var230->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MMethodDef", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 924);
fatal_exit(1);
}
{
{ /* Inline model#MMethodDef#msignature (var230) on <var230:MPropDef(MMethodDef)> */
var236 = var230->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var230:MPropDef(MMethodDef)> */
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
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_205); /* Direct call array#ArrayIterator#next on <var_205:ArrayIterator[MClassType]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_205); /* Direct call array#ArrayIterator#finish on <var_205:ArrayIterator[MClassType]>*/
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
var243 = ((short int(*)(val* self, val* p0))(var_msignature->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_msignature, var_other36); /* == on <var_msignature:nullable MSignature(MSignature)>*/
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
var248 = var_param_names->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_param_names:Array[String]> */
var246 = var248;
RET_LABEL247:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var_param_types) on <var_param_types:Array[MType]> */
var251 = var_param_types->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_param_types:Array[MType]> */
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
var259 = var_param_names->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_param_names:Array[String]> */
var257 = var259;
RET_LABEL258:(void)0;
}
}
{
var260 = nit___nit__MSignature___arity(var_msignature);
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
var267 = var_param_types->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_param_types:Array[MType]> */
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
var271 = NEW_standard__Array(&type_standard__Array__nit__MType);
{
standard___standard__Array___standard__kernel__Object__init(var271); /* Direct call array#Array#init on <var271:Array[MType]>*/
}
var_param_types = var271;
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var274 = var_msignature->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:nullable MSignature(MSignature)> */
if (unlikely(var274 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1756);
fatal_exit(1);
}
var272 = var274;
RET_LABEL273:(void)0;
}
}
var_275 = var272;
{
var276 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_275);
}
var_277 = var276;
for(;;) {
{
var278 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_277);
}
if (var278){
{
var279 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_277);
}
var_mparameter = var279;
{
{ /* Inline model#MParameter#mtype (var_mparameter) on <var_mparameter:MParameter> */
var282 = var_mparameter->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var_mparameter:MParameter> */
if (unlikely(var282 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1879);
fatal_exit(1);
}
var280 = var282;
RET_LABEL281:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_param_types, var280); /* Direct call array#Array#add on <var_param_types:Array[MType]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_277); /* Direct call array#ArrayIterator#next on <var_277:ArrayIterator[MParameter]>*/
}
} else {
goto BREAK_label283;
}
}
BREAK_label283: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_277); /* Direct call array#ArrayIterator#finish on <var_277:ArrayIterator[MParameter]>*/
}
{
{ /* Inline model#MSignature#vararg_rank (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var286 = var_msignature->attrs[COLOR_nit__model__MSignature___vararg_rank].l; /* _vararg_rank on <var_msignature:nullable MSignature(MSignature)> */
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
var291 = ((short int(*)(val* self, val* p0))(var_msignature->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_msignature, var_other36); /* == on <var_msignature:nullable MSignature(MSignature)>*/
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
var302 = var_msignature->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:nullable MSignature(MSignature)> */
var300 = var302;
RET_LABEL301:(void)0;
}
}
var_ret_type = var300;
} else {
}
{
{ /* Inline array#AbstractArrayRead#length (var_param_names) on <var_param_names:Array[String]> */
var305 = var_param_names->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_param_names:Array[String]> */
var303 = var305;
RET_LABEL304:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var_param_types) on <var_param_types:Array[MType]> */
var308 = var_param_types->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_param_types:Array[MType]> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 946);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var_nsig) on <var_nsig:nullable ASignature> */
if (unlikely(var_nsig == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1693);
fatal_exit(1);
}
var315 = var_nsig->attrs[COLOR_nit__parser_nodes__ASignature___n_params].val; /* _n_params on <var_nsig:nullable ASignature> */
if (unlikely(var315 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1693);
fatal_exit(1);
}
var313 = var315;
RET_LABEL314:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var_param_types) on <var_param_types:Array[MType]> */
var318 = var_param_types->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_param_types:Array[MType]> */
var316 = var318;
RET_LABEL317:(void)0;
}
}
{
var319 = nit___nit__ANodes___standard__abstract_collection__SequenceRead___91d_93d(var313, var316);
}
if (unlikely(varonce320==NULL)) {
var321 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce322!=NULL)) {
var323 = varonce322;
} else {
var324 = "Error: untyped parameter `";
var325 = standard___standard__NativeString___to_s_with_length(var324, 26l);
var323 = var325;
varonce322 = var323;
}
((struct instance_standard__NativeArray*)var321)->values[0]=var323;
if (likely(varonce326!=NULL)) {
var327 = varonce326;
} else {
var328 = "\'.";
var329 = standard___standard__NativeString___to_s_with_length(var328, 2l);
var327 = var329;
varonce326 = var327;
}
((struct instance_standard__NativeArray*)var321)->values[2]=var327;
} else {
var321 = varonce320;
varonce320 = NULL;
}
{
{ /* Inline array#AbstractArrayRead#length (var_param_types) on <var_param_types:Array[MType]> */
var332 = var_param_types->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_param_types:Array[MType]> */
var330 = var332;
RET_LABEL331:(void)0;
}
}
{
var333 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_param_names, var330);
}
((struct instance_standard__NativeArray*)var321)->values[1]=var333;
{
var334 = ((val*(*)(val* self))(var321->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var321); /* native_to_s on <var321:NativeArray[String]>*/
}
varonce320 = var321;
{
nit___nit__ModelBuilder___error(var_modelbuilder, var319, var334); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
var335 = NEW_standard__Array(&type_standard__Array__nit__MParameter);
{
standard___standard__Array___standard__kernel__Object__init(var335); /* Direct call array#Array#init on <var335:Array[MParameter]>*/
}
var_mparameters = var335;
var_i = 0l;
{
{ /* Inline array#AbstractArrayRead#length (var_param_names) on <var_param_names:Array[String]> */
var338 = var_param_names->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_param_names:Array[String]> */
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
var_class_name345 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name345);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var346 = var_i < var_339;
var340 = var346;
goto RET_LABEL341;
RET_LABEL341:(void)0;
}
}
if (var340){
var_is_default = 0;
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var350 = -1l;
var348 = var350;
goto RET_LABEL349;
RET_LABEL349:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_vararg_rank,var348) on <var_vararg_rank:Int> */
var353 = var_vararg_rank == var348;
var351 = var353;
goto RET_LABEL352;
RET_LABEL352:(void)0;
}
}
var_354 = var351;
if (var351){
{
var355 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_param_types, var_i);
}
/* <var355:nullable Object(MType)> isa MNullableType */
cltype357 = type_nit__MNullableType.color;
idtype358 = type_nit__MNullableType.id;
if(cltype357 >= var355->type->table_size) {
var356 = 0;
} else {
var356 = var355->type->type_table[cltype357] == idtype358;
}
var347 = var356;
} else {
var347 = var_354;
}
if (var347){
{
{ /* Inline array#AbstractArrayRead#length (var_param_names) on <var_param_names:Array[String]> */
var362 = var_param_names->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_param_names:Array[String]> */
var360 = var362;
RET_LABEL361:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var360,1l) on <var360:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var365 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var365)) {
var_class_name368 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name368);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var369 = var360 - 1l;
var363 = var369;
goto RET_LABEL364;
RET_LABEL364:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var_i,var363) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var363:Int> isa OTHER */
/* <var363:Int> isa OTHER */
var372 = 1; /* easy <var363:Int> isa OTHER*/
if (unlikely(!var372)) {
var_class_name375 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name375);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var376 = var_i < var363;
var370 = var376;
goto RET_LABEL371;
RET_LABEL371:(void)0;
}
}
var_377 = var370;
if (var370){
var359 = var_377;
} else {
var359 = var_accept_special_last_parameter;
}
if (var359){
var_is_default = 1;
} else {
}
} else {
}
var378 = NEW_nit__MParameter(&type_nit__MParameter);
{
var379 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_param_names, var_i);
}
{
var380 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_param_types, var_i);
}
{
{ /* Inline kernel#Int#== (var_i,var_vararg_rank) on <var_i:Int> */
var383 = var_i == var_vararg_rank;
var381 = var383;
goto RET_LABEL382;
RET_LABEL382:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var378->class->vft[COLOR_nit__model__MParameter__name_61d]))(var378, var379); /* name= on <var378:MParameter>*/
}
{
((void(*)(val* self, val* p0))(var378->class->vft[COLOR_nit__model__MParameter__mtype_61d]))(var378, var380); /* mtype= on <var378:MParameter>*/
}
{
((void(*)(val* self, short int p0))(var378->class->vft[COLOR_nit__model__MParameter__is_vararg_61d]))(var378, var381); /* is_vararg= on <var378:MParameter>*/
}
{
((void(*)(val* self, short int p0))(var378->class->vft[COLOR_nit__model__MParameter__is_default_61d]))(var378, var_is_default); /* is_default= on <var378:MParameter>*/
}
{
((void(*)(val* self))(var378->class->vft[COLOR_standard__kernel__Object__init]))(var378); /* init on <var378:MParameter>*/
}
var_mparameter384 = var378;
if (var_nsig == NULL) {
var385 = 0; /* is null */
} else {
var385 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nsig,((val*)NULL)) on <var_nsig:nullable ASignature> */
var_other36 = ((val*)NULL);
{
var388 = ((short int(*)(val* self, val* p0))(var_nsig->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nsig, var_other36); /* == on <var_nsig:nullable ASignature(ASignature)>*/
}
var389 = !var388;
var386 = var389;
goto RET_LABEL387;
RET_LABEL387:(void)0;
}
var385 = var386;
}
if (var385){
{
{ /* Inline parser_nodes#ASignature#n_params (var_nsig) on <var_nsig:nullable ASignature(ASignature)> */
var392 = var_nsig->attrs[COLOR_nit__parser_nodes__ASignature___n_params].val; /* _n_params on <var_nsig:nullable ASignature(ASignature)> */
if (unlikely(var392 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1693);
fatal_exit(1);
}
var390 = var392;
RET_LABEL391:(void)0;
}
}
{
var393 = nit___nit__ANodes___standard__abstract_collection__SequenceRead___91d_93d(var390, var_i);
}
{
{ /* Inline modelize_property#AParam#mparameter= (var393,var_mparameter384) on <var393:ANode(AParam)> */
var393->attrs[COLOR_nit__modelize_property__AParam___mparameter].val = var_mparameter384; /* _mparameter on <var393:ANode(AParam)> */
RET_LABEL394:(void)0;
}
}
} else {
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_mparameters, var_mparameter384); /* Direct call array#Array#add on <var_mparameters:Array[MParameter]>*/
}
{
var395 = standard___standard__Int___Discrete__successor(var_i, 1l);
}
var_i = var395;
} else {
goto BREAK_label396;
}
}
BREAK_label396: (void)0;
if (var_ret_type == NULL) {
var398 = 1; /* is null */
} else {
var398 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ret_type,((val*)NULL)) on <var_ret_type:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_ret_type,var_other) on <var_ret_type:nullable MType(MType)> */
var403 = var_ret_type == var_other;
var401 = var403;
goto RET_LABEL402;
RET_LABEL402:(void)0;
}
}
var399 = var401;
goto RET_LABEL400;
RET_LABEL400:(void)0;
}
var398 = var399;
}
var_404 = var398;
if (var398){
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var407 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var407 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var405 = var407;
RET_LABEL406:(void)0;
}
}
{
{ /* Inline model#MMethod#is_new (var405) on <var405:MProperty(MMethod)> */
var410 = var405->attrs[COLOR_nit__model__MMethod___is_new].s; /* _is_new on <var405:MProperty(MMethod)> */
var408 = var410;
RET_LABEL409:(void)0;
}
}
var397 = var408;
} else {
var397 = var_404;
}
if (var397){
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var413 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var413 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var411 = var413;
RET_LABEL412:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var411) on <var411:MClass> */
var416 = var411->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var411:MClass> */
if (unlikely(var416 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 484);
fatal_exit(1);
}
var414 = var416;
RET_LABEL415:(void)0;
}
}
var_ret_type = var414;
} else {
}
var419 = !var_accept_special_last_parameter;
var_420 = var419;
if (var419){
{
var421 = standard___standard__Collection___not_empty(var_mparameters);
}
var418 = var421;
} else {
var418 = var_420;
}
var_422 = var418;
if (var418){
{
var423 = standard___standard__SequenceRead___last(var_mparameters);
}
{
{ /* Inline model#MParameter#is_vararg (var423) on <var423:nullable Object(MParameter)> */
var426 = var423->attrs[COLOR_nit__model__MParameter___is_vararg].s; /* _is_vararg on <var423:nullable Object(MParameter)> */
var424 = var426;
RET_LABEL425:(void)0;
}
}
var417 = var424;
} else {
var417 = var_422;
}
if (var417){
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (self) on <self:AMethPropdef> */
var429 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var427 = var429;
RET_LABEL428:(void)0;
}
}
if (var427 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 968);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var427) on <var427:nullable ASignature> */
if (unlikely(var427 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1693);
fatal_exit(1);
}
var432 = var427->attrs[COLOR_nit__parser_nodes__ASignature___n_params].val; /* _n_params on <var427:nullable ASignature> */
if (unlikely(var432 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1693);
fatal_exit(1);
}
var430 = var432;
RET_LABEL431:(void)0;
}
}
{
var433 = standard___standard__SequenceRead___last(var430);
}
if (unlikely(varonce434==NULL)) {
var435 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce436!=NULL)) {
var437 = varonce436;
} else {
var438 = "Error: illegal variadic parameter `";
var439 = standard___standard__NativeString___to_s_with_length(var438, 35l);
var437 = var439;
varonce436 = var437;
}
((struct instance_standard__NativeArray*)var435)->values[0]=var437;
if (likely(varonce440!=NULL)) {
var441 = varonce440;
} else {
var442 = "` for `";
var443 = standard___standard__NativeString___to_s_with_length(var442, 7l);
var441 = var443;
varonce440 = var441;
}
((struct instance_standard__NativeArray*)var435)->values[2]=var441;
if (likely(varonce444!=NULL)) {
var445 = varonce444;
} else {
var446 = "`.";
var447 = standard___standard__NativeString___to_s_with_length(var446, 2l);
var445 = var447;
varonce444 = var445;
}
((struct instance_standard__NativeArray*)var435)->values[4]=var445;
} else {
var435 = varonce434;
varonce434 = NULL;
}
{
var448 = standard___standard__SequenceRead___last(var_mparameters);
}
{
var449 = ((val*(*)(val* self))(var448->class->vft[COLOR_standard__string__Object__to_s]))(var448); /* to_s on <var448:nullable Object(MParameter)>*/
}
((struct instance_standard__NativeArray*)var435)->values[1]=var449;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var452 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var452 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var450 = var452;
RET_LABEL451:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var450) on <var450:MProperty(MMethod)> */
var455 = var450->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var450:MProperty(MMethod)> */
if (unlikely(var455 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1933);
fatal_exit(1);
}
var453 = var455;
RET_LABEL454:(void)0;
}
}
((struct instance_standard__NativeArray*)var435)->values[3]=var453;
{
var456 = ((val*(*)(val* self))(var435->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var435); /* native_to_s on <var435:NativeArray[String]>*/
}
varonce434 = var435;
{
nit___nit__ModelBuilder___error(var_modelbuilder, var433, var456); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
if (var_ret_type == NULL) {
var458 = 1; /* is null */
} else {
var458 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ret_type,((val*)NULL)) on <var_ret_type:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_ret_type,var_other) on <var_ret_type:nullable MType(MType)> */
var463 = var_ret_type == var_other;
var461 = var463;
goto RET_LABEL462;
RET_LABEL462:(void)0;
}
}
var459 = var461;
goto RET_LABEL460;
RET_LABEL460:(void)0;
}
var458 = var459;
}
var_464 = var458;
if (var458){
var457 = var_return_is_mandatory;
} else {
var457 = var_464;
}
if (var457){
{
{ /* Inline parser_nodes#AMethPropdef#n_methid (self) on <self:AMethPropdef> */
var467 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
var465 = var467;
RET_LABEL466:(void)0;
}
}
if (unlikely(varonce468==NULL)) {
var469 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce470!=NULL)) {
var471 = varonce470;
} else {
var472 = "Error: mandatory return type for `";
var473 = standard___standard__NativeString___to_s_with_length(var472, 34l);
var471 = var473;
varonce470 = var471;
}
((struct instance_standard__NativeArray*)var469)->values[0]=var471;
if (likely(varonce474!=NULL)) {
var475 = varonce474;
} else {
var476 = "`.";
var477 = standard___standard__NativeString___to_s_with_length(var476, 2l);
var475 = var477;
varonce474 = var475;
}
((struct instance_standard__NativeArray*)var469)->values[2]=var475;
} else {
var469 = varonce468;
varonce468 = NULL;
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var480 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var480 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var478 = var480;
RET_LABEL479:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var478) on <var478:MProperty(MMethod)> */
var483 = var478->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var478:MProperty(MMethod)> */
if (unlikely(var483 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1933);
fatal_exit(1);
}
var481 = var483;
RET_LABEL482:(void)0;
}
}
((struct instance_standard__NativeArray*)var469)->values[1]=var481;
{
var484 = ((val*(*)(val* self))(var469->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var469); /* native_to_s on <var469:NativeArray[String]>*/
}
varonce468 = var469;
{
nit___nit__ModelBuilder___error(var_modelbuilder, var465, var484); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
var485 = NEW_nit__MSignature(&type_nit__MSignature);
{
((void(*)(val* self, val* p0))(var485->class->vft[COLOR_nit__model__MSignature__mparameters_61d]))(var485, var_mparameters); /* mparameters= on <var485:MSignature>*/
}
{
((void(*)(val* self, val* p0))(var485->class->vft[COLOR_nit__model__MSignature__return_mtype_61d]))(var485, var_ret_type); /* return_mtype= on <var485:MSignature>*/
}
{
((void(*)(val* self))(var485->class->vft[COLOR_standard__kernel__Object__init]))(var485); /* init on <var485:MSignature>*/
}
var_msignature = var485;
{
{ /* Inline model#MMethodDef#msignature= (var_mpropdef,var_msignature) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nit__model__MMethodDef___msignature].val = var_msignature; /* _msignature on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL486:(void)0;
}
}
if (likely(varonce487!=NULL)) {
var488 = varonce487;
} else {
var489 = "abstract";
var490 = standard___standard__NativeString___to_s_with_length(var489, 8l);
var488 = var490;
varonce487 = var488;
}
{
var491 = nit__annotation___Prod___get_single_annotation(self, var488, var_modelbuilder);
}
if (var491 == NULL) {
var492 = 0; /* is null */
} else {
var492 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var491,((val*)NULL)) on <var491:nullable AAnnotation> */
var_other36 = ((val*)NULL);
{
var495 = ((short int(*)(val* self, val* p0))(var491->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var491, var_other36); /* == on <var491:nullable AAnnotation(AAnnotation)>*/
}
var496 = !var495;
var493 = var496;
goto RET_LABEL494;
RET_LABEL494:(void)0;
}
var492 = var493;
}
{
{ /* Inline model#MMethodDef#is_abstract= (var_mpropdef,var492) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nit__model__MMethodDef___is_abstract].s = var492; /* _is_abstract on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL497:(void)0;
}
}
if (likely(varonce498!=NULL)) {
var499 = varonce498;
} else {
var500 = "intern";
var501 = standard___standard__NativeString___to_s_with_length(var500, 6l);
var499 = var501;
varonce498 = var499;
}
{
var502 = nit__annotation___Prod___get_single_annotation(self, var499, var_modelbuilder);
}
if (var502 == NULL) {
var503 = 0; /* is null */
} else {
var503 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var502,((val*)NULL)) on <var502:nullable AAnnotation> */
var_other36 = ((val*)NULL);
{
var506 = ((short int(*)(val* self, val* p0))(var502->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var502, var_other36); /* == on <var502:nullable AAnnotation(AAnnotation)>*/
}
var507 = !var506;
var504 = var507;
goto RET_LABEL505;
RET_LABEL505:(void)0;
}
var503 = var504;
}
{
{ /* Inline model#MMethodDef#is_intern= (var_mpropdef,var503) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nit__model__MMethodDef___is_intern].s = var503; /* _is_intern on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL508:(void)0;
}
}
{
{ /* Inline parser_nodes#AMethPropdef#n_extern_code_block (self) on <self:AMethPropdef> */
var512 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AMethPropdef> */
var510 = var512;
RET_LABEL511:(void)0;
}
}
if (var510 == NULL) {
var513 = 0; /* is null */
} else {
var513 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var510,((val*)NULL)) on <var510:nullable AExternCodeBlock> */
var_other36 = ((val*)NULL);
{
var516 = ((short int(*)(val* self, val* p0))(var510->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var510, var_other36); /* == on <var510:nullable AExternCodeBlock(AExternCodeBlock)>*/
}
var517 = !var516;
var514 = var517;
goto RET_LABEL515;
RET_LABEL515:(void)0;
}
var513 = var514;
}
var_518 = var513;
if (var513){
var509 = var_518;
} else {
if (likely(varonce519!=NULL)) {
var520 = varonce519;
} else {
var521 = "extern";
var522 = standard___standard__NativeString___to_s_with_length(var521, 6l);
var520 = var522;
varonce519 = var520;
}
{
var523 = nit__annotation___Prod___get_single_annotation(self, var520, var_modelbuilder);
}
if (var523 == NULL) {
var524 = 0; /* is null */
} else {
var524 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var523,((val*)NULL)) on <var523:nullable AAnnotation> */
var_other36 = ((val*)NULL);
{
var527 = ((short int(*)(val* self, val* p0))(var523->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var523, var_other36); /* == on <var523:nullable AAnnotation(AAnnotation)>*/
}
var528 = !var527;
var525 = var528;
goto RET_LABEL526;
RET_LABEL526:(void)0;
}
var524 = var525;
}
var509 = var524;
}
{
{ /* Inline model#MMethodDef#is_extern= (var_mpropdef,var509) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nit__model__MMethodDef___is_extern].s = var509; /* _is_extern on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL529:(void)0;
}
}
if (likely(varonce530!=NULL)) {
var531 = varonce530;
} else {
var532 = "lazy";
var533 = standard___standard__NativeString___to_s_with_length(var532, 4l);
var531 = var533;
varonce530 = var531;
}
{
var534 = nit__annotation___Prod___get_single_annotation(self, var531, var_modelbuilder);
}
var_at = var534;
if (var_at == NULL) {
var535 = 0; /* is null */
} else {
var535 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_at,((val*)NULL)) on <var_at:nullable AAnnotation> */
var_other36 = ((val*)NULL);
{
var538 = ((short int(*)(val* self, val* p0))(var_at->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_at, var_other36); /* == on <var_at:nullable AAnnotation(AAnnotation)>*/
}
var539 = !var538;
var536 = var539;
goto RET_LABEL537;
RET_LABEL537:(void)0;
}
var535 = var536;
}
if (var535){
if (likely(varonce540!=NULL)) {
var541 = varonce540;
} else {
var542 = "Syntax Error: `lazy` must be used on attributes.";
var543 = standard___standard__NativeString___to_s_with_length(var542, 48l);
var541 = var543;
varonce540 = var541;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_at, var541); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
if (likely(varonce544!=NULL)) {
var545 = varonce544;
} else {
var546 = "autoinit";
var547 = standard___standard__NativeString___to_s_with_length(var546, 8l);
var545 = var547;
varonce544 = var545;
}
{
var548 = nit__annotation___Prod___get_single_annotation(self, var545, var_modelbuilder);
}
var_atautoinit = var548;
if (var_atautoinit == NULL) {
var549 = 0; /* is null */
} else {
var549 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atautoinit,((val*)NULL)) on <var_atautoinit:nullable AAnnotation> */
var_other36 = ((val*)NULL);
{
var552 = ((short int(*)(val* self, val* p0))(var_atautoinit->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_atautoinit, var_other36); /* == on <var_atautoinit:nullable AAnnotation(AAnnotation)>*/
}
var553 = !var552;
var550 = var553;
goto RET_LABEL551;
RET_LABEL551:(void)0;
}
var549 = var550;
}
if (var549){
{
var554 = nit___nit__MPropDef___is_intro(var_mpropdef);
}
var555 = !var554;
if (var555){
if (likely(varonce556!=NULL)) {
var557 = varonce556;
} else {
var558 = "Error: `autoinit` cannot be set on redefinitions.";
var559 = standard___standard__NativeString___to_s_with_length(var558, 49l);
var557 = var559;
varonce556 = var557;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_atautoinit, var557); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
{
var560 = nit___nit__MClassDef___is_intro(var_mclassdef);
}
var561 = !var560;
if (var561){
if (likely(varonce562!=NULL)) {
var563 = varonce562;
} else {
var564 = "Error: `autoinit` cannot be used in class refinements.";
var565 = standard___standard__NativeString___to_s_with_length(var564, 54l);
var563 = var565;
varonce562 = var563;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_atautoinit, var563); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
{
{ /* Inline modelize_property#AMethPropdef#is_autoinit= (self,1) on <self:AMethPropdef> */
self->attrs[COLOR_nit__modelize_property__AMethPropdef___is_autoinit].s = 1; /* _is_autoinit on <self:AMethPropdef> */
RET_LABEL566:(void)0;
}
}
}
}
} else {
}
RET_LABEL:;
}
/* method modelize_property#AMethPropdef#check_signature for (self: AMethPropdef, ModelBuilder) */
void nit__modelize_property___AMethPropdef___APropdef__check_signature(val* self, val* p0) {
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
val* var18 /* : nullable MPropDef */;
val* var20 /* : nullable MPropDef */;
val* var21 /* : nullable MSignature */;
val* var23 /* : nullable MSignature */;
val* var_mysignature /* var mysignature: nullable MSignature */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var_other33 /* var other: nullable Object */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
val* var38 /* : nullable MPropDef */;
val* var40 /* : nullable MPropDef */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
val* var44 /* : MProperty */;
val* var46 /* : MProperty */;
val* var47 /* : MPropDef */;
val* var49 /* : MPropDef */;
val* var50 /* : nullable MSignature */;
val* var52 /* : nullable MSignature */;
val* var_msignature /* var msignature: nullable MSignature */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
val* var59 /* : nullable MType */;
val* var61 /* : nullable MType */;
val* var_precursor_ret_type /* var precursor_ret_type: nullable MType */;
val* var62 /* : nullable MType */;
val* var64 /* : nullable MType */;
val* var_ret_type /* var ret_type: nullable MType */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
short int var_ /* var : Bool */;
short int var71 /* : Bool */;
short int var72 /* : Bool */;
short int var74 /* : Bool */;
short int var76 /* : Bool */;
val* var77 /* : nullable AType */;
val* var79 /* : nullable AType */;
val* var80 /* : NativeArray[String] */;
static val* varonce;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
val* var84 /* : FlatString */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
val* var88 /* : FlatString */;
val* var89 /* : MProperty */;
val* var91 /* : MProperty */;
val* var92 /* : String */;
val* var93 /* : String */;
val* var94 /* : nullable MPropDef */;
val* var96 /* : nullable MPropDef */;
long var98 /* : Int */;
short int var99 /* : Bool */;
short int var101 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var102 /* : Bool */;
long var_i /* var i: Int */;
long var103 /* : Int */;
long var_104 /* var : Int */;
short int var105 /* : Bool */;
short int var107 /* : Bool */;
int cltype108;
int idtype109;
const char* var_class_name110;
short int var111 /* : Bool */;
val* var112 /* : Array[MParameter] */;
val* var114 /* : Array[MParameter] */;
val* var115 /* : nullable Object */;
val* var116 /* : MType */;
val* var118 /* : MType */;
val* var_myt /* var myt: MType */;
val* var119 /* : Array[MParameter] */;
val* var121 /* : Array[MParameter] */;
val* var122 /* : nullable Object */;
val* var123 /* : MType */;
val* var125 /* : MType */;
val* var_prt /* var prt: MType */;
val* var126 /* : ANodes[AParam] */;
val* var128 /* : ANodes[AParam] */;
val* var129 /* : ANode */;
val* var_node /* var node: AParam */;
val* var130 /* : MClassType */;
val* var132 /* : MClassType */;
short int var133 /* : Bool */;
short int var134 /* : Bool */;
val* var136 /* : NativeArray[String] */;
static val* varonce135;
static val* varonce137;
val* var138 /* : String */;
char* var139 /* : NativeString */;
val* var140 /* : FlatString */;
static val* varonce141;
val* var142 /* : String */;
char* var143 /* : NativeString */;
val* var144 /* : FlatString */;
static val* varonce145;
val* var146 /* : String */;
char* var147 /* : NativeString */;
val* var148 /* : FlatString */;
static val* varonce149;
val* var150 /* : String */;
char* var151 /* : NativeString */;
val* var152 /* : FlatString */;
val* var153 /* : String */;
val* var154 /* : Array[MParameter] */;
val* var156 /* : Array[MParameter] */;
val* var157 /* : nullable Object */;
val* var158 /* : String */;
val* var160 /* : String */;
val* var161 /* : String */;
val* var162 /* : String */;
val* var163 /* : nullable MPropDef */;
val* var165 /* : nullable MPropDef */;
long var167 /* : Int */;
short int var168 /* : Bool */;
short int var169 /* : Bool */;
short int var171 /* : Bool */;
short int var172 /* : Bool */;
val* var_node173 /* var node: nullable ANode */;
short int var174 /* : Bool */;
short int var175 /* : Bool */;
short int var177 /* : Bool */;
short int var178 /* : Bool */;
val* var179 /* : nullable AType */;
val* var181 /* : nullable AType */;
short int var182 /* : Bool */;
short int var183 /* : Bool */;
short int var185 /* : Bool */;
short int var187 /* : Bool */;
short int var188 /* : Bool */;
short int var189 /* : Bool */;
short int var191 /* : Bool */;
short int var193 /* : Bool */;
val* var194 /* : MClassType */;
val* var196 /* : MClassType */;
short int var197 /* : Bool */;
short int var198 /* : Bool */;
val* var200 /* : NativeArray[String] */;
static val* varonce199;
static val* varonce201;
val* var202 /* : String */;
char* var203 /* : NativeString */;
val* var204 /* : FlatString */;
static val* varonce205;
val* var206 /* : String */;
char* var207 /* : NativeString */;
val* var208 /* : FlatString */;
static val* varonce209;
val* var210 /* : String */;
char* var211 /* : NativeString */;
val* var212 /* : FlatString */;
val* var213 /* : String */;
val* var214 /* : String */;
val* var215 /* : String */;
val* var216 /* : nullable MPropDef */;
val* var218 /* : nullable MPropDef */;
long var220 /* : Int */;
short int var221 /* : Bool */;
short int var223 /* : Bool */;
int cltype224;
int idtype225;
const char* var_class_name226;
short int var227 /* : Bool */;
long var_i228 /* var i: Int */;
long var229 /* : Int */;
long var_230 /* var : Int */;
short int var231 /* : Bool */;
short int var233 /* : Bool */;
int cltype234;
int idtype235;
const char* var_class_name236;
short int var237 /* : Bool */;
val* var238 /* : ANodes[AParam] */;
val* var240 /* : ANodes[AParam] */;
val* var241 /* : ANode */;
val* var242 /* : nullable AType */;
val* var244 /* : nullable AType */;
val* var_nt /* var nt: nullable AType */;
short int var245 /* : Bool */;
short int var246 /* : Bool */;
short int var248 /* : Bool */;
short int var249 /* : Bool */;
val* var250 /* : nullable MType */;
val* var252 /* : nullable MType */;
long var253 /* : Int */;
val* var255 /* : nullable AType */;
val* var257 /* : nullable AType */;
val* var_nt258 /* var nt: nullable AType */;
short int var259 /* : Bool */;
short int var260 /* : Bool */;
short int var262 /* : Bool */;
short int var263 /* : Bool */;
val* var264 /* : nullable MType */;
val* var266 /* : nullable MType */;
var_modelbuilder = p0;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var2 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
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
var11 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_mclassdef = var9;
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var14 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_mmodule = var12;
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (self) on <self:AMethPropdef> */
var17 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_nsig = var15;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var20 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (var18 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1003);
fatal_exit(1);
} else {
{ /* Inline model#MMethodDef#msignature (var18) on <var18:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2336);
fatal_exit(1);
}
var23 = var18->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var18:nullable MPropDef(nullable MMethodDef)> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
var_mysignature = var21;
if (var_mysignature == NULL) {
var24 = 1; /* is null */
} else {
var24 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mysignature,((val*)NULL)) on <var_mysignature:nullable MSignature> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mysignature,var_other) on <var_mysignature:nullable MSignature(MSignature)> */
var29 = var_mysignature == var_other;
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
if (var_nsig == NULL) {
var30 = 0; /* is null */
} else {
var30 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nsig,((val*)NULL)) on <var_nsig:nullable ASignature> */
var_other33 = ((val*)NULL);
{
var34 = ((short int(*)(val* self, val* p0))(var_nsig->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nsig, var_other33); /* == on <var_nsig:nullable ASignature(ASignature)>*/
}
var35 = !var34;
var31 = var35;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
var30 = var31;
}
if (var30){
{
var36 = nit__modelize_property___ASignature___check_signature(var_nsig, var_modelbuilder, var_mclassdef);
}
var37 = !var36;
if (var37){
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var40 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
if (var38 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1009);
fatal_exit(1);
} else {
{ /* Inline model#MMethodDef#msignature= (var38,((val*)NULL)) on <var38:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2336);
fatal_exit(1);
}
var38->attrs[COLOR_nit__model__MMethodDef___msignature].val = ((val*)NULL); /* _msignature on <var38:nullable MPropDef(nullable MMethodDef)> */
RET_LABEL41:(void)0;
}
}
goto RET_LABEL;
} else {
}
} else {
}
{
var42 = nit___nit__MPropDef___is_intro(var_mpropdef);
}
var43 = !var42;
if (var43){
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var46 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var44) on <var44:MProperty(MMethod)> */
var49 = var44->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var44:MProperty(MMethod)> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1968);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var47) on <var47:MPropDef(MMethodDef)> */
var52 = var47->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var47:MPropDef(MMethodDef)> */
var50 = var52;
RET_LABEL51:(void)0;
}
}
var_msignature = var50;
if (var_msignature == NULL) {
var53 = 1; /* is null */
} else {
var53 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_msignature,((val*)NULL)) on <var_msignature:nullable MSignature> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_msignature,var_other) on <var_msignature:nullable MSignature(MSignature)> */
var58 = var_msignature == var_other;
var56 = var58;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
var53 = var54;
}
if (var53){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var61 = var_msignature->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:nullable MSignature(MSignature)> */
var59 = var61;
RET_LABEL60:(void)0;
}
}
var_precursor_ret_type = var59;
{
{ /* Inline model#MSignature#return_mtype (var_mysignature) on <var_mysignature:nullable MSignature(MSignature)> */
var64 = var_mysignature->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var_mysignature:nullable MSignature(MSignature)> */
var62 = var64;
RET_LABEL63:(void)0;
}
}
var_ret_type = var62;
if (var_ret_type == NULL) {
var66 = 0; /* is null */
} else {
var66 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret_type,((val*)NULL)) on <var_ret_type:nullable MType> */
var_other33 = ((val*)NULL);
{
var69 = ((short int(*)(val* self, val* p0))(var_ret_type->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ret_type, var_other33); /* == on <var_ret_type:nullable MType(MType)>*/
}
var70 = !var69;
var67 = var70;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
var66 = var67;
}
var_ = var66;
if (var66){
if (var_precursor_ret_type == NULL) {
var71 = 1; /* is null */
} else {
var71 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_precursor_ret_type,((val*)NULL)) on <var_precursor_ret_type:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_precursor_ret_type,var_other) on <var_precursor_ret_type:nullable MType(MType)> */
var76 = var_precursor_ret_type == var_other;
var74 = var76;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
}
var72 = var74;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
var71 = var72;
}
var65 = var71;
} else {
var65 = var_;
}
if (var65){
if (var_nsig == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1023);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ASignature#n_type (var_nsig) on <var_nsig:nullable ASignature> */
if (unlikely(var_nsig == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1699);
fatal_exit(1);
}
var79 = var_nsig->attrs[COLOR_nit__parser_nodes__ASignature___n_type].val; /* _n_type on <var_nsig:nullable ASignature> */
var77 = var79;
RET_LABEL78:(void)0;
}
}
if (unlikely(var77 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1023);
fatal_exit(1);
}
if (unlikely(varonce==NULL)) {
var80 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = "Redef Error: `";
var84 = standard___standard__NativeString___to_s_with_length(var83, 14l);
var82 = var84;
varonce81 = var82;
}
((struct instance_standard__NativeArray*)var80)->values[0]=var82;
if (likely(varonce85!=NULL)) {
var86 = varonce85;
} else {
var87 = "` is a procedure, not a function.";
var88 = standard___standard__NativeString___to_s_with_length(var87, 33l);
var86 = var88;
varonce85 = var86;
}
((struct instance_standard__NativeArray*)var80)->values[2]=var86;
} else {
var80 = varonce;
varonce = NULL;
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var91 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var91 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var89 = var91;
RET_LABEL90:(void)0;
}
}
{
var92 = ((val*(*)(val* self))(var89->class->vft[COLOR_standard__string__Object__to_s]))(var89); /* to_s on <var89:MProperty(MMethod)>*/
}
((struct instance_standard__NativeArray*)var80)->values[1]=var92;
{
var93 = ((val*(*)(val* self))(var80->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var80); /* native_to_s on <var80:NativeArray[String]>*/
}
varonce = var80;
{
nit___nit__ModelBuilder___error(var_modelbuilder, var77, var93); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var96 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var94 = var96;
RET_LABEL95:(void)0;
}
}
if (var94 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1024);
fatal_exit(1);
} else {
{ /* Inline model#MMethodDef#msignature= (var94,((val*)NULL)) on <var94:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var94 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2336);
fatal_exit(1);
}
var94->attrs[COLOR_nit__model__MMethodDef___msignature].val = ((val*)NULL); /* _msignature on <var94:nullable MPropDef(nullable MMethodDef)> */
RET_LABEL97:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
var98 = nit___nit__MSignature___arity(var_mysignature);
}
{
{ /* Inline kernel#Int#> (var98,0l) on <var98:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var101 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var101)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var102 = var98 > 0l;
var99 = var102;
goto RET_LABEL100;
RET_LABEL100:(void)0;
}
}
if (var99){
var_i = 0l;
{
var103 = nit___nit__MSignature___arity(var_mysignature);
}
var_104 = var103;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_104) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_104:Int> isa OTHER */
/* <var_104:Int> isa OTHER */
var107 = 1; /* easy <var_104:Int> isa OTHER*/
if (unlikely(!var107)) {
var_class_name110 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name110);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var111 = var_i < var_104;
var105 = var111;
goto RET_LABEL106;
RET_LABEL106:(void)0;
}
}
if (var105){
{
{ /* Inline model#MSignature#mparameters (var_mysignature) on <var_mysignature:nullable MSignature(MSignature)> */
var114 = var_mysignature->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var_mysignature:nullable MSignature(MSignature)> */
if (unlikely(var114 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1756);
fatal_exit(1);
}
var112 = var114;
RET_LABEL113:(void)0;
}
}
{
var115 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var112, var_i);
}
{
{ /* Inline model#MParameter#mtype (var115) on <var115:nullable Object(MParameter)> */
var118 = var115->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var115:nullable Object(MParameter)> */
if (unlikely(var118 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1879);
fatal_exit(1);
}
var116 = var118;
RET_LABEL117:(void)0;
}
}
var_myt = var116;
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var121 = var_msignature->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:nullable MSignature(MSignature)> */
if (unlikely(var121 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1756);
fatal_exit(1);
}
var119 = var121;
RET_LABEL120:(void)0;
}
}
{
var122 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var119, var_i);
}
{
{ /* Inline model#MParameter#mtype (var122) on <var122:nullable Object(MParameter)> */
var125 = var122->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var122:nullable Object(MParameter)> */
if (unlikely(var125 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1879);
fatal_exit(1);
}
var123 = var125;
RET_LABEL124:(void)0;
}
}
var_prt = var123;
if (var_nsig == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1033);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var_nsig) on <var_nsig:nullable ASignature> */
if (unlikely(var_nsig == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1693);
fatal_exit(1);
}
var128 = var_nsig->attrs[COLOR_nit__parser_nodes__ASignature___n_params].val; /* _n_params on <var_nsig:nullable ASignature> */
if (unlikely(var128 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1693);
fatal_exit(1);
}
var126 = var128;
RET_LABEL127:(void)0;
}
}
{
var129 = nit___nit__ANodes___standard__abstract_collection__SequenceRead___91d_93d(var126, var_i);
}
var_node = var129;
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var132 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var132 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var130 = var132;
RET_LABEL131:(void)0;
}
}
{
var133 = nit___nit__ModelBuilder___check_sametype(var_modelbuilder, var_node, var_mmodule, var130, var_myt, var_prt);
}
var134 = !var133;
if (var134){
if (unlikely(varonce135==NULL)) {
var136 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce137!=NULL)) {
var138 = varonce137;
} else {
var139 = "Redef Error: expected `";
var140 = standard___standard__NativeString___to_s_with_length(var139, 23l);
var138 = var140;
varonce137 = var138;
}
((struct instance_standard__NativeArray*)var136)->values[0]=var138;
if (likely(varonce141!=NULL)) {
var142 = varonce141;
} else {
var143 = "` for parameter `";
var144 = standard___standard__NativeString___to_s_with_length(var143, 17l);
var142 = var144;
varonce141 = var142;
}
((struct instance_standard__NativeArray*)var136)->values[2]=var142;
if (likely(varonce145!=NULL)) {
var146 = varonce145;
} else {
var147 = "\'; got `";
var148 = standard___standard__NativeString___to_s_with_length(var147, 8l);
var146 = var148;
varonce145 = var146;
}
((struct instance_standard__NativeArray*)var136)->values[4]=var146;
if (likely(varonce149!=NULL)) {
var150 = varonce149;
} else {
var151 = "`.";
var152 = standard___standard__NativeString___to_s_with_length(var151, 2l);
var150 = var152;
varonce149 = var150;
}
((struct instance_standard__NativeArray*)var136)->values[6]=var150;
} else {
var136 = varonce135;
varonce135 = NULL;
}
{
var153 = ((val*(*)(val* self))(var_prt->class->vft[COLOR_standard__string__Object__to_s]))(var_prt); /* to_s on <var_prt:MType>*/
}
((struct instance_standard__NativeArray*)var136)->values[1]=var153;
{
{ /* Inline model#MSignature#mparameters (var_mysignature) on <var_mysignature:nullable MSignature(MSignature)> */
var156 = var_mysignature->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var_mysignature:nullable MSignature(MSignature)> */
if (unlikely(var156 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1756);
fatal_exit(1);
}
var154 = var156;
RET_LABEL155:(void)0;
}
}
{
var157 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var154, var_i);
}
{
{ /* Inline model#MParameter#name (var157) on <var157:nullable Object(MParameter)> */
var160 = var157->attrs[COLOR_nit__model__MParameter___name].val; /* _name on <var157:nullable Object(MParameter)> */
if (unlikely(var160 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1876);
fatal_exit(1);
}
var158 = var160;
RET_LABEL159:(void)0;
}
}
((struct instance_standard__NativeArray*)var136)->values[3]=var158;
{
var161 = ((val*(*)(val* self))(var_myt->class->vft[COLOR_standard__string__Object__to_s]))(var_myt); /* to_s on <var_myt:MType>*/
}
((struct instance_standard__NativeArray*)var136)->values[5]=var161;
{
var162 = ((val*(*)(val* self))(var136->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var136); /* native_to_s on <var136:NativeArray[String]>*/
}
varonce135 = var136;
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_node, var162); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var165 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var163 = var165;
RET_LABEL164:(void)0;
}
}
if (var163 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1036);
fatal_exit(1);
} else {
{ /* Inline model#MMethodDef#msignature= (var163,((val*)NULL)) on <var163:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var163 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2336);
fatal_exit(1);
}
var163->attrs[COLOR_nit__model__MMethodDef___msignature].val = ((val*)NULL); /* _msignature on <var163:nullable MPropDef(nullable MMethodDef)> */
RET_LABEL166:(void)0;
}
}
} else {
}
{
var167 = standard___standard__Int___Discrete__successor(var_i, 1l);
}
var_i = var167;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
} else {
}
if (var_precursor_ret_type == NULL) {
var168 = 0; /* is null */
} else {
var168 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_precursor_ret_type,((val*)NULL)) on <var_precursor_ret_type:nullable MType> */
var_other33 = ((val*)NULL);
{
var171 = ((short int(*)(val* self, val* p0))(var_precursor_ret_type->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_precursor_ret_type, var_other33); /* == on <var_precursor_ret_type:nullable MType(MType)>*/
}
var172 = !var171;
var169 = var172;
goto RET_LABEL170;
RET_LABEL170:(void)0;
}
var168 = var169;
}
if (var168){
var_node173 = ((val*)NULL);
if (var_nsig == NULL) {
var174 = 0; /* is null */
} else {
var174 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nsig,((val*)NULL)) on <var_nsig:nullable ASignature> */
var_other33 = ((val*)NULL);
{
var177 = ((short int(*)(val* self, val* p0))(var_nsig->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nsig, var_other33); /* == on <var_nsig:nullable ASignature(ASignature)>*/
}
var178 = !var177;
var175 = var178;
goto RET_LABEL176;
RET_LABEL176:(void)0;
}
var174 = var175;
}
if (var174){
{
{ /* Inline parser_nodes#ASignature#n_type (var_nsig) on <var_nsig:nullable ASignature(ASignature)> */
var181 = var_nsig->attrs[COLOR_nit__parser_nodes__ASignature___n_type].val; /* _n_type on <var_nsig:nullable ASignature(ASignature)> */
var179 = var181;
RET_LABEL180:(void)0;
}
}
var_node173 = var179;
} else {
}
if (var_node173 == NULL) {
var182 = 1; /* is null */
} else {
var182 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_node173,((val*)NULL)) on <var_node173:nullable ANode> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_node173,var_other) on <var_node173:nullable ANode(ANode)> */
var187 = var_node173 == var_other;
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
var_node173 = self;
} else {
}
if (var_ret_type == NULL) {
var188 = 1; /* is null */
} else {
var188 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ret_type,((val*)NULL)) on <var_ret_type:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_ret_type,var_other) on <var_ret_type:nullable MType(MType)> */
var193 = var_ret_type == var_other;
var191 = var193;
goto RET_LABEL192;
RET_LABEL192:(void)0;
}
}
var189 = var191;
goto RET_LABEL190;
RET_LABEL190:(void)0;
}
var188 = var189;
}
if (var188){
var_ret_type = var_precursor_ret_type;
} else {
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var196 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var196 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var194 = var196;
RET_LABEL195:(void)0;
}
}
{
var197 = nit___nit__ModelBuilder___check_subtype(var_modelbuilder, var_node173, var_mmodule, var194, var_ret_type, var_precursor_ret_type);
}
var198 = !var197;
if (var198){
if (unlikely(varonce199==NULL)) {
var200 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce201!=NULL)) {
var202 = varonce201;
} else {
var203 = "Redef Error: expected `";
var204 = standard___standard__NativeString___to_s_with_length(var203, 23l);
var202 = var204;
varonce201 = var202;
}
((struct instance_standard__NativeArray*)var200)->values[0]=var202;
if (likely(varonce205!=NULL)) {
var206 = varonce205;
} else {
var207 = "` for return type; got `";
var208 = standard___standard__NativeString___to_s_with_length(var207, 24l);
var206 = var208;
varonce205 = var206;
}
((struct instance_standard__NativeArray*)var200)->values[2]=var206;
if (likely(varonce209!=NULL)) {
var210 = varonce209;
} else {
var211 = "`.";
var212 = standard___standard__NativeString___to_s_with_length(var211, 2l);
var210 = var212;
varonce209 = var210;
}
((struct instance_standard__NativeArray*)var200)->values[4]=var210;
} else {
var200 = varonce199;
varonce199 = NULL;
}
{
var213 = ((val*(*)(val* self))(var_precursor_ret_type->class->vft[COLOR_standard__string__Object__to_s]))(var_precursor_ret_type); /* to_s on <var_precursor_ret_type:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var200)->values[1]=var213;
{
var214 = ((val*(*)(val* self))(var_ret_type->class->vft[COLOR_standard__string__Object__to_s]))(var_ret_type); /* to_s on <var_ret_type:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var200)->values[3]=var214;
{
var215 = ((val*(*)(val* self))(var200->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var200); /* native_to_s on <var200:NativeArray[String]>*/
}
varonce199 = var200;
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_node173, var215); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var218 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var216 = var218;
RET_LABEL217:(void)0;
}
}
if (var216 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1049);
fatal_exit(1);
} else {
{ /* Inline model#MMethodDef#msignature= (var216,((val*)NULL)) on <var216:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var216 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2336);
fatal_exit(1);
}
var216->attrs[COLOR_nit__model__MMethodDef___msignature].val = ((val*)NULL); /* _msignature on <var216:nullable MPropDef(nullable MMethodDef)> */
RET_LABEL219:(void)0;
}
}
} else {
}
}
} else {
}
} else {
}
{
var220 = nit___nit__MSignature___arity(var_mysignature);
}
{
{ /* Inline kernel#Int#> (var220,0l) on <var220:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var223 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var223)) {
var_class_name226 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name226);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var227 = var220 > 0l;
var221 = var227;
goto RET_LABEL222;
RET_LABEL222:(void)0;
}
}
if (var221){
var_i228 = 0l;
{
var229 = nit___nit__MSignature___arity(var_mysignature);
}
var_230 = var229;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i228,var_230) on <var_i228:Int> */
/* Covariant cast for argument 0 (i) <var_230:Int> isa OTHER */
/* <var_230:Int> isa OTHER */
var233 = 1; /* easy <var_230:Int> isa OTHER*/
if (unlikely(!var233)) {
var_class_name236 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name236);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var237 = var_i228 < var_230;
var231 = var237;
goto RET_LABEL232;
RET_LABEL232:(void)0;
}
}
if (var231){
if (var_nsig == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1057);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var_nsig) on <var_nsig:nullable ASignature> */
if (unlikely(var_nsig == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1693);
fatal_exit(1);
}
var240 = var_nsig->attrs[COLOR_nit__parser_nodes__ASignature___n_params].val; /* _n_params on <var_nsig:nullable ASignature> */
if (unlikely(var240 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1693);
fatal_exit(1);
}
var238 = var240;
RET_LABEL239:(void)0;
}
}
{
var241 = nit___nit__ANodes___standard__abstract_collection__SequenceRead___91d_93d(var238, var_i228);
}
{
{ /* Inline parser_nodes#AParam#n_type (var241) on <var241:ANode(AParam)> */
var244 = var241->attrs[COLOR_nit__parser_nodes__AParam___n_type].val; /* _n_type on <var241:ANode(AParam)> */
var242 = var244;
RET_LABEL243:(void)0;
}
}
var_nt = var242;
if (var_nt == NULL) {
var245 = 0; /* is null */
} else {
var245 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nt,((val*)NULL)) on <var_nt:nullable AType> */
var_other33 = ((val*)NULL);
{
var248 = ((short int(*)(val* self, val* p0))(var_nt->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nt, var_other33); /* == on <var_nt:nullable AType(AType)>*/
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
{ /* Inline modelbuilder_base#AType#mtype (var_nt) on <var_nt:nullable AType(AType)> */
var252 = var_nt->attrs[COLOR_nit__modelbuilder_base__AType___mtype].val; /* _mtype on <var_nt:nullable AType(AType)> */
var250 = var252;
RET_LABEL251:(void)0;
}
}
if (unlikely(var250 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1058);
fatal_exit(1);
}
{
nit__modelize_property___ModelBuilder___check_visibility(var_modelbuilder, var_nt, var250, var_mpropdef); /* Direct call modelize_property#ModelBuilder#check_visibility on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
{
var253 = standard___standard__Int___Discrete__successor(var_i228, 1l);
}
var_i228 = var253;
} else {
goto BREAK_label254;
}
}
BREAK_label254: (void)0;
if (var_nsig == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1060);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ASignature#n_type (var_nsig) on <var_nsig:nullable ASignature> */
if (unlikely(var_nsig == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1699);
fatal_exit(1);
}
var257 = var_nsig->attrs[COLOR_nit__parser_nodes__ASignature___n_type].val; /* _n_type on <var_nsig:nullable ASignature> */
var255 = var257;
RET_LABEL256:(void)0;
}
}
var_nt258 = var255;
if (var_nt258 == NULL) {
var259 = 0; /* is null */
} else {
var259 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nt258,((val*)NULL)) on <var_nt258:nullable AType> */
var_other33 = ((val*)NULL);
{
var262 = ((short int(*)(val* self, val* p0))(var_nt258->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nt258, var_other33); /* == on <var_nt258:nullable AType(AType)>*/
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
{ /* Inline modelbuilder_base#AType#mtype (var_nt258) on <var_nt258:nullable AType(AType)> */
var266 = var_nt258->attrs[COLOR_nit__modelbuilder_base__AType___mtype].val; /* _mtype on <var_nt258:nullable AType(AType)> */
var264 = var266;
RET_LABEL265:(void)0;
}
}
if (unlikely(var264 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1061);
fatal_exit(1);
}
{
nit__modelize_property___ModelBuilder___check_visibility(var_modelbuilder, var_nt258, var264, var_mpropdef); /* Direct call modelize_property#ModelBuilder#check_visibility on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
} else {
}
{
nit__modelize_property___AMethPropdef___APropdef__check_repeated_types(self, var_modelbuilder); /* Direct call modelize_property#AMethPropdef#check_repeated_types on <self:AMethPropdef>*/
}
RET_LABEL:;
}
/* method modelize_property#AMethPropdef#check_repeated_types for (self: AMethPropdef, ModelBuilder) */
void nit__modelize_property___AMethPropdef___APropdef__check_repeated_types(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
short int var /* : Bool */;
val* var1 /* : nullable MPropDef */;
val* var3 /* : nullable MPropDef */;
short int var4 /* : Bool */;
short int var_ /* var : Bool */;
val* var5 /* : nullable ASignature */;
val* var7 /* : nullable ASignature */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : nullable ASignature */;
val* var16 /* : nullable ASignature */;
val* var17 /* : ANodes[AParam] */;
val* var19 /* : ANodes[AParam] */;
val* var_20 /* var : ANodes[AParam] */;
val* var21 /* : Iterator[ANode] */;
val* var_22 /* var : Iterator[AParam] */;
short int var23 /* : Bool */;
val* var24 /* : nullable Object */;
val* var_param /* var param: AParam */;
val* var25 /* : nullable AType */;
val* var27 /* : nullable AType */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var_other31 /* var other: nullable Object */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
val* var34 /* : nullable AType */;
val* var36 /* : nullable AType */;
static val* varonce;
val* var37 /* : String */;
char* var38 /* : NativeString */;
val* var39 /* : FlatString */;
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
val* var54 /* : TId */;
val* var56 /* : TId */;
val* var57 /* : String */;
val* var58 /* : nullable MPropDef */;
val* var60 /* : nullable MPropDef */;
val* var61 /* : String */;
val* var62 /* : String */;
val* var63 /* : nullable MPropDef */;
val* var65 /* : nullable MPropDef */;
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
val* var119 /* : FlatString */;
val* var121 /* : NativeArray[String] */;
static val* varonce120;
static val* varonce122;
val* var123 /* : String */;
char* var124 /* : NativeString */;
val* var125 /* : FlatString */;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : NativeString */;
val* var129 /* : FlatString */;
val* var130 /* : nullable MPropDef */;
val* var132 /* : nullable MPropDef */;
val* var133 /* : String */;
val* var134 /* : String */;
var_modelbuilder = p0;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var3 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1069);
fatal_exit(1);
} else {
var4 = nit___nit__MPropDef___is_intro(var1);
}
var_ = var4;
if (var4){
var = var_;
} else {
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (self) on <self:AMethPropdef> */
var7 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (var5 == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var5,((val*)NULL)) on <var5:nullable ASignature> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var5,var_other) on <var5:nullable ASignature(ASignature)> */
var13 = var5 == var_other;
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
var = var8;
}
if (var){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (self) on <self:AMethPropdef> */
var16 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
if (var14 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1071);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var14) on <var14:nullable ASignature> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1693);
fatal_exit(1);
}
var19 = var14->attrs[COLOR_nit__parser_nodes__ASignature___n_params].val; /* _n_params on <var14:nullable ASignature> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1693);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_20 = var17;
{
var21 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_20);
}
var_22 = var21;
for(;;) {
{
var23 = ((short int(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_22); /* is_ok on <var_22:Iterator[AParam]>*/
}
if (var23){
{
var24 = ((val*(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_22); /* item on <var_22:Iterator[AParam]>*/
}
var_param = var24;
{
{ /* Inline parser_nodes#AParam#n_type (var_param) on <var_param:AParam> */
var27 = var_param->attrs[COLOR_nit__parser_nodes__AParam___n_type].val; /* _n_type on <var_param:AParam> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
if (var25 == NULL) {
var28 = 0; /* is null */
} else {
var28 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var25,((val*)NULL)) on <var25:nullable AType> */
var_other31 = ((val*)NULL);
{
var32 = ((short int(*)(val* self, val* p0))(var25->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var25, var_other31); /* == on <var25:nullable AType(AType)>*/
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
{ /* Inline parser_nodes#AParam#n_type (var_param) on <var_param:AParam> */
var36 = var_param->attrs[COLOR_nit__parser_nodes__AParam___n_type].val; /* _n_type on <var_param:AParam> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
if (likely(varonce!=NULL)) {
var37 = varonce;
} else {
var38 = "useless-signature";
var39 = standard___standard__NativeString___to_s_with_length(var38, 17l);
var37 = var39;
varonce = var37;
}
if (unlikely(varonce40==NULL)) {
var41 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "Warning: useless type repetition on parameter `";
var45 = standard___standard__NativeString___to_s_with_length(var44, 47l);
var43 = var45;
varonce42 = var43;
}
((struct instance_standard__NativeArray*)var41)->values[0]=var43;
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = "` for redefined method `";
var49 = standard___standard__NativeString___to_s_with_length(var48, 24l);
var47 = var49;
varonce46 = var47;
}
((struct instance_standard__NativeArray*)var41)->values[2]=var47;
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = "`";
var53 = standard___standard__NativeString___to_s_with_length(var52, 1l);
var51 = var53;
varonce50 = var51;
}
((struct instance_standard__NativeArray*)var41)->values[4]=var51;
} else {
var41 = varonce40;
varonce40 = NULL;
}
{
{ /* Inline parser_nodes#AParam#n_id (var_param) on <var_param:AParam> */
var56 = var_param->attrs[COLOR_nit__parser_nodes__AParam___n_id].val; /* _n_id on <var_param:AParam> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1707);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
var57 = nit__lexer_work___Token___text(var54);
}
((struct instance_standard__NativeArray*)var41)->values[1]=var57;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var60 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var58 = var60;
RET_LABEL59:(void)0;
}
}
if (var58 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1073);
fatal_exit(1);
} else {
var61 = nit___nit__MPropDef___nit__model_base__MEntity__name(var58);
}
((struct instance_standard__NativeArray*)var41)->values[3]=var61;
{
var62 = ((val*(*)(val* self))(var41->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var41); /* native_to_s on <var41:NativeArray[String]>*/
}
varonce40 = var41;
{
nit___nit__ModelBuilder___advice(var_modelbuilder, var34, var37, var62); /* Direct call modelbuilder_base#ModelBuilder#advice on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_22); /* next on <var_22:Iterator[AParam]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_22); /* finish on <var_22:Iterator[AParam]>*/
}
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var65 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var63 = var65;
RET_LABEL64:(void)0;
}
}
if (var63 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1077);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mproperty (var63) on <var63:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var68 = var63->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var63:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var66) on <var66:MProperty(MMethod)> */
var71 = var66->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var66:MProperty(MMethod)> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1968);
fatal_exit(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
var_intro = var69;
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var74 = var_modelbuilder->attrs[COLOR_nit__modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 40);
fatal_exit(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
{
var75 = standard___standard__HashMap___standard__abstract_collection__MapRead__get_or_null(var72, var_intro);
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
cltype = type_nit__AMethPropdef.color;
idtype = type_nit__AMethPropdef.id;
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
var88 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var86 = var88;
RET_LABEL87:(void)0;
}
}
if (var86 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1081);
fatal_exit(1);
} else {
{ /* Inline modelize_property#ASignature#ret_type (var86) on <var86:nullable ASignature> */
if (unlikely(var86 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 669);
fatal_exit(1);
}
var91 = var86->attrs[COLOR_nit__modelize_property__ASignature___ret_type].val; /* _ret_type on <var86:nullable ASignature> */
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
var_other31 = ((val*)NULL);
{
var96 = ((short int(*)(val* self, val* p0))(var_ret_type->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ret_type, var_other31); /* == on <var_ret_type:nullable MType(MType)>*/
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
var101 = var_n_intro->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <var_n_intro:nullable APropdef(AMethPropdef)> */
var99 = var101;
RET_LABEL100:(void)0;
}
}
if (var99 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1082);
fatal_exit(1);
} else {
{ /* Inline modelize_property#ASignature#ret_type (var99) on <var99:nullable ASignature> */
if (unlikely(var99 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 669);
fatal_exit(1);
}
var104 = var99->attrs[COLOR_nit__modelize_property__ASignature___ret_type].val; /* _ret_type on <var99:nullable ASignature> */
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
var112 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var110 = var112;
RET_LABEL111:(void)0;
}
}
if (var110 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1083);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ASignature#n_type (var110) on <var110:nullable ASignature> */
if (unlikely(var110 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1699);
fatal_exit(1);
}
var115 = var110->attrs[COLOR_nit__parser_nodes__ASignature___n_type].val; /* _n_type on <var110:nullable ASignature> */
var113 = var115;
RET_LABEL114:(void)0;
}
}
if (likely(varonce116!=NULL)) {
var117 = varonce116;
} else {
var118 = "useless-signature";
var119 = standard___standard__NativeString___to_s_with_length(var118, 17l);
var117 = var119;
varonce116 = var117;
}
if (unlikely(varonce120==NULL)) {
var121 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce122!=NULL)) {
var123 = varonce122;
} else {
var124 = "Warning: useless return type repetition for redefined method `";
var125 = standard___standard__NativeString___to_s_with_length(var124, 62l);
var123 = var125;
varonce122 = var123;
}
((struct instance_standard__NativeArray*)var121)->values[0]=var123;
if (likely(varonce126!=NULL)) {
var127 = varonce126;
} else {
var128 = "`";
var129 = standard___standard__NativeString___to_s_with_length(var128, 1l);
var127 = var129;
varonce126 = var127;
}
((struct instance_standard__NativeArray*)var121)->values[2]=var127;
} else {
var121 = varonce120;
varonce120 = NULL;
}
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var132 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var130 = var132;
RET_LABEL131:(void)0;
}
}
if (var130 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1083);
fatal_exit(1);
} else {
var133 = nit___nit__MPropDef___nit__model_base__MEntity__name(var130);
}
((struct instance_standard__NativeArray*)var121)->values[1]=var133;
{
var134 = ((val*(*)(val* self))(var121->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var121); /* native_to_s on <var121:NativeArray[String]>*/
}
varonce120 = var121;
{
nit___nit__ModelBuilder___advice(var_modelbuilder, var113, var117, var134); /* Direct call modelbuilder_base#ModelBuilder#advice on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
RET_LABEL:;
}
/* method modelize_property#AMethid#return_is_mandatory for (self: AMethid): Bool */
short int nit__modelize_property___AMethid___return_is_mandatory(val* self) {
short int var /* : Bool */;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#AMethid#accept_special_last_parameter for (self: AMethid): Bool */
short int nit__modelize_property___AMethid___accept_special_last_parameter(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#AMethid#min_arity for (self: AMethid): Int */
long nit__modelize_property___AMethid___min_arity(val* self) {
long var /* : Int */;
var = 1l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#AMethid#is_binary for (self: AMethid): Bool */
short int nit__modelize_property___AMethid___is_binary(val* self) {
short int var /* : Bool */;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#AIdMethid#return_is_mandatory for (self: AIdMethid): Bool */
short int nit__modelize_property___AIdMethid___AMethid__return_is_mandatory(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#AIdMethid#accept_special_last_parameter for (self: AIdMethid): Bool */
short int nit__modelize_property___AIdMethid___AMethid__accept_special_last_parameter(val* self) {
short int var /* : Bool */;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#AIdMethid#min_arity for (self: AIdMethid): Int */
long nit__modelize_property___AIdMethid___AMethid__min_arity(val* self) {
long var /* : Int */;
var = 0l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#AIdMethid#is_binary for (self: AIdMethid): Bool */
short int nit__modelize_property___AIdMethid___AMethid__is_binary(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#ABraMethid#accept_special_last_parameter for (self: ABraMethid): Bool */
short int nit__modelize_property___ABraMethid___AMethid__accept_special_last_parameter(val* self) {
short int var /* : Bool */;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#ABraMethid#is_binary for (self: ABraMethid): Bool */
short int nit__modelize_property___ABraMethid___AMethid__is_binary(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#ABraassignMethid#return_is_mandatory for (self: ABraassignMethid): Bool */
short int nit__modelize_property___ABraassignMethid___AMethid__return_is_mandatory(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#ABraassignMethid#min_arity for (self: ABraassignMethid): Int */
long nit__modelize_property___ABraassignMethid___AMethid__min_arity(val* self) {
long var /* : Int */;
var = 2l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#ABraassignMethid#is_binary for (self: ABraassignMethid): Bool */
short int nit__modelize_property___ABraassignMethid___AMethid__is_binary(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#AAssignMethid#return_is_mandatory for (self: AAssignMethid): Bool */
short int nit__modelize_property___AAssignMethid___AMethid__return_is_mandatory(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#AAssignMethid#is_binary for (self: AAssignMethid): Bool */
short int nit__modelize_property___AAssignMethid___AMethid__is_binary(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#mtype for (self: AAttrPropdef): nullable MType */
val* nit__modelize_property___AAttrPropdef___mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___mtype].val; /* _mtype on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#mtype= for (self: AAttrPropdef, nullable MType) */
void nit__modelize_property___AAttrPropdef___mtype_61d(val* self, val* p0) {
self->attrs[COLOR_nit__modelize_property__AAttrPropdef___mtype].val = p0; /* _mtype on <self:AAttrPropdef> */
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
val* var_nid2 /* var nid2: TId */;
val* var6 /* : String */;
val* var_name /* var name: String */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
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
val* var29 /* : FlatString */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : FlatString */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : FlatString */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : FlatString */;
val* var42 /* : MClassKind */;
val* var44 /* : MClassKind */;
val* var45 /* : String */;
val* var46 /* : String */;
val* var47 /* : String */;
val* var48 /* : MAttribute */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
val* var52 /* : FlatString */;
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
val* var163 /* : FlatString */;
static val* varonce164;
val* var165 /* : String */;
char* var166 /* : NativeString */;
val* var167 /* : FlatString */;
val* var168 /* : nullable AAnnotation */;
val* var_atnoinit /* var atnoinit: nullable AAnnotation */;
short int var169 /* : Bool */;
short int var170 /* : Bool */;
short int var172 /* : Bool */;
short int var174 /* : Bool */;
static val* varonce175;
val* var176 /* : String */;
char* var177 /* : NativeString */;
val* var178 /* : FlatString */;
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
val* var192 /* : FlatString */;
short int var193 /* : Bool */;
short int var194 /* : Bool */;
short int var196 /* : Bool */;
short int var197 /* : Bool */;
static val* varonce198;
val* var199 /* : String */;
char* var200 /* : NativeString */;
val* var201 /* : FlatString */;
static val* varonce202;
val* var203 /* : String */;
char* var204 /* : NativeString */;
val* var205 /* : FlatString */;
static val* varonce206;
val* var207 /* : String */;
char* var208 /* : NativeString */;
val* var209 /* : FlatString */;
val* var210 /* : nullable AAnnotation */;
val* var_atlazy /* var atlazy: nullable AAnnotation */;
static val* varonce211;
val* var212 /* : String */;
char* var213 /* : NativeString */;
val* var214 /* : FlatString */;
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
val* var243 /* : FlatString */;
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
val* var256 /* : FlatString */;
short int var257 /* : Bool */;
short int var258 /* : Bool */;
short int var260 /* : Bool */;
short int var261 /* : Bool */;
static val* varonce262;
val* var263 /* : String */;
char* var264 /* : NativeString */;
val* var265 /* : FlatString */;
val* var268 /* : MAttribute */;
static val* varonce269;
val* var270 /* : String */;
char* var271 /* : NativeString */;
val* var272 /* : FlatString */;
val* var273 /* : String */;
val* var274 /* : Sys */;
val* var275 /* : MVisibility */;
val* var_mlazyprop /* var mlazyprop: MAttribute */;
val* var276 /* : MAttributeDef */;
val* var277 /* : Location */;
val* var279 /* : Location */;
val* var_mlazypropdef /* var mlazypropdef: MAttributeDef */;
static val* varonce281;
val* var282 /* : String */;
char* var283 /* : NativeString */;
val* var284 /* : FlatString */;
val* var285 /* : nullable AAnnotation */;
val* var_atreadonly /* var atreadonly: nullable AAnnotation */;
short int var286 /* : Bool */;
short int var287 /* : Bool */;
short int var289 /* : Bool */;
short int var290 /* : Bool */;
short int var291 /* : Bool */;
short int var293 /* : Bool */;
short int var294 /* : Bool */;
static val* varonce295;
val* var296 /* : String */;
char* var297 /* : NativeString */;
val* var298 /* : FlatString */;
short int var299 /* : Bool */;
short int var300 /* : Bool */;
short int var301 /* : Bool */;
short int var302 /* : Bool */;
short int var_303 /* var : Bool */;
short int var304 /* : Bool */;
short int var306 /* : Bool */;
short int var307 /* : Bool */;
short int var_308 /* var : Bool */;
short int var309 /* : Bool */;
short int var311 /* : Bool */;
short int var312 /* : Bool */;
static val* varonce313;
val* var314 /* : String */;
char* var315 /* : NativeString */;
val* var316 /* : FlatString */;
static val* varonce317;
val* var318 /* : String */;
char* var319 /* : NativeString */;
val* var320 /* : FlatString */;
static val* varonce321;
val* var322 /* : String */;
char* var323 /* : NativeString */;
val* var324 /* : FlatString */;
val* var325 /* : String */;
val* var_writename /* var writename: String */;
static val* varonce326;
val* var327 /* : String */;
char* var328 /* : NativeString */;
val* var329 /* : FlatString */;
val* var330 /* : nullable AAnnotation */;
val* var_atwritable /* var atwritable: nullable AAnnotation */;
short int var331 /* : Bool */;
short int var332 /* : Bool */;
short int var334 /* : Bool */;
short int var335 /* : Bool */;
val* var336 /* : ANodes[AExpr] */;
val* var338 /* : ANodes[AExpr] */;
short int var339 /* : Bool */;
short int var340 /* : Bool */;
val* var341 /* : String */;
val* var342 /* : nullable String */;
val* var343 /* : nullable MProperty */;
short int var344 /* : Bool */;
int cltype345;
int idtype346;
const char* var_class_name347;
val* var_mwriteprop /* var mwriteprop: nullable MMethod */;
val* var_nwkwredef /* var nwkwredef: nullable Token */;
short int var348 /* : Bool */;
short int var349 /* : Bool */;
short int var351 /* : Bool */;
short int var352 /* : Bool */;
val* var353 /* : nullable TKwredef */;
val* var355 /* : nullable TKwredef */;
short int var356 /* : Bool */;
short int var357 /* : Bool */;
short int var359 /* : Bool */;
short int var361 /* : Bool */;
short int var362 /* : Bool */;
short int var363 /* : Bool */;
short int var365 /* : Bool */;
short int var366 /* : Bool */;
val* var367 /* : nullable AVisibility */;
val* var369 /* : nullable AVisibility */;
val* var370 /* : MVisibility */;
val* var_mvisibility371 /* var mvisibility: nullable Object */;
val* var372 /* : Sys */;
val* var373 /* : MVisibility */;
val* var374 /* : MMethod */;
short int var375 /* : Bool */;
short int var376 /* : Bool */;
val* var377 /* : nullable MDeprecationInfo */;
val* var379 /* : nullable MDeprecationInfo */;
val* var381 /* : nullable Token */;
val* var382 /* : nullable TKwredef */;
val* var384 /* : nullable TKwredef */;
short int var385 /* : Bool */;
short int var386 /* : Bool */;
short int var387 /* : Bool */;
short int var388 /* : Bool */;
short int var390 /* : Bool */;
short int var391 /* : Bool */;
val* var392 /* : nullable AVisibility */;
val* var394 /* : nullable AVisibility */;
val* var395 /* : Map[MProperty, APropdef] */;
val* var397 /* : Map[MProperty, APropdef] */;
val* var398 /* : MMethodDef */;
val* var399 /* : Location */;
val* var401 /* : Location */;
val* var_mwritepropdef /* var mwritepropdef: MMethodDef */;
val* var403 /* : HashMap[MPropDef, APropdef] */;
val* var405 /* : HashMap[MPropDef, APropdef] */;
val* var406 /* : nullable MDoc */;
val* var408 /* : nullable MDoc */;
short int var410 /* : Bool */;
short int var411 /* : Bool */;
short int var413 /* : Bool */;
short int var414 /* : Bool */;
static val* varonce416;
val* var417 /* : String */;
char* var418 /* : NativeString */;
val* var419 /* : FlatString */;
val* var420 /* : nullable AAnnotation */;
val* var_atautoinit /* var atautoinit: nullable AAnnotation */;
short int var421 /* : Bool */;
short int var422 /* : Bool */;
short int var424 /* : Bool */;
short int var425 /* : Bool */;
short int var426 /* : Bool */;
short int var428 /* : Bool */;
static val* varonce429;
val* var430 /* : String */;
char* var431 /* : NativeString */;
val* var432 /* : FlatString */;
short int var433 /* : Bool */;
short int var434 /* : Bool */;
static val* varonce435;
val* var436 /* : String */;
char* var437 /* : NativeString */;
val* var438 /* : FlatString */;
short int var439 /* : Bool */;
short int var440 /* : Bool */;
static val* varonce441;
val* var442 /* : String */;
char* var443 /* : NativeString */;
val* var444 /* : FlatString */;
short int var445 /* : Bool */;
short int var446 /* : Bool */;
short int var448 /* : Bool */;
short int var450 /* : Bool */;
static val* varonce451;
val* var452 /* : String */;
char* var453 /* : NativeString */;
val* var454 /* : FlatString */;
static val* varonce455;
val* var456 /* : String */;
char* var457 /* : NativeString */;
val* var458 /* : FlatString */;
short int var459 /* : Bool */;
short int var460 /* : Bool */;
short int var462 /* : Bool */;
short int var463 /* : Bool */;
var_modelbuilder = p0;
var_mclassdef = p1;
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var2 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1311);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_nid2 = var3;
{
var6 = nit__lexer_work___Token___text(var_nid2);
}
var_name = var6;
if (likely(varonce!=NULL)) {
var7 = varonce;
} else {
var8 = "abstract";
var9 = standard___standard__NativeString___to_s_with_length(var8, 8l);
var7 = var9;
varonce = var7;
}
{
var10 = nit__annotation___Prod___get_single_annotation(self, var7, var_modelbuilder);
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
var19 = var_mclass->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var_mclass:MClass> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 436);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline model#MClassKind#need_init (var17) on <var17:MClassKind> */
var22 = var17->attrs[COLOR_nit__model__MClassKind___need_init].s; /* _need_init on <var17:MClassKind> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
var23 = !var20;
if (var23){
if (unlikely(varonce24==NULL)) {
var25 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "Error: attempt to define attribute `";
var29 = standard___standard__NativeString___to_s_with_length(var28, 36l);
var27 = var29;
varonce26 = var27;
}
((struct instance_standard__NativeArray*)var25)->values[0]=var27;
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "` in the ";
var33 = standard___standard__NativeString___to_s_with_length(var32, 9l);
var31 = var33;
varonce30 = var31;
}
((struct instance_standard__NativeArray*)var25)->values[2]=var31;
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = " `";
var37 = standard___standard__NativeString___to_s_with_length(var36, 2l);
var35 = var37;
varonce34 = var35;
}
((struct instance_standard__NativeArray*)var25)->values[4]=var35;
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "`.";
var41 = standard___standard__NativeString___to_s_with_length(var40, 2l);
var39 = var41;
varonce38 = var39;
}
((struct instance_standard__NativeArray*)var25)->values[6]=var39;
} else {
var25 = varonce24;
varonce24 = NULL;
}
((struct instance_standard__NativeArray*)var25)->values[1]=var_name;
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:MClass> */
var44 = var_mclass->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var_mclass:MClass> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 436);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
var45 = ((val*(*)(val* self))(var42->class->vft[COLOR_standard__string__Object__to_s]))(var42); /* to_s on <var42:MClassKind>*/
}
((struct instance_standard__NativeArray*)var25)->values[3]=var45;
{
var46 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_standard__string__Object__to_s]))(var_mclass); /* to_s on <var_mclass:MClass>*/
}
((struct instance_standard__NativeArray*)var25)->values[5]=var46;
{
var47 = ((val*(*)(val* self))(var25->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var25); /* native_to_s on <var25:NativeArray[String]>*/
}
varonce24 = var25;
{
nit___nit__ModelBuilder___error(var_modelbuilder, self, var47); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
var48 = NEW_nit__MAttribute(&type_nit__MAttribute);
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "_";
var52 = standard___standard__NativeString___to_s_with_length(var51, 1l);
var50 = var52;
varonce49 = var50;
}
{
var53 = ((val*(*)(val* self, val* p0))(var50->class->vft[COLOR_standard__string__String___43d]))(var50, var_name); /* + on <var50:String>*/
}
var54 = glob_sys;
{
var55 = nit__model_base___standard__Sys___private_visibility(var54);
}
{
((void(*)(val* self, val* p0))(var48->class->vft[COLOR_nit__model__MProperty__intro_mclassdef_61d]))(var48, var_mclassdef); /* intro_mclassdef= on <var48:MAttribute>*/
}
{
((void(*)(val* self, val* p0))(var48->class->vft[COLOR_nit__model__MProperty__name_61d]))(var48, var53); /* name= on <var48:MAttribute>*/
}
{
((void(*)(val* self, val* p0))(var48->class->vft[COLOR_nit__model__MProperty__visibility_61d]))(var48, var55); /* visibility= on <var48:MAttribute>*/
}
{
((void(*)(val* self))(var48->class->vft[COLOR_standard__kernel__Object__init]))(var48); /* init on <var48:MAttribute>*/
}
var_mprop = var48;
var56 = NEW_nit__MAttributeDef(&type_nit__MAttributeDef);
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AAttrPropdef> */
var59 = self->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <self:AAttrPropdef> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var56->class->vft[COLOR_nit__model__MPropDef__mclassdef_61d]))(var56, var_mclassdef); /* mclassdef= on <var56:MAttributeDef>*/
}
{
((void(*)(val* self, val* p0))(var56->class->vft[COLOR_nit__model__MPropDef__mproperty_61d]))(var56, var_mprop); /* mproperty= on <var56:MAttributeDef>*/
}
{
((void(*)(val* self, val* p0))(var56->class->vft[COLOR_nit__model__MPropDef__location_61d]))(var56, var57); /* location= on <var56:MAttributeDef>*/
}
{
((void(*)(val* self))(var56->class->vft[COLOR_standard__kernel__Object__init]))(var56); /* init on <var56:MAttributeDef>*/
}
var_mpropdef = var56;
/* <var_mpropdef:MAttributeDef> isa nullable MPROPDEF */
type_struct = self->type->resolution_table->types[COLOR_nullable__nit__modelize_property__APropdef__MPROPDEF];
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1180);
fatal_exit(1);
}
{
{ /* Inline modelize_property#APropdef#mpropdef= (self,var_mpropdef) on <self:AAttrPropdef> */
/* Covariant cast for argument 0 (mpropdef) <var_mpropdef:MAttributeDef> isa nullable MPROPDEF */
/* <var_mpropdef:MAttributeDef> isa nullable MPROPDEF */
type_struct65 = self->type->resolution_table->types[COLOR_nullable__nit__modelize_property__APropdef__MPROPDEF];
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 558);
fatal_exit(1);
}
self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val = var_mpropdef; /* _mpropdef on <self:AAttrPropdef> */
RET_LABEL61:(void)0;
}
}
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var69 = var_modelbuilder->attrs[COLOR_nit__modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var69 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 40);
fatal_exit(1);
}
var67 = var69;
RET_LABEL68:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var67, var_mpropdef, self); /* Direct call hash_collection#HashMap#[]= on <var67:HashMap[MPropDef, APropdef]>*/
}
} else {
}
var_readname = var_name;
{
var70 = nit___nit__ModelBuilder___try_get_mproperty_by_name(var_modelbuilder, var_nid2, var_mclassdef, var_readname);
}
/* <var70:nullable MProperty> isa nullable MMethod */
cltype72 = type_nullable__nit__MMethod.color;
idtype73 = type_nullable__nit__MMethod.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1185);
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
var83 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AAttrPropdef> */
var81 = var83;
RET_LABEL82:(void)0;
}
}
{
var84 = nit__modelize_property___APropdef___new_property_visibility(self, var_modelbuilder, var_mclassdef, var81);
}
var_mvisibility = var84;
var85 = NEW_nit__MMethod(&type_nit__MMethod);
{
((void(*)(val* self, val* p0))(var85->class->vft[COLOR_nit__model__MProperty__intro_mclassdef_61d]))(var85, var_mclassdef); /* intro_mclassdef= on <var85:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var85->class->vft[COLOR_nit__model__MProperty__name_61d]))(var85, var_readname); /* name= on <var85:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var85->class->vft[COLOR_nit__model__MProperty__visibility_61d]))(var85, var_mvisibility); /* visibility= on <var85:MMethod>*/
}
{
((void(*)(val* self))(var85->class->vft[COLOR_standard__kernel__Object__init]))(var85); /* init on <var85:MMethod>*/
}
var_mreadprop = var85;
{
{ /* Inline parser_nodes#ADefinition#n_kwredef (self) on <self:AAttrPropdef> */
var88 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AAttrPropdef> */
var86 = var88;
RET_LABEL87:(void)0;
}
}
{
var89 = nit__modelize_property___APropdef___check_redef_keyword(self, var_modelbuilder, var_mclassdef, var86, 0, var_mreadprop);
}
var90 = !var89;
if (var90){
goto RET_LABEL;
} else {
}
} else {
{
{ /* Inline parser_nodes#ADefinition#n_kwredef (self) on <self:AAttrPropdef> */
var93 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AAttrPropdef> */
var91 = var93;
RET_LABEL92:(void)0;
}
}
{
var94 = nit__modelize_property___APropdef___check_redef_keyword(self, var_modelbuilder, var_mclassdef, var91, 1, var_mreadprop);
}
var95 = !var94;
if (var95){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ADefinition#n_visibility (self) on <self:AAttrPropdef> */
var98 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AAttrPropdef> */
var96 = var98;
RET_LABEL97:(void)0;
}
}
{
nit__modelize_property___APropdef___check_redef_property_visibility(self, var_modelbuilder, var96, var_mreadprop); /* Direct call modelize_property#APropdef#check_redef_property_visibility on <self:AAttrPropdef>*/
}
}
{
{ /* Inline modelize_property#MClassDef#mprop2npropdef (var_mclassdef) on <var_mclassdef:MClassDef> */
var101 = var_mclassdef->attrs[COLOR_nit__modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <var_mclassdef:MClassDef> */
if (unlikely(var101 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 505);
fatal_exit(1);
}
var99 = var101;
RET_LABEL100:(void)0;
}
}
{
((void(*)(val* self, val* p0, val* p1))((((long)var99&3)?class_info[((long)var99&3)]:var99->class)->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var99, var_mreadprop, self); /* []= on <var99:Map[MProperty, APropdef]>*/
}
var102 = NEW_nit__MMethodDef(&type_nit__MMethodDef);
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AAttrPropdef> */
var105 = self->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <self:AAttrPropdef> */
if (unlikely(var105 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var103 = var105;
RET_LABEL104:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var102->class->vft[COLOR_nit__model__MPropDef__mclassdef_61d]))(var102, var_mclassdef); /* mclassdef= on <var102:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var102->class->vft[COLOR_nit__model__MPropDef__mproperty_61d]))(var102, var_mreadprop); /* mproperty= on <var102:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var102->class->vft[COLOR_nit__model__MPropDef__location_61d]))(var102, var103); /* location= on <var102:MMethodDef>*/
}
{
((void(*)(val* self))(var102->class->vft[COLOR_standard__kernel__Object__init]))(var102); /* init on <var102:MMethodDef>*/
}
var_mreadpropdef = var102;
{
{ /* Inline modelize_property#AAttrPropdef#mreadpropdef= (self,var_mreadpropdef) on <self:AAttrPropdef> */
self->attrs[COLOR_nit__modelize_property__AAttrPropdef___mreadpropdef].val = var_mreadpropdef; /* _mreadpropdef on <self:AAttrPropdef> */
RET_LABEL106:(void)0;
}
}
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var109 = var_modelbuilder->attrs[COLOR_nit__modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var109 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 40);
fatal_exit(1);
}
var107 = var109;
RET_LABEL108:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var107, var_mreadpropdef, self); /* Direct call hash_collection#HashMap#[]= on <var107:HashMap[MPropDef, APropdef]>*/
}
{
nit__modelize_property___APropdef___set_doc(self, var_mreadpropdef, var_modelbuilder); /* Direct call modelize_property#APropdef#set_doc on <self:AAttrPropdef>*/
}
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var112 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
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
var117 = ((short int(*)(val* self, val* p0))(var110->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var110, var_other116); /* == on <var110:nullable MAttributeDef(MAttributeDef)>*/
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
var121 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var119 = var121;
RET_LABEL120:(void)0;
}
}
{
{ /* Inline mdoc#MEntity#mdoc (var_mreadpropdef) on <var_mreadpropdef:MMethodDef> */
var124 = var_mreadpropdef->attrs[COLOR_nit__mdoc__MEntity___mdoc].val; /* _mdoc on <var_mreadpropdef:MMethodDef> */
var122 = var124;
RET_LABEL123:(void)0;
}
}
if (var119 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1200);
fatal_exit(1);
} else {
{ /* Inline mdoc#MEntity#mdoc= (var119,var122) on <var119:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var119 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mdoc, 37);
fatal_exit(1);
}
var119->attrs[COLOR_nit__mdoc__MEntity___mdoc].val = var122; /* _mdoc on <var119:nullable MPropDef(nullable MAttributeDef)> */
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
var129 = ((short int(*)(val* self, val* p0))(var_atabstract->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_atabstract, var_other116); /* == on <var_atabstract:nullable AAnnotation(AAnnotation)>*/
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
var_mreadpropdef->attrs[COLOR_nit__model__MMethodDef___is_abstract].s = 1; /* _is_abstract on <var_mreadpropdef:MMethodDef> */
RET_LABEL131:(void)0;
}
}
} else {
}
{
{ /* Inline parser_nodes#AAttrPropdef#n_expr (self) on <self:AAttrPropdef> */
var135 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <self:AAttrPropdef> */
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
var139 = ((short int(*)(val* self, val* p0))(var133->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var133, var_other116); /* == on <var133:nullable AExpr(AExpr)>*/
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
var143 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_block].val; /* _n_block on <self:AAttrPropdef> */
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
var147 = ((short int(*)(val* self, val* p0))(var141->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var141, var_other116); /* == on <var141:nullable AExpr(AExpr)>*/
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
self->attrs[COLOR_nit__modelize_property__AAttrPropdef___has_value].s = var132; /* _has_value on <self:AAttrPropdef> */
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
var154 = ((short int(*)(val* self, val* p0))(var_atabstract->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_atabstract, var_other116); /* == on <var_atabstract:nullable AAnnotation(AAnnotation)>*/
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
var159 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <self:AAttrPropdef> */
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
var163 = standard___standard__NativeString___to_s_with_length(var162, 58l);
var161 = var163;
varonce160 = var161;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_atabstract, var161); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
if (likely(varonce164!=NULL)) {
var165 = varonce164;
} else {
var166 = "noinit";
var167 = standard___standard__NativeString___to_s_with_length(var166, 6l);
var165 = var167;
varonce164 = var165;
}
{
var168 = nit__annotation___Prod___get_single_annotation(self, var165, var_modelbuilder);
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
var178 = standard___standard__NativeString___to_s_with_length(var177, 10l);
var176 = var178;
varonce175 = var176;
}
{
var179 = nit__annotation___Prod___get_single_annotation(self, var176, var_modelbuilder);
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
var183 = ((short int(*)(val* self, val* p0))(var_atnoinit->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_atnoinit, var_other116); /* == on <var_atnoinit:nullable AAnnotation(AAnnotation)>*/
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
self->attrs[COLOR_nit__modelize_property__AAttrPropdef___noinit].s = 1; /* _noinit on <self:AAttrPropdef> */
RET_LABEL185:(void)0;
}
}
{
{ /* Inline modelize_property#AAttrPropdef#has_value (self) on <self:AAttrPropdef> */
var188 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <self:AAttrPropdef> */
var186 = var188;
RET_LABEL187:(void)0;
}
}
if (var186){
if (likely(varonce189!=NULL)) {
var190 = varonce189;
} else {
var191 = "Error: `noautoinit` attributes cannot have an initial value.";
var192 = standard___standard__NativeString___to_s_with_length(var191, 60l);
var190 = var192;
varonce189 = var190;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_atnoinit, var190); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
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
var196 = ((short int(*)(val* self, val* p0))(var_atabstract->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_atabstract, var_other116); /* == on <var_atabstract:nullable AAnnotation(AAnnotation)>*/
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
var201 = standard___standard__NativeString___to_s_with_length(var200, 18l);
var199 = var201;
varonce198 = var199;
}
if (likely(varonce202!=NULL)) {
var203 = varonce202;
} else {
var204 = "Warning: superfluous `noautoinit` on abstract attribute.";
var205 = standard___standard__NativeString___to_s_with_length(var204, 56l);
var203 = var205;
varonce202 = var203;
}
{
nit___nit__ModelBuilder___warning(var_modelbuilder, var_atnoinit, var199, var203); /* Direct call modelbuilder_base#ModelBuilder#warning on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
} else {
}
if (likely(varonce206!=NULL)) {
var207 = varonce206;
} else {
var208 = "lazy";
var209 = standard___standard__NativeString___to_s_with_length(var208, 4l);
var207 = var209;
varonce206 = var207;
}
{
var210 = nit__annotation___Prod___get_single_annotation(self, var207, var_modelbuilder);
}
var_atlazy = var210;
if (likely(varonce211!=NULL)) {
var212 = varonce211;
} else {
var213 = "lateinit";
var214 = standard___standard__NativeString___to_s_with_length(var213, 8l);
var212 = var214;
varonce211 = var212;
}
{
var215 = nit__annotation___Prod___get_single_annotation(self, var212, var_modelbuilder);
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
var220 = ((short int(*)(val* self, val* p0))(var_atlazy->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_atlazy, var_other116); /* == on <var_atlazy:nullable AAnnotation(AAnnotation)>*/
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
var226 = ((short int(*)(val* self, val* p0))(var_atlateinit->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_atlateinit, var_other116); /* == on <var_atlateinit:nullable AAnnotation(AAnnotation)>*/
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
var232 = ((short int(*)(val* self, val* p0))(var_atlazy->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_atlazy, var_other116); /* == on <var_atlazy:nullable AAnnotation(AAnnotation)>*/
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
var238 = ((short int(*)(val* self, val* p0))(var_atlateinit->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_atlateinit, var_other116); /* == on <var_atlateinit:nullable AAnnotation(AAnnotation)>*/
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
var243 = standard___standard__NativeString___to_s_with_length(var242, 43l);
var241 = var243;
varonce240 = var241;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_atlazy, var241); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property#AAttrPropdef#has_value (self) on <self:AAttrPropdef> */
var246 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <self:AAttrPropdef> */
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
var251 = ((short int(*)(val* self, val* p0))(var_atlazy->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_atlazy, var_other116); /* == on <var_atlazy:nullable AAnnotation(AAnnotation)>*/
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
var256 = standard___standard__NativeString___to_s_with_length(var255, 38l);
var254 = var256;
varonce253 = var254;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_atlazy, var254); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
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
var260 = ((short int(*)(val* self, val* p0))(var_atlateinit->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_atlateinit, var_other116); /* == on <var_atlateinit:nullable AAnnotation(AAnnotation)>*/
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
var265 = standard___standard__NativeString___to_s_with_length(var264, 42l);
var263 = var265;
varonce262 = var263;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_atlateinit, var263); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
}
{
{ /* Inline modelize_property#AAttrPropdef#has_value= (self,1) on <self:AAttrPropdef> */
self->attrs[COLOR_nit__modelize_property__AAttrPropdef___has_value].s = 1; /* _has_value on <self:AAttrPropdef> */
RET_LABEL266:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property#AAttrPropdef#is_lazy= (self,1) on <self:AAttrPropdef> */
self->attrs[COLOR_nit__modelize_property__AAttrPropdef___is_lazy].s = 1; /* _is_lazy on <self:AAttrPropdef> */
RET_LABEL267:(void)0;
}
}
var268 = NEW_nit__MAttribute(&type_nit__MAttribute);
if (likely(varonce269!=NULL)) {
var270 = varonce269;
} else {
var271 = "lazy _";
var272 = standard___standard__NativeString___to_s_with_length(var271, 6l);
var270 = var272;
varonce269 = var270;
}
{
var273 = ((val*(*)(val* self, val* p0))(var270->class->vft[COLOR_standard__string__String___43d]))(var270, var_name); /* + on <var270:String>*/
}
var274 = glob_sys;
{
var275 = nit__model_base___standard__Sys___none_visibility(var274);
}
{
((void(*)(val* self, val* p0))(var268->class->vft[COLOR_nit__model__MProperty__intro_mclassdef_61d]))(var268, var_mclassdef); /* intro_mclassdef= on <var268:MAttribute>*/
}
{
((void(*)(val* self, val* p0))(var268->class->vft[COLOR_nit__model__MProperty__name_61d]))(var268, var273); /* name= on <var268:MAttribute>*/
}
{
((void(*)(val* self, val* p0))(var268->class->vft[COLOR_nit__model__MProperty__visibility_61d]))(var268, var275); /* visibility= on <var268:MAttribute>*/
}
{
((void(*)(val* self))(var268->class->vft[COLOR_standard__kernel__Object__init]))(var268); /* init on <var268:MAttribute>*/
}
var_mlazyprop = var268;
var276 = NEW_nit__MAttributeDef(&type_nit__MAttributeDef);
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AAttrPropdef> */
var279 = self->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <self:AAttrPropdef> */
if (unlikely(var279 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var277 = var279;
RET_LABEL278:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var276->class->vft[COLOR_nit__model__MPropDef__mclassdef_61d]))(var276, var_mclassdef); /* mclassdef= on <var276:MAttributeDef>*/
}
{
((void(*)(val* self, val* p0))(var276->class->vft[COLOR_nit__model__MPropDef__mproperty_61d]))(var276, var_mlazyprop); /* mproperty= on <var276:MAttributeDef>*/
}
{
((void(*)(val* self, val* p0))(var276->class->vft[COLOR_nit__model__MPropDef__location_61d]))(var276, var277); /* location= on <var276:MAttributeDef>*/
}
{
((void(*)(val* self))(var276->class->vft[COLOR_standard__kernel__Object__init]))(var276); /* init on <var276:MAttributeDef>*/
}
var_mlazypropdef = var276;
{
{ /* Inline modelize_property#AAttrPropdef#mlazypropdef= (self,var_mlazypropdef) on <self:AAttrPropdef> */
self->attrs[COLOR_nit__modelize_property__AAttrPropdef___mlazypropdef].val = var_mlazypropdef; /* _mlazypropdef on <self:AAttrPropdef> */
RET_LABEL280:(void)0;
}
}
} else {
}
if (likely(varonce281!=NULL)) {
var282 = varonce281;
} else {
var283 = "readonly";
var284 = standard___standard__NativeString___to_s_with_length(var283, 8l);
var282 = var284;
varonce281 = var282;
}
{
var285 = nit__annotation___Prod___get_single_annotation(self, var282, var_modelbuilder);
}
var_atreadonly = var285;
if (var_atreadonly == NULL) {
var286 = 0; /* is null */
} else {
var286 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atreadonly,((val*)NULL)) on <var_atreadonly:nullable AAnnotation> */
var_other116 = ((val*)NULL);
{
var289 = ((short int(*)(val* self, val* p0))(var_atreadonly->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_atreadonly, var_other116); /* == on <var_atreadonly:nullable AAnnotation(AAnnotation)>*/
}
var290 = !var289;
var287 = var290;
goto RET_LABEL288;
RET_LABEL288:(void)0;
}
var286 = var287;
}
if (var286){
{
{ /* Inline modelize_property#AAttrPropdef#has_value (self) on <self:AAttrPropdef> */
var293 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <self:AAttrPropdef> */
var291 = var293;
RET_LABEL292:(void)0;
}
}
var294 = !var291;
if (var294){
if (likely(varonce295!=NULL)) {
var296 = varonce295;
} else {
var297 = "Error: `readonly` attributes need a value.";
var298 = standard___standard__NativeString___to_s_with_length(var297, 42l);
var296 = var298;
varonce295 = var296;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_atreadonly, var296); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
goto RET_LABEL;
} else {
}
{
var301 = nit___nit__MClassDef___is_intro(var_mclassdef);
}
var302 = !var301;
var_303 = var302;
if (var302){
{
{ /* Inline modelize_property#AAttrPropdef#has_value (self) on <self:AAttrPropdef> */
var306 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <self:AAttrPropdef> */
var304 = var306;
RET_LABEL305:(void)0;
}
}
var307 = !var304;
var300 = var307;
} else {
var300 = var_303;
}
var_308 = var300;
if (var300){
{
{ /* Inline modelize_property#AAttrPropdef#noinit (self) on <self:AAttrPropdef> */
var311 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___noinit].s; /* _noinit on <self:AAttrPropdef> */
var309 = var311;
RET_LABEL310:(void)0;
}
}
var312 = !var309;
var299 = var312;
} else {
var299 = var_308;
}
if (var299){
if (likely(varonce313!=NULL)) {
var314 = varonce313;
} else {
var315 = "attr-in-refinement";
var316 = standard___standard__NativeString___to_s_with_length(var315, 18l);
var314 = var316;
varonce313 = var314;
}
if (likely(varonce317!=NULL)) {
var318 = varonce317;
} else {
var319 = "Warning: attributes in refinement need a value or `noautoinit`.";
var320 = standard___standard__NativeString___to_s_with_length(var319, 63l);
var318 = var320;
varonce317 = var318;
}
{
nit___nit__ModelBuilder___advice(var_modelbuilder, self, var314, var318); /* Direct call modelbuilder_base#ModelBuilder#advice on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
if (likely(varonce321!=NULL)) {
var322 = varonce321;
} else {
var323 = "=";
var324 = standard___standard__NativeString___to_s_with_length(var323, 1l);
var322 = var324;
varonce321 = var322;
}
{
var325 = ((val*(*)(val* self, val* p0))(var_name->class->vft[COLOR_standard__string__String___43d]))(var_name, var322); /* + on <var_name:String>*/
}
var_writename = var325;
if (likely(varonce326!=NULL)) {
var327 = varonce326;
} else {
var328 = "writable";
var329 = standard___standard__NativeString___to_s_with_length(var328, 8l);
var327 = var329;
varonce326 = var327;
}
{
var330 = nit__annotation___Prod___get_single_annotation(self, var327, var_modelbuilder);
}
var_atwritable = var330;
if (var_atwritable == NULL) {
var331 = 0; /* is null */
} else {
var331 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atwritable,((val*)NULL)) on <var_atwritable:nullable AAnnotation> */
var_other116 = ((val*)NULL);
{
var334 = ((short int(*)(val* self, val* p0))(var_atwritable->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_atwritable, var_other116); /* == on <var_atwritable:nullable AAnnotation(AAnnotation)>*/
}
var335 = !var334;
var332 = var335;
goto RET_LABEL333;
RET_LABEL333:(void)0;
}
var331 = var332;
}
if (var331){
{
{ /* Inline parser_nodes#AAnnotation#n_args (var_atwritable) on <var_atwritable:nullable AAnnotation(AAnnotation)> */
var338 = var_atwritable->attrs[COLOR_nit__parser_nodes__AAnnotation___n_args].val; /* _n_args on <var_atwritable:nullable AAnnotation(AAnnotation)> */
if (unlikely(var338 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2988);
fatal_exit(1);
}
var336 = var338;
RET_LABEL337:(void)0;
}
}
{
var339 = nit___nit__ANodes___standard__abstract_collection__Collection__is_empty(var336);
}
var340 = !var339;
if (var340){
{
var342 = nit__annotation___AAnnotation___arg_as_id(var_atwritable, var_modelbuilder);
}
if (var342!=NULL) {
var341 = var342;
} else {
var341 = var_writename;
}
var_writename = var341;
} else {
}
} else {
}
{
var343 = nit___nit__ModelBuilder___try_get_mproperty_by_name(var_modelbuilder, var_nid2, var_mclassdef, var_writename);
}
/* <var343:nullable MProperty> isa nullable MMethod */
cltype345 = type_nullable__nit__MMethod.color;
idtype346 = type_nullable__nit__MMethod.id;
if(var343 == NULL) {
var344 = 1;
} else {
if(cltype345 >= var343->type->table_size) {
var344 = 0;
} else {
var344 = var343->type->type_table[cltype345] == idtype346;
}
}
if (unlikely(!var344)) {
var_class_name347 = var343 == NULL ? "null" : var343->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MMethod", var_class_name347);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1265);
fatal_exit(1);
}
var_mwriteprop = var343;
var_nwkwredef = ((val*)NULL);
if (var_atwritable == NULL) {
var348 = 0; /* is null */
} else {
var348 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atwritable,((val*)NULL)) on <var_atwritable:nullable AAnnotation> */
var_other116 = ((val*)NULL);
{
var351 = ((short int(*)(val* self, val* p0))(var_atwritable->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_atwritable, var_other116); /* == on <var_atwritable:nullable AAnnotation(AAnnotation)>*/
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
{ /* Inline parser_nodes#ADefinition#n_kwredef (var_atwritable) on <var_atwritable:nullable AAnnotation(AAnnotation)> */
var355 = var_atwritable->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <var_atwritable:nullable AAnnotation(AAnnotation)> */
var353 = var355;
RET_LABEL354:(void)0;
}
}
var_nwkwredef = var353;
} else {
}
if (var_mwriteprop == NULL) {
var356 = 1; /* is null */
} else {
var356 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mwriteprop,((val*)NULL)) on <var_mwriteprop:nullable MMethod> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mwriteprop,var_other) on <var_mwriteprop:nullable MMethod(MMethod)> */
var361 = var_mwriteprop == var_other;
var359 = var361;
goto RET_LABEL360;
RET_LABEL360:(void)0;
}
}
var357 = var359;
goto RET_LABEL358;
RET_LABEL358:(void)0;
}
var356 = var357;
}
if (var356){
if (var_atwritable == NULL) {
var362 = 0; /* is null */
} else {
var362 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atwritable,((val*)NULL)) on <var_atwritable:nullable AAnnotation> */
var_other116 = ((val*)NULL);
{
var365 = ((short int(*)(val* self, val* p0))(var_atwritable->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_atwritable, var_other116); /* == on <var_atwritable:nullable AAnnotation(AAnnotation)>*/
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
{ /* Inline parser_nodes#ADefinition#n_visibility (var_atwritable) on <var_atwritable:nullable AAnnotation(AAnnotation)> */
var369 = var_atwritable->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <var_atwritable:nullable AAnnotation(AAnnotation)> */
var367 = var369;
RET_LABEL368:(void)0;
}
}
{
var370 = nit__modelize_property___APropdef___new_property_visibility(self, var_modelbuilder, var_mclassdef, var367);
}
var_mvisibility371 = var370;
} else {
var372 = glob_sys;
{
var373 = nit__model_base___standard__Sys___private_visibility(var372);
}
var_mvisibility371 = var373;
}
var374 = NEW_nit__MMethod(&type_nit__MMethod);
{
((void(*)(val* self, val* p0))(var374->class->vft[COLOR_nit__model__MProperty__intro_mclassdef_61d]))(var374, var_mclassdef); /* intro_mclassdef= on <var374:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var374->class->vft[COLOR_nit__model__MProperty__name_61d]))(var374, var_writename); /* name= on <var374:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var374->class->vft[COLOR_nit__model__MProperty__visibility_61d]))(var374, var_mvisibility371); /* visibility= on <var374:MMethod>*/
}
{
((void(*)(val* self))(var374->class->vft[COLOR_standard__kernel__Object__init]))(var374); /* init on <var374:MMethod>*/
}
var_mwriteprop = var374;
{
var375 = nit__modelize_property___APropdef___check_redef_keyword(self, var_modelbuilder, var_mclassdef, var_nwkwredef, 0, var_mwriteprop);
}
var376 = !var375;
if (var376){
goto RET_LABEL;
} else {
}
{
{ /* Inline mdoc#MEntity#deprecation (var_mreadprop) on <var_mreadprop:nullable MMethod(MMethod)> */
var379 = var_mreadprop->attrs[COLOR_nit__mdoc__MEntity___deprecation].val; /* _deprecation on <var_mreadprop:nullable MMethod(MMethod)> */
var377 = var379;
RET_LABEL378:(void)0;
}
}
{
{ /* Inline mdoc#MEntity#deprecation= (var_mwriteprop,var377) on <var_mwriteprop:nullable MMethod(MMethod)> */
var_mwriteprop->attrs[COLOR_nit__mdoc__MEntity___deprecation].val = var377; /* _deprecation on <var_mwriteprop:nullable MMethod(MMethod)> */
RET_LABEL380:(void)0;
}
}
} else {
if (var_nwkwredef!=NULL) {
var381 = var_nwkwredef;
} else {
{
{ /* Inline parser_nodes#ADefinition#n_kwredef (self) on <self:AAttrPropdef> */
var384 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AAttrPropdef> */
var382 = var384;
RET_LABEL383:(void)0;
}
}
var381 = var382;
}
{
var385 = nit__modelize_property___APropdef___check_redef_keyword(self, var_modelbuilder, var_mclassdef, var381, 1, var_mwriteprop);
}
var386 = !var385;
if (var386){
goto RET_LABEL;
} else {
}
if (var_atwritable == NULL) {
var387 = 0; /* is null */
} else {
var387 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atwritable,((val*)NULL)) on <var_atwritable:nullable AAnnotation> */
var_other116 = ((val*)NULL);
{
var390 = ((short int(*)(val* self, val* p0))(var_atwritable->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_atwritable, var_other116); /* == on <var_atwritable:nullable AAnnotation(AAnnotation)>*/
}
var391 = !var390;
var388 = var391;
goto RET_LABEL389;
RET_LABEL389:(void)0;
}
var387 = var388;
}
if (var387){
{
{ /* Inline parser_nodes#ADefinition#n_visibility (var_atwritable) on <var_atwritable:nullable AAnnotation(AAnnotation)> */
var394 = var_atwritable->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <var_atwritable:nullable AAnnotation(AAnnotation)> */
var392 = var394;
RET_LABEL393:(void)0;
}
}
{
nit__modelize_property___APropdef___check_redef_property_visibility(self, var_modelbuilder, var392, var_mwriteprop); /* Direct call modelize_property#APropdef#check_redef_property_visibility on <self:AAttrPropdef>*/
}
} else {
}
}
{
{ /* Inline modelize_property#MClassDef#mprop2npropdef (var_mclassdef) on <var_mclassdef:MClassDef> */
var397 = var_mclassdef->attrs[COLOR_nit__modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <var_mclassdef:MClassDef> */
if (unlikely(var397 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 505);
fatal_exit(1);
}
var395 = var397;
RET_LABEL396:(void)0;
}
}
{
((void(*)(val* self, val* p0, val* p1))((((long)var395&3)?class_info[((long)var395&3)]:var395->class)->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var395, var_mwriteprop, self); /* []= on <var395:Map[MProperty, APropdef]>*/
}
var398 = NEW_nit__MMethodDef(&type_nit__MMethodDef);
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AAttrPropdef> */
var401 = self->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <self:AAttrPropdef> */
if (unlikely(var401 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var399 = var401;
RET_LABEL400:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var398->class->vft[COLOR_nit__model__MPropDef__mclassdef_61d]))(var398, var_mclassdef); /* mclassdef= on <var398:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var398->class->vft[COLOR_nit__model__MPropDef__mproperty_61d]))(var398, var_mwriteprop); /* mproperty= on <var398:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var398->class->vft[COLOR_nit__model__MPropDef__location_61d]))(var398, var399); /* location= on <var398:MMethodDef>*/
}
{
((void(*)(val* self))(var398->class->vft[COLOR_standard__kernel__Object__init]))(var398); /* init on <var398:MMethodDef>*/
}
var_mwritepropdef = var398;
{
{ /* Inline modelize_property#AAttrPropdef#mwritepropdef= (self,var_mwritepropdef) on <self:AAttrPropdef> */
self->attrs[COLOR_nit__modelize_property__AAttrPropdef___mwritepropdef].val = var_mwritepropdef; /* _mwritepropdef on <self:AAttrPropdef> */
RET_LABEL402:(void)0;
}
}
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var405 = var_modelbuilder->attrs[COLOR_nit__modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var405 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 40);
fatal_exit(1);
}
var403 = var405;
RET_LABEL404:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var403, var_mwritepropdef, self); /* Direct call hash_collection#HashMap#[]= on <var403:HashMap[MPropDef, APropdef]>*/
}
{
{ /* Inline mdoc#MEntity#mdoc (var_mreadpropdef) on <var_mreadpropdef:MMethodDef> */
var408 = var_mreadpropdef->attrs[COLOR_nit__mdoc__MEntity___mdoc].val; /* _mdoc on <var_mreadpropdef:MMethodDef> */
var406 = var408;
RET_LABEL407:(void)0;
}
}
{
{ /* Inline mdoc#MEntity#mdoc= (var_mwritepropdef,var406) on <var_mwritepropdef:MMethodDef> */
var_mwritepropdef->attrs[COLOR_nit__mdoc__MEntity___mdoc].val = var406; /* _mdoc on <var_mwritepropdef:MMethodDef> */
RET_LABEL409:(void)0;
}
}
if (var_atabstract == NULL) {
var410 = 0; /* is null */
} else {
var410 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atabstract,((val*)NULL)) on <var_atabstract:nullable AAnnotation> */
var_other116 = ((val*)NULL);
{
var413 = ((short int(*)(val* self, val* p0))(var_atabstract->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_atabstract, var_other116); /* == on <var_atabstract:nullable AAnnotation(AAnnotation)>*/
}
var414 = !var413;
var411 = var414;
goto RET_LABEL412;
RET_LABEL412:(void)0;
}
var410 = var411;
}
if (var410){
{
{ /* Inline model#MMethodDef#is_abstract= (var_mwritepropdef,1) on <var_mwritepropdef:MMethodDef> */
var_mwritepropdef->attrs[COLOR_nit__model__MMethodDef___is_abstract].s = 1; /* _is_abstract on <var_mwritepropdef:MMethodDef> */
RET_LABEL415:(void)0;
}
}
} else {
}
if (likely(varonce416!=NULL)) {
var417 = varonce416;
} else {
var418 = "autoinit";
var419 = standard___standard__NativeString___to_s_with_length(var418, 8l);
var417 = var419;
varonce416 = var417;
}
{
var420 = nit__annotation___Prod___get_single_annotation(self, var417, var_modelbuilder);
}
var_atautoinit = var420;
if (var_atautoinit == NULL) {
var421 = 0; /* is null */
} else {
var421 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atautoinit,((val*)NULL)) on <var_atautoinit:nullable AAnnotation> */
var_other116 = ((val*)NULL);
{
var424 = ((short int(*)(val* self, val* p0))(var_atautoinit->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_atautoinit, var_other116); /* == on <var_atautoinit:nullable AAnnotation(AAnnotation)>*/
}
var425 = !var424;
var422 = var425;
goto RET_LABEL423;
RET_LABEL423:(void)0;
}
var421 = var422;
}
if (var421){
{
{ /* Inline modelize_property#AAttrPropdef#has_value (self) on <self:AAttrPropdef> */
var428 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <self:AAttrPropdef> */
var426 = var428;
RET_LABEL427:(void)0;
}
}
if (var426){
if (likely(varonce429!=NULL)) {
var430 = varonce429;
} else {
var431 = "Error: `autoinit` attributes cannot have an initial value.";
var432 = standard___standard__NativeString___to_s_with_length(var431, 58l);
var430 = var432;
varonce429 = var430;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_atautoinit, var430); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
{
var433 = nit___nit__MPropDef___is_intro(var_mwritepropdef);
}
var434 = !var433;
if (var434){
if (likely(varonce435!=NULL)) {
var436 = varonce435;
} else {
var437 = "Error: `autoinit` attributes cannot be set on redefinitions.";
var438 = standard___standard__NativeString___to_s_with_length(var437, 60l);
var436 = var438;
varonce435 = var436;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_atautoinit, var436); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
{
var439 = nit___nit__MClassDef___is_intro(var_mclassdef);
}
var440 = !var439;
if (var440){
if (likely(varonce441!=NULL)) {
var442 = varonce441;
} else {
var443 = "Error: `autoinit` attributes cannot be used in class refinements.";
var444 = standard___standard__NativeString___to_s_with_length(var443, 65l);
var442 = var444;
varonce441 = var442;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_atautoinit, var442); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
if (var_atabstract == NULL) {
var445 = 1; /* is null */
} else {
var445 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_atabstract,((val*)NULL)) on <var_atabstract:nullable AAnnotation> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_atabstract,var_other) on <var_atabstract:nullable AAnnotation(AAnnotation)> */
var450 = var_atabstract == var_other;
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
if (var445){
if (likely(varonce451!=NULL)) {
var452 = varonce451;
} else {
var453 = "useless-autoinit";
var454 = standard___standard__NativeString___to_s_with_length(var453, 16l);
var452 = var454;
varonce451 = var452;
}
if (likely(varonce455!=NULL)) {
var456 = varonce455;
} else {
var457 = "Warning: superfluous `autoinit` on attribute.";
var458 = standard___standard__NativeString___to_s_with_length(var457, 45l);
var456 = var458;
varonce455 = var456;
}
{
nit___nit__ModelBuilder___warning(var_modelbuilder, var_atautoinit, var452, var456); /* Direct call modelbuilder_base#ModelBuilder#warning on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
}
}
}
} else {
if (var_atabstract == NULL) {
var459 = 0; /* is null */
} else {
var459 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atabstract,((val*)NULL)) on <var_atabstract:nullable AAnnotation> */
var_other116 = ((val*)NULL);
{
var462 = ((short int(*)(val* self, val* p0))(var_atabstract->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_atabstract, var_other116); /* == on <var_atabstract:nullable AAnnotation(AAnnotation)>*/
}
var463 = !var462;
var460 = var463;
goto RET_LABEL461;
RET_LABEL461:(void)0;
}
var459 = var460;
}
if (var459){
{
{ /* Inline modelize_property#AAttrPropdef#noinit= (self,1) on <self:AAttrPropdef> */
self->attrs[COLOR_nit__modelize_property__AAttrPropdef___noinit].s = 1; /* _noinit on <self:AAttrPropdef> */
RET_LABEL464:(void)0;
}
}
} else {
}
}
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#build_signature for (self: AAttrPropdef, ModelBuilder) */
void nit__modelize_property___AAttrPropdef___APropdef__build_signature(val* self, val* p0) {
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
static val* varonce;
val* var97 /* : String */;
char* var98 /* : NativeString */;
val* var99 /* : FlatString */;
val* var100 /* : nullable MClass */;
val* var_cla /* var cla: nullable MClass */;
short int var101 /* : Bool */;
short int var102 /* : Bool */;
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
val* var115 /* : FlatString */;
val* var116 /* : nullable MClass */;
val* var_cla117 /* var cla: nullable MClass */;
short int var118 /* : Bool */;
short int var119 /* : Bool */;
short int var121 /* : Bool */;
short int var122 /* : Bool */;
val* var123 /* : MClassType */;
val* var125 /* : MClassType */;
short int var126 /* : Bool */;
int cltype127;
int idtype128;
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : NativeString */;
val* var132 /* : FlatString */;
val* var133 /* : nullable MClass */;
val* var_cla134 /* var cla: nullable MClass */;
short int var135 /* : Bool */;
short int var136 /* : Bool */;
short int var138 /* : Bool */;
short int var139 /* : Bool */;
val* var140 /* : MClassType */;
val* var142 /* : MClassType */;
short int var143 /* : Bool */;
int cltype144;
int idtype145;
static val* varonce146;
val* var147 /* : String */;
char* var148 /* : NativeString */;
val* var149 /* : FlatString */;
val* var150 /* : nullable MClass */;
val* var_cla151 /* var cla: nullable MClass */;
short int var152 /* : Bool */;
short int var153 /* : Bool */;
short int var155 /* : Bool */;
short int var156 /* : Bool */;
val* var157 /* : MClassType */;
val* var159 /* : MClassType */;
short int var160 /* : Bool */;
int cltype161;
int idtype162;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : NativeString */;
val* var166 /* : FlatString */;
val* var167 /* : nullable MClass */;
val* var_cla168 /* var cla: nullable MClass */;
short int var169 /* : Bool */;
short int var170 /* : Bool */;
short int var172 /* : Bool */;
short int var173 /* : Bool */;
val* var174 /* : MClassType */;
val* var176 /* : MClassType */;
short int var177 /* : Bool */;
int cltype178;
int idtype179;
static val* varonce180;
val* var181 /* : String */;
char* var182 /* : NativeString */;
val* var183 /* : FlatString */;
val* var184 /* : nullable MClass */;
val* var_cla185 /* var cla: nullable MClass */;
short int var186 /* : Bool */;
short int var187 /* : Bool */;
short int var189 /* : Bool */;
short int var190 /* : Bool */;
val* var191 /* : MClassType */;
val* var193 /* : MClassType */;
short int var194 /* : Bool */;
int cltype195;
int idtype196;
static val* varonce197;
val* var198 /* : String */;
char* var199 /* : NativeString */;
val* var200 /* : FlatString */;
val* var201 /* : nullable MClass */;
val* var_cla202 /* var cla: nullable MClass */;
short int var203 /* : Bool */;
short int var204 /* : Bool */;
short int var206 /* : Bool */;
short int var207 /* : Bool */;
val* var208 /* : MClassType */;
val* var210 /* : MClassType */;
val* var212 /* : NativeArray[String] */;
static val* varonce211;
static val* varonce213;
val* var214 /* : String */;
char* var215 /* : NativeString */;
val* var216 /* : FlatString */;
static val* varonce217;
val* var218 /* : String */;
char* var219 /* : NativeString */;
val* var220 /* : FlatString */;
val* var221 /* : String */;
val* var222 /* : String */;
short int var223 /* : Bool */;
short int var224 /* : Bool */;
short int var226 /* : Bool */;
short int var228 /* : Bool */;
short int var229 /* : Bool */;
short int var230 /* : Bool */;
short int var231 /* : Bool */;
short int var233 /* : Bool */;
short int var234 /* : Bool */;
short int var_ /* var : Bool */;
short int var235 /* : Bool */;
short int var236 /* : Bool */;
short int var238 /* : Bool */;
short int var240 /* : Bool */;
short int var241 /* : Bool */;
int cltype242;
int idtype243;
val* var244 /* : AType */;
val* var246 /* : AType */;
val* var247 /* : nullable MType */;
val* var_xmtype /* var xmtype: nullable MType */;
short int var248 /* : Bool */;
short int var249 /* : Bool */;
short int var251 /* : Bool */;
short int var253 /* : Bool */;
static val* varonce254;
val* var255 /* : String */;
char* var256 /* : NativeString */;
val* var257 /* : FlatString */;
static val* varonce258;
val* var259 /* : String */;
char* var260 /* : NativeString */;
val* var261 /* : FlatString */;
short int var262 /* : Bool */;
short int var263 /* : Bool */;
short int var265 /* : Bool */;
short int var267 /* : Bool */;
val* var269 /* : NativeArray[String] */;
static val* varonce268;
static val* varonce270;
val* var271 /* : String */;
char* var272 /* : NativeString */;
val* var273 /* : FlatString */;
static val* varonce274;
val* var275 /* : String */;
char* var276 /* : NativeString */;
val* var277 /* : FlatString */;
val* var278 /* : String */;
val* var279 /* : String */;
short int var281 /* : Bool */;
short int var282 /* : Bool */;
short int var284 /* : Bool */;
short int var285 /* : Bool */;
val* var287 /* : MSignature */;
val* var288 /* : Array[MParameter] */;
val* var_msignature289 /* var msignature: MSignature */;
val* var291 /* : nullable MMethodDef */;
val* var293 /* : nullable MMethodDef */;
val* var_mwritepropdef /* var mwritepropdef: nullable MMethodDef */;
short int var294 /* : Bool */;
short int var295 /* : Bool */;
short int var297 /* : Bool */;
short int var298 /* : Bool */;
val* var299 /* : TId */;
val* var301 /* : TId */;
val* var302 /* : String */;
val* var_name /* var name: String */;
val* var303 /* : MParameter */;
val* var_mparameter /* var mparameter: MParameter */;
val* var304 /* : MSignature */;
val* var305 /* : Array[MParameter] */;
val* var_306 /* var : Array[MParameter] */;
val* var_msignature307 /* var msignature: MSignature */;
val* var309 /* : nullable MAttributeDef */;
val* var311 /* : nullable MAttributeDef */;
val* var_mlazypropdef /* var mlazypropdef: nullable MAttributeDef */;
short int var312 /* : Bool */;
short int var313 /* : Bool */;
short int var315 /* : Bool */;
short int var316 /* : Bool */;
val* var317 /* : Model */;
val* var319 /* : Model */;
static val* varonce320;
val* var321 /* : String */;
char* var322 /* : NativeString */;
val* var323 /* : FlatString */;
val* var324 /* : nullable Array[MClass] */;
val* var325 /* : nullable Object */;
val* var326 /* : MClassType */;
val* var328 /* : MClassType */;
var_modelbuilder = p0;
{
{ /* Inline modelize_property#AAttrPropdef#mreadpropdef (self) on <self:AAttrPropdef> */
var2 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___mreadpropdef].val; /* _mreadpropdef on <self:AAttrPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mreadpropdef = var;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var5 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
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
var14 = var_mreadpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_mclassdef = var12;
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var17 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
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
var20 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_type].val; /* _n_type on <self:AAttrPropdef> */
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
var25 = ((short int(*)(val* self, val* p0))(var_ntype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ntype, var_other24); /* == on <var_ntype:nullable AType(AType)>*/
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
var27 = nit___nit__ModelBuilder___resolve_mtype_unchecked(var_modelbuilder, var_mmodule, var_mclassdef, var_ntype, 1);
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
var34 = nit___nit__MPropDef___is_intro(var_mreadpropdef);
}
var35 = !var34;
if (var35){
{
{ /* Inline model#MPropDef#mproperty (var_mreadpropdef) on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var38 = var_mreadpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var36) on <var36:MProperty(MMethod)> */
var41 = var36->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var36:MProperty(MMethod)> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1968);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var39) on <var39:MPropDef(MMethodDef)> */
var44 = var39->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var39:MPropDef(MMethodDef)> */
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
var53 = var_msignature->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:nullable MSignature(MSignature)> */
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
var57 = ((short int(*)(val* self, val* p0))(var_inherited_type->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_inherited_type, var_other24); /* == on <var_inherited_type:nullable MType(MType)>*/
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
var61 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var59) on <var59:MClass> */
var64 = var59->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var59:MClass> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 484);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var67 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var67 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
var68 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_inherited_type->class->vft[COLOR_nit__model__MType__resolve_for]))(var_inherited_type, var62, var65, var_mmodule, 0); /* resolve_for on <var_inherited_type:nullable MType(MType)>*/
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
var77 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <self:AAttrPropdef> */
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
var87 = ((short int(*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nexpr, var_other24); /* == on <var_nexpr:nullable AExpr(AExpr)>*/
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
cltype = type_nit__ANewExpr.color;
idtype = type_nit__ANewExpr.id;
if(cltype >= var_nexpr->type->table_size) {
var89 = 0;
} else {
var89 = var_nexpr->type->type_table[cltype] == idtype;
}
if (var89){
{
{ /* Inline parser_nodes#ANewExpr#n_type (var_nexpr) on <var_nexpr:nullable AExpr(ANewExpr)> */
var92 = var_nexpr->attrs[COLOR_nit__parser_nodes__ANewExpr___n_type].val; /* _n_type on <var_nexpr:nullable AExpr(ANewExpr)> */
if (unlikely(var92 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2255);
fatal_exit(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
{
var93 = nit___nit__ModelBuilder___resolve_mtype_unchecked(var_modelbuilder, var_mmodule, var_mclassdef, var90, 1);
}
var_mtype = var93;
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa AIntExpr */
cltype95 = type_nit__AIntExpr.color;
idtype96 = type_nit__AIntExpr.id;
if(cltype95 >= var_nexpr->type->table_size) {
var94 = 0;
} else {
var94 = var_nexpr->type->type_table[cltype95] == idtype96;
}
if (var94){
if (likely(varonce!=NULL)) {
var97 = varonce;
} else {
var98 = "Int";
var99 = standard___standard__NativeString___to_s_with_length(var98, 3l);
var97 = var99;
varonce = var97;
}
{
var100 = nit___nit__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var97);
}
var_cla = var100;
if (var_cla == NULL) {
var101 = 0; /* is null */
} else {
var101 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_cla,((val*)NULL)) on <var_cla:nullable MClass> */
var_other24 = ((val*)NULL);
{
var104 = ((short int(*)(val* self, val* p0))(var_cla->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cla, var_other24); /* == on <var_cla:nullable MClass(MClass)>*/
}
var105 = !var104;
var102 = var105;
goto RET_LABEL103;
RET_LABEL103:(void)0;
}
var101 = var102;
}
if (var101){
{
{ /* Inline model#MClass#mclass_type (var_cla) on <var_cla:nullable MClass(MClass)> */
var108 = var_cla->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var_cla:nullable MClass(MClass)> */
if (unlikely(var108 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 484);
fatal_exit(1);
}
var106 = var108;
RET_LABEL107:(void)0;
}
}
var_mtype = var106;
} else {
}
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa AByteExpr */
cltype110 = type_nit__AByteExpr.color;
idtype111 = type_nit__AByteExpr.id;
if(cltype110 >= var_nexpr->type->table_size) {
var109 = 0;
} else {
var109 = var_nexpr->type->type_table[cltype110] == idtype111;
}
if (var109){
if (likely(varonce112!=NULL)) {
var113 = varonce112;
} else {
var114 = "Byte";
var115 = standard___standard__NativeString___to_s_with_length(var114, 4l);
var113 = var115;
varonce112 = var113;
}
{
var116 = nit___nit__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var113);
}
var_cla117 = var116;
if (var_cla117 == NULL) {
var118 = 0; /* is null */
} else {
var118 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_cla117,((val*)NULL)) on <var_cla117:nullable MClass> */
var_other24 = ((val*)NULL);
{
var121 = ((short int(*)(val* self, val* p0))(var_cla117->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cla117, var_other24); /* == on <var_cla117:nullable MClass(MClass)>*/
}
var122 = !var121;
var119 = var122;
goto RET_LABEL120;
RET_LABEL120:(void)0;
}
var118 = var119;
}
if (var118){
{
{ /* Inline model#MClass#mclass_type (var_cla117) on <var_cla117:nullable MClass(MClass)> */
var125 = var_cla117->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var_cla117:nullable MClass(MClass)> */
if (unlikely(var125 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 484);
fatal_exit(1);
}
var123 = var125;
RET_LABEL124:(void)0;
}
}
var_mtype = var123;
} else {
}
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa AFloatExpr */
cltype127 = type_nit__AFloatExpr.color;
idtype128 = type_nit__AFloatExpr.id;
if(cltype127 >= var_nexpr->type->table_size) {
var126 = 0;
} else {
var126 = var_nexpr->type->type_table[cltype127] == idtype128;
}
if (var126){
if (likely(varonce129!=NULL)) {
var130 = varonce129;
} else {
var131 = "Float";
var132 = standard___standard__NativeString___to_s_with_length(var131, 5l);
var130 = var132;
varonce129 = var130;
}
{
var133 = nit___nit__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var130);
}
var_cla134 = var133;
if (var_cla134 == NULL) {
var135 = 0; /* is null */
} else {
var135 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_cla134,((val*)NULL)) on <var_cla134:nullable MClass> */
var_other24 = ((val*)NULL);
{
var138 = ((short int(*)(val* self, val* p0))(var_cla134->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cla134, var_other24); /* == on <var_cla134:nullable MClass(MClass)>*/
}
var139 = !var138;
var136 = var139;
goto RET_LABEL137;
RET_LABEL137:(void)0;
}
var135 = var136;
}
if (var135){
{
{ /* Inline model#MClass#mclass_type (var_cla134) on <var_cla134:nullable MClass(MClass)> */
var142 = var_cla134->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var_cla134:nullable MClass(MClass)> */
if (unlikely(var142 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 484);
fatal_exit(1);
}
var140 = var142;
RET_LABEL141:(void)0;
}
}
var_mtype = var140;
} else {
}
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa ACharExpr */
cltype144 = type_nit__ACharExpr.color;
idtype145 = type_nit__ACharExpr.id;
if(cltype144 >= var_nexpr->type->table_size) {
var143 = 0;
} else {
var143 = var_nexpr->type->type_table[cltype144] == idtype145;
}
if (var143){
if (likely(varonce146!=NULL)) {
var147 = varonce146;
} else {
var148 = "Char";
var149 = standard___standard__NativeString___to_s_with_length(var148, 4l);
var147 = var149;
varonce146 = var147;
}
{
var150 = nit___nit__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var147);
}
var_cla151 = var150;
if (var_cla151 == NULL) {
var152 = 0; /* is null */
} else {
var152 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_cla151,((val*)NULL)) on <var_cla151:nullable MClass> */
var_other24 = ((val*)NULL);
{
var155 = ((short int(*)(val* self, val* p0))(var_cla151->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cla151, var_other24); /* == on <var_cla151:nullable MClass(MClass)>*/
}
var156 = !var155;
var153 = var156;
goto RET_LABEL154;
RET_LABEL154:(void)0;
}
var152 = var153;
}
if (var152){
{
{ /* Inline model#MClass#mclass_type (var_cla151) on <var_cla151:nullable MClass(MClass)> */
var159 = var_cla151->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var_cla151:nullable MClass(MClass)> */
if (unlikely(var159 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 484);
fatal_exit(1);
}
var157 = var159;
RET_LABEL158:(void)0;
}
}
var_mtype = var157;
} else {
}
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa ABoolExpr */
cltype161 = type_nit__ABoolExpr.color;
idtype162 = type_nit__ABoolExpr.id;
if(cltype161 >= var_nexpr->type->table_size) {
var160 = 0;
} else {
var160 = var_nexpr->type->type_table[cltype161] == idtype162;
}
if (var160){
if (likely(varonce163!=NULL)) {
var164 = varonce163;
} else {
var165 = "Bool";
var166 = standard___standard__NativeString___to_s_with_length(var165, 4l);
var164 = var166;
varonce163 = var164;
}
{
var167 = nit___nit__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var164);
}
var_cla168 = var167;
if (var_cla168 == NULL) {
var169 = 0; /* is null */
} else {
var169 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_cla168,((val*)NULL)) on <var_cla168:nullable MClass> */
var_other24 = ((val*)NULL);
{
var172 = ((short int(*)(val* self, val* p0))(var_cla168->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cla168, var_other24); /* == on <var_cla168:nullable MClass(MClass)>*/
}
var173 = !var172;
var170 = var173;
goto RET_LABEL171;
RET_LABEL171:(void)0;
}
var169 = var170;
}
if (var169){
{
{ /* Inline model#MClass#mclass_type (var_cla168) on <var_cla168:nullable MClass(MClass)> */
var176 = var_cla168->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var_cla168:nullable MClass(MClass)> */
if (unlikely(var176 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 484);
fatal_exit(1);
}
var174 = var176;
RET_LABEL175:(void)0;
}
}
var_mtype = var174;
} else {
}
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa ASuperstringExpr */
cltype178 = type_nit__ASuperstringExpr.color;
idtype179 = type_nit__ASuperstringExpr.id;
if(cltype178 >= var_nexpr->type->table_size) {
var177 = 0;
} else {
var177 = var_nexpr->type->type_table[cltype178] == idtype179;
}
if (var177){
if (likely(varonce180!=NULL)) {
var181 = varonce180;
} else {
var182 = "String";
var183 = standard___standard__NativeString___to_s_with_length(var182, 6l);
var181 = var183;
varonce180 = var181;
}
{
var184 = nit___nit__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var181);
}
var_cla185 = var184;
if (var_cla185 == NULL) {
var186 = 0; /* is null */
} else {
var186 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_cla185,((val*)NULL)) on <var_cla185:nullable MClass> */
var_other24 = ((val*)NULL);
{
var189 = ((short int(*)(val* self, val* p0))(var_cla185->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cla185, var_other24); /* == on <var_cla185:nullable MClass(MClass)>*/
}
var190 = !var189;
var187 = var190;
goto RET_LABEL188;
RET_LABEL188:(void)0;
}
var186 = var187;
}
if (var186){
{
{ /* Inline model#MClass#mclass_type (var_cla185) on <var_cla185:nullable MClass(MClass)> */
var193 = var_cla185->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var_cla185:nullable MClass(MClass)> */
if (unlikely(var193 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 484);
fatal_exit(1);
}
var191 = var193;
RET_LABEL192:(void)0;
}
}
var_mtype = var191;
} else {
}
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa AStringFormExpr */
cltype195 = type_nit__AStringFormExpr.color;
idtype196 = type_nit__AStringFormExpr.id;
if(cltype195 >= var_nexpr->type->table_size) {
var194 = 0;
} else {
var194 = var_nexpr->type->type_table[cltype195] == idtype196;
}
if (var194){
if (likely(varonce197!=NULL)) {
var198 = varonce197;
} else {
var199 = "String";
var200 = standard___standard__NativeString___to_s_with_length(var199, 6l);
var198 = var200;
varonce197 = var198;
}
{
var201 = nit___nit__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var198);
}
var_cla202 = var201;
if (var_cla202 == NULL) {
var203 = 0; /* is null */
} else {
var203 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_cla202,((val*)NULL)) on <var_cla202:nullable MClass> */
var_other24 = ((val*)NULL);
{
var206 = ((short int(*)(val* self, val* p0))(var_cla202->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cla202, var_other24); /* == on <var_cla202:nullable MClass(MClass)>*/
}
var207 = !var206;
var204 = var207;
goto RET_LABEL205;
RET_LABEL205:(void)0;
}
var203 = var204;
}
if (var203){
{
{ /* Inline model#MClass#mclass_type (var_cla202) on <var_cla202:nullable MClass(MClass)> */
var210 = var_cla202->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var_cla202:nullable MClass(MClass)> */
if (unlikely(var210 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 484);
fatal_exit(1);
}
var208 = var210;
RET_LABEL209:(void)0;
}
}
var_mtype = var208;
} else {
}
} else {
if (unlikely(varonce211==NULL)) {
var212 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce213!=NULL)) {
var214 = varonce213;
} else {
var215 = "Error: untyped attribute `";
var216 = standard___standard__NativeString___to_s_with_length(var215, 26l);
var214 = var216;
varonce213 = var214;
}
((struct instance_standard__NativeArray*)var212)->values[0]=var214;
if (likely(varonce217!=NULL)) {
var218 = varonce217;
} else {
var219 = "`. Implicit typing allowed only for literals and new.";
var220 = standard___standard__NativeString___to_s_with_length(var219, 53l);
var218 = var220;
varonce217 = var218;
}
((struct instance_standard__NativeArray*)var212)->values[2]=var218;
} else {
var212 = varonce211;
varonce211 = NULL;
}
{
var221 = ((val*(*)(val* self))(var_mreadpropdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mreadpropdef); /* to_s on <var_mreadpropdef:nullable MMethodDef(MMethodDef)>*/
}
((struct instance_standard__NativeArray*)var212)->values[1]=var221;
{
var222 = ((val*(*)(val* self))(var212->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var212); /* native_to_s on <var212:NativeArray[String]>*/
}
varonce211 = var212;
{
nit___nit__ModelBuilder___error(var_modelbuilder, self, var222); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
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
var223 = 1; /* is null */
} else {
var223 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var228 = var_mtype == var_other;
var226 = var228;
goto RET_LABEL227;
RET_LABEL227:(void)0;
}
}
var224 = var226;
goto RET_LABEL225;
RET_LABEL225:(void)0;
}
var223 = var224;
}
if (var223){
goto RET_LABEL;
} else {
}
} else {
}
} else {
if (var_ntype == NULL) {
var230 = 0; /* is null */
} else {
var230 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ntype,((val*)NULL)) on <var_ntype:nullable AType> */
var_other24 = ((val*)NULL);
{
var233 = ((short int(*)(val* self, val* p0))(var_ntype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ntype, var_other24); /* == on <var_ntype:nullable AType(AType)>*/
}
var234 = !var233;
var231 = var234;
goto RET_LABEL232;
RET_LABEL232:(void)0;
}
var230 = var231;
}
var_ = var230;
if (var230){
if (var_inherited_type == NULL) {
var235 = 0; /* <var_mtype:nullable MType(MType)> cannot be null */
} else {
{ /* Inline kernel#Object#== (var_inherited_type,var_mtype) on <var_inherited_type:nullable MType> */
var_other = var_mtype;
{
{ /* Inline kernel#Object#is_same_instance (var_inherited_type,var_other) on <var_inherited_type:nullable MType(MType)> */
var240 = var_inherited_type == var_other;
var238 = var240;
goto RET_LABEL239;
RET_LABEL239:(void)0;
}
}
var236 = var238;
goto RET_LABEL237;
RET_LABEL237:(void)0;
}
var235 = var236;
}
var229 = var235;
} else {
var229 = var_;
}
if (var229){
/* <var_nexpr:nullable AExpr> isa ANewExpr */
cltype242 = type_nit__ANewExpr.color;
idtype243 = type_nit__ANewExpr.id;
if(var_nexpr == NULL) {
var241 = 0;
} else {
if(cltype242 >= var_nexpr->type->table_size) {
var241 = 0;
} else {
var241 = var_nexpr->type->type_table[cltype242] == idtype243;
}
}
if (var241){
{
{ /* Inline parser_nodes#ANewExpr#n_type (var_nexpr) on <var_nexpr:nullable AExpr(ANewExpr)> */
var246 = var_nexpr->attrs[COLOR_nit__parser_nodes__ANewExpr___n_type].val; /* _n_type on <var_nexpr:nullable AExpr(ANewExpr)> */
if (unlikely(var246 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2255);
fatal_exit(1);
}
var244 = var246;
RET_LABEL245:(void)0;
}
}
{
var247 = nit___nit__ModelBuilder___resolve_mtype_unchecked(var_modelbuilder, var_mmodule, var_mclassdef, var244, 1);
}
var_xmtype = var247;
if (var_xmtype == NULL) {
var248 = 0; /* <var_mtype:nullable MType(MType)> cannot be null */
} else {
{ /* Inline kernel#Object#== (var_xmtype,var_mtype) on <var_xmtype:nullable MType> */
var_other = var_mtype;
{
{ /* Inline kernel#Object#is_same_instance (var_xmtype,var_other) on <var_xmtype:nullable MType(MType)> */
var253 = var_xmtype == var_other;
var251 = var253;
goto RET_LABEL252;
RET_LABEL252:(void)0;
}
}
var249 = var251;
goto RET_LABEL250;
RET_LABEL250:(void)0;
}
var248 = var249;
}
if (var248){
if (likely(varonce254!=NULL)) {
var255 = varonce254;
} else {
var256 = "useless-type";
var257 = standard___standard__NativeString___to_s_with_length(var256, 12l);
var255 = var257;
varonce254 = var255;
}
if (likely(varonce258!=NULL)) {
var259 = varonce258;
} else {
var260 = "Warning: useless type definition";
var261 = standard___standard__NativeString___to_s_with_length(var260, 32l);
var259 = var261;
varonce258 = var259;
}
{
nit___nit__ModelBuilder___advice(var_modelbuilder, var_ntype, var255, var259); /* Direct call modelbuilder_base#ModelBuilder#advice on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
} else {
}
} else {
}
}
if (var_mtype == NULL) {
var262 = 1; /* is null */
} else {
var262 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var267 = var_mtype == var_other;
var265 = var267;
goto RET_LABEL266;
RET_LABEL266:(void)0;
}
}
var263 = var265;
goto RET_LABEL264;
RET_LABEL264:(void)0;
}
var262 = var263;
}
if (var262){
if (unlikely(varonce268==NULL)) {
var269 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce270!=NULL)) {
var271 = varonce270;
} else {
var272 = "Error: untyped attribute `";
var273 = standard___standard__NativeString___to_s_with_length(var272, 26l);
var271 = var273;
varonce270 = var271;
}
((struct instance_standard__NativeArray*)var269)->values[0]=var271;
if (likely(varonce274!=NULL)) {
var275 = varonce274;
} else {
var276 = "`.";
var277 = standard___standard__NativeString___to_s_with_length(var276, 2l);
var275 = var277;
varonce274 = var275;
}
((struct instance_standard__NativeArray*)var269)->values[2]=var275;
} else {
var269 = varonce268;
varonce268 = NULL;
}
{
var278 = ((val*(*)(val* self))(var_mreadpropdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mreadpropdef); /* to_s on <var_mreadpropdef:nullable MMethodDef(MMethodDef)>*/
}
((struct instance_standard__NativeArray*)var269)->values[1]=var278;
{
var279 = ((val*(*)(val* self))(var269->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var269); /* native_to_s on <var269:NativeArray[String]>*/
}
varonce268 = var269;
{
nit___nit__ModelBuilder___error(var_modelbuilder, self, var279); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property#AAttrPropdef#mtype= (self,var_mtype) on <self:AAttrPropdef> */
self->attrs[COLOR_nit__modelize_property__AAttrPropdef___mtype].val = var_mtype; /* _mtype on <self:AAttrPropdef> */
RET_LABEL280:(void)0;
}
}
if (var_mpropdef == NULL) {
var281 = 0; /* is null */
} else {
var281 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MAttributeDef> */
var_other24 = ((val*)NULL);
{
var284 = ((short int(*)(val* self, val* p0))(var_mpropdef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mpropdef, var_other24); /* == on <var_mpropdef:nullable MAttributeDef(MAttributeDef)>*/
}
var285 = !var284;
var282 = var285;
goto RET_LABEL283;
RET_LABEL283:(void)0;
}
var281 = var282;
}
if (var281){
{
{ /* Inline model#MAttributeDef#static_mtype= (var_mpropdef,var_mtype) on <var_mpropdef:nullable MAttributeDef(MAttributeDef)> */
var_mpropdef->attrs[COLOR_nit__model__MAttributeDef___static_mtype].val = var_mtype; /* _static_mtype on <var_mpropdef:nullable MAttributeDef(MAttributeDef)> */
RET_LABEL286:(void)0;
}
}
} else {
}
var287 = NEW_nit__MSignature(&type_nit__MSignature);
var288 = NEW_standard__Array(&type_standard__Array__nit__MParameter);
{
standard___standard__Array___standard__kernel__Object__init(var288); /* Direct call array#Array#init on <var288:Array[MParameter]>*/
}
{
((void(*)(val* self, val* p0))(var287->class->vft[COLOR_nit__model__MSignature__mparameters_61d]))(var287, var288); /* mparameters= on <var287:MSignature>*/
}
{
((void(*)(val* self, val* p0))(var287->class->vft[COLOR_nit__model__MSignature__return_mtype_61d]))(var287, var_mtype); /* return_mtype= on <var287:MSignature>*/
}
{
((void(*)(val* self))(var287->class->vft[COLOR_standard__kernel__Object__init]))(var287); /* init on <var287:MSignature>*/
}
var_msignature289 = var287;
{
{ /* Inline model#MMethodDef#msignature= (var_mreadpropdef,var_msignature289) on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var_mreadpropdef->attrs[COLOR_nit__model__MMethodDef___msignature].val = var_msignature289; /* _msignature on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL290:(void)0;
}
}
{
{ /* Inline modelize_property#AAttrPropdef#mwritepropdef (self) on <self:AAttrPropdef> */
var293 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___mwritepropdef].val; /* _mwritepropdef on <self:AAttrPropdef> */
var291 = var293;
RET_LABEL292:(void)0;
}
}
var_mwritepropdef = var291;
if (var_mwritepropdef == NULL) {
var294 = 0; /* is null */
} else {
var294 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mwritepropdef,((val*)NULL)) on <var_mwritepropdef:nullable MMethodDef> */
var_other24 = ((val*)NULL);
{
var297 = ((short int(*)(val* self, val* p0))(var_mwritepropdef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mwritepropdef, var_other24); /* == on <var_mwritepropdef:nullable MMethodDef(MMethodDef)>*/
}
var298 = !var297;
var295 = var298;
goto RET_LABEL296;
RET_LABEL296:(void)0;
}
var294 = var295;
}
if (var294){
{
{ /* Inline parser_nodes#AAttrPropdef#n_id2 (self) on <self:AAttrPropdef> */
var301 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_id2].val; /* _n_id2 on <self:AAttrPropdef> */
if (unlikely(var301 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1311);
fatal_exit(1);
}
var299 = var301;
RET_LABEL300:(void)0;
}
}
{
var302 = nit__lexer_work___Token___text(var299);
}
var_name = var302;
var303 = NEW_nit__MParameter(&type_nit__MParameter);
{
((void(*)(val* self, val* p0))(var303->class->vft[COLOR_nit__model__MParameter__name_61d]))(var303, var_name); /* name= on <var303:MParameter>*/
}
{
((void(*)(val* self, val* p0))(var303->class->vft[COLOR_nit__model__MParameter__mtype_61d]))(var303, var_mtype); /* mtype= on <var303:MParameter>*/
}
{
((void(*)(val* self, short int p0))(var303->class->vft[COLOR_nit__model__MParameter__is_vararg_61d]))(var303, 0); /* is_vararg= on <var303:MParameter>*/
}
{
((void(*)(val* self, short int p0))(var303->class->vft[COLOR_nit__model__MParameter__is_default_61d]))(var303, 0); /* is_default= on <var303:MParameter>*/
}
{
((void(*)(val* self))(var303->class->vft[COLOR_standard__kernel__Object__init]))(var303); /* init on <var303:MParameter>*/
}
var_mparameter = var303;
var304 = NEW_nit__MSignature(&type_nit__MSignature);
var305 = NEW_standard__Array(&type_standard__Array__nit__MParameter);
{
standard___standard__Array___with_capacity(var305, 1l); /* Direct call array#Array#with_capacity on <var305:Array[MParameter]>*/
}
var_306 = var305;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_306, var_mparameter); /* Direct call array#AbstractArray#push on <var_306:Array[MParameter]>*/
}
{
((void(*)(val* self, val* p0))(var304->class->vft[COLOR_nit__model__MSignature__mparameters_61d]))(var304, var_306); /* mparameters= on <var304:MSignature>*/
}
{
((void(*)(val* self, val* p0))(var304->class->vft[COLOR_nit__model__MSignature__return_mtype_61d]))(var304, ((val*)NULL)); /* return_mtype= on <var304:MSignature>*/
}
{
((void(*)(val* self))(var304->class->vft[COLOR_standard__kernel__Object__init]))(var304); /* init on <var304:MSignature>*/
}
var_msignature307 = var304;
{
{ /* Inline model#MMethodDef#msignature= (var_mwritepropdef,var_msignature307) on <var_mwritepropdef:nullable MMethodDef(MMethodDef)> */
var_mwritepropdef->attrs[COLOR_nit__model__MMethodDef___msignature].val = var_msignature307; /* _msignature on <var_mwritepropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL308:(void)0;
}
}
} else {
}
{
{ /* Inline modelize_property#AAttrPropdef#mlazypropdef (self) on <self:AAttrPropdef> */
var311 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___mlazypropdef].val; /* _mlazypropdef on <self:AAttrPropdef> */
var309 = var311;
RET_LABEL310:(void)0;
}
}
var_mlazypropdef = var309;
if (var_mlazypropdef == NULL) {
var312 = 0; /* is null */
} else {
var312 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mlazypropdef,((val*)NULL)) on <var_mlazypropdef:nullable MAttributeDef> */
var_other24 = ((val*)NULL);
{
var315 = ((short int(*)(val* self, val* p0))(var_mlazypropdef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mlazypropdef, var_other24); /* == on <var_mlazypropdef:nullable MAttributeDef(MAttributeDef)>*/
}
var316 = !var315;
var313 = var316;
goto RET_LABEL314;
RET_LABEL314:(void)0;
}
var312 = var313;
}
if (var312){
{
{ /* Inline modelbuilder_base#ModelBuilder#model (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var319 = var_modelbuilder->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___model].val; /* _model on <var_modelbuilder:ModelBuilder> */
if (unlikely(var319 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 44);
fatal_exit(1);
}
var317 = var319;
RET_LABEL318:(void)0;
}
}
if (likely(varonce320!=NULL)) {
var321 = varonce320;
} else {
var322 = "Bool";
var323 = standard___standard__NativeString___to_s_with_length(var322, 4l);
var321 = var323;
varonce320 = var321;
}
{
var324 = nit__model___Model___get_mclasses_by_name(var317, var321);
}
if (var324 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1406);
fatal_exit(1);
} else {
var325 = standard___standard__SequenceRead___Collection__first(var324);
}
{
{ /* Inline model#MClass#mclass_type (var325) on <var325:nullable Object(MClass)> */
var328 = var325->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var325:nullable Object(MClass)> */
if (unlikely(var328 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 484);
fatal_exit(1);
}
var326 = var328;
RET_LABEL327:(void)0;
}
}
{
{ /* Inline model#MAttributeDef#static_mtype= (var_mlazypropdef,var326) on <var_mlazypropdef:nullable MAttributeDef(MAttributeDef)> */
var_mlazypropdef->attrs[COLOR_nit__model__MAttributeDef___static_mtype].val = var326; /* _static_mtype on <var_mlazypropdef:nullable MAttributeDef(MAttributeDef)> */
RET_LABEL329:(void)0;
}
}
} else {
}
{
nit__modelize_property___AAttrPropdef___APropdef__check_repeated_types(self, var_modelbuilder); /* Direct call modelize_property#AAttrPropdef#check_repeated_types on <self:AAttrPropdef>*/
}
RET_LABEL:;
}
