#include "nitc__separate_erasure_compiler.sep.0.h"
/* method separate_erasure_compiler$ToolContext$opt_erasure for (self: ToolContext): OptionBool */
val* nitc__separate_erasure_compiler___ToolContext___opt_erasure(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__separate_erasure_compiler__ToolContext___opt_erasure].val; /* _opt_erasure on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_erasure");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 22);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler$ToolContext$opt_rta for (self: ToolContext): OptionBool */
val* nitc__separate_erasure_compiler___ToolContext___opt_rta(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__separate_erasure_compiler__ToolContext___opt_rta].val; /* _opt_rta on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_rta");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 24);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler$ToolContext$opt_no_check_erasure_cast for (self: ToolContext): OptionBool */
val* nitc__separate_erasure_compiler___ToolContext___opt_no_check_erasure_cast(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__separate_erasure_compiler__ToolContext___opt_no_check_erasure_cast].val; /* _opt_no_check_erasure_cast on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_erasure_cast");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 26);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler$ToolContext$init for (self: ToolContext) */
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
{ /* Inline separate_erasure_compiler$ToolContext$opt_erasure (self) on <self:ToolContext> */
var5 = self->attrs[COLOR_nitc__separate_erasure_compiler__ToolContext___opt_erasure].val; /* _opt_erasure on <self:ToolContext> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_erasure");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 22);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline separate_erasure_compiler$ToolContext$opt_no_check_erasure_cast (self) on <self:ToolContext> */
var8 = self->attrs[COLOR_nitc__separate_erasure_compiler__ToolContext___opt_no_check_erasure_cast].val; /* _opt_no_check_erasure_cast on <self:ToolContext> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_erasure_cast");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 26);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline separate_erasure_compiler$ToolContext$opt_rta (self) on <self:ToolContext> */
var11 = self->attrs[COLOR_nitc__separate_erasure_compiler__ToolContext___opt_rta].val; /* _opt_rta on <self:ToolContext> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
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
/* method separate_erasure_compiler$ToolContext$process_options for (self: ToolContext, Sequence[String]) */
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
{ /* Inline abstract_compiler$ToolContext$opt_no_check_all (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_all].val; /* _opt_no_check_all on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_all");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 58);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline opts$Option$value (var) on <var:OptionBool> */
var5 = var->attrs[COLOR_opts__Option___value].val; /* _value on <var:OptionBool> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var6 = (short int)((long)(var3)>>2);
if (var6){
{
{ /* Inline separate_erasure_compiler$ToolContext$opt_no_check_erasure_cast (self) on <self:ToolContext> */
var9 = self->attrs[COLOR_nitc__separate_erasure_compiler__ToolContext___opt_no_check_erasure_cast].val; /* _opt_no_check_erasure_cast on <self:ToolContext> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_erasure_cast");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 26);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline opts$Option$value= (var7,1) on <var7:OptionBool> */
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
{ /* Inline separate_erasure_compiler$ToolContext$opt_erasure (self) on <self:ToolContext> */
var15 = self->attrs[COLOR_nitc__separate_erasure_compiler__ToolContext___opt_erasure].val; /* _opt_erasure on <self:ToolContext> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_erasure");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 22);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline opts$Option$value (var13) on <var13:OptionBool> */
var18 = var13->attrs[COLOR_opts__Option___value].val; /* _value on <var13:OptionBool> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
var19 = (short int)((long)(var16)>>2);
if (var19){
{
{ /* Inline separate_compiler$ToolContext$opt_no_tag_primitives (self) on <self:ToolContext> */
var22 = self->attrs[COLOR_nitc__separate_compiler__ToolContext___opt_no_tag_primitives].val; /* _opt_no_tag_primitives on <self:ToolContext> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_tag_primitives");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 32);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline opts$Option$value= (var20,1) on <var20:OptionBool> */
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
/* method separate_erasure_compiler$ErasureCompilerPhase$process_mainmodule for (self: ErasureCompilerPhase, MModule, SequenceRead[MModule]) */
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
{ /* Inline phase$Phase$toolcontext (self) on <self:ErasureCompilerPhase> */
var2 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:ErasureCompilerPhase> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 210);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline separate_erasure_compiler$ToolContext$opt_erasure (var) on <var:ToolContext> */
var5 = var->attrs[COLOR_nitc__separate_erasure_compiler__ToolContext___opt_erasure].val; /* _opt_erasure on <var:ToolContext> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_erasure");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 22);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline opts$Option$value (var3) on <var3:OptionBool> */
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
{ /* Inline phase$Phase$toolcontext (self) on <self:ErasureCompilerPhase> */
var13 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:ErasureCompilerPhase> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 210);
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
{ /* Inline phase$Phase$toolcontext (self) on <self:ErasureCompilerPhase> */
var17 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:ErasureCompilerPhase> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 210);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline separate_erasure_compiler$ToolContext$opt_rta (var15) on <var15:ToolContext> */
var20 = var15->attrs[COLOR_nitc__separate_erasure_compiler__ToolContext___opt_rta].val; /* _opt_rta on <var15:ToolContext> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_rta");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 24);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline opts$Option$value (var18) on <var18:OptionBool> */
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
nitc__separate_erasure_compiler___ModelBuilder___run_separate_erasure_compiler(var_modelbuilder, var_mainmodule, var_analysis); /* Direct call separate_erasure_compiler$ModelBuilder$run_separate_erasure_compiler on <var_modelbuilder:ModelBuilder>*/
}
RET_LABEL:;
}
/* method separate_erasure_compiler$ModelBuilder$run_separate_erasure_compiler for (self: ModelBuilder, MModule, nullable RapidTypeAnalysis) */
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
char* var8 /* : CString */;
val* var9 /* : String */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Int */;
val* var12 /* : nullable Bool */;
val* var13 /* : nullable Bool */;
val* var14 /* : SeparateErasureCompiler */;
val* var_compiler /* var compiler: SeparateErasureCompiler */;
val* var15 /* : Sys */;
long var16 /* : Int */;
long var18 /* : Int */;
long var_time1 /* var time1: Int */;
val* var19 /* : ToolContext */;
val* var21 /* : ToolContext */;
val* var23 /* : NativeArray[String] */;
static val* varonce22;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : CString */;
val* var27 /* : String */;
val* var28 /* : nullable Int */;
val* var29 /* : nullable Int */;
val* var30 /* : nullable Bool */;
val* var31 /* : nullable Bool */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : CString */;
val* var35 /* : String */;
val* var36 /* : nullable Int */;
val* var37 /* : nullable Int */;
val* var38 /* : nullable Bool */;
val* var39 /* : nullable Bool */;
long var40 /* : Int */;
short int var42 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var43 /* : Int */;
val* var44 /* : String */;
val* var45 /* : String */;
var_mainmodule = p0;
var_runtime_type_analysis = p1;
var = glob_sys;
{
{ /* Inline time$Sys$get_time (var) on <var:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var;
var3 = core__time___Sys_get_time___impl(var_for_c_0);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_time0 = var1;
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var6 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
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
var10 = (val*)(20l<<2|1);
var11 = (val*)(20l<<2|1);
var12 = (val*)((long)(0)<<2|3);
var13 = (val*)((long)(0)<<2|3);
var9 = core__flat___CString___to_s_unsafe(var8, var10, var11, var12, var13);
var7 = var9;
varonce = var7;
}
{
nitc___nitc__ToolContext___info(var4, var7, 1l); /* Direct call toolcontext$ToolContext$info on <var4:ToolContext>*/
}
var14 = NEW_nitc__SeparateErasureCompiler(&type_nitc__SeparateErasureCompiler);
{
((void(*)(val* self, val* p0))(var14->class->vft[COLOR_nitc__abstract_compiler__AbstractCompiler__mainmodule_61d]))(var14, var_mainmodule); /* mainmodule= on <var14:SeparateErasureCompiler>*/
}
{
((void(*)(val* self, val* p0))(var14->class->vft[COLOR_nitc__abstract_compiler__AbstractCompiler__modelbuilder_61d]))(var14, self); /* modelbuilder= on <var14:SeparateErasureCompiler>*/
}
{
((void(*)(val* self, val* p0))(var14->class->vft[COLOR_nitc__separate_compiler__SeparateCompiler__runtime_type_analysis_61d]))(var14, var_runtime_type_analysis); /* runtime_type_analysis= on <var14:SeparateErasureCompiler>*/
}
{
((void(*)(val* self))(var14->class->vft[COLOR_core__kernel__Object__init]))(var14); /* init on <var14:SeparateErasureCompiler>*/
}
var_compiler = var14;
{
nitc___nitc__SeparateCompiler___nitc__abstract_compiler__AbstractCompiler__do_compilation(var_compiler); /* Direct call separate_compiler$SeparateCompiler$do_compilation on <var_compiler:SeparateErasureCompiler>*/
}
{
nitc___nitc__SeparateCompiler___nitc__abstract_compiler__AbstractCompiler__display_stats(var_compiler); /* Direct call separate_compiler$SeparateCompiler$display_stats on <var_compiler:SeparateErasureCompiler>*/
}
var15 = glob_sys;
{
{ /* Inline time$Sys$get_time (var15) on <var15:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var15;
var18 = core__time___Sys_get_time___impl(var_for_c_0);
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_time1 = var16;
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var21 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
if (unlikely(varonce22==NULL)) {
var23 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "*** END GENERATING C: ";
var28 = (val*)(22l<<2|1);
var29 = (val*)(22l<<2|1);
var30 = (val*)((long)(0)<<2|3);
var31 = (val*)((long)(0)<<2|3);
var27 = core__flat___CString___to_s_unsafe(var26, var28, var29, var30, var31);
var25 = var27;
varonce24 = var25;
}
((struct instance_core__NativeArray*)var23)->values[0]=var25;
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = " ***";
var36 = (val*)(4l<<2|1);
var37 = (val*)(4l<<2|1);
var38 = (val*)((long)(0)<<2|3);
var39 = (val*)((long)(0)<<2|3);
var35 = core__flat___CString___to_s_unsafe(var34, var36, var37, var38, var39);
var33 = var35;
varonce32 = var33;
}
((struct instance_core__NativeArray*)var23)->values[2]=var33;
} else {
var23 = varonce22;
varonce22 = NULL;
}
{
{ /* Inline kernel$Int$- (var_time1,var_time0) on <var_time1:Int> */
/* Covariant cast for argument 0 (i) <var_time0:Int> isa OTHER */
/* <var_time0:Int> isa OTHER */
var42 = 1; /* easy <var_time0:Int> isa OTHER*/
if (unlikely(!var42)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var43 = var_time1 - var_time0;
var40 = var43;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
var44 = core__flat___Int___core__abstract_text__Object__to_s(var40);
((struct instance_core__NativeArray*)var23)->values[1]=var44;
{
var45 = ((val*(*)(val* self))(var23->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var23); /* native_to_s on <var23:NativeArray[String]>*/
}
varonce22 = var23;
{
nitc___nitc__ToolContext___info(var19, var45, 2l); /* Direct call toolcontext$ToolContext$info on <var19:ToolContext>*/
}
{
nitc__abstract_compiler___ModelBuilder___write_and_make(self, var_compiler); /* Direct call abstract_compiler$ModelBuilder$write_and_make on <self:ModelBuilder>*/
}
RET_LABEL:;
}
/* method separate_erasure_compiler$SeparateErasureCompiler$class_ids for (self: SeparateErasureCompiler): Map[MClass, Int] */
val* nitc___nitc__SeparateErasureCompiler___class_ids(val* self) {
val* var /* : Map[MClass, Int] */;
val* var1 /* : Map[MClass, Int] */;
var1 = self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___class_ids].val; /* _class_ids on <self:SeparateErasureCompiler> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _class_ids");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 84);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler$SeparateErasureCompiler$class_ids= for (self: SeparateErasureCompiler, Map[MClass, Int]) */
void nitc___nitc__SeparateErasureCompiler___class_ids_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___class_ids].val = p0; /* _class_ids on <self:SeparateErasureCompiler> */
RET_LABEL:;
}
/* method separate_erasure_compiler$SeparateErasureCompiler$class_colors for (self: SeparateErasureCompiler): Map[MClass, Int] */
val* nitc___nitc__SeparateErasureCompiler___class_colors(val* self) {
val* var /* : Map[MClass, Int] */;
val* var1 /* : Map[MClass, Int] */;
var1 = self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___class_colors].val; /* _class_colors on <self:SeparateErasureCompiler> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _class_colors");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 85);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler$SeparateErasureCompiler$class_colors= for (self: SeparateErasureCompiler, Map[MClass, Int]) */
void nitc___nitc__SeparateErasureCompiler___class_colors_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___class_colors].val = p0; /* _class_colors on <self:SeparateErasureCompiler> */
RET_LABEL:;
}
/* method separate_erasure_compiler$SeparateErasureCompiler$vt_colors for (self: SeparateErasureCompiler): Map[MVirtualTypeProp, Int] */
val* nitc___nitc__SeparateErasureCompiler___vt_colors(val* self) {
val* var /* : Map[MVirtualTypeProp, Int] */;
val* var1 /* : Map[MVirtualTypeProp, Int] */;
var1 = self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___vt_colors].val; /* _vt_colors on <self:SeparateErasureCompiler> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vt_colors");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 86);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler$SeparateErasureCompiler$vt_colors= for (self: SeparateErasureCompiler, Map[MVirtualTypeProp, Int]) */
void nitc___nitc__SeparateErasureCompiler___vt_colors_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___vt_colors].val = p0; /* _vt_colors on <self:SeparateErasureCompiler> */
RET_LABEL:;
}
/* method separate_erasure_compiler$SeparateErasureCompiler$init for (self: SeparateErasureCompiler) */
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
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (self) on <self:SeparateErasureCompiler> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
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
core___core__HashSet___from(var4, var_poset); /* Direct call hash_collection$HashSet$from on <var4:HashSet[MClass]>*/
}
var_mclasses = var4;
var5 = NEW_nitc__POSetColorer(&type_nitc__POSetColorer__nitc__MClass);
{
{ /* Inline kernel$Object$init (var5) on <var5:POSetColorer[MClass]> */
RET_LABEL6:(void)0;
}
}
var_colorer = var5;
{
nitc___nitc__POSetColorer___colorize(var_colorer, var_poset); /* Direct call coloring$POSetColorer$colorize on <var_colorer:POSetColorer[MClass]>*/
}
{
var7 = nitc___nitc__POSetColorer___ids(var_colorer);
}
{
{ /* Inline separate_erasure_compiler$SeparateErasureCompiler$class_ids= (self,var7) on <self:SeparateErasureCompiler> */
self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___class_ids].val = var7; /* _class_ids on <self:SeparateErasureCompiler> */
RET_LABEL8:(void)0;
}
}
{
var9 = nitc___nitc__POSetColorer___colors(var_colorer);
}
{
{ /* Inline separate_erasure_compiler$SeparateErasureCompiler$class_colors= (self,var9) on <self:SeparateErasureCompiler> */
self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___class_colors].val = var9; /* _class_colors on <self:SeparateErasureCompiler> */
RET_LABEL10:(void)0;
}
}
{
var11 = nitc___nitc__SeparateErasureCompiler___build_class_typing_tables(self, var_mclasses);
}
{
{ /* Inline separate_erasure_compiler$SeparateErasureCompiler$class_tables= (self,var11) on <self:SeparateErasureCompiler> */
self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___class_tables].val = var11; /* _class_tables on <self:SeparateErasureCompiler> */
RET_LABEL12:(void)0;
}
}
var13 = NEW_core__HashMap(&type_core__HashMap__nitc__MClass__core__Set__nitc__MVirtualTypeProp);
{
core___core__HashMap___core__kernel__Object__init(var13); /* Direct call hash_collection$HashMap$init on <var13:HashMap[MClass, Set[MVirtualTypeProp]]>*/
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
core___core__HashSet___core__kernel__Object__init(var18); /* Direct call hash_collection$HashSet$init on <var18:HashSet[MVirtualTypeProp]>*/
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_vts, var_mclass, var18); /* Direct call hash_collection$HashMap$[]= on <var_vts:HashMap[MClass, Set[MVirtualTypeProp]]>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (self) on <self:SeparateErasureCompiler> */
var21 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
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
{ /* Inline separate_erasure_compiler$SeparateErasureCompiler$vt_colors= (self,var33) on <self:SeparateErasureCompiler> */
self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___vt_colors].val = var33; /* _vt_colors on <self:SeparateErasureCompiler> */
RET_LABEL34:(void)0;
}
}
{
var35 = nitc___nitc__SeparateErasureCompiler___build_vt_tables(self, var_mclasses);
}
{
{ /* Inline separate_erasure_compiler$SeparateErasureCompiler$vt_tables= (self,var35) on <self:SeparateErasureCompiler> */
self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___vt_tables].val = var35; /* _vt_tables on <self:SeparateErasureCompiler> */
RET_LABEL36:(void)0;
}
}
RET_LABEL:;
}
/* method separate_erasure_compiler$SeparateErasureCompiler$build_vt_tables for (self: SeparateErasureCompiler, Set[MClass]): Map[MClass, Array[nullable MPropDef]] */
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
core___core__HashMap___core__kernel__Object__init(var1); /* Direct call hash_collection$HashMap$init on <var1:HashMap[MClass, Array[nullable MPropDef]]>*/
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
core___core__Array___core__kernel__Object__init(var6); /* Direct call array$Array$init on <var6:Array[nullable MPropDef]>*/
}
var_table = var6;
var7 = NEW_core__Array(&type_core__Array__nitc__MClass);
{
core___core__Array___core__kernel__Object__init(var7); /* Direct call array$Array$init on <var7:Array[MClass]>*/
}
var_parents = var7;
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (self) on <self:SeparateErasureCompiler> */
var10 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
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
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (self) on <self:SeparateErasureCompiler> */
var15 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
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
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (self) on <self:SeparateErasureCompiler> */
var21 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
nitc__model___MModule___linearize_mclasses(var19, var_parents); /* Direct call model$MModule$linearize_mclasses on <var19:MModule>*/
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
{ /* Inline kernel$Object$== (var_parent,var_mclass) on <var_parent:MClass> */
var_other = var_mclass;
{
{ /* Inline kernel$Object$is_same_instance (var_parent,var_other) on <var_parent:MClass> */
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
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (self) on <self:SeparateErasureCompiler> */
var36 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var36 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
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
{ /* Inline separate_erasure_compiler$SeparateErasureCompiler$vt_colors (self) on <self:SeparateErasureCompiler> */
var49 = self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___vt_colors].val; /* _vt_colors on <self:SeparateErasureCompiler> */
if (unlikely(var49 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
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
{ /* Inline array$AbstractArrayRead$length (var_table) on <var_table:Array[nullable MPropDef]> */
var54 = var_table->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_table:Array[nullable MPropDef]> */
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
{ /* Inline kernel$Int$<= (var52,var_color) on <var52:Int> */
/* Covariant cast for argument 0 (i) <var_color:Int> isa OTHER */
/* <var_color:Int> isa OTHER */
var57 = 1; /* easy <var_color:Int> isa OTHER*/
if (unlikely(!var57)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
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
{ /* Inline array$AbstractArrayRead$length (var_table) on <var_table:Array[nullable MPropDef]> */
var63 = var_table->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_table:Array[nullable MPropDef]> */
var61 = var63;
RET_LABEL62:(void)0;
}
}
var_i = var61;
var_64 = var_color;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_64) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_64:Int> isa OTHER */
/* <var_64:Int> isa OTHER */
var67 = 1; /* easy <var_64:Int> isa OTHER*/
if (unlikely(!var67)) {
var_class_name70 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name70);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
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
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var_table, var_i, ((val*)NULL)); /* Direct call array$Array$[]= on <var_table:Array[nullable MPropDef]>*/
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
{ /* Inline model$MProperty$mpropdefs (var_mproperty) on <var_mproperty:MProperty(MVirtualTypeProp)> */
var76 = var_mproperty->attrs[COLOR_nitc__model__MProperty___mpropdefs].val; /* _mpropdefs on <var_mproperty:MProperty(MVirtualTypeProp)> */
if (unlikely(var76 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2092);
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
{ /* Inline model$MPropDef$mclassdef (var_mpropdef) on <var_mpropdef:MVirtualTypeDef> */
var85 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MVirtualTypeDef> */
if (unlikely(var85 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var83 = var85;
RET_LABEL84:(void)0;
}
}
{
{ /* Inline model$MClassDef$mclass (var83) on <var83:MClassDef> */
var88 = var83->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var83:MClassDef> */
if (unlikely(var88 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var86 = var88;
RET_LABEL87:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var86,var_parent) on <var86:MClass> */
var_other = var_parent;
{
{ /* Inline kernel$Object$is_same_instance (var86,var_other) on <var86:MClass> */
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
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var_table, var_color, var_mpropdef); /* Direct call array$Array$[]= on <var_table:Array[nullable MPropDef]>*/
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
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (self) on <self:SeparateErasureCompiler> */
var96 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var96 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
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
{ /* Inline separate_erasure_compiler$SeparateErasureCompiler$vt_colors (self) on <self:SeparateErasureCompiler> */
var112 = self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___vt_colors].val; /* _vt_colors on <self:SeparateErasureCompiler> */
if (unlikely(var112 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
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
{ /* Inline array$AbstractArrayRead$length (var_table) on <var_table:Array[nullable MPropDef]> */
var118 = var_table->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_table:Array[nullable MPropDef]> */
var116 = var118;
RET_LABEL117:(void)0;
}
}
{
{ /* Inline kernel$Int$<= (var116,var_color115) on <var116:Int> */
/* Covariant cast for argument 0 (i) <var_color115:Int> isa OTHER */
/* <var_color115:Int> isa OTHER */
var121 = 1; /* easy <var_color115:Int> isa OTHER*/
if (unlikely(!var121)) {
var_class_name124 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name124);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
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
{ /* Inline array$AbstractArrayRead$length (var_table) on <var_table:Array[nullable MPropDef]> */
var128 = var_table->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_table:Array[nullable MPropDef]> */
var126 = var128;
RET_LABEL127:(void)0;
}
}
var_i129 = var126;
var_130 = var_color115;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i129,var_130) on <var_i129:Int> */
/* Covariant cast for argument 0 (i) <var_130:Int> isa OTHER */
/* <var_130:Int> isa OTHER */
var133 = 1; /* easy <var_130:Int> isa OTHER*/
if (unlikely(!var133)) {
var_class_name136 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name136);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
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
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var_table, var_i129, ((val*)NULL)); /* Direct call array$Array$[]= on <var_table:Array[nullable MPropDef]>*/
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
{ /* Inline model$MProperty$mpropdefs (var_mproperty104) on <var_mproperty104:MProperty(MVirtualTypeProp)> */
var142 = var_mproperty104->attrs[COLOR_nitc__model__MProperty___mpropdefs].val; /* _mpropdefs on <var_mproperty104:MProperty(MVirtualTypeProp)> */
if (unlikely(var142 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2092);
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
{ /* Inline model$MPropDef$mclassdef (var_mpropdef149) on <var_mpropdef149:MVirtualTypeDef> */
var152 = var_mpropdef149->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef149:MVirtualTypeDef> */
if (unlikely(var152 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var150 = var152;
RET_LABEL151:(void)0;
}
}
{
{ /* Inline model$MClassDef$mclass (var150) on <var150:MClassDef> */
var155 = var150->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var150:MClassDef> */
if (unlikely(var155 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var153 = var155;
RET_LABEL154:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var153,var_mclass) on <var153:MClass> */
var_other = var_mclass;
{
{ /* Inline kernel$Object$is_same_instance (var153,var_other) on <var153:MClass> */
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
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var_table, var_color115, var_mpropdef149); /* Direct call array$Array$[]= on <var_table:Array[nullable MPropDef]>*/
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
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_tables, var_mclass, var_table); /* Direct call hash_collection$HashMap$[]= on <var_tables:HashMap[MClass, Array[nullable MPropDef]]>*/
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
/* method separate_erasure_compiler$SeparateErasureCompiler$build_class_typing_tables for (self: SeparateErasureCompiler, Set[MClass]): Map[MClass, Array[nullable MClass]] */
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
core___core__HashMap___core__kernel__Object__init(var1); /* Direct call hash_collection$HashMap$init on <var1:HashMap[MClass, Array[nullable MClass]]>*/
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
core___core__Array___core__kernel__Object__init(var6); /* Direct call array$Array$init on <var6:Array[nullable MClass]>*/
}
var_table = var6;
var7 = NEW_core__Array(&type_core__Array__nitc__MClass);
{
core___core__Array___core__kernel__Object__init(var7); /* Direct call array$Array$init on <var7:Array[MClass]>*/
}
var_supers = var7;
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (self) on <self:SeparateErasureCompiler> */
var10 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
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
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (self) on <self:SeparateErasureCompiler> */
var15 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
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
{ /* Inline separate_erasure_compiler$SeparateErasureCompiler$class_colors (self) on <self:SeparateErasureCompiler> */
var27 = self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___class_colors].val; /* _class_colors on <self:SeparateErasureCompiler> */
if (unlikely(var27 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
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
{ /* Inline array$AbstractArrayRead$length (var_table) on <var_table:Array[nullable MClass]> */
var32 = var_table->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_table:Array[nullable MClass]> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline kernel$Int$<= (var30,var_color) on <var30:Int> */
/* Covariant cast for argument 0 (i) <var_color:Int> isa OTHER */
/* <var_color:Int> isa OTHER */
var35 = 1; /* easy <var_color:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
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
{ /* Inline array$AbstractArrayRead$length (var_table) on <var_table:Array[nullable MClass]> */
var39 = var_table->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_table:Array[nullable MClass]> */
var37 = var39;
RET_LABEL38:(void)0;
}
}
var_i = var37;
var_40 = var_color;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_40) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_40:Int> isa OTHER */
/* <var_40:Int> isa OTHER */
var43 = 1; /* easy <var_40:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name46 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
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
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var_table, var_i, ((val*)NULL)); /* Direct call array$Array$[]= on <var_table:Array[nullable MClass]>*/
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
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var_table, var_color, var_sup); /* Direct call array$Array$[]= on <var_table:Array[nullable MClass]>*/
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
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_tables, var_mclass, var_table); /* Direct call hash_collection$HashMap$[]= on <var_tables:HashMap[MClass, Array[nullable MClass]]>*/
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
/* method separate_erasure_compiler$SeparateErasureCompiler$compile_header_structs for (self: SeparateErasureCompiler) */
void nitc___nitc__SeparateErasureCompiler___nitc__abstract_compiler__AbstractCompiler__compile_header_structs(val* self) {
val* var /* : CodeWriter */;
val* var2 /* : CodeWriter */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
val* var10 /* : CodeWriter */;
val* var12 /* : CodeWriter */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : CString */;
val* var16 /* : String */;
val* var17 /* : nullable Int */;
val* var18 /* : nullable Int */;
val* var19 /* : nullable Bool */;
val* var20 /* : nullable Bool */;
val* var21 /* : CodeWriter */;
val* var23 /* : CodeWriter */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : CString */;
val* var27 /* : String */;
val* var28 /* : nullable Int */;
val* var29 /* : nullable Int */;
val* var30 /* : nullable Bool */;
val* var31 /* : nullable Bool */;
val* var32 /* : CodeWriter */;
val* var34 /* : CodeWriter */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : CString */;
val* var38 /* : String */;
val* var39 /* : nullable Int */;
val* var40 /* : nullable Int */;
val* var41 /* : nullable Bool */;
val* var42 /* : nullable Bool */;
val* var43 /* : CodeWriter */;
val* var45 /* : CodeWriter */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : CString */;
val* var49 /* : String */;
val* var50 /* : nullable Int */;
val* var51 /* : nullable Int */;
val* var52 /* : nullable Bool */;
val* var53 /* : nullable Bool */;
val* var54 /* : CodeWriter */;
val* var56 /* : CodeWriter */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : CString */;
val* var60 /* : String */;
val* var61 /* : nullable Int */;
val* var62 /* : nullable Int */;
val* var63 /* : nullable Bool */;
val* var64 /* : nullable Bool */;
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:SeparateErasureCompiler> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
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
var6 = (val*)(81l<<2|1);
var7 = (val*)(81l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce = var3;
}
{
nitc___nitc__CodeWriter___add_decl(var, var3); /* Direct call abstract_compiler$CodeWriter$add_decl on <var:CodeWriter>*/
}
{
nitc___nitc__SeparateCompiler___compile_header_attribute_structs(self); /* Direct call separate_compiler$SeparateCompiler$compile_header_attribute_structs on <self:SeparateErasureCompiler>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:SeparateErasureCompiler> */
var12 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "struct class { int id; const char *name; int box_kind; int color; const struct vts_table *vts_table; const struct type_table *type_table; nitmethod_t vft[]; }; /* general C type representing a Nit class. */";
var17 = (val*)(206l<<2|1);
var18 = (val*)(206l<<2|1);
var19 = (val*)((long)(0)<<2|3);
var20 = (val*)((long)(0)<<2|3);
var16 = core__flat___CString___to_s_unsafe(var15, var17, var18, var19, var20);
var14 = var16;
varonce13 = var14;
}
{
nitc___nitc__CodeWriter___add_decl(var10, var14); /* Direct call abstract_compiler$CodeWriter$add_decl on <var10:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:SeparateErasureCompiler> */
var23 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "struct type_table { int size; int table[]; }; /* colorized type table. */";
var28 = (val*)(73l<<2|1);
var29 = (val*)(73l<<2|1);
var30 = (val*)((long)(0)<<2|3);
var31 = (val*)((long)(0)<<2|3);
var27 = core__flat___CString___to_s_unsafe(var26, var28, var29, var30, var31);
var25 = var27;
varonce24 = var25;
}
{
nitc___nitc__CodeWriter___add_decl(var21, var25); /* Direct call abstract_compiler$CodeWriter$add_decl on <var21:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:SeparateErasureCompiler> */
var34 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var34 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "struct vts_entry { short int is_nullable; const struct class *class; }; /* link (nullable or not) between the vts and is bound. */";
var39 = (val*)(130l<<2|1);
var40 = (val*)(130l<<2|1);
var41 = (val*)((long)(0)<<2|3);
var42 = (val*)((long)(0)<<2|3);
var38 = core__flat___CString___to_s_unsafe(var37, var39, var40, var41, var42);
var36 = var38;
varonce35 = var36;
}
{
nitc___nitc__CodeWriter___add_decl(var32, var36); /* Direct call abstract_compiler$CodeWriter$add_decl on <var32:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:SeparateErasureCompiler> */
var45 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var45 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = "struct vts_table { int dummy; const struct vts_entry vts[]; }; /* vts list of a C type representation. */";
var50 = (val*)(105l<<2|1);
var51 = (val*)(105l<<2|1);
var52 = (val*)((long)(0)<<2|3);
var53 = (val*)((long)(0)<<2|3);
var49 = core__flat___CString___to_s_unsafe(var48, var50, var51, var52, var53);
var47 = var49;
varonce46 = var47;
}
{
nitc___nitc__CodeWriter___add_decl(var43, var47); /* Direct call abstract_compiler$CodeWriter$add_decl on <var43:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:SeparateErasureCompiler> */
var56 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var56 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = "typedef struct instance { const struct class *class; nitattribute_t attrs[1]; } val; /* general C type representing a Nit instance. */";
var61 = (val*)(134l<<2|1);
var62 = (val*)(134l<<2|1);
var63 = (val*)((long)(0)<<2|3);
var64 = (val*)((long)(0)<<2|3);
var60 = core__flat___CString___to_s_unsafe(var59, var61, var62, var63, var64);
var58 = var60;
varonce57 = var58;
}
{
nitc___nitc__CodeWriter___add_decl(var54, var58); /* Direct call abstract_compiler$CodeWriter$add_decl on <var54:CodeWriter>*/
}
RET_LABEL:;
}
/* method separate_erasure_compiler$SeparateErasureCompiler$compile_class_to_c for (self: SeparateErasureCompiler, MClass) */
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
char* var39 /* : CString */;
val* var40 /* : String */;
val* var41 /* : nullable Int */;
val* var42 /* : nullable Int */;
val* var43 /* : nullable Bool */;
val* var44 /* : nullable Bool */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
val* var50 /* : NativeArray[String] */;
static val* varonce49;
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
val* var67 /* : String */;
val* var69 /* : NativeArray[String] */;
static val* varonce68;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : CString */;
val* var73 /* : String */;
val* var74 /* : nullable Int */;
val* var75 /* : nullable Int */;
val* var76 /* : nullable Bool */;
val* var77 /* : nullable Bool */;
val* var78 /* : String */;
val* var80 /* : NativeArray[String] */;
static val* varonce79;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : CString */;
val* var84 /* : String */;
val* var85 /* : nullable Int */;
val* var86 /* : nullable Int */;
val* var87 /* : nullable Bool */;
val* var88 /* : nullable Bool */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : CString */;
val* var92 /* : String */;
val* var93 /* : nullable Int */;
val* var94 /* : nullable Int */;
val* var95 /* : nullable Bool */;
val* var96 /* : nullable Bool */;
val* var97 /* : String */;
val* var99 /* : NativeArray[String] */;
static val* varonce98;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : CString */;
val* var103 /* : String */;
val* var104 /* : nullable Int */;
val* var105 /* : nullable Int */;
val* var106 /* : nullable Bool */;
val* var107 /* : nullable Bool */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : CString */;
val* var111 /* : String */;
val* var112 /* : nullable Int */;
val* var113 /* : nullable Int */;
val* var114 /* : nullable Bool */;
val* var115 /* : nullable Bool */;
val* var116 /* : String */;
val* var118 /* : NativeArray[String] */;
static val* varonce117;
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : CString */;
val* var122 /* : String */;
val* var123 /* : nullable Int */;
val* var124 /* : nullable Int */;
val* var125 /* : nullable Bool */;
val* var126 /* : nullable Bool */;
static val* varonce127;
val* var128 /* : String */;
char* var129 /* : CString */;
val* var130 /* : String */;
val* var131 /* : nullable Int */;
val* var132 /* : nullable Int */;
val* var133 /* : nullable Bool */;
val* var134 /* : nullable Bool */;
val* var135 /* : String */;
val* var137 /* : NativeArray[String] */;
static val* varonce136;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : CString */;
val* var141 /* : String */;
val* var142 /* : nullable Int */;
val* var143 /* : nullable Int */;
val* var144 /* : nullable Bool */;
val* var145 /* : nullable Bool */;
val* var146 /* : Map[MClass, Int] */;
val* var148 /* : Map[MClass, Int] */;
val* var149 /* : nullable Object */;
val* var150 /* : String */;
long var151 /* : Int */;
val* var152 /* : String */;
val* var154 /* : NativeArray[String] */;
static val* varonce153;
static val* varonce155;
val* var156 /* : String */;
char* var157 /* : CString */;
val* var158 /* : String */;
val* var159 /* : nullable Int */;
val* var160 /* : nullable Int */;
val* var161 /* : nullable Bool */;
val* var162 /* : nullable Bool */;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : CString */;
val* var166 /* : String */;
val* var167 /* : nullable Int */;
val* var168 /* : nullable Int */;
val* var169 /* : nullable Bool */;
val* var170 /* : nullable Bool */;
val* var171 /* : String */;
val* var173 /* : String */;
val* var174 /* : String */;
val* var176 /* : NativeArray[String] */;
static val* varonce175;
static val* varonce177;
val* var178 /* : String */;
char* var179 /* : CString */;
val* var180 /* : String */;
val* var181 /* : nullable Int */;
val* var182 /* : nullable Int */;
val* var183 /* : nullable Bool */;
val* var184 /* : nullable Bool */;
long var185 /* : Int */;
val* var186 /* : String */;
val* var187 /* : String */;
val* var189 /* : NativeArray[String] */;
static val* varonce188;
static val* varonce190;
val* var191 /* : String */;
char* var192 /* : CString */;
val* var193 /* : String */;
val* var194 /* : nullable Int */;
val* var195 /* : nullable Int */;
val* var196 /* : nullable Bool */;
val* var197 /* : nullable Bool */;
val* var198 /* : Map[MClass, Int] */;
val* var200 /* : Map[MClass, Int] */;
val* var201 /* : nullable Object */;
val* var202 /* : String */;
long var203 /* : Int */;
val* var204 /* : String */;
short int var205 /* : Bool */;
short int var206 /* : Bool */;
val* var208 /* : NativeArray[String] */;
static val* varonce207;
static val* varonce209;
val* var210 /* : String */;
char* var211 /* : CString */;
val* var212 /* : String */;
val* var213 /* : nullable Int */;
val* var214 /* : nullable Int */;
val* var215 /* : nullable Bool */;
val* var216 /* : nullable Bool */;
val* var217 /* : String */;
val* var219 /* : NativeArray[String] */;
static val* varonce218;
static val* varonce220;
val* var221 /* : String */;
char* var222 /* : CString */;
val* var223 /* : String */;
val* var224 /* : nullable Int */;
val* var225 /* : nullable Int */;
val* var226 /* : nullable Bool */;
val* var227 /* : nullable Bool */;
static val* varonce228;
val* var229 /* : String */;
char* var230 /* : CString */;
val* var231 /* : String */;
val* var232 /* : nullable Int */;
val* var233 /* : nullable Int */;
val* var234 /* : nullable Bool */;
val* var235 /* : nullable Bool */;
val* var236 /* : String */;
static val* varonce237;
val* var238 /* : String */;
char* var239 /* : CString */;
val* var240 /* : String */;
val* var241 /* : nullable Int */;
val* var242 /* : nullable Int */;
val* var243 /* : nullable Bool */;
val* var244 /* : nullable Bool */;
val* var246 /* : NativeArray[String] */;
static val* varonce245;
static val* varonce247;
val* var248 /* : String */;
char* var249 /* : CString */;
val* var250 /* : String */;
val* var251 /* : nullable Int */;
val* var252 /* : nullable Int */;
val* var253 /* : nullable Bool */;
val* var254 /* : nullable Bool */;
static val* varonce255;
val* var256 /* : String */;
char* var257 /* : CString */;
val* var258 /* : String */;
val* var259 /* : nullable Int */;
val* var260 /* : nullable Int */;
val* var261 /* : nullable Bool */;
val* var262 /* : nullable Bool */;
val* var263 /* : String */;
static val* varonce264;
val* var265 /* : String */;
char* var266 /* : CString */;
val* var267 /* : String */;
val* var268 /* : nullable Int */;
val* var269 /* : nullable Int */;
val* var270 /* : nullable Bool */;
val* var271 /* : nullable Bool */;
val* var272 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var274 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var275 /* : nullable Object */;
val* var_vft /* var vft: nullable Array[nullable MPropDef] */;
short int var276 /* : Bool */;
short int var277 /* : Bool */;
short int var279 /* : Bool */;
short int var280 /* : Bool */;
long var_i /* var i: Int */;
long var281 /* : Int */;
long var283 /* : Int */;
long var_284 /* var : Int */;
short int var285 /* : Bool */;
short int var287 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var288 /* : Bool */;
val* var289 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: nullable MPropDef */;
short int var290 /* : Bool */;
short int var291 /* : Bool */;
val* var_other293 /* var other: nullable Object */;
short int var294 /* : Bool */;
short int var296 /* : Bool */;
static val* varonce297;
val* var298 /* : String */;
char* var299 /* : CString */;
val* var300 /* : String */;
val* var301 /* : nullable Int */;
val* var302 /* : nullable Int */;
val* var303 /* : nullable Bool */;
val* var304 /* : nullable Bool */;
short int var305 /* : Bool */;
int cltype306;
int idtype307;
short int var308 /* : Bool */;
short int var309 /* : Bool */;
short int var310 /* : Bool */;
short int var312 /* : Bool */;
short int var313 /* : Bool */;
short int var_314 /* var : Bool */;
val* var315 /* : HashSet[MMethodDef] */;
val* var317 /* : HashSet[MMethodDef] */;
short int var318 /* : Bool */;
short int var319 /* : Bool */;
val* var321 /* : NativeArray[String] */;
static val* varonce320;
static val* varonce322;
val* var323 /* : String */;
char* var324 /* : CString */;
val* var325 /* : String */;
val* var326 /* : nullable Int */;
val* var327 /* : nullable Int */;
val* var328 /* : nullable Bool */;
val* var329 /* : nullable Bool */;
static val* varonce330;
val* var331 /* : String */;
char* var332 /* : CString */;
val* var333 /* : String */;
val* var334 /* : nullable Int */;
val* var335 /* : nullable Int */;
val* var336 /* : nullable Bool */;
val* var337 /* : nullable Bool */;
static val* varonce338;
val* var339 /* : String */;
char* var340 /* : CString */;
val* var341 /* : String */;
val* var342 /* : nullable Int */;
val* var343 /* : nullable Int */;
val* var344 /* : nullable Bool */;
val* var345 /* : nullable Bool */;
static val* varonce346;
val* var347 /* : String */;
char* var348 /* : CString */;
val* var349 /* : String */;
val* var350 /* : nullable Int */;
val* var351 /* : nullable Int */;
val* var352 /* : nullable Bool */;
val* var353 /* : nullable Bool */;
val* var354 /* : MModule */;
val* var356 /* : MModule */;
val* var357 /* : String */;
val* var358 /* : String */;
val* var359 /* : String */;
val* var360 /* : String */;
val* var362 /* : SeparateRuntimeFunction */;
val* var_rf /* var rf: SeparateRuntimeFunction */;
val* var363 /* : String */;
val* var365 /* : NativeArray[String] */;
static val* varonce364;
static val* varonce366;
val* var367 /* : String */;
char* var368 /* : CString */;
val* var369 /* : String */;
val* var370 /* : nullable Int */;
val* var371 /* : nullable Int */;
val* var372 /* : nullable Bool */;
val* var373 /* : nullable Bool */;
static val* varonce374;
val* var375 /* : String */;
char* var376 /* : CString */;
val* var377 /* : String */;
val* var378 /* : nullable Int */;
val* var379 /* : nullable Int */;
val* var380 /* : nullable Bool */;
val* var381 /* : nullable Bool */;
static val* varonce382;
val* var383 /* : String */;
char* var384 /* : CString */;
val* var385 /* : String */;
val* var386 /* : nullable Int */;
val* var387 /* : nullable Int */;
val* var388 /* : nullable Bool */;
val* var389 /* : nullable Bool */;
val* var390 /* : String */;
val* var391 /* : String */;
val* var392 /* : String */;
long var393 /* : Int */;
static val* varonce394;
val* var395 /* : String */;
char* var396 /* : CString */;
val* var397 /* : String */;
val* var398 /* : nullable Int */;
val* var399 /* : nullable Int */;
val* var400 /* : nullable Bool */;
val* var401 /* : nullable Bool */;
static val* varonce402;
val* var403 /* : String */;
char* var404 /* : CString */;
val* var405 /* : String */;
val* var406 /* : nullable Int */;
val* var407 /* : nullable Int */;
val* var408 /* : nullable Bool */;
val* var409 /* : nullable Bool */;
val* var411 /* : NativeArray[String] */;
static val* varonce410;
static val* varonce412;
val* var413 /* : String */;
char* var414 /* : CString */;
val* var415 /* : String */;
val* var416 /* : nullable Int */;
val* var417 /* : nullable Int */;
val* var418 /* : nullable Bool */;
val* var419 /* : nullable Bool */;
static val* varonce420;
val* var421 /* : String */;
char* var422 /* : CString */;
val* var423 /* : String */;
val* var424 /* : nullable Int */;
val* var425 /* : nullable Int */;
val* var426 /* : nullable Bool */;
val* var427 /* : nullable Bool */;
val* var428 /* : String */;
val* var430 /* : NativeArray[String] */;
static val* varonce429;
static val* varonce431;
val* var432 /* : String */;
char* var433 /* : CString */;
val* var434 /* : String */;
val* var435 /* : nullable Int */;
val* var436 /* : nullable Int */;
val* var437 /* : nullable Bool */;
val* var438 /* : nullable Bool */;
long var439 /* : Int */;
long var441 /* : Int */;
val* var442 /* : String */;
val* var443 /* : String */;
static val* varonce444;
val* var445 /* : String */;
char* var446 /* : CString */;
val* var447 /* : String */;
val* var448 /* : nullable Int */;
val* var449 /* : nullable Int */;
val* var450 /* : nullable Bool */;
val* var451 /* : nullable Bool */;
val* var_452 /* var : Array[nullable MClass] */;
val* var453 /* : IndexedIterator[nullable Object] */;
val* var_454 /* var : IndexedIterator[nullable MClass] */;
short int var455 /* : Bool */;
val* var457 /* : nullable Object */;
val* var_msuper /* var msuper: nullable MClass */;
short int var458 /* : Bool */;
short int var459 /* : Bool */;
short int var461 /* : Bool */;
short int var463 /* : Bool */;
static val* varonce464;
val* var465 /* : String */;
char* var466 /* : CString */;
val* var467 /* : String */;
val* var468 /* : nullable Int */;
val* var469 /* : nullable Int */;
val* var470 /* : nullable Bool */;
val* var471 /* : nullable Bool */;
val* var473 /* : NativeArray[String] */;
static val* varonce472;
static val* varonce474;
val* var475 /* : String */;
char* var476 /* : CString */;
val* var477 /* : String */;
val* var478 /* : nullable Int */;
val* var479 /* : nullable Int */;
val* var480 /* : nullable Bool */;
val* var481 /* : nullable Bool */;
static val* varonce482;
val* var483 /* : String */;
char* var484 /* : CString */;
val* var485 /* : String */;
val* var486 /* : nullable Int */;
val* var487 /* : nullable Int */;
val* var488 /* : nullable Bool */;
val* var489 /* : nullable Bool */;
val* var490 /* : Map[MClass, Int] */;
val* var492 /* : Map[MClass, Int] */;
val* var493 /* : nullable Object */;
val* var494 /* : String */;
long var495 /* : Int */;
val* var496 /* : String */;
val* var497 /* : String */;
static val* varonce498;
val* var499 /* : String */;
char* var500 /* : CString */;
val* var501 /* : String */;
val* var502 /* : nullable Int */;
val* var503 /* : nullable Int */;
val* var504 /* : nullable Bool */;
val* var505 /* : nullable Bool */;
static val* varonce506;
val* var507 /* : String */;
char* var508 /* : CString */;
val* var509 /* : String */;
val* var510 /* : nullable Int */;
val* var511 /* : nullable Int */;
val* var512 /* : nullable Bool */;
val* var513 /* : nullable Bool */;
short int var514 /* : Bool */;
short int var515 /* : Bool */;
short int var_516 /* var : Bool */;
val* var517 /* : MClass */;
val* var519 /* : MClass */;
val* var520 /* : String */;
val* var522 /* : String */;
static val* varonce523;
val* var524 /* : String */;
char* var525 /* : CString */;
val* var526 /* : String */;
val* var527 /* : nullable Int */;
val* var528 /* : nullable Int */;
val* var529 /* : nullable Bool */;
val* var530 /* : nullable Bool */;
short int var531 /* : Bool */;
val* var532 /* : CodeWriter */;
val* var534 /* : CodeWriter */;
val* var536 /* : NativeArray[String] */;
static val* varonce535;
static val* varonce537;
val* var538 /* : String */;
char* var539 /* : CString */;
val* var540 /* : String */;
val* var541 /* : nullable Int */;
val* var542 /* : nullable Int */;
val* var543 /* : nullable Bool */;
val* var544 /* : nullable Bool */;
static val* varonce545;
val* var546 /* : String */;
char* var547 /* : CString */;
val* var548 /* : String */;
val* var549 /* : nullable Int */;
val* var550 /* : nullable Int */;
val* var551 /* : nullable Bool */;
val* var552 /* : nullable Bool */;
val* var553 /* : String */;
val* var554 /* : CodeWriter */;
val* var556 /* : CodeWriter */;
static val* varonce557;
val* var558 /* : String */;
char* var559 /* : CString */;
val* var560 /* : String */;
val* var561 /* : nullable Int */;
val* var562 /* : nullable Int */;
val* var563 /* : nullable Bool */;
val* var564 /* : nullable Bool */;
val* var565 /* : CodeWriter */;
val* var567 /* : CodeWriter */;
val* var569 /* : NativeArray[String] */;
static val* varonce568;
static val* varonce570;
val* var571 /* : String */;
char* var572 /* : CString */;
val* var573 /* : String */;
val* var574 /* : nullable Int */;
val* var575 /* : nullable Int */;
val* var576 /* : nullable Bool */;
val* var577 /* : nullable Bool */;
val* var578 /* : String */;
val* var579 /* : String */;
val* var580 /* : CodeWriter */;
val* var582 /* : CodeWriter */;
static val* varonce583;
val* var584 /* : String */;
char* var585 /* : CString */;
val* var586 /* : String */;
val* var587 /* : nullable Int */;
val* var588 /* : nullable Int */;
val* var589 /* : nullable Bool */;
val* var590 /* : nullable Bool */;
val* var592 /* : NativeArray[String] */;
static val* varonce591;
static val* varonce593;
val* var594 /* : String */;
char* var595 /* : CString */;
val* var596 /* : String */;
val* var597 /* : nullable Int */;
val* var598 /* : nullable Int */;
val* var599 /* : nullable Bool */;
val* var600 /* : nullable Bool */;
val* var601 /* : String */;
val* var603 /* : NativeArray[String] */;
static val* varonce602;
static val* varonce604;
val* var605 /* : String */;
char* var606 /* : CString */;
val* var607 /* : String */;
val* var608 /* : nullable Int */;
val* var609 /* : nullable Int */;
val* var610 /* : nullable Bool */;
val* var611 /* : nullable Bool */;
static val* varonce612;
val* var613 /* : String */;
char* var614 /* : CString */;
val* var615 /* : String */;
val* var616 /* : nullable Int */;
val* var617 /* : nullable Int */;
val* var618 /* : nullable Bool */;
val* var619 /* : nullable Bool */;
static val* varonce620;
val* var621 /* : String */;
char* var622 /* : CString */;
val* var623 /* : String */;
val* var624 /* : nullable Int */;
val* var625 /* : nullable Int */;
val* var626 /* : nullable Bool */;
val* var627 /* : nullable Bool */;
val* var628 /* : String */;
val* var629 /* : String */;
val* var631 /* : NativeArray[String] */;
static val* varonce630;
static val* varonce632;
val* var633 /* : String */;
char* var634 /* : CString */;
val* var635 /* : String */;
val* var636 /* : nullable Int */;
val* var637 /* : nullable Int */;
val* var638 /* : nullable Bool */;
val* var639 /* : nullable Bool */;
static val* varonce640;
val* var641 /* : String */;
char* var642 /* : CString */;
val* var643 /* : String */;
val* var644 /* : nullable Int */;
val* var645 /* : nullable Int */;
val* var646 /* : nullable Bool */;
val* var647 /* : nullable Bool */;
val* var648 /* : String */;
val* var649 /* : String */;
val* var651 /* : NativeArray[String] */;
static val* varonce650;
static val* varonce652;
val* var653 /* : String */;
char* var654 /* : CString */;
val* var655 /* : String */;
val* var656 /* : nullable Int */;
val* var657 /* : nullable Int */;
val* var658 /* : nullable Bool */;
val* var659 /* : nullable Bool */;
static val* varonce660;
val* var661 /* : String */;
char* var662 /* : CString */;
val* var663 /* : String */;
val* var664 /* : nullable Int */;
val* var665 /* : nullable Int */;
val* var666 /* : nullable Bool */;
val* var667 /* : nullable Bool */;
static val* varonce668;
val* var669 /* : String */;
char* var670 /* : CString */;
val* var671 /* : String */;
val* var672 /* : nullable Int */;
val* var673 /* : nullable Int */;
val* var674 /* : nullable Bool */;
val* var675 /* : nullable Bool */;
val* var676 /* : String */;
val* var677 /* : String */;
val* var678 /* : String */;
val* var680 /* : NativeArray[String] */;
static val* varonce679;
static val* varonce681;
val* var682 /* : String */;
char* var683 /* : CString */;
val* var684 /* : String */;
val* var685 /* : nullable Int */;
val* var686 /* : nullable Int */;
val* var687 /* : nullable Bool */;
val* var688 /* : nullable Bool */;
static val* varonce689;
val* var690 /* : String */;
char* var691 /* : CString */;
val* var692 /* : String */;
val* var693 /* : nullable Int */;
val* var694 /* : nullable Int */;
val* var695 /* : nullable Bool */;
val* var696 /* : nullable Bool */;
static val* varonce697;
val* var698 /* : String */;
char* var699 /* : CString */;
val* var700 /* : String */;
val* var701 /* : nullable Int */;
val* var702 /* : nullable Int */;
val* var703 /* : nullable Bool */;
val* var704 /* : nullable Bool */;
val* var705 /* : String */;
val* var707 /* : NativeArray[String] */;
static val* varonce706;
static val* varonce708;
val* var709 /* : String */;
char* var710 /* : CString */;
val* var711 /* : String */;
val* var712 /* : nullable Int */;
val* var713 /* : nullable Int */;
val* var714 /* : nullable Bool */;
val* var715 /* : nullable Bool */;
val* var716 /* : String */;
val* var718 /* : NativeArray[String] */;
static val* varonce717;
static val* varonce719;
val* var720 /* : String */;
char* var721 /* : CString */;
val* var722 /* : String */;
val* var723 /* : nullable Int */;
val* var724 /* : nullable Int */;
val* var725 /* : nullable Bool */;
val* var726 /* : nullable Bool */;
static val* varonce727;
val* var728 /* : String */;
char* var729 /* : CString */;
val* var730 /* : String */;
val* var731 /* : nullable Int */;
val* var732 /* : nullable Int */;
val* var733 /* : nullable Bool */;
val* var734 /* : nullable Bool */;
val* var735 /* : String */;
static val* varonce736;
val* var737 /* : String */;
char* var738 /* : CString */;
val* var739 /* : String */;
val* var740 /* : nullable Int */;
val* var741 /* : nullable Int */;
val* var742 /* : nullable Bool */;
val* var743 /* : nullable Bool */;
static val* varonce744;
val* var745 /* : String */;
char* var746 /* : CString */;
val* var747 /* : String */;
val* var748 /* : nullable Int */;
val* var749 /* : nullable Int */;
val* var750 /* : nullable Bool */;
val* var751 /* : nullable Bool */;
static val* varonce752;
val* var753 /* : String */;
char* var754 /* : CString */;
val* var755 /* : String */;
val* var756 /* : nullable Int */;
val* var757 /* : nullable Int */;
val* var758 /* : nullable Bool */;
val* var759 /* : nullable Bool */;
val* var760 /* : MClass */;
val* var762 /* : MClass */;
val* var763 /* : String */;
val* var765 /* : String */;
static val* varonce766;
val* var767 /* : String */;
char* var768 /* : CString */;
val* var769 /* : String */;
val* var770 /* : nullable Int */;
val* var771 /* : nullable Int */;
val* var772 /* : nullable Bool */;
val* var773 /* : nullable Bool */;
short int var774 /* : Bool */;
short int var776 /* : Bool */;
short int var777 /* : Bool */;
val* var778 /* : SeparateCompilerVisitor */;
val* var780 /* : NativeArray[String] */;
static val* varonce779;
static val* varonce781;
val* var782 /* : String */;
char* var783 /* : CString */;
val* var784 /* : String */;
val* var785 /* : nullable Int */;
val* var786 /* : nullable Int */;
val* var787 /* : nullable Bool */;
val* var788 /* : nullable Bool */;
val* var789 /* : String */;
val* var791 /* : NativeArray[String] */;
static val* varonce790;
static val* varonce792;
val* var793 /* : String */;
char* var794 /* : CString */;
val* var795 /* : String */;
val* var796 /* : nullable Int */;
val* var797 /* : nullable Int */;
val* var798 /* : nullable Bool */;
val* var799 /* : nullable Bool */;
static val* varonce800;
val* var801 /* : String */;
char* var802 /* : CString */;
val* var803 /* : String */;
val* var804 /* : nullable Int */;
val* var805 /* : nullable Int */;
val* var806 /* : nullable Bool */;
val* var807 /* : nullable Bool */;
val* var808 /* : String */;
val* var809 /* : String */;
val* var811 /* : NativeArray[String] */;
static val* varonce810;
static val* varonce812;
val* var813 /* : String */;
char* var814 /* : CString */;
val* var815 /* : String */;
val* var816 /* : nullable Int */;
val* var817 /* : nullable Int */;
val* var818 /* : nullable Bool */;
val* var819 /* : nullable Bool */;
static val* varonce820;
val* var821 /* : String */;
char* var822 /* : CString */;
val* var823 /* : String */;
val* var824 /* : nullable Int */;
val* var825 /* : nullable Int */;
val* var826 /* : nullable Bool */;
val* var827 /* : nullable Bool */;
val* var828 /* : String */;
val* var829 /* : String */;
val* var831 /* : NativeArray[String] */;
static val* varonce830;
static val* varonce832;
val* var833 /* : String */;
char* var834 /* : CString */;
val* var835 /* : String */;
val* var836 /* : nullable Int */;
val* var837 /* : nullable Int */;
val* var838 /* : nullable Bool */;
val* var839 /* : nullable Bool */;
static val* varonce840;
val* var841 /* : String */;
char* var842 /* : CString */;
val* var843 /* : String */;
val* var844 /* : nullable Int */;
val* var845 /* : nullable Int */;
val* var846 /* : nullable Bool */;
val* var847 /* : nullable Bool */;
val* var848 /* : String */;
val* var849 /* : String */;
val* var851 /* : NativeArray[String] */;
static val* varonce850;
static val* varonce852;
val* var853 /* : String */;
char* var854 /* : CString */;
val* var855 /* : String */;
val* var856 /* : nullable Int */;
val* var857 /* : nullable Int */;
val* var858 /* : nullable Bool */;
val* var859 /* : nullable Bool */;
val* var860 /* : String */;
val* var861 /* : String */;
static val* varonce862;
val* var863 /* : String */;
char* var864 /* : CString */;
val* var865 /* : String */;
val* var866 /* : nullable Int */;
val* var867 /* : nullable Int */;
val* var868 /* : nullable Bool */;
val* var869 /* : nullable Bool */;
val* var870 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var873 /* : NativeArray[String] */;
static val* varonce872;
static val* varonce874;
val* var875 /* : String */;
char* var876 /* : CString */;
val* var877 /* : String */;
val* var878 /* : nullable Int */;
val* var879 /* : nullable Int */;
val* var880 /* : nullable Bool */;
val* var881 /* : nullable Bool */;
static val* varonce882;
val* var883 /* : String */;
char* var884 /* : CString */;
val* var885 /* : String */;
val* var886 /* : nullable Int */;
val* var887 /* : nullable Int */;
val* var888 /* : nullable Bool */;
val* var889 /* : nullable Bool */;
val* var890 /* : String */;
val* var891 /* : String */;
val* var892 /* : String */;
val* var894 /* : NativeArray[String] */;
static val* varonce893;
static val* varonce895;
val* var896 /* : String */;
char* var897 /* : CString */;
val* var898 /* : String */;
val* var899 /* : nullable Int */;
val* var900 /* : nullable Int */;
val* var901 /* : nullable Bool */;
val* var902 /* : nullable Bool */;
val* var903 /* : String */;
val* var905 /* : NativeArray[String] */;
static val* varonce904;
static val* varonce906;
val* var907 /* : String */;
char* var908 /* : CString */;
val* var909 /* : String */;
val* var910 /* : nullable Int */;
val* var911 /* : nullable Int */;
val* var912 /* : nullable Bool */;
val* var913 /* : nullable Bool */;
static val* varonce914;
val* var915 /* : String */;
char* var916 /* : CString */;
val* var917 /* : String */;
val* var918 /* : nullable Int */;
val* var919 /* : nullable Int */;
val* var920 /* : nullable Bool */;
val* var921 /* : nullable Bool */;
val* var922 /* : String */;
val* var923 /* : String */;
val* var925 /* : NativeArray[String] */;
static val* varonce924;
static val* varonce926;
val* var927 /* : String */;
char* var928 /* : CString */;
val* var929 /* : String */;
val* var930 /* : nullable Int */;
val* var931 /* : nullable Int */;
val* var932 /* : nullable Bool */;
val* var933 /* : nullable Bool */;
static val* varonce934;
val* var935 /* : String */;
char* var936 /* : CString */;
val* var937 /* : String */;
val* var938 /* : nullable Int */;
val* var939 /* : nullable Int */;
val* var940 /* : nullable Bool */;
val* var941 /* : nullable Bool */;
static val* varonce942;
val* var943 /* : String */;
char* var944 /* : CString */;
val* var945 /* : String */;
val* var946 /* : nullable Int */;
val* var947 /* : nullable Int */;
val* var948 /* : nullable Bool */;
val* var949 /* : nullable Bool */;
val* var950 /* : String */;
val* var951 /* : String */;
val* var952 /* : String */;
val* var954 /* : NativeArray[String] */;
static val* varonce953;
static val* varonce955;
val* var956 /* : String */;
char* var957 /* : CString */;
val* var958 /* : String */;
val* var959 /* : nullable Int */;
val* var960 /* : nullable Int */;
val* var961 /* : nullable Bool */;
val* var962 /* : nullable Bool */;
static val* varonce963;
val* var964 /* : String */;
char* var965 /* : CString */;
val* var966 /* : String */;
val* var967 /* : nullable Int */;
val* var968 /* : nullable Int */;
val* var969 /* : nullable Bool */;
val* var970 /* : nullable Bool */;
val* var971 /* : String */;
val* var972 /* : String */;
static val* varonce973;
val* var974 /* : String */;
char* var975 /* : CString */;
val* var976 /* : String */;
val* var977 /* : nullable Int */;
val* var978 /* : nullable Int */;
val* var979 /* : nullable Bool */;
val* var980 /* : nullable Bool */;
val* var981 /* : String */;
val* var983 /* : String */;
static val* varonce984;
val* var985 /* : String */;
char* var986 /* : CString */;
val* var987 /* : String */;
val* var988 /* : nullable Int */;
val* var989 /* : nullable Int */;
val* var990 /* : nullable Bool */;
val* var991 /* : nullable Bool */;
short int var992 /* : Bool */;
val* var993 /* : CodeWriter */;
val* var995 /* : CodeWriter */;
val* var997 /* : NativeArray[String] */;
static val* varonce996;
static val* varonce998;
val* var999 /* : String */;
char* var1000 /* : CString */;
val* var1001 /* : String */;
val* var1002 /* : nullable Int */;
val* var1003 /* : nullable Int */;
val* var1004 /* : nullable Bool */;
val* var1005 /* : nullable Bool */;
static val* varonce1006;
val* var1007 /* : String */;
char* var1008 /* : CString */;
val* var1009 /* : String */;
val* var1010 /* : nullable Int */;
val* var1011 /* : nullable Int */;
val* var1012 /* : nullable Bool */;
val* var1013 /* : nullable Bool */;
val* var1014 /* : String */;
val* var1015 /* : CodeWriter */;
val* var1017 /* : CodeWriter */;
static val* varonce1018;
val* var1019 /* : String */;
char* var1020 /* : CString */;
val* var1021 /* : String */;
val* var1022 /* : nullable Int */;
val* var1023 /* : nullable Int */;
val* var1024 /* : nullable Bool */;
val* var1025 /* : nullable Bool */;
val* var1026 /* : CodeWriter */;
val* var1028 /* : CodeWriter */;
static val* varonce1029;
val* var1030 /* : String */;
char* var1031 /* : CString */;
val* var1032 /* : String */;
val* var1033 /* : nullable Int */;
val* var1034 /* : nullable Int */;
val* var1035 /* : nullable Bool */;
val* var1036 /* : nullable Bool */;
val* var1037 /* : CodeWriter */;
val* var1039 /* : CodeWriter */;
static val* varonce1040;
val* var1041 /* : String */;
char* var1042 /* : CString */;
val* var1043 /* : String */;
val* var1044 /* : nullable Int */;
val* var1045 /* : nullable Int */;
val* var1046 /* : nullable Bool */;
val* var1047 /* : nullable Bool */;
val* var1048 /* : CodeWriter */;
val* var1050 /* : CodeWriter */;
static val* varonce1051;
val* var1052 /* : String */;
char* var1053 /* : CString */;
val* var1054 /* : String */;
val* var1055 /* : nullable Int */;
val* var1056 /* : nullable Int */;
val* var1057 /* : nullable Bool */;
val* var1058 /* : nullable Bool */;
val* var1060 /* : NativeArray[String] */;
static val* varonce1059;
static val* varonce1061;
val* var1062 /* : String */;
char* var1063 /* : CString */;
val* var1064 /* : String */;
val* var1065 /* : nullable Int */;
val* var1066 /* : nullable Int */;
val* var1067 /* : nullable Bool */;
val* var1068 /* : nullable Bool */;
val* var1069 /* : String */;
val* var1071 /* : NativeArray[String] */;
static val* varonce1070;
static val* varonce1072;
val* var1073 /* : String */;
char* var1074 /* : CString */;
val* var1075 /* : String */;
val* var1076 /* : nullable Int */;
val* var1077 /* : nullable Int */;
val* var1078 /* : nullable Bool */;
val* var1079 /* : nullable Bool */;
static val* varonce1080;
val* var1081 /* : String */;
char* var1082 /* : CString */;
val* var1083 /* : String */;
val* var1084 /* : nullable Int */;
val* var1085 /* : nullable Int */;
val* var1086 /* : nullable Bool */;
val* var1087 /* : nullable Bool */;
val* var1088 /* : String */;
val* var1089 /* : String */;
val* var1091 /* : NativeArray[String] */;
static val* varonce1090;
static val* varonce1092;
val* var1093 /* : String */;
char* var1094 /* : CString */;
val* var1095 /* : String */;
val* var1096 /* : nullable Int */;
val* var1097 /* : nullable Int */;
val* var1098 /* : nullable Bool */;
val* var1099 /* : nullable Bool */;
static val* varonce1100;
val* var1101 /* : String */;
char* var1102 /* : CString */;
val* var1103 /* : String */;
val* var1104 /* : nullable Int */;
val* var1105 /* : nullable Int */;
val* var1106 /* : nullable Bool */;
val* var1107 /* : nullable Bool */;
val* var1108 /* : String */;
val* var1109 /* : String */;
val* var1111 /* : NativeArray[String] */;
static val* varonce1110;
static val* varonce1112;
val* var1113 /* : String */;
char* var1114 /* : CString */;
val* var1115 /* : String */;
val* var1116 /* : nullable Int */;
val* var1117 /* : nullable Int */;
val* var1118 /* : nullable Bool */;
val* var1119 /* : nullable Bool */;
static val* varonce1120;
val* var1121 /* : String */;
char* var1122 /* : CString */;
val* var1123 /* : String */;
val* var1124 /* : nullable Int */;
val* var1125 /* : nullable Int */;
val* var1126 /* : nullable Bool */;
val* var1127 /* : nullable Bool */;
val* var1128 /* : String */;
val* var1129 /* : String */;
static val* varonce1130;
val* var1131 /* : String */;
char* var1132 /* : CString */;
val* var1133 /* : String */;
val* var1134 /* : nullable Int */;
val* var1135 /* : nullable Int */;
val* var1136 /* : nullable Bool */;
val* var1137 /* : nullable Bool */;
val* var1138 /* : String */;
val* var_res1139 /* var res: String */;
val* var1141 /* : NativeArray[String] */;
static val* varonce1140;
static val* varonce1142;
val* var1143 /* : String */;
char* var1144 /* : CString */;
val* var1145 /* : String */;
val* var1146 /* : nullable Int */;
val* var1147 /* : nullable Int */;
val* var1148 /* : nullable Bool */;
val* var1149 /* : nullable Bool */;
static val* varonce1150;
val* var1151 /* : String */;
char* var1152 /* : CString */;
val* var1153 /* : String */;
val* var1154 /* : nullable Int */;
val* var1155 /* : nullable Int */;
val* var1156 /* : nullable Bool */;
val* var1157 /* : nullable Bool */;
static val* varonce1158;
val* var1159 /* : String */;
char* var1160 /* : CString */;
val* var1161 /* : String */;
val* var1162 /* : nullable Int */;
val* var1163 /* : nullable Int */;
val* var1164 /* : nullable Bool */;
val* var1165 /* : nullable Bool */;
val* var1166 /* : String */;
val* var1167 /* : Array[MType] */;
val* var1168 /* : nullable Object */;
val* var_mtype_elt /* var mtype_elt: MType */;
val* var1170 /* : NativeArray[String] */;
static val* varonce1169;
static val* varonce1171;
val* var1172 /* : String */;
char* var1173 /* : CString */;
val* var1174 /* : String */;
val* var1175 /* : nullable Int */;
val* var1176 /* : nullable Int */;
val* var1177 /* : nullable Bool */;
val* var1178 /* : nullable Bool */;
static val* varonce1179;
val* var1180 /* : String */;
char* var1181 /* : CString */;
val* var1182 /* : String */;
val* var1183 /* : nullable Int */;
val* var1184 /* : nullable Int */;
val* var1185 /* : nullable Bool */;
val* var1186 /* : nullable Bool */;
static val* varonce1187;
val* var1188 /* : String */;
char* var1189 /* : CString */;
val* var1190 /* : String */;
val* var1191 /* : nullable Int */;
val* var1192 /* : nullable Int */;
val* var1193 /* : nullable Bool */;
val* var1194 /* : nullable Bool */;
val* var1195 /* : String */;
val* var1196 /* : String */;
val* var1198 /* : NativeArray[String] */;
static val* varonce1197;
static val* varonce1199;
val* var1200 /* : String */;
char* var1201 /* : CString */;
val* var1202 /* : String */;
val* var1203 /* : nullable Int */;
val* var1204 /* : nullable Int */;
val* var1205 /* : nullable Bool */;
val* var1206 /* : nullable Bool */;
val* var1207 /* : String */;
val* var1209 /* : NativeArray[String] */;
static val* varonce1208;
static val* varonce1210;
val* var1211 /* : String */;
char* var1212 /* : CString */;
val* var1213 /* : String */;
val* var1214 /* : nullable Int */;
val* var1215 /* : nullable Int */;
val* var1216 /* : nullable Bool */;
val* var1217 /* : nullable Bool */;
static val* varonce1218;
val* var1219 /* : String */;
char* var1220 /* : CString */;
val* var1221 /* : String */;
val* var1222 /* : nullable Int */;
val* var1223 /* : nullable Int */;
val* var1224 /* : nullable Bool */;
val* var1225 /* : nullable Bool */;
val* var1226 /* : String */;
val* var1228 /* : NativeArray[String] */;
static val* varonce1227;
static val* varonce1229;
val* var1230 /* : String */;
char* var1231 /* : CString */;
val* var1232 /* : String */;
val* var1233 /* : nullable Int */;
val* var1234 /* : nullable Int */;
val* var1235 /* : nullable Bool */;
val* var1236 /* : nullable Bool */;
val* var1237 /* : String */;
val* var1239 /* : NativeArray[String] */;
static val* varonce1238;
static val* varonce1240;
val* var1241 /* : String */;
char* var1242 /* : CString */;
val* var1243 /* : String */;
val* var1244 /* : nullable Int */;
val* var1245 /* : nullable Int */;
val* var1246 /* : nullable Bool */;
val* var1247 /* : nullable Bool */;
static val* varonce1248;
val* var1249 /* : String */;
char* var1250 /* : CString */;
val* var1251 /* : String */;
val* var1252 /* : nullable Int */;
val* var1253 /* : nullable Int */;
val* var1254 /* : nullable Bool */;
val* var1255 /* : nullable Bool */;
val* var1256 /* : String */;
static val* varonce1257;
val* var1258 /* : String */;
char* var1259 /* : CString */;
val* var1260 /* : String */;
val* var1261 /* : nullable Int */;
val* var1262 /* : nullable Int */;
val* var1263 /* : nullable Bool */;
val* var1264 /* : nullable Bool */;
short int var1265 /* : Bool */;
val* var1266 /* : MClass */;
val* var1268 /* : MClass */;
val* var1269 /* : MClassKind */;
val* var1271 /* : MClassKind */;
val* var1272 /* : Sys */;
val* var1273 /* : MClassKind */;
short int var1274 /* : Bool */;
short int var1276 /* : Bool */;
short int var1278 /* : Bool */;
short int var_1279 /* var : Bool */;
val* var1280 /* : MClass */;
val* var1282 /* : MClass */;
val* var1283 /* : String */;
val* var1285 /* : String */;
static val* varonce1286;
val* var1287 /* : String */;
char* var1288 /* : CString */;
val* var1289 /* : String */;
val* var1290 /* : nullable Int */;
val* var1291 /* : nullable Int */;
val* var1292 /* : nullable Bool */;
val* var1293 /* : nullable Bool */;
short int var1294 /* : Bool */;
short int var1296 /* : Bool */;
short int var1297 /* : Bool */;
val* var1298 /* : MModule */;
val* var1300 /* : MModule */;
val* var1301 /* : MClassType */;
val* var_pointer_type /* var pointer_type: MClassType */;
val* var1303 /* : NativeArray[String] */;
static val* varonce1302;
static val* varonce1304;
val* var1305 /* : String */;
char* var1306 /* : CString */;
val* var1307 /* : String */;
val* var1308 /* : nullable Int */;
val* var1309 /* : nullable Int */;
val* var1310 /* : nullable Bool */;
val* var1311 /* : nullable Bool */;
val* var1312 /* : String */;
val* var1314 /* : NativeArray[String] */;
static val* varonce1313;
static val* varonce1315;
val* var1316 /* : String */;
char* var1317 /* : CString */;
val* var1318 /* : String */;
val* var1319 /* : nullable Int */;
val* var1320 /* : nullable Int */;
val* var1321 /* : nullable Bool */;
val* var1322 /* : nullable Bool */;
static val* varonce1323;
val* var1324 /* : String */;
char* var1325 /* : CString */;
val* var1326 /* : String */;
val* var1327 /* : nullable Int */;
val* var1328 /* : nullable Int */;
val* var1329 /* : nullable Bool */;
val* var1330 /* : nullable Bool */;
val* var1331 /* : String */;
val* var1332 /* : String */;
val* var1334 /* : NativeArray[String] */;
static val* varonce1333;
static val* varonce1335;
val* var1336 /* : String */;
char* var1337 /* : CString */;
val* var1338 /* : String */;
val* var1339 /* : nullable Int */;
val* var1340 /* : nullable Int */;
val* var1341 /* : nullable Bool */;
val* var1342 /* : nullable Bool */;
static val* varonce1343;
val* var1344 /* : String */;
char* var1345 /* : CString */;
val* var1346 /* : String */;
val* var1347 /* : nullable Int */;
val* var1348 /* : nullable Int */;
val* var1349 /* : nullable Bool */;
val* var1350 /* : nullable Bool */;
val* var1351 /* : String */;
val* var1352 /* : String */;
val* var1354 /* : NativeArray[String] */;
static val* varonce1353;
static val* varonce1355;
val* var1356 /* : String */;
char* var1357 /* : CString */;
val* var1358 /* : String */;
val* var1359 /* : nullable Int */;
val* var1360 /* : nullable Int */;
val* var1361 /* : nullable Bool */;
val* var1362 /* : nullable Bool */;
static val* varonce1363;
val* var1364 /* : String */;
char* var1365 /* : CString */;
val* var1366 /* : String */;
val* var1367 /* : nullable Int */;
val* var1368 /* : nullable Int */;
val* var1369 /* : nullable Bool */;
val* var1370 /* : nullable Bool */;
val* var1371 /* : String */;
val* var1372 /* : String */;
val* var1374 /* : NativeArray[String] */;
static val* varonce1373;
static val* varonce1375;
val* var1376 /* : String */;
char* var1377 /* : CString */;
val* var1378 /* : String */;
val* var1379 /* : nullable Int */;
val* var1380 /* : nullable Int */;
val* var1381 /* : nullable Bool */;
val* var1382 /* : nullable Bool */;
val* var1383 /* : String */;
val* var1384 /* : String */;
static val* varonce1385;
val* var1386 /* : String */;
char* var1387 /* : CString */;
val* var1388 /* : String */;
val* var1389 /* : nullable Int */;
val* var1390 /* : nullable Int */;
val* var1391 /* : nullable Bool */;
val* var1392 /* : nullable Bool */;
val* var1393 /* : RuntimeVariable */;
val* var_res1394 /* var res: RuntimeVariable */;
val* var1397 /* : NativeArray[String] */;
static val* varonce1396;
static val* varonce1398;
val* var1399 /* : String */;
char* var1400 /* : CString */;
val* var1401 /* : String */;
val* var1402 /* : nullable Int */;
val* var1403 /* : nullable Int */;
val* var1404 /* : nullable Bool */;
val* var1405 /* : nullable Bool */;
static val* varonce1406;
val* var1407 /* : String */;
char* var1408 /* : CString */;
val* var1409 /* : String */;
val* var1410 /* : nullable Int */;
val* var1411 /* : nullable Int */;
val* var1412 /* : nullable Bool */;
val* var1413 /* : nullable Bool */;
val* var1414 /* : String */;
val* var1415 /* : String */;
val* var1416 /* : String */;
val* var1418 /* : NativeArray[String] */;
static val* varonce1417;
static val* varonce1419;
val* var1420 /* : String */;
char* var1421 /* : CString */;
val* var1422 /* : String */;
val* var1423 /* : nullable Int */;
val* var1424 /* : nullable Int */;
val* var1425 /* : nullable Bool */;
val* var1426 /* : nullable Bool */;
val* var1427 /* : String */;
val* var1429 /* : NativeArray[String] */;
static val* varonce1428;
static val* varonce1430;
val* var1431 /* : String */;
char* var1432 /* : CString */;
val* var1433 /* : String */;
val* var1434 /* : nullable Int */;
val* var1435 /* : nullable Int */;
val* var1436 /* : nullable Bool */;
val* var1437 /* : nullable Bool */;
static val* varonce1438;
val* var1439 /* : String */;
char* var1440 /* : CString */;
val* var1441 /* : String */;
val* var1442 /* : nullable Int */;
val* var1443 /* : nullable Int */;
val* var1444 /* : nullable Bool */;
val* var1445 /* : nullable Bool */;
val* var1446 /* : String */;
val* var1447 /* : String */;
val* var1449 /* : NativeArray[String] */;
static val* varonce1448;
static val* varonce1450;
val* var1451 /* : String */;
char* var1452 /* : CString */;
val* var1453 /* : String */;
val* var1454 /* : nullable Int */;
val* var1455 /* : nullable Int */;
val* var1456 /* : nullable Bool */;
val* var1457 /* : nullable Bool */;
static val* varonce1458;
val* var1459 /* : String */;
char* var1460 /* : CString */;
val* var1461 /* : String */;
val* var1462 /* : nullable Int */;
val* var1463 /* : nullable Int */;
val* var1464 /* : nullable Bool */;
val* var1465 /* : nullable Bool */;
static val* varonce1466;
val* var1467 /* : String */;
char* var1468 /* : CString */;
val* var1469 /* : String */;
val* var1470 /* : nullable Int */;
val* var1471 /* : nullable Int */;
val* var1472 /* : nullable Bool */;
val* var1473 /* : nullable Bool */;
val* var1474 /* : String */;
val* var1475 /* : String */;
val* var1476 /* : String */;
val* var1478 /* : NativeArray[String] */;
static val* varonce1477;
static val* varonce1479;
val* var1480 /* : String */;
char* var1481 /* : CString */;
val* var1482 /* : String */;
val* var1483 /* : nullable Int */;
val* var1484 /* : nullable Int */;
val* var1485 /* : nullable Bool */;
val* var1486 /* : nullable Bool */;
static val* varonce1487;
val* var1488 /* : String */;
char* var1489 /* : CString */;
val* var1490 /* : String */;
val* var1491 /* : nullable Int */;
val* var1492 /* : nullable Int */;
val* var1493 /* : nullable Bool */;
val* var1494 /* : nullable Bool */;
val* var1495 /* : String */;
val* var1496 /* : String */;
static val* varonce1497;
val* var1498 /* : String */;
char* var1499 /* : CString */;
val* var1500 /* : String */;
val* var1501 /* : nullable Int */;
val* var1502 /* : nullable Int */;
val* var1503 /* : nullable Bool */;
val* var1504 /* : nullable Bool */;
val* var1506 /* : NativeArray[String] */;
static val* varonce1505;
static val* varonce1507;
val* var1508 /* : String */;
char* var1509 /* : CString */;
val* var1510 /* : String */;
val* var1511 /* : nullable Int */;
val* var1512 /* : nullable Int */;
val* var1513 /* : nullable Bool */;
val* var1514 /* : nullable Bool */;
val* var1515 /* : String */;
val* var1517 /* : NativeArray[String] */;
static val* varonce1516;
static val* varonce1518;
val* var1519 /* : String */;
char* var1520 /* : CString */;
val* var1521 /* : String */;
val* var1522 /* : nullable Int */;
val* var1523 /* : nullable Int */;
val* var1524 /* : nullable Bool */;
val* var1525 /* : nullable Bool */;
static val* varonce1526;
val* var1527 /* : String */;
char* var1528 /* : CString */;
val* var1529 /* : String */;
val* var1530 /* : nullable Int */;
val* var1531 /* : nullable Int */;
val* var1532 /* : nullable Bool */;
val* var1533 /* : nullable Bool */;
val* var1534 /* : String */;
val* var1535 /* : String */;
val* var1537 /* : NativeArray[String] */;
static val* varonce1536;
static val* varonce1538;
val* var1539 /* : String */;
char* var1540 /* : CString */;
val* var1541 /* : String */;
val* var1542 /* : nullable Int */;
val* var1543 /* : nullable Int */;
val* var1544 /* : nullable Bool */;
val* var1545 /* : nullable Bool */;
static val* varonce1546;
val* var1547 /* : String */;
char* var1548 /* : CString */;
val* var1549 /* : String */;
val* var1550 /* : nullable Int */;
val* var1551 /* : nullable Int */;
val* var1552 /* : nullable Bool */;
val* var1553 /* : nullable Bool */;
val* var1554 /* : String */;
val* var1555 /* : String */;
val* var1557 /* : NativeArray[String] */;
static val* varonce1556;
static val* varonce1558;
val* var1559 /* : String */;
char* var1560 /* : CString */;
val* var1561 /* : String */;
val* var1562 /* : nullable Int */;
val* var1563 /* : nullable Int */;
val* var1564 /* : nullable Bool */;
val* var1565 /* : nullable Bool */;
static val* varonce1566;
val* var1567 /* : String */;
char* var1568 /* : CString */;
val* var1569 /* : String */;
val* var1570 /* : nullable Int */;
val* var1571 /* : nullable Int */;
val* var1572 /* : nullable Bool */;
val* var1573 /* : nullable Bool */;
val* var1574 /* : String */;
val* var1575 /* : String */;
val* var1577 /* : NativeArray[String] */;
static val* varonce1576;
static val* varonce1578;
val* var1579 /* : String */;
char* var1580 /* : CString */;
val* var1581 /* : String */;
val* var1582 /* : nullable Int */;
val* var1583 /* : nullable Int */;
val* var1584 /* : nullable Bool */;
val* var1585 /* : nullable Bool */;
val* var1586 /* : String */;
val* var1587 /* : String */;
static val* varonce1588;
val* var1589 /* : String */;
char* var1590 /* : CString */;
val* var1591 /* : String */;
val* var1592 /* : nullable Int */;
val* var1593 /* : nullable Int */;
val* var1594 /* : nullable Bool */;
val* var1595 /* : nullable Bool */;
val* var1596 /* : RuntimeVariable */;
val* var_res1597 /* var res: RuntimeVariable */;
val* var1599 /* : Map[MClass, Array[nullable MProperty]] */;
val* var1601 /* : Map[MClass, Array[nullable MProperty]] */;
val* var1602 /* : nullable Object */;
val* var_attrs /* var attrs: nullable Array[nullable MProperty] */;
short int var1603 /* : Bool */;
short int var1604 /* : Bool */;
val* var1606 /* : NativeArray[String] */;
static val* varonce1605;
static val* varonce1607;
val* var1608 /* : String */;
char* var1609 /* : CString */;
val* var1610 /* : String */;
val* var1611 /* : nullable Int */;
val* var1612 /* : nullable Int */;
val* var1613 /* : nullable Bool */;
val* var1614 /* : nullable Bool */;
val* var1615 /* : String */;
val* var1616 /* : String */;
val* var1618 /* : NativeArray[String] */;
static val* varonce1617;
static val* varonce1619;
val* var1620 /* : String */;
char* var1621 /* : CString */;
val* var1622 /* : String */;
val* var1623 /* : nullable Int */;
val* var1624 /* : nullable Int */;
val* var1625 /* : nullable Bool */;
val* var1626 /* : nullable Bool */;
static val* varonce1627;
val* var1628 /* : String */;
char* var1629 /* : CString */;
val* var1630 /* : String */;
val* var1631 /* : nullable Int */;
val* var1632 /* : nullable Int */;
val* var1633 /* : nullable Bool */;
val* var1634 /* : nullable Bool */;
val* var1635 /* : String */;
long var1636 /* : Int */;
long var1638 /* : Int */;
val* var1639 /* : String */;
val* var1640 /* : String */;
val* var1642 /* : NativeArray[String] */;
static val* varonce1641;
static val* varonce1643;
val* var1644 /* : String */;
char* var1645 /* : CString */;
val* var1646 /* : String */;
val* var1647 /* : nullable Int */;
val* var1648 /* : nullable Int */;
val* var1649 /* : nullable Bool */;
val* var1650 /* : nullable Bool */;
val* var1651 /* : String */;
val* var1653 /* : NativeArray[String] */;
static val* varonce1652;
static val* varonce1654;
val* var1655 /* : String */;
char* var1656 /* : CString */;
val* var1657 /* : String */;
val* var1658 /* : nullable Int */;
val* var1659 /* : nullable Int */;
val* var1660 /* : nullable Bool */;
val* var1661 /* : nullable Bool */;
static val* varonce1662;
val* var1663 /* : String */;
char* var1664 /* : CString */;
val* var1665 /* : String */;
val* var1666 /* : nullable Int */;
val* var1667 /* : nullable Int */;
val* var1668 /* : nullable Bool */;
val* var1669 /* : nullable Bool */;
val* var1670 /* : String */;
val* var1671 /* : String */;
short int var1672 /* : Bool */;
short int var1673 /* : Bool */;
short int var1675 /* : Bool */;
short int var1676 /* : Bool */;
val* var1678 /* : NativeArray[String] */;
static val* varonce1677;
static val* varonce1679;
val* var1680 /* : String */;
char* var1681 /* : CString */;
val* var1682 /* : String */;
val* var1683 /* : nullable Int */;
val* var1684 /* : nullable Int */;
val* var1685 /* : nullable Bool */;
val* var1686 /* : nullable Bool */;
static val* varonce1687;
val* var1688 /* : String */;
char* var1689 /* : CString */;
val* var1690 /* : String */;
val* var1691 /* : nullable Int */;
val* var1692 /* : nullable Int */;
val* var1693 /* : nullable Bool */;
val* var1694 /* : nullable Bool */;
val* var1695 /* : String */;
val* var1696 /* : String */;
static val* varonce1697;
val* var1698 /* : String */;
char* var1699 /* : CString */;
val* var1700 /* : String */;
val* var1701 /* : nullable Int */;
val* var1702 /* : nullable Int */;
val* var1703 /* : nullable Bool */;
val* var1704 /* : nullable Bool */;
var_mclass = p0;
{
{ /* Inline model$MClass$intro (var_mclass) on <var_mclass:MClass> */
var2 = var_mclass->attrs[COLOR_nitc__model__MClass___intro].val; /* _intro on <var_mclass:MClass> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 496);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var) on <var:MClassDef> */
var5 = var->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var:MClassDef> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
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
{ /* Inline separate_erasure_compiler$SeparateErasureCompiler$class_tables (self) on <self:SeparateErasureCompiler> */
var9 = self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___class_tables].val; /* _class_tables on <self:SeparateErasureCompiler> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
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
{ /* Inline separate_compiler$SeparateCompiler$runtime_type_analysis (self) on <self:SeparateErasureCompiler> */
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
{ /* Inline kernel$Object$!= (var_rta,((val*)NULL)) on <var_rta:nullable RapidTypeAnalysis> */
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
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_classes (var_rta) on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
var28 = var_rta->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_classes].val; /* _live_classes on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
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
{ /* Inline model$MClass$name (var_mclass) on <var_mclass:MClass> */
var37 = var_mclass->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var_mclass:MClass> */
if (unlikely(var37 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
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
var41 = (val*)(11l<<2|1);
var42 = (val*)(11l<<2|1);
var43 = (val*)((long)(0)<<2|3);
var44 = (val*)((long)(0)<<2|3);
var40 = core__flat___CString___to_s_unsafe(var39, var41, var42, var43, var44);
var38 = var40;
varonce = var38;
}
{
{ /* Inline kernel$Object$!= (var35,var38) on <var35:String> */
var_other = var38;
{
var47 = ((short int(*)(val* self, val* p0))(var35->class->vft[COLOR_core__kernel__Object___61d_61d]))(var35, var_other); /* == on <var35:String>*/
}
var48 = !var47;
var45 = var48;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var15 = var45;
} else {
var15 = var_34;
}
if (var15){
var_is_dead = 1;
} else {
}
if (unlikely(varonce49==NULL)) {
var50 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "/* runtime class ";
var55 = (val*)(17l<<2|1);
var56 = (val*)(17l<<2|1);
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
var61 = " */";
var63 = (val*)(3l<<2|1);
var64 = (val*)(3l<<2|1);
var65 = (val*)((long)(0)<<2|3);
var66 = (val*)((long)(0)<<2|3);
var62 = core__flat___CString___to_s_unsafe(var61, var63, var64, var65, var66);
var60 = var62;
varonce59 = var60;
}
((struct instance_core__NativeArray*)var50)->values[2]=var60;
} else {
var50 = varonce49;
varonce49 = NULL;
}
((struct instance_core__NativeArray*)var50)->values[1]=var_c_name;
{
var67 = ((val*(*)(val* self))(var50->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var50); /* native_to_s on <var50:NativeArray[String]>*/
}
varonce49 = var50;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var67); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce68==NULL)) {
var69 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = "class_";
var74 = (val*)(6l<<2|1);
var75 = (val*)(6l<<2|1);
var76 = (val*)((long)(0)<<2|3);
var77 = (val*)((long)(0)<<2|3);
var73 = core__flat___CString___to_s_unsafe(var72, var74, var75, var76, var77);
var71 = var73;
varonce70 = var71;
}
((struct instance_core__NativeArray*)var69)->values[0]=var71;
} else {
var69 = varonce68;
varonce68 = NULL;
}
((struct instance_core__NativeArray*)var69)->values[1]=var_c_name;
{
var78 = ((val*(*)(val* self))(var69->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var69); /* native_to_s on <var69:NativeArray[String]>*/
}
varonce68 = var69;
if (unlikely(varonce79==NULL)) {
var80 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = "extern const struct class class_";
var85 = (val*)(32l<<2|1);
var86 = (val*)(32l<<2|1);
var87 = (val*)((long)(0)<<2|3);
var88 = (val*)((long)(0)<<2|3);
var84 = core__flat___CString___to_s_unsafe(var83, var85, var86, var87, var88);
var82 = var84;
varonce81 = var82;
}
((struct instance_core__NativeArray*)var80)->values[0]=var82;
if (likely(varonce89!=NULL)) {
var90 = varonce89;
} else {
var91 = ";";
var93 = (val*)(1l<<2|1);
var94 = (val*)(1l<<2|1);
var95 = (val*)((long)(0)<<2|3);
var96 = (val*)((long)(0)<<2|3);
var92 = core__flat___CString___to_s_unsafe(var91, var93, var94, var95, var96);
var90 = var92;
varonce89 = var90;
}
((struct instance_core__NativeArray*)var80)->values[2]=var90;
} else {
var80 = varonce79;
varonce79 = NULL;
}
((struct instance_core__NativeArray*)var80)->values[1]=var_c_name;
{
var97 = ((val*(*)(val* self))(var80->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var80); /* native_to_s on <var80:NativeArray[String]>*/
}
varonce79 = var80;
{
nitc___nitc__AbstractCompiler___provide_declaration(self, var78, var97); /* Direct call abstract_compiler$AbstractCompiler$provide_declaration on <self:SeparateErasureCompiler>*/
}
if (unlikely(varonce98==NULL)) {
var99 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce100!=NULL)) {
var101 = varonce100;
} else {
var102 = "extern const struct type_table type_table_";
var104 = (val*)(42l<<2|1);
var105 = (val*)(42l<<2|1);
var106 = (val*)((long)(0)<<2|3);
var107 = (val*)((long)(0)<<2|3);
var103 = core__flat___CString___to_s_unsafe(var102, var104, var105, var106, var107);
var101 = var103;
varonce100 = var101;
}
((struct instance_core__NativeArray*)var99)->values[0]=var101;
if (likely(varonce108!=NULL)) {
var109 = varonce108;
} else {
var110 = ";";
var112 = (val*)(1l<<2|1);
var113 = (val*)(1l<<2|1);
var114 = (val*)((long)(0)<<2|3);
var115 = (val*)((long)(0)<<2|3);
var111 = core__flat___CString___to_s_unsafe(var110, var112, var113, var114, var115);
var109 = var111;
varonce108 = var109;
}
((struct instance_core__NativeArray*)var99)->values[2]=var109;
} else {
var99 = varonce98;
varonce98 = NULL;
}
((struct instance_core__NativeArray*)var99)->values[1]=var_c_name;
{
var116 = ((val*(*)(val* self))(var99->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var99); /* native_to_s on <var99:NativeArray[String]>*/
}
varonce98 = var99;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var116); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce117==NULL)) {
var118 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce119!=NULL)) {
var120 = varonce119;
} else {
var121 = "const struct class class_";
var123 = (val*)(25l<<2|1);
var124 = (val*)(25l<<2|1);
var125 = (val*)((long)(0)<<2|3);
var126 = (val*)((long)(0)<<2|3);
var122 = core__flat___CString___to_s_unsafe(var121, var123, var124, var125, var126);
var120 = var122;
varonce119 = var120;
}
((struct instance_core__NativeArray*)var118)->values[0]=var120;
if (likely(varonce127!=NULL)) {
var128 = varonce127;
} else {
var129 = " = {";
var131 = (val*)(4l<<2|1);
var132 = (val*)(4l<<2|1);
var133 = (val*)((long)(0)<<2|3);
var134 = (val*)((long)(0)<<2|3);
var130 = core__flat___CString___to_s_unsafe(var129, var131, var132, var133, var134);
var128 = var130;
varonce127 = var128;
}
((struct instance_core__NativeArray*)var118)->values[2]=var128;
} else {
var118 = varonce117;
varonce117 = NULL;
}
((struct instance_core__NativeArray*)var118)->values[1]=var_c_name;
{
var135 = ((val*(*)(val* self))(var118->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var118); /* native_to_s on <var118:NativeArray[String]>*/
}
varonce117 = var118;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var135); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce136==NULL)) {
var137 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce138!=NULL)) {
var139 = varonce138;
} else {
var140 = ",";
var142 = (val*)(1l<<2|1);
var143 = (val*)(1l<<2|1);
var144 = (val*)((long)(0)<<2|3);
var145 = (val*)((long)(0)<<2|3);
var141 = core__flat___CString___to_s_unsafe(var140, var142, var143, var144, var145);
var139 = var141;
varonce138 = var139;
}
((struct instance_core__NativeArray*)var137)->values[1]=var139;
} else {
var137 = varonce136;
varonce136 = NULL;
}
{
{ /* Inline separate_erasure_compiler$SeparateErasureCompiler$class_ids (self) on <self:SeparateErasureCompiler> */
var148 = self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___class_ids].val; /* _class_ids on <self:SeparateErasureCompiler> */
if (unlikely(var148 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _class_ids");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 84);
fatal_exit(1);
}
var146 = var148;
RET_LABEL147:(void)0;
}
}
{
var149 = ((val*(*)(val* self, val* p0))((((long)var146&3)?class_info[((long)var146&3)]:var146->class)->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var146, var_mclass); /* [] on <var146:Map[MClass, Int]>*/
}
var151 = (long)(var149)>>2;
var150 = core__flat___Int___core__abstract_text__Object__to_s(var151);
((struct instance_core__NativeArray*)var137)->values[0]=var150;
{
var152 = ((val*(*)(val* self))(var137->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var137); /* native_to_s on <var137:NativeArray[String]>*/
}
varonce136 = var137;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var152); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce153==NULL)) {
var154 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce155!=NULL)) {
var156 = varonce155;
} else {
var157 = "\"";
var159 = (val*)(1l<<2|1);
var160 = (val*)(1l<<2|1);
var161 = (val*)((long)(0)<<2|3);
var162 = (val*)((long)(0)<<2|3);
var158 = core__flat___CString___to_s_unsafe(var157, var159, var160, var161, var162);
var156 = var158;
varonce155 = var156;
}
((struct instance_core__NativeArray*)var154)->values[0]=var156;
if (likely(varonce163!=NULL)) {
var164 = varonce163;
} else {
var165 = "\", /* class_name_string */";
var167 = (val*)(26l<<2|1);
var168 = (val*)(26l<<2|1);
var169 = (val*)((long)(0)<<2|3);
var170 = (val*)((long)(0)<<2|3);
var166 = core__flat___CString___to_s_unsafe(var165, var167, var168, var169, var170);
var164 = var166;
varonce163 = var164;
}
((struct instance_core__NativeArray*)var154)->values[2]=var164;
} else {
var154 = varonce153;
varonce153 = NULL;
}
{
{ /* Inline model$MClass$name (var_mclass) on <var_mclass:MClass> */
var173 = var_mclass->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var_mclass:MClass> */
if (unlikely(var173 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var171 = var173;
RET_LABEL172:(void)0;
}
}
((struct instance_core__NativeArray*)var154)->values[1]=var171;
{
var174 = ((val*(*)(val* self))(var154->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var154); /* native_to_s on <var154:NativeArray[String]>*/
}
varonce153 = var154;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var174); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce175==NULL)) {
var176 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce177!=NULL)) {
var178 = varonce177;
} else {
var179 = ", /* box_kind */";
var181 = (val*)(16l<<2|1);
var182 = (val*)(16l<<2|1);
var183 = (val*)((long)(0)<<2|3);
var184 = (val*)((long)(0)<<2|3);
var180 = core__flat___CString___to_s_unsafe(var179, var181, var182, var183, var184);
var178 = var180;
varonce177 = var178;
}
((struct instance_core__NativeArray*)var176)->values[1]=var178;
} else {
var176 = varonce175;
varonce175 = NULL;
}
{
var185 = nitc___nitc__SeparateCompiler___box_kind_of(self, var_mclass);
}
var186 = core__flat___Int___core__abstract_text__Object__to_s(var185);
((struct instance_core__NativeArray*)var176)->values[0]=var186;
{
var187 = ((val*(*)(val* self))(var176->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var176); /* native_to_s on <var176:NativeArray[String]>*/
}
varonce175 = var176;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var187); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce188==NULL)) {
var189 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce190!=NULL)) {
var191 = varonce190;
} else {
var192 = ",";
var194 = (val*)(1l<<2|1);
var195 = (val*)(1l<<2|1);
var196 = (val*)((long)(0)<<2|3);
var197 = (val*)((long)(0)<<2|3);
var193 = core__flat___CString___to_s_unsafe(var192, var194, var195, var196, var197);
var191 = var193;
varonce190 = var191;
}
((struct instance_core__NativeArray*)var189)->values[1]=var191;
} else {
var189 = varonce188;
varonce188 = NULL;
}
{
{ /* Inline separate_erasure_compiler$SeparateErasureCompiler$class_colors (self) on <self:SeparateErasureCompiler> */
var200 = self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___class_colors].val; /* _class_colors on <self:SeparateErasureCompiler> */
if (unlikely(var200 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _class_colors");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 85);
fatal_exit(1);
}
var198 = var200;
RET_LABEL199:(void)0;
}
}
{
var201 = ((val*(*)(val* self, val* p0))((((long)var198&3)?class_info[((long)var198&3)]:var198->class)->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var198, var_mclass); /* [] on <var198:Map[MClass, Int]>*/
}
var203 = (long)(var201)>>2;
var202 = core__flat___Int___core__abstract_text__Object__to_s(var203);
((struct instance_core__NativeArray*)var189)->values[0]=var202;
{
var204 = ((val*(*)(val* self))(var189->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var189); /* native_to_s on <var189:NativeArray[String]>*/
}
varonce188 = var189;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var204); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
var205 = !var_is_dead;
if (var205){
{
var206 = nitc___nitc__SeparateErasureCompiler___build_class_vts_table(self, var_mclass);
}
if (var206){
if (unlikely(varonce207==NULL)) {
var208 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce209!=NULL)) {
var210 = varonce209;
} else {
var211 = "vts_table_";
var213 = (val*)(10l<<2|1);
var214 = (val*)(10l<<2|1);
var215 = (val*)((long)(0)<<2|3);
var216 = (val*)((long)(0)<<2|3);
var212 = core__flat___CString___to_s_unsafe(var211, var213, var214, var215, var216);
var210 = var212;
varonce209 = var210;
}
((struct instance_core__NativeArray*)var208)->values[0]=var210;
} else {
var208 = varonce207;
varonce207 = NULL;
}
((struct instance_core__NativeArray*)var208)->values[1]=var_c_name;
{
var217 = ((val*(*)(val* self))(var208->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var208); /* native_to_s on <var208:NativeArray[String]>*/
}
varonce207 = var208;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v, var217); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce218==NULL)) {
var219 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce220!=NULL)) {
var221 = varonce220;
} else {
var222 = "&vts_table_";
var224 = (val*)(11l<<2|1);
var225 = (val*)(11l<<2|1);
var226 = (val*)((long)(0)<<2|3);
var227 = (val*)((long)(0)<<2|3);
var223 = core__flat___CString___to_s_unsafe(var222, var224, var225, var226, var227);
var221 = var223;
varonce220 = var221;
}
((struct instance_core__NativeArray*)var219)->values[0]=var221;
if (likely(varonce228!=NULL)) {
var229 = varonce228;
} else {
var230 = ",";
var232 = (val*)(1l<<2|1);
var233 = (val*)(1l<<2|1);
var234 = (val*)((long)(0)<<2|3);
var235 = (val*)((long)(0)<<2|3);
var231 = core__flat___CString___to_s_unsafe(var230, var232, var233, var234, var235);
var229 = var231;
varonce228 = var229;
}
((struct instance_core__NativeArray*)var219)->values[2]=var229;
} else {
var219 = varonce218;
varonce218 = NULL;
}
((struct instance_core__NativeArray*)var219)->values[1]=var_c_name;
{
var236 = ((val*(*)(val* self))(var219->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var219); /* native_to_s on <var219:NativeArray[String]>*/
}
varonce218 = var219;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var236); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (likely(varonce237!=NULL)) {
var238 = varonce237;
} else {
var239 = "NULL,";
var241 = (val*)(5l<<2|1);
var242 = (val*)(5l<<2|1);
var243 = (val*)((long)(0)<<2|3);
var244 = (val*)((long)(0)<<2|3);
var240 = core__flat___CString___to_s_unsafe(var239, var241, var242, var243, var244);
var238 = var240;
varonce237 = var238;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var238); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
if (unlikely(varonce245==NULL)) {
var246 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce247!=NULL)) {
var248 = varonce247;
} else {
var249 = "&type_table_";
var251 = (val*)(12l<<2|1);
var252 = (val*)(12l<<2|1);
var253 = (val*)((long)(0)<<2|3);
var254 = (val*)((long)(0)<<2|3);
var250 = core__flat___CString___to_s_unsafe(var249, var251, var252, var253, var254);
var248 = var250;
varonce247 = var248;
}
((struct instance_core__NativeArray*)var246)->values[0]=var248;
if (likely(varonce255!=NULL)) {
var256 = varonce255;
} else {
var257 = ",";
var259 = (val*)(1l<<2|1);
var260 = (val*)(1l<<2|1);
var261 = (val*)((long)(0)<<2|3);
var262 = (val*)((long)(0)<<2|3);
var258 = core__flat___CString___to_s_unsafe(var257, var259, var260, var261, var262);
var256 = var258;
varonce255 = var256;
}
((struct instance_core__NativeArray*)var246)->values[2]=var256;
} else {
var246 = varonce245;
varonce245 = NULL;
}
((struct instance_core__NativeArray*)var246)->values[1]=var_c_name;
{
var263 = ((val*(*)(val* self))(var246->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var246); /* native_to_s on <var246:NativeArray[String]>*/
}
varonce245 = var246;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var263); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce264!=NULL)) {
var265 = varonce264;
} else {
var266 = "{";
var268 = (val*)(1l<<2|1);
var269 = (val*)(1l<<2|1);
var270 = (val*)((long)(0)<<2|3);
var271 = (val*)((long)(0)<<2|3);
var267 = core__flat___CString___to_s_unsafe(var266, var268, var269, var270, var271);
var265 = var267;
varonce264 = var265;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var265); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
{ /* Inline separate_compiler$SeparateCompiler$method_tables (self) on <self:SeparateErasureCompiler> */
var274 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___method_tables].val; /* _method_tables on <self:SeparateErasureCompiler> */
if (unlikely(var274 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _method_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1073);
fatal_exit(1);
}
var272 = var274;
RET_LABEL273:(void)0;
}
}
{
var275 = ((val*(*)(val* self, val* p0))((((long)var272&3)?class_info[((long)var272&3)]:var272->class)->vft[COLOR_core__abstract_collection__MapRead__get_or_null]))(var272, var_mclass); /* get_or_null on <var272:Map[MClass, Array[nullable MPropDef]]>*/
}
var_vft = var275;
if (var_vft == NULL) {
var276 = 0; /* is null */
} else {
var276 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_vft,((val*)NULL)) on <var_vft:nullable Array[nullable MPropDef]> */
var_other = ((val*)NULL);
{
var279 = ((short int(*)(val* self, val* p0))(var_vft->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_vft, var_other); /* == on <var_vft:nullable Array[nullable MPropDef](Array[nullable MPropDef])>*/
}
var280 = !var279;
var277 = var280;
goto RET_LABEL278;
RET_LABEL278:(void)0;
}
var276 = var277;
}
if (var276){
var_i = 0l;
{
{ /* Inline array$AbstractArrayRead$length (var_vft) on <var_vft:nullable Array[nullable MPropDef](Array[nullable MPropDef])> */
var283 = var_vft->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_vft:nullable Array[nullable MPropDef](Array[nullable MPropDef])> */
var281 = var283;
RET_LABEL282:(void)0;
}
}
var_284 = var281;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_284) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_284:Int> isa OTHER */
/* <var_284:Int> isa OTHER */
var287 = 1; /* easy <var_284:Int> isa OTHER*/
if (unlikely(!var287)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var288 = var_i < var_284;
var285 = var288;
goto RET_LABEL286;
RET_LABEL286:(void)0;
}
}
if (var285){
} else {
goto BREAK_label;
}
{
var289 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_vft, var_i);
}
var_mpropdef = var289;
if (var_mpropdef == NULL) {
var290 = 1; /* is null */
} else {
var290 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MPropDef> */
var_other293 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mpropdef,var_other293) on <var_mpropdef:nullable MPropDef(MPropDef)> */
var296 = var_mpropdef == var_other293;
var294 = var296;
goto RET_LABEL295;
RET_LABEL295:(void)0;
}
}
var291 = var294;
goto RET_LABEL292;
RET_LABEL292:(void)0;
}
var290 = var291;
}
if (var290){
if (likely(varonce297!=NULL)) {
var298 = varonce297;
} else {
var299 = "NULL, /* empty */";
var301 = (val*)(17l<<2|1);
var302 = (val*)(17l<<2|1);
var303 = (val*)((long)(0)<<2|3);
var304 = (val*)((long)(0)<<2|3);
var300 = core__flat___CString___to_s_unsafe(var299, var301, var302, var303, var304);
var298 = var300;
varonce297 = var298;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var298); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
/* <var_mpropdef:nullable MPropDef(MPropDef)> isa MMethodDef */
cltype306 = type_nitc__MMethodDef.color;
idtype307 = type_nitc__MMethodDef.id;
if(cltype306 >= var_mpropdef->type->table_size) {
var305 = 0;
} else {
var305 = var_mpropdef->type->type_table[cltype306] == idtype307;
}
if (unlikely(!var305)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 237);
fatal_exit(1);
}
if (var_rta == NULL) {
var309 = 0; /* is null */
} else {
var309 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_rta,((val*)NULL)) on <var_rta:nullable RapidTypeAnalysis> */
var_other = ((val*)NULL);
{
var312 = ((short int(*)(val* self, val* p0))(var_rta->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_rta, var_other); /* == on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)>*/
}
var313 = !var312;
var310 = var313;
goto RET_LABEL311;
RET_LABEL311:(void)0;
}
var309 = var310;
}
var_314 = var309;
if (var309){
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_methoddefs (var_rta) on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
var317 = var_rta->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_methoddefs].val; /* _live_methoddefs on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
if (unlikely(var317 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methoddefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 79);
fatal_exit(1);
}
var315 = var317;
RET_LABEL316:(void)0;
}
}
{
var318 = core___core__HashSet___core__abstract_collection__Collection__has(var315, var_mpropdef);
}
var319 = !var318;
var308 = var319;
} else {
var308 = var_314;
}
if (var308){
if (unlikely(varonce320==NULL)) {
var321 = NEW_core__NativeArray((int)7l, &type_core__NativeArray__core__String);
if (likely(varonce322!=NULL)) {
var323 = varonce322;
} else {
var324 = "NULL, /* DEAD ";
var326 = (val*)(14l<<2|1);
var327 = (val*)(14l<<2|1);
var328 = (val*)((long)(0)<<2|3);
var329 = (val*)((long)(0)<<2|3);
var325 = core__flat___CString___to_s_unsafe(var324, var326, var327, var328, var329);
var323 = var325;
varonce322 = var323;
}
((struct instance_core__NativeArray*)var321)->values[0]=var323;
if (likely(varonce330!=NULL)) {
var331 = varonce330;
} else {
var332 = ":";
var334 = (val*)(1l<<2|1);
var335 = (val*)(1l<<2|1);
var336 = (val*)((long)(0)<<2|3);
var337 = (val*)((long)(0)<<2|3);
var333 = core__flat___CString___to_s_unsafe(var332, var334, var335, var336, var337);
var331 = var333;
varonce330 = var331;
}
((struct instance_core__NativeArray*)var321)->values[2]=var331;
if (likely(varonce338!=NULL)) {
var339 = varonce338;
} else {
var340 = ":";
var342 = (val*)(1l<<2|1);
var343 = (val*)(1l<<2|1);
var344 = (val*)((long)(0)<<2|3);
var345 = (val*)((long)(0)<<2|3);
var341 = core__flat___CString___to_s_unsafe(var340, var342, var343, var344, var345);
var339 = var341;
varonce338 = var339;
}
((struct instance_core__NativeArray*)var321)->values[4]=var339;
if (likely(varonce346!=NULL)) {
var347 = varonce346;
} else {
var348 = " */";
var350 = (val*)(3l<<2|1);
var351 = (val*)(3l<<2|1);
var352 = (val*)((long)(0)<<2|3);
var353 = (val*)((long)(0)<<2|3);
var349 = core__flat___CString___to_s_unsafe(var348, var350, var351, var352, var353);
var347 = var349;
varonce346 = var347;
}
((struct instance_core__NativeArray*)var321)->values[6]=var347;
} else {
var321 = varonce320;
varonce320 = NULL;
}
{
{ /* Inline model$MClass$intro_mmodule (var_mclass) on <var_mclass:MClass> */
var356 = var_mclass->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_mclass:MClass> */
if (unlikely(var356 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var354 = var356;
RET_LABEL355:(void)0;
}
}
{
var357 = ((val*(*)(val* self))(var354->class->vft[COLOR_core__abstract_text__Object__to_s]))(var354); /* to_s on <var354:MModule>*/
}
((struct instance_core__NativeArray*)var321)->values[1]=var357;
{
var358 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclass); /* to_s on <var_mclass:MClass>*/
}
((struct instance_core__NativeArray*)var321)->values[3]=var358;
{
var359 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:nullable MPropDef(MMethodDef)>*/
}
((struct instance_core__NativeArray*)var321)->values[5]=var359;
{
var360 = ((val*(*)(val* self))(var321->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var321); /* native_to_s on <var321:NativeArray[String]>*/
}
varonce320 = var321;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var360); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
goto BREAK_label361;
} else {
}
{
var362 = nitc__separate_compiler___MMethodDef___virtual_runtime_function(var_mpropdef);
}
var_rf = var362;
{
var363 = nitc___nitc__AbstractRuntimeFunction___c_name(var_rf);
}
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v, var363); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce364==NULL)) {
var365 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce366!=NULL)) {
var367 = varonce366;
} else {
var368 = "(nitmethod_t)";
var370 = (val*)(13l<<2|1);
var371 = (val*)(13l<<2|1);
var372 = (val*)((long)(0)<<2|3);
var373 = (val*)((long)(0)<<2|3);
var369 = core__flat___CString___to_s_unsafe(var368, var370, var371, var372, var373);
var367 = var369;
varonce366 = var367;
}
((struct instance_core__NativeArray*)var365)->values[0]=var367;
if (likely(varonce374!=NULL)) {
var375 = varonce374;
} else {
var376 = ", /* pointer to ";
var378 = (val*)(16l<<2|1);
var379 = (val*)(16l<<2|1);
var380 = (val*)((long)(0)<<2|3);
var381 = (val*)((long)(0)<<2|3);
var377 = core__flat___CString___to_s_unsafe(var376, var378, var379, var380, var381);
var375 = var377;
varonce374 = var375;
}
((struct instance_core__NativeArray*)var365)->values[2]=var375;
if (likely(varonce382!=NULL)) {
var383 = varonce382;
} else {
var384 = " */";
var386 = (val*)(3l<<2|1);
var387 = (val*)(3l<<2|1);
var388 = (val*)((long)(0)<<2|3);
var389 = (val*)((long)(0)<<2|3);
var385 = core__flat___CString___to_s_unsafe(var384, var386, var387, var388, var389);
var383 = var385;
varonce382 = var383;
}
((struct instance_core__NativeArray*)var365)->values[4]=var383;
} else {
var365 = varonce364;
varonce364 = NULL;
}
{
var390 = nitc___nitc__AbstractRuntimeFunction___c_name(var_rf);
}
((struct instance_core__NativeArray*)var365)->values[1]=var390;
{
var391 = nitc___nitc__MPropDef___nitc__model_base__MEntity__full_name(var_mpropdef);
}
((struct instance_core__NativeArray*)var365)->values[3]=var391;
{
var392 = ((val*(*)(val* self))(var365->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var365); /* native_to_s on <var365:NativeArray[String]>*/
}
varonce364 = var365;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var392); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
BREAK_label361: (void)0;
{
var393 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var393;
}
BREAK_label: (void)0;
} else {
}
if (likely(varonce394!=NULL)) {
var395 = varonce394;
} else {
var396 = "}";
var398 = (val*)(1l<<2|1);
var399 = (val*)(1l<<2|1);
var400 = (val*)((long)(0)<<2|3);
var401 = (val*)((long)(0)<<2|3);
var397 = core__flat___CString___to_s_unsafe(var396, var398, var399, var400, var401);
var395 = var397;
varonce394 = var395;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var395); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
}
if (likely(varonce402!=NULL)) {
var403 = varonce402;
} else {
var404 = "};";
var406 = (val*)(2l<<2|1);
var407 = (val*)(2l<<2|1);
var408 = (val*)((long)(0)<<2|3);
var409 = (val*)((long)(0)<<2|3);
var405 = core__flat___CString___to_s_unsafe(var404, var406, var407, var408, var409);
var403 = var405;
varonce402 = var403;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var403); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce410==NULL)) {
var411 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce412!=NULL)) {
var413 = varonce412;
} else {
var414 = "const struct type_table type_table_";
var416 = (val*)(35l<<2|1);
var417 = (val*)(35l<<2|1);
var418 = (val*)((long)(0)<<2|3);
var419 = (val*)((long)(0)<<2|3);
var415 = core__flat___CString___to_s_unsafe(var414, var416, var417, var418, var419);
var413 = var415;
varonce412 = var413;
}
((struct instance_core__NativeArray*)var411)->values[0]=var413;
if (likely(varonce420!=NULL)) {
var421 = varonce420;
} else {
var422 = " = {";
var424 = (val*)(4l<<2|1);
var425 = (val*)(4l<<2|1);
var426 = (val*)((long)(0)<<2|3);
var427 = (val*)((long)(0)<<2|3);
var423 = core__flat___CString___to_s_unsafe(var422, var424, var425, var426, var427);
var421 = var423;
varonce420 = var421;
}
((struct instance_core__NativeArray*)var411)->values[2]=var421;
} else {
var411 = varonce410;
varonce410 = NULL;
}
((struct instance_core__NativeArray*)var411)->values[1]=var_c_name;
{
var428 = ((val*(*)(val* self))(var411->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var411); /* native_to_s on <var411:NativeArray[String]>*/
}
varonce410 = var411;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var428); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce429==NULL)) {
var430 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce431!=NULL)) {
var432 = varonce431;
} else {
var433 = ",";
var435 = (val*)(1l<<2|1);
var436 = (val*)(1l<<2|1);
var437 = (val*)((long)(0)<<2|3);
var438 = (val*)((long)(0)<<2|3);
var434 = core__flat___CString___to_s_unsafe(var433, var435, var436, var437, var438);
var432 = var434;
varonce431 = var432;
}
((struct instance_core__NativeArray*)var430)->values[1]=var432;
} else {
var430 = varonce429;
varonce429 = NULL;
}
{
{ /* Inline array$AbstractArrayRead$length (var_class_table) on <var_class_table:Array[nullable MClass]> */
var441 = var_class_table->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_class_table:Array[nullable MClass]> */
var439 = var441;
RET_LABEL440:(void)0;
}
}
var442 = core__flat___Int___core__abstract_text__Object__to_s(var439);
((struct instance_core__NativeArray*)var430)->values[0]=var442;
{
var443 = ((val*(*)(val* self))(var430->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var430); /* native_to_s on <var430:NativeArray[String]>*/
}
varonce429 = var430;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var443); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce444!=NULL)) {
var445 = varonce444;
} else {
var446 = "{";
var448 = (val*)(1l<<2|1);
var449 = (val*)(1l<<2|1);
var450 = (val*)((long)(0)<<2|3);
var451 = (val*)((long)(0)<<2|3);
var447 = core__flat___CString___to_s_unsafe(var446, var448, var449, var450, var451);
var445 = var447;
varonce444 = var445;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var445); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
var_452 = var_class_table;
{
var453 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_452);
}
var_454 = var453;
for(;;) {
{
var455 = ((short int(*)(val* self))((((long)var_454&3)?class_info[((long)var_454&3)]:var_454->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_454); /* is_ok on <var_454:IndexedIterator[nullable MClass]>*/
}
if (var455){
} else {
goto BREAK_label456;
}
{
var457 = ((val*(*)(val* self))((((long)var_454&3)?class_info[((long)var_454&3)]:var_454->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_454); /* item on <var_454:IndexedIterator[nullable MClass]>*/
}
var_msuper = var457;
if (var_msuper == NULL) {
var458 = 1; /* is null */
} else {
var458 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_msuper,((val*)NULL)) on <var_msuper:nullable MClass> */
var_other293 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_msuper,var_other293) on <var_msuper:nullable MClass(MClass)> */
var463 = var_msuper == var_other293;
var461 = var463;
goto RET_LABEL462;
RET_LABEL462:(void)0;
}
}
var459 = var461;
goto RET_LABEL460;
RET_LABEL460:(void)0;
}
var458 = var459;
}
if (var458){
if (likely(varonce464!=NULL)) {
var465 = varonce464;
} else {
var466 = "-1, /* empty */";
var468 = (val*)(15l<<2|1);
var469 = (val*)(15l<<2|1);
var470 = (val*)((long)(0)<<2|3);
var471 = (val*)((long)(0)<<2|3);
var467 = core__flat___CString___to_s_unsafe(var466, var468, var469, var470, var471);
var465 = var467;
varonce464 = var465;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var465); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (unlikely(varonce472==NULL)) {
var473 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce474!=NULL)) {
var475 = varonce474;
} else {
var476 = ", /* ";
var478 = (val*)(5l<<2|1);
var479 = (val*)(5l<<2|1);
var480 = (val*)((long)(0)<<2|3);
var481 = (val*)((long)(0)<<2|3);
var477 = core__flat___CString___to_s_unsafe(var476, var478, var479, var480, var481);
var475 = var477;
varonce474 = var475;
}
((struct instance_core__NativeArray*)var473)->values[1]=var475;
if (likely(varonce482!=NULL)) {
var483 = varonce482;
} else {
var484 = " */";
var486 = (val*)(3l<<2|1);
var487 = (val*)(3l<<2|1);
var488 = (val*)((long)(0)<<2|3);
var489 = (val*)((long)(0)<<2|3);
var485 = core__flat___CString___to_s_unsafe(var484, var486, var487, var488, var489);
var483 = var485;
varonce482 = var483;
}
((struct instance_core__NativeArray*)var473)->values[3]=var483;
} else {
var473 = varonce472;
varonce472 = NULL;
}
{
{ /* Inline separate_erasure_compiler$SeparateErasureCompiler$class_ids (self) on <self:SeparateErasureCompiler> */
var492 = self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___class_ids].val; /* _class_ids on <self:SeparateErasureCompiler> */
if (unlikely(var492 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _class_ids");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 84);
fatal_exit(1);
}
var490 = var492;
RET_LABEL491:(void)0;
}
}
{
var493 = ((val*(*)(val* self, val* p0))((((long)var490&3)?class_info[((long)var490&3)]:var490->class)->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var490, var_msuper); /* [] on <var490:Map[MClass, Int]>*/
}
var495 = (long)(var493)>>2;
var494 = core__flat___Int___core__abstract_text__Object__to_s(var495);
((struct instance_core__NativeArray*)var473)->values[0]=var494;
{
var496 = ((val*(*)(val* self))(var_msuper->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_msuper); /* to_s on <var_msuper:nullable MClass(MClass)>*/
}
((struct instance_core__NativeArray*)var473)->values[2]=var496;
{
var497 = ((val*(*)(val* self))(var473->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var473); /* native_to_s on <var473:NativeArray[String]>*/
}
varonce472 = var473;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var497); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
{
((void(*)(val* self))((((long)var_454&3)?class_info[((long)var_454&3)]:var_454->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_454); /* next on <var_454:IndexedIterator[nullable MClass]>*/
}
}
BREAK_label456: (void)0;
{
((void(*)(val* self))((((long)var_454&3)?class_info[((long)var_454&3)]:var_454->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_454); /* finish on <var_454:IndexedIterator[nullable MClass]>*/
}
if (likely(varonce498!=NULL)) {
var499 = varonce498;
} else {
var500 = "}";
var502 = (val*)(1l<<2|1);
var503 = (val*)(1l<<2|1);
var504 = (val*)((long)(0)<<2|3);
var505 = (val*)((long)(0)<<2|3);
var501 = core__flat___CString___to_s_unsafe(var500, var502, var503, var504, var505);
var499 = var501;
varonce498 = var499;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var499); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce506!=NULL)) {
var507 = varonce506;
} else {
var508 = "};";
var510 = (val*)(2l<<2|1);
var511 = (val*)(2l<<2|1);
var512 = (val*)((long)(0)<<2|3);
var513 = (val*)((long)(0)<<2|3);
var509 = core__flat___CString___to_s_unsafe(var508, var510, var511, var512, var513);
var507 = var509;
varonce506 = var507;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var507); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
var515 = nitc__abstract_compiler___MClassType___MType__is_c_primitive(var_mtype);
}
var_516 = var515;
if (var515){
var514 = var_516;
} else {
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:MClassType> */
var519 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var519 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var517 = var519;
RET_LABEL518:(void)0;
}
}
{
{ /* Inline model$MClass$name (var517) on <var517:MClass> */
var522 = var517->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var517:MClass> */
if (unlikely(var522 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var520 = var522;
RET_LABEL521:(void)0;
}
}
if (likely(varonce523!=NULL)) {
var524 = varonce523;
} else {
var525 = "Pointer";
var527 = (val*)(7l<<2|1);
var528 = (val*)(7l<<2|1);
var529 = (val*)((long)(0)<<2|3);
var530 = (val*)((long)(0)<<2|3);
var526 = core__flat___CString___to_s_unsafe(var525, var527, var528, var529, var530);
var524 = var526;
varonce523 = var524;
}
{
var531 = ((short int(*)(val* self, val* p0))(var520->class->vft[COLOR_core__kernel__Object___61d_61d]))(var520, var524); /* == on <var520:String>*/
}
var514 = var531;
}
if (var514){
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:SeparateErasureCompiler> */
var534 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var534 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var532 = var534;
RET_LABEL533:(void)0;
}
}
if (unlikely(varonce535==NULL)) {
var536 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce537!=NULL)) {
var538 = varonce537;
} else {
var539 = "struct instance_";
var541 = (val*)(16l<<2|1);
var542 = (val*)(16l<<2|1);
var543 = (val*)((long)(0)<<2|3);
var544 = (val*)((long)(0)<<2|3);
var540 = core__flat___CString___to_s_unsafe(var539, var541, var542, var543, var544);
var538 = var540;
varonce537 = var538;
}
((struct instance_core__NativeArray*)var536)->values[0]=var538;
if (likely(varonce545!=NULL)) {
var546 = varonce545;
} else {
var547 = " {";
var549 = (val*)(2l<<2|1);
var550 = (val*)(2l<<2|1);
var551 = (val*)((long)(0)<<2|3);
var552 = (val*)((long)(0)<<2|3);
var548 = core__flat___CString___to_s_unsafe(var547, var549, var550, var551, var552);
var546 = var548;
varonce545 = var546;
}
((struct instance_core__NativeArray*)var536)->values[2]=var546;
} else {
var536 = varonce535;
varonce535 = NULL;
}
((struct instance_core__NativeArray*)var536)->values[1]=var_c_name;
{
var553 = ((val*(*)(val* self))(var536->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var536); /* native_to_s on <var536:NativeArray[String]>*/
}
varonce535 = var536;
{
nitc___nitc__CodeWriter___add_decl(var532, var553); /* Direct call abstract_compiler$CodeWriter$add_decl on <var532:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:SeparateErasureCompiler> */
var556 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var556 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var554 = var556;
RET_LABEL555:(void)0;
}
}
if (likely(varonce557!=NULL)) {
var558 = varonce557;
} else {
var559 = "const struct class *class;";
var561 = (val*)(26l<<2|1);
var562 = (val*)(26l<<2|1);
var563 = (val*)((long)(0)<<2|3);
var564 = (val*)((long)(0)<<2|3);
var560 = core__flat___CString___to_s_unsafe(var559, var561, var562, var563, var564);
var558 = var560;
varonce557 = var558;
}
{
nitc___nitc__CodeWriter___add_decl(var554, var558); /* Direct call abstract_compiler$CodeWriter$add_decl on <var554:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:SeparateErasureCompiler> */
var567 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var567 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var565 = var567;
RET_LABEL566:(void)0;
}
}
if (unlikely(varonce568==NULL)) {
var569 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce570!=NULL)) {
var571 = varonce570;
} else {
var572 = " value;";
var574 = (val*)(7l<<2|1);
var575 = (val*)(7l<<2|1);
var576 = (val*)((long)(0)<<2|3);
var577 = (val*)((long)(0)<<2|3);
var573 = core__flat___CString___to_s_unsafe(var572, var574, var575, var576, var577);
var571 = var573;
varonce570 = var571;
}
((struct instance_core__NativeArray*)var569)->values[1]=var571;
} else {
var569 = varonce568;
varonce568 = NULL;
}
{
var578 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var569)->values[0]=var578;
{
var579 = ((val*(*)(val* self))(var569->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var569); /* native_to_s on <var569:NativeArray[String]>*/
}
varonce568 = var569;
{
nitc___nitc__CodeWriter___add_decl(var565, var579); /* Direct call abstract_compiler$CodeWriter$add_decl on <var565:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:SeparateErasureCompiler> */
var582 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var582 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var580 = var582;
RET_LABEL581:(void)0;
}
}
if (likely(varonce583!=NULL)) {
var584 = varonce583;
} else {
var585 = "};";
var587 = (val*)(2l<<2|1);
var588 = (val*)(2l<<2|1);
var589 = (val*)((long)(0)<<2|3);
var590 = (val*)((long)(0)<<2|3);
var586 = core__flat___CString___to_s_unsafe(var585, var587, var588, var589, var590);
var584 = var586;
varonce583 = var584;
}
{
nitc___nitc__CodeWriter___add_decl(var580, var584); /* Direct call abstract_compiler$CodeWriter$add_decl on <var580:CodeWriter>*/
}
if (unlikely(varonce591==NULL)) {
var592 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce593!=NULL)) {
var594 = varonce593;
} else {
var595 = "BOX_";
var597 = (val*)(4l<<2|1);
var598 = (val*)(4l<<2|1);
var599 = (val*)((long)(0)<<2|3);
var600 = (val*)((long)(0)<<2|3);
var596 = core__flat___CString___to_s_unsafe(var595, var597, var598, var599, var600);
var594 = var596;
varonce593 = var594;
}
((struct instance_core__NativeArray*)var592)->values[0]=var594;
} else {
var592 = varonce591;
varonce591 = NULL;
}
((struct instance_core__NativeArray*)var592)->values[1]=var_c_name;
{
var601 = ((val*(*)(val* self))(var592->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var592); /* native_to_s on <var592:NativeArray[String]>*/
}
varonce591 = var592;
if (unlikely(varonce602==NULL)) {
var603 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce604!=NULL)) {
var605 = varonce604;
} else {
var606 = "val* BOX_";
var608 = (val*)(9l<<2|1);
var609 = (val*)(9l<<2|1);
var610 = (val*)((long)(0)<<2|3);
var611 = (val*)((long)(0)<<2|3);
var607 = core__flat___CString___to_s_unsafe(var606, var608, var609, var610, var611);
var605 = var607;
varonce604 = var605;
}
((struct instance_core__NativeArray*)var603)->values[0]=var605;
if (likely(varonce612!=NULL)) {
var613 = varonce612;
} else {
var614 = "(";
var616 = (val*)(1l<<2|1);
var617 = (val*)(1l<<2|1);
var618 = (val*)((long)(0)<<2|3);
var619 = (val*)((long)(0)<<2|3);
var615 = core__flat___CString___to_s_unsafe(var614, var616, var617, var618, var619);
var613 = var615;
varonce612 = var613;
}
((struct instance_core__NativeArray*)var603)->values[2]=var613;
if (likely(varonce620!=NULL)) {
var621 = varonce620;
} else {
var622 = ");";
var624 = (val*)(2l<<2|1);
var625 = (val*)(2l<<2|1);
var626 = (val*)((long)(0)<<2|3);
var627 = (val*)((long)(0)<<2|3);
var623 = core__flat___CString___to_s_unsafe(var622, var624, var625, var626, var627);
var621 = var623;
varonce620 = var621;
}
((struct instance_core__NativeArray*)var603)->values[4]=var621;
} else {
var603 = varonce602;
varonce602 = NULL;
}
((struct instance_core__NativeArray*)var603)->values[1]=var_c_name;
{
var628 = nitc__abstract_compiler___MClassType___MType__ctype_extern(var_mtype);
}
((struct instance_core__NativeArray*)var603)->values[3]=var628;
{
var629 = ((val*(*)(val* self))(var603->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var603); /* native_to_s on <var603:NativeArray[String]>*/
}
varonce602 = var603;
{
nitc___nitc__AbstractCompiler___provide_declaration(self, var601, var629); /* Direct call abstract_compiler$AbstractCompiler$provide_declaration on <self:SeparateErasureCompiler>*/
}
if (unlikely(varonce630==NULL)) {
var631 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce632!=NULL)) {
var633 = varonce632;
} else {
var634 = "/* allocate ";
var636 = (val*)(12l<<2|1);
var637 = (val*)(12l<<2|1);
var638 = (val*)((long)(0)<<2|3);
var639 = (val*)((long)(0)<<2|3);
var635 = core__flat___CString___to_s_unsafe(var634, var636, var637, var638, var639);
var633 = var635;
varonce632 = var633;
}
((struct instance_core__NativeArray*)var631)->values[0]=var633;
if (likely(varonce640!=NULL)) {
var641 = varonce640;
} else {
var642 = " */";
var644 = (val*)(3l<<2|1);
var645 = (val*)(3l<<2|1);
var646 = (val*)((long)(0)<<2|3);
var647 = (val*)((long)(0)<<2|3);
var643 = core__flat___CString___to_s_unsafe(var642, var644, var645, var646, var647);
var641 = var643;
varonce640 = var641;
}
((struct instance_core__NativeArray*)var631)->values[2]=var641;
} else {
var631 = varonce630;
varonce630 = NULL;
}
{
var648 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var631)->values[1]=var648;
{
var649 = ((val*(*)(val* self))(var631->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var631); /* native_to_s on <var631:NativeArray[String]>*/
}
varonce630 = var631;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var649); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce650==NULL)) {
var651 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce652!=NULL)) {
var653 = varonce652;
} else {
var654 = "val* BOX_";
var656 = (val*)(9l<<2|1);
var657 = (val*)(9l<<2|1);
var658 = (val*)((long)(0)<<2|3);
var659 = (val*)((long)(0)<<2|3);
var655 = core__flat___CString___to_s_unsafe(var654, var656, var657, var658, var659);
var653 = var655;
varonce652 = var653;
}
((struct instance_core__NativeArray*)var651)->values[0]=var653;
if (likely(varonce660!=NULL)) {
var661 = varonce660;
} else {
var662 = "(";
var664 = (val*)(1l<<2|1);
var665 = (val*)(1l<<2|1);
var666 = (val*)((long)(0)<<2|3);
var667 = (val*)((long)(0)<<2|3);
var663 = core__flat___CString___to_s_unsafe(var662, var664, var665, var666, var667);
var661 = var663;
varonce660 = var661;
}
((struct instance_core__NativeArray*)var651)->values[2]=var661;
if (likely(varonce668!=NULL)) {
var669 = varonce668;
} else {
var670 = " value) {";
var672 = (val*)(9l<<2|1);
var673 = (val*)(9l<<2|1);
var674 = (val*)((long)(0)<<2|3);
var675 = (val*)((long)(0)<<2|3);
var671 = core__flat___CString___to_s_unsafe(var670, var672, var673, var674, var675);
var669 = var671;
varonce668 = var669;
}
((struct instance_core__NativeArray*)var651)->values[4]=var669;
} else {
var651 = varonce650;
varonce650 = NULL;
}
{
var676 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var651)->values[1]=var676;
{
var677 = nitc__abstract_compiler___MClassType___MType__ctype_extern(var_mtype);
}
((struct instance_core__NativeArray*)var651)->values[3]=var677;
{
var678 = ((val*(*)(val* self))(var651->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var651); /* native_to_s on <var651:NativeArray[String]>*/
}
varonce650 = var651;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var678); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce679==NULL)) {
var680 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce681!=NULL)) {
var682 = varonce681;
} else {
var683 = "struct instance_";
var685 = (val*)(16l<<2|1);
var686 = (val*)(16l<<2|1);
var687 = (val*)((long)(0)<<2|3);
var688 = (val*)((long)(0)<<2|3);
var684 = core__flat___CString___to_s_unsafe(var683, var685, var686, var687, var688);
var682 = var684;
varonce681 = var682;
}
((struct instance_core__NativeArray*)var680)->values[0]=var682;
if (likely(varonce689!=NULL)) {
var690 = varonce689;
} else {
var691 = "*res = nit_alloc(sizeof(struct instance_";
var693 = (val*)(40l<<2|1);
var694 = (val*)(40l<<2|1);
var695 = (val*)((long)(0)<<2|3);
var696 = (val*)((long)(0)<<2|3);
var692 = core__flat___CString___to_s_unsafe(var691, var693, var694, var695, var696);
var690 = var692;
varonce689 = var690;
}
((struct instance_core__NativeArray*)var680)->values[2]=var690;
if (likely(varonce697!=NULL)) {
var698 = varonce697;
} else {
var699 = "));";
var701 = (val*)(3l<<2|1);
var702 = (val*)(3l<<2|1);
var703 = (val*)((long)(0)<<2|3);
var704 = (val*)((long)(0)<<2|3);
var700 = core__flat___CString___to_s_unsafe(var699, var701, var702, var703, var704);
var698 = var700;
varonce697 = var698;
}
((struct instance_core__NativeArray*)var680)->values[4]=var698;
} else {
var680 = varonce679;
varonce679 = NULL;
}
((struct instance_core__NativeArray*)var680)->values[1]=var_c_name;
((struct instance_core__NativeArray*)var680)->values[3]=var_c_name;
{
var705 = ((val*(*)(val* self))(var680->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var680); /* native_to_s on <var680:NativeArray[String]>*/
}
varonce679 = var680;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var705); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce706==NULL)) {
var707 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce708!=NULL)) {
var709 = varonce708;
} else {
var710 = "class_";
var712 = (val*)(6l<<2|1);
var713 = (val*)(6l<<2|1);
var714 = (val*)((long)(0)<<2|3);
var715 = (val*)((long)(0)<<2|3);
var711 = core__flat___CString___to_s_unsafe(var710, var712, var713, var714, var715);
var709 = var711;
varonce708 = var709;
}
((struct instance_core__NativeArray*)var707)->values[0]=var709;
} else {
var707 = varonce706;
varonce706 = NULL;
}
((struct instance_core__NativeArray*)var707)->values[1]=var_c_name;
{
var716 = ((val*(*)(val* self))(var707->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var707); /* native_to_s on <var707:NativeArray[String]>*/
}
varonce706 = var707;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v, var716); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce717==NULL)) {
var718 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce719!=NULL)) {
var720 = varonce719;
} else {
var721 = "res->class = &class_";
var723 = (val*)(20l<<2|1);
var724 = (val*)(20l<<2|1);
var725 = (val*)((long)(0)<<2|3);
var726 = (val*)((long)(0)<<2|3);
var722 = core__flat___CString___to_s_unsafe(var721, var723, var724, var725, var726);
var720 = var722;
varonce719 = var720;
}
((struct instance_core__NativeArray*)var718)->values[0]=var720;
if (likely(varonce727!=NULL)) {
var728 = varonce727;
} else {
var729 = ";";
var731 = (val*)(1l<<2|1);
var732 = (val*)(1l<<2|1);
var733 = (val*)((long)(0)<<2|3);
var734 = (val*)((long)(0)<<2|3);
var730 = core__flat___CString___to_s_unsafe(var729, var731, var732, var733, var734);
var728 = var730;
varonce727 = var728;
}
((struct instance_core__NativeArray*)var718)->values[2]=var728;
} else {
var718 = varonce717;
varonce717 = NULL;
}
((struct instance_core__NativeArray*)var718)->values[1]=var_c_name;
{
var735 = ((val*(*)(val* self))(var718->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var718); /* native_to_s on <var718:NativeArray[String]>*/
}
varonce717 = var718;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var735); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce736!=NULL)) {
var737 = varonce736;
} else {
var738 = "res->value = value;";
var740 = (val*)(19l<<2|1);
var741 = (val*)(19l<<2|1);
var742 = (val*)((long)(0)<<2|3);
var743 = (val*)((long)(0)<<2|3);
var739 = core__flat___CString___to_s_unsafe(var738, var740, var741, var742, var743);
var737 = var739;
varonce736 = var737;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var737); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce744!=NULL)) {
var745 = varonce744;
} else {
var746 = "return (val*)res;";
var748 = (val*)(17l<<2|1);
var749 = (val*)(17l<<2|1);
var750 = (val*)((long)(0)<<2|3);
var751 = (val*)((long)(0)<<2|3);
var747 = core__flat___CString___to_s_unsafe(var746, var748, var749, var750, var751);
var745 = var747;
varonce744 = var745;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var745); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce752!=NULL)) {
var753 = varonce752;
} else {
var754 = "}";
var756 = (val*)(1l<<2|1);
var757 = (val*)(1l<<2|1);
var758 = (val*)((long)(0)<<2|3);
var759 = (val*)((long)(0)<<2|3);
var755 = core__flat___CString___to_s_unsafe(var754, var756, var757, var758, var759);
var753 = var755;
varonce752 = var753;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var753); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:MClassType> */
var762 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var762 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var760 = var762;
RET_LABEL761:(void)0;
}
}
{
{ /* Inline model$MClass$name (var760) on <var760:MClass> */
var765 = var760->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var760:MClass> */
if (unlikely(var765 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var763 = var765;
RET_LABEL764:(void)0;
}
}
if (likely(varonce766!=NULL)) {
var767 = varonce766;
} else {
var768 = "Pointer";
var770 = (val*)(7l<<2|1);
var771 = (val*)(7l<<2|1);
var772 = (val*)((long)(0)<<2|3);
var773 = (val*)((long)(0)<<2|3);
var769 = core__flat___CString___to_s_unsafe(var768, var770, var771, var772, var773);
var767 = var769;
varonce766 = var767;
}
{
{ /* Inline kernel$Object$!= (var763,var767) on <var763:String> */
var_other = var767;
{
var776 = ((short int(*)(val* self, val* p0))(var763->class->vft[COLOR_core__kernel__Object___61d_61d]))(var763, var_other); /* == on <var763:String>*/
}
var777 = !var776;
var774 = var777;
goto RET_LABEL775;
RET_LABEL775:(void)0;
}
}
if (var774){
goto RET_LABEL;
} else {
}
{
var778 = nitc___nitc__SeparateErasureCompiler___nitc__abstract_compiler__AbstractCompiler__new_visitor(self);
}
var_v = var778;
if (unlikely(varonce779==NULL)) {
var780 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce781!=NULL)) {
var782 = varonce781;
} else {
var783 = "NEW_";
var785 = (val*)(4l<<2|1);
var786 = (val*)(4l<<2|1);
var787 = (val*)((long)(0)<<2|3);
var788 = (val*)((long)(0)<<2|3);
var784 = core__flat___CString___to_s_unsafe(var783, var785, var786, var787, var788);
var782 = var784;
varonce781 = var782;
}
((struct instance_core__NativeArray*)var780)->values[0]=var782;
} else {
var780 = varonce779;
varonce779 = NULL;
}
((struct instance_core__NativeArray*)var780)->values[1]=var_c_name;
{
var789 = ((val*(*)(val* self))(var780->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var780); /* native_to_s on <var780:NativeArray[String]>*/
}
varonce779 = var780;
if (unlikely(varonce790==NULL)) {
var791 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce792!=NULL)) {
var793 = varonce792;
} else {
var794 = " NEW_";
var796 = (val*)(5l<<2|1);
var797 = (val*)(5l<<2|1);
var798 = (val*)((long)(0)<<2|3);
var799 = (val*)((long)(0)<<2|3);
var795 = core__flat___CString___to_s_unsafe(var794, var796, var797, var798, var799);
var793 = var795;
varonce792 = var793;
}
((struct instance_core__NativeArray*)var791)->values[1]=var793;
if (likely(varonce800!=NULL)) {
var801 = varonce800;
} else {
var802 = "();";
var804 = (val*)(3l<<2|1);
var805 = (val*)(3l<<2|1);
var806 = (val*)((long)(0)<<2|3);
var807 = (val*)((long)(0)<<2|3);
var803 = core__flat___CString___to_s_unsafe(var802, var804, var805, var806, var807);
var801 = var803;
varonce800 = var801;
}
((struct instance_core__NativeArray*)var791)->values[3]=var801;
} else {
var791 = varonce790;
varonce790 = NULL;
}
{
var808 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var791)->values[0]=var808;
((struct instance_core__NativeArray*)var791)->values[2]=var_c_name;
{
var809 = ((val*(*)(val* self))(var791->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var791); /* native_to_s on <var791:NativeArray[String]>*/
}
varonce790 = var791;
{
nitc___nitc__AbstractCompiler___provide_declaration(self, var789, var809); /* Direct call abstract_compiler$AbstractCompiler$provide_declaration on <self:SeparateErasureCompiler>*/
}
if (unlikely(varonce810==NULL)) {
var811 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce812!=NULL)) {
var813 = varonce812;
} else {
var814 = "/* allocate ";
var816 = (val*)(12l<<2|1);
var817 = (val*)(12l<<2|1);
var818 = (val*)((long)(0)<<2|3);
var819 = (val*)((long)(0)<<2|3);
var815 = core__flat___CString___to_s_unsafe(var814, var816, var817, var818, var819);
var813 = var815;
varonce812 = var813;
}
((struct instance_core__NativeArray*)var811)->values[0]=var813;
if (likely(varonce820!=NULL)) {
var821 = varonce820;
} else {
var822 = " */";
var824 = (val*)(3l<<2|1);
var825 = (val*)(3l<<2|1);
var826 = (val*)((long)(0)<<2|3);
var827 = (val*)((long)(0)<<2|3);
var823 = core__flat___CString___to_s_unsafe(var822, var824, var825, var826, var827);
var821 = var823;
varonce820 = var821;
}
((struct instance_core__NativeArray*)var811)->values[2]=var821;
} else {
var811 = varonce810;
varonce810 = NULL;
}
{
var828 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var811)->values[1]=var828;
{
var829 = ((val*(*)(val* self))(var811->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var811); /* native_to_s on <var811:NativeArray[String]>*/
}
varonce810 = var811;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var829); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce830==NULL)) {
var831 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce832!=NULL)) {
var833 = varonce832;
} else {
var834 = " NEW_";
var836 = (val*)(5l<<2|1);
var837 = (val*)(5l<<2|1);
var838 = (val*)((long)(0)<<2|3);
var839 = (val*)((long)(0)<<2|3);
var835 = core__flat___CString___to_s_unsafe(var834, var836, var837, var838, var839);
var833 = var835;
varonce832 = var833;
}
((struct instance_core__NativeArray*)var831)->values[1]=var833;
if (likely(varonce840!=NULL)) {
var841 = varonce840;
} else {
var842 = "() {";
var844 = (val*)(4l<<2|1);
var845 = (val*)(4l<<2|1);
var846 = (val*)((long)(0)<<2|3);
var847 = (val*)((long)(0)<<2|3);
var843 = core__flat___CString___to_s_unsafe(var842, var844, var845, var846, var847);
var841 = var843;
varonce840 = var841;
}
((struct instance_core__NativeArray*)var831)->values[3]=var841;
} else {
var831 = varonce830;
varonce830 = NULL;
}
{
var848 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var831)->values[0]=var848;
((struct instance_core__NativeArray*)var831)->values[2]=var_c_name;
{
var849 = ((val*(*)(val* self))(var831->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var831); /* native_to_s on <var831:NativeArray[String]>*/
}
varonce830 = var831;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var849); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (var_is_dead){
if (unlikely(varonce850==NULL)) {
var851 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce852!=NULL)) {
var853 = varonce852;
} else {
var854 = " is DEAD";
var856 = (val*)(8l<<2|1);
var857 = (val*)(8l<<2|1);
var858 = (val*)((long)(0)<<2|3);
var859 = (val*)((long)(0)<<2|3);
var855 = core__flat___CString___to_s_unsafe(var854, var856, var857, var858, var859);
var853 = var855;
varonce852 = var853;
}
((struct instance_core__NativeArray*)var851)->values[1]=var853;
} else {
var851 = varonce850;
varonce850 = NULL;
}
{
var860 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclass); /* to_s on <var_mclass:MClass>*/
}
((struct instance_core__NativeArray*)var851)->values[0]=var860;
{
var861 = ((val*(*)(val* self))(var851->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var851); /* native_to_s on <var851:NativeArray[String]>*/
}
varonce850 = var851;
{
nitc___nitc__AbstractCompilerVisitor___add_abort(var_v, var861); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_abort on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (likely(varonce862!=NULL)) {
var863 = varonce862;
} else {
var864 = "self";
var866 = (val*)(4l<<2|1);
var867 = (val*)(4l<<2|1);
var868 = (val*)((long)(0)<<2|3);
var869 = (val*)((long)(0)<<2|3);
var865 = core__flat___CString___to_s_unsafe(var864, var866, var867, var868, var869);
var863 = var865;
varonce862 = var863;
}
{
var870 = nitc___nitc__AbstractCompilerVisitor___new_named_var(var_v, var_mtype, var863);
}
var_res = var870;
{
{ /* Inline abstract_compiler$RuntimeVariable$is_exact= (var_res,1) on <var_res:RuntimeVariable> */
var_res->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___is_exact].s = 1; /* _is_exact on <var_res:RuntimeVariable> */
RET_LABEL871:(void)0;
}
}
if (unlikely(varonce872==NULL)) {
var873 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce874!=NULL)) {
var875 = varonce874;
} else {
var876 = " = nit_alloc(sizeof(struct instance_";
var878 = (val*)(36l<<2|1);
var879 = (val*)(36l<<2|1);
var880 = (val*)((long)(0)<<2|3);
var881 = (val*)((long)(0)<<2|3);
var877 = core__flat___CString___to_s_unsafe(var876, var878, var879, var880, var881);
var875 = var877;
varonce874 = var875;
}
((struct instance_core__NativeArray*)var873)->values[1]=var875;
if (likely(varonce882!=NULL)) {
var883 = varonce882;
} else {
var884 = "));";
var886 = (val*)(3l<<2|1);
var887 = (val*)(3l<<2|1);
var888 = (val*)((long)(0)<<2|3);
var889 = (val*)((long)(0)<<2|3);
var885 = core__flat___CString___to_s_unsafe(var884, var886, var887, var888, var889);
var883 = var885;
varonce882 = var883;
}
((struct instance_core__NativeArray*)var873)->values[3]=var883;
} else {
var873 = varonce872;
varonce872 = NULL;
}
{
var890 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var873)->values[0]=var890;
{
var891 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var873)->values[2]=var891;
{
var892 = ((val*(*)(val* self))(var873->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var873); /* native_to_s on <var873:NativeArray[String]>*/
}
varonce872 = var873;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var892); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce893==NULL)) {
var894 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce895!=NULL)) {
var896 = varonce895;
} else {
var897 = "class_";
var899 = (val*)(6l<<2|1);
var900 = (val*)(6l<<2|1);
var901 = (val*)((long)(0)<<2|3);
var902 = (val*)((long)(0)<<2|3);
var898 = core__flat___CString___to_s_unsafe(var897, var899, var900, var901, var902);
var896 = var898;
varonce895 = var896;
}
((struct instance_core__NativeArray*)var894)->values[0]=var896;
} else {
var894 = varonce893;
varonce893 = NULL;
}
((struct instance_core__NativeArray*)var894)->values[1]=var_c_name;
{
var903 = ((val*(*)(val* self))(var894->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var894); /* native_to_s on <var894:NativeArray[String]>*/
}
varonce893 = var894;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v, var903); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce904==NULL)) {
var905 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce906!=NULL)) {
var907 = varonce906;
} else {
var908 = "->class = &class_";
var910 = (val*)(17l<<2|1);
var911 = (val*)(17l<<2|1);
var912 = (val*)((long)(0)<<2|3);
var913 = (val*)((long)(0)<<2|3);
var909 = core__flat___CString___to_s_unsafe(var908, var910, var911, var912, var913);
var907 = var909;
varonce906 = var907;
}
((struct instance_core__NativeArray*)var905)->values[1]=var907;
if (likely(varonce914!=NULL)) {
var915 = varonce914;
} else {
var916 = ";";
var918 = (val*)(1l<<2|1);
var919 = (val*)(1l<<2|1);
var920 = (val*)((long)(0)<<2|3);
var921 = (val*)((long)(0)<<2|3);
var917 = core__flat___CString___to_s_unsafe(var916, var918, var919, var920, var921);
var915 = var917;
varonce914 = var915;
}
((struct instance_core__NativeArray*)var905)->values[3]=var915;
} else {
var905 = varonce904;
varonce904 = NULL;
}
{
var922 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var905)->values[0]=var922;
((struct instance_core__NativeArray*)var905)->values[2]=var_c_name;
{
var923 = ((val*(*)(val* self))(var905->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var905); /* native_to_s on <var905:NativeArray[String]>*/
}
varonce904 = var905;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var923); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce924==NULL)) {
var925 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce926!=NULL)) {
var927 = varonce926;
} else {
var928 = "((struct instance_";
var930 = (val*)(18l<<2|1);
var931 = (val*)(18l<<2|1);
var932 = (val*)((long)(0)<<2|3);
var933 = (val*)((long)(0)<<2|3);
var929 = core__flat___CString___to_s_unsafe(var928, var930, var931, var932, var933);
var927 = var929;
varonce926 = var927;
}
((struct instance_core__NativeArray*)var925)->values[0]=var927;
if (likely(varonce934!=NULL)) {
var935 = varonce934;
} else {
var936 = "*)";
var938 = (val*)(2l<<2|1);
var939 = (val*)(2l<<2|1);
var940 = (val*)((long)(0)<<2|3);
var941 = (val*)((long)(0)<<2|3);
var937 = core__flat___CString___to_s_unsafe(var936, var938, var939, var940, var941);
var935 = var937;
varonce934 = var935;
}
((struct instance_core__NativeArray*)var925)->values[2]=var935;
if (likely(varonce942!=NULL)) {
var943 = varonce942;
} else {
var944 = ")->value = NULL;";
var946 = (val*)(16l<<2|1);
var947 = (val*)(16l<<2|1);
var948 = (val*)((long)(0)<<2|3);
var949 = (val*)((long)(0)<<2|3);
var945 = core__flat___CString___to_s_unsafe(var944, var946, var947, var948, var949);
var943 = var945;
varonce942 = var943;
}
((struct instance_core__NativeArray*)var925)->values[4]=var943;
} else {
var925 = varonce924;
varonce924 = NULL;
}
{
var950 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var925)->values[1]=var950;
{
var951 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var925)->values[3]=var951;
{
var952 = ((val*(*)(val* self))(var925->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var925); /* native_to_s on <var925:NativeArray[String]>*/
}
varonce924 = var925;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var952); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce953==NULL)) {
var954 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce955!=NULL)) {
var956 = varonce955;
} else {
var957 = "return ";
var959 = (val*)(7l<<2|1);
var960 = (val*)(7l<<2|1);
var961 = (val*)((long)(0)<<2|3);
var962 = (val*)((long)(0)<<2|3);
var958 = core__flat___CString___to_s_unsafe(var957, var959, var960, var961, var962);
var956 = var958;
varonce955 = var956;
}
((struct instance_core__NativeArray*)var954)->values[0]=var956;
if (likely(varonce963!=NULL)) {
var964 = varonce963;
} else {
var965 = ";";
var967 = (val*)(1l<<2|1);
var968 = (val*)(1l<<2|1);
var969 = (val*)((long)(0)<<2|3);
var970 = (val*)((long)(0)<<2|3);
var966 = core__flat___CString___to_s_unsafe(var965, var967, var968, var969, var970);
var964 = var966;
varonce963 = var964;
}
((struct instance_core__NativeArray*)var954)->values[2]=var964;
} else {
var954 = varonce953;
varonce953 = NULL;
}
{
var971 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var954)->values[1]=var971;
{
var972 = ((val*(*)(val* self))(var954->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var954); /* native_to_s on <var954:NativeArray[String]>*/
}
varonce953 = var954;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var972); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
}
if (likely(varonce973!=NULL)) {
var974 = varonce973;
} else {
var975 = "}";
var977 = (val*)(1l<<2|1);
var978 = (val*)(1l<<2|1);
var979 = (val*)((long)(0)<<2|3);
var980 = (val*)((long)(0)<<2|3);
var976 = core__flat___CString___to_s_unsafe(var975, var977, var978, var979, var980);
var974 = var976;
varonce973 = var974;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var974); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
{
{ /* Inline model$MClass$name (var_mclass) on <var_mclass:MClass> */
var983 = var_mclass->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var_mclass:MClass> */
if (unlikely(var983 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var981 = var983;
RET_LABEL982:(void)0;
}
}
if (likely(varonce984!=NULL)) {
var985 = varonce984;
} else {
var986 = "NativeArray";
var988 = (val*)(11l<<2|1);
var989 = (val*)(11l<<2|1);
var990 = (val*)((long)(0)<<2|3);
var991 = (val*)((long)(0)<<2|3);
var987 = core__flat___CString___to_s_unsafe(var986, var988, var989, var990, var991);
var985 = var987;
varonce984 = var985;
}
{
var992 = ((short int(*)(val* self, val* p0))(var981->class->vft[COLOR_core__kernel__Object___61d_61d]))(var981, var985); /* == on <var981:String>*/
}
if (var992){
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:SeparateErasureCompiler> */
var995 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var995 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var993 = var995;
RET_LABEL994:(void)0;
}
}
if (unlikely(varonce996==NULL)) {
var997 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce998!=NULL)) {
var999 = varonce998;
} else {
var1000 = "struct instance_";
var1002 = (val*)(16l<<2|1);
var1003 = (val*)(16l<<2|1);
var1004 = (val*)((long)(0)<<2|3);
var1005 = (val*)((long)(0)<<2|3);
var1001 = core__flat___CString___to_s_unsafe(var1000, var1002, var1003, var1004, var1005);
var999 = var1001;
varonce998 = var999;
}
((struct instance_core__NativeArray*)var997)->values[0]=var999;
if (likely(varonce1006!=NULL)) {
var1007 = varonce1006;
} else {
var1008 = " {";
var1010 = (val*)(2l<<2|1);
var1011 = (val*)(2l<<2|1);
var1012 = (val*)((long)(0)<<2|3);
var1013 = (val*)((long)(0)<<2|3);
var1009 = core__flat___CString___to_s_unsafe(var1008, var1010, var1011, var1012, var1013);
var1007 = var1009;
varonce1006 = var1007;
}
((struct instance_core__NativeArray*)var997)->values[2]=var1007;
} else {
var997 = varonce996;
varonce996 = NULL;
}
((struct instance_core__NativeArray*)var997)->values[1]=var_c_name;
{
var1014 = ((val*(*)(val* self))(var997->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var997); /* native_to_s on <var997:NativeArray[String]>*/
}
varonce996 = var997;
{
nitc___nitc__CodeWriter___add_decl(var993, var1014); /* Direct call abstract_compiler$CodeWriter$add_decl on <var993:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:SeparateErasureCompiler> */
var1017 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var1017 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var1015 = var1017;
RET_LABEL1016:(void)0;
}
}
if (likely(varonce1018!=NULL)) {
var1019 = varonce1018;
} else {
var1020 = "const struct class *class;";
var1022 = (val*)(26l<<2|1);
var1023 = (val*)(26l<<2|1);
var1024 = (val*)((long)(0)<<2|3);
var1025 = (val*)((long)(0)<<2|3);
var1021 = core__flat___CString___to_s_unsafe(var1020, var1022, var1023, var1024, var1025);
var1019 = var1021;
varonce1018 = var1019;
}
{
nitc___nitc__CodeWriter___add_decl(var1015, var1019); /* Direct call abstract_compiler$CodeWriter$add_decl on <var1015:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:SeparateErasureCompiler> */
var1028 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var1028 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var1026 = var1028;
RET_LABEL1027:(void)0;
}
}
if (likely(varonce1029!=NULL)) {
var1030 = varonce1029;
} else {
var1031 = "int length;";
var1033 = (val*)(11l<<2|1);
var1034 = (val*)(11l<<2|1);
var1035 = (val*)((long)(0)<<2|3);
var1036 = (val*)((long)(0)<<2|3);
var1032 = core__flat___CString___to_s_unsafe(var1031, var1033, var1034, var1035, var1036);
var1030 = var1032;
varonce1029 = var1030;
}
{
nitc___nitc__CodeWriter___add_decl(var1026, var1030); /* Direct call abstract_compiler$CodeWriter$add_decl on <var1026:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:SeparateErasureCompiler> */
var1039 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var1039 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var1037 = var1039;
RET_LABEL1038:(void)0;
}
}
if (likely(varonce1040!=NULL)) {
var1041 = varonce1040;
} else {
var1042 = "val* values[];";
var1044 = (val*)(14l<<2|1);
var1045 = (val*)(14l<<2|1);
var1046 = (val*)((long)(0)<<2|3);
var1047 = (val*)((long)(0)<<2|3);
var1043 = core__flat___CString___to_s_unsafe(var1042, var1044, var1045, var1046, var1047);
var1041 = var1043;
varonce1040 = var1041;
}
{
nitc___nitc__CodeWriter___add_decl(var1037, var1041); /* Direct call abstract_compiler$CodeWriter$add_decl on <var1037:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:SeparateErasureCompiler> */
var1050 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var1050 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var1048 = var1050;
RET_LABEL1049:(void)0;
}
}
if (likely(varonce1051!=NULL)) {
var1052 = varonce1051;
} else {
var1053 = "};";
var1055 = (val*)(2l<<2|1);
var1056 = (val*)(2l<<2|1);
var1057 = (val*)((long)(0)<<2|3);
var1058 = (val*)((long)(0)<<2|3);
var1054 = core__flat___CString___to_s_unsafe(var1053, var1055, var1056, var1057, var1058);
var1052 = var1054;
varonce1051 = var1052;
}
{
nitc___nitc__CodeWriter___add_decl(var1048, var1052); /* Direct call abstract_compiler$CodeWriter$add_decl on <var1048:CodeWriter>*/
}
if (unlikely(varonce1059==NULL)) {
var1060 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce1061!=NULL)) {
var1062 = varonce1061;
} else {
var1063 = "NEW_";
var1065 = (val*)(4l<<2|1);
var1066 = (val*)(4l<<2|1);
var1067 = (val*)((long)(0)<<2|3);
var1068 = (val*)((long)(0)<<2|3);
var1064 = core__flat___CString___to_s_unsafe(var1063, var1065, var1066, var1067, var1068);
var1062 = var1064;
varonce1061 = var1062;
}
((struct instance_core__NativeArray*)var1060)->values[0]=var1062;
} else {
var1060 = varonce1059;
varonce1059 = NULL;
}
((struct instance_core__NativeArray*)var1060)->values[1]=var_c_name;
{
var1069 = ((val*(*)(val* self))(var1060->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1060); /* native_to_s on <var1060:NativeArray[String]>*/
}
varonce1059 = var1060;
if (unlikely(varonce1070==NULL)) {
var1071 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce1072!=NULL)) {
var1073 = varonce1072;
} else {
var1074 = " NEW_";
var1076 = (val*)(5l<<2|1);
var1077 = (val*)(5l<<2|1);
var1078 = (val*)((long)(0)<<2|3);
var1079 = (val*)((long)(0)<<2|3);
var1075 = core__flat___CString___to_s_unsafe(var1074, var1076, var1077, var1078, var1079);
var1073 = var1075;
varonce1072 = var1073;
}
((struct instance_core__NativeArray*)var1071)->values[1]=var1073;
if (likely(varonce1080!=NULL)) {
var1081 = varonce1080;
} else {
var1082 = "(int length);";
var1084 = (val*)(13l<<2|1);
var1085 = (val*)(13l<<2|1);
var1086 = (val*)((long)(0)<<2|3);
var1087 = (val*)((long)(0)<<2|3);
var1083 = core__flat___CString___to_s_unsafe(var1082, var1084, var1085, var1086, var1087);
var1081 = var1083;
varonce1080 = var1081;
}
((struct instance_core__NativeArray*)var1071)->values[3]=var1081;
} else {
var1071 = varonce1070;
varonce1070 = NULL;
}
{
var1088 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var1071)->values[0]=var1088;
((struct instance_core__NativeArray*)var1071)->values[2]=var_c_name;
{
var1089 = ((val*(*)(val* self))(var1071->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1071); /* native_to_s on <var1071:NativeArray[String]>*/
}
varonce1070 = var1071;
{
nitc___nitc__AbstractCompiler___provide_declaration(self, var1069, var1089); /* Direct call abstract_compiler$AbstractCompiler$provide_declaration on <self:SeparateErasureCompiler>*/
}
if (unlikely(varonce1090==NULL)) {
var1091 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce1092!=NULL)) {
var1093 = varonce1092;
} else {
var1094 = "/* allocate ";
var1096 = (val*)(12l<<2|1);
var1097 = (val*)(12l<<2|1);
var1098 = (val*)((long)(0)<<2|3);
var1099 = (val*)((long)(0)<<2|3);
var1095 = core__flat___CString___to_s_unsafe(var1094, var1096, var1097, var1098, var1099);
var1093 = var1095;
varonce1092 = var1093;
}
((struct instance_core__NativeArray*)var1091)->values[0]=var1093;
if (likely(varonce1100!=NULL)) {
var1101 = varonce1100;
} else {
var1102 = " */";
var1104 = (val*)(3l<<2|1);
var1105 = (val*)(3l<<2|1);
var1106 = (val*)((long)(0)<<2|3);
var1107 = (val*)((long)(0)<<2|3);
var1103 = core__flat___CString___to_s_unsafe(var1102, var1104, var1105, var1106, var1107);
var1101 = var1103;
varonce1100 = var1101;
}
((struct instance_core__NativeArray*)var1091)->values[2]=var1101;
} else {
var1091 = varonce1090;
varonce1090 = NULL;
}
{
var1108 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var1091)->values[1]=var1108;
{
var1109 = ((val*(*)(val* self))(var1091->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1091); /* native_to_s on <var1091:NativeArray[String]>*/
}
varonce1090 = var1091;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var1109); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce1110==NULL)) {
var1111 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce1112!=NULL)) {
var1113 = varonce1112;
} else {
var1114 = " NEW_";
var1116 = (val*)(5l<<2|1);
var1117 = (val*)(5l<<2|1);
var1118 = (val*)((long)(0)<<2|3);
var1119 = (val*)((long)(0)<<2|3);
var1115 = core__flat___CString___to_s_unsafe(var1114, var1116, var1117, var1118, var1119);
var1113 = var1115;
varonce1112 = var1113;
}
((struct instance_core__NativeArray*)var1111)->values[1]=var1113;
if (likely(varonce1120!=NULL)) {
var1121 = varonce1120;
} else {
var1122 = "(int length) {";
var1124 = (val*)(14l<<2|1);
var1125 = (val*)(14l<<2|1);
var1126 = (val*)((long)(0)<<2|3);
var1127 = (val*)((long)(0)<<2|3);
var1123 = core__flat___CString___to_s_unsafe(var1122, var1124, var1125, var1126, var1127);
var1121 = var1123;
varonce1120 = var1121;
}
((struct instance_core__NativeArray*)var1111)->values[3]=var1121;
} else {
var1111 = varonce1110;
varonce1110 = NULL;
}
{
var1128 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var1111)->values[0]=var1128;
((struct instance_core__NativeArray*)var1111)->values[2]=var_c_name;
{
var1129 = ((val*(*)(val* self))(var1111->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1111); /* native_to_s on <var1111:NativeArray[String]>*/
}
varonce1110 = var1111;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var1129); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce1130!=NULL)) {
var1131 = varonce1130;
} else {
var1132 = "self";
var1134 = (val*)(4l<<2|1);
var1135 = (val*)(4l<<2|1);
var1136 = (val*)((long)(0)<<2|3);
var1137 = (val*)((long)(0)<<2|3);
var1133 = core__flat___CString___to_s_unsafe(var1132, var1134, var1135, var1136, var1137);
var1131 = var1133;
varonce1130 = var1131;
}
{
var1138 = nitc___nitc__AbstractCompilerVisitor___get_name(var_v, var1131);
}
var_res1139 = var1138;
if (unlikely(varonce1140==NULL)) {
var1141 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce1142!=NULL)) {
var1143 = varonce1142;
} else {
var1144 = "struct instance_";
var1146 = (val*)(16l<<2|1);
var1147 = (val*)(16l<<2|1);
var1148 = (val*)((long)(0)<<2|3);
var1149 = (val*)((long)(0)<<2|3);
var1145 = core__flat___CString___to_s_unsafe(var1144, var1146, var1147, var1148, var1149);
var1143 = var1145;
varonce1142 = var1143;
}
((struct instance_core__NativeArray*)var1141)->values[0]=var1143;
if (likely(varonce1150!=NULL)) {
var1151 = varonce1150;
} else {
var1152 = " *";
var1154 = (val*)(2l<<2|1);
var1155 = (val*)(2l<<2|1);
var1156 = (val*)((long)(0)<<2|3);
var1157 = (val*)((long)(0)<<2|3);
var1153 = core__flat___CString___to_s_unsafe(var1152, var1154, var1155, var1156, var1157);
var1151 = var1153;
varonce1150 = var1151;
}
((struct instance_core__NativeArray*)var1141)->values[2]=var1151;
if (likely(varonce1158!=NULL)) {
var1159 = varonce1158;
} else {
var1160 = ";";
var1162 = (val*)(1l<<2|1);
var1163 = (val*)(1l<<2|1);
var1164 = (val*)((long)(0)<<2|3);
var1165 = (val*)((long)(0)<<2|3);
var1161 = core__flat___CString___to_s_unsafe(var1160, var1162, var1163, var1164, var1165);
var1159 = var1161;
varonce1158 = var1159;
}
((struct instance_core__NativeArray*)var1141)->values[4]=var1159;
} else {
var1141 = varonce1140;
varonce1140 = NULL;
}
((struct instance_core__NativeArray*)var1141)->values[1]=var_c_name;
((struct instance_core__NativeArray*)var1141)->values[3]=var_res1139;
{
var1166 = ((val*(*)(val* self))(var1141->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1141); /* native_to_s on <var1141:NativeArray[String]>*/
}
varonce1140 = var1141;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var1166); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
var1167 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MClassType__arguments]))(var_mtype); /* arguments on <var_mtype:MClassType>*/
}
{
var1168 = core___core__SequenceRead___Collection__first(var1167);
}
var_mtype_elt = var1168;
if (unlikely(varonce1169==NULL)) {
var1170 = NEW_core__NativeArray((int)6l, &type_core__NativeArray__core__String);
if (likely(varonce1171!=NULL)) {
var1172 = varonce1171;
} else {
var1173 = " = nit_alloc(sizeof(struct instance_";
var1175 = (val*)(36l<<2|1);
var1176 = (val*)(36l<<2|1);
var1177 = (val*)((long)(0)<<2|3);
var1178 = (val*)((long)(0)<<2|3);
var1174 = core__flat___CString___to_s_unsafe(var1173, var1175, var1176, var1177, var1178);
var1172 = var1174;
varonce1171 = var1172;
}
((struct instance_core__NativeArray*)var1170)->values[1]=var1172;
if (likely(varonce1179!=NULL)) {
var1180 = varonce1179;
} else {
var1181 = ") + length*sizeof(";
var1183 = (val*)(18l<<2|1);
var1184 = (val*)(18l<<2|1);
var1185 = (val*)((long)(0)<<2|3);
var1186 = (val*)((long)(0)<<2|3);
var1182 = core__flat___CString___to_s_unsafe(var1181, var1183, var1184, var1185, var1186);
var1180 = var1182;
varonce1179 = var1180;
}
((struct instance_core__NativeArray*)var1170)->values[3]=var1180;
if (likely(varonce1187!=NULL)) {
var1188 = varonce1187;
} else {
var1189 = "));";
var1191 = (val*)(3l<<2|1);
var1192 = (val*)(3l<<2|1);
var1193 = (val*)((long)(0)<<2|3);
var1194 = (val*)((long)(0)<<2|3);
var1190 = core__flat___CString___to_s_unsafe(var1189, var1191, var1192, var1193, var1194);
var1188 = var1190;
varonce1187 = var1188;
}
((struct instance_core__NativeArray*)var1170)->values[5]=var1188;
} else {
var1170 = varonce1169;
varonce1169 = NULL;
}
((struct instance_core__NativeArray*)var1170)->values[0]=var_res1139;
((struct instance_core__NativeArray*)var1170)->values[2]=var_c_name;
{
var1195 = ((val*(*)(val* self))(var_mtype_elt->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var_mtype_elt); /* ctype on <var_mtype_elt:MType>*/
}
((struct instance_core__NativeArray*)var1170)->values[4]=var1195;
{
var1196 = ((val*(*)(val* self))(var1170->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1170); /* native_to_s on <var1170:NativeArray[String]>*/
}
varonce1169 = var1170;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1196); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce1197==NULL)) {
var1198 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce1199!=NULL)) {
var1200 = varonce1199;
} else {
var1201 = "class_";
var1203 = (val*)(6l<<2|1);
var1204 = (val*)(6l<<2|1);
var1205 = (val*)((long)(0)<<2|3);
var1206 = (val*)((long)(0)<<2|3);
var1202 = core__flat___CString___to_s_unsafe(var1201, var1203, var1204, var1205, var1206);
var1200 = var1202;
varonce1199 = var1200;
}
((struct instance_core__NativeArray*)var1198)->values[0]=var1200;
} else {
var1198 = varonce1197;
varonce1197 = NULL;
}
((struct instance_core__NativeArray*)var1198)->values[1]=var_c_name;
{
var1207 = ((val*(*)(val* self))(var1198->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1198); /* native_to_s on <var1198:NativeArray[String]>*/
}
varonce1197 = var1198;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v, var1207); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce1208==NULL)) {
var1209 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce1210!=NULL)) {
var1211 = varonce1210;
} else {
var1212 = "->class = &class_";
var1214 = (val*)(17l<<2|1);
var1215 = (val*)(17l<<2|1);
var1216 = (val*)((long)(0)<<2|3);
var1217 = (val*)((long)(0)<<2|3);
var1213 = core__flat___CString___to_s_unsafe(var1212, var1214, var1215, var1216, var1217);
var1211 = var1213;
varonce1210 = var1211;
}
((struct instance_core__NativeArray*)var1209)->values[1]=var1211;
if (likely(varonce1218!=NULL)) {
var1219 = varonce1218;
} else {
var1220 = ";";
var1222 = (val*)(1l<<2|1);
var1223 = (val*)(1l<<2|1);
var1224 = (val*)((long)(0)<<2|3);
var1225 = (val*)((long)(0)<<2|3);
var1221 = core__flat___CString___to_s_unsafe(var1220, var1222, var1223, var1224, var1225);
var1219 = var1221;
varonce1218 = var1219;
}
((struct instance_core__NativeArray*)var1209)->values[3]=var1219;
} else {
var1209 = varonce1208;
varonce1208 = NULL;
}
((struct instance_core__NativeArray*)var1209)->values[0]=var_res1139;
((struct instance_core__NativeArray*)var1209)->values[2]=var_c_name;
{
var1226 = ((val*(*)(val* self))(var1209->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1209); /* native_to_s on <var1209:NativeArray[String]>*/
}
varonce1208 = var1209;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1226); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce1227==NULL)) {
var1228 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce1229!=NULL)) {
var1230 = varonce1229;
} else {
var1231 = "->length = length;";
var1233 = (val*)(18l<<2|1);
var1234 = (val*)(18l<<2|1);
var1235 = (val*)((long)(0)<<2|3);
var1236 = (val*)((long)(0)<<2|3);
var1232 = core__flat___CString___to_s_unsafe(var1231, var1233, var1234, var1235, var1236);
var1230 = var1232;
varonce1229 = var1230;
}
((struct instance_core__NativeArray*)var1228)->values[1]=var1230;
} else {
var1228 = varonce1227;
varonce1227 = NULL;
}
((struct instance_core__NativeArray*)var1228)->values[0]=var_res1139;
{
var1237 = ((val*(*)(val* self))(var1228->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1228); /* native_to_s on <var1228:NativeArray[String]>*/
}
varonce1227 = var1228;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1237); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce1238==NULL)) {
var1239 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce1240!=NULL)) {
var1241 = varonce1240;
} else {
var1242 = "return (val*)";
var1244 = (val*)(13l<<2|1);
var1245 = (val*)(13l<<2|1);
var1246 = (val*)((long)(0)<<2|3);
var1247 = (val*)((long)(0)<<2|3);
var1243 = core__flat___CString___to_s_unsafe(var1242, var1244, var1245, var1246, var1247);
var1241 = var1243;
varonce1240 = var1241;
}
((struct instance_core__NativeArray*)var1239)->values[0]=var1241;
if (likely(varonce1248!=NULL)) {
var1249 = varonce1248;
} else {
var1250 = ";";
var1252 = (val*)(1l<<2|1);
var1253 = (val*)(1l<<2|1);
var1254 = (val*)((long)(0)<<2|3);
var1255 = (val*)((long)(0)<<2|3);
var1251 = core__flat___CString___to_s_unsafe(var1250, var1252, var1253, var1254, var1255);
var1249 = var1251;
varonce1248 = var1249;
}
((struct instance_core__NativeArray*)var1239)->values[2]=var1249;
} else {
var1239 = varonce1238;
varonce1238 = NULL;
}
((struct instance_core__NativeArray*)var1239)->values[1]=var_res1139;
{
var1256 = ((val*(*)(val* self))(var1239->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1239); /* native_to_s on <var1239:NativeArray[String]>*/
}
varonce1238 = var1239;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1256); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce1257!=NULL)) {
var1258 = varonce1257;
} else {
var1259 = "}";
var1261 = (val*)(1l<<2|1);
var1262 = (val*)(1l<<2|1);
var1263 = (val*)((long)(0)<<2|3);
var1264 = (val*)((long)(0)<<2|3);
var1260 = core__flat___CString___to_s_unsafe(var1259, var1261, var1262, var1263, var1264);
var1258 = var1260;
varonce1257 = var1258;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1258); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:MClassType> */
var1268 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var1268 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var1266 = var1268;
RET_LABEL1267:(void)0;
}
}
{
{ /* Inline model$MClass$kind (var1266) on <var1266:MClass> */
var1271 = var1266->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var1266:MClass> */
if (unlikely(var1271 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var1269 = var1271;
RET_LABEL1270:(void)0;
}
}
var1272 = glob_sys;
{
var1273 = nitc__model___core__Sys___extern_kind(var1272);
}
{
{ /* Inline kernel$Object$== (var1269,var1273) on <var1269:MClassKind> */
var_other293 = var1273;
{
{ /* Inline kernel$Object$is_same_instance (var1269,var_other293) on <var1269:MClassKind> */
var1278 = var1269 == var_other293;
var1276 = var1278;
goto RET_LABEL1277;
RET_LABEL1277:(void)0;
}
}
var1274 = var1276;
goto RET_LABEL1275;
RET_LABEL1275:(void)0;
}
}
var_1279 = var1274;
if (var1274){
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:MClassType> */
var1282 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var1282 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var1280 = var1282;
RET_LABEL1281:(void)0;
}
}
{
{ /* Inline model$MClass$name (var1280) on <var1280:MClass> */
var1285 = var1280->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var1280:MClass> */
if (unlikely(var1285 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var1283 = var1285;
RET_LABEL1284:(void)0;
}
}
if (likely(varonce1286!=NULL)) {
var1287 = varonce1286;
} else {
var1288 = "CString";
var1290 = (val*)(7l<<2|1);
var1291 = (val*)(7l<<2|1);
var1292 = (val*)((long)(0)<<2|3);
var1293 = (val*)((long)(0)<<2|3);
var1289 = core__flat___CString___to_s_unsafe(var1288, var1290, var1291, var1292, var1293);
var1287 = var1289;
varonce1286 = var1287;
}
{
{ /* Inline kernel$Object$!= (var1283,var1287) on <var1283:String> */
var_other = var1287;
{
var1296 = ((short int(*)(val* self, val* p0))(var1283->class->vft[COLOR_core__kernel__Object___61d_61d]))(var1283, var_other); /* == on <var1283:String>*/
}
var1297 = !var1296;
var1294 = var1297;
goto RET_LABEL1295;
RET_LABEL1295:(void)0;
}
}
var1265 = var1294;
} else {
var1265 = var_1279;
}
if (var1265){
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (self) on <self:SeparateErasureCompiler> */
var1300 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var1300 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
fatal_exit(1);
}
var1298 = var1300;
RET_LABEL1299:(void)0;
}
}
{
var1301 = nitc__model___MModule___pointer_type(var1298);
}
var_pointer_type = var1301;
if (unlikely(varonce1302==NULL)) {
var1303 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce1304!=NULL)) {
var1305 = varonce1304;
} else {
var1306 = "NEW_";
var1308 = (val*)(4l<<2|1);
var1309 = (val*)(4l<<2|1);
var1310 = (val*)((long)(0)<<2|3);
var1311 = (val*)((long)(0)<<2|3);
var1307 = core__flat___CString___to_s_unsafe(var1306, var1308, var1309, var1310, var1311);
var1305 = var1307;
varonce1304 = var1305;
}
((struct instance_core__NativeArray*)var1303)->values[0]=var1305;
} else {
var1303 = varonce1302;
varonce1302 = NULL;
}
((struct instance_core__NativeArray*)var1303)->values[1]=var_c_name;
{
var1312 = ((val*(*)(val* self))(var1303->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1303); /* native_to_s on <var1303:NativeArray[String]>*/
}
varonce1302 = var1303;
if (unlikely(varonce1313==NULL)) {
var1314 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce1315!=NULL)) {
var1316 = varonce1315;
} else {
var1317 = " NEW_";
var1319 = (val*)(5l<<2|1);
var1320 = (val*)(5l<<2|1);
var1321 = (val*)((long)(0)<<2|3);
var1322 = (val*)((long)(0)<<2|3);
var1318 = core__flat___CString___to_s_unsafe(var1317, var1319, var1320, var1321, var1322);
var1316 = var1318;
varonce1315 = var1316;
}
((struct instance_core__NativeArray*)var1314)->values[1]=var1316;
if (likely(varonce1323!=NULL)) {
var1324 = varonce1323;
} else {
var1325 = "();";
var1327 = (val*)(3l<<2|1);
var1328 = (val*)(3l<<2|1);
var1329 = (val*)((long)(0)<<2|3);
var1330 = (val*)((long)(0)<<2|3);
var1326 = core__flat___CString___to_s_unsafe(var1325, var1327, var1328, var1329, var1330);
var1324 = var1326;
varonce1323 = var1324;
}
((struct instance_core__NativeArray*)var1314)->values[3]=var1324;
} else {
var1314 = varonce1313;
varonce1313 = NULL;
}
{
var1331 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var1314)->values[0]=var1331;
((struct instance_core__NativeArray*)var1314)->values[2]=var_c_name;
{
var1332 = ((val*(*)(val* self))(var1314->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1314); /* native_to_s on <var1314:NativeArray[String]>*/
}
varonce1313 = var1314;
{
nitc___nitc__AbstractCompiler___provide_declaration(self, var1312, var1332); /* Direct call abstract_compiler$AbstractCompiler$provide_declaration on <self:SeparateErasureCompiler>*/
}
if (unlikely(varonce1333==NULL)) {
var1334 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce1335!=NULL)) {
var1336 = varonce1335;
} else {
var1337 = "/* allocate ";
var1339 = (val*)(12l<<2|1);
var1340 = (val*)(12l<<2|1);
var1341 = (val*)((long)(0)<<2|3);
var1342 = (val*)((long)(0)<<2|3);
var1338 = core__flat___CString___to_s_unsafe(var1337, var1339, var1340, var1341, var1342);
var1336 = var1338;
varonce1335 = var1336;
}
((struct instance_core__NativeArray*)var1334)->values[0]=var1336;
if (likely(varonce1343!=NULL)) {
var1344 = varonce1343;
} else {
var1345 = " */";
var1347 = (val*)(3l<<2|1);
var1348 = (val*)(3l<<2|1);
var1349 = (val*)((long)(0)<<2|3);
var1350 = (val*)((long)(0)<<2|3);
var1346 = core__flat___CString___to_s_unsafe(var1345, var1347, var1348, var1349, var1350);
var1344 = var1346;
varonce1343 = var1344;
}
((struct instance_core__NativeArray*)var1334)->values[2]=var1344;
} else {
var1334 = varonce1333;
varonce1333 = NULL;
}
{
var1351 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var1334)->values[1]=var1351;
{
var1352 = ((val*(*)(val* self))(var1334->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1334); /* native_to_s on <var1334:NativeArray[String]>*/
}
varonce1333 = var1334;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var1352); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce1353==NULL)) {
var1354 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce1355!=NULL)) {
var1356 = varonce1355;
} else {
var1357 = " NEW_";
var1359 = (val*)(5l<<2|1);
var1360 = (val*)(5l<<2|1);
var1361 = (val*)((long)(0)<<2|3);
var1362 = (val*)((long)(0)<<2|3);
var1358 = core__flat___CString___to_s_unsafe(var1357, var1359, var1360, var1361, var1362);
var1356 = var1358;
varonce1355 = var1356;
}
((struct instance_core__NativeArray*)var1354)->values[1]=var1356;
if (likely(varonce1363!=NULL)) {
var1364 = varonce1363;
} else {
var1365 = "() {";
var1367 = (val*)(4l<<2|1);
var1368 = (val*)(4l<<2|1);
var1369 = (val*)((long)(0)<<2|3);
var1370 = (val*)((long)(0)<<2|3);
var1366 = core__flat___CString___to_s_unsafe(var1365, var1367, var1368, var1369, var1370);
var1364 = var1366;
varonce1363 = var1364;
}
((struct instance_core__NativeArray*)var1354)->values[3]=var1364;
} else {
var1354 = varonce1353;
varonce1353 = NULL;
}
{
var1371 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var1354)->values[0]=var1371;
((struct instance_core__NativeArray*)var1354)->values[2]=var_c_name;
{
var1372 = ((val*(*)(val* self))(var1354->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1354); /* native_to_s on <var1354:NativeArray[String]>*/
}
varonce1353 = var1354;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var1372); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (var_is_dead){
if (unlikely(varonce1373==NULL)) {
var1374 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce1375!=NULL)) {
var1376 = varonce1375;
} else {
var1377 = " is DEAD";
var1379 = (val*)(8l<<2|1);
var1380 = (val*)(8l<<2|1);
var1381 = (val*)((long)(0)<<2|3);
var1382 = (val*)((long)(0)<<2|3);
var1378 = core__flat___CString___to_s_unsafe(var1377, var1379, var1380, var1381, var1382);
var1376 = var1378;
varonce1375 = var1376;
}
((struct instance_core__NativeArray*)var1374)->values[1]=var1376;
} else {
var1374 = varonce1373;
varonce1373 = NULL;
}
{
var1383 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclass); /* to_s on <var_mclass:MClass>*/
}
((struct instance_core__NativeArray*)var1374)->values[0]=var1383;
{
var1384 = ((val*(*)(val* self))(var1374->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1374); /* native_to_s on <var1374:NativeArray[String]>*/
}
varonce1373 = var1374;
{
nitc___nitc__AbstractCompilerVisitor___add_abort(var_v, var1384); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_abort on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (likely(varonce1385!=NULL)) {
var1386 = varonce1385;
} else {
var1387 = "self";
var1389 = (val*)(4l<<2|1);
var1390 = (val*)(4l<<2|1);
var1391 = (val*)((long)(0)<<2|3);
var1392 = (val*)((long)(0)<<2|3);
var1388 = core__flat___CString___to_s_unsafe(var1387, var1389, var1390, var1391, var1392);
var1386 = var1388;
varonce1385 = var1386;
}
{
var1393 = nitc___nitc__AbstractCompilerVisitor___new_named_var(var_v, var_mtype, var1386);
}
var_res1394 = var1393;
{
{ /* Inline abstract_compiler$RuntimeVariable$is_exact= (var_res1394,1) on <var_res1394:RuntimeVariable> */
var_res1394->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___is_exact].s = 1; /* _is_exact on <var_res1394:RuntimeVariable> */
RET_LABEL1395:(void)0;
}
}
if (unlikely(varonce1396==NULL)) {
var1397 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce1398!=NULL)) {
var1399 = varonce1398;
} else {
var1400 = " = nit_alloc(sizeof(struct instance_";
var1402 = (val*)(36l<<2|1);
var1403 = (val*)(36l<<2|1);
var1404 = (val*)((long)(0)<<2|3);
var1405 = (val*)((long)(0)<<2|3);
var1401 = core__flat___CString___to_s_unsafe(var1400, var1402, var1403, var1404, var1405);
var1399 = var1401;
varonce1398 = var1399;
}
((struct instance_core__NativeArray*)var1397)->values[1]=var1399;
if (likely(varonce1406!=NULL)) {
var1407 = varonce1406;
} else {
var1408 = "));";
var1410 = (val*)(3l<<2|1);
var1411 = (val*)(3l<<2|1);
var1412 = (val*)((long)(0)<<2|3);
var1413 = (val*)((long)(0)<<2|3);
var1409 = core__flat___CString___to_s_unsafe(var1408, var1410, var1411, var1412, var1413);
var1407 = var1409;
varonce1406 = var1407;
}
((struct instance_core__NativeArray*)var1397)->values[3]=var1407;
} else {
var1397 = varonce1396;
varonce1396 = NULL;
}
{
var1414 = ((val*(*)(val* self))(var_res1394->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res1394); /* to_s on <var_res1394:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var1397)->values[0]=var1414;
{
var1415 = ((val*(*)(val* self))(var_pointer_type->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_pointer_type); /* c_name on <var_pointer_type:MClassType>*/
}
((struct instance_core__NativeArray*)var1397)->values[2]=var1415;
{
var1416 = ((val*(*)(val* self))(var1397->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1397); /* native_to_s on <var1397:NativeArray[String]>*/
}
varonce1396 = var1397;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1416); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce1417==NULL)) {
var1418 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce1419!=NULL)) {
var1420 = varonce1419;
} else {
var1421 = "class_";
var1423 = (val*)(6l<<2|1);
var1424 = (val*)(6l<<2|1);
var1425 = (val*)((long)(0)<<2|3);
var1426 = (val*)((long)(0)<<2|3);
var1422 = core__flat___CString___to_s_unsafe(var1421, var1423, var1424, var1425, var1426);
var1420 = var1422;
varonce1419 = var1420;
}
((struct instance_core__NativeArray*)var1418)->values[0]=var1420;
} else {
var1418 = varonce1417;
varonce1417 = NULL;
}
((struct instance_core__NativeArray*)var1418)->values[1]=var_c_name;
{
var1427 = ((val*(*)(val* self))(var1418->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1418); /* native_to_s on <var1418:NativeArray[String]>*/
}
varonce1417 = var1418;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v, var1427); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce1428==NULL)) {
var1429 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce1430!=NULL)) {
var1431 = varonce1430;
} else {
var1432 = "->class = &class_";
var1434 = (val*)(17l<<2|1);
var1435 = (val*)(17l<<2|1);
var1436 = (val*)((long)(0)<<2|3);
var1437 = (val*)((long)(0)<<2|3);
var1433 = core__flat___CString___to_s_unsafe(var1432, var1434, var1435, var1436, var1437);
var1431 = var1433;
varonce1430 = var1431;
}
((struct instance_core__NativeArray*)var1429)->values[1]=var1431;
if (likely(varonce1438!=NULL)) {
var1439 = varonce1438;
} else {
var1440 = ";";
var1442 = (val*)(1l<<2|1);
var1443 = (val*)(1l<<2|1);
var1444 = (val*)((long)(0)<<2|3);
var1445 = (val*)((long)(0)<<2|3);
var1441 = core__flat___CString___to_s_unsafe(var1440, var1442, var1443, var1444, var1445);
var1439 = var1441;
varonce1438 = var1439;
}
((struct instance_core__NativeArray*)var1429)->values[3]=var1439;
} else {
var1429 = varonce1428;
varonce1428 = NULL;
}
{
var1446 = ((val*(*)(val* self))(var_res1394->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res1394); /* to_s on <var_res1394:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var1429)->values[0]=var1446;
((struct instance_core__NativeArray*)var1429)->values[2]=var_c_name;
{
var1447 = ((val*(*)(val* self))(var1429->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1429); /* native_to_s on <var1429:NativeArray[String]>*/
}
varonce1428 = var1429;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1447); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce1448==NULL)) {
var1449 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce1450!=NULL)) {
var1451 = varonce1450;
} else {
var1452 = "((struct instance_";
var1454 = (val*)(18l<<2|1);
var1455 = (val*)(18l<<2|1);
var1456 = (val*)((long)(0)<<2|3);
var1457 = (val*)((long)(0)<<2|3);
var1453 = core__flat___CString___to_s_unsafe(var1452, var1454, var1455, var1456, var1457);
var1451 = var1453;
varonce1450 = var1451;
}
((struct instance_core__NativeArray*)var1449)->values[0]=var1451;
if (likely(varonce1458!=NULL)) {
var1459 = varonce1458;
} else {
var1460 = "*)";
var1462 = (val*)(2l<<2|1);
var1463 = (val*)(2l<<2|1);
var1464 = (val*)((long)(0)<<2|3);
var1465 = (val*)((long)(0)<<2|3);
var1461 = core__flat___CString___to_s_unsafe(var1460, var1462, var1463, var1464, var1465);
var1459 = var1461;
varonce1458 = var1459;
}
((struct instance_core__NativeArray*)var1449)->values[2]=var1459;
if (likely(varonce1466!=NULL)) {
var1467 = varonce1466;
} else {
var1468 = ")->value = NULL;";
var1470 = (val*)(16l<<2|1);
var1471 = (val*)(16l<<2|1);
var1472 = (val*)((long)(0)<<2|3);
var1473 = (val*)((long)(0)<<2|3);
var1469 = core__flat___CString___to_s_unsafe(var1468, var1470, var1471, var1472, var1473);
var1467 = var1469;
varonce1466 = var1467;
}
((struct instance_core__NativeArray*)var1449)->values[4]=var1467;
} else {
var1449 = varonce1448;
varonce1448 = NULL;
}
{
var1474 = ((val*(*)(val* self))(var_pointer_type->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_pointer_type); /* c_name on <var_pointer_type:MClassType>*/
}
((struct instance_core__NativeArray*)var1449)->values[1]=var1474;
{
var1475 = ((val*(*)(val* self))(var_res1394->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res1394); /* to_s on <var_res1394:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var1449)->values[3]=var1475;
{
var1476 = ((val*(*)(val* self))(var1449->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1449); /* native_to_s on <var1449:NativeArray[String]>*/
}
varonce1448 = var1449;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1476); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce1477==NULL)) {
var1478 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce1479!=NULL)) {
var1480 = varonce1479;
} else {
var1481 = "return ";
var1483 = (val*)(7l<<2|1);
var1484 = (val*)(7l<<2|1);
var1485 = (val*)((long)(0)<<2|3);
var1486 = (val*)((long)(0)<<2|3);
var1482 = core__flat___CString___to_s_unsafe(var1481, var1483, var1484, var1485, var1486);
var1480 = var1482;
varonce1479 = var1480;
}
((struct instance_core__NativeArray*)var1478)->values[0]=var1480;
if (likely(varonce1487!=NULL)) {
var1488 = varonce1487;
} else {
var1489 = ";";
var1491 = (val*)(1l<<2|1);
var1492 = (val*)(1l<<2|1);
var1493 = (val*)((long)(0)<<2|3);
var1494 = (val*)((long)(0)<<2|3);
var1490 = core__flat___CString___to_s_unsafe(var1489, var1491, var1492, var1493, var1494);
var1488 = var1490;
varonce1487 = var1488;
}
((struct instance_core__NativeArray*)var1478)->values[2]=var1488;
} else {
var1478 = varonce1477;
varonce1477 = NULL;
}
{
var1495 = ((val*(*)(val* self))(var_res1394->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res1394); /* to_s on <var_res1394:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var1478)->values[1]=var1495;
{
var1496 = ((val*(*)(val* self))(var1478->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1478); /* native_to_s on <var1478:NativeArray[String]>*/
}
varonce1477 = var1478;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1496); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
}
if (likely(varonce1497!=NULL)) {
var1498 = varonce1497;
} else {
var1499 = "}";
var1501 = (val*)(1l<<2|1);
var1502 = (val*)(1l<<2|1);
var1503 = (val*)((long)(0)<<2|3);
var1504 = (val*)((long)(0)<<2|3);
var1500 = core__flat___CString___to_s_unsafe(var1499, var1501, var1502, var1503, var1504);
var1498 = var1500;
varonce1497 = var1498;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1498); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
}
}
}
if (unlikely(varonce1505==NULL)) {
var1506 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce1507!=NULL)) {
var1508 = varonce1507;
} else {
var1509 = "NEW_";
var1511 = (val*)(4l<<2|1);
var1512 = (val*)(4l<<2|1);
var1513 = (val*)((long)(0)<<2|3);
var1514 = (val*)((long)(0)<<2|3);
var1510 = core__flat___CString___to_s_unsafe(var1509, var1511, var1512, var1513, var1514);
var1508 = var1510;
varonce1507 = var1508;
}
((struct instance_core__NativeArray*)var1506)->values[0]=var1508;
} else {
var1506 = varonce1505;
varonce1505 = NULL;
}
((struct instance_core__NativeArray*)var1506)->values[1]=var_c_name;
{
var1515 = ((val*(*)(val* self))(var1506->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1506); /* native_to_s on <var1506:NativeArray[String]>*/
}
varonce1505 = var1506;
if (unlikely(varonce1516==NULL)) {
var1517 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce1518!=NULL)) {
var1519 = varonce1518;
} else {
var1520 = " NEW_";
var1522 = (val*)(5l<<2|1);
var1523 = (val*)(5l<<2|1);
var1524 = (val*)((long)(0)<<2|3);
var1525 = (val*)((long)(0)<<2|3);
var1521 = core__flat___CString___to_s_unsafe(var1520, var1522, var1523, var1524, var1525);
var1519 = var1521;
varonce1518 = var1519;
}
((struct instance_core__NativeArray*)var1517)->values[1]=var1519;
if (likely(varonce1526!=NULL)) {
var1527 = varonce1526;
} else {
var1528 = "(void);";
var1530 = (val*)(7l<<2|1);
var1531 = (val*)(7l<<2|1);
var1532 = (val*)((long)(0)<<2|3);
var1533 = (val*)((long)(0)<<2|3);
var1529 = core__flat___CString___to_s_unsafe(var1528, var1530, var1531, var1532, var1533);
var1527 = var1529;
varonce1526 = var1527;
}
((struct instance_core__NativeArray*)var1517)->values[3]=var1527;
} else {
var1517 = varonce1516;
varonce1516 = NULL;
}
{
var1534 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var1517)->values[0]=var1534;
((struct instance_core__NativeArray*)var1517)->values[2]=var_c_name;
{
var1535 = ((val*(*)(val* self))(var1517->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1517); /* native_to_s on <var1517:NativeArray[String]>*/
}
varonce1516 = var1517;
{
nitc___nitc__AbstractCompiler___provide_declaration(self, var1515, var1535); /* Direct call abstract_compiler$AbstractCompiler$provide_declaration on <self:SeparateErasureCompiler>*/
}
if (unlikely(varonce1536==NULL)) {
var1537 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce1538!=NULL)) {
var1539 = varonce1538;
} else {
var1540 = "/* allocate ";
var1542 = (val*)(12l<<2|1);
var1543 = (val*)(12l<<2|1);
var1544 = (val*)((long)(0)<<2|3);
var1545 = (val*)((long)(0)<<2|3);
var1541 = core__flat___CString___to_s_unsafe(var1540, var1542, var1543, var1544, var1545);
var1539 = var1541;
varonce1538 = var1539;
}
((struct instance_core__NativeArray*)var1537)->values[0]=var1539;
if (likely(varonce1546!=NULL)) {
var1547 = varonce1546;
} else {
var1548 = " */";
var1550 = (val*)(3l<<2|1);
var1551 = (val*)(3l<<2|1);
var1552 = (val*)((long)(0)<<2|3);
var1553 = (val*)((long)(0)<<2|3);
var1549 = core__flat___CString___to_s_unsafe(var1548, var1550, var1551, var1552, var1553);
var1547 = var1549;
varonce1546 = var1547;
}
((struct instance_core__NativeArray*)var1537)->values[2]=var1547;
} else {
var1537 = varonce1536;
varonce1536 = NULL;
}
{
var1554 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var1537)->values[1]=var1554;
{
var1555 = ((val*(*)(val* self))(var1537->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1537); /* native_to_s on <var1537:NativeArray[String]>*/
}
varonce1536 = var1537;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var1555); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce1556==NULL)) {
var1557 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce1558!=NULL)) {
var1559 = varonce1558;
} else {
var1560 = " NEW_";
var1562 = (val*)(5l<<2|1);
var1563 = (val*)(5l<<2|1);
var1564 = (val*)((long)(0)<<2|3);
var1565 = (val*)((long)(0)<<2|3);
var1561 = core__flat___CString___to_s_unsafe(var1560, var1562, var1563, var1564, var1565);
var1559 = var1561;
varonce1558 = var1559;
}
((struct instance_core__NativeArray*)var1557)->values[1]=var1559;
if (likely(varonce1566!=NULL)) {
var1567 = varonce1566;
} else {
var1568 = "(void) {";
var1570 = (val*)(8l<<2|1);
var1571 = (val*)(8l<<2|1);
var1572 = (val*)((long)(0)<<2|3);
var1573 = (val*)((long)(0)<<2|3);
var1569 = core__flat___CString___to_s_unsafe(var1568, var1570, var1571, var1572, var1573);
var1567 = var1569;
varonce1566 = var1567;
}
((struct instance_core__NativeArray*)var1557)->values[3]=var1567;
} else {
var1557 = varonce1556;
varonce1556 = NULL;
}
{
var1574 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var1557)->values[0]=var1574;
((struct instance_core__NativeArray*)var1557)->values[2]=var_c_name;
{
var1575 = ((val*(*)(val* self))(var1557->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1557); /* native_to_s on <var1557:NativeArray[String]>*/
}
varonce1556 = var1557;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var1575); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (var_is_dead){
if (unlikely(varonce1576==NULL)) {
var1577 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce1578!=NULL)) {
var1579 = varonce1578;
} else {
var1580 = " is DEAD";
var1582 = (val*)(8l<<2|1);
var1583 = (val*)(8l<<2|1);
var1584 = (val*)((long)(0)<<2|3);
var1585 = (val*)((long)(0)<<2|3);
var1581 = core__flat___CString___to_s_unsafe(var1580, var1582, var1583, var1584, var1585);
var1579 = var1581;
varonce1578 = var1579;
}
((struct instance_core__NativeArray*)var1577)->values[1]=var1579;
} else {
var1577 = varonce1576;
varonce1576 = NULL;
}
{
var1586 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclass); /* to_s on <var_mclass:MClass>*/
}
((struct instance_core__NativeArray*)var1577)->values[0]=var1586;
{
var1587 = ((val*(*)(val* self))(var1577->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1577); /* native_to_s on <var1577:NativeArray[String]>*/
}
varonce1576 = var1577;
{
nitc___nitc__AbstractCompilerVisitor___add_abort(var_v, var1587); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_abort on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (likely(varonce1588!=NULL)) {
var1589 = varonce1588;
} else {
var1590 = "self";
var1592 = (val*)(4l<<2|1);
var1593 = (val*)(4l<<2|1);
var1594 = (val*)((long)(0)<<2|3);
var1595 = (val*)((long)(0)<<2|3);
var1591 = core__flat___CString___to_s_unsafe(var1590, var1592, var1593, var1594, var1595);
var1589 = var1591;
varonce1588 = var1589;
}
{
var1596 = nitc___nitc__AbstractCompilerVisitor___new_named_var(var_v, var_mtype, var1589);
}
var_res1597 = var1596;
{
{ /* Inline abstract_compiler$RuntimeVariable$is_exact= (var_res1597,1) on <var_res1597:RuntimeVariable> */
var_res1597->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___is_exact].s = 1; /* _is_exact on <var_res1597:RuntimeVariable> */
RET_LABEL1598:(void)0;
}
}
{
{ /* Inline separate_compiler$SeparateCompiler$attr_tables (self) on <self:SeparateErasureCompiler> */
var1601 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___attr_tables].val; /* _attr_tables on <self:SeparateErasureCompiler> */
if (unlikely(var1601 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _attr_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1074);
fatal_exit(1);
}
var1599 = var1601;
RET_LABEL1600:(void)0;
}
}
{
var1602 = ((val*(*)(val* self, val* p0))((((long)var1599&3)?class_info[((long)var1599&3)]:var1599->class)->vft[COLOR_core__abstract_collection__MapRead__get_or_null]))(var1599, var_mclass); /* get_or_null on <var1599:Map[MClass, Array[nullable MProperty]]>*/
}
var_attrs = var1602;
if (var_attrs == NULL) {
var1603 = 1; /* is null */
} else {
var1603 = 0; /* arg is null but recv is not */
}
if (0) {
var1604 = core___core__Array___core__kernel__Object___61d_61d(var_attrs, ((val*)NULL));
var1603 = var1604;
}
if (var1603){
if (unlikely(varonce1605==NULL)) {
var1606 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce1607!=NULL)) {
var1608 = varonce1607;
} else {
var1609 = " = nit_alloc(sizeof(struct instance));";
var1611 = (val*)(38l<<2|1);
var1612 = (val*)(38l<<2|1);
var1613 = (val*)((long)(0)<<2|3);
var1614 = (val*)((long)(0)<<2|3);
var1610 = core__flat___CString___to_s_unsafe(var1609, var1611, var1612, var1613, var1614);
var1608 = var1610;
varonce1607 = var1608;
}
((struct instance_core__NativeArray*)var1606)->values[1]=var1608;
} else {
var1606 = varonce1605;
varonce1605 = NULL;
}
{
var1615 = ((val*(*)(val* self))(var_res1597->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res1597); /* to_s on <var_res1597:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var1606)->values[0]=var1615;
{
var1616 = ((val*(*)(val* self))(var1606->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1606); /* native_to_s on <var1606:NativeArray[String]>*/
}
varonce1605 = var1606;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1616); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (unlikely(varonce1617==NULL)) {
var1618 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce1619!=NULL)) {
var1620 = varonce1619;
} else {
var1621 = " = nit_alloc(sizeof(struct instance) + ";
var1623 = (val*)(39l<<2|1);
var1624 = (val*)(39l<<2|1);
var1625 = (val*)((long)(0)<<2|3);
var1626 = (val*)((long)(0)<<2|3);
var1622 = core__flat___CString___to_s_unsafe(var1621, var1623, var1624, var1625, var1626);
var1620 = var1622;
varonce1619 = var1620;
}
((struct instance_core__NativeArray*)var1618)->values[1]=var1620;
if (likely(varonce1627!=NULL)) {
var1628 = varonce1627;
} else {
var1629 = "*sizeof(nitattribute_t));";
var1631 = (val*)(25l<<2|1);
var1632 = (val*)(25l<<2|1);
var1633 = (val*)((long)(0)<<2|3);
var1634 = (val*)((long)(0)<<2|3);
var1630 = core__flat___CString___to_s_unsafe(var1629, var1631, var1632, var1633, var1634);
var1628 = var1630;
varonce1627 = var1628;
}
((struct instance_core__NativeArray*)var1618)->values[3]=var1628;
} else {
var1618 = varonce1617;
varonce1617 = NULL;
}
{
var1635 = ((val*(*)(val* self))(var_res1597->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res1597); /* to_s on <var_res1597:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var1618)->values[0]=var1635;
{
{ /* Inline array$AbstractArrayRead$length (var_attrs) on <var_attrs:nullable Array[nullable MProperty](Array[nullable MProperty])> */
var1638 = var_attrs->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_attrs:nullable Array[nullable MProperty](Array[nullable MProperty])> */
var1636 = var1638;
RET_LABEL1637:(void)0;
}
}
var1639 = core__flat___Int___core__abstract_text__Object__to_s(var1636);
((struct instance_core__NativeArray*)var1618)->values[2]=var1639;
{
var1640 = ((val*(*)(val* self))(var1618->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1618); /* native_to_s on <var1618:NativeArray[String]>*/
}
varonce1617 = var1618;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1640); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
}
if (unlikely(varonce1641==NULL)) {
var1642 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce1643!=NULL)) {
var1644 = varonce1643;
} else {
var1645 = "class_";
var1647 = (val*)(6l<<2|1);
var1648 = (val*)(6l<<2|1);
var1649 = (val*)((long)(0)<<2|3);
var1650 = (val*)((long)(0)<<2|3);
var1646 = core__flat___CString___to_s_unsafe(var1645, var1647, var1648, var1649, var1650);
var1644 = var1646;
varonce1643 = var1644;
}
((struct instance_core__NativeArray*)var1642)->values[0]=var1644;
} else {
var1642 = varonce1641;
varonce1641 = NULL;
}
((struct instance_core__NativeArray*)var1642)->values[1]=var_c_name;
{
var1651 = ((val*(*)(val* self))(var1642->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1642); /* native_to_s on <var1642:NativeArray[String]>*/
}
varonce1641 = var1642;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v, var1651); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce1652==NULL)) {
var1653 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce1654!=NULL)) {
var1655 = varonce1654;
} else {
var1656 = "->class = &class_";
var1658 = (val*)(17l<<2|1);
var1659 = (val*)(17l<<2|1);
var1660 = (val*)((long)(0)<<2|3);
var1661 = (val*)((long)(0)<<2|3);
var1657 = core__flat___CString___to_s_unsafe(var1656, var1658, var1659, var1660, var1661);
var1655 = var1657;
varonce1654 = var1655;
}
((struct instance_core__NativeArray*)var1653)->values[1]=var1655;
if (likely(varonce1662!=NULL)) {
var1663 = varonce1662;
} else {
var1664 = ";";
var1666 = (val*)(1l<<2|1);
var1667 = (val*)(1l<<2|1);
var1668 = (val*)((long)(0)<<2|3);
var1669 = (val*)((long)(0)<<2|3);
var1665 = core__flat___CString___to_s_unsafe(var1664, var1666, var1667, var1668, var1669);
var1663 = var1665;
varonce1662 = var1663;
}
((struct instance_core__NativeArray*)var1653)->values[3]=var1663;
} else {
var1653 = varonce1652;
varonce1652 = NULL;
}
{
var1670 = ((val*(*)(val* self))(var_res1597->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res1597); /* to_s on <var_res1597:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var1653)->values[0]=var1670;
((struct instance_core__NativeArray*)var1653)->values[2]=var_c_name;
{
var1671 = ((val*(*)(val* self))(var1653->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1653); /* native_to_s on <var1653:NativeArray[String]>*/
}
varonce1652 = var1653;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1671); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
if (var_attrs == NULL) {
var1672 = 0; /* is null */
} else {
var1672 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_attrs,((val*)NULL)) on <var_attrs:nullable Array[nullable MProperty]> */
var_other = ((val*)NULL);
{
var1675 = ((short int(*)(val* self, val* p0))(var_attrs->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_attrs, var_other); /* == on <var_attrs:nullable Array[nullable MProperty](Array[nullable MProperty])>*/
}
var1676 = !var1675;
var1673 = var1676;
goto RET_LABEL1674;
RET_LABEL1674:(void)0;
}
var1672 = var1673;
}
if (var1672){
{
nitc___nitc__AbstractCompiler___generate_init_attr(self, var_v, var_res1597, var_mtype); /* Direct call abstract_compiler$AbstractCompiler$generate_init_attr on <self:SeparateErasureCompiler>*/
}
{
nitc___nitc__AbstractCompilerVisitor___set_finalizer(var_v, var_res1597); /* Direct call abstract_compiler$AbstractCompilerVisitor$set_finalizer on <var_v:SeparateCompilerVisitor>*/
}
} else {
}
if (unlikely(varonce1677==NULL)) {
var1678 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce1679!=NULL)) {
var1680 = varonce1679;
} else {
var1681 = "return ";
var1683 = (val*)(7l<<2|1);
var1684 = (val*)(7l<<2|1);
var1685 = (val*)((long)(0)<<2|3);
var1686 = (val*)((long)(0)<<2|3);
var1682 = core__flat___CString___to_s_unsafe(var1681, var1683, var1684, var1685, var1686);
var1680 = var1682;
varonce1679 = var1680;
}
((struct instance_core__NativeArray*)var1678)->values[0]=var1680;
if (likely(varonce1687!=NULL)) {
var1688 = varonce1687;
} else {
var1689 = ";";
var1691 = (val*)(1l<<2|1);
var1692 = (val*)(1l<<2|1);
var1693 = (val*)((long)(0)<<2|3);
var1694 = (val*)((long)(0)<<2|3);
var1690 = core__flat___CString___to_s_unsafe(var1689, var1691, var1692, var1693, var1694);
var1688 = var1690;
varonce1687 = var1688;
}
((struct instance_core__NativeArray*)var1678)->values[2]=var1688;
} else {
var1678 = varonce1677;
varonce1677 = NULL;
}
{
var1695 = ((val*(*)(val* self))(var_res1597->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res1597); /* to_s on <var_res1597:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var1678)->values[1]=var1695;
{
var1696 = ((val*(*)(val* self))(var1678->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1678); /* native_to_s on <var1678:NativeArray[String]>*/
}
varonce1677 = var1678;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1696); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
}
if (likely(varonce1697!=NULL)) {
var1698 = varonce1697;
} else {
var1699 = "}";
var1701 = (val*)(1l<<2|1);
var1702 = (val*)(1l<<2|1);
var1703 = (val*)((long)(0)<<2|3);
var1704 = (val*)((long)(0)<<2|3);
var1700 = core__flat___CString___to_s_unsafe(var1699, var1701, var1702, var1703, var1704);
var1698 = var1700;
varonce1697 = var1698;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1698); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
RET_LABEL:;
}
/* method separate_erasure_compiler$SeparateErasureCompiler$build_class_vts_table for (self: SeparateErasureCompiler, MClass): Bool */
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
char* var9 /* : CString */;
val* var10 /* : String */;
val* var11 /* : nullable Int */;
val* var12 /* : nullable Int */;
val* var13 /* : nullable Bool */;
val* var14 /* : nullable Bool */;
val* var15 /* : String */;
val* var16 /* : String */;
val* var18 /* : NativeArray[String] */;
static val* varonce17;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : CString */;
val* var22 /* : String */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Int */;
val* var25 /* : nullable Bool */;
val* var26 /* : nullable Bool */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : CString */;
val* var30 /* : String */;
val* var31 /* : nullable Int */;
val* var32 /* : nullable Int */;
val* var33 /* : nullable Bool */;
val* var34 /* : nullable Bool */;
val* var35 /* : String */;
val* var36 /* : String */;
val* var37 /* : SeparateCompilerVisitor */;
val* var_v /* var v: SeparateCompilerVisitor */;
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
val* var57 /* : String */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : CString */;
val* var61 /* : String */;
val* var62 /* : nullable Int */;
val* var63 /* : nullable Int */;
val* var64 /* : nullable Bool */;
val* var65 /* : nullable Bool */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : CString */;
val* var69 /* : String */;
val* var70 /* : nullable Int */;
val* var71 /* : nullable Int */;
val* var72 /* : nullable Bool */;
val* var73 /* : nullable Bool */;
val* var74 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var76 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var77 /* : nullable Object */;
val* var_ /* var : Array[nullable MPropDef] */;
val* var78 /* : IndexedIterator[nullable Object] */;
val* var_79 /* var : IndexedIterator[nullable MPropDef] */;
short int var80 /* : Bool */;
val* var81 /* : nullable Object */;
val* var_vt /* var vt: nullable MPropDef */;
short int var82 /* : Bool */;
short int var83 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : CString */;
val* var91 /* : String */;
val* var92 /* : nullable Int */;
val* var93 /* : nullable Int */;
val* var94 /* : nullable Bool */;
val* var95 /* : nullable Bool */;
long var_is_null /* var is_null: Int */;
val* var96 /* : MClassDef */;
val* var98 /* : MClassDef */;
val* var99 /* : MClassType */;
val* var101 /* : MClassType */;
short int var102 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var103 /* : nullable MType */;
val* var105 /* : nullable MType */;
val* var106 /* : MType */;
val* var_bound /* var bound: MType */;
short int var107 /* : Bool */;
int cltype108;
int idtype109;
val* var110 /* : MClassDef */;
val* var112 /* : MClassDef */;
val* var113 /* : MClassType */;
val* var115 /* : MClassType */;
val* var116 /* : MType */;
val* var118 /* : MType */;
val* var119 /* : MType */;
short int var121 /* : Bool */;
int cltype122;
int idtype123;
const char* var_class_name124;
val* var125 /* : MClass */;
val* var127 /* : MClass */;
val* var_vtclass /* var vtclass: MClass */;
val* var129 /* : NativeArray[String] */;
static val* varonce128;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : CString */;
val* var133 /* : String */;
val* var134 /* : nullable Int */;
val* var135 /* : nullable Int */;
val* var136 /* : nullable Bool */;
val* var137 /* : nullable Bool */;
val* var138 /* : String */;
val* var139 /* : String */;
val* var141 /* : NativeArray[String] */;
static val* varonce140;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : CString */;
val* var145 /* : String */;
val* var146 /* : nullable Int */;
val* var147 /* : nullable Int */;
val* var148 /* : nullable Bool */;
val* var149 /* : nullable Bool */;
static val* varonce150;
val* var151 /* : String */;
char* var152 /* : CString */;
val* var153 /* : String */;
val* var154 /* : nullable Int */;
val* var155 /* : nullable Int */;
val* var156 /* : nullable Bool */;
val* var157 /* : nullable Bool */;
static val* varonce158;
val* var159 /* : String */;
char* var160 /* : CString */;
val* var161 /* : String */;
val* var162 /* : nullable Int */;
val* var163 /* : nullable Int */;
val* var164 /* : nullable Bool */;
val* var165 /* : nullable Bool */;
static val* varonce166;
val* var167 /* : String */;
char* var168 /* : CString */;
val* var169 /* : String */;
val* var170 /* : nullable Int */;
val* var171 /* : nullable Int */;
val* var172 /* : nullable Bool */;
val* var173 /* : nullable Bool */;
val* var174 /* : String */;
val* var175 /* : String */;
val* var176 /* : String */;
val* var177 /* : String */;
static val* varonce178;
val* var179 /* : String */;
char* var180 /* : CString */;
val* var181 /* : String */;
val* var182 /* : nullable Int */;
val* var183 /* : nullable Int */;
val* var184 /* : nullable Bool */;
val* var185 /* : nullable Bool */;
static val* varonce186;
val* var187 /* : String */;
char* var188 /* : CString */;
val* var189 /* : String */;
val* var190 /* : nullable Int */;
val* var191 /* : nullable Int */;
val* var192 /* : nullable Bool */;
val* var193 /* : nullable Bool */;
var_mclass = p0;
{
{ /* Inline separate_erasure_compiler$SeparateErasureCompiler$vt_tables (self) on <self:SeparateErasureCompiler> */
var3 = self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___vt_tables].val; /* _vt_tables on <self:SeparateErasureCompiler> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
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
var6 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "vts_table_";
var11 = (val*)(10l<<2|1);
var12 = (val*)(10l<<2|1);
var13 = (val*)((long)(0)<<2|3);
var14 = (val*)((long)(0)<<2|3);
var10 = core__flat___CString___to_s_unsafe(var9, var11, var12, var13, var14);
var8 = var10;
varonce7 = var8;
}
((struct instance_core__NativeArray*)var6)->values[0]=var8;
} else {
var6 = varonce;
varonce = NULL;
}
{
var15 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var_mclass);
}
((struct instance_core__NativeArray*)var6)->values[1]=var15;
{
var16 = ((val*(*)(val* self))(var6->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce = var6;
if (unlikely(varonce17==NULL)) {
var18 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "extern const struct vts_table vts_table_";
var23 = (val*)(40l<<2|1);
var24 = (val*)(40l<<2|1);
var25 = (val*)((long)(0)<<2|3);
var26 = (val*)((long)(0)<<2|3);
var22 = core__flat___CString___to_s_unsafe(var21, var23, var24, var25, var26);
var20 = var22;
varonce19 = var20;
}
((struct instance_core__NativeArray*)var18)->values[0]=var20;
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = ";";
var31 = (val*)(1l<<2|1);
var32 = (val*)(1l<<2|1);
var33 = (val*)((long)(0)<<2|3);
var34 = (val*)((long)(0)<<2|3);
var30 = core__flat___CString___to_s_unsafe(var29, var31, var32, var33, var34);
var28 = var30;
varonce27 = var28;
}
((struct instance_core__NativeArray*)var18)->values[2]=var28;
} else {
var18 = varonce17;
varonce17 = NULL;
}
{
var35 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var_mclass);
}
((struct instance_core__NativeArray*)var18)->values[1]=var35;
{
var36 = ((val*(*)(val* self))(var18->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var18); /* native_to_s on <var18:NativeArray[String]>*/
}
varonce17 = var18;
{
nitc___nitc__AbstractCompiler___provide_declaration(self, var16, var36); /* Direct call abstract_compiler$AbstractCompiler$provide_declaration on <self:SeparateErasureCompiler>*/
}
{
var37 = nitc___nitc__SeparateErasureCompiler___nitc__abstract_compiler__AbstractCompiler__new_visitor(self);
}
var_v = var37;
if (unlikely(varonce38==NULL)) {
var39 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "const struct vts_table vts_table_";
var44 = (val*)(33l<<2|1);
var45 = (val*)(33l<<2|1);
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
var50 = " = {";
var52 = (val*)(4l<<2|1);
var53 = (val*)(4l<<2|1);
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
{
var56 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var_mclass);
}
((struct instance_core__NativeArray*)var39)->values[1]=var56;
{
var57 = ((val*(*)(val* self))(var39->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var39); /* native_to_s on <var39:NativeArray[String]>*/
}
varonce38 = var39;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var57); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "0, /* dummy */";
var62 = (val*)(14l<<2|1);
var63 = (val*)(14l<<2|1);
var64 = (val*)((long)(0)<<2|3);
var65 = (val*)((long)(0)<<2|3);
var61 = core__flat___CString___to_s_unsafe(var60, var62, var63, var64, var65);
var59 = var61;
varonce58 = var59;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var59); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = "{";
var70 = (val*)(1l<<2|1);
var71 = (val*)(1l<<2|1);
var72 = (val*)((long)(0)<<2|3);
var73 = (val*)((long)(0)<<2|3);
var69 = core__flat___CString___to_s_unsafe(var68, var70, var71, var72, var73);
var67 = var69;
varonce66 = var67;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var67); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
{ /* Inline separate_erasure_compiler$SeparateErasureCompiler$vt_tables (self) on <self:SeparateErasureCompiler> */
var76 = self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___vt_tables].val; /* _vt_tables on <self:SeparateErasureCompiler> */
if (unlikely(var76 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vt_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 428);
fatal_exit(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
var77 = ((val*(*)(val* self, val* p0))((((long)var74&3)?class_info[((long)var74&3)]:var74->class)->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var74, var_mclass); /* [] on <var74:Map[MClass, Array[nullable MPropDef]]>*/
}
var_ = var77;
{
var78 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_79 = var78;
for(;;) {
{
var80 = ((short int(*)(val* self))((((long)var_79&3)?class_info[((long)var_79&3)]:var_79->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_79); /* is_ok on <var_79:IndexedIterator[nullable MPropDef]>*/
}
if (var80){
} else {
goto BREAK_label;
}
{
var81 = ((val*(*)(val* self))((((long)var_79&3)?class_info[((long)var_79&3)]:var_79->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_79); /* item on <var_79:IndexedIterator[nullable MPropDef]>*/
}
var_vt = var81;
if (var_vt == NULL) {
var82 = 1; /* is null */
} else {
var82 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_vt,((val*)NULL)) on <var_vt:nullable MPropDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_vt,var_other) on <var_vt:nullable MPropDef(MPropDef)> */
var87 = var_vt == var_other;
var85 = var87;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
var83 = var85;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
var82 = var83;
}
if (var82){
if (likely(varonce88!=NULL)) {
var89 = varonce88;
} else {
var90 = "{-1, NULL}, /* empty */";
var92 = (val*)(23l<<2|1);
var93 = (val*)(23l<<2|1);
var94 = (val*)((long)(0)<<2|3);
var95 = (val*)((long)(0)<<2|3);
var91 = core__flat___CString___to_s_unsafe(var90, var92, var93, var94, var95);
var89 = var91;
varonce88 = var89;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var89); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
var_is_null = 0l;
{
{ /* Inline model$MClass$intro (var_mclass) on <var_mclass:MClass> */
var98 = var_mclass->attrs[COLOR_nitc__model__MClass___intro].val; /* _intro on <var_mclass:MClass> */
if (unlikely(var98 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 496);
fatal_exit(1);
}
var96 = var98;
RET_LABEL97:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var96) on <var96:MClassDef> */
var101 = var96->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var96:MClassDef> */
if (unlikely(var101 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var99 = var101;
RET_LABEL100:(void)0;
}
}
/* <var_vt:nullable MPropDef(MPropDef)> isa MVirtualTypeDef */
cltype = type_nitc__MVirtualTypeDef.color;
idtype = type_nitc__MVirtualTypeDef.id;
if(cltype >= var_vt->type->table_size) {
var102 = 0;
} else {
var102 = var_vt->type->type_table[cltype] == idtype;
}
if (unlikely(!var102)) {
var_class_name = var_vt == NULL ? "null" : var_vt->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MVirtualTypeDef", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 389);
fatal_exit(1);
}
{
{ /* Inline model$MVirtualTypeDef$bound (var_vt) on <var_vt:nullable MPropDef(MVirtualTypeDef)> */
var105 = var_vt->attrs[COLOR_nitc__model__MVirtualTypeDef___bound].val; /* _bound on <var_vt:nullable MPropDef(MVirtualTypeDef)> */
var103 = var105;
RET_LABEL104:(void)0;
}
}
{
var106 = nitc___nitc__SeparateErasureCompiler___retrieve_vt_bound(self, var99, var103);
}
var_bound = var106;
for(;;) {
/* <var_bound:MType> isa MNullableType */
cltype108 = type_nitc__MNullableType.color;
idtype109 = type_nitc__MNullableType.id;
if(cltype108 >= var_bound->type->table_size) {
var107 = 0;
} else {
var107 = var_bound->type->type_table[cltype108] == idtype109;
}
if (var107){
{
{ /* Inline model$MClass$intro (var_mclass) on <var_mclass:MClass> */
var112 = var_mclass->attrs[COLOR_nitc__model__MClass___intro].val; /* _intro on <var_mclass:MClass> */
if (unlikely(var112 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 496);
fatal_exit(1);
}
var110 = var112;
RET_LABEL111:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var110) on <var110:MClassDef> */
var115 = var110->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var110:MClassDef> */
if (unlikely(var115 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var113 = var115;
RET_LABEL114:(void)0;
}
}
{
{ /* Inline model$MProxyType$mtype (var_bound) on <var_bound:MType(MNullableType)> */
var118 = var_bound->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <var_bound:MType(MNullableType)> */
if (unlikely(var118 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1689);
fatal_exit(1);
}
var116 = var118;
RET_LABEL117:(void)0;
}
}
{
var119 = nitc___nitc__SeparateErasureCompiler___retrieve_vt_bound(self, var113, var116);
}
var_bound = var119;
var_is_null = 1l;
} else {
goto BREAK_label120;
}
}
BREAK_label120: (void)0;
/* <var_bound:MType> isa MClassType */
cltype122 = type_nitc__MClassType.color;
idtype123 = type_nitc__MClassType.id;
if(cltype122 >= var_bound->type->table_size) {
var121 = 0;
} else {
var121 = var_bound->type->type_table[cltype122] == idtype123;
}
if (unlikely(!var121)) {
var_class_name124 = var_bound == NULL ? "null" : var_bound->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name124);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 394);
fatal_exit(1);
}
{
{ /* Inline model$MClassType$mclass (var_bound) on <var_bound:MType(MClassType)> */
var127 = var_bound->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_bound:MType(MClassType)> */
if (unlikely(var127 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var125 = var127;
RET_LABEL126:(void)0;
}
}
var_vtclass = var125;
if (unlikely(varonce128==NULL)) {
var129 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce130!=NULL)) {
var131 = varonce130;
} else {
var132 = "class_";
var134 = (val*)(6l<<2|1);
var135 = (val*)(6l<<2|1);
var136 = (val*)((long)(0)<<2|3);
var137 = (val*)((long)(0)<<2|3);
var133 = core__flat___CString___to_s_unsafe(var132, var134, var135, var136, var137);
var131 = var133;
varonce130 = var131;
}
((struct instance_core__NativeArray*)var129)->values[0]=var131;
} else {
var129 = varonce128;
varonce128 = NULL;
}
{
var138 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var_vtclass);
}
((struct instance_core__NativeArray*)var129)->values[1]=var138;
{
var139 = ((val*(*)(val* self))(var129->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var129); /* native_to_s on <var129:NativeArray[String]>*/
}
varonce128 = var129;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v, var139); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce140==NULL)) {
var141 = NEW_core__NativeArray((int)7l, &type_core__NativeArray__core__String);
if (likely(varonce142!=NULL)) {
var143 = varonce142;
} else {
var144 = "{";
var146 = (val*)(1l<<2|1);
var147 = (val*)(1l<<2|1);
var148 = (val*)((long)(0)<<2|3);
var149 = (val*)((long)(0)<<2|3);
var145 = core__flat___CString___to_s_unsafe(var144, var146, var147, var148, var149);
var143 = var145;
varonce142 = var143;
}
((struct instance_core__NativeArray*)var141)->values[0]=var143;
if (likely(varonce150!=NULL)) {
var151 = varonce150;
} else {
var152 = ", &class_";
var154 = (val*)(9l<<2|1);
var155 = (val*)(9l<<2|1);
var156 = (val*)((long)(0)<<2|3);
var157 = (val*)((long)(0)<<2|3);
var153 = core__flat___CString___to_s_unsafe(var152, var154, var155, var156, var157);
var151 = var153;
varonce150 = var151;
}
((struct instance_core__NativeArray*)var141)->values[2]=var151;
if (likely(varonce158!=NULL)) {
var159 = varonce158;
} else {
var160 = "}, /* ";
var162 = (val*)(6l<<2|1);
var163 = (val*)(6l<<2|1);
var164 = (val*)((long)(0)<<2|3);
var165 = (val*)((long)(0)<<2|3);
var161 = core__flat___CString___to_s_unsafe(var160, var162, var163, var164, var165);
var159 = var161;
varonce158 = var159;
}
((struct instance_core__NativeArray*)var141)->values[4]=var159;
if (likely(varonce166!=NULL)) {
var167 = varonce166;
} else {
var168 = " */";
var170 = (val*)(3l<<2|1);
var171 = (val*)(3l<<2|1);
var172 = (val*)((long)(0)<<2|3);
var173 = (val*)((long)(0)<<2|3);
var169 = core__flat___CString___to_s_unsafe(var168, var170, var171, var172, var173);
var167 = var169;
varonce166 = var167;
}
((struct instance_core__NativeArray*)var141)->values[6]=var167;
} else {
var141 = varonce140;
varonce140 = NULL;
}
var174 = core__flat___Int___core__abstract_text__Object__to_s(var_is_null);
((struct instance_core__NativeArray*)var141)->values[1]=var174;
{
var175 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var_vtclass);
}
((struct instance_core__NativeArray*)var141)->values[3]=var175;
{
var176 = ((val*(*)(val* self))(var_vt->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_vt); /* to_s on <var_vt:nullable MPropDef(MPropDef)>*/
}
((struct instance_core__NativeArray*)var141)->values[5]=var176;
{
var177 = ((val*(*)(val* self))(var141->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var141); /* native_to_s on <var141:NativeArray[String]>*/
}
varonce140 = var141;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var177); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
{
((void(*)(val* self))((((long)var_79&3)?class_info[((long)var_79&3)]:var_79->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_79); /* next on <var_79:IndexedIterator[nullable MPropDef]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_79&3)?class_info[((long)var_79&3)]:var_79->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_79); /* finish on <var_79:IndexedIterator[nullable MPropDef]>*/
}
if (likely(varonce178!=NULL)) {
var179 = varonce178;
} else {
var180 = "},";
var182 = (val*)(2l<<2|1);
var183 = (val*)(2l<<2|1);
var184 = (val*)((long)(0)<<2|3);
var185 = (val*)((long)(0)<<2|3);
var181 = core__flat___CString___to_s_unsafe(var180, var182, var183, var184, var185);
var179 = var181;
varonce178 = var179;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var179); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce186!=NULL)) {
var187 = varonce186;
} else {
var188 = "};";
var190 = (val*)(2l<<2|1);
var191 = (val*)(2l<<2|1);
var192 = (val*)((long)(0)<<2|3);
var193 = (val*)((long)(0)<<2|3);
var189 = core__flat___CString___to_s_unsafe(var188, var190, var191, var192, var193);
var187 = var189;
varonce186 = var187;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var187); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler$SeparateErasureCompiler$retrieve_vt_bound for (self: SeparateErasureCompiler, MClassType, nullable MType): MType */
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
char* var9 /* : CString */;
val* var10 /* : String */;
val* var11 /* : nullable Int */;
val* var12 /* : nullable Int */;
val* var13 /* : nullable Bool */;
val* var14 /* : nullable Bool */;
short int var15 /* : Bool */;
int cltype;
int idtype;
val* var16 /* : MModule */;
val* var18 /* : MModule */;
val* var19 /* : MType */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var23 /* : MModule */;
val* var25 /* : MModule */;
val* var26 /* : MType */;
var_anchor = p0;
var_mtype = p1;
if (var_mtype == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
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
var11 = (val*)(46l<<2|1);
var12 = (val*)(46l<<2|1);
var13 = (val*)((long)(0)<<2|3);
var14 = (val*)((long)(0)<<2|3);
var10 = core__flat___CString___to_s_unsafe(var9, var11, var12, var13, var14);
var8 = var10;
varonce = var8;
}
{
core__file___Sys___print(var7, var8); /* Direct call file$Sys$print on <var7:Sys>*/
}
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
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
var15 = 0;
} else {
var15 = var_mtype->type->type_table[cltype] == idtype;
}
if (var15){
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (self) on <self:SeparateErasureCompiler> */
var18 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = nitc___nitc__MType___anchor_to(var_mtype, var16, var_anchor);
}
var = var19;
goto RET_LABEL;
} else {
/* <var_mtype:nullable MType(MType)> isa MParameterType */
cltype21 = type_nitc__MParameterType.color;
idtype22 = type_nitc__MParameterType.id;
if(cltype21 >= var_mtype->type->table_size) {
var20 = 0;
} else {
var20 = var_mtype->type->type_table[cltype21] == idtype22;
}
if (var20){
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (self) on <self:SeparateErasureCompiler> */
var25 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = nitc___nitc__MType___anchor_to(var_mtype, var23, var_anchor);
}
var = var26;
goto RET_LABEL;
} else {
var = var_mtype;
goto RET_LABEL;
}
}
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler$SeparateErasureCompiler$compile_types for (self: SeparateErasureCompiler) */
void nitc___nitc__SeparateErasureCompiler___nitc__separate_compiler__SeparateCompiler__compile_types(val* self) {
val* var /* : Map[MVirtualTypeProp, Int] */;
val* var2 /* : Map[MVirtualTypeProp, Int] */;
{
{ /* Inline separate_erasure_compiler$SeparateErasureCompiler$vt_colors (self) on <self:SeparateErasureCompiler> */
var2 = self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___vt_colors].val; /* _vt_colors on <self:SeparateErasureCompiler> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vt_colors");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 86);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc___nitc__SeparateCompiler___compile_color_consts(self, var); /* Direct call separate_compiler$SeparateCompiler$compile_color_consts on <self:SeparateErasureCompiler>*/
}
RET_LABEL:;
}
/* method separate_erasure_compiler$SeparateErasureCompiler$new_visitor for (self: SeparateErasureCompiler): SeparateCompilerVisitor */
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
/* method separate_erasure_compiler$SeparateErasureCompiler$class_tables for (self: SeparateErasureCompiler): Map[MClass, Array[nullable MClass]] */
val* nitc___nitc__SeparateErasureCompiler___class_tables(val* self) {
val* var /* : Map[MClass, Array[nullable MClass]] */;
val* var1 /* : Map[MClass, Array[nullable MClass]] */;
var1 = self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___class_tables].val; /* _class_tables on <self:SeparateErasureCompiler> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _class_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 427);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler$SeparateErasureCompiler$class_tables= for (self: SeparateErasureCompiler, Map[MClass, Array[nullable MClass]]) */
void nitc___nitc__SeparateErasureCompiler___class_tables_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___class_tables].val = p0; /* _class_tables on <self:SeparateErasureCompiler> */
RET_LABEL:;
}
/* method separate_erasure_compiler$SeparateErasureCompiler$vt_tables for (self: SeparateErasureCompiler): Map[MClass, Array[nullable MPropDef]] */
val* nitc___nitc__SeparateErasureCompiler___vt_tables(val* self) {
val* var /* : Map[MClass, Array[nullable MPropDef]] */;
val* var1 /* : Map[MClass, Array[nullable MPropDef]] */;
var1 = self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___vt_tables].val; /* _vt_tables on <self:SeparateErasureCompiler> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vt_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 428);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler$SeparateErasureCompiler$vt_tables= for (self: SeparateErasureCompiler, Map[MClass, Array[nullable MPropDef]]) */
void nitc___nitc__SeparateErasureCompiler___vt_tables_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___vt_tables].val = p0; /* _vt_tables on <self:SeparateErasureCompiler> */
RET_LABEL:;
}
