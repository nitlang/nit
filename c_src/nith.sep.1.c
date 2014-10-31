#include "nith.sep.0.h"
/* method nith#ToolContext#process_options for (self: ToolContext, Sequence[String]) */
void nith__ToolContext__process_options(val* self, val* p0) {
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
short int var36 /* : Bool */;
short int var38 /* : Bool */;
val* var39 /* : OptionBool */;
val* var41 /* : OptionBool */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const struct type* type_struct;
const char* var_class_name47;
val* var48 /* : nullable Object */;
var_args = p0;
{
((void (*)(val*, val*))(self->class->vft[COLOR_nith__ToolContext__process_options]))(self, p0) /* process_options on <self:ToolContext>*/;
}
{
{ /* Inline separate_compiler#ToolContext#opt_separate (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_separate_compiler__ToolContext___opt_separate].val; /* _opt_separate on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_separate");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 24);
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
var7 = ((struct instance_kernel__Bool*)var3)->value; /* autounbox from nullable Object to Bool */;
var6 = kernel__Bool__to_i(var7);
}
{
{ /* Inline separate_erasure_compiler#ToolContext#opt_erasure (self) on <self:ToolContext> */
var10 = self->attrs[COLOR_separate_erasure_compiler__ToolContext___opt_erasure].val; /* _opt_erasure on <self:ToolContext> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_erasure");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_erasure_compiler.nit", 22);
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
var15 = ((struct instance_kernel__Bool*)var11)->value; /* autounbox from nullable Object to Bool */;
var14 = kernel__Bool__to_i(var15);
}
{
{ /* Inline kernel#Int#+ (var6,var14) on <var6:Int> */
/* Covariant cast for argument 0 (i) <var14:Int> isa OTHER */
/* <var14:Int> isa OTHER */
var18 = 1; /* easy <var14:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
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
var_class_name26 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
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
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce = var28;
}
{
file__Object__print(self, var28); /* Direct call file#Object#print on <self:ToolContext>*/
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
var38 = var_sum == var34;
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
var35 = var36;
}
if (var35){
{
{ /* Inline separate_compiler#ToolContext#opt_separate (self) on <self:ToolContext> */
var41 = self->attrs[COLOR_separate_compiler__ToolContext___opt_separate].val; /* _opt_separate on <self:ToolContext> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_separate");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 24);
show_backtrace(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
var42 = 1;
{
{ /* Inline opts#Option#value= (var39,var42) on <var39:OptionBool> */
/* Covariant cast for argument 0 (value) <var42:Bool> isa VALUE */
/* <var42:Bool> isa VALUE */
type_struct = var39->type->resolution_table->types[COLOR_opts__Option_VTVALUE];
cltype45 = type_struct->color;
idtype46 = type_struct->id;
if(cltype45 >= (&type_kernel__Bool)->table_size) {
var44 = 0;
} else {
var44 = (&type_kernel__Bool)->type_table[cltype45] == idtype46;
}
if (unlikely(!var44)) {
var_class_name47 = type_kernel__Bool.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 40);
show_backtrace(1);
}
var48 = BOX_kernel__Bool(var42); /* autobox from Bool to nullable Object */
var39->attrs[COLOR_opts__Option___value].val = var48; /* _value on <var39:OptionBool> */
RET_LABEL43:(void)0;
}
}
} else {
}
}
RET_LABEL:;
}
/* method nith#ToolContext#process_options for (self: Object, Sequence[String]) */
void VIRTUAL_nith__ToolContext__process_options(val* self, val* p0) {
nith__ToolContext__process_options(self, p0); /* Direct call nith#ToolContext#process_options on <self:Object(ToolContext)>*/
RET_LABEL:;
}
