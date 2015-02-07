#include "nit__loader.sep.0.h"
/* method loader#ToolContext#opt_path for (self: ToolContext): OptionArray */
val* nit__loader___ToolContext___opt_path(val* self) {
val* var /* : OptionArray */;
val* var1 /* : OptionArray */;
var1 = self->attrs[COLOR_nit__loader__ToolContext___opt_path].val; /* _opt_path on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 23);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader#ToolContext#opt_only_metamodel for (self: ToolContext): OptionBool */
val* nit__loader___ToolContext___opt_only_metamodel(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__loader__ToolContext___opt_only_metamodel].val; /* _opt_only_metamodel on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_only_metamodel");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 26);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader#ToolContext#opt_only_parse for (self: ToolContext): OptionBool */
val* nit__loader___ToolContext___opt_only_parse(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__loader__ToolContext___opt_only_parse].val; /* _opt_only_parse on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_only_parse");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 29);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader#ToolContext#init for (self: ToolContext) */
void nit__loader___ToolContext___standard__kernel__Object__init(val* self) {
val* var /* : OptionContext */;
val* var2 /* : OptionContext */;
val* var3 /* : OptionArray */;
val* var5 /* : OptionArray */;
val* var6 /* : OptionBool */;
val* var8 /* : OptionBool */;
val* var9 /* : OptionBool */;
val* var11 /* : OptionBool */;
val* var12 /* : Array[Option] */;
long var13 /* : Int */;
val* var14 /* : NativeArray[Option] */;
{
((void (*)(val* self))(self->class->vft[COLOR_nit__loader___ToolContext___standard__kernel__Object__init]))(self) /* init on <self:ToolContext>*/;
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
{ /* Inline loader#ToolContext#opt_path (self) on <self:ToolContext> */
var5 = self->attrs[COLOR_nit__loader__ToolContext___opt_path].val; /* _opt_path on <self:ToolContext> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 23);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline loader#ToolContext#opt_only_parse (self) on <self:ToolContext> */
var8 = self->attrs[COLOR_nit__loader__ToolContext___opt_only_parse].val; /* _opt_only_parse on <self:ToolContext> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_only_parse");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 29);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline loader#ToolContext#opt_only_metamodel (self) on <self:ToolContext> */
var11 = self->attrs[COLOR_nit__loader__ToolContext___opt_only_metamodel].val; /* _opt_only_metamodel on <self:ToolContext> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_only_metamodel");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 26);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var12 = NEW_standard__Array(&type_standard__Array__opts__Option);
{ /* var12 = array_instance Array[Option] */
var13 = 3;
var14 = NEW_standard__NativeArray(var13, &type_standard__NativeArray__opts__Option);
((struct instance_standard__NativeArray*)var14)->values[0] = (val*) var3;
((struct instance_standard__NativeArray*)var14)->values[1] = (val*) var6;
((struct instance_standard__NativeArray*)var14)->values[2] = (val*) var9;
{
((void (*)(val* self, val* p0, long p1))(var12->class->vft[COLOR_standard__array__Array__with_native]))(var12, var14, var13) /* with_native on <var12:Array[Option]>*/;
}
}
{
opts___opts__OptionContext___add_option(var, var12); /* Direct call opts#OptionContext#add_option on <var:OptionContext>*/
}
RET_LABEL:;
}
/* method loader#ModelBuilder#init for (self: ModelBuilder) */
void nit__loader___ModelBuilder___standard__kernel__Object__init(val* self) {
val* var /* : Array[String] */;
val* var2 /* : Array[String] */;
val* var3 /* : ToolContext */;
val* var5 /* : ToolContext */;
val* var6 /* : OptionArray */;
val* var8 /* : OptionArray */;
val* var9 /* : nullable Object */;
val* var11 /* : nullable Object */;
static val* varonce;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : FlatString */;
val* var16 /* : String */;
val* var_path_env /* var path_env: String */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : Array[String] */;
val* var21 /* : Array[String] */;
char var22 /* : Char */;
val* var23 /* : Array[String] */;
val* var24 /* : Pattern */;
val* var25 /* : ToolContext */;
val* var27 /* : ToolContext */;
val* var28 /* : String */;
val* var30 /* : String */;
val* var_nit_dir /* var nit_dir: String */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : FlatString */;
val* var36 /* : Array[Object] */;
long var37 /* : Int */;
val* var38 /* : NativeArray[Object] */;
val* var39 /* : String */;
val* var_libname /* var libname: String */;
short int var40 /* : Bool */;
val* var41 /* : Array[String] */;
val* var43 /* : Array[String] */;
{
((void (*)(val* self))(self->class->vft[COLOR_nit__loader___ModelBuilder___standard__kernel__Object__init]))(self) /* init on <self:ModelBuilder>*/;
}
{
{ /* Inline loader#ModelBuilder#paths (self) on <self:ModelBuilder> */
var2 = self->attrs[COLOR_nit__loader__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 146);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var5 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline loader#ToolContext#opt_path (var3) on <var3:ToolContext> */
var8 = var3->attrs[COLOR_nit__loader__ToolContext___opt_path].val; /* _opt_path on <var3:ToolContext> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 23);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline opts#Option#value (var6) on <var6:OptionArray> */
var11 = var6->attrs[COLOR_opts__Option___value].val; /* _value on <var6:OptionArray> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
standard___standard__Sequence___append(var, var9); /* Direct call abstract_collection#Sequence#append on <var:Array[String]>*/
}
if (varonce) {
var12 = varonce;
} else {
var13 = "NIT_PATH";
var14 = 8;
var15 = standard___standard__NativeString___to_s_with_length(var13, var14);
var12 = var15;
varonce = var12;
}
{
var16 = standard__environ___String___environ(var12);
}
var_path_env = var16;
{
var17 = standard___standard__Text___is_empty(var_path_env);
}
var18 = !var17;
if (var18){
{
{ /* Inline loader#ModelBuilder#paths (self) on <self:ModelBuilder> */
var21 = self->attrs[COLOR_nit__loader__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 146);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
var22 = ':';
{
var24 = BOX_standard__Char(var22); /* autobox from Char to Pattern */
var23 = standard__string_search___Text___split_with(var_path_env, var24);
}
{
standard___standard__Sequence___append(var19, var23); /* Direct call abstract_collection#Sequence#append on <var19:Array[String]>*/
}
} else {
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var27 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#nit_dir (var25) on <var25:ToolContext> */
var30 = var25->attrs[COLOR_nit__toolcontext__ToolContext___nit_dir].val; /* _nit_dir on <var25:ToolContext> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _nit_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 452);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
var_nit_dir = var28;
if (varonce31) {
var32 = varonce31;
} else {
var33 = "/lib";
var34 = 4;
var35 = standard___standard__NativeString___to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
var36 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var36 = array_instance Array[Object] */
var37 = 2;
var38 = NEW_standard__NativeArray(var37, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var38)->values[0] = (val*) var_nit_dir;
((struct instance_standard__NativeArray*)var38)->values[1] = (val*) var32;
{
((void (*)(val* self, val* p0, long p1))(var36->class->vft[COLOR_standard__array__Array__with_native]))(var36, var38, var37) /* with_native on <var36:Array[Object]>*/;
}
}
{
var39 = ((val* (*)(val* self))(var36->class->vft[COLOR_standard__string__Object__to_s]))(var36) /* to_s on <var36:Array[Object]>*/;
}
var_libname = var39;
{
var40 = standard__file___String___file_exists(var_libname);
}
if (var40){
{
{ /* Inline loader#ModelBuilder#paths (self) on <self:ModelBuilder> */
var43 = self->attrs[COLOR_nit__loader__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 146);
show_backtrace(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var41, var_libname); /* Direct call array#Array#add on <var41:Array[String]>*/
}
} else {
}
RET_LABEL:;
}
/* method loader#ModelBuilder#parse for (self: ModelBuilder, Sequence[String]): Array[MModule] */
val* nit__loader___ModelBuilder___parse(val* self, val* p0) {
val* var /* : Array[MModule] */;
val* var_modules /* var modules: Sequence[String] */;
long var1 /* : Int */;
long var3 /* : Int for extern */;
long var_time0 /* var time0: Int */;
val* var4 /* : ToolContext */;
val* var6 /* : ToolContext */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : FlatString */;
long var11 /* : Int */;
val* var12 /* : ArraySet[MModule] */;
val* var_mmodules /* var mmodules: ArraySet[MModule] */;
val* var_ /* var : Sequence[String] */;
val* var13 /* : Iterator[nullable Object] */;
val* var_14 /* var : IndexedIterator[String] */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
val* var_a /* var a: String */;
val* var17 /* : nullable AModule */;
val* var_nmodule /* var nmodule: nullable AModule */;
val* var18 /* : null */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : nullable MModule */;
val* var27 /* : nullable MModule */;
long var30 /* : Int */;
long var32 /* : Int for extern */;
long var_time1 /* var time1: Int */;
val* var33 /* : ToolContext */;
val* var35 /* : ToolContext */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
long var39 /* : Int */;
val* var40 /* : FlatString */;
long var41 /* : Int */;
short int var43 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var44 /* : Int */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
long var48 /* : Int */;
val* var49 /* : FlatString */;
val* var50 /* : Array[Object] */;
long var51 /* : Int */;
val* var52 /* : NativeArray[Object] */;
val* var53 /* : Object */;
val* var54 /* : String */;
long var55 /* : Int */;
val* var56 /* : ToolContext */;
val* var58 /* : ToolContext */;
short int var59 /* : Bool */;
val* var60 /* : ToolContext */;
val* var62 /* : ToolContext */;
val* var63 /* : OptionBool */;
val* var65 /* : OptionBool */;
val* var66 /* : nullable Object */;
val* var68 /* : nullable Object */;
short int var69 /* : Bool */;
val* var70 /* : ToolContext */;
val* var72 /* : ToolContext */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
long var76 /* : Int */;
val* var77 /* : FlatString */;
long var78 /* : Int */;
long var79 /* : Int */;
val* var81 /* : Array[nullable Object] */;
var_modules = p0;
{
{ /* Inline time#Object#get_time (self) on <self:ModelBuilder> */
var3 = kernel_Any_Any_get_time_0(self);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_time0 = var1;
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var6 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (varonce) {
var7 = varonce;
} else {
var8 = "*** PARSE ***";
var9 = 13;
var10 = standard___standard__NativeString___to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
var11 = 1;
{
nit___nit__ToolContext___info(var4, var7, var11); /* Direct call toolcontext#ToolContext#info on <var4:ToolContext>*/
}
var12 = NEW_standard__ArraySet(&type_standard__ArraySet__nit__MModule);
{
standard___standard__ArraySet___standard__kernel__Object__init(var12); /* Direct call array#ArraySet#init on <var12:ArraySet[MModule]>*/
}
var_mmodules = var12;
var_ = var_modules;
{
var13 = ((val* (*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Sequence[String]>*/;
}
var_14 = var13;
for(;;) {
{
var15 = ((short int (*)(val* self))(var_14->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_14) /* is_ok on <var_14:IndexedIterator[String]>*/;
}
if (var15){
{
var16 = ((val* (*)(val* self))(var_14->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_14) /* item on <var_14:IndexedIterator[String]>*/;
}
var_a = var16;
{
var17 = nit__loader___ModelBuilder___load_module(self, var_a);
}
var_nmodule = var17;
var18 = NULL;
if (var_nmodule == NULL) {
var19 = 1; /* is null */
} else {
var19 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nmodule,var18) on <var_nmodule:nullable AModule> */
var_other = var18;
{
{ /* Inline kernel#Object#is_same_instance (var_nmodule,var_other) on <var_nmodule:nullable AModule(AModule)> */
var24 = var_nmodule == var_other;
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var19 = var20;
}
if (var19){
goto BREAK_label;
} else {
}
{
nit__loader___ModelBuilder___build_module_importation(self, var_nmodule); /* Direct call loader#ModelBuilder#build_module_importation on <self:ModelBuilder>*/
}
{
{ /* Inline loader#AModule#mmodule (var_nmodule) on <var_nmodule:nullable AModule(AModule)> */
var27 = var_nmodule->attrs[COLOR_nit__loader__AModule___mmodule].val; /* _mmodule on <var_nmodule:nullable AModule(AModule)> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 76);
show_backtrace(1);
}
{
standard___standard__ArraySet___standard__abstract_collection__SimpleCollection__add(var_mmodules, var25); /* Direct call array#ArraySet#add on <var_mmodules:ArraySet[MModule]>*/
}
BREAK_label: (void)0;
{
((void (*)(val* self))(var_14->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_14) /* next on <var_14:IndexedIterator[String]>*/;
}
} else {
goto BREAK_label28;
}
}
BREAK_label28: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_14) on <var_14:IndexedIterator[String]> */
RET_LABEL29:(void)0;
}
}
{
{ /* Inline time#Object#get_time (self) on <self:ModelBuilder> */
var32 = kernel_Any_Any_get_time_0(self);
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var_time1 = var30;
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var35 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
if (varonce36) {
var37 = varonce36;
} else {
var38 = "*** END PARSE: ";
var39 = 15;
var40 = standard___standard__NativeString___to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
{
{ /* Inline kernel#Int#- (var_time1,var_time0) on <var_time1:Int> */
/* Covariant cast for argument 0 (i) <var_time0:Int> isa OTHER */
/* <var_time0:Int> isa OTHER */
var43 = 1; /* easy <var_time0:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var44 = var_time1 - var_time0;
var41 = var44;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
if (varonce45) {
var46 = varonce45;
} else {
var47 = " ***";
var48 = 4;
var49 = standard___standard__NativeString___to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
var50 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var50 = array_instance Array[Object] */
var51 = 3;
var52 = NEW_standard__NativeArray(var51, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var52)->values[0] = (val*) var37;
var53 = BOX_standard__Int(var41); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var52)->values[1] = (val*) var53;
((struct instance_standard__NativeArray*)var52)->values[2] = (val*) var46;
{
((void (*)(val* self, val* p0, long p1))(var50->class->vft[COLOR_standard__array__Array__with_native]))(var50, var52, var51) /* with_native on <var50:Array[Object]>*/;
}
}
{
var54 = ((val* (*)(val* self))(var50->class->vft[COLOR_standard__string__Object__to_s]))(var50) /* to_s on <var50:Array[Object]>*/;
}
var55 = 2;
{
nit___nit__ToolContext___info(var33, var54, var55); /* Direct call toolcontext#ToolContext#info on <var33:ToolContext>*/
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var58 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
var59 = nit___nit__ToolContext___check_errors(var56);
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var62 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
{ /* Inline loader#ToolContext#opt_only_parse (var60) on <var60:ToolContext> */
var65 = var60->attrs[COLOR_nit__loader__ToolContext___opt_only_parse].val; /* _opt_only_parse on <var60:ToolContext> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_only_parse");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 29);
show_backtrace(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
{ /* Inline opts#Option#value (var63) on <var63:OptionBool> */
var68 = var63->attrs[COLOR_opts__Option___value].val; /* _value on <var63:OptionBool> */
var66 = var68;
RET_LABEL67:(void)0;
}
}
var69 = ((struct instance_standard__Bool*)var66)->value; /* autounbox from nullable Object to Bool */;
if (var69){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var72 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var72 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
if (varonce73) {
var74 = varonce73;
} else {
var75 = "*** ONLY PARSE...";
var76 = 17;
var77 = standard___standard__NativeString___to_s_with_length(var75, var76);
var74 = var77;
varonce73 = var74;
}
var78 = 1;
{
nit___nit__ToolContext___info(var70, var74, var78); /* Direct call toolcontext#ToolContext#info on <var70:ToolContext>*/
}
var79 = 0;
{
{ /* Inline kernel#Object#exit (self,var79) on <self:ModelBuilder> */
exit(var79);
RET_LABEL80:(void)0;
}
}
} else {
}
{
var81 = standard__array___Collection___to_a(var_mmodules);
}
var = var81;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#paths for (self: ModelBuilder): Array[String] */
val* nit__loader___ModelBuilder___paths(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_nit__loader__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 146);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#search_mmodule_by_name for (self: ModelBuilder, nullable ANode, nullable MGroup, String): nullable ModulePath */
val* nit__loader___ModelBuilder___search_mmodule_by_name(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable ModulePath */;
val* var_anode /* var anode: nullable ANode */;
val* var_mgroup /* var mgroup: nullable MGroup */;
val* var_name /* var name: String */;
val* var_c /* var c: nullable MGroup */;
val* var1 /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : nullable String */;
val* var9 /* : nullable String */;
val* var_dirname /* var dirname: nullable String */;
val* var10 /* : null */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
static val* varonce;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : FlatString */;
short int var17 /* : Bool */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : FlatString */;
val* var23 /* : String */;
val* var24 /* : String */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
long var28 /* : Int */;
val* var29 /* : FlatString */;
val* var30 /* : String */;
val* var_try_file /* var try_file: String */;
short int var31 /* : Bool */;
val* var32 /* : String */;
val* var33 /* : nullable ModulePath */;
val* var_res /* var res: nullable ModulePath */;
val* var34 /* : null */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : FlatString */;
val* var45 /* : String */;
val* var46 /* : String */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
long var50 /* : Int */;
val* var51 /* : FlatString */;
val* var52 /* : String */;
val* var53 /* : String */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
long var57 /* : Int */;
val* var58 /* : FlatString */;
val* var59 /* : String */;
short int var60 /* : Bool */;
val* var61 /* : String */;
val* var62 /* : nullable ModulePath */;
val* var_res63 /* var res: nullable ModulePath */;
val* var64 /* : null */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
val* var70 /* : nullable MGroup */;
val* var72 /* : nullable MGroup */;
val* var73 /* : Array[String] */;
val* var75 /* : Array[String] */;
val* var_lookpaths /* var lookpaths: Array[String] */;
val* var76 /* : null */;
short int var77 /* : Bool */;
short int var78 /* : Bool */;
short int var80 /* : Bool */;
short int var81 /* : Bool */;
val* var82 /* : MProject */;
val* var84 /* : MProject */;
val* var85 /* : nullable MGroup */;
val* var87 /* : nullable MGroup */;
val* var88 /* : nullable String */;
val* var90 /* : nullable String */;
val* var_dirname91 /* var dirname: nullable String */;
val* var92 /* : null */;
short int var93 /* : Bool */;
short int var94 /* : Bool */;
short int var96 /* : Bool */;
short int var97 /* : Bool */;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : NativeString */;
long var101 /* : Int */;
val* var102 /* : FlatString */;
val* var103 /* : String */;
val* var104 /* : String */;
short int var105 /* : Bool */;
short int var106 /* : Bool */;
short int var107 /* : Bool */;
short int var_ /* var : Bool */;
short int var108 /* : Bool */;
val* var109 /* : Array[nullable Object] */;
val* var110 /* : Location */;
val* var111 /* : nullable ModulePath */;
val* var_candidate /* var candidate: nullable ModulePath */;
val* var112 /* : null */;
short int var113 /* : Bool */;
short int var114 /* : Bool */;
val* var_other116 /* var other: nullable Object */;
short int var117 /* : Bool */;
short int var119 /* : Bool */;
val* var120 /* : null */;
short int var121 /* : Bool */;
short int var122 /* : Bool */;
short int var124 /* : Bool */;
short int var125 /* : Bool */;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : NativeString */;
long var129 /* : Int */;
val* var130 /* : FlatString */;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : NativeString */;
long var134 /* : Int */;
val* var135 /* : FlatString */;
val* var136 /* : String */;
val* var138 /* : String */;
static val* varonce139;
val* var140 /* : String */;
char* var141 /* : NativeString */;
long var142 /* : Int */;
val* var143 /* : FlatString */;
static val* varonce144;
val* var145 /* : String */;
char* var146 /* : NativeString */;
long var147 /* : Int */;
val* var148 /* : FlatString */;
val* var149 /* : String */;
val* var150 /* : Array[Object] */;
long var151 /* : Int */;
val* var152 /* : NativeArray[Object] */;
val* var153 /* : String */;
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
static val* varonce164;
val* var165 /* : String */;
char* var166 /* : NativeString */;
long var167 /* : Int */;
val* var168 /* : FlatString */;
val* var169 /* : String */;
val* var170 /* : Array[Object] */;
long var171 /* : Int */;
val* var172 /* : NativeArray[Object] */;
val* var173 /* : String */;
val* var174 /* : null */;
var_anode = p0;
var_mgroup = p1;
var_name = p2;
var_c = var_mgroup;
for(;;) {
var1 = NULL;
if (var_c == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_c,var1) on <var_c:nullable MGroup> */
var_other = var1;
{
var5 = ((short int (*)(val* self, val* p0))(var_c->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_c, var_other) /* == on <var_c:nullable MGroup(MGroup)>*/;
}
var6 = !var5;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
{
{ /* Inline mproject#MGroup#filepath (var_c) on <var_c:nullable MGroup(MGroup)> */
var9 = var_c->attrs[COLOR_nit__mproject__MGroup___filepath].val; /* _filepath on <var_c:nullable MGroup(MGroup)> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_dirname = var7;
var10 = NULL;
if (var_dirname == NULL) {
var11 = 1; /* is null */
} else {
var11 = 0; /* arg is null but recv is not */
}
if (0) {
var12 = ((short int (*)(val* self, val* p0))(var_dirname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_dirname, var10) /* == on <var_dirname:nullable String>*/;
var11 = var12;
}
if (var11){
goto BREAK_label;
} else {
}
if (varonce) {
var13 = varonce;
} else {
var14 = ".nit";
var15 = 4;
var16 = standard___standard__NativeString___to_s_with_length(var14, var15);
var13 = var16;
varonce = var13;
}
{
var17 = standard___standard__Text___has_suffix(var_dirname, var13);
}
if (var17){
goto BREAK_label;
} else {
}
if (varonce18) {
var19 = varonce18;
} else {
var20 = "/";
var21 = 1;
var22 = standard___standard__NativeString___to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
{
var23 = ((val* (*)(val* self, val* p0))(var_dirname->class->vft[COLOR_standard__string__String___43d]))(var_dirname, var19) /* + on <var_dirname:nullable String(String)>*/;
}
{
var24 = ((val* (*)(val* self, val* p0))(var23->class->vft[COLOR_standard__string__String___43d]))(var23, var_name) /* + on <var23:String>*/;
}
if (varonce25) {
var26 = varonce25;
} else {
var27 = ".nit";
var28 = 4;
var29 = standard___standard__NativeString___to_s_with_length(var27, var28);
var26 = var29;
varonce25 = var26;
}
{
var30 = ((val* (*)(val* self, val* p0))(var24->class->vft[COLOR_standard__string__String___43d]))(var24, var26) /* + on <var24:String>*/;
}
var_try_file = var30;
{
var31 = standard__file___String___file_exists(var_try_file);
}
if (var31){
{
var32 = standard__file___String___simplify_path(var_try_file);
}
{
var33 = nit__loader___ModelBuilder___identify_file(self, var32);
}
var_res = var33;
var34 = NULL;
if (var_res == NULL) {
var35 = 0; /* is null */
} else {
var35 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var34) on <var_res:nullable ModulePath> */
var_other = var34;
{
var38 = ((short int (*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable ModulePath(ModulePath)>*/;
}
var39 = !var38;
var36 = var39;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
var35 = var36;
}
if (unlikely(!var35)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 169);
show_backtrace(1);
}
var = var_res;
goto RET_LABEL;
} else {
}
if (varonce40) {
var41 = varonce40;
} else {
var42 = "/";
var43 = 1;
var44 = standard___standard__NativeString___to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
{
var45 = ((val* (*)(val* self, val* p0))(var_dirname->class->vft[COLOR_standard__string__String___43d]))(var_dirname, var41) /* + on <var_dirname:nullable String(String)>*/;
}
{
var46 = ((val* (*)(val* self, val* p0))(var45->class->vft[COLOR_standard__string__String___43d]))(var45, var_name) /* + on <var45:String>*/;
}
if (varonce47) {
var48 = varonce47;
} else {
var49 = "/";
var50 = 1;
var51 = standard___standard__NativeString___to_s_with_length(var49, var50);
var48 = var51;
varonce47 = var48;
}
{
var52 = ((val* (*)(val* self, val* p0))(var46->class->vft[COLOR_standard__string__String___43d]))(var46, var48) /* + on <var46:String>*/;
}
{
var53 = ((val* (*)(val* self, val* p0))(var52->class->vft[COLOR_standard__string__String___43d]))(var52, var_name) /* + on <var52:String>*/;
}
if (varonce54) {
var55 = varonce54;
} else {
var56 = ".nit";
var57 = 4;
var58 = standard___standard__NativeString___to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
{
var59 = ((val* (*)(val* self, val* p0))(var53->class->vft[COLOR_standard__string__String___43d]))(var53, var55) /* + on <var53:String>*/;
}
var_try_file = var59;
{
var60 = standard__file___String___file_exists(var_try_file);
}
if (var60){
{
var61 = standard__file___String___simplify_path(var_try_file);
}
{
var62 = nit__loader___ModelBuilder___identify_file(self, var61);
}
var_res63 = var62;
var64 = NULL;
if (var_res63 == NULL) {
var65 = 0; /* is null */
} else {
var65 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res63,var64) on <var_res63:nullable ModulePath> */
var_other = var64;
{
var68 = ((short int (*)(val* self, val* p0))(var_res63->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res63, var_other) /* == on <var_res63:nullable ModulePath(ModulePath)>*/;
}
var69 = !var68;
var66 = var69;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
var65 = var66;
}
if (unlikely(!var65)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 177);
show_backtrace(1);
}
var = var_res63;
goto RET_LABEL;
} else {
}
{
{ /* Inline mproject#MGroup#parent (var_c) on <var_c:nullable MGroup(MGroup)> */
var72 = var_c->attrs[COLOR_nit__mproject__MGroup___parent].val; /* _parent on <var_c:nullable MGroup(MGroup)> */
var70 = var72;
RET_LABEL71:(void)0;
}
}
var_c = var70;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline loader#ModelBuilder#paths (self) on <self:ModelBuilder> */
var75 = self->attrs[COLOR_nit__loader__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 146);
show_backtrace(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
var_lookpaths = var73;
var76 = NULL;
if (var_mgroup == NULL) {
var77 = 0; /* is null */
} else {
var77 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mgroup,var76) on <var_mgroup:nullable MGroup> */
var_other = var76;
{
var80 = ((short int (*)(val* self, val* p0))(var_mgroup->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mgroup, var_other) /* == on <var_mgroup:nullable MGroup(MGroup)>*/;
}
var81 = !var80;
var78 = var81;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
var77 = var78;
}
if (var77){
{
{ /* Inline mproject#MGroup#mproject (var_mgroup) on <var_mgroup:nullable MGroup(MGroup)> */
var84 = var_mgroup->attrs[COLOR_nit__mproject__MGroup___mproject].val; /* _mproject on <var_mgroup:nullable MGroup(MGroup)> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproject");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 69);
show_backtrace(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
{ /* Inline mproject#MProject#root (var82) on <var82:MProject> */
var87 = var82->attrs[COLOR_nit__mproject__MProject___root].val; /* _root on <var82:MProject> */
var85 = var87;
RET_LABEL86:(void)0;
}
}
if (var85 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 190);
show_backtrace(1);
} else {
{ /* Inline mproject#MGroup#filepath (var85) on <var85:nullable MGroup> */
if (unlikely(var85 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 93);
show_backtrace(1);
}
var90 = var85->attrs[COLOR_nit__mproject__MGroup___filepath].val; /* _filepath on <var85:nullable MGroup> */
var88 = var90;
RET_LABEL89:(void)0;
}
}
var_dirname91 = var88;
var92 = NULL;
if (var_dirname91 == NULL) {
var93 = 0; /* is null */
} else {
var93 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_dirname91,var92) on <var_dirname91:nullable String> */
var_other = var92;
{
var96 = ((short int (*)(val* self, val* p0))(var_dirname91->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_dirname91, var_other) /* == on <var_dirname91:nullable String(String)>*/;
}
var97 = !var96;
var94 = var97;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
var93 = var94;
}
if (var93){
if (varonce98) {
var99 = varonce98;
} else {
var100 = "..";
var101 = 2;
var102 = standard___standard__NativeString___to_s_with_length(var100, var101);
var99 = var102;
varonce98 = var99;
}
{
var103 = standard__file___String___join_path(var_dirname91, var99);
}
{
var104 = standard__file___String___simplify_path(var103);
}
var_dirname91 = var104;
{
var106 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__has(var_lookpaths, var_dirname91);
}
var107 = !var106;
var_ = var107;
if (var107){
{
var108 = standard__file___String___file_exists(var_dirname91);
}
var105 = var108;
} else {
var105 = var_;
}
if (var105){
{
var109 = standard__array___Collection___to_a(var_lookpaths);
}
var_lookpaths = var109;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_lookpaths, var_dirname91); /* Direct call array#Array#add on <var_lookpaths:Array[String]>*/
}
} else {
}
} else {
}
} else {
}
if (var_anode == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 200);
show_backtrace(1);
} else {
var110 = ((val* (*)(val* self))(var_anode->class->vft[COLOR_nit__parser_nodes__ANode__hot_location]))(var_anode) /* hot_location on <var_anode:nullable ANode>*/;
}
{
var111 = nit__loader___ModelBuilder___search_module_in_paths(self, var110, var_name, var_lookpaths);
}
var_candidate = var111;
var112 = NULL;
if (var_candidate == NULL) {
var113 = 1; /* is null */
} else {
var113 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_candidate,var112) on <var_candidate:nullable ModulePath> */
var_other116 = var112;
{
{ /* Inline kernel#Object#is_same_instance (var_candidate,var_other116) on <var_candidate:nullable ModulePath(ModulePath)> */
var119 = var_candidate == var_other116;
var117 = var119;
goto RET_LABEL118;
RET_LABEL118:(void)0;
}
}
var114 = var117;
goto RET_LABEL115;
RET_LABEL115:(void)0;
}
var113 = var114;
}
if (var113){
var120 = NULL;
if (var_mgroup == NULL) {
var121 = 0; /* is null */
} else {
var121 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mgroup,var120) on <var_mgroup:nullable MGroup> */
var_other = var120;
{
var124 = ((short int (*)(val* self, val* p0))(var_mgroup->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mgroup, var_other) /* == on <var_mgroup:nullable MGroup(MGroup)>*/;
}
var125 = !var124;
var122 = var125;
goto RET_LABEL123;
RET_LABEL123:(void)0;
}
var121 = var122;
}
if (var121){
if (varonce126) {
var127 = varonce126;
} else {
var128 = "Error: cannot find module ";
var129 = 26;
var130 = standard___standard__NativeString___to_s_with_length(var128, var129);
var127 = var130;
varonce126 = var127;
}
if (varonce131) {
var132 = varonce131;
} else {
var133 = " from ";
var134 = 6;
var135 = standard___standard__NativeString___to_s_with_length(var133, var134);
var132 = var135;
varonce131 = var132;
}
{
{ /* Inline mproject#MGroup#name (var_mgroup) on <var_mgroup:nullable MGroup(MGroup)> */
var138 = var_mgroup->attrs[COLOR_nit__mproject__MGroup___name].val; /* _name on <var_mgroup:nullable MGroup(MGroup)> */
if (unlikely(var138 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 65);
show_backtrace(1);
}
var136 = var138;
RET_LABEL137:(void)0;
}
}
if (varonce139) {
var140 = varonce139;
} else {
var141 = ". tried ";
var142 = 8;
var143 = standard___standard__NativeString___to_s_with_length(var141, var142);
var140 = var143;
varonce139 = var140;
}
if (varonce144) {
var145 = varonce144;
} else {
var146 = ", ";
var147 = 2;
var148 = standard___standard__NativeString___to_s_with_length(var146, var147);
var145 = var148;
varonce144 = var145;
}
{
var149 = standard__string___Collection___join(var_lookpaths, var145);
}
var150 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var150 = array_instance Array[Object] */
var151 = 6;
var152 = NEW_standard__NativeArray(var151, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var152)->values[0] = (val*) var127;
((struct instance_standard__NativeArray*)var152)->values[1] = (val*) var_name;
((struct instance_standard__NativeArray*)var152)->values[2] = (val*) var132;
((struct instance_standard__NativeArray*)var152)->values[3] = (val*) var136;
((struct instance_standard__NativeArray*)var152)->values[4] = (val*) var140;
((struct instance_standard__NativeArray*)var152)->values[5] = (val*) var149;
{
((void (*)(val* self, val* p0, long p1))(var150->class->vft[COLOR_standard__array__Array__with_native]))(var150, var152, var151) /* with_native on <var150:Array[Object]>*/;
}
}
{
var153 = ((val* (*)(val* self))(var150->class->vft[COLOR_standard__string__Object__to_s]))(var150) /* to_s on <var150:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(self, var_anode, var153); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
if (varonce154) {
var155 = varonce154;
} else {
var156 = "Error: cannot find module ";
var157 = 26;
var158 = standard___standard__NativeString___to_s_with_length(var156, var157);
var155 = var158;
varonce154 = var155;
}
if (varonce159) {
var160 = varonce159;
} else {
var161 = ". tried ";
var162 = 8;
var163 = standard___standard__NativeString___to_s_with_length(var161, var162);
var160 = var163;
varonce159 = var160;
}
if (varonce164) {
var165 = varonce164;
} else {
var166 = ", ";
var167 = 2;
var168 = standard___standard__NativeString___to_s_with_length(var166, var167);
var165 = var168;
varonce164 = var165;
}
{
var169 = standard__string___Collection___join(var_lookpaths, var165);
}
var170 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var170 = array_instance Array[Object] */
var171 = 4;
var172 = NEW_standard__NativeArray(var171, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var172)->values[0] = (val*) var155;
((struct instance_standard__NativeArray*)var172)->values[1] = (val*) var_name;
((struct instance_standard__NativeArray*)var172)->values[2] = (val*) var160;
((struct instance_standard__NativeArray*)var172)->values[3] = (val*) var169;
{
((void (*)(val* self, val* p0, long p1))(var170->class->vft[COLOR_standard__array__Array__with_native]))(var170, var172, var171) /* with_native on <var170:Array[Object]>*/;
}
}
{
var173 = ((val* (*)(val* self))(var170->class->vft[COLOR_standard__string__Object__to_s]))(var170) /* to_s on <var170:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(self, var_anode, var173); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
}
var174 = NULL;
var = var174;
goto RET_LABEL;
} else {
}
var = var_candidate;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#get_mmodule_by_name for (self: ModelBuilder, nullable ANode, nullable MGroup, String): nullable MModule */
val* nit__loader___ModelBuilder___get_mmodule_by_name(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MModule */;
val* var_anode /* var anode: nullable ANode */;
val* var_mgroup /* var mgroup: nullable MGroup */;
val* var_name /* var name: String */;
val* var1 /* : nullable ModulePath */;
val* var_path /* var path: nullable ModulePath */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : null */;
val* var10 /* : String */;
val* var12 /* : String */;
val* var13 /* : nullable AModule */;
val* var_res /* var res: nullable AModule */;
val* var14 /* : null */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : null */;
val* var22 /* : nullable MModule */;
val* var24 /* : nullable MModule */;
var_anode = p0;
var_mgroup = p1;
var_name = p2;
{
var1 = nit__loader___ModelBuilder___search_mmodule_by_name(self, var_anode, var_mgroup, var_name);
}
var_path = var1;
var2 = NULL;
if (var_path == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_path,var2) on <var_path:nullable ModulePath> */
var_other = var2;
{
{ /* Inline kernel#Object#is_same_instance (var_path,var_other) on <var_path:nullable ModulePath(ModulePath)> */
var8 = var_path == var_other;
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
var9 = NULL;
var = var9;
goto RET_LABEL;
} else {
}
{
{ /* Inline loader#ModulePath#filepath (var_path) on <var_path:nullable ModulePath(ModulePath)> */
var12 = var_path->attrs[COLOR_nit__loader__ModulePath___filepath].val; /* _filepath on <var_path:nullable ModulePath(ModulePath)> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filepath");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 662);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = nit__loader___ModelBuilder___load_module(self, var10);
}
var_res = var13;
var14 = NULL;
if (var_res == NULL) {
var15 = 1; /* is null */
} else {
var15 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res,var14) on <var_res:nullable AModule> */
var_other = var14;
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other) on <var_res:nullable AModule(AModule)> */
var20 = var_res == var_other;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var15 = var16;
}
if (var15){
var21 = NULL;
var = var21;
goto RET_LABEL;
} else {
}
{
nit__loader___ModelBuilder___build_module_importation(self, var_res); /* Direct call loader#ModelBuilder#build_module_importation on <self:ModelBuilder>*/
}
{
{ /* Inline loader#AModule#mmodule (var_res) on <var_res:nullable AModule(AModule)> */
var24 = var_res->attrs[COLOR_nit__loader__AModule___mmodule].val; /* _mmodule on <var_res:nullable AModule(AModule)> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 225);
show_backtrace(1);
}
var = var22;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#search_module_in_paths for (self: ModelBuilder, nullable Location, String, Collection[String]): nullable ModulePath */
val* nit__loader___ModelBuilder___search_module_in_paths(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable ModulePath */;
val* var_location /* var location: nullable Location */;
val* var_name /* var name: String */;
val* var_lookpaths /* var lookpaths: Collection[String] */;
val* var1 /* : null */;
val* var_candidate /* var candidate: nullable String */;
val* var_ /* var : Collection[String] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : Iterator[String] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_dirname /* var dirname: String */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : FlatString */;
val* var10 /* : String */;
val* var11 /* : String */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : FlatString */;
val* var17 /* : String */;
val* var18 /* : String */;
val* var_try_file /* var try_file: String */;
short int var19 /* : Bool */;
val* var20 /* : null */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : String */;
val* var_abs_candidate /* var abs_candidate: String */;
val* var28 /* : String */;
val* var_abs_try_file /* var abs_try_file: String */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : ToolContext */;
val* var35 /* : ToolContext */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
long var39 /* : Int */;
val* var40 /* : FlatString */;
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
val* var51 /* : Array[Object] */;
long var52 /* : Int */;
val* var53 /* : NativeArray[Object] */;
val* var54 /* : String */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
long var58 /* : Int */;
val* var59 /* : FlatString */;
val* var60 /* : String */;
val* var61 /* : String */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
long var65 /* : Int */;
val* var66 /* : FlatString */;
val* var67 /* : String */;
val* var68 /* : String */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
long var72 /* : Int */;
val* var73 /* : FlatString */;
val* var74 /* : String */;
val* var75 /* : String */;
short int var76 /* : Bool */;
val* var77 /* : null */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
short int var80 /* : Bool */;
short int var82 /* : Bool */;
short int var83 /* : Bool */;
val* var84 /* : String */;
val* var_abs_candidate85 /* var abs_candidate: String */;
val* var86 /* : String */;
val* var_abs_try_file87 /* var abs_try_file: String */;
short int var88 /* : Bool */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
val* var92 /* : ToolContext */;
val* var94 /* : ToolContext */;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : NativeString */;
long var98 /* : Int */;
val* var99 /* : FlatString */;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : NativeString */;
long var103 /* : Int */;
val* var104 /* : FlatString */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
long var108 /* : Int */;
val* var109 /* : FlatString */;
val* var110 /* : Array[Object] */;
long var111 /* : Int */;
val* var112 /* : NativeArray[Object] */;
val* var113 /* : String */;
val* var115 /* : null */;
short int var116 /* : Bool */;
short int var117 /* : Bool */;
val* var118 /* : null */;
val* var119 /* : nullable ModulePath */;
var_location = p0;
var_name = p1;
var_lookpaths = p2;
var1 = NULL;
var_candidate = var1;
var_ = var_lookpaths;
{
var2 = ((val* (*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Collection[String]>*/;
}
var_3 = var2;
for(;;) {
{
var4 = ((short int (*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_3) /* is_ok on <var_3:Iterator[String]>*/;
}
if (var4){
{
var5 = ((val* (*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_3) /* item on <var_3:Iterator[String]>*/;
}
var_dirname = var5;
if (varonce) {
var6 = varonce;
} else {
var7 = "/";
var8 = 1;
var9 = standard___standard__NativeString___to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
{
var10 = ((val* (*)(val* self, val* p0))(var_dirname->class->vft[COLOR_standard__string__String___43d]))(var_dirname, var6) /* + on <var_dirname:String>*/;
}
{
var11 = ((val* (*)(val* self, val* p0))(var10->class->vft[COLOR_standard__string__String___43d]))(var10, var_name) /* + on <var10:String>*/;
}
if (varonce12) {
var13 = varonce12;
} else {
var14 = ".nit";
var15 = 4;
var16 = standard___standard__NativeString___to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
{
var17 = ((val* (*)(val* self, val* p0))(var11->class->vft[COLOR_standard__string__String___43d]))(var11, var13) /* + on <var11:String>*/;
}
{
var18 = standard__file___String___simplify_path(var17);
}
var_try_file = var18;
{
var19 = standard__file___String___file_exists(var_try_file);
}
if (var19){
var20 = NULL;
if (var_candidate == NULL) {
var21 = 1; /* is null */
} else {
var21 = 0; /* arg is null but recv is not */
}
if (0) {
var22 = ((short int (*)(val* self, val* p0))(var_candidate->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_candidate, var20) /* == on <var_candidate:nullable String>*/;
var21 = var22;
}
if (var21){
var_candidate = var_try_file;
} else {
{
{ /* Inline kernel#Object#!= (var_candidate,var_try_file) on <var_candidate:nullable String(String)> */
var_other = var_try_file;
{
var25 = ((short int (*)(val* self, val* p0))(var_candidate->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_candidate, var_other) /* == on <var_candidate:nullable String(String)>*/;
}
var26 = !var25;
var23 = var26;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
if (var23){
{
var27 = nit__loader___ModelBuilder___module_absolute_path(self, var_candidate);
}
var_abs_candidate = var27;
{
var28 = nit__loader___ModelBuilder___module_absolute_path(self, var_try_file);
}
var_abs_try_file = var28;
{
{ /* Inline kernel#Object#!= (var_abs_candidate,var_abs_try_file) on <var_abs_candidate:String> */
var_other = var_abs_try_file;
{
var31 = ((short int (*)(val* self, val* p0))(var_abs_candidate->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_abs_candidate, var_other) /* == on <var_abs_candidate:String>*/;
}
var32 = !var31;
var29 = var32;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
if (var29){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var35 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
if (varonce36) {
var37 = varonce36;
} else {
var38 = "Error: conflicting module file for ";
var39 = 35;
var40 = standard___standard__NativeString___to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
if (varonce41) {
var42 = varonce41;
} else {
var43 = ": ";
var44 = 2;
var45 = standard___standard__NativeString___to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
if (varonce46) {
var47 = varonce46;
} else {
var48 = " ";
var49 = 1;
var50 = standard___standard__NativeString___to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
var51 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var51 = array_instance Array[Object] */
var52 = 6;
var53 = NEW_standard__NativeArray(var52, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var53)->values[0] = (val*) var37;
((struct instance_standard__NativeArray*)var53)->values[1] = (val*) var_name;
((struct instance_standard__NativeArray*)var53)->values[2] = (val*) var42;
((struct instance_standard__NativeArray*)var53)->values[3] = (val*) var_candidate;
((struct instance_standard__NativeArray*)var53)->values[4] = (val*) var47;
((struct instance_standard__NativeArray*)var53)->values[5] = (val*) var_try_file;
{
((void (*)(val* self, val* p0, long p1))(var51->class->vft[COLOR_standard__array__Array__with_native]))(var51, var53, var52) /* with_native on <var51:Array[Object]>*/;
}
}
{
var54 = ((val* (*)(val* self))(var51->class->vft[COLOR_standard__string__Object__to_s]))(var51) /* to_s on <var51:Array[Object]>*/;
}
{
nit___nit__ToolContext___error(var33, var_location, var54); /* Direct call toolcontext#ToolContext#error on <var33:ToolContext>*/
}
} else {
}
} else {
}
}
} else {
}
if (varonce55) {
var56 = varonce55;
} else {
var57 = "/";
var58 = 1;
var59 = standard___standard__NativeString___to_s_with_length(var57, var58);
var56 = var59;
varonce55 = var56;
}
{
var60 = ((val* (*)(val* self, val* p0))(var_dirname->class->vft[COLOR_standard__string__String___43d]))(var_dirname, var56) /* + on <var_dirname:String>*/;
}
{
var61 = ((val* (*)(val* self, val* p0))(var60->class->vft[COLOR_standard__string__String___43d]))(var60, var_name) /* + on <var60:String>*/;
}
if (varonce62) {
var63 = varonce62;
} else {
var64 = "/";
var65 = 1;
var66 = standard___standard__NativeString___to_s_with_length(var64, var65);
var63 = var66;
varonce62 = var63;
}
{
var67 = ((val* (*)(val* self, val* p0))(var61->class->vft[COLOR_standard__string__String___43d]))(var61, var63) /* + on <var61:String>*/;
}
{
var68 = ((val* (*)(val* self, val* p0))(var67->class->vft[COLOR_standard__string__String___43d]))(var67, var_name) /* + on <var67:String>*/;
}
if (varonce69) {
var70 = varonce69;
} else {
var71 = ".nit";
var72 = 4;
var73 = standard___standard__NativeString___to_s_with_length(var71, var72);
var70 = var73;
varonce69 = var70;
}
{
var74 = ((val* (*)(val* self, val* p0))(var68->class->vft[COLOR_standard__string__String___43d]))(var68, var70) /* + on <var68:String>*/;
}
{
var75 = standard__file___String___simplify_path(var74);
}
var_try_file = var75;
{
var76 = standard__file___String___file_exists(var_try_file);
}
if (var76){
var77 = NULL;
if (var_candidate == NULL) {
var78 = 1; /* is null */
} else {
var78 = 0; /* arg is null but recv is not */
}
if (0) {
var79 = ((short int (*)(val* self, val* p0))(var_candidate->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_candidate, var77) /* == on <var_candidate:nullable String>*/;
var78 = var79;
}
if (var78){
var_candidate = var_try_file;
} else {
{
{ /* Inline kernel#Object#!= (var_candidate,var_try_file) on <var_candidate:nullable String(String)> */
var_other = var_try_file;
{
var82 = ((short int (*)(val* self, val* p0))(var_candidate->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_candidate, var_other) /* == on <var_candidate:nullable String(String)>*/;
}
var83 = !var82;
var80 = var83;
goto RET_LABEL81;
RET_LABEL81:(void)0;
}
}
if (var80){
{
var84 = nit__loader___ModelBuilder___module_absolute_path(self, var_candidate);
}
var_abs_candidate85 = var84;
{
var86 = nit__loader___ModelBuilder___module_absolute_path(self, var_try_file);
}
var_abs_try_file87 = var86;
{
{ /* Inline kernel#Object#!= (var_abs_candidate85,var_abs_try_file87) on <var_abs_candidate85:String> */
var_other = var_abs_try_file87;
{
var90 = ((short int (*)(val* self, val* p0))(var_abs_candidate85->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_abs_candidate85, var_other) /* == on <var_abs_candidate85:String>*/;
}
var91 = !var90;
var88 = var91;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
}
if (var88){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var94 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var94 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var92 = var94;
RET_LABEL93:(void)0;
}
}
if (varonce95) {
var96 = varonce95;
} else {
var97 = "Error: conflicting module file for ";
var98 = 35;
var99 = standard___standard__NativeString___to_s_with_length(var97, var98);
var96 = var99;
varonce95 = var96;
}
if (varonce100) {
var101 = varonce100;
} else {
var102 = ": ";
var103 = 2;
var104 = standard___standard__NativeString___to_s_with_length(var102, var103);
var101 = var104;
varonce100 = var101;
}
if (varonce105) {
var106 = varonce105;
} else {
var107 = " ";
var108 = 1;
var109 = standard___standard__NativeString___to_s_with_length(var107, var108);
var106 = var109;
varonce105 = var106;
}
var110 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var110 = array_instance Array[Object] */
var111 = 6;
var112 = NEW_standard__NativeArray(var111, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var112)->values[0] = (val*) var96;
((struct instance_standard__NativeArray*)var112)->values[1] = (val*) var_name;
((struct instance_standard__NativeArray*)var112)->values[2] = (val*) var101;
((struct instance_standard__NativeArray*)var112)->values[3] = (val*) var_candidate;
((struct instance_standard__NativeArray*)var112)->values[4] = (val*) var106;
((struct instance_standard__NativeArray*)var112)->values[5] = (val*) var_try_file;
{
((void (*)(val* self, val* p0, long p1))(var110->class->vft[COLOR_standard__array__Array__with_native]))(var110, var112, var111) /* with_native on <var110:Array[Object]>*/;
}
}
{
var113 = ((val* (*)(val* self))(var110->class->vft[COLOR_standard__string__Object__to_s]))(var110) /* to_s on <var110:Array[Object]>*/;
}
{
nit___nit__ToolContext___error(var92, var_location, var113); /* Direct call toolcontext#ToolContext#error on <var92:ToolContext>*/
}
} else {
}
} else {
}
}
} else {
}
{
((void (*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_3) /* next on <var_3:Iterator[String]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_3) on <var_3:Iterator[String]> */
RET_LABEL114:(void)0;
}
}
var115 = NULL;
if (var_candidate == NULL) {
var116 = 1; /* is null */
} else {
var116 = 0; /* arg is null but recv is not */
}
if (0) {
var117 = ((short int (*)(val* self, val* p0))(var_candidate->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_candidate, var115) /* == on <var_candidate:nullable String>*/;
var116 = var117;
}
if (var116){
var118 = NULL;
var = var118;
goto RET_LABEL;
} else {
}
{
var119 = nit__loader___ModelBuilder___identify_file(self, var_candidate);
}
var = var119;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#identified_files_by_path for (self: ModelBuilder): HashMap[String, nullable ModulePath] */
val* nit__loader___ModelBuilder___identified_files_by_path(val* self) {
val* var /* : HashMap[String, nullable ModulePath] */;
val* var1 /* : HashMap[String, nullable ModulePath] */;
var1 = self->attrs[COLOR_nit__loader__ModelBuilder___identified_files_by_path].val; /* _identified_files_by_path on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _identified_files_by_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 265);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#identified_files for (self: ModelBuilder): Array[ModulePath] */
val* nit__loader___ModelBuilder___identified_files(val* self) {
val* var /* : Array[ModulePath] */;
val* var1 /* : Array[ModulePath] */;
var1 = self->attrs[COLOR_nit__loader__ModelBuilder___identified_files].val; /* _identified_files on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _identified_files");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 268);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#identify_file for (self: ModelBuilder, String): nullable ModulePath */
val* nit__loader___ModelBuilder___identify_file(val* self, val* p0) {
val* var /* : nullable ModulePath */;
val* var_path /* var path: String */;
val* var1 /* : nullable String */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : FlatString */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : String */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : FlatString */;
short int var17 /* : Bool */;
val* var18 /* : null */;
val* var19 /* : Array[String] */;
val* var21 /* : Array[String] */;
val* var22 /* : nullable ModulePath */;
val* var_res /* var res: nullable ModulePath */;
val* var23 /* : null */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : null */;
val* var_candidate /* var candidate: nullable Object */;
short int var30 /* : Bool */;
val* var31 /* : nullable MGroup */;
val* var_mgroup /* var mgroup: nullable MGroup */;
val* var32 /* : null */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
val* var38 /* : nullable String */;
val* var40 /* : nullable String */;
val* var41 /* : String */;
val* var43 /* : String */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
long var47 /* : Int */;
val* var48 /* : FlatString */;
val* var49 /* : String */;
val* var50 /* : String */;
val* var_owner_path /* var owner_path: String */;
short int var51 /* : Bool */;
val* var52 /* : null */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
val* var55 /* : null */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
long var59 /* : Int */;
val* var60 /* : FlatString */;
val* var61 /* : String */;
val* var_pn /* var pn: String */;
val* var62 /* : String */;
val* var_rp /* var rp: String */;
val* var63 /* : HashMap[String, nullable ModulePath] */;
val* var65 /* : HashMap[String, nullable ModulePath] */;
short int var66 /* : Bool */;
val* var67 /* : HashMap[String, nullable ModulePath] */;
val* var69 /* : HashMap[String, nullable ModulePath] */;
val* var70 /* : nullable Object */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
long var74 /* : Int */;
val* var75 /* : FlatString */;
val* var76 /* : String */;
val* var77 /* : String */;
val* var_mgrouppath /* var mgrouppath: String */;
val* var78 /* : nullable MGroup */;
val* var_mgroup79 /* var mgroup: nullable MGroup */;
val* var80 /* : null */;
short int var81 /* : Bool */;
short int var82 /* : Bool */;
val* var_other84 /* var other: nullable Object */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
val* var88 /* : MProject */;
val* var89 /* : Model */;
val* var91 /* : Model */;
val* var_mproject /* var mproject: MProject */;
val* var92 /* : MGroup */;
val* var93 /* : null */;
val* var96 /* : ToolContext */;
val* var98 /* : ToolContext */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : NativeString */;
long var102 /* : Int */;
val* var103 /* : FlatString */;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : NativeString */;
long var107 /* : Int */;
val* var108 /* : FlatString */;
val* var109 /* : Array[Object] */;
long var110 /* : Int */;
val* var111 /* : NativeArray[Object] */;
val* var112 /* : String */;
long var113 /* : Int */;
val* var114 /* : ModulePath */;
val* var_res115 /* var res: ModulePath */;
val* var116 /* : Array[ModulePath] */;
val* var118 /* : Array[ModulePath] */;
val* var119 /* : HashMap[String, nullable ModulePath] */;
val* var121 /* : HashMap[String, nullable ModulePath] */;
val* var122 /* : Array[ModulePath] */;
val* var124 /* : Array[ModulePath] */;
var_path = p0;
{
var1 = standard__file___String___file_extension(var_path);
}
if (varonce) {
var2 = varonce;
} else {
var3 = "nit";
var4 = 3;
var5 = standard___standard__NativeString___to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
if (var1 == NULL) {
var6 = 1; /* <var2:String> cannot be null */
} else {
{ /* Inline kernel#Object#!= (var1,var2) on <var1:nullable String> */
var_other = var2;
{
var9 = ((short int (*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var1, var_other) /* == on <var1:nullable String(String)>*/;
}
var10 = !var9;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (var6){
{
var11 = standard__file___String___dirname(var_path);
}
if (varonce12) {
var13 = varonce12;
} else {
var14 = "";
var15 = 0;
var16 = standard___standard__NativeString___to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
{
var17 = ((short int (*)(val* self, val* p0))(var11->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var11, var13) /* == on <var11:String>*/;
}
if (var17){
var18 = NULL;
{
{ /* Inline loader#ModelBuilder#paths (self) on <self:ModelBuilder> */
var21 = self->attrs[COLOR_nit__loader__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 146);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = nit__loader___ModelBuilder___search_module_in_paths(self, var18, var_path, var19);
}
var_res = var22;
var23 = NULL;
if (var_res == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var23) on <var_res:nullable ModulePath> */
var_other = var23;
{
var27 = ((short int (*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable ModulePath(ModulePath)>*/;
}
var28 = !var27;
var25 = var28;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var24 = var25;
}
if (var24){
var = var_res;
goto RET_LABEL;
} else {
}
} else {
}
var29 = NULL;
var_candidate = var29;
{
var30 = standard__file___String___file_exists(var_path);
}
if (var30){
{
var31 = nit__loader___ModelBuilder___get_mgroup(self, var_path);
}
var_mgroup = var31;
var32 = NULL;
if (var_mgroup == NULL) {
var33 = 0; /* is null */
} else {
var33 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mgroup,var32) on <var_mgroup:nullable MGroup> */
var_other = var32;
{
var36 = ((short int (*)(val* self, val* p0))(var_mgroup->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mgroup, var_other) /* == on <var_mgroup:nullable MGroup(MGroup)>*/;
}
var37 = !var36;
var34 = var37;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
var33 = var34;
}
if (var33){
{
{ /* Inline mproject#MGroup#filepath (var_mgroup) on <var_mgroup:nullable MGroup(MGroup)> */
var40 = var_mgroup->attrs[COLOR_nit__mproject__MGroup___filepath].val; /* _filepath on <var_mgroup:nullable MGroup(MGroup)> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline mproject#MGroup#name (var_mgroup) on <var_mgroup:nullable MGroup(MGroup)> */
var43 = var_mgroup->attrs[COLOR_nit__mproject__MGroup___name].val; /* _name on <var_mgroup:nullable MGroup(MGroup)> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 65);
show_backtrace(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
if (varonce44) {
var45 = varonce44;
} else {
var46 = ".nit";
var47 = 4;
var48 = standard___standard__NativeString___to_s_with_length(var46, var47);
var45 = var48;
varonce44 = var45;
}
{
var49 = ((val* (*)(val* self, val* p0))(var41->class->vft[COLOR_standard__string__String___43d]))(var41, var45) /* + on <var41:String>*/;
}
if (var38 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 291);
show_backtrace(1);
} else {
var50 = standard__file___String___join_path(var38, var49);
}
var_owner_path = var50;
{
var51 = standard__file___String___file_exists(var_owner_path);
}
if (var51){
var_candidate = var_owner_path;
} else {
}
} else {
}
} else {
}
var52 = NULL;
if (var_candidate == NULL) {
var53 = 1; /* is null */
} else {
var53 = 0; /* arg is null but recv is not */
}
if (0) {
var54 = ((short int (*)(val* self, val* p0))(var_candidate->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_candidate, var52) /* == on <var_candidate:nullable Object(nullable String)>*/;
var53 = var54;
}
if (var53){
var55 = NULL;
var = var55;
goto RET_LABEL;
} else {
}
var_path = var_candidate;
} else {
}
if (varonce56) {
var57 = varonce56;
} else {
var58 = ".nit";
var59 = 4;
var60 = standard___standard__NativeString___to_s_with_length(var58, var59);
var57 = var60;
varonce56 = var57;
}
{
var61 = standard__file___String___basename(var_path, var57);
}
var_pn = var61;
{
var62 = nit__loader___ModelBuilder___module_absolute_path(self, var_path);
}
var_rp = var62;
{
{ /* Inline loader#ModelBuilder#identified_files_by_path (self) on <self:ModelBuilder> */
var65 = self->attrs[COLOR_nit__loader__ModelBuilder___identified_files_by_path].val; /* _identified_files_by_path on <self:ModelBuilder> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _identified_files_by_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 265);
show_backtrace(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
var66 = standard___standard__MapRead___has_key(var63, var_rp);
}
if (var66){
{
{ /* Inline loader#ModelBuilder#identified_files_by_path (self) on <self:ModelBuilder> */
var69 = self->attrs[COLOR_nit__loader__ModelBuilder___identified_files_by_path].val; /* _identified_files_by_path on <self:ModelBuilder> */
if (unlikely(var69 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _identified_files_by_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 265);
show_backtrace(1);
}
var67 = var69;
RET_LABEL68:(void)0;
}
}
{
var70 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var67, var_rp);
}
var = var70;
goto RET_LABEL;
} else {
}
if (varonce71) {
var72 = varonce71;
} else {
var73 = "..";
var74 = 2;
var75 = standard___standard__NativeString___to_s_with_length(var73, var74);
var72 = var75;
varonce71 = var72;
}
{
var76 = standard__file___String___join_path(var_path, var72);
}
{
var77 = standard__file___String___simplify_path(var76);
}
var_mgrouppath = var77;
{
var78 = nit__loader___ModelBuilder___get_mgroup(self, var_mgrouppath);
}
var_mgroup79 = var78;
var80 = NULL;
if (var_mgroup79 == NULL) {
var81 = 1; /* is null */
} else {
var81 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mgroup79,var80) on <var_mgroup79:nullable MGroup> */
var_other84 = var80;
{
{ /* Inline kernel#Object#is_same_instance (var_mgroup79,var_other84) on <var_mgroup79:nullable MGroup(MGroup)> */
var87 = var_mgroup79 == var_other84;
var85 = var87;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
var82 = var85;
goto RET_LABEL83;
RET_LABEL83:(void)0;
}
var81 = var82;
}
if (var81){
var88 = NEW_nit__MProject(&type_nit__MProject);
{
{ /* Inline modelbuilder_base#ModelBuilder#model (self) on <self:ModelBuilder> */
var91 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var91 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 44);
show_backtrace(1);
}
var89 = var91;
RET_LABEL90:(void)0;
}
}
{
((void (*)(val* self, val* p0))(var88->class->vft[COLOR_nit__mproject__MProject__name_61d]))(var88, var_pn) /* name= on <var88:MProject>*/;
}
{
((void (*)(val* self, val* p0))(var88->class->vft[COLOR_nit__mproject__MProject__model_61d]))(var88, var89) /* model= on <var88:MProject>*/;
}
{
((void (*)(val* self))(var88->class->vft[COLOR_standard__kernel__Object__init]))(var88) /* init on <var88:MProject>*/;
}
var_mproject = var88;
var92 = NEW_nit__MGroup(&type_nit__MGroup);
var93 = NULL;
{
((void (*)(val* self, val* p0))(var92->class->vft[COLOR_nit__mproject__MGroup__name_61d]))(var92, var_pn) /* name= on <var92:MGroup>*/;
}
{
((void (*)(val* self, val* p0))(var92->class->vft[COLOR_nit__mproject__MGroup__mproject_61d]))(var92, var_mproject) /* mproject= on <var92:MGroup>*/;
}
{
((void (*)(val* self, val* p0))(var92->class->vft[COLOR_nit__mproject__MGroup__parent_61d]))(var92, var93) /* parent= on <var92:MGroup>*/;
}
{
((void (*)(val* self))(var92->class->vft[COLOR_standard__kernel__Object__init]))(var92) /* init on <var92:MGroup>*/;
}
var_mgroup79 = var92;
{
{ /* Inline mproject#MGroup#filepath= (var_mgroup79,var_path) on <var_mgroup79:nullable MGroup(MGroup)> */
var_mgroup79->attrs[COLOR_nit__mproject__MGroup___filepath].val = var_path; /* _filepath on <var_mgroup79:nullable MGroup(MGroup)> */
RET_LABEL94:(void)0;
}
}
{
{ /* Inline mproject#MProject#root= (var_mproject,var_mgroup79) on <var_mproject:MProject> */
var_mproject->attrs[COLOR_nit__mproject__MProject___root].val = var_mgroup79; /* _root on <var_mproject:MProject> */
RET_LABEL95:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var98 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var98 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var96 = var98;
RET_LABEL97:(void)0;
}
}
if (varonce99) {
var100 = varonce99;
} else {
var101 = "found project `";
var102 = 15;
var103 = standard___standard__NativeString___to_s_with_length(var101, var102);
var100 = var103;
varonce99 = var100;
}
if (varonce104) {
var105 = varonce104;
} else {
var106 = "` at ";
var107 = 5;
var108 = standard___standard__NativeString___to_s_with_length(var106, var107);
var105 = var108;
varonce104 = var105;
}
var109 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var109 = array_instance Array[Object] */
var110 = 4;
var111 = NEW_standard__NativeArray(var110, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var111)->values[0] = (val*) var100;
((struct instance_standard__NativeArray*)var111)->values[1] = (val*) var_pn;
((struct instance_standard__NativeArray*)var111)->values[2] = (val*) var105;
((struct instance_standard__NativeArray*)var111)->values[3] = (val*) var_path;
{
((void (*)(val* self, val* p0, long p1))(var109->class->vft[COLOR_standard__array__Array__with_native]))(var109, var111, var110) /* with_native on <var109:Array[Object]>*/;
}
}
{
var112 = ((val* (*)(val* self))(var109->class->vft[COLOR_standard__string__Object__to_s]))(var109) /* to_s on <var109:Array[Object]>*/;
}
var113 = 2;
{
nit___nit__ToolContext___info(var96, var112, var113); /* Direct call toolcontext#ToolContext#info on <var96:ToolContext>*/
}
} else {
}
var114 = NEW_nit__ModulePath(&type_nit__ModulePath);
{
((void (*)(val* self, val* p0))(var114->class->vft[COLOR_nit__loader__ModulePath__name_61d]))(var114, var_pn) /* name= on <var114:ModulePath>*/;
}
{
((void (*)(val* self, val* p0))(var114->class->vft[COLOR_nit__loader__ModulePath__filepath_61d]))(var114, var_path) /* filepath= on <var114:ModulePath>*/;
}
{
((void (*)(val* self, val* p0))(var114->class->vft[COLOR_nit__loader__ModulePath__mgroup_61d]))(var114, var_mgroup79) /* mgroup= on <var114:ModulePath>*/;
}
{
((void (*)(val* self))(var114->class->vft[COLOR_standard__kernel__Object__init]))(var114) /* init on <var114:ModulePath>*/;
}
var_res115 = var114;
{
{ /* Inline loader#MGroup#module_paths (var_mgroup79) on <var_mgroup79:nullable MGroup(MGroup)> */
var118 = var_mgroup79->attrs[COLOR_nit__loader__MGroup___module_paths].val; /* _module_paths on <var_mgroup79:nullable MGroup(MGroup)> */
if (unlikely(var118 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _module_paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 675);
show_backtrace(1);
}
var116 = var118;
RET_LABEL117:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var116, var_res115); /* Direct call array#Array#add on <var116:Array[ModulePath]>*/
}
{
{ /* Inline loader#ModelBuilder#identified_files_by_path (self) on <self:ModelBuilder> */
var121 = self->attrs[COLOR_nit__loader__ModelBuilder___identified_files_by_path].val; /* _identified_files_by_path on <self:ModelBuilder> */
if (unlikely(var121 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _identified_files_by_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 265);
show_backtrace(1);
}
var119 = var121;
RET_LABEL120:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var119, var_rp, var_res115); /* Direct call hash_collection#HashMap#[]= on <var119:HashMap[String, nullable ModulePath]>*/
}
{
{ /* Inline loader#ModelBuilder#identified_files (self) on <self:ModelBuilder> */
var124 = self->attrs[COLOR_nit__loader__ModelBuilder___identified_files].val; /* _identified_files on <self:ModelBuilder> */
if (unlikely(var124 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _identified_files");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 268);
show_backtrace(1);
}
var122 = var124;
RET_LABEL123:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var122, var_res115); /* Direct call array#Array#add on <var122:Array[ModulePath]>*/
}
var = var_res115;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#mgroups for (self: ModelBuilder): HashMap[String, nullable MGroup] */
val* nit__loader___ModelBuilder___mgroups(val* self) {
val* var /* : HashMap[String, nullable MGroup] */;
val* var1 /* : HashMap[String, nullable MGroup] */;
var1 = self->attrs[COLOR_nit__loader__ModelBuilder___mgroups].val; /* _mgroups on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroups");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 328);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#get_mgroup for (self: ModelBuilder, String): nullable MGroup */
val* nit__loader___ModelBuilder___get_mgroup(val* self, val* p0) {
val* var /* : nullable MGroup */;
val* var_dirpath /* var dirpath: String */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : Array[String] */;
val* var5 /* : Array[String] */;
val* var_ /* var : Array[String] */;
val* var6 /* : ArrayIterator[nullable Object] */;
val* var_7 /* var : ArrayIterator[String] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_p /* var p: String */;
val* var10 /* : String */;
val* var_try /* var try: String */;
short int var11 /* : Bool */;
val* var13 /* : null */;
val* var14 /* : String */;
val* var_rdp /* var rdp: String */;
val* var15 /* : HashMap[String, nullable MGroup] */;
val* var17 /* : HashMap[String, nullable MGroup] */;
short int var18 /* : Bool */;
val* var19 /* : HashMap[String, nullable MGroup] */;
val* var21 /* : HashMap[String, nullable MGroup] */;
val* var22 /* : nullable Object */;
static val* varonce;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : FlatString */;
val* var27 /* : String */;
val* var_pn /* var pn: String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : FlatString */;
val* var33 /* : String */;
val* var34 /* : String */;
val* var35 /* : String */;
val* var_mp /* var mp: String */;
val* var_dirpath2 /* var dirpath2: String */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
long var41 /* : Int */;
val* var42 /* : FlatString */;
short int var43 /* : Bool */;
val* var44 /* : String */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
long var48 /* : Int */;
val* var49 /* : FlatString */;
val* var50 /* : String */;
val* var51 /* : null */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
long var55 /* : Int */;
val* var56 /* : FlatString */;
val* var57 /* : String */;
val* var58 /* : String */;
val* var_parentpath /* var parentpath: String */;
val* var59 /* : nullable MGroup */;
val* var_parent /* var parent: nullable MGroup */;
val* var60 /* : null */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
val* var67 /* : MProject */;
val* var68 /* : Model */;
val* var70 /* : Model */;
val* var_mproject /* var mproject: MProject */;
val* var71 /* : MGroup */;
val* var72 /* : null */;
val* var_mgroup /* var mgroup: nullable Object */;
val* var74 /* : ToolContext */;
val* var76 /* : ToolContext */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
long var80 /* : Int */;
val* var81 /* : FlatString */;
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
val* var92 /* : MGroup */;
val* var93 /* : MProject */;
val* var95 /* : MProject */;
val* var96 /* : ToolContext */;
val* var98 /* : ToolContext */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : NativeString */;
long var102 /* : Int */;
val* var103 /* : FlatString */;
val* var104 /* : String */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
long var108 /* : Int */;
val* var109 /* : FlatString */;
val* var110 /* : Array[Object] */;
long var111 /* : Int */;
val* var112 /* : NativeArray[Object] */;
val* var113 /* : String */;
long var114 /* : Int */;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : NativeString */;
long var118 /* : Int */;
val* var119 /* : FlatString */;
val* var120 /* : String */;
val* var_readme /* var readme: String */;
short int var121 /* : Bool */;
short int var122 /* : Bool */;
static val* varonce123;
val* var124 /* : String */;
char* var125 /* : NativeString */;
long var126 /* : Int */;
val* var127 /* : FlatString */;
val* var128 /* : String */;
short int var129 /* : Bool */;
val* var130 /* : MDoc */;
val* var_mdoc /* var mdoc: MDoc */;
val* var132 /* : IFStream */;
val* var_s /* var s: IFStream */;
short int var133 /* : Bool */;
short int var134 /* : Bool */;
val* var135 /* : Array[String] */;
val* var137 /* : Array[String] */;
val* var138 /* : String */;
val* var143 /* : HashMap[String, nullable MGroup] */;
val* var145 /* : HashMap[String, nullable MGroup] */;
var_dirpath = p0;
{
var1 = standard__file___String___file_exists(var_dirpath);
}
var2 = !var1;
if (var2){
{
{ /* Inline loader#ModelBuilder#paths (self) on <self:ModelBuilder> */
var5 = self->attrs[COLOR_nit__loader__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 146);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_ = var3;
{
var6 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_7 = var6;
for(;;) {
{
var8 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_7);
}
if (var8){
{
var9 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_7);
}
var_p = var9;
{
var10 = standard__file___String____47d(var_p, var_dirpath);
}
var_try = var10;
{
var11 = standard__file___String___file_exists(var_try);
}
if (var11){
var_dirpath = var_try;
goto BREAK_;
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_7); /* Direct call array#ArrayIterator#next on <var_7:ArrayIterator[String]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_7) on <var_7:ArrayIterator[String]> */
RET_LABEL12:(void)0;
}
}
var13 = NULL;
var = var13;
goto RET_LABEL;
BREAK_: (void)0;
} else {
}
{
var14 = nit__loader___ModelBuilder___module_absolute_path(self, var_dirpath);
}
var_rdp = var14;
{
{ /* Inline loader#ModelBuilder#mgroups (self) on <self:ModelBuilder> */
var17 = self->attrs[COLOR_nit__loader__ModelBuilder___mgroups].val; /* _mgroups on <self:ModelBuilder> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroups");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 328);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = standard___standard__MapRead___has_key(var15, var_rdp);
}
if (var18){
{
{ /* Inline loader#ModelBuilder#mgroups (self) on <self:ModelBuilder> */
var21 = self->attrs[COLOR_nit__loader__ModelBuilder___mgroups].val; /* _mgroups on <self:ModelBuilder> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroups");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 328);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var19, var_rdp);
}
var = var22;
goto RET_LABEL;
} else {
}
if (varonce) {
var23 = varonce;
} else {
var24 = ".nit";
var25 = 4;
var26 = standard___standard__NativeString___to_s_with_length(var24, var25);
var23 = var26;
varonce = var23;
}
{
var27 = standard__file___String___basename(var_rdp, var23);
}
var_pn = var27;
if (varonce28) {
var29 = varonce28;
} else {
var30 = ".nit";
var31 = 4;
var32 = standard___standard__NativeString___to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
{
var33 = ((val* (*)(val* self, val* p0))(var_pn->class->vft[COLOR_standard__string__String___43d]))(var_pn, var29) /* + on <var_pn:String>*/;
}
{
var34 = standard__file___String___join_path(var_dirpath, var33);
}
{
var35 = standard__file___String___simplify_path(var34);
}
var_mp = var35;
var_dirpath2 = var_dirpath;
{
var36 = standard__file___String___file_exists(var_mp);
}
var37 = !var36;
if (var37){
if (varonce38) {
var39 = varonce38;
} else {
var40 = "src";
var41 = 3;
var42 = standard___standard__NativeString___to_s_with_length(var40, var41);
var39 = var42;
varonce38 = var39;
}
{
var43 = ((short int (*)(val* self, val* p0))(var_pn->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pn, var39) /* == on <var_pn:String>*/;
}
if (var43){
{
var44 = standard__file___String___dirname(var_rdp);
}
var_dirpath2 = var44;
if (varonce45) {
var46 = varonce45;
} else {
var47 = "";
var48 = 0;
var49 = standard___standard__NativeString___to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
{
var50 = standard__file___String___basename(var_dirpath2, var46);
}
var_pn = var50;
} else {
var51 = NULL;
var = var51;
goto RET_LABEL;
}
} else {
}
if (varonce52) {
var53 = varonce52;
} else {
var54 = "..";
var55 = 2;
var56 = standard___standard__NativeString___to_s_with_length(var54, var55);
var53 = var56;
varonce52 = var53;
}
{
var57 = standard__file___String___join_path(var_dirpath, var53);
}
{
var58 = standard__file___String___simplify_path(var57);
}
var_parentpath = var58;
{
var59 = nit__loader___ModelBuilder___get_mgroup(self, var_parentpath);
}
var_parent = var59;
var60 = NULL;
if (var_parent == NULL) {
var61 = 1; /* is null */
} else {
var61 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_parent,var60) on <var_parent:nullable MGroup> */
var_other = var60;
{
{ /* Inline kernel#Object#is_same_instance (var_parent,var_other) on <var_parent:nullable MGroup(MGroup)> */
var66 = var_parent == var_other;
var64 = var66;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
var62 = var64;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
var61 = var62;
}
if (var61){
var67 = NEW_nit__MProject(&type_nit__MProject);
{
{ /* Inline modelbuilder_base#ModelBuilder#model (self) on <self:ModelBuilder> */
var70 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 44);
show_backtrace(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
((void (*)(val* self, val* p0))(var67->class->vft[COLOR_nit__mproject__MProject__name_61d]))(var67, var_pn) /* name= on <var67:MProject>*/;
}
{
((void (*)(val* self, val* p0))(var67->class->vft[COLOR_nit__mproject__MProject__model_61d]))(var67, var68) /* model= on <var67:MProject>*/;
}
{
((void (*)(val* self))(var67->class->vft[COLOR_standard__kernel__Object__init]))(var67) /* init on <var67:MProject>*/;
}
var_mproject = var67;
var71 = NEW_nit__MGroup(&type_nit__MGroup);
var72 = NULL;
{
((void (*)(val* self, val* p0))(var71->class->vft[COLOR_nit__mproject__MGroup__name_61d]))(var71, var_pn) /* name= on <var71:MGroup>*/;
}
{
((void (*)(val* self, val* p0))(var71->class->vft[COLOR_nit__mproject__MGroup__mproject_61d]))(var71, var_mproject) /* mproject= on <var71:MGroup>*/;
}
{
((void (*)(val* self, val* p0))(var71->class->vft[COLOR_nit__mproject__MGroup__parent_61d]))(var71, var72) /* parent= on <var71:MGroup>*/;
}
{
((void (*)(val* self))(var71->class->vft[COLOR_standard__kernel__Object__init]))(var71) /* init on <var71:MGroup>*/;
}
var_mgroup = var71;
{
{ /* Inline mproject#MProject#root= (var_mproject,var_mgroup) on <var_mproject:MProject> */
var_mproject->attrs[COLOR_nit__mproject__MProject___root].val = var_mgroup; /* _root on <var_mproject:MProject> */
RET_LABEL73:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var76 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
if (varonce77) {
var78 = varonce77;
} else {
var79 = "found project `";
var80 = 15;
var81 = standard___standard__NativeString___to_s_with_length(var79, var80);
var78 = var81;
varonce77 = var78;
}
if (varonce82) {
var83 = varonce82;
} else {
var84 = "` at ";
var85 = 5;
var86 = standard___standard__NativeString___to_s_with_length(var84, var85);
var83 = var86;
varonce82 = var83;
}
var87 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var87 = array_instance Array[Object] */
var88 = 4;
var89 = NEW_standard__NativeArray(var88, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var89)->values[0] = (val*) var78;
((struct instance_standard__NativeArray*)var89)->values[1] = (val*) var_mproject;
((struct instance_standard__NativeArray*)var89)->values[2] = (val*) var83;
((struct instance_standard__NativeArray*)var89)->values[3] = (val*) var_dirpath;
{
((void (*)(val* self, val* p0, long p1))(var87->class->vft[COLOR_standard__array__Array__with_native]))(var87, var89, var88) /* with_native on <var87:Array[Object]>*/;
}
}
{
var90 = ((val* (*)(val* self))(var87->class->vft[COLOR_standard__string__Object__to_s]))(var87) /* to_s on <var87:Array[Object]>*/;
}
var91 = 2;
{
nit___nit__ToolContext___info(var74, var90, var91); /* Direct call toolcontext#ToolContext#info on <var74:ToolContext>*/
}
} else {
var92 = NEW_nit__MGroup(&type_nit__MGroup);
{
{ /* Inline mproject#MGroup#mproject (var_parent) on <var_parent:nullable MGroup(MGroup)> */
var95 = var_parent->attrs[COLOR_nit__mproject__MGroup___mproject].val; /* _mproject on <var_parent:nullable MGroup(MGroup)> */
if (unlikely(var95 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproject");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 69);
show_backtrace(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
{
((void (*)(val* self, val* p0))(var92->class->vft[COLOR_nit__mproject__MGroup__name_61d]))(var92, var_pn) /* name= on <var92:MGroup>*/;
}
{
((void (*)(val* self, val* p0))(var92->class->vft[COLOR_nit__mproject__MGroup__mproject_61d]))(var92, var93) /* mproject= on <var92:MGroup>*/;
}
{
((void (*)(val* self, val* p0))(var92->class->vft[COLOR_nit__mproject__MGroup__parent_61d]))(var92, var_parent) /* parent= on <var92:MGroup>*/;
}
{
((void (*)(val* self))(var92->class->vft[COLOR_standard__kernel__Object__init]))(var92) /* init on <var92:MGroup>*/;
}
var_mgroup = var92;
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var98 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var98 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var96 = var98;
RET_LABEL97:(void)0;
}
}
if (varonce99) {
var100 = varonce99;
} else {
var101 = "found sub group `";
var102 = 17;
var103 = standard___standard__NativeString___to_s_with_length(var101, var102);
var100 = var103;
varonce99 = var100;
}
{
var104 = nit___nit__MGroup___nit__model_base__MEntity__full_name(var_mgroup);
}
if (varonce105) {
var106 = varonce105;
} else {
var107 = "` at ";
var108 = 5;
var109 = standard___standard__NativeString___to_s_with_length(var107, var108);
var106 = var109;
varonce105 = var106;
}
var110 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var110 = array_instance Array[Object] */
var111 = 4;
var112 = NEW_standard__NativeArray(var111, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var112)->values[0] = (val*) var100;
((struct instance_standard__NativeArray*)var112)->values[1] = (val*) var104;
((struct instance_standard__NativeArray*)var112)->values[2] = (val*) var106;
((struct instance_standard__NativeArray*)var112)->values[3] = (val*) var_dirpath;
{
((void (*)(val* self, val* p0, long p1))(var110->class->vft[COLOR_standard__array__Array__with_native]))(var110, var112, var111) /* with_native on <var110:Array[Object]>*/;
}
}
{
var113 = ((val* (*)(val* self))(var110->class->vft[COLOR_standard__string__Object__to_s]))(var110) /* to_s on <var110:Array[Object]>*/;
}
var114 = 2;
{
nit___nit__ToolContext___info(var96, var113, var114); /* Direct call toolcontext#ToolContext#info on <var96:ToolContext>*/
}
}
if (varonce115) {
var116 = varonce115;
} else {
var117 = "README.md";
var118 = 9;
var119 = standard___standard__NativeString___to_s_with_length(var117, var118);
var116 = var119;
varonce115 = var116;
}
{
var120 = standard__file___String___join_path(var_dirpath2, var116);
}
var_readme = var120;
{
var121 = standard__file___String___file_exists(var_readme);
}
var122 = !var121;
if (var122){
if (varonce123) {
var124 = varonce123;
} else {
var125 = "README";
var126 = 6;
var127 = standard___standard__NativeString___to_s_with_length(var125, var126);
var124 = var127;
varonce123 = var124;
}
{
var128 = standard__file___String___join_path(var_dirpath2, var124);
}
var_readme = var128;
} else {
}
{
var129 = standard__file___String___file_exists(var_readme);
}
if (var129){
var130 = NEW_nit__MDoc(&type_nit__MDoc);
{
{ /* Inline kernel#Object#init (var130) on <var130:MDoc> */
RET_LABEL131:(void)0;
}
}
var_mdoc = var130;
var132 = NEW_standard__IFStream(&type_standard__IFStream);
{
standard___standard__IFStream___open(var132, var_readme); /* Direct call file#IFStream#open on <var132:IFStream>*/
}
var_s = var132;
for(;;) {
{
var133 = standard___standard__BufferedIStream___IStream__eof(var_s);
}
var134 = !var133;
if (var134){
{
{ /* Inline mdoc#MDoc#content (var_mdoc) on <var_mdoc:MDoc> */
var137 = var_mdoc->attrs[COLOR_nit__mdoc__MDoc___content].val; /* _content on <var_mdoc:MDoc> */
if (unlikely(var137 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _content");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mdoc, 22);
show_backtrace(1);
}
var135 = var137;
RET_LABEL136:(void)0;
}
}
{
var138 = standard___standard__IStream___read_line(var_s);
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var135, var138); /* Direct call array#Array#add on <var135:Array[String]>*/
}
} else {
goto BREAK_label139;
}
}
BREAK_label139: (void)0;
{
{ /* Inline mdoc#MEntity#mdoc= (var_mgroup,var_mdoc) on <var_mgroup:nullable Object(MGroup)> */
var_mgroup->attrs[COLOR_nit__mdoc__MEntity___mdoc].val = var_mdoc; /* _mdoc on <var_mgroup:nullable Object(MGroup)> */
RET_LABEL140:(void)0;
}
}
{
{ /* Inline mdoc#MDoc#original_mentity= (var_mdoc,var_mgroup) on <var_mdoc:MDoc> */
var_mdoc->attrs[COLOR_nit__mdoc__MDoc___original_mentity].val = var_mgroup; /* _original_mentity on <var_mdoc:MDoc> */
RET_LABEL141:(void)0;
}
}
} else {
}
{
{ /* Inline mproject#MGroup#filepath= (var_mgroup,var_dirpath) on <var_mgroup:nullable Object(MGroup)> */
var_mgroup->attrs[COLOR_nit__mproject__MGroup___filepath].val = var_dirpath; /* _filepath on <var_mgroup:nullable Object(MGroup)> */
RET_LABEL142:(void)0;
}
}
{
{ /* Inline loader#ModelBuilder#mgroups (self) on <self:ModelBuilder> */
var145 = self->attrs[COLOR_nit__loader__ModelBuilder___mgroups].val; /* _mgroups on <self:ModelBuilder> */
if (unlikely(var145 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroups");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 328);
show_backtrace(1);
}
var143 = var145;
RET_LABEL144:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var143, var_rdp, var_mgroup); /* Direct call hash_collection#HashMap#[]= on <var143:HashMap[String, nullable MGroup]>*/
}
var = var_mgroup;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#module_absolute_path for (self: ModelBuilder, String): String */
val* nit__loader___ModelBuilder___module_absolute_path(val* self, val* p0) {
val* var /* : String */;
val* var_path /* var path: String */;
val* var1 /* : String */;
val* var2 /* : String */;
val* var3 /* : String */;
var_path = p0;
{
var1 = standard__file___Object___getcwd(self);
}
{
var2 = standard__file___String___join_path(var1, var_path);
}
{
var3 = standard__file___String___simplify_path(var2);
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#load_module_ast for (self: ModelBuilder, String): nullable AModule */
val* nit__loader___ModelBuilder___load_module_ast(val* self, val* p0) {
val* var /* : nullable AModule */;
val* var_filename /* var filename: String */;
val* var1 /* : nullable String */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : FlatString */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : ToolContext */;
val* var13 /* : ToolContext */;
val* var14 /* : null */;
static val* varonce15;
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
val* var29 /* : null */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var32 /* : ToolContext */;
val* var34 /* : ToolContext */;
val* var35 /* : null */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
long var39 /* : Int */;
val* var40 /* : FlatString */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
long var44 /* : Int */;
val* var45 /* : FlatString */;
val* var46 /* : Array[Object] */;
long var47 /* : Int */;
val* var48 /* : NativeArray[Object] */;
val* var49 /* : String */;
val* var50 /* : null */;
val* var51 /* : ToolContext */;
val* var53 /* : ToolContext */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
long var57 /* : Int */;
val* var58 /* : FlatString */;
val* var59 /* : Array[Object] */;
long var60 /* : Int */;
val* var61 /* : NativeArray[Object] */;
val* var62 /* : String */;
long var63 /* : Int */;
val* var64 /* : IFStream */;
val* var_file /* var file: IFStream */;
val* var65 /* : Lexer */;
val* var66 /* : SourceFile */;
val* var_lexer /* var lexer: Lexer */;
val* var67 /* : Parser */;
val* var_parser /* var parser: Parser */;
val* var68 /* : Start */;
val* var_tree /* var tree: Start */;
val* var69 /* : nullable AModule */;
val* var71 /* : nullable AModule */;
val* var_nmodule /* var nmodule: nullable AModule */;
val* var72 /* : null */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
val* var_other76 /* var other: nullable Object */;
short int var77 /* : Bool */;
short int var79 /* : Bool */;
val* var80 /* : EOF */;
val* var82 /* : EOF */;
val* var_neof /* var neof: EOF */;
short int var83 /* : Bool */;
int cltype;
int idtype;
val* var84 /* : String */;
val* var86 /* : String */;
val* var87 /* : null */;
var_filename = p0;
{
var1 = standard__file___String___file_extension(var_filename);
}
if (varonce) {
var2 = varonce;
} else {
var3 = "nit";
var4 = 3;
var5 = standard___standard__NativeString___to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
if (var1 == NULL) {
var6 = 1; /* <var2:String> cannot be null */
} else {
{ /* Inline kernel#Object#!= (var1,var2) on <var1:nullable String> */
var_other = var2;
{
var9 = ((short int (*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var1, var_other) /* == on <var1:nullable String(String)>*/;
}
var10 = !var9;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (var6){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var13 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
var14 = NULL;
if (varonce15) {
var16 = varonce15;
} else {
var17 = "Error: file ";
var18 = 12;
var19 = standard___standard__NativeString___to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
if (varonce20) {
var21 = varonce20;
} else {
var22 = " is not a valid nit module.";
var23 = 27;
var24 = standard___standard__NativeString___to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
var25 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var25 = array_instance Array[Object] */
var26 = 3;
var27 = NEW_standard__NativeArray(var26, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var27)->values[0] = (val*) var16;
((struct instance_standard__NativeArray*)var27)->values[1] = (val*) var_filename;
((struct instance_standard__NativeArray*)var27)->values[2] = (val*) var21;
{
((void (*)(val* self, val* p0, long p1))(var25->class->vft[COLOR_standard__array__Array__with_native]))(var25, var27, var26) /* with_native on <var25:Array[Object]>*/;
}
}
{
var28 = ((val* (*)(val* self))(var25->class->vft[COLOR_standard__string__Object__to_s]))(var25) /* to_s on <var25:Array[Object]>*/;
}
{
nit___nit__ToolContext___error(var11, var14, var28); /* Direct call toolcontext#ToolContext#error on <var11:ToolContext>*/
}
var29 = NULL;
var = var29;
goto RET_LABEL;
} else {
}
{
var30 = standard__file___String___file_exists(var_filename);
}
var31 = !var30;
if (var31){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var34 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
var35 = NULL;
if (varonce36) {
var37 = varonce36;
} else {
var38 = "Error: file ";
var39 = 12;
var40 = standard___standard__NativeString___to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
if (varonce41) {
var42 = varonce41;
} else {
var43 = " not found.";
var44 = 11;
var45 = standard___standard__NativeString___to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
var46 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var46 = array_instance Array[Object] */
var47 = 3;
var48 = NEW_standard__NativeArray(var47, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var48)->values[0] = (val*) var37;
((struct instance_standard__NativeArray*)var48)->values[1] = (val*) var_filename;
((struct instance_standard__NativeArray*)var48)->values[2] = (val*) var42;
{
((void (*)(val* self, val* p0, long p1))(var46->class->vft[COLOR_standard__array__Array__with_native]))(var46, var48, var47) /* with_native on <var46:Array[Object]>*/;
}
}
{
var49 = ((val* (*)(val* self))(var46->class->vft[COLOR_standard__string__Object__to_s]))(var46) /* to_s on <var46:Array[Object]>*/;
}
{
nit___nit__ToolContext___error(var32, var35, var49); /* Direct call toolcontext#ToolContext#error on <var32:ToolContext>*/
}
var50 = NULL;
var = var50;
goto RET_LABEL;
} else {
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var53 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
if (varonce54) {
var55 = varonce54;
} else {
var56 = "load module ";
var57 = 12;
var58 = standard___standard__NativeString___to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
var59 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var59 = array_instance Array[Object] */
var60 = 2;
var61 = NEW_standard__NativeArray(var60, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var61)->values[0] = (val*) var55;
((struct instance_standard__NativeArray*)var61)->values[1] = (val*) var_filename;
{
((void (*)(val* self, val* p0, long p1))(var59->class->vft[COLOR_standard__array__Array__with_native]))(var59, var61, var60) /* with_native on <var59:Array[Object]>*/;
}
}
{
var62 = ((val* (*)(val* self))(var59->class->vft[COLOR_standard__string__Object__to_s]))(var59) /* to_s on <var59:Array[Object]>*/;
}
var63 = 2;
{
nit___nit__ToolContext___info(var51, var62, var63); /* Direct call toolcontext#ToolContext#info on <var51:ToolContext>*/
}
var64 = NEW_standard__IFStream(&type_standard__IFStream);
{
standard___standard__IFStream___open(var64, var_filename); /* Direct call file#IFStream#open on <var64:IFStream>*/
}
var_file = var64;
var65 = NEW_nit__Lexer(&type_nit__Lexer);
var66 = NEW_nit__SourceFile(&type_nit__SourceFile);
{
((void (*)(val* self, val* p0))(var66->class->vft[COLOR_nit__location__SourceFile__filename_61d]))(var66, var_filename) /* filename= on <var66:SourceFile>*/;
}
{
((void (*)(val* self, val* p0))(var66->class->vft[COLOR_nit__location__SourceFile__stream_61d]))(var66, var_file) /* stream= on <var66:SourceFile>*/;
}
{
((void (*)(val* self))(var66->class->vft[COLOR_standard__kernel__Object__init]))(var66) /* init on <var66:SourceFile>*/;
}
{
((void (*)(val* self, val* p0))(var65->class->vft[COLOR_nit__lexer_work__Lexer__file_61d]))(var65, var66) /* file= on <var65:Lexer>*/;
}
{
((void (*)(val* self))(var65->class->vft[COLOR_standard__kernel__Object__init]))(var65) /* init on <var65:Lexer>*/;
}
var_lexer = var65;
var67 = NEW_nit__Parser(&type_nit__Parser);
{
((void (*)(val* self, val* p0))(var67->class->vft[COLOR_nit__parser_work__Parser__lexer_61d]))(var67, var_lexer) /* lexer= on <var67:Parser>*/;
}
{
((void (*)(val* self))(var67->class->vft[COLOR_standard__kernel__Object__init]))(var67) /* init on <var67:Parser>*/;
}
var_parser = var67;
{
var68 = nit___nit__Parser___parse(var_parser);
}
var_tree = var68;
{
standard___standard__IFStream___standard__stream__IOS__close(var_file); /* Direct call file#IFStream#close on <var_file:IFStream>*/
}
{
{ /* Inline parser_nodes#Start#n_base (var_tree) on <var_tree:Start> */
var71 = var_tree->attrs[COLOR_nit__parser_nodes__Start___n_base].val; /* _n_base on <var_tree:Start> */
var69 = var71;
RET_LABEL70:(void)0;
}
}
var_nmodule = var69;
var72 = NULL;
if (var_nmodule == NULL) {
var73 = 1; /* is null */
} else {
var73 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nmodule,var72) on <var_nmodule:nullable AModule> */
var_other76 = var72;
{
{ /* Inline kernel#Object#is_same_instance (var_nmodule,var_other76) on <var_nmodule:nullable AModule(AModule)> */
var79 = var_nmodule == var_other76;
var77 = var79;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
}
var74 = var77;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
var73 = var74;
}
if (var73){
{
{ /* Inline parser_nodes#Start#n_eof (var_tree) on <var_tree:Start> */
var82 = var_tree->attrs[COLOR_nit__parser_nodes__Start___n_eof].val; /* _n_eof on <var_tree:Start> */
if (unlikely(var82 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_eof");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2601);
show_backtrace(1);
}
var80 = var82;
RET_LABEL81:(void)0;
}
}
var_neof = var80;
/* <var_neof:EOF> isa AError */
cltype = type_nit__AError.color;
idtype = type_nit__AError.id;
if(cltype >= var_neof->type->table_size) {
var83 = 0;
} else {
var83 = var_neof->type->type_table[cltype] == idtype;
}
if (unlikely(!var83)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 443);
show_backtrace(1);
}
{
{ /* Inline lexer_work#AError#message (var_neof) on <var_neof:EOF(AError)> */
var86 = var_neof->attrs[COLOR_nit__lexer_work__AError___message].val; /* _message on <var_neof:EOF(AError)> */
if (unlikely(var86 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _message");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__lexer_work, 50);
show_backtrace(1);
}
var84 = var86;
RET_LABEL85:(void)0;
}
}
{
nit___nit__ModelBuilder___error(self, var_neof, var84); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
var87 = NULL;
var = var87;
goto RET_LABEL;
} else {
}
var = var_nmodule;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#load_module for (self: ModelBuilder, String): nullable AModule */
val* nit__loader___ModelBuilder___load_module(val* self, val* p0) {
val* var /* : nullable AModule */;
val* var_filename /* var filename: String */;
val* var1 /* : nullable ModulePath */;
val* var_file /* var file: nullable ModulePath */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : ToolContext */;
val* var11 /* : ToolContext */;
val* var12 /* : null */;
static val* varonce;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : FlatString */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : FlatString */;
val* var22 /* : Array[Object] */;
long var23 /* : Int */;
val* var24 /* : NativeArray[Object] */;
val* var25 /* : String */;
val* var26 /* : null */;
val* var27 /* : nullable MModule */;
val* var29 /* : nullable MModule */;
val* var_mmodule /* var mmodule: nullable MModule */;
val* var30 /* : null */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
val* var_other34 /* var other: nullable Object */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
val* var37 /* : HashMap[MModule, AModule] */;
val* var39 /* : HashMap[MModule, AModule] */;
val* var40 /* : nullable Object */;
val* var41 /* : String */;
val* var43 /* : String */;
val* var44 /* : nullable AModule */;
val* var_nmodule /* var nmodule: nullable AModule */;
val* var45 /* : null */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
val* var52 /* : null */;
val* var53 /* : MGroup */;
val* var55 /* : MGroup */;
val* var56 /* : String */;
val* var58 /* : String */;
val* var59 /* : nullable MModule */;
val* var60 /* : null */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
val* var67 /* : null */;
var_filename = p0;
{
var1 = nit__loader___ModelBuilder___identify_file(self, var_filename);
}
var_file = var1;
var2 = NULL;
if (var_file == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_file,var2) on <var_file:nullable ModulePath> */
var_other = var2;
{
{ /* Inline kernel#Object#is_same_instance (var_file,var_other) on <var_file:nullable ModulePath(ModulePath)> */
var8 = var_file == var_other;
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
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var11 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var12 = NULL;
if (varonce) {
var13 = varonce;
} else {
var14 = "Error: cannot find module `";
var15 = 27;
var16 = standard___standard__NativeString___to_s_with_length(var14, var15);
var13 = var16;
varonce = var13;
}
if (varonce17) {
var18 = varonce17;
} else {
var19 = "`.";
var20 = 2;
var21 = standard___standard__NativeString___to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
var22 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var22 = array_instance Array[Object] */
var23 = 3;
var24 = NEW_standard__NativeArray(var23, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var24)->values[0] = (val*) var13;
((struct instance_standard__NativeArray*)var24)->values[1] = (val*) var_filename;
((struct instance_standard__NativeArray*)var24)->values[2] = (val*) var18;
{
((void (*)(val* self, val* p0, long p1))(var22->class->vft[COLOR_standard__array__Array__with_native]))(var22, var24, var23) /* with_native on <var22:Array[Object]>*/;
}
}
{
var25 = ((val* (*)(val* self))(var22->class->vft[COLOR_standard__string__Object__to_s]))(var22) /* to_s on <var22:Array[Object]>*/;
}
{
nit___nit__ToolContext___error(var9, var12, var25); /* Direct call toolcontext#ToolContext#error on <var9:ToolContext>*/
}
var26 = NULL;
var = var26;
goto RET_LABEL;
} else {
}
{
{ /* Inline loader#ModulePath#mmodule (var_file) on <var_file:nullable ModulePath(ModulePath)> */
var29 = var_file->attrs[COLOR_nit__loader__ModulePath___mmodule].val; /* _mmodule on <var_file:nullable ModulePath(ModulePath)> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_mmodule = var27;
var30 = NULL;
if (var_mmodule == NULL) {
var31 = 0; /* is null */
} else {
var31 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mmodule,var30) on <var_mmodule:nullable MModule> */
var_other34 = var30;
{
var35 = ((short int (*)(val* self, val* p0))(var_mmodule->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mmodule, var_other34) /* == on <var_mmodule:nullable MModule(MModule)>*/;
}
var36 = !var35;
var32 = var36;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
var31 = var32;
}
if (var31){
{
{ /* Inline loader#ModelBuilder#mmodule2nmodule (self) on <self:ModelBuilder> */
var39 = self->attrs[COLOR_nit__loader__ModelBuilder___mmodule2nmodule].val; /* _mmodule2nmodule on <self:ModelBuilder> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule2nmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 641);
show_backtrace(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
var40 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var37, var_mmodule);
}
var = var40;
goto RET_LABEL;
} else {
}
{
{ /* Inline loader#ModulePath#filepath (var_file) on <var_file:nullable ModulePath(ModulePath)> */
var43 = var_file->attrs[COLOR_nit__loader__ModulePath___filepath].val; /* _filepath on <var_file:nullable ModulePath(ModulePath)> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filepath");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 662);
show_backtrace(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
var44 = nit__loader___ModelBuilder___load_module_ast(self, var41);
}
var_nmodule = var44;
var45 = NULL;
if (var_nmodule == NULL) {
var46 = 1; /* is null */
} else {
var46 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nmodule,var45) on <var_nmodule:nullable AModule> */
var_other = var45;
{
{ /* Inline kernel#Object#is_same_instance (var_nmodule,var_other) on <var_nmodule:nullable AModule(AModule)> */
var51 = var_nmodule == var_other;
var49 = var51;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
var46 = var47;
}
if (var46){
var52 = NULL;
var = var52;
goto RET_LABEL;
} else {
}
{
{ /* Inline loader#ModulePath#mgroup (var_file) on <var_file:nullable ModulePath(ModulePath)> */
var55 = var_file->attrs[COLOR_nit__loader__ModulePath___mgroup].val; /* _mgroup on <var_file:nullable ModulePath(ModulePath)> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroup");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 665);
show_backtrace(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
{ /* Inline loader#ModulePath#name (var_file) on <var_file:nullable ModulePath(ModulePath)> */
var58 = var_file->attrs[COLOR_nit__loader__ModulePath___name].val; /* _name on <var_file:nullable ModulePath(ModulePath)> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 658);
show_backtrace(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
var59 = nit__loader___ModelBuilder___build_a_mmodule(self, var53, var56, var_nmodule);
}
var_mmodule = var59;
var60 = NULL;
if (var_mmodule == NULL) {
var61 = 1; /* is null */
} else {
var61 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mmodule,var60) on <var_mmodule:nullable MModule> */
var_other = var60;
{
{ /* Inline kernel#Object#is_same_instance (var_mmodule,var_other) on <var_mmodule:nullable MModule(MModule)> */
var66 = var_mmodule == var_other;
var64 = var66;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
var62 = var64;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
var61 = var62;
}
if (var61){
var67 = NULL;
var = var67;
goto RET_LABEL;
} else {
}
{
{ /* Inline loader#ModulePath#mmodule= (var_file,var_mmodule) on <var_file:nullable ModulePath(ModulePath)> */
var_file->attrs[COLOR_nit__loader__ModulePath___mmodule].val = var_mmodule; /* _mmodule on <var_file:nullable ModulePath(ModulePath)> */
RET_LABEL68:(void)0;
}
}
var = var_nmodule;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#build_a_mmodule for (self: ModelBuilder, nullable MGroup, String, AModule): nullable MModule */
val* nit__loader___ModelBuilder___build_a_mmodule(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MModule */;
val* var_mgroup /* var mgroup: nullable MGroup */;
val* var_mod_name /* var mod_name: String */;
val* var_nmodule /* var nmodule: AModule */;
val* var1 /* : nullable AModuledecl */;
val* var3 /* : nullable AModuledecl */;
val* var_decl /* var decl: nullable AModuledecl */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : AModuleName */;
val* var12 /* : AModuleName */;
val* var13 /* : TId */;
val* var15 /* : TId */;
val* var16 /* : String */;
val* var_decl_name /* var decl_name: String */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : AModuleName */;
val* var23 /* : AModuleName */;
static val* varonce;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : FlatString */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : FlatString */;
val* var33 /* : Array[Object] */;
long var34 /* : Int */;
val* var35 /* : NativeArray[Object] */;
val* var36 /* : String */;
val* var37 /* : null */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
val* var43 /* : Model */;
val* var45 /* : Model */;
val* var46 /* : nullable Array[MModule] */;
val* var_others /* var others: nullable Array[MModule] */;
val* var47 /* : null */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
val* var_ /* var : Array[MModule] */;
val* var53 /* : ArrayIterator[nullable Object] */;
val* var_54 /* var : ArrayIterator[MModule] */;
short int var55 /* : Bool */;
val* var56 /* : nullable Object */;
val* var_other57 /* var other: MModule */;
short int var58 /* : Bool */;
val* var59 /* : nullable MGroup */;
val* var61 /* : nullable MGroup */;
val* var62 /* : null */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
short int var_68 /* var : Bool */;
val* var69 /* : nullable MGroup */;
val* var71 /* : nullable MGroup */;
val* var72 /* : MProject */;
val* var74 /* : MProject */;
val* var75 /* : MProject */;
val* var77 /* : MProject */;
short int var78 /* : Bool */;
val* var_other80 /* var other: nullable Object */;
short int var81 /* : Bool */;
short int var83 /* : Bool */;
val* var84 /* : null */;
short int var85 /* : Bool */;
short int var86 /* : Bool */;
short int var88 /* : Bool */;
short int var90 /* : Bool */;
val* var_node /* var node: ANode */;
val* var91 /* : AModuleName */;
val* var93 /* : AModuleName */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : NativeString */;
long var97 /* : Int */;
val* var98 /* : FlatString */;
val* var99 /* : String */;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : NativeString */;
long var103 /* : Int */;
val* var104 /* : FlatString */;
val* var105 /* : Location */;
val* var107 /* : Location */;
val* var108 /* : Array[Object] */;
long var109 /* : Int */;
val* var110 /* : NativeArray[Object] */;
val* var111 /* : String */;
val* var113 /* : MModule */;
val* var114 /* : Model */;
val* var116 /* : Model */;
val* var117 /* : Location */;
val* var119 /* : Location */;
val* var_mmodule /* var mmodule: MModule */;
val* var121 /* : Array[AModule] */;
val* var123 /* : Array[AModule] */;
val* var124 /* : HashMap[MModule, AModule] */;
val* var126 /* : HashMap[MModule, AModule] */;
val* var127 /* : Location */;
val* var129 /* : Location */;
val* var130 /* : nullable SourceFile */;
val* var132 /* : nullable SourceFile */;
val* var_source /* var source: nullable SourceFile */;
val* var133 /* : null */;
short int var134 /* : Bool */;
short int var135 /* : Bool */;
short int var137 /* : Bool */;
short int var138 /* : Bool */;
val* var139 /* : nullable MModule */;
val* var141 /* : nullable MModule */;
val* var142 /* : null */;
short int var143 /* : Bool */;
short int var144 /* : Bool */;
short int var146 /* : Bool */;
short int var148 /* : Bool */;
val* var150 /* : null */;
short int var151 /* : Bool */;
short int var152 /* : Bool */;
short int var154 /* : Bool */;
short int var155 /* : Bool */;
val* var156 /* : nullable ADoc */;
val* var158 /* : nullable ADoc */;
val* var_ndoc /* var ndoc: nullable ADoc */;
val* var159 /* : null */;
short int var160 /* : Bool */;
short int var161 /* : Bool */;
short int var163 /* : Bool */;
short int var164 /* : Bool */;
val* var165 /* : MDoc */;
val* var_mdoc /* var mdoc: MDoc */;
static val* varonce168;
val* var169 /* : String */;
char* var170 /* : NativeString */;
long var171 /* : Int */;
val* var172 /* : FlatString */;
static val* varonce173;
val* var174 /* : String */;
char* var175 /* : NativeString */;
long var176 /* : Int */;
val* var177 /* : FlatString */;
static val* varonce178;
val* var179 /* : String */;
char* var180 /* : NativeString */;
long var181 /* : Int */;
val* var182 /* : FlatString */;
val* var183 /* : Array[Object] */;
long var184 /* : Int */;
val* var185 /* : NativeArray[Object] */;
val* var186 /* : String */;
static val* varonce187;
val* var188 /* : String */;
char* var189 /* : NativeString */;
long var190 /* : Int */;
val* var191 /* : FlatString */;
val* var192 /* : Array[AAnnotation] */;
short int var193 /* : Bool */;
short int var194 /* : Bool */;
var_mgroup = p0;
var_mod_name = p1;
var_nmodule = p2;
{
{ /* Inline parser_nodes#AModule#n_moduledecl (var_nmodule) on <var_nmodule:AModule> */
var3 = var_nmodule->attrs[COLOR_nit__parser_nodes__AModule___n_moduledecl].val; /* _n_moduledecl on <var_nmodule:AModule> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_decl = var1;
var4 = NULL;
if (var_decl == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_decl,var4) on <var_decl:nullable AModuledecl> */
var_other = var4;
{
var8 = ((short int (*)(val* self, val* p0))(var_decl->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_decl, var_other) /* == on <var_decl:nullable AModuledecl(AModuledecl)>*/;
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
{ /* Inline parser_nodes#AModuledecl#n_name (var_decl) on <var_decl:nullable AModuledecl(AModuledecl)> */
var12 = var_decl->attrs[COLOR_nit__parser_nodes__AModuledecl___n_name].val; /* _n_name on <var_decl:nullable AModuledecl(AModuledecl)> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 943);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline parser_nodes#AModuleName#n_id (var10) on <var10:AModuleName> */
var15 = var10->attrs[COLOR_nit__parser_nodes__AModuleName___n_id].val; /* _n_id on <var10:AModuleName> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2470);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = nit__lexer_work___Token___text(var13);
}
var_decl_name = var16;
{
{ /* Inline kernel#Object#!= (var_decl_name,var_mod_name) on <var_decl_name:String> */
var_other = var_mod_name;
{
var19 = ((short int (*)(val* self, val* p0))(var_decl_name->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_decl_name, var_other) /* == on <var_decl_name:String>*/;
}
var20 = !var19;
var17 = var20;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
if (var17){
{
{ /* Inline parser_nodes#AModuledecl#n_name (var_decl) on <var_decl:nullable AModuledecl(AModuledecl)> */
var23 = var_decl->attrs[COLOR_nit__parser_nodes__AModuledecl___n_name].val; /* _n_name on <var_decl:nullable AModuledecl(AModuledecl)> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 943);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (varonce) {
var24 = varonce;
} else {
var25 = "Error: module name missmatch; declared ";
var26 = 39;
var27 = standard___standard__NativeString___to_s_with_length(var25, var26);
var24 = var27;
varonce = var24;
}
if (varonce28) {
var29 = varonce28;
} else {
var30 = " file named ";
var31 = 12;
var32 = standard___standard__NativeString___to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
var33 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var33 = array_instance Array[Object] */
var34 = 4;
var35 = NEW_standard__NativeArray(var34, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var35)->values[0] = (val*) var24;
((struct instance_standard__NativeArray*)var35)->values[1] = (val*) var_decl_name;
((struct instance_standard__NativeArray*)var35)->values[2] = (val*) var29;
((struct instance_standard__NativeArray*)var35)->values[3] = (val*) var_mod_name;
{
((void (*)(val* self, val* p0, long p1))(var33->class->vft[COLOR_standard__array__Array__with_native]))(var33, var35, var34) /* with_native on <var33:Array[Object]>*/;
}
}
{
var36 = ((val* (*)(val* self))(var33->class->vft[COLOR_standard__string__Object__to_s]))(var33) /* to_s on <var33:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(self, var21, var36); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
} else {
}
var37 = NULL;
if (var_mgroup == NULL) {
var38 = 0; /* is null */
} else {
var38 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mgroup,var37) on <var_mgroup:nullable MGroup> */
var_other = var37;
{
var41 = ((short int (*)(val* self, val* p0))(var_mgroup->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mgroup, var_other) /* == on <var_mgroup:nullable MGroup(MGroup)>*/;
}
var42 = !var41;
var39 = var42;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
var38 = var39;
}
if (var38){
{
{ /* Inline modelbuilder_base#ModelBuilder#model (self) on <self:ModelBuilder> */
var45 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 44);
show_backtrace(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
var46 = nit__mmodule___Model___get_mmodules_by_name(var43, var_mod_name);
}
var_others = var46;
var47 = NULL;
if (var_others == NULL) {
var48 = 0; /* is null */
} else {
var48 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_others,var47) on <var_others:nullable Array[MModule]> */
var_other = var47;
{
var51 = ((short int (*)(val* self, val* p0))(var_others->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_others, var_other) /* == on <var_others:nullable Array[MModule](Array[MModule])>*/;
}
var52 = !var51;
var49 = var52;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
var48 = var49;
}
if (var48){
var_ = var_others;
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
var_other57 = var56;
{
{ /* Inline mmodule#MModule#mgroup (var_other57) on <var_other57:MModule> */
var61 = var_other57->attrs[COLOR_nit__mmodule__MModule___mgroup].val; /* _mgroup on <var_other57:MModule> */
var59 = var61;
RET_LABEL60:(void)0;
}
}
var62 = NULL;
if (var59 == NULL) {
var63 = 0; /* is null */
} else {
var63 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var59,var62) on <var59:nullable MGroup> */
var_other = var62;
{
var66 = ((short int (*)(val* self, val* p0))(var59->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var59, var_other) /* == on <var59:nullable MGroup(MGroup)>*/;
}
var67 = !var66;
var64 = var67;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
var63 = var64;
}
var_68 = var63;
if (var63){
{
{ /* Inline mmodule#MModule#mgroup (var_other57) on <var_other57:MModule> */
var71 = var_other57->attrs[COLOR_nit__mmodule__MModule___mgroup].val; /* _mgroup on <var_other57:MModule> */
var69 = var71;
RET_LABEL70:(void)0;
}
}
if (var69 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 528);
show_backtrace(1);
} else {
{ /* Inline mproject#MGroup#mproject (var69) on <var69:nullable MGroup> */
if (unlikely(var69 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 69);
show_backtrace(1);
}
var74 = var69->attrs[COLOR_nit__mproject__MGroup___mproject].val; /* _mproject on <var69:nullable MGroup> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproject");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 69);
show_backtrace(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
{
{ /* Inline mproject#MGroup#mproject (var_mgroup) on <var_mgroup:nullable MGroup(MGroup)> */
var77 = var_mgroup->attrs[COLOR_nit__mproject__MGroup___mproject].val; /* _mproject on <var_mgroup:nullable MGroup(MGroup)> */
if (unlikely(var77 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproject");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 69);
show_backtrace(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var72,var75) on <var72:MProject> */
var_other80 = var75;
{
{ /* Inline kernel#Object#is_same_instance (var72,var_other80) on <var72:MProject> */
var83 = var72 == var_other80;
var81 = var83;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
}
var78 = var81;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
}
var58 = var78;
} else {
var58 = var_68;
}
if (var58){
var84 = NULL;
if (var_decl == NULL) {
var85 = 1; /* is null */
} else {
var85 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_decl,var84) on <var_decl:nullable AModuledecl> */
var_other80 = var84;
{
{ /* Inline kernel#Object#is_same_instance (var_decl,var_other80) on <var_decl:nullable AModuledecl(AModuledecl)> */
var90 = var_decl == var_other80;
var88 = var90;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
}
var86 = var88;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
var85 = var86;
}
if (var85){
var_node = var_nmodule;
} else {
{
{ /* Inline parser_nodes#AModuledecl#n_name (var_decl) on <var_decl:nullable AModuledecl(AModuledecl)> */
var93 = var_decl->attrs[COLOR_nit__parser_nodes__AModuledecl___n_name].val; /* _n_name on <var_decl:nullable AModuledecl(AModuledecl)> */
if (unlikely(var93 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 943);
show_backtrace(1);
}
var91 = var93;
RET_LABEL92:(void)0;
}
}
var_node = var91;
}
if (varonce94) {
var95 = varonce94;
} else {
var96 = "Error: A module named `";
var97 = 23;
var98 = standard___standard__NativeString___to_s_with_length(var96, var97);
var95 = var98;
varonce94 = var95;
}
{
var99 = nit___nit__MModule___nit__model_base__MEntity__full_name(var_other57);
}
if (varonce100) {
var101 = varonce100;
} else {
var102 = "` already exists at ";
var103 = 20;
var104 = standard___standard__NativeString___to_s_with_length(var102, var103);
var101 = var104;
varonce100 = var101;
}
{
{ /* Inline mmodule#MModule#location (var_other57) on <var_other57:MModule> */
var107 = var_other57->attrs[COLOR_nit__mmodule__MModule___location].val; /* _location on <var_other57:MModule> */
if (unlikely(var107 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 90);
show_backtrace(1);
}
var105 = var107;
RET_LABEL106:(void)0;
}
}
var108 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var108 = array_instance Array[Object] */
var109 = 4;
var110 = NEW_standard__NativeArray(var109, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var110)->values[0] = (val*) var95;
((struct instance_standard__NativeArray*)var110)->values[1] = (val*) var99;
((struct instance_standard__NativeArray*)var110)->values[2] = (val*) var101;
((struct instance_standard__NativeArray*)var110)->values[3] = (val*) var105;
{
((void (*)(val* self, val* p0, long p1))(var108->class->vft[COLOR_standard__array__Array__with_native]))(var108, var110, var109) /* with_native on <var108:Array[Object]>*/;
}
}
{
var111 = ((val* (*)(val* self))(var108->class->vft[COLOR_standard__string__Object__to_s]))(var108) /* to_s on <var108:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(self, var_node, var111); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto BREAK_label;
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_54); /* Direct call array#ArrayIterator#next on <var_54:ArrayIterator[MModule]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_54) on <var_54:ArrayIterator[MModule]> */
RET_LABEL112:(void)0;
}
}
} else {
}
} else {
}
var113 = NEW_nit__MModule(&type_nit__MModule);
{
{ /* Inline modelbuilder_base#ModelBuilder#model (self) on <self:ModelBuilder> */
var116 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var116 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 44);
show_backtrace(1);
}
var114 = var116;
RET_LABEL115:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (var_nmodule) on <var_nmodule:AModule> */
var119 = var_nmodule->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var_nmodule:AModule> */
if (unlikely(var119 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 23);
show_backtrace(1);
}
var117 = var119;
RET_LABEL118:(void)0;
}
}
{
((void (*)(val* self, val* p0))(var113->class->vft[COLOR_nit__mmodule__MModule__model_61d]))(var113, var114) /* model= on <var113:MModule>*/;
}
{
((void (*)(val* self, val* p0))(var113->class->vft[COLOR_nit__mmodule__MModule__mgroup_61d]))(var113, var_mgroup) /* mgroup= on <var113:MModule>*/;
}
{
((void (*)(val* self, val* p0))(var113->class->vft[COLOR_nit__mmodule__MModule__name_61d]))(var113, var_mod_name) /* name= on <var113:MModule>*/;
}
{
((void (*)(val* self, val* p0))(var113->class->vft[COLOR_nit__mmodule__MModule__location_61d]))(var113, var117) /* location= on <var113:MModule>*/;
}
{
((void (*)(val* self))(var113->class->vft[COLOR_standard__kernel__Object__init]))(var113) /* init on <var113:MModule>*/;
}
var_mmodule = var113;
{
{ /* Inline loader#AModule#mmodule= (var_nmodule,var_mmodule) on <var_nmodule:AModule> */
var_nmodule->attrs[COLOR_nit__loader__AModule___mmodule].val = var_mmodule; /* _mmodule on <var_nmodule:AModule> */
RET_LABEL120:(void)0;
}
}
{
{ /* Inline loader#ModelBuilder#nmodules (self) on <self:ModelBuilder> */
var123 = self->attrs[COLOR_nit__loader__ModelBuilder___nmodules].val; /* _nmodules on <self:ModelBuilder> */
if (unlikely(var123 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _nmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 638);
show_backtrace(1);
}
var121 = var123;
RET_LABEL122:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var121, var_nmodule); /* Direct call array#Array#add on <var121:Array[AModule]>*/
}
{
{ /* Inline loader#ModelBuilder#mmodule2nmodule (self) on <self:ModelBuilder> */
var126 = self->attrs[COLOR_nit__loader__ModelBuilder___mmodule2nmodule].val; /* _mmodule2nmodule on <self:ModelBuilder> */
if (unlikely(var126 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule2nmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 641);
show_backtrace(1);
}
var124 = var126;
RET_LABEL125:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var124, var_mmodule, var_nmodule); /* Direct call hash_collection#HashMap#[]= on <var124:HashMap[MModule, AModule]>*/
}
{
{ /* Inline parser_nodes#ANode#location (var_nmodule) on <var_nmodule:AModule> */
var129 = var_nmodule->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var_nmodule:AModule> */
if (unlikely(var129 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 23);
show_backtrace(1);
}
var127 = var129;
RET_LABEL128:(void)0;
}
}
{
{ /* Inline location#Location#file (var127) on <var127:Location> */
var132 = var127->attrs[COLOR_nit__location__Location___file].val; /* _file on <var127:Location> */
var130 = var132;
RET_LABEL131:(void)0;
}
}
var_source = var130;
var133 = NULL;
if (var_source == NULL) {
var134 = 0; /* is null */
} else {
var134 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_source,var133) on <var_source:nullable SourceFile> */
var_other = var133;
{
var137 = ((short int (*)(val* self, val* p0))(var_source->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_source, var_other) /* == on <var_source:nullable SourceFile(SourceFile)>*/;
}
var138 = !var137;
var135 = var138;
goto RET_LABEL136;
RET_LABEL136:(void)0;
}
var134 = var135;
}
if (var134){
{
{ /* Inline loader#SourceFile#mmodule (var_source) on <var_source:nullable SourceFile(SourceFile)> */
var141 = var_source->attrs[COLOR_nit__loader__SourceFile___mmodule].val; /* _mmodule on <var_source:nullable SourceFile(SourceFile)> */
var139 = var141;
RET_LABEL140:(void)0;
}
}
var142 = NULL;
if (var139 == NULL) {
var143 = 1; /* is null */
} else {
var143 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var139,var142) on <var139:nullable MModule> */
var_other80 = var142;
{
{ /* Inline kernel#Object#is_same_instance (var139,var_other80) on <var139:nullable MModule(MModule)> */
var148 = var139 == var_other80;
var146 = var148;
goto RET_LABEL147;
RET_LABEL147:(void)0;
}
}
var144 = var146;
goto RET_LABEL145;
RET_LABEL145:(void)0;
}
var143 = var144;
}
if (unlikely(!var143)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 545);
show_backtrace(1);
}
{
{ /* Inline loader#SourceFile#mmodule= (var_source,var_mmodule) on <var_source:nullable SourceFile(SourceFile)> */
var_source->attrs[COLOR_nit__loader__SourceFile___mmodule].val = var_mmodule; /* _mmodule on <var_source:nullable SourceFile(SourceFile)> */
RET_LABEL149:(void)0;
}
}
} else {
}
var150 = NULL;
if (var_decl == NULL) {
var151 = 0; /* is null */
} else {
var151 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_decl,var150) on <var_decl:nullable AModuledecl> */
var_other = var150;
{
var154 = ((short int (*)(val* self, val* p0))(var_decl->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_decl, var_other) /* == on <var_decl:nullable AModuledecl(AModuledecl)>*/;
}
var155 = !var154;
var152 = var155;
goto RET_LABEL153;
RET_LABEL153:(void)0;
}
var151 = var152;
}
if (var151){
{
{ /* Inline parser_nodes#ADefinition#n_doc (var_decl) on <var_decl:nullable AModuledecl(AModuledecl)> */
var158 = var_decl->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <var_decl:nullable AModuledecl(AModuledecl)> */
var156 = var158;
RET_LABEL157:(void)0;
}
}
var_ndoc = var156;
var159 = NULL;
if (var_ndoc == NULL) {
var160 = 0; /* is null */
} else {
var160 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ndoc,var159) on <var_ndoc:nullable ADoc> */
var_other = var159;
{
var163 = ((short int (*)(val* self, val* p0))(var_ndoc->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ndoc, var_other) /* == on <var_ndoc:nullable ADoc(ADoc)>*/;
}
var164 = !var163;
var161 = var164;
goto RET_LABEL162;
RET_LABEL162:(void)0;
}
var160 = var161;
}
if (var160){
{
var165 = nit__modelbuilder_base___ADoc___to_mdoc(var_ndoc);
}
var_mdoc = var165;
{
{ /* Inline mdoc#MEntity#mdoc= (var_mmodule,var_mdoc) on <var_mmodule:MModule> */
var_mmodule->attrs[COLOR_nit__mdoc__MEntity___mdoc].val = var_mdoc; /* _mdoc on <var_mmodule:MModule> */
RET_LABEL166:(void)0;
}
}
{
{ /* Inline mdoc#MDoc#original_mentity= (var_mdoc,var_mmodule) on <var_mdoc:MDoc> */
var_mdoc->attrs[COLOR_nit__mdoc__MDoc___original_mentity].val = var_mmodule; /* _original_mentity on <var_mdoc:MDoc> */
RET_LABEL167:(void)0;
}
}
} else {
if (varonce168) {
var169 = varonce168;
} else {
var170 = "missing-doc";
var171 = 11;
var172 = standard___standard__NativeString___to_s_with_length(var170, var171);
var169 = var172;
varonce168 = var169;
}
if (varonce173) {
var174 = varonce173;
} else {
var175 = "Documentation warning: Undocumented module `";
var176 = 44;
var177 = standard___standard__NativeString___to_s_with_length(var175, var176);
var174 = var177;
varonce173 = var174;
}
if (varonce178) {
var179 = varonce178;
} else {
var180 = "`";
var181 = 1;
var182 = standard___standard__NativeString___to_s_with_length(var180, var181);
var179 = var182;
varonce178 = var179;
}
var183 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var183 = array_instance Array[Object] */
var184 = 3;
var185 = NEW_standard__NativeArray(var184, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var185)->values[0] = (val*) var174;
((struct instance_standard__NativeArray*)var185)->values[1] = (val*) var_mmodule;
((struct instance_standard__NativeArray*)var185)->values[2] = (val*) var179;
{
((void (*)(val* self, val* p0, long p1))(var183->class->vft[COLOR_standard__array__Array__with_native]))(var183, var185, var184) /* with_native on <var183:Array[Object]>*/;
}
}
{
var186 = ((val* (*)(val* self))(var183->class->vft[COLOR_standard__string__Object__to_s]))(var183) /* to_s on <var183:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___advice(self, var_decl, var169, var186); /* Direct call modelbuilder_base#ModelBuilder#advice on <self:ModelBuilder>*/
}
}
if (varonce187) {
var188 = varonce187;
} else {
var189 = "test_suite";
var190 = 10;
var191 = standard___standard__NativeString___to_s_with_length(var189, var190);
var188 = var191;
varonce187 = var188;
}
{
var192 = nit___nit__Prod___get_annotations(var_decl, var188);
}
{
var193 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var192);
}
var194 = !var193;
{
{ /* Inline mmodule#MModule#is_test_suite= (var_mmodule,var194) on <var_mmodule:MModule> */
var_mmodule->attrs[COLOR_nit__mmodule__MModule___is_test_suite].s = var194; /* _is_test_suite on <var_mmodule:MModule> */
RET_LABEL195:(void)0;
}
}
} else {
}
var = var_mmodule;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#build_module_importation for (self: ModelBuilder, AModule) */
void nit__loader___ModelBuilder___build_module_importation(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
short int var /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var5 /* : nullable MModule */;
val* var7 /* : nullable MModule */;
val* var_mmodule /* var mmodule: MModule */;
short int var8 /* : Bool */;
short int var_stdimport /* var stdimport: Bool */;
val* var9 /* : Array[MModule] */;
val* var_imported_modules /* var imported_modules: Array[MModule] */;
val* var10 /* : ANodes[AImport] */;
val* var12 /* : ANodes[AImport] */;
val* var_ /* var : ANodes[AImport] */;
val* var13 /* : Iterator[ANode] */;
val* var_14 /* var : Iterator[AImport] */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
val* var_aimport /* var aimport: AImport */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
int cltype;
int idtype;
short int var19 /* : Bool */;
val* var20 /* : nullable MGroup */;
val* var22 /* : nullable MGroup */;
val* var_mgroup /* var mgroup: nullable MGroup */;
val* var23 /* : AModuleName */;
val* var25 /* : AModuleName */;
val* var26 /* : nullable TQuad */;
val* var28 /* : nullable TQuad */;
val* var29 /* : null */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
val* var35 /* : null */;
val* var36 /* : AModuleName */;
val* var38 /* : AModuleName */;
val* var39 /* : ANodes[TId] */;
val* var41 /* : ANodes[TId] */;
val* var_42 /* var : ANodes[TId] */;
val* var43 /* : Iterator[ANode] */;
val* var_44 /* var : Iterator[TId] */;
short int var45 /* : Bool */;
val* var46 /* : nullable Object */;
val* var_grp /* var grp: TId */;
val* var47 /* : String */;
val* var48 /* : nullable ModulePath */;
val* var_path /* var path: nullable ModulePath */;
val* var49 /* : null */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
val* var_other53 /* var other: nullable Object */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
val* var57 /* : MGroup */;
val* var59 /* : MGroup */;
val* var62 /* : AModuleName */;
val* var64 /* : AModuleName */;
val* var65 /* : TId */;
val* var67 /* : TId */;
val* var68 /* : String */;
val* var_mod_name /* var mod_name: String */;
val* var69 /* : AModuleName */;
val* var71 /* : AModuleName */;
val* var72 /* : nullable MModule */;
val* var_sup /* var sup: nullable MModule */;
val* var73 /* : null */;
short int var74 /* : Bool */;
short int var75 /* : Bool */;
short int var77 /* : Bool */;
short int var79 /* : Bool */;
val* var81 /* : AVisibility */;
val* var83 /* : AVisibility */;
val* var84 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: MVisibility */;
val* var85 /* : MVisibility */;
short int var86 /* : Bool */;
short int var88 /* : Bool */;
short int var90 /* : Bool */;
val* var91 /* : AVisibility */;
val* var93 /* : AVisibility */;
static val* varonce;
val* var94 /* : String */;
char* var95 /* : NativeString */;
long var96 /* : Int */;
val* var97 /* : FlatString */;
short int var98 /* : Bool */;
short int var100 /* : Bool */;
short int var102 /* : Bool */;
val* var103 /* : AModuleName */;
val* var105 /* : AModuleName */;
static val* varonce106;
val* var107 /* : String */;
char* var108 /* : NativeString */;
long var109 /* : Int */;
val* var110 /* : FlatString */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : NativeString */;
long var114 /* : Int */;
val* var115 /* : FlatString */;
val* var116 /* : Array[Object] */;
long var117 /* : Int */;
val* var118 /* : NativeArray[Object] */;
val* var119 /* : String */;
val* var120 /* : POSetElement[MModule] */;
val* var122 /* : POSetElement[MModule] */;
short int var123 /* : Bool */;
val* var124 /* : AModuleName */;
val* var126 /* : AModuleName */;
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
static val* varonce137;
val* var138 /* : String */;
char* var139 /* : NativeString */;
long var140 /* : Int */;
val* var141 /* : FlatString */;
val* var142 /* : Array[Object] */;
long var143 /* : Int */;
val* var144 /* : NativeArray[Object] */;
val* var145 /* : String */;
static val* varonce148;
val* var149 /* : String */;
char* var150 /* : NativeString */;
long var151 /* : Int */;
val* var152 /* : FlatString */;
val* var_mod_name153 /* var mod_name: String */;
val* var154 /* : null */;
val* var155 /* : nullable MModule */;
val* var_sup156 /* var sup: nullable MModule */;
val* var157 /* : null */;
short int var158 /* : Bool */;
short int var159 /* : Bool */;
short int var161 /* : Bool */;
short int var162 /* : Bool */;
val* var163 /* : MVisibility */;
val* var164 /* : ToolContext */;
val* var166 /* : ToolContext */;
static val* varonce167;
val* var168 /* : String */;
char* var169 /* : NativeString */;
long var170 /* : Int */;
val* var171 /* : FlatString */;
static val* varonce172;
val* var173 /* : String */;
char* var174 /* : NativeString */;
long var175 /* : Int */;
val* var176 /* : FlatString */;
val* var177 /* : String */;
val* var178 /* : Array[Object] */;
long var179 /* : Int */;
val* var180 /* : NativeArray[Object] */;
val* var181 /* : String */;
long var182 /* : Int */;
val* var183 /* : POSetElement[MModule] */;
val* var185 /* : POSetElement[MModule] */;
val* var186 /* : Collection[nullable Object] */;
val* var_187 /* var : Collection[MModule] */;
val* var188 /* : Iterator[nullable Object] */;
val* var_189 /* var : Iterator[MModule] */;
short int var190 /* : Bool */;
val* var191 /* : nullable Object */;
val* var_sup192 /* var sup: MModule */;
val* var193 /* : String */;
val* var195 /* : String */;
static val* varonce196;
val* var197 /* : String */;
char* var198 /* : NativeString */;
long var199 /* : Int */;
val* var200 /* : FlatString */;
short int var201 /* : Bool */;
val* var202 /* : MVisibility */;
val* var205 /* : POSetElement[MModule] */;
val* var207 /* : POSetElement[MModule] */;
val* var208 /* : Collection[nullable Object] */;
val* var_directs /* var directs: Collection[MModule] */;
val* var209 /* : ANodes[AImport] */;
val* var211 /* : ANodes[AImport] */;
val* var_212 /* var : ANodes[AImport] */;
val* var213 /* : Iterator[ANode] */;
val* var_214 /* var : Iterator[AImport] */;
short int var215 /* : Bool */;
val* var216 /* : nullable Object */;
val* var_nim /* var nim: AImport */;
short int var217 /* : Bool */;
int cltype218;
int idtype219;
short int var220 /* : Bool */;
val* var222 /* : nullable MModule */;
val* var224 /* : nullable MModule */;
val* var_im /* var im: nullable MModule */;
val* var225 /* : null */;
short int var226 /* : Bool */;
short int var227 /* : Bool */;
short int var229 /* : Bool */;
short int var231 /* : Bool */;
short int var232 /* : Bool */;
var_nmodule = p0;
{
{ /* Inline loader#AModule#is_importation_done (var_nmodule) on <var_nmodule:AModule> */
var2 = var_nmodule->attrs[COLOR_nit__loader__AModule___is_importation_done].s; /* _is_importation_done on <var_nmodule:AModule> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var){
goto RET_LABEL;
} else {
}
var3 = 1;
{
{ /* Inline loader#AModule#is_importation_done= (var_nmodule,var3) on <var_nmodule:AModule> */
var_nmodule->attrs[COLOR_nit__loader__AModule___is_importation_done].s = var3; /* _is_importation_done on <var_nmodule:AModule> */
RET_LABEL4:(void)0;
}
}
{
{ /* Inline loader#AModule#mmodule (var_nmodule) on <var_nmodule:AModule> */
var7 = var_nmodule->attrs[COLOR_nit__loader__AModule___mmodule].val; /* _mmodule on <var_nmodule:AModule> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 573);
show_backtrace(1);
}
var_mmodule = var5;
var8 = 1;
var_stdimport = var8;
var9 = NEW_standard__Array(&type_standard__Array__nit__MModule);
{
standard___standard__Array___standard__kernel__Object__init(var9); /* Direct call array#Array#init on <var9:Array[MModule]>*/
}
var_imported_modules = var9;
{
{ /* Inline parser_nodes#AModule#n_imports (var_nmodule) on <var_nmodule:AModule> */
var12 = var_nmodule->attrs[COLOR_nit__parser_nodes__AModule___n_imports].val; /* _n_imports on <var_nmodule:AModule> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_imports");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 913);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_ = var10;
{
var13 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_);
}
var_14 = var13;
for(;;) {
{
var15 = ((short int (*)(val* self))(var_14->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_14) /* is_ok on <var_14:Iterator[AImport]>*/;
}
if (var15){
{
var16 = ((val* (*)(val* self))(var_14->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_14) /* item on <var_14:Iterator[AImport]>*/;
}
var_aimport = var16;
var17 = 0;
var_stdimport = var17;
/* <var_aimport:AImport> isa AStdImport */
cltype = type_nit__AStdImport.color;
idtype = type_nit__AStdImport.id;
if(cltype >= var_aimport->type->table_size) {
var18 = 0;
} else {
var18 = var_aimport->type->type_table[cltype] == idtype;
}
var19 = !var18;
if (var19){
goto BREAK_label;
} else {
}
{
{ /* Inline mmodule#MModule#mgroup (var_mmodule) on <var_mmodule:MModule> */
var22 = var_mmodule->attrs[COLOR_nit__mmodule__MModule___mgroup].val; /* _mgroup on <var_mmodule:MModule> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
var_mgroup = var20;
{
{ /* Inline parser_nodes#AStdImport#n_name (var_aimport) on <var_aimport:AImport(AStdImport)> */
var25 = var_aimport->attrs[COLOR_nit__parser_nodes__AStdImport___n_name].val; /* _n_name on <var_aimport:AImport(AStdImport)> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 961);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline parser_nodes#AModuleName#n_quad (var23) on <var23:AModuleName> */
var28 = var23->attrs[COLOR_nit__parser_nodes__AModuleName___n_quad].val; /* _n_quad on <var23:AModuleName> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
var29 = NULL;
if (var26 == NULL) {
var30 = 0; /* is null */
} else {
var30 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var26,var29) on <var26:nullable TQuad> */
var_other = var29;
{
var33 = ((short int (*)(val* self, val* p0))(var26->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var26, var_other) /* == on <var26:nullable TQuad(TQuad)>*/;
}
var34 = !var33;
var31 = var34;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
var30 = var31;
}
if (var30){
var35 = NULL;
var_mgroup = var35;
} else {
}
{
{ /* Inline parser_nodes#AStdImport#n_name (var_aimport) on <var_aimport:AImport(AStdImport)> */
var38 = var_aimport->attrs[COLOR_nit__parser_nodes__AStdImport___n_name].val; /* _n_name on <var_aimport:AImport(AStdImport)> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 961);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline parser_nodes#AModuleName#n_path (var36) on <var36:AModuleName> */
var41 = var36->attrs[COLOR_nit__parser_nodes__AModuleName___n_path].val; /* _n_path on <var36:AModuleName> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2467);
show_backtrace(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
var_42 = var39;
{
var43 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_42);
}
var_44 = var43;
for(;;) {
{
var45 = ((short int (*)(val* self))(var_44->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_44) /* is_ok on <var_44:Iterator[TId]>*/;
}
if (var45){
{
var46 = ((val* (*)(val* self))(var_44->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_44) /* item on <var_44:Iterator[TId]>*/;
}
var_grp = var46;
{
var47 = nit__lexer_work___Token___text(var_grp);
}
{
var48 = nit__loader___ModelBuilder___search_mmodule_by_name(self, var_grp, var_mgroup, var47);
}
var_path = var48;
var49 = NULL;
if (var_path == NULL) {
var50 = 1; /* is null */
} else {
var50 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_path,var49) on <var_path:nullable ModulePath> */
var_other53 = var49;
{
{ /* Inline kernel#Object#is_same_instance (var_path,var_other53) on <var_path:nullable ModulePath(ModulePath)> */
var56 = var_path == var_other53;
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
var51 = var54;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
var50 = var51;
}
if (var50){
goto RET_LABEL;
} else {
}
{
{ /* Inline loader#ModulePath#mgroup (var_path) on <var_path:nullable ModulePath(ModulePath)> */
var59 = var_path->attrs[COLOR_nit__loader__ModulePath___mgroup].val; /* _mgroup on <var_path:nullable ModulePath(ModulePath)> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroup");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 665);
show_backtrace(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
var_mgroup = var57;
{
((void (*)(val* self))(var_44->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_44) /* next on <var_44:Iterator[TId]>*/;
}
} else {
goto BREAK_label60;
}
}
BREAK_label60: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_44) on <var_44:Iterator[TId]> */
RET_LABEL61:(void)0;
}
}
{
{ /* Inline parser_nodes#AStdImport#n_name (var_aimport) on <var_aimport:AImport(AStdImport)> */
var64 = var_aimport->attrs[COLOR_nit__parser_nodes__AStdImport___n_name].val; /* _n_name on <var_aimport:AImport(AStdImport)> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 961);
show_backtrace(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
{ /* Inline parser_nodes#AModuleName#n_id (var62) on <var62:AModuleName> */
var67 = var62->attrs[COLOR_nit__parser_nodes__AModuleName___n_id].val; /* _n_id on <var62:AModuleName> */
if (unlikely(var67 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2470);
show_backtrace(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
var68 = nit__lexer_work___Token___text(var65);
}
var_mod_name = var68;
{
{ /* Inline parser_nodes#AStdImport#n_name (var_aimport) on <var_aimport:AImport(AStdImport)> */
var71 = var_aimport->attrs[COLOR_nit__parser_nodes__AStdImport___n_name].val; /* _n_name on <var_aimport:AImport(AStdImport)> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 961);
show_backtrace(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
{
var72 = nit__loader___ModelBuilder___get_mmodule_by_name(self, var69, var_mgroup, var_mod_name);
}
var_sup = var72;
var73 = NULL;
if (var_sup == NULL) {
var74 = 1; /* is null */
} else {
var74 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_sup,var73) on <var_sup:nullable MModule> */
var_other53 = var73;
{
{ /* Inline kernel#Object#is_same_instance (var_sup,var_other53) on <var_sup:nullable MModule(MModule)> */
var79 = var_sup == var_other53;
var77 = var79;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
}
var75 = var77;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
var74 = var75;
}
if (var74){
goto BREAK_label;
} else {
}
{
{ /* Inline loader#AStdImport#mmodule= (var_aimport,var_sup) on <var_aimport:AImport(AStdImport)> */
var_aimport->attrs[COLOR_nit__loader__AStdImport___mmodule].val = var_sup; /* _mmodule on <var_aimport:AImport(AStdImport)> */
RET_LABEL80:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_imported_modules, var_sup); /* Direct call array#Array#add on <var_imported_modules:Array[MModule]>*/
}
{
{ /* Inline parser_nodes#AImport#n_visibility (var_aimport) on <var_aimport:AImport(AStdImport)> */
var83 = var_aimport->attrs[COLOR_nit__parser_nodes__AImport___n_visibility].val; /* _n_visibility on <var_aimport:AImport(AStdImport)> */
if (unlikely(var83 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 951);
show_backtrace(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
{
var84 = ((val* (*)(val* self))(var81->class->vft[COLOR_nit__modelbuilder_base__AVisibility__mvisibility]))(var81) /* mvisibility on <var81:AVisibility>*/;
}
var_mvisibility = var84;
{
var85 = nit__model_base___standard__Object___protected_visibility(self);
}
{
{ /* Inline kernel#Object#== (var_mvisibility,var85) on <var_mvisibility:MVisibility> */
var_other53 = var85;
{
{ /* Inline kernel#Object#is_same_instance (var_mvisibility,var_other53) on <var_mvisibility:MVisibility> */
var90 = var_mvisibility == var_other53;
var88 = var90;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
}
var86 = var88;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
}
if (var86){
{
{ /* Inline parser_nodes#AImport#n_visibility (var_aimport) on <var_aimport:AImport(AStdImport)> */
var93 = var_aimport->attrs[COLOR_nit__parser_nodes__AImport___n_visibility].val; /* _n_visibility on <var_aimport:AImport(AStdImport)> */
if (unlikely(var93 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 951);
show_backtrace(1);
}
var91 = var93;
RET_LABEL92:(void)0;
}
}
if (varonce) {
var94 = varonce;
} else {
var95 = "Error: only properties can be protected.";
var96 = 40;
var97 = standard___standard__NativeString___to_s_with_length(var95, var96);
var94 = var97;
varonce = var94;
}
{
nit___nit__ModelBuilder___error(self, var91, var94); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Object#== (var_sup,var_mmodule) on <var_sup:nullable MModule(MModule)> */
var_other53 = var_mmodule;
{
{ /* Inline kernel#Object#is_same_instance (var_sup,var_other53) on <var_sup:nullable MModule(MModule)> */
var102 = var_sup == var_other53;
var100 = var102;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
}
var98 = var100;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
}
if (var98){
{
{ /* Inline parser_nodes#AStdImport#n_name (var_aimport) on <var_aimport:AImport(AStdImport)> */
var105 = var_aimport->attrs[COLOR_nit__parser_nodes__AStdImport___n_name].val; /* _n_name on <var_aimport:AImport(AStdImport)> */
if (unlikely(var105 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 961);
show_backtrace(1);
}
var103 = var105;
RET_LABEL104:(void)0;
}
}
if (varonce106) {
var107 = varonce106;
} else {
var108 = "Error: Dependency loop in module ";
var109 = 33;
var110 = standard___standard__NativeString___to_s_with_length(var108, var109);
var107 = var110;
varonce106 = var107;
}
if (varonce111) {
var112 = varonce111;
} else {
var113 = ".";
var114 = 1;
var115 = standard___standard__NativeString___to_s_with_length(var113, var114);
var112 = var115;
varonce111 = var112;
}
var116 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var116 = array_instance Array[Object] */
var117 = 3;
var118 = NEW_standard__NativeArray(var117, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var118)->values[0] = (val*) var107;
((struct instance_standard__NativeArray*)var118)->values[1] = (val*) var_mmodule;
((struct instance_standard__NativeArray*)var118)->values[2] = (val*) var112;
{
((void (*)(val* self, val* p0, long p1))(var116->class->vft[COLOR_standard__array__Array__with_native]))(var116, var118, var117) /* with_native on <var116:Array[Object]>*/;
}
}
{
var119 = ((val* (*)(val* self))(var116->class->vft[COLOR_standard__string__Object__to_s]))(var116) /* to_s on <var116:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(self, var103, var119); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
{
{ /* Inline mmodule#MModule#in_importation (var_sup) on <var_sup:nullable MModule(MModule)> */
var122 = var_sup->attrs[COLOR_nit__mmodule__MModule___in_importation].val; /* _in_importation on <var_sup:nullable MModule(MModule)> */
if (unlikely(var122 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 96);
show_backtrace(1);
}
var120 = var122;
RET_LABEL121:(void)0;
}
}
{
var123 = poset___poset__POSetElement____60d(var120, var_mmodule);
}
if (var123){
{
{ /* Inline parser_nodes#AStdImport#n_name (var_aimport) on <var_aimport:AImport(AStdImport)> */
var126 = var_aimport->attrs[COLOR_nit__parser_nodes__AStdImport___n_name].val; /* _n_name on <var_aimport:AImport(AStdImport)> */
if (unlikely(var126 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 961);
show_backtrace(1);
}
var124 = var126;
RET_LABEL125:(void)0;
}
}
if (varonce127) {
var128 = varonce127;
} else {
var129 = "Error: Dependency loop between modules ";
var130 = 39;
var131 = standard___standard__NativeString___to_s_with_length(var129, var130);
var128 = var131;
varonce127 = var128;
}
if (varonce132) {
var133 = varonce132;
} else {
var134 = " and ";
var135 = 5;
var136 = standard___standard__NativeString___to_s_with_length(var134, var135);
var133 = var136;
varonce132 = var133;
}
if (varonce137) {
var138 = varonce137;
} else {
var139 = ".";
var140 = 1;
var141 = standard___standard__NativeString___to_s_with_length(var139, var140);
var138 = var141;
varonce137 = var138;
}
var142 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var142 = array_instance Array[Object] */
var143 = 5;
var144 = NEW_standard__NativeArray(var143, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var144)->values[0] = (val*) var128;
((struct instance_standard__NativeArray*)var144)->values[1] = (val*) var_mmodule;
((struct instance_standard__NativeArray*)var144)->values[2] = (val*) var133;
((struct instance_standard__NativeArray*)var144)->values[3] = (val*) var_sup;
((struct instance_standard__NativeArray*)var144)->values[4] = (val*) var138;
{
((void (*)(val* self, val* p0, long p1))(var142->class->vft[COLOR_standard__array__Array__with_native]))(var142, var144, var143) /* with_native on <var142:Array[Object]>*/;
}
}
{
var145 = ((val* (*)(val* self))(var142->class->vft[COLOR_standard__string__Object__to_s]))(var142) /* to_s on <var142:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(self, var124, var145); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
nit___nit__MModule___set_visibility_for(var_mmodule, var_sup, var_mvisibility); /* Direct call mmodule#MModule#set_visibility_for on <var_mmodule:MModule>*/
}
BREAK_label: (void)0;
{
((void (*)(val* self))(var_14->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_14) /* next on <var_14:Iterator[AImport]>*/;
}
} else {
goto BREAK_label146;
}
}
BREAK_label146: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_14) on <var_14:Iterator[AImport]> */
RET_LABEL147:(void)0;
}
}
if (var_stdimport){
if (varonce148) {
var149 = varonce148;
} else {
var150 = "standard";
var151 = 8;
var152 = standard___standard__NativeString___to_s_with_length(var150, var151);
var149 = var152;
varonce148 = var149;
}
var_mod_name153 = var149;
var154 = NULL;
{
var155 = nit__loader___ModelBuilder___get_mmodule_by_name(self, var_nmodule, var154, var_mod_name153);
}
var_sup156 = var155;
var157 = NULL;
if (var_sup156 == NULL) {
var158 = 0; /* is null */
} else {
var158 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_sup156,var157) on <var_sup156:nullable MModule> */
var_other = var157;
{
var161 = ((short int (*)(val* self, val* p0))(var_sup156->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_sup156, var_other) /* == on <var_sup156:nullable MModule(MModule)>*/;
}
var162 = !var161;
var159 = var162;
goto RET_LABEL160;
RET_LABEL160:(void)0;
}
var158 = var159;
}
if (var158){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_imported_modules, var_sup156); /* Direct call array#Array#add on <var_imported_modules:Array[MModule]>*/
}
{
var163 = nit__model_base___standard__Object___public_visibility(self);
}
{
nit___nit__MModule___set_visibility_for(var_mmodule, var_sup156, var163); /* Direct call mmodule#MModule#set_visibility_for on <var_mmodule:MModule>*/
}
} else {
}
} else {
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var166 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var166 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var164 = var166;
RET_LABEL165:(void)0;
}
}
if (varonce167) {
var168 = varonce167;
} else {
var169 = " imports ";
var170 = 9;
var171 = standard___standard__NativeString___to_s_with_length(var169, var170);
var168 = var171;
varonce167 = var168;
}
if (varonce172) {
var173 = varonce172;
} else {
var174 = ", ";
var175 = 2;
var176 = standard___standard__NativeString___to_s_with_length(var174, var175);
var173 = var176;
varonce172 = var173;
}
{
var177 = standard__string___Collection___join(var_imported_modules, var173);
}
var178 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var178 = array_instance Array[Object] */
var179 = 3;
var180 = NEW_standard__NativeArray(var179, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var180)->values[0] = (val*) var_mmodule;
((struct instance_standard__NativeArray*)var180)->values[1] = (val*) var168;
((struct instance_standard__NativeArray*)var180)->values[2] = (val*) var177;
{
((void (*)(val* self, val* p0, long p1))(var178->class->vft[COLOR_standard__array__Array__with_native]))(var178, var180, var179) /* with_native on <var178:Array[Object]>*/;
}
}
{
var181 = ((val* (*)(val* self))(var178->class->vft[COLOR_standard__string__Object__to_s]))(var178) /* to_s on <var178:Array[Object]>*/;
}
var182 = 3;
{
nit___nit__ToolContext___info(var164, var181, var182); /* Direct call toolcontext#ToolContext#info on <var164:ToolContext>*/
}
{
nit___nit__MModule___set_imported_mmodules(var_mmodule, var_imported_modules); /* Direct call mmodule#MModule#set_imported_mmodules on <var_mmodule:MModule>*/
}
{
{ /* Inline mmodule#MModule#in_importation (var_mmodule) on <var_mmodule:MModule> */
var185 = var_mmodule->attrs[COLOR_nit__mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var185 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 96);
show_backtrace(1);
}
var183 = var185;
RET_LABEL184:(void)0;
}
}
{
var186 = poset___poset__POSetElement___greaters(var183);
}
var_187 = var186;
{
var188 = ((val* (*)(val* self))(var_187->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_187) /* iterator on <var_187:Collection[MModule]>*/;
}
var_189 = var188;
for(;;) {
{
var190 = ((short int (*)(val* self))(var_189->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_189) /* is_ok on <var_189:Iterator[MModule]>*/;
}
if (var190){
{
var191 = ((val* (*)(val* self))(var_189->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_189) /* item on <var_189:Iterator[MModule]>*/;
}
var_sup192 = var191;
{
{ /* Inline mmodule#MModule#name (var_sup192) on <var_sup192:MModule> */
var195 = var_sup192->attrs[COLOR_nit__mmodule__MModule___name].val; /* _name on <var_sup192:MModule> */
if (unlikely(var195 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 87);
show_backtrace(1);
}
var193 = var195;
RET_LABEL194:(void)0;
}
}
if (varonce196) {
var197 = varonce196;
} else {
var198 = "standard";
var199 = 8;
var200 = standard___standard__NativeString___to_s_with_length(var198, var199);
var197 = var200;
varonce196 = var197;
}
{
var201 = ((short int (*)(val* self, val* p0))(var193->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var193, var197) /* == on <var193:String>*/;
}
if (var201){
{
var202 = nit__model_base___standard__Object___public_visibility(self);
}
{
nit___nit__MModule___set_visibility_for(var_mmodule, var_sup192, var202); /* Direct call mmodule#MModule#set_visibility_for on <var_mmodule:MModule>*/
}
} else {
}
{
((void (*)(val* self))(var_189->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_189) /* next on <var_189:Iterator[MModule]>*/;
}
} else {
goto BREAK_label203;
}
}
BREAK_label203: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_189) on <var_189:Iterator[MModule]> */
RET_LABEL204:(void)0;
}
}
{
{ /* Inline mmodule#MModule#in_importation (var_mmodule) on <var_mmodule:MModule> */
var207 = var_mmodule->attrs[COLOR_nit__mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var207 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 96);
show_backtrace(1);
}
var205 = var207;
RET_LABEL206:(void)0;
}
}
{
var208 = poset___poset__POSetElement___direct_greaters(var205);
}
var_directs = var208;
{
{ /* Inline parser_nodes#AModule#n_imports (var_nmodule) on <var_nmodule:AModule> */
var211 = var_nmodule->attrs[COLOR_nit__parser_nodes__AModule___n_imports].val; /* _n_imports on <var_nmodule:AModule> */
if (unlikely(var211 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_imports");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 913);
show_backtrace(1);
}
var209 = var211;
RET_LABEL210:(void)0;
}
}
var_212 = var209;
{
var213 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_212);
}
var_214 = var213;
for(;;) {
{
var215 = ((short int (*)(val* self))(var_214->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_214) /* is_ok on <var_214:Iterator[AImport]>*/;
}
if (var215){
{
var216 = ((val* (*)(val* self))(var_214->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_214) /* item on <var_214:Iterator[AImport]>*/;
}
var_nim = var216;
/* <var_nim:AImport> isa AStdImport */
cltype218 = type_nit__AStdImport.color;
idtype219 = type_nit__AStdImport.id;
if(cltype218 >= var_nim->type->table_size) {
var217 = 0;
} else {
var217 = var_nim->type->type_table[cltype218] == idtype219;
}
var220 = !var217;
if (var220){
goto BREAK_label221;
} else {
}
{
{ /* Inline loader#AStdImport#mmodule (var_nim) on <var_nim:AImport(AStdImport)> */
var224 = var_nim->attrs[COLOR_nit__loader__AStdImport___mmodule].val; /* _mmodule on <var_nim:AImport(AStdImport)> */
var222 = var224;
RET_LABEL223:(void)0;
}
}
var_im = var222;
var225 = NULL;
if (var_im == NULL) {
var226 = 1; /* is null */
} else {
var226 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_im,var225) on <var_im:nullable MModule> */
var_other53 = var225;
{
{ /* Inline kernel#Object#is_same_instance (var_im,var_other53) on <var_im:nullable MModule(MModule)> */
var231 = var_im == var_other53;
var229 = var231;
goto RET_LABEL230;
RET_LABEL230:(void)0;
}
}
var227 = var229;
goto RET_LABEL228;
RET_LABEL228:(void)0;
}
var226 = var227;
}
if (var226){
goto BREAK_label221;
} else {
}
{
var232 = ((short int (*)(val* self, val* p0))(var_directs->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var_directs, var_im) /* has on <var_directs:Collection[MModule]>*/;
}
if (var232){
goto BREAK_label221;
} else {
}
BREAK_label221: (void)0;
{
((void (*)(val* self))(var_214->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_214) /* next on <var_214:Iterator[AImport]>*/;
}
} else {
goto BREAK_label233;
}
}
BREAK_label233: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_214) on <var_214:Iterator[AImport]> */
RET_LABEL234:(void)0;
}
}
RET_LABEL:;
}
/* method loader#ModelBuilder#nmodules for (self: ModelBuilder): Array[AModule] */
val* nit__loader___ModelBuilder___nmodules(val* self) {
val* var /* : Array[AModule] */;
val* var1 /* : Array[AModule] */;
var1 = self->attrs[COLOR_nit__loader__ModelBuilder___nmodules].val; /* _nmodules on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _nmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 638);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#mmodule2nmodule for (self: ModelBuilder): HashMap[MModule, AModule] */
val* nit__loader___ModelBuilder___mmodule2nmodule(val* self) {
val* var /* : HashMap[MModule, AModule] */;
val* var1 /* : HashMap[MModule, AModule] */;
var1 = self->attrs[COLOR_nit__loader__ModelBuilder___mmodule2nmodule].val; /* _mmodule2nmodule on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule2nmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 641);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#mmodule2node for (self: ModelBuilder, MModule): nullable AModule */
val* nit__loader___ModelBuilder___mmodule2node(val* self, val* p0) {
val* var /* : nullable AModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : HashMap[MModule, AModule] */;
val* var3 /* : HashMap[MModule, AModule] */;
val* var4 /* : nullable Object */;
var_mmodule = p0;
{
{ /* Inline loader#ModelBuilder#mmodule2nmodule (self) on <self:ModelBuilder> */
var3 = self->attrs[COLOR_nit__loader__ModelBuilder___mmodule2nmodule].val; /* _mmodule2nmodule on <self:ModelBuilder> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule2nmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 641);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = standard___standard__HashMap___standard__abstract_collection__MapRead__get_or_null(var1, var_mmodule);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModulePath#name for (self: ModulePath): String */
val* nit___nit__ModulePath___name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__loader__ModulePath___name].val; /* _name on <self:ModulePath> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 658);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader#ModulePath#name= for (self: ModulePath, String) */
void nit___nit__ModulePath___name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__loader__ModulePath___name].val = p0; /* _name on <self:ModulePath> */
RET_LABEL:;
}
/* method loader#ModulePath#filepath for (self: ModulePath): String */
val* nit___nit__ModulePath___filepath(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__loader__ModulePath___filepath].val; /* _filepath on <self:ModulePath> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filepath");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 662);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader#ModulePath#filepath= for (self: ModulePath, String) */
void nit___nit__ModulePath___filepath_61d(val* self, val* p0) {
self->attrs[COLOR_nit__loader__ModulePath___filepath].val = p0; /* _filepath on <self:ModulePath> */
RET_LABEL:;
}
/* method loader#ModulePath#mgroup for (self: ModulePath): MGroup */
val* nit___nit__ModulePath___mgroup(val* self) {
val* var /* : MGroup */;
val* var1 /* : MGroup */;
var1 = self->attrs[COLOR_nit__loader__ModulePath___mgroup].val; /* _mgroup on <self:ModulePath> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroup");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 665);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader#ModulePath#mgroup= for (self: ModulePath, MGroup) */
void nit___nit__ModulePath___mgroup_61d(val* self, val* p0) {
self->attrs[COLOR_nit__loader__ModulePath___mgroup].val = p0; /* _mgroup on <self:ModulePath> */
RET_LABEL:;
}
/* method loader#ModulePath#mmodule for (self: ModulePath): nullable MModule */
val* nit___nit__ModulePath___mmodule(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
var1 = self->attrs[COLOR_nit__loader__ModulePath___mmodule].val; /* _mmodule on <self:ModulePath> */
var = var1;
RET_LABEL:;
return var;
}
/* method loader#ModulePath#mmodule= for (self: ModulePath, nullable MModule) */
void nit___nit__ModulePath___mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nit__loader__ModulePath___mmodule].val = p0; /* _mmodule on <self:ModulePath> */
RET_LABEL:;
}
/* method loader#ModulePath#to_s for (self: ModulePath): String */
val* nit___nit__ModulePath___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{
{ /* Inline loader#ModulePath#filepath (self) on <self:ModulePath> */
var3 = self->attrs[COLOR_nit__loader__ModulePath___filepath].val; /* _filepath on <self:ModulePath> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filepath");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 662);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModulePath#init for (self: ModulePath) */
void nit___nit__ModulePath___standard__kernel__Object__init(val* self) {
{
((void (*)(val* self))(self->class->vft[COLOR_nit___nit__ModulePath___standard__kernel__Object__init]))(self) /* init on <self:ModulePath>*/;
}
RET_LABEL:;
}
/* method loader#MGroup#module_paths for (self: MGroup): Array[ModulePath] */
val* nit__loader___MGroup___module_paths(val* self) {
val* var /* : Array[ModulePath] */;
val* var1 /* : Array[ModulePath] */;
var1 = self->attrs[COLOR_nit__loader__MGroup___module_paths].val; /* _module_paths on <self:MGroup> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _module_paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 675);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader#SourceFile#mmodule for (self: SourceFile): nullable MModule */
val* nit__loader___SourceFile___mmodule(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
var1 = self->attrs[COLOR_nit__loader__SourceFile___mmodule].val; /* _mmodule on <self:SourceFile> */
var = var1;
RET_LABEL:;
return var;
}
/* method loader#SourceFile#mmodule= for (self: SourceFile, nullable MModule) */
void nit__loader___SourceFile___mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nit__loader__SourceFile___mmodule].val = p0; /* _mmodule on <self:SourceFile> */
RET_LABEL:;
}
/* method loader#AStdImport#mmodule for (self: AStdImport): nullable MModule */
val* nit__loader___AStdImport___mmodule(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
var1 = self->attrs[COLOR_nit__loader__AStdImport___mmodule].val; /* _mmodule on <self:AStdImport> */
var = var1;
RET_LABEL:;
return var;
}
/* method loader#AStdImport#mmodule= for (self: AStdImport, nullable MModule) */
void nit__loader___AStdImport___mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nit__loader__AStdImport___mmodule].val = p0; /* _mmodule on <self:AStdImport> */
RET_LABEL:;
}
/* method loader#AModule#mmodule for (self: AModule): nullable MModule */
val* nit__loader___AModule___mmodule(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
var1 = self->attrs[COLOR_nit__loader__AModule___mmodule].val; /* _mmodule on <self:AModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method loader#AModule#mmodule= for (self: AModule, nullable MModule) */
void nit__loader___AModule___mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nit__loader__AModule___mmodule].val = p0; /* _mmodule on <self:AModule> */
RET_LABEL:;
}
/* method loader#AModule#is_importation_done for (self: AModule): Bool */
short int nit__loader___AModule___is_importation_done(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__loader__AModule___is_importation_done].s; /* _is_importation_done on <self:AModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method loader#AModule#is_importation_done= for (self: AModule, Bool) */
void nit__loader___AModule___is_importation_done_61d(val* self, short int p0) {
self->attrs[COLOR_nit__loader__AModule___is_importation_done].s = p0; /* _is_importation_done on <self:AModule> */
RET_LABEL:;
}
