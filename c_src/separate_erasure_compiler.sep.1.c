#include "separate_erasure_compiler.sep.0.h"
/* method separate_erasure_compiler#ToolContext#opt_erasure for (self: ToolContext): OptionBool */
val* separate_erasure_compiler__ToolContext__opt_erasure(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_separate_erasure_compiler__ToolContext___opt_erasure].val; /* _opt_erasure on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_erasure");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_erasure_compiler.nit", 22);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#ToolContext#opt_erasure for (self: Object): OptionBool */
val* VIRTUAL_separate_erasure_compiler__ToolContext__opt_erasure(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
val* var3 /* : OptionBool */;
{ /* Inline separate_erasure_compiler#ToolContext#opt_erasure (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_separate_erasure_compiler__ToolContext___opt_erasure].val; /* _opt_erasure on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_erasure");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_erasure_compiler.nit", 22);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#ToolContext#opt_rta for (self: ToolContext): OptionBool */
val* separate_erasure_compiler__ToolContext__opt_rta(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_separate_erasure_compiler__ToolContext___opt_rta].val; /* _opt_rta on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_rta");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_erasure_compiler.nit", 24);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#ToolContext#opt_rta for (self: Object): OptionBool */
val* VIRTUAL_separate_erasure_compiler__ToolContext__opt_rta(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
val* var3 /* : OptionBool */;
{ /* Inline separate_erasure_compiler#ToolContext#opt_rta (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_separate_erasure_compiler__ToolContext___opt_rta].val; /* _opt_rta on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_rta");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_erasure_compiler.nit", 24);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#ToolContext#opt_no_check_erasure_cast for (self: ToolContext): OptionBool */
val* separate_erasure_compiler__ToolContext__opt_no_check_erasure_cast(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_separate_erasure_compiler__ToolContext___opt_no_check_erasure_cast].val; /* _opt_no_check_erasure_cast on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_erasure_cast");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_erasure_compiler.nit", 26);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#ToolContext#opt_no_check_erasure_cast for (self: Object): OptionBool */
val* VIRTUAL_separate_erasure_compiler__ToolContext__opt_no_check_erasure_cast(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
val* var3 /* : OptionBool */;
{ /* Inline separate_erasure_compiler#ToolContext#opt_no_check_erasure_cast (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_separate_erasure_compiler__ToolContext___opt_no_check_erasure_cast].val; /* _opt_no_check_erasure_cast on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_erasure_cast");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_erasure_compiler.nit", 26);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#ToolContext#init for (self: ToolContext) */
void separate_erasure_compiler__ToolContext__init(val* self) {
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
((void (*)(val*))(self->class->vft[COLOR_separate_erasure_compiler__ToolContext__init]))(self) /* init on <self:ToolContext>*/;
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 231);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline separate_erasure_compiler#ToolContext#opt_erasure (self) on <self:ToolContext> */
var5 = self->attrs[COLOR_separate_erasure_compiler__ToolContext___opt_erasure].val; /* _opt_erasure on <self:ToolContext> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_erasure");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_erasure_compiler.nit", 22);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline separate_erasure_compiler#ToolContext#opt_no_check_erasure_cast (self) on <self:ToolContext> */
var8 = self->attrs[COLOR_separate_erasure_compiler__ToolContext___opt_no_check_erasure_cast].val; /* _opt_no_check_erasure_cast on <self:ToolContext> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_erasure_cast");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_erasure_compiler.nit", 26);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline separate_erasure_compiler#ToolContext#opt_rta (self) on <self:ToolContext> */
var11 = self->attrs[COLOR_separate_erasure_compiler__ToolContext___opt_rta].val; /* _opt_rta on <self:ToolContext> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_rta");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_erasure_compiler.nit", 24);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var12 = NEW_array__Array(&type_array__Arrayopts__Option);
{ /* var12 = array_instance Array[Option] */
var13 = 3;
var14 = NEW_array__NativeArray(var13, &type_array__NativeArrayopts__Option);
((struct instance_array__NativeArray*)var14)->values[0] = (val*) var3;
((struct instance_array__NativeArray*)var14)->values[1] = (val*) var6;
((struct instance_array__NativeArray*)var14)->values[2] = (val*) var9;
{
((void (*)(val*, val*, long))(var12->class->vft[COLOR_array__Array__with_native]))(var12, var14, var13) /* with_native on <var12:Array[Option]>*/;
}
}
{
opts__OptionContext__add_option(var, var12); /* Direct call opts#OptionContext#add_option on <var:OptionContext>*/
}
RET_LABEL:;
}
/* method separate_erasure_compiler#ToolContext#init for (self: Object) */
void VIRTUAL_separate_erasure_compiler__ToolContext__init(val* self) {
separate_erasure_compiler__ToolContext__init(self); /* Direct call separate_erasure_compiler#ToolContext#init on <self:Object(ToolContext)>*/
RET_LABEL:;
}
/* method separate_erasure_compiler#ToolContext#process_options for (self: ToolContext, Sequence[String]) */
void separate_erasure_compiler__ToolContext__process_options(val* self, val* p0) {
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
((void (*)(val*, val*))(self->class->vft[COLOR_separate_erasure_compiler__ToolContext__process_options]))(self, p0) /* process_options on <self:ToolContext>*/;
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_all (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_all].val; /* _opt_no_check_all on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_all");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 59);
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
var6 = ((struct instance_kernel__Bool*)var3)->value; /* autounbox from nullable Object to Bool */;
if (var6){
{
{ /* Inline separate_erasure_compiler#ToolContext#opt_no_check_erasure_cast (self) on <self:ToolContext> */
var9 = self->attrs[COLOR_separate_erasure_compiler__ToolContext___opt_no_check_erasure_cast].val; /* _opt_no_check_erasure_cast on <self:ToolContext> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_erasure_cast");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_erasure_compiler.nit", 26);
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
type_struct = var7->type->resolution_table->types[COLOR_opts__Option_VTVALUE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (&type_kernel__Bool)->table_size) {
var12 = 0;
} else {
var12 = (&type_kernel__Bool)->type_table[cltype] == idtype;
}
if (unlikely(!var12)) {
var_class_name = type_kernel__Bool.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 40);
show_backtrace(1);
}
var13 = BOX_kernel__Bool(var10); /* autobox from Bool to nullable Object */
var7->attrs[COLOR_opts__Option___value].val = var13; /* _value on <var7:OptionBool> */
RET_LABEL11:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method separate_erasure_compiler#ToolContext#process_options for (self: Object, Sequence[String]) */
void VIRTUAL_separate_erasure_compiler__ToolContext__process_options(val* self, val* p0) {
separate_erasure_compiler__ToolContext__process_options(self, p0); /* Direct call separate_erasure_compiler#ToolContext#process_options on <self:Object(ToolContext)>*/
RET_LABEL:;
}
/* method separate_erasure_compiler#ErasureCompilerPhase#process_mainmodule for (self: ErasureCompilerPhase, MModule, SequenceRead[MModule]) */
void separate_erasure_compiler__ErasureCompilerPhase__process_mainmodule(val* self, val* p0, val* p1) {
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
var2 = self->attrs[COLOR_phase__Phase___toolcontext].val; /* _toolcontext on <self:ErasureCompilerPhase> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "phase.nit", 162);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline separate_erasure_compiler#ToolContext#opt_erasure (var) on <var:ToolContext> */
var5 = var->attrs[COLOR_separate_erasure_compiler__ToolContext___opt_erasure].val; /* _opt_erasure on <var:ToolContext> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_erasure");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_erasure_compiler.nit", 22);
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
var9 = ((struct instance_kernel__Bool*)var6)->value; /* autounbox from nullable Object to Bool */;
var10 = !var9;
if (var10){
goto RET_LABEL;
} else {
}
{
{ /* Inline phase#Phase#toolcontext (self) on <self:ErasureCompilerPhase> */
var13 = self->attrs[COLOR_phase__Phase___toolcontext].val; /* _toolcontext on <self:ErasureCompilerPhase> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "phase.nit", 162);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = modelbuilder__ToolContext__modelbuilder(var11);
}
var_modelbuilder = var14;
var15 = NULL;
var_analysis = var15;
{
{ /* Inline phase#Phase#toolcontext (self) on <self:ErasureCompilerPhase> */
var18 = self->attrs[COLOR_phase__Phase___toolcontext].val; /* _toolcontext on <self:ErasureCompilerPhase> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "phase.nit", 162);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline separate_erasure_compiler#ToolContext#opt_rta (var16) on <var16:ToolContext> */
var21 = var16->attrs[COLOR_separate_erasure_compiler__ToolContext___opt_rta].val; /* _opt_rta on <var16:ToolContext> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_rta");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_erasure_compiler.nit", 24);
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
var25 = ((struct instance_kernel__Bool*)var22)->value; /* autounbox from nullable Object to Bool */;
if (var25){
{
var26 = rapid_type_analysis__ModelBuilder__do_rapid_type_analysis(var_modelbuilder, var_mainmodule);
}
var_analysis = var26;
} else {
}
{
separate_erasure_compiler__ModelBuilder__run_separate_erasure_compiler(var_modelbuilder, var_mainmodule, var_analysis); /* Direct call separate_erasure_compiler#ModelBuilder#run_separate_erasure_compiler on <var_modelbuilder:ModelBuilder>*/
}
RET_LABEL:;
}
/* method separate_erasure_compiler#ErasureCompilerPhase#process_mainmodule for (self: Object, MModule, SequenceRead[MModule]) */
void VIRTUAL_separate_erasure_compiler__ErasureCompilerPhase__process_mainmodule(val* self, val* p0, val* p1) {
separate_erasure_compiler__ErasureCompilerPhase__process_mainmodule(self, p0, p1); /* Direct call separate_erasure_compiler#ErasureCompilerPhase#process_mainmodule on <self:Object(ErasureCompilerPhase)>*/
RET_LABEL:;
}
/* method separate_erasure_compiler#ModelBuilder#run_separate_erasure_compiler for (self: ModelBuilder, MModule, nullable RapidTypeAnalysis) */
void separate_erasure_compiler__ModelBuilder__run_separate_erasure_compiler(val* self, val* p0, val* p1) {
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
val* var12 /* : ToolContext */;
val* var14 /* : ToolContext */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : FlatString */;
long var20 /* : Int */;
val* var21 /* : String */;
val* var23 /* : String */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : FlatString */;
val* var29 /* : Array[Object] */;
long var30 /* : Int */;
val* var31 /* : NativeArray[Object] */;
val* var32 /* : String */;
val* var33 /* : CodeFile */;
val* var34 /* : POSetElement[MModule] */;
val* var36 /* : POSetElement[MModule] */;
val* var37 /* : Collection[Object] */;
val* var_ /* var : Collection[MModule] */;
val* var38 /* : Iterator[nullable Object] */;
val* var_39 /* var : Iterator[MModule] */;
short int var40 /* : Bool */;
val* var41 /* : nullable Object */;
val* var_m /* var m: MModule */;
val* var42 /* : Array[MClass] */;
val* var44 /* : Array[MClass] */;
val* var_45 /* var : Array[MClass] */;
val* var46 /* : ArrayIterator[nullable Object] */;
val* var_47 /* var : ArrayIterator[MClass] */;
short int var48 /* : Bool */;
val* var49 /* : nullable Object */;
val* var_mclass /* var mclass: MClass */;
val* var53 /* : Map[MVirtualTypeProp, Int] */;
val* var55 /* : Map[MVirtualTypeProp, Int] */;
val* var56 /* : String */;
val* var58 /* : String */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
long var62 /* : Int */;
val* var63 /* : FlatString */;
val* var64 /* : Array[Object] */;
long var65 /* : Int */;
val* var66 /* : NativeArray[Object] */;
val* var67 /* : String */;
val* var68 /* : CodeFile */;
val* var69 /* : POSetElement[MModule] */;
val* var71 /* : POSetElement[MModule] */;
val* var72 /* : Collection[Object] */;
val* var_73 /* var : Collection[MModule] */;
val* var74 /* : Iterator[nullable Object] */;
val* var_75 /* var : Iterator[MModule] */;
short int var76 /* : Bool */;
val* var77 /* : nullable Object */;
val* var_m78 /* var m: MModule */;
val* var79 /* : ToolContext */;
val* var81 /* : ToolContext */;
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
val* var92 /* : String */;
val* var94 /* : String */;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : NativeString */;
long var98 /* : Int */;
val* var99 /* : FlatString */;
val* var100 /* : Array[Object] */;
long var101 /* : Int */;
val* var102 /* : NativeArray[Object] */;
val* var103 /* : String */;
val* var104 /* : CodeFile */;
long var107 /* : Int */;
long var109 /* : Int for extern */;
long var_time1 /* var time1: Int */;
val* var110 /* : ToolContext */;
val* var112 /* : ToolContext */;
static val* varonce113;
val* var114 /* : String */;
char* var115 /* : NativeString */;
long var116 /* : Int */;
val* var117 /* : FlatString */;
long var118 /* : Int */;
short int var120 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var121 /* : Int */;
static val* varonce122;
val* var123 /* : String */;
char* var124 /* : NativeString */;
long var125 /* : Int */;
val* var126 /* : FlatString */;
val* var127 /* : Array[Object] */;
long var128 /* : Int */;
val* var129 /* : NativeArray[Object] */;
val* var130 /* : Object */;
val* var131 /* : String */;
long var132 /* : Int */;
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
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var5 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
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
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
var10 = 1;
{
toolcontext__ToolContext__info(var3, var6, var10); /* Direct call toolcontext#ToolContext#info on <var3:ToolContext>*/
}
var11 = NEW_separate_erasure_compiler__SeparateErasureCompiler(&type_separate_erasure_compiler__SeparateErasureCompiler);
{
separate_erasure_compiler__SeparateErasureCompiler__init(var11, var_mainmodule, self, var_runtime_type_analysis); /* Direct call separate_erasure_compiler#SeparateErasureCompiler#init on <var11:SeparateErasureCompiler>*/
}
var_compiler = var11;
{
abstract_compiler__AbstractCompiler__compile_header(var_compiler); /* Direct call abstract_compiler#AbstractCompiler#compile_header on <var_compiler:SeparateErasureCompiler>*/
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var14 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
if (varonce15) {
var16 = varonce15;
} else {
var17 = "Property coloring";
var18 = 17;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
var20 = 2;
{
toolcontext__ToolContext__info(var12, var16, var20); /* Direct call toolcontext#ToolContext#info on <var12:ToolContext>*/
}
{
{ /* Inline mmodule#MModule#name (var_mainmodule) on <var_mainmodule:MModule> */
var23 = var_mainmodule->attrs[COLOR_mmodule__MModule___name].val; /* _name on <var_mainmodule:MModule> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 78);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (varonce24) {
var25 = varonce24;
} else {
var26 = ".tables";
var27 = 7;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
var29 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var29 = array_instance Array[Object] */
var30 = 2;
var31 = NEW_array__NativeArray(var30, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var31)->values[0] = (val*) var21;
((struct instance_array__NativeArray*)var31)->values[1] = (val*) var25;
{
((void (*)(val*, val*, long))(var29->class->vft[COLOR_array__Array__with_native]))(var29, var31, var30) /* with_native on <var29:Array[Object]>*/;
}
}
{
var32 = ((val* (*)(val*))(var29->class->vft[COLOR_string__Object__to_s]))(var29) /* to_s on <var29:Array[Object]>*/;
}
{
var33 = abstract_compiler__AbstractCompiler__new_file(var_compiler, var32);
}
{
separate_compiler__SeparateCompiler__do_property_coloring(var_compiler); /* Direct call separate_compiler#SeparateCompiler#do_property_coloring on <var_compiler:SeparateErasureCompiler>*/
}
{
{ /* Inline mmodule#MModule#in_importation (var_mainmodule) on <var_mainmodule:MModule> */
var36 = var_mainmodule->attrs[COLOR_mmodule__MModule___in_importation].val; /* _in_importation on <var_mainmodule:MModule> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 93);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
var37 = poset__POSetElement__greaters(var34);
}
var_ = var37;
{
var38 = ((val* (*)(val*))(var_->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Collection[MModule]>*/;
}
var_39 = var38;
for(;;) {
{
var40 = ((short int (*)(val*))(var_39->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_39) /* is_ok on <var_39:Iterator[MModule]>*/;
}
if (var40){
{
var41 = ((val* (*)(val*))(var_39->class->vft[COLOR_abstract_collection__Iterator__item]))(var_39) /* item on <var_39:Iterator[MModule]>*/;
}
var_m = var41;
{
{ /* Inline model#MModule#intro_mclasses (var_m) on <var_m:MModule> */
var44 = var_m->attrs[COLOR_model__MModule___intro_mclasses].val; /* _intro_mclasses on <var_m:MModule> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclasses");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 136);
show_backtrace(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
var_45 = var42;
{
var46 = array__AbstractArrayRead__iterator(var_45);
}
var_47 = var46;
for(;;) {
{
var48 = array__ArrayIterator__is_ok(var_47);
}
if (var48){
{
var49 = array__ArrayIterator__item(var_47);
}
var_mclass = var49;
{
separate_erasure_compiler__SeparateErasureCompiler__compile_class_to_c(var_compiler, var_mclass); /* Direct call separate_erasure_compiler#SeparateErasureCompiler#compile_class_to_c on <var_compiler:SeparateErasureCompiler>*/
}
{
array__ArrayIterator__next(var_47); /* Direct call array#ArrayIterator#next on <var_47:ArrayIterator[MClass]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_47) on <var_47:ArrayIterator[MClass]> */
RET_LABEL50:(void)0;
}
}
{
((void (*)(val*))(var_39->class->vft[COLOR_abstract_collection__Iterator__next]))(var_39) /* next on <var_39:Iterator[MModule]>*/;
}
} else {
goto BREAK_label51;
}
}
BREAK_label51: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_39) on <var_39:Iterator[MModule]> */
RET_LABEL52:(void)0;
}
}
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#vt_colors (var_compiler) on <var_compiler:SeparateErasureCompiler> */
var55 = var_compiler->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___vt_colors].val; /* _vt_colors on <var_compiler:SeparateErasureCompiler> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vt_colors");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_erasure_compiler.nit", 106);
show_backtrace(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
separate_compiler__SeparateCompiler__compile_color_consts(var_compiler, var53); /* Direct call separate_compiler#SeparateCompiler#compile_color_consts on <var_compiler:SeparateErasureCompiler>*/
}
{
{ /* Inline mmodule#MModule#name (var_mainmodule) on <var_mainmodule:MModule> */
var58 = var_mainmodule->attrs[COLOR_mmodule__MModule___name].val; /* _name on <var_mainmodule:MModule> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 78);
show_backtrace(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
if (varonce59) {
var60 = varonce59;
} else {
var61 = ".main";
var62 = 5;
var63 = string__NativeString__to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
var64 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var64 = array_instance Array[Object] */
var65 = 2;
var66 = NEW_array__NativeArray(var65, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var66)->values[0] = (val*) var56;
((struct instance_array__NativeArray*)var66)->values[1] = (val*) var60;
{
((void (*)(val*, val*, long))(var64->class->vft[COLOR_array__Array__with_native]))(var64, var66, var65) /* with_native on <var64:Array[Object]>*/;
}
}
{
var67 = ((val* (*)(val*))(var64->class->vft[COLOR_string__Object__to_s]))(var64) /* to_s on <var64:Array[Object]>*/;
}
{
var68 = abstract_compiler__AbstractCompiler__new_file(var_compiler, var67);
}
{
abstract_compiler__AbstractCompiler__compile_nitni_global_ref_functions(var_compiler); /* Direct call abstract_compiler#AbstractCompiler#compile_nitni_global_ref_functions on <var_compiler:SeparateErasureCompiler>*/
}
{
abstract_compiler__AbstractCompiler__compile_main_function(var_compiler); /* Direct call abstract_compiler#AbstractCompiler#compile_main_function on <var_compiler:SeparateErasureCompiler>*/
}
{
{ /* Inline mmodule#MModule#in_importation (var_mainmodule) on <var_mainmodule:MModule> */
var71 = var_mainmodule->attrs[COLOR_mmodule__MModule___in_importation].val; /* _in_importation on <var_mainmodule:MModule> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 93);
show_backtrace(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
{
var72 = poset__POSetElement__greaters(var69);
}
var_73 = var72;
{
var74 = ((val* (*)(val*))(var_73->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_73) /* iterator on <var_73:Collection[MModule]>*/;
}
var_75 = var74;
for(;;) {
{
var76 = ((short int (*)(val*))(var_75->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_75) /* is_ok on <var_75:Iterator[MModule]>*/;
}
if (var76){
{
var77 = ((val* (*)(val*))(var_75->class->vft[COLOR_abstract_collection__Iterator__item]))(var_75) /* item on <var_75:Iterator[MModule]>*/;
}
var_m78 = var77;
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var81 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
if (varonce82) {
var83 = varonce82;
} else {
var84 = "Generate C for module ";
var85 = 22;
var86 = string__NativeString__to_s_with_length(var84, var85);
var83 = var86;
varonce82 = var83;
}
var87 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var87 = array_instance Array[Object] */
var88 = 2;
var89 = NEW_array__NativeArray(var88, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var89)->values[0] = (val*) var83;
((struct instance_array__NativeArray*)var89)->values[1] = (val*) var_m78;
{
((void (*)(val*, val*, long))(var87->class->vft[COLOR_array__Array__with_native]))(var87, var89, var88) /* with_native on <var87:Array[Object]>*/;
}
}
{
var90 = ((val* (*)(val*))(var87->class->vft[COLOR_string__Object__to_s]))(var87) /* to_s on <var87:Array[Object]>*/;
}
var91 = 2;
{
toolcontext__ToolContext__info(var79, var90, var91); /* Direct call toolcontext#ToolContext#info on <var79:ToolContext>*/
}
{
{ /* Inline mmodule#MModule#name (var_m78) on <var_m78:MModule> */
var94 = var_m78->attrs[COLOR_mmodule__MModule___name].val; /* _name on <var_m78:MModule> */
if (unlikely(var94 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 78);
show_backtrace(1);
}
var92 = var94;
RET_LABEL93:(void)0;
}
}
if (varonce95) {
var96 = varonce95;
} else {
var97 = ".sep";
var98 = 4;
var99 = string__NativeString__to_s_with_length(var97, var98);
var96 = var99;
varonce95 = var96;
}
var100 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var100 = array_instance Array[Object] */
var101 = 2;
var102 = NEW_array__NativeArray(var101, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var102)->values[0] = (val*) var92;
((struct instance_array__NativeArray*)var102)->values[1] = (val*) var96;
{
((void (*)(val*, val*, long))(var100->class->vft[COLOR_array__Array__with_native]))(var100, var102, var101) /* with_native on <var100:Array[Object]>*/;
}
}
{
var103 = ((val* (*)(val*))(var100->class->vft[COLOR_string__Object__to_s]))(var100) /* to_s on <var100:Array[Object]>*/;
}
{
var104 = abstract_compiler__AbstractCompiler__new_file(var_compiler, var103);
}
{
separate_compiler__SeparateCompiler__compile_module_to_c(var_compiler, var_m78); /* Direct call separate_compiler#SeparateCompiler#compile_module_to_c on <var_compiler:SeparateErasureCompiler>*/
}
{
((void (*)(val*))(var_75->class->vft[COLOR_abstract_collection__Iterator__next]))(var_75) /* next on <var_75:Iterator[MModule]>*/;
}
} else {
goto BREAK_label105;
}
}
BREAK_label105: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_75) on <var_75:Iterator[MModule]> */
RET_LABEL106:(void)0;
}
}
{
separate_compiler__SeparateCompiler__display_stats(var_compiler); /* Direct call separate_compiler#SeparateCompiler#display_stats on <var_compiler:SeparateErasureCompiler>*/
}
{
{ /* Inline time#Object#get_time (self) on <self:ModelBuilder> */
var109 = kernel_Any_Any_get_time_0(self);
var107 = var109;
goto RET_LABEL108;
RET_LABEL108:(void)0;
}
}
var_time1 = var107;
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var112 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var112 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var110 = var112;
RET_LABEL111:(void)0;
}
}
if (varonce113) {
var114 = varonce113;
} else {
var115 = "*** END GENERATING C: ";
var116 = 22;
var117 = string__NativeString__to_s_with_length(var115, var116);
var114 = var117;
varonce113 = var114;
}
{
{ /* Inline kernel#Int#- (var_time1,var_time0) on <var_time1:Int> */
/* Covariant cast for argument 0 (i) <var_time0:Int> isa OTHER */
/* <var_time0:Int> isa OTHER */
var120 = 1; /* easy <var_time0:Int> isa OTHER*/
if (unlikely(!var120)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var121 = var_time1 - var_time0;
var118 = var121;
goto RET_LABEL119;
RET_LABEL119:(void)0;
}
}
if (varonce122) {
var123 = varonce122;
} else {
var124 = " ***";
var125 = 4;
var126 = string__NativeString__to_s_with_length(var124, var125);
var123 = var126;
varonce122 = var123;
}
var127 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var127 = array_instance Array[Object] */
var128 = 3;
var129 = NEW_array__NativeArray(var128, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var129)->values[0] = (val*) var114;
var130 = BOX_kernel__Int(var118); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var129)->values[1] = (val*) var130;
((struct instance_array__NativeArray*)var129)->values[2] = (val*) var123;
{
((void (*)(val*, val*, long))(var127->class->vft[COLOR_array__Array__with_native]))(var127, var129, var128) /* with_native on <var127:Array[Object]>*/;
}
}
{
var131 = ((val* (*)(val*))(var127->class->vft[COLOR_string__Object__to_s]))(var127) /* to_s on <var127:Array[Object]>*/;
}
var132 = 2;
{
toolcontext__ToolContext__info(var110, var131, var132); /* Direct call toolcontext#ToolContext#info on <var110:ToolContext>*/
}
{
abstract_compiler__ModelBuilder__write_and_make(self, var_compiler); /* Direct call abstract_compiler#ModelBuilder#write_and_make on <self:ModelBuilder>*/
}
RET_LABEL:;
}
/* method separate_erasure_compiler#ModelBuilder#run_separate_erasure_compiler for (self: Object, MModule, nullable RapidTypeAnalysis) */
void VIRTUAL_separate_erasure_compiler__ModelBuilder__run_separate_erasure_compiler(val* self, val* p0, val* p1) {
separate_erasure_compiler__ModelBuilder__run_separate_erasure_compiler(self, p0, p1); /* Direct call separate_erasure_compiler#ModelBuilder#run_separate_erasure_compiler on <self:Object(ModelBuilder)>*/
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#class_ids for (self: SeparateErasureCompiler): Map[MClass, Int] */
val* separate_erasure_compiler__SeparateErasureCompiler__class_ids(val* self) {
val* var /* : Map[MClass, Int] */;
val* var1 /* : Map[MClass, Int] */;
var1 = self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___class_ids].val; /* _class_ids on <self:SeparateErasureCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _class_ids");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_erasure_compiler.nit", 104);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#class_ids for (self: Object): Map[MClass, Int] */
val* VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__class_ids(val* self) {
val* var /* : Map[MClass, Int] */;
val* var1 /* : Map[MClass, Int] */;
val* var3 /* : Map[MClass, Int] */;
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#class_ids (self) on <self:Object(SeparateErasureCompiler)> */
var3 = self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___class_ids].val; /* _class_ids on <self:Object(SeparateErasureCompiler)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _class_ids");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_erasure_compiler.nit", 104);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#class_ids= for (self: SeparateErasureCompiler, Map[MClass, Int]) */
void separate_erasure_compiler__SeparateErasureCompiler__class_ids_61d(val* self, val* p0) {
self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___class_ids].val = p0; /* _class_ids on <self:SeparateErasureCompiler> */
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#class_ids= for (self: Object, Map[MClass, Int]) */
void VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__class_ids_61d(val* self, val* p0) {
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#class_ids= (self,p0) on <self:Object(SeparateErasureCompiler)> */
self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___class_ids].val = p0; /* _class_ids on <self:Object(SeparateErasureCompiler)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#class_colors for (self: SeparateErasureCompiler): Map[MClass, Int] */
val* separate_erasure_compiler__SeparateErasureCompiler__class_colors(val* self) {
val* var /* : Map[MClass, Int] */;
val* var1 /* : Map[MClass, Int] */;
var1 = self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___class_colors].val; /* _class_colors on <self:SeparateErasureCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _class_colors");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_erasure_compiler.nit", 105);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#class_colors for (self: Object): Map[MClass, Int] */
val* VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__class_colors(val* self) {
val* var /* : Map[MClass, Int] */;
val* var1 /* : Map[MClass, Int] */;
val* var3 /* : Map[MClass, Int] */;
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#class_colors (self) on <self:Object(SeparateErasureCompiler)> */
var3 = self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___class_colors].val; /* _class_colors on <self:Object(SeparateErasureCompiler)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _class_colors");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_erasure_compiler.nit", 105);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#class_colors= for (self: SeparateErasureCompiler, Map[MClass, Int]) */
void separate_erasure_compiler__SeparateErasureCompiler__class_colors_61d(val* self, val* p0) {
self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___class_colors].val = p0; /* _class_colors on <self:SeparateErasureCompiler> */
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#class_colors= for (self: Object, Map[MClass, Int]) */
void VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__class_colors_61d(val* self, val* p0) {
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#class_colors= (self,p0) on <self:Object(SeparateErasureCompiler)> */
self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___class_colors].val = p0; /* _class_colors on <self:Object(SeparateErasureCompiler)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#vt_colors for (self: SeparateErasureCompiler): Map[MVirtualTypeProp, Int] */
val* separate_erasure_compiler__SeparateErasureCompiler__vt_colors(val* self) {
val* var /* : Map[MVirtualTypeProp, Int] */;
val* var1 /* : Map[MVirtualTypeProp, Int] */;
var1 = self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___vt_colors].val; /* _vt_colors on <self:SeparateErasureCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vt_colors");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_erasure_compiler.nit", 106);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#vt_colors for (self: Object): Map[MVirtualTypeProp, Int] */
val* VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__vt_colors(val* self) {
val* var /* : Map[MVirtualTypeProp, Int] */;
val* var1 /* : Map[MVirtualTypeProp, Int] */;
val* var3 /* : Map[MVirtualTypeProp, Int] */;
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#vt_colors (self) on <self:Object(SeparateErasureCompiler)> */
var3 = self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___vt_colors].val; /* _vt_colors on <self:Object(SeparateErasureCompiler)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vt_colors");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_erasure_compiler.nit", 106);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#vt_colors= for (self: SeparateErasureCompiler, Map[MVirtualTypeProp, Int]) */
void separate_erasure_compiler__SeparateErasureCompiler__vt_colors_61d(val* self, val* p0) {
self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___vt_colors].val = p0; /* _vt_colors on <self:SeparateErasureCompiler> */
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#vt_colors= for (self: Object, Map[MVirtualTypeProp, Int]) */
void VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__vt_colors_61d(val* self, val* p0) {
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#vt_colors= (self,p0) on <self:Object(SeparateErasureCompiler)> */
self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___vt_colors].val = p0; /* _vt_colors on <self:Object(SeparateErasureCompiler)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#init for (self: SeparateErasureCompiler, MModule, ModelBuilder, nullable RapidTypeAnalysis) */
void separate_erasure_compiler__SeparateErasureCompiler__init(val* self, val* p0, val* p1, val* p2) {
val* var_mainmodule /* var mainmodule: MModule */;
val* var_mmbuilder /* var mmbuilder: ModelBuilder */;
val* var_runtime_type_analysis /* var runtime_type_analysis: nullable RapidTypeAnalysis */;
val* var /* : POSet[MClass] */;
val* var_poset /* var poset: POSet[MClass] */;
val* var1 /* : HashSet[MClass] */;
val* var_mclasses /* var mclasses: HashSet[MClass] */;
val* var2 /* : POSetColorer[MClass] */;
val* var_colorer /* var colorer: POSetColorer[MClass] */;
val* var3 /* : Map[Object, Int] */;
val* var5 /* : Map[Object, Int] */;
val* var7 /* : Map[MClass, Array[nullable MClass]] */;
val* var9 /* : HashMap[MClass, Set[MVirtualTypeProp]] */;
val* var_vts /* var vts: HashMap[MClass, Set[MVirtualTypeProp]] */;
val* var_ /* var : HashSet[MClass] */;
val* var10 /* : Iterator[Object] */;
val* var_11 /* var : Iterator[MClass] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_mclass /* var mclass: MClass */;
val* var14 /* : HashSet[MVirtualTypeProp] */;
val* var15 /* : MModule */;
val* var17 /* : MModule */;
val* var18 /* : Set[MProperty] */;
val* var_19 /* var : Set[MProperty] */;
val* var20 /* : Iterator[nullable Object] */;
val* var_21 /* var : Iterator[MProperty] */;
short int var22 /* : Bool */;
val* var23 /* : nullable Object */;
val* var_mprop /* var mprop: MProperty */;
short int var24 /* : Bool */;
int cltype;
int idtype;
val* var25 /* : nullable Object */;
val* var29 /* : POSetBucketsColorer[MClass, MVirtualTypeProp] */;
val* var30 /* : Map[Object, Set[Object]] */;
val* var_vt_colorer /* var vt_colorer: POSetBucketsColorer[MClass, MVirtualTypeProp] */;
val* var31 /* : Map[Object, Int] */;
val* var33 /* : Map[MClass, Array[nullable MPropDef]] */;
var_mainmodule = p0;
var_mmbuilder = p1;
var_runtime_type_analysis = p2;
{
separate_compiler__SeparateCompiler__init(self, p0, p1, p2); /* Direct call separate_compiler#SeparateCompiler#init on <self:SeparateErasureCompiler>*/
}
{
var = model__MModule__flatten_mclass_hierarchy(var_mainmodule);
}
var_poset = var;
var1 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MClass);
{
hash_collection__HashSet__from(var1, var_poset); /* Direct call hash_collection#HashSet#from on <var1:HashSet[MClass]>*/
}
var_mclasses = var1;
var2 = NEW_coloring__POSetColorer(&type_coloring__POSetColorermodel__MClass);
{
((void (*)(val*))(var2->class->vft[COLOR_kernel__Object__init]))(var2) /* init on <var2:POSetColorer[MClass]>*/;
}
var_colorer = var2;
{
coloring__POSetColorer__colorize(var_colorer, var_poset); /* Direct call coloring#POSetColorer#colorize on <var_colorer:POSetColorer[MClass]>*/
}
{
var3 = coloring__POSetColorer__ids(var_colorer);
}
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#class_ids= (self,var3) on <self:SeparateErasureCompiler> */
self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___class_ids].val = var3; /* _class_ids on <self:SeparateErasureCompiler> */
RET_LABEL4:(void)0;
}
}
{
var5 = coloring__POSetColorer__colors(var_colorer);
}
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#class_colors= (self,var5) on <self:SeparateErasureCompiler> */
self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___class_colors].val = var5; /* _class_colors on <self:SeparateErasureCompiler> */
RET_LABEL6:(void)0;
}
}
{
var7 = separate_erasure_compiler__SeparateErasureCompiler__build_class_typing_tables(self, var_mclasses);
}
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#class_tables= (self,var7) on <self:SeparateErasureCompiler> */
self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___class_tables].val = var7; /* _class_tables on <self:SeparateErasureCompiler> */
RET_LABEL8:(void)0;
}
}
var9 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MVirtualTypeProp);
{
((void (*)(val*))(var9->class->vft[COLOR_kernel__Object__init]))(var9) /* init on <var9:HashMap[MClass, Set[MVirtualTypeProp]]>*/;
}
var_vts = var9;
var_ = var_mclasses;
{
var10 = hash_collection__HashSet__iterator(var_);
}
var_11 = var10;
for(;;) {
{
var12 = ((short int (*)(val*))(var_11->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_11) /* is_ok on <var_11:Iterator[MClass]>*/;
}
if (var12){
{
var13 = ((val* (*)(val*))(var_11->class->vft[COLOR_abstract_collection__Iterator__item]))(var_11) /* item on <var_11:Iterator[MClass]>*/;
}
var_mclass = var13;
var14 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MVirtualTypeProp);
{
((void (*)(val*))(var14->class->vft[COLOR_kernel__Object__init]))(var14) /* init on <var14:HashSet[MVirtualTypeProp]>*/;
}
{
hash_collection__HashMap___91d_93d_61d(var_vts, var_mclass, var14); /* Direct call hash_collection#HashMap#[]= on <var_vts:HashMap[MClass, Set[MVirtualTypeProp]]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateErasureCompiler> */
var17 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = abstract_compiler__MModule__properties(var15, var_mclass);
}
var_19 = var18;
{
var20 = ((val* (*)(val*))(var_19->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_19) /* iterator on <var_19:Set[MProperty]>*/;
}
var_21 = var20;
for(;;) {
{
var22 = ((short int (*)(val*))(var_21->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_21) /* is_ok on <var_21:Iterator[MProperty]>*/;
}
if (var22){
{
var23 = ((val* (*)(val*))(var_21->class->vft[COLOR_abstract_collection__Iterator__item]))(var_21) /* item on <var_21:Iterator[MProperty]>*/;
}
var_mprop = var23;
/* <var_mprop:MProperty> isa MVirtualTypeProp */
cltype = type_model__MVirtualTypeProp.color;
idtype = type_model__MVirtualTypeProp.id;
if(cltype >= var_mprop->type->table_size) {
var24 = 0;
} else {
var24 = var_mprop->type->type_table[cltype] == idtype;
}
if (var24){
{
var25 = hash_collection__HashMap___91d_93d(var_vts, var_mclass);
}
{
((void (*)(val*, val*))(var25->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var25, var_mprop) /* add on <var25:nullable Object(Set[MVirtualTypeProp])>*/;
}
} else {
}
{
((void (*)(val*))(var_21->class->vft[COLOR_abstract_collection__Iterator__next]))(var_21) /* next on <var_21:Iterator[MProperty]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_21) on <var_21:Iterator[MProperty]> */
RET_LABEL26:(void)0;
}
}
{
((void (*)(val*))(var_11->class->vft[COLOR_abstract_collection__Iterator__next]))(var_11) /* next on <var_11:Iterator[MClass]>*/;
}
} else {
goto BREAK_label27;
}
}
BREAK_label27: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_11) on <var_11:Iterator[MClass]> */
RET_LABEL28:(void)0;
}
}
var29 = NEW_coloring__POSetBucketsColorer(&type_coloring__POSetBucketsColorermodel__MClassmodel__MVirtualTypeProp);
{
var30 = coloring__POSetColorer__conflicts(var_colorer);
}
{
coloring__POSetBucketsColorer__init(var29, var_poset, var30); /* Direct call coloring#POSetBucketsColorer#init on <var29:POSetBucketsColorer[MClass, MVirtualTypeProp]>*/
}
var_vt_colorer = var29;
{
var31 = coloring__POSetBucketsColorer__colorize(var_vt_colorer, var_vts);
}
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#vt_colors= (self,var31) on <self:SeparateErasureCompiler> */
self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___vt_colors].val = var31; /* _vt_colors on <self:SeparateErasureCompiler> */
RET_LABEL32:(void)0;
}
}
{
var33 = separate_erasure_compiler__SeparateErasureCompiler__build_vt_tables(self, var_mclasses);
}
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#vt_tables= (self,var33) on <self:SeparateErasureCompiler> */
self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___vt_tables].val = var33; /* _vt_tables on <self:SeparateErasureCompiler> */
RET_LABEL34:(void)0;
}
}
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#init for (self: Object, MModule, ModelBuilder, nullable RapidTypeAnalysis) */
void VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__init(val* self, val* p0, val* p1, val* p2) {
separate_erasure_compiler__SeparateErasureCompiler__init(self, p0, p1, p2); /* Direct call separate_erasure_compiler#SeparateErasureCompiler#init on <self:Object(SeparateErasureCompiler)>*/
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#build_vt_tables for (self: SeparateErasureCompiler, Set[MClass]): Map[MClass, Array[nullable MPropDef]] */
val* separate_erasure_compiler__SeparateErasureCompiler__build_vt_tables(val* self, val* p0) {
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
val* var17 /* : Collection[Object] */;
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
short int var28 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : MModule */;
val* var35 /* : MModule */;
val* var36 /* : Set[MProperty] */;
val* var_37 /* var : Set[MProperty] */;
val* var38 /* : Iterator[nullable Object] */;
val* var_39 /* var : Iterator[MProperty] */;
short int var40 /* : Bool */;
val* var41 /* : nullable Object */;
val* var_mproperty /* var mproperty: MProperty */;
short int var42 /* : Bool */;
int cltype;
int idtype;
short int var43 /* : Bool */;
val* var45 /* : Map[MVirtualTypeProp, Int] */;
val* var47 /* : Map[MVirtualTypeProp, Int] */;
val* var48 /* : nullable Object */;
long var49 /* : Int */;
long var_color /* var color: Int */;
long var50 /* : Int */;
long var52 /* : Int */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
int cltype56;
int idtype57;
const char* var_class_name;
short int var58 /* : Bool */;
long var59 /* : Int */;
long var61 /* : Int */;
long var_i /* var i: Int */;
long var_62 /* var : Int */;
short int var63 /* : Bool */;
short int var65 /* : Bool */;
int cltype66;
int idtype67;
const char* var_class_name68;
short int var69 /* : Bool */;
val* var70 /* : null */;
long var71 /* : Int */;
long var72 /* : Int */;
val* var74 /* : Array[MPropDef] */;
val* var76 /* : Array[MPropDef] */;
val* var_77 /* var : Array[MVirtualTypeDef] */;
val* var78 /* : ArrayIterator[nullable Object] */;
val* var_79 /* var : ArrayIterator[MVirtualTypeDef] */;
short int var80 /* : Bool */;
val* var81 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: MVirtualTypeDef */;
val* var82 /* : MClassDef */;
val* var84 /* : MClassDef */;
val* var85 /* : MClass */;
val* var87 /* : MClass */;
short int var88 /* : Bool */;
short int var89 /* : Bool */;
short int var91 /* : Bool */;
short int var93 /* : Bool */;
val* var100 /* : MModule */;
val* var102 /* : MModule */;
val* var103 /* : Set[MProperty] */;
val* var_104 /* var : Set[MProperty] */;
val* var105 /* : Iterator[nullable Object] */;
val* var_106 /* var : Iterator[MProperty] */;
short int var107 /* : Bool */;
val* var108 /* : nullable Object */;
val* var_mproperty109 /* var mproperty: MProperty */;
short int var110 /* : Bool */;
int cltype111;
int idtype112;
short int var113 /* : Bool */;
val* var115 /* : Map[MVirtualTypeProp, Int] */;
val* var117 /* : Map[MVirtualTypeProp, Int] */;
val* var118 /* : nullable Object */;
long var119 /* : Int */;
long var_color120 /* var color: Int */;
long var121 /* : Int */;
long var123 /* : Int */;
short int var124 /* : Bool */;
short int var126 /* : Bool */;
int cltype127;
int idtype128;
const char* var_class_name129;
short int var130 /* : Bool */;
long var131 /* : Int */;
long var133 /* : Int */;
long var_i134 /* var i: Int */;
long var_135 /* var : Int */;
short int var136 /* : Bool */;
short int var138 /* : Bool */;
int cltype139;
int idtype140;
const char* var_class_name141;
short int var142 /* : Bool */;
val* var143 /* : null */;
long var144 /* : Int */;
long var145 /* : Int */;
val* var147 /* : Array[MPropDef] */;
val* var149 /* : Array[MPropDef] */;
val* var_150 /* var : Array[MVirtualTypeDef] */;
val* var151 /* : ArrayIterator[nullable Object] */;
val* var_152 /* var : ArrayIterator[MVirtualTypeDef] */;
short int var153 /* : Bool */;
val* var154 /* : nullable Object */;
val* var_mpropdef155 /* var mpropdef: MVirtualTypeDef */;
val* var156 /* : MClassDef */;
val* var158 /* : MClassDef */;
val* var159 /* : MClass */;
val* var161 /* : MClass */;
short int var162 /* : Bool */;
short int var163 /* : Bool */;
short int var165 /* : Bool */;
short int var167 /* : Bool */;
var_mclasses = p0;
var1 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassarray__Arraynullable_model__MPropDef);
{
((void (*)(val*))(var1->class->vft[COLOR_kernel__Object__init]))(var1) /* init on <var1:HashMap[MClass, Array[nullable MPropDef]]>*/;
}
var_tables = var1;
var_ = var_mclasses;
{
var2 = ((val* (*)(val*))(var_->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Set[MClass]>*/;
}
var_3 = var2;
for(;;) {
{
var4 = ((short int (*)(val*))(var_3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_3) /* is_ok on <var_3:Iterator[MClass]>*/;
}
if (var4){
{
var5 = ((val* (*)(val*))(var_3->class->vft[COLOR_abstract_collection__Iterator__item]))(var_3) /* item on <var_3:Iterator[MClass]>*/;
}
var_mclass = var5;
var6 = NEW_array__Array(&type_array__Arraynullable_model__MPropDef);
{
((void (*)(val*))(var6->class->vft[COLOR_kernel__Object__init]))(var6) /* init on <var6:Array[nullable MPropDef]>*/;
}
var_table = var6;
var7 = NEW_array__Array(&type_array__Arraymodel__MClass);
{
((void (*)(val*))(var7->class->vft[COLOR_kernel__Object__init]))(var7) /* init on <var7:Array[MClass]>*/;
}
var_parents = var7;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateErasureCompiler> */
var10 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = model__MModule__flatten_mclass_hierarchy(var8);
}
{
var12 = poset__POSet__has(var11, var_mclass);
}
if (var12){
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateErasureCompiler> */
var15 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = model__MClass__in_hierarchy(var_mclass, var13);
}
{
var17 = poset__POSetElement__greaters(var16);
}
{
var18 = array__Collection__to_a(var17);
}
var_parents = var18;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateErasureCompiler> */
var21 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
model__MModule__linearize_mclasses(var19, var_parents); /* Direct call model#MModule#linearize_mclasses on <var19:MModule>*/
}
} else {
}
var_22 = var_parents;
{
var23 = array__AbstractArrayRead__iterator(var_22);
}
var_24 = var23;
for(;;) {
{
var25 = array__ArrayIterator__is_ok(var_24);
}
if (var25){
{
var26 = array__ArrayIterator__item(var_24);
}
var_parent = var26;
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
var27 = var28;
}
if (var27){
goto BREAK_label;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateErasureCompiler> */
var35 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
var36 = abstract_compiler__MModule__properties(var33, var_parent);
}
var_37 = var36;
{
var38 = ((val* (*)(val*))(var_37->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_37) /* iterator on <var_37:Set[MProperty]>*/;
}
var_39 = var38;
for(;;) {
{
var40 = ((short int (*)(val*))(var_39->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_39) /* is_ok on <var_39:Iterator[MProperty]>*/;
}
if (var40){
{
var41 = ((val* (*)(val*))(var_39->class->vft[COLOR_abstract_collection__Iterator__item]))(var_39) /* item on <var_39:Iterator[MProperty]>*/;
}
var_mproperty = var41;
/* <var_mproperty:MProperty> isa MVirtualTypeProp */
cltype = type_model__MVirtualTypeProp.color;
idtype = type_model__MVirtualTypeProp.id;
if(cltype >= var_mproperty->type->table_size) {
var42 = 0;
} else {
var42 = var_mproperty->type->type_table[cltype] == idtype;
}
var43 = !var42;
if (var43){
goto BREAK_label44;
} else {
}
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#vt_colors (self) on <self:SeparateErasureCompiler> */
var47 = self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___vt_colors].val; /* _vt_colors on <self:SeparateErasureCompiler> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vt_colors");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_erasure_compiler.nit", 106);
show_backtrace(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
var48 = ((val* (*)(val*, val*))(var45->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var45, var_mproperty) /* [] on <var45:Map[MVirtualTypeProp, Int]>*/;
}
var49 = ((struct instance_kernel__Int*)var48)->value; /* autounbox from nullable Object to Int */;
var_color = var49;
{
{ /* Inline array#AbstractArrayRead#length (var_table) on <var_table:Array[nullable MPropDef]> */
var52 = var_table->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_table:Array[nullable MPropDef]> */
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline kernel#Int#<= (var50,var_color) on <var50:Int> */
/* Covariant cast for argument 0 (i) <var_color:Int> isa OTHER */
/* <var_color:Int> isa OTHER */
var55 = 1; /* easy <var_color:Int> isa OTHER*/
if (unlikely(!var55)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 370);
show_backtrace(1);
}
var58 = var50 <= var_color;
var53 = var58;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
if (var53){
{
{ /* Inline array#AbstractArrayRead#length (var_table) on <var_table:Array[nullable MPropDef]> */
var61 = var_table->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_table:Array[nullable MPropDef]> */
var59 = var61;
RET_LABEL60:(void)0;
}
}
var_i = var59;
var_62 = var_color;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_62) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_62:Int> isa OTHER */
/* <var_62:Int> isa OTHER */
var65 = 1; /* easy <var_62:Int> isa OTHER*/
if (unlikely(!var65)) {
var_class_name68 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name68);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var69 = var_i < var_62;
var63 = var69;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
if (var63){
var70 = NULL;
{
array__Array___91d_93d_61d(var_table, var_i, var70); /* Direct call array#Array#[]= on <var_table:Array[nullable MPropDef]>*/
}
var71 = 1;
{
var72 = kernel__Int__successor(var_i, var71);
}
var_i = var72;
} else {
goto BREAK_label73;
}
}
BREAK_label73: (void)0;
} else {
}
{
{ /* Inline model#MProperty#mpropdefs (var_mproperty) on <var_mproperty:MProperty(MVirtualTypeProp)> */
var76 = var_mproperty->attrs[COLOR_model__MProperty___mpropdefs].val; /* _mpropdefs on <var_mproperty:MProperty(MVirtualTypeProp)> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1644);
show_backtrace(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
var_77 = var74;
{
var78 = array__AbstractArrayRead__iterator(var_77);
}
var_79 = var78;
for(;;) {
{
var80 = array__ArrayIterator__is_ok(var_79);
}
if (var80){
{
var81 = array__ArrayIterator__item(var_79);
}
var_mpropdef = var81;
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MVirtualTypeDef> */
var84 = var_mpropdef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MVirtualTypeDef> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var82) on <var82:MClassDef> */
var87 = var82->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var82:MClassDef> */
if (unlikely(var87 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var85 = var87;
RET_LABEL86:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var85,var_parent) on <var85:MClass> */
var_other = var_parent;
{
{ /* Inline kernel#Object#is_same_instance (var85,var_other) on <var85:MClass> */
var93 = var85 == var_other;
var91 = var93;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
}
var89 = var91;
goto RET_LABEL90;
RET_LABEL90:(void)0;
}
var88 = var89;
}
if (var88){
{
array__Array___91d_93d_61d(var_table, var_color, var_mpropdef); /* Direct call array#Array#[]= on <var_table:Array[nullable MPropDef]>*/
}
} else {
}
{
array__ArrayIterator__next(var_79); /* Direct call array#ArrayIterator#next on <var_79:ArrayIterator[MVirtualTypeDef]>*/
}
} else {
goto BREAK_label94;
}
}
BREAK_label94: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_79) on <var_79:ArrayIterator[MVirtualTypeDef]> */
RET_LABEL95:(void)0;
}
}
BREAK_label44: (void)0;
{
((void (*)(val*))(var_39->class->vft[COLOR_abstract_collection__Iterator__next]))(var_39) /* next on <var_39:Iterator[MProperty]>*/;
}
} else {
goto BREAK_label96;
}
}
BREAK_label96: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_39) on <var_39:Iterator[MProperty]> */
RET_LABEL97:(void)0;
}
}
BREAK_label: (void)0;
{
array__ArrayIterator__next(var_24); /* Direct call array#ArrayIterator#next on <var_24:ArrayIterator[MClass]>*/
}
} else {
goto BREAK_label98;
}
}
BREAK_label98: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_24) on <var_24:ArrayIterator[MClass]> */
RET_LABEL99:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateErasureCompiler> */
var102 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var102 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var100 = var102;
RET_LABEL101:(void)0;
}
}
{
var103 = abstract_compiler__MModule__properties(var100, var_mclass);
}
var_104 = var103;
{
var105 = ((val* (*)(val*))(var_104->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_104) /* iterator on <var_104:Set[MProperty]>*/;
}
var_106 = var105;
for(;;) {
{
var107 = ((short int (*)(val*))(var_106->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_106) /* is_ok on <var_106:Iterator[MProperty]>*/;
}
if (var107){
{
var108 = ((val* (*)(val*))(var_106->class->vft[COLOR_abstract_collection__Iterator__item]))(var_106) /* item on <var_106:Iterator[MProperty]>*/;
}
var_mproperty109 = var108;
/* <var_mproperty109:MProperty> isa MVirtualTypeProp */
cltype111 = type_model__MVirtualTypeProp.color;
idtype112 = type_model__MVirtualTypeProp.id;
if(cltype111 >= var_mproperty109->type->table_size) {
var110 = 0;
} else {
var110 = var_mproperty109->type->type_table[cltype111] == idtype112;
}
var113 = !var110;
if (var113){
goto BREAK_label114;
} else {
}
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#vt_colors (self) on <self:SeparateErasureCompiler> */
var117 = self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___vt_colors].val; /* _vt_colors on <self:SeparateErasureCompiler> */
if (unlikely(var117 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vt_colors");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_erasure_compiler.nit", 106);
show_backtrace(1);
}
var115 = var117;
RET_LABEL116:(void)0;
}
}
{
var118 = ((val* (*)(val*, val*))(var115->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var115, var_mproperty109) /* [] on <var115:Map[MVirtualTypeProp, Int]>*/;
}
var119 = ((struct instance_kernel__Int*)var118)->value; /* autounbox from nullable Object to Int */;
var_color120 = var119;
{
{ /* Inline array#AbstractArrayRead#length (var_table) on <var_table:Array[nullable MPropDef]> */
var123 = var_table->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_table:Array[nullable MPropDef]> */
var121 = var123;
RET_LABEL122:(void)0;
}
}
{
{ /* Inline kernel#Int#<= (var121,var_color120) on <var121:Int> */
/* Covariant cast for argument 0 (i) <var_color120:Int> isa OTHER */
/* <var_color120:Int> isa OTHER */
var126 = 1; /* easy <var_color120:Int> isa OTHER*/
if (unlikely(!var126)) {
var_class_name129 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name129);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 370);
show_backtrace(1);
}
var130 = var121 <= var_color120;
var124 = var130;
goto RET_LABEL125;
RET_LABEL125:(void)0;
}
}
if (var124){
{
{ /* Inline array#AbstractArrayRead#length (var_table) on <var_table:Array[nullable MPropDef]> */
var133 = var_table->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_table:Array[nullable MPropDef]> */
var131 = var133;
RET_LABEL132:(void)0;
}
}
var_i134 = var131;
var_135 = var_color120;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i134,var_135) on <var_i134:Int> */
/* Covariant cast for argument 0 (i) <var_135:Int> isa OTHER */
/* <var_135:Int> isa OTHER */
var138 = 1; /* easy <var_135:Int> isa OTHER*/
if (unlikely(!var138)) {
var_class_name141 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name141);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var142 = var_i134 < var_135;
var136 = var142;
goto RET_LABEL137;
RET_LABEL137:(void)0;
}
}
if (var136){
var143 = NULL;
{
array__Array___91d_93d_61d(var_table, var_i134, var143); /* Direct call array#Array#[]= on <var_table:Array[nullable MPropDef]>*/
}
var144 = 1;
{
var145 = kernel__Int__successor(var_i134, var144);
}
var_i134 = var145;
} else {
goto BREAK_label146;
}
}
BREAK_label146: (void)0;
} else {
}
{
{ /* Inline model#MProperty#mpropdefs (var_mproperty109) on <var_mproperty109:MProperty(MVirtualTypeProp)> */
var149 = var_mproperty109->attrs[COLOR_model__MProperty___mpropdefs].val; /* _mpropdefs on <var_mproperty109:MProperty(MVirtualTypeProp)> */
if (unlikely(var149 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1644);
show_backtrace(1);
}
var147 = var149;
RET_LABEL148:(void)0;
}
}
var_150 = var147;
{
var151 = array__AbstractArrayRead__iterator(var_150);
}
var_152 = var151;
for(;;) {
{
var153 = array__ArrayIterator__is_ok(var_152);
}
if (var153){
{
var154 = array__ArrayIterator__item(var_152);
}
var_mpropdef155 = var154;
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef155) on <var_mpropdef155:MVirtualTypeDef> */
var158 = var_mpropdef155->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef155:MVirtualTypeDef> */
if (unlikely(var158 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var156 = var158;
RET_LABEL157:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var156) on <var156:MClassDef> */
var161 = var156->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var156:MClassDef> */
if (unlikely(var161 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var159 = var161;
RET_LABEL160:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var159,var_mclass) on <var159:MClass> */
var_other = var_mclass;
{
{ /* Inline kernel#Object#is_same_instance (var159,var_other) on <var159:MClass> */
var167 = var159 == var_other;
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
{
array__Array___91d_93d_61d(var_table, var_color120, var_mpropdef155); /* Direct call array#Array#[]= on <var_table:Array[nullable MPropDef]>*/
}
} else {
}
{
array__ArrayIterator__next(var_152); /* Direct call array#ArrayIterator#next on <var_152:ArrayIterator[MVirtualTypeDef]>*/
}
} else {
goto BREAK_label168;
}
}
BREAK_label168: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_152) on <var_152:ArrayIterator[MVirtualTypeDef]> */
RET_LABEL169:(void)0;
}
}
BREAK_label114: (void)0;
{
((void (*)(val*))(var_106->class->vft[COLOR_abstract_collection__Iterator__next]))(var_106) /* next on <var_106:Iterator[MProperty]>*/;
}
} else {
goto BREAK_label170;
}
}
BREAK_label170: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_106) on <var_106:Iterator[MProperty]> */
RET_LABEL171:(void)0;
}
}
{
hash_collection__HashMap___91d_93d_61d(var_tables, var_mclass, var_table); /* Direct call hash_collection#HashMap#[]= on <var_tables:HashMap[MClass, Array[nullable MPropDef]]>*/
}
{
((void (*)(val*))(var_3->class->vft[COLOR_abstract_collection__Iterator__next]))(var_3) /* next on <var_3:Iterator[MClass]>*/;
}
} else {
goto BREAK_label172;
}
}
BREAK_label172: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_3) on <var_3:Iterator[MClass]> */
RET_LABEL173:(void)0;
}
}
var = var_tables;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#build_vt_tables for (self: Object, Set[MClass]): Map[MClass, Array[nullable MPropDef]] */
val* VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__build_vt_tables(val* self, val* p0) {
val* var /* : Map[MClass, Array[nullable MPropDef]] */;
val* var1 /* : Map[MClass, Array[nullable MPropDef]] */;
var1 = separate_erasure_compiler__SeparateErasureCompiler__build_vt_tables(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#build_class_typing_tables for (self: SeparateErasureCompiler, Set[MClass]): Map[MClass, Array[nullable MClass]] */
val* separate_erasure_compiler__SeparateErasureCompiler__build_class_typing_tables(val* self, val* p0) {
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
val* var17 /* : Collection[Object] */;
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
var1 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassarray__Arraynullable_model__MClass);
{
((void (*)(val*))(var1->class->vft[COLOR_kernel__Object__init]))(var1) /* init on <var1:HashMap[MClass, Array[nullable MClass]]>*/;
}
var_tables = var1;
var_ = var_mclasses;
{
var2 = ((val* (*)(val*))(var_->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Set[MClass]>*/;
}
var_3 = var2;
for(;;) {
{
var4 = ((short int (*)(val*))(var_3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_3) /* is_ok on <var_3:Iterator[MClass]>*/;
}
if (var4){
{
var5 = ((val* (*)(val*))(var_3->class->vft[COLOR_abstract_collection__Iterator__item]))(var_3) /* item on <var_3:Iterator[MClass]>*/;
}
var_mclass = var5;
var6 = NEW_array__Array(&type_array__Arraynullable_model__MClass);
{
((void (*)(val*))(var6->class->vft[COLOR_kernel__Object__init]))(var6) /* init on <var6:Array[nullable MClass]>*/;
}
var_table = var6;
var7 = NEW_array__Array(&type_array__Arraymodel__MClass);
{
((void (*)(val*))(var7->class->vft[COLOR_kernel__Object__init]))(var7) /* init on <var7:Array[MClass]>*/;
}
var_supers = var7;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateErasureCompiler> */
var10 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = model__MModule__flatten_mclass_hierarchy(var8);
}
{
var12 = poset__POSet__has(var11, var_mclass);
}
if (var12){
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateErasureCompiler> */
var15 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = model__MClass__in_hierarchy(var_mclass, var13);
}
{
var17 = poset__POSetElement__greaters(var16);
}
{
var18 = array__Collection__to_a(var17);
}
var_supers = var18;
} else {
}
var_19 = var_supers;
{
var20 = array__AbstractArrayRead__iterator(var_19);
}
var_21 = var20;
for(;;) {
{
var22 = array__ArrayIterator__is_ok(var_21);
}
if (var22){
{
var23 = array__ArrayIterator__item(var_21);
}
var_sup = var23;
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#class_colors (self) on <self:SeparateErasureCompiler> */
var26 = self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___class_colors].val; /* _class_colors on <self:SeparateErasureCompiler> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _class_colors");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_erasure_compiler.nit", 105);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
var27 = ((val* (*)(val*, val*))(var24->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var24, var_sup) /* [] on <var24:Map[MClass, Int]>*/;
}
var28 = ((struct instance_kernel__Int*)var27)->value; /* autounbox from nullable Object to Int */;
var_color = var28;
{
{ /* Inline array#AbstractArrayRead#length (var_table) on <var_table:Array[nullable MClass]> */
var31 = var_table->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_table:Array[nullable MClass]> */
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
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 370);
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
var38 = var_table->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_table:Array[nullable MClass]> */
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
var_class_name45 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name45);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
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
array__Array___91d_93d_61d(var_table, var_i, var47); /* Direct call array#Array#[]= on <var_table:Array[nullable MClass]>*/
}
var48 = 1;
{
var49 = kernel__Int__successor(var_i, var48);
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
array__Array___91d_93d_61d(var_table, var_color, var_sup); /* Direct call array#Array#[]= on <var_table:Array[nullable MClass]>*/
}
{
array__ArrayIterator__next(var_21); /* Direct call array#ArrayIterator#next on <var_21:ArrayIterator[MClass]>*/
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
hash_collection__HashMap___91d_93d_61d(var_tables, var_mclass, var_table); /* Direct call hash_collection#HashMap#[]= on <var_tables:HashMap[MClass, Array[nullable MClass]]>*/
}
{
((void (*)(val*))(var_3->class->vft[COLOR_abstract_collection__Iterator__next]))(var_3) /* next on <var_3:Iterator[MClass]>*/;
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
/* method separate_erasure_compiler#SeparateErasureCompiler#build_class_typing_tables for (self: Object, Set[MClass]): Map[MClass, Array[nullable MClass]] */
val* VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__build_class_typing_tables(val* self, val* p0) {
val* var /* : Map[MClass, Array[nullable MClass]] */;
val* var1 /* : Map[MClass, Array[nullable MClass]] */;
var1 = separate_erasure_compiler__SeparateErasureCompiler__build_class_typing_tables(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#compile_header_structs for (self: SeparateErasureCompiler) */
void separate_erasure_compiler__SeparateErasureCompiler__compile_header_structs(val* self) {
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
var2 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
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
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
{
abstract_compiler__CodeWriter__add_decl(var, var3); /* Direct call abstract_compiler#CodeWriter#add_decl on <var:CodeWriter>*/
}
{
separate_compiler__SeparateCompiler__compile_header_attribute_structs(self); /* Direct call separate_compiler#SeparateCompiler#compile_header_attribute_structs on <self:SeparateErasureCompiler>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var9 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
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
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce10 = var11;
}
{
abstract_compiler__CodeWriter__add_decl(var7, var11); /* Direct call abstract_compiler#CodeWriter#add_decl on <var7:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var17 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
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
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
{
abstract_compiler__CodeWriter__add_decl(var15, var19); /* Direct call abstract_compiler#CodeWriter#add_decl on <var15:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var25 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
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
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
{
abstract_compiler__CodeWriter__add_decl(var23, var27); /* Direct call abstract_compiler#CodeWriter#add_decl on <var23:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var33 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
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
var38 = string__NativeString__to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
{
abstract_compiler__CodeWriter__add_decl(var31, var35); /* Direct call abstract_compiler#CodeWriter#add_decl on <var31:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var41 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
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
var46 = string__NativeString__to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
{
abstract_compiler__CodeWriter__add_decl(var39, var43); /* Direct call abstract_compiler#CodeWriter#add_decl on <var39:CodeWriter>*/
}
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#compile_header_structs for (self: Object) */
void VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__compile_header_structs(val* self) {
separate_erasure_compiler__SeparateErasureCompiler__compile_header_structs(self); /* Direct call separate_erasure_compiler#SeparateErasureCompiler#compile_header_structs on <self:Object(SeparateErasureCompiler)>*/
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#compile_class_to_c for (self: SeparateErasureCompiler, MClass) */
void separate_erasure_compiler__SeparateErasureCompiler__compile_class_to_c(val* self, val* p0) {
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
short int var35 /* : Bool */;
short int var_36 /* var : Bool */;
val* var37 /* : HashSet[MClass] */;
val* var39 /* : HashSet[MClass] */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var_42 /* var : Bool */;
val* var43 /* : String */;
static val* varonce;
val* var44 /* : String */;
char* var45 /* : NativeString */;
long var46 /* : Int */;
val* var47 /* : FlatString */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
short int var_50 /* var : Bool */;
val* var51 /* : String */;
val* var53 /* : String */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
long var57 /* : Int */;
val* var58 /* : FlatString */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
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
val* var85 /* : Array[Object] */;
long var86 /* : Int */;
val* var87 /* : NativeArray[Object] */;
val* var88 /* : String */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
long var92 /* : Int */;
val* var93 /* : FlatString */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : NativeString */;
long var97 /* : Int */;
val* var98 /* : FlatString */;
val* var99 /* : Array[Object] */;
long var100 /* : Int */;
val* var101 /* : NativeArray[Object] */;
val* var102 /* : String */;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : NativeString */;
long var106 /* : Int */;
val* var107 /* : FlatString */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : NativeString */;
long var111 /* : Int */;
val* var112 /* : FlatString */;
val* var113 /* : Array[Object] */;
long var114 /* : Int */;
val* var115 /* : NativeArray[Object] */;
val* var116 /* : String */;
static val* varonce117;
val* var118 /* : String */;
char* var119 /* : NativeString */;
long var120 /* : Int */;
val* var121 /* : FlatString */;
static val* varonce122;
val* var123 /* : String */;
char* var124 /* : NativeString */;
long var125 /* : Int */;
val* var126 /* : FlatString */;
val* var127 /* : Array[Object] */;
long var128 /* : Int */;
val* var129 /* : NativeArray[Object] */;
val* var130 /* : String */;
val* var131 /* : Map[MClass, Int] */;
val* var133 /* : Map[MClass, Int] */;
val* var134 /* : nullable Object */;
static val* varonce135;
val* var136 /* : String */;
char* var137 /* : NativeString */;
long var138 /* : Int */;
val* var139 /* : FlatString */;
val* var140 /* : Array[Object] */;
long var141 /* : Int */;
val* var142 /* : NativeArray[Object] */;
val* var143 /* : String */;
static val* varonce144;
val* var145 /* : String */;
char* var146 /* : NativeString */;
long var147 /* : Int */;
val* var148 /* : FlatString */;
val* var149 /* : String */;
val* var151 /* : String */;
static val* varonce152;
val* var153 /* : String */;
char* var154 /* : NativeString */;
long var155 /* : Int */;
val* var156 /* : FlatString */;
val* var157 /* : Array[Object] */;
long var158 /* : Int */;
val* var159 /* : NativeArray[Object] */;
val* var160 /* : String */;
long var161 /* : Int */;
static val* varonce162;
val* var163 /* : String */;
char* var164 /* : NativeString */;
long var165 /* : Int */;
val* var166 /* : FlatString */;
val* var167 /* : Array[Object] */;
long var168 /* : Int */;
val* var169 /* : NativeArray[Object] */;
val* var170 /* : Object */;
val* var171 /* : String */;
val* var172 /* : Map[MClass, Int] */;
val* var174 /* : Map[MClass, Int] */;
val* var175 /* : nullable Object */;
static val* varonce176;
val* var177 /* : String */;
char* var178 /* : NativeString */;
long var179 /* : Int */;
val* var180 /* : FlatString */;
val* var181 /* : Array[Object] */;
long var182 /* : Int */;
val* var183 /* : NativeArray[Object] */;
val* var184 /* : String */;
short int var185 /* : Bool */;
short int var186 /* : Bool */;
static val* varonce187;
val* var188 /* : String */;
char* var189 /* : NativeString */;
long var190 /* : Int */;
val* var191 /* : FlatString */;
val* var192 /* : Array[Object] */;
long var193 /* : Int */;
val* var194 /* : NativeArray[Object] */;
val* var195 /* : String */;
static val* varonce196;
val* var197 /* : String */;
char* var198 /* : NativeString */;
long var199 /* : Int */;
val* var200 /* : FlatString */;
static val* varonce201;
val* var202 /* : String */;
char* var203 /* : NativeString */;
long var204 /* : Int */;
val* var205 /* : FlatString */;
val* var206 /* : Array[Object] */;
long var207 /* : Int */;
val* var208 /* : NativeArray[Object] */;
val* var209 /* : String */;
static val* varonce210;
val* var211 /* : String */;
char* var212 /* : NativeString */;
long var213 /* : Int */;
val* var214 /* : FlatString */;
static val* varonce215;
val* var216 /* : String */;
char* var217 /* : NativeString */;
long var218 /* : Int */;
val* var219 /* : FlatString */;
static val* varonce220;
val* var221 /* : String */;
char* var222 /* : NativeString */;
long var223 /* : Int */;
val* var224 /* : FlatString */;
val* var225 /* : Array[Object] */;
long var226 /* : Int */;
val* var227 /* : NativeArray[Object] */;
val* var228 /* : String */;
static val* varonce229;
val* var230 /* : String */;
char* var231 /* : NativeString */;
long var232 /* : Int */;
val* var233 /* : FlatString */;
long var234 /* : Int */;
long var_i /* var i: Int */;
long var235 /* : Int */;
long var237 /* : Int */;
long var_238 /* var : Int */;
short int var239 /* : Bool */;
short int var241 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var242 /* : Bool */;
val* var243 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: nullable MPropDef */;
val* var244 /* : null */;
short int var245 /* : Bool */;
short int var246 /* : Bool */;
val* var_other248 /* var other: nullable Object */;
short int var249 /* : Bool */;
short int var251 /* : Bool */;
static val* varonce252;
val* var253 /* : String */;
char* var254 /* : NativeString */;
long var255 /* : Int */;
val* var256 /* : FlatString */;
short int var257 /* : Bool */;
int cltype258;
int idtype259;
short int var260 /* : Bool */;
val* var261 /* : null */;
short int var262 /* : Bool */;
short int var263 /* : Bool */;
short int var265 /* : Bool */;
short int var266 /* : Bool */;
short int var267 /* : Bool */;
short int var_268 /* var : Bool */;
val* var269 /* : HashSet[MMethodDef] */;
val* var271 /* : HashSet[MMethodDef] */;
short int var272 /* : Bool */;
short int var273 /* : Bool */;
static val* varonce274;
val* var275 /* : String */;
char* var276 /* : NativeString */;
long var277 /* : Int */;
val* var278 /* : FlatString */;
val* var279 /* : MModule */;
val* var281 /* : MModule */;
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
static val* varonce292;
val* var293 /* : String */;
char* var294 /* : NativeString */;
long var295 /* : Int */;
val* var296 /* : FlatString */;
val* var297 /* : Array[Object] */;
long var298 /* : Int */;
val* var299 /* : NativeArray[Object] */;
val* var300 /* : String */;
short int var301 /* : Bool */;
short int var302 /* : Bool */;
short int var_303 /* var : Bool */;
val* var304 /* : MClassDef */;
val* var306 /* : MClassDef */;
val* var307 /* : MClassType */;
val* var309 /* : MClassType */;
val* var310 /* : String */;
static val* varonce311;
val* var312 /* : String */;
char* var313 /* : NativeString */;
long var314 /* : Int */;
val* var315 /* : FlatString */;
short int var316 /* : Bool */;
short int var317 /* : Bool */;
short int var319 /* : Bool */;
short int var320 /* : Bool */;
short int var321 /* : Bool */;
static val* varonce322;
val* var323 /* : String */;
char* var324 /* : NativeString */;
long var325 /* : Int */;
val* var326 /* : FlatString */;
val* var327 /* : String */;
val* var328 /* : Array[Object] */;
long var329 /* : Int */;
val* var330 /* : NativeArray[Object] */;
val* var331 /* : String */;
static val* varonce332;
val* var333 /* : String */;
char* var334 /* : NativeString */;
long var335 /* : Int */;
val* var336 /* : FlatString */;
val* var337 /* : String */;
static val* varonce338;
val* var339 /* : String */;
char* var340 /* : NativeString */;
long var341 /* : Int */;
val* var342 /* : FlatString */;
val* var343 /* : MModule */;
val* var345 /* : MModule */;
static val* varonce346;
val* var347 /* : String */;
char* var348 /* : NativeString */;
long var349 /* : Int */;
val* var350 /* : FlatString */;
static val* varonce351;
val* var352 /* : String */;
char* var353 /* : NativeString */;
long var354 /* : Int */;
val* var355 /* : FlatString */;
static val* varonce356;
val* var357 /* : String */;
char* var358 /* : NativeString */;
long var359 /* : Int */;
val* var360 /* : FlatString */;
val* var361 /* : Array[Object] */;
long var362 /* : Int */;
val* var363 /* : NativeArray[Object] */;
val* var364 /* : String */;
val* var365 /* : String */;
val* var366 /* : Array[Object] */;
long var367 /* : Int */;
val* var368 /* : NativeArray[Object] */;
val* var369 /* : String */;
static val* varonce370;
val* var371 /* : String */;
char* var372 /* : NativeString */;
long var373 /* : Int */;
val* var374 /* : FlatString */;
val* var375 /* : String */;
static val* varonce376;
val* var377 /* : String */;
char* var378 /* : NativeString */;
long var379 /* : Int */;
val* var380 /* : FlatString */;
val* var381 /* : MModule */;
val* var383 /* : MModule */;
static val* varonce384;
val* var385 /* : String */;
char* var386 /* : NativeString */;
long var387 /* : Int */;
val* var388 /* : FlatString */;
static val* varonce389;
val* var390 /* : String */;
char* var391 /* : NativeString */;
long var392 /* : Int */;
val* var393 /* : FlatString */;
static val* varonce394;
val* var395 /* : String */;
char* var396 /* : NativeString */;
long var397 /* : Int */;
val* var398 /* : FlatString */;
val* var399 /* : Array[Object] */;
long var400 /* : Int */;
val* var401 /* : NativeArray[Object] */;
val* var402 /* : String */;
long var403 /* : Int */;
long var404 /* : Int */;
static val* varonce406;
val* var407 /* : String */;
char* var408 /* : NativeString */;
long var409 /* : Int */;
val* var410 /* : FlatString */;
static val* varonce411;
val* var412 /* : String */;
char* var413 /* : NativeString */;
long var414 /* : Int */;
val* var415 /* : FlatString */;
static val* varonce416;
val* var417 /* : String */;
char* var418 /* : NativeString */;
long var419 /* : Int */;
val* var420 /* : FlatString */;
static val* varonce421;
val* var422 /* : String */;
char* var423 /* : NativeString */;
long var424 /* : Int */;
val* var425 /* : FlatString */;
val* var426 /* : Array[Object] */;
long var427 /* : Int */;
val* var428 /* : NativeArray[Object] */;
val* var429 /* : String */;
long var430 /* : Int */;
long var432 /* : Int */;
static val* varonce433;
val* var434 /* : String */;
char* var435 /* : NativeString */;
long var436 /* : Int */;
val* var437 /* : FlatString */;
val* var438 /* : Array[Object] */;
long var439 /* : Int */;
val* var440 /* : NativeArray[Object] */;
val* var441 /* : Object */;
val* var442 /* : String */;
static val* varonce443;
val* var444 /* : String */;
char* var445 /* : NativeString */;
long var446 /* : Int */;
val* var447 /* : FlatString */;
val* var_448 /* var : Array[nullable MClass] */;
val* var449 /* : ArrayIterator[nullable Object] */;
val* var_450 /* var : ArrayIterator[nullable MClass] */;
short int var451 /* : Bool */;
val* var452 /* : nullable Object */;
val* var_msuper /* var msuper: nullable MClass */;
val* var453 /* : null */;
short int var454 /* : Bool */;
short int var455 /* : Bool */;
short int var457 /* : Bool */;
short int var459 /* : Bool */;
static val* varonce460;
val* var461 /* : String */;
char* var462 /* : NativeString */;
long var463 /* : Int */;
val* var464 /* : FlatString */;
val* var465 /* : Map[MClass, Int] */;
val* var467 /* : Map[MClass, Int] */;
val* var468 /* : nullable Object */;
static val* varonce469;
val* var470 /* : String */;
char* var471 /* : NativeString */;
long var472 /* : Int */;
val* var473 /* : FlatString */;
static val* varonce474;
val* var475 /* : String */;
char* var476 /* : NativeString */;
long var477 /* : Int */;
val* var478 /* : FlatString */;
val* var479 /* : Array[Object] */;
long var480 /* : Int */;
val* var481 /* : NativeArray[Object] */;
val* var482 /* : String */;
static val* varonce485;
val* var486 /* : String */;
char* var487 /* : NativeString */;
long var488 /* : Int */;
val* var489 /* : FlatString */;
static val* varonce490;
val* var491 /* : String */;
char* var492 /* : NativeString */;
long var493 /* : Int */;
val* var494 /* : FlatString */;
short int var495 /* : Bool */;
val* var496 /* : String */;
static val* varonce497;
val* var498 /* : String */;
char* var499 /* : NativeString */;
long var500 /* : Int */;
val* var501 /* : FlatString */;
short int var502 /* : Bool */;
short int var503 /* : Bool */;
short int var505 /* : Bool */;
short int var506 /* : Bool */;
short int var507 /* : Bool */;
short int var_508 /* var : Bool */;
val* var509 /* : MClass */;
val* var511 /* : MClass */;
val* var512 /* : String */;
val* var514 /* : String */;
static val* varonce515;
val* var516 /* : String */;
char* var517 /* : NativeString */;
long var518 /* : Int */;
val* var519 /* : FlatString */;
short int var520 /* : Bool */;
short int var521 /* : Bool */;
val* var522 /* : CodeWriter */;
val* var524 /* : CodeWriter */;
static val* varonce525;
val* var526 /* : String */;
char* var527 /* : NativeString */;
long var528 /* : Int */;
val* var529 /* : FlatString */;
static val* varonce530;
val* var531 /* : String */;
char* var532 /* : NativeString */;
long var533 /* : Int */;
val* var534 /* : FlatString */;
val* var535 /* : Array[Object] */;
long var536 /* : Int */;
val* var537 /* : NativeArray[Object] */;
val* var538 /* : String */;
val* var539 /* : CodeWriter */;
val* var541 /* : CodeWriter */;
static val* varonce542;
val* var543 /* : String */;
char* var544 /* : NativeString */;
long var545 /* : Int */;
val* var546 /* : FlatString */;
val* var547 /* : CodeWriter */;
val* var549 /* : CodeWriter */;
val* var550 /* : String */;
static val* varonce551;
val* var552 /* : String */;
char* var553 /* : NativeString */;
long var554 /* : Int */;
val* var555 /* : FlatString */;
val* var556 /* : Array[Object] */;
long var557 /* : Int */;
val* var558 /* : NativeArray[Object] */;
val* var559 /* : String */;
val* var560 /* : CodeWriter */;
val* var562 /* : CodeWriter */;
static val* varonce563;
val* var564 /* : String */;
char* var565 /* : NativeString */;
long var566 /* : Int */;
val* var567 /* : FlatString */;
static val* varonce568;
val* var569 /* : String */;
char* var570 /* : NativeString */;
long var571 /* : Int */;
val* var572 /* : FlatString */;
val* var573 /* : Array[Object] */;
long var574 /* : Int */;
val* var575 /* : NativeArray[Object] */;
val* var576 /* : String */;
static val* varonce577;
val* var578 /* : String */;
char* var579 /* : NativeString */;
long var580 /* : Int */;
val* var581 /* : FlatString */;
static val* varonce582;
val* var583 /* : String */;
char* var584 /* : NativeString */;
long var585 /* : Int */;
val* var586 /* : FlatString */;
val* var587 /* : String */;
static val* varonce588;
val* var589 /* : String */;
char* var590 /* : NativeString */;
long var591 /* : Int */;
val* var592 /* : FlatString */;
val* var593 /* : Array[Object] */;
long var594 /* : Int */;
val* var595 /* : NativeArray[Object] */;
val* var596 /* : String */;
static val* varonce597;
val* var598 /* : String */;
char* var599 /* : NativeString */;
long var600 /* : Int */;
val* var601 /* : FlatString */;
static val* varonce602;
val* var603 /* : String */;
char* var604 /* : NativeString */;
long var605 /* : Int */;
val* var606 /* : FlatString */;
val* var607 /* : Array[Object] */;
long var608 /* : Int */;
val* var609 /* : NativeArray[Object] */;
val* var610 /* : String */;
static val* varonce611;
val* var612 /* : String */;
char* var613 /* : NativeString */;
long var614 /* : Int */;
val* var615 /* : FlatString */;
val* var616 /* : String */;
static val* varonce617;
val* var618 /* : String */;
char* var619 /* : NativeString */;
long var620 /* : Int */;
val* var621 /* : FlatString */;
val* var622 /* : String */;
static val* varonce623;
val* var624 /* : String */;
char* var625 /* : NativeString */;
long var626 /* : Int */;
val* var627 /* : FlatString */;
val* var628 /* : Array[Object] */;
long var629 /* : Int */;
val* var630 /* : NativeArray[Object] */;
val* var631 /* : String */;
static val* varonce632;
val* var633 /* : String */;
char* var634 /* : NativeString */;
long var635 /* : Int */;
val* var636 /* : FlatString */;
static val* varonce637;
val* var638 /* : String */;
char* var639 /* : NativeString */;
long var640 /* : Int */;
val* var641 /* : FlatString */;
static val* varonce642;
val* var643 /* : String */;
char* var644 /* : NativeString */;
long var645 /* : Int */;
val* var646 /* : FlatString */;
val* var647 /* : Array[Object] */;
long var648 /* : Int */;
val* var649 /* : NativeArray[Object] */;
val* var650 /* : String */;
static val* varonce651;
val* var652 /* : String */;
char* var653 /* : NativeString */;
long var654 /* : Int */;
val* var655 /* : FlatString */;
val* var656 /* : Array[Object] */;
long var657 /* : Int */;
val* var658 /* : NativeArray[Object] */;
val* var659 /* : String */;
static val* varonce660;
val* var661 /* : String */;
char* var662 /* : NativeString */;
long var663 /* : Int */;
val* var664 /* : FlatString */;
static val* varonce665;
val* var666 /* : String */;
char* var667 /* : NativeString */;
long var668 /* : Int */;
val* var669 /* : FlatString */;
val* var670 /* : Array[Object] */;
long var671 /* : Int */;
val* var672 /* : NativeArray[Object] */;
val* var673 /* : String */;
static val* varonce674;
val* var675 /* : String */;
char* var676 /* : NativeString */;
long var677 /* : Int */;
val* var678 /* : FlatString */;
static val* varonce679;
val* var680 /* : String */;
char* var681 /* : NativeString */;
long var682 /* : Int */;
val* var683 /* : FlatString */;
static val* varonce684;
val* var685 /* : String */;
char* var686 /* : NativeString */;
long var687 /* : Int */;
val* var688 /* : FlatString */;
val* var689 /* : MClass */;
val* var691 /* : MClass */;
val* var692 /* : String */;
val* var694 /* : String */;
static val* varonce695;
val* var696 /* : String */;
char* var697 /* : NativeString */;
long var698 /* : Int */;
val* var699 /* : FlatString */;
short int var700 /* : Bool */;
short int var701 /* : Bool */;
short int var703 /* : Bool */;
short int var704 /* : Bool */;
short int var705 /* : Bool */;
val* var706 /* : SeparateCompilerVisitor */;
static val* varonce707;
val* var708 /* : String */;
char* var709 /* : NativeString */;
long var710 /* : Int */;
val* var711 /* : FlatString */;
val* var712 /* : Array[Object] */;
long var713 /* : Int */;
val* var714 /* : NativeArray[Object] */;
val* var715 /* : String */;
val* var716 /* : String */;
static val* varonce717;
val* var718 /* : String */;
char* var719 /* : NativeString */;
long var720 /* : Int */;
val* var721 /* : FlatString */;
static val* varonce722;
val* var723 /* : String */;
char* var724 /* : NativeString */;
long var725 /* : Int */;
val* var726 /* : FlatString */;
val* var727 /* : Array[Object] */;
long var728 /* : Int */;
val* var729 /* : NativeArray[Object] */;
val* var730 /* : String */;
static val* varonce731;
val* var732 /* : String */;
char* var733 /* : NativeString */;
long var734 /* : Int */;
val* var735 /* : FlatString */;
static val* varonce736;
val* var737 /* : String */;
char* var738 /* : NativeString */;
long var739 /* : Int */;
val* var740 /* : FlatString */;
val* var741 /* : Array[Object] */;
long var742 /* : Int */;
val* var743 /* : NativeArray[Object] */;
val* var744 /* : String */;
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
val* var765 /* : Array[Object] */;
long var766 /* : Int */;
val* var767 /* : NativeArray[Object] */;
val* var768 /* : String */;
static val* varonce769;
val* var770 /* : String */;
char* var771 /* : NativeString */;
long var772 /* : Int */;
val* var773 /* : FlatString */;
val* var774 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
short int var775 /* : Bool */;
static val* varonce777;
val* var778 /* : String */;
char* var779 /* : NativeString */;
long var780 /* : Int */;
val* var781 /* : FlatString */;
val* var782 /* : String */;
static val* varonce783;
val* var784 /* : String */;
char* var785 /* : NativeString */;
long var786 /* : Int */;
val* var787 /* : FlatString */;
val* var788 /* : Array[Object] */;
long var789 /* : Int */;
val* var790 /* : NativeArray[Object] */;
val* var791 /* : String */;
static val* varonce792;
val* var793 /* : String */;
char* var794 /* : NativeString */;
long var795 /* : Int */;
val* var796 /* : FlatString */;
val* var797 /* : Array[Object] */;
long var798 /* : Int */;
val* var799 /* : NativeArray[Object] */;
val* var800 /* : String */;
static val* varonce801;
val* var802 /* : String */;
char* var803 /* : NativeString */;
long var804 /* : Int */;
val* var805 /* : FlatString */;
static val* varonce806;
val* var807 /* : String */;
char* var808 /* : NativeString */;
long var809 /* : Int */;
val* var810 /* : FlatString */;
val* var811 /* : Array[Object] */;
long var812 /* : Int */;
val* var813 /* : NativeArray[Object] */;
val* var814 /* : String */;
static val* varonce815;
val* var816 /* : String */;
char* var817 /* : NativeString */;
long var818 /* : Int */;
val* var819 /* : FlatString */;
val* var820 /* : String */;
static val* varonce821;
val* var822 /* : String */;
char* var823 /* : NativeString */;
long var824 /* : Int */;
val* var825 /* : FlatString */;
static val* varonce826;
val* var827 /* : String */;
char* var828 /* : NativeString */;
long var829 /* : Int */;
val* var830 /* : FlatString */;
val* var831 /* : Array[Object] */;
long var832 /* : Int */;
val* var833 /* : NativeArray[Object] */;
val* var834 /* : String */;
static val* varonce835;
val* var836 /* : String */;
char* var837 /* : NativeString */;
long var838 /* : Int */;
val* var839 /* : FlatString */;
static val* varonce840;
val* var841 /* : String */;
char* var842 /* : NativeString */;
long var843 /* : Int */;
val* var844 /* : FlatString */;
val* var845 /* : Array[Object] */;
long var846 /* : Int */;
val* var847 /* : NativeArray[Object] */;
val* var848 /* : String */;
static val* varonce849;
val* var850 /* : String */;
char* var851 /* : NativeString */;
long var852 /* : Int */;
val* var853 /* : FlatString */;
val* var854 /* : String */;
val* var856 /* : String */;
static val* varonce857;
val* var858 /* : String */;
char* var859 /* : NativeString */;
long var860 /* : Int */;
val* var861 /* : FlatString */;
short int var862 /* : Bool */;
short int var863 /* : Bool */;
val* var864 /* : CodeWriter */;
val* var866 /* : CodeWriter */;
static val* varonce867;
val* var868 /* : String */;
char* var869 /* : NativeString */;
long var870 /* : Int */;
val* var871 /* : FlatString */;
static val* varonce872;
val* var873 /* : String */;
char* var874 /* : NativeString */;
long var875 /* : Int */;
val* var876 /* : FlatString */;
val* var877 /* : Array[Object] */;
long var878 /* : Int */;
val* var879 /* : NativeArray[Object] */;
val* var880 /* : String */;
val* var881 /* : CodeWriter */;
val* var883 /* : CodeWriter */;
static val* varonce884;
val* var885 /* : String */;
char* var886 /* : NativeString */;
long var887 /* : Int */;
val* var888 /* : FlatString */;
val* var889 /* : CodeWriter */;
val* var891 /* : CodeWriter */;
static val* varonce892;
val* var893 /* : String */;
char* var894 /* : NativeString */;
long var895 /* : Int */;
val* var896 /* : FlatString */;
val* var897 /* : CodeWriter */;
val* var899 /* : CodeWriter */;
static val* varonce900;
val* var901 /* : String */;
char* var902 /* : NativeString */;
long var903 /* : Int */;
val* var904 /* : FlatString */;
val* var905 /* : CodeWriter */;
val* var907 /* : CodeWriter */;
static val* varonce908;
val* var909 /* : String */;
char* var910 /* : NativeString */;
long var911 /* : Int */;
val* var912 /* : FlatString */;
static val* varonce913;
val* var914 /* : String */;
char* var915 /* : NativeString */;
long var916 /* : Int */;
val* var917 /* : FlatString */;
val* var918 /* : Array[Object] */;
long var919 /* : Int */;
val* var920 /* : NativeArray[Object] */;
val* var921 /* : String */;
val* var922 /* : String */;
static val* varonce923;
val* var924 /* : String */;
char* var925 /* : NativeString */;
long var926 /* : Int */;
val* var927 /* : FlatString */;
static val* varonce928;
val* var929 /* : String */;
char* var930 /* : NativeString */;
long var931 /* : Int */;
val* var932 /* : FlatString */;
val* var933 /* : Array[Object] */;
long var934 /* : Int */;
val* var935 /* : NativeArray[Object] */;
val* var936 /* : String */;
static val* varonce937;
val* var938 /* : String */;
char* var939 /* : NativeString */;
long var940 /* : Int */;
val* var941 /* : FlatString */;
static val* varonce942;
val* var943 /* : String */;
char* var944 /* : NativeString */;
long var945 /* : Int */;
val* var946 /* : FlatString */;
val* var947 /* : Array[Object] */;
long var948 /* : Int */;
val* var949 /* : NativeArray[Object] */;
val* var950 /* : String */;
val* var951 /* : String */;
static val* varonce952;
val* var953 /* : String */;
char* var954 /* : NativeString */;
long var955 /* : Int */;
val* var956 /* : FlatString */;
static val* varonce957;
val* var958 /* : String */;
char* var959 /* : NativeString */;
long var960 /* : Int */;
val* var961 /* : FlatString */;
val* var962 /* : Array[Object] */;
long var963 /* : Int */;
val* var964 /* : NativeArray[Object] */;
val* var965 /* : String */;
static val* varonce966;
val* var967 /* : String */;
char* var968 /* : NativeString */;
long var969 /* : Int */;
val* var970 /* : FlatString */;
val* var971 /* : String */;
val* var_res972 /* var res: String */;
static val* varonce973;
val* var974 /* : String */;
char* var975 /* : NativeString */;
long var976 /* : Int */;
val* var977 /* : FlatString */;
static val* varonce978;
val* var979 /* : String */;
char* var980 /* : NativeString */;
long var981 /* : Int */;
val* var982 /* : FlatString */;
static val* varonce983;
val* var984 /* : String */;
char* var985 /* : NativeString */;
long var986 /* : Int */;
val* var987 /* : FlatString */;
val* var988 /* : Array[Object] */;
long var989 /* : Int */;
val* var990 /* : NativeArray[Object] */;
val* var991 /* : String */;
val* var992 /* : Array[MType] */;
val* var994 /* : Array[MType] */;
val* var995 /* : nullable Object */;
val* var_mtype_elt /* var mtype_elt: MType */;
static val* varonce996;
val* var997 /* : String */;
char* var998 /* : NativeString */;
long var999 /* : Int */;
val* var1000 /* : FlatString */;
static val* varonce1001;
val* var1002 /* : String */;
char* var1003 /* : NativeString */;
long var1004 /* : Int */;
val* var1005 /* : FlatString */;
val* var1006 /* : String */;
static val* varonce1007;
val* var1008 /* : String */;
char* var1009 /* : NativeString */;
long var1010 /* : Int */;
val* var1011 /* : FlatString */;
val* var1012 /* : Array[Object] */;
long var1013 /* : Int */;
val* var1014 /* : NativeArray[Object] */;
val* var1015 /* : String */;
static val* varonce1016;
val* var1017 /* : String */;
char* var1018 /* : NativeString */;
long var1019 /* : Int */;
val* var1020 /* : FlatString */;
val* var1021 /* : Array[Object] */;
long var1022 /* : Int */;
val* var1023 /* : NativeArray[Object] */;
val* var1024 /* : String */;
static val* varonce1025;
val* var1026 /* : String */;
char* var1027 /* : NativeString */;
long var1028 /* : Int */;
val* var1029 /* : FlatString */;
static val* varonce1030;
val* var1031 /* : String */;
char* var1032 /* : NativeString */;
long var1033 /* : Int */;
val* var1034 /* : FlatString */;
val* var1035 /* : Array[Object] */;
long var1036 /* : Int */;
val* var1037 /* : NativeArray[Object] */;
val* var1038 /* : String */;
static val* varonce1039;
val* var1040 /* : String */;
char* var1041 /* : NativeString */;
long var1042 /* : Int */;
val* var1043 /* : FlatString */;
val* var1044 /* : Array[Object] */;
long var1045 /* : Int */;
val* var1046 /* : NativeArray[Object] */;
val* var1047 /* : String */;
static val* varonce1048;
val* var1049 /* : String */;
char* var1050 /* : NativeString */;
long var1051 /* : Int */;
val* var1052 /* : FlatString */;
static val* varonce1053;
val* var1054 /* : String */;
char* var1055 /* : NativeString */;
long var1056 /* : Int */;
val* var1057 /* : FlatString */;
val* var1058 /* : Array[Object] */;
long var1059 /* : Int */;
val* var1060 /* : NativeArray[Object] */;
val* var1061 /* : String */;
static val* varonce1062;
val* var1063 /* : String */;
char* var1064 /* : NativeString */;
long var1065 /* : Int */;
val* var1066 /* : FlatString */;
short int var1067 /* : Bool */;
val* var1068 /* : MClass */;
val* var1070 /* : MClass */;
val* var1071 /* : MClassKind */;
val* var1073 /* : MClassKind */;
val* var1074 /* : MClassKind */;
short int var1075 /* : Bool */;
short int var1076 /* : Bool */;
short int var1078 /* : Bool */;
short int var1080 /* : Bool */;
short int var_1081 /* var : Bool */;
val* var1082 /* : MClass */;
val* var1084 /* : MClass */;
val* var1085 /* : String */;
val* var1087 /* : String */;
static val* varonce1088;
val* var1089 /* : String */;
char* var1090 /* : NativeString */;
long var1091 /* : Int */;
val* var1092 /* : FlatString */;
short int var1093 /* : Bool */;
short int var1094 /* : Bool */;
short int var1096 /* : Bool */;
short int var1097 /* : Bool */;
short int var1098 /* : Bool */;
val* var1099 /* : MModule */;
val* var1101 /* : MModule */;
val* var1102 /* : MClassType */;
short int var1104 /* : Bool */;
val* var1105 /* : MClassType */;
static val* varonce1106;
val* var1107 /* : String */;
char* var1108 /* : NativeString */;
long var1109 /* : Int */;
val* var1110 /* : FlatString */;
val* var1111 /* : MClass */;
val* var1112 /* : MClassType */;
val* var1114 /* : MClassType */;
val* var_pointer_type /* var pointer_type: MClassType */;
static val* varonce1115;
val* var1116 /* : String */;
char* var1117 /* : NativeString */;
long var1118 /* : Int */;
val* var1119 /* : FlatString */;
val* var1120 /* : Array[Object] */;
long var1121 /* : Int */;
val* var1122 /* : NativeArray[Object] */;
val* var1123 /* : String */;
val* var1124 /* : String */;
static val* varonce1125;
val* var1126 /* : String */;
char* var1127 /* : NativeString */;
long var1128 /* : Int */;
val* var1129 /* : FlatString */;
static val* varonce1130;
val* var1131 /* : String */;
char* var1132 /* : NativeString */;
long var1133 /* : Int */;
val* var1134 /* : FlatString */;
val* var1135 /* : Array[Object] */;
long var1136 /* : Int */;
val* var1137 /* : NativeArray[Object] */;
val* var1138 /* : String */;
static val* varonce1139;
val* var1140 /* : String */;
char* var1141 /* : NativeString */;
long var1142 /* : Int */;
val* var1143 /* : FlatString */;
static val* varonce1144;
val* var1145 /* : String */;
char* var1146 /* : NativeString */;
long var1147 /* : Int */;
val* var1148 /* : FlatString */;
val* var1149 /* : Array[Object] */;
long var1150 /* : Int */;
val* var1151 /* : NativeArray[Object] */;
val* var1152 /* : String */;
val* var1153 /* : String */;
static val* varonce1154;
val* var1155 /* : String */;
char* var1156 /* : NativeString */;
long var1157 /* : Int */;
val* var1158 /* : FlatString */;
static val* varonce1159;
val* var1160 /* : String */;
char* var1161 /* : NativeString */;
long var1162 /* : Int */;
val* var1163 /* : FlatString */;
val* var1164 /* : Array[Object] */;
long var1165 /* : Int */;
val* var1166 /* : NativeArray[Object] */;
val* var1167 /* : String */;
static val* varonce1168;
val* var1169 /* : String */;
char* var1170 /* : NativeString */;
long var1171 /* : Int */;
val* var1172 /* : FlatString */;
val* var1173 /* : Array[Object] */;
long var1174 /* : Int */;
val* var1175 /* : NativeArray[Object] */;
val* var1176 /* : String */;
static val* varonce1177;
val* var1178 /* : String */;
char* var1179 /* : NativeString */;
long var1180 /* : Int */;
val* var1181 /* : FlatString */;
val* var1182 /* : RuntimeVariable */;
val* var_res1183 /* var res: RuntimeVariable */;
short int var1184 /* : Bool */;
static val* varonce1186;
val* var1187 /* : String */;
char* var1188 /* : NativeString */;
long var1189 /* : Int */;
val* var1190 /* : FlatString */;
val* var1191 /* : String */;
static val* varonce1192;
val* var1193 /* : String */;
char* var1194 /* : NativeString */;
long var1195 /* : Int */;
val* var1196 /* : FlatString */;
val* var1197 /* : Array[Object] */;
long var1198 /* : Int */;
val* var1199 /* : NativeArray[Object] */;
val* var1200 /* : String */;
static val* varonce1201;
val* var1202 /* : String */;
char* var1203 /* : NativeString */;
long var1204 /* : Int */;
val* var1205 /* : FlatString */;
val* var1206 /* : Array[Object] */;
long var1207 /* : Int */;
val* var1208 /* : NativeArray[Object] */;
val* var1209 /* : String */;
static val* varonce1210;
val* var1211 /* : String */;
char* var1212 /* : NativeString */;
long var1213 /* : Int */;
val* var1214 /* : FlatString */;
static val* varonce1215;
val* var1216 /* : String */;
char* var1217 /* : NativeString */;
long var1218 /* : Int */;
val* var1219 /* : FlatString */;
val* var1220 /* : Array[Object] */;
long var1221 /* : Int */;
val* var1222 /* : NativeArray[Object] */;
val* var1223 /* : String */;
static val* varonce1224;
val* var1225 /* : String */;
char* var1226 /* : NativeString */;
long var1227 /* : Int */;
val* var1228 /* : FlatString */;
val* var1229 /* : String */;
static val* varonce1230;
val* var1231 /* : String */;
char* var1232 /* : NativeString */;
long var1233 /* : Int */;
val* var1234 /* : FlatString */;
static val* varonce1235;
val* var1236 /* : String */;
char* var1237 /* : NativeString */;
long var1238 /* : Int */;
val* var1239 /* : FlatString */;
val* var1240 /* : Array[Object] */;
long var1241 /* : Int */;
val* var1242 /* : NativeArray[Object] */;
val* var1243 /* : String */;
static val* varonce1244;
val* var1245 /* : String */;
char* var1246 /* : NativeString */;
long var1247 /* : Int */;
val* var1248 /* : FlatString */;
static val* varonce1249;
val* var1250 /* : String */;
char* var1251 /* : NativeString */;
long var1252 /* : Int */;
val* var1253 /* : FlatString */;
val* var1254 /* : Array[Object] */;
long var1255 /* : Int */;
val* var1256 /* : NativeArray[Object] */;
val* var1257 /* : String */;
static val* varonce1258;
val* var1259 /* : String */;
char* var1260 /* : NativeString */;
long var1261 /* : Int */;
val* var1262 /* : FlatString */;
static val* varonce1263;
val* var1264 /* : String */;
char* var1265 /* : NativeString */;
long var1266 /* : Int */;
val* var1267 /* : FlatString */;
val* var1268 /* : Array[Object] */;
long var1269 /* : Int */;
val* var1270 /* : NativeArray[Object] */;
val* var1271 /* : String */;
val* var1272 /* : String */;
static val* varonce1273;
val* var1274 /* : String */;
char* var1275 /* : NativeString */;
long var1276 /* : Int */;
val* var1277 /* : FlatString */;
static val* varonce1278;
val* var1279 /* : String */;
char* var1280 /* : NativeString */;
long var1281 /* : Int */;
val* var1282 /* : FlatString */;
val* var1283 /* : Array[Object] */;
long var1284 /* : Int */;
val* var1285 /* : NativeArray[Object] */;
val* var1286 /* : String */;
static val* varonce1287;
val* var1288 /* : String */;
char* var1289 /* : NativeString */;
long var1290 /* : Int */;
val* var1291 /* : FlatString */;
static val* varonce1292;
val* var1293 /* : String */;
char* var1294 /* : NativeString */;
long var1295 /* : Int */;
val* var1296 /* : FlatString */;
val* var1297 /* : Array[Object] */;
long var1298 /* : Int */;
val* var1299 /* : NativeArray[Object] */;
val* var1300 /* : String */;
val* var1301 /* : String */;
static val* varonce1302;
val* var1303 /* : String */;
char* var1304 /* : NativeString */;
long var1305 /* : Int */;
val* var1306 /* : FlatString */;
static val* varonce1307;
val* var1308 /* : String */;
char* var1309 /* : NativeString */;
long var1310 /* : Int */;
val* var1311 /* : FlatString */;
val* var1312 /* : Array[Object] */;
long var1313 /* : Int */;
val* var1314 /* : NativeArray[Object] */;
val* var1315 /* : String */;
static val* varonce1316;
val* var1317 /* : String */;
char* var1318 /* : NativeString */;
long var1319 /* : Int */;
val* var1320 /* : FlatString */;
val* var1321 /* : Array[Object] */;
long var1322 /* : Int */;
val* var1323 /* : NativeArray[Object] */;
val* var1324 /* : String */;
static val* varonce1325;
val* var1326 /* : String */;
char* var1327 /* : NativeString */;
long var1328 /* : Int */;
val* var1329 /* : FlatString */;
val* var1330 /* : RuntimeVariable */;
val* var_res1331 /* var res: RuntimeVariable */;
short int var1332 /* : Bool */;
static val* varonce1334;
val* var1335 /* : String */;
char* var1336 /* : NativeString */;
long var1337 /* : Int */;
val* var1338 /* : FlatString */;
long var1339 /* : Int */;
long var1341 /* : Int */;
static val* varonce1342;
val* var1343 /* : String */;
char* var1344 /* : NativeString */;
long var1345 /* : Int */;
val* var1346 /* : FlatString */;
val* var1347 /* : Array[Object] */;
long var1348 /* : Int */;
val* var1349 /* : NativeArray[Object] */;
val* var1350 /* : Object */;
val* var1351 /* : String */;
static val* varonce1352;
val* var1353 /* : String */;
char* var1354 /* : NativeString */;
long var1355 /* : Int */;
val* var1356 /* : FlatString */;
val* var1357 /* : Array[Object] */;
long var1358 /* : Int */;
val* var1359 /* : NativeArray[Object] */;
val* var1360 /* : String */;
static val* varonce1361;
val* var1362 /* : String */;
char* var1363 /* : NativeString */;
long var1364 /* : Int */;
val* var1365 /* : FlatString */;
static val* varonce1366;
val* var1367 /* : String */;
char* var1368 /* : NativeString */;
long var1369 /* : Int */;
val* var1370 /* : FlatString */;
val* var1371 /* : Array[Object] */;
long var1372 /* : Int */;
val* var1373 /* : NativeArray[Object] */;
val* var1374 /* : String */;
static val* varonce1375;
val* var1376 /* : String */;
char* var1377 /* : NativeString */;
long var1378 /* : Int */;
val* var1379 /* : FlatString */;
static val* varonce1380;
val* var1381 /* : String */;
char* var1382 /* : NativeString */;
long var1383 /* : Int */;
val* var1384 /* : FlatString */;
val* var1385 /* : Array[Object] */;
long var1386 /* : Int */;
val* var1387 /* : NativeArray[Object] */;
val* var1388 /* : String */;
static val* varonce1389;
val* var1390 /* : String */;
char* var1391 /* : NativeString */;
long var1392 /* : Int */;
val* var1393 /* : FlatString */;
var_mclass = p0;
{
{ /* Inline model#MClass#intro (var_mclass) on <var_mclass:MClass> */
var2 = var_mclass->attrs[COLOR_model__MClass___intro].val; /* _intro on <var_mclass:MClass> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 420);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var) on <var:MClassDef> */
var5 = var->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var:MClassDef> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_mtype = var3;
{
var6 = abstract_compiler__MClass__c_name(var_mclass);
}
var_c_name = var6;
{
{ /* Inline separate_compiler#SeparateCompiler#method_tables (self) on <self:SeparateErasureCompiler> */
var9 = self->attrs[COLOR_separate_compiler__SeparateCompiler___method_tables].val; /* _method_tables on <self:SeparateErasureCompiler> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _method_tables");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 845);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = ((val* (*)(val*, val*))(var7->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var7, var_mclass) /* [] on <var7:Map[MClass, Array[nullable MPropDef]]>*/;
}
var_vft = var10;
{
{ /* Inline separate_compiler#SeparateCompiler#attr_tables (self) on <self:SeparateErasureCompiler> */
var13 = self->attrs[COLOR_separate_compiler__SeparateCompiler___attr_tables].val; /* _attr_tables on <self:SeparateErasureCompiler> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _attr_tables");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 846);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = ((val* (*)(val*, val*))(var11->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var11, var_mclass) /* [] on <var11:Map[MClass, Array[nullable MPropDef]]>*/;
}
var_attrs = var14;
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#class_tables (self) on <self:SeparateErasureCompiler> */
var17 = self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___class_tables].val; /* _class_tables on <self:SeparateErasureCompiler> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _class_tables");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_erasure_compiler.nit", 441);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = ((val* (*)(val*, val*))(var15->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var15, var_mclass) /* [] on <var15:Map[MClass, Array[nullable MClass]]>*/;
}
var_class_table = var18;
{
var19 = separate_erasure_compiler__SeparateErasureCompiler__new_visitor(self);
}
var_v = var19;
{
{ /* Inline separate_compiler#SeparateCompiler#runtime_type_analysis (self) on <self:SeparateErasureCompiler> */
var22 = self->attrs[COLOR_separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <self:SeparateErasureCompiler> */
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
var34 = ((short int (*)(val*, val*))(var_rta->class->vft[COLOR_kernel__Object___61d_61d]))(var_rta, var_other) /* == on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)>*/;
var33 = var34;
}
var35 = !var33;
var31 = var35;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
var30 = var31;
}
var27 = var30;
} else {
var27 = var_;
}
var_36 = var27;
if (var27){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_classes (var_rta) on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
var39 = var_rta->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_classes].val; /* _live_classes on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_classes");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 62);
show_backtrace(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
var40 = hash_collection__HashSet__has(var37, var_mclass);
}
var41 = !var40;
var26 = var41;
} else {
var26 = var_36;
}
var_42 = var26;
if (var26){
{
var43 = abstract_compiler__MClassType__ctype(var_mtype);
}
if (varonce) {
var44 = varonce;
} else {
var45 = "val*";
var46 = 4;
var47 = string__NativeString__to_s_with_length(var45, var46);
var44 = var47;
varonce = var44;
}
{
var49 = string__FlatString___61d_61d(var43, var44);
var48 = var49;
}
var25 = var48;
} else {
var25 = var_42;
}
var_50 = var25;
if (var25){
{
{ /* Inline model#MClass#name (var_mclass) on <var_mclass:MClass> */
var53 = var_mclass->attrs[COLOR_model__MClass___name].val; /* _name on <var_mclass:MClass> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 352);
show_backtrace(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
if (varonce54) {
var55 = varonce54;
} else {
var56 = "NativeArray";
var57 = 11;
var58 = string__NativeString__to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
{
{ /* Inline kernel#Object#!= (var51,var55) on <var51:String> */
var_other = var55;
{
var63 = ((short int (*)(val*, val*))(var51->class->vft[COLOR_kernel__Object___61d_61d]))(var51, var_other) /* == on <var51:String>*/;
var62 = var63;
}
var64 = !var62;
var60 = var64;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
var59 = var60;
}
var24 = var59;
} else {
var24 = var_50;
}
if (var24){
var65 = 1;
var_is_dead = var65;
} else {
}
if (varonce66) {
var67 = varonce66;
} else {
var68 = "/* runtime class ";
var69 = 17;
var70 = string__NativeString__to_s_with_length(var68, var69);
var67 = var70;
varonce66 = var67;
}
if (varonce71) {
var72 = varonce71;
} else {
var73 = " */";
var74 = 3;
var75 = string__NativeString__to_s_with_length(var73, var74);
var72 = var75;
varonce71 = var72;
}
var76 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var76 = array_instance Array[Object] */
var77 = 3;
var78 = NEW_array__NativeArray(var77, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var78)->values[0] = (val*) var67;
((struct instance_array__NativeArray*)var78)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var78)->values[2] = (val*) var72;
{
((void (*)(val*, val*, long))(var76->class->vft[COLOR_array__Array__with_native]))(var76, var78, var77) /* with_native on <var76:Array[Object]>*/;
}
}
{
var79 = ((val* (*)(val*))(var76->class->vft[COLOR_string__Object__to_s]))(var76) /* to_s on <var76:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var79); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce80) {
var81 = varonce80;
} else {
var82 = "class_";
var83 = 6;
var84 = string__NativeString__to_s_with_length(var82, var83);
var81 = var84;
varonce80 = var81;
}
var85 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var85 = array_instance Array[Object] */
var86 = 2;
var87 = NEW_array__NativeArray(var86, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var87)->values[0] = (val*) var81;
((struct instance_array__NativeArray*)var87)->values[1] = (val*) var_c_name;
{
((void (*)(val*, val*, long))(var85->class->vft[COLOR_array__Array__with_native]))(var85, var87, var86) /* with_native on <var85:Array[Object]>*/;
}
}
{
var88 = ((val* (*)(val*))(var85->class->vft[COLOR_string__Object__to_s]))(var85) /* to_s on <var85:Array[Object]>*/;
}
if (varonce89) {
var90 = varonce89;
} else {
var91 = "extern const struct class class_";
var92 = 32;
var93 = string__NativeString__to_s_with_length(var91, var92);
var90 = var93;
varonce89 = var90;
}
if (varonce94) {
var95 = varonce94;
} else {
var96 = ";";
var97 = 1;
var98 = string__NativeString__to_s_with_length(var96, var97);
var95 = var98;
varonce94 = var95;
}
var99 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var99 = array_instance Array[Object] */
var100 = 3;
var101 = NEW_array__NativeArray(var100, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var101)->values[0] = (val*) var90;
((struct instance_array__NativeArray*)var101)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var101)->values[2] = (val*) var95;
{
((void (*)(val*, val*, long))(var99->class->vft[COLOR_array__Array__with_native]))(var99, var101, var100) /* with_native on <var99:Array[Object]>*/;
}
}
{
var102 = ((val* (*)(val*))(var99->class->vft[COLOR_string__Object__to_s]))(var99) /* to_s on <var99:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompiler__provide_declaration(self, var88, var102); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateErasureCompiler>*/
}
if (varonce103) {
var104 = varonce103;
} else {
var105 = "extern const struct type_table type_table_";
var106 = 42;
var107 = string__NativeString__to_s_with_length(var105, var106);
var104 = var107;
varonce103 = var104;
}
if (varonce108) {
var109 = varonce108;
} else {
var110 = ";";
var111 = 1;
var112 = string__NativeString__to_s_with_length(var110, var111);
var109 = var112;
varonce108 = var109;
}
var113 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var113 = array_instance Array[Object] */
var114 = 3;
var115 = NEW_array__NativeArray(var114, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var115)->values[0] = (val*) var104;
((struct instance_array__NativeArray*)var115)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var115)->values[2] = (val*) var109;
{
((void (*)(val*, val*, long))(var113->class->vft[COLOR_array__Array__with_native]))(var113, var115, var114) /* with_native on <var113:Array[Object]>*/;
}
}
{
var116 = ((val* (*)(val*))(var113->class->vft[COLOR_string__Object__to_s]))(var113) /* to_s on <var113:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var116); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce117) {
var118 = varonce117;
} else {
var119 = "const struct class class_";
var120 = 25;
var121 = string__NativeString__to_s_with_length(var119, var120);
var118 = var121;
varonce117 = var118;
}
if (varonce122) {
var123 = varonce122;
} else {
var124 = " = {";
var125 = 4;
var126 = string__NativeString__to_s_with_length(var124, var125);
var123 = var126;
varonce122 = var123;
}
var127 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var127 = array_instance Array[Object] */
var128 = 3;
var129 = NEW_array__NativeArray(var128, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var129)->values[0] = (val*) var118;
((struct instance_array__NativeArray*)var129)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var129)->values[2] = (val*) var123;
{
((void (*)(val*, val*, long))(var127->class->vft[COLOR_array__Array__with_native]))(var127, var129, var128) /* with_native on <var127:Array[Object]>*/;
}
}
{
var130 = ((val* (*)(val*))(var127->class->vft[COLOR_string__Object__to_s]))(var127) /* to_s on <var127:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var130); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#class_ids (self) on <self:SeparateErasureCompiler> */
var133 = self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___class_ids].val; /* _class_ids on <self:SeparateErasureCompiler> */
if (unlikely(var133 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _class_ids");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_erasure_compiler.nit", 104);
show_backtrace(1);
}
var131 = var133;
RET_LABEL132:(void)0;
}
}
{
var134 = ((val* (*)(val*, val*))(var131->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var131, var_mclass) /* [] on <var131:Map[MClass, Int]>*/;
}
if (varonce135) {
var136 = varonce135;
} else {
var137 = ",";
var138 = 1;
var139 = string__NativeString__to_s_with_length(var137, var138);
var136 = var139;
varonce135 = var136;
}
var140 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var140 = array_instance Array[Object] */
var141 = 2;
var142 = NEW_array__NativeArray(var141, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var142)->values[0] = (val*) var134;
((struct instance_array__NativeArray*)var142)->values[1] = (val*) var136;
{
((void (*)(val*, val*, long))(var140->class->vft[COLOR_array__Array__with_native]))(var140, var142, var141) /* with_native on <var140:Array[Object]>*/;
}
}
{
var143 = ((val* (*)(val*))(var140->class->vft[COLOR_string__Object__to_s]))(var140) /* to_s on <var140:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var143); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce144) {
var145 = varonce144;
} else {
var146 = "\"";
var147 = 1;
var148 = string__NativeString__to_s_with_length(var146, var147);
var145 = var148;
varonce144 = var145;
}
{
{ /* Inline model#MClass#name (var_mclass) on <var_mclass:MClass> */
var151 = var_mclass->attrs[COLOR_model__MClass___name].val; /* _name on <var_mclass:MClass> */
if (unlikely(var151 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 352);
show_backtrace(1);
}
var149 = var151;
RET_LABEL150:(void)0;
}
}
if (varonce152) {
var153 = varonce152;
} else {
var154 = "\", /* class_name_string */";
var155 = 26;
var156 = string__NativeString__to_s_with_length(var154, var155);
var153 = var156;
varonce152 = var153;
}
var157 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var157 = array_instance Array[Object] */
var158 = 3;
var159 = NEW_array__NativeArray(var158, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var159)->values[0] = (val*) var145;
((struct instance_array__NativeArray*)var159)->values[1] = (val*) var149;
((struct instance_array__NativeArray*)var159)->values[2] = (val*) var153;
{
((void (*)(val*, val*, long))(var157->class->vft[COLOR_array__Array__with_native]))(var157, var159, var158) /* with_native on <var157:Array[Object]>*/;
}
}
{
var160 = ((val* (*)(val*))(var157->class->vft[COLOR_string__Object__to_s]))(var157) /* to_s on <var157:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var160); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
var161 = separate_compiler__SeparateCompiler__box_kind_of(self, var_mclass);
}
if (varonce162) {
var163 = varonce162;
} else {
var164 = ", /* box_kind */";
var165 = 16;
var166 = string__NativeString__to_s_with_length(var164, var165);
var163 = var166;
varonce162 = var163;
}
var167 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var167 = array_instance Array[Object] */
var168 = 2;
var169 = NEW_array__NativeArray(var168, &type_array__NativeArraykernel__Object);
var170 = BOX_kernel__Int(var161); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var169)->values[0] = (val*) var170;
((struct instance_array__NativeArray*)var169)->values[1] = (val*) var163;
{
((void (*)(val*, val*, long))(var167->class->vft[COLOR_array__Array__with_native]))(var167, var169, var168) /* with_native on <var167:Array[Object]>*/;
}
}
{
var171 = ((val* (*)(val*))(var167->class->vft[COLOR_string__Object__to_s]))(var167) /* to_s on <var167:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var171); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#class_colors (self) on <self:SeparateErasureCompiler> */
var174 = self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___class_colors].val; /* _class_colors on <self:SeparateErasureCompiler> */
if (unlikely(var174 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _class_colors");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_erasure_compiler.nit", 105);
show_backtrace(1);
}
var172 = var174;
RET_LABEL173:(void)0;
}
}
{
var175 = ((val* (*)(val*, val*))(var172->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var172, var_mclass) /* [] on <var172:Map[MClass, Int]>*/;
}
if (varonce176) {
var177 = varonce176;
} else {
var178 = ",";
var179 = 1;
var180 = string__NativeString__to_s_with_length(var178, var179);
var177 = var180;
varonce176 = var177;
}
var181 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var181 = array_instance Array[Object] */
var182 = 2;
var183 = NEW_array__NativeArray(var182, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var183)->values[0] = (val*) var175;
((struct instance_array__NativeArray*)var183)->values[1] = (val*) var177;
{
((void (*)(val*, val*, long))(var181->class->vft[COLOR_array__Array__with_native]))(var181, var183, var182) /* with_native on <var181:Array[Object]>*/;
}
}
{
var184 = ((val* (*)(val*))(var181->class->vft[COLOR_string__Object__to_s]))(var181) /* to_s on <var181:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var184); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
var185 = !var_is_dead;
if (var185){
{
var186 = separate_erasure_compiler__SeparateErasureCompiler__build_class_vts_table(self, var_mclass);
}
if (var186){
if (varonce187) {
var188 = varonce187;
} else {
var189 = "vts_table_";
var190 = 10;
var191 = string__NativeString__to_s_with_length(var189, var190);
var188 = var191;
varonce187 = var188;
}
var192 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var192 = array_instance Array[Object] */
var193 = 2;
var194 = NEW_array__NativeArray(var193, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var194)->values[0] = (val*) var188;
((struct instance_array__NativeArray*)var194)->values[1] = (val*) var_c_name;
{
((void (*)(val*, val*, long))(var192->class->vft[COLOR_array__Array__with_native]))(var192, var194, var193) /* with_native on <var192:Array[Object]>*/;
}
}
{
var195 = ((val* (*)(val*))(var192->class->vft[COLOR_string__Object__to_s]))(var192) /* to_s on <var192:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(var_v, var195); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (varonce196) {
var197 = varonce196;
} else {
var198 = "&vts_table_";
var199 = 11;
var200 = string__NativeString__to_s_with_length(var198, var199);
var197 = var200;
varonce196 = var197;
}
if (varonce201) {
var202 = varonce201;
} else {
var203 = ",";
var204 = 1;
var205 = string__NativeString__to_s_with_length(var203, var204);
var202 = var205;
varonce201 = var202;
}
var206 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var206 = array_instance Array[Object] */
var207 = 3;
var208 = NEW_array__NativeArray(var207, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var208)->values[0] = (val*) var197;
((struct instance_array__NativeArray*)var208)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var208)->values[2] = (val*) var202;
{
((void (*)(val*, val*, long))(var206->class->vft[COLOR_array__Array__with_native]))(var206, var208, var207) /* with_native on <var206:Array[Object]>*/;
}
}
{
var209 = ((val* (*)(val*))(var206->class->vft[COLOR_string__Object__to_s]))(var206) /* to_s on <var206:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var209); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (varonce210) {
var211 = varonce210;
} else {
var212 = "NULL,";
var213 = 5;
var214 = string__NativeString__to_s_with_length(var212, var213);
var211 = var214;
varonce210 = var211;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var211); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
if (varonce215) {
var216 = varonce215;
} else {
var217 = "&type_table_";
var218 = 12;
var219 = string__NativeString__to_s_with_length(var217, var218);
var216 = var219;
varonce215 = var216;
}
if (varonce220) {
var221 = varonce220;
} else {
var222 = ",";
var223 = 1;
var224 = string__NativeString__to_s_with_length(var222, var223);
var221 = var224;
varonce220 = var221;
}
var225 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var225 = array_instance Array[Object] */
var226 = 3;
var227 = NEW_array__NativeArray(var226, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var227)->values[0] = (val*) var216;
((struct instance_array__NativeArray*)var227)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var227)->values[2] = (val*) var221;
{
((void (*)(val*, val*, long))(var225->class->vft[COLOR_array__Array__with_native]))(var225, var227, var226) /* with_native on <var225:Array[Object]>*/;
}
}
{
var228 = ((val* (*)(val*))(var225->class->vft[COLOR_string__Object__to_s]))(var225) /* to_s on <var225:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var228); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce229) {
var230 = varonce229;
} else {
var231 = "{";
var232 = 1;
var233 = string__NativeString__to_s_with_length(var231, var232);
var230 = var233;
varonce229 = var230;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var230); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
var234 = 0;
var_i = var234;
{
{ /* Inline array#AbstractArrayRead#length (var_vft) on <var_vft:Array[nullable MPropDef]> */
var237 = var_vft->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_vft:Array[nullable MPropDef]> */
var235 = var237;
RET_LABEL236:(void)0;
}
}
var_238 = var235;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_238) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_238:Int> isa OTHER */
/* <var_238:Int> isa OTHER */
var241 = 1; /* easy <var_238:Int> isa OTHER*/
if (unlikely(!var241)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var242 = var_i < var_238;
var239 = var242;
goto RET_LABEL240;
RET_LABEL240:(void)0;
}
}
if (var239){
{
var243 = array__Array___91d_93d(var_vft, var_i);
}
var_mpropdef = var243;
var244 = NULL;
if (var_mpropdef == NULL) {
var245 = 1; /* is null */
} else {
var245 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mpropdef,var244) on <var_mpropdef:nullable MPropDef> */
var_other248 = var244;
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other248) on <var_mpropdef:nullable MPropDef(MPropDef)> */
var251 = var_mpropdef == var_other248;
var249 = var251;
goto RET_LABEL250;
RET_LABEL250:(void)0;
}
}
var246 = var249;
goto RET_LABEL247;
RET_LABEL247:(void)0;
}
var245 = var246;
}
if (var245){
if (varonce252) {
var253 = varonce252;
} else {
var254 = "NULL, /* empty */";
var255 = 17;
var256 = string__NativeString__to_s_with_length(var254, var255);
var253 = var256;
varonce252 = var253;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var253); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
/* <var_mpropdef:nullable MPropDef(MPropDef)> isa MMethodDef */
cltype258 = type_model__MMethodDef.color;
idtype259 = type_model__MMethodDef.id;
if(cltype258 >= var_mpropdef->type->table_size) {
var257 = 0;
} else {
var257 = var_mpropdef->type->type_table[cltype258] == idtype259;
}
if (unlikely(!var257)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_erasure_compiler.nit", 259);
show_backtrace(1);
}
var261 = NULL;
if (var_rta == NULL) {
var262 = 0; /* is null */
} else {
var262 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_rta,var261) on <var_rta:nullable RapidTypeAnalysis> */
var_other = var261;
{
var266 = ((short int (*)(val*, val*))(var_rta->class->vft[COLOR_kernel__Object___61d_61d]))(var_rta, var_other) /* == on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)>*/;
var265 = var266;
}
var267 = !var265;
var263 = var267;
goto RET_LABEL264;
RET_LABEL264:(void)0;
}
var262 = var263;
}
var_268 = var262;
if (var262){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_methoddefs (var_rta) on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
var271 = var_rta->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_methoddefs].val; /* _live_methoddefs on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
if (unlikely(var271 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methoddefs");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 72);
show_backtrace(1);
}
var269 = var271;
RET_LABEL270:(void)0;
}
}
{
var272 = hash_collection__HashSet__has(var269, var_mpropdef);
}
var273 = !var272;
var260 = var273;
} else {
var260 = var_268;
}
if (var260){
if (varonce274) {
var275 = varonce274;
} else {
var276 = "NULL, /* DEAD ";
var277 = 14;
var278 = string__NativeString__to_s_with_length(var276, var277);
var275 = var278;
varonce274 = var275;
}
{
{ /* Inline model#MClass#intro_mmodule (var_mclass) on <var_mclass:MClass> */
var281 = var_mclass->attrs[COLOR_model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_mclass:MClass> */
if (unlikely(var281 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 347);
show_backtrace(1);
}
var279 = var281;
RET_LABEL280:(void)0;
}
}
if (varonce282) {
var283 = varonce282;
} else {
var284 = ":";
var285 = 1;
var286 = string__NativeString__to_s_with_length(var284, var285);
var283 = var286;
varonce282 = var283;
}
if (varonce287) {
var288 = varonce287;
} else {
var289 = ":";
var290 = 1;
var291 = string__NativeString__to_s_with_length(var289, var290);
var288 = var291;
varonce287 = var288;
}
if (varonce292) {
var293 = varonce292;
} else {
var294 = " */";
var295 = 3;
var296 = string__NativeString__to_s_with_length(var294, var295);
var293 = var296;
varonce292 = var293;
}
var297 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var297 = array_instance Array[Object] */
var298 = 7;
var299 = NEW_array__NativeArray(var298, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var299)->values[0] = (val*) var275;
((struct instance_array__NativeArray*)var299)->values[1] = (val*) var279;
((struct instance_array__NativeArray*)var299)->values[2] = (val*) var283;
((struct instance_array__NativeArray*)var299)->values[3] = (val*) var_mclass;
((struct instance_array__NativeArray*)var299)->values[4] = (val*) var288;
((struct instance_array__NativeArray*)var299)->values[5] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var299)->values[6] = (val*) var293;
{
((void (*)(val*, val*, long))(var297->class->vft[COLOR_array__Array__with_native]))(var297, var299, var298) /* with_native on <var297:Array[Object]>*/;
}
}
{
var300 = ((val* (*)(val*))(var297->class->vft[COLOR_string__Object__to_s]))(var297) /* to_s on <var297:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var300); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
goto BREAK_label;
} else {
}
var302 = 1;
var_303 = var302;
if (var302){
var301 = var_303;
} else {
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var306 = var_mpropdef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MPropDef(MMethodDef)> */
if (unlikely(var306 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var304 = var306;
RET_LABEL305:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var304) on <var304:MClassDef> */
var309 = var304->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var304:MClassDef> */
if (unlikely(var309 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var307 = var309;
RET_LABEL308:(void)0;
}
}
{
var310 = abstract_compiler__MClassType__ctype(var307);
}
if (varonce311) {
var312 = varonce311;
} else {
var313 = "val*";
var314 = 4;
var315 = string__NativeString__to_s_with_length(var313, var314);
var312 = var315;
varonce311 = var312;
}
{
{ /* Inline kernel#Object#!= (var310,var312) on <var310:String> */
var_other = var312;
{
var320 = ((short int (*)(val*, val*))(var310->class->vft[COLOR_kernel__Object___61d_61d]))(var310, var_other) /* == on <var310:String>*/;
var319 = var320;
}
var321 = !var319;
var317 = var321;
goto RET_LABEL318;
RET_LABEL318:(void)0;
}
var316 = var317;
}
var301 = var316;
}
if (var301){
if (varonce322) {
var323 = varonce322;
} else {
var324 = "VIRTUAL_";
var325 = 8;
var326 = string__NativeString__to_s_with_length(var324, var325);
var323 = var326;
varonce322 = var323;
}
{
var327 = abstract_compiler__MPropDef__c_name(var_mpropdef);
}
var328 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var328 = array_instance Array[Object] */
var329 = 2;
var330 = NEW_array__NativeArray(var329, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var330)->values[0] = (val*) var323;
((struct instance_array__NativeArray*)var330)->values[1] = (val*) var327;
{
((void (*)(val*, val*, long))(var328->class->vft[COLOR_array__Array__with_native]))(var328, var330, var329) /* with_native on <var328:Array[Object]>*/;
}
}
{
var331 = ((val* (*)(val*))(var328->class->vft[COLOR_string__Object__to_s]))(var328) /* to_s on <var328:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(var_v, var331); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (varonce332) {
var333 = varonce332;
} else {
var334 = "(nitmethod_t)VIRTUAL_";
var335 = 21;
var336 = string__NativeString__to_s_with_length(var334, var335);
var333 = var336;
varonce332 = var333;
}
{
var337 = abstract_compiler__MPropDef__c_name(var_mpropdef);
}
if (varonce338) {
var339 = varonce338;
} else {
var340 = ", /* pointer to ";
var341 = 16;
var342 = string__NativeString__to_s_with_length(var340, var341);
var339 = var342;
varonce338 = var339;
}
{
{ /* Inline model#MClass#intro_mmodule (var_mclass) on <var_mclass:MClass> */
var345 = var_mclass->attrs[COLOR_model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_mclass:MClass> */
if (unlikely(var345 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 347);
show_backtrace(1);
}
var343 = var345;
RET_LABEL344:(void)0;
}
}
if (varonce346) {
var347 = varonce346;
} else {
var348 = ":";
var349 = 1;
var350 = string__NativeString__to_s_with_length(var348, var349);
var347 = var350;
varonce346 = var347;
}
if (varonce351) {
var352 = varonce351;
} else {
var353 = ":";
var354 = 1;
var355 = string__NativeString__to_s_with_length(var353, var354);
var352 = var355;
varonce351 = var352;
}
if (varonce356) {
var357 = varonce356;
} else {
var358 = " */";
var359 = 3;
var360 = string__NativeString__to_s_with_length(var358, var359);
var357 = var360;
varonce356 = var357;
}
var361 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var361 = array_instance Array[Object] */
var362 = 9;
var363 = NEW_array__NativeArray(var362, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var363)->values[0] = (val*) var333;
((struct instance_array__NativeArray*)var363)->values[1] = (val*) var337;
((struct instance_array__NativeArray*)var363)->values[2] = (val*) var339;
((struct instance_array__NativeArray*)var363)->values[3] = (val*) var343;
((struct instance_array__NativeArray*)var363)->values[4] = (val*) var347;
((struct instance_array__NativeArray*)var363)->values[5] = (val*) var_mclass;
((struct instance_array__NativeArray*)var363)->values[6] = (val*) var352;
((struct instance_array__NativeArray*)var363)->values[7] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var363)->values[8] = (val*) var357;
{
((void (*)(val*, val*, long))(var361->class->vft[COLOR_array__Array__with_native]))(var361, var363, var362) /* with_native on <var361:Array[Object]>*/;
}
}
{
var364 = ((val* (*)(val*))(var361->class->vft[COLOR_string__Object__to_s]))(var361) /* to_s on <var361:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var364); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
{
var365 = abstract_compiler__MPropDef__c_name(var_mpropdef);
}
var366 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var366 = array_instance Array[Object] */
var367 = 1;
var368 = NEW_array__NativeArray(var367, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var368)->values[0] = (val*) var365;
{
((void (*)(val*, val*, long))(var366->class->vft[COLOR_array__Array__with_native]))(var366, var368, var367) /* with_native on <var366:Array[Object]>*/;
}
}
{
var369 = ((val* (*)(val*))(var366->class->vft[COLOR_string__Object__to_s]))(var366) /* to_s on <var366:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(var_v, var369); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (varonce370) {
var371 = varonce370;
} else {
var372 = "(nitmethod_t)";
var373 = 13;
var374 = string__NativeString__to_s_with_length(var372, var373);
var371 = var374;
varonce370 = var371;
}
{
var375 = abstract_compiler__MPropDef__c_name(var_mpropdef);
}
if (varonce376) {
var377 = varonce376;
} else {
var378 = ", /* pointer to ";
var379 = 16;
var380 = string__NativeString__to_s_with_length(var378, var379);
var377 = var380;
varonce376 = var377;
}
{
{ /* Inline model#MClass#intro_mmodule (var_mclass) on <var_mclass:MClass> */
var383 = var_mclass->attrs[COLOR_model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_mclass:MClass> */
if (unlikely(var383 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 347);
show_backtrace(1);
}
var381 = var383;
RET_LABEL382:(void)0;
}
}
if (varonce384) {
var385 = varonce384;
} else {
var386 = ":";
var387 = 1;
var388 = string__NativeString__to_s_with_length(var386, var387);
var385 = var388;
varonce384 = var385;
}
if (varonce389) {
var390 = varonce389;
} else {
var391 = ":";
var392 = 1;
var393 = string__NativeString__to_s_with_length(var391, var392);
var390 = var393;
varonce389 = var390;
}
if (varonce394) {
var395 = varonce394;
} else {
var396 = " */";
var397 = 3;
var398 = string__NativeString__to_s_with_length(var396, var397);
var395 = var398;
varonce394 = var395;
}
var399 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var399 = array_instance Array[Object] */
var400 = 9;
var401 = NEW_array__NativeArray(var400, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var401)->values[0] = (val*) var371;
((struct instance_array__NativeArray*)var401)->values[1] = (val*) var375;
((struct instance_array__NativeArray*)var401)->values[2] = (val*) var377;
((struct instance_array__NativeArray*)var401)->values[3] = (val*) var381;
((struct instance_array__NativeArray*)var401)->values[4] = (val*) var385;
((struct instance_array__NativeArray*)var401)->values[5] = (val*) var_mclass;
((struct instance_array__NativeArray*)var401)->values[6] = (val*) var390;
((struct instance_array__NativeArray*)var401)->values[7] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var401)->values[8] = (val*) var395;
{
((void (*)(val*, val*, long))(var399->class->vft[COLOR_array__Array__with_native]))(var399, var401, var400) /* with_native on <var399:Array[Object]>*/;
}
}
{
var402 = ((val* (*)(val*))(var399->class->vft[COLOR_string__Object__to_s]))(var399) /* to_s on <var399:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var402); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
}
BREAK_label: (void)0;
var403 = 1;
{
var404 = kernel__Int__successor(var_i, var403);
}
var_i = var404;
} else {
goto BREAK_label405;
}
}
BREAK_label405: (void)0;
if (varonce406) {
var407 = varonce406;
} else {
var408 = "}";
var409 = 1;
var410 = string__NativeString__to_s_with_length(var408, var409);
var407 = var410;
varonce406 = var407;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var407); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
}
if (varonce411) {
var412 = varonce411;
} else {
var413 = "};";
var414 = 2;
var415 = string__NativeString__to_s_with_length(var413, var414);
var412 = var415;
varonce411 = var412;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var412); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce416) {
var417 = varonce416;
} else {
var418 = "const struct type_table type_table_";
var419 = 35;
var420 = string__NativeString__to_s_with_length(var418, var419);
var417 = var420;
varonce416 = var417;
}
if (varonce421) {
var422 = varonce421;
} else {
var423 = " = {";
var424 = 4;
var425 = string__NativeString__to_s_with_length(var423, var424);
var422 = var425;
varonce421 = var422;
}
var426 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var426 = array_instance Array[Object] */
var427 = 3;
var428 = NEW_array__NativeArray(var427, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var428)->values[0] = (val*) var417;
((struct instance_array__NativeArray*)var428)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var428)->values[2] = (val*) var422;
{
((void (*)(val*, val*, long))(var426->class->vft[COLOR_array__Array__with_native]))(var426, var428, var427) /* with_native on <var426:Array[Object]>*/;
}
}
{
var429 = ((val* (*)(val*))(var426->class->vft[COLOR_string__Object__to_s]))(var426) /* to_s on <var426:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var429); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
{ /* Inline array#AbstractArrayRead#length (var_class_table) on <var_class_table:Array[nullable MClass]> */
var432 = var_class_table->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_class_table:Array[nullable MClass]> */
var430 = var432;
RET_LABEL431:(void)0;
}
}
if (varonce433) {
var434 = varonce433;
} else {
var435 = ",";
var436 = 1;
var437 = string__NativeString__to_s_with_length(var435, var436);
var434 = var437;
varonce433 = var434;
}
var438 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var438 = array_instance Array[Object] */
var439 = 2;
var440 = NEW_array__NativeArray(var439, &type_array__NativeArraykernel__Object);
var441 = BOX_kernel__Int(var430); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var440)->values[0] = (val*) var441;
((struct instance_array__NativeArray*)var440)->values[1] = (val*) var434;
{
((void (*)(val*, val*, long))(var438->class->vft[COLOR_array__Array__with_native]))(var438, var440, var439) /* with_native on <var438:Array[Object]>*/;
}
}
{
var442 = ((val* (*)(val*))(var438->class->vft[COLOR_string__Object__to_s]))(var438) /* to_s on <var438:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var442); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce443) {
var444 = varonce443;
} else {
var445 = "{";
var446 = 1;
var447 = string__NativeString__to_s_with_length(var445, var446);
var444 = var447;
varonce443 = var444;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var444); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
var_448 = var_class_table;
{
var449 = array__AbstractArrayRead__iterator(var_448);
}
var_450 = var449;
for(;;) {
{
var451 = array__ArrayIterator__is_ok(var_450);
}
if (var451){
{
var452 = array__ArrayIterator__item(var_450);
}
var_msuper = var452;
var453 = NULL;
if (var_msuper == NULL) {
var454 = 1; /* is null */
} else {
var454 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_msuper,var453) on <var_msuper:nullable MClass> */
var_other248 = var453;
{
{ /* Inline kernel#Object#is_same_instance (var_msuper,var_other248) on <var_msuper:nullable MClass(MClass)> */
var459 = var_msuper == var_other248;
var457 = var459;
goto RET_LABEL458;
RET_LABEL458:(void)0;
}
}
var455 = var457;
goto RET_LABEL456;
RET_LABEL456:(void)0;
}
var454 = var455;
}
if (var454){
if (varonce460) {
var461 = varonce460;
} else {
var462 = "-1, /* empty */";
var463 = 15;
var464 = string__NativeString__to_s_with_length(var462, var463);
var461 = var464;
varonce460 = var461;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var461); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#class_ids (self) on <self:SeparateErasureCompiler> */
var467 = self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___class_ids].val; /* _class_ids on <self:SeparateErasureCompiler> */
if (unlikely(var467 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _class_ids");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_erasure_compiler.nit", 104);
show_backtrace(1);
}
var465 = var467;
RET_LABEL466:(void)0;
}
}
{
var468 = ((val* (*)(val*, val*))(var465->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var465, var_msuper) /* [] on <var465:Map[MClass, Int]>*/;
}
if (varonce469) {
var470 = varonce469;
} else {
var471 = ", /* ";
var472 = 5;
var473 = string__NativeString__to_s_with_length(var471, var472);
var470 = var473;
varonce469 = var470;
}
if (varonce474) {
var475 = varonce474;
} else {
var476 = " */";
var477 = 3;
var478 = string__NativeString__to_s_with_length(var476, var477);
var475 = var478;
varonce474 = var475;
}
var479 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var479 = array_instance Array[Object] */
var480 = 4;
var481 = NEW_array__NativeArray(var480, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var481)->values[0] = (val*) var468;
((struct instance_array__NativeArray*)var481)->values[1] = (val*) var470;
((struct instance_array__NativeArray*)var481)->values[2] = (val*) var_msuper;
((struct instance_array__NativeArray*)var481)->values[3] = (val*) var475;
{
((void (*)(val*, val*, long))(var479->class->vft[COLOR_array__Array__with_native]))(var479, var481, var480) /* with_native on <var479:Array[Object]>*/;
}
}
{
var482 = ((val* (*)(val*))(var479->class->vft[COLOR_string__Object__to_s]))(var479) /* to_s on <var479:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var482); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
{
array__ArrayIterator__next(var_450); /* Direct call array#ArrayIterator#next on <var_450:ArrayIterator[nullable MClass]>*/
}
} else {
goto BREAK_label483;
}
}
BREAK_label483: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_450) on <var_450:ArrayIterator[nullable MClass]> */
RET_LABEL484:(void)0;
}
}
if (varonce485) {
var486 = varonce485;
} else {
var487 = "}";
var488 = 1;
var489 = string__NativeString__to_s_with_length(var487, var488);
var486 = var489;
varonce485 = var486;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var486); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce490) {
var491 = varonce490;
} else {
var492 = "};";
var493 = 2;
var494 = string__NativeString__to_s_with_length(var492, var493);
var491 = var494;
varonce490 = var491;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var491); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
var496 = abstract_compiler__MClassType__ctype(var_mtype);
}
if (varonce497) {
var498 = varonce497;
} else {
var499 = "val*";
var500 = 4;
var501 = string__NativeString__to_s_with_length(var499, var500);
var498 = var501;
varonce497 = var498;
}
{
{ /* Inline kernel#Object#!= (var496,var498) on <var496:String> */
var_other = var498;
{
var506 = ((short int (*)(val*, val*))(var496->class->vft[COLOR_kernel__Object___61d_61d]))(var496, var_other) /* == on <var496:String>*/;
var505 = var506;
}
var507 = !var505;
var503 = var507;
goto RET_LABEL504;
RET_LABEL504:(void)0;
}
var502 = var503;
}
var_508 = var502;
if (var502){
var495 = var_508;
} else {
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var511 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var511 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var509 = var511;
RET_LABEL510:(void)0;
}
}
{
{ /* Inline model#MClass#name (var509) on <var509:MClass> */
var514 = var509->attrs[COLOR_model__MClass___name].val; /* _name on <var509:MClass> */
if (unlikely(var514 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 352);
show_backtrace(1);
}
var512 = var514;
RET_LABEL513:(void)0;
}
}
if (varonce515) {
var516 = varonce515;
} else {
var517 = "Pointer";
var518 = 7;
var519 = string__NativeString__to_s_with_length(var517, var518);
var516 = var519;
varonce515 = var516;
}
{
var521 = string__FlatString___61d_61d(var512, var516);
var520 = var521;
}
var495 = var520;
}
if (var495){
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var524 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var524 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
show_backtrace(1);
}
var522 = var524;
RET_LABEL523:(void)0;
}
}
if (varonce525) {
var526 = varonce525;
} else {
var527 = "struct instance_";
var528 = 16;
var529 = string__NativeString__to_s_with_length(var527, var528);
var526 = var529;
varonce525 = var526;
}
if (varonce530) {
var531 = varonce530;
} else {
var532 = " {";
var533 = 2;
var534 = string__NativeString__to_s_with_length(var532, var533);
var531 = var534;
varonce530 = var531;
}
var535 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var535 = array_instance Array[Object] */
var536 = 3;
var537 = NEW_array__NativeArray(var536, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var537)->values[0] = (val*) var526;
((struct instance_array__NativeArray*)var537)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var537)->values[2] = (val*) var531;
{
((void (*)(val*, val*, long))(var535->class->vft[COLOR_array__Array__with_native]))(var535, var537, var536) /* with_native on <var535:Array[Object]>*/;
}
}
{
var538 = ((val* (*)(val*))(var535->class->vft[COLOR_string__Object__to_s]))(var535) /* to_s on <var535:Array[Object]>*/;
}
{
abstract_compiler__CodeWriter__add_decl(var522, var538); /* Direct call abstract_compiler#CodeWriter#add_decl on <var522:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var541 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var541 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
show_backtrace(1);
}
var539 = var541;
RET_LABEL540:(void)0;
}
}
if (varonce542) {
var543 = varonce542;
} else {
var544 = "const struct class *class;";
var545 = 26;
var546 = string__NativeString__to_s_with_length(var544, var545);
var543 = var546;
varonce542 = var543;
}
{
abstract_compiler__CodeWriter__add_decl(var539, var543); /* Direct call abstract_compiler#CodeWriter#add_decl on <var539:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var549 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var549 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
show_backtrace(1);
}
var547 = var549;
RET_LABEL548:(void)0;
}
}
{
var550 = abstract_compiler__MClassType__ctype(var_mtype);
}
if (varonce551) {
var552 = varonce551;
} else {
var553 = " value;";
var554 = 7;
var555 = string__NativeString__to_s_with_length(var553, var554);
var552 = var555;
varonce551 = var552;
}
var556 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var556 = array_instance Array[Object] */
var557 = 2;
var558 = NEW_array__NativeArray(var557, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var558)->values[0] = (val*) var550;
((struct instance_array__NativeArray*)var558)->values[1] = (val*) var552;
{
((void (*)(val*, val*, long))(var556->class->vft[COLOR_array__Array__with_native]))(var556, var558, var557) /* with_native on <var556:Array[Object]>*/;
}
}
{
var559 = ((val* (*)(val*))(var556->class->vft[COLOR_string__Object__to_s]))(var556) /* to_s on <var556:Array[Object]>*/;
}
{
abstract_compiler__CodeWriter__add_decl(var547, var559); /* Direct call abstract_compiler#CodeWriter#add_decl on <var547:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var562 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var562 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
show_backtrace(1);
}
var560 = var562;
RET_LABEL561:(void)0;
}
}
if (varonce563) {
var564 = varonce563;
} else {
var565 = "};";
var566 = 2;
var567 = string__NativeString__to_s_with_length(var565, var566);
var564 = var567;
varonce563 = var564;
}
{
abstract_compiler__CodeWriter__add_decl(var560, var564); /* Direct call abstract_compiler#CodeWriter#add_decl on <var560:CodeWriter>*/
}
if (varonce568) {
var569 = varonce568;
} else {
var570 = "BOX_";
var571 = 4;
var572 = string__NativeString__to_s_with_length(var570, var571);
var569 = var572;
varonce568 = var569;
}
var573 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var573 = array_instance Array[Object] */
var574 = 2;
var575 = NEW_array__NativeArray(var574, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var575)->values[0] = (val*) var569;
((struct instance_array__NativeArray*)var575)->values[1] = (val*) var_c_name;
{
((void (*)(val*, val*, long))(var573->class->vft[COLOR_array__Array__with_native]))(var573, var575, var574) /* with_native on <var573:Array[Object]>*/;
}
}
{
var576 = ((val* (*)(val*))(var573->class->vft[COLOR_string__Object__to_s]))(var573) /* to_s on <var573:Array[Object]>*/;
}
if (varonce577) {
var578 = varonce577;
} else {
var579 = "val* BOX_";
var580 = 9;
var581 = string__NativeString__to_s_with_length(var579, var580);
var578 = var581;
varonce577 = var578;
}
if (varonce582) {
var583 = varonce582;
} else {
var584 = "(";
var585 = 1;
var586 = string__NativeString__to_s_with_length(var584, var585);
var583 = var586;
varonce582 = var583;
}
{
var587 = abstract_compiler__MClassType__ctype(var_mtype);
}
if (varonce588) {
var589 = varonce588;
} else {
var590 = ");";
var591 = 2;
var592 = string__NativeString__to_s_with_length(var590, var591);
var589 = var592;
varonce588 = var589;
}
var593 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var593 = array_instance Array[Object] */
var594 = 5;
var595 = NEW_array__NativeArray(var594, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var595)->values[0] = (val*) var578;
((struct instance_array__NativeArray*)var595)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var595)->values[2] = (val*) var583;
((struct instance_array__NativeArray*)var595)->values[3] = (val*) var587;
((struct instance_array__NativeArray*)var595)->values[4] = (val*) var589;
{
((void (*)(val*, val*, long))(var593->class->vft[COLOR_array__Array__with_native]))(var593, var595, var594) /* with_native on <var593:Array[Object]>*/;
}
}
{
var596 = ((val* (*)(val*))(var593->class->vft[COLOR_string__Object__to_s]))(var593) /* to_s on <var593:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompiler__provide_declaration(self, var576, var596); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateErasureCompiler>*/
}
if (varonce597) {
var598 = varonce597;
} else {
var599 = "/* allocate ";
var600 = 12;
var601 = string__NativeString__to_s_with_length(var599, var600);
var598 = var601;
varonce597 = var598;
}
if (varonce602) {
var603 = varonce602;
} else {
var604 = " */";
var605 = 3;
var606 = string__NativeString__to_s_with_length(var604, var605);
var603 = var606;
varonce602 = var603;
}
var607 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var607 = array_instance Array[Object] */
var608 = 3;
var609 = NEW_array__NativeArray(var608, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var609)->values[0] = (val*) var598;
((struct instance_array__NativeArray*)var609)->values[1] = (val*) var_mtype;
((struct instance_array__NativeArray*)var609)->values[2] = (val*) var603;
{
((void (*)(val*, val*, long))(var607->class->vft[COLOR_array__Array__with_native]))(var607, var609, var608) /* with_native on <var607:Array[Object]>*/;
}
}
{
var610 = ((val* (*)(val*))(var607->class->vft[COLOR_string__Object__to_s]))(var607) /* to_s on <var607:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var610); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce611) {
var612 = varonce611;
} else {
var613 = "val* BOX_";
var614 = 9;
var615 = string__NativeString__to_s_with_length(var613, var614);
var612 = var615;
varonce611 = var612;
}
{
var616 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MClassType>*/;
}
if (varonce617) {
var618 = varonce617;
} else {
var619 = "(";
var620 = 1;
var621 = string__NativeString__to_s_with_length(var619, var620);
var618 = var621;
varonce617 = var618;
}
{
var622 = abstract_compiler__MClassType__ctype(var_mtype);
}
if (varonce623) {
var624 = varonce623;
} else {
var625 = " value) {";
var626 = 9;
var627 = string__NativeString__to_s_with_length(var625, var626);
var624 = var627;
varonce623 = var624;
}
var628 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var628 = array_instance Array[Object] */
var629 = 5;
var630 = NEW_array__NativeArray(var629, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var630)->values[0] = (val*) var612;
((struct instance_array__NativeArray*)var630)->values[1] = (val*) var616;
((struct instance_array__NativeArray*)var630)->values[2] = (val*) var618;
((struct instance_array__NativeArray*)var630)->values[3] = (val*) var622;
((struct instance_array__NativeArray*)var630)->values[4] = (val*) var624;
{
((void (*)(val*, val*, long))(var628->class->vft[COLOR_array__Array__with_native]))(var628, var630, var629) /* with_native on <var628:Array[Object]>*/;
}
}
{
var631 = ((val* (*)(val*))(var628->class->vft[COLOR_string__Object__to_s]))(var628) /* to_s on <var628:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var631); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce632) {
var633 = varonce632;
} else {
var634 = "struct instance_";
var635 = 16;
var636 = string__NativeString__to_s_with_length(var634, var635);
var633 = var636;
varonce632 = var633;
}
if (varonce637) {
var638 = varonce637;
} else {
var639 = "*res = nit_alloc(sizeof(struct instance_";
var640 = 40;
var641 = string__NativeString__to_s_with_length(var639, var640);
var638 = var641;
varonce637 = var638;
}
if (varonce642) {
var643 = varonce642;
} else {
var644 = "));";
var645 = 3;
var646 = string__NativeString__to_s_with_length(var644, var645);
var643 = var646;
varonce642 = var643;
}
var647 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var647 = array_instance Array[Object] */
var648 = 5;
var649 = NEW_array__NativeArray(var648, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var649)->values[0] = (val*) var633;
((struct instance_array__NativeArray*)var649)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var649)->values[2] = (val*) var638;
((struct instance_array__NativeArray*)var649)->values[3] = (val*) var_c_name;
((struct instance_array__NativeArray*)var649)->values[4] = (val*) var643;
{
((void (*)(val*, val*, long))(var647->class->vft[COLOR_array__Array__with_native]))(var647, var649, var648) /* with_native on <var647:Array[Object]>*/;
}
}
{
var650 = ((val* (*)(val*))(var647->class->vft[COLOR_string__Object__to_s]))(var647) /* to_s on <var647:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var650); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce651) {
var652 = varonce651;
} else {
var653 = "class_";
var654 = 6;
var655 = string__NativeString__to_s_with_length(var653, var654);
var652 = var655;
varonce651 = var652;
}
var656 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var656 = array_instance Array[Object] */
var657 = 2;
var658 = NEW_array__NativeArray(var657, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var658)->values[0] = (val*) var652;
((struct instance_array__NativeArray*)var658)->values[1] = (val*) var_c_name;
{
((void (*)(val*, val*, long))(var656->class->vft[COLOR_array__Array__with_native]))(var656, var658, var657) /* with_native on <var656:Array[Object]>*/;
}
}
{
var659 = ((val* (*)(val*))(var656->class->vft[COLOR_string__Object__to_s]))(var656) /* to_s on <var656:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(var_v, var659); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (varonce660) {
var661 = varonce660;
} else {
var662 = "res->class = &class_";
var663 = 20;
var664 = string__NativeString__to_s_with_length(var662, var663);
var661 = var664;
varonce660 = var661;
}
if (varonce665) {
var666 = varonce665;
} else {
var667 = ";";
var668 = 1;
var669 = string__NativeString__to_s_with_length(var667, var668);
var666 = var669;
varonce665 = var666;
}
var670 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var670 = array_instance Array[Object] */
var671 = 3;
var672 = NEW_array__NativeArray(var671, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var672)->values[0] = (val*) var661;
((struct instance_array__NativeArray*)var672)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var672)->values[2] = (val*) var666;
{
((void (*)(val*, val*, long))(var670->class->vft[COLOR_array__Array__with_native]))(var670, var672, var671) /* with_native on <var670:Array[Object]>*/;
}
}
{
var673 = ((val* (*)(val*))(var670->class->vft[COLOR_string__Object__to_s]))(var670) /* to_s on <var670:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var673); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce674) {
var675 = varonce674;
} else {
var676 = "res->value = value;";
var677 = 19;
var678 = string__NativeString__to_s_with_length(var676, var677);
var675 = var678;
varonce674 = var675;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var675); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce679) {
var680 = varonce679;
} else {
var681 = "return (val*)res;";
var682 = 17;
var683 = string__NativeString__to_s_with_length(var681, var682);
var680 = var683;
varonce679 = var680;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var680); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce684) {
var685 = varonce684;
} else {
var686 = "}";
var687 = 1;
var688 = string__NativeString__to_s_with_length(var686, var687);
var685 = var688;
varonce684 = var685;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var685); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var691 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var691 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var689 = var691;
RET_LABEL690:(void)0;
}
}
{
{ /* Inline model#MClass#name (var689) on <var689:MClass> */
var694 = var689->attrs[COLOR_model__MClass___name].val; /* _name on <var689:MClass> */
if (unlikely(var694 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 352);
show_backtrace(1);
}
var692 = var694;
RET_LABEL693:(void)0;
}
}
if (varonce695) {
var696 = varonce695;
} else {
var697 = "Pointer";
var698 = 7;
var699 = string__NativeString__to_s_with_length(var697, var698);
var696 = var699;
varonce695 = var696;
}
{
{ /* Inline kernel#Object#!= (var692,var696) on <var692:String> */
var_other = var696;
{
var704 = ((short int (*)(val*, val*))(var692->class->vft[COLOR_kernel__Object___61d_61d]))(var692, var_other) /* == on <var692:String>*/;
var703 = var704;
}
var705 = !var703;
var701 = var705;
goto RET_LABEL702;
RET_LABEL702:(void)0;
}
var700 = var701;
}
if (var700){
goto RET_LABEL;
} else {
}
{
var706 = separate_erasure_compiler__SeparateErasureCompiler__new_visitor(self);
}
var_v = var706;
if (varonce707) {
var708 = varonce707;
} else {
var709 = "NEW_";
var710 = 4;
var711 = string__NativeString__to_s_with_length(var709, var710);
var708 = var711;
varonce707 = var708;
}
var712 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var712 = array_instance Array[Object] */
var713 = 2;
var714 = NEW_array__NativeArray(var713, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var714)->values[0] = (val*) var708;
((struct instance_array__NativeArray*)var714)->values[1] = (val*) var_c_name;
{
((void (*)(val*, val*, long))(var712->class->vft[COLOR_array__Array__with_native]))(var712, var714, var713) /* with_native on <var712:Array[Object]>*/;
}
}
{
var715 = ((val* (*)(val*))(var712->class->vft[COLOR_string__Object__to_s]))(var712) /* to_s on <var712:Array[Object]>*/;
}
{
var716 = abstract_compiler__MClassType__ctype(var_mtype);
}
if (varonce717) {
var718 = varonce717;
} else {
var719 = " NEW_";
var720 = 5;
var721 = string__NativeString__to_s_with_length(var719, var720);
var718 = var721;
varonce717 = var718;
}
if (varonce722) {
var723 = varonce722;
} else {
var724 = "();";
var725 = 3;
var726 = string__NativeString__to_s_with_length(var724, var725);
var723 = var726;
varonce722 = var723;
}
var727 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var727 = array_instance Array[Object] */
var728 = 4;
var729 = NEW_array__NativeArray(var728, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var729)->values[0] = (val*) var716;
((struct instance_array__NativeArray*)var729)->values[1] = (val*) var718;
((struct instance_array__NativeArray*)var729)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var729)->values[3] = (val*) var723;
{
((void (*)(val*, val*, long))(var727->class->vft[COLOR_array__Array__with_native]))(var727, var729, var728) /* with_native on <var727:Array[Object]>*/;
}
}
{
var730 = ((val* (*)(val*))(var727->class->vft[COLOR_string__Object__to_s]))(var727) /* to_s on <var727:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompiler__provide_declaration(self, var715, var730); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateErasureCompiler>*/
}
if (varonce731) {
var732 = varonce731;
} else {
var733 = "/* allocate ";
var734 = 12;
var735 = string__NativeString__to_s_with_length(var733, var734);
var732 = var735;
varonce731 = var732;
}
if (varonce736) {
var737 = varonce736;
} else {
var738 = " */";
var739 = 3;
var740 = string__NativeString__to_s_with_length(var738, var739);
var737 = var740;
varonce736 = var737;
}
var741 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var741 = array_instance Array[Object] */
var742 = 3;
var743 = NEW_array__NativeArray(var742, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var743)->values[0] = (val*) var732;
((struct instance_array__NativeArray*)var743)->values[1] = (val*) var_mtype;
((struct instance_array__NativeArray*)var743)->values[2] = (val*) var737;
{
((void (*)(val*, val*, long))(var741->class->vft[COLOR_array__Array__with_native]))(var741, var743, var742) /* with_native on <var741:Array[Object]>*/;
}
}
{
var744 = ((val* (*)(val*))(var741->class->vft[COLOR_string__Object__to_s]))(var741) /* to_s on <var741:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var744); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
var745 = abstract_compiler__MClassType__ctype(var_mtype);
}
if (varonce746) {
var747 = varonce746;
} else {
var748 = " NEW_";
var749 = 5;
var750 = string__NativeString__to_s_with_length(var748, var749);
var747 = var750;
varonce746 = var747;
}
if (varonce751) {
var752 = varonce751;
} else {
var753 = "() {";
var754 = 4;
var755 = string__NativeString__to_s_with_length(var753, var754);
var752 = var755;
varonce751 = var752;
}
var756 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var756 = array_instance Array[Object] */
var757 = 4;
var758 = NEW_array__NativeArray(var757, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var758)->values[0] = (val*) var745;
((struct instance_array__NativeArray*)var758)->values[1] = (val*) var747;
((struct instance_array__NativeArray*)var758)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var758)->values[3] = (val*) var752;
{
((void (*)(val*, val*, long))(var756->class->vft[COLOR_array__Array__with_native]))(var756, var758, var757) /* with_native on <var756:Array[Object]>*/;
}
}
{
var759 = ((val* (*)(val*))(var756->class->vft[COLOR_string__Object__to_s]))(var756) /* to_s on <var756:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var759); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (var_is_dead){
if (varonce760) {
var761 = varonce760;
} else {
var762 = " is DEAD";
var763 = 8;
var764 = string__NativeString__to_s_with_length(var762, var763);
var761 = var764;
varonce760 = var761;
}
var765 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var765 = array_instance Array[Object] */
var766 = 2;
var767 = NEW_array__NativeArray(var766, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var767)->values[0] = (val*) var_mclass;
((struct instance_array__NativeArray*)var767)->values[1] = (val*) var761;
{
((void (*)(val*, val*, long))(var765->class->vft[COLOR_array__Array__with_native]))(var765, var767, var766) /* with_native on <var765:Array[Object]>*/;
}
}
{
var768 = ((val* (*)(val*))(var765->class->vft[COLOR_string__Object__to_s]))(var765) /* to_s on <var765:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_abort(var_v, var768); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (varonce769) {
var770 = varonce769;
} else {
var771 = "self";
var772 = 4;
var773 = string__NativeString__to_s_with_length(var771, var772);
var770 = var773;
varonce769 = var770;
}
{
var774 = abstract_compiler__AbstractCompilerVisitor__new_named_var(var_v, var_mtype, var770);
}
var_res = var774;
var775 = 1;
{
{ /* Inline abstract_compiler#RuntimeVariable#is_exact= (var_res,var775) on <var_res:RuntimeVariable> */
var_res->attrs[COLOR_abstract_compiler__RuntimeVariable___is_exact].s = var775; /* _is_exact on <var_res:RuntimeVariable> */
RET_LABEL776:(void)0;
}
}
if (varonce777) {
var778 = varonce777;
} else {
var779 = " = nit_alloc(sizeof(struct instance_";
var780 = 36;
var781 = string__NativeString__to_s_with_length(var779, var780);
var778 = var781;
varonce777 = var778;
}
{
var782 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MClassType>*/;
}
if (varonce783) {
var784 = varonce783;
} else {
var785 = "));";
var786 = 3;
var787 = string__NativeString__to_s_with_length(var785, var786);
var784 = var787;
varonce783 = var784;
}
var788 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var788 = array_instance Array[Object] */
var789 = 4;
var790 = NEW_array__NativeArray(var789, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var790)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var790)->values[1] = (val*) var778;
((struct instance_array__NativeArray*)var790)->values[2] = (val*) var782;
((struct instance_array__NativeArray*)var790)->values[3] = (val*) var784;
{
((void (*)(val*, val*, long))(var788->class->vft[COLOR_array__Array__with_native]))(var788, var790, var789) /* with_native on <var788:Array[Object]>*/;
}
}
{
var791 = ((val* (*)(val*))(var788->class->vft[COLOR_string__Object__to_s]))(var788) /* to_s on <var788:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var791); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce792) {
var793 = varonce792;
} else {
var794 = "class_";
var795 = 6;
var796 = string__NativeString__to_s_with_length(var794, var795);
var793 = var796;
varonce792 = var793;
}
var797 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var797 = array_instance Array[Object] */
var798 = 2;
var799 = NEW_array__NativeArray(var798, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var799)->values[0] = (val*) var793;
((struct instance_array__NativeArray*)var799)->values[1] = (val*) var_c_name;
{
((void (*)(val*, val*, long))(var797->class->vft[COLOR_array__Array__with_native]))(var797, var799, var798) /* with_native on <var797:Array[Object]>*/;
}
}
{
var800 = ((val* (*)(val*))(var797->class->vft[COLOR_string__Object__to_s]))(var797) /* to_s on <var797:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(var_v, var800); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (varonce801) {
var802 = varonce801;
} else {
var803 = "->class = &class_";
var804 = 17;
var805 = string__NativeString__to_s_with_length(var803, var804);
var802 = var805;
varonce801 = var802;
}
if (varonce806) {
var807 = varonce806;
} else {
var808 = ";";
var809 = 1;
var810 = string__NativeString__to_s_with_length(var808, var809);
var807 = var810;
varonce806 = var807;
}
var811 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var811 = array_instance Array[Object] */
var812 = 4;
var813 = NEW_array__NativeArray(var812, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var813)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var813)->values[1] = (val*) var802;
((struct instance_array__NativeArray*)var813)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var813)->values[3] = (val*) var807;
{
((void (*)(val*, val*, long))(var811->class->vft[COLOR_array__Array__with_native]))(var811, var813, var812) /* with_native on <var811:Array[Object]>*/;
}
}
{
var814 = ((val* (*)(val*))(var811->class->vft[COLOR_string__Object__to_s]))(var811) /* to_s on <var811:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var814); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce815) {
var816 = varonce815;
} else {
var817 = "((struct instance_";
var818 = 18;
var819 = string__NativeString__to_s_with_length(var817, var818);
var816 = var819;
varonce815 = var816;
}
{
var820 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MClassType>*/;
}
if (varonce821) {
var822 = varonce821;
} else {
var823 = "*)";
var824 = 2;
var825 = string__NativeString__to_s_with_length(var823, var824);
var822 = var825;
varonce821 = var822;
}
if (varonce826) {
var827 = varonce826;
} else {
var828 = ")->value = NULL;";
var829 = 16;
var830 = string__NativeString__to_s_with_length(var828, var829);
var827 = var830;
varonce826 = var827;
}
var831 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var831 = array_instance Array[Object] */
var832 = 5;
var833 = NEW_array__NativeArray(var832, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var833)->values[0] = (val*) var816;
((struct instance_array__NativeArray*)var833)->values[1] = (val*) var820;
((struct instance_array__NativeArray*)var833)->values[2] = (val*) var822;
((struct instance_array__NativeArray*)var833)->values[3] = (val*) var_res;
((struct instance_array__NativeArray*)var833)->values[4] = (val*) var827;
{
((void (*)(val*, val*, long))(var831->class->vft[COLOR_array__Array__with_native]))(var831, var833, var832) /* with_native on <var831:Array[Object]>*/;
}
}
{
var834 = ((val* (*)(val*))(var831->class->vft[COLOR_string__Object__to_s]))(var831) /* to_s on <var831:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var834); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce835) {
var836 = varonce835;
} else {
var837 = "return ";
var838 = 7;
var839 = string__NativeString__to_s_with_length(var837, var838);
var836 = var839;
varonce835 = var836;
}
if (varonce840) {
var841 = varonce840;
} else {
var842 = ";";
var843 = 1;
var844 = string__NativeString__to_s_with_length(var842, var843);
var841 = var844;
varonce840 = var841;
}
var845 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var845 = array_instance Array[Object] */
var846 = 3;
var847 = NEW_array__NativeArray(var846, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var847)->values[0] = (val*) var836;
((struct instance_array__NativeArray*)var847)->values[1] = (val*) var_res;
((struct instance_array__NativeArray*)var847)->values[2] = (val*) var841;
{
((void (*)(val*, val*, long))(var845->class->vft[COLOR_array__Array__with_native]))(var845, var847, var846) /* with_native on <var845:Array[Object]>*/;
}
}
{
var848 = ((val* (*)(val*))(var845->class->vft[COLOR_string__Object__to_s]))(var845) /* to_s on <var845:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var848); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
}
if (varonce849) {
var850 = varonce849;
} else {
var851 = "}";
var852 = 1;
var853 = string__NativeString__to_s_with_length(var851, var852);
var850 = var853;
varonce849 = var850;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var850); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
{
{ /* Inline model#MClass#name (var_mclass) on <var_mclass:MClass> */
var856 = var_mclass->attrs[COLOR_model__MClass___name].val; /* _name on <var_mclass:MClass> */
if (unlikely(var856 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 352);
show_backtrace(1);
}
var854 = var856;
RET_LABEL855:(void)0;
}
}
if (varonce857) {
var858 = varonce857;
} else {
var859 = "NativeArray";
var860 = 11;
var861 = string__NativeString__to_s_with_length(var859, var860);
var858 = var861;
varonce857 = var858;
}
{
var863 = string__FlatString___61d_61d(var854, var858);
var862 = var863;
}
if (var862){
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var866 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var866 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
show_backtrace(1);
}
var864 = var866;
RET_LABEL865:(void)0;
}
}
if (varonce867) {
var868 = varonce867;
} else {
var869 = "struct instance_";
var870 = 16;
var871 = string__NativeString__to_s_with_length(var869, var870);
var868 = var871;
varonce867 = var868;
}
if (varonce872) {
var873 = varonce872;
} else {
var874 = " {";
var875 = 2;
var876 = string__NativeString__to_s_with_length(var874, var875);
var873 = var876;
varonce872 = var873;
}
var877 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var877 = array_instance Array[Object] */
var878 = 3;
var879 = NEW_array__NativeArray(var878, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var879)->values[0] = (val*) var868;
((struct instance_array__NativeArray*)var879)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var879)->values[2] = (val*) var873;
{
((void (*)(val*, val*, long))(var877->class->vft[COLOR_array__Array__with_native]))(var877, var879, var878) /* with_native on <var877:Array[Object]>*/;
}
}
{
var880 = ((val* (*)(val*))(var877->class->vft[COLOR_string__Object__to_s]))(var877) /* to_s on <var877:Array[Object]>*/;
}
{
abstract_compiler__CodeWriter__add_decl(var864, var880); /* Direct call abstract_compiler#CodeWriter#add_decl on <var864:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var883 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var883 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
show_backtrace(1);
}
var881 = var883;
RET_LABEL882:(void)0;
}
}
if (varonce884) {
var885 = varonce884;
} else {
var886 = "const struct class *class;";
var887 = 26;
var888 = string__NativeString__to_s_with_length(var886, var887);
var885 = var888;
varonce884 = var885;
}
{
abstract_compiler__CodeWriter__add_decl(var881, var885); /* Direct call abstract_compiler#CodeWriter#add_decl on <var881:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var891 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var891 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
show_backtrace(1);
}
var889 = var891;
RET_LABEL890:(void)0;
}
}
if (varonce892) {
var893 = varonce892;
} else {
var894 = "int length;";
var895 = 11;
var896 = string__NativeString__to_s_with_length(var894, var895);
var893 = var896;
varonce892 = var893;
}
{
abstract_compiler__CodeWriter__add_decl(var889, var893); /* Direct call abstract_compiler#CodeWriter#add_decl on <var889:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var899 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var899 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
show_backtrace(1);
}
var897 = var899;
RET_LABEL898:(void)0;
}
}
if (varonce900) {
var901 = varonce900;
} else {
var902 = "val* values[];";
var903 = 14;
var904 = string__NativeString__to_s_with_length(var902, var903);
var901 = var904;
varonce900 = var901;
}
{
abstract_compiler__CodeWriter__add_decl(var897, var901); /* Direct call abstract_compiler#CodeWriter#add_decl on <var897:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var907 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var907 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
show_backtrace(1);
}
var905 = var907;
RET_LABEL906:(void)0;
}
}
if (varonce908) {
var909 = varonce908;
} else {
var910 = "};";
var911 = 2;
var912 = string__NativeString__to_s_with_length(var910, var911);
var909 = var912;
varonce908 = var909;
}
{
abstract_compiler__CodeWriter__add_decl(var905, var909); /* Direct call abstract_compiler#CodeWriter#add_decl on <var905:CodeWriter>*/
}
if (varonce913) {
var914 = varonce913;
} else {
var915 = "NEW_";
var916 = 4;
var917 = string__NativeString__to_s_with_length(var915, var916);
var914 = var917;
varonce913 = var914;
}
var918 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var918 = array_instance Array[Object] */
var919 = 2;
var920 = NEW_array__NativeArray(var919, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var920)->values[0] = (val*) var914;
((struct instance_array__NativeArray*)var920)->values[1] = (val*) var_c_name;
{
((void (*)(val*, val*, long))(var918->class->vft[COLOR_array__Array__with_native]))(var918, var920, var919) /* with_native on <var918:Array[Object]>*/;
}
}
{
var921 = ((val* (*)(val*))(var918->class->vft[COLOR_string__Object__to_s]))(var918) /* to_s on <var918:Array[Object]>*/;
}
{
var922 = abstract_compiler__MClassType__ctype(var_mtype);
}
if (varonce923) {
var924 = varonce923;
} else {
var925 = " NEW_";
var926 = 5;
var927 = string__NativeString__to_s_with_length(var925, var926);
var924 = var927;
varonce923 = var924;
}
if (varonce928) {
var929 = varonce928;
} else {
var930 = "(int length);";
var931 = 13;
var932 = string__NativeString__to_s_with_length(var930, var931);
var929 = var932;
varonce928 = var929;
}
var933 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var933 = array_instance Array[Object] */
var934 = 4;
var935 = NEW_array__NativeArray(var934, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var935)->values[0] = (val*) var922;
((struct instance_array__NativeArray*)var935)->values[1] = (val*) var924;
((struct instance_array__NativeArray*)var935)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var935)->values[3] = (val*) var929;
{
((void (*)(val*, val*, long))(var933->class->vft[COLOR_array__Array__with_native]))(var933, var935, var934) /* with_native on <var933:Array[Object]>*/;
}
}
{
var936 = ((val* (*)(val*))(var933->class->vft[COLOR_string__Object__to_s]))(var933) /* to_s on <var933:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompiler__provide_declaration(self, var921, var936); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateErasureCompiler>*/
}
if (varonce937) {
var938 = varonce937;
} else {
var939 = "/* allocate ";
var940 = 12;
var941 = string__NativeString__to_s_with_length(var939, var940);
var938 = var941;
varonce937 = var938;
}
if (varonce942) {
var943 = varonce942;
} else {
var944 = " */";
var945 = 3;
var946 = string__NativeString__to_s_with_length(var944, var945);
var943 = var946;
varonce942 = var943;
}
var947 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var947 = array_instance Array[Object] */
var948 = 3;
var949 = NEW_array__NativeArray(var948, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var949)->values[0] = (val*) var938;
((struct instance_array__NativeArray*)var949)->values[1] = (val*) var_mtype;
((struct instance_array__NativeArray*)var949)->values[2] = (val*) var943;
{
((void (*)(val*, val*, long))(var947->class->vft[COLOR_array__Array__with_native]))(var947, var949, var948) /* with_native on <var947:Array[Object]>*/;
}
}
{
var950 = ((val* (*)(val*))(var947->class->vft[COLOR_string__Object__to_s]))(var947) /* to_s on <var947:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var950); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
var951 = abstract_compiler__MClassType__ctype(var_mtype);
}
if (varonce952) {
var953 = varonce952;
} else {
var954 = " NEW_";
var955 = 5;
var956 = string__NativeString__to_s_with_length(var954, var955);
var953 = var956;
varonce952 = var953;
}
if (varonce957) {
var958 = varonce957;
} else {
var959 = "(int length) {";
var960 = 14;
var961 = string__NativeString__to_s_with_length(var959, var960);
var958 = var961;
varonce957 = var958;
}
var962 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var962 = array_instance Array[Object] */
var963 = 4;
var964 = NEW_array__NativeArray(var963, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var964)->values[0] = (val*) var951;
((struct instance_array__NativeArray*)var964)->values[1] = (val*) var953;
((struct instance_array__NativeArray*)var964)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var964)->values[3] = (val*) var958;
{
((void (*)(val*, val*, long))(var962->class->vft[COLOR_array__Array__with_native]))(var962, var964, var963) /* with_native on <var962:Array[Object]>*/;
}
}
{
var965 = ((val* (*)(val*))(var962->class->vft[COLOR_string__Object__to_s]))(var962) /* to_s on <var962:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var965); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce966) {
var967 = varonce966;
} else {
var968 = "self";
var969 = 4;
var970 = string__NativeString__to_s_with_length(var968, var969);
var967 = var970;
varonce966 = var967;
}
{
var971 = abstract_compiler__AbstractCompilerVisitor__get_name(var_v, var967);
}
var_res972 = var971;
if (varonce973) {
var974 = varonce973;
} else {
var975 = "struct instance_";
var976 = 16;
var977 = string__NativeString__to_s_with_length(var975, var976);
var974 = var977;
varonce973 = var974;
}
if (varonce978) {
var979 = varonce978;
} else {
var980 = " *";
var981 = 2;
var982 = string__NativeString__to_s_with_length(var980, var981);
var979 = var982;
varonce978 = var979;
}
if (varonce983) {
var984 = varonce983;
} else {
var985 = ";";
var986 = 1;
var987 = string__NativeString__to_s_with_length(var985, var986);
var984 = var987;
varonce983 = var984;
}
var988 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var988 = array_instance Array[Object] */
var989 = 5;
var990 = NEW_array__NativeArray(var989, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var990)->values[0] = (val*) var974;
((struct instance_array__NativeArray*)var990)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var990)->values[2] = (val*) var979;
((struct instance_array__NativeArray*)var990)->values[3] = (val*) var_res972;
((struct instance_array__NativeArray*)var990)->values[4] = (val*) var984;
{
((void (*)(val*, val*, long))(var988->class->vft[COLOR_array__Array__with_native]))(var988, var990, var989) /* with_native on <var988:Array[Object]>*/;
}
}
{
var991 = ((val* (*)(val*))(var988->class->vft[COLOR_string__Object__to_s]))(var988) /* to_s on <var988:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var991); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
{ /* Inline model#MClassType#arguments (var_mtype) on <var_mtype:MClassType> */
var994 = var_mtype->attrs[COLOR_model__MClassType___arguments].val; /* _arguments on <var_mtype:MClassType> */
if (unlikely(var994 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 996);
show_backtrace(1);
}
var992 = var994;
RET_LABEL993:(void)0;
}
}
{
var995 = abstract_collection__SequenceRead__first(var992);
}
var_mtype_elt = var995;
if (varonce996) {
var997 = varonce996;
} else {
var998 = " = nit_alloc(sizeof(struct instance_";
var999 = 36;
var1000 = string__NativeString__to_s_with_length(var998, var999);
var997 = var1000;
varonce996 = var997;
}
if (varonce1001) {
var1002 = varonce1001;
} else {
var1003 = ") + length*sizeof(";
var1004 = 18;
var1005 = string__NativeString__to_s_with_length(var1003, var1004);
var1002 = var1005;
varonce1001 = var1002;
}
{
var1006 = ((val* (*)(val*))(var_mtype_elt->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype_elt) /* ctype on <var_mtype_elt:MType>*/;
}
if (varonce1007) {
var1008 = varonce1007;
} else {
var1009 = "));";
var1010 = 3;
var1011 = string__NativeString__to_s_with_length(var1009, var1010);
var1008 = var1011;
varonce1007 = var1008;
}
var1012 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1012 = array_instance Array[Object] */
var1013 = 6;
var1014 = NEW_array__NativeArray(var1013, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1014)->values[0] = (val*) var_res972;
((struct instance_array__NativeArray*)var1014)->values[1] = (val*) var997;
((struct instance_array__NativeArray*)var1014)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var1014)->values[3] = (val*) var1002;
((struct instance_array__NativeArray*)var1014)->values[4] = (val*) var1006;
((struct instance_array__NativeArray*)var1014)->values[5] = (val*) var1008;
{
((void (*)(val*, val*, long))(var1012->class->vft[COLOR_array__Array__with_native]))(var1012, var1014, var1013) /* with_native on <var1012:Array[Object]>*/;
}
}
{
var1015 = ((val* (*)(val*))(var1012->class->vft[COLOR_string__Object__to_s]))(var1012) /* to_s on <var1012:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var1015); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce1016) {
var1017 = varonce1016;
} else {
var1018 = "class_";
var1019 = 6;
var1020 = string__NativeString__to_s_with_length(var1018, var1019);
var1017 = var1020;
varonce1016 = var1017;
}
var1021 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1021 = array_instance Array[Object] */
var1022 = 2;
var1023 = NEW_array__NativeArray(var1022, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1023)->values[0] = (val*) var1017;
((struct instance_array__NativeArray*)var1023)->values[1] = (val*) var_c_name;
{
((void (*)(val*, val*, long))(var1021->class->vft[COLOR_array__Array__with_native]))(var1021, var1023, var1022) /* with_native on <var1021:Array[Object]>*/;
}
}
{
var1024 = ((val* (*)(val*))(var1021->class->vft[COLOR_string__Object__to_s]))(var1021) /* to_s on <var1021:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(var_v, var1024); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (varonce1025) {
var1026 = varonce1025;
} else {
var1027 = "->class = &class_";
var1028 = 17;
var1029 = string__NativeString__to_s_with_length(var1027, var1028);
var1026 = var1029;
varonce1025 = var1026;
}
if (varonce1030) {
var1031 = varonce1030;
} else {
var1032 = ";";
var1033 = 1;
var1034 = string__NativeString__to_s_with_length(var1032, var1033);
var1031 = var1034;
varonce1030 = var1031;
}
var1035 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1035 = array_instance Array[Object] */
var1036 = 4;
var1037 = NEW_array__NativeArray(var1036, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1037)->values[0] = (val*) var_res972;
((struct instance_array__NativeArray*)var1037)->values[1] = (val*) var1026;
((struct instance_array__NativeArray*)var1037)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var1037)->values[3] = (val*) var1031;
{
((void (*)(val*, val*, long))(var1035->class->vft[COLOR_array__Array__with_native]))(var1035, var1037, var1036) /* with_native on <var1035:Array[Object]>*/;
}
}
{
var1038 = ((val* (*)(val*))(var1035->class->vft[COLOR_string__Object__to_s]))(var1035) /* to_s on <var1035:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var1038); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce1039) {
var1040 = varonce1039;
} else {
var1041 = "->length = length;";
var1042 = 18;
var1043 = string__NativeString__to_s_with_length(var1041, var1042);
var1040 = var1043;
varonce1039 = var1040;
}
var1044 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1044 = array_instance Array[Object] */
var1045 = 2;
var1046 = NEW_array__NativeArray(var1045, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1046)->values[0] = (val*) var_res972;
((struct instance_array__NativeArray*)var1046)->values[1] = (val*) var1040;
{
((void (*)(val*, val*, long))(var1044->class->vft[COLOR_array__Array__with_native]))(var1044, var1046, var1045) /* with_native on <var1044:Array[Object]>*/;
}
}
{
var1047 = ((val* (*)(val*))(var1044->class->vft[COLOR_string__Object__to_s]))(var1044) /* to_s on <var1044:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var1047); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce1048) {
var1049 = varonce1048;
} else {
var1050 = "return (val*)";
var1051 = 13;
var1052 = string__NativeString__to_s_with_length(var1050, var1051);
var1049 = var1052;
varonce1048 = var1049;
}
if (varonce1053) {
var1054 = varonce1053;
} else {
var1055 = ";";
var1056 = 1;
var1057 = string__NativeString__to_s_with_length(var1055, var1056);
var1054 = var1057;
varonce1053 = var1054;
}
var1058 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1058 = array_instance Array[Object] */
var1059 = 3;
var1060 = NEW_array__NativeArray(var1059, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1060)->values[0] = (val*) var1049;
((struct instance_array__NativeArray*)var1060)->values[1] = (val*) var_res972;
((struct instance_array__NativeArray*)var1060)->values[2] = (val*) var1054;
{
((void (*)(val*, val*, long))(var1058->class->vft[COLOR_array__Array__with_native]))(var1058, var1060, var1059) /* with_native on <var1058:Array[Object]>*/;
}
}
{
var1061 = ((val* (*)(val*))(var1058->class->vft[COLOR_string__Object__to_s]))(var1058) /* to_s on <var1058:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var1061); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce1062) {
var1063 = varonce1062;
} else {
var1064 = "}";
var1065 = 1;
var1066 = string__NativeString__to_s_with_length(var1064, var1065);
var1063 = var1066;
varonce1062 = var1063;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var1063); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var1070 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var1070 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var1068 = var1070;
RET_LABEL1069:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var1068) on <var1068:MClass> */
var1073 = var1068->attrs[COLOR_model__MClass___kind].val; /* _kind on <var1068:MClass> */
if (unlikely(var1073 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 371);
show_backtrace(1);
}
var1071 = var1073;
RET_LABEL1072:(void)0;
}
}
{
var1074 = model__Object__extern_kind(self);
}
{
{ /* Inline kernel#Object#== (var1071,var1074) on <var1071:MClassKind> */
var_other248 = var1074;
{
{ /* Inline kernel#Object#is_same_instance (var1071,var_other248) on <var1071:MClassKind> */
var1080 = var1071 == var_other248;
var1078 = var1080;
goto RET_LABEL1079;
RET_LABEL1079:(void)0;
}
}
var1076 = var1078;
goto RET_LABEL1077;
RET_LABEL1077:(void)0;
}
var1075 = var1076;
}
var_1081 = var1075;
if (var1075){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var1084 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var1084 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var1082 = var1084;
RET_LABEL1083:(void)0;
}
}
{
{ /* Inline model#MClass#name (var1082) on <var1082:MClass> */
var1087 = var1082->attrs[COLOR_model__MClass___name].val; /* _name on <var1082:MClass> */
if (unlikely(var1087 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 352);
show_backtrace(1);
}
var1085 = var1087;
RET_LABEL1086:(void)0;
}
}
if (varonce1088) {
var1089 = varonce1088;
} else {
var1090 = "NativeString";
var1091 = 12;
var1092 = string__NativeString__to_s_with_length(var1090, var1091);
var1089 = var1092;
varonce1088 = var1089;
}
{
{ /* Inline kernel#Object#!= (var1085,var1089) on <var1085:String> */
var_other = var1089;
{
var1097 = ((short int (*)(val*, val*))(var1085->class->vft[COLOR_kernel__Object___61d_61d]))(var1085, var_other) /* == on <var1085:String>*/;
var1096 = var1097;
}
var1098 = !var1096;
var1094 = var1098;
goto RET_LABEL1095;
RET_LABEL1095:(void)0;
}
var1093 = var1094;
}
var1067 = var1093;
} else {
var1067 = var_1081;
}
if (var1067){
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateErasureCompiler> */
var1101 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var1101 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var1099 = var1101;
RET_LABEL1100:(void)0;
}
}
{
{ /* Inline model#MModule#pointer_type (var1099) on <var1099:MModule> */
var1104 = var1099->attrs[COLOR_model__MModule___pointer_type].val != NULL; /* _pointer_type on <var1099:MModule> */
if(likely(var1104)) {
var1105 = var1099->attrs[COLOR_model__MModule___pointer_type].val; /* _pointer_type on <var1099:MModule> */
if (unlikely(var1105 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _pointer_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 217);
show_backtrace(1);
}
} else {
if (varonce1106) {
var1107 = varonce1106;
} else {
var1108 = "Pointer";
var1109 = 7;
var1110 = string__NativeString__to_s_with_length(var1108, var1109);
var1107 = var1110;
varonce1106 = var1107;
}
{
var1111 = model__MModule__get_primitive_class(var1099, var1107);
}
{
{ /* Inline model#MClass#mclass_type (var1111) on <var1111:MClass> */
var1114 = var1111->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var1111:MClass> */
if (unlikely(var1114 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var1112 = var1114;
RET_LABEL1113:(void)0;
}
}
var1099->attrs[COLOR_model__MModule___pointer_type].val = var1112; /* _pointer_type on <var1099:MModule> */
var1105 = var1112;
}
var1102 = var1105;
RET_LABEL1103:(void)0;
}
}
var_pointer_type = var1102;
if (varonce1115) {
var1116 = varonce1115;
} else {
var1117 = "NEW_";
var1118 = 4;
var1119 = string__NativeString__to_s_with_length(var1117, var1118);
var1116 = var1119;
varonce1115 = var1116;
}
var1120 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1120 = array_instance Array[Object] */
var1121 = 2;
var1122 = NEW_array__NativeArray(var1121, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1122)->values[0] = (val*) var1116;
((struct instance_array__NativeArray*)var1122)->values[1] = (val*) var_c_name;
{
((void (*)(val*, val*, long))(var1120->class->vft[COLOR_array__Array__with_native]))(var1120, var1122, var1121) /* with_native on <var1120:Array[Object]>*/;
}
}
{
var1123 = ((val* (*)(val*))(var1120->class->vft[COLOR_string__Object__to_s]))(var1120) /* to_s on <var1120:Array[Object]>*/;
}
{
var1124 = abstract_compiler__MClassType__ctype(var_mtype);
}
if (varonce1125) {
var1126 = varonce1125;
} else {
var1127 = " NEW_";
var1128 = 5;
var1129 = string__NativeString__to_s_with_length(var1127, var1128);
var1126 = var1129;
varonce1125 = var1126;
}
if (varonce1130) {
var1131 = varonce1130;
} else {
var1132 = "();";
var1133 = 3;
var1134 = string__NativeString__to_s_with_length(var1132, var1133);
var1131 = var1134;
varonce1130 = var1131;
}
var1135 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1135 = array_instance Array[Object] */
var1136 = 4;
var1137 = NEW_array__NativeArray(var1136, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1137)->values[0] = (val*) var1124;
((struct instance_array__NativeArray*)var1137)->values[1] = (val*) var1126;
((struct instance_array__NativeArray*)var1137)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var1137)->values[3] = (val*) var1131;
{
((void (*)(val*, val*, long))(var1135->class->vft[COLOR_array__Array__with_native]))(var1135, var1137, var1136) /* with_native on <var1135:Array[Object]>*/;
}
}
{
var1138 = ((val* (*)(val*))(var1135->class->vft[COLOR_string__Object__to_s]))(var1135) /* to_s on <var1135:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompiler__provide_declaration(self, var1123, var1138); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateErasureCompiler>*/
}
if (varonce1139) {
var1140 = varonce1139;
} else {
var1141 = "/* allocate ";
var1142 = 12;
var1143 = string__NativeString__to_s_with_length(var1141, var1142);
var1140 = var1143;
varonce1139 = var1140;
}
if (varonce1144) {
var1145 = varonce1144;
} else {
var1146 = " */";
var1147 = 3;
var1148 = string__NativeString__to_s_with_length(var1146, var1147);
var1145 = var1148;
varonce1144 = var1145;
}
var1149 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1149 = array_instance Array[Object] */
var1150 = 3;
var1151 = NEW_array__NativeArray(var1150, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1151)->values[0] = (val*) var1140;
((struct instance_array__NativeArray*)var1151)->values[1] = (val*) var_mtype;
((struct instance_array__NativeArray*)var1151)->values[2] = (val*) var1145;
{
((void (*)(val*, val*, long))(var1149->class->vft[COLOR_array__Array__with_native]))(var1149, var1151, var1150) /* with_native on <var1149:Array[Object]>*/;
}
}
{
var1152 = ((val* (*)(val*))(var1149->class->vft[COLOR_string__Object__to_s]))(var1149) /* to_s on <var1149:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var1152); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
var1153 = abstract_compiler__MClassType__ctype(var_mtype);
}
if (varonce1154) {
var1155 = varonce1154;
} else {
var1156 = " NEW_";
var1157 = 5;
var1158 = string__NativeString__to_s_with_length(var1156, var1157);
var1155 = var1158;
varonce1154 = var1155;
}
if (varonce1159) {
var1160 = varonce1159;
} else {
var1161 = "() {";
var1162 = 4;
var1163 = string__NativeString__to_s_with_length(var1161, var1162);
var1160 = var1163;
varonce1159 = var1160;
}
var1164 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1164 = array_instance Array[Object] */
var1165 = 4;
var1166 = NEW_array__NativeArray(var1165, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1166)->values[0] = (val*) var1153;
((struct instance_array__NativeArray*)var1166)->values[1] = (val*) var1155;
((struct instance_array__NativeArray*)var1166)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var1166)->values[3] = (val*) var1160;
{
((void (*)(val*, val*, long))(var1164->class->vft[COLOR_array__Array__with_native]))(var1164, var1166, var1165) /* with_native on <var1164:Array[Object]>*/;
}
}
{
var1167 = ((val* (*)(val*))(var1164->class->vft[COLOR_string__Object__to_s]))(var1164) /* to_s on <var1164:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var1167); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (var_is_dead){
if (varonce1168) {
var1169 = varonce1168;
} else {
var1170 = " is DEAD";
var1171 = 8;
var1172 = string__NativeString__to_s_with_length(var1170, var1171);
var1169 = var1172;
varonce1168 = var1169;
}
var1173 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1173 = array_instance Array[Object] */
var1174 = 2;
var1175 = NEW_array__NativeArray(var1174, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1175)->values[0] = (val*) var_mclass;
((struct instance_array__NativeArray*)var1175)->values[1] = (val*) var1169;
{
((void (*)(val*, val*, long))(var1173->class->vft[COLOR_array__Array__with_native]))(var1173, var1175, var1174) /* with_native on <var1173:Array[Object]>*/;
}
}
{
var1176 = ((val* (*)(val*))(var1173->class->vft[COLOR_string__Object__to_s]))(var1173) /* to_s on <var1173:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_abort(var_v, var1176); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (varonce1177) {
var1178 = varonce1177;
} else {
var1179 = "self";
var1180 = 4;
var1181 = string__NativeString__to_s_with_length(var1179, var1180);
var1178 = var1181;
varonce1177 = var1178;
}
{
var1182 = abstract_compiler__AbstractCompilerVisitor__new_named_var(var_v, var_mtype, var1178);
}
var_res1183 = var1182;
var1184 = 1;
{
{ /* Inline abstract_compiler#RuntimeVariable#is_exact= (var_res1183,var1184) on <var_res1183:RuntimeVariable> */
var_res1183->attrs[COLOR_abstract_compiler__RuntimeVariable___is_exact].s = var1184; /* _is_exact on <var_res1183:RuntimeVariable> */
RET_LABEL1185:(void)0;
}
}
if (varonce1186) {
var1187 = varonce1186;
} else {
var1188 = " = nit_alloc(sizeof(struct instance_";
var1189 = 36;
var1190 = string__NativeString__to_s_with_length(var1188, var1189);
var1187 = var1190;
varonce1186 = var1187;
}
{
var1191 = ((val* (*)(val*))(var_pointer_type->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_pointer_type) /* c_name on <var_pointer_type:MClassType>*/;
}
if (varonce1192) {
var1193 = varonce1192;
} else {
var1194 = "));";
var1195 = 3;
var1196 = string__NativeString__to_s_with_length(var1194, var1195);
var1193 = var1196;
varonce1192 = var1193;
}
var1197 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1197 = array_instance Array[Object] */
var1198 = 4;
var1199 = NEW_array__NativeArray(var1198, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1199)->values[0] = (val*) var_res1183;
((struct instance_array__NativeArray*)var1199)->values[1] = (val*) var1187;
((struct instance_array__NativeArray*)var1199)->values[2] = (val*) var1191;
((struct instance_array__NativeArray*)var1199)->values[3] = (val*) var1193;
{
((void (*)(val*, val*, long))(var1197->class->vft[COLOR_array__Array__with_native]))(var1197, var1199, var1198) /* with_native on <var1197:Array[Object]>*/;
}
}
{
var1200 = ((val* (*)(val*))(var1197->class->vft[COLOR_string__Object__to_s]))(var1197) /* to_s on <var1197:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var1200); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce1201) {
var1202 = varonce1201;
} else {
var1203 = "class_";
var1204 = 6;
var1205 = string__NativeString__to_s_with_length(var1203, var1204);
var1202 = var1205;
varonce1201 = var1202;
}
var1206 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1206 = array_instance Array[Object] */
var1207 = 2;
var1208 = NEW_array__NativeArray(var1207, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1208)->values[0] = (val*) var1202;
((struct instance_array__NativeArray*)var1208)->values[1] = (val*) var_c_name;
{
((void (*)(val*, val*, long))(var1206->class->vft[COLOR_array__Array__with_native]))(var1206, var1208, var1207) /* with_native on <var1206:Array[Object]>*/;
}
}
{
var1209 = ((val* (*)(val*))(var1206->class->vft[COLOR_string__Object__to_s]))(var1206) /* to_s on <var1206:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(var_v, var1209); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (varonce1210) {
var1211 = varonce1210;
} else {
var1212 = "->class = &class_";
var1213 = 17;
var1214 = string__NativeString__to_s_with_length(var1212, var1213);
var1211 = var1214;
varonce1210 = var1211;
}
if (varonce1215) {
var1216 = varonce1215;
} else {
var1217 = ";";
var1218 = 1;
var1219 = string__NativeString__to_s_with_length(var1217, var1218);
var1216 = var1219;
varonce1215 = var1216;
}
var1220 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1220 = array_instance Array[Object] */
var1221 = 4;
var1222 = NEW_array__NativeArray(var1221, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1222)->values[0] = (val*) var_res1183;
((struct instance_array__NativeArray*)var1222)->values[1] = (val*) var1211;
((struct instance_array__NativeArray*)var1222)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var1222)->values[3] = (val*) var1216;
{
((void (*)(val*, val*, long))(var1220->class->vft[COLOR_array__Array__with_native]))(var1220, var1222, var1221) /* with_native on <var1220:Array[Object]>*/;
}
}
{
var1223 = ((val* (*)(val*))(var1220->class->vft[COLOR_string__Object__to_s]))(var1220) /* to_s on <var1220:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var1223); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce1224) {
var1225 = varonce1224;
} else {
var1226 = "((struct instance_";
var1227 = 18;
var1228 = string__NativeString__to_s_with_length(var1226, var1227);
var1225 = var1228;
varonce1224 = var1225;
}
{
var1229 = ((val* (*)(val*))(var_pointer_type->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_pointer_type) /* c_name on <var_pointer_type:MClassType>*/;
}
if (varonce1230) {
var1231 = varonce1230;
} else {
var1232 = "*)";
var1233 = 2;
var1234 = string__NativeString__to_s_with_length(var1232, var1233);
var1231 = var1234;
varonce1230 = var1231;
}
if (varonce1235) {
var1236 = varonce1235;
} else {
var1237 = ")->value = NULL;";
var1238 = 16;
var1239 = string__NativeString__to_s_with_length(var1237, var1238);
var1236 = var1239;
varonce1235 = var1236;
}
var1240 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1240 = array_instance Array[Object] */
var1241 = 5;
var1242 = NEW_array__NativeArray(var1241, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1242)->values[0] = (val*) var1225;
((struct instance_array__NativeArray*)var1242)->values[1] = (val*) var1229;
((struct instance_array__NativeArray*)var1242)->values[2] = (val*) var1231;
((struct instance_array__NativeArray*)var1242)->values[3] = (val*) var_res1183;
((struct instance_array__NativeArray*)var1242)->values[4] = (val*) var1236;
{
((void (*)(val*, val*, long))(var1240->class->vft[COLOR_array__Array__with_native]))(var1240, var1242, var1241) /* with_native on <var1240:Array[Object]>*/;
}
}
{
var1243 = ((val* (*)(val*))(var1240->class->vft[COLOR_string__Object__to_s]))(var1240) /* to_s on <var1240:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var1243); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce1244) {
var1245 = varonce1244;
} else {
var1246 = "return ";
var1247 = 7;
var1248 = string__NativeString__to_s_with_length(var1246, var1247);
var1245 = var1248;
varonce1244 = var1245;
}
if (varonce1249) {
var1250 = varonce1249;
} else {
var1251 = ";";
var1252 = 1;
var1253 = string__NativeString__to_s_with_length(var1251, var1252);
var1250 = var1253;
varonce1249 = var1250;
}
var1254 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1254 = array_instance Array[Object] */
var1255 = 3;
var1256 = NEW_array__NativeArray(var1255, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1256)->values[0] = (val*) var1245;
((struct instance_array__NativeArray*)var1256)->values[1] = (val*) var_res1183;
((struct instance_array__NativeArray*)var1256)->values[2] = (val*) var1250;
{
((void (*)(val*, val*, long))(var1254->class->vft[COLOR_array__Array__with_native]))(var1254, var1256, var1255) /* with_native on <var1254:Array[Object]>*/;
}
}
{
var1257 = ((val* (*)(val*))(var1254->class->vft[COLOR_string__Object__to_s]))(var1254) /* to_s on <var1254:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var1257); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
}
if (varonce1258) {
var1259 = varonce1258;
} else {
var1260 = "}";
var1261 = 1;
var1262 = string__NativeString__to_s_with_length(var1260, var1261);
var1259 = var1262;
varonce1258 = var1259;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var1259); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
}
}
}
if (varonce1263) {
var1264 = varonce1263;
} else {
var1265 = "NEW_";
var1266 = 4;
var1267 = string__NativeString__to_s_with_length(var1265, var1266);
var1264 = var1267;
varonce1263 = var1264;
}
var1268 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1268 = array_instance Array[Object] */
var1269 = 2;
var1270 = NEW_array__NativeArray(var1269, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1270)->values[0] = (val*) var1264;
((struct instance_array__NativeArray*)var1270)->values[1] = (val*) var_c_name;
{
((void (*)(val*, val*, long))(var1268->class->vft[COLOR_array__Array__with_native]))(var1268, var1270, var1269) /* with_native on <var1268:Array[Object]>*/;
}
}
{
var1271 = ((val* (*)(val*))(var1268->class->vft[COLOR_string__Object__to_s]))(var1268) /* to_s on <var1268:Array[Object]>*/;
}
{
var1272 = abstract_compiler__MClassType__ctype(var_mtype);
}
if (varonce1273) {
var1274 = varonce1273;
} else {
var1275 = " NEW_";
var1276 = 5;
var1277 = string__NativeString__to_s_with_length(var1275, var1276);
var1274 = var1277;
varonce1273 = var1274;
}
if (varonce1278) {
var1279 = varonce1278;
} else {
var1280 = "(void);";
var1281 = 7;
var1282 = string__NativeString__to_s_with_length(var1280, var1281);
var1279 = var1282;
varonce1278 = var1279;
}
var1283 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1283 = array_instance Array[Object] */
var1284 = 4;
var1285 = NEW_array__NativeArray(var1284, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1285)->values[0] = (val*) var1272;
((struct instance_array__NativeArray*)var1285)->values[1] = (val*) var1274;
((struct instance_array__NativeArray*)var1285)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var1285)->values[3] = (val*) var1279;
{
((void (*)(val*, val*, long))(var1283->class->vft[COLOR_array__Array__with_native]))(var1283, var1285, var1284) /* with_native on <var1283:Array[Object]>*/;
}
}
{
var1286 = ((val* (*)(val*))(var1283->class->vft[COLOR_string__Object__to_s]))(var1283) /* to_s on <var1283:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompiler__provide_declaration(self, var1271, var1286); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateErasureCompiler>*/
}
if (varonce1287) {
var1288 = varonce1287;
} else {
var1289 = "/* allocate ";
var1290 = 12;
var1291 = string__NativeString__to_s_with_length(var1289, var1290);
var1288 = var1291;
varonce1287 = var1288;
}
if (varonce1292) {
var1293 = varonce1292;
} else {
var1294 = " */";
var1295 = 3;
var1296 = string__NativeString__to_s_with_length(var1294, var1295);
var1293 = var1296;
varonce1292 = var1293;
}
var1297 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1297 = array_instance Array[Object] */
var1298 = 3;
var1299 = NEW_array__NativeArray(var1298, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1299)->values[0] = (val*) var1288;
((struct instance_array__NativeArray*)var1299)->values[1] = (val*) var_mtype;
((struct instance_array__NativeArray*)var1299)->values[2] = (val*) var1293;
{
((void (*)(val*, val*, long))(var1297->class->vft[COLOR_array__Array__with_native]))(var1297, var1299, var1298) /* with_native on <var1297:Array[Object]>*/;
}
}
{
var1300 = ((val* (*)(val*))(var1297->class->vft[COLOR_string__Object__to_s]))(var1297) /* to_s on <var1297:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var1300); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
var1301 = abstract_compiler__MClassType__ctype(var_mtype);
}
if (varonce1302) {
var1303 = varonce1302;
} else {
var1304 = " NEW_";
var1305 = 5;
var1306 = string__NativeString__to_s_with_length(var1304, var1305);
var1303 = var1306;
varonce1302 = var1303;
}
if (varonce1307) {
var1308 = varonce1307;
} else {
var1309 = "(void) {";
var1310 = 8;
var1311 = string__NativeString__to_s_with_length(var1309, var1310);
var1308 = var1311;
varonce1307 = var1308;
}
var1312 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1312 = array_instance Array[Object] */
var1313 = 4;
var1314 = NEW_array__NativeArray(var1313, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1314)->values[0] = (val*) var1301;
((struct instance_array__NativeArray*)var1314)->values[1] = (val*) var1303;
((struct instance_array__NativeArray*)var1314)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var1314)->values[3] = (val*) var1308;
{
((void (*)(val*, val*, long))(var1312->class->vft[COLOR_array__Array__with_native]))(var1312, var1314, var1313) /* with_native on <var1312:Array[Object]>*/;
}
}
{
var1315 = ((val* (*)(val*))(var1312->class->vft[COLOR_string__Object__to_s]))(var1312) /* to_s on <var1312:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var1315); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (var_is_dead){
if (varonce1316) {
var1317 = varonce1316;
} else {
var1318 = " is DEAD";
var1319 = 8;
var1320 = string__NativeString__to_s_with_length(var1318, var1319);
var1317 = var1320;
varonce1316 = var1317;
}
var1321 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1321 = array_instance Array[Object] */
var1322 = 2;
var1323 = NEW_array__NativeArray(var1322, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1323)->values[0] = (val*) var_mclass;
((struct instance_array__NativeArray*)var1323)->values[1] = (val*) var1317;
{
((void (*)(val*, val*, long))(var1321->class->vft[COLOR_array__Array__with_native]))(var1321, var1323, var1322) /* with_native on <var1321:Array[Object]>*/;
}
}
{
var1324 = ((val* (*)(val*))(var1321->class->vft[COLOR_string__Object__to_s]))(var1321) /* to_s on <var1321:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_abort(var_v, var1324); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (varonce1325) {
var1326 = varonce1325;
} else {
var1327 = "self";
var1328 = 4;
var1329 = string__NativeString__to_s_with_length(var1327, var1328);
var1326 = var1329;
varonce1325 = var1326;
}
{
var1330 = abstract_compiler__AbstractCompilerVisitor__new_named_var(var_v, var_mtype, var1326);
}
var_res1331 = var1330;
var1332 = 1;
{
{ /* Inline abstract_compiler#RuntimeVariable#is_exact= (var_res1331,var1332) on <var_res1331:RuntimeVariable> */
var_res1331->attrs[COLOR_abstract_compiler__RuntimeVariable___is_exact].s = var1332; /* _is_exact on <var_res1331:RuntimeVariable> */
RET_LABEL1333:(void)0;
}
}
if (varonce1334) {
var1335 = varonce1334;
} else {
var1336 = " = nit_alloc(sizeof(struct instance) + ";
var1337 = 39;
var1338 = string__NativeString__to_s_with_length(var1336, var1337);
var1335 = var1338;
varonce1334 = var1335;
}
{
{ /* Inline array#AbstractArrayRead#length (var_attrs) on <var_attrs:Array[nullable MPropDef]> */
var1341 = var_attrs->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_attrs:Array[nullable MPropDef]> */
var1339 = var1341;
RET_LABEL1340:(void)0;
}
}
if (varonce1342) {
var1343 = varonce1342;
} else {
var1344 = "*sizeof(nitattribute_t));";
var1345 = 25;
var1346 = string__NativeString__to_s_with_length(var1344, var1345);
var1343 = var1346;
varonce1342 = var1343;
}
var1347 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1347 = array_instance Array[Object] */
var1348 = 4;
var1349 = NEW_array__NativeArray(var1348, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1349)->values[0] = (val*) var_res1331;
((struct instance_array__NativeArray*)var1349)->values[1] = (val*) var1335;
var1350 = BOX_kernel__Int(var1339); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var1349)->values[2] = (val*) var1350;
((struct instance_array__NativeArray*)var1349)->values[3] = (val*) var1343;
{
((void (*)(val*, val*, long))(var1347->class->vft[COLOR_array__Array__with_native]))(var1347, var1349, var1348) /* with_native on <var1347:Array[Object]>*/;
}
}
{
var1351 = ((val* (*)(val*))(var1347->class->vft[COLOR_string__Object__to_s]))(var1347) /* to_s on <var1347:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var1351); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce1352) {
var1353 = varonce1352;
} else {
var1354 = "class_";
var1355 = 6;
var1356 = string__NativeString__to_s_with_length(var1354, var1355);
var1353 = var1356;
varonce1352 = var1353;
}
var1357 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1357 = array_instance Array[Object] */
var1358 = 2;
var1359 = NEW_array__NativeArray(var1358, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1359)->values[0] = (val*) var1353;
((struct instance_array__NativeArray*)var1359)->values[1] = (val*) var_c_name;
{
((void (*)(val*, val*, long))(var1357->class->vft[COLOR_array__Array__with_native]))(var1357, var1359, var1358) /* with_native on <var1357:Array[Object]>*/;
}
}
{
var1360 = ((val* (*)(val*))(var1357->class->vft[COLOR_string__Object__to_s]))(var1357) /* to_s on <var1357:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(var_v, var1360); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (varonce1361) {
var1362 = varonce1361;
} else {
var1363 = "->class = &class_";
var1364 = 17;
var1365 = string__NativeString__to_s_with_length(var1363, var1364);
var1362 = var1365;
varonce1361 = var1362;
}
if (varonce1366) {
var1367 = varonce1366;
} else {
var1368 = ";";
var1369 = 1;
var1370 = string__NativeString__to_s_with_length(var1368, var1369);
var1367 = var1370;
varonce1366 = var1367;
}
var1371 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1371 = array_instance Array[Object] */
var1372 = 4;
var1373 = NEW_array__NativeArray(var1372, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1373)->values[0] = (val*) var_res1331;
((struct instance_array__NativeArray*)var1373)->values[1] = (val*) var1362;
((struct instance_array__NativeArray*)var1373)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var1373)->values[3] = (val*) var1367;
{
((void (*)(val*, val*, long))(var1371->class->vft[COLOR_array__Array__with_native]))(var1371, var1373, var1372) /* with_native on <var1371:Array[Object]>*/;
}
}
{
var1374 = ((val* (*)(val*))(var1371->class->vft[COLOR_string__Object__to_s]))(var1371) /* to_s on <var1371:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var1374); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
{
abstract_compiler__AbstractCompiler__generate_init_attr(self, var_v, var_res1331, var_mtype); /* Direct call abstract_compiler#AbstractCompiler#generate_init_attr on <self:SeparateErasureCompiler>*/
}
{
abstract_compiler__AbstractCompilerVisitor__set_finalizer(var_v, var_res1331); /* Direct call abstract_compiler#AbstractCompilerVisitor#set_finalizer on <var_v:SeparateCompilerVisitor>*/
}
if (varonce1375) {
var1376 = varonce1375;
} else {
var1377 = "return ";
var1378 = 7;
var1379 = string__NativeString__to_s_with_length(var1377, var1378);
var1376 = var1379;
varonce1375 = var1376;
}
if (varonce1380) {
var1381 = varonce1380;
} else {
var1382 = ";";
var1383 = 1;
var1384 = string__NativeString__to_s_with_length(var1382, var1383);
var1381 = var1384;
varonce1380 = var1381;
}
var1385 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1385 = array_instance Array[Object] */
var1386 = 3;
var1387 = NEW_array__NativeArray(var1386, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1387)->values[0] = (val*) var1376;
((struct instance_array__NativeArray*)var1387)->values[1] = (val*) var_res1331;
((struct instance_array__NativeArray*)var1387)->values[2] = (val*) var1381;
{
((void (*)(val*, val*, long))(var1385->class->vft[COLOR_array__Array__with_native]))(var1385, var1387, var1386) /* with_native on <var1385:Array[Object]>*/;
}
}
{
var1388 = ((val* (*)(val*))(var1385->class->vft[COLOR_string__Object__to_s]))(var1385) /* to_s on <var1385:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var1388); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
}
if (varonce1389) {
var1390 = varonce1389;
} else {
var1391 = "}";
var1392 = 1;
var1393 = string__NativeString__to_s_with_length(var1391, var1392);
var1390 = var1393;
varonce1389 = var1390;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var1390); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#compile_class_to_c for (self: Object, MClass) */
void VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__compile_class_to_c(val* self, val* p0) {
separate_erasure_compiler__SeparateErasureCompiler__compile_class_to_c(self, p0); /* Direct call separate_erasure_compiler#SeparateErasureCompiler#compile_class_to_c on <self:Object(SeparateErasureCompiler)>*/
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#build_class_vts_table for (self: SeparateErasureCompiler, MClass): Bool */
short int separate_erasure_compiler__SeparateErasureCompiler__build_class_vts_table(val* self, val* p0) {
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
var3 = self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___vt_tables].val; /* _vt_tables on <self:SeparateErasureCompiler> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vt_tables");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_erasure_compiler.nit", 442);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val* (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var1, var_mclass) /* [] on <var1:Map[MClass, Array[nullable MPropDef]]>*/;
}
{
var5 = array__AbstractArrayRead__is_empty(var4);
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
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
{
var11 = abstract_compiler__MClass__c_name(var_mclass);
}
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var12 = array_instance Array[Object] */
var13 = 2;
var14 = NEW_array__NativeArray(var13, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var14)->values[0] = (val*) var7;
((struct instance_array__NativeArray*)var14)->values[1] = (val*) var11;
{
((void (*)(val*, val*, long))(var12->class->vft[COLOR_array__Array__with_native]))(var12, var14, var13) /* with_native on <var12:Array[Object]>*/;
}
}
{
var15 = ((val* (*)(val*))(var12->class->vft[COLOR_string__Object__to_s]))(var12) /* to_s on <var12:Array[Object]>*/;
}
if (varonce16) {
var17 = varonce16;
} else {
var18 = "extern const struct vts_table vts_table_";
var19 = 40;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
{
var21 = abstract_compiler__MClass__c_name(var_mclass);
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = ";";
var25 = 1;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
var27 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var27 = array_instance Array[Object] */
var28 = 3;
var29 = NEW_array__NativeArray(var28, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var29)->values[0] = (val*) var17;
((struct instance_array__NativeArray*)var29)->values[1] = (val*) var21;
((struct instance_array__NativeArray*)var29)->values[2] = (val*) var23;
{
((void (*)(val*, val*, long))(var27->class->vft[COLOR_array__Array__with_native]))(var27, var29, var28) /* with_native on <var27:Array[Object]>*/;
}
}
{
var30 = ((val* (*)(val*))(var27->class->vft[COLOR_string__Object__to_s]))(var27) /* to_s on <var27:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompiler__provide_declaration(self, var15, var30); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateErasureCompiler>*/
}
{
var31 = separate_erasure_compiler__SeparateErasureCompiler__new_visitor(self);
}
var_v = var31;
if (varonce32) {
var33 = varonce32;
} else {
var34 = "const struct vts_table vts_table_";
var35 = 33;
var36 = string__NativeString__to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
{
var37 = abstract_compiler__MClass__c_name(var_mclass);
}
if (varonce38) {
var39 = varonce38;
} else {
var40 = " = {";
var41 = 4;
var42 = string__NativeString__to_s_with_length(var40, var41);
var39 = var42;
varonce38 = var39;
}
var43 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var43 = array_instance Array[Object] */
var44 = 3;
var45 = NEW_array__NativeArray(var44, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var45)->values[0] = (val*) var33;
((struct instance_array__NativeArray*)var45)->values[1] = (val*) var37;
((struct instance_array__NativeArray*)var45)->values[2] = (val*) var39;
{
((void (*)(val*, val*, long))(var43->class->vft[COLOR_array__Array__with_native]))(var43, var45, var44) /* with_native on <var43:Array[Object]>*/;
}
}
{
var46 = ((val* (*)(val*))(var43->class->vft[COLOR_string__Object__to_s]))(var43) /* to_s on <var43:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var46); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce47) {
var48 = varonce47;
} else {
var49 = "0, /* dummy */";
var50 = 14;
var51 = string__NativeString__to_s_with_length(var49, var50);
var48 = var51;
varonce47 = var48;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var48); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce52) {
var53 = varonce52;
} else {
var54 = "{";
var55 = 1;
var56 = string__NativeString__to_s_with_length(var54, var55);
var53 = var56;
varonce52 = var53;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var53); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#vt_tables (self) on <self:SeparateErasureCompiler> */
var59 = self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___vt_tables].val; /* _vt_tables on <self:SeparateErasureCompiler> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vt_tables");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_erasure_compiler.nit", 442);
show_backtrace(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
var60 = ((val* (*)(val*, val*))(var57->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var57, var_mclass) /* [] on <var57:Map[MClass, Array[nullable MPropDef]]>*/;
}
var_ = var60;
{
var61 = array__AbstractArrayRead__iterator(var_);
}
var_62 = var61;
for(;;) {
{
var63 = array__ArrayIterator__is_ok(var_62);
}
if (var63){
{
var64 = array__ArrayIterator__item(var_62);
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
var76 = string__NativeString__to_s_with_length(var74, var75);
var73 = var76;
varonce72 = var73;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var73); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
var77 = 0;
var_is_null = var77;
{
{ /* Inline model#MClass#intro (var_mclass) on <var_mclass:MClass> */
var80 = var_mclass->attrs[COLOR_model__MClass___intro].val; /* _intro on <var_mclass:MClass> */
if (unlikely(var80 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 420);
show_backtrace(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var78) on <var78:MClassDef> */
var83 = var78->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var78:MClassDef> */
if (unlikely(var83 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
/* <var_vt:nullable MPropDef(MPropDef)> isa MVirtualTypeDef */
cltype = type_model__MVirtualTypeDef.color;
idtype = type_model__MVirtualTypeDef.id;
if(cltype >= var_vt->type->table_size) {
var84 = 0;
} else {
var84 = var_vt->type->type_table[cltype] == idtype;
}
if (unlikely(!var84)) {
var_class_name = var_vt == NULL ? "null" : var_vt->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MVirtualTypeDef", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_erasure_compiler.nit", 408);
show_backtrace(1);
}
{
{ /* Inline model#MVirtualTypeDef#bound (var_vt) on <var_vt:MPropDef(MVirtualTypeDef)> */
var87 = var_vt->attrs[COLOR_model__MVirtualTypeDef___bound].val; /* _bound on <var_vt:MPropDef(MVirtualTypeDef)> */
var85 = var87;
RET_LABEL86:(void)0;
}
}
{
var88 = separate_erasure_compiler__SeparateErasureCompiler__retrieve_vt_bound(self, var81, var85);
}
var_bound = var88;
for(;;) {
/* <var_bound:MType> isa MNullableType */
cltype90 = type_model__MNullableType.color;
idtype91 = type_model__MNullableType.id;
if(cltype90 >= var_bound->type->table_size) {
var89 = 0;
} else {
var89 = var_bound->type->type_table[cltype90] == idtype91;
}
if (var89){
{
{ /* Inline model#MClass#intro (var_mclass) on <var_mclass:MClass> */
var94 = var_mclass->attrs[COLOR_model__MClass___intro].val; /* _intro on <var_mclass:MClass> */
if (unlikely(var94 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 420);
show_backtrace(1);
}
var92 = var94;
RET_LABEL93:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var92) on <var92:MClassDef> */
var97 = var92->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var92:MClassDef> */
if (unlikely(var97 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var95 = var97;
RET_LABEL96:(void)0;
}
}
{
{ /* Inline model#MNullableType#mtype (var_bound) on <var_bound:MType(MNullableType)> */
var100 = var_bound->attrs[COLOR_model__MNullableType___mtype].val; /* _mtype on <var_bound:MType(MNullableType)> */
if (unlikely(var100 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1388);
show_backtrace(1);
}
var98 = var100;
RET_LABEL99:(void)0;
}
}
{
var101 = separate_erasure_compiler__SeparateErasureCompiler__retrieve_vt_bound(self, var95, var98);
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
cltype104 = type_model__MClassType.color;
idtype105 = type_model__MClassType.id;
if(cltype104 >= var_bound->type->table_size) {
var103 = 0;
} else {
var103 = var_bound->type->type_table[cltype104] == idtype105;
}
if (unlikely(!var103)) {
var_class_name106 = var_bound == NULL ? "null" : var_bound->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name106);
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_erasure_compiler.nit", 413);
show_backtrace(1);
}
{
{ /* Inline model#MClassType#mclass (var_bound) on <var_bound:MType(MClassType)> */
var109 = var_bound->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_bound:MType(MClassType)> */
if (unlikely(var109 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
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
var114 = string__NativeString__to_s_with_length(var112, var113);
var111 = var114;
varonce110 = var111;
}
{
var115 = abstract_compiler__MClass__c_name(var_vtclass);
}
var116 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var116 = array_instance Array[Object] */
var117 = 2;
var118 = NEW_array__NativeArray(var117, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var118)->values[0] = (val*) var111;
((struct instance_array__NativeArray*)var118)->values[1] = (val*) var115;
{
((void (*)(val*, val*, long))(var116->class->vft[COLOR_array__Array__with_native]))(var116, var118, var117) /* with_native on <var116:Array[Object]>*/;
}
}
{
var119 = ((val* (*)(val*))(var116->class->vft[COLOR_string__Object__to_s]))(var116) /* to_s on <var116:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(var_v, var119); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (varonce120) {
var121 = varonce120;
} else {
var122 = "{";
var123 = 1;
var124 = string__NativeString__to_s_with_length(var122, var123);
var121 = var124;
varonce120 = var121;
}
if (varonce125) {
var126 = varonce125;
} else {
var127 = ", &class_";
var128 = 9;
var129 = string__NativeString__to_s_with_length(var127, var128);
var126 = var129;
varonce125 = var126;
}
{
var130 = abstract_compiler__MClass__c_name(var_vtclass);
}
if (varonce131) {
var132 = varonce131;
} else {
var133 = "}, /* ";
var134 = 6;
var135 = string__NativeString__to_s_with_length(var133, var134);
var132 = var135;
varonce131 = var132;
}
if (varonce136) {
var137 = varonce136;
} else {
var138 = " */";
var139 = 3;
var140 = string__NativeString__to_s_with_length(var138, var139);
var137 = var140;
varonce136 = var137;
}
var141 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var141 = array_instance Array[Object] */
var142 = 7;
var143 = NEW_array__NativeArray(var142, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var143)->values[0] = (val*) var121;
var144 = BOX_kernel__Int(var_is_null); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var143)->values[1] = (val*) var144;
((struct instance_array__NativeArray*)var143)->values[2] = (val*) var126;
((struct instance_array__NativeArray*)var143)->values[3] = (val*) var130;
((struct instance_array__NativeArray*)var143)->values[4] = (val*) var132;
((struct instance_array__NativeArray*)var143)->values[5] = (val*) var_vt;
((struct instance_array__NativeArray*)var143)->values[6] = (val*) var137;
{
((void (*)(val*, val*, long))(var141->class->vft[COLOR_array__Array__with_native]))(var141, var143, var142) /* with_native on <var141:Array[Object]>*/;
}
}
{
var145 = ((val* (*)(val*))(var141->class->vft[COLOR_string__Object__to_s]))(var141) /* to_s on <var141:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var145); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
{
array__ArrayIterator__next(var_62); /* Direct call array#ArrayIterator#next on <var_62:ArrayIterator[nullable MPropDef]>*/
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
var152 = string__NativeString__to_s_with_length(var150, var151);
var149 = var152;
varonce148 = var149;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var149); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce153) {
var154 = varonce153;
} else {
var155 = "};";
var156 = 2;
var157 = string__NativeString__to_s_with_length(var155, var156);
var154 = var157;
varonce153 = var154;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var154); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
var158 = 1;
var = var158;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#build_class_vts_table for (self: Object, MClass): Bool */
short int VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__build_class_vts_table(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = separate_erasure_compiler__SeparateErasureCompiler__build_class_vts_table(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#retrieve_vt_bound for (self: SeparateErasureCompiler, MClassType, nullable MType): MType */
val* separate_erasure_compiler__SeparateErasureCompiler__retrieve_vt_bound(val* self, val* p0, val* p1) {
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
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce = var8;
}
{
file__Object__print(self, var8); /* Direct call file#Object#print on <self:SeparateErasureCompiler>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_erasure_compiler.nit", 426);
show_backtrace(1);
} else {
}
/* <var_mtype:nullable MType(MType)> isa MVirtualType */
cltype = type_model__MVirtualType.color;
idtype = type_model__MVirtualType.id;
if(cltype >= var_mtype->type->table_size) {
var12 = 0;
} else {
var12 = var_mtype->type->type_table[cltype] == idtype;
}
if (var12){
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateErasureCompiler> */
var15 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = model__MType__anchor_to(var_mtype, var13, var_anchor);
}
var = var16;
goto RET_LABEL;
} else {
/* <var_mtype:nullable MType(MType)> isa MParameterType */
cltype18 = type_model__MParameterType.color;
idtype19 = type_model__MParameterType.id;
if(cltype18 >= var_mtype->type->table_size) {
var17 = 0;
} else {
var17 = var_mtype->type->type_table[cltype18] == idtype19;
}
if (var17){
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateErasureCompiler> */
var22 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = model__MType__anchor_to(var_mtype, var20, var_anchor);
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
/* method separate_erasure_compiler#SeparateErasureCompiler#retrieve_vt_bound for (self: Object, MClassType, nullable MType): MType */
val* VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__retrieve_vt_bound(val* self, val* p0, val* p1) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = separate_erasure_compiler__SeparateErasureCompiler__retrieve_vt_bound(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#new_visitor for (self: SeparateErasureCompiler): SeparateCompilerVisitor */
val* separate_erasure_compiler__SeparateErasureCompiler__new_visitor(val* self) {
val* var /* : SeparateCompilerVisitor */;
val* var1 /* : SeparateErasureCompilerVisitor */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var1 = NEW_separate_erasure_compiler__SeparateErasureCompilerVisitor(&type_separate_erasure_compiler__SeparateErasureCompilerVisitor);
{
abstract_compiler__AbstractCompilerVisitor__init(var1, self); /* Direct call abstract_compiler#AbstractCompilerVisitor#init on <var1:SeparateErasureCompilerVisitor>*/
}
/* <var1:SeparateErasureCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_abstract_compiler__AbstractCompiler_VTVISITOR];
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
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_erasure_compiler.nit", 437);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#new_visitor for (self: Object): AbstractCompilerVisitor */
val* VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__new_visitor(val* self) {
val* var /* : AbstractCompilerVisitor */;
val* var1 /* : SeparateCompilerVisitor */;
var1 = separate_erasure_compiler__SeparateErasureCompiler__new_visitor(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#class_tables for (self: SeparateErasureCompiler): Map[MClass, Array[nullable MClass]] */
val* separate_erasure_compiler__SeparateErasureCompiler__class_tables(val* self) {
val* var /* : Map[MClass, Array[nullable MClass]] */;
val* var1 /* : Map[MClass, Array[nullable MClass]] */;
var1 = self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___class_tables].val; /* _class_tables on <self:SeparateErasureCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _class_tables");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_erasure_compiler.nit", 441);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#class_tables for (self: Object): Map[MClass, Array[nullable MClass]] */
val* VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__class_tables(val* self) {
val* var /* : Map[MClass, Array[nullable MClass]] */;
val* var1 /* : Map[MClass, Array[nullable MClass]] */;
val* var3 /* : Map[MClass, Array[nullable MClass]] */;
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#class_tables (self) on <self:Object(SeparateErasureCompiler)> */
var3 = self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___class_tables].val; /* _class_tables on <self:Object(SeparateErasureCompiler)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _class_tables");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_erasure_compiler.nit", 441);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#class_tables= for (self: SeparateErasureCompiler, Map[MClass, Array[nullable MClass]]) */
void separate_erasure_compiler__SeparateErasureCompiler__class_tables_61d(val* self, val* p0) {
self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___class_tables].val = p0; /* _class_tables on <self:SeparateErasureCompiler> */
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#class_tables= for (self: Object, Map[MClass, Array[nullable MClass]]) */
void VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__class_tables_61d(val* self, val* p0) {
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#class_tables= (self,p0) on <self:Object(SeparateErasureCompiler)> */
self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___class_tables].val = p0; /* _class_tables on <self:Object(SeparateErasureCompiler)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#vt_tables for (self: SeparateErasureCompiler): Map[MClass, Array[nullable MPropDef]] */
val* separate_erasure_compiler__SeparateErasureCompiler__vt_tables(val* self) {
val* var /* : Map[MClass, Array[nullable MPropDef]] */;
val* var1 /* : Map[MClass, Array[nullable MPropDef]] */;
var1 = self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___vt_tables].val; /* _vt_tables on <self:SeparateErasureCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vt_tables");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_erasure_compiler.nit", 442);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#vt_tables for (self: Object): Map[MClass, Array[nullable MPropDef]] */
val* VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__vt_tables(val* self) {
val* var /* : Map[MClass, Array[nullable MPropDef]] */;
val* var1 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var3 /* : Map[MClass, Array[nullable MPropDef]] */;
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#vt_tables (self) on <self:Object(SeparateErasureCompiler)> */
var3 = self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___vt_tables].val; /* _vt_tables on <self:Object(SeparateErasureCompiler)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vt_tables");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_erasure_compiler.nit", 442);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#vt_tables= for (self: SeparateErasureCompiler, Map[MClass, Array[nullable MPropDef]]) */
void separate_erasure_compiler__SeparateErasureCompiler__vt_tables_61d(val* self, val* p0) {
self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___vt_tables].val = p0; /* _vt_tables on <self:SeparateErasureCompiler> */
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#vt_tables= for (self: Object, Map[MClass, Array[nullable MPropDef]]) */
void VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__vt_tables_61d(val* self, val* p0) {
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#vt_tables= (self,p0) on <self:Object(SeparateErasureCompiler)> */
self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___vt_tables].val = p0; /* _vt_tables on <self:Object(SeparateErasureCompiler)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#display_sizes for (self: SeparateErasureCompiler) */
void separate_erasure_compiler__SeparateErasureCompiler__display_sizes(val* self) {
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
val* var14 /* : MapIterator[Object, nullable Object] */;
val* var_15 /* var : MapIterator[MClass, Array[nullable MClass]] */;
short int var16 /* : Bool */;
val* var17 /* : Object */;
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
val* var81 /* : MapIterator[Object, nullable Object] */;
val* var_82 /* var : MapIterator[MClass, Array[nullable MPropDef]] */;
short int var83 /* : Bool */;
val* var84 /* : Object */;
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
val* var155 /* : MapIterator[Object, nullable Object] */;
val* var_156 /* var : MapIterator[MClass, Array[nullable MPropDef]] */;
short int var157 /* : Bool */;
val* var158 /* : Object */;
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
val* var229 /* : MapIterator[Object, nullable Object] */;
val* var_230 /* var : MapIterator[MClass, Array[nullable MPropDef]] */;
short int var231 /* : Bool */;
val* var232 /* : Object */;
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
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
file__Object__print(self, var); /* Direct call file#Object#print on <self:SeparateErasureCompiler>*/
}
if (varonce4) {
var5 = varonce4;
} else {
var6 = "\11total \11holes";
var7 = 13;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce4 = var5;
}
{
file__Object__print(self, var5); /* Direct call file#Object#print on <self:SeparateErasureCompiler>*/
}
var9 = 0;
var_total = var9;
var10 = 0;
var_holes = var10;
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#class_tables (self) on <self:SeparateErasureCompiler> */
var13 = self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___class_tables].val; /* _class_tables on <self:SeparateErasureCompiler> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _class_tables");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_erasure_compiler.nit", 441);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
var_ = var11;
{
var14 = ((val* (*)(val*))(var_->class->vft[COLOR_abstract_collection__MapRead__iterator]))(var_) /* iterator on <var_:Map[MClass, Array[nullable MClass]]>*/;
}
var_15 = var14;
for(;;) {
{
var16 = ((short int (*)(val*))(var_15->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var_15) /* is_ok on <var_15:MapIterator[MClass, Array[nullable MClass]]>*/;
}
if (var16){
{
var17 = ((val* (*)(val*))(var_15->class->vft[COLOR_abstract_collection__MapIterator__key]))(var_15) /* key on <var_15:MapIterator[MClass, Array[nullable MClass]]>*/;
}
var_t = var17;
{
var18 = ((val* (*)(val*))(var_15->class->vft[COLOR_abstract_collection__MapIterator__item]))(var_15) /* item on <var_15:MapIterator[MClass, Array[nullable MClass]]>*/;
}
var_table = var18;
{
{ /* Inline array#AbstractArrayRead#length (var_table) on <var_table:Array[nullable MClass]> */
var21 = var_table->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_table:Array[nullable MClass]> */
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
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
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
var27 = array__AbstractArrayRead__iterator(var_26);
}
var_28 = var27;
for(;;) {
{
var29 = array__ArrayIterator__is_ok(var_28);
}
if (var29){
{
var30 = array__ArrayIterator__item(var_28);
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
var_class_name44 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name44);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
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
array__ArrayIterator__next(var_28); /* Direct call array#ArrayIterator#next on <var_28:ArrayIterator[nullable MClass]>*/
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
((void (*)(val*))(var_15->class->vft[COLOR_abstract_collection__MapIterator__next]))(var_15) /* next on <var_15:MapIterator[MClass, Array[nullable MClass]]>*/;
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
var53 = string__NativeString__to_s_with_length(var51, var52);
var50 = var53;
varonce49 = var50;
}
if (varonce54) {
var55 = varonce54;
} else {
var56 = "\11";
var57 = 1;
var58 = string__NativeString__to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
var59 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var59 = array_instance Array[Object] */
var60 = 4;
var61 = NEW_array__NativeArray(var60, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var61)->values[0] = (val*) var50;
var62 = BOX_kernel__Int(var_total); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var61)->values[1] = (val*) var62;
((struct instance_array__NativeArray*)var61)->values[2] = (val*) var55;
var63 = BOX_kernel__Int(var_holes); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var61)->values[3] = (val*) var63;
{
((void (*)(val*, val*, long))(var59->class->vft[COLOR_array__Array__with_native]))(var59, var61, var60) /* with_native on <var59:Array[Object]>*/;
}
}
{
var64 = ((val* (*)(val*))(var59->class->vft[COLOR_string__Object__to_s]))(var59) /* to_s on <var59:Array[Object]>*/;
}
{
file__Object__print(self, var64); /* Direct call file#Object#print on <self:SeparateErasureCompiler>*/
}
if (varonce65) {
var66 = varonce65;
} else {
var67 = "# size of resolution tables";
var68 = 27;
var69 = string__NativeString__to_s_with_length(var67, var68);
var66 = var69;
varonce65 = var66;
}
{
file__Object__print(self, var66); /* Direct call file#Object#print on <self:SeparateErasureCompiler>*/
}
if (varonce70) {
var71 = varonce70;
} else {
var72 = "\11total \11holes";
var73 = 13;
var74 = string__NativeString__to_s_with_length(var72, var73);
var71 = var74;
varonce70 = var71;
}
{
file__Object__print(self, var71); /* Direct call file#Object#print on <self:SeparateErasureCompiler>*/
}
var75 = 0;
var_total = var75;
var76 = 0;
var_holes = var76;
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#vt_tables (self) on <self:SeparateErasureCompiler> */
var79 = self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___vt_tables].val; /* _vt_tables on <self:SeparateErasureCompiler> */
if (unlikely(var79 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vt_tables");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_erasure_compiler.nit", 442);
show_backtrace(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
var_80 = var77;
{
var81 = ((val* (*)(val*))(var_80->class->vft[COLOR_abstract_collection__MapRead__iterator]))(var_80) /* iterator on <var_80:Map[MClass, Array[nullable MPropDef]]>*/;
}
var_82 = var81;
for(;;) {
{
var83 = ((short int (*)(val*))(var_82->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var_82) /* is_ok on <var_82:MapIterator[MClass, Array[nullable MPropDef]]>*/;
}
if (var83){
{
var84 = ((val* (*)(val*))(var_82->class->vft[COLOR_abstract_collection__MapIterator__key]))(var_82) /* key on <var_82:MapIterator[MClass, Array[nullable MPropDef]]>*/;
}
var_t85 = var84;
{
var86 = ((val* (*)(val*))(var_82->class->vft[COLOR_abstract_collection__MapIterator__item]))(var_82) /* item on <var_82:MapIterator[MClass, Array[nullable MPropDef]]>*/;
}
var_table87 = var86;
{
{ /* Inline array#AbstractArrayRead#length (var_table87) on <var_table87:Array[nullable MPropDef]> */
var90 = var_table87->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_table87:Array[nullable MPropDef]> */
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
var_class_name96 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name96);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
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
var99 = array__AbstractArrayRead__iterator(var_98);
}
var_100 = var99;
for(;;) {
{
var101 = array__ArrayIterator__is_ok(var_100);
}
if (var101){
{
var102 = array__ArrayIterator__item(var_100);
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
var_class_name117 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name117);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
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
array__ArrayIterator__next(var_100); /* Direct call array#ArrayIterator#next on <var_100:ArrayIterator[nullable MPropDef]>*/
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
((void (*)(val*))(var_82->class->vft[COLOR_abstract_collection__MapIterator__next]))(var_82) /* next on <var_82:MapIterator[MClass, Array[nullable MPropDef]]>*/;
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
var127 = string__NativeString__to_s_with_length(var125, var126);
var124 = var127;
varonce123 = var124;
}
if (varonce128) {
var129 = varonce128;
} else {
var130 = "\11";
var131 = 1;
var132 = string__NativeString__to_s_with_length(var130, var131);
var129 = var132;
varonce128 = var129;
}
var133 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var133 = array_instance Array[Object] */
var134 = 4;
var135 = NEW_array__NativeArray(var134, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var135)->values[0] = (val*) var124;
var136 = BOX_kernel__Int(var_total); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var135)->values[1] = (val*) var136;
((struct instance_array__NativeArray*)var135)->values[2] = (val*) var129;
var137 = BOX_kernel__Int(var_holes); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var135)->values[3] = (val*) var137;
{
((void (*)(val*, val*, long))(var133->class->vft[COLOR_array__Array__with_native]))(var133, var135, var134) /* with_native on <var133:Array[Object]>*/;
}
}
{
var138 = ((val* (*)(val*))(var133->class->vft[COLOR_string__Object__to_s]))(var133) /* to_s on <var133:Array[Object]>*/;
}
{
file__Object__print(self, var138); /* Direct call file#Object#print on <self:SeparateErasureCompiler>*/
}
if (varonce139) {
var140 = varonce139;
} else {
var141 = "# size of methods tables";
var142 = 24;
var143 = string__NativeString__to_s_with_length(var141, var142);
var140 = var143;
varonce139 = var140;
}
{
file__Object__print(self, var140); /* Direct call file#Object#print on <self:SeparateErasureCompiler>*/
}
if (varonce144) {
var145 = varonce144;
} else {
var146 = "\11total \11holes";
var147 = 13;
var148 = string__NativeString__to_s_with_length(var146, var147);
var145 = var148;
varonce144 = var145;
}
{
file__Object__print(self, var145); /* Direct call file#Object#print on <self:SeparateErasureCompiler>*/
}
var149 = 0;
var_total = var149;
var150 = 0;
var_holes = var150;
{
{ /* Inline separate_compiler#SeparateCompiler#method_tables (self) on <self:SeparateErasureCompiler> */
var153 = self->attrs[COLOR_separate_compiler__SeparateCompiler___method_tables].val; /* _method_tables on <self:SeparateErasureCompiler> */
if (unlikely(var153 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _method_tables");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 845);
show_backtrace(1);
}
var151 = var153;
RET_LABEL152:(void)0;
}
}
var_154 = var151;
{
var155 = ((val* (*)(val*))(var_154->class->vft[COLOR_abstract_collection__MapRead__iterator]))(var_154) /* iterator on <var_154:Map[MClass, Array[nullable MPropDef]]>*/;
}
var_156 = var155;
for(;;) {
{
var157 = ((short int (*)(val*))(var_156->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var_156) /* is_ok on <var_156:MapIterator[MClass, Array[nullable MPropDef]]>*/;
}
if (var157){
{
var158 = ((val* (*)(val*))(var_156->class->vft[COLOR_abstract_collection__MapIterator__key]))(var_156) /* key on <var_156:MapIterator[MClass, Array[nullable MPropDef]]>*/;
}
var_t159 = var158;
{
var160 = ((val* (*)(val*))(var_156->class->vft[COLOR_abstract_collection__MapIterator__item]))(var_156) /* item on <var_156:MapIterator[MClass, Array[nullable MPropDef]]>*/;
}
var_table161 = var160;
{
{ /* Inline array#AbstractArrayRead#length (var_table161) on <var_table161:Array[nullable MPropDef]> */
var164 = var_table161->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_table161:Array[nullable MPropDef]> */
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
var_class_name170 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name170);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
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
var173 = array__AbstractArrayRead__iterator(var_172);
}
var_174 = var173;
for(;;) {
{
var175 = array__ArrayIterator__is_ok(var_174);
}
if (var175){
{
var176 = array__ArrayIterator__item(var_174);
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
var_class_name191 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name191);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
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
array__ArrayIterator__next(var_174); /* Direct call array#ArrayIterator#next on <var_174:ArrayIterator[nullable MPropDef]>*/
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
((void (*)(val*))(var_156->class->vft[COLOR_abstract_collection__MapIterator__next]))(var_156) /* next on <var_156:MapIterator[MClass, Array[nullable MPropDef]]>*/;
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
var201 = string__NativeString__to_s_with_length(var199, var200);
var198 = var201;
varonce197 = var198;
}
if (varonce202) {
var203 = varonce202;
} else {
var204 = "\11";
var205 = 1;
var206 = string__NativeString__to_s_with_length(var204, var205);
var203 = var206;
varonce202 = var203;
}
var207 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var207 = array_instance Array[Object] */
var208 = 4;
var209 = NEW_array__NativeArray(var208, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var209)->values[0] = (val*) var198;
var210 = BOX_kernel__Int(var_total); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var209)->values[1] = (val*) var210;
((struct instance_array__NativeArray*)var209)->values[2] = (val*) var203;
var211 = BOX_kernel__Int(var_holes); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var209)->values[3] = (val*) var211;
{
((void (*)(val*, val*, long))(var207->class->vft[COLOR_array__Array__with_native]))(var207, var209, var208) /* with_native on <var207:Array[Object]>*/;
}
}
{
var212 = ((val* (*)(val*))(var207->class->vft[COLOR_string__Object__to_s]))(var207) /* to_s on <var207:Array[Object]>*/;
}
{
file__Object__print(self, var212); /* Direct call file#Object#print on <self:SeparateErasureCompiler>*/
}
if (varonce213) {
var214 = varonce213;
} else {
var215 = "# size of attributes tables";
var216 = 27;
var217 = string__NativeString__to_s_with_length(var215, var216);
var214 = var217;
varonce213 = var214;
}
{
file__Object__print(self, var214); /* Direct call file#Object#print on <self:SeparateErasureCompiler>*/
}
if (varonce218) {
var219 = varonce218;
} else {
var220 = "\11total \11holes";
var221 = 13;
var222 = string__NativeString__to_s_with_length(var220, var221);
var219 = var222;
varonce218 = var219;
}
{
file__Object__print(self, var219); /* Direct call file#Object#print on <self:SeparateErasureCompiler>*/
}
var223 = 0;
var_total = var223;
var224 = 0;
var_holes = var224;
{
{ /* Inline separate_compiler#SeparateCompiler#attr_tables (self) on <self:SeparateErasureCompiler> */
var227 = self->attrs[COLOR_separate_compiler__SeparateCompiler___attr_tables].val; /* _attr_tables on <self:SeparateErasureCompiler> */
if (unlikely(var227 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _attr_tables");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 846);
show_backtrace(1);
}
var225 = var227;
RET_LABEL226:(void)0;
}
}
var_228 = var225;
{
var229 = ((val* (*)(val*))(var_228->class->vft[COLOR_abstract_collection__MapRead__iterator]))(var_228) /* iterator on <var_228:Map[MClass, Array[nullable MPropDef]]>*/;
}
var_230 = var229;
for(;;) {
{
var231 = ((short int (*)(val*))(var_230->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var_230) /* is_ok on <var_230:MapIterator[MClass, Array[nullable MPropDef]]>*/;
}
if (var231){
{
var232 = ((val* (*)(val*))(var_230->class->vft[COLOR_abstract_collection__MapIterator__key]))(var_230) /* key on <var_230:MapIterator[MClass, Array[nullable MPropDef]]>*/;
}
var_t233 = var232;
{
var234 = ((val* (*)(val*))(var_230->class->vft[COLOR_abstract_collection__MapIterator__item]))(var_230) /* item on <var_230:MapIterator[MClass, Array[nullable MPropDef]]>*/;
}
var_table235 = var234;
{
{ /* Inline array#AbstractArrayRead#length (var_table235) on <var_table235:Array[nullable MPropDef]> */
var238 = var_table235->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_table235:Array[nullable MPropDef]> */
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
var_class_name244 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name244);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
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
var247 = array__AbstractArrayRead__iterator(var_246);
}
var_248 = var247;
for(;;) {
{
var249 = array__ArrayIterator__is_ok(var_248);
}
if (var249){
{
var250 = array__ArrayIterator__item(var_248);
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
var_class_name265 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name265);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
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
array__ArrayIterator__next(var_248); /* Direct call array#ArrayIterator#next on <var_248:ArrayIterator[nullable MPropDef]>*/
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
((void (*)(val*))(var_230->class->vft[COLOR_abstract_collection__MapIterator__next]))(var_230) /* next on <var_230:MapIterator[MClass, Array[nullable MPropDef]]>*/;
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
var275 = string__NativeString__to_s_with_length(var273, var274);
var272 = var275;
varonce271 = var272;
}
if (varonce276) {
var277 = varonce276;
} else {
var278 = "\11";
var279 = 1;
var280 = string__NativeString__to_s_with_length(var278, var279);
var277 = var280;
varonce276 = var277;
}
var281 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var281 = array_instance Array[Object] */
var282 = 4;
var283 = NEW_array__NativeArray(var282, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var283)->values[0] = (val*) var272;
var284 = BOX_kernel__Int(var_total); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var283)->values[1] = (val*) var284;
((struct instance_array__NativeArray*)var283)->values[2] = (val*) var277;
var285 = BOX_kernel__Int(var_holes); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var283)->values[3] = (val*) var285;
{
((void (*)(val*, val*, long))(var281->class->vft[COLOR_array__Array__with_native]))(var281, var283, var282) /* with_native on <var281:Array[Object]>*/;
}
}
{
var286 = ((val* (*)(val*))(var281->class->vft[COLOR_string__Object__to_s]))(var281) /* to_s on <var281:Array[Object]>*/;
}
{
file__Object__print(self, var286); /* Direct call file#Object#print on <self:SeparateErasureCompiler>*/
}
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#display_sizes for (self: Object) */
void VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__display_sizes(val* self) {
separate_erasure_compiler__SeparateErasureCompiler__display_sizes(self); /* Direct call separate_erasure_compiler#SeparateErasureCompiler#display_sizes on <self:Object(SeparateErasureCompiler)>*/
RET_LABEL:;
}
