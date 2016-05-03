#include "nitc__mixin.sep.0.h"
/* method mixin#ToolContext#opt_mixins for (self: ToolContext): OptionArray */
val* nitc__mixin___ToolContext___opt_mixins(val* self) {
val* var /* : OptionArray */;
val* var1 /* : OptionArray */;
var1 = self->attrs[COLOR_nitc__mixin__ToolContext___opt_mixins].val; /* _opt_mixins on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_mixins");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mixin, 23);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mixin#ToolContext#opt_defines for (self: ToolContext): OptionArray */
val* nitc__mixin___ToolContext___opt_defines(val* self) {
val* var /* : OptionArray */;
val* var1 /* : OptionArray */;
var1 = self->attrs[COLOR_nitc__mixin__ToolContext___opt_defines].val; /* _opt_defines on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_defines");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mixin, 25);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mixin#ToolContext#init for (self: ToolContext) */
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
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_nitc__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 342);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline mixin#ToolContext#opt_mixins (self) on <self:ToolContext> */
var5 = self->attrs[COLOR_nitc__mixin__ToolContext___opt_mixins].val; /* _opt_mixins on <self:ToolContext> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_mixins");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mixin, 23);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline mixin#ToolContext#opt_defines (self) on <self:ToolContext> */
var8 = self->attrs[COLOR_nitc__mixin__ToolContext___opt_defines].val; /* _opt_defines on <self:ToolContext> */
if (unlikely(var8 == NULL)) {
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
var10 = NEW_core__NativeArray(2l, &type_core__NativeArray__opts__Option);
((struct instance_core__NativeArray*)var10)->values[0] = (val*) var3;
((struct instance_core__NativeArray*)var10)->values[1] = (val*) var6;
{
((void(*)(val* self, val* p0, long p1))(var9->class->vft[COLOR_core__array__Array__with_native]))(var9, var10, 2l); /* with_native on <var9:Array[Option]>*/
}
}
{
opts___opts__OptionContext___add_option(var, var9); /* Direct call opts#OptionContext#add_option on <var:OptionContext>*/
}
RET_LABEL:;
}
/* method mixin#ToolContext#make_main_module for (self: ToolContext, Array[MModule]): MModule */
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
char* var44 /* : NativeString */;
val* var45 /* : String */;
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
val* var56 /* : IndexedIterator[nullable Object] */;
val* var_57 /* var : IndexedIterator[String] */;
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
val* var86 /* : String */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : NativeString */;
val* var90 /* : String */;
val* var91 /* : String */;
val* var92 /* : Message */;
val* var94 /* : MPropDef */;
val* var96 /* : MPropDef */;
val* var97 /* : nullable MSignature */;
val* var99 /* : nullable MSignature */;
val* var100 /* : nullable MType */;
val* var102 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
short int var103 /* : Bool */;
short int var104 /* : Bool */;
short int var106 /* : Bool */;
short int var108 /* : Bool */;
val* var110 /* : NativeArray[String] */;
static val* varonce109;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : NativeString */;
val* var114 /* : String */;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : NativeString */;
val* var118 /* : String */;
val* var119 /* : String */;
val* var120 /* : String */;
val* var121 /* : Message */;
val* var122 /* : String */;
static val* varonce123;
val* var124 /* : String */;
char* var125 /* : NativeString */;
val* var126 /* : String */;
short int var127 /* : Bool */;
short int var128 /* : Bool */;
short int var129 /* : Bool */;
short int var130 /* : Bool */;
short int var_131 /* var : Bool */;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : NativeString */;
val* var135 /* : String */;
short int var136 /* : Bool */;
val* var137 /* : nullable Object */;
val* var_v /* var v: nullable Object */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : NativeString */;
val* var141 /* : String */;
short int var142 /* : Bool */;
val* var143 /* : nullable Object */;
val* var145 /* : NativeArray[String] */;
static val* varonce144;
static val* varonce146;
val* var147 /* : String */;
char* var148 /* : NativeString */;
val* var149 /* : String */;
static val* varonce150;
val* var151 /* : String */;
char* var152 /* : NativeString */;
val* var153 /* : String */;
val* var154 /* : String */;
val* var155 /* : String */;
val* var156 /* : Message */;
val* var157 /* : String */;
static val* varonce158;
val* var159 /* : String */;
char* var160 /* : NativeString */;
val* var161 /* : String */;
short int var162 /* : Bool */;
short int var163 /* : Bool */;
short int var164 /* : Bool */;
short int var165 /* : Bool */;
short int var167 /* : Bool */;
short int var168 /* : Bool */;
short int var_169 /* var : Bool */;
short int var170 /* : Bool */;
long var171 /* : Int */;
val* var172 /* : nullable Object */;
val* var174 /* : NativeArray[String] */;
static val* varonce173;
static val* varonce175;
val* var176 /* : String */;
char* var177 /* : NativeString */;
val* var178 /* : String */;
static val* varonce179;
val* var180 /* : String */;
char* var181 /* : NativeString */;
val* var182 /* : String */;
val* var183 /* : String */;
val* var184 /* : String */;
val* var185 /* : Message */;
val* var186 /* : String */;
static val* varonce187;
val* var188 /* : String */;
char* var189 /* : NativeString */;
val* var190 /* : String */;
short int var191 /* : Bool */;
short int var192 /* : Bool */;
short int var193 /* : Bool */;
short int var195 /* : Bool */;
short int var196 /* : Bool */;
val* var198 /* : NativeArray[String] */;
static val* varonce197;
static val* varonce199;
val* var200 /* : String */;
char* var201 /* : NativeString */;
val* var202 /* : String */;
static val* varonce203;
val* var204 /* : String */;
char* var205 /* : NativeString */;
val* var206 /* : String */;
val* var207 /* : String */;
val* var208 /* : String */;
val* var209 /* : Message */;
val* var211 /* : NativeArray[String] */;
static val* varonce210;
static val* varonce212;
val* var213 /* : String */;
char* var214 /* : NativeString */;
val* var215 /* : String */;
static val* varonce216;
val* var217 /* : String */;
char* var218 /* : NativeString */;
val* var219 /* : String */;
static val* varonce220;
val* var221 /* : String */;
char* var222 /* : NativeString */;
val* var223 /* : String */;
val* var224 /* : String */;
val* var225 /* : String */;
val* var226 /* : String */;
val* var227 /* : Message */;
val* var228 /* : MMethodDef */;
val* var_pd /* var pd: MMethodDef */;
val* var229 /* : MPropDef */;
val* var231 /* : MPropDef */;
val* var232 /* : nullable MSignature */;
val* var234 /* : nullable MSignature */;
short int var237 /* : Bool */;
var_mmodules = p0;
{
{ /* Inline mixin#ToolContext#opt_mixins (self) on <self:ToolContext> */
var3 = self->attrs[COLOR_nitc__mixin__ToolContext___opt_mixins].val; /* _opt_mixins on <self:ToolContext> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_mixins");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mixin, 23);
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
var7 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_mixins);
}
var8 = !var7;
if (var8){
{
var9 = nitc__modelbuilder_base___ToolContext___modelbuilder(self);
}
{
{ /* Inline mixin#ToolContext#opt_mixins (self) on <self:ToolContext> */
var12 = self->attrs[COLOR_nitc__mixin__ToolContext___opt_mixins].val; /* _opt_mixins on <self:ToolContext> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_mixins");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mixin, 23);
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
var16 = nitc__loader___ModelBuilder___parse(var9, var13);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var_mmodules, var16); /* Direct call array#Array#add_all on <var_mmodules:Array[MModule]>*/
}
{
var17 = nitc__modelbuilder_base___ToolContext___modelbuilder(self);
}
{
nitc__modelbuilder___ModelBuilder___run_phases(var17); /* Direct call modelbuilder#ModelBuilder#run_phases on <var17:ModelBuilder>*/
}
} else {
}
{
var18 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__mixin___ToolContext___make_main_module]))(self, p0); /* make_main_module on <self:ToolContext>*/
}
var_mainmodule = var18;
{
{ /* Inline mixin#ToolContext#opt_defines (self) on <self:ToolContext> */
var21 = self->attrs[COLOR_nitc__mixin__ToolContext___opt_defines].val; /* _opt_defines on <self:ToolContext> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_defines");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mixin, 25);
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
var25 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_defines);
}
var26 = !var25;
if (var26){
{
{ /* Inline mmodule#MModule#location (var_mainmodule) on <var_mainmodule:MModule> */
var29 = var_mainmodule->attrs[COLOR_nitc__mmodule__MModule___location].val; /* _location on <var_mainmodule:MModule> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 98);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_location = var27;
{
{ /* Inline mmodule#MModule#model (var_mainmodule) on <var_mainmodule:MModule> */
var32 = var_mainmodule->attrs[COLOR_nitc__mmodule__MModule___model].val; /* _model on <var_mainmodule:MModule> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 78);
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
var39 = NEW_nitc__MModule(&type_nitc__MModule);
{
{ /* Inline mmodule#MModule#name (var_mainmodule) on <var_mainmodule:MModule> */
var42 = var_mainmodule->attrs[COLOR_nitc__mmodule__MModule___name].val; /* _name on <var_mainmodule:MModule> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 95);
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
var45 = core__flat___NativeString___to_s_full(var44, 2l, 2l);
var43 = var45;
varonce = var43;
}
{
var46 = ((val*(*)(val* self, val* p0))(var40->class->vft[COLOR_core__abstract_text__String___43d]))(var40, var43); /* + on <var40:String>*/
}
{
((void(*)(val* self, val* p0))(var39->class->vft[COLOR_nitc__mmodule__MModule__model_61d]))(var39, var_model); /* model= on <var39:MModule>*/
}
{
((void(*)(val* self, val* p0))(var39->class->vft[COLOR_nitc__mmodule__MModule__mgroup_61d]))(var39, ((val*)NULL)); /* mgroup= on <var39:MModule>*/
}
{
((void(*)(val* self, val* p0))(var39->class->vft[COLOR_nitc__mmodule__MModule__name_61d]))(var39, var46); /* name= on <var39:MModule>*/
}
{
((void(*)(val* self, val* p0))(var39->class->vft[COLOR_nitc__mmodule__MModule__location_61d]))(var39, var_location); /* location= on <var39:MModule>*/
}
{
((void(*)(val* self))(var39->class->vft[COLOR_core__kernel__Object__init]))(var39); /* init on <var39:MModule>*/
}
var_mainmodule = var39;
{
nitc___nitc__MModule___set_imported_mmodules(var_mainmodule, var_mmodules); /* Direct call mmodule#MModule#set_imported_mmodules on <var_mainmodule:MModule>*/
}
{
{ /* Inline model_base#MEntity#is_fictive= (var_mainmodule,1) on <var_mainmodule:MModule> */
var_mainmodule->attrs[COLOR_nitc__model_base__MEntity___is_fictive].s = 1; /* _is_fictive on <var_mainmodule:MModule> */
RET_LABEL47:(void)0;
}
}
} else {
}
{
var48 = nitc__model___MModule___sys_type(var_mainmodule);
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
var53 = ((short int(*)(val* self, val* p0))(var_recv->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_recv, var_other52); /* == on <var_recv:nullable MClassType(MClassType)>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mixin, 56);
fatal_exit(1);
}
var55 = NEW_nitc__MClassDef(&type_nitc__MClassDef);
{
((void(*)(val* self, val* p0))(var55->class->vft[COLOR_nitc__model__MClassDef__mmodule_61d]))(var55, var_mainmodule); /* mmodule= on <var55:MClassDef>*/
}
{
((void(*)(val* self, val* p0))(var55->class->vft[COLOR_nitc__model__MClassDef__bound_mtype_61d]))(var55, var_recv); /* bound_mtype= on <var55:MClassDef>*/
}
{
((void(*)(val* self, val* p0))(var55->class->vft[COLOR_nitc__model__MClassDef__location_61d]))(var55, var_location); /* location= on <var55:MClassDef>*/
}
{
((void(*)(val* self))(var55->class->vft[COLOR_core__kernel__Object__init]))(var55); /* init on <var55:MClassDef>*/
}
var_mclassdef = var55;
{
nitc___nitc__MClassDef___add_in_hierarchy(var_mclassdef); /* Direct call model#MClassDef#add_in_hierarchy on <var_mclassdef:MClassDef>*/
}
var_ = var_defines;
{
var56 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_57 = var56;
for(;;) {
{
var58 = ((short int(*)(val* self))((((long)var_57&3)?class_info[((long)var_57&3)]:var_57->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_57); /* is_ok on <var_57:IndexedIterator[String]>*/
}
if (var58){
} else {
goto BREAK_label;
}
{
var59 = ((val*(*)(val* self))((((long)var_57&3)?class_info[((long)var_57&3)]:var_57->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_57); /* item on <var_57:IndexedIterator[String]>*/
}
var_define = var59;
{
var61 = (val*)((long)('=')<<2|2);
var60 = core__string_search___Text___split_once_on(var_define, var61);
}
var_spl = var60;
{
var62 = core___core__SequenceRead___Collection__first(var_spl);
}
var_name = var62;
var_val = ((val*)NULL);
{
{ /* Inline array#AbstractArrayRead#length (var_spl) on <var_spl:Array[String]> */
var65 = var_spl->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_spl:Array[String]> */
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
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
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
var70 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_spl, 1l);
}
var_val = var70;
} else {
}
{
{ /* Inline model#MClassType#mclass (var_recv) on <var_recv:nullable MClassType(MClassType)> */
var73 = var_recv->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_recv:nullable MClassType(MClassType)> */
if (unlikely(var73 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1163);
fatal_exit(1);
}
var71 = var73;
RET_LABEL72:(void)0;
}
}
{
var74 = nitc__model___MModule___try_get_primitive_method(var_mainmodule, var_name, var71);
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
var82 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce83!=NULL)) {
var84 = varonce83;
} else {
var85 = "Error: --define: no top-level function `";
var86 = core__flat___NativeString___to_s_full(var85, 40l, 40l);
var84 = var86;
varonce83 = var84;
}
((struct instance_core__NativeArray*)var82)->values[0]=var84;
if (likely(varonce87!=NULL)) {
var88 = varonce87;
} else {
var89 = "`.";
var90 = core__flat___NativeString___to_s_full(var89, 2l, 2l);
var88 = var90;
varonce87 = var88;
}
((struct instance_core__NativeArray*)var82)->values[2]=var88;
} else {
var82 = varonce81;
varonce81 = NULL;
}
((struct instance_core__NativeArray*)var82)->values[1]=var_name;
{
var91 = ((val*(*)(val* self))(var82->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var82); /* native_to_s on <var82:NativeArray[String]>*/
}
varonce81 = var82;
{
var92 = nitc___nitc__ToolContext___error(self, ((val*)NULL), var91);
}
goto BREAK_label93;
} else {
}
{
{ /* Inline model#MProperty#intro (var_prop) on <var_prop:nullable MMethod(MMethod)> */
var96 = var_prop->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var_prop:nullable MMethod(MMethod)> */
if (unlikely(var96 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1986);
fatal_exit(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var94) on <var94:MPropDef(MMethodDef)> */
var99 = var94->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var94:MPropDef(MMethodDef)> */
var97 = var99;
RET_LABEL98:(void)0;
}
}
if (var97 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mixin, 70);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#return_mtype (var97) on <var97:nullable MSignature> */
if (unlikely(var97 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1795);
fatal_exit(1);
}
var102 = var97->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var97:nullable MSignature> */
var100 = var102;
RET_LABEL101:(void)0;
}
}
var_ret = var100;
if (var_ret == NULL) {
var103 = 1; /* is null */
} else {
var103 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_ret,var_other) on <var_ret:nullable MType(MType)> */
var108 = var_ret == var_other;
var106 = var108;
goto RET_LABEL107;
RET_LABEL107:(void)0;
}
}
var104 = var106;
goto RET_LABEL105;
RET_LABEL105:(void)0;
}
var103 = var104;
}
if (var103){
if (unlikely(varonce109==NULL)) {
var110 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce111!=NULL)) {
var112 = varonce111;
} else {
var113 = "Error: --define: method `";
var114 = core__flat___NativeString___to_s_full(var113, 25l, 25l);
var112 = var114;
varonce111 = var112;
}
((struct instance_core__NativeArray*)var110)->values[0]=var112;
if (likely(varonce115!=NULL)) {
var116 = varonce115;
} else {
var117 = "` is not a function.";
var118 = core__flat___NativeString___to_s_full(var117, 20l, 20l);
var116 = var118;
varonce115 = var116;
}
((struct instance_core__NativeArray*)var110)->values[2]=var116;
} else {
var110 = varonce109;
varonce109 = NULL;
}
{
var119 = ((val*(*)(val* self))(var_prop->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_prop); /* to_s on <var_prop:nullable MMethod(MMethod)>*/
}
((struct instance_core__NativeArray*)var110)->values[1]=var119;
{
var120 = ((val*(*)(val* self))(var110->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var110); /* native_to_s on <var110:NativeArray[String]>*/
}
varonce109 = var110;
{
var121 = nitc___nitc__ToolContext___error(self, ((val*)NULL), var120);
}
goto BREAK_label93;
} else {
{
var122 = ((val*(*)(val* self))(var_ret->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_ret); /* to_s on <var_ret:nullable MType(MType)>*/
}
if (likely(varonce123!=NULL)) {
var124 = varonce123;
} else {
var125 = "Bool";
var126 = core__flat___NativeString___to_s_full(var125, 4l, 4l);
var124 = var126;
varonce123 = var124;
}
{
var127 = ((short int(*)(val* self, val* p0))(var122->class->vft[COLOR_core__kernel__Object___61d_61d]))(var122, var124); /* == on <var122:String>*/
}
if (var127){
if (var_val == NULL) {
var129 = 1; /* is null */
} else {
var129 = 0; /* arg is null but recv is not */
}
if (0) {
var130 = ((short int(*)(val* self, val* p0))(var_val->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_val, ((val*)NULL)); /* == on <var_val:nullable Object(nullable String)>*/
var129 = var130;
}
var_131 = var129;
if (var129){
var128 = var_131;
} else {
if (likely(varonce132!=NULL)) {
var133 = varonce132;
} else {
var134 = "true";
var135 = core__flat___NativeString___to_s_full(var134, 4l, 4l);
var133 = var135;
varonce132 = var133;
}
{
var136 = ((short int(*)(val* self, val* p0))(var_val->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_val, var133); /* == on <var_val:nullable Object(String)>*/
}
var128 = var136;
}
if (var128){
var137 = (val*)((long)(1)<<2|3);
var_v = var137;
} else {
if (likely(varonce138!=NULL)) {
var139 = varonce138;
} else {
var140 = "false";
var141 = core__flat___NativeString___to_s_full(var140, 5l, 5l);
var139 = var141;
varonce138 = var139;
}
{
var142 = ((short int(*)(val* self, val* p0))(var_val->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_val, var139); /* == on <var_val:nullable Object(String)>*/
}
if (var142){
var143 = (val*)((long)(0)<<2|3);
var_v = var143;
} else {
if (unlikely(varonce144==NULL)) {
var145 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce146!=NULL)) {
var147 = varonce146;
} else {
var148 = "Error: --define: method `";
var149 = core__flat___NativeString___to_s_full(var148, 25l, 25l);
var147 = var149;
varonce146 = var147;
}
((struct instance_core__NativeArray*)var145)->values[0]=var147;
if (likely(varonce150!=NULL)) {
var151 = varonce150;
} else {
var152 = "` needs a Bool.";
var153 = core__flat___NativeString___to_s_full(var152, 15l, 15l);
var151 = var153;
varonce150 = var151;
}
((struct instance_core__NativeArray*)var145)->values[2]=var151;
} else {
var145 = varonce144;
varonce144 = NULL;
}
{
var154 = ((val*(*)(val* self))(var_prop->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_prop); /* to_s on <var_prop:nullable MMethod(MMethod)>*/
}
((struct instance_core__NativeArray*)var145)->values[1]=var154;
{
var155 = ((val*(*)(val* self))(var145->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var145); /* native_to_s on <var145:NativeArray[String]>*/
}
varonce144 = var145;
{
var156 = nitc___nitc__ToolContext___error(self, ((val*)NULL), var155);
}
goto BREAK_label93;
}
}
} else {
{
var157 = ((val*(*)(val* self))(var_ret->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_ret); /* to_s on <var_ret:nullable MType(MType)>*/
}
if (likely(varonce158!=NULL)) {
var159 = varonce158;
} else {
var160 = "Int";
var161 = core__flat___NativeString___to_s_full(var160, 3l, 3l);
var159 = var161;
varonce158 = var159;
}
{
var162 = ((short int(*)(val* self, val* p0))(var157->class->vft[COLOR_core__kernel__Object___61d_61d]))(var157, var159); /* == on <var157:String>*/
}
if (var162){
if (var_val == NULL) {
var164 = 0; /* is null */
} else {
var164 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_val,((val*)NULL)) on <var_val:nullable Object(nullable String)> */
var_other52 = ((val*)NULL);
{
var167 = ((short int(*)(val* self, val* p0))(var_val->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_val, var_other52); /* == on <var_val:nullable String(String)>*/
}
var168 = !var167;
var165 = var168;
goto RET_LABEL166;
RET_LABEL166:(void)0;
}
var164 = var165;
}
var_169 = var164;
if (var164){
{
var170 = core___core__Text___is_numeric(var_val);
}
var163 = var170;
} else {
var163 = var_169;
}
if (var163){
{
var171 = core__fixed_ints___Text___to_i(var_val);
}
var172 = (val*)(var171<<2|1);
var_v = var172;
} else {
if (unlikely(varonce173==NULL)) {
var174 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce175!=NULL)) {
var176 = varonce175;
} else {
var177 = "Error: --define: method `";
var178 = core__flat___NativeString___to_s_full(var177, 25l, 25l);
var176 = var178;
varonce175 = var176;
}
((struct instance_core__NativeArray*)var174)->values[0]=var176;
if (likely(varonce179!=NULL)) {
var180 = varonce179;
} else {
var181 = "` needs a Int.";
var182 = core__flat___NativeString___to_s_full(var181, 14l, 14l);
var180 = var182;
varonce179 = var180;
}
((struct instance_core__NativeArray*)var174)->values[2]=var180;
} else {
var174 = varonce173;
varonce173 = NULL;
}
{
var183 = ((val*(*)(val* self))(var_prop->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_prop); /* to_s on <var_prop:nullable MMethod(MMethod)>*/
}
((struct instance_core__NativeArray*)var174)->values[1]=var183;
{
var184 = ((val*(*)(val* self))(var174->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var174); /* native_to_s on <var174:NativeArray[String]>*/
}
varonce173 = var174;
{
var185 = nitc___nitc__ToolContext___error(self, ((val*)NULL), var184);
}
goto BREAK_label93;
}
} else {
{
var186 = ((val*(*)(val* self))(var_ret->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_ret); /* to_s on <var_ret:nullable MType(MType)>*/
}
if (likely(varonce187!=NULL)) {
var188 = varonce187;
} else {
var189 = "String";
var190 = core__flat___NativeString___to_s_full(var189, 6l, 6l);
var188 = var190;
varonce187 = var188;
}
{
var191 = ((short int(*)(val* self, val* p0))(var186->class->vft[COLOR_core__kernel__Object___61d_61d]))(var186, var188); /* == on <var186:String>*/
}
if (var191){
if (var_val == NULL) {
var192 = 0; /* is null */
} else {
var192 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_val,((val*)NULL)) on <var_val:nullable Object(nullable String)> */
var_other52 = ((val*)NULL);
{
var195 = ((short int(*)(val* self, val* p0))(var_val->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_val, var_other52); /* == on <var_val:nullable String(String)>*/
}
var196 = !var195;
var193 = var196;
goto RET_LABEL194;
RET_LABEL194:(void)0;
}
var192 = var193;
}
if (var192){
var_v = var_val;
} else {
if (unlikely(varonce197==NULL)) {
var198 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce199!=NULL)) {
var200 = varonce199;
} else {
var201 = "Error: --define: method `";
var202 = core__flat___NativeString___to_s_full(var201, 25l, 25l);
var200 = var202;
varonce199 = var200;
}
((struct instance_core__NativeArray*)var198)->values[0]=var200;
if (likely(varonce203!=NULL)) {
var204 = varonce203;
} else {
var205 = "` needs a String.";
var206 = core__flat___NativeString___to_s_full(var205, 17l, 17l);
var204 = var206;
varonce203 = var204;
}
((struct instance_core__NativeArray*)var198)->values[2]=var204;
} else {
var198 = varonce197;
varonce197 = NULL;
}
{
var207 = ((val*(*)(val* self))(var_prop->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_prop); /* to_s on <var_prop:nullable MMethod(MMethod)>*/
}
((struct instance_core__NativeArray*)var198)->values[1]=var207;
{
var208 = ((val*(*)(val* self))(var198->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var198); /* native_to_s on <var198:NativeArray[String]>*/
}
varonce197 = var198;
{
var209 = nitc___nitc__ToolContext___error(self, ((val*)NULL), var208);
}
goto BREAK_label93;
}
} else {
if (unlikely(varonce210==NULL)) {
var211 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce212!=NULL)) {
var213 = varonce212;
} else {
var214 = "Error: --define: method `";
var215 = core__flat___NativeString___to_s_full(var214, 25l, 25l);
var213 = var215;
varonce212 = var213;
}
((struct instance_core__NativeArray*)var211)->values[0]=var213;
if (likely(varonce216!=NULL)) {
var217 = varonce216;
} else {
var218 = "` returns an unsupported type `";
var219 = core__flat___NativeString___to_s_full(var218, 31l, 31l);
var217 = var219;
varonce216 = var217;
}
((struct instance_core__NativeArray*)var211)->values[2]=var217;
if (likely(varonce220!=NULL)) {
var221 = varonce220;
} else {
var222 = "`.";
var223 = core__flat___NativeString___to_s_full(var222, 2l, 2l);
var221 = var223;
varonce220 = var221;
}
((struct instance_core__NativeArray*)var211)->values[4]=var221;
} else {
var211 = varonce210;
varonce210 = NULL;
}
{
var224 = ((val*(*)(val* self))(var_prop->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_prop); /* to_s on <var_prop:nullable MMethod(MMethod)>*/
}
((struct instance_core__NativeArray*)var211)->values[1]=var224;
{
var225 = ((val*(*)(val* self))(var_ret->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_ret); /* to_s on <var_ret:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var211)->values[3]=var225;
{
var226 = ((val*(*)(val* self))(var211->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var211); /* native_to_s on <var211:NativeArray[String]>*/
}
varonce210 = var211;
{
var227 = nitc___nitc__ToolContext___error(self, ((val*)NULL), var226);
}
goto BREAK_label93;
}
}
}
}
var228 = NEW_nitc__MMethodDef(&type_nitc__MMethodDef);
{
((void(*)(val* self, val* p0))(var228->class->vft[COLOR_nitc__model__MPropDef__mclassdef_61d]))(var228, var_mclassdef); /* mclassdef= on <var228:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var228->class->vft[COLOR_nitc__model__MPropDef__mproperty_61d]))(var228, var_prop); /* mproperty= on <var228:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var228->class->vft[COLOR_nitc__model__MPropDef__location_61d]))(var228, var_location); /* location= on <var228:MMethodDef>*/
}
{
((void(*)(val* self))(var228->class->vft[COLOR_core__kernel__Object__init]))(var228); /* init on <var228:MMethodDef>*/
}
var_pd = var228;
{
{ /* Inline model#MProperty#intro (var_prop) on <var_prop:nullable MMethod(MMethod)> */
var231 = var_prop->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var_prop:nullable MMethod(MMethod)> */
if (unlikely(var231 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1986);
fatal_exit(1);
}
var229 = var231;
RET_LABEL230:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var229) on <var229:MPropDef(MMethodDef)> */
var234 = var229->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var229:MPropDef(MMethodDef)> */
var232 = var234;
RET_LABEL233:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature= (var_pd,var232) on <var_pd:MMethodDef> */
var_pd->attrs[COLOR_nitc__model__MMethodDef___msignature].val = var232; /* _msignature on <var_pd:MMethodDef> */
RET_LABEL235:(void)0;
}
}
{
{ /* Inline model#MMethodDef#constant_value= (var_pd,var_v) on <var_pd:MMethodDef> */
var_pd->attrs[COLOR_nitc__model__MMethodDef___constant_value].val = var_v; /* _constant_value on <var_pd:MMethodDef> */
RET_LABEL236:(void)0;
}
}
BREAK_label93: (void)0;
{
((void(*)(val* self))((((long)var_57&3)?class_info[((long)var_57&3)]:var_57->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_57); /* next on <var_57:IndexedIterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_57&3)?class_info[((long)var_57&3)]:var_57->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_57); /* finish on <var_57:IndexedIterator[String]>*/
}
{
var237 = nitc___nitc__ToolContext___check_errors(self);
}
} else {
}
var = var_mainmodule;
goto RET_LABEL;
RET_LABEL:;
return var;
}
