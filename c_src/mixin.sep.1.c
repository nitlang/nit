#include "mixin.sep.0.h"
/* method mixin#ToolContext#opt_mixins for (self: ToolContext): OptionArray */
val* mixin__ToolContext__opt_mixins(val* self) {
val* var /* : OptionArray */;
val* var1 /* : OptionArray */;
var1 = self->attrs[COLOR_mixin__ToolContext___opt_mixins].val; /* _opt_mixins on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_mixins");
PRINT_ERROR(" (%s:%d)\n", "mixin.nit", 23);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mixin#ToolContext#opt_mixins for (self: Object): OptionArray */
val* VIRTUAL_mixin__ToolContext__opt_mixins(val* self) {
val* var /* : OptionArray */;
val* var1 /* : OptionArray */;
val* var3 /* : OptionArray */;
{ /* Inline mixin#ToolContext#opt_mixins (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_mixin__ToolContext___opt_mixins].val; /* _opt_mixins on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_mixins");
PRINT_ERROR(" (%s:%d)\n", "mixin.nit", 23);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method mixin#ToolContext#opt_defines for (self: ToolContext): OptionArray */
val* mixin__ToolContext__opt_defines(val* self) {
val* var /* : OptionArray */;
val* var1 /* : OptionArray */;
var1 = self->attrs[COLOR_mixin__ToolContext___opt_defines].val; /* _opt_defines on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_defines");
PRINT_ERROR(" (%s:%d)\n", "mixin.nit", 25);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mixin#ToolContext#opt_defines for (self: Object): OptionArray */
val* VIRTUAL_mixin__ToolContext__opt_defines(val* self) {
val* var /* : OptionArray */;
val* var1 /* : OptionArray */;
val* var3 /* : OptionArray */;
{ /* Inline mixin#ToolContext#opt_defines (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_mixin__ToolContext___opt_defines].val; /* _opt_defines on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_defines");
PRINT_ERROR(" (%s:%d)\n", "mixin.nit", 25);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method mixin#ToolContext#init for (self: ToolContext) */
void mixin__ToolContext__init(val* self) {
val* var /* : OptionContext */;
val* var2 /* : OptionContext */;
val* var3 /* : OptionArray */;
val* var5 /* : OptionArray */;
val* var6 /* : OptionArray */;
val* var8 /* : OptionArray */;
val* var9 /* : Array[Option] */;
long var10 /* : Int */;
val* var11 /* : NativeArray[Option] */;
{
((void (*)(val*))(self->class->vft[COLOR_mixin__ToolContext__init]))(self) /* init on <self:ToolContext>*/;
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 231);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline mixin#ToolContext#opt_mixins (self) on <self:ToolContext> */
var5 = self->attrs[COLOR_mixin__ToolContext___opt_mixins].val; /* _opt_mixins on <self:ToolContext> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_mixins");
PRINT_ERROR(" (%s:%d)\n", "mixin.nit", 23);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline mixin#ToolContext#opt_defines (self) on <self:ToolContext> */
var8 = self->attrs[COLOR_mixin__ToolContext___opt_defines].val; /* _opt_defines on <self:ToolContext> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_defines");
PRINT_ERROR(" (%s:%d)\n", "mixin.nit", 25);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var9 = NEW_array__Array(&type_array__Arrayopts__Option);
{ /* var9 = array_instance Array[Option] */
var10 = 2;
var11 = NEW_array__NativeArray(var10, &type_array__NativeArrayopts__Option);
((struct instance_array__NativeArray*)var11)->values[0] = (val*) var3;
((struct instance_array__NativeArray*)var11)->values[1] = (val*) var6;
{
((void (*)(val*, val*, long))(var9->class->vft[COLOR_array__Array__with_native]))(var9, var11, var10) /* with_native on <var9:Array[Option]>*/;
}
}
{
opts__OptionContext__add_option(var, var9); /* Direct call opts#OptionContext#add_option on <var:OptionContext>*/
}
RET_LABEL:;
}
/* method mixin#ToolContext#init for (self: Object) */
void VIRTUAL_mixin__ToolContext__init(val* self) {
mixin__ToolContext__init(self); /* Direct call mixin#ToolContext#init on <self:Object(ToolContext)>*/
RET_LABEL:;
}
/* method mixin#ToolContext#make_main_module for (self: ToolContext, Array[MModule]): MModule */
val* mixin__ToolContext__make_main_module(val* self, val* p0) {
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
short int var35 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
val* var40 /* : MModule */;
val* var41 /* : null */;
val* var42 /* : String */;
val* var44 /* : String */;
static val* varonce;
val* var45 /* : String */;
char* var46 /* : NativeString */;
long var47 /* : Int */;
val* var48 /* : FlatString */;
val* var49 /* : String */;
short int var50 /* : Bool */;
val* var52 /* : MClassType */;
val* var_recv /* var recv: MClassType */;
val* var53 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var_ /* var : Array[String] */;
val* var54 /* : ArrayIterator[nullable Object] */;
val* var_55 /* var : ArrayIterator[String] */;
short int var56 /* : Bool */;
val* var57 /* : nullable Object */;
val* var_define /* var define: String */;
char var58 /* : Char */;
val* var59 /* : Array[Text] */;
val* var60 /* : Pattern */;
val* var_spl /* var spl: Array[String] */;
val* var61 /* : nullable Object */;
val* var_name /* var name: String */;
val* var62 /* : null */;
val* var_val /* var val: nullable Object */;
long var63 /* : Int */;
long var65 /* : Int */;
long var66 /* : Int */;
short int var67 /* : Bool */;
short int var69 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var70 /* : Bool */;
long var71 /* : Int */;
val* var72 /* : nullable Object */;
val* var73 /* : MClass */;
val* var75 /* : MClass */;
val* var76 /* : nullable MMethod */;
val* var_prop /* var prop: nullable MMethod */;
val* var77 /* : null */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
short int var81 /* : Bool */;
short int var83 /* : Bool */;
val* var84 /* : null */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
long var88 /* : Int */;
val* var89 /* : FlatString */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : NativeString */;
long var93 /* : Int */;
val* var94 /* : FlatString */;
val* var95 /* : Array[Object] */;
long var96 /* : Int */;
val* var97 /* : NativeArray[Object] */;
val* var98 /* : String */;
val* var99 /* : MPropDef */;
val* var101 /* : MPropDef */;
val* var102 /* : nullable MSignature */;
val* var104 /* : nullable MSignature */;
val* var105 /* : nullable MType */;
val* var107 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
val* var108 /* : null */;
short int var109 /* : Bool */;
short int var110 /* : Bool */;
short int var112 /* : Bool */;
short int var114 /* : Bool */;
val* var115 /* : null */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : NativeString */;
long var119 /* : Int */;
val* var120 /* : FlatString */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : NativeString */;
long var124 /* : Int */;
val* var125 /* : FlatString */;
val* var126 /* : Array[Object] */;
long var127 /* : Int */;
val* var128 /* : NativeArray[Object] */;
val* var129 /* : String */;
val* var130 /* : String */;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : NativeString */;
long var134 /* : Int */;
val* var135 /* : FlatString */;
short int var136 /* : Bool */;
short int var137 /* : Bool */;
short int var138 /* : Bool */;
val* var139 /* : null */;
short int var140 /* : Bool */;
short int var141 /* : Bool */;
short int var_142 /* var : Bool */;
static val* varonce143;
val* var144 /* : String */;
char* var145 /* : NativeString */;
long var146 /* : Int */;
val* var147 /* : FlatString */;
short int var148 /* : Bool */;
short int var149 /* : Bool */;
short int var150 /* : Bool */;
val* var151 /* : nullable Object */;
val* var_v /* var v: nullable Object */;
static val* varonce152;
val* var153 /* : String */;
char* var154 /* : NativeString */;
long var155 /* : Int */;
val* var156 /* : FlatString */;
short int var157 /* : Bool */;
short int var158 /* : Bool */;
short int var159 /* : Bool */;
val* var160 /* : nullable Object */;
val* var161 /* : null */;
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
val* var176 /* : String */;
static val* varonce177;
val* var178 /* : String */;
char* var179 /* : NativeString */;
long var180 /* : Int */;
val* var181 /* : FlatString */;
short int var182 /* : Bool */;
short int var183 /* : Bool */;
short int var184 /* : Bool */;
val* var185 /* : null */;
short int var186 /* : Bool */;
short int var187 /* : Bool */;
val* var_other189 /* var other: nullable Object */;
short int var190 /* : Bool */;
short int var191 /* : Bool */;
short int var192 /* : Bool */;
short int var_193 /* var : Bool */;
short int var194 /* : Bool */;
long var195 /* : Int */;
val* var196 /* : nullable Object */;
val* var197 /* : null */;
static val* varonce198;
val* var199 /* : String */;
char* var200 /* : NativeString */;
long var201 /* : Int */;
val* var202 /* : FlatString */;
static val* varonce203;
val* var204 /* : String */;
char* var205 /* : NativeString */;
long var206 /* : Int */;
val* var207 /* : FlatString */;
val* var208 /* : Array[Object] */;
long var209 /* : Int */;
val* var210 /* : NativeArray[Object] */;
val* var211 /* : String */;
val* var212 /* : String */;
static val* varonce213;
val* var214 /* : String */;
char* var215 /* : NativeString */;
long var216 /* : Int */;
val* var217 /* : FlatString */;
short int var218 /* : Bool */;
short int var219 /* : Bool */;
val* var220 /* : null */;
short int var221 /* : Bool */;
short int var222 /* : Bool */;
short int var224 /* : Bool */;
short int var225 /* : Bool */;
short int var226 /* : Bool */;
val* var227 /* : null */;
static val* varonce228;
val* var229 /* : String */;
char* var230 /* : NativeString */;
long var231 /* : Int */;
val* var232 /* : FlatString */;
static val* varonce233;
val* var234 /* : String */;
char* var235 /* : NativeString */;
long var236 /* : Int */;
val* var237 /* : FlatString */;
val* var238 /* : Array[Object] */;
long var239 /* : Int */;
val* var240 /* : NativeArray[Object] */;
val* var241 /* : String */;
val* var242 /* : null */;
static val* varonce243;
val* var244 /* : String */;
char* var245 /* : NativeString */;
long var246 /* : Int */;
val* var247 /* : FlatString */;
static val* varonce248;
val* var249 /* : String */;
char* var250 /* : NativeString */;
long var251 /* : Int */;
val* var252 /* : FlatString */;
static val* varonce253;
val* var254 /* : String */;
char* var255 /* : NativeString */;
long var256 /* : Int */;
val* var257 /* : FlatString */;
val* var258 /* : Array[Object] */;
long var259 /* : Int */;
val* var260 /* : NativeArray[Object] */;
val* var261 /* : String */;
val* var262 /* : MMethodDef */;
val* var_pd /* var pd: MMethodDef */;
val* var263 /* : MPropDef */;
val* var265 /* : MPropDef */;
val* var266 /* : nullable MSignature */;
val* var268 /* : nullable MSignature */;
var_mmodules = p0;
{
{ /* Inline mixin#ToolContext#opt_mixins (self) on <self:ToolContext> */
var3 = self->attrs[COLOR_mixin__ToolContext___opt_mixins].val; /* _opt_mixins on <self:ToolContext> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_mixins");
PRINT_ERROR(" (%s:%d)\n", "mixin.nit", 23);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline opts#Option#value (var1) on <var1:OptionArray> */
var6 = var1->attrs[COLOR_opts__Option___value].val; /* _value on <var1:OptionArray> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_mixins = var4;
{
var7 = array__AbstractArrayRead__is_empty(var_mixins);
}
var8 = !var7;
if (var8){
{
var9 = modelbuilder__ToolContext__modelbuilder(self);
}
{
{ /* Inline mixin#ToolContext#opt_mixins (self) on <self:ToolContext> */
var12 = self->attrs[COLOR_mixin__ToolContext___opt_mixins].val; /* _opt_mixins on <self:ToolContext> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_mixins");
PRINT_ERROR(" (%s:%d)\n", "mixin.nit", 23);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline opts#Option#value (var10) on <var10:OptionArray> */
var15 = var10->attrs[COLOR_opts__Option___value].val; /* _value on <var10:OptionArray> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = modelbuilder__ModelBuilder__parse(var9, var13);
}
{
abstract_collection__SimpleCollection__add_all(var_mmodules, var16); /* Direct call abstract_collection#SimpleCollection#add_all on <var_mmodules:Array[MModule]>*/
}
{
var17 = modelbuilder__ToolContext__modelbuilder(self);
}
{
modelbuilder__ModelBuilder__run_phases(var17); /* Direct call modelbuilder#ModelBuilder#run_phases on <var17:ModelBuilder>*/
}
} else {
}
{
var18 = ((val* (*)(val*, val*))(self->class->vft[COLOR_mixin__ToolContext__make_main_module]))(self, p0) /* make_main_module on <self:ToolContext>*/;
}
var_mainmodule = var18;
{
{ /* Inline mixin#ToolContext#opt_defines (self) on <self:ToolContext> */
var21 = self->attrs[COLOR_mixin__ToolContext___opt_defines].val; /* _opt_defines on <self:ToolContext> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_defines");
PRINT_ERROR(" (%s:%d)\n", "mixin.nit", 25);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline opts#Option#value (var19) on <var19:OptionArray> */
var24 = var19->attrs[COLOR_opts__Option___value].val; /* _value on <var19:OptionArray> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
var_defines = var22;
{
var25 = array__AbstractArrayRead__is_empty(var_defines);
}
var26 = !var25;
if (var26){
{
{ /* Inline mmodule#MModule#location (var_mainmodule) on <var_mainmodule:MModule> */
var29 = var_mainmodule->attrs[COLOR_mmodule__MModule___location].val; /* _location on <var_mainmodule:MModule> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 81);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_location = var27;
{
{ /* Inline mmodule#MModule#model (var_mainmodule) on <var_mainmodule:MModule> */
var32 = var_mainmodule->attrs[COLOR_mmodule__MModule___model].val; /* _model on <var_mainmodule:MModule> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 72);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
var_model = var30;
{
var33 = abstract_collection__SequenceRead__first(var_mmodules);
}
{
{ /* Inline kernel#Object#== (var_mainmodule,var33) on <var_mainmodule:MModule> */
var_other = var33;
{
{ /* Inline kernel#Object#is_same_instance (var_mainmodule,var_other) on <var_mainmodule:MModule> */
var39 = var_mainmodule == var_other;
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
var40 = NEW_mmodule__MModule(&type_mmodule__MModule);
var41 = NULL;
{
{ /* Inline mmodule#MModule#name (var_mainmodule) on <var_mainmodule:MModule> */
var44 = var_mainmodule->attrs[COLOR_mmodule__MModule___name].val; /* _name on <var_mainmodule:MModule> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 78);
show_backtrace(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
if (varonce) {
var45 = varonce;
} else {
var46 = "-d";
var47 = 2;
var48 = string__NativeString__to_s_with_length(var46, var47);
var45 = var48;
varonce = var45;
}
{
var49 = string__FlatString___43d(var42, var45);
}
{
mmodule__MModule__init(var40, var_model, var41, var49, var_location); /* Direct call mmodule#MModule#init on <var40:MModule>*/
}
var_mainmodule = var40;
{
mmodule__MModule__set_imported_mmodules(var_mainmodule, var_mmodules); /* Direct call mmodule#MModule#set_imported_mmodules on <var_mainmodule:MModule>*/
}
var50 = 1;
{
{ /* Inline mmodule#MModule#is_fictive= (var_mainmodule,var50) on <var_mainmodule:MModule> */
var_mainmodule->attrs[COLOR_mmodule__MModule___is_fictive].s = var50; /* _is_fictive on <var_mainmodule:MModule> */
RET_LABEL51:(void)0;
}
}
} else {
}
{
var52 = model__MModule__object_type(var_mainmodule);
}
var_recv = var52;
var53 = NEW_model__MClassDef(&type_model__MClassDef);
{
model__MClassDef__init(var53, var_mainmodule, var_recv, var_location); /* Direct call model#MClassDef#init on <var53:MClassDef>*/
}
var_mclassdef = var53;
{
model__MClassDef__add_in_hierarchy(var_mclassdef); /* Direct call model#MClassDef#add_in_hierarchy on <var_mclassdef:MClassDef>*/
}
var_ = var_defines;
{
var54 = array__AbstractArrayRead__iterator(var_);
}
var_55 = var54;
for(;;) {
{
var56 = array__ArrayIterator__is_ok(var_55);
}
if (var56){
{
var57 = array__ArrayIterator__item(var_55);
}
var_define = var57;
var58 = '=';
{
var60 = BOX_kernel__Char(var58); /* autobox from Char to Pattern */
var59 = string_search__Text__split_once_on(var_define, var60);
}
var_spl = var59;
{
var61 = abstract_collection__SequenceRead__first(var_spl);
}
var_name = var61;
var62 = NULL;
var_val = var62;
{
{ /* Inline array#AbstractArrayRead#length (var_spl) on <var_spl:Array[String]> */
var65 = var_spl->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_spl:Array[String]> */
var63 = var65;
RET_LABEL64:(void)0;
}
}
var66 = 1;
{
{ /* Inline kernel#Int#> (var63,var66) on <var63:Int> */
/* Covariant cast for argument 0 (i) <var66:Int> isa OTHER */
/* <var66:Int> isa OTHER */
var69 = 1; /* easy <var66:Int> isa OTHER*/
if (unlikely(!var69)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var70 = var63 > var66;
var67 = var70;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
if (var67){
var71 = 1;
{
var72 = array__Array___91d_93d(var_spl, var71);
}
var_val = var72;
} else {
}
{
{ /* Inline model#MClassType#mclass (var_recv) on <var_recv:MClassType> */
var75 = var_recv->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_recv:MClassType> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
var76 = model__MModule__try_get_primitive_method(var_mainmodule, var_name, var73);
}
var_prop = var76;
var77 = NULL;
if (var_prop == NULL) {
var78 = 1; /* is null */
} else {
var78 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_prop,var77) on <var_prop:nullable MMethod> */
var_other = var77;
{
{ /* Inline kernel#Object#is_same_instance (var_prop,var_other) on <var_prop:nullable MMethod(MMethod)> */
var83 = var_prop == var_other;
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
var84 = NULL;
if (varonce85) {
var86 = varonce85;
} else {
var87 = "Error: --define: no top-level function `";
var88 = 40;
var89 = string__NativeString__to_s_with_length(var87, var88);
var86 = var89;
varonce85 = var86;
}
if (varonce90) {
var91 = varonce90;
} else {
var92 = "`";
var93 = 1;
var94 = string__NativeString__to_s_with_length(var92, var93);
var91 = var94;
varonce90 = var91;
}
var95 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var95 = array_instance Array[Object] */
var96 = 3;
var97 = NEW_array__NativeArray(var96, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var97)->values[0] = (val*) var86;
((struct instance_array__NativeArray*)var97)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var97)->values[2] = (val*) var91;
{
((void (*)(val*, val*, long))(var95->class->vft[COLOR_array__Array__with_native]))(var95, var97, var96) /* with_native on <var95:Array[Object]>*/;
}
}
{
var98 = ((val* (*)(val*))(var95->class->vft[COLOR_string__Object__to_s]))(var95) /* to_s on <var95:Array[Object]>*/;
}
{
toolcontext__ToolContext__error(self, var84, var98); /* Direct call toolcontext#ToolContext#error on <self:ToolContext>*/
}
goto BREAK_label;
} else {
}
{
{ /* Inline model#MProperty#intro (var_prop) on <var_prop:nullable MMethod(MMethod)> */
var101 = var_prop->attrs[COLOR_model__MProperty___intro].val; /* _intro on <var_prop:nullable MMethod(MMethod)> */
if (unlikely(var101 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1649);
show_backtrace(1);
}
var99 = var101;
RET_LABEL100:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var99) on <var99:MPropDef(MMethodDef)> */
var104 = var99->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var99:MPropDef(MMethodDef)> */
var102 = var104;
RET_LABEL103:(void)0;
}
}
if (var102 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "mixin.nit", 69);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#return_mtype (var102) on <var102:nullable MSignature> */
if (unlikely(var102 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1468);
show_backtrace(1);
}
var107 = var102->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <var102:nullable MSignature> */
var105 = var107;
RET_LABEL106:(void)0;
}
}
var_ret = var105;
var108 = NULL;
if (var_ret == NULL) {
var109 = 1; /* is null */
} else {
var109 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ret,var108) on <var_ret:nullable MType> */
var_other = var108;
{
{ /* Inline kernel#Object#is_same_instance (var_ret,var_other) on <var_ret:nullable MType(MType)> */
var114 = var_ret == var_other;
var112 = var114;
goto RET_LABEL113;
RET_LABEL113:(void)0;
}
}
var110 = var112;
goto RET_LABEL111;
RET_LABEL111:(void)0;
}
var109 = var110;
}
if (var109){
var115 = NULL;
if (varonce116) {
var117 = varonce116;
} else {
var118 = "Error: --define: Method `";
var119 = 25;
var120 = string__NativeString__to_s_with_length(var118, var119);
var117 = var120;
varonce116 = var117;
}
if (varonce121) {
var122 = varonce121;
} else {
var123 = "` is not a function";
var124 = 19;
var125 = string__NativeString__to_s_with_length(var123, var124);
var122 = var125;
varonce121 = var122;
}
var126 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var126 = array_instance Array[Object] */
var127 = 3;
var128 = NEW_array__NativeArray(var127, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var128)->values[0] = (val*) var117;
((struct instance_array__NativeArray*)var128)->values[1] = (val*) var_prop;
((struct instance_array__NativeArray*)var128)->values[2] = (val*) var122;
{
((void (*)(val*, val*, long))(var126->class->vft[COLOR_array__Array__with_native]))(var126, var128, var127) /* with_native on <var126:Array[Object]>*/;
}
}
{
var129 = ((val* (*)(val*))(var126->class->vft[COLOR_string__Object__to_s]))(var126) /* to_s on <var126:Array[Object]>*/;
}
{
toolcontext__ToolContext__error(self, var115, var129); /* Direct call toolcontext#ToolContext#error on <self:ToolContext>*/
}
goto BREAK_label;
} else {
{
var130 = ((val* (*)(val*))(var_ret->class->vft[COLOR_string__Object__to_s]))(var_ret) /* to_s on <var_ret:nullable MType(MType)>*/;
}
if (varonce131) {
var132 = varonce131;
} else {
var133 = "Bool";
var134 = 4;
var135 = string__NativeString__to_s_with_length(var133, var134);
var132 = var135;
varonce131 = var132;
}
{
var137 = string__FlatString___61d_61d(var130, var132);
var136 = var137;
}
if (var136){
var139 = NULL;
if (var_val == NULL) {
var140 = 1; /* is null */
} else {
var140 = 0; /* arg is null but recv is not */
}
if (0) {
var141 = string__FlatString___61d_61d(var_val, var139);
var140 = var141;
}
var_142 = var140;
if (var140){
var138 = var_142;
} else {
if (varonce143) {
var144 = varonce143;
} else {
var145 = "true";
var146 = 4;
var147 = string__NativeString__to_s_with_length(var145, var146);
var144 = var147;
varonce143 = var144;
}
{
var149 = string__FlatString___61d_61d(var_val, var144);
var148 = var149;
}
var138 = var148;
}
if (var138){
var150 = 1;
var151 = BOX_kernel__Bool(var150); /* autobox from Bool to nullable Object */
var_v = var151;
} else {
if (varonce152) {
var153 = varonce152;
} else {
var154 = "false";
var155 = 5;
var156 = string__NativeString__to_s_with_length(var154, var155);
var153 = var156;
varonce152 = var153;
}
{
var158 = string__FlatString___61d_61d(var_val, var153);
var157 = var158;
}
if (var157){
var159 = 0;
var160 = BOX_kernel__Bool(var159); /* autobox from Bool to nullable Object */
var_v = var160;
} else {
var161 = NULL;
if (varonce162) {
var163 = varonce162;
} else {
var164 = "Error: --define: Method `";
var165 = 25;
var166 = string__NativeString__to_s_with_length(var164, var165);
var163 = var166;
varonce162 = var163;
}
if (varonce167) {
var168 = varonce167;
} else {
var169 = "` need a Bool.";
var170 = 14;
var171 = string__NativeString__to_s_with_length(var169, var170);
var168 = var171;
varonce167 = var168;
}
var172 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var172 = array_instance Array[Object] */
var173 = 3;
var174 = NEW_array__NativeArray(var173, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var174)->values[0] = (val*) var163;
((struct instance_array__NativeArray*)var174)->values[1] = (val*) var_prop;
((struct instance_array__NativeArray*)var174)->values[2] = (val*) var168;
{
((void (*)(val*, val*, long))(var172->class->vft[COLOR_array__Array__with_native]))(var172, var174, var173) /* with_native on <var172:Array[Object]>*/;
}
}
{
var175 = ((val* (*)(val*))(var172->class->vft[COLOR_string__Object__to_s]))(var172) /* to_s on <var172:Array[Object]>*/;
}
{
toolcontext__ToolContext__error(self, var161, var175); /* Direct call toolcontext#ToolContext#error on <self:ToolContext>*/
}
goto BREAK_label;
}
}
} else {
{
var176 = ((val* (*)(val*))(var_ret->class->vft[COLOR_string__Object__to_s]))(var_ret) /* to_s on <var_ret:nullable MType(MType)>*/;
}
if (varonce177) {
var178 = varonce177;
} else {
var179 = "Int";
var180 = 3;
var181 = string__NativeString__to_s_with_length(var179, var180);
var178 = var181;
varonce177 = var178;
}
{
var183 = string__FlatString___61d_61d(var176, var178);
var182 = var183;
}
if (var182){
var185 = NULL;
if (var_val == NULL) {
var186 = 0; /* is null */
} else {
var186 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_val,var185) on <var_val:nullable Object(nullable String)> */
var_other189 = var185;
{
var191 = ((short int (*)(val*, val*))(var_val->class->vft[COLOR_kernel__Object___61d_61d]))(var_val, var_other189) /* == on <var_val:nullable String(String)>*/;
var190 = var191;
}
var192 = !var190;
var187 = var192;
goto RET_LABEL188;
RET_LABEL188:(void)0;
}
var186 = var187;
}
var_193 = var186;
if (var186){
{
var194 = string__Text__is_numeric(var_val);
}
var184 = var194;
} else {
var184 = var_193;
}
if (var184){
{
var195 = string__Text__to_i(var_val);
}
var196 = BOX_kernel__Int(var195); /* autobox from Int to nullable Object */
var_v = var196;
} else {
var197 = NULL;
if (varonce198) {
var199 = varonce198;
} else {
var200 = "Error: --define: Method `";
var201 = 25;
var202 = string__NativeString__to_s_with_length(var200, var201);
var199 = var202;
varonce198 = var199;
}
if (varonce203) {
var204 = varonce203;
} else {
var205 = "` need a Int.";
var206 = 13;
var207 = string__NativeString__to_s_with_length(var205, var206);
var204 = var207;
varonce203 = var204;
}
var208 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var208 = array_instance Array[Object] */
var209 = 3;
var210 = NEW_array__NativeArray(var209, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var210)->values[0] = (val*) var199;
((struct instance_array__NativeArray*)var210)->values[1] = (val*) var_prop;
((struct instance_array__NativeArray*)var210)->values[2] = (val*) var204;
{
((void (*)(val*, val*, long))(var208->class->vft[COLOR_array__Array__with_native]))(var208, var210, var209) /* with_native on <var208:Array[Object]>*/;
}
}
{
var211 = ((val* (*)(val*))(var208->class->vft[COLOR_string__Object__to_s]))(var208) /* to_s on <var208:Array[Object]>*/;
}
{
toolcontext__ToolContext__error(self, var197, var211); /* Direct call toolcontext#ToolContext#error on <self:ToolContext>*/
}
goto BREAK_label;
}
} else {
{
var212 = ((val* (*)(val*))(var_ret->class->vft[COLOR_string__Object__to_s]))(var_ret) /* to_s on <var_ret:nullable MType(MType)>*/;
}
if (varonce213) {
var214 = varonce213;
} else {
var215 = "String";
var216 = 6;
var217 = string__NativeString__to_s_with_length(var215, var216);
var214 = var217;
varonce213 = var214;
}
{
var219 = string__FlatString___61d_61d(var212, var214);
var218 = var219;
}
if (var218){
var220 = NULL;
if (var_val == NULL) {
var221 = 0; /* is null */
} else {
var221 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_val,var220) on <var_val:nullable Object(nullable String)> */
var_other189 = var220;
{
var225 = ((short int (*)(val*, val*))(var_val->class->vft[COLOR_kernel__Object___61d_61d]))(var_val, var_other189) /* == on <var_val:nullable String(String)>*/;
var224 = var225;
}
var226 = !var224;
var222 = var226;
goto RET_LABEL223;
RET_LABEL223:(void)0;
}
var221 = var222;
}
if (var221){
var_v = var_val;
} else {
var227 = NULL;
if (varonce228) {
var229 = varonce228;
} else {
var230 = "Error: --define: Method `";
var231 = 25;
var232 = string__NativeString__to_s_with_length(var230, var231);
var229 = var232;
varonce228 = var229;
}
if (varonce233) {
var234 = varonce233;
} else {
var235 = "` need a String.";
var236 = 16;
var237 = string__NativeString__to_s_with_length(var235, var236);
var234 = var237;
varonce233 = var234;
}
var238 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var238 = array_instance Array[Object] */
var239 = 3;
var240 = NEW_array__NativeArray(var239, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var240)->values[0] = (val*) var229;
((struct instance_array__NativeArray*)var240)->values[1] = (val*) var_prop;
((struct instance_array__NativeArray*)var240)->values[2] = (val*) var234;
{
((void (*)(val*, val*, long))(var238->class->vft[COLOR_array__Array__with_native]))(var238, var240, var239) /* with_native on <var238:Array[Object]>*/;
}
}
{
var241 = ((val* (*)(val*))(var238->class->vft[COLOR_string__Object__to_s]))(var238) /* to_s on <var238:Array[Object]>*/;
}
{
toolcontext__ToolContext__error(self, var227, var241); /* Direct call toolcontext#ToolContext#error on <self:ToolContext>*/
}
goto BREAK_label;
}
} else {
var242 = NULL;
if (varonce243) {
var244 = varonce243;
} else {
var245 = "Error: --define: Method `";
var246 = 25;
var247 = string__NativeString__to_s_with_length(var245, var246);
var244 = var247;
varonce243 = var244;
}
if (varonce248) {
var249 = varonce248;
} else {
var250 = "` return an unmanaged type ";
var251 = 27;
var252 = string__NativeString__to_s_with_length(var250, var251);
var249 = var252;
varonce248 = var249;
}
if (varonce253) {
var254 = varonce253;
} else {
var255 = ".";
var256 = 1;
var257 = string__NativeString__to_s_with_length(var255, var256);
var254 = var257;
varonce253 = var254;
}
var258 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var258 = array_instance Array[Object] */
var259 = 5;
var260 = NEW_array__NativeArray(var259, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var260)->values[0] = (val*) var244;
((struct instance_array__NativeArray*)var260)->values[1] = (val*) var_prop;
((struct instance_array__NativeArray*)var260)->values[2] = (val*) var249;
((struct instance_array__NativeArray*)var260)->values[3] = (val*) var_ret;
((struct instance_array__NativeArray*)var260)->values[4] = (val*) var254;
{
((void (*)(val*, val*, long))(var258->class->vft[COLOR_array__Array__with_native]))(var258, var260, var259) /* with_native on <var258:Array[Object]>*/;
}
}
{
var261 = ((val* (*)(val*))(var258->class->vft[COLOR_string__Object__to_s]))(var258) /* to_s on <var258:Array[Object]>*/;
}
{
toolcontext__ToolContext__error(self, var242, var261); /* Direct call toolcontext#ToolContext#error on <self:ToolContext>*/
}
goto BREAK_label;
}
}
}
}
var262 = NEW_model__MMethodDef(&type_model__MMethodDef);
{
model__MMethodDef__init(var262, var_mclassdef, var_prop, var_location); /* Direct call model#MMethodDef#init on <var262:MMethodDef>*/
}
var_pd = var262;
{
{ /* Inline model#MProperty#intro (var_prop) on <var_prop:nullable MMethod(MMethod)> */
var265 = var_prop->attrs[COLOR_model__MProperty___intro].val; /* _intro on <var_prop:nullable MMethod(MMethod)> */
if (unlikely(var265 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1649);
show_backtrace(1);
}
var263 = var265;
RET_LABEL264:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var263) on <var263:MPropDef(MMethodDef)> */
var268 = var263->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var263:MPropDef(MMethodDef)> */
var266 = var268;
RET_LABEL267:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature= (var_pd,var266) on <var_pd:MMethodDef> */
var_pd->attrs[COLOR_model__MMethodDef___msignature].val = var266; /* _msignature on <var_pd:MMethodDef> */
RET_LABEL269:(void)0;
}
}
{
{ /* Inline model#MMethodDef#constant_value= (var_pd,var_v) on <var_pd:MMethodDef> */
var_pd->attrs[COLOR_model__MMethodDef___constant_value].val = var_v; /* _constant_value on <var_pd:MMethodDef> */
RET_LABEL270:(void)0;
}
}
BREAK_label: (void)0;
{
array__ArrayIterator__next(var_55); /* Direct call array#ArrayIterator#next on <var_55:ArrayIterator[String]>*/
}
} else {
goto BREAK_label271;
}
}
BREAK_label271: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_55) on <var_55:ArrayIterator[String]> */
RET_LABEL272:(void)0;
}
}
{
toolcontext__ToolContext__check_errors(self); /* Direct call toolcontext#ToolContext#check_errors on <self:ToolContext>*/
}
} else {
}
var = var_mainmodule;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method mixin#ToolContext#make_main_module for (self: Object, Array[MModule]): MModule */
val* VIRTUAL_mixin__ToolContext__make_main_module(val* self, val* p0) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = mixin__ToolContext__make_main_module(self, p0);
var = var1;
RET_LABEL:;
return var;
}
