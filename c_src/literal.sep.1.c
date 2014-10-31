#include "literal.sep.0.h"
/* method literal#LiteralPhase#process_nmodule for (self: LiteralPhase, AModule) */
void literal__LiteralPhase__process_nmodule(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
val* var /* : ToolContext */;
val* var2 /* : ToolContext */;
var_nmodule = p0;
{
{ /* Inline phase#Phase#toolcontext (self) on <self:LiteralPhase> */
var2 = self->attrs[COLOR_phase__Phase___toolcontext].val; /* _toolcontext on <self:LiteralPhase> */
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
literal__AModule__do_literal(var_nmodule, var); /* Direct call literal#AModule#do_literal on <var_nmodule:AModule>*/
}
RET_LABEL:;
}
/* method literal#LiteralPhase#process_nmodule for (self: Object, AModule) */
void VIRTUAL_literal__LiteralPhase__process_nmodule(val* self, val* p0) {
literal__LiteralPhase__process_nmodule(self, p0); /* Direct call literal#LiteralPhase#process_nmodule on <self:Object(LiteralPhase)>*/
RET_LABEL:;
}
/* method literal#AModule#do_literal for (self: AModule, ToolContext) */
void literal__AModule__do_literal(val* self, val* p0) {
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var /* : LiteralVisitor */;
val* var_v /* var v: LiteralVisitor */;
var_toolcontext = p0;
var = NEW_literal__LiteralVisitor(&type_literal__LiteralVisitor);
{
literal__LiteralVisitor__init(var, var_toolcontext); /* Direct call literal#LiteralVisitor#init on <var:LiteralVisitor>*/
}
var_v = var;
{
parser_nodes__Visitor__enter_visit(var_v, self); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:LiteralVisitor>*/
}
RET_LABEL:;
}
/* method literal#AModule#do_literal for (self: Object, ToolContext) */
void VIRTUAL_literal__AModule__do_literal(val* self, val* p0) {
literal__AModule__do_literal(self, p0); /* Direct call literal#AModule#do_literal on <self:Object(AModule)>*/
RET_LABEL:;
}
/* method literal#LiteralVisitor#toolcontext for (self: LiteralVisitor): ToolContext */
val* literal__LiteralVisitor__toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_literal__LiteralVisitor___toolcontext].val; /* _toolcontext on <self:LiteralVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "literal.nit", 45);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method literal#LiteralVisitor#toolcontext for (self: Object): ToolContext */
val* VIRTUAL_literal__LiteralVisitor__toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
val* var3 /* : ToolContext */;
{ /* Inline literal#LiteralVisitor#toolcontext (self) on <self:Object(LiteralVisitor)> */
var3 = self->attrs[COLOR_literal__LiteralVisitor___toolcontext].val; /* _toolcontext on <self:Object(LiteralVisitor)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "literal.nit", 45);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method literal#LiteralVisitor#toolcontext= for (self: LiteralVisitor, ToolContext) */
void literal__LiteralVisitor__toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_literal__LiteralVisitor___toolcontext].val = p0; /* _toolcontext on <self:LiteralVisitor> */
RET_LABEL:;
}
/* method literal#LiteralVisitor#toolcontext= for (self: Object, ToolContext) */
void VIRTUAL_literal__LiteralVisitor__toolcontext_61d(val* self, val* p0) {
{ /* Inline literal#LiteralVisitor#toolcontext= (self,p0) on <self:Object(LiteralVisitor)> */
self->attrs[COLOR_literal__LiteralVisitor___toolcontext].val = p0; /* _toolcontext on <self:Object(LiteralVisitor)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method literal#LiteralVisitor#init for (self: LiteralVisitor, ToolContext) */
void literal__LiteralVisitor__init(val* self, val* p0) {
val* var_toolcontext /* var toolcontext: ToolContext */;
{
((void (*)(val*))(self->class->vft[COLOR_kernel__Object__init]))(self) /* init on <self:LiteralVisitor>*/;
}
var_toolcontext = p0;
{
{ /* Inline literal#LiteralVisitor#toolcontext= (self,var_toolcontext) on <self:LiteralVisitor> */
self->attrs[COLOR_literal__LiteralVisitor___toolcontext].val = var_toolcontext; /* _toolcontext on <self:LiteralVisitor> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method literal#LiteralVisitor#init for (self: Object, ToolContext) */
void VIRTUAL_literal__LiteralVisitor__init(val* self, val* p0) {
literal__LiteralVisitor__init(self, p0); /* Direct call literal#LiteralVisitor#init on <self:Object(LiteralVisitor)>*/
RET_LABEL:;
}
/* method literal#LiteralVisitor#visit for (self: LiteralVisitor, ANode) */
void literal__LiteralVisitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
var_n = p0;
{
((void (*)(val*, val*))(var_n->class->vft[COLOR_literal__ANode__accept_literal]))(var_n, self) /* accept_literal on <var_n:ANode>*/;
}
{
((void (*)(val*, val*))(var_n->class->vft[COLOR_parser_nodes__ANode__visit_all]))(var_n, self) /* visit_all on <var_n:ANode>*/;
}
RET_LABEL:;
}
/* method literal#LiteralVisitor#visit for (self: Object, ANode) */
void VIRTUAL_literal__LiteralVisitor__visit(val* self, val* p0) {
literal__LiteralVisitor__visit(self, p0); /* Direct call literal#LiteralVisitor#visit on <self:Object(LiteralVisitor)>*/
RET_LABEL:;
}
/* method literal#ANode#accept_literal for (self: ANode, LiteralVisitor) */
void literal__ANode__accept_literal(val* self, val* p0) {
val* var_v /* var v: LiteralVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method literal#ANode#accept_literal for (self: Object, LiteralVisitor) */
void VIRTUAL_literal__ANode__accept_literal(val* self, val* p0) {
val* var_v /* var v: LiteralVisitor */;
{ /* Inline literal#ANode#accept_literal (self,p0) on <self:Object(ANode)> */
var_v = p0;
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method literal#AIntExpr#value for (self: AIntExpr): nullable Int */
val* literal__AIntExpr__value(val* self) {
val* var /* : nullable Int */;
val* var1 /* : nullable Int */;
var1 = self->attrs[COLOR_literal__AIntExpr___value].val; /* _value on <self:AIntExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method literal#AIntExpr#value for (self: Object): nullable Int */
val* VIRTUAL_literal__AIntExpr__value(val* self) {
val* var /* : nullable Int */;
val* var1 /* : nullable Int */;
val* var3 /* : nullable Int */;
{ /* Inline literal#AIntExpr#value (self) on <self:Object(AIntExpr)> */
var3 = self->attrs[COLOR_literal__AIntExpr___value].val; /* _value on <self:Object(AIntExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method literal#AIntExpr#value= for (self: AIntExpr, nullable Int) */
void literal__AIntExpr__value_61d(val* self, val* p0) {
self->attrs[COLOR_literal__AIntExpr___value].val = p0; /* _value on <self:AIntExpr> */
RET_LABEL:;
}
/* method literal#AIntExpr#value= for (self: Object, nullable Int) */
void VIRTUAL_literal__AIntExpr__value_61d(val* self, val* p0) {
{ /* Inline literal#AIntExpr#value= (self,p0) on <self:Object(AIntExpr)> */
self->attrs[COLOR_literal__AIntExpr___value].val = p0; /* _value on <self:Object(AIntExpr)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method literal#ADecIntExpr#accept_literal for (self: ADecIntExpr, LiteralVisitor) */
void literal__ADecIntExpr__accept_literal(val* self, val* p0) {
val* var_v /* var v: LiteralVisitor */;
val* var /* : TNumber */;
val* var2 /* : TNumber */;
val* var3 /* : String */;
long var4 /* : Int */;
val* var6 /* : nullable Int */;
var_v = p0;
{
{ /* Inline parser_nodes#ADecIntExpr#n_number (self) on <self:ADecIntExpr> */
var2 = self->attrs[COLOR_parser_nodes__ADecIntExpr___n_number].val; /* _n_number on <self:ADecIntExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_number");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1814);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = lexer_work__Token__text(var);
}
{
var4 = string__Text__to_i(var3);
}
{
{ /* Inline literal#AIntExpr#value= (self,var4) on <self:ADecIntExpr> */
var6 = BOX_kernel__Int(var4); /* autobox from Int to nullable Int */
self->attrs[COLOR_literal__AIntExpr___value].val = var6; /* _value on <self:ADecIntExpr> */
RET_LABEL5:(void)0;
}
}
RET_LABEL:;
}
/* method literal#ADecIntExpr#accept_literal for (self: Object, LiteralVisitor) */
void VIRTUAL_literal__ADecIntExpr__accept_literal(val* self, val* p0) {
literal__ADecIntExpr__accept_literal(self, p0); /* Direct call literal#ADecIntExpr#accept_literal on <self:Object(ADecIntExpr)>*/
RET_LABEL:;
}
/* method literal#AHexIntExpr#accept_literal for (self: AHexIntExpr, LiteralVisitor) */
void literal__AHexIntExpr__accept_literal(val* self, val* p0) {
val* var_v /* var v: LiteralVisitor */;
val* var /* : THexNumber */;
val* var2 /* : THexNumber */;
val* var3 /* : String */;
long var4 /* : Int */;
val* var5 /* : Text */;
long var6 /* : Int */;
val* var8 /* : nullable Int */;
var_v = p0;
{
{ /* Inline parser_nodes#AHexIntExpr#n_hex_number (self) on <self:AHexIntExpr> */
var2 = self->attrs[COLOR_parser_nodes__AHexIntExpr___n_hex_number].val; /* _n_hex_number on <self:AHexIntExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_hex_number");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1819);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = lexer_work__Token__text(var);
}
var4 = 2;
{
var5 = string__Text__substring_from(var3, var4);
}
{
var6 = string__Text__to_hex(var5);
}
{
{ /* Inline literal#AIntExpr#value= (self,var6) on <self:AHexIntExpr> */
var8 = BOX_kernel__Int(var6); /* autobox from Int to nullable Int */
self->attrs[COLOR_literal__AIntExpr___value].val = var8; /* _value on <self:AHexIntExpr> */
RET_LABEL7:(void)0;
}
}
RET_LABEL:;
}
/* method literal#AHexIntExpr#accept_literal for (self: Object, LiteralVisitor) */
void VIRTUAL_literal__AHexIntExpr__accept_literal(val* self, val* p0) {
literal__AHexIntExpr__accept_literal(self, p0); /* Direct call literal#AHexIntExpr#accept_literal on <self:Object(AHexIntExpr)>*/
RET_LABEL:;
}
/* method literal#AFloatExpr#value= for (self: AFloatExpr, nullable Float) */
void literal__AFloatExpr__value_61d(val* self, val* p0) {
self->attrs[COLOR_literal__AFloatExpr___value].val = p0; /* _value on <self:AFloatExpr> */
RET_LABEL:;
}
/* method literal#AFloatExpr#value= for (self: Object, nullable Float) */
void VIRTUAL_literal__AFloatExpr__value_61d(val* self, val* p0) {
{ /* Inline literal#AFloatExpr#value= (self,p0) on <self:Object(AFloatExpr)> */
self->attrs[COLOR_literal__AFloatExpr___value].val = p0; /* _value on <self:Object(AFloatExpr)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method literal#AFloatExpr#accept_literal for (self: AFloatExpr, LiteralVisitor) */
void literal__AFloatExpr__accept_literal(val* self, val* p0) {
val* var_v /* var v: LiteralVisitor */;
val* var /* : TFloat */;
val* var2 /* : TFloat */;
val* var3 /* : String */;
double var4 /* : Float */;
val* var6 /* : nullable Float */;
var_v = p0;
{
{ /* Inline parser_nodes#AFloatExpr#n_float (self) on <self:AFloatExpr> */
var2 = self->attrs[COLOR_parser_nodes__AFloatExpr___n_float].val; /* _n_float on <self:AFloatExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_float");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1824);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = lexer_work__Token__text(var);
}
{
var4 = string__Text__to_f(var3);
}
{
{ /* Inline literal#AFloatExpr#value= (self,var4) on <self:AFloatExpr> */
var6 = BOX_kernel__Float(var4); /* autobox from Float to nullable Float */
self->attrs[COLOR_literal__AFloatExpr___value].val = var6; /* _value on <self:AFloatExpr> */
RET_LABEL5:(void)0;
}
}
RET_LABEL:;
}
/* method literal#AFloatExpr#accept_literal for (self: Object, LiteralVisitor) */
void VIRTUAL_literal__AFloatExpr__accept_literal(val* self, val* p0) {
literal__AFloatExpr__accept_literal(self, p0); /* Direct call literal#AFloatExpr#accept_literal on <self:Object(AFloatExpr)>*/
RET_LABEL:;
}
/* method literal#ACharExpr#value for (self: ACharExpr): nullable Char */
val* literal__ACharExpr__value(val* self) {
val* var /* : nullable Char */;
val* var1 /* : nullable Char */;
var1 = self->attrs[COLOR_literal__ACharExpr___value].val; /* _value on <self:ACharExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method literal#ACharExpr#value for (self: Object): nullable Char */
val* VIRTUAL_literal__ACharExpr__value(val* self) {
val* var /* : nullable Char */;
val* var1 /* : nullable Char */;
val* var3 /* : nullable Char */;
{ /* Inline literal#ACharExpr#value (self) on <self:Object(ACharExpr)> */
var3 = self->attrs[COLOR_literal__ACharExpr___value].val; /* _value on <self:Object(ACharExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method literal#ACharExpr#value= for (self: ACharExpr, nullable Char) */
void literal__ACharExpr__value_61d(val* self, val* p0) {
self->attrs[COLOR_literal__ACharExpr___value].val = p0; /* _value on <self:ACharExpr> */
RET_LABEL:;
}
/* method literal#ACharExpr#value= for (self: Object, nullable Char) */
void VIRTUAL_literal__ACharExpr__value_61d(val* self, val* p0) {
{ /* Inline literal#ACharExpr#value= (self,p0) on <self:Object(ACharExpr)> */
self->attrs[COLOR_literal__ACharExpr___value].val = p0; /* _value on <self:Object(ACharExpr)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method literal#ACharExpr#accept_literal for (self: ACharExpr, LiteralVisitor) */
void literal__ACharExpr__accept_literal(val* self, val* p0) {
val* var_v /* var v: LiteralVisitor */;
val* var /* : TChar */;
val* var2 /* : TChar */;
val* var3 /* : String */;
val* var4 /* : String */;
val* var_txt /* var txt: String */;
long var5 /* : Int */;
long var7 /* : Int */;
long var8 /* : Int */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : ToolContext */;
val* var16 /* : ToolContext */;
val* var17 /* : Location */;
static val* varonce;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : FlatString */;
val* var22 /* : Array[Object] */;
long var23 /* : Int */;
val* var24 /* : NativeArray[Object] */;
val* var25 /* : String */;
val* var26 /* : SequenceRead[Char] */;
val* var28 /* : SequenceRead[Char] */;
long var29 /* : Int */;
val* var30 /* : nullable Object */;
var_v = p0;
{
{ /* Inline parser_nodes#ACharExpr#n_char (self) on <self:ACharExpr> */
var2 = self->attrs[COLOR_parser_nodes__ACharExpr___n_char].val; /* _n_char on <self:ACharExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_char");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1829);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = lexer_work__Token__text(var);
}
{
var4 = string__Text__unescape_nit(var3);
}
var_txt = var4;
{
{ /* Inline string#FlatText#length (var_txt) on <var_txt:String> */
var7 = var_txt->attrs[COLOR_string__FlatText___length].l; /* _length on <var_txt:String> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
var8 = 3;
{
{ /* Inline kernel#Int#!= (var5,var8) on <var5:Int> */
var12 = var5 == var8;
var13 = !var12;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
{
{ /* Inline literal#LiteralVisitor#toolcontext (var_v) on <var_v:LiteralVisitor> */
var16 = var_v->attrs[COLOR_literal__LiteralVisitor___toolcontext].val; /* _toolcontext on <var_v:LiteralVisitor> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "literal.nit", 45);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = parser_nodes__ANode__hot_location(self);
}
if (varonce) {
var18 = varonce;
} else {
var19 = "Invalid character literal ";
var20 = 26;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce = var18;
}
var22 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var22 = array_instance Array[Object] */
var23 = 2;
var24 = NEW_array__NativeArray(var23, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var24)->values[0] = (val*) var18;
((struct instance_array__NativeArray*)var24)->values[1] = (val*) var_txt;
{
((void (*)(val*, val*, long))(var22->class->vft[COLOR_array__Array__with_native]))(var22, var24, var23) /* with_native on <var22:Array[Object]>*/;
}
}
{
var25 = ((val* (*)(val*))(var22->class->vft[COLOR_string__Object__to_s]))(var22) /* to_s on <var22:Array[Object]>*/;
}
{
toolcontext__ToolContext__error(var14, var17, var25); /* Direct call toolcontext#ToolContext#error on <var14:ToolContext>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline string#FlatString#chars (var_txt) on <var_txt:String> */
var28 = var_txt->attrs[COLOR_string__FlatString___chars].val; /* _chars on <var_txt:String> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 939);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
var29 = 1;
{
var30 = ((val* (*)(val*, long))(var26->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var26, var29) /* [] on <var26:SequenceRead[Char]>*/;
}
{
{ /* Inline literal#ACharExpr#value= (self,var30) on <self:ACharExpr> */
self->attrs[COLOR_literal__ACharExpr___value].val = var30; /* _value on <self:ACharExpr> */
RET_LABEL31:(void)0;
}
}
RET_LABEL:;
}
/* method literal#ACharExpr#accept_literal for (self: Object, LiteralVisitor) */
void VIRTUAL_literal__ACharExpr__accept_literal(val* self, val* p0) {
literal__ACharExpr__accept_literal(self, p0); /* Direct call literal#ACharExpr#accept_literal on <self:Object(ACharExpr)>*/
RET_LABEL:;
}
/* method literal#AStringFormExpr#value for (self: AStringFormExpr): nullable String */
val* literal__AStringFormExpr__value(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_literal__AStringFormExpr___value].val; /* _value on <self:AStringFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method literal#AStringFormExpr#value for (self: Object): nullable String */
val* VIRTUAL_literal__AStringFormExpr__value(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
val* var3 /* : nullable String */;
{ /* Inline literal#AStringFormExpr#value (self) on <self:Object(AStringFormExpr)> */
var3 = self->attrs[COLOR_literal__AStringFormExpr___value].val; /* _value on <self:Object(AStringFormExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method literal#AStringFormExpr#value= for (self: AStringFormExpr, nullable String) */
void literal__AStringFormExpr__value_61d(val* self, val* p0) {
self->attrs[COLOR_literal__AStringFormExpr___value].val = p0; /* _value on <self:AStringFormExpr> */
RET_LABEL:;
}
/* method literal#AStringFormExpr#value= for (self: Object, nullable String) */
void VIRTUAL_literal__AStringFormExpr__value_61d(val* self, val* p0) {
{ /* Inline literal#AStringFormExpr#value= (self,p0) on <self:Object(AStringFormExpr)> */
self->attrs[COLOR_literal__AStringFormExpr___value].val = p0; /* _value on <self:Object(AStringFormExpr)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method literal#AStringFormExpr#accept_literal for (self: AStringFormExpr, LiteralVisitor) */
void literal__AStringFormExpr__accept_literal(val* self, val* p0) {
val* var_v /* var v: LiteralVisitor */;
val* var /* : Token */;
val* var2 /* : Token */;
val* var3 /* : String */;
val* var_txt /* var txt: String */;
long var4 /* : Int */;
long var_behead /* var behead: Int */;
long var5 /* : Int */;
long var_betail /* var betail: Int */;
short int var6 /* : Bool */;
val* var7 /* : SequenceRead[Char] */;
val* var9 /* : SequenceRead[Char] */;
long var10 /* : Int */;
val* var11 /* : nullable Object */;
val* var12 /* : SequenceRead[Char] */;
val* var14 /* : SequenceRead[Char] */;
long var15 /* : Int */;
val* var16 /* : nullable Object */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var_ /* var : Bool */;
long var21 /* : Int */;
long var23 /* : Int */;
long var24 /* : Int */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var28 /* : Bool */;
long var29 /* : Int */;
long var30 /* : Int */;
short int var31 /* : Bool */;
val* var32 /* : SequenceRead[Char] */;
val* var34 /* : SequenceRead[Char] */;
long var35 /* : Int */;
val* var36 /* : nullable Object */;
char var37 /* : Char */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
char var42 /* : Char */;
short int var_43 /* var : Bool */;
val* var44 /* : SequenceRead[Char] */;
val* var46 /* : SequenceRead[Char] */;
long var47 /* : Int */;
val* var48 /* : nullable Object */;
char var49 /* : Char */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
char var54 /* : Char */;
long var55 /* : Int */;
long var56 /* : Int */;
long var58 /* : Int */;
long var59 /* : Int */;
short int var61 /* : Bool */;
int cltype62;
int idtype63;
const char* var_class_name64;
long var65 /* : Int */;
long var66 /* : Int */;
short int var68 /* : Bool */;
int cltype69;
int idtype70;
const char* var_class_name71;
long var72 /* : Int */;
val* var73 /* : String */;
val* var74 /* : String */;
var_v = p0;
{
{ /* Inline parser_nodes#AStringFormExpr#n_string (self) on <self:AStringFormExpr> */
var2 = self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AStringFormExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1834);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = lexer_work__Token__text(var);
}
var_txt = var3;
var4 = 1;
var_behead = var4;
var5 = 1;
var_betail = var5;
{
{ /* Inline string#FlatString#chars (var_txt) on <var_txt:String> */
var9 = var_txt->attrs[COLOR_string__FlatString___chars].val; /* _chars on <var_txt:String> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 939);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var10 = 0;
{
var11 = ((val* (*)(val*, long))(var7->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var7, var10) /* [] on <var7:SequenceRead[Char]>*/;
}
{
{ /* Inline string#FlatString#chars (var_txt) on <var_txt:String> */
var14 = var_txt->attrs[COLOR_string__FlatString___chars].val; /* _chars on <var_txt:String> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 939);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var15 = 1;
{
var16 = ((val* (*)(val*, long))(var12->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var12, var15) /* [] on <var12:SequenceRead[Char]>*/;
}
{
{ /* Inline kernel#Char#== (var11,var16) on <var11:nullable Object(Char)> */
var20 = var11 == var16 || (((struct instance_kernel__Char*)var11)->value == ((struct instance_kernel__Char*)var16)->value);
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
var17 = var18;
}
var_ = var17;
if (var17){
{
{ /* Inline string#FlatText#length (var_txt) on <var_txt:String> */
var23 = var_txt->attrs[COLOR_string__FlatText___length].l; /* _length on <var_txt:String> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
var24 = 6;
{
{ /* Inline kernel#Int#>= (var21,var24) on <var21:Int> */
/* Covariant cast for argument 0 (i) <var24:Int> isa OTHER */
/* <var24:Int> isa OTHER */
var27 = 1; /* easy <var24:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 372);
show_backtrace(1);
}
var28 = var21 >= var24;
var25 = var28;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var6 = var25;
} else {
var6 = var_;
}
if (var6){
var29 = 3;
var_behead = var29;
var30 = 3;
var_betail = var30;
{
{ /* Inline string#FlatString#chars (var_txt) on <var_txt:String> */
var34 = var_txt->attrs[COLOR_string__FlatString___chars].val; /* _chars on <var_txt:String> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 939);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
var35 = 0;
{
var36 = ((val* (*)(val*, long))(var32->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var32, var35) /* [] on <var32:SequenceRead[Char]>*/;
}
var37 = '\"';
{
{ /* Inline kernel#Char#== (var36,var37) on <var36:nullable Object(Char)> */
var41 = (var36 != NULL) && (var36->class == &class_kernel__Char);
if (var41) {
var42 = ((struct instance_kernel__Char*)var36)->value; /* autounbox from nullable Object to Char */;
var41 = (var42 == var37);
}
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
var38 = var39;
}
var_43 = var38;
if (var38){
{
{ /* Inline string#FlatString#chars (var_txt) on <var_txt:String> */
var46 = var_txt->attrs[COLOR_string__FlatString___chars].val; /* _chars on <var_txt:String> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 939);
show_backtrace(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
var47 = 3;
{
var48 = ((val* (*)(val*, long))(var44->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var44, var47) /* [] on <var44:SequenceRead[Char]>*/;
}
var49 = '\n';
{
{ /* Inline kernel#Char#== (var48,var49) on <var48:nullable Object(Char)> */
var53 = (var48 != NULL) && (var48->class == &class_kernel__Char);
if (var53) {
var54 = ((struct instance_kernel__Char*)var48)->value; /* autounbox from nullable Object to Char */;
var53 = (var54 == var49);
}
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
var50 = var51;
}
var31 = var50;
} else {
var31 = var_43;
}
if (var31){
var55 = 4;
var_behead = var55;
} else {
}
} else {
}
{
{ /* Inline string#FlatText#length (var_txt) on <var_txt:String> */
var58 = var_txt->attrs[COLOR_string__FlatText___length].l; /* _length on <var_txt:String> */
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var56,var_behead) on <var56:Int> */
/* Covariant cast for argument 0 (i) <var_behead:Int> isa OTHER */
/* <var_behead:Int> isa OTHER */
var61 = 1; /* easy <var_behead:Int> isa OTHER*/
if (unlikely(!var61)) {
var_class_name64 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name64);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var65 = var56 - var_behead;
var59 = var65;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var59,var_betail) on <var59:Int> */
/* Covariant cast for argument 0 (i) <var_betail:Int> isa OTHER */
/* <var_betail:Int> isa OTHER */
var68 = 1; /* easy <var_betail:Int> isa OTHER*/
if (unlikely(!var68)) {
var_class_name71 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name71);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var72 = var59 - var_betail;
var66 = var72;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
{
var73 = string__FlatString__substring(var_txt, var_behead, var66);
}
{
var74 = string__Text__unescape_nit(var73);
}
{
{ /* Inline literal#AStringFormExpr#value= (self,var74) on <self:AStringFormExpr> */
self->attrs[COLOR_literal__AStringFormExpr___value].val = var74; /* _value on <self:AStringFormExpr> */
RET_LABEL75:(void)0;
}
}
RET_LABEL:;
}
/* method literal#AStringFormExpr#accept_literal for (self: Object, LiteralVisitor) */
void VIRTUAL_literal__AStringFormExpr__accept_literal(val* self, val* p0) {
literal__AStringFormExpr__accept_literal(self, p0); /* Direct call literal#AStringFormExpr#accept_literal on <self:Object(AStringFormExpr)>*/
RET_LABEL:;
}
