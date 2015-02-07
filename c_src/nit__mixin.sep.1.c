#include "nit__mixin.sep.0.h"
/* method mixin#ToolContext#opt_mixins for (self: ToolContext): OptionArray */
val* nit__mixin___ToolContext___opt_mixins(val* self) {
val* var /* : OptionArray */;
val* var1 /* : OptionArray */;
var1 = self->attrs[COLOR_nit__mixin__ToolContext___opt_mixins].val; /* _opt_mixins on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_mixins");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mixin, 23);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mixin#ToolContext#opt_defines for (self: ToolContext): OptionArray */
val* nit__mixin___ToolContext___opt_defines(val* self) {
val* var /* : OptionArray */;
val* var1 /* : OptionArray */;
var1 = self->attrs[COLOR_nit__mixin__ToolContext___opt_defines].val; /* _opt_defines on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_defines");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mixin, 25);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mixin#ToolContext#init for (self: ToolContext) */
void nit__mixin___ToolContext___standard__kernel__Object__init(val* self) {
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
((void (*)(val* self))(self->class->vft[COLOR_nit__mixin___ToolContext___standard__kernel__Object__init]))(self) /* init on <self:ToolContext>*/;
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_nit__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 270);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline mixin#ToolContext#opt_mixins (self) on <self:ToolContext> */
var5 = self->attrs[COLOR_nit__mixin__ToolContext___opt_mixins].val; /* _opt_mixins on <self:ToolContext> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_mixins");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mixin, 23);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline mixin#ToolContext#opt_defines (self) on <self:ToolContext> */
var8 = self->attrs[COLOR_nit__mixin__ToolContext___opt_defines].val; /* _opt_defines on <self:ToolContext> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_defines");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mixin, 25);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var9 = NEW_standard__Array(&type_standard__Array__opts__Option);
{ /* var9 = array_instance Array[Option] */
var10 = 2;
var11 = NEW_standard__NativeArray(var10, &type_standard__NativeArray__opts__Option);
((struct instance_standard__NativeArray*)var11)->values[0] = (val*) var3;
((struct instance_standard__NativeArray*)var11)->values[1] = (val*) var6;
{
((void (*)(val* self, val* p0, long p1))(var9->class->vft[COLOR_standard__array__Array__with_native]))(var9, var11, var10) /* with_native on <var9:Array[Option]>*/;
}
}
{
opts___opts__OptionContext___add_option(var, var9); /* Direct call opts#OptionContext#add_option on <var:OptionContext>*/
}
RET_LABEL:;
}
/* method mixin#ToolContext#make_main_module for (self: ToolContext, Array[MModule]): MModule */
val* nit__mixin___ToolContext___make_main_module(val* self, val* p0) {
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
val* var40 /* : null */;
val* var41 /* : String */;
val* var43 /* : String */;
static val* varonce;
val* var44 /* : String */;
char* var45 /* : NativeString */;
long var46 /* : Int */;
val* var47 /* : FlatString */;
val* var48 /* : String */;
short int var49 /* : Bool */;
val* var51 /* : MClassType */;
val* var_recv /* var recv: MClassType */;
val* var52 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var_ /* var : Array[String] */;
val* var53 /* : ArrayIterator[nullable Object] */;
val* var_54 /* var : ArrayIterator[String] */;
short int var55 /* : Bool */;
val* var56 /* : nullable Object */;
val* var_define /* var define: String */;
char var57 /* : Char */;
val* var58 /* : Array[Text] */;
val* var59 /* : Pattern */;
val* var_spl /* var spl: Array[String] */;
val* var60 /* : nullable Object */;
val* var_name /* var name: String */;
val* var61 /* : null */;
val* var_val /* var val: nullable Object */;
long var62 /* : Int */;
long var64 /* : Int */;
long var65 /* : Int */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var69 /* : Bool */;
long var70 /* : Int */;
val* var71 /* : nullable Object */;
val* var72 /* : MClass */;
val* var74 /* : MClass */;
val* var75 /* : nullable MMethod */;
val* var_prop /* var prop: nullable MMethod */;
val* var76 /* : null */;
short int var77 /* : Bool */;
short int var78 /* : Bool */;
short int var80 /* : Bool */;
short int var82 /* : Bool */;
val* var83 /* : null */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : NativeString */;
long var87 /* : Int */;
val* var88 /* : FlatString */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
long var92 /* : Int */;
val* var93 /* : FlatString */;
val* var94 /* : Array[Object] */;
long var95 /* : Int */;
val* var96 /* : NativeArray[Object] */;
val* var97 /* : String */;
val* var98 /* : MPropDef */;
val* var100 /* : MPropDef */;
val* var101 /* : nullable MSignature */;
val* var103 /* : nullable MSignature */;
val* var104 /* : nullable MType */;
val* var106 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
val* var107 /* : null */;
short int var108 /* : Bool */;
short int var109 /* : Bool */;
short int var111 /* : Bool */;
short int var113 /* : Bool */;
val* var114 /* : null */;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : NativeString */;
long var118 /* : Int */;
val* var119 /* : FlatString */;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : NativeString */;
long var123 /* : Int */;
val* var124 /* : FlatString */;
val* var125 /* : Array[Object] */;
long var126 /* : Int */;
val* var127 /* : NativeArray[Object] */;
val* var128 /* : String */;
val* var129 /* : String */;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : NativeString */;
long var133 /* : Int */;
val* var134 /* : FlatString */;
short int var135 /* : Bool */;
short int var136 /* : Bool */;
val* var137 /* : null */;
short int var138 /* : Bool */;
short int var139 /* : Bool */;
short int var_140 /* var : Bool */;
static val* varonce141;
val* var142 /* : String */;
char* var143 /* : NativeString */;
long var144 /* : Int */;
val* var145 /* : FlatString */;
short int var146 /* : Bool */;
short int var147 /* : Bool */;
val* var148 /* : nullable Object */;
val* var_v /* var v: nullable Object */;
static val* varonce149;
val* var150 /* : String */;
char* var151 /* : NativeString */;
long var152 /* : Int */;
val* var153 /* : FlatString */;
short int var154 /* : Bool */;
short int var155 /* : Bool */;
val* var156 /* : nullable Object */;
val* var157 /* : null */;
static val* varonce158;
val* var159 /* : String */;
char* var160 /* : NativeString */;
long var161 /* : Int */;
val* var162 /* : FlatString */;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : NativeString */;
long var166 /* : Int */;
val* var167 /* : FlatString */;
val* var168 /* : Array[Object] */;
long var169 /* : Int */;
val* var170 /* : NativeArray[Object] */;
val* var171 /* : String */;
val* var172 /* : String */;
static val* varonce173;
val* var174 /* : String */;
char* var175 /* : NativeString */;
long var176 /* : Int */;
val* var177 /* : FlatString */;
short int var178 /* : Bool */;
short int var179 /* : Bool */;
val* var180 /* : null */;
short int var181 /* : Bool */;
short int var182 /* : Bool */;
val* var_other184 /* var other: nullable Object */;
short int var185 /* : Bool */;
short int var186 /* : Bool */;
short int var_187 /* var : Bool */;
short int var188 /* : Bool */;
long var189 /* : Int */;
val* var190 /* : nullable Object */;
val* var191 /* : null */;
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
val* var206 /* : String */;
static val* varonce207;
val* var208 /* : String */;
char* var209 /* : NativeString */;
long var210 /* : Int */;
val* var211 /* : FlatString */;
short int var212 /* : Bool */;
val* var213 /* : null */;
short int var214 /* : Bool */;
short int var215 /* : Bool */;
short int var217 /* : Bool */;
short int var218 /* : Bool */;
val* var219 /* : null */;
static val* varonce220;
val* var221 /* : String */;
char* var222 /* : NativeString */;
long var223 /* : Int */;
val* var224 /* : FlatString */;
static val* varonce225;
val* var226 /* : String */;
char* var227 /* : NativeString */;
long var228 /* : Int */;
val* var229 /* : FlatString */;
val* var230 /* : Array[Object] */;
long var231 /* : Int */;
val* var232 /* : NativeArray[Object] */;
val* var233 /* : String */;
val* var234 /* : null */;
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
static val* varonce245;
val* var246 /* : String */;
char* var247 /* : NativeString */;
long var248 /* : Int */;
val* var249 /* : FlatString */;
val* var250 /* : Array[Object] */;
long var251 /* : Int */;
val* var252 /* : NativeArray[Object] */;
val* var253 /* : String */;
val* var254 /* : MMethodDef */;
val* var_pd /* var pd: MMethodDef */;
val* var255 /* : MPropDef */;
val* var257 /* : MPropDef */;
val* var258 /* : nullable MSignature */;
val* var260 /* : nullable MSignature */;
short int var265 /* : Bool */;
var_mmodules = p0;
{
{ /* Inline mixin#ToolContext#opt_mixins (self) on <self:ToolContext> */
var3 = self->attrs[COLOR_nit__mixin__ToolContext___opt_mixins].val; /* _opt_mixins on <self:ToolContext> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_mixins");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mixin, 23);
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
var7 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_mixins);
}
var8 = !var7;
if (var8){
{
var9 = nit__modelbuilder_base___ToolContext___modelbuilder(self);
}
{
{ /* Inline mixin#ToolContext#opt_mixins (self) on <self:ToolContext> */
var12 = self->attrs[COLOR_nit__mixin__ToolContext___opt_mixins].val; /* _opt_mixins on <self:ToolContext> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_mixins");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mixin, 23);
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
var16 = nit__loader___ModelBuilder___parse(var9, var13);
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add_all(var_mmodules, var16); /* Direct call array#Array#add_all on <var_mmodules:Array[MModule]>*/
}
{
var17 = nit__modelbuilder_base___ToolContext___modelbuilder(self);
}
{
nit__modelbuilder___ModelBuilder___run_phases(var17); /* Direct call modelbuilder#ModelBuilder#run_phases on <var17:ModelBuilder>*/
}
} else {
}
{
var18 = ((val* (*)(val* self, val* p0))(self->class->vft[COLOR_nit__mixin___ToolContext___make_main_module]))(self, p0) /* make_main_module on <self:ToolContext>*/;
}
var_mainmodule = var18;
{
{ /* Inline mixin#ToolContext#opt_defines (self) on <self:ToolContext> */
var21 = self->attrs[COLOR_nit__mixin__ToolContext___opt_defines].val; /* _opt_defines on <self:ToolContext> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_defines");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mixin, 25);
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
var25 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_defines);
}
var26 = !var25;
if (var26){
{
{ /* Inline mmodule#MModule#location (var_mainmodule) on <var_mainmodule:MModule> */
var29 = var_mainmodule->attrs[COLOR_nit__mmodule__MModule___location].val; /* _location on <var_mainmodule:MModule> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 90);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_location = var27;
{
{ /* Inline mmodule#MModule#model (var_mainmodule) on <var_mainmodule:MModule> */
var32 = var_mainmodule->attrs[COLOR_nit__mmodule__MModule___model].val; /* _model on <var_mainmodule:MModule> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 73);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
var_model = var30;
{
var33 = standard___standard__SequenceRead___Collection__first(var_mmodules);
}
{
{ /* Inline kernel#Object#== (var_mainmodule,var33) on <var_mainmodule:MModule> */
var_other = var33;
{
{ /* Inline kernel#Object#is_same_instance (var_mainmodule,var_other) on <var_mainmodule:MModule> */
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
var39 = NEW_nit__MModule(&type_nit__MModule);
var40 = NULL;
{
{ /* Inline mmodule#MModule#name (var_mainmodule) on <var_mainmodule:MModule> */
var43 = var_mainmodule->attrs[COLOR_nit__mmodule__MModule___name].val; /* _name on <var_mainmodule:MModule> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 87);
show_backtrace(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
if (varonce) {
var44 = varonce;
} else {
var45 = "-d";
var46 = 2;
var47 = standard___standard__NativeString___to_s_with_length(var45, var46);
var44 = var47;
varonce = var44;
}
{
var48 = ((val* (*)(val* self, val* p0))(var41->class->vft[COLOR_standard__string__String___43d]))(var41, var44) /* + on <var41:String>*/;
}
{
((void (*)(val* self, val* p0))(var39->class->vft[COLOR_nit__mmodule__MModule__model_61d]))(var39, var_model) /* model= on <var39:MModule>*/;
}
{
((void (*)(val* self, val* p0))(var39->class->vft[COLOR_nit__mmodule__MModule__mgroup_61d]))(var39, var40) /* mgroup= on <var39:MModule>*/;
}
{
((void (*)(val* self, val* p0))(var39->class->vft[COLOR_nit__mmodule__MModule__name_61d]))(var39, var48) /* name= on <var39:MModule>*/;
}
{
((void (*)(val* self, val* p0))(var39->class->vft[COLOR_nit__mmodule__MModule__location_61d]))(var39, var_location) /* location= on <var39:MModule>*/;
}
{
((void (*)(val* self))(var39->class->vft[COLOR_standard__kernel__Object__init]))(var39) /* init on <var39:MModule>*/;
}
var_mainmodule = var39;
{
nit___nit__MModule___set_imported_mmodules(var_mainmodule, var_mmodules); /* Direct call mmodule#MModule#set_imported_mmodules on <var_mainmodule:MModule>*/
}
var49 = 1;
{
{ /* Inline mmodule#MModule#is_fictive= (var_mainmodule,var49) on <var_mainmodule:MModule> */
var_mainmodule->attrs[COLOR_nit__mmodule__MModule___is_fictive].s = var49; /* _is_fictive on <var_mainmodule:MModule> */
RET_LABEL50:(void)0;
}
}
} else {
}
{
var51 = nit__model___MModule___object_type(var_mainmodule);
}
var_recv = var51;
var52 = NEW_nit__MClassDef(&type_nit__MClassDef);
{
((void (*)(val* self, val* p0))(var52->class->vft[COLOR_nit__model__MClassDef__mmodule_61d]))(var52, var_mainmodule) /* mmodule= on <var52:MClassDef>*/;
}
{
((void (*)(val* self, val* p0))(var52->class->vft[COLOR_nit__model__MClassDef__bound_mtype_61d]))(var52, var_recv) /* bound_mtype= on <var52:MClassDef>*/;
}
{
((void (*)(val* self, val* p0))(var52->class->vft[COLOR_nit__model__MClassDef__location_61d]))(var52, var_location) /* location= on <var52:MClassDef>*/;
}
{
((void (*)(val* self))(var52->class->vft[COLOR_standard__kernel__Object__init]))(var52) /* init on <var52:MClassDef>*/;
}
var_mclassdef = var52;
{
nit___nit__MClassDef___add_in_hierarchy(var_mclassdef); /* Direct call model#MClassDef#add_in_hierarchy on <var_mclassdef:MClassDef>*/
}
var_ = var_defines;
{
var53 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_54 = var53;
for(;;) {
{
var55 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_54);
}
if (var55){
{
var56 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_54);
}
var_define = var56;
var57 = '=';
{
var59 = BOX_standard__Char(var57); /* autobox from Char to Pattern */
var58 = standard__string_search___Text___split_once_on(var_define, var59);
}
var_spl = var58;
{
var60 = standard___standard__SequenceRead___Collection__first(var_spl);
}
var_name = var60;
var61 = NULL;
var_val = var61;
{
{ /* Inline array#AbstractArrayRead#length (var_spl) on <var_spl:Array[String]> */
var64 = var_spl->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_spl:Array[String]> */
var62 = var64;
RET_LABEL63:(void)0;
}
}
var65 = 1;
{
{ /* Inline kernel#Int#> (var62,var65) on <var62:Int> */
/* Covariant cast for argument 0 (i) <var65:Int> isa OTHER */
/* <var65:Int> isa OTHER */
var68 = 1; /* easy <var65:Int> isa OTHER*/
if (unlikely(!var68)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var69 = var62 > var65;
var66 = var69;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
if (var66){
var70 = 1;
{
var71 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_spl, var70);
}
var_val = var71;
} else {
}
{
{ /* Inline model#MClassType#mclass (var_recv) on <var_recv:MClassType> */
var74 = var_recv->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_recv:MClassType> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
{
var75 = nit__model___MModule___try_get_primitive_method(var_mainmodule, var_name, var72);
}
var_prop = var75;
var76 = NULL;
if (var_prop == NULL) {
var77 = 1; /* is null */
} else {
var77 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_prop,var76) on <var_prop:nullable MMethod> */
var_other = var76;
{
{ /* Inline kernel#Object#is_same_instance (var_prop,var_other) on <var_prop:nullable MMethod(MMethod)> */
var82 = var_prop == var_other;
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
if (var77){
var83 = NULL;
if (varonce84) {
var85 = varonce84;
} else {
var86 = "Error: --define: no top-level function `";
var87 = 40;
var88 = standard___standard__NativeString___to_s_with_length(var86, var87);
var85 = var88;
varonce84 = var85;
}
if (varonce89) {
var90 = varonce89;
} else {
var91 = "`";
var92 = 1;
var93 = standard___standard__NativeString___to_s_with_length(var91, var92);
var90 = var93;
varonce89 = var90;
}
var94 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var94 = array_instance Array[Object] */
var95 = 3;
var96 = NEW_standard__NativeArray(var95, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var96)->values[0] = (val*) var85;
((struct instance_standard__NativeArray*)var96)->values[1] = (val*) var_name;
((struct instance_standard__NativeArray*)var96)->values[2] = (val*) var90;
{
((void (*)(val* self, val* p0, long p1))(var94->class->vft[COLOR_standard__array__Array__with_native]))(var94, var96, var95) /* with_native on <var94:Array[Object]>*/;
}
}
{
var97 = ((val* (*)(val* self))(var94->class->vft[COLOR_standard__string__Object__to_s]))(var94) /* to_s on <var94:Array[Object]>*/;
}
{
nit___nit__ToolContext___error(self, var83, var97); /* Direct call toolcontext#ToolContext#error on <self:ToolContext>*/
}
goto BREAK_label;
} else {
}
{
{ /* Inline model#MProperty#intro (var_prop) on <var_prop:nullable MMethod(MMethod)> */
var100 = var_prop->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var_prop:nullable MMethod(MMethod)> */
if (unlikely(var100 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1773);
show_backtrace(1);
}
var98 = var100;
RET_LABEL99:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var98) on <var98:MPropDef(MMethodDef)> */
var103 = var98->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var98:MPropDef(MMethodDef)> */
var101 = var103;
RET_LABEL102:(void)0;
}
}
if (var101 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mixin, 69);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#return_mtype (var101) on <var101:nullable MSignature> */
if (unlikely(var101 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1595);
show_backtrace(1);
}
var106 = var101->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var101:nullable MSignature> */
var104 = var106;
RET_LABEL105:(void)0;
}
}
var_ret = var104;
var107 = NULL;
if (var_ret == NULL) {
var108 = 1; /* is null */
} else {
var108 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ret,var107) on <var_ret:nullable MType> */
var_other = var107;
{
{ /* Inline kernel#Object#is_same_instance (var_ret,var_other) on <var_ret:nullable MType(MType)> */
var113 = var_ret == var_other;
var111 = var113;
goto RET_LABEL112;
RET_LABEL112:(void)0;
}
}
var109 = var111;
goto RET_LABEL110;
RET_LABEL110:(void)0;
}
var108 = var109;
}
if (var108){
var114 = NULL;
if (varonce115) {
var116 = varonce115;
} else {
var117 = "Error: --define: Method `";
var118 = 25;
var119 = standard___standard__NativeString___to_s_with_length(var117, var118);
var116 = var119;
varonce115 = var116;
}
if (varonce120) {
var121 = varonce120;
} else {
var122 = "` is not a function";
var123 = 19;
var124 = standard___standard__NativeString___to_s_with_length(var122, var123);
var121 = var124;
varonce120 = var121;
}
var125 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var125 = array_instance Array[Object] */
var126 = 3;
var127 = NEW_standard__NativeArray(var126, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var127)->values[0] = (val*) var116;
((struct instance_standard__NativeArray*)var127)->values[1] = (val*) var_prop;
((struct instance_standard__NativeArray*)var127)->values[2] = (val*) var121;
{
((void (*)(val* self, val* p0, long p1))(var125->class->vft[COLOR_standard__array__Array__with_native]))(var125, var127, var126) /* with_native on <var125:Array[Object]>*/;
}
}
{
var128 = ((val* (*)(val* self))(var125->class->vft[COLOR_standard__string__Object__to_s]))(var125) /* to_s on <var125:Array[Object]>*/;
}
{
nit___nit__ToolContext___error(self, var114, var128); /* Direct call toolcontext#ToolContext#error on <self:ToolContext>*/
}
goto BREAK_label;
} else {
{
var129 = ((val* (*)(val* self))(var_ret->class->vft[COLOR_standard__string__Object__to_s]))(var_ret) /* to_s on <var_ret:nullable MType(MType)>*/;
}
if (varonce130) {
var131 = varonce130;
} else {
var132 = "Bool";
var133 = 4;
var134 = standard___standard__NativeString___to_s_with_length(var132, var133);
var131 = var134;
varonce130 = var131;
}
{
var135 = ((short int (*)(val* self, val* p0))(var129->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var129, var131) /* == on <var129:String>*/;
}
if (var135){
var137 = NULL;
if (var_val == NULL) {
var138 = 1; /* is null */
} else {
var138 = 0; /* arg is null but recv is not */
}
if (0) {
var139 = ((short int (*)(val* self, val* p0))(var_val->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_val, var137) /* == on <var_val:nullable Object(nullable String)>*/;
var138 = var139;
}
var_140 = var138;
if (var138){
var136 = var_140;
} else {
if (varonce141) {
var142 = varonce141;
} else {
var143 = "true";
var144 = 4;
var145 = standard___standard__NativeString___to_s_with_length(var143, var144);
var142 = var145;
varonce141 = var142;
}
{
var146 = ((short int (*)(val* self, val* p0))(var_val->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_val, var142) /* == on <var_val:nullable Object(String)>*/;
}
var136 = var146;
}
if (var136){
var147 = 1;
var148 = BOX_standard__Bool(var147); /* autobox from Bool to nullable Object */
var_v = var148;
} else {
if (varonce149) {
var150 = varonce149;
} else {
var151 = "false";
var152 = 5;
var153 = standard___standard__NativeString___to_s_with_length(var151, var152);
var150 = var153;
varonce149 = var150;
}
{
var154 = ((short int (*)(val* self, val* p0))(var_val->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_val, var150) /* == on <var_val:nullable Object(String)>*/;
}
if (var154){
var155 = 0;
var156 = BOX_standard__Bool(var155); /* autobox from Bool to nullable Object */
var_v = var156;
} else {
var157 = NULL;
if (varonce158) {
var159 = varonce158;
} else {
var160 = "Error: --define: Method `";
var161 = 25;
var162 = standard___standard__NativeString___to_s_with_length(var160, var161);
var159 = var162;
varonce158 = var159;
}
if (varonce163) {
var164 = varonce163;
} else {
var165 = "` need a Bool.";
var166 = 14;
var167 = standard___standard__NativeString___to_s_with_length(var165, var166);
var164 = var167;
varonce163 = var164;
}
var168 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var168 = array_instance Array[Object] */
var169 = 3;
var170 = NEW_standard__NativeArray(var169, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var170)->values[0] = (val*) var159;
((struct instance_standard__NativeArray*)var170)->values[1] = (val*) var_prop;
((struct instance_standard__NativeArray*)var170)->values[2] = (val*) var164;
{
((void (*)(val* self, val* p0, long p1))(var168->class->vft[COLOR_standard__array__Array__with_native]))(var168, var170, var169) /* with_native on <var168:Array[Object]>*/;
}
}
{
var171 = ((val* (*)(val* self))(var168->class->vft[COLOR_standard__string__Object__to_s]))(var168) /* to_s on <var168:Array[Object]>*/;
}
{
nit___nit__ToolContext___error(self, var157, var171); /* Direct call toolcontext#ToolContext#error on <self:ToolContext>*/
}
goto BREAK_label;
}
}
} else {
{
var172 = ((val* (*)(val* self))(var_ret->class->vft[COLOR_standard__string__Object__to_s]))(var_ret) /* to_s on <var_ret:nullable MType(MType)>*/;
}
if (varonce173) {
var174 = varonce173;
} else {
var175 = "Int";
var176 = 3;
var177 = standard___standard__NativeString___to_s_with_length(var175, var176);
var174 = var177;
varonce173 = var174;
}
{
var178 = ((short int (*)(val* self, val* p0))(var172->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var172, var174) /* == on <var172:String>*/;
}
if (var178){
var180 = NULL;
if (var_val == NULL) {
var181 = 0; /* is null */
} else {
var181 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_val,var180) on <var_val:nullable Object(nullable String)> */
var_other184 = var180;
{
var185 = ((short int (*)(val* self, val* p0))(var_val->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_val, var_other184) /* == on <var_val:nullable String(String)>*/;
}
var186 = !var185;
var182 = var186;
goto RET_LABEL183;
RET_LABEL183:(void)0;
}
var181 = var182;
}
var_187 = var181;
if (var181){
{
var188 = standard___standard__Text___is_numeric(var_val);
}
var179 = var188;
} else {
var179 = var_187;
}
if (var179){
{
var189 = standard___standard__Text___to_i(var_val);
}
var190 = BOX_standard__Int(var189); /* autobox from Int to nullable Object */
var_v = var190;
} else {
var191 = NULL;
if (varonce192) {
var193 = varonce192;
} else {
var194 = "Error: --define: Method `";
var195 = 25;
var196 = standard___standard__NativeString___to_s_with_length(var194, var195);
var193 = var196;
varonce192 = var193;
}
if (varonce197) {
var198 = varonce197;
} else {
var199 = "` need a Int.";
var200 = 13;
var201 = standard___standard__NativeString___to_s_with_length(var199, var200);
var198 = var201;
varonce197 = var198;
}
var202 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var202 = array_instance Array[Object] */
var203 = 3;
var204 = NEW_standard__NativeArray(var203, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var204)->values[0] = (val*) var193;
((struct instance_standard__NativeArray*)var204)->values[1] = (val*) var_prop;
((struct instance_standard__NativeArray*)var204)->values[2] = (val*) var198;
{
((void (*)(val* self, val* p0, long p1))(var202->class->vft[COLOR_standard__array__Array__with_native]))(var202, var204, var203) /* with_native on <var202:Array[Object]>*/;
}
}
{
var205 = ((val* (*)(val* self))(var202->class->vft[COLOR_standard__string__Object__to_s]))(var202) /* to_s on <var202:Array[Object]>*/;
}
{
nit___nit__ToolContext___error(self, var191, var205); /* Direct call toolcontext#ToolContext#error on <self:ToolContext>*/
}
goto BREAK_label;
}
} else {
{
var206 = ((val* (*)(val* self))(var_ret->class->vft[COLOR_standard__string__Object__to_s]))(var_ret) /* to_s on <var_ret:nullable MType(MType)>*/;
}
if (varonce207) {
var208 = varonce207;
} else {
var209 = "String";
var210 = 6;
var211 = standard___standard__NativeString___to_s_with_length(var209, var210);
var208 = var211;
varonce207 = var208;
}
{
var212 = ((short int (*)(val* self, val* p0))(var206->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var206, var208) /* == on <var206:String>*/;
}
if (var212){
var213 = NULL;
if (var_val == NULL) {
var214 = 0; /* is null */
} else {
var214 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_val,var213) on <var_val:nullable Object(nullable String)> */
var_other184 = var213;
{
var217 = ((short int (*)(val* self, val* p0))(var_val->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_val, var_other184) /* == on <var_val:nullable String(String)>*/;
}
var218 = !var217;
var215 = var218;
goto RET_LABEL216;
RET_LABEL216:(void)0;
}
var214 = var215;
}
if (var214){
var_v = var_val;
} else {
var219 = NULL;
if (varonce220) {
var221 = varonce220;
} else {
var222 = "Error: --define: Method `";
var223 = 25;
var224 = standard___standard__NativeString___to_s_with_length(var222, var223);
var221 = var224;
varonce220 = var221;
}
if (varonce225) {
var226 = varonce225;
} else {
var227 = "` need a String.";
var228 = 16;
var229 = standard___standard__NativeString___to_s_with_length(var227, var228);
var226 = var229;
varonce225 = var226;
}
var230 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var230 = array_instance Array[Object] */
var231 = 3;
var232 = NEW_standard__NativeArray(var231, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var232)->values[0] = (val*) var221;
((struct instance_standard__NativeArray*)var232)->values[1] = (val*) var_prop;
((struct instance_standard__NativeArray*)var232)->values[2] = (val*) var226;
{
((void (*)(val* self, val* p0, long p1))(var230->class->vft[COLOR_standard__array__Array__with_native]))(var230, var232, var231) /* with_native on <var230:Array[Object]>*/;
}
}
{
var233 = ((val* (*)(val* self))(var230->class->vft[COLOR_standard__string__Object__to_s]))(var230) /* to_s on <var230:Array[Object]>*/;
}
{
nit___nit__ToolContext___error(self, var219, var233); /* Direct call toolcontext#ToolContext#error on <self:ToolContext>*/
}
goto BREAK_label;
}
} else {
var234 = NULL;
if (varonce235) {
var236 = varonce235;
} else {
var237 = "Error: --define: Method `";
var238 = 25;
var239 = standard___standard__NativeString___to_s_with_length(var237, var238);
var236 = var239;
varonce235 = var236;
}
if (varonce240) {
var241 = varonce240;
} else {
var242 = "` return an unmanaged type ";
var243 = 27;
var244 = standard___standard__NativeString___to_s_with_length(var242, var243);
var241 = var244;
varonce240 = var241;
}
if (varonce245) {
var246 = varonce245;
} else {
var247 = ".";
var248 = 1;
var249 = standard___standard__NativeString___to_s_with_length(var247, var248);
var246 = var249;
varonce245 = var246;
}
var250 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var250 = array_instance Array[Object] */
var251 = 5;
var252 = NEW_standard__NativeArray(var251, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var252)->values[0] = (val*) var236;
((struct instance_standard__NativeArray*)var252)->values[1] = (val*) var_prop;
((struct instance_standard__NativeArray*)var252)->values[2] = (val*) var241;
((struct instance_standard__NativeArray*)var252)->values[3] = (val*) var_ret;
((struct instance_standard__NativeArray*)var252)->values[4] = (val*) var246;
{
((void (*)(val* self, val* p0, long p1))(var250->class->vft[COLOR_standard__array__Array__with_native]))(var250, var252, var251) /* with_native on <var250:Array[Object]>*/;
}
}
{
var253 = ((val* (*)(val* self))(var250->class->vft[COLOR_standard__string__Object__to_s]))(var250) /* to_s on <var250:Array[Object]>*/;
}
{
nit___nit__ToolContext___error(self, var234, var253); /* Direct call toolcontext#ToolContext#error on <self:ToolContext>*/
}
goto BREAK_label;
}
}
}
}
var254 = NEW_nit__MMethodDef(&type_nit__MMethodDef);
{
((void (*)(val* self, val* p0))(var254->class->vft[COLOR_nit__model__MPropDef__mclassdef_61d]))(var254, var_mclassdef) /* mclassdef= on <var254:MMethodDef>*/;
}
{
((void (*)(val* self, val* p0))(var254->class->vft[COLOR_nit__model__MPropDef__mproperty_61d]))(var254, var_prop) /* mproperty= on <var254:MMethodDef>*/;
}
{
((void (*)(val* self, val* p0))(var254->class->vft[COLOR_nit__model__MPropDef__location_61d]))(var254, var_location) /* location= on <var254:MMethodDef>*/;
}
{
((void (*)(val* self))(var254->class->vft[COLOR_standard__kernel__Object__init]))(var254) /* init on <var254:MMethodDef>*/;
}
var_pd = var254;
{
{ /* Inline model#MProperty#intro (var_prop) on <var_prop:nullable MMethod(MMethod)> */
var257 = var_prop->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var_prop:nullable MMethod(MMethod)> */
if (unlikely(var257 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1773);
show_backtrace(1);
}
var255 = var257;
RET_LABEL256:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var255) on <var255:MPropDef(MMethodDef)> */
var260 = var255->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var255:MPropDef(MMethodDef)> */
var258 = var260;
RET_LABEL259:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature= (var_pd,var258) on <var_pd:MMethodDef> */
var_pd->attrs[COLOR_nit__model__MMethodDef___msignature].val = var258; /* _msignature on <var_pd:MMethodDef> */
RET_LABEL261:(void)0;
}
}
{
{ /* Inline model#MMethodDef#constant_value= (var_pd,var_v) on <var_pd:MMethodDef> */
var_pd->attrs[COLOR_nit__model__MMethodDef___constant_value].val = var_v; /* _constant_value on <var_pd:MMethodDef> */
RET_LABEL262:(void)0;
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_54); /* Direct call array#ArrayIterator#next on <var_54:ArrayIterator[String]>*/
}
} else {
goto BREAK_label263;
}
}
BREAK_label263: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_54) on <var_54:ArrayIterator[String]> */
RET_LABEL264:(void)0;
}
}
{
var265 = nit___nit__ToolContext___check_errors(self);
}
} else {
}
var = var_mainmodule;
goto RET_LABEL;
RET_LABEL:;
return var;
}
