#include "modelize_property.sep.0.h"
/* method modelize_property#AMethPropdef#check_signature for (self: AMethPropdef, ModelBuilder) */
void modelize_property__AMethPropdef__check_signature(val* self, val* p0) {
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
short int var64 /* : Bool */;
short int var_ /* var : Bool */;
val* var65 /* : null */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
short int var69 /* : Bool */;
short int var71 /* : Bool */;
val* var72 /* : nullable AType */;
val* var74 /* : nullable AType */;
static val* varonce;
val* var75 /* : String */;
char* var76 /* : NativeString */;
long var77 /* : Int */;
val* var78 /* : FlatString */;
val* var79 /* : MProperty */;
val* var81 /* : MProperty */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
long var85 /* : Int */;
val* var86 /* : FlatString */;
val* var87 /* : Array[Object] */;
long var88 /* : Int */;
val* var89 /* : NativeArray[Object] */;
val* var90 /* : String */;
long var91 /* : Int */;
long var92 /* : Int */;
short int var93 /* : Bool */;
short int var95 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var96 /* : Bool */;
long var97 /* : Int */;
long var_i /* var i: Int */;
long var98 /* : Int */;
long var_99 /* var : Int */;
short int var100 /* : Bool */;
short int var102 /* : Bool */;
int cltype103;
int idtype104;
const char* var_class_name105;
short int var106 /* : Bool */;
val* var107 /* : Array[MParameter] */;
val* var109 /* : Array[MParameter] */;
val* var110 /* : nullable Object */;
val* var111 /* : MType */;
val* var113 /* : MType */;
val* var_myt /* var myt: MType */;
val* var114 /* : Array[MParameter] */;
val* var116 /* : Array[MParameter] */;
val* var117 /* : nullable Object */;
val* var118 /* : MType */;
val* var120 /* : MType */;
val* var_prt /* var prt: MType */;
short int var121 /* : Bool */;
val* var122 /* : MClassType */;
val* var124 /* : MClassType */;
short int var125 /* : Bool */;
short int var126 /* : Bool */;
short int var_127 /* var : Bool */;
val* var128 /* : MClassType */;
val* var130 /* : MClassType */;
short int var131 /* : Bool */;
short int var132 /* : Bool */;
val* var133 /* : ANodes[AParam] */;
val* var135 /* : ANodes[AParam] */;
val* var136 /* : ANode */;
static val* varonce137;
val* var138 /* : String */;
char* var139 /* : NativeString */;
long var140 /* : Int */;
val* var141 /* : FlatString */;
val* var142 /* : Array[MParameter] */;
val* var144 /* : Array[MParameter] */;
val* var145 /* : nullable Object */;
val* var146 /* : String */;
val* var148 /* : String */;
static val* varonce149;
val* var150 /* : String */;
char* var151 /* : NativeString */;
long var152 /* : Int */;
val* var153 /* : FlatString */;
static val* varonce154;
val* var155 /* : String */;
char* var156 /* : NativeString */;
long var157 /* : Int */;
val* var158 /* : FlatString */;
static val* varonce159;
val* var160 /* : String */;
char* var161 /* : NativeString */;
long var162 /* : Int */;
val* var163 /* : FlatString */;
val* var164 /* : MProperty */;
val* var166 /* : MProperty */;
val* var167 /* : MPropDef */;
val* var169 /* : MPropDef */;
static val* varonce170;
val* var171 /* : String */;
char* var172 /* : NativeString */;
long var173 /* : Int */;
val* var174 /* : FlatString */;
val* var175 /* : Array[Object] */;
long var176 /* : Int */;
val* var177 /* : NativeArray[Object] */;
val* var178 /* : String */;
long var179 /* : Int */;
long var180 /* : Int */;
val* var181 /* : null */;
short int var182 /* : Bool */;
short int var183 /* : Bool */;
short int var185 /* : Bool */;
short int var186 /* : Bool */;
short int var187 /* : Bool */;
val* var188 /* : null */;
short int var189 /* : Bool */;
short int var190 /* : Bool */;
short int var192 /* : Bool */;
short int var194 /* : Bool */;
val* var195 /* : MClassType */;
val* var197 /* : MClassType */;
short int var198 /* : Bool */;
short int var199 /* : Bool */;
val* var200 /* : nullable AType */;
val* var202 /* : nullable AType */;
static val* varonce203;
val* var204 /* : String */;
char* var205 /* : NativeString */;
long var206 /* : Int */;
val* var207 /* : FlatString */;
static val* varonce208;
val* var209 /* : String */;
char* var210 /* : NativeString */;
long var211 /* : Int */;
val* var212 /* : FlatString */;
static val* varonce213;
val* var214 /* : String */;
char* var215 /* : NativeString */;
long var216 /* : Int */;
val* var217 /* : FlatString */;
val* var218 /* : MProperty */;
val* var220 /* : MProperty */;
val* var221 /* : MPropDef */;
val* var223 /* : MPropDef */;
static val* varonce224;
val* var225 /* : String */;
char* var226 /* : NativeString */;
long var227 /* : Int */;
val* var228 /* : FlatString */;
val* var229 /* : Array[Object] */;
long var230 /* : Int */;
val* var231 /* : NativeArray[Object] */;
val* var232 /* : String */;
long var233 /* : Int */;
long var234 /* : Int */;
short int var235 /* : Bool */;
short int var237 /* : Bool */;
int cltype238;
int idtype239;
const char* var_class_name240;
short int var241 /* : Bool */;
long var242 /* : Int */;
long var_i243 /* var i: Int */;
long var244 /* : Int */;
long var_245 /* var : Int */;
short int var246 /* : Bool */;
short int var248 /* : Bool */;
int cltype249;
int idtype250;
const char* var_class_name251;
short int var252 /* : Bool */;
val* var253 /* : ANodes[AParam] */;
val* var255 /* : ANodes[AParam] */;
val* var256 /* : ANode */;
val* var257 /* : nullable AType */;
val* var259 /* : nullable AType */;
val* var_nt /* var nt: nullable AType */;
val* var260 /* : null */;
short int var261 /* : Bool */;
short int var262 /* : Bool */;
short int var264 /* : Bool */;
short int var265 /* : Bool */;
short int var266 /* : Bool */;
val* var267 /* : nullable MType */;
val* var269 /* : nullable MType */;
long var270 /* : Int */;
long var271 /* : Int */;
val* var273 /* : nullable AType */;
val* var275 /* : nullable AType */;
val* var_nt276 /* var nt: nullable AType */;
val* var277 /* : null */;
short int var278 /* : Bool */;
short int var279 /* : Bool */;
short int var281 /* : Bool */;
short int var282 /* : Bool */;
short int var283 /* : Bool */;
val* var284 /* : nullable MType */;
val* var286 /* : nullable MType */;
var_modelbuilder = p0;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var2 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
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
var12 = var_mpropdef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
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
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_mmodule = var13;
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (self) on <self:AMethPropdef> */
var18 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_nsig = var16;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var21 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
if (var19 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 691);
show_backtrace(1);
} else {
{ /* Inline model#MMethodDef#msignature (var19) on <var19:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1958);
show_backtrace(1);
}
var24 = var19->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var19:nullable MPropDef(nullable MMethodDef)> */
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
var32 = model__MPropDef__is_intro(var_mpropdef);
}
var33 = !var32;
if (var33){
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var36 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var34) on <var34:MProperty(MMethod)> */
var39 = var34->attrs[COLOR_model__MProperty___intro].val; /* _intro on <var34:MProperty(MMethod)> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1649);
show_backtrace(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var37) on <var37:MPropDef(MMethodDef)> */
var42 = var37->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var37:MPropDef(MMethodDef)> */
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
var52 = var_msignature->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:nullable MSignature(MSignature)> */
var50 = var52;
RET_LABEL51:(void)0;
}
}
var_precursor_ret_type = var50;
{
{ /* Inline model#MSignature#return_mtype (var_mysignature) on <var_mysignature:nullable MSignature(MSignature)> */
var55 = var_mysignature->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <var_mysignature:nullable MSignature(MSignature)> */
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
var63 = ((short int (*)(val*, val*))(var_ret_type->class->vft[COLOR_kernel__Object___61d_61d]))(var_ret_type, var_other61) /* == on <var_ret_type:nullable MType(MType)>*/;
var62 = var63;
}
var64 = !var62;
var59 = var64;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
var58 = var59;
}
var_ = var58;
if (var58){
var65 = NULL;
if (var_precursor_ret_type == NULL) {
var66 = 1; /* is null */
} else {
var66 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_precursor_ret_type,var65) on <var_precursor_ret_type:nullable MType> */
var_other = var65;
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
var56 = var66;
} else {
var56 = var_;
}
if (var56){
if (var_nsig == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 703);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ASignature#n_type (var_nsig) on <var_nsig:nullable ASignature> */
if (unlikely(var_nsig == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1281);
show_backtrace(1);
}
var74 = var_nsig->attrs[COLOR_parser_nodes__ASignature___n_type].val; /* _n_type on <var_nsig:nullable ASignature> */
var72 = var74;
RET_LABEL73:(void)0;
}
}
if (unlikely(var72 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 703);
show_backtrace(1);
}
if (varonce) {
var75 = varonce;
} else {
var76 = "Redef Error: ";
var77 = 13;
var78 = string__NativeString__to_s_with_length(var76, var77);
var75 = var78;
varonce = var75;
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var81 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
if (varonce82) {
var83 = varonce82;
} else {
var84 = " is a procedure, not a function.";
var85 = 32;
var86 = string__NativeString__to_s_with_length(var84, var85);
var83 = var86;
varonce82 = var83;
}
var87 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var87 = array_instance Array[Object] */
var88 = 3;
var89 = NEW_array__NativeArray(var88, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var89)->values[0] = (val*) var75;
((struct instance_array__NativeArray*)var89)->values[1] = (val*) var79;
((struct instance_array__NativeArray*)var89)->values[2] = (val*) var83;
{
((void (*)(val*, val*, long))(var87->class->vft[COLOR_array__Array__with_native]))(var87, var89, var88) /* with_native on <var87:Array[Object]>*/;
}
}
{
var90 = ((val* (*)(val*))(var87->class->vft[COLOR_string__Object__to_s]))(var87) /* to_s on <var87:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, var72, var90); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
var91 = model__MSignature__arity(var_mysignature);
}
var92 = 0;
{
{ /* Inline kernel#Int#> (var91,var92) on <var91:Int> */
/* Covariant cast for argument 0 (i) <var92:Int> isa OTHER */
/* <var92:Int> isa OTHER */
var95 = 1; /* easy <var92:Int> isa OTHER*/
if (unlikely(!var95)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var96 = var91 > var92;
var93 = var96;
goto RET_LABEL94;
RET_LABEL94:(void)0;
}
}
if (var93){
var97 = 0;
var_i = var97;
{
var98 = model__MSignature__arity(var_mysignature);
}
var_99 = var98;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_99) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_99:Int> isa OTHER */
/* <var_99:Int> isa OTHER */
var102 = 1; /* easy <var_99:Int> isa OTHER*/
if (unlikely(!var102)) {
var_class_name105 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name105);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var106 = var_i < var_99;
var100 = var106;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
}
if (var100){
{
{ /* Inline model#MSignature#mparameters (var_mysignature) on <var_mysignature:nullable MSignature(MSignature)> */
var109 = var_mysignature->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var_mysignature:nullable MSignature(MSignature)> */
if (unlikely(var109 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1465);
show_backtrace(1);
}
var107 = var109;
RET_LABEL108:(void)0;
}
}
{
var110 = array__Array___91d_93d(var107, var_i);
}
{
{ /* Inline model#MParameter#mtype (var110) on <var110:nullable Object(MParameter)> */
var113 = var110->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var110:nullable Object(MParameter)> */
if (unlikely(var113 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1565);
show_backtrace(1);
}
var111 = var113;
RET_LABEL112:(void)0;
}
}
var_myt = var111;
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var116 = var_msignature->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var_msignature:nullable MSignature(MSignature)> */
if (unlikely(var116 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1465);
show_backtrace(1);
}
var114 = var116;
RET_LABEL115:(void)0;
}
}
{
var117 = array__Array___91d_93d(var114, var_i);
}
{
{ /* Inline model#MParameter#mtype (var117) on <var117:nullable Object(MParameter)> */
var120 = var117->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var117:nullable Object(MParameter)> */
if (unlikely(var120 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1565);
show_backtrace(1);
}
var118 = var120;
RET_LABEL119:(void)0;
}
}
var_prt = var118;
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var124 = var_mclassdef->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var124 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var122 = var124;
RET_LABEL123:(void)0;
}
}
{
var125 = model__MType__is_subtype(var_myt, var_mmodule, var122, var_prt);
}
var126 = !var125;
var_127 = var126;
if (var126){
var121 = var_127;
} else {
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var130 = var_mclassdef->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var130 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var128 = var130;
RET_LABEL129:(void)0;
}
}
{
var131 = model__MType__is_subtype(var_prt, var_mmodule, var128, var_myt);
}
var132 = !var131;
var121 = var132;
}
if (var121){
if (var_nsig == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 714);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var_nsig) on <var_nsig:nullable ASignature> */
if (unlikely(var_nsig == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1279);
show_backtrace(1);
}
var135 = var_nsig->attrs[COLOR_parser_nodes__ASignature___n_params].val; /* _n_params on <var_nsig:nullable ASignature> */
if (unlikely(var135 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1279);
show_backtrace(1);
}
var133 = var135;
RET_LABEL134:(void)0;
}
}
{
var136 = parser_nodes__ANodes___91d_93d(var133, var_i);
}
if (varonce137) {
var138 = varonce137;
} else {
var139 = "Redef Error: Wrong type for parameter `";
var140 = 39;
var141 = string__NativeString__to_s_with_length(var139, var140);
var138 = var141;
varonce137 = var138;
}
{
{ /* Inline model#MSignature#mparameters (var_mysignature) on <var_mysignature:nullable MSignature(MSignature)> */
var144 = var_mysignature->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var_mysignature:nullable MSignature(MSignature)> */
if (unlikely(var144 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1465);
show_backtrace(1);
}
var142 = var144;
RET_LABEL143:(void)0;
}
}
{
var145 = array__Array___91d_93d(var142, var_i);
}
{
{ /* Inline model#MParameter#name (var145) on <var145:nullable Object(MParameter)> */
var148 = var145->attrs[COLOR_model__MParameter___name].val; /* _name on <var145:nullable Object(MParameter)> */
if (unlikely(var148 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1562);
show_backtrace(1);
}
var146 = var148;
RET_LABEL147:(void)0;
}
}
if (varonce149) {
var150 = varonce149;
} else {
var151 = "\'. found ";
var152 = 9;
var153 = string__NativeString__to_s_with_length(var151, var152);
var150 = var153;
varonce149 = var150;
}
if (varonce154) {
var155 = varonce154;
} else {
var156 = ", expected ";
var157 = 11;
var158 = string__NativeString__to_s_with_length(var156, var157);
var155 = var158;
varonce154 = var155;
}
if (varonce159) {
var160 = varonce159;
} else {
var161 = " as in ";
var162 = 7;
var163 = string__NativeString__to_s_with_length(var161, var162);
var160 = var163;
varonce159 = var160;
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var166 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var166 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var164 = var166;
RET_LABEL165:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var164) on <var164:MProperty(MMethod)> */
var169 = var164->attrs[COLOR_model__MProperty___intro].val; /* _intro on <var164:MProperty(MMethod)> */
if (unlikely(var169 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1649);
show_backtrace(1);
}
var167 = var169;
RET_LABEL168:(void)0;
}
}
if (varonce170) {
var171 = varonce170;
} else {
var172 = ".";
var173 = 1;
var174 = string__NativeString__to_s_with_length(var172, var173);
var171 = var174;
varonce170 = var171;
}
var175 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var175 = array_instance Array[Object] */
var176 = 9;
var177 = NEW_array__NativeArray(var176, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var177)->values[0] = (val*) var138;
((struct instance_array__NativeArray*)var177)->values[1] = (val*) var146;
((struct instance_array__NativeArray*)var177)->values[2] = (val*) var150;
((struct instance_array__NativeArray*)var177)->values[3] = (val*) var_myt;
((struct instance_array__NativeArray*)var177)->values[4] = (val*) var155;
((struct instance_array__NativeArray*)var177)->values[5] = (val*) var_prt;
((struct instance_array__NativeArray*)var177)->values[6] = (val*) var160;
((struct instance_array__NativeArray*)var177)->values[7] = (val*) var167;
((struct instance_array__NativeArray*)var177)->values[8] = (val*) var171;
{
((void (*)(val*, val*, long))(var175->class->vft[COLOR_array__Array__with_native]))(var175, var177, var176) /* with_native on <var175:Array[Object]>*/;
}
}
{
var178 = ((val* (*)(val*))(var175->class->vft[COLOR_string__Object__to_s]))(var175) /* to_s on <var175:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, var136, var178); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
var179 = 1;
{
var180 = kernel__Int__successor(var_i, var179);
}
var_i = var180;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
} else {
}
var181 = NULL;
if (var_precursor_ret_type == NULL) {
var182 = 0; /* is null */
} else {
var182 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_precursor_ret_type,var181) on <var_precursor_ret_type:nullable MType> */
var_other61 = var181;
{
var186 = ((short int (*)(val*, val*))(var_precursor_ret_type->class->vft[COLOR_kernel__Object___61d_61d]))(var_precursor_ret_type, var_other61) /* == on <var_precursor_ret_type:nullable MType(MType)>*/;
var185 = var186;
}
var187 = !var185;
var183 = var187;
goto RET_LABEL184;
RET_LABEL184:(void)0;
}
var182 = var183;
}
if (var182){
var188 = NULL;
if (var_ret_type == NULL) {
var189 = 1; /* is null */
} else {
var189 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ret_type,var188) on <var_ret_type:nullable MType> */
var_other = var188;
{
{ /* Inline kernel#Object#is_same_instance (var_ret_type,var_other) on <var_ret_type:nullable MType(MType)> */
var194 = var_ret_type == var_other;
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
if (var189){
var_ret_type = var_precursor_ret_type;
} else {
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var197 = var_mclassdef->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var197 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var195 = var197;
RET_LABEL196:(void)0;
}
}
{
var198 = model__MType__is_subtype(var_ret_type, var_mmodule, var195, var_precursor_ret_type);
}
var199 = !var198;
if (var199){
if (var_nsig == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 723);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ASignature#n_type (var_nsig) on <var_nsig:nullable ASignature> */
if (unlikely(var_nsig == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1281);
show_backtrace(1);
}
var202 = var_nsig->attrs[COLOR_parser_nodes__ASignature___n_type].val; /* _n_type on <var_nsig:nullable ASignature> */
var200 = var202;
RET_LABEL201:(void)0;
}
}
if (unlikely(var200 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 723);
show_backtrace(1);
}
if (varonce203) {
var204 = varonce203;
} else {
var205 = "Redef Error: Wrong return type. found ";
var206 = 38;
var207 = string__NativeString__to_s_with_length(var205, var206);
var204 = var207;
varonce203 = var204;
}
if (varonce208) {
var209 = varonce208;
} else {
var210 = ", expected ";
var211 = 11;
var212 = string__NativeString__to_s_with_length(var210, var211);
var209 = var212;
varonce208 = var209;
}
if (varonce213) {
var214 = varonce213;
} else {
var215 = " as in ";
var216 = 7;
var217 = string__NativeString__to_s_with_length(var215, var216);
var214 = var217;
varonce213 = var214;
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var220 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var220 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var218 = var220;
RET_LABEL219:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var218) on <var218:MProperty(MMethod)> */
var223 = var218->attrs[COLOR_model__MProperty___intro].val; /* _intro on <var218:MProperty(MMethod)> */
if (unlikely(var223 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1649);
show_backtrace(1);
}
var221 = var223;
RET_LABEL222:(void)0;
}
}
if (varonce224) {
var225 = varonce224;
} else {
var226 = ".";
var227 = 1;
var228 = string__NativeString__to_s_with_length(var226, var227);
var225 = var228;
varonce224 = var225;
}
var229 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var229 = array_instance Array[Object] */
var230 = 7;
var231 = NEW_array__NativeArray(var230, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var231)->values[0] = (val*) var204;
((struct instance_array__NativeArray*)var231)->values[1] = (val*) var_ret_type;
((struct instance_array__NativeArray*)var231)->values[2] = (val*) var209;
((struct instance_array__NativeArray*)var231)->values[3] = (val*) var_precursor_ret_type;
((struct instance_array__NativeArray*)var231)->values[4] = (val*) var214;
((struct instance_array__NativeArray*)var231)->values[5] = (val*) var221;
((struct instance_array__NativeArray*)var231)->values[6] = (val*) var225;
{
((void (*)(val*, val*, long))(var229->class->vft[COLOR_array__Array__with_native]))(var229, var231, var230) /* with_native on <var229:Array[Object]>*/;
}
}
{
var232 = ((val* (*)(val*))(var229->class->vft[COLOR_string__Object__to_s]))(var229) /* to_s on <var229:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, var200, var232); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
}
} else {
}
} else {
}
{
var233 = model__MSignature__arity(var_mysignature);
}
var234 = 0;
{
{ /* Inline kernel#Int#> (var233,var234) on <var233:Int> */
/* Covariant cast for argument 0 (i) <var234:Int> isa OTHER */
/* <var234:Int> isa OTHER */
var237 = 1; /* easy <var234:Int> isa OTHER*/
if (unlikely(!var237)) {
var_class_name240 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name240);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var241 = var233 > var234;
var235 = var241;
goto RET_LABEL236;
RET_LABEL236:(void)0;
}
}
if (var235){
var242 = 0;
var_i243 = var242;
{
var244 = model__MSignature__arity(var_mysignature);
}
var_245 = var244;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i243,var_245) on <var_i243:Int> */
/* Covariant cast for argument 0 (i) <var_245:Int> isa OTHER */
/* <var_245:Int> isa OTHER */
var248 = 1; /* easy <var_245:Int> isa OTHER*/
if (unlikely(!var248)) {
var_class_name251 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name251);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var252 = var_i243 < var_245;
var246 = var252;
goto RET_LABEL247;
RET_LABEL247:(void)0;
}
}
if (var246){
if (var_nsig == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 731);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var_nsig) on <var_nsig:nullable ASignature> */
if (unlikely(var_nsig == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1279);
show_backtrace(1);
}
var255 = var_nsig->attrs[COLOR_parser_nodes__ASignature___n_params].val; /* _n_params on <var_nsig:nullable ASignature> */
if (unlikely(var255 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1279);
show_backtrace(1);
}
var253 = var255;
RET_LABEL254:(void)0;
}
}
{
var256 = parser_nodes__ANodes___91d_93d(var253, var_i243);
}
{
{ /* Inline parser_nodes#AParam#n_type (var256) on <var256:ANode(AParam)> */
var259 = var256->attrs[COLOR_parser_nodes__AParam___n_type].val; /* _n_type on <var256:ANode(AParam)> */
var257 = var259;
RET_LABEL258:(void)0;
}
}
var_nt = var257;
var260 = NULL;
if (var_nt == NULL) {
var261 = 0; /* is null */
} else {
var261 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nt,var260) on <var_nt:nullable AType> */
var_other61 = var260;
{
var265 = ((short int (*)(val*, val*))(var_nt->class->vft[COLOR_kernel__Object___61d_61d]))(var_nt, var_other61) /* == on <var_nt:nullable AType(AType)>*/;
var264 = var265;
}
var266 = !var264;
var262 = var266;
goto RET_LABEL263;
RET_LABEL263:(void)0;
}
var261 = var262;
}
if (var261){
{
{ /* Inline modelize_class#AType#mtype (var_nt) on <var_nt:nullable AType(AType)> */
var269 = var_nt->attrs[COLOR_modelize_class__AType___mtype].val; /* _mtype on <var_nt:nullable AType(AType)> */
var267 = var269;
RET_LABEL268:(void)0;
}
}
if (unlikely(var267 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 732);
show_backtrace(1);
}
{
modelize_property__ModelBuilder__check_visibility(var_modelbuilder, var_nt, var267, var_mpropdef); /* Direct call modelize_property#ModelBuilder#check_visibility on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
var270 = 1;
{
var271 = kernel__Int__successor(var_i243, var270);
}
var_i243 = var271;
} else {
goto BREAK_label272;
}
}
BREAK_label272: (void)0;
if (var_nsig == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 734);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ASignature#n_type (var_nsig) on <var_nsig:nullable ASignature> */
if (unlikely(var_nsig == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1281);
show_backtrace(1);
}
var275 = var_nsig->attrs[COLOR_parser_nodes__ASignature___n_type].val; /* _n_type on <var_nsig:nullable ASignature> */
var273 = var275;
RET_LABEL274:(void)0;
}
}
var_nt276 = var273;
var277 = NULL;
if (var_nt276 == NULL) {
var278 = 0; /* is null */
} else {
var278 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nt276,var277) on <var_nt276:nullable AType> */
var_other61 = var277;
{
var282 = ((short int (*)(val*, val*))(var_nt276->class->vft[COLOR_kernel__Object___61d_61d]))(var_nt276, var_other61) /* == on <var_nt276:nullable AType(AType)>*/;
var281 = var282;
}
var283 = !var281;
var279 = var283;
goto RET_LABEL280;
RET_LABEL280:(void)0;
}
var278 = var279;
}
if (var278){
{
{ /* Inline modelize_class#AType#mtype (var_nt276) on <var_nt276:nullable AType(AType)> */
var286 = var_nt276->attrs[COLOR_modelize_class__AType___mtype].val; /* _mtype on <var_nt276:nullable AType(AType)> */
var284 = var286;
RET_LABEL285:(void)0;
}
}
if (unlikely(var284 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 735);
show_backtrace(1);
}
{
modelize_property__ModelBuilder__check_visibility(var_modelbuilder, var_nt276, var284, var_mpropdef); /* Direct call modelize_property#ModelBuilder#check_visibility on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
} else {
}
RET_LABEL:;
}
/* method modelize_property#AMethPropdef#check_signature for (self: Object, ModelBuilder) */
void VIRTUAL_modelize_property__AMethPropdef__check_signature(val* self, val* p0) {
modelize_property__AMethPropdef__check_signature(self, p0); /* Direct call modelize_property#AMethPropdef#check_signature on <self:Object(AMethPropdef)>*/
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#noinit for (self: AAttrPropdef): Bool */
short int modelize_property__AAttrPropdef__noinit(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_modelize_property__AAttrPropdef___noinit].s; /* _noinit on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#noinit for (self: Object): Bool */
short int VIRTUAL_modelize_property__AAttrPropdef__noinit(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline modelize_property#AAttrPropdef#noinit (self) on <self:Object(AAttrPropdef)> */
var3 = self->attrs[COLOR_modelize_property__AAttrPropdef___noinit].s; /* _noinit on <self:Object(AAttrPropdef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#noinit= for (self: AAttrPropdef, Bool) */
void modelize_property__AAttrPropdef__noinit_61d(val* self, short int p0) {
self->attrs[COLOR_modelize_property__AAttrPropdef___noinit].s = p0; /* _noinit on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#noinit= for (self: Object, Bool) */
void VIRTUAL_modelize_property__AAttrPropdef__noinit_61d(val* self, short int p0) {
{ /* Inline modelize_property#AAttrPropdef#noinit= (self,p0) on <self:Object(AAttrPropdef)> */
self->attrs[COLOR_modelize_property__AAttrPropdef___noinit].s = p0; /* _noinit on <self:Object(AAttrPropdef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#is_lazy for (self: AAttrPropdef): Bool */
short int modelize_property__AAttrPropdef__is_lazy(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_modelize_property__AAttrPropdef___is_lazy].s; /* _is_lazy on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#is_lazy for (self: Object): Bool */
short int VIRTUAL_modelize_property__AAttrPropdef__is_lazy(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline modelize_property#AAttrPropdef#is_lazy (self) on <self:Object(AAttrPropdef)> */
var3 = self->attrs[COLOR_modelize_property__AAttrPropdef___is_lazy].s; /* _is_lazy on <self:Object(AAttrPropdef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#is_lazy= for (self: AAttrPropdef, Bool) */
void modelize_property__AAttrPropdef__is_lazy_61d(val* self, short int p0) {
self->attrs[COLOR_modelize_property__AAttrPropdef___is_lazy].s = p0; /* _is_lazy on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#is_lazy= for (self: Object, Bool) */
void VIRTUAL_modelize_property__AAttrPropdef__is_lazy_61d(val* self, short int p0) {
{ /* Inline modelize_property#AAttrPropdef#is_lazy= (self,p0) on <self:Object(AAttrPropdef)> */
self->attrs[COLOR_modelize_property__AAttrPropdef___is_lazy].s = p0; /* _is_lazy on <self:Object(AAttrPropdef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#has_value for (self: AAttrPropdef): Bool */
short int modelize_property__AAttrPropdef__has_value(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_modelize_property__AAttrPropdef___has_value].s; /* _has_value on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#has_value for (self: Object): Bool */
short int VIRTUAL_modelize_property__AAttrPropdef__has_value(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline modelize_property#AAttrPropdef#has_value (self) on <self:Object(AAttrPropdef)> */
var3 = self->attrs[COLOR_modelize_property__AAttrPropdef___has_value].s; /* _has_value on <self:Object(AAttrPropdef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#has_value= for (self: AAttrPropdef, Bool) */
void modelize_property__AAttrPropdef__has_value_61d(val* self, short int p0) {
self->attrs[COLOR_modelize_property__AAttrPropdef___has_value].s = p0; /* _has_value on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#has_value= for (self: Object, Bool) */
void VIRTUAL_modelize_property__AAttrPropdef__has_value_61d(val* self, short int p0) {
{ /* Inline modelize_property#AAttrPropdef#has_value= (self,p0) on <self:Object(AAttrPropdef)> */
self->attrs[COLOR_modelize_property__AAttrPropdef___has_value].s = p0; /* _has_value on <self:Object(AAttrPropdef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#mlazypropdef for (self: AAttrPropdef): nullable MAttributeDef */
val* modelize_property__AAttrPropdef__mlazypropdef(val* self) {
val* var /* : nullable MAttributeDef */;
val* var1 /* : nullable MAttributeDef */;
var1 = self->attrs[COLOR_modelize_property__AAttrPropdef___mlazypropdef].val; /* _mlazypropdef on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#mlazypropdef for (self: Object): nullable MAttributeDef */
val* VIRTUAL_modelize_property__AAttrPropdef__mlazypropdef(val* self) {
val* var /* : nullable MAttributeDef */;
val* var1 /* : nullable MAttributeDef */;
val* var3 /* : nullable MAttributeDef */;
{ /* Inline modelize_property#AAttrPropdef#mlazypropdef (self) on <self:Object(AAttrPropdef)> */
var3 = self->attrs[COLOR_modelize_property__AAttrPropdef___mlazypropdef].val; /* _mlazypropdef on <self:Object(AAttrPropdef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#mlazypropdef= for (self: AAttrPropdef, nullable MAttributeDef) */
void modelize_property__AAttrPropdef__mlazypropdef_61d(val* self, val* p0) {
self->attrs[COLOR_modelize_property__AAttrPropdef___mlazypropdef].val = p0; /* _mlazypropdef on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#mlazypropdef= for (self: Object, nullable MAttributeDef) */
void VIRTUAL_modelize_property__AAttrPropdef__mlazypropdef_61d(val* self, val* p0) {
{ /* Inline modelize_property#AAttrPropdef#mlazypropdef= (self,p0) on <self:Object(AAttrPropdef)> */
self->attrs[COLOR_modelize_property__AAttrPropdef___mlazypropdef].val = p0; /* _mlazypropdef on <self:Object(AAttrPropdef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#mreadpropdef for (self: AAttrPropdef): nullable MMethodDef */
val* modelize_property__AAttrPropdef__mreadpropdef(val* self) {
val* var /* : nullable MMethodDef */;
val* var1 /* : nullable MMethodDef */;
var1 = self->attrs[COLOR_modelize_property__AAttrPropdef___mreadpropdef].val; /* _mreadpropdef on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#mreadpropdef for (self: Object): nullable MMethodDef */
val* VIRTUAL_modelize_property__AAttrPropdef__mreadpropdef(val* self) {
val* var /* : nullable MMethodDef */;
val* var1 /* : nullable MMethodDef */;
val* var3 /* : nullable MMethodDef */;
{ /* Inline modelize_property#AAttrPropdef#mreadpropdef (self) on <self:Object(AAttrPropdef)> */
var3 = self->attrs[COLOR_modelize_property__AAttrPropdef___mreadpropdef].val; /* _mreadpropdef on <self:Object(AAttrPropdef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#mreadpropdef= for (self: AAttrPropdef, nullable MMethodDef) */
void modelize_property__AAttrPropdef__mreadpropdef_61d(val* self, val* p0) {
self->attrs[COLOR_modelize_property__AAttrPropdef___mreadpropdef].val = p0; /* _mreadpropdef on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#mreadpropdef= for (self: Object, nullable MMethodDef) */
void VIRTUAL_modelize_property__AAttrPropdef__mreadpropdef_61d(val* self, val* p0) {
{ /* Inline modelize_property#AAttrPropdef#mreadpropdef= (self,p0) on <self:Object(AAttrPropdef)> */
self->attrs[COLOR_modelize_property__AAttrPropdef___mreadpropdef].val = p0; /* _mreadpropdef on <self:Object(AAttrPropdef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#mwritepropdef for (self: AAttrPropdef): nullable MMethodDef */
val* modelize_property__AAttrPropdef__mwritepropdef(val* self) {
val* var /* : nullable MMethodDef */;
val* var1 /* : nullable MMethodDef */;
var1 = self->attrs[COLOR_modelize_property__AAttrPropdef___mwritepropdef].val; /* _mwritepropdef on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#mwritepropdef for (self: Object): nullable MMethodDef */
val* VIRTUAL_modelize_property__AAttrPropdef__mwritepropdef(val* self) {
val* var /* : nullable MMethodDef */;
val* var1 /* : nullable MMethodDef */;
val* var3 /* : nullable MMethodDef */;
{ /* Inline modelize_property#AAttrPropdef#mwritepropdef (self) on <self:Object(AAttrPropdef)> */
var3 = self->attrs[COLOR_modelize_property__AAttrPropdef___mwritepropdef].val; /* _mwritepropdef on <self:Object(AAttrPropdef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#mwritepropdef= for (self: AAttrPropdef, nullable MMethodDef) */
void modelize_property__AAttrPropdef__mwritepropdef_61d(val* self, val* p0) {
self->attrs[COLOR_modelize_property__AAttrPropdef___mwritepropdef].val = p0; /* _mwritepropdef on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#mwritepropdef= for (self: Object, nullable MMethodDef) */
void VIRTUAL_modelize_property__AAttrPropdef__mwritepropdef_61d(val* self, val* p0) {
{ /* Inline modelize_property#AAttrPropdef#mwritepropdef= (self,p0) on <self:Object(AAttrPropdef)> */
self->attrs[COLOR_modelize_property__AAttrPropdef___mwritepropdef].val = p0; /* _mwritepropdef on <self:Object(AAttrPropdef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#build_property for (self: AAttrPropdef, ModelBuilder, MClassDef) */
void modelize_property__AAttrPropdef__build_property(val* self, val* p0, val* p1) {
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
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var_ /* var : Bool */;
val* var18 /* : MClass */;
val* var20 /* : MClass */;
val* var21 /* : MClassKind */;
val* var23 /* : MClassKind */;
val* var24 /* : MClassKind */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
static val* varonce;
val* var31 /* : String */;
char* var32 /* : NativeString */;
long var33 /* : Int */;
val* var34 /* : FlatString */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
long var38 /* : Int */;
val* var39 /* : FlatString */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : FlatString */;
val* var45 /* : Array[Object] */;
long var46 /* : Int */;
val* var47 /* : NativeArray[Object] */;
val* var48 /* : String */;
val* var49 /* : MClassKind */;
val* var51 /* : MClassKind */;
val* var52 /* : MClassKind */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
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
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
long var72 /* : Int */;
val* var73 /* : FlatString */;
val* var74 /* : Array[Object] */;
long var75 /* : Int */;
val* var76 /* : NativeArray[Object] */;
val* var77 /* : String */;
val* var78 /* : MClassKind */;
val* var80 /* : MClassKind */;
val* var81 /* : MClassKind */;
short int var82 /* : Bool */;
short int var83 /* : Bool */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : NativeString */;
long var91 /* : Int */;
val* var92 /* : FlatString */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
long var96 /* : Int */;
val* var97 /* : FlatString */;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : NativeString */;
long var101 /* : Int */;
val* var102 /* : FlatString */;
val* var103 /* : Array[Object] */;
long var104 /* : Int */;
val* var105 /* : NativeArray[Object] */;
val* var106 /* : String */;
val* var107 /* : TId */;
val* var109 /* : TId */;
val* var_nid2 /* var nid2: TId */;
val* var110 /* : MAttribute */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : NativeString */;
long var114 /* : Int */;
val* var115 /* : FlatString */;
val* var116 /* : String */;
val* var117 /* : MVisibility */;
val* var_mprop /* var mprop: MAttribute */;
val* var118 /* : MAttributeDef */;
val* var119 /* : Location */;
val* var121 /* : Location */;
val* var_mpropdef /* var mpropdef: MAttributeDef */;
short int var122 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var124 /* : Bool */;
int cltype125;
int idtype126;
const struct type* type_struct127;
const char* var_class_name128;
val* var129 /* : HashMap[MPropDef, APropdef] */;
val* var131 /* : HashMap[MPropDef, APropdef] */;
val* var_readname /* var readname: String */;
val* var132 /* : nullable MProperty */;
short int var133 /* : Bool */;
int cltype134;
int idtype135;
const char* var_class_name136;
val* var_mreadprop /* var mreadprop: nullable MMethod */;
val* var137 /* : null */;
short int var138 /* : Bool */;
short int var139 /* : Bool */;
short int var141 /* : Bool */;
short int var143 /* : Bool */;
val* var144 /* : nullable AVisibility */;
val* var146 /* : nullable AVisibility */;
val* var147 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: MVisibility */;
val* var148 /* : MMethod */;
val* var149 /* : nullable TKwredef */;
val* var151 /* : nullable TKwredef */;
short int var152 /* : Bool */;
short int var153 /* : Bool */;
short int var154 /* : Bool */;
val* var155 /* : nullable MDeprecationInfo */;
val* var157 /* : nullable MDeprecationInfo */;
val* var159 /* : nullable TKwredef */;
val* var161 /* : nullable TKwredef */;
short int var162 /* : Bool */;
short int var163 /* : Bool */;
short int var164 /* : Bool */;
val* var165 /* : nullable AVisibility */;
val* var167 /* : nullable AVisibility */;
val* var168 /* : Map[MProperty, APropdef] */;
val* var170 /* : Map[MProperty, APropdef] */;
val* var171 /* : MMethodDef */;
val* var172 /* : Location */;
val* var174 /* : Location */;
val* var_mreadpropdef /* var mreadpropdef: MMethodDef */;
val* var176 /* : HashMap[MPropDef, APropdef] */;
val* var178 /* : HashMap[MPropDef, APropdef] */;
val* var179 /* : nullable MDoc */;
val* var181 /* : nullable MDoc */;
short int var183 /* : Bool */;
val* var184 /* : nullable AExpr */;
val* var186 /* : nullable AExpr */;
val* var187 /* : null */;
short int var188 /* : Bool */;
short int var189 /* : Bool */;
val* var_other191 /* var other: nullable Object */;
short int var192 /* : Bool */;
short int var193 /* : Bool */;
short int var194 /* : Bool */;
short int var_195 /* var : Bool */;
val* var196 /* : nullable AExpr */;
val* var198 /* : nullable AExpr */;
val* var199 /* : null */;
short int var200 /* : Bool */;
short int var201 /* : Bool */;
short int var203 /* : Bool */;
short int var204 /* : Bool */;
short int var205 /* : Bool */;
static val* varonce207;
val* var208 /* : String */;
char* var209 /* : NativeString */;
long var210 /* : Int */;
val* var211 /* : FlatString */;
val* var212 /* : nullable AAnnotation */;
val* var_atnoinit /* var atnoinit: nullable AAnnotation */;
val* var213 /* : null */;
short int var214 /* : Bool */;
short int var215 /* : Bool */;
short int var217 /* : Bool */;
short int var218 /* : Bool */;
short int var219 /* : Bool */;
short int var220 /* : Bool */;
short int var222 /* : Bool */;
short int var224 /* : Bool */;
static val* varonce225;
val* var226 /* : String */;
char* var227 /* : NativeString */;
long var228 /* : Int */;
val* var229 /* : FlatString */;
static val* varonce230;
val* var231 /* : String */;
char* var232 /* : NativeString */;
long var233 /* : Int */;
val* var234 /* : FlatString */;
val* var235 /* : nullable AAnnotation */;
val* var_atlazy /* var atlazy: nullable AAnnotation */;
static val* varonce236;
val* var237 /* : String */;
char* var238 /* : NativeString */;
long var239 /* : Int */;
val* var240 /* : FlatString */;
val* var241 /* : nullable AAnnotation */;
val* var_atautoinit /* var atautoinit: nullable AAnnotation */;
short int var242 /* : Bool */;
val* var243 /* : null */;
short int var244 /* : Bool */;
short int var245 /* : Bool */;
short int var247 /* : Bool */;
short int var248 /* : Bool */;
short int var249 /* : Bool */;
short int var_250 /* var : Bool */;
val* var251 /* : null */;
short int var252 /* : Bool */;
short int var253 /* : Bool */;
short int var255 /* : Bool */;
short int var256 /* : Bool */;
short int var257 /* : Bool */;
short int var258 /* : Bool */;
val* var259 /* : null */;
short int var260 /* : Bool */;
short int var261 /* : Bool */;
short int var263 /* : Bool */;
short int var264 /* : Bool */;
short int var265 /* : Bool */;
short int var_266 /* var : Bool */;
val* var267 /* : null */;
short int var268 /* : Bool */;
short int var269 /* : Bool */;
short int var271 /* : Bool */;
short int var272 /* : Bool */;
short int var273 /* : Bool */;
static val* varonce274;
val* var275 /* : String */;
char* var276 /* : NativeString */;
long var277 /* : Int */;
val* var278 /* : FlatString */;
short int var279 /* : Bool */;
short int var281 /* : Bool */;
short int var282 /* : Bool */;
val* var283 /* : null */;
short int var284 /* : Bool */;
short int var285 /* : Bool */;
short int var287 /* : Bool */;
short int var288 /* : Bool */;
short int var289 /* : Bool */;
static val* varonce290;
val* var291 /* : String */;
char* var292 /* : NativeString */;
long var293 /* : Int */;
val* var294 /* : FlatString */;
val* var295 /* : null */;
short int var296 /* : Bool */;
short int var297 /* : Bool */;
short int var299 /* : Bool */;
short int var300 /* : Bool */;
short int var301 /* : Bool */;
static val* varonce302;
val* var303 /* : String */;
char* var304 /* : NativeString */;
long var305 /* : Int */;
val* var306 /* : FlatString */;
short int var307 /* : Bool */;
val* var309 /* : MAttribute */;
static val* varonce310;
val* var311 /* : String */;
char* var312 /* : NativeString */;
long var313 /* : Int */;
val* var314 /* : FlatString */;
val* var315 /* : String */;
val* var316 /* : MVisibility */;
val* var_mlazyprop /* var mlazyprop: MAttribute */;
val* var317 /* : MAttributeDef */;
val* var318 /* : Location */;
val* var320 /* : Location */;
val* var_mlazypropdef /* var mlazypropdef: MAttributeDef */;
static val* varonce322;
val* var323 /* : String */;
char* var324 /* : NativeString */;
long var325 /* : Int */;
val* var326 /* : FlatString */;
val* var327 /* : nullable AAnnotation */;
val* var_atreadonly /* var atreadonly: nullable AAnnotation */;
val* var328 /* : null */;
short int var329 /* : Bool */;
short int var330 /* : Bool */;
short int var332 /* : Bool */;
short int var333 /* : Bool */;
short int var334 /* : Bool */;
short int var335 /* : Bool */;
short int var337 /* : Bool */;
short int var338 /* : Bool */;
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
val* var349 /* : String */;
val* var_writename /* var writename: String */;
static val* varonce350;
val* var351 /* : String */;
char* var352 /* : NativeString */;
long var353 /* : Int */;
val* var354 /* : FlatString */;
val* var355 /* : nullable AAnnotation */;
val* var_atwritable /* var atwritable: nullable AAnnotation */;
val* var356 /* : null */;
short int var357 /* : Bool */;
short int var358 /* : Bool */;
short int var360 /* : Bool */;
short int var361 /* : Bool */;
short int var362 /* : Bool */;
val* var363 /* : ANodes[AExpr] */;
val* var365 /* : ANodes[AExpr] */;
short int var366 /* : Bool */;
short int var367 /* : Bool */;
val* var368 /* : String */;
val* var369 /* : nullable String */;
val* var370 /* : nullable MProperty */;
short int var371 /* : Bool */;
int cltype372;
int idtype373;
const char* var_class_name374;
val* var_mwriteprop /* var mwriteprop: nullable MMethod */;
val* var375 /* : null */;
val* var_nwkwredef /* var nwkwredef: nullable Token */;
val* var376 /* : null */;
short int var377 /* : Bool */;
short int var378 /* : Bool */;
short int var380 /* : Bool */;
short int var381 /* : Bool */;
short int var382 /* : Bool */;
val* var383 /* : nullable TKwredef */;
val* var385 /* : nullable TKwredef */;
val* var386 /* : null */;
short int var387 /* : Bool */;
short int var388 /* : Bool */;
short int var390 /* : Bool */;
short int var392 /* : Bool */;
val* var393 /* : null */;
short int var394 /* : Bool */;
short int var395 /* : Bool */;
short int var397 /* : Bool */;
short int var398 /* : Bool */;
short int var399 /* : Bool */;
val* var400 /* : nullable AVisibility */;
val* var402 /* : nullable AVisibility */;
val* var403 /* : MVisibility */;
val* var_mvisibility404 /* var mvisibility: nullable Object */;
val* var405 /* : MVisibility */;
val* var406 /* : MMethod */;
short int var407 /* : Bool */;
short int var408 /* : Bool */;
short int var409 /* : Bool */;
val* var410 /* : nullable MDeprecationInfo */;
val* var412 /* : nullable MDeprecationInfo */;
val* var414 /* : nullable Token */;
val* var415 /* : nullable TKwredef */;
val* var417 /* : nullable TKwredef */;
short int var418 /* : Bool */;
short int var419 /* : Bool */;
short int var420 /* : Bool */;
val* var421 /* : null */;
short int var422 /* : Bool */;
short int var423 /* : Bool */;
short int var425 /* : Bool */;
short int var426 /* : Bool */;
short int var427 /* : Bool */;
val* var428 /* : nullable AVisibility */;
val* var430 /* : nullable AVisibility */;
val* var431 /* : Map[MProperty, APropdef] */;
val* var433 /* : Map[MProperty, APropdef] */;
val* var434 /* : MMethodDef */;
val* var435 /* : Location */;
val* var437 /* : Location */;
val* var_mwritepropdef /* var mwritepropdef: MMethodDef */;
val* var439 /* : HashMap[MPropDef, APropdef] */;
val* var441 /* : HashMap[MPropDef, APropdef] */;
val* var442 /* : nullable MDoc */;
val* var444 /* : nullable MDoc */;
var_modelbuilder = p0;
var_mclassdef = p1;
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var2 = var_mclassdef->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_mclass = var;
{
{ /* Inline parser_nodes#AAttrPropdef#n_id2 (self) on <self:AAttrPropdef> */
var5 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_id2].val; /* _n_id2 on <self:AAttrPropdef> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id2");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1023);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = lexer_work__Token__text(var3);
}
var_name = var6;
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:MClass> */
var10 = var_mclass->attrs[COLOR_model__MClass___kind].val; /* _kind on <var_mclass:MClass> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 371);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = model__Object__interface_kind(self);
}
{
{ /* Inline kernel#Object#== (var8,var11) on <var8:MClassKind> */
var_other = var11;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:MClassKind> */
var17 = var8 == var_other;
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
var_ = var12;
if (var12){
var7 = var_;
} else {
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var20 = var_mclassdef->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var18) on <var18:MClass> */
var23 = var18->attrs[COLOR_model__MClass___kind].val; /* _kind on <var18:MClass> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 371);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = model__Object__enum_kind(self);
}
{
{ /* Inline kernel#Object#== (var21,var24) on <var21:MClassKind> */
var_other = var24;
{
{ /* Inline kernel#Object#is_same_instance (var21,var_other) on <var21:MClassKind> */
var30 = var21 == var_other;
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
var25 = var26;
}
var7 = var25;
}
if (var7){
if (varonce) {
var31 = varonce;
} else {
var32 = "Error: Attempt to define attribute ";
var33 = 35;
var34 = string__NativeString__to_s_with_length(var32, var33);
var31 = var34;
varonce = var31;
}
if (varonce35) {
var36 = varonce35;
} else {
var37 = " in the interface ";
var38 = 18;
var39 = string__NativeString__to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
if (varonce40) {
var41 = varonce40;
} else {
var42 = ".";
var43 = 1;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
var45 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var45 = array_instance Array[Object] */
var46 = 5;
var47 = NEW_array__NativeArray(var46, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var47)->values[0] = (val*) var31;
((struct instance_array__NativeArray*)var47)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var47)->values[2] = (val*) var36;
((struct instance_array__NativeArray*)var47)->values[3] = (val*) var_mclass;
((struct instance_array__NativeArray*)var47)->values[4] = (val*) var41;
{
((void (*)(val*, val*, long))(var45->class->vft[COLOR_array__Array__with_native]))(var45, var47, var46) /* with_native on <var45:Array[Object]>*/;
}
}
{
var48 = ((val* (*)(val*))(var45->class->vft[COLOR_string__Object__to_s]))(var45) /* to_s on <var45:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, self, var48); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:MClass> */
var51 = var_mclass->attrs[COLOR_model__MClass___kind].val; /* _kind on <var_mclass:MClass> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 371);
show_backtrace(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
var52 = model__Object__enum_kind(self);
}
{
{ /* Inline kernel#Object#== (var49,var52) on <var49:MClassKind> */
var_other = var52;
{
{ /* Inline kernel#Object#is_same_instance (var49,var_other) on <var49:MClassKind> */
var58 = var49 == var_other;
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
if (varonce59) {
var60 = varonce59;
} else {
var61 = "Error: Attempt to define attribute ";
var62 = 35;
var63 = string__NativeString__to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
if (varonce64) {
var65 = varonce64;
} else {
var66 = " in the enum class ";
var67 = 19;
var68 = string__NativeString__to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
if (varonce69) {
var70 = varonce69;
} else {
var71 = ".";
var72 = 1;
var73 = string__NativeString__to_s_with_length(var71, var72);
var70 = var73;
varonce69 = var70;
}
var74 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var74 = array_instance Array[Object] */
var75 = 5;
var76 = NEW_array__NativeArray(var75, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var76)->values[0] = (val*) var60;
((struct instance_array__NativeArray*)var76)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var76)->values[2] = (val*) var65;
((struct instance_array__NativeArray*)var76)->values[3] = (val*) var_mclass;
((struct instance_array__NativeArray*)var76)->values[4] = (val*) var70;
{
((void (*)(val*, val*, long))(var74->class->vft[COLOR_array__Array__with_native]))(var74, var76, var75) /* with_native on <var74:Array[Object]>*/;
}
}
{
var77 = ((val* (*)(val*))(var74->class->vft[COLOR_string__Object__to_s]))(var74) /* to_s on <var74:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, self, var77); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:MClass> */
var80 = var_mclass->attrs[COLOR_model__MClass___kind].val; /* _kind on <var_mclass:MClass> */
if (unlikely(var80 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 371);
show_backtrace(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
var81 = model__Object__extern_kind(self);
}
{
{ /* Inline kernel#Object#== (var78,var81) on <var78:MClassKind> */
var_other = var81;
{
{ /* Inline kernel#Object#is_same_instance (var78,var_other) on <var78:MClassKind> */
var87 = var78 == var_other;
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
if (varonce88) {
var89 = varonce88;
} else {
var90 = "Error: Attempt to define attribute ";
var91 = 35;
var92 = string__NativeString__to_s_with_length(var90, var91);
var89 = var92;
varonce88 = var89;
}
if (varonce93) {
var94 = varonce93;
} else {
var95 = " in the extern class ";
var96 = 21;
var97 = string__NativeString__to_s_with_length(var95, var96);
var94 = var97;
varonce93 = var94;
}
if (varonce98) {
var99 = varonce98;
} else {
var100 = ".";
var101 = 1;
var102 = string__NativeString__to_s_with_length(var100, var101);
var99 = var102;
varonce98 = var99;
}
var103 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var103 = array_instance Array[Object] */
var104 = 5;
var105 = NEW_array__NativeArray(var104, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var105)->values[0] = (val*) var89;
((struct instance_array__NativeArray*)var105)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var105)->values[2] = (val*) var94;
((struct instance_array__NativeArray*)var105)->values[3] = (val*) var_mclass;
((struct instance_array__NativeArray*)var105)->values[4] = (val*) var99;
{
((void (*)(val*, val*, long))(var103->class->vft[COLOR_array__Array__with_native]))(var103, var105, var104) /* with_native on <var103:Array[Object]>*/;
}
}
{
var106 = ((val* (*)(val*))(var103->class->vft[COLOR_string__Object__to_s]))(var103) /* to_s on <var103:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, self, var106); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
}
}
{
{ /* Inline parser_nodes#AAttrPropdef#n_id2 (self) on <self:AAttrPropdef> */
var109 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_id2].val; /* _n_id2 on <self:AAttrPropdef> */
if (unlikely(var109 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id2");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1023);
show_backtrace(1);
}
var107 = var109;
RET_LABEL108:(void)0;
}
}
var_nid2 = var107;
var110 = NEW_model__MAttribute(&type_model__MAttribute);
if (varonce111) {
var112 = varonce111;
} else {
var113 = "_";
var114 = 1;
var115 = string__NativeString__to_s_with_length(var113, var114);
var112 = var115;
varonce111 = var112;
}
{
var116 = string__FlatString___43d(var112, var_name);
}
{
var117 = model_base__Object__private_visibility(self);
}
{
model__MAttribute__init(var110, var_mclassdef, var116, var117); /* Direct call model#MAttribute#init on <var110:MAttribute>*/
}
var_mprop = var110;
var118 = NEW_model__MAttributeDef(&type_model__MAttributeDef);
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AAttrPropdef> */
var121 = self->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <self:AAttrPropdef> */
if (unlikely(var121 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 23);
show_backtrace(1);
}
var119 = var121;
RET_LABEL120:(void)0;
}
}
{
model__MAttributeDef__init(var118, var_mclassdef, var_mprop, var119); /* Direct call model#MAttributeDef#init on <var118:MAttributeDef>*/
}
var_mpropdef = var118;
/* <var_mpropdef:MAttributeDef> isa nullable MPROPDEF */
type_struct = self->type->resolution_table->types[COLOR_nullable_parser_nodes__APropdef_VTMPROPDEF];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var_mpropdef->type->table_size) {
var122 = 0;
} else {
var122 = var_mpropdef->type->type_table[cltype] == idtype;
}
if (unlikely(!var122)) {
var_class_name = var_mpropdef == NULL ? "null" : var_mpropdef->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 783);
show_backtrace(1);
}
{
{ /* Inline modelize_property#APropdef#mpropdef= (self,var_mpropdef) on <self:AAttrPropdef> */
/* Covariant cast for argument 0 (mpropdef) <var_mpropdef:MAttributeDef> isa nullable MPROPDEF */
/* <var_mpropdef:MAttributeDef> isa nullable MPROPDEF */
type_struct127 = self->type->resolution_table->types[COLOR_nullable_parser_nodes__APropdef_VTMPROPDEF];
cltype125 = type_struct127->color;
idtype126 = type_struct127->id;
if(cltype125 >= var_mpropdef->type->table_size) {
var124 = 0;
} else {
var124 = var_mpropdef->type->type_table[cltype125] == idtype126;
}
if (unlikely(!var124)) {
var_class_name128 = var_mpropdef == NULL ? "null" : var_mpropdef->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name128);
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 319);
show_backtrace(1);
}
self->attrs[COLOR_modelize_property__APropdef___mpropdef].val = var_mpropdef; /* _mpropdef on <self:AAttrPropdef> */
RET_LABEL123:(void)0;
}
}
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var131 = var_modelbuilder->attrs[COLOR_modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var131 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 39);
show_backtrace(1);
}
var129 = var131;
RET_LABEL130:(void)0;
}
}
{
hash_collection__HashMap___91d_93d_61d(var129, var_mpropdef, self); /* Direct call hash_collection#HashMap#[]= on <var129:HashMap[MPropDef, APropdef]>*/
}
var_readname = var_name;
{
var132 = modelbuilder__ModelBuilder__try_get_mproperty_by_name(var_modelbuilder, var_nid2, var_mclassdef, var_readname);
}
/* <var132:nullable MProperty> isa nullable MMethod */
cltype134 = type_nullable_model__MMethod.color;
idtype135 = type_nullable_model__MMethod.id;
if(var132 == NULL) {
var133 = 1;
} else {
if(cltype134 >= var132->type->table_size) {
var133 = 0;
} else {
var133 = var132->type->type_table[cltype134] == idtype135;
}
}
if (unlikely(!var133)) {
var_class_name136 = var132 == NULL ? "null" : var132->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MMethod", var_class_name136);
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 787);
show_backtrace(1);
}
var_mreadprop = var132;
var137 = NULL;
if (var_mreadprop == NULL) {
var138 = 1; /* is null */
} else {
var138 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mreadprop,var137) on <var_mreadprop:nullable MMethod> */
var_other = var137;
{
{ /* Inline kernel#Object#is_same_instance (var_mreadprop,var_other) on <var_mreadprop:nullable MMethod(MMethod)> */
var143 = var_mreadprop == var_other;
var141 = var143;
goto RET_LABEL142;
RET_LABEL142:(void)0;
}
}
var139 = var141;
goto RET_LABEL140;
RET_LABEL140:(void)0;
}
var138 = var139;
}
if (var138){
{
{ /* Inline parser_nodes#APropdef#n_visibility (self) on <self:AAttrPropdef> */
var146 = self->attrs[COLOR_parser_nodes__APropdef___n_visibility].val; /* _n_visibility on <self:AAttrPropdef> */
var144 = var146;
RET_LABEL145:(void)0;
}
}
{
var147 = modelize_property__APropdef__new_property_visibility(self, var_modelbuilder, var_mclassdef, var144);
}
var_mvisibility = var147;
var148 = NEW_model__MMethod(&type_model__MMethod);
{
model__MMethod__init(var148, var_mclassdef, var_readname, var_mvisibility); /* Direct call model#MMethod#init on <var148:MMethod>*/
}
var_mreadprop = var148;
{
{ /* Inline parser_nodes#APropdef#n_kwredef (self) on <self:AAttrPropdef> */
var151 = self->attrs[COLOR_parser_nodes__APropdef___n_kwredef].val; /* _n_kwredef on <self:AAttrPropdef> */
var149 = var151;
RET_LABEL150:(void)0;
}
}
var152 = 0;
{
var153 = modelize_property__APropdef__check_redef_keyword(self, var_modelbuilder, var_mclassdef, var149, var152, var_mreadprop);
}
var154 = !var153;
if (var154){
goto RET_LABEL;
} else {
}
{
{ /* Inline mdoc#MEntity#deprecation (var_mprop) on <var_mprop:MAttribute> */
var157 = var_mprop->attrs[COLOR_mdoc__MEntity___deprecation].val; /* _deprecation on <var_mprop:MAttribute> */
var155 = var157;
RET_LABEL156:(void)0;
}
}
{
{ /* Inline mdoc#MEntity#deprecation= (var_mreadprop,var155) on <var_mreadprop:nullable MMethod(MMethod)> */
var_mreadprop->attrs[COLOR_mdoc__MEntity___deprecation].val = var155; /* _deprecation on <var_mreadprop:nullable MMethod(MMethod)> */
RET_LABEL158:(void)0;
}
}
} else {
{
{ /* Inline parser_nodes#APropdef#n_kwredef (self) on <self:AAttrPropdef> */
var161 = self->attrs[COLOR_parser_nodes__APropdef___n_kwredef].val; /* _n_kwredef on <self:AAttrPropdef> */
var159 = var161;
RET_LABEL160:(void)0;
}
}
var162 = 1;
{
var163 = modelize_property__APropdef__check_redef_keyword(self, var_modelbuilder, var_mclassdef, var159, var162, var_mreadprop);
}
var164 = !var163;
if (var164){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#APropdef#n_visibility (self) on <self:AAttrPropdef> */
var167 = self->attrs[COLOR_parser_nodes__APropdef___n_visibility].val; /* _n_visibility on <self:AAttrPropdef> */
var165 = var167;
RET_LABEL166:(void)0;
}
}
{
modelize_property__APropdef__check_redef_property_visibility(self, var_modelbuilder, var165, var_mreadprop); /* Direct call modelize_property#APropdef#check_redef_property_visibility on <self:AAttrPropdef>*/
}
}
{
{ /* Inline modelize_property#MClassDef#mprop2npropdef (var_mclassdef) on <var_mclassdef:MClassDef> */
var170 = var_mclassdef->attrs[COLOR_modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <var_mclassdef:MClassDef> */
if (unlikely(var170 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 310);
show_backtrace(1);
}
var168 = var170;
RET_LABEL169:(void)0;
}
}
{
((void (*)(val*, val*, val*))(var168->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var168, var_mreadprop, self) /* []= on <var168:Map[MProperty, APropdef]>*/;
}
var171 = NEW_model__MMethodDef(&type_model__MMethodDef);
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AAttrPropdef> */
var174 = self->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <self:AAttrPropdef> */
if (unlikely(var174 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 23);
show_backtrace(1);
}
var172 = var174;
RET_LABEL173:(void)0;
}
}
{
model__MMethodDef__init(var171, var_mclassdef, var_mreadprop, var172); /* Direct call model#MMethodDef#init on <var171:MMethodDef>*/
}
var_mreadpropdef = var171;
{
{ /* Inline modelize_property#AAttrPropdef#mreadpropdef= (self,var_mreadpropdef) on <self:AAttrPropdef> */
self->attrs[COLOR_modelize_property__AAttrPropdef___mreadpropdef].val = var_mreadpropdef; /* _mreadpropdef on <self:AAttrPropdef> */
RET_LABEL175:(void)0;
}
}
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var178 = var_modelbuilder->attrs[COLOR_modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var178 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 39);
show_backtrace(1);
}
var176 = var178;
RET_LABEL177:(void)0;
}
}
{
hash_collection__HashMap___91d_93d_61d(var176, var_mreadpropdef, self); /* Direct call hash_collection#HashMap#[]= on <var176:HashMap[MPropDef, APropdef]>*/
}
{
modelize_property__APropdef__set_doc(self, var_mreadpropdef, var_modelbuilder); /* Direct call modelize_property#APropdef#set_doc on <self:AAttrPropdef>*/
}
{
{ /* Inline mdoc#MEntity#mdoc (var_mreadpropdef) on <var_mreadpropdef:MMethodDef> */
var181 = var_mreadpropdef->attrs[COLOR_mdoc__MEntity___mdoc].val; /* _mdoc on <var_mreadpropdef:MMethodDef> */
var179 = var181;
RET_LABEL180:(void)0;
}
}
{
{ /* Inline mdoc#MEntity#mdoc= (var_mpropdef,var179) on <var_mpropdef:MAttributeDef> */
var_mpropdef->attrs[COLOR_mdoc__MEntity___mdoc].val = var179; /* _mdoc on <var_mpropdef:MAttributeDef> */
RET_LABEL182:(void)0;
}
}
{
{ /* Inline parser_nodes#AAttrPropdef#n_expr (self) on <self:AAttrPropdef> */
var186 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <self:AAttrPropdef> */
var184 = var186;
RET_LABEL185:(void)0;
}
}
var187 = NULL;
if (var184 == NULL) {
var188 = 0; /* is null */
} else {
var188 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var184,var187) on <var184:nullable AExpr> */
var_other191 = var187;
{
var193 = ((short int (*)(val*, val*))(var184->class->vft[COLOR_kernel__Object___61d_61d]))(var184, var_other191) /* == on <var184:nullable AExpr(AExpr)>*/;
var192 = var193;
}
var194 = !var192;
var189 = var194;
goto RET_LABEL190;
RET_LABEL190:(void)0;
}
var188 = var189;
}
var_195 = var188;
if (var188){
var183 = var_195;
} else {
{
{ /* Inline parser_nodes#AAttrPropdef#n_block (self) on <self:AAttrPropdef> */
var198 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_block].val; /* _n_block on <self:AAttrPropdef> */
var196 = var198;
RET_LABEL197:(void)0;
}
}
var199 = NULL;
if (var196 == NULL) {
var200 = 0; /* is null */
} else {
var200 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var196,var199) on <var196:nullable AExpr> */
var_other191 = var199;
{
var204 = ((short int (*)(val*, val*))(var196->class->vft[COLOR_kernel__Object___61d_61d]))(var196, var_other191) /* == on <var196:nullable AExpr(AExpr)>*/;
var203 = var204;
}
var205 = !var203;
var201 = var205;
goto RET_LABEL202;
RET_LABEL202:(void)0;
}
var200 = var201;
}
var183 = var200;
}
{
{ /* Inline modelize_property#AAttrPropdef#has_value= (self,var183) on <self:AAttrPropdef> */
self->attrs[COLOR_modelize_property__AAttrPropdef___has_value].s = var183; /* _has_value on <self:AAttrPropdef> */
RET_LABEL206:(void)0;
}
}
if (varonce207) {
var208 = varonce207;
} else {
var209 = "noinit";
var210 = 6;
var211 = string__NativeString__to_s_with_length(var209, var210);
var208 = var211;
varonce207 = var208;
}
{
var212 = annotation__Prod__get_single_annotation(self, var208, var_modelbuilder);
}
var_atnoinit = var212;
var213 = NULL;
if (var_atnoinit == NULL) {
var214 = 0; /* is null */
} else {
var214 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atnoinit,var213) on <var_atnoinit:nullable AAnnotation> */
var_other191 = var213;
{
var218 = ((short int (*)(val*, val*))(var_atnoinit->class->vft[COLOR_kernel__Object___61d_61d]))(var_atnoinit, var_other191) /* == on <var_atnoinit:nullable AAnnotation(AAnnotation)>*/;
var217 = var218;
}
var219 = !var217;
var215 = var219;
goto RET_LABEL216;
RET_LABEL216:(void)0;
}
var214 = var215;
}
if (var214){
var220 = 1;
{
{ /* Inline modelize_property#AAttrPropdef#noinit= (self,var220) on <self:AAttrPropdef> */
self->attrs[COLOR_modelize_property__AAttrPropdef___noinit].s = var220; /* _noinit on <self:AAttrPropdef> */
RET_LABEL221:(void)0;
}
}
{
{ /* Inline modelize_property#AAttrPropdef#has_value (self) on <self:AAttrPropdef> */
var224 = self->attrs[COLOR_modelize_property__AAttrPropdef___has_value].s; /* _has_value on <self:AAttrPropdef> */
var222 = var224;
RET_LABEL223:(void)0;
}
}
if (var222){
if (varonce225) {
var226 = varonce225;
} else {
var227 = "Error: `noinit` attributes cannot have an initial value";
var228 = 55;
var229 = string__NativeString__to_s_with_length(var227, var228);
var226 = var229;
varonce225 = var226;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, var_atnoinit, var226); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
} else {
}
if (varonce230) {
var231 = varonce230;
} else {
var232 = "lazy";
var233 = 4;
var234 = string__NativeString__to_s_with_length(var232, var233);
var231 = var234;
varonce230 = var231;
}
{
var235 = annotation__Prod__get_single_annotation(self, var231, var_modelbuilder);
}
var_atlazy = var235;
if (varonce236) {
var237 = varonce236;
} else {
var238 = "autoinit";
var239 = 8;
var240 = string__NativeString__to_s_with_length(var238, var239);
var237 = var240;
varonce236 = var237;
}
{
var241 = annotation__Prod__get_single_annotation(self, var237, var_modelbuilder);
}
var_atautoinit = var241;
var243 = NULL;
if (var_atlazy == NULL) {
var244 = 0; /* is null */
} else {
var244 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atlazy,var243) on <var_atlazy:nullable AAnnotation> */
var_other191 = var243;
{
var248 = ((short int (*)(val*, val*))(var_atlazy->class->vft[COLOR_kernel__Object___61d_61d]))(var_atlazy, var_other191) /* == on <var_atlazy:nullable AAnnotation(AAnnotation)>*/;
var247 = var248;
}
var249 = !var247;
var245 = var249;
goto RET_LABEL246;
RET_LABEL246:(void)0;
}
var244 = var245;
}
var_250 = var244;
if (var244){
var242 = var_250;
} else {
var251 = NULL;
if (var_atautoinit == NULL) {
var252 = 0; /* is null */
} else {
var252 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atautoinit,var251) on <var_atautoinit:nullable AAnnotation> */
var_other191 = var251;
{
var256 = ((short int (*)(val*, val*))(var_atautoinit->class->vft[COLOR_kernel__Object___61d_61d]))(var_atautoinit, var_other191) /* == on <var_atautoinit:nullable AAnnotation(AAnnotation)>*/;
var255 = var256;
}
var257 = !var255;
var253 = var257;
goto RET_LABEL254;
RET_LABEL254:(void)0;
}
var252 = var253;
}
var242 = var252;
}
if (var242){
var259 = NULL;
if (var_atlazy == NULL) {
var260 = 0; /* is null */
} else {
var260 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atlazy,var259) on <var_atlazy:nullable AAnnotation> */
var_other191 = var259;
{
var264 = ((short int (*)(val*, val*))(var_atlazy->class->vft[COLOR_kernel__Object___61d_61d]))(var_atlazy, var_other191) /* == on <var_atlazy:nullable AAnnotation(AAnnotation)>*/;
var263 = var264;
}
var265 = !var263;
var261 = var265;
goto RET_LABEL262;
RET_LABEL262:(void)0;
}
var260 = var261;
}
var_266 = var260;
if (var260){
var267 = NULL;
if (var_atautoinit == NULL) {
var268 = 0; /* is null */
} else {
var268 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atautoinit,var267) on <var_atautoinit:nullable AAnnotation> */
var_other191 = var267;
{
var272 = ((short int (*)(val*, val*))(var_atautoinit->class->vft[COLOR_kernel__Object___61d_61d]))(var_atautoinit, var_other191) /* == on <var_atautoinit:nullable AAnnotation(AAnnotation)>*/;
var271 = var272;
}
var273 = !var271;
var269 = var273;
goto RET_LABEL270;
RET_LABEL270:(void)0;
}
var268 = var269;
}
var258 = var268;
} else {
var258 = var_266;
}
if (var258){
if (varonce274) {
var275 = varonce274;
} else {
var276 = "Error: lazy incompatible with autoinit";
var277 = 38;
var278 = string__NativeString__to_s_with_length(var276, var277);
var275 = var278;
varonce274 = var275;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, var_atlazy, var275); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property#AAttrPropdef#has_value (self) on <self:AAttrPropdef> */
var281 = self->attrs[COLOR_modelize_property__AAttrPropdef___has_value].s; /* _has_value on <self:AAttrPropdef> */
var279 = var281;
RET_LABEL280:(void)0;
}
}
var282 = !var279;
if (var282){
var283 = NULL;
if (var_atlazy == NULL) {
var284 = 0; /* is null */
} else {
var284 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atlazy,var283) on <var_atlazy:nullable AAnnotation> */
var_other191 = var283;
{
var288 = ((short int (*)(val*, val*))(var_atlazy->class->vft[COLOR_kernel__Object___61d_61d]))(var_atlazy, var_other191) /* == on <var_atlazy:nullable AAnnotation(AAnnotation)>*/;
var287 = var288;
}
var289 = !var287;
var285 = var289;
goto RET_LABEL286;
RET_LABEL286:(void)0;
}
var284 = var285;
}
if (var284){
if (varonce290) {
var291 = varonce290;
} else {
var292 = "Error: a lazy attribute needs a value";
var293 = 37;
var294 = string__NativeString__to_s_with_length(var292, var293);
var291 = var294;
varonce290 = var291;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, var_atlazy, var291); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
var295 = NULL;
if (var_atautoinit == NULL) {
var296 = 0; /* is null */
} else {
var296 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atautoinit,var295) on <var_atautoinit:nullable AAnnotation> */
var_other191 = var295;
{
var300 = ((short int (*)(val*, val*))(var_atautoinit->class->vft[COLOR_kernel__Object___61d_61d]))(var_atautoinit, var_other191) /* == on <var_atautoinit:nullable AAnnotation(AAnnotation)>*/;
var299 = var300;
}
var301 = !var299;
var297 = var301;
goto RET_LABEL298;
RET_LABEL298:(void)0;
}
var296 = var297;
}
if (var296){
if (varonce302) {
var303 = varonce302;
} else {
var304 = "Error: a autoinit attribute needs a value";
var305 = 41;
var306 = string__NativeString__to_s_with_length(var304, var305);
var303 = var306;
varonce302 = var303;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, var_atautoinit, var303); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
}
goto RET_LABEL;
} else {
}
var307 = 1;
{
{ /* Inline modelize_property#AAttrPropdef#is_lazy= (self,var307) on <self:AAttrPropdef> */
self->attrs[COLOR_modelize_property__AAttrPropdef___is_lazy].s = var307; /* _is_lazy on <self:AAttrPropdef> */
RET_LABEL308:(void)0;
}
}
var309 = NEW_model__MAttribute(&type_model__MAttribute);
if (varonce310) {
var311 = varonce310;
} else {
var312 = "lazy _";
var313 = 6;
var314 = string__NativeString__to_s_with_length(var312, var313);
var311 = var314;
varonce310 = var311;
}
{
var315 = string__FlatString___43d(var311, var_name);
}
{
var316 = model_base__Object__none_visibility(self);
}
{
model__MAttribute__init(var309, var_mclassdef, var315, var316); /* Direct call model#MAttribute#init on <var309:MAttribute>*/
}
var_mlazyprop = var309;
var317 = NEW_model__MAttributeDef(&type_model__MAttributeDef);
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AAttrPropdef> */
var320 = self->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <self:AAttrPropdef> */
if (unlikely(var320 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 23);
show_backtrace(1);
}
var318 = var320;
RET_LABEL319:(void)0;
}
}
{
model__MAttributeDef__init(var317, var_mclassdef, var_mlazyprop, var318); /* Direct call model#MAttributeDef#init on <var317:MAttributeDef>*/
}
var_mlazypropdef = var317;
{
{ /* Inline modelize_property#AAttrPropdef#mlazypropdef= (self,var_mlazypropdef) on <self:AAttrPropdef> */
self->attrs[COLOR_modelize_property__AAttrPropdef___mlazypropdef].val = var_mlazypropdef; /* _mlazypropdef on <self:AAttrPropdef> */
RET_LABEL321:(void)0;
}
}
} else {
}
if (varonce322) {
var323 = varonce322;
} else {
var324 = "readonly";
var325 = 8;
var326 = string__NativeString__to_s_with_length(var324, var325);
var323 = var326;
varonce322 = var323;
}
{
var327 = annotation__Prod__get_single_annotation(self, var323, var_modelbuilder);
}
var_atreadonly = var327;
var328 = NULL;
if (var_atreadonly == NULL) {
var329 = 0; /* is null */
} else {
var329 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atreadonly,var328) on <var_atreadonly:nullable AAnnotation> */
var_other191 = var328;
{
var333 = ((short int (*)(val*, val*))(var_atreadonly->class->vft[COLOR_kernel__Object___61d_61d]))(var_atreadonly, var_other191) /* == on <var_atreadonly:nullable AAnnotation(AAnnotation)>*/;
var332 = var333;
}
var334 = !var332;
var330 = var334;
goto RET_LABEL331;
RET_LABEL331:(void)0;
}
var329 = var330;
}
if (var329){
{
{ /* Inline modelize_property#AAttrPropdef#has_value (self) on <self:AAttrPropdef> */
var337 = self->attrs[COLOR_modelize_property__AAttrPropdef___has_value].s; /* _has_value on <self:AAttrPropdef> */
var335 = var337;
RET_LABEL336:(void)0;
}
}
var338 = !var335;
if (var338){
if (varonce339) {
var340 = varonce339;
} else {
var341 = "Error: a readonly attribute needs a value";
var342 = 41;
var343 = string__NativeString__to_s_with_length(var341, var342);
var340 = var343;
varonce339 = var340;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, var_atreadonly, var340); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
goto RET_LABEL;
} else {
}
if (varonce344) {
var345 = varonce344;
} else {
var346 = "=";
var347 = 1;
var348 = string__NativeString__to_s_with_length(var346, var347);
var345 = var348;
varonce344 = var345;
}
{
var349 = string__FlatString___43d(var_name, var345);
}
var_writename = var349;
if (varonce350) {
var351 = varonce350;
} else {
var352 = "writable";
var353 = 8;
var354 = string__NativeString__to_s_with_length(var352, var353);
var351 = var354;
varonce350 = var351;
}
{
var355 = annotation__Prod__get_single_annotation(self, var351, var_modelbuilder);
}
var_atwritable = var355;
var356 = NULL;
if (var_atwritable == NULL) {
var357 = 0; /* is null */
} else {
var357 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atwritable,var356) on <var_atwritable:nullable AAnnotation> */
var_other191 = var356;
{
var361 = ((short int (*)(val*, val*))(var_atwritable->class->vft[COLOR_kernel__Object___61d_61d]))(var_atwritable, var_other191) /* == on <var_atwritable:nullable AAnnotation(AAnnotation)>*/;
var360 = var361;
}
var362 = !var360;
var358 = var362;
goto RET_LABEL359;
RET_LABEL359:(void)0;
}
var357 = var358;
}
if (var357){
{
{ /* Inline parser_nodes#AAnnotation#n_args (var_atwritable) on <var_atwritable:nullable AAnnotation(AAnnotation)> */
var365 = var_atwritable->attrs[COLOR_parser_nodes__AAnnotation___n_args].val; /* _n_args on <var_atwritable:nullable AAnnotation(AAnnotation)> */
if (unlikely(var365 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 2039);
show_backtrace(1);
}
var363 = var365;
RET_LABEL364:(void)0;
}
}
{
var366 = parser_nodes__ANodes__is_empty(var363);
}
var367 = !var366;
if (var367){
{
var369 = annotation__AAnnotation__arg_as_id(var_atwritable, var_modelbuilder);
}
if (var369!=NULL) {
var368 = var369;
} else {
var368 = var_writename;
}
var_writename = var368;
} else {
}
} else {
}
{
var370 = modelbuilder__ModelBuilder__try_get_mproperty_by_name(var_modelbuilder, var_nid2, var_mclassdef, var_writename);
}
/* <var370:nullable MProperty> isa nullable MMethod */
cltype372 = type_nullable_model__MMethod.color;
idtype373 = type_nullable_model__MMethod.id;
if(var370 == NULL) {
var371 = 1;
} else {
if(cltype372 >= var370->type->table_size) {
var371 = 0;
} else {
var371 = var370->type->type_table[cltype372] == idtype373;
}
}
if (unlikely(!var371)) {
var_class_name374 = var370 == NULL ? "null" : var370->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MMethod", var_class_name374);
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 853);
show_backtrace(1);
}
var_mwriteprop = var370;
var375 = NULL;
var_nwkwredef = var375;
var376 = NULL;
if (var_atwritable == NULL) {
var377 = 0; /* is null */
} else {
var377 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atwritable,var376) on <var_atwritable:nullable AAnnotation> */
var_other191 = var376;
{
var381 = ((short int (*)(val*, val*))(var_atwritable->class->vft[COLOR_kernel__Object___61d_61d]))(var_atwritable, var_other191) /* == on <var_atwritable:nullable AAnnotation(AAnnotation)>*/;
var380 = var381;
}
var382 = !var380;
var378 = var382;
goto RET_LABEL379;
RET_LABEL379:(void)0;
}
var377 = var378;
}
if (var377){
{
{ /* Inline parser_nodes#AAnnotation#n_kwredef (var_atwritable) on <var_atwritable:nullable AAnnotation(AAnnotation)> */
var385 = var_atwritable->attrs[COLOR_parser_nodes__AAnnotation___n_kwredef].val; /* _n_kwredef on <var_atwritable:nullable AAnnotation(AAnnotation)> */
var383 = var385;
RET_LABEL384:(void)0;
}
}
var_nwkwredef = var383;
} else {
}
var386 = NULL;
if (var_mwriteprop == NULL) {
var387 = 1; /* is null */
} else {
var387 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mwriteprop,var386) on <var_mwriteprop:nullable MMethod> */
var_other = var386;
{
{ /* Inline kernel#Object#is_same_instance (var_mwriteprop,var_other) on <var_mwriteprop:nullable MMethod(MMethod)> */
var392 = var_mwriteprop == var_other;
var390 = var392;
goto RET_LABEL391;
RET_LABEL391:(void)0;
}
}
var388 = var390;
goto RET_LABEL389;
RET_LABEL389:(void)0;
}
var387 = var388;
}
if (var387){
var393 = NULL;
if (var_atwritable == NULL) {
var394 = 0; /* is null */
} else {
var394 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atwritable,var393) on <var_atwritable:nullable AAnnotation> */
var_other191 = var393;
{
var398 = ((short int (*)(val*, val*))(var_atwritable->class->vft[COLOR_kernel__Object___61d_61d]))(var_atwritable, var_other191) /* == on <var_atwritable:nullable AAnnotation(AAnnotation)>*/;
var397 = var398;
}
var399 = !var397;
var395 = var399;
goto RET_LABEL396;
RET_LABEL396:(void)0;
}
var394 = var395;
}
if (var394){
{
{ /* Inline parser_nodes#AAnnotation#n_visibility (var_atwritable) on <var_atwritable:nullable AAnnotation(AAnnotation)> */
var402 = var_atwritable->attrs[COLOR_parser_nodes__AAnnotation___n_visibility].val; /* _n_visibility on <var_atwritable:nullable AAnnotation(AAnnotation)> */
var400 = var402;
RET_LABEL401:(void)0;
}
}
{
var403 = modelize_property__APropdef__new_property_visibility(self, var_modelbuilder, var_mclassdef, var400);
}
var_mvisibility404 = var403;
} else {
{
var405 = model_base__Object__private_visibility(self);
}
var_mvisibility404 = var405;
}
var406 = NEW_model__MMethod(&type_model__MMethod);
{
model__MMethod__init(var406, var_mclassdef, var_writename, var_mvisibility404); /* Direct call model#MMethod#init on <var406:MMethod>*/
}
var_mwriteprop = var406;
var407 = 0;
{
var408 = modelize_property__APropdef__check_redef_keyword(self, var_modelbuilder, var_mclassdef, var_nwkwredef, var407, var_mwriteprop);
}
var409 = !var408;
if (var409){
goto RET_LABEL;
} else {
}
{
{ /* Inline mdoc#MEntity#deprecation (var_mprop) on <var_mprop:MAttribute> */
var412 = var_mprop->attrs[COLOR_mdoc__MEntity___deprecation].val; /* _deprecation on <var_mprop:MAttribute> */
var410 = var412;
RET_LABEL411:(void)0;
}
}
{
{ /* Inline mdoc#MEntity#deprecation= (var_mwriteprop,var410) on <var_mwriteprop:nullable MMethod(MMethod)> */
var_mwriteprop->attrs[COLOR_mdoc__MEntity___deprecation].val = var410; /* _deprecation on <var_mwriteprop:nullable MMethod(MMethod)> */
RET_LABEL413:(void)0;
}
}
} else {
if (var_nwkwredef!=NULL) {
var414 = var_nwkwredef;
} else {
{
{ /* Inline parser_nodes#APropdef#n_kwredef (self) on <self:AAttrPropdef> */
var417 = self->attrs[COLOR_parser_nodes__APropdef___n_kwredef].val; /* _n_kwredef on <self:AAttrPropdef> */
var415 = var417;
RET_LABEL416:(void)0;
}
}
var414 = var415;
}
var418 = 1;
{
var419 = modelize_property__APropdef__check_redef_keyword(self, var_modelbuilder, var_mclassdef, var414, var418, var_mwriteprop);
}
var420 = !var419;
if (var420){
goto RET_LABEL;
} else {
}
var421 = NULL;
if (var_atwritable == NULL) {
var422 = 0; /* is null */
} else {
var422 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atwritable,var421) on <var_atwritable:nullable AAnnotation> */
var_other191 = var421;
{
var426 = ((short int (*)(val*, val*))(var_atwritable->class->vft[COLOR_kernel__Object___61d_61d]))(var_atwritable, var_other191) /* == on <var_atwritable:nullable AAnnotation(AAnnotation)>*/;
var425 = var426;
}
var427 = !var425;
var423 = var427;
goto RET_LABEL424;
RET_LABEL424:(void)0;
}
var422 = var423;
}
if (var422){
{
{ /* Inline parser_nodes#AAnnotation#n_visibility (var_atwritable) on <var_atwritable:nullable AAnnotation(AAnnotation)> */
var430 = var_atwritable->attrs[COLOR_parser_nodes__AAnnotation___n_visibility].val; /* _n_visibility on <var_atwritable:nullable AAnnotation(AAnnotation)> */
var428 = var430;
RET_LABEL429:(void)0;
}
}
{
modelize_property__APropdef__check_redef_property_visibility(self, var_modelbuilder, var428, var_mwriteprop); /* Direct call modelize_property#APropdef#check_redef_property_visibility on <self:AAttrPropdef>*/
}
} else {
}
}
{
{ /* Inline modelize_property#MClassDef#mprop2npropdef (var_mclassdef) on <var_mclassdef:MClassDef> */
var433 = var_mclassdef->attrs[COLOR_modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <var_mclassdef:MClassDef> */
if (unlikely(var433 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 310);
show_backtrace(1);
}
var431 = var433;
RET_LABEL432:(void)0;
}
}
{
((void (*)(val*, val*, val*))(var431->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var431, var_mwriteprop, self) /* []= on <var431:Map[MProperty, APropdef]>*/;
}
var434 = NEW_model__MMethodDef(&type_model__MMethodDef);
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AAttrPropdef> */
var437 = self->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <self:AAttrPropdef> */
if (unlikely(var437 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 23);
show_backtrace(1);
}
var435 = var437;
RET_LABEL436:(void)0;
}
}
{
model__MMethodDef__init(var434, var_mclassdef, var_mwriteprop, var435); /* Direct call model#MMethodDef#init on <var434:MMethodDef>*/
}
var_mwritepropdef = var434;
{
{ /* Inline modelize_property#AAttrPropdef#mwritepropdef= (self,var_mwritepropdef) on <self:AAttrPropdef> */
self->attrs[COLOR_modelize_property__AAttrPropdef___mwritepropdef].val = var_mwritepropdef; /* _mwritepropdef on <self:AAttrPropdef> */
RET_LABEL438:(void)0;
}
}
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var441 = var_modelbuilder->attrs[COLOR_modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var441 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 39);
show_backtrace(1);
}
var439 = var441;
RET_LABEL440:(void)0;
}
}
{
hash_collection__HashMap___91d_93d_61d(var439, var_mwritepropdef, self); /* Direct call hash_collection#HashMap#[]= on <var439:HashMap[MPropDef, APropdef]>*/
}
{
{ /* Inline mdoc#MEntity#mdoc (var_mpropdef) on <var_mpropdef:MAttributeDef> */
var444 = var_mpropdef->attrs[COLOR_mdoc__MEntity___mdoc].val; /* _mdoc on <var_mpropdef:MAttributeDef> */
var442 = var444;
RET_LABEL443:(void)0;
}
}
{
{ /* Inline mdoc#MEntity#mdoc= (var_mwritepropdef,var442) on <var_mwritepropdef:MMethodDef> */
var_mwritepropdef->attrs[COLOR_mdoc__MEntity___mdoc].val = var442; /* _mdoc on <var_mwritepropdef:MMethodDef> */
RET_LABEL445:(void)0;
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
val* var22 /* : nullable AType */;
val* var_ntype /* var ntype: nullable AType */;
val* var23 /* : null */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var_other27 /* var other: nullable Object */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
val* var31 /* : nullable MType */;
val* var32 /* : null */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
val* var41 /* : null */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
short int var_ /* var : Bool */;
val* var48 /* : null */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
short int var_55 /* var : Bool */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
val* var58 /* : MProperty */;
val* var60 /* : MProperty */;
val* var61 /* : MPropDef */;
val* var63 /* : MPropDef */;
val* var64 /* : nullable MSignature */;
val* var66 /* : nullable MSignature */;
val* var_msignature /* var msignature: nullable MSignature */;
val* var67 /* : null */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
short int var71 /* : Bool */;
short int var73 /* : Bool */;
val* var74 /* : nullable MType */;
val* var76 /* : nullable MType */;
val* var77 /* : nullable AExpr */;
val* var79 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
val* var80 /* : null */;
short int var81 /* : Bool */;
short int var82 /* : Bool */;
short int var84 /* : Bool */;
short int var86 /* : Bool */;
val* var87 /* : null */;
short int var88 /* : Bool */;
short int var89 /* : Bool */;
short int var91 /* : Bool */;
short int var92 /* : Bool */;
short int var93 /* : Bool */;
short int var94 /* : Bool */;
int cltype;
int idtype;
val* var95 /* : AType */;
val* var97 /* : AType */;
val* var98 /* : nullable MType */;
short int var99 /* : Bool */;
int cltype100;
int idtype101;
static val* varonce;
val* var102 /* : String */;
char* var103 /* : NativeString */;
long var104 /* : Int */;
val* var105 /* : FlatString */;
val* var106 /* : nullable MClass */;
val* var_cla /* var cla: nullable MClass */;
val* var107 /* : null */;
short int var108 /* : Bool */;
short int var109 /* : Bool */;
short int var111 /* : Bool */;
short int var112 /* : Bool */;
short int var113 /* : Bool */;
val* var114 /* : MClassType */;
val* var116 /* : MClassType */;
short int var117 /* : Bool */;
int cltype118;
int idtype119;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : NativeString */;
long var123 /* : Int */;
val* var124 /* : FlatString */;
val* var125 /* : nullable MClass */;
val* var_cla126 /* var cla: nullable MClass */;
val* var127 /* : null */;
short int var128 /* : Bool */;
short int var129 /* : Bool */;
short int var131 /* : Bool */;
short int var132 /* : Bool */;
short int var133 /* : Bool */;
val* var134 /* : MClassType */;
val* var136 /* : MClassType */;
short int var137 /* : Bool */;
int cltype138;
int idtype139;
static val* varonce140;
val* var141 /* : String */;
char* var142 /* : NativeString */;
long var143 /* : Int */;
val* var144 /* : FlatString */;
val* var145 /* : nullable MClass */;
val* var_cla146 /* var cla: nullable MClass */;
val* var147 /* : null */;
short int var148 /* : Bool */;
short int var149 /* : Bool */;
short int var151 /* : Bool */;
short int var152 /* : Bool */;
short int var153 /* : Bool */;
val* var154 /* : MClassType */;
val* var156 /* : MClassType */;
short int var157 /* : Bool */;
int cltype158;
int idtype159;
static val* varonce160;
val* var161 /* : String */;
char* var162 /* : NativeString */;
long var163 /* : Int */;
val* var164 /* : FlatString */;
val* var165 /* : nullable MClass */;
val* var_cla166 /* var cla: nullable MClass */;
val* var167 /* : null */;
short int var168 /* : Bool */;
short int var169 /* : Bool */;
short int var171 /* : Bool */;
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
long var183 /* : Int */;
val* var184 /* : FlatString */;
val* var185 /* : nullable MClass */;
val* var_cla186 /* var cla: nullable MClass */;
val* var187 /* : null */;
short int var188 /* : Bool */;
short int var189 /* : Bool */;
short int var191 /* : Bool */;
short int var192 /* : Bool */;
short int var193 /* : Bool */;
val* var194 /* : MClassType */;
val* var196 /* : MClassType */;
short int var197 /* : Bool */;
int cltype198;
int idtype199;
static val* varonce200;
val* var201 /* : String */;
char* var202 /* : NativeString */;
long var203 /* : Int */;
val* var204 /* : FlatString */;
val* var205 /* : nullable MClass */;
val* var_cla206 /* var cla: nullable MClass */;
val* var207 /* : null */;
short int var208 /* : Bool */;
short int var209 /* : Bool */;
short int var211 /* : Bool */;
short int var212 /* : Bool */;
short int var213 /* : Bool */;
val* var214 /* : MClassType */;
val* var216 /* : MClassType */;
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
val* var231 /* : null */;
short int var232 /* : Bool */;
short int var233 /* : Bool */;
short int var235 /* : Bool */;
short int var237 /* : Bool */;
val* var238 /* : null */;
short int var239 /* : Bool */;
short int var240 /* : Bool */;
short int var242 /* : Bool */;
short int var243 /* : Bool */;
short int var244 /* : Bool */;
short int var245 /* : Bool */;
int cltype246;
int idtype247;
val* var248 /* : AType */;
val* var250 /* : AType */;
val* var251 /* : nullable MType */;
val* var_xmtype /* var xmtype: nullable MType */;
short int var252 /* : Bool */;
short int var253 /* : Bool */;
short int var255 /* : Bool */;
short int var257 /* : Bool */;
static val* varonce258;
val* var259 /* : String */;
char* var260 /* : NativeString */;
long var261 /* : Int */;
val* var262 /* : FlatString */;
static val* varonce263;
val* var264 /* : String */;
char* var265 /* : NativeString */;
long var266 /* : Int */;
val* var267 /* : FlatString */;
val* var268 /* : null */;
short int var269 /* : Bool */;
short int var270 /* : Bool */;
short int var272 /* : Bool */;
short int var274 /* : Bool */;
static val* varonce275;
val* var276 /* : String */;
char* var277 /* : NativeString */;
long var278 /* : Int */;
val* var279 /* : FlatString */;
val* var280 /* : Array[Object] */;
long var281 /* : Int */;
val* var282 /* : NativeArray[Object] */;
val* var283 /* : String */;
val* var285 /* : null */;
short int var286 /* : Bool */;
short int var287 /* : Bool */;
short int var289 /* : Bool */;
short int var290 /* : Bool */;
short int var291 /* : Bool */;
val* var292 /* : MSignature */;
val* var293 /* : Array[MParameter] */;
val* var_msignature294 /* var msignature: MSignature */;
val* var296 /* : nullable MMethodDef */;
val* var298 /* : nullable MMethodDef */;
val* var_mwritepropdef /* var mwritepropdef: nullable MMethodDef */;
val* var299 /* : null */;
short int var300 /* : Bool */;
short int var301 /* : Bool */;
short int var303 /* : Bool */;
short int var304 /* : Bool */;
short int var305 /* : Bool */;
val* var306 /* : TId */;
val* var308 /* : TId */;
val* var309 /* : String */;
val* var_name /* var name: String */;
val* var310 /* : MParameter */;
short int var311 /* : Bool */;
val* var_mparameter /* var mparameter: MParameter */;
val* var312 /* : MSignature */;
val* var313 /* : Array[MParameter] */;
long var314 /* : Int */;
val* var_315 /* var : Array[MParameter] */;
val* var316 /* : null */;
val* var_msignature317 /* var msignature: MSignature */;
val* var319 /* : nullable MAttributeDef */;
val* var321 /* : nullable MAttributeDef */;
val* var_mlazypropdef /* var mlazypropdef: nullable MAttributeDef */;
val* var322 /* : null */;
short int var323 /* : Bool */;
short int var324 /* : Bool */;
short int var326 /* : Bool */;
short int var327 /* : Bool */;
short int var328 /* : Bool */;
val* var329 /* : Model */;
val* var331 /* : Model */;
static val* varonce332;
val* var333 /* : String */;
char* var334 /* : NativeString */;
long var335 /* : Int */;
val* var336 /* : FlatString */;
val* var337 /* : nullable Array[MClass] */;
val* var338 /* : nullable Object */;
val* var339 /* : MClassType */;
val* var341 /* : MClassType */;
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
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
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
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
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
{ /* Inline parser_nodes#AAttrPropdef#n_type (self) on <self:AAttrPropdef> */
var22 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_type].val; /* _n_type on <self:AAttrPropdef> */
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
var29 = ((short int (*)(val*, val*))(var_ntype->class->vft[COLOR_kernel__Object___61d_61d]))(var_ntype, var_other27) /* == on <var_ntype:nullable AType(AType)>*/;
var28 = var29;
}
var30 = !var28;
var25 = var30;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var24 = var25;
}
if (var24){
{
var31 = modelize_class__ModelBuilder__resolve_mtype(var_modelbuilder, var_mmodule, var_mclassdef, var_ntype);
}
var_mtype = var31;
var32 = NULL;
if (var_mtype == NULL) {
var33 = 1; /* is null */
} else {
var33 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var32) on <var_mtype:nullable MType> */
var_other = var32;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var38 = var_mtype == var_other;
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
var33 = var34;
}
if (var33){
goto RET_LABEL;
} else {
}
} else {
}
var41 = NULL;
if (var_mtype == NULL) {
var42 = 1; /* is null */
} else {
var42 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var41) on <var_mtype:nullable MType> */
var_other = var41;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var47 = var_mtype == var_other;
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
var42 = var43;
}
var_ = var42;
if (var42){
var48 = NULL;
if (var_mreadpropdef == NULL) {
var49 = 0; /* is null */
} else {
var49 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mreadpropdef,var48) on <var_mreadpropdef:nullable MMethodDef> */
var_other27 = var48;
{
var53 = ((short int (*)(val*, val*))(var_mreadpropdef->class->vft[COLOR_kernel__Object___61d_61d]))(var_mreadpropdef, var_other27) /* == on <var_mreadpropdef:nullable MMethodDef(MMethodDef)>*/;
var52 = var53;
}
var54 = !var52;
var50 = var54;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
var49 = var50;
}
var40 = var49;
} else {
var40 = var_;
}
var_55 = var40;
if (var40){
{
var56 = model__MPropDef__is_intro(var_mreadpropdef);
}
var57 = !var56;
var39 = var57;
} else {
var39 = var_55;
}
if (var39){
{
{ /* Inline model#MPropDef#mproperty (var_mreadpropdef) on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var60 = var_mreadpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var58) on <var58:MProperty(MMethod)> */
var63 = var58->attrs[COLOR_model__MProperty___intro].val; /* _intro on <var58:MProperty(MMethod)> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1649);
show_backtrace(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var61) on <var61:MPropDef(MMethodDef)> */
var66 = var61->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var61:MPropDef(MMethodDef)> */
var64 = var66;
RET_LABEL65:(void)0;
}
}
var_msignature = var64;
var67 = NULL;
if (var_msignature == NULL) {
var68 = 1; /* is null */
} else {
var68 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_msignature,var67) on <var_msignature:nullable MSignature> */
var_other = var67;
{
{ /* Inline kernel#Object#is_same_instance (var_msignature,var_other) on <var_msignature:nullable MSignature(MSignature)> */
var73 = var_msignature == var_other;
var71 = var73;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
var69 = var71;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
var68 = var69;
}
if (var68){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var76 = var_msignature->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:nullable MSignature(MSignature)> */
var74 = var76;
RET_LABEL75:(void)0;
}
}
var_mtype = var74;
} else {
}
{
{ /* Inline parser_nodes#AAttrPropdef#n_expr (self) on <self:AAttrPropdef> */
var79 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <self:AAttrPropdef> */
var77 = var79;
RET_LABEL78:(void)0;
}
}
var_nexpr = var77;
var80 = NULL;
if (var_mtype == NULL) {
var81 = 1; /* is null */
} else {
var81 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var80) on <var_mtype:nullable MType> */
var_other = var80;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var86 = var_mtype == var_other;
var84 = var86;
goto RET_LABEL85;
RET_LABEL85:(void)0;
}
}
var82 = var84;
goto RET_LABEL83;
RET_LABEL83:(void)0;
}
var81 = var82;
}
if (var81){
var87 = NULL;
if (var_nexpr == NULL) {
var88 = 0; /* is null */
} else {
var88 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nexpr,var87) on <var_nexpr:nullable AExpr> */
var_other27 = var87;
{
var92 = ((short int (*)(val*, val*))(var_nexpr->class->vft[COLOR_kernel__Object___61d_61d]))(var_nexpr, var_other27) /* == on <var_nexpr:nullable AExpr(AExpr)>*/;
var91 = var92;
}
var93 = !var91;
var89 = var93;
goto RET_LABEL90;
RET_LABEL90:(void)0;
}
var88 = var89;
}
if (var88){
/* <var_nexpr:nullable AExpr(AExpr)> isa ANewExpr */
cltype = type_parser_nodes__ANewExpr.color;
idtype = type_parser_nodes__ANewExpr.id;
if(cltype >= var_nexpr->type->table_size) {
var94 = 0;
} else {
var94 = var_nexpr->type->type_table[cltype] == idtype;
}
if (var94){
{
{ /* Inline parser_nodes#ANewExpr#n_type (var_nexpr) on <var_nexpr:nullable AExpr(ANewExpr)> */
var97 = var_nexpr->attrs[COLOR_parser_nodes__ANewExpr___n_type].val; /* _n_type on <var_nexpr:nullable AExpr(ANewExpr)> */
if (unlikely(var97 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1610);
show_backtrace(1);
}
var95 = var97;
RET_LABEL96:(void)0;
}
}
{
var98 = modelize_class__ModelBuilder__resolve_mtype(var_modelbuilder, var_mmodule, var_mclassdef, var95);
}
var_mtype = var98;
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa AIntExpr */
cltype100 = type_parser_nodes__AIntExpr.color;
idtype101 = type_parser_nodes__AIntExpr.id;
if(cltype100 >= var_nexpr->type->table_size) {
var99 = 0;
} else {
var99 = var_nexpr->type->type_table[cltype100] == idtype101;
}
if (var99){
if (varonce) {
var102 = varonce;
} else {
var103 = "Int";
var104 = 3;
var105 = string__NativeString__to_s_with_length(var103, var104);
var102 = var105;
varonce = var102;
}
{
var106 = modelbuilder__ModelBuilder__try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var102);
}
var_cla = var106;
var107 = NULL;
if (var_cla == NULL) {
var108 = 0; /* is null */
} else {
var108 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_cla,var107) on <var_cla:nullable MClass> */
var_other27 = var107;
{
var112 = ((short int (*)(val*, val*))(var_cla->class->vft[COLOR_kernel__Object___61d_61d]))(var_cla, var_other27) /* == on <var_cla:nullable MClass(MClass)>*/;
var111 = var112;
}
var113 = !var111;
var109 = var113;
goto RET_LABEL110;
RET_LABEL110:(void)0;
}
var108 = var109;
}
if (var108){
{
{ /* Inline model#MClass#mclass_type (var_cla) on <var_cla:nullable MClass(MClass)> */
var116 = var_cla->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var_cla:nullable MClass(MClass)> */
if (unlikely(var116 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var114 = var116;
RET_LABEL115:(void)0;
}
}
var_mtype = var114;
} else {
}
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa AFloatExpr */
cltype118 = type_parser_nodes__AFloatExpr.color;
idtype119 = type_parser_nodes__AFloatExpr.id;
if(cltype118 >= var_nexpr->type->table_size) {
var117 = 0;
} else {
var117 = var_nexpr->type->type_table[cltype118] == idtype119;
}
if (var117){
if (varonce120) {
var121 = varonce120;
} else {
var122 = "Float";
var123 = 5;
var124 = string__NativeString__to_s_with_length(var122, var123);
var121 = var124;
varonce120 = var121;
}
{
var125 = modelbuilder__ModelBuilder__try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var121);
}
var_cla126 = var125;
var127 = NULL;
if (var_cla126 == NULL) {
var128 = 0; /* is null */
} else {
var128 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_cla126,var127) on <var_cla126:nullable MClass> */
var_other27 = var127;
{
var132 = ((short int (*)(val*, val*))(var_cla126->class->vft[COLOR_kernel__Object___61d_61d]))(var_cla126, var_other27) /* == on <var_cla126:nullable MClass(MClass)>*/;
var131 = var132;
}
var133 = !var131;
var129 = var133;
goto RET_LABEL130;
RET_LABEL130:(void)0;
}
var128 = var129;
}
if (var128){
{
{ /* Inline model#MClass#mclass_type (var_cla126) on <var_cla126:nullable MClass(MClass)> */
var136 = var_cla126->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var_cla126:nullable MClass(MClass)> */
if (unlikely(var136 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var134 = var136;
RET_LABEL135:(void)0;
}
}
var_mtype = var134;
} else {
}
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa ACharExpr */
cltype138 = type_parser_nodes__ACharExpr.color;
idtype139 = type_parser_nodes__ACharExpr.id;
if(cltype138 >= var_nexpr->type->table_size) {
var137 = 0;
} else {
var137 = var_nexpr->type->type_table[cltype138] == idtype139;
}
if (var137){
if (varonce140) {
var141 = varonce140;
} else {
var142 = "Char";
var143 = 4;
var144 = string__NativeString__to_s_with_length(var142, var143);
var141 = var144;
varonce140 = var141;
}
{
var145 = modelbuilder__ModelBuilder__try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var141);
}
var_cla146 = var145;
var147 = NULL;
if (var_cla146 == NULL) {
var148 = 0; /* is null */
} else {
var148 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_cla146,var147) on <var_cla146:nullable MClass> */
var_other27 = var147;
{
var152 = ((short int (*)(val*, val*))(var_cla146->class->vft[COLOR_kernel__Object___61d_61d]))(var_cla146, var_other27) /* == on <var_cla146:nullable MClass(MClass)>*/;
var151 = var152;
}
var153 = !var151;
var149 = var153;
goto RET_LABEL150;
RET_LABEL150:(void)0;
}
var148 = var149;
}
if (var148){
{
{ /* Inline model#MClass#mclass_type (var_cla146) on <var_cla146:nullable MClass(MClass)> */
var156 = var_cla146->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var_cla146:nullable MClass(MClass)> */
if (unlikely(var156 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var154 = var156;
RET_LABEL155:(void)0;
}
}
var_mtype = var154;
} else {
}
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa ABoolExpr */
cltype158 = type_parser_nodes__ABoolExpr.color;
idtype159 = type_parser_nodes__ABoolExpr.id;
if(cltype158 >= var_nexpr->type->table_size) {
var157 = 0;
} else {
var157 = var_nexpr->type->type_table[cltype158] == idtype159;
}
if (var157){
if (varonce160) {
var161 = varonce160;
} else {
var162 = "Bool";
var163 = 4;
var164 = string__NativeString__to_s_with_length(var162, var163);
var161 = var164;
varonce160 = var161;
}
{
var165 = modelbuilder__ModelBuilder__try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var161);
}
var_cla166 = var165;
var167 = NULL;
if (var_cla166 == NULL) {
var168 = 0; /* is null */
} else {
var168 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_cla166,var167) on <var_cla166:nullable MClass> */
var_other27 = var167;
{
var172 = ((short int (*)(val*, val*))(var_cla166->class->vft[COLOR_kernel__Object___61d_61d]))(var_cla166, var_other27) /* == on <var_cla166:nullable MClass(MClass)>*/;
var171 = var172;
}
var173 = !var171;
var169 = var173;
goto RET_LABEL170;
RET_LABEL170:(void)0;
}
var168 = var169;
}
if (var168){
{
{ /* Inline model#MClass#mclass_type (var_cla166) on <var_cla166:nullable MClass(MClass)> */
var176 = var_cla166->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var_cla166:nullable MClass(MClass)> */
if (unlikely(var176 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
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
cltype178 = type_parser_nodes__ASuperstringExpr.color;
idtype179 = type_parser_nodes__ASuperstringExpr.id;
if(cltype178 >= var_nexpr->type->table_size) {
var177 = 0;
} else {
var177 = var_nexpr->type->type_table[cltype178] == idtype179;
}
if (var177){
if (varonce180) {
var181 = varonce180;
} else {
var182 = "String";
var183 = 6;
var184 = string__NativeString__to_s_with_length(var182, var183);
var181 = var184;
varonce180 = var181;
}
{
var185 = modelbuilder__ModelBuilder__try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var181);
}
var_cla186 = var185;
var187 = NULL;
if (var_cla186 == NULL) {
var188 = 0; /* is null */
} else {
var188 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_cla186,var187) on <var_cla186:nullable MClass> */
var_other27 = var187;
{
var192 = ((short int (*)(val*, val*))(var_cla186->class->vft[COLOR_kernel__Object___61d_61d]))(var_cla186, var_other27) /* == on <var_cla186:nullable MClass(MClass)>*/;
var191 = var192;
}
var193 = !var191;
var189 = var193;
goto RET_LABEL190;
RET_LABEL190:(void)0;
}
var188 = var189;
}
if (var188){
{
{ /* Inline model#MClass#mclass_type (var_cla186) on <var_cla186:nullable MClass(MClass)> */
var196 = var_cla186->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var_cla186:nullable MClass(MClass)> */
if (unlikely(var196 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var194 = var196;
RET_LABEL195:(void)0;
}
}
var_mtype = var194;
} else {
}
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa AStringFormExpr */
cltype198 = type_parser_nodes__AStringFormExpr.color;
idtype199 = type_parser_nodes__AStringFormExpr.id;
if(cltype198 >= var_nexpr->type->table_size) {
var197 = 0;
} else {
var197 = var_nexpr->type->type_table[cltype198] == idtype199;
}
if (var197){
if (varonce200) {
var201 = varonce200;
} else {
var202 = "String";
var203 = 6;
var204 = string__NativeString__to_s_with_length(var202, var203);
var201 = var204;
varonce200 = var201;
}
{
var205 = modelbuilder__ModelBuilder__try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var201);
}
var_cla206 = var205;
var207 = NULL;
if (var_cla206 == NULL) {
var208 = 0; /* is null */
} else {
var208 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_cla206,var207) on <var_cla206:nullable MClass> */
var_other27 = var207;
{
var212 = ((short int (*)(val*, val*))(var_cla206->class->vft[COLOR_kernel__Object___61d_61d]))(var_cla206, var_other27) /* == on <var_cla206:nullable MClass(MClass)>*/;
var211 = var212;
}
var213 = !var211;
var209 = var213;
goto RET_LABEL210;
RET_LABEL210:(void)0;
}
var208 = var209;
}
if (var208){
{
{ /* Inline model#MClass#mclass_type (var_cla206) on <var_cla206:nullable MClass(MClass)> */
var216 = var_cla206->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var_cla206:nullable MClass(MClass)> */
if (unlikely(var216 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var214 = var216;
RET_LABEL215:(void)0;
}
}
var_mtype = var214;
} else {
}
} else {
if (varonce217) {
var218 = varonce217;
} else {
var219 = "Error: Untyped attribute ";
var220 = 25;
var221 = string__NativeString__to_s_with_length(var219, var220);
var218 = var221;
varonce217 = var218;
}
if (varonce222) {
var223 = varonce222;
} else {
var224 = ". Implicit typing allowed only for literals and new.";
var225 = 52;
var226 = string__NativeString__to_s_with_length(var224, var225);
var223 = var226;
varonce222 = var223;
}
var227 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var227 = array_instance Array[Object] */
var228 = 3;
var229 = NEW_array__NativeArray(var228, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var229)->values[0] = (val*) var218;
((struct instance_array__NativeArray*)var229)->values[1] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var229)->values[2] = (val*) var223;
{
((void (*)(val*, val*, long))(var227->class->vft[COLOR_array__Array__with_native]))(var227, var229, var228) /* with_native on <var227:Array[Object]>*/;
}
}
{
var230 = ((val* (*)(val*))(var227->class->vft[COLOR_string__Object__to_s]))(var227) /* to_s on <var227:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, self, var230); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
}
}
}
}
}
}
}
var231 = NULL;
if (var_mtype == NULL) {
var232 = 1; /* is null */
} else {
var232 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var231) on <var_mtype:nullable MType> */
var_other = var231;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var237 = var_mtype == var_other;
var235 = var237;
goto RET_LABEL236;
RET_LABEL236:(void)0;
}
}
var233 = var235;
goto RET_LABEL234;
RET_LABEL234:(void)0;
}
var232 = var233;
}
if (var232){
goto RET_LABEL;
} else {
}
} else {
}
} else {
var238 = NULL;
if (var_ntype == NULL) {
var239 = 0; /* is null */
} else {
var239 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ntype,var238) on <var_ntype:nullable AType> */
var_other27 = var238;
{
var243 = ((short int (*)(val*, val*))(var_ntype->class->vft[COLOR_kernel__Object___61d_61d]))(var_ntype, var_other27) /* == on <var_ntype:nullable AType(AType)>*/;
var242 = var243;
}
var244 = !var242;
var240 = var244;
goto RET_LABEL241;
RET_LABEL241:(void)0;
}
var239 = var240;
}
if (var239){
/* <var_nexpr:nullable AExpr> isa ANewExpr */
cltype246 = type_parser_nodes__ANewExpr.color;
idtype247 = type_parser_nodes__ANewExpr.id;
if(var_nexpr == NULL) {
var245 = 0;
} else {
if(cltype246 >= var_nexpr->type->table_size) {
var245 = 0;
} else {
var245 = var_nexpr->type->type_table[cltype246] == idtype247;
}
}
if (var245){
{
{ /* Inline parser_nodes#ANewExpr#n_type (var_nexpr) on <var_nexpr:nullable AExpr(ANewExpr)> */
var250 = var_nexpr->attrs[COLOR_parser_nodes__ANewExpr___n_type].val; /* _n_type on <var_nexpr:nullable AExpr(ANewExpr)> */
if (unlikely(var250 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1610);
show_backtrace(1);
}
var248 = var250;
RET_LABEL249:(void)0;
}
}
{
var251 = modelize_class__ModelBuilder__resolve_mtype(var_modelbuilder, var_mmodule, var_mclassdef, var248);
}
var_xmtype = var251;
if (var_xmtype == NULL) {
var252 = 0; /* <var_mtype:nullable MType(MType)> cannot be null */
} else {
{ /* Inline kernel#Object#== (var_xmtype,var_mtype) on <var_xmtype:nullable MType> */
var_other = var_mtype;
{
{ /* Inline kernel#Object#is_same_instance (var_xmtype,var_other) on <var_xmtype:nullable MType(MType)> */
var257 = var_xmtype == var_other;
var255 = var257;
goto RET_LABEL256;
RET_LABEL256:(void)0;
}
}
var253 = var255;
goto RET_LABEL254;
RET_LABEL254:(void)0;
}
var252 = var253;
}
if (var252){
if (varonce258) {
var259 = varonce258;
} else {
var260 = "useless-type";
var261 = 12;
var262 = string__NativeString__to_s_with_length(var260, var261);
var259 = var262;
varonce258 = var259;
}
if (varonce263) {
var264 = varonce263;
} else {
var265 = "Warning: useless type definition";
var266 = 32;
var267 = string__NativeString__to_s_with_length(var265, var266);
var264 = var267;
varonce263 = var264;
}
{
modelbuilder__ModelBuilder__advice(var_modelbuilder, var_ntype, var259, var264); /* Direct call modelbuilder#ModelBuilder#advice on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
} else {
}
} else {
}
}
var268 = NULL;
if (var_mtype == NULL) {
var269 = 1; /* is null */
} else {
var269 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var268) on <var_mtype:nullable MType> */
var_other = var268;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var274 = var_mtype == var_other;
var272 = var274;
goto RET_LABEL273;
RET_LABEL273:(void)0;
}
}
var270 = var272;
goto RET_LABEL271;
RET_LABEL271:(void)0;
}
var269 = var270;
}
if (var269){
if (varonce275) {
var276 = varonce275;
} else {
var277 = "Error: Untyped attribute ";
var278 = 25;
var279 = string__NativeString__to_s_with_length(var277, var278);
var276 = var279;
varonce275 = var276;
}
var280 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var280 = array_instance Array[Object] */
var281 = 2;
var282 = NEW_array__NativeArray(var281, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var282)->values[0] = (val*) var276;
((struct instance_array__NativeArray*)var282)->values[1] = (val*) var_mpropdef;
{
((void (*)(val*, val*, long))(var280->class->vft[COLOR_array__Array__with_native]))(var280, var282, var281) /* with_native on <var280:Array[Object]>*/;
}
}
{
var283 = ((val* (*)(val*))(var280->class->vft[COLOR_string__Object__to_s]))(var280) /* to_s on <var280:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, self, var283); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MAttributeDef#static_mtype= (var_mpropdef,var_mtype) on <var_mpropdef:nullable MAttributeDef(MAttributeDef)> */
var_mpropdef->attrs[COLOR_model__MAttributeDef___static_mtype].val = var_mtype; /* _static_mtype on <var_mpropdef:nullable MAttributeDef(MAttributeDef)> */
RET_LABEL284:(void)0;
}
}
var285 = NULL;
if (var_mreadpropdef == NULL) {
var286 = 0; /* is null */
} else {
var286 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mreadpropdef,var285) on <var_mreadpropdef:nullable MMethodDef> */
var_other27 = var285;
{
var290 = ((short int (*)(val*, val*))(var_mreadpropdef->class->vft[COLOR_kernel__Object___61d_61d]))(var_mreadpropdef, var_other27) /* == on <var_mreadpropdef:nullable MMethodDef(MMethodDef)>*/;
var289 = var290;
}
var291 = !var289;
var287 = var291;
goto RET_LABEL288;
RET_LABEL288:(void)0;
}
var286 = var287;
}
if (var286){
var292 = NEW_model__MSignature(&type_model__MSignature);
var293 = NEW_array__Array(&type_array__Arraymodel__MParameter);
{
((void (*)(val*))(var293->class->vft[COLOR_kernel__Object__init]))(var293) /* init on <var293:Array[MParameter]>*/;
}
{
model__MSignature__init(var292, var293, var_mtype); /* Direct call model#MSignature#init on <var292:MSignature>*/
}
var_msignature294 = var292;
{
{ /* Inline model#MMethodDef#msignature= (var_mreadpropdef,var_msignature294) on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var_mreadpropdef->attrs[COLOR_model__MMethodDef___msignature].val = var_msignature294; /* _msignature on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL295:(void)0;
}
}
} else {
}
{
{ /* Inline modelize_property#AAttrPropdef#mwritepropdef (self) on <self:AAttrPropdef> */
var298 = self->attrs[COLOR_modelize_property__AAttrPropdef___mwritepropdef].val; /* _mwritepropdef on <self:AAttrPropdef> */
var296 = var298;
RET_LABEL297:(void)0;
}
}
var_mwritepropdef = var296;
var299 = NULL;
if (var_mwritepropdef == NULL) {
var300 = 0; /* is null */
} else {
var300 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mwritepropdef,var299) on <var_mwritepropdef:nullable MMethodDef> */
var_other27 = var299;
{
var304 = ((short int (*)(val*, val*))(var_mwritepropdef->class->vft[COLOR_kernel__Object___61d_61d]))(var_mwritepropdef, var_other27) /* == on <var_mwritepropdef:nullable MMethodDef(MMethodDef)>*/;
var303 = var304;
}
var305 = !var303;
var301 = var305;
goto RET_LABEL302;
RET_LABEL302:(void)0;
}
var300 = var301;
}
if (var300){
{
{ /* Inline parser_nodes#AAttrPropdef#n_id2 (self) on <self:AAttrPropdef> */
var308 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_id2].val; /* _n_id2 on <self:AAttrPropdef> */
if (unlikely(var308 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id2");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1023);
show_backtrace(1);
}
var306 = var308;
RET_LABEL307:(void)0;
}
}
{
var309 = lexer_work__Token__text(var306);
}
var_name = var309;
var310 = NEW_model__MParameter(&type_model__MParameter);
var311 = 0;
{
model__MParameter__init(var310, var_name, var_mtype, var311); /* Direct call model#MParameter#init on <var310:MParameter>*/
}
var_mparameter = var310;
var312 = NEW_model__MSignature(&type_model__MSignature);
var313 = NEW_array__Array(&type_array__Arraymodel__MParameter);
var314 = 1;
{
array__Array__with_capacity(var313, var314); /* Direct call array#Array#with_capacity on <var313:Array[MParameter]>*/
}
var_315 = var313;
{
array__AbstractArray__push(var_315, var_mparameter); /* Direct call array#AbstractArray#push on <var_315:Array[MParameter]>*/
}
var316 = NULL;
{
model__MSignature__init(var312, var_315, var316); /* Direct call model#MSignature#init on <var312:MSignature>*/
}
var_msignature317 = var312;
{
{ /* Inline model#MMethodDef#msignature= (var_mwritepropdef,var_msignature317) on <var_mwritepropdef:nullable MMethodDef(MMethodDef)> */
var_mwritepropdef->attrs[COLOR_model__MMethodDef___msignature].val = var_msignature317; /* _msignature on <var_mwritepropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL318:(void)0;
}
}
} else {
}
{
{ /* Inline modelize_property#AAttrPropdef#mlazypropdef (self) on <self:AAttrPropdef> */
var321 = self->attrs[COLOR_modelize_property__AAttrPropdef___mlazypropdef].val; /* _mlazypropdef on <self:AAttrPropdef> */
var319 = var321;
RET_LABEL320:(void)0;
}
}
var_mlazypropdef = var319;
var322 = NULL;
if (var_mlazypropdef == NULL) {
var323 = 0; /* is null */
} else {
var323 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mlazypropdef,var322) on <var_mlazypropdef:nullable MAttributeDef> */
var_other27 = var322;
{
var327 = ((short int (*)(val*, val*))(var_mlazypropdef->class->vft[COLOR_kernel__Object___61d_61d]))(var_mlazypropdef, var_other27) /* == on <var_mlazypropdef:nullable MAttributeDef(MAttributeDef)>*/;
var326 = var327;
}
var328 = !var326;
var324 = var328;
goto RET_LABEL325;
RET_LABEL325:(void)0;
}
var323 = var324;
}
if (var323){
{
{ /* Inline modelbuilder#ModelBuilder#model (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var331 = var_modelbuilder->attrs[COLOR_modelbuilder__ModelBuilder___model].val; /* _model on <var_modelbuilder:ModelBuilder> */
if (unlikely(var331 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 103);
show_backtrace(1);
}
var329 = var331;
RET_LABEL330:(void)0;
}
}
if (varonce332) {
var333 = varonce332;
} else {
var334 = "Bool";
var335 = 4;
var336 = string__NativeString__to_s_with_length(var334, var335);
var333 = var336;
varonce332 = var333;
}
{
var337 = model__Model__get_mclasses_by_name(var329, var333);
}
if (var337 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 964);
show_backtrace(1);
} else {
var338 = abstract_collection__SequenceRead__first(var337);
}
{
{ /* Inline model#MClass#mclass_type (var338) on <var338:nullable Object(MClass)> */
var341 = var338->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var338:nullable Object(MClass)> */
if (unlikely(var341 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var339 = var341;
RET_LABEL340:(void)0;
}
}
{
{ /* Inline model#MAttributeDef#static_mtype= (var_mlazypropdef,var339) on <var_mlazypropdef:nullable MAttributeDef(MAttributeDef)> */
var_mlazypropdef->attrs[COLOR_model__MAttributeDef___static_mtype].val = var339; /* _static_mtype on <var_mlazypropdef:nullable MAttributeDef(MAttributeDef)> */
RET_LABEL342:(void)0;
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
short int var45 /* : Bool */;
val* var_other47 /* var other: nullable Object */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
static val* varonce;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : FlatString */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
long var58 /* : Int */;
val* var59 /* : FlatString */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
long var63 /* : Int */;
val* var64 /* : FlatString */;
val* var65 /* : Array[Object] */;
long var66 /* : Int */;
val* var67 /* : NativeArray[Object] */;
val* var68 /* : String */;
val* var69 /* : nullable MMethodDef */;
val* var71 /* : nullable MMethodDef */;
val* var_meth /* var meth: nullable MMethodDef */;
val* var72 /* : null */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
short int var76 /* : Bool */;
short int var77 /* : Bool */;
short int var78 /* : Bool */;
val* var_node /* var node: nullable ANode */;
val* var79 /* : null */;
short int var80 /* : Bool */;
short int var81 /* : Bool */;
short int var83 /* : Bool */;
short int var85 /* : Bool */;
val* var86 /* : nullable MMethodDef */;
val* var88 /* : nullable MMethodDef */;
val* var89 /* : null */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
short int var93 /* : Bool */;
short int var94 /* : Bool */;
short int var95 /* : Bool */;
val* var_node96 /* var node: nullable ANode */;
val* var97 /* : null */;
short int var98 /* : Bool */;
short int var99 /* : Bool */;
short int var101 /* : Bool */;
short int var103 /* : Bool */;
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
{ /* Inline parser_nodes#AAttrPropdef#n_type (self) on <self:AAttrPropdef> */
var12 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_type].val; /* _n_type on <self:AAttrPropdef> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_ntype = var10;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var15 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (var13 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 973);
show_backtrace(1);
} else {
{ /* Inline model#MAttributeDef#static_mtype (var13) on <var13:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 2006);
show_backtrace(1);
}
var18 = var13->attrs[COLOR_model__MAttributeDef___static_mtype].val; /* _static_mtype on <var13:nullable MPropDef(nullable MAttributeDef)> */
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
var26 = model__MPropDef__is_intro(var_mpropdef);
}
var27 = !var26;
if (var27){
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MAttributeDef(MAttributeDef)> */
var30 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MAttributeDef(MAttributeDef)> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var28) on <var28:MProperty(MAttribute)> */
var33 = var28->attrs[COLOR_model__MProperty___intro].val; /* _intro on <var28:MProperty(MAttribute)> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1649);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline model#MAttributeDef#static_mtype (var31) on <var31:MPropDef(MAttributeDef)> */
var36 = var31->attrs[COLOR_model__MAttributeDef___static_mtype].val; /* _static_mtype on <var31:MPropDef(MAttributeDef)> */
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
var_other47 = var_precursor_type;
{
var49 = ((short int (*)(val*, val*))(var_mtype->class->vft[COLOR_kernel__Object___61d_61d]))(var_mtype, var_other47) /* == on <var_mtype:nullable MType(MType)>*/;
var48 = var49;
}
var50 = !var48;
var45 = var50;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
var44 = var45;
}
if (var44){
if (unlikely(var_ntype == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 983);
show_backtrace(1);
}
if (varonce) {
var51 = varonce;
} else {
var52 = "Redef Error: Wrong static type. found ";
var53 = 38;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce = var51;
}
if (varonce55) {
var56 = varonce55;
} else {
var57 = ", expected ";
var58 = 11;
var59 = string__NativeString__to_s_with_length(var57, var58);
var56 = var59;
varonce55 = var56;
}
if (varonce60) {
var61 = varonce60;
} else {
var62 = ".";
var63 = 1;
var64 = string__NativeString__to_s_with_length(var62, var63);
var61 = var64;
varonce60 = var61;
}
var65 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var65 = array_instance Array[Object] */
var66 = 5;
var67 = NEW_array__NativeArray(var66, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var67)->values[0] = (val*) var51;
((struct instance_array__NativeArray*)var67)->values[1] = (val*) var_mtype;
((struct instance_array__NativeArray*)var67)->values[2] = (val*) var56;
((struct instance_array__NativeArray*)var67)->values[3] = (val*) var_precursor_type;
((struct instance_array__NativeArray*)var67)->values[4] = (val*) var61;
{
((void (*)(val*, val*, long))(var65->class->vft[COLOR_array__Array__with_native]))(var65, var67, var66) /* with_native on <var65:Array[Object]>*/;
}
}
{
var68 = ((val* (*)(val*))(var65->class->vft[COLOR_string__Object__to_s]))(var65) /* to_s on <var65:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, var_ntype, var68); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
} else {
}
{
{ /* Inline modelize_property#AAttrPropdef#mreadpropdef (self) on <self:AAttrPropdef> */
var71 = self->attrs[COLOR_modelize_property__AAttrPropdef___mreadpropdef].val; /* _mreadpropdef on <self:AAttrPropdef> */
var69 = var71;
RET_LABEL70:(void)0;
}
}
var_meth = var69;
var72 = NULL;
if (var_meth == NULL) {
var73 = 0; /* is null */
} else {
var73 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_meth,var72) on <var_meth:nullable MMethodDef> */
var_other47 = var72;
{
var77 = ((short int (*)(val*, val*))(var_meth->class->vft[COLOR_kernel__Object___61d_61d]))(var_meth, var_other47) /* == on <var_meth:nullable MMethodDef(MMethodDef)>*/;
var76 = var77;
}
var78 = !var76;
var74 = var78;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
var73 = var74;
}
if (var73){
{
modelize_property__AAttrPropdef__check_method_signature(self, var_modelbuilder, var_meth); /* Direct call modelize_property#AAttrPropdef#check_method_signature on <self:AAttrPropdef>*/
}
var_node = var_ntype;
var79 = NULL;
if (var_node == NULL) {
var80 = 1; /* is null */
} else {
var80 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_node,var79) on <var_node:nullable ANode> */
var_other = var79;
{
{ /* Inline kernel#Object#is_same_instance (var_node,var_other) on <var_node:nullable ANode(ANode)> */
var85 = var_node == var_other;
var83 = var85;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
}
var81 = var83;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
var80 = var81;
}
if (var80){
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
var88 = self->attrs[COLOR_modelize_property__AAttrPropdef___mwritepropdef].val; /* _mwritepropdef on <self:AAttrPropdef> */
var86 = var88;
RET_LABEL87:(void)0;
}
}
var_meth = var86;
var89 = NULL;
if (var_meth == NULL) {
var90 = 0; /* is null */
} else {
var90 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_meth,var89) on <var_meth:nullable MMethodDef> */
var_other47 = var89;
{
var94 = ((short int (*)(val*, val*))(var_meth->class->vft[COLOR_kernel__Object___61d_61d]))(var_meth, var_other47) /* == on <var_meth:nullable MMethodDef(MMethodDef)>*/;
var93 = var94;
}
var95 = !var93;
var91 = var95;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
var90 = var91;
}
if (var90){
{
modelize_property__AAttrPropdef__check_method_signature(self, var_modelbuilder, var_meth); /* Direct call modelize_property#AAttrPropdef#check_method_signature on <self:AAttrPropdef>*/
}
var_node96 = var_ntype;
var97 = NULL;
if (var_node96 == NULL) {
var98 = 1; /* is null */
} else {
var98 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_node96,var97) on <var_node96:nullable ANode> */
var_other = var97;
{
{ /* Inline kernel#Object#is_same_instance (var_node96,var_other) on <var_node96:nullable ANode(ANode)> */
var103 = var_node96 == var_other;
var101 = var103;
goto RET_LABEL102;
RET_LABEL102:(void)0;
}
}
var99 = var101;
goto RET_LABEL100;
RET_LABEL100:(void)0;
}
var98 = var99;
}
if (var98){
var_node96 = self;
} else {
}
{
modelize_property__ModelBuilder__check_visibility(var_modelbuilder, var_node96, var_mtype, var_meth); /* Direct call modelize_property#ModelBuilder#check_visibility on <var_modelbuilder:ModelBuilder>*/
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
short int var40 /* : Bool */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
val* var44 /* : null */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
val* var_other48 /* var other: nullable Object */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
val* var_node /* var node: ANode */;
static val* varonce;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : FlatString */;
long var56 /* : Int */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
long var60 /* : Int */;
val* var61 /* : FlatString */;
long var62 /* : Int */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
long var66 /* : Int */;
val* var67 /* : FlatString */;
val* var68 /* : Array[Object] */;
long var69 /* : Int */;
val* var70 /* : NativeArray[Object] */;
val* var71 /* : Object */;
val* var72 /* : Object */;
val* var73 /* : String */;
val* var74 /* : nullable MType */;
val* var76 /* : nullable MType */;
val* var_precursor_ret_type /* var precursor_ret_type: nullable MType */;
val* var77 /* : nullable MType */;
val* var79 /* : nullable MType */;
val* var_ret_type /* var ret_type: nullable MType */;
short int var80 /* : Bool */;
val* var81 /* : null */;
short int var82 /* : Bool */;
short int var83 /* : Bool */;
short int var85 /* : Bool */;
short int var86 /* : Bool */;
short int var87 /* : Bool */;
short int var_ /* var : Bool */;
val* var88 /* : null */;
short int var89 /* : Bool */;
short int var90 /* : Bool */;
short int var92 /* : Bool */;
short int var94 /* : Bool */;
val* var95 /* : null */;
short int var96 /* : Bool */;
short int var97 /* : Bool */;
short int var99 /* : Bool */;
short int var100 /* : Bool */;
short int var101 /* : Bool */;
val* var_node102 /* var node: ANode */;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : NativeString */;
long var106 /* : Int */;
val* var107 /* : FlatString */;
val* var108 /* : MProperty */;
val* var110 /* : MProperty */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : NativeString */;
long var114 /* : Int */;
val* var115 /* : FlatString */;
val* var116 /* : Array[Object] */;
long var117 /* : Int */;
val* var118 /* : NativeArray[Object] */;
val* var119 /* : String */;
long var120 /* : Int */;
long var121 /* : Int */;
short int var122 /* : Bool */;
short int var124 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var125 /* : Bool */;
long var126 /* : Int */;
long var_i /* var i: Int */;
long var127 /* : Int */;
long var_128 /* var : Int */;
short int var129 /* : Bool */;
short int var131 /* : Bool */;
int cltype132;
int idtype133;
const char* var_class_name134;
short int var135 /* : Bool */;
val* var136 /* : Array[MParameter] */;
val* var138 /* : Array[MParameter] */;
val* var139 /* : nullable Object */;
val* var140 /* : MType */;
val* var142 /* : MType */;
val* var_myt /* var myt: MType */;
val* var143 /* : Array[MParameter] */;
val* var145 /* : Array[MParameter] */;
val* var146 /* : nullable Object */;
val* var147 /* : MType */;
val* var149 /* : MType */;
val* var_prt /* var prt: MType */;
short int var150 /* : Bool */;
val* var151 /* : MClassType */;
val* var153 /* : MClassType */;
short int var154 /* : Bool */;
short int var155 /* : Bool */;
short int var_156 /* var : Bool */;
val* var157 /* : MClassType */;
val* var159 /* : MClassType */;
short int var160 /* : Bool */;
short int var161 /* : Bool */;
val* var162 /* : null */;
short int var163 /* : Bool */;
short int var164 /* : Bool */;
short int var166 /* : Bool */;
short int var167 /* : Bool */;
short int var168 /* : Bool */;
val* var_node169 /* var node: ANode */;
static val* varonce170;
val* var171 /* : String */;
char* var172 /* : NativeString */;
long var173 /* : Int */;
val* var174 /* : FlatString */;
val* var175 /* : Array[MParameter] */;
val* var177 /* : Array[MParameter] */;
val* var178 /* : nullable Object */;
val* var179 /* : String */;
val* var181 /* : String */;
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
static val* varonce192;
val* var193 /* : String */;
char* var194 /* : NativeString */;
long var195 /* : Int */;
val* var196 /* : FlatString */;
val* var197 /* : Array[Object] */;
long var198 /* : Int */;
val* var199 /* : NativeArray[Object] */;
val* var200 /* : String */;
long var201 /* : Int */;
long var202 /* : Int */;
val* var203 /* : null */;
short int var204 /* : Bool */;
short int var205 /* : Bool */;
short int var207 /* : Bool */;
short int var208 /* : Bool */;
short int var209 /* : Bool */;
val* var210 /* : null */;
short int var211 /* : Bool */;
short int var212 /* : Bool */;
short int var214 /* : Bool */;
short int var216 /* : Bool */;
val* var217 /* : MClassType */;
val* var219 /* : MClassType */;
short int var220 /* : Bool */;
short int var221 /* : Bool */;
val* var222 /* : null */;
short int var223 /* : Bool */;
short int var224 /* : Bool */;
short int var226 /* : Bool */;
short int var227 /* : Bool */;
short int var228 /* : Bool */;
val* var_node229 /* var node: ANode */;
static val* varonce230;
val* var231 /* : String */;
char* var232 /* : NativeString */;
long var233 /* : Int */;
val* var234 /* : FlatString */;
static val* varonce235;
val* var236 /* : String */;
char* var237 /* : NativeString */;
long var238 /* : Int */;
val* var239 /* : FlatString */;
static val* varonce240;
val* var241 /* : String */;
char* var242 /* : NativeString */;
long var243 /* : Int */;
val* var244 /* : FlatString */;
val* var245 /* : Array[Object] */;
long var246 /* : Int */;
val* var247 /* : NativeArray[Object] */;
val* var248 /* : String */;
var_modelbuilder = p0;
var_mpropdef = p1;
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var2 = var_mpropdef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
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
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_mmodule = var3;
{
{ /* Inline parser_nodes#AAttrPropdef#n_type (self) on <self:AAttrPropdef> */
var8 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_type].val; /* _n_type on <self:AAttrPropdef> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_nsig = var6;
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var11 = var_mpropdef->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:MMethodDef> */
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
var19 = model__MPropDef__is_intro(var_mpropdef);
}
var20 = !var19;
if (var20){
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var23 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var21) on <var21:MProperty(MMethod)> */
var26 = var21->attrs[COLOR_model__MProperty___intro].val; /* _intro on <var21:MProperty(MMethod)> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1649);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var24) on <var24:MPropDef(MMethodDef)> */
var29 = var24->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var24:MPropDef(MMethodDef)> */
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
var37 = model__MSignature__arity(var_mysignature);
}
{
var38 = model__MSignature__arity(var_msignature);
}
{
{ /* Inline kernel#Int#!= (var37,var38) on <var37:Int> */
var42 = var37 == var38;
var43 = !var42;
var40 = var43;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
var39 = var40;
}
if (var39){
var44 = NULL;
if (var_nsig == NULL) {
var45 = 0; /* is null */
} else {
var45 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nsig,var44) on <var_nsig:nullable AType> */
var_other48 = var44;
{
var50 = ((short int (*)(val*, val*))(var_nsig->class->vft[COLOR_kernel__Object___61d_61d]))(var_nsig, var_other48) /* == on <var_nsig:nullable AType(AType)>*/;
var49 = var50;
}
var51 = !var49;
var46 = var51;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
var45 = var46;
}
if (var45){
var_node = var_nsig;
} else {
var_node = self;
}
if (varonce) {
var52 = varonce;
} else {
var53 = "Redef Error: ";
var54 = 13;
var55 = string__NativeString__to_s_with_length(var53, var54);
var52 = var55;
varonce = var52;
}
{
var56 = model__MSignature__arity(var_mysignature);
}
if (varonce57) {
var58 = varonce57;
} else {
var59 = " parameters found, ";
var60 = 19;
var61 = string__NativeString__to_s_with_length(var59, var60);
var58 = var61;
varonce57 = var58;
}
{
var62 = model__MSignature__arity(var_msignature);
}
if (varonce63) {
var64 = varonce63;
} else {
var65 = " expected. Signature is ";
var66 = 24;
var67 = string__NativeString__to_s_with_length(var65, var66);
var64 = var67;
varonce63 = var64;
}
var68 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var68 = array_instance Array[Object] */
var69 = 7;
var70 = NEW_array__NativeArray(var69, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var70)->values[0] = (val*) var52;
var71 = BOX_kernel__Int(var56); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var70)->values[1] = (val*) var71;
((struct instance_array__NativeArray*)var70)->values[2] = (val*) var58;
var72 = BOX_kernel__Int(var62); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var70)->values[3] = (val*) var72;
((struct instance_array__NativeArray*)var70)->values[4] = (val*) var64;
((struct instance_array__NativeArray*)var70)->values[5] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var70)->values[6] = (val*) var_msignature;
{
((void (*)(val*, val*, long))(var68->class->vft[COLOR_array__Array__with_native]))(var68, var70, var69) /* with_native on <var68:Array[Object]>*/;
}
}
{
var73 = ((val* (*)(val*))(var68->class->vft[COLOR_string__Object__to_s]))(var68) /* to_s on <var68:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, var_node, var73); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var76 = var_msignature->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:nullable MSignature(MSignature)> */
var74 = var76;
RET_LABEL75:(void)0;
}
}
var_precursor_ret_type = var74;
{
{ /* Inline model#MSignature#return_mtype (var_mysignature) on <var_mysignature:nullable MSignature(MSignature)> */
var79 = var_mysignature->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <var_mysignature:nullable MSignature(MSignature)> */
var77 = var79;
RET_LABEL78:(void)0;
}
}
var_ret_type = var77;
var81 = NULL;
if (var_ret_type == NULL) {
var82 = 0; /* is null */
} else {
var82 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret_type,var81) on <var_ret_type:nullable MType> */
var_other48 = var81;
{
var86 = ((short int (*)(val*, val*))(var_ret_type->class->vft[COLOR_kernel__Object___61d_61d]))(var_ret_type, var_other48) /* == on <var_ret_type:nullable MType(MType)>*/;
var85 = var86;
}
var87 = !var85;
var83 = var87;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
var82 = var83;
}
var_ = var82;
if (var82){
var88 = NULL;
if (var_precursor_ret_type == NULL) {
var89 = 1; /* is null */
} else {
var89 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_precursor_ret_type,var88) on <var_precursor_ret_type:nullable MType> */
var_other = var88;
{
{ /* Inline kernel#Object#is_same_instance (var_precursor_ret_type,var_other) on <var_precursor_ret_type:nullable MType(MType)> */
var94 = var_precursor_ret_type == var_other;
var92 = var94;
goto RET_LABEL93;
RET_LABEL93:(void)0;
}
}
var90 = var92;
goto RET_LABEL91;
RET_LABEL91:(void)0;
}
var89 = var90;
}
var80 = var89;
} else {
var80 = var_;
}
if (var80){
var95 = NULL;
if (var_nsig == NULL) {
var96 = 0; /* is null */
} else {
var96 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nsig,var95) on <var_nsig:nullable AType> */
var_other48 = var95;
{
var100 = ((short int (*)(val*, val*))(var_nsig->class->vft[COLOR_kernel__Object___61d_61d]))(var_nsig, var_other48) /* == on <var_nsig:nullable AType(AType)>*/;
var99 = var100;
}
var101 = !var99;
var97 = var101;
goto RET_LABEL98;
RET_LABEL98:(void)0;
}
var96 = var97;
}
if (var96){
var_node102 = var_nsig;
} else {
var_node102 = self;
}
if (varonce103) {
var104 = varonce103;
} else {
var105 = "Redef Error: ";
var106 = 13;
var107 = string__NativeString__to_s_with_length(var105, var106);
var104 = var107;
varonce103 = var104;
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var110 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var110 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var108 = var110;
RET_LABEL109:(void)0;
}
}
if (varonce111) {
var112 = varonce111;
} else {
var113 = " is a procedure, not a function.";
var114 = 32;
var115 = string__NativeString__to_s_with_length(var113, var114);
var112 = var115;
varonce111 = var112;
}
var116 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var116 = array_instance Array[Object] */
var117 = 3;
var118 = NEW_array__NativeArray(var117, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var118)->values[0] = (val*) var104;
((struct instance_array__NativeArray*)var118)->values[1] = (val*) var108;
((struct instance_array__NativeArray*)var118)->values[2] = (val*) var112;
{
((void (*)(val*, val*, long))(var116->class->vft[COLOR_array__Array__with_native]))(var116, var118, var117) /* with_native on <var116:Array[Object]>*/;
}
}
{
var119 = ((val* (*)(val*))(var116->class->vft[COLOR_string__Object__to_s]))(var116) /* to_s on <var116:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, var_node102, var119); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
var120 = model__MSignature__arity(var_mysignature);
}
var121 = 0;
{
{ /* Inline kernel#Int#> (var120,var121) on <var120:Int> */
/* Covariant cast for argument 0 (i) <var121:Int> isa OTHER */
/* <var121:Int> isa OTHER */
var124 = 1; /* easy <var121:Int> isa OTHER*/
if (unlikely(!var124)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var125 = var120 > var121;
var122 = var125;
goto RET_LABEL123;
RET_LABEL123:(void)0;
}
}
if (var122){
var126 = 0;
var_i = var126;
{
var127 = model__MSignature__arity(var_mysignature);
}
var_128 = var127;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_128) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_128:Int> isa OTHER */
/* <var_128:Int> isa OTHER */
var131 = 1; /* easy <var_128:Int> isa OTHER*/
if (unlikely(!var131)) {
var_class_name134 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name134);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var135 = var_i < var_128;
var129 = var135;
goto RET_LABEL130;
RET_LABEL130:(void)0;
}
}
if (var129){
{
{ /* Inline model#MSignature#mparameters (var_mysignature) on <var_mysignature:nullable MSignature(MSignature)> */
var138 = var_mysignature->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var_mysignature:nullable MSignature(MSignature)> */
if (unlikely(var138 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1465);
show_backtrace(1);
}
var136 = var138;
RET_LABEL137:(void)0;
}
}
{
var139 = array__Array___91d_93d(var136, var_i);
}
{
{ /* Inline model#MParameter#mtype (var139) on <var139:nullable Object(MParameter)> */
var142 = var139->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var139:nullable Object(MParameter)> */
if (unlikely(var142 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1565);
show_backtrace(1);
}
var140 = var142;
RET_LABEL141:(void)0;
}
}
var_myt = var140;
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var145 = var_msignature->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var_msignature:nullable MSignature(MSignature)> */
if (unlikely(var145 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1465);
show_backtrace(1);
}
var143 = var145;
RET_LABEL144:(void)0;
}
}
{
var146 = array__Array___91d_93d(var143, var_i);
}
{
{ /* Inline model#MParameter#mtype (var146) on <var146:nullable Object(MParameter)> */
var149 = var146->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var146:nullable Object(MParameter)> */
if (unlikely(var149 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1565);
show_backtrace(1);
}
var147 = var149;
RET_LABEL148:(void)0;
}
}
var_prt = var147;
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var153 = var_mclassdef->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var153 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var151 = var153;
RET_LABEL152:(void)0;
}
}
{
var154 = model__MType__is_subtype(var_myt, var_mmodule, var151, var_prt);
}
var155 = !var154;
var_156 = var155;
if (var155){
var150 = var_156;
} else {
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var159 = var_mclassdef->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var159 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var157 = var159;
RET_LABEL158:(void)0;
}
}
{
var160 = model__MType__is_subtype(var_prt, var_mmodule, var157, var_myt);
}
var161 = !var160;
var150 = var161;
}
if (var150){
var162 = NULL;
if (var_nsig == NULL) {
var163 = 0; /* is null */
} else {
var163 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nsig,var162) on <var_nsig:nullable AType> */
var_other48 = var162;
{
var167 = ((short int (*)(val*, val*))(var_nsig->class->vft[COLOR_kernel__Object___61d_61d]))(var_nsig, var_other48) /* == on <var_nsig:nullable AType(AType)>*/;
var166 = var167;
}
var168 = !var166;
var164 = var168;
goto RET_LABEL165;
RET_LABEL165:(void)0;
}
var163 = var164;
}
if (var163){
var_node169 = var_nsig;
} else {
var_node169 = self;
}
if (varonce170) {
var171 = varonce170;
} else {
var172 = "Redef Error: Wrong type for parameter `";
var173 = 39;
var174 = string__NativeString__to_s_with_length(var172, var173);
var171 = var174;
varonce170 = var171;
}
{
{ /* Inline model#MSignature#mparameters (var_mysignature) on <var_mysignature:nullable MSignature(MSignature)> */
var177 = var_mysignature->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var_mysignature:nullable MSignature(MSignature)> */
if (unlikely(var177 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1465);
show_backtrace(1);
}
var175 = var177;
RET_LABEL176:(void)0;
}
}
{
var178 = array__Array___91d_93d(var175, var_i);
}
{
{ /* Inline model#MParameter#name (var178) on <var178:nullable Object(MParameter)> */
var181 = var178->attrs[COLOR_model__MParameter___name].val; /* _name on <var178:nullable Object(MParameter)> */
if (unlikely(var181 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1562);
show_backtrace(1);
}
var179 = var181;
RET_LABEL180:(void)0;
}
}
if (varonce182) {
var183 = varonce182;
} else {
var184 = "\'. found ";
var185 = 9;
var186 = string__NativeString__to_s_with_length(var184, var185);
var183 = var186;
varonce182 = var183;
}
if (varonce187) {
var188 = varonce187;
} else {
var189 = ", expected ";
var190 = 11;
var191 = string__NativeString__to_s_with_length(var189, var190);
var188 = var191;
varonce187 = var188;
}
if (varonce192) {
var193 = varonce192;
} else {
var194 = ".";
var195 = 1;
var196 = string__NativeString__to_s_with_length(var194, var195);
var193 = var196;
varonce192 = var193;
}
var197 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var197 = array_instance Array[Object] */
var198 = 7;
var199 = NEW_array__NativeArray(var198, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var199)->values[0] = (val*) var171;
((struct instance_array__NativeArray*)var199)->values[1] = (val*) var179;
((struct instance_array__NativeArray*)var199)->values[2] = (val*) var183;
((struct instance_array__NativeArray*)var199)->values[3] = (val*) var_myt;
((struct instance_array__NativeArray*)var199)->values[4] = (val*) var188;
((struct instance_array__NativeArray*)var199)->values[5] = (val*) var_prt;
((struct instance_array__NativeArray*)var199)->values[6] = (val*) var193;
{
((void (*)(val*, val*, long))(var197->class->vft[COLOR_array__Array__with_native]))(var197, var199, var198) /* with_native on <var197:Array[Object]>*/;
}
}
{
var200 = ((val* (*)(val*))(var197->class->vft[COLOR_string__Object__to_s]))(var197) /* to_s on <var197:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, var_node169, var200); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
var201 = 1;
{
var202 = kernel__Int__successor(var_i, var201);
}
var_i = var202;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
} else {
}
var203 = NULL;
if (var_precursor_ret_type == NULL) {
var204 = 0; /* is null */
} else {
var204 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_precursor_ret_type,var203) on <var_precursor_ret_type:nullable MType> */
var_other48 = var203;
{
var208 = ((short int (*)(val*, val*))(var_precursor_ret_type->class->vft[COLOR_kernel__Object___61d_61d]))(var_precursor_ret_type, var_other48) /* == on <var_precursor_ret_type:nullable MType(MType)>*/;
var207 = var208;
}
var209 = !var207;
var205 = var209;
goto RET_LABEL206;
RET_LABEL206:(void)0;
}
var204 = var205;
}
if (var204){
var210 = NULL;
if (var_ret_type == NULL) {
var211 = 1; /* is null */
} else {
var211 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ret_type,var210) on <var_ret_type:nullable MType> */
var_other = var210;
{
{ /* Inline kernel#Object#is_same_instance (var_ret_type,var_other) on <var_ret_type:nullable MType(MType)> */
var216 = var_ret_type == var_other;
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
var_ret_type = var_precursor_ret_type;
} else {
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var219 = var_mclassdef->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var219 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var217 = var219;
RET_LABEL218:(void)0;
}
}
{
var220 = model__MType__is_subtype(var_ret_type, var_mmodule, var217, var_precursor_ret_type);
}
var221 = !var220;
if (var221){
var222 = NULL;
if (var_nsig == NULL) {
var223 = 0; /* is null */
} else {
var223 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nsig,var222) on <var_nsig:nullable AType> */
var_other48 = var222;
{
var227 = ((short int (*)(val*, val*))(var_nsig->class->vft[COLOR_kernel__Object___61d_61d]))(var_nsig, var_other48) /* == on <var_nsig:nullable AType(AType)>*/;
var226 = var227;
}
var228 = !var226;
var224 = var228;
goto RET_LABEL225;
RET_LABEL225:(void)0;
}
var223 = var224;
}
if (var223){
var_node229 = var_nsig;
} else {
var_node229 = self;
}
if (varonce230) {
var231 = varonce230;
} else {
var232 = "Redef Error: Wrong return type. found ";
var233 = 38;
var234 = string__NativeString__to_s_with_length(var232, var233);
var231 = var234;
varonce230 = var231;
}
if (varonce235) {
var236 = varonce235;
} else {
var237 = ", expected ";
var238 = 11;
var239 = string__NativeString__to_s_with_length(var237, var238);
var236 = var239;
varonce235 = var236;
}
if (varonce240) {
var241 = varonce240;
} else {
var242 = ".";
var243 = 1;
var244 = string__NativeString__to_s_with_length(var242, var243);
var241 = var244;
varonce240 = var241;
}
var245 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var245 = array_instance Array[Object] */
var246 = 5;
var247 = NEW_array__NativeArray(var246, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var247)->values[0] = (val*) var231;
((struct instance_array__NativeArray*)var247)->values[1] = (val*) var_ret_type;
((struct instance_array__NativeArray*)var247)->values[2] = (val*) var236;
((struct instance_array__NativeArray*)var247)->values[3] = (val*) var_precursor_ret_type;
((struct instance_array__NativeArray*)var247)->values[4] = (val*) var241;
{
((void (*)(val*, val*, long))(var245->class->vft[COLOR_array__Array__with_native]))(var245, var247, var246) /* with_native on <var245:Array[Object]>*/;
}
}
{
var248 = ((val* (*)(val*))(var245->class->vft[COLOR_string__Object__to_s]))(var245) /* to_s on <var245:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, var_node229, var248); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
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
val* var22 /* : SequenceRead[Char] */;
val* var_ /* var : SequenceRead[Char] */;
val* var23 /* : Iterator[nullable Object] */;
val* var_24 /* var : IndexedIterator[Char] */;
short int var25 /* : Bool */;
val* var26 /* : nullable Object */;
char var27 /* : Char */;
char var_c /* var c: Char */;
short int var28 /* : Bool */;
char var29 /* : Char */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var33 /* : Bool */;
short int var_34 /* var : Bool */;
char var35 /* : Char */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
short int var42 /* : Bool */;
val* var43 /* : TClassid */;
val* var45 /* : TClassid */;
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
val* var55 /* : Array[Object] */;
long var56 /* : Int */;
val* var57 /* : NativeArray[Object] */;
val* var58 /* : String */;
val* var60 /* : nullable TKwredef */;
val* var62 /* : nullable TKwredef */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
val* var66 /* : nullable TKwredef */;
val* var68 /* : nullable TKwredef */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
short int var71 /* : Bool */;
short int var72 /* : Bool */;
int cltype73;
int idtype74;
val* var75 /* : nullable AVisibility */;
val* var77 /* : nullable AVisibility */;
val* var78 /* : Map[MProperty, APropdef] */;
val* var80 /* : Map[MProperty, APropdef] */;
val* var81 /* : MVirtualTypeDef */;
val* var82 /* : Location */;
val* var84 /* : Location */;
val* var_mpropdef /* var mpropdef: MVirtualTypeDef */;
short int var85 /* : Bool */;
int cltype86;
int idtype87;
const struct type* type_struct;
const char* var_class_name88;
short int var90 /* : Bool */;
int cltype91;
int idtype92;
const struct type* type_struct93;
const char* var_class_name94;
val* var95 /* : HashMap[MPropDef, APropdef] */;
val* var97 /* : HashMap[MPropDef, APropdef] */;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : NativeString */;
long var101 /* : Int */;
val* var102 /* : FlatString */;
val* var103 /* : nullable AAnnotation */;
val* var_atfixed /* var atfixed: nullable AAnnotation */;
val* var104 /* : null */;
short int var105 /* : Bool */;
short int var106 /* : Bool */;
val* var_other108 /* var other: nullable Object */;
short int var109 /* : Bool */;
short int var110 /* : Bool */;
short int var111 /* : Bool */;
short int var112 /* : Bool */;
var_modelbuilder = p0;
var_mclassdef = p1;
{
{ /* Inline parser_nodes#ATypePropdef#n_id (self) on <self:ATypePropdef> */
var2 = self->attrs[COLOR_parser_nodes__ATypePropdef___n_id].val; /* _n_id on <self:ATypePropdef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1147);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = lexer_work__Token__text(var);
}
var_name = var3;
{
{ /* Inline parser_nodes#ATypePropdef#n_id (self) on <self:ATypePropdef> */
var6 = self->attrs[COLOR_parser_nodes__ATypePropdef___n_id].val; /* _n_id on <self:ATypePropdef> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1147);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = modelbuilder__ModelBuilder__try_get_mproperty_by_name(var_modelbuilder, var4, var_mclassdef, var_name);
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
{ /* Inline parser_nodes#APropdef#n_visibility (self) on <self:ATypePropdef> */
var17 = self->attrs[COLOR_parser_nodes__APropdef___n_visibility].val; /* _n_visibility on <self:ATypePropdef> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = modelize_property__APropdef__new_property_visibility(self, var_modelbuilder, var_mclassdef, var15);
}
var_mvisibility = var18;
var19 = NEW_model__MVirtualTypeProp(&type_model__MVirtualTypeProp);
{
model__MVirtualTypeProp__init(var19, var_mclassdef, var_name, var_mvisibility); /* Direct call model#MVirtualTypeProp#init on <var19:MVirtualTypeProp>*/
}
var_mprop = var19;
{
{ /* Inline string#FlatString#chars (var_name) on <var_name:String> */
var22 = var_name->attrs[COLOR_string__FlatString___chars].val; /* _chars on <var_name:String> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 939);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
var_ = var20;
{
var23 = ((val* (*)(val*))(var_->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:SequenceRead[Char]>*/;
}
var_24 = var23;
for(;;) {
{
var25 = ((short int (*)(val*))(var_24->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_24) /* is_ok on <var_24:IndexedIterator[Char]>*/;
}
if (var25){
{
var26 = ((val* (*)(val*))(var_24->class->vft[COLOR_abstract_collection__Iterator__item]))(var_24) /* item on <var_24:IndexedIterator[Char]>*/;
}
var27 = ((struct instance_kernel__Char*)var26)->value; /* autounbox from nullable Object to Char */;
var_c = var27;
var29 = 'a';
{
{ /* Inline kernel#Char#>= (var_c,var29) on <var_c:Char> */
/* Covariant cast for argument 0 (i) <var29:Char> isa OTHER */
/* <var29:Char> isa OTHER */
var32 = 1; /* easy <var29:Char> isa OTHER*/
if (unlikely(!var32)) {
var_class_name = type_kernel__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 547);
show_backtrace(1);
}
var33 = var_c >= var29;
var30 = var33;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var_34 = var30;
if (var30){
var35 = 'z';
{
{ /* Inline kernel#Char#<= (var_c,var35) on <var_c:Char> */
/* Covariant cast for argument 0 (i) <var35:Char> isa OTHER */
/* <var35:Char> isa OTHER */
var38 = 1; /* easy <var35:Char> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_kernel__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 545);
show_backtrace(1);
}
var42 = var_c <= var35;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var28 = var36;
} else {
var28 = var_34;
}
if (var28){
{
{ /* Inline parser_nodes#ATypePropdef#n_id (self) on <self:ATypePropdef> */
var45 = self->attrs[COLOR_parser_nodes__ATypePropdef___n_id].val; /* _n_id on <self:ATypePropdef> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1147);
show_backtrace(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
if (varonce) {
var46 = varonce;
} else {
var47 = "bad-type-name";
var48 = 13;
var49 = string__NativeString__to_s_with_length(var47, var48);
var46 = var49;
varonce = var46;
}
if (varonce50) {
var51 = varonce50;
} else {
var52 = "Warning: lowercase in the virtual type ";
var53 = 39;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
var55 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var55 = array_instance Array[Object] */
var56 = 2;
var57 = NEW_array__NativeArray(var56, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var57)->values[0] = (val*) var51;
((struct instance_array__NativeArray*)var57)->values[1] = (val*) var_name;
{
((void (*)(val*, val*, long))(var55->class->vft[COLOR_array__Array__with_native]))(var55, var57, var56) /* with_native on <var55:Array[Object]>*/;
}
}
{
var58 = ((val* (*)(val*))(var55->class->vft[COLOR_string__Object__to_s]))(var55) /* to_s on <var55:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__warning(var_modelbuilder, var43, var46, var58); /* Direct call modelbuilder#ModelBuilder#warning on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label;
} else {
}
{
((void (*)(val*))(var_24->class->vft[COLOR_abstract_collection__Iterator__next]))(var_24) /* next on <var_24:IndexedIterator[Char]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_24) on <var_24:IndexedIterator[Char]> */
RET_LABEL59:(void)0;
}
}
{
{ /* Inline parser_nodes#APropdef#n_kwredef (self) on <self:ATypePropdef> */
var62 = self->attrs[COLOR_parser_nodes__APropdef___n_kwredef].val; /* _n_kwredef on <self:ATypePropdef> */
var60 = var62;
RET_LABEL61:(void)0;
}
}
var63 = 0;
{
var64 = modelize_property__APropdef__check_redef_keyword(self, var_modelbuilder, var_mclassdef, var60, var63, var_mprop);
}
var65 = !var64;
if (var65){
goto RET_LABEL;
} else {
}
} else {
{
{ /* Inline parser_nodes#APropdef#n_kwredef (self) on <self:ATypePropdef> */
var68 = self->attrs[COLOR_parser_nodes__APropdef___n_kwredef].val; /* _n_kwredef on <self:ATypePropdef> */
var66 = var68;
RET_LABEL67:(void)0;
}
}
var69 = 1;
{
var70 = modelize_property__APropdef__check_redef_keyword(self, var_modelbuilder, var_mclassdef, var66, var69, var_mprop);
}
var71 = !var70;
if (var71){
goto RET_LABEL;
} else {
}
/* <var_mprop:nullable MProperty(MProperty)> isa MVirtualTypeProp */
cltype73 = type_model__MVirtualTypeProp.color;
idtype74 = type_model__MVirtualTypeProp.id;
if(cltype73 >= var_mprop->type->table_size) {
var72 = 0;
} else {
var72 = var_mprop->type->type_table[cltype73] == idtype74;
}
if (unlikely(!var72)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 1078);
show_backtrace(1);
}
{
{ /* Inline parser_nodes#APropdef#n_visibility (self) on <self:ATypePropdef> */
var77 = self->attrs[COLOR_parser_nodes__APropdef___n_visibility].val; /* _n_visibility on <self:ATypePropdef> */
var75 = var77;
RET_LABEL76:(void)0;
}
}
{
modelize_property__APropdef__check_redef_property_visibility(self, var_modelbuilder, var75, var_mprop); /* Direct call modelize_property#APropdef#check_redef_property_visibility on <self:ATypePropdef>*/
}
}
{
{ /* Inline modelize_property#MClassDef#mprop2npropdef (var_mclassdef) on <var_mclassdef:MClassDef> */
var80 = var_mclassdef->attrs[COLOR_modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <var_mclassdef:MClassDef> */
if (unlikely(var80 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 310);
show_backtrace(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
((void (*)(val*, val*, val*))(var78->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var78, var_mprop, self) /* []= on <var78:Map[MProperty, APropdef]>*/;
}
var81 = NEW_model__MVirtualTypeDef(&type_model__MVirtualTypeDef);
{
{ /* Inline parser_nodes#ANode#location (self) on <self:ATypePropdef> */
var84 = self->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <self:ATypePropdef> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 23);
show_backtrace(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
model__MVirtualTypeDef__init(var81, var_mclassdef, var_mprop, var82); /* Direct call model#MVirtualTypeDef#init on <var81:MVirtualTypeDef>*/
}
var_mpropdef = var81;
/* <var_mpropdef:MVirtualTypeDef> isa nullable MPROPDEF */
type_struct = self->type->resolution_table->types[COLOR_nullable_parser_nodes__APropdef_VTMPROPDEF];
cltype86 = type_struct->color;
idtype87 = type_struct->id;
if(cltype86 >= var_mpropdef->type->table_size) {
var85 = 0;
} else {
var85 = var_mpropdef->type->type_table[cltype86] == idtype87;
}
if (unlikely(!var85)) {
var_class_name88 = var_mpropdef == NULL ? "null" : var_mpropdef->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name88);
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 1084);
show_backtrace(1);
}
{
{ /* Inline modelize_property#APropdef#mpropdef= (self,var_mpropdef) on <self:ATypePropdef> */
/* Covariant cast for argument 0 (mpropdef) <var_mpropdef:MVirtualTypeDef> isa nullable MPROPDEF */
/* <var_mpropdef:MVirtualTypeDef> isa nullable MPROPDEF */
type_struct93 = self->type->resolution_table->types[COLOR_nullable_parser_nodes__APropdef_VTMPROPDEF];
cltype91 = type_struct93->color;
idtype92 = type_struct93->id;
if(cltype91 >= var_mpropdef->type->table_size) {
var90 = 0;
} else {
var90 = var_mpropdef->type->type_table[cltype91] == idtype92;
}
if (unlikely(!var90)) {
var_class_name94 = var_mpropdef == NULL ? "null" : var_mpropdef->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name94);
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 319);
show_backtrace(1);
}
self->attrs[COLOR_modelize_property__APropdef___mpropdef].val = var_mpropdef; /* _mpropdef on <self:ATypePropdef> */
RET_LABEL89:(void)0;
}
}
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var97 = var_modelbuilder->attrs[COLOR_modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var97 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 39);
show_backtrace(1);
}
var95 = var97;
RET_LABEL96:(void)0;
}
}
{
hash_collection__HashMap___91d_93d_61d(var95, var_mpropdef, self); /* Direct call hash_collection#HashMap#[]= on <var95:HashMap[MPropDef, APropdef]>*/
}
{
modelize_property__APropdef__set_doc(self, var_mpropdef, var_modelbuilder); /* Direct call modelize_property#APropdef#set_doc on <self:ATypePropdef>*/
}
if (varonce98) {
var99 = varonce98;
} else {
var100 = "fixed";
var101 = 5;
var102 = string__NativeString__to_s_with_length(var100, var101);
var99 = var102;
varonce98 = var99;
}
{
var103 = annotation__Prod__get_single_annotation(self, var99, var_modelbuilder);
}
var_atfixed = var103;
var104 = NULL;
if (var_atfixed == NULL) {
var105 = 0; /* is null */
} else {
var105 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atfixed,var104) on <var_atfixed:nullable AAnnotation> */
var_other108 = var104;
{
var110 = ((short int (*)(val*, val*))(var_atfixed->class->vft[COLOR_kernel__Object___61d_61d]))(var_atfixed, var_other108) /* == on <var_atfixed:nullable AAnnotation(AAnnotation)>*/;
var109 = var110;
}
var111 = !var109;
var106 = var111;
goto RET_LABEL107;
RET_LABEL107:(void)0;
}
var105 = var106;
}
if (var105){
var112 = 1;
{
{ /* Inline model#MVirtualTypeDef#is_fixed= (var_mpropdef,var112) on <var_mpropdef:MVirtualTypeDef> */
var_mpropdef->attrs[COLOR_model__MVirtualTypeDef___is_fixed].s = var112; /* _is_fixed on <var_mpropdef:MVirtualTypeDef> */
RET_LABEL113:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
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
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
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
var19 = self->attrs[COLOR_parser_nodes__ATypePropdef___n_type].val; /* _n_type on <self:ATypePropdef> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1148);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_ntype = var17;
{
var20 = modelize_class__ModelBuilder__resolve_mtype(var_modelbuilder, var_mmodule, var_mclassdef, var_ntype);
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
var_mpropdef->attrs[COLOR_model__MVirtualTypeDef___bound].val = var_mtype; /* _bound on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
RET_LABEL28:(void)0;
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
val* var_supbound /* var supbound: MType */;
short int var82 /* : Bool */;
short int var84 /* : Bool */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
long var88 /* : Int */;
val* var89 /* : FlatString */;
val* var90 /* : MProperty */;
val* var92 /* : MProperty */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
long var96 /* : Int */;
val* var97 /* : FlatString */;
val* var98 /* : MClassDef */;
val* var100 /* : MClassDef */;
val* var101 /* : MClass */;
val* var103 /* : MClass */;
val* var104 /* : Array[Object] */;
long var105 /* : Int */;
val* var106 /* : NativeArray[Object] */;
val* var107 /* : String */;
val* var109 /* : MClassDef */;
val* var111 /* : MClassDef */;
val* var112 /* : MClass */;
val* var114 /* : MClass */;
val* var115 /* : MClass */;
val* var117 /* : MClass */;
short int var118 /* : Bool */;
short int var119 /* : Bool */;
short int var121 /* : Bool */;
short int var123 /* : Bool */;
val* var124 /* : AType */;
val* var126 /* : AType */;
static val* varonce127;
val* var128 /* : String */;
char* var129 /* : NativeString */;
long var130 /* : Int */;
val* var131 /* : FlatString */;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : NativeString */;
long var135 /* : Int */;
val* var136 /* : FlatString */;
short int var137 /* : Bool */;
short int var138 /* : Bool */;
val* var139 /* : AType */;
val* var141 /* : AType */;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : NativeString */;
long var145 /* : Int */;
val* var146 /* : FlatString */;
static val* varonce147;
val* var148 /* : String */;
char* var149 /* : NativeString */;
long var150 /* : Int */;
val* var151 /* : FlatString */;
static val* varonce152;
val* var153 /* : String */;
char* var154 /* : NativeString */;
long var155 /* : Int */;
val* var156 /* : FlatString */;
static val* varonce157;
val* var158 /* : String */;
char* var159 /* : NativeString */;
long var160 /* : Int */;
val* var161 /* : FlatString */;
val* var162 /* : Array[Object] */;
long var163 /* : Int */;
val* var164 /* : NativeArray[Object] */;
val* var165 /* : String */;
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
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 1115);
show_backtrace(1);
} else {
{ /* Inline model#MVirtualTypeDef#bound (var10) on <var10:nullable MPropDef(nullable MVirtualTypeDef)> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 2022);
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
{ /* Inline parser_nodes#ATypePropdef#n_type (self) on <self:ATypePropdef> */
var25 = self->attrs[COLOR_parser_nodes__ATypePropdef___n_type].val; /* _n_type on <self:ATypePropdef> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1148);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
modelize_property__ModelBuilder__check_visibility(var_modelbuilder, var23, var_bound, var_mpropdef); /* Direct call modelize_property#ModelBuilder#check_visibility on <var_modelbuilder:ModelBuilder>*/
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var28 = var_mpropdef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
var_mclassdef = var26;
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var31 = var_mclassdef->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
var_mmodule = var29;
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var34 = var_mclassdef->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
var_anchor = var32;
/* <var_bound:nullable MType(MType)> isa MVirtualType */
cltype = type_model__MVirtualType.color;
idtype = type_model__MVirtualType.id;
if(cltype >= var_bound->type->table_size) {
var35 = 0;
} else {
var35 = var_bound->type->type_table[cltype] == idtype;
}
if (var35){
var36 = NEW_array__Array(&type_array__Arraymodel__MVirtualType);
var37 = 1;
{
array__Array__with_capacity(var36, var37); /* Direct call array#Array#with_capacity on <var36:Array[MVirtualType]>*/
}
var_ = var36;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:ATypePropdef> */
var40 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:ATypePropdef> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
if (var38 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 1127);
show_backtrace(1);
} else {
{ /* Inline model#MPropDef#mproperty (var38) on <var38:nullable MPropDef(nullable MVirtualTypeDef)> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var43 = var38->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var38:nullable MPropDef(nullable MVirtualTypeDef)> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline model#MVirtualTypeProp#mvirtualtype (var41) on <var41:MProperty(MVirtualTypeProp)> */
var46 = var41->attrs[COLOR_model__MVirtualTypeProp___mvirtualtype].val; /* _mvirtualtype on <var41:MProperty(MVirtualTypeProp)> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mvirtualtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1874);
show_backtrace(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
array__AbstractArray__push(var_, var44); /* Direct call array#AbstractArray#push on <var_:Array[MVirtualType]>*/
}
var_seen = var_;
for(;;) {
{
var47 = array__AbstractArrayRead__has(var_seen, var_bound);
}
if (var47){
{
array__Array__add(var_seen, var_bound); /* Direct call array#Array#add on <var_seen:Array[MVirtualType]>*/
}
if (varonce) {
var48 = varonce;
} else {
var49 = "Error: circularity of virtual type definition: ";
var50 = 47;
var51 = string__NativeString__to_s_with_length(var49, var50);
var48 = var51;
varonce = var48;
}
if (varonce52) {
var53 = varonce52;
} else {
var54 = " -> ";
var55 = 4;
var56 = string__NativeString__to_s_with_length(var54, var55);
var53 = var56;
varonce52 = var53;
}
{
var57 = string__Collection__join(var_seen, var53);
}
var58 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var58 = array_instance Array[Object] */
var59 = 2;
var60 = NEW_array__NativeArray(var59, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var60)->values[0] = (val*) var48;
((struct instance_array__NativeArray*)var60)->values[1] = (val*) var57;
{
((void (*)(val*, val*, long))(var58->class->vft[COLOR_array__Array__with_native]))(var58, var60, var59) /* with_native on <var58:Array[Object]>*/;
}
}
{
var61 = ((val* (*)(val*))(var58->class->vft[COLOR_string__Object__to_s]))(var58) /* to_s on <var58:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, self, var61); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
array__Array__add(var_seen, var_bound); /* Direct call array#Array#add on <var_seen:Array[MVirtualType]>*/
}
{
var62 = model__MVirtualType__lookup_bound(var_bound, var_mmodule, var_anchor);
}
var_next = var62;
/* <var_next:MType> isa MVirtualType */
cltype64 = type_model__MVirtualType.color;
idtype65 = type_model__MVirtualType.id;
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
var69 = var_mpropdef->attrs[COLOR_model__MVirtualTypeDef___bound].val; /* _bound on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var67 = var69;
RET_LABEL68:(void)0;
}
}
if (unlikely(var67 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 1142);
show_backtrace(1);
}
var_bound = var67;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var72 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
if (unlikely(var72 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
{
var73 = model__MProperty__lookup_super_definitions(var70, var_mmodule, var_anchor);
}
var_74 = var73;
{
var75 = array__AbstractArrayRead__iterator(var_74);
}
var_76 = var75;
for(;;) {
{
var77 = array__ArrayIterator__is_ok(var_76);
}
if (var77){
{
var78 = array__ArrayIterator__item(var_76);
}
var_p = var78;
{
{ /* Inline model#MVirtualTypeDef#bound (var_p) on <var_p:MVirtualTypeDef> */
var81 = var_p->attrs[COLOR_model__MVirtualTypeDef___bound].val; /* _bound on <var_p:MVirtualTypeDef> */
var79 = var81;
RET_LABEL80:(void)0;
}
}
if (unlikely(var79 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 1144);
show_backtrace(1);
}
var_supbound = var79;
{
{ /* Inline model#MVirtualTypeDef#is_fixed (var_p) on <var_p:MVirtualTypeDef> */
var84 = var_p->attrs[COLOR_model__MVirtualTypeDef___is_fixed].s; /* _is_fixed on <var_p:MVirtualTypeDef> */
var82 = var84;
RET_LABEL83:(void)0;
}
}
if (var82){
if (varonce85) {
var86 = varonce85;
} else {
var87 = "Redef Error: Virtual type ";
var88 = 26;
var89 = string__NativeString__to_s_with_length(var87, var88);
var86 = var89;
varonce85 = var86;
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var92 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
if (unlikely(var92 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
if (varonce93) {
var94 = varonce93;
} else {
var95 = " is fixed in super-class ";
var96 = 25;
var97 = string__NativeString__to_s_with_length(var95, var96);
var94 = var97;
varonce93 = var94;
}
{
{ /* Inline model#MPropDef#mclassdef (var_p) on <var_p:MVirtualTypeDef> */
var100 = var_p->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_p:MVirtualTypeDef> */
if (unlikely(var100 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var98 = var100;
RET_LABEL99:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var98) on <var98:MClassDef> */
var103 = var98->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var98:MClassDef> */
if (unlikely(var103 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var101 = var103;
RET_LABEL102:(void)0;
}
}
var104 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var104 = array_instance Array[Object] */
var105 = 4;
var106 = NEW_array__NativeArray(var105, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var106)->values[0] = (val*) var86;
((struct instance_array__NativeArray*)var106)->values[1] = (val*) var90;
((struct instance_array__NativeArray*)var106)->values[2] = (val*) var94;
((struct instance_array__NativeArray*)var106)->values[3] = (val*) var101;
{
((void (*)(val*, val*, long))(var104->class->vft[COLOR_array__Array__with_native]))(var104, var106, var105) /* with_native on <var104:Array[Object]>*/;
}
}
{
var107 = ((val* (*)(val*))(var104->class->vft[COLOR_string__Object__to_s]))(var104) /* to_s on <var104:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, self, var107); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label108;
} else {
}
{
{ /* Inline model#MPropDef#mclassdef (var_p) on <var_p:MVirtualTypeDef> */
var111 = var_p->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_p:MVirtualTypeDef> */
if (unlikely(var111 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var109 = var111;
RET_LABEL110:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var109) on <var109:MClassDef> */
var114 = var109->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var109:MClassDef> */
if (unlikely(var114 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var112 = var114;
RET_LABEL113:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var117 = var_mclassdef->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var117 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var115 = var117;
RET_LABEL116:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var112,var115) on <var112:MClass> */
var_other = var115;
{
{ /* Inline kernel#Object#is_same_instance (var112,var_other) on <var112:MClass> */
var123 = var112 == var_other;
var121 = var123;
goto RET_LABEL122;
RET_LABEL122:(void)0;
}
}
var119 = var121;
goto RET_LABEL120;
RET_LABEL120:(void)0;
}
var118 = var119;
}
if (var118){
{
{ /* Inline parser_nodes#ATypePropdef#n_type (self) on <self:ATypePropdef> */
var126 = self->attrs[COLOR_parser_nodes__ATypePropdef___n_type].val; /* _n_type on <self:ATypePropdef> */
if (unlikely(var126 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1148);
show_backtrace(1);
}
var124 = var126;
RET_LABEL125:(void)0;
}
}
if (varonce127) {
var128 = varonce127;
} else {
var129 = "refine-type";
var130 = 11;
var131 = string__NativeString__to_s_with_length(var129, var130);
var128 = var131;
varonce127 = var128;
}
if (varonce132) {
var133 = varonce132;
} else {
var134 = "Redef Error: a virtual type cannot be refined.";
var135 = 46;
var136 = string__NativeString__to_s_with_length(var134, var135);
var133 = var136;
varonce132 = var133;
}
{
modelbuilder__ModelBuilder__warning(var_modelbuilder, var124, var128, var133); /* Direct call modelbuilder#ModelBuilder#warning on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label108;
} else {
}
{
var137 = model__MType__is_subtype(var_bound, var_mmodule, var_anchor, var_supbound);
}
var138 = !var137;
if (var138){
{
{ /* Inline parser_nodes#ATypePropdef#n_type (self) on <self:ATypePropdef> */
var141 = self->attrs[COLOR_parser_nodes__ATypePropdef___n_type].val; /* _n_type on <self:ATypePropdef> */
if (unlikely(var141 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1148);
show_backtrace(1);
}
var139 = var141;
RET_LABEL140:(void)0;
}
}
if (varonce142) {
var143 = varonce142;
} else {
var144 = "Redef Error: Wrong bound type. Found ";
var145 = 37;
var146 = string__NativeString__to_s_with_length(var144, var145);
var143 = var146;
varonce142 = var143;
}
if (varonce147) {
var148 = varonce147;
} else {
var149 = ", expected a subtype of ";
var150 = 24;
var151 = string__NativeString__to_s_with_length(var149, var150);
var148 = var151;
varonce147 = var148;
}
if (varonce152) {
var153 = varonce152;
} else {
var154 = ", as in ";
var155 = 8;
var156 = string__NativeString__to_s_with_length(var154, var155);
var153 = var156;
varonce152 = var153;
}
if (varonce157) {
var158 = varonce157;
} else {
var159 = ".";
var160 = 1;
var161 = string__NativeString__to_s_with_length(var159, var160);
var158 = var161;
varonce157 = var158;
}
var162 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var162 = array_instance Array[Object] */
var163 = 7;
var164 = NEW_array__NativeArray(var163, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var164)->values[0] = (val*) var143;
((struct instance_array__NativeArray*)var164)->values[1] = (val*) var_bound;
((struct instance_array__NativeArray*)var164)->values[2] = (val*) var148;
((struct instance_array__NativeArray*)var164)->values[3] = (val*) var_supbound;
((struct instance_array__NativeArray*)var164)->values[4] = (val*) var153;
((struct instance_array__NativeArray*)var164)->values[5] = (val*) var_p;
((struct instance_array__NativeArray*)var164)->values[6] = (val*) var158;
{
((void (*)(val*, val*, long))(var162->class->vft[COLOR_array__Array__with_native]))(var162, var164, var163) /* with_native on <var162:Array[Object]>*/;
}
}
{
var165 = ((val* (*)(val*))(var162->class->vft[COLOR_string__Object__to_s]))(var162) /* to_s on <var162:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, var139, var165); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label108;
} else {
}
{
array__ArrayIterator__next(var_76); /* Direct call array#ArrayIterator#next on <var_76:ArrayIterator[MVirtualTypeDef]>*/
}
} else {
goto BREAK_label108;
}
}
BREAK_label108: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_76) on <var_76:ArrayIterator[MVirtualTypeDef]> */
RET_LABEL166:(void)0;
}
}
RET_LABEL:;
}
/* method modelize_property#ATypePropdef#check_signature for (self: Object, ModelBuilder) */
void VIRTUAL_modelize_property__ATypePropdef__check_signature(val* self, val* p0) {
modelize_property__ATypePropdef__check_signature(self, p0); /* Direct call modelize_property#ATypePropdef#check_signature on <self:Object(ATypePropdef)>*/
RET_LABEL:;
}
