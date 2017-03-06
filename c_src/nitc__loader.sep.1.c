#include "nitc__loader.sep.0.h"
/* method loader$ToolContext$opt_path for (self: ToolContext): OptionArray */
val* nitc__loader___ToolContext___opt_path(val* self) {
val* var /* : OptionArray */;
val* var1 /* : OptionArray */;
var1 = self->attrs[COLOR_nitc__loader__ToolContext___opt_path].val; /* _opt_path on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 44);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader$ToolContext$opt_only_metamodel for (self: ToolContext): OptionBool */
val* nitc__loader___ToolContext___opt_only_metamodel(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__loader__ToolContext___opt_only_metamodel].val; /* _opt_only_metamodel on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_only_metamodel");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 47);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader$ToolContext$opt_only_parse for (self: ToolContext): OptionBool */
val* nitc__loader___ToolContext___opt_only_parse(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__loader__ToolContext___opt_only_parse].val; /* _opt_only_parse on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_only_parse");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 50);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader$ToolContext$init for (self: ToolContext) */
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
{ /* Inline loader$ToolContext$opt_path (self) on <self:ToolContext> */
var5 = self->attrs[COLOR_nitc__loader__ToolContext___opt_path].val; /* _opt_path on <self:ToolContext> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 44);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline loader$ToolContext$opt_only_parse (self) on <self:ToolContext> */
var8 = self->attrs[COLOR_nitc__loader__ToolContext___opt_only_parse].val; /* _opt_only_parse on <self:ToolContext> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_only_parse");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 50);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline loader$ToolContext$opt_only_metamodel (self) on <self:ToolContext> */
var11 = self->attrs[COLOR_nitc__loader__ToolContext___opt_only_metamodel].val; /* _opt_only_metamodel on <self:ToolContext> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
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
var13 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__opts__Option);
((struct instance_core__NativeArray*)var13)->values[0] = (val*) var3;
((struct instance_core__NativeArray*)var13)->values[1] = (val*) var6;
((struct instance_core__NativeArray*)var13)->values[2] = (val*) var9;
{
((void(*)(val* self, val* p0, long p1))(var12->class->vft[COLOR_core__array__Array__with_native]))(var12, var13, 3l); /* with_native on <var12:Array[Option]>*/
}
}
{
opts___opts__OptionContext___add_option(var, var12); /* Direct call opts$OptionContext$add_option on <var:OptionContext>*/
}
RET_LABEL:;
}
/* method loader$ModelBuilder$init for (self: ModelBuilder) */
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
char* var13 /* : CString */;
val* var14 /* : String */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Int */;
val* var17 /* : nullable Bool */;
val* var18 /* : nullable Bool */;
val* var19 /* : String */;
val* var_path_env /* var path_env: String */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : Array[String] */;
val* var24 /* : Array[String] */;
val* var25 /* : Array[String] */;
val* var26 /* : Pattern */;
val* var27 /* : ToolContext */;
val* var29 /* : ToolContext */;
val* var30 /* : nullable String */;
val* var32 /* : nullable String */;
val* var_nit_dir /* var nit_dir: nullable String */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : CString */;
val* var41 /* : String */;
val* var42 /* : nullable Int */;
val* var43 /* : nullable Int */;
val* var44 /* : nullable Bool */;
val* var45 /* : nullable Bool */;
val* var46 /* : String */;
val* var_libname /* var libname: String */;
short int var47 /* : Bool */;
val* var48 /* : Array[String] */;
val* var50 /* : Array[String] */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : CString */;
val* var54 /* : String */;
val* var55 /* : nullable Int */;
val* var56 /* : nullable Int */;
val* var57 /* : nullable Bool */;
val* var58 /* : nullable Bool */;
val* var59 /* : String */;
short int var60 /* : Bool */;
val* var61 /* : Array[String] */;
val* var63 /* : Array[String] */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc__loader___ModelBuilder___core__kernel__Object__init]))(self); /* init on <self:ModelBuilder>*/
}
{
{ /* Inline loader$ModelBuilder$paths (self) on <self:ModelBuilder> */
var2 = self->attrs[COLOR_nitc__loader__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 213);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var5 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline loader$ToolContext$opt_path (var3) on <var3:ToolContext> */
var8 = var3->attrs[COLOR_nitc__loader__ToolContext___opt_path].val; /* _opt_path on <var3:ToolContext> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 44);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline opts$Option$value (var6) on <var6:OptionArray> */
var11 = var6->attrs[COLOR_opts__Option___value].val; /* _value on <var6:OptionArray> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
core___core__Sequence___append(var, var9); /* Direct call abstract_collection$Sequence$append on <var:Array[String]>*/
}
if (likely(varonce!=NULL)) {
var12 = varonce;
} else {
var13 = "NIT_PATH";
var15 = (val*)(8l<<2|1);
var16 = (val*)(8l<<2|1);
var17 = (val*)((long)(0)<<2|3);
var18 = (val*)((long)(0)<<2|3);
var14 = core__flat___CString___to_s_unsafe(var13, var15, var16, var17, var18);
var12 = var14;
varonce = var12;
}
{
var19 = core__environ___String___environ(var12);
}
var_path_env = var19;
{
var20 = ((short int(*)(val* self))(var_path_env->class->vft[COLOR_core__abstract_text__Text__is_empty]))(var_path_env); /* is_empty on <var_path_env:String>*/
}
var21 = !var20;
if (var21){
{
{ /* Inline loader$ModelBuilder$paths (self) on <self:ModelBuilder> */
var24 = self->attrs[COLOR_nitc__loader__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var24 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 213);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
var26 = (val*)((long)(':')<<2|2);
var25 = core__string_search___Text___split_with(var_path_env, var26);
}
{
core___core__Sequence___append(var22, var25); /* Direct call abstract_collection$Sequence$append on <var22:Array[String]>*/
}
} else {
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var29 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline toolcontext$ToolContext$nit_dir (var27) on <var27:ToolContext> */
var32 = var27->attrs[COLOR_nitc__toolcontext__ToolContext___nit_dir].val; /* _nit_dir on <var27:ToolContext> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
var_nit_dir = var30;
if (var_nit_dir == NULL) {
var33 = 0; /* is null */
} else {
var33 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_nit_dir,((val*)NULL)) on <var_nit_dir:nullable String> */
var_other = ((val*)NULL);
{
var36 = ((short int(*)(val* self, val* p0))(var_nit_dir->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nit_dir, var_other); /* == on <var_nit_dir:nullable String(String)>*/
}
var37 = !var36;
var34 = var37;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
var33 = var34;
}
if (var33){
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "lib";
var42 = (val*)(3l<<2|1);
var43 = (val*)(3l<<2|1);
var44 = (val*)((long)(0)<<2|3);
var45 = (val*)((long)(0)<<2|3);
var41 = core__flat___CString___to_s_unsafe(var40, var42, var43, var44, var45);
var39 = var41;
varonce38 = var39;
}
{
var46 = core__file___String____47d(var_nit_dir, var39);
}
var_libname = var46;
{
var47 = core__file___Text___file_exists(var_libname);
}
if (var47){
{
{ /* Inline loader$ModelBuilder$paths (self) on <self:ModelBuilder> */
var50 = self->attrs[COLOR_nitc__loader__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var50 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 213);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var48, var_libname); /* Direct call array$Array$add on <var48:Array[String]>*/
}
} else {
}
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "contrib";
var55 = (val*)(7l<<2|1);
var56 = (val*)(7l<<2|1);
var57 = (val*)((long)(0)<<2|3);
var58 = (val*)((long)(0)<<2|3);
var54 = core__flat___CString___to_s_unsafe(var53, var55, var56, var57, var58);
var52 = var54;
varonce51 = var52;
}
{
var59 = core__file___String____47d(var_nit_dir, var52);
}
var_libname = var59;
{
var60 = core__file___Text___file_exists(var_libname);
}
if (var60){
{
{ /* Inline loader$ModelBuilder$paths (self) on <self:ModelBuilder> */
var63 = self->attrs[COLOR_nitc__loader__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var63 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 213);
fatal_exit(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var61, var_libname); /* Direct call array$Array$add on <var61:Array[String]>*/
}
} else {
}
} else {
}
RET_LABEL:;
}
/* method loader$ModelBuilder$parse for (self: ModelBuilder, Sequence[String]): Array[MModule] */
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
char* var9 /* : CString */;
val* var10 /* : String */;
val* var11 /* : nullable Int */;
val* var12 /* : nullable Int */;
val* var13 /* : nullable Bool */;
val* var14 /* : nullable Bool */;
val* var15 /* : ArraySet[MModule] */;
val* var_mmodules /* var mmodules: ArraySet[MModule] */;
val* var_ /* var : Sequence[String] */;
val* var16 /* : Iterator[nullable Object] */;
val* var_17 /* var : IndexedIterator[String] */;
short int var18 /* : Bool */;
val* var19 /* : nullable Object */;
val* var_a /* var a: String */;
val* var20 /* : nullable AModule */;
val* var_nmodule /* var nmodule: nullable AModule */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
val* var28 /* : nullable MModule */;
val* var30 /* : nullable MModule */;
val* var_mmodule /* var mmodule: nullable MModule */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
val* var37 /* : Sys */;
long var38 /* : Int */;
long var40 /* : Int */;
long var_time1 /* var time1: Int */;
val* var41 /* : ToolContext */;
val* var43 /* : ToolContext */;
val* var45 /* : NativeArray[String] */;
static val* varonce44;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : CString */;
val* var49 /* : String */;
val* var50 /* : nullable Int */;
val* var51 /* : nullable Int */;
val* var52 /* : nullable Bool */;
val* var53 /* : nullable Bool */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : CString */;
val* var57 /* : String */;
val* var58 /* : nullable Int */;
val* var59 /* : nullable Int */;
val* var60 /* : nullable Bool */;
val* var61 /* : nullable Bool */;
long var62 /* : Int */;
short int var64 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var65 /* : Int */;
val* var66 /* : String */;
val* var67 /* : String */;
val* var68 /* : ToolContext */;
val* var70 /* : ToolContext */;
short int var71 /* : Bool */;
val* var72 /* : ToolContext */;
val* var74 /* : ToolContext */;
val* var75 /* : OptionBool */;
val* var77 /* : OptionBool */;
val* var78 /* : nullable Object */;
val* var80 /* : nullable Object */;
short int var81 /* : Bool */;
val* var82 /* : ToolContext */;
val* var84 /* : ToolContext */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : CString */;
val* var88 /* : String */;
val* var89 /* : nullable Int */;
val* var90 /* : nullable Int */;
val* var91 /* : nullable Bool */;
val* var92 /* : nullable Bool */;
val* var93 /* : ToolContext */;
val* var95 /* : ToolContext */;
val* var96 /* : Array[nullable Object] */;
var_modules = p0;
var1 = glob_sys;
{
{ /* Inline time$Sys$get_time (var1) on <var1:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var1;
var4 = core__time___Sys_get_time___impl(var_for_c_0);
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_time0 = var2;
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var7 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
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
var11 = (val*)(13l<<2|1);
var12 = (val*)(13l<<2|1);
var13 = (val*)((long)(0)<<2|3);
var14 = (val*)((long)(0)<<2|3);
var10 = core__flat___CString___to_s_unsafe(var9, var11, var12, var13, var14);
var8 = var10;
varonce = var8;
}
{
nitc___nitc__ToolContext___info(var5, var8, 1l); /* Direct call toolcontext$ToolContext$info on <var5:ToolContext>*/
}
var15 = NEW_core__ArraySet(&type_core__ArraySet__nitc__MModule);
{
core___core__ArraySet___core__kernel__Object__init(var15); /* Direct call array$ArraySet$init on <var15:ArraySet[MModule]>*/
}
var_mmodules = var15;
var_ = var_modules;
{
var16 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Sequence[String]>*/
}
var_17 = var16;
for(;;) {
{
var18 = ((short int(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_17); /* is_ok on <var_17:IndexedIterator[String]>*/
}
if (var18){
} else {
goto BREAK_label;
}
{
var19 = ((val*(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_17); /* item on <var_17:IndexedIterator[String]>*/
}
var_a = var19;
{
var20 = nitc__loader___ModelBuilder___load_module(self, var_a);
}
var_nmodule = var20;
if (var_nmodule == NULL) {
var21 = 1; /* is null */
} else {
var21 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_nmodule,((val*)NULL)) on <var_nmodule:nullable AModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_nmodule,var_other) on <var_nmodule:nullable AModule(AModule)> */
var26 = var_nmodule == var_other;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
var21 = var22;
}
if (var21){
goto BREAK_label27;
} else {
}
{
{ /* Inline loader$AModule$mmodule (var_nmodule) on <var_nmodule:nullable AModule(AModule)> */
var30 = var_nmodule->attrs[COLOR_nitc__loader__AModule___mmodule].val; /* _mmodule on <var_nmodule:nullable AModule(AModule)> */
var28 = var30;
RET_LABEL29:(void)0;
}
}
var_mmodule = var28;
if (var_mmodule == NULL) {
var31 = 1; /* is null */
} else {
var31 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mmodule,((val*)NULL)) on <var_mmodule:nullable MModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mmodule,var_other) on <var_mmodule:nullable MModule(MModule)> */
var36 = var_mmodule == var_other;
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
goto BREAK_label27;
} else {
}
{
core___core__ArraySet___core__abstract_collection__SimpleCollection__add(var_mmodules, var_mmodule); /* Direct call array$ArraySet$add on <var_mmodules:ArraySet[MModule]>*/
}
BREAK_label27: (void)0;
{
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_17); /* next on <var_17:IndexedIterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_17); /* finish on <var_17:IndexedIterator[String]>*/
}
var37 = glob_sys;
{
{ /* Inline time$Sys$get_time (var37) on <var37:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var37;
var40 = core__time___Sys_get_time___impl(var_for_c_0);
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
var_time1 = var38;
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var43 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var43 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
if (unlikely(varonce44==NULL)) {
var45 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = "*** END PARSE: ";
var50 = (val*)(15l<<2|1);
var51 = (val*)(15l<<2|1);
var52 = (val*)((long)(0)<<2|3);
var53 = (val*)((long)(0)<<2|3);
var49 = core__flat___CString___to_s_unsafe(var48, var50, var51, var52, var53);
var47 = var49;
varonce46 = var47;
}
((struct instance_core__NativeArray*)var45)->values[0]=var47;
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = " ***";
var58 = (val*)(4l<<2|1);
var59 = (val*)(4l<<2|1);
var60 = (val*)((long)(0)<<2|3);
var61 = (val*)((long)(0)<<2|3);
var57 = core__flat___CString___to_s_unsafe(var56, var58, var59, var60, var61);
var55 = var57;
varonce54 = var55;
}
((struct instance_core__NativeArray*)var45)->values[2]=var55;
} else {
var45 = varonce44;
varonce44 = NULL;
}
{
{ /* Inline kernel$Int$- (var_time1,var_time0) on <var_time1:Int> */
/* Covariant cast for argument 0 (i) <var_time0:Int> isa OTHER */
/* <var_time0:Int> isa OTHER */
var64 = 1; /* easy <var_time0:Int> isa OTHER*/
if (unlikely(!var64)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var65 = var_time1 - var_time0;
var62 = var65;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
}
var66 = core__flat___Int___core__abstract_text__Object__to_s(var62);
((struct instance_core__NativeArray*)var45)->values[1]=var66;
{
var67 = ((val*(*)(val* self))(var45->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var45); /* native_to_s on <var45:NativeArray[String]>*/
}
varonce44 = var45;
{
nitc___nitc__ToolContext___info(var41, var67, 2l); /* Direct call toolcontext$ToolContext$info on <var41:ToolContext>*/
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var70 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var70 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
var71 = nitc___nitc__ToolContext___check_errors(var68);
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var74 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var74 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
{
{ /* Inline loader$ToolContext$opt_only_parse (var72) on <var72:ToolContext> */
var77 = var72->attrs[COLOR_nitc__loader__ToolContext___opt_only_parse].val; /* _opt_only_parse on <var72:ToolContext> */
if (unlikely(var77 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_only_parse");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 50);
fatal_exit(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
{
{ /* Inline opts$Option$value (var75) on <var75:OptionBool> */
var80 = var75->attrs[COLOR_opts__Option___value].val; /* _value on <var75:OptionBool> */
var78 = var80;
RET_LABEL79:(void)0;
}
}
var81 = (short int)((long)(var78)>>2);
if (var81){
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var84 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var84 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
if (likely(varonce85!=NULL)) {
var86 = varonce85;
} else {
var87 = "*** ONLY PARSE...";
var89 = (val*)(17l<<2|1);
var90 = (val*)(17l<<2|1);
var91 = (val*)((long)(0)<<2|3);
var92 = (val*)((long)(0)<<2|3);
var88 = core__flat___CString___to_s_unsafe(var87, var89, var90, var91, var92);
var86 = var88;
varonce85 = var86;
}
{
nitc___nitc__ToolContext___info(var82, var86, 1l); /* Direct call toolcontext$ToolContext$info on <var82:ToolContext>*/
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var95 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var95 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
{
nitc___nitc__ToolContext___quit(var93); /* Direct call toolcontext$ToolContext$quit on <var93:ToolContext>*/
}
} else {
}
{
var96 = core__array___Collection___to_a(var_mmodules);
}
var = var96;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader$ModelBuilder$paths for (self: ModelBuilder): Array[String] */
val* nitc__loader___ModelBuilder___paths(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_nitc__loader__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 213);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader$ModelBuilder$search_mmodule_by_name for (self: ModelBuilder, nullable ANode, nullable MGroup, String): nullable MModule */
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
val* var_dirname /* var dirname: nullable String */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
static val* varonce;
val* var40 /* : String */;
char* var41 /* : CString */;
val* var42 /* : String */;
val* var43 /* : nullable Int */;
val* var44 /* : nullable Int */;
val* var45 /* : nullable Bool */;
val* var46 /* : nullable Bool */;
val* var47 /* : String */;
val* var48 /* : String */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
short int var_ /* var : Bool */;
short int var52 /* : Bool */;
val* var53 /* : Array[nullable Object] */;
val* var_loc /* var loc: nullable Object */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
val* var59 /* : Location */;
val* var60 /* : nullable MModule */;
val* var_candidate /* var candidate: nullable MModule */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
val* var_other64 /* var other: nullable Object */;
short int var65 /* : Bool */;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
short int var71 /* : Bool */;
short int var72 /* : Bool */;
val* var74 /* : NativeArray[String] */;
static val* varonce73;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : CString */;
val* var78 /* : String */;
val* var79 /* : nullable Int */;
val* var80 /* : nullable Int */;
val* var81 /* : nullable Bool */;
val* var82 /* : nullable Bool */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : CString */;
val* var86 /* : String */;
val* var87 /* : nullable Int */;
val* var88 /* : nullable Int */;
val* var89 /* : nullable Bool */;
val* var90 /* : nullable Bool */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : CString */;
val* var94 /* : String */;
val* var95 /* : nullable Int */;
val* var96 /* : nullable Int */;
val* var97 /* : nullable Bool */;
val* var98 /* : nullable Bool */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : CString */;
val* var102 /* : String */;
val* var103 /* : nullable Int */;
val* var104 /* : nullable Int */;
val* var105 /* : nullable Bool */;
val* var106 /* : nullable Bool */;
val* var107 /* : String */;
val* var109 /* : String */;
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : CString */;
val* var113 /* : String */;
val* var114 /* : nullable Int */;
val* var115 /* : nullable Int */;
val* var116 /* : nullable Bool */;
val* var117 /* : nullable Bool */;
val* var118 /* : String */;
val* var119 /* : String */;
val* var121 /* : NativeArray[String] */;
static val* varonce120;
static val* varonce122;
val* var123 /* : String */;
char* var124 /* : CString */;
val* var125 /* : String */;
val* var126 /* : nullable Int */;
val* var127 /* : nullable Int */;
val* var128 /* : nullable Bool */;
val* var129 /* : nullable Bool */;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : CString */;
val* var133 /* : String */;
val* var134 /* : nullable Int */;
val* var135 /* : nullable Int */;
val* var136 /* : nullable Bool */;
val* var137 /* : nullable Bool */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : CString */;
val* var141 /* : String */;
val* var142 /* : nullable Int */;
val* var143 /* : nullable Int */;
val* var144 /* : nullable Bool */;
val* var145 /* : nullable Bool */;
static val* varonce146;
val* var147 /* : String */;
char* var148 /* : CString */;
val* var149 /* : String */;
val* var150 /* : nullable Int */;
val* var151 /* : nullable Int */;
val* var152 /* : nullable Bool */;
val* var153 /* : nullable Bool */;
val* var154 /* : String */;
val* var155 /* : String */;
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
{ /* Inline kernel$Object$!= (var_c,((val*)NULL)) on <var_c:nullable MGroup> */
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
{ /* Inline mpackage$MGroup$mpackage (var_c) on <var_c:nullable MGroup(MGroup)> */
var8 = var_c->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val; /* _mpackage on <var_c:nullable MGroup(MGroup)> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 76);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline mpackage$MPackage$root (var6) on <var6:MPackage> */
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
{ /* Inline kernel$Object$!= (var_r,((val*)NULL)) on <var_r:nullable MGroup> */
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 229);
fatal_exit(1);
}
{
nitc__loader___ModelBuilder___scan_group(self, var_r); /* Direct call loader$ModelBuilder$scan_group on <self:ModelBuilder>*/
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
{ /* Inline loader$ModelBuilder$paths (self) on <self:ModelBuilder> */
var22 = self->attrs[COLOR_nitc__loader__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 213);
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
{ /* Inline kernel$Object$!= (var_mgroup,((val*)NULL)) on <var_mgroup:nullable MGroup> */
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
{ /* Inline mpackage$MGroup$mpackage (var_mgroup) on <var_mgroup:nullable MGroup(MGroup)> */
var30 = var_mgroup->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val; /* _mpackage on <var_mgroup:nullable MGroup(MGroup)> */
if (unlikely(var30 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 76);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline mpackage$MPackage$root (var28) on <var28:MPackage> */
var33 = var28->attrs[COLOR_nitc__mpackage__MPackage___root].val; /* _root on <var28:MPackage> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
if (var31 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 241);
fatal_exit(1);
} else {
var34 = nitc___nitc__MGroup___filepath(var31);
}
var_dirname = var34;
if (var_dirname == NULL) {
var35 = 0; /* is null */
} else {
var35 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_dirname,((val*)NULL)) on <var_dirname:nullable String> */
var_other = ((val*)NULL);
{
var38 = ((short int(*)(val* self, val* p0))(var_dirname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_dirname, var_other); /* == on <var_dirname:nullable String(String)>*/
}
var39 = !var38;
var36 = var39;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
var35 = var36;
}
if (var35){
if (likely(varonce!=NULL)) {
var40 = varonce;
} else {
var41 = "..";
var43 = (val*)(2l<<2|1);
var44 = (val*)(2l<<2|1);
var45 = (val*)((long)(0)<<2|3);
var46 = (val*)((long)(0)<<2|3);
var42 = core__flat___CString___to_s_unsafe(var41, var43, var44, var45, var46);
var40 = var42;
varonce = var40;
}
{
var47 = core__file___String___join_path(var_dirname, var40);
}
{
var48 = core__file___String___simplify_path(var47);
}
var_dirname = var48;
{
var50 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var_lookpaths, var_dirname);
}
var51 = !var50;
var_ = var51;
if (var51){
{
var52 = core__file___Text___file_exists(var_dirname);
}
var49 = var52;
} else {
var49 = var_;
}
if (var49){
{
var53 = core__array___Collection___to_a(var_lookpaths);
}
var_lookpaths = var53;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_lookpaths, var_dirname); /* Direct call array$Array$add on <var_lookpaths:Array[String]>*/
}
} else {
}
} else {
}
} else {
}
var_loc = ((val*)NULL);
if (var_anode == NULL) {
var54 = 0; /* is null */
} else {
var54 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_anode,((val*)NULL)) on <var_anode:nullable ANode> */
var_other = ((val*)NULL);
{
var57 = ((short int(*)(val* self, val* p0))(var_anode->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_anode, var_other); /* == on <var_anode:nullable ANode(ANode)>*/
}
var58 = !var57;
var55 = var58;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
var54 = var55;
}
if (var54){
{
var59 = ((val*(*)(val* self))(var_anode->class->vft[COLOR_nitc__parser_nodes__ANode__hot_location]))(var_anode); /* hot_location on <var_anode:nullable ANode(ANode)>*/
}
var_loc = var59;
} else {
}
{
var60 = nitc__loader___ModelBuilder___search_module_in_paths(self, var_loc, var_name, var_lookpaths);
}
var_candidate = var60;
if (var_candidate == NULL) {
var61 = 1; /* is null */
} else {
var61 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_candidate,((val*)NULL)) on <var_candidate:nullable MModule> */
var_other64 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_candidate,var_other64) on <var_candidate:nullable MModule(MModule)> */
var67 = var_candidate == var_other64;
var65 = var67;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
var62 = var65;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
var61 = var62;
}
if (var61){
if (var_mgroup == NULL) {
var68 = 0; /* is null */
} else {
var68 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_mgroup,((val*)NULL)) on <var_mgroup:nullable MGroup> */
var_other = ((val*)NULL);
{
var71 = ((short int(*)(val* self, val* p0))(var_mgroup->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mgroup, var_other); /* == on <var_mgroup:nullable MGroup(MGroup)>*/
}
var72 = !var71;
var69 = var72;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
var68 = var69;
}
if (var68){
if (unlikely(varonce73==NULL)) {
var74 = NEW_core__NativeArray((int)7l, &type_core__NativeArray__core__String);
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = "Error: cannot find module `";
var79 = (val*)(27l<<2|1);
var80 = (val*)(27l<<2|1);
var81 = (val*)((long)(0)<<2|3);
var82 = (val*)((long)(0)<<2|3);
var78 = core__flat___CString___to_s_unsafe(var77, var79, var80, var81, var82);
var76 = var78;
varonce75 = var76;
}
((struct instance_core__NativeArray*)var74)->values[0]=var76;
if (likely(varonce83!=NULL)) {
var84 = varonce83;
} else {
var85 = "` from `";
var87 = (val*)(8l<<2|1);
var88 = (val*)(8l<<2|1);
var89 = (val*)((long)(0)<<2|3);
var90 = (val*)((long)(0)<<2|3);
var86 = core__flat___CString___to_s_unsafe(var85, var87, var88, var89, var90);
var84 = var86;
varonce83 = var84;
}
((struct instance_core__NativeArray*)var74)->values[2]=var84;
if (likely(varonce91!=NULL)) {
var92 = varonce91;
} else {
var93 = "`. Tried: ";
var95 = (val*)(10l<<2|1);
var96 = (val*)(10l<<2|1);
var97 = (val*)((long)(0)<<2|3);
var98 = (val*)((long)(0)<<2|3);
var94 = core__flat___CString___to_s_unsafe(var93, var95, var96, var97, var98);
var92 = var94;
varonce91 = var92;
}
((struct instance_core__NativeArray*)var74)->values[4]=var92;
if (likely(varonce99!=NULL)) {
var100 = varonce99;
} else {
var101 = ".";
var103 = (val*)(1l<<2|1);
var104 = (val*)(1l<<2|1);
var105 = (val*)((long)(0)<<2|3);
var106 = (val*)((long)(0)<<2|3);
var102 = core__flat___CString___to_s_unsafe(var101, var103, var104, var105, var106);
var100 = var102;
varonce99 = var100;
}
((struct instance_core__NativeArray*)var74)->values[6]=var100;
} else {
var74 = varonce73;
varonce73 = NULL;
}
((struct instance_core__NativeArray*)var74)->values[1]=var_name;
{
{ /* Inline mpackage$MGroup$name (var_mgroup) on <var_mgroup:nullable MGroup(MGroup)> */
var109 = var_mgroup->attrs[COLOR_nitc__mpackage__MGroup___name].val; /* _name on <var_mgroup:nullable MGroup(MGroup)> */
if (unlikely(var109 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 70);
fatal_exit(1);
}
var107 = var109;
RET_LABEL108:(void)0;
}
}
((struct instance_core__NativeArray*)var74)->values[3]=var107;
if (likely(varonce110!=NULL)) {
var111 = varonce110;
} else {
var112 = ", ";
var114 = (val*)(2l<<2|1);
var115 = (val*)(2l<<2|1);
var116 = (val*)((long)(0)<<2|3);
var117 = (val*)((long)(0)<<2|3);
var113 = core__flat___CString___to_s_unsafe(var112, var114, var115, var116, var117);
var111 = var113;
varonce110 = var111;
}
{
var118 = core__abstract_text___Collection___join(var_lookpaths, var111, ((val*)NULL));
}
((struct instance_core__NativeArray*)var74)->values[5]=var118;
{
var119 = ((val*(*)(val* self))(var74->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var74); /* native_to_s on <var74:NativeArray[String]>*/
}
varonce73 = var74;
{
nitc___nitc__ModelBuilder___error(self, var_anode, var119); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
} else {
if (unlikely(varonce120==NULL)) {
var121 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce122!=NULL)) {
var123 = varonce122;
} else {
var124 = "Error: cannot find module `";
var126 = (val*)(27l<<2|1);
var127 = (val*)(27l<<2|1);
var128 = (val*)((long)(0)<<2|3);
var129 = (val*)((long)(0)<<2|3);
var125 = core__flat___CString___to_s_unsafe(var124, var126, var127, var128, var129);
var123 = var125;
varonce122 = var123;
}
((struct instance_core__NativeArray*)var121)->values[0]=var123;
if (likely(varonce130!=NULL)) {
var131 = varonce130;
} else {
var132 = "`. Tried: ";
var134 = (val*)(10l<<2|1);
var135 = (val*)(10l<<2|1);
var136 = (val*)((long)(0)<<2|3);
var137 = (val*)((long)(0)<<2|3);
var133 = core__flat___CString___to_s_unsafe(var132, var134, var135, var136, var137);
var131 = var133;
varonce130 = var131;
}
((struct instance_core__NativeArray*)var121)->values[2]=var131;
if (likely(varonce138!=NULL)) {
var139 = varonce138;
} else {
var140 = ".";
var142 = (val*)(1l<<2|1);
var143 = (val*)(1l<<2|1);
var144 = (val*)((long)(0)<<2|3);
var145 = (val*)((long)(0)<<2|3);
var141 = core__flat___CString___to_s_unsafe(var140, var142, var143, var144, var145);
var139 = var141;
varonce138 = var139;
}
((struct instance_core__NativeArray*)var121)->values[4]=var139;
} else {
var121 = varonce120;
varonce120 = NULL;
}
((struct instance_core__NativeArray*)var121)->values[1]=var_name;
if (likely(varonce146!=NULL)) {
var147 = varonce146;
} else {
var148 = ", ";
var150 = (val*)(2l<<2|1);
var151 = (val*)(2l<<2|1);
var152 = (val*)((long)(0)<<2|3);
var153 = (val*)((long)(0)<<2|3);
var149 = core__flat___CString___to_s_unsafe(var148, var150, var151, var152, var153);
var147 = var149;
varonce146 = var147;
}
{
var154 = core__abstract_text___Collection___join(var_lookpaths, var147, ((val*)NULL));
}
((struct instance_core__NativeArray*)var121)->values[3]=var154;
{
var155 = ((val*(*)(val* self))(var121->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var121); /* native_to_s on <var121:NativeArray[String]>*/
}
varonce120 = var121;
{
nitc___nitc__ModelBuilder___error(self, var_anode, var155); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
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
/* method loader$ModelBuilder$get_mmodule_by_name for (self: ModelBuilder, nullable ANode, nullable MGroup, String): nullable MModule */
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
{ /* Inline kernel$Object$== (var_mmodule,((val*)NULL)) on <var_mmodule:nullable MModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mmodule,var_other) on <var_mmodule:nullable MModule(MModule)> */
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
{ /* Inline kernel$Object$== (var_ast,((val*)NULL)) on <var_ast:nullable AModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_ast,var_other) on <var_ast:nullable AModule(AModule)> */
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
/* method loader$ModelBuilder$search_module_in_paths for (self: ModelBuilder, nullable Location, String, Collection[String]): nullable MModule */
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
char* var9 /* : CString */;
val* var10 /* : String */;
val* var11 /* : nullable Int */;
val* var12 /* : nullable Int */;
val* var13 /* : nullable Bool */;
val* var14 /* : nullable Bool */;
val* var15 /* : String */;
val* var16 /* : String */;
val* var17 /* : String */;
val* var18 /* : nullable MModule */;
val* var_mp /* var mp: nullable MModule */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var24 /* : String */;
val* var25 /* : String */;
val* var26 /* : nullable MGroup */;
val* var_g /* var g: nullable MGroup */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var32 /* : Array[MModule] */;
short int var33 /* : Bool */;
long var34 /* : Int */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var38 /* : Bool */;
val* var39 /* : ToolContext */;
val* var41 /* : ToolContext */;
val* var43 /* : NativeArray[String] */;
static val* varonce42;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : CString */;
val* var47 /* : String */;
val* var48 /* : nullable Int */;
val* var49 /* : nullable Int */;
val* var50 /* : nullable Bool */;
val* var51 /* : nullable Bool */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : CString */;
val* var55 /* : String */;
val* var56 /* : nullable Int */;
val* var57 /* : nullable Int */;
val* var58 /* : nullable Bool */;
val* var59 /* : nullable Bool */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : CString */;
val* var63 /* : String */;
val* var64 /* : nullable Int */;
val* var65 /* : nullable Int */;
val* var66 /* : nullable Bool */;
val* var67 /* : nullable Bool */;
val* var68 /* : Array[String] */;
val* var_69 /* var : Array[String] */;
val* var_70 /* var : ArraySet[MModule] */;
val* var71 /* : Iterator[nullable Object] */;
val* var_72 /* var : Iterator[MModule] */;
short int var73 /* : Bool */;
val* var75 /* : nullable Object */;
val* var_x /* var x: MModule */;
val* var76 /* : String */;
val* var77 /* : nullable String */;
val* var78 /* : String */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : CString */;
val* var82 /* : String */;
val* var83 /* : nullable Int */;
val* var84 /* : nullable Int */;
val* var85 /* : nullable Bool */;
val* var86 /* : nullable Bool */;
val* var87 /* : String */;
val* var88 /* : String */;
val* var89 /* : Message */;
val* var90 /* : nullable Object */;
var_location = p0;
var_name = p1;
var_lookpaths = p2;
var1 = NEW_core__ArraySet(&type_core__ArraySet__nitc__MModule);
{
core___core__ArraySet___core__kernel__Object__init(var1); /* Direct call array$ArraySet$init on <var1:ArraySet[MModule]>*/
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
var6 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = ".nit";
var11 = (val*)(4l<<2|1);
var12 = (val*)(4l<<2|1);
var13 = (val*)((long)(0)<<2|3);
var14 = (val*)((long)(0)<<2|3);
var10 = core__flat___CString___to_s_unsafe(var9, var11, var12, var13, var14);
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
var15 = ((val*(*)(val* self))(var6->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce = var6;
{
var16 = core__file___String____47d(var_dirname, var15);
}
{
var17 = core__file___String___simplify_path(var16);
}
{
var18 = nitc__loader___ModelBuilder___identify_module(self, var17);
}
var_mp = var18;
if (var_mp == NULL) {
var19 = 0; /* is null */
} else {
var19 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_mp,((val*)NULL)) on <var_mp:nullable MModule> */
var_other = ((val*)NULL);
{
var22 = ((short int(*)(val* self, val* p0))(var_mp->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mp, var_other); /* == on <var_mp:nullable MModule(MModule)>*/
}
var23 = !var22;
var20 = var23;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var19 = var20;
}
if (var19){
{
core___core__ArraySet___core__abstract_collection__SimpleCollection__add(var_res, var_mp); /* Direct call array$ArraySet$add on <var_res:ArraySet[MModule]>*/
}
} else {
}
{
var24 = core__file___String____47d(var_dirname, var_name);
}
{
var25 = core__file___String___simplify_path(var24);
}
{
var26 = nitc__loader___ModelBuilder___identify_group(self, var25);
}
var_g = var26;
if (var_g == NULL) {
var27 = 0; /* is null */
} else {
var27 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_g,((val*)NULL)) on <var_g:nullable MGroup> */
var_other = ((val*)NULL);
{
var30 = ((short int(*)(val* self, val* p0))(var_g->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_g, var_other); /* == on <var_g:nullable MGroup(MGroup)>*/
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
nitc__loader___ModelBuilder___scan_group(self, var_g); /* Direct call loader$ModelBuilder$scan_group on <self:ModelBuilder>*/
}
{
var32 = nitc__loader___MGroup___mmodules_by_name(var_g, var_name);
}
{
core___core__SimpleCollection___add_all(var_res, var32); /* Direct call abstract_collection$SimpleCollection$add_all on <var_res:ArraySet[MModule]>*/
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
var33 = core___core__ArraySet___core__abstract_collection__Collection__is_empty(var_res);
}
if (var33){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var34 = core___core__ArraySet___core__abstract_collection__Collection__length(var_res);
}
{
{ /* Inline kernel$Int$> (var34,1l) on <var34:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var37 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var37)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var38 = var34 > 1l;
var35 = var38;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
if (var35){
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var41 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var41 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
if (unlikely(varonce42==NULL)) {
var43 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = "Error: conflicting module files for `";
var48 = (val*)(37l<<2|1);
var49 = (val*)(37l<<2|1);
var50 = (val*)((long)(0)<<2|3);
var51 = (val*)((long)(0)<<2|3);
var47 = core__flat___CString___to_s_unsafe(var46, var48, var49, var50, var51);
var45 = var47;
varonce44 = var45;
}
((struct instance_core__NativeArray*)var43)->values[0]=var45;
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = "`: `";
var56 = (val*)(4l<<2|1);
var57 = (val*)(4l<<2|1);
var58 = (val*)((long)(0)<<2|3);
var59 = (val*)((long)(0)<<2|3);
var55 = core__flat___CString___to_s_unsafe(var54, var56, var57, var58, var59);
var53 = var55;
varonce52 = var53;
}
((struct instance_core__NativeArray*)var43)->values[2]=var53;
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = "`";
var64 = (val*)(1l<<2|1);
var65 = (val*)(1l<<2|1);
var66 = (val*)((long)(0)<<2|3);
var67 = (val*)((long)(0)<<2|3);
var63 = core__flat___CString___to_s_unsafe(var62, var64, var65, var66, var67);
var61 = var63;
varonce60 = var61;
}
((struct instance_core__NativeArray*)var43)->values[4]=var61;
} else {
var43 = varonce42;
varonce42 = NULL;
}
((struct instance_core__NativeArray*)var43)->values[1]=var_name;
var68 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___with_capacity(var68, 1l); /* Direct call array$Array$with_capacity on <var68:Array[String]>*/
}
var_69 = var68;
var_70 = var_res;
{
var71 = core___core__ArraySet___core__abstract_collection__Collection__iterator(var_70);
}
var_72 = var71;
for(;;) {
{
var73 = ((short int(*)(val* self))((((long)var_72&3)?class_info[((long)var_72&3)]:var_72->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_72); /* is_ok on <var_72:Iterator[MModule]>*/
}
if (var73){
} else {
goto BREAK_label74;
}
{
var75 = ((val*(*)(val* self))((((long)var_72&3)?class_info[((long)var_72&3)]:var_72->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_72); /* item on <var_72:Iterator[MModule]>*/
}
var_x = var75;
{
var77 = nitc___nitc__MModule___filepath(var_x);
}
if (var77!=NULL) {
var76 = var77;
} else {
{
var78 = nitc___nitc__MModule___nitc__model_base__MEntity__full_name(var_x);
}
var76 = var78;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_69, var76); /* Direct call array$AbstractArray$push on <var_69:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_72&3)?class_info[((long)var_72&3)]:var_72->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_72); /* next on <var_72:Iterator[MModule]>*/
}
}
BREAK_label74: (void)0;
{
((void(*)(val* self))((((long)var_72&3)?class_info[((long)var_72&3)]:var_72->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_72); /* finish on <var_72:Iterator[MModule]>*/
}
if (likely(varonce79!=NULL)) {
var80 = varonce79;
} else {
var81 = "`, `";
var83 = (val*)(4l<<2|1);
var84 = (val*)(4l<<2|1);
var85 = (val*)((long)(0)<<2|3);
var86 = (val*)((long)(0)<<2|3);
var82 = core__flat___CString___to_s_unsafe(var81, var83, var84, var85, var86);
var80 = var82;
varonce79 = var80;
}
{
var87 = core__abstract_text___Collection___join(var_69, var80, ((val*)NULL));
}
((struct instance_core__NativeArray*)var43)->values[3]=var87;
{
var88 = ((val*(*)(val* self))(var43->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var43); /* native_to_s on <var43:NativeArray[String]>*/
}
varonce42 = var43;
{
var89 = nitc___nitc__ToolContext___error(var39, var_location, var88);
}
} else {
}
{
var90 = core___core__ArraySet___core__abstract_collection__Collection__first(var_res);
}
var = var90;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader$ModelBuilder$search_group_in_paths for (self: ModelBuilder, String, Collection[String]): ArraySet[MGroup] */
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
core___core__ArraySet___core__kernel__Object__init(var1); /* Direct call array$ArraySet$init on <var1:ArraySet[MGroup]>*/
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
{ /* Inline kernel$Object$!= (var_mg,((val*)NULL)) on <var_mg:nullable MGroup> */
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
core___core__ArraySet___core__abstract_collection__SimpleCollection__add(var_res, var_mg); /* Direct call array$ArraySet$add on <var_res:ArraySet[MGroup]>*/
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
/* method loader$ModelBuilder$identified_modules_by_path for (self: ModelBuilder): HashMap[String, nullable MModule] */
val* nitc__loader___ModelBuilder___identified_modules_by_path(val* self) {
val* var /* : HashMap[String, nullable MModule] */;
val* var1 /* : HashMap[String, nullable MModule] */;
var1 = self->attrs[COLOR_nitc__loader__ModelBuilder___identified_modules_by_path].val; /* _identified_modules_by_path on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _identified_modules_by_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 316);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader$ModelBuilder$identified_modules for (self: ModelBuilder): Array[MModule] */
val* nitc__loader___ModelBuilder___identified_modules(val* self) {
val* var /* : Array[MModule] */;
val* var1 /* : Array[MModule] */;
var1 = self->attrs[COLOR_nitc__loader__ModelBuilder___identified_modules].val; /* _identified_modules on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _identified_modules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 319);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader$ModelBuilder$parsed_modules for (self: ModelBuilder): Array[MModule] */
val* nitc__loader___ModelBuilder___parsed_modules(val* self) {
val* var /* : Array[MModule] */;
val* var1 /* : Array[MModule] */;
var1 = self->attrs[COLOR_nitc__loader__ModelBuilder___parsed_modules].val; /* _parsed_modules on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _parsed_modules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 325);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader$ModelBuilder$last_loader_error for (self: ModelBuilder): nullable String */
val* nitc__loader___ModelBuilder___last_loader_error(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_nitc__loader__ModelBuilder___last_loader_error].val; /* _last_loader_error on <self:ModelBuilder> */
var = var1;
RET_LABEL:;
return var;
}
/* method loader$ModelBuilder$last_loader_error= for (self: ModelBuilder, nullable String) */
void nitc__loader___ModelBuilder___last_loader_error_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__loader__ModelBuilder___last_loader_error].val = p0; /* _last_loader_error on <self:ModelBuilder> */
RET_LABEL:;
}
/* method loader$ModelBuilder$identify_module for (self: ModelBuilder, String): nullable MModule */
val* nitc__loader___ModelBuilder___identify_module(val* self, val* p0) {
val* var /* : nullable MModule */;
val* var_path /* var path: String */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : CString */;
val* var4 /* : String */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Bool */;
val* var8 /* : nullable Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : SequenceRead[Char] */;
val* var12 /* : nullable Object */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : Array[String] */;
val* var17 /* : Array[String] */;
val* var18 /* : nullable MModule */;
val* var_res /* var res: nullable MModule */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : nullable MGroup */;
val* var_mgroup /* var mgroup: nullable MGroup */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
val* var31 /* : nullable String */;
val* var32 /* : String */;
val* var34 /* : String */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : CString */;
val* var38 /* : String */;
val* var39 /* : nullable Int */;
val* var40 /* : nullable Int */;
val* var41 /* : nullable Bool */;
val* var42 /* : nullable Bool */;
val* var43 /* : Text */;
val* var44 /* : String */;
val* var_owner_path /* var owner_path: String */;
short int var45 /* : Bool */;
val* var46 /* : SequenceRead[Char] */;
val* var47 /* : nullable Object */;
short int var48 /* : Bool */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : CString */;
val* var52 /* : String */;
val* var53 /* : nullable Int */;
val* var54 /* : nullable Int */;
val* var55 /* : nullable Bool */;
val* var56 /* : nullable Bool */;
val* var57 /* : Array[String] */;
val* var_ids /* var ids: Array[String] */;
val* var58 /* : nullable Object */;
val* var59 /* : nullable MGroup */;
val* var_g /* var g: nullable MGroup */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
val* var65 /* : nullable Object */;
val* var66 /* : Array[MModule] */;
val* var_ms /* var ms: Array[MModule] */;
val* var_ /* var : Array[MModule] */;
val* var67 /* : IndexedIterator[nullable Object] */;
val* var_68 /* var : IndexedIterator[MModule] */;
short int var69 /* : Bool */;
val* var71 /* : nullable Object */;
val* var_m /* var m: MModule */;
val* var72 /* : String */;
short int var73 /* : Bool */;
long var74 /* : Int */;
long var76 /* : Int */;
short int var77 /* : Bool */;
short int var79 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var80 /* : Bool */;
long var81 /* : Int */;
long var83 /* : Int */;
short int var84 /* : Bool */;
short int var86 /* : Bool */;
val* var87 /* : nullable Object */;
long var88 /* : Int */;
long var90 /* : Int */;
short int var91 /* : Bool */;
short int var93 /* : Bool */;
int cltype94;
int idtype95;
const char* var_class_name96;
short int var97 /* : Bool */;
val* var98 /* : Array[String] */;
val* var_l /* var l: Array[String] */;
val* var_99 /* var : Array[MModule] */;
val* var100 /* : IndexedIterator[nullable Object] */;
val* var_101 /* var : IndexedIterator[MModule] */;
short int var102 /* : Bool */;
val* var104 /* : nullable Object */;
val* var_m105 /* var m: MModule */;
val* var106 /* : nullable String */;
val* var_fp /* var fp: nullable String */;
short int var107 /* : Bool */;
short int var108 /* : Bool */;
short int var110 /* : Bool */;
short int var111 /* : Bool */;
val* var113 /* : NativeArray[String] */;
static val* varonce112;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : CString */;
val* var117 /* : String */;
val* var118 /* : nullable Int */;
val* var119 /* : nullable Int */;
val* var120 /* : nullable Bool */;
val* var121 /* : nullable Bool */;
static val* varonce122;
val* var123 /* : String */;
char* var124 /* : CString */;
val* var125 /* : String */;
val* var126 /* : nullable Int */;
val* var127 /* : nullable Int */;
val* var128 /* : nullable Bool */;
val* var129 /* : nullable Bool */;
val* var130 /* : String */;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : CString */;
val* var134 /* : String */;
val* var135 /* : nullable Int */;
val* var136 /* : nullable Int */;
val* var137 /* : nullable Bool */;
val* var138 /* : nullable Bool */;
val* var140 /* : NativeArray[String] */;
static val* varonce139;
static val* varonce141;
val* var142 /* : String */;
char* var143 /* : CString */;
val* var144 /* : String */;
val* var145 /* : nullable Int */;
val* var146 /* : nullable Int */;
val* var147 /* : nullable Bool */;
val* var148 /* : nullable Bool */;
static val* varonce149;
val* var150 /* : String */;
char* var151 /* : CString */;
val* var152 /* : String */;
val* var153 /* : nullable Int */;
val* var154 /* : nullable Int */;
val* var155 /* : nullable Bool */;
val* var156 /* : nullable Bool */;
val* var157 /* : String */;
val* var158 /* : String */;
val* var160 /* : NativeArray[String] */;
static val* varonce159;
static val* varonce161;
val* var162 /* : String */;
char* var163 /* : CString */;
val* var164 /* : String */;
val* var165 /* : nullable Int */;
val* var166 /* : nullable Int */;
val* var167 /* : nullable Bool */;
val* var168 /* : nullable Bool */;
static val* varonce169;
val* var170 /* : String */;
char* var171 /* : CString */;
val* var172 /* : String */;
val* var173 /* : nullable Int */;
val* var174 /* : nullable Int */;
val* var175 /* : nullable Bool */;
val* var176 /* : nullable Bool */;
static val* varonce177;
val* var178 /* : String */;
char* var179 /* : CString */;
val* var180 /* : String */;
val* var181 /* : nullable Int */;
val* var182 /* : nullable Int */;
val* var183 /* : nullable Bool */;
val* var184 /* : nullable Bool */;
static val* varonce185;
val* var186 /* : String */;
char* var187 /* : CString */;
val* var188 /* : String */;
val* var189 /* : nullable Int */;
val* var190 /* : nullable Int */;
val* var191 /* : nullable Bool */;
val* var192 /* : nullable Bool */;
val* var193 /* : String */;
val* var194 /* : String */;
val* var196 /* : BestDistance[String] */;
long var197 /* : Int */;
long var198 /* : Int */;
short int var200 /* : Bool */;
int cltype201;
int idtype202;
const char* var_class_name203;
long var204 /* : Int */;
val* var_bests /* var bests: BestDistance[String] */;
val* var205 /* : MPackage */;
val* var207 /* : MPackage */;
val* var208 /* : POSet[MGroup] */;
val* var210 /* : POSet[MGroup] */;
val* var_211 /* var : POSet[MGroup] */;
val* var212 /* : Iterator[nullable Object] */;
val* var_213 /* var : Iterator[MGroup] */;
short int var214 /* : Bool */;
val* var216 /* : nullable Object */;
val* var_sg /* var sg: MGroup */;
val* var217 /* : Array[MModule] */;
val* var219 /* : Array[MModule] */;
val* var_220 /* var : Array[MModule] */;
val* var221 /* : IndexedIterator[nullable Object] */;
val* var_222 /* var : IndexedIterator[MModule] */;
short int var223 /* : Bool */;
val* var225 /* : nullable Object */;
val* var_m226 /* var m: MModule */;
val* var227 /* : String */;
long var228 /* : Int */;
long var_d /* var d: Int */;
val* var229 /* : String */;
short int var230 /* : Bool */;
val* var232 /* : NativeArray[String] */;
static val* varonce231;
static val* varonce233;
val* var234 /* : String */;
char* var235 /* : CString */;
val* var236 /* : String */;
val* var237 /* : nullable Int */;
val* var238 /* : nullable Int */;
val* var239 /* : nullable Bool */;
val* var240 /* : nullable Bool */;
static val* varonce241;
val* var242 /* : String */;
char* var243 /* : CString */;
val* var244 /* : String */;
val* var245 /* : nullable Int */;
val* var246 /* : nullable Int */;
val* var247 /* : nullable Bool */;
val* var248 /* : nullable Bool */;
val* var249 /* : String */;
val* var_last_loader_error /* var last_loader_error: String */;
val* var250 /* : Set[nullable Object] */;
val* var252 /* : Set[nullable Object] */;
short int var253 /* : Bool */;
static val* varonce254;
val* var255 /* : String */;
char* var256 /* : CString */;
val* var257 /* : String */;
val* var258 /* : nullable Int */;
val* var259 /* : nullable Int */;
val* var260 /* : nullable Bool */;
val* var261 /* : nullable Bool */;
val* var262 /* : Set[nullable Object] */;
val* var264 /* : Set[nullable Object] */;
static val* varonce265;
val* var266 /* : String */;
char* var267 /* : CString */;
val* var268 /* : String */;
val* var269 /* : nullable Int */;
val* var270 /* : nullable Int */;
val* var271 /* : nullable Bool */;
val* var272 /* : nullable Bool */;
static val* varonce273;
val* var274 /* : String */;
char* var275 /* : CString */;
val* var276 /* : String */;
val* var277 /* : nullable Int */;
val* var278 /* : nullable Int */;
val* var279 /* : nullable Bool */;
val* var280 /* : nullable Bool */;
val* var281 /* : String */;
val* var282 /* : Text */;
static val* varonce283;
val* var284 /* : String */;
char* var285 /* : CString */;
val* var286 /* : String */;
val* var287 /* : nullable Int */;
val* var288 /* : nullable Int */;
val* var289 /* : nullable Bool */;
val* var290 /* : nullable Bool */;
val* var291 /* : Text */;
val* var292 /* : Text */;
short int var294 /* : Bool */;
short int var295 /* : Bool */;
val* var296 /* : HashMap[String, nullable MModule] */;
val* var298 /* : HashMap[String, nullable MModule] */;
short int var299 /* : Bool */;
val* var300 /* : HashMap[String, nullable MModule] */;
val* var302 /* : HashMap[String, nullable MModule] */;
val* var303 /* : nullable Object */;
val* var304 /* : String */;
val* var_rp /* var rp: String */;
val* var305 /* : HashMap[String, nullable MModule] */;
val* var307 /* : HashMap[String, nullable MModule] */;
short int var308 /* : Bool */;
val* var309 /* : HashMap[String, nullable MModule] */;
val* var311 /* : HashMap[String, nullable MModule] */;
val* var312 /* : nullable Object */;
static val* varonce313;
val* var314 /* : String */;
char* var315 /* : CString */;
val* var316 /* : String */;
val* var317 /* : nullable Int */;
val* var318 /* : nullable Int */;
val* var319 /* : nullable Bool */;
val* var320 /* : nullable Bool */;
val* var321 /* : String */;
val* var_pn /* var pn: String */;
static val* varonce322;
val* var323 /* : String */;
char* var324 /* : CString */;
val* var325 /* : String */;
val* var326 /* : nullable Int */;
val* var327 /* : nullable Int */;
val* var328 /* : nullable Bool */;
val* var329 /* : nullable Bool */;
val* var330 /* : String */;
val* var331 /* : String */;
val* var_mgrouppath /* var mgrouppath: String */;
val* var332 /* : nullable MGroup */;
val* var_mgroup333 /* var mgroup: nullable MGroup */;
short int var334 /* : Bool */;
short int var335 /* : Bool */;
short int var337 /* : Bool */;
short int var338 /* : Bool */;
val* var339 /* : MPackage */;
val* var341 /* : MPackage */;
val* var_mpackage /* var mpackage: MPackage */;
short int var342 /* : Bool */;
short int var343 /* : Bool */;
val* var344 /* : ToolContext */;
val* var346 /* : ToolContext */;
val* var348 /* : NativeArray[String] */;
static val* varonce347;
static val* varonce349;
val* var350 /* : String */;
char* var351 /* : CString */;
val* var352 /* : String */;
val* var353 /* : nullable Int */;
val* var354 /* : nullable Int */;
val* var355 /* : nullable Bool */;
val* var356 /* : nullable Bool */;
static val* varonce357;
val* var358 /* : String */;
char* var359 /* : CString */;
val* var360 /* : String */;
val* var361 /* : nullable Int */;
val* var362 /* : nullable Int */;
val* var363 /* : nullable Bool */;
val* var364 /* : nullable Bool */;
static val* varonce365;
val* var366 /* : String */;
char* var367 /* : CString */;
val* var368 /* : String */;
val* var369 /* : nullable Int */;
val* var370 /* : nullable Int */;
val* var371 /* : nullable Bool */;
val* var372 /* : nullable Bool */;
val* var373 /* : String */;
val* var374 /* : String */;
short int var375 /* : Bool */;
short int var376 /* : Bool */;
val* var_other378 /* var other: nullable Object */;
short int var379 /* : Bool */;
short int var381 /* : Bool */;
val* var382 /* : Location */;
val* var_loc /* var loc: Location */;
val* var383 /* : MPackage */;
val* var384 /* : Model */;
val* var386 /* : Model */;
val* var_mpackage387 /* var mpackage: MPackage */;
val* var388 /* : MGroup */;
val* var390 /* : ToolContext */;
val* var392 /* : ToolContext */;
val* var394 /* : NativeArray[String] */;
static val* varonce393;
static val* varonce395;
val* var396 /* : String */;
char* var397 /* : CString */;
val* var398 /* : String */;
val* var399 /* : nullable Int */;
val* var400 /* : nullable Int */;
val* var401 /* : nullable Bool */;
val* var402 /* : nullable Bool */;
static val* varonce403;
val* var404 /* : String */;
char* var405 /* : CString */;
val* var406 /* : String */;
val* var407 /* : nullable Int */;
val* var408 /* : nullable Int */;
val* var409 /* : nullable Bool */;
val* var410 /* : nullable Bool */;
val* var411 /* : String */;
val* var412 /* : String */;
val* var414 /* : NativeArray[String] */;
static val* varonce413;
static val* varonce415;
val* var416 /* : String */;
char* var417 /* : CString */;
val* var418 /* : String */;
val* var419 /* : nullable Int */;
val* var420 /* : nullable Int */;
val* var421 /* : nullable Bool */;
val* var422 /* : nullable Bool */;
val* var423 /* : String */;
val* var424 /* : String */;
val* var_inipath /* var inipath: String */;
short int var425 /* : Bool */;
val* var426 /* : ConfigTree */;
val* var_ini /* var ini: ConfigTree */;
val* var428 /* : Location */;
val* var_loc429 /* var loc: Location */;
val* var430 /* : MModule */;
val* var431 /* : Model */;
val* var433 /* : Model */;
val* var_res434 /* var res: MModule */;
val* var435 /* : HashMap[String, nullable MModule] */;
val* var437 /* : HashMap[String, nullable MModule] */;
val* var438 /* : HashMap[String, nullable MModule] */;
val* var440 /* : HashMap[String, nullable MModule] */;
val* var441 /* : Array[MModule] */;
val* var443 /* : Array[MModule] */;
var_path = p0;
{
{ /* Inline loader$ModelBuilder$last_loader_error= (self,((val*)NULL)) on <self:ModelBuilder> */
self->attrs[COLOR_nitc__loader__ModelBuilder___last_loader_error].val = ((val*)NULL); /* _last_loader_error on <self:ModelBuilder> */
RET_LABEL1:(void)0;
}
}
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = ".nit";
var5 = (val*)(4l<<2|1);
var6 = (val*)(4l<<2|1);
var7 = (val*)((long)(0)<<2|3);
var8 = (val*)((long)(0)<<2|3);
var4 = core__flat___CString___to_s_unsafe(var3, var5, var6, var7, var8);
var2 = var4;
varonce = var2;
}
{
var9 = core___core__Text___has_suffix(var_path, var2);
}
var10 = !var9;
if (var10){
{
var11 = ((val*(*)(val* self))(var_path->class->vft[COLOR_core__abstract_text__Text__chars]))(var_path); /* chars on <var_path:String>*/
}
{
var12 = (val*)((long)('/')<<2|2);
var13 = ((short int(*)(val* self, val* p0))((((long)var11&3)?class_info[((long)var11&3)]:var11->class)->vft[COLOR_core__abstract_collection__Collection__has]))(var11, var12); /* has on <var11:SequenceRead[Char]>*/
}
var14 = !var13;
if (var14){
{
{ /* Inline loader$ModelBuilder$paths (self) on <self:ModelBuilder> */
var17 = self->attrs[COLOR_nitc__loader__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 213);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = nitc__loader___ModelBuilder___search_module_in_paths(self, ((val*)NULL), var_path, var15);
}
var_res = var18;
if (var_res == NULL) {
var19 = 0; /* is null */
} else {
var19 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_res,((val*)NULL)) on <var_res:nullable MModule> */
var_other = ((val*)NULL);
{
var22 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable MModule(MModule)>*/
}
var23 = !var22;
var20 = var23;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var19 = var20;
}
if (var19){
var = var_res;
goto RET_LABEL;
} else {
}
} else {
}
{
var24 = core__file___Text___file_exists(var_path);
}
if (var24){
{
var25 = nitc__loader___ModelBuilder___identify_group(self, var_path);
}
var_mgroup = var25;
if (var_mgroup == NULL) {
var26 = 0; /* is null */
} else {
var26 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_mgroup,((val*)NULL)) on <var_mgroup:nullable MGroup> */
var_other = ((val*)NULL);
{
var29 = ((short int(*)(val* self, val* p0))(var_mgroup->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mgroup, var_other); /* == on <var_mgroup:nullable MGroup(MGroup)>*/
}
var30 = !var29;
var27 = var30;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
var26 = var27;
}
if (var26){
{
var31 = nitc___nitc__MGroup___filepath(var_mgroup);
}
{
{ /* Inline mpackage$MGroup$name (var_mgroup) on <var_mgroup:nullable MGroup(MGroup)> */
var34 = var_mgroup->attrs[COLOR_nitc__mpackage__MGroup___name].val; /* _name on <var_mgroup:nullable MGroup(MGroup)> */
if (unlikely(var34 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 70);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = ".nit";
var39 = (val*)(4l<<2|1);
var40 = (val*)(4l<<2|1);
var41 = (val*)((long)(0)<<2|3);
var42 = (val*)((long)(0)<<2|3);
var38 = core__flat___CString___to_s_unsafe(var37, var39, var40, var41, var42);
var36 = var38;
varonce35 = var36;
}
{
var43 = ((val*(*)(val* self, val* p0))(var32->class->vft[COLOR_core__abstract_text__Text___43d]))(var32, var36); /* + on <var32:String>*/
}
if (var31 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 370);
fatal_exit(1);
} else {
var44 = core__file___String___join_path(var31, var43);
}
var_owner_path = var44;
{
var45 = core__file___Text___file_exists(var_owner_path);
}
if (var45){
var_path = var_owner_path;
goto BREAK_label;
} else {
}
} else {
}
} else {
}
{
var46 = ((val*(*)(val* self))(var_path->class->vft[COLOR_core__abstract_text__Text__chars]))(var_path); /* chars on <var_path:String>*/
}
{
var47 = (val*)((long)(':')<<2|2);
var48 = ((short int(*)(val* self, val* p0))((((long)var46&3)?class_info[((long)var46&3)]:var46->class)->vft[COLOR_core__abstract_collection__Collection__has]))(var46, var47); /* has on <var46:SequenceRead[Char]>*/
}
if (var48){
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "::";
var53 = (val*)(2l<<2|1);
var54 = (val*)(2l<<2|1);
var55 = (val*)((long)(0)<<2|3);
var56 = (val*)((long)(0)<<2|3);
var52 = core__flat___CString___to_s_unsafe(var51, var53, var54, var55, var56);
var50 = var52;
varonce49 = var50;
}
{
var57 = core__string_search___Text___split(var_path, var50);
}
var_ids = var57;
{
var58 = core___core__SequenceRead___Collection__first(var_ids);
}
{
var59 = nitc__loader___ModelBuilder___identify_group(self, var58);
}
var_g = var59;
if (var_g == NULL) {
var60 = 0; /* is null */
} else {
var60 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_g,((val*)NULL)) on <var_g:nullable MGroup> */
var_other = ((val*)NULL);
{
var63 = ((short int(*)(val* self, val* p0))(var_g->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_g, var_other); /* == on <var_g:nullable MGroup(MGroup)>*/
}
var64 = !var63;
var61 = var64;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
var60 = var61;
}
if (var60){
{
nitc__loader___ModelBuilder___scan_group(self, var_g); /* Direct call loader$ModelBuilder$scan_group on <self:ModelBuilder>*/
}
{
var65 = core___core__SequenceRead___last(var_ids);
}
{
var66 = nitc__loader___MGroup___mmodules_by_name(var_g, var65);
}
var_ms = var66;
var_ = var_ms;
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
goto BREAK_label70;
}
{
var71 = ((val*(*)(val* self))((((long)var_68&3)?class_info[((long)var_68&3)]:var_68->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_68); /* item on <var_68:IndexedIterator[MModule]>*/
}
var_m = var71;
{
var72 = nitc___nitc__MModule___nitc__model_base__MEntity__full_name(var_m);
}
{
var73 = ((short int(*)(val* self, val* p0))(var72->class->vft[COLOR_core__kernel__Object___61d_61d]))(var72, var_path); /* == on <var72:String>*/
}
if (var73){
var = var_m;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_68&3)?class_info[((long)var_68&3)]:var_68->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_68); /* next on <var_68:IndexedIterator[MModule]>*/
}
}
BREAK_label70: (void)0;
{
((void(*)(val* self))((((long)var_68&3)?class_info[((long)var_68&3)]:var_68->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_68); /* finish on <var_68:IndexedIterator[MModule]>*/
}
{
{ /* Inline array$AbstractArrayRead$length (var_ids) on <var_ids:Array[String]> */
var76 = var_ids->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_ids:Array[String]> */
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
{ /* Inline kernel$Int$<= (var74,2l) on <var74:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var79 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var79)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var80 = var74 <= 2l;
var77 = var80;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
}
if (var77){
{
{ /* Inline array$AbstractArrayRead$length (var_ms) on <var_ms:Array[MModule]> */
var83 = var_ms->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_ms:Array[MModule]> */
var81 = var83;
RET_LABEL82:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var81,1l) on <var81:Int> */
var86 = var81 == 1l;
var84 = var86;
goto RET_LABEL85;
RET_LABEL85:(void)0;
}
}
if (var84){
{
var87 = core___core__SequenceRead___Collection__first(var_ms);
}
var = var87;
goto RET_LABEL;
} else {
}
{
{ /* Inline array$AbstractArrayRead$length (var_ms) on <var_ms:Array[MModule]> */
var90 = var_ms->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_ms:Array[MModule]> */
var88 = var90;
RET_LABEL89:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var88,1l) on <var88:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var93 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var93)) {
var_class_name96 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name96);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var97 = var88 > 1l;
var91 = var97;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
}
if (var91){
var98 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var98); /* Direct call array$Array$init on <var98:Array[String]>*/
}
var_l = var98;
var_99 = var_ms;
{
var100 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_99);
}
var_101 = var100;
for(;;) {
{
var102 = ((short int(*)(val* self))((((long)var_101&3)?class_info[((long)var_101&3)]:var_101->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_101); /* is_ok on <var_101:IndexedIterator[MModule]>*/
}
if (var102){
} else {
goto BREAK_label103;
}
{
var104 = ((val*(*)(val* self))((((long)var_101&3)?class_info[((long)var_101&3)]:var_101->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_101); /* item on <var_101:IndexedIterator[MModule]>*/
}
var_m105 = var104;
{
var106 = nitc___nitc__MModule___filepath(var_m105);
}
var_fp = var106;
if (var_fp == NULL) {
var107 = 0; /* is null */
} else {
var107 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_fp,((val*)NULL)) on <var_fp:nullable String> */
var_other = ((val*)NULL);
{
var110 = ((short int(*)(val* self, val* p0))(var_fp->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_fp, var_other); /* == on <var_fp:nullable String(String)>*/
}
var111 = !var110;
var108 = var111;
goto RET_LABEL109;
RET_LABEL109:(void)0;
}
var107 = var108;
}
if (var107){
if (unlikely(varonce112==NULL)) {
var113 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce114!=NULL)) {
var115 = varonce114;
} else {
var116 = " (";
var118 = (val*)(2l<<2|1);
var119 = (val*)(2l<<2|1);
var120 = (val*)((long)(0)<<2|3);
var121 = (val*)((long)(0)<<2|3);
var117 = core__flat___CString___to_s_unsafe(var116, var118, var119, var120, var121);
var115 = var117;
varonce114 = var115;
}
((struct instance_core__NativeArray*)var113)->values[0]=var115;
if (likely(varonce122!=NULL)) {
var123 = varonce122;
} else {
var124 = ")";
var126 = (val*)(1l<<2|1);
var127 = (val*)(1l<<2|1);
var128 = (val*)((long)(0)<<2|3);
var129 = (val*)((long)(0)<<2|3);
var125 = core__flat___CString___to_s_unsafe(var124, var126, var127, var128, var129);
var123 = var125;
varonce122 = var123;
}
((struct instance_core__NativeArray*)var113)->values[2]=var123;
} else {
var113 = varonce112;
varonce112 = NULL;
}
((struct instance_core__NativeArray*)var113)->values[1]=var_fp;
{
var130 = ((val*(*)(val* self))(var113->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var113); /* native_to_s on <var113:NativeArray[String]>*/
}
varonce112 = var113;
var_fp = var130;
} else {
if (likely(varonce131!=NULL)) {
var132 = varonce131;
} else {
var133 = "";
var135 = (val*)(0l<<2|1);
var136 = (val*)(0l<<2|1);
var137 = (val*)((long)(0)<<2|3);
var138 = (val*)((long)(0)<<2|3);
var134 = core__flat___CString___to_s_unsafe(var133, var135, var136, var137, var138);
var132 = var134;
varonce131 = var132;
}
var_fp = var132;
}
if (unlikely(varonce139==NULL)) {
var140 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce141!=NULL)) {
var142 = varonce141;
} else {
var143 = "`";
var145 = (val*)(1l<<2|1);
var146 = (val*)(1l<<2|1);
var147 = (val*)((long)(0)<<2|3);
var148 = (val*)((long)(0)<<2|3);
var144 = core__flat___CString___to_s_unsafe(var143, var145, var146, var147, var148);
var142 = var144;
varonce141 = var142;
}
((struct instance_core__NativeArray*)var140)->values[0]=var142;
if (likely(varonce149!=NULL)) {
var150 = varonce149;
} else {
var151 = "`";
var153 = (val*)(1l<<2|1);
var154 = (val*)(1l<<2|1);
var155 = (val*)((long)(0)<<2|3);
var156 = (val*)((long)(0)<<2|3);
var152 = core__flat___CString___to_s_unsafe(var151, var153, var154, var155, var156);
var150 = var152;
varonce149 = var150;
}
((struct instance_core__NativeArray*)var140)->values[2]=var150;
} else {
var140 = varonce139;
varonce139 = NULL;
}
{
var157 = nitc___nitc__MModule___nitc__model_base__MEntity__full_name(var_m105);
}
((struct instance_core__NativeArray*)var140)->values[1]=var157;
((struct instance_core__NativeArray*)var140)->values[3]=var_fp;
{
var158 = ((val*(*)(val* self))(var140->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var140); /* native_to_s on <var140:NativeArray[String]>*/
}
varonce139 = var140;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_l, var158); /* Direct call array$Array$add on <var_l:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_101&3)?class_info[((long)var_101&3)]:var_101->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_101); /* next on <var_101:IndexedIterator[MModule]>*/
}
}
BREAK_label103: (void)0;
{
((void(*)(val* self))((((long)var_101&3)?class_info[((long)var_101&3)]:var_101->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_101); /* finish on <var_101:IndexedIterator[MModule]>*/
}
if (unlikely(varonce159==NULL)) {
var160 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce161!=NULL)) {
var162 = varonce161;
} else {
var163 = "Error: conflicting module for `";
var165 = (val*)(31l<<2|1);
var166 = (val*)(31l<<2|1);
var167 = (val*)((long)(0)<<2|3);
var168 = (val*)((long)(0)<<2|3);
var164 = core__flat___CString___to_s_unsafe(var163, var165, var166, var167, var168);
var162 = var164;
varonce161 = var162;
}
((struct instance_core__NativeArray*)var160)->values[0]=var162;
if (likely(varonce169!=NULL)) {
var170 = varonce169;
} else {
var171 = "`: ";
var173 = (val*)(3l<<2|1);
var174 = (val*)(3l<<2|1);
var175 = (val*)((long)(0)<<2|3);
var176 = (val*)((long)(0)<<2|3);
var172 = core__flat___CString___to_s_unsafe(var171, var173, var174, var175, var176);
var170 = var172;
varonce169 = var170;
}
((struct instance_core__NativeArray*)var160)->values[2]=var170;
if (likely(varonce177!=NULL)) {
var178 = varonce177;
} else {
var179 = " ";
var181 = (val*)(1l<<2|1);
var182 = (val*)(1l<<2|1);
var183 = (val*)((long)(0)<<2|3);
var184 = (val*)((long)(0)<<2|3);
var180 = core__flat___CString___to_s_unsafe(var179, var181, var182, var183, var184);
var178 = var180;
varonce177 = var178;
}
((struct instance_core__NativeArray*)var160)->values[4]=var178;
} else {
var160 = varonce159;
varonce159 = NULL;
}
((struct instance_core__NativeArray*)var160)->values[1]=var_path;
if (likely(varonce185!=NULL)) {
var186 = varonce185;
} else {
var187 = ", ";
var189 = (val*)(2l<<2|1);
var190 = (val*)(2l<<2|1);
var191 = (val*)((long)(0)<<2|3);
var192 = (val*)((long)(0)<<2|3);
var188 = core__flat___CString___to_s_unsafe(var187, var189, var190, var191, var192);
var186 = var188;
varonce185 = var186;
}
{
var193 = core__abstract_text___Collection___join(var_l, var186, ((val*)NULL));
}
((struct instance_core__NativeArray*)var160)->values[3]=var193;
{
var194 = ((val*(*)(val* self))(var160->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var160); /* native_to_s on <var160:NativeArray[String]>*/
}
varonce159 = var160;
{
{ /* Inline loader$ModelBuilder$last_loader_error= (self,var194) on <self:ModelBuilder> */
self->attrs[COLOR_nitc__loader__ModelBuilder___last_loader_error].val = var194; /* _last_loader_error on <self:ModelBuilder> */
RET_LABEL195:(void)0;
}
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
} else {
}
var196 = NEW_more_collections__BestDistance(&type_more_collections__BestDistance__core__String);
{
var197 = ((long(*)(val* self))(var_path->class->vft[COLOR_core__abstract_text__Text__length]))(var_path); /* length on <var_path:String>*/
}
{
{ /* Inline kernel$Int$/ (var197,2l) on <var197:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var200 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var200)) {
var_class_name203 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name203);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 733);
fatal_exit(1);
}
var204 = var197 / 2l;
var198 = var204;
goto RET_LABEL199;
RET_LABEL199:(void)0;
}
}
{
((void(*)(val* self, long p0))(var196->class->vft[COLOR_more_collections__BestDistance__best_distance_61d]))(var196, var198); /* best_distance= on <var196:BestDistance[String]>*/
}
{
((void(*)(val* self))(var196->class->vft[COLOR_core__kernel__Object__init]))(var196); /* init on <var196:BestDistance[String]>*/
}
var_bests = var196;
{
{ /* Inline mpackage$MGroup$mpackage (var_g) on <var_g:nullable MGroup(MGroup)> */
var207 = var_g->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val; /* _mpackage on <var_g:nullable MGroup(MGroup)> */
if (unlikely(var207 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 76);
fatal_exit(1);
}
var205 = var207;
RET_LABEL206:(void)0;
}
}
{
{ /* Inline mpackage$MPackage$mgroups (var205) on <var205:MPackage> */
var210 = var205->attrs[COLOR_nitc__mpackage__MPackage___mgroups].val; /* _mgroups on <var205:MPackage> */
if (unlikely(var210 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroups");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 42);
fatal_exit(1);
}
var208 = var210;
RET_LABEL209:(void)0;
}
}
var_211 = var208;
{
var212 = poset___poset__POSet___core__abstract_collection__Collection__iterator(var_211);
}
var_213 = var212;
for(;;) {
{
var214 = ((short int(*)(val* self))((((long)var_213&3)?class_info[((long)var_213&3)]:var_213->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_213); /* is_ok on <var_213:Iterator[MGroup]>*/
}
if (var214){
} else {
goto BREAK_label215;
}
{
var216 = ((val*(*)(val* self))((((long)var_213&3)?class_info[((long)var_213&3)]:var_213->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_213); /* item on <var_213:Iterator[MGroup]>*/
}
var_sg = var216;
{
{ /* Inline mmodule$MGroup$mmodules (var_sg) on <var_sg:MGroup> */
var219 = var_sg->attrs[COLOR_nitc__mmodule__MGroup___mmodules].val; /* _mmodules on <var_sg:MGroup> */
if (unlikely(var219 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 54);
fatal_exit(1);
}
var217 = var219;
RET_LABEL218:(void)0;
}
}
var_220 = var217;
{
var221 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_220);
}
var_222 = var221;
for(;;) {
{
var223 = ((short int(*)(val* self))((((long)var_222&3)?class_info[((long)var_222&3)]:var_222->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_222); /* is_ok on <var_222:IndexedIterator[MModule]>*/
}
if (var223){
} else {
goto BREAK_label224;
}
{
var225 = ((val*(*)(val* self))((((long)var_222&3)?class_info[((long)var_222&3)]:var_222->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_222); /* item on <var_222:IndexedIterator[MModule]>*/
}
var_m226 = var225;
{
var227 = nitc___nitc__MModule___nitc__model_base__MEntity__full_name(var_m226);
}
{
var228 = core___core__Text___levenshtein_distance(var_path, var227);
}
var_d = var228;
{
var229 = nitc___nitc__MModule___nitc__model_base__MEntity__full_name(var_m226);
}
{
var230 = more_collections___more_collections__BestDistance___update(var_bests, var_d, var229);
}
{
((void(*)(val* self))((((long)var_222&3)?class_info[((long)var_222&3)]:var_222->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_222); /* next on <var_222:IndexedIterator[MModule]>*/
}
}
BREAK_label224: (void)0;
{
((void(*)(val* self))((((long)var_222&3)?class_info[((long)var_222&3)]:var_222->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_222); /* finish on <var_222:IndexedIterator[MModule]>*/
}
{
((void(*)(val* self))((((long)var_213&3)?class_info[((long)var_213&3)]:var_213->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_213); /* next on <var_213:Iterator[MGroup]>*/
}
}
BREAK_label215: (void)0;
{
((void(*)(val* self))((((long)var_213&3)?class_info[((long)var_213&3)]:var_213->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_213); /* finish on <var_213:Iterator[MGroup]>*/
}
if (unlikely(varonce231==NULL)) {
var232 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce233!=NULL)) {
var234 = varonce233;
} else {
var235 = "Error: cannot find module `";
var237 = (val*)(27l<<2|1);
var238 = (val*)(27l<<2|1);
var239 = (val*)((long)(0)<<2|3);
var240 = (val*)((long)(0)<<2|3);
var236 = core__flat___CString___to_s_unsafe(var235, var237, var238, var239, var240);
var234 = var236;
varonce233 = var234;
}
((struct instance_core__NativeArray*)var232)->values[0]=var234;
if (likely(varonce241!=NULL)) {
var242 = varonce241;
} else {
var243 = "`.";
var245 = (val*)(2l<<2|1);
var246 = (val*)(2l<<2|1);
var247 = (val*)((long)(0)<<2|3);
var248 = (val*)((long)(0)<<2|3);
var244 = core__flat___CString___to_s_unsafe(var243, var245, var246, var247, var248);
var242 = var244;
varonce241 = var242;
}
((struct instance_core__NativeArray*)var232)->values[2]=var242;
} else {
var232 = varonce231;
varonce231 = NULL;
}
((struct instance_core__NativeArray*)var232)->values[1]=var_path;
{
var249 = ((val*(*)(val* self))(var232->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var232); /* native_to_s on <var232:NativeArray[String]>*/
}
varonce231 = var232;
var_last_loader_error = var249;
{
{ /* Inline more_collections$BestDistance$best_items (var_bests) on <var_bests:BestDistance[String]> */
var252 = var_bests->attrs[COLOR_more_collections__BestDistance___best_items].val; /* _best_items on <var_bests:BestDistance[String]> */
if (unlikely(var252 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _best_items");
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 562);
fatal_exit(1);
}
var250 = var252;
RET_LABEL251:(void)0;
}
}
{
var253 = core___core__Collection___not_empty(var250);
}
if (var253){
if (likely(varonce254!=NULL)) {
var255 = varonce254;
} else {
var256 = " Did you mean ";
var258 = (val*)(14l<<2|1);
var259 = (val*)(14l<<2|1);
var260 = (val*)((long)(0)<<2|3);
var261 = (val*)((long)(0)<<2|3);
var257 = core__flat___CString___to_s_unsafe(var256, var258, var259, var260, var261);
var255 = var257;
varonce254 = var255;
}
{
{ /* Inline more_collections$BestDistance$best_items (var_bests) on <var_bests:BestDistance[String]> */
var264 = var_bests->attrs[COLOR_more_collections__BestDistance___best_items].val; /* _best_items on <var_bests:BestDistance[String]> */
if (unlikely(var264 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _best_items");
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 562);
fatal_exit(1);
}
var262 = var264;
RET_LABEL263:(void)0;
}
}
if (likely(varonce265!=NULL)) {
var266 = varonce265;
} else {
var267 = ", ";
var269 = (val*)(2l<<2|1);
var270 = (val*)(2l<<2|1);
var271 = (val*)((long)(0)<<2|3);
var272 = (val*)((long)(0)<<2|3);
var268 = core__flat___CString___to_s_unsafe(var267, var269, var270, var271, var272);
var266 = var268;
varonce265 = var266;
}
if (likely(varonce273!=NULL)) {
var274 = varonce273;
} else {
var275 = " or ";
var277 = (val*)(4l<<2|1);
var278 = (val*)(4l<<2|1);
var279 = (val*)((long)(0)<<2|3);
var280 = (val*)((long)(0)<<2|3);
var276 = core__flat___CString___to_s_unsafe(var275, var277, var278, var279, var280);
var274 = var276;
varonce273 = var274;
}
{
var281 = core__abstract_text___Collection___join(var262, var266, var274);
}
{
var282 = ((val*(*)(val* self, val* p0))(var255->class->vft[COLOR_core__abstract_text__Text___43d]))(var255, var281); /* + on <var255:String>*/
}
if (likely(varonce283!=NULL)) {
var284 = varonce283;
} else {
var285 = "?";
var287 = (val*)(1l<<2|1);
var288 = (val*)(1l<<2|1);
var289 = (val*)((long)(0)<<2|3);
var290 = (val*)((long)(0)<<2|3);
var286 = core__flat___CString___to_s_unsafe(var285, var287, var288, var289, var290);
var284 = var286;
varonce283 = var284;
}
{
var291 = ((val*(*)(val* self, val* p0))(var282->class->vft[COLOR_core__abstract_text__Text___43d]))(var282, var284); /* + on <var282:Text(String)>*/
}
{
var292 = ((val*(*)(val* self, val* p0))(var_last_loader_error->class->vft[COLOR_core__abstract_text__Text___43d]))(var_last_loader_error, var291); /* + on <var_last_loader_error:String>*/
}
var_last_loader_error = var292;
} else {
}
{
{ /* Inline loader$ModelBuilder$last_loader_error= (self,var_last_loader_error) on <self:ModelBuilder> */
self->attrs[COLOR_nitc__loader__ModelBuilder___last_loader_error].val = var_last_loader_error; /* _last_loader_error on <self:ModelBuilder> */
RET_LABEL293:(void)0;
}
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
} else {
}
var = ((val*)NULL);
goto RET_LABEL;
BREAK_label: (void)0;
} else {
}
{
var294 = core__file___Text___file_exists(var_path);
}
var295 = !var294;
if (var295){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline loader$ModelBuilder$identified_modules_by_path (self) on <self:ModelBuilder> */
var298 = self->attrs[COLOR_nitc__loader__ModelBuilder___identified_modules_by_path].val; /* _identified_modules_by_path on <self:ModelBuilder> */
if (unlikely(var298 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _identified_modules_by_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 316);
fatal_exit(1);
}
var296 = var298;
RET_LABEL297:(void)0;
}
}
{
var299 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var296, var_path);
}
if (var299){
{
{ /* Inline loader$ModelBuilder$identified_modules_by_path (self) on <self:ModelBuilder> */
var302 = self->attrs[COLOR_nitc__loader__ModelBuilder___identified_modules_by_path].val; /* _identified_modules_by_path on <self:ModelBuilder> */
if (unlikely(var302 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _identified_modules_by_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 316);
fatal_exit(1);
}
var300 = var302;
RET_LABEL301:(void)0;
}
}
{
var303 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var300, var_path);
}
var = var303;
goto RET_LABEL;
} else {
}
{
var304 = nitc__loader___ModelBuilder___module_absolute_path(self, var_path);
}
var_rp = var304;
{
{ /* Inline loader$ModelBuilder$identified_modules_by_path (self) on <self:ModelBuilder> */
var307 = self->attrs[COLOR_nitc__loader__ModelBuilder___identified_modules_by_path].val; /* _identified_modules_by_path on <self:ModelBuilder> */
if (unlikely(var307 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _identified_modules_by_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 316);
fatal_exit(1);
}
var305 = var307;
RET_LABEL306:(void)0;
}
}
{
var308 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var305, var_rp);
}
if (var308){
{
{ /* Inline loader$ModelBuilder$identified_modules_by_path (self) on <self:ModelBuilder> */
var311 = self->attrs[COLOR_nitc__loader__ModelBuilder___identified_modules_by_path].val; /* _identified_modules_by_path on <self:ModelBuilder> */
if (unlikely(var311 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _identified_modules_by_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 316);
fatal_exit(1);
}
var309 = var311;
RET_LABEL310:(void)0;
}
}
{
var312 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var309, var_rp);
}
var = var312;
goto RET_LABEL;
} else {
}
if (likely(varonce313!=NULL)) {
var314 = varonce313;
} else {
var315 = ".nit";
var317 = (val*)(4l<<2|1);
var318 = (val*)(4l<<2|1);
var319 = (val*)((long)(0)<<2|3);
var320 = (val*)((long)(0)<<2|3);
var316 = core__flat___CString___to_s_unsafe(var315, var317, var318, var319, var320);
var314 = var316;
varonce313 = var314;
}
{
var321 = ((val*(*)(val* self, val* p0))(var_path->class->vft[COLOR_core__file__String__basename]))(var_path, var314); /* basename on <var_path:String>*/
}
var_pn = var321;
if (likely(varonce322!=NULL)) {
var323 = varonce322;
} else {
var324 = "..";
var326 = (val*)(2l<<2|1);
var327 = (val*)(2l<<2|1);
var328 = (val*)((long)(0)<<2|3);
var329 = (val*)((long)(0)<<2|3);
var325 = core__flat___CString___to_s_unsafe(var324, var326, var327, var328, var329);
var323 = var325;
varonce322 = var323;
}
{
var330 = core__file___String___join_path(var_path, var323);
}
{
var331 = core__file___String___simplify_path(var330);
}
var_mgrouppath = var331;
{
var332 = nitc__loader___ModelBuilder___identify_group(self, var_mgrouppath);
}
var_mgroup333 = var332;
if (var_mgroup333 == NULL) {
var334 = 0; /* is null */
} else {
var334 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_mgroup333,((val*)NULL)) on <var_mgroup333:nullable MGroup> */
var_other = ((val*)NULL);
{
var337 = ((short int(*)(val* self, val* p0))(var_mgroup333->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mgroup333, var_other); /* == on <var_mgroup333:nullable MGroup(MGroup)>*/
}
var338 = !var337;
var335 = var338;
goto RET_LABEL336;
RET_LABEL336:(void)0;
}
var334 = var335;
}
if (var334){
{
{ /* Inline mpackage$MGroup$mpackage (var_mgroup333) on <var_mgroup333:nullable MGroup(MGroup)> */
var341 = var_mgroup333->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val; /* _mpackage on <var_mgroup333:nullable MGroup(MGroup)> */
if (unlikely(var341 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 76);
fatal_exit(1);
}
var339 = var341;
RET_LABEL340:(void)0;
}
}
var_mpackage = var339;
{
var342 = nitc__loader___MPackage___accept(var_mpackage, var_path);
}
var343 = !var342;
if (var343){
var_mgroup333 = ((val*)NULL);
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var346 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var346 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var344 = var346;
RET_LABEL345:(void)0;
}
}
if (unlikely(varonce347==NULL)) {
var348 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce349!=NULL)) {
var350 = varonce349;
} else {
var351 = "module `";
var353 = (val*)(8l<<2|1);
var354 = (val*)(8l<<2|1);
var355 = (val*)((long)(0)<<2|3);
var356 = (val*)((long)(0)<<2|3);
var352 = core__flat___CString___to_s_unsafe(var351, var353, var354, var355, var356);
var350 = var352;
varonce349 = var350;
}
((struct instance_core__NativeArray*)var348)->values[0]=var350;
if (likely(varonce357!=NULL)) {
var358 = varonce357;
} else {
var359 = "` excluded from package `";
var361 = (val*)(25l<<2|1);
var362 = (val*)(25l<<2|1);
var363 = (val*)((long)(0)<<2|3);
var364 = (val*)((long)(0)<<2|3);
var360 = core__flat___CString___to_s_unsafe(var359, var361, var362, var363, var364);
var358 = var360;
varonce357 = var358;
}
((struct instance_core__NativeArray*)var348)->values[2]=var358;
if (likely(varonce365!=NULL)) {
var366 = varonce365;
} else {
var367 = "`";
var369 = (val*)(1l<<2|1);
var370 = (val*)(1l<<2|1);
var371 = (val*)((long)(0)<<2|3);
var372 = (val*)((long)(0)<<2|3);
var368 = core__flat___CString___to_s_unsafe(var367, var369, var370, var371, var372);
var366 = var368;
varonce365 = var366;
}
((struct instance_core__NativeArray*)var348)->values[4]=var366;
} else {
var348 = varonce347;
varonce347 = NULL;
}
((struct instance_core__NativeArray*)var348)->values[1]=var_path;
{
var373 = ((val*(*)(val* self))(var_mpackage->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mpackage); /* to_s on <var_mpackage:MPackage>*/
}
((struct instance_core__NativeArray*)var348)->values[3]=var373;
{
var374 = ((val*(*)(val* self))(var348->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var348); /* native_to_s on <var348:NativeArray[String]>*/
}
varonce347 = var348;
{
nitc___nitc__ToolContext___info(var344, var374, 2l); /* Direct call toolcontext$ToolContext$info on <var344:ToolContext>*/
}
} else {
}
} else {
}
if (var_mgroup333 == NULL) {
var375 = 1; /* is null */
} else {
var375 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mgroup333,((val*)NULL)) on <var_mgroup333:nullable MGroup> */
var_other378 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mgroup333,var_other378) on <var_mgroup333:nullable MGroup(MGroup)> */
var381 = var_mgroup333 == var_other378;
var379 = var381;
goto RET_LABEL380;
RET_LABEL380:(void)0;
}
}
var376 = var379;
goto RET_LABEL377;
RET_LABEL377:(void)0;
}
var375 = var376;
}
if (var375){
var382 = NEW_nitc__Location(&type_nitc__Location);
{
nitc___nitc__Location___opaque_file(var382, var_path); /* Direct call location$Location$opaque_file on <var382:Location>*/
}
var_loc = var382;
var383 = NEW_nitc__MPackage(&type_nitc__MPackage);
{
{ /* Inline modelbuilder_base$ModelBuilder$model (self) on <self:ModelBuilder> */
var386 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var386 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 44);
fatal_exit(1);
}
var384 = var386;
RET_LABEL385:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var383->class->vft[COLOR_nitc__mpackage__MPackage__name_61d]))(var383, var_pn); /* name= on <var383:MPackage>*/
}
{
((void(*)(val* self, val* p0))(var383->class->vft[COLOR_nitc__mpackage__MPackage__model_61d]))(var383, var384); /* model= on <var383:MPackage>*/
}
{
((void(*)(val* self, val* p0))(var383->class->vft[COLOR_nitc__mpackage__MPackage__location_61d]))(var383, var_loc); /* location= on <var383:MPackage>*/
}
{
((void(*)(val* self))(var383->class->vft[COLOR_core__kernel__Object__init]))(var383); /* init on <var383:MPackage>*/
}
var_mpackage387 = var383;
var388 = NEW_nitc__MGroup(&type_nitc__MGroup);
{
((void(*)(val* self, val* p0))(var388->class->vft[COLOR_nitc__mpackage__MGroup__name_61d]))(var388, var_pn); /* name= on <var388:MGroup>*/
}
{
((void(*)(val* self, val* p0))(var388->class->vft[COLOR_nitc__mpackage__MGroup__location_61d]))(var388, var_loc); /* location= on <var388:MGroup>*/
}
{
((void(*)(val* self, val* p0))(var388->class->vft[COLOR_nitc__mpackage__MGroup__mpackage_61d]))(var388, var_mpackage387); /* mpackage= on <var388:MGroup>*/
}
{
((void(*)(val* self, val* p0))(var388->class->vft[COLOR_nitc__mpackage__MGroup__parent_61d]))(var388, ((val*)NULL)); /* parent= on <var388:MGroup>*/
}
{
((void(*)(val* self))(var388->class->vft[COLOR_core__kernel__Object__init]))(var388); /* init on <var388:MGroup>*/
}
var_mgroup333 = var388;
{
{ /* Inline mpackage$MPackage$root= (var_mpackage387,var_mgroup333) on <var_mpackage387:MPackage> */
var_mpackage387->attrs[COLOR_nitc__mpackage__MPackage___root].val = var_mgroup333; /* _root on <var_mpackage387:MPackage> */
RET_LABEL389:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var392 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var392 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var390 = var392;
RET_LABEL391:(void)0;
}
}
if (unlikely(varonce393==NULL)) {
var394 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce395!=NULL)) {
var396 = varonce395;
} else {
var397 = "found singleton package `";
var399 = (val*)(25l<<2|1);
var400 = (val*)(25l<<2|1);
var401 = (val*)((long)(0)<<2|3);
var402 = (val*)((long)(0)<<2|3);
var398 = core__flat___CString___to_s_unsafe(var397, var399, var400, var401, var402);
var396 = var398;
varonce395 = var396;
}
((struct instance_core__NativeArray*)var394)->values[0]=var396;
if (likely(varonce403!=NULL)) {
var404 = varonce403;
} else {
var405 = "` at ";
var407 = (val*)(5l<<2|1);
var408 = (val*)(5l<<2|1);
var409 = (val*)((long)(0)<<2|3);
var410 = (val*)((long)(0)<<2|3);
var406 = core__flat___CString___to_s_unsafe(var405, var407, var408, var409, var410);
var404 = var406;
varonce403 = var404;
}
((struct instance_core__NativeArray*)var394)->values[2]=var404;
} else {
var394 = varonce393;
varonce393 = NULL;
}
((struct instance_core__NativeArray*)var394)->values[1]=var_pn;
((struct instance_core__NativeArray*)var394)->values[3]=var_path;
{
var411 = ((val*(*)(val* self))(var394->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var394); /* native_to_s on <var394:NativeArray[String]>*/
}
varonce393 = var394;
{
nitc___nitc__ToolContext___info(var390, var411, 2l); /* Direct call toolcontext$ToolContext$info on <var390:ToolContext>*/
}
{
var412 = core__file___String___dirname(var_path);
}
if (unlikely(varonce413==NULL)) {
var414 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce415!=NULL)) {
var416 = varonce415;
} else {
var417 = ".ini";
var419 = (val*)(4l<<2|1);
var420 = (val*)(4l<<2|1);
var421 = (val*)((long)(0)<<2|3);
var422 = (val*)((long)(0)<<2|3);
var418 = core__flat___CString___to_s_unsafe(var417, var419, var420, var421, var422);
var416 = var418;
varonce415 = var416;
}
((struct instance_core__NativeArray*)var414)->values[1]=var416;
} else {
var414 = varonce413;
varonce413 = NULL;
}
((struct instance_core__NativeArray*)var414)->values[0]=var_pn;
{
var423 = ((val*(*)(val* self))(var414->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var414); /* native_to_s on <var414:NativeArray[String]>*/
}
varonce413 = var414;
{
var424 = core__file___String____47d(var412, var423);
}
var_inipath = var424;
{
var425 = core__file___Text___file_exists(var_inipath);
}
if (var425){
var426 = NEW_ini__ConfigTree(&type_ini__ConfigTree);
{
((void(*)(val* self, val* p0))(var426->class->vft[COLOR_ini__ConfigTree__ini_file_61d]))(var426, var_inipath); /* ini_file= on <var426:ConfigTree>*/
}
{
((void(*)(val* self))(var426->class->vft[COLOR_core__kernel__Object__init]))(var426); /* init on <var426:ConfigTree>*/
}
var_ini = var426;
{
{ /* Inline loader$MPackage$ini= (var_mpackage387,var_ini) on <var_mpackage387:MPackage> */
var_mpackage387->attrs[COLOR_nitc__loader__MPackage___ini].val = var_ini; /* _ini on <var_mpackage387:MPackage> */
RET_LABEL427:(void)0;
}
}
} else {
}
} else {
}
var428 = NEW_nitc__Location(&type_nitc__Location);
{
nitc___nitc__Location___opaque_file(var428, var_path); /* Direct call location$Location$opaque_file on <var428:Location>*/
}
var_loc429 = var428;
var430 = NEW_nitc__MModule(&type_nitc__MModule);
{
{ /* Inline modelbuilder_base$ModelBuilder$model (self) on <self:ModelBuilder> */
var433 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var433 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 44);
fatal_exit(1);
}
var431 = var433;
RET_LABEL432:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var430->class->vft[COLOR_nitc__mmodule__MModule__model_61d]))(var430, var431); /* model= on <var430:MModule>*/
}
{
((void(*)(val* self, val* p0))(var430->class->vft[COLOR_nitc__mmodule__MModule__mgroup_61d]))(var430, var_mgroup333); /* mgroup= on <var430:MModule>*/
}
{
((void(*)(val* self, val* p0))(var430->class->vft[COLOR_nitc__mmodule__MModule__name_61d]))(var430, var_pn); /* name= on <var430:MModule>*/
}
{
((void(*)(val* self, val* p0))(var430->class->vft[COLOR_nitc__mmodule__MModule__location_61d]))(var430, var_loc429); /* location= on <var430:MModule>*/
}
{
((void(*)(val* self))(var430->class->vft[COLOR_core__kernel__Object__init]))(var430); /* init on <var430:MModule>*/
}
var_res434 = var430;
{
{ /* Inline loader$ModelBuilder$identified_modules_by_path (self) on <self:ModelBuilder> */
var437 = self->attrs[COLOR_nitc__loader__ModelBuilder___identified_modules_by_path].val; /* _identified_modules_by_path on <self:ModelBuilder> */
if (unlikely(var437 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _identified_modules_by_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 316);
fatal_exit(1);
}
var435 = var437;
RET_LABEL436:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var435, var_rp, var_res434); /* Direct call hash_collection$HashMap$[]= on <var435:HashMap[String, nullable MModule]>*/
}
{
{ /* Inline loader$ModelBuilder$identified_modules_by_path (self) on <self:ModelBuilder> */
var440 = self->attrs[COLOR_nitc__loader__ModelBuilder___identified_modules_by_path].val; /* _identified_modules_by_path on <self:ModelBuilder> */
if (unlikely(var440 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _identified_modules_by_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 316);
fatal_exit(1);
}
var438 = var440;
RET_LABEL439:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var438, var_path, var_res434); /* Direct call hash_collection$HashMap$[]= on <var438:HashMap[String, nullable MModule]>*/
}
{
{ /* Inline loader$ModelBuilder$identified_modules (self) on <self:ModelBuilder> */
var443 = self->attrs[COLOR_nitc__loader__ModelBuilder___identified_modules].val; /* _identified_modules on <self:ModelBuilder> */
if (unlikely(var443 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _identified_modules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 319);
fatal_exit(1);
}
var441 = var443;
RET_LABEL442:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var441, var_res434); /* Direct call array$Array$add on <var441:Array[MModule]>*/
}
var = var_res434;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader$ModelBuilder$mgroups for (self: ModelBuilder): HashMap[String, nullable MGroup] */
val* nitc__loader___ModelBuilder___mgroups(val* self) {
val* var /* : HashMap[String, nullable MGroup] */;
val* var1 /* : HashMap[String, nullable MGroup] */;
var1 = self->attrs[COLOR_nitc__loader__ModelBuilder___mgroups].val; /* _mgroups on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroups");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 477);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader$ModelBuilder$identify_group for (self: ModelBuilder, String): nullable MGroup */
val* nitc__loader___ModelBuilder___identify_group(val* self, val* p0) {
val* var /* : nullable MGroup */;
val* var_dirpath /* var dirpath: String */;
val* var2 /* : nullable FileStat */;
val* var_stat /* var stat: nullable FileStat */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
short int var_ /* var : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : SequenceRead[Char] */;
val* var13 /* : nullable Object */;
short int var14 /* : Bool */;
val* var15 /* : Array[String] */;
val* var17 /* : Array[String] */;
val* var_18 /* var : Array[String] */;
val* var19 /* : IndexedIterator[nullable Object] */;
val* var_20 /* var : IndexedIterator[String] */;
short int var21 /* : Bool */;
val* var22 /* : nullable Object */;
val* var_p /* var p: String */;
val* var23 /* : String */;
val* var_try /* var try: String */;
val* var24 /* : nullable FileStat */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var_other28 /* var other: nullable Object */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : NativeArray[String] */;
static val* varonce;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : CString */;
val* var37 /* : String */;
val* var38 /* : nullable Int */;
val* var39 /* : nullable Int */;
val* var40 /* : nullable Bool */;
val* var41 /* : nullable Bool */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : CString */;
val* var45 /* : String */;
val* var46 /* : nullable Int */;
val* var47 /* : nullable Int */;
val* var48 /* : nullable Bool */;
val* var49 /* : nullable Bool */;
val* var50 /* : String */;
val* var52 /* : String */;
val* var_rdp /* var rdp: String */;
val* var53 /* : HashMap[String, nullable MGroup] */;
val* var55 /* : HashMap[String, nullable MGroup] */;
short int var56 /* : Bool */;
val* var57 /* : HashMap[String, nullable MGroup] */;
val* var59 /* : HashMap[String, nullable MGroup] */;
val* var60 /* : nullable Object */;
val* var61 /* : String */;
val* var_pn /* var pn: String */;
val* var_ini /* var ini: nullable Object */;
val* var_parent /* var parent: nullable Object */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : CString */;
val* var65 /* : String */;
val* var66 /* : nullable Int */;
val* var67 /* : nullable Int */;
val* var68 /* : nullable Bool */;
val* var69 /* : nullable Bool */;
val* var70 /* : String */;
val* var_inipath /* var inipath: String */;
short int var71 /* : Bool */;
val* var72 /* : ConfigTree */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
short int var76 /* : Bool */;
short int var78 /* : Bool */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : CString */;
val* var82 /* : String */;
val* var83 /* : nullable Int */;
val* var84 /* : nullable Int */;
val* var85 /* : nullable Bool */;
val* var86 /* : nullable Bool */;
short int var87 /* : Bool */;
val* var88 /* : HashMap[String, nullable MGroup] */;
val* var90 /* : HashMap[String, nullable MGroup] */;
val* var92 /* : NativeArray[String] */;
static val* varonce91;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : CString */;
val* var96 /* : String */;
val* var97 /* : nullable Int */;
val* var98 /* : nullable Int */;
val* var99 /* : nullable Bool */;
val* var100 /* : nullable Bool */;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : CString */;
val* var104 /* : String */;
val* var105 /* : nullable Int */;
val* var106 /* : nullable Int */;
val* var107 /* : nullable Bool */;
val* var108 /* : nullable Bool */;
val* var109 /* : String */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : CString */;
val* var114 /* : String */;
val* var115 /* : nullable Int */;
val* var116 /* : nullable Int */;
val* var117 /* : nullable Bool */;
val* var118 /* : nullable Bool */;
val* var119 /* : String */;
short int var120 /* : Bool */;
val* var121 /* : HashMap[String, nullable MGroup] */;
val* var123 /* : HashMap[String, nullable MGroup] */;
val* var125 /* : NativeArray[String] */;
static val* varonce124;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : CString */;
val* var129 /* : String */;
val* var130 /* : nullable Int */;
val* var131 /* : nullable Int */;
val* var132 /* : nullable Bool */;
val* var133 /* : nullable Bool */;
static val* varonce134;
val* var135 /* : String */;
char* var136 /* : CString */;
val* var137 /* : String */;
val* var138 /* : nullable Int */;
val* var139 /* : nullable Int */;
val* var140 /* : nullable Bool */;
val* var141 /* : nullable Bool */;
val* var142 /* : String */;
static val* varonce144;
val* var145 /* : String */;
char* var146 /* : CString */;
val* var147 /* : String */;
val* var148 /* : nullable Int */;
val* var149 /* : nullable Int */;
val* var150 /* : nullable Bool */;
val* var151 /* : nullable Bool */;
val* var152 /* : String */;
val* var153 /* : String */;
val* var_parentpath /* var parentpath: String */;
static val* varonce154;
val* var155 /* : String */;
char* var156 /* : CString */;
val* var157 /* : String */;
val* var158 /* : nullable Int */;
val* var159 /* : nullable Int */;
val* var160 /* : nullable Bool */;
val* var161 /* : nullable Bool */;
val* var162 /* : String */;
val* var_stopper /* var stopper: String */;
short int var163 /* : Bool */;
short int var164 /* : Bool */;
val* var165 /* : nullable MGroup */;
short int var166 /* : Bool */;
short int var167 /* : Bool */;
short int var169 /* : Bool */;
short int var170 /* : Bool */;
val* var171 /* : MPackage */;
val* var173 /* : MPackage */;
val* var_mpackage /* var mpackage: MPackage */;
short int var174 /* : Bool */;
short int var175 /* : Bool */;
val* var176 /* : ToolContext */;
val* var178 /* : ToolContext */;
val* var180 /* : NativeArray[String] */;
static val* varonce179;
static val* varonce181;
val* var182 /* : String */;
char* var183 /* : CString */;
val* var184 /* : String */;
val* var185 /* : nullable Int */;
val* var186 /* : nullable Int */;
val* var187 /* : nullable Bool */;
val* var188 /* : nullable Bool */;
static val* varonce189;
val* var190 /* : String */;
char* var191 /* : CString */;
val* var192 /* : String */;
val* var193 /* : nullable Int */;
val* var194 /* : nullable Int */;
val* var195 /* : nullable Bool */;
val* var196 /* : nullable Bool */;
static val* varonce197;
val* var198 /* : String */;
char* var199 /* : CString */;
val* var200 /* : String */;
val* var201 /* : nullable Int */;
val* var202 /* : nullable Int */;
val* var203 /* : nullable Bool */;
val* var204 /* : nullable Bool */;
val* var205 /* : String */;
val* var206 /* : String */;
short int var207 /* : Bool */;
short int var208 /* : Bool */;
short int var210 /* : Bool */;
short int var212 /* : Bool */;
val* var213 /* : HashMap[String, nullable MGroup] */;
val* var215 /* : HashMap[String, nullable MGroup] */;
val* var217 /* : NativeArray[String] */;
static val* varonce216;
static val* varonce218;
val* var219 /* : String */;
char* var220 /* : CString */;
val* var221 /* : String */;
val* var222 /* : nullable Int */;
val* var223 /* : nullable Int */;
val* var224 /* : nullable Bool */;
val* var225 /* : nullable Bool */;
static val* varonce226;
val* var227 /* : String */;
char* var228 /* : CString */;
val* var229 /* : String */;
val* var230 /* : nullable Int */;
val* var231 /* : nullable Int */;
val* var232 /* : nullable Bool */;
val* var233 /* : nullable Bool */;
val* var234 /* : String */;
val* var236 /* : Location */;
val* var_loc /* var loc: Location */;
short int var237 /* : Bool */;
short int var238 /* : Bool */;
short int var240 /* : Bool */;
short int var242 /* : Bool */;
short int var243 /* : Bool */;
short int var244 /* : Bool */;
short int var246 /* : Bool */;
short int var247 /* : Bool */;
val* var248 /* : String */;
static val* varonce249;
val* var250 /* : String */;
char* var251 /* : CString */;
val* var252 /* : String */;
val* var253 /* : nullable Int */;
val* var254 /* : nullable Int */;
val* var255 /* : nullable Bool */;
val* var256 /* : nullable Bool */;
val* var257 /* : nullable String */;
val* var258 /* : MPackage */;
val* var259 /* : Model */;
val* var261 /* : Model */;
val* var_mpackage262 /* var mpackage: MPackage */;
val* var263 /* : MGroup */;
val* var_mgroup /* var mgroup: nullable Object */;
val* var265 /* : ToolContext */;
val* var267 /* : ToolContext */;
val* var269 /* : NativeArray[String] */;
static val* varonce268;
static val* varonce270;
val* var271 /* : String */;
char* var272 /* : CString */;
val* var273 /* : String */;
val* var274 /* : nullable Int */;
val* var275 /* : nullable Int */;
val* var276 /* : nullable Bool */;
val* var277 /* : nullable Bool */;
static val* varonce278;
val* var279 /* : String */;
char* var280 /* : CString */;
val* var281 /* : String */;
val* var282 /* : nullable Int */;
val* var283 /* : nullable Int */;
val* var284 /* : nullable Bool */;
val* var285 /* : nullable Bool */;
val* var286 /* : String */;
val* var287 /* : String */;
val* var289 /* : MGroup */;
val* var290 /* : MPackage */;
val* var292 /* : MPackage */;
val* var293 /* : ToolContext */;
val* var295 /* : ToolContext */;
val* var297 /* : NativeArray[String] */;
static val* varonce296;
static val* varonce298;
val* var299 /* : String */;
char* var300 /* : CString */;
val* var301 /* : String */;
val* var302 /* : nullable Int */;
val* var303 /* : nullable Int */;
val* var304 /* : nullable Bool */;
val* var305 /* : nullable Bool */;
static val* varonce306;
val* var307 /* : String */;
char* var308 /* : CString */;
val* var309 /* : String */;
val* var310 /* : nullable Int */;
val* var311 /* : nullable Int */;
val* var312 /* : nullable Bool */;
val* var313 /* : nullable Bool */;
val* var314 /* : String */;
val* var315 /* : String */;
static val* varonce316;
val* var317 /* : String */;
char* var318 /* : CString */;
val* var319 /* : String */;
val* var320 /* : nullable Int */;
val* var321 /* : nullable Int */;
val* var322 /* : nullable Bool */;
val* var323 /* : nullable Bool */;
val* var324 /* : String */;
val* var_readme /* var readme: String */;
short int var325 /* : Bool */;
short int var326 /* : Bool */;
static val* varonce327;
val* var328 /* : String */;
char* var329 /* : CString */;
val* var330 /* : String */;
val* var331 /* : nullable Int */;
val* var332 /* : nullable Int */;
val* var333 /* : nullable Bool */;
val* var334 /* : nullable Bool */;
val* var335 /* : String */;
short int var336 /* : Bool */;
val* var337 /* : MDoc */;
val* var_mdoc /* var mdoc: MDoc */;
val* var340 /* : HashMap[String, nullable MGroup] */;
val* var342 /* : HashMap[String, nullable MGroup] */;
var_dirpath = p0;
{
{ /* Inline loader$ModelBuilder$last_loader_error= (self,((val*)NULL)) on <self:ModelBuilder> */
self->attrs[COLOR_nitc__loader__ModelBuilder___last_loader_error].val = ((val*)NULL); /* _last_loader_error on <self:ModelBuilder> */
RET_LABEL1:(void)0;
}
}
{
var2 = core__file___String___file_stat(var_dirpath);
}
var_stat = var2;
if (var_stat == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_stat,((val*)NULL)) on <var_stat:nullable FileStat> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_stat,var_other) on <var_stat:nullable FileStat(FileStat)> */
var9 = var_stat == var_other;
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
var_ = var4;
if (var4){
var3 = var_;
} else {
{
var10 = core___core__FileStat___is_dir(var_stat);
}
var11 = !var10;
var3 = var11;
}
if (var3){
{
var12 = ((val*(*)(val* self))(var_dirpath->class->vft[COLOR_core__abstract_text__Text__chars]))(var_dirpath); /* chars on <var_dirpath:String>*/
}
{
var13 = (val*)((long)('/')<<2|2);
var14 = ((short int(*)(val* self, val* p0))((((long)var12&3)?class_info[((long)var12&3)]:var12->class)->vft[COLOR_core__abstract_collection__Collection__has]))(var12, var13); /* has on <var12:SequenceRead[Char]>*/
}
if (var14){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline loader$ModelBuilder$paths (self) on <self:ModelBuilder> */
var17 = self->attrs[COLOR_nitc__loader__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 213);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_18 = var15;
{
var19 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_18);
}
var_20 = var19;
for(;;) {
{
var21 = ((short int(*)(val* self))((((long)var_20&3)?class_info[((long)var_20&3)]:var_20->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_20); /* is_ok on <var_20:IndexedIterator[String]>*/
}
if (var21){
} else {
goto BREAK_label;
}
{
var22 = ((val*(*)(val* self))((((long)var_20&3)?class_info[((long)var_20&3)]:var_20->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_20); /* item on <var_20:IndexedIterator[String]>*/
}
var_p = var22;
{
var23 = core__file___String____47d(var_p, var_dirpath);
}
var_try = var23;
{
var24 = core__file___String___file_stat(var_try);
}
var_stat = var24;
if (var_stat == NULL) {
var25 = 0; /* is null */
} else {
var25 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_stat,((val*)NULL)) on <var_stat:nullable FileStat> */
var_other28 = ((val*)NULL);
{
var29 = ((short int(*)(val* self, val* p0))(var_stat->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_stat, var_other28); /* == on <var_stat:nullable FileStat(FileStat)>*/
}
var30 = !var29;
var26 = var30;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
var25 = var26;
}
if (var25){
var_dirpath = var_try;
goto BREAK_;
} else {
}
{
((void(*)(val* self))((((long)var_20&3)?class_info[((long)var_20&3)]:var_20->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_20); /* next on <var_20:IndexedIterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_20&3)?class_info[((long)var_20&3)]:var_20->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_20); /* finish on <var_20:IndexedIterator[String]>*/
}
var = ((val*)NULL);
goto RET_LABEL;
BREAK_: (void)0;
} else {
}
{
var31 = core___core__FileStat___is_dir(var_stat);
}
var32 = !var31;
if (var32){
if (unlikely(varonce==NULL)) {
var33 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "Error: `";
var38 = (val*)(8l<<2|1);
var39 = (val*)(8l<<2|1);
var40 = (val*)((long)(0)<<2|3);
var41 = (val*)((long)(0)<<2|3);
var37 = core__flat___CString___to_s_unsafe(var36, var38, var39, var40, var41);
var35 = var37;
varonce34 = var35;
}
((struct instance_core__NativeArray*)var33)->values[0]=var35;
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "` is not a directory.";
var46 = (val*)(21l<<2|1);
var47 = (val*)(21l<<2|1);
var48 = (val*)((long)(0)<<2|3);
var49 = (val*)((long)(0)<<2|3);
var45 = core__flat___CString___to_s_unsafe(var44, var46, var47, var48, var49);
var43 = var45;
varonce42 = var43;
}
((struct instance_core__NativeArray*)var33)->values[2]=var43;
} else {
var33 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var33)->values[1]=var_dirpath;
{
var50 = ((val*(*)(val* self))(var33->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var33); /* native_to_s on <var33:NativeArray[String]>*/
}
varonce = var33;
{
{ /* Inline loader$ModelBuilder$last_loader_error= (self,var50) on <self:ModelBuilder> */
self->attrs[COLOR_nitc__loader__ModelBuilder___last_loader_error].val = var50; /* _last_loader_error on <self:ModelBuilder> */
RET_LABEL51:(void)0;
}
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var52 = nitc__loader___ModelBuilder___module_absolute_path(self, var_dirpath);
}
var_rdp = var52;
{
{ /* Inline loader$ModelBuilder$mgroups (self) on <self:ModelBuilder> */
var55 = self->attrs[COLOR_nitc__loader__ModelBuilder___mgroups].val; /* _mgroups on <self:ModelBuilder> */
if (unlikely(var55 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroups");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 477);
fatal_exit(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
var56 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var53, var_rdp);
}
if (var56){
{
{ /* Inline loader$ModelBuilder$mgroups (self) on <self:ModelBuilder> */
var59 = self->attrs[COLOR_nitc__loader__ModelBuilder___mgroups].val; /* _mgroups on <self:ModelBuilder> */
if (unlikely(var59 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroups");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 477);
fatal_exit(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
var60 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var57, var_rdp);
}
var = var60;
goto RET_LABEL;
} else {
}
{
var61 = ((val*(*)(val* self, val* p0))(var_rdp->class->vft[COLOR_core__file__String__basename]))(var_rdp, ((val*)NULL)); /* basename on <var_rdp:String>*/
}
var_pn = var61;
var_ini = ((val*)NULL);
var_parent = ((val*)NULL);
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = "package.ini";
var66 = (val*)(11l<<2|1);
var67 = (val*)(11l<<2|1);
var68 = (val*)((long)(0)<<2|3);
var69 = (val*)((long)(0)<<2|3);
var65 = core__flat___CString___to_s_unsafe(var64, var66, var67, var68, var69);
var63 = var65;
varonce62 = var63;
}
{
var70 = core__file___String____47d(var_dirpath, var63);
}
var_inipath = var70;
{
var71 = core__file___Text___file_exists(var_inipath);
}
if (var71){
var72 = NEW_ini__ConfigTree(&type_ini__ConfigTree);
{
((void(*)(val* self, val* p0))(var72->class->vft[COLOR_ini__ConfigTree__ini_file_61d]))(var72, var_inipath); /* ini_file= on <var72:ConfigTree>*/
}
{
((void(*)(val* self))(var72->class->vft[COLOR_core__kernel__Object__init]))(var72); /* init on <var72:ConfigTree>*/
}
var_ini = var72;
} else {
}
if (var_ini == NULL) {
var73 = 1; /* is null */
} else {
var73 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_ini,((val*)NULL)) on <var_ini:nullable Object(nullable ConfigTree)> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_ini,var_other) on <var_ini:nullable Object(ConfigTree)> */
var78 = var_ini == var_other;
var76 = var78;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
}
var74 = var76;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
var73 = var74;
}
if (var73){
if (likely(varonce79!=NULL)) {
var80 = varonce79;
} else {
var81 = "/";
var83 = (val*)(1l<<2|1);
var84 = (val*)(1l<<2|1);
var85 = (val*)((long)(0)<<2|3);
var86 = (val*)((long)(0)<<2|3);
var82 = core__flat___CString___to_s_unsafe(var81, var83, var84, var85, var86);
var80 = var82;
varonce79 = var80;
}
{
var87 = ((short int(*)(val* self, val* p0))(var_rdp->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_rdp, var80); /* == on <var_rdp:String>*/
}
if (var87){
{
{ /* Inline loader$ModelBuilder$mgroups (self) on <self:ModelBuilder> */
var90 = self->attrs[COLOR_nitc__loader__ModelBuilder___mgroups].val; /* _mgroups on <self:ModelBuilder> */
if (unlikely(var90 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroups");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 477);
fatal_exit(1);
}
var88 = var90;
RET_LABEL89:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var88, var_rdp, ((val*)NULL)); /* Direct call hash_collection$HashMap$[]= on <var88:HashMap[String, nullable MGroup]>*/
}
if (unlikely(varonce91==NULL)) {
var92 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce93!=NULL)) {
var94 = varonce93;
} else {
var95 = "Error: `";
var97 = (val*)(8l<<2|1);
var98 = (val*)(8l<<2|1);
var99 = (val*)((long)(0)<<2|3);
var100 = (val*)((long)(0)<<2|3);
var96 = core__flat___CString___to_s_unsafe(var95, var97, var98, var99, var100);
var94 = var96;
varonce93 = var94;
}
((struct instance_core__NativeArray*)var92)->values[0]=var94;
if (likely(varonce101!=NULL)) {
var102 = varonce101;
} else {
var103 = "` is not a Nit package.";
var105 = (val*)(23l<<2|1);
var106 = (val*)(23l<<2|1);
var107 = (val*)((long)(0)<<2|3);
var108 = (val*)((long)(0)<<2|3);
var104 = core__flat___CString___to_s_unsafe(var103, var105, var106, var107, var108);
var102 = var104;
varonce101 = var102;
}
((struct instance_core__NativeArray*)var92)->values[2]=var102;
} else {
var92 = varonce91;
varonce91 = NULL;
}
((struct instance_core__NativeArray*)var92)->values[1]=var_dirpath;
{
var109 = ((val*(*)(val* self))(var92->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var92); /* native_to_s on <var92:NativeArray[String]>*/
}
varonce91 = var92;
{
{ /* Inline loader$ModelBuilder$last_loader_error= (self,var109) on <self:ModelBuilder> */
self->attrs[COLOR_nitc__loader__ModelBuilder___last_loader_error].val = var109; /* _last_loader_error on <self:ModelBuilder> */
RET_LABEL110:(void)0;
}
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
if (likely(varonce111!=NULL)) {
var112 = varonce111;
} else {
var113 = "packages.ini";
var115 = (val*)(12l<<2|1);
var116 = (val*)(12l<<2|1);
var117 = (val*)((long)(0)<<2|3);
var118 = (val*)((long)(0)<<2|3);
var114 = core__flat___CString___to_s_unsafe(var113, var115, var116, var117, var118);
var112 = var114;
varonce111 = var112;
}
{
var119 = core__file___String____47d(var_dirpath, var112);
}
{
var120 = core__file___Text___file_exists(var119);
}
if (var120){
{
{ /* Inline loader$ModelBuilder$mgroups (self) on <self:ModelBuilder> */
var123 = self->attrs[COLOR_nitc__loader__ModelBuilder___mgroups].val; /* _mgroups on <self:ModelBuilder> */
if (unlikely(var123 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroups");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 477);
fatal_exit(1);
}
var121 = var123;
RET_LABEL122:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var121, var_rdp, ((val*)NULL)); /* Direct call hash_collection$HashMap$[]= on <var121:HashMap[String, nullable MGroup]>*/
}
if (unlikely(varonce124==NULL)) {
var125 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce126!=NULL)) {
var127 = varonce126;
} else {
var128 = "Error: `";
var130 = (val*)(8l<<2|1);
var131 = (val*)(8l<<2|1);
var132 = (val*)((long)(0)<<2|3);
var133 = (val*)((long)(0)<<2|3);
var129 = core__flat___CString___to_s_unsafe(var128, var130, var131, var132, var133);
var127 = var129;
varonce126 = var127;
}
((struct instance_core__NativeArray*)var125)->values[0]=var127;
if (likely(varonce134!=NULL)) {
var135 = varonce134;
} else {
var136 = "` is not a Nit package.";
var138 = (val*)(23l<<2|1);
var139 = (val*)(23l<<2|1);
var140 = (val*)((long)(0)<<2|3);
var141 = (val*)((long)(0)<<2|3);
var137 = core__flat___CString___to_s_unsafe(var136, var138, var139, var140, var141);
var135 = var137;
varonce134 = var135;
}
((struct instance_core__NativeArray*)var125)->values[2]=var135;
} else {
var125 = varonce124;
varonce124 = NULL;
}
((struct instance_core__NativeArray*)var125)->values[1]=var_dirpath;
{
var142 = ((val*(*)(val* self))(var125->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var125); /* native_to_s on <var125:NativeArray[String]>*/
}
varonce124 = var125;
{
{ /* Inline loader$ModelBuilder$last_loader_error= (self,var142) on <self:ModelBuilder> */
self->attrs[COLOR_nitc__loader__ModelBuilder___last_loader_error].val = var142; /* _last_loader_error on <self:ModelBuilder> */
RET_LABEL143:(void)0;
}
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
if (likely(varonce144!=NULL)) {
var145 = varonce144;
} else {
var146 = "..";
var148 = (val*)(2l<<2|1);
var149 = (val*)(2l<<2|1);
var150 = (val*)((long)(0)<<2|3);
var151 = (val*)((long)(0)<<2|3);
var147 = core__flat___CString___to_s_unsafe(var146, var148, var149, var150, var151);
var145 = var147;
varonce144 = var145;
}
{
var152 = core__file___String___join_path(var_dirpath, var145);
}
{
var153 = core__file___String___simplify_path(var152);
}
var_parentpath = var153;
if (likely(varonce154!=NULL)) {
var155 = varonce154;
} else {
var156 = "packages.ini";
var158 = (val*)(12l<<2|1);
var159 = (val*)(12l<<2|1);
var160 = (val*)((long)(0)<<2|3);
var161 = (val*)((long)(0)<<2|3);
var157 = core__flat___CString___to_s_unsafe(var156, var158, var159, var160, var161);
var155 = var157;
varonce154 = var155;
}
{
var162 = core__file___String____47d(var_parentpath, var155);
}
var_stopper = var162;
{
var163 = core__file___Text___file_exists(var_stopper);
}
var164 = !var163;
if (var164){
{
var165 = nitc__loader___ModelBuilder___identify_group(self, var_parentpath);
}
var_parent = var165;
if (var_parent == NULL) {
var166 = 0; /* is null */
} else {
var166 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_parent,((val*)NULL)) on <var_parent:nullable Object(nullable MGroup)> */
var_other28 = ((val*)NULL);
{
var169 = ((short int(*)(val* self, val* p0))(var_parent->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_parent, var_other28); /* == on <var_parent:nullable Object(MGroup)>*/
}
var170 = !var169;
var167 = var170;
goto RET_LABEL168;
RET_LABEL168:(void)0;
}
var166 = var167;
}
if (var166){
{
{ /* Inline mpackage$MGroup$mpackage (var_parent) on <var_parent:nullable Object(MGroup)> */
var173 = var_parent->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val; /* _mpackage on <var_parent:nullable Object(MGroup)> */
if (unlikely(var173 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 76);
fatal_exit(1);
}
var171 = var173;
RET_LABEL172:(void)0;
}
}
var_mpackage = var171;
{
var174 = nitc__loader___MPackage___accept(var_mpackage, var_dirpath);
}
var175 = !var174;
if (var175){
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var178 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var178 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var176 = var178;
RET_LABEL177:(void)0;
}
}
if (unlikely(varonce179==NULL)) {
var180 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce181!=NULL)) {
var182 = varonce181;
} else {
var183 = "directory `";
var185 = (val*)(11l<<2|1);
var186 = (val*)(11l<<2|1);
var187 = (val*)((long)(0)<<2|3);
var188 = (val*)((long)(0)<<2|3);
var184 = core__flat___CString___to_s_unsafe(var183, var185, var186, var187, var188);
var182 = var184;
varonce181 = var182;
}
((struct instance_core__NativeArray*)var180)->values[0]=var182;
if (likely(varonce189!=NULL)) {
var190 = varonce189;
} else {
var191 = "` excluded from package `";
var193 = (val*)(25l<<2|1);
var194 = (val*)(25l<<2|1);
var195 = (val*)((long)(0)<<2|3);
var196 = (val*)((long)(0)<<2|3);
var192 = core__flat___CString___to_s_unsafe(var191, var193, var194, var195, var196);
var190 = var192;
varonce189 = var190;
}
((struct instance_core__NativeArray*)var180)->values[2]=var190;
if (likely(varonce197!=NULL)) {
var198 = varonce197;
} else {
var199 = "`";
var201 = (val*)(1l<<2|1);
var202 = (val*)(1l<<2|1);
var203 = (val*)((long)(0)<<2|3);
var204 = (val*)((long)(0)<<2|3);
var200 = core__flat___CString___to_s_unsafe(var199, var201, var202, var203, var204);
var198 = var200;
varonce197 = var198;
}
((struct instance_core__NativeArray*)var180)->values[4]=var198;
} else {
var180 = varonce179;
varonce179 = NULL;
}
((struct instance_core__NativeArray*)var180)->values[1]=var_dirpath;
{
var205 = ((val*(*)(val* self))(var_mpackage->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mpackage); /* to_s on <var_mpackage:MPackage>*/
}
((struct instance_core__NativeArray*)var180)->values[3]=var205;
{
var206 = ((val*(*)(val* self))(var180->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var180); /* native_to_s on <var180:NativeArray[String]>*/
}
varonce179 = var180;
{
nitc___nitc__ToolContext___info(var176, var206, 2l); /* Direct call toolcontext$ToolContext$info on <var176:ToolContext>*/
}
var_parent = ((val*)NULL);
} else {
}
} else {
}
if (var_parent == NULL) {
var207 = 1; /* is null */
} else {
var207 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_parent,((val*)NULL)) on <var_parent:nullable Object(nullable MGroup)> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_parent,var_other) on <var_parent:nullable Object(MGroup)> */
var212 = var_parent == var_other;
var210 = var212;
goto RET_LABEL211;
RET_LABEL211:(void)0;
}
}
var208 = var210;
goto RET_LABEL209;
RET_LABEL209:(void)0;
}
var207 = var208;
}
if (var207){
{
{ /* Inline loader$ModelBuilder$mgroups (self) on <self:ModelBuilder> */
var215 = self->attrs[COLOR_nitc__loader__ModelBuilder___mgroups].val; /* _mgroups on <self:ModelBuilder> */
if (unlikely(var215 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroups");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 477);
fatal_exit(1);
}
var213 = var215;
RET_LABEL214:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var213, var_rdp, ((val*)NULL)); /* Direct call hash_collection$HashMap$[]= on <var213:HashMap[String, nullable MGroup]>*/
}
if (unlikely(varonce216==NULL)) {
var217 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce218!=NULL)) {
var219 = varonce218;
} else {
var220 = "Error: `";
var222 = (val*)(8l<<2|1);
var223 = (val*)(8l<<2|1);
var224 = (val*)((long)(0)<<2|3);
var225 = (val*)((long)(0)<<2|3);
var221 = core__flat___CString___to_s_unsafe(var220, var222, var223, var224, var225);
var219 = var221;
varonce218 = var219;
}
((struct instance_core__NativeArray*)var217)->values[0]=var219;
if (likely(varonce226!=NULL)) {
var227 = varonce226;
} else {
var228 = "` is not a Nit package.";
var230 = (val*)(23l<<2|1);
var231 = (val*)(23l<<2|1);
var232 = (val*)((long)(0)<<2|3);
var233 = (val*)((long)(0)<<2|3);
var229 = core__flat___CString___to_s_unsafe(var228, var230, var231, var232, var233);
var227 = var229;
varonce226 = var227;
}
((struct instance_core__NativeArray*)var217)->values[2]=var227;
} else {
var217 = varonce216;
varonce216 = NULL;
}
((struct instance_core__NativeArray*)var217)->values[1]=var_dirpath;
{
var234 = ((val*(*)(val* self))(var217->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var217); /* native_to_s on <var217:NativeArray[String]>*/
}
varonce216 = var217;
{
{ /* Inline loader$ModelBuilder$last_loader_error= (self,var234) on <self:ModelBuilder> */
self->attrs[COLOR_nitc__loader__ModelBuilder___last_loader_error].val = var234; /* _last_loader_error on <self:ModelBuilder> */
RET_LABEL235:(void)0;
}
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
} else {
}
} else {
}
var236 = NEW_nitc__Location(&type_nitc__Location);
{
nitc___nitc__Location___opaque_file(var236, var_dirpath); /* Direct call location$Location$opaque_file on <var236:Location>*/
}
var_loc = var236;
if (var_parent == NULL) {
var237 = 1; /* is null */
} else {
var237 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_parent,((val*)NULL)) on <var_parent:nullable Object(nullable MGroup)> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_parent,var_other) on <var_parent:nullable Object(MGroup)> */
var242 = var_parent == var_other;
var240 = var242;
goto RET_LABEL241;
RET_LABEL241:(void)0;
}
}
var238 = var240;
goto RET_LABEL239;
RET_LABEL239:(void)0;
}
var237 = var238;
}
if (var237){
if (var_ini == NULL) {
var243 = 0; /* is null */
} else {
var243 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_ini,((val*)NULL)) on <var_ini:nullable Object(nullable ConfigTree)> */
var_other28 = ((val*)NULL);
{
var246 = ((short int(*)(val* self, val* p0))(var_ini->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ini, var_other28); /* == on <var_ini:nullable Object(ConfigTree)>*/
}
var247 = !var246;
var244 = var247;
goto RET_LABEL245;
RET_LABEL245:(void)0;
}
var243 = var244;
}
if (var243){
if (likely(varonce249!=NULL)) {
var250 = varonce249;
} else {
var251 = "package.name";
var253 = (val*)(12l<<2|1);
var254 = (val*)(12l<<2|1);
var255 = (val*)((long)(0)<<2|3);
var256 = (val*)((long)(0)<<2|3);
var252 = core__flat___CString___to_s_unsafe(var251, var253, var254, var255, var256);
var250 = var252;
varonce249 = var250;
}
{
var257 = ini___ini__ConfigTree____91d_93d(var_ini, var250);
}
if (var257!=NULL) {
var248 = var257;
} else {
var248 = var_pn;
}
var_pn = var248;
} else {
}
var258 = NEW_nitc__MPackage(&type_nitc__MPackage);
{
{ /* Inline modelbuilder_base$ModelBuilder$model (self) on <self:ModelBuilder> */
var261 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var261 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 44);
fatal_exit(1);
}
var259 = var261;
RET_LABEL260:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var258->class->vft[COLOR_nitc__mpackage__MPackage__name_61d]))(var258, var_pn); /* name= on <var258:MPackage>*/
}
{
((void(*)(val* self, val* p0))(var258->class->vft[COLOR_nitc__mpackage__MPackage__model_61d]))(var258, var259); /* model= on <var258:MPackage>*/
}
{
((void(*)(val* self, val* p0))(var258->class->vft[COLOR_nitc__mpackage__MPackage__location_61d]))(var258, var_loc); /* location= on <var258:MPackage>*/
}
{
((void(*)(val* self))(var258->class->vft[COLOR_core__kernel__Object__init]))(var258); /* init on <var258:MPackage>*/
}
var_mpackage262 = var258;
var263 = NEW_nitc__MGroup(&type_nitc__MGroup);
{
((void(*)(val* self, val* p0))(var263->class->vft[COLOR_nitc__mpackage__MGroup__name_61d]))(var263, var_pn); /* name= on <var263:MGroup>*/
}
{
((void(*)(val* self, val* p0))(var263->class->vft[COLOR_nitc__mpackage__MGroup__location_61d]))(var263, var_loc); /* location= on <var263:MGroup>*/
}
{
((void(*)(val* self, val* p0))(var263->class->vft[COLOR_nitc__mpackage__MGroup__mpackage_61d]))(var263, var_mpackage262); /* mpackage= on <var263:MGroup>*/
}
{
((void(*)(val* self, val* p0))(var263->class->vft[COLOR_nitc__mpackage__MGroup__parent_61d]))(var263, ((val*)NULL)); /* parent= on <var263:MGroup>*/
}
{
((void(*)(val* self))(var263->class->vft[COLOR_core__kernel__Object__init]))(var263); /* init on <var263:MGroup>*/
}
var_mgroup = var263;
{
{ /* Inline mpackage$MPackage$root= (var_mpackage262,var_mgroup) on <var_mpackage262:MPackage> */
var_mpackage262->attrs[COLOR_nitc__mpackage__MPackage___root].val = var_mgroup; /* _root on <var_mpackage262:MPackage> */
RET_LABEL264:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var267 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var267 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var265 = var267;
RET_LABEL266:(void)0;
}
}
if (unlikely(varonce268==NULL)) {
var269 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce270!=NULL)) {
var271 = varonce270;
} else {
var272 = "found package `";
var274 = (val*)(15l<<2|1);
var275 = (val*)(15l<<2|1);
var276 = (val*)((long)(0)<<2|3);
var277 = (val*)((long)(0)<<2|3);
var273 = core__flat___CString___to_s_unsafe(var272, var274, var275, var276, var277);
var271 = var273;
varonce270 = var271;
}
((struct instance_core__NativeArray*)var269)->values[0]=var271;
if (likely(varonce278!=NULL)) {
var279 = varonce278;
} else {
var280 = "` at ";
var282 = (val*)(5l<<2|1);
var283 = (val*)(5l<<2|1);
var284 = (val*)((long)(0)<<2|3);
var285 = (val*)((long)(0)<<2|3);
var281 = core__flat___CString___to_s_unsafe(var280, var282, var283, var284, var285);
var279 = var281;
varonce278 = var279;
}
((struct instance_core__NativeArray*)var269)->values[2]=var279;
} else {
var269 = varonce268;
varonce268 = NULL;
}
{
var286 = ((val*(*)(val* self))(var_mpackage262->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mpackage262); /* to_s on <var_mpackage262:MPackage>*/
}
((struct instance_core__NativeArray*)var269)->values[1]=var286;
((struct instance_core__NativeArray*)var269)->values[3]=var_dirpath;
{
var287 = ((val*(*)(val* self))(var269->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var269); /* native_to_s on <var269:NativeArray[String]>*/
}
varonce268 = var269;
{
nitc___nitc__ToolContext___info(var265, var287, 2l); /* Direct call toolcontext$ToolContext$info on <var265:ToolContext>*/
}
{
{ /* Inline loader$MPackage$ini= (var_mpackage262,var_ini) on <var_mpackage262:MPackage> */
var_mpackage262->attrs[COLOR_nitc__loader__MPackage___ini].val = var_ini; /* _ini on <var_mpackage262:MPackage> */
RET_LABEL288:(void)0;
}
}
} else {
var289 = NEW_nitc__MGroup(&type_nitc__MGroup);
{
{ /* Inline mpackage$MGroup$mpackage (var_parent) on <var_parent:nullable Object(MGroup)> */
var292 = var_parent->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val; /* _mpackage on <var_parent:nullable Object(MGroup)> */
if (unlikely(var292 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 76);
fatal_exit(1);
}
var290 = var292;
RET_LABEL291:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var289->class->vft[COLOR_nitc__mpackage__MGroup__name_61d]))(var289, var_pn); /* name= on <var289:MGroup>*/
}
{
((void(*)(val* self, val* p0))(var289->class->vft[COLOR_nitc__mpackage__MGroup__location_61d]))(var289, var_loc); /* location= on <var289:MGroup>*/
}
{
((void(*)(val* self, val* p0))(var289->class->vft[COLOR_nitc__mpackage__MGroup__mpackage_61d]))(var289, var290); /* mpackage= on <var289:MGroup>*/
}
{
((void(*)(val* self, val* p0))(var289->class->vft[COLOR_nitc__mpackage__MGroup__parent_61d]))(var289, var_parent); /* parent= on <var289:MGroup>*/
}
{
((void(*)(val* self))(var289->class->vft[COLOR_core__kernel__Object__init]))(var289); /* init on <var289:MGroup>*/
}
var_mgroup = var289;
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var295 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var295 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var293 = var295;
RET_LABEL294:(void)0;
}
}
if (unlikely(varonce296==NULL)) {
var297 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce298!=NULL)) {
var299 = varonce298;
} else {
var300 = "found sub group `";
var302 = (val*)(17l<<2|1);
var303 = (val*)(17l<<2|1);
var304 = (val*)((long)(0)<<2|3);
var305 = (val*)((long)(0)<<2|3);
var301 = core__flat___CString___to_s_unsafe(var300, var302, var303, var304, var305);
var299 = var301;
varonce298 = var299;
}
((struct instance_core__NativeArray*)var297)->values[0]=var299;
if (likely(varonce306!=NULL)) {
var307 = varonce306;
} else {
var308 = "` at ";
var310 = (val*)(5l<<2|1);
var311 = (val*)(5l<<2|1);
var312 = (val*)((long)(0)<<2|3);
var313 = (val*)((long)(0)<<2|3);
var309 = core__flat___CString___to_s_unsafe(var308, var310, var311, var312, var313);
var307 = var309;
varonce306 = var307;
}
((struct instance_core__NativeArray*)var297)->values[2]=var307;
} else {
var297 = varonce296;
varonce296 = NULL;
}
{
var314 = nitc___nitc__MGroup___nitc__model_base__MEntity__full_name(var_mgroup);
}
((struct instance_core__NativeArray*)var297)->values[1]=var314;
((struct instance_core__NativeArray*)var297)->values[3]=var_dirpath;
{
var315 = ((val*(*)(val* self))(var297->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var297); /* native_to_s on <var297:NativeArray[String]>*/
}
varonce296 = var297;
{
nitc___nitc__ToolContext___info(var293, var315, 2l); /* Direct call toolcontext$ToolContext$info on <var293:ToolContext>*/
}
}
if (likely(varonce316!=NULL)) {
var317 = varonce316;
} else {
var318 = "README.md";
var320 = (val*)(9l<<2|1);
var321 = (val*)(9l<<2|1);
var322 = (val*)((long)(0)<<2|3);
var323 = (val*)((long)(0)<<2|3);
var319 = core__flat___CString___to_s_unsafe(var318, var320, var321, var322, var323);
var317 = var319;
varonce316 = var317;
}
{
var324 = core__file___String___join_path(var_dirpath, var317);
}
var_readme = var324;
{
var325 = core__file___Text___file_exists(var_readme);
}
var326 = !var325;
if (var326){
if (likely(varonce327!=NULL)) {
var328 = varonce327;
} else {
var329 = "README";
var331 = (val*)(6l<<2|1);
var332 = (val*)(6l<<2|1);
var333 = (val*)((long)(0)<<2|3);
var334 = (val*)((long)(0)<<2|3);
var330 = core__flat___CString___to_s_unsafe(var329, var331, var332, var333, var334);
var328 = var330;
varonce327 = var328;
}
{
var335 = core__file___String___join_path(var_dirpath, var328);
}
var_readme = var335;
} else {
}
{
var336 = core__file___Text___file_exists(var_readme);
}
if (var336){
{
var337 = nitc__loader___ModelBuilder___load_markdown(self, var_readme);
}
var_mdoc = var337;
{
{ /* Inline mdoc$MEntity$mdoc= (var_mgroup,var_mdoc) on <var_mgroup:nullable Object(MGroup)> */
var_mgroup->attrs[COLOR_nitc__mdoc__MEntity___mdoc].val = var_mdoc; /* _mdoc on <var_mgroup:nullable Object(MGroup)> */
RET_LABEL338:(void)0;
}
}
{
{ /* Inline mdoc$MDoc$original_mentity= (var_mdoc,var_mgroup) on <var_mdoc:MDoc> */
var_mdoc->attrs[COLOR_nitc__mdoc__MDoc___original_mentity].val = var_mgroup; /* _original_mentity on <var_mdoc:MDoc> */
RET_LABEL339:(void)0;
}
}
} else {
}
{
{ /* Inline loader$ModelBuilder$mgroups (self) on <self:ModelBuilder> */
var342 = self->attrs[COLOR_nitc__loader__ModelBuilder___mgroups].val; /* _mgroups on <self:ModelBuilder> */
if (unlikely(var342 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroups");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 477);
fatal_exit(1);
}
var340 = var342;
RET_LABEL341:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var340, var_rdp, var_mgroup); /* Direct call hash_collection$HashMap$[]= on <var340:HashMap[String, nullable MGroup]>*/
}
var = var_mgroup;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader$ModelBuilder$load_markdown for (self: ModelBuilder, String): MDoc */
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
char* var22 /* : CString */;
val* var23 /* : String */;
val* var24 /* : nullable Int */;
val* var25 /* : nullable Int */;
val* var26 /* : nullable Bool */;
val* var27 /* : nullable Bool */;
val* var28 /* : String */;
val* var_source /* var source: SourceFile */;
val* var29 /* : Array[Int] */;
val* var31 /* : Array[Int] */;
val* var32 /* : MDoc */;
val* var33 /* : Location */;
long var34 /* : Int */;
long var36 /* : Int */;
val* var_mdoc /* var mdoc: MDoc */;
val* var37 /* : Array[String] */;
val* var39 /* : Array[String] */;
var_filepath = p0;
var1 = NEW_core__FileReader(&type_core__FileReader);
{
core___core__FileReader___open(var1, var_filepath); /* Direct call file$FileReader$open on <var1:FileReader>*/
}
var_s = var1;
var2 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var2); /* Direct call array$Array$init on <var2:Array[String]>*/
}
var_lines = var2;
var3 = NEW_core__Array(&type_core__Array__core__Int);
{
core___core__Array___core__kernel__Object__init(var3); /* Direct call array$Array$init on <var3:Array[Int]>*/
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
core___core__Array___core__abstract_collection__SimpleCollection__add(var_lines, var_line); /* Direct call array$Array$add on <var_lines:Array[String]>*/
}
{
var7 = (val*)(var_len<<2|1);
core___core__Array___core__abstract_collection__SimpleCollection__add(var_line_starts, var7); /* Direct call array$Array$add on <var_line_starts:Array[Int]>*/
}
{
var8 = ((long(*)(val* self))(var_line->class->vft[COLOR_core__abstract_text__Text__length]))(var_line); /* length on <var_line:String>*/
}
{
{ /* Inline kernel$Int$+ (var8,1l) on <var8:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var11 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var12 = var8 + 1l;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_len,var9) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <var9:Int> isa OTHER */
/* <var9:Int> isa OTHER */
var15 = 1; /* easy <var9:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
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
core___core__FileReader___core__stream__Stream__close(var_s); /* Direct call file$FileReader$close on <var_s:FileReader>*/
}
var20 = NEW_nitc__SourceFile(&type_nitc__SourceFile);
if (likely(varonce!=NULL)) {
var21 = varonce;
} else {
var22 = "\n";
var24 = (val*)(1l<<2|1);
var25 = (val*)(1l<<2|1);
var26 = (val*)((long)(0)<<2|3);
var27 = (val*)((long)(0)<<2|3);
var23 = core__flat___CString___to_s_unsafe(var22, var24, var25, var26, var27);
var21 = var23;
varonce = var21;
}
{
var28 = core__abstract_text___Collection___join(var_lines, var21, ((val*)NULL));
}
{
nitc___nitc__SourceFile___from_string(var20, var_filepath, var28); /* Direct call location$SourceFile$from_string on <var20:SourceFile>*/
}
var_source = var20;
{
{ /* Inline location$SourceFile$line_starts (var_source) on <var_source:SourceFile> */
var31 = var_source->attrs[COLOR_nitc__location__SourceFile___line_starts].val; /* _line_starts on <var_source:SourceFile> */
if (unlikely(var31 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _line_starts");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 46);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var29, var_line_starts); /* Direct call array$Array$add_all on <var29:Array[Int]>*/
}
var32 = NEW_nitc__MDoc(&type_nitc__MDoc);
var33 = NEW_nitc__Location(&type_nitc__Location);
{
{ /* Inline array$AbstractArrayRead$length (var_lines) on <var_lines:Array[String]> */
var36 = var_lines->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_lines:Array[String]> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var33->class->vft[COLOR_nitc__location__Location__file_61d]))(var33, var_source); /* file= on <var33:Location>*/
}
{
((void(*)(val* self, long p0))(var33->class->vft[COLOR_nitc__location__Location__line_start_61d]))(var33, 1l); /* line_start= on <var33:Location>*/
}
{
((void(*)(val* self, long p0))(var33->class->vft[COLOR_nitc__location__Location__line_end_61d]))(var33, var34); /* line_end= on <var33:Location>*/
}
{
((void(*)(val* self, long p0))(var33->class->vft[COLOR_nitc__location__Location__column_start_61d]))(var33, 0l); /* column_start= on <var33:Location>*/
}
{
((void(*)(val* self, long p0))(var33->class->vft[COLOR_nitc__location__Location__column_end_61d]))(var33, 0l); /* column_end= on <var33:Location>*/
}
{
((void(*)(val* self))(var33->class->vft[COLOR_core__kernel__Object__init]))(var33); /* init on <var33:Location>*/
}
{
((void(*)(val* self, val* p0))(var32->class->vft[COLOR_nitc__mdoc__MDoc__location_61d]))(var32, var33); /* location= on <var32:MDoc>*/
}
{
((void(*)(val* self))(var32->class->vft[COLOR_core__kernel__Object__init]))(var32); /* init on <var32:MDoc>*/
}
var_mdoc = var32;
{
{ /* Inline mdoc$MDoc$content (var_mdoc) on <var_mdoc:MDoc> */
var39 = var_mdoc->attrs[COLOR_nitc__mdoc__MDoc___content].val; /* _content on <var_mdoc:MDoc> */
if (unlikely(var39 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _content");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mdoc, 23);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var37, var_lines); /* Direct call array$Array$add_all on <var37:Array[String]>*/
}
var = var_mdoc;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader$ModelBuilder$scan_group for (self: ModelBuilder, MGroup) */
void nitc__loader___ModelBuilder___scan_group(val* self, val* p0) {
val* var_mgroup /* var mgroup: MGroup */;
short int var /* : Bool */;
short int var2 /* : Bool */;
val* var4 /* : nullable String */;
val* var_p /* var p: nullable String */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : Array[String] */;
val* var_files /* var files: Array[String] */;
val* var8 /* : Sys */;
val* var9 /* : Comparator */;
val* var_ /* var : Array[String] */;
val* var10 /* : IndexedIterator[nullable Object] */;
val* var_11 /* var : IndexedIterator[String] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_f /* var f: String */;
val* var14 /* : String */;
val* var_fp /* var fp: String */;
val* var15 /* : nullable MGroup */;
val* var_g /* var g: nullable MGroup */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : nullable MModule */;
val* var23 /* : MPackage */;
val* var25 /* : MPackage */;
val* var26 /* : MPackage */;
val* var28 /* : MPackage */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
var_mgroup = p0;
{
{ /* Inline loader$MGroup$scanned (var_mgroup) on <var_mgroup:MGroup> */
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
{ /* Inline loader$MGroup$scanned= (var_mgroup,1) on <var_mgroup:MGroup> */
var_mgroup->attrs[COLOR_nitc__loader__MGroup___scanned].s = 1; /* _scanned on <var_mgroup:MGroup> */
RET_LABEL3:(void)0;
}
}
{
var4 = nitc___nitc__MGroup___filepath(var_mgroup);
}
var_p = var4;
if (var_p == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))(var_p->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_p, ((val*)NULL)); /* == on <var_p:nullable String>*/
var5 = var6;
}
if (var5){
goto RET_LABEL;
} else {
}
{
var7 = core__file___String___files(var_p);
}
var_files = var7;
var8 = glob_sys;
{
var9 = core__abstract_text___Sys___alpha_comparator(var8);
}
{
core___core__Comparator___sort(var9, var_files); /* Direct call sorter$Comparator$sort on <var9:Comparator>*/
}
var_ = var_files;
{
var10 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_11 = var10;
for(;;) {
{
var12 = ((short int(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_11); /* is_ok on <var_11:IndexedIterator[String]>*/
}
if (var12){
} else {
goto BREAK_label;
}
{
var13 = ((val*(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_11); /* item on <var_11:IndexedIterator[String]>*/
}
var_f = var13;
{
var14 = core__file___String____47d(var_p, var_f);
}
var_fp = var14;
{
var15 = nitc__loader___ModelBuilder___identify_group(self, var_fp);
}
var_g = var15;
if (var_g == NULL) {
var16 = 1; /* is null */
} else {
var16 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_g,((val*)NULL)) on <var_g:nullable MGroup> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_g,var_other) on <var_g:nullable MGroup(MGroup)> */
var21 = var_g == var_other;
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
{
var22 = nitc__loader___ModelBuilder___identify_module(self, var_fp);
}
} else {
{
{ /* Inline mpackage$MGroup$mpackage (var_g) on <var_g:nullable MGroup(MGroup)> */
var25 = var_g->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val; /* _mpackage on <var_g:nullable MGroup(MGroup)> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 76);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline mpackage$MGroup$mpackage (var_mgroup) on <var_mgroup:MGroup> */
var28 = var_mgroup->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val; /* _mpackage on <var_mgroup:MGroup> */
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 76);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var23,var26) on <var23:MPackage> */
var_other = var26;
{
{ /* Inline kernel$Object$is_same_instance (var23,var_other) on <var23:MPackage> */
var33 = var23 == var_other;
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
if (var29){
{
nitc__loader___ModelBuilder___scan_group(self, var_g); /* Direct call loader$ModelBuilder$scan_group on <self:ModelBuilder>*/
}
} else {
}
}
{
((void(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_11); /* next on <var_11:IndexedIterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_11); /* finish on <var_11:IndexedIterator[String]>*/
}
RET_LABEL:;
}
/* method loader$ModelBuilder$module_absolute_path for (self: ModelBuilder, String): String */
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
/* method loader$ModelBuilder$load_module_ast for (self: ModelBuilder, String): nullable AModule */
val* nitc__loader___ModelBuilder___load_module_ast(val* self, val* p0) {
val* var /* : nullable AModule */;
val* var_filename /* var filename: String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Bool */;
val* var7 /* : nullable Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : ToolContext */;
val* var12 /* : ToolContext */;
val* var14 /* : NativeArray[String] */;
static val* varonce13;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : CString */;
val* var18 /* : String */;
val* var19 /* : nullable Int */;
val* var20 /* : nullable Int */;
val* var21 /* : nullable Bool */;
val* var22 /* : nullable Bool */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : CString */;
val* var26 /* : String */;
val* var27 /* : nullable Int */;
val* var28 /* : nullable Int */;
val* var29 /* : nullable Bool */;
val* var30 /* : nullable Bool */;
val* var31 /* : String */;
val* var32 /* : Message */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
val* var35 /* : ToolContext */;
val* var37 /* : ToolContext */;
val* var39 /* : NativeArray[String] */;
static val* varonce38;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : CString */;
val* var43 /* : String */;
val* var44 /* : nullable Int */;
val* var45 /* : nullable Int */;
val* var46 /* : nullable Bool */;
val* var47 /* : nullable Bool */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : CString */;
val* var51 /* : String */;
val* var52 /* : nullable Int */;
val* var53 /* : nullable Int */;
val* var54 /* : nullable Bool */;
val* var55 /* : nullable Bool */;
val* var56 /* : String */;
val* var57 /* : Message */;
val* var58 /* : ToolContext */;
val* var60 /* : ToolContext */;
val* var62 /* : NativeArray[String] */;
static val* varonce61;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : CString */;
val* var66 /* : String */;
val* var67 /* : nullable Int */;
val* var68 /* : nullable Int */;
val* var69 /* : nullable Bool */;
val* var70 /* : nullable Bool */;
val* var71 /* : String */;
val* var72 /* : FileReader */;
val* var_file /* var file: FileReader */;
val* var73 /* : Lexer */;
val* var74 /* : SourceFile */;
val* var_lexer /* var lexer: Lexer */;
val* var75 /* : Parser */;
val* var_parser /* var parser: Parser */;
val* var76 /* : Start */;
val* var_tree /* var tree: Start */;
val* var77 /* : nullable AModule */;
val* var79 /* : nullable AModule */;
val* var_nmodule /* var nmodule: nullable AModule */;
short int var80 /* : Bool */;
short int var81 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var83 /* : Bool */;
short int var85 /* : Bool */;
val* var86 /* : EOF */;
val* var88 /* : EOF */;
val* var_neof /* var neof: EOF */;
short int var89 /* : Bool */;
int cltype;
int idtype;
val* var90 /* : String */;
val* var92 /* : String */;
var_filename = p0;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = ".nit";
var4 = (val*)(4l<<2|1);
var5 = (val*)(4l<<2|1);
var6 = (val*)((long)(0)<<2|3);
var7 = (val*)((long)(0)<<2|3);
var3 = core__flat___CString___to_s_unsafe(var2, var4, var5, var6, var7);
var1 = var3;
varonce = var1;
}
{
var8 = core___core__Text___has_suffix(var_filename, var1);
}
var9 = !var8;
if (var9){
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var12 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (unlikely(varonce13==NULL)) {
var14 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "Error: file `";
var19 = (val*)(13l<<2|1);
var20 = (val*)(13l<<2|1);
var21 = (val*)((long)(0)<<2|3);
var22 = (val*)((long)(0)<<2|3);
var18 = core__flat___CString___to_s_unsafe(var17, var19, var20, var21, var22);
var16 = var18;
varonce15 = var16;
}
((struct instance_core__NativeArray*)var14)->values[0]=var16;
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "` is not a valid nit module.";
var27 = (val*)(28l<<2|1);
var28 = (val*)(28l<<2|1);
var29 = (val*)((long)(0)<<2|3);
var30 = (val*)((long)(0)<<2|3);
var26 = core__flat___CString___to_s_unsafe(var25, var27, var28, var29, var30);
var24 = var26;
varonce23 = var24;
}
((struct instance_core__NativeArray*)var14)->values[2]=var24;
} else {
var14 = varonce13;
varonce13 = NULL;
}
((struct instance_core__NativeArray*)var14)->values[1]=var_filename;
{
var31 = ((val*(*)(val* self))(var14->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var14); /* native_to_s on <var14:NativeArray[String]>*/
}
varonce13 = var14;
{
var32 = nitc___nitc__ToolContext___error(var10, ((val*)NULL), var31);
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var33 = core__file___Text___file_exists(var_filename);
}
var34 = !var33;
if (var34){
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var37 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var37 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
if (unlikely(varonce38==NULL)) {
var39 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "Error: file `";
var44 = (val*)(13l<<2|1);
var45 = (val*)(13l<<2|1);
var46 = (val*)((long)(0)<<2|3);
var47 = (val*)((long)(0)<<2|3);
var43 = core__flat___CString___to_s_unsafe(var42, var44, var45, var46, var47);
var41 = var43;
varonce40 = var41;
}
((struct instance_core__NativeArray*)var39)->values[0]=var41;
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = "` not found.";
var52 = (val*)(12l<<2|1);
var53 = (val*)(12l<<2|1);
var54 = (val*)((long)(0)<<2|3);
var55 = (val*)((long)(0)<<2|3);
var51 = core__flat___CString___to_s_unsafe(var50, var52, var53, var54, var55);
var49 = var51;
varonce48 = var49;
}
((struct instance_core__NativeArray*)var39)->values[2]=var49;
} else {
var39 = varonce38;
varonce38 = NULL;
}
((struct instance_core__NativeArray*)var39)->values[1]=var_filename;
{
var56 = ((val*(*)(val* self))(var39->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var39); /* native_to_s on <var39:NativeArray[String]>*/
}
varonce38 = var39;
{
var57 = nitc___nitc__ToolContext___error(var35, ((val*)NULL), var56);
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var60 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var60 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
if (unlikely(varonce61==NULL)) {
var62 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "load module ";
var67 = (val*)(12l<<2|1);
var68 = (val*)(12l<<2|1);
var69 = (val*)((long)(0)<<2|3);
var70 = (val*)((long)(0)<<2|3);
var66 = core__flat___CString___to_s_unsafe(var65, var67, var68, var69, var70);
var64 = var66;
varonce63 = var64;
}
((struct instance_core__NativeArray*)var62)->values[0]=var64;
} else {
var62 = varonce61;
varonce61 = NULL;
}
((struct instance_core__NativeArray*)var62)->values[1]=var_filename;
{
var71 = ((val*(*)(val* self))(var62->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var62); /* native_to_s on <var62:NativeArray[String]>*/
}
varonce61 = var62;
{
nitc___nitc__ToolContext___info(var58, var71, 2l); /* Direct call toolcontext$ToolContext$info on <var58:ToolContext>*/
}
var72 = NEW_core__FileReader(&type_core__FileReader);
{
core___core__FileReader___open(var72, var_filename); /* Direct call file$FileReader$open on <var72:FileReader>*/
}
var_file = var72;
var73 = NEW_nitc__Lexer(&type_nitc__Lexer);
var74 = NEW_nitc__SourceFile(&type_nitc__SourceFile);
{
((void(*)(val* self, val* p0))(var74->class->vft[COLOR_nitc__location__SourceFile__filename_61d]))(var74, var_filename); /* filename= on <var74:SourceFile>*/
}
{
((void(*)(val* self, val* p0))(var74->class->vft[COLOR_nitc__location__SourceFile__stream_61d]))(var74, var_file); /* stream= on <var74:SourceFile>*/
}
{
((void(*)(val* self))(var74->class->vft[COLOR_core__kernel__Object__init]))(var74); /* init on <var74:SourceFile>*/
}
{
((void(*)(val* self, val* p0))(var73->class->vft[COLOR_nitc__lexer_work__Lexer__file_61d]))(var73, var74); /* file= on <var73:Lexer>*/
}
{
((void(*)(val* self))(var73->class->vft[COLOR_core__kernel__Object__init]))(var73); /* init on <var73:Lexer>*/
}
var_lexer = var73;
var75 = NEW_nitc__Parser(&type_nitc__Parser);
{
((void(*)(val* self, val* p0))(var75->class->vft[COLOR_nitc__parser_work__Parser__lexer_61d]))(var75, var_lexer); /* lexer= on <var75:Parser>*/
}
{
((void(*)(val* self))(var75->class->vft[COLOR_core__kernel__Object__init]))(var75); /* init on <var75:Parser>*/
}
var_parser = var75;
{
var76 = nitc___nitc__Parser___parse(var_parser);
}
var_tree = var76;
{
core___core__FileReader___core__stream__Stream__close(var_file); /* Direct call file$FileReader$close on <var_file:FileReader>*/
}
{
{ /* Inline parser_nodes$Start$n_base (var_tree) on <var_tree:Start> */
var79 = var_tree->attrs[COLOR_nitc__parser_nodes__Start___n_base].val; /* _n_base on <var_tree:Start> */
var77 = var79;
RET_LABEL78:(void)0;
}
}
var_nmodule = var77;
if (var_nmodule == NULL) {
var80 = 1; /* is null */
} else {
var80 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_nmodule,((val*)NULL)) on <var_nmodule:nullable AModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_nmodule,var_other) on <var_nmodule:nullable AModule(AModule)> */
var85 = var_nmodule == var_other;
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
{
{ /* Inline parser_nodes$Start$n_eof (var_tree) on <var_tree:Start> */
var88 = var_tree->attrs[COLOR_nitc__parser_nodes__Start___n_eof].val; /* _n_eof on <var_tree:Start> */
if (unlikely(var88 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_eof");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 3056);
fatal_exit(1);
}
var86 = var88;
RET_LABEL87:(void)0;
}
}
var_neof = var86;
/* <var_neof:EOF> isa AError */
cltype = type_nitc__AError.color;
idtype = type_nitc__AError.id;
if(cltype >= var_neof->type->table_size) {
var89 = 0;
} else {
var89 = var_neof->type->type_table[cltype] == idtype;
}
if (unlikely(!var89)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 685);
fatal_exit(1);
}
{
{ /* Inline lexer_work$AError$message (var_neof) on <var_neof:EOF(AError)> */
var92 = var_neof->attrs[COLOR_nitc__lexer_work__AError___message].val; /* _message on <var_neof:EOF(AError)> */
if (unlikely(var92 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _message");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__lexer_work, 50);
fatal_exit(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
{
nitc___nitc__ModelBuilder___error(self, var_neof, var90); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
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
/* method loader$ModelBuilder$load_module for (self: ModelBuilder, String): nullable AModule */
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
val* var8 /* : nullable String */;
val* var10 /* : nullable String */;
val* var_le /* var le: nullable String */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_other14 /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : ToolContext */;
val* var19 /* : ToolContext */;
val* var20 /* : Message */;
short int var21 /* : Bool */;
val* var22 /* : ToolContext */;
val* var24 /* : ToolContext */;
val* var25 /* : NativeArray[String] */;
static val* varonce;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : CString */;
val* var29 /* : String */;
val* var30 /* : nullable Int */;
val* var31 /* : nullable Int */;
val* var32 /* : nullable Bool */;
val* var33 /* : nullable Bool */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : CString */;
val* var37 /* : String */;
val* var38 /* : nullable Int */;
val* var39 /* : nullable Int */;
val* var40 /* : nullable Bool */;
val* var41 /* : nullable Bool */;
val* var42 /* : String */;
val* var43 /* : Message */;
val* var44 /* : ToolContext */;
val* var46 /* : ToolContext */;
val* var48 /* : NativeArray[String] */;
static val* varonce47;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : CString */;
val* var52 /* : String */;
val* var53 /* : nullable Int */;
val* var54 /* : nullable Int */;
val* var55 /* : nullable Bool */;
val* var56 /* : nullable Bool */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : CString */;
val* var60 /* : String */;
val* var61 /* : nullable Int */;
val* var62 /* : nullable Int */;
val* var63 /* : nullable Bool */;
val* var64 /* : nullable Bool */;
val* var65 /* : String */;
val* var66 /* : Message */;
val* var67 /* : nullable AModule */;
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
{ /* Inline kernel$Object$== (var_mmodule,((val*)NULL)) on <var_mmodule:nullable MModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mmodule,var_other) on <var_mmodule:nullable MModule(MModule)> */
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
{ /* Inline loader$ModelBuilder$last_loader_error (self) on <self:ModelBuilder> */
var10 = self->attrs[COLOR_nitc__loader__ModelBuilder___last_loader_error].val; /* _last_loader_error on <self:ModelBuilder> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_le = var8;
if (var_le == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_le,((val*)NULL)) on <var_le:nullable String> */
var_other14 = ((val*)NULL);
{
var15 = ((short int(*)(val* self, val* p0))(var_le->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_le, var_other14); /* == on <var_le:nullable String(String)>*/
}
var16 = !var15;
var12 = var16;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
if (var11){
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var19 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var19 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = nitc___nitc__ToolContext___error(var17, ((val*)NULL), var_le);
}
} else {
{
var21 = core__file___Text___file_exists(var_filename);
}
if (var21){
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var24 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var24 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var25 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "Error: `";
var30 = (val*)(8l<<2|1);
var31 = (val*)(8l<<2|1);
var32 = (val*)((long)(0)<<2|3);
var33 = (val*)((long)(0)<<2|3);
var29 = core__flat___CString___to_s_unsafe(var28, var30, var31, var32, var33);
var27 = var29;
varonce26 = var27;
}
((struct instance_core__NativeArray*)var25)->values[0]=var27;
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "` is not a Nit source file.";
var38 = (val*)(27l<<2|1);
var39 = (val*)(27l<<2|1);
var40 = (val*)((long)(0)<<2|3);
var41 = (val*)((long)(0)<<2|3);
var37 = core__flat___CString___to_s_unsafe(var36, var38, var39, var40, var41);
var35 = var37;
varonce34 = var35;
}
((struct instance_core__NativeArray*)var25)->values[2]=var35;
} else {
var25 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var25)->values[1]=var_filename;
{
var42 = ((val*(*)(val* self))(var25->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var25); /* native_to_s on <var25:NativeArray[String]>*/
}
varonce = var25;
{
var43 = nitc___nitc__ToolContext___error(var22, ((val*)NULL), var42);
}
} else {
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var46 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var46 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
if (unlikely(varonce47==NULL)) {
var48 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "Error: cannot find module `";
var53 = (val*)(27l<<2|1);
var54 = (val*)(27l<<2|1);
var55 = (val*)((long)(0)<<2|3);
var56 = (val*)((long)(0)<<2|3);
var52 = core__flat___CString___to_s_unsafe(var51, var53, var54, var55, var56);
var50 = var52;
varonce49 = var50;
}
((struct instance_core__NativeArray*)var48)->values[0]=var50;
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = "`.";
var61 = (val*)(2l<<2|1);
var62 = (val*)(2l<<2|1);
var63 = (val*)((long)(0)<<2|3);
var64 = (val*)((long)(0)<<2|3);
var60 = core__flat___CString___to_s_unsafe(var59, var61, var62, var63, var64);
var58 = var60;
varonce57 = var58;
}
((struct instance_core__NativeArray*)var48)->values[2]=var58;
} else {
var48 = varonce47;
varonce47 = NULL;
}
((struct instance_core__NativeArray*)var48)->values[1]=var_filename;
{
var65 = ((val*(*)(val* self))(var48->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var48); /* native_to_s on <var48:NativeArray[String]>*/
}
varonce47 = var48;
{
var66 = nitc___nitc__ToolContext___error(var44, ((val*)NULL), var65);
}
}
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var67 = nitc__loader___MModule___load(var_mmodule, self);
}
var = var67;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader$ModelBuilder$build_a_mmodule for (self: ModelBuilder, nullable MGroup, AModule) */
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
static val* varonce;
val* var33 /* : String */;
char* var34 /* : CString */;
val* var35 /* : String */;
val* var36 /* : nullable Int */;
val* var37 /* : nullable Int */;
val* var38 /* : nullable Bool */;
val* var39 /* : nullable Bool */;
val* var41 /* : NativeArray[String] */;
static val* varonce40;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : CString */;
val* var45 /* : String */;
val* var46 /* : nullable Int */;
val* var47 /* : nullable Int */;
val* var48 /* : nullable Bool */;
val* var49 /* : nullable Bool */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : CString */;
val* var53 /* : String */;
val* var54 /* : nullable Int */;
val* var55 /* : nullable Int */;
val* var56 /* : nullable Bool */;
val* var57 /* : nullable Bool */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : CString */;
val* var61 /* : String */;
val* var62 /* : nullable Int */;
val* var63 /* : nullable Int */;
val* var64 /* : nullable Bool */;
val* var65 /* : nullable Bool */;
val* var66 /* : String */;
val* var68 /* : String */;
val* var69 /* : String */;
short int var70 /* : Bool */;
short int var71 /* : Bool */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
val* var75 /* : Model */;
val* var77 /* : Model */;
val* var78 /* : String */;
val* var80 /* : String */;
val* var81 /* : nullable Array[MModule] */;
val* var_others /* var others: nullable Array[MModule] */;
short int var82 /* : Bool */;
short int var83 /* : Bool */;
short int var85 /* : Bool */;
short int var86 /* : Bool */;
val* var_ /* var : Array[MModule] */;
val* var87 /* : IndexedIterator[nullable Object] */;
val* var_88 /* var : IndexedIterator[MModule] */;
short int var89 /* : Bool */;
val* var90 /* : nullable Object */;
val* var_other91 /* var other: MModule */;
short int var92 /* : Bool */;
short int var93 /* : Bool */;
short int var94 /* : Bool */;
short int var95 /* : Bool */;
short int var97 /* : Bool */;
short int var98 /* : Bool */;
short int var_99 /* var : Bool */;
val* var100 /* : HashMap[MModule, AModule] */;
val* var102 /* : HashMap[MModule, AModule] */;
short int var103 /* : Bool */;
short int var_104 /* var : Bool */;
val* var105 /* : nullable MGroup */;
val* var107 /* : nullable MGroup */;
short int var108 /* : Bool */;
short int var109 /* : Bool */;
short int var111 /* : Bool */;
short int var112 /* : Bool */;
short int var_113 /* var : Bool */;
val* var114 /* : nullable MGroup */;
val* var116 /* : nullable MGroup */;
val* var117 /* : MPackage */;
val* var119 /* : MPackage */;
val* var120 /* : MPackage */;
val* var122 /* : MPackage */;
short int var123 /* : Bool */;
val* var_other125 /* var other: nullable Object */;
short int var126 /* : Bool */;
short int var128 /* : Bool */;
short int var129 /* : Bool */;
short int var130 /* : Bool */;
short int var132 /* : Bool */;
short int var134 /* : Bool */;
val* var_node /* var node: ANode */;
val* var135 /* : AModuleName */;
val* var137 /* : AModuleName */;
val* var139 /* : NativeArray[String] */;
static val* varonce138;
static val* varonce140;
val* var141 /* : String */;
char* var142 /* : CString */;
val* var143 /* : String */;
val* var144 /* : nullable Int */;
val* var145 /* : nullable Int */;
val* var146 /* : nullable Bool */;
val* var147 /* : nullable Bool */;
static val* varonce148;
val* var149 /* : String */;
char* var150 /* : CString */;
val* var151 /* : String */;
val* var152 /* : nullable Int */;
val* var153 /* : nullable Int */;
val* var154 /* : nullable Bool */;
val* var155 /* : nullable Bool */;
static val* varonce156;
val* var157 /* : String */;
char* var158 /* : CString */;
val* var159 /* : String */;
val* var160 /* : nullable Int */;
val* var161 /* : nullable Int */;
val* var162 /* : nullable Bool */;
val* var163 /* : nullable Bool */;
val* var164 /* : String */;
val* var165 /* : Location */;
val* var167 /* : Location */;
val* var168 /* : String */;
val* var169 /* : String */;
val* var170 /* : Array[AModule] */;
val* var172 /* : Array[AModule] */;
val* var173 /* : HashMap[MModule, AModule] */;
val* var175 /* : HashMap[MModule, AModule] */;
val* var176 /* : Location */;
val* var178 /* : Location */;
val* var179 /* : nullable SourceFile */;
val* var181 /* : nullable SourceFile */;
val* var_source /* var source: nullable SourceFile */;
short int var182 /* : Bool */;
short int var183 /* : Bool */;
short int var185 /* : Bool */;
short int var186 /* : Bool */;
val* var187 /* : nullable MModule */;
val* var189 /* : nullable MModule */;
short int var190 /* : Bool */;
short int var191 /* : Bool */;
short int var193 /* : Bool */;
short int var195 /* : Bool */;
short int var197 /* : Bool */;
short int var198 /* : Bool */;
short int var200 /* : Bool */;
short int var201 /* : Bool */;
val* var202 /* : nullable ADoc */;
val* var204 /* : nullable ADoc */;
val* var_ndoc /* var ndoc: nullable ADoc */;
short int var205 /* : Bool */;
short int var206 /* : Bool */;
short int var208 /* : Bool */;
short int var209 /* : Bool */;
val* var210 /* : MDoc */;
val* var_mdoc /* var mdoc: MDoc */;
static val* varonce213;
val* var214 /* : String */;
char* var215 /* : CString */;
val* var216 /* : String */;
val* var217 /* : nullable Int */;
val* var218 /* : nullable Int */;
val* var219 /* : nullable Bool */;
val* var220 /* : nullable Bool */;
val* var221 /* : Array[AAnnotation] */;
short int var222 /* : Bool */;
short int var223 /* : Bool */;
static val* varonce225;
val* var226 /* : String */;
char* var227 /* : CString */;
val* var228 /* : String */;
val* var229 /* : nullable Int */;
val* var230 /* : nullable Int */;
val* var231 /* : nullable Bool */;
val* var232 /* : nullable Bool */;
val* var233 /* : Array[AAnnotation] */;
short int var234 /* : Bool */;
short int var235 /* : Bool */;
var_mgroup = p0;
var_nmodule = p1;
{
{ /* Inline loader$AModule$mmodule (var_nmodule) on <var_nmodule:AModule> */
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
{ /* Inline kernel$Object$!= (var_mmodule,((val*)NULL)) on <var_mmodule:nullable MModule> */
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 773);
fatal_exit(1);
}
{
{ /* Inline parser_nodes$AModule$n_moduledecl (var_nmodule) on <var_nmodule:AModule> */
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
{ /* Inline kernel$Object$!= (var_decl,((val*)NULL)) on <var_decl:nullable AModuledecl> */
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
{ /* Inline parser_nodes$AModuledecl$n_name (var_decl) on <var_decl:nullable AModuledecl(AModuledecl)> */
var18 = var_decl->attrs[COLOR_nitc__parser_nodes__AModuledecl___n_name].val; /* _n_name on <var_decl:nullable AModuledecl(AModuledecl)> */
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1149);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline parser_nodes$AModuleName$n_id (var16) on <var16:AModuleName> */
var21 = var16->attrs[COLOR_nitc__parser_nodes__AModuleName___n_id].val; /* _n_id on <var16:AModuleName> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2919);
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
{ /* Inline mmodule$MModule$name (var_mmodule) on <var_mmodule:nullable MModule(MModule)> */
var25 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___name].val; /* _name on <var_mmodule:nullable MModule(MModule)> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 100);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline kernel$Object$!= (var_decl_name,var23) on <var_decl_name:String> */
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
{ /* Inline parser_nodes$AModuledecl$n_name (var_decl) on <var_decl:nullable AModuledecl(AModuledecl)> */
var32 = var_decl->attrs[COLOR_nitc__parser_nodes__AModuledecl___n_name].val; /* _n_name on <var_decl:nullable AModuledecl(AModuledecl)> */
if (unlikely(var32 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1149);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
if (likely(varonce!=NULL)) {
var33 = varonce;
} else {
var34 = "module-name-mismatch";
var36 = (val*)(20l<<2|1);
var37 = (val*)(20l<<2|1);
var38 = (val*)((long)(0)<<2|3);
var39 = (val*)((long)(0)<<2|3);
var35 = core__flat___CString___to_s_unsafe(var34, var36, var37, var38, var39);
var33 = var35;
varonce = var33;
}
if (unlikely(varonce40==NULL)) {
var41 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "Error: module name mismatch; declared ";
var46 = (val*)(38l<<2|1);
var47 = (val*)(38l<<2|1);
var48 = (val*)((long)(0)<<2|3);
var49 = (val*)((long)(0)<<2|3);
var45 = core__flat___CString___to_s_unsafe(var44, var46, var47, var48, var49);
var43 = var45;
varonce42 = var43;
}
((struct instance_core__NativeArray*)var41)->values[0]=var43;
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = " file named ";
var54 = (val*)(12l<<2|1);
var55 = (val*)(12l<<2|1);
var56 = (val*)((long)(0)<<2|3);
var57 = (val*)((long)(0)<<2|3);
var53 = core__flat___CString___to_s_unsafe(var52, var54, var55, var56, var57);
var51 = var53;
varonce50 = var51;
}
((struct instance_core__NativeArray*)var41)->values[2]=var51;
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = ".";
var62 = (val*)(1l<<2|1);
var63 = (val*)(1l<<2|1);
var64 = (val*)((long)(0)<<2|3);
var65 = (val*)((long)(0)<<2|3);
var61 = core__flat___CString___to_s_unsafe(var60, var62, var63, var64, var65);
var59 = var61;
varonce58 = var59;
}
((struct instance_core__NativeArray*)var41)->values[4]=var59;
} else {
var41 = varonce40;
varonce40 = NULL;
}
((struct instance_core__NativeArray*)var41)->values[1]=var_decl_name;
{
{ /* Inline mmodule$MModule$name (var_mmodule) on <var_mmodule:nullable MModule(MModule)> */
var68 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___name].val; /* _name on <var_mmodule:nullable MModule(MModule)> */
if (unlikely(var68 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 100);
fatal_exit(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
((struct instance_core__NativeArray*)var41)->values[3]=var66;
{
var69 = ((val*(*)(val* self))(var41->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var41); /* native_to_s on <var41:NativeArray[String]>*/
}
varonce40 = var41;
{
nitc___nitc__ModelBuilder___warning(self, var30, var33, var69); /* Direct call modelbuilder_base$ModelBuilder$warning on <self:ModelBuilder>*/
}
} else {
}
} else {
}
if (var_mgroup == NULL) {
var70 = 0; /* is null */
} else {
var70 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_mgroup,((val*)NULL)) on <var_mgroup:nullable MGroup> */
var_other = ((val*)NULL);
{
var73 = ((short int(*)(val* self, val* p0))(var_mgroup->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mgroup, var_other); /* == on <var_mgroup:nullable MGroup(MGroup)>*/
}
var74 = !var73;
var71 = var74;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
var70 = var71;
}
if (var70){
{
{ /* Inline modelbuilder_base$ModelBuilder$model (self) on <self:ModelBuilder> */
var77 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var77 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 44);
fatal_exit(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
{
{ /* Inline mmodule$MModule$name (var_mmodule) on <var_mmodule:nullable MModule(MModule)> */
var80 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___name].val; /* _name on <var_mmodule:nullable MModule(MModule)> */
if (unlikely(var80 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 100);
fatal_exit(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
var81 = nitc__mmodule___Model___get_mmodules_by_name(var75, var78);
}
var_others = var81;
if (var_others == NULL) {
var82 = 0; /* is null */
} else {
var82 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_others,((val*)NULL)) on <var_others:nullable Array[MModule]> */
var_other = ((val*)NULL);
{
var85 = ((short int(*)(val* self, val* p0))(var_others->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_others, var_other); /* == on <var_others:nullable Array[MModule](Array[MModule])>*/
}
var86 = !var85;
var83 = var86;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
var82 = var83;
}
if (var82){
var_ = var_others;
{
var87 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_88 = var87;
for(;;) {
{
var89 = ((short int(*)(val* self))((((long)var_88&3)?class_info[((long)var_88&3)]:var_88->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_88); /* is_ok on <var_88:IndexedIterator[MModule]>*/
}
if (var89){
} else {
goto BREAK_label;
}
{
var90 = ((val*(*)(val* self))((((long)var_88&3)?class_info[((long)var_88&3)]:var_88->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_88); /* item on <var_88:IndexedIterator[MModule]>*/
}
var_other91 = var90;
{
{ /* Inline kernel$Object$!= (var_other91,var_mmodule) on <var_other91:MModule> */
var_other = var_mmodule;
{
var97 = ((short int(*)(val* self, val* p0))(var_other91->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_other91, var_other); /* == on <var_other91:MModule>*/
}
var98 = !var97;
var95 = var98;
goto RET_LABEL96;
RET_LABEL96:(void)0;
}
}
var_99 = var95;
if (var95){
{
{ /* Inline loader$ModelBuilder$mmodule2nmodule (self) on <self:ModelBuilder> */
var102 = self->attrs[COLOR_nitc__loader__ModelBuilder___mmodule2nmodule].val; /* _mmodule2nmodule on <self:ModelBuilder> */
if (unlikely(var102 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule2nmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 1094);
fatal_exit(1);
}
var100 = var102;
RET_LABEL101:(void)0;
}
}
{
var103 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var100, var_mmodule);
}
var94 = var103;
} else {
var94 = var_99;
}
var_104 = var94;
if (var94){
{
{ /* Inline mmodule$MModule$mgroup (var_other91) on <var_other91:MModule> */
var107 = var_other91->attrs[COLOR_nitc__mmodule__MModule___mgroup].val; /* _mgroup on <var_other91:MModule> */
var105 = var107;
RET_LABEL106:(void)0;
}
}
if (var105 == NULL) {
var108 = 0; /* is null */
} else {
var108 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var105,((val*)NULL)) on <var105:nullable MGroup> */
var_other = ((val*)NULL);
{
var111 = ((short int(*)(val* self, val* p0))(var105->class->vft[COLOR_core__kernel__Object___61d_61d]))(var105, var_other); /* == on <var105:nullable MGroup(MGroup)>*/
}
var112 = !var111;
var109 = var112;
goto RET_LABEL110;
RET_LABEL110:(void)0;
}
var108 = var109;
}
var93 = var108;
} else {
var93 = var_104;
}
var_113 = var93;
if (var93){
{
{ /* Inline mmodule$MModule$mgroup (var_other91) on <var_other91:MModule> */
var116 = var_other91->attrs[COLOR_nitc__mmodule__MModule___mgroup].val; /* _mgroup on <var_other91:MModule> */
var114 = var116;
RET_LABEL115:(void)0;
}
}
if (var114 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 788);
fatal_exit(1);
} else {
{ /* Inline mpackage$MGroup$mpackage (var114) on <var114:nullable MGroup> */
if (unlikely(var114 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 76);
fatal_exit(1);
}
var119 = var114->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val; /* _mpackage on <var114:nullable MGroup> */
if (unlikely(var119 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 76);
fatal_exit(1);
}
var117 = var119;
RET_LABEL118:(void)0;
}
}
{
{ /* Inline mpackage$MGroup$mpackage (var_mgroup) on <var_mgroup:nullable MGroup(MGroup)> */
var122 = var_mgroup->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val; /* _mpackage on <var_mgroup:nullable MGroup(MGroup)> */
if (unlikely(var122 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 76);
fatal_exit(1);
}
var120 = var122;
RET_LABEL121:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var117,var120) on <var117:MPackage> */
var_other125 = var120;
{
{ /* Inline kernel$Object$is_same_instance (var117,var_other125) on <var117:MPackage> */
var128 = var117 == var_other125;
var126 = var128;
goto RET_LABEL127;
RET_LABEL127:(void)0;
}
}
var123 = var126;
goto RET_LABEL124;
RET_LABEL124:(void)0;
}
}
var92 = var123;
} else {
var92 = var_113;
}
if (var92){
if (var_decl == NULL) {
var129 = 1; /* is null */
} else {
var129 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_decl,((val*)NULL)) on <var_decl:nullable AModuledecl> */
var_other125 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_decl,var_other125) on <var_decl:nullable AModuledecl(AModuledecl)> */
var134 = var_decl == var_other125;
var132 = var134;
goto RET_LABEL133;
RET_LABEL133:(void)0;
}
}
var130 = var132;
goto RET_LABEL131;
RET_LABEL131:(void)0;
}
var129 = var130;
}
if (var129){
var_node = var_nmodule;
} else {
{
{ /* Inline parser_nodes$AModuledecl$n_name (var_decl) on <var_decl:nullable AModuledecl(AModuledecl)> */
var137 = var_decl->attrs[COLOR_nitc__parser_nodes__AModuledecl___n_name].val; /* _n_name on <var_decl:nullable AModuledecl(AModuledecl)> */
if (unlikely(var137 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1149);
fatal_exit(1);
}
var135 = var137;
RET_LABEL136:(void)0;
}
}
var_node = var135;
}
if (unlikely(varonce138==NULL)) {
var139 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce140!=NULL)) {
var141 = varonce140;
} else {
var142 = "Error: a module named `";
var144 = (val*)(23l<<2|1);
var145 = (val*)(23l<<2|1);
var146 = (val*)((long)(0)<<2|3);
var147 = (val*)((long)(0)<<2|3);
var143 = core__flat___CString___to_s_unsafe(var142, var144, var145, var146, var147);
var141 = var143;
varonce140 = var141;
}
((struct instance_core__NativeArray*)var139)->values[0]=var141;
if (likely(varonce148!=NULL)) {
var149 = varonce148;
} else {
var150 = "` already exists at ";
var152 = (val*)(20l<<2|1);
var153 = (val*)(20l<<2|1);
var154 = (val*)((long)(0)<<2|3);
var155 = (val*)((long)(0)<<2|3);
var151 = core__flat___CString___to_s_unsafe(var150, var152, var153, var154, var155);
var149 = var151;
varonce148 = var149;
}
((struct instance_core__NativeArray*)var139)->values[2]=var149;
if (likely(varonce156!=NULL)) {
var157 = varonce156;
} else {
var158 = ".";
var160 = (val*)(1l<<2|1);
var161 = (val*)(1l<<2|1);
var162 = (val*)((long)(0)<<2|3);
var163 = (val*)((long)(0)<<2|3);
var159 = core__flat___CString___to_s_unsafe(var158, var160, var161, var162, var163);
var157 = var159;
varonce156 = var157;
}
((struct instance_core__NativeArray*)var139)->values[4]=var157;
} else {
var139 = varonce138;
varonce138 = NULL;
}
{
var164 = nitc___nitc__MModule___nitc__model_base__MEntity__full_name(var_other91);
}
((struct instance_core__NativeArray*)var139)->values[1]=var164;
{
{ /* Inline mmodule$MModule$location (var_other91) on <var_other91:MModule> */
var167 = var_other91->attrs[COLOR_nitc__mmodule__MModule___location].val; /* _location on <var_other91:MModule> */
if (unlikely(var167 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 103);
fatal_exit(1);
}
var165 = var167;
RET_LABEL166:(void)0;
}
}
{
var168 = ((val*(*)(val* self))(var165->class->vft[COLOR_core__abstract_text__Object__to_s]))(var165); /* to_s on <var165:Location>*/
}
((struct instance_core__NativeArray*)var139)->values[3]=var168;
{
var169 = ((val*(*)(val* self))(var139->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var139); /* native_to_s on <var139:NativeArray[String]>*/
}
varonce138 = var139;
{
nitc___nitc__ModelBuilder___error(self, var_node, var169); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
goto BREAK_label;
} else {
}
{
((void(*)(val* self))((((long)var_88&3)?class_info[((long)var_88&3)]:var_88->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_88); /* next on <var_88:IndexedIterator[MModule]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_88&3)?class_info[((long)var_88&3)]:var_88->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_88); /* finish on <var_88:IndexedIterator[MModule]>*/
}
} else {
}
} else {
}
{
{ /* Inline loader$ModelBuilder$nmodules (self) on <self:ModelBuilder> */
var172 = self->attrs[COLOR_nitc__loader__ModelBuilder___nmodules].val; /* _nmodules on <self:ModelBuilder> */
if (unlikely(var172 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _nmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 1091);
fatal_exit(1);
}
var170 = var172;
RET_LABEL171:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var170, var_nmodule); /* Direct call array$Array$add on <var170:Array[AModule]>*/
}
{
{ /* Inline loader$ModelBuilder$mmodule2nmodule (self) on <self:ModelBuilder> */
var175 = self->attrs[COLOR_nitc__loader__ModelBuilder___mmodule2nmodule].val; /* _mmodule2nmodule on <self:ModelBuilder> */
if (unlikely(var175 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule2nmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 1094);
fatal_exit(1);
}
var173 = var175;
RET_LABEL174:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var173, var_mmodule, var_nmodule); /* Direct call hash_collection$HashMap$[]= on <var173:HashMap[MModule, AModule]>*/
}
{
{ /* Inline parser_nodes$ANode$location (var_nmodule) on <var_nmodule:AModule> */
var178 = var_nmodule->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_nmodule:AModule> */
if (unlikely(var178 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var176 = var178;
RET_LABEL177:(void)0;
}
}
{
{ /* Inline location$Location$file (var176) on <var176:Location> */
var181 = var176->attrs[COLOR_nitc__location__Location___file].val; /* _file on <var176:Location> */
var179 = var181;
RET_LABEL180:(void)0;
}
}
var_source = var179;
if (var_source == NULL) {
var182 = 0; /* is null */
} else {
var182 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_source,((val*)NULL)) on <var_source:nullable SourceFile> */
var_other = ((val*)NULL);
{
var185 = ((short int(*)(val* self, val* p0))(var_source->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_source, var_other); /* == on <var_source:nullable SourceFile(SourceFile)>*/
}
var186 = !var185;
var183 = var186;
goto RET_LABEL184;
RET_LABEL184:(void)0;
}
var182 = var183;
}
if (var182){
{
{ /* Inline loader$SourceFile$mmodule (var_source) on <var_source:nullable SourceFile(SourceFile)> */
var189 = var_source->attrs[COLOR_nitc__loader__SourceFile___mmodule].val; /* _mmodule on <var_source:nullable SourceFile(SourceFile)> */
var187 = var189;
RET_LABEL188:(void)0;
}
}
if (var187 == NULL) {
var190 = 1; /* is null */
} else {
var190 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var187,((val*)NULL)) on <var187:nullable MModule> */
var_other125 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var187,var_other125) on <var187:nullable MModule(MModule)> */
var195 = var187 == var_other125;
var193 = var195;
goto RET_LABEL194;
RET_LABEL194:(void)0;
}
}
var191 = var193;
goto RET_LABEL192;
RET_LABEL192:(void)0;
}
var190 = var191;
}
if (unlikely(!var190)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 802);
fatal_exit(1);
}
{
{ /* Inline loader$SourceFile$mmodule= (var_source,var_mmodule) on <var_source:nullable SourceFile(SourceFile)> */
var_source->attrs[COLOR_nitc__loader__SourceFile___mmodule].val = var_mmodule; /* _mmodule on <var_source:nullable SourceFile(SourceFile)> */
RET_LABEL196:(void)0;
}
}
} else {
}
if (var_decl == NULL) {
var197 = 0; /* is null */
} else {
var197 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_decl,((val*)NULL)) on <var_decl:nullable AModuledecl> */
var_other = ((val*)NULL);
{
var200 = ((short int(*)(val* self, val* p0))(var_decl->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_decl, var_other); /* == on <var_decl:nullable AModuledecl(AModuledecl)>*/
}
var201 = !var200;
var198 = var201;
goto RET_LABEL199;
RET_LABEL199:(void)0;
}
var197 = var198;
}
if (var197){
{
{ /* Inline parser_nodes$ADefinition$n_doc (var_decl) on <var_decl:nullable AModuledecl(AModuledecl)> */
var204 = var_decl->attrs[COLOR_nitc__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <var_decl:nullable AModuledecl(AModuledecl)> */
var202 = var204;
RET_LABEL203:(void)0;
}
}
var_ndoc = var202;
if (var_ndoc == NULL) {
var205 = 0; /* is null */
} else {
var205 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_ndoc,((val*)NULL)) on <var_ndoc:nullable ADoc> */
var_other = ((val*)NULL);
{
var208 = ((short int(*)(val* self, val* p0))(var_ndoc->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ndoc, var_other); /* == on <var_ndoc:nullable ADoc(ADoc)>*/
}
var209 = !var208;
var206 = var209;
goto RET_LABEL207;
RET_LABEL207:(void)0;
}
var205 = var206;
}
if (var205){
{
var210 = nitc__modelbuilder_base___ADoc___to_mdoc(var_ndoc);
}
var_mdoc = var210;
{
{ /* Inline mdoc$MEntity$mdoc= (var_mmodule,var_mdoc) on <var_mmodule:nullable MModule(MModule)> */
var_mmodule->attrs[COLOR_nitc__mdoc__MEntity___mdoc].val = var_mdoc; /* _mdoc on <var_mmodule:nullable MModule(MModule)> */
RET_LABEL211:(void)0;
}
}
{
{ /* Inline mdoc$MDoc$original_mentity= (var_mdoc,var_mmodule) on <var_mdoc:MDoc> */
var_mdoc->attrs[COLOR_nitc__mdoc__MDoc___original_mentity].val = var_mmodule; /* _original_mentity on <var_mdoc:MDoc> */
RET_LABEL212:(void)0;
}
}
} else {
}
if (likely(varonce213!=NULL)) {
var214 = varonce213;
} else {
var215 = "test_suite";
var217 = (val*)(10l<<2|1);
var218 = (val*)(10l<<2|1);
var219 = (val*)((long)(0)<<2|3);
var220 = (val*)((long)(0)<<2|3);
var216 = core__flat___CString___to_s_unsafe(var215, var217, var218, var219, var220);
var214 = var216;
varonce213 = var214;
}
{
var221 = nitc___nitc__Prod___get_annotations(var_decl, var214);
}
{
var222 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var221);
}
var223 = !var222;
{
{ /* Inline mmodule$MModule$is_test_suite= (var_mmodule,var223) on <var_mmodule:nullable MModule(MModule)> */
var_mmodule->attrs[COLOR_nitc__mmodule__MModule___is_test_suite].s = var223; /* _is_test_suite on <var_mmodule:nullable MModule(MModule)> */
RET_LABEL224:(void)0;
}
}
if (likely(varonce225!=NULL)) {
var226 = varonce225;
} else {
var227 = "generated";
var229 = (val*)(9l<<2|1);
var230 = (val*)(9l<<2|1);
var231 = (val*)((long)(0)<<2|3);
var232 = (val*)((long)(0)<<2|3);
var228 = core__flat___CString___to_s_unsafe(var227, var229, var230, var231, var232);
var226 = var228;
varonce225 = var226;
}
{
var233 = nitc___nitc__Prod___get_annotations(var_decl, var226);
}
{
var234 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var233);
}
var235 = !var234;
{
{ /* Inline mmodule$MModule$is_generated= (var_mmodule,var235) on <var_mmodule:nullable MModule(MModule)> */
var_mmodule->attrs[COLOR_nitc__mmodule__MModule___is_generated].s = var235; /* _is_generated on <var_mmodule:nullable MModule(MModule)> */
RET_LABEL236:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method loader$ModelBuilder$seach_module_by_amodule_name for (self: ModelBuilder, AModuleName, nullable MGroup): nullable MModule */
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
char* var53 /* : CString */;
val* var54 /* : String */;
val* var55 /* : nullable Int */;
val* var56 /* : nullable Int */;
val* var57 /* : nullable Bool */;
val* var58 /* : nullable Bool */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : CString */;
val* var62 /* : String */;
val* var63 /* : nullable Int */;
val* var64 /* : nullable Int */;
val* var65 /* : nullable Bool */;
val* var66 /* : nullable Bool */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : CString */;
val* var70 /* : String */;
val* var71 /* : nullable Int */;
val* var72 /* : nullable Int */;
val* var73 /* : nullable Bool */;
val* var74 /* : nullable Bool */;
val* var75 /* : Array[String] */;
val* var_76 /* var : Array[String] */;
val* var_77 /* var : Array[MModule] */;
val* var78 /* : IndexedIterator[nullable Object] */;
val* var_79 /* var : IndexedIterator[MModule] */;
short int var80 /* : Bool */;
val* var82 /* : nullable Object */;
val* var_x83 /* var x: MModule */;
val* var84 /* : String */;
val* var85 /* : nullable String */;
val* var86 /* : String */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : CString */;
val* var90 /* : String */;
val* var91 /* : nullable Int */;
val* var92 /* : nullable Int */;
val* var93 /* : nullable Bool */;
val* var94 /* : nullable Bool */;
val* var95 /* : String */;
val* var96 /* : String */;
val* var97 /* : nullable Object */;
val* var98 /* : ANodes[TId] */;
val* var100 /* : ANodes[TId] */;
val* var101 /* : nullable Object */;
val* var102 /* : String */;
val* var_root_name /* var root_name: String */;
val* var103 /* : Array[String] */;
val* var105 /* : Array[String] */;
val* var106 /* : ArraySet[MGroup] */;
val* var_roots /* var roots: ArraySet[MGroup] */;
short int var107 /* : Bool */;
val* var109 /* : NativeArray[String] */;
static val* varonce108;
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : CString */;
val* var113 /* : String */;
val* var114 /* : nullable Int */;
val* var115 /* : nullable Int */;
val* var116 /* : nullable Bool */;
val* var117 /* : nullable Bool */;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : CString */;
val* var121 /* : String */;
val* var122 /* : nullable Int */;
val* var123 /* : nullable Int */;
val* var124 /* : nullable Bool */;
val* var125 /* : nullable Bool */;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : CString */;
val* var129 /* : String */;
val* var130 /* : nullable Int */;
val* var131 /* : nullable Int */;
val* var132 /* : nullable Bool */;
val* var133 /* : nullable Bool */;
val* var134 /* : Array[String] */;
val* var136 /* : Array[String] */;
static val* varonce137;
val* var138 /* : String */;
char* var139 /* : CString */;
val* var140 /* : String */;
val* var141 /* : nullable Int */;
val* var142 /* : nullable Int */;
val* var143 /* : nullable Bool */;
val* var144 /* : nullable Bool */;
val* var145 /* : String */;
val* var146 /* : String */;
val* var147 /* : ArraySet[MModule] */;
val* var_res148 /* var res: ArraySet[MModule] */;
val* var_149 /* var : ArraySet[MGroup] */;
val* var150 /* : Iterator[nullable Object] */;
val* var_151 /* var : Iterator[MGroup] */;
short int var152 /* : Bool */;
val* var154 /* : nullable Object */;
val* var_r155 /* var r: MGroup */;
val* var156 /* : Array[MModule] */;
val* var_root_res /* var root_res: Array[MModule] */;
val* var_157 /* var : Array[MModule] */;
val* var158 /* : IndexedIterator[nullable Object] */;
val* var_159 /* var : IndexedIterator[MModule] */;
short int var160 /* : Bool */;
val* var162 /* : nullable Object */;
val* var_x163 /* var x: MModule */;
short int var164 /* : Bool */;
short int var165 /* : Bool */;
long var166 /* : Int */;
short int var167 /* : Bool */;
short int var169 /* : Bool */;
int cltype170;
int idtype171;
const char* var_class_name172;
short int var173 /* : Bool */;
val* var175 /* : NativeArray[String] */;
static val* varonce174;
static val* varonce176;
val* var177 /* : String */;
char* var178 /* : CString */;
val* var179 /* : String */;
val* var180 /* : nullable Int */;
val* var181 /* : nullable Int */;
val* var182 /* : nullable Bool */;
val* var183 /* : nullable Bool */;
static val* varonce184;
val* var185 /* : String */;
char* var186 /* : CString */;
val* var187 /* : String */;
val* var188 /* : nullable Int */;
val* var189 /* : nullable Int */;
val* var190 /* : nullable Bool */;
val* var191 /* : nullable Bool */;
static val* varonce192;
val* var193 /* : String */;
char* var194 /* : CString */;
val* var195 /* : String */;
val* var196 /* : nullable Int */;
val* var197 /* : nullable Int */;
val* var198 /* : nullable Bool */;
val* var199 /* : nullable Bool */;
val* var200 /* : Array[String] */;
val* var_201 /* var : Array[String] */;
val* var_202 /* var : ArraySet[MModule] */;
val* var203 /* : Iterator[nullable Object] */;
val* var_204 /* var : Iterator[MModule] */;
short int var205 /* : Bool */;
val* var207 /* : nullable Object */;
val* var_x208 /* var x: MModule */;
val* var209 /* : String */;
val* var210 /* : nullable String */;
val* var211 /* : String */;
static val* varonce212;
val* var213 /* : String */;
char* var214 /* : CString */;
val* var215 /* : String */;
val* var216 /* : nullable Int */;
val* var217 /* : nullable Int */;
val* var218 /* : nullable Bool */;
val* var219 /* : nullable Bool */;
val* var220 /* : String */;
val* var221 /* : String */;
val* var222 /* : nullable Object */;
val* var224 /* : NativeArray[String] */;
static val* varonce223;
static val* varonce225;
val* var226 /* : String */;
char* var227 /* : CString */;
val* var228 /* : String */;
val* var229 /* : nullable Int */;
val* var230 /* : nullable Int */;
val* var231 /* : nullable Bool */;
val* var232 /* : nullable Bool */;
static val* varonce233;
val* var234 /* : String */;
char* var235 /* : CString */;
val* var236 /* : String */;
val* var237 /* : nullable Int */;
val* var238 /* : nullable Int */;
val* var239 /* : nullable Bool */;
val* var240 /* : nullable Bool */;
static val* varonce241;
val* var242 /* : String */;
char* var243 /* : CString */;
val* var244 /* : String */;
val* var245 /* : nullable Int */;
val* var246 /* : nullable Int */;
val* var247 /* : nullable Bool */;
val* var248 /* : nullable Bool */;
static val* varonce249;
val* var250 /* : String */;
char* var251 /* : CString */;
val* var252 /* : String */;
val* var253 /* : nullable Int */;
val* var254 /* : nullable Int */;
val* var255 /* : nullable Bool */;
val* var256 /* : nullable Bool */;
val* var257 /* : Array[String] */;
val* var259 /* : Array[String] */;
static val* varonce260;
val* var261 /* : String */;
char* var262 /* : CString */;
val* var263 /* : String */;
val* var264 /* : nullable Int */;
val* var265 /* : nullable Int */;
val* var266 /* : nullable Bool */;
val* var267 /* : nullable Bool */;
val* var268 /* : String */;
val* var269 /* : String */;
var_n_name = p0;
var_mgroup = p1;
{
{ /* Inline parser_nodes$AModuleName$n_id (var_n_name) on <var_n_name:AModuleName> */
var3 = var_n_name->attrs[COLOR_nitc__parser_nodes__AModuleName___n_id].val; /* _n_id on <var_n_name:AModuleName> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2919);
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
{ /* Inline parser_nodes$AModuleName$n_quad (var_n_name) on <var_n_name:AModuleName> */
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
{ /* Inline kernel$Object$!= (var5,((val*)NULL)) on <var5:nullable TQuad> */
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
{ /* Inline parser_nodes$AModuleName$n_path (var_n_name) on <var_n_name:AModuleName> */
var15 = var_n_name->attrs[COLOR_nitc__parser_nodes__AModuleName___n_path].val; /* _n_path on <var_n_name:AModuleName> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2916);
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
{ /* Inline kernel$Object$!= (var_mgroup,((val*)NULL)) on <var_mgroup:nullable MGroup> */
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
{ /* Inline mpackage$MGroup$mpackage (var_mgroup) on <var_mgroup:nullable MGroup(MGroup)> */
var25 = var_mgroup->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val; /* _mpackage on <var_mgroup:nullable MGroup(MGroup)> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 76);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline mpackage$MPackage$root (var23) on <var23:MPackage> */
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
{ /* Inline kernel$Object$!= (var_r,((val*)NULL)) on <var_r:nullable MGroup> */
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 841);
fatal_exit(1);
}
{
nitc__loader___ModelBuilder___scan_group(self, var_r); /* Direct call loader$ModelBuilder$scan_group on <self:ModelBuilder>*/
}
{
var34 = nitc__loader___MGroup___mmodules_by_name(var_r, var_mod_name);
}
var_res = var34;
var35 = NEW_core__Array(&type_core__Array__nitc__MModule);
{
core___core__Array___with_capacity(var35, 1l); /* Direct call array$Array$with_capacity on <var35:Array[MModule]>*/
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
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_x); /* Direct call array$AbstractArray$push on <var_:Array[MModule]>*/
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
{ /* Inline array$AbstractArrayRead$length (var_res) on <var_res:Array[MModule]> */
var45 = var_res->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_res:Array[MModule]> */
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var43,1l) on <var43:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var48 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var48)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
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
var50 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "Error: conflicting module files for `";
var55 = (val*)(37l<<2|1);
var56 = (val*)(37l<<2|1);
var57 = (val*)((long)(0)<<2|3);
var58 = (val*)((long)(0)<<2|3);
var54 = core__flat___CString___to_s_unsafe(var53, var55, var56, var57, var58);
var52 = var54;
varonce51 = var52;
}
((struct instance_core__NativeArray*)var50)->values[0]=var52;
if (likely(varonce59!=NULL)) {
var60 = varonce59;
} else {
var61 = "`: `";
var63 = (val*)(4l<<2|1);
var64 = (val*)(4l<<2|1);
var65 = (val*)((long)(0)<<2|3);
var66 = (val*)((long)(0)<<2|3);
var62 = core__flat___CString___to_s_unsafe(var61, var63, var64, var65, var66);
var60 = var62;
varonce59 = var60;
}
((struct instance_core__NativeArray*)var50)->values[2]=var60;
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = "`";
var71 = (val*)(1l<<2|1);
var72 = (val*)(1l<<2|1);
var73 = (val*)((long)(0)<<2|3);
var74 = (val*)((long)(0)<<2|3);
var70 = core__flat___CString___to_s_unsafe(var69, var71, var72, var73, var74);
var68 = var70;
varonce67 = var68;
}
((struct instance_core__NativeArray*)var50)->values[4]=var68;
} else {
var50 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var50)->values[1]=var_mod_name;
var75 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___with_capacity(var75, 1l); /* Direct call array$Array$with_capacity on <var75:Array[String]>*/
}
var_76 = var75;
var_77 = var_res;
{
var78 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_77);
}
var_79 = var78;
for(;;) {
{
var80 = ((short int(*)(val* self))((((long)var_79&3)?class_info[((long)var_79&3)]:var_79->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_79); /* is_ok on <var_79:IndexedIterator[MModule]>*/
}
if (var80){
} else {
goto BREAK_label81;
}
{
var82 = ((val*(*)(val* self))((((long)var_79&3)?class_info[((long)var_79&3)]:var_79->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_79); /* item on <var_79:IndexedIterator[MModule]>*/
}
var_x83 = var82;
{
var85 = nitc___nitc__MModule___filepath(var_x83);
}
if (var85!=NULL) {
var84 = var85;
} else {
{
var86 = nitc___nitc__MModule___nitc__model_base__MEntity__full_name(var_x83);
}
var84 = var86;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_76, var84); /* Direct call array$AbstractArray$push on <var_76:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_79&3)?class_info[((long)var_79&3)]:var_79->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_79); /* next on <var_79:IndexedIterator[MModule]>*/
}
}
BREAK_label81: (void)0;
{
((void(*)(val* self))((((long)var_79&3)?class_info[((long)var_79&3)]:var_79->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_79); /* finish on <var_79:IndexedIterator[MModule]>*/
}
if (likely(varonce87!=NULL)) {
var88 = varonce87;
} else {
var89 = "`, `";
var91 = (val*)(4l<<2|1);
var92 = (val*)(4l<<2|1);
var93 = (val*)((long)(0)<<2|3);
var94 = (val*)((long)(0)<<2|3);
var90 = core__flat___CString___to_s_unsafe(var89, var91, var92, var93, var94);
var88 = var90;
varonce87 = var88;
}
{
var95 = core__abstract_text___Collection___join(var_76, var88, ((val*)NULL));
}
((struct instance_core__NativeArray*)var50)->values[3]=var95;
{
var96 = ((val*(*)(val* self))(var50->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var50); /* native_to_s on <var50:NativeArray[String]>*/
}
varonce = var50;
{
nitc___nitc__ModelBuilder___error(self, var_n_name, var96); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
} else {
}
{
var97 = core___core__SequenceRead___Collection__first(var_res);
}
var = var97;
goto RET_LABEL;
} else {
}
} else {
}
{
{ /* Inline parser_nodes$AModuleName$n_path (var_n_name) on <var_n_name:AModuleName> */
var100 = var_n_name->attrs[COLOR_nitc__parser_nodes__AModuleName___n_path].val; /* _n_path on <var_n_name:AModuleName> */
if (unlikely(var100 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2916);
fatal_exit(1);
}
var98 = var100;
RET_LABEL99:(void)0;
}
}
{
var101 = core___core__SequenceRead___Collection__first(var98);
}
{
var102 = nitc__lexer_work___Token___text(var101);
}
var_root_name = var102;
{
{ /* Inline loader$ModelBuilder$paths (self) on <self:ModelBuilder> */
var105 = self->attrs[COLOR_nitc__loader__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var105 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 213);
fatal_exit(1);
}
var103 = var105;
RET_LABEL104:(void)0;
}
}
{
var106 = nitc__loader___ModelBuilder___search_group_in_paths(self, var_root_name, var103);
}
var_roots = var106;
{
var107 = core___core__ArraySet___core__abstract_collection__Collection__is_empty(var_roots);
}
if (var107){
if (unlikely(varonce108==NULL)) {
var109 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce110!=NULL)) {
var111 = varonce110;
} else {
var112 = "Error: cannot find `";
var114 = (val*)(20l<<2|1);
var115 = (val*)(20l<<2|1);
var116 = (val*)((long)(0)<<2|3);
var117 = (val*)((long)(0)<<2|3);
var113 = core__flat___CString___to_s_unsafe(var112, var114, var115, var116, var117);
var111 = var113;
varonce110 = var111;
}
((struct instance_core__NativeArray*)var109)->values[0]=var111;
if (likely(varonce118!=NULL)) {
var119 = varonce118;
} else {
var120 = "`. Tried: ";
var122 = (val*)(10l<<2|1);
var123 = (val*)(10l<<2|1);
var124 = (val*)((long)(0)<<2|3);
var125 = (val*)((long)(0)<<2|3);
var121 = core__flat___CString___to_s_unsafe(var120, var122, var123, var124, var125);
var119 = var121;
varonce118 = var119;
}
((struct instance_core__NativeArray*)var109)->values[2]=var119;
if (likely(varonce126!=NULL)) {
var127 = varonce126;
} else {
var128 = ".";
var130 = (val*)(1l<<2|1);
var131 = (val*)(1l<<2|1);
var132 = (val*)((long)(0)<<2|3);
var133 = (val*)((long)(0)<<2|3);
var129 = core__flat___CString___to_s_unsafe(var128, var130, var131, var132, var133);
var127 = var129;
varonce126 = var127;
}
((struct instance_core__NativeArray*)var109)->values[4]=var127;
} else {
var109 = varonce108;
varonce108 = NULL;
}
((struct instance_core__NativeArray*)var109)->values[1]=var_root_name;
{
{ /* Inline loader$ModelBuilder$paths (self) on <self:ModelBuilder> */
var136 = self->attrs[COLOR_nitc__loader__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var136 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 213);
fatal_exit(1);
}
var134 = var136;
RET_LABEL135:(void)0;
}
}
if (likely(varonce137!=NULL)) {
var138 = varonce137;
} else {
var139 = ", ";
var141 = (val*)(2l<<2|1);
var142 = (val*)(2l<<2|1);
var143 = (val*)((long)(0)<<2|3);
var144 = (val*)((long)(0)<<2|3);
var140 = core__flat___CString___to_s_unsafe(var139, var141, var142, var143, var144);
var138 = var140;
varonce137 = var138;
}
{
var145 = core__abstract_text___Collection___join(var134, var138, ((val*)NULL));
}
((struct instance_core__NativeArray*)var109)->values[3]=var145;
{
var146 = ((val*(*)(val* self))(var109->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var109); /* native_to_s on <var109:NativeArray[String]>*/
}
varonce108 = var109;
{
nitc___nitc__ModelBuilder___error(self, var_n_name, var146); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var147 = NEW_core__ArraySet(&type_core__ArraySet__nitc__MModule);
{
core___core__ArraySet___core__kernel__Object__init(var147); /* Direct call array$ArraySet$init on <var147:ArraySet[MModule]>*/
}
var_res148 = var147;
var_149 = var_roots;
{
var150 = core___core__ArraySet___core__abstract_collection__Collection__iterator(var_149);
}
var_151 = var150;
for(;;) {
{
var152 = ((short int(*)(val* self))((((long)var_151&3)?class_info[((long)var_151&3)]:var_151->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_151); /* is_ok on <var_151:Iterator[MGroup]>*/
}
if (var152){
} else {
goto BREAK_label153;
}
{
var154 = ((val*(*)(val* self))((((long)var_151&3)?class_info[((long)var_151&3)]:var_151->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_151); /* item on <var_151:Iterator[MGroup]>*/
}
var_r155 = var154;
{
nitc__loader___ModelBuilder___scan_group(self, var_r155); /* Direct call loader$ModelBuilder$scan_group on <self:ModelBuilder>*/
}
{
var156 = nitc__loader___MGroup___mmodules_by_name(var_r155, var_mod_name);
}
var_root_res = var156;
var_157 = var_root_res;
{
var158 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_157);
}
var_159 = var158;
for(;;) {
{
var160 = ((short int(*)(val* self))((((long)var_159&3)?class_info[((long)var_159&3)]:var_159->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_159); /* is_ok on <var_159:IndexedIterator[MModule]>*/
}
if (var160){
} else {
goto BREAK_label161;
}
{
var162 = ((val*(*)(val* self))((((long)var_159&3)?class_info[((long)var_159&3)]:var_159->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_159); /* item on <var_159:IndexedIterator[MModule]>*/
}
var_x163 = var162;
{
var164 = nitc__loader___ModelBuilder___match_amodulename(self, var_n_name, var_x163);
}
if (var164){
{
core___core__ArraySet___core__abstract_collection__SimpleCollection__add(var_res148, var_x163); /* Direct call array$ArraySet$add on <var_res148:ArraySet[MModule]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_159&3)?class_info[((long)var_159&3)]:var_159->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_159); /* next on <var_159:IndexedIterator[MModule]>*/
}
}
BREAK_label161: (void)0;
{
((void(*)(val* self))((((long)var_159&3)?class_info[((long)var_159&3)]:var_159->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_159); /* finish on <var_159:IndexedIterator[MModule]>*/
}
{
((void(*)(val* self))((((long)var_151&3)?class_info[((long)var_151&3)]:var_151->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_151); /* next on <var_151:Iterator[MGroup]>*/
}
}
BREAK_label153: (void)0;
{
((void(*)(val* self))((((long)var_151&3)?class_info[((long)var_151&3)]:var_151->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_151); /* finish on <var_151:Iterator[MGroup]>*/
}
{
var165 = core___core__Collection___not_empty(var_res148);
}
if (var165){
{
var166 = core___core__ArraySet___core__abstract_collection__Collection__length(var_res148);
}
{
{ /* Inline kernel$Int$> (var166,1l) on <var166:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var169 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var169)) {
var_class_name172 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name172);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var173 = var166 > 1l;
var167 = var173;
goto RET_LABEL168;
RET_LABEL168:(void)0;
}
}
if (var167){
if (unlikely(varonce174==NULL)) {
var175 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce176!=NULL)) {
var177 = varonce176;
} else {
var178 = "Error: conflicting module files for `";
var180 = (val*)(37l<<2|1);
var181 = (val*)(37l<<2|1);
var182 = (val*)((long)(0)<<2|3);
var183 = (val*)((long)(0)<<2|3);
var179 = core__flat___CString___to_s_unsafe(var178, var180, var181, var182, var183);
var177 = var179;
varonce176 = var177;
}
((struct instance_core__NativeArray*)var175)->values[0]=var177;
if (likely(varonce184!=NULL)) {
var185 = varonce184;
} else {
var186 = "`: `";
var188 = (val*)(4l<<2|1);
var189 = (val*)(4l<<2|1);
var190 = (val*)((long)(0)<<2|3);
var191 = (val*)((long)(0)<<2|3);
var187 = core__flat___CString___to_s_unsafe(var186, var188, var189, var190, var191);
var185 = var187;
varonce184 = var185;
}
((struct instance_core__NativeArray*)var175)->values[2]=var185;
if (likely(varonce192!=NULL)) {
var193 = varonce192;
} else {
var194 = "`";
var196 = (val*)(1l<<2|1);
var197 = (val*)(1l<<2|1);
var198 = (val*)((long)(0)<<2|3);
var199 = (val*)((long)(0)<<2|3);
var195 = core__flat___CString___to_s_unsafe(var194, var196, var197, var198, var199);
var193 = var195;
varonce192 = var193;
}
((struct instance_core__NativeArray*)var175)->values[4]=var193;
} else {
var175 = varonce174;
varonce174 = NULL;
}
((struct instance_core__NativeArray*)var175)->values[1]=var_mod_name;
var200 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___with_capacity(var200, 1l); /* Direct call array$Array$with_capacity on <var200:Array[String]>*/
}
var_201 = var200;
var_202 = var_res148;
{
var203 = core___core__ArraySet___core__abstract_collection__Collection__iterator(var_202);
}
var_204 = var203;
for(;;) {
{
var205 = ((short int(*)(val* self))((((long)var_204&3)?class_info[((long)var_204&3)]:var_204->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_204); /* is_ok on <var_204:Iterator[MModule]>*/
}
if (var205){
} else {
goto BREAK_label206;
}
{
var207 = ((val*(*)(val* self))((((long)var_204&3)?class_info[((long)var_204&3)]:var_204->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_204); /* item on <var_204:Iterator[MModule]>*/
}
var_x208 = var207;
{
var210 = nitc___nitc__MModule___filepath(var_x208);
}
if (var210!=NULL) {
var209 = var210;
} else {
{
var211 = nitc___nitc__MModule___nitc__model_base__MEntity__full_name(var_x208);
}
var209 = var211;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_201, var209); /* Direct call array$AbstractArray$push on <var_201:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_204&3)?class_info[((long)var_204&3)]:var_204->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_204); /* next on <var_204:Iterator[MModule]>*/
}
}
BREAK_label206: (void)0;
{
((void(*)(val* self))((((long)var_204&3)?class_info[((long)var_204&3)]:var_204->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_204); /* finish on <var_204:Iterator[MModule]>*/
}
if (likely(varonce212!=NULL)) {
var213 = varonce212;
} else {
var214 = "`, `";
var216 = (val*)(4l<<2|1);
var217 = (val*)(4l<<2|1);
var218 = (val*)((long)(0)<<2|3);
var219 = (val*)((long)(0)<<2|3);
var215 = core__flat___CString___to_s_unsafe(var214, var216, var217, var218, var219);
var213 = var215;
varonce212 = var213;
}
{
var220 = core__abstract_text___Collection___join(var_201, var213, ((val*)NULL));
}
((struct instance_core__NativeArray*)var175)->values[3]=var220;
{
var221 = ((val*(*)(val* self))(var175->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var175); /* native_to_s on <var175:NativeArray[String]>*/
}
varonce174 = var175;
{
nitc___nitc__ModelBuilder___error(self, var_n_name, var221); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
} else {
}
{
var222 = core___core__ArraySet___core__abstract_collection__Collection__first(var_res148);
}
var = var222;
goto RET_LABEL;
} else {
}
if (unlikely(varonce223==NULL)) {
var224 = NEW_core__NativeArray((int)7l, &type_core__NativeArray__core__String);
if (likely(varonce225!=NULL)) {
var226 = varonce225;
} else {
var227 = "Error: cannot find module `";
var229 = (val*)(27l<<2|1);
var230 = (val*)(27l<<2|1);
var231 = (val*)((long)(0)<<2|3);
var232 = (val*)((long)(0)<<2|3);
var228 = core__flat___CString___to_s_unsafe(var227, var229, var230, var231, var232);
var226 = var228;
varonce225 = var226;
}
((struct instance_core__NativeArray*)var224)->values[0]=var226;
if (likely(varonce233!=NULL)) {
var234 = varonce233;
} else {
var235 = "` from `";
var237 = (val*)(8l<<2|1);
var238 = (val*)(8l<<2|1);
var239 = (val*)((long)(0)<<2|3);
var240 = (val*)((long)(0)<<2|3);
var236 = core__flat___CString___to_s_unsafe(var235, var237, var238, var239, var240);
var234 = var236;
varonce233 = var234;
}
((struct instance_core__NativeArray*)var224)->values[2]=var234;
if (likely(varonce241!=NULL)) {
var242 = varonce241;
} else {
var243 = "`. Tried: ";
var245 = (val*)(10l<<2|1);
var246 = (val*)(10l<<2|1);
var247 = (val*)((long)(0)<<2|3);
var248 = (val*)((long)(0)<<2|3);
var244 = core__flat___CString___to_s_unsafe(var243, var245, var246, var247, var248);
var242 = var244;
varonce241 = var242;
}
((struct instance_core__NativeArray*)var224)->values[4]=var242;
if (likely(varonce249!=NULL)) {
var250 = varonce249;
} else {
var251 = ".";
var253 = (val*)(1l<<2|1);
var254 = (val*)(1l<<2|1);
var255 = (val*)((long)(0)<<2|3);
var256 = (val*)((long)(0)<<2|3);
var252 = core__flat___CString___to_s_unsafe(var251, var253, var254, var255, var256);
var250 = var252;
varonce249 = var250;
}
((struct instance_core__NativeArray*)var224)->values[6]=var250;
} else {
var224 = varonce223;
varonce223 = NULL;
}
((struct instance_core__NativeArray*)var224)->values[1]=var_mod_name;
((struct instance_core__NativeArray*)var224)->values[3]=var_root_name;
{
{ /* Inline loader$ModelBuilder$paths (self) on <self:ModelBuilder> */
var259 = self->attrs[COLOR_nitc__loader__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var259 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 213);
fatal_exit(1);
}
var257 = var259;
RET_LABEL258:(void)0;
}
}
if (likely(varonce260!=NULL)) {
var261 = varonce260;
} else {
var262 = ", ";
var264 = (val*)(2l<<2|1);
var265 = (val*)(2l<<2|1);
var266 = (val*)((long)(0)<<2|3);
var267 = (val*)((long)(0)<<2|3);
var263 = core__flat___CString___to_s_unsafe(var262, var264, var265, var266, var267);
var261 = var263;
varonce260 = var261;
}
{
var268 = core__abstract_text___Collection___join(var257, var261, ((val*)NULL));
}
((struct instance_core__NativeArray*)var224)->values[5]=var268;
{
var269 = ((val*(*)(val* self))(var224->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var224); /* native_to_s on <var224:NativeArray[String]>*/
}
varonce223 = var224;
{
nitc___nitc__ModelBuilder___error(self, var_n_name, var269); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader$ModelBuilder$match_amodulename for (self: ModelBuilder, AModuleName, MModule): Bool */
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
{ /* Inline mmodule$MModule$mgroup (var_m) on <var_m:MModule> */
var3 = var_m->attrs[COLOR_nitc__mmodule__MModule___mgroup].val; /* _mgroup on <var_m:MModule> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_g = var1;
{
{ /* Inline parser_nodes$AModuleName$n_path (var_n_name) on <var_n_name:AModuleName> */
var6 = var_n_name->attrs[COLOR_nitc__parser_nodes__AModuleName___n_path].val; /* _n_path on <var_n_name:AModuleName> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2916);
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
{ /* Inline kernel$Object$!= (var_g,((val*)NULL)) on <var_g:nullable MGroup> */
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
{ /* Inline mpackage$MGroup$name (var_g) on <var_g:nullable MGroup(MGroup)> */
var22 = var_g->attrs[COLOR_nitc__mpackage__MGroup___name].val; /* _name on <var_g:nullable MGroup(MGroup)> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 70);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline kernel$Object$!= (var19,var20) on <var19:String> */
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
{ /* Inline mpackage$MGroup$parent (var_g) on <var_g:nullable MGroup(MGroup)> */
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
{ /* Inline kernel$Object$!= (var_g,((val*)NULL)) on <var_g:nullable MGroup> */
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
