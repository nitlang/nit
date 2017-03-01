#include "nitc__nith.sep.0.h"
/* method nith$ToolContext$process_options for (self: ToolContext, Sequence[String]) */
void nitc__nith___ToolContext___process_options(val* self, val* p0) {
val* var_args /* var args: Sequence[String] */;
val* var /* : OptionBool */;
val* var2 /* : OptionBool */;
val* var3 /* : nullable Object */;
val* var5 /* : nullable Object */;
long var6 /* : Int */;
short int var7 /* : Bool */;
val* var8 /* : OptionBool */;
val* var10 /* : OptionBool */;
val* var11 /* : nullable Object */;
val* var13 /* : nullable Object */;
long var14 /* : Int */;
short int var15 /* : Bool */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var19 /* : Int */;
long var_sum /* var sum: Int */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
short int var26 /* : Bool */;
val* var27 /* : Sys */;
static val* varonce;
val* var28 /* : String */;
char* var29 /* : CString */;
val* var30 /* : String */;
val* var31 /* : nullable Int */;
val* var32 /* : nullable Int */;
val* var33 /* : nullable Bool */;
val* var34 /* : nullable Bool */;
val* var35 /* : Sys */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
val* var40 /* : OptionBool */;
val* var42 /* : OptionBool */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const struct type* type_struct;
const char* var_class_name47;
val* var48 /* : nullable Object */;
var_args = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__nith___ToolContext___process_options]))(self, p0); /* process_options on <self:ToolContext>*/
}
{
{ /* Inline separate_compiler$ToolContext$opt_separate (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_nitc__separate_compiler__ToolContext___opt_separate].val; /* _opt_separate on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_separate");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 24);
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
{
var7 = (short int)((long)(var3)>>2);
var6 = core___core__Bool___to_i(var7);
}
{
{ /* Inline separate_erasure_compiler$ToolContext$opt_erasure (self) on <self:ToolContext> */
var10 = self->attrs[COLOR_nitc__separate_erasure_compiler__ToolContext___opt_erasure].val; /* _opt_erasure on <self:ToolContext> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_erasure");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 22);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline opts$Option$value (var8) on <var8:OptionBool> */
var13 = var8->attrs[COLOR_opts__Option___value].val; /* _value on <var8:OptionBool> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var15 = (short int)((long)(var11)>>2);
var14 = core___core__Bool___to_i(var15);
}
{
{ /* Inline kernel$Int$+ (var6,var14) on <var6:Int> */
/* Covariant cast for argument 0 (i) <var14:Int> isa OTHER */
/* <var14:Int> isa OTHER */
var18 = 1; /* easy <var14:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var19 = var6 + var14;
var16 = var19;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_sum = var16;
{
{ /* Inline kernel$Int$> (var_sum,1l) on <var_sum:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var22 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var26 = var_sum > 1l;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
if (var20){
var27 = glob_sys;
if (likely(varonce!=NULL)) {
var28 = varonce;
} else {
var29 = "Options --separate and --erasure are exclusive";
var31 = (val*)(46l<<2|1);
var32 = (val*)(46l<<2|1);
var33 = (val*)((long)(0)<<2|3);
var34 = (val*)((long)(0)<<2|3);
var30 = core__flat___CString___to_s_unsafe(var29, var31, var32, var33, var34);
var28 = var30;
varonce = var28;
}
{
core__file___Sys___print(var27, var28); /* Direct call file$Sys$print on <var27:Sys>*/
}
var35 = glob_sys;
{
{ /* Inline kernel$Sys$exit (var35,1l) on <var35:Sys> */
exit((int)1l);
RET_LABEL36:(void)0;
}
}
} else {
{
{ /* Inline kernel$Int$== (var_sum,0l) on <var_sum:Int> */
var39 = var_sum == 0l;
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
if (var37){
{
{ /* Inline separate_compiler$ToolContext$opt_separate (self) on <self:ToolContext> */
var42 = self->attrs[COLOR_nitc__separate_compiler__ToolContext___opt_separate].val; /* _opt_separate on <self:ToolContext> */
if (unlikely(var42 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_separate");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 24);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline opts$Option$value= (var40,1) on <var40:OptionBool> */
/* Covariant cast for argument 0 (value) <1:Bool> isa VALUE */
/* <1:Bool> isa VALUE */
type_struct = var40->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype45 = type_struct->color;
idtype46 = type_struct->id;
if(cltype45 >= (&type_core__Bool)->table_size) {
var44 = 0;
} else {
var44 = (&type_core__Bool)->type_table[cltype45] == idtype46;
}
if (unlikely(!var44)) {
var_class_name47 = type_core__Bool.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 40);
fatal_exit(1);
}
var48 = (val*)((long)(1)<<2|3);
var40->attrs[COLOR_opts__Option___value].val = var48; /* _value on <var40:OptionBool> */
RET_LABEL43:(void)0;
}
}
} else {
}
}
RET_LABEL:;
}
