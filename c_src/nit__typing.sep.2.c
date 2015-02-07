#include "nit__typing.sep.0.h"
/* method typing#AForExpr#do_type_iterator for (self: AForExpr, TypeVisitor, MType) */
void nit__typing___AForExpr___do_type_iterator(val* self, val* p0, val* p1) {
val* var_v /* var v: TypeVisitor */;
val* var_mtype /* var mtype: MType */;
short int var /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : FlatString */;
val* var10 /* : nullable MClass */;
val* var_objcla /* var objcla: nullable MClass */;
val* var11 /* : null */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : FlatString */;
val* var23 /* : AExpr */;
val* var25 /* : AExpr */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : nullable CallSite */;
val* var_itdef /* var itdef: nullable CallSite */;
val* var30 /* : null */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
long var40 /* : Int */;
val* var41 /* : FlatString */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
long var45 /* : Int */;
val* var46 /* : FlatString */;
val* var47 /* : Array[Object] */;
long var48 /* : Int */;
val* var49 /* : NativeArray[Object] */;
val* var50 /* : String */;
val* var52 /* : MSignature */;
val* var54 /* : MSignature */;
val* var55 /* : nullable MType */;
val* var57 /* : nullable MType */;
val* var_ittype /* var ittype: nullable MType */;
val* var58 /* : null */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
short int var62 /* : Bool */;
short int var64 /* : Bool */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
long var68 /* : Int */;
val* var69 /* : FlatString */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
long var73 /* : Int */;
val* var74 /* : FlatString */;
val* var75 /* : nullable MClass */;
val* var_colit_cla /* var colit_cla: nullable MClass */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
long var79 /* : Int */;
val* var80 /* : FlatString */;
val* var81 /* : nullable MClass */;
val* var_mapit_cla /* var mapit_cla: nullable MClass */;
short int var82 /* : Bool */;
short int var_is_col /* var is_col: Bool */;
short int var83 /* : Bool */;
short int var_is_map /* var is_map: Bool */;
short int var84 /* : Bool */;
val* var85 /* : null */;
short int var86 /* : Bool */;
short int var87 /* : Bool */;
val* var_other89 /* var other: nullable Object */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
short int var_ /* var : Bool */;
val* var92 /* : Array[MType] */;
long var93 /* : Int */;
val* var_94 /* var : Array[MType] */;
val* var95 /* : MClassType */;
val* var97 /* : MClassType */;
val* var98 /* : MType */;
val* var99 /* : MClassType */;
short int var100 /* : Bool */;
val* var101 /* : MModule */;
val* var103 /* : MModule */;
val* var104 /* : nullable MClassType */;
val* var106 /* : nullable MClassType */;
val* var107 /* : MClassType */;
val* var_coltype /* var coltype: MClassType */;
val* var108 /* : nullable Array[Variable] */;
val* var110 /* : nullable Array[Variable] */;
val* var_variables /* var variables: nullable Array[Variable] */;
long var111 /* : Int */;
long var113 /* : Int */;
long var114 /* : Int */;
short int var115 /* : Bool */;
short int var117 /* : Bool */;
short int var118 /* : Bool */;
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : NativeString */;
long var122 /* : Int */;
val* var123 /* : FlatString */;
val* var124 /* : nullable Object */;
val* var125 /* : Array[MType] */;
val* var126 /* : nullable Object */;
short int var128 /* : Bool */;
short int var129 /* : Bool */;
val* var130 /* : null */;
short int var131 /* : Bool */;
short int var132 /* : Bool */;
short int var134 /* : Bool */;
short int var135 /* : Bool */;
short int var_136 /* var : Bool */;
val* var137 /* : Array[MType] */;
long var138 /* : Int */;
val* var_139 /* var : Array[MType] */;
val* var140 /* : MClassType */;
val* var142 /* : MClassType */;
val* var143 /* : MType */;
val* var144 /* : MClassType */;
val* var146 /* : MClassType */;
val* var147 /* : MType */;
val* var148 /* : MClassType */;
short int var149 /* : Bool */;
val* var150 /* : MModule */;
val* var152 /* : MModule */;
val* var153 /* : nullable MClassType */;
val* var155 /* : nullable MClassType */;
val* var156 /* : MClassType */;
val* var_coltype157 /* var coltype: MClassType */;
val* var158 /* : nullable Array[Variable] */;
val* var160 /* : nullable Array[Variable] */;
val* var_variables161 /* var variables: nullable Array[Variable] */;
long var162 /* : Int */;
long var164 /* : Int */;
long var165 /* : Int */;
short int var166 /* : Bool */;
short int var168 /* : Bool */;
short int var169 /* : Bool */;
static val* varonce170;
val* var171 /* : String */;
char* var172 /* : NativeString */;
long var173 /* : Int */;
val* var174 /* : FlatString */;
long var175 /* : Int */;
val* var176 /* : nullable Object */;
val* var177 /* : Array[MType] */;
long var178 /* : Int */;
val* var179 /* : nullable Object */;
long var181 /* : Int */;
val* var182 /* : nullable Object */;
val* var183 /* : Array[MType] */;
long var184 /* : Int */;
val* var185 /* : nullable Object */;
short int var187 /* : Bool */;
short int var188 /* : Bool */;
short int var189 /* : Bool */;
short int var_190 /* var : Bool */;
short int var191 /* : Bool */;
static val* varonce192;
val* var193 /* : String */;
char* var194 /* : NativeString */;
long var195 /* : Int */;
val* var196 /* : FlatString */;
short int var197 /* : Bool */;
val* var198 /* : MType */;
val* var199 /* : MType */;
short int var200 /* : Bool */;
int cltype201;
int idtype202;
const char* var_class_name;
static val* varonce204;
val* var205 /* : String */;
char* var206 /* : NativeString */;
long var207 /* : Int */;
val* var208 /* : FlatString */;
short int var209 /* : Bool */;
val* var210 /* : nullable CallSite */;
val* var_ikdef /* var ikdef: nullable CallSite */;
val* var211 /* : null */;
short int var212 /* : Bool */;
short int var213 /* : Bool */;
short int var215 /* : Bool */;
short int var217 /* : Bool */;
static val* varonce218;
val* var219 /* : String */;
char* var220 /* : NativeString */;
long var221 /* : Int */;
val* var222 /* : FlatString */;
static val* varonce223;
val* var224 /* : String */;
char* var225 /* : NativeString */;
long var226 /* : Int */;
val* var227 /* : FlatString */;
val* var228 /* : Array[Object] */;
long var229 /* : Int */;
val* var230 /* : NativeArray[Object] */;
val* var231 /* : String */;
static val* varonce233;
val* var234 /* : String */;
char* var235 /* : NativeString */;
long var236 /* : Int */;
val* var237 /* : FlatString */;
short int var238 /* : Bool */;
val* var239 /* : nullable CallSite */;
val* var_itemdef /* var itemdef: nullable CallSite */;
val* var240 /* : null */;
short int var241 /* : Bool */;
short int var242 /* : Bool */;
short int var244 /* : Bool */;
short int var246 /* : Bool */;
static val* varonce247;
val* var248 /* : String */;
char* var249 /* : NativeString */;
long var250 /* : Int */;
val* var251 /* : FlatString */;
static val* varonce252;
val* var253 /* : String */;
char* var254 /* : NativeString */;
long var255 /* : Int */;
val* var256 /* : FlatString */;
val* var257 /* : Array[Object] */;
long var258 /* : Int */;
val* var259 /* : NativeArray[Object] */;
val* var260 /* : String */;
static val* varonce262;
val* var263 /* : String */;
char* var264 /* : NativeString */;
long var265 /* : Int */;
val* var266 /* : FlatString */;
short int var267 /* : Bool */;
val* var268 /* : nullable CallSite */;
val* var_nextdef /* var nextdef: nullable CallSite */;
val* var269 /* : null */;
short int var270 /* : Bool */;
short int var271 /* : Bool */;
short int var273 /* : Bool */;
short int var275 /* : Bool */;
static val* varonce276;
val* var277 /* : String */;
char* var278 /* : NativeString */;
long var279 /* : Int */;
val* var280 /* : FlatString */;
static val* varonce281;
val* var282 /* : String */;
char* var283 /* : NativeString */;
long var284 /* : Int */;
val* var285 /* : FlatString */;
val* var286 /* : Array[Object] */;
long var287 /* : Int */;
val* var288 /* : NativeArray[Object] */;
val* var289 /* : String */;
static val* varonce291;
val* var292 /* : String */;
char* var293 /* : NativeString */;
long var294 /* : Int */;
val* var295 /* : FlatString */;
short int var296 /* : Bool */;
val* var297 /* : nullable CallSite */;
static val* varonce299;
val* var300 /* : String */;
char* var301 /* : NativeString */;
long var302 /* : Int */;
val* var303 /* : FlatString */;
short int var304 /* : Bool */;
val* var305 /* : nullable CallSite */;
val* var_keydef /* var keydef: nullable CallSite */;
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
val* var323 /* : Array[Object] */;
long var324 /* : Int */;
val* var325 /* : NativeArray[Object] */;
val* var326 /* : String */;
short int var328 /* : Bool */;
val* var329 /* : nullable Array[Variable] */;
val* var331 /* : nullable Array[Variable] */;
long var332 /* : Int */;
long var334 /* : Int */;
long var335 /* : Int */;
short int var336 /* : Bool */;
short int var338 /* : Bool */;
short int var_339 /* var : Bool */;
val* var340 /* : AExpr */;
val* var342 /* : AExpr */;
short int var343 /* : Bool */;
int cltype344;
int idtype345;
val* var346 /* : nullable Array[Variable] */;
val* var348 /* : nullable Array[Variable] */;
val* var349 /* : nullable Object */;
val* var_variable /* var variable: Variable */;
val* var350 /* : nullable MType */;
val* var352 /* : nullable MType */;
val* var_vtype /* var vtype: MType */;
val* var353 /* : AExpr */;
val* var355 /* : AExpr */;
short int var356 /* : Bool */;
int cltype357;
int idtype358;
static val* varonce359;
val* var360 /* : String */;
char* var361 /* : NativeString */;
long var362 /* : Int */;
val* var363 /* : FlatString */;
short int var364 /* : Bool */;
val* var365 /* : nullable CallSite */;
static val* varonce367;
val* var368 /* : String */;
char* var369 /* : NativeString */;
long var370 /* : Int */;
val* var371 /* : FlatString */;
short int var372 /* : Bool */;
val* var373 /* : nullable CallSite */;
static val* varonce375;
val* var376 /* : String */;
char* var377 /* : NativeString */;
long var378 /* : Int */;
val* var379 /* : FlatString */;
short int var380 /* : Bool */;
val* var381 /* : nullable CallSite */;
var_v = p0;
var_mtype = p1;
/* <var_mtype:MType> isa MNullType */
cltype = type_nit__MNullType.color;
idtype = type_nit__MNullType.id;
if(cltype >= var_mtype->type->table_size) {
var = 0;
} else {
var = var_mtype->type->type_table[cltype] == idtype;
}
if (var){
if (varonce) {
var1 = varonce;
} else {
var2 = "Type error: \'for\' cannot iterate over \'null\'";
var3 = 44;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
nit__typing___nit__typing__TypeVisitor___error(var_v, self, var1); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
if (varonce5) {
var6 = varonce5;
} else {
var7 = "Object";
var8 = 6;
var9 = standard___standard__NativeString___to_s_with_length(var7, var8);
var6 = var9;
varonce5 = var6;
}
{
var10 = nit__typing___nit__typing__TypeVisitor___get_mclass(var_v, self, var6);
}
var_objcla = var10;
var11 = NULL;
if (var_objcla == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_objcla,var11) on <var_objcla:nullable MClass> */
var_other = var11;
{
{ /* Inline kernel#Object#is_same_instance (var_objcla,var_other) on <var_objcla:nullable MClass(MClass)> */
var17 = var_objcla == var_other;
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
if (varonce18) {
var19 = varonce18;
} else {
var20 = "iterator";
var21 = 8;
var22 = standard___standard__NativeString___to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
{
{ /* Inline parser_nodes#AForExpr#n_expr (self) on <self:AForExpr> */
var25 = self->attrs[COLOR_nit__parser_nodes__AForExpr___n_expr].val; /* _n_expr on <self:AForExpr> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1738);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
/* <var23:AExpr> isa ASelfExpr */
cltype27 = type_nit__ASelfExpr.color;
idtype28 = type_nit__ASelfExpr.id;
if(cltype27 >= var23->type->table_size) {
var26 = 0;
} else {
var26 = var23->type->type_table[cltype27] == idtype28;
}
{
var29 = nit__typing___nit__typing__TypeVisitor___get_method(var_v, self, var_mtype, var19, var26);
}
var_itdef = var29;
var30 = NULL;
if (var_itdef == NULL) {
var31 = 1; /* is null */
} else {
var31 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_itdef,var30) on <var_itdef:nullable CallSite> */
var_other = var30;
{
{ /* Inline kernel#Object#is_same_instance (var_itdef,var_other) on <var_itdef:nullable CallSite(CallSite)> */
var36 = var_itdef == var_other;
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
if (varonce37) {
var38 = varonce37;
} else {
var39 = "Type Error: \'for\' expects a type providing \'iterator\' method, got \'";
var40 = 67;
var41 = standard___standard__NativeString___to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
if (varonce42) {
var43 = varonce42;
} else {
var44 = "\'.";
var45 = 2;
var46 = standard___standard__NativeString___to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
var47 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var47 = array_instance Array[Object] */
var48 = 3;
var49 = NEW_standard__NativeArray(var48, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var49)->values[0] = (val*) var38;
((struct instance_standard__NativeArray*)var49)->values[1] = (val*) var_mtype;
((struct instance_standard__NativeArray*)var49)->values[2] = (val*) var43;
{
((void (*)(val* self, val* p0, long p1))(var47->class->vft[COLOR_standard__array__Array__with_native]))(var47, var49, var48) /* with_native on <var47:Array[Object]>*/;
}
}
{
var50 = ((val* (*)(val* self))(var47->class->vft[COLOR_standard__string__Object__to_s]))(var47) /* to_s on <var47:Array[Object]>*/;
}
{
nit__typing___nit__typing__TypeVisitor___error(var_v, self, var50); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#AForExpr#method_iterator= (self,var_itdef) on <self:AForExpr> */
self->attrs[COLOR_nit__typing__AForExpr___method_iterator].val = var_itdef; /* _method_iterator on <self:AForExpr> */
RET_LABEL51:(void)0;
}
}
{
{ /* Inline typing#CallSite#msignature (var_itdef) on <var_itdef:nullable CallSite(CallSite)> */
var54 = var_itdef->attrs[COLOR_nit__typing__CallSite___msignature].val; /* _msignature on <var_itdef:nullable CallSite(CallSite)> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 494);
show_backtrace(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
{ /* Inline model#MSignature#return_mtype (var52) on <var52:MSignature> */
var57 = var52->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var52:MSignature> */
var55 = var57;
RET_LABEL56:(void)0;
}
}
var_ittype = var55;
var58 = NULL;
if (var_ittype == NULL) {
var59 = 1; /* is null */
} else {
var59 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ittype,var58) on <var_ittype:nullable MType> */
var_other = var58;
{
{ /* Inline kernel#Object#is_same_instance (var_ittype,var_other) on <var_ittype:nullable MType(MType)> */
var64 = var_ittype == var_other;
var62 = var64;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
}
var60 = var62;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
var59 = var60;
}
if (var59){
if (varonce65) {
var66 = varonce65;
} else {
var67 = "Type Error: \'for\' expects method \'iterator\' to return an \'Iterator\' or \'MapIterator\' type\'.";
var68 = 91;
var69 = standard___standard__NativeString___to_s_with_length(var67, var68);
var66 = var69;
varonce65 = var66;
}
{
nit__typing___nit__typing__TypeVisitor___error(var_v, self, var66); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
if (varonce70) {
var71 = varonce70;
} else {
var72 = "Iterator";
var73 = 8;
var74 = standard___standard__NativeString___to_s_with_length(var72, var73);
var71 = var74;
varonce70 = var71;
}
{
var75 = nit__typing___nit__typing__TypeVisitor___try_get_mclass(var_v, self, var71);
}
var_colit_cla = var75;
if (varonce76) {
var77 = varonce76;
} else {
var78 = "MapIterator";
var79 = 11;
var80 = standard___standard__NativeString___to_s_with_length(var78, var79);
var77 = var80;
varonce76 = var77;
}
{
var81 = nit__typing___nit__typing__TypeVisitor___try_get_mclass(var_v, self, var77);
}
var_mapit_cla = var81;
var82 = 0;
var_is_col = var82;
var83 = 0;
var_is_map = var83;
var85 = NULL;
if (var_colit_cla == NULL) {
var86 = 0; /* is null */
} else {
var86 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_colit_cla,var85) on <var_colit_cla:nullable MClass> */
var_other89 = var85;
{
var90 = ((short int (*)(val* self, val* p0))(var_colit_cla->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_colit_cla, var_other89) /* == on <var_colit_cla:nullable MClass(MClass)>*/;
}
var91 = !var90;
var87 = var91;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
var86 = var87;
}
var_ = var86;
if (var86){
var92 = NEW_standard__Array(&type_standard__Array__nit__MType);
var93 = 1;
{
standard___standard__Array___with_capacity(var92, var93); /* Direct call array#Array#with_capacity on <var92:Array[MType]>*/
}
var_94 = var92;
{
{ /* Inline model#MClass#mclass_type (var_objcla) on <var_objcla:nullable MClass(MClass)> */
var97 = var_objcla->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var_objcla:nullable MClass(MClass)> */
if (unlikely(var97 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var95 = var97;
RET_LABEL96:(void)0;
}
}
{
var98 = nit___nit__MType___as_nullable(var95);
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_94, var98); /* Direct call array#AbstractArray#push on <var_94:Array[MType]>*/
}
{
var99 = nit___nit__MClass___get_mtype(var_colit_cla, var_94);
}
{
var100 = nit__typing___nit__typing__TypeVisitor___is_subtype(var_v, var_ittype, var99);
}
var84 = var100;
} else {
var84 = var_;
}
if (var84){
{
{ /* Inline typing#TypeVisitor#mmodule (var_v) on <var_v:TypeVisitor> */
var103 = var_v->attrs[COLOR_nit__typing__TypeVisitor___mmodule].val; /* _mmodule on <var_v:TypeVisitor> */
if (unlikely(var103 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 36);
show_backtrace(1);
}
var101 = var103;
RET_LABEL102:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#anchor (var_v) on <var_v:TypeVisitor> */
var106 = var_v->attrs[COLOR_nit__typing__TypeVisitor___anchor].val; /* _anchor on <var_v:TypeVisitor> */
var104 = var106;
RET_LABEL105:(void)0;
}
}
{
var107 = nit___nit__MType___supertype_to(var_ittype, var101, var104, var_colit_cla);
}
var_coltype = var107;
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var110 = self->attrs[COLOR_nit__scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var108 = var110;
RET_LABEL109:(void)0;
}
}
var_variables = var108;
if (var_variables == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 974);
show_backtrace(1);
} else {
{ /* Inline array#AbstractArrayRead#length (var_variables) on <var_variables:nullable Array[Variable]> */
if (unlikely(var_variables == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__array, 24);
show_backtrace(1);
}
var113 = var_variables->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_variables:nullable Array[Variable]> */
var111 = var113;
RET_LABEL112:(void)0;
}
}
var114 = 1;
{
{ /* Inline kernel#Int#!= (var111,var114) on <var111:Int> */
var117 = var111 == var114;
var118 = !var117;
var115 = var118;
goto RET_LABEL116;
RET_LABEL116:(void)0;
}
}
if (var115){
if (varonce119) {
var120 = varonce119;
} else {
var121 = "Type Error: \'for\' expects only one variable when using \'Iterator\'.";
var122 = 66;
var123 = standard___standard__NativeString___to_s_with_length(var121, var122);
var120 = var123;
varonce119 = var120;
}
{
nit__typing___nit__typing__TypeVisitor___error(var_v, self, var120); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
} else {
if (var_variables == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 977);
show_backtrace(1);
} else {
var124 = standard___standard__SequenceRead___Collection__first(var_variables);
}
{
var125 = ((val* (*)(val* self))(var_coltype->class->vft[COLOR_nit__model__MClassType__arguments]))(var_coltype) /* arguments on <var_coltype:MClassType>*/;
}
{
var126 = standard___standard__SequenceRead___Collection__first(var125);
}
{
{ /* Inline typing#Variable#declared_type= (var124,var126) on <var124:nullable Object(Variable)> */
var124->attrs[COLOR_nit__typing__Variable___declared_type].val = var126; /* _declared_type on <var124:nullable Object(Variable)> */
RET_LABEL127:(void)0;
}
}
}
var128 = 1;
var_is_col = var128;
} else {
}
var130 = NULL;
if (var_mapit_cla == NULL) {
var131 = 0; /* is null */
} else {
var131 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mapit_cla,var130) on <var_mapit_cla:nullable MClass> */
var_other89 = var130;
{
var134 = ((short int (*)(val* self, val* p0))(var_mapit_cla->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mapit_cla, var_other89) /* == on <var_mapit_cla:nullable MClass(MClass)>*/;
}
var135 = !var134;
var132 = var135;
goto RET_LABEL133;
RET_LABEL133:(void)0;
}
var131 = var132;
}
var_136 = var131;
if (var131){
var137 = NEW_standard__Array(&type_standard__Array__nit__MType);
var138 = 2;
{
standard___standard__Array___with_capacity(var137, var138); /* Direct call array#Array#with_capacity on <var137:Array[MType]>*/
}
var_139 = var137;
{
{ /* Inline model#MClass#mclass_type (var_objcla) on <var_objcla:nullable MClass(MClass)> */
var142 = var_objcla->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var_objcla:nullable MClass(MClass)> */
if (unlikely(var142 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var140 = var142;
RET_LABEL141:(void)0;
}
}
{
var143 = nit___nit__MType___as_nullable(var140);
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_139, var143); /* Direct call array#AbstractArray#push on <var_139:Array[MType]>*/
}
{
{ /* Inline model#MClass#mclass_type (var_objcla) on <var_objcla:nullable MClass(MClass)> */
var146 = var_objcla->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var_objcla:nullable MClass(MClass)> */
if (unlikely(var146 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var144 = var146;
RET_LABEL145:(void)0;
}
}
{
var147 = nit___nit__MType___as_nullable(var144);
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_139, var147); /* Direct call array#AbstractArray#push on <var_139:Array[MType]>*/
}
{
var148 = nit___nit__MClass___get_mtype(var_mapit_cla, var_139);
}
{
var149 = nit__typing___nit__typing__TypeVisitor___is_subtype(var_v, var_ittype, var148);
}
var129 = var149;
} else {
var129 = var_136;
}
if (var129){
{
{ /* Inline typing#TypeVisitor#mmodule (var_v) on <var_v:TypeVisitor> */
var152 = var_v->attrs[COLOR_nit__typing__TypeVisitor___mmodule].val; /* _mmodule on <var_v:TypeVisitor> */
if (unlikely(var152 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 36);
show_backtrace(1);
}
var150 = var152;
RET_LABEL151:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#anchor (var_v) on <var_v:TypeVisitor> */
var155 = var_v->attrs[COLOR_nit__typing__TypeVisitor___anchor].val; /* _anchor on <var_v:TypeVisitor> */
var153 = var155;
RET_LABEL154:(void)0;
}
}
{
var156 = nit___nit__MType___supertype_to(var_ittype, var150, var153, var_mapit_cla);
}
var_coltype157 = var156;
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var160 = self->attrs[COLOR_nit__scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var158 = var160;
RET_LABEL159:(void)0;
}
}
var_variables161 = var158;
if (var_variables161 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 986);
show_backtrace(1);
} else {
{ /* Inline array#AbstractArrayRead#length (var_variables161) on <var_variables161:nullable Array[Variable]> */
if (unlikely(var_variables161 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__array, 24);
show_backtrace(1);
}
var164 = var_variables161->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_variables161:nullable Array[Variable]> */
var162 = var164;
RET_LABEL163:(void)0;
}
}
var165 = 2;
{
{ /* Inline kernel#Int#!= (var162,var165) on <var162:Int> */
var168 = var162 == var165;
var169 = !var168;
var166 = var169;
goto RET_LABEL167;
RET_LABEL167:(void)0;
}
}
if (var166){
if (varonce170) {
var171 = varonce170;
} else {
var172 = "Type Error: \'for\' expects two variables when using \'MapIterator\'.";
var173 = 65;
var174 = standard___standard__NativeString___to_s_with_length(var172, var173);
var171 = var174;
varonce170 = var171;
}
{
nit__typing___nit__typing__TypeVisitor___error(var_v, self, var171); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
} else {
var175 = 0;
if (var_variables161 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 989);
show_backtrace(1);
} else {
var176 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_variables161, var175);
}
{
var177 = ((val* (*)(val* self))(var_coltype157->class->vft[COLOR_nit__model__MClassType__arguments]))(var_coltype157) /* arguments on <var_coltype157:MClassType>*/;
}
var178 = 0;
{
var179 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var177, var178);
}
{
{ /* Inline typing#Variable#declared_type= (var176,var179) on <var176:nullable Object(Variable)> */
var176->attrs[COLOR_nit__typing__Variable___declared_type].val = var179; /* _declared_type on <var176:nullable Object(Variable)> */
RET_LABEL180:(void)0;
}
}
var181 = 1;
if (var_variables161 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 990);
show_backtrace(1);
} else {
var182 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_variables161, var181);
}
{
var183 = ((val* (*)(val* self))(var_coltype157->class->vft[COLOR_nit__model__MClassType__arguments]))(var_coltype157) /* arguments on <var_coltype157:MClassType>*/;
}
var184 = 1;
{
var185 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var183, var184);
}
{
{ /* Inline typing#Variable#declared_type= (var182,var185) on <var182:nullable Object(Variable)> */
var182->attrs[COLOR_nit__typing__Variable___declared_type].val = var185; /* _declared_type on <var182:nullable Object(Variable)> */
RET_LABEL186:(void)0;
}
}
}
var187 = 1;
var_is_map = var187;
} else {
}
var189 = !var_is_col;
var_190 = var189;
if (var189){
var191 = !var_is_map;
var188 = var191;
} else {
var188 = var_190;
}
if (var188){
if (varonce192) {
var193 = varonce192;
} else {
var194 = "Type Error: \'for\' expects method \'iterator\' to return an \'Iterator\' or \'MapIterator\' type\'.";
var195 = 91;
var196 = standard___standard__NativeString___to_s_with_length(var194, var195);
var193 = var196;
varonce192 = var193;
}
{
nit__typing___nit__typing__TypeVisitor___error(var_v, self, var193); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
var197 = ((short int (*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
}
if (var197){
{
var198 = nit__typing___nit__typing__TypeVisitor___anchor_to(var_v, var_mtype);
}
var_mtype = var198;
} else {
}
{
var199 = ((val* (*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__as_notnullable]))(var_mtype) /* as_notnullable on <var_mtype:MType>*/;
}
var_mtype = var199;
/* <var_mtype:MType> isa MClassType */
cltype201 = type_nit__MClassType.color;
idtype202 = type_nit__MClassType.id;
if(cltype201 >= var_mtype->type->table_size) {
var200 = 0;
} else {
var200 = var_mtype->type->type_table[cltype201] == idtype202;
}
if (unlikely(!var200)) {
var_class_name = var_mtype == NULL ? "null" : var_mtype->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1004);
show_backtrace(1);
}
{
{ /* Inline typing#AForExpr#coltype= (self,var_mtype) on <self:AForExpr> */
self->attrs[COLOR_nit__typing__AForExpr___coltype].val = var_mtype; /* _coltype on <self:AForExpr> */
RET_LABEL203:(void)0;
}
}
if (varonce204) {
var205 = varonce204;
} else {
var206 = "is_ok";
var207 = 5;
var208 = standard___standard__NativeString___to_s_with_length(var206, var207);
var205 = var208;
varonce204 = var205;
}
var209 = 0;
{
var210 = nit__typing___nit__typing__TypeVisitor___get_method(var_v, self, var_ittype, var205, var209);
}
var_ikdef = var210;
var211 = NULL;
if (var_ikdef == NULL) {
var212 = 1; /* is null */
} else {
var212 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ikdef,var211) on <var_ikdef:nullable CallSite> */
var_other = var211;
{
{ /* Inline kernel#Object#is_same_instance (var_ikdef,var_other) on <var_ikdef:nullable CallSite(CallSite)> */
var217 = var_ikdef == var_other;
var215 = var217;
goto RET_LABEL216;
RET_LABEL216:(void)0;
}
}
var213 = var215;
goto RET_LABEL214;
RET_LABEL214:(void)0;
}
var212 = var213;
}
if (var212){
if (varonce218) {
var219 = varonce218;
} else {
var220 = "Type Error: \'for\' expects a method \'is_ok\' in \'Iterator\' type ";
var221 = 62;
var222 = standard___standard__NativeString___to_s_with_length(var220, var221);
var219 = var222;
varonce218 = var219;
}
if (varonce223) {
var224 = varonce223;
} else {
var225 = ".";
var226 = 1;
var227 = standard___standard__NativeString___to_s_with_length(var225, var226);
var224 = var227;
varonce223 = var224;
}
var228 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var228 = array_instance Array[Object] */
var229 = 3;
var230 = NEW_standard__NativeArray(var229, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var230)->values[0] = (val*) var219;
((struct instance_standard__NativeArray*)var230)->values[1] = (val*) var_ittype;
((struct instance_standard__NativeArray*)var230)->values[2] = (val*) var224;
{
((void (*)(val* self, val* p0, long p1))(var228->class->vft[COLOR_standard__array__Array__with_native]))(var228, var230, var229) /* with_native on <var228:Array[Object]>*/;
}
}
{
var231 = ((val* (*)(val* self))(var228->class->vft[COLOR_standard__string__Object__to_s]))(var228) /* to_s on <var228:Array[Object]>*/;
}
{
nit__typing___nit__typing__TypeVisitor___error(var_v, self, var231); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#AForExpr#method_is_ok= (self,var_ikdef) on <self:AForExpr> */
self->attrs[COLOR_nit__typing__AForExpr___method_is_ok].val = var_ikdef; /* _method_is_ok on <self:AForExpr> */
RET_LABEL232:(void)0;
}
}
if (varonce233) {
var234 = varonce233;
} else {
var235 = "item";
var236 = 4;
var237 = standard___standard__NativeString___to_s_with_length(var235, var236);
var234 = var237;
varonce233 = var234;
}
var238 = 0;
{
var239 = nit__typing___nit__typing__TypeVisitor___get_method(var_v, self, var_ittype, var234, var238);
}
var_itemdef = var239;
var240 = NULL;
if (var_itemdef == NULL) {
var241 = 1; /* is null */
} else {
var241 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_itemdef,var240) on <var_itemdef:nullable CallSite> */
var_other = var240;
{
{ /* Inline kernel#Object#is_same_instance (var_itemdef,var_other) on <var_itemdef:nullable CallSite(CallSite)> */
var246 = var_itemdef == var_other;
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
if (var241){
if (varonce247) {
var248 = varonce247;
} else {
var249 = "Type Error: \'for\' expects a method \'item\' in \'Iterator\' type ";
var250 = 61;
var251 = standard___standard__NativeString___to_s_with_length(var249, var250);
var248 = var251;
varonce247 = var248;
}
if (varonce252) {
var253 = varonce252;
} else {
var254 = ".";
var255 = 1;
var256 = standard___standard__NativeString___to_s_with_length(var254, var255);
var253 = var256;
varonce252 = var253;
}
var257 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var257 = array_instance Array[Object] */
var258 = 3;
var259 = NEW_standard__NativeArray(var258, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var259)->values[0] = (val*) var248;
((struct instance_standard__NativeArray*)var259)->values[1] = (val*) var_ittype;
((struct instance_standard__NativeArray*)var259)->values[2] = (val*) var253;
{
((void (*)(val* self, val* p0, long p1))(var257->class->vft[COLOR_standard__array__Array__with_native]))(var257, var259, var258) /* with_native on <var257:Array[Object]>*/;
}
}
{
var260 = ((val* (*)(val* self))(var257->class->vft[COLOR_standard__string__Object__to_s]))(var257) /* to_s on <var257:Array[Object]>*/;
}
{
nit__typing___nit__typing__TypeVisitor___error(var_v, self, var260); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#AForExpr#method_item= (self,var_itemdef) on <self:AForExpr> */
self->attrs[COLOR_nit__typing__AForExpr___method_item].val = var_itemdef; /* _method_item on <self:AForExpr> */
RET_LABEL261:(void)0;
}
}
if (varonce262) {
var263 = varonce262;
} else {
var264 = "next";
var265 = 4;
var266 = standard___standard__NativeString___to_s_with_length(var264, var265);
var263 = var266;
varonce262 = var263;
}
var267 = 0;
{
var268 = nit__typing___nit__typing__TypeVisitor___get_method(var_v, self, var_ittype, var263, var267);
}
var_nextdef = var268;
var269 = NULL;
if (var_nextdef == NULL) {
var270 = 1; /* is null */
} else {
var270 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nextdef,var269) on <var_nextdef:nullable CallSite> */
var_other = var269;
{
{ /* Inline kernel#Object#is_same_instance (var_nextdef,var_other) on <var_nextdef:nullable CallSite(CallSite)> */
var275 = var_nextdef == var_other;
var273 = var275;
goto RET_LABEL274;
RET_LABEL274:(void)0;
}
}
var271 = var273;
goto RET_LABEL272;
RET_LABEL272:(void)0;
}
var270 = var271;
}
if (var270){
if (varonce276) {
var277 = varonce276;
} else {
var278 = "Type Error: \'for\' expects a method \'next\' in \'Iterator\' type ";
var279 = 61;
var280 = standard___standard__NativeString___to_s_with_length(var278, var279);
var277 = var280;
varonce276 = var277;
}
if (varonce281) {
var282 = varonce281;
} else {
var283 = ".";
var284 = 1;
var285 = standard___standard__NativeString___to_s_with_length(var283, var284);
var282 = var285;
varonce281 = var282;
}
var286 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var286 = array_instance Array[Object] */
var287 = 3;
var288 = NEW_standard__NativeArray(var287, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var288)->values[0] = (val*) var277;
((struct instance_standard__NativeArray*)var288)->values[1] = (val*) var_ittype;
((struct instance_standard__NativeArray*)var288)->values[2] = (val*) var282;
{
((void (*)(val* self, val* p0, long p1))(var286->class->vft[COLOR_standard__array__Array__with_native]))(var286, var288, var287) /* with_native on <var286:Array[Object]>*/;
}
}
{
var289 = ((val* (*)(val* self))(var286->class->vft[COLOR_standard__string__Object__to_s]))(var286) /* to_s on <var286:Array[Object]>*/;
}
{
nit__typing___nit__typing__TypeVisitor___error(var_v, self, var289); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#AForExpr#method_next= (self,var_nextdef) on <self:AForExpr> */
self->attrs[COLOR_nit__typing__AForExpr___method_next].val = var_nextdef; /* _method_next on <self:AForExpr> */
RET_LABEL290:(void)0;
}
}
if (varonce291) {
var292 = varonce291;
} else {
var293 = "finish";
var294 = 6;
var295 = standard___standard__NativeString___to_s_with_length(var293, var294);
var292 = var295;
varonce291 = var292;
}
var296 = 0;
{
var297 = nit__typing___nit__typing__TypeVisitor___try_get_method(var_v, self, var_ittype, var292, var296);
}
{
{ /* Inline typing#AForExpr#method_finish= (self,var297) on <self:AForExpr> */
self->attrs[COLOR_nit__typing__AForExpr___method_finish].val = var297; /* _method_finish on <self:AForExpr> */
RET_LABEL298:(void)0;
}
}
if (var_is_map){
if (varonce299) {
var300 = varonce299;
} else {
var301 = "key";
var302 = 3;
var303 = standard___standard__NativeString___to_s_with_length(var301, var302);
var300 = var303;
varonce299 = var300;
}
var304 = 0;
{
var305 = nit__typing___nit__typing__TypeVisitor___get_method(var_v, self, var_ittype, var300, var304);
}
var_keydef = var305;
var306 = NULL;
if (var_keydef == NULL) {
var307 = 1; /* is null */
} else {
var307 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_keydef,var306) on <var_keydef:nullable CallSite> */
var_other = var306;
{
{ /* Inline kernel#Object#is_same_instance (var_keydef,var_other) on <var_keydef:nullable CallSite(CallSite)> */
var312 = var_keydef == var_other;
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
var315 = "Type Error: \'for\' expects a method \'key\' in \'Iterator\' type ";
var316 = 60;
var317 = standard___standard__NativeString___to_s_with_length(var315, var316);
var314 = var317;
varonce313 = var314;
}
if (varonce318) {
var319 = varonce318;
} else {
var320 = ".";
var321 = 1;
var322 = standard___standard__NativeString___to_s_with_length(var320, var321);
var319 = var322;
varonce318 = var319;
}
var323 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var323 = array_instance Array[Object] */
var324 = 3;
var325 = NEW_standard__NativeArray(var324, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var325)->values[0] = (val*) var314;
((struct instance_standard__NativeArray*)var325)->values[1] = (val*) var_ittype;
((struct instance_standard__NativeArray*)var325)->values[2] = (val*) var319;
{
((void (*)(val* self, val* p0, long p1))(var323->class->vft[COLOR_standard__array__Array__with_native]))(var323, var325, var324) /* with_native on <var323:Array[Object]>*/;
}
}
{
var326 = ((val* (*)(val* self))(var323->class->vft[COLOR_standard__string__Object__to_s]))(var323) /* to_s on <var323:Array[Object]>*/;
}
{
nit__typing___nit__typing__TypeVisitor___error(var_v, self, var326); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#AForExpr#method_key= (self,var_keydef) on <self:AForExpr> */
self->attrs[COLOR_nit__typing__AForExpr___method_key].val = var_keydef; /* _method_key on <self:AForExpr> */
RET_LABEL327:(void)0;
}
}
} else {
}
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var331 = self->attrs[COLOR_nit__scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var329 = var331;
RET_LABEL330:(void)0;
}
}
if (var329 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1039);
show_backtrace(1);
} else {
{ /* Inline array#AbstractArrayRead#length (var329) on <var329:nullable Array[Variable]> */
if (unlikely(var329 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__array, 24);
show_backtrace(1);
}
var334 = var329->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var329:nullable Array[Variable]> */
var332 = var334;
RET_LABEL333:(void)0;
}
}
var335 = 1;
{
{ /* Inline kernel#Int#== (var332,var335) on <var332:Int> */
var338 = var332 == var335;
var336 = var338;
goto RET_LABEL337;
RET_LABEL337:(void)0;
}
}
var_339 = var336;
if (var336){
{
{ /* Inline parser_nodes#AForExpr#n_expr (self) on <self:AForExpr> */
var342 = self->attrs[COLOR_nit__parser_nodes__AForExpr___n_expr].val; /* _n_expr on <self:AForExpr> */
if (unlikely(var342 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1738);
show_backtrace(1);
}
var340 = var342;
RET_LABEL341:(void)0;
}
}
/* <var340:AExpr> isa ARangeExpr */
cltype344 = type_nit__ARangeExpr.color;
idtype345 = type_nit__ARangeExpr.id;
if(cltype344 >= var340->type->table_size) {
var343 = 0;
} else {
var343 = var340->type->type_table[cltype344] == idtype345;
}
var328 = var343;
} else {
var328 = var_339;
}
if (var328){
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var348 = self->attrs[COLOR_nit__scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var346 = var348;
RET_LABEL347:(void)0;
}
}
if (var346 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1040);
show_backtrace(1);
} else {
var349 = standard___standard__SequenceRead___Collection__first(var346);
}
var_variable = var349;
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:Variable> */
var352 = var_variable->attrs[COLOR_nit__typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var350 = var352;
RET_LABEL351:(void)0;
}
}
if (unlikely(var350 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1041);
show_backtrace(1);
}
var_vtype = var350;
{
{ /* Inline parser_nodes#AForExpr#n_expr (self) on <self:AForExpr> */
var355 = self->attrs[COLOR_nit__parser_nodes__AForExpr___n_expr].val; /* _n_expr on <self:AForExpr> */
if (unlikely(var355 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1738);
show_backtrace(1);
}
var353 = var355;
RET_LABEL354:(void)0;
}
}
/* <var353:AExpr> isa AOrangeExpr */
cltype357 = type_nit__AOrangeExpr.color;
idtype358 = type_nit__AOrangeExpr.id;
if(cltype357 >= var353->type->table_size) {
var356 = 0;
} else {
var356 = var353->type->type_table[cltype357] == idtype358;
}
if (var356){
if (varonce359) {
var360 = varonce359;
} else {
var361 = "<";
var362 = 1;
var363 = standard___standard__NativeString___to_s_with_length(var361, var362);
var360 = var363;
varonce359 = var360;
}
var364 = 0;
{
var365 = nit__typing___nit__typing__TypeVisitor___get_method(var_v, self, var_vtype, var360, var364);
}
{
{ /* Inline typing#AForExpr#method_lt= (self,var365) on <self:AForExpr> */
self->attrs[COLOR_nit__typing__AForExpr___method_lt].val = var365; /* _method_lt on <self:AForExpr> */
RET_LABEL366:(void)0;
}
}
} else {
if (varonce367) {
var368 = varonce367;
} else {
var369 = "<=";
var370 = 2;
var371 = standard___standard__NativeString___to_s_with_length(var369, var370);
var368 = var371;
varonce367 = var368;
}
var372 = 0;
{
var373 = nit__typing___nit__typing__TypeVisitor___get_method(var_v, self, var_vtype, var368, var372);
}
{
{ /* Inline typing#AForExpr#method_lt= (self,var373) on <self:AForExpr> */
self->attrs[COLOR_nit__typing__AForExpr___method_lt].val = var373; /* _method_lt on <self:AForExpr> */
RET_LABEL374:(void)0;
}
}
}
if (varonce375) {
var376 = varonce375;
} else {
var377 = "successor";
var378 = 9;
var379 = standard___standard__NativeString___to_s_with_length(var377, var378);
var376 = var379;
varonce375 = var376;
}
var380 = 0;
{
var381 = nit__typing___nit__typing__TypeVisitor___get_method(var_v, self, var_vtype, var376, var380);
}
{
{ /* Inline typing#AForExpr#method_successor= (self,var381) on <self:AForExpr> */
self->attrs[COLOR_nit__typing__AForExpr___method_successor].val = var381; /* _method_successor on <self:AForExpr> */
RET_LABEL382:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method typing#AForExpr#accept_typing for (self: AForExpr, TypeVisitor) */
void nit__typing___AForExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : nullable AExpr */;
val* var13 /* : nullable AExpr */;
val* var14 /* : nullable AExpr */;
val* var16 /* : nullable AExpr */;
val* var17 /* : nullable MType */;
short int var19 /* : Bool */;
var_v = p0;
{
{ /* Inline parser_nodes#AForExpr#n_expr (self) on <self:AForExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__AForExpr___n_expr].val; /* _n_expr on <self:AForExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1738);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit__typing___nit__typing__TypeVisitor___visit_expr(var_v, var);
}
var_mtype = var3;
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
goto RET_LABEL;
} else {
}
{
nit__typing___AForExpr___do_type_iterator(self, var_v, var_mtype); /* Direct call typing#AForExpr#do_type_iterator on <self:AForExpr>*/
}
{
{ /* Inline parser_nodes#AForExpr#n_block (self) on <self:AForExpr> */
var13 = self->attrs[COLOR_nit__parser_nodes__AForExpr___n_block].val; /* _n_block on <self:AForExpr> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
nit__typing___nit__typing__TypeVisitor___visit_stmt(var_v, var11); /* Direct call typing#TypeVisitor#visit_stmt on <var_v:TypeVisitor>*/
}
{
{ /* Inline parser_nodes#AForExpr#n_block (self) on <self:AForExpr> */
var16 = self->attrs[COLOR_nit__parser_nodes__AForExpr___n_block].val; /* _n_block on <self:AForExpr> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
if (var14 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1061);
show_backtrace(1);
} else {
var17 = ((val* (*)(val* self))(var14->class->vft[COLOR_nit__typing__AExpr__mtype]))(var14) /* mtype on <var14:nullable AExpr>*/;
}
{
{ /* Inline typing#AExpr#mtype= (self,var17) on <self:AForExpr> */
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var17; /* _mtype on <self:AForExpr> */
RET_LABEL18:(void)0;
}
}
var19 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var19) on <self:AForExpr> */
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var19; /* _is_typed on <self:AForExpr> */
RET_LABEL20:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AAssertExpr#accept_typing for (self: AAssertExpr, TypeVisitor) */
void nit__typing___AAssertExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var4 /* : nullable AExpr */;
val* var6 /* : nullable AExpr */;
short int var7 /* : Bool */;
var_v = p0;
{
{ /* Inline parser_nodes#AAssertExpr#n_expr (self) on <self:AAssertExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_expr].val; /* _n_expr on <self:AAssertExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1758);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit__typing___nit__typing__TypeVisitor___visit_expr_bool(var_v, var);
}
{
{ /* Inline parser_nodes#AAssertExpr#n_else (self) on <self:AAssertExpr> */
var6 = self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_else].val; /* _n_else on <self:AAssertExpr> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
nit__typing___nit__typing__TypeVisitor___visit_stmt(var_v, var4); /* Direct call typing#TypeVisitor#visit_stmt on <var_v:TypeVisitor>*/
}
var7 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var7) on <self:AAssertExpr> */
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var7; /* _is_typed on <self:AAssertExpr> */
RET_LABEL8:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AOrExpr#accept_typing for (self: AOrExpr, TypeVisitor) */
void nit__typing___AOrExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var4 /* : AExpr */;
val* var6 /* : AExpr */;
val* var7 /* : nullable MType */;
val* var8 /* : nullable MType */;
var_v = p0;
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr (self) on <self:AOrExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AOrExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1823);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit__typing___nit__typing__TypeVisitor___visit_expr_bool(var_v, var);
}
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr2 (self) on <self:AOrExpr> */
var6 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AOrExpr> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1826);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nit__typing___nit__typing__TypeVisitor___visit_expr_bool(var_v, var4);
}
{
var8 = nit__typing___nit__typing__TypeVisitor___type_bool(var_v, self);
}
{
{ /* Inline typing#AExpr#mtype= (self,var8) on <self:AOrExpr> */
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var8; /* _mtype on <self:AOrExpr> */
RET_LABEL9:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AImpliesExpr#accept_typing for (self: AImpliesExpr, TypeVisitor) */
void nit__typing___AImpliesExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var4 /* : AExpr */;
val* var6 /* : AExpr */;
val* var7 /* : nullable MType */;
val* var8 /* : nullable MType */;
var_v = p0;
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr (self) on <self:AImpliesExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AImpliesExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1823);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit__typing___nit__typing__TypeVisitor___visit_expr_bool(var_v, var);
}
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr2 (self) on <self:AImpliesExpr> */
var6 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AImpliesExpr> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1826);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nit__typing___nit__typing__TypeVisitor___visit_expr_bool(var_v, var4);
}
{
var8 = nit__typing___nit__typing__TypeVisitor___type_bool(var_v, self);
}
{
{ /* Inline typing#AExpr#mtype= (self,var8) on <self:AImpliesExpr> */
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var8; /* _mtype on <self:AImpliesExpr> */
RET_LABEL9:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AAndExpr#accept_typing for (self: AAndExpr, TypeVisitor) */
void nit__typing___AAndExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var4 /* : AExpr */;
val* var6 /* : AExpr */;
val* var7 /* : nullable MType */;
val* var8 /* : nullable MType */;
var_v = p0;
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr (self) on <self:AAndExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AAndExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1823);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit__typing___nit__typing__TypeVisitor___visit_expr_bool(var_v, var);
}
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr2 (self) on <self:AAndExpr> */
var6 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AAndExpr> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1826);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nit__typing___nit__typing__TypeVisitor___visit_expr_bool(var_v, var4);
}
{
var8 = nit__typing___nit__typing__TypeVisitor___type_bool(var_v, self);
}
{
{ /* Inline typing#AExpr#mtype= (self,var8) on <self:AAndExpr> */
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var8; /* _mtype on <self:AAndExpr> */
RET_LABEL9:(void)0;
}
}
RET_LABEL:;
}
/* method typing#ANotExpr#accept_typing for (self: ANotExpr, TypeVisitor) */
void nit__typing___ANotExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var4 /* : nullable MType */;
var_v = p0;
{
{ /* Inline parser_nodes#ANotExpr#n_expr (self) on <self:ANotExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__ANotExpr___n_expr].val; /* _n_expr on <self:ANotExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1857);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit__typing___nit__typing__TypeVisitor___visit_expr_bool(var_v, var);
}
{
var4 = nit__typing___nit__typing__TypeVisitor___type_bool(var_v, self);
}
{
{ /* Inline typing#AExpr#mtype= (self,var4) on <self:ANotExpr> */
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var4; /* _mtype on <self:ANotExpr> */
RET_LABEL5:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AOrElseExpr#accept_typing for (self: AOrElseExpr, TypeVisitor) */
void nit__typing___AOrElseExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var_t1 /* var t1: nullable MType */;
val* var4 /* : AExpr */;
val* var6 /* : AExpr */;
val* var7 /* : nullable MType */;
val* var_t2 /* var t2: nullable MType */;
short int var8 /* : Bool */;
val* var9 /* : null */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var_ /* var : Bool */;
val* var16 /* : null */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
val* var23 /* : MType */;
val* var24 /* : Array[MType] */;
long var25 /* : Int */;
val* var_26 /* var : Array[MType] */;
val* var27 /* : nullable MType */;
val* var_t /* var t: nullable MType */;
val* var28 /* : null */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
val* var35 /* : MModule */;
val* var37 /* : MModule */;
val* var38 /* : MClassType */;
short int var39 /* : Bool */;
int cltype;
int idtype;
val* var40 /* : MType */;
var_v = p0;
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr (self) on <self:AOrElseExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AOrElseExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1823);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit__typing___nit__typing__TypeVisitor___visit_expr(var_v, var);
}
var_t1 = var3;
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr2 (self) on <self:AOrElseExpr> */
var6 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AOrElseExpr> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1826);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nit__typing___nit__typing__TypeVisitor___visit_expr(var_v, var4);
}
var_t2 = var7;
var9 = NULL;
if (var_t1 == NULL) {
var10 = 1; /* is null */
} else {
var10 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t1,var9) on <var_t1:nullable MType> */
var_other = var9;
{
{ /* Inline kernel#Object#is_same_instance (var_t1,var_other) on <var_t1:nullable MType(MType)> */
var15 = var_t1 == var_other;
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
var_ = var10;
if (var10){
var8 = var_;
} else {
var16 = NULL;
if (var_t2 == NULL) {
var17 = 1; /* is null */
} else {
var17 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t2,var16) on <var_t2:nullable MType> */
var_other = var16;
{
{ /* Inline kernel#Object#is_same_instance (var_t2,var_other) on <var_t2:nullable MType(MType)> */
var22 = var_t2 == var_other;
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
var8 = var17;
}
if (var8){
goto RET_LABEL;
} else {
}
{
var23 = ((val* (*)(val* self))(var_t1->class->vft[COLOR_nit__model__MType__as_notnullable]))(var_t1) /* as_notnullable on <var_t1:nullable MType(MType)>*/;
}
var_t1 = var23;
var24 = NEW_standard__Array(&type_standard__Array__nit__MType);
var25 = 2;
{
standard___standard__Array___with_capacity(var24, var25); /* Direct call array#Array#with_capacity on <var24:Array[MType]>*/
}
var_26 = var24;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_26, var_t1); /* Direct call array#AbstractArray#push on <var_26:Array[MType]>*/
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_26, var_t2); /* Direct call array#AbstractArray#push on <var_26:Array[MType]>*/
}
{
var27 = nit__typing___nit__typing__TypeVisitor___merge_types(var_v, self, var_26);
}
var_t = var27;
var28 = NULL;
if (var_t == NULL) {
var29 = 1; /* is null */
} else {
var29 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t,var28) on <var_t:nullable MType> */
var_other = var28;
{
{ /* Inline kernel#Object#is_same_instance (var_t,var_other) on <var_t:nullable MType(MType)> */
var34 = var_t == var_other;
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
var29 = var30;
}
if (var29){
{
{ /* Inline typing#TypeVisitor#mmodule (var_v) on <var_v:TypeVisitor> */
var37 = var_v->attrs[COLOR_nit__typing__TypeVisitor___mmodule].val; /* _mmodule on <var_v:TypeVisitor> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 36);
show_backtrace(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
var38 = nit__model___MModule___object_type(var35);
}
var_t = var38;
/* <var_t2:nullable MType(MType)> isa MNullableType */
cltype = type_nit__MNullableType.color;
idtype = type_nit__MNullableType.id;
if(cltype >= var_t2->type->table_size) {
var39 = 0;
} else {
var39 = var_t2->type->type_table[cltype] == idtype;
}
if (var39){
{
var40 = nit___nit__MType___as_nullable(var_t);
}
var_t = var40;
} else {
}
} else {
}
{
{ /* Inline typing#AExpr#mtype= (self,var_t) on <self:AOrElseExpr> */
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var_t; /* _mtype on <self:AOrElseExpr> */
RET_LABEL41:(void)0;
}
}
RET_LABEL:;
}
/* method typing#ATrueExpr#accept_typing for (self: ATrueExpr, TypeVisitor) */
void nit__typing___ATrueExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MType */;
var_v = p0;
{
var = nit__typing___nit__typing__TypeVisitor___type_bool(var_v, self);
}
{
{ /* Inline typing#AExpr#mtype= (self,var) on <self:ATrueExpr> */
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var; /* _mtype on <self:ATrueExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AFalseExpr#accept_typing for (self: AFalseExpr, TypeVisitor) */
void nit__typing___AFalseExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MType */;
var_v = p0;
{
var = nit__typing___nit__typing__TypeVisitor___type_bool(var_v, self);
}
{
{ /* Inline typing#AExpr#mtype= (self,var) on <self:AFalseExpr> */
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var; /* _mtype on <self:AFalseExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AIntExpr#accept_typing for (self: AIntExpr, TypeVisitor) */
void nit__typing___AIntExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : FlatString */;
val* var4 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
val* var5 /* : null */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : MClassType */;
val* var14 /* : MClassType */;
var_v = p0;
if (varonce) {
var = varonce;
} else {
var1 = "Int";
var2 = 3;
var3 = standard___standard__NativeString___to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
var4 = nit__typing___nit__typing__TypeVisitor___get_mclass(var_v, self, var);
}
var_mclass = var4;
var5 = NULL;
if (var_mclass == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mclass,var5) on <var_mclass:nullable MClass> */
var_other = var5;
{
{ /* Inline kernel#Object#is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
var11 = var_mclass == var_other;
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
{ /* Inline model#MClass#mclass_type (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var14 = var_mclass->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var12) on <self:AIntExpr> */
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var12; /* _mtype on <self:AIntExpr> */
RET_LABEL15:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AFloatExpr#accept_typing for (self: AFloatExpr, TypeVisitor) */
void nit__typing___AFloatExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : FlatString */;
val* var4 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
val* var5 /* : null */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : MClassType */;
val* var14 /* : MClassType */;
var_v = p0;
if (varonce) {
var = varonce;
} else {
var1 = "Float";
var2 = 5;
var3 = standard___standard__NativeString___to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
var4 = nit__typing___nit__typing__TypeVisitor___get_mclass(var_v, self, var);
}
var_mclass = var4;
var5 = NULL;
if (var_mclass == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mclass,var5) on <var_mclass:nullable MClass> */
var_other = var5;
{
{ /* Inline kernel#Object#is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
var11 = var_mclass == var_other;
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
{ /* Inline model#MClass#mclass_type (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var14 = var_mclass->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var12) on <self:AFloatExpr> */
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var12; /* _mtype on <self:AFloatExpr> */
RET_LABEL15:(void)0;
}
}
RET_LABEL:;
}
/* method typing#ACharExpr#accept_typing for (self: ACharExpr, TypeVisitor) */
void nit__typing___ACharExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : FlatString */;
val* var4 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
val* var5 /* : null */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : MClassType */;
val* var14 /* : MClassType */;
var_v = p0;
if (varonce) {
var = varonce;
} else {
var1 = "Char";
var2 = 4;
var3 = standard___standard__NativeString___to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
var4 = nit__typing___nit__typing__TypeVisitor___get_mclass(var_v, self, var);
}
var_mclass = var4;
var5 = NULL;
if (var_mclass == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mclass,var5) on <var_mclass:nullable MClass> */
var_other = var5;
{
{ /* Inline kernel#Object#is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
var11 = var_mclass == var_other;
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
{ /* Inline model#MClass#mclass_type (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var14 = var_mclass->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var12) on <self:ACharExpr> */
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var12; /* _mtype on <self:ACharExpr> */
RET_LABEL15:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AStringFormExpr#accept_typing for (self: AStringFormExpr, TypeVisitor) */
void nit__typing___AStringFormExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : FlatString */;
val* var4 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
val* var5 /* : null */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : MClassType */;
val* var14 /* : MClassType */;
var_v = p0;
if (varonce) {
var = varonce;
} else {
var1 = "String";
var2 = 6;
var3 = standard___standard__NativeString___to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
var4 = nit__typing___nit__typing__TypeVisitor___get_mclass(var_v, self, var);
}
var_mclass = var4;
var5 = NULL;
if (var_mclass == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mclass,var5) on <var_mclass:nullable MClass> */
var_other = var5;
{
{ /* Inline kernel#Object#is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
var11 = var_mclass == var_other;
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
{ /* Inline model#MClass#mclass_type (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var14 = var_mclass->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var12) on <self:AStringFormExpr> */
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var12; /* _mtype on <self:AStringFormExpr> */
RET_LABEL15:(void)0;
}
}
RET_LABEL:;
}
/* method typing#ASuperstringExpr#accept_typing for (self: ASuperstringExpr, TypeVisitor) */
void nit__typing___ASuperstringExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : FlatString */;
val* var4 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
val* var5 /* : null */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : MClassType */;
val* var14 /* : MClassType */;
val* var16 /* : ANodes[AExpr] */;
val* var18 /* : ANodes[AExpr] */;
val* var_ /* var : ANodes[AExpr] */;
val* var19 /* : Iterator[ANode] */;
val* var_20 /* var : Iterator[AExpr] */;
short int var21 /* : Bool */;
val* var22 /* : nullable Object */;
val* var_nexpr /* var nexpr: AExpr */;
val* var23 /* : MModule */;
val* var25 /* : MModule */;
val* var26 /* : MClassType */;
val* var27 /* : nullable MType */;
var_v = p0;
if (varonce) {
var = varonce;
} else {
var1 = "String";
var2 = 6;
var3 = standard___standard__NativeString___to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
var4 = nit__typing___nit__typing__TypeVisitor___get_mclass(var_v, self, var);
}
var_mclass = var4;
var5 = NULL;
if (var_mclass == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mclass,var5) on <var_mclass:nullable MClass> */
var_other = var5;
{
{ /* Inline kernel#Object#is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
var11 = var_mclass == var_other;
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
{ /* Inline model#MClass#mclass_type (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var14 = var_mclass->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var12) on <self:ASuperstringExpr> */
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var12; /* _mtype on <self:ASuperstringExpr> */
RET_LABEL15:(void)0;
}
}
{
{ /* Inline parser_nodes#ASuperstringExpr#n_exprs (self) on <self:ASuperstringExpr> */
var18 = self->attrs[COLOR_nit__parser_nodes__ASuperstringExpr___n_exprs].val; /* _n_exprs on <self:ASuperstringExpr> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2277);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_ = var16;
{
var19 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_);
}
var_20 = var19;
for(;;) {
{
var21 = ((short int (*)(val* self))(var_20->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_20) /* is_ok on <var_20:Iterator[AExpr]>*/;
}
if (var21){
{
var22 = ((val* (*)(val* self))(var_20->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_20) /* item on <var_20:Iterator[AExpr]>*/;
}
var_nexpr = var22;
{
{ /* Inline typing#TypeVisitor#mmodule (var_v) on <var_v:TypeVisitor> */
var25 = var_v->attrs[COLOR_nit__typing__TypeVisitor___mmodule].val; /* _mmodule on <var_v:TypeVisitor> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 36);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = nit__model___MModule___object_type(var23);
}
{
var27 = nit__typing___nit__typing__TypeVisitor___visit_expr_subtype(var_v, var_nexpr, var26);
}
{
((void (*)(val* self))(var_20->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_20) /* next on <var_20:Iterator[AExpr]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_20) on <var_20:Iterator[AExpr]> */
RET_LABEL28:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AArrayExpr#with_capacity_callsite for (self: AArrayExpr): nullable CallSite */
val* nit__typing___AArrayExpr___with_capacity_callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nit__typing__AArrayExpr___with_capacity_callsite].val; /* _with_capacity_callsite on <self:AArrayExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AArrayExpr#with_capacity_callsite= for (self: AArrayExpr, nullable CallSite) */
void nit__typing___AArrayExpr___with_capacity_callsite_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__AArrayExpr___with_capacity_callsite].val = p0; /* _with_capacity_callsite on <self:AArrayExpr> */
RET_LABEL:;
}
/* method typing#AArrayExpr#push_callsite for (self: AArrayExpr): nullable CallSite */
val* nit__typing___AArrayExpr___push_callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nit__typing__AArrayExpr___push_callsite].val; /* _push_callsite on <self:AArrayExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AArrayExpr#push_callsite= for (self: AArrayExpr, nullable CallSite) */
void nit__typing___AArrayExpr___push_callsite_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__AArrayExpr___push_callsite].val = p0; /* _push_callsite on <self:AArrayExpr> */
RET_LABEL:;
}
/* method typing#AArrayExpr#element_mtype for (self: AArrayExpr): nullable MType */
val* nit__typing___AArrayExpr___element_mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nit__typing__AArrayExpr___element_mtype].val; /* _element_mtype on <self:AArrayExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AArrayExpr#element_mtype= for (self: AArrayExpr, nullable MType) */
void nit__typing___AArrayExpr___element_mtype_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__AArrayExpr___element_mtype].val = p0; /* _element_mtype on <self:AArrayExpr> */
RET_LABEL:;
}
/* method typing#AArrayExpr#set_comprehension for (self: AArrayExpr, nullable AExpr) */
void nit__typing___AArrayExpr___set_comprehension(val* self, val* p0) {
val* var_n /* var n: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var8 /* : nullable AExpr */;
val* var10 /* : nullable AExpr */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : nullable AExpr */;
val* var16 /* : nullable AExpr */;
val* var17 /* : nullable AExpr */;
val* var19 /* : nullable AExpr */;
var_n = p0;
var = NULL;
if (var_n == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_n,var) on <var_n:nullable AExpr> */
var_other = var;
{
{ /* Inline kernel#Object#is_same_instance (var_n,var_other) on <var_n:nullable AExpr(AExpr)> */
var6 = var_n == var_other;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
goto RET_LABEL;
} else {
/* <var_n:nullable AExpr(AExpr)> isa AForExpr */
cltype = type_nit__AForExpr.color;
idtype = type_nit__AForExpr.id;
if(cltype >= var_n->type->table_size) {
var7 = 0;
} else {
var7 = var_n->type->type_table[cltype] == idtype;
}
if (var7){
{
{ /* Inline parser_nodes#AForExpr#n_block (var_n) on <var_n:nullable AExpr(AForExpr)> */
var10 = var_n->attrs[COLOR_nit__parser_nodes__AForExpr___n_block].val; /* _n_block on <var_n:nullable AExpr(AForExpr)> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
nit__typing___AArrayExpr___set_comprehension(self, var8); /* Direct call typing#AArrayExpr#set_comprehension on <self:AArrayExpr>*/
}
} else {
/* <var_n:nullable AExpr(AExpr)> isa AIfExpr */
cltype12 = type_nit__AIfExpr.color;
idtype13 = type_nit__AIfExpr.id;
if(cltype12 >= var_n->type->table_size) {
var11 = 0;
} else {
var11 = var_n->type->type_table[cltype12] == idtype13;
}
if (var11){
{
{ /* Inline parser_nodes#AIfExpr#n_then (var_n) on <var_n:nullable AExpr(AIfExpr)> */
var16 = var_n->attrs[COLOR_nit__parser_nodes__AIfExpr___n_then].val; /* _n_then on <var_n:nullable AExpr(AIfExpr)> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
nit__typing___AArrayExpr___set_comprehension(self, var14); /* Direct call typing#AArrayExpr#set_comprehension on <self:AArrayExpr>*/
}
{
{ /* Inline parser_nodes#AIfExpr#n_else (var_n) on <var_n:nullable AExpr(AIfExpr)> */
var19 = var_n->attrs[COLOR_nit__parser_nodes__AIfExpr___n_else].val; /* _n_else on <var_n:nullable AExpr(AIfExpr)> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
nit__typing___AArrayExpr___set_comprehension(self, var17); /* Direct call typing#AArrayExpr#set_comprehension on <self:AArrayExpr>*/
}
} else {
{
{ /* Inline typing#AExpr#comprehension= (var_n,self) on <var_n:nullable AExpr(AExpr)> */
var_n->attrs[COLOR_nit__typing__AExpr___comprehension].val = self; /* _comprehension on <var_n:nullable AExpr(AExpr)> */
RET_LABEL20:(void)0;
}
}
}
}
}
RET_LABEL:;
}
/* method typing#AArrayExpr#accept_typing for (self: AArrayExpr, TypeVisitor) */
void nit__typing___AArrayExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : null */;
val* var_mtype /* var mtype: nullable MType */;
val* var1 /* : nullable AType */;
val* var3 /* : nullable AType */;
val* var_ntype /* var ntype: nullable AType */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable MType */;
val* var11 /* : null */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other15 /* var other: nullable Object */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : Array[nullable MType] */;
val* var_mtypes /* var mtypes: Array[nullable MType] */;
short int var20 /* : Bool */;
short int var_useless /* var useless: Bool */;
val* var21 /* : ANodes[AExpr] */;
val* var23 /* : ANodes[AExpr] */;
val* var_ /* var : ANodes[AExpr] */;
val* var24 /* : Iterator[ANode] */;
val* var_25 /* var : Iterator[AExpr] */;
short int var26 /* : Bool */;
val* var27 /* : nullable Object */;
val* var_e /* var e: AExpr */;
val* var28 /* : nullable MType */;
val* var_t /* var t: nullable MType */;
val* var29 /* : null */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
val* var36 /* : null */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
val* var42 /* : nullable MType */;
val* var43 /* : null */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
val* var57 /* : null */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
short int var61 /* : Bool */;
short int var63 /* : Bool */;
val* var64 /* : nullable MType */;
short int var65 /* : Bool */;
val* var66 /* : null */;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
short int var70 /* : Bool */;
short int var72 /* : Bool */;
short int var_73 /* var : Bool */;
short int var74 /* : Bool */;
int cltype;
int idtype;
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
val* var84 /* : String */;
val* var85 /* : Array[Object] */;
long var86 /* : Int */;
val* var87 /* : NativeArray[Object] */;
val* var88 /* : String */;
val* var89 /* : null */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
short int var93 /* : Bool */;
short int var94 /* : Bool */;
val* var95 /* : ModelBuilder */;
val* var97 /* : ModelBuilder */;
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
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : NativeString */;
long var111 /* : Int */;
val* var112 /* : FlatString */;
val* var113 /* : Array[Object] */;
long var114 /* : Int */;
val* var115 /* : NativeArray[Object] */;
val* var116 /* : String */;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : NativeString */;
long var121 /* : Int */;
val* var122 /* : FlatString */;
val* var123 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
val* var124 /* : null */;
short int var125 /* : Bool */;
short int var126 /* : Bool */;
short int var128 /* : Bool */;
short int var130 /* : Bool */;
val* var131 /* : Array[MType] */;
long var132 /* : Int */;
val* var_133 /* var : Array[MType] */;
val* var134 /* : MClassType */;
val* var_array_mtype /* var array_mtype: MClassType */;
static val* varonce135;
val* var136 /* : String */;
char* var137 /* : NativeString */;
long var138 /* : Int */;
val* var139 /* : FlatString */;
short int var140 /* : Bool */;
val* var141 /* : nullable CallSite */;
static val* varonce143;
val* var144 /* : String */;
char* var145 /* : NativeString */;
long var146 /* : Int */;
val* var147 /* : FlatString */;
short int var148 /* : Bool */;
val* var149 /* : nullable CallSite */;
var_v = p0;
var = NULL;
var_mtype = var;
{
{ /* Inline parser_nodes#AArrayExpr#n_type (self) on <self:AArrayExpr> */
var3 = self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_type].val; /* _n_type on <self:AArrayExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_ntype = var1;
var4 = NULL;
if (var_ntype == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ntype,var4) on <var_ntype:nullable AType> */
var_other = var4;
{
var8 = ((short int (*)(val* self, val* p0))(var_ntype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ntype, var_other) /* == on <var_ntype:nullable AType(AType)>*/;
}
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
{
var10 = nit__typing___nit__typing__TypeVisitor___resolve_mtype(var_v, var_ntype);
}
var_mtype = var10;
var11 = NULL;
if (var_mtype == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var11) on <var_mtype:nullable MType> */
var_other15 = var11;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other15) on <var_mtype:nullable MType(MType)> */
var18 = var_mtype == var_other15;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (var12){
goto RET_LABEL;
} else {
}
} else {
}
var19 = NEW_standard__Array(&type_standard__Array__nullable__nit__MType);
{
standard___standard__Array___standard__kernel__Object__init(var19); /* Direct call array#Array#init on <var19:Array[nullable MType]>*/
}
var_mtypes = var19;
var20 = 0;
var_useless = var20;
{
{ /* Inline parser_nodes#AArrayExpr#n_exprs (self) on <self:AArrayExpr> */
var23 = self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_exprs].val; /* _n_exprs on <self:AArrayExpr> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2160);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
var_ = var21;
{
var24 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_);
}
var_25 = var24;
for(;;) {
{
var26 = ((short int (*)(val* self))(var_25->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_25) /* is_ok on <var_25:Iterator[AExpr]>*/;
}
if (var26){
{
var27 = ((val* (*)(val* self))(var_25->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_25) /* item on <var_25:Iterator[AExpr]>*/;
}
var_e = var27;
{
var28 = nit__typing___nit__typing__TypeVisitor___visit_expr(var_v, var_e);
}
var_t = var28;
var29 = NULL;
if (var_t == NULL) {
var30 = 1; /* is null */
} else {
var30 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t,var29) on <var_t:nullable MType> */
var_other15 = var29;
{
{ /* Inline kernel#Object#is_same_instance (var_t,var_other15) on <var_t:nullable MType(MType)> */
var35 = var_t == var_other15;
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
{
nit__typing___AArrayExpr___set_comprehension(self, var_e); /* Direct call typing#AArrayExpr#set_comprehension on <self:AArrayExpr>*/
}
var36 = NULL;
if (var_mtype == NULL) {
var37 = 0; /* is null */
} else {
var37 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mtype,var36) on <var_mtype:nullable MType> */
var_other = var36;
{
var40 = ((short int (*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype, var_other) /* == on <var_mtype:nullable MType(MType)>*/;
}
var41 = !var40;
var38 = var41;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
var37 = var38;
}
if (var37){
{
var42 = nit__typing___nit__typing__TypeVisitor___check_subtype(var_v, var_e, var_t, var_mtype);
}
var43 = NULL;
if (var42 == NULL) {
var44 = 1; /* is null */
} else {
var44 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var42,var43) on <var42:nullable MType> */
var_other15 = var43;
{
{ /* Inline kernel#Object#is_same_instance (var42,var_other15) on <var42:nullable MType(MType)> */
var49 = var42 == var_other15;
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
{ /* Inline kernel#Object#== (var_t,var_mtype) on <var_t:nullable MType(MType)> */
var_other15 = var_mtype;
{
{ /* Inline kernel#Object#is_same_instance (var_t,var_other15) on <var_t:nullable MType(MType)> */
var54 = var_t == var_other15;
var52 = var54;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
var50 = var52;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
if (var50){
var55 = 1;
var_useless = var55;
} else {
}
} else {
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_mtypes, var_t); /* Direct call array#Array#add on <var_mtypes:Array[nullable MType]>*/
}
}
{
((void (*)(val* self))(var_25->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_25) /* next on <var_25:Iterator[AExpr]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_25) on <var_25:Iterator[AExpr]> */
RET_LABEL56:(void)0;
}
}
var57 = NULL;
if (var_mtype == NULL) {
var58 = 1; /* is null */
} else {
var58 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var57) on <var_mtype:nullable MType> */
var_other15 = var57;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other15) on <var_mtype:nullable MType(MType)> */
var63 = var_mtype == var_other15;
var61 = var63;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
var59 = var61;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
var58 = var59;
}
if (var58){
{
var64 = nit__typing___nit__typing__TypeVisitor___merge_types(var_v, self, var_mtypes);
}
var_mtype = var64;
} else {
}
var66 = NULL;
if (var_mtype == NULL) {
var67 = 1; /* is null */
} else {
var67 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var66) on <var_mtype:nullable MType> */
var_other15 = var66;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other15) on <var_mtype:nullable MType(MType)> */
var72 = var_mtype == var_other15;
var70 = var72;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
var68 = var70;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
var67 = var68;
}
var_73 = var67;
if (var67){
var65 = var_73;
} else {
/* <var_mtype:nullable MType(MType)> isa MNullType */
cltype = type_nit__MNullType.color;
idtype = type_nit__MNullType.id;
if(cltype >= var_mtype->type->table_size) {
var74 = 0;
} else {
var74 = var_mtype->type->type_table[cltype] == idtype;
}
var65 = var74;
}
if (var65){
if (varonce) {
var75 = varonce;
} else {
var76 = "Type Error: ambiguous array type ";
var77 = 33;
var78 = standard___standard__NativeString___to_s_with_length(var76, var77);
var75 = var78;
varonce = var75;
}
if (varonce79) {
var80 = varonce79;
} else {
var81 = " ";
var82 = 1;
var83 = standard___standard__NativeString___to_s_with_length(var81, var82);
var80 = var83;
varonce79 = var80;
}
{
var84 = standard__string___Collection___join(var_mtypes, var80);
}
var85 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var85 = array_instance Array[Object] */
var86 = 2;
var87 = NEW_standard__NativeArray(var86, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var87)->values[0] = (val*) var75;
((struct instance_standard__NativeArray*)var87)->values[1] = (val*) var84;
{
((void (*)(val* self, val* p0, long p1))(var85->class->vft[COLOR_standard__array__Array__with_native]))(var85, var87, var86) /* with_native on <var85:Array[Object]>*/;
}
}
{
var88 = ((val* (*)(val* self))(var85->class->vft[COLOR_standard__string__Object__to_s]))(var85) /* to_s on <var85:Array[Object]>*/;
}
{
nit__typing___nit__typing__TypeVisitor___error(var_v, self, var88); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
if (var_useless){
var89 = NULL;
if (var_ntype == NULL) {
var90 = 0; /* is null */
} else {
var90 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ntype,var89) on <var_ntype:nullable AType> */
var_other = var89;
{
var93 = ((short int (*)(val* self, val* p0))(var_ntype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ntype, var_other) /* == on <var_ntype:nullable AType(AType)>*/;
}
var94 = !var93;
var91 = var94;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
var90 = var91;
}
if (unlikely(!var90)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1255);
show_backtrace(1);
}
{
{ /* Inline typing#TypeVisitor#modelbuilder (var_v) on <var_v:TypeVisitor> */
var97 = var_v->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <var_v:TypeVisitor> */
if (unlikely(var97 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
show_backtrace(1);
}
var95 = var97;
RET_LABEL96:(void)0;
}
}
if (varonce98) {
var99 = varonce98;
} else {
var100 = "useless-type";
var101 = 12;
var102 = standard___standard__NativeString___to_s_with_length(var100, var101);
var99 = var102;
varonce98 = var99;
}
if (varonce103) {
var104 = varonce103;
} else {
var105 = "Warning: useless type declaration `";
var106 = 35;
var107 = standard___standard__NativeString___to_s_with_length(var105, var106);
var104 = var107;
varonce103 = var104;
}
if (varonce108) {
var109 = varonce108;
} else {
var110 = "` in literal Array since it can be inferred from the elements type.";
var111 = 67;
var112 = standard___standard__NativeString___to_s_with_length(var110, var111);
var109 = var112;
varonce108 = var109;
}
var113 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var113 = array_instance Array[Object] */
var114 = 3;
var115 = NEW_standard__NativeArray(var114, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var115)->values[0] = (val*) var104;
((struct instance_standard__NativeArray*)var115)->values[1] = (val*) var_mtype;
((struct instance_standard__NativeArray*)var115)->values[2] = (val*) var109;
{
((void (*)(val* self, val* p0, long p1))(var113->class->vft[COLOR_standard__array__Array__with_native]))(var113, var115, var114) /* with_native on <var113:Array[Object]>*/;
}
}
{
var116 = ((val* (*)(val* self))(var113->class->vft[COLOR_standard__string__Object__to_s]))(var113) /* to_s on <var113:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___warning(var95, var_ntype, var99, var116); /* Direct call modelbuilder_base#ModelBuilder#warning on <var95:ModelBuilder>*/
}
} else {
}
{
{ /* Inline typing#AArrayExpr#element_mtype= (self,var_mtype) on <self:AArrayExpr> */
self->attrs[COLOR_nit__typing__AArrayExpr___element_mtype].val = var_mtype; /* _element_mtype on <self:AArrayExpr> */
RET_LABEL117:(void)0;
}
}
if (varonce118) {
var119 = varonce118;
} else {
var120 = "Array";
var121 = 5;
var122 = standard___standard__NativeString___to_s_with_length(var120, var121);
var119 = var122;
varonce118 = var119;
}
{
var123 = nit__typing___nit__typing__TypeVisitor___get_mclass(var_v, self, var119);
}
var_mclass = var123;
var124 = NULL;
if (var_mclass == NULL) {
var125 = 1; /* is null */
} else {
var125 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mclass,var124) on <var_mclass:nullable MClass> */
var_other15 = var124;
{
{ /* Inline kernel#Object#is_same_instance (var_mclass,var_other15) on <var_mclass:nullable MClass(MClass)> */
var130 = var_mclass == var_other15;
var128 = var130;
goto RET_LABEL129;
RET_LABEL129:(void)0;
}
}
var126 = var128;
goto RET_LABEL127;
RET_LABEL127:(void)0;
}
var125 = var126;
}
if (var125){
goto RET_LABEL;
} else {
}
var131 = NEW_standard__Array(&type_standard__Array__nit__MType);
var132 = 1;
{
standard___standard__Array___with_capacity(var131, var132); /* Direct call array#Array#with_capacity on <var131:Array[MType]>*/
}
var_133 = var131;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_133, var_mtype); /* Direct call array#AbstractArray#push on <var_133:Array[MType]>*/
}
{
var134 = nit___nit__MClass___get_mtype(var_mclass, var_133);
}
var_array_mtype = var134;
if (varonce135) {
var136 = varonce135;
} else {
var137 = "with_capacity";
var138 = 13;
var139 = standard___standard__NativeString___to_s_with_length(var137, var138);
var136 = var139;
varonce135 = var136;
}
var140 = 0;
{
var141 = nit__typing___nit__typing__TypeVisitor___get_method(var_v, self, var_array_mtype, var136, var140);
}
{
{ /* Inline typing#AArrayExpr#with_capacity_callsite= (self,var141) on <self:AArrayExpr> */
self->attrs[COLOR_nit__typing__AArrayExpr___with_capacity_callsite].val = var141; /* _with_capacity_callsite on <self:AArrayExpr> */
RET_LABEL142:(void)0;
}
}
if (varonce143) {
var144 = varonce143;
} else {
var145 = "push";
var146 = 4;
var147 = standard___standard__NativeString___to_s_with_length(var145, var146);
var144 = var147;
varonce143 = var144;
}
var148 = 0;
{
var149 = nit__typing___nit__typing__TypeVisitor___get_method(var_v, self, var_array_mtype, var144, var148);
}
{
{ /* Inline typing#AArrayExpr#push_callsite= (self,var149) on <self:AArrayExpr> */
self->attrs[COLOR_nit__typing__AArrayExpr___push_callsite].val = var149; /* _push_callsite on <self:AArrayExpr> */
RET_LABEL150:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var_array_mtype) on <self:AArrayExpr> */
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var_array_mtype; /* _mtype on <self:AArrayExpr> */
RET_LABEL151:(void)0;
}
}
RET_LABEL:;
}
/* method typing#ARangeExpr#init_callsite for (self: ARangeExpr): nullable CallSite */
val* nit__typing___ARangeExpr___init_callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nit__typing__ARangeExpr___init_callsite].val; /* _init_callsite on <self:ARangeExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ARangeExpr#init_callsite= for (self: ARangeExpr, nullable CallSite) */
void nit__typing___ARangeExpr___init_callsite_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__ARangeExpr___init_callsite].val = p0; /* _init_callsite on <self:ARangeExpr> */
RET_LABEL:;
}
/* method typing#ARangeExpr#accept_typing for (self: ARangeExpr, TypeVisitor) */
void nit__typing___ARangeExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : FlatString */;
val* var4 /* : nullable MClass */;
val* var_discrete_class /* var discrete_class: nullable MClass */;
val* var5 /* : null */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : MClassDef */;
val* var14 /* : MClassDef */;
val* var15 /* : MClassType */;
val* var17 /* : MClassType */;
val* var_discrete_type /* var discrete_type: MClassType */;
val* var18 /* : AExpr */;
val* var20 /* : AExpr */;
val* var21 /* : nullable MType */;
val* var_t1 /* var t1: nullable MType */;
val* var22 /* : AExpr */;
val* var24 /* : AExpr */;
val* var25 /* : nullable MType */;
val* var_t2 /* var t2: nullable MType */;
short int var26 /* : Bool */;
val* var27 /* : null */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var_ /* var : Bool */;
val* var34 /* : null */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
long var44 /* : Int */;
val* var45 /* : FlatString */;
val* var46 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
val* var47 /* : null */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
val* var55 /* : Array[MType] */;
long var56 /* : Int */;
val* var_57 /* var : Array[MType] */;
val* var58 /* : MClassType */;
val* var_mtype /* var mtype: nullable Object */;
short int var59 /* : Bool */;
val* var60 /* : Array[MType] */;
long var61 /* : Int */;
val* var_62 /* var : Array[MType] */;
val* var63 /* : MClassType */;
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
short int var79 /* : Bool */;
int cltype;
int idtype;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
long var83 /* : Int */;
val* var84 /* : FlatString */;
short int var85 /* : Bool */;
val* var86 /* : nullable CallSite */;
val* var_callsite /* var callsite: nullable Object */;
short int var87 /* : Bool */;
int cltype88;
int idtype89;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : NativeString */;
long var93 /* : Int */;
val* var94 /* : FlatString */;
short int var95 /* : Bool */;
val* var96 /* : nullable CallSite */;
var_v = p0;
if (varonce) {
var = varonce;
} else {
var1 = "Discrete";
var2 = 8;
var3 = standard___standard__NativeString___to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
var4 = nit__typing___nit__typing__TypeVisitor___get_mclass(var_v, self, var);
}
var_discrete_class = var4;
var5 = NULL;
if (var_discrete_class == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_discrete_class,var5) on <var_discrete_class:nullable MClass> */
var_other = var5;
{
{ /* Inline kernel#Object#is_same_instance (var_discrete_class,var_other) on <var_discrete_class:nullable MClass(MClass)> */
var11 = var_discrete_class == var_other;
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
{ /* Inline model#MClass#intro (var_discrete_class) on <var_discrete_class:nullable MClass(MClass)> */
var14 = var_discrete_class->attrs[COLOR_nit__model__MClass___intro].val; /* _intro on <var_discrete_class:nullable MClass(MClass)> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 423);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var12) on <var12:MClassDef> */
var17 = var12->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var12:MClassDef> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_discrete_type = var15;
{
{ /* Inline parser_nodes#ARangeExpr#n_expr (self) on <self:ARangeExpr> */
var20 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:ARangeExpr> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2124);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = nit__typing___nit__typing__TypeVisitor___visit_expr_subtype(var_v, var18, var_discrete_type);
}
var_t1 = var21;
{
{ /* Inline parser_nodes#ARangeExpr#n_expr2 (self) on <self:ARangeExpr> */
var24 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:ARangeExpr> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2127);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
var25 = nit__typing___nit__typing__TypeVisitor___visit_expr_subtype(var_v, var22, var_discrete_type);
}
var_t2 = var25;
var27 = NULL;
if (var_t1 == NULL) {
var28 = 1; /* is null */
} else {
var28 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t1,var27) on <var_t1:nullable MType> */
var_other = var27;
{
{ /* Inline kernel#Object#is_same_instance (var_t1,var_other) on <var_t1:nullable MType(MType)> */
var33 = var_t1 == var_other;
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
var_ = var28;
if (var28){
var26 = var_;
} else {
var34 = NULL;
if (var_t2 == NULL) {
var35 = 1; /* is null */
} else {
var35 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t2,var34) on <var_t2:nullable MType> */
var_other = var34;
{
{ /* Inline kernel#Object#is_same_instance (var_t2,var_other) on <var_t2:nullable MType(MType)> */
var40 = var_t2 == var_other;
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
var35 = var36;
}
var26 = var35;
}
if (var26){
goto RET_LABEL;
} else {
}
if (varonce41) {
var42 = varonce41;
} else {
var43 = "Range";
var44 = 5;
var45 = standard___standard__NativeString___to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
{
var46 = nit__typing___nit__typing__TypeVisitor___get_mclass(var_v, self, var42);
}
var_mclass = var46;
var47 = NULL;
if (var_mclass == NULL) {
var48 = 1; /* is null */
} else {
var48 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mclass,var47) on <var_mclass:nullable MClass> */
var_other = var47;
{
{ /* Inline kernel#Object#is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
var53 = var_mclass == var_other;
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
var54 = nit__typing___nit__typing__TypeVisitor___is_subtype(var_v, var_t1, var_t2);
}
if (var54){
var55 = NEW_standard__Array(&type_standard__Array__nit__MType);
var56 = 1;
{
standard___standard__Array___with_capacity(var55, var56); /* Direct call array#Array#with_capacity on <var55:Array[MType]>*/
}
var_57 = var55;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_57, var_t2); /* Direct call array#AbstractArray#push on <var_57:Array[MType]>*/
}
{
var58 = nit___nit__MClass___get_mtype(var_mclass, var_57);
}
var_mtype = var58;
} else {
{
var59 = nit__typing___nit__typing__TypeVisitor___is_subtype(var_v, var_t2, var_t1);
}
if (var59){
var60 = NEW_standard__Array(&type_standard__Array__nit__MType);
var61 = 1;
{
standard___standard__Array___with_capacity(var60, var61); /* Direct call array#Array#with_capacity on <var60:Array[MType]>*/
}
var_62 = var60;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_62, var_t1); /* Direct call array#AbstractArray#push on <var_62:Array[MType]>*/
}
{
var63 = nit___nit__MClass___get_mtype(var_mclass, var_62);
}
var_mtype = var63;
} else {
if (varonce64) {
var65 = varonce64;
} else {
var66 = "Type Error: Cannot create range: ";
var67 = 33;
var68 = standard___standard__NativeString___to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
if (varonce69) {
var70 = varonce69;
} else {
var71 = " vs ";
var72 = 4;
var73 = standard___standard__NativeString___to_s_with_length(var71, var72);
var70 = var73;
varonce69 = var70;
}
var74 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var74 = array_instance Array[Object] */
var75 = 4;
var76 = NEW_standard__NativeArray(var75, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var76)->values[0] = (val*) var65;
((struct instance_standard__NativeArray*)var76)->values[1] = (val*) var_t1;
((struct instance_standard__NativeArray*)var76)->values[2] = (val*) var70;
((struct instance_standard__NativeArray*)var76)->values[3] = (val*) var_t2;
{
((void (*)(val* self, val* p0, long p1))(var74->class->vft[COLOR_standard__array__Array__with_native]))(var74, var76, var75) /* with_native on <var74:Array[Object]>*/;
}
}
{
var77 = ((val* (*)(val* self))(var74->class->vft[COLOR_standard__string__Object__to_s]))(var74) /* to_s on <var74:Array[Object]>*/;
}
{
nit__typing___nit__typing__TypeVisitor___error(var_v, self, var77); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var_mtype) on <self:ARangeExpr> */
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var_mtype; /* _mtype on <self:ARangeExpr> */
RET_LABEL78:(void)0;
}
}
/* <self:ARangeExpr> isa ACrangeExpr */
cltype = type_nit__ACrangeExpr.color;
idtype = type_nit__ACrangeExpr.id;
if(cltype >= self->type->table_size) {
var79 = 0;
} else {
var79 = self->type->type_table[cltype] == idtype;
}
if (var79){
if (varonce80) {
var81 = varonce80;
} else {
var82 = "init";
var83 = 4;
var84 = standard___standard__NativeString___to_s_with_length(var82, var83);
var81 = var84;
varonce80 = var81;
}
var85 = 0;
{
var86 = nit__typing___nit__typing__TypeVisitor___get_method(var_v, self, var_mtype, var81, var85);
}
var_callsite = var86;
} else {
/* <self:ARangeExpr> isa AOrangeExpr */
cltype88 = type_nit__AOrangeExpr.color;
idtype89 = type_nit__AOrangeExpr.id;
if(cltype88 >= self->type->table_size) {
var87 = 0;
} else {
var87 = self->type->type_table[cltype88] == idtype89;
}
if (var87){
if (varonce90) {
var91 = varonce90;
} else {
var92 = "without_last";
var93 = 12;
var94 = standard___standard__NativeString___to_s_with_length(var92, var93);
var91 = var94;
varonce90 = var91;
}
var95 = 0;
{
var96 = nit__typing___nit__typing__TypeVisitor___get_method(var_v, self, var_mtype, var91, var95);
}
var_callsite = var96;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1304);
show_backtrace(1);
}
}
{
{ /* Inline typing#ARangeExpr#init_callsite= (self,var_callsite) on <self:ARangeExpr> */
self->attrs[COLOR_nit__typing__ARangeExpr___init_callsite].val = var_callsite; /* _init_callsite on <self:ARangeExpr> */
RET_LABEL97:(void)0;
}
}
RET_LABEL:;
}
/* method typing#ANullExpr#accept_typing for (self: ANullExpr, TypeVisitor) */
void nit__typing___ANullExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : MModule */;
val* var2 /* : MModule */;
val* var3 /* : Model */;
val* var5 /* : Model */;
val* var6 /* : MNullType */;
val* var8 /* : MNullType */;
var_v = p0;
{
{ /* Inline typing#TypeVisitor#mmodule (var_v) on <var_v:TypeVisitor> */
var2 = var_v->attrs[COLOR_nit__typing__TypeVisitor___mmodule].val; /* _mmodule on <var_v:TypeVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 36);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline mmodule#MModule#model (var) on <var:MModule> */
var5 = var->attrs[COLOR_nit__mmodule__MModule___model].val; /* _model on <var:MModule> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 73);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model#Model#null_type (var3) on <var3:Model> */
var8 = var3->attrs[COLOR_nit__model__Model___null_type].val; /* _null_type on <var3:Model> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _null_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 94);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var6) on <self:ANullExpr> */
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var6; /* _mtype on <self:ANullExpr> */
RET_LABEL9:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AIsaExpr#cast_type for (self: AIsaExpr): nullable MType */
val* nit__typing___AIsaExpr___cast_type(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nit__typing__AIsaExpr___cast_type].val; /* _cast_type on <self:AIsaExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AIsaExpr#cast_type= for (self: AIsaExpr, nullable MType) */
void nit__typing___AIsaExpr___cast_type_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__AIsaExpr___cast_type].val = p0; /* _cast_type on <self:AIsaExpr> */
RET_LABEL:;
}
/* method typing#AIsaExpr#accept_typing for (self: AIsaExpr, TypeVisitor) */
void nit__typing___AIsaExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : AType */;
val* var5 /* : AType */;
val* var6 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var8 /* : AExpr */;
val* var10 /* : AExpr */;
val* var11 /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
val* var12 /* : null */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : nullable FlowContext */;
val* var20 /* : nullable FlowContext */;
val* var21 /* : FlowContext */;
val* var23 /* : FlowContext */;
val* var24 /* : nullable MType */;
var_v = p0;
{
{ /* Inline parser_nodes#AIsaExpr#n_expr (self) on <self:AIsaExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__AIsaExpr___n_expr].val; /* _n_expr on <self:AIsaExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1905);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline parser_nodes#AIsaExpr#n_type (self) on <self:AIsaExpr> */
var5 = self->attrs[COLOR_nit__parser_nodes__AIsaExpr___n_type].val; /* _n_type on <self:AIsaExpr> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1908);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = nit__typing___nit__typing__TypeVisitor___visit_expr_cast(var_v, self, var, var3);
}
var_mtype = var6;
{
{ /* Inline typing#AIsaExpr#cast_type= (self,var_mtype) on <self:AIsaExpr> */
self->attrs[COLOR_nit__typing__AIsaExpr___cast_type].val = var_mtype; /* _cast_type on <self:AIsaExpr> */
RET_LABEL7:(void)0;
}
}
{
{ /* Inline parser_nodes#AIsaExpr#n_expr (self) on <self:AIsaExpr> */
var10 = self->attrs[COLOR_nit__parser_nodes__AIsaExpr___n_expr].val; /* _n_expr on <self:AIsaExpr> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1905);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = ((val* (*)(val* self))(var8->class->vft[COLOR_nit__typing__AExpr__its_variable]))(var8) /* its_variable on <var8:AExpr>*/;
}
var_variable = var11;
var12 = NULL;
if (var_variable == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_variable,var12) on <var_variable:nullable Variable> */
var_other = var12;
{
var16 = ((short int (*)(val* self, val* p0))(var_variable->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_variable, var_other) /* == on <var_variable:nullable Variable(Variable)>*/;
}
var17 = !var16;
var14 = var17;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
if (var13){
{
{ /* Inline flow#AExpr#after_flow_context (self) on <self:AIsaExpr> */
var20 = self->attrs[COLOR_nit__flow__AExpr___after_flow_context].val; /* _after_flow_context on <self:AIsaExpr> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (var18 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1332);
show_backtrace(1);
} else {
{ /* Inline flow#FlowContext#when_true (var18) on <var18:nullable FlowContext> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__flow, 224);
show_backtrace(1);
}
var23 = var18->attrs[COLOR_nit__flow__FlowContext___when_true].val; /* _when_true on <var18:nullable FlowContext> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_true");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__flow, 224);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
nit__typing___FlowContext___set_var(var21, var_variable, var_mtype); /* Direct call typing#FlowContext#set_var on <var21:FlowContext>*/
}
} else {
}
{
var24 = nit__typing___nit__typing__TypeVisitor___type_bool(var_v, self);
}
{
{ /* Inline typing#AExpr#mtype= (self,var24) on <self:AIsaExpr> */
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var24; /* _mtype on <self:AIsaExpr> */
RET_LABEL25:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AAsCastExpr#accept_typing for (self: AAsCastExpr, TypeVisitor) */
void nit__typing___AAsCastExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : AType */;
val* var5 /* : AType */;
val* var6 /* : nullable MType */;
var_v = p0;
{
{ /* Inline parser_nodes#AAsCastForm#n_expr (self) on <self:AAsCastExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_expr].val; /* _n_expr on <self:AAsCastExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2299);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline parser_nodes#AAsCastExpr#n_type (self) on <self:AAsCastExpr> */
var5 = self->attrs[COLOR_nit__parser_nodes__AAsCastExpr___n_type].val; /* _n_type on <self:AAsCastExpr> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2316);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = nit__typing___nit__typing__TypeVisitor___visit_expr_cast(var_v, self, var, var3);
}
{
{ /* Inline typing#AExpr#mtype= (self,var6) on <self:AAsCastExpr> */
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var6; /* _mtype on <self:AAsCastExpr> */
RET_LABEL7:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AAsNotnullExpr#accept_typing for (self: AAsNotnullExpr, TypeVisitor) */
void nit__typing___AAsNotnullExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : FlatString */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : MType */;
val* var21 /* : MType */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var27 /* : ModelBuilder */;
val* var29 /* : ModelBuilder */;
static val* varonce30;
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
short int var49 /* : Bool */;
val* var50 /* : MType */;
val* var_u /* var u: MType */;
short int var51 /* : Bool */;
int cltype52;
int idtype53;
short int var54 /* : Bool */;
val* var55 /* : ModelBuilder */;
val* var57 /* : ModelBuilder */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
long var61 /* : Int */;
val* var62 /* : FlatString */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
long var66 /* : Int */;
val* var67 /* : FlatString */;
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
val* var78 /* : Array[Object] */;
long var79 /* : Int */;
val* var80 /* : NativeArray[Object] */;
val* var81 /* : String */;
var_v = p0;
{
{ /* Inline parser_nodes#AAsCastForm#n_expr (self) on <self:AAsNotnullExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_expr].val; /* _n_expr on <self:AAsNotnullExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2299);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit__typing___nit__typing__TypeVisitor___visit_expr(var_v, var);
}
var_mtype = var3;
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
goto RET_LABEL;
} else {
}
/* <var_mtype:nullable MType(MType)> isa MNullType */
cltype = type_nit__MNullType.color;
idtype = type_nit__MNullType.id;
if(cltype >= var_mtype->type->table_size) {
var11 = 0;
} else {
var11 = var_mtype->type->type_table[cltype] == idtype;
}
if (var11){
if (varonce) {
var12 = varonce;
} else {
var13 = "Type error: as(not null) on null";
var14 = 32;
var15 = standard___standard__NativeString___to_s_with_length(var13, var14);
var12 = var15;
varonce = var12;
}
{
nit__typing___nit__typing__TypeVisitor___error(var_v, self, var12); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
/* <var_mtype:nullable MType(MType)> isa MNullableType */
cltype17 = type_nit__MNullableType.color;
idtype18 = type_nit__MNullableType.id;
if(cltype17 >= var_mtype->type->table_size) {
var16 = 0;
} else {
var16 = var_mtype->type->type_table[cltype17] == idtype18;
}
if (var16){
{
{ /* Inline model#MNullableType#mtype (var_mtype) on <var_mtype:nullable MType(MNullableType)> */
var21 = var_mtype->attrs[COLOR_nit__model__MNullableType___mtype].val; /* _mtype on <var_mtype:nullable MType(MNullableType)> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1506);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var19) on <self:AAsNotnullExpr> */
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var19; /* _mtype on <self:AAsNotnullExpr> */
RET_LABEL22:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#AExpr#mtype= (self,var_mtype) on <self:AAsNotnullExpr> */
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var_mtype; /* _mtype on <self:AAsNotnullExpr> */
RET_LABEL23:(void)0;
}
}
/* <var_mtype:nullable MType(MType)> isa MClassType */
cltype25 = type_nit__MClassType.color;
idtype26 = type_nit__MClassType.id;
if(cltype25 >= var_mtype->type->table_size) {
var24 = 0;
} else {
var24 = var_mtype->type->type_table[cltype25] == idtype26;
}
if (var24){
{
{ /* Inline typing#TypeVisitor#modelbuilder (var_v) on <var_v:TypeVisitor> */
var29 = var_v->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <var_v:TypeVisitor> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
if (varonce30) {
var31 = varonce30;
} else {
var32 = "useless-type-test";
var33 = 17;
var34 = standard___standard__NativeString___to_s_with_length(var32, var33);
var31 = var34;
varonce30 = var31;
}
if (varonce35) {
var36 = varonce35;
} else {
var37 = "Warning: expression is already not null, since it is a `";
var38 = 56;
var39 = standard___standard__NativeString___to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
if (varonce40) {
var41 = varonce40;
} else {
var42 = "`.";
var43 = 2;
var44 = standard___standard__NativeString___to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
var45 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var45 = array_instance Array[Object] */
var46 = 3;
var47 = NEW_standard__NativeArray(var46, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var47)->values[0] = (val*) var36;
((struct instance_standard__NativeArray*)var47)->values[1] = (val*) var_mtype;
((struct instance_standard__NativeArray*)var47)->values[2] = (val*) var41;
{
((void (*)(val* self, val* p0, long p1))(var45->class->vft[COLOR_standard__array__Array__with_native]))(var45, var47, var46) /* with_native on <var45:Array[Object]>*/;
}
}
{
var48 = ((val* (*)(val* self))(var45->class->vft[COLOR_standard__string__Object__to_s]))(var45) /* to_s on <var45:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___warning(var27, self, var31, var48); /* Direct call modelbuilder_base#ModelBuilder#warning on <var27:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
var49 = ((short int (*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:nullable MType(MType)>*/;
}
if (unlikely(!var49)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1366);
show_backtrace(1);
}
{
var50 = nit__typing___nit__typing__TypeVisitor___anchor_to(var_v, var_mtype);
}
var_u = var50;
/* <var_u:MType> isa MNullableType */
cltype52 = type_nit__MNullableType.color;
idtype53 = type_nit__MNullableType.id;
if(cltype52 >= var_u->type->table_size) {
var51 = 0;
} else {
var51 = var_u->type->type_table[cltype52] == idtype53;
}
var54 = !var51;
if (var54){
{
{ /* Inline typing#TypeVisitor#modelbuilder (var_v) on <var_v:TypeVisitor> */
var57 = var_v->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <var_v:TypeVisitor> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
show_backtrace(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
if (varonce58) {
var59 = varonce58;
} else {
var60 = "useless-type-test";
var61 = 17;
var62 = standard___standard__NativeString___to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
if (varonce63) {
var64 = varonce63;
} else {
var65 = "Warning: expression is already not null, since it is a `";
var66 = 56;
var67 = standard___standard__NativeString___to_s_with_length(var65, var66);
var64 = var67;
varonce63 = var64;
}
if (varonce68) {
var69 = varonce68;
} else {
var70 = ": ";
var71 = 2;
var72 = standard___standard__NativeString___to_s_with_length(var70, var71);
var69 = var72;
varonce68 = var69;
}
if (varonce73) {
var74 = varonce73;
} else {
var75 = "`.";
var76 = 2;
var77 = standard___standard__NativeString___to_s_with_length(var75, var76);
var74 = var77;
varonce73 = var74;
}
var78 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var78 = array_instance Array[Object] */
var79 = 5;
var80 = NEW_standard__NativeArray(var79, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var80)->values[0] = (val*) var64;
((struct instance_standard__NativeArray*)var80)->values[1] = (val*) var_mtype;
((struct instance_standard__NativeArray*)var80)->values[2] = (val*) var69;
((struct instance_standard__NativeArray*)var80)->values[3] = (val*) var_u;
((struct instance_standard__NativeArray*)var80)->values[4] = (val*) var74;
{
((void (*)(val* self, val* p0, long p1))(var78->class->vft[COLOR_standard__array__Array__with_native]))(var78, var80, var79) /* with_native on <var78:Array[Object]>*/;
}
}
{
var81 = ((val* (*)(val* self))(var78->class->vft[COLOR_standard__string__Object__to_s]))(var78) /* to_s on <var78:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___warning(var55, self, var59, var81); /* Direct call modelbuilder_base#ModelBuilder#warning on <var55:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method typing#AParExpr#accept_typing for (self: AParExpr, TypeVisitor) */
void nit__typing___AParExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
var_v = p0;
{
{ /* Inline parser_nodes#AParExpr#n_expr (self) on <self:AParExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__AParExpr___n_expr].val; /* _n_expr on <self:AParExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2288);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit__typing___nit__typing__TypeVisitor___visit_expr(var_v, var);
}
{
{ /* Inline typing#AExpr#mtype= (self,var3) on <self:AParExpr> */
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var3; /* _mtype on <self:AParExpr> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AOnceExpr#accept_typing for (self: AOnceExpr, TypeVisitor) */
void nit__typing___AOnceExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
var_v = p0;
{
{ /* Inline parser_nodes#AOnceExpr#n_expr (self) on <self:AOnceExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__AOnceExpr___n_expr].val; /* _n_expr on <self:AOnceExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1794);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit__typing___nit__typing__TypeVisitor___visit_expr(var_v, var);
}
{
{ /* Inline typing#AExpr#mtype= (self,var3) on <self:AOnceExpr> */
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var3; /* _mtype on <self:AOnceExpr> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method typing#ASelfExpr#its_variable for (self: ASelfExpr): nullable Variable */
val* nit__typing___ASelfExpr___AExpr__its_variable(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
var1 = self->attrs[COLOR_nit__typing__ASelfExpr___its_variable].val; /* _its_variable on <self:ASelfExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ASelfExpr#its_variable= for (self: ASelfExpr, nullable Variable) */
void nit__typing___ASelfExpr___its_variable_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__ASelfExpr___its_variable].val = p0; /* _its_variable on <self:ASelfExpr> */
RET_LABEL:;
}
/* method typing#ASelfExpr#accept_typing for (self: ASelfExpr, TypeVisitor) */
void nit__typing___ASelfExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var_ /* var : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
short int var5 /* : Bool */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : FlatString */;
val* var10 /* : Variable */;
val* var12 /* : Variable */;
val* var_variable /* var variable: Variable */;
val* var14 /* : nullable MType */;
var_v = p0;
{
{ /* Inline typing#TypeVisitor#is_toplevel_context (var_v) on <var_v:TypeVisitor> */
var3 = var_v->attrs[COLOR_nit__typing__TypeVisitor___is_toplevel_context].s; /* _is_toplevel_context on <var_v:TypeVisitor> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_ = var1;
if (var1){
/* <self:ASelfExpr> isa AImplicitSelfExpr */
cltype = type_nit__AImplicitSelfExpr.color;
idtype = type_nit__AImplicitSelfExpr.id;
if(cltype >= self->type->table_size) {
var4 = 0;
} else {
var4 = self->type->type_table[cltype] == idtype;
}
var5 = !var4;
var = var5;
} else {
var = var_;
}
if (var){
if (varonce) {
var6 = varonce;
} else {
var7 = "Error: self cannot be used in top-level method.";
var8 = 47;
var9 = standard___standard__NativeString___to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
{
nit__typing___nit__typing__TypeVisitor___error(var_v, self, var6); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
} else {
}
{
{ /* Inline typing#TypeVisitor#selfvariable (var_v) on <var_v:TypeVisitor> */
var12 = var_v->attrs[COLOR_nit__typing__TypeVisitor___selfvariable].val; /* _selfvariable on <var_v:TypeVisitor> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _selfvariable");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 50);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_variable = var10;
{
{ /* Inline typing#ASelfExpr#its_variable= (self,var_variable) on <self:ASelfExpr> */
self->attrs[COLOR_nit__typing__ASelfExpr___its_variable].val = var_variable; /* _its_variable on <self:ASelfExpr> */
RET_LABEL13:(void)0;
}
}
{
var14 = nit__typing___nit__typing__TypeVisitor___get_variable(var_v, self, var_variable);
}
{
{ /* Inline typing#AExpr#mtype= (self,var14) on <self:ASelfExpr> */
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var14; /* _mtype on <self:ASelfExpr> */
RET_LABEL15:(void)0;
}
}
RET_LABEL:;
}
/* method typing#ASendExpr#callsite for (self: ASendExpr): nullable CallSite */
val* nit__typing___ASendExpr___callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nit__typing__ASendExpr___callsite].val; /* _callsite on <self:ASendExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ASendExpr#callsite= for (self: ASendExpr, nullable CallSite) */
void nit__typing___ASendExpr___callsite_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__ASendExpr___callsite].val = p0; /* _callsite on <self:ASendExpr> */
RET_LABEL:;
}
/* method typing#ASendExpr#accept_typing for (self: ASendExpr, TypeVisitor) */
void nit__typing___ASendExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var_recvtype /* var recvtype: nullable MType */;
val* var4 /* : String */;
val* var_name /* var name: String */;
val* var5 /* : null */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : AExpr */;
val* var14 /* : AExpr */;
short int var15 /* : Bool */;
int cltype;
int idtype;
val* var16 /* : nullable CallSite */;
val* var_callsite /* var callsite: nullable CallSite */;
val* var17 /* : null */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
val* var25 /* : MSignature */;
val* var27 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var28 /* : Array[AExpr] */;
val* var_args /* var args: Array[AExpr] */;
short int var29 /* : Bool */;
val* var30 /* : MMethod */;
val* var32 /* : MMethod */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
val* var36 /* : nullable MPropDef */;
val* var38 /* : nullable MPropDef */;
val* var_vmpropdef /* var vmpropdef: nullable MPropDef */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
short int var_ /* var : Bool */;
val* var43 /* : MProperty */;
val* var45 /* : MProperty */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
static val* varonce;
val* var50 /* : String */;
char* var51 /* : NativeString */;
long var52 /* : Int */;
val* var53 /* : FlatString */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
short int var_59 /* var : Bool */;
val* var60 /* : MProperty */;
val* var62 /* : MProperty */;
short int var63 /* : Bool */;
short int var65 /* : Bool */;
short int var_66 /* var : Bool */;
val* var67 /* : MMethod */;
val* var69 /* : MMethod */;
short int var70 /* : Bool */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
long var77 /* : Int */;
val* var78 /* : FlatString */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
long var82 /* : Int */;
val* var83 /* : FlatString */;
val* var84 /* : MMethod */;
val* var86 /* : MMethod */;
val* var87 /* : Array[Object] */;
long var88 /* : Int */;
val* var89 /* : NativeArray[Object] */;
val* var90 /* : String */;
val* var91 /* : nullable MType */;
val* var93 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
val* var94 /* : null */;
short int var95 /* : Bool */;
short int var96 /* : Bool */;
val* var_other98 /* var other: nullable Object */;
short int var99 /* : Bool */;
short int var100 /* : Bool */;
short int var102 /* : Bool */;
var_v = p0;
{
{ /* Inline parser_nodes#ASendExpr#n_expr (self) on <self:ASendExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASendExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1802);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit__typing___nit__typing__TypeVisitor___visit_expr(var_v, var);
}
var_recvtype = var3;
{
var4 = ((val* (*)(val* self))(self->class->vft[COLOR_nit__typing__ASendExpr__property_name]))(self) /* property_name on <self:ASendExpr>*/;
}
var_name = var4;
var5 = NULL;
if (var_recvtype == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_recvtype,var5) on <var_recvtype:nullable MType> */
var_other = var5;
{
{ /* Inline kernel#Object#is_same_instance (var_recvtype,var_other) on <var_recvtype:nullable MType(MType)> */
var11 = var_recvtype == var_other;
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
{ /* Inline parser_nodes#ASendExpr#n_expr (self) on <self:ASendExpr> */
var14 = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASendExpr> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1802);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
/* <var12:AExpr> isa ASelfExpr */
cltype = type_nit__ASelfExpr.color;
idtype = type_nit__ASelfExpr.id;
if(cltype >= var12->type->table_size) {
var15 = 0;
} else {
var15 = var12->type->type_table[cltype] == idtype;
}
{
var16 = nit__typing___nit__typing__TypeVisitor___get_method(var_v, self, var_recvtype, var_name, var15);
}
var_callsite = var16;
var17 = NULL;
if (var_callsite == NULL) {
var18 = 1; /* is null */
} else {
var18 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_callsite,var17) on <var_callsite:nullable CallSite> */
var_other = var17;
{
{ /* Inline kernel#Object#is_same_instance (var_callsite,var_other) on <var_callsite:nullable CallSite(CallSite)> */
var23 = var_callsite == var_other;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var18 = var19;
}
if (var18){
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#ASendExpr#callsite= (self,var_callsite) on <self:ASendExpr> */
self->attrs[COLOR_nit__typing__ASendExpr___callsite].val = var_callsite; /* _callsite on <self:ASendExpr> */
RET_LABEL24:(void)0;
}
}
{
{ /* Inline typing#CallSite#msignature (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var27 = var_callsite->attrs[COLOR_nit__typing__CallSite___msignature].val; /* _msignature on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 494);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
var_msignature = var25;
{
var28 = ((val* (*)(val* self))(self->class->vft[COLOR_nit__typing__ASendExpr__compute_raw_arguments]))(self) /* compute_raw_arguments on <self:ASendExpr>*/;
}
var_args = var28;
{
var29 = nit___nit__CallSite___check_signature(var_callsite, var_v, var_args);
}
{
{ /* Inline typing#CallSite#mproperty (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var32 = var_callsite->attrs[COLOR_nit__typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 487);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline model#MMethod#is_init (var30) on <var30:MMethod> */
var35 = var30->attrs[COLOR_nit__model__MMethod___is_init].s; /* _is_init on <var30:MMethod> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
if (var33){
{
{ /* Inline typing#TypeVisitor#mpropdef (var_v) on <var_v:TypeVisitor> */
var38 = var_v->attrs[COLOR_nit__typing__TypeVisitor___mpropdef].val; /* _mpropdef on <var_v:TypeVisitor> */
var36 = var38;
RET_LABEL37:(void)0;
}
}
var_vmpropdef = var36;
/* <var_vmpropdef:nullable MPropDef> isa MMethodDef */
cltype41 = type_nit__MMethodDef.color;
idtype42 = type_nit__MMethodDef.id;
if(var_vmpropdef == NULL) {
var40 = 0;
} else {
if(cltype41 >= var_vmpropdef->type->table_size) {
var40 = 0;
} else {
var40 = var_vmpropdef->type->type_table[cltype41] == idtype42;
}
}
var_ = var40;
if (var40){
{
{ /* Inline model#MPropDef#mproperty (var_vmpropdef) on <var_vmpropdef:nullable MPropDef(MMethodDef)> */
var45 = var_vmpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_vmpropdef:nullable MPropDef(MMethodDef)> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline model#MMethod#is_init (var43) on <var43:MProperty(MMethod)> */
var48 = var43->attrs[COLOR_nit__model__MMethod___is_init].s; /* _is_init on <var43:MProperty(MMethod)> */
var46 = var48;
RET_LABEL47:(void)0;
}
}
var39 = var46;
} else {
var39 = var_;
}
var49 = !var39;
if (var49){
if (varonce) {
var50 = varonce;
} else {
var51 = "Can call a init only in another init";
var52 = 36;
var53 = standard___standard__NativeString___to_s_with_length(var51, var52);
var50 = var53;
varonce = var50;
}
{
nit__typing___nit__typing__TypeVisitor___error(var_v, self, var50); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
} else {
}
/* <var_vmpropdef:nullable MPropDef> isa MMethodDef */
cltype57 = type_nit__MMethodDef.color;
idtype58 = type_nit__MMethodDef.id;
if(var_vmpropdef == NULL) {
var56 = 0;
} else {
if(cltype57 >= var_vmpropdef->type->table_size) {
var56 = 0;
} else {
var56 = var_vmpropdef->type->type_table[cltype57] == idtype58;
}
}
var_59 = var56;
if (var56){
{
{ /* Inline model#MPropDef#mproperty (var_vmpropdef) on <var_vmpropdef:nullable MPropDef(MMethodDef)> */
var62 = var_vmpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_vmpropdef:nullable MPropDef(MMethodDef)> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
{ /* Inline model#MMethod#is_root_init (var60) on <var60:MProperty(MMethod)> */
var65 = var60->attrs[COLOR_nit__model__MMethod___is_root_init].s; /* _is_root_init on <var60:MProperty(MMethod)> */
var63 = var65;
RET_LABEL64:(void)0;
}
}
var55 = var63;
} else {
var55 = var_59;
}
var_66 = var55;
if (var55){
{
{ /* Inline typing#CallSite#mproperty (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var69 = var_callsite->attrs[COLOR_nit__typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var69 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 487);
show_backtrace(1);
}
var67 = var69;
RET_LABEL68:(void)0;
}
}
{
{ /* Inline model#MMethod#is_root_init (var67) on <var67:MMethod> */
var72 = var67->attrs[COLOR_nit__model__MMethod___is_root_init].s; /* _is_root_init on <var67:MMethod> */
var70 = var72;
RET_LABEL71:(void)0;
}
}
var73 = !var70;
var54 = var73;
} else {
var54 = var_66;
}
if (var54){
if (varonce74) {
var75 = varonce74;
} else {
var76 = "Error: ";
var77 = 7;
var78 = standard___standard__NativeString___to_s_with_length(var76, var77);
var75 = var78;
varonce74 = var75;
}
if (varonce79) {
var80 = varonce79;
} else {
var81 = " cannot call a factory ";
var82 = 23;
var83 = standard___standard__NativeString___to_s_with_length(var81, var82);
var80 = var83;
varonce79 = var80;
}
{
{ /* Inline typing#CallSite#mproperty (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var86 = var_callsite->attrs[COLOR_nit__typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var86 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 487);
show_backtrace(1);
}
var84 = var86;
RET_LABEL85:(void)0;
}
}
var87 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var87 = array_instance Array[Object] */
var88 = 4;
var89 = NEW_standard__NativeArray(var88, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var89)->values[0] = (val*) var75;
((struct instance_standard__NativeArray*)var89)->values[1] = (val*) var_vmpropdef;
((struct instance_standard__NativeArray*)var89)->values[2] = (val*) var80;
((struct instance_standard__NativeArray*)var89)->values[3] = (val*) var84;
{
((void (*)(val* self, val* p0, long p1))(var87->class->vft[COLOR_standard__array__Array__with_native]))(var87, var89, var88) /* with_native on <var87:Array[Object]>*/;
}
}
{
var90 = ((val* (*)(val* self))(var87->class->vft[COLOR_standard__string__Object__to_s]))(var87) /* to_s on <var87:Array[Object]>*/;
}
{
nit__typing___nit__typing__TypeVisitor___error(var_v, self, var90); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
} else {
}
} else {
}
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:MSignature> */
var93 = var_msignature->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:MSignature> */
var91 = var93;
RET_LABEL92:(void)0;
}
}
var_ret = var91;
var94 = NULL;
if (var_ret == NULL) {
var95 = 0; /* is null */
} else {
var95 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,var94) on <var_ret:nullable MType> */
var_other98 = var94;
{
var99 = ((short int (*)(val* self, val* p0))(var_ret->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ret, var_other98) /* == on <var_ret:nullable MType(MType)>*/;
}
var100 = !var99;
var96 = var100;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
var95 = var96;
}
if (var95){
{
{ /* Inline typing#AExpr#mtype= (self,var_ret) on <self:ASendExpr> */
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var_ret; /* _mtype on <self:ASendExpr> */
RET_LABEL101:(void)0;
}
}
} else {
var102 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var102) on <self:ASendExpr> */
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var102; /* _is_typed on <self:ASendExpr> */
RET_LABEL103:(void)0;
}
}
}
RET_LABEL:;
}
/* method typing#ASendExpr#raw_arguments for (self: ASendExpr): Array[AExpr] */
val* nit__typing___ASendExpr___raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : Array[AExpr] */;
{
var1 = ((val* (*)(val* self))(self->class->vft[COLOR_nit__typing__ASendExpr__compute_raw_arguments]))(self) /* compute_raw_arguments on <self:ASendExpr>*/;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ABinopExpr#compute_raw_arguments for (self: ABinopExpr): Array[AExpr] */
val* nit__typing___ABinopExpr___ASendExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : Array[AExpr] */;
long var2 /* : Int */;
val* var_ /* var : Array[AExpr] */;
val* var3 /* : AExpr */;
val* var5 /* : AExpr */;
var1 = NEW_standard__Array(&type_standard__Array__nit__AExpr);
var2 = 1;
{
standard___standard__Array___with_capacity(var1, var2); /* Direct call array#Array#with_capacity on <var1:Array[AExpr]>*/
}
var_ = var1;
{
{ /* Inline parser_nodes#ABinopExpr#n_expr2 (self) on <self:ABinopExpr> */
var5 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ABinopExpr> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1809);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var3); /* Direct call array#AbstractArray#push on <var_:Array[AExpr]>*/
}
var = var_;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AEqExpr#property_name for (self: AEqExpr): String */
val* nit__typing___AEqExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = "==";
var3 = 2;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AEqExpr#accept_typing for (self: AEqExpr, TypeVisitor) */
void nit__typing___AEqExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
var_v = p0;
{
((void (*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing___AEqExpr___AExpr__accept_typing]))(self, p0) /* accept_typing on <self:AEqExpr>*/;
}
{
nit__typing___nit__typing__TypeVisitor___null_test(var_v, self); /* Direct call typing#TypeVisitor#null_test on <var_v:TypeVisitor>*/
}
RET_LABEL:;
}
/* method typing#ANeExpr#property_name for (self: ANeExpr): String */
val* nit__typing___ANeExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = "!=";
var3 = 2;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ANeExpr#accept_typing for (self: ANeExpr, TypeVisitor) */
void nit__typing___ANeExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
var_v = p0;
{
((void (*)(val* self, val* p0))(self->class->vft[COLOR_nit__typing___ANeExpr___AExpr__accept_typing]))(self, p0) /* accept_typing on <self:ANeExpr>*/;
}
{
nit__typing___nit__typing__TypeVisitor___null_test(var_v, self); /* Direct call typing#TypeVisitor#null_test on <var_v:TypeVisitor>*/
}
RET_LABEL:;
}
/* method typing#ALtExpr#property_name for (self: ALtExpr): String */
val* nit__typing___ALtExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = "<";
var3 = 1;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ALeExpr#property_name for (self: ALeExpr): String */
val* nit__typing___ALeExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = "<=";
var3 = 2;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ALlExpr#property_name for (self: ALlExpr): String */
val* nit__typing___ALlExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = "<<";
var3 = 2;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AGtExpr#property_name for (self: AGtExpr): String */
val* nit__typing___AGtExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = ">";
var3 = 1;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AGeExpr#property_name for (self: AGeExpr): String */
val* nit__typing___AGeExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = ">=";
var3 = 2;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AGgExpr#property_name for (self: AGgExpr): String */
val* nit__typing___AGgExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = ">>";
var3 = 2;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#APlusExpr#property_name for (self: APlusExpr): String */
val* nit__typing___APlusExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = "+";
var3 = 1;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AMinusExpr#property_name for (self: AMinusExpr): String */
val* nit__typing___AMinusExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = "-";
var3 = 1;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AStarshipExpr#property_name for (self: AStarshipExpr): String */
val* nit__typing___AStarshipExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = "<=>";
var3 = 3;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AStarExpr#property_name for (self: AStarExpr): String */
val* nit__typing___AStarExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = "*";
var3 = 1;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AStarstarExpr#property_name for (self: AStarstarExpr): String */
val* nit__typing___AStarstarExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = "**";
var3 = 2;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ASlashExpr#property_name for (self: ASlashExpr): String */
val* nit__typing___ASlashExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = "/";
var3 = 1;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#APercentExpr#property_name for (self: APercentExpr): String */
val* nit__typing___APercentExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = "%";
var3 = 1;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AUminusExpr#property_name for (self: AUminusExpr): String */
val* nit__typing___AUminusExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = "unary -";
var3 = 7;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AUminusExpr#compute_raw_arguments for (self: AUminusExpr): Array[AExpr] */
val* nit__typing___AUminusExpr___ASendExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : Array[AExpr] */;
var1 = NEW_standard__Array(&type_standard__Array__nit__AExpr);
{
standard___standard__Array___standard__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[AExpr]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ACallExpr#property_name for (self: ACallExpr): String */
val* nit__typing___ACallExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : TId */;
val* var3 /* : TId */;
val* var4 /* : String */;
{
{ /* Inline parser_nodes#ACallFormExpr#n_id (self) on <self:ACallExpr> */
var3 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:ACallExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1999);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nit__lexer_work___Token___text(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ACallExpr#compute_raw_arguments for (self: ACallExpr): Array[AExpr] */
val* nit__typing___ACallExpr___ASendExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : AExprs */;
val* var3 /* : AExprs */;
val* var4 /* : Array[AExpr] */;
{
{ /* Inline parser_nodes#ACallFormExpr#n_args (self) on <self:ACallExpr> */
var3 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2002);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nit__typing___AExprs___to_a(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ACallAssignExpr#property_name for (self: ACallAssignExpr): String */
val* nit__typing___ACallAssignExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : TId */;
val* var3 /* : TId */;
val* var4 /* : String */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : FlatString */;
val* var9 /* : String */;
{
{ /* Inline parser_nodes#ACallFormExpr#n_id (self) on <self:ACallAssignExpr> */
var3 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:ACallAssignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1999);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nit__lexer_work___Token___text(var1);
}
if (varonce) {
var5 = varonce;
} else {
var6 = "=";
var7 = 1;
var8 = standard___standard__NativeString___to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
{
var9 = ((val* (*)(val* self, val* p0))(var4->class->vft[COLOR_standard__string__String___43d]))(var4, var5) /* + on <var4:String>*/;
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ACallAssignExpr#compute_raw_arguments for (self: ACallAssignExpr): Array[AExpr] */
val* nit__typing___ACallAssignExpr___ASendExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : AExprs */;
val* var3 /* : AExprs */;
val* var4 /* : Array[AExpr] */;
val* var_res /* var res: Array[AExpr] */;
val* var5 /* : AExpr */;
val* var7 /* : AExpr */;
{
{ /* Inline parser_nodes#ACallFormExpr#n_args (self) on <self:ACallAssignExpr> */
var3 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallAssignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2002);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nit__typing___AExprs___to_a(var1);
}
var_res = var4;
{
{ /* Inline parser_nodes#AAssignFormExpr#n_value (self) on <self:ACallAssignExpr> */
var7 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:ACallAssignExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1772);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_res, var5); /* Direct call array#Array#add on <var_res:Array[AExpr]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ABraExpr#property_name for (self: ABraExpr): String */
val* nit__typing___ABraExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = "[]";
var3 = 2;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ABraExpr#compute_raw_arguments for (self: ABraExpr): Array[AExpr] */
val* nit__typing___ABraExpr___ASendExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : AExprs */;
val* var3 /* : AExprs */;
val* var4 /* : Array[AExpr] */;
{
{ /* Inline parser_nodes#ABraFormExpr#n_args (self) on <self:ABraExpr> */
var3 = self->attrs[COLOR_nit__parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2071);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nit__typing___AExprs___to_a(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ABraAssignExpr#property_name for (self: ABraAssignExpr): String */
val* nit__typing___ABraAssignExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = "[]=";
var3 = 3;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ABraAssignExpr#compute_raw_arguments for (self: ABraAssignExpr): Array[AExpr] */
val* nit__typing___ABraAssignExpr___ASendExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : AExprs */;
val* var3 /* : AExprs */;
val* var4 /* : Array[AExpr] */;
val* var_res /* var res: Array[AExpr] */;
val* var5 /* : AExpr */;
val* var7 /* : AExpr */;
{
{ /* Inline parser_nodes#ABraFormExpr#n_args (self) on <self:ABraAssignExpr> */
var3 = self->attrs[COLOR_nit__parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraAssignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2071);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nit__typing___AExprs___to_a(var1);
}
var_res = var4;
{
{ /* Inline parser_nodes#AAssignFormExpr#n_value (self) on <self:ABraAssignExpr> */
var7 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:ABraAssignExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1772);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_res, var5); /* Direct call array#Array#add on <var_res:Array[AExpr]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ASendReassignFormExpr#write_callsite for (self: ASendReassignFormExpr): nullable CallSite */
val* nit__typing___ASendReassignFormExpr___write_callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nit__typing__ASendReassignFormExpr___write_callsite].val; /* _write_callsite on <self:ASendReassignFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ASendReassignFormExpr#write_callsite= for (self: ASendReassignFormExpr, nullable CallSite) */
void nit__typing___ASendReassignFormExpr___write_callsite_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__ASendReassignFormExpr___write_callsite].val = p0; /* _write_callsite on <self:ASendReassignFormExpr> */
RET_LABEL:;
}
/* method typing#ASendReassignFormExpr#accept_typing for (self: ASendReassignFormExpr, TypeVisitor) */
void nit__typing___ASendReassignFormExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var_recvtype /* var recvtype: nullable MType */;
val* var4 /* : String */;
val* var_name /* var name: String */;
val* var5 /* : null */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : AExpr */;
val* var14 /* : AExpr */;
short int var15 /* : Bool */;
int cltype;
int idtype;
short int var_for_self /* var for_self: Bool */;
val* var16 /* : nullable CallSite */;
val* var_callsite /* var callsite: nullable CallSite */;
val* var17 /* : null */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
val* var25 /* : Array[AExpr] */;
val* var_args /* var args: Array[AExpr] */;
short int var26 /* : Bool */;
val* var27 /* : MSignature */;
val* var29 /* : MSignature */;
val* var30 /* : nullable MType */;
val* var32 /* : nullable MType */;
val* var_readtype /* var readtype: nullable MType */;
val* var33 /* : null */;
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
val* var49 /* : Array[Object] */;
long var50 /* : Int */;
val* var51 /* : NativeArray[Object] */;
val* var52 /* : String */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
long var56 /* : Int */;
val* var57 /* : FlatString */;
val* var58 /* : String */;
val* var59 /* : AExpr */;
val* var61 /* : AExpr */;
short int var62 /* : Bool */;
int cltype63;
int idtype64;
val* var65 /* : nullable CallSite */;
val* var_wcallsite /* var wcallsite: nullable CallSite */;
val* var66 /* : null */;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
short int var70 /* : Bool */;
short int var72 /* : Bool */;
val* var74 /* : MSignature */;
val* var76 /* : MSignature */;
val* var77 /* : Array[MParameter] */;
val* var79 /* : Array[MParameter] */;
val* var80 /* : nullable Object */;
val* var81 /* : MType */;
val* var83 /* : MType */;
val* var84 /* : nullable MType */;
val* var_wtype /* var wtype: nullable MType */;
val* var85 /* : null */;
short int var86 /* : Bool */;
short int var87 /* : Bool */;
short int var89 /* : Bool */;
short int var91 /* : Bool */;
val* var92 /* : Array[nullable Object] */;
val* var93 /* : AExpr */;
val* var95 /* : AExpr */;
short int var96 /* : Bool */;
short int var97 /* : Bool */;
var_v = p0;
{
{ /* Inline parser_nodes#ASendExpr#n_expr (self) on <self:ASendReassignFormExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASendReassignFormExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1802);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit__typing___nit__typing__TypeVisitor___visit_expr(var_v, var);
}
var_recvtype = var3;
{
var4 = ((val* (*)(val* self))(self->class->vft[COLOR_nit__typing__ASendExpr__property_name]))(self) /* property_name on <self:ASendReassignFormExpr>*/;
}
var_name = var4;
var5 = NULL;
if (var_recvtype == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_recvtype,var5) on <var_recvtype:nullable MType> */
var_other = var5;
{
{ /* Inline kernel#Object#is_same_instance (var_recvtype,var_other) on <var_recvtype:nullable MType(MType)> */
var11 = var_recvtype == var_other;
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
{ /* Inline parser_nodes#ASendExpr#n_expr (self) on <self:ASendReassignFormExpr> */
var14 = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASendReassignFormExpr> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1802);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
/* <var12:AExpr> isa ASelfExpr */
cltype = type_nit__ASelfExpr.color;
idtype = type_nit__ASelfExpr.id;
if(cltype >= var12->type->table_size) {
var15 = 0;
} else {
var15 = var12->type->type_table[cltype] == idtype;
}
var_for_self = var15;
{
var16 = nit__typing___nit__typing__TypeVisitor___get_method(var_v, self, var_recvtype, var_name, var_for_self);
}
var_callsite = var16;
var17 = NULL;
if (var_callsite == NULL) {
var18 = 1; /* is null */
} else {
var18 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_callsite,var17) on <var_callsite:nullable CallSite> */
var_other = var17;
{
{ /* Inline kernel#Object#is_same_instance (var_callsite,var_other) on <var_callsite:nullable CallSite(CallSite)> */
var23 = var_callsite == var_other;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var18 = var19;
}
if (var18){
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#ASendExpr#callsite= (self,var_callsite) on <self:ASendReassignFormExpr> */
self->attrs[COLOR_nit__typing__ASendExpr___callsite].val = var_callsite; /* _callsite on <self:ASendReassignFormExpr> */
RET_LABEL24:(void)0;
}
}
{
var25 = ((val* (*)(val* self))(self->class->vft[COLOR_nit__typing__ASendExpr__compute_raw_arguments]))(self) /* compute_raw_arguments on <self:ASendReassignFormExpr>*/;
}
var_args = var25;
{
var26 = nit___nit__CallSite___check_signature(var_callsite, var_v, var_args);
}
{
{ /* Inline typing#CallSite#msignature (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var29 = var_callsite->attrs[COLOR_nit__typing__CallSite___msignature].val; /* _msignature on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 494);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline model#MSignature#return_mtype (var27) on <var27:MSignature> */
var32 = var27->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var27:MSignature> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
var_readtype = var30;
var33 = NULL;
if (var_readtype == NULL) {
var34 = 1; /* is null */
} else {
var34 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_readtype,var33) on <var_readtype:nullable MType> */
var_other = var33;
{
{ /* Inline kernel#Object#is_same_instance (var_readtype,var_other) on <var_readtype:nullable MType(MType)> */
var39 = var_readtype == var_other;
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
if (varonce) {
var40 = varonce;
} else {
var41 = "Error: ";
var42 = 7;
var43 = standard___standard__NativeString___to_s_with_length(var41, var42);
var40 = var43;
varonce = var40;
}
if (varonce44) {
var45 = varonce44;
} else {
var46 = " is not a function";
var47 = 18;
var48 = standard___standard__NativeString___to_s_with_length(var46, var47);
var45 = var48;
varonce44 = var45;
}
var49 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var49 = array_instance Array[Object] */
var50 = 3;
var51 = NEW_standard__NativeArray(var50, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var51)->values[0] = (val*) var40;
((struct instance_standard__NativeArray*)var51)->values[1] = (val*) var_name;
((struct instance_standard__NativeArray*)var51)->values[2] = (val*) var45;
{
((void (*)(val* self, val* p0, long p1))(var49->class->vft[COLOR_standard__array__Array__with_native]))(var49, var51, var50) /* with_native on <var49:Array[Object]>*/;
}
}
{
var52 = ((val* (*)(val* self))(var49->class->vft[COLOR_standard__string__Object__to_s]))(var49) /* to_s on <var49:Array[Object]>*/;
}
{
nit__typing___nit__typing__TypeVisitor___error(var_v, self, var52); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
if (varonce53) {
var54 = varonce53;
} else {
var55 = "=";
var56 = 1;
var57 = standard___standard__NativeString___to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
{
var58 = ((val* (*)(val* self, val* p0))(var_name->class->vft[COLOR_standard__string__String___43d]))(var_name, var54) /* + on <var_name:String>*/;
}
{
{ /* Inline parser_nodes#ASendExpr#n_expr (self) on <self:ASendReassignFormExpr> */
var61 = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASendReassignFormExpr> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1802);
show_backtrace(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
/* <var59:AExpr> isa ASelfExpr */
cltype63 = type_nit__ASelfExpr.color;
idtype64 = type_nit__ASelfExpr.id;
if(cltype63 >= var59->type->table_size) {
var62 = 0;
} else {
var62 = var59->type->type_table[cltype63] == idtype64;
}
{
var65 = nit__typing___nit__typing__TypeVisitor___get_method(var_v, self, var_recvtype, var58, var62);
}
var_wcallsite = var65;
var66 = NULL;
if (var_wcallsite == NULL) {
var67 = 1; /* is null */
} else {
var67 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_wcallsite,var66) on <var_wcallsite:nullable CallSite> */
var_other = var66;
{
{ /* Inline kernel#Object#is_same_instance (var_wcallsite,var_other) on <var_wcallsite:nullable CallSite(CallSite)> */
var72 = var_wcallsite == var_other;
var70 = var72;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
var68 = var70;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
var67 = var68;
}
if (var67){
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#ASendReassignFormExpr#write_callsite= (self,var_wcallsite) on <self:ASendReassignFormExpr> */
self->attrs[COLOR_nit__typing__ASendReassignFormExpr___write_callsite].val = var_wcallsite; /* _write_callsite on <self:ASendReassignFormExpr> */
RET_LABEL73:(void)0;
}
}
{
{ /* Inline typing#CallSite#msignature (var_wcallsite) on <var_wcallsite:nullable CallSite(CallSite)> */
var76 = var_wcallsite->attrs[COLOR_nit__typing__CallSite___msignature].val; /* _msignature on <var_wcallsite:nullable CallSite(CallSite)> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 494);
show_backtrace(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
{ /* Inline model#MSignature#mparameters (var74) on <var74:MSignature> */
var79 = var74->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var74:MSignature> */
if (unlikely(var79 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
{
var80 = standard___standard__SequenceRead___last(var77);
}
{
{ /* Inline model#MParameter#mtype (var80) on <var80:nullable Object(MParameter)> */
var83 = var80->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var80:nullable Object(MParameter)> */
if (unlikely(var83 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1690);
show_backtrace(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
{
var84 = nit__typing___AReassignFormExpr___resolve_reassignment(self, var_v, var_readtype, var81);
}
var_wtype = var84;
var85 = NULL;
if (var_wtype == NULL) {
var86 = 1; /* is null */
} else {
var86 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_wtype,var85) on <var_wtype:nullable MType> */
var_other = var85;
{
{ /* Inline kernel#Object#is_same_instance (var_wtype,var_other) on <var_wtype:nullable MType(MType)> */
var91 = var_wtype == var_other;
var89 = var91;
goto RET_LABEL90;
RET_LABEL90:(void)0;
}
}
var87 = var89;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
var86 = var87;
}
if (var86){
goto RET_LABEL;
} else {
}
{
var92 = standard__array___Collection___to_a(var_args);
}
var_args = var92;
{
{ /* Inline parser_nodes#AReassignFormExpr#n_value (self) on <self:ASendReassignFormExpr> */
var95 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:ASendReassignFormExpr> */
if (unlikely(var95 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1783);
show_backtrace(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_args, var93); /* Direct call array#Array#add on <var_args:Array[AExpr]>*/
}
{
var96 = nit___nit__CallSite___check_signature(var_wcallsite, var_v, var_args);
}
var97 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var97) on <self:ASendReassignFormExpr> */
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var97; /* _is_typed on <self:ASendReassignFormExpr> */
RET_LABEL98:(void)0;
}
}
RET_LABEL:;
}
/* method typing#ACallReassignExpr#property_name for (self: ACallReassignExpr): String */
val* nit__typing___ACallReassignExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : TId */;
val* var3 /* : TId */;
val* var4 /* : String */;
{
{ /* Inline parser_nodes#ACallFormExpr#n_id (self) on <self:ACallReassignExpr> */
var3 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:ACallReassignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1999);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nit__lexer_work___Token___text(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ACallReassignExpr#compute_raw_arguments for (self: ACallReassignExpr): Array[AExpr] */
val* nit__typing___ACallReassignExpr___ASendExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : AExprs */;
val* var3 /* : AExprs */;
val* var4 /* : Array[AExpr] */;
{
{ /* Inline parser_nodes#ACallFormExpr#n_args (self) on <self:ACallReassignExpr> */
var3 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallReassignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2002);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nit__typing___AExprs___to_a(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ABraReassignExpr#property_name for (self: ABraReassignExpr): String */
val* nit__typing___ABraReassignExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = "[]";
var3 = 2;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ABraReassignExpr#compute_raw_arguments for (self: ABraReassignExpr): Array[AExpr] */
val* nit__typing___ABraReassignExpr___ASendExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : AExprs */;
val* var3 /* : AExprs */;
val* var4 /* : Array[AExpr] */;
{
{ /* Inline parser_nodes#ABraFormExpr#n_args (self) on <self:ABraReassignExpr> */
var3 = self->attrs[COLOR_nit__parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraReassignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2071);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nit__typing___AExprs___to_a(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AInitExpr#property_name for (self: AInitExpr): String */
val* nit__typing___AInitExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = "init";
var3 = 4;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AInitExpr#compute_raw_arguments for (self: AInitExpr): Array[AExpr] */
val* nit__typing___AInitExpr___ASendExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : AExprs */;
val* var3 /* : AExprs */;
val* var4 /* : Array[AExpr] */;
{
{ /* Inline parser_nodes#AInitExpr#n_args (self) on <self:AInitExpr> */
var3 = self->attrs[COLOR_nit__parser_nodes__AInitExpr___n_args].val; /* _n_args on <self:AInitExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2063);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nit__typing___AExprs___to_a(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AExprs#to_a for (self: AExprs): Array[AExpr] */
val* nit__typing___AExprs___to_a(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : ANodes[AExpr] */;
val* var3 /* : ANodes[AExpr] */;
val* var4 /* : Array[nullable Object] */;
{
{ /* Inline parser_nodes#AExprs#n_exprs (self) on <self:AExprs> */
var3 = self->attrs[COLOR_nit__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AExprs> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2408);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = standard__array___Collection___to_a(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ASuperExpr#callsite for (self: ASuperExpr): nullable CallSite */
val* nit__typing___ASuperExpr___callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nit__typing__ASuperExpr___callsite].val; /* _callsite on <self:ASuperExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ASuperExpr#callsite= for (self: ASuperExpr, nullable CallSite) */
void nit__typing___ASuperExpr___callsite_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__ASuperExpr___callsite].val = p0; /* _callsite on <self:ASuperExpr> */
RET_LABEL:;
}
/* method typing#ASuperExpr#mpropdef for (self: ASuperExpr): nullable MMethodDef */
val* nit__typing___ASuperExpr___mpropdef(val* self) {
val* var /* : nullable MMethodDef */;
val* var1 /* : nullable MMethodDef */;
var1 = self->attrs[COLOR_nit__typing__ASuperExpr___mpropdef].val; /* _mpropdef on <self:ASuperExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ASuperExpr#mpropdef= for (self: ASuperExpr, nullable MMethodDef) */
void nit__typing___ASuperExpr___mpropdef_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__ASuperExpr___mpropdef].val = p0; /* _mpropdef on <self:ASuperExpr> */
RET_LABEL:;
}
/* method typing#ASuperExpr#accept_typing for (self: ASuperExpr, TypeVisitor) */
void nit__typing___ASuperExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MClassType */;
val* var2 /* : nullable MClassType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : Variable */;
val* var11 /* : Variable */;
val* var12 /* : nullable MType */;
val* var_recvtype /* var recvtype: nullable MType */;
val* var13 /* : null */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : nullable MPropDef */;
val* var21 /* : nullable MPropDef */;
val* var22 /* : MProperty */;
val* var24 /* : MProperty */;
val* var_mproperty /* var mproperty: MProperty */;
short int var25 /* : Bool */;
int cltype;
int idtype;
short int var26 /* : Bool */;
static val* varonce;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : FlatString */;
val* var31 /* : MModule */;
val* var33 /* : MModule */;
val* var34 /* : Array[MPropDef] */;
val* var_superprops /* var superprops: Array[MMethodDef] */;
long var35 /* : Int */;
long var37 /* : Int */;
long var38 /* : Int */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var_ /* var : Bool */;
val* var46 /* : nullable MPropDef */;
val* var48 /* : nullable MPropDef */;
short int var49 /* : Bool */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : FlatString */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
long var58 /* : Int */;
val* var59 /* : FlatString */;
val* var60 /* : Array[Object] */;
long var61 /* : Int */;
val* var62 /* : NativeArray[Object] */;
val* var63 /* : String */;
val* var64 /* : nullable Object */;
val* var_superprop /* var superprop: MMethodDef */;
val* var65 /* : nullable MSignature */;
val* var67 /* : nullable MSignature */;
val* var_msignature /* var msignature: MSignature */;
short int var68 /* : Bool */;
val* var69 /* : MType */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const char* var_class_name;
val* var73 /* : AExprs */;
val* var75 /* : AExprs */;
val* var76 /* : Array[AExpr] */;
val* var_args /* var args: Array[AExpr] */;
long var77 /* : Int */;
long var79 /* : Int */;
long var80 /* : Int */;
short int var81 /* : Bool */;
short int var83 /* : Bool */;
int cltype84;
int idtype85;
const char* var_class_name86;
short int var87 /* : Bool */;
val* var88 /* : String */;
val* var90 /* : String */;
short int var91 /* : Bool */;
val* var92 /* : nullable MType */;
val* var94 /* : nullable MType */;
short int var96 /* : Bool */;
val* var98 /* : nullable MPropDef */;
val* var100 /* : nullable MPropDef */;
short int var101 /* : Bool */;
val* var103 /* : nullable MPropDef */;
val* var105 /* : nullable MPropDef */;
short int var106 /* : Bool */;
int cltype107;
int idtype108;
const char* var_class_name109;
var_v = p0;
{
{ /* Inline typing#TypeVisitor#anchor (var_v) on <var_v:TypeVisitor> */
var2 = var_v->attrs[COLOR_nit__typing__TypeVisitor___anchor].val; /* _anchor on <var_v:TypeVisitor> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_anchor = var;
var3 = NULL;
if (var_anchor == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_anchor,var3) on <var_anchor:nullable MClassType> */
var_other = var3;
{
var7 = ((short int (*)(val* self, val* p0))(var_anchor->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_anchor, var_other) /* == on <var_anchor:nullable MClassType(MClassType)>*/;
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1622);
show_backtrace(1);
}
{
{ /* Inline typing#TypeVisitor#selfvariable (var_v) on <var_v:TypeVisitor> */
var11 = var_v->attrs[COLOR_nit__typing__TypeVisitor___selfvariable].val; /* _selfvariable on <var_v:TypeVisitor> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _selfvariable");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 50);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = nit__typing___nit__typing__TypeVisitor___get_variable(var_v, self, var9);
}
var_recvtype = var12;
var13 = NULL;
if (var_recvtype == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_recvtype,var13) on <var_recvtype:nullable MType> */
var_other = var13;
{
var17 = ((short int (*)(val* self, val* p0))(var_recvtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_recvtype, var_other) /* == on <var_recvtype:nullable MType(MType)>*/;
}
var18 = !var17;
var15 = var18;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1624);
show_backtrace(1);
}
{
{ /* Inline typing#TypeVisitor#mpropdef (var_v) on <var_v:TypeVisitor> */
var21 = var_v->attrs[COLOR_nit__typing__TypeVisitor___mpropdef].val; /* _mpropdef on <var_v:TypeVisitor> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
if (var19 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1625);
show_backtrace(1);
} else {
{ /* Inline model#MPropDef#mproperty (var19) on <var19:nullable MPropDef> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var24 = var19->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var19:nullable MPropDef> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
var_mproperty = var22;
/* <var_mproperty:MProperty> isa MMethod */
cltype = type_nit__MMethod.color;
idtype = type_nit__MMethod.id;
if(cltype >= var_mproperty->type->table_size) {
var25 = 0;
} else {
var25 = var_mproperty->type->type_table[cltype] == idtype;
}
var26 = !var25;
if (var26){
if (varonce) {
var27 = varonce;
} else {
var28 = "Error: super only usable in a method";
var29 = 36;
var30 = standard___standard__NativeString___to_s_with_length(var28, var29);
var27 = var30;
varonce = var27;
}
{
nit__typing___nit__typing__TypeVisitor___error(var_v, self, var27); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#TypeVisitor#mmodule (var_v) on <var_v:TypeVisitor> */
var33 = var_v->attrs[COLOR_nit__typing__TypeVisitor___mmodule].val; /* _mmodule on <var_v:TypeVisitor> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 36);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
var34 = nit___nit__MProperty___lookup_super_definitions(var_mproperty, var31, var_anchor);
}
var_superprops = var34;
{
{ /* Inline array#AbstractArrayRead#length (var_superprops) on <var_superprops:Array[MMethodDef]> */
var37 = var_superprops->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_superprops:Array[MMethodDef]> */
var35 = var37;
RET_LABEL36:(void)0;
}
}
var38 = 0;
{
{ /* Inline kernel#Int#== (var35,var38) on <var35:Int> */
var41 = var35 == var38;
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
if (var39){
{
{ /* Inline model#MMethod#is_init (var_mproperty) on <var_mproperty:MProperty(MMethod)> */
var45 = var_mproperty->attrs[COLOR_nit__model__MMethod___is_init].s; /* _is_init on <var_mproperty:MProperty(MMethod)> */
var43 = var45;
RET_LABEL44:(void)0;
}
}
var_ = var43;
if (var43){
{
{ /* Inline typing#TypeVisitor#mpropdef (var_v) on <var_v:TypeVisitor> */
var48 = var_v->attrs[COLOR_nit__typing__TypeVisitor___mpropdef].val; /* _mpropdef on <var_v:TypeVisitor> */
var46 = var48;
RET_LABEL47:(void)0;
}
}
if (var46 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1632);
show_backtrace(1);
} else {
var49 = nit___nit__MPropDef___is_intro(var46);
}
var42 = var49;
} else {
var42 = var_;
}
if (var42){
{
nit__typing___ASuperExpr___process_superinit(self, var_v); /* Direct call typing#ASuperExpr#process_superinit on <self:ASuperExpr>*/
}
goto RET_LABEL;
} else {
}
if (varonce50) {
var51 = varonce50;
} else {
var52 = "Error: No super method to call for ";
var53 = 35;
var54 = standard___standard__NativeString___to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
if (varonce55) {
var56 = varonce55;
} else {
var57 = ".";
var58 = 1;
var59 = standard___standard__NativeString___to_s_with_length(var57, var58);
var56 = var59;
varonce55 = var56;
}
var60 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var60 = array_instance Array[Object] */
var61 = 3;
var62 = NEW_standard__NativeArray(var61, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var62)->values[0] = (val*) var51;
((struct instance_standard__NativeArray*)var62)->values[1] = (val*) var_mproperty;
((struct instance_standard__NativeArray*)var62)->values[2] = (val*) var56;
{
((void (*)(val* self, val* p0, long p1))(var60->class->vft[COLOR_standard__array__Array__with_native]))(var60, var62, var61) /* with_native on <var60:Array[Object]>*/;
}
}
{
var63 = ((val* (*)(val* self))(var60->class->vft[COLOR_standard__string__Object__to_s]))(var60) /* to_s on <var60:Array[Object]>*/;
}
{
nit__typing___nit__typing__TypeVisitor___error(var_v, self, var63); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
var64 = standard___standard__SequenceRead___Collection__first(var_superprops);
}
var_superprop = var64;
{
{ /* Inline model#MMethodDef#msignature (var_superprop) on <var_superprop:MMethodDef> */
var67 = var_superprop->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_superprop:MMethodDef> */
var65 = var67;
RET_LABEL66:(void)0;
}
}
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1642);
show_backtrace(1);
}
var_msignature = var65;
var68 = 1;
{
var69 = nit__typing___nit__typing__TypeVisitor___resolve_for(var_v, var_msignature, var_recvtype, var68);
}
/* <var69:MType> isa MSignature */
cltype71 = type_nit__MSignature.color;
idtype72 = type_nit__MSignature.id;
if(cltype71 >= var69->type->table_size) {
var70 = 0;
} else {
var70 = var69->type->type_table[cltype71] == idtype72;
}
if (unlikely(!var70)) {
var_class_name = var69 == NULL ? "null" : var69->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MSignature", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1643);
show_backtrace(1);
}
var_msignature = var69;
{
{ /* Inline parser_nodes#ASuperExpr#n_args (self) on <self:ASuperExpr> */
var75 = self->attrs[COLOR_nit__parser_nodes__ASuperExpr___n_args].val; /* _n_args on <self:ASuperExpr> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2051);
show_backtrace(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
var76 = nit__typing___AExprs___to_a(var73);
}
var_args = var76;
{
{ /* Inline array#AbstractArrayRead#length (var_args) on <var_args:Array[AExpr]> */
var79 = var_args->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_args:Array[AExpr]> */
var77 = var79;
RET_LABEL78:(void)0;
}
}
var80 = 0;
{
{ /* Inline kernel#Int#> (var77,var80) on <var77:Int> */
/* Covariant cast for argument 0 (i) <var80:Int> isa OTHER */
/* <var80:Int> isa OTHER */
var83 = 1; /* easy <var80:Int> isa OTHER*/
if (unlikely(!var83)) {
var_class_name86 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name86);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var87 = var77 > var80;
var81 = var87;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
}
if (var81){
{
{ /* Inline model#MProperty#name (var_mproperty) on <var_mproperty:MProperty(MMethod)> */
var90 = var_mproperty->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var_mproperty:MProperty(MMethod)> */
if (unlikely(var90 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1741);
show_backtrace(1);
}
var88 = var90;
RET_LABEL89:(void)0;
}
}
{
var91 = nit__typing___nit__typing__TypeVisitor___check_signature(var_v, self, var_args, var88, var_msignature);
}
} else {
}
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:MSignature> */
var94 = var_msignature->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:MSignature> */
var92 = var94;
RET_LABEL93:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var92) on <self:ASuperExpr> */
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var92; /* _mtype on <self:ASuperExpr> */
RET_LABEL95:(void)0;
}
}
var96 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var96) on <self:ASuperExpr> */
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var96; /* _is_typed on <self:ASuperExpr> */
RET_LABEL97:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#mpropdef (var_v) on <var_v:TypeVisitor> */
var100 = var_v->attrs[COLOR_nit__typing__TypeVisitor___mpropdef].val; /* _mpropdef on <var_v:TypeVisitor> */
var98 = var100;
RET_LABEL99:(void)0;
}
}
var101 = 1;
if (var98 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1650);
show_backtrace(1);
} else {
{ /* Inline modelize_property#MPropDef#has_supercall= (var98,var101) on <var98:nullable MPropDef> */
if (unlikely(var98 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 329);
show_backtrace(1);
}
var98->attrs[COLOR_nit__modelize_property__MPropDef___has_supercall].s = var101; /* _has_supercall on <var98:nullable MPropDef> */
RET_LABEL102:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#mpropdef (var_v) on <var_v:TypeVisitor> */
var105 = var_v->attrs[COLOR_nit__typing__TypeVisitor___mpropdef].val; /* _mpropdef on <var_v:TypeVisitor> */
var103 = var105;
RET_LABEL104:(void)0;
}
}
/* <var103:nullable MPropDef> isa MMethodDef */
cltype107 = type_nit__MMethodDef.color;
idtype108 = type_nit__MMethodDef.id;
if(var103 == NULL) {
var106 = 0;
} else {
if(cltype107 >= var103->type->table_size) {
var106 = 0;
} else {
var106 = var103->type->type_table[cltype107] == idtype108;
}
}
if (unlikely(!var106)) {
var_class_name109 = var103 == NULL ? "null" : var103->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MMethodDef", var_class_name109);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1651);
show_backtrace(1);
}
{
{ /* Inline typing#ASuperExpr#mpropdef= (self,var103) on <self:ASuperExpr> */
self->attrs[COLOR_nit__typing__ASuperExpr___mpropdef].val = var103; /* _mpropdef on <self:ASuperExpr> */
RET_LABEL110:(void)0;
}
}
RET_LABEL:;
}
/* method typing#ASuperExpr#process_superinit for (self: ASuperExpr, TypeVisitor) */
void nit__typing___ASuperExpr___process_superinit(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MClassType */;
val* var2 /* : nullable MClassType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : Variable */;
val* var11 /* : Variable */;
val* var12 /* : nullable MType */;
val* var_recvtype /* var recvtype: nullable MType */;
val* var13 /* : null */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : nullable MPropDef */;
val* var21 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MPropDef */;
short int var22 /* : Bool */;
int cltype;
int idtype;
val* var23 /* : MProperty */;
val* var25 /* : MProperty */;
val* var_mproperty /* var mproperty: MMethod */;
val* var26 /* : null */;
val* var_superprop /* var superprop: nullable MMethodDef */;
val* var27 /* : MClassDef */;
val* var29 /* : MClassDef */;
val* var30 /* : Array[MClassType] */;
val* var32 /* : Array[MClassType] */;
val* var_ /* var : Array[MClassType] */;
val* var33 /* : ArrayIterator[nullable Object] */;
val* var_34 /* var : ArrayIterator[MClassType] */;
short int var35 /* : Bool */;
val* var36 /* : nullable Object */;
val* var_msupertype /* var msupertype: MClassType */;
val* var37 /* : MModule */;
val* var39 /* : MModule */;
val* var40 /* : MClassType */;
val* var41 /* : ModelBuilder */;
val* var43 /* : ModelBuilder */;
val* var44 /* : ToolContext */;
val* var46 /* : ToolContext */;
long var47 /* : Int */;
long var49 /* : Int */;
long var_errcount /* var errcount: Int */;
val* var50 /* : String */;
val* var52 /* : String */;
val* var53 /* : nullable MProperty */;
short int var54 /* : Bool */;
int cltype55;
int idtype56;
const char* var_class_name;
val* var_candidate /* var candidate: nullable MMethod */;
val* var57 /* : null */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
val* var_other61 /* var other: nullable Object */;
short int var62 /* : Bool */;
short int var64 /* : Bool */;
val* var65 /* : ModelBuilder */;
val* var67 /* : ModelBuilder */;
val* var68 /* : ToolContext */;
val* var70 /* : ToolContext */;
long var71 /* : Int */;
long var73 /* : Int */;
short int var74 /* : Bool */;
short int var76 /* : Bool */;
int cltype77;
int idtype78;
const char* var_class_name79;
short int var80 /* : Bool */;
short int var81 /* : Bool */;
val* var82 /* : null */;
short int var83 /* : Bool */;
short int var84 /* : Bool */;
short int var86 /* : Bool */;
short int var87 /* : Bool */;
short int var_88 /* var : Bool */;
short int var89 /* : Bool */;
short int var91 /* : Bool */;
short int var92 /* : Bool */;
short int var93 /* : Bool */;
val* var94 /* : null */;
short int var95 /* : Bool */;
short int var96 /* : Bool */;
short int var98 /* : Bool */;
short int var99 /* : Bool */;
short int var_100 /* var : Bool */;
val* var101 /* : MProperty */;
val* var103 /* : MProperty */;
short int var104 /* : Bool */;
short int var106 /* : Bool */;
short int var107 /* : Bool */;
short int var_108 /* var : Bool */;
val* var109 /* : MProperty */;
val* var111 /* : MProperty */;
short int var112 /* : Bool */;
short int var114 /* : Bool */;
short int var115 /* : Bool */;
static val* varonce;
val* var116 /* : String */;
char* var117 /* : NativeString */;
long var118 /* : Int */;
val* var119 /* : FlatString */;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : NativeString */;
long var123 /* : Int */;
val* var124 /* : FlatString */;
val* var125 /* : String */;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : NativeString */;
long var129 /* : Int */;
val* var130 /* : FlatString */;
val* var131 /* : MProperty */;
val* var133 /* : MProperty */;
val* var134 /* : String */;
val* var135 /* : Array[Object] */;
long var136 /* : Int */;
val* var137 /* : NativeArray[Object] */;
val* var138 /* : String */;
val* var139 /* : MModule */;
val* var141 /* : MModule */;
val* var142 /* : Array[MPropDef] */;
val* var_candidatedefs /* var candidatedefs: Array[MMethodDef] */;
short int var143 /* : Bool */;
val* var144 /* : null */;
short int var145 /* : Bool */;
short int var146 /* : Bool */;
short int var148 /* : Bool */;
short int var149 /* : Bool */;
short int var_150 /* var : Bool */;
val* var151 /* : MProperty */;
val* var153 /* : MProperty */;
short int var154 /* : Bool */;
short int var156 /* : Bool */;
short int var158 /* : Bool */;
val* var159 /* : nullable Object */;
short int var160 /* : Bool */;
short int var162 /* : Bool */;
short int var164 /* : Bool */;
long var165 /* : Int */;
long var167 /* : Int */;
long var168 /* : Int */;
short int var169 /* : Bool */;
short int var171 /* : Bool */;
int cltype172;
int idtype173;
const char* var_class_name174;
short int var175 /* : Bool */;
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
static val* varonce186;
val* var187 /* : String */;
char* var188 /* : NativeString */;
long var189 /* : Int */;
val* var190 /* : FlatString */;
static val* varonce191;
val* var192 /* : String */;
char* var193 /* : NativeString */;
long var194 /* : Int */;
val* var195 /* : FlatString */;
val* var196 /* : String */;
val* var197 /* : Array[Object] */;
long var198 /* : Int */;
val* var199 /* : NativeArray[Object] */;
val* var200 /* : String */;
val* var201 /* : nullable Object */;
val* var204 /* : null */;
short int var205 /* : Bool */;
short int var206 /* : Bool */;
short int var208 /* : Bool */;
short int var210 /* : Bool */;
static val* varonce211;
val* var212 /* : String */;
char* var213 /* : NativeString */;
long var214 /* : Int */;
val* var215 /* : FlatString */;
static val* varonce216;
val* var217 /* : String */;
char* var218 /* : NativeString */;
long var219 /* : Int */;
val* var220 /* : FlatString */;
val* var221 /* : Array[Object] */;
long var222 /* : Int */;
val* var223 /* : NativeArray[Object] */;
val* var224 /* : String */;
val* var225 /* : MSignature */;
val* var226 /* : nullable MSignature */;
val* var228 /* : nullable MSignature */;
val* var229 /* : nullable MSignature */;
val* var231 /* : nullable MSignature */;
val* var_msignature /* var msignature: MSignature */;
short int var232 /* : Bool */;
val* var233 /* : MType */;
short int var234 /* : Bool */;
int cltype235;
int idtype236;
const char* var_class_name237;
val* var238 /* : CallSite */;
val* var239 /* : MModule */;
val* var241 /* : MModule */;
val* var242 /* : nullable MClassType */;
val* var244 /* : nullable MClassType */;
short int var245 /* : Bool */;
val* var246 /* : MProperty */;
val* var248 /* : MProperty */;
short int var249 /* : Bool */;
val* var_callsite /* var callsite: CallSite */;
val* var251 /* : AExprs */;
val* var253 /* : AExprs */;
val* var254 /* : Array[AExpr] */;
val* var_args /* var args: Array[AExpr] */;
long var255 /* : Int */;
long var257 /* : Int */;
long var258 /* : Int */;
short int var259 /* : Bool */;
short int var261 /* : Bool */;
int cltype262;
int idtype263;
const char* var_class_name264;
short int var265 /* : Bool */;
short int var266 /* : Bool */;
val* var267 /* : nullable MSignature */;
val* var269 /* : nullable MSignature */;
long var270 /* : Int */;
long var271 /* : Int */;
short int var272 /* : Bool */;
short int var274 /* : Bool */;
int cltype275;
int idtype276;
const char* var_class_name277;
short int var278 /* : Bool */;
static val* varonce279;
val* var280 /* : String */;
char* var281 /* : NativeString */;
long var282 /* : Int */;
val* var283 /* : FlatString */;
val* var284 /* : nullable MSignature */;
val* var286 /* : nullable MSignature */;
long var287 /* : Int */;
static val* varonce288;
val* var289 /* : String */;
char* var290 /* : NativeString */;
long var291 /* : Int */;
val* var292 /* : FlatString */;
long var293 /* : Int */;
static val* varonce294;
val* var295 /* : String */;
char* var296 /* : NativeString */;
long var297 /* : Int */;
val* var298 /* : FlatString */;
val* var299 /* : Array[Object] */;
long var300 /* : Int */;
val* var301 /* : NativeArray[Object] */;
val* var302 /* : Object */;
val* var303 /* : Object */;
val* var304 /* : String */;
long var305 /* : Int */;
long var_i /* var i: Int */;
val* var306 /* : Array[MParameter] */;
val* var308 /* : Array[MParameter] */;
val* var_309 /* var : Array[MParameter] */;
val* var310 /* : ArrayIterator[nullable Object] */;
val* var_311 /* var : ArrayIterator[MParameter] */;
short int var312 /* : Bool */;
val* var313 /* : nullable Object */;
val* var_sp /* var sp: MParameter */;
val* var314 /* : nullable MSignature */;
val* var316 /* : nullable MSignature */;
val* var317 /* : Array[MParameter] */;
val* var319 /* : Array[MParameter] */;
val* var320 /* : nullable Object */;
val* var_p /* var p: MParameter */;
val* var321 /* : MType */;
val* var323 /* : MType */;
val* var324 /* : MType */;
val* var326 /* : MType */;
short int var327 /* : Bool */;
short int var328 /* : Bool */;
static val* varonce329;
val* var330 /* : String */;
char* var331 /* : NativeString */;
long var332 /* : Int */;
val* var333 /* : FlatString */;
static val* varonce334;
val* var335 /* : String */;
char* var336 /* : NativeString */;
long var337 /* : Int */;
val* var338 /* : FlatString */;
val* var339 /* : MType */;
val* var341 /* : MType */;
static val* varonce342;
val* var343 /* : String */;
char* var344 /* : NativeString */;
long var345 /* : Int */;
val* var346 /* : FlatString */;
val* var347 /* : String */;
val* var349 /* : String */;
static val* varonce350;
val* var351 /* : String */;
char* var352 /* : NativeString */;
long var353 /* : Int */;
val* var354 /* : FlatString */;
val* var355 /* : MType */;
val* var357 /* : MType */;
static val* varonce358;
val* var359 /* : String */;
char* var360 /* : NativeString */;
long var361 /* : Int */;
val* var362 /* : FlatString */;
val* var363 /* : Array[Object] */;
long var364 /* : Int */;
val* var365 /* : NativeArray[Object] */;
val* var366 /* : Object */;
val* var367 /* : String */;
long var368 /* : Int */;
long var369 /* : Int */;
short int var371 /* : Bool */;
int cltype372;
int idtype373;
const char* var_class_name374;
long var375 /* : Int */;
short int var378 /* : Bool */;
var_v = p0;
{
{ /* Inline typing#TypeVisitor#anchor (var_v) on <var_v:TypeVisitor> */
var2 = var_v->attrs[COLOR_nit__typing__TypeVisitor___anchor].val; /* _anchor on <var_v:TypeVisitor> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_anchor = var;
var3 = NULL;
if (var_anchor == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_anchor,var3) on <var_anchor:nullable MClassType> */
var_other = var3;
{
var7 = ((short int (*)(val* self, val* p0))(var_anchor->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_anchor, var_other) /* == on <var_anchor:nullable MClassType(MClassType)>*/;
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1657);
show_backtrace(1);
}
{
{ /* Inline typing#TypeVisitor#selfvariable (var_v) on <var_v:TypeVisitor> */
var11 = var_v->attrs[COLOR_nit__typing__TypeVisitor___selfvariable].val; /* _selfvariable on <var_v:TypeVisitor> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _selfvariable");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 50);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = nit__typing___nit__typing__TypeVisitor___get_variable(var_v, self, var9);
}
var_recvtype = var12;
var13 = NULL;
if (var_recvtype == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_recvtype,var13) on <var_recvtype:nullable MType> */
var_other = var13;
{
var17 = ((short int (*)(val* self, val* p0))(var_recvtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_recvtype, var_other) /* == on <var_recvtype:nullable MType(MType)>*/;
}
var18 = !var17;
var15 = var18;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1659);
show_backtrace(1);
}
{
{ /* Inline typing#TypeVisitor#mpropdef (var_v) on <var_v:TypeVisitor> */
var21 = var_v->attrs[COLOR_nit__typing__TypeVisitor___mpropdef].val; /* _mpropdef on <var_v:TypeVisitor> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
var_mpropdef = var19;
/* <var_mpropdef:nullable MPropDef> isa MMethodDef */
cltype = type_nit__MMethodDef.color;
idtype = type_nit__MMethodDef.id;
if(var_mpropdef == NULL) {
var22 = 0;
} else {
if(cltype >= var_mpropdef->type->table_size) {
var22 = 0;
} else {
var22 = var_mpropdef->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1661);
show_backtrace(1);
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var25 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MPropDef(MMethodDef)> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
var_mproperty = var23;
var26 = NULL;
var_superprop = var26;
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var29 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MPropDef(MMethodDef)> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline model#MClassDef#supertypes (var27) on <var27:MClassDef> */
var32 = var27->attrs[COLOR_nit__model__MClassDef___supertypes].val; /* _supertypes on <var27:MClassDef> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supertypes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 566);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
var_ = var30;
{
var33 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_34 = var33;
for(;;) {
{
var35 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_34);
}
if (var35){
{
var36 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_34);
}
var_msupertype = var36;
{
{ /* Inline typing#TypeVisitor#mmodule (var_v) on <var_v:TypeVisitor> */
var39 = var_v->attrs[COLOR_nit__typing__TypeVisitor___mmodule].val; /* _mmodule on <var_v:TypeVisitor> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 36);
show_backtrace(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
var40 = nit___nit__MClassType___MType__anchor_to(var_msupertype, var37, var_anchor);
}
var_msupertype = var40;
{
{ /* Inline typing#TypeVisitor#modelbuilder (var_v) on <var_v:TypeVisitor> */
var43 = var_v->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <var_v:TypeVisitor> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
show_backtrace(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var41) on <var41:ModelBuilder> */
var46 = var41->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var41:ModelBuilder> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count (var44) on <var44:ToolContext> */
var49 = var44->attrs[COLOR_nit__toolcontext__ToolContext___error_count].l; /* _error_count on <var44:ToolContext> */
var47 = var49;
RET_LABEL48:(void)0;
}
}
var_errcount = var47;
{
{ /* Inline model#MProperty#name (var_mproperty) on <var_mproperty:MMethod> */
var52 = var_mproperty->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var_mproperty:MMethod> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1741);
show_backtrace(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
var53 = nit__typing___nit__typing__TypeVisitor___try_get_mproperty_by_name2(var_v, self, var_msupertype, var50);
}
/* <var53:nullable MProperty> isa nullable MMethod */
cltype55 = type_nullable__nit__MMethod.color;
idtype56 = type_nullable__nit__MMethod.id;
if(var53 == NULL) {
var54 = 1;
} else {
if(cltype55 >= var53->type->table_size) {
var54 = 0;
} else {
var54 = var53->type->type_table[cltype55] == idtype56;
}
}
if (unlikely(!var54)) {
var_class_name = var53 == NULL ? "null" : var53->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MMethod", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1667);
show_backtrace(1);
}
var_candidate = var53;
var57 = NULL;
if (var_candidate == NULL) {
var58 = 1; /* is null */
} else {
var58 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_candidate,var57) on <var_candidate:nullable MMethod> */
var_other61 = var57;
{
{ /* Inline kernel#Object#is_same_instance (var_candidate,var_other61) on <var_candidate:nullable MMethod(MMethod)> */
var64 = var_candidate == var_other61;
var62 = var64;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
}
var59 = var62;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
var58 = var59;
}
if (var58){
{
{ /* Inline typing#TypeVisitor#modelbuilder (var_v) on <var_v:TypeVisitor> */
var67 = var_v->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <var_v:TypeVisitor> */
if (unlikely(var67 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
show_backtrace(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var65) on <var65:ModelBuilder> */
var70 = var65->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var65:ModelBuilder> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count (var68) on <var68:ToolContext> */
var73 = var68->attrs[COLOR_nit__toolcontext__ToolContext___error_count].l; /* _error_count on <var68:ToolContext> */
var71 = var73;
RET_LABEL72:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var71,var_errcount) on <var71:Int> */
/* Covariant cast for argument 0 (i) <var_errcount:Int> isa OTHER */
/* <var_errcount:Int> isa OTHER */
var76 = 1; /* easy <var_errcount:Int> isa OTHER*/
if (unlikely(!var76)) {
var_class_name79 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name79);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var80 = var71 > var_errcount;
var74 = var80;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
}
if (var74){
goto RET_LABEL;
} else {
}
goto BREAK_label;
} else {
}
var82 = NULL;
if (var_superprop == NULL) {
var83 = 0; /* is null */
} else {
var83 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_superprop,var82) on <var_superprop:nullable MMethodDef> */
var_other = var82;
{
var86 = ((short int (*)(val* self, val* p0))(var_superprop->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_superprop, var_other) /* == on <var_superprop:nullable MMethodDef(MMethodDef)>*/;
}
var87 = !var86;
var84 = var87;
goto RET_LABEL85;
RET_LABEL85:(void)0;
}
var83 = var84;
}
var_88 = var83;
if (var83){
{
{ /* Inline model#MMethod#is_root_init (var_candidate) on <var_candidate:nullable MMethod(MMethod)> */
var91 = var_candidate->attrs[COLOR_nit__model__MMethod___is_root_init].s; /* _is_root_init on <var_candidate:nullable MMethod(MMethod)> */
var89 = var91;
RET_LABEL90:(void)0;
}
}
var81 = var89;
} else {
var81 = var_88;
}
if (var81){
goto BREAK_label;
} else {
}
var94 = NULL;
if (var_superprop == NULL) {
var95 = 0; /* is null */
} else {
var95 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_superprop,var94) on <var_superprop:nullable MMethodDef> */
var_other = var94;
{
var98 = ((short int (*)(val* self, val* p0))(var_superprop->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_superprop, var_other) /* == on <var_superprop:nullable MMethodDef(MMethodDef)>*/;
}
var99 = !var98;
var96 = var99;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
var95 = var96;
}
var_100 = var95;
if (var95){
{
{ /* Inline model#MPropDef#mproperty (var_superprop) on <var_superprop:nullable MMethodDef(MMethodDef)> */
var103 = var_superprop->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_superprop:nullable MMethodDef(MMethodDef)> */
if (unlikely(var103 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var101 = var103;
RET_LABEL102:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var101,var_candidate) on <var101:MProperty(MMethod)> */
var_other = var_candidate;
{
var106 = ((short int (*)(val* self, val* p0))(var101->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var101, var_other) /* == on <var101:MProperty(MMethod)>*/;
}
var107 = !var106;
var104 = var107;
goto RET_LABEL105;
RET_LABEL105:(void)0;
}
}
var93 = var104;
} else {
var93 = var_100;
}
var_108 = var93;
if (var93){
{
{ /* Inline model#MPropDef#mproperty (var_superprop) on <var_superprop:nullable MMethodDef(MMethodDef)> */
var111 = var_superprop->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_superprop:nullable MMethodDef(MMethodDef)> */
if (unlikely(var111 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var109 = var111;
RET_LABEL110:(void)0;
}
}
{
{ /* Inline model#MMethod#is_root_init (var109) on <var109:MProperty(MMethod)> */
var114 = var109->attrs[COLOR_nit__model__MMethod___is_root_init].s; /* _is_root_init on <var109:MProperty(MMethod)> */
var112 = var114;
RET_LABEL113:(void)0;
}
}
var115 = !var112;
var92 = var115;
} else {
var92 = var_108;
}
if (var92){
if (varonce) {
var116 = varonce;
} else {
var117 = "Error: conflicting super constructor to call for ";
var118 = 49;
var119 = standard___standard__NativeString___to_s_with_length(var117, var118);
var116 = var119;
varonce = var116;
}
if (varonce120) {
var121 = varonce120;
} else {
var122 = ": ";
var123 = 2;
var124 = standard___standard__NativeString___to_s_with_length(var122, var123);
var121 = var124;
varonce120 = var121;
}
{
var125 = nit___nit__MProperty___nit__model_base__MEntity__full_name(var_candidate);
}
if (varonce126) {
var127 = varonce126;
} else {
var128 = ", ";
var129 = 2;
var130 = standard___standard__NativeString___to_s_with_length(var128, var129);
var127 = var130;
varonce126 = var127;
}
{
{ /* Inline model#MPropDef#mproperty (var_superprop) on <var_superprop:nullable MMethodDef(MMethodDef)> */
var133 = var_superprop->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_superprop:nullable MMethodDef(MMethodDef)> */
if (unlikely(var133 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var131 = var133;
RET_LABEL132:(void)0;
}
}
{
var134 = nit___nit__MProperty___nit__model_base__MEntity__full_name(var131);
}
var135 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var135 = array_instance Array[Object] */
var136 = 6;
var137 = NEW_standard__NativeArray(var136, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var137)->values[0] = (val*) var116;
((struct instance_standard__NativeArray*)var137)->values[1] = (val*) var_mproperty;
((struct instance_standard__NativeArray*)var137)->values[2] = (val*) var121;
((struct instance_standard__NativeArray*)var137)->values[3] = (val*) var125;
((struct instance_standard__NativeArray*)var137)->values[4] = (val*) var127;
((struct instance_standard__NativeArray*)var137)->values[5] = (val*) var134;
{
((void (*)(val* self, val* p0, long p1))(var135->class->vft[COLOR_standard__array__Array__with_native]))(var135, var137, var136) /* with_native on <var135:Array[Object]>*/;
}
}
{
var138 = ((val* (*)(val* self))(var135->class->vft[COLOR_standard__string__Object__to_s]))(var135) /* to_s on <var135:Array[Object]>*/;
}
{
nit__typing___nit__typing__TypeVisitor___error(var_v, self, var138); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#TypeVisitor#mmodule (var_v) on <var_v:TypeVisitor> */
var141 = var_v->attrs[COLOR_nit__typing__TypeVisitor___mmodule].val; /* _mmodule on <var_v:TypeVisitor> */
if (unlikely(var141 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 36);
show_backtrace(1);
}
var139 = var141;
RET_LABEL140:(void)0;
}
}
{
var142 = nit___nit__MProperty___lookup_definitions(var_candidate, var139, var_anchor);
}
var_candidatedefs = var142;
var144 = NULL;
if (var_superprop == NULL) {
var145 = 0; /* is null */
} else {
var145 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_superprop,var144) on <var_superprop:nullable MMethodDef> */
var_other = var144;
{
var148 = ((short int (*)(val* self, val* p0))(var_superprop->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_superprop, var_other) /* == on <var_superprop:nullable MMethodDef(MMethodDef)>*/;
}
var149 = !var148;
var146 = var149;
goto RET_LABEL147;
RET_LABEL147:(void)0;
}
var145 = var146;
}
var_150 = var145;
if (var145){
{
{ /* Inline model#MPropDef#mproperty (var_superprop) on <var_superprop:nullable MMethodDef(MMethodDef)> */
var153 = var_superprop->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_superprop:nullable MMethodDef(MMethodDef)> */
if (unlikely(var153 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var151 = var153;
RET_LABEL152:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var151,var_candidate) on <var151:MProperty(MMethod)> */
var_other61 = var_candidate;
{
{ /* Inline kernel#Object#is_same_instance (var151,var_other61) on <var151:MProperty(MMethod)> */
var158 = var151 == var_other61;
var156 = var158;
goto RET_LABEL157;
RET_LABEL157:(void)0;
}
}
var154 = var156;
goto RET_LABEL155;
RET_LABEL155:(void)0;
}
}
var143 = var154;
} else {
var143 = var_150;
}
if (var143){
{
var159 = standard___standard__SequenceRead___Collection__first(var_candidatedefs);
}
{
{ /* Inline kernel#Object#== (var_superprop,var159) on <var_superprop:nullable MMethodDef(MMethodDef)> */
var_other61 = var159;
{
{ /* Inline kernel#Object#is_same_instance (var_superprop,var_other61) on <var_superprop:nullable MMethodDef(MMethodDef)> */
var164 = var_superprop == var_other61;
var162 = var164;
goto RET_LABEL163;
RET_LABEL163:(void)0;
}
}
var160 = var162;
goto RET_LABEL161;
RET_LABEL161:(void)0;
}
}
if (var160){
goto BREAK_label;
} else {
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_candidatedefs, var_superprop); /* Direct call array#Array#add on <var_candidatedefs:Array[MMethodDef]>*/
}
} else {
}
{
{ /* Inline array#AbstractArrayRead#length (var_candidatedefs) on <var_candidatedefs:Array[MMethodDef]> */
var167 = var_candidatedefs->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_candidatedefs:Array[MMethodDef]> */
var165 = var167;
RET_LABEL166:(void)0;
}
}
var168 = 1;
{
{ /* Inline kernel#Int#> (var165,var168) on <var165:Int> */
/* Covariant cast for argument 0 (i) <var168:Int> isa OTHER */
/* <var168:Int> isa OTHER */
var171 = 1; /* easy <var168:Int> isa OTHER*/
if (unlikely(!var171)) {
var_class_name174 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name174);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var175 = var165 > var168;
var169 = var175;
goto RET_LABEL170;
RET_LABEL170:(void)0;
}
}
if (var169){
if (varonce176) {
var177 = varonce176;
} else {
var178 = "Error: conflicting property definitions for property ";
var179 = 53;
var180 = standard___standard__NativeString___to_s_with_length(var178, var179);
var177 = var180;
varonce176 = var177;
}
if (varonce181) {
var182 = varonce181;
} else {
var183 = " in ";
var184 = 4;
var185 = standard___standard__NativeString___to_s_with_length(var183, var184);
var182 = var185;
varonce181 = var182;
}
if (varonce186) {
var187 = varonce186;
} else {
var188 = ": ";
var189 = 2;
var190 = standard___standard__NativeString___to_s_with_length(var188, var189);
var187 = var190;
varonce186 = var187;
}
if (varonce191) {
var192 = varonce191;
} else {
var193 = ", ";
var194 = 2;
var195 = standard___standard__NativeString___to_s_with_length(var193, var194);
var192 = var195;
varonce191 = var192;
}
{
var196 = standard__string___Collection___join(var_candidatedefs, var192);
}
var197 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var197 = array_instance Array[Object] */
var198 = 6;
var199 = NEW_standard__NativeArray(var198, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var199)->values[0] = (val*) var177;
((struct instance_standard__NativeArray*)var199)->values[1] = (val*) var_mproperty;
((struct instance_standard__NativeArray*)var199)->values[2] = (val*) var182;
((struct instance_standard__NativeArray*)var199)->values[3] = (val*) var_recvtype;
((struct instance_standard__NativeArray*)var199)->values[4] = (val*) var187;
((struct instance_standard__NativeArray*)var199)->values[5] = (val*) var196;
{
((void (*)(val* self, val* p0, long p1))(var197->class->vft[COLOR_standard__array__Array__with_native]))(var197, var199, var198) /* with_native on <var197:Array[Object]>*/;
}
}
{
var200 = ((val* (*)(val* self))(var197->class->vft[COLOR_standard__string__Object__to_s]))(var197) /* to_s on <var197:Array[Object]>*/;
}
{
nit__typing___nit__typing__TypeVisitor___error(var_v, self, var200); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
var201 = standard___standard__SequenceRead___Collection__first(var_candidatedefs);
}
var_superprop = var201;
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_34); /* Direct call array#ArrayIterator#next on <var_34:ArrayIterator[MClassType]>*/
}
} else {
goto BREAK_label202;
}
}
BREAK_label202: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_34) on <var_34:ArrayIterator[MClassType]> */
RET_LABEL203:(void)0;
}
}
var204 = NULL;
if (var_superprop == NULL) {
var205 = 1; /* is null */
} else {
var205 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_superprop,var204) on <var_superprop:nullable MMethodDef> */
var_other61 = var204;
{
{ /* Inline kernel#Object#is_same_instance (var_superprop,var_other61) on <var_superprop:nullable MMethodDef(MMethodDef)> */
var210 = var_superprop == var_other61;
var208 = var210;
goto RET_LABEL209;
RET_LABEL209:(void)0;
}
}
var206 = var208;
goto RET_LABEL207;
RET_LABEL207:(void)0;
}
var205 = var206;
}
if (var205){
if (varonce211) {
var212 = varonce211;
} else {
var213 = "Error: No super method to call for ";
var214 = 35;
var215 = standard___standard__NativeString___to_s_with_length(var213, var214);
var212 = var215;
varonce211 = var212;
}
if (varonce216) {
var217 = varonce216;
} else {
var218 = ".";
var219 = 1;
var220 = standard___standard__NativeString___to_s_with_length(var218, var219);
var217 = var220;
varonce216 = var217;
}
var221 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var221 = array_instance Array[Object] */
var222 = 3;
var223 = NEW_standard__NativeArray(var222, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var223)->values[0] = (val*) var212;
((struct instance_standard__NativeArray*)var223)->values[1] = (val*) var_mproperty;
((struct instance_standard__NativeArray*)var223)->values[2] = (val*) var217;
{
((void (*)(val* self, val* p0, long p1))(var221->class->vft[COLOR_standard__array__Array__with_native]))(var221, var223, var222) /* with_native on <var221:Array[Object]>*/;
}
}
{
var224 = ((val* (*)(val* self))(var221->class->vft[COLOR_standard__string__Object__to_s]))(var221) /* to_s on <var221:Array[Object]>*/;
}
{
nit__typing___nit__typing__TypeVisitor___error(var_v, self, var224); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MMethodDef#new_msignature (var_superprop) on <var_superprop:nullable MMethodDef(MMethodDef)> */
var228 = var_superprop->attrs[COLOR_nit__model__MMethodDef___new_msignature].val; /* _new_msignature on <var_superprop:nullable MMethodDef(MMethodDef)> */
var226 = var228;
RET_LABEL227:(void)0;
}
}
if (var226!=NULL) {
var225 = var226;
} else {
{
{ /* Inline model#MMethodDef#msignature (var_superprop) on <var_superprop:nullable MMethodDef(MMethodDef)> */
var231 = var_superprop->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_superprop:nullable MMethodDef(MMethodDef)> */
var229 = var231;
RET_LABEL230:(void)0;
}
}
if (unlikely(var229 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1695);
show_backtrace(1);
}
var225 = var229;
}
var_msignature = var225;
var232 = 1;
{
var233 = nit__typing___nit__typing__TypeVisitor___resolve_for(var_v, var_msignature, var_recvtype, var232);
}
/* <var233:MType> isa MSignature */
cltype235 = type_nit__MSignature.color;
idtype236 = type_nit__MSignature.id;
if(cltype235 >= var233->type->table_size) {
var234 = 0;
} else {
var234 = var233->type->type_table[cltype235] == idtype236;
}
if (unlikely(!var234)) {
var_class_name237 = var233 == NULL ? "null" : var233->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MSignature", var_class_name237);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1696);
show_backtrace(1);
}
var_msignature = var233;
var238 = NEW_nit__CallSite(&type_nit__CallSite);
{
{ /* Inline typing#TypeVisitor#mmodule (var_v) on <var_v:TypeVisitor> */
var241 = var_v->attrs[COLOR_nit__typing__TypeVisitor___mmodule].val; /* _mmodule on <var_v:TypeVisitor> */
if (unlikely(var241 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 36);
show_backtrace(1);
}
var239 = var241;
RET_LABEL240:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#anchor (var_v) on <var_v:TypeVisitor> */
var244 = var_v->attrs[COLOR_nit__typing__TypeVisitor___anchor].val; /* _anchor on <var_v:TypeVisitor> */
var242 = var244;
RET_LABEL243:(void)0;
}
}
var245 = 1;
{
{ /* Inline model#MPropDef#mproperty (var_superprop) on <var_superprop:nullable MMethodDef(MMethodDef)> */
var248 = var_superprop->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_superprop:nullable MMethodDef(MMethodDef)> */
if (unlikely(var248 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var246 = var248;
RET_LABEL247:(void)0;
}
}
var249 = 0;
{
((void (*)(val* self, val* p0))(var238->class->vft[COLOR_nit__typing__CallSite__node_61d]))(var238, self) /* node= on <var238:CallSite>*/;
}
{
((void (*)(val* self, val* p0))(var238->class->vft[COLOR_nit__typing__CallSite__recv_61d]))(var238, var_recvtype) /* recv= on <var238:CallSite>*/;
}
{
((void (*)(val* self, val* p0))(var238->class->vft[COLOR_nit__typing__CallSite__mmodule_61d]))(var238, var239) /* mmodule= on <var238:CallSite>*/;
}
{
((void (*)(val* self, val* p0))(var238->class->vft[COLOR_nit__typing__CallSite__anchor_61d]))(var238, var242) /* anchor= on <var238:CallSite>*/;
}
{
((void (*)(val* self, short int p0))(var238->class->vft[COLOR_nit__typing__CallSite__recv_is_self_61d]))(var238, var245) /* recv_is_self= on <var238:CallSite>*/;
}
{
((void (*)(val* self, val* p0))(var238->class->vft[COLOR_nit__typing__CallSite__mproperty_61d]))(var238, var246) /* mproperty= on <var238:CallSite>*/;
}
{
((void (*)(val* self, val* p0))(var238->class->vft[COLOR_nit__typing__CallSite__mpropdef_61d]))(var238, var_superprop) /* mpropdef= on <var238:CallSite>*/;
}
{
((void (*)(val* self, val* p0))(var238->class->vft[COLOR_nit__typing__CallSite__msignature_61d]))(var238, var_msignature) /* msignature= on <var238:CallSite>*/;
}
{
((void (*)(val* self, short int p0))(var238->class->vft[COLOR_nit__typing__CallSite__erasure_cast_61d]))(var238, var249) /* erasure_cast= on <var238:CallSite>*/;
}
{
((void (*)(val* self))(var238->class->vft[COLOR_standard__kernel__Object__init]))(var238) /* init on <var238:CallSite>*/;
}
var_callsite = var238;
{
{ /* Inline typing#ASuperExpr#callsite= (self,var_callsite) on <self:ASuperExpr> */
self->attrs[COLOR_nit__typing__ASuperExpr___callsite].val = var_callsite; /* _callsite on <self:ASuperExpr> */
RET_LABEL250:(void)0;
}
}
{
{ /* Inline parser_nodes#ASuperExpr#n_args (self) on <self:ASuperExpr> */
var253 = self->attrs[COLOR_nit__parser_nodes__ASuperExpr___n_args].val; /* _n_args on <self:ASuperExpr> */
if (unlikely(var253 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2051);
show_backtrace(1);
}
var251 = var253;
RET_LABEL252:(void)0;
}
}
{
var254 = nit__typing___AExprs___to_a(var251);
}
var_args = var254;
{
{ /* Inline array#AbstractArrayRead#length (var_args) on <var_args:Array[AExpr]> */
var257 = var_args->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_args:Array[AExpr]> */
var255 = var257;
RET_LABEL256:(void)0;
}
}
var258 = 0;
{
{ /* Inline kernel#Int#> (var255,var258) on <var255:Int> */
/* Covariant cast for argument 0 (i) <var258:Int> isa OTHER */
/* <var258:Int> isa OTHER */
var261 = 1; /* easy <var258:Int> isa OTHER*/
if (unlikely(!var261)) {
var_class_name264 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name264);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var265 = var255 > var258;
var259 = var265;
goto RET_LABEL260;
RET_LABEL260:(void)0;
}
}
if (var259){
{
var266 = nit___nit__CallSite___check_signature(var_callsite, var_v, var_args);
}
} else {
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var269 = var_mpropdef->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var267 = var269;
RET_LABEL268:(void)0;
}
}
if (var267 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1706);
show_backtrace(1);
} else {
var270 = nit___nit__MSignature___arity(var267);
}
{
var271 = nit___nit__MSignature___arity(var_msignature);
}
{
{ /* Inline kernel#Int#< (var270,var271) on <var270:Int> */
/* Covariant cast for argument 0 (i) <var271:Int> isa OTHER */
/* <var271:Int> isa OTHER */
var274 = 1; /* easy <var271:Int> isa OTHER*/
if (unlikely(!var274)) {
var_class_name277 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name277);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var278 = var270 < var271;
var272 = var278;
goto RET_LABEL273;
RET_LABEL273:(void)0;
}
}
if (var272){
if (varonce279) {
var280 = varonce279;
} else {
var281 = "Error: Not enough implicit arguments to pass. Got ";
var282 = 50;
var283 = standard___standard__NativeString___to_s_with_length(var281, var282);
var280 = var283;
varonce279 = var280;
}
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var286 = var_mpropdef->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var284 = var286;
RET_LABEL285:(void)0;
}
}
if (var284 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1707);
show_backtrace(1);
} else {
var287 = nit___nit__MSignature___arity(var284);
}
if (varonce288) {
var289 = varonce288;
} else {
var290 = ", expected at least ";
var291 = 20;
var292 = standard___standard__NativeString___to_s_with_length(var290, var291);
var289 = var292;
varonce288 = var289;
}
{
var293 = nit___nit__MSignature___arity(var_msignature);
}
if (varonce294) {
var295 = varonce294;
} else {
var296 = ". Signature is ";
var297 = 15;
var298 = standard___standard__NativeString___to_s_with_length(var296, var297);
var295 = var298;
varonce294 = var295;
}
var299 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var299 = array_instance Array[Object] */
var300 = 6;
var301 = NEW_standard__NativeArray(var300, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var301)->values[0] = (val*) var280;
var302 = BOX_standard__Int(var287); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var301)->values[1] = (val*) var302;
((struct instance_standard__NativeArray*)var301)->values[2] = (val*) var289;
var303 = BOX_standard__Int(var293); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var301)->values[3] = (val*) var303;
((struct instance_standard__NativeArray*)var301)->values[4] = (val*) var295;
((struct instance_standard__NativeArray*)var301)->values[5] = (val*) var_msignature;
{
((void (*)(val* self, val* p0, long p1))(var299->class->vft[COLOR_standard__array__Array__with_native]))(var299, var301, var300) /* with_native on <var299:Array[Object]>*/;
}
}
{
var304 = ((val* (*)(val* self))(var299->class->vft[COLOR_standard__string__Object__to_s]))(var299) /* to_s on <var299:Array[Object]>*/;
}
{
nit__typing___nit__typing__TypeVisitor___error(var_v, self, var304); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
var305 = 0;
var_i = var305;
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:MSignature> */
var308 = var_msignature->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var308 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var306 = var308;
RET_LABEL307:(void)0;
}
}
var_309 = var306;
{
var310 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_309);
}
var_311 = var310;
for(;;) {
{
var312 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_311);
}
if (var312){
{
var313 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_311);
}
var_sp = var313;
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var316 = var_mpropdef->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var314 = var316;
RET_LABEL315:(void)0;
}
}
if (var314 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1713);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#mparameters (var314) on <var314:nullable MSignature> */
if (unlikely(var314 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var319 = var314->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var314:nullable MSignature> */
if (unlikely(var319 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var317 = var319;
RET_LABEL318:(void)0;
}
}
{
var320 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var317, var_i);
}
var_p = var320;
{
{ /* Inline model#MParameter#mtype (var_p) on <var_p:MParameter> */
var323 = var_p->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var_p:MParameter> */
if (unlikely(var323 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1690);
show_backtrace(1);
}
var321 = var323;
RET_LABEL322:(void)0;
}
}
{
{ /* Inline model#MParameter#mtype (var_sp) on <var_sp:MParameter> */
var326 = var_sp->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var_sp:MParameter> */
if (unlikely(var326 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1690);
show_backtrace(1);
}
var324 = var326;
RET_LABEL325:(void)0;
}
}
{
var327 = nit__typing___nit__typing__TypeVisitor___is_subtype(var_v, var321, var324);
}
var328 = !var327;
if (var328){
if (varonce329) {
var330 = varonce329;
} else {
var331 = "Type error: expected argument #";
var332 = 31;
var333 = standard___standard__NativeString___to_s_with_length(var331, var332);
var330 = var333;
varonce329 = var330;
}
if (varonce334) {
var335 = varonce334;
} else {
var336 = " of type ";
var337 = 9;
var338 = standard___standard__NativeString___to_s_with_length(var336, var337);
var335 = var338;
varonce334 = var335;
}
{
{ /* Inline model#MParameter#mtype (var_sp) on <var_sp:MParameter> */
var341 = var_sp->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var_sp:MParameter> */
if (unlikely(var341 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1690);
show_backtrace(1);
}
var339 = var341;
RET_LABEL340:(void)0;
}
}
if (varonce342) {
var343 = varonce342;
} else {
var344 = ", got implicit argument ";
var345 = 24;
var346 = standard___standard__NativeString___to_s_with_length(var344, var345);
var343 = var346;
varonce342 = var343;
}
{
{ /* Inline model#MParameter#name (var_p) on <var_p:MParameter> */
var349 = var_p->attrs[COLOR_nit__model__MParameter___name].val; /* _name on <var_p:MParameter> */
if (unlikely(var349 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1687);
show_backtrace(1);
}
var347 = var349;
RET_LABEL348:(void)0;
}
}
if (varonce350) {
var351 = varonce350;
} else {
var352 = " of type ";
var353 = 9;
var354 = standard___standard__NativeString___to_s_with_length(var352, var353);
var351 = var354;
varonce350 = var351;
}
{
{ /* Inline model#MParameter#mtype (var_p) on <var_p:MParameter> */
var357 = var_p->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var_p:MParameter> */
if (unlikely(var357 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1690);
show_backtrace(1);
}
var355 = var357;
RET_LABEL356:(void)0;
}
}
if (varonce358) {
var359 = varonce358;
} else {
var360 = ". Signature is ";
var361 = 15;
var362 = standard___standard__NativeString___to_s_with_length(var360, var361);
var359 = var362;
varonce358 = var359;
}
var363 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var363 = array_instance Array[Object] */
var364 = 10;
var365 = NEW_standard__NativeArray(var364, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var365)->values[0] = (val*) var330;
var366 = BOX_standard__Int(var_i); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var365)->values[1] = (val*) var366;
((struct instance_standard__NativeArray*)var365)->values[2] = (val*) var335;
((struct instance_standard__NativeArray*)var365)->values[3] = (val*) var339;
((struct instance_standard__NativeArray*)var365)->values[4] = (val*) var343;
((struct instance_standard__NativeArray*)var365)->values[5] = (val*) var347;
((struct instance_standard__NativeArray*)var365)->values[6] = (val*) var351;
((struct instance_standard__NativeArray*)var365)->values[7] = (val*) var355;
((struct instance_standard__NativeArray*)var365)->values[8] = (val*) var359;
((struct instance_standard__NativeArray*)var365)->values[9] = (val*) var_msignature;
{
((void (*)(val* self, val* p0, long p1))(var363->class->vft[COLOR_standard__array__Array__with_native]))(var363, var365, var364) /* with_native on <var363:Array[Object]>*/;
}
}
{
var367 = ((val* (*)(val* self))(var363->class->vft[COLOR_standard__string__Object__to_s]))(var363) /* to_s on <var363:Array[Object]>*/;
}
{
nit__typing___nit__typing__TypeVisitor___error(var_v, self, var367); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
var368 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var368) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var368:Int> isa OTHER */
/* <var368:Int> isa OTHER */
var371 = 1; /* easy <var368:Int> isa OTHER*/
if (unlikely(!var371)) {
var_class_name374 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name374);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var375 = var_i + var368;
var369 = var375;
goto RET_LABEL370;
RET_LABEL370:(void)0;
}
}
var_i = var369;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_311); /* Direct call array#ArrayIterator#next on <var_311:ArrayIterator[MParameter]>*/
}
} else {
goto BREAK_label376;
}
}
BREAK_label376: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_311) on <var_311:ArrayIterator[MParameter]> */
RET_LABEL377:(void)0;
}
}
}
var378 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var378) on <self:ASuperExpr> */
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var378; /* _is_typed on <self:ASuperExpr> */
RET_LABEL379:(void)0;
}
}
RET_LABEL:;
}
/* method typing#ANewExpr#callsite for (self: ANewExpr): nullable CallSite */
val* nit__typing___ANewExpr___callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nit__typing__ANewExpr___callsite].val; /* _callsite on <self:ANewExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ANewExpr#callsite= for (self: ANewExpr, nullable CallSite) */
void nit__typing___ANewExpr___callsite_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__ANewExpr___callsite].val = p0; /* _callsite on <self:ANewExpr> */
RET_LABEL:;
}
/* method typing#ANewExpr#recvtype for (self: ANewExpr): nullable MClassType */
val* nit__typing___ANewExpr___recvtype(val* self) {
val* var /* : nullable MClassType */;
val* var1 /* : nullable MClassType */;
var1 = self->attrs[COLOR_nit__typing__ANewExpr___recvtype].val; /* _recvtype on <self:ANewExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ANewExpr#recvtype= for (self: ANewExpr, nullable MClassType) */
void nit__typing___ANewExpr___recvtype_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__ANewExpr___recvtype].val = p0; /* _recvtype on <self:ANewExpr> */
RET_LABEL:;
}
/* method typing#ANewExpr#accept_typing for (self: ANewExpr, TypeVisitor) */
void nit__typing___ANewExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AType */;
val* var2 /* : AType */;
val* var3 /* : nullable MType */;
val* var_recvtype /* var recvtype: nullable MType */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
int cltype;
int idtype;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
static val* varonce;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : FlatString */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : FlatString */;
val* var25 /* : Array[Object] */;
long var26 /* : Int */;
val* var27 /* : NativeArray[Object] */;
val* var28 /* : String */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : FlatString */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : FlatString */;
val* var39 /* : Array[Object] */;
long var40 /* : Int */;
val* var41 /* : NativeArray[Object] */;
val* var42 /* : String */;
val* var44 /* : nullable TId */;
val* var46 /* : nullable TId */;
val* var_nid /* var nid: nullable TId */;
val* var47 /* : null */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
val* var_other51 /* var other: nullable Object */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
val* var54 /* : String */;
val* var_name /* var name: String */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
long var58 /* : Int */;
val* var59 /* : FlatString */;
short int var60 /* : Bool */;
val* var61 /* : nullable CallSite */;
val* var_callsite /* var callsite: nullable CallSite */;
val* var62 /* : null */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
val* var69 /* : MMethod */;
val* var71 /* : MMethod */;
short int var72 /* : Bool */;
short int var74 /* : Bool */;
short int var75 /* : Bool */;
val* var76 /* : MClass */;
val* var78 /* : MClass */;
val* var79 /* : MClassKind */;
val* var81 /* : MClassKind */;
val* var_kind /* var kind: MClassKind */;
val* var82 /* : MClassKind */;
short int var83 /* : Bool */;
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
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : NativeString */;
long var100 /* : Int */;
val* var101 /* : FlatString */;
val* var102 /* : Array[Object] */;
long var103 /* : Int */;
val* var104 /* : NativeArray[Object] */;
val* var105 /* : String */;
val* var107 /* : MSignature */;
val* var109 /* : MSignature */;
val* var110 /* : nullable MType */;
val* var112 /* : nullable MType */;
val* var114 /* : nullable MType */;
val* var116 /* : nullable MType */;
val* var117 /* : null */;
short int var118 /* : Bool */;
short int var119 /* : Bool */;
short int var121 /* : Bool */;
short int var122 /* : Bool */;
val* var124 /* : MMethod */;
val* var126 /* : MMethod */;
val* var127 /* : MClass */;
val* var129 /* : MClass */;
short int var130 /* : Bool */;
short int var131 /* : Bool */;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : NativeString */;
long var135 /* : Int */;
val* var136 /* : FlatString */;
static val* varonce137;
val* var138 /* : String */;
char* var139 /* : NativeString */;
long var140 /* : Int */;
val* var141 /* : FlatString */;
val* var142 /* : Array[Object] */;
long var143 /* : Int */;
val* var144 /* : NativeArray[Object] */;
val* var145 /* : String */;
val* var146 /* : AExprs */;
val* var148 /* : AExprs */;
val* var149 /* : Array[AExpr] */;
val* var_args /* var args: Array[AExpr] */;
short int var150 /* : Bool */;
var_v = p0;
{
{ /* Inline parser_nodes#ANewExpr#n_type (self) on <self:ANewExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_type].val; /* _n_type on <self:ANewExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1962);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit__typing___nit__typing__TypeVisitor___resolve_mtype(var_v, var);
}
var_recvtype = var3;
var4 = NULL;
if (var_recvtype == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_recvtype,var4) on <var_recvtype:nullable MType> */
var_other = var4;
{
{ /* Inline kernel#Object#is_same_instance (var_recvtype,var_other) on <var_recvtype:nullable MType(MType)> */
var10 = var_recvtype == var_other;
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
goto RET_LABEL;
} else {
}
/* <var_recvtype:nullable MType(MType)> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var_recvtype->type->table_size) {
var11 = 0;
} else {
var11 = var_recvtype->type->type_table[cltype] == idtype;
}
var12 = !var11;
if (var12){
/* <var_recvtype:nullable MType(MType)> isa MNullableType */
cltype14 = type_nit__MNullableType.color;
idtype15 = type_nit__MNullableType.id;
if(cltype14 >= var_recvtype->type->table_size) {
var13 = 0;
} else {
var13 = var_recvtype->type->type_table[cltype14] == idtype15;
}
if (var13){
if (varonce) {
var16 = varonce;
} else {
var17 = "Type error: cannot instantiate the nullable type ";
var18 = 49;
var19 = standard___standard__NativeString___to_s_with_length(var17, var18);
var16 = var19;
varonce = var16;
}
if (varonce20) {
var21 = varonce20;
} else {
var22 = ".";
var23 = 1;
var24 = standard___standard__NativeString___to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
var25 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var25 = array_instance Array[Object] */
var26 = 3;
var27 = NEW_standard__NativeArray(var26, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var27)->values[0] = (val*) var16;
((struct instance_standard__NativeArray*)var27)->values[1] = (val*) var_recvtype;
((struct instance_standard__NativeArray*)var27)->values[2] = (val*) var21;
{
((void (*)(val* self, val* p0, long p1))(var25->class->vft[COLOR_standard__array__Array__with_native]))(var25, var27, var26) /* with_native on <var25:Array[Object]>*/;
}
}
{
var28 = ((val* (*)(val* self))(var25->class->vft[COLOR_standard__string__Object__to_s]))(var25) /* to_s on <var25:Array[Object]>*/;
}
{
nit__typing___nit__typing__TypeVisitor___error(var_v, self, var28); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce29) {
var30 = varonce29;
} else {
var31 = "Type error: cannot instantiate the formal type ";
var32 = 47;
var33 = standard___standard__NativeString___to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
if (varonce34) {
var35 = varonce34;
} else {
var36 = ".";
var37 = 1;
var38 = standard___standard__NativeString___to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
var39 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var39 = array_instance Array[Object] */
var40 = 3;
var41 = NEW_standard__NativeArray(var40, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var41)->values[0] = (val*) var30;
((struct instance_standard__NativeArray*)var41)->values[1] = (val*) var_recvtype;
((struct instance_standard__NativeArray*)var41)->values[2] = (val*) var35;
{
((void (*)(val* self, val* p0, long p1))(var39->class->vft[COLOR_standard__array__Array__with_native]))(var39, var41, var40) /* with_native on <var39:Array[Object]>*/;
}
}
{
var42 = ((val* (*)(val* self))(var39->class->vft[COLOR_standard__string__Object__to_s]))(var39) /* to_s on <var39:Array[Object]>*/;
}
{
nit__typing___nit__typing__TypeVisitor___error(var_v, self, var42); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
}
} else {
}
{
{ /* Inline typing#ANewExpr#recvtype= (self,var_recvtype) on <self:ANewExpr> */
self->attrs[COLOR_nit__typing__ANewExpr___recvtype].val = var_recvtype; /* _recvtype on <self:ANewExpr> */
RET_LABEL43:(void)0;
}
}
{
{ /* Inline parser_nodes#ANewExpr#n_id (self) on <self:ANewExpr> */
var46 = self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_id].val; /* _n_id on <self:ANewExpr> */
var44 = var46;
RET_LABEL45:(void)0;
}
}
var_nid = var44;
var47 = NULL;
if (var_nid == NULL) {
var48 = 0; /* is null */
} else {
var48 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nid,var47) on <var_nid:nullable TId> */
var_other51 = var47;
{
var52 = ((short int (*)(val* self, val* p0))(var_nid->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nid, var_other51) /* == on <var_nid:nullable TId(TId)>*/;
}
var53 = !var52;
var49 = var53;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
var48 = var49;
}
if (var48){
{
var54 = nit__lexer_work___Token___text(var_nid);
}
var_name = var54;
} else {
if (varonce55) {
var56 = varonce55;
} else {
var57 = "new";
var58 = 3;
var59 = standard___standard__NativeString___to_s_with_length(var57, var58);
var56 = var59;
varonce55 = var56;
}
var_name = var56;
}
var60 = 0;
{
var61 = nit__typing___nit__typing__TypeVisitor___get_method(var_v, self, var_recvtype, var_name, var60);
}
var_callsite = var61;
var62 = NULL;
if (var_callsite == NULL) {
var63 = 1; /* is null */
} else {
var63 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_callsite,var62) on <var_callsite:nullable CallSite> */
var_other = var62;
{
{ /* Inline kernel#Object#is_same_instance (var_callsite,var_other) on <var_callsite:nullable CallSite(CallSite)> */
var68 = var_callsite == var_other;
var66 = var68;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
var64 = var66;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
var63 = var64;
}
if (var63){
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#CallSite#mproperty (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var71 = var_callsite->attrs[COLOR_nit__typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 487);
show_backtrace(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
{
{ /* Inline model#MMethod#is_new (var69) on <var69:MMethod> */
var74 = var69->attrs[COLOR_nit__model__MMethod___is_new].s; /* _is_new on <var69:MMethod> */
var72 = var74;
RET_LABEL73:(void)0;
}
}
var75 = !var72;
if (var75){
{
{ /* Inline model#MClassType#mclass (var_recvtype) on <var_recvtype:nullable MType(MClassType)> */
var78 = var_recvtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_recvtype:nullable MType(MClassType)> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var76) on <var76:MClass> */
var81 = var76->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var76:MClass> */
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 399);
show_backtrace(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
var_kind = var79;
{
var82 = nit__model___standard__Object___concrete_kind(self);
}
{
{ /* Inline kernel#Object#!= (var_kind,var82) on <var_kind:MClassKind> */
var_other51 = var82;
{
var85 = ((short int (*)(val* self, val* p0))(var_kind->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_kind, var_other51) /* == on <var_kind:MClassKind>*/;
}
var86 = !var85;
var83 = var86;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
}
if (var83){
if (varonce87) {
var88 = varonce87;
} else {
var89 = "Type Error: Cannot instantiate ";
var90 = 31;
var91 = standard___standard__NativeString___to_s_with_length(var89, var90);
var88 = var91;
varonce87 = var88;
}
if (varonce92) {
var93 = varonce92;
} else {
var94 = " ";
var95 = 1;
var96 = standard___standard__NativeString___to_s_with_length(var94, var95);
var93 = var96;
varonce92 = var93;
}
if (varonce97) {
var98 = varonce97;
} else {
var99 = ".";
var100 = 1;
var101 = standard___standard__NativeString___to_s_with_length(var99, var100);
var98 = var101;
varonce97 = var98;
}
var102 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var102 = array_instance Array[Object] */
var103 = 5;
var104 = NEW_standard__NativeArray(var103, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var104)->values[0] = (val*) var88;
((struct instance_standard__NativeArray*)var104)->values[1] = (val*) var_kind;
((struct instance_standard__NativeArray*)var104)->values[2] = (val*) var93;
((struct instance_standard__NativeArray*)var104)->values[3] = (val*) var_recvtype;
((struct instance_standard__NativeArray*)var104)->values[4] = (val*) var98;
{
((void (*)(val* self, val* p0, long p1))(var102->class->vft[COLOR_standard__array__Array__with_native]))(var102, var104, var103) /* with_native on <var102:Array[Object]>*/;
}
}
{
var105 = ((val* (*)(val* self))(var102->class->vft[COLOR_standard__string__Object__to_s]))(var102) /* to_s on <var102:Array[Object]>*/;
}
{
nit__typing___nit__typing__TypeVisitor___error(var_v, self, var105); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#AExpr#mtype= (self,var_recvtype) on <self:ANewExpr> */
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var_recvtype; /* _mtype on <self:ANewExpr> */
RET_LABEL106:(void)0;
}
}
} else {
{
{ /* Inline typing#CallSite#msignature (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var109 = var_callsite->attrs[COLOR_nit__typing__CallSite___msignature].val; /* _msignature on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var109 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 494);
show_backtrace(1);
}
var107 = var109;
RET_LABEL108:(void)0;
}
}
{
{ /* Inline model#MSignature#return_mtype (var107) on <var107:MSignature> */
var112 = var107->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var107:MSignature> */
var110 = var112;
RET_LABEL111:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var110) on <self:ANewExpr> */
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var110; /* _mtype on <self:ANewExpr> */
RET_LABEL113:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype (self) on <self:ANewExpr> */
var116 = self->attrs[COLOR_nit__typing__AExpr___mtype].val; /* _mtype on <self:ANewExpr> */
var114 = var116;
RET_LABEL115:(void)0;
}
}
var117 = NULL;
if (var114 == NULL) {
var118 = 0; /* is null */
} else {
var118 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var114,var117) on <var114:nullable MType> */
var_other51 = var117;
{
var121 = ((short int (*)(val* self, val* p0))(var114->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var114, var_other51) /* == on <var114:nullable MType(MType)>*/;
}
var122 = !var121;
var119 = var122;
goto RET_LABEL120;
RET_LABEL120:(void)0;
}
var118 = var119;
}
if (unlikely(!var118)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1771);
show_backtrace(1);
}
}
{
{ /* Inline typing#ANewExpr#callsite= (self,var_callsite) on <self:ANewExpr> */
self->attrs[COLOR_nit__typing__ANewExpr___callsite].val = var_callsite; /* _callsite on <self:ANewExpr> */
RET_LABEL123:(void)0;
}
}
{
{ /* Inline typing#CallSite#mproperty (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var126 = var_callsite->attrs[COLOR_nit__typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var126 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 487);
show_backtrace(1);
}
var124 = var126;
RET_LABEL125:(void)0;
}
}
{
{ /* Inline model#MClassType#mclass (var_recvtype) on <var_recvtype:nullable MType(MClassType)> */
var129 = var_recvtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_recvtype:nullable MType(MClassType)> */
if (unlikely(var129 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var127 = var129;
RET_LABEL128:(void)0;
}
}
{
var130 = nit___nit__MMethod___is_init_for(var124, var127);
}
var131 = !var130;
if (var131){
if (varonce132) {
var133 = varonce132;
} else {
var134 = "Error: ";
var135 = 7;
var136 = standard___standard__NativeString___to_s_with_length(var134, var135);
var133 = var136;
varonce132 = var133;
}
if (varonce137) {
var138 = varonce137;
} else {
var139 = " is not a constructor.";
var140 = 22;
var141 = standard___standard__NativeString___to_s_with_length(var139, var140);
var138 = var141;
varonce137 = var138;
}
var142 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var142 = array_instance Array[Object] */
var143 = 3;
var144 = NEW_standard__NativeArray(var143, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var144)->values[0] = (val*) var133;
((struct instance_standard__NativeArray*)var144)->values[1] = (val*) var_name;
((struct instance_standard__NativeArray*)var144)->values[2] = (val*) var138;
{
((void (*)(val* self, val* p0, long p1))(var142->class->vft[COLOR_standard__array__Array__with_native]))(var142, var144, var143) /* with_native on <var142:Array[Object]>*/;
}
}
{
var145 = ((val* (*)(val* self))(var142->class->vft[COLOR_standard__string__Object__to_s]))(var142) /* to_s on <var142:Array[Object]>*/;
}
{
nit__typing___nit__typing__TypeVisitor___error(var_v, self, var145); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ANewExpr#n_args (self) on <self:ANewExpr> */
var148 = self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_args].val; /* _n_args on <self:ANewExpr> */
if (unlikely(var148 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1968);
show_backtrace(1);
}
var146 = var148;
RET_LABEL147:(void)0;
}
}
{
var149 = nit__typing___AExprs___to_a(var146);
}
var_args = var149;
{
var150 = nit___nit__CallSite___check_signature(var_callsite, var_v, var_args);
}
RET_LABEL:;
}
/* method typing#AAttrFormExpr#mproperty for (self: AAttrFormExpr): nullable MAttribute */
val* nit__typing___AAttrFormExpr___mproperty(val* self) {
val* var /* : nullable MAttribute */;
val* var1 /* : nullable MAttribute */;
var1 = self->attrs[COLOR_nit__typing__AAttrFormExpr___mproperty].val; /* _mproperty on <self:AAttrFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AAttrFormExpr#mproperty= for (self: AAttrFormExpr, nullable MAttribute) */
void nit__typing___AAttrFormExpr___mproperty_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__AAttrFormExpr___mproperty].val = p0; /* _mproperty on <self:AAttrFormExpr> */
RET_LABEL:;
}
/* method typing#AAttrFormExpr#attr_type for (self: AAttrFormExpr): nullable MType */
val* nit__typing___AAttrFormExpr___attr_type(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nit__typing__AAttrFormExpr___attr_type].val; /* _attr_type on <self:AAttrFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AAttrFormExpr#attr_type= for (self: AAttrFormExpr, nullable MType) */
void nit__typing___AAttrFormExpr___attr_type_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__AAttrFormExpr___attr_type].val = p0; /* _attr_type on <self:AAttrFormExpr> */
RET_LABEL:;
}
/* method typing#AAttrFormExpr#resolve_property for (self: AAttrFormExpr, TypeVisitor) */
void nit__typing___AAttrFormExpr___resolve_property(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var_recvtype /* var recvtype: nullable MType */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : TAttrid */;
val* var13 /* : TAttrid */;
val* var14 /* : String */;
val* var_name /* var name: String */;
short int var15 /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : FlatString */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : FlatString */;
val* var25 /* : Array[Object] */;
long var26 /* : Int */;
val* var27 /* : NativeArray[Object] */;
val* var28 /* : String */;
val* var29 /* : MType */;
val* var_unsafe_type /* var unsafe_type: MType */;
val* var30 /* : nullable MProperty */;
val* var_mproperty /* var mproperty: nullable MProperty */;
val* var31 /* : null */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
val* var38 /* : ModelBuilder */;
val* var40 /* : ModelBuilder */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
long var44 /* : Int */;
val* var45 /* : FlatString */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
long var49 /* : Int */;
val* var50 /* : FlatString */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : FlatString */;
val* var56 /* : Array[Object] */;
long var57 /* : Int */;
val* var58 /* : NativeArray[Object] */;
val* var59 /* : String */;
short int var60 /* : Bool */;
int cltype61;
int idtype62;
val* var64 /* : MModule */;
val* var66 /* : MModule */;
val* var67 /* : Array[MPropDef] */;
val* var_mpropdefs /* var mpropdefs: Array[MAttributeDef] */;
long var68 /* : Int */;
long var70 /* : Int */;
long var71 /* : Int */;
short int var72 /* : Bool */;
short int var74 /* : Bool */;
val* var75 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: MAttributeDef */;
val* var76 /* : nullable MType */;
val* var78 /* : nullable MType */;
val* var_attr_type /* var attr_type: MType */;
val* var79 /* : AExpr */;
val* var81 /* : AExpr */;
short int var82 /* : Bool */;
int cltype83;
int idtype84;
val* var85 /* : MType */;
var_v = p0;
{
{ /* Inline parser_nodes#AAttrFormExpr#n_expr (self) on <self:AAttrFormExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrFormExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1976);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit__typing___nit__typing__TypeVisitor___visit_expr(var_v, var);
}
var_recvtype = var3;
var4 = NULL;
if (var_recvtype == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_recvtype,var4) on <var_recvtype:nullable MType> */
var_other = var4;
{
{ /* Inline kernel#Object#is_same_instance (var_recvtype,var_other) on <var_recvtype:nullable MType(MType)> */
var10 = var_recvtype == var_other;
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
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AAttrFormExpr#n_id (self) on <self:AAttrFormExpr> */
var13 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AAttrFormExpr> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1979);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = nit__lexer_work___Token___text(var11);
}
var_name = var14;
/* <var_recvtype:nullable MType(MType)> isa MNullType */
cltype = type_nit__MNullType.color;
idtype = type_nit__MNullType.id;
if(cltype >= var_recvtype->type->table_size) {
var15 = 0;
} else {
var15 = var_recvtype->type->type_table[cltype] == idtype;
}
if (var15){
if (varonce) {
var16 = varonce;
} else {
var17 = "Error: Attribute \'";
var18 = 18;
var19 = standard___standard__NativeString___to_s_with_length(var17, var18);
var16 = var19;
varonce = var16;
}
if (varonce20) {
var21 = varonce20;
} else {
var22 = "\' access on \'null\'.";
var23 = 19;
var24 = standard___standard__NativeString___to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
var25 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var25 = array_instance Array[Object] */
var26 = 3;
var27 = NEW_standard__NativeArray(var26, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var27)->values[0] = (val*) var16;
((struct instance_standard__NativeArray*)var27)->values[1] = (val*) var_name;
((struct instance_standard__NativeArray*)var27)->values[2] = (val*) var21;
{
((void (*)(val* self, val* p0, long p1))(var25->class->vft[COLOR_standard__array__Array__with_native]))(var25, var27, var26) /* with_native on <var25:Array[Object]>*/;
}
}
{
var28 = ((val* (*)(val* self))(var25->class->vft[COLOR_standard__string__Object__to_s]))(var25) /* to_s on <var25:Array[Object]>*/;
}
{
nit__typing___nit__typing__TypeVisitor___error(var_v, self, var28); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
var29 = nit__typing___nit__typing__TypeVisitor___anchor_to(var_v, var_recvtype);
}
var_unsafe_type = var29;
{
var30 = nit__typing___nit__typing__TypeVisitor___try_get_mproperty_by_name2(var_v, self, var_unsafe_type, var_name);
}
var_mproperty = var30;
var31 = NULL;
if (var_mproperty == NULL) {
var32 = 1; /* is null */
} else {
var32 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mproperty,var31) on <var_mproperty:nullable MProperty> */
var_other = var31;
{
{ /* Inline kernel#Object#is_same_instance (var_mproperty,var_other) on <var_mproperty:nullable MProperty(MProperty)> */
var37 = var_mproperty == var_other;
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
var32 = var33;
}
if (var32){
{
{ /* Inline typing#TypeVisitor#modelbuilder (var_v) on <var_v:TypeVisitor> */
var40 = var_v->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <var_v:TypeVisitor> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
show_backtrace(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
if (varonce41) {
var42 = varonce41;
} else {
var43 = "Error: Attribute ";
var44 = 17;
var45 = standard___standard__NativeString___to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
if (varonce46) {
var47 = varonce46;
} else {
var48 = " doesn\'t exists in ";
var49 = 19;
var50 = standard___standard__NativeString___to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
if (varonce51) {
var52 = varonce51;
} else {
var53 = ".";
var54 = 1;
var55 = standard___standard__NativeString___to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
var56 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var56 = array_instance Array[Object] */
var57 = 5;
var58 = NEW_standard__NativeArray(var57, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var58)->values[0] = (val*) var42;
((struct instance_standard__NativeArray*)var58)->values[1] = (val*) var_name;
((struct instance_standard__NativeArray*)var58)->values[2] = (val*) var47;
((struct instance_standard__NativeArray*)var58)->values[3] = (val*) var_recvtype;
((struct instance_standard__NativeArray*)var58)->values[4] = (val*) var52;
{
((void (*)(val* self, val* p0, long p1))(var56->class->vft[COLOR_standard__array__Array__with_native]))(var56, var58, var57) /* with_native on <var56:Array[Object]>*/;
}
}
{
var59 = ((val* (*)(val* self))(var56->class->vft[COLOR_standard__string__Object__to_s]))(var56) /* to_s on <var56:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(var38, self, var59); /* Direct call modelbuilder_base#ModelBuilder#error on <var38:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
/* <var_mproperty:nullable MProperty(MProperty)> isa MAttribute */
cltype61 = type_nit__MAttribute.color;
idtype62 = type_nit__MAttribute.id;
if(cltype61 >= var_mproperty->type->table_size) {
var60 = 0;
} else {
var60 = var_mproperty->type->type_table[cltype61] == idtype62;
}
if (unlikely(!var60)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1812);
show_backtrace(1);
}
{
{ /* Inline typing#AAttrFormExpr#mproperty= (self,var_mproperty) on <self:AAttrFormExpr> */
self->attrs[COLOR_nit__typing__AAttrFormExpr___mproperty].val = var_mproperty; /* _mproperty on <self:AAttrFormExpr> */
RET_LABEL63:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#mmodule (var_v) on <var_v:TypeVisitor> */
var66 = var_v->attrs[COLOR_nit__typing__TypeVisitor___mmodule].val; /* _mmodule on <var_v:TypeVisitor> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 36);
show_backtrace(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
var67 = nit___nit__MProperty___lookup_definitions(var_mproperty, var64, var_unsafe_type);
}
var_mpropdefs = var67;
{
{ /* Inline array#AbstractArrayRead#length (var_mpropdefs) on <var_mpropdefs:Array[MAttributeDef]> */
var70 = var_mpropdefs->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_mpropdefs:Array[MAttributeDef]> */
var68 = var70;
RET_LABEL69:(void)0;
}
}
var71 = 1;
{
{ /* Inline kernel#Int#== (var68,var71) on <var68:Int> */
var74 = var68 == var71;
var72 = var74;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
}
if (unlikely(!var72)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1816);
show_backtrace(1);
}
{
var75 = standard___standard__SequenceRead___Collection__first(var_mpropdefs);
}
var_mpropdef = var75;
{
{ /* Inline model#MAttributeDef#static_mtype (var_mpropdef) on <var_mpropdef:MAttributeDef> */
var78 = var_mpropdef->attrs[COLOR_nit__model__MAttributeDef___static_mtype].val; /* _static_mtype on <var_mpropdef:MAttributeDef> */
var76 = var78;
RET_LABEL77:(void)0;
}
}
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1818);
show_backtrace(1);
}
var_attr_type = var76;
{
{ /* Inline parser_nodes#AAttrFormExpr#n_expr (self) on <self:AAttrFormExpr> */
var81 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrFormExpr> */
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1976);
show_backtrace(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
/* <var79:AExpr> isa ASelfExpr */
cltype83 = type_nit__ASelfExpr.color;
idtype84 = type_nit__ASelfExpr.id;
if(cltype83 >= var79->type->table_size) {
var82 = 0;
} else {
var82 = var79->type->type_table[cltype83] == idtype84;
}
{
var85 = nit__typing___nit__typing__TypeVisitor___resolve_for(var_v, var_attr_type, var_recvtype, var82);
}
var_attr_type = var85;
{
{ /* Inline typing#AAttrFormExpr#attr_type= (self,var_attr_type) on <self:AAttrFormExpr> */
self->attrs[COLOR_nit__typing__AAttrFormExpr___attr_type].val = var_attr_type; /* _attr_type on <self:AAttrFormExpr> */
RET_LABEL86:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AAttrExpr#accept_typing for (self: AAttrExpr, TypeVisitor) */
void nit__typing___AAttrExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MType */;
val* var2 /* : nullable MType */;
var_v = p0;
{
nit__typing___AAttrFormExpr___resolve_property(self, var_v); /* Direct call typing#AAttrFormExpr#resolve_property on <self:AAttrExpr>*/
}
{
{ /* Inline typing#AAttrFormExpr#attr_type (self) on <self:AAttrExpr> */
var2 = self->attrs[COLOR_nit__typing__AAttrFormExpr___attr_type].val; /* _attr_type on <self:AAttrExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var) on <self:AAttrExpr> */
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var; /* _mtype on <self:AAttrExpr> */
RET_LABEL3:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AAttrAssignExpr#accept_typing for (self: AAttrAssignExpr, TypeVisitor) */
void nit__typing___AAttrAssignExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MType */;
val* var2 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var3 /* : AExpr */;
val* var5 /* : AExpr */;
val* var6 /* : nullable MType */;
short int var7 /* : Bool */;
var_v = p0;
{
nit__typing___AAttrFormExpr___resolve_property(self, var_v); /* Direct call typing#AAttrFormExpr#resolve_property on <self:AAttrAssignExpr>*/
}
{
{ /* Inline typing#AAttrFormExpr#attr_type (self) on <self:AAttrAssignExpr> */
var2 = self->attrs[COLOR_nit__typing__AAttrFormExpr___attr_type].val; /* _attr_type on <self:AAttrAssignExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mtype = var;
{
{ /* Inline parser_nodes#AAssignFormExpr#n_value (self) on <self:AAttrAssignExpr> */
var5 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AAttrAssignExpr> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1772);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = nit__typing___nit__typing__TypeVisitor___visit_expr_subtype(var_v, var3, var_mtype);
}
var7 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var7) on <self:AAttrAssignExpr> */
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var7; /* _is_typed on <self:AAttrAssignExpr> */
RET_LABEL8:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AAttrReassignExpr#accept_typing for (self: AAttrReassignExpr, TypeVisitor) */
void nit__typing___AAttrReassignExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MType */;
val* var2 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable MType */;
short int var11 /* : Bool */;
var_v = p0;
{
nit__typing___AAttrFormExpr___resolve_property(self, var_v); /* Direct call typing#AAttrFormExpr#resolve_property on <self:AAttrReassignExpr>*/
}
{
{ /* Inline typing#AAttrFormExpr#attr_type (self) on <self:AAttrReassignExpr> */
var2 = self->attrs[COLOR_nit__typing__AAttrFormExpr___attr_type].val; /* _attr_type on <self:AAttrReassignExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mtype = var;
var3 = NULL;
if (var_mtype == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var3) on <var_mtype:nullable MType> */
var_other = var3;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var9 = var_mtype == var_other;
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
var10 = nit__typing___AReassignFormExpr___resolve_reassignment(self, var_v, var_mtype, var_mtype);
}
var11 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var11) on <self:AAttrReassignExpr> */
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var11; /* _is_typed on <self:AAttrReassignExpr> */
RET_LABEL12:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AIssetAttrExpr#accept_typing for (self: AIssetAttrExpr, TypeVisitor) */
void nit__typing___AIssetAttrExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MType */;
val* var2 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : AExpr */;
val* var12 /* : AExpr */;
val* var13 /* : nullable MType */;
val* var_recvtype /* var recvtype: MType */;
short int var14 /* : Bool */;
val* var15 /* : MType */;
val* var_bound /* var bound: MType */;
short int var16 /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : FlatString */;
val* var21 /* : nullable MType */;
var_v = p0;
{
nit__typing___AAttrFormExpr___resolve_property(self, var_v); /* Direct call typing#AAttrFormExpr#resolve_property on <self:AIssetAttrExpr>*/
}
{
{ /* Inline typing#AAttrFormExpr#attr_type (self) on <self:AIssetAttrExpr> */
var2 = self->attrs[COLOR_nit__typing__AAttrFormExpr___attr_type].val; /* _attr_type on <self:AIssetAttrExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mtype = var;
var3 = NULL;
if (var_mtype == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var3) on <var_mtype:nullable MType> */
var_other = var3;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var9 = var_mtype == var_other;
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
{ /* Inline parser_nodes#AAttrFormExpr#n_expr (self) on <self:AIssetAttrExpr> */
var12 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AIssetAttrExpr> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1976);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = ((val* (*)(val* self))(var10->class->vft[COLOR_nit__typing__AExpr__mtype]))(var10) /* mtype on <var10:AExpr>*/;
}
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1864);
show_backtrace(1);
}
var_recvtype = var13;
var14 = 0;
{
var15 = nit__typing___nit__typing__TypeVisitor___resolve_for(var_v, var_mtype, var_recvtype, var14);
}
var_bound = var15;
/* <var_bound:MType> isa MNullableType */
cltype = type_nit__MNullableType.color;
idtype = type_nit__MNullableType.id;
if(cltype >= var_bound->type->table_size) {
var16 = 0;
} else {
var16 = var_bound->type->type_table[cltype] == idtype;
}
if (var16){
if (varonce) {
var17 = varonce;
} else {
var18 = "Error: isset on a nullable attribute.";
var19 = 37;
var20 = standard___standard__NativeString___to_s_with_length(var18, var19);
var17 = var20;
varonce = var17;
}
{
nit__typing___nit__typing__TypeVisitor___error(var_v, self, var17); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
} else {
}
{
var21 = nit__typing___nit__typing__TypeVisitor___type_bool(var_v, self);
}
{
{ /* Inline typing#AExpr#mtype= (self,var21) on <self:AIssetAttrExpr> */
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var21; /* _mtype on <self:AIssetAttrExpr> */
RET_LABEL22:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AVarargExpr#accept_typing for (self: AVarargExpr, TypeVisitor) */
void nit__typing___AVarargExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : FlatString */;
var_v = p0;
if (varonce) {
var = varonce;
} else {
var1 = "Syntax error: unexpected `...`";
var2 = 30;
var3 = standard___standard__NativeString___to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
nit__typing___nit__typing__TypeVisitor___error(var_v, self, var); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
RET_LABEL:;
}
