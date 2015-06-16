#include "nit__nith.sep.0.h"
/* method nith#ToolContext#process_options for (self: ToolContext, Sequence[String]) */
void nit__nith___ToolContext___process_options(val* self, val* p0) {
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
char* var29 /* : NativeString */;
val* var30 /* : FlatString */;
val* var31 /* : Sys */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
val* var36 /* : OptionBool */;
val* var38 /* : OptionBool */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
const struct type* type_struct;
const char* var_class_name43;
val* var44 /* : nullable Object */;
var_args = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__nith___ToolContext___process_options]))(self, p0); /* process_options on <self:ToolContext>*/
}
{
{ /* Inline separate_compiler#ToolContext#opt_separate (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_nit__separate_compiler__ToolContext___opt_separate].val; /* _opt_separate on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_separate");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 24);
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
{
var7 = (short int)((long)(var3)>>2);
var6 = standard___standard__Bool___to_i(var7);
}
{
{ /* Inline separate_erasure_compiler#ToolContext#opt_erasure (self) on <self:ToolContext> */
var10 = self->attrs[COLOR_nit__separate_erasure_compiler__ToolContext___opt_erasure].val; /* _opt_erasure on <self:ToolContext> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_erasure");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 22);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline opts#Option#value (var8) on <var8:OptionBool> */
var13 = var8->attrs[COLOR_opts__Option___value].val; /* _value on <var8:OptionBool> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var15 = (short int)((long)(var11)>>2);
var14 = standard___standard__Bool___to_i(var15);
}
{
{ /* Inline kernel#Int#+ (var6,var14) on <var6:Int> */
/* Covariant cast for argument 0 (i) <var14:Int> isa OTHER */
/* <var14:Int> isa OTHER */
var18 = 1; /* easy <var14:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
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
{ /* Inline kernel#Int#> (var_sum,1l) on <var_sum:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var22 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
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
var30 = standard___standard__NativeString___to_s_with_length(var29, 46l);
var28 = var30;
varonce = var28;
}
{
standard__file___Sys___print(var27, var28); /* Direct call file#Sys#print on <var27:Sys>*/
}
var31 = glob_sys;
{
{ /* Inline kernel#Sys#exit (var31,1l) on <var31:Sys> */
exit(1l);
RET_LABEL32:(void)0;
}
}
} else {
{
{ /* Inline kernel#Int#== (var_sum,0l) on <var_sum:Int> */
var35 = var_sum == 0l;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
if (var33){
{
{ /* Inline separate_compiler#ToolContext#opt_separate (self) on <self:ToolContext> */
var38 = self->attrs[COLOR_nit__separate_compiler__ToolContext___opt_separate].val; /* _opt_separate on <self:ToolContext> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_separate");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 24);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline opts#Option#value= (var36,1) on <var36:OptionBool> */
/* Covariant cast for argument 0 (value) <1:Bool> isa VALUE */
/* <1:Bool> isa VALUE */
type_struct = var36->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype41 = type_struct->color;
idtype42 = type_struct->id;
if(cltype41 >= (&type_standard__Bool)->table_size) {
var40 = 0;
} else {
var40 = (&type_standard__Bool)->type_table[cltype41] == idtype42;
}
if (unlikely(!var40)) {
var_class_name43 = type_standard__Bool.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name43);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 40);
fatal_exit(1);
}
var44 = (val*)((long)(1)<<2|3);
var36->attrs[COLOR_opts__Option___value].val = var44; /* _value on <var36:OptionBool> */
RET_LABEL39:(void)0;
}
}
} else {
}
}
RET_LABEL:;
}
