#include "nitc__parser_work.sep.0.h"
/* method parser_work$State$state= for (self: State, Int) */
void nitc__parser_work___nitc__parser_work__State___state_61d(val* self, long p0) {
self->attrs[COLOR_nitc__parser_work__State___state].l = p0; /* _state on <self:State> */
RET_LABEL:;
}
/* method parser_work$State$nodes= for (self: State, nullable Object) */
void nitc__parser_work___nitc__parser_work__State___nodes_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__parser_work__State___nodes].val = p0; /* _nodes on <self:State> */
RET_LABEL:;
}
/* method parser_work$State$init for (self: State) */
void nitc__parser_work___nitc__parser_work__State___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc__parser_work___nitc__parser_work__State___core__kernel__Object__init]))(self); /* init on <self:State>*/
}
RET_LABEL:;
}
/* method parser_work$Parser$lexer= for (self: Parser, Lexer) */
void nitc___nitc__Parser___lexer_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__parser_work__Parser___lexer].val = p0; /* _lexer on <self:Parser> */
RET_LABEL:;
}
/* method parser_work$Parser$init for (self: Parser) */
void nitc___nitc__Parser___core__kernel__Object__init(val* self) {
static val* varonce;
static int varonce_guard;
val* var /* : Array[ReduceAction] */;
val* var1 /* : Array[ReduceAction] */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__Parser___core__kernel__Object__init]))(self); /* init on <self:Parser>*/
}
if (likely(varonce_guard)) {
var = varonce;
} else {
{
var1 = nitc__parser___Parser___build_reduce_table(self);
}
var = var1;
varonce = var;
varonce_guard = 1;
}
{
{ /* Inline parser_work$Parser$reduce_table= (self,var) on <self:Parser> */
self->attrs[COLOR_nitc__parser_work__Parser___reduce_table].val = var; /* _reduce_table on <self:Parser> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_work$Parser$go_to for (self: Parser, Int): Int */
long nitc___nitc__Parser___go_to(val* self, long p0) {
long var /* : Int */;
long var_index /* var index: Int */;
long var1 /* : Int */;
long var_state /* var state: Int */;
long var_low /* var low: Int */;
long var2 /* : Int */;
long var4 /* : Int for extern */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var8 /* : Int */;
long var_high /* var high: Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
short int var15 /* : Bool */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
long var23 /* : Int */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
long var29 /* : Int */;
long var_middle /* var middle: Int */;
long var30 /* : Int */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
long var36 /* : Int */;
long var37 /* : Int */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name42;
long var43 /* : Int */;
long var_subindex /* var subindex: Int */;
long var44 /* : Int */;
long var46 /* : Int for extern */;
long var_goal /* var goal: Int */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
const char* var_class_name52;
short int var53 /* : Bool */;
long var54 /* : Int */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
const char* var_class_name59;
long var60 /* : Int */;
short int var61 /* : Bool */;
short int var63 /* : Bool */;
int cltype64;
int idtype65;
const char* var_class_name66;
short int var67 /* : Bool */;
long var68 /* : Int */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const char* var_class_name73;
long var74 /* : Int */;
long var75 /* : Int */;
short int var77 /* : Bool */;
int cltype78;
int idtype79;
const char* var_class_name80;
long var81 /* : Int */;
long var82 /* : Int */;
long var84 /* : Int for extern */;
long var85 /* : Int */;
long var87 /* : Int for extern */;
var_index = p0;
{
var1 = nitc___nitc__Parser___state(self);
}
var_state = var1;
var_low = 1l;
{
{ /* Inline tables$TablesCapable$parser_goto (self,var_index,0l) on <self:Parser> */
var4 = parser_goto(self, var_index, 0l);
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var2,1l) on <var2:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var7 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var8 = var2 - 1l;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var_high = var5;
for(;;) {
{
{ /* Inline kernel$Int$<= (var_low,var_high) on <var_low:Int> */
/* Covariant cast for argument 0 (i) <var_high:Int> isa OTHER */
/* <var_high:Int> isa OTHER */
var11 = 1; /* easy <var_high:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var15 = var_low <= var_high;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
{
{ /* Inline kernel$Int$+ (var_low,var_high) on <var_low:Int> */
/* Covariant cast for argument 0 (i) <var_high:Int> isa OTHER */
/* <var_high:Int> isa OTHER */
var18 = 1; /* easy <var_high:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var22 = var_low + var_high;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline kernel$Int$/ (var16,2l) on <var16:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var25 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 733);
fatal_exit(1);
}
var29 = var16 / 2l;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var_middle = var23;
{
{ /* Inline kernel$Int$* (var_middle,2l) on <var_middle:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var32 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 732);
fatal_exit(1);
}
var36 = var_middle * 2l;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var30,1l) on <var30:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var39 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var39)) {
var_class_name42 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var43 = var30 + 1l;
var37 = var43;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
var_subindex = var37;
{
{ /* Inline tables$TablesCapable$parser_goto (self,var_index,var_subindex) on <self:Parser> */
var46 = parser_goto(self, var_index, var_subindex);
var44 = var46;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
var_goal = var44;
{
{ /* Inline kernel$Int$< (var_state,var_goal) on <var_state:Int> */
/* Covariant cast for argument 0 (i) <var_goal:Int> isa OTHER */
/* <var_goal:Int> isa OTHER */
var49 = 1; /* easy <var_goal:Int> isa OTHER*/
if (unlikely(!var49)) {
var_class_name52 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name52);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var53 = var_state < var_goal;
var47 = var53;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
if (var47){
{
{ /* Inline kernel$Int$- (var_middle,1l) on <var_middle:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var56 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var56)) {
var_class_name59 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name59);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var60 = var_middle - 1l;
var54 = var60;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
var_high = var54;
} else {
{
{ /* Inline kernel$Int$> (var_state,var_goal) on <var_state:Int> */
/* Covariant cast for argument 0 (i) <var_goal:Int> isa OTHER */
/* <var_goal:Int> isa OTHER */
var63 = 1; /* easy <var_goal:Int> isa OTHER*/
if (unlikely(!var63)) {
var_class_name66 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name66);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var67 = var_state > var_goal;
var61 = var67;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
if (var61){
{
{ /* Inline kernel$Int$+ (var_middle,1l) on <var_middle:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var70 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var70)) {
var_class_name73 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var74 = var_middle + 1l;
var68 = var74;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
var_low = var68;
} else {
{
{ /* Inline kernel$Int$+ (var_subindex,1l) on <var_subindex:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var77 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var77)) {
var_class_name80 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name80);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var81 = var_subindex + 1l;
var75 = var81;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
}
{
{ /* Inline tables$TablesCapable$parser_goto (self,var_index,var75) on <self:Parser> */
var84 = parser_goto(self, var_index, var75);
var82 = var84;
goto RET_LABEL83;
RET_LABEL83:(void)0;
}
}
var = var82;
goto RET_LABEL;
}
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline tables$TablesCapable$parser_goto (self,var_index,2l) on <self:Parser> */
var87 = parser_goto(self, var_index, 2l);
var85 = var87;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
var = var85;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_work$Parser$push for (self: Parser, Int, nullable Object) */
void nitc___nitc__Parser___push(val* self, long p0, val* p1) {
long var_numstate /* var numstate: Int */;
val* var_list_node /* var list_node: nullable Object */;
long var /* : Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
long var_pos /* var pos: Int */;
val* var5 /* : Array[State] */;
long var6 /* : Int */;
long var8 /* : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
short int var15 /* : Bool */;
val* var16 /* : Array[State] */;
val* var17 /* : nullable Object */;
val* var_state /* var state: State */;
val* var18 /* : Array[State] */;
val* var19 /* : State */;
var_numstate = p0;
var_list_node = p1;
var = self->attrs[COLOR_nitc__parser_work__Parser___stack_pos].l; /* _stack_pos on <self:Parser> */
{
{ /* Inline kernel$Int$+ (var,1l) on <var:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var3 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var4 = var + 1l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_pos = var1;
self->attrs[COLOR_nitc__parser_work__Parser___stack_pos].l = var_pos; /* _stack_pos on <self:Parser> */
var5 = self->attrs[COLOR_nitc__parser_work__Parser___stack].val; /* _stack on <self:Parser> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stack");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_work, 75);
fatal_exit(1);
}
{
{ /* Inline array$AbstractArrayRead$length (var5) on <var5:Array[State]> */
var8 = var5->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var5:Array[State]> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline kernel$Int$< (var_pos,var6) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var6:Int> isa OTHER */
/* <var6:Int> isa OTHER */
var11 = 1; /* easy <var6:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var15 = var_pos < var6;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
var16 = self->attrs[COLOR_nitc__parser_work__Parser___stack].val; /* _stack on <self:Parser> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stack");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_work, 76);
fatal_exit(1);
}
{
var17 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var16, var_pos);
}
var_state = var17;
var_state->attrs[COLOR_nitc__parser_work__State___state].l = var_numstate; /* _state on <var_state:State> */
var_state->attrs[COLOR_nitc__parser_work__State___nodes].val = var_list_node; /* _nodes on <var_state:State> */
} else {
var18 = self->attrs[COLOR_nitc__parser_work__Parser___stack].val; /* _stack on <self:Parser> */
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stack");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_work, 80);
fatal_exit(1);
}
var19 = NEW_nitc__parser_work__State(&type_nitc__parser_work__State);
{
((void(*)(val* self, long p0))(var19->class->vft[COLOR_nitc__parser_work__State__state_61d]))(var19, var_numstate); /* state= on <var19:State>*/
}
{
((void(*)(val* self, val* p0))(var19->class->vft[COLOR_nitc__parser_work__State__nodes_61d]))(var19, var_list_node); /* nodes= on <var19:State>*/
}
{
((void(*)(val* self))(var19->class->vft[COLOR_core__kernel__Object__init]))(var19); /* init on <var19:State>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var18, var19); /* Direct call array$AbstractArray$push on <var18:Array[State]>*/
}
}
RET_LABEL:;
}
/* method parser_work$Parser$state for (self: Parser): Int */
long nitc___nitc__Parser___state(val* self) {
long var /* : Int */;
val* var1 /* : Array[State] */;
long var2 /* : Int */;
val* var3 /* : nullable Object */;
long var4 /* : Int */;
var1 = self->attrs[COLOR_nitc__parser_work__Parser___stack].val; /* _stack on <self:Parser> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stack");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_work, 87);
fatal_exit(1);
}
var2 = self->attrs[COLOR_nitc__parser_work__Parser___stack_pos].l; /* _stack_pos on <self:Parser> */
{
var3 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var1, var2);
}
var4 = var3->attrs[COLOR_nitc__parser_work__State___state].l; /* _state on <var3:nullable Object(State)> */
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_work$Parser$pop for (self: Parser): nullable Object */
val* nitc___nitc__Parser___pop(val* self) {
val* var /* : nullable Object */;
val* var1 /* : Array[State] */;
long var2 /* : Int */;
val* var3 /* : nullable Object */;
val* var4 /* : nullable Object */;
val* var_res /* var res: nullable Object */;
long var5 /* : Int */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var9 /* : Int */;
var1 = self->attrs[COLOR_nitc__parser_work__Parser___stack].val; /* _stack on <self:Parser> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stack");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_work, 93);
fatal_exit(1);
}
var2 = self->attrs[COLOR_nitc__parser_work__Parser___stack_pos].l; /* _stack_pos on <self:Parser> */
{
var3 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var1, var2);
}
var4 = var3->attrs[COLOR_nitc__parser_work__State___nodes].val; /* _nodes on <var3:nullable Object(State)> */
var_res = var4;
var5 = self->attrs[COLOR_nitc__parser_work__Parser___stack_pos].l; /* _stack_pos on <self:Parser> */
{
{ /* Inline kernel$Int$- (var5,1l) on <var5:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var8 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var9 = var5 - 1l;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
self->attrs[COLOR_nitc__parser_work__Parser___stack_pos].l = var6; /* _stack_pos on <self:Parser> */
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_work$Parser$parse for (self: Parser): Start */
val* nitc___nitc__Parser___parse(val* self) {
val* var /* : Start */;
val* var1 /* : Lexer */;
val* var_lexer /* var lexer: Lexer */;
val* var2 /* : Token */;
val* var_token /* var token: Token */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : Start */;
long var5 /* : Int */;
long var_state /* var state: Int */;
long var6 /* : Int */;
long var_index /* var index: Int */;
long var7 /* : Int */;
long var9 /* : Int for extern */;
long var_action_type /* var action_type: Int */;
long var10 /* : Int */;
long var12 /* : Int for extern */;
long var_action_value /* var action_value: Int */;
long var_low /* var low: Int */;
long var13 /* : Int */;
long var15 /* : Int for extern */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name;
long var21 /* : Int */;
long var_high /* var high: Int */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
short int var28 /* : Bool */;
long var29 /* : Int */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
long var35 /* : Int */;
long var36 /* : Int */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
long var42 /* : Int */;
long var_middle /* var middle: Int */;
long var43 /* : Int */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
long var49 /* : Int */;
long var50 /* : Int */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
const char* var_class_name55;
long var56 /* : Int */;
long var_subindex /* var subindex: Int */;
long var57 /* : Int */;
long var59 /* : Int for extern */;
long var_goal /* var goal: Int */;
short int var60 /* : Bool */;
short int var62 /* : Bool */;
int cltype63;
int idtype64;
const char* var_class_name65;
short int var66 /* : Bool */;
long var67 /* : Int */;
short int var69 /* : Bool */;
int cltype70;
int idtype71;
const char* var_class_name72;
long var73 /* : Int */;
short int var74 /* : Bool */;
short int var76 /* : Bool */;
int cltype77;
int idtype78;
const char* var_class_name79;
short int var80 /* : Bool */;
long var81 /* : Int */;
short int var83 /* : Bool */;
int cltype84;
int idtype85;
const char* var_class_name86;
long var87 /* : Int */;
long var88 /* : Int */;
short int var90 /* : Bool */;
int cltype91;
int idtype92;
const char* var_class_name93;
long var94 /* : Int */;
long var95 /* : Int */;
long var97 /* : Int for extern */;
long var98 /* : Int */;
short int var100 /* : Bool */;
int cltype101;
int idtype102;
const char* var_class_name103;
long var104 /* : Int */;
long var105 /* : Int */;
long var107 /* : Int for extern */;
short int var108 /* : Bool */;
short int var110 /* : Bool */;
val* var111 /* : Token */;
short int var112 /* : Bool */;
short int var114 /* : Bool */;
val* var115 /* : Array[ReduceAction] */;
val* var116 /* : nullable Object */;
short int var117 /* : Bool */;
short int var119 /* : Bool */;
val* var120 /* : Token */;
val* var_node2 /* var node2: Token */;
short int var121 /* : Bool */;
int cltype122;
int idtype123;
val* var124 /* : nullable Object */;
val* var_node1 /* var node1: nullable Object */;
short int var125 /* : Bool */;
int cltype126;
int idtype127;
val* var128 /* : Start */;
val* var_node /* var node: Start */;
val* var130 /* : ComputeProdLocationVisitor */;
val* var131 /* : SourceFile */;
val* var133 /* : SourceFile */;
val* var134 /* : nullable Token */;
val* var136 /* : nullable Token */;
short int var137 /* : Bool */;
short int var139 /* : Bool */;
short int var140 /* : Bool */;
short int var141 /* : Bool */;
val* var142 /* : Token */;
val* var144 /* : AParserError */;
val* var145 /* : NativeArray[String] */;
static val* varonce;
static val* varonce146;
val* var147 /* : String */;
char* var148 /* : CString */;
val* var149 /* : String */;
val* var150 /* : nullable Int */;
val* var151 /* : nullable Int */;
val* var152 /* : nullable Bool */;
val* var153 /* : nullable Bool */;
static val* varonce154;
val* var155 /* : String */;
char* var156 /* : CString */;
val* var157 /* : String */;
val* var158 /* : nullable Int */;
val* var159 /* : nullable Int */;
val* var160 /* : nullable Bool */;
val* var161 /* : nullable Bool */;
val* var162 /* : String */;
val* var163 /* : String */;
val* var164 /* : Location */;
val* var166 /* : Location */;
val* var_node2167 /* var node2: AParserError */;
val* var168 /* : Start */;
val* var_node169 /* var node: Start */;
{
nitc___nitc__Parser___push(self, 0l, ((val*)NULL)); /* Direct call parser_work$Parser$push on <self:Parser>*/
}
var1 = self->attrs[COLOR_nitc__parser_work__Parser___lexer].val; /* _lexer on <self:Parser> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lexer");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_work, 103);
fatal_exit(1);
}
var_lexer = var1;
for(;;) {
{
var2 = nitc___nitc__Lexer___peek(var_lexer);
}
var_token = var2;
/* <var_token:Token> isa AError */
cltype = type_nitc__AError.color;
idtype = type_nitc__AError.id;
if(cltype >= var_token->type->table_size) {
var3 = 0;
} else {
var3 = var_token->type->type_table[cltype] == idtype;
}
if (var3){
var4 = NEW_nitc__Start(&type_nitc__Start);
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_nitc__parser_nodes__Start__n_base_61d]))(var4, ((val*)NULL)); /* n_base= on <var4:Start>*/
}
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_nitc__parser_nodes__Start__n_eof_61d]))(var4, var_token); /* n_eof= on <var4:Start>*/
}
{
((void(*)(val* self))(var4->class->vft[COLOR_core__kernel__Object__init]))(var4); /* init on <var4:Start>*/
}
var = var4;
goto RET_LABEL;
} else {
}
{
var5 = nitc___nitc__Parser___state(self);
}
var_state = var5;
{
var6 = ((long(*)(val* self))(var_token->class->vft[COLOR_nitc__lexer_work__Token__parser_index]))(var_token); /* parser_index on <var_token:Token>*/
}
var_index = var6;
{
{ /* Inline tables$TablesCapable$parser_action (self,var_state,2l) on <self:Parser> */
var9 = parser_action(self, var_state, 2l);
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_action_type = var7;
{
{ /* Inline tables$TablesCapable$parser_action (self,var_state,3l) on <self:Parser> */
var12 = parser_action(self, var_state, 3l);
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var_action_value = var10;
var_low = 1l;
{
{ /* Inline tables$TablesCapable$parser_action (self,var_state,0l) on <self:Parser> */
var15 = parser_action(self, var_state, 0l);
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var13,1l) on <var13:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var18 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var21 = var13 - 1l;
var16 = var21;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_high = var16;
for(;;) {
{
{ /* Inline kernel$Int$<= (var_low,var_high) on <var_low:Int> */
/* Covariant cast for argument 0 (i) <var_high:Int> isa OTHER */
/* <var_high:Int> isa OTHER */
var24 = 1; /* easy <var_high:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var28 = var_low <= var_high;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
{
{ /* Inline kernel$Int$+ (var_low,var_high) on <var_low:Int> */
/* Covariant cast for argument 0 (i) <var_high:Int> isa OTHER */
/* <var_high:Int> isa OTHER */
var31 = 1; /* easy <var_high:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var35 = var_low + var_high;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline kernel$Int$/ (var29,2l) on <var29:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var38 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 733);
fatal_exit(1);
}
var42 = var29 / 2l;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_middle = var36;
{
{ /* Inline kernel$Int$* (var_middle,3l) on <var_middle:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var45 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 732);
fatal_exit(1);
}
var49 = var_middle * 3l;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var43,1l) on <var43:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var52 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var52)) {
var_class_name55 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var56 = var43 + 1l;
var50 = var56;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
var_subindex = var50;
{
{ /* Inline tables$TablesCapable$parser_action (self,var_state,var_subindex) on <self:Parser> */
var59 = parser_action(self, var_state, var_subindex);
var57 = var59;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
var_goal = var57;
{
{ /* Inline kernel$Int$< (var_index,var_goal) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var_goal:Int> isa OTHER */
/* <var_goal:Int> isa OTHER */
var62 = 1; /* easy <var_goal:Int> isa OTHER*/
if (unlikely(!var62)) {
var_class_name65 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name65);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var66 = var_index < var_goal;
var60 = var66;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
if (var60){
{
{ /* Inline kernel$Int$- (var_middle,1l) on <var_middle:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var69 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var69)) {
var_class_name72 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name72);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var73 = var_middle - 1l;
var67 = var73;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
var_high = var67;
} else {
{
{ /* Inline kernel$Int$> (var_index,var_goal) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var_goal:Int> isa OTHER */
/* <var_goal:Int> isa OTHER */
var76 = 1; /* easy <var_goal:Int> isa OTHER*/
if (unlikely(!var76)) {
var_class_name79 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name79);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var80 = var_index > var_goal;
var74 = var80;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
}
if (var74){
{
{ /* Inline kernel$Int$+ (var_middle,1l) on <var_middle:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var83 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var83)) {
var_class_name86 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name86);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var87 = var_middle + 1l;
var81 = var87;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
}
var_low = var81;
} else {
{
{ /* Inline kernel$Int$+ (var_subindex,1l) on <var_subindex:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var90 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var90)) {
var_class_name93 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name93);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var94 = var_subindex + 1l;
var88 = var94;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
}
{
{ /* Inline tables$TablesCapable$parser_action (self,var_state,var88) on <self:Parser> */
var97 = parser_action(self, var_state, var88);
var95 = var97;
goto RET_LABEL96;
RET_LABEL96:(void)0;
}
}
var_action_type = var95;
{
{ /* Inline kernel$Int$+ (var_subindex,2l) on <var_subindex:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var100 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var100)) {
var_class_name103 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name103);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var104 = var_subindex + 2l;
var98 = var104;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
}
{
{ /* Inline tables$TablesCapable$parser_action (self,var_state,var98) on <self:Parser> */
var107 = parser_action(self, var_state, var98);
var105 = var107;
goto RET_LABEL106;
RET_LABEL106:(void)0;
}
}
var_action_value = var105;
goto BREAK_label;
}
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel$Int$== (var_action_type,0l) on <var_action_type:Int> */
var110 = var_action_type == 0l;
var108 = var110;
goto RET_LABEL109;
RET_LABEL109:(void)0;
}
}
if (var108){
{
var111 = nitc___nitc__Lexer___next(var_lexer);
}
{
nitc___nitc__Parser___push(self, var_action_value, var111); /* Direct call parser_work$Parser$push on <self:Parser>*/
}
} else {
{
{ /* Inline kernel$Int$== (var_action_type,1l) on <var_action_type:Int> */
var114 = var_action_type == 1l;
var112 = var114;
goto RET_LABEL113;
RET_LABEL113:(void)0;
}
}
if (var112){
var115 = self->attrs[COLOR_nitc__parser_work__Parser___reduce_table].val; /* _reduce_table on <self:Parser> */
if (unlikely(var115 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _reduce_table");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_work, 137);
fatal_exit(1);
}
{
var116 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var115, var_action_value);
}
{
((void(*)(val* self, val* p0))(var116->class->vft[COLOR_nitc__parser_work__ReduceAction__action]))(var116, self); /* action on <var116:nullable Object(ReduceAction)>*/
}
} else {
{
{ /* Inline kernel$Int$== (var_action_type,2l) on <var_action_type:Int> */
var119 = var_action_type == 2l;
var117 = var119;
goto RET_LABEL118;
RET_LABEL118:(void)0;
}
}
if (var117){
{
var120 = nitc___nitc__Lexer___next(var_lexer);
}
var_node2 = var120;
/* <var_node2:Token> isa EOF */
cltype122 = type_nitc__EOF.color;
idtype123 = type_nitc__EOF.id;
if(cltype122 >= var_node2->type->table_size) {
var121 = 0;
} else {
var121 = var_node2->type->type_table[cltype122] == idtype123;
}
if (unlikely(!var121)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_work, 140);
fatal_exit(1);
}
{
var124 = nitc___nitc__Parser___pop(self);
}
var_node1 = var124;
/* <var_node1:nullable Object> isa AModule */
cltype126 = type_nitc__AModule.color;
idtype127 = type_nitc__AModule.id;
if(var_node1 == NULL) {
var125 = 0;
} else {
if(cltype126 >= (((long)var_node1&3)?type_info[((long)var_node1&3)]:var_node1->type)->table_size) {
var125 = 0;
} else {
var125 = (((long)var_node1&3)?type_info[((long)var_node1&3)]:var_node1->type)->type_table[cltype126] == idtype127;
}
}
if (unlikely(!var125)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_work, 142);
fatal_exit(1);
}
var128 = NEW_nitc__Start(&type_nitc__Start);
{
((void(*)(val* self, val* p0))(var128->class->vft[COLOR_nitc__parser_nodes__Start__n_base_61d]))(var128, var_node1); /* n_base= on <var128:Start>*/
}
{
((void(*)(val* self, val* p0))(var128->class->vft[COLOR_nitc__parser_nodes__Start__n_eof_61d]))(var128, var_node2); /* n_eof= on <var128:Start>*/
}
{
((void(*)(val* self))(var128->class->vft[COLOR_core__kernel__Object__init]))(var128); /* init on <var128:Start>*/
}
var_node = var128;
{
{ /* Inline parser_nodes$ANode$parent= (var_node2,var_node) on <var_node2:Token(EOF)> */
var_node2->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = var_node; /* _parent on <var_node2:Token(EOF)> */
RET_LABEL129:(void)0;
}
}
var130 = NEW_nitc__parser_work__ComputeProdLocationVisitor(&type_nitc__parser_work__ComputeProdLocationVisitor);
{
{ /* Inline lexer_work$Lexer$file (var_lexer) on <var_lexer:Lexer> */
var133 = var_lexer->attrs[COLOR_nitc__lexer_work__Lexer___file].val; /* _file on <var_lexer:Lexer> */
if (unlikely(var133 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _file");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__lexer_work, 90);
fatal_exit(1);
}
var131 = var133;
RET_LABEL132:(void)0;
}
}
{
{ /* Inline parser_nodes$SourceFile$first_token (var131) on <var131:SourceFile> */
var136 = var131->attrs[COLOR_nitc__parser_nodes__SourceFile___first_token].val; /* _first_token on <var131:SourceFile> */
var134 = var136;
RET_LABEL135:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var130->class->vft[COLOR_nitc__parser_work__ComputeProdLocationVisitor__token_61d]))(var130, var134); /* token= on <var130:ComputeProdLocationVisitor>*/
}
{
((void(*)(val* self))(var130->class->vft[COLOR_core__kernel__Object__init]))(var130); /* init on <var130:ComputeProdLocationVisitor>*/
}
{
nitc___nitc__Visitor___enter_visit(var130, var_node); /* Direct call parser_nodes$Visitor$enter_visit on <var130:ComputeProdLocationVisitor>*/
}
var = var_node;
goto RET_LABEL;
} else {
{
{ /* Inline kernel$Int$== (var_action_type,3l) on <var_action_type:Int> */
var139 = var_action_type == 3l;
var137 = var139;
goto RET_LABEL138;
RET_LABEL138:(void)0;
}
}
if (var137){
for(;;) {
var140 = var_token->attrs[COLOR_nitc__parser_nodes__ANode___location].val != NULL; /* _location on <var_token:Token> */
var141 = !var140;
if (var141){
{
var142 = nitc___nitc__Lexer___next(var_lexer);
}
var_token = var142;
} else {
goto BREAK_label143;
}
}
BREAK_label143: (void)0;
var144 = NEW_nitc__AParserError(&type_nitc__AParserError);
if (unlikely(varonce==NULL)) {
var145 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce146!=NULL)) {
var147 = varonce146;
} else {
var148 = "Syntax Error: unexpected ";
var150 = (val*)(25l<<2|1);
var151 = (val*)(25l<<2|1);
var152 = (val*)((long)(0)<<2|3);
var153 = (val*)((long)(0)<<2|3);
var149 = core__flat___CString___to_s_unsafe(var148, var150, var151, var152, var153);
var147 = var149;
varonce146 = var147;
}
((struct instance_core__NativeArray*)var145)->values[0]=var147;
if (likely(varonce154!=NULL)) {
var155 = varonce154;
} else {
var156 = ".";
var158 = (val*)(1l<<2|1);
var159 = (val*)(1l<<2|1);
var160 = (val*)((long)(0)<<2|3);
var161 = (val*)((long)(0)<<2|3);
var157 = core__flat___CString___to_s_unsafe(var156, var158, var159, var160, var161);
var155 = var157;
varonce154 = var155;
}
((struct instance_core__NativeArray*)var145)->values[2]=var155;
} else {
var145 = varonce;
varonce = NULL;
}
{
var162 = ((val*(*)(val* self))(var_token->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_token); /* to_s on <var_token:Token>*/
}
((struct instance_core__NativeArray*)var145)->values[1]=var162;
{
var163 = ((val*(*)(val* self))(var145->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var145); /* native_to_s on <var145:NativeArray[String]>*/
}
varonce = var145;
{
{ /* Inline parser_nodes$ANode$location (var_token) on <var_token:Token> */
var166 = var_token->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_token:Token> */
if (unlikely(var166 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var164 = var166;
RET_LABEL165:(void)0;
}
}
{
nitc__lexer_work___AParserError___init_parser_error(var144, var163, var164, var_token); /* Direct call lexer_work$AParserError$init_parser_error on <var144:AParserError>*/
}
var_node2167 = var144;
var168 = NEW_nitc__Start(&type_nitc__Start);
{
((void(*)(val* self, val* p0))(var168->class->vft[COLOR_nitc__parser_nodes__Start__n_base_61d]))(var168, ((val*)NULL)); /* n_base= on <var168:Start>*/
}
{
((void(*)(val* self, val* p0))(var168->class->vft[COLOR_nitc__parser_nodes__Start__n_eof_61d]))(var168, var_node2167); /* n_eof= on <var168:Start>*/
}
{
((void(*)(val* self))(var168->class->vft[COLOR_core__kernel__Object__init]))(var168); /* init on <var168:Start>*/
}
var_node169 = var168;
var = var_node169;
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
/* method parser_work$Parser$reduce_table= for (self: Parser, Array[ReduceAction]) */
void nitc___nitc__Parser___reduce_table_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__parser_work__Parser___reduce_table].val = p0; /* _reduce_table on <self:Parser> */
RET_LABEL:;
}
/* method parser_work$Prod$collect_text for (self: Prod): String */
val* nitc__parser_work___Prod___collect_text(val* self) {
val* var /* : String */;
val* var1 /* : TextCollectorVisitor */;
val* var_v /* var v: TextCollectorVisitor */;
val* var3 /* : String */;
val* var5 /* : String */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
val* var9 /* : nullable Int */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Bool */;
val* var12 /* : nullable Bool */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : String */;
val* var19 /* : String */;
var1 = NEW_nitc__parser_work__TextCollectorVisitor(&type_nitc__parser_work__TextCollectorVisitor);
{
{ /* Inline kernel$Object$init (var1) on <var1:TextCollectorVisitor> */
RET_LABEL2:(void)0;
}
}
var_v = var1;
{
nitc___nitc__Visitor___enter_visit(var_v, self); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:TextCollectorVisitor>*/
}
{
{ /* Inline parser_work$TextCollectorVisitor$text (var_v) on <var_v:TextCollectorVisitor> */
var5 = var_v->attrs[COLOR_nitc__parser_work__TextCollectorVisitor___text].val; /* _text on <var_v:TextCollectorVisitor> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _text");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_work, 281);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "";
var9 = (val*)(0l<<2|1);
var10 = (val*)(0l<<2|1);
var11 = (val*)((long)(0)<<2|3);
var12 = (val*)((long)(0)<<2|3);
var8 = core__flat___CString___to_s_unsafe(var7, var9, var10, var11, var12);
var6 = var8;
varonce = var6;
}
{
{ /* Inline kernel$Object$!= (var3,var6) on <var3:String> */
var_other = var6;
{
var15 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_core__kernel__Object___61d_61d]))(var3, var_other); /* == on <var3:String>*/
}
var16 = !var15;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (unlikely(!var13)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_work, 171);
fatal_exit(1);
}
{
{ /* Inline parser_work$TextCollectorVisitor$text (var_v) on <var_v:TextCollectorVisitor> */
var19 = var_v->attrs[COLOR_nitc__parser_work__TextCollectorVisitor___text].val; /* _text on <var_v:TextCollectorVisitor> */
if (unlikely(var19 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _text");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_work, 281);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
var = var17;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_work$ComputeProdLocationVisitor$token for (self: ComputeProdLocationVisitor): nullable Token */
val* nitc__parser_work___nitc__parser_work__ComputeProdLocationVisitor___token(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
var1 = self->attrs[COLOR_nitc__parser_work__ComputeProdLocationVisitor___token].val; /* _token on <self:ComputeProdLocationVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_work$ComputeProdLocationVisitor$token= for (self: ComputeProdLocationVisitor, nullable Token) */
void nitc__parser_work___nitc__parser_work__ComputeProdLocationVisitor___token_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__parser_work__ComputeProdLocationVisitor___token].val = p0; /* _token on <self:ComputeProdLocationVisitor> */
RET_LABEL:;
}
/* method parser_work$ComputeProdLocationVisitor$last_token for (self: ComputeProdLocationVisitor): nullable Token */
val* nitc__parser_work___nitc__parser_work__ComputeProdLocationVisitor___last_token(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
var1 = self->attrs[COLOR_nitc__parser_work__ComputeProdLocationVisitor___last_token].val; /* _last_token on <self:ComputeProdLocationVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_work$ComputeProdLocationVisitor$visit for (self: ComputeProdLocationVisitor, ANode) */
void nitc__parser_work___nitc__parser_work__ComputeProdLocationVisitor___nitc__parser_nodes__Visitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
short int var /* : Bool */;
int cltype;
int idtype;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable Token */;
val* var5 /* : nullable Token */;
val* var_cursor /* var cursor: nullable Token */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable Token */;
val* var12 /* : nullable Token */;
val* var_lt /* var lt: nullable Token */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : Location */;
val* var20 /* : Location */;
long var21 /* : Int */;
long var23 /* : Int */;
long var_ltl /* var ltl: Int */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var_ /* var : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var_35 /* var : Bool */;
val* var36 /* : Location */;
val* var38 /* : Location */;
long var39 /* : Int */;
long var41 /* : Int */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
val* var46 /* : Array[Token] */;
val* var47 /* : nullable Token */;
val* var49 /* : nullable Token */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
short int var_56 /* var : Bool */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
val* var62 /* : Array[Token] */;
val* var63 /* : nullable Token */;
val* var65 /* : nullable Token */;
val* var67 /* : nullable Token */;
val* var69 /* : nullable Token */;
val* var71 /* : Location */;
val* var_loc /* var loc: Location */;
val* var72 /* : Array[Prod] */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
val* var75 /* : Array[Prod] */;
val* var_76 /* var : Array[Prod] */;
val* var77 /* : IndexedIterator[nullable Object] */;
val* var_78 /* var : IndexedIterator[Prod] */;
short int var79 /* : Bool */;
val* var81 /* : nullable Object */;
val* var_no /* var no: Prod */;
val* var82 /* : Array[Prod] */;
val* var83 /* : Array[Prod] */;
short int var84 /* : Bool */;
short int var85 /* : Bool */;
val* var86 /* : Location */;
val* var87 /* : nullable SourceFile */;
val* var89 /* : nullable SourceFile */;
long var90 /* : Int */;
long var92 /* : Int */;
long var93 /* : Int */;
long var95 /* : Int */;
long var96 /* : Int */;
long var98 /* : Int */;
long var99 /* : Int */;
long var101 /* : Int */;
val* var_loco /* var loco: Location */;
val* var102 /* : Array[Prod] */;
val* var_103 /* var : Array[Prod] */;
val* var104 /* : IndexedIterator[nullable Object] */;
val* var_105 /* var : IndexedIterator[Prod] */;
short int var106 /* : Bool */;
val* var108 /* : nullable Object */;
val* var_no109 /* var no: Prod */;
val* var111 /* : Array[Prod] */;
short int var112 /* : Bool */;
int cltype113;
int idtype114;
val* var115 /* : Array[Prod] */;
val* var116 /* : nullable Location */;
val* var_startl /* var startl: nullable Location */;
short int var117 /* : Bool */;
short int var118 /* : Bool */;
short int var120 /* : Bool */;
short int var121 /* : Bool */;
val* var122 /* : nullable Token */;
val* var123 /* : Location */;
val* var125 /* : Location */;
val* var_endl /* var endl: Location */;
short int var126 /* : Bool */;
val* var128 /* : Location */;
val* var129 /* : nullable SourceFile */;
val* var131 /* : nullable SourceFile */;
long var132 /* : Int */;
long var134 /* : Int */;
long var135 /* : Int */;
long var137 /* : Int */;
long var138 /* : Int */;
long var140 /* : Int */;
long var141 /* : Int */;
long var143 /* : Int */;
val* var145 /* : Array[Prod] */;
short int var146 /* : Bool */;
short int var147 /* : Bool */;
val* var148 /* : Location */;
val* var149 /* : nullable SourceFile */;
val* var151 /* : nullable SourceFile */;
long var152 /* : Int */;
long var154 /* : Int */;
long var155 /* : Int */;
long var157 /* : Int */;
long var158 /* : Int */;
long var160 /* : Int */;
long var161 /* : Int */;
long var163 /* : Int */;
val* var_loc164 /* var loc: Location */;
val* var165 /* : Array[Prod] */;
val* var_166 /* var : Array[Prod] */;
val* var167 /* : IndexedIterator[nullable Object] */;
val* var_168 /* var : IndexedIterator[Prod] */;
short int var169 /* : Bool */;
val* var171 /* : nullable Object */;
val* var_no172 /* var no: Prod */;
val* var174 /* : Array[Prod] */;
val* var175 /* : Array[Prod] */;
var_n = p0;
/* <var_n:ANode> isa Token */
cltype = type_nitc__Token.color;
idtype = type_nitc__Token.id;
if(cltype >= var_n->type->table_size) {
var = 0;
} else {
var = var_n->type->type_table[cltype] == idtype;
}
if (var){
var1 = var_n->attrs[COLOR_nitc__parser_nodes__ANode___location].val != NULL; /* _location on <var_n:ANode(Token)> */
var2 = !var1;
if (var2){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_work$ComputeProdLocationVisitor$token (self) on <self:ComputeProdLocationVisitor> */
var5 = self->attrs[COLOR_nitc__parser_work__ComputeProdLocationVisitor___token].val; /* _token on <self:ComputeProdLocationVisitor> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_cursor = var3;
{
{ /* Inline kernel$Object$!= (var_n,var_cursor) on <var_n:ANode(Token)> */
var_other = var_cursor;
{
var8 = ((short int(*)(val* self, val* p0))(var_n->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n, var_other); /* == on <var_n:ANode(Token)>*/
}
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
{
{ /* Inline parser_work$ComputeProdLocationVisitor$last_token (self) on <self:ComputeProdLocationVisitor> */
var12 = self->attrs[COLOR_nitc__parser_work__ComputeProdLocationVisitor___last_token].val; /* _last_token on <self:ComputeProdLocationVisitor> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_lt = var10;
if (var_lt == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_lt,((val*)NULL)) on <var_lt:nullable Token> */
var_other = ((val*)NULL);
{
var16 = ((short int(*)(val* self, val* p0))(var_lt->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_lt, var_other); /* == on <var_lt:nullable Token(Token)>*/
}
var17 = !var16;
var14 = var17;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
if (var13){
{
{ /* Inline parser_nodes$ANode$location (var_lt) on <var_lt:nullable Token(Token)> */
var20 = var_lt->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_lt:nullable Token(Token)> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline location$Location$line_end (var18) on <var18:Location> */
var23 = var18->attrs[COLOR_nitc__location__Location___line_end].l; /* _line_end on <var18:Location> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
var_ltl = var21;
for(;;) {
if (var_cursor == NULL) {
var26 = 0; /* is null */
} else {
var26 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_cursor,((val*)NULL)) on <var_cursor:nullable Token> */
var_other = ((val*)NULL);
{
var29 = ((short int(*)(val* self, val* p0))(var_cursor->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cursor, var_other); /* == on <var_cursor:nullable Token(Token)>*/
}
var30 = !var29;
var27 = var30;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
var26 = var27;
}
var_ = var26;
if (var26){
{
{ /* Inline kernel$Object$!= (var_cursor,var_n) on <var_cursor:nullable Token(Token)> */
var_other = var_n;
{
var33 = ((short int(*)(val* self, val* p0))(var_cursor->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cursor, var_other); /* == on <var_cursor:nullable Token(Token)>*/
}
var34 = !var33;
var31 = var34;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var25 = var31;
} else {
var25 = var_;
}
var_35 = var25;
if (var25){
{
{ /* Inline parser_nodes$ANode$location (var_cursor) on <var_cursor:nullable Token(Token)> */
var38 = var_cursor->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_cursor:nullable Token(Token)> */
if (unlikely(var38 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline location$Location$line_start (var36) on <var36:Location> */
var41 = var36->attrs[COLOR_nitc__location__Location___line_start].l; /* _line_start on <var36:Location> */
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var_ltl,var39) on <var_ltl:Int> */
var44 = var_ltl == var39;
var42 = var44;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
var24 = var42;
} else {
var24 = var_35;
}
if (var24){
{
{ /* Inline parser_nodes$Token$is_loose= (var_cursor,1) on <var_cursor:nullable Token(Token)> */
var_cursor->attrs[COLOR_nitc__parser_nodes__Token___is_loose].s = 1; /* _is_loose on <var_cursor:nullable Token(Token)> */
RET_LABEL45:(void)0;
}
}
{
var46 = nitc___nitc__Token___next_looses(var_lt);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var46, var_cursor); /* Direct call array$Array$add on <var46:Array[Token]>*/
}
{
{ /* Inline parser_nodes$Token$next_token (var_cursor) on <var_cursor:nullable Token(Token)> */
var49 = var_cursor->attrs[COLOR_nitc__parser_nodes__Token___next_token].val; /* _next_token on <var_cursor:nullable Token(Token)> */
var47 = var49;
RET_LABEL48:(void)0;
}
}
var_cursor = var47;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
} else {
}
for(;;) {
if (var_cursor == NULL) {
var51 = 0; /* is null */
} else {
var51 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_cursor,((val*)NULL)) on <var_cursor:nullable Token> */
var_other = ((val*)NULL);
{
var54 = ((short int(*)(val* self, val* p0))(var_cursor->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cursor, var_other); /* == on <var_cursor:nullable Token(Token)>*/
}
var55 = !var54;
var52 = var55;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
var51 = var52;
}
var_56 = var51;
if (var51){
{
{ /* Inline kernel$Object$!= (var_cursor,var_n) on <var_cursor:nullable Token(Token)> */
var_other = var_n;
{
var59 = ((short int(*)(val* self, val* p0))(var_cursor->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cursor, var_other); /* == on <var_cursor:nullable Token(Token)>*/
}
var60 = !var59;
var57 = var60;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
var50 = var57;
} else {
var50 = var_56;
}
if (var50){
{
{ /* Inline parser_nodes$Token$is_loose= (var_cursor,1) on <var_cursor:nullable Token(Token)> */
var_cursor->attrs[COLOR_nitc__parser_nodes__Token___is_loose].s = 1; /* _is_loose on <var_cursor:nullable Token(Token)> */
RET_LABEL61:(void)0;
}
}
{
var62 = nitc___nitc__Token___prev_looses(var_n);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var62, var_cursor); /* Direct call array$Array$add on <var62:Array[Token]>*/
}
{
{ /* Inline parser_nodes$Token$next_token (var_cursor) on <var_cursor:nullable Token(Token)> */
var65 = var_cursor->attrs[COLOR_nitc__parser_nodes__Token___next_token].val; /* _next_token on <var_cursor:nullable Token(Token)> */
var63 = var65;
RET_LABEL64:(void)0;
}
}
var_cursor = var63;
} else {
goto BREAK_label66;
}
}
BREAK_label66: (void)0;
} else {
}
{
{ /* Inline parser_nodes$Token$next_token (var_n) on <var_n:ANode(Token)> */
var69 = var_n->attrs[COLOR_nitc__parser_nodes__Token___next_token].val; /* _next_token on <var_n:ANode(Token)> */
var67 = var69;
RET_LABEL68:(void)0;
}
}
{
{ /* Inline parser_work$ComputeProdLocationVisitor$token= (self,var67) on <self:ComputeProdLocationVisitor> */
self->attrs[COLOR_nitc__parser_work__ComputeProdLocationVisitor___token].val = var67; /* _token on <self:ComputeProdLocationVisitor> */
RET_LABEL70:(void)0;
}
}
var71 = var_n->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_n:ANode(Token)> */
if (unlikely(var71 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_work, 227);
fatal_exit(1);
}
var_loc = var71;
self->attrs[COLOR_nitc__parser_work__ComputeProdLocationVisitor___last_token].val = var_n; /* _last_token on <self:ComputeProdLocationVisitor> */
var72 = self->attrs[COLOR_nitc__parser_work__ComputeProdLocationVisitor___need_first_prods].val; /* _need_first_prods on <self:ComputeProdLocationVisitor> */
if (unlikely(var72 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _need_first_prods");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_work, 231);
fatal_exit(1);
}
{
var73 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var72);
}
var74 = !var73;
if (var74){
var75 = self->attrs[COLOR_nitc__parser_work__ComputeProdLocationVisitor___need_first_prods].val; /* _need_first_prods on <self:ComputeProdLocationVisitor> */
if (unlikely(var75 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _need_first_prods");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_work, 232);
fatal_exit(1);
}
var_76 = var75;
{
var77 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_76);
}
var_78 = var77;
for(;;) {
{
var79 = ((short int(*)(val* self))((((long)var_78&3)?class_info[((long)var_78&3)]:var_78->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_78); /* is_ok on <var_78:IndexedIterator[Prod]>*/
}
if (var79){
} else {
goto BREAK_label80;
}
{
var81 = ((val*(*)(val* self))((((long)var_78&3)?class_info[((long)var_78&3)]:var_78->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_78); /* item on <var_78:IndexedIterator[Prod]>*/
}
var_no = var81;
var_no->attrs[COLOR_nitc__parser_work__Prod___first_location].val = var_loc; /* _first_location on <var_no:Prod> */
{
((void(*)(val* self))((((long)var_78&3)?class_info[((long)var_78&3)]:var_78->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_78); /* next on <var_78:IndexedIterator[Prod]>*/
}
}
BREAK_label80: (void)0;
{
((void(*)(val* self))((((long)var_78&3)?class_info[((long)var_78&3)]:var_78->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_78); /* finish on <var_78:IndexedIterator[Prod]>*/
}
var82 = self->attrs[COLOR_nitc__parser_work__ComputeProdLocationVisitor___need_first_prods].val; /* _need_first_prods on <self:ComputeProdLocationVisitor> */
if (unlikely(var82 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _need_first_prods");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_work, 235);
fatal_exit(1);
}
{
core___core__AbstractArray___core__abstract_collection__RemovableCollection__clear(var82); /* Direct call array$AbstractArray$clear on <var82:Array[Prod]>*/
}
} else {
}
var83 = self->attrs[COLOR_nitc__parser_work__ComputeProdLocationVisitor___need_after_epsilons].val; /* _need_after_epsilons on <self:ComputeProdLocationVisitor> */
if (unlikely(var83 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _need_after_epsilons");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_work, 239);
fatal_exit(1);
}
{
var84 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var83);
}
var85 = !var84;
if (var85){
var86 = NEW_nitc__Location(&type_nitc__Location);
{
{ /* Inline location$Location$file (var_loc) on <var_loc:Location> */
var89 = var_loc->attrs[COLOR_nitc__location__Location___file].val; /* _file on <var_loc:Location> */
var87 = var89;
RET_LABEL88:(void)0;
}
}
{
{ /* Inline location$Location$line_start (var_loc) on <var_loc:Location> */
var92 = var_loc->attrs[COLOR_nitc__location__Location___line_start].l; /* _line_start on <var_loc:Location> */
var90 = var92;
RET_LABEL91:(void)0;
}
}
{
{ /* Inline location$Location$line_start (var_loc) on <var_loc:Location> */
var95 = var_loc->attrs[COLOR_nitc__location__Location___line_start].l; /* _line_start on <var_loc:Location> */
var93 = var95;
RET_LABEL94:(void)0;
}
}
{
{ /* Inline location$Location$column_start (var_loc) on <var_loc:Location> */
var98 = var_loc->attrs[COLOR_nitc__location__Location___column_start].l; /* _column_start on <var_loc:Location> */
var96 = var98;
RET_LABEL97:(void)0;
}
}
{
{ /* Inline location$Location$column_start (var_loc) on <var_loc:Location> */
var101 = var_loc->attrs[COLOR_nitc__location__Location___column_start].l; /* _column_start on <var_loc:Location> */
var99 = var101;
RET_LABEL100:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var86->class->vft[COLOR_nitc__location__Location__file_61d]))(var86, var87); /* file= on <var86:Location>*/
}
{
((void(*)(val* self, long p0))(var86->class->vft[COLOR_nitc__location__Location__line_start_61d]))(var86, var90); /* line_start= on <var86:Location>*/
}
{
((void(*)(val* self, long p0))(var86->class->vft[COLOR_nitc__location__Location__line_end_61d]))(var86, var93); /* line_end= on <var86:Location>*/
}
{
((void(*)(val* self, long p0))(var86->class->vft[COLOR_nitc__location__Location__column_start_61d]))(var86, var96); /* column_start= on <var86:Location>*/
}
{
((void(*)(val* self, long p0))(var86->class->vft[COLOR_nitc__location__Location__column_end_61d]))(var86, var99); /* column_end= on <var86:Location>*/
}
{
((void(*)(val* self))(var86->class->vft[COLOR_core__kernel__Object__init]))(var86); /* init on <var86:Location>*/
}
var_loco = var86;
var102 = self->attrs[COLOR_nitc__parser_work__ComputeProdLocationVisitor___need_after_epsilons].val; /* _need_after_epsilons on <self:ComputeProdLocationVisitor> */
if (unlikely(var102 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _need_after_epsilons");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_work, 241);
fatal_exit(1);
}
var_103 = var102;
{
var104 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_103);
}
var_105 = var104;
for(;;) {
{
var106 = ((short int(*)(val* self))((((long)var_105&3)?class_info[((long)var_105&3)]:var_105->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_105); /* is_ok on <var_105:IndexedIterator[Prod]>*/
}
if (var106){
} else {
goto BREAK_label107;
}
{
var108 = ((val*(*)(val* self))((((long)var_105&3)?class_info[((long)var_105&3)]:var_105->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_105); /* item on <var_105:IndexedIterator[Prod]>*/
}
var_no109 = var108;
{
{ /* Inline parser_nodes$ANode$location= (var_no109,var_loco) on <var_no109:Prod> */
var_no109->attrs[COLOR_nitc__parser_nodes__ANode___location].val = var_loco; /* _location on <var_no109:Prod> */
RET_LABEL110:(void)0;
}
}
{
((void(*)(val* self))((((long)var_105&3)?class_info[((long)var_105&3)]:var_105->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_105); /* next on <var_105:IndexedIterator[Prod]>*/
}
}
BREAK_label107: (void)0;
{
((void(*)(val* self))((((long)var_105&3)?class_info[((long)var_105&3)]:var_105->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_105); /* finish on <var_105:IndexedIterator[Prod]>*/
}
var111 = self->attrs[COLOR_nitc__parser_work__ComputeProdLocationVisitor___need_after_epsilons].val; /* _need_after_epsilons on <self:ComputeProdLocationVisitor> */
if (unlikely(var111 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _need_after_epsilons");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_work, 244);
fatal_exit(1);
}
{
core___core__AbstractArray___core__abstract_collection__RemovableCollection__clear(var111); /* Direct call array$AbstractArray$clear on <var111:Array[Prod]>*/
}
} else {
}
} else {
/* <var_n:ANode> isa Prod */
cltype113 = type_nitc__Prod.color;
idtype114 = type_nitc__Prod.id;
if(cltype113 >= var_n->type->table_size) {
var112 = 0;
} else {
var112 = var_n->type->type_table[cltype113] == idtype114;
}
if (unlikely(!var112)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_work, 247);
fatal_exit(1);
}
var115 = self->attrs[COLOR_nitc__parser_work__ComputeProdLocationVisitor___need_first_prods].val; /* _need_first_prods on <self:ComputeProdLocationVisitor> */
if (unlikely(var115 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _need_first_prods");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_work, 248);
fatal_exit(1);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var115, var_n); /* Direct call array$Array$add on <var115:Array[Prod]>*/
}
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nitc__parser_nodes__ANode__visit_all]))(var_n, self); /* visit_all on <var_n:ANode(Prod)>*/
}
var116 = var_n->attrs[COLOR_nitc__parser_work__Prod___first_location].val; /* _first_location on <var_n:ANode(Prod)> */
var_startl = var116;
if (var_startl == NULL) {
var117 = 0; /* is null */
} else {
var117 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_startl,((val*)NULL)) on <var_startl:nullable Location> */
var_other = ((val*)NULL);
{
var120 = ((short int(*)(val* self, val* p0))(var_startl->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_startl, var_other); /* == on <var_startl:nullable Location(Location)>*/
}
var121 = !var120;
var118 = var121;
goto RET_LABEL119;
RET_LABEL119:(void)0;
}
var117 = var118;
}
if (var117){
var122 = self->attrs[COLOR_nitc__parser_work__ComputeProdLocationVisitor___last_token].val; /* _last_token on <self:ComputeProdLocationVisitor> */
if (var122 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_work, 255);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$location (var122) on <var122:nullable Token> */
if (unlikely(var122 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var125 = var122->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var122:nullable Token> */
if (unlikely(var125 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var123 = var125;
RET_LABEL124:(void)0;
}
}
var_endl = var123;
{
var126 = nitc___nitc__Location___core__kernel__Object___61d_61d(var_startl, var_endl);
}
if (var126){
{
{ /* Inline parser_nodes$ANode$location= (var_n,var_startl) on <var_n:ANode(Prod)> */
var_n->attrs[COLOR_nitc__parser_nodes__ANode___location].val = var_startl; /* _location on <var_n:ANode(Prod)> */
RET_LABEL127:(void)0;
}
}
} else {
var128 = NEW_nitc__Location(&type_nitc__Location);
{
{ /* Inline location$Location$file (var_startl) on <var_startl:nullable Location(Location)> */
var131 = var_startl->attrs[COLOR_nitc__location__Location___file].val; /* _file on <var_startl:nullable Location(Location)> */
var129 = var131;
RET_LABEL130:(void)0;
}
}
{
{ /* Inline location$Location$line_start (var_startl) on <var_startl:nullable Location(Location)> */
var134 = var_startl->attrs[COLOR_nitc__location__Location___line_start].l; /* _line_start on <var_startl:nullable Location(Location)> */
var132 = var134;
RET_LABEL133:(void)0;
}
}
{
{ /* Inline location$Location$line_end (var_endl) on <var_endl:Location> */
var137 = var_endl->attrs[COLOR_nitc__location__Location___line_end].l; /* _line_end on <var_endl:Location> */
var135 = var137;
RET_LABEL136:(void)0;
}
}
{
{ /* Inline location$Location$column_start (var_startl) on <var_startl:nullable Location(Location)> */
var140 = var_startl->attrs[COLOR_nitc__location__Location___column_start].l; /* _column_start on <var_startl:nullable Location(Location)> */
var138 = var140;
RET_LABEL139:(void)0;
}
}
{
{ /* Inline location$Location$column_end (var_endl) on <var_endl:Location> */
var143 = var_endl->attrs[COLOR_nitc__location__Location___column_end].l; /* _column_end on <var_endl:Location> */
var141 = var143;
RET_LABEL142:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var128->class->vft[COLOR_nitc__location__Location__file_61d]))(var128, var129); /* file= on <var128:Location>*/
}
{
((void(*)(val* self, long p0))(var128->class->vft[COLOR_nitc__location__Location__line_start_61d]))(var128, var132); /* line_start= on <var128:Location>*/
}
{
((void(*)(val* self, long p0))(var128->class->vft[COLOR_nitc__location__Location__line_end_61d]))(var128, var135); /* line_end= on <var128:Location>*/
}
{
((void(*)(val* self, long p0))(var128->class->vft[COLOR_nitc__location__Location__column_start_61d]))(var128, var138); /* column_start= on <var128:Location>*/
}
{
((void(*)(val* self, long p0))(var128->class->vft[COLOR_nitc__location__Location__column_end_61d]))(var128, var141); /* column_end= on <var128:Location>*/
}
{
((void(*)(val* self))(var128->class->vft[COLOR_core__kernel__Object__init]))(var128); /* init on <var128:Location>*/
}
{
{ /* Inline parser_nodes$ANode$location= (var_n,var128) on <var_n:ANode(Prod)> */
var_n->attrs[COLOR_nitc__parser_nodes__ANode___location].val = var128; /* _location on <var_n:ANode(Prod)> */
RET_LABEL144:(void)0;
}
}
}
var145 = self->attrs[COLOR_nitc__parser_work__ComputeProdLocationVisitor___need_after_epsilons].val; /* _need_after_epsilons on <self:ComputeProdLocationVisitor> */
if (unlikely(var145 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _need_after_epsilons");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_work, 263);
fatal_exit(1);
}
{
var146 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var145);
}
var147 = !var146;
if (var147){
var148 = NEW_nitc__Location(&type_nitc__Location);
{
{ /* Inline location$Location$file (var_endl) on <var_endl:Location> */
var151 = var_endl->attrs[COLOR_nitc__location__Location___file].val; /* _file on <var_endl:Location> */
var149 = var151;
RET_LABEL150:(void)0;
}
}
{
{ /* Inline location$Location$line_end (var_endl) on <var_endl:Location> */
var154 = var_endl->attrs[COLOR_nitc__location__Location___line_end].l; /* _line_end on <var_endl:Location> */
var152 = var154;
RET_LABEL153:(void)0;
}
}
{
{ /* Inline location$Location$line_end (var_endl) on <var_endl:Location> */
var157 = var_endl->attrs[COLOR_nitc__location__Location___line_end].l; /* _line_end on <var_endl:Location> */
var155 = var157;
RET_LABEL156:(void)0;
}
}
{
{ /* Inline location$Location$column_end (var_endl) on <var_endl:Location> */
var160 = var_endl->attrs[COLOR_nitc__location__Location___column_end].l; /* _column_end on <var_endl:Location> */
var158 = var160;
RET_LABEL159:(void)0;
}
}
{
{ /* Inline location$Location$column_end (var_endl) on <var_endl:Location> */
var163 = var_endl->attrs[COLOR_nitc__location__Location___column_end].l; /* _column_end on <var_endl:Location> */
var161 = var163;
RET_LABEL162:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var148->class->vft[COLOR_nitc__location__Location__file_61d]))(var148, var149); /* file= on <var148:Location>*/
}
{
((void(*)(val* self, long p0))(var148->class->vft[COLOR_nitc__location__Location__line_start_61d]))(var148, var152); /* line_start= on <var148:Location>*/
}
{
((void(*)(val* self, long p0))(var148->class->vft[COLOR_nitc__location__Location__line_end_61d]))(var148, var155); /* line_end= on <var148:Location>*/
}
{
((void(*)(val* self, long p0))(var148->class->vft[COLOR_nitc__location__Location__column_start_61d]))(var148, var158); /* column_start= on <var148:Location>*/
}
{
((void(*)(val* self, long p0))(var148->class->vft[COLOR_nitc__location__Location__column_end_61d]))(var148, var161); /* column_end= on <var148:Location>*/
}
{
((void(*)(val* self))(var148->class->vft[COLOR_core__kernel__Object__init]))(var148); /* init on <var148:Location>*/
}
var_loc164 = var148;
var165 = self->attrs[COLOR_nitc__parser_work__ComputeProdLocationVisitor___need_after_epsilons].val; /* _need_after_epsilons on <self:ComputeProdLocationVisitor> */
if (unlikely(var165 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _need_after_epsilons");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_work, 265);
fatal_exit(1);
}
var_166 = var165;
{
var167 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_166);
}
var_168 = var167;
for(;;) {
{
var169 = ((short int(*)(val* self))((((long)var_168&3)?class_info[((long)var_168&3)]:var_168->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_168); /* is_ok on <var_168:IndexedIterator[Prod]>*/
}
if (var169){
} else {
goto BREAK_label170;
}
{
var171 = ((val*(*)(val* self))((((long)var_168&3)?class_info[((long)var_168&3)]:var_168->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_168); /* item on <var_168:IndexedIterator[Prod]>*/
}
var_no172 = var171;
{
{ /* Inline parser_nodes$ANode$location= (var_no172,var_loc164) on <var_no172:Prod> */
var_no172->attrs[COLOR_nitc__parser_nodes__ANode___location].val = var_loc164; /* _location on <var_no172:Prod> */
RET_LABEL173:(void)0;
}
}
{
((void(*)(val* self))((((long)var_168&3)?class_info[((long)var_168&3)]:var_168->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_168); /* next on <var_168:IndexedIterator[Prod]>*/
}
}
BREAK_label170: (void)0;
{
((void(*)(val* self))((((long)var_168&3)?class_info[((long)var_168&3)]:var_168->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_168); /* finish on <var_168:IndexedIterator[Prod]>*/
}
var174 = self->attrs[COLOR_nitc__parser_work__ComputeProdLocationVisitor___need_after_epsilons].val; /* _need_after_epsilons on <self:ComputeProdLocationVisitor> */
if (unlikely(var174 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _need_after_epsilons");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_work, 269);
fatal_exit(1);
}
{
core___core__AbstractArray___core__abstract_collection__RemovableCollection__clear(var174); /* Direct call array$AbstractArray$clear on <var174:Array[Prod]>*/
}
} else {
}
} else {
var175 = self->attrs[COLOR_nitc__parser_work__ComputeProdLocationVisitor___need_after_epsilons].val; /* _need_after_epsilons on <self:ComputeProdLocationVisitor> */
if (unlikely(var175 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _need_after_epsilons");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_work, 273);
fatal_exit(1);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var175, var_n); /* Direct call array$Array$add on <var175:Array[Prod]>*/
}
}
}
RET_LABEL:;
}
/* method parser_work$ComputeProdLocationVisitor$init for (self: ComputeProdLocationVisitor) */
void nitc__parser_work___nitc__parser_work__ComputeProdLocationVisitor___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc__parser_work___nitc__parser_work__ComputeProdLocationVisitor___core__kernel__Object__init]))(self); /* init on <self:ComputeProdLocationVisitor>*/
}
RET_LABEL:;
}
/* method parser_work$TextCollectorVisitor$text for (self: TextCollectorVisitor): String */
val* nitc__parser_work___nitc__parser_work__TextCollectorVisitor___text(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__parser_work__TextCollectorVisitor___text].val; /* _text on <self:TextCollectorVisitor> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _text");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_work, 281);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_work$TextCollectorVisitor$text= for (self: TextCollectorVisitor, String) */
void nitc__parser_work___nitc__parser_work__TextCollectorVisitor___text_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__parser_work__TextCollectorVisitor___text].val = p0; /* _text on <self:TextCollectorVisitor> */
RET_LABEL:;
}
/* method parser_work$TextCollectorVisitor$visit for (self: TextCollectorVisitor, ANode) */
void nitc__parser_work___nitc__parser_work__TextCollectorVisitor___nitc__parser_nodes__Visitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
short int var /* : Bool */;
int cltype;
int idtype;
val* var_ /* var : TextCollectorVisitor */;
val* var1 /* : String */;
val* var3 /* : String */;
val* var4 /* : String */;
val* var5 /* : Text */;
var_n = p0;
/* <var_n:ANode> isa Token */
cltype = type_nitc__Token.color;
idtype = type_nitc__Token.id;
if(cltype >= var_n->type->table_size) {
var = 0;
} else {
var = var_n->type->type_table[cltype] == idtype;
}
if (var){
var_ = self;
{
{ /* Inline parser_work$TextCollectorVisitor$text (var_) on <var_:TextCollectorVisitor> */
var3 = var_->attrs[COLOR_nitc__parser_work__TextCollectorVisitor___text].val; /* _text on <var_:TextCollectorVisitor> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _text");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_work, 281);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc__lexer_work___Token___text(var_n);
}
{
var5 = ((val*(*)(val* self, val* p0))(var1->class->vft[COLOR_core__abstract_text__Text___43d]))(var1, var4); /* + on <var1:String>*/
}
{
{ /* Inline parser_work$TextCollectorVisitor$text= (var_,var5) on <var_:TextCollectorVisitor> */
var_->attrs[COLOR_nitc__parser_work__TextCollectorVisitor___text].val = var5; /* _text on <var_:TextCollectorVisitor> */
RET_LABEL6:(void)0;
}
}
} else {
}
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nitc__parser_nodes__ANode__visit_all]))(var_n, self); /* visit_all on <var_n:ANode>*/
}
RET_LABEL:;
}
/* method parser_work$ReduceAction$concat for (self: ReduceAction, Array[Object], Array[Object]): Array[Object] */
val* nitc__parser_work___nitc__parser_work__ReduceAction___concat(val* self, val* p0, val* p1) {
val* var /* : Array[Object] */;
val* var_l1 /* var l1: Array[Object] */;
val* var_l2 /* var l2: Array[Object] */;
short int var1 /* : Bool */;
var_l1 = p0;
var_l2 = p1;
{
var1 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_l1);
}
if (var1){
var = var_l2;
goto RET_LABEL;
} else {
}
{
core___core__Sequence___append(var_l1, var_l2); /* Direct call abstract_collection$Sequence$append on <var_l1:Array[Object]>*/
}
var = var_l1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_work$ReduceAction$goto= for (self: ReduceAction, Int) */
void nitc__parser_work___nitc__parser_work__ReduceAction___goto_61d(val* self, long p0) {
self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l = p0; /* _goto on <self:ReduceAction> */
RET_LABEL:;
}
/* method parser_work$ReduceAction$init for (self: ReduceAction) */
void nitc__parser_work___nitc__parser_work__ReduceAction___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc__parser_work___nitc__parser_work__ReduceAction___core__kernel__Object__init]))(self); /* init on <self:ReduceAction>*/
}
RET_LABEL:;
}
/* method parser_work$AExpr$as_id for (self: AExpr): nullable String */
val* nitc__parser_work___AExpr___as_id(val* self) {
val* var /* : nullable String */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : String */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
short int var6 /* : Bool */;
val* var7 /* : AExpr */;
val* var9 /* : AExpr */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
short int var13 /* : Bool */;
val* var14 /* : AExprs */;
val* var16 /* : AExprs */;
val* var17 /* : ANodes[AExpr] */;
val* var19 /* : ANodes[AExpr] */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : AQid */;
val* var24 /* : AQid */;
val* var25 /* : TId */;
val* var27 /* : TId */;
val* var28 /* : String */;
/* <self:AExpr> isa AMethidExpr */
cltype = type_nitc__AMethidExpr.color;
idtype = type_nitc__AMethidExpr.id;
if(cltype >= self->type->table_size) {
var1 = 0;
} else {
var1 = self->type->type_table[cltype] == idtype;
}
if (var1){
{
var2 = nitc__parser_work___Prod___collect_text(self);
}
var = var2;
goto RET_LABEL;
} else {
}
/* <self:AExpr> isa ACallExpr */
cltype4 = type_nitc__ACallExpr.color;
idtype5 = type_nitc__ACallExpr.id;
if(cltype4 >= self->type->table_size) {
var3 = 0;
} else {
var3 = self->type->type_table[cltype4] == idtype5;
}
var6 = !var3;
if (var6){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes$ASendExpr$n_expr (self) on <self:AExpr(ACallExpr)> */
var9 = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AExpr(ACallExpr)> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2103);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
/* <var7:AExpr> isa AImplicitSelfExpr */
cltype11 = type_nitc__AImplicitSelfExpr.color;
idtype12 = type_nitc__AImplicitSelfExpr.id;
if(cltype11 >= var7->type->table_size) {
var10 = 0;
} else {
var10 = var7->type->type_table[cltype11] == idtype12;
}
var13 = !var10;
if (var13){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes$ACallFormExpr$n_args (self) on <self:AExpr(ACallExpr)> */
var16 = self->attrs[COLOR_nitc__parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:AExpr(ACallExpr)> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2380);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline parser_nodes$AExprs$n_exprs (var14) on <var14:AExprs> */
var19 = var14->attrs[COLOR_nitc__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var14:AExprs> */
if (unlikely(var19 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2790);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = nitc___nitc__ANodes___core__abstract_collection__Collection__is_empty(var17);
}
var21 = !var20;
if (var21){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes$ACallFormExpr$n_qid (self) on <self:AExpr(ACallExpr)> */
var24 = self->attrs[COLOR_nitc__parser_nodes__ACallFormExpr___n_qid].val; /* _n_qid on <self:AExpr(ACallExpr)> */
if (unlikely(var24 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_qid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2377);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline parser_nodes$AQid$n_id (var22) on <var22:AQid> */
var27 = var22->attrs[COLOR_nitc__parser_nodes__AQid___n_id].val; /* _n_id on <var22:AQid> */
if (unlikely(var27 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1721);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
var28 = nitc__lexer_work___Token___text(var25);
}
var = var28;
goto RET_LABEL;
RET_LABEL:;
return var;
}
