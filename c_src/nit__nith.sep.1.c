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
long var20 /* : Int */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
short int var27 /* : Bool */;
static val* varonce;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : FlatString */;
long var32 /* : Int */;
long var34 /* : Int */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
val* var38 /* : OptionBool */;
val* var40 /* : OptionBool */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const struct type* type_struct;
const char* var_class_name46;
val* var47 /* : nullable Object */;
var_args = p0;
{
((void (*)(val* self, val* p0))(self->class->vft[COLOR_nit__nith___ToolContext___process_options]))(self, p0) /* process_options on <self:ToolContext>*/;
}
{
{ /* Inline separate_compiler#ToolContext#opt_separate (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_nit__separate_compiler__ToolContext___opt_separate].val; /* _opt_separate on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_separate");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 24);
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
{
var7 = ((struct instance_standard__Bool*)var3)->value; /* autounbox from nullable Object to Bool */;
var6 = standard___standard__Bool___to_i(var7);
}
{
{ /* Inline separate_erasure_compiler#ToolContext#opt_erasure (self) on <self:ToolContext> */
var10 = self->attrs[COLOR_nit__separate_erasure_compiler__ToolContext___opt_erasure].val; /* _opt_erasure on <self:ToolContext> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_erasure");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 22);
show_backtrace(1);
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
var15 = ((struct instance_standard__Bool*)var11)->value; /* autounbox from nullable Object to Bool */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var19 = var6 + var14;
var16 = var19;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_sum = var16;
var20 = 1;
{
{ /* Inline kernel#Int#> (var_sum,var20) on <var_sum:Int> */
/* Covariant cast for argument 0 (i) <var20:Int> isa OTHER */
/* <var20:Int> isa OTHER */
var23 = 1; /* easy <var20:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var27 = var_sum > var20;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (var21){
if (varonce) {
var28 = varonce;
} else {
var29 = "Options --separate and --erasure are exclusive";
var30 = 46;
var31 = standard___standard__NativeString___to_s_with_length(var29, var30);
var28 = var31;
varonce = var28;
}
{
standard__file___Object___print(self, var28); /* Direct call file#Object#print on <self:ToolContext>*/
}
var32 = 1;
{
{ /* Inline kernel#Object#exit (self,var32) on <self:ToolContext> */
exit(var32);
RET_LABEL33:(void)0;
}
}
} else {
var34 = 0;
{
{ /* Inline kernel#Int#== (var_sum,var34) on <var_sum:Int> */
var37 = var_sum == var34;
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
if (var35){
{
{ /* Inline separate_compiler#ToolContext#opt_separate (self) on <self:ToolContext> */
var40 = self->attrs[COLOR_nit__separate_compiler__ToolContext___opt_separate].val; /* _opt_separate on <self:ToolContext> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_separate");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 24);
show_backtrace(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
var41 = 1;
{
{ /* Inline opts#Option#value= (var38,var41) on <var38:OptionBool> */
/* Covariant cast for argument 0 (value) <var41:Bool> isa VALUE */
/* <var41:Bool> isa VALUE */
type_struct = var38->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype44 = type_struct->color;
idtype45 = type_struct->id;
if(cltype44 >= (&type_standard__Bool)->table_size) {
var43 = 0;
} else {
var43 = (&type_standard__Bool)->type_table[cltype44] == idtype45;
}
if (unlikely(!var43)) {
var_class_name46 = type_standard__Bool.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 40);
show_backtrace(1);
}
var47 = BOX_standard__Bool(var41); /* autobox from Bool to nullable Object */
var38->attrs[COLOR_opts__Option___value].val = var47; /* _value on <var38:OptionBool> */
RET_LABEL42:(void)0;
}
}
} else {
}
}
RET_LABEL:;
}
