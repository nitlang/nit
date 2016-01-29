#include "nitc__separate_erasure_compiler.sep.0.h"
/* method separate_erasure_compiler#ToolContext#opt_erasure for (self: ToolContext): OptionBool */
val* nitc__separate_erasure_compiler___ToolContext___opt_erasure(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__separate_erasure_compiler__ToolContext___opt_erasure].val; /* _opt_erasure on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_erasure");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 22);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#ToolContext#opt_rta for (self: ToolContext): OptionBool */
val* nitc__separate_erasure_compiler___ToolContext___opt_rta(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__separate_erasure_compiler__ToolContext___opt_rta].val; /* _opt_rta on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_rta");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 24);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#ToolContext#opt_no_check_erasure_cast for (self: ToolContext): OptionBool */
val* nitc__separate_erasure_compiler___ToolContext___opt_no_check_erasure_cast(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__separate_erasure_compiler__ToolContext___opt_no_check_erasure_cast].val; /* _opt_no_check_erasure_cast on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_erasure_cast");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 26);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#ToolContext#init for (self: ToolContext) */
void nitc__separate_erasure_compiler___ToolContext___core__kernel__Object__init(val* self) {
val* var /* : OptionContext */;
val* var2 /* : OptionContext */;
val* var3 /* : OptionBool */;
val* var5 /* : OptionBool */;
val* var6 /* : OptionBool */;
val* var8 /* : OptionBool */;
val* var9 /* : OptionBool */;
val* var11 /* : OptionBool */;
val* var12 /* : Array[Option] */;
val* var13 /* : NativeArray[Option] */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc__separate_erasure_compiler___ToolContext___core__kernel__Object__init]))(self); /* init on <self:ToolContext>*/
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
{ /* Inline separate_erasure_compiler#ToolContext#opt_erasure (self) on <self:ToolContext> */
var5 = self->attrs[COLOR_nitc__separate_erasure_compiler__ToolContext___opt_erasure].val; /* _opt_erasure on <self:ToolContext> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_erasure");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 22);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline separate_erasure_compiler#ToolContext#opt_no_check_erasure_cast (self) on <self:ToolContext> */
var8 = self->attrs[COLOR_nitc__separate_erasure_compiler__ToolContext___opt_no_check_erasure_cast].val; /* _opt_no_check_erasure_cast on <self:ToolContext> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_erasure_cast");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 26);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline separate_erasure_compiler#ToolContext#opt_rta (self) on <self:ToolContext> */
var11 = self->attrs[COLOR_nitc__separate_erasure_compiler__ToolContext___opt_rta].val; /* _opt_rta on <self:ToolContext> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_rta");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 24);
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
/* method separate_erasure_compiler#ToolContext#process_options for (self: ToolContext, Sequence[String]) */
void nitc__separate_erasure_compiler___ToolContext___process_options(val* self, val* p0) {
val* var_args /* var args: Sequence[String] */;
val* var /* : OptionBool */;
val* var2 /* : OptionBool */;
val* var3 /* : nullable Object */;
val* var5 /* : nullable Object */;
short int var6 /* : Bool */;
val* var7 /* : OptionBool */;
val* var9 /* : OptionBool */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var12 /* : nullable Object */;
val* var13 /* : OptionBool */;
val* var15 /* : OptionBool */;
val* var16 /* : nullable Object */;
val* var18 /* : nullable Object */;
short int var19 /* : Bool */;
val* var20 /* : OptionBool */;
val* var22 /* : OptionBool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const struct type* type_struct27;
const char* var_class_name28;
val* var29 /* : nullable Object */;
var_args = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__separate_erasure_compiler___ToolContext___process_options]))(self, p0); /* process_options on <self:ToolContext>*/
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_all (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_all].val; /* _opt_no_check_all on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_all");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 58);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline opts#Option#value (var) on <var:OptionBool> */
var5 = var->attrs[COLOR_opts__Option___value].val; /* _value on <var:OptionBool> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var6 = (short int)((long)(var3)>>2);
if (var6){
{
{ /* Inline separate_erasure_compiler#ToolContext#opt_no_check_erasure_cast (self) on <self:ToolContext> */
var9 = self->attrs[COLOR_nitc__separate_erasure_compiler__ToolContext___opt_no_check_erasure_cast].val; /* _opt_no_check_erasure_cast on <self:ToolContext> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_erasure_cast");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 26);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline opts#Option#value= (var7,1) on <var7:OptionBool> */
/* Covariant cast for argument 0 (value) <1:Bool> isa VALUE */
/* <1:Bool> isa VALUE */
type_struct = var7->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (&type_core__Bool)->table_size) {
var11 = 0;
} else {
var11 = (&type_core__Bool)->type_table[cltype] == idtype;
}
if (unlikely(!var11)) {
var_class_name = type_core__Bool.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 40);
fatal_exit(1);
}
var12 = (val*)((long)(1)<<2|3);
var7->attrs[COLOR_opts__Option___value].val = var12; /* _value on <var7:OptionBool> */
RET_LABEL10:(void)0;
}
}
} else {
}
{
{ /* Inline separate_erasure_compiler#ToolContext#opt_erasure (self) on <self:ToolContext> */
var15 = self->attrs[COLOR_nitc__separate_erasure_compiler__ToolContext___opt_erasure].val; /* _opt_erasure on <self:ToolContext> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_erasure");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 22);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline opts#Option#value (var13) on <var13:OptionBool> */
var18 = var13->attrs[COLOR_opts__Option___value].val; /* _value on <var13:OptionBool> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
var19 = (short int)((long)(var16)>>2);
if (var19){
{
{ /* Inline separate_compiler#ToolContext#opt_no_tag_primitives (self) on <self:ToolContext> */
var22 = self->attrs[COLOR_nitc__separate_compiler__ToolContext___opt_no_tag_primitives].val; /* _opt_no_tag_primitives on <self:ToolContext> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_tag_primitives");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 32);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline opts#Option#value= (var20,1) on <var20:OptionBool> */
/* Covariant cast for argument 0 (value) <1:Bool> isa VALUE */
/* <1:Bool> isa VALUE */
type_struct27 = var20->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype25 = type_struct27->color;
idtype26 = type_struct27->id;
if(cltype25 >= (&type_core__Bool)->table_size) {
var24 = 0;
} else {
var24 = (&type_core__Bool)->type_table[cltype25] == idtype26;
}
if (unlikely(!var24)) {
var_class_name28 = type_core__Bool.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 40);
fatal_exit(1);
}
var29 = (val*)((long)(1)<<2|3);
var20->attrs[COLOR_opts__Option___value].val = var29; /* _value on <var20:OptionBool> */
RET_LABEL23:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method separate_erasure_compiler#ErasureCompilerPhase#process_mainmodule for (self: ErasureCompilerPhase, MModule, SequenceRead[MModule]) */
void nitc___nitc__ErasureCompilerPhase___nitc__modelbuilder__Phase__process_mainmodule(val* self, val* p0, val* p1) {
val* var_mainmodule /* var mainmodule: MModule */;
val* var_given_mmodules /* var given_mmodules: SequenceRead[MModule] */;
val* var /* : ToolContext */;
val* var2 /* : ToolContext */;
val* var3 /* : OptionBool */;
val* var5 /* : OptionBool */;
val* var6 /* : nullable Object */;
val* var8 /* : nullable Object */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : ToolContext */;
val* var13 /* : ToolContext */;
val* var14 /* : ModelBuilder */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_analysis /* var analysis: nullable Object */;
val* var15 /* : ToolContext */;
val* var17 /* : ToolContext */;
val* var18 /* : OptionBool */;
val* var20 /* : OptionBool */;
val* var21 /* : nullable Object */;
val* var23 /* : nullable Object */;
short int var24 /* : Bool */;
val* var25 /* : RapidTypeAnalysis */;
var_mainmodule = p0;
var_given_mmodules = p1;
{
{ /* Inline phase#Phase#toolcontext (self) on <self:ErasureCompilerPhase> */
var2 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:ErasureCompilerPhase> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 200);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline separate_erasure_compiler#ToolContext#opt_erasure (var) on <var:ToolContext> */
var5 = var->attrs[COLOR_nitc__separate_erasure_compiler__ToolContext___opt_erasure].val; /* _opt_erasure on <var:ToolContext> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_erasure");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 22);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline opts#Option#value (var3) on <var3:OptionBool> */
var8 = var3->attrs[COLOR_opts__Option___value].val; /* _value on <var3:OptionBool> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
var9 = (short int)((long)(var6)>>2);
var10 = !var9;
if (var10){
goto RET_LABEL;
} else {
}
{
{ /* Inline phase#Phase#toolcontext (self) on <self:ErasureCompilerPhase> */
var13 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:ErasureCompilerPhase> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 200);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = nitc__modelbuilder_base___ToolContext___modelbuilder(var11);
}
var_modelbuilder = var14;
var_analysis = ((val*)NULL);
{
{ /* Inline phase#Phase#toolcontext (self) on <self:ErasureCompilerPhase> */
var17 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:ErasureCompilerPhase> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 200);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline separate_erasure_compiler#ToolContext#opt_rta (var15) on <var15:ToolContext> */
var20 = var15->attrs[COLOR_nitc__separate_erasure_compiler__ToolContext___opt_rta].val; /* _opt_rta on <var15:ToolContext> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_rta");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 24);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline opts#Option#value (var18) on <var18:OptionBool> */
var23 = var18->attrs[COLOR_opts__Option___value].val; /* _value on <var18:OptionBool> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
var24 = (short int)((long)(var21)>>2);
if (var24){
{
var25 = nitc__rapid_type_analysis___ModelBuilder___do_rapid_type_analysis(var_modelbuilder, var_mainmodule);
}
var_analysis = var25;
} else {
}
{
nitc__separate_erasure_compiler___ModelBuilder___run_separate_erasure_compiler(var_modelbuilder, var_mainmodule, var_analysis); /* Direct call separate_erasure_compiler#ModelBuilder#run_separate_erasure_compiler on <var_modelbuilder:ModelBuilder>*/
}
RET_LABEL:;
}
/* method separate_erasure_compiler#ModelBuilder#run_separate_erasure_compiler for (self: ModelBuilder, MModule, nullable RapidTypeAnalysis) */
void nitc__separate_erasure_compiler___ModelBuilder___run_separate_erasure_compiler(val* self, val* p0, val* p1) {
val* var_mainmodule /* var mainmodule: MModule */;
val* var_runtime_type_analysis /* var runtime_type_analysis: nullable RapidTypeAnalysis */;
val* var /* : Sys */;
long var1 /* : Int */;
long var3 /* : Int */;
long var_time0 /* var time0: Int */;
val* var4 /* : ToolContext */;
val* var6 /* : ToolContext */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : String */;
val* var10 /* : SeparateErasureCompiler */;
val* var_compiler /* var compiler: SeparateErasureCompiler */;
val* var11 /* : Sys */;
long var12 /* : Int */;
long var14 /* : Int */;
long var_time1 /* var time1: Int */;
val* var15 /* : ToolContext */;
val* var17 /* : ToolContext */;
val* var19 /* : NativeArray[String] */;
static val* varonce18;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : String */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : String */;
long var28 /* : Int */;
short int var30 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var31 /* : Int */;
val* var32 /* : String */;
val* var33 /* : String */;
var_mainmodule = p0;
var_runtime_type_analysis = p1;
var = glob_sys;
{
{ /* Inline time#Sys#get_time (var) on <var:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var;
var3 = time___Sys_get_time___impl(var_for_c_0);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_time0 = var1;
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var6 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (likely(varonce!=NULL)) {
var7 = varonce;
} else {
var8 = "*** GENERATING C ***";
var9 = core__flat___NativeString___to_s_full(var8, 20l, 20l);
var7 = var9;
varonce = var7;
}
{
nitc___nitc__ToolContext___info(var4, var7, 1l); /* Direct call toolcontext#ToolContext#info on <var4:ToolContext>*/
}
var10 = NEW_nitc__SeparateErasureCompiler(&type_nitc__SeparateErasureCompiler);
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_nitc__abstract_compiler__AbstractCompiler__mainmodule_61d]))(var10, var_mainmodule); /* mainmodule= on <var10:SeparateErasureCompiler>*/
}
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_nitc__abstract_compiler__AbstractCompiler__modelbuilder_61d]))(var10, self); /* modelbuilder= on <var10:SeparateErasureCompiler>*/
}
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_nitc__separate_compiler__SeparateCompiler__runtime_type_analysis_61d]))(var10, var_runtime_type_analysis); /* runtime_type_analysis= on <var10:SeparateErasureCompiler>*/
}
{
((void(*)(val* self))(var10->class->vft[COLOR_core__kernel__Object__init]))(var10); /* init on <var10:SeparateErasureCompiler>*/
}
var_compiler = var10;
{
nitc___nitc__SeparateCompiler___nitc__abstract_compiler__AbstractCompiler__do_compilation(var_compiler); /* Direct call separate_compiler#SeparateCompiler#do_compilation on <var_compiler:SeparateErasureCompiler>*/
}
{
nitc___nitc__SeparateCompiler___nitc__abstract_compiler__AbstractCompiler__display_stats(var_compiler); /* Direct call separate_compiler#SeparateCompiler#display_stats on <var_compiler:SeparateErasureCompiler>*/
}
var11 = glob_sys;
{
{ /* Inline time#Sys#get_time (var11) on <var11:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var11;
var14 = time___Sys_get_time___impl(var_for_c_0);
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_time1 = var12;
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var17 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (unlikely(varonce18==NULL)) {
var19 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "*** END GENERATING C: ";
var23 = core__flat___NativeString___to_s_full(var22, 22l, 22l);
var21 = var23;
varonce20 = var21;
}
((struct instance_core__NativeArray*)var19)->values[0]=var21;
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = " ***";
var27 = core__flat___NativeString___to_s_full(var26, 4l, 4l);
var25 = var27;
varonce24 = var25;
}
((struct instance_core__NativeArray*)var19)->values[2]=var25;
} else {
var19 = varonce18;
varonce18 = NULL;
}
{
{ /* Inline kernel#Int#- (var_time1,var_time0) on <var_time1:Int> */
/* Covariant cast for argument 0 (i) <var_time0:Int> isa OTHER */
/* <var_time0:Int> isa OTHER */
var30 = 1; /* easy <var_time0:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var31 = var_time1 - var_time0;
var28 = var31;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var32 = core__flat___Int___core__abstract_text__Object__to_s(var28);
((struct instance_core__NativeArray*)var19)->values[1]=var32;
{
var33 = ((val*(*)(val* self))(var19->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var19); /* native_to_s on <var19:NativeArray[String]>*/
}
varonce18 = var19;
{
nitc___nitc__ToolContext___info(var15, var33, 2l); /* Direct call toolcontext#ToolContext#info on <var15:ToolContext>*/
}
{
nitc__abstract_compiler___ModelBuilder___write_and_make(self, var_compiler); /* Direct call abstract_compiler#ModelBuilder#write_and_make on <self:ModelBuilder>*/
}
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#class_ids for (self: SeparateErasureCompiler): Map[MClass, Int] */
val* nitc___nitc__SeparateErasureCompiler___class_ids(val* self) {
val* var /* : Map[MClass, Int] */;
val* var1 /* : Map[MClass, Int] */;
var1 = self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___class_ids].val; /* _class_ids on <self:SeparateErasureCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _class_ids");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 84);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#class_ids= for (self: SeparateErasureCompiler, Map[MClass, Int]) */
void nitc___nitc__SeparateErasureCompiler___class_ids_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___class_ids].val = p0; /* _class_ids on <self:SeparateErasureCompiler> */
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#class_colors for (self: SeparateErasureCompiler): Map[MClass, Int] */
val* nitc___nitc__SeparateErasureCompiler___class_colors(val* self) {
val* var /* : Map[MClass, Int] */;
val* var1 /* : Map[MClass, Int] */;
var1 = self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___class_colors].val; /* _class_colors on <self:SeparateErasureCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _class_colors");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 85);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#class_colors= for (self: SeparateErasureCompiler, Map[MClass, Int]) */
void nitc___nitc__SeparateErasureCompiler___class_colors_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___class_colors].val = p0; /* _class_colors on <self:SeparateErasureCompiler> */
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#vt_colors for (self: SeparateErasureCompiler): Map[MVirtualTypeProp, Int] */
val* nitc___nitc__SeparateErasureCompiler___vt_colors(val* self) {
val* var /* : Map[MVirtualTypeProp, Int] */;
val* var1 /* : Map[MVirtualTypeProp, Int] */;
var1 = self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___vt_colors].val; /* _vt_colors on <self:SeparateErasureCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vt_colors");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 86);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#vt_colors= for (self: SeparateErasureCompiler, Map[MVirtualTypeProp, Int]) */
void nitc___nitc__SeparateErasureCompiler___vt_colors_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___vt_colors].val = p0; /* _vt_colors on <self:SeparateErasureCompiler> */
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#init for (self: SeparateErasureCompiler) */
void nitc___nitc__SeparateErasureCompiler___core__kernel__Object__init(val* self) {
val* var /* : MModule */;
val* var2 /* : MModule */;
val* var3 /* : POSet[MClass] */;
val* var_poset /* var poset: POSet[MClass] */;
val* var4 /* : HashSet[MClass] */;
val* var_mclasses /* var mclasses: HashSet[MClass] */;
val* var5 /* : POSetColorer[MClass] */;
val* var_colorer /* var colorer: POSetColorer[MClass] */;
val* var7 /* : Map[Object, Int] */;
val* var9 /* : Map[Object, Int] */;
val* var11 /* : Map[MClass, Array[nullable MClass]] */;
val* var13 /* : HashMap[MClass, Set[MVirtualTypeProp]] */;
val* var_vts /* var vts: HashMap[MClass, Set[MVirtualTypeProp]] */;
val* var_ /* var : HashSet[MClass] */;
val* var14 /* : Iterator[nullable Object] */;
val* var_15 /* var : Iterator[MClass] */;
short int var16 /* : Bool */;
val* var17 /* : nullable Object */;
val* var_mclass /* var mclass: MClass */;
val* var18 /* : HashSet[MVirtualTypeProp] */;
val* var19 /* : MModule */;
val* var21 /* : MModule */;
val* var22 /* : Set[MProperty] */;
val* var_23 /* var : Set[MProperty] */;
val* var24 /* : Iterator[nullable Object] */;
val* var_25 /* var : Iterator[MProperty] */;
short int var26 /* : Bool */;
val* var28 /* : nullable Object */;
val* var_mprop /* var mprop: MProperty */;
short int var29 /* : Bool */;
int cltype;
int idtype;
val* var30 /* : nullable Object */;
val* var31 /* : POSetBucketsColorer[MClass, MVirtualTypeProp] */;
val* var32 /* : Map[Object, Set[Object]] */;
val* var_vt_colorer /* var vt_colorer: POSetBucketsColorer[MClass, MVirtualTypeProp] */;
val* var33 /* : Map[Object, Int] */;
val* var35 /* : Map[MClass, Array[nullable MPropDef]] */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__SeparateErasureCompiler___core__kernel__Object__init]))(self); /* init on <self:SeparateErasureCompiler>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateErasureCompiler> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__model___MModule___flatten_mclass_hierarchy(var);
}
var_poset = var3;
var4 = NEW_core__HashSet(&type_core__HashSet__nitc__MClass);
{
core___core__HashSet___from(var4, var_poset); /* Direct call hash_collection#HashSet#from on <var4:HashSet[MClass]>*/
}
var_mclasses = var4;
var5 = NEW_nitc__POSetColorer(&type_nitc__POSetColorer__nitc__MClass);
{
{ /* Inline kernel#Object#init (var5) on <var5:POSetColorer[MClass]> */
RET_LABEL6:(void)0;
}
}
var_colorer = var5;
{
nitc___nitc__POSetColorer___colorize(var_colorer, var_poset); /* Direct call coloring#POSetColorer#colorize on <var_colorer:POSetColorer[MClass]>*/
}
{
var7 = nitc___nitc__POSetColorer___ids(var_colorer);
}
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#class_ids= (self,var7) on <self:SeparateErasureCompiler> */
self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___class_ids].val = var7; /* _class_ids on <self:SeparateErasureCompiler> */
RET_LABEL8:(void)0;
}
}
{
var9 = nitc___nitc__POSetColorer___colors(var_colorer);
}
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#class_colors= (self,var9) on <self:SeparateErasureCompiler> */
self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___class_colors].val = var9; /* _class_colors on <self:SeparateErasureCompiler> */
RET_LABEL10:(void)0;
}
}
{
var11 = nitc___nitc__SeparateErasureCompiler___build_class_typing_tables(self, var_mclasses);
}
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#class_tables= (self,var11) on <self:SeparateErasureCompiler> */
self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___class_tables].val = var11; /* _class_tables on <self:SeparateErasureCompiler> */
RET_LABEL12:(void)0;
}
}
var13 = NEW_core__HashMap(&type_core__HashMap__nitc__MClass__core__Set__nitc__MVirtualTypeProp);
{
core___core__HashMap___core__kernel__Object__init(var13); /* Direct call hash_collection#HashMap#init on <var13:HashMap[MClass, Set[MVirtualTypeProp]]>*/
}
var_vts = var13;
var_ = var_mclasses;
{
var14 = core___core__HashSet___core__abstract_collection__Collection__iterator(var_);
}
var_15 = var14;
for(;;) {
{
var16 = ((short int(*)(val* self))((((long)var_15&3)?class_info[((long)var_15&3)]:var_15->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_15); /* is_ok on <var_15:Iterator[MClass]>*/
}
if (var16){
} else {
goto BREAK_label;
}
{
var17 = ((val*(*)(val* self))((((long)var_15&3)?class_info[((long)var_15&3)]:var_15->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_15); /* item on <var_15:Iterator[MClass]>*/
}
var_mclass = var17;
var18 = NEW_core__HashSet(&type_core__HashSet__nitc__MVirtualTypeProp);
{
core___core__HashSet___core__kernel__Object__init(var18); /* Direct call hash_collection#HashSet#init on <var18:HashSet[MVirtualTypeProp]>*/
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_vts, var_mclass, var18); /* Direct call hash_collection#HashMap#[]= on <var_vts:HashMap[MClass, Set[MVirtualTypeProp]]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateErasureCompiler> */
var21 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = nitc__abstract_compiler___MModule___properties(var19, var_mclass);
}
var_23 = var22;
{
var24 = ((val*(*)(val* self))((((long)var_23&3)?class_info[((long)var_23&3)]:var_23->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_23); /* iterator on <var_23:Set[MProperty]>*/
}
var_25 = var24;
for(;;) {
{
var26 = ((short int(*)(val* self))((((long)var_25&3)?class_info[((long)var_25&3)]:var_25->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_25); /* is_ok on <var_25:Iterator[MProperty]>*/
}
if (var26){
} else {
goto BREAK_label27;
}
{
var28 = ((val*(*)(val* self))((((long)var_25&3)?class_info[((long)var_25&3)]:var_25->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_25); /* item on <var_25:Iterator[MProperty]>*/
}
var_mprop = var28;
/* <var_mprop:MProperty> isa MVirtualTypeProp */
cltype = type_nitc__MVirtualTypeProp.color;
idtype = type_nitc__MVirtualTypeProp.id;
if(cltype >= var_mprop->type->table_size) {
var29 = 0;
} else {
var29 = var_mprop->type->type_table[cltype] == idtype;
}
if (var29){
{
var30 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var_vts, var_mclass);
}
{
((void(*)(val* self, val* p0))((((long)var30&3)?class_info[((long)var30&3)]:var30->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var30, var_mprop); /* add on <var30:nullable Object(Set[MVirtualTypeProp])>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_25&3)?class_info[((long)var_25&3)]:var_25->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_25); /* next on <var_25:Iterator[MProperty]>*/
}
}
BREAK_label27: (void)0;
{
((void(*)(val* self))((((long)var_25&3)?class_info[((long)var_25&3)]:var_25->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_25); /* finish on <var_25:Iterator[MProperty]>*/
}
{
((void(*)(val* self))((((long)var_15&3)?class_info[((long)var_15&3)]:var_15->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_15); /* next on <var_15:Iterator[MClass]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_15&3)?class_info[((long)var_15&3)]:var_15->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_15); /* finish on <var_15:Iterator[MClass]>*/
}
var31 = NEW_nitc__POSetBucketsColorer(&type_nitc__POSetBucketsColorer__nitc__MClass__nitc__MVirtualTypeProp);
{
var32 = nitc___nitc__POSetColorer___conflicts(var_colorer);
}
{
((void(*)(val* self, val* p0))(var31->class->vft[COLOR_nitc__coloring__POSetBucketsColorer__poset_61d]))(var31, var_poset); /* poset= on <var31:POSetBucketsColorer[MClass, MVirtualTypeProp]>*/
}
{
((void(*)(val* self, val* p0))(var31->class->vft[COLOR_nitc__coloring__POSetBucketsColorer__conflicts_61d]))(var31, var32); /* conflicts= on <var31:POSetBucketsColorer[MClass, MVirtualTypeProp]>*/
}
{
((void(*)(val* self))(var31->class->vft[COLOR_core__kernel__Object__init]))(var31); /* init on <var31:POSetBucketsColorer[MClass, MVirtualTypeProp]>*/
}
var_vt_colorer = var31;
{
var33 = nitc___nitc__POSetBucketsColorer___colorize(var_vt_colorer, var_vts);
}
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#vt_colors= (self,var33) on <self:SeparateErasureCompiler> */
self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___vt_colors].val = var33; /* _vt_colors on <self:SeparateErasureCompiler> */
RET_LABEL34:(void)0;
}
}
{
var35 = nitc___nitc__SeparateErasureCompiler___build_vt_tables(self, var_mclasses);
}
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#vt_tables= (self,var35) on <self:SeparateErasureCompiler> */
self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___vt_tables].val = var35; /* _vt_tables on <self:SeparateErasureCompiler> */
RET_LABEL36:(void)0;
}
}
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#build_vt_tables for (self: SeparateErasureCompiler, Set[MClass]): Map[MClass, Array[nullable MPropDef]] */
val* nitc___nitc__SeparateErasureCompiler___build_vt_tables(val* self, val* p0) {
val* var /* : Map[MClass, Array[nullable MPropDef]] */;
val* var_mclasses /* var mclasses: Set[MClass] */;
val* var1 /* : HashMap[MClass, Array[nullable MPropDef]] */;
val* var_tables /* var tables: HashMap[MClass, Array[nullable MPropDef]] */;
val* var_ /* var : Set[MClass] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : Iterator[MClass] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_mclass /* var mclass: MClass */;
val* var6 /* : Array[nullable MPropDef] */;
val* var_table /* var table: Array[nullable MPropDef] */;
val* var7 /* : Array[MClass] */;
val* var_parents /* var parents: Array[MClass] */;
val* var8 /* : MModule */;
val* var10 /* : MModule */;
val* var11 /* : POSet[MClass] */;
short int var12 /* : Bool */;
val* var13 /* : MModule */;
val* var15 /* : MModule */;
val* var16 /* : POSetElement[MClass] */;
val* var17 /* : Collection[nullable Object] */;
val* var18 /* : Array[nullable Object] */;
val* var19 /* : MModule */;
val* var21 /* : MModule */;
val* var_22 /* var : Array[MClass] */;
val* var23 /* : IndexedIterator[nullable Object] */;
val* var_24 /* var : IndexedIterator[MClass] */;
short int var25 /* : Bool */;
val* var27 /* : nullable Object */;
val* var_parent /* var parent: MClass */;
short int var28 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
val* var34 /* : MModule */;
val* var36 /* : MModule */;
val* var37 /* : Set[MProperty] */;
val* var_38 /* var : Set[MProperty] */;
val* var39 /* : Iterator[nullable Object] */;
val* var_40 /* var : Iterator[MProperty] */;
short int var41 /* : Bool */;
val* var43 /* : nullable Object */;
val* var_mproperty /* var mproperty: MProperty */;
short int var44 /* : Bool */;
int cltype;
int idtype;
short int var45 /* : Bool */;
val* var47 /* : Map[MVirtualTypeProp, Int] */;
val* var49 /* : Map[MVirtualTypeProp, Int] */;
val* var50 /* : nullable Object */;
long var51 /* : Int */;
long var_color /* var color: Int */;
long var52 /* : Int */;
long var54 /* : Int */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
const char* var_class_name;
short int var60 /* : Bool */;
long var61 /* : Int */;
long var63 /* : Int */;
long var_i /* var i: Int */;
long var_64 /* var : Int */;
short int var65 /* : Bool */;
short int var67 /* : Bool */;
int cltype68;
int idtype69;
const char* var_class_name70;
short int var71 /* : Bool */;
long var73 /* : Int */;
val* var74 /* : Array[MPropDef] */;
val* var76 /* : Array[MPropDef] */;
val* var_77 /* var : Array[MVirtualTypeDef] */;
val* var78 /* : IndexedIterator[nullable Object] */;
val* var_79 /* var : IndexedIterator[MVirtualTypeDef] */;
short int var80 /* : Bool */;
val* var82 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: MVirtualTypeDef */;
val* var83 /* : MClassDef */;
val* var85 /* : MClassDef */;
val* var86 /* : MClass */;
val* var88 /* : MClass */;
short int var89 /* : Bool */;
short int var91 /* : Bool */;
short int var93 /* : Bool */;
val* var94 /* : MModule */;
val* var96 /* : MModule */;
val* var97 /* : Set[MProperty] */;
val* var_98 /* var : Set[MProperty] */;
val* var99 /* : Iterator[nullable Object] */;
val* var_100 /* var : Iterator[MProperty] */;
short int var101 /* : Bool */;
val* var103 /* : nullable Object */;
val* var_mproperty104 /* var mproperty: MProperty */;
short int var105 /* : Bool */;
int cltype106;
int idtype107;
short int var108 /* : Bool */;
val* var110 /* : Map[MVirtualTypeProp, Int] */;
val* var112 /* : Map[MVirtualTypeProp, Int] */;
val* var113 /* : nullable Object */;
long var114 /* : Int */;
long var_color115 /* var color: Int */;
long var116 /* : Int */;
long var118 /* : Int */;
short int var119 /* : Bool */;
short int var121 /* : Bool */;
int cltype122;
int idtype123;
const char* var_class_name124;
short int var125 /* : Bool */;
long var126 /* : Int */;
long var128 /* : Int */;
long var_i129 /* var i: Int */;
long var_130 /* var : Int */;
short int var131 /* : Bool */;
short int var133 /* : Bool */;
int cltype134;
int idtype135;
const char* var_class_name136;
short int var137 /* : Bool */;
long var139 /* : Int */;
val* var140 /* : Array[MPropDef] */;
val* var142 /* : Array[MPropDef] */;
val* var_143 /* var : Array[MVirtualTypeDef] */;
val* var144 /* : IndexedIterator[nullable Object] */;
val* var_145 /* var : IndexedIterator[MVirtualTypeDef] */;
short int var146 /* : Bool */;
val* var148 /* : nullable Object */;
val* var_mpropdef149 /* var mpropdef: MVirtualTypeDef */;
val* var150 /* : MClassDef */;
val* var152 /* : MClassDef */;
val* var153 /* : MClass */;
val* var155 /* : MClass */;
short int var156 /* : Bool */;
short int var158 /* : Bool */;
short int var160 /* : Bool */;
var_mclasses = p0;
var1 = NEW_core__HashMap(&type_core__HashMap__nitc__MClass__core__Array__nullable__nitc__MPropDef);
{
core___core__HashMap___core__kernel__Object__init(var1); /* Direct call hash_collection#HashMap#init on <var1:HashMap[MClass, Array[nullable MPropDef]]>*/
}
var_tables = var1;
var_ = var_mclasses;
{
var2 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Set[MClass]>*/
}
var_3 = var2;
for(;;) {
{
var4 = ((short int(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_3); /* is_ok on <var_3:Iterator[MClass]>*/
}
if (var4){
} else {
goto BREAK_label;
}
{
var5 = ((val*(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_3); /* item on <var_3:Iterator[MClass]>*/
}
var_mclass = var5;
var6 = NEW_core__Array(&type_core__Array__nullable__nitc__MPropDef);
{
core___core__Array___core__kernel__Object__init(var6); /* Direct call array#Array#init on <var6:Array[nullable MPropDef]>*/
}
var_table = var6;
var7 = NEW_core__Array(&type_core__Array__nitc__MClass);
{
core___core__Array___core__kernel__Object__init(var7); /* Direct call array#Array#init on <var7:Array[MClass]>*/
}
var_parents = var7;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateErasureCompiler> */
var10 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nitc__model___MModule___flatten_mclass_hierarchy(var8);
}
{
var12 = poset___poset__POSet___core__abstract_collection__Collection__has(var11, var_mclass);
}
if (var12){
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateErasureCompiler> */
var15 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = nitc___nitc__MClass___in_hierarchy(var_mclass, var13);
}
{
var17 = poset___poset__POSetElement___greaters(var16);
}
{
var18 = ((val*(*)(val* self))((((long)var17&3)?class_info[((long)var17&3)]:var17->class)->vft[COLOR_core__array__Collection__to_a]))(var17); /* to_a on <var17:Collection[nullable Object](Collection[MClass])>*/
}
var_parents = var18;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateErasureCompiler> */
var21 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
nitc__model___MModule___linearize_mclasses(var19, var_parents); /* Direct call model#MModule#linearize_mclasses on <var19:MModule>*/
}
} else {
}
var_22 = var_parents;
{
var23 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_22);
}
var_24 = var23;
for(;;) {
{
var25 = ((short int(*)(val* self))((((long)var_24&3)?class_info[((long)var_24&3)]:var_24->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_24); /* is_ok on <var_24:IndexedIterator[MClass]>*/
}
if (var25){
} else {
goto BREAK_label26;
}
{
var27 = ((val*(*)(val* self))((((long)var_24&3)?class_info[((long)var_24&3)]:var_24->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_24); /* item on <var_24:IndexedIterator[MClass]>*/
}
var_parent = var27;
{
{ /* Inline kernel#Object#== (var_parent,var_mclass) on <var_parent:MClass> */
var_other = var_mclass;
{
{ /* Inline kernel#Object#is_same_instance (var_parent,var_other) on <var_parent:MClass> */
var32 = var_parent == var_other;
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
if (var28){
goto BREAK_label33;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateErasureCompiler> */
var36 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
var37 = nitc__abstract_compiler___MModule___properties(var34, var_parent);
}
var_38 = var37;
{
var39 = ((val*(*)(val* self))((((long)var_38&3)?class_info[((long)var_38&3)]:var_38->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_38); /* iterator on <var_38:Set[MProperty]>*/
}
var_40 = var39;
for(;;) {
{
var41 = ((short int(*)(val* self))((((long)var_40&3)?class_info[((long)var_40&3)]:var_40->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_40); /* is_ok on <var_40:Iterator[MProperty]>*/
}
if (var41){
} else {
goto BREAK_label42;
}
{
var43 = ((val*(*)(val* self))((((long)var_40&3)?class_info[((long)var_40&3)]:var_40->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_40); /* item on <var_40:Iterator[MProperty]>*/
}
var_mproperty = var43;
/* <var_mproperty:MProperty> isa MVirtualTypeProp */
cltype = type_nitc__MVirtualTypeProp.color;
idtype = type_nitc__MVirtualTypeProp.id;
if(cltype >= var_mproperty->type->table_size) {
var44 = 0;
} else {
var44 = var_mproperty->type->type_table[cltype] == idtype;
}
var45 = !var44;
if (var45){
goto BREAK_label46;
} else {
}
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#vt_colors (self) on <self:SeparateErasureCompiler> */
var49 = self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___vt_colors].val; /* _vt_colors on <self:SeparateErasureCompiler> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vt_colors");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 86);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
var50 = ((val*(*)(val* self, val* p0))((((long)var47&3)?class_info[((long)var47&3)]:var47->class)->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var47, var_mproperty); /* [] on <var47:Map[MVirtualTypeProp, Int]>*/
}
var51 = (long)(var50)>>2;
var_color = var51;
{
{ /* Inline array#AbstractArrayRead#length (var_table) on <var_table:Array[nullable MPropDef]> */
var54 = var_table->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_table:Array[nullable MPropDef]> */
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
{ /* Inline kernel#Int#<= (var52,var_color) on <var52:Int> */
/* Covariant cast for argument 0 (i) <var_color:Int> isa OTHER */
/* <var_color:Int> isa OTHER */
var57 = 1; /* easy <var_color:Int> isa OTHER*/
if (unlikely(!var57)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var60 = var52 <= var_color;
var55 = var60;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
if (var55){
{
{ /* Inline array#AbstractArrayRead#length (var_table) on <var_table:Array[nullable MPropDef]> */
var63 = var_table->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_table:Array[nullable MPropDef]> */
var61 = var63;
RET_LABEL62:(void)0;
}
}
var_i = var61;
var_64 = var_color;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_64) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_64:Int> isa OTHER */
/* <var_64:Int> isa OTHER */
var67 = 1; /* easy <var_64:Int> isa OTHER*/
if (unlikely(!var67)) {
var_class_name70 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name70);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var71 = var_i < var_64;
var65 = var71;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
if (var65){
} else {
goto BREAK_label72;
}
{
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var_table, var_i, ((val*)NULL)); /* Direct call array#Array#[]= on <var_table:Array[nullable MPropDef]>*/
}
{
var73 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var73;
}
BREAK_label72: (void)0;
} else {
}
{
{ /* Inline model#MProperty#mpropdefs (var_mproperty) on <var_mproperty:MProperty(MVirtualTypeProp)> */
var76 = var_mproperty->attrs[COLOR_nitc__model__MProperty___mpropdefs].val; /* _mpropdefs on <var_mproperty:MProperty(MVirtualTypeProp)> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1981);
fatal_exit(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
var_77 = var74;
{
var78 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_77);
}
var_79 = var78;
for(;;) {
{
var80 = ((short int(*)(val* self))((((long)var_79&3)?class_info[((long)var_79&3)]:var_79->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_79); /* is_ok on <var_79:IndexedIterator[MVirtualTypeDef]>*/
}
if (var80){
} else {
goto BREAK_label81;
}
{
var82 = ((val*(*)(val* self))((((long)var_79&3)?class_info[((long)var_79&3)]:var_79->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_79); /* item on <var_79:IndexedIterator[MVirtualTypeDef]>*/
}
var_mpropdef = var82;
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MVirtualTypeDef> */
var85 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MVirtualTypeDef> */
if (unlikely(var85 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2227);
fatal_exit(1);
}
var83 = var85;
RET_LABEL84:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var83) on <var83:MClassDef> */
var88 = var83->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var83:MClassDef> */
if (unlikely(var88 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 576);
fatal_exit(1);
}
var86 = var88;
RET_LABEL87:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var86,var_parent) on <var86:MClass> */
var_other = var_parent;
{
{ /* Inline kernel#Object#is_same_instance (var86,var_other) on <var86:MClass> */
var93 = var86 == var_other;
var91 = var93;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
}
var89 = var91;
goto RET_LABEL90;
RET_LABEL90:(void)0;
}
}
if (var89){
{
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var_table, var_color, var_mpropdef); /* Direct call array#Array#[]= on <var_table:Array[nullable MPropDef]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_79&3)?class_info[((long)var_79&3)]:var_79->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_79); /* next on <var_79:IndexedIterator[MVirtualTypeDef]>*/
}
}
BREAK_label81: (void)0;
{
((void(*)(val* self))((((long)var_79&3)?class_info[((long)var_79&3)]:var_79->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_79); /* finish on <var_79:IndexedIterator[MVirtualTypeDef]>*/
}
BREAK_label46: (void)0;
{
((void(*)(val* self))((((long)var_40&3)?class_info[((long)var_40&3)]:var_40->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_40); /* next on <var_40:Iterator[MProperty]>*/
}
}
BREAK_label42: (void)0;
{
((void(*)(val* self))((((long)var_40&3)?class_info[((long)var_40&3)]:var_40->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_40); /* finish on <var_40:Iterator[MProperty]>*/
}
BREAK_label33: (void)0;
{
((void(*)(val* self))((((long)var_24&3)?class_info[((long)var_24&3)]:var_24->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_24); /* next on <var_24:IndexedIterator[MClass]>*/
}
}
BREAK_label26: (void)0;
{
((void(*)(val* self))((((long)var_24&3)?class_info[((long)var_24&3)]:var_24->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_24); /* finish on <var_24:IndexedIterator[MClass]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateErasureCompiler> */
var96 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var96 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
{
var97 = nitc__abstract_compiler___MModule___properties(var94, var_mclass);
}
var_98 = var97;
{
var99 = ((val*(*)(val* self))((((long)var_98&3)?class_info[((long)var_98&3)]:var_98->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_98); /* iterator on <var_98:Set[MProperty]>*/
}
var_100 = var99;
for(;;) {
{
var101 = ((short int(*)(val* self))((((long)var_100&3)?class_info[((long)var_100&3)]:var_100->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_100); /* is_ok on <var_100:Iterator[MProperty]>*/
}
if (var101){
} else {
goto BREAK_label102;
}
{
var103 = ((val*(*)(val* self))((((long)var_100&3)?class_info[((long)var_100&3)]:var_100->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_100); /* item on <var_100:Iterator[MProperty]>*/
}
var_mproperty104 = var103;
/* <var_mproperty104:MProperty> isa MVirtualTypeProp */
cltype106 = type_nitc__MVirtualTypeProp.color;
idtype107 = type_nitc__MVirtualTypeProp.id;
if(cltype106 >= var_mproperty104->type->table_size) {
var105 = 0;
} else {
var105 = var_mproperty104->type->type_table[cltype106] == idtype107;
}
var108 = !var105;
if (var108){
goto BREAK_label109;
} else {
}
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#vt_colors (self) on <self:SeparateErasureCompiler> */
var112 = self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___vt_colors].val; /* _vt_colors on <self:SeparateErasureCompiler> */
if (unlikely(var112 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vt_colors");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 86);
fatal_exit(1);
}
var110 = var112;
RET_LABEL111:(void)0;
}
}
{
var113 = ((val*(*)(val* self, val* p0))((((long)var110&3)?class_info[((long)var110&3)]:var110->class)->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var110, var_mproperty104); /* [] on <var110:Map[MVirtualTypeProp, Int]>*/
}
var114 = (long)(var113)>>2;
var_color115 = var114;
{
{ /* Inline array#AbstractArrayRead#length (var_table) on <var_table:Array[nullable MPropDef]> */
var118 = var_table->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_table:Array[nullable MPropDef]> */
var116 = var118;
RET_LABEL117:(void)0;
}
}
{
{ /* Inline kernel#Int#<= (var116,var_color115) on <var116:Int> */
/* Covariant cast for argument 0 (i) <var_color115:Int> isa OTHER */
/* <var_color115:Int> isa OTHER */
var121 = 1; /* easy <var_color115:Int> isa OTHER*/
if (unlikely(!var121)) {
var_class_name124 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name124);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var125 = var116 <= var_color115;
var119 = var125;
goto RET_LABEL120;
RET_LABEL120:(void)0;
}
}
if (var119){
{
{ /* Inline array#AbstractArrayRead#length (var_table) on <var_table:Array[nullable MPropDef]> */
var128 = var_table->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_table:Array[nullable MPropDef]> */
var126 = var128;
RET_LABEL127:(void)0;
}
}
var_i129 = var126;
var_130 = var_color115;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i129,var_130) on <var_i129:Int> */
/* Covariant cast for argument 0 (i) <var_130:Int> isa OTHER */
/* <var_130:Int> isa OTHER */
var133 = 1; /* easy <var_130:Int> isa OTHER*/
if (unlikely(!var133)) {
var_class_name136 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name136);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var137 = var_i129 < var_130;
var131 = var137;
goto RET_LABEL132;
RET_LABEL132:(void)0;
}
}
if (var131){
} else {
goto BREAK_label138;
}
{
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var_table, var_i129, ((val*)NULL)); /* Direct call array#Array#[]= on <var_table:Array[nullable MPropDef]>*/
}
{
var139 = core___core__Int___Discrete__successor(var_i129, 1l);
}
var_i129 = var139;
}
BREAK_label138: (void)0;
} else {
}
{
{ /* Inline model#MProperty#mpropdefs (var_mproperty104) on <var_mproperty104:MProperty(MVirtualTypeProp)> */
var142 = var_mproperty104->attrs[COLOR_nitc__model__MProperty___mpropdefs].val; /* _mpropdefs on <var_mproperty104:MProperty(MVirtualTypeProp)> */
if (unlikely(var142 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1981);
fatal_exit(1);
}
var140 = var142;
RET_LABEL141:(void)0;
}
}
var_143 = var140;
{
var144 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_143);
}
var_145 = var144;
for(;;) {
{
var146 = ((short int(*)(val* self))((((long)var_145&3)?class_info[((long)var_145&3)]:var_145->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_145); /* is_ok on <var_145:IndexedIterator[MVirtualTypeDef]>*/
}
if (var146){
} else {
goto BREAK_label147;
}
{
var148 = ((val*(*)(val* self))((((long)var_145&3)?class_info[((long)var_145&3)]:var_145->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_145); /* item on <var_145:IndexedIterator[MVirtualTypeDef]>*/
}
var_mpropdef149 = var148;
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef149) on <var_mpropdef149:MVirtualTypeDef> */
var152 = var_mpropdef149->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef149:MVirtualTypeDef> */
if (unlikely(var152 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2227);
fatal_exit(1);
}
var150 = var152;
RET_LABEL151:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var150) on <var150:MClassDef> */
var155 = var150->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var150:MClassDef> */
if (unlikely(var155 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 576);
fatal_exit(1);
}
var153 = var155;
RET_LABEL154:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var153,var_mclass) on <var153:MClass> */
var_other = var_mclass;
{
{ /* Inline kernel#Object#is_same_instance (var153,var_other) on <var153:MClass> */
var160 = var153 == var_other;
var158 = var160;
goto RET_LABEL159;
RET_LABEL159:(void)0;
}
}
var156 = var158;
goto RET_LABEL157;
RET_LABEL157:(void)0;
}
}
if (var156){
{
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var_table, var_color115, var_mpropdef149); /* Direct call array#Array#[]= on <var_table:Array[nullable MPropDef]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_145&3)?class_info[((long)var_145&3)]:var_145->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_145); /* next on <var_145:IndexedIterator[MVirtualTypeDef]>*/
}
}
BREAK_label147: (void)0;
{
((void(*)(val* self))((((long)var_145&3)?class_info[((long)var_145&3)]:var_145->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_145); /* finish on <var_145:IndexedIterator[MVirtualTypeDef]>*/
}
BREAK_label109: (void)0;
{
((void(*)(val* self))((((long)var_100&3)?class_info[((long)var_100&3)]:var_100->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_100); /* next on <var_100:Iterator[MProperty]>*/
}
}
BREAK_label102: (void)0;
{
((void(*)(val* self))((((long)var_100&3)?class_info[((long)var_100&3)]:var_100->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_100); /* finish on <var_100:Iterator[MProperty]>*/
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_tables, var_mclass, var_table); /* Direct call hash_collection#HashMap#[]= on <var_tables:HashMap[MClass, Array[nullable MPropDef]]>*/
}
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_3); /* next on <var_3:Iterator[MClass]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_3); /* finish on <var_3:Iterator[MClass]>*/
}
var = var_tables;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#build_class_typing_tables for (self: SeparateErasureCompiler, Set[MClass]): Map[MClass, Array[nullable MClass]] */
val* nitc___nitc__SeparateErasureCompiler___build_class_typing_tables(val* self, val* p0) {
val* var /* : Map[MClass, Array[nullable MClass]] */;
val* var_mclasses /* var mclasses: Set[MClass] */;
val* var1 /* : HashMap[MClass, Array[nullable MClass]] */;
val* var_tables /* var tables: HashMap[MClass, Array[nullable MClass]] */;
val* var_ /* var : Set[MClass] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : Iterator[MClass] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_mclass /* var mclass: MClass */;
val* var6 /* : Array[nullable MClass] */;
val* var_table /* var table: Array[nullable MClass] */;
val* var7 /* : Array[MClass] */;
val* var_supers /* var supers: Array[MClass] */;
val* var8 /* : MModule */;
val* var10 /* : MModule */;
val* var11 /* : POSet[MClass] */;
short int var12 /* : Bool */;
val* var13 /* : MModule */;
val* var15 /* : MModule */;
val* var16 /* : POSetElement[MClass] */;
val* var17 /* : Collection[nullable Object] */;
val* var18 /* : Array[nullable Object] */;
val* var_19 /* var : Array[MClass] */;
val* var20 /* : IndexedIterator[nullable Object] */;
val* var_21 /* var : IndexedIterator[MClass] */;
short int var22 /* : Bool */;
val* var24 /* : nullable Object */;
val* var_sup /* var sup: MClass */;
val* var25 /* : Map[MClass, Int] */;
val* var27 /* : Map[MClass, Int] */;
val* var28 /* : nullable Object */;
long var29 /* : Int */;
long var_color /* var color: Int */;
long var30 /* : Int */;
long var32 /* : Int */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var36 /* : Bool */;
long var37 /* : Int */;
long var39 /* : Int */;
long var_i /* var i: Int */;
long var_40 /* var : Int */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name46;
short int var47 /* : Bool */;
long var49 /* : Int */;
var_mclasses = p0;
var1 = NEW_core__HashMap(&type_core__HashMap__nitc__MClass__core__Array__nullable__nitc__MClass);
{
core___core__HashMap___core__kernel__Object__init(var1); /* Direct call hash_collection#HashMap#init on <var1:HashMap[MClass, Array[nullable MClass]]>*/
}
var_tables = var1;
var_ = var_mclasses;
{
var2 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Set[MClass]>*/
}
var_3 = var2;
for(;;) {
{
var4 = ((short int(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_3); /* is_ok on <var_3:Iterator[MClass]>*/
}
if (var4){
} else {
goto BREAK_label;
}
{
var5 = ((val*(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_3); /* item on <var_3:Iterator[MClass]>*/
}
var_mclass = var5;
var6 = NEW_core__Array(&type_core__Array__nullable__nitc__MClass);
{
core___core__Array___core__kernel__Object__init(var6); /* Direct call array#Array#init on <var6:Array[nullable MClass]>*/
}
var_table = var6;
var7 = NEW_core__Array(&type_core__Array__nitc__MClass);
{
core___core__Array___core__kernel__Object__init(var7); /* Direct call array#Array#init on <var7:Array[MClass]>*/
}
var_supers = var7;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateErasureCompiler> */
var10 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nitc__model___MModule___flatten_mclass_hierarchy(var8);
}
{
var12 = poset___poset__POSet___core__abstract_collection__Collection__has(var11, var_mclass);
}
if (var12){
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateErasureCompiler> */
var15 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = nitc___nitc__MClass___in_hierarchy(var_mclass, var13);
}
{
var17 = poset___poset__POSetElement___greaters(var16);
}
{
var18 = ((val*(*)(val* self))((((long)var17&3)?class_info[((long)var17&3)]:var17->class)->vft[COLOR_core__array__Collection__to_a]))(var17); /* to_a on <var17:Collection[nullable Object](Collection[MClass])>*/
}
var_supers = var18;
} else {
}
var_19 = var_supers;
{
var20 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_19);
}
var_21 = var20;
for(;;) {
{
var22 = ((short int(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_21); /* is_ok on <var_21:IndexedIterator[MClass]>*/
}
if (var22){
} else {
goto BREAK_label23;
}
{
var24 = ((val*(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_21); /* item on <var_21:IndexedIterator[MClass]>*/
}
var_sup = var24;
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#class_colors (self) on <self:SeparateErasureCompiler> */
var27 = self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___class_colors].val; /* _class_colors on <self:SeparateErasureCompiler> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _class_colors");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 85);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
var28 = ((val*(*)(val* self, val* p0))((((long)var25&3)?class_info[((long)var25&3)]:var25->class)->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var25, var_sup); /* [] on <var25:Map[MClass, Int]>*/
}
var29 = (long)(var28)>>2;
var_color = var29;
{
{ /* Inline array#AbstractArrayRead#length (var_table) on <var_table:Array[nullable MClass]> */
var32 = var_table->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_table:Array[nullable MClass]> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline kernel#Int#<= (var30,var_color) on <var30:Int> */
/* Covariant cast for argument 0 (i) <var_color:Int> isa OTHER */
/* <var_color:Int> isa OTHER */
var35 = 1; /* easy <var_color:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var36 = var30 <= var_color;
var33 = var36;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
if (var33){
{
{ /* Inline array#AbstractArrayRead#length (var_table) on <var_table:Array[nullable MClass]> */
var39 = var_table->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_table:Array[nullable MClass]> */
var37 = var39;
RET_LABEL38:(void)0;
}
}
var_i = var37;
var_40 = var_color;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_40) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_40:Int> isa OTHER */
/* <var_40:Int> isa OTHER */
var43 = 1; /* easy <var_40:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name46 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var47 = var_i < var_40;
var41 = var47;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
if (var41){
} else {
goto BREAK_label48;
}
{
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var_table, var_i, ((val*)NULL)); /* Direct call array#Array#[]= on <var_table:Array[nullable MClass]>*/
}
{
var49 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var49;
}
BREAK_label48: (void)0;
} else {
}
{
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var_table, var_color, var_sup); /* Direct call array#Array#[]= on <var_table:Array[nullable MClass]>*/
}
{
((void(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_21); /* next on <var_21:IndexedIterator[MClass]>*/
}
}
BREAK_label23: (void)0;
{
((void(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_21); /* finish on <var_21:IndexedIterator[MClass]>*/
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_tables, var_mclass, var_table); /* Direct call hash_collection#HashMap#[]= on <var_tables:HashMap[MClass, Array[nullable MClass]]>*/
}
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_3); /* next on <var_3:Iterator[MClass]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_3); /* finish on <var_3:Iterator[MClass]>*/
}
var = var_tables;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#compile_header_structs for (self: SeparateErasureCompiler) */
void nitc___nitc__SeparateErasureCompiler___nitc__abstract_compiler__AbstractCompiler__compile_header_structs(val* self) {
val* var /* : CodeWriter */;
val* var2 /* : CodeWriter */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : String */;
val* var6 /* : CodeWriter */;
val* var8 /* : CodeWriter */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : String */;
val* var13 /* : CodeWriter */;
val* var15 /* : CodeWriter */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : String */;
val* var20 /* : CodeWriter */;
val* var22 /* : CodeWriter */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
val* var26 /* : String */;
val* var27 /* : CodeWriter */;
val* var29 /* : CodeWriter */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : String */;
val* var34 /* : CodeWriter */;
val* var36 /* : CodeWriter */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
val* var40 /* : String */;
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "typedef void(*nitmethod_t)(void); /* general C type representing a Nit method. */";
var5 = core__flat___NativeString___to_s_full(var4, 81l, 81l);
var3 = var5;
varonce = var3;
}
{
nitc___nitc__CodeWriter___add_decl(var, var3); /* Direct call abstract_compiler#CodeWriter#add_decl on <var:CodeWriter>*/
}
{
nitc___nitc__SeparateCompiler___compile_header_attribute_structs(self); /* Direct call separate_compiler#SeparateCompiler#compile_header_attribute_structs on <self:SeparateErasureCompiler>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var8 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "struct class { int id; const char *name; int box_kind; int color; const struct vts_table *vts_table; const struct type_table *type_table; nitmethod_t vft[]; }; /* general C type representing a Nit class. */";
var12 = core__flat___NativeString___to_s_full(var11, 206l, 206l);
var10 = var12;
varonce9 = var10;
}
{
nitc___nitc__CodeWriter___add_decl(var6, var10); /* Direct call abstract_compiler#CodeWriter#add_decl on <var6:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var15 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "struct type_table { int size; int table[]; }; /* colorized type table. */";
var19 = core__flat___NativeString___to_s_full(var18, 73l, 73l);
var17 = var19;
varonce16 = var17;
}
{
nitc___nitc__CodeWriter___add_decl(var13, var17); /* Direct call abstract_compiler#CodeWriter#add_decl on <var13:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var22 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "struct vts_entry { short int is_nullable; const struct class *class; }; /* link (nullable or not) between the vts and is bound. */";
var26 = core__flat___NativeString___to_s_full(var25, 130l, 130l);
var24 = var26;
varonce23 = var24;
}
{
nitc___nitc__CodeWriter___add_decl(var20, var24); /* Direct call abstract_compiler#CodeWriter#add_decl on <var20:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var29 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "struct vts_table { int dummy; const struct vts_entry vts[]; }; /* vts list of a C type representation. */";
var33 = core__flat___NativeString___to_s_full(var32, 105l, 105l);
var31 = var33;
varonce30 = var31;
}
{
nitc___nitc__CodeWriter___add_decl(var27, var31); /* Direct call abstract_compiler#CodeWriter#add_decl on <var27:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var36 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = "typedef struct instance { const struct class *class; nitattribute_t attrs[1]; } val; /* general C type representing a Nit instance. */";
var40 = core__flat___NativeString___to_s_full(var39, 134l, 134l);
var38 = var40;
varonce37 = var38;
}
{
nitc___nitc__CodeWriter___add_decl(var34, var38); /* Direct call abstract_compiler#CodeWriter#add_decl on <var34:CodeWriter>*/
}
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#compile_class_to_c for (self: SeparateErasureCompiler, MClass) */
void nitc___nitc__SeparateErasureCompiler___nitc__separate_compiler__SeparateCompiler__compile_class_to_c(val* self, val* p0) {
val* var_mclass /* var mclass: MClass */;
val* var /* : MClassDef */;
val* var2 /* : MClassDef */;
val* var3 /* : MClassType */;
val* var5 /* : MClassType */;
val* var_mtype /* var mtype: MClassType */;
val* var6 /* : String */;
val* var_c_name /* var c_name: String */;
val* var7 /* : Map[MClass, Array[nullable MClass]] */;
val* var9 /* : Map[MClass, Array[nullable MClass]] */;
val* var10 /* : nullable Object */;
val* var_class_table /* var class_table: Array[nullable MClass] */;
val* var11 /* : SeparateCompilerVisitor */;
val* var_v /* var v: SeparateCompilerVisitor */;
val* var12 /* : nullable RapidTypeAnalysis */;
val* var14 /* : nullable RapidTypeAnalysis */;
val* var_rta /* var rta: nullable RapidTypeAnalysis */;
short int var_is_dead /* var is_dead: Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var_ /* var : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var_25 /* var : Bool */;
val* var26 /* : HashSet[MClass] */;
val* var28 /* : HashSet[MClass] */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var_31 /* var : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var_34 /* var : Bool */;
val* var35 /* : String */;
val* var37 /* : String */;
static val* varonce;
val* var38 /* : String */;
char* var39 /* : NativeString */;
val* var40 /* : String */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
val* var46 /* : NativeArray[String] */;
static val* varonce45;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
val* var50 /* : String */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
val* var54 /* : String */;
val* var55 /* : String */;
val* var57 /* : NativeArray[String] */;
static val* varonce56;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
val* var61 /* : String */;
val* var62 /* : String */;
val* var64 /* : NativeArray[String] */;
static val* varonce63;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
val* var68 /* : String */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
val* var72 /* : String */;
val* var73 /* : String */;
val* var75 /* : NativeArray[String] */;
static val* varonce74;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
val* var79 /* : String */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
val* var83 /* : String */;
val* var84 /* : String */;
val* var86 /* : NativeArray[String] */;
static val* varonce85;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : NativeString */;
val* var90 /* : String */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : NativeString */;
val* var94 /* : String */;
val* var95 /* : String */;
val* var97 /* : NativeArray[String] */;
static val* varonce96;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : NativeString */;
val* var101 /* : String */;
val* var102 /* : Map[MClass, Int] */;
val* var104 /* : Map[MClass, Int] */;
val* var105 /* : nullable Object */;
val* var106 /* : String */;
long var107 /* : Int */;
val* var108 /* : String */;
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
val* var121 /* : String */;
val* var122 /* : String */;
val* var124 /* : NativeArray[String] */;
static val* varonce123;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : NativeString */;
val* var128 /* : String */;
long var129 /* : Int */;
val* var130 /* : String */;
val* var131 /* : String */;
val* var133 /* : NativeArray[String] */;
static val* varonce132;
static val* varonce134;
val* var135 /* : String */;
char* var136 /* : NativeString */;
val* var137 /* : String */;
val* var138 /* : Map[MClass, Int] */;
val* var140 /* : Map[MClass, Int] */;
val* var141 /* : nullable Object */;
val* var142 /* : String */;
long var143 /* : Int */;
val* var144 /* : String */;
short int var145 /* : Bool */;
short int var146 /* : Bool */;
val* var148 /* : NativeArray[String] */;
static val* varonce147;
static val* varonce149;
val* var150 /* : String */;
char* var151 /* : NativeString */;
val* var152 /* : String */;
val* var153 /* : String */;
val* var155 /* : NativeArray[String] */;
static val* varonce154;
static val* varonce156;
val* var157 /* : String */;
char* var158 /* : NativeString */;
val* var159 /* : String */;
static val* varonce160;
val* var161 /* : String */;
char* var162 /* : NativeString */;
val* var163 /* : String */;
val* var164 /* : String */;
static val* varonce165;
val* var166 /* : String */;
char* var167 /* : NativeString */;
val* var168 /* : String */;
val* var170 /* : NativeArray[String] */;
static val* varonce169;
static val* varonce171;
val* var172 /* : String */;
char* var173 /* : NativeString */;
val* var174 /* : String */;
static val* varonce175;
val* var176 /* : String */;
char* var177 /* : NativeString */;
val* var178 /* : String */;
val* var179 /* : String */;
static val* varonce180;
val* var181 /* : String */;
char* var182 /* : NativeString */;
val* var183 /* : String */;
val* var184 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var186 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var187 /* : nullable Object */;
val* var_vft /* var vft: nullable Array[nullable MPropDef] */;
short int var188 /* : Bool */;
short int var189 /* : Bool */;
short int var191 /* : Bool */;
short int var192 /* : Bool */;
long var_i /* var i: Int */;
long var193 /* : Int */;
long var195 /* : Int */;
long var_196 /* var : Int */;
short int var197 /* : Bool */;
short int var199 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var200 /* : Bool */;
val* var201 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: nullable MPropDef */;
short int var202 /* : Bool */;
short int var203 /* : Bool */;
val* var_other205 /* var other: nullable Object */;
short int var206 /* : Bool */;
short int var208 /* : Bool */;
static val* varonce209;
val* var210 /* : String */;
char* var211 /* : NativeString */;
val* var212 /* : String */;
short int var213 /* : Bool */;
int cltype214;
int idtype215;
short int var216 /* : Bool */;
short int var217 /* : Bool */;
short int var218 /* : Bool */;
short int var220 /* : Bool */;
short int var221 /* : Bool */;
short int var_222 /* var : Bool */;
val* var223 /* : HashSet[MMethodDef] */;
val* var225 /* : HashSet[MMethodDef] */;
short int var226 /* : Bool */;
short int var227 /* : Bool */;
val* var229 /* : NativeArray[String] */;
static val* varonce228;
static val* varonce230;
val* var231 /* : String */;
char* var232 /* : NativeString */;
val* var233 /* : String */;
static val* varonce234;
val* var235 /* : String */;
char* var236 /* : NativeString */;
val* var237 /* : String */;
static val* varonce238;
val* var239 /* : String */;
char* var240 /* : NativeString */;
val* var241 /* : String */;
static val* varonce242;
val* var243 /* : String */;
char* var244 /* : NativeString */;
val* var245 /* : String */;
val* var246 /* : MModule */;
val* var248 /* : MModule */;
val* var249 /* : String */;
val* var250 /* : String */;
val* var251 /* : String */;
val* var252 /* : String */;
val* var254 /* : SeparateRuntimeFunction */;
val* var_rf /* var rf: SeparateRuntimeFunction */;
val* var255 /* : String */;
val* var257 /* : NativeArray[String] */;
static val* varonce256;
static val* varonce258;
val* var259 /* : String */;
char* var260 /* : NativeString */;
val* var261 /* : String */;
static val* varonce262;
val* var263 /* : String */;
char* var264 /* : NativeString */;
val* var265 /* : String */;
static val* varonce266;
val* var267 /* : String */;
char* var268 /* : NativeString */;
val* var269 /* : String */;
val* var270 /* : String */;
val* var271 /* : String */;
val* var272 /* : String */;
long var273 /* : Int */;
static val* varonce274;
val* var275 /* : String */;
char* var276 /* : NativeString */;
val* var277 /* : String */;
static val* varonce278;
val* var279 /* : String */;
char* var280 /* : NativeString */;
val* var281 /* : String */;
val* var283 /* : NativeArray[String] */;
static val* varonce282;
static val* varonce284;
val* var285 /* : String */;
char* var286 /* : NativeString */;
val* var287 /* : String */;
static val* varonce288;
val* var289 /* : String */;
char* var290 /* : NativeString */;
val* var291 /* : String */;
val* var292 /* : String */;
val* var294 /* : NativeArray[String] */;
static val* varonce293;
static val* varonce295;
val* var296 /* : String */;
char* var297 /* : NativeString */;
val* var298 /* : String */;
long var299 /* : Int */;
long var301 /* : Int */;
val* var302 /* : String */;
val* var303 /* : String */;
static val* varonce304;
val* var305 /* : String */;
char* var306 /* : NativeString */;
val* var307 /* : String */;
val* var_308 /* var : Array[nullable MClass] */;
val* var309 /* : IndexedIterator[nullable Object] */;
val* var_310 /* var : IndexedIterator[nullable MClass] */;
short int var311 /* : Bool */;
val* var313 /* : nullable Object */;
val* var_msuper /* var msuper: nullable MClass */;
short int var314 /* : Bool */;
short int var315 /* : Bool */;
short int var317 /* : Bool */;
short int var319 /* : Bool */;
static val* varonce320;
val* var321 /* : String */;
char* var322 /* : NativeString */;
val* var323 /* : String */;
val* var325 /* : NativeArray[String] */;
static val* varonce324;
static val* varonce326;
val* var327 /* : String */;
char* var328 /* : NativeString */;
val* var329 /* : String */;
static val* varonce330;
val* var331 /* : String */;
char* var332 /* : NativeString */;
val* var333 /* : String */;
val* var334 /* : Map[MClass, Int] */;
val* var336 /* : Map[MClass, Int] */;
val* var337 /* : nullable Object */;
val* var338 /* : String */;
long var339 /* : Int */;
val* var340 /* : String */;
val* var341 /* : String */;
static val* varonce342;
val* var343 /* : String */;
char* var344 /* : NativeString */;
val* var345 /* : String */;
static val* varonce346;
val* var347 /* : String */;
char* var348 /* : NativeString */;
val* var349 /* : String */;
short int var350 /* : Bool */;
short int var351 /* : Bool */;
short int var_352 /* var : Bool */;
val* var353 /* : MClass */;
val* var355 /* : MClass */;
val* var356 /* : String */;
val* var358 /* : String */;
static val* varonce359;
val* var360 /* : String */;
char* var361 /* : NativeString */;
val* var362 /* : String */;
short int var363 /* : Bool */;
val* var364 /* : CodeWriter */;
val* var366 /* : CodeWriter */;
val* var368 /* : NativeArray[String] */;
static val* varonce367;
static val* varonce369;
val* var370 /* : String */;
char* var371 /* : NativeString */;
val* var372 /* : String */;
static val* varonce373;
val* var374 /* : String */;
char* var375 /* : NativeString */;
val* var376 /* : String */;
val* var377 /* : String */;
val* var378 /* : CodeWriter */;
val* var380 /* : CodeWriter */;
static val* varonce381;
val* var382 /* : String */;
char* var383 /* : NativeString */;
val* var384 /* : String */;
val* var385 /* : CodeWriter */;
val* var387 /* : CodeWriter */;
val* var389 /* : NativeArray[String] */;
static val* varonce388;
static val* varonce390;
val* var391 /* : String */;
char* var392 /* : NativeString */;
val* var393 /* : String */;
val* var394 /* : String */;
val* var395 /* : String */;
val* var396 /* : CodeWriter */;
val* var398 /* : CodeWriter */;
static val* varonce399;
val* var400 /* : String */;
char* var401 /* : NativeString */;
val* var402 /* : String */;
val* var404 /* : NativeArray[String] */;
static val* varonce403;
static val* varonce405;
val* var406 /* : String */;
char* var407 /* : NativeString */;
val* var408 /* : String */;
val* var409 /* : String */;
val* var411 /* : NativeArray[String] */;
static val* varonce410;
static val* varonce412;
val* var413 /* : String */;
char* var414 /* : NativeString */;
val* var415 /* : String */;
static val* varonce416;
val* var417 /* : String */;
char* var418 /* : NativeString */;
val* var419 /* : String */;
static val* varonce420;
val* var421 /* : String */;
char* var422 /* : NativeString */;
val* var423 /* : String */;
val* var424 /* : String */;
val* var425 /* : String */;
val* var427 /* : NativeArray[String] */;
static val* varonce426;
static val* varonce428;
val* var429 /* : String */;
char* var430 /* : NativeString */;
val* var431 /* : String */;
static val* varonce432;
val* var433 /* : String */;
char* var434 /* : NativeString */;
val* var435 /* : String */;
val* var436 /* : String */;
val* var437 /* : String */;
val* var439 /* : NativeArray[String] */;
static val* varonce438;
static val* varonce440;
val* var441 /* : String */;
char* var442 /* : NativeString */;
val* var443 /* : String */;
static val* varonce444;
val* var445 /* : String */;
char* var446 /* : NativeString */;
val* var447 /* : String */;
static val* varonce448;
val* var449 /* : String */;
char* var450 /* : NativeString */;
val* var451 /* : String */;
val* var452 /* : String */;
val* var453 /* : String */;
val* var454 /* : String */;
val* var456 /* : NativeArray[String] */;
static val* varonce455;
static val* varonce457;
val* var458 /* : String */;
char* var459 /* : NativeString */;
val* var460 /* : String */;
static val* varonce461;
val* var462 /* : String */;
char* var463 /* : NativeString */;
val* var464 /* : String */;
static val* varonce465;
val* var466 /* : String */;
char* var467 /* : NativeString */;
val* var468 /* : String */;
val* var469 /* : String */;
val* var471 /* : NativeArray[String] */;
static val* varonce470;
static val* varonce472;
val* var473 /* : String */;
char* var474 /* : NativeString */;
val* var475 /* : String */;
val* var476 /* : String */;
val* var478 /* : NativeArray[String] */;
static val* varonce477;
static val* varonce479;
val* var480 /* : String */;
char* var481 /* : NativeString */;
val* var482 /* : String */;
static val* varonce483;
val* var484 /* : String */;
char* var485 /* : NativeString */;
val* var486 /* : String */;
val* var487 /* : String */;
static val* varonce488;
val* var489 /* : String */;
char* var490 /* : NativeString */;
val* var491 /* : String */;
static val* varonce492;
val* var493 /* : String */;
char* var494 /* : NativeString */;
val* var495 /* : String */;
static val* varonce496;
val* var497 /* : String */;
char* var498 /* : NativeString */;
val* var499 /* : String */;
val* var500 /* : MClass */;
val* var502 /* : MClass */;
val* var503 /* : String */;
val* var505 /* : String */;
static val* varonce506;
val* var507 /* : String */;
char* var508 /* : NativeString */;
val* var509 /* : String */;
short int var510 /* : Bool */;
short int var512 /* : Bool */;
short int var513 /* : Bool */;
val* var514 /* : SeparateCompilerVisitor */;
val* var516 /* : NativeArray[String] */;
static val* varonce515;
static val* varonce517;
val* var518 /* : String */;
char* var519 /* : NativeString */;
val* var520 /* : String */;
val* var521 /* : String */;
val* var523 /* : NativeArray[String] */;
static val* varonce522;
static val* varonce524;
val* var525 /* : String */;
char* var526 /* : NativeString */;
val* var527 /* : String */;
static val* varonce528;
val* var529 /* : String */;
char* var530 /* : NativeString */;
val* var531 /* : String */;
val* var532 /* : String */;
val* var533 /* : String */;
val* var535 /* : NativeArray[String] */;
static val* varonce534;
static val* varonce536;
val* var537 /* : String */;
char* var538 /* : NativeString */;
val* var539 /* : String */;
static val* varonce540;
val* var541 /* : String */;
char* var542 /* : NativeString */;
val* var543 /* : String */;
val* var544 /* : String */;
val* var545 /* : String */;
val* var547 /* : NativeArray[String] */;
static val* varonce546;
static val* varonce548;
val* var549 /* : String */;
char* var550 /* : NativeString */;
val* var551 /* : String */;
static val* varonce552;
val* var553 /* : String */;
char* var554 /* : NativeString */;
val* var555 /* : String */;
val* var556 /* : String */;
val* var557 /* : String */;
val* var559 /* : NativeArray[String] */;
static val* varonce558;
static val* varonce560;
val* var561 /* : String */;
char* var562 /* : NativeString */;
val* var563 /* : String */;
val* var564 /* : String */;
val* var565 /* : String */;
static val* varonce566;
val* var567 /* : String */;
char* var568 /* : NativeString */;
val* var569 /* : String */;
val* var570 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var573 /* : NativeArray[String] */;
static val* varonce572;
static val* varonce574;
val* var575 /* : String */;
char* var576 /* : NativeString */;
val* var577 /* : String */;
static val* varonce578;
val* var579 /* : String */;
char* var580 /* : NativeString */;
val* var581 /* : String */;
val* var582 /* : String */;
val* var583 /* : String */;
val* var584 /* : String */;
val* var586 /* : NativeArray[String] */;
static val* varonce585;
static val* varonce587;
val* var588 /* : String */;
char* var589 /* : NativeString */;
val* var590 /* : String */;
val* var591 /* : String */;
val* var593 /* : NativeArray[String] */;
static val* varonce592;
static val* varonce594;
val* var595 /* : String */;
char* var596 /* : NativeString */;
val* var597 /* : String */;
static val* varonce598;
val* var599 /* : String */;
char* var600 /* : NativeString */;
val* var601 /* : String */;
val* var602 /* : String */;
val* var603 /* : String */;
val* var605 /* : NativeArray[String] */;
static val* varonce604;
static val* varonce606;
val* var607 /* : String */;
char* var608 /* : NativeString */;
val* var609 /* : String */;
static val* varonce610;
val* var611 /* : String */;
char* var612 /* : NativeString */;
val* var613 /* : String */;
static val* varonce614;
val* var615 /* : String */;
char* var616 /* : NativeString */;
val* var617 /* : String */;
val* var618 /* : String */;
val* var619 /* : String */;
val* var620 /* : String */;
val* var622 /* : NativeArray[String] */;
static val* varonce621;
static val* varonce623;
val* var624 /* : String */;
char* var625 /* : NativeString */;
val* var626 /* : String */;
static val* varonce627;
val* var628 /* : String */;
char* var629 /* : NativeString */;
val* var630 /* : String */;
val* var631 /* : String */;
val* var632 /* : String */;
static val* varonce633;
val* var634 /* : String */;
char* var635 /* : NativeString */;
val* var636 /* : String */;
val* var637 /* : String */;
val* var639 /* : String */;
static val* varonce640;
val* var641 /* : String */;
char* var642 /* : NativeString */;
val* var643 /* : String */;
short int var644 /* : Bool */;
val* var645 /* : CodeWriter */;
val* var647 /* : CodeWriter */;
val* var649 /* : NativeArray[String] */;
static val* varonce648;
static val* varonce650;
val* var651 /* : String */;
char* var652 /* : NativeString */;
val* var653 /* : String */;
static val* varonce654;
val* var655 /* : String */;
char* var656 /* : NativeString */;
val* var657 /* : String */;
val* var658 /* : String */;
val* var659 /* : CodeWriter */;
val* var661 /* : CodeWriter */;
static val* varonce662;
val* var663 /* : String */;
char* var664 /* : NativeString */;
val* var665 /* : String */;
val* var666 /* : CodeWriter */;
val* var668 /* : CodeWriter */;
static val* varonce669;
val* var670 /* : String */;
char* var671 /* : NativeString */;
val* var672 /* : String */;
val* var673 /* : CodeWriter */;
val* var675 /* : CodeWriter */;
static val* varonce676;
val* var677 /* : String */;
char* var678 /* : NativeString */;
val* var679 /* : String */;
val* var680 /* : CodeWriter */;
val* var682 /* : CodeWriter */;
static val* varonce683;
val* var684 /* : String */;
char* var685 /* : NativeString */;
val* var686 /* : String */;
val* var688 /* : NativeArray[String] */;
static val* varonce687;
static val* varonce689;
val* var690 /* : String */;
char* var691 /* : NativeString */;
val* var692 /* : String */;
val* var693 /* : String */;
val* var695 /* : NativeArray[String] */;
static val* varonce694;
static val* varonce696;
val* var697 /* : String */;
char* var698 /* : NativeString */;
val* var699 /* : String */;
static val* varonce700;
val* var701 /* : String */;
char* var702 /* : NativeString */;
val* var703 /* : String */;
val* var704 /* : String */;
val* var705 /* : String */;
val* var707 /* : NativeArray[String] */;
static val* varonce706;
static val* varonce708;
val* var709 /* : String */;
char* var710 /* : NativeString */;
val* var711 /* : String */;
static val* varonce712;
val* var713 /* : String */;
char* var714 /* : NativeString */;
val* var715 /* : String */;
val* var716 /* : String */;
val* var717 /* : String */;
val* var719 /* : NativeArray[String] */;
static val* varonce718;
static val* varonce720;
val* var721 /* : String */;
char* var722 /* : NativeString */;
val* var723 /* : String */;
static val* varonce724;
val* var725 /* : String */;
char* var726 /* : NativeString */;
val* var727 /* : String */;
val* var728 /* : String */;
val* var729 /* : String */;
static val* varonce730;
val* var731 /* : String */;
char* var732 /* : NativeString */;
val* var733 /* : String */;
val* var734 /* : String */;
val* var_res735 /* var res: String */;
val* var737 /* : NativeArray[String] */;
static val* varonce736;
static val* varonce738;
val* var739 /* : String */;
char* var740 /* : NativeString */;
val* var741 /* : String */;
static val* varonce742;
val* var743 /* : String */;
char* var744 /* : NativeString */;
val* var745 /* : String */;
static val* varonce746;
val* var747 /* : String */;
char* var748 /* : NativeString */;
val* var749 /* : String */;
val* var750 /* : String */;
val* var751 /* : Array[MType] */;
val* var752 /* : nullable Object */;
val* var_mtype_elt /* var mtype_elt: MType */;
val* var754 /* : NativeArray[String] */;
static val* varonce753;
static val* varonce755;
val* var756 /* : String */;
char* var757 /* : NativeString */;
val* var758 /* : String */;
static val* varonce759;
val* var760 /* : String */;
char* var761 /* : NativeString */;
val* var762 /* : String */;
static val* varonce763;
val* var764 /* : String */;
char* var765 /* : NativeString */;
val* var766 /* : String */;
val* var767 /* : String */;
val* var768 /* : String */;
val* var770 /* : NativeArray[String] */;
static val* varonce769;
static val* varonce771;
val* var772 /* : String */;
char* var773 /* : NativeString */;
val* var774 /* : String */;
val* var775 /* : String */;
val* var777 /* : NativeArray[String] */;
static val* varonce776;
static val* varonce778;
val* var779 /* : String */;
char* var780 /* : NativeString */;
val* var781 /* : String */;
static val* varonce782;
val* var783 /* : String */;
char* var784 /* : NativeString */;
val* var785 /* : String */;
val* var786 /* : String */;
val* var788 /* : NativeArray[String] */;
static val* varonce787;
static val* varonce789;
val* var790 /* : String */;
char* var791 /* : NativeString */;
val* var792 /* : String */;
val* var793 /* : String */;
val* var795 /* : NativeArray[String] */;
static val* varonce794;
static val* varonce796;
val* var797 /* : String */;
char* var798 /* : NativeString */;
val* var799 /* : String */;
static val* varonce800;
val* var801 /* : String */;
char* var802 /* : NativeString */;
val* var803 /* : String */;
val* var804 /* : String */;
static val* varonce805;
val* var806 /* : String */;
char* var807 /* : NativeString */;
val* var808 /* : String */;
short int var809 /* : Bool */;
val* var810 /* : MClass */;
val* var812 /* : MClass */;
val* var813 /* : MClassKind */;
val* var815 /* : MClassKind */;
val* var816 /* : Sys */;
val* var817 /* : MClassKind */;
short int var818 /* : Bool */;
short int var820 /* : Bool */;
short int var822 /* : Bool */;
short int var_823 /* var : Bool */;
val* var824 /* : MClass */;
val* var826 /* : MClass */;
val* var827 /* : String */;
val* var829 /* : String */;
static val* varonce830;
val* var831 /* : String */;
char* var832 /* : NativeString */;
val* var833 /* : String */;
short int var834 /* : Bool */;
short int var836 /* : Bool */;
short int var837 /* : Bool */;
val* var838 /* : MModule */;
val* var840 /* : MModule */;
val* var841 /* : MClassType */;
val* var_pointer_type /* var pointer_type: MClassType */;
val* var843 /* : NativeArray[String] */;
static val* varonce842;
static val* varonce844;
val* var845 /* : String */;
char* var846 /* : NativeString */;
val* var847 /* : String */;
val* var848 /* : String */;
val* var850 /* : NativeArray[String] */;
static val* varonce849;
static val* varonce851;
val* var852 /* : String */;
char* var853 /* : NativeString */;
val* var854 /* : String */;
static val* varonce855;
val* var856 /* : String */;
char* var857 /* : NativeString */;
val* var858 /* : String */;
val* var859 /* : String */;
val* var860 /* : String */;
val* var862 /* : NativeArray[String] */;
static val* varonce861;
static val* varonce863;
val* var864 /* : String */;
char* var865 /* : NativeString */;
val* var866 /* : String */;
static val* varonce867;
val* var868 /* : String */;
char* var869 /* : NativeString */;
val* var870 /* : String */;
val* var871 /* : String */;
val* var872 /* : String */;
val* var874 /* : NativeArray[String] */;
static val* varonce873;
static val* varonce875;
val* var876 /* : String */;
char* var877 /* : NativeString */;
val* var878 /* : String */;
static val* varonce879;
val* var880 /* : String */;
char* var881 /* : NativeString */;
val* var882 /* : String */;
val* var883 /* : String */;
val* var884 /* : String */;
val* var886 /* : NativeArray[String] */;
static val* varonce885;
static val* varonce887;
val* var888 /* : String */;
char* var889 /* : NativeString */;
val* var890 /* : String */;
val* var891 /* : String */;
val* var892 /* : String */;
static val* varonce893;
val* var894 /* : String */;
char* var895 /* : NativeString */;
val* var896 /* : String */;
val* var897 /* : RuntimeVariable */;
val* var_res898 /* var res: RuntimeVariable */;
val* var901 /* : NativeArray[String] */;
static val* varonce900;
static val* varonce902;
val* var903 /* : String */;
char* var904 /* : NativeString */;
val* var905 /* : String */;
static val* varonce906;
val* var907 /* : String */;
char* var908 /* : NativeString */;
val* var909 /* : String */;
val* var910 /* : String */;
val* var911 /* : String */;
val* var912 /* : String */;
val* var914 /* : NativeArray[String] */;
static val* varonce913;
static val* varonce915;
val* var916 /* : String */;
char* var917 /* : NativeString */;
val* var918 /* : String */;
val* var919 /* : String */;
val* var921 /* : NativeArray[String] */;
static val* varonce920;
static val* varonce922;
val* var923 /* : String */;
char* var924 /* : NativeString */;
val* var925 /* : String */;
static val* varonce926;
val* var927 /* : String */;
char* var928 /* : NativeString */;
val* var929 /* : String */;
val* var930 /* : String */;
val* var931 /* : String */;
val* var933 /* : NativeArray[String] */;
static val* varonce932;
static val* varonce934;
val* var935 /* : String */;
char* var936 /* : NativeString */;
val* var937 /* : String */;
static val* varonce938;
val* var939 /* : String */;
char* var940 /* : NativeString */;
val* var941 /* : String */;
static val* varonce942;
val* var943 /* : String */;
char* var944 /* : NativeString */;
val* var945 /* : String */;
val* var946 /* : String */;
val* var947 /* : String */;
val* var948 /* : String */;
val* var950 /* : NativeArray[String] */;
static val* varonce949;
static val* varonce951;
val* var952 /* : String */;
char* var953 /* : NativeString */;
val* var954 /* : String */;
static val* varonce955;
val* var956 /* : String */;
char* var957 /* : NativeString */;
val* var958 /* : String */;
val* var959 /* : String */;
val* var960 /* : String */;
static val* varonce961;
val* var962 /* : String */;
char* var963 /* : NativeString */;
val* var964 /* : String */;
val* var966 /* : NativeArray[String] */;
static val* varonce965;
static val* varonce967;
val* var968 /* : String */;
char* var969 /* : NativeString */;
val* var970 /* : String */;
val* var971 /* : String */;
val* var973 /* : NativeArray[String] */;
static val* varonce972;
static val* varonce974;
val* var975 /* : String */;
char* var976 /* : NativeString */;
val* var977 /* : String */;
static val* varonce978;
val* var979 /* : String */;
char* var980 /* : NativeString */;
val* var981 /* : String */;
val* var982 /* : String */;
val* var983 /* : String */;
val* var985 /* : NativeArray[String] */;
static val* varonce984;
static val* varonce986;
val* var987 /* : String */;
char* var988 /* : NativeString */;
val* var989 /* : String */;
static val* varonce990;
val* var991 /* : String */;
char* var992 /* : NativeString */;
val* var993 /* : String */;
val* var994 /* : String */;
val* var995 /* : String */;
val* var997 /* : NativeArray[String] */;
static val* varonce996;
static val* varonce998;
val* var999 /* : String */;
char* var1000 /* : NativeString */;
val* var1001 /* : String */;
static val* varonce1002;
val* var1003 /* : String */;
char* var1004 /* : NativeString */;
val* var1005 /* : String */;
val* var1006 /* : String */;
val* var1007 /* : String */;
val* var1009 /* : NativeArray[String] */;
static val* varonce1008;
static val* varonce1010;
val* var1011 /* : String */;
char* var1012 /* : NativeString */;
val* var1013 /* : String */;
val* var1014 /* : String */;
val* var1015 /* : String */;
static val* varonce1016;
val* var1017 /* : String */;
char* var1018 /* : NativeString */;
val* var1019 /* : String */;
val* var1020 /* : RuntimeVariable */;
val* var_res1021 /* var res: RuntimeVariable */;
val* var1023 /* : Map[MClass, Array[nullable MProperty]] */;
val* var1025 /* : Map[MClass, Array[nullable MProperty]] */;
val* var1026 /* : nullable Object */;
val* var_attrs /* var attrs: nullable Array[nullable MProperty] */;
short int var1027 /* : Bool */;
short int var1028 /* : Bool */;
val* var1030 /* : NativeArray[String] */;
static val* varonce1029;
static val* varonce1031;
val* var1032 /* : String */;
char* var1033 /* : NativeString */;
val* var1034 /* : String */;
val* var1035 /* : String */;
val* var1036 /* : String */;
val* var1038 /* : NativeArray[String] */;
static val* varonce1037;
static val* varonce1039;
val* var1040 /* : String */;
char* var1041 /* : NativeString */;
val* var1042 /* : String */;
static val* varonce1043;
val* var1044 /* : String */;
char* var1045 /* : NativeString */;
val* var1046 /* : String */;
val* var1047 /* : String */;
long var1048 /* : Int */;
long var1050 /* : Int */;
val* var1051 /* : String */;
val* var1052 /* : String */;
val* var1054 /* : NativeArray[String] */;
static val* varonce1053;
static val* varonce1055;
val* var1056 /* : String */;
char* var1057 /* : NativeString */;
val* var1058 /* : String */;
val* var1059 /* : String */;
val* var1061 /* : NativeArray[String] */;
static val* varonce1060;
static val* varonce1062;
val* var1063 /* : String */;
char* var1064 /* : NativeString */;
val* var1065 /* : String */;
static val* varonce1066;
val* var1067 /* : String */;
char* var1068 /* : NativeString */;
val* var1069 /* : String */;
val* var1070 /* : String */;
val* var1071 /* : String */;
short int var1072 /* : Bool */;
short int var1073 /* : Bool */;
short int var1075 /* : Bool */;
short int var1076 /* : Bool */;
val* var1078 /* : NativeArray[String] */;
static val* varonce1077;
static val* varonce1079;
val* var1080 /* : String */;
char* var1081 /* : NativeString */;
val* var1082 /* : String */;
static val* varonce1083;
val* var1084 /* : String */;
char* var1085 /* : NativeString */;
val* var1086 /* : String */;
val* var1087 /* : String */;
val* var1088 /* : String */;
static val* varonce1089;
val* var1090 /* : String */;
char* var1091 /* : NativeString */;
val* var1092 /* : String */;
var_mclass = p0;
{
{ /* Inline model#MClass#intro (var_mclass) on <var_mclass:MClass> */
var2 = var_mclass->attrs[COLOR_nitc__model__MClass___intro].val; /* _intro on <var_mclass:MClass> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 483);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var) on <var:MClassDef> */
var5 = var->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var:MClassDef> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 579);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_mtype = var3;
{
var6 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var_mclass);
}
var_c_name = var6;
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#class_tables (self) on <self:SeparateErasureCompiler> */
var9 = self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___class_tables].val; /* _class_tables on <self:SeparateErasureCompiler> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _class_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 427);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = ((val*(*)(val* self, val* p0))((((long)var7&3)?class_info[((long)var7&3)]:var7->class)->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var7, var_mclass); /* [] on <var7:Map[MClass, Array[nullable MClass]]>*/
}
var_class_table = var10;
{
var11 = nitc___nitc__SeparateErasureCompiler___nitc__abstract_compiler__AbstractCompiler__new_visitor(self);
}
var_v = var11;
{
{ /* Inline separate_compiler#SeparateCompiler#runtime_type_analysis (self) on <self:SeparateErasureCompiler> */
var14 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <self:SeparateErasureCompiler> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_rta = var12;
var_is_dead = 0;
var19 = !var_is_dead;
var_ = var19;
if (var19){
if (var_rta == NULL) {
var20 = 0; /* is null */
} else {
var20 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_rta,((val*)NULL)) on <var_rta:nullable RapidTypeAnalysis> */
var_other = ((val*)NULL);
{
var23 = ((short int(*)(val* self, val* p0))(var_rta->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_rta, var_other); /* == on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)>*/
}
var24 = !var23;
var21 = var24;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
var18 = var20;
} else {
var18 = var_;
}
var_25 = var18;
if (var18){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_classes (var_rta) on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
var28 = var_rta->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_classes].val; /* _live_classes on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_classes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 69);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
var29 = core___core__HashSet___core__abstract_collection__Collection__has(var26, var_mclass);
}
var30 = !var29;
var17 = var30;
} else {
var17 = var_25;
}
var_31 = var17;
if (var17){
{
var32 = nitc__abstract_compiler___MClassType___MType__is_c_primitive(var_mtype);
}
var33 = !var32;
var16 = var33;
} else {
var16 = var_31;
}
var_34 = var16;
if (var16){
{
{ /* Inline model#MClass#name (var_mclass) on <var_mclass:MClass> */
var37 = var_mclass->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var_mclass:MClass> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 385);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
if (likely(varonce!=NULL)) {
var38 = varonce;
} else {
var39 = "NativeArray";
var40 = core__flat___NativeString___to_s_full(var39, 11l, 11l);
var38 = var40;
varonce = var38;
}
{
{ /* Inline kernel#Object#!= (var35,var38) on <var35:String> */
var_other = var38;
{
var43 = ((short int(*)(val* self, val* p0))(var35->class->vft[COLOR_core__kernel__Object___61d_61d]))(var35, var_other); /* == on <var35:String>*/
}
var44 = !var43;
var41 = var44;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
var15 = var41;
} else {
var15 = var_34;
}
if (var15){
var_is_dead = 1;
} else {
}
if (unlikely(varonce45==NULL)) {
var46 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "/* runtime class ";
var50 = core__flat___NativeString___to_s_full(var49, 17l, 17l);
var48 = var50;
varonce47 = var48;
}
((struct instance_core__NativeArray*)var46)->values[0]=var48;
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = " */";
var54 = core__flat___NativeString___to_s_full(var53, 3l, 3l);
var52 = var54;
varonce51 = var52;
}
((struct instance_core__NativeArray*)var46)->values[2]=var52;
} else {
var46 = varonce45;
varonce45 = NULL;
}
((struct instance_core__NativeArray*)var46)->values[1]=var_c_name;
{
var55 = ((val*(*)(val* self))(var46->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var46); /* native_to_s on <var46:NativeArray[String]>*/
}
varonce45 = var46;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var55); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce56==NULL)) {
var57 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "class_";
var61 = core__flat___NativeString___to_s_full(var60, 6l, 6l);
var59 = var61;
varonce58 = var59;
}
((struct instance_core__NativeArray*)var57)->values[0]=var59;
} else {
var57 = varonce56;
varonce56 = NULL;
}
((struct instance_core__NativeArray*)var57)->values[1]=var_c_name;
{
var62 = ((val*(*)(val* self))(var57->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var57); /* native_to_s on <var57:NativeArray[String]>*/
}
varonce56 = var57;
if (unlikely(varonce63==NULL)) {
var64 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = "extern const struct class class_";
var68 = core__flat___NativeString___to_s_full(var67, 32l, 32l);
var66 = var68;
varonce65 = var66;
}
((struct instance_core__NativeArray*)var64)->values[0]=var66;
if (likely(varonce69!=NULL)) {
var70 = varonce69;
} else {
var71 = ";";
var72 = core__flat___NativeString___to_s_full(var71, 1l, 1l);
var70 = var72;
varonce69 = var70;
}
((struct instance_core__NativeArray*)var64)->values[2]=var70;
} else {
var64 = varonce63;
varonce63 = NULL;
}
((struct instance_core__NativeArray*)var64)->values[1]=var_c_name;
{
var73 = ((val*(*)(val* self))(var64->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var64); /* native_to_s on <var64:NativeArray[String]>*/
}
varonce63 = var64;
{
nitc___nitc__AbstractCompiler___provide_declaration(self, var62, var73); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateErasureCompiler>*/
}
if (unlikely(varonce74==NULL)) {
var75 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce76!=NULL)) {
var77 = varonce76;
} else {
var78 = "extern const struct type_table type_table_";
var79 = core__flat___NativeString___to_s_full(var78, 42l, 42l);
var77 = var79;
varonce76 = var77;
}
((struct instance_core__NativeArray*)var75)->values[0]=var77;
if (likely(varonce80!=NULL)) {
var81 = varonce80;
} else {
var82 = ";";
var83 = core__flat___NativeString___to_s_full(var82, 1l, 1l);
var81 = var83;
varonce80 = var81;
}
((struct instance_core__NativeArray*)var75)->values[2]=var81;
} else {
var75 = varonce74;
varonce74 = NULL;
}
((struct instance_core__NativeArray*)var75)->values[1]=var_c_name;
{
var84 = ((val*(*)(val* self))(var75->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var75); /* native_to_s on <var75:NativeArray[String]>*/
}
varonce74 = var75;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var84); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce85==NULL)) {
var86 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce87!=NULL)) {
var88 = varonce87;
} else {
var89 = "const struct class class_";
var90 = core__flat___NativeString___to_s_full(var89, 25l, 25l);
var88 = var90;
varonce87 = var88;
}
((struct instance_core__NativeArray*)var86)->values[0]=var88;
if (likely(varonce91!=NULL)) {
var92 = varonce91;
} else {
var93 = " = {";
var94 = core__flat___NativeString___to_s_full(var93, 4l, 4l);
var92 = var94;
varonce91 = var92;
}
((struct instance_core__NativeArray*)var86)->values[2]=var92;
} else {
var86 = varonce85;
varonce85 = NULL;
}
((struct instance_core__NativeArray*)var86)->values[1]=var_c_name;
{
var95 = ((val*(*)(val* self))(var86->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var86); /* native_to_s on <var86:NativeArray[String]>*/
}
varonce85 = var86;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var95); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce96==NULL)) {
var97 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce98!=NULL)) {
var99 = varonce98;
} else {
var100 = ",";
var101 = core__flat___NativeString___to_s_full(var100, 1l, 1l);
var99 = var101;
varonce98 = var99;
}
((struct instance_core__NativeArray*)var97)->values[1]=var99;
} else {
var97 = varonce96;
varonce96 = NULL;
}
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#class_ids (self) on <self:SeparateErasureCompiler> */
var104 = self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___class_ids].val; /* _class_ids on <self:SeparateErasureCompiler> */
if (unlikely(var104 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _class_ids");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 84);
fatal_exit(1);
}
var102 = var104;
RET_LABEL103:(void)0;
}
}
{
var105 = ((val*(*)(val* self, val* p0))((((long)var102&3)?class_info[((long)var102&3)]:var102->class)->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var102, var_mclass); /* [] on <var102:Map[MClass, Int]>*/
}
var107 = (long)(var105)>>2;
var106 = core__flat___Int___core__abstract_text__Object__to_s(var107);
((struct instance_core__NativeArray*)var97)->values[0]=var106;
{
var108 = ((val*(*)(val* self))(var97->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var97); /* native_to_s on <var97:NativeArray[String]>*/
}
varonce96 = var97;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var108); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce109==NULL)) {
var110 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce111!=NULL)) {
var112 = varonce111;
} else {
var113 = "\"";
var114 = core__flat___NativeString___to_s_full(var113, 1l, 1l);
var112 = var114;
varonce111 = var112;
}
((struct instance_core__NativeArray*)var110)->values[0]=var112;
if (likely(varonce115!=NULL)) {
var116 = varonce115;
} else {
var117 = "\", /* class_name_string */";
var118 = core__flat___NativeString___to_s_full(var117, 26l, 26l);
var116 = var118;
varonce115 = var116;
}
((struct instance_core__NativeArray*)var110)->values[2]=var116;
} else {
var110 = varonce109;
varonce109 = NULL;
}
{
{ /* Inline model#MClass#name (var_mclass) on <var_mclass:MClass> */
var121 = var_mclass->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var_mclass:MClass> */
if (unlikely(var121 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 385);
fatal_exit(1);
}
var119 = var121;
RET_LABEL120:(void)0;
}
}
((struct instance_core__NativeArray*)var110)->values[1]=var119;
{
var122 = ((val*(*)(val* self))(var110->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var110); /* native_to_s on <var110:NativeArray[String]>*/
}
varonce109 = var110;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var122); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce123==NULL)) {
var124 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce125!=NULL)) {
var126 = varonce125;
} else {
var127 = ", /* box_kind */";
var128 = core__flat___NativeString___to_s_full(var127, 16l, 16l);
var126 = var128;
varonce125 = var126;
}
((struct instance_core__NativeArray*)var124)->values[1]=var126;
} else {
var124 = varonce123;
varonce123 = NULL;
}
{
var129 = nitc___nitc__SeparateCompiler___box_kind_of(self, var_mclass);
}
var130 = core__flat___Int___core__abstract_text__Object__to_s(var129);
((struct instance_core__NativeArray*)var124)->values[0]=var130;
{
var131 = ((val*(*)(val* self))(var124->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var124); /* native_to_s on <var124:NativeArray[String]>*/
}
varonce123 = var124;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var131); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce132==NULL)) {
var133 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce134!=NULL)) {
var135 = varonce134;
} else {
var136 = ",";
var137 = core__flat___NativeString___to_s_full(var136, 1l, 1l);
var135 = var137;
varonce134 = var135;
}
((struct instance_core__NativeArray*)var133)->values[1]=var135;
} else {
var133 = varonce132;
varonce132 = NULL;
}
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#class_colors (self) on <self:SeparateErasureCompiler> */
var140 = self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___class_colors].val; /* _class_colors on <self:SeparateErasureCompiler> */
if (unlikely(var140 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _class_colors");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 85);
fatal_exit(1);
}
var138 = var140;
RET_LABEL139:(void)0;
}
}
{
var141 = ((val*(*)(val* self, val* p0))((((long)var138&3)?class_info[((long)var138&3)]:var138->class)->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var138, var_mclass); /* [] on <var138:Map[MClass, Int]>*/
}
var143 = (long)(var141)>>2;
var142 = core__flat___Int___core__abstract_text__Object__to_s(var143);
((struct instance_core__NativeArray*)var133)->values[0]=var142;
{
var144 = ((val*(*)(val* self))(var133->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var133); /* native_to_s on <var133:NativeArray[String]>*/
}
varonce132 = var133;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var144); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
var145 = !var_is_dead;
if (var145){
{
var146 = nitc___nitc__SeparateErasureCompiler___build_class_vts_table(self, var_mclass);
}
if (var146){
if (unlikely(varonce147==NULL)) {
var148 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce149!=NULL)) {
var150 = varonce149;
} else {
var151 = "vts_table_";
var152 = core__flat___NativeString___to_s_full(var151, 10l, 10l);
var150 = var152;
varonce149 = var150;
}
((struct instance_core__NativeArray*)var148)->values[0]=var150;
} else {
var148 = varonce147;
varonce147 = NULL;
}
((struct instance_core__NativeArray*)var148)->values[1]=var_c_name;
{
var153 = ((val*(*)(val* self))(var148->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var148); /* native_to_s on <var148:NativeArray[String]>*/
}
varonce147 = var148;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v, var153); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce154==NULL)) {
var155 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce156!=NULL)) {
var157 = varonce156;
} else {
var158 = "&vts_table_";
var159 = core__flat___NativeString___to_s_full(var158, 11l, 11l);
var157 = var159;
varonce156 = var157;
}
((struct instance_core__NativeArray*)var155)->values[0]=var157;
if (likely(varonce160!=NULL)) {
var161 = varonce160;
} else {
var162 = ",";
var163 = core__flat___NativeString___to_s_full(var162, 1l, 1l);
var161 = var163;
varonce160 = var161;
}
((struct instance_core__NativeArray*)var155)->values[2]=var161;
} else {
var155 = varonce154;
varonce154 = NULL;
}
((struct instance_core__NativeArray*)var155)->values[1]=var_c_name;
{
var164 = ((val*(*)(val* self))(var155->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var155); /* native_to_s on <var155:NativeArray[String]>*/
}
varonce154 = var155;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var164); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (likely(varonce165!=NULL)) {
var166 = varonce165;
} else {
var167 = "NULL,";
var168 = core__flat___NativeString___to_s_full(var167, 5l, 5l);
var166 = var168;
varonce165 = var166;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var166); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
if (unlikely(varonce169==NULL)) {
var170 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce171!=NULL)) {
var172 = varonce171;
} else {
var173 = "&type_table_";
var174 = core__flat___NativeString___to_s_full(var173, 12l, 12l);
var172 = var174;
varonce171 = var172;
}
((struct instance_core__NativeArray*)var170)->values[0]=var172;
if (likely(varonce175!=NULL)) {
var176 = varonce175;
} else {
var177 = ",";
var178 = core__flat___NativeString___to_s_full(var177, 1l, 1l);
var176 = var178;
varonce175 = var176;
}
((struct instance_core__NativeArray*)var170)->values[2]=var176;
} else {
var170 = varonce169;
varonce169 = NULL;
}
((struct instance_core__NativeArray*)var170)->values[1]=var_c_name;
{
var179 = ((val*(*)(val* self))(var170->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var170); /* native_to_s on <var170:NativeArray[String]>*/
}
varonce169 = var170;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var179); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce180!=NULL)) {
var181 = varonce180;
} else {
var182 = "{";
var183 = core__flat___NativeString___to_s_full(var182, 1l, 1l);
var181 = var183;
varonce180 = var181;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var181); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
{ /* Inline separate_compiler#SeparateCompiler#method_tables (self) on <self:SeparateErasureCompiler> */
var186 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___method_tables].val; /* _method_tables on <self:SeparateErasureCompiler> */
if (unlikely(var186 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _method_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1067);
fatal_exit(1);
}
var184 = var186;
RET_LABEL185:(void)0;
}
}
{
var187 = ((val*(*)(val* self, val* p0))((((long)var184&3)?class_info[((long)var184&3)]:var184->class)->vft[COLOR_core__abstract_collection__MapRead__get_or_null]))(var184, var_mclass); /* get_or_null on <var184:Map[MClass, Array[nullable MPropDef]]>*/
}
var_vft = var187;
if (var_vft == NULL) {
var188 = 0; /* is null */
} else {
var188 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_vft,((val*)NULL)) on <var_vft:nullable Array[nullable MPropDef]> */
var_other = ((val*)NULL);
{
var191 = ((short int(*)(val* self, val* p0))(var_vft->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_vft, var_other); /* == on <var_vft:nullable Array[nullable MPropDef](Array[nullable MPropDef])>*/
}
var192 = !var191;
var189 = var192;
goto RET_LABEL190;
RET_LABEL190:(void)0;
}
var188 = var189;
}
if (var188){
var_i = 0l;
{
{ /* Inline array#AbstractArrayRead#length (var_vft) on <var_vft:nullable Array[nullable MPropDef](Array[nullable MPropDef])> */
var195 = var_vft->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_vft:nullable Array[nullable MPropDef](Array[nullable MPropDef])> */
var193 = var195;
RET_LABEL194:(void)0;
}
}
var_196 = var193;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_196) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_196:Int> isa OTHER */
/* <var_196:Int> isa OTHER */
var199 = 1; /* easy <var_196:Int> isa OTHER*/
if (unlikely(!var199)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var200 = var_i < var_196;
var197 = var200;
goto RET_LABEL198;
RET_LABEL198:(void)0;
}
}
if (var197){
} else {
goto BREAK_label;
}
{
var201 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_vft, var_i);
}
var_mpropdef = var201;
if (var_mpropdef == NULL) {
var202 = 1; /* is null */
} else {
var202 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MPropDef> */
var_other205 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other205) on <var_mpropdef:nullable MPropDef(MPropDef)> */
var208 = var_mpropdef == var_other205;
var206 = var208;
goto RET_LABEL207;
RET_LABEL207:(void)0;
}
}
var203 = var206;
goto RET_LABEL204;
RET_LABEL204:(void)0;
}
var202 = var203;
}
if (var202){
if (likely(varonce209!=NULL)) {
var210 = varonce209;
} else {
var211 = "NULL, /* empty */";
var212 = core__flat___NativeString___to_s_full(var211, 17l, 17l);
var210 = var212;
varonce209 = var210;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var210); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
/* <var_mpropdef:nullable MPropDef(MPropDef)> isa MMethodDef */
cltype214 = type_nitc__MMethodDef.color;
idtype215 = type_nitc__MMethodDef.id;
if(cltype214 >= var_mpropdef->type->table_size) {
var213 = 0;
} else {
var213 = var_mpropdef->type->type_table[cltype214] == idtype215;
}
if (unlikely(!var213)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 237);
fatal_exit(1);
}
if (var_rta == NULL) {
var217 = 0; /* is null */
} else {
var217 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_rta,((val*)NULL)) on <var_rta:nullable RapidTypeAnalysis> */
var_other = ((val*)NULL);
{
var220 = ((short int(*)(val* self, val* p0))(var_rta->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_rta, var_other); /* == on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)>*/
}
var221 = !var220;
var218 = var221;
goto RET_LABEL219;
RET_LABEL219:(void)0;
}
var217 = var218;
}
var_222 = var217;
if (var217){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_methoddefs (var_rta) on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
var225 = var_rta->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_methoddefs].val; /* _live_methoddefs on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
if (unlikely(var225 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methoddefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 79);
fatal_exit(1);
}
var223 = var225;
RET_LABEL224:(void)0;
}
}
{
var226 = core___core__HashSet___core__abstract_collection__Collection__has(var223, var_mpropdef);
}
var227 = !var226;
var216 = var227;
} else {
var216 = var_222;
}
if (var216){
if (unlikely(varonce228==NULL)) {
var229 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce230!=NULL)) {
var231 = varonce230;
} else {
var232 = "NULL, /* DEAD ";
var233 = core__flat___NativeString___to_s_full(var232, 14l, 14l);
var231 = var233;
varonce230 = var231;
}
((struct instance_core__NativeArray*)var229)->values[0]=var231;
if (likely(varonce234!=NULL)) {
var235 = varonce234;
} else {
var236 = ":";
var237 = core__flat___NativeString___to_s_full(var236, 1l, 1l);
var235 = var237;
varonce234 = var235;
}
((struct instance_core__NativeArray*)var229)->values[2]=var235;
if (likely(varonce238!=NULL)) {
var239 = varonce238;
} else {
var240 = ":";
var241 = core__flat___NativeString___to_s_full(var240, 1l, 1l);
var239 = var241;
varonce238 = var239;
}
((struct instance_core__NativeArray*)var229)->values[4]=var239;
if (likely(varonce242!=NULL)) {
var243 = varonce242;
} else {
var244 = " */";
var245 = core__flat___NativeString___to_s_full(var244, 3l, 3l);
var243 = var245;
varonce242 = var243;
}
((struct instance_core__NativeArray*)var229)->values[6]=var243;
} else {
var229 = varonce228;
varonce228 = NULL;
}
{
{ /* Inline model#MClass#intro_mmodule (var_mclass) on <var_mclass:MClass> */
var248 = var_mclass->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_mclass:MClass> */
if (unlikely(var248 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 380);
fatal_exit(1);
}
var246 = var248;
RET_LABEL247:(void)0;
}
}
{
var249 = ((val*(*)(val* self))(var246->class->vft[COLOR_core__abstract_text__Object__to_s]))(var246); /* to_s on <var246:MModule>*/
}
((struct instance_core__NativeArray*)var229)->values[1]=var249;
{
var250 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclass); /* to_s on <var_mclass:MClass>*/
}
((struct instance_core__NativeArray*)var229)->values[3]=var250;
{
var251 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:nullable MPropDef(MMethodDef)>*/
}
((struct instance_core__NativeArray*)var229)->values[5]=var251;
{
var252 = ((val*(*)(val* self))(var229->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var229); /* native_to_s on <var229:NativeArray[String]>*/
}
varonce228 = var229;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var252); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
goto BREAK_label253;
} else {
}
{
var254 = nitc__separate_compiler___MMethodDef___virtual_runtime_function(var_mpropdef);
}
var_rf = var254;
{
var255 = nitc___nitc__AbstractRuntimeFunction___c_name(var_rf);
}
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v, var255); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce256==NULL)) {
var257 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce258!=NULL)) {
var259 = varonce258;
} else {
var260 = "(nitmethod_t)";
var261 = core__flat___NativeString___to_s_full(var260, 13l, 13l);
var259 = var261;
varonce258 = var259;
}
((struct instance_core__NativeArray*)var257)->values[0]=var259;
if (likely(varonce262!=NULL)) {
var263 = varonce262;
} else {
var264 = ", /* pointer to ";
var265 = core__flat___NativeString___to_s_full(var264, 16l, 16l);
var263 = var265;
varonce262 = var263;
}
((struct instance_core__NativeArray*)var257)->values[2]=var263;
if (likely(varonce266!=NULL)) {
var267 = varonce266;
} else {
var268 = " */";
var269 = core__flat___NativeString___to_s_full(var268, 3l, 3l);
var267 = var269;
varonce266 = var267;
}
((struct instance_core__NativeArray*)var257)->values[4]=var267;
} else {
var257 = varonce256;
varonce256 = NULL;
}
{
var270 = nitc___nitc__AbstractRuntimeFunction___c_name(var_rf);
}
((struct instance_core__NativeArray*)var257)->values[1]=var270;
{
var271 = nitc___nitc__MPropDef___nitc__model_base__MEntity__full_name(var_mpropdef);
}
((struct instance_core__NativeArray*)var257)->values[3]=var271;
{
var272 = ((val*(*)(val* self))(var257->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var257); /* native_to_s on <var257:NativeArray[String]>*/
}
varonce256 = var257;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var272); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
BREAK_label253: (void)0;
{
var273 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var273;
}
BREAK_label: (void)0;
} else {
}
if (likely(varonce274!=NULL)) {
var275 = varonce274;
} else {
var276 = "}";
var277 = core__flat___NativeString___to_s_full(var276, 1l, 1l);
var275 = var277;
varonce274 = var275;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var275); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
}
if (likely(varonce278!=NULL)) {
var279 = varonce278;
} else {
var280 = "};";
var281 = core__flat___NativeString___to_s_full(var280, 2l, 2l);
var279 = var281;
varonce278 = var279;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var279); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce282==NULL)) {
var283 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce284!=NULL)) {
var285 = varonce284;
} else {
var286 = "const struct type_table type_table_";
var287 = core__flat___NativeString___to_s_full(var286, 35l, 35l);
var285 = var287;
varonce284 = var285;
}
((struct instance_core__NativeArray*)var283)->values[0]=var285;
if (likely(varonce288!=NULL)) {
var289 = varonce288;
} else {
var290 = " = {";
var291 = core__flat___NativeString___to_s_full(var290, 4l, 4l);
var289 = var291;
varonce288 = var289;
}
((struct instance_core__NativeArray*)var283)->values[2]=var289;
} else {
var283 = varonce282;
varonce282 = NULL;
}
((struct instance_core__NativeArray*)var283)->values[1]=var_c_name;
{
var292 = ((val*(*)(val* self))(var283->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var283); /* native_to_s on <var283:NativeArray[String]>*/
}
varonce282 = var283;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var292); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce293==NULL)) {
var294 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce295!=NULL)) {
var296 = varonce295;
} else {
var297 = ",";
var298 = core__flat___NativeString___to_s_full(var297, 1l, 1l);
var296 = var298;
varonce295 = var296;
}
((struct instance_core__NativeArray*)var294)->values[1]=var296;
} else {
var294 = varonce293;
varonce293 = NULL;
}
{
{ /* Inline array#AbstractArrayRead#length (var_class_table) on <var_class_table:Array[nullable MClass]> */
var301 = var_class_table->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_class_table:Array[nullable MClass]> */
var299 = var301;
RET_LABEL300:(void)0;
}
}
var302 = core__flat___Int___core__abstract_text__Object__to_s(var299);
((struct instance_core__NativeArray*)var294)->values[0]=var302;
{
var303 = ((val*(*)(val* self))(var294->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var294); /* native_to_s on <var294:NativeArray[String]>*/
}
varonce293 = var294;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var303); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce304!=NULL)) {
var305 = varonce304;
} else {
var306 = "{";
var307 = core__flat___NativeString___to_s_full(var306, 1l, 1l);
var305 = var307;
varonce304 = var305;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var305); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
var_308 = var_class_table;
{
var309 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_308);
}
var_310 = var309;
for(;;) {
{
var311 = ((short int(*)(val* self))((((long)var_310&3)?class_info[((long)var_310&3)]:var_310->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_310); /* is_ok on <var_310:IndexedIterator[nullable MClass]>*/
}
if (var311){
} else {
goto BREAK_label312;
}
{
var313 = ((val*(*)(val* self))((((long)var_310&3)?class_info[((long)var_310&3)]:var_310->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_310); /* item on <var_310:IndexedIterator[nullable MClass]>*/
}
var_msuper = var313;
if (var_msuper == NULL) {
var314 = 1; /* is null */
} else {
var314 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_msuper,((val*)NULL)) on <var_msuper:nullable MClass> */
var_other205 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_msuper,var_other205) on <var_msuper:nullable MClass(MClass)> */
var319 = var_msuper == var_other205;
var317 = var319;
goto RET_LABEL318;
RET_LABEL318:(void)0;
}
}
var315 = var317;
goto RET_LABEL316;
RET_LABEL316:(void)0;
}
var314 = var315;
}
if (var314){
if (likely(varonce320!=NULL)) {
var321 = varonce320;
} else {
var322 = "-1, /* empty */";
var323 = core__flat___NativeString___to_s_full(var322, 15l, 15l);
var321 = var323;
varonce320 = var321;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var321); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (unlikely(varonce324==NULL)) {
var325 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce326!=NULL)) {
var327 = varonce326;
} else {
var328 = ", /* ";
var329 = core__flat___NativeString___to_s_full(var328, 5l, 5l);
var327 = var329;
varonce326 = var327;
}
((struct instance_core__NativeArray*)var325)->values[1]=var327;
if (likely(varonce330!=NULL)) {
var331 = varonce330;
} else {
var332 = " */";
var333 = core__flat___NativeString___to_s_full(var332, 3l, 3l);
var331 = var333;
varonce330 = var331;
}
((struct instance_core__NativeArray*)var325)->values[3]=var331;
} else {
var325 = varonce324;
varonce324 = NULL;
}
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#class_ids (self) on <self:SeparateErasureCompiler> */
var336 = self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___class_ids].val; /* _class_ids on <self:SeparateErasureCompiler> */
if (unlikely(var336 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _class_ids");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 84);
fatal_exit(1);
}
var334 = var336;
RET_LABEL335:(void)0;
}
}
{
var337 = ((val*(*)(val* self, val* p0))((((long)var334&3)?class_info[((long)var334&3)]:var334->class)->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var334, var_msuper); /* [] on <var334:Map[MClass, Int]>*/
}
var339 = (long)(var337)>>2;
var338 = core__flat___Int___core__abstract_text__Object__to_s(var339);
((struct instance_core__NativeArray*)var325)->values[0]=var338;
{
var340 = ((val*(*)(val* self))(var_msuper->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_msuper); /* to_s on <var_msuper:nullable MClass(MClass)>*/
}
((struct instance_core__NativeArray*)var325)->values[2]=var340;
{
var341 = ((val*(*)(val* self))(var325->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var325); /* native_to_s on <var325:NativeArray[String]>*/
}
varonce324 = var325;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var341); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
{
((void(*)(val* self))((((long)var_310&3)?class_info[((long)var_310&3)]:var_310->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_310); /* next on <var_310:IndexedIterator[nullable MClass]>*/
}
}
BREAK_label312: (void)0;
{
((void(*)(val* self))((((long)var_310&3)?class_info[((long)var_310&3)]:var_310->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_310); /* finish on <var_310:IndexedIterator[nullable MClass]>*/
}
if (likely(varonce342!=NULL)) {
var343 = varonce342;
} else {
var344 = "}";
var345 = core__flat___NativeString___to_s_full(var344, 1l, 1l);
var343 = var345;
varonce342 = var343;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var343); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce346!=NULL)) {
var347 = varonce346;
} else {
var348 = "};";
var349 = core__flat___NativeString___to_s_full(var348, 2l, 2l);
var347 = var349;
varonce346 = var347;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var347); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
var351 = nitc__abstract_compiler___MClassType___MType__is_c_primitive(var_mtype);
}
var_352 = var351;
if (var351){
var350 = var_352;
} else {
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var355 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var355 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1163);
fatal_exit(1);
}
var353 = var355;
RET_LABEL354:(void)0;
}
}
{
{ /* Inline model#MClass#name (var353) on <var353:MClass> */
var358 = var353->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var353:MClass> */
if (unlikely(var358 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 385);
fatal_exit(1);
}
var356 = var358;
RET_LABEL357:(void)0;
}
}
if (likely(varonce359!=NULL)) {
var360 = varonce359;
} else {
var361 = "Pointer";
var362 = core__flat___NativeString___to_s_full(var361, 7l, 7l);
var360 = var362;
varonce359 = var360;
}
{
var363 = ((short int(*)(val* self, val* p0))(var356->class->vft[COLOR_core__kernel__Object___61d_61d]))(var356, var360); /* == on <var356:String>*/
}
var350 = var363;
}
if (var350){
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var366 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var366 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var364 = var366;
RET_LABEL365:(void)0;
}
}
if (unlikely(varonce367==NULL)) {
var368 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce369!=NULL)) {
var370 = varonce369;
} else {
var371 = "struct instance_";
var372 = core__flat___NativeString___to_s_full(var371, 16l, 16l);
var370 = var372;
varonce369 = var370;
}
((struct instance_core__NativeArray*)var368)->values[0]=var370;
if (likely(varonce373!=NULL)) {
var374 = varonce373;
} else {
var375 = " {";
var376 = core__flat___NativeString___to_s_full(var375, 2l, 2l);
var374 = var376;
varonce373 = var374;
}
((struct instance_core__NativeArray*)var368)->values[2]=var374;
} else {
var368 = varonce367;
varonce367 = NULL;
}
((struct instance_core__NativeArray*)var368)->values[1]=var_c_name;
{
var377 = ((val*(*)(val* self))(var368->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var368); /* native_to_s on <var368:NativeArray[String]>*/
}
varonce367 = var368;
{
nitc___nitc__CodeWriter___add_decl(var364, var377); /* Direct call abstract_compiler#CodeWriter#add_decl on <var364:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var380 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var380 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var378 = var380;
RET_LABEL379:(void)0;
}
}
if (likely(varonce381!=NULL)) {
var382 = varonce381;
} else {
var383 = "const struct class *class;";
var384 = core__flat___NativeString___to_s_full(var383, 26l, 26l);
var382 = var384;
varonce381 = var382;
}
{
nitc___nitc__CodeWriter___add_decl(var378, var382); /* Direct call abstract_compiler#CodeWriter#add_decl on <var378:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var387 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var387 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var385 = var387;
RET_LABEL386:(void)0;
}
}
if (unlikely(varonce388==NULL)) {
var389 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce390!=NULL)) {
var391 = varonce390;
} else {
var392 = " value;";
var393 = core__flat___NativeString___to_s_full(var392, 7l, 7l);
var391 = var393;
varonce390 = var391;
}
((struct instance_core__NativeArray*)var389)->values[1]=var391;
} else {
var389 = varonce388;
varonce388 = NULL;
}
{
var394 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var389)->values[0]=var394;
{
var395 = ((val*(*)(val* self))(var389->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var389); /* native_to_s on <var389:NativeArray[String]>*/
}
varonce388 = var389;
{
nitc___nitc__CodeWriter___add_decl(var385, var395); /* Direct call abstract_compiler#CodeWriter#add_decl on <var385:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var398 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var398 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var396 = var398;
RET_LABEL397:(void)0;
}
}
if (likely(varonce399!=NULL)) {
var400 = varonce399;
} else {
var401 = "};";
var402 = core__flat___NativeString___to_s_full(var401, 2l, 2l);
var400 = var402;
varonce399 = var400;
}
{
nitc___nitc__CodeWriter___add_decl(var396, var400); /* Direct call abstract_compiler#CodeWriter#add_decl on <var396:CodeWriter>*/
}
if (unlikely(varonce403==NULL)) {
var404 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce405!=NULL)) {
var406 = varonce405;
} else {
var407 = "BOX_";
var408 = core__flat___NativeString___to_s_full(var407, 4l, 4l);
var406 = var408;
varonce405 = var406;
}
((struct instance_core__NativeArray*)var404)->values[0]=var406;
} else {
var404 = varonce403;
varonce403 = NULL;
}
((struct instance_core__NativeArray*)var404)->values[1]=var_c_name;
{
var409 = ((val*(*)(val* self))(var404->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var404); /* native_to_s on <var404:NativeArray[String]>*/
}
varonce403 = var404;
if (unlikely(varonce410==NULL)) {
var411 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce412!=NULL)) {
var413 = varonce412;
} else {
var414 = "val* BOX_";
var415 = core__flat___NativeString___to_s_full(var414, 9l, 9l);
var413 = var415;
varonce412 = var413;
}
((struct instance_core__NativeArray*)var411)->values[0]=var413;
if (likely(varonce416!=NULL)) {
var417 = varonce416;
} else {
var418 = "(";
var419 = core__flat___NativeString___to_s_full(var418, 1l, 1l);
var417 = var419;
varonce416 = var417;
}
((struct instance_core__NativeArray*)var411)->values[2]=var417;
if (likely(varonce420!=NULL)) {
var421 = varonce420;
} else {
var422 = ");";
var423 = core__flat___NativeString___to_s_full(var422, 2l, 2l);
var421 = var423;
varonce420 = var421;
}
((struct instance_core__NativeArray*)var411)->values[4]=var421;
} else {
var411 = varonce410;
varonce410 = NULL;
}
((struct instance_core__NativeArray*)var411)->values[1]=var_c_name;
{
var424 = nitc__abstract_compiler___MClassType___MType__ctype_extern(var_mtype);
}
((struct instance_core__NativeArray*)var411)->values[3]=var424;
{
var425 = ((val*(*)(val* self))(var411->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var411); /* native_to_s on <var411:NativeArray[String]>*/
}
varonce410 = var411;
{
nitc___nitc__AbstractCompiler___provide_declaration(self, var409, var425); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateErasureCompiler>*/
}
if (unlikely(varonce426==NULL)) {
var427 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce428!=NULL)) {
var429 = varonce428;
} else {
var430 = "/* allocate ";
var431 = core__flat___NativeString___to_s_full(var430, 12l, 12l);
var429 = var431;
varonce428 = var429;
}
((struct instance_core__NativeArray*)var427)->values[0]=var429;
if (likely(varonce432!=NULL)) {
var433 = varonce432;
} else {
var434 = " */";
var435 = core__flat___NativeString___to_s_full(var434, 3l, 3l);
var433 = var435;
varonce432 = var433;
}
((struct instance_core__NativeArray*)var427)->values[2]=var433;
} else {
var427 = varonce426;
varonce426 = NULL;
}
{
var436 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var427)->values[1]=var436;
{
var437 = ((val*(*)(val* self))(var427->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var427); /* native_to_s on <var427:NativeArray[String]>*/
}
varonce426 = var427;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var437); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce438==NULL)) {
var439 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce440!=NULL)) {
var441 = varonce440;
} else {
var442 = "val* BOX_";
var443 = core__flat___NativeString___to_s_full(var442, 9l, 9l);
var441 = var443;
varonce440 = var441;
}
((struct instance_core__NativeArray*)var439)->values[0]=var441;
if (likely(varonce444!=NULL)) {
var445 = varonce444;
} else {
var446 = "(";
var447 = core__flat___NativeString___to_s_full(var446, 1l, 1l);
var445 = var447;
varonce444 = var445;
}
((struct instance_core__NativeArray*)var439)->values[2]=var445;
if (likely(varonce448!=NULL)) {
var449 = varonce448;
} else {
var450 = " value) {";
var451 = core__flat___NativeString___to_s_full(var450, 9l, 9l);
var449 = var451;
varonce448 = var449;
}
((struct instance_core__NativeArray*)var439)->values[4]=var449;
} else {
var439 = varonce438;
varonce438 = NULL;
}
{
var452 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var439)->values[1]=var452;
{
var453 = nitc__abstract_compiler___MClassType___MType__ctype_extern(var_mtype);
}
((struct instance_core__NativeArray*)var439)->values[3]=var453;
{
var454 = ((val*(*)(val* self))(var439->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var439); /* native_to_s on <var439:NativeArray[String]>*/
}
varonce438 = var439;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var454); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce455==NULL)) {
var456 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce457!=NULL)) {
var458 = varonce457;
} else {
var459 = "struct instance_";
var460 = core__flat___NativeString___to_s_full(var459, 16l, 16l);
var458 = var460;
varonce457 = var458;
}
((struct instance_core__NativeArray*)var456)->values[0]=var458;
if (likely(varonce461!=NULL)) {
var462 = varonce461;
} else {
var463 = "*res = nit_alloc(sizeof(struct instance_";
var464 = core__flat___NativeString___to_s_full(var463, 40l, 40l);
var462 = var464;
varonce461 = var462;
}
((struct instance_core__NativeArray*)var456)->values[2]=var462;
if (likely(varonce465!=NULL)) {
var466 = varonce465;
} else {
var467 = "));";
var468 = core__flat___NativeString___to_s_full(var467, 3l, 3l);
var466 = var468;
varonce465 = var466;
}
((struct instance_core__NativeArray*)var456)->values[4]=var466;
} else {
var456 = varonce455;
varonce455 = NULL;
}
((struct instance_core__NativeArray*)var456)->values[1]=var_c_name;
((struct instance_core__NativeArray*)var456)->values[3]=var_c_name;
{
var469 = ((val*(*)(val* self))(var456->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var456); /* native_to_s on <var456:NativeArray[String]>*/
}
varonce455 = var456;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var469); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce470==NULL)) {
var471 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce472!=NULL)) {
var473 = varonce472;
} else {
var474 = "class_";
var475 = core__flat___NativeString___to_s_full(var474, 6l, 6l);
var473 = var475;
varonce472 = var473;
}
((struct instance_core__NativeArray*)var471)->values[0]=var473;
} else {
var471 = varonce470;
varonce470 = NULL;
}
((struct instance_core__NativeArray*)var471)->values[1]=var_c_name;
{
var476 = ((val*(*)(val* self))(var471->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var471); /* native_to_s on <var471:NativeArray[String]>*/
}
varonce470 = var471;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v, var476); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce477==NULL)) {
var478 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce479!=NULL)) {
var480 = varonce479;
} else {
var481 = "res->class = &class_";
var482 = core__flat___NativeString___to_s_full(var481, 20l, 20l);
var480 = var482;
varonce479 = var480;
}
((struct instance_core__NativeArray*)var478)->values[0]=var480;
if (likely(varonce483!=NULL)) {
var484 = varonce483;
} else {
var485 = ";";
var486 = core__flat___NativeString___to_s_full(var485, 1l, 1l);
var484 = var486;
varonce483 = var484;
}
((struct instance_core__NativeArray*)var478)->values[2]=var484;
} else {
var478 = varonce477;
varonce477 = NULL;
}
((struct instance_core__NativeArray*)var478)->values[1]=var_c_name;
{
var487 = ((val*(*)(val* self))(var478->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var478); /* native_to_s on <var478:NativeArray[String]>*/
}
varonce477 = var478;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var487); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce488!=NULL)) {
var489 = varonce488;
} else {
var490 = "res->value = value;";
var491 = core__flat___NativeString___to_s_full(var490, 19l, 19l);
var489 = var491;
varonce488 = var489;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var489); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce492!=NULL)) {
var493 = varonce492;
} else {
var494 = "return (val*)res;";
var495 = core__flat___NativeString___to_s_full(var494, 17l, 17l);
var493 = var495;
varonce492 = var493;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var493); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce496!=NULL)) {
var497 = varonce496;
} else {
var498 = "}";
var499 = core__flat___NativeString___to_s_full(var498, 1l, 1l);
var497 = var499;
varonce496 = var497;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var497); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var502 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var502 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1163);
fatal_exit(1);
}
var500 = var502;
RET_LABEL501:(void)0;
}
}
{
{ /* Inline model#MClass#name (var500) on <var500:MClass> */
var505 = var500->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var500:MClass> */
if (unlikely(var505 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 385);
fatal_exit(1);
}
var503 = var505;
RET_LABEL504:(void)0;
}
}
if (likely(varonce506!=NULL)) {
var507 = varonce506;
} else {
var508 = "Pointer";
var509 = core__flat___NativeString___to_s_full(var508, 7l, 7l);
var507 = var509;
varonce506 = var507;
}
{
{ /* Inline kernel#Object#!= (var503,var507) on <var503:String> */
var_other = var507;
{
var512 = ((short int(*)(val* self, val* p0))(var503->class->vft[COLOR_core__kernel__Object___61d_61d]))(var503, var_other); /* == on <var503:String>*/
}
var513 = !var512;
var510 = var513;
goto RET_LABEL511;
RET_LABEL511:(void)0;
}
}
if (var510){
goto RET_LABEL;
} else {
}
{
var514 = nitc___nitc__SeparateErasureCompiler___nitc__abstract_compiler__AbstractCompiler__new_visitor(self);
}
var_v = var514;
if (unlikely(varonce515==NULL)) {
var516 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce517!=NULL)) {
var518 = varonce517;
} else {
var519 = "NEW_";
var520 = core__flat___NativeString___to_s_full(var519, 4l, 4l);
var518 = var520;
varonce517 = var518;
}
((struct instance_core__NativeArray*)var516)->values[0]=var518;
} else {
var516 = varonce515;
varonce515 = NULL;
}
((struct instance_core__NativeArray*)var516)->values[1]=var_c_name;
{
var521 = ((val*(*)(val* self))(var516->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var516); /* native_to_s on <var516:NativeArray[String]>*/
}
varonce515 = var516;
if (unlikely(varonce522==NULL)) {
var523 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce524!=NULL)) {
var525 = varonce524;
} else {
var526 = " NEW_";
var527 = core__flat___NativeString___to_s_full(var526, 5l, 5l);
var525 = var527;
varonce524 = var525;
}
((struct instance_core__NativeArray*)var523)->values[1]=var525;
if (likely(varonce528!=NULL)) {
var529 = varonce528;
} else {
var530 = "();";
var531 = core__flat___NativeString___to_s_full(var530, 3l, 3l);
var529 = var531;
varonce528 = var529;
}
((struct instance_core__NativeArray*)var523)->values[3]=var529;
} else {
var523 = varonce522;
varonce522 = NULL;
}
{
var532 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var523)->values[0]=var532;
((struct instance_core__NativeArray*)var523)->values[2]=var_c_name;
{
var533 = ((val*(*)(val* self))(var523->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var523); /* native_to_s on <var523:NativeArray[String]>*/
}
varonce522 = var523;
{
nitc___nitc__AbstractCompiler___provide_declaration(self, var521, var533); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateErasureCompiler>*/
}
if (unlikely(varonce534==NULL)) {
var535 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce536!=NULL)) {
var537 = varonce536;
} else {
var538 = "/* allocate ";
var539 = core__flat___NativeString___to_s_full(var538, 12l, 12l);
var537 = var539;
varonce536 = var537;
}
((struct instance_core__NativeArray*)var535)->values[0]=var537;
if (likely(varonce540!=NULL)) {
var541 = varonce540;
} else {
var542 = " */";
var543 = core__flat___NativeString___to_s_full(var542, 3l, 3l);
var541 = var543;
varonce540 = var541;
}
((struct instance_core__NativeArray*)var535)->values[2]=var541;
} else {
var535 = varonce534;
varonce534 = NULL;
}
{
var544 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var535)->values[1]=var544;
{
var545 = ((val*(*)(val* self))(var535->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var535); /* native_to_s on <var535:NativeArray[String]>*/
}
varonce534 = var535;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var545); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce546==NULL)) {
var547 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce548!=NULL)) {
var549 = varonce548;
} else {
var550 = " NEW_";
var551 = core__flat___NativeString___to_s_full(var550, 5l, 5l);
var549 = var551;
varonce548 = var549;
}
((struct instance_core__NativeArray*)var547)->values[1]=var549;
if (likely(varonce552!=NULL)) {
var553 = varonce552;
} else {
var554 = "() {";
var555 = core__flat___NativeString___to_s_full(var554, 4l, 4l);
var553 = var555;
varonce552 = var553;
}
((struct instance_core__NativeArray*)var547)->values[3]=var553;
} else {
var547 = varonce546;
varonce546 = NULL;
}
{
var556 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var547)->values[0]=var556;
((struct instance_core__NativeArray*)var547)->values[2]=var_c_name;
{
var557 = ((val*(*)(val* self))(var547->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var547); /* native_to_s on <var547:NativeArray[String]>*/
}
varonce546 = var547;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var557); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (var_is_dead){
if (unlikely(varonce558==NULL)) {
var559 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce560!=NULL)) {
var561 = varonce560;
} else {
var562 = " is DEAD";
var563 = core__flat___NativeString___to_s_full(var562, 8l, 8l);
var561 = var563;
varonce560 = var561;
}
((struct instance_core__NativeArray*)var559)->values[1]=var561;
} else {
var559 = varonce558;
varonce558 = NULL;
}
{
var564 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclass); /* to_s on <var_mclass:MClass>*/
}
((struct instance_core__NativeArray*)var559)->values[0]=var564;
{
var565 = ((val*(*)(val* self))(var559->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var559); /* native_to_s on <var559:NativeArray[String]>*/
}
varonce558 = var559;
{
nitc___nitc__AbstractCompilerVisitor___add_abort(var_v, var565); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (likely(varonce566!=NULL)) {
var567 = varonce566;
} else {
var568 = "self";
var569 = core__flat___NativeString___to_s_full(var568, 4l, 4l);
var567 = var569;
varonce566 = var567;
}
{
var570 = nitc___nitc__AbstractCompilerVisitor___new_named_var(var_v, var_mtype, var567);
}
var_res = var570;
{
{ /* Inline abstract_compiler#RuntimeVariable#is_exact= (var_res,1) on <var_res:RuntimeVariable> */
var_res->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___is_exact].s = 1; /* _is_exact on <var_res:RuntimeVariable> */
RET_LABEL571:(void)0;
}
}
if (unlikely(varonce572==NULL)) {
var573 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce574!=NULL)) {
var575 = varonce574;
} else {
var576 = " = nit_alloc(sizeof(struct instance_";
var577 = core__flat___NativeString___to_s_full(var576, 36l, 36l);
var575 = var577;
varonce574 = var575;
}
((struct instance_core__NativeArray*)var573)->values[1]=var575;
if (likely(varonce578!=NULL)) {
var579 = varonce578;
} else {
var580 = "));";
var581 = core__flat___NativeString___to_s_full(var580, 3l, 3l);
var579 = var581;
varonce578 = var579;
}
((struct instance_core__NativeArray*)var573)->values[3]=var579;
} else {
var573 = varonce572;
varonce572 = NULL;
}
{
var582 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var573)->values[0]=var582;
{
var583 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var573)->values[2]=var583;
{
var584 = ((val*(*)(val* self))(var573->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var573); /* native_to_s on <var573:NativeArray[String]>*/
}
varonce572 = var573;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var584); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce585==NULL)) {
var586 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce587!=NULL)) {
var588 = varonce587;
} else {
var589 = "class_";
var590 = core__flat___NativeString___to_s_full(var589, 6l, 6l);
var588 = var590;
varonce587 = var588;
}
((struct instance_core__NativeArray*)var586)->values[0]=var588;
} else {
var586 = varonce585;
varonce585 = NULL;
}
((struct instance_core__NativeArray*)var586)->values[1]=var_c_name;
{
var591 = ((val*(*)(val* self))(var586->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var586); /* native_to_s on <var586:NativeArray[String]>*/
}
varonce585 = var586;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v, var591); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce592==NULL)) {
var593 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce594!=NULL)) {
var595 = varonce594;
} else {
var596 = "->class = &class_";
var597 = core__flat___NativeString___to_s_full(var596, 17l, 17l);
var595 = var597;
varonce594 = var595;
}
((struct instance_core__NativeArray*)var593)->values[1]=var595;
if (likely(varonce598!=NULL)) {
var599 = varonce598;
} else {
var600 = ";";
var601 = core__flat___NativeString___to_s_full(var600, 1l, 1l);
var599 = var601;
varonce598 = var599;
}
((struct instance_core__NativeArray*)var593)->values[3]=var599;
} else {
var593 = varonce592;
varonce592 = NULL;
}
{
var602 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var593)->values[0]=var602;
((struct instance_core__NativeArray*)var593)->values[2]=var_c_name;
{
var603 = ((val*(*)(val* self))(var593->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var593); /* native_to_s on <var593:NativeArray[String]>*/
}
varonce592 = var593;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var603); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce604==NULL)) {
var605 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce606!=NULL)) {
var607 = varonce606;
} else {
var608 = "((struct instance_";
var609 = core__flat___NativeString___to_s_full(var608, 18l, 18l);
var607 = var609;
varonce606 = var607;
}
((struct instance_core__NativeArray*)var605)->values[0]=var607;
if (likely(varonce610!=NULL)) {
var611 = varonce610;
} else {
var612 = "*)";
var613 = core__flat___NativeString___to_s_full(var612, 2l, 2l);
var611 = var613;
varonce610 = var611;
}
((struct instance_core__NativeArray*)var605)->values[2]=var611;
if (likely(varonce614!=NULL)) {
var615 = varonce614;
} else {
var616 = ")->value = NULL;";
var617 = core__flat___NativeString___to_s_full(var616, 16l, 16l);
var615 = var617;
varonce614 = var615;
}
((struct instance_core__NativeArray*)var605)->values[4]=var615;
} else {
var605 = varonce604;
varonce604 = NULL;
}
{
var618 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var605)->values[1]=var618;
{
var619 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var605)->values[3]=var619;
{
var620 = ((val*(*)(val* self))(var605->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var605); /* native_to_s on <var605:NativeArray[String]>*/
}
varonce604 = var605;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var620); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce621==NULL)) {
var622 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce623!=NULL)) {
var624 = varonce623;
} else {
var625 = "return ";
var626 = core__flat___NativeString___to_s_full(var625, 7l, 7l);
var624 = var626;
varonce623 = var624;
}
((struct instance_core__NativeArray*)var622)->values[0]=var624;
if (likely(varonce627!=NULL)) {
var628 = varonce627;
} else {
var629 = ";";
var630 = core__flat___NativeString___to_s_full(var629, 1l, 1l);
var628 = var630;
varonce627 = var628;
}
((struct instance_core__NativeArray*)var622)->values[2]=var628;
} else {
var622 = varonce621;
varonce621 = NULL;
}
{
var631 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var622)->values[1]=var631;
{
var632 = ((val*(*)(val* self))(var622->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var622); /* native_to_s on <var622:NativeArray[String]>*/
}
varonce621 = var622;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var632); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
}
if (likely(varonce633!=NULL)) {
var634 = varonce633;
} else {
var635 = "}";
var636 = core__flat___NativeString___to_s_full(var635, 1l, 1l);
var634 = var636;
varonce633 = var634;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var634); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
{
{ /* Inline model#MClass#name (var_mclass) on <var_mclass:MClass> */
var639 = var_mclass->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var_mclass:MClass> */
if (unlikely(var639 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 385);
fatal_exit(1);
}
var637 = var639;
RET_LABEL638:(void)0;
}
}
if (likely(varonce640!=NULL)) {
var641 = varonce640;
} else {
var642 = "NativeArray";
var643 = core__flat___NativeString___to_s_full(var642, 11l, 11l);
var641 = var643;
varonce640 = var641;
}
{
var644 = ((short int(*)(val* self, val* p0))(var637->class->vft[COLOR_core__kernel__Object___61d_61d]))(var637, var641); /* == on <var637:String>*/
}
if (var644){
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var647 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var647 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var645 = var647;
RET_LABEL646:(void)0;
}
}
if (unlikely(varonce648==NULL)) {
var649 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce650!=NULL)) {
var651 = varonce650;
} else {
var652 = "struct instance_";
var653 = core__flat___NativeString___to_s_full(var652, 16l, 16l);
var651 = var653;
varonce650 = var651;
}
((struct instance_core__NativeArray*)var649)->values[0]=var651;
if (likely(varonce654!=NULL)) {
var655 = varonce654;
} else {
var656 = " {";
var657 = core__flat___NativeString___to_s_full(var656, 2l, 2l);
var655 = var657;
varonce654 = var655;
}
((struct instance_core__NativeArray*)var649)->values[2]=var655;
} else {
var649 = varonce648;
varonce648 = NULL;
}
((struct instance_core__NativeArray*)var649)->values[1]=var_c_name;
{
var658 = ((val*(*)(val* self))(var649->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var649); /* native_to_s on <var649:NativeArray[String]>*/
}
varonce648 = var649;
{
nitc___nitc__CodeWriter___add_decl(var645, var658); /* Direct call abstract_compiler#CodeWriter#add_decl on <var645:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var661 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var661 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var659 = var661;
RET_LABEL660:(void)0;
}
}
if (likely(varonce662!=NULL)) {
var663 = varonce662;
} else {
var664 = "const struct class *class;";
var665 = core__flat___NativeString___to_s_full(var664, 26l, 26l);
var663 = var665;
varonce662 = var663;
}
{
nitc___nitc__CodeWriter___add_decl(var659, var663); /* Direct call abstract_compiler#CodeWriter#add_decl on <var659:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var668 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var668 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var666 = var668;
RET_LABEL667:(void)0;
}
}
if (likely(varonce669!=NULL)) {
var670 = varonce669;
} else {
var671 = "int length;";
var672 = core__flat___NativeString___to_s_full(var671, 11l, 11l);
var670 = var672;
varonce669 = var670;
}
{
nitc___nitc__CodeWriter___add_decl(var666, var670); /* Direct call abstract_compiler#CodeWriter#add_decl on <var666:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var675 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var675 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var673 = var675;
RET_LABEL674:(void)0;
}
}
if (likely(varonce676!=NULL)) {
var677 = varonce676;
} else {
var678 = "val* values[];";
var679 = core__flat___NativeString___to_s_full(var678, 14l, 14l);
var677 = var679;
varonce676 = var677;
}
{
nitc___nitc__CodeWriter___add_decl(var673, var677); /* Direct call abstract_compiler#CodeWriter#add_decl on <var673:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var682 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var682 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var680 = var682;
RET_LABEL681:(void)0;
}
}
if (likely(varonce683!=NULL)) {
var684 = varonce683;
} else {
var685 = "};";
var686 = core__flat___NativeString___to_s_full(var685, 2l, 2l);
var684 = var686;
varonce683 = var684;
}
{
nitc___nitc__CodeWriter___add_decl(var680, var684); /* Direct call abstract_compiler#CodeWriter#add_decl on <var680:CodeWriter>*/
}
if (unlikely(varonce687==NULL)) {
var688 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce689!=NULL)) {
var690 = varonce689;
} else {
var691 = "NEW_";
var692 = core__flat___NativeString___to_s_full(var691, 4l, 4l);
var690 = var692;
varonce689 = var690;
}
((struct instance_core__NativeArray*)var688)->values[0]=var690;
} else {
var688 = varonce687;
varonce687 = NULL;
}
((struct instance_core__NativeArray*)var688)->values[1]=var_c_name;
{
var693 = ((val*(*)(val* self))(var688->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var688); /* native_to_s on <var688:NativeArray[String]>*/
}
varonce687 = var688;
if (unlikely(varonce694==NULL)) {
var695 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce696!=NULL)) {
var697 = varonce696;
} else {
var698 = " NEW_";
var699 = core__flat___NativeString___to_s_full(var698, 5l, 5l);
var697 = var699;
varonce696 = var697;
}
((struct instance_core__NativeArray*)var695)->values[1]=var697;
if (likely(varonce700!=NULL)) {
var701 = varonce700;
} else {
var702 = "(int length);";
var703 = core__flat___NativeString___to_s_full(var702, 13l, 13l);
var701 = var703;
varonce700 = var701;
}
((struct instance_core__NativeArray*)var695)->values[3]=var701;
} else {
var695 = varonce694;
varonce694 = NULL;
}
{
var704 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var695)->values[0]=var704;
((struct instance_core__NativeArray*)var695)->values[2]=var_c_name;
{
var705 = ((val*(*)(val* self))(var695->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var695); /* native_to_s on <var695:NativeArray[String]>*/
}
varonce694 = var695;
{
nitc___nitc__AbstractCompiler___provide_declaration(self, var693, var705); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateErasureCompiler>*/
}
if (unlikely(varonce706==NULL)) {
var707 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce708!=NULL)) {
var709 = varonce708;
} else {
var710 = "/* allocate ";
var711 = core__flat___NativeString___to_s_full(var710, 12l, 12l);
var709 = var711;
varonce708 = var709;
}
((struct instance_core__NativeArray*)var707)->values[0]=var709;
if (likely(varonce712!=NULL)) {
var713 = varonce712;
} else {
var714 = " */";
var715 = core__flat___NativeString___to_s_full(var714, 3l, 3l);
var713 = var715;
varonce712 = var713;
}
((struct instance_core__NativeArray*)var707)->values[2]=var713;
} else {
var707 = varonce706;
varonce706 = NULL;
}
{
var716 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var707)->values[1]=var716;
{
var717 = ((val*(*)(val* self))(var707->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var707); /* native_to_s on <var707:NativeArray[String]>*/
}
varonce706 = var707;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var717); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce718==NULL)) {
var719 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce720!=NULL)) {
var721 = varonce720;
} else {
var722 = " NEW_";
var723 = core__flat___NativeString___to_s_full(var722, 5l, 5l);
var721 = var723;
varonce720 = var721;
}
((struct instance_core__NativeArray*)var719)->values[1]=var721;
if (likely(varonce724!=NULL)) {
var725 = varonce724;
} else {
var726 = "(int length) {";
var727 = core__flat___NativeString___to_s_full(var726, 14l, 14l);
var725 = var727;
varonce724 = var725;
}
((struct instance_core__NativeArray*)var719)->values[3]=var725;
} else {
var719 = varonce718;
varonce718 = NULL;
}
{
var728 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var719)->values[0]=var728;
((struct instance_core__NativeArray*)var719)->values[2]=var_c_name;
{
var729 = ((val*(*)(val* self))(var719->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var719); /* native_to_s on <var719:NativeArray[String]>*/
}
varonce718 = var719;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var729); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce730!=NULL)) {
var731 = varonce730;
} else {
var732 = "self";
var733 = core__flat___NativeString___to_s_full(var732, 4l, 4l);
var731 = var733;
varonce730 = var731;
}
{
var734 = nitc___nitc__AbstractCompilerVisitor___get_name(var_v, var731);
}
var_res735 = var734;
if (unlikely(varonce736==NULL)) {
var737 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce738!=NULL)) {
var739 = varonce738;
} else {
var740 = "struct instance_";
var741 = core__flat___NativeString___to_s_full(var740, 16l, 16l);
var739 = var741;
varonce738 = var739;
}
((struct instance_core__NativeArray*)var737)->values[0]=var739;
if (likely(varonce742!=NULL)) {
var743 = varonce742;
} else {
var744 = " *";
var745 = core__flat___NativeString___to_s_full(var744, 2l, 2l);
var743 = var745;
varonce742 = var743;
}
((struct instance_core__NativeArray*)var737)->values[2]=var743;
if (likely(varonce746!=NULL)) {
var747 = varonce746;
} else {
var748 = ";";
var749 = core__flat___NativeString___to_s_full(var748, 1l, 1l);
var747 = var749;
varonce746 = var747;
}
((struct instance_core__NativeArray*)var737)->values[4]=var747;
} else {
var737 = varonce736;
varonce736 = NULL;
}
((struct instance_core__NativeArray*)var737)->values[1]=var_c_name;
((struct instance_core__NativeArray*)var737)->values[3]=var_res735;
{
var750 = ((val*(*)(val* self))(var737->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var737); /* native_to_s on <var737:NativeArray[String]>*/
}
varonce736 = var737;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var750); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
var751 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MClassType__arguments]))(var_mtype); /* arguments on <var_mtype:MClassType>*/
}
{
var752 = core___core__SequenceRead___Collection__first(var751);
}
var_mtype_elt = var752;
if (unlikely(varonce753==NULL)) {
var754 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce755!=NULL)) {
var756 = varonce755;
} else {
var757 = " = nit_alloc(sizeof(struct instance_";
var758 = core__flat___NativeString___to_s_full(var757, 36l, 36l);
var756 = var758;
varonce755 = var756;
}
((struct instance_core__NativeArray*)var754)->values[1]=var756;
if (likely(varonce759!=NULL)) {
var760 = varonce759;
} else {
var761 = ") + length*sizeof(";
var762 = core__flat___NativeString___to_s_full(var761, 18l, 18l);
var760 = var762;
varonce759 = var760;
}
((struct instance_core__NativeArray*)var754)->values[3]=var760;
if (likely(varonce763!=NULL)) {
var764 = varonce763;
} else {
var765 = "));";
var766 = core__flat___NativeString___to_s_full(var765, 3l, 3l);
var764 = var766;
varonce763 = var764;
}
((struct instance_core__NativeArray*)var754)->values[5]=var764;
} else {
var754 = varonce753;
varonce753 = NULL;
}
((struct instance_core__NativeArray*)var754)->values[0]=var_res735;
((struct instance_core__NativeArray*)var754)->values[2]=var_c_name;
{
var767 = ((val*(*)(val* self))(var_mtype_elt->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var_mtype_elt); /* ctype on <var_mtype_elt:MType>*/
}
((struct instance_core__NativeArray*)var754)->values[4]=var767;
{
var768 = ((val*(*)(val* self))(var754->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var754); /* native_to_s on <var754:NativeArray[String]>*/
}
varonce753 = var754;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var768); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce769==NULL)) {
var770 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce771!=NULL)) {
var772 = varonce771;
} else {
var773 = "class_";
var774 = core__flat___NativeString___to_s_full(var773, 6l, 6l);
var772 = var774;
varonce771 = var772;
}
((struct instance_core__NativeArray*)var770)->values[0]=var772;
} else {
var770 = varonce769;
varonce769 = NULL;
}
((struct instance_core__NativeArray*)var770)->values[1]=var_c_name;
{
var775 = ((val*(*)(val* self))(var770->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var770); /* native_to_s on <var770:NativeArray[String]>*/
}
varonce769 = var770;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v, var775); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce776==NULL)) {
var777 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce778!=NULL)) {
var779 = varonce778;
} else {
var780 = "->class = &class_";
var781 = core__flat___NativeString___to_s_full(var780, 17l, 17l);
var779 = var781;
varonce778 = var779;
}
((struct instance_core__NativeArray*)var777)->values[1]=var779;
if (likely(varonce782!=NULL)) {
var783 = varonce782;
} else {
var784 = ";";
var785 = core__flat___NativeString___to_s_full(var784, 1l, 1l);
var783 = var785;
varonce782 = var783;
}
((struct instance_core__NativeArray*)var777)->values[3]=var783;
} else {
var777 = varonce776;
varonce776 = NULL;
}
((struct instance_core__NativeArray*)var777)->values[0]=var_res735;
((struct instance_core__NativeArray*)var777)->values[2]=var_c_name;
{
var786 = ((val*(*)(val* self))(var777->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var777); /* native_to_s on <var777:NativeArray[String]>*/
}
varonce776 = var777;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var786); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce787==NULL)) {
var788 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce789!=NULL)) {
var790 = varonce789;
} else {
var791 = "->length = length;";
var792 = core__flat___NativeString___to_s_full(var791, 18l, 18l);
var790 = var792;
varonce789 = var790;
}
((struct instance_core__NativeArray*)var788)->values[1]=var790;
} else {
var788 = varonce787;
varonce787 = NULL;
}
((struct instance_core__NativeArray*)var788)->values[0]=var_res735;
{
var793 = ((val*(*)(val* self))(var788->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var788); /* native_to_s on <var788:NativeArray[String]>*/
}
varonce787 = var788;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var793); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce794==NULL)) {
var795 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce796!=NULL)) {
var797 = varonce796;
} else {
var798 = "return (val*)";
var799 = core__flat___NativeString___to_s_full(var798, 13l, 13l);
var797 = var799;
varonce796 = var797;
}
((struct instance_core__NativeArray*)var795)->values[0]=var797;
if (likely(varonce800!=NULL)) {
var801 = varonce800;
} else {
var802 = ";";
var803 = core__flat___NativeString___to_s_full(var802, 1l, 1l);
var801 = var803;
varonce800 = var801;
}
((struct instance_core__NativeArray*)var795)->values[2]=var801;
} else {
var795 = varonce794;
varonce794 = NULL;
}
((struct instance_core__NativeArray*)var795)->values[1]=var_res735;
{
var804 = ((val*(*)(val* self))(var795->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var795); /* native_to_s on <var795:NativeArray[String]>*/
}
varonce794 = var795;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var804); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce805!=NULL)) {
var806 = varonce805;
} else {
var807 = "}";
var808 = core__flat___NativeString___to_s_full(var807, 1l, 1l);
var806 = var808;
varonce805 = var806;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var806); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var812 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var812 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1163);
fatal_exit(1);
}
var810 = var812;
RET_LABEL811:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var810) on <var810:MClass> */
var815 = var810->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var810:MClass> */
if (unlikely(var815 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 459);
fatal_exit(1);
}
var813 = var815;
RET_LABEL814:(void)0;
}
}
var816 = glob_sys;
{
var817 = nitc__model___core__Sys___extern_kind(var816);
}
{
{ /* Inline kernel#Object#== (var813,var817) on <var813:MClassKind> */
var_other205 = var817;
{
{ /* Inline kernel#Object#is_same_instance (var813,var_other205) on <var813:MClassKind> */
var822 = var813 == var_other205;
var820 = var822;
goto RET_LABEL821;
RET_LABEL821:(void)0;
}
}
var818 = var820;
goto RET_LABEL819;
RET_LABEL819:(void)0;
}
}
var_823 = var818;
if (var818){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var826 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var826 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1163);
fatal_exit(1);
}
var824 = var826;
RET_LABEL825:(void)0;
}
}
{
{ /* Inline model#MClass#name (var824) on <var824:MClass> */
var829 = var824->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var824:MClass> */
if (unlikely(var829 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 385);
fatal_exit(1);
}
var827 = var829;
RET_LABEL828:(void)0;
}
}
if (likely(varonce830!=NULL)) {
var831 = varonce830;
} else {
var832 = "NativeString";
var833 = core__flat___NativeString___to_s_full(var832, 12l, 12l);
var831 = var833;
varonce830 = var831;
}
{
{ /* Inline kernel#Object#!= (var827,var831) on <var827:String> */
var_other = var831;
{
var836 = ((short int(*)(val* self, val* p0))(var827->class->vft[COLOR_core__kernel__Object___61d_61d]))(var827, var_other); /* == on <var827:String>*/
}
var837 = !var836;
var834 = var837;
goto RET_LABEL835;
RET_LABEL835:(void)0;
}
}
var809 = var834;
} else {
var809 = var_823;
}
if (var809){
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateErasureCompiler> */
var840 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var840 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var838 = var840;
RET_LABEL839:(void)0;
}
}
{
var841 = nitc__model___MModule___pointer_type(var838);
}
var_pointer_type = var841;
if (unlikely(varonce842==NULL)) {
var843 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce844!=NULL)) {
var845 = varonce844;
} else {
var846 = "NEW_";
var847 = core__flat___NativeString___to_s_full(var846, 4l, 4l);
var845 = var847;
varonce844 = var845;
}
((struct instance_core__NativeArray*)var843)->values[0]=var845;
} else {
var843 = varonce842;
varonce842 = NULL;
}
((struct instance_core__NativeArray*)var843)->values[1]=var_c_name;
{
var848 = ((val*(*)(val* self))(var843->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var843); /* native_to_s on <var843:NativeArray[String]>*/
}
varonce842 = var843;
if (unlikely(varonce849==NULL)) {
var850 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce851!=NULL)) {
var852 = varonce851;
} else {
var853 = " NEW_";
var854 = core__flat___NativeString___to_s_full(var853, 5l, 5l);
var852 = var854;
varonce851 = var852;
}
((struct instance_core__NativeArray*)var850)->values[1]=var852;
if (likely(varonce855!=NULL)) {
var856 = varonce855;
} else {
var857 = "();";
var858 = core__flat___NativeString___to_s_full(var857, 3l, 3l);
var856 = var858;
varonce855 = var856;
}
((struct instance_core__NativeArray*)var850)->values[3]=var856;
} else {
var850 = varonce849;
varonce849 = NULL;
}
{
var859 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var850)->values[0]=var859;
((struct instance_core__NativeArray*)var850)->values[2]=var_c_name;
{
var860 = ((val*(*)(val* self))(var850->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var850); /* native_to_s on <var850:NativeArray[String]>*/
}
varonce849 = var850;
{
nitc___nitc__AbstractCompiler___provide_declaration(self, var848, var860); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateErasureCompiler>*/
}
if (unlikely(varonce861==NULL)) {
var862 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce863!=NULL)) {
var864 = varonce863;
} else {
var865 = "/* allocate ";
var866 = core__flat___NativeString___to_s_full(var865, 12l, 12l);
var864 = var866;
varonce863 = var864;
}
((struct instance_core__NativeArray*)var862)->values[0]=var864;
if (likely(varonce867!=NULL)) {
var868 = varonce867;
} else {
var869 = " */";
var870 = core__flat___NativeString___to_s_full(var869, 3l, 3l);
var868 = var870;
varonce867 = var868;
}
((struct instance_core__NativeArray*)var862)->values[2]=var868;
} else {
var862 = varonce861;
varonce861 = NULL;
}
{
var871 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var862)->values[1]=var871;
{
var872 = ((val*(*)(val* self))(var862->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var862); /* native_to_s on <var862:NativeArray[String]>*/
}
varonce861 = var862;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var872); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce873==NULL)) {
var874 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce875!=NULL)) {
var876 = varonce875;
} else {
var877 = " NEW_";
var878 = core__flat___NativeString___to_s_full(var877, 5l, 5l);
var876 = var878;
varonce875 = var876;
}
((struct instance_core__NativeArray*)var874)->values[1]=var876;
if (likely(varonce879!=NULL)) {
var880 = varonce879;
} else {
var881 = "() {";
var882 = core__flat___NativeString___to_s_full(var881, 4l, 4l);
var880 = var882;
varonce879 = var880;
}
((struct instance_core__NativeArray*)var874)->values[3]=var880;
} else {
var874 = varonce873;
varonce873 = NULL;
}
{
var883 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var874)->values[0]=var883;
((struct instance_core__NativeArray*)var874)->values[2]=var_c_name;
{
var884 = ((val*(*)(val* self))(var874->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var874); /* native_to_s on <var874:NativeArray[String]>*/
}
varonce873 = var874;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var884); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (var_is_dead){
if (unlikely(varonce885==NULL)) {
var886 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce887!=NULL)) {
var888 = varonce887;
} else {
var889 = " is DEAD";
var890 = core__flat___NativeString___to_s_full(var889, 8l, 8l);
var888 = var890;
varonce887 = var888;
}
((struct instance_core__NativeArray*)var886)->values[1]=var888;
} else {
var886 = varonce885;
varonce885 = NULL;
}
{
var891 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclass); /* to_s on <var_mclass:MClass>*/
}
((struct instance_core__NativeArray*)var886)->values[0]=var891;
{
var892 = ((val*(*)(val* self))(var886->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var886); /* native_to_s on <var886:NativeArray[String]>*/
}
varonce885 = var886;
{
nitc___nitc__AbstractCompilerVisitor___add_abort(var_v, var892); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (likely(varonce893!=NULL)) {
var894 = varonce893;
} else {
var895 = "self";
var896 = core__flat___NativeString___to_s_full(var895, 4l, 4l);
var894 = var896;
varonce893 = var894;
}
{
var897 = nitc___nitc__AbstractCompilerVisitor___new_named_var(var_v, var_mtype, var894);
}
var_res898 = var897;
{
{ /* Inline abstract_compiler#RuntimeVariable#is_exact= (var_res898,1) on <var_res898:RuntimeVariable> */
var_res898->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___is_exact].s = 1; /* _is_exact on <var_res898:RuntimeVariable> */
RET_LABEL899:(void)0;
}
}
if (unlikely(varonce900==NULL)) {
var901 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce902!=NULL)) {
var903 = varonce902;
} else {
var904 = " = nit_alloc(sizeof(struct instance_";
var905 = core__flat___NativeString___to_s_full(var904, 36l, 36l);
var903 = var905;
varonce902 = var903;
}
((struct instance_core__NativeArray*)var901)->values[1]=var903;
if (likely(varonce906!=NULL)) {
var907 = varonce906;
} else {
var908 = "));";
var909 = core__flat___NativeString___to_s_full(var908, 3l, 3l);
var907 = var909;
varonce906 = var907;
}
((struct instance_core__NativeArray*)var901)->values[3]=var907;
} else {
var901 = varonce900;
varonce900 = NULL;
}
{
var910 = ((val*(*)(val* self))(var_res898->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res898); /* to_s on <var_res898:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var901)->values[0]=var910;
{
var911 = ((val*(*)(val* self))(var_pointer_type->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_pointer_type); /* c_name on <var_pointer_type:MClassType>*/
}
((struct instance_core__NativeArray*)var901)->values[2]=var911;
{
var912 = ((val*(*)(val* self))(var901->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var901); /* native_to_s on <var901:NativeArray[String]>*/
}
varonce900 = var901;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var912); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce913==NULL)) {
var914 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce915!=NULL)) {
var916 = varonce915;
} else {
var917 = "class_";
var918 = core__flat___NativeString___to_s_full(var917, 6l, 6l);
var916 = var918;
varonce915 = var916;
}
((struct instance_core__NativeArray*)var914)->values[0]=var916;
} else {
var914 = varonce913;
varonce913 = NULL;
}
((struct instance_core__NativeArray*)var914)->values[1]=var_c_name;
{
var919 = ((val*(*)(val* self))(var914->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var914); /* native_to_s on <var914:NativeArray[String]>*/
}
varonce913 = var914;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v, var919); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce920==NULL)) {
var921 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce922!=NULL)) {
var923 = varonce922;
} else {
var924 = "->class = &class_";
var925 = core__flat___NativeString___to_s_full(var924, 17l, 17l);
var923 = var925;
varonce922 = var923;
}
((struct instance_core__NativeArray*)var921)->values[1]=var923;
if (likely(varonce926!=NULL)) {
var927 = varonce926;
} else {
var928 = ";";
var929 = core__flat___NativeString___to_s_full(var928, 1l, 1l);
var927 = var929;
varonce926 = var927;
}
((struct instance_core__NativeArray*)var921)->values[3]=var927;
} else {
var921 = varonce920;
varonce920 = NULL;
}
{
var930 = ((val*(*)(val* self))(var_res898->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res898); /* to_s on <var_res898:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var921)->values[0]=var930;
((struct instance_core__NativeArray*)var921)->values[2]=var_c_name;
{
var931 = ((val*(*)(val* self))(var921->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var921); /* native_to_s on <var921:NativeArray[String]>*/
}
varonce920 = var921;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var931); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce932==NULL)) {
var933 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce934!=NULL)) {
var935 = varonce934;
} else {
var936 = "((struct instance_";
var937 = core__flat___NativeString___to_s_full(var936, 18l, 18l);
var935 = var937;
varonce934 = var935;
}
((struct instance_core__NativeArray*)var933)->values[0]=var935;
if (likely(varonce938!=NULL)) {
var939 = varonce938;
} else {
var940 = "*)";
var941 = core__flat___NativeString___to_s_full(var940, 2l, 2l);
var939 = var941;
varonce938 = var939;
}
((struct instance_core__NativeArray*)var933)->values[2]=var939;
if (likely(varonce942!=NULL)) {
var943 = varonce942;
} else {
var944 = ")->value = NULL;";
var945 = core__flat___NativeString___to_s_full(var944, 16l, 16l);
var943 = var945;
varonce942 = var943;
}
((struct instance_core__NativeArray*)var933)->values[4]=var943;
} else {
var933 = varonce932;
varonce932 = NULL;
}
{
var946 = ((val*(*)(val* self))(var_pointer_type->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_pointer_type); /* c_name on <var_pointer_type:MClassType>*/
}
((struct instance_core__NativeArray*)var933)->values[1]=var946;
{
var947 = ((val*(*)(val* self))(var_res898->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res898); /* to_s on <var_res898:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var933)->values[3]=var947;
{
var948 = ((val*(*)(val* self))(var933->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var933); /* native_to_s on <var933:NativeArray[String]>*/
}
varonce932 = var933;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var948); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce949==NULL)) {
var950 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce951!=NULL)) {
var952 = varonce951;
} else {
var953 = "return ";
var954 = core__flat___NativeString___to_s_full(var953, 7l, 7l);
var952 = var954;
varonce951 = var952;
}
((struct instance_core__NativeArray*)var950)->values[0]=var952;
if (likely(varonce955!=NULL)) {
var956 = varonce955;
} else {
var957 = ";";
var958 = core__flat___NativeString___to_s_full(var957, 1l, 1l);
var956 = var958;
varonce955 = var956;
}
((struct instance_core__NativeArray*)var950)->values[2]=var956;
} else {
var950 = varonce949;
varonce949 = NULL;
}
{
var959 = ((val*(*)(val* self))(var_res898->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res898); /* to_s on <var_res898:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var950)->values[1]=var959;
{
var960 = ((val*(*)(val* self))(var950->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var950); /* native_to_s on <var950:NativeArray[String]>*/
}
varonce949 = var950;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var960); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
}
if (likely(varonce961!=NULL)) {
var962 = varonce961;
} else {
var963 = "}";
var964 = core__flat___NativeString___to_s_full(var963, 1l, 1l);
var962 = var964;
varonce961 = var962;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var962); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
}
}
}
if (unlikely(varonce965==NULL)) {
var966 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce967!=NULL)) {
var968 = varonce967;
} else {
var969 = "NEW_";
var970 = core__flat___NativeString___to_s_full(var969, 4l, 4l);
var968 = var970;
varonce967 = var968;
}
((struct instance_core__NativeArray*)var966)->values[0]=var968;
} else {
var966 = varonce965;
varonce965 = NULL;
}
((struct instance_core__NativeArray*)var966)->values[1]=var_c_name;
{
var971 = ((val*(*)(val* self))(var966->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var966); /* native_to_s on <var966:NativeArray[String]>*/
}
varonce965 = var966;
if (unlikely(varonce972==NULL)) {
var973 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce974!=NULL)) {
var975 = varonce974;
} else {
var976 = " NEW_";
var977 = core__flat___NativeString___to_s_full(var976, 5l, 5l);
var975 = var977;
varonce974 = var975;
}
((struct instance_core__NativeArray*)var973)->values[1]=var975;
if (likely(varonce978!=NULL)) {
var979 = varonce978;
} else {
var980 = "(void);";
var981 = core__flat___NativeString___to_s_full(var980, 7l, 7l);
var979 = var981;
varonce978 = var979;
}
((struct instance_core__NativeArray*)var973)->values[3]=var979;
} else {
var973 = varonce972;
varonce972 = NULL;
}
{
var982 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var973)->values[0]=var982;
((struct instance_core__NativeArray*)var973)->values[2]=var_c_name;
{
var983 = ((val*(*)(val* self))(var973->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var973); /* native_to_s on <var973:NativeArray[String]>*/
}
varonce972 = var973;
{
nitc___nitc__AbstractCompiler___provide_declaration(self, var971, var983); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateErasureCompiler>*/
}
if (unlikely(varonce984==NULL)) {
var985 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce986!=NULL)) {
var987 = varonce986;
} else {
var988 = "/* allocate ";
var989 = core__flat___NativeString___to_s_full(var988, 12l, 12l);
var987 = var989;
varonce986 = var987;
}
((struct instance_core__NativeArray*)var985)->values[0]=var987;
if (likely(varonce990!=NULL)) {
var991 = varonce990;
} else {
var992 = " */";
var993 = core__flat___NativeString___to_s_full(var992, 3l, 3l);
var991 = var993;
varonce990 = var991;
}
((struct instance_core__NativeArray*)var985)->values[2]=var991;
} else {
var985 = varonce984;
varonce984 = NULL;
}
{
var994 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var985)->values[1]=var994;
{
var995 = ((val*(*)(val* self))(var985->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var985); /* native_to_s on <var985:NativeArray[String]>*/
}
varonce984 = var985;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var995); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce996==NULL)) {
var997 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce998!=NULL)) {
var999 = varonce998;
} else {
var1000 = " NEW_";
var1001 = core__flat___NativeString___to_s_full(var1000, 5l, 5l);
var999 = var1001;
varonce998 = var999;
}
((struct instance_core__NativeArray*)var997)->values[1]=var999;
if (likely(varonce1002!=NULL)) {
var1003 = varonce1002;
} else {
var1004 = "(void) {";
var1005 = core__flat___NativeString___to_s_full(var1004, 8l, 8l);
var1003 = var1005;
varonce1002 = var1003;
}
((struct instance_core__NativeArray*)var997)->values[3]=var1003;
} else {
var997 = varonce996;
varonce996 = NULL;
}
{
var1006 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var997)->values[0]=var1006;
((struct instance_core__NativeArray*)var997)->values[2]=var_c_name;
{
var1007 = ((val*(*)(val* self))(var997->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var997); /* native_to_s on <var997:NativeArray[String]>*/
}
varonce996 = var997;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var1007); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (var_is_dead){
if (unlikely(varonce1008==NULL)) {
var1009 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1010!=NULL)) {
var1011 = varonce1010;
} else {
var1012 = " is DEAD";
var1013 = core__flat___NativeString___to_s_full(var1012, 8l, 8l);
var1011 = var1013;
varonce1010 = var1011;
}
((struct instance_core__NativeArray*)var1009)->values[1]=var1011;
} else {
var1009 = varonce1008;
varonce1008 = NULL;
}
{
var1014 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclass); /* to_s on <var_mclass:MClass>*/
}
((struct instance_core__NativeArray*)var1009)->values[0]=var1014;
{
var1015 = ((val*(*)(val* self))(var1009->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1009); /* native_to_s on <var1009:NativeArray[String]>*/
}
varonce1008 = var1009;
{
nitc___nitc__AbstractCompilerVisitor___add_abort(var_v, var1015); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (likely(varonce1016!=NULL)) {
var1017 = varonce1016;
} else {
var1018 = "self";
var1019 = core__flat___NativeString___to_s_full(var1018, 4l, 4l);
var1017 = var1019;
varonce1016 = var1017;
}
{
var1020 = nitc___nitc__AbstractCompilerVisitor___new_named_var(var_v, var_mtype, var1017);
}
var_res1021 = var1020;
{
{ /* Inline abstract_compiler#RuntimeVariable#is_exact= (var_res1021,1) on <var_res1021:RuntimeVariable> */
var_res1021->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___is_exact].s = 1; /* _is_exact on <var_res1021:RuntimeVariable> */
RET_LABEL1022:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#attr_tables (self) on <self:SeparateErasureCompiler> */
var1025 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___attr_tables].val; /* _attr_tables on <self:SeparateErasureCompiler> */
if (unlikely(var1025 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _attr_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1068);
fatal_exit(1);
}
var1023 = var1025;
RET_LABEL1024:(void)0;
}
}
{
var1026 = ((val*(*)(val* self, val* p0))((((long)var1023&3)?class_info[((long)var1023&3)]:var1023->class)->vft[COLOR_core__abstract_collection__MapRead__get_or_null]))(var1023, var_mclass); /* get_or_null on <var1023:Map[MClass, Array[nullable MProperty]]>*/
}
var_attrs = var1026;
if (var_attrs == NULL) {
var1027 = 1; /* is null */
} else {
var1027 = 0; /* arg is null but recv is not */
}
if (0) {
var1028 = core___core__Array___core__kernel__Object___61d_61d(var_attrs, ((val*)NULL));
var1027 = var1028;
}
if (var1027){
if (unlikely(varonce1029==NULL)) {
var1030 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1031!=NULL)) {
var1032 = varonce1031;
} else {
var1033 = " = nit_alloc(sizeof(struct instance));";
var1034 = core__flat___NativeString___to_s_full(var1033, 38l, 38l);
var1032 = var1034;
varonce1031 = var1032;
}
((struct instance_core__NativeArray*)var1030)->values[1]=var1032;
} else {
var1030 = varonce1029;
varonce1029 = NULL;
}
{
var1035 = ((val*(*)(val* self))(var_res1021->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res1021); /* to_s on <var_res1021:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var1030)->values[0]=var1035;
{
var1036 = ((val*(*)(val* self))(var1030->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1030); /* native_to_s on <var1030:NativeArray[String]>*/
}
varonce1029 = var1030;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1036); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (unlikely(varonce1037==NULL)) {
var1038 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce1039!=NULL)) {
var1040 = varonce1039;
} else {
var1041 = " = nit_alloc(sizeof(struct instance) + ";
var1042 = core__flat___NativeString___to_s_full(var1041, 39l, 39l);
var1040 = var1042;
varonce1039 = var1040;
}
((struct instance_core__NativeArray*)var1038)->values[1]=var1040;
if (likely(varonce1043!=NULL)) {
var1044 = varonce1043;
} else {
var1045 = "*sizeof(nitattribute_t));";
var1046 = core__flat___NativeString___to_s_full(var1045, 25l, 25l);
var1044 = var1046;
varonce1043 = var1044;
}
((struct instance_core__NativeArray*)var1038)->values[3]=var1044;
} else {
var1038 = varonce1037;
varonce1037 = NULL;
}
{
var1047 = ((val*(*)(val* self))(var_res1021->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res1021); /* to_s on <var_res1021:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var1038)->values[0]=var1047;
{
{ /* Inline array#AbstractArrayRead#length (var_attrs) on <var_attrs:nullable Array[nullable MProperty](Array[nullable MProperty])> */
var1050 = var_attrs->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_attrs:nullable Array[nullable MProperty](Array[nullable MProperty])> */
var1048 = var1050;
RET_LABEL1049:(void)0;
}
}
var1051 = core__flat___Int___core__abstract_text__Object__to_s(var1048);
((struct instance_core__NativeArray*)var1038)->values[2]=var1051;
{
var1052 = ((val*(*)(val* self))(var1038->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1038); /* native_to_s on <var1038:NativeArray[String]>*/
}
varonce1037 = var1038;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1052); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
}
if (unlikely(varonce1053==NULL)) {
var1054 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1055!=NULL)) {
var1056 = varonce1055;
} else {
var1057 = "class_";
var1058 = core__flat___NativeString___to_s_full(var1057, 6l, 6l);
var1056 = var1058;
varonce1055 = var1056;
}
((struct instance_core__NativeArray*)var1054)->values[0]=var1056;
} else {
var1054 = varonce1053;
varonce1053 = NULL;
}
((struct instance_core__NativeArray*)var1054)->values[1]=var_c_name;
{
var1059 = ((val*(*)(val* self))(var1054->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1054); /* native_to_s on <var1054:NativeArray[String]>*/
}
varonce1053 = var1054;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v, var1059); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce1060==NULL)) {
var1061 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce1062!=NULL)) {
var1063 = varonce1062;
} else {
var1064 = "->class = &class_";
var1065 = core__flat___NativeString___to_s_full(var1064, 17l, 17l);
var1063 = var1065;
varonce1062 = var1063;
}
((struct instance_core__NativeArray*)var1061)->values[1]=var1063;
if (likely(varonce1066!=NULL)) {
var1067 = varonce1066;
} else {
var1068 = ";";
var1069 = core__flat___NativeString___to_s_full(var1068, 1l, 1l);
var1067 = var1069;
varonce1066 = var1067;
}
((struct instance_core__NativeArray*)var1061)->values[3]=var1067;
} else {
var1061 = varonce1060;
varonce1060 = NULL;
}
{
var1070 = ((val*(*)(val* self))(var_res1021->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res1021); /* to_s on <var_res1021:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var1061)->values[0]=var1070;
((struct instance_core__NativeArray*)var1061)->values[2]=var_c_name;
{
var1071 = ((val*(*)(val* self))(var1061->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1061); /* native_to_s on <var1061:NativeArray[String]>*/
}
varonce1060 = var1061;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1071); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (var_attrs == NULL) {
var1072 = 0; /* is null */
} else {
var1072 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_attrs,((val*)NULL)) on <var_attrs:nullable Array[nullable MProperty]> */
var_other = ((val*)NULL);
{
var1075 = ((short int(*)(val* self, val* p0))(var_attrs->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_attrs, var_other); /* == on <var_attrs:nullable Array[nullable MProperty](Array[nullable MProperty])>*/
}
var1076 = !var1075;
var1073 = var1076;
goto RET_LABEL1074;
RET_LABEL1074:(void)0;
}
var1072 = var1073;
}
if (var1072){
{
nitc___nitc__AbstractCompiler___generate_init_attr(self, var_v, var_res1021, var_mtype); /* Direct call abstract_compiler#AbstractCompiler#generate_init_attr on <self:SeparateErasureCompiler>*/
}
{
nitc___nitc__AbstractCompilerVisitor___set_finalizer(var_v, var_res1021); /* Direct call abstract_compiler#AbstractCompilerVisitor#set_finalizer on <var_v:SeparateCompilerVisitor>*/
}
} else {
}
if (unlikely(varonce1077==NULL)) {
var1078 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1079!=NULL)) {
var1080 = varonce1079;
} else {
var1081 = "return ";
var1082 = core__flat___NativeString___to_s_full(var1081, 7l, 7l);
var1080 = var1082;
varonce1079 = var1080;
}
((struct instance_core__NativeArray*)var1078)->values[0]=var1080;
if (likely(varonce1083!=NULL)) {
var1084 = varonce1083;
} else {
var1085 = ";";
var1086 = core__flat___NativeString___to_s_full(var1085, 1l, 1l);
var1084 = var1086;
varonce1083 = var1084;
}
((struct instance_core__NativeArray*)var1078)->values[2]=var1084;
} else {
var1078 = varonce1077;
varonce1077 = NULL;
}
{
var1087 = ((val*(*)(val* self))(var_res1021->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res1021); /* to_s on <var_res1021:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var1078)->values[1]=var1087;
{
var1088 = ((val*(*)(val* self))(var1078->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1078); /* native_to_s on <var1078:NativeArray[String]>*/
}
varonce1077 = var1078;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1088); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
}
if (likely(varonce1089!=NULL)) {
var1090 = varonce1089;
} else {
var1091 = "}";
var1092 = core__flat___NativeString___to_s_full(var1091, 1l, 1l);
var1090 = var1092;
varonce1089 = var1090;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1090); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#build_class_vts_table for (self: SeparateErasureCompiler, MClass): Bool */
short int nitc___nitc__SeparateErasureCompiler___build_class_vts_table(val* self, val* p0) {
short int var /* : Bool */;
val* var_mclass /* var mclass: MClass */;
val* var1 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var3 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var4 /* : nullable Object */;
short int var5 /* : Bool */;
val* var6 /* : NativeArray[String] */;
static val* varonce;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : String */;
val* var11 /* : String */;
val* var12 /* : String */;
val* var14 /* : NativeArray[String] */;
static val* varonce13;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : String */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
val* var22 /* : String */;
val* var23 /* : String */;
val* var24 /* : String */;
val* var25 /* : SeparateCompilerVisitor */;
val* var_v /* var v: SeparateCompilerVisitor */;
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
val* var37 /* : String */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : String */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : String */;
val* var46 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var48 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var49 /* : nullable Object */;
val* var_ /* var : Array[nullable MPropDef] */;
val* var50 /* : IndexedIterator[nullable Object] */;
val* var_51 /* var : IndexedIterator[nullable MPropDef] */;
short int var52 /* : Bool */;
val* var53 /* : nullable Object */;
val* var_vt /* var vt: nullable MPropDef */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
val* var63 /* : String */;
long var_is_null /* var is_null: Int */;
val* var64 /* : MClassDef */;
val* var66 /* : MClassDef */;
val* var67 /* : MClassType */;
val* var69 /* : MClassType */;
short int var70 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var71 /* : nullable MType */;
val* var73 /* : nullable MType */;
val* var74 /* : MType */;
val* var_bound /* var bound: MType */;
short int var75 /* : Bool */;
int cltype76;
int idtype77;
val* var78 /* : MClassDef */;
val* var80 /* : MClassDef */;
val* var81 /* : MClassType */;
val* var83 /* : MClassType */;
val* var84 /* : MType */;
val* var86 /* : MType */;
val* var87 /* : MType */;
short int var89 /* : Bool */;
int cltype90;
int idtype91;
const char* var_class_name92;
val* var93 /* : MClass */;
val* var95 /* : MClass */;
val* var_vtclass /* var vtclass: MClass */;
val* var97 /* : NativeArray[String] */;
static val* varonce96;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : NativeString */;
val* var101 /* : String */;
val* var102 /* : String */;
val* var103 /* : String */;
val* var105 /* : NativeArray[String] */;
static val* varonce104;
static val* varonce106;
val* var107 /* : String */;
char* var108 /* : NativeString */;
val* var109 /* : String */;
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : NativeString */;
val* var113 /* : String */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : NativeString */;
val* var117 /* : String */;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : NativeString */;
val* var121 /* : String */;
val* var122 /* : String */;
val* var123 /* : String */;
val* var124 /* : String */;
val* var125 /* : String */;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : NativeString */;
val* var129 /* : String */;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : NativeString */;
val* var133 /* : String */;
var_mclass = p0;
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#vt_tables (self) on <self:SeparateErasureCompiler> */
var3 = self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___vt_tables].val; /* _vt_tables on <self:SeparateErasureCompiler> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vt_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 428);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val*(*)(val* self, val* p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var1, var_mclass); /* [] on <var1:Map[MClass, Array[nullable MPropDef]]>*/
}
{
var5 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var4);
}
if (var5){
var = 0;
goto RET_LABEL;
} else {
}
if (unlikely(varonce==NULL)) {
var6 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "vts_table_";
var10 = core__flat___NativeString___to_s_full(var9, 10l, 10l);
var8 = var10;
varonce7 = var8;
}
((struct instance_core__NativeArray*)var6)->values[0]=var8;
} else {
var6 = varonce;
varonce = NULL;
}
{
var11 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var_mclass);
}
((struct instance_core__NativeArray*)var6)->values[1]=var11;
{
var12 = ((val*(*)(val* self))(var6->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce = var6;
if (unlikely(varonce13==NULL)) {
var14 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "extern const struct vts_table vts_table_";
var18 = core__flat___NativeString___to_s_full(var17, 40l, 40l);
var16 = var18;
varonce15 = var16;
}
((struct instance_core__NativeArray*)var14)->values[0]=var16;
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = ";";
var22 = core__flat___NativeString___to_s_full(var21, 1l, 1l);
var20 = var22;
varonce19 = var20;
}
((struct instance_core__NativeArray*)var14)->values[2]=var20;
} else {
var14 = varonce13;
varonce13 = NULL;
}
{
var23 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var_mclass);
}
((struct instance_core__NativeArray*)var14)->values[1]=var23;
{
var24 = ((val*(*)(val* self))(var14->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var14); /* native_to_s on <var14:NativeArray[String]>*/
}
varonce13 = var14;
{
nitc___nitc__AbstractCompiler___provide_declaration(self, var12, var24); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateErasureCompiler>*/
}
{
var25 = nitc___nitc__SeparateErasureCompiler___nitc__abstract_compiler__AbstractCompiler__new_visitor(self);
}
var_v = var25;
if (unlikely(varonce26==NULL)) {
var27 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "const struct vts_table vts_table_";
var31 = core__flat___NativeString___to_s_full(var30, 33l, 33l);
var29 = var31;
varonce28 = var29;
}
((struct instance_core__NativeArray*)var27)->values[0]=var29;
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = " = {";
var35 = core__flat___NativeString___to_s_full(var34, 4l, 4l);
var33 = var35;
varonce32 = var33;
}
((struct instance_core__NativeArray*)var27)->values[2]=var33;
} else {
var27 = varonce26;
varonce26 = NULL;
}
{
var36 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var_mclass);
}
((struct instance_core__NativeArray*)var27)->values[1]=var36;
{
var37 = ((val*(*)(val* self))(var27->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var27); /* native_to_s on <var27:NativeArray[String]>*/
}
varonce26 = var27;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var37); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "0, /* dummy */";
var41 = core__flat___NativeString___to_s_full(var40, 14l, 14l);
var39 = var41;
varonce38 = var39;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var39); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "{";
var45 = core__flat___NativeString___to_s_full(var44, 1l, 1l);
var43 = var45;
varonce42 = var43;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var43); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#vt_tables (self) on <self:SeparateErasureCompiler> */
var48 = self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___vt_tables].val; /* _vt_tables on <self:SeparateErasureCompiler> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vt_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 428);
fatal_exit(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
var49 = ((val*(*)(val* self, val* p0))((((long)var46&3)?class_info[((long)var46&3)]:var46->class)->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var46, var_mclass); /* [] on <var46:Map[MClass, Array[nullable MPropDef]]>*/
}
var_ = var49;
{
var50 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_51 = var50;
for(;;) {
{
var52 = ((short int(*)(val* self))((((long)var_51&3)?class_info[((long)var_51&3)]:var_51->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_51); /* is_ok on <var_51:IndexedIterator[nullable MPropDef]>*/
}
if (var52){
} else {
goto BREAK_label;
}
{
var53 = ((val*(*)(val* self))((((long)var_51&3)?class_info[((long)var_51&3)]:var_51->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_51); /* item on <var_51:IndexedIterator[nullable MPropDef]>*/
}
var_vt = var53;
if (var_vt == NULL) {
var54 = 1; /* is null */
} else {
var54 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_vt,((val*)NULL)) on <var_vt:nullable MPropDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_vt,var_other) on <var_vt:nullable MPropDef(MPropDef)> */
var59 = var_vt == var_other;
var57 = var59;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
var55 = var57;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
var54 = var55;
}
if (var54){
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = "{-1, NULL}, /* empty */";
var63 = core__flat___NativeString___to_s_full(var62, 23l, 23l);
var61 = var63;
varonce60 = var61;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var61); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
var_is_null = 0l;
{
{ /* Inline model#MClass#intro (var_mclass) on <var_mclass:MClass> */
var66 = var_mclass->attrs[COLOR_nitc__model__MClass___intro].val; /* _intro on <var_mclass:MClass> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 483);
fatal_exit(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var64) on <var64:MClassDef> */
var69 = var64->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var64:MClassDef> */
if (unlikely(var69 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 579);
fatal_exit(1);
}
var67 = var69;
RET_LABEL68:(void)0;
}
}
/* <var_vt:nullable MPropDef(MPropDef)> isa MVirtualTypeDef */
cltype = type_nitc__MVirtualTypeDef.color;
idtype = type_nitc__MVirtualTypeDef.id;
if(cltype >= var_vt->type->table_size) {
var70 = 0;
} else {
var70 = var_vt->type->type_table[cltype] == idtype;
}
if (unlikely(!var70)) {
var_class_name = var_vt == NULL ? "null" : var_vt->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MVirtualTypeDef", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 389);
fatal_exit(1);
}
{
{ /* Inline model#MVirtualTypeDef#bound (var_vt) on <var_vt:MPropDef(MVirtualTypeDef)> */
var73 = var_vt->attrs[COLOR_nitc__model__MVirtualTypeDef___bound].val; /* _bound on <var_vt:MPropDef(MVirtualTypeDef)> */
var71 = var73;
RET_LABEL72:(void)0;
}
}
{
var74 = nitc___nitc__SeparateErasureCompiler___retrieve_vt_bound(self, var67, var71);
}
var_bound = var74;
for(;;) {
/* <var_bound:MType> isa MNullableType */
cltype76 = type_nitc__MNullableType.color;
idtype77 = type_nitc__MNullableType.id;
if(cltype76 >= var_bound->type->table_size) {
var75 = 0;
} else {
var75 = var_bound->type->type_table[cltype76] == idtype77;
}
if (var75){
{
{ /* Inline model#MClass#intro (var_mclass) on <var_mclass:MClass> */
var80 = var_mclass->attrs[COLOR_nitc__model__MClass___intro].val; /* _intro on <var_mclass:MClass> */
if (unlikely(var80 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 483);
fatal_exit(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var78) on <var78:MClassDef> */
var83 = var78->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var78:MClassDef> */
if (unlikely(var83 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 579);
fatal_exit(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
{
{ /* Inline model#MProxyType#mtype (var_bound) on <var_bound:MType(MNullableType)> */
var86 = var_bound->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <var_bound:MType(MNullableType)> */
if (unlikely(var86 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1625);
fatal_exit(1);
}
var84 = var86;
RET_LABEL85:(void)0;
}
}
{
var87 = nitc___nitc__SeparateErasureCompiler___retrieve_vt_bound(self, var81, var84);
}
var_bound = var87;
var_is_null = 1l;
} else {
goto BREAK_label88;
}
}
BREAK_label88: (void)0;
/* <var_bound:MType> isa MClassType */
cltype90 = type_nitc__MClassType.color;
idtype91 = type_nitc__MClassType.id;
if(cltype90 >= var_bound->type->table_size) {
var89 = 0;
} else {
var89 = var_bound->type->type_table[cltype90] == idtype91;
}
if (unlikely(!var89)) {
var_class_name92 = var_bound == NULL ? "null" : var_bound->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name92);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 394);
fatal_exit(1);
}
{
{ /* Inline model#MClassType#mclass (var_bound) on <var_bound:MType(MClassType)> */
var95 = var_bound->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_bound:MType(MClassType)> */
if (unlikely(var95 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1163);
fatal_exit(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
var_vtclass = var93;
if (unlikely(varonce96==NULL)) {
var97 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce98!=NULL)) {
var99 = varonce98;
} else {
var100 = "class_";
var101 = core__flat___NativeString___to_s_full(var100, 6l, 6l);
var99 = var101;
varonce98 = var99;
}
((struct instance_core__NativeArray*)var97)->values[0]=var99;
} else {
var97 = varonce96;
varonce96 = NULL;
}
{
var102 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var_vtclass);
}
((struct instance_core__NativeArray*)var97)->values[1]=var102;
{
var103 = ((val*(*)(val* self))(var97->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var97); /* native_to_s on <var97:NativeArray[String]>*/
}
varonce96 = var97;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v, var103); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce104==NULL)) {
var105 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce106!=NULL)) {
var107 = varonce106;
} else {
var108 = "{";
var109 = core__flat___NativeString___to_s_full(var108, 1l, 1l);
var107 = var109;
varonce106 = var107;
}
((struct instance_core__NativeArray*)var105)->values[0]=var107;
if (likely(varonce110!=NULL)) {
var111 = varonce110;
} else {
var112 = ", &class_";
var113 = core__flat___NativeString___to_s_full(var112, 9l, 9l);
var111 = var113;
varonce110 = var111;
}
((struct instance_core__NativeArray*)var105)->values[2]=var111;
if (likely(varonce114!=NULL)) {
var115 = varonce114;
} else {
var116 = "}, /* ";
var117 = core__flat___NativeString___to_s_full(var116, 6l, 6l);
var115 = var117;
varonce114 = var115;
}
((struct instance_core__NativeArray*)var105)->values[4]=var115;
if (likely(varonce118!=NULL)) {
var119 = varonce118;
} else {
var120 = " */";
var121 = core__flat___NativeString___to_s_full(var120, 3l, 3l);
var119 = var121;
varonce118 = var119;
}
((struct instance_core__NativeArray*)var105)->values[6]=var119;
} else {
var105 = varonce104;
varonce104 = NULL;
}
var122 = core__flat___Int___core__abstract_text__Object__to_s(var_is_null);
((struct instance_core__NativeArray*)var105)->values[1]=var122;
{
var123 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var_vtclass);
}
((struct instance_core__NativeArray*)var105)->values[3]=var123;
{
var124 = ((val*(*)(val* self))(var_vt->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_vt); /* to_s on <var_vt:nullable MPropDef(MPropDef)>*/
}
((struct instance_core__NativeArray*)var105)->values[5]=var124;
{
var125 = ((val*(*)(val* self))(var105->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var105); /* native_to_s on <var105:NativeArray[String]>*/
}
varonce104 = var105;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var125); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
{
((void(*)(val* self))((((long)var_51&3)?class_info[((long)var_51&3)]:var_51->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_51); /* next on <var_51:IndexedIterator[nullable MPropDef]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_51&3)?class_info[((long)var_51&3)]:var_51->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_51); /* finish on <var_51:IndexedIterator[nullable MPropDef]>*/
}
if (likely(varonce126!=NULL)) {
var127 = varonce126;
} else {
var128 = "},";
var129 = core__flat___NativeString___to_s_full(var128, 2l, 2l);
var127 = var129;
varonce126 = var127;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var127); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce130!=NULL)) {
var131 = varonce130;
} else {
var132 = "};";
var133 = core__flat___NativeString___to_s_full(var132, 2l, 2l);
var131 = var133;
varonce130 = var131;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var131); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#retrieve_vt_bound for (self: SeparateErasureCompiler, MClassType, nullable MType): MType */
val* nitc___nitc__SeparateErasureCompiler___retrieve_vt_bound(val* self, val* p0, val* p1) {
val* var /* : MType */;
val* var_anchor /* var anchor: MClassType */;
val* var_mtype /* var mtype: nullable MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : Sys */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : String */;
short int var11 /* : Bool */;
int cltype;
int idtype;
val* var12 /* : MModule */;
val* var14 /* : MModule */;
val* var15 /* : MType */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : MModule */;
val* var21 /* : MModule */;
val* var22 /* : MType */;
var_anchor = p0;
var_mtype = p1;
if (var_mtype == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var6 = var_mtype == var_other;
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
var7 = glob_sys;
if (likely(varonce!=NULL)) {
var8 = varonce;
} else {
var9 = "NOT YET IMPLEMENTED: retrieve_vt_bound on null";
var10 = core__flat___NativeString___to_s_full(var9, 46l, 46l);
var8 = var10;
varonce = var8;
}
{
core__file___Sys___print(var7, var8); /* Direct call file#Sys#print on <var7:Sys>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 407);
fatal_exit(1);
} else {
}
/* <var_mtype:nullable MType(MType)> isa MVirtualType */
cltype = type_nitc__MVirtualType.color;
idtype = type_nitc__MVirtualType.id;
if(cltype >= var_mtype->type->table_size) {
var11 = 0;
} else {
var11 = var_mtype->type->type_table[cltype] == idtype;
}
if (var11){
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateErasureCompiler> */
var14 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = nitc___nitc__MType___anchor_to(var_mtype, var12, var_anchor);
}
var = var15;
goto RET_LABEL;
} else {
/* <var_mtype:nullable MType(MType)> isa MParameterType */
cltype17 = type_nitc__MParameterType.color;
idtype18 = type_nitc__MParameterType.id;
if(cltype17 >= var_mtype->type->table_size) {
var16 = 0;
} else {
var16 = var_mtype->type->type_table[cltype17] == idtype18;
}
if (var16){
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateErasureCompiler> */
var21 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = nitc___nitc__MType___anchor_to(var_mtype, var19, var_anchor);
}
var = var22;
goto RET_LABEL;
} else {
var = var_mtype;
goto RET_LABEL;
}
}
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#compile_types for (self: SeparateErasureCompiler) */
void nitc___nitc__SeparateErasureCompiler___nitc__separate_compiler__SeparateCompiler__compile_types(val* self) {
val* var /* : Map[MVirtualTypeProp, Int] */;
val* var2 /* : Map[MVirtualTypeProp, Int] */;
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#vt_colors (self) on <self:SeparateErasureCompiler> */
var2 = self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___vt_colors].val; /* _vt_colors on <self:SeparateErasureCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vt_colors");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 86);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc___nitc__SeparateCompiler___compile_color_consts(self, var); /* Direct call separate_compiler#SeparateCompiler#compile_color_consts on <self:SeparateErasureCompiler>*/
}
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#new_visitor for (self: SeparateErasureCompiler): SeparateCompilerVisitor */
val* nitc___nitc__SeparateErasureCompiler___nitc__abstract_compiler__AbstractCompiler__new_visitor(val* self) {
val* var /* : SeparateCompilerVisitor */;
val* var1 /* : SeparateErasureCompilerVisitor */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var1 = NEW_nitc__SeparateErasureCompilerVisitor(&type_nitc__SeparateErasureCompilerVisitor);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compiler_61d]))(var1, self); /* compiler= on <var1:SeparateErasureCompilerVisitor>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:SeparateErasureCompilerVisitor>*/
}
/* <var1:SeparateErasureCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_nitc__abstract_compiler__AbstractCompiler__VISITOR];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
if (unlikely(!var2)) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 423);
fatal_exit(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#class_tables for (self: SeparateErasureCompiler): Map[MClass, Array[nullable MClass]] */
val* nitc___nitc__SeparateErasureCompiler___class_tables(val* self) {
val* var /* : Map[MClass, Array[nullable MClass]] */;
val* var1 /* : Map[MClass, Array[nullable MClass]] */;
var1 = self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___class_tables].val; /* _class_tables on <self:SeparateErasureCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _class_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 427);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#class_tables= for (self: SeparateErasureCompiler, Map[MClass, Array[nullable MClass]]) */
void nitc___nitc__SeparateErasureCompiler___class_tables_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___class_tables].val = p0; /* _class_tables on <self:SeparateErasureCompiler> */
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#vt_tables for (self: SeparateErasureCompiler): Map[MClass, Array[nullable MPropDef]] */
val* nitc___nitc__SeparateErasureCompiler___vt_tables(val* self) {
val* var /* : Map[MClass, Array[nullable MPropDef]] */;
val* var1 /* : Map[MClass, Array[nullable MPropDef]] */;
var1 = self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___vt_tables].val; /* _vt_tables on <self:SeparateErasureCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vt_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 428);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#vt_tables= for (self: SeparateErasureCompiler, Map[MClass, Array[nullable MPropDef]]) */
void nitc___nitc__SeparateErasureCompiler___vt_tables_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___vt_tables].val = p0; /* _vt_tables on <self:SeparateErasureCompiler> */
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#display_sizes for (self: SeparateErasureCompiler) */
void nitc___nitc__SeparateErasureCompiler___nitc__separate_compiler__SeparateCompiler__display_sizes(val* self) {
val* var /* : Sys */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : String */;
val* var4 /* : Sys */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : String */;
long var_total /* var total: Int */;
long var_holes /* var holes: Int */;
val* var9 /* : Map[MClass, Array[nullable MClass]] */;
val* var11 /* : Map[MClass, Array[nullable MClass]] */;
val* var_ /* var : Map[MClass, Array[nullable MClass]] */;
val* var12 /* : MapIterator[nullable Object, nullable Object] */;
val* var_13 /* var : MapIterator[MClass, Array[nullable MClass]] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_t /* var t: MClass */;
val* var16 /* : nullable Object */;
val* var_table /* var table: Array[nullable MClass] */;
long var17 /* : Int */;
long var19 /* : Int */;
long var20 /* : Int */;
short int var22 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var23 /* : Int */;
val* var_24 /* var : Array[nullable MClass] */;
val* var25 /* : IndexedIterator[nullable Object] */;
val* var_26 /* var : IndexedIterator[nullable MClass] */;
short int var27 /* : Bool */;
val* var29 /* : nullable Object */;
val* var_e /* var e: nullable MClass */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
long var36 /* : Int */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
long var42 /* : Int */;
val* var44 /* : Sys */;
val* var46 /* : NativeArray[String] */;
static val* varonce45;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
val* var50 /* : String */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
val* var54 /* : String */;
val* var55 /* : String */;
val* var56 /* : String */;
val* var57 /* : String */;
val* var58 /* : Sys */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
val* var62 /* : String */;
val* var63 /* : Sys */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
val* var67 /* : String */;
val* var68 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var70 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var_71 /* var : Map[MClass, Array[nullable MPropDef]] */;
val* var72 /* : MapIterator[nullable Object, nullable Object] */;
val* var_73 /* var : MapIterator[MClass, Array[nullable MPropDef]] */;
short int var74 /* : Bool */;
val* var76 /* : nullable Object */;
val* var_t77 /* var t: MClass */;
val* var78 /* : nullable Object */;
val* var_table79 /* var table: Array[nullable MPropDef] */;
long var80 /* : Int */;
long var82 /* : Int */;
long var83 /* : Int */;
short int var85 /* : Bool */;
int cltype86;
int idtype87;
const char* var_class_name88;
long var89 /* : Int */;
val* var_90 /* var : Array[nullable MPropDef] */;
val* var91 /* : IndexedIterator[nullable Object] */;
val* var_92 /* var : IndexedIterator[nullable MPropDef] */;
short int var93 /* : Bool */;
val* var95 /* : nullable Object */;
val* var_e96 /* var e: nullable MPropDef */;
short int var97 /* : Bool */;
short int var98 /* : Bool */;
short int var100 /* : Bool */;
short int var102 /* : Bool */;
long var103 /* : Int */;
short int var105 /* : Bool */;
int cltype106;
int idtype107;
const char* var_class_name108;
long var109 /* : Int */;
val* var111 /* : Sys */;
val* var113 /* : NativeArray[String] */;
static val* varonce112;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : NativeString */;
val* var117 /* : String */;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : NativeString */;
val* var121 /* : String */;
val* var122 /* : String */;
val* var123 /* : String */;
val* var124 /* : String */;
val* var125 /* : Sys */;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : NativeString */;
val* var129 /* : String */;
val* var130 /* : Sys */;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : NativeString */;
val* var134 /* : String */;
val* var135 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var137 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var_138 /* var : Map[MClass, Array[nullable MPropDef]] */;
val* var139 /* : MapIterator[nullable Object, nullable Object] */;
val* var_140 /* var : MapIterator[MClass, Array[nullable MPropDef]] */;
short int var141 /* : Bool */;
val* var143 /* : nullable Object */;
val* var_t144 /* var t: MClass */;
val* var145 /* : nullable Object */;
val* var_table146 /* var table: Array[nullable MPropDef] */;
long var147 /* : Int */;
long var149 /* : Int */;
long var150 /* : Int */;
short int var152 /* : Bool */;
int cltype153;
int idtype154;
const char* var_class_name155;
long var156 /* : Int */;
val* var_157 /* var : Array[nullable MPropDef] */;
val* var158 /* : IndexedIterator[nullable Object] */;
val* var_159 /* var : IndexedIterator[nullable MPropDef] */;
short int var160 /* : Bool */;
val* var162 /* : nullable Object */;
val* var_e163 /* var e: nullable MPropDef */;
short int var164 /* : Bool */;
short int var165 /* : Bool */;
short int var167 /* : Bool */;
short int var169 /* : Bool */;
long var170 /* : Int */;
short int var172 /* : Bool */;
int cltype173;
int idtype174;
const char* var_class_name175;
long var176 /* : Int */;
val* var178 /* : Sys */;
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
val* var189 /* : String */;
val* var190 /* : String */;
val* var191 /* : String */;
val* var192 /* : Sys */;
static val* varonce193;
val* var194 /* : String */;
char* var195 /* : NativeString */;
val* var196 /* : String */;
val* var197 /* : Sys */;
static val* varonce198;
val* var199 /* : String */;
char* var200 /* : NativeString */;
val* var201 /* : String */;
val* var202 /* : Map[MClass, Array[nullable MProperty]] */;
val* var204 /* : Map[MClass, Array[nullable MProperty]] */;
val* var_205 /* var : Map[MClass, Array[nullable MProperty]] */;
val* var206 /* : MapIterator[nullable Object, nullable Object] */;
val* var_207 /* var : MapIterator[MClass, Array[nullable MProperty]] */;
short int var208 /* : Bool */;
val* var210 /* : nullable Object */;
val* var_t211 /* var t: MClass */;
val* var212 /* : nullable Object */;
val* var_table213 /* var table: Array[nullable MProperty] */;
long var214 /* : Int */;
long var216 /* : Int */;
long var217 /* : Int */;
short int var219 /* : Bool */;
int cltype220;
int idtype221;
const char* var_class_name222;
long var223 /* : Int */;
val* var_224 /* var : Array[nullable MProperty] */;
val* var225 /* : IndexedIterator[nullable Object] */;
val* var_226 /* var : IndexedIterator[nullable MProperty] */;
short int var227 /* : Bool */;
val* var229 /* : nullable Object */;
val* var_e230 /* var e: nullable MProperty */;
short int var231 /* : Bool */;
short int var232 /* : Bool */;
short int var234 /* : Bool */;
short int var236 /* : Bool */;
long var237 /* : Int */;
short int var239 /* : Bool */;
int cltype240;
int idtype241;
const char* var_class_name242;
long var243 /* : Int */;
val* var245 /* : Sys */;
val* var247 /* : NativeArray[String] */;
static val* varonce246;
static val* varonce248;
val* var249 /* : String */;
char* var250 /* : NativeString */;
val* var251 /* : String */;
static val* varonce252;
val* var253 /* : String */;
char* var254 /* : NativeString */;
val* var255 /* : String */;
val* var256 /* : String */;
val* var257 /* : String */;
val* var258 /* : String */;
var = glob_sys;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "# size of subtyping tables";
var3 = core__flat___NativeString___to_s_full(var2, 26l, 26l);
var1 = var3;
varonce = var1;
}
{
core__file___Sys___print(var, var1); /* Direct call file#Sys#print on <var:Sys>*/
}
var4 = glob_sys;
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "\ttotal \tholes";
var8 = core__flat___NativeString___to_s_full(var7, 13l, 13l);
var6 = var8;
varonce5 = var6;
}
{
core__file___Sys___print(var4, var6); /* Direct call file#Sys#print on <var4:Sys>*/
}
var_total = 0l;
var_holes = 0l;
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#class_tables (self) on <self:SeparateErasureCompiler> */
var11 = self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___class_tables].val; /* _class_tables on <self:SeparateErasureCompiler> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _class_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 427);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_ = var9;
{
var12 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__MapRead__iterator]))(var_); /* iterator on <var_:Map[MClass, Array[nullable MClass]]>*/
}
var_13 = var12;
for(;;) {
{
var14 = ((short int(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__MapIterator__is_ok]))(var_13); /* is_ok on <var_13:MapIterator[MClass, Array[nullable MClass]]>*/
}
if (var14){
} else {
goto BREAK_label;
}
{
var15 = ((val*(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__MapIterator__key]))(var_13); /* key on <var_13:MapIterator[MClass, Array[nullable MClass]]>*/
}
var_t = var15;
{
var16 = ((val*(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__MapIterator__item]))(var_13); /* item on <var_13:MapIterator[MClass, Array[nullable MClass]]>*/
}
var_table = var16;
{
{ /* Inline array#AbstractArrayRead#length (var_table) on <var_table:Array[nullable MClass]> */
var19 = var_table->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_table:Array[nullable MClass]> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_total,var17) on <var_total:Int> */
/* Covariant cast for argument 0 (i) <var17:Int> isa OTHER */
/* <var17:Int> isa OTHER */
var22 = 1; /* easy <var17:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var23 = var_total + var17;
var20 = var23;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var_total = var20;
var_24 = var_table;
{
var25 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_24);
}
var_26 = var25;
for(;;) {
{
var27 = ((short int(*)(val* self))((((long)var_26&3)?class_info[((long)var_26&3)]:var_26->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_26); /* is_ok on <var_26:IndexedIterator[nullable MClass]>*/
}
if (var27){
} else {
goto BREAK_label28;
}
{
var29 = ((val*(*)(val* self))((((long)var_26&3)?class_info[((long)var_26&3)]:var_26->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_26); /* item on <var_26:IndexedIterator[nullable MClass]>*/
}
var_e = var29;
if (var_e == NULL) {
var30 = 1; /* is null */
} else {
var30 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_e,((val*)NULL)) on <var_e:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_e,var_other) on <var_e:nullable MClass(MClass)> */
var35 = var_e == var_other;
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
{ /* Inline kernel#Int#+ (var_holes,1l) on <var_holes:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var38 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var42 = var_holes + 1l;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_holes = var36;
} else {
}
{
((void(*)(val* self))((((long)var_26&3)?class_info[((long)var_26&3)]:var_26->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_26); /* next on <var_26:IndexedIterator[nullable MClass]>*/
}
}
BREAK_label28: (void)0;
{
((void(*)(val* self))((((long)var_26&3)?class_info[((long)var_26&3)]:var_26->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_26); /* finish on <var_26:IndexedIterator[nullable MClass]>*/
}
{
((void(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__MapIterator__next]))(var_13); /* next on <var_13:MapIterator[MClass, Array[nullable MClass]]>*/
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#MapIterator#finish (var_13) on <var_13:MapIterator[MClass, Array[nullable MClass]]> */
RET_LABEL43:(void)0;
}
}
var44 = glob_sys;
if (unlikely(varonce45==NULL)) {
var46 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "\t";
var50 = core__flat___NativeString___to_s_full(var49, 1l, 1l);
var48 = var50;
varonce47 = var48;
}
((struct instance_core__NativeArray*)var46)->values[0]=var48;
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "\t";
var54 = core__flat___NativeString___to_s_full(var53, 1l, 1l);
var52 = var54;
varonce51 = var52;
}
((struct instance_core__NativeArray*)var46)->values[2]=var52;
} else {
var46 = varonce45;
varonce45 = NULL;
}
var55 = core__flat___Int___core__abstract_text__Object__to_s(var_total);
((struct instance_core__NativeArray*)var46)->values[1]=var55;
var56 = core__flat___Int___core__abstract_text__Object__to_s(var_holes);
((struct instance_core__NativeArray*)var46)->values[3]=var56;
{
var57 = ((val*(*)(val* self))(var46->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var46); /* native_to_s on <var46:NativeArray[String]>*/
}
varonce45 = var46;
{
core__file___Sys___print(var44, var57); /* Direct call file#Sys#print on <var44:Sys>*/
}
var58 = glob_sys;
if (likely(varonce59!=NULL)) {
var60 = varonce59;
} else {
var61 = "# size of resolution tables";
var62 = core__flat___NativeString___to_s_full(var61, 27l, 27l);
var60 = var62;
varonce59 = var60;
}
{
core__file___Sys___print(var58, var60); /* Direct call file#Sys#print on <var58:Sys>*/
}
var63 = glob_sys;
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = "\ttotal \tholes";
var67 = core__flat___NativeString___to_s_full(var66, 13l, 13l);
var65 = var67;
varonce64 = var65;
}
{
core__file___Sys___print(var63, var65); /* Direct call file#Sys#print on <var63:Sys>*/
}
var_total = 0l;
var_holes = 0l;
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#vt_tables (self) on <self:SeparateErasureCompiler> */
var70 = self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___vt_tables].val; /* _vt_tables on <self:SeparateErasureCompiler> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vt_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 428);
fatal_exit(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
var_71 = var68;
{
var72 = ((val*(*)(val* self))((((long)var_71&3)?class_info[((long)var_71&3)]:var_71->class)->vft[COLOR_core__abstract_collection__MapRead__iterator]))(var_71); /* iterator on <var_71:Map[MClass, Array[nullable MPropDef]]>*/
}
var_73 = var72;
for(;;) {
{
var74 = ((short int(*)(val* self))((((long)var_73&3)?class_info[((long)var_73&3)]:var_73->class)->vft[COLOR_core__abstract_collection__MapIterator__is_ok]))(var_73); /* is_ok on <var_73:MapIterator[MClass, Array[nullable MPropDef]]>*/
}
if (var74){
} else {
goto BREAK_label75;
}
{
var76 = ((val*(*)(val* self))((((long)var_73&3)?class_info[((long)var_73&3)]:var_73->class)->vft[COLOR_core__abstract_collection__MapIterator__key]))(var_73); /* key on <var_73:MapIterator[MClass, Array[nullable MPropDef]]>*/
}
var_t77 = var76;
{
var78 = ((val*(*)(val* self))((((long)var_73&3)?class_info[((long)var_73&3)]:var_73->class)->vft[COLOR_core__abstract_collection__MapIterator__item]))(var_73); /* item on <var_73:MapIterator[MClass, Array[nullable MPropDef]]>*/
}
var_table79 = var78;
{
{ /* Inline array#AbstractArrayRead#length (var_table79) on <var_table79:Array[nullable MPropDef]> */
var82 = var_table79->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_table79:Array[nullable MPropDef]> */
var80 = var82;
RET_LABEL81:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_total,var80) on <var_total:Int> */
/* Covariant cast for argument 0 (i) <var80:Int> isa OTHER */
/* <var80:Int> isa OTHER */
var85 = 1; /* easy <var80:Int> isa OTHER*/
if (unlikely(!var85)) {
var_class_name88 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name88);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var89 = var_total + var80;
var83 = var89;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
}
var_total = var83;
var_90 = var_table79;
{
var91 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_90);
}
var_92 = var91;
for(;;) {
{
var93 = ((short int(*)(val* self))((((long)var_92&3)?class_info[((long)var_92&3)]:var_92->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_92); /* is_ok on <var_92:IndexedIterator[nullable MPropDef]>*/
}
if (var93){
} else {
goto BREAK_label94;
}
{
var95 = ((val*(*)(val* self))((((long)var_92&3)?class_info[((long)var_92&3)]:var_92->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_92); /* item on <var_92:IndexedIterator[nullable MPropDef]>*/
}
var_e96 = var95;
if (var_e96 == NULL) {
var97 = 1; /* is null */
} else {
var97 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_e96,((val*)NULL)) on <var_e96:nullable MPropDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_e96,var_other) on <var_e96:nullable MPropDef(MPropDef)> */
var102 = var_e96 == var_other;
var100 = var102;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
}
var98 = var100;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
var97 = var98;
}
if (var97){
{
{ /* Inline kernel#Int#+ (var_holes,1l) on <var_holes:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var105 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var105)) {
var_class_name108 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name108);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var109 = var_holes + 1l;
var103 = var109;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
}
var_holes = var103;
} else {
}
{
((void(*)(val* self))((((long)var_92&3)?class_info[((long)var_92&3)]:var_92->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_92); /* next on <var_92:IndexedIterator[nullable MPropDef]>*/
}
}
BREAK_label94: (void)0;
{
((void(*)(val* self))((((long)var_92&3)?class_info[((long)var_92&3)]:var_92->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_92); /* finish on <var_92:IndexedIterator[nullable MPropDef]>*/
}
{
((void(*)(val* self))((((long)var_73&3)?class_info[((long)var_73&3)]:var_73->class)->vft[COLOR_core__abstract_collection__MapIterator__next]))(var_73); /* next on <var_73:MapIterator[MClass, Array[nullable MPropDef]]>*/
}
}
BREAK_label75: (void)0;
{
{ /* Inline abstract_collection#MapIterator#finish (var_73) on <var_73:MapIterator[MClass, Array[nullable MPropDef]]> */
RET_LABEL110:(void)0;
}
}
var111 = glob_sys;
if (unlikely(varonce112==NULL)) {
var113 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce114!=NULL)) {
var115 = varonce114;
} else {
var116 = "\t";
var117 = core__flat___NativeString___to_s_full(var116, 1l, 1l);
var115 = var117;
varonce114 = var115;
}
((struct instance_core__NativeArray*)var113)->values[0]=var115;
if (likely(varonce118!=NULL)) {
var119 = varonce118;
} else {
var120 = "\t";
var121 = core__flat___NativeString___to_s_full(var120, 1l, 1l);
var119 = var121;
varonce118 = var119;
}
((struct instance_core__NativeArray*)var113)->values[2]=var119;
} else {
var113 = varonce112;
varonce112 = NULL;
}
var122 = core__flat___Int___core__abstract_text__Object__to_s(var_total);
((struct instance_core__NativeArray*)var113)->values[1]=var122;
var123 = core__flat___Int___core__abstract_text__Object__to_s(var_holes);
((struct instance_core__NativeArray*)var113)->values[3]=var123;
{
var124 = ((val*(*)(val* self))(var113->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var113); /* native_to_s on <var113:NativeArray[String]>*/
}
varonce112 = var113;
{
core__file___Sys___print(var111, var124); /* Direct call file#Sys#print on <var111:Sys>*/
}
var125 = glob_sys;
if (likely(varonce126!=NULL)) {
var127 = varonce126;
} else {
var128 = "# size of methods tables";
var129 = core__flat___NativeString___to_s_full(var128, 24l, 24l);
var127 = var129;
varonce126 = var127;
}
{
core__file___Sys___print(var125, var127); /* Direct call file#Sys#print on <var125:Sys>*/
}
var130 = glob_sys;
if (likely(varonce131!=NULL)) {
var132 = varonce131;
} else {
var133 = "\ttotal \tholes";
var134 = core__flat___NativeString___to_s_full(var133, 13l, 13l);
var132 = var134;
varonce131 = var132;
}
{
core__file___Sys___print(var130, var132); /* Direct call file#Sys#print on <var130:Sys>*/
}
var_total = 0l;
var_holes = 0l;
{
{ /* Inline separate_compiler#SeparateCompiler#method_tables (self) on <self:SeparateErasureCompiler> */
var137 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___method_tables].val; /* _method_tables on <self:SeparateErasureCompiler> */
if (unlikely(var137 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _method_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1067);
fatal_exit(1);
}
var135 = var137;
RET_LABEL136:(void)0;
}
}
var_138 = var135;
{
var139 = ((val*(*)(val* self))((((long)var_138&3)?class_info[((long)var_138&3)]:var_138->class)->vft[COLOR_core__abstract_collection__MapRead__iterator]))(var_138); /* iterator on <var_138:Map[MClass, Array[nullable MPropDef]]>*/
}
var_140 = var139;
for(;;) {
{
var141 = ((short int(*)(val* self))((((long)var_140&3)?class_info[((long)var_140&3)]:var_140->class)->vft[COLOR_core__abstract_collection__MapIterator__is_ok]))(var_140); /* is_ok on <var_140:MapIterator[MClass, Array[nullable MPropDef]]>*/
}
if (var141){
} else {
goto BREAK_label142;
}
{
var143 = ((val*(*)(val* self))((((long)var_140&3)?class_info[((long)var_140&3)]:var_140->class)->vft[COLOR_core__abstract_collection__MapIterator__key]))(var_140); /* key on <var_140:MapIterator[MClass, Array[nullable MPropDef]]>*/
}
var_t144 = var143;
{
var145 = ((val*(*)(val* self))((((long)var_140&3)?class_info[((long)var_140&3)]:var_140->class)->vft[COLOR_core__abstract_collection__MapIterator__item]))(var_140); /* item on <var_140:MapIterator[MClass, Array[nullable MPropDef]]>*/
}
var_table146 = var145;
{
{ /* Inline array#AbstractArrayRead#length (var_table146) on <var_table146:Array[nullable MPropDef]> */
var149 = var_table146->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_table146:Array[nullable MPropDef]> */
var147 = var149;
RET_LABEL148:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_total,var147) on <var_total:Int> */
/* Covariant cast for argument 0 (i) <var147:Int> isa OTHER */
/* <var147:Int> isa OTHER */
var152 = 1; /* easy <var147:Int> isa OTHER*/
if (unlikely(!var152)) {
var_class_name155 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name155);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var156 = var_total + var147;
var150 = var156;
goto RET_LABEL151;
RET_LABEL151:(void)0;
}
}
var_total = var150;
var_157 = var_table146;
{
var158 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_157);
}
var_159 = var158;
for(;;) {
{
var160 = ((short int(*)(val* self))((((long)var_159&3)?class_info[((long)var_159&3)]:var_159->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_159); /* is_ok on <var_159:IndexedIterator[nullable MPropDef]>*/
}
if (var160){
} else {
goto BREAK_label161;
}
{
var162 = ((val*(*)(val* self))((((long)var_159&3)?class_info[((long)var_159&3)]:var_159->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_159); /* item on <var_159:IndexedIterator[nullable MPropDef]>*/
}
var_e163 = var162;
if (var_e163 == NULL) {
var164 = 1; /* is null */
} else {
var164 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_e163,((val*)NULL)) on <var_e163:nullable MPropDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_e163,var_other) on <var_e163:nullable MPropDef(MPropDef)> */
var169 = var_e163 == var_other;
var167 = var169;
goto RET_LABEL168;
RET_LABEL168:(void)0;
}
}
var165 = var167;
goto RET_LABEL166;
RET_LABEL166:(void)0;
}
var164 = var165;
}
if (var164){
{
{ /* Inline kernel#Int#+ (var_holes,1l) on <var_holes:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var172 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var172)) {
var_class_name175 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name175);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var176 = var_holes + 1l;
var170 = var176;
goto RET_LABEL171;
RET_LABEL171:(void)0;
}
}
var_holes = var170;
} else {
}
{
((void(*)(val* self))((((long)var_159&3)?class_info[((long)var_159&3)]:var_159->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_159); /* next on <var_159:IndexedIterator[nullable MPropDef]>*/
}
}
BREAK_label161: (void)0;
{
((void(*)(val* self))((((long)var_159&3)?class_info[((long)var_159&3)]:var_159->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_159); /* finish on <var_159:IndexedIterator[nullable MPropDef]>*/
}
{
((void(*)(val* self))((((long)var_140&3)?class_info[((long)var_140&3)]:var_140->class)->vft[COLOR_core__abstract_collection__MapIterator__next]))(var_140); /* next on <var_140:MapIterator[MClass, Array[nullable MPropDef]]>*/
}
}
BREAK_label142: (void)0;
{
{ /* Inline abstract_collection#MapIterator#finish (var_140) on <var_140:MapIterator[MClass, Array[nullable MPropDef]]> */
RET_LABEL177:(void)0;
}
}
var178 = glob_sys;
if (unlikely(varonce179==NULL)) {
var180 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce181!=NULL)) {
var182 = varonce181;
} else {
var183 = "\t";
var184 = core__flat___NativeString___to_s_full(var183, 1l, 1l);
var182 = var184;
varonce181 = var182;
}
((struct instance_core__NativeArray*)var180)->values[0]=var182;
if (likely(varonce185!=NULL)) {
var186 = varonce185;
} else {
var187 = "\t";
var188 = core__flat___NativeString___to_s_full(var187, 1l, 1l);
var186 = var188;
varonce185 = var186;
}
((struct instance_core__NativeArray*)var180)->values[2]=var186;
} else {
var180 = varonce179;
varonce179 = NULL;
}
var189 = core__flat___Int___core__abstract_text__Object__to_s(var_total);
((struct instance_core__NativeArray*)var180)->values[1]=var189;
var190 = core__flat___Int___core__abstract_text__Object__to_s(var_holes);
((struct instance_core__NativeArray*)var180)->values[3]=var190;
{
var191 = ((val*(*)(val* self))(var180->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var180); /* native_to_s on <var180:NativeArray[String]>*/
}
varonce179 = var180;
{
core__file___Sys___print(var178, var191); /* Direct call file#Sys#print on <var178:Sys>*/
}
var192 = glob_sys;
if (likely(varonce193!=NULL)) {
var194 = varonce193;
} else {
var195 = "# size of attributes tables";
var196 = core__flat___NativeString___to_s_full(var195, 27l, 27l);
var194 = var196;
varonce193 = var194;
}
{
core__file___Sys___print(var192, var194); /* Direct call file#Sys#print on <var192:Sys>*/
}
var197 = glob_sys;
if (likely(varonce198!=NULL)) {
var199 = varonce198;
} else {
var200 = "\ttotal \tholes";
var201 = core__flat___NativeString___to_s_full(var200, 13l, 13l);
var199 = var201;
varonce198 = var199;
}
{
core__file___Sys___print(var197, var199); /* Direct call file#Sys#print on <var197:Sys>*/
}
var_total = 0l;
var_holes = 0l;
{
{ /* Inline separate_compiler#SeparateCompiler#attr_tables (self) on <self:SeparateErasureCompiler> */
var204 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___attr_tables].val; /* _attr_tables on <self:SeparateErasureCompiler> */
if (unlikely(var204 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _attr_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1068);
fatal_exit(1);
}
var202 = var204;
RET_LABEL203:(void)0;
}
}
var_205 = var202;
{
var206 = ((val*(*)(val* self))((((long)var_205&3)?class_info[((long)var_205&3)]:var_205->class)->vft[COLOR_core__abstract_collection__MapRead__iterator]))(var_205); /* iterator on <var_205:Map[MClass, Array[nullable MProperty]]>*/
}
var_207 = var206;
for(;;) {
{
var208 = ((short int(*)(val* self))((((long)var_207&3)?class_info[((long)var_207&3)]:var_207->class)->vft[COLOR_core__abstract_collection__MapIterator__is_ok]))(var_207); /* is_ok on <var_207:MapIterator[MClass, Array[nullable MProperty]]>*/
}
if (var208){
} else {
goto BREAK_label209;
}
{
var210 = ((val*(*)(val* self))((((long)var_207&3)?class_info[((long)var_207&3)]:var_207->class)->vft[COLOR_core__abstract_collection__MapIterator__key]))(var_207); /* key on <var_207:MapIterator[MClass, Array[nullable MProperty]]>*/
}
var_t211 = var210;
{
var212 = ((val*(*)(val* self))((((long)var_207&3)?class_info[((long)var_207&3)]:var_207->class)->vft[COLOR_core__abstract_collection__MapIterator__item]))(var_207); /* item on <var_207:MapIterator[MClass, Array[nullable MProperty]]>*/
}
var_table213 = var212;
{
{ /* Inline array#AbstractArrayRead#length (var_table213) on <var_table213:Array[nullable MProperty]> */
var216 = var_table213->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_table213:Array[nullable MProperty]> */
var214 = var216;
RET_LABEL215:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_total,var214) on <var_total:Int> */
/* Covariant cast for argument 0 (i) <var214:Int> isa OTHER */
/* <var214:Int> isa OTHER */
var219 = 1; /* easy <var214:Int> isa OTHER*/
if (unlikely(!var219)) {
var_class_name222 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name222);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var223 = var_total + var214;
var217 = var223;
goto RET_LABEL218;
RET_LABEL218:(void)0;
}
}
var_total = var217;
var_224 = var_table213;
{
var225 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_224);
}
var_226 = var225;
for(;;) {
{
var227 = ((short int(*)(val* self))((((long)var_226&3)?class_info[((long)var_226&3)]:var_226->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_226); /* is_ok on <var_226:IndexedIterator[nullable MProperty]>*/
}
if (var227){
} else {
goto BREAK_label228;
}
{
var229 = ((val*(*)(val* self))((((long)var_226&3)?class_info[((long)var_226&3)]:var_226->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_226); /* item on <var_226:IndexedIterator[nullable MProperty]>*/
}
var_e230 = var229;
if (var_e230 == NULL) {
var231 = 1; /* is null */
} else {
var231 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_e230,((val*)NULL)) on <var_e230:nullable MProperty> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_e230,var_other) on <var_e230:nullable MProperty(MProperty)> */
var236 = var_e230 == var_other;
var234 = var236;
goto RET_LABEL235;
RET_LABEL235:(void)0;
}
}
var232 = var234;
goto RET_LABEL233;
RET_LABEL233:(void)0;
}
var231 = var232;
}
if (var231){
{
{ /* Inline kernel#Int#+ (var_holes,1l) on <var_holes:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var239 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var239)) {
var_class_name242 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name242);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var243 = var_holes + 1l;
var237 = var243;
goto RET_LABEL238;
RET_LABEL238:(void)0;
}
}
var_holes = var237;
} else {
}
{
((void(*)(val* self))((((long)var_226&3)?class_info[((long)var_226&3)]:var_226->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_226); /* next on <var_226:IndexedIterator[nullable MProperty]>*/
}
}
BREAK_label228: (void)0;
{
((void(*)(val* self))((((long)var_226&3)?class_info[((long)var_226&3)]:var_226->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_226); /* finish on <var_226:IndexedIterator[nullable MProperty]>*/
}
{
((void(*)(val* self))((((long)var_207&3)?class_info[((long)var_207&3)]:var_207->class)->vft[COLOR_core__abstract_collection__MapIterator__next]))(var_207); /* next on <var_207:MapIterator[MClass, Array[nullable MProperty]]>*/
}
}
BREAK_label209: (void)0;
{
{ /* Inline abstract_collection#MapIterator#finish (var_207) on <var_207:MapIterator[MClass, Array[nullable MProperty]]> */
RET_LABEL244:(void)0;
}
}
var245 = glob_sys;
if (unlikely(varonce246==NULL)) {
var247 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce248!=NULL)) {
var249 = varonce248;
} else {
var250 = "\t";
var251 = core__flat___NativeString___to_s_full(var250, 1l, 1l);
var249 = var251;
varonce248 = var249;
}
((struct instance_core__NativeArray*)var247)->values[0]=var249;
if (likely(varonce252!=NULL)) {
var253 = varonce252;
} else {
var254 = "\t";
var255 = core__flat___NativeString___to_s_full(var254, 1l, 1l);
var253 = var255;
varonce252 = var253;
}
((struct instance_core__NativeArray*)var247)->values[2]=var253;
} else {
var247 = varonce246;
varonce246 = NULL;
}
var256 = core__flat___Int___core__abstract_text__Object__to_s(var_total);
((struct instance_core__NativeArray*)var247)->values[1]=var256;
var257 = core__flat___Int___core__abstract_text__Object__to_s(var_holes);
((struct instance_core__NativeArray*)var247)->values[3]=var257;
{
var258 = ((val*(*)(val* self))(var247->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var247); /* native_to_s on <var247:NativeArray[String]>*/
}
varonce246 = var247;
{
core__file___Sys___print(var245, var258); /* Direct call file#Sys#print on <var245:Sys>*/
}
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompilerVisitor#compile_callsite for (self: SeparateErasureCompilerVisitor, CallSite, Array[RuntimeVariable]): nullable RuntimeVariable */
val* nitc___nitc__SeparateErasureCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var_callsite /* var callsite: CallSite */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var1 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
val* var6 /* : AbstractCompiler */;
val* var8 /* : AbstractCompiler */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var10 /* : ModelBuilder */;
val* var12 /* : ModelBuilder */;
val* var13 /* : ToolContext */;
val* var15 /* : ToolContext */;
val* var16 /* : OptionBool */;
val* var18 /* : OptionBool */;
val* var19 /* : nullable Object */;
val* var21 /* : nullable Object */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : MSignature */;
val* var31 /* : MSignature */;
val* var32 /* : nullable MType */;
val* var34 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
val* var40 /* : NativeArray[String] */;
static val* varonce;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
val* var44 /* : String */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
val* var48 /* : String */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
val* var52 /* : String */;
val* var53 /* : String */;
val* var54 /* : String */;
val* var55 /* : String */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
val* var59 /* : String */;
val* var60 /* : RuntimeVariable */;
val* var_cond /* var cond: RuntimeVariable */;
val* var62 /* : NativeArray[String] */;
static val* varonce61;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
val* var66 /* : String */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
val* var70 /* : String */;
val* var71 /* : String */;
val* var72 /* : String */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
val* var76 /* : String */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
val* var80 /* : String */;
var_callsite = p0;
var_arguments = p1;
{
var1 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nitc___nitc__SeparateErasureCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(self, p0, p1); /* compile_callsite on <self:SeparateErasureCompilerVisitor>*/
}
var_res = var1;
{
{ /* Inline typing#CallSite#erasure_cast (var_callsite) on <var_callsite:CallSite> */
var5 = var_callsite->attrs[COLOR_nitc__typing__CallSite___erasure_cast].s; /* _erasure_cast on <var_callsite:CallSite> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_ = var3;
if (var3){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateErasureCompilerVisitor> */
var8 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateErasureCompilerVisitor> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1133);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
/* <var6:AbstractCompiler(SeparateCompiler)> isa SeparateErasureCompiler */
cltype = type_nitc__SeparateErasureCompiler.color;
idtype = type_nitc__SeparateErasureCompiler.id;
if(cltype >= var6->type->table_size) {
var9 = 0;
} else {
var9 = var6->type->type_table[cltype] == idtype;
}
if (unlikely(!var9)) {
var_class_name = var6 == NULL ? "null" : var6->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SeparateErasureCompiler", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 480);
fatal_exit(1);
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var6) on <var6:SeparateCompiler(SeparateErasureCompiler)> */
var12 = var6->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var6:SeparateCompiler(SeparateErasureCompiler)> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var10) on <var10:ModelBuilder> */
var15 = var10->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var10:ModelBuilder> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline separate_erasure_compiler#ToolContext#opt_no_check_erasure_cast (var13) on <var13:ToolContext> */
var18 = var13->attrs[COLOR_nitc__separate_erasure_compiler__ToolContext___opt_no_check_erasure_cast].val; /* _opt_no_check_erasure_cast on <var13:ToolContext> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_erasure_cast");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 26);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline opts#Option#value (var16) on <var16:OptionBool> */
var21 = var16->attrs[COLOR_opts__Option___value].val; /* _value on <var16:OptionBool> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
var22 = (short int)((long)(var19)>>2);
var23 = !var22;
var2 = var23;
} else {
var2 = var_;
}
if (var2){
if (var_res == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,((val*)NULL)) on <var_res:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var27 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
var28 = !var27;
var25 = var28;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var24 = var25;
}
if (unlikely(!var24)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 481);
fatal_exit(1);
}
{
{ /* Inline typing#CallSite#msignature (var_callsite) on <var_callsite:CallSite> */
var31 = var_callsite->attrs[COLOR_nitc__typing__CallSite___msignature].val; /* _msignature on <var_callsite:CallSite> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 660);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline model#MSignature#return_mtype (var29) on <var29:MSignature> */
var34 = var29->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var29:MSignature> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
var_mtype = var32;
if (var_mtype == NULL) {
var35 = 0; /* is null */
} else {
var35 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
var38 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mtype, var_other); /* == on <var_mtype:nullable MType(MType)>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 483);
fatal_exit(1);
}
if (unlikely(varonce==NULL)) {
var40 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "/* Erasure cast for return ";
var44 = core__flat___NativeString___to_s_full(var43, 27l, 27l);
var42 = var44;
varonce41 = var42;
}
((struct instance_core__NativeArray*)var40)->values[0]=var42;
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = " isa ";
var48 = core__flat___NativeString___to_s_full(var47, 5l, 5l);
var46 = var48;
varonce45 = var46;
}
((struct instance_core__NativeArray*)var40)->values[2]=var46;
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = " */";
var52 = core__flat___NativeString___to_s_full(var51, 3l, 3l);
var50 = var52;
varonce49 = var50;
}
((struct instance_core__NativeArray*)var40)->values[4]=var50;
} else {
var40 = varonce;
varonce = NULL;
}
{
var53 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var40)->values[1]=var53;
{
var54 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var40)->values[3]=var54;
{
var55 = ((val*(*)(val* self))(var40->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var40); /* native_to_s on <var40:NativeArray[String]>*/
}
varonce = var40;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var55); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = "erasure";
var59 = core__flat___NativeString___to_s_full(var58, 7l, 7l);
var57 = var59;
varonce56 = var57;
}
{
var60 = nitc___nitc__SeparateErasureCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__type_test(self, var_res, var_mtype, var57);
}
var_cond = var60;
if (unlikely(varonce61==NULL)) {
var62 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "if (!";
var66 = core__flat___NativeString___to_s_full(var65, 5l, 5l);
var64 = var66;
varonce63 = var64;
}
((struct instance_core__NativeArray*)var62)->values[0]=var64;
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = ") {";
var70 = core__flat___NativeString___to_s_full(var69, 3l, 3l);
var68 = var70;
varonce67 = var68;
}
((struct instance_core__NativeArray*)var62)->values[2]=var68;
} else {
var62 = varonce61;
varonce61 = NULL;
}
{
var71 = ((val*(*)(val* self))(var_cond->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_cond); /* to_s on <var_cond:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var62)->values[1]=var71;
{
var72 = ((val*(*)(val* self))(var62->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var62); /* native_to_s on <var62:NativeArray[String]>*/
}
varonce61 = var62;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var72); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = "Cast failed";
var76 = core__flat___NativeString___to_s_full(var75, 11l, 11l);
var74 = var76;
varonce73 = var74;
}
{
nitc___nitc__AbstractCompilerVisitor___add_abort(self, var74); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <self:SeparateErasureCompilerVisitor>*/
}
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = "}";
var80 = core__flat___NativeString___to_s_full(var79, 1l, 1l);
var78 = var80;
varonce77 = var78;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var78); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompilerVisitor#init_instance for (self: SeparateErasureCompilerVisitor, MClassType): RuntimeVariable */
val* nitc___nitc__SeparateErasureCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__init_instance(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_mtype /* var mtype: MClassType */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : String */;
val* var6 /* : MClass */;
val* var8 /* : MClass */;
val* var9 /* : String */;
val* var10 /* : String */;
val* var12 /* : NativeArray[String] */;
static val* varonce11;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : String */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : String */;
val* var21 /* : MClass */;
val* var23 /* : MClass */;
val* var24 /* : String */;
val* var25 /* : String */;
val* var26 /* : RuntimeVariable */;
var_mtype = p0;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "NEW_";
var5 = core__flat___NativeString___to_s_full(var4, 4l, 4l);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[0]=var3;
} else {
var1 = varonce;
varonce = NULL;
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var8 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1163);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var6);
}
((struct instance_core__NativeArray*)var1)->values[1]=var9;
{
var10 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var10); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateErasureCompilerVisitor>*/
}
if (unlikely(varonce11==NULL)) {
var12 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "NEW_";
var16 = core__flat___NativeString___to_s_full(var15, 4l, 4l);
var14 = var16;
varonce13 = var14;
}
((struct instance_core__NativeArray*)var12)->values[0]=var14;
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "()";
var20 = core__flat___NativeString___to_s_full(var19, 2l, 2l);
var18 = var20;
varonce17 = var18;
}
((struct instance_core__NativeArray*)var12)->values[2]=var18;
} else {
var12 = varonce11;
varonce11 = NULL;
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var23 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1163);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var21);
}
((struct instance_core__NativeArray*)var12)->values[1]=var24;
{
var25 = ((val*(*)(val* self))(var12->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var12); /* native_to_s on <var12:NativeArray[String]>*/
}
varonce11 = var12;
{
var26 = nitc___nitc__AbstractCompilerVisitor___new_expr(self, var25, var_mtype);
}
var = var26;
goto RET_LABEL;
RET_LABEL:;
return var;
}
