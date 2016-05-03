#include "nitc__typing.sep.0.h"
/* method typing#ASuperExpr#process_superinit for (self: ASuperExpr, TypeVisitor) */
void nitc__typing___ASuperExpr___process_superinit(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MClassType */;
val* var2 /* : nullable MClassType */;
val* var_anchor /* var anchor: nullable MClassType */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : Variable */;
val* var10 /* : Variable */;
val* var11 /* : nullable MType */;
val* var_recvtype /* var recvtype: nullable MType */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : nullable MPropDef */;
val* var19 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MPropDef */;
short int var20 /* : Bool */;
int cltype;
int idtype;
val* var21 /* : MProperty */;
val* var23 /* : MProperty */;
val* var_mproperty /* var mproperty: MMethod */;
val* var_superprop /* var superprop: nullable MMethodDef */;
val* var24 /* : MClassDef */;
val* var26 /* : MClassDef */;
val* var27 /* : Array[MClassType] */;
val* var29 /* : Array[MClassType] */;
val* var_ /* var : Array[MClassType] */;
val* var30 /* : IndexedIterator[nullable Object] */;
val* var_31 /* var : IndexedIterator[MClassType] */;
short int var32 /* : Bool */;
val* var33 /* : nullable Object */;
val* var_msupertype /* var msupertype: MClassType */;
val* var34 /* : MModule */;
val* var36 /* : MModule */;
val* var37 /* : MClassType */;
val* var38 /* : ModelBuilder */;
val* var40 /* : ModelBuilder */;
val* var41 /* : ToolContext */;
val* var43 /* : ToolContext */;
long var44 /* : Int */;
long var46 /* : Int */;
long var_errcount /* var errcount: Int */;
val* var47 /* : String */;
val* var49 /* : String */;
val* var50 /* : nullable MProperty */;
short int var51 /* : Bool */;
int cltype52;
int idtype53;
const char* var_class_name;
val* var_candidate /* var candidate: nullable MMethod */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
val* var_other57 /* var other: nullable Object */;
short int var58 /* : Bool */;
short int var60 /* : Bool */;
val* var61 /* : ModelBuilder */;
val* var63 /* : ModelBuilder */;
val* var64 /* : ToolContext */;
val* var66 /* : ToolContext */;
long var67 /* : Int */;
long var69 /* : Int */;
short int var70 /* : Bool */;
short int var72 /* : Bool */;
int cltype73;
int idtype74;
const char* var_class_name75;
short int var76 /* : Bool */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
short int var80 /* : Bool */;
short int var82 /* : Bool */;
short int var83 /* : Bool */;
short int var_84 /* var : Bool */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
short int var88 /* : Bool */;
short int var89 /* : Bool */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
short int var93 /* : Bool */;
short int var94 /* : Bool */;
short int var_95 /* var : Bool */;
val* var96 /* : MProperty */;
val* var98 /* : MProperty */;
short int var99 /* : Bool */;
short int var101 /* : Bool */;
short int var102 /* : Bool */;
short int var_103 /* var : Bool */;
val* var104 /* : MProperty */;
val* var106 /* : MProperty */;
short int var107 /* : Bool */;
short int var109 /* : Bool */;
short int var110 /* : Bool */;
val* var111 /* : NativeArray[String] */;
static val* varonce;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : NativeString */;
val* var115 /* : String */;
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
val* var130 /* : MProperty */;
val* var132 /* : MProperty */;
val* var133 /* : String */;
val* var134 /* : String */;
val* var135 /* : MModule */;
val* var137 /* : MModule */;
val* var138 /* : Array[MPropDef] */;
val* var_candidatedefs /* var candidatedefs: Array[MMethodDef] */;
short int var139 /* : Bool */;
short int var140 /* : Bool */;
short int var141 /* : Bool */;
short int var143 /* : Bool */;
short int var144 /* : Bool */;
short int var_145 /* var : Bool */;
val* var146 /* : MProperty */;
val* var148 /* : MProperty */;
short int var149 /* : Bool */;
short int var151 /* : Bool */;
short int var153 /* : Bool */;
val* var154 /* : nullable Object */;
short int var155 /* : Bool */;
short int var157 /* : Bool */;
short int var159 /* : Bool */;
long var160 /* : Int */;
long var162 /* : Int */;
short int var163 /* : Bool */;
short int var165 /* : Bool */;
int cltype166;
int idtype167;
const char* var_class_name168;
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
static val* varonce180;
val* var181 /* : String */;
char* var182 /* : NativeString */;
val* var183 /* : String */;
val* var184 /* : String */;
val* var185 /* : String */;
static val* varonce186;
val* var187 /* : String */;
char* var188 /* : NativeString */;
val* var189 /* : String */;
val* var190 /* : String */;
val* var191 /* : String */;
val* var192 /* : nullable Object */;
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
val* var210 /* : String */;
val* var211 /* : MSignature */;
val* var212 /* : nullable MSignature */;
val* var214 /* : nullable MSignature */;
val* var215 /* : nullable MSignature */;
val* var217 /* : nullable MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var218 /* : MType */;
short int var219 /* : Bool */;
int cltype220;
int idtype221;
const char* var_class_name222;
val* var223 /* : CallSite */;
val* var224 /* : Location */;
val* var225 /* : MModule */;
val* var227 /* : MModule */;
val* var228 /* : nullable MClassType */;
val* var230 /* : nullable MClassType */;
val* var231 /* : MProperty */;
val* var233 /* : MProperty */;
val* var_callsite /* var callsite: CallSite */;
val* var235 /* : AExprs */;
val* var237 /* : AExprs */;
val* var238 /* : Array[AExpr] */;
val* var_args /* var args: Array[AExpr] */;
long var239 /* : Int */;
long var241 /* : Int */;
short int var242 /* : Bool */;
short int var244 /* : Bool */;
int cltype245;
int idtype246;
const char* var_class_name247;
short int var248 /* : Bool */;
short int var249 /* : Bool */;
val* var250 /* : nullable MSignature */;
val* var252 /* : nullable MSignature */;
long var253 /* : Int */;
long var254 /* : Int */;
short int var255 /* : Bool */;
short int var257 /* : Bool */;
int cltype258;
int idtype259;
const char* var_class_name260;
short int var261 /* : Bool */;
val* var263 /* : NativeArray[String] */;
static val* varonce262;
static val* varonce264;
val* var265 /* : String */;
char* var266 /* : NativeString */;
val* var267 /* : String */;
static val* varonce268;
val* var269 /* : String */;
char* var270 /* : NativeString */;
val* var271 /* : String */;
static val* varonce272;
val* var273 /* : String */;
char* var274 /* : NativeString */;
val* var275 /* : String */;
static val* varonce276;
val* var277 /* : String */;
char* var278 /* : NativeString */;
val* var279 /* : String */;
val* var280 /* : nullable MSignature */;
val* var282 /* : nullable MSignature */;
long var283 /* : Int */;
val* var284 /* : String */;
long var285 /* : Int */;
val* var286 /* : String */;
val* var287 /* : String */;
val* var288 /* : String */;
long var_i /* var i: Int */;
val* var289 /* : Array[MParameter] */;
val* var291 /* : Array[MParameter] */;
val* var_292 /* var : Array[MParameter] */;
val* var293 /* : IndexedIterator[nullable Object] */;
val* var_294 /* var : IndexedIterator[MParameter] */;
short int var295 /* : Bool */;
val* var297 /* : nullable Object */;
val* var_sp /* var sp: MParameter */;
val* var298 /* : nullable MSignature */;
val* var300 /* : nullable MSignature */;
val* var301 /* : Array[MParameter] */;
val* var303 /* : Array[MParameter] */;
val* var304 /* : nullable Object */;
val* var_p /* var p: MParameter */;
val* var305 /* : MType */;
val* var307 /* : MType */;
val* var308 /* : MType */;
val* var310 /* : MType */;
short int var311 /* : Bool */;
short int var312 /* : Bool */;
val* var314 /* : NativeArray[String] */;
static val* varonce313;
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
static val* varonce327;
val* var328 /* : String */;
char* var329 /* : NativeString */;
val* var330 /* : String */;
static val* varonce331;
val* var332 /* : String */;
char* var333 /* : NativeString */;
val* var334 /* : String */;
val* var335 /* : String */;
val* var336 /* : MType */;
val* var338 /* : MType */;
val* var339 /* : String */;
val* var340 /* : String */;
val* var342 /* : String */;
val* var343 /* : MType */;
val* var345 /* : MType */;
val* var346 /* : String */;
val* var347 /* : String */;
val* var348 /* : String */;
long var349 /* : Int */;
short int var351 /* : Bool */;
int cltype352;
int idtype353;
const char* var_class_name354;
long var355 /* : Int */;
var_v = p0;
{
{ /* Inline typing#TypeVisitor#anchor (var_v) on <var_v:TypeVisitor> */
var2 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___anchor].val; /* _anchor on <var_v:TypeVisitor> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_anchor = var;
if (var_anchor == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_anchor,((val*)NULL)) on <var_anchor:nullable MClassType> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_anchor->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_anchor, var_other); /* == on <var_anchor:nullable MClassType(MClassType)>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1969);
fatal_exit(1);
}
{
{ /* Inline typing#TypeVisitor#selfvariable (var_v) on <var_v:TypeVisitor> */
var10 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___selfvariable].val; /* _selfvariable on <var_v:TypeVisitor> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _selfvariable");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 51);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nitc__typing___nitc__typing__TypeVisitor___get_variable(var_v, self, var8);
}
var_recvtype = var11;
if (var_recvtype == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_recvtype,((val*)NULL)) on <var_recvtype:nullable MType> */
var_other = ((val*)NULL);
{
var15 = ((short int(*)(val* self, val* p0))(var_recvtype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_recvtype, var_other); /* == on <var_recvtype:nullable MType(MType)>*/
}
var16 = !var15;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1971);
fatal_exit(1);
}
{
{ /* Inline typing#TypeVisitor#mpropdef (var_v) on <var_v:TypeVisitor> */
var19 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___mpropdef].val; /* _mpropdef on <var_v:TypeVisitor> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_mpropdef = var17;
/* <var_mpropdef:nullable MPropDef> isa MMethodDef */
cltype = type_nitc__MMethodDef.color;
idtype = type_nitc__MMethodDef.id;
if(var_mpropdef == NULL) {
var20 = 0;
} else {
if(cltype >= var_mpropdef->type->table_size) {
var20 = 0;
} else {
var20 = var_mpropdef->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1973);
fatal_exit(1);
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var23 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MPropDef(MMethodDef)> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
var_mproperty = var21;
var_superprop = ((val*)NULL);
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var26 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MPropDef(MMethodDef)> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2227);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline model#MClassDef#supertypes (var24) on <var24:MClassDef> */
var29 = var24->attrs[COLOR_nitc__model__MClassDef___supertypes].val; /* _supertypes on <var24:MClassDef> */
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
var_msupertype = var33;
{
{ /* Inline typing#TypeVisitor#mmodule (var_v) on <var_v:TypeVisitor> */
var36 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___mmodule].val; /* _mmodule on <var_v:TypeVisitor> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 37);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
var37 = nitc___nitc__MClassType___MType__anchor_to(var_msupertype, var34, var_anchor);
}
var_msupertype = var37;
{
{ /* Inline typing#TypeVisitor#modelbuilder (var_v) on <var_v:TypeVisitor> */
var40 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <var_v:TypeVisitor> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var38) on <var38:ModelBuilder> */
var43 = var38->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var38:ModelBuilder> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count (var41) on <var41:ToolContext> */
var46 = var41->attrs[COLOR_nitc__toolcontext__ToolContext___error_count].l; /* _error_count on <var41:ToolContext> */
var44 = var46;
RET_LABEL45:(void)0;
}
}
var_errcount = var44;
{
{ /* Inline model#MProperty#name (var_mproperty) on <var_mproperty:MMethod> */
var49 = var_mproperty->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var_mproperty:MMethod> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1951);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
var50 = nitc__typing___nitc__typing__TypeVisitor___try_get_mproperty_by_name2(var_v, self, var_msupertype, var47);
}
/* <var50:nullable MProperty> isa nullable MMethod */
cltype52 = type_nullable__nitc__MMethod.color;
idtype53 = type_nullable__nitc__MMethod.id;
if(var50 == NULL) {
var51 = 1;
} else {
if(cltype52 >= var50->type->table_size) {
var51 = 0;
} else {
var51 = var50->type->type_table[cltype52] == idtype53;
}
}
if (unlikely(!var51)) {
var_class_name = var50 == NULL ? "null" : var50->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MMethod", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1979);
fatal_exit(1);
}
var_candidate = var50;
if (var_candidate == NULL) {
var54 = 1; /* is null */
} else {
var54 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_candidate,((val*)NULL)) on <var_candidate:nullable MMethod> */
var_other57 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_candidate,var_other57) on <var_candidate:nullable MMethod(MMethod)> */
var60 = var_candidate == var_other57;
var58 = var60;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
}
var55 = var58;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
var54 = var55;
}
if (var54){
{
{ /* Inline typing#TypeVisitor#modelbuilder (var_v) on <var_v:TypeVisitor> */
var63 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <var_v:TypeVisitor> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var61) on <var61:ModelBuilder> */
var66 = var61->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var61:ModelBuilder> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count (var64) on <var64:ToolContext> */
var69 = var64->attrs[COLOR_nitc__toolcontext__ToolContext___error_count].l; /* _error_count on <var64:ToolContext> */
var67 = var69;
RET_LABEL68:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var67,var_errcount) on <var67:Int> */
/* Covariant cast for argument 0 (i) <var_errcount:Int> isa OTHER */
/* <var_errcount:Int> isa OTHER */
var72 = 1; /* easy <var_errcount:Int> isa OTHER*/
if (unlikely(!var72)) {
var_class_name75 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name75);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
fatal_exit(1);
}
var76 = var67 > var_errcount;
var70 = var76;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
if (var70){
goto RET_LABEL;
} else {
}
goto BREAK_label77;
} else {
}
if (var_superprop == NULL) {
var79 = 0; /* is null */
} else {
var79 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_superprop,((val*)NULL)) on <var_superprop:nullable MMethodDef> */
var_other = ((val*)NULL);
{
var82 = ((short int(*)(val* self, val* p0))(var_superprop->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_superprop, var_other); /* == on <var_superprop:nullable MMethodDef(MMethodDef)>*/
}
var83 = !var82;
var80 = var83;
goto RET_LABEL81;
RET_LABEL81:(void)0;
}
var79 = var80;
}
var_84 = var79;
if (var79){
{
{ /* Inline model#MMethod#is_root_init (var_candidate) on <var_candidate:nullable MMethod(MMethod)> */
var87 = var_candidate->attrs[COLOR_nitc__model__MMethod___is_root_init].s; /* _is_root_init on <var_candidate:nullable MMethod(MMethod)> */
var85 = var87;
RET_LABEL86:(void)0;
}
}
var78 = var85;
} else {
var78 = var_84;
}
if (var78){
goto BREAK_label77;
} else {
}
if (var_superprop == NULL) {
var90 = 0; /* is null */
} else {
var90 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_superprop,((val*)NULL)) on <var_superprop:nullable MMethodDef> */
var_other = ((val*)NULL);
{
var93 = ((short int(*)(val* self, val* p0))(var_superprop->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_superprop, var_other); /* == on <var_superprop:nullable MMethodDef(MMethodDef)>*/
}
var94 = !var93;
var91 = var94;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
var90 = var91;
}
var_95 = var90;
if (var90){
{
{ /* Inline model#MPropDef#mproperty (var_superprop) on <var_superprop:nullable MMethodDef(MMethodDef)> */
var98 = var_superprop->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_superprop:nullable MMethodDef(MMethodDef)> */
if (unlikely(var98 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var96 = var98;
RET_LABEL97:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var96,var_candidate) on <var96:MProperty(MMethod)> */
var_other = var_candidate;
{
var101 = ((short int(*)(val* self, val* p0))(var96->class->vft[COLOR_core__kernel__Object___61d_61d]))(var96, var_other); /* == on <var96:MProperty(MMethod)>*/
}
var102 = !var101;
var99 = var102;
goto RET_LABEL100;
RET_LABEL100:(void)0;
}
}
var89 = var99;
} else {
var89 = var_95;
}
var_103 = var89;
if (var89){
{
{ /* Inline model#MPropDef#mproperty (var_superprop) on <var_superprop:nullable MMethodDef(MMethodDef)> */
var106 = var_superprop->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_superprop:nullable MMethodDef(MMethodDef)> */
if (unlikely(var106 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var104 = var106;
RET_LABEL105:(void)0;
}
}
{
{ /* Inline model#MMethod#is_root_init (var104) on <var104:MProperty(MMethod)> */
var109 = var104->attrs[COLOR_nitc__model__MMethod___is_root_init].s; /* _is_root_init on <var104:MProperty(MMethod)> */
var107 = var109;
RET_LABEL108:(void)0;
}
}
var110 = !var107;
var88 = var110;
} else {
var88 = var_103;
}
if (var88){
if (unlikely(varonce==NULL)) {
var111 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce112!=NULL)) {
var113 = varonce112;
} else {
var114 = "Error: conflicting super constructor to call for `";
var115 = core__flat___NativeString___to_s_full(var114, 50l, 50l);
var113 = var115;
varonce112 = var113;
}
((struct instance_core__NativeArray*)var111)->values[0]=var113;
if (likely(varonce116!=NULL)) {
var117 = varonce116;
} else {
var118 = "`: `";
var119 = core__flat___NativeString___to_s_full(var118, 4l, 4l);
var117 = var119;
varonce116 = var117;
}
((struct instance_core__NativeArray*)var111)->values[2]=var117;
if (likely(varonce120!=NULL)) {
var121 = varonce120;
} else {
var122 = "`, `";
var123 = core__flat___NativeString___to_s_full(var122, 4l, 4l);
var121 = var123;
varonce120 = var121;
}
((struct instance_core__NativeArray*)var111)->values[4]=var121;
if (likely(varonce124!=NULL)) {
var125 = varonce124;
} else {
var126 = "`";
var127 = core__flat___NativeString___to_s_full(var126, 1l, 1l);
var125 = var127;
varonce124 = var125;
}
((struct instance_core__NativeArray*)var111)->values[6]=var125;
} else {
var111 = varonce;
varonce = NULL;
}
{
var128 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mproperty); /* to_s on <var_mproperty:MMethod>*/
}
((struct instance_core__NativeArray*)var111)->values[1]=var128;
{
var129 = nitc___nitc__MProperty___nitc__model_base__MEntity__full_name(var_candidate);
}
((struct instance_core__NativeArray*)var111)->values[3]=var129;
{
{ /* Inline model#MPropDef#mproperty (var_superprop) on <var_superprop:nullable MMethodDef(MMethodDef)> */
var132 = var_superprop->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_superprop:nullable MMethodDef(MMethodDef)> */
if (unlikely(var132 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var130 = var132;
RET_LABEL131:(void)0;
}
}
{
var133 = nitc___nitc__MProperty___nitc__model_base__MEntity__full_name(var130);
}
((struct instance_core__NativeArray*)var111)->values[5]=var133;
{
var134 = ((val*(*)(val* self))(var111->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var111); /* native_to_s on <var111:NativeArray[String]>*/
}
varonce = var111;
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var134); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#TypeVisitor#mmodule (var_v) on <var_v:TypeVisitor> */
var137 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___mmodule].val; /* _mmodule on <var_v:TypeVisitor> */
if (unlikely(var137 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 37);
fatal_exit(1);
}
var135 = var137;
RET_LABEL136:(void)0;
}
}
{
var138 = nitc___nitc__MProperty___lookup_definitions(var_candidate, var135, var_anchor);
}
var_candidatedefs = var138;
if (var_superprop == NULL) {
var140 = 0; /* is null */
} else {
var140 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_superprop,((val*)NULL)) on <var_superprop:nullable MMethodDef> */
var_other = ((val*)NULL);
{
var143 = ((short int(*)(val* self, val* p0))(var_superprop->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_superprop, var_other); /* == on <var_superprop:nullable MMethodDef(MMethodDef)>*/
}
var144 = !var143;
var141 = var144;
goto RET_LABEL142;
RET_LABEL142:(void)0;
}
var140 = var141;
}
var_145 = var140;
if (var140){
{
{ /* Inline model#MPropDef#mproperty (var_superprop) on <var_superprop:nullable MMethodDef(MMethodDef)> */
var148 = var_superprop->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_superprop:nullable MMethodDef(MMethodDef)> */
if (unlikely(var148 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var146 = var148;
RET_LABEL147:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var146,var_candidate) on <var146:MProperty(MMethod)> */
var_other57 = var_candidate;
{
{ /* Inline kernel#Object#is_same_instance (var146,var_other57) on <var146:MProperty(MMethod)> */
var153 = var146 == var_other57;
var151 = var153;
goto RET_LABEL152;
RET_LABEL152:(void)0;
}
}
var149 = var151;
goto RET_LABEL150;
RET_LABEL150:(void)0;
}
}
var139 = var149;
} else {
var139 = var_145;
}
if (var139){
{
var154 = core___core__SequenceRead___Collection__first(var_candidatedefs);
}
{
{ /* Inline kernel#Object#== (var_superprop,var154) on <var_superprop:nullable MMethodDef(MMethodDef)> */
var_other57 = var154;
{
{ /* Inline kernel#Object#is_same_instance (var_superprop,var_other57) on <var_superprop:nullable MMethodDef(MMethodDef)> */
var159 = var_superprop == var_other57;
var157 = var159;
goto RET_LABEL158;
RET_LABEL158:(void)0;
}
}
var155 = var157;
goto RET_LABEL156;
RET_LABEL156:(void)0;
}
}
if (var155){
goto BREAK_label77;
} else {
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_candidatedefs, var_superprop); /* Direct call array#Array#add on <var_candidatedefs:Array[MMethodDef]>*/
}
} else {
}
{
{ /* Inline array#AbstractArrayRead#length (var_candidatedefs) on <var_candidatedefs:Array[MMethodDef]> */
var162 = var_candidatedefs->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_candidatedefs:Array[MMethodDef]> */
var160 = var162;
RET_LABEL161:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var160,1l) on <var160:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var165 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var165)) {
var_class_name168 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name168);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
fatal_exit(1);
}
var169 = var160 > 1l;
var163 = var169;
goto RET_LABEL164;
RET_LABEL164:(void)0;
}
}
if (var163){
if (unlikely(varonce170==NULL)) {
var171 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce172!=NULL)) {
var173 = varonce172;
} else {
var174 = "Error: conflicting property definitions for property `";
var175 = core__flat___NativeString___to_s_full(var174, 54l, 54l);
var173 = var175;
varonce172 = var173;
}
((struct instance_core__NativeArray*)var171)->values[0]=var173;
if (likely(varonce176!=NULL)) {
var177 = varonce176;
} else {
var178 = "` in `";
var179 = core__flat___NativeString___to_s_full(var178, 6l, 6l);
var177 = var179;
varonce176 = var177;
}
((struct instance_core__NativeArray*)var171)->values[2]=var177;
if (likely(varonce180!=NULL)) {
var181 = varonce180;
} else {
var182 = "`: ";
var183 = core__flat___NativeString___to_s_full(var182, 3l, 3l);
var181 = var183;
varonce180 = var181;
}
((struct instance_core__NativeArray*)var171)->values[4]=var181;
} else {
var171 = varonce170;
varonce170 = NULL;
}
{
var184 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mproperty); /* to_s on <var_mproperty:MMethod>*/
}
((struct instance_core__NativeArray*)var171)->values[1]=var184;
{
var185 = ((val*(*)(val* self))(var_recvtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recvtype); /* to_s on <var_recvtype:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var171)->values[3]=var185;
if (likely(varonce186!=NULL)) {
var187 = varonce186;
} else {
var188 = ", ";
var189 = core__flat___NativeString___to_s_full(var188, 2l, 2l);
var187 = var189;
varonce186 = var187;
}
{
var190 = core__abstract_text___Collection___join(var_candidatedefs, var187);
}
((struct instance_core__NativeArray*)var171)->values[5]=var190;
{
var191 = ((val*(*)(val* self))(var171->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var171); /* native_to_s on <var171:NativeArray[String]>*/
}
varonce170 = var171;
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var191); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
var192 = core___core__SequenceRead___Collection__first(var_candidatedefs);
}
var_superprop = var192;
BREAK_label77: (void)0;
{
((void(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_31); /* next on <var_31:IndexedIterator[MClassType]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_31); /* finish on <var_31:IndexedIterator[MClassType]>*/
}
if (var_superprop == NULL) {
var193 = 1; /* is null */
} else {
var193 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_superprop,((val*)NULL)) on <var_superprop:nullable MMethodDef> */
var_other57 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_superprop,var_other57) on <var_superprop:nullable MMethodDef(MMethodDef)> */
var198 = var_superprop == var_other57;
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
var203 = "Error: no super method to call for `";
var204 = core__flat___NativeString___to_s_full(var203, 36l, 36l);
var202 = var204;
varonce201 = var202;
}
((struct instance_core__NativeArray*)var200)->values[0]=var202;
if (likely(varonce205!=NULL)) {
var206 = varonce205;
} else {
var207 = "`.";
var208 = core__flat___NativeString___to_s_full(var207, 2l, 2l);
var206 = var208;
varonce205 = var206;
}
((struct instance_core__NativeArray*)var200)->values[2]=var206;
} else {
var200 = varonce199;
varonce199 = NULL;
}
{
var209 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mproperty); /* to_s on <var_mproperty:MMethod>*/
}
((struct instance_core__NativeArray*)var200)->values[1]=var209;
{
var210 = ((val*(*)(val* self))(var200->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var200); /* native_to_s on <var200:NativeArray[String]>*/
}
varonce199 = var200;
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var210); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MMethodDef#new_msignature (var_superprop) on <var_superprop:nullable MMethodDef(MMethodDef)> */
var214 = var_superprop->attrs[COLOR_nitc__model__MMethodDef___new_msignature].val; /* _new_msignature on <var_superprop:nullable MMethodDef(MMethodDef)> */
var212 = var214;
RET_LABEL213:(void)0;
}
}
if (var212!=NULL) {
var211 = var212;
} else {
{
{ /* Inline model#MMethodDef#msignature (var_superprop) on <var_superprop:nullable MMethodDef(MMethodDef)> */
var217 = var_superprop->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_superprop:nullable MMethodDef(MMethodDef)> */
var215 = var217;
RET_LABEL216:(void)0;
}
}
if (unlikely(var215 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 2007);
fatal_exit(1);
}
var211 = var215;
}
var_msignature = var211;
{
var218 = nitc__typing___nitc__typing__TypeVisitor___resolve_for(var_v, var_msignature, var_recvtype, 1);
}
/* <var218:MType> isa MSignature */
cltype220 = type_nitc__MSignature.color;
idtype221 = type_nitc__MSignature.id;
if(cltype220 >= var218->type->table_size) {
var219 = 0;
} else {
var219 = var218->type->type_table[cltype220] == idtype221;
}
if (unlikely(!var219)) {
var_class_name222 = var218 == NULL ? "null" : var218->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MSignature", var_class_name222);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 2008);
fatal_exit(1);
}
var_msignature = var218;
var223 = NEW_nitc__CallSite(&type_nitc__CallSite);
{
var224 = nitc___nitc__ANode___hot_location(self);
}
{
{ /* Inline typing#TypeVisitor#mmodule (var_v) on <var_v:TypeVisitor> */
var227 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___mmodule].val; /* _mmodule on <var_v:TypeVisitor> */
if (unlikely(var227 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 37);
fatal_exit(1);
}
var225 = var227;
RET_LABEL226:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#anchor (var_v) on <var_v:TypeVisitor> */
var230 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___anchor].val; /* _anchor on <var_v:TypeVisitor> */
var228 = var230;
RET_LABEL229:(void)0;
}
}
{
{ /* Inline model#MPropDef#mproperty (var_superprop) on <var_superprop:nullable MMethodDef(MMethodDef)> */
var233 = var_superprop->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_superprop:nullable MMethodDef(MMethodDef)> */
if (unlikely(var233 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var231 = var233;
RET_LABEL232:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var223->class->vft[COLOR_nitc__typing__CallSite__location_61d]))(var223, var224); /* location= on <var223:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var223->class->vft[COLOR_nitc__typing__CallSite__recv_61d]))(var223, var_recvtype); /* recv= on <var223:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var223->class->vft[COLOR_nitc__typing__CallSite__mmodule_61d]))(var223, var225); /* mmodule= on <var223:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var223->class->vft[COLOR_nitc__typing__CallSite__anchor_61d]))(var223, var228); /* anchor= on <var223:CallSite>*/
}
{
((void(*)(val* self, short int p0))(var223->class->vft[COLOR_nitc__typing__CallSite__recv_is_self_61d]))(var223, 1); /* recv_is_self= on <var223:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var223->class->vft[COLOR_nitc__typing__CallSite__mproperty_61d]))(var223, var231); /* mproperty= on <var223:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var223->class->vft[COLOR_nitc__typing__CallSite__mpropdef_61d]))(var223, var_superprop); /* mpropdef= on <var223:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var223->class->vft[COLOR_nitc__typing__CallSite__msignature_61d]))(var223, var_msignature); /* msignature= on <var223:CallSite>*/
}
{
((void(*)(val* self, short int p0))(var223->class->vft[COLOR_nitc__typing__CallSite__erasure_cast_61d]))(var223, 0); /* erasure_cast= on <var223:CallSite>*/
}
{
((void(*)(val* self))(var223->class->vft[COLOR_core__kernel__Object__init]))(var223); /* init on <var223:CallSite>*/
}
var_callsite = var223;
{
{ /* Inline typing#ASuperExpr#callsite= (self,var_callsite) on <self:ASuperExpr> */
self->attrs[COLOR_nitc__typing__ASuperExpr___callsite].val = var_callsite; /* _callsite on <self:ASuperExpr> */
RET_LABEL234:(void)0;
}
}
{
{ /* Inline parser_nodes#ASuperExpr#n_args (self) on <self:ASuperExpr> */
var237 = self->attrs[COLOR_nitc__parser_nodes__ASuperExpr___n_args].val; /* _n_args on <self:ASuperExpr> */
if (unlikely(var237 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2348);
fatal_exit(1);
}
var235 = var237;
RET_LABEL236:(void)0;
}
}
{
var238 = nitc__typing___AExprs___to_a(var235);
}
var_args = var238;
{
{ /* Inline array#AbstractArrayRead#length (var_args) on <var_args:Array[AExpr]> */
var241 = var_args->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_args:Array[AExpr]> */
var239 = var241;
RET_LABEL240:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var239,0l) on <var239:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var244 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var244)) {
var_class_name247 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name247);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
fatal_exit(1);
}
var248 = var239 > 0l;
var242 = var248;
goto RET_LABEL243;
RET_LABEL243:(void)0;
}
}
if (var242){
{
var249 = nitc___nitc__CallSite___check_signature(var_callsite, var_v, self, var_args);
}
} else {
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var252 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var250 = var252;
RET_LABEL251:(void)0;
}
}
if (var250 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 2018);
fatal_exit(1);
} else {
var253 = nitc___nitc__MSignature___arity(var250);
}
{
var254 = nitc___nitc__MSignature___arity(var_msignature);
}
{
{ /* Inline kernel#Int#< (var253,var254) on <var253:Int> */
/* Covariant cast for argument 0 (i) <var254:Int> isa OTHER */
/* <var254:Int> isa OTHER */
var257 = 1; /* easy <var254:Int> isa OTHER*/
if (unlikely(!var257)) {
var_class_name260 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name260);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var261 = var253 < var254;
var255 = var261;
goto RET_LABEL256;
RET_LABEL256:(void)0;
}
}
if (var255){
if (unlikely(varonce262==NULL)) {
var263 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce264!=NULL)) {
var265 = varonce264;
} else {
var266 = "Error: not enough implicit arguments to pass. Got `";
var267 = core__flat___NativeString___to_s_full(var266, 51l, 51l);
var265 = var267;
varonce264 = var265;
}
((struct instance_core__NativeArray*)var263)->values[0]=var265;
if (likely(varonce268!=NULL)) {
var269 = varonce268;
} else {
var270 = "`, expected at least `";
var271 = core__flat___NativeString___to_s_full(var270, 22l, 22l);
var269 = var271;
varonce268 = var269;
}
((struct instance_core__NativeArray*)var263)->values[2]=var269;
if (likely(varonce272!=NULL)) {
var273 = varonce272;
} else {
var274 = "`. Signature is `";
var275 = core__flat___NativeString___to_s_full(var274, 17l, 17l);
var273 = var275;
varonce272 = var273;
}
((struct instance_core__NativeArray*)var263)->values[4]=var273;
if (likely(varonce276!=NULL)) {
var277 = varonce276;
} else {
var278 = "`.";
var279 = core__flat___NativeString___to_s_full(var278, 2l, 2l);
var277 = var279;
varonce276 = var277;
}
((struct instance_core__NativeArray*)var263)->values[6]=var277;
} else {
var263 = varonce262;
varonce262 = NULL;
}
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var282 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var280 = var282;
RET_LABEL281:(void)0;
}
}
if (var280 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 2019);
fatal_exit(1);
} else {
var283 = nitc___nitc__MSignature___arity(var280);
}
var284 = core__flat___Int___core__abstract_text__Object__to_s(var283);
((struct instance_core__NativeArray*)var263)->values[1]=var284;
{
var285 = nitc___nitc__MSignature___arity(var_msignature);
}
var286 = core__flat___Int___core__abstract_text__Object__to_s(var285);
((struct instance_core__NativeArray*)var263)->values[3]=var286;
{
var287 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_msignature); /* to_s on <var_msignature:MSignature>*/
}
((struct instance_core__NativeArray*)var263)->values[5]=var287;
{
var288 = ((val*(*)(val* self))(var263->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var263); /* native_to_s on <var263:NativeArray[String]>*/
}
varonce262 = var263;
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var288); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
var_i = 0l;
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:MSignature> */
var291 = var_msignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var291 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1783);
fatal_exit(1);
}
var289 = var291;
RET_LABEL290:(void)0;
}
}
var_292 = var289;
{
var293 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_292);
}
var_294 = var293;
for(;;) {
{
var295 = ((short int(*)(val* self))((((long)var_294&3)?class_info[((long)var_294&3)]:var_294->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_294); /* is_ok on <var_294:IndexedIterator[MParameter]>*/
}
if (var295){
} else {
goto BREAK_label296;
}
{
var297 = ((val*(*)(val* self))((((long)var_294&3)?class_info[((long)var_294&3)]:var_294->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_294); /* item on <var_294:IndexedIterator[MParameter]>*/
}
var_sp = var297;
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var300 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var298 = var300;
RET_LABEL299:(void)0;
}
}
if (var298 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 2025);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#mparameters (var298) on <var298:nullable MSignature> */
if (unlikely(var298 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1783);
fatal_exit(1);
}
var303 = var298->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var298:nullable MSignature> */
if (unlikely(var303 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1783);
fatal_exit(1);
}
var301 = var303;
RET_LABEL302:(void)0;
}
}
{
var304 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var301, var_i);
}
var_p = var304;
{
{ /* Inline model#MParameter#mtype (var_p) on <var_p:MParameter> */
var307 = var_p->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_p:MParameter> */
if (unlikely(var307 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1900);
fatal_exit(1);
}
var305 = var307;
RET_LABEL306:(void)0;
}
}
{
{ /* Inline model#MParameter#mtype (var_sp) on <var_sp:MParameter> */
var310 = var_sp->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_sp:MParameter> */
if (unlikely(var310 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1900);
fatal_exit(1);
}
var308 = var310;
RET_LABEL309:(void)0;
}
}
{
var311 = nitc__typing___nitc__typing__TypeVisitor___is_subtype(var_v, var305, var308);
}
var312 = !var311;
if (var312){
if (unlikely(varonce313==NULL)) {
var314 = NEW_core__NativeArray(10l, &type_core__NativeArray__core__String);
if (likely(varonce315!=NULL)) {
var316 = varonce315;
} else {
var317 = "Type Error: expected argument #";
var318 = core__flat___NativeString___to_s_full(var317, 31l, 31l);
var316 = var318;
varonce315 = var316;
}
((struct instance_core__NativeArray*)var314)->values[0]=var316;
if (likely(varonce319!=NULL)) {
var320 = varonce319;
} else {
var321 = " of type `";
var322 = core__flat___NativeString___to_s_full(var321, 10l, 10l);
var320 = var322;
varonce319 = var320;
}
((struct instance_core__NativeArray*)var314)->values[2]=var320;
if (likely(varonce323!=NULL)) {
var324 = varonce323;
} else {
var325 = "`, got implicit argument `";
var326 = core__flat___NativeString___to_s_full(var325, 26l, 26l);
var324 = var326;
varonce323 = var324;
}
((struct instance_core__NativeArray*)var314)->values[4]=var324;
if (likely(varonce327!=NULL)) {
var328 = varonce327;
} else {
var329 = "` of type `";
var330 = core__flat___NativeString___to_s_full(var329, 11l, 11l);
var328 = var330;
varonce327 = var328;
}
((struct instance_core__NativeArray*)var314)->values[6]=var328;
if (likely(varonce331!=NULL)) {
var332 = varonce331;
} else {
var333 = "`. Signature is ";
var334 = core__flat___NativeString___to_s_full(var333, 16l, 16l);
var332 = var334;
varonce331 = var332;
}
((struct instance_core__NativeArray*)var314)->values[8]=var332;
} else {
var314 = varonce313;
varonce313 = NULL;
}
var335 = core__flat___Int___core__abstract_text__Object__to_s(var_i);
((struct instance_core__NativeArray*)var314)->values[1]=var335;
{
{ /* Inline model#MParameter#mtype (var_sp) on <var_sp:MParameter> */
var338 = var_sp->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_sp:MParameter> */
if (unlikely(var338 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1900);
fatal_exit(1);
}
var336 = var338;
RET_LABEL337:(void)0;
}
}
{
var339 = ((val*(*)(val* self))(var336->class->vft[COLOR_core__abstract_text__Object__to_s]))(var336); /* to_s on <var336:MType>*/
}
((struct instance_core__NativeArray*)var314)->values[3]=var339;
{
{ /* Inline model#MParameter#name (var_p) on <var_p:MParameter> */
var342 = var_p->attrs[COLOR_nitc__model__MParameter___name].val; /* _name on <var_p:MParameter> */
if (unlikely(var342 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1897);
fatal_exit(1);
}
var340 = var342;
RET_LABEL341:(void)0;
}
}
((struct instance_core__NativeArray*)var314)->values[5]=var340;
{
{ /* Inline model#MParameter#mtype (var_p) on <var_p:MParameter> */
var345 = var_p->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_p:MParameter> */
if (unlikely(var345 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1900);
fatal_exit(1);
}
var343 = var345;
RET_LABEL344:(void)0;
}
}
{
var346 = ((val*(*)(val* self))(var343->class->vft[COLOR_core__abstract_text__Object__to_s]))(var343); /* to_s on <var343:MType>*/
}
((struct instance_core__NativeArray*)var314)->values[7]=var346;
{
var347 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_msignature); /* to_s on <var_msignature:MSignature>*/
}
((struct instance_core__NativeArray*)var314)->values[9]=var347;
{
var348 = ((val*(*)(val* self))(var314->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var314); /* native_to_s on <var314:NativeArray[String]>*/
}
varonce313 = var314;
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var348); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var351 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var351)) {
var_class_name354 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name354);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var355 = var_i + 1l;
var349 = var355;
goto RET_LABEL350;
RET_LABEL350:(void)0;
}
}
var_i = var349;
{
((void(*)(val* self))((((long)var_294&3)?class_info[((long)var_294&3)]:var_294->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_294); /* next on <var_294:IndexedIterator[MParameter]>*/
}
}
BREAK_label296: (void)0;
{
((void(*)(val* self))((((long)var_294&3)?class_info[((long)var_294&3)]:var_294->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_294); /* finish on <var_294:IndexedIterator[MParameter]>*/
}
}
{
{ /* Inline typing#AExpr#is_typed= (self,1) on <self:ASuperExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = 1; /* _is_typed on <self:ASuperExpr> */
RET_LABEL356:(void)0;
}
}
RET_LABEL:;
}
/* method typing#ANewExpr#callsite for (self: ANewExpr): nullable CallSite */
val* nitc__typing___ANewExpr___callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nitc__typing__ANewExpr___callsite].val; /* _callsite on <self:ANewExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ANewExpr#callsite= for (self: ANewExpr, nullable CallSite) */
void nitc__typing___ANewExpr___callsite_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__ANewExpr___callsite].val = p0; /* _callsite on <self:ANewExpr> */
RET_LABEL:;
}
/* method typing#ANewExpr#recvtype for (self: ANewExpr): nullable MClassType */
val* nitc__typing___ANewExpr___recvtype(val* self) {
val* var /* : nullable MClassType */;
val* var1 /* : nullable MClassType */;
var1 = self->attrs[COLOR_nitc__typing__ANewExpr___recvtype].val; /* _recvtype on <self:ANewExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ANewExpr#recvtype= for (self: ANewExpr, nullable MClassType) */
void nitc__typing___ANewExpr___recvtype_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__ANewExpr___recvtype].val = p0; /* _recvtype on <self:ANewExpr> */
RET_LABEL:;
}
/* method typing#ANewExpr#accept_typing for (self: ANewExpr, TypeVisitor) */
void nitc__typing___ANewExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AType */;
val* var2 /* : AType */;
val* var3 /* : nullable MType */;
val* var_recvtype /* var recvtype: nullable MType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
int cltype;
int idtype;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : NativeArray[String] */;
static val* varonce;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : String */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : String */;
val* var24 /* : String */;
val* var25 /* : String */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var30 /* : NativeArray[String] */;
static val* varonce29;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
val* var34 /* : String */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
val* var38 /* : String */;
val* var39 /* : String */;
val* var40 /* : String */;
val* var42 /* : NativeArray[String] */;
static val* varonce41;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
val* var46 /* : String */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
val* var50 /* : String */;
val* var51 /* : String */;
val* var52 /* : String */;
val* var54 /* : MClass */;
val* var56 /* : MClass */;
val* var57 /* : MClassKind */;
val* var59 /* : MClassKind */;
val* var_kind /* var kind: MClassKind */;
val* var60 /* : nullable AQid */;
val* var62 /* : nullable AQid */;
val* var_nqid /* var nqid: nullable AQid */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
val* var_other66 /* var other: nullable Object */;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
val* var69 /* : TId */;
val* var71 /* : TId */;
val* var72 /* : String */;
val* var_name /* var name: String */;
val* var_node /* var node: ANode */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
val* var76 /* : String */;
val* var77 /* : TKwnew */;
val* var79 /* : TKwnew */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
val* var83 /* : String */;
short int var84 /* : Bool */;
val* var85 /* : Sys */;
val* var86 /* : MClassKind */;
short int var87 /* : Bool */;
short int var89 /* : Bool */;
short int var90 /* : Bool */;
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
val* var105 /* : String */;
val* var106 /* : String */;
val* var107 /* : String */;
val* var108 /* : AExprs */;
val* var110 /* : AExprs */;
val* var111 /* : ANodes[AExpr] */;
val* var113 /* : ANodes[AExpr] */;
short int var114 /* : Bool */;
val* var115 /* : AExprs */;
val* var117 /* : AExprs */;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : NativeString */;
val* var121 /* : String */;
val* var123 /* : nullable CallSite */;
val* var_callsite /* var callsite: nullable CallSite */;
short int var124 /* : Bool */;
short int var125 /* : Bool */;
short int var127 /* : Bool */;
short int var129 /* : Bool */;
val* var130 /* : MMethod */;
val* var132 /* : MMethod */;
short int var133 /* : Bool */;
short int var135 /* : Bool */;
short int var136 /* : Bool */;
val* var137 /* : Sys */;
val* var138 /* : MClassKind */;
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
static val* varonce153;
val* var154 /* : String */;
char* var155 /* : NativeString */;
val* var156 /* : String */;
val* var157 /* : String */;
val* var158 /* : String */;
val* var159 /* : String */;
val* var161 /* : MSignature */;
val* var163 /* : MSignature */;
val* var164 /* : nullable MType */;
val* var166 /* : nullable MType */;
val* var168 /* : nullable MType */;
val* var170 /* : nullable MType */;
short int var171 /* : Bool */;
short int var172 /* : Bool */;
short int var174 /* : Bool */;
short int var175 /* : Bool */;
val* var177 /* : MMethod */;
val* var179 /* : MMethod */;
val* var180 /* : MClass */;
val* var182 /* : MClass */;
short int var183 /* : Bool */;
short int var184 /* : Bool */;
val* var186 /* : NativeArray[String] */;
static val* varonce185;
static val* varonce187;
val* var188 /* : String */;
char* var189 /* : NativeString */;
val* var190 /* : String */;
static val* varonce191;
val* var192 /* : String */;
char* var193 /* : NativeString */;
val* var194 /* : String */;
val* var195 /* : String */;
val* var196 /* : AExprs */;
val* var198 /* : AExprs */;
val* var199 /* : Array[AExpr] */;
val* var_args /* var args: Array[AExpr] */;
short int var200 /* : Bool */;
var_v = p0;
{
{ /* Inline parser_nodes#ANewExpr#n_type (self) on <self:ANewExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ANewExpr___n_type].val; /* _n_type on <self:ANewExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2259);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__typing___nitc__typing__TypeVisitor___resolve_mtype(var_v, var);
}
var_recvtype = var3;
if (var_recvtype == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_recvtype,((val*)NULL)) on <var_recvtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_recvtype,var_other) on <var_recvtype:nullable MType(MType)> */
var9 = var_recvtype == var_other;
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
/* <var_recvtype:nullable MType(MType)> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var_recvtype->type->table_size) {
var10 = 0;
} else {
var10 = var_recvtype->type->type_table[cltype] == idtype;
}
var11 = !var10;
if (var11){
/* <var_recvtype:nullable MType(MType)> isa MNullableType */
cltype13 = type_nitc__MNullableType.color;
idtype14 = type_nitc__MNullableType.id;
if(cltype13 >= var_recvtype->type->table_size) {
var12 = 0;
} else {
var12 = var_recvtype->type->type_table[cltype13] == idtype14;
}
if (var12){
if (unlikely(varonce==NULL)) {
var15 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "Type Error: cannot instantiate the nullable type `";
var19 = core__flat___NativeString___to_s_full(var18, 50l, 50l);
var17 = var19;
varonce16 = var17;
}
((struct instance_core__NativeArray*)var15)->values[0]=var17;
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "`.";
var23 = core__flat___NativeString___to_s_full(var22, 2l, 2l);
var21 = var23;
varonce20 = var21;
}
((struct instance_core__NativeArray*)var15)->values[2]=var21;
} else {
var15 = varonce;
varonce = NULL;
}
{
var24 = ((val*(*)(val* self))(var_recvtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recvtype); /* to_s on <var_recvtype:nullable MType(MNullableType)>*/
}
((struct instance_core__NativeArray*)var15)->values[1]=var24;
{
var25 = ((val*(*)(val* self))(var15->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var15); /* native_to_s on <var15:NativeArray[String]>*/
}
varonce = var15;
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var25); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
/* <var_recvtype:nullable MType(MType)> isa MFormalType */
cltype27 = type_nitc__MFormalType.color;
idtype28 = type_nitc__MFormalType.id;
if(cltype27 >= var_recvtype->type->table_size) {
var26 = 0;
} else {
var26 = var_recvtype->type->type_table[cltype27] == idtype28;
}
if (var26){
if (unlikely(varonce29==NULL)) {
var30 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "Type Error: cannot instantiate the formal type `";
var34 = core__flat___NativeString___to_s_full(var33, 48l, 48l);
var32 = var34;
varonce31 = var32;
}
((struct instance_core__NativeArray*)var30)->values[0]=var32;
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "`.";
var38 = core__flat___NativeString___to_s_full(var37, 2l, 2l);
var36 = var38;
varonce35 = var36;
}
((struct instance_core__NativeArray*)var30)->values[2]=var36;
} else {
var30 = varonce29;
varonce29 = NULL;
}
{
var39 = ((val*(*)(val* self))(var_recvtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recvtype); /* to_s on <var_recvtype:nullable MType(MFormalType)>*/
}
((struct instance_core__NativeArray*)var30)->values[1]=var39;
{
var40 = ((val*(*)(val* self))(var30->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var30); /* native_to_s on <var30:NativeArray[String]>*/
}
varonce29 = var30;
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var40); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
if (unlikely(varonce41==NULL)) {
var42 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "Type Error: cannot instantiate the type `";
var46 = core__flat___NativeString___to_s_full(var45, 41l, 41l);
var44 = var46;
varonce43 = var44;
}
((struct instance_core__NativeArray*)var42)->values[0]=var44;
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "`.";
var50 = core__flat___NativeString___to_s_full(var49, 2l, 2l);
var48 = var50;
varonce47 = var48;
}
((struct instance_core__NativeArray*)var42)->values[2]=var48;
} else {
var42 = varonce41;
varonce41 = NULL;
}
{
var51 = ((val*(*)(val* self))(var_recvtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recvtype); /* to_s on <var_recvtype:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var42)->values[1]=var51;
{
var52 = ((val*(*)(val* self))(var42->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var42); /* native_to_s on <var42:NativeArray[String]>*/
}
varonce41 = var42;
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var52); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
}
}
} else {
}
{
{ /* Inline typing#ANewExpr#recvtype= (self,var_recvtype) on <self:ANewExpr> */
self->attrs[COLOR_nitc__typing__ANewExpr___recvtype].val = var_recvtype; /* _recvtype on <self:ANewExpr> */
RET_LABEL53:(void)0;
}
}
{
{ /* Inline model#MClassType#mclass (var_recvtype) on <var_recvtype:nullable MType(MClassType)> */
var56 = var_recvtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_recvtype:nullable MType(MClassType)> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1163);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var54) on <var54:MClass> */
var59 = var54->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var54:MClass> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 459);
fatal_exit(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
var_kind = var57;
{
{ /* Inline parser_nodes#ANewExpr#n_qid (self) on <self:ANewExpr> */
var62 = self->attrs[COLOR_nitc__parser_nodes__ANewExpr___n_qid].val; /* _n_qid on <self:ANewExpr> */
var60 = var62;
RET_LABEL61:(void)0;
}
}
var_nqid = var60;
if (var_nqid == NULL) {
var63 = 0; /* is null */
} else {
var63 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nqid,((val*)NULL)) on <var_nqid:nullable AQid> */
var_other66 = ((val*)NULL);
{
var67 = ((short int(*)(val* self, val* p0))(var_nqid->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nqid, var_other66); /* == on <var_nqid:nullable AQid(AQid)>*/
}
var68 = !var67;
var64 = var68;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
var63 = var64;
}
if (var63){
{
{ /* Inline parser_nodes#AQid#n_id (var_nqid) on <var_nqid:nullable AQid(AQid)> */
var71 = var_nqid->attrs[COLOR_nitc__parser_nodes__AQid___n_id].val; /* _n_id on <var_nqid:nullable AQid(AQid)> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1658);
fatal_exit(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
{
var72 = nitc__lexer_work___Token___text(var69);
}
var_name = var72;
var_node = var_nqid;
} else {
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = "new";
var76 = core__flat___NativeString___to_s_full(var75, 3l, 3l);
var74 = var76;
varonce73 = var74;
}
var_name = var74;
{
{ /* Inline parser_nodes#ANewExpr#n_kwnew (self) on <self:ANewExpr> */
var79 = self->attrs[COLOR_nitc__parser_nodes__ANewExpr___n_kwnew].val; /* _n_kwnew on <self:ANewExpr> */
if (unlikely(var79 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnew");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2256);
fatal_exit(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
var_node = var77;
}
if (likely(varonce80!=NULL)) {
var81 = varonce80;
} else {
var82 = "intern";
var83 = core__flat___NativeString___to_s_full(var82, 6l, 6l);
var81 = var83;
varonce80 = var81;
}
{
var84 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var81); /* == on <var_name:String>*/
}
if (var84){
var85 = glob_sys;
{
var86 = nitc__model___core__Sys___concrete_kind(var85);
}
{
{ /* Inline kernel#Object#!= (var_kind,var86) on <var_kind:MClassKind> */
var_other66 = var86;
{
var89 = ((short int(*)(val* self, val* p0))(var_kind->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_kind, var_other66); /* == on <var_kind:MClassKind>*/
}
var90 = !var89;
var87 = var90;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
}
if (var87){
if (unlikely(varonce91==NULL)) {
var92 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce93!=NULL)) {
var94 = varonce93;
} else {
var95 = "Type Error: cannot instantiate ";
var96 = core__flat___NativeString___to_s_full(var95, 31l, 31l);
var94 = var96;
varonce93 = var94;
}
((struct instance_core__NativeArray*)var92)->values[0]=var94;
if (likely(varonce97!=NULL)) {
var98 = varonce97;
} else {
var99 = " ";
var100 = core__flat___NativeString___to_s_full(var99, 1l, 1l);
var98 = var100;
varonce97 = var98;
}
((struct instance_core__NativeArray*)var92)->values[2]=var98;
if (likely(varonce101!=NULL)) {
var102 = varonce101;
} else {
var103 = ".";
var104 = core__flat___NativeString___to_s_full(var103, 1l, 1l);
var102 = var104;
varonce101 = var102;
}
((struct instance_core__NativeArray*)var92)->values[4]=var102;
} else {
var92 = varonce91;
varonce91 = NULL;
}
{
var105 = ((val*(*)(val* self))(var_kind->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_kind); /* to_s on <var_kind:MClassKind>*/
}
((struct instance_core__NativeArray*)var92)->values[1]=var105;
{
var106 = ((val*(*)(val* self))(var_recvtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recvtype); /* to_s on <var_recvtype:nullable MType(MClassType)>*/
}
((struct instance_core__NativeArray*)var92)->values[3]=var106;
{
var107 = ((val*(*)(val* self))(var92->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var92); /* native_to_s on <var92:NativeArray[String]>*/
}
varonce91 = var92;
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var107); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ANewExpr#n_args (self) on <self:ANewExpr> */
var110 = self->attrs[COLOR_nitc__parser_nodes__ANewExpr___n_args].val; /* _n_args on <self:ANewExpr> */
if (unlikely(var110 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2265);
fatal_exit(1);
}
var108 = var110;
RET_LABEL109:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var108) on <var108:AExprs> */
var113 = var108->attrs[COLOR_nitc__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var108:AExprs> */
if (unlikely(var113 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2709);
fatal_exit(1);
}
var111 = var113;
RET_LABEL112:(void)0;
}
}
{
var114 = core___core__Collection___not_empty(var111);
}
if (var114){
{
{ /* Inline parser_nodes#ANewExpr#n_args (self) on <self:ANewExpr> */
var117 = self->attrs[COLOR_nitc__parser_nodes__ANewExpr___n_args].val; /* _n_args on <self:ANewExpr> */
if (unlikely(var117 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2265);
fatal_exit(1);
}
var115 = var117;
RET_LABEL116:(void)0;
}
}
if (likely(varonce118!=NULL)) {
var119 = varonce118;
} else {
var120 = "Type Error: the intern constructor expects no arguments.";
var121 = core__flat___NativeString___to_s_full(var120, 56l, 56l);
var119 = var121;
varonce118 = var119;
}
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, var115, var119); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#AExpr#mtype= (self,var_recvtype) on <self:ANewExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var_recvtype; /* _mtype on <self:ANewExpr> */
RET_LABEL122:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
var123 = nitc__typing___nitc__typing__TypeVisitor___get_method(var_v, var_node, var_recvtype, var_name, 0);
}
var_callsite = var123;
if (var_callsite == NULL) {
var124 = 1; /* is null */
} else {
var124 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_callsite,((val*)NULL)) on <var_callsite:nullable CallSite> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_callsite,var_other) on <var_callsite:nullable CallSite(CallSite)> */
var129 = var_callsite == var_other;
var127 = var129;
goto RET_LABEL128;
RET_LABEL128:(void)0;
}
}
var125 = var127;
goto RET_LABEL126;
RET_LABEL126:(void)0;
}
var124 = var125;
}
if (var124){
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#CallSite#mproperty (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var132 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var132 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 653);
fatal_exit(1);
}
var130 = var132;
RET_LABEL131:(void)0;
}
}
{
{ /* Inline model#MMethod#is_new (var130) on <var130:MMethod> */
var135 = var130->attrs[COLOR_nitc__model__MMethod___is_new].s; /* _is_new on <var130:MMethod> */
var133 = var135;
RET_LABEL134:(void)0;
}
}
var136 = !var133;
if (var136){
var137 = glob_sys;
{
var138 = nitc__model___core__Sys___concrete_kind(var137);
}
{
{ /* Inline kernel#Object#!= (var_kind,var138) on <var_kind:MClassKind> */
var_other66 = var138;
{
var141 = ((short int(*)(val* self, val* p0))(var_kind->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_kind, var_other66); /* == on <var_kind:MClassKind>*/
}
var142 = !var141;
var139 = var142;
goto RET_LABEL140;
RET_LABEL140:(void)0;
}
}
if (var139){
if (unlikely(varonce143==NULL)) {
var144 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce145!=NULL)) {
var146 = varonce145;
} else {
var147 = "Type Error: cannot instantiate ";
var148 = core__flat___NativeString___to_s_full(var147, 31l, 31l);
var146 = var148;
varonce145 = var146;
}
((struct instance_core__NativeArray*)var144)->values[0]=var146;
if (likely(varonce149!=NULL)) {
var150 = varonce149;
} else {
var151 = " `";
var152 = core__flat___NativeString___to_s_full(var151, 2l, 2l);
var150 = var152;
varonce149 = var150;
}
((struct instance_core__NativeArray*)var144)->values[2]=var150;
if (likely(varonce153!=NULL)) {
var154 = varonce153;
} else {
var155 = "`.";
var156 = core__flat___NativeString___to_s_full(var155, 2l, 2l);
var154 = var156;
varonce153 = var154;
}
((struct instance_core__NativeArray*)var144)->values[4]=var154;
} else {
var144 = varonce143;
varonce143 = NULL;
}
{
var157 = ((val*(*)(val* self))(var_kind->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_kind); /* to_s on <var_kind:MClassKind>*/
}
((struct instance_core__NativeArray*)var144)->values[1]=var157;
{
var158 = ((val*(*)(val* self))(var_recvtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recvtype); /* to_s on <var_recvtype:nullable MType(MClassType)>*/
}
((struct instance_core__NativeArray*)var144)->values[3]=var158;
{
var159 = ((val*(*)(val* self))(var144->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var144); /* native_to_s on <var144:NativeArray[String]>*/
}
varonce143 = var144;
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var159); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#AExpr#mtype= (self,var_recvtype) on <self:ANewExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var_recvtype; /* _mtype on <self:ANewExpr> */
RET_LABEL160:(void)0;
}
}
} else {
{
{ /* Inline typing#CallSite#msignature (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var163 = var_callsite->attrs[COLOR_nitc__typing__CallSite___msignature].val; /* _msignature on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var163 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 660);
fatal_exit(1);
}
var161 = var163;
RET_LABEL162:(void)0;
}
}
{
{ /* Inline model#MSignature#return_mtype (var161) on <var161:MSignature> */
var166 = var161->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var161:MSignature> */
var164 = var166;
RET_LABEL165:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var164) on <self:ANewExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var164; /* _mtype on <self:ANewExpr> */
RET_LABEL167:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype (self) on <self:ANewExpr> */
var170 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:ANewExpr> */
var168 = var170;
RET_LABEL169:(void)0;
}
}
if (var168 == NULL) {
var171 = 0; /* is null */
} else {
var171 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var168,((val*)NULL)) on <var168:nullable MType> */
var_other66 = ((val*)NULL);
{
var174 = ((short int(*)(val* self, val* p0))(var168->class->vft[COLOR_core__kernel__Object___61d_61d]))(var168, var_other66); /* == on <var168:nullable MType(MType)>*/
}
var175 = !var174;
var172 = var175;
goto RET_LABEL173;
RET_LABEL173:(void)0;
}
var171 = var172;
}
if (unlikely(!var171)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 2103);
fatal_exit(1);
}
}
{
{ /* Inline typing#ANewExpr#callsite= (self,var_callsite) on <self:ANewExpr> */
self->attrs[COLOR_nitc__typing__ANewExpr___callsite].val = var_callsite; /* _callsite on <self:ANewExpr> */
RET_LABEL176:(void)0;
}
}
{
{ /* Inline typing#CallSite#mproperty (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var179 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var179 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 653);
fatal_exit(1);
}
var177 = var179;
RET_LABEL178:(void)0;
}
}
{
{ /* Inline model#MClassType#mclass (var_recvtype) on <var_recvtype:nullable MType(MClassType)> */
var182 = var_recvtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_recvtype:nullable MType(MClassType)> */
if (unlikely(var182 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1163);
fatal_exit(1);
}
var180 = var182;
RET_LABEL181:(void)0;
}
}
{
var183 = nitc___nitc__MMethod___is_init_for(var177, var180);
}
var184 = !var183;
if (var184){
if (unlikely(varonce185==NULL)) {
var186 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce187!=NULL)) {
var188 = varonce187;
} else {
var189 = "Error: `";
var190 = core__flat___NativeString___to_s_full(var189, 8l, 8l);
var188 = var190;
varonce187 = var188;
}
((struct instance_core__NativeArray*)var186)->values[0]=var188;
if (likely(varonce191!=NULL)) {
var192 = varonce191;
} else {
var193 = "` is not a constructor.";
var194 = core__flat___NativeString___to_s_full(var193, 23l, 23l);
var192 = var194;
varonce191 = var192;
}
((struct instance_core__NativeArray*)var186)->values[2]=var192;
} else {
var186 = varonce185;
varonce185 = NULL;
}
((struct instance_core__NativeArray*)var186)->values[1]=var_name;
{
var195 = ((val*(*)(val* self))(var186->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var186); /* native_to_s on <var186:NativeArray[String]>*/
}
varonce185 = var186;
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var195); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ANewExpr#n_args (self) on <self:ANewExpr> */
var198 = self->attrs[COLOR_nitc__parser_nodes__ANewExpr___n_args].val; /* _n_args on <self:ANewExpr> */
if (unlikely(var198 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2265);
fatal_exit(1);
}
var196 = var198;
RET_LABEL197:(void)0;
}
}
{
var199 = nitc__typing___AExprs___to_a(var196);
}
var_args = var199;
{
var200 = nitc___nitc__CallSite___check_signature(var_callsite, var_v, var_node, var_args);
}
RET_LABEL:;
}
/* method typing#AAttrFormExpr#mproperty for (self: AAttrFormExpr): nullable MAttribute */
val* nitc__typing___AAttrFormExpr___mproperty(val* self) {
val* var /* : nullable MAttribute */;
val* var1 /* : nullable MAttribute */;
var1 = self->attrs[COLOR_nitc__typing__AAttrFormExpr___mproperty].val; /* _mproperty on <self:AAttrFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AAttrFormExpr#mproperty= for (self: AAttrFormExpr, nullable MAttribute) */
void nitc__typing___AAttrFormExpr___mproperty_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__AAttrFormExpr___mproperty].val = p0; /* _mproperty on <self:AAttrFormExpr> */
RET_LABEL:;
}
/* method typing#AAttrFormExpr#attr_type for (self: AAttrFormExpr): nullable MType */
val* nitc__typing___AAttrFormExpr___attr_type(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nitc__typing__AAttrFormExpr___attr_type].val; /* _attr_type on <self:AAttrFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AAttrFormExpr#attr_type= for (self: AAttrFormExpr, nullable MType) */
void nitc__typing___AAttrFormExpr___attr_type_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__AAttrFormExpr___attr_type].val = p0; /* _attr_type on <self:AAttrFormExpr> */
RET_LABEL:;
}
/* method typing#AAttrFormExpr#resolve_property for (self: AAttrFormExpr, TypeVisitor) */
void nitc__typing___AAttrFormExpr___resolve_property(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var_recvtype /* var recvtype: nullable MType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : TAttrid */;
val* var12 /* : TAttrid */;
val* var_node /* var node: TAttrid */;
val* var13 /* : String */;
val* var_name /* var name: String */;
short int var14 /* : Bool */;
int cltype;
int idtype;
val* var15 /* : NativeArray[String] */;
static val* varonce;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : String */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : String */;
val* var24 /* : String */;
val* var25 /* : MType */;
val* var_unsafe_type /* var unsafe_type: MType */;
val* var26 /* : nullable MProperty */;
val* var_mproperty /* var mproperty: nullable MProperty */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : ModelBuilder */;
val* var35 /* : ModelBuilder */;
val* var37 /* : NativeArray[String] */;
static val* varonce36;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : String */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : String */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
val* var49 /* : String */;
val* var50 /* : String */;
val* var51 /* : String */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
val* var56 /* : MModule */;
val* var58 /* : MModule */;
val* var59 /* : Array[MPropDef] */;
val* var_mpropdefs /* var mpropdefs: Array[MAttributeDef] */;
long var60 /* : Int */;
long var62 /* : Int */;
short int var63 /* : Bool */;
short int var65 /* : Bool */;
val* var66 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: MAttributeDef */;
val* var67 /* : nullable MType */;
val* var69 /* : nullable MType */;
val* var_attr_type /* var attr_type: nullable MType */;
short int var70 /* : Bool */;
short int var71 /* : Bool */;
short int var73 /* : Bool */;
short int var75 /* : Bool */;
val* var76 /* : AExpr */;
val* var78 /* : AExpr */;
short int var79 /* : Bool */;
int cltype80;
int idtype81;
val* var82 /* : MType */;
var_v = p0;
{
{ /* Inline parser_nodes#AAttrFormExpr#n_expr (self) on <self:AAttrFormExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrFormExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2273);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__typing___nitc__typing__TypeVisitor___visit_expr(var_v, var);
}
var_recvtype = var3;
if (var_recvtype == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_recvtype,((val*)NULL)) on <var_recvtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_recvtype,var_other) on <var_recvtype:nullable MType(MType)> */
var9 = var_recvtype == var_other;
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
{ /* Inline parser_nodes#AAttrFormExpr#n_id (self) on <self:AAttrFormExpr> */
var12 = self->attrs[COLOR_nitc__parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AAttrFormExpr> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2276);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_node = var10;
{
var13 = nitc__lexer_work___Token___text(var_node);
}
var_name = var13;
/* <var_recvtype:nullable MType(MType)> isa MNullType */
cltype = type_nitc__MNullType.color;
idtype = type_nitc__MNullType.id;
if(cltype >= var_recvtype->type->table_size) {
var14 = 0;
} else {
var14 = var_recvtype->type->type_table[cltype] == idtype;
}
if (var14){
if (unlikely(varonce==NULL)) {
var15 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "Error: attribute `";
var19 = core__flat___NativeString___to_s_full(var18, 18l, 18l);
var17 = var19;
varonce16 = var17;
}
((struct instance_core__NativeArray*)var15)->values[0]=var17;
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "` access on `null`.";
var23 = core__flat___NativeString___to_s_full(var22, 19l, 19l);
var21 = var23;
varonce20 = var21;
}
((struct instance_core__NativeArray*)var15)->values[2]=var21;
} else {
var15 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var15)->values[1]=var_name;
{
var24 = ((val*(*)(val* self))(var15->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var15); /* native_to_s on <var15:NativeArray[String]>*/
}
varonce = var15;
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, var_node, var24); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
var25 = nitc__typing___nitc__typing__TypeVisitor___anchor_to(var_v, var_recvtype);
}
var_unsafe_type = var25;
{
var26 = nitc__typing___nitc__typing__TypeVisitor___try_get_mproperty_by_name2(var_v, var_node, var_unsafe_type, var_name);
}
var_mproperty = var26;
if (var_mproperty == NULL) {
var27 = 1; /* is null */
} else {
var27 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mproperty,((val*)NULL)) on <var_mproperty:nullable MProperty> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mproperty,var_other) on <var_mproperty:nullable MProperty(MProperty)> */
var32 = var_mproperty == var_other;
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
{
{ /* Inline typing#TypeVisitor#modelbuilder (var_v) on <var_v:TypeVisitor> */
var35 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <var_v:TypeVisitor> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
if (unlikely(varonce36==NULL)) {
var37 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "Error: attribute `";
var41 = core__flat___NativeString___to_s_full(var40, 18l, 18l);
var39 = var41;
varonce38 = var39;
}
((struct instance_core__NativeArray*)var37)->values[0]=var39;
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "` does not exist in `";
var45 = core__flat___NativeString___to_s_full(var44, 21l, 21l);
var43 = var45;
varonce42 = var43;
}
((struct instance_core__NativeArray*)var37)->values[2]=var43;
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = "`.";
var49 = core__flat___NativeString___to_s_full(var48, 2l, 2l);
var47 = var49;
varonce46 = var47;
}
((struct instance_core__NativeArray*)var37)->values[4]=var47;
} else {
var37 = varonce36;
varonce36 = NULL;
}
((struct instance_core__NativeArray*)var37)->values[1]=var_name;
{
var50 = ((val*(*)(val* self))(var_recvtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recvtype); /* to_s on <var_recvtype:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var37)->values[3]=var50;
{
var51 = ((val*(*)(val* self))(var37->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var37); /* native_to_s on <var37:NativeArray[String]>*/
}
varonce36 = var37;
{
nitc___nitc__ModelBuilder___error(var33, var_node, var51); /* Direct call modelbuilder_base#ModelBuilder#error on <var33:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
/* <var_mproperty:nullable MProperty(MProperty)> isa MAttribute */
cltype53 = type_nitc__MAttribute.color;
idtype54 = type_nitc__MAttribute.id;
if(cltype53 >= var_mproperty->type->table_size) {
var52 = 0;
} else {
var52 = var_mproperty->type->type_table[cltype53] == idtype54;
}
if (unlikely(!var52)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 2145);
fatal_exit(1);
}
{
{ /* Inline typing#AAttrFormExpr#mproperty= (self,var_mproperty) on <self:AAttrFormExpr> */
self->attrs[COLOR_nitc__typing__AAttrFormExpr___mproperty].val = var_mproperty; /* _mproperty on <self:AAttrFormExpr> */
RET_LABEL55:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#mmodule (var_v) on <var_v:TypeVisitor> */
var58 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___mmodule].val; /* _mmodule on <var_v:TypeVisitor> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 37);
fatal_exit(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
var59 = nitc___nitc__MProperty___lookup_definitions(var_mproperty, var56, var_unsafe_type);
}
var_mpropdefs = var59;
{
{ /* Inline array#AbstractArrayRead#length (var_mpropdefs) on <var_mpropdefs:Array[MAttributeDef]> */
var62 = var_mpropdefs->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_mpropdefs:Array[MAttributeDef]> */
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var60,1l) on <var60:Int> */
var65 = var60 == 1l;
var63 = var65;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
if (unlikely(!var63)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 2149);
fatal_exit(1);
}
{
var66 = core___core__SequenceRead___Collection__first(var_mpropdefs);
}
var_mpropdef = var66;
{
{ /* Inline model#MAttributeDef#static_mtype (var_mpropdef) on <var_mpropdef:MAttributeDef> */
var69 = var_mpropdef->attrs[COLOR_nitc__model__MAttributeDef___static_mtype].val; /* _static_mtype on <var_mpropdef:MAttributeDef> */
var67 = var69;
RET_LABEL68:(void)0;
}
}
var_attr_type = var67;
if (var_attr_type == NULL) {
var70 = 1; /* is null */
} else {
var70 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_attr_type,((val*)NULL)) on <var_attr_type:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_attr_type,var_other) on <var_attr_type:nullable MType(MType)> */
var75 = var_attr_type == var_other;
var73 = var75;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
}
var71 = var73;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
var70 = var71;
}
if (var70){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AAttrFormExpr#n_expr (self) on <self:AAttrFormExpr> */
var78 = self->attrs[COLOR_nitc__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrFormExpr> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2273);
fatal_exit(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
/* <var76:AExpr> isa ASelfExpr */
cltype80 = type_nitc__ASelfExpr.color;
idtype81 = type_nitc__ASelfExpr.id;
if(cltype80 >= var76->type->table_size) {
var79 = 0;
} else {
var79 = var76->type->type_table[cltype80] == idtype81;
}
{
var82 = nitc__typing___nitc__typing__TypeVisitor___resolve_for(var_v, var_attr_type, var_recvtype, var79);
}
var_attr_type = var82;
{
{ /* Inline typing#AAttrFormExpr#attr_type= (self,var_attr_type) on <self:AAttrFormExpr> */
self->attrs[COLOR_nitc__typing__AAttrFormExpr___attr_type].val = var_attr_type; /* _attr_type on <self:AAttrFormExpr> */
RET_LABEL83:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AAttrExpr#accept_typing for (self: AAttrExpr, TypeVisitor) */
void nitc__typing___AAttrExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MType */;
val* var2 /* : nullable MType */;
var_v = p0;
{
nitc__typing___AAttrFormExpr___resolve_property(self, var_v); /* Direct call typing#AAttrFormExpr#resolve_property on <self:AAttrExpr>*/
}
{
{ /* Inline typing#AAttrFormExpr#attr_type (self) on <self:AAttrExpr> */
var2 = self->attrs[COLOR_nitc__typing__AAttrFormExpr___attr_type].val; /* _attr_type on <self:AAttrExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var) on <self:AAttrExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var; /* _mtype on <self:AAttrExpr> */
RET_LABEL3:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AAttrAssignExpr#accept_typing for (self: AAttrAssignExpr, TypeVisitor) */
void nitc__typing___AAttrAssignExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MType */;
val* var2 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var3 /* : AExpr */;
val* var5 /* : AExpr */;
val* var6 /* : nullable MType */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
var_v = p0;
{
nitc__typing___AAttrFormExpr___resolve_property(self, var_v); /* Direct call typing#AAttrFormExpr#resolve_property on <self:AAttrAssignExpr>*/
}
{
{ /* Inline typing#AAttrFormExpr#attr_type (self) on <self:AAttrAssignExpr> */
var2 = self->attrs[COLOR_nitc__typing__AAttrFormExpr___attr_type].val; /* _attr_type on <self:AAttrAssignExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mtype = var;
{
{ /* Inline parser_nodes#AAssignFormExpr#n_value (self) on <self:AAttrAssignExpr> */
var5 = self->attrs[COLOR_nitc__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AAttrAssignExpr> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1992);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_subtype(var_v, var3, var_mtype);
}
if (var_mtype == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
var10 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mtype, var_other); /* == on <var_mtype:nullable MType(MType)>*/
}
var11 = !var10;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
{
{ /* Inline typing#AExpr#is_typed= (self,var7) on <self:AAttrAssignExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = var7; /* _is_typed on <self:AAttrAssignExpr> */
RET_LABEL12:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AAttrReassignExpr#accept_typing for (self: AAttrReassignExpr, TypeVisitor) */
void nitc__typing___AAttrReassignExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MType */;
val* var2 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable MType */;
val* var_rettype /* var rettype: nullable MType */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_other13 /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
var_v = p0;
{
nitc__typing___AAttrFormExpr___resolve_property(self, var_v); /* Direct call typing#AAttrFormExpr#resolve_property on <self:AAttrReassignExpr>*/
}
{
{ /* Inline typing#AAttrFormExpr#attr_type (self) on <self:AAttrReassignExpr> */
var2 = self->attrs[COLOR_nitc__typing__AAttrFormExpr___attr_type].val; /* _attr_type on <self:AAttrReassignExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mtype = var;
if (var_mtype == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var8 = var_mtype == var_other;
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
var9 = nitc__typing___AReassignFormExpr___resolve_reassignment(self, var_v, var_mtype, var_mtype);
}
var_rettype = var9;
if (var_rettype == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_rettype,((val*)NULL)) on <var_rettype:nullable MType> */
var_other13 = ((val*)NULL);
{
var14 = ((short int(*)(val* self, val* p0))(var_rettype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_rettype, var_other13); /* == on <var_rettype:nullable MType(MType)>*/
}
var15 = !var14;
var11 = var15;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
{
{ /* Inline typing#AExpr#is_typed= (self,var10) on <self:AAttrReassignExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = var10; /* _is_typed on <self:AAttrReassignExpr> */
RET_LABEL16:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AIssetAttrExpr#accept_typing for (self: AIssetAttrExpr, TypeVisitor) */
void nitc__typing___AIssetAttrExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MType */;
val* var2 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : AExpr */;
val* var11 /* : AExpr */;
val* var12 /* : nullable MType */;
val* var_recvtype /* var recvtype: MType */;
val* var13 /* : MType */;
val* var_bound /* var bound: MType */;
short int var14 /* : Bool */;
int cltype;
int idtype;
val* var15 /* : TAttrid */;
val* var17 /* : TAttrid */;
static val* varonce;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : String */;
val* var21 /* : nullable MType */;
var_v = p0;
{
nitc__typing___AAttrFormExpr___resolve_property(self, var_v); /* Direct call typing#AAttrFormExpr#resolve_property on <self:AIssetAttrExpr>*/
}
{
{ /* Inline typing#AAttrFormExpr#attr_type (self) on <self:AIssetAttrExpr> */
var2 = self->attrs[COLOR_nitc__typing__AAttrFormExpr___attr_type].val; /* _attr_type on <self:AIssetAttrExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mtype = var;
if (var_mtype == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var8 = var_mtype == var_other;
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
{ /* Inline parser_nodes#AAttrFormExpr#n_expr (self) on <self:AIssetAttrExpr> */
var11 = self->attrs[COLOR_nitc__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AIssetAttrExpr> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2273);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = ((val*(*)(val* self))(var9->class->vft[COLOR_nitc__typing__AExpr__mtype]))(var9); /* mtype on <var9:AExpr>*/
}
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 2198);
fatal_exit(1);
}
var_recvtype = var12;
{
var13 = nitc__typing___nitc__typing__TypeVisitor___resolve_for(var_v, var_mtype, var_recvtype, 0);
}
var_bound = var13;
/* <var_bound:MType> isa MNullableType */
cltype = type_nitc__MNullableType.color;
idtype = type_nitc__MNullableType.id;
if(cltype >= var_bound->type->table_size) {
var14 = 0;
} else {
var14 = var_bound->type->type_table[cltype] == idtype;
}
if (var14){
{
{ /* Inline parser_nodes#AAttrFormExpr#n_id (self) on <self:AIssetAttrExpr> */
var17 = self->attrs[COLOR_nitc__parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AIssetAttrExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2276);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (likely(varonce!=NULL)) {
var18 = varonce;
} else {
var19 = "Type Error: `isset` on a nullable attribute.";
var20 = core__flat___NativeString___to_s_full(var19, 44l, 44l);
var18 = var20;
varonce = var18;
}
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, var15, var18); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
} else {
}
{
var21 = nitc__typing___nitc__typing__TypeVisitor___type_bool(var_v, self);
}
{
{ /* Inline typing#AExpr#mtype= (self,var21) on <self:AIssetAttrExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var21; /* _mtype on <self:AIssetAttrExpr> */
RET_LABEL22:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AVarargExpr#accept_typing for (self: AVarargExpr, TypeVisitor) */
void nitc__typing___AVarargExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : String */;
var_v = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "Syntax Error: unexpected `...`.";
var2 = core__flat___NativeString___to_s_full(var1, 31l, 31l);
var = var2;
varonce = var;
}
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
RET_LABEL:;
}
/* method typing#ADebugTypeExpr#accept_typing for (self: ADebugTypeExpr, TypeVisitor) */
void nitc__typing___ADebugTypeExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var_expr /* var expr: nullable MType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : MType */;
val* var_unsafe /* var unsafe: MType */;
val* var11 /* : AType */;
val* var13 /* : AType */;
val* var_ntype /* var ntype: AType */;
val* var14 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var_other19 /* var other: nullable Object */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var_ /* var : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var26 /* : MType */;
val* var_umtype /* var umtype: MType */;
val* var27 /* : ModelBuilder */;
val* var29 /* : ModelBuilder */;
static val* varonce;
val* var30 /* : String */;
char* var31 /* : NativeString */;
val* var32 /* : String */;
val* var34 /* : NativeArray[String] */;
static val* varonce33;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
val* var38 /* : String */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
val* var42 /* : String */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
val* var46 /* : String */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
val* var50 /* : String */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
val* var54 /* : String */;
val* var55 /* : String */;
val* var56 /* : String */;
val* var57 /* : String */;
val* var58 /* : String */;
val* var59 /* : String */;
var_v = p0;
{
{ /* Inline parser_nodes#ADebugTypeExpr#n_expr (self) on <self:ADebugTypeExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ADebugTypeExpr___n_expr].val; /* _n_expr on <self:ADebugTypeExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2698);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__typing___nitc__typing__TypeVisitor___visit_expr(var_v, var);
}
var_expr = var3;
if (var_expr == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_expr,((val*)NULL)) on <var_expr:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_expr,var_other) on <var_expr:nullable MType(MType)> */
var9 = var_expr == var_other;
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
var10 = nitc__typing___nitc__typing__TypeVisitor___anchor_to(var_v, var_expr);
}
var_unsafe = var10;
{
{ /* Inline parser_nodes#ADebugTypeExpr#n_type (self) on <self:ADebugTypeExpr> */
var13 = self->attrs[COLOR_nitc__parser_nodes__ADebugTypeExpr___n_type].val; /* _n_type on <self:ADebugTypeExpr> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2701);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
var_ntype = var11;
{
var14 = nitc__typing___nitc__typing__TypeVisitor___resolve_mtype(var_v, var_ntype);
}
var_mtype = var14;
if (var_mtype == NULL) {
var16 = 0; /* is null */
} else {
var16 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other19 = ((val*)NULL);
{
var20 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mtype, var_other19); /* == on <var_mtype:nullable MType(MType)>*/
}
var21 = !var20;
var17 = var21;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var16 = var17;
}
var_ = var16;
if (var16){
{
{ /* Inline kernel#Object#!= (var_mtype,var_expr) on <var_mtype:nullable MType(MType)> */
var_other19 = var_expr;
{
var24 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mtype, var_other19); /* == on <var_mtype:nullable MType(MType)>*/
}
var25 = !var24;
var22 = var25;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var15 = var22;
} else {
var15 = var_;
}
if (var15){
{
var26 = nitc__typing___nitc__typing__TypeVisitor___anchor_to(var_v, var_mtype);
}
var_umtype = var26;
{
{ /* Inline typing#TypeVisitor#modelbuilder (var_v) on <var_v:TypeVisitor> */
var29 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <var_v:TypeVisitor> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
if (likely(varonce!=NULL)) {
var30 = varonce;
} else {
var31 = "debug";
var32 = core__flat___NativeString___to_s_full(var31, 5l, 5l);
var30 = var32;
varonce = var30;
}
if (unlikely(varonce33==NULL)) {
var34 = NEW_core__NativeArray(9l, &type_core__NativeArray__core__String);
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "Found type ";
var38 = core__flat___NativeString___to_s_full(var37, 11l, 11l);
var36 = var38;
varonce35 = var36;
}
((struct instance_core__NativeArray*)var34)->values[0]=var36;
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = " (-> ";
var42 = core__flat___NativeString___to_s_full(var41, 5l, 5l);
var40 = var42;
varonce39 = var40;
}
((struct instance_core__NativeArray*)var34)->values[2]=var40;
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "), expected ";
var46 = core__flat___NativeString___to_s_full(var45, 12l, 12l);
var44 = var46;
varonce43 = var44;
}
((struct instance_core__NativeArray*)var34)->values[4]=var44;
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = " (-> ";
var50 = core__flat___NativeString___to_s_full(var49, 5l, 5l);
var48 = var50;
varonce47 = var48;
}
((struct instance_core__NativeArray*)var34)->values[6]=var48;
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = ")";
var54 = core__flat___NativeString___to_s_full(var53, 1l, 1l);
var52 = var54;
varonce51 = var52;
}
((struct instance_core__NativeArray*)var34)->values[8]=var52;
} else {
var34 = varonce33;
varonce33 = NULL;
}
{
var55 = ((val*(*)(val* self))(var_expr->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_expr); /* to_s on <var_expr:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var34)->values[1]=var55;
{
var56 = ((val*(*)(val* self))(var_unsafe->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_unsafe); /* to_s on <var_unsafe:MType>*/
}
((struct instance_core__NativeArray*)var34)->values[3]=var56;
{
var57 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var34)->values[5]=var57;
{
var58 = ((val*(*)(val* self))(var_umtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_umtype); /* to_s on <var_umtype:MType>*/
}
((struct instance_core__NativeArray*)var34)->values[7]=var58;
{
var59 = ((val*(*)(val* self))(var34->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var34); /* native_to_s on <var34:NativeArray[String]>*/
}
varonce33 = var34;
{
nitc___nitc__ModelBuilder___warning(var27, self, var30, var59); /* Direct call modelbuilder_base#ModelBuilder#warning on <var27:ModelBuilder>*/
}
} else {
}
{
{ /* Inline typing#AExpr#is_typed= (self,1) on <self:ADebugTypeExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = 1; /* _is_typed on <self:ADebugTypeExpr> */
RET_LABEL60:(void)0;
}
}
RET_LABEL:;
}
