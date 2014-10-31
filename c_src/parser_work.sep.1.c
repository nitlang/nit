#include "parser_work.sep.0.h"
/* method parser_work#State#init for (self: State, Int, nullable Object) */
void parser_work__State__init(val* self, long p0, val* p1) {
long var_state /* var state: Int */;
val* var_nodes /* var nodes: nullable Object */;
var_state = p0;
var_nodes = p1;
self->attrs[COLOR_parser_work__State___state].l = var_state; /* _state on <self:State> */
self->attrs[COLOR_parser_work__State___nodes].val = var_nodes; /* _nodes on <self:State> */
RET_LABEL:;
}
/* method parser_work#State#init for (self: Object, Int, nullable Object) */
void VIRTUAL_parser_work__State__init(val* self, long p0, val* p1) {
parser_work__State__init(self, p0, p1); /* Direct call parser_work#State#init on <self:Object(State)>*/
RET_LABEL:;
}
/* method parser_work#Parser#init for (self: Parser, Lexer) */
void parser_work__Parser__init(val* self, val* p0) {
val* var_lexer /* var lexer: Lexer */;
val* var /* : Array[State] */;
long var1 /* : Int */;
long var2 /* : Int */;
long var4 /* : Int */;
var_lexer = p0;
self->attrs[COLOR_parser_work__Parser___lexer].val = var_lexer; /* _lexer on <self:Parser> */
var = NEW_array__Array(&type_array__Arrayparser_work__State);
{
((void (*)(val*))(var->class->vft[COLOR_kernel__Object__init]))(var) /* init on <var:Array[State]>*/;
}
self->attrs[COLOR_parser_work__Parser___stack].val = var; /* _stack on <self:Parser> */
var1 = 1;
{
{ /* Inline kernel#Int#unary - (var1) on <var1:Int> */
var4 = -var1;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
self->attrs[COLOR_parser_work__Parser___stack_pos].l = var2; /* _stack_pos on <self:Parser> */
{
parser__Parser__build_reduce_table(self); /* Direct call parser#Parser#build_reduce_table on <self:Parser>*/
}
RET_LABEL:;
}
/* method parser_work#Parser#init for (self: Object, Lexer) */
void VIRTUAL_parser_work__Parser__init(val* self, val* p0) {
parser_work__Parser__init(self, p0); /* Direct call parser_work#Parser#init on <self:Object(Parser)>*/
RET_LABEL:;
}
/* method parser_work#Parser#go_to for (self: Parser, Int): Int */
long parser_work__Parser__go_to(val* self, long p0) {
long var /* : Int */;
long var_index /* var index: Int */;
long var1 /* : Int */;
long var_state /* var state: Int */;
long var2 /* : Int */;
long var_low /* var low: Int */;
long var3 /* : Int */;
long var4 /* : Int */;
long var6 /* : Int for extern */;
long var7 /* : Int */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var11 /* : Int */;
long var_high /* var high: Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
short int var18 /* : Bool */;
long var19 /* : Int */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
long var25 /* : Int */;
long var26 /* : Int */;
long var27 /* : Int */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
long var33 /* : Int */;
long var_middle /* var middle: Int */;
long var34 /* : Int */;
long var35 /* : Int */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
long var41 /* : Int */;
long var42 /* : Int */;
long var43 /* : Int */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
long var49 /* : Int */;
long var_subindex /* var subindex: Int */;
long var50 /* : Int */;
long var52 /* : Int for extern */;
long var_goal /* var goal: Int */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
int cltype56;
int idtype57;
const char* var_class_name58;
short int var59 /* : Bool */;
long var60 /* : Int */;
long var61 /* : Int */;
short int var63 /* : Bool */;
int cltype64;
int idtype65;
const char* var_class_name66;
long var67 /* : Int */;
short int var68 /* : Bool */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const char* var_class_name73;
short int var74 /* : Bool */;
long var75 /* : Int */;
long var76 /* : Int */;
short int var78 /* : Bool */;
int cltype79;
int idtype80;
const char* var_class_name81;
long var82 /* : Int */;
long var83 /* : Int */;
long var84 /* : Int */;
short int var86 /* : Bool */;
int cltype87;
int idtype88;
const char* var_class_name89;
long var90 /* : Int */;
long var91 /* : Int */;
long var93 /* : Int for extern */;
long var94 /* : Int */;
long var95 /* : Int */;
long var97 /* : Int for extern */;
var_index = p0;
{
var1 = parser_work__Parser__state(self);
}
var_state = var1;
var2 = 1;
var_low = var2;
var3 = 0;
{
{ /* Inline tables#TablesCapable#parser_goto (self,var_index,var3) on <self:Parser> */
var6 = parser_goto(self, var_index, var3);
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var7 = 1;
{
{ /* Inline kernel#Int#- (var4,var7) on <var4:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var11 = var4 - var7;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_high = var8;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_low,var_high) on <var_low:Int> */
/* Covariant cast for argument 0 (i) <var_high:Int> isa OTHER */
/* <var_high:Int> isa OTHER */
var14 = 1; /* easy <var_high:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 370);
show_backtrace(1);
}
var18 = var_low <= var_high;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
{
{ /* Inline kernel#Int#+ (var_low,var_high) on <var_low:Int> */
/* Covariant cast for argument 0 (i) <var_high:Int> isa OTHER */
/* <var_high:Int> isa OTHER */
var21 = 1; /* easy <var_high:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var25 = var_low + var_high;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var26 = 2;
{
{ /* Inline kernel#Int#/ (var19,var26) on <var19:Int> */
/* Covariant cast for argument 0 (i) <var26:Int> isa OTHER */
/* <var26:Int> isa OTHER */
var29 = 1; /* easy <var26:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 379);
show_backtrace(1);
}
var33 = var19 / var26;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var_middle = var27;
var34 = 2;
{
{ /* Inline kernel#Int#* (var_middle,var34) on <var_middle:Int> */
/* Covariant cast for argument 0 (i) <var34:Int> isa OTHER */
/* <var34:Int> isa OTHER */
var37 = 1; /* easy <var34:Int> isa OTHER*/
if (unlikely(!var37)) {
var_class_name40 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 378);
show_backtrace(1);
}
var41 = var_middle * var34;
var35 = var41;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var42 = 1;
{
{ /* Inline kernel#Int#+ (var35,var42) on <var35:Int> */
/* Covariant cast for argument 0 (i) <var42:Int> isa OTHER */
/* <var42:Int> isa OTHER */
var45 = 1; /* easy <var42:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var49 = var35 + var42;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
var_subindex = var43;
{
{ /* Inline tables#TablesCapable#parser_goto (self,var_index,var_subindex) on <self:Parser> */
var52 = parser_goto(self, var_index, var_subindex);
var50 = var52;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
var_goal = var50;
{
{ /* Inline kernel#Int#< (var_state,var_goal) on <var_state:Int> */
/* Covariant cast for argument 0 (i) <var_goal:Int> isa OTHER */
/* <var_goal:Int> isa OTHER */
var55 = 1; /* easy <var_goal:Int> isa OTHER*/
if (unlikely(!var55)) {
var_class_name58 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name58);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var59 = var_state < var_goal;
var53 = var59;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
if (var53){
var60 = 1;
{
{ /* Inline kernel#Int#- (var_middle,var60) on <var_middle:Int> */
/* Covariant cast for argument 0 (i) <var60:Int> isa OTHER */
/* <var60:Int> isa OTHER */
var63 = 1; /* easy <var60:Int> isa OTHER*/
if (unlikely(!var63)) {
var_class_name66 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name66);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var67 = var_middle - var60;
var61 = var67;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
var_high = var61;
} else {
{
{ /* Inline kernel#Int#> (var_state,var_goal) on <var_state:Int> */
/* Covariant cast for argument 0 (i) <var_goal:Int> isa OTHER */
/* <var_goal:Int> isa OTHER */
var70 = 1; /* easy <var_goal:Int> isa OTHER*/
if (unlikely(!var70)) {
var_class_name73 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var74 = var_state > var_goal;
var68 = var74;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
if (var68){
var75 = 1;
{
{ /* Inline kernel#Int#+ (var_middle,var75) on <var_middle:Int> */
/* Covariant cast for argument 0 (i) <var75:Int> isa OTHER */
/* <var75:Int> isa OTHER */
var78 = 1; /* easy <var75:Int> isa OTHER*/
if (unlikely(!var78)) {
var_class_name81 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name81);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var82 = var_middle + var75;
var76 = var82;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
}
var_low = var76;
} else {
var83 = 1;
{
{ /* Inline kernel#Int#+ (var_subindex,var83) on <var_subindex:Int> */
/* Covariant cast for argument 0 (i) <var83:Int> isa OTHER */
/* <var83:Int> isa OTHER */
var86 = 1; /* easy <var83:Int> isa OTHER*/
if (unlikely(!var86)) {
var_class_name89 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name89);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var90 = var_subindex + var83;
var84 = var90;
goto RET_LABEL85;
RET_LABEL85:(void)0;
}
}
{
{ /* Inline tables#TablesCapable#parser_goto (self,var_index,var84) on <self:Parser> */
var93 = parser_goto(self, var_index, var84);
var91 = var93;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
}
var = var91;
goto RET_LABEL;
}
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var94 = 2;
{
{ /* Inline tables#TablesCapable#parser_goto (self,var_index,var94) on <self:Parser> */
var97 = parser_goto(self, var_index, var94);
var95 = var97;
goto RET_LABEL96;
RET_LABEL96:(void)0;
}
}
var = var95;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_work#Parser#go_to for (self: Object, Int): Int */
long VIRTUAL_parser_work__Parser__go_to(val* self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = parser_work__Parser__go_to(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_work#Parser#push for (self: Parser, Int, nullable Object) */
void parser_work__Parser__push(val* self, long p0, val* p1) {
long var_numstate /* var numstate: Int */;
val* var_list_node /* var list_node: nullable Object */;
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
long var_pos /* var pos: Int */;
val* var6 /* : Array[State] */;
long var7 /* : Int */;
long var9 /* : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
short int var16 /* : Bool */;
val* var17 /* : Array[State] */;
val* var18 /* : nullable Object */;
val* var_state /* var state: State */;
val* var19 /* : Array[State] */;
val* var20 /* : State */;
var_numstate = p0;
var_list_node = p1;
var = self->attrs[COLOR_parser_work__Parser___stack_pos].l; /* _stack_pos on <self:Parser> */
var1 = 1;
{
{ /* Inline kernel#Int#+ (var,var1) on <var:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var5 = var + var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_pos = var2;
self->attrs[COLOR_parser_work__Parser___stack_pos].l = var_pos; /* _stack_pos on <self:Parser> */
var6 = self->attrs[COLOR_parser_work__Parser___stack].val; /* _stack on <self:Parser> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stack");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_work.nit", 85);
show_backtrace(1);
}
{
{ /* Inline array#AbstractArrayRead#length (var6) on <var6:Array[State]> */
var9 = var6->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var6:Array[State]> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var_pos,var7) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var12 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var16 = var_pos < var7;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
var17 = self->attrs[COLOR_parser_work__Parser___stack].val; /* _stack on <self:Parser> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stack");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_work.nit", 86);
show_backtrace(1);
}
{
var18 = array__Array___91d_93d(var17, var_pos);
}
var_state = var18;
var_state->attrs[COLOR_parser_work__State___state].l = var_numstate; /* _state on <var_state:State> */
var_state->attrs[COLOR_parser_work__State___nodes].val = var_list_node; /* _nodes on <var_state:State> */
} else {
var19 = self->attrs[COLOR_parser_work__Parser___stack].val; /* _stack on <self:Parser> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stack");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_work.nit", 90);
show_backtrace(1);
}
var20 = NEW_parser_work__State(&type_parser_work__State);
{
parser_work__State__init(var20, var_numstate, var_list_node); /* Direct call parser_work#State#init on <var20:State>*/
}
{
array__AbstractArray__push(var19, var20); /* Direct call array#AbstractArray#push on <var19:Array[State]>*/
}
}
RET_LABEL:;
}
/* method parser_work#Parser#push for (self: Object, Int, nullable Object) */
void VIRTUAL_parser_work__Parser__push(val* self, long p0, val* p1) {
parser_work__Parser__push(self, p0, p1); /* Direct call parser_work#Parser#push on <self:Object(Parser)>*/
RET_LABEL:;
}
/* method parser_work#Parser#state for (self: Parser): Int */
long parser_work__Parser__state(val* self) {
long var /* : Int */;
val* var1 /* : Array[State] */;
long var2 /* : Int */;
val* var3 /* : nullable Object */;
long var4 /* : Int */;
var1 = self->attrs[COLOR_parser_work__Parser___stack].val; /* _stack on <self:Parser> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stack");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_work.nit", 97);
show_backtrace(1);
}
var2 = self->attrs[COLOR_parser_work__Parser___stack_pos].l; /* _stack_pos on <self:Parser> */
{
var3 = array__Array___91d_93d(var1, var2);
}
var4 = var3->attrs[COLOR_parser_work__State___state].l; /* _state on <var3:nullable Object(State)> */
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_work#Parser#state for (self: Object): Int */
long VIRTUAL_parser_work__Parser__state(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = parser_work__Parser__state(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_work#Parser#pop for (self: Parser): nullable Object */
val* parser_work__Parser__pop(val* self) {
val* var /* : nullable Object */;
val* var1 /* : Array[State] */;
long var2 /* : Int */;
val* var3 /* : nullable Object */;
val* var4 /* : nullable Object */;
val* var_res /* var res: nullable Object */;
long var5 /* : Int */;
long var6 /* : Int */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var10 /* : Int */;
var1 = self->attrs[COLOR_parser_work__Parser___stack].val; /* _stack on <self:Parser> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stack");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_work.nit", 103);
show_backtrace(1);
}
var2 = self->attrs[COLOR_parser_work__Parser___stack_pos].l; /* _stack_pos on <self:Parser> */
{
var3 = array__Array___91d_93d(var1, var2);
}
var4 = var3->attrs[COLOR_parser_work__State___nodes].val; /* _nodes on <var3:nullable Object(State)> */
var_res = var4;
var5 = self->attrs[COLOR_parser_work__Parser___stack_pos].l; /* _stack_pos on <self:Parser> */
var6 = 1;
{
{ /* Inline kernel#Int#- (var5,var6) on <var5:Int> */
/* Covariant cast for argument 0 (i) <var6:Int> isa OTHER */
/* <var6:Int> isa OTHER */
var9 = 1; /* easy <var6:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var10 = var5 - var6;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
self->attrs[COLOR_parser_work__Parser___stack_pos].l = var7; /* _stack_pos on <self:Parser> */
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_work#Parser#pop for (self: Object): nullable Object */
val* VIRTUAL_parser_work__Parser__pop(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = parser_work__Parser__pop(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_work#Parser#parse for (self: Parser): Start */
val* parser_work__Parser__parse(val* self) {
val* var /* : Start */;
long var1 /* : Int */;
val* var2 /* : null */;
val* var3 /* : Lexer */;
val* var_lexer /* var lexer: Lexer */;
val* var4 /* : Token */;
val* var_token /* var token: Token */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var6 /* : Start */;
val* var7 /* : null */;
long var8 /* : Int */;
long var_state /* var state: Int */;
long var9 /* : Int */;
long var_index /* var index: Int */;
long var10 /* : Int */;
long var11 /* : Int */;
long var13 /* : Int for extern */;
long var_action_type /* var action_type: Int */;
long var14 /* : Int */;
long var15 /* : Int */;
long var17 /* : Int for extern */;
long var_action_value /* var action_value: Int */;
long var18 /* : Int */;
long var_low /* var low: Int */;
long var19 /* : Int */;
long var20 /* : Int */;
long var22 /* : Int for extern */;
long var23 /* : Int */;
long var24 /* : Int */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name;
long var29 /* : Int */;
long var_high /* var high: Int */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
short int var36 /* : Bool */;
long var37 /* : Int */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name42;
long var43 /* : Int */;
long var44 /* : Int */;
long var45 /* : Int */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
const char* var_class_name50;
long var51 /* : Int */;
long var_middle /* var middle: Int */;
long var52 /* : Int */;
long var53 /* : Int */;
short int var55 /* : Bool */;
int cltype56;
int idtype57;
const char* var_class_name58;
long var59 /* : Int */;
long var60 /* : Int */;
long var61 /* : Int */;
short int var63 /* : Bool */;
int cltype64;
int idtype65;
const char* var_class_name66;
long var67 /* : Int */;
long var_subindex /* var subindex: Int */;
long var68 /* : Int */;
long var70 /* : Int for extern */;
long var_goal /* var goal: Int */;
short int var71 /* : Bool */;
short int var73 /* : Bool */;
int cltype74;
int idtype75;
const char* var_class_name76;
short int var77 /* : Bool */;
long var78 /* : Int */;
long var79 /* : Int */;
short int var81 /* : Bool */;
int cltype82;
int idtype83;
const char* var_class_name84;
long var85 /* : Int */;
short int var86 /* : Bool */;
short int var88 /* : Bool */;
int cltype89;
int idtype90;
const char* var_class_name91;
short int var92 /* : Bool */;
long var93 /* : Int */;
long var94 /* : Int */;
short int var96 /* : Bool */;
int cltype97;
int idtype98;
const char* var_class_name99;
long var100 /* : Int */;
long var101 /* : Int */;
long var102 /* : Int */;
short int var104 /* : Bool */;
int cltype105;
int idtype106;
const char* var_class_name107;
long var108 /* : Int */;
long var109 /* : Int */;
long var111 /* : Int for extern */;
long var112 /* : Int */;
long var113 /* : Int */;
short int var115 /* : Bool */;
int cltype116;
int idtype117;
const char* var_class_name118;
long var119 /* : Int */;
long var120 /* : Int */;
long var122 /* : Int for extern */;
long var123 /* : Int */;
short int var124 /* : Bool */;
short int var125 /* : Bool */;
short int var127 /* : Bool */;
val* var128 /* : Token */;
long var129 /* : Int */;
short int var130 /* : Bool */;
short int var131 /* : Bool */;
short int var133 /* : Bool */;
val* var134 /* : Array[ReduceAction] */;
val* var135 /* : nullable Object */;
long var136 /* : Int */;
short int var137 /* : Bool */;
short int var138 /* : Bool */;
short int var140 /* : Bool */;
val* var141 /* : Token */;
val* var_node2 /* var node2: Token */;
short int var142 /* : Bool */;
int cltype143;
int idtype144;
val* var145 /* : nullable Object */;
val* var_node1 /* var node1: nullable Object */;
short int var146 /* : Bool */;
int cltype147;
int idtype148;
val* var149 /* : Start */;
val* var_node /* var node: Start */;
val* var150 /* : ComputeProdLocationVisitor */;
long var151 /* : Int */;
short int var152 /* : Bool */;
short int var153 /* : Bool */;
short int var155 /* : Bool */;
short int var156 /* : Bool */;
short int var157 /* : Bool */;
val* var158 /* : Token */;
val* var160 /* : AParserError */;
static val* varonce;
val* var161 /* : String */;
char* var162 /* : NativeString */;
long var163 /* : Int */;
val* var164 /* : FlatString */;
static val* varonce165;
val* var166 /* : String */;
char* var167 /* : NativeString */;
long var168 /* : Int */;
val* var169 /* : FlatString */;
val* var170 /* : Array[Object] */;
long var171 /* : Int */;
val* var172 /* : NativeArray[Object] */;
val* var173 /* : String */;
val* var174 /* : Location */;
val* var176 /* : Location */;
val* var_node2177 /* var node2: AParserError */;
val* var178 /* : Start */;
val* var179 /* : null */;
val* var_node180 /* var node: Start */;
var1 = 0;
var2 = NULL;
{
parser_work__Parser__push(self, var1, var2); /* Direct call parser_work#Parser#push on <self:Parser>*/
}
var3 = self->attrs[COLOR_parser_work__Parser___lexer].val; /* _lexer on <self:Parser> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lexer");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_work.nit", 113);
show_backtrace(1);
}
var_lexer = var3;
for(;;) {
{
var4 = lexer_work__Lexer__peek(var_lexer);
}
var_token = var4;
/* <var_token:Token> isa AError */
cltype = type_parser_nodes__AError.color;
idtype = type_parser_nodes__AError.id;
if(cltype >= var_token->type->table_size) {
var5 = 0;
} else {
var5 = var_token->type->type_table[cltype] == idtype;
}
if (var5){
var6 = NEW_parser_nodes__Start(&type_parser_nodes__Start);
var7 = NULL;
{
parser_nodes__Start__init(var6, var7, var_token); /* Direct call parser_nodes#Start#init on <var6:Start>*/
}
var = var6;
goto RET_LABEL;
} else {
}
{
var8 = parser_work__Parser__state(self);
}
var_state = var8;
{
var9 = ((long (*)(val*))(var_token->class->vft[COLOR_lexer_work__Token__parser_index]))(var_token) /* parser_index on <var_token:Token>*/;
}
var_index = var9;
var10 = 2;
{
{ /* Inline tables#TablesCapable#parser_action (self,var_state,var10) on <self:Parser> */
var13 = parser_action(self, var_state, var10);
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var_action_type = var11;
var14 = 3;
{
{ /* Inline tables#TablesCapable#parser_action (self,var_state,var14) on <self:Parser> */
var17 = parser_action(self, var_state, var14);
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var_action_value = var15;
var18 = 1;
var_low = var18;
var19 = 0;
{
{ /* Inline tables#TablesCapable#parser_action (self,var_state,var19) on <self:Parser> */
var22 = parser_action(self, var_state, var19);
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var23 = 1;
{
{ /* Inline kernel#Int#- (var20,var23) on <var20:Int> */
/* Covariant cast for argument 0 (i) <var23:Int> isa OTHER */
/* <var23:Int> isa OTHER */
var26 = 1; /* easy <var23:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var29 = var20 - var23;
var24 = var29;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var_high = var24;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_low,var_high) on <var_low:Int> */
/* Covariant cast for argument 0 (i) <var_high:Int> isa OTHER */
/* <var_high:Int> isa OTHER */
var32 = 1; /* easy <var_high:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 370);
show_backtrace(1);
}
var36 = var_low <= var_high;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
if (var30){
{
{ /* Inline kernel#Int#+ (var_low,var_high) on <var_low:Int> */
/* Covariant cast for argument 0 (i) <var_high:Int> isa OTHER */
/* <var_high:Int> isa OTHER */
var39 = 1; /* easy <var_high:Int> isa OTHER*/
if (unlikely(!var39)) {
var_class_name42 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var43 = var_low + var_high;
var37 = var43;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
var44 = 2;
{
{ /* Inline kernel#Int#/ (var37,var44) on <var37:Int> */
/* Covariant cast for argument 0 (i) <var44:Int> isa OTHER */
/* <var44:Int> isa OTHER */
var47 = 1; /* easy <var44:Int> isa OTHER*/
if (unlikely(!var47)) {
var_class_name50 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name50);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 379);
show_backtrace(1);
}
var51 = var37 / var44;
var45 = var51;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var_middle = var45;
var52 = 3;
{
{ /* Inline kernel#Int#* (var_middle,var52) on <var_middle:Int> */
/* Covariant cast for argument 0 (i) <var52:Int> isa OTHER */
/* <var52:Int> isa OTHER */
var55 = 1; /* easy <var52:Int> isa OTHER*/
if (unlikely(!var55)) {
var_class_name58 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name58);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 378);
show_backtrace(1);
}
var59 = var_middle * var52;
var53 = var59;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
var60 = 1;
{
{ /* Inline kernel#Int#+ (var53,var60) on <var53:Int> */
/* Covariant cast for argument 0 (i) <var60:Int> isa OTHER */
/* <var60:Int> isa OTHER */
var63 = 1; /* easy <var60:Int> isa OTHER*/
if (unlikely(!var63)) {
var_class_name66 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name66);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var67 = var53 + var60;
var61 = var67;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
var_subindex = var61;
{
{ /* Inline tables#TablesCapable#parser_action (self,var_state,var_subindex) on <self:Parser> */
var70 = parser_action(self, var_state, var_subindex);
var68 = var70;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
var_goal = var68;
{
{ /* Inline kernel#Int#< (var_index,var_goal) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var_goal:Int> isa OTHER */
/* <var_goal:Int> isa OTHER */
var73 = 1; /* easy <var_goal:Int> isa OTHER*/
if (unlikely(!var73)) {
var_class_name76 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name76);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var77 = var_index < var_goal;
var71 = var77;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
if (var71){
var78 = 1;
{
{ /* Inline kernel#Int#- (var_middle,var78) on <var_middle:Int> */
/* Covariant cast for argument 0 (i) <var78:Int> isa OTHER */
/* <var78:Int> isa OTHER */
var81 = 1; /* easy <var78:Int> isa OTHER*/
if (unlikely(!var81)) {
var_class_name84 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name84);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var85 = var_middle - var78;
var79 = var85;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
var_high = var79;
} else {
{
{ /* Inline kernel#Int#> (var_index,var_goal) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var_goal:Int> isa OTHER */
/* <var_goal:Int> isa OTHER */
var88 = 1; /* easy <var_goal:Int> isa OTHER*/
if (unlikely(!var88)) {
var_class_name91 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name91);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var92 = var_index > var_goal;
var86 = var92;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
}
if (var86){
var93 = 1;
{
{ /* Inline kernel#Int#+ (var_middle,var93) on <var_middle:Int> */
/* Covariant cast for argument 0 (i) <var93:Int> isa OTHER */
/* <var93:Int> isa OTHER */
var96 = 1; /* easy <var93:Int> isa OTHER*/
if (unlikely(!var96)) {
var_class_name99 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name99);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var100 = var_middle + var93;
var94 = var100;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
}
var_low = var94;
} else {
var101 = 1;
{
{ /* Inline kernel#Int#+ (var_subindex,var101) on <var_subindex:Int> */
/* Covariant cast for argument 0 (i) <var101:Int> isa OTHER */
/* <var101:Int> isa OTHER */
var104 = 1; /* easy <var101:Int> isa OTHER*/
if (unlikely(!var104)) {
var_class_name107 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name107);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var108 = var_subindex + var101;
var102 = var108;
goto RET_LABEL103;
RET_LABEL103:(void)0;
}
}
{
{ /* Inline tables#TablesCapable#parser_action (self,var_state,var102) on <self:Parser> */
var111 = parser_action(self, var_state, var102);
var109 = var111;
goto RET_LABEL110;
RET_LABEL110:(void)0;
}
}
var_action_type = var109;
var112 = 2;
{
{ /* Inline kernel#Int#+ (var_subindex,var112) on <var_subindex:Int> */
/* Covariant cast for argument 0 (i) <var112:Int> isa OTHER */
/* <var112:Int> isa OTHER */
var115 = 1; /* easy <var112:Int> isa OTHER*/
if (unlikely(!var115)) {
var_class_name118 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name118);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var119 = var_subindex + var112;
var113 = var119;
goto RET_LABEL114;
RET_LABEL114:(void)0;
}
}
{
{ /* Inline tables#TablesCapable#parser_action (self,var_state,var113) on <self:Parser> */
var122 = parser_action(self, var_state, var113);
var120 = var122;
goto RET_LABEL121;
RET_LABEL121:(void)0;
}
}
var_action_value = var120;
goto BREAK_label;
}
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var123 = 0;
{
{ /* Inline kernel#Int#== (var_action_type,var123) on <var_action_type:Int> */
var127 = var_action_type == var123;
var125 = var127;
goto RET_LABEL126;
RET_LABEL126:(void)0;
}
var124 = var125;
}
if (var124){
{
var128 = lexer_work__Lexer__next(var_lexer);
}
{
parser_work__Parser__push(self, var_action_value, var128); /* Direct call parser_work#Parser#push on <self:Parser>*/
}
} else {
var129 = 1;
{
{ /* Inline kernel#Int#== (var_action_type,var129) on <var_action_type:Int> */
var133 = var_action_type == var129;
var131 = var133;
goto RET_LABEL132;
RET_LABEL132:(void)0;
}
var130 = var131;
}
if (var130){
var134 = self->attrs[COLOR_parser_work__Parser___reduce_table].val; /* _reduce_table on <self:Parser> */
if (unlikely(var134 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _reduce_table");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_work.nit", 147);
show_backtrace(1);
}
{
var135 = array__Array___91d_93d(var134, var_action_value);
}
{
((void (*)(val*, val*))(var135->class->vft[COLOR_parser_work__ReduceAction__action]))(var135, self) /* action on <var135:nullable Object(ReduceAction)>*/;
}
} else {
var136 = 2;
{
{ /* Inline kernel#Int#== (var_action_type,var136) on <var_action_type:Int> */
var140 = var_action_type == var136;
var138 = var140;
goto RET_LABEL139;
RET_LABEL139:(void)0;
}
var137 = var138;
}
if (var137){
{
var141 = lexer_work__Lexer__next(var_lexer);
}
var_node2 = var141;
/* <var_node2:Token> isa EOF */
cltype143 = type_parser_nodes__EOF.color;
idtype144 = type_parser_nodes__EOF.id;
if(cltype143 >= var_node2->type->table_size) {
var142 = 0;
} else {
var142 = var_node2->type->type_table[cltype143] == idtype144;
}
if (unlikely(!var142)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_work.nit", 150);
show_backtrace(1);
}
{
var145 = parser_work__Parser__pop(self);
}
var_node1 = var145;
/* <var_node1:nullable Object> isa AModule */
cltype147 = type_parser_nodes__AModule.color;
idtype148 = type_parser_nodes__AModule.id;
if(var_node1 == NULL) {
var146 = 0;
} else {
if(cltype147 >= var_node1->type->table_size) {
var146 = 0;
} else {
var146 = var_node1->type->type_table[cltype147] == idtype148;
}
}
if (unlikely(!var146)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_work.nit", 152);
show_backtrace(1);
}
var149 = NEW_parser_nodes__Start(&type_parser_nodes__Start);
{
parser_nodes__Start__init(var149, var_node1, var_node2); /* Direct call parser_nodes#Start#init on <var149:Start>*/
}
var_node = var149;
var150 = NEW_parser_work__ComputeProdLocationVisitor(&type_parser_work__ComputeProdLocationVisitor);
{
((void (*)(val*))(var150->class->vft[COLOR_kernel__Object__init]))(var150) /* init on <var150:ComputeProdLocationVisitor>*/;
}
{
parser_nodes__Visitor__enter_visit(var150, var_node); /* Direct call parser_nodes#Visitor#enter_visit on <var150:ComputeProdLocationVisitor>*/
}
var = var_node;
goto RET_LABEL;
} else {
var151 = 3;
{
{ /* Inline kernel#Int#== (var_action_type,var151) on <var_action_type:Int> */
var155 = var_action_type == var151;
var153 = var155;
goto RET_LABEL154;
RET_LABEL154:(void)0;
}
var152 = var153;
}
if (var152){
for(;;) {
var156 = var_token->attrs[COLOR_parser_nodes__ANode___location].val != NULL; /* _location on <var_token:Token> */
var157 = !var156;
if (var157){
{
var158 = lexer_work__Lexer__next(var_lexer);
}
var_token = var158;
} else {
goto BREAK_label159;
}
}
BREAK_label159: (void)0;
var160 = NEW_parser_nodes__AParserError(&type_parser_nodes__AParserError);
if (varonce) {
var161 = varonce;
} else {
var162 = "Syntax error: unexpected ";
var163 = 25;
var164 = string__NativeString__to_s_with_length(var162, var163);
var161 = var164;
varonce = var161;
}
if (varonce165) {
var166 = varonce165;
} else {
var167 = ".";
var168 = 1;
var169 = string__NativeString__to_s_with_length(var167, var168);
var166 = var169;
varonce165 = var166;
}
var170 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var170 = array_instance Array[Object] */
var171 = 3;
var172 = NEW_array__NativeArray(var171, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var172)->values[0] = (val*) var161;
((struct instance_array__NativeArray*)var172)->values[1] = (val*) var_token;
((struct instance_array__NativeArray*)var172)->values[2] = (val*) var166;
{
((void (*)(val*, val*, long))(var170->class->vft[COLOR_array__Array__with_native]))(var170, var172, var171) /* with_native on <var170:Array[Object]>*/;
}
}
{
var173 = ((val* (*)(val*))(var170->class->vft[COLOR_string__Object__to_s]))(var170) /* to_s on <var170:Array[Object]>*/;
}
{
{ /* Inline parser_nodes#ANode#location (var_token) on <var_token:Token> */
var176 = var_token->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <var_token:Token> */
if (unlikely(var176 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 23);
show_backtrace(1);
}
var174 = var176;
RET_LABEL175:(void)0;
}
}
{
lexer_work__AParserError__init_parser_error(var160, var173, var174, var_token); /* Direct call lexer_work#AParserError#init_parser_error on <var160:AParserError>*/
}
var_node2177 = var160;
var178 = NEW_parser_nodes__Start(&type_parser_nodes__Start);
var179 = NULL;
{
parser_nodes__Start__init(var178, var179, var_node2177); /* Direct call parser_nodes#Start#init on <var178:Start>*/
}
var_node180 = var178;
var = var_node180;
goto RET_LABEL;
} else {
}
}
}
}
}
RET_LABEL:;
return var;
}
/* method parser_work#Parser#parse for (self: Object): Start */
val* VIRTUAL_parser_work__Parser__parse(val* self) {
val* var /* : Start */;
val* var1 /* : Start */;
var1 = parser_work__Parser__parse(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_work#Prod#collect_text for (self: Prod): String */
val* parser_work__Prod__collect_text(val* self) {
val* var /* : String */;
val* var1 /* : TextCollectorVisitor */;
val* var_v /* var v: TextCollectorVisitor */;
val* var2 /* : String */;
val* var4 /* : String */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : FlatString */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : String */;
val* var17 /* : String */;
var1 = NEW_parser_work__TextCollectorVisitor(&type_parser_work__TextCollectorVisitor);
{
((void (*)(val*))(var1->class->vft[COLOR_kernel__Object__init]))(var1) /* init on <var1:TextCollectorVisitor>*/;
}
var_v = var1;
{
parser_nodes__Visitor__enter_visit(var_v, self); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:TextCollectorVisitor>*/
}
{
{ /* Inline parser_work#TextCollectorVisitor#text (var_v) on <var_v:TextCollectorVisitor> */
var4 = var_v->attrs[COLOR_parser_work__TextCollectorVisitor___text].val; /* _text on <var_v:TextCollectorVisitor> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _text");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_work.nit", 253);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
if (varonce) {
var5 = varonce;
} else {
var6 = "";
var7 = 0;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
{
{ /* Inline kernel#Object#!= (var2,var5) on <var2:String> */
var_other = var5;
{
var13 = ((short int (*)(val*, val*))(var2->class->vft[COLOR_kernel__Object___61d_61d]))(var2, var_other) /* == on <var2:String>*/;
var12 = var13;
}
var14 = !var12;
var10 = var14;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_work.nit", 180);
show_backtrace(1);
}
{
{ /* Inline parser_work#TextCollectorVisitor#text (var_v) on <var_v:TextCollectorVisitor> */
var17 = var_v->attrs[COLOR_parser_work__TextCollectorVisitor___text].val; /* _text on <var_v:TextCollectorVisitor> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _text");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_work.nit", 253);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_work#Prod#collect_text for (self: Object): String */
val* VIRTUAL_parser_work__Prod__collect_text(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = parser_work__Prod__collect_text(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_work#ComputeProdLocationVisitor#visit for (self: ComputeProdLocationVisitor, ANode) */
void parser_work__ComputeProdLocationVisitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
short int var /* : Bool */;
int cltype;
int idtype;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : Location */;
val* var_loc /* var loc: Location */;
val* var4 /* : Array[Prod] */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : Array[Prod] */;
val* var_ /* var : Array[Prod] */;
val* var8 /* : ArrayIterator[nullable Object] */;
val* var_9 /* var : ArrayIterator[Prod] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_no /* var no: Prod */;
val* var13 /* : Array[Prod] */;
val* var14 /* : Array[Prod] */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : Location */;
val* var18 /* : nullable SourceFile */;
val* var20 /* : nullable SourceFile */;
long var21 /* : Int */;
long var23 /* : Int */;
long var24 /* : Int */;
long var26 /* : Int */;
long var27 /* : Int */;
long var29 /* : Int */;
long var30 /* : Int */;
long var32 /* : Int */;
val* var_loco /* var loco: Location */;
val* var33 /* : Array[Prod] */;
val* var_34 /* var : Array[Prod] */;
val* var35 /* : ArrayIterator[nullable Object] */;
val* var_36 /* var : ArrayIterator[Prod] */;
short int var37 /* : Bool */;
val* var38 /* : nullable Object */;
val* var_no39 /* var no: Prod */;
val* var43 /* : Array[Prod] */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
val* var47 /* : Array[Prod] */;
val* var48 /* : nullable Location */;
val* var_startl /* var startl: nullable Location */;
val* var49 /* : null */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
val* var56 /* : nullable Location */;
val* var_endl /* var endl: nullable Location */;
val* var57 /* : null */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
val* var64 /* : Location */;
val* var65 /* : nullable SourceFile */;
val* var67 /* : nullable SourceFile */;
long var68 /* : Int */;
long var70 /* : Int */;
long var71 /* : Int */;
long var73 /* : Int */;
long var74 /* : Int */;
long var76 /* : Int */;
long var77 /* : Int */;
long var79 /* : Int */;
val* var81 /* : Array[Prod] */;
short int var82 /* : Bool */;
short int var83 /* : Bool */;
val* var84 /* : Location */;
val* var85 /* : nullable SourceFile */;
val* var87 /* : nullable SourceFile */;
long var88 /* : Int */;
long var90 /* : Int */;
long var91 /* : Int */;
long var93 /* : Int */;
long var94 /* : Int */;
long var96 /* : Int */;
long var97 /* : Int */;
long var99 /* : Int */;
val* var_loc100 /* var loc: Location */;
val* var101 /* : Array[Prod] */;
val* var_102 /* var : Array[Prod] */;
val* var103 /* : ArrayIterator[nullable Object] */;
val* var_104 /* var : ArrayIterator[Prod] */;
short int var105 /* : Bool */;
val* var106 /* : nullable Object */;
val* var_no107 /* var no: Prod */;
val* var111 /* : Array[Prod] */;
val* var112 /* : Array[Prod] */;
var_n = p0;
/* <var_n:ANode> isa Token */
cltype = type_parser_nodes__Token.color;
idtype = type_parser_nodes__Token.id;
if(cltype >= var_n->type->table_size) {
var = 0;
} else {
var = var_n->type->type_table[cltype] == idtype;
}
if (var){
var1 = var_n->attrs[COLOR_parser_nodes__ANode___location].val != NULL; /* _location on <var_n:ANode(Token)> */
var2 = !var1;
if (var2){
goto RET_LABEL;
} else {
}
var3 = var_n->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <var_n:ANode(Token)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_work.nit", 202);
show_backtrace(1);
}
var_loc = var3;
self->attrs[COLOR_parser_work__ComputeProdLocationVisitor___last_location].val = var_loc; /* _last_location on <self:ComputeProdLocationVisitor> */
var4 = self->attrs[COLOR_parser_work__ComputeProdLocationVisitor___need_first_prods].val; /* _need_first_prods on <self:ComputeProdLocationVisitor> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _need_first_prods");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_work.nit", 206);
show_backtrace(1);
}
{
var5 = array__AbstractArrayRead__is_empty(var4);
}
var6 = !var5;
if (var6){
var7 = self->attrs[COLOR_parser_work__ComputeProdLocationVisitor___need_first_prods].val; /* _need_first_prods on <self:ComputeProdLocationVisitor> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _need_first_prods");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_work.nit", 207);
show_backtrace(1);
}
var_ = var7;
{
var8 = array__AbstractArrayRead__iterator(var_);
}
var_9 = var8;
for(;;) {
{
var10 = array__ArrayIterator__is_ok(var_9);
}
if (var10){
{
var11 = array__ArrayIterator__item(var_9);
}
var_no = var11;
var_no->attrs[COLOR_parser_work__Prod___first_location].val = var_loc; /* _first_location on <var_no:Prod> */
{
array__ArrayIterator__next(var_9); /* Direct call array#ArrayIterator#next on <var_9:ArrayIterator[Prod]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_9) on <var_9:ArrayIterator[Prod]> */
RET_LABEL12:(void)0;
}
}
var13 = self->attrs[COLOR_parser_work__ComputeProdLocationVisitor___need_first_prods].val; /* _need_first_prods on <self:ComputeProdLocationVisitor> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _need_first_prods");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_work.nit", 210);
show_backtrace(1);
}
{
array__AbstractArray__clear(var13); /* Direct call array#AbstractArray#clear on <var13:Array[Prod]>*/
}
} else {
}
var14 = self->attrs[COLOR_parser_work__ComputeProdLocationVisitor___need_after_epsilons].val; /* _need_after_epsilons on <self:ComputeProdLocationVisitor> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _need_after_epsilons");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_work.nit", 214);
show_backtrace(1);
}
{
var15 = array__AbstractArrayRead__is_empty(var14);
}
var16 = !var15;
if (var16){
var17 = NEW_location__Location(&type_location__Location);
{
{ /* Inline location#Location#file (var_loc) on <var_loc:Location> */
var20 = var_loc->attrs[COLOR_location__Location___file].val; /* _file on <var_loc:Location> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline location#Location#line_start (var_loc) on <var_loc:Location> */
var23 = var_loc->attrs[COLOR_location__Location___line_start].l; /* _line_start on <var_loc:Location> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline location#Location#line_start (var_loc) on <var_loc:Location> */
var26 = var_loc->attrs[COLOR_location__Location___line_start].l; /* _line_start on <var_loc:Location> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline location#Location#column_start (var_loc) on <var_loc:Location> */
var29 = var_loc->attrs[COLOR_location__Location___column_start].l; /* _column_start on <var_loc:Location> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline location#Location#column_start (var_loc) on <var_loc:Location> */
var32 = var_loc->attrs[COLOR_location__Location___column_start].l; /* _column_start on <var_loc:Location> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
location__Location__init(var17, var18, var21, var24, var27, var30); /* Direct call location#Location#init on <var17:Location>*/
}
var_loco = var17;
var33 = self->attrs[COLOR_parser_work__ComputeProdLocationVisitor___need_after_epsilons].val; /* _need_after_epsilons on <self:ComputeProdLocationVisitor> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _need_after_epsilons");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_work.nit", 216);
show_backtrace(1);
}
var_34 = var33;
{
var35 = array__AbstractArrayRead__iterator(var_34);
}
var_36 = var35;
for(;;) {
{
var37 = array__ArrayIterator__is_ok(var_36);
}
if (var37){
{
var38 = array__ArrayIterator__item(var_36);
}
var_no39 = var38;
{
{ /* Inline parser_nodes#ANode#location= (var_no39,var_loco) on <var_no39:Prod> */
var_no39->attrs[COLOR_parser_nodes__ANode___location].val = var_loco; /* _location on <var_no39:Prod> */
RET_LABEL40:(void)0;
}
}
{
array__ArrayIterator__next(var_36); /* Direct call array#ArrayIterator#next on <var_36:ArrayIterator[Prod]>*/
}
} else {
goto BREAK_label41;
}
}
BREAK_label41: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_36) on <var_36:ArrayIterator[Prod]> */
RET_LABEL42:(void)0;
}
}
var43 = self->attrs[COLOR_parser_work__ComputeProdLocationVisitor___need_after_epsilons].val; /* _need_after_epsilons on <self:ComputeProdLocationVisitor> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _need_after_epsilons");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_work.nit", 219);
show_backtrace(1);
}
{
array__AbstractArray__clear(var43); /* Direct call array#AbstractArray#clear on <var43:Array[Prod]>*/
}
} else {
}
} else {
/* <var_n:ANode> isa Prod */
cltype45 = type_parser_nodes__Prod.color;
idtype46 = type_parser_nodes__Prod.id;
if(cltype45 >= var_n->type->table_size) {
var44 = 0;
} else {
var44 = var_n->type->type_table[cltype45] == idtype46;
}
if (unlikely(!var44)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_work.nit", 222);
show_backtrace(1);
}
var47 = self->attrs[COLOR_parser_work__ComputeProdLocationVisitor___need_first_prods].val; /* _need_first_prods on <self:ComputeProdLocationVisitor> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _need_first_prods");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_work.nit", 223);
show_backtrace(1);
}
{
array__Array__add(var47, var_n); /* Direct call array#Array#add on <var47:Array[Prod]>*/
}
{
((void (*)(val*, val*))(var_n->class->vft[COLOR_parser_nodes__ANode__visit_all]))(var_n, self) /* visit_all on <var_n:ANode(Prod)>*/;
}
var48 = var_n->attrs[COLOR_parser_work__Prod___first_location].val; /* _first_location on <var_n:ANode(Prod)> */
var_startl = var48;
var49 = NULL;
if (var_startl == NULL) {
var50 = 0; /* is null */
} else {
var50 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_startl,var49) on <var_startl:nullable Location> */
var_other = var49;
{
var54 = ((short int (*)(val*, val*))(var_startl->class->vft[COLOR_kernel__Object___61d_61d]))(var_startl, var_other) /* == on <var_startl:nullable Location(Location)>*/;
var53 = var54;
}
var55 = !var53;
var51 = var55;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
var50 = var51;
}
if (var50){
var56 = self->attrs[COLOR_parser_work__ComputeProdLocationVisitor___last_location].val; /* _last_location on <self:ComputeProdLocationVisitor> */
var_endl = var56;
var57 = NULL;
if (var_endl == NULL) {
var58 = 0; /* is null */
} else {
var58 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_endl,var57) on <var_endl:nullable Location> */
var_other = var57;
{
var62 = ((short int (*)(val*, val*))(var_endl->class->vft[COLOR_kernel__Object___61d_61d]))(var_endl, var_other) /* == on <var_endl:nullable Location(Location)>*/;
var61 = var62;
}
var63 = !var61;
var59 = var63;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
var58 = var59;
}
if (unlikely(!var58)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_work.nit", 231);
show_backtrace(1);
}
var64 = NEW_location__Location(&type_location__Location);
{
{ /* Inline location#Location#file (var_startl) on <var_startl:nullable Location(Location)> */
var67 = var_startl->attrs[COLOR_location__Location___file].val; /* _file on <var_startl:nullable Location(Location)> */
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
{ /* Inline location#Location#line_start (var_startl) on <var_startl:nullable Location(Location)> */
var70 = var_startl->attrs[COLOR_location__Location___line_start].l; /* _line_start on <var_startl:nullable Location(Location)> */
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
{ /* Inline location#Location#line_end (var_endl) on <var_endl:nullable Location(Location)> */
var73 = var_endl->attrs[COLOR_location__Location___line_end].l; /* _line_end on <var_endl:nullable Location(Location)> */
var71 = var73;
RET_LABEL72:(void)0;
}
}
{
{ /* Inline location#Location#column_start (var_startl) on <var_startl:nullable Location(Location)> */
var76 = var_startl->attrs[COLOR_location__Location___column_start].l; /* _column_start on <var_startl:nullable Location(Location)> */
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
{ /* Inline location#Location#column_end (var_endl) on <var_endl:nullable Location(Location)> */
var79 = var_endl->attrs[COLOR_location__Location___column_end].l; /* _column_end on <var_endl:nullable Location(Location)> */
var77 = var79;
RET_LABEL78:(void)0;
}
}
{
location__Location__init(var64, var65, var68, var71, var74, var77); /* Direct call location#Location#init on <var64:Location>*/
}
{
{ /* Inline parser_nodes#ANode#location= (var_n,var64) on <var_n:ANode(Prod)> */
var_n->attrs[COLOR_parser_nodes__ANode___location].val = var64; /* _location on <var_n:ANode(Prod)> */
RET_LABEL80:(void)0;
}
}
var81 = self->attrs[COLOR_parser_work__ComputeProdLocationVisitor___need_after_epsilons].val; /* _need_after_epsilons on <self:ComputeProdLocationVisitor> */
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _need_after_epsilons");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_work.nit", 235);
show_backtrace(1);
}
{
var82 = array__AbstractArrayRead__is_empty(var81);
}
var83 = !var82;
if (var83){
var84 = NEW_location__Location(&type_location__Location);
{
{ /* Inline location#Location#file (var_endl) on <var_endl:nullable Location(Location)> */
var87 = var_endl->attrs[COLOR_location__Location___file].val; /* _file on <var_endl:nullable Location(Location)> */
var85 = var87;
RET_LABEL86:(void)0;
}
}
{
{ /* Inline location#Location#line_end (var_endl) on <var_endl:nullable Location(Location)> */
var90 = var_endl->attrs[COLOR_location__Location___line_end].l; /* _line_end on <var_endl:nullable Location(Location)> */
var88 = var90;
RET_LABEL89:(void)0;
}
}
{
{ /* Inline location#Location#line_end (var_endl) on <var_endl:nullable Location(Location)> */
var93 = var_endl->attrs[COLOR_location__Location___line_end].l; /* _line_end on <var_endl:nullable Location(Location)> */
var91 = var93;
RET_LABEL92:(void)0;
}
}
{
{ /* Inline location#Location#column_end (var_endl) on <var_endl:nullable Location(Location)> */
var96 = var_endl->attrs[COLOR_location__Location___column_end].l; /* _column_end on <var_endl:nullable Location(Location)> */
var94 = var96;
RET_LABEL95:(void)0;
}
}
{
{ /* Inline location#Location#column_end (var_endl) on <var_endl:nullable Location(Location)> */
var99 = var_endl->attrs[COLOR_location__Location___column_end].l; /* _column_end on <var_endl:nullable Location(Location)> */
var97 = var99;
RET_LABEL98:(void)0;
}
}
{
location__Location__init(var84, var85, var88, var91, var94, var97); /* Direct call location#Location#init on <var84:Location>*/
}
var_loc100 = var84;
var101 = self->attrs[COLOR_parser_work__ComputeProdLocationVisitor___need_after_epsilons].val; /* _need_after_epsilons on <self:ComputeProdLocationVisitor> */
if (unlikely(var101 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _need_after_epsilons");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_work.nit", 237);
show_backtrace(1);
}
var_102 = var101;
{
var103 = array__AbstractArrayRead__iterator(var_102);
}
var_104 = var103;
for(;;) {
{
var105 = array__ArrayIterator__is_ok(var_104);
}
if (var105){
{
var106 = array__ArrayIterator__item(var_104);
}
var_no107 = var106;
{
{ /* Inline parser_nodes#ANode#location= (var_no107,var_loc100) on <var_no107:Prod> */
var_no107->attrs[COLOR_parser_nodes__ANode___location].val = var_loc100; /* _location on <var_no107:Prod> */
RET_LABEL108:(void)0;
}
}
{
array__ArrayIterator__next(var_104); /* Direct call array#ArrayIterator#next on <var_104:ArrayIterator[Prod]>*/
}
} else {
goto BREAK_label109;
}
}
BREAK_label109: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_104) on <var_104:ArrayIterator[Prod]> */
RET_LABEL110:(void)0;
}
}
var111 = self->attrs[COLOR_parser_work__ComputeProdLocationVisitor___need_after_epsilons].val; /* _need_after_epsilons on <self:ComputeProdLocationVisitor> */
if (unlikely(var111 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _need_after_epsilons");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_work.nit", 241);
show_backtrace(1);
}
{
array__AbstractArray__clear(var111); /* Direct call array#AbstractArray#clear on <var111:Array[Prod]>*/
}
} else {
}
} else {
var112 = self->attrs[COLOR_parser_work__ComputeProdLocationVisitor___need_after_epsilons].val; /* _need_after_epsilons on <self:ComputeProdLocationVisitor> */
if (unlikely(var112 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _need_after_epsilons");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_work.nit", 245);
show_backtrace(1);
}
{
array__Array__add(var112, var_n); /* Direct call array#Array#add on <var112:Array[Prod]>*/
}
}
}
RET_LABEL:;
}
/* method parser_work#ComputeProdLocationVisitor#visit for (self: Object, ANode) */
void VIRTUAL_parser_work__ComputeProdLocationVisitor__visit(val* self, val* p0) {
parser_work__ComputeProdLocationVisitor__visit(self, p0); /* Direct call parser_work#ComputeProdLocationVisitor#visit on <self:Object(ComputeProdLocationVisitor)>*/
RET_LABEL:;
}
/* method parser_work#TextCollectorVisitor#text for (self: TextCollectorVisitor): String */
val* parser_work__TextCollectorVisitor__text(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_parser_work__TextCollectorVisitor___text].val; /* _text on <self:TextCollectorVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _text");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_work.nit", 253);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_work#TextCollectorVisitor#text for (self: Object): String */
val* VIRTUAL_parser_work__TextCollectorVisitor__text(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{ /* Inline parser_work#TextCollectorVisitor#text (self) on <self:Object(TextCollectorVisitor)> */
var3 = self->attrs[COLOR_parser_work__TextCollectorVisitor___text].val; /* _text on <self:Object(TextCollectorVisitor)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _text");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_work.nit", 253);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_work#TextCollectorVisitor#text= for (self: TextCollectorVisitor, String) */
void parser_work__TextCollectorVisitor__text_61d(val* self, val* p0) {
self->attrs[COLOR_parser_work__TextCollectorVisitor___text].val = p0; /* _text on <self:TextCollectorVisitor> */
RET_LABEL:;
}
/* method parser_work#TextCollectorVisitor#text= for (self: Object, String) */
void VIRTUAL_parser_work__TextCollectorVisitor__text_61d(val* self, val* p0) {
{ /* Inline parser_work#TextCollectorVisitor#text= (self,p0) on <self:Object(TextCollectorVisitor)> */
self->attrs[COLOR_parser_work__TextCollectorVisitor___text].val = p0; /* _text on <self:Object(TextCollectorVisitor)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method parser_work#TextCollectorVisitor#visit for (self: TextCollectorVisitor, ANode) */
void parser_work__TextCollectorVisitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
short int var /* : Bool */;
int cltype;
int idtype;
val* var_ /* var : TextCollectorVisitor */;
val* var1 /* : String */;
val* var3 /* : String */;
val* var4 /* : String */;
val* var5 /* : String */;
var_n = p0;
/* <var_n:ANode> isa Token */
cltype = type_parser_nodes__Token.color;
idtype = type_parser_nodes__Token.id;
if(cltype >= var_n->type->table_size) {
var = 0;
} else {
var = var_n->type->type_table[cltype] == idtype;
}
if (var){
var_ = self;
{
{ /* Inline parser_work#TextCollectorVisitor#text (var_) on <var_:TextCollectorVisitor> */
var3 = var_->attrs[COLOR_parser_work__TextCollectorVisitor___text].val; /* _text on <var_:TextCollectorVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _text");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_work.nit", 253);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = lexer_work__Token__text(var_n);
}
{
var5 = string__FlatString___43d(var1, var4);
}
{
{ /* Inline parser_work#TextCollectorVisitor#text= (var_,var5) on <var_:TextCollectorVisitor> */
var_->attrs[COLOR_parser_work__TextCollectorVisitor___text].val = var5; /* _text on <var_:TextCollectorVisitor> */
RET_LABEL6:(void)0;
}
}
} else {
}
{
((void (*)(val*, val*))(var_n->class->vft[COLOR_parser_nodes__ANode__visit_all]))(var_n, self) /* visit_all on <var_n:ANode>*/;
}
RET_LABEL:;
}
/* method parser_work#TextCollectorVisitor#visit for (self: Object, ANode) */
void VIRTUAL_parser_work__TextCollectorVisitor__visit(val* self, val* p0) {
parser_work__TextCollectorVisitor__visit(self, p0); /* Direct call parser_work#TextCollectorVisitor#visit on <self:Object(TextCollectorVisitor)>*/
RET_LABEL:;
}
/* method parser_work#ReduceAction#concat for (self: ReduceAction, Array[Object], Array[Object]): Array[Object] */
val* parser_work__ReduceAction__concat(val* self, val* p0, val* p1) {
val* var /* : Array[Object] */;
val* var_l1 /* var l1: Array[Object] */;
val* var_l2 /* var l2: Array[Object] */;
short int var1 /* : Bool */;
var_l1 = p0;
var_l2 = p1;
{
var1 = array__AbstractArrayRead__is_empty(var_l1);
}
if (var1){
var = var_l2;
goto RET_LABEL;
} else {
}
{
abstract_collection__Sequence__append(var_l1, var_l2); /* Direct call abstract_collection#Sequence#append on <var_l1:Array[Object]>*/
}
var = var_l1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_work#ReduceAction#concat for (self: Object, Array[Object], Array[Object]): Array[Object] */
val* VIRTUAL_parser_work__ReduceAction__concat(val* self, val* p0, val* p1) {
val* var /* : Array[Object] */;
val* var1 /* : Array[Object] */;
var1 = parser_work__ReduceAction__concat(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_work#ReduceAction#init for (self: ReduceAction, Int) */
void parser_work__ReduceAction__init(val* self, long p0) {
long var_g /* var g: Int */;
var_g = p0;
self->attrs[COLOR_parser_work__ReduceAction___goto].l = var_g; /* _goto on <self:ReduceAction> */
RET_LABEL:;
}
/* method parser_work#ReduceAction#init for (self: Object, Int) */
void VIRTUAL_parser_work__ReduceAction__init(val* self, long p0) {
parser_work__ReduceAction__init(self, p0); /* Direct call parser_work#ReduceAction#init on <self:Object(ReduceAction)>*/
RET_LABEL:;
}
