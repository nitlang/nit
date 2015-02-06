#include "nit__separate_erasure_compiler.sep.0.h"
/* method separate_erasure_compiler#ToolContext#opt_erasure for (self: ToolContext): OptionBool */
val* nit__separate_erasure_compiler___ToolContext___opt_erasure(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__separate_erasure_compiler__ToolContext___opt_erasure].val; /* _opt_erasure on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_erasure");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 22);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#ToolContext#opt_rta for (self: ToolContext): OptionBool */
val* nit__separate_erasure_compiler___ToolContext___opt_rta(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__separate_erasure_compiler__ToolContext___opt_rta].val; /* _opt_rta on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_rta");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 24);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#ToolContext#opt_no_check_erasure_cast for (self: ToolContext): OptionBool */
val* nit__separate_erasure_compiler___ToolContext___opt_no_check_erasure_cast(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__separate_erasure_compiler__ToolContext___opt_no_check_erasure_cast].val; /* _opt_no_check_erasure_cast on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_erasure_cast");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 26);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#ToolContext#init for (self: ToolContext) */
void nit__separate_erasure_compiler___ToolContext___standard__kernel__Object__init(val* self) {
val* var /* : OptionContext */;
val* var2 /* : OptionContext */;
val* var3 /* : OptionBool */;
val* var5 /* : OptionBool */;
val* var6 /* : OptionBool */;
val* var8 /* : OptionBool */;
val* var9 /* : OptionBool */;
val* var11 /* : OptionBool */;
val* var12 /* : Array[Option] */;
long var13 /* : Int */;
val* var14 /* : NativeArray[Option] */;
{
((void (*)(val* self))(self->class->vft[COLOR_nit__separate_erasure_compiler___ToolContext___standard__kernel__Object__init]))(self) /* init on <self:ToolContext>*/;
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
{ /* Inline separate_erasure_compiler#ToolContext#opt_erasure (self) on <self:ToolContext> */
var5 = self->attrs[COLOR_nit__separate_erasure_compiler__ToolContext___opt_erasure].val; /* _opt_erasure on <self:ToolContext> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_erasure");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 22);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline separate_erasure_compiler#ToolContext#opt_no_check_erasure_cast (self) on <self:ToolContext> */
var8 = self->attrs[COLOR_nit__separate_erasure_compiler__ToolContext___opt_no_check_erasure_cast].val; /* _opt_no_check_erasure_cast on <self:ToolContext> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_erasure_cast");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 26);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline separate_erasure_compiler#ToolContext#opt_rta (self) on <self:ToolContext> */
var11 = self->attrs[COLOR_nit__separate_erasure_compiler__ToolContext___opt_rta].val; /* _opt_rta on <self:ToolContext> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_rta");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 24);
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
/* method separate_erasure_compiler#ToolContext#process_options for (self: ToolContext, Sequence[String]) */
void nit__separate_erasure_compiler___ToolContext___process_options(val* self, val* p0) {
val* var_args /* var args: Sequence[String] */;
val* var /* : OptionBool */;
val* var2 /* : OptionBool */;
val* var3 /* : nullable Object */;
val* var5 /* : nullable Object */;
short int var6 /* : Bool */;
val* var7 /* : OptionBool */;
val* var9 /* : OptionBool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var13 /* : nullable Object */;
var_args = p0;
{
((void (*)(val* self, val* p0))(self->class->vft[COLOR_nit__separate_erasure_compiler___ToolContext___process_options]))(self, p0) /* process_options on <self:ToolContext>*/;
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_all (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_all].val; /* _opt_no_check_all on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_all");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 57);
show_backtrace(1);
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
var6 = ((struct instance_standard__Bool*)var3)->value; /* autounbox from nullable Object to Bool */;
if (var6){
{
{ /* Inline separate_erasure_compiler#ToolContext#opt_no_check_erasure_cast (self) on <self:ToolContext> */
var9 = self->attrs[COLOR_nit__separate_erasure_compiler__ToolContext___opt_no_check_erasure_cast].val; /* _opt_no_check_erasure_cast on <self:ToolContext> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_erasure_cast");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 26);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var10 = 1;
{
{ /* Inline opts#Option#value= (var7,var10) on <var7:OptionBool> */
/* Covariant cast for argument 0 (value) <var10:Bool> isa VALUE */
/* <var10:Bool> isa VALUE */
type_struct = var7->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (&type_standard__Bool)->table_size) {
var12 = 0;
} else {
var12 = (&type_standard__Bool)->type_table[cltype] == idtype;
}
if (unlikely(!var12)) {
var_class_name = type_standard__Bool.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 40);
show_backtrace(1);
}
var13 = BOX_standard__Bool(var10); /* autobox from Bool to nullable Object */
var7->attrs[COLOR_opts__Option___value].val = var13; /* _value on <var7:OptionBool> */
RET_LABEL11:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method separate_erasure_compiler#ErasureCompilerPhase#process_mainmodule for (self: ErasureCompilerPhase, MModule, SequenceRead[MModule]) */
void nit___nit__ErasureCompilerPhase___nit__modelbuilder__Phase__process_mainmodule(val* self, val* p0, val* p1) {
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
val* var15 /* : null */;
val* var_analysis /* var analysis: nullable Object */;
val* var16 /* : ToolContext */;
val* var18 /* : ToolContext */;
val* var19 /* : OptionBool */;
val* var21 /* : OptionBool */;
val* var22 /* : nullable Object */;
val* var24 /* : nullable Object */;
short int var25 /* : Bool */;
val* var26 /* : RapidTypeAnalysis */;
var_mainmodule = p0;
var_given_mmodules = p1;
{
{ /* Inline phase#Phase#toolcontext (self) on <self:ErasureCompilerPhase> */
var2 = self->attrs[COLOR_nit__phase__Phase___toolcontext].val; /* _toolcontext on <self:ErasureCompilerPhase> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 201);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline separate_erasure_compiler#ToolContext#opt_erasure (var) on <var:ToolContext> */
var5 = var->attrs[COLOR_nit__separate_erasure_compiler__ToolContext___opt_erasure].val; /* _opt_erasure on <var:ToolContext> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_erasure");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 22);
show_backtrace(1);
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
var9 = ((struct instance_standard__Bool*)var6)->value; /* autounbox from nullable Object to Bool */;
var10 = !var9;
if (var10){
goto RET_LABEL;
} else {
}
{
{ /* Inline phase#Phase#toolcontext (self) on <self:ErasureCompilerPhase> */
var13 = self->attrs[COLOR_nit__phase__Phase___toolcontext].val; /* _toolcontext on <self:ErasureCompilerPhase> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 201);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = nit__modelbuilder_base___ToolContext___modelbuilder(var11);
}
var_modelbuilder = var14;
var15 = NULL;
var_analysis = var15;
{
{ /* Inline phase#Phase#toolcontext (self) on <self:ErasureCompilerPhase> */
var18 = self->attrs[COLOR_nit__phase__Phase___toolcontext].val; /* _toolcontext on <self:ErasureCompilerPhase> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 201);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline separate_erasure_compiler#ToolContext#opt_rta (var16) on <var16:ToolContext> */
var21 = var16->attrs[COLOR_nit__separate_erasure_compiler__ToolContext___opt_rta].val; /* _opt_rta on <var16:ToolContext> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_rta");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 24);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline opts#Option#value (var19) on <var19:OptionBool> */
var24 = var19->attrs[COLOR_opts__Option___value].val; /* _value on <var19:OptionBool> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
var25 = ((struct instance_standard__Bool*)var22)->value; /* autounbox from nullable Object to Bool */;
if (var25){
{
var26 = nit__rapid_type_analysis___ModelBuilder___do_rapid_type_analysis(var_modelbuilder, var_mainmodule);
}
var_analysis = var26;
} else {
}
{
nit__separate_erasure_compiler___ModelBuilder___run_separate_erasure_compiler(var_modelbuilder, var_mainmodule, var_analysis); /* Direct call separate_erasure_compiler#ModelBuilder#run_separate_erasure_compiler on <var_modelbuilder:ModelBuilder>*/
}
RET_LABEL:;
}
/* method separate_erasure_compiler#ModelBuilder#run_separate_erasure_compiler for (self: ModelBuilder, MModule, nullable RapidTypeAnalysis) */
void nit__separate_erasure_compiler___ModelBuilder___run_separate_erasure_compiler(val* self, val* p0, val* p1) {
val* var_mainmodule /* var mainmodule: MModule */;
val* var_runtime_type_analysis /* var runtime_type_analysis: nullable RapidTypeAnalysis */;
long var /* : Int */;
long var2 /* : Int for extern */;
long var_time0 /* var time0: Int */;
val* var3 /* : ToolContext */;
val* var5 /* : ToolContext */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : FlatString */;
long var10 /* : Int */;
val* var11 /* : SeparateErasureCompiler */;
val* var_compiler /* var compiler: SeparateErasureCompiler */;
long var12 /* : Int */;
long var14 /* : Int for extern */;
long var_time1 /* var time1: Int */;
val* var15 /* : ToolContext */;
val* var17 /* : ToolContext */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : FlatString */;
long var23 /* : Int */;
short int var25 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var26 /* : Int */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : FlatString */;
val* var32 /* : Array[Object] */;
long var33 /* : Int */;
val* var34 /* : NativeArray[Object] */;
val* var35 /* : Object */;
val* var36 /* : String */;
long var37 /* : Int */;
var_mainmodule = p0;
var_runtime_type_analysis = p1;
{
{ /* Inline time#Object#get_time (self) on <self:ModelBuilder> */
var2 = kernel_Any_Any_get_time_0(self);
var = var2;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
var_time0 = var;
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
if (varonce) {
var6 = varonce;
} else {
var7 = "*** GENERATING C ***";
var8 = 20;
var9 = standard___standard__NativeString___to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
var10 = 1;
{
nit___nit__ToolContext___info(var3, var6, var10); /* Direct call toolcontext#ToolContext#info on <var3:ToolContext>*/
}
var11 = NEW_nit__SeparateErasureCompiler(&type_nit__SeparateErasureCompiler);
{
((void (*)(val* self, val* p0))(var11->class->vft[COLOR_nit__abstract_compiler__AbstractCompiler__mainmodule_61d]))(var11, var_mainmodule) /* mainmodule= on <var11:SeparateErasureCompiler>*/;
}
{
((void (*)(val* self, val* p0))(var11->class->vft[COLOR_nit__abstract_compiler__AbstractCompiler__modelbuilder_61d]))(var11, self) /* modelbuilder= on <var11:SeparateErasureCompiler>*/;
}
{
((void (*)(val* self, val* p0))(var11->class->vft[COLOR_nit__separate_compiler__SeparateCompiler__runtime_type_analysis_61d]))(var11, var_runtime_type_analysis) /* runtime_type_analysis= on <var11:SeparateErasureCompiler>*/;
}
{
((void (*)(val* self))(var11->class->vft[COLOR_standard__kernel__Object__init]))(var11) /* init on <var11:SeparateErasureCompiler>*/;
}
var_compiler = var11;
{
nit___nit__SeparateCompiler___nit__abstract_compiler__AbstractCompiler__do_compilation(var_compiler); /* Direct call separate_compiler#SeparateCompiler#do_compilation on <var_compiler:SeparateErasureCompiler>*/
}
{
nit___nit__SeparateCompiler___nit__abstract_compiler__AbstractCompiler__display_stats(var_compiler); /* Direct call separate_compiler#SeparateCompiler#display_stats on <var_compiler:SeparateErasureCompiler>*/
}
{
{ /* Inline time#Object#get_time (self) on <self:ModelBuilder> */
var14 = kernel_Any_Any_get_time_0(self);
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_time1 = var12;
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var17 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (varonce18) {
var19 = varonce18;
} else {
var20 = "*** END GENERATING C: ";
var21 = 22;
var22 = standard___standard__NativeString___to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
{
{ /* Inline kernel#Int#- (var_time1,var_time0) on <var_time1:Int> */
/* Covariant cast for argument 0 (i) <var_time0:Int> isa OTHER */
/* <var_time0:Int> isa OTHER */
var25 = 1; /* easy <var_time0:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var26 = var_time1 - var_time0;
var23 = var26;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
if (varonce27) {
var28 = varonce27;
} else {
var29 = " ***";
var30 = 4;
var31 = standard___standard__NativeString___to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
var32 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var32 = array_instance Array[Object] */
var33 = 3;
var34 = NEW_standard__NativeArray(var33, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var34)->values[0] = (val*) var19;
var35 = BOX_standard__Int(var23); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var34)->values[1] = (val*) var35;
((struct instance_standard__NativeArray*)var34)->values[2] = (val*) var28;
{
((void (*)(val* self, val* p0, long p1))(var32->class->vft[COLOR_standard__array__Array__with_native]))(var32, var34, var33) /* with_native on <var32:Array[Object]>*/;
}
}
{
var36 = ((val* (*)(val* self))(var32->class->vft[COLOR_standard__string__Object__to_s]))(var32) /* to_s on <var32:Array[Object]>*/;
}
var37 = 2;
{
nit___nit__ToolContext___info(var15, var36, var37); /* Direct call toolcontext#ToolContext#info on <var15:ToolContext>*/
}
{
nit__abstract_compiler___ModelBuilder___write_and_make(self, var_compiler); /* Direct call abstract_compiler#ModelBuilder#write_and_make on <self:ModelBuilder>*/
}
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#class_ids for (self: SeparateErasureCompiler): Map[MClass, Int] */
val* nit___nit__SeparateErasureCompiler___class_ids(val* self) {
val* var /* : Map[MClass, Int] */;
val* var1 /* : Map[MClass, Int] */;
var1 = self->attrs[COLOR_nit__separate_erasure_compiler__SeparateErasureCompiler___class_ids].val; /* _class_ids on <self:SeparateErasureCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _class_ids");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 79);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#class_ids= for (self: SeparateErasureCompiler, Map[MClass, Int]) */
void nit___nit__SeparateErasureCompiler___class_ids_61d(val* self, val* p0) {
self->attrs[COLOR_nit__separate_erasure_compiler__SeparateErasureCompiler___class_ids].val = p0; /* _class_ids on <self:SeparateErasureCompiler> */
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#class_colors for (self: SeparateErasureCompiler): Map[MClass, Int] */
val* nit___nit__SeparateErasureCompiler___class_colors(val* self) {
val* var /* : Map[MClass, Int] */;
val* var1 /* : Map[MClass, Int] */;
var1 = self->attrs[COLOR_nit__separate_erasure_compiler__SeparateErasureCompiler___class_colors].val; /* _class_colors on <self:SeparateErasureCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _class_colors");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 80);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#class_colors= for (self: SeparateErasureCompiler, Map[MClass, Int]) */
void nit___nit__SeparateErasureCompiler___class_colors_61d(val* self, val* p0) {
self->attrs[COLOR_nit__separate_erasure_compiler__SeparateErasureCompiler___class_colors].val = p0; /* _class_colors on <self:SeparateErasureCompiler> */
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#vt_colors for (self: SeparateErasureCompiler): Map[MVirtualTypeProp, Int] */
val* nit___nit__SeparateErasureCompiler___vt_colors(val* self) {
val* var /* : Map[MVirtualTypeProp, Int] */;
val* var1 /* : Map[MVirtualTypeProp, Int] */;
var1 = self->attrs[COLOR_nit__separate_erasure_compiler__SeparateErasureCompiler___vt_colors].val; /* _vt_colors on <self:SeparateErasureCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vt_colors");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 81);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#vt_colors= for (self: SeparateErasureCompiler, Map[MVirtualTypeProp, Int]) */
void nit___nit__SeparateErasureCompiler___vt_colors_61d(val* self, val* p0) {
self->attrs[COLOR_nit__separate_erasure_compiler__SeparateErasureCompiler___vt_colors].val = p0; /* _vt_colors on <self:SeparateErasureCompiler> */
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#init for (self: SeparateErasureCompiler) */
void nit___nit__SeparateErasureCompiler___standard__kernel__Object__init(val* self) {
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
val* var27 /* : nullable Object */;
val* var_mprop /* var mprop: MProperty */;
short int var28 /* : Bool */;
int cltype;
int idtype;
val* var29 /* : nullable Object */;
val* var33 /* : POSetBucketsColorer[MClass, MVirtualTypeProp] */;
val* var34 /* : Map[Object, Set[Object]] */;
val* var_vt_colorer /* var vt_colorer: POSetBucketsColorer[MClass, MVirtualTypeProp] */;
val* var35 /* : Map[Object, Int] */;
val* var37 /* : Map[MClass, Array[nullable MPropDef]] */;
{
((void (*)(val* self))(self->class->vft[COLOR_nit___nit__SeparateErasureCompiler___standard__kernel__Object__init]))(self) /* init on <self:SeparateErasureCompiler>*/;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateErasureCompiler> */
var2 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 474);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit__model___MModule___flatten_mclass_hierarchy(var);
}
var_poset = var3;
var4 = NEW_standard__HashSet(&type_standard__HashSet__nit__MClass);
{
standard___standard__HashSet___from(var4, var_poset); /* Direct call hash_collection#HashSet#from on <var4:HashSet[MClass]>*/
}
var_mclasses = var4;
var5 = NEW_nit__POSetColorer(&type_nit__POSetColorer__nit__MClass);
{
{ /* Inline kernel#Object#init (var5) on <var5:POSetColorer[MClass]> */
RET_LABEL6:(void)0;
}
}
var_colorer = var5;
{
nit___nit__POSetColorer___colorize(var_colorer, var_poset); /* Direct call coloring#POSetColorer#colorize on <var_colorer:POSetColorer[MClass]>*/
}
{
var7 = nit___nit__POSetColorer___ids(var_colorer);
}
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#class_ids= (self,var7) on <self:SeparateErasureCompiler> */
self->attrs[COLOR_nit__separate_erasure_compiler__SeparateErasureCompiler___class_ids].val = var7; /* _class_ids on <self:SeparateErasureCompiler> */
RET_LABEL8:(void)0;
}
}
{
var9 = nit___nit__POSetColorer___colors(var_colorer);
}
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#class_colors= (self,var9) on <self:SeparateErasureCompiler> */
self->attrs[COLOR_nit__separate_erasure_compiler__SeparateErasureCompiler___class_colors].val = var9; /* _class_colors on <self:SeparateErasureCompiler> */
RET_LABEL10:(void)0;
}
}
{
var11 = nit___nit__SeparateErasureCompiler___build_class_typing_tables(self, var_mclasses);
}
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#class_tables= (self,var11) on <self:SeparateErasureCompiler> */
self->attrs[COLOR_nit__separate_erasure_compiler__SeparateErasureCompiler___class_tables].val = var11; /* _class_tables on <self:SeparateErasureCompiler> */
RET_LABEL12:(void)0;
}
}
var13 = NEW_standard__HashMap(&type_standard__HashMap__nit__MClass__standard__Set__nit__MVirtualTypeProp);
{
standard___standard__HashMap___standard__kernel__Object__init(var13); /* Direct call hash_collection#HashMap#init on <var13:HashMap[MClass, Set[MVirtualTypeProp]]>*/
}
var_vts = var13;
var_ = var_mclasses;
{
var14 = standard___standard__HashSet___standard__abstract_collection__Collection__iterator(var_);
}
var_15 = var14;
for(;;) {
{
var16 = ((short int (*)(val* self))(var_15->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_15) /* is_ok on <var_15:Iterator[MClass]>*/;
}
if (var16){
{
var17 = ((val* (*)(val* self))(var_15->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_15) /* item on <var_15:Iterator[MClass]>*/;
}
var_mclass = var17;
var18 = NEW_standard__HashSet(&type_standard__HashSet__nit__MVirtualTypeProp);
{
standard___standard__HashSet___standard__kernel__Object__init(var18); /* Direct call hash_collection#HashSet#init on <var18:HashSet[MVirtualTypeProp]>*/
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var_vts, var_mclass, var18); /* Direct call hash_collection#HashMap#[]= on <var_vts:HashMap[MClass, Set[MVirtualTypeProp]]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateErasureCompiler> */
var21 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 474);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = nit__abstract_compiler___MModule___properties(var19, var_mclass);
}
var_23 = var22;
{
var24 = ((val* (*)(val* self))(var_23->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_23) /* iterator on <var_23:Set[MProperty]>*/;
}
var_25 = var24;
for(;;) {
{
var26 = ((short int (*)(val* self))(var_25->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_25) /* is_ok on <var_25:Iterator[MProperty]>*/;
}
if (var26){
{
var27 = ((val* (*)(val* self))(var_25->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_25) /* item on <var_25:Iterator[MProperty]>*/;
}
var_mprop = var27;
/* <var_mprop:MProperty> isa MVirtualTypeProp */
cltype = type_nit__MVirtualTypeProp.color;
idtype = type_nit__MVirtualTypeProp.id;
if(cltype >= var_mprop->type->table_size) {
var28 = 0;
} else {
var28 = var_mprop->type->type_table[cltype] == idtype;
}
if (var28){
{
var29 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var_vts, var_mclass);
}
{
((void (*)(val* self, val* p0))(var29->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var29, var_mprop) /* add on <var29:nullable Object(Set[MVirtualTypeProp])>*/;
}
} else {
}
{
((void (*)(val* self))(var_25->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_25) /* next on <var_25:Iterator[MProperty]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_25) on <var_25:Iterator[MProperty]> */
RET_LABEL30:(void)0;
}
}
{
((void (*)(val* self))(var_15->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_15) /* next on <var_15:Iterator[MClass]>*/;
}
} else {
goto BREAK_label31;
}
}
BREAK_label31: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_15) on <var_15:Iterator[MClass]> */
RET_LABEL32:(void)0;
}
}
var33 = NEW_nit__POSetBucketsColorer(&type_nit__POSetBucketsColorer__nit__MClass__nit__MVirtualTypeProp);
{
var34 = nit___nit__POSetColorer___conflicts(var_colorer);
}
{
((void (*)(val* self, val* p0))(var33->class->vft[COLOR_nit__coloring__POSetBucketsColorer__poset_61d]))(var33, var_poset) /* poset= on <var33:POSetBucketsColorer[MClass, MVirtualTypeProp]>*/;
}
{
((void (*)(val* self, val* p0))(var33->class->vft[COLOR_nit__coloring__POSetBucketsColorer__conflicts_61d]))(var33, var34) /* conflicts= on <var33:POSetBucketsColorer[MClass, MVirtualTypeProp]>*/;
}
{
((void (*)(val* self))(var33->class->vft[COLOR_standard__kernel__Object__init]))(var33) /* init on <var33:POSetBucketsColorer[MClass, MVirtualTypeProp]>*/;
}
var_vt_colorer = var33;
{
var35 = nit___nit__POSetBucketsColorer___colorize(var_vt_colorer, var_vts);
}
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#vt_colors= (self,var35) on <self:SeparateErasureCompiler> */
self->attrs[COLOR_nit__separate_erasure_compiler__SeparateErasureCompiler___vt_colors].val = var35; /* _vt_colors on <self:SeparateErasureCompiler> */
RET_LABEL36:(void)0;
}
}
{
var37 = nit___nit__SeparateErasureCompiler___build_vt_tables(self, var_mclasses);
}
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#vt_tables= (self,var37) on <self:SeparateErasureCompiler> */
self->attrs[COLOR_nit__separate_erasure_compiler__SeparateErasureCompiler___vt_tables].val = var37; /* _vt_tables on <self:SeparateErasureCompiler> */
RET_LABEL38:(void)0;
}
}
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#build_vt_tables for (self: SeparateErasureCompiler, Set[MClass]): Map[MClass, Array[nullable MPropDef]] */
val* nit___nit__SeparateErasureCompiler___build_vt_tables(val* self, val* p0) {
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
val* var23 /* : ArrayIterator[nullable Object] */;
val* var_24 /* var : ArrayIterator[MClass] */;
short int var25 /* : Bool */;
val* var26 /* : nullable Object */;
val* var_parent /* var parent: MClass */;
short int var27 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
val* var32 /* : MModule */;
val* var34 /* : MModule */;
val* var35 /* : Set[MProperty] */;
val* var_36 /* var : Set[MProperty] */;
val* var37 /* : Iterator[nullable Object] */;
val* var_38 /* var : Iterator[MProperty] */;
short int var39 /* : Bool */;
val* var40 /* : nullable Object */;
val* var_mproperty /* var mproperty: MProperty */;
short int var41 /* : Bool */;
int cltype;
int idtype;
short int var42 /* : Bool */;
val* var44 /* : Map[MVirtualTypeProp, Int] */;
val* var46 /* : Map[MVirtualTypeProp, Int] */;
val* var47 /* : nullable Object */;
long var48 /* : Int */;
long var_color /* var color: Int */;
long var49 /* : Int */;
long var51 /* : Int */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
int cltype55;
int idtype56;
const char* var_class_name;
short int var57 /* : Bool */;
long var58 /* : Int */;
long var60 /* : Int */;
long var_i /* var i: Int */;
long var_61 /* var : Int */;
short int var62 /* : Bool */;
short int var64 /* : Bool */;
int cltype65;
int idtype66;
const char* var_class_name67;
short int var68 /* : Bool */;
val* var69 /* : null */;
long var70 /* : Int */;
long var71 /* : Int */;
val* var73 /* : Array[MPropDef] */;
val* var75 /* : Array[MPropDef] */;
val* var_76 /* var : Array[MVirtualTypeDef] */;
val* var77 /* : ArrayIterator[nullable Object] */;
val* var_78 /* var : ArrayIterator[MVirtualTypeDef] */;
short int var79 /* : Bool */;
val* var80 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: MVirtualTypeDef */;
val* var81 /* : MClassDef */;
val* var83 /* : MClassDef */;
val* var84 /* : MClass */;
val* var86 /* : MClass */;
short int var87 /* : Bool */;
short int var89 /* : Bool */;
short int var91 /* : Bool */;
val* var98 /* : MModule */;
val* var100 /* : MModule */;
val* var101 /* : Set[MProperty] */;
val* var_102 /* var : Set[MProperty] */;
val* var103 /* : Iterator[nullable Object] */;
val* var_104 /* var : Iterator[MProperty] */;
short int var105 /* : Bool */;
val* var106 /* : nullable Object */;
val* var_mproperty107 /* var mproperty: MProperty */;
short int var108 /* : Bool */;
int cltype109;
int idtype110;
short int var111 /* : Bool */;
val* var113 /* : Map[MVirtualTypeProp, Int] */;
val* var115 /* : Map[MVirtualTypeProp, Int] */;
val* var116 /* : nullable Object */;
long var117 /* : Int */;
long var_color118 /* var color: Int */;
long var119 /* : Int */;
long var121 /* : Int */;
short int var122 /* : Bool */;
short int var124 /* : Bool */;
int cltype125;
int idtype126;
const char* var_class_name127;
short int var128 /* : Bool */;
long var129 /* : Int */;
long var131 /* : Int */;
long var_i132 /* var i: Int */;
long var_133 /* var : Int */;
short int var134 /* : Bool */;
short int var136 /* : Bool */;
int cltype137;
int idtype138;
const char* var_class_name139;
short int var140 /* : Bool */;
val* var141 /* : null */;
long var142 /* : Int */;
long var143 /* : Int */;
val* var145 /* : Array[MPropDef] */;
val* var147 /* : Array[MPropDef] */;
val* var_148 /* var : Array[MVirtualTypeDef] */;
val* var149 /* : ArrayIterator[nullable Object] */;
val* var_150 /* var : ArrayIterator[MVirtualTypeDef] */;
short int var151 /* : Bool */;
val* var152 /* : nullable Object */;
val* var_mpropdef153 /* var mpropdef: MVirtualTypeDef */;
val* var154 /* : MClassDef */;
val* var156 /* : MClassDef */;
val* var157 /* : MClass */;
val* var159 /* : MClass */;
short int var160 /* : Bool */;
short int var162 /* : Bool */;
short int var164 /* : Bool */;
var_mclasses = p0;
var1 = NEW_standard__HashMap(&type_standard__HashMap__nit__MClass__standard__Array__nullable__nit__MPropDef);
{
standard___standard__HashMap___standard__kernel__Object__init(var1); /* Direct call hash_collection#HashMap#init on <var1:HashMap[MClass, Array[nullable MPropDef]]>*/
}
var_tables = var1;
var_ = var_mclasses;
{
var2 = ((val* (*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Set[MClass]>*/;
}
var_3 = var2;
for(;;) {
{
var4 = ((short int (*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_3) /* is_ok on <var_3:Iterator[MClass]>*/;
}
if (var4){
{
var5 = ((val* (*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_3) /* item on <var_3:Iterator[MClass]>*/;
}
var_mclass = var5;
var6 = NEW_standard__Array(&type_standard__Array__nullable__nit__MPropDef);
{
standard___standard__Array___standard__kernel__Object__init(var6); /* Direct call array#Array#init on <var6:Array[nullable MPropDef]>*/
}
var_table = var6;
var7 = NEW_standard__Array(&type_standard__Array__nit__MClass);
{
standard___standard__Array___standard__kernel__Object__init(var7); /* Direct call array#Array#init on <var7:Array[MClass]>*/
}
var_parents = var7;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateErasureCompiler> */
var10 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 474);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nit__model___MModule___flatten_mclass_hierarchy(var8);
}
{
var12 = poset___poset__POSet___standard__abstract_collection__Collection__has(var11, var_mclass);
}
if (var12){
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateErasureCompiler> */
var15 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 474);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = nit___nit__MClass___in_hierarchy(var_mclass, var13);
}
{
var17 = poset___poset__POSetElement___greaters(var16);
}
{
var18 = standard__array___Collection___to_a(var17);
}
var_parents = var18;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateErasureCompiler> */
var21 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 474);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
nit__model___MModule___linearize_mclasses(var19, var_parents); /* Direct call model#MModule#linearize_mclasses on <var19:MModule>*/
}
} else {
}
var_22 = var_parents;
{
var23 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_22);
}
var_24 = var23;
for(;;) {
{
var25 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_24);
}
if (var25){
{
var26 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_24);
}
var_parent = var26;
{
{ /* Inline kernel#Object#== (var_parent,var_mclass) on <var_parent:MClass> */
var_other = var_mclass;
{
{ /* Inline kernel#Object#is_same_instance (var_parent,var_other) on <var_parent:MClass> */
var31 = var_parent == var_other;
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
if (var27){
goto BREAK_label;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateErasureCompiler> */
var34 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 474);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
var35 = nit__abstract_compiler___MModule___properties(var32, var_parent);
}
var_36 = var35;
{
var37 = ((val* (*)(val* self))(var_36->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_36) /* iterator on <var_36:Set[MProperty]>*/;
}
var_38 = var37;
for(;;) {
{
var39 = ((short int (*)(val* self))(var_38->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_38) /* is_ok on <var_38:Iterator[MProperty]>*/;
}
if (var39){
{
var40 = ((val* (*)(val* self))(var_38->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_38) /* item on <var_38:Iterator[MProperty]>*/;
}
var_mproperty = var40;
/* <var_mproperty:MProperty> isa MVirtualTypeProp */
cltype = type_nit__MVirtualTypeProp.color;
idtype = type_nit__MVirtualTypeProp.id;
if(cltype >= var_mproperty->type->table_size) {
var41 = 0;
} else {
var41 = var_mproperty->type->type_table[cltype] == idtype;
}
var42 = !var41;
if (var42){
goto BREAK_label43;
} else {
}
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#vt_colors (self) on <self:SeparateErasureCompiler> */
var46 = self->attrs[COLOR_nit__separate_erasure_compiler__SeparateErasureCompiler___vt_colors].val; /* _vt_colors on <self:SeparateErasureCompiler> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vt_colors");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 81);
show_backtrace(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
var47 = ((val* (*)(val* self, val* p0))(var44->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var44, var_mproperty) /* [] on <var44:Map[MVirtualTypeProp, Int]>*/;
}
var48 = ((struct instance_standard__Int*)var47)->value; /* autounbox from nullable Object to Int */;
var_color = var48;
{
{ /* Inline array#AbstractArrayRead#length (var_table) on <var_table:Array[nullable MPropDef]> */
var51 = var_table->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_table:Array[nullable MPropDef]> */
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
{ /* Inline kernel#Int#<= (var49,var_color) on <var49:Int> */
/* Covariant cast for argument 0 (i) <var_color:Int> isa OTHER */
/* <var_color:Int> isa OTHER */
var54 = 1; /* easy <var_color:Int> isa OTHER*/
if (unlikely(!var54)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 409);
show_backtrace(1);
}
var57 = var49 <= var_color;
var52 = var57;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
if (var52){
{
{ /* Inline array#AbstractArrayRead#length (var_table) on <var_table:Array[nullable MPropDef]> */
var60 = var_table->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_table:Array[nullable MPropDef]> */
var58 = var60;
RET_LABEL59:(void)0;
}
}
var_i = var58;
var_61 = var_color;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_61) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_61:Int> isa OTHER */
/* <var_61:Int> isa OTHER */
var64 = 1; /* easy <var_61:Int> isa OTHER*/
if (unlikely(!var64)) {
var_class_name67 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name67);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var68 = var_i < var_61;
var62 = var68;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
}
if (var62){
var69 = NULL;
{
standard___standard__Array___standard__abstract_collection__Sequence___91d_93d_61d(var_table, var_i, var69); /* Direct call array#Array#[]= on <var_table:Array[nullable MPropDef]>*/
}
var70 = 1;
{
var71 = standard___standard__Int___Discrete__successor(var_i, var70);
}
var_i = var71;
} else {
goto BREAK_label72;
}
}
BREAK_label72: (void)0;
} else {
}
{
{ /* Inline model#MProperty#mpropdefs (var_mproperty) on <var_mproperty:MProperty(MVirtualTypeProp)> */
var75 = var_mproperty->attrs[COLOR_nit__model__MProperty___mpropdefs].val; /* _mpropdefs on <var_mproperty:MProperty(MVirtualTypeProp)> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1768);
show_backtrace(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
var_76 = var73;
{
var77 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_76);
}
var_78 = var77;
for(;;) {
{
var79 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_78);
}
if (var79){
{
var80 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_78);
}
var_mpropdef = var80;
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MVirtualTypeDef> */
var83 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MVirtualTypeDef> */
if (unlikely(var83 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var81) on <var81:MClassDef> */
var86 = var81->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var81:MClassDef> */
if (unlikely(var86 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var84 = var86;
RET_LABEL85:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var84,var_parent) on <var84:MClass> */
var_other = var_parent;
{
{ /* Inline kernel#Object#is_same_instance (var84,var_other) on <var84:MClass> */
var91 = var84 == var_other;
var89 = var91;
goto RET_LABEL90;
RET_LABEL90:(void)0;
}
}
var87 = var89;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
}
if (var87){
{
standard___standard__Array___standard__abstract_collection__Sequence___91d_93d_61d(var_table, var_color, var_mpropdef); /* Direct call array#Array#[]= on <var_table:Array[nullable MPropDef]>*/
}
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_78); /* Direct call array#ArrayIterator#next on <var_78:ArrayIterator[MVirtualTypeDef]>*/
}
} else {
goto BREAK_label92;
}
}
BREAK_label92: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_78) on <var_78:ArrayIterator[MVirtualTypeDef]> */
RET_LABEL93:(void)0;
}
}
BREAK_label43: (void)0;
{
((void (*)(val* self))(var_38->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_38) /* next on <var_38:Iterator[MProperty]>*/;
}
} else {
goto BREAK_label94;
}
}
BREAK_label94: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_38) on <var_38:Iterator[MProperty]> */
RET_LABEL95:(void)0;
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_24); /* Direct call array#ArrayIterator#next on <var_24:ArrayIterator[MClass]>*/
}
} else {
goto BREAK_label96;
}
}
BREAK_label96: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_24) on <var_24:ArrayIterator[MClass]> */
RET_LABEL97:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateErasureCompiler> */
var100 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var100 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 474);
show_backtrace(1);
}
var98 = var100;
RET_LABEL99:(void)0;
}
}
{
var101 = nit__abstract_compiler___MModule___properties(var98, var_mclass);
}
var_102 = var101;
{
var103 = ((val* (*)(val* self))(var_102->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_102) /* iterator on <var_102:Set[MProperty]>*/;
}
var_104 = var103;
for(;;) {
{
var105 = ((short int (*)(val* self))(var_104->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_104) /* is_ok on <var_104:Iterator[MProperty]>*/;
}
if (var105){
{
var106 = ((val* (*)(val* self))(var_104->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_104) /* item on <var_104:Iterator[MProperty]>*/;
}
var_mproperty107 = var106;
/* <var_mproperty107:MProperty> isa MVirtualTypeProp */
cltype109 = type_nit__MVirtualTypeProp.color;
idtype110 = type_nit__MVirtualTypeProp.id;
if(cltype109 >= var_mproperty107->type->table_size) {
var108 = 0;
} else {
var108 = var_mproperty107->type->type_table[cltype109] == idtype110;
}
var111 = !var108;
if (var111){
goto BREAK_label112;
} else {
}
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#vt_colors (self) on <self:SeparateErasureCompiler> */
var115 = self->attrs[COLOR_nit__separate_erasure_compiler__SeparateErasureCompiler___vt_colors].val; /* _vt_colors on <self:SeparateErasureCompiler> */
if (unlikely(var115 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vt_colors");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 81);
show_backtrace(1);
}
var113 = var115;
RET_LABEL114:(void)0;
}
}
{
var116 = ((val* (*)(val* self, val* p0))(var113->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var113, var_mproperty107) /* [] on <var113:Map[MVirtualTypeProp, Int]>*/;
}
var117 = ((struct instance_standard__Int*)var116)->value; /* autounbox from nullable Object to Int */;
var_color118 = var117;
{
{ /* Inline array#AbstractArrayRead#length (var_table) on <var_table:Array[nullable MPropDef]> */
var121 = var_table->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_table:Array[nullable MPropDef]> */
var119 = var121;
RET_LABEL120:(void)0;
}
}
{
{ /* Inline kernel#Int#<= (var119,var_color118) on <var119:Int> */
/* Covariant cast for argument 0 (i) <var_color118:Int> isa OTHER */
/* <var_color118:Int> isa OTHER */
var124 = 1; /* easy <var_color118:Int> isa OTHER*/
if (unlikely(!var124)) {
var_class_name127 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name127);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 409);
show_backtrace(1);
}
var128 = var119 <= var_color118;
var122 = var128;
goto RET_LABEL123;
RET_LABEL123:(void)0;
}
}
if (var122){
{
{ /* Inline array#AbstractArrayRead#length (var_table) on <var_table:Array[nullable MPropDef]> */
var131 = var_table->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_table:Array[nullable MPropDef]> */
var129 = var131;
RET_LABEL130:(void)0;
}
}
var_i132 = var129;
var_133 = var_color118;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i132,var_133) on <var_i132:Int> */
/* Covariant cast for argument 0 (i) <var_133:Int> isa OTHER */
/* <var_133:Int> isa OTHER */
var136 = 1; /* easy <var_133:Int> isa OTHER*/
if (unlikely(!var136)) {
var_class_name139 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name139);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var140 = var_i132 < var_133;
var134 = var140;
goto RET_LABEL135;
RET_LABEL135:(void)0;
}
}
if (var134){
var141 = NULL;
{
standard___standard__Array___standard__abstract_collection__Sequence___91d_93d_61d(var_table, var_i132, var141); /* Direct call array#Array#[]= on <var_table:Array[nullable MPropDef]>*/
}
var142 = 1;
{
var143 = standard___standard__Int___Discrete__successor(var_i132, var142);
}
var_i132 = var143;
} else {
goto BREAK_label144;
}
}
BREAK_label144: (void)0;
} else {
}
{
{ /* Inline model#MProperty#mpropdefs (var_mproperty107) on <var_mproperty107:MProperty(MVirtualTypeProp)> */
var147 = var_mproperty107->attrs[COLOR_nit__model__MProperty___mpropdefs].val; /* _mpropdefs on <var_mproperty107:MProperty(MVirtualTypeProp)> */
if (unlikely(var147 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1768);
show_backtrace(1);
}
var145 = var147;
RET_LABEL146:(void)0;
}
}
var_148 = var145;
{
var149 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_148);
}
var_150 = var149;
for(;;) {
{
var151 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_150);
}
if (var151){
{
var152 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_150);
}
var_mpropdef153 = var152;
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef153) on <var_mpropdef153:MVirtualTypeDef> */
var156 = var_mpropdef153->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef153:MVirtualTypeDef> */
if (unlikely(var156 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var154 = var156;
RET_LABEL155:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var154) on <var154:MClassDef> */
var159 = var154->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var154:MClassDef> */
if (unlikely(var159 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var157 = var159;
RET_LABEL158:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var157,var_mclass) on <var157:MClass> */
var_other = var_mclass;
{
{ /* Inline kernel#Object#is_same_instance (var157,var_other) on <var157:MClass> */
var164 = var157 == var_other;
var162 = var164;
goto RET_LABEL163;
RET_LABEL163:(void)0;
}
}
var160 = var162;
goto RET_LABEL161;
RET_LABEL161:(void)0;
}
}
if (var160){
{
standard___standard__Array___standard__abstract_collection__Sequence___91d_93d_61d(var_table, var_color118, var_mpropdef153); /* Direct call array#Array#[]= on <var_table:Array[nullable MPropDef]>*/
}
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_150); /* Direct call array#ArrayIterator#next on <var_150:ArrayIterator[MVirtualTypeDef]>*/
}
} else {
goto BREAK_label165;
}
}
BREAK_label165: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_150) on <var_150:ArrayIterator[MVirtualTypeDef]> */
RET_LABEL166:(void)0;
}
}
BREAK_label112: (void)0;
{
((void (*)(val* self))(var_104->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_104) /* next on <var_104:Iterator[MProperty]>*/;
}
} else {
goto BREAK_label167;
}
}
BREAK_label167: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_104) on <var_104:Iterator[MProperty]> */
RET_LABEL168:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var_tables, var_mclass, var_table); /* Direct call hash_collection#HashMap#[]= on <var_tables:HashMap[MClass, Array[nullable MPropDef]]>*/
}
{
((void (*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_3) /* next on <var_3:Iterator[MClass]>*/;
}
} else {
goto BREAK_label169;
}
}
BREAK_label169: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_3) on <var_3:Iterator[MClass]> */
RET_LABEL170:(void)0;
}
}
var = var_tables;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#build_class_typing_tables for (self: SeparateErasureCompiler, Set[MClass]): Map[MClass, Array[nullable MClass]] */
val* nit___nit__SeparateErasureCompiler___build_class_typing_tables(val* self, val* p0) {
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
val* var20 /* : ArrayIterator[nullable Object] */;
val* var_21 /* var : ArrayIterator[MClass] */;
short int var22 /* : Bool */;
val* var23 /* : nullable Object */;
val* var_sup /* var sup: MClass */;
val* var24 /* : Map[MClass, Int] */;
val* var26 /* : Map[MClass, Int] */;
val* var27 /* : nullable Object */;
long var28 /* : Int */;
long var_color /* var color: Int */;
long var29 /* : Int */;
long var31 /* : Int */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var35 /* : Bool */;
long var36 /* : Int */;
long var38 /* : Int */;
long var_i /* var i: Int */;
long var_39 /* var : Int */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
const char* var_class_name45;
short int var46 /* : Bool */;
val* var47 /* : null */;
long var48 /* : Int */;
long var49 /* : Int */;
var_mclasses = p0;
var1 = NEW_standard__HashMap(&type_standard__HashMap__nit__MClass__standard__Array__nullable__nit__MClass);
{
standard___standard__HashMap___standard__kernel__Object__init(var1); /* Direct call hash_collection#HashMap#init on <var1:HashMap[MClass, Array[nullable MClass]]>*/
}
var_tables = var1;
var_ = var_mclasses;
{
var2 = ((val* (*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Set[MClass]>*/;
}
var_3 = var2;
for(;;) {
{
var4 = ((short int (*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_3) /* is_ok on <var_3:Iterator[MClass]>*/;
}
if (var4){
{
var5 = ((val* (*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_3) /* item on <var_3:Iterator[MClass]>*/;
}
var_mclass = var5;
var6 = NEW_standard__Array(&type_standard__Array__nullable__nit__MClass);
{
standard___standard__Array___standard__kernel__Object__init(var6); /* Direct call array#Array#init on <var6:Array[nullable MClass]>*/
}
var_table = var6;
var7 = NEW_standard__Array(&type_standard__Array__nit__MClass);
{
standard___standard__Array___standard__kernel__Object__init(var7); /* Direct call array#Array#init on <var7:Array[MClass]>*/
}
var_supers = var7;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateErasureCompiler> */
var10 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 474);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nit__model___MModule___flatten_mclass_hierarchy(var8);
}
{
var12 = poset___poset__POSet___standard__abstract_collection__Collection__has(var11, var_mclass);
}
if (var12){
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateErasureCompiler> */
var15 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 474);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = nit___nit__MClass___in_hierarchy(var_mclass, var13);
}
{
var17 = poset___poset__POSetElement___greaters(var16);
}
{
var18 = standard__array___Collection___to_a(var17);
}
var_supers = var18;
} else {
}
var_19 = var_supers;
{
var20 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_19);
}
var_21 = var20;
for(;;) {
{
var22 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_21);
}
if (var22){
{
var23 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_21);
}
var_sup = var23;
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#class_colors (self) on <self:SeparateErasureCompiler> */
var26 = self->attrs[COLOR_nit__separate_erasure_compiler__SeparateErasureCompiler___class_colors].val; /* _class_colors on <self:SeparateErasureCompiler> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _class_colors");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 80);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
var27 = ((val* (*)(val* self, val* p0))(var24->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var24, var_sup) /* [] on <var24:Map[MClass, Int]>*/;
}
var28 = ((struct instance_standard__Int*)var27)->value; /* autounbox from nullable Object to Int */;
var_color = var28;
{
{ /* Inline array#AbstractArrayRead#length (var_table) on <var_table:Array[nullable MClass]> */
var31 = var_table->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_table:Array[nullable MClass]> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline kernel#Int#<= (var29,var_color) on <var29:Int> */
/* Covariant cast for argument 0 (i) <var_color:Int> isa OTHER */
/* <var_color:Int> isa OTHER */
var34 = 1; /* easy <var_color:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 409);
show_backtrace(1);
}
var35 = var29 <= var_color;
var32 = var35;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
if (var32){
{
{ /* Inline array#AbstractArrayRead#length (var_table) on <var_table:Array[nullable MClass]> */
var38 = var_table->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_table:Array[nullable MClass]> */
var36 = var38;
RET_LABEL37:(void)0;
}
}
var_i = var36;
var_39 = var_color;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_39) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_39:Int> isa OTHER */
/* <var_39:Int> isa OTHER */
var42 = 1; /* easy <var_39:Int> isa OTHER*/
if (unlikely(!var42)) {
var_class_name45 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name45);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var46 = var_i < var_39;
var40 = var46;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
if (var40){
var47 = NULL;
{
standard___standard__Array___standard__abstract_collection__Sequence___91d_93d_61d(var_table, var_i, var47); /* Direct call array#Array#[]= on <var_table:Array[nullable MClass]>*/
}
var48 = 1;
{
var49 = standard___standard__Int___Discrete__successor(var_i, var48);
}
var_i = var49;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
} else {
}
{
standard___standard__Array___standard__abstract_collection__Sequence___91d_93d_61d(var_table, var_color, var_sup); /* Direct call array#Array#[]= on <var_table:Array[nullable MClass]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_21); /* Direct call array#ArrayIterator#next on <var_21:ArrayIterator[MClass]>*/
}
} else {
goto BREAK_label50;
}
}
BREAK_label50: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_21) on <var_21:ArrayIterator[MClass]> */
RET_LABEL51:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var_tables, var_mclass, var_table); /* Direct call hash_collection#HashMap#[]= on <var_tables:HashMap[MClass, Array[nullable MClass]]>*/
}
{
((void (*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_3) /* next on <var_3:Iterator[MClass]>*/;
}
} else {
goto BREAK_label52;
}
}
BREAK_label52: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_3) on <var_3:Iterator[MClass]> */
RET_LABEL53:(void)0;
}
}
var = var_tables;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#compile_header_structs for (self: SeparateErasureCompiler) */
void nit___nit__SeparateErasureCompiler___nit__abstract_compiler__AbstractCompiler__compile_header_structs(val* self) {
val* var /* : CodeWriter */;
val* var2 /* : CodeWriter */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : FlatString */;
val* var7 /* : CodeWriter */;
val* var9 /* : CodeWriter */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : FlatString */;
val* var15 /* : CodeWriter */;
val* var17 /* : CodeWriter */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : FlatString */;
val* var23 /* : CodeWriter */;
val* var25 /* : CodeWriter */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : FlatString */;
val* var31 /* : CodeWriter */;
val* var33 /* : CodeWriter */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : FlatString */;
val* var39 /* : CodeWriter */;
val* var41 /* : CodeWriter */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
long var45 /* : Int */;
val* var46 /* : FlatString */;
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var2 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
if (varonce) {
var3 = varonce;
} else {
var4 = "typedef void(*nitmethod_t)(void); /* general C type representing a Nit method. */";
var5 = 81;
var6 = standard___standard__NativeString___to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
{
nit___nit__CodeWriter___add_decl(var, var3); /* Direct call abstract_compiler#CodeWriter#add_decl on <var:CodeWriter>*/
}
{
nit___nit__SeparateCompiler___compile_header_attribute_structs(self); /* Direct call separate_compiler#SeparateCompiler#compile_header_attribute_structs on <self:SeparateErasureCompiler>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var9 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (varonce10) {
var11 = varonce10;
} else {
var12 = "struct class { int id; const char *name; int box_kind; int color; const struct vts_table *vts_table; const struct type_table *type_table; nitmethod_t vft[]; }; /* general C type representing a Nit class. */";
var13 = 206;
var14 = standard___standard__NativeString___to_s_with_length(var12, var13);
var11 = var14;
varonce10 = var11;
}
{
nit___nit__CodeWriter___add_decl(var7, var11); /* Direct call abstract_compiler#CodeWriter#add_decl on <var7:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var17 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (varonce18) {
var19 = varonce18;
} else {
var20 = "struct type_table { int size; int table[]; }; /* colorized type table. */";
var21 = 73;
var22 = standard___standard__NativeString___to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
{
nit___nit__CodeWriter___add_decl(var15, var19); /* Direct call abstract_compiler#CodeWriter#add_decl on <var15:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var25 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
if (varonce26) {
var27 = varonce26;
} else {
var28 = "struct vts_entry { short int is_nullable; const struct class *class; }; /* link (nullable or not) between the vts and is bound. */";
var29 = 130;
var30 = standard___standard__NativeString___to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
{
nit___nit__CodeWriter___add_decl(var23, var27); /* Direct call abstract_compiler#CodeWriter#add_decl on <var23:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var33 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
if (varonce34) {
var35 = varonce34;
} else {
var36 = "struct vts_table { int dummy; const struct vts_entry vts[]; }; /* vts list of a C type representation. */";
var37 = 105;
var38 = standard___standard__NativeString___to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
{
nit___nit__CodeWriter___add_decl(var31, var35); /* Direct call abstract_compiler#CodeWriter#add_decl on <var31:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var41 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
if (varonce42) {
var43 = varonce42;
} else {
var44 = "typedef struct instance { const struct class *class; nitattribute_t attrs[1]; } val; /* general C type representing a Nit instance. */";
var45 = 134;
var46 = standard___standard__NativeString___to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
{
nit___nit__CodeWriter___add_decl(var39, var43); /* Direct call abstract_compiler#CodeWriter#add_decl on <var39:CodeWriter>*/
}
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#compile_class_to_c for (self: SeparateErasureCompiler, MClass) */
void nit___nit__SeparateErasureCompiler___nit__separate_compiler__SeparateCompiler__compile_class_to_c(val* self, val* p0) {
val* var_mclass /* var mclass: MClass */;
val* var /* : MClassDef */;
val* var2 /* : MClassDef */;
val* var3 /* : MClassType */;
val* var5 /* : MClassType */;
val* var_mtype /* var mtype: MClassType */;
val* var6 /* : String */;
val* var_c_name /* var c_name: String */;
val* var7 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var9 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var10 /* : nullable Object */;
val* var_vft /* var vft: Array[nullable MPropDef] */;
val* var11 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var13 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var14 /* : nullable Object */;
val* var_attrs /* var attrs: Array[nullable MPropDef] */;
val* var15 /* : Map[MClass, Array[nullable MClass]] */;
val* var17 /* : Map[MClass, Array[nullable MClass]] */;
val* var18 /* : nullable Object */;
val* var_class_table /* var class_table: Array[nullable MClass] */;
val* var19 /* : SeparateCompilerVisitor */;
val* var_v /* var v: SeparateCompilerVisitor */;
val* var20 /* : nullable RapidTypeAnalysis */;
val* var22 /* : nullable RapidTypeAnalysis */;
val* var_rta /* var rta: nullable RapidTypeAnalysis */;
short int var23 /* : Bool */;
short int var_is_dead /* var is_dead: Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var_ /* var : Bool */;
val* var29 /* : null */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var_35 /* var : Bool */;
val* var36 /* : HashSet[MClass] */;
val* var38 /* : HashSet[MClass] */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
short int var_41 /* var : Bool */;
val* var42 /* : String */;
static val* varonce;
val* var43 /* : String */;
char* var44 /* : NativeString */;
long var45 /* : Int */;
val* var46 /* : FlatString */;
short int var47 /* : Bool */;
short int var_48 /* var : Bool */;
val* var49 /* : String */;
val* var51 /* : String */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
long var55 /* : Int */;
val* var56 /* : FlatString */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
long var65 /* : Int */;
val* var66 /* : FlatString */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
long var70 /* : Int */;
val* var71 /* : FlatString */;
val* var72 /* : Array[Object] */;
long var73 /* : Int */;
val* var74 /* : NativeArray[Object] */;
val* var75 /* : String */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
long var79 /* : Int */;
val* var80 /* : FlatString */;
val* var81 /* : Array[Object] */;
long var82 /* : Int */;
val* var83 /* : NativeArray[Object] */;
val* var84 /* : String */;
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
static val* varonce113;
val* var114 /* : String */;
char* var115 /* : NativeString */;
long var116 /* : Int */;
val* var117 /* : FlatString */;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : NativeString */;
long var121 /* : Int */;
val* var122 /* : FlatString */;
val* var123 /* : Array[Object] */;
long var124 /* : Int */;
val* var125 /* : NativeArray[Object] */;
val* var126 /* : String */;
val* var127 /* : Map[MClass, Int] */;
val* var129 /* : Map[MClass, Int] */;
val* var130 /* : nullable Object */;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : NativeString */;
long var134 /* : Int */;
val* var135 /* : FlatString */;
val* var136 /* : Array[Object] */;
long var137 /* : Int */;
val* var138 /* : NativeArray[Object] */;
val* var139 /* : String */;
static val* varonce140;
val* var141 /* : String */;
char* var142 /* : NativeString */;
long var143 /* : Int */;
val* var144 /* : FlatString */;
val* var145 /* : String */;
val* var147 /* : String */;
static val* varonce148;
val* var149 /* : String */;
char* var150 /* : NativeString */;
long var151 /* : Int */;
val* var152 /* : FlatString */;
val* var153 /* : Array[Object] */;
long var154 /* : Int */;
val* var155 /* : NativeArray[Object] */;
val* var156 /* : String */;
long var157 /* : Int */;
static val* varonce158;
val* var159 /* : String */;
char* var160 /* : NativeString */;
long var161 /* : Int */;
val* var162 /* : FlatString */;
val* var163 /* : Array[Object] */;
long var164 /* : Int */;
val* var165 /* : NativeArray[Object] */;
val* var166 /* : Object */;
val* var167 /* : String */;
val* var168 /* : Map[MClass, Int] */;
val* var170 /* : Map[MClass, Int] */;
val* var171 /* : nullable Object */;
static val* varonce172;
val* var173 /* : String */;
char* var174 /* : NativeString */;
long var175 /* : Int */;
val* var176 /* : FlatString */;
val* var177 /* : Array[Object] */;
long var178 /* : Int */;
val* var179 /* : NativeArray[Object] */;
val* var180 /* : String */;
short int var181 /* : Bool */;
short int var182 /* : Bool */;
static val* varonce183;
val* var184 /* : String */;
char* var185 /* : NativeString */;
long var186 /* : Int */;
val* var187 /* : FlatString */;
val* var188 /* : Array[Object] */;
long var189 /* : Int */;
val* var190 /* : NativeArray[Object] */;
val* var191 /* : String */;
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
static val* varonce206;
val* var207 /* : String */;
char* var208 /* : NativeString */;
long var209 /* : Int */;
val* var210 /* : FlatString */;
static val* varonce211;
val* var212 /* : String */;
char* var213 /* : NativeString */;
long var214 /* : Int */;
val* var215 /* : FlatString */;
static val* varonce216;
val* var217 /* : String */;
char* var218 /* : NativeString */;
long var219 /* : Int */;
val* var220 /* : FlatString */;
val* var221 /* : Array[Object] */;
long var222 /* : Int */;
val* var223 /* : NativeArray[Object] */;
val* var224 /* : String */;
static val* varonce225;
val* var226 /* : String */;
char* var227 /* : NativeString */;
long var228 /* : Int */;
val* var229 /* : FlatString */;
long var230 /* : Int */;
long var_i /* var i: Int */;
long var231 /* : Int */;
long var233 /* : Int */;
long var_234 /* var : Int */;
short int var235 /* : Bool */;
short int var237 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var238 /* : Bool */;
val* var239 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: nullable MPropDef */;
val* var240 /* : null */;
short int var241 /* : Bool */;
short int var242 /* : Bool */;
val* var_other244 /* var other: nullable Object */;
short int var245 /* : Bool */;
short int var247 /* : Bool */;
static val* varonce248;
val* var249 /* : String */;
char* var250 /* : NativeString */;
long var251 /* : Int */;
val* var252 /* : FlatString */;
short int var253 /* : Bool */;
int cltype254;
int idtype255;
short int var256 /* : Bool */;
val* var257 /* : null */;
short int var258 /* : Bool */;
short int var259 /* : Bool */;
short int var261 /* : Bool */;
short int var262 /* : Bool */;
short int var_263 /* var : Bool */;
val* var264 /* : HashSet[MMethodDef] */;
val* var266 /* : HashSet[MMethodDef] */;
short int var267 /* : Bool */;
short int var268 /* : Bool */;
static val* varonce269;
val* var270 /* : String */;
char* var271 /* : NativeString */;
long var272 /* : Int */;
val* var273 /* : FlatString */;
val* var274 /* : MModule */;
val* var276 /* : MModule */;
static val* varonce277;
val* var278 /* : String */;
char* var279 /* : NativeString */;
long var280 /* : Int */;
val* var281 /* : FlatString */;
static val* varonce282;
val* var283 /* : String */;
char* var284 /* : NativeString */;
long var285 /* : Int */;
val* var286 /* : FlatString */;
static val* varonce287;
val* var288 /* : String */;
char* var289 /* : NativeString */;
long var290 /* : Int */;
val* var291 /* : FlatString */;
val* var292 /* : Array[Object] */;
long var293 /* : Int */;
val* var294 /* : NativeArray[Object] */;
val* var295 /* : String */;
val* var296 /* : SeparateRuntimeFunction */;
val* var_rf /* var rf: SeparateRuntimeFunction */;
val* var297 /* : String */;
static val* varonce298;
val* var299 /* : String */;
char* var300 /* : NativeString */;
long var301 /* : Int */;
val* var302 /* : FlatString */;
val* var303 /* : String */;
static val* varonce304;
val* var305 /* : String */;
char* var306 /* : NativeString */;
long var307 /* : Int */;
val* var308 /* : FlatString */;
val* var309 /* : String */;
static val* varonce310;
val* var311 /* : String */;
char* var312 /* : NativeString */;
long var313 /* : Int */;
val* var314 /* : FlatString */;
val* var315 /* : Array[Object] */;
long var316 /* : Int */;
val* var317 /* : NativeArray[Object] */;
val* var318 /* : String */;
long var319 /* : Int */;
long var320 /* : Int */;
static val* varonce322;
val* var323 /* : String */;
char* var324 /* : NativeString */;
long var325 /* : Int */;
val* var326 /* : FlatString */;
static val* varonce327;
val* var328 /* : String */;
char* var329 /* : NativeString */;
long var330 /* : Int */;
val* var331 /* : FlatString */;
static val* varonce332;
val* var333 /* : String */;
char* var334 /* : NativeString */;
long var335 /* : Int */;
val* var336 /* : FlatString */;
static val* varonce337;
val* var338 /* : String */;
char* var339 /* : NativeString */;
long var340 /* : Int */;
val* var341 /* : FlatString */;
val* var342 /* : Array[Object] */;
long var343 /* : Int */;
val* var344 /* : NativeArray[Object] */;
val* var345 /* : String */;
long var346 /* : Int */;
long var348 /* : Int */;
static val* varonce349;
val* var350 /* : String */;
char* var351 /* : NativeString */;
long var352 /* : Int */;
val* var353 /* : FlatString */;
val* var354 /* : Array[Object] */;
long var355 /* : Int */;
val* var356 /* : NativeArray[Object] */;
val* var357 /* : Object */;
val* var358 /* : String */;
static val* varonce359;
val* var360 /* : String */;
char* var361 /* : NativeString */;
long var362 /* : Int */;
val* var363 /* : FlatString */;
val* var_364 /* var : Array[nullable MClass] */;
val* var365 /* : ArrayIterator[nullable Object] */;
val* var_366 /* var : ArrayIterator[nullable MClass] */;
short int var367 /* : Bool */;
val* var368 /* : nullable Object */;
val* var_msuper /* var msuper: nullable MClass */;
val* var369 /* : null */;
short int var370 /* : Bool */;
short int var371 /* : Bool */;
short int var373 /* : Bool */;
short int var375 /* : Bool */;
static val* varonce376;
val* var377 /* : String */;
char* var378 /* : NativeString */;
long var379 /* : Int */;
val* var380 /* : FlatString */;
val* var381 /* : Map[MClass, Int] */;
val* var383 /* : Map[MClass, Int] */;
val* var384 /* : nullable Object */;
static val* varonce385;
val* var386 /* : String */;
char* var387 /* : NativeString */;
long var388 /* : Int */;
val* var389 /* : FlatString */;
static val* varonce390;
val* var391 /* : String */;
char* var392 /* : NativeString */;
long var393 /* : Int */;
val* var394 /* : FlatString */;
val* var395 /* : Array[Object] */;
long var396 /* : Int */;
val* var397 /* : NativeArray[Object] */;
val* var398 /* : String */;
static val* varonce401;
val* var402 /* : String */;
char* var403 /* : NativeString */;
long var404 /* : Int */;
val* var405 /* : FlatString */;
static val* varonce406;
val* var407 /* : String */;
char* var408 /* : NativeString */;
long var409 /* : Int */;
val* var410 /* : FlatString */;
short int var411 /* : Bool */;
val* var412 /* : String */;
static val* varonce413;
val* var414 /* : String */;
char* var415 /* : NativeString */;
long var416 /* : Int */;
val* var417 /* : FlatString */;
short int var418 /* : Bool */;
short int var420 /* : Bool */;
short int var421 /* : Bool */;
short int var_422 /* var : Bool */;
val* var423 /* : MClass */;
val* var425 /* : MClass */;
val* var426 /* : String */;
val* var428 /* : String */;
static val* varonce429;
val* var430 /* : String */;
char* var431 /* : NativeString */;
long var432 /* : Int */;
val* var433 /* : FlatString */;
short int var434 /* : Bool */;
val* var435 /* : CodeWriter */;
val* var437 /* : CodeWriter */;
static val* varonce438;
val* var439 /* : String */;
char* var440 /* : NativeString */;
long var441 /* : Int */;
val* var442 /* : FlatString */;
static val* varonce443;
val* var444 /* : String */;
char* var445 /* : NativeString */;
long var446 /* : Int */;
val* var447 /* : FlatString */;
val* var448 /* : Array[Object] */;
long var449 /* : Int */;
val* var450 /* : NativeArray[Object] */;
val* var451 /* : String */;
val* var452 /* : CodeWriter */;
val* var454 /* : CodeWriter */;
static val* varonce455;
val* var456 /* : String */;
char* var457 /* : NativeString */;
long var458 /* : Int */;
val* var459 /* : FlatString */;
val* var460 /* : CodeWriter */;
val* var462 /* : CodeWriter */;
val* var463 /* : String */;
static val* varonce464;
val* var465 /* : String */;
char* var466 /* : NativeString */;
long var467 /* : Int */;
val* var468 /* : FlatString */;
val* var469 /* : Array[Object] */;
long var470 /* : Int */;
val* var471 /* : NativeArray[Object] */;
val* var472 /* : String */;
val* var473 /* : CodeWriter */;
val* var475 /* : CodeWriter */;
static val* varonce476;
val* var477 /* : String */;
char* var478 /* : NativeString */;
long var479 /* : Int */;
val* var480 /* : FlatString */;
static val* varonce481;
val* var482 /* : String */;
char* var483 /* : NativeString */;
long var484 /* : Int */;
val* var485 /* : FlatString */;
val* var486 /* : Array[Object] */;
long var487 /* : Int */;
val* var488 /* : NativeArray[Object] */;
val* var489 /* : String */;
static val* varonce490;
val* var491 /* : String */;
char* var492 /* : NativeString */;
long var493 /* : Int */;
val* var494 /* : FlatString */;
static val* varonce495;
val* var496 /* : String */;
char* var497 /* : NativeString */;
long var498 /* : Int */;
val* var499 /* : FlatString */;
val* var500 /* : String */;
static val* varonce501;
val* var502 /* : String */;
char* var503 /* : NativeString */;
long var504 /* : Int */;
val* var505 /* : FlatString */;
val* var506 /* : Array[Object] */;
long var507 /* : Int */;
val* var508 /* : NativeArray[Object] */;
val* var509 /* : String */;
static val* varonce510;
val* var511 /* : String */;
char* var512 /* : NativeString */;
long var513 /* : Int */;
val* var514 /* : FlatString */;
static val* varonce515;
val* var516 /* : String */;
char* var517 /* : NativeString */;
long var518 /* : Int */;
val* var519 /* : FlatString */;
val* var520 /* : Array[Object] */;
long var521 /* : Int */;
val* var522 /* : NativeArray[Object] */;
val* var523 /* : String */;
static val* varonce524;
val* var525 /* : String */;
char* var526 /* : NativeString */;
long var527 /* : Int */;
val* var528 /* : FlatString */;
val* var529 /* : String */;
static val* varonce530;
val* var531 /* : String */;
char* var532 /* : NativeString */;
long var533 /* : Int */;
val* var534 /* : FlatString */;
val* var535 /* : String */;
static val* varonce536;
val* var537 /* : String */;
char* var538 /* : NativeString */;
long var539 /* : Int */;
val* var540 /* : FlatString */;
val* var541 /* : Array[Object] */;
long var542 /* : Int */;
val* var543 /* : NativeArray[Object] */;
val* var544 /* : String */;
static val* varonce545;
val* var546 /* : String */;
char* var547 /* : NativeString */;
long var548 /* : Int */;
val* var549 /* : FlatString */;
static val* varonce550;
val* var551 /* : String */;
char* var552 /* : NativeString */;
long var553 /* : Int */;
val* var554 /* : FlatString */;
static val* varonce555;
val* var556 /* : String */;
char* var557 /* : NativeString */;
long var558 /* : Int */;
val* var559 /* : FlatString */;
val* var560 /* : Array[Object] */;
long var561 /* : Int */;
val* var562 /* : NativeArray[Object] */;
val* var563 /* : String */;
static val* varonce564;
val* var565 /* : String */;
char* var566 /* : NativeString */;
long var567 /* : Int */;
val* var568 /* : FlatString */;
val* var569 /* : Array[Object] */;
long var570 /* : Int */;
val* var571 /* : NativeArray[Object] */;
val* var572 /* : String */;
static val* varonce573;
val* var574 /* : String */;
char* var575 /* : NativeString */;
long var576 /* : Int */;
val* var577 /* : FlatString */;
static val* varonce578;
val* var579 /* : String */;
char* var580 /* : NativeString */;
long var581 /* : Int */;
val* var582 /* : FlatString */;
val* var583 /* : Array[Object] */;
long var584 /* : Int */;
val* var585 /* : NativeArray[Object] */;
val* var586 /* : String */;
static val* varonce587;
val* var588 /* : String */;
char* var589 /* : NativeString */;
long var590 /* : Int */;
val* var591 /* : FlatString */;
static val* varonce592;
val* var593 /* : String */;
char* var594 /* : NativeString */;
long var595 /* : Int */;
val* var596 /* : FlatString */;
static val* varonce597;
val* var598 /* : String */;
char* var599 /* : NativeString */;
long var600 /* : Int */;
val* var601 /* : FlatString */;
val* var602 /* : MClass */;
val* var604 /* : MClass */;
val* var605 /* : String */;
val* var607 /* : String */;
static val* varonce608;
val* var609 /* : String */;
char* var610 /* : NativeString */;
long var611 /* : Int */;
val* var612 /* : FlatString */;
short int var613 /* : Bool */;
short int var615 /* : Bool */;
short int var616 /* : Bool */;
val* var617 /* : SeparateCompilerVisitor */;
static val* varonce618;
val* var619 /* : String */;
char* var620 /* : NativeString */;
long var621 /* : Int */;
val* var622 /* : FlatString */;
val* var623 /* : Array[Object] */;
long var624 /* : Int */;
val* var625 /* : NativeArray[Object] */;
val* var626 /* : String */;
val* var627 /* : String */;
static val* varonce628;
val* var629 /* : String */;
char* var630 /* : NativeString */;
long var631 /* : Int */;
val* var632 /* : FlatString */;
static val* varonce633;
val* var634 /* : String */;
char* var635 /* : NativeString */;
long var636 /* : Int */;
val* var637 /* : FlatString */;
val* var638 /* : Array[Object] */;
long var639 /* : Int */;
val* var640 /* : NativeArray[Object] */;
val* var641 /* : String */;
static val* varonce642;
val* var643 /* : String */;
char* var644 /* : NativeString */;
long var645 /* : Int */;
val* var646 /* : FlatString */;
static val* varonce647;
val* var648 /* : String */;
char* var649 /* : NativeString */;
long var650 /* : Int */;
val* var651 /* : FlatString */;
val* var652 /* : Array[Object] */;
long var653 /* : Int */;
val* var654 /* : NativeArray[Object] */;
val* var655 /* : String */;
val* var656 /* : String */;
static val* varonce657;
val* var658 /* : String */;
char* var659 /* : NativeString */;
long var660 /* : Int */;
val* var661 /* : FlatString */;
static val* varonce662;
val* var663 /* : String */;
char* var664 /* : NativeString */;
long var665 /* : Int */;
val* var666 /* : FlatString */;
val* var667 /* : Array[Object] */;
long var668 /* : Int */;
val* var669 /* : NativeArray[Object] */;
val* var670 /* : String */;
static val* varonce671;
val* var672 /* : String */;
char* var673 /* : NativeString */;
long var674 /* : Int */;
val* var675 /* : FlatString */;
val* var676 /* : Array[Object] */;
long var677 /* : Int */;
val* var678 /* : NativeArray[Object] */;
val* var679 /* : String */;
static val* varonce680;
val* var681 /* : String */;
char* var682 /* : NativeString */;
long var683 /* : Int */;
val* var684 /* : FlatString */;
val* var685 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
short int var686 /* : Bool */;
static val* varonce688;
val* var689 /* : String */;
char* var690 /* : NativeString */;
long var691 /* : Int */;
val* var692 /* : FlatString */;
val* var693 /* : String */;
static val* varonce694;
val* var695 /* : String */;
char* var696 /* : NativeString */;
long var697 /* : Int */;
val* var698 /* : FlatString */;
val* var699 /* : Array[Object] */;
long var700 /* : Int */;
val* var701 /* : NativeArray[Object] */;
val* var702 /* : String */;
static val* varonce703;
val* var704 /* : String */;
char* var705 /* : NativeString */;
long var706 /* : Int */;
val* var707 /* : FlatString */;
val* var708 /* : Array[Object] */;
long var709 /* : Int */;
val* var710 /* : NativeArray[Object] */;
val* var711 /* : String */;
static val* varonce712;
val* var713 /* : String */;
char* var714 /* : NativeString */;
long var715 /* : Int */;
val* var716 /* : FlatString */;
static val* varonce717;
val* var718 /* : String */;
char* var719 /* : NativeString */;
long var720 /* : Int */;
val* var721 /* : FlatString */;
val* var722 /* : Array[Object] */;
long var723 /* : Int */;
val* var724 /* : NativeArray[Object] */;
val* var725 /* : String */;
static val* varonce726;
val* var727 /* : String */;
char* var728 /* : NativeString */;
long var729 /* : Int */;
val* var730 /* : FlatString */;
val* var731 /* : String */;
static val* varonce732;
val* var733 /* : String */;
char* var734 /* : NativeString */;
long var735 /* : Int */;
val* var736 /* : FlatString */;
static val* varonce737;
val* var738 /* : String */;
char* var739 /* : NativeString */;
long var740 /* : Int */;
val* var741 /* : FlatString */;
val* var742 /* : Array[Object] */;
long var743 /* : Int */;
val* var744 /* : NativeArray[Object] */;
val* var745 /* : String */;
static val* varonce746;
val* var747 /* : String */;
char* var748 /* : NativeString */;
long var749 /* : Int */;
val* var750 /* : FlatString */;
static val* varonce751;
val* var752 /* : String */;
char* var753 /* : NativeString */;
long var754 /* : Int */;
val* var755 /* : FlatString */;
val* var756 /* : Array[Object] */;
long var757 /* : Int */;
val* var758 /* : NativeArray[Object] */;
val* var759 /* : String */;
static val* varonce760;
val* var761 /* : String */;
char* var762 /* : NativeString */;
long var763 /* : Int */;
val* var764 /* : FlatString */;
val* var765 /* : String */;
val* var767 /* : String */;
static val* varonce768;
val* var769 /* : String */;
char* var770 /* : NativeString */;
long var771 /* : Int */;
val* var772 /* : FlatString */;
short int var773 /* : Bool */;
val* var774 /* : CodeWriter */;
val* var776 /* : CodeWriter */;
static val* varonce777;
val* var778 /* : String */;
char* var779 /* : NativeString */;
long var780 /* : Int */;
val* var781 /* : FlatString */;
static val* varonce782;
val* var783 /* : String */;
char* var784 /* : NativeString */;
long var785 /* : Int */;
val* var786 /* : FlatString */;
val* var787 /* : Array[Object] */;
long var788 /* : Int */;
val* var789 /* : NativeArray[Object] */;
val* var790 /* : String */;
val* var791 /* : CodeWriter */;
val* var793 /* : CodeWriter */;
static val* varonce794;
val* var795 /* : String */;
char* var796 /* : NativeString */;
long var797 /* : Int */;
val* var798 /* : FlatString */;
val* var799 /* : CodeWriter */;
val* var801 /* : CodeWriter */;
static val* varonce802;
val* var803 /* : String */;
char* var804 /* : NativeString */;
long var805 /* : Int */;
val* var806 /* : FlatString */;
val* var807 /* : CodeWriter */;
val* var809 /* : CodeWriter */;
static val* varonce810;
val* var811 /* : String */;
char* var812 /* : NativeString */;
long var813 /* : Int */;
val* var814 /* : FlatString */;
val* var815 /* : CodeWriter */;
val* var817 /* : CodeWriter */;
static val* varonce818;
val* var819 /* : String */;
char* var820 /* : NativeString */;
long var821 /* : Int */;
val* var822 /* : FlatString */;
static val* varonce823;
val* var824 /* : String */;
char* var825 /* : NativeString */;
long var826 /* : Int */;
val* var827 /* : FlatString */;
val* var828 /* : Array[Object] */;
long var829 /* : Int */;
val* var830 /* : NativeArray[Object] */;
val* var831 /* : String */;
val* var832 /* : String */;
static val* varonce833;
val* var834 /* : String */;
char* var835 /* : NativeString */;
long var836 /* : Int */;
val* var837 /* : FlatString */;
static val* varonce838;
val* var839 /* : String */;
char* var840 /* : NativeString */;
long var841 /* : Int */;
val* var842 /* : FlatString */;
val* var843 /* : Array[Object] */;
long var844 /* : Int */;
val* var845 /* : NativeArray[Object] */;
val* var846 /* : String */;
static val* varonce847;
val* var848 /* : String */;
char* var849 /* : NativeString */;
long var850 /* : Int */;
val* var851 /* : FlatString */;
static val* varonce852;
val* var853 /* : String */;
char* var854 /* : NativeString */;
long var855 /* : Int */;
val* var856 /* : FlatString */;
val* var857 /* : Array[Object] */;
long var858 /* : Int */;
val* var859 /* : NativeArray[Object] */;
val* var860 /* : String */;
val* var861 /* : String */;
static val* varonce862;
val* var863 /* : String */;
char* var864 /* : NativeString */;
long var865 /* : Int */;
val* var866 /* : FlatString */;
static val* varonce867;
val* var868 /* : String */;
char* var869 /* : NativeString */;
long var870 /* : Int */;
val* var871 /* : FlatString */;
val* var872 /* : Array[Object] */;
long var873 /* : Int */;
val* var874 /* : NativeArray[Object] */;
val* var875 /* : String */;
static val* varonce876;
val* var877 /* : String */;
char* var878 /* : NativeString */;
long var879 /* : Int */;
val* var880 /* : FlatString */;
val* var881 /* : String */;
val* var_res882 /* var res: String */;
static val* varonce883;
val* var884 /* : String */;
char* var885 /* : NativeString */;
long var886 /* : Int */;
val* var887 /* : FlatString */;
static val* varonce888;
val* var889 /* : String */;
char* var890 /* : NativeString */;
long var891 /* : Int */;
val* var892 /* : FlatString */;
static val* varonce893;
val* var894 /* : String */;
char* var895 /* : NativeString */;
long var896 /* : Int */;
val* var897 /* : FlatString */;
val* var898 /* : Array[Object] */;
long var899 /* : Int */;
val* var900 /* : NativeArray[Object] */;
val* var901 /* : String */;
val* var902 /* : Array[MType] */;
val* var903 /* : nullable Object */;
val* var_mtype_elt /* var mtype_elt: MType */;
static val* varonce904;
val* var905 /* : String */;
char* var906 /* : NativeString */;
long var907 /* : Int */;
val* var908 /* : FlatString */;
static val* varonce909;
val* var910 /* : String */;
char* var911 /* : NativeString */;
long var912 /* : Int */;
val* var913 /* : FlatString */;
val* var914 /* : String */;
static val* varonce915;
val* var916 /* : String */;
char* var917 /* : NativeString */;
long var918 /* : Int */;
val* var919 /* : FlatString */;
val* var920 /* : Array[Object] */;
long var921 /* : Int */;
val* var922 /* : NativeArray[Object] */;
val* var923 /* : String */;
static val* varonce924;
val* var925 /* : String */;
char* var926 /* : NativeString */;
long var927 /* : Int */;
val* var928 /* : FlatString */;
val* var929 /* : Array[Object] */;
long var930 /* : Int */;
val* var931 /* : NativeArray[Object] */;
val* var932 /* : String */;
static val* varonce933;
val* var934 /* : String */;
char* var935 /* : NativeString */;
long var936 /* : Int */;
val* var937 /* : FlatString */;
static val* varonce938;
val* var939 /* : String */;
char* var940 /* : NativeString */;
long var941 /* : Int */;
val* var942 /* : FlatString */;
val* var943 /* : Array[Object] */;
long var944 /* : Int */;
val* var945 /* : NativeArray[Object] */;
val* var946 /* : String */;
static val* varonce947;
val* var948 /* : String */;
char* var949 /* : NativeString */;
long var950 /* : Int */;
val* var951 /* : FlatString */;
val* var952 /* : Array[Object] */;
long var953 /* : Int */;
val* var954 /* : NativeArray[Object] */;
val* var955 /* : String */;
static val* varonce956;
val* var957 /* : String */;
char* var958 /* : NativeString */;
long var959 /* : Int */;
val* var960 /* : FlatString */;
static val* varonce961;
val* var962 /* : String */;
char* var963 /* : NativeString */;
long var964 /* : Int */;
val* var965 /* : FlatString */;
val* var966 /* : Array[Object] */;
long var967 /* : Int */;
val* var968 /* : NativeArray[Object] */;
val* var969 /* : String */;
static val* varonce970;
val* var971 /* : String */;
char* var972 /* : NativeString */;
long var973 /* : Int */;
val* var974 /* : FlatString */;
short int var975 /* : Bool */;
val* var976 /* : MClass */;
val* var978 /* : MClass */;
val* var979 /* : MClassKind */;
val* var981 /* : MClassKind */;
val* var982 /* : MClassKind */;
short int var983 /* : Bool */;
short int var985 /* : Bool */;
short int var987 /* : Bool */;
short int var_988 /* var : Bool */;
val* var989 /* : MClass */;
val* var991 /* : MClass */;
val* var992 /* : String */;
val* var994 /* : String */;
static val* varonce995;
val* var996 /* : String */;
char* var997 /* : NativeString */;
long var998 /* : Int */;
val* var999 /* : FlatString */;
short int var1000 /* : Bool */;
short int var1002 /* : Bool */;
short int var1003 /* : Bool */;
val* var1004 /* : MModule */;
val* var1006 /* : MModule */;
val* var1007 /* : MClassType */;
val* var_pointer_type /* var pointer_type: MClassType */;
static val* varonce1008;
val* var1009 /* : String */;
char* var1010 /* : NativeString */;
long var1011 /* : Int */;
val* var1012 /* : FlatString */;
val* var1013 /* : Array[Object] */;
long var1014 /* : Int */;
val* var1015 /* : NativeArray[Object] */;
val* var1016 /* : String */;
val* var1017 /* : String */;
static val* varonce1018;
val* var1019 /* : String */;
char* var1020 /* : NativeString */;
long var1021 /* : Int */;
val* var1022 /* : FlatString */;
static val* varonce1023;
val* var1024 /* : String */;
char* var1025 /* : NativeString */;
long var1026 /* : Int */;
val* var1027 /* : FlatString */;
val* var1028 /* : Array[Object] */;
long var1029 /* : Int */;
val* var1030 /* : NativeArray[Object] */;
val* var1031 /* : String */;
static val* varonce1032;
val* var1033 /* : String */;
char* var1034 /* : NativeString */;
long var1035 /* : Int */;
val* var1036 /* : FlatString */;
static val* varonce1037;
val* var1038 /* : String */;
char* var1039 /* : NativeString */;
long var1040 /* : Int */;
val* var1041 /* : FlatString */;
val* var1042 /* : Array[Object] */;
long var1043 /* : Int */;
val* var1044 /* : NativeArray[Object] */;
val* var1045 /* : String */;
val* var1046 /* : String */;
static val* varonce1047;
val* var1048 /* : String */;
char* var1049 /* : NativeString */;
long var1050 /* : Int */;
val* var1051 /* : FlatString */;
static val* varonce1052;
val* var1053 /* : String */;
char* var1054 /* : NativeString */;
long var1055 /* : Int */;
val* var1056 /* : FlatString */;
val* var1057 /* : Array[Object] */;
long var1058 /* : Int */;
val* var1059 /* : NativeArray[Object] */;
val* var1060 /* : String */;
static val* varonce1061;
val* var1062 /* : String */;
char* var1063 /* : NativeString */;
long var1064 /* : Int */;
val* var1065 /* : FlatString */;
val* var1066 /* : Array[Object] */;
long var1067 /* : Int */;
val* var1068 /* : NativeArray[Object] */;
val* var1069 /* : String */;
static val* varonce1070;
val* var1071 /* : String */;
char* var1072 /* : NativeString */;
long var1073 /* : Int */;
val* var1074 /* : FlatString */;
val* var1075 /* : RuntimeVariable */;
val* var_res1076 /* var res: RuntimeVariable */;
short int var1077 /* : Bool */;
static val* varonce1079;
val* var1080 /* : String */;
char* var1081 /* : NativeString */;
long var1082 /* : Int */;
val* var1083 /* : FlatString */;
val* var1084 /* : String */;
static val* varonce1085;
val* var1086 /* : String */;
char* var1087 /* : NativeString */;
long var1088 /* : Int */;
val* var1089 /* : FlatString */;
val* var1090 /* : Array[Object] */;
long var1091 /* : Int */;
val* var1092 /* : NativeArray[Object] */;
val* var1093 /* : String */;
static val* varonce1094;
val* var1095 /* : String */;
char* var1096 /* : NativeString */;
long var1097 /* : Int */;
val* var1098 /* : FlatString */;
val* var1099 /* : Array[Object] */;
long var1100 /* : Int */;
val* var1101 /* : NativeArray[Object] */;
val* var1102 /* : String */;
static val* varonce1103;
val* var1104 /* : String */;
char* var1105 /* : NativeString */;
long var1106 /* : Int */;
val* var1107 /* : FlatString */;
static val* varonce1108;
val* var1109 /* : String */;
char* var1110 /* : NativeString */;
long var1111 /* : Int */;
val* var1112 /* : FlatString */;
val* var1113 /* : Array[Object] */;
long var1114 /* : Int */;
val* var1115 /* : NativeArray[Object] */;
val* var1116 /* : String */;
static val* varonce1117;
val* var1118 /* : String */;
char* var1119 /* : NativeString */;
long var1120 /* : Int */;
val* var1121 /* : FlatString */;
val* var1122 /* : String */;
static val* varonce1123;
val* var1124 /* : String */;
char* var1125 /* : NativeString */;
long var1126 /* : Int */;
val* var1127 /* : FlatString */;
static val* varonce1128;
val* var1129 /* : String */;
char* var1130 /* : NativeString */;
long var1131 /* : Int */;
val* var1132 /* : FlatString */;
val* var1133 /* : Array[Object] */;
long var1134 /* : Int */;
val* var1135 /* : NativeArray[Object] */;
val* var1136 /* : String */;
static val* varonce1137;
val* var1138 /* : String */;
char* var1139 /* : NativeString */;
long var1140 /* : Int */;
val* var1141 /* : FlatString */;
static val* varonce1142;
val* var1143 /* : String */;
char* var1144 /* : NativeString */;
long var1145 /* : Int */;
val* var1146 /* : FlatString */;
val* var1147 /* : Array[Object] */;
long var1148 /* : Int */;
val* var1149 /* : NativeArray[Object] */;
val* var1150 /* : String */;
static val* varonce1151;
val* var1152 /* : String */;
char* var1153 /* : NativeString */;
long var1154 /* : Int */;
val* var1155 /* : FlatString */;
static val* varonce1156;
val* var1157 /* : String */;
char* var1158 /* : NativeString */;
long var1159 /* : Int */;
val* var1160 /* : FlatString */;
val* var1161 /* : Array[Object] */;
long var1162 /* : Int */;
val* var1163 /* : NativeArray[Object] */;
val* var1164 /* : String */;
val* var1165 /* : String */;
static val* varonce1166;
val* var1167 /* : String */;
char* var1168 /* : NativeString */;
long var1169 /* : Int */;
val* var1170 /* : FlatString */;
static val* varonce1171;
val* var1172 /* : String */;
char* var1173 /* : NativeString */;
long var1174 /* : Int */;
val* var1175 /* : FlatString */;
val* var1176 /* : Array[Object] */;
long var1177 /* : Int */;
val* var1178 /* : NativeArray[Object] */;
val* var1179 /* : String */;
static val* varonce1180;
val* var1181 /* : String */;
char* var1182 /* : NativeString */;
long var1183 /* : Int */;
val* var1184 /* : FlatString */;
static val* varonce1185;
val* var1186 /* : String */;
char* var1187 /* : NativeString */;
long var1188 /* : Int */;
val* var1189 /* : FlatString */;
val* var1190 /* : Array[Object] */;
long var1191 /* : Int */;
val* var1192 /* : NativeArray[Object] */;
val* var1193 /* : String */;
val* var1194 /* : String */;
static val* varonce1195;
val* var1196 /* : String */;
char* var1197 /* : NativeString */;
long var1198 /* : Int */;
val* var1199 /* : FlatString */;
static val* varonce1200;
val* var1201 /* : String */;
char* var1202 /* : NativeString */;
long var1203 /* : Int */;
val* var1204 /* : FlatString */;
val* var1205 /* : Array[Object] */;
long var1206 /* : Int */;
val* var1207 /* : NativeArray[Object] */;
val* var1208 /* : String */;
static val* varonce1209;
val* var1210 /* : String */;
char* var1211 /* : NativeString */;
long var1212 /* : Int */;
val* var1213 /* : FlatString */;
val* var1214 /* : Array[Object] */;
long var1215 /* : Int */;
val* var1216 /* : NativeArray[Object] */;
val* var1217 /* : String */;
static val* varonce1218;
val* var1219 /* : String */;
char* var1220 /* : NativeString */;
long var1221 /* : Int */;
val* var1222 /* : FlatString */;
val* var1223 /* : RuntimeVariable */;
val* var_res1224 /* var res: RuntimeVariable */;
short int var1225 /* : Bool */;
static val* varonce1227;
val* var1228 /* : String */;
char* var1229 /* : NativeString */;
long var1230 /* : Int */;
val* var1231 /* : FlatString */;
long var1232 /* : Int */;
long var1234 /* : Int */;
static val* varonce1235;
val* var1236 /* : String */;
char* var1237 /* : NativeString */;
long var1238 /* : Int */;
val* var1239 /* : FlatString */;
val* var1240 /* : Array[Object] */;
long var1241 /* : Int */;
val* var1242 /* : NativeArray[Object] */;
val* var1243 /* : Object */;
val* var1244 /* : String */;
static val* varonce1245;
val* var1246 /* : String */;
char* var1247 /* : NativeString */;
long var1248 /* : Int */;
val* var1249 /* : FlatString */;
val* var1250 /* : Array[Object] */;
long var1251 /* : Int */;
val* var1252 /* : NativeArray[Object] */;
val* var1253 /* : String */;
static val* varonce1254;
val* var1255 /* : String */;
char* var1256 /* : NativeString */;
long var1257 /* : Int */;
val* var1258 /* : FlatString */;
static val* varonce1259;
val* var1260 /* : String */;
char* var1261 /* : NativeString */;
long var1262 /* : Int */;
val* var1263 /* : FlatString */;
val* var1264 /* : Array[Object] */;
long var1265 /* : Int */;
val* var1266 /* : NativeArray[Object] */;
val* var1267 /* : String */;
static val* varonce1268;
val* var1269 /* : String */;
char* var1270 /* : NativeString */;
long var1271 /* : Int */;
val* var1272 /* : FlatString */;
static val* varonce1273;
val* var1274 /* : String */;
char* var1275 /* : NativeString */;
long var1276 /* : Int */;
val* var1277 /* : FlatString */;
val* var1278 /* : Array[Object] */;
long var1279 /* : Int */;
val* var1280 /* : NativeArray[Object] */;
val* var1281 /* : String */;
static val* varonce1282;
val* var1283 /* : String */;
char* var1284 /* : NativeString */;
long var1285 /* : Int */;
val* var1286 /* : FlatString */;
var_mclass = p0;
{
{ /* Inline model#MClass#intro (var_mclass) on <var_mclass:MClass> */
var2 = var_mclass->attrs[COLOR_nit__model__MClass___intro].val; /* _intro on <var_mclass:MClass> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 423);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var) on <var:MClassDef> */
var5 = var->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var:MClassDef> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_mtype = var3;
{
var6 = nit___nit__MClass___nit__model_base__MEntity__c_name(var_mclass);
}
var_c_name = var6;
{
{ /* Inline separate_compiler#SeparateCompiler#method_tables (self) on <self:SeparateErasureCompiler> */
var9 = self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___method_tables].val; /* _method_tables on <self:SeparateErasureCompiler> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _method_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 856);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = ((val* (*)(val* self, val* p0))(var7->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var7, var_mclass) /* [] on <var7:Map[MClass, Array[nullable MPropDef]]>*/;
}
var_vft = var10;
{
{ /* Inline separate_compiler#SeparateCompiler#attr_tables (self) on <self:SeparateErasureCompiler> */
var13 = self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___attr_tables].val; /* _attr_tables on <self:SeparateErasureCompiler> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _attr_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 857);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = ((val* (*)(val* self, val* p0))(var11->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var11, var_mclass) /* [] on <var11:Map[MClass, Array[nullable MPropDef]]>*/;
}
var_attrs = var14;
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#class_tables (self) on <self:SeparateErasureCompiler> */
var17 = self->attrs[COLOR_nit__separate_erasure_compiler__SeparateErasureCompiler___class_tables].val; /* _class_tables on <self:SeparateErasureCompiler> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _class_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 416);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = ((val* (*)(val* self, val* p0))(var15->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var15, var_mclass) /* [] on <var15:Map[MClass, Array[nullable MClass]]>*/;
}
var_class_table = var18;
{
var19 = nit___nit__SeparateErasureCompiler___nit__abstract_compiler__AbstractCompiler__new_visitor(self);
}
var_v = var19;
{
{ /* Inline separate_compiler#SeparateCompiler#runtime_type_analysis (self) on <self:SeparateErasureCompiler> */
var22 = self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <self:SeparateErasureCompiler> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
var_rta = var20;
var23 = 0;
var_is_dead = var23;
var28 = !var_is_dead;
var_ = var28;
if (var28){
var29 = NULL;
if (var_rta == NULL) {
var30 = 0; /* is null */
} else {
var30 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_rta,var29) on <var_rta:nullable RapidTypeAnalysis> */
var_other = var29;
{
var33 = ((short int (*)(val* self, val* p0))(var_rta->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_rta, var_other) /* == on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)>*/;
}
var34 = !var33;
var31 = var34;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
var30 = var31;
}
var27 = var30;
} else {
var27 = var_;
}
var_35 = var27;
if (var27){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_classes (var_rta) on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
var38 = var_rta->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_classes].val; /* _live_classes on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_classes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 62);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
var39 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var36, var_mclass);
}
var40 = !var39;
var26 = var40;
} else {
var26 = var_35;
}
var_41 = var26;
if (var26){
{
var42 = nit__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
if (varonce) {
var43 = varonce;
} else {
var44 = "val*";
var45 = 4;
var46 = standard___standard__NativeString___to_s_with_length(var44, var45);
var43 = var46;
varonce = var43;
}
{
var47 = ((short int (*)(val* self, val* p0))(var42->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var42, var43) /* == on <var42:String>*/;
}
var25 = var47;
} else {
var25 = var_41;
}
var_48 = var25;
if (var25){
{
{ /* Inline model#MClass#name (var_mclass) on <var_mclass:MClass> */
var51 = var_mclass->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var_mclass:MClass> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
if (varonce52) {
var53 = varonce52;
} else {
var54 = "NativeArray";
var55 = 11;
var56 = standard___standard__NativeString___to_s_with_length(var54, var55);
var53 = var56;
varonce52 = var53;
}
{
{ /* Inline kernel#Object#!= (var49,var53) on <var49:String> */
var_other = var53;
{
var59 = ((short int (*)(val* self, val* p0))(var49->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var49, var_other) /* == on <var49:String>*/;
}
var60 = !var59;
var57 = var60;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
var24 = var57;
} else {
var24 = var_48;
}
if (var24){
var61 = 1;
var_is_dead = var61;
} else {
}
if (varonce62) {
var63 = varonce62;
} else {
var64 = "/* runtime class ";
var65 = 17;
var66 = standard___standard__NativeString___to_s_with_length(var64, var65);
var63 = var66;
varonce62 = var63;
}
if (varonce67) {
var68 = varonce67;
} else {
var69 = " */";
var70 = 3;
var71 = standard___standard__NativeString___to_s_with_length(var69, var70);
var68 = var71;
varonce67 = var68;
}
var72 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var72 = array_instance Array[Object] */
var73 = 3;
var74 = NEW_standard__NativeArray(var73, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var74)->values[0] = (val*) var63;
((struct instance_standard__NativeArray*)var74)->values[1] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var74)->values[2] = (val*) var68;
{
((void (*)(val* self, val* p0, long p1))(var72->class->vft[COLOR_standard__array__Array__with_native]))(var72, var74, var73) /* with_native on <var72:Array[Object]>*/;
}
}
{
var75 = ((val* (*)(val* self))(var72->class->vft[COLOR_standard__string__Object__to_s]))(var72) /* to_s on <var72:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var75); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce76) {
var77 = varonce76;
} else {
var78 = "class_";
var79 = 6;
var80 = standard___standard__NativeString___to_s_with_length(var78, var79);
var77 = var80;
varonce76 = var77;
}
var81 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var81 = array_instance Array[Object] */
var82 = 2;
var83 = NEW_standard__NativeArray(var82, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var83)->values[0] = (val*) var77;
((struct instance_standard__NativeArray*)var83)->values[1] = (val*) var_c_name;
{
((void (*)(val* self, val* p0, long p1))(var81->class->vft[COLOR_standard__array__Array__with_native]))(var81, var83, var82) /* with_native on <var81:Array[Object]>*/;
}
}
{
var84 = ((val* (*)(val* self))(var81->class->vft[COLOR_standard__string__Object__to_s]))(var81) /* to_s on <var81:Array[Object]>*/;
}
if (varonce85) {
var86 = varonce85;
} else {
var87 = "extern const struct class class_";
var88 = 32;
var89 = standard___standard__NativeString___to_s_with_length(var87, var88);
var86 = var89;
varonce85 = var86;
}
if (varonce90) {
var91 = varonce90;
} else {
var92 = ";";
var93 = 1;
var94 = standard___standard__NativeString___to_s_with_length(var92, var93);
var91 = var94;
varonce90 = var91;
}
var95 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var95 = array_instance Array[Object] */
var96 = 3;
var97 = NEW_standard__NativeArray(var96, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var97)->values[0] = (val*) var86;
((struct instance_standard__NativeArray*)var97)->values[1] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var97)->values[2] = (val*) var91;
{
((void (*)(val* self, val* p0, long p1))(var95->class->vft[COLOR_standard__array__Array__with_native]))(var95, var97, var96) /* with_native on <var95:Array[Object]>*/;
}
}
{
var98 = ((val* (*)(val* self))(var95->class->vft[COLOR_standard__string__Object__to_s]))(var95) /* to_s on <var95:Array[Object]>*/;
}
{
nit___nit__AbstractCompiler___provide_declaration(self, var84, var98); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateErasureCompiler>*/
}
if (varonce99) {
var100 = varonce99;
} else {
var101 = "extern const struct type_table type_table_";
var102 = 42;
var103 = standard___standard__NativeString___to_s_with_length(var101, var102);
var100 = var103;
varonce99 = var100;
}
if (varonce104) {
var105 = varonce104;
} else {
var106 = ";";
var107 = 1;
var108 = standard___standard__NativeString___to_s_with_length(var106, var107);
var105 = var108;
varonce104 = var105;
}
var109 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var109 = array_instance Array[Object] */
var110 = 3;
var111 = NEW_standard__NativeArray(var110, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var111)->values[0] = (val*) var100;
((struct instance_standard__NativeArray*)var111)->values[1] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var111)->values[2] = (val*) var105;
{
((void (*)(val* self, val* p0, long p1))(var109->class->vft[COLOR_standard__array__Array__with_native]))(var109, var111, var110) /* with_native on <var109:Array[Object]>*/;
}
}
{
var112 = ((val* (*)(val* self))(var109->class->vft[COLOR_standard__string__Object__to_s]))(var109) /* to_s on <var109:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var112); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce113) {
var114 = varonce113;
} else {
var115 = "const struct class class_";
var116 = 25;
var117 = standard___standard__NativeString___to_s_with_length(var115, var116);
var114 = var117;
varonce113 = var114;
}
if (varonce118) {
var119 = varonce118;
} else {
var120 = " = {";
var121 = 4;
var122 = standard___standard__NativeString___to_s_with_length(var120, var121);
var119 = var122;
varonce118 = var119;
}
var123 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var123 = array_instance Array[Object] */
var124 = 3;
var125 = NEW_standard__NativeArray(var124, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var125)->values[0] = (val*) var114;
((struct instance_standard__NativeArray*)var125)->values[1] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var125)->values[2] = (val*) var119;
{
((void (*)(val* self, val* p0, long p1))(var123->class->vft[COLOR_standard__array__Array__with_native]))(var123, var125, var124) /* with_native on <var123:Array[Object]>*/;
}
}
{
var126 = ((val* (*)(val* self))(var123->class->vft[COLOR_standard__string__Object__to_s]))(var123) /* to_s on <var123:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var126); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#class_ids (self) on <self:SeparateErasureCompiler> */
var129 = self->attrs[COLOR_nit__separate_erasure_compiler__SeparateErasureCompiler___class_ids].val; /* _class_ids on <self:SeparateErasureCompiler> */
if (unlikely(var129 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _class_ids");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 79);
show_backtrace(1);
}
var127 = var129;
RET_LABEL128:(void)0;
}
}
{
var130 = ((val* (*)(val* self, val* p0))(var127->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var127, var_mclass) /* [] on <var127:Map[MClass, Int]>*/;
}
if (varonce131) {
var132 = varonce131;
} else {
var133 = ",";
var134 = 1;
var135 = standard___standard__NativeString___to_s_with_length(var133, var134);
var132 = var135;
varonce131 = var132;
}
var136 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var136 = array_instance Array[Object] */
var137 = 2;
var138 = NEW_standard__NativeArray(var137, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var138)->values[0] = (val*) var130;
((struct instance_standard__NativeArray*)var138)->values[1] = (val*) var132;
{
((void (*)(val* self, val* p0, long p1))(var136->class->vft[COLOR_standard__array__Array__with_native]))(var136, var138, var137) /* with_native on <var136:Array[Object]>*/;
}
}
{
var139 = ((val* (*)(val* self))(var136->class->vft[COLOR_standard__string__Object__to_s]))(var136) /* to_s on <var136:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var139); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce140) {
var141 = varonce140;
} else {
var142 = "\"";
var143 = 1;
var144 = standard___standard__NativeString___to_s_with_length(var142, var143);
var141 = var144;
varonce140 = var141;
}
{
{ /* Inline model#MClass#name (var_mclass) on <var_mclass:MClass> */
var147 = var_mclass->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var_mclass:MClass> */
if (unlikely(var147 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var145 = var147;
RET_LABEL146:(void)0;
}
}
if (varonce148) {
var149 = varonce148;
} else {
var150 = "\", /* class_name_string */";
var151 = 26;
var152 = standard___standard__NativeString___to_s_with_length(var150, var151);
var149 = var152;
varonce148 = var149;
}
var153 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var153 = array_instance Array[Object] */
var154 = 3;
var155 = NEW_standard__NativeArray(var154, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var155)->values[0] = (val*) var141;
((struct instance_standard__NativeArray*)var155)->values[1] = (val*) var145;
((struct instance_standard__NativeArray*)var155)->values[2] = (val*) var149;
{
((void (*)(val* self, val* p0, long p1))(var153->class->vft[COLOR_standard__array__Array__with_native]))(var153, var155, var154) /* with_native on <var153:Array[Object]>*/;
}
}
{
var156 = ((val* (*)(val* self))(var153->class->vft[COLOR_standard__string__Object__to_s]))(var153) /* to_s on <var153:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var156); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
var157 = nit___nit__SeparateCompiler___box_kind_of(self, var_mclass);
}
if (varonce158) {
var159 = varonce158;
} else {
var160 = ", /* box_kind */";
var161 = 16;
var162 = standard___standard__NativeString___to_s_with_length(var160, var161);
var159 = var162;
varonce158 = var159;
}
var163 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var163 = array_instance Array[Object] */
var164 = 2;
var165 = NEW_standard__NativeArray(var164, &type_standard__NativeArray__standard__Object);
var166 = BOX_standard__Int(var157); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var165)->values[0] = (val*) var166;
((struct instance_standard__NativeArray*)var165)->values[1] = (val*) var159;
{
((void (*)(val* self, val* p0, long p1))(var163->class->vft[COLOR_standard__array__Array__with_native]))(var163, var165, var164) /* with_native on <var163:Array[Object]>*/;
}
}
{
var167 = ((val* (*)(val* self))(var163->class->vft[COLOR_standard__string__Object__to_s]))(var163) /* to_s on <var163:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var167); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#class_colors (self) on <self:SeparateErasureCompiler> */
var170 = self->attrs[COLOR_nit__separate_erasure_compiler__SeparateErasureCompiler___class_colors].val; /* _class_colors on <self:SeparateErasureCompiler> */
if (unlikely(var170 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _class_colors");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 80);
show_backtrace(1);
}
var168 = var170;
RET_LABEL169:(void)0;
}
}
{
var171 = ((val* (*)(val* self, val* p0))(var168->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var168, var_mclass) /* [] on <var168:Map[MClass, Int]>*/;
}
if (varonce172) {
var173 = varonce172;
} else {
var174 = ",";
var175 = 1;
var176 = standard___standard__NativeString___to_s_with_length(var174, var175);
var173 = var176;
varonce172 = var173;
}
var177 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var177 = array_instance Array[Object] */
var178 = 2;
var179 = NEW_standard__NativeArray(var178, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var179)->values[0] = (val*) var171;
((struct instance_standard__NativeArray*)var179)->values[1] = (val*) var173;
{
((void (*)(val* self, val* p0, long p1))(var177->class->vft[COLOR_standard__array__Array__with_native]))(var177, var179, var178) /* with_native on <var177:Array[Object]>*/;
}
}
{
var180 = ((val* (*)(val* self))(var177->class->vft[COLOR_standard__string__Object__to_s]))(var177) /* to_s on <var177:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var180); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
var181 = !var_is_dead;
if (var181){
{
var182 = nit___nit__SeparateErasureCompiler___build_class_vts_table(self, var_mclass);
}
if (var182){
if (varonce183) {
var184 = varonce183;
} else {
var185 = "vts_table_";
var186 = 10;
var187 = standard___standard__NativeString___to_s_with_length(var185, var186);
var184 = var187;
varonce183 = var184;
}
var188 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var188 = array_instance Array[Object] */
var189 = 2;
var190 = NEW_standard__NativeArray(var189, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var190)->values[0] = (val*) var184;
((struct instance_standard__NativeArray*)var190)->values[1] = (val*) var_c_name;
{
((void (*)(val* self, val* p0, long p1))(var188->class->vft[COLOR_standard__array__Array__with_native]))(var188, var190, var189) /* with_native on <var188:Array[Object]>*/;
}
}
{
var191 = ((val* (*)(val* self))(var188->class->vft[COLOR_standard__string__Object__to_s]))(var188) /* to_s on <var188:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(var_v, var191); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (varonce192) {
var193 = varonce192;
} else {
var194 = "&vts_table_";
var195 = 11;
var196 = standard___standard__NativeString___to_s_with_length(var194, var195);
var193 = var196;
varonce192 = var193;
}
if (varonce197) {
var198 = varonce197;
} else {
var199 = ",";
var200 = 1;
var201 = standard___standard__NativeString___to_s_with_length(var199, var200);
var198 = var201;
varonce197 = var198;
}
var202 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var202 = array_instance Array[Object] */
var203 = 3;
var204 = NEW_standard__NativeArray(var203, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var204)->values[0] = (val*) var193;
((struct instance_standard__NativeArray*)var204)->values[1] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var204)->values[2] = (val*) var198;
{
((void (*)(val* self, val* p0, long p1))(var202->class->vft[COLOR_standard__array__Array__with_native]))(var202, var204, var203) /* with_native on <var202:Array[Object]>*/;
}
}
{
var205 = ((val* (*)(val* self))(var202->class->vft[COLOR_standard__string__Object__to_s]))(var202) /* to_s on <var202:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var205); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (varonce206) {
var207 = varonce206;
} else {
var208 = "NULL,";
var209 = 5;
var210 = standard___standard__NativeString___to_s_with_length(var208, var209);
var207 = var210;
varonce206 = var207;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var207); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
if (varonce211) {
var212 = varonce211;
} else {
var213 = "&type_table_";
var214 = 12;
var215 = standard___standard__NativeString___to_s_with_length(var213, var214);
var212 = var215;
varonce211 = var212;
}
if (varonce216) {
var217 = varonce216;
} else {
var218 = ",";
var219 = 1;
var220 = standard___standard__NativeString___to_s_with_length(var218, var219);
var217 = var220;
varonce216 = var217;
}
var221 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var221 = array_instance Array[Object] */
var222 = 3;
var223 = NEW_standard__NativeArray(var222, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var223)->values[0] = (val*) var212;
((struct instance_standard__NativeArray*)var223)->values[1] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var223)->values[2] = (val*) var217;
{
((void (*)(val* self, val* p0, long p1))(var221->class->vft[COLOR_standard__array__Array__with_native]))(var221, var223, var222) /* with_native on <var221:Array[Object]>*/;
}
}
{
var224 = ((val* (*)(val* self))(var221->class->vft[COLOR_standard__string__Object__to_s]))(var221) /* to_s on <var221:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var224); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce225) {
var226 = varonce225;
} else {
var227 = "{";
var228 = 1;
var229 = standard___standard__NativeString___to_s_with_length(var227, var228);
var226 = var229;
varonce225 = var226;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var226); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
var230 = 0;
var_i = var230;
{
{ /* Inline array#AbstractArrayRead#length (var_vft) on <var_vft:Array[nullable MPropDef]> */
var233 = var_vft->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_vft:Array[nullable MPropDef]> */
var231 = var233;
RET_LABEL232:(void)0;
}
}
var_234 = var231;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_234) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_234:Int> isa OTHER */
/* <var_234:Int> isa OTHER */
var237 = 1; /* easy <var_234:Int> isa OTHER*/
if (unlikely(!var237)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var238 = var_i < var_234;
var235 = var238;
goto RET_LABEL236;
RET_LABEL236:(void)0;
}
}
if (var235){
{
var239 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_vft, var_i);
}
var_mpropdef = var239;
var240 = NULL;
if (var_mpropdef == NULL) {
var241 = 1; /* is null */
} else {
var241 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mpropdef,var240) on <var_mpropdef:nullable MPropDef> */
var_other244 = var240;
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other244) on <var_mpropdef:nullable MPropDef(MPropDef)> */
var247 = var_mpropdef == var_other244;
var245 = var247;
goto RET_LABEL246;
RET_LABEL246:(void)0;
}
}
var242 = var245;
goto RET_LABEL243;
RET_LABEL243:(void)0;
}
var241 = var242;
}
if (var241){
if (varonce248) {
var249 = varonce248;
} else {
var250 = "NULL, /* empty */";
var251 = 17;
var252 = standard___standard__NativeString___to_s_with_length(var250, var251);
var249 = var252;
varonce248 = var249;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var249); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
/* <var_mpropdef:nullable MPropDef(MPropDef)> isa MMethodDef */
cltype254 = type_nit__MMethodDef.color;
idtype255 = type_nit__MMethodDef.id;
if(cltype254 >= var_mpropdef->type->table_size) {
var253 = 0;
} else {
var253 = var_mpropdef->type->type_table[cltype254] == idtype255;
}
if (unlikely(!var253)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 233);
show_backtrace(1);
}
var257 = NULL;
if (var_rta == NULL) {
var258 = 0; /* is null */
} else {
var258 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_rta,var257) on <var_rta:nullable RapidTypeAnalysis> */
var_other = var257;
{
var261 = ((short int (*)(val* self, val* p0))(var_rta->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_rta, var_other) /* == on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)>*/;
}
var262 = !var261;
var259 = var262;
goto RET_LABEL260;
RET_LABEL260:(void)0;
}
var258 = var259;
}
var_263 = var258;
if (var258){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_methoddefs (var_rta) on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
var266 = var_rta->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_methoddefs].val; /* _live_methoddefs on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
if (unlikely(var266 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methoddefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 72);
show_backtrace(1);
}
var264 = var266;
RET_LABEL265:(void)0;
}
}
{
var267 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var264, var_mpropdef);
}
var268 = !var267;
var256 = var268;
} else {
var256 = var_263;
}
if (var256){
if (varonce269) {
var270 = varonce269;
} else {
var271 = "NULL, /* DEAD ";
var272 = 14;
var273 = standard___standard__NativeString___to_s_with_length(var271, var272);
var270 = var273;
varonce269 = var270;
}
{
{ /* Inline model#MClass#intro_mmodule (var_mclass) on <var_mclass:MClass> */
var276 = var_mclass->attrs[COLOR_nit__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_mclass:MClass> */
if (unlikely(var276 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 343);
show_backtrace(1);
}
var274 = var276;
RET_LABEL275:(void)0;
}
}
if (varonce277) {
var278 = varonce277;
} else {
var279 = ":";
var280 = 1;
var281 = standard___standard__NativeString___to_s_with_length(var279, var280);
var278 = var281;
varonce277 = var278;
}
if (varonce282) {
var283 = varonce282;
} else {
var284 = ":";
var285 = 1;
var286 = standard___standard__NativeString___to_s_with_length(var284, var285);
var283 = var286;
varonce282 = var283;
}
if (varonce287) {
var288 = varonce287;
} else {
var289 = " */";
var290 = 3;
var291 = standard___standard__NativeString___to_s_with_length(var289, var290);
var288 = var291;
varonce287 = var288;
}
var292 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var292 = array_instance Array[Object] */
var293 = 7;
var294 = NEW_standard__NativeArray(var293, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var294)->values[0] = (val*) var270;
((struct instance_standard__NativeArray*)var294)->values[1] = (val*) var274;
((struct instance_standard__NativeArray*)var294)->values[2] = (val*) var278;
((struct instance_standard__NativeArray*)var294)->values[3] = (val*) var_mclass;
((struct instance_standard__NativeArray*)var294)->values[4] = (val*) var283;
((struct instance_standard__NativeArray*)var294)->values[5] = (val*) var_mpropdef;
((struct instance_standard__NativeArray*)var294)->values[6] = (val*) var288;
{
((void (*)(val* self, val* p0, long p1))(var292->class->vft[COLOR_standard__array__Array__with_native]))(var292, var294, var293) /* with_native on <var292:Array[Object]>*/;
}
}
{
var295 = ((val* (*)(val* self))(var292->class->vft[COLOR_standard__string__Object__to_s]))(var292) /* to_s on <var292:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var295); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
goto BREAK_label;
} else {
}
{
var296 = nit__separate_compiler___MMethodDef___virtual_runtime_function(var_mpropdef);
}
var_rf = var296;
{
var297 = nit___nit__AbstractRuntimeFunction___c_name(var_rf);
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(var_v, var297); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (varonce298) {
var299 = varonce298;
} else {
var300 = "(nitmethod_t)";
var301 = 13;
var302 = standard___standard__NativeString___to_s_with_length(var300, var301);
var299 = var302;
varonce298 = var299;
}
{
var303 = nit___nit__AbstractRuntimeFunction___c_name(var_rf);
}
if (varonce304) {
var305 = varonce304;
} else {
var306 = ", /* pointer to ";
var307 = 16;
var308 = standard___standard__NativeString___to_s_with_length(var306, var307);
var305 = var308;
varonce304 = var305;
}
{
var309 = nit___nit__MPropDef___nit__model_base__MEntity__full_name(var_mpropdef);
}
if (varonce310) {
var311 = varonce310;
} else {
var312 = " */";
var313 = 3;
var314 = standard___standard__NativeString___to_s_with_length(var312, var313);
var311 = var314;
varonce310 = var311;
}
var315 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var315 = array_instance Array[Object] */
var316 = 5;
var317 = NEW_standard__NativeArray(var316, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var317)->values[0] = (val*) var299;
((struct instance_standard__NativeArray*)var317)->values[1] = (val*) var303;
((struct instance_standard__NativeArray*)var317)->values[2] = (val*) var305;
((struct instance_standard__NativeArray*)var317)->values[3] = (val*) var309;
((struct instance_standard__NativeArray*)var317)->values[4] = (val*) var311;
{
((void (*)(val* self, val* p0, long p1))(var315->class->vft[COLOR_standard__array__Array__with_native]))(var315, var317, var316) /* with_native on <var315:Array[Object]>*/;
}
}
{
var318 = ((val* (*)(val* self))(var315->class->vft[COLOR_standard__string__Object__to_s]))(var315) /* to_s on <var315:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var318); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
BREAK_label: (void)0;
var319 = 1;
{
var320 = standard___standard__Int___Discrete__successor(var_i, var319);
}
var_i = var320;
} else {
goto BREAK_label321;
}
}
BREAK_label321: (void)0;
if (varonce322) {
var323 = varonce322;
} else {
var324 = "}";
var325 = 1;
var326 = standard___standard__NativeString___to_s_with_length(var324, var325);
var323 = var326;
varonce322 = var323;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var323); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
}
if (varonce327) {
var328 = varonce327;
} else {
var329 = "};";
var330 = 2;
var331 = standard___standard__NativeString___to_s_with_length(var329, var330);
var328 = var331;
varonce327 = var328;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var328); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce332) {
var333 = varonce332;
} else {
var334 = "const struct type_table type_table_";
var335 = 35;
var336 = standard___standard__NativeString___to_s_with_length(var334, var335);
var333 = var336;
varonce332 = var333;
}
if (varonce337) {
var338 = varonce337;
} else {
var339 = " = {";
var340 = 4;
var341 = standard___standard__NativeString___to_s_with_length(var339, var340);
var338 = var341;
varonce337 = var338;
}
var342 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var342 = array_instance Array[Object] */
var343 = 3;
var344 = NEW_standard__NativeArray(var343, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var344)->values[0] = (val*) var333;
((struct instance_standard__NativeArray*)var344)->values[1] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var344)->values[2] = (val*) var338;
{
((void (*)(val* self, val* p0, long p1))(var342->class->vft[COLOR_standard__array__Array__with_native]))(var342, var344, var343) /* with_native on <var342:Array[Object]>*/;
}
}
{
var345 = ((val* (*)(val* self))(var342->class->vft[COLOR_standard__string__Object__to_s]))(var342) /* to_s on <var342:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var345); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
{ /* Inline array#AbstractArrayRead#length (var_class_table) on <var_class_table:Array[nullable MClass]> */
var348 = var_class_table->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_class_table:Array[nullable MClass]> */
var346 = var348;
RET_LABEL347:(void)0;
}
}
if (varonce349) {
var350 = varonce349;
} else {
var351 = ",";
var352 = 1;
var353 = standard___standard__NativeString___to_s_with_length(var351, var352);
var350 = var353;
varonce349 = var350;
}
var354 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var354 = array_instance Array[Object] */
var355 = 2;
var356 = NEW_standard__NativeArray(var355, &type_standard__NativeArray__standard__Object);
var357 = BOX_standard__Int(var346); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var356)->values[0] = (val*) var357;
((struct instance_standard__NativeArray*)var356)->values[1] = (val*) var350;
{
((void (*)(val* self, val* p0, long p1))(var354->class->vft[COLOR_standard__array__Array__with_native]))(var354, var356, var355) /* with_native on <var354:Array[Object]>*/;
}
}
{
var358 = ((val* (*)(val* self))(var354->class->vft[COLOR_standard__string__Object__to_s]))(var354) /* to_s on <var354:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var358); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce359) {
var360 = varonce359;
} else {
var361 = "{";
var362 = 1;
var363 = standard___standard__NativeString___to_s_with_length(var361, var362);
var360 = var363;
varonce359 = var360;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var360); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
var_364 = var_class_table;
{
var365 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_364);
}
var_366 = var365;
for(;;) {
{
var367 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_366);
}
if (var367){
{
var368 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_366);
}
var_msuper = var368;
var369 = NULL;
if (var_msuper == NULL) {
var370 = 1; /* is null */
} else {
var370 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_msuper,var369) on <var_msuper:nullable MClass> */
var_other244 = var369;
{
{ /* Inline kernel#Object#is_same_instance (var_msuper,var_other244) on <var_msuper:nullable MClass(MClass)> */
var375 = var_msuper == var_other244;
var373 = var375;
goto RET_LABEL374;
RET_LABEL374:(void)0;
}
}
var371 = var373;
goto RET_LABEL372;
RET_LABEL372:(void)0;
}
var370 = var371;
}
if (var370){
if (varonce376) {
var377 = varonce376;
} else {
var378 = "-1, /* empty */";
var379 = 15;
var380 = standard___standard__NativeString___to_s_with_length(var378, var379);
var377 = var380;
varonce376 = var377;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var377); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#class_ids (self) on <self:SeparateErasureCompiler> */
var383 = self->attrs[COLOR_nit__separate_erasure_compiler__SeparateErasureCompiler___class_ids].val; /* _class_ids on <self:SeparateErasureCompiler> */
if (unlikely(var383 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _class_ids");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 79);
show_backtrace(1);
}
var381 = var383;
RET_LABEL382:(void)0;
}
}
{
var384 = ((val* (*)(val* self, val* p0))(var381->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var381, var_msuper) /* [] on <var381:Map[MClass, Int]>*/;
}
if (varonce385) {
var386 = varonce385;
} else {
var387 = ", /* ";
var388 = 5;
var389 = standard___standard__NativeString___to_s_with_length(var387, var388);
var386 = var389;
varonce385 = var386;
}
if (varonce390) {
var391 = varonce390;
} else {
var392 = " */";
var393 = 3;
var394 = standard___standard__NativeString___to_s_with_length(var392, var393);
var391 = var394;
varonce390 = var391;
}
var395 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var395 = array_instance Array[Object] */
var396 = 4;
var397 = NEW_standard__NativeArray(var396, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var397)->values[0] = (val*) var384;
((struct instance_standard__NativeArray*)var397)->values[1] = (val*) var386;
((struct instance_standard__NativeArray*)var397)->values[2] = (val*) var_msuper;
((struct instance_standard__NativeArray*)var397)->values[3] = (val*) var391;
{
((void (*)(val* self, val* p0, long p1))(var395->class->vft[COLOR_standard__array__Array__with_native]))(var395, var397, var396) /* with_native on <var395:Array[Object]>*/;
}
}
{
var398 = ((val* (*)(val* self))(var395->class->vft[COLOR_standard__string__Object__to_s]))(var395) /* to_s on <var395:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var398); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_366); /* Direct call array#ArrayIterator#next on <var_366:ArrayIterator[nullable MClass]>*/
}
} else {
goto BREAK_label399;
}
}
BREAK_label399: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_366) on <var_366:ArrayIterator[nullable MClass]> */
RET_LABEL400:(void)0;
}
}
if (varonce401) {
var402 = varonce401;
} else {
var403 = "}";
var404 = 1;
var405 = standard___standard__NativeString___to_s_with_length(var403, var404);
var402 = var405;
varonce401 = var402;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var402); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce406) {
var407 = varonce406;
} else {
var408 = "};";
var409 = 2;
var410 = standard___standard__NativeString___to_s_with_length(var408, var409);
var407 = var410;
varonce406 = var407;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var407); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
var412 = nit__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
if (varonce413) {
var414 = varonce413;
} else {
var415 = "val*";
var416 = 4;
var417 = standard___standard__NativeString___to_s_with_length(var415, var416);
var414 = var417;
varonce413 = var414;
}
{
{ /* Inline kernel#Object#!= (var412,var414) on <var412:String> */
var_other = var414;
{
var420 = ((short int (*)(val* self, val* p0))(var412->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var412, var_other) /* == on <var412:String>*/;
}
var421 = !var420;
var418 = var421;
goto RET_LABEL419;
RET_LABEL419:(void)0;
}
}
var_422 = var418;
if (var418){
var411 = var_422;
} else {
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var425 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var425 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var423 = var425;
RET_LABEL424:(void)0;
}
}
{
{ /* Inline model#MClass#name (var423) on <var423:MClass> */
var428 = var423->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var423:MClass> */
if (unlikely(var428 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var426 = var428;
RET_LABEL427:(void)0;
}
}
if (varonce429) {
var430 = varonce429;
} else {
var431 = "Pointer";
var432 = 7;
var433 = standard___standard__NativeString___to_s_with_length(var431, var432);
var430 = var433;
varonce429 = var430;
}
{
var434 = ((short int (*)(val* self, val* p0))(var426->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var426, var430) /* == on <var426:String>*/;
}
var411 = var434;
}
if (var411){
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var437 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var437 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var435 = var437;
RET_LABEL436:(void)0;
}
}
if (varonce438) {
var439 = varonce438;
} else {
var440 = "struct instance_";
var441 = 16;
var442 = standard___standard__NativeString___to_s_with_length(var440, var441);
var439 = var442;
varonce438 = var439;
}
if (varonce443) {
var444 = varonce443;
} else {
var445 = " {";
var446 = 2;
var447 = standard___standard__NativeString___to_s_with_length(var445, var446);
var444 = var447;
varonce443 = var444;
}
var448 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var448 = array_instance Array[Object] */
var449 = 3;
var450 = NEW_standard__NativeArray(var449, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var450)->values[0] = (val*) var439;
((struct instance_standard__NativeArray*)var450)->values[1] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var450)->values[2] = (val*) var444;
{
((void (*)(val* self, val* p0, long p1))(var448->class->vft[COLOR_standard__array__Array__with_native]))(var448, var450, var449) /* with_native on <var448:Array[Object]>*/;
}
}
{
var451 = ((val* (*)(val* self))(var448->class->vft[COLOR_standard__string__Object__to_s]))(var448) /* to_s on <var448:Array[Object]>*/;
}
{
nit___nit__CodeWriter___add_decl(var435, var451); /* Direct call abstract_compiler#CodeWriter#add_decl on <var435:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var454 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var454 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var452 = var454;
RET_LABEL453:(void)0;
}
}
if (varonce455) {
var456 = varonce455;
} else {
var457 = "const struct class *class;";
var458 = 26;
var459 = standard___standard__NativeString___to_s_with_length(var457, var458);
var456 = var459;
varonce455 = var456;
}
{
nit___nit__CodeWriter___add_decl(var452, var456); /* Direct call abstract_compiler#CodeWriter#add_decl on <var452:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var462 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var462 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var460 = var462;
RET_LABEL461:(void)0;
}
}
{
var463 = nit__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
if (varonce464) {
var465 = varonce464;
} else {
var466 = " value;";
var467 = 7;
var468 = standard___standard__NativeString___to_s_with_length(var466, var467);
var465 = var468;
varonce464 = var465;
}
var469 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var469 = array_instance Array[Object] */
var470 = 2;
var471 = NEW_standard__NativeArray(var470, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var471)->values[0] = (val*) var463;
((struct instance_standard__NativeArray*)var471)->values[1] = (val*) var465;
{
((void (*)(val* self, val* p0, long p1))(var469->class->vft[COLOR_standard__array__Array__with_native]))(var469, var471, var470) /* with_native on <var469:Array[Object]>*/;
}
}
{
var472 = ((val* (*)(val* self))(var469->class->vft[COLOR_standard__string__Object__to_s]))(var469) /* to_s on <var469:Array[Object]>*/;
}
{
nit___nit__CodeWriter___add_decl(var460, var472); /* Direct call abstract_compiler#CodeWriter#add_decl on <var460:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var475 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var475 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var473 = var475;
RET_LABEL474:(void)0;
}
}
if (varonce476) {
var477 = varonce476;
} else {
var478 = "};";
var479 = 2;
var480 = standard___standard__NativeString___to_s_with_length(var478, var479);
var477 = var480;
varonce476 = var477;
}
{
nit___nit__CodeWriter___add_decl(var473, var477); /* Direct call abstract_compiler#CodeWriter#add_decl on <var473:CodeWriter>*/
}
if (varonce481) {
var482 = varonce481;
} else {
var483 = "BOX_";
var484 = 4;
var485 = standard___standard__NativeString___to_s_with_length(var483, var484);
var482 = var485;
varonce481 = var482;
}
var486 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var486 = array_instance Array[Object] */
var487 = 2;
var488 = NEW_standard__NativeArray(var487, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var488)->values[0] = (val*) var482;
((struct instance_standard__NativeArray*)var488)->values[1] = (val*) var_c_name;
{
((void (*)(val* self, val* p0, long p1))(var486->class->vft[COLOR_standard__array__Array__with_native]))(var486, var488, var487) /* with_native on <var486:Array[Object]>*/;
}
}
{
var489 = ((val* (*)(val* self))(var486->class->vft[COLOR_standard__string__Object__to_s]))(var486) /* to_s on <var486:Array[Object]>*/;
}
if (varonce490) {
var491 = varonce490;
} else {
var492 = "val* BOX_";
var493 = 9;
var494 = standard___standard__NativeString___to_s_with_length(var492, var493);
var491 = var494;
varonce490 = var491;
}
if (varonce495) {
var496 = varonce495;
} else {
var497 = "(";
var498 = 1;
var499 = standard___standard__NativeString___to_s_with_length(var497, var498);
var496 = var499;
varonce495 = var496;
}
{
var500 = nit__abstract_compiler___MClassType___MType__ctype_extern(var_mtype);
}
if (varonce501) {
var502 = varonce501;
} else {
var503 = ");";
var504 = 2;
var505 = standard___standard__NativeString___to_s_with_length(var503, var504);
var502 = var505;
varonce501 = var502;
}
var506 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var506 = array_instance Array[Object] */
var507 = 5;
var508 = NEW_standard__NativeArray(var507, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var508)->values[0] = (val*) var491;
((struct instance_standard__NativeArray*)var508)->values[1] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var508)->values[2] = (val*) var496;
((struct instance_standard__NativeArray*)var508)->values[3] = (val*) var500;
((struct instance_standard__NativeArray*)var508)->values[4] = (val*) var502;
{
((void (*)(val* self, val* p0, long p1))(var506->class->vft[COLOR_standard__array__Array__with_native]))(var506, var508, var507) /* with_native on <var506:Array[Object]>*/;
}
}
{
var509 = ((val* (*)(val* self))(var506->class->vft[COLOR_standard__string__Object__to_s]))(var506) /* to_s on <var506:Array[Object]>*/;
}
{
nit___nit__AbstractCompiler___provide_declaration(self, var489, var509); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateErasureCompiler>*/
}
if (varonce510) {
var511 = varonce510;
} else {
var512 = "/* allocate ";
var513 = 12;
var514 = standard___standard__NativeString___to_s_with_length(var512, var513);
var511 = var514;
varonce510 = var511;
}
if (varonce515) {
var516 = varonce515;
} else {
var517 = " */";
var518 = 3;
var519 = standard___standard__NativeString___to_s_with_length(var517, var518);
var516 = var519;
varonce515 = var516;
}
var520 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var520 = array_instance Array[Object] */
var521 = 3;
var522 = NEW_standard__NativeArray(var521, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var522)->values[0] = (val*) var511;
((struct instance_standard__NativeArray*)var522)->values[1] = (val*) var_mtype;
((struct instance_standard__NativeArray*)var522)->values[2] = (val*) var516;
{
((void (*)(val* self, val* p0, long p1))(var520->class->vft[COLOR_standard__array__Array__with_native]))(var520, var522, var521) /* with_native on <var520:Array[Object]>*/;
}
}
{
var523 = ((val* (*)(val* self))(var520->class->vft[COLOR_standard__string__Object__to_s]))(var520) /* to_s on <var520:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var523); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce524) {
var525 = varonce524;
} else {
var526 = "val* BOX_";
var527 = 9;
var528 = standard___standard__NativeString___to_s_with_length(var526, var527);
var525 = var528;
varonce524 = var525;
}
{
var529 = ((val* (*)(val* self))(var_mtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_mtype) /* c_name on <var_mtype:MClassType>*/;
}
if (varonce530) {
var531 = varonce530;
} else {
var532 = "(";
var533 = 1;
var534 = standard___standard__NativeString___to_s_with_length(var532, var533);
var531 = var534;
varonce530 = var531;
}
{
var535 = nit__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
if (varonce536) {
var537 = varonce536;
} else {
var538 = " value) {";
var539 = 9;
var540 = standard___standard__NativeString___to_s_with_length(var538, var539);
var537 = var540;
varonce536 = var537;
}
var541 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var541 = array_instance Array[Object] */
var542 = 5;
var543 = NEW_standard__NativeArray(var542, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var543)->values[0] = (val*) var525;
((struct instance_standard__NativeArray*)var543)->values[1] = (val*) var529;
((struct instance_standard__NativeArray*)var543)->values[2] = (val*) var531;
((struct instance_standard__NativeArray*)var543)->values[3] = (val*) var535;
((struct instance_standard__NativeArray*)var543)->values[4] = (val*) var537;
{
((void (*)(val* self, val* p0, long p1))(var541->class->vft[COLOR_standard__array__Array__with_native]))(var541, var543, var542) /* with_native on <var541:Array[Object]>*/;
}
}
{
var544 = ((val* (*)(val* self))(var541->class->vft[COLOR_standard__string__Object__to_s]))(var541) /* to_s on <var541:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var544); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce545) {
var546 = varonce545;
} else {
var547 = "struct instance_";
var548 = 16;
var549 = standard___standard__NativeString___to_s_with_length(var547, var548);
var546 = var549;
varonce545 = var546;
}
if (varonce550) {
var551 = varonce550;
} else {
var552 = "*res = nit_alloc(sizeof(struct instance_";
var553 = 40;
var554 = standard___standard__NativeString___to_s_with_length(var552, var553);
var551 = var554;
varonce550 = var551;
}
if (varonce555) {
var556 = varonce555;
} else {
var557 = "));";
var558 = 3;
var559 = standard___standard__NativeString___to_s_with_length(var557, var558);
var556 = var559;
varonce555 = var556;
}
var560 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var560 = array_instance Array[Object] */
var561 = 5;
var562 = NEW_standard__NativeArray(var561, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var562)->values[0] = (val*) var546;
((struct instance_standard__NativeArray*)var562)->values[1] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var562)->values[2] = (val*) var551;
((struct instance_standard__NativeArray*)var562)->values[3] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var562)->values[4] = (val*) var556;
{
((void (*)(val* self, val* p0, long p1))(var560->class->vft[COLOR_standard__array__Array__with_native]))(var560, var562, var561) /* with_native on <var560:Array[Object]>*/;
}
}
{
var563 = ((val* (*)(val* self))(var560->class->vft[COLOR_standard__string__Object__to_s]))(var560) /* to_s on <var560:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var563); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce564) {
var565 = varonce564;
} else {
var566 = "class_";
var567 = 6;
var568 = standard___standard__NativeString___to_s_with_length(var566, var567);
var565 = var568;
varonce564 = var565;
}
var569 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var569 = array_instance Array[Object] */
var570 = 2;
var571 = NEW_standard__NativeArray(var570, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var571)->values[0] = (val*) var565;
((struct instance_standard__NativeArray*)var571)->values[1] = (val*) var_c_name;
{
((void (*)(val* self, val* p0, long p1))(var569->class->vft[COLOR_standard__array__Array__with_native]))(var569, var571, var570) /* with_native on <var569:Array[Object]>*/;
}
}
{
var572 = ((val* (*)(val* self))(var569->class->vft[COLOR_standard__string__Object__to_s]))(var569) /* to_s on <var569:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(var_v, var572); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (varonce573) {
var574 = varonce573;
} else {
var575 = "res->class = &class_";
var576 = 20;
var577 = standard___standard__NativeString___to_s_with_length(var575, var576);
var574 = var577;
varonce573 = var574;
}
if (varonce578) {
var579 = varonce578;
} else {
var580 = ";";
var581 = 1;
var582 = standard___standard__NativeString___to_s_with_length(var580, var581);
var579 = var582;
varonce578 = var579;
}
var583 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var583 = array_instance Array[Object] */
var584 = 3;
var585 = NEW_standard__NativeArray(var584, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var585)->values[0] = (val*) var574;
((struct instance_standard__NativeArray*)var585)->values[1] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var585)->values[2] = (val*) var579;
{
((void (*)(val* self, val* p0, long p1))(var583->class->vft[COLOR_standard__array__Array__with_native]))(var583, var585, var584) /* with_native on <var583:Array[Object]>*/;
}
}
{
var586 = ((val* (*)(val* self))(var583->class->vft[COLOR_standard__string__Object__to_s]))(var583) /* to_s on <var583:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var586); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce587) {
var588 = varonce587;
} else {
var589 = "res->value = value;";
var590 = 19;
var591 = standard___standard__NativeString___to_s_with_length(var589, var590);
var588 = var591;
varonce587 = var588;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var588); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce592) {
var593 = varonce592;
} else {
var594 = "return (val*)res;";
var595 = 17;
var596 = standard___standard__NativeString___to_s_with_length(var594, var595);
var593 = var596;
varonce592 = var593;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var593); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce597) {
var598 = varonce597;
} else {
var599 = "}";
var600 = 1;
var601 = standard___standard__NativeString___to_s_with_length(var599, var600);
var598 = var601;
varonce597 = var598;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var598); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var604 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var604 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var602 = var604;
RET_LABEL603:(void)0;
}
}
{
{ /* Inline model#MClass#name (var602) on <var602:MClass> */
var607 = var602->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var602:MClass> */
if (unlikely(var607 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var605 = var607;
RET_LABEL606:(void)0;
}
}
if (varonce608) {
var609 = varonce608;
} else {
var610 = "Pointer";
var611 = 7;
var612 = standard___standard__NativeString___to_s_with_length(var610, var611);
var609 = var612;
varonce608 = var609;
}
{
{ /* Inline kernel#Object#!= (var605,var609) on <var605:String> */
var_other = var609;
{
var615 = ((short int (*)(val* self, val* p0))(var605->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var605, var_other) /* == on <var605:String>*/;
}
var616 = !var615;
var613 = var616;
goto RET_LABEL614;
RET_LABEL614:(void)0;
}
}
if (var613){
goto RET_LABEL;
} else {
}
{
var617 = nit___nit__SeparateErasureCompiler___nit__abstract_compiler__AbstractCompiler__new_visitor(self);
}
var_v = var617;
if (varonce618) {
var619 = varonce618;
} else {
var620 = "NEW_";
var621 = 4;
var622 = standard___standard__NativeString___to_s_with_length(var620, var621);
var619 = var622;
varonce618 = var619;
}
var623 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var623 = array_instance Array[Object] */
var624 = 2;
var625 = NEW_standard__NativeArray(var624, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var625)->values[0] = (val*) var619;
((struct instance_standard__NativeArray*)var625)->values[1] = (val*) var_c_name;
{
((void (*)(val* self, val* p0, long p1))(var623->class->vft[COLOR_standard__array__Array__with_native]))(var623, var625, var624) /* with_native on <var623:Array[Object]>*/;
}
}
{
var626 = ((val* (*)(val* self))(var623->class->vft[COLOR_standard__string__Object__to_s]))(var623) /* to_s on <var623:Array[Object]>*/;
}
{
var627 = nit__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
if (varonce628) {
var629 = varonce628;
} else {
var630 = " NEW_";
var631 = 5;
var632 = standard___standard__NativeString___to_s_with_length(var630, var631);
var629 = var632;
varonce628 = var629;
}
if (varonce633) {
var634 = varonce633;
} else {
var635 = "();";
var636 = 3;
var637 = standard___standard__NativeString___to_s_with_length(var635, var636);
var634 = var637;
varonce633 = var634;
}
var638 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var638 = array_instance Array[Object] */
var639 = 4;
var640 = NEW_standard__NativeArray(var639, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var640)->values[0] = (val*) var627;
((struct instance_standard__NativeArray*)var640)->values[1] = (val*) var629;
((struct instance_standard__NativeArray*)var640)->values[2] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var640)->values[3] = (val*) var634;
{
((void (*)(val* self, val* p0, long p1))(var638->class->vft[COLOR_standard__array__Array__with_native]))(var638, var640, var639) /* with_native on <var638:Array[Object]>*/;
}
}
{
var641 = ((val* (*)(val* self))(var638->class->vft[COLOR_standard__string__Object__to_s]))(var638) /* to_s on <var638:Array[Object]>*/;
}
{
nit___nit__AbstractCompiler___provide_declaration(self, var626, var641); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateErasureCompiler>*/
}
if (varonce642) {
var643 = varonce642;
} else {
var644 = "/* allocate ";
var645 = 12;
var646 = standard___standard__NativeString___to_s_with_length(var644, var645);
var643 = var646;
varonce642 = var643;
}
if (varonce647) {
var648 = varonce647;
} else {
var649 = " */";
var650 = 3;
var651 = standard___standard__NativeString___to_s_with_length(var649, var650);
var648 = var651;
varonce647 = var648;
}
var652 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var652 = array_instance Array[Object] */
var653 = 3;
var654 = NEW_standard__NativeArray(var653, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var654)->values[0] = (val*) var643;
((struct instance_standard__NativeArray*)var654)->values[1] = (val*) var_mtype;
((struct instance_standard__NativeArray*)var654)->values[2] = (val*) var648;
{
((void (*)(val* self, val* p0, long p1))(var652->class->vft[COLOR_standard__array__Array__with_native]))(var652, var654, var653) /* with_native on <var652:Array[Object]>*/;
}
}
{
var655 = ((val* (*)(val* self))(var652->class->vft[COLOR_standard__string__Object__to_s]))(var652) /* to_s on <var652:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var655); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
var656 = nit__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
if (varonce657) {
var658 = varonce657;
} else {
var659 = " NEW_";
var660 = 5;
var661 = standard___standard__NativeString___to_s_with_length(var659, var660);
var658 = var661;
varonce657 = var658;
}
if (varonce662) {
var663 = varonce662;
} else {
var664 = "() {";
var665 = 4;
var666 = standard___standard__NativeString___to_s_with_length(var664, var665);
var663 = var666;
varonce662 = var663;
}
var667 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var667 = array_instance Array[Object] */
var668 = 4;
var669 = NEW_standard__NativeArray(var668, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var669)->values[0] = (val*) var656;
((struct instance_standard__NativeArray*)var669)->values[1] = (val*) var658;
((struct instance_standard__NativeArray*)var669)->values[2] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var669)->values[3] = (val*) var663;
{
((void (*)(val* self, val* p0, long p1))(var667->class->vft[COLOR_standard__array__Array__with_native]))(var667, var669, var668) /* with_native on <var667:Array[Object]>*/;
}
}
{
var670 = ((val* (*)(val* self))(var667->class->vft[COLOR_standard__string__Object__to_s]))(var667) /* to_s on <var667:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var670); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (var_is_dead){
if (varonce671) {
var672 = varonce671;
} else {
var673 = " is DEAD";
var674 = 8;
var675 = standard___standard__NativeString___to_s_with_length(var673, var674);
var672 = var675;
varonce671 = var672;
}
var676 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var676 = array_instance Array[Object] */
var677 = 2;
var678 = NEW_standard__NativeArray(var677, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var678)->values[0] = (val*) var_mclass;
((struct instance_standard__NativeArray*)var678)->values[1] = (val*) var672;
{
((void (*)(val* self, val* p0, long p1))(var676->class->vft[COLOR_standard__array__Array__with_native]))(var676, var678, var677) /* with_native on <var676:Array[Object]>*/;
}
}
{
var679 = ((val* (*)(val* self))(var676->class->vft[COLOR_standard__string__Object__to_s]))(var676) /* to_s on <var676:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_abort(var_v, var679); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (varonce680) {
var681 = varonce680;
} else {
var682 = "self";
var683 = 4;
var684 = standard___standard__NativeString___to_s_with_length(var682, var683);
var681 = var684;
varonce680 = var681;
}
{
var685 = nit___nit__AbstractCompilerVisitor___new_named_var(var_v, var_mtype, var681);
}
var_res = var685;
var686 = 1;
{
{ /* Inline abstract_compiler#RuntimeVariable#is_exact= (var_res,var686) on <var_res:RuntimeVariable> */
var_res->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___is_exact].s = var686; /* _is_exact on <var_res:RuntimeVariable> */
RET_LABEL687:(void)0;
}
}
if (varonce688) {
var689 = varonce688;
} else {
var690 = " = nit_alloc(sizeof(struct instance_";
var691 = 36;
var692 = standard___standard__NativeString___to_s_with_length(var690, var691);
var689 = var692;
varonce688 = var689;
}
{
var693 = ((val* (*)(val* self))(var_mtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_mtype) /* c_name on <var_mtype:MClassType>*/;
}
if (varonce694) {
var695 = varonce694;
} else {
var696 = "));";
var697 = 3;
var698 = standard___standard__NativeString___to_s_with_length(var696, var697);
var695 = var698;
varonce694 = var695;
}
var699 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var699 = array_instance Array[Object] */
var700 = 4;
var701 = NEW_standard__NativeArray(var700, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var701)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var701)->values[1] = (val*) var689;
((struct instance_standard__NativeArray*)var701)->values[2] = (val*) var693;
((struct instance_standard__NativeArray*)var701)->values[3] = (val*) var695;
{
((void (*)(val* self, val* p0, long p1))(var699->class->vft[COLOR_standard__array__Array__with_native]))(var699, var701, var700) /* with_native on <var699:Array[Object]>*/;
}
}
{
var702 = ((val* (*)(val* self))(var699->class->vft[COLOR_standard__string__Object__to_s]))(var699) /* to_s on <var699:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var702); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce703) {
var704 = varonce703;
} else {
var705 = "class_";
var706 = 6;
var707 = standard___standard__NativeString___to_s_with_length(var705, var706);
var704 = var707;
varonce703 = var704;
}
var708 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var708 = array_instance Array[Object] */
var709 = 2;
var710 = NEW_standard__NativeArray(var709, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var710)->values[0] = (val*) var704;
((struct instance_standard__NativeArray*)var710)->values[1] = (val*) var_c_name;
{
((void (*)(val* self, val* p0, long p1))(var708->class->vft[COLOR_standard__array__Array__with_native]))(var708, var710, var709) /* with_native on <var708:Array[Object]>*/;
}
}
{
var711 = ((val* (*)(val* self))(var708->class->vft[COLOR_standard__string__Object__to_s]))(var708) /* to_s on <var708:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(var_v, var711); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (varonce712) {
var713 = varonce712;
} else {
var714 = "->class = &class_";
var715 = 17;
var716 = standard___standard__NativeString___to_s_with_length(var714, var715);
var713 = var716;
varonce712 = var713;
}
if (varonce717) {
var718 = varonce717;
} else {
var719 = ";";
var720 = 1;
var721 = standard___standard__NativeString___to_s_with_length(var719, var720);
var718 = var721;
varonce717 = var718;
}
var722 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var722 = array_instance Array[Object] */
var723 = 4;
var724 = NEW_standard__NativeArray(var723, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var724)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var724)->values[1] = (val*) var713;
((struct instance_standard__NativeArray*)var724)->values[2] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var724)->values[3] = (val*) var718;
{
((void (*)(val* self, val* p0, long p1))(var722->class->vft[COLOR_standard__array__Array__with_native]))(var722, var724, var723) /* with_native on <var722:Array[Object]>*/;
}
}
{
var725 = ((val* (*)(val* self))(var722->class->vft[COLOR_standard__string__Object__to_s]))(var722) /* to_s on <var722:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var725); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce726) {
var727 = varonce726;
} else {
var728 = "((struct instance_";
var729 = 18;
var730 = standard___standard__NativeString___to_s_with_length(var728, var729);
var727 = var730;
varonce726 = var727;
}
{
var731 = ((val* (*)(val* self))(var_mtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_mtype) /* c_name on <var_mtype:MClassType>*/;
}
if (varonce732) {
var733 = varonce732;
} else {
var734 = "*)";
var735 = 2;
var736 = standard___standard__NativeString___to_s_with_length(var734, var735);
var733 = var736;
varonce732 = var733;
}
if (varonce737) {
var738 = varonce737;
} else {
var739 = ")->value = NULL;";
var740 = 16;
var741 = standard___standard__NativeString___to_s_with_length(var739, var740);
var738 = var741;
varonce737 = var738;
}
var742 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var742 = array_instance Array[Object] */
var743 = 5;
var744 = NEW_standard__NativeArray(var743, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var744)->values[0] = (val*) var727;
((struct instance_standard__NativeArray*)var744)->values[1] = (val*) var731;
((struct instance_standard__NativeArray*)var744)->values[2] = (val*) var733;
((struct instance_standard__NativeArray*)var744)->values[3] = (val*) var_res;
((struct instance_standard__NativeArray*)var744)->values[4] = (val*) var738;
{
((void (*)(val* self, val* p0, long p1))(var742->class->vft[COLOR_standard__array__Array__with_native]))(var742, var744, var743) /* with_native on <var742:Array[Object]>*/;
}
}
{
var745 = ((val* (*)(val* self))(var742->class->vft[COLOR_standard__string__Object__to_s]))(var742) /* to_s on <var742:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var745); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce746) {
var747 = varonce746;
} else {
var748 = "return ";
var749 = 7;
var750 = standard___standard__NativeString___to_s_with_length(var748, var749);
var747 = var750;
varonce746 = var747;
}
if (varonce751) {
var752 = varonce751;
} else {
var753 = ";";
var754 = 1;
var755 = standard___standard__NativeString___to_s_with_length(var753, var754);
var752 = var755;
varonce751 = var752;
}
var756 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var756 = array_instance Array[Object] */
var757 = 3;
var758 = NEW_standard__NativeArray(var757, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var758)->values[0] = (val*) var747;
((struct instance_standard__NativeArray*)var758)->values[1] = (val*) var_res;
((struct instance_standard__NativeArray*)var758)->values[2] = (val*) var752;
{
((void (*)(val* self, val* p0, long p1))(var756->class->vft[COLOR_standard__array__Array__with_native]))(var756, var758, var757) /* with_native on <var756:Array[Object]>*/;
}
}
{
var759 = ((val* (*)(val* self))(var756->class->vft[COLOR_standard__string__Object__to_s]))(var756) /* to_s on <var756:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var759); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
}
if (varonce760) {
var761 = varonce760;
} else {
var762 = "}";
var763 = 1;
var764 = standard___standard__NativeString___to_s_with_length(var762, var763);
var761 = var764;
varonce760 = var761;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var761); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
{
{ /* Inline model#MClass#name (var_mclass) on <var_mclass:MClass> */
var767 = var_mclass->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var_mclass:MClass> */
if (unlikely(var767 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var765 = var767;
RET_LABEL766:(void)0;
}
}
if (varonce768) {
var769 = varonce768;
} else {
var770 = "NativeArray";
var771 = 11;
var772 = standard___standard__NativeString___to_s_with_length(var770, var771);
var769 = var772;
varonce768 = var769;
}
{
var773 = ((short int (*)(val* self, val* p0))(var765->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var765, var769) /* == on <var765:String>*/;
}
if (var773){
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var776 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var776 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var774 = var776;
RET_LABEL775:(void)0;
}
}
if (varonce777) {
var778 = varonce777;
} else {
var779 = "struct instance_";
var780 = 16;
var781 = standard___standard__NativeString___to_s_with_length(var779, var780);
var778 = var781;
varonce777 = var778;
}
if (varonce782) {
var783 = varonce782;
} else {
var784 = " {";
var785 = 2;
var786 = standard___standard__NativeString___to_s_with_length(var784, var785);
var783 = var786;
varonce782 = var783;
}
var787 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var787 = array_instance Array[Object] */
var788 = 3;
var789 = NEW_standard__NativeArray(var788, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var789)->values[0] = (val*) var778;
((struct instance_standard__NativeArray*)var789)->values[1] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var789)->values[2] = (val*) var783;
{
((void (*)(val* self, val* p0, long p1))(var787->class->vft[COLOR_standard__array__Array__with_native]))(var787, var789, var788) /* with_native on <var787:Array[Object]>*/;
}
}
{
var790 = ((val* (*)(val* self))(var787->class->vft[COLOR_standard__string__Object__to_s]))(var787) /* to_s on <var787:Array[Object]>*/;
}
{
nit___nit__CodeWriter___add_decl(var774, var790); /* Direct call abstract_compiler#CodeWriter#add_decl on <var774:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var793 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var793 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var791 = var793;
RET_LABEL792:(void)0;
}
}
if (varonce794) {
var795 = varonce794;
} else {
var796 = "const struct class *class;";
var797 = 26;
var798 = standard___standard__NativeString___to_s_with_length(var796, var797);
var795 = var798;
varonce794 = var795;
}
{
nit___nit__CodeWriter___add_decl(var791, var795); /* Direct call abstract_compiler#CodeWriter#add_decl on <var791:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var801 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var801 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var799 = var801;
RET_LABEL800:(void)0;
}
}
if (varonce802) {
var803 = varonce802;
} else {
var804 = "int length;";
var805 = 11;
var806 = standard___standard__NativeString___to_s_with_length(var804, var805);
var803 = var806;
varonce802 = var803;
}
{
nit___nit__CodeWriter___add_decl(var799, var803); /* Direct call abstract_compiler#CodeWriter#add_decl on <var799:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var809 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var809 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var807 = var809;
RET_LABEL808:(void)0;
}
}
if (varonce810) {
var811 = varonce810;
} else {
var812 = "val* values[];";
var813 = 14;
var814 = standard___standard__NativeString___to_s_with_length(var812, var813);
var811 = var814;
varonce810 = var811;
}
{
nit___nit__CodeWriter___add_decl(var807, var811); /* Direct call abstract_compiler#CodeWriter#add_decl on <var807:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var817 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var817 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var815 = var817;
RET_LABEL816:(void)0;
}
}
if (varonce818) {
var819 = varonce818;
} else {
var820 = "};";
var821 = 2;
var822 = standard___standard__NativeString___to_s_with_length(var820, var821);
var819 = var822;
varonce818 = var819;
}
{
nit___nit__CodeWriter___add_decl(var815, var819); /* Direct call abstract_compiler#CodeWriter#add_decl on <var815:CodeWriter>*/
}
if (varonce823) {
var824 = varonce823;
} else {
var825 = "NEW_";
var826 = 4;
var827 = standard___standard__NativeString___to_s_with_length(var825, var826);
var824 = var827;
varonce823 = var824;
}
var828 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var828 = array_instance Array[Object] */
var829 = 2;
var830 = NEW_standard__NativeArray(var829, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var830)->values[0] = (val*) var824;
((struct instance_standard__NativeArray*)var830)->values[1] = (val*) var_c_name;
{
((void (*)(val* self, val* p0, long p1))(var828->class->vft[COLOR_standard__array__Array__with_native]))(var828, var830, var829) /* with_native on <var828:Array[Object]>*/;
}
}
{
var831 = ((val* (*)(val* self))(var828->class->vft[COLOR_standard__string__Object__to_s]))(var828) /* to_s on <var828:Array[Object]>*/;
}
{
var832 = nit__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
if (varonce833) {
var834 = varonce833;
} else {
var835 = " NEW_";
var836 = 5;
var837 = standard___standard__NativeString___to_s_with_length(var835, var836);
var834 = var837;
varonce833 = var834;
}
if (varonce838) {
var839 = varonce838;
} else {
var840 = "(int length);";
var841 = 13;
var842 = standard___standard__NativeString___to_s_with_length(var840, var841);
var839 = var842;
varonce838 = var839;
}
var843 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var843 = array_instance Array[Object] */
var844 = 4;
var845 = NEW_standard__NativeArray(var844, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var845)->values[0] = (val*) var832;
((struct instance_standard__NativeArray*)var845)->values[1] = (val*) var834;
((struct instance_standard__NativeArray*)var845)->values[2] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var845)->values[3] = (val*) var839;
{
((void (*)(val* self, val* p0, long p1))(var843->class->vft[COLOR_standard__array__Array__with_native]))(var843, var845, var844) /* with_native on <var843:Array[Object]>*/;
}
}
{
var846 = ((val* (*)(val* self))(var843->class->vft[COLOR_standard__string__Object__to_s]))(var843) /* to_s on <var843:Array[Object]>*/;
}
{
nit___nit__AbstractCompiler___provide_declaration(self, var831, var846); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateErasureCompiler>*/
}
if (varonce847) {
var848 = varonce847;
} else {
var849 = "/* allocate ";
var850 = 12;
var851 = standard___standard__NativeString___to_s_with_length(var849, var850);
var848 = var851;
varonce847 = var848;
}
if (varonce852) {
var853 = varonce852;
} else {
var854 = " */";
var855 = 3;
var856 = standard___standard__NativeString___to_s_with_length(var854, var855);
var853 = var856;
varonce852 = var853;
}
var857 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var857 = array_instance Array[Object] */
var858 = 3;
var859 = NEW_standard__NativeArray(var858, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var859)->values[0] = (val*) var848;
((struct instance_standard__NativeArray*)var859)->values[1] = (val*) var_mtype;
((struct instance_standard__NativeArray*)var859)->values[2] = (val*) var853;
{
((void (*)(val* self, val* p0, long p1))(var857->class->vft[COLOR_standard__array__Array__with_native]))(var857, var859, var858) /* with_native on <var857:Array[Object]>*/;
}
}
{
var860 = ((val* (*)(val* self))(var857->class->vft[COLOR_standard__string__Object__to_s]))(var857) /* to_s on <var857:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var860); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
var861 = nit__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
if (varonce862) {
var863 = varonce862;
} else {
var864 = " NEW_";
var865 = 5;
var866 = standard___standard__NativeString___to_s_with_length(var864, var865);
var863 = var866;
varonce862 = var863;
}
if (varonce867) {
var868 = varonce867;
} else {
var869 = "(int length) {";
var870 = 14;
var871 = standard___standard__NativeString___to_s_with_length(var869, var870);
var868 = var871;
varonce867 = var868;
}
var872 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var872 = array_instance Array[Object] */
var873 = 4;
var874 = NEW_standard__NativeArray(var873, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var874)->values[0] = (val*) var861;
((struct instance_standard__NativeArray*)var874)->values[1] = (val*) var863;
((struct instance_standard__NativeArray*)var874)->values[2] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var874)->values[3] = (val*) var868;
{
((void (*)(val* self, val* p0, long p1))(var872->class->vft[COLOR_standard__array__Array__with_native]))(var872, var874, var873) /* with_native on <var872:Array[Object]>*/;
}
}
{
var875 = ((val* (*)(val* self))(var872->class->vft[COLOR_standard__string__Object__to_s]))(var872) /* to_s on <var872:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var875); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce876) {
var877 = varonce876;
} else {
var878 = "self";
var879 = 4;
var880 = standard___standard__NativeString___to_s_with_length(var878, var879);
var877 = var880;
varonce876 = var877;
}
{
var881 = nit___nit__AbstractCompilerVisitor___get_name(var_v, var877);
}
var_res882 = var881;
if (varonce883) {
var884 = varonce883;
} else {
var885 = "struct instance_";
var886 = 16;
var887 = standard___standard__NativeString___to_s_with_length(var885, var886);
var884 = var887;
varonce883 = var884;
}
if (varonce888) {
var889 = varonce888;
} else {
var890 = " *";
var891 = 2;
var892 = standard___standard__NativeString___to_s_with_length(var890, var891);
var889 = var892;
varonce888 = var889;
}
if (varonce893) {
var894 = varonce893;
} else {
var895 = ";";
var896 = 1;
var897 = standard___standard__NativeString___to_s_with_length(var895, var896);
var894 = var897;
varonce893 = var894;
}
var898 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var898 = array_instance Array[Object] */
var899 = 5;
var900 = NEW_standard__NativeArray(var899, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var900)->values[0] = (val*) var884;
((struct instance_standard__NativeArray*)var900)->values[1] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var900)->values[2] = (val*) var889;
((struct instance_standard__NativeArray*)var900)->values[3] = (val*) var_res882;
((struct instance_standard__NativeArray*)var900)->values[4] = (val*) var894;
{
((void (*)(val* self, val* p0, long p1))(var898->class->vft[COLOR_standard__array__Array__with_native]))(var898, var900, var899) /* with_native on <var898:Array[Object]>*/;
}
}
{
var901 = ((val* (*)(val* self))(var898->class->vft[COLOR_standard__string__Object__to_s]))(var898) /* to_s on <var898:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var901); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
var902 = ((val* (*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MClassType__arguments]))(var_mtype) /* arguments on <var_mtype:MClassType>*/;
}
{
var903 = standard___standard__SequenceRead___Collection__first(var902);
}
var_mtype_elt = var903;
if (varonce904) {
var905 = varonce904;
} else {
var906 = " = nit_alloc(sizeof(struct instance_";
var907 = 36;
var908 = standard___standard__NativeString___to_s_with_length(var906, var907);
var905 = var908;
varonce904 = var905;
}
if (varonce909) {
var910 = varonce909;
} else {
var911 = ") + length*sizeof(";
var912 = 18;
var913 = standard___standard__NativeString___to_s_with_length(var911, var912);
var910 = var913;
varonce909 = var910;
}
{
var914 = ((val* (*)(val* self))(var_mtype_elt->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var_mtype_elt) /* ctype on <var_mtype_elt:MType>*/;
}
if (varonce915) {
var916 = varonce915;
} else {
var917 = "));";
var918 = 3;
var919 = standard___standard__NativeString___to_s_with_length(var917, var918);
var916 = var919;
varonce915 = var916;
}
var920 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var920 = array_instance Array[Object] */
var921 = 6;
var922 = NEW_standard__NativeArray(var921, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var922)->values[0] = (val*) var_res882;
((struct instance_standard__NativeArray*)var922)->values[1] = (val*) var905;
((struct instance_standard__NativeArray*)var922)->values[2] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var922)->values[3] = (val*) var910;
((struct instance_standard__NativeArray*)var922)->values[4] = (val*) var914;
((struct instance_standard__NativeArray*)var922)->values[5] = (val*) var916;
{
((void (*)(val* self, val* p0, long p1))(var920->class->vft[COLOR_standard__array__Array__with_native]))(var920, var922, var921) /* with_native on <var920:Array[Object]>*/;
}
}
{
var923 = ((val* (*)(val* self))(var920->class->vft[COLOR_standard__string__Object__to_s]))(var920) /* to_s on <var920:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var923); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce924) {
var925 = varonce924;
} else {
var926 = "class_";
var927 = 6;
var928 = standard___standard__NativeString___to_s_with_length(var926, var927);
var925 = var928;
varonce924 = var925;
}
var929 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var929 = array_instance Array[Object] */
var930 = 2;
var931 = NEW_standard__NativeArray(var930, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var931)->values[0] = (val*) var925;
((struct instance_standard__NativeArray*)var931)->values[1] = (val*) var_c_name;
{
((void (*)(val* self, val* p0, long p1))(var929->class->vft[COLOR_standard__array__Array__with_native]))(var929, var931, var930) /* with_native on <var929:Array[Object]>*/;
}
}
{
var932 = ((val* (*)(val* self))(var929->class->vft[COLOR_standard__string__Object__to_s]))(var929) /* to_s on <var929:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(var_v, var932); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (varonce933) {
var934 = varonce933;
} else {
var935 = "->class = &class_";
var936 = 17;
var937 = standard___standard__NativeString___to_s_with_length(var935, var936);
var934 = var937;
varonce933 = var934;
}
if (varonce938) {
var939 = varonce938;
} else {
var940 = ";";
var941 = 1;
var942 = standard___standard__NativeString___to_s_with_length(var940, var941);
var939 = var942;
varonce938 = var939;
}
var943 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var943 = array_instance Array[Object] */
var944 = 4;
var945 = NEW_standard__NativeArray(var944, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var945)->values[0] = (val*) var_res882;
((struct instance_standard__NativeArray*)var945)->values[1] = (val*) var934;
((struct instance_standard__NativeArray*)var945)->values[2] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var945)->values[3] = (val*) var939;
{
((void (*)(val* self, val* p0, long p1))(var943->class->vft[COLOR_standard__array__Array__with_native]))(var943, var945, var944) /* with_native on <var943:Array[Object]>*/;
}
}
{
var946 = ((val* (*)(val* self))(var943->class->vft[COLOR_standard__string__Object__to_s]))(var943) /* to_s on <var943:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var946); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce947) {
var948 = varonce947;
} else {
var949 = "->length = length;";
var950 = 18;
var951 = standard___standard__NativeString___to_s_with_length(var949, var950);
var948 = var951;
varonce947 = var948;
}
var952 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var952 = array_instance Array[Object] */
var953 = 2;
var954 = NEW_standard__NativeArray(var953, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var954)->values[0] = (val*) var_res882;
((struct instance_standard__NativeArray*)var954)->values[1] = (val*) var948;
{
((void (*)(val* self, val* p0, long p1))(var952->class->vft[COLOR_standard__array__Array__with_native]))(var952, var954, var953) /* with_native on <var952:Array[Object]>*/;
}
}
{
var955 = ((val* (*)(val* self))(var952->class->vft[COLOR_standard__string__Object__to_s]))(var952) /* to_s on <var952:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var955); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce956) {
var957 = varonce956;
} else {
var958 = "return (val*)";
var959 = 13;
var960 = standard___standard__NativeString___to_s_with_length(var958, var959);
var957 = var960;
varonce956 = var957;
}
if (varonce961) {
var962 = varonce961;
} else {
var963 = ";";
var964 = 1;
var965 = standard___standard__NativeString___to_s_with_length(var963, var964);
var962 = var965;
varonce961 = var962;
}
var966 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var966 = array_instance Array[Object] */
var967 = 3;
var968 = NEW_standard__NativeArray(var967, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var968)->values[0] = (val*) var957;
((struct instance_standard__NativeArray*)var968)->values[1] = (val*) var_res882;
((struct instance_standard__NativeArray*)var968)->values[2] = (val*) var962;
{
((void (*)(val* self, val* p0, long p1))(var966->class->vft[COLOR_standard__array__Array__with_native]))(var966, var968, var967) /* with_native on <var966:Array[Object]>*/;
}
}
{
var969 = ((val* (*)(val* self))(var966->class->vft[COLOR_standard__string__Object__to_s]))(var966) /* to_s on <var966:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var969); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce970) {
var971 = varonce970;
} else {
var972 = "}";
var973 = 1;
var974 = standard___standard__NativeString___to_s_with_length(var972, var973);
var971 = var974;
varonce970 = var971;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var971); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var978 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var978 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var976 = var978;
RET_LABEL977:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var976) on <var976:MClass> */
var981 = var976->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var976:MClass> */
if (unlikely(var981 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 399);
show_backtrace(1);
}
var979 = var981;
RET_LABEL980:(void)0;
}
}
{
var982 = nit__model___standard__Object___extern_kind(self);
}
{
{ /* Inline kernel#Object#== (var979,var982) on <var979:MClassKind> */
var_other244 = var982;
{
{ /* Inline kernel#Object#is_same_instance (var979,var_other244) on <var979:MClassKind> */
var987 = var979 == var_other244;
var985 = var987;
goto RET_LABEL986;
RET_LABEL986:(void)0;
}
}
var983 = var985;
goto RET_LABEL984;
RET_LABEL984:(void)0;
}
}
var_988 = var983;
if (var983){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var991 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var991 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var989 = var991;
RET_LABEL990:(void)0;
}
}
{
{ /* Inline model#MClass#name (var989) on <var989:MClass> */
var994 = var989->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var989:MClass> */
if (unlikely(var994 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var992 = var994;
RET_LABEL993:(void)0;
}
}
if (varonce995) {
var996 = varonce995;
} else {
var997 = "NativeString";
var998 = 12;
var999 = standard___standard__NativeString___to_s_with_length(var997, var998);
var996 = var999;
varonce995 = var996;
}
{
{ /* Inline kernel#Object#!= (var992,var996) on <var992:String> */
var_other = var996;
{
var1002 = ((short int (*)(val* self, val* p0))(var992->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var992, var_other) /* == on <var992:String>*/;
}
var1003 = !var1002;
var1000 = var1003;
goto RET_LABEL1001;
RET_LABEL1001:(void)0;
}
}
var975 = var1000;
} else {
var975 = var_988;
}
if (var975){
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateErasureCompiler> */
var1006 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var1006 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 474);
show_backtrace(1);
}
var1004 = var1006;
RET_LABEL1005:(void)0;
}
}
{
var1007 = nit__model___MModule___pointer_type(var1004);
}
var_pointer_type = var1007;
if (varonce1008) {
var1009 = varonce1008;
} else {
var1010 = "NEW_";
var1011 = 4;
var1012 = standard___standard__NativeString___to_s_with_length(var1010, var1011);
var1009 = var1012;
varonce1008 = var1009;
}
var1013 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1013 = array_instance Array[Object] */
var1014 = 2;
var1015 = NEW_standard__NativeArray(var1014, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1015)->values[0] = (val*) var1009;
((struct instance_standard__NativeArray*)var1015)->values[1] = (val*) var_c_name;
{
((void (*)(val* self, val* p0, long p1))(var1013->class->vft[COLOR_standard__array__Array__with_native]))(var1013, var1015, var1014) /* with_native on <var1013:Array[Object]>*/;
}
}
{
var1016 = ((val* (*)(val* self))(var1013->class->vft[COLOR_standard__string__Object__to_s]))(var1013) /* to_s on <var1013:Array[Object]>*/;
}
{
var1017 = nit__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
if (varonce1018) {
var1019 = varonce1018;
} else {
var1020 = " NEW_";
var1021 = 5;
var1022 = standard___standard__NativeString___to_s_with_length(var1020, var1021);
var1019 = var1022;
varonce1018 = var1019;
}
if (varonce1023) {
var1024 = varonce1023;
} else {
var1025 = "();";
var1026 = 3;
var1027 = standard___standard__NativeString___to_s_with_length(var1025, var1026);
var1024 = var1027;
varonce1023 = var1024;
}
var1028 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1028 = array_instance Array[Object] */
var1029 = 4;
var1030 = NEW_standard__NativeArray(var1029, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1030)->values[0] = (val*) var1017;
((struct instance_standard__NativeArray*)var1030)->values[1] = (val*) var1019;
((struct instance_standard__NativeArray*)var1030)->values[2] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var1030)->values[3] = (val*) var1024;
{
((void (*)(val* self, val* p0, long p1))(var1028->class->vft[COLOR_standard__array__Array__with_native]))(var1028, var1030, var1029) /* with_native on <var1028:Array[Object]>*/;
}
}
{
var1031 = ((val* (*)(val* self))(var1028->class->vft[COLOR_standard__string__Object__to_s]))(var1028) /* to_s on <var1028:Array[Object]>*/;
}
{
nit___nit__AbstractCompiler___provide_declaration(self, var1016, var1031); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateErasureCompiler>*/
}
if (varonce1032) {
var1033 = varonce1032;
} else {
var1034 = "/* allocate ";
var1035 = 12;
var1036 = standard___standard__NativeString___to_s_with_length(var1034, var1035);
var1033 = var1036;
varonce1032 = var1033;
}
if (varonce1037) {
var1038 = varonce1037;
} else {
var1039 = " */";
var1040 = 3;
var1041 = standard___standard__NativeString___to_s_with_length(var1039, var1040);
var1038 = var1041;
varonce1037 = var1038;
}
var1042 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1042 = array_instance Array[Object] */
var1043 = 3;
var1044 = NEW_standard__NativeArray(var1043, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1044)->values[0] = (val*) var1033;
((struct instance_standard__NativeArray*)var1044)->values[1] = (val*) var_mtype;
((struct instance_standard__NativeArray*)var1044)->values[2] = (val*) var1038;
{
((void (*)(val* self, val* p0, long p1))(var1042->class->vft[COLOR_standard__array__Array__with_native]))(var1042, var1044, var1043) /* with_native on <var1042:Array[Object]>*/;
}
}
{
var1045 = ((val* (*)(val* self))(var1042->class->vft[COLOR_standard__string__Object__to_s]))(var1042) /* to_s on <var1042:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var1045); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
var1046 = nit__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
if (varonce1047) {
var1048 = varonce1047;
} else {
var1049 = " NEW_";
var1050 = 5;
var1051 = standard___standard__NativeString___to_s_with_length(var1049, var1050);
var1048 = var1051;
varonce1047 = var1048;
}
if (varonce1052) {
var1053 = varonce1052;
} else {
var1054 = "() {";
var1055 = 4;
var1056 = standard___standard__NativeString___to_s_with_length(var1054, var1055);
var1053 = var1056;
varonce1052 = var1053;
}
var1057 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1057 = array_instance Array[Object] */
var1058 = 4;
var1059 = NEW_standard__NativeArray(var1058, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1059)->values[0] = (val*) var1046;
((struct instance_standard__NativeArray*)var1059)->values[1] = (val*) var1048;
((struct instance_standard__NativeArray*)var1059)->values[2] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var1059)->values[3] = (val*) var1053;
{
((void (*)(val* self, val* p0, long p1))(var1057->class->vft[COLOR_standard__array__Array__with_native]))(var1057, var1059, var1058) /* with_native on <var1057:Array[Object]>*/;
}
}
{
var1060 = ((val* (*)(val* self))(var1057->class->vft[COLOR_standard__string__Object__to_s]))(var1057) /* to_s on <var1057:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var1060); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (var_is_dead){
if (varonce1061) {
var1062 = varonce1061;
} else {
var1063 = " is DEAD";
var1064 = 8;
var1065 = standard___standard__NativeString___to_s_with_length(var1063, var1064);
var1062 = var1065;
varonce1061 = var1062;
}
var1066 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1066 = array_instance Array[Object] */
var1067 = 2;
var1068 = NEW_standard__NativeArray(var1067, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1068)->values[0] = (val*) var_mclass;
((struct instance_standard__NativeArray*)var1068)->values[1] = (val*) var1062;
{
((void (*)(val* self, val* p0, long p1))(var1066->class->vft[COLOR_standard__array__Array__with_native]))(var1066, var1068, var1067) /* with_native on <var1066:Array[Object]>*/;
}
}
{
var1069 = ((val* (*)(val* self))(var1066->class->vft[COLOR_standard__string__Object__to_s]))(var1066) /* to_s on <var1066:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_abort(var_v, var1069); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (varonce1070) {
var1071 = varonce1070;
} else {
var1072 = "self";
var1073 = 4;
var1074 = standard___standard__NativeString___to_s_with_length(var1072, var1073);
var1071 = var1074;
varonce1070 = var1071;
}
{
var1075 = nit___nit__AbstractCompilerVisitor___new_named_var(var_v, var_mtype, var1071);
}
var_res1076 = var1075;
var1077 = 1;
{
{ /* Inline abstract_compiler#RuntimeVariable#is_exact= (var_res1076,var1077) on <var_res1076:RuntimeVariable> */
var_res1076->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___is_exact].s = var1077; /* _is_exact on <var_res1076:RuntimeVariable> */
RET_LABEL1078:(void)0;
}
}
if (varonce1079) {
var1080 = varonce1079;
} else {
var1081 = " = nit_alloc(sizeof(struct instance_";
var1082 = 36;
var1083 = standard___standard__NativeString___to_s_with_length(var1081, var1082);
var1080 = var1083;
varonce1079 = var1080;
}
{
var1084 = ((val* (*)(val* self))(var_pointer_type->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_pointer_type) /* c_name on <var_pointer_type:MClassType>*/;
}
if (varonce1085) {
var1086 = varonce1085;
} else {
var1087 = "));";
var1088 = 3;
var1089 = standard___standard__NativeString___to_s_with_length(var1087, var1088);
var1086 = var1089;
varonce1085 = var1086;
}
var1090 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1090 = array_instance Array[Object] */
var1091 = 4;
var1092 = NEW_standard__NativeArray(var1091, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1092)->values[0] = (val*) var_res1076;
((struct instance_standard__NativeArray*)var1092)->values[1] = (val*) var1080;
((struct instance_standard__NativeArray*)var1092)->values[2] = (val*) var1084;
((struct instance_standard__NativeArray*)var1092)->values[3] = (val*) var1086;
{
((void (*)(val* self, val* p0, long p1))(var1090->class->vft[COLOR_standard__array__Array__with_native]))(var1090, var1092, var1091) /* with_native on <var1090:Array[Object]>*/;
}
}
{
var1093 = ((val* (*)(val* self))(var1090->class->vft[COLOR_standard__string__Object__to_s]))(var1090) /* to_s on <var1090:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var1093); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce1094) {
var1095 = varonce1094;
} else {
var1096 = "class_";
var1097 = 6;
var1098 = standard___standard__NativeString___to_s_with_length(var1096, var1097);
var1095 = var1098;
varonce1094 = var1095;
}
var1099 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1099 = array_instance Array[Object] */
var1100 = 2;
var1101 = NEW_standard__NativeArray(var1100, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1101)->values[0] = (val*) var1095;
((struct instance_standard__NativeArray*)var1101)->values[1] = (val*) var_c_name;
{
((void (*)(val* self, val* p0, long p1))(var1099->class->vft[COLOR_standard__array__Array__with_native]))(var1099, var1101, var1100) /* with_native on <var1099:Array[Object]>*/;
}
}
{
var1102 = ((val* (*)(val* self))(var1099->class->vft[COLOR_standard__string__Object__to_s]))(var1099) /* to_s on <var1099:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(var_v, var1102); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (varonce1103) {
var1104 = varonce1103;
} else {
var1105 = "->class = &class_";
var1106 = 17;
var1107 = standard___standard__NativeString___to_s_with_length(var1105, var1106);
var1104 = var1107;
varonce1103 = var1104;
}
if (varonce1108) {
var1109 = varonce1108;
} else {
var1110 = ";";
var1111 = 1;
var1112 = standard___standard__NativeString___to_s_with_length(var1110, var1111);
var1109 = var1112;
varonce1108 = var1109;
}
var1113 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1113 = array_instance Array[Object] */
var1114 = 4;
var1115 = NEW_standard__NativeArray(var1114, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1115)->values[0] = (val*) var_res1076;
((struct instance_standard__NativeArray*)var1115)->values[1] = (val*) var1104;
((struct instance_standard__NativeArray*)var1115)->values[2] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var1115)->values[3] = (val*) var1109;
{
((void (*)(val* self, val* p0, long p1))(var1113->class->vft[COLOR_standard__array__Array__with_native]))(var1113, var1115, var1114) /* with_native on <var1113:Array[Object]>*/;
}
}
{
var1116 = ((val* (*)(val* self))(var1113->class->vft[COLOR_standard__string__Object__to_s]))(var1113) /* to_s on <var1113:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var1116); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce1117) {
var1118 = varonce1117;
} else {
var1119 = "((struct instance_";
var1120 = 18;
var1121 = standard___standard__NativeString___to_s_with_length(var1119, var1120);
var1118 = var1121;
varonce1117 = var1118;
}
{
var1122 = ((val* (*)(val* self))(var_pointer_type->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_pointer_type) /* c_name on <var_pointer_type:MClassType>*/;
}
if (varonce1123) {
var1124 = varonce1123;
} else {
var1125 = "*)";
var1126 = 2;
var1127 = standard___standard__NativeString___to_s_with_length(var1125, var1126);
var1124 = var1127;
varonce1123 = var1124;
}
if (varonce1128) {
var1129 = varonce1128;
} else {
var1130 = ")->value = NULL;";
var1131 = 16;
var1132 = standard___standard__NativeString___to_s_with_length(var1130, var1131);
var1129 = var1132;
varonce1128 = var1129;
}
var1133 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1133 = array_instance Array[Object] */
var1134 = 5;
var1135 = NEW_standard__NativeArray(var1134, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1135)->values[0] = (val*) var1118;
((struct instance_standard__NativeArray*)var1135)->values[1] = (val*) var1122;
((struct instance_standard__NativeArray*)var1135)->values[2] = (val*) var1124;
((struct instance_standard__NativeArray*)var1135)->values[3] = (val*) var_res1076;
((struct instance_standard__NativeArray*)var1135)->values[4] = (val*) var1129;
{
((void (*)(val* self, val* p0, long p1))(var1133->class->vft[COLOR_standard__array__Array__with_native]))(var1133, var1135, var1134) /* with_native on <var1133:Array[Object]>*/;
}
}
{
var1136 = ((val* (*)(val* self))(var1133->class->vft[COLOR_standard__string__Object__to_s]))(var1133) /* to_s on <var1133:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var1136); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce1137) {
var1138 = varonce1137;
} else {
var1139 = "return ";
var1140 = 7;
var1141 = standard___standard__NativeString___to_s_with_length(var1139, var1140);
var1138 = var1141;
varonce1137 = var1138;
}
if (varonce1142) {
var1143 = varonce1142;
} else {
var1144 = ";";
var1145 = 1;
var1146 = standard___standard__NativeString___to_s_with_length(var1144, var1145);
var1143 = var1146;
varonce1142 = var1143;
}
var1147 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1147 = array_instance Array[Object] */
var1148 = 3;
var1149 = NEW_standard__NativeArray(var1148, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1149)->values[0] = (val*) var1138;
((struct instance_standard__NativeArray*)var1149)->values[1] = (val*) var_res1076;
((struct instance_standard__NativeArray*)var1149)->values[2] = (val*) var1143;
{
((void (*)(val* self, val* p0, long p1))(var1147->class->vft[COLOR_standard__array__Array__with_native]))(var1147, var1149, var1148) /* with_native on <var1147:Array[Object]>*/;
}
}
{
var1150 = ((val* (*)(val* self))(var1147->class->vft[COLOR_standard__string__Object__to_s]))(var1147) /* to_s on <var1147:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var1150); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
}
if (varonce1151) {
var1152 = varonce1151;
} else {
var1153 = "}";
var1154 = 1;
var1155 = standard___standard__NativeString___to_s_with_length(var1153, var1154);
var1152 = var1155;
varonce1151 = var1152;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var1152); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
}
}
}
if (varonce1156) {
var1157 = varonce1156;
} else {
var1158 = "NEW_";
var1159 = 4;
var1160 = standard___standard__NativeString___to_s_with_length(var1158, var1159);
var1157 = var1160;
varonce1156 = var1157;
}
var1161 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1161 = array_instance Array[Object] */
var1162 = 2;
var1163 = NEW_standard__NativeArray(var1162, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1163)->values[0] = (val*) var1157;
((struct instance_standard__NativeArray*)var1163)->values[1] = (val*) var_c_name;
{
((void (*)(val* self, val* p0, long p1))(var1161->class->vft[COLOR_standard__array__Array__with_native]))(var1161, var1163, var1162) /* with_native on <var1161:Array[Object]>*/;
}
}
{
var1164 = ((val* (*)(val* self))(var1161->class->vft[COLOR_standard__string__Object__to_s]))(var1161) /* to_s on <var1161:Array[Object]>*/;
}
{
var1165 = nit__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
if (varonce1166) {
var1167 = varonce1166;
} else {
var1168 = " NEW_";
var1169 = 5;
var1170 = standard___standard__NativeString___to_s_with_length(var1168, var1169);
var1167 = var1170;
varonce1166 = var1167;
}
if (varonce1171) {
var1172 = varonce1171;
} else {
var1173 = "(void);";
var1174 = 7;
var1175 = standard___standard__NativeString___to_s_with_length(var1173, var1174);
var1172 = var1175;
varonce1171 = var1172;
}
var1176 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1176 = array_instance Array[Object] */
var1177 = 4;
var1178 = NEW_standard__NativeArray(var1177, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1178)->values[0] = (val*) var1165;
((struct instance_standard__NativeArray*)var1178)->values[1] = (val*) var1167;
((struct instance_standard__NativeArray*)var1178)->values[2] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var1178)->values[3] = (val*) var1172;
{
((void (*)(val* self, val* p0, long p1))(var1176->class->vft[COLOR_standard__array__Array__with_native]))(var1176, var1178, var1177) /* with_native on <var1176:Array[Object]>*/;
}
}
{
var1179 = ((val* (*)(val* self))(var1176->class->vft[COLOR_standard__string__Object__to_s]))(var1176) /* to_s on <var1176:Array[Object]>*/;
}
{
nit___nit__AbstractCompiler___provide_declaration(self, var1164, var1179); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateErasureCompiler>*/
}
if (varonce1180) {
var1181 = varonce1180;
} else {
var1182 = "/* allocate ";
var1183 = 12;
var1184 = standard___standard__NativeString___to_s_with_length(var1182, var1183);
var1181 = var1184;
varonce1180 = var1181;
}
if (varonce1185) {
var1186 = varonce1185;
} else {
var1187 = " */";
var1188 = 3;
var1189 = standard___standard__NativeString___to_s_with_length(var1187, var1188);
var1186 = var1189;
varonce1185 = var1186;
}
var1190 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1190 = array_instance Array[Object] */
var1191 = 3;
var1192 = NEW_standard__NativeArray(var1191, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1192)->values[0] = (val*) var1181;
((struct instance_standard__NativeArray*)var1192)->values[1] = (val*) var_mtype;
((struct instance_standard__NativeArray*)var1192)->values[2] = (val*) var1186;
{
((void (*)(val* self, val* p0, long p1))(var1190->class->vft[COLOR_standard__array__Array__with_native]))(var1190, var1192, var1191) /* with_native on <var1190:Array[Object]>*/;
}
}
{
var1193 = ((val* (*)(val* self))(var1190->class->vft[COLOR_standard__string__Object__to_s]))(var1190) /* to_s on <var1190:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var1193); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
var1194 = nit__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
if (varonce1195) {
var1196 = varonce1195;
} else {
var1197 = " NEW_";
var1198 = 5;
var1199 = standard___standard__NativeString___to_s_with_length(var1197, var1198);
var1196 = var1199;
varonce1195 = var1196;
}
if (varonce1200) {
var1201 = varonce1200;
} else {
var1202 = "(void) {";
var1203 = 8;
var1204 = standard___standard__NativeString___to_s_with_length(var1202, var1203);
var1201 = var1204;
varonce1200 = var1201;
}
var1205 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1205 = array_instance Array[Object] */
var1206 = 4;
var1207 = NEW_standard__NativeArray(var1206, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1207)->values[0] = (val*) var1194;
((struct instance_standard__NativeArray*)var1207)->values[1] = (val*) var1196;
((struct instance_standard__NativeArray*)var1207)->values[2] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var1207)->values[3] = (val*) var1201;
{
((void (*)(val* self, val* p0, long p1))(var1205->class->vft[COLOR_standard__array__Array__with_native]))(var1205, var1207, var1206) /* with_native on <var1205:Array[Object]>*/;
}
}
{
var1208 = ((val* (*)(val* self))(var1205->class->vft[COLOR_standard__string__Object__to_s]))(var1205) /* to_s on <var1205:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var1208); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (var_is_dead){
if (varonce1209) {
var1210 = varonce1209;
} else {
var1211 = " is DEAD";
var1212 = 8;
var1213 = standard___standard__NativeString___to_s_with_length(var1211, var1212);
var1210 = var1213;
varonce1209 = var1210;
}
var1214 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1214 = array_instance Array[Object] */
var1215 = 2;
var1216 = NEW_standard__NativeArray(var1215, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1216)->values[0] = (val*) var_mclass;
((struct instance_standard__NativeArray*)var1216)->values[1] = (val*) var1210;
{
((void (*)(val* self, val* p0, long p1))(var1214->class->vft[COLOR_standard__array__Array__with_native]))(var1214, var1216, var1215) /* with_native on <var1214:Array[Object]>*/;
}
}
{
var1217 = ((val* (*)(val* self))(var1214->class->vft[COLOR_standard__string__Object__to_s]))(var1214) /* to_s on <var1214:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_abort(var_v, var1217); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (varonce1218) {
var1219 = varonce1218;
} else {
var1220 = "self";
var1221 = 4;
var1222 = standard___standard__NativeString___to_s_with_length(var1220, var1221);
var1219 = var1222;
varonce1218 = var1219;
}
{
var1223 = nit___nit__AbstractCompilerVisitor___new_named_var(var_v, var_mtype, var1219);
}
var_res1224 = var1223;
var1225 = 1;
{
{ /* Inline abstract_compiler#RuntimeVariable#is_exact= (var_res1224,var1225) on <var_res1224:RuntimeVariable> */
var_res1224->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___is_exact].s = var1225; /* _is_exact on <var_res1224:RuntimeVariable> */
RET_LABEL1226:(void)0;
}
}
if (varonce1227) {
var1228 = varonce1227;
} else {
var1229 = " = nit_alloc(sizeof(struct instance) + ";
var1230 = 39;
var1231 = standard___standard__NativeString___to_s_with_length(var1229, var1230);
var1228 = var1231;
varonce1227 = var1228;
}
{
{ /* Inline array#AbstractArrayRead#length (var_attrs) on <var_attrs:Array[nullable MPropDef]> */
var1234 = var_attrs->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_attrs:Array[nullable MPropDef]> */
var1232 = var1234;
RET_LABEL1233:(void)0;
}
}
if (varonce1235) {
var1236 = varonce1235;
} else {
var1237 = "*sizeof(nitattribute_t));";
var1238 = 25;
var1239 = standard___standard__NativeString___to_s_with_length(var1237, var1238);
var1236 = var1239;
varonce1235 = var1236;
}
var1240 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1240 = array_instance Array[Object] */
var1241 = 4;
var1242 = NEW_standard__NativeArray(var1241, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1242)->values[0] = (val*) var_res1224;
((struct instance_standard__NativeArray*)var1242)->values[1] = (val*) var1228;
var1243 = BOX_standard__Int(var1232); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var1242)->values[2] = (val*) var1243;
((struct instance_standard__NativeArray*)var1242)->values[3] = (val*) var1236;
{
((void (*)(val* self, val* p0, long p1))(var1240->class->vft[COLOR_standard__array__Array__with_native]))(var1240, var1242, var1241) /* with_native on <var1240:Array[Object]>*/;
}
}
{
var1244 = ((val* (*)(val* self))(var1240->class->vft[COLOR_standard__string__Object__to_s]))(var1240) /* to_s on <var1240:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var1244); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce1245) {
var1246 = varonce1245;
} else {
var1247 = "class_";
var1248 = 6;
var1249 = standard___standard__NativeString___to_s_with_length(var1247, var1248);
var1246 = var1249;
varonce1245 = var1246;
}
var1250 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1250 = array_instance Array[Object] */
var1251 = 2;
var1252 = NEW_standard__NativeArray(var1251, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1252)->values[0] = (val*) var1246;
((struct instance_standard__NativeArray*)var1252)->values[1] = (val*) var_c_name;
{
((void (*)(val* self, val* p0, long p1))(var1250->class->vft[COLOR_standard__array__Array__with_native]))(var1250, var1252, var1251) /* with_native on <var1250:Array[Object]>*/;
}
}
{
var1253 = ((val* (*)(val* self))(var1250->class->vft[COLOR_standard__string__Object__to_s]))(var1250) /* to_s on <var1250:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(var_v, var1253); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (varonce1254) {
var1255 = varonce1254;
} else {
var1256 = "->class = &class_";
var1257 = 17;
var1258 = standard___standard__NativeString___to_s_with_length(var1256, var1257);
var1255 = var1258;
varonce1254 = var1255;
}
if (varonce1259) {
var1260 = varonce1259;
} else {
var1261 = ";";
var1262 = 1;
var1263 = standard___standard__NativeString___to_s_with_length(var1261, var1262);
var1260 = var1263;
varonce1259 = var1260;
}
var1264 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1264 = array_instance Array[Object] */
var1265 = 4;
var1266 = NEW_standard__NativeArray(var1265, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1266)->values[0] = (val*) var_res1224;
((struct instance_standard__NativeArray*)var1266)->values[1] = (val*) var1255;
((struct instance_standard__NativeArray*)var1266)->values[2] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var1266)->values[3] = (val*) var1260;
{
((void (*)(val* self, val* p0, long p1))(var1264->class->vft[COLOR_standard__array__Array__with_native]))(var1264, var1266, var1265) /* with_native on <var1264:Array[Object]>*/;
}
}
{
var1267 = ((val* (*)(val* self))(var1264->class->vft[COLOR_standard__string__Object__to_s]))(var1264) /* to_s on <var1264:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var1267); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
{
nit___nit__AbstractCompiler___generate_init_attr(self, var_v, var_res1224, var_mtype); /* Direct call abstract_compiler#AbstractCompiler#generate_init_attr on <self:SeparateErasureCompiler>*/
}
{
nit___nit__AbstractCompilerVisitor___set_finalizer(var_v, var_res1224); /* Direct call abstract_compiler#AbstractCompilerVisitor#set_finalizer on <var_v:SeparateCompilerVisitor>*/
}
if (varonce1268) {
var1269 = varonce1268;
} else {
var1270 = "return ";
var1271 = 7;
var1272 = standard___standard__NativeString___to_s_with_length(var1270, var1271);
var1269 = var1272;
varonce1268 = var1269;
}
if (varonce1273) {
var1274 = varonce1273;
} else {
var1275 = ";";
var1276 = 1;
var1277 = standard___standard__NativeString___to_s_with_length(var1275, var1276);
var1274 = var1277;
varonce1273 = var1274;
}
var1278 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1278 = array_instance Array[Object] */
var1279 = 3;
var1280 = NEW_standard__NativeArray(var1279, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1280)->values[0] = (val*) var1269;
((struct instance_standard__NativeArray*)var1280)->values[1] = (val*) var_res1224;
((struct instance_standard__NativeArray*)var1280)->values[2] = (val*) var1274;
{
((void (*)(val* self, val* p0, long p1))(var1278->class->vft[COLOR_standard__array__Array__with_native]))(var1278, var1280, var1279) /* with_native on <var1278:Array[Object]>*/;
}
}
{
var1281 = ((val* (*)(val* self))(var1278->class->vft[COLOR_standard__string__Object__to_s]))(var1278) /* to_s on <var1278:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var1281); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
}
if (varonce1282) {
var1283 = varonce1282;
} else {
var1284 = "}";
var1285 = 1;
var1286 = standard___standard__NativeString___to_s_with_length(var1284, var1285);
var1283 = var1286;
varonce1282 = var1283;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var1283); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#build_class_vts_table for (self: SeparateErasureCompiler, MClass): Bool */
short int nit___nit__SeparateErasureCompiler___build_class_vts_table(val* self, val* p0) {
short int var /* : Bool */;
val* var_mclass /* var mclass: MClass */;
val* var1 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var3 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var4 /* : nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : FlatString */;
val* var11 /* : String */;
val* var12 /* : Array[Object] */;
long var13 /* : Int */;
val* var14 /* : NativeArray[Object] */;
val* var15 /* : String */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : FlatString */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : FlatString */;
val* var27 /* : Array[Object] */;
long var28 /* : Int */;
val* var29 /* : NativeArray[Object] */;
val* var30 /* : String */;
val* var31 /* : SeparateCompilerVisitor */;
val* var_v /* var v: SeparateCompilerVisitor */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
long var35 /* : Int */;
val* var36 /* : FlatString */;
val* var37 /* : String */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
long var41 /* : Int */;
val* var42 /* : FlatString */;
val* var43 /* : Array[Object] */;
long var44 /* : Int */;
val* var45 /* : NativeArray[Object] */;
val* var46 /* : String */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
long var50 /* : Int */;
val* var51 /* : FlatString */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
long var55 /* : Int */;
val* var56 /* : FlatString */;
val* var57 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var59 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var60 /* : nullable Object */;
val* var_ /* var : Array[nullable MPropDef] */;
val* var61 /* : ArrayIterator[nullable Object] */;
val* var_62 /* var : ArrayIterator[nullable MPropDef] */;
short int var63 /* : Bool */;
val* var64 /* : nullable Object */;
val* var_vt /* var vt: nullable MPropDef */;
val* var65 /* : null */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var69 /* : Bool */;
short int var71 /* : Bool */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
long var75 /* : Int */;
val* var76 /* : FlatString */;
long var77 /* : Int */;
long var_is_null /* var is_null: Int */;
val* var78 /* : MClassDef */;
val* var80 /* : MClassDef */;
val* var81 /* : MClassType */;
val* var83 /* : MClassType */;
short int var84 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var85 /* : nullable MType */;
val* var87 /* : nullable MType */;
val* var88 /* : MType */;
val* var_bound /* var bound: MType */;
short int var89 /* : Bool */;
int cltype90;
int idtype91;
val* var92 /* : MClassDef */;
val* var94 /* : MClassDef */;
val* var95 /* : MClassType */;
val* var97 /* : MClassType */;
val* var98 /* : MType */;
val* var100 /* : MType */;
val* var101 /* : MType */;
long var102 /* : Int */;
short int var103 /* : Bool */;
int cltype104;
int idtype105;
const char* var_class_name106;
val* var107 /* : MClass */;
val* var109 /* : MClass */;
val* var_vtclass /* var vtclass: MClass */;
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : NativeString */;
long var113 /* : Int */;
val* var114 /* : FlatString */;
val* var115 /* : String */;
val* var116 /* : Array[Object] */;
long var117 /* : Int */;
val* var118 /* : NativeArray[Object] */;
val* var119 /* : String */;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : NativeString */;
long var123 /* : Int */;
val* var124 /* : FlatString */;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : NativeString */;
long var128 /* : Int */;
val* var129 /* : FlatString */;
val* var130 /* : String */;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : NativeString */;
long var134 /* : Int */;
val* var135 /* : FlatString */;
static val* varonce136;
val* var137 /* : String */;
char* var138 /* : NativeString */;
long var139 /* : Int */;
val* var140 /* : FlatString */;
val* var141 /* : Array[Object] */;
long var142 /* : Int */;
val* var143 /* : NativeArray[Object] */;
val* var144 /* : Object */;
val* var145 /* : String */;
static val* varonce148;
val* var149 /* : String */;
char* var150 /* : NativeString */;
long var151 /* : Int */;
val* var152 /* : FlatString */;
static val* varonce153;
val* var154 /* : String */;
char* var155 /* : NativeString */;
long var156 /* : Int */;
val* var157 /* : FlatString */;
short int var158 /* : Bool */;
var_mclass = p0;
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#vt_tables (self) on <self:SeparateErasureCompiler> */
var3 = self->attrs[COLOR_nit__separate_erasure_compiler__SeparateErasureCompiler___vt_tables].val; /* _vt_tables on <self:SeparateErasureCompiler> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vt_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 417);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val* (*)(val* self, val* p0))(var1->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var1, var_mclass) /* [] on <var1:Map[MClass, Array[nullable MPropDef]]>*/;
}
{
var5 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var4);
}
if (var5){
var6 = 0;
var = var6;
goto RET_LABEL;
} else {
}
if (varonce) {
var7 = varonce;
} else {
var8 = "vts_table_";
var9 = 10;
var10 = standard___standard__NativeString___to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
{
var11 = nit___nit__MClass___nit__model_base__MEntity__c_name(var_mclass);
}
var12 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var12 = array_instance Array[Object] */
var13 = 2;
var14 = NEW_standard__NativeArray(var13, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var14)->values[0] = (val*) var7;
((struct instance_standard__NativeArray*)var14)->values[1] = (val*) var11;
{
((void (*)(val* self, val* p0, long p1))(var12->class->vft[COLOR_standard__array__Array__with_native]))(var12, var14, var13) /* with_native on <var12:Array[Object]>*/;
}
}
{
var15 = ((val* (*)(val* self))(var12->class->vft[COLOR_standard__string__Object__to_s]))(var12) /* to_s on <var12:Array[Object]>*/;
}
if (varonce16) {
var17 = varonce16;
} else {
var18 = "extern const struct vts_table vts_table_";
var19 = 40;
var20 = standard___standard__NativeString___to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
{
var21 = nit___nit__MClass___nit__model_base__MEntity__c_name(var_mclass);
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = ";";
var25 = 1;
var26 = standard___standard__NativeString___to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
var27 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var27 = array_instance Array[Object] */
var28 = 3;
var29 = NEW_standard__NativeArray(var28, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var29)->values[0] = (val*) var17;
((struct instance_standard__NativeArray*)var29)->values[1] = (val*) var21;
((struct instance_standard__NativeArray*)var29)->values[2] = (val*) var23;
{
((void (*)(val* self, val* p0, long p1))(var27->class->vft[COLOR_standard__array__Array__with_native]))(var27, var29, var28) /* with_native on <var27:Array[Object]>*/;
}
}
{
var30 = ((val* (*)(val* self))(var27->class->vft[COLOR_standard__string__Object__to_s]))(var27) /* to_s on <var27:Array[Object]>*/;
}
{
nit___nit__AbstractCompiler___provide_declaration(self, var15, var30); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateErasureCompiler>*/
}
{
var31 = nit___nit__SeparateErasureCompiler___nit__abstract_compiler__AbstractCompiler__new_visitor(self);
}
var_v = var31;
if (varonce32) {
var33 = varonce32;
} else {
var34 = "const struct vts_table vts_table_";
var35 = 33;
var36 = standard___standard__NativeString___to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
{
var37 = nit___nit__MClass___nit__model_base__MEntity__c_name(var_mclass);
}
if (varonce38) {
var39 = varonce38;
} else {
var40 = " = {";
var41 = 4;
var42 = standard___standard__NativeString___to_s_with_length(var40, var41);
var39 = var42;
varonce38 = var39;
}
var43 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var43 = array_instance Array[Object] */
var44 = 3;
var45 = NEW_standard__NativeArray(var44, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var45)->values[0] = (val*) var33;
((struct instance_standard__NativeArray*)var45)->values[1] = (val*) var37;
((struct instance_standard__NativeArray*)var45)->values[2] = (val*) var39;
{
((void (*)(val* self, val* p0, long p1))(var43->class->vft[COLOR_standard__array__Array__with_native]))(var43, var45, var44) /* with_native on <var43:Array[Object]>*/;
}
}
{
var46 = ((val* (*)(val* self))(var43->class->vft[COLOR_standard__string__Object__to_s]))(var43) /* to_s on <var43:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var46); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce47) {
var48 = varonce47;
} else {
var49 = "0, /* dummy */";
var50 = 14;
var51 = standard___standard__NativeString___to_s_with_length(var49, var50);
var48 = var51;
varonce47 = var48;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var48); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce52) {
var53 = varonce52;
} else {
var54 = "{";
var55 = 1;
var56 = standard___standard__NativeString___to_s_with_length(var54, var55);
var53 = var56;
varonce52 = var53;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var53); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#vt_tables (self) on <self:SeparateErasureCompiler> */
var59 = self->attrs[COLOR_nit__separate_erasure_compiler__SeparateErasureCompiler___vt_tables].val; /* _vt_tables on <self:SeparateErasureCompiler> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vt_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 417);
show_backtrace(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
var60 = ((val* (*)(val* self, val* p0))(var57->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var57, var_mclass) /* [] on <var57:Map[MClass, Array[nullable MPropDef]]>*/;
}
var_ = var60;
{
var61 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_62 = var61;
for(;;) {
{
var63 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_62);
}
if (var63){
{
var64 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_62);
}
var_vt = var64;
var65 = NULL;
if (var_vt == NULL) {
var66 = 1; /* is null */
} else {
var66 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_vt,var65) on <var_vt:nullable MPropDef> */
var_other = var65;
{
{ /* Inline kernel#Object#is_same_instance (var_vt,var_other) on <var_vt:nullable MPropDef(MPropDef)> */
var71 = var_vt == var_other;
var69 = var71;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
}
var67 = var69;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
var66 = var67;
}
if (var66){
if (varonce72) {
var73 = varonce72;
} else {
var74 = "{-1, NULL}, /* empty */";
var75 = 23;
var76 = standard___standard__NativeString___to_s_with_length(var74, var75);
var73 = var76;
varonce72 = var73;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var73); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
var77 = 0;
var_is_null = var77;
{
{ /* Inline model#MClass#intro (var_mclass) on <var_mclass:MClass> */
var80 = var_mclass->attrs[COLOR_nit__model__MClass___intro].val; /* _intro on <var_mclass:MClass> */
if (unlikely(var80 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 423);
show_backtrace(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var78) on <var78:MClassDef> */
var83 = var78->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var78:MClassDef> */
if (unlikely(var83 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
/* <var_vt:nullable MPropDef(MPropDef)> isa MVirtualTypeDef */
cltype = type_nit__MVirtualTypeDef.color;
idtype = type_nit__MVirtualTypeDef.id;
if(cltype >= var_vt->type->table_size) {
var84 = 0;
} else {
var84 = var_vt->type->type_table[cltype] == idtype;
}
if (unlikely(!var84)) {
var_class_name = var_vt == NULL ? "null" : var_vt->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MVirtualTypeDef", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 378);
show_backtrace(1);
}
{
{ /* Inline model#MVirtualTypeDef#bound (var_vt) on <var_vt:MPropDef(MVirtualTypeDef)> */
var87 = var_vt->attrs[COLOR_nit__model__MVirtualTypeDef___bound].val; /* _bound on <var_vt:MPropDef(MVirtualTypeDef)> */
var85 = var87;
RET_LABEL86:(void)0;
}
}
{
var88 = nit___nit__SeparateErasureCompiler___retrieve_vt_bound(self, var81, var85);
}
var_bound = var88;
for(;;) {
/* <var_bound:MType> isa MNullableType */
cltype90 = type_nit__MNullableType.color;
idtype91 = type_nit__MNullableType.id;
if(cltype90 >= var_bound->type->table_size) {
var89 = 0;
} else {
var89 = var_bound->type->type_table[cltype90] == idtype91;
}
if (var89){
{
{ /* Inline model#MClass#intro (var_mclass) on <var_mclass:MClass> */
var94 = var_mclass->attrs[COLOR_nit__model__MClass___intro].val; /* _intro on <var_mclass:MClass> */
if (unlikely(var94 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 423);
show_backtrace(1);
}
var92 = var94;
RET_LABEL93:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var92) on <var92:MClassDef> */
var97 = var92->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var92:MClassDef> */
if (unlikely(var97 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var95 = var97;
RET_LABEL96:(void)0;
}
}
{
{ /* Inline model#MNullableType#mtype (var_bound) on <var_bound:MType(MNullableType)> */
var100 = var_bound->attrs[COLOR_nit__model__MNullableType___mtype].val; /* _mtype on <var_bound:MType(MNullableType)> */
if (unlikely(var100 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1506);
show_backtrace(1);
}
var98 = var100;
RET_LABEL99:(void)0;
}
}
{
var101 = nit___nit__SeparateErasureCompiler___retrieve_vt_bound(self, var95, var98);
}
var_bound = var101;
var102 = 1;
var_is_null = var102;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
/* <var_bound:MType> isa MClassType */
cltype104 = type_nit__MClassType.color;
idtype105 = type_nit__MClassType.id;
if(cltype104 >= var_bound->type->table_size) {
var103 = 0;
} else {
var103 = var_bound->type->type_table[cltype104] == idtype105;
}
if (unlikely(!var103)) {
var_class_name106 = var_bound == NULL ? "null" : var_bound->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name106);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 383);
show_backtrace(1);
}
{
{ /* Inline model#MClassType#mclass (var_bound) on <var_bound:MType(MClassType)> */
var109 = var_bound->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_bound:MType(MClassType)> */
if (unlikely(var109 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var107 = var109;
RET_LABEL108:(void)0;
}
}
var_vtclass = var107;
if (varonce110) {
var111 = varonce110;
} else {
var112 = "class_";
var113 = 6;
var114 = standard___standard__NativeString___to_s_with_length(var112, var113);
var111 = var114;
varonce110 = var111;
}
{
var115 = nit___nit__MClass___nit__model_base__MEntity__c_name(var_vtclass);
}
var116 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var116 = array_instance Array[Object] */
var117 = 2;
var118 = NEW_standard__NativeArray(var117, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var118)->values[0] = (val*) var111;
((struct instance_standard__NativeArray*)var118)->values[1] = (val*) var115;
{
((void (*)(val* self, val* p0, long p1))(var116->class->vft[COLOR_standard__array__Array__with_native]))(var116, var118, var117) /* with_native on <var116:Array[Object]>*/;
}
}
{
var119 = ((val* (*)(val* self))(var116->class->vft[COLOR_standard__string__Object__to_s]))(var116) /* to_s on <var116:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(var_v, var119); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (varonce120) {
var121 = varonce120;
} else {
var122 = "{";
var123 = 1;
var124 = standard___standard__NativeString___to_s_with_length(var122, var123);
var121 = var124;
varonce120 = var121;
}
if (varonce125) {
var126 = varonce125;
} else {
var127 = ", &class_";
var128 = 9;
var129 = standard___standard__NativeString___to_s_with_length(var127, var128);
var126 = var129;
varonce125 = var126;
}
{
var130 = nit___nit__MClass___nit__model_base__MEntity__c_name(var_vtclass);
}
if (varonce131) {
var132 = varonce131;
} else {
var133 = "}, /* ";
var134 = 6;
var135 = standard___standard__NativeString___to_s_with_length(var133, var134);
var132 = var135;
varonce131 = var132;
}
if (varonce136) {
var137 = varonce136;
} else {
var138 = " */";
var139 = 3;
var140 = standard___standard__NativeString___to_s_with_length(var138, var139);
var137 = var140;
varonce136 = var137;
}
var141 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var141 = array_instance Array[Object] */
var142 = 7;
var143 = NEW_standard__NativeArray(var142, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var143)->values[0] = (val*) var121;
var144 = BOX_standard__Int(var_is_null); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var143)->values[1] = (val*) var144;
((struct instance_standard__NativeArray*)var143)->values[2] = (val*) var126;
((struct instance_standard__NativeArray*)var143)->values[3] = (val*) var130;
((struct instance_standard__NativeArray*)var143)->values[4] = (val*) var132;
((struct instance_standard__NativeArray*)var143)->values[5] = (val*) var_vt;
((struct instance_standard__NativeArray*)var143)->values[6] = (val*) var137;
{
((void (*)(val* self, val* p0, long p1))(var141->class->vft[COLOR_standard__array__Array__with_native]))(var141, var143, var142) /* with_native on <var141:Array[Object]>*/;
}
}
{
var145 = ((val* (*)(val* self))(var141->class->vft[COLOR_standard__string__Object__to_s]))(var141) /* to_s on <var141:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var145); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_62); /* Direct call array#ArrayIterator#next on <var_62:ArrayIterator[nullable MPropDef]>*/
}
} else {
goto BREAK_label146;
}
}
BREAK_label146: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_62) on <var_62:ArrayIterator[nullable MPropDef]> */
RET_LABEL147:(void)0;
}
}
if (varonce148) {
var149 = varonce148;
} else {
var150 = "},";
var151 = 2;
var152 = standard___standard__NativeString___to_s_with_length(var150, var151);
var149 = var152;
varonce148 = var149;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var149); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce153) {
var154 = varonce153;
} else {
var155 = "};";
var156 = 2;
var157 = standard___standard__NativeString___to_s_with_length(var155, var156);
var154 = var157;
varonce153 = var154;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var154); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
var158 = 1;
var = var158;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#retrieve_vt_bound for (self: SeparateErasureCompiler, MClassType, nullable MType): MType */
val* nit___nit__SeparateErasureCompiler___retrieve_vt_bound(val* self, val* p0, val* p1) {
val* var /* : MType */;
val* var_anchor /* var anchor: MClassType */;
val* var_mtype /* var mtype: nullable MType */;
val* var1 /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : FlatString */;
short int var12 /* : Bool */;
int cltype;
int idtype;
val* var13 /* : MModule */;
val* var15 /* : MModule */;
val* var16 /* : MType */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var20 /* : MModule */;
val* var22 /* : MModule */;
val* var23 /* : MType */;
var_anchor = p0;
var_mtype = p1;
var1 = NULL;
if (var_mtype == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var1) on <var_mtype:nullable MType> */
var_other = var1;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var7 = var_mtype == var_other;
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
if (varonce) {
var8 = varonce;
} else {
var9 = "NOT YET IMPLEMENTED: retrieve_vt_bound on null";
var10 = 46;
var11 = standard___standard__NativeString___to_s_with_length(var9, var10);
var8 = var11;
varonce = var8;
}
{
standard__file___Object___print(self, var8); /* Direct call file#Object#print on <self:SeparateErasureCompiler>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 396);
show_backtrace(1);
} else {
}
/* <var_mtype:nullable MType(MType)> isa MVirtualType */
cltype = type_nit__MVirtualType.color;
idtype = type_nit__MVirtualType.id;
if(cltype >= var_mtype->type->table_size) {
var12 = 0;
} else {
var12 = var_mtype->type->type_table[cltype] == idtype;
}
if (var12){
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateErasureCompiler> */
var15 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 474);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = nit___nit__MType___anchor_to(var_mtype, var13, var_anchor);
}
var = var16;
goto RET_LABEL;
} else {
/* <var_mtype:nullable MType(MType)> isa MParameterType */
cltype18 = type_nit__MParameterType.color;
idtype19 = type_nit__MParameterType.id;
if(cltype18 >= var_mtype->type->table_size) {
var17 = 0;
} else {
var17 = var_mtype->type->type_table[cltype18] == idtype19;
}
if (var17){
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateErasureCompiler> */
var22 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 474);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = nit___nit__MType___anchor_to(var_mtype, var20, var_anchor);
}
var = var23;
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
void nit___nit__SeparateErasureCompiler___nit__separate_compiler__SeparateCompiler__compile_types(val* self) {
val* var /* : Map[MVirtualTypeProp, Int] */;
val* var2 /* : Map[MVirtualTypeProp, Int] */;
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#vt_colors (self) on <self:SeparateErasureCompiler> */
var2 = self->attrs[COLOR_nit__separate_erasure_compiler__SeparateErasureCompiler___vt_colors].val; /* _vt_colors on <self:SeparateErasureCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vt_colors");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 81);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nit___nit__SeparateCompiler___compile_color_consts(self, var); /* Direct call separate_compiler#SeparateCompiler#compile_color_consts on <self:SeparateErasureCompiler>*/
}
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#new_visitor for (self: SeparateErasureCompiler): SeparateCompilerVisitor */
val* nit___nit__SeparateErasureCompiler___nit__abstract_compiler__AbstractCompiler__new_visitor(val* self) {
val* var /* : SeparateCompilerVisitor */;
val* var1 /* : SeparateErasureCompilerVisitor */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var1 = NEW_nit__SeparateErasureCompilerVisitor(&type_nit__SeparateErasureCompilerVisitor);
{
((void (*)(val* self, val* p0))(var1->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__compiler_61d]))(var1, self) /* compiler= on <var1:SeparateErasureCompilerVisitor>*/;
}
{
((void (*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1) /* init on <var1:SeparateErasureCompilerVisitor>*/;
}
/* <var1:SeparateErasureCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_nit__abstract_compiler__AbstractCompiler__VISITOR];
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 412);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#class_tables for (self: SeparateErasureCompiler): Map[MClass, Array[nullable MClass]] */
val* nit___nit__SeparateErasureCompiler___class_tables(val* self) {
val* var /* : Map[MClass, Array[nullable MClass]] */;
val* var1 /* : Map[MClass, Array[nullable MClass]] */;
var1 = self->attrs[COLOR_nit__separate_erasure_compiler__SeparateErasureCompiler___class_tables].val; /* _class_tables on <self:SeparateErasureCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _class_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 416);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#class_tables= for (self: SeparateErasureCompiler, Map[MClass, Array[nullable MClass]]) */
void nit___nit__SeparateErasureCompiler___class_tables_61d(val* self, val* p0) {
self->attrs[COLOR_nit__separate_erasure_compiler__SeparateErasureCompiler___class_tables].val = p0; /* _class_tables on <self:SeparateErasureCompiler> */
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#vt_tables for (self: SeparateErasureCompiler): Map[MClass, Array[nullable MPropDef]] */
val* nit___nit__SeparateErasureCompiler___vt_tables(val* self) {
val* var /* : Map[MClass, Array[nullable MPropDef]] */;
val* var1 /* : Map[MClass, Array[nullable MPropDef]] */;
var1 = self->attrs[COLOR_nit__separate_erasure_compiler__SeparateErasureCompiler___vt_tables].val; /* _vt_tables on <self:SeparateErasureCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vt_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 417);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#vt_tables= for (self: SeparateErasureCompiler, Map[MClass, Array[nullable MPropDef]]) */
void nit___nit__SeparateErasureCompiler___vt_tables_61d(val* self, val* p0) {
self->attrs[COLOR_nit__separate_erasure_compiler__SeparateErasureCompiler___vt_tables].val = p0; /* _vt_tables on <self:SeparateErasureCompiler> */
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#display_sizes for (self: SeparateErasureCompiler) */
void nit___nit__SeparateErasureCompiler___nit__separate_compiler__SeparateCompiler__display_sizes(val* self) {
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : FlatString */;
static val* varonce4;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : FlatString */;
long var9 /* : Int */;
long var_total /* var total: Int */;
long var10 /* : Int */;
long var_holes /* var holes: Int */;
val* var11 /* : Map[MClass, Array[nullable MClass]] */;
val* var13 /* : Map[MClass, Array[nullable MClass]] */;
val* var_ /* var : Map[MClass, Array[nullable MClass]] */;
val* var14 /* : MapIterator[nullable Object, nullable Object] */;
val* var_15 /* var : MapIterator[MClass, Array[nullable MClass]] */;
short int var16 /* : Bool */;
val* var17 /* : nullable Object */;
val* var_t /* var t: MClass */;
val* var18 /* : nullable Object */;
val* var_table /* var table: Array[nullable MClass] */;
long var19 /* : Int */;
long var21 /* : Int */;
long var22 /* : Int */;
short int var24 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var25 /* : Int */;
val* var_26 /* var : Array[nullable MClass] */;
val* var27 /* : ArrayIterator[nullable Object] */;
val* var_28 /* var : ArrayIterator[nullable MClass] */;
short int var29 /* : Bool */;
val* var30 /* : nullable Object */;
val* var_e /* var e: nullable MClass */;
val* var31 /* : null */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
long var38 /* : Int */;
long var39 /* : Int */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
const char* var_class_name44;
long var45 /* : Int */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
long var52 /* : Int */;
val* var53 /* : FlatString */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
long var57 /* : Int */;
val* var58 /* : FlatString */;
val* var59 /* : Array[Object] */;
long var60 /* : Int */;
val* var61 /* : NativeArray[Object] */;
val* var62 /* : Object */;
val* var63 /* : Object */;
val* var64 /* : String */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
long var68 /* : Int */;
val* var69 /* : FlatString */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
long var73 /* : Int */;
val* var74 /* : FlatString */;
long var75 /* : Int */;
long var76 /* : Int */;
val* var77 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var79 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var_80 /* var : Map[MClass, Array[nullable MPropDef]] */;
val* var81 /* : MapIterator[nullable Object, nullable Object] */;
val* var_82 /* var : MapIterator[MClass, Array[nullable MPropDef]] */;
short int var83 /* : Bool */;
val* var84 /* : nullable Object */;
val* var_t85 /* var t: MClass */;
val* var86 /* : nullable Object */;
val* var_table87 /* var table: Array[nullable MPropDef] */;
long var88 /* : Int */;
long var90 /* : Int */;
long var91 /* : Int */;
short int var93 /* : Bool */;
int cltype94;
int idtype95;
const char* var_class_name96;
long var97 /* : Int */;
val* var_98 /* var : Array[nullable MPropDef] */;
val* var99 /* : ArrayIterator[nullable Object] */;
val* var_100 /* var : ArrayIterator[nullable MPropDef] */;
short int var101 /* : Bool */;
val* var102 /* : nullable Object */;
val* var_e103 /* var e: nullable MPropDef */;
val* var104 /* : null */;
short int var105 /* : Bool */;
short int var106 /* : Bool */;
short int var108 /* : Bool */;
short int var110 /* : Bool */;
long var111 /* : Int */;
long var112 /* : Int */;
short int var114 /* : Bool */;
int cltype115;
int idtype116;
const char* var_class_name117;
long var118 /* : Int */;
static val* varonce123;
val* var124 /* : String */;
char* var125 /* : NativeString */;
long var126 /* : Int */;
val* var127 /* : FlatString */;
static val* varonce128;
val* var129 /* : String */;
char* var130 /* : NativeString */;
long var131 /* : Int */;
val* var132 /* : FlatString */;
val* var133 /* : Array[Object] */;
long var134 /* : Int */;
val* var135 /* : NativeArray[Object] */;
val* var136 /* : Object */;
val* var137 /* : Object */;
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
long var149 /* : Int */;
long var150 /* : Int */;
val* var151 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var153 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var_154 /* var : Map[MClass, Array[nullable MPropDef]] */;
val* var155 /* : MapIterator[nullable Object, nullable Object] */;
val* var_156 /* var : MapIterator[MClass, Array[nullable MPropDef]] */;
short int var157 /* : Bool */;
val* var158 /* : nullable Object */;
val* var_t159 /* var t: MClass */;
val* var160 /* : nullable Object */;
val* var_table161 /* var table: Array[nullable MPropDef] */;
long var162 /* : Int */;
long var164 /* : Int */;
long var165 /* : Int */;
short int var167 /* : Bool */;
int cltype168;
int idtype169;
const char* var_class_name170;
long var171 /* : Int */;
val* var_172 /* var : Array[nullable MPropDef] */;
val* var173 /* : ArrayIterator[nullable Object] */;
val* var_174 /* var : ArrayIterator[nullable MPropDef] */;
short int var175 /* : Bool */;
val* var176 /* : nullable Object */;
val* var_e177 /* var e: nullable MPropDef */;
val* var178 /* : null */;
short int var179 /* : Bool */;
short int var180 /* : Bool */;
short int var182 /* : Bool */;
short int var184 /* : Bool */;
long var185 /* : Int */;
long var186 /* : Int */;
short int var188 /* : Bool */;
int cltype189;
int idtype190;
const char* var_class_name191;
long var192 /* : Int */;
static val* varonce197;
val* var198 /* : String */;
char* var199 /* : NativeString */;
long var200 /* : Int */;
val* var201 /* : FlatString */;
static val* varonce202;
val* var203 /* : String */;
char* var204 /* : NativeString */;
long var205 /* : Int */;
val* var206 /* : FlatString */;
val* var207 /* : Array[Object] */;
long var208 /* : Int */;
val* var209 /* : NativeArray[Object] */;
val* var210 /* : Object */;
val* var211 /* : Object */;
val* var212 /* : String */;
static val* varonce213;
val* var214 /* : String */;
char* var215 /* : NativeString */;
long var216 /* : Int */;
val* var217 /* : FlatString */;
static val* varonce218;
val* var219 /* : String */;
char* var220 /* : NativeString */;
long var221 /* : Int */;
val* var222 /* : FlatString */;
long var223 /* : Int */;
long var224 /* : Int */;
val* var225 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var227 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var_228 /* var : Map[MClass, Array[nullable MPropDef]] */;
val* var229 /* : MapIterator[nullable Object, nullable Object] */;
val* var_230 /* var : MapIterator[MClass, Array[nullable MPropDef]] */;
short int var231 /* : Bool */;
val* var232 /* : nullable Object */;
val* var_t233 /* var t: MClass */;
val* var234 /* : nullable Object */;
val* var_table235 /* var table: Array[nullable MPropDef] */;
long var236 /* : Int */;
long var238 /* : Int */;
long var239 /* : Int */;
short int var241 /* : Bool */;
int cltype242;
int idtype243;
const char* var_class_name244;
long var245 /* : Int */;
val* var_246 /* var : Array[nullable MPropDef] */;
val* var247 /* : ArrayIterator[nullable Object] */;
val* var_248 /* var : ArrayIterator[nullable MPropDef] */;
short int var249 /* : Bool */;
val* var250 /* : nullable Object */;
val* var_e251 /* var e: nullable MPropDef */;
val* var252 /* : null */;
short int var253 /* : Bool */;
short int var254 /* : Bool */;
short int var256 /* : Bool */;
short int var258 /* : Bool */;
long var259 /* : Int */;
long var260 /* : Int */;
short int var262 /* : Bool */;
int cltype263;
int idtype264;
const char* var_class_name265;
long var266 /* : Int */;
static val* varonce271;
val* var272 /* : String */;
char* var273 /* : NativeString */;
long var274 /* : Int */;
val* var275 /* : FlatString */;
static val* varonce276;
val* var277 /* : String */;
char* var278 /* : NativeString */;
long var279 /* : Int */;
val* var280 /* : FlatString */;
val* var281 /* : Array[Object] */;
long var282 /* : Int */;
val* var283 /* : NativeArray[Object] */;
val* var284 /* : Object */;
val* var285 /* : Object */;
val* var286 /* : String */;
if (varonce) {
var = varonce;
} else {
var1 = "# size of subtyping tables";
var2 = 26;
var3 = standard___standard__NativeString___to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
standard__file___Object___print(self, var); /* Direct call file#Object#print on <self:SeparateErasureCompiler>*/
}
if (varonce4) {
var5 = varonce4;
} else {
var6 = "\11total \11holes";
var7 = 13;
var8 = standard___standard__NativeString___to_s_with_length(var6, var7);
var5 = var8;
varonce4 = var5;
}
{
standard__file___Object___print(self, var5); /* Direct call file#Object#print on <self:SeparateErasureCompiler>*/
}
var9 = 0;
var_total = var9;
var10 = 0;
var_holes = var10;
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#class_tables (self) on <self:SeparateErasureCompiler> */
var13 = self->attrs[COLOR_nit__separate_erasure_compiler__SeparateErasureCompiler___class_tables].val; /* _class_tables on <self:SeparateErasureCompiler> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _class_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 416);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
var_ = var11;
{
var14 = ((val* (*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__MapRead__iterator]))(var_) /* iterator on <var_:Map[MClass, Array[nullable MClass]]>*/;
}
var_15 = var14;
for(;;) {
{
var16 = ((short int (*)(val* self))(var_15->class->vft[COLOR_standard__abstract_collection__MapIterator__is_ok]))(var_15) /* is_ok on <var_15:MapIterator[MClass, Array[nullable MClass]]>*/;
}
if (var16){
{
var17 = ((val* (*)(val* self))(var_15->class->vft[COLOR_standard__abstract_collection__MapIterator__key]))(var_15) /* key on <var_15:MapIterator[MClass, Array[nullable MClass]]>*/;
}
var_t = var17;
{
var18 = ((val* (*)(val* self))(var_15->class->vft[COLOR_standard__abstract_collection__MapIterator__item]))(var_15) /* item on <var_15:MapIterator[MClass, Array[nullable MClass]]>*/;
}
var_table = var18;
{
{ /* Inline array#AbstractArrayRead#length (var_table) on <var_table:Array[nullable MClass]> */
var21 = var_table->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_table:Array[nullable MClass]> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_total,var19) on <var_total:Int> */
/* Covariant cast for argument 0 (i) <var19:Int> isa OTHER */
/* <var19:Int> isa OTHER */
var24 = 1; /* easy <var19:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var25 = var_total + var19;
var22 = var25;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var_total = var22;
var_26 = var_table;
{
var27 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_26);
}
var_28 = var27;
for(;;) {
{
var29 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_28);
}
if (var29){
{
var30 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_28);
}
var_e = var30;
var31 = NULL;
if (var_e == NULL) {
var32 = 1; /* is null */
} else {
var32 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_e,var31) on <var_e:nullable MClass> */
var_other = var31;
{
{ /* Inline kernel#Object#is_same_instance (var_e,var_other) on <var_e:nullable MClass(MClass)> */
var37 = var_e == var_other;
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
var32 = var33;
}
if (var32){
var38 = 1;
{
{ /* Inline kernel#Int#+ (var_holes,var38) on <var_holes:Int> */
/* Covariant cast for argument 0 (i) <var38:Int> isa OTHER */
/* <var38:Int> isa OTHER */
var41 = 1; /* easy <var38:Int> isa OTHER*/
if (unlikely(!var41)) {
var_class_name44 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name44);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var45 = var_holes + var38;
var39 = var45;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var_holes = var39;
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_28); /* Direct call array#ArrayIterator#next on <var_28:ArrayIterator[nullable MClass]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_28) on <var_28:ArrayIterator[nullable MClass]> */
RET_LABEL46:(void)0;
}
}
{
((void (*)(val* self))(var_15->class->vft[COLOR_standard__abstract_collection__MapIterator__next]))(var_15) /* next on <var_15:MapIterator[MClass, Array[nullable MClass]]>*/;
}
} else {
goto BREAK_label47;
}
}
BREAK_label47: (void)0;
{
{ /* Inline abstract_collection#MapIterator#finish (var_15) on <var_15:MapIterator[MClass, Array[nullable MClass]]> */
RET_LABEL48:(void)0;
}
}
if (varonce49) {
var50 = varonce49;
} else {
var51 = "\11";
var52 = 1;
var53 = standard___standard__NativeString___to_s_with_length(var51, var52);
var50 = var53;
varonce49 = var50;
}
if (varonce54) {
var55 = varonce54;
} else {
var56 = "\11";
var57 = 1;
var58 = standard___standard__NativeString___to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
var59 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var59 = array_instance Array[Object] */
var60 = 4;
var61 = NEW_standard__NativeArray(var60, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var61)->values[0] = (val*) var50;
var62 = BOX_standard__Int(var_total); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var61)->values[1] = (val*) var62;
((struct instance_standard__NativeArray*)var61)->values[2] = (val*) var55;
var63 = BOX_standard__Int(var_holes); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var61)->values[3] = (val*) var63;
{
((void (*)(val* self, val* p0, long p1))(var59->class->vft[COLOR_standard__array__Array__with_native]))(var59, var61, var60) /* with_native on <var59:Array[Object]>*/;
}
}
{
var64 = ((val* (*)(val* self))(var59->class->vft[COLOR_standard__string__Object__to_s]))(var59) /* to_s on <var59:Array[Object]>*/;
}
{
standard__file___Object___print(self, var64); /* Direct call file#Object#print on <self:SeparateErasureCompiler>*/
}
if (varonce65) {
var66 = varonce65;
} else {
var67 = "# size of resolution tables";
var68 = 27;
var69 = standard___standard__NativeString___to_s_with_length(var67, var68);
var66 = var69;
varonce65 = var66;
}
{
standard__file___Object___print(self, var66); /* Direct call file#Object#print on <self:SeparateErasureCompiler>*/
}
if (varonce70) {
var71 = varonce70;
} else {
var72 = "\11total \11holes";
var73 = 13;
var74 = standard___standard__NativeString___to_s_with_length(var72, var73);
var71 = var74;
varonce70 = var71;
}
{
standard__file___Object___print(self, var71); /* Direct call file#Object#print on <self:SeparateErasureCompiler>*/
}
var75 = 0;
var_total = var75;
var76 = 0;
var_holes = var76;
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#vt_tables (self) on <self:SeparateErasureCompiler> */
var79 = self->attrs[COLOR_nit__separate_erasure_compiler__SeparateErasureCompiler___vt_tables].val; /* _vt_tables on <self:SeparateErasureCompiler> */
if (unlikely(var79 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vt_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 417);
show_backtrace(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
var_80 = var77;
{
var81 = ((val* (*)(val* self))(var_80->class->vft[COLOR_standard__abstract_collection__MapRead__iterator]))(var_80) /* iterator on <var_80:Map[MClass, Array[nullable MPropDef]]>*/;
}
var_82 = var81;
for(;;) {
{
var83 = ((short int (*)(val* self))(var_82->class->vft[COLOR_standard__abstract_collection__MapIterator__is_ok]))(var_82) /* is_ok on <var_82:MapIterator[MClass, Array[nullable MPropDef]]>*/;
}
if (var83){
{
var84 = ((val* (*)(val* self))(var_82->class->vft[COLOR_standard__abstract_collection__MapIterator__key]))(var_82) /* key on <var_82:MapIterator[MClass, Array[nullable MPropDef]]>*/;
}
var_t85 = var84;
{
var86 = ((val* (*)(val* self))(var_82->class->vft[COLOR_standard__abstract_collection__MapIterator__item]))(var_82) /* item on <var_82:MapIterator[MClass, Array[nullable MPropDef]]>*/;
}
var_table87 = var86;
{
{ /* Inline array#AbstractArrayRead#length (var_table87) on <var_table87:Array[nullable MPropDef]> */
var90 = var_table87->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_table87:Array[nullable MPropDef]> */
var88 = var90;
RET_LABEL89:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_total,var88) on <var_total:Int> */
/* Covariant cast for argument 0 (i) <var88:Int> isa OTHER */
/* <var88:Int> isa OTHER */
var93 = 1; /* easy <var88:Int> isa OTHER*/
if (unlikely(!var93)) {
var_class_name96 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name96);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var97 = var_total + var88;
var91 = var97;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
}
var_total = var91;
var_98 = var_table87;
{
var99 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_98);
}
var_100 = var99;
for(;;) {
{
var101 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_100);
}
if (var101){
{
var102 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_100);
}
var_e103 = var102;
var104 = NULL;
if (var_e103 == NULL) {
var105 = 1; /* is null */
} else {
var105 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_e103,var104) on <var_e103:nullable MPropDef> */
var_other = var104;
{
{ /* Inline kernel#Object#is_same_instance (var_e103,var_other) on <var_e103:nullable MPropDef(MPropDef)> */
var110 = var_e103 == var_other;
var108 = var110;
goto RET_LABEL109;
RET_LABEL109:(void)0;
}
}
var106 = var108;
goto RET_LABEL107;
RET_LABEL107:(void)0;
}
var105 = var106;
}
if (var105){
var111 = 1;
{
{ /* Inline kernel#Int#+ (var_holes,var111) on <var_holes:Int> */
/* Covariant cast for argument 0 (i) <var111:Int> isa OTHER */
/* <var111:Int> isa OTHER */
var114 = 1; /* easy <var111:Int> isa OTHER*/
if (unlikely(!var114)) {
var_class_name117 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name117);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var118 = var_holes + var111;
var112 = var118;
goto RET_LABEL113;
RET_LABEL113:(void)0;
}
}
var_holes = var112;
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_100); /* Direct call array#ArrayIterator#next on <var_100:ArrayIterator[nullable MPropDef]>*/
}
} else {
goto BREAK_label119;
}
}
BREAK_label119: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_100) on <var_100:ArrayIterator[nullable MPropDef]> */
RET_LABEL120:(void)0;
}
}
{
((void (*)(val* self))(var_82->class->vft[COLOR_standard__abstract_collection__MapIterator__next]))(var_82) /* next on <var_82:MapIterator[MClass, Array[nullable MPropDef]]>*/;
}
} else {
goto BREAK_label121;
}
}
BREAK_label121: (void)0;
{
{ /* Inline abstract_collection#MapIterator#finish (var_82) on <var_82:MapIterator[MClass, Array[nullable MPropDef]]> */
RET_LABEL122:(void)0;
}
}
if (varonce123) {
var124 = varonce123;
} else {
var125 = "\11";
var126 = 1;
var127 = standard___standard__NativeString___to_s_with_length(var125, var126);
var124 = var127;
varonce123 = var124;
}
if (varonce128) {
var129 = varonce128;
} else {
var130 = "\11";
var131 = 1;
var132 = standard___standard__NativeString___to_s_with_length(var130, var131);
var129 = var132;
varonce128 = var129;
}
var133 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var133 = array_instance Array[Object] */
var134 = 4;
var135 = NEW_standard__NativeArray(var134, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var135)->values[0] = (val*) var124;
var136 = BOX_standard__Int(var_total); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var135)->values[1] = (val*) var136;
((struct instance_standard__NativeArray*)var135)->values[2] = (val*) var129;
var137 = BOX_standard__Int(var_holes); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var135)->values[3] = (val*) var137;
{
((void (*)(val* self, val* p0, long p1))(var133->class->vft[COLOR_standard__array__Array__with_native]))(var133, var135, var134) /* with_native on <var133:Array[Object]>*/;
}
}
{
var138 = ((val* (*)(val* self))(var133->class->vft[COLOR_standard__string__Object__to_s]))(var133) /* to_s on <var133:Array[Object]>*/;
}
{
standard__file___Object___print(self, var138); /* Direct call file#Object#print on <self:SeparateErasureCompiler>*/
}
if (varonce139) {
var140 = varonce139;
} else {
var141 = "# size of methods tables";
var142 = 24;
var143 = standard___standard__NativeString___to_s_with_length(var141, var142);
var140 = var143;
varonce139 = var140;
}
{
standard__file___Object___print(self, var140); /* Direct call file#Object#print on <self:SeparateErasureCompiler>*/
}
if (varonce144) {
var145 = varonce144;
} else {
var146 = "\11total \11holes";
var147 = 13;
var148 = standard___standard__NativeString___to_s_with_length(var146, var147);
var145 = var148;
varonce144 = var145;
}
{
standard__file___Object___print(self, var145); /* Direct call file#Object#print on <self:SeparateErasureCompiler>*/
}
var149 = 0;
var_total = var149;
var150 = 0;
var_holes = var150;
{
{ /* Inline separate_compiler#SeparateCompiler#method_tables (self) on <self:SeparateErasureCompiler> */
var153 = self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___method_tables].val; /* _method_tables on <self:SeparateErasureCompiler> */
if (unlikely(var153 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _method_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 856);
show_backtrace(1);
}
var151 = var153;
RET_LABEL152:(void)0;
}
}
var_154 = var151;
{
var155 = ((val* (*)(val* self))(var_154->class->vft[COLOR_standard__abstract_collection__MapRead__iterator]))(var_154) /* iterator on <var_154:Map[MClass, Array[nullable MPropDef]]>*/;
}
var_156 = var155;
for(;;) {
{
var157 = ((short int (*)(val* self))(var_156->class->vft[COLOR_standard__abstract_collection__MapIterator__is_ok]))(var_156) /* is_ok on <var_156:MapIterator[MClass, Array[nullable MPropDef]]>*/;
}
if (var157){
{
var158 = ((val* (*)(val* self))(var_156->class->vft[COLOR_standard__abstract_collection__MapIterator__key]))(var_156) /* key on <var_156:MapIterator[MClass, Array[nullable MPropDef]]>*/;
}
var_t159 = var158;
{
var160 = ((val* (*)(val* self))(var_156->class->vft[COLOR_standard__abstract_collection__MapIterator__item]))(var_156) /* item on <var_156:MapIterator[MClass, Array[nullable MPropDef]]>*/;
}
var_table161 = var160;
{
{ /* Inline array#AbstractArrayRead#length (var_table161) on <var_table161:Array[nullable MPropDef]> */
var164 = var_table161->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_table161:Array[nullable MPropDef]> */
var162 = var164;
RET_LABEL163:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_total,var162) on <var_total:Int> */
/* Covariant cast for argument 0 (i) <var162:Int> isa OTHER */
/* <var162:Int> isa OTHER */
var167 = 1; /* easy <var162:Int> isa OTHER*/
if (unlikely(!var167)) {
var_class_name170 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name170);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var171 = var_total + var162;
var165 = var171;
goto RET_LABEL166;
RET_LABEL166:(void)0;
}
}
var_total = var165;
var_172 = var_table161;
{
var173 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_172);
}
var_174 = var173;
for(;;) {
{
var175 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_174);
}
if (var175){
{
var176 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_174);
}
var_e177 = var176;
var178 = NULL;
if (var_e177 == NULL) {
var179 = 1; /* is null */
} else {
var179 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_e177,var178) on <var_e177:nullable MPropDef> */
var_other = var178;
{
{ /* Inline kernel#Object#is_same_instance (var_e177,var_other) on <var_e177:nullable MPropDef(MPropDef)> */
var184 = var_e177 == var_other;
var182 = var184;
goto RET_LABEL183;
RET_LABEL183:(void)0;
}
}
var180 = var182;
goto RET_LABEL181;
RET_LABEL181:(void)0;
}
var179 = var180;
}
if (var179){
var185 = 1;
{
{ /* Inline kernel#Int#+ (var_holes,var185) on <var_holes:Int> */
/* Covariant cast for argument 0 (i) <var185:Int> isa OTHER */
/* <var185:Int> isa OTHER */
var188 = 1; /* easy <var185:Int> isa OTHER*/
if (unlikely(!var188)) {
var_class_name191 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name191);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var192 = var_holes + var185;
var186 = var192;
goto RET_LABEL187;
RET_LABEL187:(void)0;
}
}
var_holes = var186;
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_174); /* Direct call array#ArrayIterator#next on <var_174:ArrayIterator[nullable MPropDef]>*/
}
} else {
goto BREAK_label193;
}
}
BREAK_label193: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_174) on <var_174:ArrayIterator[nullable MPropDef]> */
RET_LABEL194:(void)0;
}
}
{
((void (*)(val* self))(var_156->class->vft[COLOR_standard__abstract_collection__MapIterator__next]))(var_156) /* next on <var_156:MapIterator[MClass, Array[nullable MPropDef]]>*/;
}
} else {
goto BREAK_label195;
}
}
BREAK_label195: (void)0;
{
{ /* Inline abstract_collection#MapIterator#finish (var_156) on <var_156:MapIterator[MClass, Array[nullable MPropDef]]> */
RET_LABEL196:(void)0;
}
}
if (varonce197) {
var198 = varonce197;
} else {
var199 = "\11";
var200 = 1;
var201 = standard___standard__NativeString___to_s_with_length(var199, var200);
var198 = var201;
varonce197 = var198;
}
if (varonce202) {
var203 = varonce202;
} else {
var204 = "\11";
var205 = 1;
var206 = standard___standard__NativeString___to_s_with_length(var204, var205);
var203 = var206;
varonce202 = var203;
}
var207 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var207 = array_instance Array[Object] */
var208 = 4;
var209 = NEW_standard__NativeArray(var208, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var209)->values[0] = (val*) var198;
var210 = BOX_standard__Int(var_total); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var209)->values[1] = (val*) var210;
((struct instance_standard__NativeArray*)var209)->values[2] = (val*) var203;
var211 = BOX_standard__Int(var_holes); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var209)->values[3] = (val*) var211;
{
((void (*)(val* self, val* p0, long p1))(var207->class->vft[COLOR_standard__array__Array__with_native]))(var207, var209, var208) /* with_native on <var207:Array[Object]>*/;
}
}
{
var212 = ((val* (*)(val* self))(var207->class->vft[COLOR_standard__string__Object__to_s]))(var207) /* to_s on <var207:Array[Object]>*/;
}
{
standard__file___Object___print(self, var212); /* Direct call file#Object#print on <self:SeparateErasureCompiler>*/
}
if (varonce213) {
var214 = varonce213;
} else {
var215 = "# size of attributes tables";
var216 = 27;
var217 = standard___standard__NativeString___to_s_with_length(var215, var216);
var214 = var217;
varonce213 = var214;
}
{
standard__file___Object___print(self, var214); /* Direct call file#Object#print on <self:SeparateErasureCompiler>*/
}
if (varonce218) {
var219 = varonce218;
} else {
var220 = "\11total \11holes";
var221 = 13;
var222 = standard___standard__NativeString___to_s_with_length(var220, var221);
var219 = var222;
varonce218 = var219;
}
{
standard__file___Object___print(self, var219); /* Direct call file#Object#print on <self:SeparateErasureCompiler>*/
}
var223 = 0;
var_total = var223;
var224 = 0;
var_holes = var224;
{
{ /* Inline separate_compiler#SeparateCompiler#attr_tables (self) on <self:SeparateErasureCompiler> */
var227 = self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___attr_tables].val; /* _attr_tables on <self:SeparateErasureCompiler> */
if (unlikely(var227 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _attr_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 857);
show_backtrace(1);
}
var225 = var227;
RET_LABEL226:(void)0;
}
}
var_228 = var225;
{
var229 = ((val* (*)(val* self))(var_228->class->vft[COLOR_standard__abstract_collection__MapRead__iterator]))(var_228) /* iterator on <var_228:Map[MClass, Array[nullable MPropDef]]>*/;
}
var_230 = var229;
for(;;) {
{
var231 = ((short int (*)(val* self))(var_230->class->vft[COLOR_standard__abstract_collection__MapIterator__is_ok]))(var_230) /* is_ok on <var_230:MapIterator[MClass, Array[nullable MPropDef]]>*/;
}
if (var231){
{
var232 = ((val* (*)(val* self))(var_230->class->vft[COLOR_standard__abstract_collection__MapIterator__key]))(var_230) /* key on <var_230:MapIterator[MClass, Array[nullable MPropDef]]>*/;
}
var_t233 = var232;
{
var234 = ((val* (*)(val* self))(var_230->class->vft[COLOR_standard__abstract_collection__MapIterator__item]))(var_230) /* item on <var_230:MapIterator[MClass, Array[nullable MPropDef]]>*/;
}
var_table235 = var234;
{
{ /* Inline array#AbstractArrayRead#length (var_table235) on <var_table235:Array[nullable MPropDef]> */
var238 = var_table235->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_table235:Array[nullable MPropDef]> */
var236 = var238;
RET_LABEL237:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_total,var236) on <var_total:Int> */
/* Covariant cast for argument 0 (i) <var236:Int> isa OTHER */
/* <var236:Int> isa OTHER */
var241 = 1; /* easy <var236:Int> isa OTHER*/
if (unlikely(!var241)) {
var_class_name244 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name244);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var245 = var_total + var236;
var239 = var245;
goto RET_LABEL240;
RET_LABEL240:(void)0;
}
}
var_total = var239;
var_246 = var_table235;
{
var247 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_246);
}
var_248 = var247;
for(;;) {
{
var249 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_248);
}
if (var249){
{
var250 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_248);
}
var_e251 = var250;
var252 = NULL;
if (var_e251 == NULL) {
var253 = 1; /* is null */
} else {
var253 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_e251,var252) on <var_e251:nullable MPropDef> */
var_other = var252;
{
{ /* Inline kernel#Object#is_same_instance (var_e251,var_other) on <var_e251:nullable MPropDef(MPropDef)> */
var258 = var_e251 == var_other;
var256 = var258;
goto RET_LABEL257;
RET_LABEL257:(void)0;
}
}
var254 = var256;
goto RET_LABEL255;
RET_LABEL255:(void)0;
}
var253 = var254;
}
if (var253){
var259 = 1;
{
{ /* Inline kernel#Int#+ (var_holes,var259) on <var_holes:Int> */
/* Covariant cast for argument 0 (i) <var259:Int> isa OTHER */
/* <var259:Int> isa OTHER */
var262 = 1; /* easy <var259:Int> isa OTHER*/
if (unlikely(!var262)) {
var_class_name265 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name265);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var266 = var_holes + var259;
var260 = var266;
goto RET_LABEL261;
RET_LABEL261:(void)0;
}
}
var_holes = var260;
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_248); /* Direct call array#ArrayIterator#next on <var_248:ArrayIterator[nullable MPropDef]>*/
}
} else {
goto BREAK_label267;
}
}
BREAK_label267: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_248) on <var_248:ArrayIterator[nullable MPropDef]> */
RET_LABEL268:(void)0;
}
}
{
((void (*)(val* self))(var_230->class->vft[COLOR_standard__abstract_collection__MapIterator__next]))(var_230) /* next on <var_230:MapIterator[MClass, Array[nullable MPropDef]]>*/;
}
} else {
goto BREAK_label269;
}
}
BREAK_label269: (void)0;
{
{ /* Inline abstract_collection#MapIterator#finish (var_230) on <var_230:MapIterator[MClass, Array[nullable MPropDef]]> */
RET_LABEL270:(void)0;
}
}
if (varonce271) {
var272 = varonce271;
} else {
var273 = "\11";
var274 = 1;
var275 = standard___standard__NativeString___to_s_with_length(var273, var274);
var272 = var275;
varonce271 = var272;
}
if (varonce276) {
var277 = varonce276;
} else {
var278 = "\11";
var279 = 1;
var280 = standard___standard__NativeString___to_s_with_length(var278, var279);
var277 = var280;
varonce276 = var277;
}
var281 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var281 = array_instance Array[Object] */
var282 = 4;
var283 = NEW_standard__NativeArray(var282, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var283)->values[0] = (val*) var272;
var284 = BOX_standard__Int(var_total); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var283)->values[1] = (val*) var284;
((struct instance_standard__NativeArray*)var283)->values[2] = (val*) var277;
var285 = BOX_standard__Int(var_holes); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var283)->values[3] = (val*) var285;
{
((void (*)(val* self, val* p0, long p1))(var281->class->vft[COLOR_standard__array__Array__with_native]))(var281, var283, var282) /* with_native on <var281:Array[Object]>*/;
}
}
{
var286 = ((val* (*)(val* self))(var281->class->vft[COLOR_standard__string__Object__to_s]))(var281) /* to_s on <var281:Array[Object]>*/;
}
{
standard__file___Object___print(self, var286); /* Direct call file#Object#print on <self:SeparateErasureCompiler>*/
}
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompilerVisitor#compile_callsite for (self: SeparateErasureCompilerVisitor, CallSite, Array[RuntimeVariable]): nullable RuntimeVariable */
val* nit___nit__SeparateErasureCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite(val* self, val* p0, val* p1) {
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
val* var24 /* : null */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : MSignature */;
val* var32 /* : MSignature */;
val* var33 /* : nullable MType */;
val* var35 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var36 /* : null */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
static val* varonce;
val* var42 /* : String */;
char* var43 /* : NativeString */;
long var44 /* : Int */;
val* var45 /* : FlatString */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
long var49 /* : Int */;
val* var50 /* : FlatString */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : FlatString */;
val* var56 /* : Array[Object] */;
long var57 /* : Int */;
val* var58 /* : NativeArray[Object] */;
val* var59 /* : String */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
long var63 /* : Int */;
val* var64 /* : FlatString */;
val* var65 /* : RuntimeVariable */;
val* var_cond /* var cond: RuntimeVariable */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
long var69 /* : Int */;
val* var70 /* : FlatString */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
long var74 /* : Int */;
val* var75 /* : FlatString */;
val* var76 /* : Array[Object] */;
long var77 /* : Int */;
val* var78 /* : NativeArray[Object] */;
val* var79 /* : String */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
long var83 /* : Int */;
val* var84 /* : FlatString */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
long var88 /* : Int */;
val* var89 /* : FlatString */;
var_callsite = p0;
var_arguments = p1;
{
var1 = ((val* (*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit___nit__SeparateErasureCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(self, p0, p1) /* compile_callsite on <self:SeparateErasureCompilerVisitor>*/;
}
var_res = var1;
{
{ /* Inline typing#CallSite#erasure_cast (var_callsite) on <var_callsite:CallSite> */
var5 = var_callsite->attrs[COLOR_nit__typing__CallSite___erasure_cast].s; /* _erasure_cast on <var_callsite:CallSite> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_ = var3;
if (var3){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateErasureCompilerVisitor> */
var8 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateErasureCompilerVisitor> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
/* <var6:AbstractCompiler(SeparateCompiler)> isa SeparateErasureCompiler */
cltype = type_nit__SeparateErasureCompiler.color;
idtype = type_nit__SeparateErasureCompiler.id;
if(cltype >= var6->type->table_size) {
var9 = 0;
} else {
var9 = var6->type->type_table[cltype] == idtype;
}
if (unlikely(!var9)) {
var_class_name = var6 == NULL ? "null" : var6->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SeparateErasureCompiler", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 469);
show_backtrace(1);
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var6) on <var6:SeparateCompiler(SeparateErasureCompiler)> */
var12 = var6->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var6:SeparateCompiler(SeparateErasureCompiler)> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var10) on <var10:ModelBuilder> */
var15 = var10->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var10:ModelBuilder> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline separate_erasure_compiler#ToolContext#opt_no_check_erasure_cast (var13) on <var13:ToolContext> */
var18 = var13->attrs[COLOR_nit__separate_erasure_compiler__ToolContext___opt_no_check_erasure_cast].val; /* _opt_no_check_erasure_cast on <var13:ToolContext> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_erasure_cast");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 26);
show_backtrace(1);
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
var22 = ((struct instance_standard__Bool*)var19)->value; /* autounbox from nullable Object to Bool */;
var23 = !var22;
var2 = var23;
} else {
var2 = var_;
}
if (var2){
var24 = NULL;
if (var_res == NULL) {
var25 = 0; /* is null */
} else {
var25 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var24) on <var_res:nullable RuntimeVariable> */
var_other = var24;
{
var28 = ((short int (*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/;
}
var29 = !var28;
var26 = var29;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
var25 = var26;
}
if (unlikely(!var25)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 470);
show_backtrace(1);
}
{
{ /* Inline typing#CallSite#msignature (var_callsite) on <var_callsite:CallSite> */
var32 = var_callsite->attrs[COLOR_nit__typing__CallSite___msignature].val; /* _msignature on <var_callsite:CallSite> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 494);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline model#MSignature#return_mtype (var30) on <var30:MSignature> */
var35 = var30->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var30:MSignature> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
var_mtype = var33;
var36 = NULL;
if (var_mtype == NULL) {
var37 = 0; /* is null */
} else {
var37 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mtype,var36) on <var_mtype:nullable MType> */
var_other = var36;
{
var40 = ((short int (*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype, var_other) /* == on <var_mtype:nullable MType(MType)>*/;
}
var41 = !var40;
var38 = var41;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
var37 = var38;
}
if (unlikely(!var37)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 472);
show_backtrace(1);
}
if (varonce) {
var42 = varonce;
} else {
var43 = "/* Erasure cast for return ";
var44 = 27;
var45 = standard___standard__NativeString___to_s_with_length(var43, var44);
var42 = var45;
varonce = var42;
}
if (varonce46) {
var47 = varonce46;
} else {
var48 = " isa ";
var49 = 5;
var50 = standard___standard__NativeString___to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
if (varonce51) {
var52 = varonce51;
} else {
var53 = " */";
var54 = 3;
var55 = standard___standard__NativeString___to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
var56 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var56 = array_instance Array[Object] */
var57 = 5;
var58 = NEW_standard__NativeArray(var57, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var58)->values[0] = (val*) var42;
((struct instance_standard__NativeArray*)var58)->values[1] = (val*) var_res;
((struct instance_standard__NativeArray*)var58)->values[2] = (val*) var47;
((struct instance_standard__NativeArray*)var58)->values[3] = (val*) var_mtype;
((struct instance_standard__NativeArray*)var58)->values[4] = (val*) var52;
{
((void (*)(val* self, val* p0, long p1))(var56->class->vft[COLOR_standard__array__Array__with_native]))(var56, var58, var57) /* with_native on <var56:Array[Object]>*/;
}
}
{
var59 = ((val* (*)(val* self))(var56->class->vft[COLOR_standard__string__Object__to_s]))(var56) /* to_s on <var56:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var59); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
if (varonce60) {
var61 = varonce60;
} else {
var62 = "erasure";
var63 = 7;
var64 = standard___standard__NativeString___to_s_with_length(var62, var63);
var61 = var64;
varonce60 = var61;
}
{
var65 = nit___nit__SeparateErasureCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__type_test(self, var_res, var_mtype, var61);
}
var_cond = var65;
if (varonce66) {
var67 = varonce66;
} else {
var68 = "if (!";
var69 = 5;
var70 = standard___standard__NativeString___to_s_with_length(var68, var69);
var67 = var70;
varonce66 = var67;
}
if (varonce71) {
var72 = varonce71;
} else {
var73 = ") {";
var74 = 3;
var75 = standard___standard__NativeString___to_s_with_length(var73, var74);
var72 = var75;
varonce71 = var72;
}
var76 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var76 = array_instance Array[Object] */
var77 = 3;
var78 = NEW_standard__NativeArray(var77, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var78)->values[0] = (val*) var67;
((struct instance_standard__NativeArray*)var78)->values[1] = (val*) var_cond;
((struct instance_standard__NativeArray*)var78)->values[2] = (val*) var72;
{
((void (*)(val* self, val* p0, long p1))(var76->class->vft[COLOR_standard__array__Array__with_native]))(var76, var78, var77) /* with_native on <var76:Array[Object]>*/;
}
}
{
var79 = ((val* (*)(val* self))(var76->class->vft[COLOR_standard__string__Object__to_s]))(var76) /* to_s on <var76:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var79); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
if (varonce80) {
var81 = varonce80;
} else {
var82 = "Cast failed";
var83 = 11;
var84 = standard___standard__NativeString___to_s_with_length(var82, var83);
var81 = var84;
varonce80 = var81;
}
{
nit___nit__AbstractCompilerVisitor___add_abort(self, var81); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <self:SeparateErasureCompilerVisitor>*/
}
if (varonce85) {
var86 = varonce85;
} else {
var87 = "}";
var88 = 1;
var89 = standard___standard__NativeString___to_s_with_length(var87, var88);
var86 = var89;
varonce85 = var86;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var86); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompilerVisitor#init_instance for (self: SeparateErasureCompilerVisitor, MClassType): RuntimeVariable */
val* nit___nit__SeparateErasureCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__init_instance(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_mtype /* var mtype: MClassType */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : MClass */;
val* var7 /* : MClass */;
val* var8 /* : String */;
val* var9 /* : Array[Object] */;
long var10 /* : Int */;
val* var11 /* : NativeArray[Object] */;
val* var12 /* : String */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : FlatString */;
val* var18 /* : MClass */;
val* var20 /* : MClass */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : FlatString */;
val* var27 /* : Array[Object] */;
long var28 /* : Int */;
val* var29 /* : NativeArray[Object] */;
val* var30 /* : String */;
val* var31 /* : RuntimeVariable */;
var_mtype = p0;
if (varonce) {
var1 = varonce;
} else {
var2 = "NEW_";
var3 = 4;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var7 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nit___nit__MClass___nit__model_base__MEntity__c_name(var5);
}
var9 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var9 = array_instance Array[Object] */
var10 = 2;
var11 = NEW_standard__NativeArray(var10, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var11)->values[0] = (val*) var1;
((struct instance_standard__NativeArray*)var11)->values[1] = (val*) var8;
{
((void (*)(val* self, val* p0, long p1))(var9->class->vft[COLOR_standard__array__Array__with_native]))(var9, var11, var10) /* with_native on <var9:Array[Object]>*/;
}
}
{
var12 = ((val* (*)(val* self))(var9->class->vft[COLOR_standard__string__Object__to_s]))(var9) /* to_s on <var9:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var12); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateErasureCompilerVisitor>*/
}
if (varonce13) {
var14 = varonce13;
} else {
var15 = "NEW_";
var16 = 4;
var17 = standard___standard__NativeString___to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var20 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = nit___nit__MClass___nit__model_base__MEntity__c_name(var18);
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = "()";
var25 = 2;
var26 = standard___standard__NativeString___to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
var27 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var27 = array_instance Array[Object] */
var28 = 3;
var29 = NEW_standard__NativeArray(var28, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var29)->values[0] = (val*) var14;
((struct instance_standard__NativeArray*)var29)->values[1] = (val*) var21;
((struct instance_standard__NativeArray*)var29)->values[2] = (val*) var23;
{
((void (*)(val* self, val* p0, long p1))(var27->class->vft[COLOR_standard__array__Array__with_native]))(var27, var29, var28) /* with_native on <var27:Array[Object]>*/;
}
}
{
var30 = ((val* (*)(val* self))(var27->class->vft[COLOR_standard__string__Object__to_s]))(var27) /* to_s on <var27:Array[Object]>*/;
}
{
var31 = nit___nit__AbstractCompilerVisitor___new_expr(self, var30, var_mtype);
}
var = var31;
goto RET_LABEL;
RET_LABEL:;
return var;
}
