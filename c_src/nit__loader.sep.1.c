#include "nit__loader.sep.0.h"
/* method loader#ToolContext#opt_path for (self: ToolContext): OptionArray */
val* nit__loader___ToolContext___opt_path(val* self) {
val* var /* : OptionArray */;
val* var1 /* : OptionArray */;
var1 = self->attrs[COLOR_nit__loader__ToolContext___opt_path].val; /* _opt_path on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 23);
fatal_exit(1);
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
fatal_exit(1);
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
fatal_exit(1);
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
val* var13 /* : NativeArray[Option] */;
{
((void(*)(val* self))(self->class->vft[COLOR_nit__loader___ToolContext___standard__kernel__Object__init]))(self); /* init on <self:ToolContext>*/
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
{ /* Inline loader#ToolContext#opt_path (self) on <self:ToolContext> */
var5 = self->attrs[COLOR_nit__loader__ToolContext___opt_path].val; /* _opt_path on <self:ToolContext> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 23);
fatal_exit(1);
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
fatal_exit(1);
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
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var12 = NEW_standard__Array(&type_standard__Array__opts__Option);
{ /* var12 = array_instance Array[Option] */
var13 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__opts__Option);
((struct instance_standard__NativeArray*)var13)->values[0] = (val*) var3;
((struct instance_standard__NativeArray*)var13)->values[1] = (val*) var6;
((struct instance_standard__NativeArray*)var13)->values[2] = (val*) var9;
{
((void(*)(val* self, val* p0, long p1))(var12->class->vft[COLOR_standard__array__Array__with_native]))(var12, var13, 3l); /* with_native on <var12:Array[Option]>*/
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
val* var14 /* : FlatString */;
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
val* var32 /* : FlatString */;
val* var33 /* : String */;
val* var_libname /* var libname: String */;
short int var34 /* : Bool */;
val* var35 /* : Array[String] */;
val* var37 /* : Array[String] */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : FlatString */;
val* var42 /* : String */;
short int var43 /* : Bool */;
val* var44 /* : Array[String] */;
val* var46 /* : Array[String] */;
{
((void(*)(val* self))(self->class->vft[COLOR_nit__loader___ModelBuilder___standard__kernel__Object__init]))(self); /* init on <self:ModelBuilder>*/
}
{
{ /* Inline loader#ModelBuilder#paths (self) on <self:ModelBuilder> */
var2 = self->attrs[COLOR_nit__loader__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 192);
fatal_exit(1);
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
fatal_exit(1);
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
standard___standard__Sequence___append(var, var9); /* Direct call abstract_collection#Sequence#append on <var:Array[String]>*/
}
if (likely(varonce!=NULL)) {
var12 = varonce;
} else {
var13 = "NIT_PATH";
var14 = standard___standard__NativeString___to_s_with_length(var13, 8l);
var12 = var14;
varonce = var12;
}
{
var15 = standard__environ___String___environ(var12);
}
var_path_env = var15;
{
var16 = standard___standard__Text___is_empty(var_path_env);
}
var17 = !var16;
if (var17){
{
{ /* Inline loader#ModelBuilder#paths (self) on <self:ModelBuilder> */
var20 = self->attrs[COLOR_nit__loader__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 192);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var22 = (val*)((long)(':')<<2|2);
var21 = standard__string_search___Text___split_with(var_path_env, var22);
}
{
standard___standard__Sequence___append(var18, var21); /* Direct call abstract_collection#Sequence#append on <var18:Array[String]>*/
}
} else {
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var25 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#nit_dir (var23) on <var23:ToolContext> */
var28 = var23->attrs[COLOR_nit__toolcontext__ToolContext___nit_dir].val; /* _nit_dir on <var23:ToolContext> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _nit_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 521);
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
var32 = standard___standard__NativeString___to_s_with_length(var31, 3l);
var30 = var32;
varonce29 = var30;
}
{
var33 = standard__file___String____47d(var_nit_dir, var30);
}
var_libname = var33;
{
var34 = standard__file___String___file_exists(var_libname);
}
if (var34){
{
{ /* Inline loader#ModelBuilder#paths (self) on <self:ModelBuilder> */
var37 = self->attrs[COLOR_nit__loader__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 192);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var35, var_libname); /* Direct call array#Array#add on <var35:Array[String]>*/
}
} else {
}
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "contrib";
var41 = standard___standard__NativeString___to_s_with_length(var40, 7l);
var39 = var41;
varonce38 = var39;
}
{
var42 = standard__file___String____47d(var_nit_dir, var39);
}
var_libname = var42;
{
var43 = standard__file___String___file_exists(var_libname);
}
if (var43){
{
{ /* Inline loader#ModelBuilder#paths (self) on <self:ModelBuilder> */
var46 = self->attrs[COLOR_nit__loader__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 192);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var44, var_libname); /* Direct call array#Array#add on <var44:Array[String]>*/
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
val* var9 /* : FlatString */;
val* var10 /* : ArraySet[MModule] */;
val* var_mmodules /* var mmodules: ArraySet[MModule] */;
val* var_ /* var : Sequence[String] */;
val* var11 /* : Iterator[nullable Object] */;
val* var_12 /* var : IndexedIterator[String] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_a /* var a: String */;
val* var15 /* : nullable AModule */;
val* var_nmodule /* var nmodule: nullable AModule */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : nullable MModule */;
val* var24 /* : nullable MModule */;
val* var_mmodule /* var mmodule: nullable MModule */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
long var32 /* : Int */;
long var34 /* : Int for extern */;
long var_time1 /* var time1: Int */;
val* var35 /* : ToolContext */;
val* var37 /* : ToolContext */;
val* var39 /* : NativeArray[String] */;
static val* varonce38;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
val* var43 /* : FlatString */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
val* var47 /* : FlatString */;
long var48 /* : Int */;
short int var50 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var51 /* : Int */;
val* var52 /* : String */;
val* var53 /* : String */;
val* var54 /* : ToolContext */;
val* var56 /* : ToolContext */;
short int var57 /* : Bool */;
val* var58 /* : ToolContext */;
val* var60 /* : ToolContext */;
val* var61 /* : OptionBool */;
val* var63 /* : OptionBool */;
val* var64 /* : nullable Object */;
val* var66 /* : nullable Object */;
short int var67 /* : Bool */;
val* var68 /* : ToolContext */;
val* var70 /* : ToolContext */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
val* var74 /* : FlatString */;
val* var75 /* : Sys */;
val* var77 /* : Array[nullable Object] */;
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
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (likely(varonce!=NULL)) {
var7 = varonce;
} else {
var8 = "*** PARSE ***";
var9 = standard___standard__NativeString___to_s_with_length(var8, 13l);
var7 = var9;
varonce = var7;
}
{
nit___nit__ToolContext___info(var4, var7, 1l); /* Direct call toolcontext#ToolContext#info on <var4:ToolContext>*/
}
var10 = NEW_standard__ArraySet(&type_standard__ArraySet__nit__MModule);
{
standard___standard__ArraySet___standard__kernel__Object__init(var10); /* Direct call array#ArraySet#init on <var10:ArraySet[MModule]>*/
}
var_mmodules = var10;
var_ = var_modules;
{
var11 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Sequence[String]>*/
}
var_12 = var11;
for(;;) {
{
var13 = ((short int(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_12); /* is_ok on <var_12:IndexedIterator[String]>*/
}
if (var13){
{
var14 = ((val*(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_12); /* item on <var_12:IndexedIterator[String]>*/
}
var_a = var14;
{
var15 = nit__loader___ModelBuilder___load_module(self, var_a);
}
var_nmodule = var15;
if (var_nmodule == NULL) {
var16 = 1; /* is null */
} else {
var16 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nmodule,((val*)NULL)) on <var_nmodule:nullable AModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_nmodule,var_other) on <var_nmodule:nullable AModule(AModule)> */
var21 = var_nmodule == var_other;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var16 = var17;
}
if (var16){
goto BREAK_label;
} else {
}
{
nit__loader___ModelBuilder___build_module_importation(self, var_nmodule); /* Direct call loader#ModelBuilder#build_module_importation on <self:ModelBuilder>*/
}
{
{ /* Inline loader#AModule#mmodule (var_nmodule) on <var_nmodule:nullable AModule(AModule)> */
var24 = var_nmodule->attrs[COLOR_nit__loader__AModule___mmodule].val; /* _mmodule on <var_nmodule:nullable AModule(AModule)> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
var_mmodule = var22;
if (var_mmodule == NULL) {
var25 = 1; /* is null */
} else {
var25 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mmodule,((val*)NULL)) on <var_mmodule:nullable MModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mmodule,var_other) on <var_mmodule:nullable MModule(MModule)> */
var30 = var_mmodule == var_other;
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
if (var25){
goto BREAK_label;
} else {
}
{
standard___standard__ArraySet___standard__abstract_collection__SimpleCollection__add(var_mmodules, var_mmodule); /* Direct call array#ArraySet#add on <var_mmodules:ArraySet[MModule]>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_12); /* next on <var_12:IndexedIterator[String]>*/
}
} else {
goto BREAK_label31;
}
}
BREAK_label31: (void)0;
{
((void(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_12); /* finish on <var_12:IndexedIterator[String]>*/
}
{
{ /* Inline time#Object#get_time (self) on <self:ModelBuilder> */
var34 = kernel_Any_Any_get_time_0(self);
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var_time1 = var32;
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var37 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
if (unlikely(varonce38==NULL)) {
var39 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "*** END PARSE: ";
var43 = standard___standard__NativeString___to_s_with_length(var42, 15l);
var41 = var43;
varonce40 = var41;
}
((struct instance_standard__NativeArray*)var39)->values[0]=var41;
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = " ***";
var47 = standard___standard__NativeString___to_s_with_length(var46, 4l);
var45 = var47;
varonce44 = var45;
}
((struct instance_standard__NativeArray*)var39)->values[2]=var45;
} else {
var39 = varonce38;
varonce38 = NULL;
}
{
{ /* Inline kernel#Int#- (var_time1,var_time0) on <var_time1:Int> */
/* Covariant cast for argument 0 (i) <var_time0:Int> isa OTHER */
/* <var_time0:Int> isa OTHER */
var50 = 1; /* easy <var_time0:Int> isa OTHER*/
if (unlikely(!var50)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var51 = var_time1 - var_time0;
var48 = var51;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
var52 = standard__string___Int___Object__to_s(var48);
((struct instance_standard__NativeArray*)var39)->values[1]=var52;
{
var53 = ((val*(*)(val* self))(var39->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var39); /* native_to_s on <var39:NativeArray[String]>*/
}
varonce38 = var39;
{
nit___nit__ToolContext___info(var35, var53, 2l); /* Direct call toolcontext#ToolContext#info on <var35:ToolContext>*/
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var56 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
var57 = nit___nit__ToolContext___check_errors(var54);
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var60 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
{ /* Inline loader#ToolContext#opt_only_parse (var58) on <var58:ToolContext> */
var63 = var58->attrs[COLOR_nit__loader__ToolContext___opt_only_parse].val; /* _opt_only_parse on <var58:ToolContext> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_only_parse");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 29);
fatal_exit(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
{ /* Inline opts#Option#value (var61) on <var61:OptionBool> */
var66 = var61->attrs[COLOR_opts__Option___value].val; /* _value on <var61:OptionBool> */
var64 = var66;
RET_LABEL65:(void)0;
}
}
var67 = (short int)((long)(var64)>>2);
if (var67){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var70 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
if (likely(varonce71!=NULL)) {
var72 = varonce71;
} else {
var73 = "*** ONLY PARSE...";
var74 = standard___standard__NativeString___to_s_with_length(var73, 17l);
var72 = var74;
varonce71 = var72;
}
{
nit___nit__ToolContext___info(var68, var72, 1l); /* Direct call toolcontext#ToolContext#info on <var68:ToolContext>*/
}
var75 = glob_sys;
{
{ /* Inline kernel#Sys#exit (var75,0l) on <var75:Sys> */
exit(0l);
RET_LABEL76:(void)0;
}
}
} else {
}
{
var77 = standard__array___Collection___to_a(var_mmodules);
}
var = var77;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 192);
fatal_exit(1);
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
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : nullable String */;
val* var8 /* : nullable String */;
val* var_dirname /* var dirname: nullable String */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : FlatString */;
short int var14 /* : Bool */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : FlatString */;
val* var19 /* : String */;
val* var20 /* : String */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
val* var24 /* : FlatString */;
val* var25 /* : String */;
val* var_try_file /* var try_file: String */;
short int var26 /* : Bool */;
val* var27 /* : String */;
val* var28 /* : nullable ModulePath */;
val* var_res /* var res: nullable ModulePath */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : FlatString */;
val* var38 /* : String */;
val* var39 /* : String */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
val* var43 /* : FlatString */;
val* var44 /* : String */;
val* var45 /* : String */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
val* var49 /* : FlatString */;
val* var50 /* : String */;
short int var51 /* : Bool */;
val* var52 /* : String */;
val* var53 /* : nullable ModulePath */;
val* var_res54 /* var res: nullable ModulePath */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
val* var63 /* : FlatString */;
val* var64 /* : String */;
val* var65 /* : String */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
val* var69 /* : FlatString */;
val* var70 /* : String */;
val* var71 /* : String */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
val* var75 /* : FlatString */;
val* var76 /* : String */;
short int var77 /* : Bool */;
val* var78 /* : String */;
val* var79 /* : nullable ModulePath */;
val* var_res80 /* var res: nullable ModulePath */;
short int var81 /* : Bool */;
short int var82 /* : Bool */;
short int var84 /* : Bool */;
short int var85 /* : Bool */;
val* var86 /* : nullable MGroup */;
val* var88 /* : nullable MGroup */;
val* var89 /* : Array[String] */;
val* var91 /* : Array[String] */;
val* var_lookpaths /* var lookpaths: Array[String] */;
short int var92 /* : Bool */;
short int var93 /* : Bool */;
short int var95 /* : Bool */;
short int var96 /* : Bool */;
val* var97 /* : MProject */;
val* var99 /* : MProject */;
val* var100 /* : nullable MGroup */;
val* var102 /* : nullable MGroup */;
val* var103 /* : nullable String */;
val* var105 /* : nullable String */;
val* var_dirname106 /* var dirname: nullable String */;
short int var107 /* : Bool */;
short int var108 /* : Bool */;
short int var110 /* : Bool */;
short int var111 /* : Bool */;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : NativeString */;
val* var115 /* : FlatString */;
val* var116 /* : String */;
val* var117 /* : String */;
short int var118 /* : Bool */;
short int var119 /* : Bool */;
short int var120 /* : Bool */;
short int var_ /* var : Bool */;
short int var121 /* : Bool */;
val* var122 /* : Array[nullable Object] */;
val* var123 /* : Location */;
val* var124 /* : nullable ModulePath */;
val* var_candidate /* var candidate: nullable ModulePath */;
short int var125 /* : Bool */;
short int var126 /* : Bool */;
val* var_other128 /* var other: nullable Object */;
short int var129 /* : Bool */;
short int var131 /* : Bool */;
short int var132 /* : Bool */;
short int var133 /* : Bool */;
short int var135 /* : Bool */;
short int var136 /* : Bool */;
val* var138 /* : NativeArray[String] */;
static val* varonce137;
static val* varonce139;
val* var140 /* : String */;
char* var141 /* : NativeString */;
val* var142 /* : FlatString */;
static val* varonce143;
val* var144 /* : String */;
char* var145 /* : NativeString */;
val* var146 /* : FlatString */;
static val* varonce147;
val* var148 /* : String */;
char* var149 /* : NativeString */;
val* var150 /* : FlatString */;
static val* varonce151;
val* var152 /* : String */;
char* var153 /* : NativeString */;
val* var154 /* : FlatString */;
val* var155 /* : String */;
val* var157 /* : String */;
static val* varonce158;
val* var159 /* : String */;
char* var160 /* : NativeString */;
val* var161 /* : FlatString */;
val* var162 /* : String */;
val* var163 /* : String */;
val* var165 /* : NativeArray[String] */;
static val* varonce164;
static val* varonce166;
val* var167 /* : String */;
char* var168 /* : NativeString */;
val* var169 /* : FlatString */;
static val* varonce170;
val* var171 /* : String */;
char* var172 /* : NativeString */;
val* var173 /* : FlatString */;
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
var_anode = p0;
var_mgroup = p1;
var_name = p2;
var_c = var_mgroup;
for(;;) {
if (var_c == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_c,((val*)NULL)) on <var_c:nullable MGroup> */
var_other = ((val*)NULL);
{
var4 = ((short int(*)(val* self, val* p0))(var_c->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_c, var_other); /* == on <var_c:nullable MGroup(MGroup)>*/
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
{ /* Inline mproject#MGroup#filepath (var_c) on <var_c:nullable MGroup(MGroup)> */
var8 = var_c->attrs[COLOR_nit__mproject__MGroup___filepath].val; /* _filepath on <var_c:nullable MGroup(MGroup)> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_dirname = var6;
if (var_dirname == NULL) {
var9 = 1; /* is null */
} else {
var9 = 0; /* arg is null but recv is not */
}
if (0) {
var10 = ((short int(*)(val* self, val* p0))(var_dirname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_dirname, ((val*)NULL)); /* == on <var_dirname:nullable String>*/
var9 = var10;
}
if (var9){
goto BREAK_label;
} else {
}
if (likely(varonce!=NULL)) {
var11 = varonce;
} else {
var12 = ".nit";
var13 = standard___standard__NativeString___to_s_with_length(var12, 4l);
var11 = var13;
varonce = var11;
}
{
var14 = standard___standard__Text___has_suffix(var_dirname, var11);
}
if (var14){
goto BREAK_label;
} else {
}
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "/";
var18 = standard___standard__NativeString___to_s_with_length(var17, 1l);
var16 = var18;
varonce15 = var16;
}
{
var19 = ((val*(*)(val* self, val* p0))(var_dirname->class->vft[COLOR_standard__string__String___43d]))(var_dirname, var16); /* + on <var_dirname:nullable String(String)>*/
}
{
var20 = ((val*(*)(val* self, val* p0))(var19->class->vft[COLOR_standard__string__String___43d]))(var19, var_name); /* + on <var19:String>*/
}
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = ".nit";
var24 = standard___standard__NativeString___to_s_with_length(var23, 4l);
var22 = var24;
varonce21 = var22;
}
{
var25 = ((val*(*)(val* self, val* p0))(var20->class->vft[COLOR_standard__string__String___43d]))(var20, var22); /* + on <var20:String>*/
}
var_try_file = var25;
{
var26 = standard__file___String___file_exists(var_try_file);
}
if (var26){
{
var27 = standard__file___String___simplify_path(var_try_file);
}
{
var28 = nit__loader___ModelBuilder___identify_file(self, var27);
}
var_res = var28;
if (var_res == NULL) {
var29 = 0; /* is null */
} else {
var29 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,((val*)NULL)) on <var_res:nullable ModulePath> */
var_other = ((val*)NULL);
{
var32 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable ModulePath(ModulePath)>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 215);
fatal_exit(1);
}
var = var_res;
goto RET_LABEL;
} else {
}
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "/";
var37 = standard___standard__NativeString___to_s_with_length(var36, 1l);
var35 = var37;
varonce34 = var35;
}
{
var38 = ((val*(*)(val* self, val* p0))(var_dirname->class->vft[COLOR_standard__string__String___43d]))(var_dirname, var35); /* + on <var_dirname:nullable String(String)>*/
}
{
var39 = ((val*(*)(val* self, val* p0))(var38->class->vft[COLOR_standard__string__String___43d]))(var38, var_name); /* + on <var38:String>*/
}
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "/";
var43 = standard___standard__NativeString___to_s_with_length(var42, 1l);
var41 = var43;
varonce40 = var41;
}
{
var44 = ((val*(*)(val* self, val* p0))(var39->class->vft[COLOR_standard__string__String___43d]))(var39, var41); /* + on <var39:String>*/
}
{
var45 = ((val*(*)(val* self, val* p0))(var44->class->vft[COLOR_standard__string__String___43d]))(var44, var_name); /* + on <var44:String>*/
}
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = ".nit";
var49 = standard___standard__NativeString___to_s_with_length(var48, 4l);
var47 = var49;
varonce46 = var47;
}
{
var50 = ((val*(*)(val* self, val* p0))(var45->class->vft[COLOR_standard__string__String___43d]))(var45, var47); /* + on <var45:String>*/
}
var_try_file = var50;
{
var51 = standard__file___String___file_exists(var_try_file);
}
if (var51){
{
var52 = standard__file___String___simplify_path(var_try_file);
}
{
var53 = nit__loader___ModelBuilder___identify_file(self, var52);
}
var_res54 = var53;
if (var_res54 == NULL) {
var55 = 0; /* is null */
} else {
var55 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res54,((val*)NULL)) on <var_res54:nullable ModulePath> */
var_other = ((val*)NULL);
{
var58 = ((short int(*)(val* self, val* p0))(var_res54->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res54, var_other); /* == on <var_res54:nullable ModulePath(ModulePath)>*/
}
var59 = !var58;
var56 = var59;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
var55 = var56;
}
if (unlikely(!var55)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 223);
fatal_exit(1);
}
var = var_res54;
goto RET_LABEL;
} else {
}
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = "/";
var63 = standard___standard__NativeString___to_s_with_length(var62, 1l);
var61 = var63;
varonce60 = var61;
}
{
var64 = ((val*(*)(val* self, val* p0))(var_dirname->class->vft[COLOR_standard__string__String___43d]))(var_dirname, var61); /* + on <var_dirname:nullable String(String)>*/
}
{
var65 = ((val*(*)(val* self, val* p0))(var64->class->vft[COLOR_standard__string__String___43d]))(var64, var_name); /* + on <var64:String>*/
}
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = "/src/";
var69 = standard___standard__NativeString___to_s_with_length(var68, 5l);
var67 = var69;
varonce66 = var67;
}
{
var70 = ((val*(*)(val* self, val* p0))(var65->class->vft[COLOR_standard__string__String___43d]))(var65, var67); /* + on <var65:String>*/
}
{
var71 = ((val*(*)(val* self, val* p0))(var70->class->vft[COLOR_standard__string__String___43d]))(var70, var_name); /* + on <var70:String>*/
}
if (likely(varonce72!=NULL)) {
var73 = varonce72;
} else {
var74 = ".nit";
var75 = standard___standard__NativeString___to_s_with_length(var74, 4l);
var73 = var75;
varonce72 = var73;
}
{
var76 = ((val*(*)(val* self, val* p0))(var71->class->vft[COLOR_standard__string__String___43d]))(var71, var73); /* + on <var71:String>*/
}
var_try_file = var76;
{
var77 = standard__file___String___file_exists(var_try_file);
}
if (var77){
{
var78 = standard__file___String___simplify_path(var_try_file);
}
{
var79 = nit__loader___ModelBuilder___identify_file(self, var78);
}
var_res80 = var79;
if (var_res80 == NULL) {
var81 = 0; /* is null */
} else {
var81 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res80,((val*)NULL)) on <var_res80:nullable ModulePath> */
var_other = ((val*)NULL);
{
var84 = ((short int(*)(val* self, val* p0))(var_res80->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res80, var_other); /* == on <var_res80:nullable ModulePath(ModulePath)>*/
}
var85 = !var84;
var82 = var85;
goto RET_LABEL83;
RET_LABEL83:(void)0;
}
var81 = var82;
}
if (unlikely(!var81)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 231);
fatal_exit(1);
}
var = var_res80;
goto RET_LABEL;
} else {
}
{
{ /* Inline mproject#MGroup#parent (var_c) on <var_c:nullable MGroup(MGroup)> */
var88 = var_c->attrs[COLOR_nit__mproject__MGroup___parent].val; /* _parent on <var_c:nullable MGroup(MGroup)> */
var86 = var88;
RET_LABEL87:(void)0;
}
}
var_c = var86;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline loader#ModelBuilder#paths (self) on <self:ModelBuilder> */
var91 = self->attrs[COLOR_nit__loader__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var91 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 192);
fatal_exit(1);
}
var89 = var91;
RET_LABEL90:(void)0;
}
}
var_lookpaths = var89;
if (var_mgroup == NULL) {
var92 = 0; /* is null */
} else {
var92 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mgroup,((val*)NULL)) on <var_mgroup:nullable MGroup> */
var_other = ((val*)NULL);
{
var95 = ((short int(*)(val* self, val* p0))(var_mgroup->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mgroup, var_other); /* == on <var_mgroup:nullable MGroup(MGroup)>*/
}
var96 = !var95;
var93 = var96;
goto RET_LABEL94;
RET_LABEL94:(void)0;
}
var92 = var93;
}
if (var92){
{
{ /* Inline mproject#MGroup#mproject (var_mgroup) on <var_mgroup:nullable MGroup(MGroup)> */
var99 = var_mgroup->attrs[COLOR_nit__mproject__MGroup___mproject].val; /* _mproject on <var_mgroup:nullable MGroup(MGroup)> */
if (unlikely(var99 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproject");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 69);
fatal_exit(1);
}
var97 = var99;
RET_LABEL98:(void)0;
}
}
{
{ /* Inline mproject#MProject#root (var97) on <var97:MProject> */
var102 = var97->attrs[COLOR_nit__mproject__MProject___root].val; /* _root on <var97:MProject> */
var100 = var102;
RET_LABEL101:(void)0;
}
}
if (var100 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 244);
fatal_exit(1);
} else {
{ /* Inline mproject#MGroup#filepath (var100) on <var100:nullable MGroup> */
if (unlikely(var100 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 93);
fatal_exit(1);
}
var105 = var100->attrs[COLOR_nit__mproject__MGroup___filepath].val; /* _filepath on <var100:nullable MGroup> */
var103 = var105;
RET_LABEL104:(void)0;
}
}
var_dirname106 = var103;
if (var_dirname106 == NULL) {
var107 = 0; /* is null */
} else {
var107 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_dirname106,((val*)NULL)) on <var_dirname106:nullable String> */
var_other = ((val*)NULL);
{
var110 = ((short int(*)(val* self, val* p0))(var_dirname106->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_dirname106, var_other); /* == on <var_dirname106:nullable String(String)>*/
}
var111 = !var110;
var108 = var111;
goto RET_LABEL109;
RET_LABEL109:(void)0;
}
var107 = var108;
}
if (var107){
if (likely(varonce112!=NULL)) {
var113 = varonce112;
} else {
var114 = "..";
var115 = standard___standard__NativeString___to_s_with_length(var114, 2l);
var113 = var115;
varonce112 = var113;
}
{
var116 = standard__file___String___join_path(var_dirname106, var113);
}
{
var117 = standard__file___String___simplify_path(var116);
}
var_dirname106 = var117;
{
var119 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__has(var_lookpaths, var_dirname106);
}
var120 = !var119;
var_ = var120;
if (var120){
{
var121 = standard__file___String___file_exists(var_dirname106);
}
var118 = var121;
} else {
var118 = var_;
}
if (var118){
{
var122 = standard__array___Collection___to_a(var_lookpaths);
}
var_lookpaths = var122;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_lookpaths, var_dirname106); /* Direct call array#Array#add on <var_lookpaths:Array[String]>*/
}
} else {
}
} else {
}
} else {
}
if (var_anode == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 254);
fatal_exit(1);
} else {
var123 = ((val*(*)(val* self))(var_anode->class->vft[COLOR_nit__parser_nodes__ANode__hot_location]))(var_anode); /* hot_location on <var_anode:nullable ANode>*/
}
{
var124 = nit__loader___ModelBuilder___search_module_in_paths(self, var123, var_name, var_lookpaths);
}
var_candidate = var124;
if (var_candidate == NULL) {
var125 = 1; /* is null */
} else {
var125 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_candidate,((val*)NULL)) on <var_candidate:nullable ModulePath> */
var_other128 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_candidate,var_other128) on <var_candidate:nullable ModulePath(ModulePath)> */
var131 = var_candidate == var_other128;
var129 = var131;
goto RET_LABEL130;
RET_LABEL130:(void)0;
}
}
var126 = var129;
goto RET_LABEL127;
RET_LABEL127:(void)0;
}
var125 = var126;
}
if (var125){
if (var_mgroup == NULL) {
var132 = 0; /* is null */
} else {
var132 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mgroup,((val*)NULL)) on <var_mgroup:nullable MGroup> */
var_other = ((val*)NULL);
{
var135 = ((short int(*)(val* self, val* p0))(var_mgroup->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mgroup, var_other); /* == on <var_mgroup:nullable MGroup(MGroup)>*/
}
var136 = !var135;
var133 = var136;
goto RET_LABEL134;
RET_LABEL134:(void)0;
}
var132 = var133;
}
if (var132){
if (unlikely(varonce137==NULL)) {
var138 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce139!=NULL)) {
var140 = varonce139;
} else {
var141 = "Error: cannot find module `";
var142 = standard___standard__NativeString___to_s_with_length(var141, 27l);
var140 = var142;
varonce139 = var140;
}
((struct instance_standard__NativeArray*)var138)->values[0]=var140;
if (likely(varonce143!=NULL)) {
var144 = varonce143;
} else {
var145 = "` from `";
var146 = standard___standard__NativeString___to_s_with_length(var145, 8l);
var144 = var146;
varonce143 = var144;
}
((struct instance_standard__NativeArray*)var138)->values[2]=var144;
if (likely(varonce147!=NULL)) {
var148 = varonce147;
} else {
var149 = "`. Tried: ";
var150 = standard___standard__NativeString___to_s_with_length(var149, 10l);
var148 = var150;
varonce147 = var148;
}
((struct instance_standard__NativeArray*)var138)->values[4]=var148;
if (likely(varonce151!=NULL)) {
var152 = varonce151;
} else {
var153 = ".";
var154 = standard___standard__NativeString___to_s_with_length(var153, 1l);
var152 = var154;
varonce151 = var152;
}
((struct instance_standard__NativeArray*)var138)->values[6]=var152;
} else {
var138 = varonce137;
varonce137 = NULL;
}
((struct instance_standard__NativeArray*)var138)->values[1]=var_name;
{
{ /* Inline mproject#MGroup#name (var_mgroup) on <var_mgroup:nullable MGroup(MGroup)> */
var157 = var_mgroup->attrs[COLOR_nit__mproject__MGroup___name].val; /* _name on <var_mgroup:nullable MGroup(MGroup)> */
if (unlikely(var157 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 65);
fatal_exit(1);
}
var155 = var157;
RET_LABEL156:(void)0;
}
}
((struct instance_standard__NativeArray*)var138)->values[3]=var155;
if (likely(varonce158!=NULL)) {
var159 = varonce158;
} else {
var160 = ", ";
var161 = standard___standard__NativeString___to_s_with_length(var160, 2l);
var159 = var161;
varonce158 = var159;
}
{
var162 = standard__string___Collection___join(var_lookpaths, var159);
}
((struct instance_standard__NativeArray*)var138)->values[5]=var162;
{
var163 = ((val*(*)(val* self))(var138->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var138); /* native_to_s on <var138:NativeArray[String]>*/
}
varonce137 = var138;
{
nit___nit__ModelBuilder___error(self, var_anode, var163); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
if (unlikely(varonce164==NULL)) {
var165 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce166!=NULL)) {
var167 = varonce166;
} else {
var168 = "Error: cannot find module `";
var169 = standard___standard__NativeString___to_s_with_length(var168, 27l);
var167 = var169;
varonce166 = var167;
}
((struct instance_standard__NativeArray*)var165)->values[0]=var167;
if (likely(varonce170!=NULL)) {
var171 = varonce170;
} else {
var172 = "`. Tried: ";
var173 = standard___standard__NativeString___to_s_with_length(var172, 10l);
var171 = var173;
varonce170 = var171;
}
((struct instance_standard__NativeArray*)var165)->values[2]=var171;
if (likely(varonce174!=NULL)) {
var175 = varonce174;
} else {
var176 = ".";
var177 = standard___standard__NativeString___to_s_with_length(var176, 1l);
var175 = var177;
varonce174 = var175;
}
((struct instance_standard__NativeArray*)var165)->values[4]=var175;
} else {
var165 = varonce164;
varonce164 = NULL;
}
((struct instance_standard__NativeArray*)var165)->values[1]=var_name;
if (likely(varonce178!=NULL)) {
var179 = varonce178;
} else {
var180 = ", ";
var181 = standard___standard__NativeString___to_s_with_length(var180, 2l);
var179 = var181;
varonce178 = var179;
}
{
var182 = standard__string___Collection___join(var_lookpaths, var179);
}
((struct instance_standard__NativeArray*)var165)->values[3]=var182;
{
var183 = ((val*(*)(val* self))(var165->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var165); /* native_to_s on <var165:NativeArray[String]>*/
}
varonce164 = var165;
{
nit___nit__ModelBuilder___error(self, var_anode, var183); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
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
val* nit__loader___ModelBuilder___get_mmodule_by_name(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MModule */;
val* var_anode /* var anode: nullable ANode */;
val* var_mgroup /* var mgroup: nullable MGroup */;
val* var_name /* var name: String */;
val* var1 /* : nullable ModulePath */;
val* var_path /* var path: nullable ModulePath */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : String */;
val* var10 /* : String */;
val* var11 /* : nullable AModule */;
val* var_res /* var res: nullable AModule */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : nullable MModule */;
val* var20 /* : nullable MModule */;
var_anode = p0;
var_mgroup = p1;
var_name = p2;
{
var1 = nit__loader___ModelBuilder___search_mmodule_by_name(self, var_anode, var_mgroup, var_name);
}
var_path = var1;
if (var_path == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_path,((val*)NULL)) on <var_path:nullable ModulePath> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_path,var_other) on <var_path:nullable ModulePath(ModulePath)> */
var7 = var_path == var_other;
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
{ /* Inline loader#ModulePath#filepath (var_path) on <var_path:nullable ModulePath(ModulePath)> */
var10 = var_path->attrs[COLOR_nit__loader__ModulePath___filepath].val; /* _filepath on <var_path:nullable ModulePath(ModulePath)> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filepath");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 786);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nit__loader___ModelBuilder___load_module(self, var8);
}
var_res = var11;
if (var_res == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res,((val*)NULL)) on <var_res:nullable AModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other) on <var_res:nullable AModule(AModule)> */
var17 = var_res == var_other;
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
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
nit__loader___ModelBuilder___build_module_importation(self, var_res); /* Direct call loader#ModelBuilder#build_module_importation on <self:ModelBuilder>*/
}
{
{ /* Inline loader#AModule#mmodule (var_res) on <var_res:nullable AModule(AModule)> */
var20 = var_res->attrs[COLOR_nit__loader__AModule___mmodule].val; /* _mmodule on <var_res:nullable AModule(AModule)> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
var = var18;
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
val* var_candidate /* var candidate: nullable String */;
val* var_ /* var : Collection[String] */;
val* var1 /* : Iterator[nullable Object] */;
val* var_2 /* var : Iterator[String] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_dirname /* var dirname: String */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
val* var7 /* : FlatString */;
val* var8 /* : String */;
val* var9 /* : String */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : FlatString */;
val* var14 /* : String */;
val* var15 /* : String */;
val* var_try_file /* var try_file: String */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var23 /* : String */;
val* var_abs_candidate /* var abs_candidate: String */;
val* var24 /* : String */;
val* var_abs_try_file /* var abs_try_file: String */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : ToolContext */;
val* var31 /* : ToolContext */;
val* var33 /* : NativeArray[String] */;
static val* varonce32;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : FlatString */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : FlatString */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : FlatString */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
val* var49 /* : FlatString */;
val* var50 /* : String */;
val* var51 /* : Message */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
val* var55 /* : FlatString */;
val* var56 /* : String */;
val* var57 /* : String */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
val* var61 /* : FlatString */;
val* var62 /* : String */;
val* var63 /* : String */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
val* var67 /* : FlatString */;
val* var68 /* : String */;
val* var69 /* : String */;
short int var70 /* : Bool */;
short int var71 /* : Bool */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
val* var77 /* : String */;
val* var_abs_candidate78 /* var abs_candidate: String */;
val* var79 /* : String */;
val* var_abs_try_file80 /* var abs_try_file: String */;
short int var81 /* : Bool */;
short int var83 /* : Bool */;
short int var84 /* : Bool */;
val* var85 /* : ToolContext */;
val* var87 /* : ToolContext */;
val* var89 /* : NativeArray[String] */;
static val* varonce88;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : NativeString */;
val* var93 /* : FlatString */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : NativeString */;
val* var97 /* : FlatString */;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : NativeString */;
val* var101 /* : FlatString */;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : NativeString */;
val* var105 /* : FlatString */;
val* var106 /* : String */;
val* var107 /* : Message */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : NativeString */;
val* var111 /* : FlatString */;
val* var112 /* : String */;
val* var113 /* : String */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : NativeString */;
val* var117 /* : FlatString */;
val* var118 /* : String */;
val* var119 /* : String */;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : NativeString */;
val* var123 /* : FlatString */;
val* var124 /* : String */;
val* var125 /* : String */;
short int var126 /* : Bool */;
short int var127 /* : Bool */;
short int var128 /* : Bool */;
short int var129 /* : Bool */;
short int var131 /* : Bool */;
short int var132 /* : Bool */;
val* var133 /* : String */;
val* var_abs_candidate134 /* var abs_candidate: String */;
val* var135 /* : String */;
val* var_abs_try_file136 /* var abs_try_file: String */;
short int var137 /* : Bool */;
short int var139 /* : Bool */;
short int var140 /* : Bool */;
val* var141 /* : ToolContext */;
val* var143 /* : ToolContext */;
val* var145 /* : NativeArray[String] */;
static val* varonce144;
static val* varonce146;
val* var147 /* : String */;
char* var148 /* : NativeString */;
val* var149 /* : FlatString */;
static val* varonce150;
val* var151 /* : String */;
char* var152 /* : NativeString */;
val* var153 /* : FlatString */;
static val* varonce154;
val* var155 /* : String */;
char* var156 /* : NativeString */;
val* var157 /* : FlatString */;
static val* varonce158;
val* var159 /* : String */;
char* var160 /* : NativeString */;
val* var161 /* : FlatString */;
val* var162 /* : String */;
val* var163 /* : Message */;
short int var164 /* : Bool */;
short int var165 /* : Bool */;
val* var166 /* : nullable ModulePath */;
var_location = p0;
var_name = p1;
var_lookpaths = p2;
var_candidate = ((val*)NULL);
var_ = var_lookpaths;
{
var1 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[String]>*/
}
var_2 = var1;
for(;;) {
{
var3 = ((short int(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_2); /* is_ok on <var_2:Iterator[String]>*/
}
if (var3){
{
var4 = ((val*(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_2); /* item on <var_2:Iterator[String]>*/
}
var_dirname = var4;
if (likely(varonce!=NULL)) {
var5 = varonce;
} else {
var6 = "/";
var7 = standard___standard__NativeString___to_s_with_length(var6, 1l);
var5 = var7;
varonce = var5;
}
{
var8 = ((val*(*)(val* self, val* p0))(var_dirname->class->vft[COLOR_standard__string__String___43d]))(var_dirname, var5); /* + on <var_dirname:String>*/
}
{
var9 = ((val*(*)(val* self, val* p0))(var8->class->vft[COLOR_standard__string__String___43d]))(var8, var_name); /* + on <var8:String>*/
}
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = ".nit";
var13 = standard___standard__NativeString___to_s_with_length(var12, 4l);
var11 = var13;
varonce10 = var11;
}
{
var14 = ((val*(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__string__String___43d]))(var9, var11); /* + on <var9:String>*/
}
{
var15 = standard__file___String___simplify_path(var14);
}
var_try_file = var15;
{
var16 = standard__file___String___file_exists(var_try_file);
}
if (var16){
if (var_candidate == NULL) {
var17 = 1; /* is null */
} else {
var17 = 0; /* arg is null but recv is not */
}
if (0) {
var18 = ((short int(*)(val* self, val* p0))(var_candidate->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_candidate, ((val*)NULL)); /* == on <var_candidate:nullable String>*/
var17 = var18;
}
if (var17){
var_candidate = var_try_file;
} else {
{
{ /* Inline kernel#Object#!= (var_candidate,var_try_file) on <var_candidate:nullable String(String)> */
var_other = var_try_file;
{
var21 = ((short int(*)(val* self, val* p0))(var_candidate->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_candidate, var_other); /* == on <var_candidate:nullable String(String)>*/
}
var22 = !var21;
var19 = var22;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
if (var19){
{
var23 = nit__loader___ModelBuilder___module_absolute_path(self, var_candidate);
}
var_abs_candidate = var23;
{
var24 = nit__loader___ModelBuilder___module_absolute_path(self, var_try_file);
}
var_abs_try_file = var24;
{
{ /* Inline kernel#Object#!= (var_abs_candidate,var_abs_try_file) on <var_abs_candidate:String> */
var_other = var_abs_try_file;
{
var27 = ((short int(*)(val* self, val* p0))(var_abs_candidate->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_abs_candidate, var_other); /* == on <var_abs_candidate:String>*/
}
var28 = !var27;
var25 = var28;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
if (var25){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var31 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
if (unlikely(varonce32==NULL)) {
var33 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "Error: conflicting module file for `";
var37 = standard___standard__NativeString___to_s_with_length(var36, 36l);
var35 = var37;
varonce34 = var35;
}
((struct instance_standard__NativeArray*)var33)->values[0]=var35;
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "`: `";
var41 = standard___standard__NativeString___to_s_with_length(var40, 4l);
var39 = var41;
varonce38 = var39;
}
((struct instance_standard__NativeArray*)var33)->values[2]=var39;
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "` `";
var45 = standard___standard__NativeString___to_s_with_length(var44, 3l);
var43 = var45;
varonce42 = var43;
}
((struct instance_standard__NativeArray*)var33)->values[4]=var43;
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = "`";
var49 = standard___standard__NativeString___to_s_with_length(var48, 1l);
var47 = var49;
varonce46 = var47;
}
((struct instance_standard__NativeArray*)var33)->values[6]=var47;
} else {
var33 = varonce32;
varonce32 = NULL;
}
((struct instance_standard__NativeArray*)var33)->values[1]=var_name;
((struct instance_standard__NativeArray*)var33)->values[3]=var_candidate;
((struct instance_standard__NativeArray*)var33)->values[5]=var_try_file;
{
var50 = ((val*(*)(val* self))(var33->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var33); /* native_to_s on <var33:NativeArray[String]>*/
}
varonce32 = var33;
{
var51 = nit___nit__ToolContext___error(var29, var_location, var50);
}
} else {
}
} else {
}
}
} else {
}
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = "/";
var55 = standard___standard__NativeString___to_s_with_length(var54, 1l);
var53 = var55;
varonce52 = var53;
}
{
var56 = ((val*(*)(val* self, val* p0))(var_dirname->class->vft[COLOR_standard__string__String___43d]))(var_dirname, var53); /* + on <var_dirname:String>*/
}
{
var57 = ((val*(*)(val* self, val* p0))(var56->class->vft[COLOR_standard__string__String___43d]))(var56, var_name); /* + on <var56:String>*/
}
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "/";
var61 = standard___standard__NativeString___to_s_with_length(var60, 1l);
var59 = var61;
varonce58 = var59;
}
{
var62 = ((val*(*)(val* self, val* p0))(var57->class->vft[COLOR_standard__string__String___43d]))(var57, var59); /* + on <var57:String>*/
}
{
var63 = ((val*(*)(val* self, val* p0))(var62->class->vft[COLOR_standard__string__String___43d]))(var62, var_name); /* + on <var62:String>*/
}
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = ".nit";
var67 = standard___standard__NativeString___to_s_with_length(var66, 4l);
var65 = var67;
varonce64 = var65;
}
{
var68 = ((val*(*)(val* self, val* p0))(var63->class->vft[COLOR_standard__string__String___43d]))(var63, var65); /* + on <var63:String>*/
}
{
var69 = standard__file___String___simplify_path(var68);
}
var_try_file = var69;
{
var70 = standard__file___String___file_exists(var_try_file);
}
if (var70){
if (var_candidate == NULL) {
var71 = 1; /* is null */
} else {
var71 = 0; /* arg is null but recv is not */
}
if (0) {
var72 = ((short int(*)(val* self, val* p0))(var_candidate->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_candidate, ((val*)NULL)); /* == on <var_candidate:nullable String>*/
var71 = var72;
}
if (var71){
var_candidate = var_try_file;
} else {
{
{ /* Inline kernel#Object#!= (var_candidate,var_try_file) on <var_candidate:nullable String(String)> */
var_other = var_try_file;
{
var75 = ((short int(*)(val* self, val* p0))(var_candidate->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_candidate, var_other); /* == on <var_candidate:nullable String(String)>*/
}
var76 = !var75;
var73 = var76;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
}
if (var73){
{
var77 = nit__loader___ModelBuilder___module_absolute_path(self, var_candidate);
}
var_abs_candidate78 = var77;
{
var79 = nit__loader___ModelBuilder___module_absolute_path(self, var_try_file);
}
var_abs_try_file80 = var79;
{
{ /* Inline kernel#Object#!= (var_abs_candidate78,var_abs_try_file80) on <var_abs_candidate78:String> */
var_other = var_abs_try_file80;
{
var83 = ((short int(*)(val* self, val* p0))(var_abs_candidate78->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_abs_candidate78, var_other); /* == on <var_abs_candidate78:String>*/
}
var84 = !var83;
var81 = var84;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
}
if (var81){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var87 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var87 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var85 = var87;
RET_LABEL86:(void)0;
}
}
if (unlikely(varonce88==NULL)) {
var89 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = "Error: conflicting module file for `";
var93 = standard___standard__NativeString___to_s_with_length(var92, 36l);
var91 = var93;
varonce90 = var91;
}
((struct instance_standard__NativeArray*)var89)->values[0]=var91;
if (likely(varonce94!=NULL)) {
var95 = varonce94;
} else {
var96 = "`: `";
var97 = standard___standard__NativeString___to_s_with_length(var96, 4l);
var95 = var97;
varonce94 = var95;
}
((struct instance_standard__NativeArray*)var89)->values[2]=var95;
if (likely(varonce98!=NULL)) {
var99 = varonce98;
} else {
var100 = "` `";
var101 = standard___standard__NativeString___to_s_with_length(var100, 3l);
var99 = var101;
varonce98 = var99;
}
((struct instance_standard__NativeArray*)var89)->values[4]=var99;
if (likely(varonce102!=NULL)) {
var103 = varonce102;
} else {
var104 = "`";
var105 = standard___standard__NativeString___to_s_with_length(var104, 1l);
var103 = var105;
varonce102 = var103;
}
((struct instance_standard__NativeArray*)var89)->values[6]=var103;
} else {
var89 = varonce88;
varonce88 = NULL;
}
((struct instance_standard__NativeArray*)var89)->values[1]=var_name;
((struct instance_standard__NativeArray*)var89)->values[3]=var_candidate;
((struct instance_standard__NativeArray*)var89)->values[5]=var_try_file;
{
var106 = ((val*(*)(val* self))(var89->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var89); /* native_to_s on <var89:NativeArray[String]>*/
}
varonce88 = var89;
{
var107 = nit___nit__ToolContext___error(var85, var_location, var106);
}
} else {
}
} else {
}
}
} else {
}
if (likely(varonce108!=NULL)) {
var109 = varonce108;
} else {
var110 = "/";
var111 = standard___standard__NativeString___to_s_with_length(var110, 1l);
var109 = var111;
varonce108 = var109;
}
{
var112 = ((val*(*)(val* self, val* p0))(var_dirname->class->vft[COLOR_standard__string__String___43d]))(var_dirname, var109); /* + on <var_dirname:String>*/
}
{
var113 = ((val*(*)(val* self, val* p0))(var112->class->vft[COLOR_standard__string__String___43d]))(var112, var_name); /* + on <var112:String>*/
}
if (likely(varonce114!=NULL)) {
var115 = varonce114;
} else {
var116 = "/src/";
var117 = standard___standard__NativeString___to_s_with_length(var116, 5l);
var115 = var117;
varonce114 = var115;
}
{
var118 = ((val*(*)(val* self, val* p0))(var113->class->vft[COLOR_standard__string__String___43d]))(var113, var115); /* + on <var113:String>*/
}
{
var119 = ((val*(*)(val* self, val* p0))(var118->class->vft[COLOR_standard__string__String___43d]))(var118, var_name); /* + on <var118:String>*/
}
if (likely(varonce120!=NULL)) {
var121 = varonce120;
} else {
var122 = ".nit";
var123 = standard___standard__NativeString___to_s_with_length(var122, 4l);
var121 = var123;
varonce120 = var121;
}
{
var124 = ((val*(*)(val* self, val* p0))(var119->class->vft[COLOR_standard__string__String___43d]))(var119, var121); /* + on <var119:String>*/
}
{
var125 = standard__file___String___simplify_path(var124);
}
var_try_file = var125;
{
var126 = standard__file___String___file_exists(var_try_file);
}
if (var126){
if (var_candidate == NULL) {
var127 = 1; /* is null */
} else {
var127 = 0; /* arg is null but recv is not */
}
if (0) {
var128 = ((short int(*)(val* self, val* p0))(var_candidate->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_candidate, ((val*)NULL)); /* == on <var_candidate:nullable String>*/
var127 = var128;
}
if (var127){
var_candidate = var_try_file;
} else {
{
{ /* Inline kernel#Object#!= (var_candidate,var_try_file) on <var_candidate:nullable String(String)> */
var_other = var_try_file;
{
var131 = ((short int(*)(val* self, val* p0))(var_candidate->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_candidate, var_other); /* == on <var_candidate:nullable String(String)>*/
}
var132 = !var131;
var129 = var132;
goto RET_LABEL130;
RET_LABEL130:(void)0;
}
}
if (var129){
{
var133 = nit__loader___ModelBuilder___module_absolute_path(self, var_candidate);
}
var_abs_candidate134 = var133;
{
var135 = nit__loader___ModelBuilder___module_absolute_path(self, var_try_file);
}
var_abs_try_file136 = var135;
{
{ /* Inline kernel#Object#!= (var_abs_candidate134,var_abs_try_file136) on <var_abs_candidate134:String> */
var_other = var_abs_try_file136;
{
var139 = ((short int(*)(val* self, val* p0))(var_abs_candidate134->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_abs_candidate134, var_other); /* == on <var_abs_candidate134:String>*/
}
var140 = !var139;
var137 = var140;
goto RET_LABEL138;
RET_LABEL138:(void)0;
}
}
if (var137){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var143 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var143 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var141 = var143;
RET_LABEL142:(void)0;
}
}
if (unlikely(varonce144==NULL)) {
var145 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce146!=NULL)) {
var147 = varonce146;
} else {
var148 = "Error: conflicting module file for `";
var149 = standard___standard__NativeString___to_s_with_length(var148, 36l);
var147 = var149;
varonce146 = var147;
}
((struct instance_standard__NativeArray*)var145)->values[0]=var147;
if (likely(varonce150!=NULL)) {
var151 = varonce150;
} else {
var152 = "`: `";
var153 = standard___standard__NativeString___to_s_with_length(var152, 4l);
var151 = var153;
varonce150 = var151;
}
((struct instance_standard__NativeArray*)var145)->values[2]=var151;
if (likely(varonce154!=NULL)) {
var155 = varonce154;
} else {
var156 = "` `";
var157 = standard___standard__NativeString___to_s_with_length(var156, 3l);
var155 = var157;
varonce154 = var155;
}
((struct instance_standard__NativeArray*)var145)->values[4]=var155;
if (likely(varonce158!=NULL)) {
var159 = varonce158;
} else {
var160 = "`";
var161 = standard___standard__NativeString___to_s_with_length(var160, 1l);
var159 = var161;
varonce158 = var159;
}
((struct instance_standard__NativeArray*)var145)->values[6]=var159;
} else {
var145 = varonce144;
varonce144 = NULL;
}
((struct instance_standard__NativeArray*)var145)->values[1]=var_name;
((struct instance_standard__NativeArray*)var145)->values[3]=var_candidate;
((struct instance_standard__NativeArray*)var145)->values[5]=var_try_file;
{
var162 = ((val*(*)(val* self))(var145->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var145); /* native_to_s on <var145:NativeArray[String]>*/
}
varonce144 = var145;
{
var163 = nit___nit__ToolContext___error(var141, var_location, var162);
}
} else {
}
} else {
}
}
} else {
}
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_2); /* next on <var_2:Iterator[String]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_2); /* finish on <var_2:Iterator[String]>*/
}
if (var_candidate == NULL) {
var164 = 1; /* is null */
} else {
var164 = 0; /* arg is null but recv is not */
}
if (0) {
var165 = ((short int(*)(val* self, val* p0))(var_candidate->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_candidate, ((val*)NULL)); /* == on <var_candidate:nullable String>*/
var164 = var165;
}
if (var164){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var166 = nit__loader___ModelBuilder___identify_file(self, var_candidate);
}
var = var166;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 332);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 335);
fatal_exit(1);
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
val* var4 /* : FlatString */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : String */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : FlatString */;
short int var15 /* : Bool */;
val* var16 /* : Array[String] */;
val* var18 /* : Array[String] */;
val* var19 /* : nullable ModulePath */;
val* var_res /* var res: nullable ModulePath */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var_candidate /* var candidate: nullable Object */;
short int var25 /* : Bool */;
val* var26 /* : nullable MGroup */;
val* var_mgroup /* var mgroup: nullable MGroup */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var32 /* : nullable String */;
val* var34 /* : nullable String */;
val* var35 /* : String */;
val* var37 /* : String */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : FlatString */;
val* var42 /* : String */;
val* var43 /* : String */;
val* var_owner_path /* var owner_path: String */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
val* var50 /* : FlatString */;
val* var51 /* : String */;
val* var_pn /* var pn: String */;
val* var52 /* : String */;
val* var_rp /* var rp: String */;
val* var53 /* : HashMap[String, nullable ModulePath] */;
val* var55 /* : HashMap[String, nullable ModulePath] */;
short int var56 /* : Bool */;
val* var57 /* : HashMap[String, nullable ModulePath] */;
val* var59 /* : HashMap[String, nullable ModulePath] */;
val* var60 /* : nullable Object */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
val* var64 /* : FlatString */;
val* var65 /* : String */;
val* var66 /* : String */;
val* var_mgrouppath /* var mgrouppath: String */;
val* var67 /* : nullable MGroup */;
val* var_mgroup68 /* var mgroup: nullable MGroup */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
val* var_other72 /* var other: nullable Object */;
short int var73 /* : Bool */;
short int var75 /* : Bool */;
val* var76 /* : MProject */;
val* var77 /* : Model */;
val* var79 /* : Model */;
val* var_mproject /* var mproject: MProject */;
val* var80 /* : MGroup */;
val* var83 /* : ToolContext */;
val* var85 /* : ToolContext */;
val* var87 /* : NativeArray[String] */;
static val* varonce86;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : NativeString */;
val* var91 /* : FlatString */;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : NativeString */;
val* var95 /* : FlatString */;
val* var96 /* : String */;
val* var97 /* : ModulePath */;
val* var_res98 /* var res: ModulePath */;
val* var99 /* : Array[ModulePath] */;
val* var101 /* : Array[ModulePath] */;
val* var102 /* : HashMap[String, nullable ModulePath] */;
val* var104 /* : HashMap[String, nullable ModulePath] */;
val* var105 /* : Array[ModulePath] */;
val* var107 /* : Array[ModulePath] */;
var_path = p0;
{
var1 = standard__file___String___file_extension(var_path);
}
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "nit";
var4 = standard___standard__NativeString___to_s_with_length(var3, 3l);
var2 = var4;
varonce = var2;
}
if (var1 == NULL) {
var5 = 1; /* <var2:String> cannot be null */
} else {
{ /* Inline kernel#Object#!= (var1,var2) on <var1:nullable String> */
var_other = var2;
{
var8 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var1, var_other); /* == on <var1:nullable String(String)>*/
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
var10 = standard__file___String___dirname(var_path);
}
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "";
var14 = standard___standard__NativeString___to_s_with_length(var13, 0l);
var12 = var14;
varonce11 = var12;
}
{
var15 = ((short int(*)(val* self, val* p0))(var10->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var10, var12); /* == on <var10:String>*/
}
if (var15){
{
{ /* Inline loader#ModelBuilder#paths (self) on <self:ModelBuilder> */
var18 = self->attrs[COLOR_nit__loader__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 192);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = nit__loader___ModelBuilder___search_module_in_paths(self, ((val*)NULL), var_path, var16);
}
var_res = var19;
if (var_res == NULL) {
var20 = 0; /* is null */
} else {
var20 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,((val*)NULL)) on <var_res:nullable ModulePath> */
var_other = ((val*)NULL);
{
var23 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable ModulePath(ModulePath)>*/
}
var24 = !var23;
var21 = var24;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (var20){
var = var_res;
goto RET_LABEL;
} else {
}
} else {
}
var_candidate = ((val*)NULL);
{
var25 = standard__file___String___file_exists(var_path);
}
if (var25){
{
var26 = nit__loader___ModelBuilder___get_mgroup(self, var_path);
}
var_mgroup = var26;
if (var_mgroup == NULL) {
var27 = 0; /* is null */
} else {
var27 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mgroup,((val*)NULL)) on <var_mgroup:nullable MGroup> */
var_other = ((val*)NULL);
{
var30 = ((short int(*)(val* self, val* p0))(var_mgroup->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mgroup, var_other); /* == on <var_mgroup:nullable MGroup(MGroup)>*/
}
var31 = !var30;
var28 = var31;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
var27 = var28;
}
if (var27){
{
{ /* Inline mproject#MGroup#filepath (var_mgroup) on <var_mgroup:nullable MGroup(MGroup)> */
var34 = var_mgroup->attrs[COLOR_nit__mproject__MGroup___filepath].val; /* _filepath on <var_mgroup:nullable MGroup(MGroup)> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline mproject#MGroup#name (var_mgroup) on <var_mgroup:nullable MGroup(MGroup)> */
var37 = var_mgroup->attrs[COLOR_nit__mproject__MGroup___name].val; /* _name on <var_mgroup:nullable MGroup(MGroup)> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 65);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = ".nit";
var41 = standard___standard__NativeString___to_s_with_length(var40, 4l);
var39 = var41;
varonce38 = var39;
}
{
var42 = ((val*(*)(val* self, val* p0))(var35->class->vft[COLOR_standard__string__String___43d]))(var35, var39); /* + on <var35:String>*/
}
if (var32 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 358);
fatal_exit(1);
} else {
var43 = standard__file___String___join_path(var32, var42);
}
var_owner_path = var43;
{
var44 = standard__file___String___file_exists(var_owner_path);
}
if (var44){
var_candidate = var_owner_path;
} else {
}
} else {
}
} else {
}
if (var_candidate == NULL) {
var45 = 1; /* is null */
} else {
var45 = 0; /* arg is null but recv is not */
}
if (0) {
var46 = ((short int(*)(val* self, val* p0))(var_candidate->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_candidate, ((val*)NULL)); /* == on <var_candidate:nullable Object(nullable String)>*/
var45 = var46;
}
if (var45){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var_path = var_candidate;
} else {
}
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = ".nit";
var50 = standard___standard__NativeString___to_s_with_length(var49, 4l);
var48 = var50;
varonce47 = var48;
}
{
var51 = standard__file___String___basename(var_path, var48);
}
var_pn = var51;
{
var52 = nit__loader___ModelBuilder___module_absolute_path(self, var_path);
}
var_rp = var52;
{
{ /* Inline loader#ModelBuilder#identified_files_by_path (self) on <self:ModelBuilder> */
var55 = self->attrs[COLOR_nit__loader__ModelBuilder___identified_files_by_path].val; /* _identified_files_by_path on <self:ModelBuilder> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _identified_files_by_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 332);
fatal_exit(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
var56 = standard___standard__HashMap___standard__abstract_collection__MapRead__has_key(var53, var_rp);
}
if (var56){
{
{ /* Inline loader#ModelBuilder#identified_files_by_path (self) on <self:ModelBuilder> */
var59 = self->attrs[COLOR_nit__loader__ModelBuilder___identified_files_by_path].val; /* _identified_files_by_path on <self:ModelBuilder> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _identified_files_by_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 332);
fatal_exit(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
var60 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var57, var_rp);
}
var = var60;
goto RET_LABEL;
} else {
}
if (likely(varonce61!=NULL)) {
var62 = varonce61;
} else {
var63 = "..";
var64 = standard___standard__NativeString___to_s_with_length(var63, 2l);
var62 = var64;
varonce61 = var62;
}
{
var65 = standard__file___String___join_path(var_path, var62);
}
{
var66 = standard__file___String___simplify_path(var65);
}
var_mgrouppath = var66;
{
var67 = nit__loader___ModelBuilder___get_mgroup(self, var_mgrouppath);
}
var_mgroup68 = var67;
if (var_mgroup68 == NULL) {
var69 = 1; /* is null */
} else {
var69 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mgroup68,((val*)NULL)) on <var_mgroup68:nullable MGroup> */
var_other72 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mgroup68,var_other72) on <var_mgroup68:nullable MGroup(MGroup)> */
var75 = var_mgroup68 == var_other72;
var73 = var75;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
}
var70 = var73;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
var69 = var70;
}
if (var69){
var76 = NEW_nit__MProject(&type_nit__MProject);
{
{ /* Inline modelbuilder_base#ModelBuilder#model (self) on <self:ModelBuilder> */
var79 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var79 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 44);
fatal_exit(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var76->class->vft[COLOR_nit__mproject__MProject__name_61d]))(var76, var_pn); /* name= on <var76:MProject>*/
}
{
((void(*)(val* self, val* p0))(var76->class->vft[COLOR_nit__mproject__MProject__model_61d]))(var76, var77); /* model= on <var76:MProject>*/
}
{
((void(*)(val* self))(var76->class->vft[COLOR_standard__kernel__Object__init]))(var76); /* init on <var76:MProject>*/
}
var_mproject = var76;
var80 = NEW_nit__MGroup(&type_nit__MGroup);
{
((void(*)(val* self, val* p0))(var80->class->vft[COLOR_nit__mproject__MGroup__name_61d]))(var80, var_pn); /* name= on <var80:MGroup>*/
}
{
((void(*)(val* self, val* p0))(var80->class->vft[COLOR_nit__mproject__MGroup__mproject_61d]))(var80, var_mproject); /* mproject= on <var80:MGroup>*/
}
{
((void(*)(val* self, val* p0))(var80->class->vft[COLOR_nit__mproject__MGroup__parent_61d]))(var80, ((val*)NULL)); /* parent= on <var80:MGroup>*/
}
{
((void(*)(val* self))(var80->class->vft[COLOR_standard__kernel__Object__init]))(var80); /* init on <var80:MGroup>*/
}
var_mgroup68 = var80;
{
{ /* Inline mproject#MGroup#filepath= (var_mgroup68,var_path) on <var_mgroup68:nullable MGroup(MGroup)> */
var_mgroup68->attrs[COLOR_nit__mproject__MGroup___filepath].val = var_path; /* _filepath on <var_mgroup68:nullable MGroup(MGroup)> */
RET_LABEL81:(void)0;
}
}
{
{ /* Inline mproject#MProject#root= (var_mproject,var_mgroup68) on <var_mproject:MProject> */
var_mproject->attrs[COLOR_nit__mproject__MProject___root].val = var_mgroup68; /* _root on <var_mproject:MProject> */
RET_LABEL82:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var85 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var85 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var83 = var85;
RET_LABEL84:(void)0;
}
}
if (unlikely(varonce86==NULL)) {
var87 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce88!=NULL)) {
var89 = varonce88;
} else {
var90 = "found project `";
var91 = standard___standard__NativeString___to_s_with_length(var90, 15l);
var89 = var91;
varonce88 = var89;
}
((struct instance_standard__NativeArray*)var87)->values[0]=var89;
if (likely(varonce92!=NULL)) {
var93 = varonce92;
} else {
var94 = "` at ";
var95 = standard___standard__NativeString___to_s_with_length(var94, 5l);
var93 = var95;
varonce92 = var93;
}
((struct instance_standard__NativeArray*)var87)->values[2]=var93;
} else {
var87 = varonce86;
varonce86 = NULL;
}
((struct instance_standard__NativeArray*)var87)->values[1]=var_pn;
((struct instance_standard__NativeArray*)var87)->values[3]=var_path;
{
var96 = ((val*(*)(val* self))(var87->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var87); /* native_to_s on <var87:NativeArray[String]>*/
}
varonce86 = var87;
{
nit___nit__ToolContext___info(var83, var96, 2l); /* Direct call toolcontext#ToolContext#info on <var83:ToolContext>*/
}
} else {
}
var97 = NEW_nit__ModulePath(&type_nit__ModulePath);
{
((void(*)(val* self, val* p0))(var97->class->vft[COLOR_nit__loader__ModulePath__name_61d]))(var97, var_pn); /* name= on <var97:ModulePath>*/
}
{
((void(*)(val* self, val* p0))(var97->class->vft[COLOR_nit__loader__ModulePath__filepath_61d]))(var97, var_path); /* filepath= on <var97:ModulePath>*/
}
{
((void(*)(val* self, val* p0))(var97->class->vft[COLOR_nit__loader__ModulePath__mgroup_61d]))(var97, var_mgroup68); /* mgroup= on <var97:ModulePath>*/
}
{
((void(*)(val* self))(var97->class->vft[COLOR_standard__kernel__Object__init]))(var97); /* init on <var97:ModulePath>*/
}
var_res98 = var97;
{
{ /* Inline loader#MGroup#module_paths (var_mgroup68) on <var_mgroup68:nullable MGroup(MGroup)> */
var101 = var_mgroup68->attrs[COLOR_nit__loader__MGroup___module_paths].val; /* _module_paths on <var_mgroup68:nullable MGroup(MGroup)> */
if (unlikely(var101 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _module_paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 799);
fatal_exit(1);
}
var99 = var101;
RET_LABEL100:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var99, var_res98); /* Direct call array#Array#add on <var99:Array[ModulePath]>*/
}
{
{ /* Inline loader#ModelBuilder#identified_files_by_path (self) on <self:ModelBuilder> */
var104 = self->attrs[COLOR_nit__loader__ModelBuilder___identified_files_by_path].val; /* _identified_files_by_path on <self:ModelBuilder> */
if (unlikely(var104 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _identified_files_by_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 332);
fatal_exit(1);
}
var102 = var104;
RET_LABEL103:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var102, var_rp, var_res98); /* Direct call hash_collection#HashMap#[]= on <var102:HashMap[String, nullable ModulePath]>*/
}
{
{ /* Inline loader#ModelBuilder#identified_files (self) on <self:ModelBuilder> */
var107 = self->attrs[COLOR_nit__loader__ModelBuilder___identified_files].val; /* _identified_files on <self:ModelBuilder> */
if (unlikely(var107 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _identified_files");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 335);
fatal_exit(1);
}
var105 = var107;
RET_LABEL106:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var105, var_res98); /* Direct call array#Array#add on <var105:Array[ModulePath]>*/
}
var = var_res98;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 395);
fatal_exit(1);
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
val* var12 /* : String */;
val* var_rdp /* var rdp: String */;
val* var13 /* : HashMap[String, nullable MGroup] */;
val* var15 /* : HashMap[String, nullable MGroup] */;
short int var16 /* : Bool */;
val* var17 /* : HashMap[String, nullable MGroup] */;
val* var19 /* : HashMap[String, nullable MGroup] */;
val* var20 /* : nullable Object */;
static val* varonce;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : FlatString */;
val* var24 /* : String */;
val* var_pn /* var pn: String */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
val* var28 /* : FlatString */;
val* var29 /* : String */;
val* var30 /* : String */;
val* var31 /* : String */;
val* var_mp /* var mp: String */;
val* var_dirpath2 /* var dirpath2: String */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : FlatString */;
short int var38 /* : Bool */;
val* var39 /* : String */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
val* var43 /* : FlatString */;
val* var44 /* : String */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
val* var48 /* : FlatString */;
val* var49 /* : String */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
val* var55 /* : FlatString */;
val* var56 /* : String */;
val* var57 /* : String */;
val* var_parentpath /* var parentpath: String */;
val* var58 /* : nullable MGroup */;
val* var_parent /* var parent: nullable MGroup */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var62 /* : Bool */;
short int var64 /* : Bool */;
val* var65 /* : MProject */;
val* var66 /* : Model */;
val* var68 /* : Model */;
val* var_mproject /* var mproject: MProject */;
val* var69 /* : MGroup */;
val* var_mgroup /* var mgroup: nullable Object */;
val* var71 /* : ToolContext */;
val* var73 /* : ToolContext */;
val* var75 /* : NativeArray[String] */;
static val* varonce74;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
val* var79 /* : FlatString */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
val* var83 /* : FlatString */;
val* var84 /* : String */;
val* var85 /* : String */;
val* var86 /* : MGroup */;
val* var87 /* : MProject */;
val* var89 /* : MProject */;
val* var90 /* : ToolContext */;
val* var92 /* : ToolContext */;
val* var94 /* : NativeArray[String] */;
static val* varonce93;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : NativeString */;
val* var98 /* : FlatString */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : NativeString */;
val* var102 /* : FlatString */;
val* var103 /* : String */;
val* var104 /* : String */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
val* var108 /* : FlatString */;
val* var109 /* : String */;
val* var_readme /* var readme: String */;
short int var110 /* : Bool */;
short int var111 /* : Bool */;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : NativeString */;
val* var115 /* : FlatString */;
val* var116 /* : String */;
short int var117 /* : Bool */;
short int var118 /* : Bool */;
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : NativeString */;
val* var122 /* : FlatString */;
val* var123 /* : String */;
short int var124 /* : Bool */;
short int var125 /* : Bool */;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : NativeString */;
val* var129 /* : FlatString */;
val* var130 /* : String */;
short int var131 /* : Bool */;
val* var132 /* : MDoc */;
val* var_mdoc /* var mdoc: MDoc */;
val* var136 /* : HashMap[String, nullable MGroup] */;
val* var138 /* : HashMap[String, nullable MGroup] */;
val* var139 /* : String */;
val* var140 /* : HashMap[String, nullable MGroup] */;
val* var142 /* : HashMap[String, nullable MGroup] */;
val* var143 /* : String */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 192);
fatal_exit(1);
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
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_7); /* Direct call array#ArrayIterator#finish on <var_7:ArrayIterator[String]>*/
}
var = ((val*)NULL);
goto RET_LABEL;
BREAK_: (void)0;
} else {
}
{
var12 = nit__loader___ModelBuilder___module_absolute_path(self, var_dirpath);
}
var_rdp = var12;
{
{ /* Inline loader#ModelBuilder#mgroups (self) on <self:ModelBuilder> */
var15 = self->attrs[COLOR_nit__loader__ModelBuilder___mgroups].val; /* _mgroups on <self:ModelBuilder> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroups");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 395);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = standard___standard__HashMap___standard__abstract_collection__MapRead__has_key(var13, var_rdp);
}
if (var16){
{
{ /* Inline loader#ModelBuilder#mgroups (self) on <self:ModelBuilder> */
var19 = self->attrs[COLOR_nit__loader__ModelBuilder___mgroups].val; /* _mgroups on <self:ModelBuilder> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroups");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 395);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var17, var_rdp);
}
var = var20;
goto RET_LABEL;
} else {
}
if (likely(varonce!=NULL)) {
var21 = varonce;
} else {
var22 = ".nit";
var23 = standard___standard__NativeString___to_s_with_length(var22, 4l);
var21 = var23;
varonce = var21;
}
{
var24 = standard__file___String___basename(var_rdp, var21);
}
var_pn = var24;
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = ".nit";
var28 = standard___standard__NativeString___to_s_with_length(var27, 4l);
var26 = var28;
varonce25 = var26;
}
{
var29 = ((val*(*)(val* self, val* p0))(var_pn->class->vft[COLOR_standard__string__String___43d]))(var_pn, var26); /* + on <var_pn:String>*/
}
{
var30 = standard__file___String___join_path(var_dirpath, var29);
}
{
var31 = standard__file___String___simplify_path(var30);
}
var_mp = var31;
var_dirpath2 = var_dirpath;
{
var32 = standard__file___String___file_exists(var_mp);
}
var33 = !var32;
if (var33){
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "src";
var37 = standard___standard__NativeString___to_s_with_length(var36, 3l);
var35 = var37;
varonce34 = var35;
}
{
var38 = ((short int(*)(val* self, val* p0))(var_pn->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pn, var35); /* == on <var_pn:String>*/
}
if (var38){
{
var39 = standard__file___String___dirname(var_rdp);
}
var_dirpath2 = var39;
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "";
var43 = standard___standard__NativeString___to_s_with_length(var42, 0l);
var41 = var43;
varonce40 = var41;
}
{
var44 = standard__file___String___basename(var_dirpath2, var41);
}
var_pn = var44;
} else {
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = "src";
var48 = standard___standard__NativeString___to_s_with_length(var47, 3l);
var46 = var48;
varonce45 = var46;
}
{
var49 = standard__file___String____47d(var_dirpath2, var46);
}
var_dirpath = var49;
{
var50 = standard__file___String___file_exists(var_dirpath);
}
var51 = !var50;
if (var51){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
}
} else {
}
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = "..";
var55 = standard___standard__NativeString___to_s_with_length(var54, 2l);
var53 = var55;
varonce52 = var53;
}
{
var56 = standard__file___String___join_path(var_dirpath2, var53);
}
{
var57 = standard__file___String___simplify_path(var56);
}
var_parentpath = var57;
{
var58 = nit__loader___ModelBuilder___get_mgroup(self, var_parentpath);
}
var_parent = var58;
if (var_parent == NULL) {
var59 = 1; /* is null */
} else {
var59 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_parent,((val*)NULL)) on <var_parent:nullable MGroup> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_parent,var_other) on <var_parent:nullable MGroup(MGroup)> */
var64 = var_parent == var_other;
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
var65 = NEW_nit__MProject(&type_nit__MProject);
{
{ /* Inline modelbuilder_base#ModelBuilder#model (self) on <self:ModelBuilder> */
var68 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 44);
fatal_exit(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var65->class->vft[COLOR_nit__mproject__MProject__name_61d]))(var65, var_pn); /* name= on <var65:MProject>*/
}
{
((void(*)(val* self, val* p0))(var65->class->vft[COLOR_nit__mproject__MProject__model_61d]))(var65, var66); /* model= on <var65:MProject>*/
}
{
((void(*)(val* self))(var65->class->vft[COLOR_standard__kernel__Object__init]))(var65); /* init on <var65:MProject>*/
}
var_mproject = var65;
var69 = NEW_nit__MGroup(&type_nit__MGroup);
{
((void(*)(val* self, val* p0))(var69->class->vft[COLOR_nit__mproject__MGroup__name_61d]))(var69, var_pn); /* name= on <var69:MGroup>*/
}
{
((void(*)(val* self, val* p0))(var69->class->vft[COLOR_nit__mproject__MGroup__mproject_61d]))(var69, var_mproject); /* mproject= on <var69:MGroup>*/
}
{
((void(*)(val* self, val* p0))(var69->class->vft[COLOR_nit__mproject__MGroup__parent_61d]))(var69, ((val*)NULL)); /* parent= on <var69:MGroup>*/
}
{
((void(*)(val* self))(var69->class->vft[COLOR_standard__kernel__Object__init]))(var69); /* init on <var69:MGroup>*/
}
var_mgroup = var69;
{
{ /* Inline mproject#MProject#root= (var_mproject,var_mgroup) on <var_mproject:MProject> */
var_mproject->attrs[COLOR_nit__mproject__MProject___root].val = var_mgroup; /* _root on <var_mproject:MProject> */
RET_LABEL70:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var73 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var73 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var71 = var73;
RET_LABEL72:(void)0;
}
}
if (unlikely(varonce74==NULL)) {
var75 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce76!=NULL)) {
var77 = varonce76;
} else {
var78 = "found project `";
var79 = standard___standard__NativeString___to_s_with_length(var78, 15l);
var77 = var79;
varonce76 = var77;
}
((struct instance_standard__NativeArray*)var75)->values[0]=var77;
if (likely(varonce80!=NULL)) {
var81 = varonce80;
} else {
var82 = "` at ";
var83 = standard___standard__NativeString___to_s_with_length(var82, 5l);
var81 = var83;
varonce80 = var81;
}
((struct instance_standard__NativeArray*)var75)->values[2]=var81;
} else {
var75 = varonce74;
varonce74 = NULL;
}
{
var84 = ((val*(*)(val* self))(var_mproject->class->vft[COLOR_standard__string__Object__to_s]))(var_mproject); /* to_s on <var_mproject:MProject>*/
}
((struct instance_standard__NativeArray*)var75)->values[1]=var84;
((struct instance_standard__NativeArray*)var75)->values[3]=var_dirpath;
{
var85 = ((val*(*)(val* self))(var75->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var75); /* native_to_s on <var75:NativeArray[String]>*/
}
varonce74 = var75;
{
nit___nit__ToolContext___info(var71, var85, 2l); /* Direct call toolcontext#ToolContext#info on <var71:ToolContext>*/
}
} else {
var86 = NEW_nit__MGroup(&type_nit__MGroup);
{
{ /* Inline mproject#MGroup#mproject (var_parent) on <var_parent:nullable MGroup(MGroup)> */
var89 = var_parent->attrs[COLOR_nit__mproject__MGroup___mproject].val; /* _mproject on <var_parent:nullable MGroup(MGroup)> */
if (unlikely(var89 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproject");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 69);
fatal_exit(1);
}
var87 = var89;
RET_LABEL88:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var86->class->vft[COLOR_nit__mproject__MGroup__name_61d]))(var86, var_pn); /* name= on <var86:MGroup>*/
}
{
((void(*)(val* self, val* p0))(var86->class->vft[COLOR_nit__mproject__MGroup__mproject_61d]))(var86, var87); /* mproject= on <var86:MGroup>*/
}
{
((void(*)(val* self, val* p0))(var86->class->vft[COLOR_nit__mproject__MGroup__parent_61d]))(var86, var_parent); /* parent= on <var86:MGroup>*/
}
{
((void(*)(val* self))(var86->class->vft[COLOR_standard__kernel__Object__init]))(var86); /* init on <var86:MGroup>*/
}
var_mgroup = var86;
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var92 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var92 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
if (unlikely(varonce93==NULL)) {
var94 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce95!=NULL)) {
var96 = varonce95;
} else {
var97 = "found sub group `";
var98 = standard___standard__NativeString___to_s_with_length(var97, 17l);
var96 = var98;
varonce95 = var96;
}
((struct instance_standard__NativeArray*)var94)->values[0]=var96;
if (likely(varonce99!=NULL)) {
var100 = varonce99;
} else {
var101 = "` at ";
var102 = standard___standard__NativeString___to_s_with_length(var101, 5l);
var100 = var102;
varonce99 = var100;
}
((struct instance_standard__NativeArray*)var94)->values[2]=var100;
} else {
var94 = varonce93;
varonce93 = NULL;
}
{
var103 = nit___nit__MGroup___nit__model_base__MEntity__full_name(var_mgroup);
}
((struct instance_standard__NativeArray*)var94)->values[1]=var103;
((struct instance_standard__NativeArray*)var94)->values[3]=var_dirpath;
{
var104 = ((val*(*)(val* self))(var94->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var94); /* native_to_s on <var94:NativeArray[String]>*/
}
varonce93 = var94;
{
nit___nit__ToolContext___info(var90, var104, 2l); /* Direct call toolcontext#ToolContext#info on <var90:ToolContext>*/
}
}
if (likely(varonce105!=NULL)) {
var106 = varonce105;
} else {
var107 = "README.md";
var108 = standard___standard__NativeString___to_s_with_length(var107, 9l);
var106 = var108;
varonce105 = var106;
}
{
var109 = standard__file___String___join_path(var_dirpath, var106);
}
var_readme = var109;
{
var110 = standard__file___String___file_exists(var_readme);
}
var111 = !var110;
if (var111){
if (likely(varonce112!=NULL)) {
var113 = varonce112;
} else {
var114 = "README";
var115 = standard___standard__NativeString___to_s_with_length(var114, 6l);
var113 = var115;
varonce112 = var113;
}
{
var116 = standard__file___String___join_path(var_dirpath, var113);
}
var_readme = var116;
} else {
}
{
var117 = standard__file___String___file_exists(var_readme);
}
var118 = !var117;
if (var118){
if (likely(varonce119!=NULL)) {
var120 = varonce119;
} else {
var121 = "README.md";
var122 = standard___standard__NativeString___to_s_with_length(var121, 9l);
var120 = var122;
varonce119 = var120;
}
{
var123 = standard__file___String___join_path(var_dirpath2, var120);
}
var_readme = var123;
} else {
}
{
var124 = standard__file___String___file_exists(var_readme);
}
var125 = !var124;
if (var125){
if (likely(varonce126!=NULL)) {
var127 = varonce126;
} else {
var128 = "README";
var129 = standard___standard__NativeString___to_s_with_length(var128, 6l);
var127 = var129;
varonce126 = var127;
}
{
var130 = standard__file___String___join_path(var_dirpath2, var127);
}
var_readme = var130;
} else {
}
{
var131 = standard__file___String___file_exists(var_readme);
}
if (var131){
{
var132 = nit__loader___ModelBuilder___load_markdown(self, var_readme);
}
var_mdoc = var132;
{
{ /* Inline mdoc#MEntity#mdoc= (var_mgroup,var_mdoc) on <var_mgroup:nullable Object(MGroup)> */
var_mgroup->attrs[COLOR_nit__mdoc__MEntity___mdoc].val = var_mdoc; /* _mdoc on <var_mgroup:nullable Object(MGroup)> */
RET_LABEL133:(void)0;
}
}
{
{ /* Inline mdoc#MDoc#original_mentity= (var_mdoc,var_mgroup) on <var_mdoc:MDoc> */
var_mdoc->attrs[COLOR_nit__mdoc__MDoc___original_mentity].val = var_mgroup; /* _original_mentity on <var_mdoc:MDoc> */
RET_LABEL134:(void)0;
}
}
} else {
}
{
{ /* Inline mproject#MGroup#filepath= (var_mgroup,var_dirpath) on <var_mgroup:nullable Object(MGroup)> */
var_mgroup->attrs[COLOR_nit__mproject__MGroup___filepath].val = var_dirpath; /* _filepath on <var_mgroup:nullable Object(MGroup)> */
RET_LABEL135:(void)0;
}
}
{
{ /* Inline loader#ModelBuilder#mgroups (self) on <self:ModelBuilder> */
var138 = self->attrs[COLOR_nit__loader__ModelBuilder___mgroups].val; /* _mgroups on <self:ModelBuilder> */
if (unlikely(var138 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroups");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 395);
fatal_exit(1);
}
var136 = var138;
RET_LABEL137:(void)0;
}
}
{
var139 = nit__loader___ModelBuilder___module_absolute_path(self, var_dirpath);
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var136, var139, var_mgroup); /* Direct call hash_collection#HashMap#[]= on <var136:HashMap[String, nullable MGroup]>*/
}
{
{ /* Inline loader#ModelBuilder#mgroups (self) on <self:ModelBuilder> */
var142 = self->attrs[COLOR_nit__loader__ModelBuilder___mgroups].val; /* _mgroups on <self:ModelBuilder> */
if (unlikely(var142 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroups");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 395);
fatal_exit(1);
}
var140 = var142;
RET_LABEL141:(void)0;
}
}
{
var143 = nit__loader___ModelBuilder___module_absolute_path(self, var_dirpath2);
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var140, var143, var_mgroup); /* Direct call hash_collection#HashMap#[]= on <var140:HashMap[String, nullable MGroup]>*/
}
var = var_mgroup;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#load_markdown for (self: ModelBuilder, String): MDoc */
val* nit__loader___ModelBuilder___load_markdown(val* self, val* p0) {
val* var /* : MDoc */;
val* var_filepath /* var filepath: String */;
val* var1 /* : MDoc */;
val* var2 /* : Location */;
val* var3 /* : SourceFile */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : FlatString */;
val* var_mdoc /* var mdoc: MDoc */;
val* var7 /* : FileReader */;
val* var_s /* var s: FileReader */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : Array[String] */;
val* var12 /* : Array[String] */;
val* var13 /* : String */;
var_filepath = p0;
var1 = NEW_nit__MDoc(&type_nit__MDoc);
var2 = NEW_nit__Location(&type_nit__Location);
var3 = NEW_nit__SourceFile(&type_nit__SourceFile);
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "";
var6 = standard___standard__NativeString___to_s_with_length(var5, 0l);
var4 = var6;
varonce = var4;
}
{
nit___nit__SourceFile___from_string(var3, var_filepath, var4); /* Direct call location#SourceFile#from_string on <var3:SourceFile>*/
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__location__Location__file_61d]))(var2, var3); /* file= on <var2:Location>*/
}
{
((void(*)(val* self, long p0))(var2->class->vft[COLOR_nit__location__Location__line_start_61d]))(var2, 0l); /* line_start= on <var2:Location>*/
}
{
((void(*)(val* self, long p0))(var2->class->vft[COLOR_nit__location__Location__line_end_61d]))(var2, 0l); /* line_end= on <var2:Location>*/
}
{
((void(*)(val* self, long p0))(var2->class->vft[COLOR_nit__location__Location__column_start_61d]))(var2, 0l); /* column_start= on <var2:Location>*/
}
{
((void(*)(val* self, long p0))(var2->class->vft[COLOR_nit__location__Location__column_end_61d]))(var2, 0l); /* column_end= on <var2:Location>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2); /* init on <var2:Location>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nit__mdoc__MDoc__location_61d]))(var1, var2); /* location= on <var1:MDoc>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:MDoc>*/
}
var_mdoc = var1;
var7 = NEW_standard__FileReader(&type_standard__FileReader);
{
standard___standard__FileReader___open(var7, var_filepath); /* Direct call file#FileReader#open on <var7:FileReader>*/
}
var_s = var7;
for(;;) {
{
var8 = standard___standard__BufferedReader___Reader__eof(var_s);
}
var9 = !var8;
if (var9){
{
{ /* Inline mdoc#MDoc#content (var_mdoc) on <var_mdoc:MDoc> */
var12 = var_mdoc->attrs[COLOR_nit__mdoc__MDoc___content].val; /* _content on <var_mdoc:MDoc> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _content");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mdoc, 23);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = standard___standard__Reader___read_line(var_s);
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var10, var13); /* Direct call array#Array#add on <var10:Array[String]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_mdoc;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#module_absolute_path for (self: ModelBuilder, String): String */
val* nit__loader___ModelBuilder___module_absolute_path(val* self, val* p0) {
val* var /* : String */;
val* var_path /* var path: String */;
val* var1 /* : Sys */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var4 /* : String */;
var_path = p0;
var1 = glob_sys;
{
var2 = standard__file___Sys___getcwd(var1);
}
{
var3 = standard__file___String___join_path(var2, var_path);
}
{
var4 = standard__file___String___simplify_path(var3);
}
var = var4;
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
val* var4 /* : FlatString */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : ToolContext */;
val* var12 /* : ToolContext */;
val* var14 /* : NativeArray[String] */;
static val* varonce13;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : FlatString */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
val* var22 /* : FlatString */;
val* var23 /* : String */;
val* var24 /* : Message */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : ToolContext */;
val* var29 /* : ToolContext */;
val* var31 /* : NativeArray[String] */;
static val* varonce30;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
val* var35 /* : FlatString */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
val* var39 /* : FlatString */;
val* var40 /* : String */;
val* var41 /* : Message */;
val* var42 /* : ToolContext */;
val* var44 /* : ToolContext */;
val* var46 /* : NativeArray[String] */;
static val* varonce45;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
val* var50 /* : FlatString */;
val* var51 /* : String */;
val* var52 /* : FileReader */;
val* var_file /* var file: FileReader */;
val* var53 /* : Lexer */;
val* var54 /* : SourceFile */;
val* var_lexer /* var lexer: Lexer */;
val* var55 /* : Parser */;
val* var_parser /* var parser: Parser */;
val* var56 /* : Start */;
val* var_tree /* var tree: Start */;
val* var57 /* : nullable AModule */;
val* var59 /* : nullable AModule */;
val* var_nmodule /* var nmodule: nullable AModule */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
val* var_other63 /* var other: nullable Object */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
val* var67 /* : EOF */;
val* var69 /* : EOF */;
val* var_neof /* var neof: EOF */;
short int var70 /* : Bool */;
int cltype;
int idtype;
val* var71 /* : String */;
val* var73 /* : String */;
var_filename = p0;
{
var1 = standard__file___String___file_extension(var_filename);
}
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "nit";
var4 = standard___standard__NativeString___to_s_with_length(var3, 3l);
var2 = var4;
varonce = var2;
}
if (var1 == NULL) {
var5 = 1; /* <var2:String> cannot be null */
} else {
{ /* Inline kernel#Object#!= (var1,var2) on <var1:nullable String> */
var_other = var2;
{
var8 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var1, var_other); /* == on <var1:nullable String(String)>*/
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
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var12 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (unlikely(varonce13==NULL)) {
var14 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "Error: file `";
var18 = standard___standard__NativeString___to_s_with_length(var17, 13l);
var16 = var18;
varonce15 = var16;
}
((struct instance_standard__NativeArray*)var14)->values[0]=var16;
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "` is not a valid nit module.";
var22 = standard___standard__NativeString___to_s_with_length(var21, 28l);
var20 = var22;
varonce19 = var20;
}
((struct instance_standard__NativeArray*)var14)->values[2]=var20;
} else {
var14 = varonce13;
varonce13 = NULL;
}
((struct instance_standard__NativeArray*)var14)->values[1]=var_filename;
{
var23 = ((val*(*)(val* self))(var14->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var14); /* native_to_s on <var14:NativeArray[String]>*/
}
varonce13 = var14;
{
var24 = nit___nit__ToolContext___error(var10, ((val*)NULL), var23);
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var25 = standard__file___String___file_exists(var_filename);
}
var26 = !var25;
if (var26){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var29 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
if (unlikely(varonce30==NULL)) {
var31 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "Error: file `";
var35 = standard___standard__NativeString___to_s_with_length(var34, 13l);
var33 = var35;
varonce32 = var33;
}
((struct instance_standard__NativeArray*)var31)->values[0]=var33;
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "` not found.";
var39 = standard___standard__NativeString___to_s_with_length(var38, 12l);
var37 = var39;
varonce36 = var37;
}
((struct instance_standard__NativeArray*)var31)->values[2]=var37;
} else {
var31 = varonce30;
varonce30 = NULL;
}
((struct instance_standard__NativeArray*)var31)->values[1]=var_filename;
{
var40 = ((val*(*)(val* self))(var31->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var31); /* native_to_s on <var31:NativeArray[String]>*/
}
varonce30 = var31;
{
var41 = nit___nit__ToolContext___error(var27, ((val*)NULL), var40);
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var44 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
if (unlikely(varonce45==NULL)) {
var46 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "load module ";
var50 = standard___standard__NativeString___to_s_with_length(var49, 12l);
var48 = var50;
varonce47 = var48;
}
((struct instance_standard__NativeArray*)var46)->values[0]=var48;
} else {
var46 = varonce45;
varonce45 = NULL;
}
((struct instance_standard__NativeArray*)var46)->values[1]=var_filename;
{
var51 = ((val*(*)(val* self))(var46->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var46); /* native_to_s on <var46:NativeArray[String]>*/
}
varonce45 = var46;
{
nit___nit__ToolContext___info(var42, var51, 2l); /* Direct call toolcontext#ToolContext#info on <var42:ToolContext>*/
}
var52 = NEW_standard__FileReader(&type_standard__FileReader);
{
standard___standard__FileReader___open(var52, var_filename); /* Direct call file#FileReader#open on <var52:FileReader>*/
}
var_file = var52;
var53 = NEW_nit__Lexer(&type_nit__Lexer);
var54 = NEW_nit__SourceFile(&type_nit__SourceFile);
{
((void(*)(val* self, val* p0))(var54->class->vft[COLOR_nit__location__SourceFile__filename_61d]))(var54, var_filename); /* filename= on <var54:SourceFile>*/
}
{
((void(*)(val* self, val* p0))(var54->class->vft[COLOR_nit__location__SourceFile__stream_61d]))(var54, var_file); /* stream= on <var54:SourceFile>*/
}
{
((void(*)(val* self))(var54->class->vft[COLOR_standard__kernel__Object__init]))(var54); /* init on <var54:SourceFile>*/
}
{
((void(*)(val* self, val* p0))(var53->class->vft[COLOR_nit__lexer_work__Lexer__file_61d]))(var53, var54); /* file= on <var53:Lexer>*/
}
{
((void(*)(val* self))(var53->class->vft[COLOR_standard__kernel__Object__init]))(var53); /* init on <var53:Lexer>*/
}
var_lexer = var53;
var55 = NEW_nit__Parser(&type_nit__Parser);
{
((void(*)(val* self, val* p0))(var55->class->vft[COLOR_nit__parser_work__Parser__lexer_61d]))(var55, var_lexer); /* lexer= on <var55:Parser>*/
}
{
((void(*)(val* self))(var55->class->vft[COLOR_standard__kernel__Object__init]))(var55); /* init on <var55:Parser>*/
}
var_parser = var55;
{
var56 = nit___nit__Parser___parse(var_parser);
}
var_tree = var56;
{
standard___standard__FileReader___standard__stream__Stream__close(var_file); /* Direct call file#FileReader#close on <var_file:FileReader>*/
}
{
{ /* Inline parser_nodes#Start#n_base (var_tree) on <var_tree:Start> */
var59 = var_tree->attrs[COLOR_nit__parser_nodes__Start___n_base].val; /* _n_base on <var_tree:Start> */
var57 = var59;
RET_LABEL58:(void)0;
}
}
var_nmodule = var57;
if (var_nmodule == NULL) {
var60 = 1; /* is null */
} else {
var60 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nmodule,((val*)NULL)) on <var_nmodule:nullable AModule> */
var_other63 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_nmodule,var_other63) on <var_nmodule:nullable AModule(AModule)> */
var66 = var_nmodule == var_other63;
var64 = var66;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
var61 = var64;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
var60 = var61;
}
if (var60){
{
{ /* Inline parser_nodes#Start#n_eof (var_tree) on <var_tree:Start> */
var69 = var_tree->attrs[COLOR_nit__parser_nodes__Start___n_eof].val; /* _n_eof on <var_tree:Start> */
if (unlikely(var69 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_eof");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 3037);
fatal_exit(1);
}
var67 = var69;
RET_LABEL68:(void)0;
}
}
var_neof = var67;
/* <var_neof:EOF> isa AError */
cltype = type_nit__AError.color;
idtype = type_nit__AError.id;
if(cltype >= var_neof->type->table_size) {
var70 = 0;
} else {
var70 = var_neof->type->type_table[cltype] == idtype;
}
if (unlikely(!var70)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 532);
fatal_exit(1);
}
{
{ /* Inline lexer_work#AError#message (var_neof) on <var_neof:EOF(AError)> */
var73 = var_neof->attrs[COLOR_nit__lexer_work__AError___message].val; /* _message on <var_neof:EOF(AError)> */
if (unlikely(var73 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _message");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__lexer_work, 50);
fatal_exit(1);
}
var71 = var73;
RET_LABEL72:(void)0;
}
}
{
nit___nit__ModelBuilder___error(self, var_neof, var71); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
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
val* nit__loader___ModelBuilder___load_module(val* self, val* p0) {
val* var /* : nullable AModule */;
val* var_filename /* var filename: String */;
val* var1 /* : nullable ModulePath */;
val* var_file /* var file: nullable ModulePath */;
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
val* var16 /* : FlatString */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : FlatString */;
val* var21 /* : String */;
val* var22 /* : Message */;
val* var23 /* : ToolContext */;
val* var25 /* : ToolContext */;
val* var27 /* : NativeArray[String] */;
static val* varonce26;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
val* var31 /* : FlatString */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
val* var35 /* : FlatString */;
val* var36 /* : String */;
val* var37 /* : Message */;
val* var38 /* : nullable MModule */;
val* var40 /* : nullable MModule */;
val* var_mmodule /* var mmodule: nullable MModule */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
val* var_other44 /* var other: nullable Object */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
val* var47 /* : HashMap[MModule, AModule] */;
val* var49 /* : HashMap[MModule, AModule] */;
val* var50 /* : nullable Object */;
val* var51 /* : String */;
val* var53 /* : String */;
val* var54 /* : nullable AModule */;
val* var_nmodule /* var nmodule: nullable AModule */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
short int var60 /* : Bool */;
val* var61 /* : MGroup */;
val* var63 /* : MGroup */;
val* var64 /* : String */;
val* var66 /* : String */;
val* var67 /* : nullable MModule */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
short int var71 /* : Bool */;
short int var73 /* : Bool */;
var_filename = p0;
{
var1 = nit__loader___ModelBuilder___identify_file(self, var_filename);
}
var_file = var1;
if (var_file == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_file,((val*)NULL)) on <var_file:nullable ModulePath> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_file,var_other) on <var_file:nullable ModulePath(ModulePath)> */
var7 = var_file == var_other;
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
var8 = standard__file___String___file_exists(var_filename);
}
if (var8){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var11 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var12 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "Error: `";
var16 = standard___standard__NativeString___to_s_with_length(var15, 8l);
var14 = var16;
varonce13 = var14;
}
((struct instance_standard__NativeArray*)var12)->values[0]=var14;
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "` is not a Nit source file.";
var20 = standard___standard__NativeString___to_s_with_length(var19, 27l);
var18 = var20;
varonce17 = var18;
}
((struct instance_standard__NativeArray*)var12)->values[2]=var18;
} else {
var12 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var12)->values[1]=var_filename;
{
var21 = ((val*(*)(val* self))(var12->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var12); /* native_to_s on <var12:NativeArray[String]>*/
}
varonce = var12;
{
var22 = nit___nit__ToolContext___error(var9, ((val*)NULL), var21);
}
} else {
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var25 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
if (unlikely(varonce26==NULL)) {
var27 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "Error: cannot find module `";
var31 = standard___standard__NativeString___to_s_with_length(var30, 27l);
var29 = var31;
varonce28 = var29;
}
((struct instance_standard__NativeArray*)var27)->values[0]=var29;
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "`.";
var35 = standard___standard__NativeString___to_s_with_length(var34, 2l);
var33 = var35;
varonce32 = var33;
}
((struct instance_standard__NativeArray*)var27)->values[2]=var33;
} else {
var27 = varonce26;
varonce26 = NULL;
}
((struct instance_standard__NativeArray*)var27)->values[1]=var_filename;
{
var36 = ((val*(*)(val* self))(var27->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var27); /* native_to_s on <var27:NativeArray[String]>*/
}
varonce26 = var27;
{
var37 = nit___nit__ToolContext___error(var23, ((val*)NULL), var36);
}
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline loader#ModulePath#mmodule (var_file) on <var_file:nullable ModulePath(ModulePath)> */
var40 = var_file->attrs[COLOR_nit__loader__ModulePath___mmodule].val; /* _mmodule on <var_file:nullable ModulePath(ModulePath)> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
var_mmodule = var38;
if (var_mmodule == NULL) {
var41 = 0; /* is null */
} else {
var41 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mmodule,((val*)NULL)) on <var_mmodule:nullable MModule> */
var_other44 = ((val*)NULL);
{
var45 = ((short int(*)(val* self, val* p0))(var_mmodule->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mmodule, var_other44); /* == on <var_mmodule:nullable MModule(MModule)>*/
}
var46 = !var45;
var42 = var46;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
var41 = var42;
}
if (var41){
{
{ /* Inline loader#ModelBuilder#mmodule2nmodule (self) on <self:ModelBuilder> */
var49 = self->attrs[COLOR_nit__loader__ModelBuilder___mmodule2nmodule].val; /* _mmodule2nmodule on <self:ModelBuilder> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule2nmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 765);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
var50 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var47, var_mmodule);
}
var = var50;
goto RET_LABEL;
} else {
}
{
{ /* Inline loader#ModulePath#filepath (var_file) on <var_file:nullable ModulePath(ModulePath)> */
var53 = var_file->attrs[COLOR_nit__loader__ModulePath___filepath].val; /* _filepath on <var_file:nullable ModulePath(ModulePath)> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filepath");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 786);
fatal_exit(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
var54 = nit__loader___ModelBuilder___load_module_ast(self, var51);
}
var_nmodule = var54;
if (var_nmodule == NULL) {
var55 = 1; /* is null */
} else {
var55 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nmodule,((val*)NULL)) on <var_nmodule:nullable AModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_nmodule,var_other) on <var_nmodule:nullable AModule(AModule)> */
var60 = var_nmodule == var_other;
var58 = var60;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
}
var56 = var58;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
var55 = var56;
}
if (var55){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline loader#ModulePath#mgroup (var_file) on <var_file:nullable ModulePath(ModulePath)> */
var63 = var_file->attrs[COLOR_nit__loader__ModulePath___mgroup].val; /* _mgroup on <var_file:nullable ModulePath(ModulePath)> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroup");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 789);
fatal_exit(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
{ /* Inline loader#ModulePath#name (var_file) on <var_file:nullable ModulePath(ModulePath)> */
var66 = var_file->attrs[COLOR_nit__loader__ModulePath___name].val; /* _name on <var_file:nullable ModulePath(ModulePath)> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 782);
fatal_exit(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
var67 = nit__loader___ModelBuilder___build_a_mmodule(self, var61, var64, var_nmodule);
}
var_mmodule = var67;
if (var_mmodule == NULL) {
var68 = 1; /* is null */
} else {
var68 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mmodule,((val*)NULL)) on <var_mmodule:nullable MModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mmodule,var_other) on <var_mmodule:nullable MModule(MModule)> */
var73 = var_mmodule == var_other;
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
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline loader#ModulePath#mmodule= (var_file,var_mmodule) on <var_file:nullable ModulePath(ModulePath)> */
var_file->attrs[COLOR_nit__loader__ModulePath___mmodule].val = var_mmodule; /* _mmodule on <var_file:nullable ModulePath(ModulePath)> */
RET_LABEL74:(void)0;
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
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : AModuleName */;
val* var11 /* : AModuleName */;
val* var12 /* : TId */;
val* var14 /* : TId */;
val* var15 /* : String */;
val* var_decl_name /* var decl_name: String */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : AModuleName */;
val* var22 /* : AModuleName */;
val* var23 /* : NativeArray[String] */;
static val* varonce;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : FlatString */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
val* var31 /* : FlatString */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
val* var35 /* : FlatString */;
val* var36 /* : String */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
val* var42 /* : Model */;
val* var44 /* : Model */;
val* var45 /* : nullable Array[MModule] */;
val* var_others /* var others: nullable Array[MModule] */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
val* var_ /* var : Array[MModule] */;
val* var51 /* : ArrayIterator[nullable Object] */;
val* var_52 /* var : ArrayIterator[MModule] */;
short int var53 /* : Bool */;
val* var54 /* : nullable Object */;
val* var_other55 /* var other: MModule */;
short int var56 /* : Bool */;
val* var57 /* : nullable MGroup */;
val* var59 /* : nullable MGroup */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
short int var_65 /* var : Bool */;
val* var66 /* : nullable MGroup */;
val* var68 /* : nullable MGroup */;
val* var69 /* : MProject */;
val* var71 /* : MProject */;
val* var72 /* : MProject */;
val* var74 /* : MProject */;
short int var75 /* : Bool */;
val* var_other77 /* var other: nullable Object */;
short int var78 /* : Bool */;
short int var80 /* : Bool */;
short int var81 /* : Bool */;
short int var82 /* : Bool */;
short int var84 /* : Bool */;
short int var86 /* : Bool */;
val* var_node /* var node: ANode */;
val* var87 /* : AModuleName */;
val* var89 /* : AModuleName */;
val* var91 /* : NativeArray[String] */;
static val* varonce90;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : NativeString */;
val* var95 /* : FlatString */;
static val* varonce96;
val* var97 /* : String */;
char* var98 /* : NativeString */;
val* var99 /* : FlatString */;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : NativeString */;
val* var103 /* : FlatString */;
val* var104 /* : String */;
val* var105 /* : Location */;
val* var107 /* : Location */;
val* var108 /* : String */;
val* var109 /* : String */;
val* var110 /* : MModule */;
val* var111 /* : Model */;
val* var113 /* : Model */;
val* var114 /* : Location */;
val* var116 /* : Location */;
val* var_mmodule /* var mmodule: MModule */;
val* var118 /* : Array[AModule] */;
val* var120 /* : Array[AModule] */;
val* var121 /* : HashMap[MModule, AModule] */;
val* var123 /* : HashMap[MModule, AModule] */;
val* var124 /* : Location */;
val* var126 /* : Location */;
val* var127 /* : nullable SourceFile */;
val* var129 /* : nullable SourceFile */;
val* var_source /* var source: nullable SourceFile */;
short int var130 /* : Bool */;
short int var131 /* : Bool */;
short int var133 /* : Bool */;
short int var134 /* : Bool */;
val* var135 /* : nullable MModule */;
val* var137 /* : nullable MModule */;
short int var138 /* : Bool */;
short int var139 /* : Bool */;
short int var141 /* : Bool */;
short int var143 /* : Bool */;
short int var145 /* : Bool */;
short int var146 /* : Bool */;
short int var148 /* : Bool */;
short int var149 /* : Bool */;
val* var150 /* : nullable ADoc */;
val* var152 /* : nullable ADoc */;
val* var_ndoc /* var ndoc: nullable ADoc */;
short int var153 /* : Bool */;
short int var154 /* : Bool */;
short int var156 /* : Bool */;
short int var157 /* : Bool */;
val* var158 /* : MDoc */;
val* var_mdoc /* var mdoc: MDoc */;
static val* varonce161;
val* var162 /* : String */;
char* var163 /* : NativeString */;
val* var164 /* : FlatString */;
val* var166 /* : NativeArray[String] */;
static val* varonce165;
static val* varonce167;
val* var168 /* : String */;
char* var169 /* : NativeString */;
val* var170 /* : FlatString */;
static val* varonce171;
val* var172 /* : String */;
char* var173 /* : NativeString */;
val* var174 /* : FlatString */;
val* var175 /* : String */;
val* var176 /* : String */;
static val* varonce177;
val* var178 /* : String */;
char* var179 /* : NativeString */;
val* var180 /* : FlatString */;
val* var181 /* : Array[AAnnotation] */;
short int var182 /* : Bool */;
short int var183 /* : Bool */;
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
if (var_decl == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_decl,((val*)NULL)) on <var_decl:nullable AModuledecl> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var_decl->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_decl, var_other); /* == on <var_decl:nullable AModuledecl(AModuledecl)>*/
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
{
{ /* Inline parser_nodes#AModuledecl#n_name (var_decl) on <var_decl:nullable AModuledecl(AModuledecl)> */
var11 = var_decl->attrs[COLOR_nit__parser_nodes__AModuledecl___n_name].val; /* _n_name on <var_decl:nullable AModuledecl(AModuledecl)> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1120);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline parser_nodes#AModuleName#n_id (var9) on <var9:AModuleName> */
var14 = var9->attrs[COLOR_nit__parser_nodes__AModuleName___n_id].val; /* _n_id on <var9:AModuleName> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2900);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = nit__lexer_work___Token___text(var12);
}
var_decl_name = var15;
{
{ /* Inline kernel#Object#!= (var_decl_name,var_mod_name) on <var_decl_name:String> */
var_other = var_mod_name;
{
var18 = ((short int(*)(val* self, val* p0))(var_decl_name->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_decl_name, var_other); /* == on <var_decl_name:String>*/
}
var19 = !var18;
var16 = var19;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
if (var16){
{
{ /* Inline parser_nodes#AModuledecl#n_name (var_decl) on <var_decl:nullable AModuledecl(AModuledecl)> */
var22 = var_decl->attrs[COLOR_nit__parser_nodes__AModuledecl___n_name].val; /* _n_name on <var_decl:nullable AModuledecl(AModuledecl)> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1120);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var23 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "Error: module name mismatch; declared ";
var27 = standard___standard__NativeString___to_s_with_length(var26, 38l);
var25 = var27;
varonce24 = var25;
}
((struct instance_standard__NativeArray*)var23)->values[0]=var25;
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = " file named ";
var31 = standard___standard__NativeString___to_s_with_length(var30, 12l);
var29 = var31;
varonce28 = var29;
}
((struct instance_standard__NativeArray*)var23)->values[2]=var29;
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = ".";
var35 = standard___standard__NativeString___to_s_with_length(var34, 1l);
var33 = var35;
varonce32 = var33;
}
((struct instance_standard__NativeArray*)var23)->values[4]=var33;
} else {
var23 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var23)->values[1]=var_decl_name;
((struct instance_standard__NativeArray*)var23)->values[3]=var_mod_name;
{
var36 = ((val*(*)(val* self))(var23->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var23); /* native_to_s on <var23:NativeArray[String]>*/
}
varonce = var23;
{
nit___nit__ModelBuilder___error(self, var20, var36); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
} else {
}
if (var_mgroup == NULL) {
var37 = 0; /* is null */
} else {
var37 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mgroup,((val*)NULL)) on <var_mgroup:nullable MGroup> */
var_other = ((val*)NULL);
{
var40 = ((short int(*)(val* self, val* p0))(var_mgroup->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mgroup, var_other); /* == on <var_mgroup:nullable MGroup(MGroup)>*/
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
{ /* Inline modelbuilder_base#ModelBuilder#model (self) on <self:ModelBuilder> */
var44 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 44);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
var45 = nit__mmodule___Model___get_mmodules_by_name(var42, var_mod_name);
}
var_others = var45;
if (var_others == NULL) {
var46 = 0; /* is null */
} else {
var46 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_others,((val*)NULL)) on <var_others:nullable Array[MModule]> */
var_other = ((val*)NULL);
{
var49 = ((short int(*)(val* self, val* p0))(var_others->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_others, var_other); /* == on <var_others:nullable Array[MModule](Array[MModule])>*/
}
var50 = !var49;
var47 = var50;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
var46 = var47;
}
if (var46){
var_ = var_others;
{
var51 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_52 = var51;
for(;;) {
{
var53 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_52);
}
if (var53){
{
var54 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_52);
}
var_other55 = var54;
{
{ /* Inline mmodule#MModule#mgroup (var_other55) on <var_other55:MModule> */
var59 = var_other55->attrs[COLOR_nit__mmodule__MModule___mgroup].val; /* _mgroup on <var_other55:MModule> */
var57 = var59;
RET_LABEL58:(void)0;
}
}
if (var57 == NULL) {
var60 = 0; /* is null */
} else {
var60 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var57,((val*)NULL)) on <var57:nullable MGroup> */
var_other = ((val*)NULL);
{
var63 = ((short int(*)(val* self, val* p0))(var57->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var57, var_other); /* == on <var57:nullable MGroup(MGroup)>*/
}
var64 = !var63;
var61 = var64;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
var60 = var61;
}
var_65 = var60;
if (var60){
{
{ /* Inline mmodule#MModule#mgroup (var_other55) on <var_other55:MModule> */
var68 = var_other55->attrs[COLOR_nit__mmodule__MModule___mgroup].val; /* _mgroup on <var_other55:MModule> */
var66 = var68;
RET_LABEL67:(void)0;
}
}
if (var66 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 641);
fatal_exit(1);
} else {
{ /* Inline mproject#MGroup#mproject (var66) on <var66:nullable MGroup> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 69);
fatal_exit(1);
}
var71 = var66->attrs[COLOR_nit__mproject__MGroup___mproject].val; /* _mproject on <var66:nullable MGroup> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproject");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 69);
fatal_exit(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
{
{ /* Inline mproject#MGroup#mproject (var_mgroup) on <var_mgroup:nullable MGroup(MGroup)> */
var74 = var_mgroup->attrs[COLOR_nit__mproject__MGroup___mproject].val; /* _mproject on <var_mgroup:nullable MGroup(MGroup)> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproject");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 69);
fatal_exit(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var69,var72) on <var69:MProject> */
var_other77 = var72;
{
{ /* Inline kernel#Object#is_same_instance (var69,var_other77) on <var69:MProject> */
var80 = var69 == var_other77;
var78 = var80;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
}
var75 = var78;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
}
var56 = var75;
} else {
var56 = var_65;
}
if (var56){
if (var_decl == NULL) {
var81 = 1; /* is null */
} else {
var81 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_decl,((val*)NULL)) on <var_decl:nullable AModuledecl> */
var_other77 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_decl,var_other77) on <var_decl:nullable AModuledecl(AModuledecl)> */
var86 = var_decl == var_other77;
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
var_node = var_nmodule;
} else {
{
{ /* Inline parser_nodes#AModuledecl#n_name (var_decl) on <var_decl:nullable AModuledecl(AModuledecl)> */
var89 = var_decl->attrs[COLOR_nit__parser_nodes__AModuledecl___n_name].val; /* _n_name on <var_decl:nullable AModuledecl(AModuledecl)> */
if (unlikely(var89 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1120);
fatal_exit(1);
}
var87 = var89;
RET_LABEL88:(void)0;
}
}
var_node = var87;
}
if (unlikely(varonce90==NULL)) {
var91 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce92!=NULL)) {
var93 = varonce92;
} else {
var94 = "Error: a module named `";
var95 = standard___standard__NativeString___to_s_with_length(var94, 23l);
var93 = var95;
varonce92 = var93;
}
((struct instance_standard__NativeArray*)var91)->values[0]=var93;
if (likely(varonce96!=NULL)) {
var97 = varonce96;
} else {
var98 = "` already exists at ";
var99 = standard___standard__NativeString___to_s_with_length(var98, 20l);
var97 = var99;
varonce96 = var97;
}
((struct instance_standard__NativeArray*)var91)->values[2]=var97;
if (likely(varonce100!=NULL)) {
var101 = varonce100;
} else {
var102 = ".";
var103 = standard___standard__NativeString___to_s_with_length(var102, 1l);
var101 = var103;
varonce100 = var101;
}
((struct instance_standard__NativeArray*)var91)->values[4]=var101;
} else {
var91 = varonce90;
varonce90 = NULL;
}
{
var104 = nit___nit__MModule___nit__model_base__MEntity__full_name(var_other55);
}
((struct instance_standard__NativeArray*)var91)->values[1]=var104;
{
{ /* Inline mmodule#MModule#location (var_other55) on <var_other55:MModule> */
var107 = var_other55->attrs[COLOR_nit__mmodule__MModule___location].val; /* _location on <var_other55:MModule> */
if (unlikely(var107 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 90);
fatal_exit(1);
}
var105 = var107;
RET_LABEL106:(void)0;
}
}
{
var108 = ((val*(*)(val* self))(var105->class->vft[COLOR_standard__string__Object__to_s]))(var105); /* to_s on <var105:Location>*/
}
((struct instance_standard__NativeArray*)var91)->values[3]=var108;
{
var109 = ((val*(*)(val* self))(var91->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var91); /* native_to_s on <var91:NativeArray[String]>*/
}
varonce90 = var91;
{
nit___nit__ModelBuilder___error(self, var_node, var109); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto BREAK_label;
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_52); /* Direct call array#ArrayIterator#next on <var_52:ArrayIterator[MModule]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_52); /* Direct call array#ArrayIterator#finish on <var_52:ArrayIterator[MModule]>*/
}
} else {
}
} else {
}
var110 = NEW_nit__MModule(&type_nit__MModule);
{
{ /* Inline modelbuilder_base#ModelBuilder#model (self) on <self:ModelBuilder> */
var113 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var113 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 44);
fatal_exit(1);
}
var111 = var113;
RET_LABEL112:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (var_nmodule) on <var_nmodule:AModule> */
var116 = var_nmodule->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var_nmodule:AModule> */
if (unlikely(var116 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var114 = var116;
RET_LABEL115:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var110->class->vft[COLOR_nit__mmodule__MModule__model_61d]))(var110, var111); /* model= on <var110:MModule>*/
}
{
((void(*)(val* self, val* p0))(var110->class->vft[COLOR_nit__mmodule__MModule__mgroup_61d]))(var110, var_mgroup); /* mgroup= on <var110:MModule>*/
}
{
((void(*)(val* self, val* p0))(var110->class->vft[COLOR_nit__mmodule__MModule__name_61d]))(var110, var_mod_name); /* name= on <var110:MModule>*/
}
{
((void(*)(val* self, val* p0))(var110->class->vft[COLOR_nit__mmodule__MModule__location_61d]))(var110, var114); /* location= on <var110:MModule>*/
}
{
((void(*)(val* self))(var110->class->vft[COLOR_standard__kernel__Object__init]))(var110); /* init on <var110:MModule>*/
}
var_mmodule = var110;
{
{ /* Inline loader#AModule#mmodule= (var_nmodule,var_mmodule) on <var_nmodule:AModule> */
var_nmodule->attrs[COLOR_nit__loader__AModule___mmodule].val = var_mmodule; /* _mmodule on <var_nmodule:AModule> */
RET_LABEL117:(void)0;
}
}
{
{ /* Inline loader#ModelBuilder#nmodules (self) on <self:ModelBuilder> */
var120 = self->attrs[COLOR_nit__loader__ModelBuilder___nmodules].val; /* _nmodules on <self:ModelBuilder> */
if (unlikely(var120 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _nmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 762);
fatal_exit(1);
}
var118 = var120;
RET_LABEL119:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var118, var_nmodule); /* Direct call array#Array#add on <var118:Array[AModule]>*/
}
{
{ /* Inline loader#ModelBuilder#mmodule2nmodule (self) on <self:ModelBuilder> */
var123 = self->attrs[COLOR_nit__loader__ModelBuilder___mmodule2nmodule].val; /* _mmodule2nmodule on <self:ModelBuilder> */
if (unlikely(var123 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule2nmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 765);
fatal_exit(1);
}
var121 = var123;
RET_LABEL122:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var121, var_mmodule, var_nmodule); /* Direct call hash_collection#HashMap#[]= on <var121:HashMap[MModule, AModule]>*/
}
{
{ /* Inline parser_nodes#ANode#location (var_nmodule) on <var_nmodule:AModule> */
var126 = var_nmodule->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var_nmodule:AModule> */
if (unlikely(var126 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var124 = var126;
RET_LABEL125:(void)0;
}
}
{
{ /* Inline location#Location#file (var124) on <var124:Location> */
var129 = var124->attrs[COLOR_nit__location__Location___file].val; /* _file on <var124:Location> */
var127 = var129;
RET_LABEL128:(void)0;
}
}
var_source = var127;
if (var_source == NULL) {
var130 = 0; /* is null */
} else {
var130 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_source,((val*)NULL)) on <var_source:nullable SourceFile> */
var_other = ((val*)NULL);
{
var133 = ((short int(*)(val* self, val* p0))(var_source->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_source, var_other); /* == on <var_source:nullable SourceFile(SourceFile)>*/
}
var134 = !var133;
var131 = var134;
goto RET_LABEL132;
RET_LABEL132:(void)0;
}
var130 = var131;
}
if (var130){
{
{ /* Inline loader#SourceFile#mmodule (var_source) on <var_source:nullable SourceFile(SourceFile)> */
var137 = var_source->attrs[COLOR_nit__loader__SourceFile___mmodule].val; /* _mmodule on <var_source:nullable SourceFile(SourceFile)> */
var135 = var137;
RET_LABEL136:(void)0;
}
}
if (var135 == NULL) {
var138 = 1; /* is null */
} else {
var138 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var135,((val*)NULL)) on <var135:nullable MModule> */
var_other77 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var135,var_other77) on <var135:nullable MModule(MModule)> */
var143 = var135 == var_other77;
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
if (unlikely(!var138)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 658);
fatal_exit(1);
}
{
{ /* Inline loader#SourceFile#mmodule= (var_source,var_mmodule) on <var_source:nullable SourceFile(SourceFile)> */
var_source->attrs[COLOR_nit__loader__SourceFile___mmodule].val = var_mmodule; /* _mmodule on <var_source:nullable SourceFile(SourceFile)> */
RET_LABEL144:(void)0;
}
}
} else {
}
if (var_decl == NULL) {
var145 = 0; /* is null */
} else {
var145 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_decl,((val*)NULL)) on <var_decl:nullable AModuledecl> */
var_other = ((val*)NULL);
{
var148 = ((short int(*)(val* self, val* p0))(var_decl->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_decl, var_other); /* == on <var_decl:nullable AModuledecl(AModuledecl)>*/
}
var149 = !var148;
var146 = var149;
goto RET_LABEL147;
RET_LABEL147:(void)0;
}
var145 = var146;
}
if (var145){
{
{ /* Inline parser_nodes#ADefinition#n_doc (var_decl) on <var_decl:nullable AModuledecl(AModuledecl)> */
var152 = var_decl->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <var_decl:nullable AModuledecl(AModuledecl)> */
var150 = var152;
RET_LABEL151:(void)0;
}
}
var_ndoc = var150;
if (var_ndoc == NULL) {
var153 = 0; /* is null */
} else {
var153 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ndoc,((val*)NULL)) on <var_ndoc:nullable ADoc> */
var_other = ((val*)NULL);
{
var156 = ((short int(*)(val* self, val* p0))(var_ndoc->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ndoc, var_other); /* == on <var_ndoc:nullable ADoc(ADoc)>*/
}
var157 = !var156;
var154 = var157;
goto RET_LABEL155;
RET_LABEL155:(void)0;
}
var153 = var154;
}
if (var153){
{
var158 = nit__modelbuilder_base___ADoc___to_mdoc(var_ndoc);
}
var_mdoc = var158;
{
{ /* Inline mdoc#MEntity#mdoc= (var_mmodule,var_mdoc) on <var_mmodule:MModule> */
var_mmodule->attrs[COLOR_nit__mdoc__MEntity___mdoc].val = var_mdoc; /* _mdoc on <var_mmodule:MModule> */
RET_LABEL159:(void)0;
}
}
{
{ /* Inline mdoc#MDoc#original_mentity= (var_mdoc,var_mmodule) on <var_mdoc:MDoc> */
var_mdoc->attrs[COLOR_nit__mdoc__MDoc___original_mentity].val = var_mmodule; /* _original_mentity on <var_mdoc:MDoc> */
RET_LABEL160:(void)0;
}
}
} else {
if (likely(varonce161!=NULL)) {
var162 = varonce161;
} else {
var163 = "missing-doc";
var164 = standard___standard__NativeString___to_s_with_length(var163, 11l);
var162 = var164;
varonce161 = var162;
}
if (unlikely(varonce165==NULL)) {
var166 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce167!=NULL)) {
var168 = varonce167;
} else {
var169 = "Documentation warning: Undocumented module `";
var170 = standard___standard__NativeString___to_s_with_length(var169, 44l);
var168 = var170;
varonce167 = var168;
}
((struct instance_standard__NativeArray*)var166)->values[0]=var168;
if (likely(varonce171!=NULL)) {
var172 = varonce171;
} else {
var173 = "`";
var174 = standard___standard__NativeString___to_s_with_length(var173, 1l);
var172 = var174;
varonce171 = var172;
}
((struct instance_standard__NativeArray*)var166)->values[2]=var172;
} else {
var166 = varonce165;
varonce165 = NULL;
}
{
var175 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_standard__string__Object__to_s]))(var_mmodule); /* to_s on <var_mmodule:MModule>*/
}
((struct instance_standard__NativeArray*)var166)->values[1]=var175;
{
var176 = ((val*(*)(val* self))(var166->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var166); /* native_to_s on <var166:NativeArray[String]>*/
}
varonce165 = var166;
{
nit___nit__ModelBuilder___advice(self, var_decl, var162, var176); /* Direct call modelbuilder_base#ModelBuilder#advice on <self:ModelBuilder>*/
}
}
if (likely(varonce177!=NULL)) {
var178 = varonce177;
} else {
var179 = "test_suite";
var180 = standard___standard__NativeString___to_s_with_length(var179, 10l);
var178 = var180;
varonce177 = var178;
}
{
var181 = nit___nit__Prod___get_annotations(var_decl, var178);
}
{
var182 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var181);
}
var183 = !var182;
{
{ /* Inline mmodule#MModule#is_test_suite= (var_mmodule,var183) on <var_mmodule:MModule> */
var_mmodule->attrs[COLOR_nit__mmodule__MModule___is_test_suite].s = var183; /* _is_test_suite on <var_mmodule:MModule> */
RET_LABEL184:(void)0;
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
short int var15 /* : Bool */;
int cltype;
int idtype;
short int var16 /* : Bool */;
val* var17 /* : nullable MGroup */;
val* var19 /* : nullable MGroup */;
val* var_mgroup /* var mgroup: nullable MGroup */;
val* var20 /* : AModuleName */;
val* var22 /* : AModuleName */;
val* var23 /* : nullable TQuad */;
val* var25 /* : nullable TQuad */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
val* var31 /* : AModuleName */;
val* var33 /* : AModuleName */;
val* var34 /* : ANodes[TId] */;
val* var36 /* : ANodes[TId] */;
val* var_37 /* var : ANodes[TId] */;
val* var38 /* : Iterator[ANode] */;
val* var_39 /* var : Iterator[TId] */;
short int var40 /* : Bool */;
val* var41 /* : nullable Object */;
val* var_grp /* var grp: TId */;
val* var42 /* : String */;
val* var43 /* : nullable ModulePath */;
val* var_path /* var path: nullable ModulePath */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
val* var_other47 /* var other: nullable Object */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
val* var52 /* : MGroup */;
val* var54 /* : MGroup */;
val* var56 /* : AModuleName */;
val* var58 /* : AModuleName */;
val* var59 /* : TId */;
val* var61 /* : TId */;
val* var62 /* : String */;
val* var_mod_name /* var mod_name: String */;
val* var63 /* : AModuleName */;
val* var65 /* : AModuleName */;
val* var66 /* : nullable MModule */;
val* var_sup /* var sup: nullable MModule */;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
short int var70 /* : Bool */;
short int var72 /* : Bool */;
val* var75 /* : AVisibility */;
val* var77 /* : AVisibility */;
val* var78 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: MVisibility */;
val* var79 /* : Sys */;
val* var80 /* : MVisibility */;
short int var81 /* : Bool */;
short int var83 /* : Bool */;
short int var85 /* : Bool */;
val* var86 /* : AVisibility */;
val* var88 /* : AVisibility */;
static val* varonce;
val* var89 /* : String */;
char* var90 /* : NativeString */;
val* var91 /* : FlatString */;
short int var93 /* : Bool */;
short int var95 /* : Bool */;
short int var97 /* : Bool */;
val* var98 /* : AModuleName */;
val* var100 /* : AModuleName */;
val* var102 /* : NativeArray[String] */;
static val* varonce101;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : NativeString */;
val* var106 /* : FlatString */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
val* var110 /* : FlatString */;
val* var111 /* : String */;
val* var112 /* : String */;
val* var114 /* : POSetElement[MModule] */;
val* var116 /* : POSetElement[MModule] */;
short int var117 /* : Bool */;
val* var118 /* : AModuleName */;
val* var120 /* : AModuleName */;
val* var122 /* : NativeArray[String] */;
static val* varonce121;
static val* varonce123;
val* var124 /* : String */;
char* var125 /* : NativeString */;
val* var126 /* : FlatString */;
static val* varonce127;
val* var128 /* : String */;
char* var129 /* : NativeString */;
val* var130 /* : FlatString */;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : NativeString */;
val* var134 /* : FlatString */;
val* var135 /* : String */;
val* var136 /* : String */;
val* var137 /* : String */;
static val* varonce140;
val* var141 /* : String */;
char* var142 /* : NativeString */;
val* var143 /* : FlatString */;
val* var_mod_name144 /* var mod_name: String */;
val* var145 /* : nullable MModule */;
val* var_sup146 /* var sup: nullable MModule */;
short int var147 /* : Bool */;
short int var148 /* : Bool */;
short int var150 /* : Bool */;
short int var152 /* : Bool */;
val* var154 /* : Sys */;
val* var155 /* : MVisibility */;
val* var156 /* : ToolContext */;
val* var158 /* : ToolContext */;
val* var160 /* : NativeArray[String] */;
static val* varonce159;
static val* varonce161;
val* var162 /* : String */;
char* var163 /* : NativeString */;
val* var164 /* : FlatString */;
val* var165 /* : String */;
static val* varonce166;
val* var167 /* : String */;
char* var168 /* : NativeString */;
val* var169 /* : FlatString */;
val* var170 /* : String */;
val* var171 /* : String */;
val* var172 /* : POSetElement[MModule] */;
val* var174 /* : POSetElement[MModule] */;
val* var175 /* : Collection[nullable Object] */;
val* var_176 /* var : Collection[MModule] */;
val* var177 /* : Iterator[nullable Object] */;
val* var_178 /* var : Iterator[MModule] */;
short int var179 /* : Bool */;
val* var180 /* : nullable Object */;
val* var_sup181 /* var sup: MModule */;
val* var182 /* : String */;
val* var184 /* : String */;
static val* varonce185;
val* var186 /* : String */;
char* var187 /* : NativeString */;
val* var188 /* : FlatString */;
short int var189 /* : Bool */;
val* var190 /* : Sys */;
val* var191 /* : MVisibility */;
val* var193 /* : POSetElement[MModule] */;
val* var195 /* : POSetElement[MModule] */;
val* var196 /* : Collection[nullable Object] */;
val* var_directs /* var directs: Collection[MModule] */;
val* var197 /* : ANodes[AImport] */;
val* var199 /* : ANodes[AImport] */;
val* var_200 /* var : ANodes[AImport] */;
val* var201 /* : Iterator[ANode] */;
val* var_202 /* var : Iterator[AImport] */;
short int var203 /* : Bool */;
val* var204 /* : nullable Object */;
val* var_nim /* var nim: AImport */;
short int var205 /* : Bool */;
int cltype206;
int idtype207;
short int var208 /* : Bool */;
val* var210 /* : nullable MModule */;
val* var212 /* : nullable MModule */;
val* var_im /* var im: nullable MModule */;
short int var213 /* : Bool */;
short int var214 /* : Bool */;
short int var216 /* : Bool */;
short int var218 /* : Bool */;
short int var219 /* : Bool */;
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
{
{ /* Inline loader#AModule#is_importation_done= (var_nmodule,1) on <var_nmodule:AModule> */
var_nmodule->attrs[COLOR_nit__loader__AModule___is_importation_done].s = 1; /* _is_importation_done on <var_nmodule:AModule> */
RET_LABEL3:(void)0;
}
}
{
{ /* Inline loader#AModule#mmodule (var_nmodule) on <var_nmodule:AModule> */
var6 = var_nmodule->attrs[COLOR_nit__loader__AModule___mmodule].val; /* _mmodule on <var_nmodule:AModule> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 686);
fatal_exit(1);
}
var_mmodule = var4;
var_stdimport = 1;
var7 = NEW_standard__Array(&type_standard__Array__nit__MModule);
{
standard___standard__Array___standard__kernel__Object__init(var7); /* Direct call array#Array#init on <var7:Array[MModule]>*/
}
var_imported_modules = var7;
{
{ /* Inline parser_nodes#AModule#n_imports (var_nmodule) on <var_nmodule:AModule> */
var10 = var_nmodule->attrs[COLOR_nit__parser_nodes__AModule___n_imports].val; /* _n_imports on <var_nmodule:AModule> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_imports");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1090);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_ = var8;
{
var11 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_);
}
var_12 = var11;
for(;;) {
{
var13 = ((short int(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_12); /* is_ok on <var_12:Iterator[AImport]>*/
}
if (var13){
{
var14 = ((val*(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_12); /* item on <var_12:Iterator[AImport]>*/
}
var_aimport = var14;
var_stdimport = 0;
/* <var_aimport:AImport> isa AStdImport */
cltype = type_nit__AStdImport.color;
idtype = type_nit__AStdImport.id;
if(cltype >= var_aimport->type->table_size) {
var15 = 0;
} else {
var15 = var_aimport->type->type_table[cltype] == idtype;
}
var16 = !var15;
if (var16){
goto BREAK_label;
} else {
}
{
{ /* Inline mmodule#MModule#mgroup (var_mmodule) on <var_mmodule:MModule> */
var19 = var_mmodule->attrs[COLOR_nit__mmodule__MModule___mgroup].val; /* _mgroup on <var_mmodule:MModule> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_mgroup = var17;
{
{ /* Inline parser_nodes#AStdImport#n_name (var_aimport) on <var_aimport:AImport(AStdImport)> */
var22 = var_aimport->attrs[COLOR_nit__parser_nodes__AStdImport___n_name].val; /* _n_name on <var_aimport:AImport(AStdImport)> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1138);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline parser_nodes#AModuleName#n_quad (var20) on <var20:AModuleName> */
var25 = var20->attrs[COLOR_nit__parser_nodes__AModuleName___n_quad].val; /* _n_quad on <var20:AModuleName> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
if (var23 == NULL) {
var26 = 0; /* is null */
} else {
var26 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var23,((val*)NULL)) on <var23:nullable TQuad> */
var_other = ((val*)NULL);
{
var29 = ((short int(*)(val* self, val* p0))(var23->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var23, var_other); /* == on <var23:nullable TQuad(TQuad)>*/
}
var30 = !var29;
var27 = var30;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
var26 = var27;
}
if (var26){
var_mgroup = ((val*)NULL);
} else {
}
{
{ /* Inline parser_nodes#AStdImport#n_name (var_aimport) on <var_aimport:AImport(AStdImport)> */
var33 = var_aimport->attrs[COLOR_nit__parser_nodes__AStdImport___n_name].val; /* _n_name on <var_aimport:AImport(AStdImport)> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1138);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline parser_nodes#AModuleName#n_path (var31) on <var31:AModuleName> */
var36 = var31->attrs[COLOR_nit__parser_nodes__AModuleName___n_path].val; /* _n_path on <var31:AModuleName> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2897);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
var_37 = var34;
{
var38 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_37);
}
var_39 = var38;
for(;;) {
{
var40 = ((short int(*)(val* self))((((long)var_39&3)?class_info[((long)var_39&3)]:var_39->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_39); /* is_ok on <var_39:Iterator[TId]>*/
}
if (var40){
{
var41 = ((val*(*)(val* self))((((long)var_39&3)?class_info[((long)var_39&3)]:var_39->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_39); /* item on <var_39:Iterator[TId]>*/
}
var_grp = var41;
{
var42 = nit__lexer_work___Token___text(var_grp);
}
{
var43 = nit__loader___ModelBuilder___search_mmodule_by_name(self, var_grp, var_mgroup, var42);
}
var_path = var43;
if (var_path == NULL) {
var44 = 1; /* is null */
} else {
var44 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_path,((val*)NULL)) on <var_path:nullable ModulePath> */
var_other47 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_path,var_other47) on <var_path:nullable ModulePath(ModulePath)> */
var50 = var_path == var_other47;
var48 = var50;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
var45 = var48;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
var44 = var45;
}
if (var44){
{
{ /* Inline loader#AModule#mmodule= (var_nmodule,((val*)NULL)) on <var_nmodule:AModule> */
var_nmodule->attrs[COLOR_nit__loader__AModule___mmodule].val = ((val*)NULL); /* _mmodule on <var_nmodule:AModule> */
RET_LABEL51:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
{ /* Inline loader#ModulePath#mgroup (var_path) on <var_path:nullable ModulePath(ModulePath)> */
var54 = var_path->attrs[COLOR_nit__loader__ModulePath___mgroup].val; /* _mgroup on <var_path:nullable ModulePath(ModulePath)> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroup");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 789);
fatal_exit(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
var_mgroup = var52;
{
((void(*)(val* self))((((long)var_39&3)?class_info[((long)var_39&3)]:var_39->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_39); /* next on <var_39:Iterator[TId]>*/
}
} else {
goto BREAK_label55;
}
}
BREAK_label55: (void)0;
{
((void(*)(val* self))((((long)var_39&3)?class_info[((long)var_39&3)]:var_39->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_39); /* finish on <var_39:Iterator[TId]>*/
}
{
{ /* Inline parser_nodes#AStdImport#n_name (var_aimport) on <var_aimport:AImport(AStdImport)> */
var58 = var_aimport->attrs[COLOR_nit__parser_nodes__AStdImport___n_name].val; /* _n_name on <var_aimport:AImport(AStdImport)> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1138);
fatal_exit(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
{ /* Inline parser_nodes#AModuleName#n_id (var56) on <var56:AModuleName> */
var61 = var56->attrs[COLOR_nit__parser_nodes__AModuleName___n_id].val; /* _n_id on <var56:AModuleName> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2900);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
var62 = nit__lexer_work___Token___text(var59);
}
var_mod_name = var62;
{
{ /* Inline parser_nodes#AStdImport#n_name (var_aimport) on <var_aimport:AImport(AStdImport)> */
var65 = var_aimport->attrs[COLOR_nit__parser_nodes__AStdImport___n_name].val; /* _n_name on <var_aimport:AImport(AStdImport)> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1138);
fatal_exit(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
var66 = nit__loader___ModelBuilder___get_mmodule_by_name(self, var63, var_mgroup, var_mod_name);
}
var_sup = var66;
if (var_sup == NULL) {
var67 = 1; /* is null */
} else {
var67 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_sup,((val*)NULL)) on <var_sup:nullable MModule> */
var_other47 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_sup,var_other47) on <var_sup:nullable MModule(MModule)> */
var72 = var_sup == var_other47;
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
{
{ /* Inline loader#AModule#mmodule= (var_nmodule,((val*)NULL)) on <var_nmodule:AModule> */
var_nmodule->attrs[COLOR_nit__loader__AModule___mmodule].val = ((val*)NULL); /* _mmodule on <var_nmodule:AModule> */
RET_LABEL73:(void)0;
}
}
goto BREAK_label;
} else {
}
{
{ /* Inline loader#AStdImport#mmodule= (var_aimport,var_sup) on <var_aimport:AImport(AStdImport)> */
var_aimport->attrs[COLOR_nit__loader__AStdImport___mmodule].val = var_sup; /* _mmodule on <var_aimport:AImport(AStdImport)> */
RET_LABEL74:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_imported_modules, var_sup); /* Direct call array#Array#add on <var_imported_modules:Array[MModule]>*/
}
{
{ /* Inline parser_nodes#AImport#n_visibility (var_aimport) on <var_aimport:AImport(AStdImport)> */
var77 = var_aimport->attrs[COLOR_nit__parser_nodes__AImport___n_visibility].val; /* _n_visibility on <var_aimport:AImport(AStdImport)> */
if (unlikely(var77 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1128);
fatal_exit(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
{
var78 = ((val*(*)(val* self))(var75->class->vft[COLOR_nit__modelbuilder_base__AVisibility__mvisibility]))(var75); /* mvisibility on <var75:AVisibility>*/
}
var_mvisibility = var78;
var79 = glob_sys;
{
var80 = nit__model_base___standard__Sys___protected_visibility(var79);
}
{
{ /* Inline kernel#Object#== (var_mvisibility,var80) on <var_mvisibility:MVisibility> */
var_other47 = var80;
{
{ /* Inline kernel#Object#is_same_instance (var_mvisibility,var_other47) on <var_mvisibility:MVisibility> */
var85 = var_mvisibility == var_other47;
var83 = var85;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
}
var81 = var83;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
}
if (var81){
{
{ /* Inline parser_nodes#AImport#n_visibility (var_aimport) on <var_aimport:AImport(AStdImport)> */
var88 = var_aimport->attrs[COLOR_nit__parser_nodes__AImport___n_visibility].val; /* _n_visibility on <var_aimport:AImport(AStdImport)> */
if (unlikely(var88 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1128);
fatal_exit(1);
}
var86 = var88;
RET_LABEL87:(void)0;
}
}
if (likely(varonce!=NULL)) {
var89 = varonce;
} else {
var90 = "Error: only properties can be protected.";
var91 = standard___standard__NativeString___to_s_with_length(var90, 40l);
var89 = var91;
varonce = var89;
}
{
nit___nit__ModelBuilder___error(self, var86, var89); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
{
{ /* Inline loader#AModule#mmodule= (var_nmodule,((val*)NULL)) on <var_nmodule:AModule> */
var_nmodule->attrs[COLOR_nit__loader__AModule___mmodule].val = ((val*)NULL); /* _mmodule on <var_nmodule:AModule> */
RET_LABEL92:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Object#== (var_sup,var_mmodule) on <var_sup:nullable MModule(MModule)> */
var_other47 = var_mmodule;
{
{ /* Inline kernel#Object#is_same_instance (var_sup,var_other47) on <var_sup:nullable MModule(MModule)> */
var97 = var_sup == var_other47;
var95 = var97;
goto RET_LABEL96;
RET_LABEL96:(void)0;
}
}
var93 = var95;
goto RET_LABEL94;
RET_LABEL94:(void)0;
}
}
if (var93){
{
{ /* Inline parser_nodes#AStdImport#n_name (var_aimport) on <var_aimport:AImport(AStdImport)> */
var100 = var_aimport->attrs[COLOR_nit__parser_nodes__AStdImport___n_name].val; /* _n_name on <var_aimport:AImport(AStdImport)> */
if (unlikely(var100 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1138);
fatal_exit(1);
}
var98 = var100;
RET_LABEL99:(void)0;
}
}
if (unlikely(varonce101==NULL)) {
var102 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce103!=NULL)) {
var104 = varonce103;
} else {
var105 = "Error: dependency loop in module ";
var106 = standard___standard__NativeString___to_s_with_length(var105, 33l);
var104 = var106;
varonce103 = var104;
}
((struct instance_standard__NativeArray*)var102)->values[0]=var104;
if (likely(varonce107!=NULL)) {
var108 = varonce107;
} else {
var109 = ".";
var110 = standard___standard__NativeString___to_s_with_length(var109, 1l);
var108 = var110;
varonce107 = var108;
}
((struct instance_standard__NativeArray*)var102)->values[2]=var108;
} else {
var102 = varonce101;
varonce101 = NULL;
}
{
var111 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_standard__string__Object__to_s]))(var_mmodule); /* to_s on <var_mmodule:MModule>*/
}
((struct instance_standard__NativeArray*)var102)->values[1]=var111;
{
var112 = ((val*(*)(val* self))(var102->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var102); /* native_to_s on <var102:NativeArray[String]>*/
}
varonce101 = var102;
{
nit___nit__ModelBuilder___error(self, var98, var112); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
{
{ /* Inline loader#AModule#mmodule= (var_nmodule,((val*)NULL)) on <var_nmodule:AModule> */
var_nmodule->attrs[COLOR_nit__loader__AModule___mmodule].val = ((val*)NULL); /* _mmodule on <var_nmodule:AModule> */
RET_LABEL113:(void)0;
}
}
} else {
}
{
{ /* Inline mmodule#MModule#in_importation (var_sup) on <var_sup:nullable MModule(MModule)> */
var116 = var_sup->attrs[COLOR_nit__mmodule__MModule___in_importation].val; /* _in_importation on <var_sup:nullable MModule(MModule)> */
if (unlikely(var116 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 96);
fatal_exit(1);
}
var114 = var116;
RET_LABEL115:(void)0;
}
}
{
var117 = poset___poset__POSetElement____60d(var114, var_mmodule);
}
if (var117){
{
{ /* Inline parser_nodes#AStdImport#n_name (var_aimport) on <var_aimport:AImport(AStdImport)> */
var120 = var_aimport->attrs[COLOR_nit__parser_nodes__AStdImport___n_name].val; /* _n_name on <var_aimport:AImport(AStdImport)> */
if (unlikely(var120 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1138);
fatal_exit(1);
}
var118 = var120;
RET_LABEL119:(void)0;
}
}
if (unlikely(varonce121==NULL)) {
var122 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce123!=NULL)) {
var124 = varonce123;
} else {
var125 = "Error: dependency loop between modules ";
var126 = standard___standard__NativeString___to_s_with_length(var125, 39l);
var124 = var126;
varonce123 = var124;
}
((struct instance_standard__NativeArray*)var122)->values[0]=var124;
if (likely(varonce127!=NULL)) {
var128 = varonce127;
} else {
var129 = " and ";
var130 = standard___standard__NativeString___to_s_with_length(var129, 5l);
var128 = var130;
varonce127 = var128;
}
((struct instance_standard__NativeArray*)var122)->values[2]=var128;
if (likely(varonce131!=NULL)) {
var132 = varonce131;
} else {
var133 = ".";
var134 = standard___standard__NativeString___to_s_with_length(var133, 1l);
var132 = var134;
varonce131 = var132;
}
((struct instance_standard__NativeArray*)var122)->values[4]=var132;
} else {
var122 = varonce121;
varonce121 = NULL;
}
{
var135 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_standard__string__Object__to_s]))(var_mmodule); /* to_s on <var_mmodule:MModule>*/
}
((struct instance_standard__NativeArray*)var122)->values[1]=var135;
{
var136 = ((val*(*)(val* self))(var_sup->class->vft[COLOR_standard__string__Object__to_s]))(var_sup); /* to_s on <var_sup:nullable MModule(MModule)>*/
}
((struct instance_standard__NativeArray*)var122)->values[3]=var136;
{
var137 = ((val*(*)(val* self))(var122->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var122); /* native_to_s on <var122:NativeArray[String]>*/
}
varonce121 = var122;
{
nit___nit__ModelBuilder___error(self, var118, var137); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
{
{ /* Inline loader#AModule#mmodule= (var_nmodule,((val*)NULL)) on <var_nmodule:AModule> */
var_nmodule->attrs[COLOR_nit__loader__AModule___mmodule].val = ((val*)NULL); /* _mmodule on <var_nmodule:AModule> */
RET_LABEL138:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
nit___nit__MModule___set_visibility_for(var_mmodule, var_sup, var_mvisibility); /* Direct call mmodule#MModule#set_visibility_for on <var_mmodule:MModule>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_12); /* next on <var_12:Iterator[AImport]>*/
}
} else {
goto BREAK_label139;
}
}
BREAK_label139: (void)0;
{
((void(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_12); /* finish on <var_12:Iterator[AImport]>*/
}
if (var_stdimport){
if (likely(varonce140!=NULL)) {
var141 = varonce140;
} else {
var142 = "standard";
var143 = standard___standard__NativeString___to_s_with_length(var142, 8l);
var141 = var143;
varonce140 = var141;
}
var_mod_name144 = var141;
{
var145 = nit__loader___ModelBuilder___get_mmodule_by_name(self, var_nmodule, ((val*)NULL), var_mod_name144);
}
var_sup146 = var145;
if (var_sup146 == NULL) {
var147 = 1; /* is null */
} else {
var147 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_sup146,((val*)NULL)) on <var_sup146:nullable MModule> */
var_other47 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_sup146,var_other47) on <var_sup146:nullable MModule(MModule)> */
var152 = var_sup146 == var_other47;
var150 = var152;
goto RET_LABEL151;
RET_LABEL151:(void)0;
}
}
var148 = var150;
goto RET_LABEL149;
RET_LABEL149:(void)0;
}
var147 = var148;
}
if (var147){
{
{ /* Inline loader#AModule#mmodule= (var_nmodule,((val*)NULL)) on <var_nmodule:AModule> */
var_nmodule->attrs[COLOR_nit__loader__AModule___mmodule].val = ((val*)NULL); /* _mmodule on <var_nmodule:AModule> */
RET_LABEL153:(void)0;
}
}
} else {
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_imported_modules, var_sup146); /* Direct call array#Array#add on <var_imported_modules:Array[MModule]>*/
}
var154 = glob_sys;
{
var155 = nit__model_base___standard__Sys___public_visibility(var154);
}
{
nit___nit__MModule___set_visibility_for(var_mmodule, var_sup146, var155); /* Direct call mmodule#MModule#set_visibility_for on <var_mmodule:MModule>*/
}
}
} else {
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var158 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var158 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var156 = var158;
RET_LABEL157:(void)0;
}
}
if (unlikely(varonce159==NULL)) {
var160 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce161!=NULL)) {
var162 = varonce161;
} else {
var163 = " imports ";
var164 = standard___standard__NativeString___to_s_with_length(var163, 9l);
var162 = var164;
varonce161 = var162;
}
((struct instance_standard__NativeArray*)var160)->values[1]=var162;
} else {
var160 = varonce159;
varonce159 = NULL;
}
{
var165 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_standard__string__Object__to_s]))(var_mmodule); /* to_s on <var_mmodule:MModule>*/
}
((struct instance_standard__NativeArray*)var160)->values[0]=var165;
if (likely(varonce166!=NULL)) {
var167 = varonce166;
} else {
var168 = ", ";
var169 = standard___standard__NativeString___to_s_with_length(var168, 2l);
var167 = var169;
varonce166 = var167;
}
{
var170 = standard__string___Collection___join(var_imported_modules, var167);
}
((struct instance_standard__NativeArray*)var160)->values[2]=var170;
{
var171 = ((val*(*)(val* self))(var160->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var160); /* native_to_s on <var160:NativeArray[String]>*/
}
varonce159 = var160;
{
nit___nit__ToolContext___info(var156, var171, 3l); /* Direct call toolcontext#ToolContext#info on <var156:ToolContext>*/
}
{
nit___nit__MModule___set_imported_mmodules(var_mmodule, var_imported_modules); /* Direct call mmodule#MModule#set_imported_mmodules on <var_mmodule:MModule>*/
}
{
{ /* Inline mmodule#MModule#in_importation (var_mmodule) on <var_mmodule:MModule> */
var174 = var_mmodule->attrs[COLOR_nit__mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var174 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 96);
fatal_exit(1);
}
var172 = var174;
RET_LABEL173:(void)0;
}
}
{
var175 = poset___poset__POSetElement___greaters(var172);
}
var_176 = var175;
{
var177 = ((val*(*)(val* self))((((long)var_176&3)?class_info[((long)var_176&3)]:var_176->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_176); /* iterator on <var_176:Collection[MModule]>*/
}
var_178 = var177;
for(;;) {
{
var179 = ((short int(*)(val* self))((((long)var_178&3)?class_info[((long)var_178&3)]:var_178->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_178); /* is_ok on <var_178:Iterator[MModule]>*/
}
if (var179){
{
var180 = ((val*(*)(val* self))((((long)var_178&3)?class_info[((long)var_178&3)]:var_178->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_178); /* item on <var_178:Iterator[MModule]>*/
}
var_sup181 = var180;
{
{ /* Inline mmodule#MModule#name (var_sup181) on <var_sup181:MModule> */
var184 = var_sup181->attrs[COLOR_nit__mmodule__MModule___name].val; /* _name on <var_sup181:MModule> */
if (unlikely(var184 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 87);
fatal_exit(1);
}
var182 = var184;
RET_LABEL183:(void)0;
}
}
if (likely(varonce185!=NULL)) {
var186 = varonce185;
} else {
var187 = "standard";
var188 = standard___standard__NativeString___to_s_with_length(var187, 8l);
var186 = var188;
varonce185 = var186;
}
{
var189 = ((short int(*)(val* self, val* p0))(var182->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var182, var186); /* == on <var182:String>*/
}
if (var189){
var190 = glob_sys;
{
var191 = nit__model_base___standard__Sys___public_visibility(var190);
}
{
nit___nit__MModule___set_visibility_for(var_mmodule, var_sup181, var191); /* Direct call mmodule#MModule#set_visibility_for on <var_mmodule:MModule>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_178&3)?class_info[((long)var_178&3)]:var_178->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_178); /* next on <var_178:Iterator[MModule]>*/
}
} else {
goto BREAK_label192;
}
}
BREAK_label192: (void)0;
{
((void(*)(val* self))((((long)var_178&3)?class_info[((long)var_178&3)]:var_178->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_178); /* finish on <var_178:Iterator[MModule]>*/
}
{
{ /* Inline mmodule#MModule#in_importation (var_mmodule) on <var_mmodule:MModule> */
var195 = var_mmodule->attrs[COLOR_nit__mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var195 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 96);
fatal_exit(1);
}
var193 = var195;
RET_LABEL194:(void)0;
}
}
{
var196 = poset___poset__POSetElement___direct_greaters(var193);
}
var_directs = var196;
{
{ /* Inline parser_nodes#AModule#n_imports (var_nmodule) on <var_nmodule:AModule> */
var199 = var_nmodule->attrs[COLOR_nit__parser_nodes__AModule___n_imports].val; /* _n_imports on <var_nmodule:AModule> */
if (unlikely(var199 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_imports");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1090);
fatal_exit(1);
}
var197 = var199;
RET_LABEL198:(void)0;
}
}
var_200 = var197;
{
var201 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_200);
}
var_202 = var201;
for(;;) {
{
var203 = ((short int(*)(val* self))((((long)var_202&3)?class_info[((long)var_202&3)]:var_202->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_202); /* is_ok on <var_202:Iterator[AImport]>*/
}
if (var203){
{
var204 = ((val*(*)(val* self))((((long)var_202&3)?class_info[((long)var_202&3)]:var_202->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_202); /* item on <var_202:Iterator[AImport]>*/
}
var_nim = var204;
/* <var_nim:AImport> isa AStdImport */
cltype206 = type_nit__AStdImport.color;
idtype207 = type_nit__AStdImport.id;
if(cltype206 >= var_nim->type->table_size) {
var205 = 0;
} else {
var205 = var_nim->type->type_table[cltype206] == idtype207;
}
var208 = !var205;
if (var208){
goto BREAK_label209;
} else {
}
{
{ /* Inline loader#AStdImport#mmodule (var_nim) on <var_nim:AImport(AStdImport)> */
var212 = var_nim->attrs[COLOR_nit__loader__AStdImport___mmodule].val; /* _mmodule on <var_nim:AImport(AStdImport)> */
var210 = var212;
RET_LABEL211:(void)0;
}
}
var_im = var210;
if (var_im == NULL) {
var213 = 1; /* is null */
} else {
var213 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_im,((val*)NULL)) on <var_im:nullable MModule> */
var_other47 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_im,var_other47) on <var_im:nullable MModule(MModule)> */
var218 = var_im == var_other47;
var216 = var218;
goto RET_LABEL217;
RET_LABEL217:(void)0;
}
}
var214 = var216;
goto RET_LABEL215;
RET_LABEL215:(void)0;
}
var213 = var214;
}
if (var213){
goto BREAK_label209;
} else {
}
{
var219 = ((short int(*)(val* self, val* p0))((((long)var_directs&3)?class_info[((long)var_directs&3)]:var_directs->class)->vft[COLOR_standard__abstract_collection__Collection__has]))(var_directs, var_im); /* has on <var_directs:Collection[MModule]>*/
}
if (var219){
goto BREAK_label209;
} else {
}
BREAK_label209: (void)0;
{
((void(*)(val* self))((((long)var_202&3)?class_info[((long)var_202&3)]:var_202->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_202); /* next on <var_202:Iterator[AImport]>*/
}
} else {
goto BREAK_label220;
}
}
BREAK_label220: (void)0;
{
((void(*)(val* self))((((long)var_202&3)?class_info[((long)var_202&3)]:var_202->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_202); /* finish on <var_202:Iterator[AImport]>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 762);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 765);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 765);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 782);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 786);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 789);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 786);
fatal_exit(1);
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
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__ModulePath___standard__kernel__Object__init]))(self); /* init on <self:ModulePath>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 799);
fatal_exit(1);
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
