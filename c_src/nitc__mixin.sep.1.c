#include "nitc__mixin.sep.0.h"
/* method mixin$ToolContext$opt_mixins for (self: ToolContext): OptionArray */
val* nitc__mixin___ToolContext___opt_mixins(val* self) {
val* var /* : OptionArray */;
val* var1 /* : OptionArray */;
var1 = self->attrs[COLOR_nitc__mixin__ToolContext___opt_mixins].val; /* _opt_mixins on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_mixins");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mixin, 23);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mixin$ToolContext$opt_defines for (self: ToolContext): OptionArray */
val* nitc__mixin___ToolContext___opt_defines(val* self) {
val* var /* : OptionArray */;
val* var1 /* : OptionArray */;
var1 = self->attrs[COLOR_nitc__mixin__ToolContext___opt_defines].val; /* _opt_defines on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_defines");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mixin, 25);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mixin$ToolContext$init for (self: ToolContext) */
void nitc__mixin___ToolContext___core__kernel__Object__init(val* self) {
val* var /* : OptionContext */;
val* var2 /* : OptionContext */;
val* var3 /* : OptionArray */;
val* var5 /* : OptionArray */;
val* var6 /* : OptionArray */;
val* var8 /* : OptionArray */;
val* var9 /* : Array[Option] */;
val* var10 /* : NativeArray[Option] */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc__mixin___ToolContext___core__kernel__Object__init]))(self); /* init on <self:ToolContext>*/
}
{
{ /* Inline toolcontext$ToolContext$option_context (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_nitc__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 357);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline mixin$ToolContext$opt_mixins (self) on <self:ToolContext> */
var5 = self->attrs[COLOR_nitc__mixin__ToolContext___opt_mixins].val; /* _opt_mixins on <self:ToolContext> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_mixins");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mixin, 23);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline mixin$ToolContext$opt_defines (self) on <self:ToolContext> */
var8 = self->attrs[COLOR_nitc__mixin__ToolContext___opt_defines].val; /* _opt_defines on <self:ToolContext> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_defines");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mixin, 25);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var9 = NEW_core__Array(&type_core__Array__opts__Option);
{ /* var9 = array_instance Array[Option] */
var10 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__opts__Option);
((struct instance_core__NativeArray*)var10)->values[0] = (val*) var3;
((struct instance_core__NativeArray*)var10)->values[1] = (val*) var6;
{
((void(*)(val* self, val* p0, long p1))(var9->class->vft[COLOR_core__array__Array__with_native]))(var9, var10, 2l); /* with_native on <var9:Array[Option]>*/
}
}
{
opts___opts__OptionContext___add_option(var, var9); /* Direct call opts$OptionContext$add_option on <var:OptionContext>*/
}
RET_LABEL:;
}
/* method mixin$ToolContext$make_main_module for (self: ToolContext, Array[MModule]): MModule */
val* nitc__mixin___ToolContext___make_main_module(val* self, val* p0) {
val* var /* : MModule */;
val* var_mmodules /* var mmodules: Array[MModule] */;
val* var1 /* : OptionArray */;
val* var3 /* : OptionArray */;
val* var4 /* : nullable Object */;
val* var6 /* : nullable Object */;
val* var_mixins /* var mixins: Array[String] */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : ModelBuilder */;
val* var10 /* : OptionArray */;
val* var12 /* : OptionArray */;
val* var13 /* : nullable Object */;
val* var15 /* : nullable Object */;
val* var16 /* : Array[MModule] */;
val* var17 /* : ModelBuilder */;
val* var18 /* : MModule */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var19 /* : OptionArray */;
val* var21 /* : OptionArray */;
val* var22 /* : nullable Object */;
val* var24 /* : nullable Object */;
val* var_defines /* var defines: Array[String] */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : Location */;
val* var29 /* : Location */;
val* var_location /* var location: Location */;
val* var30 /* : Model */;
val* var32 /* : Model */;
val* var_model /* var model: Model */;
val* var33 /* : nullable Object */;
short int var34 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
val* var39 /* : MModule */;
val* var40 /* : String */;
val* var42 /* : String */;
static val* varonce;
val* var43 /* : String */;
char* var44 /* : CString */;
val* var45 /* : String */;
val* var46 /* : nullable Int */;
val* var47 /* : nullable Int */;
val* var48 /* : nullable Bool */;
val* var49 /* : nullable Bool */;
val* var50 /* : Text */;
val* var52 /* : nullable Object */;
val* var54 /* : nullable MClassType */;
val* var_recv /* var recv: nullable MClassType */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
val* var_other58 /* var other: nullable Object */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
val* var61 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var_ /* var : Array[String] */;
val* var62 /* : IndexedIterator[nullable Object] */;
val* var_63 /* var : IndexedIterator[String] */;
short int var64 /* : Bool */;
val* var65 /* : nullable Object */;
val* var_define /* var define: String */;
val* var66 /* : Array[Text] */;
val* var67 /* : Pattern */;
val* var_spl /* var spl: Array[String] */;
val* var68 /* : nullable Object */;
val* var_name /* var name: String */;
val* var_val /* var val: nullable Object */;
long var69 /* : Int */;
long var71 /* : Int */;
short int var72 /* : Bool */;
short int var74 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var75 /* : Bool */;
val* var76 /* : nullable Object */;
val* var77 /* : MClass */;
val* var79 /* : MClass */;
val* var80 /* : nullable MMethod */;
val* var_prop /* var prop: nullable MMethod */;
short int var81 /* : Bool */;
short int var82 /* : Bool */;
short int var84 /* : Bool */;
short int var86 /* : Bool */;
val* var88 /* : NativeArray[String] */;
static val* varonce87;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : CString */;
val* var92 /* : String */;
val* var93 /* : nullable Int */;
val* var94 /* : nullable Int */;
val* var95 /* : nullable Bool */;
val* var96 /* : nullable Bool */;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : CString */;
val* var100 /* : String */;
val* var101 /* : nullable Int */;
val* var102 /* : nullable Int */;
val* var103 /* : nullable Bool */;
val* var104 /* : nullable Bool */;
val* var105 /* : String */;
val* var106 /* : Message */;
val* var108 /* : MPropDef */;
val* var110 /* : MPropDef */;
val* var111 /* : nullable MSignature */;
val* var113 /* : nullable MSignature */;
val* var114 /* : nullable MType */;
val* var116 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
short int var117 /* : Bool */;
short int var118 /* : Bool */;
short int var120 /* : Bool */;
short int var122 /* : Bool */;
val* var124 /* : NativeArray[String] */;
static val* varonce123;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : CString */;
val* var128 /* : String */;
val* var129 /* : nullable Int */;
val* var130 /* : nullable Int */;
val* var131 /* : nullable Bool */;
val* var132 /* : nullable Bool */;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : CString */;
val* var136 /* : String */;
val* var137 /* : nullable Int */;
val* var138 /* : nullable Int */;
val* var139 /* : nullable Bool */;
val* var140 /* : nullable Bool */;
val* var141 /* : String */;
val* var142 /* : String */;
val* var143 /* : Message */;
val* var144 /* : String */;
static val* varonce145;
val* var146 /* : String */;
char* var147 /* : CString */;
val* var148 /* : String */;
val* var149 /* : nullable Int */;
val* var150 /* : nullable Int */;
val* var151 /* : nullable Bool */;
val* var152 /* : nullable Bool */;
short int var153 /* : Bool */;
short int var154 /* : Bool */;
short int var155 /* : Bool */;
short int var156 /* : Bool */;
short int var_157 /* var : Bool */;
static val* varonce158;
val* var159 /* : String */;
char* var160 /* : CString */;
val* var161 /* : String */;
val* var162 /* : nullable Int */;
val* var163 /* : nullable Int */;
val* var164 /* : nullable Bool */;
val* var165 /* : nullable Bool */;
short int var166 /* : Bool */;
val* var167 /* : nullable Object */;
val* var_v /* var v: nullable Object */;
static val* varonce168;
val* var169 /* : String */;
char* var170 /* : CString */;
val* var171 /* : String */;
val* var172 /* : nullable Int */;
val* var173 /* : nullable Int */;
val* var174 /* : nullable Bool */;
val* var175 /* : nullable Bool */;
short int var176 /* : Bool */;
val* var177 /* : nullable Object */;
val* var179 /* : NativeArray[String] */;
static val* varonce178;
static val* varonce180;
val* var181 /* : String */;
char* var182 /* : CString */;
val* var183 /* : String */;
val* var184 /* : nullable Int */;
val* var185 /* : nullable Int */;
val* var186 /* : nullable Bool */;
val* var187 /* : nullable Bool */;
static val* varonce188;
val* var189 /* : String */;
char* var190 /* : CString */;
val* var191 /* : String */;
val* var192 /* : nullable Int */;
val* var193 /* : nullable Int */;
val* var194 /* : nullable Bool */;
val* var195 /* : nullable Bool */;
val* var196 /* : String */;
val* var197 /* : String */;
val* var198 /* : Message */;
val* var199 /* : String */;
static val* varonce200;
val* var201 /* : String */;
char* var202 /* : CString */;
val* var203 /* : String */;
val* var204 /* : nullable Int */;
val* var205 /* : nullable Int */;
val* var206 /* : nullable Bool */;
val* var207 /* : nullable Bool */;
short int var208 /* : Bool */;
short int var209 /* : Bool */;
short int var210 /* : Bool */;
short int var211 /* : Bool */;
short int var213 /* : Bool */;
short int var214 /* : Bool */;
short int var_215 /* var : Bool */;
short int var216 /* : Bool */;
long var217 /* : Int */;
val* var218 /* : nullable Object */;
val* var220 /* : NativeArray[String] */;
static val* varonce219;
static val* varonce221;
val* var222 /* : String */;
char* var223 /* : CString */;
val* var224 /* : String */;
val* var225 /* : nullable Int */;
val* var226 /* : nullable Int */;
val* var227 /* : nullable Bool */;
val* var228 /* : nullable Bool */;
static val* varonce229;
val* var230 /* : String */;
char* var231 /* : CString */;
val* var232 /* : String */;
val* var233 /* : nullable Int */;
val* var234 /* : nullable Int */;
val* var235 /* : nullable Bool */;
val* var236 /* : nullable Bool */;
val* var237 /* : String */;
val* var238 /* : String */;
val* var239 /* : Message */;
val* var240 /* : String */;
static val* varonce241;
val* var242 /* : String */;
char* var243 /* : CString */;
val* var244 /* : String */;
val* var245 /* : nullable Int */;
val* var246 /* : nullable Int */;
val* var247 /* : nullable Bool */;
val* var248 /* : nullable Bool */;
short int var249 /* : Bool */;
short int var250 /* : Bool */;
short int var251 /* : Bool */;
short int var253 /* : Bool */;
short int var254 /* : Bool */;
val* var256 /* : NativeArray[String] */;
static val* varonce255;
static val* varonce257;
val* var258 /* : String */;
char* var259 /* : CString */;
val* var260 /* : String */;
val* var261 /* : nullable Int */;
val* var262 /* : nullable Int */;
val* var263 /* : nullable Bool */;
val* var264 /* : nullable Bool */;
static val* varonce265;
val* var266 /* : String */;
char* var267 /* : CString */;
val* var268 /* : String */;
val* var269 /* : nullable Int */;
val* var270 /* : nullable Int */;
val* var271 /* : nullable Bool */;
val* var272 /* : nullable Bool */;
val* var273 /* : String */;
val* var274 /* : String */;
val* var275 /* : Message */;
val* var277 /* : NativeArray[String] */;
static val* varonce276;
static val* varonce278;
val* var279 /* : String */;
char* var280 /* : CString */;
val* var281 /* : String */;
val* var282 /* : nullable Int */;
val* var283 /* : nullable Int */;
val* var284 /* : nullable Bool */;
val* var285 /* : nullable Bool */;
static val* varonce286;
val* var287 /* : String */;
char* var288 /* : CString */;
val* var289 /* : String */;
val* var290 /* : nullable Int */;
val* var291 /* : nullable Int */;
val* var292 /* : nullable Bool */;
val* var293 /* : nullable Bool */;
static val* varonce294;
val* var295 /* : String */;
char* var296 /* : CString */;
val* var297 /* : String */;
val* var298 /* : nullable Int */;
val* var299 /* : nullable Int */;
val* var300 /* : nullable Bool */;
val* var301 /* : nullable Bool */;
val* var302 /* : String */;
val* var303 /* : String */;
val* var304 /* : String */;
val* var305 /* : Message */;
val* var306 /* : MMethodDef */;
val* var_pd /* var pd: MMethodDef */;
val* var307 /* : MPropDef */;
val* var309 /* : MPropDef */;
val* var310 /* : nullable MSignature */;
val* var312 /* : nullable MSignature */;
short int var315 /* : Bool */;
var_mmodules = p0;
{
{ /* Inline mixin$ToolContext$opt_mixins (self) on <self:ToolContext> */
var3 = self->attrs[COLOR_nitc__mixin__ToolContext___opt_mixins].val; /* _opt_mixins on <self:ToolContext> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_mixins");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mixin, 23);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline opts$Option$value (var1) on <var1:OptionArray> */
var6 = var1->attrs[COLOR_opts__Option___value].val; /* _value on <var1:OptionArray> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_mixins = var4;
{
var7 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_mixins);
}
var8 = !var7;
if (var8){
{
var9 = nitc__modelbuilder_base___ToolContext___modelbuilder(self);
}
{
{ /* Inline mixin$ToolContext$opt_mixins (self) on <self:ToolContext> */
var12 = self->attrs[COLOR_nitc__mixin__ToolContext___opt_mixins].val; /* _opt_mixins on <self:ToolContext> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_mixins");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mixin, 23);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline opts$Option$value (var10) on <var10:OptionArray> */
var15 = var10->attrs[COLOR_opts__Option___value].val; /* _value on <var10:OptionArray> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = nitc__loader___ModelBuilder___parse(var9, var13);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var_mmodules, var16); /* Direct call array$Array$add_all on <var_mmodules:Array[MModule]>*/
}
{
var17 = nitc__modelbuilder_base___ToolContext___modelbuilder(self);
}
{
nitc__modelbuilder___ModelBuilder___run_phases(var17); /* Direct call modelbuilder$ModelBuilder$run_phases on <var17:ModelBuilder>*/
}
} else {
}
{
var18 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__mixin___ToolContext___make_main_module]))(self, p0); /* make_main_module on <self:ToolContext>*/
}
var_mainmodule = var18;
{
{ /* Inline mixin$ToolContext$opt_defines (self) on <self:ToolContext> */
var21 = self->attrs[COLOR_nitc__mixin__ToolContext___opt_defines].val; /* _opt_defines on <self:ToolContext> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_defines");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mixin, 25);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline opts$Option$value (var19) on <var19:OptionArray> */
var24 = var19->attrs[COLOR_opts__Option___value].val; /* _value on <var19:OptionArray> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
var_defines = var22;
{
var25 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_defines);
}
var26 = !var25;
if (var26){
{
{ /* Inline mmodule$MModule$location (var_mainmodule) on <var_mainmodule:MModule> */
var29 = var_mainmodule->attrs[COLOR_nitc__mmodule__MModule___location].val; /* _location on <var_mainmodule:MModule> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 103);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_location = var27;
{
{ /* Inline mmodule$MModule$model (var_mainmodule) on <var_mainmodule:MModule> */
var32 = var_mainmodule->attrs[COLOR_nitc__mmodule__MModule___model].val; /* _model on <var_mainmodule:MModule> */
if (unlikely(var32 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 77);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
var_model = var30;
{
var33 = core___core__SequenceRead___Collection__first(var_mmodules);
}
{
{ /* Inline kernel$Object$== (var_mainmodule,var33) on <var_mainmodule:MModule> */
var_other = var33;
{
{ /* Inline kernel$Object$is_same_instance (var_mainmodule,var_other) on <var_mainmodule:MModule> */
var38 = var_mainmodule == var_other;
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
if (var34){
var39 = NEW_nitc__MModule(&type_nitc__MModule);
{
{ /* Inline mmodule$MModule$name (var_mainmodule) on <var_mainmodule:MModule> */
var42 = var_mainmodule->attrs[COLOR_nitc__mmodule__MModule___name].val; /* _name on <var_mainmodule:MModule> */
if (unlikely(var42 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 100);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
if (likely(varonce!=NULL)) {
var43 = varonce;
} else {
var44 = "-d";
var46 = (val*)(2l<<2|1);
var47 = (val*)(2l<<2|1);
var48 = (val*)((long)(0)<<2|3);
var49 = (val*)((long)(0)<<2|3);
var45 = core__flat___CString___to_s_unsafe(var44, var46, var47, var48, var49);
var43 = var45;
varonce = var43;
}
{
var50 = ((val*(*)(val* self, val* p0))(var40->class->vft[COLOR_core__abstract_text__Text___43d]))(var40, var43); /* + on <var40:String>*/
}
{
((void(*)(val* self, val* p0))(var39->class->vft[COLOR_nitc__mmodule__MModule__model_61d]))(var39, var_model); /* model= on <var39:MModule>*/
}
{
((void(*)(val* self, val* p0))(var39->class->vft[COLOR_nitc__mmodule__MModule__mgroup_61d]))(var39, ((val*)NULL)); /* mgroup= on <var39:MModule>*/
}
{
((void(*)(val* self, val* p0))(var39->class->vft[COLOR_nitc__mmodule__MModule__name_61d]))(var39, var50); /* name= on <var39:MModule>*/
}
{
((void(*)(val* self, val* p0))(var39->class->vft[COLOR_nitc__mmodule__MModule__location_61d]))(var39, var_location); /* location= on <var39:MModule>*/
}
{
((void(*)(val* self))(var39->class->vft[COLOR_core__kernel__Object__init]))(var39); /* init on <var39:MModule>*/
}
var_mainmodule = var39;
{
nitc___nitc__MModule___set_imported_mmodules(var_mainmodule, var_mmodules); /* Direct call mmodule$MModule$set_imported_mmodules on <var_mainmodule:MModule>*/
}
{
{ /* Inline model_base$MEntity$is_fictive= (var_mainmodule,1) on <var_mainmodule:MModule> */
var_mainmodule->attrs[COLOR_nitc__model_base__MEntity___is_fictive].s = 1; /* _is_fictive on <var_mainmodule:MModule> */
RET_LABEL51:(void)0;
}
}
{
var52 = core___core__SequenceRead___Collection__first(var_mmodules);
}
{
{ /* Inline mmodule$MModule$first_real_mmodule= (var_mainmodule,var52) on <var_mainmodule:MModule> */
var_mainmodule->attrs[COLOR_nitc__mmodule__MModule___first_real_mmodule].val = var52; /* _first_real_mmodule on <var_mainmodule:MModule> */
RET_LABEL53:(void)0;
}
}
} else {
}
{
var54 = nitc__model___MModule___sys_type(var_mainmodule);
}
var_recv = var54;
if (var_recv == NULL) {
var55 = 0; /* is null */
} else {
var55 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_recv,((val*)NULL)) on <var_recv:nullable MClassType> */
var_other58 = ((val*)NULL);
{
var59 = ((short int(*)(val* self, val* p0))(var_recv->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_recv, var_other58); /* == on <var_recv:nullable MClassType(MClassType)>*/
}
var60 = !var59;
var56 = var60;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
var55 = var56;
}
if (unlikely(!var55)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mixin, 58);
fatal_exit(1);
}
var61 = NEW_nitc__MClassDef(&type_nitc__MClassDef);
{
((void(*)(val* self, val* p0))(var61->class->vft[COLOR_nitc__model__MClassDef__mmodule_61d]))(var61, var_mainmodule); /* mmodule= on <var61:MClassDef>*/
}
{
((void(*)(val* self, val* p0))(var61->class->vft[COLOR_nitc__model__MClassDef__bound_mtype_61d]))(var61, var_recv); /* bound_mtype= on <var61:MClassDef>*/
}
{
((void(*)(val* self, val* p0))(var61->class->vft[COLOR_nitc__model__MClassDef__location_61d]))(var61, var_location); /* location= on <var61:MClassDef>*/
}
{
((void(*)(val* self))(var61->class->vft[COLOR_core__kernel__Object__init]))(var61); /* init on <var61:MClassDef>*/
}
var_mclassdef = var61;
{
nitc___nitc__MClassDef___add_in_hierarchy(var_mclassdef); /* Direct call model$MClassDef$add_in_hierarchy on <var_mclassdef:MClassDef>*/
}
var_ = var_defines;
{
var62 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_63 = var62;
for(;;) {
{
var64 = ((short int(*)(val* self))((((long)var_63&3)?class_info[((long)var_63&3)]:var_63->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_63); /* is_ok on <var_63:IndexedIterator[String]>*/
}
if (var64){
} else {
goto BREAK_label;
}
{
var65 = ((val*(*)(val* self))((((long)var_63&3)?class_info[((long)var_63&3)]:var_63->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_63); /* item on <var_63:IndexedIterator[String]>*/
}
var_define = var65;
{
var67 = (val*)((long)('=')<<2|2);
var66 = core__string_search___Text___split_once_on(var_define, var67);
}
var_spl = var66;
{
var68 = core___core__SequenceRead___Collection__first(var_spl);
}
var_name = var68;
var_val = ((val*)NULL);
{
{ /* Inline array$AbstractArrayRead$length (var_spl) on <var_spl:Array[String]> */
var71 = var_spl->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_spl:Array[String]> */
var69 = var71;
RET_LABEL70:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var69,1l) on <var69:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var74 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var74)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var75 = var69 > 1l;
var72 = var75;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
}
if (var72){
{
var76 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_spl, 1l);
}
var_val = var76;
} else {
}
{
{ /* Inline model$MClassType$mclass (var_recv) on <var_recv:nullable MClassType(MClassType)> */
var79 = var_recv->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_recv:nullable MClassType(MClassType)> */
if (unlikely(var79 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
{
var80 = nitc__model___MModule___try_get_primitive_method(var_mainmodule, var_name, var77);
}
var_prop = var80;
if (var_prop == NULL) {
var81 = 1; /* is null */
} else {
var81 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_prop,((val*)NULL)) on <var_prop:nullable MMethod> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_prop,var_other) on <var_prop:nullable MMethod(MMethod)> */
var86 = var_prop == var_other;
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
if (unlikely(varonce87==NULL)) {
var88 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce89!=NULL)) {
var90 = varonce89;
} else {
var91 = "Error: --define: no top-level function `";
var93 = (val*)(40l<<2|1);
var94 = (val*)(40l<<2|1);
var95 = (val*)((long)(0)<<2|3);
var96 = (val*)((long)(0)<<2|3);
var92 = core__flat___CString___to_s_unsafe(var91, var93, var94, var95, var96);
var90 = var92;
varonce89 = var90;
}
((struct instance_core__NativeArray*)var88)->values[0]=var90;
if (likely(varonce97!=NULL)) {
var98 = varonce97;
} else {
var99 = "`.";
var101 = (val*)(2l<<2|1);
var102 = (val*)(2l<<2|1);
var103 = (val*)((long)(0)<<2|3);
var104 = (val*)((long)(0)<<2|3);
var100 = core__flat___CString___to_s_unsafe(var99, var101, var102, var103, var104);
var98 = var100;
varonce97 = var98;
}
((struct instance_core__NativeArray*)var88)->values[2]=var98;
} else {
var88 = varonce87;
varonce87 = NULL;
}
((struct instance_core__NativeArray*)var88)->values[1]=var_name;
{
var105 = ((val*(*)(val* self))(var88->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var88); /* native_to_s on <var88:NativeArray[String]>*/
}
varonce87 = var88;
{
var106 = nitc___nitc__ToolContext___error(self, ((val*)NULL), var105);
}
goto BREAK_label107;
} else {
}
{
{ /* Inline model$MProperty$intro (var_prop) on <var_prop:nullable MMethod(MMethod)> */
var110 = var_prop->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var_prop:nullable MMethod(MMethod)> */
if (unlikely(var110 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var108 = var110;
RET_LABEL109:(void)0;
}
}
{
{ /* Inline model$MMethodDef$msignature (var108) on <var108:MPropDef(MMethodDef)> */
var113 = var108->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var108:MPropDef(MMethodDef)> */
var111 = var113;
RET_LABEL112:(void)0;
}
}
if (var111 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mixin, 72);
fatal_exit(1);
} else {
{ /* Inline model$MSignature$return_mtype (var111) on <var111:nullable MSignature> */
if (unlikely(var111 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1891);
fatal_exit(1);
}
var116 = var111->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var111:nullable MSignature> */
var114 = var116;
RET_LABEL115:(void)0;
}
}
var_ret = var114;
if (var_ret == NULL) {
var117 = 1; /* is null */
} else {
var117 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_ret,var_other) on <var_ret:nullable MType(MType)> */
var122 = var_ret == var_other;
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
if (unlikely(varonce123==NULL)) {
var124 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce125!=NULL)) {
var126 = varonce125;
} else {
var127 = "Error: --define: method `";
var129 = (val*)(25l<<2|1);
var130 = (val*)(25l<<2|1);
var131 = (val*)((long)(0)<<2|3);
var132 = (val*)((long)(0)<<2|3);
var128 = core__flat___CString___to_s_unsafe(var127, var129, var130, var131, var132);
var126 = var128;
varonce125 = var126;
}
((struct instance_core__NativeArray*)var124)->values[0]=var126;
if (likely(varonce133!=NULL)) {
var134 = varonce133;
} else {
var135 = "` is not a function.";
var137 = (val*)(20l<<2|1);
var138 = (val*)(20l<<2|1);
var139 = (val*)((long)(0)<<2|3);
var140 = (val*)((long)(0)<<2|3);
var136 = core__flat___CString___to_s_unsafe(var135, var137, var138, var139, var140);
var134 = var136;
varonce133 = var134;
}
((struct instance_core__NativeArray*)var124)->values[2]=var134;
} else {
var124 = varonce123;
varonce123 = NULL;
}
{
var141 = ((val*(*)(val* self))(var_prop->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_prop); /* to_s on <var_prop:nullable MMethod(MMethod)>*/
}
((struct instance_core__NativeArray*)var124)->values[1]=var141;
{
var142 = ((val*(*)(val* self))(var124->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var124); /* native_to_s on <var124:NativeArray[String]>*/
}
varonce123 = var124;
{
var143 = nitc___nitc__ToolContext___error(self, ((val*)NULL), var142);
}
goto BREAK_label107;
} else {
{
var144 = ((val*(*)(val* self))(var_ret->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_ret); /* to_s on <var_ret:nullable MType(MType)>*/
}
if (likely(varonce145!=NULL)) {
var146 = varonce145;
} else {
var147 = "Bool";
var149 = (val*)(4l<<2|1);
var150 = (val*)(4l<<2|1);
var151 = (val*)((long)(0)<<2|3);
var152 = (val*)((long)(0)<<2|3);
var148 = core__flat___CString___to_s_unsafe(var147, var149, var150, var151, var152);
var146 = var148;
varonce145 = var146;
}
{
var153 = ((short int(*)(val* self, val* p0))(var144->class->vft[COLOR_core__kernel__Object___61d_61d]))(var144, var146); /* == on <var144:String>*/
}
if (var153){
if (var_val == NULL) {
var155 = 1; /* is null */
} else {
var155 = 0; /* arg is null but recv is not */
}
if (0) {
var156 = ((short int(*)(val* self, val* p0))(var_val->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_val, ((val*)NULL)); /* == on <var_val:nullable Object(nullable String)>*/
var155 = var156;
}
var_157 = var155;
if (var155){
var154 = var_157;
} else {
if (likely(varonce158!=NULL)) {
var159 = varonce158;
} else {
var160 = "true";
var162 = (val*)(4l<<2|1);
var163 = (val*)(4l<<2|1);
var164 = (val*)((long)(0)<<2|3);
var165 = (val*)((long)(0)<<2|3);
var161 = core__flat___CString___to_s_unsafe(var160, var162, var163, var164, var165);
var159 = var161;
varonce158 = var159;
}
{
var166 = ((short int(*)(val* self, val* p0))(var_val->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_val, var159); /* == on <var_val:nullable Object(String)>*/
}
var154 = var166;
}
if (var154){
var167 = (val*)((long)(1)<<2|3);
var_v = var167;
} else {
if (likely(varonce168!=NULL)) {
var169 = varonce168;
} else {
var170 = "false";
var172 = (val*)(5l<<2|1);
var173 = (val*)(5l<<2|1);
var174 = (val*)((long)(0)<<2|3);
var175 = (val*)((long)(0)<<2|3);
var171 = core__flat___CString___to_s_unsafe(var170, var172, var173, var174, var175);
var169 = var171;
varonce168 = var169;
}
{
var176 = ((short int(*)(val* self, val* p0))(var_val->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_val, var169); /* == on <var_val:nullable Object(String)>*/
}
if (var176){
var177 = (val*)((long)(0)<<2|3);
var_v = var177;
} else {
if (unlikely(varonce178==NULL)) {
var179 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce180!=NULL)) {
var181 = varonce180;
} else {
var182 = "Error: --define: method `";
var184 = (val*)(25l<<2|1);
var185 = (val*)(25l<<2|1);
var186 = (val*)((long)(0)<<2|3);
var187 = (val*)((long)(0)<<2|3);
var183 = core__flat___CString___to_s_unsafe(var182, var184, var185, var186, var187);
var181 = var183;
varonce180 = var181;
}
((struct instance_core__NativeArray*)var179)->values[0]=var181;
if (likely(varonce188!=NULL)) {
var189 = varonce188;
} else {
var190 = "` needs a Bool.";
var192 = (val*)(15l<<2|1);
var193 = (val*)(15l<<2|1);
var194 = (val*)((long)(0)<<2|3);
var195 = (val*)((long)(0)<<2|3);
var191 = core__flat___CString___to_s_unsafe(var190, var192, var193, var194, var195);
var189 = var191;
varonce188 = var189;
}
((struct instance_core__NativeArray*)var179)->values[2]=var189;
} else {
var179 = varonce178;
varonce178 = NULL;
}
{
var196 = ((val*(*)(val* self))(var_prop->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_prop); /* to_s on <var_prop:nullable MMethod(MMethod)>*/
}
((struct instance_core__NativeArray*)var179)->values[1]=var196;
{
var197 = ((val*(*)(val* self))(var179->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var179); /* native_to_s on <var179:NativeArray[String]>*/
}
varonce178 = var179;
{
var198 = nitc___nitc__ToolContext___error(self, ((val*)NULL), var197);
}
goto BREAK_label107;
}
}
} else {
{
var199 = ((val*(*)(val* self))(var_ret->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_ret); /* to_s on <var_ret:nullable MType(MType)>*/
}
if (likely(varonce200!=NULL)) {
var201 = varonce200;
} else {
var202 = "Int";
var204 = (val*)(3l<<2|1);
var205 = (val*)(3l<<2|1);
var206 = (val*)((long)(0)<<2|3);
var207 = (val*)((long)(0)<<2|3);
var203 = core__flat___CString___to_s_unsafe(var202, var204, var205, var206, var207);
var201 = var203;
varonce200 = var201;
}
{
var208 = ((short int(*)(val* self, val* p0))(var199->class->vft[COLOR_core__kernel__Object___61d_61d]))(var199, var201); /* == on <var199:String>*/
}
if (var208){
if (var_val == NULL) {
var210 = 0; /* is null */
} else {
var210 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_val,((val*)NULL)) on <var_val:nullable Object(nullable String)> */
var_other58 = ((val*)NULL);
{
var213 = ((short int(*)(val* self, val* p0))(var_val->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_val, var_other58); /* == on <var_val:nullable Object(String)>*/
}
var214 = !var213;
var211 = var214;
goto RET_LABEL212;
RET_LABEL212:(void)0;
}
var210 = var211;
}
var_215 = var210;
if (var210){
{
var216 = core___core__Text___is_numeric(var_val);
}
var209 = var216;
} else {
var209 = var_215;
}
if (var209){
{
var217 = core__fixed_ints_text___Text___to_i(var_val);
}
var218 = (val*)(var217<<2|1);
var_v = var218;
} else {
if (unlikely(varonce219==NULL)) {
var220 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce221!=NULL)) {
var222 = varonce221;
} else {
var223 = "Error: --define: method `";
var225 = (val*)(25l<<2|1);
var226 = (val*)(25l<<2|1);
var227 = (val*)((long)(0)<<2|3);
var228 = (val*)((long)(0)<<2|3);
var224 = core__flat___CString___to_s_unsafe(var223, var225, var226, var227, var228);
var222 = var224;
varonce221 = var222;
}
((struct instance_core__NativeArray*)var220)->values[0]=var222;
if (likely(varonce229!=NULL)) {
var230 = varonce229;
} else {
var231 = "` needs a Int.";
var233 = (val*)(14l<<2|1);
var234 = (val*)(14l<<2|1);
var235 = (val*)((long)(0)<<2|3);
var236 = (val*)((long)(0)<<2|3);
var232 = core__flat___CString___to_s_unsafe(var231, var233, var234, var235, var236);
var230 = var232;
varonce229 = var230;
}
((struct instance_core__NativeArray*)var220)->values[2]=var230;
} else {
var220 = varonce219;
varonce219 = NULL;
}
{
var237 = ((val*(*)(val* self))(var_prop->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_prop); /* to_s on <var_prop:nullable MMethod(MMethod)>*/
}
((struct instance_core__NativeArray*)var220)->values[1]=var237;
{
var238 = ((val*(*)(val* self))(var220->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var220); /* native_to_s on <var220:NativeArray[String]>*/
}
varonce219 = var220;
{
var239 = nitc___nitc__ToolContext___error(self, ((val*)NULL), var238);
}
goto BREAK_label107;
}
} else {
{
var240 = ((val*(*)(val* self))(var_ret->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_ret); /* to_s on <var_ret:nullable MType(MType)>*/
}
if (likely(varonce241!=NULL)) {
var242 = varonce241;
} else {
var243 = "String";
var245 = (val*)(6l<<2|1);
var246 = (val*)(6l<<2|1);
var247 = (val*)((long)(0)<<2|3);
var248 = (val*)((long)(0)<<2|3);
var244 = core__flat___CString___to_s_unsafe(var243, var245, var246, var247, var248);
var242 = var244;
varonce241 = var242;
}
{
var249 = ((short int(*)(val* self, val* p0))(var240->class->vft[COLOR_core__kernel__Object___61d_61d]))(var240, var242); /* == on <var240:String>*/
}
if (var249){
if (var_val == NULL) {
var250 = 0; /* is null */
} else {
var250 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_val,((val*)NULL)) on <var_val:nullable Object(nullable String)> */
var_other58 = ((val*)NULL);
{
var253 = ((short int(*)(val* self, val* p0))(var_val->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_val, var_other58); /* == on <var_val:nullable Object(String)>*/
}
var254 = !var253;
var251 = var254;
goto RET_LABEL252;
RET_LABEL252:(void)0;
}
var250 = var251;
}
if (var250){
var_v = var_val;
} else {
if (unlikely(varonce255==NULL)) {
var256 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce257!=NULL)) {
var258 = varonce257;
} else {
var259 = "Error: --define: method `";
var261 = (val*)(25l<<2|1);
var262 = (val*)(25l<<2|1);
var263 = (val*)((long)(0)<<2|3);
var264 = (val*)((long)(0)<<2|3);
var260 = core__flat___CString___to_s_unsafe(var259, var261, var262, var263, var264);
var258 = var260;
varonce257 = var258;
}
((struct instance_core__NativeArray*)var256)->values[0]=var258;
if (likely(varonce265!=NULL)) {
var266 = varonce265;
} else {
var267 = "` needs a String.";
var269 = (val*)(17l<<2|1);
var270 = (val*)(17l<<2|1);
var271 = (val*)((long)(0)<<2|3);
var272 = (val*)((long)(0)<<2|3);
var268 = core__flat___CString___to_s_unsafe(var267, var269, var270, var271, var272);
var266 = var268;
varonce265 = var266;
}
((struct instance_core__NativeArray*)var256)->values[2]=var266;
} else {
var256 = varonce255;
varonce255 = NULL;
}
{
var273 = ((val*(*)(val* self))(var_prop->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_prop); /* to_s on <var_prop:nullable MMethod(MMethod)>*/
}
((struct instance_core__NativeArray*)var256)->values[1]=var273;
{
var274 = ((val*(*)(val* self))(var256->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var256); /* native_to_s on <var256:NativeArray[String]>*/
}
varonce255 = var256;
{
var275 = nitc___nitc__ToolContext___error(self, ((val*)NULL), var274);
}
goto BREAK_label107;
}
} else {
if (unlikely(varonce276==NULL)) {
var277 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce278!=NULL)) {
var279 = varonce278;
} else {
var280 = "Error: --define: method `";
var282 = (val*)(25l<<2|1);
var283 = (val*)(25l<<2|1);
var284 = (val*)((long)(0)<<2|3);
var285 = (val*)((long)(0)<<2|3);
var281 = core__flat___CString___to_s_unsafe(var280, var282, var283, var284, var285);
var279 = var281;
varonce278 = var279;
}
((struct instance_core__NativeArray*)var277)->values[0]=var279;
if (likely(varonce286!=NULL)) {
var287 = varonce286;
} else {
var288 = "` returns an unsupported type `";
var290 = (val*)(31l<<2|1);
var291 = (val*)(31l<<2|1);
var292 = (val*)((long)(0)<<2|3);
var293 = (val*)((long)(0)<<2|3);
var289 = core__flat___CString___to_s_unsafe(var288, var290, var291, var292, var293);
var287 = var289;
varonce286 = var287;
}
((struct instance_core__NativeArray*)var277)->values[2]=var287;
if (likely(varonce294!=NULL)) {
var295 = varonce294;
} else {
var296 = "`.";
var298 = (val*)(2l<<2|1);
var299 = (val*)(2l<<2|1);
var300 = (val*)((long)(0)<<2|3);
var301 = (val*)((long)(0)<<2|3);
var297 = core__flat___CString___to_s_unsafe(var296, var298, var299, var300, var301);
var295 = var297;
varonce294 = var295;
}
((struct instance_core__NativeArray*)var277)->values[4]=var295;
} else {
var277 = varonce276;
varonce276 = NULL;
}
{
var302 = ((val*(*)(val* self))(var_prop->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_prop); /* to_s on <var_prop:nullable MMethod(MMethod)>*/
}
((struct instance_core__NativeArray*)var277)->values[1]=var302;
{
var303 = ((val*(*)(val* self))(var_ret->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_ret); /* to_s on <var_ret:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var277)->values[3]=var303;
{
var304 = ((val*(*)(val* self))(var277->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var277); /* native_to_s on <var277:NativeArray[String]>*/
}
varonce276 = var277;
{
var305 = nitc___nitc__ToolContext___error(self, ((val*)NULL), var304);
}
goto BREAK_label107;
}
}
}
}
var306 = NEW_nitc__MMethodDef(&type_nitc__MMethodDef);
{
((void(*)(val* self, val* p0))(var306->class->vft[COLOR_nitc__model__MPropDef__mclassdef_61d]))(var306, var_mclassdef); /* mclassdef= on <var306:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var306->class->vft[COLOR_nitc__model__MPropDef__mproperty_61d]))(var306, var_prop); /* mproperty= on <var306:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var306->class->vft[COLOR_nitc__model__MPropDef__location_61d]))(var306, var_location); /* location= on <var306:MMethodDef>*/
}
{
((void(*)(val* self))(var306->class->vft[COLOR_core__kernel__Object__init]))(var306); /* init on <var306:MMethodDef>*/
}
var_pd = var306;
{
{ /* Inline model$MProperty$intro (var_prop) on <var_prop:nullable MMethod(MMethod)> */
var309 = var_prop->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var_prop:nullable MMethod(MMethod)> */
if (unlikely(var309 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var307 = var309;
RET_LABEL308:(void)0;
}
}
{
{ /* Inline model$MMethodDef$msignature (var307) on <var307:MPropDef(MMethodDef)> */
var312 = var307->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var307:MPropDef(MMethodDef)> */
var310 = var312;
RET_LABEL311:(void)0;
}
}
{
{ /* Inline model$MMethodDef$msignature= (var_pd,var310) on <var_pd:MMethodDef> */
var_pd->attrs[COLOR_nitc__model__MMethodDef___msignature].val = var310; /* _msignature on <var_pd:MMethodDef> */
RET_LABEL313:(void)0;
}
}
{
{ /* Inline model$MMethodDef$constant_value= (var_pd,var_v) on <var_pd:MMethodDef> */
var_pd->attrs[COLOR_nitc__model__MMethodDef___constant_value].val = var_v; /* _constant_value on <var_pd:MMethodDef> */
RET_LABEL314:(void)0;
}
}
BREAK_label107: (void)0;
{
((void(*)(val* self))((((long)var_63&3)?class_info[((long)var_63&3)]:var_63->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_63); /* next on <var_63:IndexedIterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_63&3)?class_info[((long)var_63&3)]:var_63->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_63); /* finish on <var_63:IndexedIterator[String]>*/
}
{
var315 = nitc___nitc__ToolContext___check_errors(self);
}
} else {
}
var = var_mainmodule;
goto RET_LABEL;
RET_LABEL:;
return var;
}
