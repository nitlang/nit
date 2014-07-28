#include "separate_erasure_compiler.sep.0.h"
/* method separate_erasure_compiler#ToolContext#opt_erasure for (self: ToolContext): OptionBool */
val* separate_erasure_compiler__ToolContext__opt_erasure(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_separate_erasure_compiler__ToolContext___opt_erasure].val; /* _opt_erasure on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_erasure");
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 22);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 22);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 24);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 24);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 26);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 26);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 166);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 22);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 26);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 24);
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
PRINT_ERROR(" (%s:%d)\n", "src/phase.nit", 145);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 22);
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
PRINT_ERROR(" (%s:%d)\n", "src/phase.nit", 145);
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
PRINT_ERROR(" (%s:%d)\n", "src/phase.nit", 145);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 24);
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
long var2 /* : Int */;
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
val* var38 /* : Iterator[nullable Object] */;
short int var39 /* : Bool */;
val* var40 /* : nullable Object */;
val* var_m /* var m: MModule */;
val* var41 /* : Array[MClass] */;
val* var43 /* : Array[MClass] */;
val* var44 /* : ArrayIterator[nullable Object] */;
short int var45 /* : Bool */;
val* var46 /* : nullable Object */;
val* var_mclass /* var mclass: MClass */;
val* var48 /* : Map[MVirtualTypeProp, Int] */;
val* var50 /* : Map[MVirtualTypeProp, Int] */;
val* var51 /* : String */;
val* var53 /* : String */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
long var57 /* : Int */;
val* var58 /* : FlatString */;
val* var59 /* : Array[Object] */;
long var60 /* : Int */;
val* var61 /* : NativeArray[Object] */;
val* var62 /* : String */;
val* var63 /* : CodeFile */;
val* var64 /* : POSetElement[MModule] */;
val* var66 /* : POSetElement[MModule] */;
val* var67 /* : Collection[Object] */;
val* var68 /* : Iterator[nullable Object] */;
short int var69 /* : Bool */;
val* var70 /* : nullable Object */;
val* var_m71 /* var m: MModule */;
val* var72 /* : ToolContext */;
val* var74 /* : ToolContext */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : NativeString */;
long var78 /* : Int */;
val* var79 /* : FlatString */;
val* var80 /* : Array[Object] */;
long var81 /* : Int */;
val* var82 /* : NativeArray[Object] */;
val* var83 /* : String */;
long var84 /* : Int */;
val* var85 /* : String */;
val* var87 /* : String */;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : NativeString */;
long var91 /* : Int */;
val* var92 /* : FlatString */;
val* var93 /* : Array[Object] */;
long var94 /* : Int */;
val* var95 /* : NativeArray[Object] */;
val* var96 /* : String */;
val* var97 /* : CodeFile */;
long var99 /* : Int */;
long var101 /* : Int */;
long var_time1 /* var time1: Int */;
val* var102 /* : ToolContext */;
val* var104 /* : ToolContext */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
long var108 /* : Int */;
val* var109 /* : FlatString */;
long var110 /* : Int */;
short int var112 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var113 /* : Int */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : NativeString */;
long var117 /* : Int */;
val* var118 /* : FlatString */;
val* var119 /* : Array[Object] */;
long var120 /* : Int */;
val* var121 /* : NativeArray[Object] */;
val* var122 /* : Object */;
val* var123 /* : String */;
long var124 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
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
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
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
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 86);
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
var33;
{
separate_compiler__SeparateCompiler__do_property_coloring(var_compiler); /* Direct call separate_compiler#SeparateCompiler#do_property_coloring on <var_compiler:SeparateErasureCompiler>*/
}
{
{ /* Inline mmodule#MModule#in_importation (var_mainmodule) on <var_mainmodule:MModule> */
var36 = var_mainmodule->attrs[COLOR_mmodule__MModule___in_importation].val; /* _in_importation on <var_mainmodule:MModule> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 101);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
var37 = poset__POSetElement__greaters(var34);
}
{
var38 = ((val* (*)(val*))(var37->class->vft[COLOR_abstract_collection__Collection__iterator]))(var37) /* iterator on <var37:Collection[Object](Collection[MModule])>*/;
}
for(;;) {
{
var39 = ((short int (*)(val*))(var38->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var38) /* is_ok on <var38:Iterator[nullable Object]>*/;
}
if(!var39) break;
{
var40 = ((val* (*)(val*))(var38->class->vft[COLOR_abstract_collection__Iterator__item]))(var38) /* item on <var38:Iterator[nullable Object]>*/;
}
var_m = var40;
{
{ /* Inline model#MModule#intro_mclasses (var_m) on <var_m:MModule> */
var43 = var_m->attrs[COLOR_model__MModule___intro_mclasses].val; /* _intro_mclasses on <var_m:MModule> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclasses");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 138);
show_backtrace(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
var44 = array__AbstractArrayRead__iterator(var41);
}
for(;;) {
{
var45 = array__ArrayIterator__is_ok(var44);
}
if(!var45) break;
{
var46 = array__ArrayIterator__item(var44);
}
var_mclass = var46;
{
separate_erasure_compiler__SeparateErasureCompiler__compile_class_to_c(var_compiler, var_mclass); /* Direct call separate_erasure_compiler#SeparateErasureCompiler#compile_class_to_c on <var_compiler:SeparateErasureCompiler>*/
}
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var44); /* Direct call array#ArrayIterator#next on <var44:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
CONTINUE_label47: (void)0;
{
((void (*)(val*))(var38->class->vft[COLOR_abstract_collection__Iterator__next]))(var38) /* next on <var38:Iterator[nullable Object]>*/;
}
}
BREAK_label47: (void)0;
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#vt_colors (var_compiler) on <var_compiler:SeparateErasureCompiler> */
var50 = var_compiler->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___vt_colors].val; /* _vt_colors on <var_compiler:SeparateErasureCompiler> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vt_colors");
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 97);
show_backtrace(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
separate_compiler__SeparateCompiler__compile_color_consts(var_compiler, var48); /* Direct call separate_compiler#SeparateCompiler#compile_color_consts on <var_compiler:SeparateErasureCompiler>*/
}
{
{ /* Inline mmodule#MModule#name (var_mainmodule) on <var_mainmodule:MModule> */
var53 = var_mainmodule->attrs[COLOR_mmodule__MModule___name].val; /* _name on <var_mainmodule:MModule> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 86);
show_backtrace(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
if (varonce54) {
var55 = varonce54;
} else {
var56 = ".main";
var57 = 5;
var58 = string__NativeString__to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
var59 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var59 = array_instance Array[Object] */
var60 = 2;
var61 = NEW_array__NativeArray(var60, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var61)->values[0] = (val*) var51;
((struct instance_array__NativeArray*)var61)->values[1] = (val*) var55;
{
((void (*)(val*, val*, long))(var59->class->vft[COLOR_array__Array__with_native]))(var59, var61, var60) /* with_native on <var59:Array[Object]>*/;
}
}
{
var62 = ((val* (*)(val*))(var59->class->vft[COLOR_string__Object__to_s]))(var59) /* to_s on <var59:Array[Object]>*/;
}
{
var63 = abstract_compiler__AbstractCompiler__new_file(var_compiler, var62);
}
var63;
{
abstract_compiler__AbstractCompiler__compile_nitni_global_ref_functions(var_compiler); /* Direct call abstract_compiler#AbstractCompiler#compile_nitni_global_ref_functions on <var_compiler:SeparateErasureCompiler>*/
}
{
abstract_compiler__AbstractCompiler__compile_main_function(var_compiler); /* Direct call abstract_compiler#AbstractCompiler#compile_main_function on <var_compiler:SeparateErasureCompiler>*/
}
{
{ /* Inline mmodule#MModule#in_importation (var_mainmodule) on <var_mainmodule:MModule> */
var66 = var_mainmodule->attrs[COLOR_mmodule__MModule___in_importation].val; /* _in_importation on <var_mainmodule:MModule> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 101);
show_backtrace(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
var67 = poset__POSetElement__greaters(var64);
}
{
var68 = ((val* (*)(val*))(var67->class->vft[COLOR_abstract_collection__Collection__iterator]))(var67) /* iterator on <var67:Collection[Object](Collection[MModule])>*/;
}
for(;;) {
{
var69 = ((short int (*)(val*))(var68->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var68) /* is_ok on <var68:Iterator[nullable Object]>*/;
}
if(!var69) break;
{
var70 = ((val* (*)(val*))(var68->class->vft[COLOR_abstract_collection__Iterator__item]))(var68) /* item on <var68:Iterator[nullable Object]>*/;
}
var_m71 = var70;
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var74 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
if (varonce75) {
var76 = varonce75;
} else {
var77 = "Generate C for module ";
var78 = 22;
var79 = string__NativeString__to_s_with_length(var77, var78);
var76 = var79;
varonce75 = var76;
}
var80 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var80 = array_instance Array[Object] */
var81 = 2;
var82 = NEW_array__NativeArray(var81, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var82)->values[0] = (val*) var76;
((struct instance_array__NativeArray*)var82)->values[1] = (val*) var_m71;
{
((void (*)(val*, val*, long))(var80->class->vft[COLOR_array__Array__with_native]))(var80, var82, var81) /* with_native on <var80:Array[Object]>*/;
}
}
{
var83 = ((val* (*)(val*))(var80->class->vft[COLOR_string__Object__to_s]))(var80) /* to_s on <var80:Array[Object]>*/;
}
var84 = 2;
{
toolcontext__ToolContext__info(var72, var83, var84); /* Direct call toolcontext#ToolContext#info on <var72:ToolContext>*/
}
{
{ /* Inline mmodule#MModule#name (var_m71) on <var_m71:MModule> */
var87 = var_m71->attrs[COLOR_mmodule__MModule___name].val; /* _name on <var_m71:MModule> */
if (unlikely(var87 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 86);
show_backtrace(1);
}
var85 = var87;
RET_LABEL86:(void)0;
}
}
if (varonce88) {
var89 = varonce88;
} else {
var90 = ".sep";
var91 = 4;
var92 = string__NativeString__to_s_with_length(var90, var91);
var89 = var92;
varonce88 = var89;
}
var93 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var93 = array_instance Array[Object] */
var94 = 2;
var95 = NEW_array__NativeArray(var94, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var95)->values[0] = (val*) var85;
((struct instance_array__NativeArray*)var95)->values[1] = (val*) var89;
{
((void (*)(val*, val*, long))(var93->class->vft[COLOR_array__Array__with_native]))(var93, var95, var94) /* with_native on <var93:Array[Object]>*/;
}
}
{
var96 = ((val* (*)(val*))(var93->class->vft[COLOR_string__Object__to_s]))(var93) /* to_s on <var93:Array[Object]>*/;
}
{
var97 = abstract_compiler__AbstractCompiler__new_file(var_compiler, var96);
}
var97;
{
separate_compiler__SeparateCompiler__compile_module_to_c(var_compiler, var_m71); /* Direct call separate_compiler#SeparateCompiler#compile_module_to_c on <var_compiler:SeparateErasureCompiler>*/
}
CONTINUE_label98: (void)0;
{
((void (*)(val*))(var68->class->vft[COLOR_abstract_collection__Iterator__next]))(var68) /* next on <var68:Iterator[nullable Object]>*/;
}
}
BREAK_label98: (void)0;
{
separate_compiler__SeparateCompiler__display_stats(var_compiler); /* Direct call separate_compiler#SeparateCompiler#display_stats on <var_compiler:SeparateErasureCompiler>*/
}
{
{ /* Inline time#Object#get_time (self) on <self:ModelBuilder> */
var101 = kernel_Any_Any_get_time_0(self);
var99 = var101;
goto RET_LABEL100;
RET_LABEL100:(void)0;
}
}
var_time1 = var99;
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var104 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var104 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var102 = var104;
RET_LABEL103:(void)0;
}
}
if (varonce105) {
var106 = varonce105;
} else {
var107 = "*** END GENERATING C: ";
var108 = 22;
var109 = string__NativeString__to_s_with_length(var107, var108);
var106 = var109;
varonce105 = var106;
}
{
{ /* Inline kernel#Int#- (var_time1,var_time0) on <var_time1:Int> */
/* Covariant cast for argument 0 (i) <var_time0:Int> isa OTHER */
/* <var_time0:Int> isa OTHER */
var112 = 1; /* easy <var_time0:Int> isa OTHER*/
if (unlikely(!var112)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var113 = var_time1 - var_time0;
var110 = var113;
goto RET_LABEL111;
RET_LABEL111:(void)0;
}
}
if (varonce114) {
var115 = varonce114;
} else {
var116 = " ***";
var117 = 4;
var118 = string__NativeString__to_s_with_length(var116, var117);
var115 = var118;
varonce114 = var115;
}
var119 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var119 = array_instance Array[Object] */
var120 = 3;
var121 = NEW_array__NativeArray(var120, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var121)->values[0] = (val*) var106;
var122 = BOX_kernel__Int(var110); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var121)->values[1] = (val*) var122;
((struct instance_array__NativeArray*)var121)->values[2] = (val*) var115;
{
((void (*)(val*, val*, long))(var119->class->vft[COLOR_array__Array__with_native]))(var119, var121, var120) /* with_native on <var119:Array[Object]>*/;
}
}
{
var123 = ((val* (*)(val*))(var119->class->vft[COLOR_string__Object__to_s]))(var119) /* to_s on <var119:Array[Object]>*/;
}
var124 = 2;
{
toolcontext__ToolContext__info(var102, var123, var124); /* Direct call toolcontext#ToolContext#info on <var102:ToolContext>*/
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 95);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 95);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 96);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 96);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 97);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 97);
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
val* var4 /* : Map[Object, Int] */;
val* var6 /* : Map[Object, Int] */;
val* var8 /* : Map[MClass, Array[nullable MClass]] */;
val* var10 /* : HashMap[MClass, Set[MVirtualTypeProp]] */;
val* var_vts /* var vts: HashMap[MClass, Set[MVirtualTypeProp]] */;
val* var11 /* : Iterator[Object] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_mclass /* var mclass: MClass */;
val* var14 /* : HashSet[MVirtualTypeProp] */;
val* var15 /* : MModule */;
val* var17 /* : MModule */;
val* var18 /* : Set[MProperty] */;
val* var19 /* : Iterator[nullable Object] */;
short int var20 /* : Bool */;
val* var21 /* : nullable Object */;
val* var_mprop /* var mprop: MProperty */;
short int var22 /* : Bool */;
int cltype;
int idtype;
val* var23 /* : nullable Object */;
val* var25 /* : POSetBucketsColorer[MClass, MVirtualTypeProp] */;
val* var26 /* : Map[Object, Set[Object]] */;
val* var_vt_colorer /* var vt_colorer: POSetBucketsColorer[MClass, MVirtualTypeProp] */;
val* var27 /* : Map[Object, Int] */;
val* var29 /* : Map[MClass, Array[nullable MPropDef]] */;
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
{ /* Inline coloring#POSetColorer#init (var2) on <var2:POSetColorer[MClass]> */
RET_LABEL3:(void)0;
}
}
var_colorer = var2;
{
coloring__POSetColorer__colorize(var_colorer, var_poset); /* Direct call coloring#POSetColorer#colorize on <var_colorer:POSetColorer[MClass]>*/
}
{
var4 = coloring__POSetColorer__ids(var_colorer);
}
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#class_ids= (self,var4) on <self:SeparateErasureCompiler> */
self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___class_ids].val = var4; /* _class_ids on <self:SeparateErasureCompiler> */
RET_LABEL5:(void)0;
}
}
{
var6 = coloring__POSetColorer__colors(var_colorer);
}
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#class_colors= (self,var6) on <self:SeparateErasureCompiler> */
self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___class_colors].val = var6; /* _class_colors on <self:SeparateErasureCompiler> */
RET_LABEL7:(void)0;
}
}
{
var8 = separate_erasure_compiler__SeparateErasureCompiler__build_class_typing_tables(self, var_mclasses);
}
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#class_tables= (self,var8) on <self:SeparateErasureCompiler> */
self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___class_tables].val = var8; /* _class_tables on <self:SeparateErasureCompiler> */
RET_LABEL9:(void)0;
}
}
var10 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MVirtualTypeProp);
{
hash_collection__HashMap__init(var10); /* Direct call hash_collection#HashMap#init on <var10:HashMap[MClass, Set[MVirtualTypeProp]]>*/
}
var_vts = var10;
{
var11 = hash_collection__HashSet__iterator(var_mclasses);
}
for(;;) {
{
var12 = ((short int (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var11) /* is_ok on <var11:Iterator[Object]>*/;
}
if(!var12) break;
{
var13 = ((val* (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__item]))(var11) /* item on <var11:Iterator[Object]>*/;
}
var_mclass = var13;
var14 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MVirtualTypeProp);
{
hash_collection__HashSet__init(var14); /* Direct call hash_collection#HashSet#init on <var14:HashSet[MVirtualTypeProp]>*/
}
{
hash_collection__HashMap___91d_93d_61d(var_vts, var_mclass, var14); /* Direct call hash_collection#HashMap#[]= on <var_vts:HashMap[MClass, Set[MVirtualTypeProp]]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateErasureCompiler> */
var17 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = abstract_compiler__MModule__properties(var15, var_mclass);
}
{
var19 = ((val* (*)(val*))(var18->class->vft[COLOR_abstract_collection__Collection__iterator]))(var18) /* iterator on <var18:Set[MProperty]>*/;
}
for(;;) {
{
var20 = ((short int (*)(val*))(var19->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var19) /* is_ok on <var19:Iterator[nullable Object]>*/;
}
if(!var20) break;
{
var21 = ((val* (*)(val*))(var19->class->vft[COLOR_abstract_collection__Iterator__item]))(var19) /* item on <var19:Iterator[nullable Object]>*/;
}
var_mprop = var21;
/* <var_mprop:MProperty> isa MVirtualTypeProp */
cltype = type_model__MVirtualTypeProp.color;
idtype = type_model__MVirtualTypeProp.id;
if(cltype >= var_mprop->type->table_size) {
var22 = 0;
} else {
var22 = var_mprop->type->type_table[cltype] == idtype;
}
if (var22){
{
var23 = hash_collection__HashMap___91d_93d(var_vts, var_mclass);
}
{
((void (*)(val*, val*))(var23->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var23, var_mprop) /* add on <var23:nullable Object(Set[MVirtualTypeProp])>*/;
}
} else {
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var19->class->vft[COLOR_abstract_collection__Iterator__next]))(var19) /* next on <var19:Iterator[nullable Object]>*/;
}
}
BREAK_label: (void)0;
CONTINUE_label24: (void)0;
{
((void (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__next]))(var11) /* next on <var11:Iterator[Object]>*/;
}
}
BREAK_label24: (void)0;
var25 = NEW_coloring__POSetBucketsColorer(&type_coloring__POSetBucketsColorermodel__MClassmodel__MVirtualTypeProp);
{
var26 = coloring__POSetColorer__conflicts(var_colorer);
}
{
coloring__POSetBucketsColorer__init(var25, var_poset, var26); /* Direct call coloring#POSetBucketsColorer#init on <var25:POSetBucketsColorer[MClass, MVirtualTypeProp]>*/
}
var_vt_colorer = var25;
{
var27 = coloring__POSetBucketsColorer__colorize(var_vt_colorer, var_vts);
}
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#vt_colors= (self,var27) on <self:SeparateErasureCompiler> */
self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___vt_colors].val = var27; /* _vt_colors on <self:SeparateErasureCompiler> */
RET_LABEL28:(void)0;
}
}
{
var29 = separate_erasure_compiler__SeparateErasureCompiler__build_vt_tables(self, var_mclasses);
}
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#vt_tables= (self,var29) on <self:SeparateErasureCompiler> */
self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___vt_tables].val = var29; /* _vt_tables on <self:SeparateErasureCompiler> */
RET_LABEL30:(void)0;
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
val* var2 /* : Iterator[nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_mclass /* var mclass: MClass */;
val* var5 /* : Array[nullable MPropDef] */;
val* var_table /* var table: Array[nullable MPropDef] */;
val* var6 /* : Array[MClass] */;
val* var_parents /* var parents: Array[MClass] */;
val* var7 /* : MModule */;
val* var9 /* : MModule */;
val* var10 /* : POSet[MClass] */;
short int var11 /* : Bool */;
val* var12 /* : MModule */;
val* var14 /* : MModule */;
val* var15 /* : POSetElement[MClass] */;
val* var16 /* : Collection[Object] */;
val* var17 /* : Array[nullable Object] */;
val* var18 /* : MModule */;
val* var20 /* : MModule */;
val* var21 /* : ArrayIterator[nullable Object] */;
short int var22 /* : Bool */;
val* var23 /* : nullable Object */;
val* var_parent /* var parent: MClass */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : MModule */;
val* var32 /* : MModule */;
val* var33 /* : Set[MProperty] */;
val* var34 /* : Iterator[nullable Object] */;
short int var35 /* : Bool */;
val* var36 /* : nullable Object */;
val* var_mproperty /* var mproperty: MProperty */;
short int var37 /* : Bool */;
int cltype;
int idtype;
short int var38 /* : Bool */;
val* var40 /* : Map[MVirtualTypeProp, Int] */;
val* var42 /* : Map[MVirtualTypeProp, Int] */;
val* var43 /* : nullable Object */;
long var44 /* : Int */;
long var_color /* var color: Int */;
long var45 /* : Int */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
const char* var_class_name;
short int var51 /* : Bool */;
val* var52 /* : Range[Int] */;
long var53 /* : Int */;
val* var54 /* : Discrete */;
val* var55 /* : Discrete */;
val* var56 /* : Iterator[Discrete] */;
short int var57 /* : Bool */;
val* var58 /* : nullable Object */;
long var_i /* var i: Int */;
long var59 /* : Int */;
val* var60 /* : null */;
val* var62 /* : Array[MPropDef] */;
val* var64 /* : Array[MPropDef] */;
val* var65 /* : ArrayIterator[nullable Object] */;
short int var66 /* : Bool */;
val* var67 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: MVirtualTypeDef */;
val* var68 /* : MClassDef */;
val* var70 /* : MClassDef */;
val* var71 /* : MClass */;
val* var73 /* : MClass */;
short int var74 /* : Bool */;
short int var75 /* : Bool */;
short int var77 /* : Bool */;
short int var79 /* : Bool */;
val* var81 /* : MModule */;
val* var83 /* : MModule */;
val* var84 /* : Set[MProperty] */;
val* var85 /* : Iterator[nullable Object] */;
short int var86 /* : Bool */;
val* var87 /* : nullable Object */;
val* var_mproperty88 /* var mproperty: MProperty */;
short int var89 /* : Bool */;
int cltype90;
int idtype91;
short int var92 /* : Bool */;
val* var94 /* : Map[MVirtualTypeProp, Int] */;
val* var96 /* : Map[MVirtualTypeProp, Int] */;
val* var97 /* : nullable Object */;
long var98 /* : Int */;
long var_color99 /* var color: Int */;
long var100 /* : Int */;
short int var101 /* : Bool */;
short int var103 /* : Bool */;
int cltype104;
int idtype105;
const char* var_class_name106;
short int var107 /* : Bool */;
val* var108 /* : Range[Int] */;
long var109 /* : Int */;
val* var110 /* : Discrete */;
val* var111 /* : Discrete */;
val* var112 /* : Iterator[Discrete] */;
short int var113 /* : Bool */;
val* var114 /* : nullable Object */;
long var_i115 /* var i: Int */;
long var116 /* : Int */;
val* var117 /* : null */;
val* var119 /* : Array[MPropDef] */;
val* var121 /* : Array[MPropDef] */;
val* var122 /* : ArrayIterator[nullable Object] */;
short int var123 /* : Bool */;
val* var124 /* : nullable Object */;
val* var_mpropdef125 /* var mpropdef: MVirtualTypeDef */;
val* var126 /* : MClassDef */;
val* var128 /* : MClassDef */;
val* var129 /* : MClass */;
val* var131 /* : MClass */;
short int var132 /* : Bool */;
short int var133 /* : Bool */;
short int var135 /* : Bool */;
short int var137 /* : Bool */;
var_mclasses = p0;
var1 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassarray__Arraynullable_model__MPropDef);
{
hash_collection__HashMap__init(var1); /* Direct call hash_collection#HashMap#init on <var1:HashMap[MClass, Array[nullable MPropDef]]>*/
}
var_tables = var1;
{
var2 = ((val* (*)(val*))(var_mclasses->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_mclasses) /* iterator on <var_mclasses:Set[MClass]>*/;
}
for(;;) {
{
var3 = ((short int (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var2) /* is_ok on <var2:Iterator[nullable Object]>*/;
}
if(!var3) break;
{
var4 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__item]))(var2) /* item on <var2:Iterator[nullable Object]>*/;
}
var_mclass = var4;
var5 = NEW_array__Array(&type_array__Arraynullable_model__MPropDef);
{
array__Array__init(var5); /* Direct call array#Array#init on <var5:Array[nullable MPropDef]>*/
}
var_table = var5;
var6 = NEW_array__Array(&type_array__Arraymodel__MClass);
{
array__Array__init(var6); /* Direct call array#Array#init on <var6:Array[MClass]>*/
}
var_parents = var6;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateErasureCompiler> */
var9 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = model__MModule__flatten_mclass_hierarchy(var7);
}
{
var11 = poset__POSet__has(var10, var_mclass);
}
if (var11){
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateErasureCompiler> */
var14 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = model__MClass__in_hierarchy(var_mclass, var12);
}
{
var16 = poset__POSetElement__greaters(var15);
}
{
var17 = array__Collection__to_a(var16);
}
var_parents = var17;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateErasureCompiler> */
var20 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
model__MModule__linearize_mclasses(var18, var_parents); /* Direct call model#MModule#linearize_mclasses on <var18:MModule>*/
}
} else {
}
{
var21 = array__AbstractArrayRead__iterator(var_parents);
}
for(;;) {
{
var22 = array__ArrayIterator__is_ok(var21);
}
if(!var22) break;
{
var23 = array__ArrayIterator__item(var21);
}
var_parent = var23;
{
{ /* Inline kernel#Object#== (var_parent,var_mclass) on <var_parent:MClass> */
var_other = var_mclass;
{
{ /* Inline kernel#Object#is_same_instance (var_parent,var_other) on <var_parent:MClass> */
var29 = var_parent == var_other;
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
goto CONTINUE_label;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateErasureCompiler> */
var32 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
var33 = abstract_compiler__MModule__properties(var30, var_parent);
}
{
var34 = ((val* (*)(val*))(var33->class->vft[COLOR_abstract_collection__Collection__iterator]))(var33) /* iterator on <var33:Set[MProperty]>*/;
}
for(;;) {
{
var35 = ((short int (*)(val*))(var34->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var34) /* is_ok on <var34:Iterator[nullable Object]>*/;
}
if(!var35) break;
{
var36 = ((val* (*)(val*))(var34->class->vft[COLOR_abstract_collection__Iterator__item]))(var34) /* item on <var34:Iterator[nullable Object]>*/;
}
var_mproperty = var36;
/* <var_mproperty:MProperty> isa MVirtualTypeProp */
cltype = type_model__MVirtualTypeProp.color;
idtype = type_model__MVirtualTypeProp.id;
if(cltype >= var_mproperty->type->table_size) {
var37 = 0;
} else {
var37 = var_mproperty->type->type_table[cltype] == idtype;
}
var38 = !var37;
if (var38){
goto CONTINUE_label39;
} else {
}
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#vt_colors (self) on <self:SeparateErasureCompiler> */
var42 = self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___vt_colors].val; /* _vt_colors on <self:SeparateErasureCompiler> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vt_colors");
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 97);
show_backtrace(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
var43 = ((val* (*)(val*, val*))(var40->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var40, var_mproperty) /* [] on <var40:Map[MVirtualTypeProp, Int]>*/;
}
var44 = ((struct instance_kernel__Int*)var43)->value; /* autounbox from nullable Object to Int */;
var_color = var44;
{
var45 = array__AbstractArrayRead__length(var_table);
}
{
{ /* Inline kernel#Int#<= (var45,var_color) on <var45:Int> */
/* Covariant cast for argument 0 (i) <var_color:Int> isa OTHER */
/* <var_color:Int> isa OTHER */
var48 = 1; /* easy <var_color:Int> isa OTHER*/
if (unlikely(!var48)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 324);
show_backtrace(1);
}
var51 = var45 <= var_color;
var46 = var51;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
if (var46){
var52 = NEW_range__Range(&type_range__Rangekernel__Int);
{
var53 = array__AbstractArrayRead__length(var_table);
}
{
var54 = BOX_kernel__Int(var53); /* autobox from Int to Discrete */
var55 = BOX_kernel__Int(var_color); /* autobox from Int to Discrete */
range__Range__without_last(var52, var54, var55); /* Direct call range#Range#without_last on <var52:Range[Int]>*/
}
{
var56 = range__Range__iterator(var52);
}
for(;;) {
{
var57 = ((short int (*)(val*))(var56->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var56) /* is_ok on <var56:Iterator[Discrete]>*/;
}
if(!var57) break;
{
var58 = ((val* (*)(val*))(var56->class->vft[COLOR_abstract_collection__Iterator__item]))(var56) /* item on <var56:Iterator[Discrete]>*/;
}
var59 = ((struct instance_kernel__Int*)var58)->value; /* autounbox from nullable Object to Int */;
var_i = var59;
var60 = NULL;
{
array__Array___91d_93d_61d(var_table, var_i, var60); /* Direct call array#Array#[]= on <var_table:Array[nullable MPropDef]>*/
}
CONTINUE_label61: (void)0;
{
((void (*)(val*))(var56->class->vft[COLOR_abstract_collection__Iterator__next]))(var56) /* next on <var56:Iterator[Discrete]>*/;
}
}
BREAK_label61: (void)0;
} else {
}
{
{ /* Inline model#MProperty#mpropdefs (var_mproperty) on <var_mproperty:MProperty(MVirtualTypeProp)> */
var64 = var_mproperty->attrs[COLOR_model__MProperty___mpropdefs].val; /* _mpropdefs on <var_mproperty:MProperty(MVirtualTypeProp)> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1631);
show_backtrace(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
var65 = array__AbstractArrayRead__iterator(var62);
}
for(;;) {
{
var66 = array__ArrayIterator__is_ok(var65);
}
if(!var66) break;
{
var67 = array__ArrayIterator__item(var65);
}
var_mpropdef = var67;
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MVirtualTypeDef> */
var70 = var_mpropdef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MVirtualTypeDef> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var68) on <var68:MClassDef> */
var73 = var68->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var68:MClassDef> */
if (unlikely(var73 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 474);
show_backtrace(1);
}
var71 = var73;
RET_LABEL72:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var71,var_parent) on <var71:MClass> */
var_other = var_parent;
{
{ /* Inline kernel#Object#is_same_instance (var71,var_other) on <var71:MClass> */
var79 = var71 == var_other;
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
{
array__Array___91d_93d_61d(var_table, var_color, var_mpropdef); /* Direct call array#Array#[]= on <var_table:Array[nullable MPropDef]>*/
}
} else {
}
CONTINUE_label80: (void)0;
{
array__ArrayIterator__next(var65); /* Direct call array#ArrayIterator#next on <var65:ArrayIterator[nullable Object]>*/
}
}
BREAK_label80: (void)0;
CONTINUE_label39: (void)0;
{
((void (*)(val*))(var34->class->vft[COLOR_abstract_collection__Iterator__next]))(var34) /* next on <var34:Iterator[nullable Object]>*/;
}
}
BREAK_label39: (void)0;
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var21); /* Direct call array#ArrayIterator#next on <var21:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateErasureCompiler> */
var83 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var83 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
show_backtrace(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
{
var84 = abstract_compiler__MModule__properties(var81, var_mclass);
}
{
var85 = ((val* (*)(val*))(var84->class->vft[COLOR_abstract_collection__Collection__iterator]))(var84) /* iterator on <var84:Set[MProperty]>*/;
}
for(;;) {
{
var86 = ((short int (*)(val*))(var85->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var85) /* is_ok on <var85:Iterator[nullable Object]>*/;
}
if(!var86) break;
{
var87 = ((val* (*)(val*))(var85->class->vft[COLOR_abstract_collection__Iterator__item]))(var85) /* item on <var85:Iterator[nullable Object]>*/;
}
var_mproperty88 = var87;
/* <var_mproperty88:MProperty> isa MVirtualTypeProp */
cltype90 = type_model__MVirtualTypeProp.color;
idtype91 = type_model__MVirtualTypeProp.id;
if(cltype90 >= var_mproperty88->type->table_size) {
var89 = 0;
} else {
var89 = var_mproperty88->type->type_table[cltype90] == idtype91;
}
var92 = !var89;
if (var92){
goto CONTINUE_label93;
} else {
}
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#vt_colors (self) on <self:SeparateErasureCompiler> */
var96 = self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___vt_colors].val; /* _vt_colors on <self:SeparateErasureCompiler> */
if (unlikely(var96 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vt_colors");
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 97);
show_backtrace(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
{
var97 = ((val* (*)(val*, val*))(var94->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var94, var_mproperty88) /* [] on <var94:Map[MVirtualTypeProp, Int]>*/;
}
var98 = ((struct instance_kernel__Int*)var97)->value; /* autounbox from nullable Object to Int */;
var_color99 = var98;
{
var100 = array__AbstractArrayRead__length(var_table);
}
{
{ /* Inline kernel#Int#<= (var100,var_color99) on <var100:Int> */
/* Covariant cast for argument 0 (i) <var_color99:Int> isa OTHER */
/* <var_color99:Int> isa OTHER */
var103 = 1; /* easy <var_color99:Int> isa OTHER*/
if (unlikely(!var103)) {
var_class_name106 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name106);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 324);
show_backtrace(1);
}
var107 = var100 <= var_color99;
var101 = var107;
goto RET_LABEL102;
RET_LABEL102:(void)0;
}
}
if (var101){
var108 = NEW_range__Range(&type_range__Rangekernel__Int);
{
var109 = array__AbstractArrayRead__length(var_table);
}
{
var110 = BOX_kernel__Int(var109); /* autobox from Int to Discrete */
var111 = BOX_kernel__Int(var_color99); /* autobox from Int to Discrete */
range__Range__without_last(var108, var110, var111); /* Direct call range#Range#without_last on <var108:Range[Int]>*/
}
{
var112 = range__Range__iterator(var108);
}
for(;;) {
{
var113 = ((short int (*)(val*))(var112->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var112) /* is_ok on <var112:Iterator[Discrete]>*/;
}
if(!var113) break;
{
var114 = ((val* (*)(val*))(var112->class->vft[COLOR_abstract_collection__Iterator__item]))(var112) /* item on <var112:Iterator[Discrete]>*/;
}
var116 = ((struct instance_kernel__Int*)var114)->value; /* autounbox from nullable Object to Int */;
var_i115 = var116;
var117 = NULL;
{
array__Array___91d_93d_61d(var_table, var_i115, var117); /* Direct call array#Array#[]= on <var_table:Array[nullable MPropDef]>*/
}
CONTINUE_label118: (void)0;
{
((void (*)(val*))(var112->class->vft[COLOR_abstract_collection__Iterator__next]))(var112) /* next on <var112:Iterator[Discrete]>*/;
}
}
BREAK_label118: (void)0;
} else {
}
{
{ /* Inline model#MProperty#mpropdefs (var_mproperty88) on <var_mproperty88:MProperty(MVirtualTypeProp)> */
var121 = var_mproperty88->attrs[COLOR_model__MProperty___mpropdefs].val; /* _mpropdefs on <var_mproperty88:MProperty(MVirtualTypeProp)> */
if (unlikely(var121 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1631);
show_backtrace(1);
}
var119 = var121;
RET_LABEL120:(void)0;
}
}
{
var122 = array__AbstractArrayRead__iterator(var119);
}
for(;;) {
{
var123 = array__ArrayIterator__is_ok(var122);
}
if(!var123) break;
{
var124 = array__ArrayIterator__item(var122);
}
var_mpropdef125 = var124;
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef125) on <var_mpropdef125:MVirtualTypeDef> */
var128 = var_mpropdef125->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef125:MVirtualTypeDef> */
if (unlikely(var128 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var126 = var128;
RET_LABEL127:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var126) on <var126:MClassDef> */
var131 = var126->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var126:MClassDef> */
if (unlikely(var131 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 474);
show_backtrace(1);
}
var129 = var131;
RET_LABEL130:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var129,var_mclass) on <var129:MClass> */
var_other = var_mclass;
{
{ /* Inline kernel#Object#is_same_instance (var129,var_other) on <var129:MClass> */
var137 = var129 == var_other;
var135 = var137;
goto RET_LABEL136;
RET_LABEL136:(void)0;
}
}
var133 = var135;
goto RET_LABEL134;
RET_LABEL134:(void)0;
}
var132 = var133;
}
if (var132){
{
array__Array___91d_93d_61d(var_table, var_color99, var_mpropdef125); /* Direct call array#Array#[]= on <var_table:Array[nullable MPropDef]>*/
}
} else {
}
CONTINUE_label138: (void)0;
{
array__ArrayIterator__next(var122); /* Direct call array#ArrayIterator#next on <var122:ArrayIterator[nullable Object]>*/
}
}
BREAK_label138: (void)0;
CONTINUE_label93: (void)0;
{
((void (*)(val*))(var85->class->vft[COLOR_abstract_collection__Iterator__next]))(var85) /* next on <var85:Iterator[nullable Object]>*/;
}
}
BREAK_label93: (void)0;
{
hash_collection__HashMap___91d_93d_61d(var_tables, var_mclass, var_table); /* Direct call hash_collection#HashMap#[]= on <var_tables:HashMap[MClass, Array[nullable MPropDef]]>*/
}
CONTINUE_label139: (void)0;
{
((void (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__next]))(var2) /* next on <var2:Iterator[nullable Object]>*/;
}
}
BREAK_label139: (void)0;
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
val* var2 /* : Iterator[nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_mclass /* var mclass: MClass */;
val* var5 /* : Array[nullable MClass] */;
val* var_table /* var table: Array[nullable MClass] */;
val* var6 /* : Array[MClass] */;
val* var_supers /* var supers: Array[MClass] */;
val* var7 /* : MModule */;
val* var9 /* : MModule */;
val* var10 /* : POSet[MClass] */;
short int var11 /* : Bool */;
val* var12 /* : MModule */;
val* var14 /* : MModule */;
val* var15 /* : POSetElement[MClass] */;
val* var16 /* : Collection[Object] */;
val* var17 /* : Array[nullable Object] */;
val* var18 /* : ArrayIterator[nullable Object] */;
short int var19 /* : Bool */;
val* var20 /* : nullable Object */;
val* var_sup /* var sup: MClass */;
val* var21 /* : Map[MClass, Int] */;
val* var23 /* : Map[MClass, Int] */;
val* var24 /* : nullable Object */;
long var25 /* : Int */;
long var_color /* var color: Int */;
long var26 /* : Int */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var30 /* : Bool */;
val* var31 /* : Range[Int] */;
long var32 /* : Int */;
val* var33 /* : Discrete */;
val* var34 /* : Discrete */;
val* var35 /* : Iterator[Discrete] */;
short int var36 /* : Bool */;
val* var37 /* : nullable Object */;
long var_i /* var i: Int */;
long var38 /* : Int */;
val* var39 /* : null */;
var_mclasses = p0;
var1 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassarray__Arraynullable_model__MClass);
{
hash_collection__HashMap__init(var1); /* Direct call hash_collection#HashMap#init on <var1:HashMap[MClass, Array[nullable MClass]]>*/
}
var_tables = var1;
{
var2 = ((val* (*)(val*))(var_mclasses->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_mclasses) /* iterator on <var_mclasses:Set[MClass]>*/;
}
for(;;) {
{
var3 = ((short int (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var2) /* is_ok on <var2:Iterator[nullable Object]>*/;
}
if(!var3) break;
{
var4 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__item]))(var2) /* item on <var2:Iterator[nullable Object]>*/;
}
var_mclass = var4;
var5 = NEW_array__Array(&type_array__Arraynullable_model__MClass);
{
array__Array__init(var5); /* Direct call array#Array#init on <var5:Array[nullable MClass]>*/
}
var_table = var5;
var6 = NEW_array__Array(&type_array__Arraymodel__MClass);
{
array__Array__init(var6); /* Direct call array#Array#init on <var6:Array[MClass]>*/
}
var_supers = var6;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateErasureCompiler> */
var9 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = model__MModule__flatten_mclass_hierarchy(var7);
}
{
var11 = poset__POSet__has(var10, var_mclass);
}
if (var11){
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateErasureCompiler> */
var14 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateErasureCompiler> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = model__MClass__in_hierarchy(var_mclass, var12);
}
{
var16 = poset__POSetElement__greaters(var15);
}
{
var17 = array__Collection__to_a(var16);
}
var_supers = var17;
} else {
}
{
var18 = array__AbstractArrayRead__iterator(var_supers);
}
for(;;) {
{
var19 = array__ArrayIterator__is_ok(var18);
}
if(!var19) break;
{
var20 = array__ArrayIterator__item(var18);
}
var_sup = var20;
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#class_colors (self) on <self:SeparateErasureCompiler> */
var23 = self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___class_colors].val; /* _class_colors on <self:SeparateErasureCompiler> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _class_colors");
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 96);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = ((val* (*)(val*, val*))(var21->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var21, var_sup) /* [] on <var21:Map[MClass, Int]>*/;
}
var25 = ((struct instance_kernel__Int*)var24)->value; /* autounbox from nullable Object to Int */;
var_color = var25;
{
var26 = array__AbstractArrayRead__length(var_table);
}
{
{ /* Inline kernel#Int#<= (var26,var_color) on <var26:Int> */
/* Covariant cast for argument 0 (i) <var_color:Int> isa OTHER */
/* <var_color:Int> isa OTHER */
var29 = 1; /* easy <var_color:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 324);
show_backtrace(1);
}
var30 = var26 <= var_color;
var27 = var30;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
if (var27){
var31 = NEW_range__Range(&type_range__Rangekernel__Int);
{
var32 = array__AbstractArrayRead__length(var_table);
}
{
var33 = BOX_kernel__Int(var32); /* autobox from Int to Discrete */
var34 = BOX_kernel__Int(var_color); /* autobox from Int to Discrete */
range__Range__without_last(var31, var33, var34); /* Direct call range#Range#without_last on <var31:Range[Int]>*/
}
{
var35 = range__Range__iterator(var31);
}
for(;;) {
{
var36 = ((short int (*)(val*))(var35->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var35) /* is_ok on <var35:Iterator[Discrete]>*/;
}
if(!var36) break;
{
var37 = ((val* (*)(val*))(var35->class->vft[COLOR_abstract_collection__Iterator__item]))(var35) /* item on <var35:Iterator[Discrete]>*/;
}
var38 = ((struct instance_kernel__Int*)var37)->value; /* autounbox from nullable Object to Int */;
var_i = var38;
var39 = NULL;
{
array__Array___91d_93d_61d(var_table, var_i, var39); /* Direct call array#Array#[]= on <var_table:Array[nullable MClass]>*/
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var35->class->vft[COLOR_abstract_collection__Iterator__next]))(var35) /* next on <var35:Iterator[Discrete]>*/;
}
}
BREAK_label: (void)0;
} else {
}
{
array__Array___91d_93d_61d(var_table, var_color, var_sup); /* Direct call array#Array#[]= on <var_table:Array[nullable MClass]>*/
}
CONTINUE_label40: (void)0;
{
array__ArrayIterator__next(var18); /* Direct call array#ArrayIterator#next on <var18:ArrayIterator[nullable Object]>*/
}
}
BREAK_label40: (void)0;
{
hash_collection__HashMap___91d_93d_61d(var_tables, var_mclass, var_table); /* Direct call hash_collection#HashMap#[]= on <var_tables:HashMap[MClass, Array[nullable MClass]]>*/
}
CONTINUE_label41: (void)0;
{
((void (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__next]))(var2) /* next on <var2:Iterator[nullable Object]>*/;
}
}
BREAK_label41: (void)0;
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
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
val* var1 /* : MClassType */;
val* var3 /* : MClassType */;
val* var_mtype /* var mtype: MClassType */;
val* var4 /* : String */;
val* var_c_name /* var c_name: String */;
val* var5 /* : String */;
val* var_c_instance_name /* var c_instance_name: String */;
val* var6 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var8 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var9 /* : nullable Object */;
val* var_vft /* var vft: Array[nullable MPropDef] */;
val* var10 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var12 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var13 /* : nullable Object */;
val* var_attrs /* var attrs: Array[nullable MPropDef] */;
val* var14 /* : Map[MClass, Array[nullable MClass]] */;
val* var16 /* : Map[MClass, Array[nullable MClass]] */;
val* var17 /* : nullable Object */;
val* var_class_table /* var class_table: Array[nullable MClass] */;
val* var18 /* : SeparateCompilerVisitor */;
val* var_v /* var v: SeparateCompilerVisitor */;
val* var19 /* : nullable RapidTypeAnalysis */;
val* var21 /* : nullable RapidTypeAnalysis */;
val* var_rta /* var rta: nullable RapidTypeAnalysis */;
short int var22 /* : Bool */;
val* var23 /* : MClassKind */;
val* var25 /* : MClassKind */;
val* var26 /* : MClassKind */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
short int var_ /* var : Bool */;
val* var33 /* : MClassKind */;
val* var35 /* : MClassKind */;
val* var36 /* : MClassKind */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
short int var_is_dead /* var is_dead: Bool */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
short int var_48 /* var : Bool */;
val* var49 /* : null */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
val* var_other53 /* var other: nullable Object */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
short int var_57 /* var : Bool */;
val* var58 /* : HashSet[MClass] */;
val* var60 /* : HashSet[MClass] */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
short int var_63 /* var : Bool */;
val* var64 /* : String */;
static val* varonce;
val* var65 /* : String */;
char* var66 /* : NativeString */;
long var67 /* : Int */;
val* var68 /* : FlatString */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
short int var_71 /* var : Bool */;
val* var72 /* : String */;
val* var74 /* : String */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : NativeString */;
long var78 /* : Int */;
val* var79 /* : FlatString */;
short int var80 /* : Bool */;
short int var81 /* : Bool */;
short int var83 /* : Bool */;
short int var84 /* : Bool */;
short int var85 /* : Bool */;
short int var86 /* : Bool */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : NativeString */;
long var90 /* : Int */;
val* var91 /* : FlatString */;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : NativeString */;
long var95 /* : Int */;
val* var96 /* : FlatString */;
val* var97 /* : Array[Object] */;
long var98 /* : Int */;
val* var99 /* : NativeArray[Object] */;
val* var100 /* : String */;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : NativeString */;
long var104 /* : Int */;
val* var105 /* : FlatString */;
val* var106 /* : Array[Object] */;
long var107 /* : Int */;
val* var108 /* : NativeArray[Object] */;
val* var109 /* : String */;
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : NativeString */;
long var113 /* : Int */;
val* var114 /* : FlatString */;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : NativeString */;
long var118 /* : Int */;
val* var119 /* : FlatString */;
val* var120 /* : Array[Object] */;
long var121 /* : Int */;
val* var122 /* : NativeArray[Object] */;
val* var123 /* : String */;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : NativeString */;
long var127 /* : Int */;
val* var128 /* : FlatString */;
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : NativeString */;
long var132 /* : Int */;
val* var133 /* : FlatString */;
val* var134 /* : Array[Object] */;
long var135 /* : Int */;
val* var136 /* : NativeArray[Object] */;
val* var137 /* : String */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : NativeString */;
long var141 /* : Int */;
val* var142 /* : FlatString */;
static val* varonce143;
val* var144 /* : String */;
char* var145 /* : NativeString */;
long var146 /* : Int */;
val* var147 /* : FlatString */;
val* var148 /* : Array[Object] */;
long var149 /* : Int */;
val* var150 /* : NativeArray[Object] */;
val* var151 /* : String */;
val* var152 /* : Map[MClass, Int] */;
val* var154 /* : Map[MClass, Int] */;
val* var155 /* : nullable Object */;
static val* varonce156;
val* var157 /* : String */;
char* var158 /* : NativeString */;
long var159 /* : Int */;
val* var160 /* : FlatString */;
val* var161 /* : Array[Object] */;
long var162 /* : Int */;
val* var163 /* : NativeArray[Object] */;
val* var164 /* : String */;
static val* varonce165;
val* var166 /* : String */;
char* var167 /* : NativeString */;
long var168 /* : Int */;
val* var169 /* : FlatString */;
val* var170 /* : String */;
val* var172 /* : String */;
static val* varonce173;
val* var174 /* : String */;
char* var175 /* : NativeString */;
long var176 /* : Int */;
val* var177 /* : FlatString */;
val* var178 /* : Array[Object] */;
long var179 /* : Int */;
val* var180 /* : NativeArray[Object] */;
val* var181 /* : String */;
long var182 /* : Int */;
static val* varonce183;
val* var184 /* : String */;
char* var185 /* : NativeString */;
long var186 /* : Int */;
val* var187 /* : FlatString */;
val* var188 /* : Array[Object] */;
long var189 /* : Int */;
val* var190 /* : NativeArray[Object] */;
val* var191 /* : Object */;
val* var192 /* : String */;
val* var193 /* : Map[MClass, Int] */;
val* var195 /* : Map[MClass, Int] */;
val* var196 /* : nullable Object */;
static val* varonce197;
val* var198 /* : String */;
char* var199 /* : NativeString */;
long var200 /* : Int */;
val* var201 /* : FlatString */;
val* var202 /* : Array[Object] */;
long var203 /* : Int */;
val* var204 /* : NativeArray[Object] */;
val* var205 /* : String */;
short int var206 /* : Bool */;
short int var207 /* : Bool */;
static val* varonce208;
val* var209 /* : String */;
char* var210 /* : NativeString */;
long var211 /* : Int */;
val* var212 /* : FlatString */;
val* var213 /* : Array[Object] */;
long var214 /* : Int */;
val* var215 /* : NativeArray[Object] */;
val* var216 /* : String */;
static val* varonce217;
val* var218 /* : String */;
char* var219 /* : NativeString */;
long var220 /* : Int */;
val* var221 /* : FlatString */;
static val* varonce222;
val* var223 /* : String */;
char* var224 /* : NativeString */;
long var225 /* : Int */;
val* var226 /* : FlatString */;
val* var227 /* : Array[Object] */;
long var228 /* : Int */;
val* var229 /* : NativeArray[Object] */;
val* var230 /* : String */;
static val* varonce231;
val* var232 /* : String */;
char* var233 /* : NativeString */;
long var234 /* : Int */;
val* var235 /* : FlatString */;
static val* varonce236;
val* var237 /* : String */;
char* var238 /* : NativeString */;
long var239 /* : Int */;
val* var240 /* : FlatString */;
static val* varonce241;
val* var242 /* : String */;
char* var243 /* : NativeString */;
long var244 /* : Int */;
val* var245 /* : FlatString */;
val* var246 /* : Array[Object] */;
long var247 /* : Int */;
val* var248 /* : NativeArray[Object] */;
val* var249 /* : String */;
static val* varonce250;
val* var251 /* : String */;
char* var252 /* : NativeString */;
long var253 /* : Int */;
val* var254 /* : FlatString */;
val* var255 /* : Range[Int] */;
long var256 /* : Int */;
long var257 /* : Int */;
val* var258 /* : Discrete */;
val* var259 /* : Discrete */;
val* var260 /* : Iterator[Discrete] */;
short int var261 /* : Bool */;
val* var262 /* : nullable Object */;
long var_i /* var i: Int */;
long var263 /* : Int */;
val* var264 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: nullable MPropDef */;
val* var265 /* : null */;
short int var266 /* : Bool */;
short int var267 /* : Bool */;
short int var269 /* : Bool */;
short int var271 /* : Bool */;
static val* varonce272;
val* var273 /* : String */;
char* var274 /* : NativeString */;
long var275 /* : Int */;
val* var276 /* : FlatString */;
short int var277 /* : Bool */;
int cltype;
int idtype;
short int var278 /* : Bool */;
val* var279 /* : null */;
short int var280 /* : Bool */;
short int var281 /* : Bool */;
short int var283 /* : Bool */;
short int var284 /* : Bool */;
short int var285 /* : Bool */;
short int var_286 /* var : Bool */;
val* var287 /* : HashSet[MMethodDef] */;
val* var289 /* : HashSet[MMethodDef] */;
short int var290 /* : Bool */;
short int var291 /* : Bool */;
static val* varonce292;
val* var293 /* : String */;
char* var294 /* : NativeString */;
long var295 /* : Int */;
val* var296 /* : FlatString */;
val* var297 /* : MModule */;
val* var299 /* : MModule */;
static val* varonce300;
val* var301 /* : String */;
char* var302 /* : NativeString */;
long var303 /* : Int */;
val* var304 /* : FlatString */;
static val* varonce305;
val* var306 /* : String */;
char* var307 /* : NativeString */;
long var308 /* : Int */;
val* var309 /* : FlatString */;
static val* varonce310;
val* var311 /* : String */;
char* var312 /* : NativeString */;
long var313 /* : Int */;
val* var314 /* : FlatString */;
val* var315 /* : Array[Object] */;
long var316 /* : Int */;
val* var317 /* : NativeArray[Object] */;
val* var318 /* : String */;
short int var319 /* : Bool */;
short int var320 /* : Bool */;
short int var_321 /* var : Bool */;
val* var322 /* : MClassDef */;
val* var324 /* : MClassDef */;
val* var325 /* : MClassType */;
val* var327 /* : MClassType */;
val* var328 /* : String */;
static val* varonce329;
val* var330 /* : String */;
char* var331 /* : NativeString */;
long var332 /* : Int */;
val* var333 /* : FlatString */;
short int var334 /* : Bool */;
short int var335 /* : Bool */;
short int var337 /* : Bool */;
short int var338 /* : Bool */;
short int var339 /* : Bool */;
static val* varonce340;
val* var341 /* : String */;
char* var342 /* : NativeString */;
long var343 /* : Int */;
val* var344 /* : FlatString */;
val* var345 /* : String */;
val* var346 /* : Array[Object] */;
long var347 /* : Int */;
val* var348 /* : NativeArray[Object] */;
val* var349 /* : String */;
static val* varonce350;
val* var351 /* : String */;
char* var352 /* : NativeString */;
long var353 /* : Int */;
val* var354 /* : FlatString */;
val* var355 /* : String */;
static val* varonce356;
val* var357 /* : String */;
char* var358 /* : NativeString */;
long var359 /* : Int */;
val* var360 /* : FlatString */;
val* var361 /* : MModule */;
val* var363 /* : MModule */;
static val* varonce364;
val* var365 /* : String */;
char* var366 /* : NativeString */;
long var367 /* : Int */;
val* var368 /* : FlatString */;
static val* varonce369;
val* var370 /* : String */;
char* var371 /* : NativeString */;
long var372 /* : Int */;
val* var373 /* : FlatString */;
static val* varonce374;
val* var375 /* : String */;
char* var376 /* : NativeString */;
long var377 /* : Int */;
val* var378 /* : FlatString */;
val* var379 /* : Array[Object] */;
long var380 /* : Int */;
val* var381 /* : NativeArray[Object] */;
val* var382 /* : String */;
val* var383 /* : String */;
val* var384 /* : Array[Object] */;
long var385 /* : Int */;
val* var386 /* : NativeArray[Object] */;
val* var387 /* : String */;
static val* varonce388;
val* var389 /* : String */;
char* var390 /* : NativeString */;
long var391 /* : Int */;
val* var392 /* : FlatString */;
val* var393 /* : String */;
static val* varonce394;
val* var395 /* : String */;
char* var396 /* : NativeString */;
long var397 /* : Int */;
val* var398 /* : FlatString */;
val* var399 /* : MModule */;
val* var401 /* : MModule */;
static val* varonce402;
val* var403 /* : String */;
char* var404 /* : NativeString */;
long var405 /* : Int */;
val* var406 /* : FlatString */;
static val* varonce407;
val* var408 /* : String */;
char* var409 /* : NativeString */;
long var410 /* : Int */;
val* var411 /* : FlatString */;
static val* varonce412;
val* var413 /* : String */;
char* var414 /* : NativeString */;
long var415 /* : Int */;
val* var416 /* : FlatString */;
val* var417 /* : Array[Object] */;
long var418 /* : Int */;
val* var419 /* : NativeArray[Object] */;
val* var420 /* : String */;
static val* varonce421;
val* var422 /* : String */;
char* var423 /* : NativeString */;
long var424 /* : Int */;
val* var425 /* : FlatString */;
static val* varonce426;
val* var427 /* : String */;
char* var428 /* : NativeString */;
long var429 /* : Int */;
val* var430 /* : FlatString */;
static val* varonce431;
val* var432 /* : String */;
char* var433 /* : NativeString */;
long var434 /* : Int */;
val* var435 /* : FlatString */;
static val* varonce436;
val* var437 /* : String */;
char* var438 /* : NativeString */;
long var439 /* : Int */;
val* var440 /* : FlatString */;
val* var441 /* : Array[Object] */;
long var442 /* : Int */;
val* var443 /* : NativeArray[Object] */;
val* var444 /* : String */;
long var445 /* : Int */;
static val* varonce446;
val* var447 /* : String */;
char* var448 /* : NativeString */;
long var449 /* : Int */;
val* var450 /* : FlatString */;
val* var451 /* : Array[Object] */;
long var452 /* : Int */;
val* var453 /* : NativeArray[Object] */;
val* var454 /* : Object */;
val* var455 /* : String */;
static val* varonce456;
val* var457 /* : String */;
char* var458 /* : NativeString */;
long var459 /* : Int */;
val* var460 /* : FlatString */;
val* var461 /* : ArrayIterator[nullable Object] */;
short int var462 /* : Bool */;
val* var463 /* : nullable Object */;
val* var_msuper /* var msuper: nullable MClass */;
val* var464 /* : null */;
short int var465 /* : Bool */;
short int var466 /* : Bool */;
short int var468 /* : Bool */;
short int var470 /* : Bool */;
static val* varonce471;
val* var472 /* : String */;
char* var473 /* : NativeString */;
long var474 /* : Int */;
val* var475 /* : FlatString */;
val* var476 /* : Map[MClass, Int] */;
val* var478 /* : Map[MClass, Int] */;
val* var479 /* : nullable Object */;
static val* varonce480;
val* var481 /* : String */;
char* var482 /* : NativeString */;
long var483 /* : Int */;
val* var484 /* : FlatString */;
static val* varonce485;
val* var486 /* : String */;
char* var487 /* : NativeString */;
long var488 /* : Int */;
val* var489 /* : FlatString */;
val* var490 /* : Array[Object] */;
long var491 /* : Int */;
val* var492 /* : NativeArray[Object] */;
val* var493 /* : String */;
static val* varonce495;
val* var496 /* : String */;
char* var497 /* : NativeString */;
long var498 /* : Int */;
val* var499 /* : FlatString */;
static val* varonce500;
val* var501 /* : String */;
char* var502 /* : NativeString */;
long var503 /* : Int */;
val* var504 /* : FlatString */;
val* var505 /* : String */;
static val* varonce506;
val* var507 /* : String */;
char* var508 /* : NativeString */;
long var509 /* : Int */;
val* var510 /* : FlatString */;
short int var511 /* : Bool */;
short int var512 /* : Bool */;
short int var514 /* : Bool */;
short int var515 /* : Bool */;
short int var516 /* : Bool */;
short int var517 /* : Bool */;
val* var518 /* : MClass */;
val* var520 /* : MClass */;
val* var521 /* : String */;
val* var523 /* : String */;
static val* varonce524;
val* var525 /* : String */;
char* var526 /* : NativeString */;
long var527 /* : Int */;
val* var528 /* : FlatString */;
short int var529 /* : Bool */;
short int var530 /* : Bool */;
short int var_531 /* var : Bool */;
val* var532 /* : MClass */;
val* var534 /* : MClass */;
val* var535 /* : MClassKind */;
val* var537 /* : MClassKind */;
val* var538 /* : MClassKind */;
short int var539 /* : Bool */;
short int var540 /* : Bool */;
short int var542 /* : Bool */;
short int var543 /* : Bool */;
short int var544 /* : Bool */;
val* var545 /* : CodeWriter */;
val* var547 /* : CodeWriter */;
static val* varonce548;
val* var549 /* : String */;
char* var550 /* : NativeString */;
long var551 /* : Int */;
val* var552 /* : FlatString */;
static val* varonce553;
val* var554 /* : String */;
char* var555 /* : NativeString */;
long var556 /* : Int */;
val* var557 /* : FlatString */;
val* var558 /* : Array[Object] */;
long var559 /* : Int */;
val* var560 /* : NativeArray[Object] */;
val* var561 /* : String */;
val* var562 /* : CodeWriter */;
val* var564 /* : CodeWriter */;
static val* varonce565;
val* var566 /* : String */;
char* var567 /* : NativeString */;
long var568 /* : Int */;
val* var569 /* : FlatString */;
val* var570 /* : CodeWriter */;
val* var572 /* : CodeWriter */;
val* var573 /* : String */;
static val* varonce574;
val* var575 /* : String */;
char* var576 /* : NativeString */;
long var577 /* : Int */;
val* var578 /* : FlatString */;
val* var579 /* : Array[Object] */;
long var580 /* : Int */;
val* var581 /* : NativeArray[Object] */;
val* var582 /* : String */;
val* var583 /* : CodeWriter */;
val* var585 /* : CodeWriter */;
static val* varonce586;
val* var587 /* : String */;
char* var588 /* : NativeString */;
long var589 /* : Int */;
val* var590 /* : FlatString */;
static val* varonce591;
val* var592 /* : String */;
char* var593 /* : NativeString */;
long var594 /* : Int */;
val* var595 /* : FlatString */;
val* var596 /* : Array[Object] */;
long var597 /* : Int */;
val* var598 /* : NativeArray[Object] */;
val* var599 /* : String */;
static val* varonce600;
val* var601 /* : String */;
char* var602 /* : NativeString */;
long var603 /* : Int */;
val* var604 /* : FlatString */;
static val* varonce605;
val* var606 /* : String */;
char* var607 /* : NativeString */;
long var608 /* : Int */;
val* var609 /* : FlatString */;
val* var610 /* : String */;
static val* varonce611;
val* var612 /* : String */;
char* var613 /* : NativeString */;
long var614 /* : Int */;
val* var615 /* : FlatString */;
val* var616 /* : Array[Object] */;
long var617 /* : Int */;
val* var618 /* : NativeArray[Object] */;
val* var619 /* : String */;
static val* varonce620;
val* var621 /* : String */;
char* var622 /* : NativeString */;
long var623 /* : Int */;
val* var624 /* : FlatString */;
static val* varonce625;
val* var626 /* : String */;
char* var627 /* : NativeString */;
long var628 /* : Int */;
val* var629 /* : FlatString */;
val* var630 /* : Array[Object] */;
long var631 /* : Int */;
val* var632 /* : NativeArray[Object] */;
val* var633 /* : String */;
static val* varonce634;
val* var635 /* : String */;
char* var636 /* : NativeString */;
long var637 /* : Int */;
val* var638 /* : FlatString */;
val* var639 /* : String */;
static val* varonce640;
val* var641 /* : String */;
char* var642 /* : NativeString */;
long var643 /* : Int */;
val* var644 /* : FlatString */;
val* var645 /* : String */;
static val* varonce646;
val* var647 /* : String */;
char* var648 /* : NativeString */;
long var649 /* : Int */;
val* var650 /* : FlatString */;
val* var651 /* : Array[Object] */;
long var652 /* : Int */;
val* var653 /* : NativeArray[Object] */;
val* var654 /* : String */;
static val* varonce655;
val* var656 /* : String */;
char* var657 /* : NativeString */;
long var658 /* : Int */;
val* var659 /* : FlatString */;
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
val* var679 /* : Array[Object] */;
long var680 /* : Int */;
val* var681 /* : NativeArray[Object] */;
val* var682 /* : String */;
static val* varonce683;
val* var684 /* : String */;
char* var685 /* : NativeString */;
long var686 /* : Int */;
val* var687 /* : FlatString */;
static val* varonce688;
val* var689 /* : String */;
char* var690 /* : NativeString */;
long var691 /* : Int */;
val* var692 /* : FlatString */;
val* var693 /* : Array[Object] */;
long var694 /* : Int */;
val* var695 /* : NativeArray[Object] */;
val* var696 /* : String */;
static val* varonce697;
val* var698 /* : String */;
char* var699 /* : NativeString */;
long var700 /* : Int */;
val* var701 /* : FlatString */;
static val* varonce702;
val* var703 /* : String */;
char* var704 /* : NativeString */;
long var705 /* : Int */;
val* var706 /* : FlatString */;
static val* varonce707;
val* var708 /* : String */;
char* var709 /* : NativeString */;
long var710 /* : Int */;
val* var711 /* : FlatString */;
val* var712 /* : String */;
val* var714 /* : String */;
static val* varonce715;
val* var716 /* : String */;
char* var717 /* : NativeString */;
long var718 /* : Int */;
val* var719 /* : FlatString */;
short int var720 /* : Bool */;
short int var721 /* : Bool */;
val* var722 /* : CodeWriter */;
val* var724 /* : CodeWriter */;
static val* varonce725;
val* var726 /* : String */;
char* var727 /* : NativeString */;
long var728 /* : Int */;
val* var729 /* : FlatString */;
static val* varonce730;
val* var731 /* : String */;
char* var732 /* : NativeString */;
long var733 /* : Int */;
val* var734 /* : FlatString */;
val* var735 /* : Array[Object] */;
long var736 /* : Int */;
val* var737 /* : NativeArray[Object] */;
val* var738 /* : String */;
val* var739 /* : CodeWriter */;
val* var741 /* : CodeWriter */;
static val* varonce742;
val* var743 /* : String */;
char* var744 /* : NativeString */;
long var745 /* : Int */;
val* var746 /* : FlatString */;
val* var747 /* : CodeWriter */;
val* var749 /* : CodeWriter */;
static val* varonce750;
val* var751 /* : String */;
char* var752 /* : NativeString */;
long var753 /* : Int */;
val* var754 /* : FlatString */;
val* var755 /* : CodeWriter */;
val* var757 /* : CodeWriter */;
static val* varonce758;
val* var759 /* : String */;
char* var760 /* : NativeString */;
long var761 /* : Int */;
val* var762 /* : FlatString */;
val* var763 /* : CodeWriter */;
val* var765 /* : CodeWriter */;
static val* varonce766;
val* var767 /* : String */;
char* var768 /* : NativeString */;
long var769 /* : Int */;
val* var770 /* : FlatString */;
static val* varonce771;
val* var772 /* : String */;
char* var773 /* : NativeString */;
long var774 /* : Int */;
val* var775 /* : FlatString */;
val* var776 /* : Array[Object] */;
long var777 /* : Int */;
val* var778 /* : NativeArray[Object] */;
val* var779 /* : String */;
val* var780 /* : String */;
static val* varonce781;
val* var782 /* : String */;
char* var783 /* : NativeString */;
long var784 /* : Int */;
val* var785 /* : FlatString */;
static val* varonce786;
val* var787 /* : String */;
char* var788 /* : NativeString */;
long var789 /* : Int */;
val* var790 /* : FlatString */;
val* var791 /* : Array[Object] */;
long var792 /* : Int */;
val* var793 /* : NativeArray[Object] */;
val* var794 /* : String */;
static val* varonce795;
val* var796 /* : String */;
char* var797 /* : NativeString */;
long var798 /* : Int */;
val* var799 /* : FlatString */;
static val* varonce800;
val* var801 /* : String */;
char* var802 /* : NativeString */;
long var803 /* : Int */;
val* var804 /* : FlatString */;
val* var805 /* : Array[Object] */;
long var806 /* : Int */;
val* var807 /* : NativeArray[Object] */;
val* var808 /* : String */;
val* var809 /* : String */;
static val* varonce810;
val* var811 /* : String */;
char* var812 /* : NativeString */;
long var813 /* : Int */;
val* var814 /* : FlatString */;
static val* varonce815;
val* var816 /* : String */;
char* var817 /* : NativeString */;
long var818 /* : Int */;
val* var819 /* : FlatString */;
val* var820 /* : Array[Object] */;
long var821 /* : Int */;
val* var822 /* : NativeArray[Object] */;
val* var823 /* : String */;
static val* varonce824;
val* var825 /* : String */;
char* var826 /* : NativeString */;
long var827 /* : Int */;
val* var828 /* : FlatString */;
val* var829 /* : String */;
val* var_res /* var res: String */;
static val* varonce830;
val* var831 /* : String */;
char* var832 /* : NativeString */;
long var833 /* : Int */;
val* var834 /* : FlatString */;
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
val* var849 /* : Array[MType] */;
val* var851 /* : Array[MType] */;
val* var852 /* : nullable Object */;
val* var_mtype_elt /* var mtype_elt: MType */;
static val* varonce853;
val* var854 /* : String */;
char* var855 /* : NativeString */;
long var856 /* : Int */;
val* var857 /* : FlatString */;
static val* varonce858;
val* var859 /* : String */;
char* var860 /* : NativeString */;
long var861 /* : Int */;
val* var862 /* : FlatString */;
val* var863 /* : String */;
static val* varonce864;
val* var865 /* : String */;
char* var866 /* : NativeString */;
long var867 /* : Int */;
val* var868 /* : FlatString */;
val* var869 /* : Array[Object] */;
long var870 /* : Int */;
val* var871 /* : NativeArray[Object] */;
val* var872 /* : String */;
static val* varonce873;
val* var874 /* : String */;
char* var875 /* : NativeString */;
long var876 /* : Int */;
val* var877 /* : FlatString */;
val* var878 /* : Array[Object] */;
long var879 /* : Int */;
val* var880 /* : NativeArray[Object] */;
val* var881 /* : String */;
static val* varonce882;
val* var883 /* : String */;
char* var884 /* : NativeString */;
long var885 /* : Int */;
val* var886 /* : FlatString */;
static val* varonce887;
val* var888 /* : String */;
char* var889 /* : NativeString */;
long var890 /* : Int */;
val* var891 /* : FlatString */;
val* var892 /* : Array[Object] */;
long var893 /* : Int */;
val* var894 /* : NativeArray[Object] */;
val* var895 /* : String */;
static val* varonce896;
val* var897 /* : String */;
char* var898 /* : NativeString */;
long var899 /* : Int */;
val* var900 /* : FlatString */;
val* var901 /* : Array[Object] */;
long var902 /* : Int */;
val* var903 /* : NativeArray[Object] */;
val* var904 /* : String */;
static val* varonce905;
val* var906 /* : String */;
char* var907 /* : NativeString */;
long var908 /* : Int */;
val* var909 /* : FlatString */;
static val* varonce910;
val* var911 /* : String */;
char* var912 /* : NativeString */;
long var913 /* : Int */;
val* var914 /* : FlatString */;
val* var915 /* : Array[Object] */;
long var916 /* : Int */;
val* var917 /* : NativeArray[Object] */;
val* var918 /* : String */;
static val* varonce919;
val* var920 /* : String */;
char* var921 /* : NativeString */;
long var922 /* : Int */;
val* var923 /* : FlatString */;
static val* varonce924;
val* var925 /* : String */;
char* var926 /* : NativeString */;
long var927 /* : Int */;
val* var928 /* : FlatString */;
val* var929 /* : Array[Object] */;
long var930 /* : Int */;
val* var931 /* : NativeArray[Object] */;
val* var932 /* : String */;
val* var933 /* : String */;
static val* varonce934;
val* var935 /* : String */;
char* var936 /* : NativeString */;
long var937 /* : Int */;
val* var938 /* : FlatString */;
static val* varonce939;
val* var940 /* : String */;
char* var941 /* : NativeString */;
long var942 /* : Int */;
val* var943 /* : FlatString */;
val* var944 /* : Array[Object] */;
long var945 /* : Int */;
val* var946 /* : NativeArray[Object] */;
val* var947 /* : String */;
static val* varonce948;
val* var949 /* : String */;
char* var950 /* : NativeString */;
long var951 /* : Int */;
val* var952 /* : FlatString */;
static val* varonce953;
val* var954 /* : String */;
char* var955 /* : NativeString */;
long var956 /* : Int */;
val* var957 /* : FlatString */;
val* var958 /* : Array[Object] */;
long var959 /* : Int */;
val* var960 /* : NativeArray[Object] */;
val* var961 /* : String */;
val* var962 /* : String */;
static val* varonce963;
val* var964 /* : String */;
char* var965 /* : NativeString */;
long var966 /* : Int */;
val* var967 /* : FlatString */;
static val* varonce968;
val* var969 /* : String */;
char* var970 /* : NativeString */;
long var971 /* : Int */;
val* var972 /* : FlatString */;
val* var973 /* : Array[Object] */;
long var974 /* : Int */;
val* var975 /* : NativeArray[Object] */;
val* var976 /* : String */;
static val* varonce977;
val* var978 /* : String */;
char* var979 /* : NativeString */;
long var980 /* : Int */;
val* var981 /* : FlatString */;
val* var982 /* : Array[Object] */;
long var983 /* : Int */;
val* var984 /* : NativeArray[Object] */;
val* var985 /* : String */;
static val* varonce986;
val* var987 /* : String */;
char* var988 /* : NativeString */;
long var989 /* : Int */;
val* var990 /* : FlatString */;
val* var991 /* : RuntimeVariable */;
val* var_res992 /* var res: RuntimeVariable */;
short int var993 /* : Bool */;
static val* varonce995;
val* var996 /* : String */;
char* var997 /* : NativeString */;
long var998 /* : Int */;
val* var999 /* : FlatString */;
long var1000 /* : Int */;
static val* varonce1001;
val* var1002 /* : String */;
char* var1003 /* : NativeString */;
long var1004 /* : Int */;
val* var1005 /* : FlatString */;
val* var1006 /* : Array[Object] */;
long var1007 /* : Int */;
val* var1008 /* : NativeArray[Object] */;
val* var1009 /* : Object */;
val* var1010 /* : String */;
static val* varonce1011;
val* var1012 /* : String */;
char* var1013 /* : NativeString */;
long var1014 /* : Int */;
val* var1015 /* : FlatString */;
val* var1016 /* : Array[Object] */;
long var1017 /* : Int */;
val* var1018 /* : NativeArray[Object] */;
val* var1019 /* : String */;
static val* varonce1020;
val* var1021 /* : String */;
char* var1022 /* : NativeString */;
long var1023 /* : Int */;
val* var1024 /* : FlatString */;
static val* varonce1025;
val* var1026 /* : String */;
char* var1027 /* : NativeString */;
long var1028 /* : Int */;
val* var1029 /* : FlatString */;
val* var1030 /* : Array[Object] */;
long var1031 /* : Int */;
val* var1032 /* : NativeArray[Object] */;
val* var1033 /* : String */;
static val* varonce1034;
val* var1035 /* : String */;
char* var1036 /* : NativeString */;
long var1037 /* : Int */;
val* var1038 /* : FlatString */;
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
var_mclass = p0;
{
var = model__MClass__intro(var_mclass);
}
{
{ /* Inline model#MClassDef#bound_mtype (var) on <var:MClassDef> */
var3 = var->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var:MClassDef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_mtype = var1;
{
var4 = abstract_compiler__MClass__c_name(var_mclass);
}
var_c_name = var4;
{
var5 = separate_compiler__MClass__c_instance_name(var_mclass);
}
var_c_instance_name = var5;
{
{ /* Inline separate_compiler#SeparateCompiler#method_tables (self) on <self:SeparateErasureCompiler> */
var8 = self->attrs[COLOR_separate_compiler__SeparateCompiler___method_tables].val; /* _method_tables on <self:SeparateErasureCompiler> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _method_tables");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 792);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = ((val* (*)(val*, val*))(var6->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var6, var_mclass) /* [] on <var6:Map[MClass, Array[nullable MPropDef]]>*/;
}
var_vft = var9;
{
{ /* Inline separate_compiler#SeparateCompiler#attr_tables (self) on <self:SeparateErasureCompiler> */
var12 = self->attrs[COLOR_separate_compiler__SeparateCompiler___attr_tables].val; /* _attr_tables on <self:SeparateErasureCompiler> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _attr_tables");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 793);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = ((val* (*)(val*, val*))(var10->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var10, var_mclass) /* [] on <var10:Map[MClass, Array[nullable MPropDef]]>*/;
}
var_attrs = var13;
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#class_tables (self) on <self:SeparateErasureCompiler> */
var16 = self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___class_tables].val; /* _class_tables on <self:SeparateErasureCompiler> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _class_tables");
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 395);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = ((val* (*)(val*, val*))(var14->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var14, var_mclass) /* [] on <var14:Map[MClass, Array[nullable MClass]]>*/;
}
var_class_table = var17;
{
var18 = separate_erasure_compiler__SeparateErasureCompiler__new_visitor(self);
}
var_v = var18;
{
{ /* Inline separate_compiler#SeparateCompiler#runtime_type_analysis (self) on <self:SeparateErasureCompiler> */
var21 = self->attrs[COLOR_separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <self:SeparateErasureCompiler> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
var_rta = var19;
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:MClass> */
var25 = var_mclass->attrs[COLOR_model__MClass___kind].val; /* _kind on <var_mclass:MClass> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 355);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = model__Object__abstract_kind(self);
}
{
{ /* Inline kernel#Object#== (var23,var26) on <var23:MClassKind> */
var_other = var26;
{
{ /* Inline kernel#Object#is_same_instance (var23,var_other) on <var23:MClassKind> */
var32 = var23 == var_other;
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
var_ = var27;
if (var27){
var22 = var_;
} else {
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:MClass> */
var35 = var_mclass->attrs[COLOR_model__MClass___kind].val; /* _kind on <var_mclass:MClass> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 355);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
var36 = model__Object__interface_kind(self);
}
{
{ /* Inline kernel#Object#== (var33,var36) on <var33:MClassKind> */
var_other = var36;
{
{ /* Inline kernel#Object#is_same_instance (var33,var_other) on <var33:MClassKind> */
var42 = var33 == var_other;
var40 = var42;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
var37 = var38;
}
var22 = var37;
}
var_is_dead = var22;
var47 = !var_is_dead;
var_48 = var47;
if (var47){
var49 = NULL;
if (var_rta == NULL) {
var50 = 0; /* is null */
} else {
var50 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_rta,var49) on <var_rta:nullable RapidTypeAnalysis> */
var_other53 = var49;
{
var55 = ((short int (*)(val*, val*))(var_rta->class->vft[COLOR_kernel__Object___61d_61d]))(var_rta, var_other53) /* == on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)>*/;
var54 = var55;
}
var56 = !var54;
var51 = var56;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
var50 = var51;
}
var46 = var50;
} else {
var46 = var_48;
}
var_57 = var46;
if (var46){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_classes (var_rta) on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
var60 = var_rta->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_classes].val; /* _live_classes on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_classes");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 64);
show_backtrace(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
var61 = hash_collection__HashSet__has(var58, var_mclass);
}
var62 = !var61;
var45 = var62;
} else {
var45 = var_57;
}
var_63 = var45;
if (var45){
{
var64 = abstract_compiler__MClassType__ctype(var_mtype);
}
if (varonce) {
var65 = varonce;
} else {
var66 = "val*";
var67 = 4;
var68 = string__NativeString__to_s_with_length(var66, var67);
var65 = var68;
varonce = var65;
}
{
var70 = string__FlatString___61d_61d(var64, var65);
var69 = var70;
}
var44 = var69;
} else {
var44 = var_63;
}
var_71 = var44;
if (var44){
{
{ /* Inline model#MClass#name (var_mclass) on <var_mclass:MClass> */
var74 = var_mclass->attrs[COLOR_model__MClass___name].val; /* _name on <var_mclass:MClass> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 340);
show_backtrace(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
if (varonce75) {
var76 = varonce75;
} else {
var77 = "NativeArray";
var78 = 11;
var79 = string__NativeString__to_s_with_length(var77, var78);
var76 = var79;
varonce75 = var76;
}
{
{ /* Inline kernel#Object#!= (var72,var76) on <var72:String> */
var_other53 = var76;
{
var84 = ((short int (*)(val*, val*))(var72->class->vft[COLOR_kernel__Object___61d_61d]))(var72, var_other53) /* == on <var72:String>*/;
var83 = var84;
}
var85 = !var83;
var81 = var85;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
var80 = var81;
}
var43 = var80;
} else {
var43 = var_71;
}
if (var43){
var86 = 1;
var_is_dead = var86;
} else {
}
if (varonce87) {
var88 = varonce87;
} else {
var89 = "/* runtime class ";
var90 = 17;
var91 = string__NativeString__to_s_with_length(var89, var90);
var88 = var91;
varonce87 = var88;
}
if (varonce92) {
var93 = varonce92;
} else {
var94 = " */";
var95 = 3;
var96 = string__NativeString__to_s_with_length(var94, var95);
var93 = var96;
varonce92 = var93;
}
var97 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var97 = array_instance Array[Object] */
var98 = 3;
var99 = NEW_array__NativeArray(var98, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var99)->values[0] = (val*) var88;
((struct instance_array__NativeArray*)var99)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var99)->values[2] = (val*) var93;
{
((void (*)(val*, val*, long))(var97->class->vft[COLOR_array__Array__with_native]))(var97, var99, var98) /* with_native on <var97:Array[Object]>*/;
}
}
{
var100 = ((val* (*)(val*))(var97->class->vft[COLOR_string__Object__to_s]))(var97) /* to_s on <var97:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var100); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce101) {
var102 = varonce101;
} else {
var103 = "class_";
var104 = 6;
var105 = string__NativeString__to_s_with_length(var103, var104);
var102 = var105;
varonce101 = var102;
}
var106 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var106 = array_instance Array[Object] */
var107 = 2;
var108 = NEW_array__NativeArray(var107, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var108)->values[0] = (val*) var102;
((struct instance_array__NativeArray*)var108)->values[1] = (val*) var_c_name;
{
((void (*)(val*, val*, long))(var106->class->vft[COLOR_array__Array__with_native]))(var106, var108, var107) /* with_native on <var106:Array[Object]>*/;
}
}
{
var109 = ((val* (*)(val*))(var106->class->vft[COLOR_string__Object__to_s]))(var106) /* to_s on <var106:Array[Object]>*/;
}
if (varonce110) {
var111 = varonce110;
} else {
var112 = "extern const struct class class_";
var113 = 32;
var114 = string__NativeString__to_s_with_length(var112, var113);
var111 = var114;
varonce110 = var111;
}
if (varonce115) {
var116 = varonce115;
} else {
var117 = ";";
var118 = 1;
var119 = string__NativeString__to_s_with_length(var117, var118);
var116 = var119;
varonce115 = var116;
}
var120 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var120 = array_instance Array[Object] */
var121 = 3;
var122 = NEW_array__NativeArray(var121, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var122)->values[0] = (val*) var111;
((struct instance_array__NativeArray*)var122)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var122)->values[2] = (val*) var116;
{
((void (*)(val*, val*, long))(var120->class->vft[COLOR_array__Array__with_native]))(var120, var122, var121) /* with_native on <var120:Array[Object]>*/;
}
}
{
var123 = ((val* (*)(val*))(var120->class->vft[COLOR_string__Object__to_s]))(var120) /* to_s on <var120:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompiler__provide_declaration(self, var109, var123); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateErasureCompiler>*/
}
if (varonce124) {
var125 = varonce124;
} else {
var126 = "extern const struct type_table type_table_";
var127 = 42;
var128 = string__NativeString__to_s_with_length(var126, var127);
var125 = var128;
varonce124 = var125;
}
if (varonce129) {
var130 = varonce129;
} else {
var131 = ";";
var132 = 1;
var133 = string__NativeString__to_s_with_length(var131, var132);
var130 = var133;
varonce129 = var130;
}
var134 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var134 = array_instance Array[Object] */
var135 = 3;
var136 = NEW_array__NativeArray(var135, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var136)->values[0] = (val*) var125;
((struct instance_array__NativeArray*)var136)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var136)->values[2] = (val*) var130;
{
((void (*)(val*, val*, long))(var134->class->vft[COLOR_array__Array__with_native]))(var134, var136, var135) /* with_native on <var134:Array[Object]>*/;
}
}
{
var137 = ((val* (*)(val*))(var134->class->vft[COLOR_string__Object__to_s]))(var134) /* to_s on <var134:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var137); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce138) {
var139 = varonce138;
} else {
var140 = "const struct class class_";
var141 = 25;
var142 = string__NativeString__to_s_with_length(var140, var141);
var139 = var142;
varonce138 = var139;
}
if (varonce143) {
var144 = varonce143;
} else {
var145 = " = {";
var146 = 4;
var147 = string__NativeString__to_s_with_length(var145, var146);
var144 = var147;
varonce143 = var144;
}
var148 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var148 = array_instance Array[Object] */
var149 = 3;
var150 = NEW_array__NativeArray(var149, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var150)->values[0] = (val*) var139;
((struct instance_array__NativeArray*)var150)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var150)->values[2] = (val*) var144;
{
((void (*)(val*, val*, long))(var148->class->vft[COLOR_array__Array__with_native]))(var148, var150, var149) /* with_native on <var148:Array[Object]>*/;
}
}
{
var151 = ((val* (*)(val*))(var148->class->vft[COLOR_string__Object__to_s]))(var148) /* to_s on <var148:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var151); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#class_ids (self) on <self:SeparateErasureCompiler> */
var154 = self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___class_ids].val; /* _class_ids on <self:SeparateErasureCompiler> */
if (unlikely(var154 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _class_ids");
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 95);
show_backtrace(1);
}
var152 = var154;
RET_LABEL153:(void)0;
}
}
{
var155 = ((val* (*)(val*, val*))(var152->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var152, var_mclass) /* [] on <var152:Map[MClass, Int]>*/;
}
if (varonce156) {
var157 = varonce156;
} else {
var158 = ",";
var159 = 1;
var160 = string__NativeString__to_s_with_length(var158, var159);
var157 = var160;
varonce156 = var157;
}
var161 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var161 = array_instance Array[Object] */
var162 = 2;
var163 = NEW_array__NativeArray(var162, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var163)->values[0] = (val*) var155;
((struct instance_array__NativeArray*)var163)->values[1] = (val*) var157;
{
((void (*)(val*, val*, long))(var161->class->vft[COLOR_array__Array__with_native]))(var161, var163, var162) /* with_native on <var161:Array[Object]>*/;
}
}
{
var164 = ((val* (*)(val*))(var161->class->vft[COLOR_string__Object__to_s]))(var161) /* to_s on <var161:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var164); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce165) {
var166 = varonce165;
} else {
var167 = "\"";
var168 = 1;
var169 = string__NativeString__to_s_with_length(var167, var168);
var166 = var169;
varonce165 = var166;
}
{
{ /* Inline model#MClass#name (var_mclass) on <var_mclass:MClass> */
var172 = var_mclass->attrs[COLOR_model__MClass___name].val; /* _name on <var_mclass:MClass> */
if (unlikely(var172 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 340);
show_backtrace(1);
}
var170 = var172;
RET_LABEL171:(void)0;
}
}
if (varonce173) {
var174 = varonce173;
} else {
var175 = "\", /* class_name_string */";
var176 = 26;
var177 = string__NativeString__to_s_with_length(var175, var176);
var174 = var177;
varonce173 = var174;
}
var178 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var178 = array_instance Array[Object] */
var179 = 3;
var180 = NEW_array__NativeArray(var179, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var180)->values[0] = (val*) var166;
((struct instance_array__NativeArray*)var180)->values[1] = (val*) var170;
((struct instance_array__NativeArray*)var180)->values[2] = (val*) var174;
{
((void (*)(val*, val*, long))(var178->class->vft[COLOR_array__Array__with_native]))(var178, var180, var179) /* with_native on <var178:Array[Object]>*/;
}
}
{
var181 = ((val* (*)(val*))(var178->class->vft[COLOR_string__Object__to_s]))(var178) /* to_s on <var178:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var181); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
var182 = separate_compiler__SeparateCompiler__box_kind_of(self, var_mclass);
}
if (varonce183) {
var184 = varonce183;
} else {
var185 = ", /* box_kind */";
var186 = 16;
var187 = string__NativeString__to_s_with_length(var185, var186);
var184 = var187;
varonce183 = var184;
}
var188 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var188 = array_instance Array[Object] */
var189 = 2;
var190 = NEW_array__NativeArray(var189, &type_array__NativeArraykernel__Object);
var191 = BOX_kernel__Int(var182); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var190)->values[0] = (val*) var191;
((struct instance_array__NativeArray*)var190)->values[1] = (val*) var184;
{
((void (*)(val*, val*, long))(var188->class->vft[COLOR_array__Array__with_native]))(var188, var190, var189) /* with_native on <var188:Array[Object]>*/;
}
}
{
var192 = ((val* (*)(val*))(var188->class->vft[COLOR_string__Object__to_s]))(var188) /* to_s on <var188:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var192); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#class_colors (self) on <self:SeparateErasureCompiler> */
var195 = self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___class_colors].val; /* _class_colors on <self:SeparateErasureCompiler> */
if (unlikely(var195 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _class_colors");
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 96);
show_backtrace(1);
}
var193 = var195;
RET_LABEL194:(void)0;
}
}
{
var196 = ((val* (*)(val*, val*))(var193->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var193, var_mclass) /* [] on <var193:Map[MClass, Int]>*/;
}
if (varonce197) {
var198 = varonce197;
} else {
var199 = ",";
var200 = 1;
var201 = string__NativeString__to_s_with_length(var199, var200);
var198 = var201;
varonce197 = var198;
}
var202 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var202 = array_instance Array[Object] */
var203 = 2;
var204 = NEW_array__NativeArray(var203, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var204)->values[0] = (val*) var196;
((struct instance_array__NativeArray*)var204)->values[1] = (val*) var198;
{
((void (*)(val*, val*, long))(var202->class->vft[COLOR_array__Array__with_native]))(var202, var204, var203) /* with_native on <var202:Array[Object]>*/;
}
}
{
var205 = ((val* (*)(val*))(var202->class->vft[COLOR_string__Object__to_s]))(var202) /* to_s on <var202:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var205); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
var206 = !var_is_dead;
if (var206){
{
var207 = separate_erasure_compiler__SeparateErasureCompiler__build_class_vts_table(self, var_mclass);
}
if (var207){
if (varonce208) {
var209 = varonce208;
} else {
var210 = "vts_table_";
var211 = 10;
var212 = string__NativeString__to_s_with_length(var210, var211);
var209 = var212;
varonce208 = var209;
}
var213 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var213 = array_instance Array[Object] */
var214 = 2;
var215 = NEW_array__NativeArray(var214, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var215)->values[0] = (val*) var209;
((struct instance_array__NativeArray*)var215)->values[1] = (val*) var_c_name;
{
((void (*)(val*, val*, long))(var213->class->vft[COLOR_array__Array__with_native]))(var213, var215, var214) /* with_native on <var213:Array[Object]>*/;
}
}
{
var216 = ((val* (*)(val*))(var213->class->vft[COLOR_string__Object__to_s]))(var213) /* to_s on <var213:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(var_v, var216); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (varonce217) {
var218 = varonce217;
} else {
var219 = "&vts_table_";
var220 = 11;
var221 = string__NativeString__to_s_with_length(var219, var220);
var218 = var221;
varonce217 = var218;
}
if (varonce222) {
var223 = varonce222;
} else {
var224 = ",";
var225 = 1;
var226 = string__NativeString__to_s_with_length(var224, var225);
var223 = var226;
varonce222 = var223;
}
var227 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var227 = array_instance Array[Object] */
var228 = 3;
var229 = NEW_array__NativeArray(var228, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var229)->values[0] = (val*) var218;
((struct instance_array__NativeArray*)var229)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var229)->values[2] = (val*) var223;
{
((void (*)(val*, val*, long))(var227->class->vft[COLOR_array__Array__with_native]))(var227, var229, var228) /* with_native on <var227:Array[Object]>*/;
}
}
{
var230 = ((val* (*)(val*))(var227->class->vft[COLOR_string__Object__to_s]))(var227) /* to_s on <var227:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var230); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (varonce231) {
var232 = varonce231;
} else {
var233 = "NULL,";
var234 = 5;
var235 = string__NativeString__to_s_with_length(var233, var234);
var232 = var235;
varonce231 = var232;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var232); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
if (varonce236) {
var237 = varonce236;
} else {
var238 = "&type_table_";
var239 = 12;
var240 = string__NativeString__to_s_with_length(var238, var239);
var237 = var240;
varonce236 = var237;
}
if (varonce241) {
var242 = varonce241;
} else {
var243 = ",";
var244 = 1;
var245 = string__NativeString__to_s_with_length(var243, var244);
var242 = var245;
varonce241 = var242;
}
var246 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var246 = array_instance Array[Object] */
var247 = 3;
var248 = NEW_array__NativeArray(var247, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var248)->values[0] = (val*) var237;
((struct instance_array__NativeArray*)var248)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var248)->values[2] = (val*) var242;
{
((void (*)(val*, val*, long))(var246->class->vft[COLOR_array__Array__with_native]))(var246, var248, var247) /* with_native on <var246:Array[Object]>*/;
}
}
{
var249 = ((val* (*)(val*))(var246->class->vft[COLOR_string__Object__to_s]))(var246) /* to_s on <var246:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var249); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce250) {
var251 = varonce250;
} else {
var252 = "{";
var253 = 1;
var254 = string__NativeString__to_s_with_length(var252, var253);
var251 = var254;
varonce250 = var251;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var251); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
var255 = NEW_range__Range(&type_range__Rangekernel__Int);
var256 = 0;
{
var257 = array__AbstractArrayRead__length(var_vft);
}
{
var258 = BOX_kernel__Int(var256); /* autobox from Int to Discrete */
var259 = BOX_kernel__Int(var257); /* autobox from Int to Discrete */
range__Range__without_last(var255, var258, var259); /* Direct call range#Range#without_last on <var255:Range[Int]>*/
}
{
var260 = range__Range__iterator(var255);
}
for(;;) {
{
var261 = ((short int (*)(val*))(var260->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var260) /* is_ok on <var260:Iterator[Discrete]>*/;
}
if(!var261) break;
{
var262 = ((val* (*)(val*))(var260->class->vft[COLOR_abstract_collection__Iterator__item]))(var260) /* item on <var260:Iterator[Discrete]>*/;
}
var263 = ((struct instance_kernel__Int*)var262)->value; /* autounbox from nullable Object to Int */;
var_i = var263;
{
var264 = array__Array___91d_93d(var_vft, var_i);
}
var_mpropdef = var264;
var265 = NULL;
if (var_mpropdef == NULL) {
var266 = 1; /* is null */
} else {
var266 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mpropdef,var265) on <var_mpropdef:nullable MPropDef> */
var_other = var265;
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other) on <var_mpropdef:nullable MPropDef(MPropDef)> */
var271 = var_mpropdef == var_other;
var269 = var271;
goto RET_LABEL270;
RET_LABEL270:(void)0;
}
}
var267 = var269;
goto RET_LABEL268;
RET_LABEL268:(void)0;
}
var266 = var267;
}
if (var266){
if (varonce272) {
var273 = varonce272;
} else {
var274 = "NULL, /* empty */";
var275 = 17;
var276 = string__NativeString__to_s_with_length(var274, var275);
var273 = var276;
varonce272 = var273;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var273); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
/* <var_mpropdef:nullable MPropDef(MPropDef)> isa MMethodDef */
cltype = type_model__MMethodDef.color;
idtype = type_model__MMethodDef.id;
if(cltype >= var_mpropdef->type->table_size) {
var277 = 0;
} else {
var277 = var_mpropdef->type->type_table[cltype] == idtype;
}
if (unlikely(!var277)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 251);
show_backtrace(1);
}
var279 = NULL;
if (var_rta == NULL) {
var280 = 0; /* is null */
} else {
var280 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_rta,var279) on <var_rta:nullable RapidTypeAnalysis> */
var_other53 = var279;
{
var284 = ((short int (*)(val*, val*))(var_rta->class->vft[COLOR_kernel__Object___61d_61d]))(var_rta, var_other53) /* == on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)>*/;
var283 = var284;
}
var285 = !var283;
var281 = var285;
goto RET_LABEL282;
RET_LABEL282:(void)0;
}
var280 = var281;
}
var_286 = var280;
if (var280){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_methoddefs (var_rta) on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
var289 = var_rta->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_methoddefs].val; /* _live_methoddefs on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
if (unlikely(var289 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methoddefs");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 74);
show_backtrace(1);
}
var287 = var289;
RET_LABEL288:(void)0;
}
}
{
var290 = hash_collection__HashSet__has(var287, var_mpropdef);
}
var291 = !var290;
var278 = var291;
} else {
var278 = var_286;
}
if (var278){
if (varonce292) {
var293 = varonce292;
} else {
var294 = "NULL, /* DEAD ";
var295 = 14;
var296 = string__NativeString__to_s_with_length(var294, var295);
var293 = var296;
varonce292 = var293;
}
{
{ /* Inline model#MClass#intro_mmodule (var_mclass) on <var_mclass:MClass> */
var299 = var_mclass->attrs[COLOR_model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_mclass:MClass> */
if (unlikely(var299 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 335);
show_backtrace(1);
}
var297 = var299;
RET_LABEL298:(void)0;
}
}
if (varonce300) {
var301 = varonce300;
} else {
var302 = ":";
var303 = 1;
var304 = string__NativeString__to_s_with_length(var302, var303);
var301 = var304;
varonce300 = var301;
}
if (varonce305) {
var306 = varonce305;
} else {
var307 = ":";
var308 = 1;
var309 = string__NativeString__to_s_with_length(var307, var308);
var306 = var309;
varonce305 = var306;
}
if (varonce310) {
var311 = varonce310;
} else {
var312 = " */";
var313 = 3;
var314 = string__NativeString__to_s_with_length(var312, var313);
var311 = var314;
varonce310 = var311;
}
var315 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var315 = array_instance Array[Object] */
var316 = 7;
var317 = NEW_array__NativeArray(var316, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var317)->values[0] = (val*) var293;
((struct instance_array__NativeArray*)var317)->values[1] = (val*) var297;
((struct instance_array__NativeArray*)var317)->values[2] = (val*) var301;
((struct instance_array__NativeArray*)var317)->values[3] = (val*) var_mclass;
((struct instance_array__NativeArray*)var317)->values[4] = (val*) var306;
((struct instance_array__NativeArray*)var317)->values[5] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var317)->values[6] = (val*) var311;
{
((void (*)(val*, val*, long))(var315->class->vft[COLOR_array__Array__with_native]))(var315, var317, var316) /* with_native on <var315:Array[Object]>*/;
}
}
{
var318 = ((val* (*)(val*))(var315->class->vft[COLOR_string__Object__to_s]))(var315) /* to_s on <var315:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var318); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
goto CONTINUE_label;
} else {
}
var320 = 1;
var_321 = var320;
if (var320){
var319 = var_321;
} else {
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var324 = var_mpropdef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MPropDef(MMethodDef)> */
if (unlikely(var324 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var322 = var324;
RET_LABEL323:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var322) on <var322:MClassDef> */
var327 = var322->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var322:MClassDef> */
if (unlikely(var327 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var325 = var327;
RET_LABEL326:(void)0;
}
}
{
var328 = abstract_compiler__MClassType__ctype(var325);
}
if (varonce329) {
var330 = varonce329;
} else {
var331 = "val*";
var332 = 4;
var333 = string__NativeString__to_s_with_length(var331, var332);
var330 = var333;
varonce329 = var330;
}
{
{ /* Inline kernel#Object#!= (var328,var330) on <var328:String> */
var_other53 = var330;
{
var338 = ((short int (*)(val*, val*))(var328->class->vft[COLOR_kernel__Object___61d_61d]))(var328, var_other53) /* == on <var328:String>*/;
var337 = var338;
}
var339 = !var337;
var335 = var339;
goto RET_LABEL336;
RET_LABEL336:(void)0;
}
var334 = var335;
}
var319 = var334;
}
if (var319){
if (varonce340) {
var341 = varonce340;
} else {
var342 = "VIRTUAL_";
var343 = 8;
var344 = string__NativeString__to_s_with_length(var342, var343);
var341 = var344;
varonce340 = var341;
}
{
var345 = abstract_compiler__MPropDef__c_name(var_mpropdef);
}
var346 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var346 = array_instance Array[Object] */
var347 = 2;
var348 = NEW_array__NativeArray(var347, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var348)->values[0] = (val*) var341;
((struct instance_array__NativeArray*)var348)->values[1] = (val*) var345;
{
((void (*)(val*, val*, long))(var346->class->vft[COLOR_array__Array__with_native]))(var346, var348, var347) /* with_native on <var346:Array[Object]>*/;
}
}
{
var349 = ((val* (*)(val*))(var346->class->vft[COLOR_string__Object__to_s]))(var346) /* to_s on <var346:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(var_v, var349); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (varonce350) {
var351 = varonce350;
} else {
var352 = "(nitmethod_t)VIRTUAL_";
var353 = 21;
var354 = string__NativeString__to_s_with_length(var352, var353);
var351 = var354;
varonce350 = var351;
}
{
var355 = abstract_compiler__MPropDef__c_name(var_mpropdef);
}
if (varonce356) {
var357 = varonce356;
} else {
var358 = ", /* pointer to ";
var359 = 16;
var360 = string__NativeString__to_s_with_length(var358, var359);
var357 = var360;
varonce356 = var357;
}
{
{ /* Inline model#MClass#intro_mmodule (var_mclass) on <var_mclass:MClass> */
var363 = var_mclass->attrs[COLOR_model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_mclass:MClass> */
if (unlikely(var363 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 335);
show_backtrace(1);
}
var361 = var363;
RET_LABEL362:(void)0;
}
}
if (varonce364) {
var365 = varonce364;
} else {
var366 = ":";
var367 = 1;
var368 = string__NativeString__to_s_with_length(var366, var367);
var365 = var368;
varonce364 = var365;
}
if (varonce369) {
var370 = varonce369;
} else {
var371 = ":";
var372 = 1;
var373 = string__NativeString__to_s_with_length(var371, var372);
var370 = var373;
varonce369 = var370;
}
if (varonce374) {
var375 = varonce374;
} else {
var376 = " */";
var377 = 3;
var378 = string__NativeString__to_s_with_length(var376, var377);
var375 = var378;
varonce374 = var375;
}
var379 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var379 = array_instance Array[Object] */
var380 = 9;
var381 = NEW_array__NativeArray(var380, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var381)->values[0] = (val*) var351;
((struct instance_array__NativeArray*)var381)->values[1] = (val*) var355;
((struct instance_array__NativeArray*)var381)->values[2] = (val*) var357;
((struct instance_array__NativeArray*)var381)->values[3] = (val*) var361;
((struct instance_array__NativeArray*)var381)->values[4] = (val*) var365;
((struct instance_array__NativeArray*)var381)->values[5] = (val*) var_mclass;
((struct instance_array__NativeArray*)var381)->values[6] = (val*) var370;
((struct instance_array__NativeArray*)var381)->values[7] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var381)->values[8] = (val*) var375;
{
((void (*)(val*, val*, long))(var379->class->vft[COLOR_array__Array__with_native]))(var379, var381, var380) /* with_native on <var379:Array[Object]>*/;
}
}
{
var382 = ((val* (*)(val*))(var379->class->vft[COLOR_string__Object__to_s]))(var379) /* to_s on <var379:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var382); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
{
var383 = abstract_compiler__MPropDef__c_name(var_mpropdef);
}
var384 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var384 = array_instance Array[Object] */
var385 = 1;
var386 = NEW_array__NativeArray(var385, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var386)->values[0] = (val*) var383;
{
((void (*)(val*, val*, long))(var384->class->vft[COLOR_array__Array__with_native]))(var384, var386, var385) /* with_native on <var384:Array[Object]>*/;
}
}
{
var387 = ((val* (*)(val*))(var384->class->vft[COLOR_string__Object__to_s]))(var384) /* to_s on <var384:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(var_v, var387); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (varonce388) {
var389 = varonce388;
} else {
var390 = "(nitmethod_t)";
var391 = 13;
var392 = string__NativeString__to_s_with_length(var390, var391);
var389 = var392;
varonce388 = var389;
}
{
var393 = abstract_compiler__MPropDef__c_name(var_mpropdef);
}
if (varonce394) {
var395 = varonce394;
} else {
var396 = ", /* pointer to ";
var397 = 16;
var398 = string__NativeString__to_s_with_length(var396, var397);
var395 = var398;
varonce394 = var395;
}
{
{ /* Inline model#MClass#intro_mmodule (var_mclass) on <var_mclass:MClass> */
var401 = var_mclass->attrs[COLOR_model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_mclass:MClass> */
if (unlikely(var401 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 335);
show_backtrace(1);
}
var399 = var401;
RET_LABEL400:(void)0;
}
}
if (varonce402) {
var403 = varonce402;
} else {
var404 = ":";
var405 = 1;
var406 = string__NativeString__to_s_with_length(var404, var405);
var403 = var406;
varonce402 = var403;
}
if (varonce407) {
var408 = varonce407;
} else {
var409 = ":";
var410 = 1;
var411 = string__NativeString__to_s_with_length(var409, var410);
var408 = var411;
varonce407 = var408;
}
if (varonce412) {
var413 = varonce412;
} else {
var414 = " */";
var415 = 3;
var416 = string__NativeString__to_s_with_length(var414, var415);
var413 = var416;
varonce412 = var413;
}
var417 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var417 = array_instance Array[Object] */
var418 = 9;
var419 = NEW_array__NativeArray(var418, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var419)->values[0] = (val*) var389;
((struct instance_array__NativeArray*)var419)->values[1] = (val*) var393;
((struct instance_array__NativeArray*)var419)->values[2] = (val*) var395;
((struct instance_array__NativeArray*)var419)->values[3] = (val*) var399;
((struct instance_array__NativeArray*)var419)->values[4] = (val*) var403;
((struct instance_array__NativeArray*)var419)->values[5] = (val*) var_mclass;
((struct instance_array__NativeArray*)var419)->values[6] = (val*) var408;
((struct instance_array__NativeArray*)var419)->values[7] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var419)->values[8] = (val*) var413;
{
((void (*)(val*, val*, long))(var417->class->vft[COLOR_array__Array__with_native]))(var417, var419, var418) /* with_native on <var417:Array[Object]>*/;
}
}
{
var420 = ((val* (*)(val*))(var417->class->vft[COLOR_string__Object__to_s]))(var417) /* to_s on <var417:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var420); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var260->class->vft[COLOR_abstract_collection__Iterator__next]))(var260) /* next on <var260:Iterator[Discrete]>*/;
}
}
BREAK_label: (void)0;
if (varonce421) {
var422 = varonce421;
} else {
var423 = "}";
var424 = 1;
var425 = string__NativeString__to_s_with_length(var423, var424);
var422 = var425;
varonce421 = var422;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var422); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
}
if (varonce426) {
var427 = varonce426;
} else {
var428 = "};";
var429 = 2;
var430 = string__NativeString__to_s_with_length(var428, var429);
var427 = var430;
varonce426 = var427;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var427); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce431) {
var432 = varonce431;
} else {
var433 = "const struct type_table type_table_";
var434 = 35;
var435 = string__NativeString__to_s_with_length(var433, var434);
var432 = var435;
varonce431 = var432;
}
if (varonce436) {
var437 = varonce436;
} else {
var438 = " = {";
var439 = 4;
var440 = string__NativeString__to_s_with_length(var438, var439);
var437 = var440;
varonce436 = var437;
}
var441 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var441 = array_instance Array[Object] */
var442 = 3;
var443 = NEW_array__NativeArray(var442, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var443)->values[0] = (val*) var432;
((struct instance_array__NativeArray*)var443)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var443)->values[2] = (val*) var437;
{
((void (*)(val*, val*, long))(var441->class->vft[COLOR_array__Array__with_native]))(var441, var443, var442) /* with_native on <var441:Array[Object]>*/;
}
}
{
var444 = ((val* (*)(val*))(var441->class->vft[COLOR_string__Object__to_s]))(var441) /* to_s on <var441:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var444); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
var445 = array__AbstractArrayRead__length(var_class_table);
}
if (varonce446) {
var447 = varonce446;
} else {
var448 = ",";
var449 = 1;
var450 = string__NativeString__to_s_with_length(var448, var449);
var447 = var450;
varonce446 = var447;
}
var451 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var451 = array_instance Array[Object] */
var452 = 2;
var453 = NEW_array__NativeArray(var452, &type_array__NativeArraykernel__Object);
var454 = BOX_kernel__Int(var445); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var453)->values[0] = (val*) var454;
((struct instance_array__NativeArray*)var453)->values[1] = (val*) var447;
{
((void (*)(val*, val*, long))(var451->class->vft[COLOR_array__Array__with_native]))(var451, var453, var452) /* with_native on <var451:Array[Object]>*/;
}
}
{
var455 = ((val* (*)(val*))(var451->class->vft[COLOR_string__Object__to_s]))(var451) /* to_s on <var451:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var455); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce456) {
var457 = varonce456;
} else {
var458 = "{";
var459 = 1;
var460 = string__NativeString__to_s_with_length(var458, var459);
var457 = var460;
varonce456 = var457;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var457); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
var461 = array__AbstractArrayRead__iterator(var_class_table);
}
for(;;) {
{
var462 = array__ArrayIterator__is_ok(var461);
}
if(!var462) break;
{
var463 = array__ArrayIterator__item(var461);
}
var_msuper = var463;
var464 = NULL;
if (var_msuper == NULL) {
var465 = 1; /* is null */
} else {
var465 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_msuper,var464) on <var_msuper:nullable MClass> */
var_other = var464;
{
{ /* Inline kernel#Object#is_same_instance (var_msuper,var_other) on <var_msuper:nullable MClass(MClass)> */
var470 = var_msuper == var_other;
var468 = var470;
goto RET_LABEL469;
RET_LABEL469:(void)0;
}
}
var466 = var468;
goto RET_LABEL467;
RET_LABEL467:(void)0;
}
var465 = var466;
}
if (var465){
if (varonce471) {
var472 = varonce471;
} else {
var473 = "-1, /* empty */";
var474 = 15;
var475 = string__NativeString__to_s_with_length(var473, var474);
var472 = var475;
varonce471 = var472;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var472); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#class_ids (self) on <self:SeparateErasureCompiler> */
var478 = self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___class_ids].val; /* _class_ids on <self:SeparateErasureCompiler> */
if (unlikely(var478 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _class_ids");
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 95);
show_backtrace(1);
}
var476 = var478;
RET_LABEL477:(void)0;
}
}
{
var479 = ((val* (*)(val*, val*))(var476->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var476, var_msuper) /* [] on <var476:Map[MClass, Int]>*/;
}
if (varonce480) {
var481 = varonce480;
} else {
var482 = ", /* ";
var483 = 5;
var484 = string__NativeString__to_s_with_length(var482, var483);
var481 = var484;
varonce480 = var481;
}
if (varonce485) {
var486 = varonce485;
} else {
var487 = " */";
var488 = 3;
var489 = string__NativeString__to_s_with_length(var487, var488);
var486 = var489;
varonce485 = var486;
}
var490 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var490 = array_instance Array[Object] */
var491 = 4;
var492 = NEW_array__NativeArray(var491, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var492)->values[0] = (val*) var479;
((struct instance_array__NativeArray*)var492)->values[1] = (val*) var481;
((struct instance_array__NativeArray*)var492)->values[2] = (val*) var_msuper;
((struct instance_array__NativeArray*)var492)->values[3] = (val*) var486;
{
((void (*)(val*, val*, long))(var490->class->vft[COLOR_array__Array__with_native]))(var490, var492, var491) /* with_native on <var490:Array[Object]>*/;
}
}
{
var493 = ((val* (*)(val*))(var490->class->vft[COLOR_string__Object__to_s]))(var490) /* to_s on <var490:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var493); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
CONTINUE_label494: (void)0;
{
array__ArrayIterator__next(var461); /* Direct call array#ArrayIterator#next on <var461:ArrayIterator[nullable Object]>*/
}
}
BREAK_label494: (void)0;
if (varonce495) {
var496 = varonce495;
} else {
var497 = "}";
var498 = 1;
var499 = string__NativeString__to_s_with_length(var497, var498);
var496 = var499;
varonce495 = var496;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var496); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce500) {
var501 = varonce500;
} else {
var502 = "};";
var503 = 2;
var504 = string__NativeString__to_s_with_length(var502, var503);
var501 = var504;
varonce500 = var501;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var501); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
var505 = abstract_compiler__MClassType__ctype(var_mtype);
}
if (varonce506) {
var507 = varonce506;
} else {
var508 = "val*";
var509 = 4;
var510 = string__NativeString__to_s_with_length(var508, var509);
var507 = var510;
varonce506 = var507;
}
{
{ /* Inline kernel#Object#!= (var505,var507) on <var505:String> */
var_other53 = var507;
{
var515 = ((short int (*)(val*, val*))(var505->class->vft[COLOR_kernel__Object___61d_61d]))(var505, var_other53) /* == on <var505:String>*/;
var514 = var515;
}
var516 = !var514;
var512 = var516;
goto RET_LABEL513;
RET_LABEL513:(void)0;
}
var511 = var512;
}
if (var511){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var520 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var520 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var518 = var520;
RET_LABEL519:(void)0;
}
}
{
{ /* Inline model#MClass#name (var518) on <var518:MClass> */
var523 = var518->attrs[COLOR_model__MClass___name].val; /* _name on <var518:MClass> */
if (unlikely(var523 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 340);
show_backtrace(1);
}
var521 = var523;
RET_LABEL522:(void)0;
}
}
if (varonce524) {
var525 = varonce524;
} else {
var526 = "Pointer";
var527 = 7;
var528 = string__NativeString__to_s_with_length(var526, var527);
var525 = var528;
varonce524 = var525;
}
{
var530 = string__FlatString___61d_61d(var521, var525);
var529 = var530;
}
var_531 = var529;
if (var529){
var517 = var_531;
} else {
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var534 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var534 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var532 = var534;
RET_LABEL533:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var532) on <var532:MClass> */
var537 = var532->attrs[COLOR_model__MClass___kind].val; /* _kind on <var532:MClass> */
if (unlikely(var537 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 355);
show_backtrace(1);
}
var535 = var537;
RET_LABEL536:(void)0;
}
}
{
var538 = model__Object__extern_kind(self);
}
{
{ /* Inline kernel#Object#!= (var535,var538) on <var535:MClassKind> */
var_other53 = var538;
{
var543 = ((short int (*)(val*, val*))(var535->class->vft[COLOR_kernel__Object___61d_61d]))(var535, var_other53) /* == on <var535:MClassKind>*/;
var542 = var543;
}
var544 = !var542;
var540 = var544;
goto RET_LABEL541;
RET_LABEL541:(void)0;
}
var539 = var540;
}
var517 = var539;
}
if (var517){
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var547 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var547 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var545 = var547;
RET_LABEL546:(void)0;
}
}
if (varonce548) {
var549 = varonce548;
} else {
var550 = "struct instance_";
var551 = 16;
var552 = string__NativeString__to_s_with_length(var550, var551);
var549 = var552;
varonce548 = var549;
}
if (varonce553) {
var554 = varonce553;
} else {
var555 = " {";
var556 = 2;
var557 = string__NativeString__to_s_with_length(var555, var556);
var554 = var557;
varonce553 = var554;
}
var558 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var558 = array_instance Array[Object] */
var559 = 3;
var560 = NEW_array__NativeArray(var559, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var560)->values[0] = (val*) var549;
((struct instance_array__NativeArray*)var560)->values[1] = (val*) var_c_instance_name;
((struct instance_array__NativeArray*)var560)->values[2] = (val*) var554;
{
((void (*)(val*, val*, long))(var558->class->vft[COLOR_array__Array__with_native]))(var558, var560, var559) /* with_native on <var558:Array[Object]>*/;
}
}
{
var561 = ((val* (*)(val*))(var558->class->vft[COLOR_string__Object__to_s]))(var558) /* to_s on <var558:Array[Object]>*/;
}
{
abstract_compiler__CodeWriter__add_decl(var545, var561); /* Direct call abstract_compiler#CodeWriter#add_decl on <var545:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var564 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var564 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var562 = var564;
RET_LABEL563:(void)0;
}
}
if (varonce565) {
var566 = varonce565;
} else {
var567 = "const struct class *class;";
var568 = 26;
var569 = string__NativeString__to_s_with_length(var567, var568);
var566 = var569;
varonce565 = var566;
}
{
abstract_compiler__CodeWriter__add_decl(var562, var566); /* Direct call abstract_compiler#CodeWriter#add_decl on <var562:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var572 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var572 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var570 = var572;
RET_LABEL571:(void)0;
}
}
{
var573 = abstract_compiler__MClassType__ctype(var_mtype);
}
if (varonce574) {
var575 = varonce574;
} else {
var576 = " value;";
var577 = 7;
var578 = string__NativeString__to_s_with_length(var576, var577);
var575 = var578;
varonce574 = var575;
}
var579 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var579 = array_instance Array[Object] */
var580 = 2;
var581 = NEW_array__NativeArray(var580, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var581)->values[0] = (val*) var573;
((struct instance_array__NativeArray*)var581)->values[1] = (val*) var575;
{
((void (*)(val*, val*, long))(var579->class->vft[COLOR_array__Array__with_native]))(var579, var581, var580) /* with_native on <var579:Array[Object]>*/;
}
}
{
var582 = ((val* (*)(val*))(var579->class->vft[COLOR_string__Object__to_s]))(var579) /* to_s on <var579:Array[Object]>*/;
}
{
abstract_compiler__CodeWriter__add_decl(var570, var582); /* Direct call abstract_compiler#CodeWriter#add_decl on <var570:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var585 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var585 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var583 = var585;
RET_LABEL584:(void)0;
}
}
if (varonce586) {
var587 = varonce586;
} else {
var588 = "};";
var589 = 2;
var590 = string__NativeString__to_s_with_length(var588, var589);
var587 = var590;
varonce586 = var587;
}
{
abstract_compiler__CodeWriter__add_decl(var583, var587); /* Direct call abstract_compiler#CodeWriter#add_decl on <var583:CodeWriter>*/
}
} else {
}
if (varonce591) {
var592 = varonce591;
} else {
var593 = "BOX_";
var594 = 4;
var595 = string__NativeString__to_s_with_length(var593, var594);
var592 = var595;
varonce591 = var592;
}
var596 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var596 = array_instance Array[Object] */
var597 = 2;
var598 = NEW_array__NativeArray(var597, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var598)->values[0] = (val*) var592;
((struct instance_array__NativeArray*)var598)->values[1] = (val*) var_c_name;
{
((void (*)(val*, val*, long))(var596->class->vft[COLOR_array__Array__with_native]))(var596, var598, var597) /* with_native on <var596:Array[Object]>*/;
}
}
{
var599 = ((val* (*)(val*))(var596->class->vft[COLOR_string__Object__to_s]))(var596) /* to_s on <var596:Array[Object]>*/;
}
if (varonce600) {
var601 = varonce600;
} else {
var602 = "val* BOX_";
var603 = 9;
var604 = string__NativeString__to_s_with_length(var602, var603);
var601 = var604;
varonce600 = var601;
}
if (varonce605) {
var606 = varonce605;
} else {
var607 = "(";
var608 = 1;
var609 = string__NativeString__to_s_with_length(var607, var608);
var606 = var609;
varonce605 = var606;
}
{
var610 = abstract_compiler__MClassType__ctype(var_mtype);
}
if (varonce611) {
var612 = varonce611;
} else {
var613 = ");";
var614 = 2;
var615 = string__NativeString__to_s_with_length(var613, var614);
var612 = var615;
varonce611 = var612;
}
var616 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var616 = array_instance Array[Object] */
var617 = 5;
var618 = NEW_array__NativeArray(var617, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var618)->values[0] = (val*) var601;
((struct instance_array__NativeArray*)var618)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var618)->values[2] = (val*) var606;
((struct instance_array__NativeArray*)var618)->values[3] = (val*) var610;
((struct instance_array__NativeArray*)var618)->values[4] = (val*) var612;
{
((void (*)(val*, val*, long))(var616->class->vft[COLOR_array__Array__with_native]))(var616, var618, var617) /* with_native on <var616:Array[Object]>*/;
}
}
{
var619 = ((val* (*)(val*))(var616->class->vft[COLOR_string__Object__to_s]))(var616) /* to_s on <var616:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompiler__provide_declaration(self, var599, var619); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateErasureCompiler>*/
}
if (varonce620) {
var621 = varonce620;
} else {
var622 = "/* allocate ";
var623 = 12;
var624 = string__NativeString__to_s_with_length(var622, var623);
var621 = var624;
varonce620 = var621;
}
if (varonce625) {
var626 = varonce625;
} else {
var627 = " */";
var628 = 3;
var629 = string__NativeString__to_s_with_length(var627, var628);
var626 = var629;
varonce625 = var626;
}
var630 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var630 = array_instance Array[Object] */
var631 = 3;
var632 = NEW_array__NativeArray(var631, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var632)->values[0] = (val*) var621;
((struct instance_array__NativeArray*)var632)->values[1] = (val*) var_mtype;
((struct instance_array__NativeArray*)var632)->values[2] = (val*) var626;
{
((void (*)(val*, val*, long))(var630->class->vft[COLOR_array__Array__with_native]))(var630, var632, var631) /* with_native on <var630:Array[Object]>*/;
}
}
{
var633 = ((val* (*)(val*))(var630->class->vft[COLOR_string__Object__to_s]))(var630) /* to_s on <var630:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var633); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce634) {
var635 = varonce634;
} else {
var636 = "val* BOX_";
var637 = 9;
var638 = string__NativeString__to_s_with_length(var636, var637);
var635 = var638;
varonce634 = var635;
}
{
var639 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MClassType>*/;
}
if (varonce640) {
var641 = varonce640;
} else {
var642 = "(";
var643 = 1;
var644 = string__NativeString__to_s_with_length(var642, var643);
var641 = var644;
varonce640 = var641;
}
{
var645 = abstract_compiler__MClassType__ctype(var_mtype);
}
if (varonce646) {
var647 = varonce646;
} else {
var648 = " value) {";
var649 = 9;
var650 = string__NativeString__to_s_with_length(var648, var649);
var647 = var650;
varonce646 = var647;
}
var651 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var651 = array_instance Array[Object] */
var652 = 5;
var653 = NEW_array__NativeArray(var652, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var653)->values[0] = (val*) var635;
((struct instance_array__NativeArray*)var653)->values[1] = (val*) var639;
((struct instance_array__NativeArray*)var653)->values[2] = (val*) var641;
((struct instance_array__NativeArray*)var653)->values[3] = (val*) var645;
((struct instance_array__NativeArray*)var653)->values[4] = (val*) var647;
{
((void (*)(val*, val*, long))(var651->class->vft[COLOR_array__Array__with_native]))(var651, var653, var652) /* with_native on <var651:Array[Object]>*/;
}
}
{
var654 = ((val* (*)(val*))(var651->class->vft[COLOR_string__Object__to_s]))(var651) /* to_s on <var651:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var654); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce655) {
var656 = varonce655;
} else {
var657 = "struct instance_";
var658 = 16;
var659 = string__NativeString__to_s_with_length(var657, var658);
var656 = var659;
varonce655 = var656;
}
if (varonce660) {
var661 = varonce660;
} else {
var662 = "*res = nit_alloc(sizeof(struct instance_";
var663 = 40;
var664 = string__NativeString__to_s_with_length(var662, var663);
var661 = var664;
varonce660 = var661;
}
if (varonce665) {
var666 = varonce665;
} else {
var667 = "));";
var668 = 3;
var669 = string__NativeString__to_s_with_length(var667, var668);
var666 = var669;
varonce665 = var666;
}
var670 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var670 = array_instance Array[Object] */
var671 = 5;
var672 = NEW_array__NativeArray(var671, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var672)->values[0] = (val*) var656;
((struct instance_array__NativeArray*)var672)->values[1] = (val*) var_c_instance_name;
((struct instance_array__NativeArray*)var672)->values[2] = (val*) var661;
((struct instance_array__NativeArray*)var672)->values[3] = (val*) var_c_instance_name;
((struct instance_array__NativeArray*)var672)->values[4] = (val*) var666;
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
var676 = "class_";
var677 = 6;
var678 = string__NativeString__to_s_with_length(var676, var677);
var675 = var678;
varonce674 = var675;
}
var679 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var679 = array_instance Array[Object] */
var680 = 2;
var681 = NEW_array__NativeArray(var680, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var681)->values[0] = (val*) var675;
((struct instance_array__NativeArray*)var681)->values[1] = (val*) var_c_name;
{
((void (*)(val*, val*, long))(var679->class->vft[COLOR_array__Array__with_native]))(var679, var681, var680) /* with_native on <var679:Array[Object]>*/;
}
}
{
var682 = ((val* (*)(val*))(var679->class->vft[COLOR_string__Object__to_s]))(var679) /* to_s on <var679:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(var_v, var682); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (varonce683) {
var684 = varonce683;
} else {
var685 = "res->class = &class_";
var686 = 20;
var687 = string__NativeString__to_s_with_length(var685, var686);
var684 = var687;
varonce683 = var684;
}
if (varonce688) {
var689 = varonce688;
} else {
var690 = ";";
var691 = 1;
var692 = string__NativeString__to_s_with_length(var690, var691);
var689 = var692;
varonce688 = var689;
}
var693 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var693 = array_instance Array[Object] */
var694 = 3;
var695 = NEW_array__NativeArray(var694, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var695)->values[0] = (val*) var684;
((struct instance_array__NativeArray*)var695)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var695)->values[2] = (val*) var689;
{
((void (*)(val*, val*, long))(var693->class->vft[COLOR_array__Array__with_native]))(var693, var695, var694) /* with_native on <var693:Array[Object]>*/;
}
}
{
var696 = ((val* (*)(val*))(var693->class->vft[COLOR_string__Object__to_s]))(var693) /* to_s on <var693:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var696); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce697) {
var698 = varonce697;
} else {
var699 = "res->value = value;";
var700 = 19;
var701 = string__NativeString__to_s_with_length(var699, var700);
var698 = var701;
varonce697 = var698;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var698); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce702) {
var703 = varonce702;
} else {
var704 = "return (val*)res;";
var705 = 17;
var706 = string__NativeString__to_s_with_length(var704, var705);
var703 = var706;
varonce702 = var703;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var703); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce707) {
var708 = varonce707;
} else {
var709 = "}";
var710 = 1;
var711 = string__NativeString__to_s_with_length(var709, var710);
var708 = var711;
varonce707 = var708;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var708); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
{
{ /* Inline model#MClass#name (var_mclass) on <var_mclass:MClass> */
var714 = var_mclass->attrs[COLOR_model__MClass___name].val; /* _name on <var_mclass:MClass> */
if (unlikely(var714 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 340);
show_backtrace(1);
}
var712 = var714;
RET_LABEL713:(void)0;
}
}
if (varonce715) {
var716 = varonce715;
} else {
var717 = "NativeArray";
var718 = 11;
var719 = string__NativeString__to_s_with_length(var717, var718);
var716 = var719;
varonce715 = var716;
}
{
var721 = string__FlatString___61d_61d(var712, var716);
var720 = var721;
}
if (var720){
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var724 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var724 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var722 = var724;
RET_LABEL723:(void)0;
}
}
if (varonce725) {
var726 = varonce725;
} else {
var727 = "struct instance_";
var728 = 16;
var729 = string__NativeString__to_s_with_length(var727, var728);
var726 = var729;
varonce725 = var726;
}
if (varonce730) {
var731 = varonce730;
} else {
var732 = " {";
var733 = 2;
var734 = string__NativeString__to_s_with_length(var732, var733);
var731 = var734;
varonce730 = var731;
}
var735 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var735 = array_instance Array[Object] */
var736 = 3;
var737 = NEW_array__NativeArray(var736, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var737)->values[0] = (val*) var726;
((struct instance_array__NativeArray*)var737)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var737)->values[2] = (val*) var731;
{
((void (*)(val*, val*, long))(var735->class->vft[COLOR_array__Array__with_native]))(var735, var737, var736) /* with_native on <var735:Array[Object]>*/;
}
}
{
var738 = ((val* (*)(val*))(var735->class->vft[COLOR_string__Object__to_s]))(var735) /* to_s on <var735:Array[Object]>*/;
}
{
abstract_compiler__CodeWriter__add_decl(var722, var738); /* Direct call abstract_compiler#CodeWriter#add_decl on <var722:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var741 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var741 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var739 = var741;
RET_LABEL740:(void)0;
}
}
if (varonce742) {
var743 = varonce742;
} else {
var744 = "const struct class *class;";
var745 = 26;
var746 = string__NativeString__to_s_with_length(var744, var745);
var743 = var746;
varonce742 = var743;
}
{
abstract_compiler__CodeWriter__add_decl(var739, var743); /* Direct call abstract_compiler#CodeWriter#add_decl on <var739:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var749 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var749 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var747 = var749;
RET_LABEL748:(void)0;
}
}
if (varonce750) {
var751 = varonce750;
} else {
var752 = "int length;";
var753 = 11;
var754 = string__NativeString__to_s_with_length(var752, var753);
var751 = var754;
varonce750 = var751;
}
{
abstract_compiler__CodeWriter__add_decl(var747, var751); /* Direct call abstract_compiler#CodeWriter#add_decl on <var747:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var757 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var757 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var755 = var757;
RET_LABEL756:(void)0;
}
}
if (varonce758) {
var759 = varonce758;
} else {
var760 = "val* values[];";
var761 = 14;
var762 = string__NativeString__to_s_with_length(var760, var761);
var759 = var762;
varonce758 = var759;
}
{
abstract_compiler__CodeWriter__add_decl(var755, var759); /* Direct call abstract_compiler#CodeWriter#add_decl on <var755:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateErasureCompiler> */
var765 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateErasureCompiler> */
if (unlikely(var765 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var763 = var765;
RET_LABEL764:(void)0;
}
}
if (varonce766) {
var767 = varonce766;
} else {
var768 = "};";
var769 = 2;
var770 = string__NativeString__to_s_with_length(var768, var769);
var767 = var770;
varonce766 = var767;
}
{
abstract_compiler__CodeWriter__add_decl(var763, var767); /* Direct call abstract_compiler#CodeWriter#add_decl on <var763:CodeWriter>*/
}
if (varonce771) {
var772 = varonce771;
} else {
var773 = "NEW_";
var774 = 4;
var775 = string__NativeString__to_s_with_length(var773, var774);
var772 = var775;
varonce771 = var772;
}
var776 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var776 = array_instance Array[Object] */
var777 = 2;
var778 = NEW_array__NativeArray(var777, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var778)->values[0] = (val*) var772;
((struct instance_array__NativeArray*)var778)->values[1] = (val*) var_c_name;
{
((void (*)(val*, val*, long))(var776->class->vft[COLOR_array__Array__with_native]))(var776, var778, var777) /* with_native on <var776:Array[Object]>*/;
}
}
{
var779 = ((val* (*)(val*))(var776->class->vft[COLOR_string__Object__to_s]))(var776) /* to_s on <var776:Array[Object]>*/;
}
{
var780 = abstract_compiler__MClassType__ctype(var_mtype);
}
if (varonce781) {
var782 = varonce781;
} else {
var783 = " NEW_";
var784 = 5;
var785 = string__NativeString__to_s_with_length(var783, var784);
var782 = var785;
varonce781 = var782;
}
if (varonce786) {
var787 = varonce786;
} else {
var788 = "(int length);";
var789 = 13;
var790 = string__NativeString__to_s_with_length(var788, var789);
var787 = var790;
varonce786 = var787;
}
var791 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var791 = array_instance Array[Object] */
var792 = 4;
var793 = NEW_array__NativeArray(var792, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var793)->values[0] = (val*) var780;
((struct instance_array__NativeArray*)var793)->values[1] = (val*) var782;
((struct instance_array__NativeArray*)var793)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var793)->values[3] = (val*) var787;
{
((void (*)(val*, val*, long))(var791->class->vft[COLOR_array__Array__with_native]))(var791, var793, var792) /* with_native on <var791:Array[Object]>*/;
}
}
{
var794 = ((val* (*)(val*))(var791->class->vft[COLOR_string__Object__to_s]))(var791) /* to_s on <var791:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompiler__provide_declaration(self, var779, var794); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateErasureCompiler>*/
}
if (varonce795) {
var796 = varonce795;
} else {
var797 = "/* allocate ";
var798 = 12;
var799 = string__NativeString__to_s_with_length(var797, var798);
var796 = var799;
varonce795 = var796;
}
if (varonce800) {
var801 = varonce800;
} else {
var802 = " */";
var803 = 3;
var804 = string__NativeString__to_s_with_length(var802, var803);
var801 = var804;
varonce800 = var801;
}
var805 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var805 = array_instance Array[Object] */
var806 = 3;
var807 = NEW_array__NativeArray(var806, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var807)->values[0] = (val*) var796;
((struct instance_array__NativeArray*)var807)->values[1] = (val*) var_mtype;
((struct instance_array__NativeArray*)var807)->values[2] = (val*) var801;
{
((void (*)(val*, val*, long))(var805->class->vft[COLOR_array__Array__with_native]))(var805, var807, var806) /* with_native on <var805:Array[Object]>*/;
}
}
{
var808 = ((val* (*)(val*))(var805->class->vft[COLOR_string__Object__to_s]))(var805) /* to_s on <var805:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var808); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
var809 = abstract_compiler__MClassType__ctype(var_mtype);
}
if (varonce810) {
var811 = varonce810;
} else {
var812 = " NEW_";
var813 = 5;
var814 = string__NativeString__to_s_with_length(var812, var813);
var811 = var814;
varonce810 = var811;
}
if (varonce815) {
var816 = varonce815;
} else {
var817 = "(int length) {";
var818 = 14;
var819 = string__NativeString__to_s_with_length(var817, var818);
var816 = var819;
varonce815 = var816;
}
var820 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var820 = array_instance Array[Object] */
var821 = 4;
var822 = NEW_array__NativeArray(var821, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var822)->values[0] = (val*) var809;
((struct instance_array__NativeArray*)var822)->values[1] = (val*) var811;
((struct instance_array__NativeArray*)var822)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var822)->values[3] = (val*) var816;
{
((void (*)(val*, val*, long))(var820->class->vft[COLOR_array__Array__with_native]))(var820, var822, var821) /* with_native on <var820:Array[Object]>*/;
}
}
{
var823 = ((val* (*)(val*))(var820->class->vft[COLOR_string__Object__to_s]))(var820) /* to_s on <var820:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var823); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce824) {
var825 = varonce824;
} else {
var826 = "self";
var827 = 4;
var828 = string__NativeString__to_s_with_length(var826, var827);
var825 = var828;
varonce824 = var825;
}
{
var829 = abstract_compiler__AbstractCompilerVisitor__get_name(var_v, var825);
}
var_res = var829;
if (varonce830) {
var831 = varonce830;
} else {
var832 = "struct instance_";
var833 = 16;
var834 = string__NativeString__to_s_with_length(var832, var833);
var831 = var834;
varonce830 = var831;
}
if (varonce835) {
var836 = varonce835;
} else {
var837 = " *";
var838 = 2;
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
var846 = 5;
var847 = NEW_array__NativeArray(var846, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var847)->values[0] = (val*) var831;
((struct instance_array__NativeArray*)var847)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var847)->values[2] = (val*) var836;
((struct instance_array__NativeArray*)var847)->values[3] = (val*) var_res;
((struct instance_array__NativeArray*)var847)->values[4] = (val*) var841;
{
((void (*)(val*, val*, long))(var845->class->vft[COLOR_array__Array__with_native]))(var845, var847, var846) /* with_native on <var845:Array[Object]>*/;
}
}
{
var848 = ((val* (*)(val*))(var845->class->vft[COLOR_string__Object__to_s]))(var845) /* to_s on <var845:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var848); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
{ /* Inline model#MClassType#arguments (var_mtype) on <var_mtype:MClassType> */
var851 = var_mtype->attrs[COLOR_model__MClassType___arguments].val; /* _arguments on <var_mtype:MClassType> */
if (unlikely(var851 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 979);
show_backtrace(1);
}
var849 = var851;
RET_LABEL850:(void)0;
}
}
{
var852 = abstract_collection__SequenceRead__first(var849);
}
var_mtype_elt = var852;
if (varonce853) {
var854 = varonce853;
} else {
var855 = " = nit_alloc(sizeof(struct instance_";
var856 = 36;
var857 = string__NativeString__to_s_with_length(var855, var856);
var854 = var857;
varonce853 = var854;
}
if (varonce858) {
var859 = varonce858;
} else {
var860 = ") + length*sizeof(";
var861 = 18;
var862 = string__NativeString__to_s_with_length(var860, var861);
var859 = var862;
varonce858 = var859;
}
{
var863 = ((val* (*)(val*))(var_mtype_elt->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype_elt) /* ctype on <var_mtype_elt:MType>*/;
}
if (varonce864) {
var865 = varonce864;
} else {
var866 = "));";
var867 = 3;
var868 = string__NativeString__to_s_with_length(var866, var867);
var865 = var868;
varonce864 = var865;
}
var869 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var869 = array_instance Array[Object] */
var870 = 6;
var871 = NEW_array__NativeArray(var870, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var871)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var871)->values[1] = (val*) var854;
((struct instance_array__NativeArray*)var871)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var871)->values[3] = (val*) var859;
((struct instance_array__NativeArray*)var871)->values[4] = (val*) var863;
((struct instance_array__NativeArray*)var871)->values[5] = (val*) var865;
{
((void (*)(val*, val*, long))(var869->class->vft[COLOR_array__Array__with_native]))(var869, var871, var870) /* with_native on <var869:Array[Object]>*/;
}
}
{
var872 = ((val* (*)(val*))(var869->class->vft[COLOR_string__Object__to_s]))(var869) /* to_s on <var869:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var872); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce873) {
var874 = varonce873;
} else {
var875 = "class_";
var876 = 6;
var877 = string__NativeString__to_s_with_length(var875, var876);
var874 = var877;
varonce873 = var874;
}
var878 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var878 = array_instance Array[Object] */
var879 = 2;
var880 = NEW_array__NativeArray(var879, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var880)->values[0] = (val*) var874;
((struct instance_array__NativeArray*)var880)->values[1] = (val*) var_c_name;
{
((void (*)(val*, val*, long))(var878->class->vft[COLOR_array__Array__with_native]))(var878, var880, var879) /* with_native on <var878:Array[Object]>*/;
}
}
{
var881 = ((val* (*)(val*))(var878->class->vft[COLOR_string__Object__to_s]))(var878) /* to_s on <var878:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(var_v, var881); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (varonce882) {
var883 = varonce882;
} else {
var884 = "->class = &class_";
var885 = 17;
var886 = string__NativeString__to_s_with_length(var884, var885);
var883 = var886;
varonce882 = var883;
}
if (varonce887) {
var888 = varonce887;
} else {
var889 = ";";
var890 = 1;
var891 = string__NativeString__to_s_with_length(var889, var890);
var888 = var891;
varonce887 = var888;
}
var892 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var892 = array_instance Array[Object] */
var893 = 4;
var894 = NEW_array__NativeArray(var893, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var894)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var894)->values[1] = (val*) var883;
((struct instance_array__NativeArray*)var894)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var894)->values[3] = (val*) var888;
{
((void (*)(val*, val*, long))(var892->class->vft[COLOR_array__Array__with_native]))(var892, var894, var893) /* with_native on <var892:Array[Object]>*/;
}
}
{
var895 = ((val* (*)(val*))(var892->class->vft[COLOR_string__Object__to_s]))(var892) /* to_s on <var892:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var895); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce896) {
var897 = varonce896;
} else {
var898 = "->length = length;";
var899 = 18;
var900 = string__NativeString__to_s_with_length(var898, var899);
var897 = var900;
varonce896 = var897;
}
var901 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var901 = array_instance Array[Object] */
var902 = 2;
var903 = NEW_array__NativeArray(var902, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var903)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var903)->values[1] = (val*) var897;
{
((void (*)(val*, val*, long))(var901->class->vft[COLOR_array__Array__with_native]))(var901, var903, var902) /* with_native on <var901:Array[Object]>*/;
}
}
{
var904 = ((val* (*)(val*))(var901->class->vft[COLOR_string__Object__to_s]))(var901) /* to_s on <var901:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var904); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce905) {
var906 = varonce905;
} else {
var907 = "return (val*)";
var908 = 13;
var909 = string__NativeString__to_s_with_length(var907, var908);
var906 = var909;
varonce905 = var906;
}
if (varonce910) {
var911 = varonce910;
} else {
var912 = ";";
var913 = 1;
var914 = string__NativeString__to_s_with_length(var912, var913);
var911 = var914;
varonce910 = var911;
}
var915 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var915 = array_instance Array[Object] */
var916 = 3;
var917 = NEW_array__NativeArray(var916, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var917)->values[0] = (val*) var906;
((struct instance_array__NativeArray*)var917)->values[1] = (val*) var_res;
((struct instance_array__NativeArray*)var917)->values[2] = (val*) var911;
{
((void (*)(val*, val*, long))(var915->class->vft[COLOR_array__Array__with_native]))(var915, var917, var916) /* with_native on <var915:Array[Object]>*/;
}
}
{
var918 = ((val* (*)(val*))(var915->class->vft[COLOR_string__Object__to_s]))(var915) /* to_s on <var915:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var918); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce919) {
var920 = varonce919;
} else {
var921 = "}";
var922 = 1;
var923 = string__NativeString__to_s_with_length(var921, var922);
var920 = var923;
varonce919 = var920;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var920); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
}
}
if (varonce924) {
var925 = varonce924;
} else {
var926 = "NEW_";
var927 = 4;
var928 = string__NativeString__to_s_with_length(var926, var927);
var925 = var928;
varonce924 = var925;
}
var929 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var929 = array_instance Array[Object] */
var930 = 2;
var931 = NEW_array__NativeArray(var930, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var931)->values[0] = (val*) var925;
((struct instance_array__NativeArray*)var931)->values[1] = (val*) var_c_name;
{
((void (*)(val*, val*, long))(var929->class->vft[COLOR_array__Array__with_native]))(var929, var931, var930) /* with_native on <var929:Array[Object]>*/;
}
}
{
var932 = ((val* (*)(val*))(var929->class->vft[COLOR_string__Object__to_s]))(var929) /* to_s on <var929:Array[Object]>*/;
}
{
var933 = abstract_compiler__MClassType__ctype(var_mtype);
}
if (varonce934) {
var935 = varonce934;
} else {
var936 = " NEW_";
var937 = 5;
var938 = string__NativeString__to_s_with_length(var936, var937);
var935 = var938;
varonce934 = var935;
}
if (varonce939) {
var940 = varonce939;
} else {
var941 = "(void);";
var942 = 7;
var943 = string__NativeString__to_s_with_length(var941, var942);
var940 = var943;
varonce939 = var940;
}
var944 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var944 = array_instance Array[Object] */
var945 = 4;
var946 = NEW_array__NativeArray(var945, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var946)->values[0] = (val*) var933;
((struct instance_array__NativeArray*)var946)->values[1] = (val*) var935;
((struct instance_array__NativeArray*)var946)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var946)->values[3] = (val*) var940;
{
((void (*)(val*, val*, long))(var944->class->vft[COLOR_array__Array__with_native]))(var944, var946, var945) /* with_native on <var944:Array[Object]>*/;
}
}
{
var947 = ((val* (*)(val*))(var944->class->vft[COLOR_string__Object__to_s]))(var944) /* to_s on <var944:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompiler__provide_declaration(self, var932, var947); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateErasureCompiler>*/
}
if (varonce948) {
var949 = varonce948;
} else {
var950 = "/* allocate ";
var951 = 12;
var952 = string__NativeString__to_s_with_length(var950, var951);
var949 = var952;
varonce948 = var949;
}
if (varonce953) {
var954 = varonce953;
} else {
var955 = " */";
var956 = 3;
var957 = string__NativeString__to_s_with_length(var955, var956);
var954 = var957;
varonce953 = var954;
}
var958 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var958 = array_instance Array[Object] */
var959 = 3;
var960 = NEW_array__NativeArray(var959, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var960)->values[0] = (val*) var949;
((struct instance_array__NativeArray*)var960)->values[1] = (val*) var_mtype;
((struct instance_array__NativeArray*)var960)->values[2] = (val*) var954;
{
((void (*)(val*, val*, long))(var958->class->vft[COLOR_array__Array__with_native]))(var958, var960, var959) /* with_native on <var958:Array[Object]>*/;
}
}
{
var961 = ((val* (*)(val*))(var958->class->vft[COLOR_string__Object__to_s]))(var958) /* to_s on <var958:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var961); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
var962 = abstract_compiler__MClassType__ctype(var_mtype);
}
if (varonce963) {
var964 = varonce963;
} else {
var965 = " NEW_";
var966 = 5;
var967 = string__NativeString__to_s_with_length(var965, var966);
var964 = var967;
varonce963 = var964;
}
if (varonce968) {
var969 = varonce968;
} else {
var970 = "(void) {";
var971 = 8;
var972 = string__NativeString__to_s_with_length(var970, var971);
var969 = var972;
varonce968 = var969;
}
var973 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var973 = array_instance Array[Object] */
var974 = 4;
var975 = NEW_array__NativeArray(var974, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var975)->values[0] = (val*) var962;
((struct instance_array__NativeArray*)var975)->values[1] = (val*) var964;
((struct instance_array__NativeArray*)var975)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var975)->values[3] = (val*) var969;
{
((void (*)(val*, val*, long))(var973->class->vft[COLOR_array__Array__with_native]))(var973, var975, var974) /* with_native on <var973:Array[Object]>*/;
}
}
{
var976 = ((val* (*)(val*))(var973->class->vft[COLOR_string__Object__to_s]))(var973) /* to_s on <var973:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var976); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (var_is_dead){
if (varonce977) {
var978 = varonce977;
} else {
var979 = " is DEAD";
var980 = 8;
var981 = string__NativeString__to_s_with_length(var979, var980);
var978 = var981;
varonce977 = var978;
}
var982 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var982 = array_instance Array[Object] */
var983 = 2;
var984 = NEW_array__NativeArray(var983, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var984)->values[0] = (val*) var_mclass;
((struct instance_array__NativeArray*)var984)->values[1] = (val*) var978;
{
((void (*)(val*, val*, long))(var982->class->vft[COLOR_array__Array__with_native]))(var982, var984, var983) /* with_native on <var982:Array[Object]>*/;
}
}
{
var985 = ((val* (*)(val*))(var982->class->vft[COLOR_string__Object__to_s]))(var982) /* to_s on <var982:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_abort(var_v, var985); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (varonce986) {
var987 = varonce986;
} else {
var988 = "self";
var989 = 4;
var990 = string__NativeString__to_s_with_length(var988, var989);
var987 = var990;
varonce986 = var987;
}
{
var991 = abstract_compiler__AbstractCompilerVisitor__new_named_var(var_v, var_mtype, var987);
}
var_res992 = var991;
var993 = 1;
{
{ /* Inline abstract_compiler#RuntimeVariable#is_exact= (var_res992,var993) on <var_res992:RuntimeVariable> */
var_res992->attrs[COLOR_abstract_compiler__RuntimeVariable___is_exact].s = var993; /* _is_exact on <var_res992:RuntimeVariable> */
RET_LABEL994:(void)0;
}
}
if (varonce995) {
var996 = varonce995;
} else {
var997 = " = nit_alloc(sizeof(struct instance) + ";
var998 = 39;
var999 = string__NativeString__to_s_with_length(var997, var998);
var996 = var999;
varonce995 = var996;
}
{
var1000 = array__AbstractArrayRead__length(var_attrs);
}
if (varonce1001) {
var1002 = varonce1001;
} else {
var1003 = "*sizeof(nitattribute_t));";
var1004 = 25;
var1005 = string__NativeString__to_s_with_length(var1003, var1004);
var1002 = var1005;
varonce1001 = var1002;
}
var1006 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1006 = array_instance Array[Object] */
var1007 = 4;
var1008 = NEW_array__NativeArray(var1007, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1008)->values[0] = (val*) var_res992;
((struct instance_array__NativeArray*)var1008)->values[1] = (val*) var996;
var1009 = BOX_kernel__Int(var1000); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var1008)->values[2] = (val*) var1009;
((struct instance_array__NativeArray*)var1008)->values[3] = (val*) var1002;
{
((void (*)(val*, val*, long))(var1006->class->vft[COLOR_array__Array__with_native]))(var1006, var1008, var1007) /* with_native on <var1006:Array[Object]>*/;
}
}
{
var1010 = ((val* (*)(val*))(var1006->class->vft[COLOR_string__Object__to_s]))(var1006) /* to_s on <var1006:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var1010); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce1011) {
var1012 = varonce1011;
} else {
var1013 = "class_";
var1014 = 6;
var1015 = string__NativeString__to_s_with_length(var1013, var1014);
var1012 = var1015;
varonce1011 = var1012;
}
var1016 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1016 = array_instance Array[Object] */
var1017 = 2;
var1018 = NEW_array__NativeArray(var1017, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1018)->values[0] = (val*) var1012;
((struct instance_array__NativeArray*)var1018)->values[1] = (val*) var_c_name;
{
((void (*)(val*, val*, long))(var1016->class->vft[COLOR_array__Array__with_native]))(var1016, var1018, var1017) /* with_native on <var1016:Array[Object]>*/;
}
}
{
var1019 = ((val* (*)(val*))(var1016->class->vft[COLOR_string__Object__to_s]))(var1016) /* to_s on <var1016:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(var_v, var1019); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (varonce1020) {
var1021 = varonce1020;
} else {
var1022 = "->class = &class_";
var1023 = 17;
var1024 = string__NativeString__to_s_with_length(var1022, var1023);
var1021 = var1024;
varonce1020 = var1021;
}
if (varonce1025) {
var1026 = varonce1025;
} else {
var1027 = ";";
var1028 = 1;
var1029 = string__NativeString__to_s_with_length(var1027, var1028);
var1026 = var1029;
varonce1025 = var1026;
}
var1030 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1030 = array_instance Array[Object] */
var1031 = 4;
var1032 = NEW_array__NativeArray(var1031, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1032)->values[0] = (val*) var_res992;
((struct instance_array__NativeArray*)var1032)->values[1] = (val*) var1021;
((struct instance_array__NativeArray*)var1032)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var1032)->values[3] = (val*) var1026;
{
((void (*)(val*, val*, long))(var1030->class->vft[COLOR_array__Array__with_native]))(var1030, var1032, var1031) /* with_native on <var1030:Array[Object]>*/;
}
}
{
var1033 = ((val* (*)(val*))(var1030->class->vft[COLOR_string__Object__to_s]))(var1030) /* to_s on <var1030:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var1033); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
{
abstract_compiler__AbstractCompiler__generate_init_attr(self, var_v, var_res992, var_mtype); /* Direct call abstract_compiler#AbstractCompiler#generate_init_attr on <self:SeparateErasureCompiler>*/
}
if (varonce1034) {
var1035 = varonce1034;
} else {
var1036 = "return ";
var1037 = 7;
var1038 = string__NativeString__to_s_with_length(var1036, var1037);
var1035 = var1038;
varonce1034 = var1035;
}
if (varonce1039) {
var1040 = varonce1039;
} else {
var1041 = ";";
var1042 = 1;
var1043 = string__NativeString__to_s_with_length(var1041, var1042);
var1040 = var1043;
varonce1039 = var1040;
}
var1044 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1044 = array_instance Array[Object] */
var1045 = 3;
var1046 = NEW_array__NativeArray(var1045, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1046)->values[0] = (val*) var1035;
((struct instance_array__NativeArray*)var1046)->values[1] = (val*) var_res992;
((struct instance_array__NativeArray*)var1046)->values[2] = (val*) var1040;
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
}
if (varonce1048) {
var1049 = varonce1048;
} else {
var1050 = "}";
var1051 = 1;
var1052 = string__NativeString__to_s_with_length(var1050, var1051);
var1049 = var1052;
varonce1048 = var1049;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var1049); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
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
val* var61 /* : ArrayIterator[nullable Object] */;
short int var62 /* : Bool */;
val* var63 /* : nullable Object */;
val* var_vt /* var vt: nullable MPropDef */;
val* var64 /* : null */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var68 /* : Bool */;
short int var70 /* : Bool */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
long var74 /* : Int */;
val* var75 /* : FlatString */;
long var76 /* : Int */;
long var_is_null /* var is_null: Int */;
val* var77 /* : MClassDef */;
val* var78 /* : MClassType */;
val* var80 /* : MClassType */;
short int var81 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var82 /* : nullable MType */;
val* var84 /* : nullable MType */;
val* var85 /* : MType */;
val* var_bound /* var bound: MType */;
short int var86 /* : Bool */;
int cltype87;
int idtype88;
val* var89 /* : MClassDef */;
val* var90 /* : MClassType */;
val* var92 /* : MClassType */;
val* var93 /* : MType */;
val* var95 /* : MType */;
val* var96 /* : MType */;
long var97 /* : Int */;
short int var98 /* : Bool */;
int cltype99;
int idtype100;
const char* var_class_name101;
val* var102 /* : MClass */;
val* var104 /* : MClass */;
val* var_vtclass /* var vtclass: MClass */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
long var108 /* : Int */;
val* var109 /* : FlatString */;
val* var110 /* : String */;
val* var111 /* : Array[Object] */;
long var112 /* : Int */;
val* var113 /* : NativeArray[Object] */;
val* var114 /* : String */;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : NativeString */;
long var118 /* : Int */;
val* var119 /* : FlatString */;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : NativeString */;
long var123 /* : Int */;
val* var124 /* : FlatString */;
val* var125 /* : String */;
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
val* var136 /* : Array[Object] */;
long var137 /* : Int */;
val* var138 /* : NativeArray[Object] */;
val* var139 /* : Object */;
val* var140 /* : String */;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : NativeString */;
long var145 /* : Int */;
val* var146 /* : FlatString */;
static val* varonce147;
val* var148 /* : String */;
char* var149 /* : NativeString */;
long var150 /* : Int */;
val* var151 /* : FlatString */;
short int var152 /* : Bool */;
var_mclass = p0;
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#vt_tables (self) on <self:SeparateErasureCompiler> */
var3 = self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___vt_tables].val; /* _vt_tables on <self:SeparateErasureCompiler> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vt_tables");
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 396);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 396);
show_backtrace(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
var60 = ((val* (*)(val*, val*))(var57->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var57, var_mclass) /* [] on <var57:Map[MClass, Array[nullable MPropDef]]>*/;
}
{
var61 = array__AbstractArrayRead__iterator(var60);
}
for(;;) {
{
var62 = array__ArrayIterator__is_ok(var61);
}
if(!var62) break;
{
var63 = array__ArrayIterator__item(var61);
}
var_vt = var63;
var64 = NULL;
if (var_vt == NULL) {
var65 = 1; /* is null */
} else {
var65 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_vt,var64) on <var_vt:nullable MPropDef> */
var_other = var64;
{
{ /* Inline kernel#Object#is_same_instance (var_vt,var_other) on <var_vt:nullable MPropDef(MPropDef)> */
var70 = var_vt == var_other;
var68 = var70;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
var66 = var68;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
var65 = var66;
}
if (var65){
if (varonce71) {
var72 = varonce71;
} else {
var73 = "{-1, NULL}, /* empty */";
var74 = 23;
var75 = string__NativeString__to_s_with_length(var73, var74);
var72 = var75;
varonce71 = var72;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var72); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
var76 = 0;
var_is_null = var76;
{
var77 = model__MClass__intro(var_mclass);
}
{
{ /* Inline model#MClassDef#bound_mtype (var77) on <var77:MClassDef> */
var80 = var77->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var77:MClassDef> */
if (unlikely(var80 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
/* <var_vt:nullable MPropDef(MPropDef)> isa MVirtualTypeDef */
cltype = type_model__MVirtualTypeDef.color;
idtype = type_model__MVirtualTypeDef.id;
if(cltype >= var_vt->type->table_size) {
var81 = 0;
} else {
var81 = var_vt->type->type_table[cltype] == idtype;
}
if (unlikely(!var81)) {
var_class_name = var_vt == NULL ? "null" : var_vt->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MVirtualTypeDef", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 362);
show_backtrace(1);
}
{
{ /* Inline model#MVirtualTypeDef#bound (var_vt) on <var_vt:MPropDef(MVirtualTypeDef)> */
var84 = var_vt->attrs[COLOR_model__MVirtualTypeDef___bound].val; /* _bound on <var_vt:MPropDef(MVirtualTypeDef)> */
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
var85 = separate_erasure_compiler__SeparateErasureCompiler__retrieve_vt_bound(self, var78, var82);
}
var_bound = var85;
for(;;) {
/* <var_bound:MType> isa MNullableType */
cltype87 = type_model__MNullableType.color;
idtype88 = type_model__MNullableType.id;
if(cltype87 >= var_bound->type->table_size) {
var86 = 0;
} else {
var86 = var_bound->type->type_table[cltype87] == idtype88;
}
if (!var86) break;
{
var89 = model__MClass__intro(var_mclass);
}
{
{ /* Inline model#MClassDef#bound_mtype (var89) on <var89:MClassDef> */
var92 = var89->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var89:MClassDef> */
if (unlikely(var92 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
{
{ /* Inline model#MNullableType#mtype (var_bound) on <var_bound:MType(MNullableType)> */
var95 = var_bound->attrs[COLOR_model__MNullableType___mtype].val; /* _mtype on <var_bound:MType(MNullableType)> */
if (unlikely(var95 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1375);
show_backtrace(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
{
var96 = separate_erasure_compiler__SeparateErasureCompiler__retrieve_vt_bound(self, var90, var93);
}
var_bound = var96;
var97 = 1;
var_is_null = var97;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
/* <var_bound:MType> isa MClassType */
cltype99 = type_model__MClassType.color;
idtype100 = type_model__MClassType.id;
if(cltype99 >= var_bound->type->table_size) {
var98 = 0;
} else {
var98 = var_bound->type->type_table[cltype99] == idtype100;
}
if (unlikely(!var98)) {
var_class_name101 = var_bound == NULL ? "null" : var_bound->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name101);
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 367);
show_backtrace(1);
}
{
{ /* Inline model#MClassType#mclass (var_bound) on <var_bound:MType(MClassType)> */
var104 = var_bound->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_bound:MType(MClassType)> */
if (unlikely(var104 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var102 = var104;
RET_LABEL103:(void)0;
}
}
var_vtclass = var102;
if (varonce105) {
var106 = varonce105;
} else {
var107 = "class_";
var108 = 6;
var109 = string__NativeString__to_s_with_length(var107, var108);
var106 = var109;
varonce105 = var106;
}
{
var110 = abstract_compiler__MClass__c_name(var_vtclass);
}
var111 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var111 = array_instance Array[Object] */
var112 = 2;
var113 = NEW_array__NativeArray(var112, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var113)->values[0] = (val*) var106;
((struct instance_array__NativeArray*)var113)->values[1] = (val*) var110;
{
((void (*)(val*, val*, long))(var111->class->vft[COLOR_array__Array__with_native]))(var111, var113, var112) /* with_native on <var111:Array[Object]>*/;
}
}
{
var114 = ((val* (*)(val*))(var111->class->vft[COLOR_string__Object__to_s]))(var111) /* to_s on <var111:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(var_v, var114); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (varonce115) {
var116 = varonce115;
} else {
var117 = "{";
var118 = 1;
var119 = string__NativeString__to_s_with_length(var117, var118);
var116 = var119;
varonce115 = var116;
}
if (varonce120) {
var121 = varonce120;
} else {
var122 = ", &class_";
var123 = 9;
var124 = string__NativeString__to_s_with_length(var122, var123);
var121 = var124;
varonce120 = var121;
}
{
var125 = abstract_compiler__MClass__c_name(var_vtclass);
}
if (varonce126) {
var127 = varonce126;
} else {
var128 = "}, /* ";
var129 = 6;
var130 = string__NativeString__to_s_with_length(var128, var129);
var127 = var130;
varonce126 = var127;
}
if (varonce131) {
var132 = varonce131;
} else {
var133 = " */";
var134 = 3;
var135 = string__NativeString__to_s_with_length(var133, var134);
var132 = var135;
varonce131 = var132;
}
var136 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var136 = array_instance Array[Object] */
var137 = 7;
var138 = NEW_array__NativeArray(var137, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var138)->values[0] = (val*) var116;
var139 = BOX_kernel__Int(var_is_null); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var138)->values[1] = (val*) var139;
((struct instance_array__NativeArray*)var138)->values[2] = (val*) var121;
((struct instance_array__NativeArray*)var138)->values[3] = (val*) var125;
((struct instance_array__NativeArray*)var138)->values[4] = (val*) var127;
((struct instance_array__NativeArray*)var138)->values[5] = (val*) var_vt;
((struct instance_array__NativeArray*)var138)->values[6] = (val*) var132;
{
((void (*)(val*, val*, long))(var136->class->vft[COLOR_array__Array__with_native]))(var136, var138, var137) /* with_native on <var136:Array[Object]>*/;
}
}
{
var140 = ((val* (*)(val*))(var136->class->vft[COLOR_string__Object__to_s]))(var136) /* to_s on <var136:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var140); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
CONTINUE_label141: (void)0;
{
array__ArrayIterator__next(var61); /* Direct call array#ArrayIterator#next on <var61:ArrayIterator[nullable Object]>*/
}
}
BREAK_label141: (void)0;
if (varonce142) {
var143 = varonce142;
} else {
var144 = "},";
var145 = 2;
var146 = string__NativeString__to_s_with_length(var144, var145);
var143 = var146;
varonce142 = var143;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var143); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce147) {
var148 = varonce147;
} else {
var149 = "};";
var150 = 2;
var151 = string__NativeString__to_s_with_length(var149, var150);
var148 = var151;
varonce147 = var148;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var148); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
var152 = 1;
var = var152;
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 380);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 391);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 395);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 395);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 396);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 396);
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
val* var14 /* : MapIterator[Object, nullable Object] */;
short int var15 /* : Bool */;
val* var16 /* : Object */;
val* var_t /* var t: MClass */;
val* var17 /* : nullable Object */;
val* var_table /* var table: Array[nullable MClass] */;
long var18 /* : Int */;
long var19 /* : Int */;
short int var21 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var22 /* : Int */;
val* var23 /* : ArrayIterator[nullable Object] */;
short int var24 /* : Bool */;
val* var25 /* : nullable Object */;
val* var_e /* var e: nullable MClass */;
val* var26 /* : null */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
long var33 /* : Int */;
long var34 /* : Int */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
long var40 /* : Int */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
long var45 /* : Int */;
val* var46 /* : FlatString */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
long var50 /* : Int */;
val* var51 /* : FlatString */;
val* var52 /* : Array[Object] */;
long var53 /* : Int */;
val* var54 /* : NativeArray[Object] */;
val* var55 /* : Object */;
val* var56 /* : Object */;
val* var57 /* : String */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
long var61 /* : Int */;
val* var62 /* : FlatString */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
long var66 /* : Int */;
val* var67 /* : FlatString */;
long var68 /* : Int */;
long var69 /* : Int */;
val* var70 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var72 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var73 /* : MapIterator[Object, nullable Object] */;
short int var74 /* : Bool */;
val* var75 /* : Object */;
val* var_t76 /* var t: MClass */;
val* var77 /* : nullable Object */;
val* var_table78 /* var table: Array[nullable MPropDef] */;
long var79 /* : Int */;
long var80 /* : Int */;
short int var82 /* : Bool */;
int cltype83;
int idtype84;
const char* var_class_name85;
long var86 /* : Int */;
val* var87 /* : ArrayIterator[nullable Object] */;
short int var88 /* : Bool */;
val* var89 /* : nullable Object */;
val* var_e90 /* var e: nullable MPropDef */;
val* var91 /* : null */;
short int var92 /* : Bool */;
short int var93 /* : Bool */;
short int var95 /* : Bool */;
short int var97 /* : Bool */;
long var98 /* : Int */;
long var99 /* : Int */;
short int var101 /* : Bool */;
int cltype102;
int idtype103;
const char* var_class_name104;
long var105 /* : Int */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : NativeString */;
long var111 /* : Int */;
val* var112 /* : FlatString */;
static val* varonce113;
val* var114 /* : String */;
char* var115 /* : NativeString */;
long var116 /* : Int */;
val* var117 /* : FlatString */;
val* var118 /* : Array[Object] */;
long var119 /* : Int */;
val* var120 /* : NativeArray[Object] */;
val* var121 /* : Object */;
val* var122 /* : Object */;
val* var123 /* : String */;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : NativeString */;
long var127 /* : Int */;
val* var128 /* : FlatString */;
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : NativeString */;
long var132 /* : Int */;
val* var133 /* : FlatString */;
long var134 /* : Int */;
long var135 /* : Int */;
val* var136 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var138 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var139 /* : MapIterator[Object, nullable Object] */;
short int var140 /* : Bool */;
val* var141 /* : Object */;
val* var_t142 /* var t: MClass */;
val* var143 /* : nullable Object */;
val* var_table144 /* var table: Array[nullable MPropDef] */;
long var145 /* : Int */;
long var146 /* : Int */;
short int var148 /* : Bool */;
int cltype149;
int idtype150;
const char* var_class_name151;
long var152 /* : Int */;
val* var153 /* : ArrayIterator[nullable Object] */;
short int var154 /* : Bool */;
val* var155 /* : nullable Object */;
val* var_e156 /* var e: nullable MPropDef */;
val* var157 /* : null */;
short int var158 /* : Bool */;
short int var159 /* : Bool */;
short int var161 /* : Bool */;
short int var163 /* : Bool */;
long var164 /* : Int */;
long var165 /* : Int */;
short int var167 /* : Bool */;
int cltype168;
int idtype169;
const char* var_class_name170;
long var171 /* : Int */;
static val* varonce174;
val* var175 /* : String */;
char* var176 /* : NativeString */;
long var177 /* : Int */;
val* var178 /* : FlatString */;
static val* varonce179;
val* var180 /* : String */;
char* var181 /* : NativeString */;
long var182 /* : Int */;
val* var183 /* : FlatString */;
val* var184 /* : Array[Object] */;
long var185 /* : Int */;
val* var186 /* : NativeArray[Object] */;
val* var187 /* : Object */;
val* var188 /* : Object */;
val* var189 /* : String */;
static val* varonce190;
val* var191 /* : String */;
char* var192 /* : NativeString */;
long var193 /* : Int */;
val* var194 /* : FlatString */;
static val* varonce195;
val* var196 /* : String */;
char* var197 /* : NativeString */;
long var198 /* : Int */;
val* var199 /* : FlatString */;
long var200 /* : Int */;
long var201 /* : Int */;
val* var202 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var204 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var205 /* : MapIterator[Object, nullable Object] */;
short int var206 /* : Bool */;
val* var207 /* : Object */;
val* var_t208 /* var t: MClass */;
val* var209 /* : nullable Object */;
val* var_table210 /* var table: Array[nullable MPropDef] */;
long var211 /* : Int */;
long var212 /* : Int */;
short int var214 /* : Bool */;
int cltype215;
int idtype216;
const char* var_class_name217;
long var218 /* : Int */;
val* var219 /* : ArrayIterator[nullable Object] */;
short int var220 /* : Bool */;
val* var221 /* : nullable Object */;
val* var_e222 /* var e: nullable MPropDef */;
val* var223 /* : null */;
short int var224 /* : Bool */;
short int var225 /* : Bool */;
short int var227 /* : Bool */;
short int var229 /* : Bool */;
long var230 /* : Int */;
long var231 /* : Int */;
short int var233 /* : Bool */;
int cltype234;
int idtype235;
const char* var_class_name236;
long var237 /* : Int */;
static val* varonce240;
val* var241 /* : String */;
char* var242 /* : NativeString */;
long var243 /* : Int */;
val* var244 /* : FlatString */;
static val* varonce245;
val* var246 /* : String */;
char* var247 /* : NativeString */;
long var248 /* : Int */;
val* var249 /* : FlatString */;
val* var250 /* : Array[Object] */;
long var251 /* : Int */;
val* var252 /* : NativeArray[Object] */;
val* var253 /* : Object */;
val* var254 /* : Object */;
val* var255 /* : String */;
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 395);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = ((val* (*)(val*))(var11->class->vft[COLOR_abstract_collection__MapRead__iterator]))(var11) /* iterator on <var11:Map[MClass, Array[nullable MClass]]>*/;
}
for(;;) {
{
var15 = ((short int (*)(val*))(var14->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var14) /* is_ok on <var14:MapIterator[Object, nullable Object]>*/;
}
if(!var15) break;
{
var16 = ((val* (*)(val*))(var14->class->vft[COLOR_abstract_collection__MapIterator__key]))(var14) /* key on <var14:MapIterator[Object, nullable Object]>*/;
}
var_t = var16;
{
var17 = ((val* (*)(val*))(var14->class->vft[COLOR_abstract_collection__MapIterator__item]))(var14) /* item on <var14:MapIterator[Object, nullable Object]>*/;
}
var_table = var17;
{
var18 = array__AbstractArrayRead__length(var_table);
}
{
{ /* Inline kernel#Int#+ (var_total,var18) on <var_total:Int> */
/* Covariant cast for argument 0 (i) <var18:Int> isa OTHER */
/* <var18:Int> isa OTHER */
var21 = 1; /* easy <var18:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var22 = var_total + var18;
var19 = var22;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var_total = var19;
{
var23 = array__AbstractArrayRead__iterator(var_table);
}
for(;;) {
{
var24 = array__ArrayIterator__is_ok(var23);
}
if(!var24) break;
{
var25 = array__ArrayIterator__item(var23);
}
var_e = var25;
var26 = NULL;
if (var_e == NULL) {
var27 = 1; /* is null */
} else {
var27 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_e,var26) on <var_e:nullable MClass> */
var_other = var26;
{
{ /* Inline kernel#Object#is_same_instance (var_e,var_other) on <var_e:nullable MClass(MClass)> */
var32 = var_e == var_other;
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
var33 = 1;
{
{ /* Inline kernel#Int#+ (var_holes,var33) on <var_holes:Int> */
/* Covariant cast for argument 0 (i) <var33:Int> isa OTHER */
/* <var33:Int> isa OTHER */
var36 = 1; /* easy <var33:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var40 = var_holes + var33;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var_holes = var34;
} else {
}
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var23); /* Direct call array#ArrayIterator#next on <var23:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
CONTINUE_label41: (void)0;
{
((void (*)(val*))(var14->class->vft[COLOR_abstract_collection__MapIterator__next]))(var14) /* next on <var14:MapIterator[Object, nullable Object]>*/;
}
}
BREAK_label41: (void)0;
if (varonce42) {
var43 = varonce42;
} else {
var44 = "\11";
var45 = 1;
var46 = string__NativeString__to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
if (varonce47) {
var48 = varonce47;
} else {
var49 = "\11";
var50 = 1;
var51 = string__NativeString__to_s_with_length(var49, var50);
var48 = var51;
varonce47 = var48;
}
var52 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var52 = array_instance Array[Object] */
var53 = 4;
var54 = NEW_array__NativeArray(var53, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var54)->values[0] = (val*) var43;
var55 = BOX_kernel__Int(var_total); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var54)->values[1] = (val*) var55;
((struct instance_array__NativeArray*)var54)->values[2] = (val*) var48;
var56 = BOX_kernel__Int(var_holes); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var54)->values[3] = (val*) var56;
{
((void (*)(val*, val*, long))(var52->class->vft[COLOR_array__Array__with_native]))(var52, var54, var53) /* with_native on <var52:Array[Object]>*/;
}
}
{
var57 = ((val* (*)(val*))(var52->class->vft[COLOR_string__Object__to_s]))(var52) /* to_s on <var52:Array[Object]>*/;
}
{
file__Object__print(self, var57); /* Direct call file#Object#print on <self:SeparateErasureCompiler>*/
}
if (varonce58) {
var59 = varonce58;
} else {
var60 = "# size of resolution tables";
var61 = 27;
var62 = string__NativeString__to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
{
file__Object__print(self, var59); /* Direct call file#Object#print on <self:SeparateErasureCompiler>*/
}
if (varonce63) {
var64 = varonce63;
} else {
var65 = "\11total \11holes";
var66 = 13;
var67 = string__NativeString__to_s_with_length(var65, var66);
var64 = var67;
varonce63 = var64;
}
{
file__Object__print(self, var64); /* Direct call file#Object#print on <self:SeparateErasureCompiler>*/
}
var68 = 0;
var_total = var68;
var69 = 0;
var_holes = var69;
{
{ /* Inline separate_erasure_compiler#SeparateErasureCompiler#vt_tables (self) on <self:SeparateErasureCompiler> */
var72 = self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___vt_tables].val; /* _vt_tables on <self:SeparateErasureCompiler> */
if (unlikely(var72 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vt_tables");
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 396);
show_backtrace(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
{
var73 = ((val* (*)(val*))(var70->class->vft[COLOR_abstract_collection__MapRead__iterator]))(var70) /* iterator on <var70:Map[MClass, Array[nullable MPropDef]]>*/;
}
for(;;) {
{
var74 = ((short int (*)(val*))(var73->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var73) /* is_ok on <var73:MapIterator[Object, nullable Object]>*/;
}
if(!var74) break;
{
var75 = ((val* (*)(val*))(var73->class->vft[COLOR_abstract_collection__MapIterator__key]))(var73) /* key on <var73:MapIterator[Object, nullable Object]>*/;
}
var_t76 = var75;
{
var77 = ((val* (*)(val*))(var73->class->vft[COLOR_abstract_collection__MapIterator__item]))(var73) /* item on <var73:MapIterator[Object, nullable Object]>*/;
}
var_table78 = var77;
{
var79 = array__AbstractArrayRead__length(var_table78);
}
{
{ /* Inline kernel#Int#+ (var_total,var79) on <var_total:Int> */
/* Covariant cast for argument 0 (i) <var79:Int> isa OTHER */
/* <var79:Int> isa OTHER */
var82 = 1; /* easy <var79:Int> isa OTHER*/
if (unlikely(!var82)) {
var_class_name85 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name85);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var86 = var_total + var79;
var80 = var86;
goto RET_LABEL81;
RET_LABEL81:(void)0;
}
}
var_total = var80;
{
var87 = array__AbstractArrayRead__iterator(var_table78);
}
for(;;) {
{
var88 = array__ArrayIterator__is_ok(var87);
}
if(!var88) break;
{
var89 = array__ArrayIterator__item(var87);
}
var_e90 = var89;
var91 = NULL;
if (var_e90 == NULL) {
var92 = 1; /* is null */
} else {
var92 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_e90,var91) on <var_e90:nullable MPropDef> */
var_other = var91;
{
{ /* Inline kernel#Object#is_same_instance (var_e90,var_other) on <var_e90:nullable MPropDef(MPropDef)> */
var97 = var_e90 == var_other;
var95 = var97;
goto RET_LABEL96;
RET_LABEL96:(void)0;
}
}
var93 = var95;
goto RET_LABEL94;
RET_LABEL94:(void)0;
}
var92 = var93;
}
if (var92){
var98 = 1;
{
{ /* Inline kernel#Int#+ (var_holes,var98) on <var_holes:Int> */
/* Covariant cast for argument 0 (i) <var98:Int> isa OTHER */
/* <var98:Int> isa OTHER */
var101 = 1; /* easy <var98:Int> isa OTHER*/
if (unlikely(!var101)) {
var_class_name104 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name104);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var105 = var_holes + var98;
var99 = var105;
goto RET_LABEL100;
RET_LABEL100:(void)0;
}
}
var_holes = var99;
} else {
}
CONTINUE_label106: (void)0;
{
array__ArrayIterator__next(var87); /* Direct call array#ArrayIterator#next on <var87:ArrayIterator[nullable Object]>*/
}
}
BREAK_label106: (void)0;
CONTINUE_label107: (void)0;
{
((void (*)(val*))(var73->class->vft[COLOR_abstract_collection__MapIterator__next]))(var73) /* next on <var73:MapIterator[Object, nullable Object]>*/;
}
}
BREAK_label107: (void)0;
if (varonce108) {
var109 = varonce108;
} else {
var110 = "\11";
var111 = 1;
var112 = string__NativeString__to_s_with_length(var110, var111);
var109 = var112;
varonce108 = var109;
}
if (varonce113) {
var114 = varonce113;
} else {
var115 = "\11";
var116 = 1;
var117 = string__NativeString__to_s_with_length(var115, var116);
var114 = var117;
varonce113 = var114;
}
var118 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var118 = array_instance Array[Object] */
var119 = 4;
var120 = NEW_array__NativeArray(var119, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var120)->values[0] = (val*) var109;
var121 = BOX_kernel__Int(var_total); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var120)->values[1] = (val*) var121;
((struct instance_array__NativeArray*)var120)->values[2] = (val*) var114;
var122 = BOX_kernel__Int(var_holes); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var120)->values[3] = (val*) var122;
{
((void (*)(val*, val*, long))(var118->class->vft[COLOR_array__Array__with_native]))(var118, var120, var119) /* with_native on <var118:Array[Object]>*/;
}
}
{
var123 = ((val* (*)(val*))(var118->class->vft[COLOR_string__Object__to_s]))(var118) /* to_s on <var118:Array[Object]>*/;
}
{
file__Object__print(self, var123); /* Direct call file#Object#print on <self:SeparateErasureCompiler>*/
}
if (varonce124) {
var125 = varonce124;
} else {
var126 = "# size of methods tables";
var127 = 24;
var128 = string__NativeString__to_s_with_length(var126, var127);
var125 = var128;
varonce124 = var125;
}
{
file__Object__print(self, var125); /* Direct call file#Object#print on <self:SeparateErasureCompiler>*/
}
if (varonce129) {
var130 = varonce129;
} else {
var131 = "\11total \11holes";
var132 = 13;
var133 = string__NativeString__to_s_with_length(var131, var132);
var130 = var133;
varonce129 = var130;
}
{
file__Object__print(self, var130); /* Direct call file#Object#print on <self:SeparateErasureCompiler>*/
}
var134 = 0;
var_total = var134;
var135 = 0;
var_holes = var135;
{
{ /* Inline separate_compiler#SeparateCompiler#method_tables (self) on <self:SeparateErasureCompiler> */
var138 = self->attrs[COLOR_separate_compiler__SeparateCompiler___method_tables].val; /* _method_tables on <self:SeparateErasureCompiler> */
if (unlikely(var138 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _method_tables");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 792);
show_backtrace(1);
}
var136 = var138;
RET_LABEL137:(void)0;
}
}
{
var139 = ((val* (*)(val*))(var136->class->vft[COLOR_abstract_collection__MapRead__iterator]))(var136) /* iterator on <var136:Map[MClass, Array[nullable MPropDef]]>*/;
}
for(;;) {
{
var140 = ((short int (*)(val*))(var139->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var139) /* is_ok on <var139:MapIterator[Object, nullable Object]>*/;
}
if(!var140) break;
{
var141 = ((val* (*)(val*))(var139->class->vft[COLOR_abstract_collection__MapIterator__key]))(var139) /* key on <var139:MapIterator[Object, nullable Object]>*/;
}
var_t142 = var141;
{
var143 = ((val* (*)(val*))(var139->class->vft[COLOR_abstract_collection__MapIterator__item]))(var139) /* item on <var139:MapIterator[Object, nullable Object]>*/;
}
var_table144 = var143;
{
var145 = array__AbstractArrayRead__length(var_table144);
}
{
{ /* Inline kernel#Int#+ (var_total,var145) on <var_total:Int> */
/* Covariant cast for argument 0 (i) <var145:Int> isa OTHER */
/* <var145:Int> isa OTHER */
var148 = 1; /* easy <var145:Int> isa OTHER*/
if (unlikely(!var148)) {
var_class_name151 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name151);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var152 = var_total + var145;
var146 = var152;
goto RET_LABEL147;
RET_LABEL147:(void)0;
}
}
var_total = var146;
{
var153 = array__AbstractArrayRead__iterator(var_table144);
}
for(;;) {
{
var154 = array__ArrayIterator__is_ok(var153);
}
if(!var154) break;
{
var155 = array__ArrayIterator__item(var153);
}
var_e156 = var155;
var157 = NULL;
if (var_e156 == NULL) {
var158 = 1; /* is null */
} else {
var158 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_e156,var157) on <var_e156:nullable MPropDef> */
var_other = var157;
{
{ /* Inline kernel#Object#is_same_instance (var_e156,var_other) on <var_e156:nullable MPropDef(MPropDef)> */
var163 = var_e156 == var_other;
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
if (var158){
var164 = 1;
{
{ /* Inline kernel#Int#+ (var_holes,var164) on <var_holes:Int> */
/* Covariant cast for argument 0 (i) <var164:Int> isa OTHER */
/* <var164:Int> isa OTHER */
var167 = 1; /* easy <var164:Int> isa OTHER*/
if (unlikely(!var167)) {
var_class_name170 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name170);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var171 = var_holes + var164;
var165 = var171;
goto RET_LABEL166;
RET_LABEL166:(void)0;
}
}
var_holes = var165;
} else {
}
CONTINUE_label172: (void)0;
{
array__ArrayIterator__next(var153); /* Direct call array#ArrayIterator#next on <var153:ArrayIterator[nullable Object]>*/
}
}
BREAK_label172: (void)0;
CONTINUE_label173: (void)0;
{
((void (*)(val*))(var139->class->vft[COLOR_abstract_collection__MapIterator__next]))(var139) /* next on <var139:MapIterator[Object, nullable Object]>*/;
}
}
BREAK_label173: (void)0;
if (varonce174) {
var175 = varonce174;
} else {
var176 = "\11";
var177 = 1;
var178 = string__NativeString__to_s_with_length(var176, var177);
var175 = var178;
varonce174 = var175;
}
if (varonce179) {
var180 = varonce179;
} else {
var181 = "\11";
var182 = 1;
var183 = string__NativeString__to_s_with_length(var181, var182);
var180 = var183;
varonce179 = var180;
}
var184 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var184 = array_instance Array[Object] */
var185 = 4;
var186 = NEW_array__NativeArray(var185, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var186)->values[0] = (val*) var175;
var187 = BOX_kernel__Int(var_total); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var186)->values[1] = (val*) var187;
((struct instance_array__NativeArray*)var186)->values[2] = (val*) var180;
var188 = BOX_kernel__Int(var_holes); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var186)->values[3] = (val*) var188;
{
((void (*)(val*, val*, long))(var184->class->vft[COLOR_array__Array__with_native]))(var184, var186, var185) /* with_native on <var184:Array[Object]>*/;
}
}
{
var189 = ((val* (*)(val*))(var184->class->vft[COLOR_string__Object__to_s]))(var184) /* to_s on <var184:Array[Object]>*/;
}
{
file__Object__print(self, var189); /* Direct call file#Object#print on <self:SeparateErasureCompiler>*/
}
if (varonce190) {
var191 = varonce190;
} else {
var192 = "# size of attributes tables";
var193 = 27;
var194 = string__NativeString__to_s_with_length(var192, var193);
var191 = var194;
varonce190 = var191;
}
{
file__Object__print(self, var191); /* Direct call file#Object#print on <self:SeparateErasureCompiler>*/
}
if (varonce195) {
var196 = varonce195;
} else {
var197 = "\11total \11holes";
var198 = 13;
var199 = string__NativeString__to_s_with_length(var197, var198);
var196 = var199;
varonce195 = var196;
}
{
file__Object__print(self, var196); /* Direct call file#Object#print on <self:SeparateErasureCompiler>*/
}
var200 = 0;
var_total = var200;
var201 = 0;
var_holes = var201;
{
{ /* Inline separate_compiler#SeparateCompiler#attr_tables (self) on <self:SeparateErasureCompiler> */
var204 = self->attrs[COLOR_separate_compiler__SeparateCompiler___attr_tables].val; /* _attr_tables on <self:SeparateErasureCompiler> */
if (unlikely(var204 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _attr_tables");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 793);
show_backtrace(1);
}
var202 = var204;
RET_LABEL203:(void)0;
}
}
{
var205 = ((val* (*)(val*))(var202->class->vft[COLOR_abstract_collection__MapRead__iterator]))(var202) /* iterator on <var202:Map[MClass, Array[nullable MPropDef]]>*/;
}
for(;;) {
{
var206 = ((short int (*)(val*))(var205->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var205) /* is_ok on <var205:MapIterator[Object, nullable Object]>*/;
}
if(!var206) break;
{
var207 = ((val* (*)(val*))(var205->class->vft[COLOR_abstract_collection__MapIterator__key]))(var205) /* key on <var205:MapIterator[Object, nullable Object]>*/;
}
var_t208 = var207;
{
var209 = ((val* (*)(val*))(var205->class->vft[COLOR_abstract_collection__MapIterator__item]))(var205) /* item on <var205:MapIterator[Object, nullable Object]>*/;
}
var_table210 = var209;
{
var211 = array__AbstractArrayRead__length(var_table210);
}
{
{ /* Inline kernel#Int#+ (var_total,var211) on <var_total:Int> */
/* Covariant cast for argument 0 (i) <var211:Int> isa OTHER */
/* <var211:Int> isa OTHER */
var214 = 1; /* easy <var211:Int> isa OTHER*/
if (unlikely(!var214)) {
var_class_name217 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name217);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var218 = var_total + var211;
var212 = var218;
goto RET_LABEL213;
RET_LABEL213:(void)0;
}
}
var_total = var212;
{
var219 = array__AbstractArrayRead__iterator(var_table210);
}
for(;;) {
{
var220 = array__ArrayIterator__is_ok(var219);
}
if(!var220) break;
{
var221 = array__ArrayIterator__item(var219);
}
var_e222 = var221;
var223 = NULL;
if (var_e222 == NULL) {
var224 = 1; /* is null */
} else {
var224 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_e222,var223) on <var_e222:nullable MPropDef> */
var_other = var223;
{
{ /* Inline kernel#Object#is_same_instance (var_e222,var_other) on <var_e222:nullable MPropDef(MPropDef)> */
var229 = var_e222 == var_other;
var227 = var229;
goto RET_LABEL228;
RET_LABEL228:(void)0;
}
}
var225 = var227;
goto RET_LABEL226;
RET_LABEL226:(void)0;
}
var224 = var225;
}
if (var224){
var230 = 1;
{
{ /* Inline kernel#Int#+ (var_holes,var230) on <var_holes:Int> */
/* Covariant cast for argument 0 (i) <var230:Int> isa OTHER */
/* <var230:Int> isa OTHER */
var233 = 1; /* easy <var230:Int> isa OTHER*/
if (unlikely(!var233)) {
var_class_name236 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name236);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var237 = var_holes + var230;
var231 = var237;
goto RET_LABEL232;
RET_LABEL232:(void)0;
}
}
var_holes = var231;
} else {
}
CONTINUE_label238: (void)0;
{
array__ArrayIterator__next(var219); /* Direct call array#ArrayIterator#next on <var219:ArrayIterator[nullable Object]>*/
}
}
BREAK_label238: (void)0;
CONTINUE_label239: (void)0;
{
((void (*)(val*))(var205->class->vft[COLOR_abstract_collection__MapIterator__next]))(var205) /* next on <var205:MapIterator[Object, nullable Object]>*/;
}
}
BREAK_label239: (void)0;
if (varonce240) {
var241 = varonce240;
} else {
var242 = "\11";
var243 = 1;
var244 = string__NativeString__to_s_with_length(var242, var243);
var241 = var244;
varonce240 = var241;
}
if (varonce245) {
var246 = varonce245;
} else {
var247 = "\11";
var248 = 1;
var249 = string__NativeString__to_s_with_length(var247, var248);
var246 = var249;
varonce245 = var246;
}
var250 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var250 = array_instance Array[Object] */
var251 = 4;
var252 = NEW_array__NativeArray(var251, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var252)->values[0] = (val*) var241;
var253 = BOX_kernel__Int(var_total); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var252)->values[1] = (val*) var253;
((struct instance_array__NativeArray*)var252)->values[2] = (val*) var246;
var254 = BOX_kernel__Int(var_holes); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var252)->values[3] = (val*) var254;
{
((void (*)(val*, val*, long))(var250->class->vft[COLOR_array__Array__with_native]))(var250, var252, var251) /* with_native on <var250:Array[Object]>*/;
}
}
{
var255 = ((val* (*)(val*))(var250->class->vft[COLOR_string__Object__to_s]))(var250) /* to_s on <var250:Array[Object]>*/;
}
{
file__Object__print(self, var255); /* Direct call file#Object#print on <self:SeparateErasureCompiler>*/
}
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#display_sizes for (self: Object) */
void VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__display_sizes(val* self) {
separate_erasure_compiler__SeparateErasureCompiler__display_sizes(self); /* Direct call separate_erasure_compiler#SeparateErasureCompiler#display_sizes on <self:Object(SeparateErasureCompiler)>*/
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompilerVisitor#compile_callsite for (self: SeparateErasureCompilerVisitor, CallSite, Array[RuntimeVariable]): nullable RuntimeVariable */
val* separate_erasure_compiler__SeparateErasureCompilerVisitor__compile_callsite(val* self, val* p0, val* p1) {
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
short int var30 /* : Bool */;
val* var31 /* : MSignature */;
val* var33 /* : MSignature */;
val* var34 /* : nullable MType */;
val* var36 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var37 /* : null */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
static val* varonce;
val* var44 /* : String */;
char* var45 /* : NativeString */;
long var46 /* : Int */;
val* var47 /* : FlatString */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
long var51 /* : Int */;
val* var52 /* : FlatString */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
long var56 /* : Int */;
val* var57 /* : FlatString */;
val* var58 /* : Array[Object] */;
long var59 /* : Int */;
val* var60 /* : NativeArray[Object] */;
val* var61 /* : String */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
long var65 /* : Int */;
val* var66 /* : FlatString */;
val* var67 /* : RuntimeVariable */;
val* var_cond /* var cond: RuntimeVariable */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : NativeString */;
long var71 /* : Int */;
val* var72 /* : FlatString */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
long var76 /* : Int */;
val* var77 /* : FlatString */;
val* var78 /* : Array[Object] */;
long var79 /* : Int */;
val* var80 /* : NativeArray[Object] */;
val* var81 /* : String */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
long var85 /* : Int */;
val* var86 /* : FlatString */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : NativeString */;
long var90 /* : Int */;
val* var91 /* : FlatString */;
var_callsite = p0;
var_arguments = p1;
{
var1 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_separate_erasure_compiler__SeparateErasureCompilerVisitor__compile_callsite]))(self, p0, p1) /* compile_callsite on <self:SeparateErasureCompilerVisitor>*/;
}
var_res = var1;
{
{ /* Inline typing#CallSite#erasure_cast (var_callsite) on <var_callsite:CallSite> */
var5 = var_callsite->attrs[COLOR_typing__CallSite___erasure_cast].s; /* _erasure_cast on <var_callsite:CallSite> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_ = var3;
if (var3){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateErasureCompilerVisitor> */
var8 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateErasureCompilerVisitor> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
/* <var6:AbstractCompiler(SeparateCompiler)> isa SeparateErasureCompiler */
cltype = type_separate_erasure_compiler__SeparateErasureCompiler.color;
idtype = type_separate_erasure_compiler__SeparateErasureCompiler.id;
if(cltype >= var6->type->table_size) {
var9 = 0;
} else {
var9 = var6->type->type_table[cltype] == idtype;
}
if (unlikely(!var9)) {
var_class_name = var6 == NULL ? "null" : var6->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SeparateErasureCompiler", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 448);
show_backtrace(1);
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var6) on <var6:SeparateCompiler(SeparateErasureCompiler)> */
var12 = var6->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var6:SeparateCompiler(SeparateErasureCompiler)> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var10) on <var10:ModelBuilder> */
var15 = var10->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var10:ModelBuilder> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline separate_erasure_compiler#ToolContext#opt_no_check_erasure_cast (var13) on <var13:ToolContext> */
var18 = var13->attrs[COLOR_separate_erasure_compiler__ToolContext___opt_no_check_erasure_cast].val; /* _opt_no_check_erasure_cast on <var13:ToolContext> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_erasure_cast");
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 26);
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
var22 = ((struct instance_kernel__Bool*)var19)->value; /* autounbox from nullable Object to Bool */;
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
var29 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/;
var28 = var29;
}
var30 = !var28;
var26 = var30;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
var25 = var26;
}
if (unlikely(!var25)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 449);
show_backtrace(1);
}
{
{ /* Inline typing#CallSite#msignature (var_callsite) on <var_callsite:CallSite> */
var33 = var_callsite->attrs[COLOR_typing__CallSite___msignature].val; /* _msignature on <var_callsite:CallSite> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 429);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline model#MSignature#return_mtype (var31) on <var31:MSignature> */
var36 = var31->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <var31:MSignature> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
var_mtype = var34;
var37 = NULL;
if (var_mtype == NULL) {
var38 = 0; /* is null */
} else {
var38 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mtype,var37) on <var_mtype:nullable MType> */
var_other = var37;
{
var42 = ((short int (*)(val*, val*))(var_mtype->class->vft[COLOR_kernel__Object___61d_61d]))(var_mtype, var_other) /* == on <var_mtype:nullable MType(MType)>*/;
var41 = var42;
}
var43 = !var41;
var39 = var43;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
var38 = var39;
}
if (unlikely(!var38)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 451);
show_backtrace(1);
}
if (varonce) {
var44 = varonce;
} else {
var45 = "/* Erasure cast for return ";
var46 = 27;
var47 = string__NativeString__to_s_with_length(var45, var46);
var44 = var47;
varonce = var44;
}
if (varonce48) {
var49 = varonce48;
} else {
var50 = " isa ";
var51 = 5;
var52 = string__NativeString__to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
if (varonce53) {
var54 = varonce53;
} else {
var55 = " */";
var56 = 3;
var57 = string__NativeString__to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
var58 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var58 = array_instance Array[Object] */
var59 = 5;
var60 = NEW_array__NativeArray(var59, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var60)->values[0] = (val*) var44;
((struct instance_array__NativeArray*)var60)->values[1] = (val*) var_res;
((struct instance_array__NativeArray*)var60)->values[2] = (val*) var49;
((struct instance_array__NativeArray*)var60)->values[3] = (val*) var_mtype;
((struct instance_array__NativeArray*)var60)->values[4] = (val*) var54;
{
((void (*)(val*, val*, long))(var58->class->vft[COLOR_array__Array__with_native]))(var58, var60, var59) /* with_native on <var58:Array[Object]>*/;
}
}
{
var61 = ((val* (*)(val*))(var58->class->vft[COLOR_string__Object__to_s]))(var58) /* to_s on <var58:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var61); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
if (varonce62) {
var63 = varonce62;
} else {
var64 = "erasure";
var65 = 7;
var66 = string__NativeString__to_s_with_length(var64, var65);
var63 = var66;
varonce62 = var63;
}
{
var67 = separate_erasure_compiler__SeparateErasureCompilerVisitor__type_test(self, var_res, var_mtype, var63);
}
var_cond = var67;
if (varonce68) {
var69 = varonce68;
} else {
var70 = "if (!";
var71 = 5;
var72 = string__NativeString__to_s_with_length(var70, var71);
var69 = var72;
varonce68 = var69;
}
if (varonce73) {
var74 = varonce73;
} else {
var75 = ") {";
var76 = 3;
var77 = string__NativeString__to_s_with_length(var75, var76);
var74 = var77;
varonce73 = var74;
}
var78 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var78 = array_instance Array[Object] */
var79 = 3;
var80 = NEW_array__NativeArray(var79, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var80)->values[0] = (val*) var69;
((struct instance_array__NativeArray*)var80)->values[1] = (val*) var_cond;
((struct instance_array__NativeArray*)var80)->values[2] = (val*) var74;
{
((void (*)(val*, val*, long))(var78->class->vft[COLOR_array__Array__with_native]))(var78, var80, var79) /* with_native on <var78:Array[Object]>*/;
}
}
{
var81 = ((val* (*)(val*))(var78->class->vft[COLOR_string__Object__to_s]))(var78) /* to_s on <var78:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var81); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
if (varonce82) {
var83 = varonce82;
} else {
var84 = "Cast failed";
var85 = 11;
var86 = string__NativeString__to_s_with_length(var84, var85);
var83 = var86;
varonce82 = var83;
}
{
abstract_compiler__AbstractCompilerVisitor__add_abort(self, var83); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <self:SeparateErasureCompilerVisitor>*/
}
if (varonce87) {
var88 = varonce87;
} else {
var89 = "}";
var90 = 1;
var91 = string__NativeString__to_s_with_length(var89, var90);
var88 = var91;
varonce87 = var88;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var88); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompilerVisitor#compile_callsite for (self: Object, CallSite, Array[RuntimeVariable]): nullable RuntimeVariable */
val* VIRTUAL_separate_erasure_compiler__SeparateErasureCompilerVisitor__compile_callsite(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = separate_erasure_compiler__SeparateErasureCompilerVisitor__compile_callsite(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompilerVisitor#init_instance for (self: SeparateErasureCompilerVisitor, MClassType): RuntimeVariable */
val* separate_erasure_compiler__SeparateErasureCompilerVisitor__init_instance(val* self, val* p0) {
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
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var7 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = abstract_compiler__MClass__c_name(var5);
}
var9 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var9 = array_instance Array[Object] */
var10 = 2;
var11 = NEW_array__NativeArray(var10, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var11)->values[0] = (val*) var1;
((struct instance_array__NativeArray*)var11)->values[1] = (val*) var8;
{
((void (*)(val*, val*, long))(var9->class->vft[COLOR_array__Array__with_native]))(var9, var11, var10) /* with_native on <var9:Array[Object]>*/;
}
}
{
var12 = ((val* (*)(val*))(var9->class->vft[COLOR_string__Object__to_s]))(var9) /* to_s on <var9:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, var12); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateErasureCompilerVisitor>*/
}
if (varonce13) {
var14 = varonce13;
} else {
var15 = "NEW_";
var16 = 4;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var20 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = abstract_compiler__MClass__c_name(var18);
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = "()";
var25 = 2;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
var27 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var27 = array_instance Array[Object] */
var28 = 3;
var29 = NEW_array__NativeArray(var28, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var29)->values[0] = (val*) var14;
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
var31 = abstract_compiler__AbstractCompilerVisitor__new_expr(self, var30, var_mtype);
}
var = var31;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompilerVisitor#init_instance for (self: Object, MClassType): RuntimeVariable */
val* VIRTUAL_separate_erasure_compiler__SeparateErasureCompilerVisitor__init_instance(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = separate_erasure_compiler__SeparateErasureCompilerVisitor__init_instance(self, p0);
var = var1;
RET_LABEL:;
return var;
}
