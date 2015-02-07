#include "nit__literal.sep.0.h"
/* method literal#LiteralPhase#process_nmodule for (self: LiteralPhase, AModule) */
void nit__literal___nit__literal__LiteralPhase___nit__phase__Phase__process_nmodule(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
val* var /* : ToolContext */;
val* var2 /* : ToolContext */;
var_nmodule = p0;
{
{ /* Inline phase#Phase#toolcontext (self) on <self:LiteralPhase> */
var2 = self->attrs[COLOR_nit__phase__Phase___toolcontext].val; /* _toolcontext on <self:LiteralPhase> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 201);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nit__literal___AModule___do_literal(var_nmodule, var); /* Direct call literal#AModule#do_literal on <var_nmodule:AModule>*/
}
RET_LABEL:;
}
/* method literal#AModule#do_literal for (self: AModule, ToolContext) */
void nit__literal___AModule___do_literal(val* self, val* p0) {
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var /* : LiteralVisitor */;
val* var_v /* var v: LiteralVisitor */;
var_toolcontext = p0;
var = NEW_nit__literal__LiteralVisitor(&type_nit__literal__LiteralVisitor);
{
((void (*)(val* self, val* p0))(var->class->vft[COLOR_nit__literal__LiteralVisitor__toolcontext_61d]))(var, var_toolcontext) /* toolcontext= on <var:LiteralVisitor>*/;
}
{
((void (*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var) /* init on <var:LiteralVisitor>*/;
}
var_v = var;
{
nit___nit__Visitor___enter_visit(var_v, self); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:LiteralVisitor>*/
}
RET_LABEL:;
}
/* method literal#LiteralVisitor#toolcontext for (self: LiteralVisitor): ToolContext */
val* nit__literal___nit__literal__LiteralVisitor___toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_nit__literal__LiteralVisitor___toolcontext].val; /* _toolcontext on <self:LiteralVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__literal, 46);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method literal#LiteralVisitor#toolcontext= for (self: LiteralVisitor, ToolContext) */
void nit__literal___nit__literal__LiteralVisitor___toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_nit__literal__LiteralVisitor___toolcontext].val = p0; /* _toolcontext on <self:LiteralVisitor> */
RET_LABEL:;
}
/* method literal#LiteralVisitor#visit for (self: LiteralVisitor, ANode) */
void nit__literal___nit__literal__LiteralVisitor___nit__parser_nodes__Visitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
var_n = p0;
{
((void (*)(val* self, val* p0))(var_n->class->vft[COLOR_nit__literal__ANode__accept_literal]))(var_n, self) /* accept_literal on <var_n:ANode>*/;
}
{
((void (*)(val* self, val* p0))(var_n->class->vft[COLOR_nit__parser_nodes__ANode__visit_all]))(var_n, self) /* visit_all on <var_n:ANode>*/;
}
RET_LABEL:;
}
/* method literal#LiteralVisitor#init for (self: LiteralVisitor) */
void nit__literal___nit__literal__LiteralVisitor___standard__kernel__Object__init(val* self) {
{
((void (*)(val* self))(self->class->vft[COLOR_nit__literal___nit__literal__LiteralVisitor___standard__kernel__Object__init]))(self) /* init on <self:LiteralVisitor>*/;
}
RET_LABEL:;
}
/* method literal#ANode#accept_literal for (self: ANode, LiteralVisitor) */
void nit__literal___ANode___accept_literal(val* self, val* p0) {
val* var_v /* var v: LiteralVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method literal#AExpr#as_string for (self: AExpr): nullable String */
val* nit__literal___AExpr___as_string(val* self) {
val* var /* : nullable String */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var2 /* : Bool */;
val* var3 /* : null */;
val* var4 /* : nullable String */;
val* var6 /* : nullable String */;
/* <self:AExpr> isa AStringFormExpr */
cltype = type_nit__AStringFormExpr.color;
idtype = type_nit__AStringFormExpr.id;
if(cltype >= self->type->table_size) {
var1 = 0;
} else {
var1 = self->type->type_table[cltype] == idtype;
}
var2 = !var1;
if (var2){
var3 = NULL;
var = var3;
goto RET_LABEL;
} else {
}
{
{ /* Inline literal#AStringFormExpr#value (self) on <self:AExpr(AStringFormExpr)> */
var6 = self->attrs[COLOR_nit__literal__AStringFormExpr___value].val; /* _value on <self:AExpr(AStringFormExpr)> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__literal, 65);
show_backtrace(1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method literal#AExpr#as_id for (self: AExpr): nullable String */
val* nit__literal___AExpr___as_id(val* self) {
val* var /* : nullable String */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : String */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
short int var6 /* : Bool */;
val* var7 /* : null */;
val* var8 /* : AExpr */;
val* var10 /* : AExpr */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
short int var14 /* : Bool */;
val* var15 /* : null */;
val* var16 /* : AExprs */;
val* var18 /* : AExprs */;
val* var19 /* : ANodes[AExpr] */;
val* var21 /* : ANodes[AExpr] */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var24 /* : null */;
val* var25 /* : TId */;
val* var27 /* : TId */;
val* var28 /* : String */;
/* <self:AExpr> isa AMethidExpr */
cltype = type_nit__AMethidExpr.color;
idtype = type_nit__AMethidExpr.id;
if(cltype >= self->type->table_size) {
var1 = 0;
} else {
var1 = self->type->type_table[cltype] == idtype;
}
if (var1){
{
var2 = nit__parser_work___Prod___collect_text(self);
}
var = var2;
goto RET_LABEL;
} else {
}
/* <self:AExpr> isa ACallExpr */
cltype4 = type_nit__ACallExpr.color;
idtype5 = type_nit__ACallExpr.id;
if(cltype4 >= self->type->table_size) {
var3 = 0;
} else {
var3 = self->type->type_table[cltype4] == idtype5;
}
var6 = !var3;
if (var6){
var7 = NULL;
var = var7;
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ASendExpr#n_expr (self) on <self:AExpr(ACallExpr)> */
var10 = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AExpr(ACallExpr)> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1802);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
/* <var8:AExpr> isa AImplicitSelfExpr */
cltype12 = type_nit__AImplicitSelfExpr.color;
idtype13 = type_nit__AImplicitSelfExpr.id;
if(cltype12 >= var8->type->table_size) {
var11 = 0;
} else {
var11 = var8->type->type_table[cltype12] == idtype13;
}
var14 = !var11;
if (var14){
var15 = NULL;
var = var15;
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ACallFormExpr#n_args (self) on <self:AExpr(ACallExpr)> */
var18 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:AExpr(ACallExpr)> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2002);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var16) on <var16:AExprs> */
var21 = var16->attrs[COLOR_nit__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var16:AExprs> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2408);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = nit___nit__ANodes___standard__abstract_collection__Collection__is_empty(var19);
}
var23 = !var22;
if (var23){
var24 = NULL;
var = var24;
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ACallFormExpr#n_id (self) on <self:AExpr(ACallExpr)> */
var27 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:AExpr(ACallExpr)> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1999);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
var28 = nit__lexer_work___Token___text(var25);
}
var = var28;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method literal#AIntExpr#value for (self: AIntExpr): nullable Int */
val* nit__literal___AIntExpr___value(val* self) {
val* var /* : nullable Int */;
val* var1 /* : nullable Int */;
var1 = self->attrs[COLOR_nit__literal__AIntExpr___value].val; /* _value on <self:AIntExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method literal#AIntExpr#value= for (self: AIntExpr, nullable Int) */
void nit__literal___AIntExpr___value_61d(val* self, val* p0) {
self->attrs[COLOR_nit__literal__AIntExpr___value].val = p0; /* _value on <self:AIntExpr> */
RET_LABEL:;
}
/* method literal#ADecIntExpr#accept_literal for (self: ADecIntExpr, LiteralVisitor) */
void nit__literal___ADecIntExpr___ANode__accept_literal(val* self, val* p0) {
val* var_v /* var v: LiteralVisitor */;
val* var /* : TNumber */;
val* var2 /* : TNumber */;
val* var3 /* : String */;
long var4 /* : Int */;
val* var6 /* : nullable Int */;
var_v = p0;
{
{ /* Inline parser_nodes#ADecIntExpr#n_number (self) on <self:ADecIntExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__ADecIntExpr___n_number].val; /* _n_number on <self:ADecIntExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_number");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2216);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit__lexer_work___Token___text(var);
}
{
var4 = standard___standard__Text___to_i(var3);
}
{
{ /* Inline literal#AIntExpr#value= (self,var4) on <self:ADecIntExpr> */
var6 = BOX_standard__Int(var4); /* autobox from Int to nullable Int */
self->attrs[COLOR_nit__literal__AIntExpr___value].val = var6; /* _value on <self:ADecIntExpr> */
RET_LABEL5:(void)0;
}
}
RET_LABEL:;
}
/* method literal#AHexIntExpr#accept_literal for (self: AHexIntExpr, LiteralVisitor) */
void nit__literal___AHexIntExpr___ANode__accept_literal(val* self, val* p0) {
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
var2 = self->attrs[COLOR_nit__parser_nodes__AHexIntExpr___n_hex_number].val; /* _n_hex_number on <self:AHexIntExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_hex_number");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2224);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit__lexer_work___Token___text(var);
}
var4 = 2;
{
var5 = standard___standard__Text___substring_from(var3, var4);
}
{
var6 = standard___standard__Text___to_hex(var5);
}
{
{ /* Inline literal#AIntExpr#value= (self,var6) on <self:AHexIntExpr> */
var8 = BOX_standard__Int(var6); /* autobox from Int to nullable Int */
self->attrs[COLOR_nit__literal__AIntExpr___value].val = var8; /* _value on <self:AHexIntExpr> */
RET_LABEL7:(void)0;
}
}
RET_LABEL:;
}
/* method literal#AFloatExpr#value= for (self: AFloatExpr, nullable Float) */
void nit__literal___AFloatExpr___value_61d(val* self, val* p0) {
self->attrs[COLOR_nit__literal__AFloatExpr___value].val = p0; /* _value on <self:AFloatExpr> */
RET_LABEL:;
}
/* method literal#AFloatExpr#accept_literal for (self: AFloatExpr, LiteralVisitor) */
void nit__literal___AFloatExpr___ANode__accept_literal(val* self, val* p0) {
val* var_v /* var v: LiteralVisitor */;
val* var /* : TFloat */;
val* var2 /* : TFloat */;
val* var3 /* : String */;
double var4 /* : Float */;
val* var6 /* : nullable Float */;
var_v = p0;
{
{ /* Inline parser_nodes#AFloatExpr#n_float (self) on <self:AFloatExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__AFloatExpr___n_float].val; /* _n_float on <self:AFloatExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_float");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2232);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit__lexer_work___Token___text(var);
}
{
var4 = standard___standard__Text___to_f(var3);
}
{
{ /* Inline literal#AFloatExpr#value= (self,var4) on <self:AFloatExpr> */
var6 = BOX_standard__Float(var4); /* autobox from Float to nullable Float */
self->attrs[COLOR_nit__literal__AFloatExpr___value].val = var6; /* _value on <self:AFloatExpr> */
RET_LABEL5:(void)0;
}
}
RET_LABEL:;
}
/* method literal#ACharExpr#value for (self: ACharExpr): nullable Char */
val* nit__literal___ACharExpr___value(val* self) {
val* var /* : nullable Char */;
val* var1 /* : nullable Char */;
var1 = self->attrs[COLOR_nit__literal__ACharExpr___value].val; /* _value on <self:ACharExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method literal#ACharExpr#value= for (self: ACharExpr, nullable Char) */
void nit__literal___ACharExpr___value_61d(val* self, val* p0) {
self->attrs[COLOR_nit__literal__ACharExpr___value].val = p0; /* _value on <self:ACharExpr> */
RET_LABEL:;
}
/* method literal#ACharExpr#accept_literal for (self: ACharExpr, LiteralVisitor) */
void nit__literal___ACharExpr___ANode__accept_literal(val* self, val* p0) {
val* var_v /* var v: LiteralVisitor */;
val* var /* : TChar */;
val* var2 /* : TChar */;
val* var3 /* : String */;
val* var4 /* : String */;
val* var_txt /* var txt: String */;
long var5 /* : Int */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : ToolContext */;
val* var13 /* : ToolContext */;
val* var14 /* : Location */;
static val* varonce;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : FlatString */;
val* var19 /* : Array[Object] */;
long var20 /* : Int */;
val* var21 /* : NativeArray[Object] */;
val* var22 /* : String */;
val* var23 /* : SequenceRead[Char] */;
long var24 /* : Int */;
val* var25 /* : nullable Object */;
var_v = p0;
{
{ /* Inline parser_nodes#ACharExpr#n_char (self) on <self:ACharExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__ACharExpr___n_char].val; /* _n_char on <self:ACharExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_char");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2240);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit__lexer_work___Token___text(var);
}
{
var4 = standard___standard__Text___unescape_nit(var3);
}
var_txt = var4;
{
var5 = ((long (*)(val* self))(var_txt->class->vft[COLOR_standard__string__Text__length]))(var_txt) /* length on <var_txt:String>*/;
}
var6 = 3;
{
{ /* Inline kernel#Int#!= (var5,var6) on <var5:Int> */
var9 = var5 == var6;
var10 = !var9;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
{
{ /* Inline literal#LiteralVisitor#toolcontext (var_v) on <var_v:LiteralVisitor> */
var13 = var_v->attrs[COLOR_nit__literal__LiteralVisitor___toolcontext].val; /* _toolcontext on <var_v:LiteralVisitor> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__literal, 46);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = nit___nit__ANode___hot_location(self);
}
if (varonce) {
var15 = varonce;
} else {
var16 = "Invalid character literal ";
var17 = 26;
var18 = standard___standard__NativeString___to_s_with_length(var16, var17);
var15 = var18;
varonce = var15;
}
var19 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var19 = array_instance Array[Object] */
var20 = 2;
var21 = NEW_standard__NativeArray(var20, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var21)->values[0] = (val*) var15;
((struct instance_standard__NativeArray*)var21)->values[1] = (val*) var_txt;
{
((void (*)(val* self, val* p0, long p1))(var19->class->vft[COLOR_standard__array__Array__with_native]))(var19, var21, var20) /* with_native on <var19:Array[Object]>*/;
}
}
{
var22 = ((val* (*)(val* self))(var19->class->vft[COLOR_standard__string__Object__to_s]))(var19) /* to_s on <var19:Array[Object]>*/;
}
{
nit___nit__ToolContext___error(var11, var14, var22); /* Direct call toolcontext#ToolContext#error on <var11:ToolContext>*/
}
goto RET_LABEL;
} else {
}
{
var23 = ((val* (*)(val* self))(var_txt->class->vft[COLOR_standard__string__Text__chars]))(var_txt) /* chars on <var_txt:String>*/;
}
var24 = 1;
{
var25 = ((val* (*)(val* self, long p0))(var23->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var23, var24) /* [] on <var23:SequenceRead[Char]>*/;
}
{
{ /* Inline literal#ACharExpr#value= (self,var25) on <self:ACharExpr> */
self->attrs[COLOR_nit__literal__ACharExpr___value].val = var25; /* _value on <self:ACharExpr> */
RET_LABEL26:(void)0;
}
}
RET_LABEL:;
}
/* method literal#AStringFormExpr#value for (self: AStringFormExpr): nullable String */
val* nit__literal___AStringFormExpr___value(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_nit__literal__AStringFormExpr___value].val; /* _value on <self:AStringFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method literal#AStringFormExpr#value= for (self: AStringFormExpr, nullable String) */
void nit__literal___AStringFormExpr___value_61d(val* self, val* p0) {
self->attrs[COLOR_nit__literal__AStringFormExpr___value].val = p0; /* _value on <self:AStringFormExpr> */
RET_LABEL:;
}
/* method literal#AStringFormExpr#accept_literal for (self: AStringFormExpr, LiteralVisitor) */
void nit__literal___AStringFormExpr___ANode__accept_literal(val* self, val* p0) {
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
long var8 /* : Int */;
val* var9 /* : nullable Object */;
val* var10 /* : SequenceRead[Char] */;
long var11 /* : Int */;
val* var12 /* : nullable Object */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var_ /* var : Bool */;
long var16 /* : Int */;
long var17 /* : Int */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var21 /* : Bool */;
long var22 /* : Int */;
long var23 /* : Int */;
short int var24 /* : Bool */;
val* var25 /* : SequenceRead[Char] */;
long var26 /* : Int */;
val* var27 /* : nullable Object */;
char var28 /* : Char */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
char var32 /* : Char */;
short int var_33 /* var : Bool */;
val* var34 /* : SequenceRead[Char] */;
long var35 /* : Int */;
val* var36 /* : nullable Object */;
char var37 /* : Char */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
char var41 /* : Char */;
long var42 /* : Int */;
long var43 /* : Int */;
long var44 /* : Int */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
long var50 /* : Int */;
long var51 /* : Int */;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
const char* var_class_name56;
long var57 /* : Int */;
val* var58 /* : Text */;
val* var59 /* : String */;
var_v = p0;
{
{ /* Inline parser_nodes#AStringFormExpr#n_string (self) on <self:AStringFormExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AStringFormExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2248);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit__lexer_work___Token___text(var);
}
var_txt = var3;
var4 = 1;
var_behead = var4;
var5 = 1;
var_betail = var5;
{
var7 = ((val* (*)(val* self))(var_txt->class->vft[COLOR_standard__string__Text__chars]))(var_txt) /* chars on <var_txt:String>*/;
}
var8 = 0;
{
var9 = ((val* (*)(val* self, long p0))(var7->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var7, var8) /* [] on <var7:SequenceRead[Char]>*/;
}
{
var10 = ((val* (*)(val* self))(var_txt->class->vft[COLOR_standard__string__Text__chars]))(var_txt) /* chars on <var_txt:String>*/;
}
var11 = 1;
{
var12 = ((val* (*)(val* self, long p0))(var10->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var10, var11) /* [] on <var10:SequenceRead[Char]>*/;
}
{
{ /* Inline kernel#Char#== (var9,var12) on <var9:nullable Object(Char)> */
var15 = var9 == var12 || (((struct instance_standard__Char*)var9)->value == ((struct instance_standard__Char*)var12)->value);
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var_ = var13;
if (var13){
{
var16 = ((long (*)(val* self))(var_txt->class->vft[COLOR_standard__string__Text__length]))(var_txt) /* length on <var_txt:String>*/;
}
var17 = 6;
{
{ /* Inline kernel#Int#>= (var16,var17) on <var16:Int> */
/* Covariant cast for argument 0 (i) <var17:Int> isa OTHER */
/* <var17:Int> isa OTHER */
var20 = 1; /* easy <var17:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 411);
show_backtrace(1);
}
var21 = var16 >= var17;
var18 = var21;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var6 = var18;
} else {
var6 = var_;
}
if (var6){
var22 = 3;
var_behead = var22;
var23 = 3;
var_betail = var23;
{
var25 = ((val* (*)(val* self))(var_txt->class->vft[COLOR_standard__string__Text__chars]))(var_txt) /* chars on <var_txt:String>*/;
}
var26 = 0;
{
var27 = ((val* (*)(val* self, long p0))(var25->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var25, var26) /* [] on <var25:SequenceRead[Char]>*/;
}
var28 = '\"';
{
{ /* Inline kernel#Char#== (var27,var28) on <var27:nullable Object(Char)> */
var31 = (var27 != NULL) && (var27->class == &class_standard__Char);
if (var31) {
var32 = ((struct instance_standard__Char*)var27)->value; /* autounbox from nullable Object to Char */;
var31 = (var32 == var28);
}
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_33 = var29;
if (var29){
{
var34 = ((val* (*)(val* self))(var_txt->class->vft[COLOR_standard__string__Text__chars]))(var_txt) /* chars on <var_txt:String>*/;
}
var35 = 3;
{
var36 = ((val* (*)(val* self, long p0))(var34->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var34, var35) /* [] on <var34:SequenceRead[Char]>*/;
}
var37 = '\n';
{
{ /* Inline kernel#Char#== (var36,var37) on <var36:nullable Object(Char)> */
var40 = (var36 != NULL) && (var36->class == &class_standard__Char);
if (var40) {
var41 = ((struct instance_standard__Char*)var36)->value; /* autounbox from nullable Object to Char */;
var40 = (var41 == var37);
}
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
var24 = var38;
} else {
var24 = var_33;
}
if (var24){
var42 = 4;
var_behead = var42;
} else {
}
} else {
}
{
var43 = ((long (*)(val* self))(var_txt->class->vft[COLOR_standard__string__Text__length]))(var_txt) /* length on <var_txt:String>*/;
}
{
{ /* Inline kernel#Int#- (var43,var_behead) on <var43:Int> */
/* Covariant cast for argument 0 (i) <var_behead:Int> isa OTHER */
/* <var_behead:Int> isa OTHER */
var46 = 1; /* easy <var_behead:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var50 = var43 - var_behead;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var44,var_betail) on <var44:Int> */
/* Covariant cast for argument 0 (i) <var_betail:Int> isa OTHER */
/* <var_betail:Int> isa OTHER */
var53 = 1; /* easy <var_betail:Int> isa OTHER*/
if (unlikely(!var53)) {
var_class_name56 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name56);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var57 = var44 - var_betail;
var51 = var57;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
{
var58 = ((val* (*)(val* self, long p0, long p1))(var_txt->class->vft[COLOR_standard__string__Text__substring]))(var_txt, var_behead, var51) /* substring on <var_txt:String>*/;
}
{
var59 = standard___standard__Text___unescape_nit(var58);
}
{
{ /* Inline literal#AStringFormExpr#value= (self,var59) on <self:AStringFormExpr> */
self->attrs[COLOR_nit__literal__AStringFormExpr___value].val = var59; /* _value on <self:AStringFormExpr> */
RET_LABEL60:(void)0;
}
}
RET_LABEL:;
}
