#include "nitc__literal.sep.0.h"
/* method literal#LiteralPhase#process_nmodule for (self: LiteralPhase, AModule) */
void nitc__literal___nitc__literal__LiteralPhase___nitc__phase__Phase__process_nmodule(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
val* var /* : ToolContext */;
val* var2 /* : ToolContext */;
var_nmodule = p0;
{
{ /* Inline phase#Phase#toolcontext (self) on <self:LiteralPhase> */
var2 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:LiteralPhase> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 200);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc__literal___AModule___do_literal(var_nmodule, var); /* Direct call literal#AModule#do_literal on <var_nmodule:AModule>*/
}
RET_LABEL:;
}
/* method literal#AModule#do_literal for (self: AModule, ToolContext) */
void nitc__literal___AModule___do_literal(val* self, val* p0) {
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var /* : LiteralVisitor */;
val* var_v /* var v: LiteralVisitor */;
var_toolcontext = p0;
var = NEW_nitc__literal__LiteralVisitor(&type_nitc__literal__LiteralVisitor);
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nitc__literal__LiteralVisitor__toolcontext_61d]))(var, var_toolcontext); /* toolcontext= on <var:LiteralVisitor>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__init]))(var); /* init on <var:LiteralVisitor>*/
}
var_v = var;
{
nitc___nitc__Visitor___enter_visit(var_v, self); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:LiteralVisitor>*/
}
RET_LABEL:;
}
/* method literal#LiteralVisitor#toolcontext for (self: LiteralVisitor): ToolContext */
val* nitc__literal___nitc__literal__LiteralVisitor___toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_nitc__literal__LiteralVisitor___toolcontext].val; /* _toolcontext on <self:LiteralVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__literal, 46);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method literal#LiteralVisitor#toolcontext= for (self: LiteralVisitor, ToolContext) */
void nitc__literal___nitc__literal__LiteralVisitor___toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__literal__LiteralVisitor___toolcontext].val = p0; /* _toolcontext on <self:LiteralVisitor> */
RET_LABEL:;
}
/* method literal#LiteralVisitor#visit for (self: LiteralVisitor, ANode) */
void nitc__literal___nitc__literal__LiteralVisitor___nitc__parser_nodes__Visitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
var_n = p0;
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nitc__literal__ANode__accept_literal]))(var_n, self); /* accept_literal on <var_n:ANode>*/
}
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nitc__parser_nodes__ANode__visit_all]))(var_n, self); /* visit_all on <var_n:ANode>*/
}
RET_LABEL:;
}
/* method literal#LiteralVisitor#init for (self: LiteralVisitor) */
void nitc__literal___nitc__literal__LiteralVisitor___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc__literal___nitc__literal__LiteralVisitor___core__kernel__Object__init]))(self); /* init on <self:LiteralVisitor>*/
}
RET_LABEL:;
}
/* method literal#ANode#accept_literal for (self: ANode, LiteralVisitor) */
void nitc__literal___ANode___accept_literal(val* self, val* p0) {
val* var_v /* var v: LiteralVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method literal#AExpr#as_string for (self: AExpr): nullable String */
val* nitc__literal___AExpr___as_string(val* self) {
val* var /* : nullable String */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var2 /* : Bool */;
val* var3 /* : nullable String */;
val* var5 /* : nullable String */;
/* <self:AExpr> isa AStringFormExpr */
cltype = type_nitc__AStringFormExpr.color;
idtype = type_nitc__AStringFormExpr.id;
if(cltype >= self->type->table_size) {
var1 = 0;
} else {
var1 = self->type->type_table[cltype] == idtype;
}
var2 = !var1;
if (var2){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline literal#AStringFormExpr#value (self) on <self:AExpr(AStringFormExpr)> */
var5 = self->attrs[COLOR_nitc__literal__AStringFormExpr___value].val; /* _value on <self:AExpr(AStringFormExpr)> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__literal, 65);
fatal_exit(1);
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method literal#AIntegerExpr#value for (self: AIntegerExpr): nullable Numeric */
val* nitc__literal___AIntegerExpr___value(val* self) {
val* var /* : nullable Numeric */;
val* var1 /* : nullable Numeric */;
var1 = self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <self:AIntegerExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method literal#AIntegerExpr#value= for (self: AIntegerExpr, nullable Numeric) */
void nitc__literal___AIntegerExpr___value_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val = p0; /* _value on <self:AIntegerExpr> */
RET_LABEL:;
}
/* method literal#AIntegerExpr#accept_literal for (self: AIntegerExpr, LiteralVisitor) */
void nitc__literal___AIntegerExpr___ANode__accept_literal(val* self, val* p0) {
val* var_v /* var v: LiteralVisitor */;
val* var /* : TInteger */;
val* var2 /* : TInteger */;
val* var3 /* : String */;
val* var4 /* : nullable Numeric */;
val* var6 /* : nullable Numeric */;
val* var8 /* : nullable Numeric */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : ToolContext */;
val* var13 /* : ToolContext */;
val* var14 /* : Location */;
val* var15 /* : NativeArray[String] */;
static val* varonce;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : String */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : String */;
val* var24 /* : TInteger */;
val* var26 /* : TInteger */;
val* var27 /* : String */;
val* var28 /* : String */;
val* var29 /* : Message */;
var_v = p0;
{
{ /* Inline parser_nodes#AIntegerExpr#n_integer (self) on <self:AIntegerExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AIntegerExpr___n_integer].val; /* _n_integer on <self:AIntegerExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_integer");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2511);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__lexer_work___Token___text(var);
}
{
var4 = core__fixed_ints___Text___to_num(var3);
}
{
{ /* Inline literal#AIntegerExpr#value= (self,var4) on <self:AIntegerExpr> */
self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val = var4; /* _value on <self:AIntegerExpr> */
RET_LABEL5:(void)0;
}
}
{
{ /* Inline literal#AIntegerExpr#value (self) on <self:AIntegerExpr> */
var8 = self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <self:AIntegerExpr> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (var6 == NULL) {
var9 = 1; /* is null */
} else {
var9 = 0; /* arg is null but recv is not */
}
if (0) {
var10 = ((short int(*)(val* self, val* p0))((((long)var6&3)?class_info[((long)var6&3)]:var6->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var6, ((val*)NULL)); /* == on <var6:nullable Numeric>*/
var9 = var10;
}
if (var9){
{
{ /* Inline literal#LiteralVisitor#toolcontext (var_v) on <var_v:LiteralVisitor> */
var13 = var_v->attrs[COLOR_nitc__literal__LiteralVisitor___toolcontext].val; /* _toolcontext on <var_v:LiteralVisitor> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__literal, 46);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = nitc___nitc__ANode___hot_location(self);
}
if (unlikely(varonce==NULL)) {
var15 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "Error: invalid literal `";
var19 = core__flat___NativeString___to_s_full(var18, 24l, 24l);
var17 = var19;
varonce16 = var17;
}
((struct instance_core__NativeArray*)var15)->values[0]=var17;
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "`";
var23 = core__flat___NativeString___to_s_full(var22, 1l, 1l);
var21 = var23;
varonce20 = var21;
}
((struct instance_core__NativeArray*)var15)->values[2]=var21;
} else {
var15 = varonce;
varonce = NULL;
}
{
{ /* Inline parser_nodes#AIntegerExpr#n_integer (self) on <self:AIntegerExpr> */
var26 = self->attrs[COLOR_nitc__parser_nodes__AIntegerExpr___n_integer].val; /* _n_integer on <self:AIntegerExpr> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_integer");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2511);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
var27 = nitc__lexer_work___Token___text(var24);
}
((struct instance_core__NativeArray*)var15)->values[1]=var27;
{
var28 = ((val*(*)(val* self))(var15->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var15); /* native_to_s on <var15:NativeArray[String]>*/
}
varonce = var15;
{
var29 = nitc___nitc__ToolContext___error(var11, var14, var28);
}
} else {
}
RET_LABEL:;
}
/* method literal#AFloatExpr#value= for (self: AFloatExpr, nullable Float) */
void nitc__literal___AFloatExpr___value_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__literal__AFloatExpr___value].val = p0; /* _value on <self:AFloatExpr> */
RET_LABEL:;
}
/* method literal#AFloatExpr#accept_literal for (self: AFloatExpr, LiteralVisitor) */
void nitc__literal___AFloatExpr___ANode__accept_literal(val* self, val* p0) {
val* var_v /* var v: LiteralVisitor */;
val* var /* : TFloat */;
val* var2 /* : TFloat */;
val* var3 /* : String */;
double var4 /* : Float */;
val* var6 /* : nullable Float */;
var_v = p0;
{
{ /* Inline parser_nodes#AFloatExpr#n_float (self) on <self:AFloatExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AFloatExpr___n_float].val; /* _n_float on <self:AFloatExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_float");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2519);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__lexer_work___Token___text(var);
}
{
var4 = core___core__Text___to_f(var3);
}
{
{ /* Inline literal#AFloatExpr#value= (self,var4) on <self:AFloatExpr> */
var6 = BOX_core__Float(var4); /* autobox from Float to nullable Float */
self->attrs[COLOR_nitc__literal__AFloatExpr___value].val = var6; /* _value on <self:AFloatExpr> */
RET_LABEL5:(void)0;
}
}
RET_LABEL:;
}
/* method literal#ACharExpr#value for (self: ACharExpr): nullable Char */
val* nitc__literal___ACharExpr___value(val* self) {
val* var /* : nullable Char */;
val* var1 /* : nullable Char */;
var1 = self->attrs[COLOR_nitc__literal__ACharExpr___value].val; /* _value on <self:ACharExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method literal#ACharExpr#value= for (self: ACharExpr, nullable Char) */
void nitc__literal___ACharExpr___value_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__literal__ACharExpr___value].val = p0; /* _value on <self:ACharExpr> */
RET_LABEL:;
}
/* method literal#ACharExpr#accept_literal for (self: ACharExpr, LiteralVisitor) */
void nitc__literal___ACharExpr___ANode__accept_literal(val* self, val* p0) {
val* var_v /* var v: LiteralVisitor */;
val* var /* : TChar */;
val* var2 /* : TChar */;
val* var3 /* : String */;
val* var4 /* : String */;
val* var_txt /* var txt: String */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : ToolContext */;
val* var12 /* : ToolContext */;
val* var13 /* : Location */;
val* var14 /* : NativeArray[String] */;
static val* varonce;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : String */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
val* var22 /* : String */;
val* var23 /* : String */;
val* var24 /* : Message */;
val* var25 /* : SequenceRead[Char] */;
val* var26 /* : nullable Object */;
var_v = p0;
{
{ /* Inline parser_nodes#ACharExpr#n_char (self) on <self:ACharExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ACharExpr___n_char].val; /* _n_char on <self:ACharExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_char");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2527);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__lexer_work___Token___text(var);
}
{
var4 = core___core__Text___unescape_nit(var3);
}
var_txt = var4;
{
var5 = ((long(*)(val* self))(var_txt->class->vft[COLOR_core__abstract_text__Text__length]))(var_txt); /* length on <var_txt:String>*/
}
{
{ /* Inline kernel#Int#!= (var5,3l) on <var5:Int> */
var8 = var5 == 3l;
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
{
{ /* Inline literal#LiteralVisitor#toolcontext (var_v) on <var_v:LiteralVisitor> */
var12 = var_v->attrs[COLOR_nitc__literal__LiteralVisitor___toolcontext].val; /* _toolcontext on <var_v:LiteralVisitor> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__literal, 46);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = nitc___nitc__ANode___hot_location(self);
}
if (unlikely(varonce==NULL)) {
var14 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "Syntax Error: invalid character literal `";
var18 = core__flat___NativeString___to_s_full(var17, 41l, 41l);
var16 = var18;
varonce15 = var16;
}
((struct instance_core__NativeArray*)var14)->values[0]=var16;
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "`.";
var22 = core__flat___NativeString___to_s_full(var21, 2l, 2l);
var20 = var22;
varonce19 = var20;
}
((struct instance_core__NativeArray*)var14)->values[2]=var20;
} else {
var14 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var14)->values[1]=var_txt;
{
var23 = ((val*(*)(val* self))(var14->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var14); /* native_to_s on <var14:NativeArray[String]>*/
}
varonce = var14;
{
var24 = nitc___nitc__ToolContext___error(var10, var13, var23);
}
goto RET_LABEL;
} else {
}
{
var25 = ((val*(*)(val* self))(var_txt->class->vft[COLOR_core__abstract_text__Text__chars]))(var_txt); /* chars on <var_txt:String>*/
}
{
var26 = ((val*(*)(val* self, long p0))((((long)var25&3)?class_info[((long)var25&3)]:var25->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var25, 1l); /* [] on <var25:SequenceRead[Char]>*/
}
{
{ /* Inline literal#ACharExpr#value= (self,var26) on <self:ACharExpr> */
self->attrs[COLOR_nitc__literal__ACharExpr___value].val = var26; /* _value on <self:ACharExpr> */
RET_LABEL27:(void)0;
}
}
RET_LABEL:;
}
/* method literal#AStringFormExpr#value for (self: AStringFormExpr): nullable String */
val* nitc__literal___AStringFormExpr___value(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_nitc__literal__AStringFormExpr___value].val; /* _value on <self:AStringFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method literal#AStringFormExpr#value= for (self: AStringFormExpr, nullable String) */
void nitc__literal___AStringFormExpr___value_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__literal__AStringFormExpr___value].val = p0; /* _value on <self:AStringFormExpr> */
RET_LABEL:;
}
/* method literal#AStringFormExpr#accept_literal for (self: AStringFormExpr, LiteralVisitor) */
void nitc__literal___AStringFormExpr___ANode__accept_literal(val* self, val* p0) {
val* var_v /* var v: LiteralVisitor */;
val* var /* : Token */;
val* var2 /* : Token */;
val* var3 /* : String */;
val* var_txt /* var txt: String */;
long var_behead /* var behead: Int */;
long var_betail /* var betail: Int */;
short int var4 /* : Bool */;
val* var5 /* : SequenceRead[Char] */;
val* var6 /* : nullable Object */;
val* var7 /* : SequenceRead[Char] */;
val* var8 /* : nullable Object */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var_ /* var : Bool */;
long var12 /* : Int */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : SequenceRead[Char] */;
val* var19 /* : nullable Object */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
uint32_t var23 /* : Char */;
short int var_24 /* var : Bool */;
val* var25 /* : SequenceRead[Char] */;
val* var26 /* : nullable Object */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
uint32_t var30 /* : Char */;
long var31 /* : Int */;
long var32 /* : Int */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
long var38 /* : Int */;
long var39 /* : Int */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
const char* var_class_name44;
long var45 /* : Int */;
val* var46 /* : Text */;
val* var47 /* : String */;
var_v = p0;
{
{ /* Inline parser_nodes#AStringFormExpr#n_string (self) on <self:AStringFormExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AStringFormExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2535);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__lexer_work___Token___text(var);
}
var_txt = var3;
var_behead = 1l;
var_betail = 1l;
{
var5 = ((val*(*)(val* self))(var_txt->class->vft[COLOR_core__abstract_text__Text__chars]))(var_txt); /* chars on <var_txt:String>*/
}
{
var6 = ((val*(*)(val* self, long p0))((((long)var5&3)?class_info[((long)var5&3)]:var5->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var5, 0l); /* [] on <var5:SequenceRead[Char]>*/
}
{
var7 = ((val*(*)(val* self))(var_txt->class->vft[COLOR_core__abstract_text__Text__chars]))(var_txt); /* chars on <var_txt:String>*/
}
{
var8 = ((val*(*)(val* self, long p0))((((long)var7&3)?class_info[((long)var7&3)]:var7->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var7, 1l); /* [] on <var7:SequenceRead[Char]>*/
}
{
{ /* Inline kernel#Char#== (var6,var8) on <var6:nullable Object(Char)> */
var11 = var6 == var8;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_ = var9;
if (var9){
{
var12 = ((long(*)(val* self))(var_txt->class->vft[COLOR_core__abstract_text__Text__length]))(var_txt); /* length on <var_txt:String>*/
}
{
{ /* Inline kernel#Int#>= (var12,6l) on <var12:Int> */
/* Covariant cast for argument 0 (i) <6l:Int> isa OTHER */
/* <6l:Int> isa OTHER */
var15 = 1; /* easy <6l:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 729);
fatal_exit(1);
}
var16 = var12 >= 6l;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var4 = var13;
} else {
var4 = var_;
}
if (var4){
var_behead = 3l;
var_betail = 3l;
{
var18 = ((val*(*)(val* self))(var_txt->class->vft[COLOR_core__abstract_text__Text__chars]))(var_txt); /* chars on <var_txt:String>*/
}
{
var19 = ((val*(*)(val* self, long p0))((((long)var18&3)?class_info[((long)var18&3)]:var18->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var18, 0l); /* [] on <var18:SequenceRead[Char]>*/
}
{
{ /* Inline kernel#Char#== (var19,'\"') on <var19:nullable Object(Char)> */
var23 = (uint32_t)((long)(var19)>>2);
var22 = var23 == '\"';
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var_24 = var20;
if (var20){
{
var25 = ((val*(*)(val* self))(var_txt->class->vft[COLOR_core__abstract_text__Text__chars]))(var_txt); /* chars on <var_txt:String>*/
}
{
var26 = ((val*(*)(val* self, long p0))((((long)var25&3)?class_info[((long)var25&3)]:var25->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var25, 3l); /* [] on <var25:SequenceRead[Char]>*/
}
{
{ /* Inline kernel#Char#== (var26,'\n') on <var26:nullable Object(Char)> */
var30 = (uint32_t)((long)(var26)>>2);
var29 = var30 == '\n';
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var17 = var27;
} else {
var17 = var_24;
}
if (var17){
var_behead = 4l;
} else {
}
} else {
}
{
var31 = ((long(*)(val* self))(var_txt->class->vft[COLOR_core__abstract_text__Text__length]))(var_txt); /* length on <var_txt:String>*/
}
{
{ /* Inline kernel#Int#- (var31,var_behead) on <var31:Int> */
/* Covariant cast for argument 0 (i) <var_behead:Int> isa OTHER */
/* <var_behead:Int> isa OTHER */
var34 = 1; /* easy <var_behead:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var38 = var31 - var_behead;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var32,var_betail) on <var32:Int> */
/* Covariant cast for argument 0 (i) <var_betail:Int> isa OTHER */
/* <var_betail:Int> isa OTHER */
var41 = 1; /* easy <var_betail:Int> isa OTHER*/
if (unlikely(!var41)) {
var_class_name44 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name44);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var45 = var32 - var_betail;
var39 = var45;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
{
var46 = ((val*(*)(val* self, long p0, long p1))(var_txt->class->vft[COLOR_core__abstract_text__Text__substring]))(var_txt, var_behead, var39); /* substring on <var_txt:String>*/
}
{
var47 = core___core__Text___unescape_nit(var46);
}
{
{ /* Inline literal#AStringFormExpr#value= (self,var47) on <self:AStringFormExpr> */
self->attrs[COLOR_nitc__literal__AStringFormExpr___value].val = var47; /* _value on <self:AStringFormExpr> */
RET_LABEL48:(void)0;
}
}
RET_LABEL:;
}
