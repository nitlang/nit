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
PRINT_ERROR(" (%s:%d)\n", "src/phase.nit", 145);
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
PRINT_ERROR(" (%s:%d)\n", "src/literal.nit", 47);
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
PRINT_ERROR(" (%s:%d)\n", "src/literal.nit", 47);
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
{ /* Inline parser_nodes#Visitor#init (self) on <self:LiteralVisitor> */
RET_LABEL1:(void)0;
}
}
var_toolcontext = p0;
{
{ /* Inline literal#LiteralVisitor#toolcontext= (self,var_toolcontext) on <self:LiteralVisitor> */
self->attrs[COLOR_literal__LiteralVisitor___toolcontext].val = var_toolcontext; /* _toolcontext on <self:LiteralVisitor> */
RET_LABEL2:(void)0;
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
val* var1 /* : String */;
long var2 /* : Int */;
val* var4 /* : nullable Int */;
var_v = p0;
{
var = parser_nodes__ADecIntExpr__n_number(self);
}
{
var1 = lexer_work__Token__text(var);
}
{
var2 = string__Text__to_i(var1);
}
{
{ /* Inline literal#AIntExpr#value= (self,var2) on <self:ADecIntExpr> */
var4 = BOX_kernel__Int(var2); /* autobox from Int to nullable Int */
self->attrs[COLOR_literal__AIntExpr___value].val = var4; /* _value on <self:ADecIntExpr> */
RET_LABEL3:(void)0;
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
val* var1 /* : String */;
long var2 /* : Int */;
val* var3 /* : Text */;
long var4 /* : Int */;
val* var6 /* : nullable Int */;
var_v = p0;
{
var = parser_nodes__AHexIntExpr__n_hex_number(self);
}
{
var1 = lexer_work__Token__text(var);
}
var2 = 2;
{
var3 = string__Text__substring_from(var1, var2);
}
{
var4 = string__Text__to_hex(var3);
}
{
{ /* Inline literal#AIntExpr#value= (self,var4) on <self:AHexIntExpr> */
var6 = BOX_kernel__Int(var4); /* autobox from Int to nullable Int */
self->attrs[COLOR_literal__AIntExpr___value].val = var6; /* _value on <self:AHexIntExpr> */
RET_LABEL5:(void)0;
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
val* var1 /* : String */;
double var2 /* : Float */;
val* var4 /* : nullable Float */;
var_v = p0;
{
var = parser_nodes__AFloatExpr__n_float(self);
}
{
var1 = lexer_work__Token__text(var);
}
{
var2 = string__Text__to_f(var1);
}
{
{ /* Inline literal#AFloatExpr#value= (self,var2) on <self:AFloatExpr> */
var4 = BOX_kernel__Float(var2); /* autobox from Float to nullable Float */
self->attrs[COLOR_literal__AFloatExpr___value].val = var4; /* _value on <self:AFloatExpr> */
RET_LABEL3:(void)0;
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
val* var1 /* : String */;
val* var2 /* : String */;
val* var_txt /* var txt: String */;
long var3 /* : Int */;
long var5 /* : Int */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : ToolContext */;
val* var14 /* : ToolContext */;
val* var15 /* : Location */;
static val* varonce;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : FlatString */;
val* var20 /* : Array[Object] */;
long var21 /* : Int */;
val* var22 /* : NativeArray[Object] */;
val* var23 /* : String */;
val* var24 /* : SequenceRead[Char] */;
val* var26 /* : SequenceRead[Char] */;
long var27 /* : Int */;
val* var28 /* : nullable Object */;
var_v = p0;
{
var = parser_nodes__ACharExpr__n_char(self);
}
{
var1 = lexer_work__Token__text(var);
}
{
var2 = string__Text__unescape_nit(var1);
}
var_txt = var2;
{
{ /* Inline string#FlatText#length (var_txt) on <var_txt:String> */
var5 = var_txt->attrs[COLOR_string__FlatText___length].l; /* _length on <var_txt:String> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var6 = 3;
{
{ /* Inline kernel#Int#!= (var3,var6) on <var3:Int> */
var10 = var3 == var6;
var11 = !var10;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
if (var7){
{
{ /* Inline literal#LiteralVisitor#toolcontext (var_v) on <var_v:LiteralVisitor> */
var14 = var_v->attrs[COLOR_literal__LiteralVisitor___toolcontext].val; /* _toolcontext on <var_v:LiteralVisitor> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/literal.nit", 47);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = parser_nodes__ANode__hot_location(self);
}
if (varonce) {
var16 = varonce;
} else {
var17 = "Invalid character literal ";
var18 = 26;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce = var16;
}
var20 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var20 = array_instance Array[Object] */
var21 = 2;
var22 = NEW_array__NativeArray(var21, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var22)->values[0] = (val*) var16;
((struct instance_array__NativeArray*)var22)->values[1] = (val*) var_txt;
{
((void (*)(val*, val*, long))(var20->class->vft[COLOR_array__Array__with_native]))(var20, var22, var21) /* with_native on <var20:Array[Object]>*/;
}
}
{
var23 = ((val* (*)(val*))(var20->class->vft[COLOR_string__Object__to_s]))(var20) /* to_s on <var20:Array[Object]>*/;
}
{
toolcontext__ToolContext__error(var12, var15, var23); /* Direct call toolcontext#ToolContext#error on <var12:ToolContext>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline string#FlatString#chars (var_txt) on <var_txt:String> */
var26 = var_txt->attrs[COLOR_string__FlatString___chars].val; /* _chars on <var_txt:String> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/string.nit", 746);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
var27 = 1;
{
var28 = ((val* (*)(val*, long))(var24->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var24, var27) /* [] on <var24:SequenceRead[Char]>*/;
}
{
{ /* Inline literal#ACharExpr#value= (self,var28) on <self:ACharExpr> */
self->attrs[COLOR_literal__ACharExpr___value].val = var28; /* _value on <self:ACharExpr> */
RET_LABEL29:(void)0;
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
val* var1 /* : String */;
val* var_txt /* var txt: String */;
long var2 /* : Int */;
long var_behead /* var behead: Int */;
long var3 /* : Int */;
long var_betail /* var betail: Int */;
short int var4 /* : Bool */;
val* var5 /* : SequenceRead[Char] */;
val* var7 /* : SequenceRead[Char] */;
long var8 /* : Int */;
val* var9 /* : nullable Object */;
val* var10 /* : SequenceRead[Char] */;
val* var12 /* : SequenceRead[Char] */;
long var13 /* : Int */;
val* var14 /* : nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var_ /* var : Bool */;
long var19 /* : Int */;
long var21 /* : Int */;
long var22 /* : Int */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var26 /* : Bool */;
long var27 /* : Int */;
long var28 /* : Int */;
short int var29 /* : Bool */;
val* var30 /* : SequenceRead[Char] */;
val* var32 /* : SequenceRead[Char] */;
long var33 /* : Int */;
val* var34 /* : nullable Object */;
char var35 /* : Char */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
char var40 /* : Char */;
short int var_41 /* var : Bool */;
val* var42 /* : SequenceRead[Char] */;
val* var44 /* : SequenceRead[Char] */;
long var45 /* : Int */;
val* var46 /* : nullable Object */;
char var47 /* : Char */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
char var52 /* : Char */;
long var53 /* : Int */;
long var54 /* : Int */;
long var56 /* : Int */;
long var57 /* : Int */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
const char* var_class_name62;
long var63 /* : Int */;
long var64 /* : Int */;
short int var66 /* : Bool */;
int cltype67;
int idtype68;
const char* var_class_name69;
long var70 /* : Int */;
val* var71 /* : String */;
val* var72 /* : String */;
var_v = p0;
{
var = parser_nodes__AStringFormExpr__n_string(self);
}
{
var1 = lexer_work__Token__text(var);
}
var_txt = var1;
var2 = 1;
var_behead = var2;
var3 = 1;
var_betail = var3;
{
{ /* Inline string#FlatString#chars (var_txt) on <var_txt:String> */
var7 = var_txt->attrs[COLOR_string__FlatString___chars].val; /* _chars on <var_txt:String> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/string.nit", 746);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
var8 = 0;
{
var9 = ((val* (*)(val*, long))(var5->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var5, var8) /* [] on <var5:SequenceRead[Char]>*/;
}
{
{ /* Inline string#FlatString#chars (var_txt) on <var_txt:String> */
var12 = var_txt->attrs[COLOR_string__FlatString___chars].val; /* _chars on <var_txt:String> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/string.nit", 746);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var13 = 1;
{
var14 = ((val* (*)(val*, long))(var10->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var10, var13) /* [] on <var10:SequenceRead[Char]>*/;
}
{
{ /* Inline kernel#Char#== (var9,var14) on <var9:nullable Object(Char)> */
var18 = var9 == var14 || (((struct instance_kernel__Char*)var9)->value == ((struct instance_kernel__Char*)var14)->value);
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var15 = var16;
}
var_ = var15;
if (var15){
{
{ /* Inline string#FlatText#length (var_txt) on <var_txt:String> */
var21 = var_txt->attrs[COLOR_string__FlatText___length].l; /* _length on <var_txt:String> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
var22 = 6;
{
{ /* Inline kernel#Int#>= (var19,var22) on <var19:Int> */
/* Covariant cast for argument 0 (i) <var22:Int> isa OTHER */
/* <var22:Int> isa OTHER */
var25 = 1; /* easy <var22:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 326);
show_backtrace(1);
}
var26 = var19 >= var22;
var23 = var26;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var4 = var23;
} else {
var4 = var_;
}
if (var4){
var27 = 3;
var_behead = var27;
var28 = 3;
var_betail = var28;
{
{ /* Inline string#FlatString#chars (var_txt) on <var_txt:String> */
var32 = var_txt->attrs[COLOR_string__FlatString___chars].val; /* _chars on <var_txt:String> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/string.nit", 746);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
var33 = 0;
{
var34 = ((val* (*)(val*, long))(var30->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var30, var33) /* [] on <var30:SequenceRead[Char]>*/;
}
var35 = '\"';
{
{ /* Inline kernel#Char#== (var34,var35) on <var34:nullable Object(Char)> */
var39 = (var34 != NULL) && (var34->class == &class_kernel__Char);
if (var39) {
var40 = ((struct instance_kernel__Char*)var34)->value; /* autounbox from nullable Object to Char */;
var39 = (var40 == var35);
}
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
var36 = var37;
}
var_41 = var36;
if (var36){
{
{ /* Inline string#FlatString#chars (var_txt) on <var_txt:String> */
var44 = var_txt->attrs[COLOR_string__FlatString___chars].val; /* _chars on <var_txt:String> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/string.nit", 746);
show_backtrace(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
var45 = 3;
{
var46 = ((val* (*)(val*, long))(var42->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var42, var45) /* [] on <var42:SequenceRead[Char]>*/;
}
var47 = '\n';
{
{ /* Inline kernel#Char#== (var46,var47) on <var46:nullable Object(Char)> */
var51 = (var46 != NULL) && (var46->class == &class_kernel__Char);
if (var51) {
var52 = ((struct instance_kernel__Char*)var46)->value; /* autounbox from nullable Object to Char */;
var51 = (var52 == var47);
}
var49 = var51;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
var48 = var49;
}
var29 = var48;
} else {
var29 = var_41;
}
if (var29){
var53 = 4;
var_behead = var53;
} else {
}
} else {
}
{
{ /* Inline string#FlatText#length (var_txt) on <var_txt:String> */
var56 = var_txt->attrs[COLOR_string__FlatText___length].l; /* _length on <var_txt:String> */
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var54,var_behead) on <var54:Int> */
/* Covariant cast for argument 0 (i) <var_behead:Int> isa OTHER */
/* <var_behead:Int> isa OTHER */
var59 = 1; /* easy <var_behead:Int> isa OTHER*/
if (unlikely(!var59)) {
var_class_name62 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name62);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var63 = var54 - var_behead;
var57 = var63;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var57,var_betail) on <var57:Int> */
/* Covariant cast for argument 0 (i) <var_betail:Int> isa OTHER */
/* <var_betail:Int> isa OTHER */
var66 = 1; /* easy <var_betail:Int> isa OTHER*/
if (unlikely(!var66)) {
var_class_name69 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name69);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var70 = var57 - var_betail;
var64 = var70;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
{
var71 = string__FlatString__substring(var_txt, var_behead, var64);
}
{
var72 = string__Text__unescape_nit(var71);
}
{
{ /* Inline literal#AStringFormExpr#value= (self,var72) on <self:AStringFormExpr> */
self->attrs[COLOR_literal__AStringFormExpr___value].val = var72; /* _value on <self:AStringFormExpr> */
RET_LABEL73:(void)0;
}
}
RET_LABEL:;
}
/* method literal#AStringFormExpr#accept_literal for (self: Object, LiteralVisitor) */
void VIRTUAL_literal__AStringFormExpr__accept_literal(val* self, val* p0) {
literal__AStringFormExpr__accept_literal(self, p0); /* Direct call literal#AStringFormExpr#accept_literal on <self:Object(AStringFormExpr)>*/
RET_LABEL:;
}
