#include "nit__mixin.sep.0.h"
/* method mixin#ToolContext#opt_mixins for (self: ToolContext): OptionArray */
val* nit__mixin___ToolContext___opt_mixins(val* self) {
val* var /* : OptionArray */;
val* var1 /* : OptionArray */;
var1 = self->attrs[COLOR_nit__mixin__ToolContext___opt_mixins].val; /* _opt_mixins on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_mixins");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mixin, 23);
fatal_exit(1);
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
fatal_exit(1);
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
val* var10 /* : NativeArray[Option] */;
{
((void(*)(val* self))(self->class->vft[COLOR_nit__mixin___ToolContext___standard__kernel__Object__init]))(self); /* init on <self:ToolContext>*/
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_nit__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 332);
fatal_exit(1);
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
fatal_exit(1);
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
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var9 = NEW_standard__Array(&type_standard__Array__opts__Option);
{ /* var9 = array_instance Array[Option] */
var10 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__opts__Option);
((struct instance_standard__NativeArray*)var10)->values[0] = (val*) var3;
((struct instance_standard__NativeArray*)var10)->values[1] = (val*) var6;
{
((void(*)(val* self, val* p0, long p1))(var9->class->vft[COLOR_standard__array__Array__with_native]))(var9, var10, 2l); /* with_native on <var9:Array[Option]>*/
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
val* var40 /* : String */;
val* var42 /* : String */;
static val* varonce;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : FlatString */;
val* var46 /* : String */;
val* var48 /* : nullable MClassType */;
val* var_recv /* var recv: nullable MClassType */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
val* var_other52 /* var other: nullable Object */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
val* var55 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var_ /* var : Array[String] */;
val* var56 /* : ArrayIterator[nullable Object] */;
val* var_57 /* var : ArrayIterator[String] */;
short int var58 /* : Bool */;
val* var59 /* : nullable Object */;
val* var_define /* var define: String */;
val* var60 /* : Array[Text] */;
val* var61 /* : Pattern */;
val* var_spl /* var spl: Array[String] */;
val* var62 /* : nullable Object */;
val* var_name /* var name: String */;
val* var_val /* var val: nullable Object */;
long var63 /* : Int */;
long var65 /* : Int */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var69 /* : Bool */;
val* var70 /* : nullable Object */;
val* var71 /* : MClass */;
val* var73 /* : MClass */;
val* var74 /* : nullable MMethod */;
val* var_prop /* var prop: nullable MMethod */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
short int var78 /* : Bool */;
short int var80 /* : Bool */;
val* var82 /* : NativeArray[String] */;
static val* varonce81;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : NativeString */;
val* var86 /* : FlatString */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : NativeString */;
val* var90 /* : FlatString */;
val* var91 /* : String */;
val* var92 /* : Message */;
val* var93 /* : MPropDef */;
val* var95 /* : MPropDef */;
val* var96 /* : nullable MSignature */;
val* var98 /* : nullable MSignature */;
val* var99 /* : nullable MType */;
val* var101 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
short int var102 /* : Bool */;
short int var103 /* : Bool */;
short int var105 /* : Bool */;
short int var107 /* : Bool */;
val* var109 /* : NativeArray[String] */;
static val* varonce108;
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : NativeString */;
val* var113 /* : FlatString */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : NativeString */;
val* var117 /* : FlatString */;
val* var118 /* : String */;
val* var119 /* : String */;
val* var120 /* : Message */;
val* var121 /* : String */;
static val* varonce122;
val* var123 /* : String */;
char* var124 /* : NativeString */;
val* var125 /* : FlatString */;
short int var126 /* : Bool */;
short int var127 /* : Bool */;
short int var128 /* : Bool */;
short int var129 /* : Bool */;
short int var_130 /* var : Bool */;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : NativeString */;
val* var134 /* : FlatString */;
short int var135 /* : Bool */;
val* var136 /* : nullable Object */;
val* var_v /* var v: nullable Object */;
static val* varonce137;
val* var138 /* : String */;
char* var139 /* : NativeString */;
val* var140 /* : FlatString */;
short int var141 /* : Bool */;
val* var142 /* : nullable Object */;
val* var144 /* : NativeArray[String] */;
static val* varonce143;
static val* varonce145;
val* var146 /* : String */;
char* var147 /* : NativeString */;
val* var148 /* : FlatString */;
static val* varonce149;
val* var150 /* : String */;
char* var151 /* : NativeString */;
val* var152 /* : FlatString */;
val* var153 /* : String */;
val* var154 /* : String */;
val* var155 /* : Message */;
val* var156 /* : String */;
static val* varonce157;
val* var158 /* : String */;
char* var159 /* : NativeString */;
val* var160 /* : FlatString */;
short int var161 /* : Bool */;
short int var162 /* : Bool */;
short int var163 /* : Bool */;
short int var164 /* : Bool */;
short int var166 /* : Bool */;
short int var167 /* : Bool */;
short int var_168 /* var : Bool */;
short int var169 /* : Bool */;
long var170 /* : Int */;
val* var171 /* : nullable Object */;
val* var173 /* : NativeArray[String] */;
static val* varonce172;
static val* varonce174;
val* var175 /* : String */;
char* var176 /* : NativeString */;
val* var177 /* : FlatString */;
static val* varonce178;
val* var179 /* : String */;
char* var180 /* : NativeString */;
val* var181 /* : FlatString */;
val* var182 /* : String */;
val* var183 /* : String */;
val* var184 /* : Message */;
val* var185 /* : String */;
static val* varonce186;
val* var187 /* : String */;
char* var188 /* : NativeString */;
val* var189 /* : FlatString */;
short int var190 /* : Bool */;
short int var191 /* : Bool */;
short int var192 /* : Bool */;
short int var194 /* : Bool */;
short int var195 /* : Bool */;
val* var197 /* : NativeArray[String] */;
static val* varonce196;
static val* varonce198;
val* var199 /* : String */;
char* var200 /* : NativeString */;
val* var201 /* : FlatString */;
static val* varonce202;
val* var203 /* : String */;
char* var204 /* : NativeString */;
val* var205 /* : FlatString */;
val* var206 /* : String */;
val* var207 /* : String */;
val* var208 /* : Message */;
val* var210 /* : NativeArray[String] */;
static val* varonce209;
static val* varonce211;
val* var212 /* : String */;
char* var213 /* : NativeString */;
val* var214 /* : FlatString */;
static val* varonce215;
val* var216 /* : String */;
char* var217 /* : NativeString */;
val* var218 /* : FlatString */;
static val* varonce219;
val* var220 /* : String */;
char* var221 /* : NativeString */;
val* var222 /* : FlatString */;
val* var223 /* : String */;
val* var224 /* : String */;
val* var225 /* : String */;
val* var226 /* : Message */;
val* var227 /* : MMethodDef */;
val* var_pd /* var pd: MMethodDef */;
val* var228 /* : MPropDef */;
val* var230 /* : MPropDef */;
val* var231 /* : nullable MSignature */;
val* var233 /* : nullable MSignature */;
short int var237 /* : Bool */;
var_mmodules = p0;
{
{ /* Inline mixin#ToolContext#opt_mixins (self) on <self:ToolContext> */
var3 = self->attrs[COLOR_nit__mixin__ToolContext___opt_mixins].val; /* _opt_mixins on <self:ToolContext> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_mixins");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mixin, 23);
fatal_exit(1);
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
fatal_exit(1);
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
var18 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__mixin___ToolContext___make_main_module]))(self, p0); /* make_main_module on <self:ToolContext>*/
}
var_mainmodule = var18;
{
{ /* Inline mixin#ToolContext#opt_defines (self) on <self:ToolContext> */
var21 = self->attrs[COLOR_nit__mixin__ToolContext___opt_defines].val; /* _opt_defines on <self:ToolContext> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_defines");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mixin, 25);
fatal_exit(1);
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
fatal_exit(1);
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
fatal_exit(1);
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
{
{ /* Inline mmodule#MModule#name (var_mainmodule) on <var_mainmodule:MModule> */
var42 = var_mainmodule->attrs[COLOR_nit__mmodule__MModule___name].val; /* _name on <var_mainmodule:MModule> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 87);
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
var45 = standard___standard__NativeString___to_s_with_length(var44, 2l);
var43 = var45;
varonce = var43;
}
{
var46 = ((val*(*)(val* self, val* p0))(var40->class->vft[COLOR_standard__string__String___43d]))(var40, var43); /* + on <var40:String>*/
}
{
((void(*)(val* self, val* p0))(var39->class->vft[COLOR_nit__mmodule__MModule__model_61d]))(var39, var_model); /* model= on <var39:MModule>*/
}
{
((void(*)(val* self, val* p0))(var39->class->vft[COLOR_nit__mmodule__MModule__mgroup_61d]))(var39, ((val*)NULL)); /* mgroup= on <var39:MModule>*/
}
{
((void(*)(val* self, val* p0))(var39->class->vft[COLOR_nit__mmodule__MModule__name_61d]))(var39, var46); /* name= on <var39:MModule>*/
}
{
((void(*)(val* self, val* p0))(var39->class->vft[COLOR_nit__mmodule__MModule__location_61d]))(var39, var_location); /* location= on <var39:MModule>*/
}
{
((void(*)(val* self))(var39->class->vft[COLOR_standard__kernel__Object__init]))(var39); /* init on <var39:MModule>*/
}
var_mainmodule = var39;
{
nit___nit__MModule___set_imported_mmodules(var_mainmodule, var_mmodules); /* Direct call mmodule#MModule#set_imported_mmodules on <var_mainmodule:MModule>*/
}
{
{ /* Inline mmodule#MModule#is_fictive= (var_mainmodule,1) on <var_mainmodule:MModule> */
var_mainmodule->attrs[COLOR_nit__mmodule__MModule___is_fictive].s = 1; /* _is_fictive on <var_mainmodule:MModule> */
RET_LABEL47:(void)0;
}
}
} else {
}
{
var48 = nit__model___MModule___sys_type(var_mainmodule);
}
var_recv = var48;
if (var_recv == NULL) {
var49 = 0; /* is null */
} else {
var49 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_recv,((val*)NULL)) on <var_recv:nullable MClassType> */
var_other52 = ((val*)NULL);
{
var53 = ((short int(*)(val* self, val* p0))(var_recv->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_recv, var_other52); /* == on <var_recv:nullable MClassType(MClassType)>*/
}
var54 = !var53;
var50 = var54;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
var49 = var50;
}
if (unlikely(!var49)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mixin, 56);
fatal_exit(1);
}
var55 = NEW_nit__MClassDef(&type_nit__MClassDef);
{
((void(*)(val* self, val* p0))(var55->class->vft[COLOR_nit__model__MClassDef__mmodule_61d]))(var55, var_mainmodule); /* mmodule= on <var55:MClassDef>*/
}
{
((void(*)(val* self, val* p0))(var55->class->vft[COLOR_nit__model__MClassDef__bound_mtype_61d]))(var55, var_recv); /* bound_mtype= on <var55:MClassDef>*/
}
{
((void(*)(val* self, val* p0))(var55->class->vft[COLOR_nit__model__MClassDef__location_61d]))(var55, var_location); /* location= on <var55:MClassDef>*/
}
{
((void(*)(val* self))(var55->class->vft[COLOR_standard__kernel__Object__init]))(var55); /* init on <var55:MClassDef>*/
}
var_mclassdef = var55;
{
nit___nit__MClassDef___add_in_hierarchy(var_mclassdef); /* Direct call model#MClassDef#add_in_hierarchy on <var_mclassdef:MClassDef>*/
}
var_ = var_defines;
{
var56 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_57 = var56;
for(;;) {
{
var58 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_57);
}
if (var58){
{
var59 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_57);
}
var_define = var59;
{
var61 = (val*)((long)('=')<<2|2);
var60 = standard__string_search___Text___split_once_on(var_define, var61);
}
var_spl = var60;
{
var62 = standard___standard__SequenceRead___Collection__first(var_spl);
}
var_name = var62;
var_val = ((val*)NULL);
{
{ /* Inline array#AbstractArrayRead#length (var_spl) on <var_spl:Array[String]> */
var65 = var_spl->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_spl:Array[String]> */
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var63,1l) on <var63:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var68 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var68)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var69 = var63 > 1l;
var66 = var69;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
if (var66){
{
var70 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_spl, 1l);
}
var_val = var70;
} else {
}
{
{ /* Inline model#MClassType#mclass (var_recv) on <var_recv:nullable MClassType(MClassType)> */
var73 = var_recv->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_recv:nullable MClassType(MClassType)> */
if (unlikely(var73 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var71 = var73;
RET_LABEL72:(void)0;
}
}
{
var74 = nit__model___MModule___try_get_primitive_method(var_mainmodule, var_name, var71);
}
var_prop = var74;
if (var_prop == NULL) {
var75 = 1; /* is null */
} else {
var75 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_prop,((val*)NULL)) on <var_prop:nullable MMethod> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_prop,var_other) on <var_prop:nullable MMethod(MMethod)> */
var80 = var_prop == var_other;
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
if (unlikely(varonce81==NULL)) {
var82 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce83!=NULL)) {
var84 = varonce83;
} else {
var85 = "Error: --define: no top-level function `";
var86 = standard___standard__NativeString___to_s_with_length(var85, 40l);
var84 = var86;
varonce83 = var84;
}
((struct instance_standard__NativeArray*)var82)->values[0]=var84;
if (likely(varonce87!=NULL)) {
var88 = varonce87;
} else {
var89 = "`.";
var90 = standard___standard__NativeString___to_s_with_length(var89, 2l);
var88 = var90;
varonce87 = var88;
}
((struct instance_standard__NativeArray*)var82)->values[2]=var88;
} else {
var82 = varonce81;
varonce81 = NULL;
}
((struct instance_standard__NativeArray*)var82)->values[1]=var_name;
{
var91 = ((val*(*)(val* self))(var82->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var82); /* native_to_s on <var82:NativeArray[String]>*/
}
varonce81 = var82;
{
var92 = nit___nit__ToolContext___error(self, ((val*)NULL), var91);
}
goto BREAK_label;
} else {
}
{
{ /* Inline model#MProperty#intro (var_prop) on <var_prop:nullable MMethod(MMethod)> */
var95 = var_prop->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var_prop:nullable MMethod(MMethod)> */
if (unlikely(var95 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1968);
fatal_exit(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var93) on <var93:MPropDef(MMethodDef)> */
var98 = var93->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var93:MPropDef(MMethodDef)> */
var96 = var98;
RET_LABEL97:(void)0;
}
}
if (var96 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mixin, 70);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#return_mtype (var96) on <var96:nullable MSignature> */
if (unlikely(var96 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1768);
fatal_exit(1);
}
var101 = var96->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var96:nullable MSignature> */
var99 = var101;
RET_LABEL100:(void)0;
}
}
var_ret = var99;
if (var_ret == NULL) {
var102 = 1; /* is null */
} else {
var102 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_ret,var_other) on <var_ret:nullable MType(MType)> */
var107 = var_ret == var_other;
var105 = var107;
goto RET_LABEL106;
RET_LABEL106:(void)0;
}
}
var103 = var105;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
var102 = var103;
}
if (var102){
if (unlikely(varonce108==NULL)) {
var109 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce110!=NULL)) {
var111 = varonce110;
} else {
var112 = "Error: --define: method `";
var113 = standard___standard__NativeString___to_s_with_length(var112, 25l);
var111 = var113;
varonce110 = var111;
}
((struct instance_standard__NativeArray*)var109)->values[0]=var111;
if (likely(varonce114!=NULL)) {
var115 = varonce114;
} else {
var116 = "` is not a function.";
var117 = standard___standard__NativeString___to_s_with_length(var116, 20l);
var115 = var117;
varonce114 = var115;
}
((struct instance_standard__NativeArray*)var109)->values[2]=var115;
} else {
var109 = varonce108;
varonce108 = NULL;
}
{
var118 = ((val*(*)(val* self))(var_prop->class->vft[COLOR_standard__string__Object__to_s]))(var_prop); /* to_s on <var_prop:nullable MMethod(MMethod)>*/
}
((struct instance_standard__NativeArray*)var109)->values[1]=var118;
{
var119 = ((val*(*)(val* self))(var109->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var109); /* native_to_s on <var109:NativeArray[String]>*/
}
varonce108 = var109;
{
var120 = nit___nit__ToolContext___error(self, ((val*)NULL), var119);
}
goto BREAK_label;
} else {
{
var121 = ((val*(*)(val* self))(var_ret->class->vft[COLOR_standard__string__Object__to_s]))(var_ret); /* to_s on <var_ret:nullable MType(MType)>*/
}
if (likely(varonce122!=NULL)) {
var123 = varonce122;
} else {
var124 = "Bool";
var125 = standard___standard__NativeString___to_s_with_length(var124, 4l);
var123 = var125;
varonce122 = var123;
}
{
var126 = ((short int(*)(val* self, val* p0))(var121->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var121, var123); /* == on <var121:String>*/
}
if (var126){
if (var_val == NULL) {
var128 = 1; /* is null */
} else {
var128 = 0; /* arg is null but recv is not */
}
if (0) {
var129 = ((short int(*)(val* self, val* p0))(var_val->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_val, ((val*)NULL)); /* == on <var_val:nullable Object(nullable String)>*/
var128 = var129;
}
var_130 = var128;
if (var128){
var127 = var_130;
} else {
if (likely(varonce131!=NULL)) {
var132 = varonce131;
} else {
var133 = "true";
var134 = standard___standard__NativeString___to_s_with_length(var133, 4l);
var132 = var134;
varonce131 = var132;
}
{
var135 = ((short int(*)(val* self, val* p0))(var_val->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_val, var132); /* == on <var_val:nullable Object(String)>*/
}
var127 = var135;
}
if (var127){
var136 = (val*)((long)(1)<<2|3);
var_v = var136;
} else {
if (likely(varonce137!=NULL)) {
var138 = varonce137;
} else {
var139 = "false";
var140 = standard___standard__NativeString___to_s_with_length(var139, 5l);
var138 = var140;
varonce137 = var138;
}
{
var141 = ((short int(*)(val* self, val* p0))(var_val->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_val, var138); /* == on <var_val:nullable Object(String)>*/
}
if (var141){
var142 = (val*)((long)(0)<<2|3);
var_v = var142;
} else {
if (unlikely(varonce143==NULL)) {
var144 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce145!=NULL)) {
var146 = varonce145;
} else {
var147 = "Error: --define: method `";
var148 = standard___standard__NativeString___to_s_with_length(var147, 25l);
var146 = var148;
varonce145 = var146;
}
((struct instance_standard__NativeArray*)var144)->values[0]=var146;
if (likely(varonce149!=NULL)) {
var150 = varonce149;
} else {
var151 = "` needs a Bool.";
var152 = standard___standard__NativeString___to_s_with_length(var151, 15l);
var150 = var152;
varonce149 = var150;
}
((struct instance_standard__NativeArray*)var144)->values[2]=var150;
} else {
var144 = varonce143;
varonce143 = NULL;
}
{
var153 = ((val*(*)(val* self))(var_prop->class->vft[COLOR_standard__string__Object__to_s]))(var_prop); /* to_s on <var_prop:nullable MMethod(MMethod)>*/
}
((struct instance_standard__NativeArray*)var144)->values[1]=var153;
{
var154 = ((val*(*)(val* self))(var144->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var144); /* native_to_s on <var144:NativeArray[String]>*/
}
varonce143 = var144;
{
var155 = nit___nit__ToolContext___error(self, ((val*)NULL), var154);
}
goto BREAK_label;
}
}
} else {
{
var156 = ((val*(*)(val* self))(var_ret->class->vft[COLOR_standard__string__Object__to_s]))(var_ret); /* to_s on <var_ret:nullable MType(MType)>*/
}
if (likely(varonce157!=NULL)) {
var158 = varonce157;
} else {
var159 = "Int";
var160 = standard___standard__NativeString___to_s_with_length(var159, 3l);
var158 = var160;
varonce157 = var158;
}
{
var161 = ((short int(*)(val* self, val* p0))(var156->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var156, var158); /* == on <var156:String>*/
}
if (var161){
if (var_val == NULL) {
var163 = 0; /* is null */
} else {
var163 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_val,((val*)NULL)) on <var_val:nullable Object(nullable String)> */
var_other52 = ((val*)NULL);
{
var166 = ((short int(*)(val* self, val* p0))(var_val->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_val, var_other52); /* == on <var_val:nullable String(String)>*/
}
var167 = !var166;
var164 = var167;
goto RET_LABEL165;
RET_LABEL165:(void)0;
}
var163 = var164;
}
var_168 = var163;
if (var163){
{
var169 = standard___standard__Text___is_numeric(var_val);
}
var162 = var169;
} else {
var162 = var_168;
}
if (var162){
{
var170 = standard___standard__Text___to_i(var_val);
}
var171 = (val*)(var170<<2|1);
var_v = var171;
} else {
if (unlikely(varonce172==NULL)) {
var173 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce174!=NULL)) {
var175 = varonce174;
} else {
var176 = "Error: --define: method `";
var177 = standard___standard__NativeString___to_s_with_length(var176, 25l);
var175 = var177;
varonce174 = var175;
}
((struct instance_standard__NativeArray*)var173)->values[0]=var175;
if (likely(varonce178!=NULL)) {
var179 = varonce178;
} else {
var180 = "` needs a Int.";
var181 = standard___standard__NativeString___to_s_with_length(var180, 14l);
var179 = var181;
varonce178 = var179;
}
((struct instance_standard__NativeArray*)var173)->values[2]=var179;
} else {
var173 = varonce172;
varonce172 = NULL;
}
{
var182 = ((val*(*)(val* self))(var_prop->class->vft[COLOR_standard__string__Object__to_s]))(var_prop); /* to_s on <var_prop:nullable MMethod(MMethod)>*/
}
((struct instance_standard__NativeArray*)var173)->values[1]=var182;
{
var183 = ((val*(*)(val* self))(var173->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var173); /* native_to_s on <var173:NativeArray[String]>*/
}
varonce172 = var173;
{
var184 = nit___nit__ToolContext___error(self, ((val*)NULL), var183);
}
goto BREAK_label;
}
} else {
{
var185 = ((val*(*)(val* self))(var_ret->class->vft[COLOR_standard__string__Object__to_s]))(var_ret); /* to_s on <var_ret:nullable MType(MType)>*/
}
if (likely(varonce186!=NULL)) {
var187 = varonce186;
} else {
var188 = "String";
var189 = standard___standard__NativeString___to_s_with_length(var188, 6l);
var187 = var189;
varonce186 = var187;
}
{
var190 = ((short int(*)(val* self, val* p0))(var185->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var185, var187); /* == on <var185:String>*/
}
if (var190){
if (var_val == NULL) {
var191 = 0; /* is null */
} else {
var191 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_val,((val*)NULL)) on <var_val:nullable Object(nullable String)> */
var_other52 = ((val*)NULL);
{
var194 = ((short int(*)(val* self, val* p0))(var_val->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_val, var_other52); /* == on <var_val:nullable String(String)>*/
}
var195 = !var194;
var192 = var195;
goto RET_LABEL193;
RET_LABEL193:(void)0;
}
var191 = var192;
}
if (var191){
var_v = var_val;
} else {
if (unlikely(varonce196==NULL)) {
var197 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce198!=NULL)) {
var199 = varonce198;
} else {
var200 = "Error: --define: method `";
var201 = standard___standard__NativeString___to_s_with_length(var200, 25l);
var199 = var201;
varonce198 = var199;
}
((struct instance_standard__NativeArray*)var197)->values[0]=var199;
if (likely(varonce202!=NULL)) {
var203 = varonce202;
} else {
var204 = "` needs a String.";
var205 = standard___standard__NativeString___to_s_with_length(var204, 17l);
var203 = var205;
varonce202 = var203;
}
((struct instance_standard__NativeArray*)var197)->values[2]=var203;
} else {
var197 = varonce196;
varonce196 = NULL;
}
{
var206 = ((val*(*)(val* self))(var_prop->class->vft[COLOR_standard__string__Object__to_s]))(var_prop); /* to_s on <var_prop:nullable MMethod(MMethod)>*/
}
((struct instance_standard__NativeArray*)var197)->values[1]=var206;
{
var207 = ((val*(*)(val* self))(var197->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var197); /* native_to_s on <var197:NativeArray[String]>*/
}
varonce196 = var197;
{
var208 = nit___nit__ToolContext___error(self, ((val*)NULL), var207);
}
goto BREAK_label;
}
} else {
if (unlikely(varonce209==NULL)) {
var210 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce211!=NULL)) {
var212 = varonce211;
} else {
var213 = "Error: --define: method `";
var214 = standard___standard__NativeString___to_s_with_length(var213, 25l);
var212 = var214;
varonce211 = var212;
}
((struct instance_standard__NativeArray*)var210)->values[0]=var212;
if (likely(varonce215!=NULL)) {
var216 = varonce215;
} else {
var217 = "` returns an unsupported type `";
var218 = standard___standard__NativeString___to_s_with_length(var217, 31l);
var216 = var218;
varonce215 = var216;
}
((struct instance_standard__NativeArray*)var210)->values[2]=var216;
if (likely(varonce219!=NULL)) {
var220 = varonce219;
} else {
var221 = "`.";
var222 = standard___standard__NativeString___to_s_with_length(var221, 2l);
var220 = var222;
varonce219 = var220;
}
((struct instance_standard__NativeArray*)var210)->values[4]=var220;
} else {
var210 = varonce209;
varonce209 = NULL;
}
{
var223 = ((val*(*)(val* self))(var_prop->class->vft[COLOR_standard__string__Object__to_s]))(var_prop); /* to_s on <var_prop:nullable MMethod(MMethod)>*/
}
((struct instance_standard__NativeArray*)var210)->values[1]=var223;
{
var224 = ((val*(*)(val* self))(var_ret->class->vft[COLOR_standard__string__Object__to_s]))(var_ret); /* to_s on <var_ret:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var210)->values[3]=var224;
{
var225 = ((val*(*)(val* self))(var210->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var210); /* native_to_s on <var210:NativeArray[String]>*/
}
varonce209 = var210;
{
var226 = nit___nit__ToolContext___error(self, ((val*)NULL), var225);
}
goto BREAK_label;
}
}
}
}
var227 = NEW_nit__MMethodDef(&type_nit__MMethodDef);
{
((void(*)(val* self, val* p0))(var227->class->vft[COLOR_nit__model__MPropDef__mclassdef_61d]))(var227, var_mclassdef); /* mclassdef= on <var227:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var227->class->vft[COLOR_nit__model__MPropDef__mproperty_61d]))(var227, var_prop); /* mproperty= on <var227:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var227->class->vft[COLOR_nit__model__MPropDef__location_61d]))(var227, var_location); /* location= on <var227:MMethodDef>*/
}
{
((void(*)(val* self))(var227->class->vft[COLOR_standard__kernel__Object__init]))(var227); /* init on <var227:MMethodDef>*/
}
var_pd = var227;
{
{ /* Inline model#MProperty#intro (var_prop) on <var_prop:nullable MMethod(MMethod)> */
var230 = var_prop->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var_prop:nullable MMethod(MMethod)> */
if (unlikely(var230 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1968);
fatal_exit(1);
}
var228 = var230;
RET_LABEL229:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var228) on <var228:MPropDef(MMethodDef)> */
var233 = var228->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var228:MPropDef(MMethodDef)> */
var231 = var233;
RET_LABEL232:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature= (var_pd,var231) on <var_pd:MMethodDef> */
var_pd->attrs[COLOR_nit__model__MMethodDef___msignature].val = var231; /* _msignature on <var_pd:MMethodDef> */
RET_LABEL234:(void)0;
}
}
{
{ /* Inline model#MMethodDef#constant_value= (var_pd,var_v) on <var_pd:MMethodDef> */
var_pd->attrs[COLOR_nit__model__MMethodDef___constant_value].val = var_v; /* _constant_value on <var_pd:MMethodDef> */
RET_LABEL235:(void)0;
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_57); /* Direct call array#ArrayIterator#next on <var_57:ArrayIterator[String]>*/
}
} else {
goto BREAK_label236;
}
}
BREAK_label236: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_57); /* Direct call array#ArrayIterator#finish on <var_57:ArrayIterator[String]>*/
}
{
var237 = nit___nit__ToolContext___check_errors(self);
}
} else {
}
var = var_mainmodule;
goto RET_LABEL;
RET_LABEL:;
return var;
}
