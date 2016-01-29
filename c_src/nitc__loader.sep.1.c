#include "nitc__loader.sep.0.h"
/* method loader#ToolContext#opt_path for (self: ToolContext): OptionArray */
val* nitc__loader___ToolContext___opt_path(val* self) {
val* var /* : OptionArray */;
val* var1 /* : OptionArray */;
var1 = self->attrs[COLOR_nitc__loader__ToolContext___opt_path].val; /* _opt_path on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 44);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader#ToolContext#opt_only_metamodel for (self: ToolContext): OptionBool */
val* nitc__loader___ToolContext___opt_only_metamodel(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__loader__ToolContext___opt_only_metamodel].val; /* _opt_only_metamodel on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_only_metamodel");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 47);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader#ToolContext#opt_only_parse for (self: ToolContext): OptionBool */
val* nitc__loader___ToolContext___opt_only_parse(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__loader__ToolContext___opt_only_parse].val; /* _opt_only_parse on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_only_parse");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 50);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader#ToolContext#init for (self: ToolContext) */
void nitc__loader___ToolContext___core__kernel__Object__init(val* self) {
val* var /* : OptionContext */;
val* var2 /* : OptionContext */;
val* var3 /* : OptionArray */;
val* var5 /* : OptionArray */;
val* var6 /* : OptionBool */;
val* var8 /* : OptionBool */;
val* var9 /* : OptionBool */;
val* var11 /* : OptionBool */;
val* var12 /* : Array[Option] */;
val* var13 /* : NativeArray[Option] */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc__loader___ToolContext___core__kernel__Object__init]))(self); /* init on <self:ToolContext>*/
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
{ /* Inline loader#ToolContext#opt_path (self) on <self:ToolContext> */
var5 = self->attrs[COLOR_nitc__loader__ToolContext___opt_path].val; /* _opt_path on <self:ToolContext> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 44);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline loader#ToolContext#opt_only_parse (self) on <self:ToolContext> */
var8 = self->attrs[COLOR_nitc__loader__ToolContext___opt_only_parse].val; /* _opt_only_parse on <self:ToolContext> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_only_parse");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 50);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline loader#ToolContext#opt_only_metamodel (self) on <self:ToolContext> */
var11 = self->attrs[COLOR_nitc__loader__ToolContext___opt_only_metamodel].val; /* _opt_only_metamodel on <self:ToolContext> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_only_metamodel");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 47);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var12 = NEW_core__Array(&type_core__Array__opts__Option);
{ /* var12 = array_instance Array[Option] */
var13 = NEW_core__NativeArray(3l, &type_core__NativeArray__opts__Option);
((struct instance_core__NativeArray*)var13)->values[0] = (val*) var3;
((struct instance_core__NativeArray*)var13)->values[1] = (val*) var6;
((struct instance_core__NativeArray*)var13)->values[2] = (val*) var9;
{
((void(*)(val* self, val* p0, long p1))(var12->class->vft[COLOR_core__array__Array__with_native]))(var12, var13, 3l); /* with_native on <var12:Array[Option]>*/
}
}
{
opts___opts__OptionContext___add_option(var, var12); /* Direct call opts#OptionContext#add_option on <var:OptionContext>*/
}
RET_LABEL:;
}
/* method loader#ModelBuilder#init for (self: ModelBuilder) */
void nitc__loader___ModelBuilder___core__kernel__Object__init(val* self) {
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
val* var14 /* : String */;
val* var15 /* : String */;
val* var_path_env /* var path_env: String */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : Array[String] */;
val* var20 /* : Array[String] */;
val* var21 /* : Array[String] */;
val* var22 /* : Pattern */;
val* var23 /* : ToolContext */;
val* var25 /* : ToolContext */;
val* var26 /* : String */;
val* var28 /* : String */;
val* var_nit_dir /* var nit_dir: String */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
val* var32 /* : String */;
val* var33 /* : String */;
val* var_libname /* var libname: String */;
short int var34 /* : Bool */;
val* var35 /* : Array[String] */;
val* var37 /* : Array[String] */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : String */;
val* var42 /* : String */;
short int var43 /* : Bool */;
val* var44 /* : Array[String] */;
val* var46 /* : Array[String] */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc__loader___ModelBuilder___core__kernel__Object__init]))(self); /* init on <self:ModelBuilder>*/
}
{
{ /* Inline loader#ModelBuilder#paths (self) on <self:ModelBuilder> */
var2 = self->attrs[COLOR_nitc__loader__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 208);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var5 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline loader#ToolContext#opt_path (var3) on <var3:ToolContext> */
var8 = var3->attrs[COLOR_nitc__loader__ToolContext___opt_path].val; /* _opt_path on <var3:ToolContext> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 44);
fatal_exit(1);
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
core___core__Sequence___append(var, var9); /* Direct call abstract_collection#Sequence#append on <var:Array[String]>*/
}
if (likely(varonce!=NULL)) {
var12 = varonce;
} else {
var13 = "NIT_PATH";
var14 = core__flat___NativeString___to_s_full(var13, 8l, 8l);
var12 = var14;
varonce = var12;
}
{
var15 = core__environ___String___environ(var12);
}
var_path_env = var15;
{
var16 = ((short int(*)(val* self))(var_path_env->class->vft[COLOR_core__abstract_text__Text__is_empty]))(var_path_env); /* is_empty on <var_path_env:String>*/
}
var17 = !var16;
if (var17){
{
{ /* Inline loader#ModelBuilder#paths (self) on <self:ModelBuilder> */
var20 = self->attrs[COLOR_nitc__loader__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 208);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var22 = (val*)((long)(':')<<2|2);
var21 = core__string_search___Text___split_with(var_path_env, var22);
}
{
core___core__Sequence___append(var18, var21); /* Direct call abstract_collection#Sequence#append on <var18:Array[String]>*/
}
} else {
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var25 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#nit_dir (var23) on <var23:ToolContext> */
var28 = var23->attrs[COLOR_nitc__toolcontext__ToolContext___nit_dir].val; /* _nit_dir on <var23:ToolContext> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _nit_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 528);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
var_nit_dir = var26;
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = "lib";
var32 = core__flat___NativeString___to_s_full(var31, 3l, 3l);
var30 = var32;
varonce29 = var30;
}
{
var33 = core__file___String____47d(var_nit_dir, var30);
}
var_libname = var33;
{
var34 = core__file___String___file_exists(var_libname);
}
if (var34){
{
{ /* Inline loader#ModelBuilder#paths (self) on <self:ModelBuilder> */
var37 = self->attrs[COLOR_nitc__loader__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 208);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var35, var_libname); /* Direct call array#Array#add on <var35:Array[String]>*/
}
} else {
}
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "contrib";
var41 = core__flat___NativeString___to_s_full(var40, 7l, 7l);
var39 = var41;
varonce38 = var39;
}
{
var42 = core__file___String____47d(var_nit_dir, var39);
}
var_libname = var42;
{
var43 = core__file___String___file_exists(var_libname);
}
if (var43){
{
{ /* Inline loader#ModelBuilder#paths (self) on <self:ModelBuilder> */
var46 = self->attrs[COLOR_nitc__loader__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 208);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var44, var_libname); /* Direct call array#Array#add on <var44:Array[String]>*/
}
} else {
}
RET_LABEL:;
}
/* method loader#ModelBuilder#parse for (self: ModelBuilder, Sequence[String]): Array[MModule] */
val* nitc__loader___ModelBuilder___parse(val* self, val* p0) {
val* var /* : Array[MModule] */;
val* var_modules /* var modules: Sequence[String] */;
val* var1 /* : Sys */;
long var2 /* : Int */;
long var4 /* : Int */;
long var_time0 /* var time0: Int */;
val* var5 /* : ToolContext */;
val* var7 /* : ToolContext */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : String */;
val* var11 /* : ArraySet[MModule] */;
val* var_mmodules /* var mmodules: ArraySet[MModule] */;
val* var_ /* var : Sequence[String] */;
val* var12 /* : Iterator[nullable Object] */;
val* var_13 /* var : IndexedIterator[String] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_a /* var a: String */;
val* var16 /* : nullable AModule */;
val* var_nmodule /* var nmodule: nullable AModule */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
val* var24 /* : nullable MModule */;
val* var26 /* : nullable MModule */;
val* var_mmodule /* var mmodule: nullable MModule */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : Sys */;
long var34 /* : Int */;
long var36 /* : Int */;
long var_time1 /* var time1: Int */;
val* var37 /* : ToolContext */;
val* var39 /* : ToolContext */;
val* var41 /* : NativeArray[String] */;
static val* varonce40;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : String */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
val* var49 /* : String */;
long var50 /* : Int */;
short int var52 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var53 /* : Int */;
val* var54 /* : String */;
val* var55 /* : String */;
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
val* var76 /* : String */;
val* var77 /* : ToolContext */;
val* var79 /* : ToolContext */;
val* var80 /* : Array[nullable Object] */;
var_modules = p0;
var1 = glob_sys;
{
{ /* Inline time#Sys#get_time (var1) on <var1:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var1;
var4 = time___Sys_get_time___impl(var_for_c_0);
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_time0 = var2;
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var7 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (likely(varonce!=NULL)) {
var8 = varonce;
} else {
var9 = "*** PARSE ***";
var10 = core__flat___NativeString___to_s_full(var9, 13l, 13l);
var8 = var10;
varonce = var8;
}
{
nitc___nitc__ToolContext___info(var5, var8, 1l); /* Direct call toolcontext#ToolContext#info on <var5:ToolContext>*/
}
var11 = NEW_core__ArraySet(&type_core__ArraySet__nitc__MModule);
{
core___core__ArraySet___core__kernel__Object__init(var11); /* Direct call array#ArraySet#init on <var11:ArraySet[MModule]>*/
}
var_mmodules = var11;
var_ = var_modules;
{
var12 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Sequence[String]>*/
}
var_13 = var12;
for(;;) {
{
var14 = ((short int(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_13); /* is_ok on <var_13:IndexedIterator[String]>*/
}
if (var14){
} else {
goto BREAK_label;
}
{
var15 = ((val*(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_13); /* item on <var_13:IndexedIterator[String]>*/
}
var_a = var15;
{
var16 = nitc__loader___ModelBuilder___load_module(self, var_a);
}
var_nmodule = var16;
if (var_nmodule == NULL) {
var17 = 1; /* is null */
} else {
var17 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nmodule,((val*)NULL)) on <var_nmodule:nullable AModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_nmodule,var_other) on <var_nmodule:nullable AModule(AModule)> */
var22 = var_nmodule == var_other;
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
goto BREAK_label23;
} else {
}
{
{ /* Inline loader#AModule#mmodule (var_nmodule) on <var_nmodule:nullable AModule(AModule)> */
var26 = var_nmodule->attrs[COLOR_nitc__loader__AModule___mmodule].val; /* _mmodule on <var_nmodule:nullable AModule(AModule)> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
var_mmodule = var24;
if (var_mmodule == NULL) {
var27 = 1; /* is null */
} else {
var27 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mmodule,((val*)NULL)) on <var_mmodule:nullable MModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mmodule,var_other) on <var_mmodule:nullable MModule(MModule)> */
var32 = var_mmodule == var_other;
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
goto BREAK_label23;
} else {
}
{
core___core__ArraySet___core__abstract_collection__SimpleCollection__add(var_mmodules, var_mmodule); /* Direct call array#ArraySet#add on <var_mmodules:ArraySet[MModule]>*/
}
BREAK_label23: (void)0;
{
((void(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_13); /* next on <var_13:IndexedIterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_13); /* finish on <var_13:IndexedIterator[String]>*/
}
var33 = glob_sys;
{
{ /* Inline time#Sys#get_time (var33) on <var33:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var33;
var36 = time___Sys_get_time___impl(var_for_c_0);
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var_time1 = var34;
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var39 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
if (unlikely(varonce40==NULL)) {
var41 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "*** END PARSE: ";
var45 = core__flat___NativeString___to_s_full(var44, 15l, 15l);
var43 = var45;
varonce42 = var43;
}
((struct instance_core__NativeArray*)var41)->values[0]=var43;
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = " ***";
var49 = core__flat___NativeString___to_s_full(var48, 4l, 4l);
var47 = var49;
varonce46 = var47;
}
((struct instance_core__NativeArray*)var41)->values[2]=var47;
} else {
var41 = varonce40;
varonce40 = NULL;
}
{
{ /* Inline kernel#Int#- (var_time1,var_time0) on <var_time1:Int> */
/* Covariant cast for argument 0 (i) <var_time0:Int> isa OTHER */
/* <var_time0:Int> isa OTHER */
var52 = 1; /* easy <var_time0:Int> isa OTHER*/
if (unlikely(!var52)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var53 = var_time1 - var_time0;
var50 = var53;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
var54 = core__flat___Int___core__abstract_text__Object__to_s(var50);
((struct instance_core__NativeArray*)var41)->values[1]=var54;
{
var55 = ((val*(*)(val* self))(var41->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var41); /* native_to_s on <var41:NativeArray[String]>*/
}
varonce40 = var41;
{
nitc___nitc__ToolContext___info(var37, var55, 2l); /* Direct call toolcontext#ToolContext#info on <var37:ToolContext>*/
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var58 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
var59 = nitc___nitc__ToolContext___check_errors(var56);
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var62 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
{ /* Inline loader#ToolContext#opt_only_parse (var60) on <var60:ToolContext> */
var65 = var60->attrs[COLOR_nitc__loader__ToolContext___opt_only_parse].val; /* _opt_only_parse on <var60:ToolContext> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_only_parse");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 50);
fatal_exit(1);
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
var69 = (short int)((long)(var66)>>2);
if (var69){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var72 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var72 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = "*** ONLY PARSE...";
var76 = core__flat___NativeString___to_s_full(var75, 17l, 17l);
var74 = var76;
varonce73 = var74;
}
{
nitc___nitc__ToolContext___info(var70, var74, 1l); /* Direct call toolcontext#ToolContext#info on <var70:ToolContext>*/
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var79 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var79 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
{
nitc___nitc__ToolContext___quit(var77); /* Direct call toolcontext#ToolContext#quit on <var77:ToolContext>*/
}
} else {
}
{
var80 = core__array___Collection___to_a(var_mmodules);
}
var = var80;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#paths for (self: ModelBuilder): Array[String] */
val* nitc__loader___ModelBuilder___paths(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_nitc__loader__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 208);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#search_mmodule_by_name for (self: ModelBuilder, nullable ANode, nullable MGroup, String): nullable MModule */
val* nitc__loader___ModelBuilder___search_mmodule_by_name(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MModule */;
val* var_anode /* var anode: nullable ANode */;
val* var_mgroup /* var mgroup: nullable MGroup */;
val* var_name /* var name: String */;
val* var_c /* var c: nullable MGroup */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : MPackage */;
val* var8 /* : MPackage */;
val* var9 /* : nullable MGroup */;
val* var11 /* : nullable MGroup */;
val* var_r /* var r: nullable MGroup */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : Array[MModule] */;
val* var_res /* var res: Array[MModule] */;
short int var18 /* : Bool */;
val* var19 /* : nullable Object */;
val* var20 /* : Array[String] */;
val* var22 /* : Array[String] */;
val* var_lookpaths /* var lookpaths: Array[String] */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : MPackage */;
val* var30 /* : MPackage */;
val* var31 /* : nullable MGroup */;
val* var33 /* : nullable MGroup */;
val* var34 /* : nullable String */;
val* var36 /* : nullable String */;
val* var_dirname /* var dirname: nullable String */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
static val* varonce;
val* var42 /* : String */;
char* var43 /* : NativeString */;
val* var44 /* : String */;
val* var45 /* : String */;
val* var46 /* : String */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
short int var_ /* var : Bool */;
short int var50 /* : Bool */;
val* var51 /* : Array[nullable Object] */;
val* var_loc /* var loc: nullable Object */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
val* var57 /* : Location */;
val* var58 /* : nullable MModule */;
val* var_candidate /* var candidate: nullable MModule */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
val* var_other62 /* var other: nullable Object */;
short int var63 /* : Bool */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
val* var72 /* : NativeArray[String] */;
static val* varonce71;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
val* var76 /* : String */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
val* var80 /* : String */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
val* var84 /* : String */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
val* var88 /* : String */;
val* var89 /* : String */;
val* var91 /* : String */;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : NativeString */;
val* var95 /* : String */;
val* var96 /* : String */;
val* var97 /* : String */;
val* var99 /* : NativeArray[String] */;
static val* varonce98;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : NativeString */;
val* var103 /* : String */;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : NativeString */;
val* var107 /* : String */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : NativeString */;
val* var111 /* : String */;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : NativeString */;
val* var115 /* : String */;
val* var116 /* : String */;
val* var117 /* : String */;
var_anode = p0;
var_mgroup = p1;
var_name = p2;
var_c = var_mgroup;
if (var_c == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_c,((val*)NULL)) on <var_c:nullable MGroup> */
var_other = ((val*)NULL);
{
var4 = ((short int(*)(val* self, val* p0))(var_c->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_c, var_other); /* == on <var_c:nullable MGroup(MGroup)>*/
}
var5 = !var4;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline mpackage#MGroup#mpackage (var_c) on <var_c:nullable MGroup(MGroup)> */
var8 = var_c->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val; /* _mpackage on <var_c:nullable MGroup(MGroup)> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 69);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline mpackage#MPackage#root (var6) on <var6:MPackage> */
var11 = var6->attrs[COLOR_nitc__mpackage__MPackage___root].val; /* _root on <var6:MPackage> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_r = var9;
if (var_r == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_r,((val*)NULL)) on <var_r:nullable MGroup> */
var_other = ((val*)NULL);
{
var15 = ((short int(*)(val* self, val* p0))(var_r->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_r, var_other); /* == on <var_r:nullable MGroup(MGroup)>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 224);
fatal_exit(1);
}
{
nitc__loader___ModelBuilder___scan_group(self, var_r); /* Direct call loader#ModelBuilder#scan_group on <self:ModelBuilder>*/
}
{
var17 = nitc__loader___MGroup___mmodules_by_name(var_r, var_name);
}
var_res = var17;
{
var18 = core___core__Collection___not_empty(var_res);
}
if (var18){
{
var19 = core___core__SequenceRead___Collection__first(var_res);
}
var = var19;
goto RET_LABEL;
} else {
}
} else {
}
{
{ /* Inline loader#ModelBuilder#paths (self) on <self:ModelBuilder> */
var22 = self->attrs[COLOR_nitc__loader__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 208);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
var_lookpaths = var20;
if (var_mgroup == NULL) {
var23 = 0; /* is null */
} else {
var23 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mgroup,((val*)NULL)) on <var_mgroup:nullable MGroup> */
var_other = ((val*)NULL);
{
var26 = ((short int(*)(val* self, val* p0))(var_mgroup->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mgroup, var_other); /* == on <var_mgroup:nullable MGroup(MGroup)>*/
}
var27 = !var26;
var24 = var27;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
var23 = var24;
}
if (var23){
{
{ /* Inline mpackage#MGroup#mpackage (var_mgroup) on <var_mgroup:nullable MGroup(MGroup)> */
var30 = var_mgroup->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val; /* _mpackage on <var_mgroup:nullable MGroup(MGroup)> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 69);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline mpackage#MPackage#root (var28) on <var28:MPackage> */
var33 = var28->attrs[COLOR_nitc__mpackage__MPackage___root].val; /* _root on <var28:MPackage> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
if (var31 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 236);
fatal_exit(1);
} else {
{ /* Inline mpackage#MGroup#filepath (var31) on <var31:nullable MGroup> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 93);
fatal_exit(1);
}
var36 = var31->attrs[COLOR_nitc__mpackage__MGroup___filepath].val; /* _filepath on <var31:nullable MGroup> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
var_dirname = var34;
if (var_dirname == NULL) {
var37 = 0; /* is null */
} else {
var37 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_dirname,((val*)NULL)) on <var_dirname:nullable String> */
var_other = ((val*)NULL);
{
var40 = ((short int(*)(val* self, val* p0))(var_dirname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_dirname, var_other); /* == on <var_dirname:nullable String(String)>*/
}
var41 = !var40;
var38 = var41;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
var37 = var38;
}
if (var37){
if (likely(varonce!=NULL)) {
var42 = varonce;
} else {
var43 = "..";
var44 = core__flat___NativeString___to_s_full(var43, 2l, 2l);
var42 = var44;
varonce = var42;
}
{
var45 = core__file___String___join_path(var_dirname, var42);
}
{
var46 = core__file___String___simplify_path(var45);
}
var_dirname = var46;
{
var48 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var_lookpaths, var_dirname);
}
var49 = !var48;
var_ = var49;
if (var49){
{
var50 = core__file___String___file_exists(var_dirname);
}
var47 = var50;
} else {
var47 = var_;
}
if (var47){
{
var51 = core__array___Collection___to_a(var_lookpaths);
}
var_lookpaths = var51;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_lookpaths, var_dirname); /* Direct call array#Array#add on <var_lookpaths:Array[String]>*/
}
} else {
}
} else {
}
} else {
}
var_loc = ((val*)NULL);
if (var_anode == NULL) {
var52 = 0; /* is null */
} else {
var52 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_anode,((val*)NULL)) on <var_anode:nullable ANode> */
var_other = ((val*)NULL);
{
var55 = ((short int(*)(val* self, val* p0))(var_anode->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_anode, var_other); /* == on <var_anode:nullable ANode(ANode)>*/
}
var56 = !var55;
var53 = var56;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
var52 = var53;
}
if (var52){
{
var57 = ((val*(*)(val* self))(var_anode->class->vft[COLOR_nitc__parser_nodes__ANode__hot_location]))(var_anode); /* hot_location on <var_anode:nullable ANode(ANode)>*/
}
var_loc = var57;
} else {
}
{
var58 = nitc__loader___ModelBuilder___search_module_in_paths(self, var_loc, var_name, var_lookpaths);
}
var_candidate = var58;
if (var_candidate == NULL) {
var59 = 1; /* is null */
} else {
var59 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_candidate,((val*)NULL)) on <var_candidate:nullable MModule> */
var_other62 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_candidate,var_other62) on <var_candidate:nullable MModule(MModule)> */
var65 = var_candidate == var_other62;
var63 = var65;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
var60 = var63;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
var59 = var60;
}
if (var59){
if (var_mgroup == NULL) {
var66 = 0; /* is null */
} else {
var66 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mgroup,((val*)NULL)) on <var_mgroup:nullable MGroup> */
var_other = ((val*)NULL);
{
var69 = ((short int(*)(val* self, val* p0))(var_mgroup->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mgroup, var_other); /* == on <var_mgroup:nullable MGroup(MGroup)>*/
}
var70 = !var69;
var67 = var70;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
var66 = var67;
}
if (var66){
if (unlikely(varonce71==NULL)) {
var72 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = "Error: cannot find module `";
var76 = core__flat___NativeString___to_s_full(var75, 27l, 27l);
var74 = var76;
varonce73 = var74;
}
((struct instance_core__NativeArray*)var72)->values[0]=var74;
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = "` from `";
var80 = core__flat___NativeString___to_s_full(var79, 8l, 8l);
var78 = var80;
varonce77 = var78;
}
((struct instance_core__NativeArray*)var72)->values[2]=var78;
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = "`. Tried: ";
var84 = core__flat___NativeString___to_s_full(var83, 10l, 10l);
var82 = var84;
varonce81 = var82;
}
((struct instance_core__NativeArray*)var72)->values[4]=var82;
if (likely(varonce85!=NULL)) {
var86 = varonce85;
} else {
var87 = ".";
var88 = core__flat___NativeString___to_s_full(var87, 1l, 1l);
var86 = var88;
varonce85 = var86;
}
((struct instance_core__NativeArray*)var72)->values[6]=var86;
} else {
var72 = varonce71;
varonce71 = NULL;
}
((struct instance_core__NativeArray*)var72)->values[1]=var_name;
{
{ /* Inline mpackage#MGroup#name (var_mgroup) on <var_mgroup:nullable MGroup(MGroup)> */
var91 = var_mgroup->attrs[COLOR_nitc__mpackage__MGroup___name].val; /* _name on <var_mgroup:nullable MGroup(MGroup)> */
if (unlikely(var91 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 65);
fatal_exit(1);
}
var89 = var91;
RET_LABEL90:(void)0;
}
}
((struct instance_core__NativeArray*)var72)->values[3]=var89;
if (likely(varonce92!=NULL)) {
var93 = varonce92;
} else {
var94 = ", ";
var95 = core__flat___NativeString___to_s_full(var94, 2l, 2l);
var93 = var95;
varonce92 = var93;
}
{
var96 = core__abstract_text___Collection___join(var_lookpaths, var93);
}
((struct instance_core__NativeArray*)var72)->values[5]=var96;
{
var97 = ((val*(*)(val* self))(var72->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var72); /* native_to_s on <var72:NativeArray[String]>*/
}
varonce71 = var72;
{
nitc___nitc__ModelBuilder___error(self, var_anode, var97); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
if (unlikely(varonce98==NULL)) {
var99 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce100!=NULL)) {
var101 = varonce100;
} else {
var102 = "Error: cannot find module `";
var103 = core__flat___NativeString___to_s_full(var102, 27l, 27l);
var101 = var103;
varonce100 = var101;
}
((struct instance_core__NativeArray*)var99)->values[0]=var101;
if (likely(varonce104!=NULL)) {
var105 = varonce104;
} else {
var106 = "`. Tried: ";
var107 = core__flat___NativeString___to_s_full(var106, 10l, 10l);
var105 = var107;
varonce104 = var105;
}
((struct instance_core__NativeArray*)var99)->values[2]=var105;
if (likely(varonce108!=NULL)) {
var109 = varonce108;
} else {
var110 = ".";
var111 = core__flat___NativeString___to_s_full(var110, 1l, 1l);
var109 = var111;
varonce108 = var109;
}
((struct instance_core__NativeArray*)var99)->values[4]=var109;
} else {
var99 = varonce98;
varonce98 = NULL;
}
((struct instance_core__NativeArray*)var99)->values[1]=var_name;
if (likely(varonce112!=NULL)) {
var113 = varonce112;
} else {
var114 = ", ";
var115 = core__flat___NativeString___to_s_full(var114, 2l, 2l);
var113 = var115;
varonce112 = var113;
}
{
var116 = core__abstract_text___Collection___join(var_lookpaths, var113);
}
((struct instance_core__NativeArray*)var99)->values[3]=var116;
{
var117 = ((val*(*)(val* self))(var99->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var99); /* native_to_s on <var99:NativeArray[String]>*/
}
varonce98 = var99;
{
nitc___nitc__ModelBuilder___error(self, var_anode, var117); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var = var_candidate;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#get_mmodule_by_name for (self: ModelBuilder, nullable ANode, nullable MGroup, String): nullable MModule */
val* nitc__loader___ModelBuilder___get_mmodule_by_name(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MModule */;
val* var_anode /* var anode: nullable ANode */;
val* var_mgroup /* var mgroup: nullable MGroup */;
val* var_name /* var name: String */;
val* var1 /* : nullable MModule */;
val* var_mmodule /* var mmodule: nullable MModule */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable AModule */;
val* var_ast /* var ast: nullable AModule */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
var_anode = p0;
var_mgroup = p1;
var_name = p2;
{
var1 = nitc__loader___ModelBuilder___search_mmodule_by_name(self, var_anode, var_mgroup, var_name);
}
var_mmodule = var1;
if (var_mmodule == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mmodule,((val*)NULL)) on <var_mmodule:nullable MModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mmodule,var_other) on <var_mmodule:nullable MModule(MModule)> */
var7 = var_mmodule == var_other;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var8 = nitc__loader___MModule___load(var_mmodule, self);
}
var_ast = var8;
if (var_ast == NULL) {
var9 = 1; /* is null */
} else {
var9 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ast,((val*)NULL)) on <var_ast:nullable AModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_ast,var_other) on <var_ast:nullable AModule(AModule)> */
var14 = var_ast == var_other;
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
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var = var_mmodule;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#search_module_in_paths for (self: ModelBuilder, nullable Location, String, Collection[String]): nullable MModule */
val* nitc__loader___ModelBuilder___search_module_in_paths(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MModule */;
val* var_location /* var location: nullable Location */;
val* var_name /* var name: String */;
val* var_lookpaths /* var lookpaths: Collection[String] */;
val* var1 /* : ArraySet[MModule] */;
val* var_res /* var res: ArraySet[MModule] */;
val* var_ /* var : Collection[String] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : Iterator[String] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_dirname /* var dirname: String */;
val* var6 /* : NativeArray[String] */;
static val* varonce;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : String */;
val* var11 /* : String */;
val* var12 /* : String */;
val* var13 /* : String */;
val* var14 /* : nullable MModule */;
val* var_mp /* var mp: nullable MModule */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : String */;
val* var21 /* : String */;
val* var22 /* : nullable MGroup */;
val* var_g /* var g: nullable MGroup */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : Array[MModule] */;
short int var29 /* : Bool */;
long var30 /* : Int */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var34 /* : Bool */;
val* var35 /* : ToolContext */;
val* var37 /* : ToolContext */;
val* var39 /* : NativeArray[String] */;
static val* varonce38;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
val* var43 /* : String */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
val* var47 /* : String */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
val* var51 /* : String */;
val* var52 /* : Array[String] */;
val* var_53 /* var : Array[String] */;
val* var_54 /* var : ArraySet[MModule] */;
val* var55 /* : Iterator[nullable Object] */;
val* var_56 /* var : Iterator[MModule] */;
short int var57 /* : Bool */;
val* var59 /* : nullable Object */;
val* var_x /* var x: MModule */;
val* var60 /* : String */;
val* var61 /* : nullable String */;
val* var63 /* : nullable String */;
val* var64 /* : String */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
val* var68 /* : String */;
val* var69 /* : String */;
val* var70 /* : String */;
val* var71 /* : Message */;
val* var72 /* : nullable Object */;
var_location = p0;
var_name = p1;
var_lookpaths = p2;
var1 = NEW_core__ArraySet(&type_core__ArraySet__nitc__MModule);
{
core___core__ArraySet___core__kernel__Object__init(var1); /* Direct call array#ArraySet#init on <var1:ArraySet[MModule]>*/
}
var_res = var1;
var_ = var_lookpaths;
{
var2 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[String]>*/
}
var_3 = var2;
for(;;) {
{
var4 = ((short int(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_3); /* is_ok on <var_3:Iterator[String]>*/
}
if (var4){
} else {
goto BREAK_label;
}
{
var5 = ((val*(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_3); /* item on <var_3:Iterator[String]>*/
}
var_dirname = var5;
if (unlikely(varonce==NULL)) {
var6 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = ".nit";
var10 = core__flat___NativeString___to_s_full(var9, 4l, 4l);
var8 = var10;
varonce7 = var8;
}
((struct instance_core__NativeArray*)var6)->values[1]=var8;
} else {
var6 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var6)->values[0]=var_name;
{
var11 = ((val*(*)(val* self))(var6->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce = var6;
{
var12 = core__file___String____47d(var_dirname, var11);
}
{
var13 = core__file___String___simplify_path(var12);
}
{
var14 = nitc__loader___ModelBuilder___identify_module(self, var13);
}
var_mp = var14;
if (var_mp == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mp,((val*)NULL)) on <var_mp:nullable MModule> */
var_other = ((val*)NULL);
{
var18 = ((short int(*)(val* self, val* p0))(var_mp->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mp, var_other); /* == on <var_mp:nullable MModule(MModule)>*/
}
var19 = !var18;
var16 = var19;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var15 = var16;
}
if (var15){
{
core___core__ArraySet___core__abstract_collection__SimpleCollection__add(var_res, var_mp); /* Direct call array#ArraySet#add on <var_res:ArraySet[MModule]>*/
}
} else {
}
{
var20 = core__file___String____47d(var_dirname, var_name);
}
{
var21 = core__file___String___simplify_path(var20);
}
{
var22 = nitc__loader___ModelBuilder___identify_group(self, var21);
}
var_g = var22;
if (var_g == NULL) {
var23 = 0; /* is null */
} else {
var23 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_g,((val*)NULL)) on <var_g:nullable MGroup> */
var_other = ((val*)NULL);
{
var26 = ((short int(*)(val* self, val* p0))(var_g->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_g, var_other); /* == on <var_g:nullable MGroup(MGroup)>*/
}
var27 = !var26;
var24 = var27;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
var23 = var24;
}
if (var23){
{
nitc__loader___ModelBuilder___scan_group(self, var_g); /* Direct call loader#ModelBuilder#scan_group on <self:ModelBuilder>*/
}
{
var28 = nitc__loader___MGroup___mmodules_by_name(var_g, var_name);
}
{
core___core__SimpleCollection___add_all(var_res, var28); /* Direct call abstract_collection#SimpleCollection#add_all on <var_res:ArraySet[MModule]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_3); /* next on <var_3:Iterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_3); /* finish on <var_3:Iterator[String]>*/
}
{
var29 = core___core__ArraySet___core__abstract_collection__Collection__is_empty(var_res);
}
if (var29){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var30 = core___core__ArraySet___core__abstract_collection__Collection__length(var_res);
}
{
{ /* Inline kernel#Int#> (var30,1l) on <var30:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var33 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var33)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
fatal_exit(1);
}
var34 = var30 > 1l;
var31 = var34;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
if (var31){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var37 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
if (unlikely(varonce38==NULL)) {
var39 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "Error: conflicting module files for `";
var43 = core__flat___NativeString___to_s_full(var42, 37l, 37l);
var41 = var43;
varonce40 = var41;
}
((struct instance_core__NativeArray*)var39)->values[0]=var41;
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = "`: `";
var47 = core__flat___NativeString___to_s_full(var46, 4l, 4l);
var45 = var47;
varonce44 = var45;
}
((struct instance_core__NativeArray*)var39)->values[2]=var45;
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = "`";
var51 = core__flat___NativeString___to_s_full(var50, 1l, 1l);
var49 = var51;
varonce48 = var49;
}
((struct instance_core__NativeArray*)var39)->values[4]=var49;
} else {
var39 = varonce38;
varonce38 = NULL;
}
((struct instance_core__NativeArray*)var39)->values[1]=var_name;
var52 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___with_capacity(var52, 1l); /* Direct call array#Array#with_capacity on <var52:Array[String]>*/
}
var_53 = var52;
var_54 = var_res;
{
var55 = core___core__ArraySet___core__abstract_collection__Collection__iterator(var_54);
}
var_56 = var55;
for(;;) {
{
var57 = ((short int(*)(val* self))((((long)var_56&3)?class_info[((long)var_56&3)]:var_56->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_56); /* is_ok on <var_56:Iterator[MModule]>*/
}
if (var57){
} else {
goto BREAK_label58;
}
{
var59 = ((val*(*)(val* self))((((long)var_56&3)?class_info[((long)var_56&3)]:var_56->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_56); /* item on <var_56:Iterator[MModule]>*/
}
var_x = var59;
{
{ /* Inline mmodule#MModule#filepath (var_x) on <var_x:MModule> */
var63 = var_x->attrs[COLOR_nitc__mmodule__MModule___filepath].val; /* _filepath on <var_x:MModule> */
var61 = var63;
RET_LABEL62:(void)0;
}
}
if (var61!=NULL) {
var60 = var61;
} else {
{
var64 = nitc___nitc__MModule___nitc__model_base__MEntity__full_name(var_x);
}
var60 = var64;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_53, var60); /* Direct call array#AbstractArray#push on <var_53:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_56&3)?class_info[((long)var_56&3)]:var_56->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_56); /* next on <var_56:Iterator[MModule]>*/
}
}
BREAK_label58: (void)0;
{
((void(*)(val* self))((((long)var_56&3)?class_info[((long)var_56&3)]:var_56->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_56); /* finish on <var_56:Iterator[MModule]>*/
}
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = "`, `";
var68 = core__flat___NativeString___to_s_full(var67, 4l, 4l);
var66 = var68;
varonce65 = var66;
}
{
var69 = core__abstract_text___Collection___join(var_53, var66);
}
((struct instance_core__NativeArray*)var39)->values[3]=var69;
{
var70 = ((val*(*)(val* self))(var39->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var39); /* native_to_s on <var39:NativeArray[String]>*/
}
varonce38 = var39;
{
var71 = nitc___nitc__ToolContext___error(var35, var_location, var70);
}
} else {
}
{
var72 = core___core__ArraySet___core__abstract_collection__Collection__first(var_res);
}
var = var72;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#search_group_in_paths for (self: ModelBuilder, String, Collection[String]): ArraySet[MGroup] */
val* nitc__loader___ModelBuilder___search_group_in_paths(val* self, val* p0, val* p1) {
val* var /* : ArraySet[MGroup] */;
val* var_name /* var name: String */;
val* var_lookpaths /* var lookpaths: Collection[String] */;
val* var1 /* : ArraySet[MGroup] */;
val* var_res /* var res: ArraySet[MGroup] */;
val* var_ /* var : Collection[String] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : Iterator[String] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_dirname /* var dirname: String */;
val* var6 /* : String */;
val* var7 /* : nullable MGroup */;
val* var_mg /* var mg: nullable MGroup */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
var_name = p0;
var_lookpaths = p1;
var1 = NEW_core__ArraySet(&type_core__ArraySet__nitc__MGroup);
{
core___core__ArraySet___core__kernel__Object__init(var1); /* Direct call array#ArraySet#init on <var1:ArraySet[MGroup]>*/
}
var_res = var1;
var_ = var_lookpaths;
{
var2 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[String]>*/
}
var_3 = var2;
for(;;) {
{
var4 = ((short int(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_3); /* is_ok on <var_3:Iterator[String]>*/
}
if (var4){
} else {
goto BREAK_label;
}
{
var5 = ((val*(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_3); /* item on <var_3:Iterator[String]>*/
}
var_dirname = var5;
{
var6 = core__file___String____47d(var_dirname, var_name);
}
{
var7 = nitc__loader___ModelBuilder___identify_group(self, var6);
}
var_mg = var7;
if (var_mg == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mg,((val*)NULL)) on <var_mg:nullable MGroup> */
var_other = ((val*)NULL);
{
var11 = ((short int(*)(val* self, val* p0))(var_mg->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mg, var_other); /* == on <var_mg:nullable MGroup(MGroup)>*/
}
var12 = !var11;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
if (var8){
{
core___core__ArraySet___core__abstract_collection__SimpleCollection__add(var_res, var_mg); /* Direct call array#ArraySet#add on <var_res:ArraySet[MGroup]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_3); /* next on <var_3:Iterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_3); /* finish on <var_3:Iterator[String]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#identified_modules_by_path for (self: ModelBuilder): HashMap[String, nullable MModule] */
val* nitc__loader___ModelBuilder___identified_modules_by_path(val* self) {
val* var /* : HashMap[String, nullable MModule] */;
val* var1 /* : HashMap[String, nullable MModule] */;
var1 = self->attrs[COLOR_nitc__loader__ModelBuilder___identified_modules_by_path].val; /* _identified_modules_by_path on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _identified_modules_by_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 311);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#identified_modules for (self: ModelBuilder): Array[MModule] */
val* nitc__loader___ModelBuilder___identified_modules(val* self) {
val* var /* : Array[MModule] */;
val* var1 /* : Array[MModule] */;
var1 = self->attrs[COLOR_nitc__loader__ModelBuilder___identified_modules].val; /* _identified_modules on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _identified_modules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 314);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#parsed_modules for (self: ModelBuilder): Array[MModule] */
val* nitc__loader___ModelBuilder___parsed_modules(val* self) {
val* var /* : Array[MModule] */;
val* var1 /* : Array[MModule] */;
var1 = self->attrs[COLOR_nitc__loader__ModelBuilder___parsed_modules].val; /* _parsed_modules on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _parsed_modules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 320);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#identify_module for (self: ModelBuilder, String): nullable MModule */
val* nitc__loader___ModelBuilder___identify_module(val* self, val* p0) {
val* var /* : nullable MModule */;
val* var_path /* var path: String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : String */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : SequenceRead[Char] */;
val* var7 /* : nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : Array[String] */;
val* var12 /* : Array[String] */;
val* var13 /* : nullable MModule */;
val* var_res /* var res: nullable MModule */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var_candidate /* var candidate: nullable Object */;
short int var19 /* : Bool */;
val* var20 /* : nullable MGroup */;
val* var_mgroup /* var mgroup: nullable MGroup */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var26 /* : nullable String */;
val* var28 /* : nullable String */;
val* var29 /* : String */;
val* var31 /* : String */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
val* var35 /* : String */;
val* var36 /* : String */;
val* var37 /* : String */;
val* var_owner_path /* var owner_path: String */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
val* var43 /* : HashMap[String, nullable MModule] */;
val* var45 /* : HashMap[String, nullable MModule] */;
short int var46 /* : Bool */;
val* var47 /* : HashMap[String, nullable MModule] */;
val* var49 /* : HashMap[String, nullable MModule] */;
val* var50 /* : nullable Object */;
val* var51 /* : String */;
val* var_rp /* var rp: String */;
val* var52 /* : HashMap[String, nullable MModule] */;
val* var54 /* : HashMap[String, nullable MModule] */;
short int var55 /* : Bool */;
val* var56 /* : HashMap[String, nullable MModule] */;
val* var58 /* : HashMap[String, nullable MModule] */;
val* var59 /* : nullable Object */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
val* var63 /* : String */;
val* var64 /* : String */;
val* var_pn /* var pn: String */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
val* var68 /* : String */;
val* var69 /* : String */;
val* var70 /* : String */;
val* var_mgrouppath /* var mgrouppath: String */;
val* var71 /* : nullable MGroup */;
val* var_mgroup72 /* var mgroup: nullable MGroup */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
val* var_other76 /* var other: nullable Object */;
short int var77 /* : Bool */;
short int var79 /* : Bool */;
val* var80 /* : MPackage */;
val* var81 /* : Model */;
val* var83 /* : Model */;
val* var_mpackage /* var mpackage: MPackage */;
val* var84 /* : MGroup */;
val* var87 /* : ToolContext */;
val* var89 /* : ToolContext */;
val* var91 /* : NativeArray[String] */;
static val* varonce90;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : NativeString */;
val* var95 /* : String */;
static val* varonce96;
val* var97 /* : String */;
char* var98 /* : NativeString */;
val* var99 /* : String */;
val* var100 /* : String */;
val* var101 /* : String */;
val* var103 /* : NativeArray[String] */;
static val* varonce102;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : NativeString */;
val* var107 /* : String */;
val* var108 /* : String */;
val* var109 /* : String */;
val* var_inipath /* var inipath: String */;
short int var110 /* : Bool */;
val* var111 /* : ConfigTree */;
val* var_ini /* var ini: ConfigTree */;
val* var113 /* : SourceFile */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : NativeString */;
val* var117 /* : String */;
val* var_src /* var src: SourceFile */;
val* var118 /* : Location */;
val* var_loc /* var loc: Location */;
val* var119 /* : MModule */;
val* var120 /* : Model */;
val* var122 /* : Model */;
val* var_res123 /* var res: MModule */;
val* var125 /* : HashMap[String, nullable MModule] */;
val* var127 /* : HashMap[String, nullable MModule] */;
val* var128 /* : HashMap[String, nullable MModule] */;
val* var130 /* : HashMap[String, nullable MModule] */;
val* var131 /* : Array[MModule] */;
val* var133 /* : Array[MModule] */;
var_path = p0;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = ".nit";
var3 = core__flat___NativeString___to_s_full(var2, 4l, 4l);
var1 = var3;
varonce = var1;
}
{
var4 = core___core__Text___has_suffix(var_path, var1);
}
var5 = !var4;
if (var5){
{
var6 = ((val*(*)(val* self))(var_path->class->vft[COLOR_core__abstract_text__Text__chars]))(var_path); /* chars on <var_path:String>*/
}
{
var7 = (val*)((long)('/')<<2|2);
var8 = ((short int(*)(val* self, val* p0))((((long)var6&3)?class_info[((long)var6&3)]:var6->class)->vft[COLOR_core__abstract_collection__Collection__has]))(var6, var7); /* has on <var6:SequenceRead[Char]>*/
}
var9 = !var8;
if (var9){
{
{ /* Inline loader#ModelBuilder#paths (self) on <self:ModelBuilder> */
var12 = self->attrs[COLOR_nitc__loader__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 208);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = nitc__loader___ModelBuilder___search_module_in_paths(self, ((val*)NULL), var_path, var10);
}
var_res = var13;
if (var_res == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,((val*)NULL)) on <var_res:nullable MModule> */
var_other = ((val*)NULL);
{
var17 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable MModule(MModule)>*/
}
var18 = !var17;
var15 = var18;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
if (var14){
var = var_res;
goto RET_LABEL;
} else {
}
} else {
}
var_candidate = ((val*)NULL);
{
var19 = core__file___String___file_exists(var_path);
}
if (var19){
{
var20 = nitc__loader___ModelBuilder___identify_group(self, var_path);
}
var_mgroup = var20;
if (var_mgroup == NULL) {
var21 = 0; /* is null */
} else {
var21 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mgroup,((val*)NULL)) on <var_mgroup:nullable MGroup> */
var_other = ((val*)NULL);
{
var24 = ((short int(*)(val* self, val* p0))(var_mgroup->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mgroup, var_other); /* == on <var_mgroup:nullable MGroup(MGroup)>*/
}
var25 = !var24;
var22 = var25;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
var21 = var22;
}
if (var21){
{
{ /* Inline mpackage#MGroup#filepath (var_mgroup) on <var_mgroup:nullable MGroup(MGroup)> */
var28 = var_mgroup->attrs[COLOR_nitc__mpackage__MGroup___filepath].val; /* _filepath on <var_mgroup:nullable MGroup(MGroup)> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline mpackage#MGroup#name (var_mgroup) on <var_mgroup:nullable MGroup(MGroup)> */
var31 = var_mgroup->attrs[COLOR_nitc__mpackage__MGroup___name].val; /* _name on <var_mgroup:nullable MGroup(MGroup)> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 65);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = ".nit";
var35 = core__flat___NativeString___to_s_full(var34, 4l, 4l);
var33 = var35;
varonce32 = var33;
}
{
var36 = ((val*(*)(val* self, val* p0))(var29->class->vft[COLOR_core__abstract_text__String___43d]))(var29, var33); /* + on <var29:String>*/
}
if (var26 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 355);
fatal_exit(1);
} else {
var37 = core__file___String___join_path(var26, var36);
}
var_owner_path = var37;
{
var38 = core__file___String___file_exists(var_owner_path);
}
if (var38){
var_candidate = var_owner_path;
} else {
}
} else {
}
} else {
}
if (var_candidate == NULL) {
var39 = 1; /* is null */
} else {
var39 = 0; /* arg is null but recv is not */
}
if (0) {
var40 = ((short int(*)(val* self, val* p0))(var_candidate->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_candidate, ((val*)NULL)); /* == on <var_candidate:nullable Object(nullable String)>*/
var39 = var40;
}
if (var39){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var_path = var_candidate;
} else {
}
{
var41 = core__file___String___file_exists(var_path);
}
var42 = !var41;
if (var42){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline loader#ModelBuilder#identified_modules_by_path (self) on <self:ModelBuilder> */
var45 = self->attrs[COLOR_nitc__loader__ModelBuilder___identified_modules_by_path].val; /* _identified_modules_by_path on <self:ModelBuilder> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _identified_modules_by_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 311);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
var46 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var43, var_path);
}
if (var46){
{
{ /* Inline loader#ModelBuilder#identified_modules_by_path (self) on <self:ModelBuilder> */
var49 = self->attrs[COLOR_nitc__loader__ModelBuilder___identified_modules_by_path].val; /* _identified_modules_by_path on <self:ModelBuilder> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _identified_modules_by_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 311);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
var50 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var47, var_path);
}
var = var50;
goto RET_LABEL;
} else {
}
{
var51 = nitc__loader___ModelBuilder___module_absolute_path(self, var_path);
}
var_rp = var51;
{
{ /* Inline loader#ModelBuilder#identified_modules_by_path (self) on <self:ModelBuilder> */
var54 = self->attrs[COLOR_nitc__loader__ModelBuilder___identified_modules_by_path].val; /* _identified_modules_by_path on <self:ModelBuilder> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _identified_modules_by_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 311);
fatal_exit(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
var55 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var52, var_rp);
}
if (var55){
{
{ /* Inline loader#ModelBuilder#identified_modules_by_path (self) on <self:ModelBuilder> */
var58 = self->attrs[COLOR_nitc__loader__ModelBuilder___identified_modules_by_path].val; /* _identified_modules_by_path on <self:ModelBuilder> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _identified_modules_by_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 311);
fatal_exit(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
var59 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var56, var_rp);
}
var = var59;
goto RET_LABEL;
} else {
}
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = ".nit";
var63 = core__flat___NativeString___to_s_full(var62, 4l, 4l);
var61 = var63;
varonce60 = var61;
}
{
var64 = ((val*(*)(val* self, val* p0))(var_path->class->vft[COLOR_core__file__String__basename]))(var_path, var61); /* basename on <var_path:String>*/
}
var_pn = var64;
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = "..";
var68 = core__flat___NativeString___to_s_full(var67, 2l, 2l);
var66 = var68;
varonce65 = var66;
}
{
var69 = core__file___String___join_path(var_path, var66);
}
{
var70 = core__file___String___simplify_path(var69);
}
var_mgrouppath = var70;
{
var71 = nitc__loader___ModelBuilder___identify_group(self, var_mgrouppath);
}
var_mgroup72 = var71;
if (var_mgroup72 == NULL) {
var73 = 1; /* is null */
} else {
var73 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mgroup72,((val*)NULL)) on <var_mgroup72:nullable MGroup> */
var_other76 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mgroup72,var_other76) on <var_mgroup72:nullable MGroup(MGroup)> */
var79 = var_mgroup72 == var_other76;
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
var80 = NEW_nitc__MPackage(&type_nitc__MPackage);
{
{ /* Inline modelbuilder_base#ModelBuilder#model (self) on <self:ModelBuilder> */
var83 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var83 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 44);
fatal_exit(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var80->class->vft[COLOR_nitc__mpackage__MPackage__name_61d]))(var80, var_pn); /* name= on <var80:MPackage>*/
}
{
((void(*)(val* self, val* p0))(var80->class->vft[COLOR_nitc__mpackage__MPackage__model_61d]))(var80, var81); /* model= on <var80:MPackage>*/
}
{
((void(*)(val* self))(var80->class->vft[COLOR_core__kernel__Object__init]))(var80); /* init on <var80:MPackage>*/
}
var_mpackage = var80;
var84 = NEW_nitc__MGroup(&type_nitc__MGroup);
{
((void(*)(val* self, val* p0))(var84->class->vft[COLOR_nitc__mpackage__MGroup__name_61d]))(var84, var_pn); /* name= on <var84:MGroup>*/
}
{
((void(*)(val* self, val* p0))(var84->class->vft[COLOR_nitc__mpackage__MGroup__mpackage_61d]))(var84, var_mpackage); /* mpackage= on <var84:MGroup>*/
}
{
((void(*)(val* self, val* p0))(var84->class->vft[COLOR_nitc__mpackage__MGroup__parent_61d]))(var84, ((val*)NULL)); /* parent= on <var84:MGroup>*/
}
{
((void(*)(val* self))(var84->class->vft[COLOR_core__kernel__Object__init]))(var84); /* init on <var84:MGroup>*/
}
var_mgroup72 = var84;
{
{ /* Inline mpackage#MGroup#filepath= (var_mgroup72,var_path) on <var_mgroup72:nullable MGroup(MGroup)> */
var_mgroup72->attrs[COLOR_nitc__mpackage__MGroup___filepath].val = var_path; /* _filepath on <var_mgroup72:nullable MGroup(MGroup)> */
RET_LABEL85:(void)0;
}
}
{
{ /* Inline mpackage#MPackage#root= (var_mpackage,var_mgroup72) on <var_mpackage:MPackage> */
var_mpackage->attrs[COLOR_nitc__mpackage__MPackage___root].val = var_mgroup72; /* _root on <var_mpackage:MPackage> */
RET_LABEL86:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var89 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var89 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var87 = var89;
RET_LABEL88:(void)0;
}
}
if (unlikely(varonce90==NULL)) {
var91 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce92!=NULL)) {
var93 = varonce92;
} else {
var94 = "found singleton package `";
var95 = core__flat___NativeString___to_s_full(var94, 25l, 25l);
var93 = var95;
varonce92 = var93;
}
((struct instance_core__NativeArray*)var91)->values[0]=var93;
if (likely(varonce96!=NULL)) {
var97 = varonce96;
} else {
var98 = "` at ";
var99 = core__flat___NativeString___to_s_full(var98, 5l, 5l);
var97 = var99;
varonce96 = var97;
}
((struct instance_core__NativeArray*)var91)->values[2]=var97;
} else {
var91 = varonce90;
varonce90 = NULL;
}
((struct instance_core__NativeArray*)var91)->values[1]=var_pn;
((struct instance_core__NativeArray*)var91)->values[3]=var_path;
{
var100 = ((val*(*)(val* self))(var91->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var91); /* native_to_s on <var91:NativeArray[String]>*/
}
varonce90 = var91;
{
nitc___nitc__ToolContext___info(var87, var100, 2l); /* Direct call toolcontext#ToolContext#info on <var87:ToolContext>*/
}
{
var101 = core__file___String___dirname(var_path);
}
if (unlikely(varonce102==NULL)) {
var103 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce104!=NULL)) {
var105 = varonce104;
} else {
var106 = ".ini";
var107 = core__flat___NativeString___to_s_full(var106, 4l, 4l);
var105 = var107;
varonce104 = var105;
}
((struct instance_core__NativeArray*)var103)->values[1]=var105;
} else {
var103 = varonce102;
varonce102 = NULL;
}
((struct instance_core__NativeArray*)var103)->values[0]=var_pn;
{
var108 = ((val*(*)(val* self))(var103->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var103); /* native_to_s on <var103:NativeArray[String]>*/
}
varonce102 = var103;
{
var109 = core__file___String____47d(var101, var108);
}
var_inipath = var109;
{
var110 = core__file___String___file_exists(var_inipath);
}
if (var110){
var111 = NEW_ini__ConfigTree(&type_ini__ConfigTree);
{
((void(*)(val* self, val* p0))(var111->class->vft[COLOR_ini__ConfigTree__ini_file_61d]))(var111, var_inipath); /* ini_file= on <var111:ConfigTree>*/
}
{
((void(*)(val* self))(var111->class->vft[COLOR_core__kernel__Object__init]))(var111); /* init on <var111:ConfigTree>*/
}
var_ini = var111;
{
{ /* Inline loader#MPackage#ini= (var_mpackage,var_ini) on <var_mpackage:MPackage> */
var_mpackage->attrs[COLOR_nitc__loader__MPackage___ini].val = var_ini; /* _ini on <var_mpackage:MPackage> */
RET_LABEL112:(void)0;
}
}
} else {
}
} else {
}
var113 = NEW_nitc__SourceFile(&type_nitc__SourceFile);
if (likely(varonce114!=NULL)) {
var115 = varonce114;
} else {
var116 = "";
var117 = core__flat___NativeString___to_s_full(var116, 0l, 0l);
var115 = var117;
varonce114 = var115;
}
{
nitc___nitc__SourceFile___from_string(var113, var_path, var115); /* Direct call location#SourceFile#from_string on <var113:SourceFile>*/
}
var_src = var113;
var118 = NEW_nitc__Location(&type_nitc__Location);
{
((void(*)(val* self, val* p0))(var118->class->vft[COLOR_nitc__location__Location__file_61d]))(var118, var_src); /* file= on <var118:Location>*/
}
{
((void(*)(val* self, long p0))(var118->class->vft[COLOR_nitc__location__Location__line_start_61d]))(var118, 0l); /* line_start= on <var118:Location>*/
}
{
((void(*)(val* self, long p0))(var118->class->vft[COLOR_nitc__location__Location__line_end_61d]))(var118, 0l); /* line_end= on <var118:Location>*/
}
{
((void(*)(val* self, long p0))(var118->class->vft[COLOR_nitc__location__Location__column_start_61d]))(var118, 0l); /* column_start= on <var118:Location>*/
}
{
((void(*)(val* self, long p0))(var118->class->vft[COLOR_nitc__location__Location__column_end_61d]))(var118, 0l); /* column_end= on <var118:Location>*/
}
{
((void(*)(val* self))(var118->class->vft[COLOR_core__kernel__Object__init]))(var118); /* init on <var118:Location>*/
}
var_loc = var118;
var119 = NEW_nitc__MModule(&type_nitc__MModule);
{
{ /* Inline modelbuilder_base#ModelBuilder#model (self) on <self:ModelBuilder> */
var122 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var122 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 44);
fatal_exit(1);
}
var120 = var122;
RET_LABEL121:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var119->class->vft[COLOR_nitc__mmodule__MModule__model_61d]))(var119, var120); /* model= on <var119:MModule>*/
}
{
((void(*)(val* self, val* p0))(var119->class->vft[COLOR_nitc__mmodule__MModule__mgroup_61d]))(var119, var_mgroup72); /* mgroup= on <var119:MModule>*/
}
{
((void(*)(val* self, val* p0))(var119->class->vft[COLOR_nitc__mmodule__MModule__name_61d]))(var119, var_pn); /* name= on <var119:MModule>*/
}
{
((void(*)(val* self, val* p0))(var119->class->vft[COLOR_nitc__mmodule__MModule__location_61d]))(var119, var_loc); /* location= on <var119:MModule>*/
}
{
((void(*)(val* self))(var119->class->vft[COLOR_core__kernel__Object__init]))(var119); /* init on <var119:MModule>*/
}
var_res123 = var119;
{
{ /* Inline mmodule#MModule#filepath= (var_res123,var_path) on <var_res123:MModule> */
var_res123->attrs[COLOR_nitc__mmodule__MModule___filepath].val = var_path; /* _filepath on <var_res123:MModule> */
RET_LABEL124:(void)0;
}
}
{
{ /* Inline loader#ModelBuilder#identified_modules_by_path (self) on <self:ModelBuilder> */
var127 = self->attrs[COLOR_nitc__loader__ModelBuilder___identified_modules_by_path].val; /* _identified_modules_by_path on <self:ModelBuilder> */
if (unlikely(var127 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _identified_modules_by_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 311);
fatal_exit(1);
}
var125 = var127;
RET_LABEL126:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var125, var_rp, var_res123); /* Direct call hash_collection#HashMap#[]= on <var125:HashMap[String, nullable MModule]>*/
}
{
{ /* Inline loader#ModelBuilder#identified_modules_by_path (self) on <self:ModelBuilder> */
var130 = self->attrs[COLOR_nitc__loader__ModelBuilder___identified_modules_by_path].val; /* _identified_modules_by_path on <self:ModelBuilder> */
if (unlikely(var130 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _identified_modules_by_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 311);
fatal_exit(1);
}
var128 = var130;
RET_LABEL129:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var128, var_path, var_res123); /* Direct call hash_collection#HashMap#[]= on <var128:HashMap[String, nullable MModule]>*/
}
{
{ /* Inline loader#ModelBuilder#identified_modules (self) on <self:ModelBuilder> */
var133 = self->attrs[COLOR_nitc__loader__ModelBuilder___identified_modules].val; /* _identified_modules on <self:ModelBuilder> */
if (unlikely(var133 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _identified_modules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 314);
fatal_exit(1);
}
var131 = var133;
RET_LABEL132:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var131, var_res123); /* Direct call array#Array#add on <var131:Array[MModule]>*/
}
var = var_res123;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#mgroups for (self: ModelBuilder): HashMap[String, nullable MGroup] */
val* nitc__loader___ModelBuilder___mgroups(val* self) {
val* var /* : HashMap[String, nullable MGroup] */;
val* var1 /* : HashMap[String, nullable MGroup] */;
var1 = self->attrs[COLOR_nitc__loader__ModelBuilder___mgroups].val; /* _mgroups on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroups");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 409);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#identify_group for (self: ModelBuilder, String): nullable MGroup */
val* nitc__loader___ModelBuilder___identify_group(val* self, val* p0) {
val* var /* : nullable MGroup */;
val* var_dirpath /* var dirpath: String */;
val* var1 /* : nullable FileStat */;
val* var_stat /* var stat: nullable FileStat */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : SequenceRead[Char] */;
val* var9 /* : nullable Object */;
short int var10 /* : Bool */;
val* var11 /* : Array[String] */;
val* var13 /* : Array[String] */;
val* var_ /* var : Array[String] */;
val* var14 /* : IndexedIterator[nullable Object] */;
val* var_15 /* var : IndexedIterator[String] */;
short int var16 /* : Bool */;
val* var17 /* : nullable Object */;
val* var_p /* var p: String */;
val* var18 /* : String */;
val* var_try /* var try: String */;
val* var19 /* : nullable FileStat */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var_other23 /* var other: nullable Object */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : String */;
val* var_rdp /* var rdp: String */;
val* var29 /* : HashMap[String, nullable MGroup] */;
val* var31 /* : HashMap[String, nullable MGroup] */;
short int var32 /* : Bool */;
val* var33 /* : HashMap[String, nullable MGroup] */;
val* var35 /* : HashMap[String, nullable MGroup] */;
val* var36 /* : nullable Object */;
val* var37 /* : String */;
val* var_pn /* var pn: String */;
val* var_ini /* var ini: nullable Object */;
val* var_parent /* var parent: nullable Object */;
static val* varonce;
val* var38 /* : String */;
char* var39 /* : NativeString */;
val* var40 /* : String */;
val* var41 /* : String */;
val* var_inipath /* var inipath: String */;
short int var42 /* : Bool */;
val* var43 /* : ConfigTree */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
val* var53 /* : String */;
short int var54 /* : Bool */;
val* var55 /* : HashMap[String, nullable MGroup] */;
val* var57 /* : HashMap[String, nullable MGroup] */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
val* var61 /* : String */;
val* var62 /* : String */;
short int var63 /* : Bool */;
val* var64 /* : HashMap[String, nullable MGroup] */;
val* var66 /* : HashMap[String, nullable MGroup] */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
val* var70 /* : String */;
val* var71 /* : String */;
val* var72 /* : String */;
val* var_parentpath /* var parentpath: String */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
val* var76 /* : String */;
val* var77 /* : String */;
val* var_stopper /* var stopper: String */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
val* var80 /* : nullable MGroup */;
short int var81 /* : Bool */;
short int var82 /* : Bool */;
short int var84 /* : Bool */;
short int var86 /* : Bool */;
val* var87 /* : HashMap[String, nullable MGroup] */;
val* var89 /* : HashMap[String, nullable MGroup] */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
short int var93 /* : Bool */;
short int var95 /* : Bool */;
short int var96 /* : Bool */;
short int var97 /* : Bool */;
short int var99 /* : Bool */;
short int var100 /* : Bool */;
val* var101 /* : String */;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : NativeString */;
val* var105 /* : String */;
val* var106 /* : nullable String */;
val* var107 /* : MPackage */;
val* var108 /* : Model */;
val* var110 /* : Model */;
val* var_mpackage /* var mpackage: MPackage */;
val* var111 /* : MGroup */;
val* var_mgroup /* var mgroup: nullable Object */;
val* var113 /* : ToolContext */;
val* var115 /* : ToolContext */;
val* var117 /* : NativeArray[String] */;
static val* varonce116;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : NativeString */;
val* var121 /* : String */;
static val* varonce122;
val* var123 /* : String */;
char* var124 /* : NativeString */;
val* var125 /* : String */;
val* var126 /* : String */;
val* var127 /* : String */;
val* var129 /* : MGroup */;
val* var130 /* : MPackage */;
val* var132 /* : MPackage */;
val* var133 /* : ToolContext */;
val* var135 /* : ToolContext */;
val* var137 /* : NativeArray[String] */;
static val* varonce136;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : NativeString */;
val* var141 /* : String */;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : NativeString */;
val* var145 /* : String */;
val* var146 /* : String */;
val* var147 /* : String */;
static val* varonce148;
val* var149 /* : String */;
char* var150 /* : NativeString */;
val* var151 /* : String */;
val* var152 /* : String */;
val* var_readme /* var readme: String */;
short int var153 /* : Bool */;
short int var154 /* : Bool */;
static val* varonce155;
val* var156 /* : String */;
char* var157 /* : NativeString */;
val* var158 /* : String */;
val* var159 /* : String */;
short int var160 /* : Bool */;
val* var161 /* : MDoc */;
val* var_mdoc /* var mdoc: MDoc */;
val* var165 /* : HashMap[String, nullable MGroup] */;
val* var167 /* : HashMap[String, nullable MGroup] */;
var_dirpath = p0;
{
var1 = core__file___String___file_stat(var_dirpath);
}
var_stat = var1;
if (var_stat == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_stat,((val*)NULL)) on <var_stat:nullable FileStat> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_stat,var_other) on <var_stat:nullable FileStat(FileStat)> */
var7 = var_stat == var_other;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
{
var8 = ((val*(*)(val* self))(var_dirpath->class->vft[COLOR_core__abstract_text__Text__chars]))(var_dirpath); /* chars on <var_dirpath:String>*/
}
{
var9 = (val*)((long)('/')<<2|2);
var10 = ((short int(*)(val* self, val* p0))((((long)var8&3)?class_info[((long)var8&3)]:var8->class)->vft[COLOR_core__abstract_collection__Collection__has]))(var8, var9); /* has on <var8:SequenceRead[Char]>*/
}
if (var10){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline loader#ModelBuilder#paths (self) on <self:ModelBuilder> */
var13 = self->attrs[COLOR_nitc__loader__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 208);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
var_ = var11;
{
var14 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_15 = var14;
for(;;) {
{
var16 = ((short int(*)(val* self))((((long)var_15&3)?class_info[((long)var_15&3)]:var_15->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_15); /* is_ok on <var_15:IndexedIterator[String]>*/
}
if (var16){
} else {
goto BREAK_label;
}
{
var17 = ((val*(*)(val* self))((((long)var_15&3)?class_info[((long)var_15&3)]:var_15->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_15); /* item on <var_15:IndexedIterator[String]>*/
}
var_p = var17;
{
var18 = core__file___String____47d(var_p, var_dirpath);
}
var_try = var18;
{
var19 = core__file___String___file_stat(var_try);
}
var_stat = var19;
if (var_stat == NULL) {
var20 = 0; /* is null */
} else {
var20 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_stat,((val*)NULL)) on <var_stat:nullable FileStat> */
var_other23 = ((val*)NULL);
{
var24 = ((short int(*)(val* self, val* p0))(var_stat->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_stat, var_other23); /* == on <var_stat:nullable FileStat(FileStat)>*/
}
var25 = !var24;
var21 = var25;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (var20){
var_dirpath = var_try;
goto BREAK_;
} else {
}
{
((void(*)(val* self))((((long)var_15&3)?class_info[((long)var_15&3)]:var_15->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_15); /* next on <var_15:IndexedIterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_15&3)?class_info[((long)var_15&3)]:var_15->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_15); /* finish on <var_15:IndexedIterator[String]>*/
}
var = ((val*)NULL);
goto RET_LABEL;
BREAK_: (void)0;
} else {
}
{
var26 = core___core__FileStat___is_dir(var_stat);
}
var27 = !var26;
if (var27){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var28 = nitc__loader___ModelBuilder___module_absolute_path(self, var_dirpath);
}
var_rdp = var28;
{
{ /* Inline loader#ModelBuilder#mgroups (self) on <self:ModelBuilder> */
var31 = self->attrs[COLOR_nitc__loader__ModelBuilder___mgroups].val; /* _mgroups on <self:ModelBuilder> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroups");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 409);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
var32 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var29, var_rdp);
}
if (var32){
{
{ /* Inline loader#ModelBuilder#mgroups (self) on <self:ModelBuilder> */
var35 = self->attrs[COLOR_nitc__loader__ModelBuilder___mgroups].val; /* _mgroups on <self:ModelBuilder> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroups");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 409);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
var36 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var33, var_rdp);
}
var = var36;
goto RET_LABEL;
} else {
}
{
var37 = ((val*(*)(val* self, val* p0))(var_rdp->class->vft[COLOR_core__file__String__basename]))(var_rdp, ((val*)NULL)); /* basename on <var_rdp:String>*/
}
var_pn = var37;
var_ini = ((val*)NULL);
var_parent = ((val*)NULL);
if (likely(varonce!=NULL)) {
var38 = varonce;
} else {
var39 = "package.ini";
var40 = core__flat___NativeString___to_s_full(var39, 11l, 11l);
var38 = var40;
varonce = var38;
}
{
var41 = core__file___String____47d(var_dirpath, var38);
}
var_inipath = var41;
{
var42 = core__file___String___file_exists(var_inipath);
}
if (var42){
var43 = NEW_ini__ConfigTree(&type_ini__ConfigTree);
{
((void(*)(val* self, val* p0))(var43->class->vft[COLOR_ini__ConfigTree__ini_file_61d]))(var43, var_inipath); /* ini_file= on <var43:ConfigTree>*/
}
{
((void(*)(val* self))(var43->class->vft[COLOR_core__kernel__Object__init]))(var43); /* init on <var43:ConfigTree>*/
}
var_ini = var43;
} else {
}
if (var_ini == NULL) {
var44 = 1; /* is null */
} else {
var44 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ini,((val*)NULL)) on <var_ini:nullable Object(nullable ConfigTree)> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_ini,var_other) on <var_ini:nullable ConfigTree(ConfigTree)> */
var49 = var_ini == var_other;
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
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = "/";
var53 = core__flat___NativeString___to_s_full(var52, 1l, 1l);
var51 = var53;
varonce50 = var51;
}
{
var54 = ((short int(*)(val* self, val* p0))(var_rdp->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_rdp, var51); /* == on <var_rdp:String>*/
}
if (var54){
{
{ /* Inline loader#ModelBuilder#mgroups (self) on <self:ModelBuilder> */
var57 = self->attrs[COLOR_nitc__loader__ModelBuilder___mgroups].val; /* _mgroups on <self:ModelBuilder> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroups");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 409);
fatal_exit(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var55, var_rdp, ((val*)NULL)); /* Direct call hash_collection#HashMap#[]= on <var55:HashMap[String, nullable MGroup]>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "packages.ini";
var61 = core__flat___NativeString___to_s_full(var60, 12l, 12l);
var59 = var61;
varonce58 = var59;
}
{
var62 = core__file___String____47d(var_dirpath, var59);
}
{
var63 = core__file___String___file_exists(var62);
}
if (var63){
{
{ /* Inline loader#ModelBuilder#mgroups (self) on <self:ModelBuilder> */
var66 = self->attrs[COLOR_nitc__loader__ModelBuilder___mgroups].val; /* _mgroups on <self:ModelBuilder> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroups");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 409);
fatal_exit(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var64, var_rdp, ((val*)NULL)); /* Direct call hash_collection#HashMap#[]= on <var64:HashMap[String, nullable MGroup]>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = "..";
var70 = core__flat___NativeString___to_s_full(var69, 2l, 2l);
var68 = var70;
varonce67 = var68;
}
{
var71 = core__file___String___join_path(var_dirpath, var68);
}
{
var72 = core__file___String___simplify_path(var71);
}
var_parentpath = var72;
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = "packages.ini";
var76 = core__flat___NativeString___to_s_full(var75, 12l, 12l);
var74 = var76;
varonce73 = var74;
}
{
var77 = core__file___String____47d(var_parentpath, var74);
}
var_stopper = var77;
{
var78 = core__file___String___file_exists(var_stopper);
}
var79 = !var78;
if (var79){
{
var80 = nitc__loader___ModelBuilder___identify_group(self, var_parentpath);
}
var_parent = var80;
if (var_parent == NULL) {
var81 = 1; /* is null */
} else {
var81 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_parent,((val*)NULL)) on <var_parent:nullable Object(nullable MGroup)> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_parent,var_other) on <var_parent:nullable MGroup(MGroup)> */
var86 = var_parent == var_other;
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
{
{ /* Inline loader#ModelBuilder#mgroups (self) on <self:ModelBuilder> */
var89 = self->attrs[COLOR_nitc__loader__ModelBuilder___mgroups].val; /* _mgroups on <self:ModelBuilder> */
if (unlikely(var89 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroups");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 409);
fatal_exit(1);
}
var87 = var89;
RET_LABEL88:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var87, var_rdp, ((val*)NULL)); /* Direct call hash_collection#HashMap#[]= on <var87:HashMap[String, nullable MGroup]>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
} else {
}
} else {
}
if (var_parent == NULL) {
var90 = 1; /* is null */
} else {
var90 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_parent,((val*)NULL)) on <var_parent:nullable Object(nullable MGroup)> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_parent,var_other) on <var_parent:nullable MGroup(MGroup)> */
var95 = var_parent == var_other;
var93 = var95;
goto RET_LABEL94;
RET_LABEL94:(void)0;
}
}
var91 = var93;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
var90 = var91;
}
if (var90){
if (var_ini == NULL) {
var96 = 0; /* is null */
} else {
var96 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ini,((val*)NULL)) on <var_ini:nullable Object(nullable ConfigTree)> */
var_other23 = ((val*)NULL);
{
var99 = ((short int(*)(val* self, val* p0))(var_ini->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ini, var_other23); /* == on <var_ini:nullable ConfigTree(ConfigTree)>*/
}
var100 = !var99;
var97 = var100;
goto RET_LABEL98;
RET_LABEL98:(void)0;
}
var96 = var97;
}
if (var96){
if (likely(varonce102!=NULL)) {
var103 = varonce102;
} else {
var104 = "package.name";
var105 = core__flat___NativeString___to_s_full(var104, 12l, 12l);
var103 = var105;
varonce102 = var103;
}
{
var106 = ini___ini__ConfigTree____91d_93d(var_ini, var103);
}
if (var106!=NULL) {
var101 = var106;
} else {
var101 = var_pn;
}
var_pn = var101;
} else {
}
var107 = NEW_nitc__MPackage(&type_nitc__MPackage);
{
{ /* Inline modelbuilder_base#ModelBuilder#model (self) on <self:ModelBuilder> */
var110 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var110 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 44);
fatal_exit(1);
}
var108 = var110;
RET_LABEL109:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var107->class->vft[COLOR_nitc__mpackage__MPackage__name_61d]))(var107, var_pn); /* name= on <var107:MPackage>*/
}
{
((void(*)(val* self, val* p0))(var107->class->vft[COLOR_nitc__mpackage__MPackage__model_61d]))(var107, var108); /* model= on <var107:MPackage>*/
}
{
((void(*)(val* self))(var107->class->vft[COLOR_core__kernel__Object__init]))(var107); /* init on <var107:MPackage>*/
}
var_mpackage = var107;
var111 = NEW_nitc__MGroup(&type_nitc__MGroup);
{
((void(*)(val* self, val* p0))(var111->class->vft[COLOR_nitc__mpackage__MGroup__name_61d]))(var111, var_pn); /* name= on <var111:MGroup>*/
}
{
((void(*)(val* self, val* p0))(var111->class->vft[COLOR_nitc__mpackage__MGroup__mpackage_61d]))(var111, var_mpackage); /* mpackage= on <var111:MGroup>*/
}
{
((void(*)(val* self, val* p0))(var111->class->vft[COLOR_nitc__mpackage__MGroup__parent_61d]))(var111, ((val*)NULL)); /* parent= on <var111:MGroup>*/
}
{
((void(*)(val* self))(var111->class->vft[COLOR_core__kernel__Object__init]))(var111); /* init on <var111:MGroup>*/
}
var_mgroup = var111;
{
{ /* Inline mpackage#MPackage#root= (var_mpackage,var_mgroup) on <var_mpackage:MPackage> */
var_mpackage->attrs[COLOR_nitc__mpackage__MPackage___root].val = var_mgroup; /* _root on <var_mpackage:MPackage> */
RET_LABEL112:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var115 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var115 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var113 = var115;
RET_LABEL114:(void)0;
}
}
if (unlikely(varonce116==NULL)) {
var117 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce118!=NULL)) {
var119 = varonce118;
} else {
var120 = "found package `";
var121 = core__flat___NativeString___to_s_full(var120, 15l, 15l);
var119 = var121;
varonce118 = var119;
}
((struct instance_core__NativeArray*)var117)->values[0]=var119;
if (likely(varonce122!=NULL)) {
var123 = varonce122;
} else {
var124 = "` at ";
var125 = core__flat___NativeString___to_s_full(var124, 5l, 5l);
var123 = var125;
varonce122 = var123;
}
((struct instance_core__NativeArray*)var117)->values[2]=var123;
} else {
var117 = varonce116;
varonce116 = NULL;
}
{
var126 = ((val*(*)(val* self))(var_mpackage->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mpackage); /* to_s on <var_mpackage:MPackage>*/
}
((struct instance_core__NativeArray*)var117)->values[1]=var126;
((struct instance_core__NativeArray*)var117)->values[3]=var_dirpath;
{
var127 = ((val*(*)(val* self))(var117->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var117); /* native_to_s on <var117:NativeArray[String]>*/
}
varonce116 = var117;
{
nitc___nitc__ToolContext___info(var113, var127, 2l); /* Direct call toolcontext#ToolContext#info on <var113:ToolContext>*/
}
{
{ /* Inline loader#MPackage#ini= (var_mpackage,var_ini) on <var_mpackage:MPackage> */
var_mpackage->attrs[COLOR_nitc__loader__MPackage___ini].val = var_ini; /* _ini on <var_mpackage:MPackage> */
RET_LABEL128:(void)0;
}
}
} else {
var129 = NEW_nitc__MGroup(&type_nitc__MGroup);
{
{ /* Inline mpackage#MGroup#mpackage (var_parent) on <var_parent:nullable Object(MGroup)> */
var132 = var_parent->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val; /* _mpackage on <var_parent:nullable Object(MGroup)> */
if (unlikely(var132 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 69);
fatal_exit(1);
}
var130 = var132;
RET_LABEL131:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var129->class->vft[COLOR_nitc__mpackage__MGroup__name_61d]))(var129, var_pn); /* name= on <var129:MGroup>*/
}
{
((void(*)(val* self, val* p0))(var129->class->vft[COLOR_nitc__mpackage__MGroup__mpackage_61d]))(var129, var130); /* mpackage= on <var129:MGroup>*/
}
{
((void(*)(val* self, val* p0))(var129->class->vft[COLOR_nitc__mpackage__MGroup__parent_61d]))(var129, var_parent); /* parent= on <var129:MGroup>*/
}
{
((void(*)(val* self))(var129->class->vft[COLOR_core__kernel__Object__init]))(var129); /* init on <var129:MGroup>*/
}
var_mgroup = var129;
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var135 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var135 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var133 = var135;
RET_LABEL134:(void)0;
}
}
if (unlikely(varonce136==NULL)) {
var137 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce138!=NULL)) {
var139 = varonce138;
} else {
var140 = "found sub group `";
var141 = core__flat___NativeString___to_s_full(var140, 17l, 17l);
var139 = var141;
varonce138 = var139;
}
((struct instance_core__NativeArray*)var137)->values[0]=var139;
if (likely(varonce142!=NULL)) {
var143 = varonce142;
} else {
var144 = "` at ";
var145 = core__flat___NativeString___to_s_full(var144, 5l, 5l);
var143 = var145;
varonce142 = var143;
}
((struct instance_core__NativeArray*)var137)->values[2]=var143;
} else {
var137 = varonce136;
varonce136 = NULL;
}
{
var146 = nitc___nitc__MGroup___nitc__model_base__MEntity__full_name(var_mgroup);
}
((struct instance_core__NativeArray*)var137)->values[1]=var146;
((struct instance_core__NativeArray*)var137)->values[3]=var_dirpath;
{
var147 = ((val*(*)(val* self))(var137->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var137); /* native_to_s on <var137:NativeArray[String]>*/
}
varonce136 = var137;
{
nitc___nitc__ToolContext___info(var133, var147, 2l); /* Direct call toolcontext#ToolContext#info on <var133:ToolContext>*/
}
}
if (likely(varonce148!=NULL)) {
var149 = varonce148;
} else {
var150 = "README.md";
var151 = core__flat___NativeString___to_s_full(var150, 9l, 9l);
var149 = var151;
varonce148 = var149;
}
{
var152 = core__file___String___join_path(var_dirpath, var149);
}
var_readme = var152;
{
var153 = core__file___String___file_exists(var_readme);
}
var154 = !var153;
if (var154){
if (likely(varonce155!=NULL)) {
var156 = varonce155;
} else {
var157 = "README";
var158 = core__flat___NativeString___to_s_full(var157, 6l, 6l);
var156 = var158;
varonce155 = var156;
}
{
var159 = core__file___String___join_path(var_dirpath, var156);
}
var_readme = var159;
} else {
}
{
var160 = core__file___String___file_exists(var_readme);
}
if (var160){
{
var161 = nitc__loader___ModelBuilder___load_markdown(self, var_readme);
}
var_mdoc = var161;
{
{ /* Inline mdoc#MEntity#mdoc= (var_mgroup,var_mdoc) on <var_mgroup:nullable Object(MGroup)> */
var_mgroup->attrs[COLOR_nitc__mdoc__MEntity___mdoc].val = var_mdoc; /* _mdoc on <var_mgroup:nullable Object(MGroup)> */
RET_LABEL162:(void)0;
}
}
{
{ /* Inline mdoc#MDoc#original_mentity= (var_mdoc,var_mgroup) on <var_mdoc:MDoc> */
var_mdoc->attrs[COLOR_nitc__mdoc__MDoc___original_mentity].val = var_mgroup; /* _original_mentity on <var_mdoc:MDoc> */
RET_LABEL163:(void)0;
}
}
} else {
}
{
{ /* Inline mpackage#MGroup#filepath= (var_mgroup,var_dirpath) on <var_mgroup:nullable Object(MGroup)> */
var_mgroup->attrs[COLOR_nitc__mpackage__MGroup___filepath].val = var_dirpath; /* _filepath on <var_mgroup:nullable Object(MGroup)> */
RET_LABEL164:(void)0;
}
}
{
{ /* Inline loader#ModelBuilder#mgroups (self) on <self:ModelBuilder> */
var167 = self->attrs[COLOR_nitc__loader__ModelBuilder___mgroups].val; /* _mgroups on <self:ModelBuilder> */
if (unlikely(var167 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroups");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 409);
fatal_exit(1);
}
var165 = var167;
RET_LABEL166:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var165, var_rdp, var_mgroup); /* Direct call hash_collection#HashMap#[]= on <var165:HashMap[String, nullable MGroup]>*/
}
var = var_mgroup;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#load_markdown for (self: ModelBuilder, String): MDoc */
val* nitc__loader___ModelBuilder___load_markdown(val* self, val* p0) {
val* var /* : MDoc */;
val* var_filepath /* var filepath: String */;
val* var1 /* : FileReader */;
val* var_s /* var s: FileReader */;
val* var2 /* : Array[String] */;
val* var_lines /* var lines: Array[String] */;
val* var3 /* : Array[Int] */;
val* var_line_starts /* var line_starts: Array[Int] */;
long var_len /* var len: Int */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : String */;
val* var_line /* var line: String */;
val* var7 /* : nullable Object */;
long var8 /* : Int */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var12 /* : Int */;
long var13 /* : Int */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
long var19 /* : Int */;
val* var20 /* : SourceFile */;
static val* varonce;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : String */;
val* var24 /* : String */;
val* var_source /* var source: SourceFile */;
val* var25 /* : Array[Int] */;
val* var27 /* : Array[Int] */;
val* var28 /* : MDoc */;
val* var29 /* : Location */;
long var30 /* : Int */;
long var32 /* : Int */;
val* var_mdoc /* var mdoc: MDoc */;
val* var33 /* : Array[String] */;
val* var35 /* : Array[String] */;
var_filepath = p0;
var1 = NEW_core__FileReader(&type_core__FileReader);
{
core___core__FileReader___open(var1, var_filepath); /* Direct call file#FileReader#open on <var1:FileReader>*/
}
var_s = var1;
var2 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[String]>*/
}
var_lines = var2;
var3 = NEW_core__Array(&type_core__Array__core__Int);
{
core___core__Array___core__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Int]>*/
}
var_line_starts = var3;
var_len = 1l;
for(;;) {
{
var4 = core___core__BufferedReader___Reader__eof(var_s);
}
var5 = !var4;
if (var5){
{
var6 = core___core__Reader___read_line(var_s);
}
var_line = var6;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_lines, var_line); /* Direct call array#Array#add on <var_lines:Array[String]>*/
}
{
var7 = (val*)(var_len<<2|1);
core___core__Array___core__abstract_collection__SimpleCollection__add(var_line_starts, var7); /* Direct call array#Array#add on <var_line_starts:Array[Int]>*/
}
{
var8 = ((long(*)(val* self))(var_line->class->vft[COLOR_core__abstract_text__Text__length]))(var_line); /* length on <var_line:String>*/
}
{
{ /* Inline kernel#Int#+ (var8,1l) on <var8:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var11 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var12 = var8 + 1l;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_len,var9) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <var9:Int> isa OTHER */
/* <var9:Int> isa OTHER */
var15 = 1; /* easy <var9:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var19 = var_len + var9;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var_len = var13;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
core___core__FileReader___core__stream__Stream__close(var_s); /* Direct call file#FileReader#close on <var_s:FileReader>*/
}
var20 = NEW_nitc__SourceFile(&type_nitc__SourceFile);
if (likely(varonce!=NULL)) {
var21 = varonce;
} else {
var22 = "\n";
var23 = core__flat___NativeString___to_s_full(var22, 1l, 1l);
var21 = var23;
varonce = var21;
}
{
var24 = core__abstract_text___Collection___join(var_lines, var21);
}
{
nitc___nitc__SourceFile___from_string(var20, var_filepath, var24); /* Direct call location#SourceFile#from_string on <var20:SourceFile>*/
}
var_source = var20;
{
{ /* Inline location#SourceFile#line_starts (var_source) on <var_source:SourceFile> */
var27 = var_source->attrs[COLOR_nitc__location__SourceFile___line_starts].val; /* _line_starts on <var_source:SourceFile> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _line_starts");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 46);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var25, var_line_starts); /* Direct call array#Array#add_all on <var25:Array[Int]>*/
}
var28 = NEW_nitc__MDoc(&type_nitc__MDoc);
var29 = NEW_nitc__Location(&type_nitc__Location);
{
{ /* Inline array#AbstractArrayRead#length (var_lines) on <var_lines:Array[String]> */
var32 = var_lines->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_lines:Array[String]> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var29->class->vft[COLOR_nitc__location__Location__file_61d]))(var29, var_source); /* file= on <var29:Location>*/
}
{
((void(*)(val* self, long p0))(var29->class->vft[COLOR_nitc__location__Location__line_start_61d]))(var29, 1l); /* line_start= on <var29:Location>*/
}
{
((void(*)(val* self, long p0))(var29->class->vft[COLOR_nitc__location__Location__line_end_61d]))(var29, var30); /* line_end= on <var29:Location>*/
}
{
((void(*)(val* self, long p0))(var29->class->vft[COLOR_nitc__location__Location__column_start_61d]))(var29, 0l); /* column_start= on <var29:Location>*/
}
{
((void(*)(val* self, long p0))(var29->class->vft[COLOR_nitc__location__Location__column_end_61d]))(var29, 0l); /* column_end= on <var29:Location>*/
}
{
((void(*)(val* self))(var29->class->vft[COLOR_core__kernel__Object__init]))(var29); /* init on <var29:Location>*/
}
{
((void(*)(val* self, val* p0))(var28->class->vft[COLOR_nitc__mdoc__MDoc__location_61d]))(var28, var29); /* location= on <var28:MDoc>*/
}
{
((void(*)(val* self))(var28->class->vft[COLOR_core__kernel__Object__init]))(var28); /* init on <var28:MDoc>*/
}
var_mdoc = var28;
{
{ /* Inline mdoc#MDoc#content (var_mdoc) on <var_mdoc:MDoc> */
var35 = var_mdoc->attrs[COLOR_nitc__mdoc__MDoc___content].val; /* _content on <var_mdoc:MDoc> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _content");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mdoc, 23);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var33, var_lines); /* Direct call array#Array#add_all on <var33:Array[String]>*/
}
var = var_mdoc;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#scan_group for (self: ModelBuilder, MGroup) */
void nitc__loader___ModelBuilder___scan_group(val* self, val* p0) {
val* var_mgroup /* var mgroup: MGroup */;
short int var /* : Bool */;
short int var2 /* : Bool */;
val* var4 /* : nullable String */;
val* var6 /* : nullable String */;
val* var_p /* var p: nullable String */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : Array[String] */;
val* var_files /* var files: Array[String] */;
val* var10 /* : Sys */;
val* var11 /* : Comparator */;
val* var_ /* var : Array[String] */;
val* var12 /* : IndexedIterator[nullable Object] */;
val* var_13 /* var : IndexedIterator[String] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_f /* var f: String */;
val* var16 /* : String */;
val* var_fp /* var fp: String */;
val* var17 /* : nullable MGroup */;
val* var_g /* var g: nullable MGroup */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
val* var24 /* : nullable MModule */;
val* var25 /* : MPackage */;
val* var27 /* : MPackage */;
val* var28 /* : MPackage */;
val* var30 /* : MPackage */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
var_mgroup = p0;
{
{ /* Inline loader#MGroup#scanned (var_mgroup) on <var_mgroup:MGroup> */
var2 = var_mgroup->attrs[COLOR_nitc__loader__MGroup___scanned].s; /* _scanned on <var_mgroup:MGroup> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var){
goto RET_LABEL;
} else {
}
{
{ /* Inline loader#MGroup#scanned= (var_mgroup,1) on <var_mgroup:MGroup> */
var_mgroup->attrs[COLOR_nitc__loader__MGroup___scanned].s = 1; /* _scanned on <var_mgroup:MGroup> */
RET_LABEL3:(void)0;
}
}
{
{ /* Inline mpackage#MGroup#filepath (var_mgroup) on <var_mgroup:MGroup> */
var6 = var_mgroup->attrs[COLOR_nitc__mpackage__MGroup___filepath].val; /* _filepath on <var_mgroup:MGroup> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_p = var4;
if (var_p == NULL) {
var7 = 1; /* is null */
} else {
var7 = 0; /* arg is null but recv is not */
}
if (0) {
var8 = ((short int(*)(val* self, val* p0))(var_p->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_p, ((val*)NULL)); /* == on <var_p:nullable String>*/
var7 = var8;
}
if (var7){
goto RET_LABEL;
} else {
}
{
var9 = core__file___String___files(var_p);
}
var_files = var9;
var10 = glob_sys;
{
var11 = core__abstract_text___Sys___alpha_comparator(var10);
}
{
core___core__Comparator___sort(var11, var_files); /* Direct call sorter#Comparator#sort on <var11:Comparator>*/
}
var_ = var_files;
{
var12 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_13 = var12;
for(;;) {
{
var14 = ((short int(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_13); /* is_ok on <var_13:IndexedIterator[String]>*/
}
if (var14){
} else {
goto BREAK_label;
}
{
var15 = ((val*(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_13); /* item on <var_13:IndexedIterator[String]>*/
}
var_f = var15;
{
var16 = core__file___String____47d(var_p, var_f);
}
var_fp = var16;
{
var17 = nitc__loader___ModelBuilder___identify_group(self, var_fp);
}
var_g = var17;
if (var_g == NULL) {
var18 = 1; /* is null */
} else {
var18 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_g,((val*)NULL)) on <var_g:nullable MGroup> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_g,var_other) on <var_g:nullable MGroup(MGroup)> */
var23 = var_g == var_other;
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
{
var24 = nitc__loader___ModelBuilder___identify_module(self, var_fp);
}
} else {
{
{ /* Inline mpackage#MGroup#mpackage (var_g) on <var_g:nullable MGroup(MGroup)> */
var27 = var_g->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val; /* _mpackage on <var_g:nullable MGroup(MGroup)> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 69);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline mpackage#MGroup#mpackage (var_mgroup) on <var_mgroup:MGroup> */
var30 = var_mgroup->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val; /* _mpackage on <var_mgroup:MGroup> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 69);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var25,var28) on <var25:MPackage> */
var_other = var28;
{
{ /* Inline kernel#Object#is_same_instance (var25,var_other) on <var25:MPackage> */
var35 = var25 == var_other;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
if (var31){
{
nitc__loader___ModelBuilder___scan_group(self, var_g); /* Direct call loader#ModelBuilder#scan_group on <self:ModelBuilder>*/
}
} else {
}
}
{
((void(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_13); /* next on <var_13:IndexedIterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_13); /* finish on <var_13:IndexedIterator[String]>*/
}
RET_LABEL:;
}
/* method loader#ModelBuilder#module_absolute_path for (self: ModelBuilder, String): String */
val* nitc__loader___ModelBuilder___module_absolute_path(val* self, val* p0) {
val* var /* : String */;
val* var_path /* var path: String */;
val* var1 /* : String */;
var_path = p0;
{
var1 = core__file___String___realpath(var_path);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#load_module_ast for (self: ModelBuilder, String): nullable AModule */
val* nitc__loader___ModelBuilder___load_module_ast(val* self, val* p0) {
val* var /* : nullable AModule */;
val* var_filename /* var filename: String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : String */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : ToolContext */;
val* var8 /* : ToolContext */;
val* var10 /* : NativeArray[String] */;
static val* varonce9;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : String */;
val* var19 /* : String */;
val* var20 /* : Message */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var23 /* : ToolContext */;
val* var25 /* : ToolContext */;
val* var27 /* : NativeArray[String] */;
static val* varonce26;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
val* var31 /* : String */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
val* var35 /* : String */;
val* var36 /* : String */;
val* var37 /* : Message */;
val* var38 /* : ToolContext */;
val* var40 /* : ToolContext */;
val* var42 /* : NativeArray[String] */;
static val* varonce41;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
val* var46 /* : String */;
val* var47 /* : String */;
val* var48 /* : FileReader */;
val* var_file /* var file: FileReader */;
val* var49 /* : Lexer */;
val* var50 /* : SourceFile */;
val* var_lexer /* var lexer: Lexer */;
val* var51 /* : Parser */;
val* var_parser /* var parser: Parser */;
val* var52 /* : Start */;
val* var_tree /* var tree: Start */;
val* var53 /* : nullable AModule */;
val* var55 /* : nullable AModule */;
val* var_nmodule /* var nmodule: nullable AModule */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var59 /* : Bool */;
short int var61 /* : Bool */;
val* var62 /* : EOF */;
val* var64 /* : EOF */;
val* var_neof /* var neof: EOF */;
short int var65 /* : Bool */;
int cltype;
int idtype;
val* var66 /* : String */;
val* var68 /* : String */;
var_filename = p0;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = ".nit";
var3 = core__flat___NativeString___to_s_full(var2, 4l, 4l);
var1 = var3;
varonce = var1;
}
{
var4 = core___core__Text___has_suffix(var_filename, var1);
}
var5 = !var4;
if (var5){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var8 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (unlikely(varonce9==NULL)) {
var10 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "Error: file `";
var14 = core__flat___NativeString___to_s_full(var13, 13l, 13l);
var12 = var14;
varonce11 = var12;
}
((struct instance_core__NativeArray*)var10)->values[0]=var12;
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "` is not a valid nit module.";
var18 = core__flat___NativeString___to_s_full(var17, 28l, 28l);
var16 = var18;
varonce15 = var16;
}
((struct instance_core__NativeArray*)var10)->values[2]=var16;
} else {
var10 = varonce9;
varonce9 = NULL;
}
((struct instance_core__NativeArray*)var10)->values[1]=var_filename;
{
var19 = ((val*(*)(val* self))(var10->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var10); /* native_to_s on <var10:NativeArray[String]>*/
}
varonce9 = var10;
{
var20 = nitc___nitc__ToolContext___error(var6, ((val*)NULL), var19);
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var21 = core__file___String___file_exists(var_filename);
}
var22 = !var21;
if (var22){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var25 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
if (unlikely(varonce26==NULL)) {
var27 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "Error: file `";
var31 = core__flat___NativeString___to_s_full(var30, 13l, 13l);
var29 = var31;
varonce28 = var29;
}
((struct instance_core__NativeArray*)var27)->values[0]=var29;
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "` not found.";
var35 = core__flat___NativeString___to_s_full(var34, 12l, 12l);
var33 = var35;
varonce32 = var33;
}
((struct instance_core__NativeArray*)var27)->values[2]=var33;
} else {
var27 = varonce26;
varonce26 = NULL;
}
((struct instance_core__NativeArray*)var27)->values[1]=var_filename;
{
var36 = ((val*(*)(val* self))(var27->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var27); /* native_to_s on <var27:NativeArray[String]>*/
}
varonce26 = var27;
{
var37 = nitc___nitc__ToolContext___error(var23, ((val*)NULL), var36);
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var40 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
if (unlikely(varonce41==NULL)) {
var42 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "load module ";
var46 = core__flat___NativeString___to_s_full(var45, 12l, 12l);
var44 = var46;
varonce43 = var44;
}
((struct instance_core__NativeArray*)var42)->values[0]=var44;
} else {
var42 = varonce41;
varonce41 = NULL;
}
((struct instance_core__NativeArray*)var42)->values[1]=var_filename;
{
var47 = ((val*(*)(val* self))(var42->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var42); /* native_to_s on <var42:NativeArray[String]>*/
}
varonce41 = var42;
{
nitc___nitc__ToolContext___info(var38, var47, 2l); /* Direct call toolcontext#ToolContext#info on <var38:ToolContext>*/
}
var48 = NEW_core__FileReader(&type_core__FileReader);
{
core___core__FileReader___open(var48, var_filename); /* Direct call file#FileReader#open on <var48:FileReader>*/
}
var_file = var48;
var49 = NEW_nitc__Lexer(&type_nitc__Lexer);
var50 = NEW_nitc__SourceFile(&type_nitc__SourceFile);
{
((void(*)(val* self, val* p0))(var50->class->vft[COLOR_nitc__location__SourceFile__filename_61d]))(var50, var_filename); /* filename= on <var50:SourceFile>*/
}
{
((void(*)(val* self, val* p0))(var50->class->vft[COLOR_nitc__location__SourceFile__stream_61d]))(var50, var_file); /* stream= on <var50:SourceFile>*/
}
{
((void(*)(val* self))(var50->class->vft[COLOR_core__kernel__Object__init]))(var50); /* init on <var50:SourceFile>*/
}
{
((void(*)(val* self, val* p0))(var49->class->vft[COLOR_nitc__lexer_work__Lexer__file_61d]))(var49, var50); /* file= on <var49:Lexer>*/
}
{
((void(*)(val* self))(var49->class->vft[COLOR_core__kernel__Object__init]))(var49); /* init on <var49:Lexer>*/
}
var_lexer = var49;
var51 = NEW_nitc__Parser(&type_nitc__Parser);
{
((void(*)(val* self, val* p0))(var51->class->vft[COLOR_nitc__parser_work__Parser__lexer_61d]))(var51, var_lexer); /* lexer= on <var51:Parser>*/
}
{
((void(*)(val* self))(var51->class->vft[COLOR_core__kernel__Object__init]))(var51); /* init on <var51:Parser>*/
}
var_parser = var51;
{
var52 = nitc___nitc__Parser___parse(var_parser);
}
var_tree = var52;
{
core___core__FileReader___core__stream__Stream__close(var_file); /* Direct call file#FileReader#close on <var_file:FileReader>*/
}
{
{ /* Inline parser_nodes#Start#n_base (var_tree) on <var_tree:Start> */
var55 = var_tree->attrs[COLOR_nitc__parser_nodes__Start___n_base].val; /* _n_base on <var_tree:Start> */
var53 = var55;
RET_LABEL54:(void)0;
}
}
var_nmodule = var53;
if (var_nmodule == NULL) {
var56 = 1; /* is null */
} else {
var56 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nmodule,((val*)NULL)) on <var_nmodule:nullable AModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_nmodule,var_other) on <var_nmodule:nullable AModule(AModule)> */
var61 = var_nmodule == var_other;
var59 = var61;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
var57 = var59;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
var56 = var57;
}
if (var56){
{
{ /* Inline parser_nodes#Start#n_eof (var_tree) on <var_tree:Start> */
var64 = var_tree->attrs[COLOR_nitc__parser_nodes__Start___n_eof].val; /* _n_eof on <var_tree:Start> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_eof");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2975);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
var_neof = var62;
/* <var_neof:EOF> isa AError */
cltype = type_nitc__AError.color;
idtype = type_nitc__AError.id;
if(cltype >= var_neof->type->table_size) {
var65 = 0;
} else {
var65 = var_neof->type->type_table[cltype] == idtype;
}
if (unlikely(!var65)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 599);
fatal_exit(1);
}
{
{ /* Inline lexer_work#AError#message (var_neof) on <var_neof:EOF(AError)> */
var68 = var_neof->attrs[COLOR_nitc__lexer_work__AError___message].val; /* _message on <var_neof:EOF(AError)> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _message");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__lexer_work, 50);
fatal_exit(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
nitc___nitc__ModelBuilder___error(self, var_neof, var66); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var = var_nmodule;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#load_module for (self: ModelBuilder, String): nullable AModule */
val* nitc__loader___ModelBuilder___load_module(val* self, val* p0) {
val* var /* : nullable AModule */;
val* var_filename /* var filename: String */;
val* var1 /* : nullable MModule */;
val* var_mmodule /* var mmodule: nullable MModule */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : ToolContext */;
val* var11 /* : ToolContext */;
val* var12 /* : NativeArray[String] */;
static val* varonce;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : String */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : String */;
val* var21 /* : String */;
val* var22 /* : Message */;
val* var23 /* : ToolContext */;
val* var25 /* : ToolContext */;
val* var27 /* : NativeArray[String] */;
static val* varonce26;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
val* var31 /* : String */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
val* var35 /* : String */;
val* var36 /* : String */;
val* var37 /* : Message */;
val* var38 /* : nullable AModule */;
var_filename = p0;
{
var1 = nitc__loader___ModelBuilder___identify_module(self, var_filename);
}
var_mmodule = var1;
if (var_mmodule == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mmodule,((val*)NULL)) on <var_mmodule:nullable MModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mmodule,var_other) on <var_mmodule:nullable MModule(MModule)> */
var7 = var_mmodule == var_other;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
{
var8 = core__file___String___file_exists(var_filename);
}
if (var8){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var11 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var12 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "Error: `";
var16 = core__flat___NativeString___to_s_full(var15, 8l, 8l);
var14 = var16;
varonce13 = var14;
}
((struct instance_core__NativeArray*)var12)->values[0]=var14;
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "` is not a Nit source file.";
var20 = core__flat___NativeString___to_s_full(var19, 27l, 27l);
var18 = var20;
varonce17 = var18;
}
((struct instance_core__NativeArray*)var12)->values[2]=var18;
} else {
var12 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var12)->values[1]=var_filename;
{
var21 = ((val*(*)(val* self))(var12->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var12); /* native_to_s on <var12:NativeArray[String]>*/
}
varonce = var12;
{
var22 = nitc___nitc__ToolContext___error(var9, ((val*)NULL), var21);
}
} else {
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var25 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
if (unlikely(varonce26==NULL)) {
var27 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "Error: cannot find module `";
var31 = core__flat___NativeString___to_s_full(var30, 27l, 27l);
var29 = var31;
varonce28 = var29;
}
((struct instance_core__NativeArray*)var27)->values[0]=var29;
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "`.";
var35 = core__flat___NativeString___to_s_full(var34, 2l, 2l);
var33 = var35;
varonce32 = var33;
}
((struct instance_core__NativeArray*)var27)->values[2]=var33;
} else {
var27 = varonce26;
varonce26 = NULL;
}
((struct instance_core__NativeArray*)var27)->values[1]=var_filename;
{
var36 = ((val*(*)(val* self))(var27->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var27); /* native_to_s on <var27:NativeArray[String]>*/
}
varonce26 = var27;
{
var37 = nitc___nitc__ToolContext___error(var23, ((val*)NULL), var36);
}
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var38 = nitc__loader___MModule___load(var_mmodule, self);
}
var = var38;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#build_a_mmodule for (self: ModelBuilder, nullable MGroup, AModule) */
void nitc__loader___ModelBuilder___build_a_mmodule(val* self, val* p0, val* p1) {
val* var_mgroup /* var mgroup: nullable MGroup */;
val* var_nmodule /* var nmodule: AModule */;
val* var /* : nullable MModule */;
val* var2 /* : nullable MModule */;
val* var_mmodule /* var mmodule: nullable MModule */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable AModuledecl */;
val* var10 /* : nullable AModuledecl */;
val* var_decl /* var decl: nullable AModuledecl */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : AModuleName */;
val* var18 /* : AModuleName */;
val* var19 /* : TId */;
val* var21 /* : TId */;
val* var22 /* : String */;
val* var_decl_name /* var decl_name: String */;
val* var23 /* : String */;
val* var25 /* : String */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : AModuleName */;
val* var32 /* : AModuleName */;
val* var33 /* : NativeArray[String] */;
static val* varonce;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : String */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : String */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : String */;
val* var46 /* : String */;
val* var48 /* : String */;
val* var49 /* : String */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
val* var55 /* : Model */;
val* var57 /* : Model */;
val* var58 /* : String */;
val* var60 /* : String */;
val* var61 /* : nullable Array[MModule] */;
val* var_others /* var others: nullable Array[MModule] */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
val* var_ /* var : Array[MModule] */;
val* var67 /* : IndexedIterator[nullable Object] */;
val* var_68 /* var : IndexedIterator[MModule] */;
short int var69 /* : Bool */;
val* var70 /* : nullable Object */;
val* var_other71 /* var other: MModule */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
short int var75 /* : Bool */;
short int var77 /* : Bool */;
short int var78 /* : Bool */;
short int var_79 /* var : Bool */;
val* var80 /* : HashMap[MModule, AModule] */;
val* var82 /* : HashMap[MModule, AModule] */;
short int var83 /* : Bool */;
short int var_84 /* var : Bool */;
val* var85 /* : nullable MGroup */;
val* var87 /* : nullable MGroup */;
short int var88 /* : Bool */;
short int var89 /* : Bool */;
short int var91 /* : Bool */;
short int var92 /* : Bool */;
short int var_93 /* var : Bool */;
val* var94 /* : nullable MGroup */;
val* var96 /* : nullable MGroup */;
val* var97 /* : MPackage */;
val* var99 /* : MPackage */;
val* var100 /* : MPackage */;
val* var102 /* : MPackage */;
short int var103 /* : Bool */;
val* var_other105 /* var other: nullable Object */;
short int var106 /* : Bool */;
short int var108 /* : Bool */;
short int var109 /* : Bool */;
short int var110 /* : Bool */;
short int var112 /* : Bool */;
short int var114 /* : Bool */;
val* var_node /* var node: ANode */;
val* var115 /* : AModuleName */;
val* var117 /* : AModuleName */;
val* var119 /* : NativeArray[String] */;
static val* varonce118;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : NativeString */;
val* var123 /* : String */;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : NativeString */;
val* var127 /* : String */;
static val* varonce128;
val* var129 /* : String */;
char* var130 /* : NativeString */;
val* var131 /* : String */;
val* var132 /* : String */;
val* var133 /* : Location */;
val* var135 /* : Location */;
val* var136 /* : String */;
val* var137 /* : String */;
val* var138 /* : Array[AModule] */;
val* var140 /* : Array[AModule] */;
val* var141 /* : HashMap[MModule, AModule] */;
val* var143 /* : HashMap[MModule, AModule] */;
val* var144 /* : Location */;
val* var146 /* : Location */;
val* var147 /* : nullable SourceFile */;
val* var149 /* : nullable SourceFile */;
val* var_source /* var source: nullable SourceFile */;
short int var150 /* : Bool */;
short int var151 /* : Bool */;
short int var153 /* : Bool */;
short int var154 /* : Bool */;
val* var155 /* : nullable MModule */;
val* var157 /* : nullable MModule */;
short int var158 /* : Bool */;
short int var159 /* : Bool */;
short int var161 /* : Bool */;
short int var163 /* : Bool */;
short int var165 /* : Bool */;
short int var166 /* : Bool */;
short int var168 /* : Bool */;
short int var169 /* : Bool */;
val* var170 /* : nullable ADoc */;
val* var172 /* : nullable ADoc */;
val* var_ndoc /* var ndoc: nullable ADoc */;
short int var173 /* : Bool */;
short int var174 /* : Bool */;
short int var176 /* : Bool */;
short int var177 /* : Bool */;
val* var178 /* : MDoc */;
val* var_mdoc /* var mdoc: MDoc */;
static val* varonce181;
val* var182 /* : String */;
char* var183 /* : NativeString */;
val* var184 /* : String */;
val* var185 /* : Array[AAnnotation] */;
short int var186 /* : Bool */;
short int var187 /* : Bool */;
var_mgroup = p0;
var_nmodule = p1;
{
{ /* Inline loader#AModule#mmodule (var_nmodule) on <var_nmodule:AModule> */
var2 = var_nmodule->attrs[COLOR_nitc__loader__AModule___mmodule].val; /* _mmodule on <var_nmodule:AModule> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mmodule = var;
if (var_mmodule == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mmodule,((val*)NULL)) on <var_mmodule:nullable MModule> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_mmodule->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mmodule, var_other); /* == on <var_mmodule:nullable MModule(MModule)>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 679);
fatal_exit(1);
}
{
{ /* Inline parser_nodes#AModule#n_moduledecl (var_nmodule) on <var_nmodule:AModule> */
var10 = var_nmodule->attrs[COLOR_nitc__parser_nodes__AModule___n_moduledecl].val; /* _n_moduledecl on <var_nmodule:AModule> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_decl = var8;
if (var_decl == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_decl,((val*)NULL)) on <var_decl:nullable AModuledecl> */
var_other = ((val*)NULL);
{
var14 = ((short int(*)(val* self, val* p0))(var_decl->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_decl, var_other); /* == on <var_decl:nullable AModuledecl(AModuledecl)>*/
}
var15 = !var14;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
if (var11){
{
{ /* Inline parser_nodes#AModuledecl#n_name (var_decl) on <var_decl:nullable AModuledecl(AModuledecl)> */
var18 = var_decl->attrs[COLOR_nitc__parser_nodes__AModuledecl___n_name].val; /* _n_name on <var_decl:nullable AModuledecl(AModuledecl)> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1086);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline parser_nodes#AModuleName#n_id (var16) on <var16:AModuleName> */
var21 = var16->attrs[COLOR_nitc__parser_nodes__AModuleName___n_id].val; /* _n_id on <var16:AModuleName> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2838);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = nitc__lexer_work___Token___text(var19);
}
var_decl_name = var22;
{
{ /* Inline mmodule#MModule#name (var_mmodule) on <var_mmodule:nullable MModule(MModule)> */
var25 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___name].val; /* _name on <var_mmodule:nullable MModule(MModule)> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 95);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var_decl_name,var23) on <var_decl_name:String> */
var_other = var23;
{
var28 = ((short int(*)(val* self, val* p0))(var_decl_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_decl_name, var_other); /* == on <var_decl_name:String>*/
}
var29 = !var28;
var26 = var29;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
if (var26){
{
{ /* Inline parser_nodes#AModuledecl#n_name (var_decl) on <var_decl:nullable AModuledecl(AModuledecl)> */
var32 = var_decl->attrs[COLOR_nitc__parser_nodes__AModuledecl___n_name].val; /* _n_name on <var_decl:nullable AModuledecl(AModuledecl)> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1086);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var33 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "Error: module name mismatch; declared ";
var37 = core__flat___NativeString___to_s_full(var36, 38l, 38l);
var35 = var37;
varonce34 = var35;
}
((struct instance_core__NativeArray*)var33)->values[0]=var35;
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = " file named ";
var41 = core__flat___NativeString___to_s_full(var40, 12l, 12l);
var39 = var41;
varonce38 = var39;
}
((struct instance_core__NativeArray*)var33)->values[2]=var39;
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = ".";
var45 = core__flat___NativeString___to_s_full(var44, 1l, 1l);
var43 = var45;
varonce42 = var43;
}
((struct instance_core__NativeArray*)var33)->values[4]=var43;
} else {
var33 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var33)->values[1]=var_decl_name;
{
{ /* Inline mmodule#MModule#name (var_mmodule) on <var_mmodule:nullable MModule(MModule)> */
var48 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___name].val; /* _name on <var_mmodule:nullable MModule(MModule)> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 95);
fatal_exit(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
((struct instance_core__NativeArray*)var33)->values[3]=var46;
{
var49 = ((val*(*)(val* self))(var33->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var33); /* native_to_s on <var33:NativeArray[String]>*/
}
varonce = var33;
{
nitc___nitc__ModelBuilder___error(self, var30, var49); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
} else {
}
if (var_mgroup == NULL) {
var50 = 0; /* is null */
} else {
var50 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mgroup,((val*)NULL)) on <var_mgroup:nullable MGroup> */
var_other = ((val*)NULL);
{
var53 = ((short int(*)(val* self, val* p0))(var_mgroup->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mgroup, var_other); /* == on <var_mgroup:nullable MGroup(MGroup)>*/
}
var54 = !var53;
var51 = var54;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
var50 = var51;
}
if (var50){
{
{ /* Inline modelbuilder_base#ModelBuilder#model (self) on <self:ModelBuilder> */
var57 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 44);
fatal_exit(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
{ /* Inline mmodule#MModule#name (var_mmodule) on <var_mmodule:nullable MModule(MModule)> */
var60 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___name].val; /* _name on <var_mmodule:nullable MModule(MModule)> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 95);
fatal_exit(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
var61 = nitc__mmodule___Model___get_mmodules_by_name(var55, var58);
}
var_others = var61;
if (var_others == NULL) {
var62 = 0; /* is null */
} else {
var62 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_others,((val*)NULL)) on <var_others:nullable Array[MModule]> */
var_other = ((val*)NULL);
{
var65 = ((short int(*)(val* self, val* p0))(var_others->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_others, var_other); /* == on <var_others:nullable Array[MModule](Array[MModule])>*/
}
var66 = !var65;
var63 = var66;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
var62 = var63;
}
if (var62){
var_ = var_others;
{
var67 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_68 = var67;
for(;;) {
{
var69 = ((short int(*)(val* self))((((long)var_68&3)?class_info[((long)var_68&3)]:var_68->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_68); /* is_ok on <var_68:IndexedIterator[MModule]>*/
}
if (var69){
} else {
goto BREAK_label;
}
{
var70 = ((val*(*)(val* self))((((long)var_68&3)?class_info[((long)var_68&3)]:var_68->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_68); /* item on <var_68:IndexedIterator[MModule]>*/
}
var_other71 = var70;
{
{ /* Inline kernel#Object#!= (var_other71,var_mmodule) on <var_other71:MModule> */
var_other = var_mmodule;
{
var77 = ((short int(*)(val* self, val* p0))(var_other71->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_other71, var_other); /* == on <var_other71:MModule>*/
}
var78 = !var77;
var75 = var78;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
}
var_79 = var75;
if (var75){
{
{ /* Inline loader#ModelBuilder#mmodule2nmodule (self) on <self:ModelBuilder> */
var82 = self->attrs[COLOR_nitc__loader__ModelBuilder___mmodule2nmodule].val; /* _mmodule2nmodule on <self:ModelBuilder> */
if (unlikely(var82 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule2nmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 998);
fatal_exit(1);
}
var80 = var82;
RET_LABEL81:(void)0;
}
}
{
var83 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var80, var_mmodule);
}
var74 = var83;
} else {
var74 = var_79;
}
var_84 = var74;
if (var74){
{
{ /* Inline mmodule#MModule#mgroup (var_other71) on <var_other71:MModule> */
var87 = var_other71->attrs[COLOR_nitc__mmodule__MModule___mgroup].val; /* _mgroup on <var_other71:MModule> */
var85 = var87;
RET_LABEL86:(void)0;
}
}
if (var85 == NULL) {
var88 = 0; /* is null */
} else {
var88 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var85,((val*)NULL)) on <var85:nullable MGroup> */
var_other = ((val*)NULL);
{
var91 = ((short int(*)(val* self, val* p0))(var85->class->vft[COLOR_core__kernel__Object___61d_61d]))(var85, var_other); /* == on <var85:nullable MGroup(MGroup)>*/
}
var92 = !var91;
var89 = var92;
goto RET_LABEL90;
RET_LABEL90:(void)0;
}
var88 = var89;
}
var73 = var88;
} else {
var73 = var_84;
}
var_93 = var73;
if (var73){
{
{ /* Inline mmodule#MModule#mgroup (var_other71) on <var_other71:MModule> */
var96 = var_other71->attrs[COLOR_nitc__mmodule__MModule___mgroup].val; /* _mgroup on <var_other71:MModule> */
var94 = var96;
RET_LABEL95:(void)0;
}
}
if (var94 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 694);
fatal_exit(1);
} else {
{ /* Inline mpackage#MGroup#mpackage (var94) on <var94:nullable MGroup> */
if (unlikely(var94 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 69);
fatal_exit(1);
}
var99 = var94->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val; /* _mpackage on <var94:nullable MGroup> */
if (unlikely(var99 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 69);
fatal_exit(1);
}
var97 = var99;
RET_LABEL98:(void)0;
}
}
{
{ /* Inline mpackage#MGroup#mpackage (var_mgroup) on <var_mgroup:nullable MGroup(MGroup)> */
var102 = var_mgroup->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val; /* _mpackage on <var_mgroup:nullable MGroup(MGroup)> */
if (unlikely(var102 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 69);
fatal_exit(1);
}
var100 = var102;
RET_LABEL101:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var97,var100) on <var97:MPackage> */
var_other105 = var100;
{
{ /* Inline kernel#Object#is_same_instance (var97,var_other105) on <var97:MPackage> */
var108 = var97 == var_other105;
var106 = var108;
goto RET_LABEL107;
RET_LABEL107:(void)0;
}
}
var103 = var106;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
}
var72 = var103;
} else {
var72 = var_93;
}
if (var72){
if (var_decl == NULL) {
var109 = 1; /* is null */
} else {
var109 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_decl,((val*)NULL)) on <var_decl:nullable AModuledecl> */
var_other105 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_decl,var_other105) on <var_decl:nullable AModuledecl(AModuledecl)> */
var114 = var_decl == var_other105;
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
var_node = var_nmodule;
} else {
{
{ /* Inline parser_nodes#AModuledecl#n_name (var_decl) on <var_decl:nullable AModuledecl(AModuledecl)> */
var117 = var_decl->attrs[COLOR_nitc__parser_nodes__AModuledecl___n_name].val; /* _n_name on <var_decl:nullable AModuledecl(AModuledecl)> */
if (unlikely(var117 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1086);
fatal_exit(1);
}
var115 = var117;
RET_LABEL116:(void)0;
}
}
var_node = var115;
}
if (unlikely(varonce118==NULL)) {
var119 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce120!=NULL)) {
var121 = varonce120;
} else {
var122 = "Error: a module named `";
var123 = core__flat___NativeString___to_s_full(var122, 23l, 23l);
var121 = var123;
varonce120 = var121;
}
((struct instance_core__NativeArray*)var119)->values[0]=var121;
if (likely(varonce124!=NULL)) {
var125 = varonce124;
} else {
var126 = "` already exists at ";
var127 = core__flat___NativeString___to_s_full(var126, 20l, 20l);
var125 = var127;
varonce124 = var125;
}
((struct instance_core__NativeArray*)var119)->values[2]=var125;
if (likely(varonce128!=NULL)) {
var129 = varonce128;
} else {
var130 = ".";
var131 = core__flat___NativeString___to_s_full(var130, 1l, 1l);
var129 = var131;
varonce128 = var129;
}
((struct instance_core__NativeArray*)var119)->values[4]=var129;
} else {
var119 = varonce118;
varonce118 = NULL;
}
{
var132 = nitc___nitc__MModule___nitc__model_base__MEntity__full_name(var_other71);
}
((struct instance_core__NativeArray*)var119)->values[1]=var132;
{
{ /* Inline mmodule#MModule#location (var_other71) on <var_other71:MModule> */
var135 = var_other71->attrs[COLOR_nitc__mmodule__MModule___location].val; /* _location on <var_other71:MModule> */
if (unlikely(var135 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 98);
fatal_exit(1);
}
var133 = var135;
RET_LABEL134:(void)0;
}
}
{
var136 = ((val*(*)(val* self))(var133->class->vft[COLOR_core__abstract_text__Object__to_s]))(var133); /* to_s on <var133:Location>*/
}
((struct instance_core__NativeArray*)var119)->values[3]=var136;
{
var137 = ((val*(*)(val* self))(var119->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var119); /* native_to_s on <var119:NativeArray[String]>*/
}
varonce118 = var119;
{
nitc___nitc__ModelBuilder___error(self, var_node, var137); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto BREAK_label;
} else {
}
{
((void(*)(val* self))((((long)var_68&3)?class_info[((long)var_68&3)]:var_68->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_68); /* next on <var_68:IndexedIterator[MModule]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_68&3)?class_info[((long)var_68&3)]:var_68->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_68); /* finish on <var_68:IndexedIterator[MModule]>*/
}
} else {
}
} else {
}
{
{ /* Inline loader#ModelBuilder#nmodules (self) on <self:ModelBuilder> */
var140 = self->attrs[COLOR_nitc__loader__ModelBuilder___nmodules].val; /* _nmodules on <self:ModelBuilder> */
if (unlikely(var140 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _nmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 995);
fatal_exit(1);
}
var138 = var140;
RET_LABEL139:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var138, var_nmodule); /* Direct call array#Array#add on <var138:Array[AModule]>*/
}
{
{ /* Inline loader#ModelBuilder#mmodule2nmodule (self) on <self:ModelBuilder> */
var143 = self->attrs[COLOR_nitc__loader__ModelBuilder___mmodule2nmodule].val; /* _mmodule2nmodule on <self:ModelBuilder> */
if (unlikely(var143 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule2nmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 998);
fatal_exit(1);
}
var141 = var143;
RET_LABEL142:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var141, var_mmodule, var_nmodule); /* Direct call hash_collection#HashMap#[]= on <var141:HashMap[MModule, AModule]>*/
}
{
{ /* Inline parser_nodes#ANode#location (var_nmodule) on <var_nmodule:AModule> */
var146 = var_nmodule->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_nmodule:AModule> */
if (unlikely(var146 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 24);
fatal_exit(1);
}
var144 = var146;
RET_LABEL145:(void)0;
}
}
{
{ /* Inline location#Location#file (var144) on <var144:Location> */
var149 = var144->attrs[COLOR_nitc__location__Location___file].val; /* _file on <var144:Location> */
var147 = var149;
RET_LABEL148:(void)0;
}
}
var_source = var147;
if (var_source == NULL) {
var150 = 0; /* is null */
} else {
var150 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_source,((val*)NULL)) on <var_source:nullable SourceFile> */
var_other = ((val*)NULL);
{
var153 = ((short int(*)(val* self, val* p0))(var_source->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_source, var_other); /* == on <var_source:nullable SourceFile(SourceFile)>*/
}
var154 = !var153;
var151 = var154;
goto RET_LABEL152;
RET_LABEL152:(void)0;
}
var150 = var151;
}
if (var150){
{
{ /* Inline loader#SourceFile#mmodule (var_source) on <var_source:nullable SourceFile(SourceFile)> */
var157 = var_source->attrs[COLOR_nitc__loader__SourceFile___mmodule].val; /* _mmodule on <var_source:nullable SourceFile(SourceFile)> */
var155 = var157;
RET_LABEL156:(void)0;
}
}
if (var155 == NULL) {
var158 = 1; /* is null */
} else {
var158 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var155,((val*)NULL)) on <var155:nullable MModule> */
var_other105 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var155,var_other105) on <var155:nullable MModule(MModule)> */
var163 = var155 == var_other105;
var161 = var163;
goto RET_LABEL162;
RET_LABEL162:(void)0;
}
}
var159 = var161;
goto RET_LABEL160;
RET_LABEL160:(void)0;
}
var158 = var159;
}
if (unlikely(!var158)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 708);
fatal_exit(1);
}
{
{ /* Inline loader#SourceFile#mmodule= (var_source,var_mmodule) on <var_source:nullable SourceFile(SourceFile)> */
var_source->attrs[COLOR_nitc__loader__SourceFile___mmodule].val = var_mmodule; /* _mmodule on <var_source:nullable SourceFile(SourceFile)> */
RET_LABEL164:(void)0;
}
}
} else {
}
if (var_decl == NULL) {
var165 = 0; /* is null */
} else {
var165 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_decl,((val*)NULL)) on <var_decl:nullable AModuledecl> */
var_other = ((val*)NULL);
{
var168 = ((short int(*)(val* self, val* p0))(var_decl->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_decl, var_other); /* == on <var_decl:nullable AModuledecl(AModuledecl)>*/
}
var169 = !var168;
var166 = var169;
goto RET_LABEL167;
RET_LABEL167:(void)0;
}
var165 = var166;
}
if (var165){
{
{ /* Inline parser_nodes#ADefinition#n_doc (var_decl) on <var_decl:nullable AModuledecl(AModuledecl)> */
var172 = var_decl->attrs[COLOR_nitc__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <var_decl:nullable AModuledecl(AModuledecl)> */
var170 = var172;
RET_LABEL171:(void)0;
}
}
var_ndoc = var170;
if (var_ndoc == NULL) {
var173 = 0; /* is null */
} else {
var173 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ndoc,((val*)NULL)) on <var_ndoc:nullable ADoc> */
var_other = ((val*)NULL);
{
var176 = ((short int(*)(val* self, val* p0))(var_ndoc->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ndoc, var_other); /* == on <var_ndoc:nullable ADoc(ADoc)>*/
}
var177 = !var176;
var174 = var177;
goto RET_LABEL175;
RET_LABEL175:(void)0;
}
var173 = var174;
}
if (var173){
{
var178 = nitc__modelbuilder_base___ADoc___to_mdoc(var_ndoc);
}
var_mdoc = var178;
{
{ /* Inline mdoc#MEntity#mdoc= (var_mmodule,var_mdoc) on <var_mmodule:nullable MModule(MModule)> */
var_mmodule->attrs[COLOR_nitc__mdoc__MEntity___mdoc].val = var_mdoc; /* _mdoc on <var_mmodule:nullable MModule(MModule)> */
RET_LABEL179:(void)0;
}
}
{
{ /* Inline mdoc#MDoc#original_mentity= (var_mdoc,var_mmodule) on <var_mdoc:MDoc> */
var_mdoc->attrs[COLOR_nitc__mdoc__MDoc___original_mentity].val = var_mmodule; /* _original_mentity on <var_mdoc:MDoc> */
RET_LABEL180:(void)0;
}
}
} else {
}
if (likely(varonce181!=NULL)) {
var182 = varonce181;
} else {
var183 = "test_suite";
var184 = core__flat___NativeString___to_s_full(var183, 10l, 10l);
var182 = var184;
varonce181 = var182;
}
{
var185 = nitc___nitc__Prod___get_annotations(var_decl, var182);
}
{
var186 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var185);
}
var187 = !var186;
{
{ /* Inline mmodule#MModule#is_test_suite= (var_mmodule,var187) on <var_mmodule:nullable MModule(MModule)> */
var_mmodule->attrs[COLOR_nitc__mmodule__MModule___is_test_suite].s = var187; /* _is_test_suite on <var_mmodule:nullable MModule(MModule)> */
RET_LABEL188:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method loader#ModelBuilder#seach_module_by_amodule_name for (self: ModelBuilder, AModuleName, nullable MGroup): nullable MModule */
val* nitc__loader___ModelBuilder___seach_module_by_amodule_name(val* self, val* p0, val* p1) {
val* var /* : nullable MModule */;
val* var_n_name /* var n_name: AModuleName */;
val* var_mgroup /* var mgroup: nullable MGroup */;
val* var1 /* : TId */;
val* var3 /* : TId */;
val* var4 /* : String */;
val* var_mod_name /* var mod_name: String */;
val* var5 /* : nullable TQuad */;
val* var7 /* : nullable TQuad */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : ANodes[TId] */;
val* var15 /* : ANodes[TId] */;
short int var16 /* : Bool */;
val* var17 /* : nullable MModule */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var23 /* : MPackage */;
val* var25 /* : MPackage */;
val* var26 /* : nullable MGroup */;
val* var28 /* : nullable MGroup */;
val* var_r /* var r: nullable MGroup */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
val* var34 /* : Array[MModule] */;
val* var_res /* var res: Array[MModule] */;
val* var35 /* : Array[MModule] */;
val* var_ /* var : Array[MModule] */;
val* var_36 /* var : Array[MModule] */;
val* var37 /* : IndexedIterator[nullable Object] */;
val* var_38 /* var : IndexedIterator[MModule] */;
short int var39 /* : Bool */;
val* var40 /* : nullable Object */;
val* var_x /* var x: MModule */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
long var43 /* : Int */;
long var45 /* : Int */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var49 /* : Bool */;
val* var50 /* : NativeArray[String] */;
static val* varonce;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
val* var54 /* : String */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
val* var58 /* : String */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
val* var62 /* : String */;
val* var63 /* : Array[String] */;
val* var_64 /* var : Array[String] */;
val* var_65 /* var : Array[MModule] */;
val* var66 /* : IndexedIterator[nullable Object] */;
val* var_67 /* var : IndexedIterator[MModule] */;
short int var68 /* : Bool */;
val* var70 /* : nullable Object */;
val* var_x71 /* var x: MModule */;
val* var72 /* : String */;
val* var73 /* : nullable String */;
val* var75 /* : nullable String */;
val* var76 /* : String */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
val* var80 /* : String */;
val* var81 /* : String */;
val* var82 /* : String */;
val* var83 /* : nullable Object */;
val* var84 /* : ANodes[TId] */;
val* var86 /* : ANodes[TId] */;
val* var87 /* : nullable Object */;
val* var88 /* : String */;
val* var_root_name /* var root_name: String */;
val* var89 /* : Array[String] */;
val* var91 /* : Array[String] */;
val* var92 /* : ArraySet[MGroup] */;
val* var_roots /* var roots: ArraySet[MGroup] */;
short int var93 /* : Bool */;
val* var95 /* : NativeArray[String] */;
static val* varonce94;
static val* varonce96;
val* var97 /* : String */;
char* var98 /* : NativeString */;
val* var99 /* : String */;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : NativeString */;
val* var103 /* : String */;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : NativeString */;
val* var107 /* : String */;
val* var108 /* : Array[String] */;
val* var110 /* : Array[String] */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : NativeString */;
val* var114 /* : String */;
val* var115 /* : String */;
val* var116 /* : String */;
val* var117 /* : ArraySet[MModule] */;
val* var_res118 /* var res: ArraySet[MModule] */;
val* var_119 /* var : ArraySet[MGroup] */;
val* var120 /* : Iterator[nullable Object] */;
val* var_121 /* var : Iterator[MGroup] */;
short int var122 /* : Bool */;
val* var124 /* : nullable Object */;
val* var_r125 /* var r: MGroup */;
val* var126 /* : Array[MModule] */;
val* var_root_res /* var root_res: Array[MModule] */;
val* var_127 /* var : Array[MModule] */;
val* var128 /* : IndexedIterator[nullable Object] */;
val* var_129 /* var : IndexedIterator[MModule] */;
short int var130 /* : Bool */;
val* var132 /* : nullable Object */;
val* var_x133 /* var x: MModule */;
short int var134 /* : Bool */;
short int var135 /* : Bool */;
long var136 /* : Int */;
short int var137 /* : Bool */;
short int var139 /* : Bool */;
int cltype140;
int idtype141;
const char* var_class_name142;
short int var143 /* : Bool */;
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
static val* varonce154;
val* var155 /* : String */;
char* var156 /* : NativeString */;
val* var157 /* : String */;
val* var158 /* : Array[String] */;
val* var_159 /* var : Array[String] */;
val* var_160 /* var : ArraySet[MModule] */;
val* var161 /* : Iterator[nullable Object] */;
val* var_162 /* var : Iterator[MModule] */;
short int var163 /* : Bool */;
val* var165 /* : nullable Object */;
val* var_x166 /* var x: MModule */;
val* var167 /* : String */;
val* var168 /* : nullable String */;
val* var170 /* : nullable String */;
val* var171 /* : String */;
static val* varonce172;
val* var173 /* : String */;
char* var174 /* : NativeString */;
val* var175 /* : String */;
val* var176 /* : String */;
val* var177 /* : String */;
val* var178 /* : nullable Object */;
val* var180 /* : NativeArray[String] */;
static val* varonce179;
static val* varonce181;
val* var182 /* : String */;
char* var183 /* : NativeString */;
val* var184 /* : String */;
static val* varonce185;
val* var186 /* : String */;
char* var187 /* : NativeString */;
val* var188 /* : String */;
static val* varonce189;
val* var190 /* : String */;
char* var191 /* : NativeString */;
val* var192 /* : String */;
static val* varonce193;
val* var194 /* : String */;
char* var195 /* : NativeString */;
val* var196 /* : String */;
val* var197 /* : Array[String] */;
val* var199 /* : Array[String] */;
static val* varonce200;
val* var201 /* : String */;
char* var202 /* : NativeString */;
val* var203 /* : String */;
val* var204 /* : String */;
val* var205 /* : String */;
var_n_name = p0;
var_mgroup = p1;
{
{ /* Inline parser_nodes#AModuleName#n_id (var_n_name) on <var_n_name:AModuleName> */
var3 = var_n_name->attrs[COLOR_nitc__parser_nodes__AModuleName___n_id].val; /* _n_id on <var_n_name:AModuleName> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2838);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc__lexer_work___Token___text(var1);
}
var_mod_name = var4;
{
{ /* Inline parser_nodes#AModuleName#n_quad (var_n_name) on <var_n_name:AModuleName> */
var7 = var_n_name->attrs[COLOR_nitc__parser_nodes__AModuleName___n_quad].val; /* _n_quad on <var_n_name:AModuleName> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (var5 == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var5,((val*)NULL)) on <var5:nullable TQuad> */
var_other = ((val*)NULL);
{
var11 = ((short int(*)(val* self, val* p0))(var5->class->vft[COLOR_core__kernel__Object___61d_61d]))(var5, var_other); /* == on <var5:nullable TQuad(TQuad)>*/
}
var12 = !var11;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
if (var8){
var_mgroup = ((val*)NULL);
} else {
}
{
{ /* Inline parser_nodes#AModuleName#n_path (var_n_name) on <var_n_name:AModuleName> */
var15 = var_n_name->attrs[COLOR_nitc__parser_nodes__AModuleName___n_path].val; /* _n_path on <var_n_name:AModuleName> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2835);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = nitc___nitc__ANodes___core__abstract_collection__Collection__is_empty(var13);
}
if (var16){
{
var17 = nitc__loader___ModelBuilder___search_mmodule_by_name(self, var_n_name, var_mgroup, var_mod_name);
}
var = var17;
goto RET_LABEL;
} else {
}
if (var_mgroup == NULL) {
var18 = 0; /* is null */
} else {
var18 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mgroup,((val*)NULL)) on <var_mgroup:nullable MGroup> */
var_other = ((val*)NULL);
{
var21 = ((short int(*)(val* self, val* p0))(var_mgroup->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mgroup, var_other); /* == on <var_mgroup:nullable MGroup(MGroup)>*/
}
var22 = !var21;
var19 = var22;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var18 = var19;
}
if (var18){
{
{ /* Inline mpackage#MGroup#mpackage (var_mgroup) on <var_mgroup:nullable MGroup(MGroup)> */
var25 = var_mgroup->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val; /* _mpackage on <var_mgroup:nullable MGroup(MGroup)> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 69);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline mpackage#MPackage#root (var23) on <var23:MPackage> */
var28 = var23->attrs[COLOR_nitc__mpackage__MPackage___root].val; /* _root on <var23:MPackage> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
var_r = var26;
if (var_r == NULL) {
var29 = 0; /* is null */
} else {
var29 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_r,((val*)NULL)) on <var_r:nullable MGroup> */
var_other = ((val*)NULL);
{
var32 = ((short int(*)(val* self, val* p0))(var_r->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_r, var_other); /* == on <var_r:nullable MGroup(MGroup)>*/
}
var33 = !var32;
var30 = var33;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
var29 = var30;
}
if (unlikely(!var29)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 745);
fatal_exit(1);
}
{
nitc__loader___ModelBuilder___scan_group(self, var_r); /* Direct call loader#ModelBuilder#scan_group on <self:ModelBuilder>*/
}
{
var34 = nitc__loader___MGroup___mmodules_by_name(var_r, var_mod_name);
}
var_res = var34;
var35 = NEW_core__Array(&type_core__Array__nitc__MModule);
{
core___core__Array___with_capacity(var35, 1l); /* Direct call array#Array#with_capacity on <var35:Array[MModule]>*/
}
var_ = var35;
var_36 = var_res;
{
var37 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_36);
}
var_38 = var37;
for(;;) {
{
var39 = ((short int(*)(val* self))((((long)var_38&3)?class_info[((long)var_38&3)]:var_38->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_38); /* is_ok on <var_38:IndexedIterator[MModule]>*/
}
if (var39){
} else {
goto BREAK_label;
}
{
var40 = ((val*(*)(val* self))((((long)var_38&3)?class_info[((long)var_38&3)]:var_38->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_38); /* item on <var_38:IndexedIterator[MModule]>*/
}
var_x = var40;
{
var41 = nitc__loader___ModelBuilder___match_amodulename(self, var_n_name, var_x);
}
if (var41){
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_x); /* Direct call array#AbstractArray#push on <var_:Array[MModule]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_38&3)?class_info[((long)var_38&3)]:var_38->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_38); /* next on <var_38:IndexedIterator[MModule]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_38&3)?class_info[((long)var_38&3)]:var_38->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_38); /* finish on <var_38:IndexedIterator[MModule]>*/
}
var_res = var_;
{
var42 = core___core__Collection___not_empty(var_res);
}
if (var42){
{
{ /* Inline array#AbstractArrayRead#length (var_res) on <var_res:Array[MModule]> */
var45 = var_res->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_res:Array[MModule]> */
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var43,1l) on <var43:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var48 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var48)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
fatal_exit(1);
}
var49 = var43 > 1l;
var46 = var49;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
if (var46){
if (unlikely(varonce==NULL)) {
var50 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "Error: conflicting module files for `";
var54 = core__flat___NativeString___to_s_full(var53, 37l, 37l);
var52 = var54;
varonce51 = var52;
}
((struct instance_core__NativeArray*)var50)->values[0]=var52;
if (likely(varonce55!=NULL)) {
var56 = varonce55;
} else {
var57 = "`: `";
var58 = core__flat___NativeString___to_s_full(var57, 4l, 4l);
var56 = var58;
varonce55 = var56;
}
((struct instance_core__NativeArray*)var50)->values[2]=var56;
if (likely(varonce59!=NULL)) {
var60 = varonce59;
} else {
var61 = "`";
var62 = core__flat___NativeString___to_s_full(var61, 1l, 1l);
var60 = var62;
varonce59 = var60;
}
((struct instance_core__NativeArray*)var50)->values[4]=var60;
} else {
var50 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var50)->values[1]=var_mod_name;
var63 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___with_capacity(var63, 1l); /* Direct call array#Array#with_capacity on <var63:Array[String]>*/
}
var_64 = var63;
var_65 = var_res;
{
var66 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_65);
}
var_67 = var66;
for(;;) {
{
var68 = ((short int(*)(val* self))((((long)var_67&3)?class_info[((long)var_67&3)]:var_67->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_67); /* is_ok on <var_67:IndexedIterator[MModule]>*/
}
if (var68){
} else {
goto BREAK_label69;
}
{
var70 = ((val*(*)(val* self))((((long)var_67&3)?class_info[((long)var_67&3)]:var_67->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_67); /* item on <var_67:IndexedIterator[MModule]>*/
}
var_x71 = var70;
{
{ /* Inline mmodule#MModule#filepath (var_x71) on <var_x71:MModule> */
var75 = var_x71->attrs[COLOR_nitc__mmodule__MModule___filepath].val; /* _filepath on <var_x71:MModule> */
var73 = var75;
RET_LABEL74:(void)0;
}
}
if (var73!=NULL) {
var72 = var73;
} else {
{
var76 = nitc___nitc__MModule___nitc__model_base__MEntity__full_name(var_x71);
}
var72 = var76;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_64, var72); /* Direct call array#AbstractArray#push on <var_64:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_67&3)?class_info[((long)var_67&3)]:var_67->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_67); /* next on <var_67:IndexedIterator[MModule]>*/
}
}
BREAK_label69: (void)0;
{
((void(*)(val* self))((((long)var_67&3)?class_info[((long)var_67&3)]:var_67->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_67); /* finish on <var_67:IndexedIterator[MModule]>*/
}
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = "`, `";
var80 = core__flat___NativeString___to_s_full(var79, 4l, 4l);
var78 = var80;
varonce77 = var78;
}
{
var81 = core__abstract_text___Collection___join(var_64, var78);
}
((struct instance_core__NativeArray*)var50)->values[3]=var81;
{
var82 = ((val*(*)(val* self))(var50->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var50); /* native_to_s on <var50:NativeArray[String]>*/
}
varonce = var50;
{
nitc___nitc__ModelBuilder___error(self, var_n_name, var82); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
{
var83 = core___core__SequenceRead___Collection__first(var_res);
}
var = var83;
goto RET_LABEL;
} else {
}
} else {
}
{
{ /* Inline parser_nodes#AModuleName#n_path (var_n_name) on <var_n_name:AModuleName> */
var86 = var_n_name->attrs[COLOR_nitc__parser_nodes__AModuleName___n_path].val; /* _n_path on <var_n_name:AModuleName> */
if (unlikely(var86 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2835);
fatal_exit(1);
}
var84 = var86;
RET_LABEL85:(void)0;
}
}
{
var87 = core___core__SequenceRead___Collection__first(var84);
}
{
var88 = nitc__lexer_work___Token___text(var87);
}
var_root_name = var88;
{
{ /* Inline loader#ModelBuilder#paths (self) on <self:ModelBuilder> */
var91 = self->attrs[COLOR_nitc__loader__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var91 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 208);
fatal_exit(1);
}
var89 = var91;
RET_LABEL90:(void)0;
}
}
{
var92 = nitc__loader___ModelBuilder___search_group_in_paths(self, var_root_name, var89);
}
var_roots = var92;
{
var93 = core___core__ArraySet___core__abstract_collection__Collection__is_empty(var_roots);
}
if (var93){
if (unlikely(varonce94==NULL)) {
var95 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce96!=NULL)) {
var97 = varonce96;
} else {
var98 = "Error: cannot find `";
var99 = core__flat___NativeString___to_s_full(var98, 20l, 20l);
var97 = var99;
varonce96 = var97;
}
((struct instance_core__NativeArray*)var95)->values[0]=var97;
if (likely(varonce100!=NULL)) {
var101 = varonce100;
} else {
var102 = "`. Tried: ";
var103 = core__flat___NativeString___to_s_full(var102, 10l, 10l);
var101 = var103;
varonce100 = var101;
}
((struct instance_core__NativeArray*)var95)->values[2]=var101;
if (likely(varonce104!=NULL)) {
var105 = varonce104;
} else {
var106 = ".";
var107 = core__flat___NativeString___to_s_full(var106, 1l, 1l);
var105 = var107;
varonce104 = var105;
}
((struct instance_core__NativeArray*)var95)->values[4]=var105;
} else {
var95 = varonce94;
varonce94 = NULL;
}
((struct instance_core__NativeArray*)var95)->values[1]=var_root_name;
{
{ /* Inline loader#ModelBuilder#paths (self) on <self:ModelBuilder> */
var110 = self->attrs[COLOR_nitc__loader__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var110 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 208);
fatal_exit(1);
}
var108 = var110;
RET_LABEL109:(void)0;
}
}
if (likely(varonce111!=NULL)) {
var112 = varonce111;
} else {
var113 = ", ";
var114 = core__flat___NativeString___to_s_full(var113, 2l, 2l);
var112 = var114;
varonce111 = var112;
}
{
var115 = core__abstract_text___Collection___join(var108, var112);
}
((struct instance_core__NativeArray*)var95)->values[3]=var115;
{
var116 = ((val*(*)(val* self))(var95->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var95); /* native_to_s on <var95:NativeArray[String]>*/
}
varonce94 = var95;
{
nitc___nitc__ModelBuilder___error(self, var_n_name, var116); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var117 = NEW_core__ArraySet(&type_core__ArraySet__nitc__MModule);
{
core___core__ArraySet___core__kernel__Object__init(var117); /* Direct call array#ArraySet#init on <var117:ArraySet[MModule]>*/
}
var_res118 = var117;
var_119 = var_roots;
{
var120 = core___core__ArraySet___core__abstract_collection__Collection__iterator(var_119);
}
var_121 = var120;
for(;;) {
{
var122 = ((short int(*)(val* self))((((long)var_121&3)?class_info[((long)var_121&3)]:var_121->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_121); /* is_ok on <var_121:Iterator[MGroup]>*/
}
if (var122){
} else {
goto BREAK_label123;
}
{
var124 = ((val*(*)(val* self))((((long)var_121&3)?class_info[((long)var_121&3)]:var_121->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_121); /* item on <var_121:Iterator[MGroup]>*/
}
var_r125 = var124;
{
nitc__loader___ModelBuilder___scan_group(self, var_r125); /* Direct call loader#ModelBuilder#scan_group on <self:ModelBuilder>*/
}
{
var126 = nitc__loader___MGroup___mmodules_by_name(var_r125, var_mod_name);
}
var_root_res = var126;
var_127 = var_root_res;
{
var128 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_127);
}
var_129 = var128;
for(;;) {
{
var130 = ((short int(*)(val* self))((((long)var_129&3)?class_info[((long)var_129&3)]:var_129->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_129); /* is_ok on <var_129:IndexedIterator[MModule]>*/
}
if (var130){
} else {
goto BREAK_label131;
}
{
var132 = ((val*(*)(val* self))((((long)var_129&3)?class_info[((long)var_129&3)]:var_129->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_129); /* item on <var_129:IndexedIterator[MModule]>*/
}
var_x133 = var132;
{
var134 = nitc__loader___ModelBuilder___match_amodulename(self, var_n_name, var_x133);
}
if (var134){
{
core___core__ArraySet___core__abstract_collection__SimpleCollection__add(var_res118, var_x133); /* Direct call array#ArraySet#add on <var_res118:ArraySet[MModule]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_129&3)?class_info[((long)var_129&3)]:var_129->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_129); /* next on <var_129:IndexedIterator[MModule]>*/
}
}
BREAK_label131: (void)0;
{
((void(*)(val* self))((((long)var_129&3)?class_info[((long)var_129&3)]:var_129->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_129); /* finish on <var_129:IndexedIterator[MModule]>*/
}
{
((void(*)(val* self))((((long)var_121&3)?class_info[((long)var_121&3)]:var_121->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_121); /* next on <var_121:Iterator[MGroup]>*/
}
}
BREAK_label123: (void)0;
{
((void(*)(val* self))((((long)var_121&3)?class_info[((long)var_121&3)]:var_121->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_121); /* finish on <var_121:Iterator[MGroup]>*/
}
{
var135 = core___core__Collection___not_empty(var_res118);
}
if (var135){
{
var136 = core___core__ArraySet___core__abstract_collection__Collection__length(var_res118);
}
{
{ /* Inline kernel#Int#> (var136,1l) on <var136:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var139 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var139)) {
var_class_name142 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name142);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
fatal_exit(1);
}
var143 = var136 > 1l;
var137 = var143;
goto RET_LABEL138;
RET_LABEL138:(void)0;
}
}
if (var137){
if (unlikely(varonce144==NULL)) {
var145 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce146!=NULL)) {
var147 = varonce146;
} else {
var148 = "Error: conflicting module files for `";
var149 = core__flat___NativeString___to_s_full(var148, 37l, 37l);
var147 = var149;
varonce146 = var147;
}
((struct instance_core__NativeArray*)var145)->values[0]=var147;
if (likely(varonce150!=NULL)) {
var151 = varonce150;
} else {
var152 = "`: `";
var153 = core__flat___NativeString___to_s_full(var152, 4l, 4l);
var151 = var153;
varonce150 = var151;
}
((struct instance_core__NativeArray*)var145)->values[2]=var151;
if (likely(varonce154!=NULL)) {
var155 = varonce154;
} else {
var156 = "`";
var157 = core__flat___NativeString___to_s_full(var156, 1l, 1l);
var155 = var157;
varonce154 = var155;
}
((struct instance_core__NativeArray*)var145)->values[4]=var155;
} else {
var145 = varonce144;
varonce144 = NULL;
}
((struct instance_core__NativeArray*)var145)->values[1]=var_mod_name;
var158 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___with_capacity(var158, 1l); /* Direct call array#Array#with_capacity on <var158:Array[String]>*/
}
var_159 = var158;
var_160 = var_res118;
{
var161 = core___core__ArraySet___core__abstract_collection__Collection__iterator(var_160);
}
var_162 = var161;
for(;;) {
{
var163 = ((short int(*)(val* self))((((long)var_162&3)?class_info[((long)var_162&3)]:var_162->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_162); /* is_ok on <var_162:Iterator[MModule]>*/
}
if (var163){
} else {
goto BREAK_label164;
}
{
var165 = ((val*(*)(val* self))((((long)var_162&3)?class_info[((long)var_162&3)]:var_162->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_162); /* item on <var_162:Iterator[MModule]>*/
}
var_x166 = var165;
{
{ /* Inline mmodule#MModule#filepath (var_x166) on <var_x166:MModule> */
var170 = var_x166->attrs[COLOR_nitc__mmodule__MModule___filepath].val; /* _filepath on <var_x166:MModule> */
var168 = var170;
RET_LABEL169:(void)0;
}
}
if (var168!=NULL) {
var167 = var168;
} else {
{
var171 = nitc___nitc__MModule___nitc__model_base__MEntity__full_name(var_x166);
}
var167 = var171;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_159, var167); /* Direct call array#AbstractArray#push on <var_159:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_162&3)?class_info[((long)var_162&3)]:var_162->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_162); /* next on <var_162:Iterator[MModule]>*/
}
}
BREAK_label164: (void)0;
{
((void(*)(val* self))((((long)var_162&3)?class_info[((long)var_162&3)]:var_162->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_162); /* finish on <var_162:Iterator[MModule]>*/
}
if (likely(varonce172!=NULL)) {
var173 = varonce172;
} else {
var174 = "`, `";
var175 = core__flat___NativeString___to_s_full(var174, 4l, 4l);
var173 = var175;
varonce172 = var173;
}
{
var176 = core__abstract_text___Collection___join(var_159, var173);
}
((struct instance_core__NativeArray*)var145)->values[3]=var176;
{
var177 = ((val*(*)(val* self))(var145->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var145); /* native_to_s on <var145:NativeArray[String]>*/
}
varonce144 = var145;
{
nitc___nitc__ModelBuilder___error(self, var_n_name, var177); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
{
var178 = core___core__ArraySet___core__abstract_collection__Collection__first(var_res118);
}
var = var178;
goto RET_LABEL;
} else {
}
if (unlikely(varonce179==NULL)) {
var180 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce181!=NULL)) {
var182 = varonce181;
} else {
var183 = "Error: cannot find module `";
var184 = core__flat___NativeString___to_s_full(var183, 27l, 27l);
var182 = var184;
varonce181 = var182;
}
((struct instance_core__NativeArray*)var180)->values[0]=var182;
if (likely(varonce185!=NULL)) {
var186 = varonce185;
} else {
var187 = "` from `";
var188 = core__flat___NativeString___to_s_full(var187, 8l, 8l);
var186 = var188;
varonce185 = var186;
}
((struct instance_core__NativeArray*)var180)->values[2]=var186;
if (likely(varonce189!=NULL)) {
var190 = varonce189;
} else {
var191 = "`. Tried: ";
var192 = core__flat___NativeString___to_s_full(var191, 10l, 10l);
var190 = var192;
varonce189 = var190;
}
((struct instance_core__NativeArray*)var180)->values[4]=var190;
if (likely(varonce193!=NULL)) {
var194 = varonce193;
} else {
var195 = ".";
var196 = core__flat___NativeString___to_s_full(var195, 1l, 1l);
var194 = var196;
varonce193 = var194;
}
((struct instance_core__NativeArray*)var180)->values[6]=var194;
} else {
var180 = varonce179;
varonce179 = NULL;
}
((struct instance_core__NativeArray*)var180)->values[1]=var_mod_name;
((struct instance_core__NativeArray*)var180)->values[3]=var_root_name;
{
{ /* Inline loader#ModelBuilder#paths (self) on <self:ModelBuilder> */
var199 = self->attrs[COLOR_nitc__loader__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var199 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 208);
fatal_exit(1);
}
var197 = var199;
RET_LABEL198:(void)0;
}
}
if (likely(varonce200!=NULL)) {
var201 = varonce200;
} else {
var202 = ", ";
var203 = core__flat___NativeString___to_s_full(var202, 2l, 2l);
var201 = var203;
varonce200 = var201;
}
{
var204 = core__abstract_text___Collection___join(var197, var201);
}
((struct instance_core__NativeArray*)var180)->values[5]=var204;
{
var205 = ((val*(*)(val* self))(var180->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var180); /* native_to_s on <var180:NativeArray[String]>*/
}
varonce179 = var180;
{
nitc___nitc__ModelBuilder___error(self, var_n_name, var205); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#match_amodulename for (self: ModelBuilder, AModuleName, MModule): Bool */
short int nitc__loader___ModelBuilder___match_amodulename(val* self, val* p0, val* p1) {
short int var /* : Bool */;
val* var_n_name /* var n_name: AModuleName */;
val* var_m /* var m: MModule */;
val* var1 /* : nullable MGroup */;
val* var3 /* : nullable MGroup */;
val* var_g /* var g: nullable MGroup */;
val* var4 /* : ANodes[TId] */;
val* var6 /* : ANodes[TId] */;
val* var7 /* : IndexedIterator[ANode] */;
val* var_ /* var : IndexedIterator[TId] */;
val* var8 /* : Iterator[nullable Object] */;
val* var_9 /* var : Iterator[TId] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_grp /* var grp: TId */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var_18 /* var : Bool */;
val* var19 /* : String */;
val* var20 /* : String */;
val* var22 /* : String */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : nullable MGroup */;
val* var29 /* : nullable MGroup */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
var_n_name = p0;
var_m = p1;
{
{ /* Inline mmodule#MModule#mgroup (var_m) on <var_m:MModule> */
var3 = var_m->attrs[COLOR_nitc__mmodule__MModule___mgroup].val; /* _mgroup on <var_m:MModule> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_g = var1;
{
{ /* Inline parser_nodes#AModuleName#n_path (var_n_name) on <var_n_name:AModuleName> */
var6 = var_n_name->attrs[COLOR_nitc__parser_nodes__AModuleName___n_path].val; /* _n_path on <var_n_name:AModuleName> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2835);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nitc___nitc__ANodes___core__abstract_collection__SequenceRead__reverse_iterator(var4);
}
var_ = var7;
{
var8 = core___core__Iterator___iterator(var_);
}
var_9 = var8;
for(;;) {
{
var10 = ((short int(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_9); /* is_ok on <var_9:Iterator[TId]>*/
}
if (var10){
} else {
goto BREAK_label;
}
{
var11 = ((val*(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_9); /* item on <var_9:Iterator[TId]>*/
}
var_grp = var11;
for(;;) {
if (var_g == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_g,((val*)NULL)) on <var_g:nullable MGroup> */
var_other = ((val*)NULL);
{
var16 = ((short int(*)(val* self, val* p0))(var_g->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_g, var_other); /* == on <var_g:nullable MGroup(MGroup)>*/
}
var17 = !var16;
var14 = var17;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
var_18 = var13;
if (var13){
{
var19 = nitc__lexer_work___Token___text(var_grp);
}
{
{ /* Inline mpackage#MGroup#name (var_g) on <var_g:nullable MGroup(MGroup)> */
var22 = var_g->attrs[COLOR_nitc__mpackage__MGroup___name].val; /* _name on <var_g:nullable MGroup(MGroup)> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 65);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var19,var20) on <var19:String> */
var_other = var20;
{
var25 = ((short int(*)(val* self, val* p0))(var19->class->vft[COLOR_core__kernel__Object___61d_61d]))(var19, var_other); /* == on <var19:String>*/
}
var26 = !var25;
var23 = var26;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var12 = var23;
} else {
var12 = var_18;
}
if (var12){
{
{ /* Inline mpackage#MGroup#parent (var_g) on <var_g:nullable MGroup(MGroup)> */
var29 = var_g->attrs[COLOR_nitc__mpackage__MGroup___parent].val; /* _parent on <var_g:nullable MGroup(MGroup)> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_g = var27;
} else {
goto BREAK_label30;
}
}
BREAK_label30: (void)0;
{
((void(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_9); /* next on <var_9:Iterator[TId]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_9); /* finish on <var_9:Iterator[TId]>*/
}
if (var_g == NULL) {
var31 = 0; /* is null */
} else {
var31 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_g,((val*)NULL)) on <var_g:nullable MGroup> */
var_other = ((val*)NULL);
{
var34 = ((short int(*)(val* self, val* p0))(var_g->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_g, var_other); /* == on <var_g:nullable MGroup(MGroup)>*/
}
var35 = !var34;
var32 = var35;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
var31 = var32;
}
var = var31;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#build_module_importation for (self: ModelBuilder, AModule) */
void nitc__loader___ModelBuilder___build_module_importation(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
short int var /* : Bool */;
short int var2 /* : Bool */;
val* var4 /* : nullable MModule */;
val* var6 /* : nullable MModule */;
val* var_mmodule /* var mmodule: MModule */;
short int var_stdimport /* var stdimport: Bool */;
val* var7 /* : Array[MModule] */;
val* var_imported_modules /* var imported_modules: Array[MModule] */;
val* var8 /* : ANodes[AImport] */;
val* var10 /* : ANodes[AImport] */;
val* var_ /* var : ANodes[AImport] */;
val* var11 /* : Iterator[ANode] */;
val* var_12 /* var : Iterator[AImport] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_aimport /* var aimport: AImport */;
static val* varonce;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : String */;
val* var18 /* : Array[AAnnotation] */;
val* var_atconditionals /* var atconditionals: Array[AAnnotation] */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
int cltype;
int idtype;
short int var22 /* : Bool */;
val* var23 /* : AModuleName */;
val* var25 /* : AModuleName */;
val* var26 /* : nullable MGroup */;
val* var28 /* : nullable MGroup */;
val* var29 /* : nullable MModule */;
val* var_sup /* var sup: nullable MModule */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
val* var38 /* : nullable AModule */;
val* var_ast /* var ast: nullable AModule */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
val* var48 /* : AVisibility */;
val* var50 /* : AVisibility */;
val* var51 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: MVisibility */;
val* var52 /* : Sys */;
val* var53 /* : MVisibility */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
val* var60 /* : AVisibility */;
val* var62 /* : AVisibility */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
val* var66 /* : String */;
short int var69 /* : Bool */;
short int var71 /* : Bool */;
short int var73 /* : Bool */;
val* var74 /* : AModuleName */;
val* var76 /* : AModuleName */;
val* var78 /* : NativeArray[String] */;
static val* varonce77;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
val* var82 /* : String */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : NativeString */;
val* var86 /* : String */;
val* var87 /* : String */;
val* var88 /* : String */;
val* var91 /* : POSetElement[MModule] */;
val* var93 /* : POSetElement[MModule] */;
short int var94 /* : Bool */;
val* var95 /* : AModuleName */;
val* var97 /* : AModuleName */;
val* var99 /* : NativeArray[String] */;
static val* varonce98;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : NativeString */;
val* var103 /* : String */;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : NativeString */;
val* var107 /* : String */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : NativeString */;
val* var111 /* : String */;
val* var112 /* : String */;
val* var113 /* : String */;
val* var114 /* : String */;
static val* varonce117;
val* var118 /* : String */;
char* var119 /* : NativeString */;
val* var120 /* : String */;
val* var_mod_name /* var mod_name: String */;
val* var121 /* : nullable MModule */;
val* var_sup122 /* var sup: nullable MModule */;
short int var123 /* : Bool */;
short int var124 /* : Bool */;
short int var126 /* : Bool */;
short int var128 /* : Bool */;
val* var131 /* : Sys */;
val* var132 /* : MVisibility */;
val* var133 /* : ANodes[AImport] */;
val* var135 /* : ANodes[AImport] */;
val* var_136 /* var : ANodes[AImport] */;
val* var137 /* : Iterator[ANode] */;
val* var_138 /* var : Iterator[AImport] */;
short int var139 /* : Bool */;
val* var141 /* : nullable Object */;
val* var_aimport142 /* var aimport: AImport */;
short int var143 /* : Bool */;
int cltype144;
int idtype145;
short int var146 /* : Bool */;
static val* varonce148;
val* var149 /* : String */;
char* var150 /* : NativeString */;
val* var151 /* : String */;
val* var152 /* : Array[AAnnotation] */;
val* var_atconditionals153 /* var atconditionals: Array[AAnnotation] */;
short int var154 /* : Bool */;
val* var155 /* : AModuleName */;
val* var157 /* : AModuleName */;
val* var158 /* : nullable MGroup */;
val* var160 /* : nullable MGroup */;
val* var161 /* : nullable MModule */;
val* var_suppath /* var suppath: nullable MModule */;
short int var162 /* : Bool */;
short int var163 /* : Bool */;
short int var165 /* : Bool */;
short int var167 /* : Bool */;
val* var_168 /* var : Array[AAnnotation] */;
val* var169 /* : IndexedIterator[nullable Object] */;
val* var_170 /* var : IndexedIterator[AAnnotation] */;
short int var171 /* : Bool */;
val* var173 /* : nullable Object */;
val* var_atconditional /* var atconditional: AAnnotation */;
val* var174 /* : ANodes[AExpr] */;
val* var176 /* : ANodes[AExpr] */;
val* var_nargs /* var nargs: ANodes[AExpr] */;
short int var177 /* : Bool */;
static val* varonce178;
val* var179 /* : String */;
char* var180 /* : NativeString */;
val* var181 /* : String */;
val* var183 /* : Array[MModule] */;
val* var_rule /* var rule: Array[MModule] */;
val* var_184 /* var : ANodes[AExpr] */;
val* var185 /* : Iterator[ANode] */;
val* var_186 /* var : Iterator[AExpr] */;
short int var187 /* : Bool */;
val* var189 /* : nullable Object */;
val* var_narg /* var narg: AExpr */;
val* var190 /* : nullable String */;
val* var_id /* var id: nullable String */;
short int var191 /* : Bool */;
short int var192 /* : Bool */;
static val* varonce193;
val* var194 /* : String */;
char* var195 /* : NativeString */;
val* var196 /* : String */;
val* var198 /* : nullable MGroup */;
val* var200 /* : nullable MGroup */;
val* var201 /* : nullable MModule */;
val* var_mp /* var mp: nullable MModule */;
short int var202 /* : Bool */;
short int var203 /* : Bool */;
short int var205 /* : Bool */;
short int var207 /* : Bool */;
val* var208 /* : Array[SequenceRead[MModule]] */;
val* var210 /* : Array[SequenceRead[MModule]] */;
val* var211 /* : ToolContext */;
val* var213 /* : ToolContext */;
val* var215 /* : NativeArray[String] */;
static val* varonce214;
static val* varonce216;
val* var217 /* : String */;
char* var218 /* : NativeString */;
val* var219 /* : String */;
val* var220 /* : String */;
val* var221 /* : POSetElement[MModule] */;
val* var223 /* : POSetElement[MModule] */;
val* var224 /* : Collection[nullable Object] */;
static val* varonce225;
val* var226 /* : String */;
char* var227 /* : NativeString */;
val* var228 /* : String */;
val* var229 /* : String */;
val* var230 /* : String */;
val* var231 /* : POSetElement[MModule] */;
val* var233 /* : POSetElement[MModule] */;
val* var234 /* : Collection[nullable Object] */;
val* var_235 /* var : Collection[MModule] */;
val* var236 /* : Iterator[nullable Object] */;
val* var_237 /* var : Iterator[MModule] */;
short int var238 /* : Bool */;
val* var240 /* : nullable Object */;
val* var_sup241 /* var sup: MModule */;
val* var242 /* : String */;
val* var244 /* : String */;
static val* varonce245;
val* var246 /* : String */;
char* var247 /* : NativeString */;
val* var248 /* : String */;
short int var249 /* : Bool */;
val* var250 /* : Sys */;
val* var251 /* : MVisibility */;
val* var252 /* : POSetElement[MModule] */;
val* var254 /* : POSetElement[MModule] */;
val* var255 /* : Collection[nullable Object] */;
val* var_directs /* var directs: Collection[MModule] */;
val* var256 /* : ANodes[AImport] */;
val* var258 /* : ANodes[AImport] */;
val* var_259 /* var : ANodes[AImport] */;
val* var260 /* : Iterator[ANode] */;
val* var_261 /* var : Iterator[AImport] */;
short int var262 /* : Bool */;
val* var264 /* : nullable Object */;
val* var_nim /* var nim: AImport */;
short int var265 /* : Bool */;
int cltype266;
int idtype267;
short int var268 /* : Bool */;
val* var270 /* : nullable MModule */;
val* var272 /* : nullable MModule */;
val* var_im /* var im: nullable MModule */;
short int var273 /* : Bool */;
short int var274 /* : Bool */;
short int var276 /* : Bool */;
short int var278 /* : Bool */;
short int var279 /* : Bool */;
var_nmodule = p0;
{
{ /* Inline loader#AModule#is_importation_done (var_nmodule) on <var_nmodule:AModule> */
var2 = var_nmodule->attrs[COLOR_nitc__loader__AModule___is_importation_done].s; /* _is_importation_done on <var_nmodule:AModule> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var){
goto RET_LABEL;
} else {
}
{
{ /* Inline loader#AModule#is_importation_done= (var_nmodule,1) on <var_nmodule:AModule> */
var_nmodule->attrs[COLOR_nitc__loader__AModule___is_importation_done].s = 1; /* _is_importation_done on <var_nmodule:AModule> */
RET_LABEL3:(void)0;
}
}
{
{ /* Inline loader#AModule#mmodule (var_nmodule) on <var_nmodule:AModule> */
var6 = var_nmodule->attrs[COLOR_nitc__loader__AModule___mmodule].val; /* _mmodule on <var_nmodule:AModule> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 813);
fatal_exit(1);
}
var_mmodule = var4;
var_stdimport = 1;
var7 = NEW_core__Array(&type_core__Array__nitc__MModule);
{
core___core__Array___core__kernel__Object__init(var7); /* Direct call array#Array#init on <var7:Array[MModule]>*/
}
var_imported_modules = var7;
{
{ /* Inline parser_nodes#AModule#n_imports (var_nmodule) on <var_nmodule:AModule> */
var10 = var_nmodule->attrs[COLOR_nitc__parser_nodes__AModule___n_imports].val; /* _n_imports on <var_nmodule:AModule> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_imports");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1056);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_ = var8;
{
var11 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_);
}
var_12 = var11;
for(;;) {
{
var13 = ((short int(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_12); /* is_ok on <var_12:Iterator[AImport]>*/
}
if (var13){
} else {
goto BREAK_label;
}
{
var14 = ((val*(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_12); /* item on <var_12:Iterator[AImport]>*/
}
var_aimport = var14;
if (likely(varonce!=NULL)) {
var15 = varonce;
} else {
var16 = "conditional";
var17 = core__flat___NativeString___to_s_full(var16, 11l, 11l);
var15 = var17;
varonce = var15;
}
{
var18 = nitc___nitc__Prod___get_annotations(var_aimport, var15);
}
var_atconditionals = var18;
{
var19 = core___core__Collection___not_empty(var_atconditionals);
}
if (var19){
goto BREAK_label20;
} else {
}
var_stdimport = 0;
/* <var_aimport:AImport> isa AStdImport */
cltype = type_nitc__AStdImport.color;
idtype = type_nitc__AStdImport.id;
if(cltype >= var_aimport->type->table_size) {
var21 = 0;
} else {
var21 = var_aimport->type->type_table[cltype] == idtype;
}
var22 = !var21;
if (var22){
goto BREAK_label20;
} else {
}
{
{ /* Inline parser_nodes#AStdImport#n_name (var_aimport) on <var_aimport:AImport(AStdImport)> */
var25 = var_aimport->attrs[COLOR_nitc__parser_nodes__AStdImport___n_name].val; /* _n_name on <var_aimport:AImport(AStdImport)> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1104);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline mmodule#MModule#mgroup (var_mmodule) on <var_mmodule:MModule> */
var28 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___mgroup].val; /* _mgroup on <var_mmodule:MModule> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
var29 = nitc__loader___ModelBuilder___seach_module_by_amodule_name(self, var23, var26);
}
var_sup = var29;
if (var_sup == NULL) {
var30 = 1; /* is null */
} else {
var30 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_sup,((val*)NULL)) on <var_sup:nullable MModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_sup,var_other) on <var_sup:nullable MModule(MModule)> */
var35 = var_sup == var_other;
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
{
{ /* Inline model_base#MEntity#is_broken= (var_mmodule,1) on <var_mmodule:MModule> */
var_mmodule->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mmodule:MModule> */
RET_LABEL36:(void)0;
}
}
{
{ /* Inline loader#AModule#mmodule= (var_nmodule,((val*)NULL)) on <var_nmodule:AModule> */
var_nmodule->attrs[COLOR_nitc__loader__AModule___mmodule].val = ((val*)NULL); /* _mmodule on <var_nmodule:AModule> */
RET_LABEL37:(void)0;
}
}
goto BREAK_label20;
} else {
}
{
var38 = nitc__loader___MModule___load(var_sup, self);
}
var_ast = var38;
if (var_ast == NULL) {
var39 = 1; /* is null */
} else {
var39 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ast,((val*)NULL)) on <var_ast:nullable AModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_ast,var_other) on <var_ast:nullable AModule(AModule)> */
var44 = var_ast == var_other;
var42 = var44;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
var40 = var42;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
var39 = var40;
}
if (var39){
{
{ /* Inline model_base#MEntity#is_broken= (var_mmodule,1) on <var_mmodule:MModule> */
var_mmodule->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mmodule:MModule> */
RET_LABEL45:(void)0;
}
}
{
{ /* Inline loader#AModule#mmodule= (var_nmodule,((val*)NULL)) on <var_nmodule:AModule> */
var_nmodule->attrs[COLOR_nitc__loader__AModule___mmodule].val = ((val*)NULL); /* _mmodule on <var_nmodule:AModule> */
RET_LABEL46:(void)0;
}
}
goto BREAK_label20;
} else {
}
{
{ /* Inline loader#AStdImport#mmodule= (var_aimport,var_sup) on <var_aimport:AImport(AStdImport)> */
var_aimport->attrs[COLOR_nitc__loader__AStdImport___mmodule].val = var_sup; /* _mmodule on <var_aimport:AImport(AStdImport)> */
RET_LABEL47:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_imported_modules, var_sup); /* Direct call array#Array#add on <var_imported_modules:Array[MModule]>*/
}
{
{ /* Inline parser_nodes#AImport#n_visibility (var_aimport) on <var_aimport:AImport(AStdImport)> */
var50 = var_aimport->attrs[COLOR_nitc__parser_nodes__AImport___n_visibility].val; /* _n_visibility on <var_aimport:AImport(AStdImport)> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1094);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
var51 = ((val*(*)(val* self))(var48->class->vft[COLOR_nitc__modelbuilder_base__AVisibility__mvisibility]))(var48); /* mvisibility on <var48:AVisibility>*/
}
var_mvisibility = var51;
var52 = glob_sys;
{
var53 = nitc__model_base___core__Sys___protected_visibility(var52);
}
{
{ /* Inline kernel#Object#== (var_mvisibility,var53) on <var_mvisibility:MVisibility> */
var_other = var53;
{
{ /* Inline kernel#Object#is_same_instance (var_mvisibility,var_other) on <var_mvisibility:MVisibility> */
var58 = var_mvisibility == var_other;
var56 = var58;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
if (var54){
{
{ /* Inline model_base#MEntity#is_broken= (var_mmodule,1) on <var_mmodule:MModule> */
var_mmodule->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mmodule:MModule> */
RET_LABEL59:(void)0;
}
}
{
{ /* Inline parser_nodes#AImport#n_visibility (var_aimport) on <var_aimport:AImport(AStdImport)> */
var62 = var_aimport->attrs[COLOR_nitc__parser_nodes__AImport___n_visibility].val; /* _n_visibility on <var_aimport:AImport(AStdImport)> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1094);
fatal_exit(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "Error: only properties can be protected.";
var66 = core__flat___NativeString___to_s_full(var65, 40l, 40l);
var64 = var66;
varonce63 = var64;
}
{
nitc___nitc__ModelBuilder___error(self, var60, var64); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
{
{ /* Inline model_base#MEntity#is_broken= (var_mmodule,1) on <var_mmodule:MModule> */
var_mmodule->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mmodule:MModule> */
RET_LABEL67:(void)0;
}
}
{
{ /* Inline loader#AModule#mmodule= (var_nmodule,((val*)NULL)) on <var_nmodule:AModule> */
var_nmodule->attrs[COLOR_nitc__loader__AModule___mmodule].val = ((val*)NULL); /* _mmodule on <var_nmodule:AModule> */
RET_LABEL68:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Object#== (var_sup,var_mmodule) on <var_sup:nullable MModule(MModule)> */
var_other = var_mmodule;
{
{ /* Inline kernel#Object#is_same_instance (var_sup,var_other) on <var_sup:nullable MModule(MModule)> */
var73 = var_sup == var_other;
var71 = var73;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
var69 = var71;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
}
if (var69){
{
{ /* Inline parser_nodes#AStdImport#n_name (var_aimport) on <var_aimport:AImport(AStdImport)> */
var76 = var_aimport->attrs[COLOR_nitc__parser_nodes__AStdImport___n_name].val; /* _n_name on <var_aimport:AImport(AStdImport)> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1104);
fatal_exit(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
if (unlikely(varonce77==NULL)) {
var78 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce79!=NULL)) {
var80 = varonce79;
} else {
var81 = "Error: dependency loop in module ";
var82 = core__flat___NativeString___to_s_full(var81, 33l, 33l);
var80 = var82;
varonce79 = var80;
}
((struct instance_core__NativeArray*)var78)->values[0]=var80;
if (likely(varonce83!=NULL)) {
var84 = varonce83;
} else {
var85 = ".";
var86 = core__flat___NativeString___to_s_full(var85, 1l, 1l);
var84 = var86;
varonce83 = var84;
}
((struct instance_core__NativeArray*)var78)->values[2]=var84;
} else {
var78 = varonce77;
varonce77 = NULL;
}
{
var87 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmodule); /* to_s on <var_mmodule:MModule>*/
}
((struct instance_core__NativeArray*)var78)->values[1]=var87;
{
var88 = ((val*(*)(val* self))(var78->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var78); /* native_to_s on <var78:NativeArray[String]>*/
}
varonce77 = var78;
{
nitc___nitc__ModelBuilder___error(self, var74, var88); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
{
{ /* Inline model_base#MEntity#is_broken= (var_mmodule,1) on <var_mmodule:MModule> */
var_mmodule->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mmodule:MModule> */
RET_LABEL89:(void)0;
}
}
{
{ /* Inline loader#AModule#mmodule= (var_nmodule,((val*)NULL)) on <var_nmodule:AModule> */
var_nmodule->attrs[COLOR_nitc__loader__AModule___mmodule].val = ((val*)NULL); /* _mmodule on <var_nmodule:AModule> */
RET_LABEL90:(void)0;
}
}
} else {
}
{
{ /* Inline mmodule#MModule#in_importation (var_sup) on <var_sup:nullable MModule(MModule)> */
var93 = var_sup->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var_sup:nullable MModule(MModule)> */
if (unlikely(var93 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 104);
fatal_exit(1);
}
var91 = var93;
RET_LABEL92:(void)0;
}
}
{
var94 = poset___poset__POSetElement____60d(var91, var_mmodule);
}
if (var94){
{
{ /* Inline parser_nodes#AStdImport#n_name (var_aimport) on <var_aimport:AImport(AStdImport)> */
var97 = var_aimport->attrs[COLOR_nitc__parser_nodes__AStdImport___n_name].val; /* _n_name on <var_aimport:AImport(AStdImport)> */
if (unlikely(var97 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1104);
fatal_exit(1);
}
var95 = var97;
RET_LABEL96:(void)0;
}
}
if (unlikely(varonce98==NULL)) {
var99 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce100!=NULL)) {
var101 = varonce100;
} else {
var102 = "Error: dependency loop between modules ";
var103 = core__flat___NativeString___to_s_full(var102, 39l, 39l);
var101 = var103;
varonce100 = var101;
}
((struct instance_core__NativeArray*)var99)->values[0]=var101;
if (likely(varonce104!=NULL)) {
var105 = varonce104;
} else {
var106 = " and ";
var107 = core__flat___NativeString___to_s_full(var106, 5l, 5l);
var105 = var107;
varonce104 = var105;
}
((struct instance_core__NativeArray*)var99)->values[2]=var105;
if (likely(varonce108!=NULL)) {
var109 = varonce108;
} else {
var110 = ".";
var111 = core__flat___NativeString___to_s_full(var110, 1l, 1l);
var109 = var111;
varonce108 = var109;
}
((struct instance_core__NativeArray*)var99)->values[4]=var109;
} else {
var99 = varonce98;
varonce98 = NULL;
}
{
var112 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmodule); /* to_s on <var_mmodule:MModule>*/
}
((struct instance_core__NativeArray*)var99)->values[1]=var112;
{
var113 = ((val*(*)(val* self))(var_sup->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_sup); /* to_s on <var_sup:nullable MModule(MModule)>*/
}
((struct instance_core__NativeArray*)var99)->values[3]=var113;
{
var114 = ((val*(*)(val* self))(var99->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var99); /* native_to_s on <var99:NativeArray[String]>*/
}
varonce98 = var99;
{
nitc___nitc__ModelBuilder___error(self, var95, var114); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
{
{ /* Inline model_base#MEntity#is_broken= (var_mmodule,1) on <var_mmodule:MModule> */
var_mmodule->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mmodule:MModule> */
RET_LABEL115:(void)0;
}
}
{
{ /* Inline loader#AModule#mmodule= (var_nmodule,((val*)NULL)) on <var_nmodule:AModule> */
var_nmodule->attrs[COLOR_nitc__loader__AModule___mmodule].val = ((val*)NULL); /* _mmodule on <var_nmodule:AModule> */
RET_LABEL116:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
nitc___nitc__MModule___set_visibility_for(var_mmodule, var_sup, var_mvisibility); /* Direct call mmodule#MModule#set_visibility_for on <var_mmodule:MModule>*/
}
BREAK_label20: (void)0;
{
((void(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_12); /* next on <var_12:Iterator[AImport]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_12); /* finish on <var_12:Iterator[AImport]>*/
}
if (var_stdimport){
if (likely(varonce117!=NULL)) {
var118 = varonce117;
} else {
var119 = "core";
var120 = core__flat___NativeString___to_s_full(var119, 4l, 4l);
var118 = var120;
varonce117 = var118;
}
var_mod_name = var118;
{
var121 = nitc__loader___ModelBuilder___get_mmodule_by_name(self, var_nmodule, ((val*)NULL), var_mod_name);
}
var_sup122 = var121;
if (var_sup122 == NULL) {
var123 = 1; /* is null */
} else {
var123 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_sup122,((val*)NULL)) on <var_sup122:nullable MModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_sup122,var_other) on <var_sup122:nullable MModule(MModule)> */
var128 = var_sup122 == var_other;
var126 = var128;
goto RET_LABEL127;
RET_LABEL127:(void)0;
}
}
var124 = var126;
goto RET_LABEL125;
RET_LABEL125:(void)0;
}
var123 = var124;
}
if (var123){
{
{ /* Inline model_base#MEntity#is_broken= (var_mmodule,1) on <var_mmodule:MModule> */
var_mmodule->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mmodule:MModule> */
RET_LABEL129:(void)0;
}
}
{
{ /* Inline loader#AModule#mmodule= (var_nmodule,((val*)NULL)) on <var_nmodule:AModule> */
var_nmodule->attrs[COLOR_nitc__loader__AModule___mmodule].val = ((val*)NULL); /* _mmodule on <var_nmodule:AModule> */
RET_LABEL130:(void)0;
}
}
} else {
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_imported_modules, var_sup122); /* Direct call array#Array#add on <var_imported_modules:Array[MModule]>*/
}
var131 = glob_sys;
{
var132 = nitc__model_base___core__Sys___public_visibility(var131);
}
{
nitc___nitc__MModule___set_visibility_for(var_mmodule, var_sup122, var132); /* Direct call mmodule#MModule#set_visibility_for on <var_mmodule:MModule>*/
}
}
} else {
}
{
{ /* Inline parser_nodes#AModule#n_imports (var_nmodule) on <var_nmodule:AModule> */
var135 = var_nmodule->attrs[COLOR_nitc__parser_nodes__AModule___n_imports].val; /* _n_imports on <var_nmodule:AModule> */
if (unlikely(var135 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_imports");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1056);
fatal_exit(1);
}
var133 = var135;
RET_LABEL134:(void)0;
}
}
var_136 = var133;
{
var137 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_136);
}
var_138 = var137;
for(;;) {
{
var139 = ((short int(*)(val* self))((((long)var_138&3)?class_info[((long)var_138&3)]:var_138->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_138); /* is_ok on <var_138:Iterator[AImport]>*/
}
if (var139){
} else {
goto BREAK_label140;
}
{
var141 = ((val*(*)(val* self))((((long)var_138&3)?class_info[((long)var_138&3)]:var_138->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_138); /* item on <var_138:Iterator[AImport]>*/
}
var_aimport142 = var141;
/* <var_aimport142:AImport> isa AStdImport */
cltype144 = type_nitc__AStdImport.color;
idtype145 = type_nitc__AStdImport.id;
if(cltype144 >= var_aimport142->type->table_size) {
var143 = 0;
} else {
var143 = var_aimport142->type->type_table[cltype144] == idtype145;
}
var146 = !var143;
if (var146){
goto BREAK_label147;
} else {
}
if (likely(varonce148!=NULL)) {
var149 = varonce148;
} else {
var150 = "conditional";
var151 = core__flat___NativeString___to_s_full(var150, 11l, 11l);
var149 = var151;
varonce148 = var149;
}
{
var152 = nitc___nitc__Prod___get_annotations(var_aimport142, var149);
}
var_atconditionals153 = var152;
{
var154 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_atconditionals153);
}
if (var154){
goto BREAK_label147;
} else {
}
{
{ /* Inline parser_nodes#AStdImport#n_name (var_aimport142) on <var_aimport142:AImport(AStdImport)> */
var157 = var_aimport142->attrs[COLOR_nitc__parser_nodes__AStdImport___n_name].val; /* _n_name on <var_aimport142:AImport(AStdImport)> */
if (unlikely(var157 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1104);
fatal_exit(1);
}
var155 = var157;
RET_LABEL156:(void)0;
}
}
{
{ /* Inline mmodule#MModule#mgroup (var_mmodule) on <var_mmodule:MModule> */
var160 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___mgroup].val; /* _mgroup on <var_mmodule:MModule> */
var158 = var160;
RET_LABEL159:(void)0;
}
}
{
var161 = nitc__loader___ModelBuilder___seach_module_by_amodule_name(self, var155, var158);
}
var_suppath = var161;
if (var_suppath == NULL) {
var162 = 1; /* is null */
} else {
var162 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_suppath,((val*)NULL)) on <var_suppath:nullable MModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_suppath,var_other) on <var_suppath:nullable MModule(MModule)> */
var167 = var_suppath == var_other;
var165 = var167;
goto RET_LABEL166;
RET_LABEL166:(void)0;
}
}
var163 = var165;
goto RET_LABEL164;
RET_LABEL164:(void)0;
}
var162 = var163;
}
if (var162){
goto BREAK_label147;
} else {
}
var_168 = var_atconditionals153;
{
var169 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_168);
}
var_170 = var169;
for(;;) {
{
var171 = ((short int(*)(val* self))((((long)var_170&3)?class_info[((long)var_170&3)]:var_170->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_170); /* is_ok on <var_170:IndexedIterator[AAnnotation]>*/
}
if (var171){
} else {
goto BREAK_label172;
}
{
var173 = ((val*(*)(val* self))((((long)var_170&3)?class_info[((long)var_170&3)]:var_170->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_170); /* item on <var_170:IndexedIterator[AAnnotation]>*/
}
var_atconditional = var173;
{
{ /* Inline parser_nodes#AAnnotation#n_args (var_atconditional) on <var_atconditional:AAnnotation> */
var176 = var_atconditional->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_args].val; /* _n_args on <var_atconditional:AAnnotation> */
if (unlikely(var176 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2926);
fatal_exit(1);
}
var174 = var176;
RET_LABEL175:(void)0;
}
}
var_nargs = var174;
{
var177 = nitc___nitc__ANodes___core__abstract_collection__Collection__is_empty(var_nargs);
}
if (var177){
if (likely(varonce178!=NULL)) {
var179 = varonce178;
} else {
var180 = "Syntax Error: `conditional` expects module identifiers as arguments.";
var181 = core__flat___NativeString___to_s_full(var180, 68l, 68l);
var179 = var181;
varonce178 = var179;
}
{
nitc___nitc__ModelBuilder___error(self, var_atconditional, var179); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto BREAK_label182;
} else {
}
var183 = NEW_core__Array(&type_core__Array__nitc__MModule);
{
core___core__Array___core__kernel__Object__init(var183); /* Direct call array#Array#init on <var183:Array[MModule]>*/
}
var_rule = var183;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_rule, var_suppath); /* Direct call array#Array#add on <var_rule:Array[MModule]>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_rule, var_mmodule); /* Direct call array#Array#add on <var_rule:Array[MModule]>*/
}
var_184 = var_nargs;
{
var185 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_184);
}
var_186 = var185;
for(;;) {
{
var187 = ((short int(*)(val* self))((((long)var_186&3)?class_info[((long)var_186&3)]:var_186->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_186); /* is_ok on <var_186:Iterator[AExpr]>*/
}
if (var187){
} else {
goto BREAK_label188;
}
{
var189 = ((val*(*)(val* self))((((long)var_186&3)?class_info[((long)var_186&3)]:var_186->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_186); /* item on <var_186:Iterator[AExpr]>*/
}
var_narg = var189;
{
var190 = nitc__parser_work___AExpr___as_id(var_narg);
}
var_id = var190;
if (var_id == NULL) {
var191 = 1; /* is null */
} else {
var191 = 0; /* arg is null but recv is not */
}
if (0) {
var192 = ((short int(*)(val* self, val* p0))(var_id->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_id, ((val*)NULL)); /* == on <var_id:nullable String>*/
var191 = var192;
}
if (var191){
if (likely(varonce193!=NULL)) {
var194 = varonce193;
} else {
var195 = "Syntax Error: `conditional` expects module identifier as arguments.";
var196 = core__flat___NativeString___to_s_full(var195, 67l, 67l);
var194 = var196;
varonce193 = var194;
}
{
nitc___nitc__ModelBuilder___error(self, var_narg, var194); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto BREAK_label197;
} else {
}
{
{ /* Inline mmodule#MModule#mgroup (var_mmodule) on <var_mmodule:MModule> */
var200 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___mgroup].val; /* _mgroup on <var_mmodule:MModule> */
var198 = var200;
RET_LABEL199:(void)0;
}
}
{
var201 = nitc__loader___ModelBuilder___search_mmodule_by_name(self, var_narg, var198, var_id);
}
var_mp = var201;
if (var_mp == NULL) {
var202 = 1; /* is null */
} else {
var202 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mp,((val*)NULL)) on <var_mp:nullable MModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mp,var_other) on <var_mp:nullable MModule(MModule)> */
var207 = var_mp == var_other;
var205 = var207;
goto RET_LABEL206;
RET_LABEL206:(void)0;
}
}
var203 = var205;
goto RET_LABEL204;
RET_LABEL204:(void)0;
}
var202 = var203;
}
if (var202){
goto BREAK_label197;
} else {
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_rule, var_mp); /* Direct call array#Array#add on <var_rule:Array[MModule]>*/
}
BREAK_label197: (void)0;
{
((void(*)(val* self))((((long)var_186&3)?class_info[((long)var_186&3)]:var_186->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_186); /* next on <var_186:Iterator[AExpr]>*/
}
}
BREAK_label188: (void)0;
{
((void(*)(val* self))((((long)var_186&3)?class_info[((long)var_186&3)]:var_186->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_186); /* finish on <var_186:Iterator[AExpr]>*/
}
{
{ /* Inline loader#ModelBuilder#conditional_importations (self) on <self:ModelBuilder> */
var210 = self->attrs[COLOR_nitc__loader__ModelBuilder___conditional_importations].val; /* _conditional_importations on <self:ModelBuilder> */
if (unlikely(var210 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conditional_importations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 944);
fatal_exit(1);
}
var208 = var210;
RET_LABEL209:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var208, var_rule); /* Direct call array#Array#add on <var208:Array[SequenceRead[MModule]]>*/
}
BREAK_label182: (void)0;
{
((void(*)(val* self))((((long)var_170&3)?class_info[((long)var_170&3)]:var_170->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_170); /* next on <var_170:IndexedIterator[AAnnotation]>*/
}
}
BREAK_label172: (void)0;
{
((void(*)(val* self))((((long)var_170&3)?class_info[((long)var_170&3)]:var_170->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_170); /* finish on <var_170:IndexedIterator[AAnnotation]>*/
}
BREAK_label147: (void)0;
{
((void(*)(val* self))((((long)var_138&3)?class_info[((long)var_138&3)]:var_138->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_138); /* next on <var_138:Iterator[AImport]>*/
}
}
BREAK_label140: (void)0;
{
((void(*)(val* self))((((long)var_138&3)?class_info[((long)var_138&3)]:var_138->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_138); /* finish on <var_138:Iterator[AImport]>*/
}
{
nitc___nitc__MModule___set_imported_mmodules(var_mmodule, var_imported_modules); /* Direct call mmodule#MModule#set_imported_mmodules on <var_mmodule:MModule>*/
}
{
nitc__loader___ModelBuilder___apply_conditional_importations(self, var_mmodule); /* Direct call loader#ModelBuilder#apply_conditional_importations on <self:ModelBuilder>*/
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var213 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var213 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var211 = var213;
RET_LABEL212:(void)0;
}
}
if (unlikely(varonce214==NULL)) {
var215 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce216!=NULL)) {
var217 = varonce216;
} else {
var218 = " imports ";
var219 = core__flat___NativeString___to_s_full(var218, 9l, 9l);
var217 = var219;
varonce216 = var217;
}
((struct instance_core__NativeArray*)var215)->values[1]=var217;
} else {
var215 = varonce214;
varonce214 = NULL;
}
{
var220 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmodule); /* to_s on <var_mmodule:MModule>*/
}
((struct instance_core__NativeArray*)var215)->values[0]=var220;
{
{ /* Inline mmodule#MModule#in_importation (var_mmodule) on <var_mmodule:MModule> */
var223 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var223 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 104);
fatal_exit(1);
}
var221 = var223;
RET_LABEL222:(void)0;
}
}
{
var224 = poset___poset__POSetElement___direct_greaters(var221);
}
if (likely(varonce225!=NULL)) {
var226 = varonce225;
} else {
var227 = ", ";
var228 = core__flat___NativeString___to_s_full(var227, 2l, 2l);
var226 = var228;
varonce225 = var226;
}
{
var229 = core__abstract_text___Collection___join(var224, var226);
}
((struct instance_core__NativeArray*)var215)->values[2]=var229;
{
var230 = ((val*(*)(val* self))(var215->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var215); /* native_to_s on <var215:NativeArray[String]>*/
}
varonce214 = var215;
{
nitc___nitc__ToolContext___info(var211, var230, 3l); /* Direct call toolcontext#ToolContext#info on <var211:ToolContext>*/
}
{
{ /* Inline mmodule#MModule#in_importation (var_mmodule) on <var_mmodule:MModule> */
var233 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var233 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 104);
fatal_exit(1);
}
var231 = var233;
RET_LABEL232:(void)0;
}
}
{
var234 = poset___poset__POSetElement___greaters(var231);
}
var_235 = var234;
{
var236 = ((val*(*)(val* self))((((long)var_235&3)?class_info[((long)var_235&3)]:var_235->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_235); /* iterator on <var_235:Collection[MModule]>*/
}
var_237 = var236;
for(;;) {
{
var238 = ((short int(*)(val* self))((((long)var_237&3)?class_info[((long)var_237&3)]:var_237->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_237); /* is_ok on <var_237:Iterator[MModule]>*/
}
if (var238){
} else {
goto BREAK_label239;
}
{
var240 = ((val*(*)(val* self))((((long)var_237&3)?class_info[((long)var_237&3)]:var_237->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_237); /* item on <var_237:Iterator[MModule]>*/
}
var_sup241 = var240;
{
{ /* Inline mmodule#MModule#name (var_sup241) on <var_sup241:MModule> */
var244 = var_sup241->attrs[COLOR_nitc__mmodule__MModule___name].val; /* _name on <var_sup241:MModule> */
if (unlikely(var244 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 95);
fatal_exit(1);
}
var242 = var244;
RET_LABEL243:(void)0;
}
}
if (likely(varonce245!=NULL)) {
var246 = varonce245;
} else {
var247 = "core";
var248 = core__flat___NativeString___to_s_full(var247, 4l, 4l);
var246 = var248;
varonce245 = var246;
}
{
var249 = ((short int(*)(val* self, val* p0))(var242->class->vft[COLOR_core__kernel__Object___61d_61d]))(var242, var246); /* == on <var242:String>*/
}
if (var249){
var250 = glob_sys;
{
var251 = nitc__model_base___core__Sys___public_visibility(var250);
}
{
nitc___nitc__MModule___set_visibility_for(var_mmodule, var_sup241, var251); /* Direct call mmodule#MModule#set_visibility_for on <var_mmodule:MModule>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_237&3)?class_info[((long)var_237&3)]:var_237->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_237); /* next on <var_237:Iterator[MModule]>*/
}
}
BREAK_label239: (void)0;
{
((void(*)(val* self))((((long)var_237&3)?class_info[((long)var_237&3)]:var_237->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_237); /* finish on <var_237:Iterator[MModule]>*/
}
{
{ /* Inline mmodule#MModule#in_importation (var_mmodule) on <var_mmodule:MModule> */
var254 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var254 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 104);
fatal_exit(1);
}
var252 = var254;
RET_LABEL253:(void)0;
}
}
{
var255 = poset___poset__POSetElement___direct_greaters(var252);
}
var_directs = var255;
{
{ /* Inline parser_nodes#AModule#n_imports (var_nmodule) on <var_nmodule:AModule> */
var258 = var_nmodule->attrs[COLOR_nitc__parser_nodes__AModule___n_imports].val; /* _n_imports on <var_nmodule:AModule> */
if (unlikely(var258 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_imports");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1056);
fatal_exit(1);
}
var256 = var258;
RET_LABEL257:(void)0;
}
}
var_259 = var256;
{
var260 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_259);
}
var_261 = var260;
for(;;) {
{
var262 = ((short int(*)(val* self))((((long)var_261&3)?class_info[((long)var_261&3)]:var_261->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_261); /* is_ok on <var_261:Iterator[AImport]>*/
}
if (var262){
} else {
goto BREAK_label263;
}
{
var264 = ((val*(*)(val* self))((((long)var_261&3)?class_info[((long)var_261&3)]:var_261->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_261); /* item on <var_261:Iterator[AImport]>*/
}
var_nim = var264;
/* <var_nim:AImport> isa AStdImport */
cltype266 = type_nitc__AStdImport.color;
idtype267 = type_nitc__AStdImport.id;
if(cltype266 >= var_nim->type->table_size) {
var265 = 0;
} else {
var265 = var_nim->type->type_table[cltype266] == idtype267;
}
var268 = !var265;
if (var268){
goto BREAK_label269;
} else {
}
{
{ /* Inline loader#AStdImport#mmodule (var_nim) on <var_nim:AImport(AStdImport)> */
var272 = var_nim->attrs[COLOR_nitc__loader__AStdImport___mmodule].val; /* _mmodule on <var_nim:AImport(AStdImport)> */
var270 = var272;
RET_LABEL271:(void)0;
}
}
var_im = var270;
if (var_im == NULL) {
var273 = 1; /* is null */
} else {
var273 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_im,((val*)NULL)) on <var_im:nullable MModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_im,var_other) on <var_im:nullable MModule(MModule)> */
var278 = var_im == var_other;
var276 = var278;
goto RET_LABEL277;
RET_LABEL277:(void)0;
}
}
var274 = var276;
goto RET_LABEL275;
RET_LABEL275:(void)0;
}
var273 = var274;
}
if (var273){
goto BREAK_label269;
} else {
}
{
var279 = ((short int(*)(val* self, val* p0))((((long)var_directs&3)?class_info[((long)var_directs&3)]:var_directs->class)->vft[COLOR_core__abstract_collection__Collection__has]))(var_directs, var_im); /* has on <var_directs:Collection[MModule]>*/
}
if (var279){
goto BREAK_label269;
} else {
}
BREAK_label269: (void)0;
{
((void(*)(val* self))((((long)var_261&3)?class_info[((long)var_261&3)]:var_261->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_261); /* next on <var_261:Iterator[AImport]>*/
}
}
BREAK_label263: (void)0;
{
((void(*)(val* self))((((long)var_261&3)?class_info[((long)var_261&3)]:var_261->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_261); /* finish on <var_261:Iterator[AImport]>*/
}
RET_LABEL:;
}
/* method loader#ModelBuilder#conditional_importations for (self: ModelBuilder): Array[SequenceRead[MModule]] */
val* nitc__loader___ModelBuilder___conditional_importations(val* self) {
val* var /* : Array[SequenceRead[MModule]] */;
val* var1 /* : Array[SequenceRead[MModule]] */;
var1 = self->attrs[COLOR_nitc__loader__ModelBuilder___conditional_importations].val; /* _conditional_importations on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conditional_importations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 944);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#apply_conditional_importations for (self: ModelBuilder, MModule) */
void nitc__loader___ModelBuilder___apply_conditional_importations(val* self, val* p0) {
val* var_mmodule /* var mmodule: MModule */;
short int var_check_conditional_importations /* var check_conditional_importations: Bool */;
val* var /* : Array[SequenceRead[MModule]] */;
val* var2 /* : Array[SequenceRead[MModule]] */;
val* var_ /* var : Array[SequenceRead[MModule]] */;
val* var3 /* : IndexedIterator[nullable Object] */;
val* var_4 /* var : IndexedIterator[SequenceRead[MModule]] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_ci /* var ci: SequenceRead[MModule] */;
long var_i /* var i: Int */;
long var7 /* : Int */;
long var_8 /* var : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_m /* var m: MModule */;
val* var14 /* : POSetElement[MModule] */;
val* var16 /* : POSetElement[MModule] */;
val* var17 /* : Collection[nullable Object] */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
long var21 /* : Int */;
val* var22 /* : nullable Object */;
val* var_sup /* var sup: MModule */;
val* var23 /* : nullable AModule */;
val* var_ast /* var ast: nullable AModule */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : POSetElement[MModule] */;
val* var32 /* : POSetElement[MModule] */;
val* var33 /* : Collection[nullable Object] */;
short int var34 /* : Bool */;
val* var35 /* : ToolContext */;
val* var37 /* : ToolContext */;
val* var38 /* : NativeArray[String] */;
static val* varonce;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
val* var42 /* : String */;
val* var43 /* : String */;
val* var44 /* : String */;
val* var45 /* : String */;
val* var46 /* : Sys */;
val* var47 /* : MVisibility */;
val* var48 /* : Array[MModule] */;
val* var_49 /* var : Array[MModule] */;
var_mmodule = p0;
var_check_conditional_importations = 1;
for(;;) {
if (var_check_conditional_importations){
var_check_conditional_importations = 0;
{
{ /* Inline loader#ModelBuilder#conditional_importations (self) on <self:ModelBuilder> */
var2 = self->attrs[COLOR_nitc__loader__ModelBuilder___conditional_importations].val; /* _conditional_importations on <self:ModelBuilder> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conditional_importations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 944);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_ = var;
{
var3 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:IndexedIterator[SequenceRead[MModule]]>*/
}
if (var5){
} else {
goto BREAK_;
}
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:IndexedIterator[SequenceRead[MModule]]>*/
}
var_ci = var6;
var_i = 1l;
{
var7 = ((long(*)(val* self))((((long)var_ci&3)?class_info[((long)var_ci&3)]:var_ci->class)->vft[COLOR_core__abstract_collection__Collection__length]))(var_ci); /* length on <var_ci:SequenceRead[MModule]>*/
}
var_8 = var7;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_8) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_8:Int> isa OTHER */
/* <var_8:Int> isa OTHER */
var11 = 1; /* easy <var_8:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var12 = var_i < var_8;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
} else {
goto BREAK_label;
}
{
var13 = ((val*(*)(val* self, long p0))((((long)var_ci&3)?class_info[((long)var_ci&3)]:var_ci->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var_ci, var_i); /* [] on <var_ci:SequenceRead[MModule]>*/
}
var_m = var13;
{
{ /* Inline mmodule#MModule#in_importation (var_mmodule) on <var_mmodule:MModule> */
var16 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 104);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = poset___poset__POSetElement___greaters(var14);
}
{
var18 = ((short int(*)(val* self, val* p0))((((long)var17&3)?class_info[((long)var17&3)]:var17->class)->vft[COLOR_core__abstract_collection__Collection__has]))(var17, var_m); /* has on <var17:Collection[nullable Object](Collection[MModule])>*/
}
var19 = !var18;
if (var19){
goto BREAK_20;
} else {
}
{
var21 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var21;
}
BREAK_label: (void)0;
{
var22 = ((val*(*)(val* self))((((long)var_ci&3)?class_info[((long)var_ci&3)]:var_ci->class)->vft[COLOR_core__abstract_collection__Collection__first]))(var_ci); /* first on <var_ci:SequenceRead[MModule]>*/
}
var_sup = var22;
{
var23 = nitc__loader___MModule___load(var_sup, self);
}
var_ast = var23;
if (var_ast == NULL) {
var24 = 1; /* is null */
} else {
var24 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ast,((val*)NULL)) on <var_ast:nullable AModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_ast,var_other) on <var_ast:nullable AModule(AModule)> */
var29 = var_ast == var_other;
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
goto BREAK_20;
} else {
}
{
{ /* Inline mmodule#MModule#in_importation (var_mmodule) on <var_mmodule:MModule> */
var32 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 104);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
var33 = poset___poset__POSetElement___greaters(var30);
}
{
var34 = ((short int(*)(val* self, val* p0))((((long)var33&3)?class_info[((long)var33&3)]:var33->class)->vft[COLOR_core__abstract_collection__Collection__has]))(var33, var_sup); /* has on <var33:Collection[nullable Object](Collection[MModule])>*/
}
if (var34){
goto BREAK_20;
} else {
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var37 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var38 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = " conditionally imports ";
var42 = core__flat___NativeString___to_s_full(var41, 23l, 23l);
var40 = var42;
varonce39 = var40;
}
((struct instance_core__NativeArray*)var38)->values[1]=var40;
} else {
var38 = varonce;
varonce = NULL;
}
{
var43 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmodule); /* to_s on <var_mmodule:MModule>*/
}
((struct instance_core__NativeArray*)var38)->values[0]=var43;
{
var44 = ((val*(*)(val* self))(var_sup->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_sup); /* to_s on <var_sup:MModule>*/
}
((struct instance_core__NativeArray*)var38)->values[2]=var44;
{
var45 = ((val*(*)(val* self))(var38->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var38); /* native_to_s on <var38:NativeArray[String]>*/
}
varonce = var38;
{
nitc___nitc__ToolContext___info(var35, var45, 3l); /* Direct call toolcontext#ToolContext#info on <var35:ToolContext>*/
}
var46 = glob_sys;
{
var47 = nitc__model_base___core__Sys___public_visibility(var46);
}
{
nitc___nitc__MModule___set_visibility_for(var_mmodule, var_sup, var47); /* Direct call mmodule#MModule#set_visibility_for on <var_mmodule:MModule>*/
}
var48 = NEW_core__Array(&type_core__Array__nitc__MModule);
{
core___core__Array___with_capacity(var48, 1l); /* Direct call array#Array#with_capacity on <var48:Array[MModule]>*/
}
var_49 = var48;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_49, var_sup); /* Direct call array#AbstractArray#push on <var_49:Array[MModule]>*/
}
{
nitc___nitc__MModule___set_imported_mmodules(var_mmodule, var_49); /* Direct call mmodule#MModule#set_imported_mmodules on <var_mmodule:MModule>*/
}
var_check_conditional_importations = 1;
BREAK_20: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:IndexedIterator[SequenceRead[MModule]]>*/
}
}
BREAK_: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:IndexedIterator[SequenceRead[MModule]]>*/
}
} else {
goto BREAK_label50;
}
}
BREAK_label50: (void)0;
RET_LABEL:;
}
/* method loader#ModelBuilder#nmodules for (self: ModelBuilder): Array[AModule] */
val* nitc__loader___ModelBuilder___nmodules(val* self) {
val* var /* : Array[AModule] */;
val* var1 /* : Array[AModule] */;
var1 = self->attrs[COLOR_nitc__loader__ModelBuilder___nmodules].val; /* _nmodules on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _nmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 995);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#mmodule2nmodule for (self: ModelBuilder): HashMap[MModule, AModule] */
val* nitc__loader___ModelBuilder___mmodule2nmodule(val* self) {
val* var /* : HashMap[MModule, AModule] */;
val* var1 /* : HashMap[MModule, AModule] */;
var1 = self->attrs[COLOR_nitc__loader__ModelBuilder___mmodule2nmodule].val; /* _mmodule2nmodule on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule2nmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 998);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#mmodule2node for (self: ModelBuilder, MModule): nullable AModule */
val* nitc__loader___ModelBuilder___mmodule2node(val* self, val* p0) {
val* var /* : nullable AModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : HashMap[MModule, AModule] */;
val* var3 /* : HashMap[MModule, AModule] */;
val* var4 /* : nullable Object */;
var_mmodule = p0;
{
{ /* Inline loader#ModelBuilder#mmodule2nmodule (self) on <self:ModelBuilder> */
var3 = self->attrs[COLOR_nitc__loader__ModelBuilder___mmodule2nmodule].val; /* _mmodule2nmodule on <self:ModelBuilder> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule2nmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 998);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__HashMap___core__abstract_collection__MapRead__get_or_null(var1, var_mmodule);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#MModule#parse for (self: MModule, ModelBuilder): nullable AModule */
val* nitc__loader___MModule___parse(val* self, val* p0) {
val* var /* : nullable AModule */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var1 /* : HashMap[MModule, AModule] */;
val* var3 /* : HashMap[MModule, AModule] */;
val* var4 /* : nullable Object */;
val* var_nmodule /* var nmodule: nullable AModule */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable String */;
val* var12 /* : nullable String */;
val* var_filepath /* var filepath: nullable String */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : nullable AModule */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var_other22 /* var other: nullable Object */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
val* var27 /* : Location */;
val* var29 /* : Location */;
val* var31 /* : nullable MGroup */;
val* var33 /* : nullable MGroup */;
val* var34 /* : Array[MModule] */;
val* var36 /* : Array[MModule] */;
var_modelbuilder = p0;
{
{ /* Inline loader#ModelBuilder#mmodule2nmodule (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var3 = var_modelbuilder->attrs[COLOR_nitc__loader__ModelBuilder___mmodule2nmodule].val; /* _mmodule2nmodule on <var_modelbuilder:ModelBuilder> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule2nmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 998);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__HashMap___core__abstract_collection__MapRead__get_or_null(var1, self);
}
var_nmodule = var4;
if (var_nmodule == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nmodule,((val*)NULL)) on <var_nmodule:nullable AModule> */
var_other = ((val*)NULL);
{
var8 = ((short int(*)(val* self, val* p0))(var_nmodule->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nmodule, var_other); /* == on <var_nmodule:nullable AModule(AModule)>*/
}
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
var = var_nmodule;
goto RET_LABEL;
} else {
}
{
{ /* Inline mmodule#MModule#filepath (self) on <self:MModule> */
var12 = self->attrs[COLOR_nitc__mmodule__MModule___filepath].val; /* _filepath on <self:MModule> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_filepath = var10;
if (var_filepath == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_filepath,((val*)NULL)) on <var_filepath:nullable String> */
var_other = ((val*)NULL);
{
var16 = ((short int(*)(val* self, val* p0))(var_filepath->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_filepath, var_other); /* == on <var_filepath:nullable String(String)>*/
}
var17 = !var16;
var14 = var17;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 1030);
fatal_exit(1);
}
{
var18 = nitc__loader___ModelBuilder___load_module_ast(var_modelbuilder, var_filepath);
}
var_nmodule = var18;
if (var_nmodule == NULL) {
var19 = 1; /* is null */
} else {
var19 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nmodule,((val*)NULL)) on <var_nmodule:nullable AModule> */
var_other22 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_nmodule,var_other22) on <var_nmodule:nullable AModule(AModule)> */
var25 = var_nmodule == var_other22;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var20 = var23;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var19 = var20;
}
if (var19){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline loader#AModule#mmodule= (var_nmodule,self) on <var_nmodule:nullable AModule(AModule)> */
var_nmodule->attrs[COLOR_nitc__loader__AModule___mmodule].val = self; /* _mmodule on <var_nmodule:nullable AModule(AModule)> */
RET_LABEL26:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (var_nmodule) on <var_nmodule:nullable AModule(AModule)> */
var29 = var_nmodule->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_nmodule:nullable AModule(AModule)> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 24);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline mmodule#MModule#location= (self,var27) on <self:MModule> */
self->attrs[COLOR_nitc__mmodule__MModule___location].val = var27; /* _location on <self:MModule> */
RET_LABEL30:(void)0;
}
}
{
{ /* Inline mmodule#MModule#mgroup (self) on <self:MModule> */
var33 = self->attrs[COLOR_nitc__mmodule__MModule___mgroup].val; /* _mgroup on <self:MModule> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
nitc__loader___ModelBuilder___build_a_mmodule(var_modelbuilder, var31, var_nmodule); /* Direct call loader#ModelBuilder#build_a_mmodule on <var_modelbuilder:ModelBuilder>*/
}
{
{ /* Inline loader#ModelBuilder#parsed_modules (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var36 = var_modelbuilder->attrs[COLOR_nitc__loader__ModelBuilder___parsed_modules].val; /* _parsed_modules on <var_modelbuilder:ModelBuilder> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _parsed_modules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 320);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var34, self); /* Direct call array#Array#add on <var34:Array[MModule]>*/
}
var = var_nmodule;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#MModule#load for (self: MModule, ModelBuilder): nullable AModule */
val* nitc__loader___MModule___load(val* self, val* p0) {
val* var /* : nullable AModule */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var1 /* : nullable AModule */;
val* var_nmodule /* var nmodule: nullable AModule */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
var_modelbuilder = p0;
{
var1 = nitc__loader___MModule___parse(self, var_modelbuilder);
}
var_nmodule = var1;
if (var_nmodule == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nmodule,((val*)NULL)) on <var_nmodule:nullable AModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_nmodule,var_other) on <var_nmodule:nullable AModule(AModule)> */
var7 = var_nmodule == var_other;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
nitc__loader___ModelBuilder___build_module_importation(var_modelbuilder, var_nmodule); /* Direct call loader#ModelBuilder#build_module_importation on <var_modelbuilder:ModelBuilder>*/
}
var = var_nmodule;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#MPackage#ini= for (self: MPackage, nullable ConfigTree) */
void nitc__loader___MPackage___ini_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__loader__MPackage___ini].val = p0; /* _ini on <self:MPackage> */
RET_LABEL:;
}
/* method loader#MGroup#scanned for (self: MGroup): Bool */
short int nitc__loader___MGroup___scanned(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__loader__MGroup___scanned].s; /* _scanned on <self:MGroup> */
var = var1;
RET_LABEL:;
return var;
}
/* method loader#MGroup#scanned= for (self: MGroup, Bool) */
void nitc__loader___MGroup___scanned_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__loader__MGroup___scanned].s = p0; /* _scanned on <self:MGroup> */
RET_LABEL:;
}
/* method loader#MGroup#mmodules_by_name for (self: MGroup, String): Array[MModule] */
val* nitc__loader___MGroup___mmodules_by_name(val* self, val* p0) {
val* var /* : Array[MModule] */;
val* var_name /* var name: String */;
val* var1 /* : Array[MModule] */;
val* var_res /* var res: Array[MModule] */;
val* var2 /* : POSetElement[MGroup] */;
val* var4 /* : POSetElement[MGroup] */;
val* var5 /* : Collection[nullable Object] */;
val* var_ /* var : Collection[MGroup] */;
val* var6 /* : Iterator[nullable Object] */;
val* var_7 /* var : Iterator[MGroup] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_g /* var g: MGroup */;
val* var10 /* : Array[MModule] */;
val* var12 /* : Array[MModule] */;
val* var_13 /* var : Array[MModule] */;
val* var14 /* : IndexedIterator[nullable Object] */;
val* var_15 /* var : IndexedIterator[MModule] */;
short int var16 /* : Bool */;
val* var18 /* : nullable Object */;
val* var_mp /* var mp: MModule */;
val* var19 /* : String */;
val* var21 /* : String */;
short int var22 /* : Bool */;
var_name = p0;
var1 = NEW_core__Array(&type_core__Array__nitc__MModule);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[MModule]>*/
}
var_res = var1;
{
{ /* Inline mpackage#MGroup#in_nesting (self) on <self:MGroup> */
var4 = self->attrs[COLOR_nitc__mpackage__MGroup___in_nesting].val; /* _in_nesting on <self:MGroup> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_nesting");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 85);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = poset___poset__POSetElement___smallers(var2);
}
var_ = var5;
{
var6 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[MGroup]>*/
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:Iterator[MGroup]>*/
}
if (var8){
} else {
goto BREAK_label;
}
{
var9 = ((val*(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:Iterator[MGroup]>*/
}
var_g = var9;
{
{ /* Inline mmodule#MGroup#mmodules (var_g) on <var_g:MGroup> */
var12 = var_g->attrs[COLOR_nitc__mmodule__MGroup___mmodules].val; /* _mmodules on <var_g:MGroup> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 55);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_13 = var10;
{
var14 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_13);
}
var_15 = var14;
for(;;) {
{
var16 = ((short int(*)(val* self))((((long)var_15&3)?class_info[((long)var_15&3)]:var_15->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_15); /* is_ok on <var_15:IndexedIterator[MModule]>*/
}
if (var16){
} else {
goto BREAK_label17;
}
{
var18 = ((val*(*)(val* self))((((long)var_15&3)?class_info[((long)var_15&3)]:var_15->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_15); /* item on <var_15:IndexedIterator[MModule]>*/
}
var_mp = var18;
{
{ /* Inline mmodule#MModule#name (var_mp) on <var_mp:MModule> */
var21 = var_mp->attrs[COLOR_nitc__mmodule__MModule___name].val; /* _name on <var_mp:MModule> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 95);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = ((short int(*)(val* self, val* p0))(var19->class->vft[COLOR_core__kernel__Object___61d_61d]))(var19, var_name); /* == on <var19:String>*/
}
if (var22){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var_mp); /* Direct call array#Array#add on <var_res:Array[MModule]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_15&3)?class_info[((long)var_15&3)]:var_15->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_15); /* next on <var_15:IndexedIterator[MModule]>*/
}
}
BREAK_label17: (void)0;
{
((void(*)(val* self))((((long)var_15&3)?class_info[((long)var_15&3)]:var_15->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_15); /* finish on <var_15:IndexedIterator[MModule]>*/
}
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:Iterator[MGroup]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:Iterator[MGroup]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#SourceFile#mmodule for (self: SourceFile): nullable MModule */
val* nitc__loader___SourceFile___mmodule(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
var1 = self->attrs[COLOR_nitc__loader__SourceFile___mmodule].val; /* _mmodule on <self:SourceFile> */
var = var1;
RET_LABEL:;
return var;
}
/* method loader#SourceFile#mmodule= for (self: SourceFile, nullable MModule) */
void nitc__loader___SourceFile___mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__loader__SourceFile___mmodule].val = p0; /* _mmodule on <self:SourceFile> */
RET_LABEL:;
}
/* method loader#AStdImport#mmodule for (self: AStdImport): nullable MModule */
val* nitc__loader___AStdImport___mmodule(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
var1 = self->attrs[COLOR_nitc__loader__AStdImport___mmodule].val; /* _mmodule on <self:AStdImport> */
var = var1;
RET_LABEL:;
return var;
}
/* method loader#AStdImport#mmodule= for (self: AStdImport, nullable MModule) */
void nitc__loader___AStdImport___mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__loader__AStdImport___mmodule].val = p0; /* _mmodule on <self:AStdImport> */
RET_LABEL:;
}
/* method loader#AModule#mmodule for (self: AModule): nullable MModule */
val* nitc__loader___AModule___mmodule(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
var1 = self->attrs[COLOR_nitc__loader__AModule___mmodule].val; /* _mmodule on <self:AModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method loader#AModule#mmodule= for (self: AModule, nullable MModule) */
void nitc__loader___AModule___mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__loader__AModule___mmodule].val = p0; /* _mmodule on <self:AModule> */
RET_LABEL:;
}
/* method loader#AModule#is_importation_done for (self: AModule): Bool */
short int nitc__loader___AModule___is_importation_done(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__loader__AModule___is_importation_done].s; /* _is_importation_done on <self:AModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method loader#AModule#is_importation_done= for (self: AModule, Bool) */
void nitc__loader___AModule___is_importation_done_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__loader__AModule___is_importation_done].s = p0; /* _is_importation_done on <self:AModule> */
RET_LABEL:;
}
